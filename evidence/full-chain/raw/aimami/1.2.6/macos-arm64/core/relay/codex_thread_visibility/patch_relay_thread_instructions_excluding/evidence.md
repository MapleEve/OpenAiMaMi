# Evidence: patch_relay_thread_instructions_excluding

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: core/relay/codex_thread_visibility
- function: patch_relay_thread_instructions_excluding
- owner_ea: 0x100770980
- function_size: 0x5f3
- session: delta-1.2.4-to-1.2.6-mac-fullchain
- source: ida (decompile)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query (mac demangled symbol name)
- Pseudocode decompiled successfully (no truncation marker)
- Callees extracted (deduped set)
- Call-tree edges: 6 direct callees
- Basic blocks: 40
- Inline write-back: comment appended (Chinese), IDB saved
- RENAMED SUCCESSION: patch_relay_thread_instructions → patch_relay_thread_instructions_excluding
- Added exclusion set parameter (HashSet<PathIdentity>)
- Uses rayon for parallel execution

## Callees (deduped)
[
  "rayon::Registry::in_worker",
  "find_reference_instructions",
  "patch_instructions_rollouts_serial",
  "drop_in_place<ThreadPool>",
  "Arc::drop_slow",
  "from_iter_in_place"
]

## Callers
[
  "reconcile_threads_with_progress"
]

## Strings referenced
[
  "src/core/relay/codex_thread_visibility.rs"
]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
