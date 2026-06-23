# call-tree — get_or_create_remote_device_secret (win64 1.1.1)

## 符号说明

- `[NEW-1.1.1]` = 1.0.9 无此 callee，1.1.1 新增
- `[CHANGED]` = 1.0.9 有类似 callee 但 VA 或行为变化
- `[SAME]` = 逻辑等价于 1.0.9 对应函数
- `[terminated]` = 本轮 terminated 原因

深度 ≥5，全树 terminated。

```
L0  get_or_create_remote_device_secret                  (tauri IPC dispatch)
    [via tauri_ipc_main_dispatcher_sys@0x14000D2A0]
    │
L1  get_or_create_remote_device_secret_owner_sys        0x14078CD70  [CHANGED executor]
    │   ├── sub_14124A510                               0x14124A510  spin-wait on mutex byte
    │   │   └── [terminated: platform-primitive WaitOnAddress spin loop]
    │   ├── sub_14124B1D0                               0x14124B1D0  relay flag check
    │   │   └── [terminated: relay runtime state read, no further callees]
    │   ├── sub_1410B1930                               0x1410B1930  PoisonedLock panic path
    │   │   └── [terminated: error_return/panic]
    │   ├── sub_140243FC0                               0x140243FC0  error enum builder
    │   │   └── [terminated: error_return — builds Err variant, no callees]
    │   ├── sub_1407B1650                               0x1407B1650  Result dealloc/drop
    │   │   └── [terminated: persistence_commit/dealloc]
    │   └── WakeByAddressSingle                        kernel32  [terminated: platform-primitive]
    │
L2  get_or_create_remote_device_secret_core_sys         0x1401B4FB0  [NEW-1.1.1 replacement]
    │   ├── codexmate_settings_hotspot_read_full_sys_111  0x1401A15D0  [NEW-1.1.1]
    │   │   └── (see L3A subtree below)
    │   ├── uuid_v4_generate_raw_sys ×2                 0x140F5A860  [NEW-1.1.1]
    │   │   └── (see L3C subtree below)
    │   ├── sub_1410A1DF0                               0x1410A1DF0  string format "{}-{}"
    │   │   └── (calls uuid_v4_format_hex32_sys twice — see L3D)
    │   ├── sub_1410A2210                               0x1410A2210  string clone/copy helper
    │   │   └── [terminated: string_clone, trivial alloc]
    │   ├── sub_140001360                               0x140001360  alloc (mimalloc)
    │   │   └── [terminated: platform-primitive / external_call]
    │   ├── sub_140001370                               0x140001370  free/drop (mimalloc)
    │   │   └── [terminated: platform-primitive / external_call]
    │   ├── sub_14124BCCB                               0x14124BCCB  OOM panic
    │   │   └── [terminated: error_return/panic]
    │   ├── hotspot_config_serialize_5field_json_and_write_sys  0x1401A1D90  [NEW-1.1.1 replaces dedicated fn]
    │   │   └── (see L3B subtree below)
    │   └── sub_1400485A0                               0x1400485A0  HotspotConfig destructor
    │       └── [terminated: dealloc/drop]
    │
L3A codexmate_settings_hotspot_read_full_sys_111        0x1401A15D0  [NEW-1.1.1]
    │   ├── win32_file_read_bytes_111                   0x141093260  read config file bytes
    │   │   └── [terminated: platform-primitive ReadFile]
    │   ├── sub_140002FA0                               0x140002FA0  JSON parse (serde_json)
    │   │   └── [terminated: external_call serde_json]
    │   ├── sub_14103A480                               0x14103A480  JSON map lookup (Option)
    │   │   └── [terminated: data lookup, no further callees]
    │   ├── sub_14103A580                               0x14103A580  JSON map get_mut
    │   │   └── [terminated: data lookup]
    │   ├── sub_140362910                               0x140362910  Array variant clone
    │   │   └── [terminated: trivial clone]
    │   ├── sub_140406C30                               0x140406C30  Object variant clone
    │   │   └── [terminated: trivial clone]
    │   ├── sub_14030F100                               0x14030F100  Array flatten
    │   │   └── [terminated: data transform]
    │   ├── sub_1403059A0                               0x1403059A0  Array sort/dedup
    │   │   └── [terminated: data transform]
    │   ├── sub_1401D2850                               0x1401D2850  JsonValue drop (Err path)
    │   │   └── [terminated: dealloc/drop]
    │   ├── sub_1401D3F90                               0x1401D3F90  JsonValue drop (Ok path)
    │   │   └── [terminated: dealloc/drop]
    │   ├── codexmate_settings_field_lookup_sys_111     0x14040CC30  settings field extractor
    │   │   └── [terminated: data extraction via key="CodexMateSettings"/subkey="hotspot"]
    │   ├── sub_140041790                               0x140041790  String drop
    │   │   └── [terminated: dealloc]
    │   └── sub_141212FB0                               0x141212FB0  memcpy/struct copy
    │       └── [terminated: platform-primitive]
    │
L3B hotspot_config_serialize_5field_json_and_write_sys  0x1401A1D90  [NEW-1.1.1]
    │   ├── relay_config_check_parent_dirs_sys          0x1406F2870  check dirs exist
    │   │   └── [terminated: platform-primitive fs check]
    │   ├── sub_14025A8C0                               0x14025A8C0  json_write_field_obj("hotspot")
    │   │   └── [terminated: JSON serialization leaf]
    │   ├── sub_140260580                               0x140260580  json_write_field_u64("usageRefreshInterval")
    │   │   └── [terminated: JSON serialization leaf]
    │   ├── sub_1402662D0 ×2                            0x1402662D0  json_write_field_str("deviceId","remoteDeviceSecret")
    │   │   └── [terminated: JSON serialization leaf]
    │   ├── sub_140267450                               0x140267450  json_write_field_ts("notificationsSince")
    │   │   └── [terminated: JSON serialization leaf]
    │   ├── sub_1401F7930                               0x1401F7930  json_write_u64
    │   │   └── [terminated: JSON serialization leaf]
    │   ├── sub_1401F7910                               0x1401F7910  json_write_bool
    │   │   └── [terminated: JSON serialization leaf]
    │   ├── sub_1401F7950                               0x1401F7950  json_close_obj (write '}')
    │   │   └── [terminated: JSON serialization leaf]
    │   ├── sub_1403A64F0                               0x1403A64F0  file write bytes
    │   │   └── [terminated: persistence_commit — win32 WriteFile]
    │   └── sub_141248EC0                               0x141248EC0  write_fmt panic
    │       └── [terminated: error_return/panic]
    │
L3C uuid_v4_generate_raw_sys                            0x140F5A860  [NEW-1.1.1]
    │   └── ProcessPrng                                 bcryptprimitives  [terminated: platform-primitive CSPRNG]
    │
L3D sub_1410A1DF0  (string format "{}-{}")              0x1410A1DF0
    │   └── uuid_v4_format_hex32_sys ×2                0x140610610  [NEW-1.1.1]
    │           └── sub_140F5ADC0                       0x140F5ADC0
    │               ├── uuid_bytes_to_hex32_lowercase_sys  0x140F5A940  [terminated: hex encoding leaf, 32-char output]
    │               └── sub_1410A7B00                   0x1410A7B00  string push(32B)
    │                   └── [terminated: string alloc/copy leaf]
```

## 统计

| 层 | 函数数 | terminated 原因分布 |
|---|---|---|
| L0 (IPC dispatch) | 1 | — |
| L1 (owner/executor) | 6 | platform-primitive×2, error_return×2, dealloc×1, relay_check×1 |
| L2 (core) | 9 | platform-primitive×2, error_return×1, string_clone×1, dealloc×2, persistence×1 + L3 |
| L3A (hotspot_read) | 13 | platform-primitive×2, external_call×1, data_lookup×2, data_transform×2, dealloc×3, serialization_leaf×2, memcpy×1 |
| L3B (serialize) | 9 | JSON serialization leaf×7, persistence_commit×1, panic×1 |
| L3C (uuid_gen) | 1 | platform-primitive (ProcessPrng) |
| L3D (uuid_fmt→L5) | 3 | hex encoding leaf×1 + string_copy×1 |
| **Total unique** | **~42** | 全 terminated，深度 = 5 |
