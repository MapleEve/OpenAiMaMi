# Evidence: with_tool_maps

- **Function**: `codexmate_lib::core::relay::translator::stream::with_tool_maps`
- **Owner EA**: 0x100acf9f0
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/with_tool_maps_0x100acf9f0.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (9 unique):
  - `uuid::new_v4`
  - `alloc::fmt::format::format_inner`
  - `chrono::offset::utc::Utc::now`
  - `core::str::slice_error_fail`
  - `core::result::unwrap_failed`
  - `__rust_alloc`
  - `__rust_dealloc`
  - `memcpy`
  - `alloc::raw_vec::handle_error`
- **Call-tree edges**: 8
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_method
- **DTO fields**: {"input": "tool_name: &[u8], tool_maps: Vec<(String,String)>, tool_map_hashmap", "output": "AnthropicDirectToResponsesStream (self, initialized)"}

## Summary

Stream constructor: creates AnthropicDirectToResponsesStream with tool maps. Allocates tool_name copy, generates UUID for stream ID, creates timestamp via Utc::now, stores tool_maps HashMap. Renamed from with_tool_name_map (singular) in 1.2.3.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
