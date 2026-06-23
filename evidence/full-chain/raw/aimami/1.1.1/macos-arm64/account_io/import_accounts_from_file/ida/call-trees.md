# import_accounts_from_file — Call Tree (AiMaMi 1.1.1 macOS arm64)

## Root

```
import_accounts_from_file [IPC command, blocking task]
└── core::account_io::import_accounts (0x1004bb0b0, 0x1d1d bytes)
    ├── parse_import_file (0x1004bd300)                    [depth 2]
    │   ├── std::sys::fs::metadata                         [leaf]
    │   ├── std::fs::read::inner                           [leaf]
    │   └── serde_json::de::from_trait → ExportFile        [leaf]
    │
    ├── read_registry_or_empty_keys (0x1004bf3a0)          [depth 2]
    │   ├── std::sys::fs::metadata                         [leaf]
    │   ├── std::fs::read_to_string::inner                 [leaf]
    │   └── serde_json::de::from_trait → RegistryFile      [leaf]
    │
    ├── read_active_account_key (0x1004bf0d0)              [depth 2, leaf group]
    │
    ├── is_valid_account_key (0x1004be0e0)                 [depth 2]
    │   ├── str::trim_matches                              [leaf]
    │   └── str::pattern::StrSearcher::new + split         [leaf]
    │
    ├── make_snapshot_path (0x1004bd8d0)                   [depth 2]
    │   ├── alloc/simd char-replace (@→_ /→_ :→_)         [leaf]
    │   └── std::path::Path::_join                         [leaf]
    │
    ├── platform::paths::CodexPaths::clone (0x100508030)   [depth 2, leaf]
    ├── platform::paths::CodexPaths::ensure_directories    [depth 2, leaf]
    │
    ├── core::auth::load_auth_file (0x10053ac80)           [depth 2]
    │   └── (reads auth.json, deserializes AuthData)       [leaf group]
    │
    ├── core::auth::make_auth_snapshot (0x10053b9f0)       [depth 2]
    │   ├── core::auth::decode_jwt_claims (0x10053aef0)    [depth 3, leaf]
    │   ├── core::auth::nested_dict (0x10053a9b0)          [depth 3, leaf]
    │   ├── core::auth::string_val (0x10053a7f0)           [depth 3, leaf]
    │   │   (fields: name/chatgpt_account_id/user_id/
    │   │           org_id/chatgpt_subscription_active_until)
    │   ├── core::auth::int_val (0x100544c40)              [depth 3, leaf]
    │   ├── core::auth::parse_iso_timestamp (0x10053cf60)  [depth 3, leaf]
    │   ├── plan_mapping::parse_chatgpt_plan_label          [depth 3] *** NEW ***
    │   │   (0x100536010)
    │   │   ├── str::trim + to_lowercase                   [leaf]
    │   │   ├── infer_pro_tier_from_raw (0x1005358f0)      [depth 4, leaf]
    │   │   ├── normalize_tokens (0x100535610)             [depth 4, leaf]
    │   │   └── tokens_contain (0x1005355a0)               [depth 4, leaf]
    │   ├── std::sys::fs::metadata                         [leaf]
    │   ├── std::fs::Metadata::modified                    [leaf]
    │   ├── std::time::SystemTime::duration_since          [leaf]
    │   └── str::to_lowercase                              [leaf]
    │
    ├── repository::rebuild_registry (0x1004c40a0)         [depth 2]
    │   ├── CodexPaths::ensure_directories                 [leaf]
    │   ├── Repository::load_registry (0x1004bf8e0)        [depth 3, leaf]
    │   ├── core::auth::load_auth_file                     [depth 3, leaf]
    │   ├── core::auth::make_auth_snapshot                 [depth 3 → see above]
    │   ├── make_snapshot_path                             [depth 3 → see above]
    │   ├── std::sys::fs::copy                             [leaf]
    │   ├── repository::carry_over_registry_state
    │   │   (0x1004d6230)                                  [depth 3, leaf]
    │   ├── slice::sort::stable::driftsort_main            [leaf] (>0x15 entries)
    │   └── Repository::persist_registry (0x1004c3a00)    [depth 3, leaf]
    │
    ├── serde_json::to_vec_pretty (0x1004b5c40)            [depth 2, leaf]
    │
    └── relay::atomic_write::write_atomic (0x10041e960)    [depth 2]
        ├── std::path::Path::parent                        [leaf]
        ├── std::fs::DirBuilder::_create (mkdir -p, 0777)  [leaf]
        ├── std::process::id                               [leaf]
        ├── uuid::v4::new_v4                               [leaf] *** uuid tmp name ***
        ├── std::fs::OpenOptions::_open (tmp file)         [leaf]
        ├── std::io::Write::write_all                      [leaf]
        ├── std::fs::File::sync_data (fdatasync)           [leaf]
        ├── std::sys::fs::rename (atomic swap)             [leaf]
        └── atomic_write::sync_parent_dir (0x10041ec70)   [depth 3, leaf]
```

## Terminated reasons

| Function | Reason |
|---|---|
| `parse_import_file` | all callees are std/serde leaf — no further app-level depth |
| `read_registry_or_empty_keys` | serde leaf |
| `read_active_account_key` | file read leaf |
| `is_valid_account_key` | pure string validation |
| `make_snapshot_path` | SIMD string sanitize + path join, no app callees |
| `core::auth::load_auth_file` | file read + deserialize |
| `plan_mapping::parse_chatgpt_plan_label` | pattern matching only; sub-callees (infer_pro_tier, normalize_tokens, tokens_contain) are pure string ops, no I/O |
| `carry_over_registry_state` | state merge, no I/O |
| `atomic_write::sync_parent_dir` | fsync only |
| `persist_registry` | calls atomic_write (already expanded) |

Max depth reached: 4 (parse_chatgpt_plan_label → tokens_contain).
