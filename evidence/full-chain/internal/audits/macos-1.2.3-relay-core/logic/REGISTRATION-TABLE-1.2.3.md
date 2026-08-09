# REGISTRATION-TABLE-1.2.3 — macos-1.2.3-relay-core

Session: `macos-1.2.3-relay-core-reassign-20260726` (machine=mini-local). Reassigned from `relay123-surface`
(machine=<本地机器> claimed 2026-07-23, stalled 3+ days with zero DONE line) under `EXPLICIT_REASSIGN_OWNER`
(user chat authorization 2026-07-26). See `REVERSE-STATUS.md` for the full reassignment record.

Purpose: register the fate of each of the 19 clusters from the 1.0.9-era standalone `audits/macos-1.0.9-relay-core/`
package against AiMaMi 1.2.3, completing the `logic/` requirement (OUTPUT-SPEC.md) that was missing since this
package's creation on 2026-07-25.

## 19-cluster registration table

| 1.0.9 cluster | 1.2.3 fate | 1.2.3 location | Evidence basis |
|---|---|---|---|
| relay_codex_writer | matched | `core/relay/codex_writer/` (19 .c files) | function-name match, <审计会话> |
| relay_diagnostic | matched (massively expanded) | `core/relay/codex_diagnostic/` (83 .c files) | function-name match; config/catalog/thread/router-unlock reconciliation added |
| relay_health_audit | matched | `core/relay/health_check/` + `core/relay/manager/` (13 .c files) | `run_diagnostics`, `fix_diagnostic_issue` confirmed present |
| relay_manager | matched | `core/relay/manager/` | function-name match |
| relay_proxy_server | matched | `core/relay/proxy_server/` | function-name match |
| relay_thread_migration | matched (massively expanded) | `core/relay/codex_thread_visibility/` (62 .c files) | rollout/session_meta convergence added |
| relay_translator | matched (massively expanded) | `core/relay/translator/` | anthropic<->openai<->responses dialect translation added |
| relay_breaker | matched | `core/relay/breaker/` (5 .c files) | function-name match |
| relay_fetch_models | matched | `core/relay/fetch_models/` (4 .c files) | function-name match |
| relay_models | matched | `core/relay/models/` | function-name match |
| relay_translator_stream | matched | `core/relay/translator/stream/` | `sse_event`, `feed_line`, `handle_chunk`, `handle_event` present |
| relay_image_compat | matched | `core/relay/image_compat/` (4 .c files) | function-name match |
| relay_try_dispatch | matched | `core/relay/proxy_server/` + `core/relay/proxy_passthrough/` | `try_pass_through`, `try_translate` exact filename matches |
| relay_ws_handlers | matched | `core/relay/proxy_server/` | `codex_router_lookup_model`, `record_codex_openai_passthrough_route` exact matches to documented 1.0.9 leaves |
| relay_passthrough_helpers | matched | `core/relay/proxy_passthrough/` | `error_response`, `is_bearer_likely_missing`, `copy_response_headers_to_builder`, `build_passthrough_request_headers` exact matches |
| relay_sse | matched (moderate confidence) | `core/relay/translator/` | `sse_event` present; not exhaustively confirmed against all 4 documented 1.0.9 leaves |
| relay_proxy_config | **relocated** | `commands/system/` (NOT `commands/relay/`) | confirmed via `audits/macos-1.2.3-relay/logic/REGISTRATION-TABLE-1.2.3.md` (`detect_api_proxy_config`/`set_api_proxy_config`/`test_api_proxy_config`); covered by `audits/macos-1.2.3-system/` |
| **relay_web_executor** | **confirmed_removed** | none | live `func_query` (2026-07-26, mac <内网IP>) + `find_regex` (win <内网IP>): 0 hits for `web_executor`/`brave`/`tavily`/`duckduckgo`/`serpapi`/`search_provider`/`ToolExecutor` anywhere in either 1.2.3 binary. Was `strictImplementationUse` on both platforms in 1.0.9 (see `cross-1.0.9-relay-core-bootstrap/data/producer-ledger.json`) -- this is a genuine product removal, not an uncaptured gap. |
| **relay_web_tools** | **confirmed_removed** | none | same evidence as `relay_web_executor` above (searched jointly, same query batch) |

## Function-count cross-check (disk-grounded, not IDA-live to avoid the payload-truncation caveat noted in gate-report.json)

`raw/aimami/1.2.3/macos-arm64/core/relay/` contains **657** `.c` pseudocode files across **32** submodule directories
(enumerated via `find ... -name '*.c' | wc -l`, 2026-07-26). This is the disk-grounded total backing the "matched"
rows above; it was produced by `<审计会话> (DONE, 2026-07-21), not by this session, and is not
re-decompiled here.

Windows side (`raw/aimami/1.2.3/windows-x64/relay-core/owner-map.jsonl`, produced by `relay123-surface`,
2026-07-23): 177 functions across 29 submodules, tier B=64 (owner-attributed) / tier C=113 (undecompiled sub_XXXX).
No `windows-1.2.3-relay-core` canonical bundle exists yet -- this remains open and is explicitly **not** claimed
or touched by this reassignment session (see `gate-report.json` blockers_requiring_resolution).

## What this table does NOT do

- Does not perform a formal RULE-9 `NO-BEHAVIOR-DIFF-MIGRATION-1.2.3.md` diff (that belongs inside
  `audits/macos-1.2.3-relay/logic/`, per this package's own `AI.md` `next_actions_for_next_worker` item 3, once
  the Windows side of relay-core is also reduced).
- Does not promote any of the 15 matched clusters' individual leaves to any gate tier -- their dim1-6 status is
  owned by `audits/macos-1.2.3-relay/`, not duplicated here.
- Does not touch or reduce the Windows relay-core raw evidence -- that remains a separate open work item.
