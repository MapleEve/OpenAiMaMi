# Evidence: is_anthropic_thinking_signature_rejection

- **Function**: `codexmate_lib::core::relay::proxy_server::is_anthropic_thinking_signature_rejection`
- **Owner EA**: 0x100848920
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/is_anthropic_thinking_signature_rejectio_0x100848920.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (10 unique):
  - `alloc::string::String::from_utf8_lossy`
  - `__rust_alloc`
  - `__rust_dealloc`
  - `alloc::raw_vec::RawVecInner::reserve`
  - `memcpy`
  - `memcmp`
  - `core::str::pattern::StrSearcher::new`
  - `StrSearcher::next_match`
  - `Pattern::is_contained_in`
  - `alloc::raw_vec::handle_error`
- **Call-tree edges**: 10
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "HTTP status code (int16), response body (bytes, len)", "output": "bool"}

## Summary

Checks if an HTTP 400 response from Anthropic is a thinking_signature rejection: converts body to lowercase UTF-8, searches for specific rejection signature strings (35-byte and 30-byte and 28-byte patterns). Returns true if signature rejection detected, used to trigger rectify_invalid_thinking_signature.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
