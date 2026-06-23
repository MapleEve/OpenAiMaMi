# Evidence: rebuild_registry — AiMaMi 1.1.1 macOS ARM64

**Session**: <审计会话>
**Machine**: <本地机器> (producer)
**Binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi
**IDB**: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
**Baseline**: AiMaMi 1.0.9 (fully reversed)
**delta_class**: integrity_recovered (previously mis-classified as "same"; confirmed net-new)

---

## Delta Classification

**rebuild_registry is NET-NEW in 1.1.1 — does not exist in 1.0.9.**

1.0.9 `commands::system` module contained only:
- `get_hotspot_enabled`
- `hotspot_ready`
- `set_hotspot_enabled`

1.1.1 adds `rebuild_registry` + the entire `core::repository` subsystem
(`Repository`, `RegistryFile`, `RegistryItem`, `carry_over_registry_state`,
`persist_registry`, `load_registry`).

This is not a rename, not a refactor, not a compiler delta — it is a wholly new
IPC command with new persistent state (`registry.json`).

---

## Owner VAs

| Symbol | VA | Size |
|--------|----|------|
| `commands::system::rebuild_registry` (IPC handler) | 0x1006182c0 | 0x2F7 |
| `core::repository::Repository::rebuild_registry` (impl) | 0x1004c40a0 | 0x1507 |
| `core::repository::carry_over_registry_state` | 0x1004d6230 | ~0x200 |
| `core::repository::Repository::persist_registry` | 0x1004c3a00 | ~0x1C0 |
| `core::repository::Repository::load_registry` | 0x1004bf8e0 | ~0x80 |
| `core::auth::load_auth_file` | 0x10053ac80 | ~0xC0 |
| `core::auth::make_auth_snapshot` | 0x10053b9f0 | ~0x700 |

---

## Delta vs 1.0.9: What Changed

### New callees (app-level, not noise)

| Callee | Purpose |
|--------|---------|
| `core::repository::Repository::load_registry` | Load prev RegistryFile for state carry-over |
| `core::repository::carry_over_registry_state` | Merge prev item state (timestamps, plan, proxy) into new scan |
| `core::repository::Repository::persist_registry` | Serialize+write registry.json (new persistence) |
| `core::auth::load_auth_file` | Read+deserialize auth.json per account |
| `core::auth::make_auth_snapshot` | Build AuthSnapshot from JWT (new JWT decode pipeline) |
| `core::account_io::make_snapshot_path` | Compute backup path for auth.json |
| `core::auth::decode_jwt_claims` | JWT claim extraction (base64+JSON) |
| `core::plan_mapping::parse_chatgpt_plan_label` | Map plan string → PlanType enum |
| `core::auth::parse_iso_timestamp` | Parse ISO8601 subscription expiry |
| `core::auth::int_val` | Extract iat/exp integers from JWT |
| `std::sys::fs::read_dir` | Directory scan of auth directory (NEW I/O) |
| `std::fs::write` | Write registry.json (NEW I/O) |
| `std::sys::fs::copy` (x2) | Backup auth.json + registry.json before overwrite |
| `serde_json::de::from_trait` | Deserialize AuthData from file |
| `core::slice::sort::stable::driftsort_main` | Sort RegistryItems (new sort path) |

### New DTO keys in registry.json
`version`, `timestamp`, `account_snapshot`, `items` + struct fields `auth_mode`, `disabled`

### New string literals (non-noise)
- `"chatgpt_account_id"` — JWT claim key
- `"user_id"` — JWT claim key
- `"chatgpt_subscription_active_until"` — subscription expiry key
- `"Unknown Account"` / `"unknown-account"` — display name fallbacks
- `"AiMaMi virtual relay key; not a real account"` — relay guard error (63 bytes)

### Noise-filtered (not delta)
- Mutex poison guard / GLOBAL_PANIC_COUNT / is_zero_slow_path
- sub_* / anon_<hash> vtable changes
- rust_alloc size adjustments
- Register/stack offset differences
- alloc/dealloc wrappers

---

## Side-Effects (new vs 1.0.9)

| Side-effect | Description |
|-------------|-------------|
| fs::copy | Backs up primary auth.json to make_snapshot_path() before registry write |
| fs::copy | Backs up existing registry.json before overwrite (timestamped) |
| std::fs::write | Writes registry.json to Repository path a2+216 |
| fs::read_dir | Scans auth directory for additional *.json accounts |

---

## IDB Annotations Written

All 6 key functions annotated via `append_comments` with scope=func.
IDB saved at: <来源位置>/raw/binary/AiMaMi-1.1.1-idb

---

## Gate Status

- [x] Owner VA confirmed (two-symbol chain: handler + impl)
- [x] Callee tree depth >= 5 (commands→repo→auth→jwt→iso_timestamp→leaf)
- [x] Interface/DTO extracted (request: none; response: CoreEnvelope<RegistryFile>)
- [x] Error codes documented (2, 3, 9)
- [x] Side-effects documented (3 fs writes, 1 dir scan)
- [x] Delta vs 1.0.9: NET-NEW (not in 1.0.9 module list)
- [x] String literals extracted (plan/auth keys, guard string)
- [x] Noise filtered (mutex/panic guards, vtable renames, alloc sizes)
- [x] IDB comments written + idb_save confirmed
- [x] pseudocode written (3 files)
- [x] call-tree written
- [x] dto.md written

**GATE: PASS — delta_class=integrity_recovered, readyToImplement=true**
