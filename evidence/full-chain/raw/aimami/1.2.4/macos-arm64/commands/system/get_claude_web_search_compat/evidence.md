# Evidence: get_claude_web_search_compat

- **Function**: `codexmate_lib::commands::system::get_claude_web_search_compat`
- **Owner EA**: 0x10041d7a0
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/get_claude_web_search_compat_0x10041d7a0.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (7 unique):
  - `RelayManager::snapshot`
  - `storage::sanitize_for_export`
  - `drop_in_place<RelayState>`
  - `CoreEnvelope<T>::ok`
  - `String::clone`
  - `CoreError::fmt::Display`
  - `core::result::unwrap_failed`
- **Call-tree edges**: 7
- **Terminated reason**: `response_serialize`
- **Interface type**: ipc_command
- **DTO fields**: {"request": "()", "response": "CoreEnvelope<bool>"}

## Summary

IPC command getter: reads claude_web_search_compat flag from RelayManager snapshot, returns CoreEnvelope<bool>.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
