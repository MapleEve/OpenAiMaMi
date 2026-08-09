# Evidence: validate_no_account_slots

- **Function**: `codexmate_lib::core::relay::codex_catalog::validate_no_account_slots`
- **Owner EA**: 0x100222220
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/validate_no_account_slots_0x100222220.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (11 unique):
  - `hashbrown::map::HashMap::insert`
  - `hashbrown::raw::RawTable::reserve_rehash`
  - `hashbrown::map::HashMap::insert`
  - `canonical_no_account_slot_slug`
  - `RelayProvider::exposed_models`
  - `core::hash::BuildHasher::hash_one`
  - `core::fmt::num::Display for usize`
  - `alloc::fmt::format::format_inner`
  - `__rust_alloc`
  - `__rust_dealloc`
  - `alloc::raw_vec::handle_error`
- **Call-tree edges**: 11
- **Terminated reason**: `error_return`
- **Interface type**: internal_function
- **DTO fields**: {"input": "providers + slots array + slot count", "output": "Result<Vec<CodexNoAccountSlot>, CoreError>"}

## Summary

Validates no-account slots: checks count ≤5, verifies each slot references a real provider, canonical slug matches, no duplicates. Returns CoreError with descriptive message on failure.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
