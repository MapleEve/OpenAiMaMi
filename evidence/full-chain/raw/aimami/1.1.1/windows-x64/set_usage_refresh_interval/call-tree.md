# Call Tree — set_usage_refresh_interval (AiMaMi 1.1.1 win64)
<!-- session=<审计会话> | delta_class=integrity_recovered | 2026-06-18 | gold-leaf extension -->

```
set_usage_refresh_interval_handler_111 [0x140018760] (owner, size=0x5DE)
├── sub_141212FB0 [0x141212FB0]                        (memcopy utility, noise)
│   ×2 calls (copy IPC context blocks 520B + 400B)
├── confirm_pending_auto_switch_deserialize_request_sys [0x140089A50]
│   ├── sub_140729280 [0x140729280]                    (struct clone, noise)
│   │   └── sub_1400803E0 [0x1400803E0]                (field extractor, noise)
│   └── [drops: Arc dec + frees]
│
├── [EARLY PATH if v19==3]
│   └── sub_14080C3C0 [0x14080C3C0]                   (IPC RESPONSE DISPATCH)
│       └── vtable[+24] call → frontend resolver
│
├── pending_auto_switch_state_lock_acquire_111 [0x14006EDC0]
│   └── [acquires Mutex<Repository>, returns guard ptr]
│
├── query_installed_skills_with_repo_111 [0x141214620]  *** DELTA:NEW_CALLEE_1.1.1 ***
│   ├── sub_1410A1DF0 [0x1410A1DF0]                   (iterator constructor)
│   ├── sub_141222DD0 [0x141222DD0]                    (map wrapper)
│   └── skill_store_get_all_111 [0x14106D960]          (enumerate installed skills)
│
├── remove_skill_parse_id_param_111 [0x1402FED40]       (parses "interval" param from JSON)
│   ├── sub_1402F9EB0 [0x1402F9EB0]                   (JSON navigator)
│   └── sub_1412233C0 [0x1412233C0]                   (string extractor)
│
├── set_usage_refresh_interval_apply_and_persist_111 [0x140789900]  *** DELTA:NEW_CALLEE_1.1.1 ***
│   ├── pending_auto_switch_state_lock_acquire_111 [0x14006EDC0]  (re-acquire for repo)
│   ├── hotspot_interval_parse_and_write_sys_111 [0x1401B2600]    *** DELTA:NEW_CALLEE_1.1.1 ***
│   │   ├── codexmate_settings_hotspot_read_full_sys_111 [0x1401A15D0]  (read hotspot config)
│   │   ├── sub_140001360 [0x140001360]                (alloc, noise)
│   │   ├── sub_141212FB0 [0x141212FB0]                (memcopy, noise)
│   │   └── hotspot_config_serialize_5field_json_and_write_sys [0x1401A1D90]  *** SIDE EFFECT: DISK WRITE ***
│   │       ├── relay_config_check_parent_dirs_sys [0x1406F2870]          (ensure parent dirs exist)
│   │       ├── sub_14025A8C0 [0x14025A8C0]                               (json_write_field: "hotspot")
│   │       ├── sub_140260580 [0x140260580]                               (json_write_field: "usageRefreshInterval" — NEW_FIELD_1.1.1)
│   │       ├── sub_1402662D0 [0x1402662D0]                               (json_write_field: "deviceId" + "remoteDeviceSecret")
│   │       ├── sub_140267450 [0x140267450]                               (json_write_field: "notificationsSince")
│   │       └── hotspot_config_file_write_bytes_sys [0x1403A64F0]         *** TERMINAL DISK WRITE ***
│   │           └── win32_file_write_bytes_111 [0x141093710]              (Windows platform primitive — terminated_reason=platform-primitive)
│   ├── interval_str_to_seconds_111 [0x1401BCE00]       *** DELTA:NEW_CALLEE_1.1.1 ***
│   │   └── [pure fn: "30s"→30, "1m"→60, "3m"→180, "5m"→300]
│   ├── usage_refresh_notify_global_state_111 [0x14078BF40]  *** DELTA:NEW_CALLEE_1.1.1, SIDE EFFECT ***
│   │   ├── sub_141078290 [0x141078290]                (Condvar notify_all)
│   │   └── WakeByAddressSingle                        (Windows API, wakes polling threads)
│   └── sub_140041870 [0x140041870]                    (drop IpcContext, noise)
│
├── set_usage_refresh_interval_respond_111 [0x1408330B0]
│   ├── sub_1402F2750 [0x1402F2750]                    (Ok-result unwrap)
│   ├── sub_140807390 [0x140807390]                    (result formatter)
│   └── sub_14080C3C0 [0x14080C3C0]                   (IPC RESPONSE DISPATCH)
│       └── vtable[+24] call → frontend resolver
│
├── sub_14033AB50 [0x14033AB50]                        (skills iter drop, 96B stride, noise)
├── sub_140001370 [0x140001370]                        (dealloc, noise)
└── sub_140042650 [0x140042650]                        (drop v17 resolver buf)

terminated_reason: all branches reach IPC response dispatch, platform-primitive, or goto LABEL_22 cleanup
depth_reached: 7 (win32_file_write_bytes_111 is deepest — Windows platform primitive)
gold_leaf_session: <审计会话> (extended from depth=5 to depth=7, added hotspot_config_file_write_bytes_sys + win32_file_write_bytes_111)
```

## Legend

- `*** DELTA:NEW_CALLEE_1.1.1 ***` — callee absent in 1.0.9 baseline, present in 1.1.1
- `*** SIDE EFFECT: DISK WRITE ***` — writes to filesystem
- `noise` — compilation artefacts / memory management, excluded from delta
