# get_device_id — macOS 逆向分析 Evidence (1.1.1 Delta Pass)
<!-- session: <审计会话> | machine: <本地机器> | sha: (aimami-1.1.1) | produced: 2026-06-17 -->
<!-- baseline: 1.0.9 <审计会话> -->

## Summary

- **Function**: `codexmate_lib::commands::system::get_device_id::h01dc7e7292edc62a`
- **Address**: `0x100615dd0`
- **Size**: 0x303 = 771 bytes (+127B vs 1.0.9's 644B, +20%)
- **Binary**: AiMaMi 1.1.1 macOS universal (arm64 slice)
- **逆向分析 module**: AiMaMi — confirmed via server_health (status=ok, uptime=35218s, IDA decompiler_ready=true)
- **is_upstream**: false (内部构建-extra, not in upstream codex-cli)
- **Module**: system
- **IPC type**: Retained-IPC / native-bootstrap-substitute — no frontend static CCF; Tauri dispatch closure confirmed
- **gate_tier**: `strictImplementationUse` (dim1-5 closed; dim6 open — same ceiling as 1.0.9)
- **genuine_ceiling**: false
- **real_body_found**: true
- **1.1.1 vs 1.0.9 delta**: NON-TRIVIAL (+20% size). Structural behavior identical; delta confined to `CodexMateSettings` fields and `load_settings` migration.

---

## Fake-Wall Taxonomy Exclusion (Red Line 13, all 7 items)

| # | Fake-wall signal | Status | Reason |
|---|---|---|---|
| 1 | drop_in_place / destructor as body | **Excluded** | True owner is synchronous cmd handler; drop_in_place<CoreError> and drop_in_place<CodexMateSettings> are callees (cleanup), not the body |
| 2 | architecture_only / budget rule self-limit | **Excluded** | Full HexRays decompile returned complete pseudocode (0x303 bytes); no budget limit hit |
| 3 | async decompile failed (HexRays bail) | **Excluded** | Synchronous function; no async state machine; HexRays returned full pseudocode |
| 4 | accepted_unknown ICF-size / wrong VA | **Excluded** | func_query name_regex returned exactly one function at 0x100615dd0 size=0x303; no VA confusion |
| 5 | vtable / dynamic dispatch | **Excluded** | Call to get_or_create_device_id is direct static call; no vtable dispatch |
| 6 | HTTP-terminal / external transport | **Excluded** | No HTTP calls anywhere in call tree; pure file I/O |
| 7 | reqwest/rustls library internal | **Excluded** | No reqwest or TLS in call tree |

All 7 excluded. No accepted_unknown warranted. No genuine_ceiling.

**recovery_attempts**: N/A — no false wall encountered. Direct full decompile succeeded. Fake-wall taxonomy run as mandatory pre-gate check per red line 13.

---

## 1.1.1 vs 1.0.9 Delta Analysis

### Owner function

| Attribute | 1.0.9 | 1.1.1 | Delta |
|---|---|---|---|
| VA | 0x10025cc80 | 0x100615dd0 | new hash (relocation) |
| Size | 0x284 = 644B | 0x303 = 771B | +127B (+20%) |
| Hash suffix | h5ebc75376203c5ce | h01dc7e7292edc62a | changed |
| Structural behavior | Mutex lock → get_or_create_device_id → ok/err → unlock | identical | no change |
| Poisoned-lock path | present | present | no change |
| IPC wire format | 0=ok tag, 1=err tag | identical | no change |

### Impl leaf: get_or_create_device_id

| Attribute | 1.0.9 | 1.1.1 | Delta |
|---|---|---|---|
| VA | 0x1005ea100 | 0x1004c7900 | new VA |
| Logic | load→check sentinel→uuid_gen if absent→save | identical | no change |
| ok discriminant | 10 | 10 | no change |
| Empty-sentinel | 0x8000000000000000 | 0x8000000000000000 | no change |

### CodexMateSettings serialize fields (save_settings)

1.0.9 fields: `hotspot, usageRefreshInterval, deviceId, remoteDeviceSecret, notificationsSince, apiProxy, MysteryRouteGrant` (7 fields)

1.1.1 fields: `hotspot, usageRefreshInterval, deviceId, remoteDeviceSecret, notificationsSince, apiProxy, MysteryRouteGrant, routeexpiresAtMs` (8 fields)

**NEW in 1.1.1**: `routeexpiresAtMs` — MysteryRouteGrant expiry timestamp field. Evidence: rodata @0x10114cde0 `hotspotusageRefreshIntervaldeviceIdremoteDeviceSecretnotificationsSinceapiProxyMysteryRouteGrantrouteexpiresAtMs`; `struct MysteryRouteGrant with 2 elements` confirmed in struct debug string pool @0x10114d922.

### load_settings migration (NEW in 1.1.1)

1.1.1 `load_settings` adds a JSON Value migration pass **before** `deserialize_struct`:
1. After reading+parsing JSON (or fallback default), checks for `mysteryUnlockGrants` key (len=19) in the parsed `serde_json::Value`.
2. If absent: looks for legacy key `mysteryUnlockedRoutes` (len=21).
3. If legacy key present: reads its value, converts via `Vec::from_iter` + `serde_json::to_value`, writes back under new key `mysteryUnlockGrants` via `index_or_insert`.
4. Then proceeds to `deserialize_struct` as normal.

Rodata evidence: concatenated string `mysteryUnlockGrantsmysteryUnlockedRoutes` @0x10114cc78 (40B, split: [0..19] = `mysteryUnlockGrants`, [19..40] = `mysteryUnlockedRoutes`). This migration is triggered on every `load_settings` call (including via `get_device_id`) until the settings file is updated.

**Why this inflates owner size (+127B)**: the extra bytes are in `load_settings` (size inflation there), not directly in the owner; but the owner's dispatch path through `get_or_create_device_id` → `load_settings` now executes the migration logic on every call before returning deviceId.

---

## dim1 — Frontend CCF

- Command string `get_device_id` confirmed in Tauri invoke_handler string pool: `find_regex("get_device_id")` matched in 逆向分析 string table at 0x10114801b (embedded in full command-name concatenation string).
- Dispatch closure: `codexmate_lib::run::{{closure}}::{{closure}}::h01bbab0d6ee64cfe@0x10030c110` (size=0x2e4); xref from 0x10030c20d inside that closure confirmed via xrefs_to(0x100615dd0).
- **No UI-triggered frontend CCF**: command absent from frontend `ipc-contracts.jsonl` — same retained-IPC / native-bootstrap-substitute pattern as 1.0.9.
- **dim1 status**: Accepted (retained-IPC / native-bootstrap-substitute) — same conclusion as 1.0.9.

---

## dim2 — Owner + Decompile

- **Owner**: `codexmate_lib::commands::system::get_device_id::h01dc7e7292edc62a` @ `0x100615dd0`
- **Size**: 0x303 = 771 bytes
- **Decompile status**: SUCCESS — full pseudocode recovered, A-level
- **逆向分析 session**: <审计会话>
- **IDB saved**: yes (see step 7)

### Pseudocode Summary

Structurally identical to 1.0.9:
1. Fast-path: `*a2 != 0` → use existing Arc (OnceBox already initialized).
2. Slow-path: `OnceBox::initialize@0x100f7c920` to lazy-init Repository Arc.
3. `Mutex::lock@0x100f2e7a0` on StateManager mutex.
4. Poison check: `GLOBAL_PANIC_COUNT@0x10144a9f8` × 2 → `is_zero_slow_path@0x100fb7400`; if poisoned: `*(a2+8)=1`.
5. If `*(a2+8)` poison flag: format `poisoned lock` literal (41B @0x10114c2e6) → err-tag=1.
6. Else: `get_or_create_device_id@0x1004c7900(v15, a2+2)` → check discriminant==10 → copy String payload → ok-tag=0.
7. On error: format `CoreError` via `fmt::h5d4af54243c00052@0x10058fda0` → err-tag=1.
8. `Mutex::unlock@0x100f2e7c0` in all exit paths.

No `unwrap()/expect()/panic!` in business path (all via Result + discriminant).

---

## dim3 — Call-tree to Implementation Leaf

**Depth 1**: `get_device_id@0x100615dd0` → `Repository::get_or_create_device_id@0x1004c7900`

**Depth 2**: `Repository::get_or_create_device_id@0x1004c7900` →
  - `Repository::load_settings@0x1004bfa30` (reads + migrates CodexMateSettings JSON — NEW migration logic in 1.1.1)
  - `uuid::v4::Uuid::new_v4@0x100e13930` (if deviceId absent)
  - `uuid::fmt::LowerHex::fmt@0x100e13a20` (format UUID)
  - `String::clone@0x100f656f0` (clone deviceId for return)
  - `Repository::save_settings@0x1004c00c0` (persist — only on uuid-create path; now includes routeexpiresAtMs)
  - `drop_in_place<CodexMateSettings>@0x1004eca70` (cleanup)

**Depth 3**: `load_settings@0x1004bfa30` →
  - `fs::read_to_string::inner@0x100f25740`
  - `serde_json::de::from_trait@0x1002ea3f0` (deserialize JSON)
  - (NEW in 1.1.1) `serde_json::value::index_into` checks for `mysteryUnlockGrants`/`mysteryUnlockedRoutes`
  - (NEW in 1.1.1) `Vec::from_iter`, `serde_json::to_value`, `index_or_insert` — migration path
  - `serde_json::value::de::deserialize_struct` (final struct deserialization)

**Depth 3**: `save_settings@0x1004c00c0` →
  - `CodexPaths::ensure_directories@0x1005582b0`
  - `serde_core::ser::SerializeMap::serialize_entry` × 7 (serialize all fields including new `routeexpiresAtMs`)
  - `std::fs::write@0x100201fe0` (terminal persistence commit)

- **Total edges**: ≥ 14 (exceeds threshold of 5; deeper than 1.0.9 due to migration)
- **Terminated reason**: `persistence_commit` — `save_settings` terminates with `std::fs::write`
- **dim3 status**: PASS

---

## dim4 — Interface / DTO / Error / Side-effect

### Input
- **Args**: None (no IPC parameters) — same as 1.0.9

### Output
- **Type**: `Result<String, CoreError>` via tagged-union at output buffer `a1` — same as 1.0.9
- **ok-tag**: `*(QWORD*)a1 = 0` → String payload at a1+8..a1+24 — UUID v4 lowercase hyphenated
- **err-tag**: `*(QWORD*)a1 = 1` → error string at a1+8..a1+24
- **Inner ok-discriminant**: 10 (same as 1.0.9)

### Settings Fields (1.1.1)

| Field index | JSON key | Type | Notes |
|---|---|---|---|
| 0 | hotspot | (unknown) | unchanged |
| 1 | usageRefreshInterval | (unknown) | unchanged |
| 2 | deviceId | Option<String> | empty-sentinel 0x8000000000000000; unchanged |
| 3 | remoteDeviceSecret | (unknown) | unchanged |
| 4 | notificationsSince | (unknown) | unchanged |
| 5 | apiProxy | (unknown) | unchanged |
| 6 | MysteryRouteGrant | struct{2 fields} | unchanged |
| 7 | routeexpiresAtMs | (ms timestamp) | **NEW in 1.1.1** — MysteryRouteGrant expiry |
| migration | mysteryUnlockGrants | (from mysteryUnlockedRoutes) | **NEW migration in 1.1.1 load path** |

### Side-effects (1.1.1)
1. **Read (always)**: `load_settings` → `fs::read_to_string` on settings JSON
2. **Migration (always if not yet migrated)**: `mysteryUnlockedRoutes` → `mysteryUnlockGrants` rename in JSON Value; triggers `index_or_insert` write on first call after upgrade
3. **Write (conditional)**: `save_settings` → `std::fs::write` — only when deviceId absent
4. **Idempotent**: if deviceId present and `mysteryUnlockGrants` already migrated: no write

### Error paths (same as 1.0.9)
1. CoreError from get_or_create_device_id — propagated via Result tag
2. Poisoned Mutex — "poisoned lock: another task failed inside" (41B @0x10114c2e6)
3. fs::read_to_string failure — surfaces via load_settings Result
4. fs::write / ensure_dirs failure — CoreError via save_settings (discriminant 2 = io-error)
5. uuid::fmt panic (unwrap_failed @0x100fbc780) — in practice unreachable

No HTTP, no process spawn, no IPC to external processes, no macOS keychain or registry writes.

### dim4 status: PASS (fully closed)

---

## dim5 — Same-platform Gate

- macOS arm64 AiMaMi 1.1.1 universal binary
- 逆向分析 server_health: status=ok, uptime=35218s, IDA decompiler_ready=true, module=AiMaMi, idb_path matches binary
- All decompile evidence produced from macOS Mach-O IDB (arm64 slice); not inferred from Windows
- **dim5 status**: PASS

---

## dim6 — Test/Acceptance Mapping

- **Status**: OPEN — no acceptance test mapping provided
- Dim6 closure required for `readyToImplement`; current ceiling is `strictImplementationUse` (same as 1.0.9)

---

## Gate Determination

| Dimension | Status | Notes |
|---|---|---|
| dim1 Frontend CCF | Accepted | retained-IPC / backend-only-frontend-absence; dispatch closure confirmed @0x10030c110 |
| dim2 Owner + pseudocode | PASS | Full A-level decompile, 771B, VA=0x100615dd0, source=ida |
| dim3 Call-tree | PASS | ≥14 edges, terminated=persistence_commit (std::fs::write @0x100201fe0) |
| dim4 Interface/DTO/error/side-effect | PASS | Fully closed: no-args in, Result<String,CoreError> out, deviceId field idx=2, 5 error paths, NEW: migration side-effect + routeexpiresAtMs field |
| dim5 Same-platform | PASS | macOS arm64, 逆向分析 confirmed |
| dim6 Test/acceptance | OPEN | Not closed |

**gate_tier**: `strictImplementationUse`
**genuine_ceiling**: false
**real_body_found**: true
**was_false_wall**: N/A
**implementation_use**: false (dim6 not closed)
**gate_accepted**: false
**delta_vs_baseline**: NON-TRIVIAL — structural behavior identical to 1.0.9; semantic delta: (1) routeexpiresAtMs new CodexMateSettings field; (2) mysteryUnlockGrants migration in load_settings; (3) larger owner hash/size due to compiler recompile
**consumerStartReady**: true
**strictImplementationUse**: true
**readyToImplement**: false

---

## Confirmed

- Owner `codexmate_lib::commands::system::get_device_id::h01dc7e7292edc62a` at `0x100615dd0`, 771B
- Dispatch closure `codexmate_lib::run::{{closure}}::{{closure}}::h01bbab0d6ee64cfe@0x10030c110`; xref from 0x10030c20d
- `get_or_create_device_id@0x1004c7900`: load settings → check deviceId (field index 2) for empty-sentinel; if absent: UUID v4 + save; else return existing
- `deviceId` field at index 2 in CodexMateSettings (rodata 0x10114cde0 confirmed)
- Empty-sentinel `0x8000000000000000` triggers UUID generation path
- `std::fs::write@0x100201fe0` (via save_settings) is terminal persistence commit
- **NEW in 1.1.1**: `routeexpiresAtMs` — 8th serialized field in CodexMateSettings (MysteryRouteGrant expiry, ms timestamp)
- **NEW in 1.1.1**: `mysteryUnlockGrants`/`mysteryUnlockedRoutes` migration in `load_settings` — renames field in JSON Value before struct deserialization
- `struct MysteryRouteGrant with 2 elements` confirmed in struct debug strings @0x10114d922
- No HTTP, no process spawn, no IPC, no macOS keychain, no registry

## Inferred

- `routeexpiresAtMs` is the expiry timestamp of a MysteryRouteGrant — milliseconds epoch
- MysteryRouteGrant struct has 2 fields: likely `{grant_type: String, expiresAtMs: u64}` or similar
- The migration from `mysteryUnlockedRoutes` → `mysteryUnlockGrants` suggests a renamed feature between 1.0.9 and 1.1.1 (routes list → grants list semantic shift)
- The `load_settings` migration runs on every call to `get_device_id` (via get_or_create_device_id) until settings file reflects new schema — first call after upgrade will trigger `index_or_insert` write
- Mutex + OnceBox ensures thread-safe lazy Repository init across concurrent Tauri IPC calls — identical pattern to 1.0.9

## Unknown

- dim6 acceptance test mapping (not yet provided)
- Exact disk path of settings JSON at runtime (CodexPaths abstraction; platform data dir convention)
- Exact struct layout of `MysteryRouteGrant` (2 fields confirmed but field names/types not fully extracted)
- Whether `routeexpiresAtMs` is at struct offset or separate serialization; codec unknown beyond key name
- Exact behavior when mysteryUnlockedRoutes value is `null`/absent vs array (code handles all serde_json::Value discriminants 0-5 in switch)
