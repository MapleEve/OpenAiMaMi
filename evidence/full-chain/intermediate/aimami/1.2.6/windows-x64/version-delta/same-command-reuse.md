# Same-command reuse declarations (AiMaMi 1.2.4 → 1.2.6 Windows x64)

binary-sha-prev (1.2.4): 5b6aa827d6bde7c3a045c10d14b395fab87230fea434cb3d8f8631f79c6dc6b7
binary-sha-new (1.2.6): 763c9b677d612b18115cb56c03f717b1820deb09ad32f89fd43619a0fdcc60fb

## Already paired (confirmed same handler, 8 commands)

same-version-reuse: clean
  prev-evidence: (shared dispatcher, no dedicated 1.2.4 leaf)
  owner-addr-prev: 0x140174120 (tauri_master_invoke_handler_shared_dispatcher)
  owner-addr-new: 0x140174120
  reuse-condition: IDA owner+callee 伪代码体等价 AND 前端 CCF 未变

same-version-reuse: get_image_compat
  prev-evidence: (shared dispatcher, no dedicated 1.2.4 leaf)
  owner-addr-prev: 0x140174120
  owner-addr-new: 0x140174120
  reuse-condition: shared dispatcher, identical behavior

same-version-reuse: get_claude_web_search_compat
  prev-evidence: raw/aimami/1.2.4/windows-x64/commands/system/get_claude_web_search_compat/
  owner-addr-prev: (see 1.2.4 evidence)
  owner-addr-new: 0x14014ade0
  reuse-condition: IDA owner+callee 伪代码体等价 AND 前端 CCF 未变

same-version-reuse: set_claude_web_search_compat
  prev-evidence: raw/aimami/1.2.4/windows-x64/commands/relay/set_claude_web_search_compat/
  owner-addr-new: 0x140d47c70
  reuse-condition: IDA owner+callee 伪代码体等价 AND 前端 CCF 未变

same-version-reuse: remove_mcp_server
  prev-evidence: (1.2.4 dispatch shell, 1.2.6 归位于 /codexmate_lib/core/mcp/remove_mcp_server)
  owner-addr-new: 0x140156d90
  reuse-condition: body-diff screening passed (coexisting function pair)

same-version-reuse: open_path
  prev-evidence: (shared dispatcher)
  owner-addr-new: 0x140174120
  reuse-condition: shared dispatcher, identical behavior

same-version-reuse: get_codex_router_auth_readiness
  prev-evidence: (shared dispatcher, 1.2.6 backend/codex-router-auth-readiness leaf exists)
  owner-addr-new: 0x140174120
  reuse-condition: shared dispatcher, identical behavior

same-version-reuse: set_codex_no_account_slots
  prev-evidence: raw/aimami/1.2.4/windows-x64/commands/relay/set_codex_no_account_slots/
  owner-addr-new: 0x140d75ea0
  reuse-condition: IDA owner+callee 伪代码体等价 AND 前端 CCF 未变

## Coexisting function pairs (body-diff screening passed)
- get_claude_web_search_compat: module moved commands::system→commands/claude_web_search_compat
- set_claude_web_search_compat: module moved commands::relay→commands/claude_web_search_compat
- set_codex_no_account_slots: module moved commands::relay→commands/codex_no_account_slots
- remove_mcp_server: 1.2.6 归位于 /codexmate_lib/core/mcp/remove_mcp_server
- tauri_master_invoke_handler_shared_dispatcher: tauri generate_handler! 主分发表
- codex_bundled_cli_path: platform::process (候选集缩减, 1.2.6 已完整反编译)
- single_instance acquire: platform::single_instance (两版本均内联于根桶 bootstrap)
- ChatGPT 桌面应用定位器: platform::process (1.2.6 新增, 已完整反编译)
