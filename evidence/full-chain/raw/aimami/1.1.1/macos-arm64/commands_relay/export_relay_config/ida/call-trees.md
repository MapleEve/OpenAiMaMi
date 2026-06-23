# export_relay_config — call tree
<!-- delta_class: integrity_recovered -->
<!-- session: wf-aimami111-delta-20260617-sweep -->
<!-- machine: <本地机器> -->

```
export_relay_config [0x1005e8f90] (depth 0 — owner)
├── RelayManager::snapshot [0x1005e0330]            depth 1  NOISE (Mutex lock/clone/unlock — no app-level delta)
│   ├── OnceBox::initialize [0x100f7c920]           depth 2  NOISE stdlib
│   ├── Mutex::lock [0x100f2e7a0]                  depth 2  NOISE stdlib
│   ├── RelayState::clone [0x100605b90]             depth 2  NOISE
│   └── Mutex::unlock [0x100f2e7c0]                depth 2  NOISE stdlib
│
├── relay::io::export_to_file [0x100547150]         depth 1  DELTA_ENTRY
│   ├── keychain::get_api_key [0x1006c86a0]         depth 2  NEW_IN_DELTA (gated on includeApiKeys && provider.has_key)
│   │   ├── std::fs::read_to_string [0x100f25740]   depth 3  reads encrypted key file
│   │   ├── serde_json::de::from_trait [0x1002e9390] depth 3  parse key map
│   │   ├── base64::decode [0x100528050]            depth 3  decode encoded key
│   │   ├── hostname::get [0x10090e350]             depth 3  LEAF — system hostname
│   │   ├── std::env::var("USER") [0x100f28b60]    depth 3  LEAF — env fallback
│   │   ├── std::env::var("USERNAME") [0x100f28b60] depth 3  LEAF — env fallback win-compat
│   │   ├── sha2::sha256::compress256 [0x100942d40] depth 3  LEAF — key derivation (×2-3 calls)
│   │   ├── keychain::write_key_file [0x1006c9950]  depth 3  LEAF — cache write-back to key_dir
│   │   └── mac_keychain::get [0x10041ee00]         depth 3  LEAF — macOS SecItemCopyMatching fallback
│   │
│   ├── chrono::Utc::now [0x100954200]              depth 2  timestamp for exportedAt
│   ├── serde_json::SerializeMap::serialize_entry   depth 2  ×4 (exportedAt, exportedBy, includeApiKeys, providers)
│   │   keys confirmed: "exportedAt"(10) "exportedBy"(10) "includeApiKeys"(14) "providers"(9) "filePath"(8)
│   ├── serde_json::Compound::serialize_field       depth 2  filePath field
│   ├── serde_json::Compound::end [0x100595a80]    depth 2
│   ├── std::path::PathBuf::_set_file_name [0x100f343c0] depth 2  output path computation
│   ├── atomic_write::write_atomic [0x10041e960]    depth 2  NEW_IN_DELTA (was direct write in 1.0.9)
│   │   ├── std::path::Path::parent [0x100f33d60]   depth 3
│   │   ├── std::fs::DirBuilder::_create [0x100f24d00] depth 3 recursive mkdir
│   │   ├── uuid::Uuid::new_v4 [0x100e13930]       depth 3  LEAF — tmpfile uuid suffix
│   │   ├── std::process::id [0x100f35fb0]          depth 3  LEAF — pid in tmpfile name
│   │   ├── std::fs::OpenOptions::_open [0x100f25660] depth 3 create_new exclusive
│   │   ├── std::io::Write::write_all [0x100202930] depth 3  LEAF
│   │   ├── std::fs::File::sync_data [0x100f25b80]  depth 3  LEAF — fdatasync
│   │   ├── std::sys::fs::rename [0x100f2b560]      depth 3  LEAF — atomic rename
│   │   ├── atomic_write::sync_parent_dir [0x10041ec70] depth 3 LEAF — fsync parent dir
│   │   └── std::sys::fs::remove_file [0x100f2a550]  depth 3 LEAF — cleanup on rename err
│   │
│   └── std::sys::fs::set_permissions [0x100f2a7d0] depth 2  NEW_IN_DELTA (only if includeApiKeys=true)
│       └── [terminated — syscall wrapper]          depth 3
│
├── core::ptr::drop_in_place<RelayState> [0x1005f6180] depth 1  NOISE drop
├── CoreEnvelope::ok [0x1005567c0]                  depth 1  success wrapper
└── CoreError::fmt::Display [0x10058fda0]           depth 1  error formatting
```

## IPC Dispatch Chain

```
Tauri invoke("export_relay_config", {filePath, includeApiKeys})
  → codexmate_lib::run::closure::closure [0x100316160]   (single xref to owner)
      → CommandArg::from_command (filePath)   [0x1006dad50]
      → CommandArg::from_command (includeApiKeys) [0x1006d78b0]
      → export_relay_config [0x1005e8f90]
      → InvokeResolver::respond [0x100474c70]
```

## Leaf Termination Summary

| leaf | VA | reason |
|---|---|---|
| mac_keychain::get | 0x10041ee00 | platform syscall (SecItemCopyMatching) |
| keychain::write_key_file | 0x1006c9950 | file I/O leaf |
| sha2::sha256::compress256 | 0x100942d40 | crypto primitive |
| base64::decode::inner | 0x100528050 | alloc leaf |
| hostname::get | 0x10090e350 | platform syscall |
| atomic_write::sync_parent_dir | 0x10041ec70 | platform syscall (fsync) |
| std::sys::fs::rename | 0x100f2b560 | platform syscall |
| uuid::Uuid::new_v4 | 0x100e13930 | entropy leaf |
