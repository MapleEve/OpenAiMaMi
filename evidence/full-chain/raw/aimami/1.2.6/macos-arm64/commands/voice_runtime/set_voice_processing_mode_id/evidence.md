# Evidence: set_voice_processing_mode_id

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: commands/voice_runtime
- function: set_voice_processing_mode_id
- owner_ea: 0x1004960c0
- function_size: 0xf1
- session: delta-1.2.4-to-1.2.6-mac-fullchain
- source: ida (decompile)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query (mac demangled symbol name)
- Pseudocode decompiled successfully (no truncation marker)
- Callees extracted (deduped set)
- Call-tree edges: 4 direct callees
- Basic blocks: 4
- Inline write-back: comment appended (Chinese), IDB saved
- Pattern: thin Tauri command wrapper (0xf1 bytes), identical structure across 6 voice_runtime commands
- terminated_reason: response_serialize (Result tag check + CoreEnvelope::ok)

## Callees (deduped)
[
  "core::voice::runtime::set_processing_mode_id",
  "CoreEnvelope<T>::ok",
  "drop_in_place<AppHandle>",
  "memcpy"
]

## Callers
[
  "run::{{closure}}"
]

## Strings referenced
[]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
