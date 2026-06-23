# Interface: reveal_relay_api_key
## AiMaMi 1.1.1 | macos-arm64 | session <审计会话>

## IPC Command
- **command name**: `reveal_relay_api_key`
- **command name len**: 20B (@0x1011482c5)
- **registered in**: IPC closure table (Tauri command router)
- **dispatcher VA**: 0x10031aa60 (ICF-merged: no separate wrapper symbol)

## Arguments

| Field | Type | Required | Source |
|-------|------|----------|--------|
| `providerId` | `String` | yes | IPC message body; extracted via `from_command` @0x1006dad50 |

- **argKey bytes**: `providerId` (10B @0x101148415 in packed string blob)
- **argKey confirmed**: dual-source — IPC dispatcher decompile + string pool packed blob @0x1011482ff (`...providerIdide...`)

## Return Type

```
CoreEnvelope<Option<String>>
```

- On success (cache hit or keychain found): `CoreEnvelope::ok(Some(api_key_string))`
- On provider not found (all 3 tiers miss): `CoreEnvelope::ok(None)` — response variant `0x8000000000000000` (None sentinel)
- `CoreEnvelope::ok` VA: 0x100555400
- Response sentinel value: `0x8000000000000000LL` = Rust Option::None encoding

## Error Paths

| Condition | Behavior |
|-----------|----------|
| Missing/invalid `providerId` arg | `InvokeResolver::return_result` error (IPC arg parse fail) |
| RelayManager mutex poisoned | `unwrap_failed` panic via anon error string |
| Provider not in cache AND all keychain tiers miss | `CoreEnvelope::ok(None)` — not an error, just None |
| Tier 1 file read error | Fall through to Tier 2 |
| Tier 2 JSON parse error | Fall through to Tier 3 |
| Tier 2 base64 decode error | Fall through to Tier 3 |
| Tier 3 macOS Keychain error -25300 (errSecItemNotFound) | `CoreEnvelope::ok(None)` |
| Tier 3 macOS Keychain other error | Error string via `SpecToString::spec_to_string`; treated as None return |

## Side Effects

- **Primary path (cache hit)**: none — read-only mutex-protected access to RelayManager providers Vec
- **Cache miss Tier 2 hit**: `write_key_file` writes decrypted key to Tier 1 file (`data_dir/relay/<provider_id>`) + sets directory permissions (chmod 0o777 dir, then file)
- **Cache miss Tier 3 hit**: `write_key_file` writes key to Tier 1 file (write-through caching)
- **No HTTP/network**: purely local FS + macOS Keychain
- **No IPC to sidecar**: no process spawn

## Key Storage Architecture (3-Tier)

```
Tier 1 (fastest): plain-text file
  path: <data_dir>/relay/<provider_id>
  content: raw api_key string (trimmed)

Tier 2 (encrypted file):
  path: <data_dir>/relay/providers/<encrypted_filename>
  content: JSON { provider_id: base64(encrypt(api_key)) }
  decryption key: SHA256(hostname + ":" + username)
    username = env(USERhttp) → env(USERNAME) → fallback literal "local" (5B)
  algorithm: base64 decode → (XOR/AES with SHA256 key) → UTF8 api_key
  write-through: on hit, also writes Tier 1 file

Tier 3 (macOS Keychain):
  service: anon_cb488c0530badd667ddecb834e53ca81_780 (16B service name literal)
  account: provider_id
  type: GenericPassword with ProtectedKeychain
  errSecItemNotFound (-25300) → None (not an error)
  write-through: on hit, also writes Tier 1 file
```

## RelayManager Memory Layout (from decompile context)

```
RelayManager (v8 = a2[1]):
  +16: providers_mutex (OnceBox<Mutex>)
  +24: is_poisoned (bool)
  +40: providers_ptr (Vec<RelayProvider>.ptr)
  +48: providers_count (Vec<RelayProvider>.len)

RelayProvider (stride=232B):
  relative offsets from scan position:
    -64: id.ptr (String data pointer)
    -56: id.len (String length)
    +0:  api_key field (String, cloned on hit)
```

## Frontend Consumption (from windows CCF cross-ref / ipc-contracts)
- argKeys: `["providerId"]` — confirmed dual-source
- Frontend wrapper: likely `revealRelayApiKey({ providerId })` invoke call
- dim1 (frontend CCF): pending — see windows cross-ref evidence; not independently verified in this macOS session
