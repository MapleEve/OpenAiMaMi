# Evidence: set_claude_web_search_compat

- **Function**: `codexmate_lib::core::relay::manager::set_claude_web_search_compat`
- **Owner EA**: 0x10079bbc0
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/set_claude_web_search_compat_0x10079bbc0.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (12 unique):
  - `OnceBox::initialize`
  - `Mutex::lock`
  - `Mutex::unlock`
  - `RelayState::clone`
  - `RelayManager::persist`
  - `storage::sanitize_for_export`
  - `drop_in_place<RelayState>`
  - `core::result::unwrap_failed`
  - `panic_count::is_zero_slow_path`
  - `String::clone`
  - `__rust_alloc`
  - `__rust_dealloc`
- **Call-tree edges**: 12
- **Terminated reason**: `persistence_commit`
- **Interface type**: internal_method
- **Frontend IPC argKeys**: ["enabled"]
- **DTO fields**: {"request": "{enabled: bool}", "response": "CoreEnvelope<RelayState>"}
- **Side effects**:
  - ⚠ PERSISTENCE: calls RelayManager::persist to write relay state to disk

## Summary

RelayManager setter: acquires transition lock, clones current RelayState, sets claude_web_search_compat flag, persists state to disk, returns sanitized relay state. Called by IPC command set_claude_web_search_compat.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
