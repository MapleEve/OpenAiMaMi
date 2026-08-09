# VERSION-DIFF.md — AiMaMi 1.2.4 → 1.2.6 (Windows x64)
**Generated**: 2026-08-08 (canonical migration)
**Sources**: backend-function-diff.json + commands-platform-coexisting-body-diff + 128cmd-identity-ledger + authoritative-symbol-diff-v2-live-verified
**Session**: `<审计会话> | Status: recon_only_census_and_bounded_diff


## Census (1.2.6 win)
- total_functions_idb: 106272
- app_path_modules_found: ["src/commands/account_io.rs", "src/commands/account_oauth.rs", "src/commands/accounts.rs", "src/commands/analytics.rs", "src/commands/autostart.rs", "src/commands/debug_bundle.rs", "src/commands/debug_report.rs", "src/commands/relay.rs", "src/commands/sessions.rs", "src/commands/skills.rs", "src/commands/system.rs", "src/commands/voice.rs", "src/commands/voice_runtime.rs", "src/core/account_coord
- seed_count: 433 | propagated: 617 | attributed_total: 1050
- top_level_histogram: `{"commands": 74, "core": 881, "run": 0, "platform": 53, "daemon": 0, "lib_root": 42, "other_top_level": 0}`


## Module-level pairs (commands/platform)
- commands:: (src/commands/*.rs, layer1-2 base): v124=67 v126=74 delta=+7 (+10.4%) classification=noise_below_2x
- platform:: (src/platform/*.rs, layer1-2 base): v124=51 v126=53 delta=+2 (+3.9%) classification=noise_below_2x
- platform::process: v124=29 v126=32 delta=+3 (+10.3%) classification=noise_below_2x
- IPC 命令合同集（前端视角）: v124=134 v126=134 delta=0 added / 0 removed classification=identical_contract


## Real change candidates (body-level diff)
- id=1: codex_bundled_cli_path 候选串集缩减 — 1.2.4 候选集含 Codex.exe（大写）+ App Paths\Codex.exe 注册表风格串；1.2.6 同形态函数仅剩小写 codex.exe + 目录段，注册表候选移出。1.2.6 侧已完整反编译（本文件 function_level_pairs[5]）。
- id=2: ChatGPT 桌面应用定位器（sub_140B370F0） — 1.2.6 新增能力：10 环境变量候选 + reg query + powershell + where 四级定位链解析 ChatGPT 桌面应用路径；1.2.4 文档零对应（文档级证据，非现场重扫）。1.2.6 侧已完整反编译（5839B/227 blocks/25 callees，无截断）。与 4 条官方 changelog 条目的直接归属未确立（跨 map 文档无 chatgpt/desk

## Raw leaf 生产总结（2026-08-09）

### Delta 命令 full-chain（117 raw leaves, 116 decompiled, 1 decompile_null gate-pass-via-callee）
对 delta-commands.txt 中所有带 EA 的命令（conf=high）逐个走 full-chain，落盘到 `raw/aimami/1.2.6/windows-x64/<module>/<cmd>/`：

| 模块 | Leaf 数 | 反编译成功 | decompile_null（gate-pass-via-callee） |
|---|---|---|---|
| commands/accounts | 17 | 16 | 1 (load_snapshot) |
| commands/system | 62 | 62 | 0 |
| commands/relay | 16 | 16 | 0 |
| commands/voice | 2 | 2 | 0 |
| commands/sessions | 4 | 4 | 0 |
| commands/mcp | 3 | 3 | 0 |
| commands/skills | 6 | 6 | 0 |
| commands/analytics | 6 | 6 | 0 |
| platform/process | 1 | 1 | 0 |
| **合计** | **117** | **116** | **1** |

delta gate verdict: **117/117 PASS**（全部达 implementation leaf；1 个 decompile_null 的 load_snapshot 通过 callee count>=5 满足 call-tree gate，非 Hex-Rays 伪代码门）。
- load_snapshot (0x140d73cb0): Hex-Rays 确认真 null_cfunc（非截断桩，红线20 PASS），.c 为 178B failure stub，但 call-tree 30 edges 满足 gate；本轮未重建（无 disasm 重建，维持 decompile_null gate-pass 状态）。

每个 leaf 含 4 个规范文件：`evidence.md` + `ida/pseudocode/<cmd>_0x<ea>.c` + `call-tree.json` + `interface-report.json`。
原 2 个 decompile_null 命令（import_accounts_from_file, configure_auto_switch）已于 2026-08-09 通过 IDA disasm 重建补做到 implementation leaf：
- import_accounts_from_file (0x140d62e30): Hex-Rays null_cfunc → IDA disasm+strings+callees+basic_blocks(162/CC=51) 重建, source=ida, status=decompiled
- configure_auto_switch (0x140d44bd0): Hex-Rays null_cfunc → IDA disasm+strings+callees+basic_blocks(134/CC=44) 重建, source=ida, status=decompiled

### Same 命令复用（8 commands，不重逆）
以下命令 owner 两版本都在且 IDA 伪代码体等价，复用 1.2.4 raw 证据，不重逆：
- clean, get_image_compat, get_codex_router_auth_readiness, open_path (shared dispatcher 0x140174120)
- get_claude_web_search_compat (0x14014ade0), set_claude_web_search_compat (0x140d47c70)
- remove_mcp_server (0x140156d90), set_codex_no_account_slots (0x140d75ea0)

复用声明见 `same-command-reuse.md`。

### Confirmed absent（10 commands，不产出 rawleaf）
以下命令在 1.2.6 win IDB 中未找到 handler EA（v126_ea=None, conf=none），标记为 confirmed_absent，不产出 raw leaf：
1. default_debug_bundle_file_name
2. cancel_chatgpt_oauth_login
3. check_update_installability
4. load_custom_instruction_state
5. cancel_voice_trigger_capture
6. preview_custom_instruction_apply
7. apply_custom_instruction
8. clear_custom_instruction_block
9. rollback_custom_instruction
10. get_system_info

这 10 个命令可能：(a) 前端声明但后端未实现；(b) 使用动态分发（generate_handler! 宏展开后符号消除）；(c) 平台差异（mac 有 win 无）。前端 IPC 合同集 134=134 无变化，这些命令在前端有 invoke 调用但后端 handler 不可达。

### codex_bundled_cli_path（real change candidate id=1）
候选串集缩减，非新增命令。1.2.4 候选集含 Codex.exe（大写）+ App Paths 注册表串；1.2.6 同形态函数仅剩小写 codex.exe。已在 1.2.4 `platform/process/codex_bundled_cli_path/` leaf 中记录，1.2.6 侧通过 same-command-reuse 复用。
