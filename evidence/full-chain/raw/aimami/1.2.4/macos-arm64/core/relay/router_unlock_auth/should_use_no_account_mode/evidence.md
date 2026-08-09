# Evidence: should_use_no_account_mode

- **Function**: `codexmate_lib::core::relay::router_unlock_auth::should_use_no_account_mode`
- **Owner EA**: 0x10056cd80
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/should_use_no_account_mode_0x10056cd80.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (5 unique):
  - `load_auth_file`
  - `auth_is_usable_real_oauth`
  - `has_restorable_real_oauth`
  - `drop_in_place<CoreError>`
  - `__rust_dealloc`
- **Call-tree edges**: 5
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "RouterContext + force_no_account flag (int)", "output": "bool (should use no-account mode)"}

## Summary

Determines if no-account mode should be used: if force flag set, returns true. Otherwise loads auth file: if usable real OAuth exists, returns false (use real OAuth); if restorable real OAuth exists, returns false (can restore); if neither, returns true (use no-account mode).

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
