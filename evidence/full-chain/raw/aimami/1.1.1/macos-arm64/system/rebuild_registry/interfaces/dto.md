# rebuild_registry — Interface & DTO Contract
## AiMaMi 1.1.1 macOS ARM64 | session: wf-aimami111-delta-20260617-sweep

## IPC Command

```
command: rebuild_registry
module:  commands::system
handler: codexmate_lib::commands::system::rebuild_registry (0x1006182c0)
mutex:   std::sys::pal::unix::sync::Mutex (OnceBox-initialized, per-Repository)
```

## Request DTO

None. Zero-argument command (no input payload deserialized in handler).

## Response DTO — CoreEnvelope<RegistryFile>

```
CoreEnvelope<RegistryFile> {
    tag: u64,          // 0x8000000000000000 = Ok, else Err discriminant
    // Ok variant:
    items:    Vec<RegistryItem>,   // slice ptr + len + cap, 360-byte stride
    // + additional RegistryFile fields (version, timestamp)
    // Err variant:
    err_code: u64,
    err_msg:  String,
}
```

## Internal DTO: RegistryItem (360 bytes, stride confirmed by 360*count)

| Offset | Type          | Field                        | Carried from prev? |
|--------|---------------|------------------------------|--------------------|
| 0      | u8            | is_primary (1=yes, 0=no)     | no                 |
| 8      | u64           | prev_item_ptr (carry-over)   | -                  |
| 16     | u32           | last_used_flag_1 (1=Some)    | YES (max)          |
| 24     | u64           | last_used_ts_1 (secs)        | YES (max)          |
| 32     | u32           | last_used_flag_2 (1=Some)    | YES (max)          |
| 40     | u64           | last_used_ts_2 (secs)        | YES (max)          |
| 48     | u64           | proxy_flag                   | YES                |
| 56     | *str          | proxy_host_ptr               | YES                |
| 64     | u64           | proxy_host_len               | YES                |
| 72–87  | ...           | proxy fields                 | YES                |
| 88     | u64           | session_id_flag              | YES                |
| 96     | *str          | session_id_ptr               | YES                |
| 104    | u32           | plan_int (PlanType discriminant) | -              |
| 108    | u32           | plan_data_1                  | YES                |
| 112    | u64           | plan_data_2                  | YES                |
| 120    | u32           | plan_data_3                  | YES                |
| 128    | *str          | plan_str_ptr (lowercased)    | -                  |
| 136    | u64           | display_name_len             | -                  |
| 144    | u64           | display_name_ptr             | -                  |
| 152    | ...           | account_id (String)          | -                  |
| 200    | String        | display_name                 | YES (clone if none)|
| 216    | u64           | carry_display_flag           | YES                |
| 224    | *str          | auth_mode_str_ptr (lowercase)| -                  |
| 272    | String        | plan_str (Option<String>)    | YES (clone if None)|
| 296    | String        | auth_mode_str (Option<String>)| YES               |
| 320    | String        | extra_label (Option<String>) | YES                |
| 344    | u64           | elapsed_secs                 | -                  |
| 352    | u8            | online_flag (0/1/2=None)     | YES                |
| 353    | u8            | disabled_flag (0/1/2=None)   | YES                |

## Internal DTO: AuthSnapshot (input to carry_over + persist)

Produced by `make_auth_snapshot`. Key fields extracted from JWT:
- `email` / display_name (from `organization_id` nested dict key)
- `chatgpt_account_id` (from JWT claim `chatgpt_account_id`, fallback `unknown-account`)
- `user_id` (from JWT claim `user_id`)
- `plan_label` (from `chatgpt_subscription_active_until` + `parse_chatgpt_plan_label`)
- `plan_type` (PlanType enum, lowercased debug repr for RegistryItem)
- `auth_mode` (AuthMode enum; AES SIMD check on key bytes for relay detection)
- `is_expired` (bool; compare `exp` claim to SystemTime::now)
- `subscription_active_until` (Option<SystemTime>; from `chatgpt_subscription_active_until` ISO8601)

## Error Codes (CoreError)

| Code | Meaning                                  |
|------|------------------------------------------|
| 2    | fs error (ensure_directories, file read) |
| 3    | serde_json parse error                   |
| 9    | relay key guard: "AiMaMi virtual relay key; not a real account" (len=63) |

## Side-Effects

1. `fs::copy(auth_json → snapshot_path)` — backup primary auth file
2. `fs::copy(registry_json → timestamped_backup)` — backup existing registry before overwrite
3. `std::fs::write(registry_json)` — write new RegistryFile JSON to disk
4. `fs::read_dir(auth_dir)` — directory scan (read-only side-effect)

## JSON Keys in registry.json (from serialize_entry string literals)

- `"version"` (13 chars — note: padded/discriminated key blob, actual key len via anon ref)
- `"timestamp"` (9 chars)
- `"account_snapshot"` (16 chars)
- `"items"` (5 chars)
- Plus auth_mode and disabled_flag as struct fields via Compound::serialize_field
