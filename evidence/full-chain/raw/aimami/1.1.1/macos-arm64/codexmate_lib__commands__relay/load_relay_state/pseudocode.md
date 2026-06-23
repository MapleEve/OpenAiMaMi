# load_relay_state — Pseudocode (macos-arm64, AiMaMi 1.1.1)

delta_class: integrity_recovered
session: wf-aimami111-delta-20260617-sweep
machine: <本地机器>
produced: 2026-06-17

## Owner

```
VA:   0x1005e8dd0
name: codexmate_lib::commands::relay::load_relay_state::h9c372b004c68bd41
size: 0x188 bytes
```

## Decompiled Pseudocode (depth-1)

```c
_QWORD *load_relay_state(_QWORD *a1) {
    // Call RelayManager::list_state — the primary delegatee
    // Returns CoreEnvelope<RelayState> (ok variant) or CoreEnvelope error
    RelayManagerEnvelopeResult result;
    RelayManager::list_state(&result);        // depth-2: reconcile + proxy + snapshot

    if (result.is_err) {
        // Error path: format CoreError via Display, call unwrap_failed if display returns true
        // Returns: a1[0]=0x8000000000000000 (Err sentinel), a1[1..3]=error fields
        CoreError::fmt(result.err, fmtbuf);
        if (fmt_ok) core::result::unwrap_failed(...);
        drop_in_place::<CoreError>(result.err);
        a1[0] = 0x8000000000000000;    // Err tag
        a1[1..3] = error_payload;
    } else {
        // Success path: wrap in CoreEnvelope::ok
        // memcpy(0x170) of RelayState data
        CoreEnvelope::ok(a1, result.state);  // depth-2: allocates "ok"/"success" strings
    }
    return a1;
}
```

## Depth-2: RelayManager::list_state (0x1005d1ab0)

```c
void RelayManager::list_state(out_ptr, self) {
    // STEP 1: Auth reconciliation — check if auth.json missing, rewrite if so
    RelayManager::reconcile_api_login_auth(self);   // 0x1005d7660

    // STEP 2: Proxy start — ensure sidecar proxy is listening
    RelayManager::ensure_proxy_started(self);       // 0x1005d56f0

    // STEP 3: Snapshot — clone current RelayState under mutex
    RelayManager::snapshot(snapshot_buf, self);     // 0x1005e0330

    // Clone snapshot for return (0xe8-per-entry unrolled loop, 232-byte stride)
    RelayState::clone(out_buf, snapshot_buf);       // 0x100605b90

    drop_in_place::<RelayState>(snapshot_buf);
    memcpy(out_ptr, out_buf, 0x170);
}
```

## Depth-2: CoreEnvelope::ok (0x100557920)

```c
// Allocates two inline string labels:
//   0x6B6F (2 bytes) = "ok" literal (27503 = 0x6B6F)
//   7 bytes = "success" (0x73736563637573, confirmed via alloc)
// Copies 0x170 bytes of RelayState payload to a1+72
// Sets a1[440]=1 (status int), a1[444]=1 (bool), a1[0]=2 (ok tag)
// a1[8..64] = string descriptor fields
CoreEnvelope::ok(a1, state_src) {
    alloc "ok" (2 bytes), alloc "success" (7 bytes);
    memcpy(a1+72, state_src, 0x170);   // RelayState payload
    a1[440] = 1;    // statusCode
    a1[444] = 1;    // success bool
    a1[0]   = 2;    // variant tag = Ok
}
```

## Depth-3: reconcile_api_login_auth (0x1005d7660)

```c
// Checks proxy is in ROUTER_ON state and api-login mode is active
void reconcile_api_login_auth(self) {
    RelayState snapshot = RelayManager::snapshot(self);

    if (snapshot.mode != ROUTER_ON) return;          // v10[364] != 1 check
    if (!snapshot.api_login_active) return;          // v10[365] == 0 check

    // Check if auth.json physically exists on disk
    if (!std::fs::metadata(auth_json_path)) return;  // 0x100f2b980

    // auth.json IS missing / stale  → rewrite via virtual login
    log::warn!("[AiMaMi][api-login] auth.json missing; rewriting virtual login");

    // Attempt enable_virtual_login
    let result = virtual_auth::enable_virtual_login(self.paths);   // 0x100545110
    if result != Ok(10) {
        log::warn!("[AiMaMi][api-login] rewrite virtual auth failed: {}", result);
        drop_in_place::<CoreError>(result.err);
    }
    drop_in_place::<RelayState>(snapshot);
}
```

## Depth-3: ensure_proxy_started (0x1005d56f0)

```c
// Validates proxy Arc is live; if proxy port is occupied by foreign process, kills it and respawns
void ensure_proxy_started(self) {
    Arc<ProxyHandle> proxy_arc = self.proxy_arc;   // self+32
    if proxy_arc.is_null() { BUG(); }

    // Lock inner mutex (OnceBox initialized on first call)
    Mutex::lock(inner.mutex);

    if inner.port != 0 {
        // Try TCP connect with 300ms timeout to verify proxy alive
        TcpStream::connect_timeout(127.0.0.1:port, timeout=300_000_000ns);
        if connect fails {
            thread::sleep(50_000_000ns);    // 50ms backoff
            TcpStream::connect_timeout(again);
            if still fails {
                log::warn!("proxy unreachable on port {}", port);
                // Drop Arc<ProxyHandle>, clear inner.port
                Arc::drop_slow(inner.proxy_arc);
                inner.proxy_arc = null;
            } else {
                // Connected OK on retry → close socket, proceed
                close_NOCANCEL(fd);
            }
        }
    }

    // Increment Arc refcounts (self.accounts_arc, self.config_arc, self.relay_state_arc)
    // Spawn new proxy via tokio::runtime::Runtime::block_on (0x1002cf3a0)
    let spawn_result = tokio::block_on(spawn_proxy_future);

    if spawn_result.is_err {
        // on success path: update inner.{proxy_url, proxy_port, proxy_pid, backed_up...}
        // serialize and write via relay::storage::save
        relay::storage::save(self.paths, relay_state);    // 0x1005e2c60
        log::error!("proxy spawn failed: {}", err);
    } else {
        // clear proxy_url/port/pid fields
        relay::storage::save(self.paths, relay_state);    // on both branches
    }
    Mutex::unlock();
}
```

## Depth-3: snapshot (0x1005e0330)

```c
// Lock RelayManager inner mutex, clone current RelayState out
RelayState snapshot(self) {
    Mutex::lock(self.inner.mutex);
    // Panic if poisoned
    RelayState::clone(out, self.inner.state + 32);
    Mutex::unlock();
    return out;
}
```

## Depth-4: virtual_auth::enable_virtual_login (0x100545110)

```c
// Full virtual auth write pipeline — NEW in 1.1.1 relative to 1.0.9
Result<()> enable_virtual_login(paths: &CodexPaths) {
    CodexPaths::ensure_directories(paths);       // 0x1005582b0

    // Read virtual-auth-marker.json (NEW file, did not exist in 1.0.9)
    let marker = virtual_auth::read_marker(paths);     // 0x100544d70

    if marker.is_some() {
        // Check if auth.json already carries our virtual key
        if virtual_auth::auth_is_our_virtual(auth_json_path, marker.api_key) {
            return Ok(10);   // already ours, no-op
        }
        // Stale marker → cleanup
        virtual_auth::cleanup(paths);              // 0x1005468f0
    }

    // Check if real login material exists in auth.json
    if virtual_auth::has_real_login_material(paths) {
        // Read real auth.json bytes
        let auth_bytes = std::fs::read(auth_json_path);
        // Write copy to auth_mod_e path
        let auth_mod_e_path = paths.join("auth_mod_e");
        atomic_write(auth_mod_e_path, auth_bytes);
        // Set file permissions
        std::fs::set_permissions(auth_mod_e_path, ...);
    }

    // Generate new UUID v4 as virtual api_key
    let uuid = uuid::Uuid::new_v4();              // 0x100e13930

    // Build JSON: {"auth_mode": "...", "OPENAI_API_KEY": "<uuid>"}
    let mut map = BTreeMap::new();
    map.insert("auth_mode", "auth_mod_e");        // literal string
    map.insert("OPENAI_API_KEY", uuid_str);

    // Serialize map to JSON bytes
    serde_json::to_string(map);

    // Get chrono::Utc::now() as Unix millis for marker timestamp
    let now_ms = Utc::now().timestamp_millis();   // 0x100954200

    // Write new virtual-auth-marker.json:
    //   { "version": 2, "createdAtMs": <now_ms>, "apiKey": <uuid>, "backedUpRealAuth": <bool> }
    let marker_path = paths.join("virtual-auth-marker.json");
    atomic_write(marker_path, serde_json::to_string(VirtualAuthMarker {
        version: 2,
        createdAtMs: now_ms,
        apiKey: uuid_str,
        backedUpRealAuth: has_real_material,
    }));

    // Write virtual auth.json (with OPENAI_API_KEY = uuid)
    atomic_write(auth_json_path, virtual_auth_json_bytes);

    return Ok(10);
}
```

## Depth-4: relay::storage::save (0x1005e2c60)

```c
// Serializes RelayState and atomically writes to relay state file
Result<()> relay_storage_save(paths: &CodexPaths, relay_state: &RelayState) {
    CodexPaths::ensure_directories(paths);
    // serde_json::to_string(relay_state) via RelayState::serialize (0x10054afe0)
    let json = RelayState::serialize(relay_state);
    // atomic_write(paths.relay_state_file, json)  — offset 608/616 into paths struct
    atomic_write(paths[608], paths[616], json);
}
```

## Depth-4: virtual_auth::read_marker (0x100544d70)

```c
// Reads virtual-auth-marker.json and deserializes to VirtualAuthMarker
Option<VirtualAuthMarker> read_marker(paths) {
    let path = paths.join("virtual-auth-marker.json");
    let text = std::fs::read_to_string(path);
    if text.is_err() { return None; }
    serde_json::from_str::<VirtualAuthMarker>(text)
}
```

## Depth-4: virtual_auth::auth_is_our_virtual (0x100544f70)

```c
// Checks if auth.json contains our virtual api_key
bool auth_is_our_virtual(auth_json_path, our_api_key, our_api_key_len) {
    let text = std::fs::read_to_string(auth_json_path);
    let val: serde_json::Value = serde_json::from_str(text);
    // JSON field key = "OPENAI_API_KEY" (14 bytes from 0x10114fa5b)
    let file_key = val["OPENAI_API_KEY"];
    // also check val["tokens"]["last_refresh"] == false (not refreshed)
    let not_refreshed = val["tokens"] is null or val["tokens"]["last_refresh"] == false;
    return file_key == our_api_key && not_refreshed;
}
```

## Depth-4: virtual_auth::has_real_login_material (0x1005466b0)

```c
// Checks auth.json for real (non-virtual) credentials using SIMD pattern match
bool has_real_login_material(paths) {
    let text = std::fs::read_to_string(auth_json_path);
    let val: Value = serde_json::from_str(text);
    // Check val["tokens"]["id_token"] non-empty and trimmed non-empty
    // OR val["tokens"]["access_token"] non-empty and trimmed non-empty
    // OR val["OPENAI_API_KEY"] len>=23 AND NOT matching "sk-aimami-relay-virtual" prefix
    //    (SIMD xor check against 0x10114F090/0x10114F080 = "sk-aimami-relay-virtual" pattern)
}
```
