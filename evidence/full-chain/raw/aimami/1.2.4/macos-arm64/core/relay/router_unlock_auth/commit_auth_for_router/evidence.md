# Evidence: commit_auth_for_router

- **Function**: `codexmate_lib::core::relay::router_unlock_auth::commit_auth_for_router`
- **Owner EA**: 0x10056b3f0
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/commit_auth_for_router_0x10056b3f0.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (22 unique):
  - `load_auth_file`
  - `auth_is_usable_real_oauth`
  - `drop_in_place<CoreError>`
  - `CodexPaths::ensure_directories`
  - `Path::_join`
  - `live_auth_state`
  - `managed_api_key`
  - `managed_api_key_marker_matches`
  - `current_timestamp`
  - `std::sys::fs::metadata`
  - `std::fs::read::inner`
  - `validate_user_owned_auth_backup`
  - `install_managed_api_key_auth::{{closure}}`
  - `atomic_write::copy_atomic_private`
  - `write_json`
  - `uuid::new_v4`
  - `serde_json::value::to_value`
  - `BTreeMap::insert`
  - `format_inner`
  - `drop_in_place<RouterUnlockAuthMarker>`
  - `__rust_alloc`
  - `__rust_dealloc`
- **Call-tree edges**: 20
- **Terminated reason**: `persistence_commit`
- **Interface type**: internal_function
- **DTO fields**: {"input": "RouterContext (auth paths, managed api key)", "output": "Result<RouterUnlockAuthMarker, CoreError>"}
- **Side effects**:
  - ⚠ PERSISTENCE: writes router-unlock-auth-marker.json with OPENAI_API_KEY and managed api key
  - ⚠ Reads auth file, may install managed api key auth
  - ⚠ atomic_write::copy_atomic_private for backup

## Summary

Commits auth for router: if flag a3=0, loads auth file and checks usable real oauth; if a3=1, ensures directories, checks live_auth_state, manages api key marker, writes router-unlock-auth-marker.json with OAuth credentials and timestamp. Split from ensure_auth_for_router (1.2.3 removed function).

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
