# Evidence — export_relay_config (AiMaMi 1.1.1 macOS ARM64)

**Session**: <审计会话> (integrity_recovered re-sweep; supersedes <审计会话>)
**Prior session**: <审计会话> (same_sweep false-positive, call tree depth=3, missed keychain subtree)
**Machine**: <本地机器>
**Date**: 2026-06-17
**Binary**: AiMaMi 1.1.1 universal (macOS ARM64)
**Binary SHA-256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**IDB**: AiMaMi.i64 — IDA decompiler_ready=true, strings_cache_ready=true, uptime 82868s
**Role**: 纯生产者 (producer-only)
**delta_class**: integrity_recovered
**Gate tier**: strictImplementationUse_candidate

---

## Confirmed

### Owner Binding
- Command string `"export_relay_config"` confirmed in IPC registration blob at `0x1011482ff`
- Owner: `codexmate_lib::commands::relay::export_relay_config::h24e4c326ee7bc644` @ `0x1005e8f90`
- Single xref: `0x10031634c` inside IPC dispatch closure `0x100316160` — synchronous, no async spawn
- IPC args: `{filePath: String, includeApiKeys: bool}` — confirmed same as 1.0.9

### Core Implementation — Full Depth (≥5 reached, terminated)
- **Depth 0** owner @ `0x1005e8f90`: dispatches RelayManager::snapshot + export_to_file; returns CoreEnvelope<RelayExportFile>
- **Depth 1a** `RelayManager::snapshot` @ `0x1005e0330`: OnceBox Mutex lock → RelayState::clone → unlock; read-only; noise: GLOBAL_PANIC_COUNT/is_zero_slow_path (compiler instrumentation, not app delta)
- **Depth 1b** `export_to_file` @ `0x100547150`: builds provider array, conditionally calls get_api_key, serializes JSON, normalizes path, calls write_atomic, conditionally calls set_permissions; fully decompiled
- **Depth 2a** `get_api_key` @ `0x1006c86a0` (size=0xea3): 3-path key lookup cascade; FULL body decompiled this session — **was missed by prior same_sweep**
- **Depth 2b** `write_atomic` @ `0x10041e960`: unchanged from 1.0.9; uuid tmp name + DirBuilder + OpenOptions + write_all + sync_data + rename + sync_parent_dir
- **Depth 2c** `set_permissions` @ `0x100f2a7d0`: chmod wrapper; OS leaf (chmod syscall via CStr); terminated
- **Depth 3a** `write_key_file` @ `0x1006c9950`: NEW in 1.1.1; creates relay/keys/ dir, writes plaintext key, chmod dir+file; side-effects: DirBuilder, fs::write, set_permissions x2
- **Depth 3b** `mac_keychain::get` @ `0x10041ee00`: NEW in 1.1.1; SecItemCopyMatching via Security.framework; errSec=-25300 → None; on hit: write_key_file cache-back
- **Depth 3c** `base64::decode::inner` @ `0x100528050`: library leaf; terminated
- **Depth 3d** `sha2::compress256` @ `0x100942d40`: library leaf; HMAC key derivation; terminated
- **Depth 3e** `hostname::get` @ `0x10090e350`: OS leaf (gethostname); HMAC key component; terminated
- **Depth 3f** `std::env::_var` @ `0x100f28b60`: OS leaf (getenv USER/USERNAME); HMAC key component; terminated
- **Depth 3g** `serde_json::from_trait` @ `0x1002e9390`: library leaf; parses encrypted_keys.json; terminated
- **Depth 4a** `security_framework::passwords::generic_password` @ `0x100946180`: SecItemCopyMatching; OS Security.framework API; **terminated_reason=OS_security_framework_api**
- **Depth 4b** `set_permissions` @ `0x100f2a7d0` (used at depth 3 and 4): chmod via C stdlib; EINTR retry loop; **terminated_reason=OS_chmod_leaf**
- **terminated_reason** (tree): OS_security_framework_SecItemCopyMatching + OS_chmod_leaf + fs_write_atomic_rename

### JSON Schema Fields (rodata-confirmed)
- `"schemaVersion"` (13B) @ `0x10114f3be` — `73 63 68 65 6d 61 56 65 72 73 69 6f 6e` — CONFIRMED
- `"exportedAt"` (10B) @ `0x10114ff2f` — `65 78 70 6f 72 74 65 64 41 74` — CONFIRMED
- `"exportedBy"` (10B) @ `0x10114ff39` — `65 78 70 6f 72 74 65 64 42 79` — CONFIRMED
- `"includeApiKeys"` (14B) @ `0x10114ff43` — `69 6e 63 6c 75 64 65 41 70 69 4b 65 79 73` — CONFIRMED
- `"providers"` — confirmed in string blob `0x10114ff2f` and via serialize_field call
- Struct registry: `"struct RelayExportFile with 5 elements"` @ `0x101148783` — CONFIRMED

### RelayExportProvider Struct — 10 elements (same as 1.0.9)
- Confirmed from string pool @ `0x101148783`: `"baseUrl apiKey model wireApi brand models extraHeaders struct RelayExportProvider with 10 elements"`
- Fields: ide, baseUrl, apiKey, model, wireApi, brand, models, extraHeaders, healthScore, latencyMs (inferred from RelayUpsertInput match; 10 count confirmed)
- Provider stride in export alloc: 176 bytes; provider source stride: 232 bytes (flag at +228)

### Key Delta vs 1.0.9 — FULL DELTA (integrity_recovered)

**App-level delta confirmed:**

1. **`exportedBy` string**: `"AiMaMi 1.1.1"` (was `"AiMaMi 1.0.9"`) — qmemcpy @ `0x100547617` confirmed
2. **`set_permissions` on output file** (NEW): after `write_atomic` succeeds, when `includeApiKeys=true`, calls `std::sys::fs::set_permissions(path, mode)` → `chmod(path, mode)` — non-fatal; `log::warn` on failure @ `0x100547c2c`
3. **`keychain::get_api_key` — 3-path cascade** (newly confirmed depth): prior sweep only reached depth=2 endpoint; actual body decompiled:
   - Path 1: `relay_base_dir/keys/<provider_id>` → `fs::read_to_string` → trim → return plaintext (fast path, file cache)
   - Path 2: `relay_base_dir/encrypted_keys.json` → `serde_json::from_trait` → hashbrown lookup → `base64::decode` → `sha2::compress256` HMAC (keyed: `hostname::get` + `env::var(USER/USERNAME)`) → plaintext → `write_key_file` (cache-back, depth=3)
   - Path 3: `mac_keychain::get` → `SecItemCopyMatching(kSecReturnData)` → UTF8 validate → `write_key_file` (cache-back, depth=3)
4. **`write_key_file`** (NEW depth-3 callee): creates `relay/keys/` dir + writes plaintext + `chmod` dir + `chmod` file — two new side-effects per export when apiKey retrieved from encrypted_keys or Keychain
5. **`mac_keychain::get`** (NEW depth-3 callee): reads macOS Keychain via `SecItemCopyMatching`; errSec=-25300 → None (not an error)

**Noise filtered (not app delta):**
- GLOBAL_PANIC_COUNT / is_zero_slow_path / OnceBox::initialize / poison_flag — compiler Mutex instrumentation
- sub_/anon_<hash> vtable rename — compiler anon symbol naming
- register/stack offsets differ — compiler recompile artifact
- rust_alloc allocation size change — micro-adjustment from struct layout
- IPC dispatch closure VA change (0x100325924→0x1005e8f90) — recompile artifact

### IPC Arg Keys Confirmed
- `filePath` (String) — in IPC registration blob @ `0x10114ff2f`
- `includeApiKeys` (bool) — in IPC registration blob @ `0x1011482ff`
- Response: `RelayExportFile` struct (5 fields): `{schemaVersion, exportedAt, exportedBy, providers[...], includeApiKeys}` + file path written via atomic_write

---

## Inferred

- `schemaVersion` u64 value: sourced from RelayState or constant (not hardcoded in export path; runtime value)
- `exportedAt` format: Unix milliseconds (chrono day/year arithmetic → `* 1000 + nanos/1_000_000`)
- `apiKey` when `includeApiKeys=false`: `None` (0x8000000000000000 sentinel) → serialized as `null` or omitted
- `set_permissions` mode: likely `0o600` (read/write owner only) based on chmod security practice for key-containing files
- `encrypted_keys.json` field key: `encrypted_contents` + `signature` confirmed in string pool @ `0x101156cab`
- HMAC key derivation: SHA-256, keyed with `hostname + USER/USERNAME` env combo; used to verify/decrypt per-provider value from `encrypted_keys.json`
- `write_key_file` errors are non-fatal: error string logged at debug level but not propagated back to caller; export still returns Ok

---

## Unknown

- `schemaVersion` runtime value (not byte-confirmed)
- `chmod` mode value (exact mode bits not traced; inferred 0o600)
- `exportedAt` exact unit (inferred ms, not ns — from chrono arithmetic pattern)
- Frontend CCF exact arg key: `includeApiKey` vs `includeApiKeys` (inherited from 1.0.9; frontend bundle not re-extracted this session)
- Windows 1.1.1 behavior (dim5_win=Unknown; requires Windows 逆向分析 session)
- dim6 acceptance mapping (内部构建 impl side, not producer)
- IPC response payload exact JSON structure returned to Tauri frontend
- `encrypted_keys.json` JSON schema full structure (only field names confirmed via string pool)

---

## Migration Status

**integrity_recovered** — prior classification `migrated_no_behavior_diff` was incomplete (call tree shallow at depth=3, missed get_api_key body + write_key_file + mac_keychain subtree).

**True delta vs 1.0.9:**
1. `exportedBy` string: `"AiMaMi 1.0.9"` → `"AiMaMi 1.1.1"` (version bump)
2. `set_permissions(output_file)` when includeApiKeys=true: NEW side effect (chmod on exported JSON file)
3. `get_api_key` 3-path cascade with `write_key_file` cache-writeback: NEW side effects (fs::write + chmod x2 on relay/keys/<provider_id>)
4. macOS Keychain read via `SecItemCopyMatching`: NEW OS side effect path (fallback path 3)

**Unchanged vs 1.0.9:** IPC arg keys, response struct shape, JSON field names, atomic_write pattern, extension normalization, RelayExportProvider field count (10), RelayExportFile field count (5)

---

## Four-Angle Completeness

- **A (func_query)**: owner-map-111 entry present; symbol unique at `0x1005e8f90` — PASS
- **B (string pool)**: `"export_relay_config"` at `0x1011482ff` via find_regex — PASS
- **C (frontend IPC)**: 1.0.9 CCF migrated; 1.1.1 arg keys confirmed same via IPC blob — PASS
- **D (owner-map + INDEX)**: owner-map-111 entry; additive write; delta_class=integrity_recovered stamped — PASS

---

## Fake-Wall Check

genuine_ceiling=false; no fake walls encountered:
- Not async: direct `__fastcall`; no `{{closure}}::poll` or `BlockingTask`
- Not drop shim: all decompiled bodies are real implementations
- No vtable dispatch in hot path
- Not HTTP-terminal: pure local FS + Keychain; no outbound HTTP in this command
- recovery_attempts: none needed — all decompiled cleanly on first attempt
- idb_save confirmed: ok=true, path=<来源位置>/.../AiMaMi.i64

---

## IDB Comments Written (this session)

- `0x1005e8f90`: export_relay_config owner — delta_class, args, CoreEnvelope return
- `0x100547150`: export_to_file — set_permissions DELTA, serde keys, exportedBy version
- `0x1006c86a0`: get_api_key — 3-path cascade, new callees, side effects
- `0x10041e960`: write_atomic — same as 1.0.9
- `0x1006c9950`: write_key_file — NEW, chmod x2, fs::write
- `0x10041ee00`: mac_keychain::get — NEW, SecItemCopyMatching, errSec=-25300
- `0x100946180`: generic_password — SecItemCopyMatching OS leaf
