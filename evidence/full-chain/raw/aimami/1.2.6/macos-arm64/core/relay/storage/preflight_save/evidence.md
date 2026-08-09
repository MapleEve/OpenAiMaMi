# Evidence: preflight_save

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: core/relay/storage
- function: preflight_save
- owner_ea: 0x100773b70
- function_size: 0x4f5
- session: delta-1.2.4-to-1.2.6-mac-fullchain
- source: ida (decompile)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query (mac demangled symbol name)
- Pseudocode decompiled successfully (no truncation marker)
- Callees extracted (deduped set)
- Call-tree edges: 8 direct callees
- Basic blocks: 40
- Inline write-back: comment appended (Chinese), IDB saved
- ⚠ DESTRUCTIVE on failure: remove_file cleans up temp file
- Atomic write via write_atomic_with_mode
- Uses uuid v4 for temp filename

## Callees (deduped)
[
  "CodexPaths::ensure_directories",
  "std::sys::fs::metadata",
  "serde_json::ser::to_vec_pretty",
  "write_atomic_with_mode",
  "std::sys::fs::remove_file",
  "std::process::id",
  "Path::_join",
  "format_inner"
]

## Callers
[
  "RelayManager::preflight_repair_state_write",
  "RelayManager::reconcile_current_mode_locked_from_with_writer_policy"
]

## Strings referenced
[]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
