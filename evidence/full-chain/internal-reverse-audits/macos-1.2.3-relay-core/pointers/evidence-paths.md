# Evidence Pointers — macos-1.2.3-relay-core coverage audit

All paths are env-relative to `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` (this machine's mounted SMB root: ``).

## Consumed conclusion packages (read-only inputs to this audit)

- `internal-reverse/audits/macos-1.0.9-relay-core/manifest.json` — source of the 19-cluster relay-core target universe
- `internal-reverse/audits/macos-1.0.9-relay-core/README.md`
- `internal-reverse/audits/macos-1.2.3-relay/manifest.json` — scope declaration cross-checked against
- `internal-reverse/audits/macos-1.2.3-relay/logic/REGISTRATION-TABLE-1.2.3.md` — source of relay_proxy_config relocation evidence
- `internal-reverse/audits/macos-1.2.3-system/` (manifest.json, logic/FULL-CHAIN-1.2.3.md, AI.md, README.md) — grep-confirmed proxy_config coverage
- `internal-reverse/REVERSE-STATUS.md` — `[<审计会话> entry (ledger cross-reference; independently lists relay-core as an open 1.2.3 backlog target)

## Raw evidence directories inspected (name/function-basename cross-check only, no content copied)

- `raw/aimami/1.2.3/macos-arm64/core/relay/` (32 submodule directories enumerated: atomic_write, breaker, codex_catalog, codex_config_reconciler, codex_diagnostic, codex_mutation, codex_project_state, codex_runtime, codex_thread_visibility, codex_writer, config_takeover, dialects, fetch_models, health_check, image_compat, invariants, io, keychain, legacy_virtual_auth, manager, models, native_responses_compat, proxy_passthrough, proxy_server, quota, router_reconciler, router_transition, router_unlock_auth, storage, transition_journal, translator, upstream_url — 32 excluding the `ida/` artifact directory)
  - `core/relay/proxy_passthrough/ida/pseudocode/*.c` — matched against relay_passthrough_helpers / relay_try_dispatch (1.0.9)
  - `core/relay/proxy_server/ida/pseudocode/*.c` — matched against relay_proxy_server / relay_try_dispatch / relay_ws_handlers (1.0.9)
  - `core/relay/translator/ida/pseudocode/*.c` and `core/relay/translator/stream/` — matched against relay_translator / relay_translator_stream / relay_sse (1.0.9)
  - `core/relay/manager/ida/pseudocode/*.c` — matched against relay_manager / relay_health_audit (1.0.9)
  - `core/relay/codex_diagnostic/ida/pseudocode/*.c` — matched against relay_diagnostic (1.0.9)
  - `core/relay/codex_thread_visibility/ida/pseudocode/*.c` — matched against relay_thread_migration (1.0.9)
- Whole-tree search under `raw/aimami/1.2.3/macos-arm64/` for `*web_tool*`, `*websocket*`, `*ws_handler*`, `*web_executor*`, `brave`, `tavily`, `search_provider`, `web_search_exec` — zero matches (evidence for the relay_web_executor/relay_web_tools open Unknown).

## Not inspected in this pass (explicit scope boundary)

- `raw/aimami/1.2.3/windows-x64/` — Windows relay-core status left Unknown; do not infer from this macOS-only pass.
- No IDA MCP session opened; no `func_query`/`decompile`/`xrefs_to` calls made. All conclusions here are directory/filename-level, not symbol-table-verified.
