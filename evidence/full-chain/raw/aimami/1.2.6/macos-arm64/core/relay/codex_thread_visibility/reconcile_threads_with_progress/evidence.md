# Evidence: reconcile_threads_with_progress

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: core/relay/codex_thread_visibility
- function: reconcile_threads_with_progress
- owner_ea: 0x1007507c0
- function_size: 0x145b
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
- ⚠ DESTRUCTIVE: cleanup_private_reasoning_items_in_existing_rollout removes reasoning content
- Uses rayon for parallel cleanup
- Successor of removed reconcile_threads (renamed + progress tracking added)
- 5-phase pipeline with Instant timing

## Callees (deduped)
[
  "Instant::now",
  "repair_missing_rollouts_for_convergence",
  "converge_threads_to_provider",
  "patch_relay_thread_instructions_excluding",
  "fallback_relay_model_threads_excluding",
  "collect_active_rollout_paths",
  "cleanup_private_reasoning_items_in_existing_rollout",
  "rayon::Registry::new",
  "rayon::Registry::in_worker",
  "app_event"
]

## Callers
[]

## Strings referenced
[
  "src/core/relay/codex_thread_visibility.rs",
  "thread_reconcile"
]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
