# AiMaMi 1.2.3 windows-x64 commands::relay::* — Command Owner Surface (strip PE, no decompile)

Produced: 2026-07-23 · session `relay123-surface` · machine `<host>` · binary `AiMaMi.1.2.3 win64.exe` (PE) · SHA-256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`

Method: frontend `ipc-contracts.jsonl` (macos-arm64 bundle, shared JS asset — command **names only**, not ownership, are cross-platform-derived) relay/proxy command list, plus 2 commands recovered only via deeper frontend page-level extraction (`raw/aimami/1.2.3/macos-arm64/frontend/pages/relay-frontend.md` `relay_command_universe`, not present in the static `ipc-contracts.jsonl` extractor: `diagnose_codex_router`, `test_relay_draft_stream`) → `find_regex('"<command>"')` on windows-x64 IDB → `xrefs_to` (1-hop) → unique enclosing function = handler (skill red line 24 §3, "tauri 命令名串→唯一 xref 函数=handler").

23 commands total. 22/23 resolved cleanly to a single unique owner each (3 of those are `api_proxy`-prefixed relay-adjacent commands). 1 command blocked (ambiguous).

| command | addr | fn name | size | tier | evidence |
|---|---|---|---|---|---|
| activate_relay_provider | 0x140190250 | activate_relay_provider | 0x5bb | A | command-string-1hop-xref |
| deactivate_relay_provider | 0x14018f9c0 | deactivate_relay_provider | 0x5bb | A | command-string-1hop-xref |
| delete_relay_provider | 0x140190ae0 | delete_relay_provider | 0x60b | A | command-string-1hop-xref |
| detect_api_proxy_config | 0x140cc3950 | detect_api_proxy_config | 0xae9 | A | command-string-1hop-xref |
| export_relay_config | 0x14016a7b0 | export_relay_config | 0x61b | A | command-string-1hop-xref |
| fetch_relay_models_draft | 0x140cc9510 | fetch_relay_models_draft | 0x2fd3 | A | command-string-1hop-xref |
| get_codex_router_auth_readiness | 0x140194810 | open_path | 0x6250 | BLOCKED | ambiguous — see below |
| get_relay_active | 0x140188800 | get_relay_active | 0x3e8 | A | command-string-1hop-xref |
| get_relay_provider_quota | 0x140cc79d0 | get_relay_provider_quota | 0x12f0 | A | command-string-1hop-xref |
| get_relay_proxy_status | 0x140188250 | get_relay_proxy_status | 0x3a8 | A | command-string-1hop-xref |
| import_relay_config | 0x14018d960 | import_relay_config | 0x60b | A | command-string-1hop-xref |
| load_quota_history | 0x140cdb800 | load_quota_history | 0x1b79 | A | command-string-1hop-xref |
| load_relay_state | 0x140191ce0 | load_relay_state | 0x388 | A | command-string-1hop-xref |
| reorder_relay_providers | 0x14018ea50 | reorder_relay_providers | 0x4be | A | command-string-1hop-xref |
| reveal_relay_api_key | 0x14018e270 | reveal_relay_api_key | 0x56e | A | command-string-1hop-xref |
| set_api_proxy_config | 0x14018d140 | set_api_proxy_config | 0x5fd | A | command-string-1hop-xref |
| set_codex_router_enabled | 0x140cbb250 | set_codex_router_enabled | 0x12e1 | A | command-string-1hop-xref |
| set_codex_router_no_account_mode | 0x140cb8050 | set_codex_router_no_account_mode | 0x12bf | A | command-string-1hop-xref |
| set_relay_provider_network | 0x14018f120 | set_relay_provider_network | 0x5cb | A | command-string-1hop-xref |
| test_api_proxy_config | 0x140cc4a70 | test_api_proxy_config | 0xcc5 | A | command-string-1hop-xref |
| upsert_relay_provider | 0x1401913f0 | upsert_relay_provider | 0x5ee | A | command-string-1hop-xref |
| diagnose_codex_router | 0x140187580 | sub_140187580 | 0x388 | A | command-string-1hop-xref (owner not yet decompiled/named) |
| test_relay_draft_stream | 0x140cce030 | sub_140CCE030 | 0x1584 | A | command-string-1hop-xref (owner not yet decompiled/named) |

## Blocked: get_codex_router_auth_readiness

Single 1-hop xref lands inside `open_path` (`0x140194810`, 0x6250=25168B) — far larger than any other command owner (largest clean owner `fetch_relay_models_draft` at 12211B) and semantically unrelated name. Suspected shared IPC-dispatch/string-switch table or ICF fold, not a dedicated per-command owner. Not accepted. Needs a dedicated decompile pass (out of scope here).

## api_proxy commands note

`detect_api_proxy_config` / `set_api_proxy_config` / `test_api_proxy_config` are grouped by the frontend adjacent to relay providers (used for auto-detecting OS-level HTTP proxy settings that feed relay network config) but no independent `core::relay::api_proxy.rs` (or similarly named) panic-Location source-path string was found in this pass — their backend module (likely `platform::proxy` or embedded directly in a relay-adjacent settings module) is Unknown pending further search; recorded here as `commands::relay_adjacent::api_proxy` (not `core::relay::*`).

## Non-decompile guarantee

No `decompile()` MCP calls were issued. Evidence via `find_regex` + `xrefs_to` only.
