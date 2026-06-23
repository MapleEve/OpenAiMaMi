# reorder_relay_providers — 逻辑文档

**版本**: 1.1.1 windows-x64 新增命令
**gate**: strictImplementationUse_candidate（strictImplementationUse=true，gate_accepted=false）
**binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

## IPC 合约

```
command: "reorder_relay_providers"
params:
  manager: String
  orderedIds: Vec<String>
约束: orderedIds.len() 必须 == 当前 providers 数量（否则 CoreError）
response: null on success | CoreError on error
```

## 调用链

```
IPC dispatch
→ reorder_relay_providers_owner_sys @ 0x14001D5E0 (1217B)
  → relay_providers_reorder_vec_validate_sys @ 0x14021BC90  [len check]
  → relay_core_reorder_sys @ 0x1406E6D20
    → relay_simd_vec_reorder_sys @ 0x140312480  [SIMD stride=232B reorder]
    → relay_config_persist_sys @ 0x1406E6960
      → relay_tls_idindex_rebuild_sys @ 0x140730AA0  [TLS HashMap rebuild]
      → relay_config_json_serialize_sys @ 0x14020A3E0  [9 fields]
      → relay_atomic_write_leaf_sys @ 0x140504310  [WIN fs: GetCurrentProcessId+CloseHandle]
    → WakeByAddressSingle
    → relay_post_login_state_sync (条件调用)
```

## 写入的 relay config JSON 9 字段

```
schemaVersion / providers / activeByIde / proxy /
codexRouterEnabled / codexApiLogin / codexApiSlots /
displayTagGlobal / displayTagWoyao
```

## 关键约束

```
len_mismatch → CoreError (discriminant=10) — null response on success
providers 顺序通过 SIMD 操作以 stride=232B 为单位 in-memory reorder
in-memory reorder 完成后 TLS id-index HashMap 同步重建
然后 JSON serialize + atomic write（全量重写 relay config）
```

## WIN 平台特有

- InterlockedCompareExchange8 + WakeByAddressSingle（relay state lock）
- GetCurrentProcessId in relay_atomic_write_leaf_sys
- 'relay state poisoned' panic string @0x1412EA5ED
- CloseHandle in atomic file write

## idb_writeback 记录

| VA | 重命名 | grade |
|---|---|---|
| 0x14001D5E0 | reorder_relay_providers_owner_sys | A |
| 0x1406E6D20 | relay_core_reorder_sys | A |
| 0x14021BC90 | relay_providers_reorder_vec_validate_sys | A |
| 0x1406E6960 | relay_config_persist_sys | B |
| 0x140730AA0 | relay_tls_idindex_rebuild_sys | A |
| 0x140312480 | relay_simd_vec_reorder_sys | A |
| 0x14020A3E0 | relay_config_json_serialize_sys | A |
| 0x140504310 | relay_atomic_write_leaf_sys | B |
