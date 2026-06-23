# rebuild_registry — dim6 ACCEPTANCE MAPPING
# version: 1.1.1 | platform: macos-arm64 | shard: mac-3/5
# authored: 2026-06-19 | session: wf-aimami111-dim6-20260619

## gate_tier: readyToImplement (dim1-5 all closed; dim6=acceptance-draft)
## Note: dim1 confirmed — rebuildRegistry fn → ne("rebuild_registry") argKeys:[] at col=24516

---

## happy_path

**Scenario**: Frontend calls `invoke("rebuild_registry")`. Primary auth.json exists; CODEX_HOME dirs writable; accounts dir contains at least one valid .json file.

Input: `{}` (no args)

Expected output:
```json
{
  "tag": "0x8000000000000000",
  "data": {
    "version": "<schema_version_int>",
    "timestamp": "<unix_secs_u64>",
    "account_snapshot": { /* ... */ },
    "items": [
      {
        "is_primary": 1,
        "plan_type": "<lowercase_plan_string>",
        "auth_mode": "<lowercase_auth_mode_string>",
        "display_name": "<email_or_Unknown Account>",
        "account_id": "<chatgpt_account_id_or_unknown-account>",
        "disabled": false
      }
    ]
  }
}
```
- `plan_type` and `auth_mode` are lowercased (normalized).
- Items sorted (insertion_sort if <21, driftsort if ≥21; stable).
- `carry_over_registry_state` transfers enabled/disabled flags from previous registry if one existed.

**side_effect_asserts**:
1. **auth.json backed up**: `fs::copy(auth.json → make_snapshot_path())` called before registry write.
2. **registry.json backed up**: `fs::copy(registry.json → timestamped_backup)` called if prior registry exists.
3. **registry.json written**: `std::fs::write(registry.json)` with serialized RegistryFile JSON (fields: version, timestamp, account_snapshot, items, plus auth_mode + disabled per item).
4. **auth dir scanned**: `read_dir` on accounts directory.
5. **Only `.json` files** processed from accounts directory (`*v44 != 1852797802` / "json" extension filter).
6. **Duplicate accounts deduped**: accounts appearing in both primary auth and accounts dir scan appear only once in items.

---

## boundary / error paths

| Trigger | Expected behavior |
|---------|-------------------|
| `ensure_directories` fails | `CoreEnvelope::err`, code=2 (IoError) |
| `load_auth_file` fails (primary auth.json unreadable) | `CoreEnvelope::err`, code=2 |
| `serde_json::de::from_trait` fails (malformed auth.json) | `CoreEnvelope::err`, code=3 |
| Relay virtual key detected in auth.json | `CoreEnvelope::err`, code=9, message="AiMaMi virtual relay key; not a real account" (63 chars) |
| `persist_registry` / `fs::write` fails | `CoreEnvelope::err`, code=2 |
| Mutex poisoned | `CoreEnvelope::err`, mutex poison message |
| accounts dir has no `.json` files | `items=[]` in response (no error) |
| `fs::copy` for backup fails | Error propagated via CoreError code=2 |

---

## side_effect_asserts

1. After successful call: registry.json file exists and contains valid JSON with keys `version`, `timestamp`, `account_snapshot`, `items`.
2. After successful call: backup of prior auth.json exists at snapshot path.
3. After second call: timestamped backup of prior registry.json exists.
4. Relay virtual key guard: if auth.json contains `OPENAI_API_KEY` matching "sk-aimami-relay-virtual" prefix pattern, command returns error without writing registry.
5. `plan_type` and `auth_mode` fields in registry.json are lowercase strings.

---

## test_mapping

| Test | Type | Rationale |
|------|------|-----------|
| Successful rebuild writes registry.json with correct fields | e2e (Tauri) | requires real auth.json + fs access |
| Relay virtual key guard rejects virtual key with code=9 | unit (Rust) — core | inject auth.json with sk-aimami-relay-virtual prefix key |
| plan_type and auth_mode lowercase in response and file | unit (Rust) — core | inject mixed-case plan/auth, assert lowercase |
| Only .json files processed from accounts dir | unit (Rust) — core | place .toml and .json files in accounts dir, assert only .json processed |
| Duplicate account deduplication | unit (Rust) — core | same account in primary + accounts dir, assert appears once |
| carry_over_registry_state transfers disabled flag | unit (Rust) — core | set disabled=true in prior registry for an account, rebuild, assert flag preserved |
| fs::copy for auth.json backup created | e2e (Tauri) | verify backup file exists after invoke |
| Empty items list when accounts dir is empty | e2e (Tauri) | no auth files in accounts dir; assert items=[] |
| serde parse failure returns code=3 | unit (Rust) | inject malformed auth.json |

---

## dim6_basis
Evidence: system/rebuild_registry/evidence.md §Delta vs 1.0.9 (14-step pipeline confirmed), §Side-Effects (4 effects confirmed); codexmate_lib__commands__system/rebuild_registry/evidence.md §Confirmed items 6 (.json extension filter 0x6E6F736A), 7 (dedup via memcmp), 9 (6 JSON field serialization calls), 10 (call-tree depth=5); interfaces/dto.md documents RegistryItem 360B stride, CoreError codes 2/3/9; frontend CCF confirmed via frontend-control-flow.jsonl rebuildRegistry → ne("rebuild_registry") argKeys=[].
