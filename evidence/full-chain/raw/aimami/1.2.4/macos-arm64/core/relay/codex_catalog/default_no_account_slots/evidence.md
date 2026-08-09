# Evidence: default_no_account_slots

- **Function**: `codexmate_lib::core::relay::codex_catalog::default_no_account_slots`
- **Owner EA**: 0x1002211e0
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/default_no_account_slots_0x1002211e0.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (8 unique):
  - `RelayProvider::exposed_models`
  - `hashbrown::map::HashMap::insert`
  - `String::clone`
  - `alloc::raw_vec::RawVec::grow_one`
  - `alloc::raw_vec::handle_error`
  - `__rust_alloc`
  - `__rust_dealloc`
  - `core::panicking::panic_bounds_check`
- **Call-tree edges**: 8
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "providers array + slot preference array", "output": "Vec<CodexNoAccountSlot> (default slots, max 5)"}

## Summary

Computes default no-account slots from provider exposed models: iterates providers, collects matching models into HashMap (max 5 entries), returns default slot vector. Used when user has not configured explicit slot preferences.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
