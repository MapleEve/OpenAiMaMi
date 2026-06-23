# import_accounts_from_file — Pseudocode (AiMaMi 1.1.1 macOS arm64)

## Module
`codexmate_lib::commands::account_io`
Owner VA: `0x1004bb0b0` — `codexmate_lib::core::account_io::import_accounts`
Size: 0x1d1d bytes
IPC command name: `import_accounts_from_file`
DTO input field: `selectedKeys: Vec<String>`

---

## Entry: Command closure (Tauri IPC layer)

Closure VA `0x1000bbba0` wraps the async blocking task:
- Carries `AppHandle` + `AccountImportPayload` in its state struct at offsets 200 / 353 / 360 / 368
- `AccountImportPayload` = `CoreEnvelope<AccountImportPayload>` with `selectedKeys` list

`import_accounts_from_file` is dispatched as a `tokio::runtime::blocking::task::BlockingTask`,
confirming it runs off the async executor on a blocking thread pool.

---

## Core: `import_accounts` (0x1004bb0b0)

```rust
fn import_accounts(
    paths: &CodexPaths,
    selected_keys: Vec<String>,  // from DTO field selectedKeys
    // ...
) -> Result<CoreEnvelope<RegistryFile>, CoreError>
```

### Step 1 — Parse import file
```rust
let export_file: ExportFile = parse_import_file(path)?;
// path = derived from DTO / AppState
```
- Calls `parse_import_file(0x1004bd300)` — reads + validates + deserializes backup JSON.
- File size guard: **max 0xA00000 bytes** (10 MB). Error if exceeded.
- Deserializes to `ExportFile` via `serde_json::from_trait`.
- If `accounts` vec empty → error `"Backup contains no accounts"`.

### Step 2 — Load current registry + auth
```rust
let registry = read_registry_or_empty_keys(paths)?;  // (0x1004bf3a0)
let active_key = read_active_account_key(paths)?;     // (0x1004bf0d0)
let auth_data = core::auth::load_auth_file(paths)?;   // (0x10053ac80)
```

### Step 3 — Filter selected keys + validate
```rust
for account in export_file.accounts {
    if !selected_keys.contains(&account.key) { continue; }
    if !is_valid_account_key(&account.key) { continue; }
    // is_valid_account_key: key length 257..512, splits on "::", both parts non-empty
    // ... accumulate valid accounts
}
```

### Step 4 — Backup existing auth.json
```rust
let snapshot_path = make_snapshot_path(paths, &active_key);  // (0x1004bd8d0)
std::fs::copy(auth_source, &snapshot_path)?;
```
- `make_snapshot_path`: sanitizes key chars `@`→`_`, `/`→`_`, `::`→`_`, builds
  `<snapshot_dir>/<sanitized_key>.json`.
- Copy is best-effort (error suppressed).

### Step 5 — Write each selected account via make_auth_snapshot + rebuild
```rust
let snapshot = make_auth_snapshot(auth_data, auth_path)?;  // (0x10053b9f0)
// For each imported account, merge into registry:
repository::rebuild_registry(paths)?;                        // (0x1004c40a0)
```

### Step 6 — Serialize + atomic write
```rust
let json = serde_json::to_vec_pretty(&registry)?;
relay::atomic_write::write_atomic(target_path, &json)?;  // (0x10041e960)
```
- `write_atomic`: writes to `<parent>/<filename>_<pid>_<uuid4>.tmp`, fdatasync, rename.
  Calls `sync_parent_dir` after rename.

### Step 7 — Return updated registry envelope

---

## Leaf callees

| VA | Symbol | Role |
|----|--------|------|
| 0x1004bd300 | `parse_import_file` | Read+parse JSON backup; size guard 0xA00000 |
| 0x1004bf3a0 | `read_registry_or_empty_keys` | Load registry.json or empty HashMap |
| 0x1004bf0d0 | `read_active_account_key` | Read active key string |
| 0x10053ac80 | `core::auth::load_auth_file` | Read auth.json to AuthData |
| 0x10053b9f0 | `core::auth::make_auth_snapshot` | Parse JWT+fields→AuthSnapshot; new: calls parse_chatgpt_plan_label |
| 0x100536010 | `plan_mapping::parse_chatgpt_plan_label` | **NEW in 1.1.1** — classify plan string to PlanType enum |
| 0x1004be0e0 | `is_valid_account_key` | Validate key: 257≤len<512, contains "::", 2 non-empty parts |
| 0x1004bd8d0 | `make_snapshot_path` | Build sanitized backup path |
| 0x1004c40a0 | `repository::rebuild_registry` | Scan dir, load+snapshot each .json, sort+persist |
| 0x10041e960 | `relay::atomic_write::write_atomic` | Tmp-file+fdatasync+rename atomic persistence |
| 0x1004b5c40 | `serde_json::to_vec_pretty` | Serialize registry to pretty JSON |
| 0x10053a7f0 | `core::auth::string_val` | Extract string field from JWT claims map |
| 0x10053aef0 | `core::auth::decode_jwt_claims` | Decode JWT payload → HashMap |
| 0x10053a9b0 | `core::auth::nested_dict` | Navigate nested JWT dict |
| 0x10053cf60 | `core::auth::parse_iso_timestamp` | Parse ISO 8601 timestamp |
| 0x100544c40 | `core::auth::int_val` | Extract int field from JWT claims |
| 0x100536010 | `plan_mapping::parse_chatgpt_plan_label` | Plan label→PlanType (new callee) |
| 0x1005075e0 | `models::PlanType::fmt::Debug` | Debug fmt for PlanType |
| 0x1005075b0 | `models::AuthMode::fmt::Debug` | Debug fmt for AuthMode |
| 0x1004d6230 | `repository::carry_over_registry_state` | Merge old registry state into rebuilt entry |

---

## Key strings observed (evidence)

- `"Backup contains no accounts"` — parse_import_file error path
- `"auth.json contains AiMaMi virtual relay key; not a real account"` — make_auth_snapshot rejection
- `"Unknown Account"` — fallback display name in AuthSnapshot
- `"unknown-account"` — fallback chatgpt_account_id
- `"chatgpt_account_id"`, `"user_id"`, `"chatgpt_subscription_active_until"` — JWT claim keys
- `"atomic write: missing parent"` — atomic_write error
- UUID v4 used for tmp file naming

---

## DTO Layout (from drop_in_place evidence)

### `AccountImportPayload` (a1 layout at 0x1000e73d0):
- `a1[0]`: cap of selectedKeys Vec (u64)
- `a1[1]`: ptr to selectedKeys data (each element = 3×u64: ptr/len/cap)
- `a1[2]`: len of selectedKeys Vec (u64)
- `a1[3]`: cap of second Vec (accounts data, 72-byte stride — 9×u64 per entry)
- `a1[4]`: ptr to accounts data
- `a1[5]`: len of accounts Vec
- `a1[6..7]`: additional string field (ptr+len, possibly file path)

### `CoreEnvelope<AccountImportPayload>` additional wrappers (at 0x1000bdb90):
- Outer envelope adds: `a1[0..1]` (String: 2×u64), `a1[3..4]` (String: 2×u64),
  `a1[6]`=cap / `a1[7]`=ptr / `a1[8]`=len for inner vec of (48-byte stride, 6×u64 elements),
  then delegates to `drop_in_place<AccountImportPayload>` at offset +9×u64.

---

## ExportFile schema (from parse_import_file):

Validated by serde_json; must be object with:
- `accounts`: array (non-empty, len ≤ 500 entries — guard `v20[8] <= 0x1F4`)
- `version`: integer field (discriminated: ==1 → "N accounts in backup"; else → version format error)

Each account element contains at minimum: `key` (String, used for selection + validation).
