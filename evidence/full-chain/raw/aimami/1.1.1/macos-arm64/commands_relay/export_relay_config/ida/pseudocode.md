# export_relay_config — pseudocode
<!-- delta_class: integrity_recovered -->
<!-- session: <审计会话> -->
<!-- machine: <本地机器> -->
<!-- baseline: 1.0.9 (previously reversed) -->

## Owner

| field | value |
|---|---|
| VA | `0x1005e8f90` |
| mangled | `__ZN13codexmate_lib8commands5relay19export_relay_config17h24e4c326ee7bc644E` |
| demangled | `codexmate_lib::commands::relay::export_relay_config` |
| size | 0x234 bytes |
| module | AiMaMi 1.1.1 (macOS arm64 universal slice) |
| IDB | `<来源位置>/raw/binary/AiMaMi-1.1.1-idb` |

## Signature

```
fn export_relay_config(
    out: *mut CoreEnvelope<ExportResult>,
    relay_manager: *mut RelayManager,
    args: *const (file_path: String, include_api_keys: bool),
    include_api_keys: u8,
) -> *mut CoreEnvelope<ExportResult>
```

IPC command name (Tauri): **`export_relay_config`**
IPC arg keys (from dispatch closure `0x100316160`):
- `filePath` (8 bytes key literal from dispatch string pool `relaunchfilePathapiLogin`)
- `includeApiKeys` (14 bytes key literal from anon_433)

## Depth-1 Pseudocode (owner, VA 0x1005e8f90)

```rust
// 1. snapshot: clone RelayState under Mutex
let state: RelayState = RelayManager::snapshot(relay_manager);
// 2. export to file — the primary work unit
let result = relay::io::export_to_file(
    relay_manager_ptr + 16,   // provider storage base
    &state,
    file_path_ptr, file_path_len,
    include_api_keys as bool
);
drop(state);

// 3. discriminant on result (Rust Result/CoreEnvelope)
if result.discriminant == 10 {
    // Ok branch
    CoreEnvelope::ok(out, result_payload)
} else {
    // Err branch: format CoreError via Display, write error string
    // return CoreEnvelope with tag 0x8000000000000000 (Err sentinel)
    format_error(result_error, out);
}
return out;
```

## Depth-2: relay::io::export_to_file (VA 0x100547150)

```rust
// Iterates all providers in RelayState
for provider in relay_state.providers {
    let api_key_opt: Option<String> = if include_api_keys && provider.has_key {
        // NEW DELTA: calls keychain::get_api_key
        match keychain::get_api_key(relay_manager_ref, provider.id, provider.id_len) {
            Ok(key) => Some(key),
            Err(_)  => None,   // skip key on error
        }
    } else {
        None
    };

    // clone provider fields: ide, baseUrl, name, display, bool flags, Vec<sth>, extra_string
    let entry = RelayExportProvider {
        ide: clone(provider.ide),
        base_url: clone(provider.base_url),
        // ... 4 more String clones + Vec clone
        api_key: api_key_opt,   // Option<String> — NEW FIELD path
    };
    vec.push(entry);            // 176 bytes per entry in raw vec
}

// Build RelayExportFile struct
let now = chrono::Utc::now();  // ms timestamp
let exported_at: i64 = now_to_ms(now);

// serde_json SerializeMap — confirmed DTO keys:
//   "exportedAt"      -> i64 timestamp ms  (key len 10)
//   "exportedBy"      -> "AiMaMi 1.1.1"    (hardcoded 12-byte string, NEW VERSION STRING)
//   "includeApiKeys"  -> bool              (key len 14)
//   "providers"       -> Vec<RelayExportProvider>  (key len 9)
//   "filePath"        -> Path (string)     (key len 8)
// (providerCount derived client-side from providers.len())

let json_bytes: Vec<u8> = serde_json::to_vec(&export_file)?;

// File path: compute final path, trim extensions (.json etc.) then _set_file_name
let final_path: PathBuf = compute_output_path(file_path, &json_bytes);

// NEW DELTA: atomic write (previously was a direct write)
atomic_write::write_atomic(&final_path, &json_bytes)?;

// NEW DELTA: conditional set_permissions if include_api_keys == true
if include_api_keys {
    match std::fs::set_permissions(&final_path, ...) {
        Err(e) => log::warn!("codexmate_lib::core::relay::io set_permissions failed: {}", e),
        Ok(_)  => {}
    }
}

// Build success result
let saved_path_str = String::from_utf8_lossy(final_path.as_bytes()).to_string();
Ok(ExportResult {
    file_path: saved_path_str,
    provider_count: vec.len(),
    include_api_keys: include_api_keys,
})
```

## Depth-3a: keychain::get_api_key (VA 0x1006c86a0) — NEW IN DELTA

```rust
// Full multi-stage key lookup. Called only when include_api_keys=true AND provider.has_key.
fn get_api_key(
    relay_manager: &RelayManager,
    provider_id: *const u8,
    provider_id_len: usize,
) -> Result<String, KeychainError> {
    let base_dir: &Path = relay_manager.config_path;  // offset +584
    let key_dir: &str   = relay_manager.key_dir;       // offset +592

    // Stage 1: try encrypted key file (.json at base_dir/key_dir/)
    let key_file_path = base_dir.join("keys").join(provider_id_str);
    let file_contents = std::fs::read_to_string(key_file_path)?;

    if let Ok(parsed_map) = serde_json::from_str::<HashMap<&str, &str>>(&file_contents) {
        // hashbrown SIMD lookup for provider_id key
        if let Some(encoded_value) = parsed_map.get(provider_id_str) {
            let raw_bytes = base64::decode(encoded_value)?;
            // Key derivation: sha256(hostname + username)
            let hostname = hostname::get()?;
            let username = std::env::var("USER")
                .or_else(|_| std::env::var("USERNAME"))
                .unwrap_or_else(|_| "local".to_string());   // fallback literal bytes [61 69 6d 61 6d 69] = "aimami"
            let derived_key: [u8; 32] = sha2::sha256(format!("{}{}", hostname, username));
            // Decrypt / decode raw_bytes with derived_key (XOR/AES not fully resolved — treat as opaque)
            let plaintext_key = decrypt(raw_bytes, &derived_key);
            // Cache write-back
            keychain::write_key_file(base_dir, key_dir, provider_id, &plaintext_key);
            log::debug!("codexmate_lib::core::relay::keychain: cached key for provider");
            return Ok(plaintext_key);
        }
    }

    // Stage 2: macOS Keychain fallback
    let kc_result = mac_keychain::get("com.codexmate.relay.key", provider_id)?;
    if let Some(key_bytes) = kc_result {
        keychain::write_key_file(base_dir, key_dir, provider_id, &key_bytes);
        log::debug!("codexmate_lib::core::relay::keychain: mac_keychain hit, wrote cache");
        return Ok(String::from_utf8_lossy(&key_bytes).to_string());
    }

    Err(KeychainError::NotFound)
}
```

Key leaf calls:
- `mac_keychain::get` — VA `0x10041ee00` — macOS SecItemCopyMatching (leaf, terminated)
- `keychain::write_key_file` — VA `0x1006c9950` — writes plaintext key file under key_dir (leaf, terminated)
- `sha2::sha256::compress256` — VA `0x100942d40` — SHA-256 compression primitive (leaf, terminated)
- `base64::engine::Engine::decode::inner` — VA `0x100528050` (leaf, terminated)
- `hostname::get` — VA `0x10090e350` (leaf, terminated)

## Depth-3b: atomic_write::write_atomic (VA 0x10041e960) — NEW IN DELTA

```rust
fn write_atomic(dest: &Path, data: &[u8]) -> Result<(), io::Error> {
    let parent = dest.parent()
        .ok_or_else(|| io::Error::new(20, "atomic write: missing parent"))?;

    std::fs::DirBuilder::new().recursive(true).mode(0o777).create(parent)?;

    let stem = dest.file_name().unwrap_or("aimami");
    let pid = std::process::id();
    let uuid = uuid::Uuid::new_v4();
    let tmp_name = format!("{}.{}.{}", stem, pid, uuid);
    let tmp_path = parent.join(tmp_name);

    let mut tmp_file = OpenOptions::new()
        .write(true).create_new(true).mode(0o644)
        .open(&tmp_path)?;

    tmp_file.write_all(data)?;
    tmp_file.sync_data()?;     // fdatasync — NEW: ensures durability before rename
    drop(tmp_file);

    match std::fs::rename(&tmp_path, dest) {
        Ok(_) => {
            atomic_write::sync_parent_dir(parent);   // VA 0x10041ec70 (leaf)
        }
        Err(e) => {
            let _ = std::fs::remove_file(&tmp_path); // cleanup on rename fail
            return Err(e);
        }
    }
    Ok(())
}
```

Leaf calls:
- `sync_parent_dir` — VA `0x10041ec70` (leaf, terminated — opens parent dir fd + fsync)
- `uuid::Uuid::new_v4` — VA `0x100e13930` (leaf)
- `std::process::id` — VA `0x100f35fb0` (leaf)
- `std::fs::rename` — VA `0x100f2b560` (leaf)
