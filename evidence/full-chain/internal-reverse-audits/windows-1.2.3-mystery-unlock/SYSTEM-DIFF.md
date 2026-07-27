# System Diff — mystery-unlock cluster (AiMaMi 1.2.3, Windows vs macOS)

## Platform Artifacts

- Windows x64: PE/AMD64, `sha256=aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`; 19 functions read this pass (12 router_unlock_auth + 7 legacy_virtual_auth), full census closure for these 2 module names.
- macOS arm64: covered independently in sibling package `audits/macos-1.2.3-mystery-unlock/` (33 functions: 24 router_unlock_auth + 8 legacy_virtual_auth + 1 is_aimami_managed_virtual_auth). Referenced here only for diff comparison, not as this package's evidence source.

## Frontend IPC / Control-flow

- Unknown on both platforms this pass — neither package pursued frontend CCF for this cluster (intentional, SKIP).

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- **Consistent across platforms (independently confirmed, not inferred)**:
  - Placeholder `auth.json` field set and every literal value (fixed UUID, fixed fake identity strings, `chatgpt_plan_type="free"`, `axonhub_note` disclaimer string, `last_refresh` fixed timestamp, `refresh_token` fixed string) — byte-identical between the Windows `sub_14048FF80` construction and the macOS `build_unlock_auth_json` construction as separately documented in `SPEC-virtual-auth-mode.md` §2.
  - JWT claim set (`iss=https://auth.openai.com`, `aud=aimami-router-unlock`, `sub=user-niuniu-woyao-pro-unlock`, `email=niuniu@woyao.pro`, `name=NIUNIU WOYAO`, `exp=2524608000`, `alg:none`) — identical between Windows `sub_14048F130` and macOS `make_unsigned_jwt`.
  - Cleanup state-machine: Windows `cleanup` (0x140497830) branches on a 4-value state (0/1/2/3) obtained from `sub_14048ED60`; this matches the macOS `live_auth_state` 4-state model (`NoFile`/`VirtualActive`/`RealPresent`/`Corrupt`) documented in `SPEC-virtual-auth-mode.md` §4.1/§4.4, branch-for-branch (marker+backup handling per state).
  - Backup-rejection validation: Windows `read_cleanup_backup`/`legacy_virtual_auth::read_user_owned_backup` reject a backup if it contains `aimami_router_unlock_auth=true`, or an `OPENAI_API_KEY` value ending in a SIMD-compared 8-byte constant pair (`-unlock` suffix, matching macOS's documented `validate_user_owned_auth_backup` suffix check), or has a `tokens` field already present — same defensive design as macOS.
  - Zero network/HTTP call sites in either platform's read call-tree; both platforms are local-filesystem-only for this mechanism.

- **Platform difference — function decomposition granularity**:
  - macOS: 24 independently-named functions in `router_unlock_auth` (including separately-compiled `ensure_auth_for_router`, `prepare_auth_for_router`, `restore_real_auth_for_router`, `live_auth_state`, `has_residue`, `marker_exists`, `auth_is_usable_real_oauth`, `backup_contains_usable_real_oauth`, `validate_user_owned_auth_backup`, `verify_real_auth_restore_ready`, `readiness`, `cleanup_for_native_off`); `legacy_virtual_auth` has 8.
  - Windows: only 12 in `router_unlock_auth` (5 "top-level" named entry points — `install_virtual_unlock_auth`/`cleanup`/`read_marker`/`read_cleanup_backup`/`serialize` — plus 3 closures + 4 unnamed helper `sub_*` functions); `legacy_virtual_auth` has 7.
  - Observation (high confidence, not fully proven): Windows's `install_virtual_unlock_auth` (≈350 lines pseudocode) and `cleanup` (≈550 lines) each appear to inline logic that macOS keeps as separate compiled functions — e.g. `install_virtual_unlock_auth` calls an un-named `sub_14048ED60` for state and branches on a `force`-style flag (`a3`) inline, matching the shape of macOS's separate `ensure_auth_for_router`/`live_auth_state`. The Windows census (`WIN-APP-FUNCTION-INVENTORY.jsonl`) confirms zero remaining un-extracted rows for these 2 module names, which supports "compiler inlined these on the Windows release build" over "evidence extraction missed them" — but this package did not do a whole-binary search to independently prove those callee bodies don't exist as separate un-attributed symbols elsewhere, so the inlining explanation is recorded as a strong hypothesis, not a proven fact.
  - This decomposition difference does not change the behavioral conclusion (both platforms build and manage the same fake-credential lifecycle); it only affects how granular the raw evidence trail is per platform.

## Interface / Error / Boundary

- Both platforms: write target is the Codex-native auth-file path; backup-before-write; marker-based rollback tracking; `CoreError`-style Ok/Err tag branching on fs/parse failure, no silent error-swallowing observed on either platform.
- SKIP items on both platforms: no field-level DTO/serialization recipe documented (ToS-sensitive, understand-only).

## Gate Leaf

- Both platforms: `tos_circumvention` classification, `implementation_use=false` permanent (product decision, not evidence gap). Windows and macOS classifications were reached independently and agree.

## Plugin / Capability

- Not applicable to this cluster on either platform.

## OTA / Package

- Not applicable.

## Resource / Binary Surface

- Windows: PE/AMD64, sha256 in AI.md / manifest.json.
- macOS: see sibling package for its own sha (not duplicated here).

## Unknown

- Windows equivalents of `is_aimami_managed_virtual_auth` / `codex_diagnostic::{check,fix}_router_unlock_auth_residue`: Unknown (out of this pass's file scope).
- Whether Windows's smaller named-function count is genuine LTO/inlining vs. an unextracted-symbol gap: high-confidence hypothesis, not proven (see above).
- `sub_14048ED60`'s own decompiled body (Windows analogue of `live_auth_state`): not independently read this pass.
