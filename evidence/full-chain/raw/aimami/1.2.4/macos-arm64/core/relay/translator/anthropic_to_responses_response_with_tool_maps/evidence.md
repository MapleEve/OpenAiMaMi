# Evidence: anthropic_to_responses_response_with_tool_maps

- **Function**: `codexmate_lib::core::relay::translator::anthropic_to_responses_response_with_tool_maps`
- **Owner EA**: 0x100829870
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/anthropic_to_responses_response_with_too_0x100829870.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (16 unique):
  - `serde_json::value::index::Index::index_into`
  - `uuid::new_v4`
  - `String::clone`
  - `format_inner`
  - `serde_json::ser::to_vec`
  - `serde_json::value::to_value`
  - `BTreeMap::insert`
  - `BTreeMap::clone`
  - `drop_in_place<serde_json::Value>`
  - `normalize_anthropic_tool_call_for_responses`
  - `core::hash::BuildHasher::hash_one`
  - `alloc::raw_vec::RawVec::grow_one`
  - `T::to_vec::ConvertVec`
  - `__rust_alloc`
  - `__rust_dealloc`
  - `core::result::unwrap_failed`
- **Call-tree edges**: 15
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "serde_json::Value (Anthropic response) + tool_maps (Vec<(String,String)>)", "output": "serde_json::Value (OpenAI Responses API format)"}

## Summary

Converts Anthropic message response to OpenAI Responses API format with tool maps: extracts id, content blocks (text/thinking/tool_use/tool_result), maps tool names via tool_maps HashMap, builds function_call/custom_tool_call output items with arguments, serializes to JSON. Renamed from _with_tool_map (singular) in 1.2.3.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
