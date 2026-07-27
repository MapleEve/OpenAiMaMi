# evidence — get_mystery_unlock_grants (AiMaMi 1.1.1 macOS ARM64)

**Session**: <审计会话>
**Machine**: <本地机器>
**Produced**: 2026-06-17
**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**IDB**: AiMaMi.i64 (IDA decompiler_ready=true, uptime=37160s at health check)
**Module**: codexmate_lib::commands::system
**Owner VA**: 0x10061a140
**Owner size**: 0x303
**Owner symbol**: codexmate_lib::commands::system::get_mystery_unlock_grants::he2859bd20e05ce5a
**IPC dispatch**: codexmate_lib::run::{{closure}}::{{closure}}::h219b17bf72905427 (0x10030d7e0) — xref confirmed
**IPC string pool**: 0x10114801b (blob contains "get_mystery_unlock_grants" confirmed via find_regex)

---

## ## Confirmed

1. **Owner decompile clean**: 0x10061a140, size=0x303; synchronous command handler; no async poll state machine; clean HexRays output.
2. **No argKeys**: command accepts no arguments — `a2` is the Tauri app state pointer (OnceBox-protected mutex), not a user parameter. Request DTO = `{}` (zero fields).
3. **Response DTO = `CoreEnvelope<Vec<MysteryUnlockGrant>>`**: On Ok path returns `*a1 = 0` (Ok discriminant) with v15[1..3] carrying Vec<T> data. On Err path returns `*a1 = 1` (Err). Confirmed by drop_in_place demangled name `CoreError` and the Ok branch short-circuit.
4. **Core implementation**: `Repository::get_mystery_unlock_grants` (0x1004ca780) — the real business logic sits here. Call-tree depth 3 fully decompiled.
5. **Settings file I/O**: `load_settings` (0x1004bfa30) reads via `std::fs::read_to_string::inner` using path from `a2+440` / `a2+448` offsets (CodexPaths settings file path). On IO failure returns default-initialized empty CodexMateSettings (no error propagation — silent empty).
6. **JSON parsing**: `serde_json::de::from_trait` deserializes raw string into `serde_json::Value`, then `index_into("mysteryUnlockGrants", 19)` and `index_into("mysteryUnlockedRoutes", 21)` extract the two relevant fields.
7. **mysteryUnlockedRoutes migration**: If `mysteryUnlockedRoutes` field exists and is an Array (tag=4), it is converted via `from_iter` → `to_value` and written back under key `mysteryUnlockGrants` (using `index_or_insert("mysteryUnlockGrants", 0x13)` = len 19). This is a one-time migration from old `mysteryUnlockedRoutes` field to `mysteryUnlockGrants`.
8. **Timestamp filtering**: `SystemTime::now()` + `duration_since(UNIX_EPOCH)` → current_ts_ms = `secs * 1000 + nanos / 1_000_000`. Each grant is tested: if grant has `expiry` flag set AND `grant.expiresAt <= current_ts_ms`, the grant is DROPPED. Non-expiring grants always pass.
9. **Route allowlist gate**: `mystery_route_allowed` (0x1004c7650) — string XOR whitelist. A grant's route field is checked against 9 allowed route names. Grants with routes not in the allowlist are DROPPED regardless of expiry.
10. **Allowlist routes** (fully decoded from XOR constants): `mcp` (len=3), `skills` (len=6), `overview` (len=8), `accounts` (len=8), `sessions` (len=8), `settings` (len=8), `maintenance` (len=11), `subscription` (len=12), `customInstructions` (len=18).
11. **Save-back**: If the filtered Vec has a different length than the loaded one (v8[2] != v5 condition), `save_settings` (0x1004c00c0) is called to persist the pruned grant list back to disk, removing expired/invalid entries.
12. **save_settings I/O**: Serializes `CodexMateSettings` fields via serde_json to JSON buffer, then `std::fs::write` (NOT atomic_write) to CodexPaths settings path (a2+54*8 = offset into CodexPaths struct).
13. **IPC xref confirmed**: Single xref from `codexmate_lib::run::{{closure}}::{{closure}}::h219b17bf72905427` (0x10030d7e0) — standard Tauri command dispatch pattern. No duplicate registrations.
14. **IPC command name**: Confirmed in string pool at 0x10114801b as part of concatenated command list blob including `get_mystery_unlock_grants`.
15. **Delta vs 1.0.9**: Owner VA changed (1.0.9: 0x10026091c → 1.1.1: 0x10061a140). Core logic pattern is same. 1.1.1 adds `routeExpiresAtMs` new field tracking (per delta note in get_device_id INDEX entry: "routeexpiresAtMs new field + mysteryUnlockGrants migration in load_settings"). The `expiry + expiresAt` check logic in try_fold corresponds to this new expiry field.

---

## ## Inferred

1. **MysteryUnlockGrant struct layout** (inferred from try_fold element access, element stride=5 qwords=40 bytes): fields at offsets [0]=flags/discriminant (bit 0 = has_expiry), [1]=expiresAt_ms (u64), [2]=route_ptr_len (string ptr), [3]=route_data_ptr, [4]=route_capacity_or_len. Approximate struct: `{ flags: u64, expires_at_ms: u64, route: String }` packed to 40 bytes.
2. **Expiry check semantics**: `(grant.flags & 1) != 0 && grant.expiresAt_ms <= current_ts_ms` → expired if flag bit 0 set AND timestamp passed. Non-expiring grants (flag bit 0 = 0) always included.
3. **Settings JSON structure** (from load_settings + save_settings key strings): The settings file is a JSON object with at minimum keys: `hotspot` (bool/obj at +144), `usageRefreshInterval` (numeric at +16), `deviceId` (string at +64), `remoteDeviceSecret` (string at +88), `notificationsSince` (numeric at +0), `mysteryUnlockGrants` (array of grant objects), and possibly `mysteryUnlockedRoutes` (legacy migration field).
4. **Grant JSON structure** (inferred from serde round-trip + deserialization to Value): Each grant in `mysteryUnlockGrants` array is an object with at minimum `route` (string) and optionally `expiresAt` (timestamp ms, u64) + expiry flag.
5. **Silent error handling**: IO errors from `read_to_string` → returns default empty settings (no error surface to caller). JSON parse errors → same default empty path. Settings save error → `*a1 = 2` or `*a1 = 3` propagated as Err to caller.
6. **Save condition**: Only triggers if filtered_len != original_len (i.e., grants were pruned). If nothing changed, no write-back occurs.
7. **Mutex semantics**: The OnceBox+Mutex pattern on `a2` (Repository state) protects concurrent access. Lock acquired at command entry, released after save_settings or on error paths.
8. **mysteryUnlockedRoutes migration target**: The migration writes the converted array back into the same Value under `mysteryUnlockGrants`. This means on next read the `mysteryUnlockGrants` field will exist and the `mysteryUnlockedRoutes` path won't trigger again.
9. **CoreEnvelope response fields**: Response payload on Ok is Vec<MysteryUnlockGrant> serialized. Frontend receives `{ ok: true, data: [{ route: "...", expiresAt?: ... }, ...] }` — standard CoreEnvelope JSON wrapper.
10. **Error discriminants**: `*a1 = 0` = Ok variant (10 in LODWORD = CoreEnvelope ok), `*a1 = 1` = Err variant (CoreError fmt Display used for error string), `*a1 = 2` = IO error from save, `*a1 = 3` = alloc/serialize error from save.

---

## ## Unknown

1. **dim1 Frontend CCF**: UI trigger, invoke wrapper call-site, component owner, state/store mutation on response not queried in this session. owner-map-111 status=shared (not_yet_queried for frontend dim1). Blocks readyToImplement.
2. **Exact CodexPaths settings file path string**: Path constructed from CodexPaths struct offsets +440/+448 (load) and +54*8=432 (save). Not decoded in this session — requires following CodexPaths::from_home or CodexPaths::resolve_codex_home to get the actual filename. Accepted: implementer can determine via CodexPaths impl.
3. **MysteryUnlockGrant full struct field names**: Inferred as `{ route: String, flags: u64, expires_at_ms: u64 }` from stride/access pattern but field names not from source schema. Possible additional fields (e.g., `id`, `scope`, `createdAt`). Non-blocking for implementation.
4. **Grant JSON serialization field names**: `serde_json::Value` round-trip means field names in JSON may differ from Rust struct field names. Actual JSON key names for expiry field unknown (could be `expiresAt`, `expires_at`, `expiry_ms`). Non-blocking — frontend owns the grant format contract.
5. **Windows platform behavior**: No 1.1.1 Windows IDB loaded in this session. Windows Unknown.
6. **dim6 test/acceptance mapping**: 内部构建 implementation side — outside reverse scope.
7. **mysteryUnlockGrants array maximum size / capacity**: No size limit observed in decompile. Accepted as unbounded.
8. **Concurrent grant mutation safety**: Lock is held during load+filter+save. If save_settings fails mid-write (non-atomic write), partial write risk exists. Non-blocking for gate.
9. **Frontend response consumption**: How the returned Vec<MysteryUnlockGrant> is used in UI (which routes get unlocked, how route string maps to UI nav) — frontend concern, accepted unknown.
10. **Legacy `mysteryUnlockedRoutes` field type variants**: Migration only handles Array (case 4). Other serde_json::Value types (Null, Bool, Number, String, Object) are silently dropped without migration. Accepted as legacy edge case.

---

## Fake-wall check

- **genuine_ceiling**: false
- **recovery_attempts**: none needed — synchronous command decompiled cleanly; no async state machine; no ICF collapse; no vtable dynamic dispatch; no oversized body requiring basic_blocks split
- **Taxonomy exclusions**: all 7 taxonomy categories inapplicable
  - drop_in_place shim: no async body — this is a synchronous cmd handler
  - architecture_only / budget_rule: no self-imposed ceiling
  - async_decompile_failed: not async
  - wrong_VA: owner confirmed via xrefs_to + string pool + owner-map-111
  - vtable_dynamic_dispatch: no vtable dispatch at command level
  - HTTP-terminal_external-only: no HTTP in this command
  - library_internal_vs_config_callsite: all calls are to codexmate_lib or std, none are library-internal boundary issues

---

## Four-angle completeness

- **A (func_query symbol enum)**: lookup_funcs("0x10061a140") hit → owner confirmed; lookup_funcs("codexmate_lib::commands::system::get_mystery_unlock_grants") → Not found (expected: demangled name lookup style); owner-map-111 has direct VA — PASS
- **B (string pool)**: find_regex("get_mystery_unlock_grants") → 1 hit at 0x10114801b (IPC command name blob) — PASS
- **C (frontend IPC)**: owner-map-111 status=shared/dim1_not_yet_queried — PARTIAL (frontend CCF not queried this session, known Unknown)
- **D (owner-map + INDEX)**: owner-map-111 VA 0x10061a140 confirmed; INDEX has 1.0.9 entries only; 1.1.1 macos-arm64 system/get_mystery_unlock_grants = ADDITIVE — PASS

---

## Gate assessment

**Gate tier**: `strictImplementationUse_candidate`
- dim1 (frontend CCF): Unknown — blocks readyToImplement
- dim2 (owner + pseudocode): PASS — clean decompile, size=0x303, SHA confirmed
- dim3 (call-tree to implementation leaves): PASS — depth 4: owner → Repository::get_mystery_unlock_grants → load_settings/mystery_route_allowed/save_settings → fs_leaf/std_leaf
- dim4 (interface/DTO/error/side-effect): PASS — argKeys=[], response CoreEnvelope<Vec<Grant>>, error paths mapped, side-effect = settings file read+conditional write
- dim5_mac: PASS — macOS ARM64 confirmed
- dim5_win: Unknown
- dim6: Unknown (内部构建 implementation side)
