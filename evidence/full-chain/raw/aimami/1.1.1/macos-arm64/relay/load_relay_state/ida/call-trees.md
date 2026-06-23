# Call Tree: load_relay_state (AiMaMi 1.1.1 macos-arm64)

session: <审计会话>
delta_class: integrity_recovered
owner_va: 0x1005e8dd0

```
load_relay_state [0x1005e8dd0] size=0x188
├── RelayManager::list_state [0x1005d1ab0] size=0x151
│   ├── reconcile_api_login_auth [0x1005d7660] size=~0x220
│   │   ├── RelayManager::snapshot [0x1005e0330] ← SHARED
│   │   ├── std::fs::metadata [0x100f2b980] LEAF (stat auth.json)
│   │   └── virtual_auth::enable_virtual_login [0x100545110] size=~0xBC0
│   │       ├── CodexPaths::ensure_directories [0x1005582b0] LEAF
│   │       ├── virtual_auth::read_marker [0x100544d70] LEAF
│   │       ├── virtual_auth::auth_is_our_virtual [0x100544f70] LEAF
│   │       ├── virtual_auth::cleanup [0x1005468f0] LEAF
│   │       ├── virtual_auth::has_real_login_material [0x1005466b0] LEAF
│   │       ├── std::fs::read [0x100f25cf0] LEAF (read auth.json bytes)
│   │       ├── atomic_write::write_atomic [0x10041e960] LEAF ← SIDE-EFFECT: write auth.json
│   │       ├── std::fs::set_permissions [0x100f2a7d0] LEAF (chmod auth.json)
│   │       ├── uuid::Uuid::new_v4 [0x100e13930] LEAF
│   │       ├── serde_json serialization (inline BTreeMap → JSON)
│   │       └── atomic_write::write_atomic [0x10041e960] LEAF ← SIDE-EFFECT: write virtual-auth-marker.json
│   ├── ensure_proxy_started [0x1005d56f0] size=~0xC00
│   │   ├── std::sys::sync::once_box::OnceBox::initialize [0x100f7c920]
│   │   ├── std::sys::pal::unix::sync::mutex::Mutex::lock [0x100f2e7a0] LEAF
│   │   ├── std::net::tcp::TcpStream::connect_timeout [0x100f29bd0] LEAF ← SIDE-EFFECT: TCP probe
│   │   ├── std::thread::functions::sleep [0x100f35a00] LEAF (50ms retry sleep)
│   │   ├── close$NOCANCEL [0x100fbce72] LEAF (close TCP fd)
│   │   ├── alloc::sync::Arc::drop_slow [0x100346050 / 0x100346290] LEAF
│   │   ├── tokio::runtime::Runtime::block_on [0x1002cf3a0] ← async: start proxy
│   │   ├── relay::storage::save [0x1005e2c60] ← SIDE-EFFECT: write RelayState JSON
│   │   │   ├── CodexPaths::ensure_directories [0x1005582b0] LEAF
│   │   │   ├── RelayState::serialize (serde_json) [0x10054afe0] LEAF
│   │   │   └── atomic_write::write_atomic [0x10041e960] LEAF ← SIDE-EFFECT: disk write
│   │   └── std::sys::pal::unix::sync::mutex::Mutex::unlock [0x100f2e7c0] LEAF
│   ├── RelayManager::snapshot [0x1005e0330] size=~0x80
│   │   ├── Mutex::lock [0x100f2e7a0] LEAF
│   │   ├── RelayState::clone [0x100605b90] LEAF
│   │   └── Mutex::unlock [0x100f2e7c0] LEAF
│   └── RelayState::clone [0x100605b90] LEAF
└── CoreEnvelope::ok [0x100557920] LEAF
    (OR on error: CoreError::fmt + unwrap_failed → panic)
```

## Terminated Reasons

| Function | Reason |
|---|---|
| CodexPaths::ensure_directories | LEAF — platform dir-create, no further app callees |
| virtual_auth::read_marker | LEAF — fs::read marker file |
| virtual_auth::auth_is_our_virtual | LEAF — string compare |
| virtual_auth::cleanup | LEAF — fs::remove_file |
| virtual_auth::has_real_login_material | LEAF — fs::metadata check |
| std::fs::* / std::net::* / std::thread::* | LEAF — stdlib |
| atomic_write::write_atomic | LEAF — temp-file + rename |
| RelayState::clone | LEAF — derive(Clone) |
| RelayState::serialize | LEAF — serde generated |
| CoreEnvelope::ok | LEAF — wrapper constructor |

## Notable: apply_import_to_state [0x100548d80]

Not in load_relay_state call chain. New function in 1.1.1 delta.
Handles: import list → per-provider keychain::write_key_file, dedup (DUPLICATE_ID),
field validation (INVALID_FIELD), keychain write errors (KEYCHAIN_WRITE).
Owner: codexmate_lib::core::relay::io
