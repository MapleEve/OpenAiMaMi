# rebuild_registry — Evidence & Delta Analysis
# session=<审计会话>  machine=<本地机器>
# delta_class=integrity_recovered  platform=macos-arm64
# baseline=1.0.9  target=1.1.1
# date=2026-06-17

---

## 1. Owner Functions

| Role | Symbol | VA | Size |
|------|--------|----|------|
| IPC handler | `codexmate_lib::commands::system::rebuild_registry` | 0x1006182c0 | 0x2f7 |
| Core impl | `codexmate_lib::core::repository::Repository::rebuild_registry` | 0x1004c40a0 | 0x1507 |

---

## 2. Delta Analysis vs 1.0.9

### 2.1 Baseline 1.0.9 state
- 1.0.9 macos-arm64 modules: `account_io/`, `sessions/`, `system/`
- 1.0.9 `system/` contains only: `get_hotspot_enabled/`, `hotspot_ready/`, `set_hotspot_enabled/`
- **`rebuild_registry` command did NOT exist in 1.0.9** — confirmed by absence of module directory and absence of matching mangled symbols in evidence corpus
- This is an **entirely new command** added in 1.1.1

### 2.2 New callees (app-level, non-noise)

| Callee | VA | Delta Type |
|--------|----|------------|
| `plan_mapping::parse_chatgpt_plan_label` | 0x100536010 | NEW — normalizes ChatGPT plan strings to PlanType enum |
| `account_io::make_snapshot_path` | 0x1004bd8d0 | NEW CALL SITE — computes auth.json backup path |
| `fs::copy` (in rebuild_registry context) | 0x100f2aa10 | NEW SIDE EFFECT — copies auth.json to snapshot path before processing |
| `carry_over_registry_state` | 0x1004d6230 | NEW CALLEE — preserves persistent fields across registry rebuild |
| `persist_registry` | 0x1004c3a00 | NEW CALLEE — serializes & writes registry.json |
| `sort::stable::driftsort_main` | 0x1007440f0 | NEW — stable sort for n>=21 registry items |

### 2.3 Compilation noise (NOT delta)
- `GLOBAL_PANIC_COUNT` / `is_zero_slow_path` — mutex poison guard pattern, all 1.1.x commands have this
- `OnceBox::initialize` — lazy-init pattern for IPC command static state
- `sub_*` / `anon_*` hash-suffixed trampolines — vtable/monomorphization noise
- Register/stack layout changes between functions — ASLR + codegen variation
- `rust_alloc` size parameters — codegen-level, not semantic

### 2.4 New DTO fields confirmed
From `persist_registry` serde field name evidence (byte scan @ 0x10114cb15..0x10114cd2b):

```
Registry JSON schema (registry.json):
{
  "schemaVersion": u32,       // key len=13
  "updatedAt": i64,           // key len=9, unix secs
  "activeAccountKey": String, // key len=16
  "items": [RegistryItem],    // key len=5
  // + auth_mode + active_flag fields (serialize_field calls)
}
```

RegistryItem fields extracted from `make_auth_snapshot` and `carry_over_registry_state`:
- `account_key` (email-derived, de-duplication key)
- `display_name` (String, offset +200)
- `plan_type` (PlanType enum, lowercase string: free/plus/business/enterprise/edu)
- `auth_mode` (AuthMode enum, lowercase string)
- `is_primary` (bool, offset +16 set=1 for primary auth.json)
- `token_elapsed_secs` (u64, time since rebuild start)
- `token_count_a`, `token_count_b` (u64, max-merged from prev registry)
- `subscription_active_until` (Option<ISO timestamp>)
- `account_id` (chatgpt_account_id string)
- `user_id` (chatgpt_user_id string)
- `org_id` (organization_id string)
- `proxy_config` (optional, offsets 48/56-80)
- `hotspot_config` (optional, offsets 88/96-120)
- `delta_marker` (u16 = 0x0202 = 514, at offset +352)
- `jwt_expiry_secs` (u64, at offset +344)
- RegistryItem stride: **360 bytes**

### 2.5 Side effects (new in 1.1.1)
1. **auth.json snapshot copy** — before processing primary account, copies `auth.json` to a sanitized-email-named file in snapshot directory. Path computation: `make_snapshot_path(repo[31], repo[32])` sanitizes `@`→`_`, `/`→`_`, `:`→`_`.
2. **registry.json write** — `persist_registry` writes full sorted account registry. Pre-write backup: copies existing `registry.json` to timestamped path (`repo[37]/repo[38]` join with elapsed_secs).

---

## 3. Error Paths

| Error | Code | Trigger |
|-------|------|---------|
| `ensure_directories` failure | CoreError(2, e) | Dir creation failed |
| Poison flag set | Mutex poison | Prior panic in rebuild |
| `auth.json` not found | CoreError(2) | load_auth_file code=2 |
| `auth.json` parse error | CoreError(3) | serde_json error |
| Virtual relay key | CoreError(9) | token="<virtual-relay-key-prefix>" |
| persist_registry JSON error | CoreError(3) | serde serialization |
| persist_registry write error | CoreError(2) | fs::write failed |

Error string: `"Rebuild registry failed: "` @ 0x1010b455a (referenced in IPC handler error path)

---

## 4. Gate Report

| Gate | Status | Evidence |
|------|--------|----------|
| Owner VA found | PASS | 0x1006182c0 (handler), 0x1004c40a0 (impl) |
| Decompile obtained | PASS | Both functions, full pseudocode |
| Callee tree depth ≥5 | PASS | Depth 5+ via make_auth_snapshot chain |
| terminated_reason on all leaves | PASS | All leaves TERMINATED with reason |
| App-level delta callees identified | PASS | 6 new app callees listed in §2.2 |
| DTO/serde fields extracted | PASS | registry.json schema + RegistryItem fields |
| Side effects documented | PASS | 2 side effects (snapshot copy + registry.json) |
| Error paths documented | PASS | 7 error cases in §3 |
| Compilation noise filtered | PASS | GLOBAL_PANIC_COUNT/OnceBox excluded |
| IDB annotated + saved | PASS | append_comments on 7 functions, idb_save confirmed |
| Baseline comparison | PASS | command absent in 1.0.9 (new in 1.1.1) |

**Overall gate: PASS — integrity_recovered delta fully documented**

---

## 5. File Index

```
rebuild_registry/
├── evidence.md          (this file)
└── ida/
    ├── pseudocode.md    (decompiled pseudocode, all 7 functions)
    └── call-trees.md    (call tree with depth labels and terminated reasons)
```
