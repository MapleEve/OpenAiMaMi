# merge_mystery_unlock_grants — dim6 ACCEPTANCE MAPPING
# version: 1.1.1 | platform: macos-arm64 | shard: mac-3/5
# authored: 2026-06-19 | session: <审计会话>

## gate_tier: readyToImplement (dim1-5_mac all closed; dim6=acceptance-draft)
## Note: dim5_win Unknown — mac-shard gate only

---

## happy_path

**Scenario**: Frontend calls `invoke("merge_mystery_unlock_grants", { grants: [{route:"settings", grant_id:1, granted_at_ms:1718700000000}] })`. Route is in allowlist. Settings file is readable and writable.

Input:
```json
{
  "grants": [
    {
      "route": "settings",
      "grant_id": 1,
      "granted_at_ms": 1718700000000
    }
  ]
}
```

Expected output:
```json
{
  "tag": 0,
  "data": [
    {
      "route": "settings",
      "grant_id": 1,
      "granted_at_ms": 1718700000000
    }
  ]
}
```
- Returns the full merged set (existing grants + incoming grants, after dedup by route key).
- Result is sorted (insertion_sort if <21 items, driftsort if ≥21 items; stable; sort key inferred as route string).
- `granted_at_ms` in response reflects caller-provided value, NOT server `SystemTime::now()`.
- Grants with routes not in allowlist are silently dropped before merge.

**Route allowlist** (case-sensitive after trim):
`"mcp"`, `"skills"`, `"overview"`, `"accounts"`, `"sessions"`, `"settings"`, `"maintenance"`, `"subscription"`, `"customInstructions"`

**side_effect_asserts**:
1. Settings config file rewritten (load_settings → merge → save_settings).
2. `mystery_unlock_grants` field in settings file updated with merged set.
3. Pre-existing grants not in the incoming list are preserved if their route passes allowlist.
4. Incoming grant overwrites existing grant for same route (HashMap::insert semantics — last write wins).

---

## boundary / error paths

| Trigger | Expected behavior |
|---------|-------------------|
| Grant route not in allowlist (e.g., `"admin"`) | Grant silently dropped; not in response |
| Grant route is empty string | Not in allowlist (no 0-length match); silently dropped |
| `save_settings` fails (IO error) | `CoreEnvelope::err` (Err discriminant=1); CoreError propagated |
| `load_settings` fails (IO error) | `CoreEnvelope::err`; CoreError propagated |
| Mutex poisoned from prior panic | `CoreEnvelope::err`; mutex poison error string (41 chars) |
| `grants=[]` (empty array) | Existing grants preserved; save_settings called; response = current persisted set |
| All incoming grants are disallowed routes | No change to persisted set; save_settings still called with unchanged set; returns existing |

---

## side_effect_asserts

1. Settings file is rewritten on every call (even `grants=[]`) — verify via mtime.
2. Response `data` array is sorted (verify sort order in multi-grant test).
3. Disallowed-route grants are absent from both response and persisted file.

---

## test_mapping

| Test | Type | Rationale |
|------|------|-----------|
| Valid route grant merged, returned in response | unit (Rust) — core | mock load/save_settings; inject grant, assert merged output |
| Disallowed route grant silently dropped | unit (Rust) — core | inject `{route:"admin", ...}`, assert not in response |
| Incoming grant overwrites existing same-route grant | unit (Rust) — core | seed settings with route="settings", merge new grant_id, assert new value wins |
| Empty grants[] preserves existing set | unit (Rust) — core | seed 2 existing grants, call with `grants=[]`, assert unchanged |
| save_settings IO error returns Err envelope | unit (Rust) — core | inject save error, verify Err discriminant=1 |
| Mutex poison returns error (41B message) | unit (Rust) | simulate poisoned mutex |
| Response sorted by route string | unit (Rust) — core | inject 3 grants in non-alphabetical order, assert sorted output |
| Full e2e round-trip: invoke → file updated → invoke to get_mystery_unlock_grants | e2e (Tauri) | verify persistence across calls |

---

## dim6_basis
Evidence: system/merge_mystery_unlock_grants/evidence.md §Confirmed items 3 (argKey "grants" from ipc-contracts.jsonl + CCF snippet col=31963), 4 (frontend CCF mergeMysteryUnlockGrants fn confirmed), 6 (route allowlist 9 routes fully decoded via XOR/SIMD), 7 (MysteryUnlockGrant stride=40B confirmed from dealloc pattern); interfaces/merge_mystery_unlock_grants_interface.md documents all error paths and side-effects.
