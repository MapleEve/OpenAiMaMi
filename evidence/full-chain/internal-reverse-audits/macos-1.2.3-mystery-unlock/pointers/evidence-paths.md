# Evidence Pointers — mystery-unlock cluster (AiMaMi 1.2.3 macOS arm64)

All paths relative to `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` (SMB mount, e.g. ``). No raw artifact is copied into this conclusion package; this file is pointer-only.

## router_unlock_auth (24 files)

`raw/aimami/1.2.3/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/`
- auth_is_usable_real_oauth_0x1005200f0.c
- backup_contains_usable_real_oauth_0x100522530.c
- build_unlock_auth_json_0x10051b8e0.c
- cleanup_0x100522a90.c
- cleanup_0x100523830.c (closure)
- cleanup_0x100523940.c (closure)
- cleanup_0x100523a50.c (closure)
- cleanup_0x100523b60.c (closure)
- cleanup_for_native_off_0x10051fc00.c
- ensure_auth_for_router_0x10051fd50.c
- has_residue_0x10051a000.c
- install_virtual_unlock_auth_0x100520210.c
- live_auth_state_0x10051a5b0.c
- make_unsigned_jwt_0x10051a770.c
- marker_exists_0x10051a500.c
- prepare_auth_for_router_0x10051fff0.c
- read_cleanup_backup_0x10051adf0.c
- read_marker_0x10051a0f0.c
- readiness_0x100523c70.c
- remove_file_if_exists_0x10051b720.c
- restore_real_auth_for_router_0x100520eb0.c
- serialize_0x10051b5b0.c
- validate_user_owned_auth_backup_0x100521ac0.c
- verify_real_auth_restore_ready_0x1005214a0.c

Supporting serde impl decompiles:
`raw/aimami/1.2.3/macos-arm64/core/relay/ida/pseudocode/__codexmate_lib_core_relay_router_unlock_auth___impl_serde_core_de_Deserialize_for_codexmate_lib_core_relay_router_unloc_0x100545800.c`
`raw/aimami/1.2.3/macos-arm64/core/relay/ida/pseudocode/__codexmate_lib_core_relay_router_unlock_auth___impl_serde_core_de_Deserialize_for_codexmate_lib_core_relay_router_unloc_0x1005457e0.c`

## legacy_virtual_auth (8 files)

`raw/aimami/1.2.3/macos-arm64/core/relay/legacy_virtual_auth/ida/pseudocode/`
- read_user_owned_backup_0x10065f370.c
- cleanup_0x10065fad0.c
- remove_file_if_exists_0x10065f1b0.c
- read_marker_0x10065ecb0.c
- cleanup_0x100660710.c (closure)
- cleanup_0x100660820.c (closure)
- restorable_backup_auth_0x10065f8b0.c
- marker_exists_0x10065f070.c

Supporting serde impl decompile:
`raw/aimami/1.2.3/macos-arm64/core/relay/ida/pseudocode/__codexmate_lib_core_relay_legacy_virtual_auth___impl_serde_core_de_Deserialize_for_codexmate_lib_core_relay_legacy_virt_0x1006ad660.c`

## is_aimami_managed_virtual_auth (1 file)

`raw/aimami/1.2.3/macos-arm64/core/auth/ida/pseudocode/is_aimami_managed_virtual_auth_0x1008f1cc0.c`

## codex_diagnostic residue check/fix (2 of ~42 files in this dir; rest out of scope)

`raw/aimami/1.2.3/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/check_router_unlock_auth_residue_0x10050e800.c`
`raw/aimami/1.2.3/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/fix_router_unlock_auth_residue_0x10050bfe0.c`

## mystery_unlock_grants (4 files)

`raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/get_mystery_unlock_grants_0x1007cab00.c`
`raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/merge_mystery_unlock_grants_0x1007cbba0.c`
`raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/get_mystery_unlock_grants_0x100a62dc0.c`
`raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/merge_mystery_unlock_grants_0x100a6a120.c`

## Consumed prior baseline docs (cross-checked, not re-derived)

`raw/aimami/1.2.3/macos-arm64/backend-baseline/models-repository-baseline.md` (line 81: mystery_unlock_grants + mystery_route_allowed summary)
`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` (line 90: get/merge_mystery_unlock_grants summary)

## Frontend cross-check (negative result, recorded)

`raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — grepped for `unlock_auth`/`virtual_auth`/`router_unlock`/`mystery_unlock`; no direct Tauri command name hit found this pass (see AI.md unknowns).

## Binary SOT

Binary identity (SHA-256/size) for aimami 1.2.3 macos-arm64 is tracked in the canonical `INDEX.jsonl` at the repo root (`${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/INDEX.jsonl`); this package does not duplicate that record, only points to it.
