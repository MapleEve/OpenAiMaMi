# Evidence: normalize_no_account_slot_preference

- **Function**: `codexmate_lib::core::relay::codex_catalog::normalize_no_account_slot_preference`
- **Owner EA**: 0x100226630
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/normalize_no_account_slot_preference_0x100226630.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (13 unique):
  - `RelayProvider::exposed_models`
  - `hashbrown::map::HashMap::insert`
  - `hashbrown::raw::RawTable::reserve_rehash`
  - `hashbrown::map::HashMap::insert`
  - `core::hash::BuildHasher::hash_one`
  - `String::clone`
  - `canonical_no_account_slot_slug`
  - `default_no_account_slots`
  - `alloc::raw_vec::RawVec::grow_one`
  - `alloc::raw_vec::RawVecInner::try_allocate_in`
  - `__rust_alloc`
  - `__rust_dealloc`
  - `alloc::raw_vec::handle_error`
- **Call-tree edges**: 12
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "providers + user slot preferences + canonical slugs", "output": "Vec<CodexNoAccountSlot> (normalized, max 5)"}

## Summary

Normalizes user no-account slot preferences: resolves canonical slugs, matches against provider exposed models, deduplicates via HashMap, fills defaults if a8 flag set. Returns normalized slot vector (max 5).

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
