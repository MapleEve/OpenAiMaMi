# VERSION-DIFF.md — AiMaMi 1.2.3 → 1.2.4 (Windows x64)
**Generated**: 2026-08-08 (canonical migration)
**Source**: backend-function-diff-1.2.3-to-1.2.4.json (schema `c5cm.reverse.version_delta.windows_backend_function_census_diff.v1`)
**Session**: `cc-aimami124-win-fullmodule-census-20260807-round2-unblocked` | Status: recon_census_completed_layer1_2_only

## Module delta (step5)
- new in 1.2.4: `core/relay/anthropic_history` (6 attributed funcs, genuinely new module path — cross-confirmed by mac symbol diff: `codexmate_lib::core::relay::anthropic_history::rectify_invalid_thinking_signature` added at ea 0x1004afd70)
- modules potentially missing from 1.2.4: `commands` bare mod.rs level (57 funcs, likely detection artifact not deletion — NOT corroborated by mac symbol diff), `core/relay/transition_journal` (1 func, possibly merged — flagged Unknown)
- count shifts (layer1-2 basis, not apples-to-apples with 1.2.3's 1133 enriched total): commands:: 71→70 (-1.4%), platform:: 53→52 (-1.9%) — both noise_below_2x

## Delta-逆向 commands (delta-逆 — IDA full-chain to implementation leaf)
6 commands delta full-chain'd (100% to implementation leaf):
1. `get_claude_web_search_compat` — module=commands::system, owner=0x140156ef0, call-tree=12 edges, PASS
2. `set_claude_web_search_compat` — module=commands::relay, owner=0x140e01580, call-tree=28 edges, terminated=persistence_commit, PASS
3. `set_codex_no_account_slots` — module=commands::relay, owner=0x140e2de30, call-tree=29 edges, terminated=persistence_commit, PASS
4. `codex_bundled_cli_path` — module=platform::process, owner=0x140a19ac0, call-tree=4 edges, terminated=external_call_recorded, PASS
5. `remove_accounts` (body-diff) — module=commands::accounts, owner=0x140e223b0, call-tree=30 edges, terminated=persistence_commit, PASS
6. `quit_keeping_router` (body-diff) — module=commands::relay, owner=0x140173f00, call-tree=14 edges, terminated=error_return, PASS

delta gate: 6/6 = 100% 达 implementation leaf (edges>=5 或 terminated_reason).

## Same-skip commands (same-skip — reuse 1.2.3 baseline evidence, not re-reversed)
- 116 same commands: handler EA located in 1.2.4 via command-name string xref, all callee ratio <2x (1.14-1.50x), classified noise_below_2x
- 50 coexisting commands::/platform:: functions: callee line (only cross-version comparable line) all <2x, confirms noise classification
- Same-skip reuse condition: owner present in both versions AND callee set equivalent AND frontend CCF unchanged
- Reuse source: `raw/aimami/1.2.3/windows-x64/` (1271 .c files)
- 10 commands NOTFOUND in both 1.2.4 and 1.2.6 (command-name string not in binary string pool — likely runtime-constructed or compiler-optimized): default_debug_bundle_file_name, cancel_chatgpt_oauth_login, check_update_installability, load_custom_instruction_state, cancel_voice_trigger_capture, preview_custom_instruction_apply, apply_custom_instruction, clear_custom_instruction_block, rollback_custom_instruction, get_system_info
