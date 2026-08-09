# Evidence: voice_search_overlay_ready

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: commands/voice_runtime
- function: voice_search_overlay_ready
- owner_ea: 0x100495fe0
- function_size: 0xbd
- session: delta-1.2.4-to-1.2.6-mac-fullchain
- source: ida (decompile)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query (mac demangled symbol name)
- Pseudocode decompiled successfully (no truncation marker)
- Callees extracted (deduped set)
- Call-tree edges: 5 direct callees
- Basic blocks: 4
- Inline write-back: comment appended (Chinese), IDB saved
- 5 callees (meets edges>=5 threshold)
- Contains panic path (state not registered)

## Callees (deduped)
[
  "StateManager::try_get",
  "VoiceSearchResultState::snapshot",
  "CoreEnvelope::ok",
  "panic_fmt",
  "drop_in_place<AppHandle>"
]

## Callers
[
  "run::{{closure}}"
]

## Strings referenced
[]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
