# get_notification_client_state — Raw Evidence
## AiMaMi 1.1.1 macOS arm64 | session <审计会话>

**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**IDB**: `<来源位置>/raw/binary/AiMaMi-1.1.1-idb`
**逆向分析 health**: status=ok, uptime=53523s, IDA decompiler_ready=true, module=AiMaMi, auto_analysis_ready=true
**Machine**: <本地机器> | **Produced**: 2026-06-17

---

## ## Confirmed

1. **Owner VA confirmed**: `func_query(name_regex=".*get_notification_client_state.*")` → exactly `0x10061c690`, symbol `codexmate_lib::commands::system::get_notification_client_state::h8be04846c951d28f`, size=0x317 (791 bytes), has_type=true. No ICF ambiguity. Module = `system` (not commands_relay).
2. **Core VA confirmed**: `func_query(name_regex=".*get_or_create_notification_client_state.*")` → exactly `0x1004d0e90`, symbol `codexmate_lib::core::repository::Repository::get_or_create_notification_client_state::h8134728ae9614858`, size=0x2d0 (720 bytes).
3. **IPC dispatch xref confirmed**: `xrefs_to(0x10061c690)` → 1 caller at `0x1003155fa` inside closure `codexmate_lib::run::{{closure}}::{{closure}}::h93268f8fdbedf229` (VA `0x1003154f0`). `more=false`. Singleton IPC dispatch.
4. **Core xref confirmed**: `xrefs_to(0x1004d0e90)` → 1 caller at `0x10061c80f` inside owner `0x10061c690`. `more=false`. Singleton owner→core chain.
5. **IPC command string confirmed**: `find_regex("get_notification_client_state")` → 1 hit at `0x10114801b` in IPC command name blob. IPC dispatch closure decompile confirms `v22[0] = "get_notification_client_state"; v22[1] = 29;` (length=29).
6. **Owner decompile clean**: Full pseudocode obtained for `0x10061c690` — synchronous mutex lock/unlock pattern wrapping core call. No Future::poll discriminant.
7. **Core decompile clean**: Full pseudocode obtained for `0x1004d0e90` — load_settings → check/create → uuid::new_v4 + SystemTime::now → save_settings pattern.
8. **IPC closure decompile clean**: Full pseudocode for `0x1003154f0` — memcpy InvokeMessage → StateManager::try_get → call owner → InvokeResolver::respond (sync, NOT respond_async_serialized).
9. **Response DTO confirmed**: On Ok (tag=10), owner copies `v17[1..4]` to `a1[8..24]` — 3 qwords = {device_id_ptr, device_id_len, notifications_since}. CoreEnvelope tag=10 in a1[0..8].
10. **load_settings → std::fs::read_to_string**: confirmed at depth 3 (VA `0x100f25740`). Reads from `a2+440` (CodexPaths settings file offset).
11. **save_settings → std::fs::write**: confirmed at depth 3 (VA `0x100201fe0`). Writes serialized JSON.
12. **uuid::Uuid::new_v4** (VA `0x100e13930`) + **uuid::fmt::LowerHex::fmt** (VA `0x100e13a20`) confirmed in core callees.
13. **SystemTime::now** (VA `0x100f34cf0`) + **SystemTime::duration_since** (VA `0x100f34cb0`) confirmed in core callees — epoch seconds computation.
14. **Frontend IPC confirmed**: ipc-contracts.jsonl entry: `{"command":"get_notification_client_state","argKeys":[],"argObject":null,"callee":"ne","kind":"tauriInvokeWrapper","file":"assets/index-DdcCOEJG.js","line":86,"col":32009}`. argKeys=[] identical to 1.0.9.
15. **Poison string confirmed**: get_bytes at `0x10114c2e6` → `"poisoned lock: another task failed insidereqwest::"` (41 bytes for poison string).
16. **CodexMateSettings field names confirmed**: get_bytes at `0x10114cde0` and `0x10114cdc9` decode to `hotspot`, `usageRefreshInterval`, `deviceId`, `remoteDeviceSecret`, `notificationsSince`, `apiProxyMysteryRouteGrant` in rodata blob adjacent to struct name `CodexMateSettings`.
17. **`notificationsSince` in string pool**: confirmed at `0x10114a4d8` in large settings/IPC key blob, and at `0x10114cdc9` adjacent to `deviceId`.
18. **IDB comments appended**: `append_comments` at `0x10061c690`, `0x1004d0e90`, `0x1003154f0` all returned `appended=true`.

---

## ## Inferred

1. **`deviceId` field type**: UUID v4 lowercase hex string (inferred from `uuid::Uuid::new_v4` + `uuid::fmt::LowerHex::fmt` callee chain; format `"xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx"`). Confirmed by 1.0.9 dim1 frontend type definition.
2. **`notificationsSince` unit**: epoch **seconds** (u64) — inferred from `SystemTime::duration_since(UNIX_EPOCH)` result (not milliseconds). Confirmed by 1.0.9 dim1 evidence (`* 1000` for JS Date).
3. **READ PATH condition**: `device_id` non-empty after trim AND `notifications_since > 0`. From `get_or_create` core: `((v13 > 0) & (unsigned __int8)__dst) != 0` guard — `v13` = clone result (load success flag), `(unsigned __int8)__dst` = non-empty device_id after trim.
4. **Create-path side-effect scope**: `save_settings` serializes the full `CodexMateSettings` struct (not just notification fields). All settings overwritten atomically via `std::fs::write` (NOT atomic rename — same as 1.0.9 `set_image_compat` companion pattern).
5. **Mutex guard behavior**: Mutex held for full duration of core call (load + optional UUID gen + optional save). Other Repository commands blocked during this period.
6. **Delta vs 1.0.9**: Symbol hashes changed, sizes grew (owner 632B→791B, core grew to 720B). Growth attributed to expanded `CodexMateSettings` struct (more fields in 1.1.1). Behavior contract unchanged.
7. **Frontend hook pattern** (from 1.0.9 dim1, migrated): `useNotifications` hook → lazy init (only if refs empty) → `getNotificationClientState()` → `invoke("get_notification_client_state")` → cache in refs → pass to `desktopClient.getNotifications(deviceId, since)`. Poll interval 30000ms. 1.1.1 frontend confirmed identical wrapper (argKeys=[] unchanged).
8. **Settings file path**: via `CodexPaths` offset `a2+440/448` in `load_settings` — likely `~/.codex/codex.json` or platform equivalent (CodexPaths resolves at runtime; exact string not decoded this session).

---

## ## Unknown

1. **dim1 frontend call-site component** (which React component mounts `useNotifications` in 1.1.1): minified source — 1.0.9 evidence says `src/main-app.tsx:344` but 1.1.1 frontend not checked for component tree changes. Accepted: migrated from 1.0.9 (frontend wrapper identical, so hook entry point likely unchanged).
2. **Exact settings file path string**: constructed dynamically by `CodexPaths::resolve_codex_home` + path builder at `Repository` offsets `a2+440/448`. Path not decoded this session (out of scope for this leaf; shared infrastructure with other system commands).
3. **`notifications_since == 0` edge case treatment**: if `SystemTime::before_UNIX_EPOCH` → `duration_since` Err → `v6=0` (sentinel) → subsequent call always hits create-path (see LABEL_14 logic). Behavior: keeps retrying save with notifications_since=0 until clock normalizes. Accepted unknown (unusual environment edge case).
4. **CoreEnvelope error discriminant values**: exact integer codes for each error class not decoded (only tag 10=Ok and 0x8000000000000000=Err sentinel confirmed). Accepted: consistent with all other system commands in this codebase.
5. **Windows platform behavior**: Windows binary not analyzed this session. Windows provider in INDEX.jsonl (session <审计会话>, gate=strictImplementationUse) exists for 1.0.9 but not confirmed for 1.1.1. Windows = Unknown for 1.1.1.
6. **dim6 test/acceptance mapping**: 内部构建 implementation side; not assessed (reversal ceiling).
7. **`uuid::Uuid::new_v4` entropy source**: OS getrandom or similar — standard uuid crate behavior, not custom seeded. Accepted unknown (external library internal).
8. **`notificationsSince` serde rename**: whether serde uses `#[serde(rename_all = "camelCase")]` or per-field rename. String pool `notificationsSince` at `0x10114cde0` (embedded in rodata) suggests the JSON key is exactly `notificationsSince`. Inferred camelCase consistent with field name.
9. **Full `CodexMateSettings` struct layout**: only notification-relevant fields decoded this session. Other fields (hotspot, usageRefreshInterval, remoteDeviceSecret, mysteryUnlockGrants, etc.) documented in separate leaves.
10. **`load_settings` path on first launch** (settings file not yet created): `std::fs::read_to_string` returns Err → `__src[0]` Err tag → falls through to CREATE PATH. Behavior: always creates on first launch. Accepted.

---

## Anti-cheat gate (red line 13)

**genuine_ceiling**: false
**accepted_unknown**: false
**recovery_attempts**: N/A — no ceiling declared; taxonomy exhausted with zero hits.

| False-wall type | Assessment |
|---|---|
| drop_in_place / async confusion | NOT async. Owner decompile shows Mutex::lock/unlock wrapping synchronous core call. IPC closure uses InvokeResolver::respond (NOT respond_async_serialized). No Future::poll or state-machine discriminant. |
| architecture_only / budget self-limit | Full decompile obtained for owner (791B), core (720B), IPC closure. No budget constraint. |
| async decompile failed | Not applicable — no async state machine. All bodies decompiled cleanly. |
| VA misidentification | func_query returns exactly 1 hit for each symbol; sizes confirmed by 逆向分析; xrefs_to confirms singleton caller chains. |
| vtable / dynamic dispatch | No trait objects or fat pointers in this call path. All callees are direct calls with resolved demangled symbols. |
| HTTP-terminal / external transport | No HTTP. Fully synchronous local command. No reqwest/network. |
| Library internal unverifiable | load_settings and save_settings are codexmate_lib internal, fully decompilable. |
| Oversized body bail | Owner=791B, core=720B — well within HexRays budget. No basic_blocks partitioning needed. |

---

## Four-angle completeness

- **A (func_query symbol enum)**: `.*get_notification_client_state.*` → exactly 1 hit (0x10061c690); `.*get_or_create_notification_client_state.*` → exactly 1 hit (0x1004d0e90). No ICF collapse for these symbols. PASS
- **B (string pool)**: `find_regex("get_notification_client_state")` → 1 hit at 0x10114801b (IPC cmd name blob). No standalone C-string needed. IPC dispatch hardcodes cmd string (len=29). PASS
- **C (frontend IPC)**: ipc-contracts.jsonl entry confirmed (argKeys=[], kind=tauriInvokeWrapper, col=32009). PASS
- **D (owner-map + INDEX)**: owner-map-111 status=shared/not_yet_queried → now done (module=system). INDEX has no prior 1.1.1 macos-arm64/system/get_notification_client_state entry. ADDITIVE — no collision. PASS

---

## Delta vs 1.0.9

**Status**: `diff_reversed` — both owner and core symbols recompiled with changed hashes and larger sizes. Growth due to expanded `CodexMateSettings` struct in 1.1.1. Behavior contract (argKeys, response DTO, side-effect pattern) is identical to 1.0.9.

| Dimension | 1.0.9 | 1.1.1 | Changed |
|---|---|---|---|
| Owner VA | 0x100262804 | 0x10061c690 | Yes (relocation) |
| Owner size | 632B (0x278) | 791B (0x317) | Yes (+159B) |
| Core VA | 0x1005f0e34 | 0x1004d0e90 | Yes (relocation) |
| Core size | unknown | 720B (0x2d0) | Changed |
| argKeys | [] | [] | No change |
| Response DTO fields | {deviceId, notificationsSince} | {deviceId, notificationsSince} | No change |
| notificationsSince unit | epoch seconds | epoch seconds | No change |
| Synchronous | yes | yes | No change |
| side-effect | save_settings on create | save_settings on create | No change |
| save_settings JSON keys | hotspot, usageRefreshInterval, deviceId, remoteDeviceSecret, notificationsSince (+ others) | same keys confirmed + more struct fields | Struct grew |
| gate ceiling | strictImplementationUse | strictImplementationUse | No change |

---

## Gate tier

**gate**: `strictImplementationUse_candidate`
- dim1 (frontend CCF): PASS (ipc-contracts.jsonl confirmed; 1.0.9 hook pattern migrated; argKeys=[] identical)
- dim2 (owner + pseudocode): PASS (both decompiled cleanly, 逆向分析 live)
- dim3 (call-tree): PASS (depth 3, all terminated at fs/std/uuid/alloc/platform leaves)
- dim4 (interface/DTO/error/side-effect): PASS (req=none, resp={deviceId, notificationsSince}, 5 error paths, create side-effect=save_settings)
- dim5 (macOS platform gate): PASS (macOS arm64 IDB confirmed, all VAs verified)
- dim5 (Windows): Unknown (1.1.1 Windows not analyzed)
- dim6 (test/acceptance): Unknown (内部构建 implementation side — reversal ceiling)

**implementation_use**: false (dim6 not assessed, Windows Unknown)
**gate_accepted**: false (dim6 not assessed)
**genuine_ceiling**: false
**accepted_unknown**: false
