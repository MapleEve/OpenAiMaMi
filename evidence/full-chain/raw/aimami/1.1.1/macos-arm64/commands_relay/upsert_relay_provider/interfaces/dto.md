# Interface / DTO — upsert_relay_provider

## Tauri IPC Command

**Command name** (from string table `0x101148166`): `upsert_relay_provider`
**Entry VA**: `0x1005eae30`
**Registered in**: `codexmate_lib::run::{{closure}}::{{closure}}` @ `0x100311780`

## Input DTO: RelayProviderInput (a3 / a4)

Inferred from RelayManager::upsert field accesses (DTO layout at offset from a3 = v146):

| Offset (qwords) | Field | Type | Notes |
|---|---|---|---|
| v146[0..2] | name / display_name ptr+len+cap | String | aliased v146+6 |
| v146[3..5] | base_url | String | |
| v146[6..8] | display_name | String | v146+6 cloned first |
| v146[9..11] | region_tag | String | |
| v146[12..14] | id (Option<String>) | Option\<String\> | 0x8000..=None triggers uuid::new_v4 INSERT |
| v146[15..17] | exposed_models | Vec\<String\> | v139 = v146+15 |
| v146[16..17] | existing provider ref (Option) | Option ptr | v4[15..17] checked for existing entry |
| v146[18..20] | proxy_chain (Option) | Option\<...> | 0x8000..=None |
| v146[byte169] | is_default flag | u8 | BYTE6(v135[28]) |
| a4 (v128,v129) | api_key bytes | *const u8 + usize | v129=0 → no write_key_file |

## Output DTO: CoreEnvelope\<RelayProvider\>

**Ok variant**: tag=`10`, body=RelayProvider (0xE8=232 bytes)
**Err variant**: tag=`0x8000000000000000`, code=`9` (CoreError::Other), message String

## RelayProvider struct (v135[], 232 bytes = 0xE8)

| Offset (qwords) | Field | Notes |
|---|---|---|
| [0..2] | id | String (3 qwords: ptr+len+cap) |
| [3..5] | display_name | String |
| [6..8] | base_url | String |
| [9..11] | api_key (display/masked) | String |
| [12..14] | model_filter | String |
| BYTE4([28]) | api_key_stored | bool; set to 1 after write_key_file success |
| BYTE5([28]) | is_primary (v147) | bool |
| BYTE6([28]) | is_default | bool |
| [15..17] | exposed_models | Vec\<String\> (ptr+len+cap qwords, 32 bytes each element) |
| [18..20] | proxy_chain | Option\<ProxyChain\> |
| [21] | status | Option-like; 0x8000..=None |
| [24] | sort_order | i64; -1=unset |
| [25] | active_count | u64 |
| [26] | created_at | u64 epoch_ms |
| [27] | updated_at | u64 epoch_ms |

## Side Effects

1. **File write**: `<codex_root>/keys/<provider_id>` (mode 0600), only when api_key bytes supplied
2. **File write**: `<codex_root>/relay.json` (atomic via tmp+rename) — RelayState serialization
3. **File write**: `<codex_root>/codex.toml` (atomic) — codex config merge
4. **File write**: catalog TOML(s) under `<codex_root>/` (write_catalog → api-mode + standard)
   OR catalog delete (remove_catalog) when no active provider with models
5. **Tray update**: system tray menu rebuilt via `refresh_tray_menu` on success path

## Error Codes

| Code | Meaning | Source |
|---|---|---|
| 9 | CoreError::Other | RelayManager::upsert returns Err |
| 2 | IO error | apply_codex_state / codex_writer failure |
| relay error string | "keychain set failed for <id>" | write_key_file failure, logged at WARN |

## Key-file path pattern

```
<codex_root>/keys/<provider_id_as_lowercase_hyphenless_uuid>
```

Confirmed from `write_key_file`: `Path::_join(codex_root, "keys", 4)` then `Path::_join(keys_dir, provider_id_ptr, provider_id_len)`.
