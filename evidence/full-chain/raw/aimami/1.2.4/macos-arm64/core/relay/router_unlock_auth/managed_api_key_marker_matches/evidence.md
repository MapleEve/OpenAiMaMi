# Evidence: managed_api_key_marker_matches

- **Function**: `codexmate_lib::core::relay::router_unlock_auth::managed_api_key_marker_matches`
- **Owner EA**: 0x10056d800
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/managed_api_key_marker_matches_0x10056d800.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (4 unique):
  - `managed_api_key`
  - `read_marker`
  - `memcmp`
  - `__rust_dealloc`
- **Call-tree edges**: 4
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "RouterContext (managed key path, marker path)", "output": "bool"}

## Summary

Checks if managed API key marker matches current auth: retrieves managed_api_key from auth file, reads marker file, compares byte sequences with memcmp. Returns true if marker key matches managed key, confirming auth was committed by router.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
