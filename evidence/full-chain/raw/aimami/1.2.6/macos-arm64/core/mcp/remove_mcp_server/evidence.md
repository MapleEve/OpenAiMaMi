# Evidence: remove_mcp_server

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: core/mcp
- function: remove_mcp_server
- owner_ea: 0x1009f31d0
- function_size: 0xcee
- session: delta-1.2.4-to-1.2.6-mac-fullchain
- source: ida (decompile)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query (mac demangled symbol name)
- Pseudocode decompiled successfully (no truncation marker)
- Callees extracted (deduped set)
- Call-tree edges: 6 direct callees
- Basic blocks: 118
- Inline write-back: comment appended (Chinese), IDB saved
- ⚠ PERSISTENCE SIDE EFFECT: modifies codex_config.rs config file
- 118 basic blocks (complex control flow)

## Callees (deduped)
[
  "parse_mcp_document",
  "Path::parent",
  "DirBuilder::_create",
  "format_inner",
  "Vec::clone",
  "log::GlobalLogger::log"
]

## Callers
[
  "commands::mcp::remove_mcp_server"
]

## Strings referenced
[
  "src/core/codex_config.rs"
]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
