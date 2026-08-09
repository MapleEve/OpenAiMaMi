# Evidence: fallback_relay_model_threads_excluding

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: core/relay/codex_thread_visibility
- function: fallback_relay_model_threads_excluding
- owner_ea: 0x100760be0
- function_size: 0x26f5
- session: delta-1.2.4-to-1.2.6-mac-fullchain
- source: ida (decompile)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query (mac demangled symbol name)
- Pseudocode decompiled successfully (no truncation marker)
- Callees extracted (deduped set)
- Call-tree edges: 5 direct callees
- Basic blocks: 40
- Inline write-back: comment appended (Chinese), IDB saved
- ⚠ MCP display truncation (44391 chars) - full pseudocode in IDB
- RENAMED SUCCESSION: fallback_relay_model_threads → fallback_relay_model_threads_excluding
- References router_no_account_model_restore.json and gpt-5.5

## Callees (deduped)
[
  "str::trim_matches",
  "CodexPaths::all_codex_state_dbs",
  "load_model_restore_journal",
  "Vec::retain",
  "String::clone"
]

## Callers
[
  "reconcile_threads_with_progress"
]

## Strings referenced
[
  "router_no_account_model_restore.json",
  "gpt-5.5"
]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
