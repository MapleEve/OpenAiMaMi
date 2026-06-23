# load_relay_state — Call Trees (macos-arm64, AiMaMi 1.1.1)

delta_class: integrity_recovered
session: wf-aimami111-delta-20260617-sweep
produced: 2026-06-17

## Primary Call Tree

```
load_relay_state (0x1005e8dd0)
├── RelayManager::list_state (0x1005d1ab0)                    [depth-2]
│   ├── RelayManager::reconcile_api_login_auth (0x1005d7660)  [depth-3]
│   │   ├── RelayManager::snapshot (0x1005e0330)              [depth-4, reuse]
│   │   ├── std::fs::metadata (0x100f2b980)                   [leaf: filesystem probe]
│   │   ├── log::GlobalLogger::log (0x100d7dcc0)              [leaf: warn log]
│   │   └── virtual_auth::enable_virtual_login (0x100545110)  [depth-4, DELTA]
│   │       ├── CodexPaths::ensure_directories (0x1005582b0)  [leaf]
│   │       ├── virtual_auth::read_marker (0x100544d70)       [leaf, NEW]
│   │       │   ├── std::path::Path::_join (0x100f33a00)
│   │       │   └── std::fs::read_to_string (0x100f25740)
│   │       ├── virtual_auth::auth_is_our_virtual (0x100544f70) [leaf, NEW]
│   │       │   ├── std::fs::read_to_string (0x100f25740)
│   │       │   └── serde_json::de::from_trait (0x1002ea3f0)
│   │       ├── virtual_auth::cleanup (0x1005468f0)           [leaf, existing]
│   │       ├── virtual_auth::has_real_login_material (0x1005466b0) [leaf, DELTA]
│   │       │   ├── std::fs::read_to_string (0x100f25740)
│   │       │   ├── serde_json::de::from_trait (0x1002ea3f0)
│   │       │   └── core::str::trim_matches (0x10057e620)    [SIMD pattern check]
│   │       ├── std::fs::read (inner) (0x100f25cf0)           [leaf: backup real auth]
│   │       ├── atomic_write::write_atomic (0x10041e960)      [leaf: auth_mod_e write]
│   │       ├── std::fs::set_permissions (0x100f2a7d0)        [leaf: chmod auth_mod_e]
│   │       ├── uuid::Uuid::new_v4 (0x100e13930)              [leaf: NEW uuid gen]
│   │       ├── BTreeMap::insert x2 (0x100520060)             [leaf: build auth JSON]
│   │       ├── chrono::Utc::now (0x100954200)                [leaf: NEW timestamp]
│   │       ├── serde_core::SerializeMap::serialize_entry x4  [leaf: marker JSON]
│   │       ├── atomic_write::write_atomic (0x10041e960)      [leaf: write marker JSON]
│   │       └── atomic_write::write_atomic (0x10041e960)      [leaf: write auth.json]
│   ├── RelayManager::ensure_proxy_started (0x1005d56f0)      [depth-3]
│   │   ├── std::sys::sync::mutex::Mutex::lock (0x100f2e7a0)  [leaf]
│   │   ├── std::net::TcpStream::connect_timeout (0x100f29bd0) [leaf: probe port]
│   │   ├── std::thread::sleep (0x100f35a00)                  [leaf: 50ms backoff]
│   │   ├── close_NOCANCEL (0x100fbce72)                      [leaf: close fd]
│   │   ├── Arc::drop_slow x2                                 [leaf: proxy cleanup]
│   │   ├── tokio::Runtime::block_on (0x1002cf3a0)            [leaf: spawn proxy]
│   │   ├── alloc::fmt::format_inner x2 (0x100f63980)         [leaf: fmt port str]
│   │   ├── relay::storage::save (0x1005e2c60)                [depth-4, DELTA]
│   │   │   ├── CodexPaths::ensure_directories (0x1005582b0)  [leaf]
│   │   │   ├── RelayState::serialize (0x10054afe0)           [leaf: serde DTO]
│   │   │   └── atomic_write::write_atomic (0x10041e960)      [leaf: write file]
│   │   ├── log::GlobalLogger::log (0x100d7dcc0)              [leaf: error log]
│   │   └── std::sys::sync::mutex::Mutex::unlock (0x100f2e7c0) [leaf]
│   ├── RelayManager::snapshot (0x1005e0330)                  [depth-3, mutex clone]
│   │   ├── OnceBox::initialize (0x100f7c920)                 [leaf]
│   │   ├── Mutex::lock (0x100f2e7a0)                         [leaf]
│   │   ├── RelayState::clone (0x100605b90)                   [leaf]
│   │   └── Mutex::unlock (0x100f2e7c0)                       [leaf]
│   └── RelayState::clone (0x100605b90)                       [depth-3, for return]
│       └── memcpy (0x100fbd052)                              [leaf: 0x170 bytes]
├── CoreError::fmt (0x10058fda0)                              [depth-2, error path]
├── core::result::unwrap_failed (0x100fbc780)                 [leaf, error path]
├── drop_in_place::<CoreError> (0x1005f5000)                  [leaf]
└── CoreEnvelope::ok (0x100557920)                           [depth-2, success path]
    ├── rust_alloc x2                                         [leaf]
    └── memcpy 0x170 (0x100fbd052)                           [leaf]
```

## Terminated Reason

Tree is terminated at leaves (depth >= 5 from root, or stdlib/alloc/serde builtins).

## Terminated Leaf Summary

| Leaf | Address | Kind |
|------|---------|------|
| std::fs::metadata | 0x100f2b980 | filesystem |
| std::fs::read / read_to_string | 0x100f25cf0 / 0x100f25740 | filesystem |
| std::fs::set_permissions | 0x100f2a7d0 | filesystem |
| atomic_write::write_atomic | 0x10041e960 | filesystem (side-effect) |
| uuid::Uuid::new_v4 | 0x100e13930 | entropy |
| chrono::Utc::now | 0x100954200 | time |
| tokio::Runtime::block_on | 0x1002cf3a0 | async executor |
| TcpStream::connect_timeout | 0x100f29bd0 | network probe |
| thread::sleep | 0x100f35a00 | timing |
| Mutex::lock/unlock | 0x100f2e7a0 / 0x100f2e7c0 | sync |
| RelayState::serialize | 0x10054afe0 | serde |
| log::GlobalLogger::log | 0x100d7dcc0 | log |
