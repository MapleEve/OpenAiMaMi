# Evidence: has_usable_real_oauth_login

- **Function**: `codexmate_lib::core::relay::router_unlock_auth::has_usable_real_oauth_login`
- **Owner EA**: 0x10056cf10
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/has_usable_real_oauth_login_0x10056cf10.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (4 unique):
  - `load_auth_file`
  - `auth_is_usable_real_oauth`
  - `drop_in_place<CoreError>`
  - `__rust_dealloc`
- **Call-tree edges**: 5
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "RouterContext (auth file path)", "output": "bool"}

## Summary

Checks if current auth file has usable real OAuth login: loads auth file, calls auth_is_usable_real_oauth to check OAuth fields. Returns false on load error. Used to determine if real OAuth credentials are active.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
