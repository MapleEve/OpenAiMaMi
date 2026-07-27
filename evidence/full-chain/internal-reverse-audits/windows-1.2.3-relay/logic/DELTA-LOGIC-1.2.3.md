# DELTA-LOGIC-1.2.3 — Windows relay 相对 1.2.1 的行为差异

来源：`internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`（生产者会话注明 "win 1.2.1→1.2.3"）。

## 1. Win 符号级 delta（strip 二进制，无 nm 符号表）

Windows strip 二进制无法像 macOS 那样用 nm/符号枚举 diff；本轮改用 panic 路径 + 行为锚点串定位，逆全 **15 个 win delta 锚点函数**：
- 2 个 autostart 命令 owner（`get_autostart_state`/`set_autostart_enabled`，relay 域外，changelog 未记录）
- 4 个新模块 anchor
- session_meta 改写相关 3 个
- `aimami_relay_*` 清理相关 3 个（②"关闭路由"修复核心，对应 macOS 侧 `strip_invalid_router_top_level_model`）
- reasoning 相关 1 个
- router_model_restore 相关 3 个

Win 源码路径 diff 证实 4 个新 `.rs` 文件：`autostart`/`account_coordination`/`account_io`/`relay/invariants`——`relay/invariants` 是本包直接相关的新增源文件，对应 macOS `invariants`（`RouterConfigSurface`）子模块。

## 2. 与 macOS 侧的行为一致性

②"关闭路由"修复（`aimami_relay_*` 清理 + 剥离失效 provider 残留 model 指令）和 ③（session_meta 改写、reasoning 路由、router_model_restore）在 Windows 侧均有对应的行为锚点函数证据，与 macOS 侧 `logic/DELTA-LOGIC-1.2.3.md` 描述的行为一致——**这是跨平台行为一致性的间接证据（同一 Rust 代码库交叉编译），但不是逐函数字节级平台对等证明**，dim5 platform gate 仍要求独立闭合，不得互相外推。

## 3. Win 命令命名残留

16 个合池/歧义命令未精确命名（需 mac 符号辅助定位）——这是 Windows strip 二进制的物理上限（ICF 折叠 + 无符号表），非漏逆。1 条（`get_codex_router_auth_readiness` ↔ `open_path`）已在本包 gate-report.json `blocked_commands` 中明确记录并解清（以 Mac 为准）；另 2 条（`sub_140187580`/`sub_140CCE030`）身份待证，内容非空。

## 4. same-set 迁移

未受本版本 diff 影响的 Windows relay 函数按迁移规约沿用 1.2.1/1.2.2 证据，本包未逐一列出（如需可通过 `pointers/evidence-paths.md` 追加历史 bundle 指针）。
