# AiMaMi 1.2.3 macOS tray — internal-reverse 结论包

同步时间：2026-07-24
范围：`codexmate_lib::commands::tray_menu::*`（8 个符号族 / 10 个 `.c` 文件）+ `codexmate_lib::load_tray_template_icon`（根命名空间，1 个文件）+ `codexmate_lib::core::voice::runtime::tray::update_tray_recording_state`（1 个文件），合计 10 个 target / 12 个原始 `.c` 文件。
最终结论：**12 个原始 `.c` 文件全部读完、0 截断，dim2（后端 owner+伪代码）强，但六维 full_leaf_100 门未闭合**（缺 dim4 interface/DTO、dim6 test/acceptance mapping）。当前档位为 `consumerStartReady`（10/10 target），`strictImplementationUse`/`readyToImplement` 均为 0。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

## 证据索引

- 本包直接读取：`raw/aimami/1.2.3/macos-arm64/commands/tray_menu/ida/pseudocode/*.c`（10 文件）、`raw/aimami/1.2.3/macos-arm64/load_tray_template_icon/ida/pseudocode/*.c`（1 文件）、`raw/aimami/1.2.3/macos-arm64/core/voice/runtime/tray/ida/pseudocode/*.c`（1 文件）——全部 12 个文件本次会话逐字读完。
- 底稿：`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` §5（tray_menu，10 文件既有分析）、`backend-baseline/voice-baseline.md` §3（core::voice::runtime::tray，1 文件既有分析）。
- 前端命令面核实：`raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`（131 条 IPC 命令全量，`grep -i tray` 0 命中）。
- 历史参照（不作证据迁移依据，见 manifest.json `prior_version_reference`）：`internal-reverse/audits/macos-1.0.9-tray/`。
- raw evidence 指针：见 `pointers/evidence-paths.md`。

## Coverage

- **commands/tray_menu**：10 个 `.c` 文件，8 个不同符号族（`create_tray_menu`、`create_bootstrap_tray_menu`〔含1个 closure 地址〕、`create_tray_menu_from_snapshot`、`append_codex_router_section`、`handle_tray_menu_event`〔含1个嵌套 closure 地址〕、`refresh_tray_menu`、`refresh_tray_menu_with_snapshot`、`quota_text`）。与 `backend-baseline/commands-baseline.md` 独立统计的"10 文件"一致。
- **load_tray_template_icon**：1 个文件，根命名空间（不在 `commands::` 下），本次会话新增读取（既有 baseline 未覆盖）。
- **core::voice::runtime::tray**：1 个文件（`update_tray_recording_state`），与 `voice-baseline.md` §3 独立分析一致。
- **截断扫描**：12 个文件逐字读完，未发现 `TRUNCATED`/`DECOMPILE-FAILED`/`chars total` 标记，未发现括号不配平。
- **前端命令面**：0 命中——tray 菜单构建/刷新/事件分发全部是 Rust 原生回调（`tauri::menu::MenuBuilder` + `on_menu_event`），从不经 `invoke()` 从 JS 调用；这是架构性质的"无前端调用面"，不是遗漏（见 `gate-report.json` dim1 accepted-native-substitute）。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段逐维度状态）与 `data/task-plan.json`（三档队列）。摘要：
- dim1 前端控制流：accepted-native-substitute（无 invoke() 面，原生菜单回调路径明示接受）
- dim2 后端 owner+伪代码：strong（12/12 文件读完，10/10 target 有真实 owner，0 截断）
- dim3 call-tree 到实现叶子：partial（函数体已逆到真实逻辑，多个实现叶子已在伪代码中直接可见，但未产出逐 target 系统性调用树规约文档）
- dim4 interface/DTO/error/side-effect 边界：**not-closed**
- dim5 同平台 gate：mac closed-for-existence；windows 本次未做（raw 已存在但 owner 未解析，超出本任务范围）
- dim6 test/acceptance mapping：**not-closed**

## Frontend Control Flow

无。用户触发面是原生 macOS 菜单栏图标 + `NSMenu` 菜单项（由 `tauri::menu::MenuBuilder` 拼装，Tauri `on_menu_event` 原生回调分发到 `handle_tray_menu_event`），全程不经过 React 组件树或 `invoke()`。菜单项 id 命名空间（从伪代码字符串字面量交叉确认）：`tray_bootstrap_title`/`tray_bootstrap_subtitle`（引导态占位）、`tray_active_title`/`tray_active_subtitle`（已加载态标题/用量文案）、`tray_codex_router_status`（路由状态子菜单）、`tray_open_main`（打开主窗口）、`tray_quit`（退出）、`tray_account:<key>`（逐账号切换项，前缀匹配）。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`、`logic/REGISTRATION-TABLE-1.2.3.md`。模块职责总览：
- `create_tray_menu` = 统一入口，按 `get_cached_display_snapshot` 是否已就绪（sentinel==3 判定未就绪）分派到 `create_bootstrap_tray_menu`（引导态）或 `create_tray_menu_from_snapshot`（完整态）。
- `create_bootstrap_tray_menu` = 应用启动早期、账号状态未知时的菜单：标题/副标题占位项 + `append_codex_router_section` 路由状态子菜单 + 打开主窗口 + 退出。
- `create_tray_menu_from_snapshot`（31KB，本包内最大函数）= 完整态菜单：标题 + 用量副标题（`quota_text` 格式化，账号数为哨兵值 2 时用静态"获取账号数据中"占位）+ 逐账号 `CheckMenuItem` 列表（勾选态=该账号是否激活，读取账号数组 offset a3+680/计数 a3+688，每项 352 字节 stride）+ 分隔符 + `append_codex_router_section` + 打开主窗口 + 退出。
- `append_codex_router_section` = 读 `RelayManager::snapshot` + `sanitize_for_export`（只读），按 provider 数量（0/1/多个）格式化中文状态文案，追加为 `tray_codex_router_status` 菜单项。
- `handle_tray_menu_event` = 菜单点击事件分发器：对菜单项 id 做 XOR/长度混淆的字符串比对（IDA 把短字符串比较编译折叠成整数异或+长度检查），`tray_quit`→`request_user_quit`（根命名空间，应用退出流程，本包未展开）；`tray_open_main`/`tray_active_title`/`tray_active_subtitle`（长度 14/17/20）→ 统一走 `hotspot::focus_main_window`；默认分支匹配 `tray_account:` 前缀→解析账号 key→与本地状态比对→格式化后用 `tauri_plugin_dialog::MessageDialogBuilder` 弹原生确认对话框（具体确认按钮到账号切换的接线本次未完全追踪，见下方 Unknown）。
- `handle_tray_menu_event::{closure}::{closure}`（独立地址 0x100702600）= 调用 `commands::accounts::switch_account_and_restart_sync`，成功（`Result::Ok`）则调 `refresh_tray_menu`。
- `refresh_tray_menu`/`refresh_tray_menu_with_snapshot` = **完整重建并替换**（非增量更新）：调用 `create_tray_menu`/`create_tray_menu_from_snapshot` 重建整个菜单对象，`tray_by_id("main")` 取到系统托盘图标句柄，`TrayIcon::set_menu` 整体替换。**本条纠正既有 baseline 的"不重建整个菜单对象，更新展示文案"表述**（见 `gate-report.json.corrections_to_prior_baseline`）。
- `quota_text` = 用量数字格式化：两个 i32 字段（offset+112/+120/+152，哨兵值 2 表示未知）都已知时格式化为组合文案，任一未知时退化为单字段文案，都未知时返回单字符 `"-"`。
- `load_tray_template_icon` = 用 `image` crate 解码内嵌 PNG（`ImageReader::with_guessed_format` + `decode`）为 `DynamicImage`，再 `to_rgba8()` 转 RGBA8 像素缓冲，作为基础托盘图标源。
- `update_tray_recording_state` = 找到 id="main" 的托盘图标（字符串常量里连带混入了后续函数的字面量残留 "stopLeftDownmovecell"，与本函数命令名解析无关，属编译期字符串合并副产物），重新解码同一枚内嵌 PNG，录音中（`a2` 为真）时在图标像素缓冲角落用 `dx²+dy²≤r²` 距离判定手绘一个红色圆点（`-14276900` 常量），随后 `TrayIcon::set_icon` + `set_icon_as_template(!录音中)`（录音时关闭单色模板渲染让红点保持彩色可见）。

## Interface / Error / Boundary

**未闭合**（dim4）。读代码过程中记录的字段偏移（非系统化提取，仅供参考，不作为闭合证据）：`CoreSnapshotPayload` 账号数组在 `a3+680`（指针）/`a3+688`（计数，stride 352 字节）；每账号 checkbox 激活标志在条目 `offset+153`；用量 i32 对在 `a3+112`/`a3+120`/`a3+152`（值 2 = 未知哨兵）；覆盖态副标题字符串在 `a3+208`；账号 key 表索引字节在 `a3+344`。

## Gate Leaf Status

`consumerStartReady` 全 10 个 target；`strictImplementationUse`/`readyToImplement` 为空。详见 `gate-report.json`。

## Diff 结论

未对 1.0.9 版本做正式 diff（RULE 9 `diff_required`：跨度过大、本次未建立 diff basis）。`internal-reverse/audits/macos-1.0.9-tray/` 存在但函数地址/二进制均不同，其 `readyToImplement=true` 声明**不迁移**到本包（见 manifest.json `prior_version_reference`，也不符合当前 full_leaf_100_definition_v2 六维格式）。相对 1.2.2 的 tray 专属行为差异未见于 `COVERAGE-FINAL-1.2.3.md`/`commands-baseline.md` 的 NEW-delta 标记列表（9 个 1.2.3 新增函数中无 tray_menu 成员，全部头注释为"基线 same-set"）——即本次读到的 10 个 target 相对 1.2.2 均未标注为新增/变更，但未独立验证。

## Unknown / Missing

1. `handle_tray_menu_event` 的 `tray_account:` 分支中，原生确认对话框的按钮到 `switch_account_and_restart_sync` 调用的确切接线路径未完全追踪（闭包存在且被确认调用，但触发点未 100% 定位），标 `blocks_start`，非 `accepted_unknown`。
2. windows-x64 1.2.3 tray 原始证据已存在（`raw/aimami/1.2.3/windows-x64/tray/`，2 个 stripped `sub_XXXX` 函数，owner 未解析）但本次未做——超出本任务范围（仅 mac tray 归并），未来需独立 windows-1.2.3-tray 包闭合 dim5。
3. dim4 interface/DTO 抽取、dim6 test/acceptance mapping：均未产出，是推进到 `strictImplementationUse` 的下一步工作。
4. `create_bootstrap_tray_menu`/`create_tray_menu_from_snapshot` 中菜单项 id 的完整命名空间只从字符串字面量交叉确认（`tray_bootstrap_title`/`tray_bootstrap_subtitle`/`tray_active_title`/`tray_active_subtitle`/`tray_codex_router_status`/`tray_open_main`/`tray_quit`/`tray_account:`），未逐 id 做独立 xref 验证。

## Action / Non-action

- **可以做**：`consumerStartReady` 档已满足，Polaris 可基于本包记录的 10 个 target 行为语义（菜单构建/刷新是完整重建+替换、事件分发按 id 前缀路由、用量文案格式化规则、录音态图标红点叠加算法）开始实现参照，但不得宣称与 upstream 100% 等价。
- **不要做**：不得把"12/12 文件读完、0 截断"当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得对外发布本包任何内容（红线 23，内部专用）；不得用本包的 `refresh_tray_menu` 纠正结论去外推其他模块的刷新语义；不得把 1.0.9 tray 包的 `readyToImplement=true` 当作本包（1.2.3）已闭合的证据。
