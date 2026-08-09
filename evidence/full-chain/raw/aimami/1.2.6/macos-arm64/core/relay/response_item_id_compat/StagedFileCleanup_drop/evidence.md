# Evidence: StagedFileCleanup_drop

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: core/relay/response_item_id_compat
- function: StagedFileCleanup_drop
- owner_ea: 0x100229840
- function_size: 0x186
- session: delta-1.2.4-to-1.2.6-mac-fullchain
- source: ida (decompile)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query (mac demangled symbol name)
- Pseudocode decompiled successfully (no truncation marker)
- Callees extracted (deduped set)
- Call-tree edges: 4 direct callees
- Basic blocks: 12
- Inline write-back: comment appended (Chinese), IDB saved
- ⚠ DESTRUCTIVE SIDE EFFECT: remove_file
- Drop impl: cleans up staged temp file, ignores NotFound

## Callees (deduped)
[
  "std::sys::fs::remove_file",
  "std::io::error::Error::kind",
  "log::GlobalLogger::log",
  "__rust_dealloc"
]

## Callers
[
  "repair_invalid_ids_in_rollout",
  "drop_in_place<StagedFileCleanup>"
]

## Strings referenced
[
  "src/core/relay/response_item_id_compat.rs"
]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
