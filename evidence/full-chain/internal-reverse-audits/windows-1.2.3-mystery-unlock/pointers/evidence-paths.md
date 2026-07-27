# Evidence Pointers — mystery-unlock cluster (AiMaMi 1.2.3 Windows x64)

All paths relative to `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` (SMB mount, e.g. ``). No raw artifact is copied into this conclusion package; this file is pointer-only.

## router_unlock_auth (12 files)

`raw/aimami/1.2.3/windows-x64/router_unlock_auth/ida/pseudocode/`
- install_virtual_unlock_auth_0x1404949c0.c
- cleanup_0x140497830.c
- read_marker_0x14048e790.c
- read_cleanup_backup_0x14048f550.c
- serialize_0x140465450.c
- __u7b__u7b_closure_u7d__u7d__1_0x14046b5e0.c
- __u7b__u7b_closure_u7d__u7d__2_0x14046b670.c
- __u7b__u7b_closure_u7d__u7d__3_0x14046b700.c
- sub_14048EF50_0x14048ef50.c
- sub_14048F130_0x14048f130.c
- sub_14048FE80_0x14048fe80.c
- sub_14048FF80_0x14048ff80.c

## legacy_virtual_auth (7 files)

`raw/aimami/1.2.3/windows-x64/legacy_virtual_auth/ida/pseudocode/`
- cleanup_0_0x14057a0e0.c
- read_marker_0_0x140579290.c
- read_user_owned_backup_0x140579800.c
- sub_1404F99D0_0x1404f99d0.c
- sub_140579700_0x140579700.c
- __u7b__u7b_closure_u7d__u7d__6_0x140566820.c
- __u7b__u7b_closure_u7d__u7d__7_0x1405668b0.c

## Census / completeness cross-check

`intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl` — filtered to `module` exactly `codexmate_lib/core/relay/router_unlock_auth` (12 rows) and `codexmate_lib/core/relay/legacy_virtual_auth` (7 rows); no other module name containing `virtual_auth` exists in this inventory. Confirms the 19 files above are the complete set for these two module names, not a sample.

## Prior INDEX.jsonl entries for this raw evidence (not reproduced by this package)

`internal-reverse/INDEX.jsonl`:
- key `aimami/1.2.3/windows-x64/router_unlock_auth/backend-pseudocode-leaf` (session `win-group2of4-relay-modules-20260724`)
- key `aimami/1.2.3/windows-x64/legacy_virtual_auth/backend-pseudocode-leaf` (session `win-group2of4-relay-modules-20260724`)
- key `aimami/1.2.3/windows-x64/router_unlock_auth/win-app-inventory-gapfill-leaf` (session `win-1.2.3-app-function-inventory-gapfill-20260724`, produced_at `2026-07-24T13:20:34Z`)
- key `aimami/1.2.3/windows-x64/legacy_virtual_auth/win-app-inventory-gapfill-leaf` (session `win-1.2.3-app-function-inventory-gapfill-20260724`, produced_at `2026-07-24T13:20:34Z`)

## Cross-reference packages (not evidence sources for this package)

- `internal-reverse/audits/macos-1.2.3-mystery-unlock/` — macOS arm64, same product/version, independently classified, same conclusion. Used for diff comparison only (SYSTEM-DIFF.md), not consumed as this package's own evidence.
- ` — earlier macOS-only analysis of the same function cluster; classification conflict recorded in README.md.

## Binary SOT

Binary identity (SHA-256/PE/AMD64) for aimami 1.2.3 windows-x64 confirmed via the retroactive INDEX.jsonl entries above (`sha256_binary: aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`); this package does not duplicate binary discovery, only points to it.
