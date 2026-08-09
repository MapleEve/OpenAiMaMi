# Evidence: ensure_transition_rollout_write_capacity

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: core/relay/codex_thread_visibility
- function: ensure_transition_rollout_write_capacity
- owner_ea: 0x10076d070
- function_size: 0x17a4
- session: delta-1.2.4-to-1.2.6-mac-fullchain
- source: ida (decompile)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query (mac demangled symbol name)
- Pseudocode decompiled successfully (no truncation marker)
- Callees extracted (deduped set)
- Call-tree edges: 10 direct callees
- Basic blocks: 40
- Inline write-back: comment appended (Chinese), IDB saved
- Calls fs2::unix::statvfs for disk capacity check
- Opens codex DBs readonly, collects provider convergence targets
- Sorts capacity values, sums, compares against threshold
- No destructive side effects (readonly DB access)

## Callees (deduped)
[
  "fs2::unix::statvfs",
  "collect_active_rollout_paths",
  "std::sys::fs::metadata",
  "CodexPaths::all_codex_state_dbs",
  "open_codex_db_readonly",
  "collect_provider_convergence_targets",
  "find_trusted_rollout_backup",
  "rollout_path_identity",
  "HashMap::insert",
  "app_event"
]

## Callers
[]

## Strings referenced
[
  "src/core/relay/codex_thread_visibility.rs",
  "router_transitioncapacity_preflight"
]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
