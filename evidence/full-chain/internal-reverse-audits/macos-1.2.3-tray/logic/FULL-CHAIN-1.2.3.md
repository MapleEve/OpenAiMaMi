# FULL-CHAIN-1.2.3 — macOS tray (原生菜单触发 → Rust 回调 → core 读取/副作用)

来源：本次会话逐字读取 `raw/aimami/1.2.3/macos-arm64/{commands/tray_menu,load_tray_template_icon,core/voice/runtime/tray}/ida/pseudocode/*.c`（12 文件）+ `backend-baseline/commands-baseline.md` §5 + `backend-baseline/voice-baseline.md` §3。本文档是模块级链路叙述，**不是逐 target call-tree-to-leaf 规约**（dim3 未系统化产出，见 gate-report.json）。

## 1. 触发层（无前端，原生菜单）

不存在 JS 侧组件或 `invoke()` 调用。触发面是：
- 应用启动时 Tauri tray 图标构建流程调用 `create_tray_menu` 生成初始菜单（内部走 `create_bootstrap_tray_menu`，因为此时账号快照通常尚未就绪）。
- 用户点击菜单栏图标弹出 `NSMenu`，点击具体菜单项时 Tauri 原生 `on_menu_event` 回调触发 `handle_tray_menu_event`，参数为被点击菜单项的 id 字符串。
- 账号状态变化（登录/切换/登出）或 relay 配置变化（增删/切换 provider）时，其他模块的命令处理函数会主动调用 `refresh_tray_menu`/`refresh_tray_menu_with_snapshot` 使菜单与最新状态同步（例如 `commands::accounts::broadcast_runtime_snapshot_with_account`、`commands::relay::delete_relay_provider`/`upsert_relay_provider` 的成功路径，见 `backend-baseline/commands-baseline.md` §1/§3 交叉引用，本包未展开这些调用方自身逻辑，只确认它们调用本包 target）。

## 2. 菜单构建层（`commands::tray_menu`）

- `create_tray_menu`（统一入口）：调 `commands::accounts::get_cached_display_snapshot`，若返回值的 LODWORD sentinel==3（未就绪）→ 走 `create_bootstrap_tray_menu`；否则把快照数据传给 `create_tray_menu_from_snapshot`。
- `create_bootstrap_tray_menu`：拼装引导态菜单——`tray_bootstrap_title`（占位标题，id 长度 21）+ `tray_bootstrap_subtitle`（占位副标题，id 长度 20/23，两处不同的 with_id 调用对应菜单不同状态分支）+ `append_codex_router_section` 路由子菜单 + `tray_open_main`（id 长度14）+ 分隔符 + `tray_quit`（id 长度9）。内部有一个专用 closure（同符号族第二地址）负责 `tauri::error::Error` 到字符串的统一格式化，供多处 `unwrap_failed` panic 路径复用。
- `create_tray_menu_from_snapshot`（本包最大函数，31KB）：
  - 标题项 id=18（`tray_active_title`长度17实际标题项id串长18，副标题id长度17对应`tray_active_title`本身，需以原始字符串字面量为准，此处以 IDA 报告的 length 参数为准不做二次编造）。
  - 副标题：账号数快照字段（`*(_QWORD*)a3`）== sentinel 2 时用固定占位文案（24 字节，格式化为"正在获取账号数据"语义字符串）；否则读 `a3+208` 的覆盖字符串（若非空则直接用），否则调 `quota_text` 生成用量格式化文案。
  - 账号列表：读 `a3+680`（指针，条目起始+184字节偏移作首个 quota 字段基址）/`a3+688`（计数），每条目 stride 352 字节，逐条目调 `quota_text` 生成用量文案 + 账号名/key 格式化为菜单项 label，`CheckMenuItem::with_id` 用 `offset+153` 的字节作为初始勾选态（是否为当前激活账号）。
  - 分隔符 + `append_codex_router_section` + 分隔符 + `tray_open_main`（id长度14）+ 分隔符 + `tray_quit`（id长度9）。
- `append_codex_router_section`：`tauri::state::StateManager::try_get` 取 relay manager 状态句柄；若不存在直接透传上层已构建的 builder（无路由子菜单，容错路径）；若存在则 `RelayManager::snapshot` + `sanitize_for_export`（只读取 provider 数量与启用态，不读密钥等敏感字段——脱敏由 `sanitize_for_export` 负责），按数量 0/1/多个分别格式化中文状态文案（0="已停用"语义、1=单数形式、多个=数字+复数后缀），构建 `tray_codex_router_status` 菜单项（id 长度24）追加到菜单尾部（分隔符之后）。
- `quota_text`：读入参结构体 offset+80/+120（sentinel 判定）与 offset+112/+152（i32 数值），两者都非 sentinel(2) 时格式化为"已用/总量"组合文案；任一为 sentinel 时退化为单值文案；两者都是 sentinel 时返回单字符 `"-"`。

## 3. 事件分发层（`handle_tray_menu_event`）

- 参数 a3 为菜单项 id 字节长度，a2 为 id 字节指针（IDA 把短字符串比较编译成"取前 8/16 字节做整数异或+长度检查"的形式，非本包手工编造，直接读自伪代码 switch 分支的常量异或值）。
- `a3==9`（"tray_quit"）→ 调根命名空间 `codexmate_lib::request_user_quit`（本包未展开该函数自身逻辑，是应用退出确认流程入口，跨模块指针见 `pointers/evidence-paths.md`）。
- `a3∈{14,17,20,23,24}`（对应 "tray_open_main"/"tray_active_title"/"tray_active_subtitle" 等固定 id）→ 统一走 `LABEL_14`，调 `commands::hotspot::focus_main_window` 把主窗口前置聚焦。
- 默认分支（`a3>=13` 且前缀匹配 "tray_acc..."，即 "tray_account:<key>"）→ 解析出 id 中 "tray_account:" 之后的账号 key 子串，加锁读取 `Repository::load_local_state_synced`，在已加载账号数组中按 key 定长比较（stride 352）查找匹配项；找到则克隆匹配到的字符串值（可能是账号显示名或次要标识，未逐字段命名）；随后无论找到与否都会释放锁，若找到则继续格式化一段文案并用 `tauri_plugin_dialog::MessageDialogBuilder` 弹原生对话框（含中文按钮文案，UTF-8 十六进制常量在伪代码中出现，语义指向"确认切换"类交互，未逐字节翻译成明文以免过度演绎）。
- 独立地址 `handle_tray_menu_event::{closure}::{closure}`（0x100702600）：调用 `commands::accounts::switch_account_and_restart_sync`，其 `Result` 判别式（LODWORD==2）为 Ok 时调用 `refresh_tray_menu` 使菜单反映切换后的新激活账号。**这个 closure 与上一步对话框之间的确切触发关系（对话框确认按钮的回调是否就是这个 closure）未在本次读码中 100% 确认**，记为 `blocks_start`（见 gate-report.json unknowns）。

## 4. 图标层（独立于菜单构建，`load_tray_template_icon` + `core::voice::runtime::tray::update_tray_recording_state`）

- `load_tray_template_icon`：`image` crate `ImageReader::with_guessed_format` 猜测内嵌 PNG 格式 → `decode()` → 成功（判别式==10）则 `DynamicImage::to_rgba8()` 转为 RGBA8 像素缓冲返回；失败路径格式化错误信息返回 Err。未見调用方（本包未展开谁调用它——从函数名与行为看，是应用启动时初始化默认托盘图标的资源加载器，命令行为独立于 `commands::tray_menu` 菜单构建路径）。
- `update_tray_recording_state`：`tray_by_id("main")` 拿到系统托盘句柄 → 内部重新执行与 `load_tray_template_icon` 几乎相同的 PNG 解码流程（未复用/缓存 `load_tray_template_icon` 的返回值，是各自独立的解码调用）→ 录音标志 `a2` 为真时，在像素缓冲右下角区域用 `dx²+dy²≤r²` 距离判定手绘纯色红点（ARGB 常量 `-14276900`）→ `TrayIcon::set_icon` 应用新图标 → `set_icon_as_template(!a2)` 控制 macOS 模板图像单色渲染开关（录音时关闭单色模式以保留红点颜色）。调用方（`core::voice::runtime::start_capture`/`apply_sidecar_event`）见 `raw/aimami/1.2.3/macos-arm64/backend-baseline/voice-baseline.md`，本包不展开 voice 模块自身逻辑，仅确认它是本 target 的已知调用方。

## 5. 已知实现叶子（部分，未系统化）

- `TrayIcon::set_menu` / `TrayIcon::set_icon` / `TrayIcon::set_icon_as_template` — macOS 原生 UI 状态变更（Tauri 封装的 `NSStatusItem` 操作）。
- `tauri_plugin_dialog::MessageDialogBuilder::show` — 原生系统对话框弹出（`tray_account:` 分支）。
- `tauri::Emitter::emit`（间接，经 `refresh_tray_menu` 的调用方如 `broadcast_runtime_snapshot_with_account`，非本包 target 自身直接调用）。
- 只读：`RelayManager::snapshot`/`sanitize_for_export`、`Repository::load_local_state_synced`、`get_cached_display_snapshot` —— 均不产生持久化副作用，只读内存态快照。

**注**：以上叶子归纳来自函数体直接可见的调用，未逐 target 做 fs/http/registry/process/sidecar/response/error termination 的系统化标注（dim3 partial，非 dim3 closed）。
