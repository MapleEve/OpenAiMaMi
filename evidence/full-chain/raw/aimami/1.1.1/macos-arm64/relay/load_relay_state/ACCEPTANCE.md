# load_relay_state — dim6 ACCEPTANCE MAPPING
# version: 1.1.1 | platform: macos-arm64 | shard: mac-3/5
# authored: 2026-06-19 | session: wf-aimami111-dim6-20260619

## gate_tier: readyToImplement (dim1-5 all closed; dim6=acceptance-draft)

---

## happy_path

**Scenario**: Frontend calls `invoke("load_relay_state")`. Relay is in ROUTER_ON mode with api-login active; auth.json is present and valid; proxy sidecar is reachable on expected port.

Input: `{}` (no args)

Expected output:
```json
{
  "tag": 2,
  "label_1": "ok",
  "label_2": "success",
  "statusCode": 1,
  "success": true,
  "state": {
    // RelayState fields: 0x170 = 368 bytes of relay state data
    // includes mode, proxy_port, proxy_url, api_login_active, etc.
  }
}
```
- Response tag = 2 (CoreEnvelope Ok variant).
- `success = true`, `statusCode = 1`.
- `state` blob is 0x170 (368) bytes, populated by `RelayManager::snapshot`.

**side_effect_asserts** (conditional on relay mode):
1. **auth.json rewritten** (if api-login mode active AND auth.json missing/stale): `virtual-auth-marker.json` created with `{version:2, createdAtMs:<ms>, apiKey:<uuid-v4>, backedUpRealAuth:<bool>}`; `auth.json` overwritten with `{auth_mode:"auth_mod_e", OPENAI_API_KEY:"<same-uuid-v4>"}`.
2. **relay state saved** (if proxy needed spawning): `relay::storage::save` writes relay state JSON via `atomic_write` to relay state file.
3. **No mutations** when relay is not in api-login mode or proxy is already running: call is effectively read-only snapshot.

---

## boundary / error paths

| Trigger | Expected error / behaviour |
|---------|---------------------------|
| `RelayManager::list_state` returns Err | `CoreEnvelope::err` with tag `0x8000000000000000`; error message from `CoreError::fmt` |
| `reconcile_api_login_auth` → `enable_virtual_login` fails | Warning logged (`[AiMaMi][api-login] rewrite virtual auth failed: <err>`); error dropped; list_state continues |
| Proxy sidecar unreachable (TCP probe fails after retry) | `relay::storage::save` called to persist failure state; proxy Arc cleared; IPC still returns current snapshot |
| `write virtual-auth-marker.json` fails | String log `"write virtual auth marker failed: "`; error string formed; enable_virtual_login returns Err (which is then dropped by reconcile) |
| `write auth.json` fails | String log `"write virtual auth.json failed: "`; same error drop chain |
| Mutex poison | panic path (mutex poison = fatal state; standard Rust mutex poison handling) |

---

## side_effect_asserts

1. After successful call with api-login mode active: `virtual-auth-marker.json` file exists and contains valid JSON with fields `version=2`, `createdAtMs` (u64 ms), `apiKey` (UUID v4 format), `backedUpRealAuth` (bool).
2. After successful call with api-login mode active: `auth.json` contains `OPENAI_API_KEY` equal to the `apiKey` in the marker.
3. If real login material existed before call: `auth_mod_e` file exists (backup of prior real auth.json).
4. Relay state file updated if proxy was respawned.
5. If neither api-login nor proxy-spawn triggered: no files written (read-only call).

---

## test_mapping

| Test | Type | Rationale |
|------|------|-----------|
| Returns RelayState snapshot with correct tag=2 in normal mode | e2e (Tauri) | requires live relay state; IPC round-trip |
| virtual-auth-marker.json and auth.json written correctly in api-login mode | e2e (Tauri) / manual | requires relay configured in ROUTER_ON+api_login mode |
| UUID v4 format in generated apiKey | unit (Rust) — uuid crate | validate UUID format in marker |
| BackedUpRealAuth=true only when real credentials present | unit (Rust) — has_real_login_material | mock auth.json with sk-... key vs virtual key |
| SIMD prefix check excludes "sk-<redacted>" prefix | unit (Rust) — has_real_login_material | inject key starting with virtual prefix, assert backedUpRealAuth=false |
| Error from enable_virtual_login is silently dropped (list_state succeeds) | manual / e2e | make auth_mod_e path unwritable, call invoke, verify Ok response |
| relay storage::save triggered on proxy spawn attempt | e2e (Tauri) | requires relay in state needing proxy spawn |

---

## dim6_basis
Evidence: codexmate_lib__commands__relay/load_relay_state pseudocode.md depth-3/4 shows reconcile_api_login_auth drop chain and atomic_write call sites; relay/load_relay_state call-trees.md shows 73 edges terminating at atomic_write (3 calls) + relay::storage::save (2 branches); evidence.md §DELTA-3/4/5 documents VirtualAuthMarker DTO and auth.json format with VA confirmation.
