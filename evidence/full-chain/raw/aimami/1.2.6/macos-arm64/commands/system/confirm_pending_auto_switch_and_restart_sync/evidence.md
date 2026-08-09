# Evidence: confirm_pending_auto_switch_and_restart_sync

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: commands/system
- function: confirm_pending_auto_switch_and_restart_sync
- owner_ea: 0x10049ce00
- function_size: 0x2c52
- session: delta-1.2.4-to-1.2.6-mac-fullchain
- source: ida (decompile)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query (mac demangled symbol name)
- Pseudocode decompiled successfully (no truncation marker)
- Callees extracted (deduped set)
- Call-tree edges: 6 direct callees
- Basic blocks: 58
- Inline write-back: comment appended (Chinese), IDB saved
- ⚠ MCP display truncation (53129 chars) - full pseudocode in IDB
- Uses uuid v4, Instant timing, AccountSwitchTrace event logging
- Calls confirm_pending_auto_switch_async closure

## Callees (deduped)
[
  "uuid::v4::Uuid::new_v4",
  "std::time::Instant::now",
  "StateManager::try_get",
  "AccountSwitchTrace::event",
  "format_inner",
  "Display::fmt"
]

## Callers
[
  "run::{{closure}}"
]

## Strings referenced
[
  "-voice-audio-levelstarted"
]

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason met)
