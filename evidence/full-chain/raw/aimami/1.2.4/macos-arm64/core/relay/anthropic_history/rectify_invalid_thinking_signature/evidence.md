# Evidence: rectify_invalid_thinking_signature

- **Function**: `codexmate_lib::core::relay::anthropic_history::rectify_invalid_thinking_signature`
- **Owner EA**: 0x1004afd70
- **Closure EA**: 0x1009af720
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/rectify_invalid_thinking_signature_0x1004afd70.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (5 unique):
  - `serde_json::value::index::Index::index_into_mut`
  - `serde_json::value::index::Index::index_into`
  - `alloc::vec::Vec::retain_mut`
  - `alloc::vec::Vec::retain`
  - `core::ptr::drop_in_place`
- **Call-tree edges**: 6
- **Terminated reason**: `side_effect_commit`
- **Interface type**: internal_function
- **DTO fields**: {"input": "serde_json::Value (messages array)", "output": "Vec<Value> (filtered messages)"}
- **Side effects**:
  - ⚠ MUTATES input JSON: removes thinking blocks with invalid signatures from message content arrays

## Summary

Rectifies invalid thinking_signature in Anthropic message history: iterates messages, finds user-role messages with thinking blocks, removes thinking blocks that have invalid signatures via retain_mut. Closure variant (0x1009af720) is the retain_mut predicate that checks type==thinking and removes signature field.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
