# Evidence: has_restorable_real_oauth

- **Function**: `codexmate_lib::core::relay::router_unlock_auth::has_restorable_real_oauth`
- **Owner EA**: 0x10056c8a0
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/has_restorable_real_oauth_0x10056c8a0.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (5 unique):
  - `read_marker`
  - `backup_contains_usable_real_oauth`
  - `auth_is_usable_real_oauth`
  - `legacy_virtual_auth::restorable_backup_auth`
  - `__rust_dealloc`
- **Call-tree edges**: 5
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "RouterContext (marker path, auth paths)", "output": "bool"}

## Summary

Checks if restorable real OAuth exists: reads router-unlock-auth-marker, if marker has backup flag, checks backup_contains_usable_real_oauth; otherwise falls back to legacy_virtual_auth::restorable_backup_auth. Returns true if restorable OAuth credentials exist.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
