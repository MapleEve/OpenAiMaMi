# get_notification_client_state — Call Tree (Windows x64) [gold-leaf]
## session: <审计会话> | sha: d24e429a | delta_class: integrity_recovered
## depth: 7 confirmed | terminated_reason: per-node notes below

```
tauri_ipc_main_dispatcher_sys @ 0x14000D2A0                              [DEPTH 0]
  └─ [block 0x14000D47E] SSE-match "get_notification_client_state" (29B) @ 0x1412AC3CE
  └─ [block 0x14000D4AA] setup IPC closure (209B)
       ├─ sub_141212FB0 ×3                                                [leaf: str-slice helper]
       └─ sub_140068DC0 (sub_140065710+0x31B0)                           [DEPTH 1, generic async invoke]
            └─ notification_client_state_executor_wrapper_sys @ 0x1400354B0  [DEPTH 2]
                 └─ notification_client_state_async_executor_sys @ 0x140058620 [DEPTH 3, 4C32B, 50+ callees]
                      └─ notification_client_state_poll_step_sys @ 0x1403473E0  [DEPTH 4]
                           ├─ _InterlockedCompareExchange8                [leaf: win32 atomic, compiler-prim]
                           ├─ get_notification_client_state_owner_sys @ 0x140122010  [DEPTH 5, 6160B owner]
                           │    ├─ sub_1410A2210                          [leaf: Arc copy helper]
                           │    ├─ sub_141070A80                          [leaf: OnceLock try_get/Arc clone ~40B]
                           │    ├─ sub_140001360                          [leaf: rust_alloc]
                           │    ├─ sub_141212FB0                          [leaf: memcpy/memmove helper]
                           │    ├─ sub_1400803E0                          [leaf: task-context clone]
                           │    │
                           │    ├─ hotspot_ready_state_discriminant_check_sys_111 @ 0x14038D560  [DEPTH 6, ×2 direct]
                           │    │    ├─ sub_14108D200 (get_current_window_arc_tls)  [leaf: TLS accessor]
                           │    │    ├─ _InterlockedDecrement64            [leaf: win32 atomic]
                           │    │    ├─ sub_141088150                      [leaf: Arc free path ~20B]
                           │    │    ├─ sub_141212FB0                      [leaf: memcpy 176B]
                           │    │    ├─ _InterlockedIncrement64            [leaf: win32 atomic]
                           │    │    ├─ sub_14038E240 (focus_main_window_dispatch)  [DEPTH 7]
                           │    │    │    └─ [56882B Tauri event-pump runtime]  [term: Tauri runtime size limit]
                           │    │    ├─ hotspot_alternate_focus_dispatch_sys_111 @ 0x1403C0BD0  [DEPTH 7]
                           │    │    │    └─ [alternate focus path, !window_id match]  [term: size limit]
                           │    │    └─ hotspot_cleanup_non38_drop_sys_111 @ 0x1403EFD40  [DEPTH 7]
                           │    │         └─ [drop/cleanup non-38 discriminant]  [term: drop/cleanup leaf]
                           │    │
                           │    ├─ sub_140552BD0                           [leaf: discriminant result extractor]
                           │    ├─ sub_1405B19B0                           [leaf: context drop/cleanup]
                           │    ├─ sub_1401025D0                           [leaf: Arc context drop]
                           │    ├─ sub_1405A4370                           [leaf: Arc decrement+drop variant A]
                           │    ├─ sub_1405A5990                           [leaf: Arc decrement+drop variant B]
                           │    │
                           │    ├─ notification_state_step_poll_A_sys @ 0x140113170  [DEPTH 6, vtable off_1412D3E30]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111 @ 0x14038D560  [→ DEPTH 7 same as above]
                           │    │
                           │    ├─ notification_state_step_poll_B_sys @ 0x140115AC0  [DEPTH 6, vtable off_1412D34F0]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7 same]
                           │    │
                           │    ├─ [poll step A again] notification_state_step_poll_A_sys @ 0x140113170  [DEPTH 6, ×2]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7 same]
                           │    │
                           │    ├─ sub_140117B40 (poll_C) @ 0x140117B40   [DEPTH 6, vtable off_1412D3A90]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7]
                           │    │
                           │    ├─ sub_140116660 (poll_D) @ 0x140116660   [DEPTH 6, vtable off_1412D3B10]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7]
                           │    │
                           │    ├─ sub_14011B850 (poll_E) @ 0x14011B850   [DEPTH 6, vtable off_1412D3810, 168B ctx]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7]
                           │    │
                           │    ├─ sub_140113D10 (poll_G) @ 0x140113D10   [DEPTH 6, vtable off_1412D4130]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7]
                           │    │
                           │    ├─ notification_state_step_poll_F_sys @ 0x140114F20  [DEPTH 6, vtable off_1412D3C70]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7]
                           │    │
                           │    ├─ sub_140118940 (poll_H) @ 0x140118940   [DEPTH 6, vtable off_1412D3DB0]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7]
                           │    │
                           │    ├─ sub_1401125D0 (poll_I) @ 0x1401125D0   [DEPTH 6, vtable off_1412D4070]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7]
                           │    │
                           │    ├─ sub_14012CB30 × 2                       [DEPTH 6, multi-way Arc join]
                           │    │    ├─ args: (v3, 1701603654, &v159, 2)  — 2-way join
                           │    │    └─ args: (v3, 1953064005, &v119, 7)  — 7-way join
                           │    │         [term: Rust async join machinery, runtime-internal]
                           │    │
                           │    ├─ sub_14012E940 × 2                       [DEPTH 6, Tauri key-table lookup]
                           │    │    ├─ "__tauri_window_menu__" (21B) / "Window" (6B) / 3 Arc refs
                           │    │    └─ "__tauri_help_menu__" (19B) / unk_1412B3616 (4B) / 1 Arc ref
                           │    │
                           │    ├─ sub_1400801E0                           [leaf: Arc ownership transfer]
                           │    ├─ sub_140E224D0                           [leaf: Option<T> extractor]
                           │    ├─ sub_140101870                           [leaf: inner Arc drop]
                           │    ├─ sub_140582E60                           [leaf: join waker/Future join alloc]
                           │    ├─ sub_140405820                           [DEPTH 6, hotspot state extraction]
                           │    │    └─ hotspot_ready_state_discriminant_check_sys_111  [→ DEPTH 7]
                           │    └─ sub_140120390                           [DEPTH 6, hotspot config serialize+write]
                           │         └─ hotspot_config_serialize_5field_json_and_write_sys @ 0x1401A1D90
                           │              ├─ relay_config_check_parent_dirs_sys @ 0x1406F2870  [leaf: path check]
                           │              ├─ sub_14025A8C0  "hotspot" (7B)               [leaf: bool serializer]
                           │              ├─ sub_140260580  "usageRefreshInterval" (20B)  [leaf: u64 serializer]
                           │              ├─ sub_1402662D0  "deviceId" (8B)              [leaf: Option<str>]
                           │              ├─ sub_1402662D0  "remoteDeviceSecret" (18B)   [leaf: Option<str>]
                           │              ├─ sub_140267450  "notificationsSince" (18B)   [leaf: cursor ser]
                           │              └─ sub_1403A64F0  (repo+72, buf)               [leaf: write to path]
                           │
                           ├─ sub_140E469E0                                [DEPTH 5, Tauri event dispatch]
                           │    └─ [Tauri runtime event emit]              [term: Tauri runtime boundary]
                           ├─ WakeByAddressSingle                          [leaf: win32 sync primitive]
                           ├─ sub_140102070                                [leaf: cleanup ~40B]
                           └─ sub_140101870                                [leaf: cleanup ~40B]
```

---

## Settings Read Sub-tree (reachable via executor chain)

```
codexmate_settings_hotspot_read_full_sys_111 @ 0x1401A15D0
  ├─ win32_file_read_bytes_111 @ 0x141093260        [leaf: Win32 ReadFile]
  ├─ sub_140002FA0                                   [leaf: JSON parser (serde-json-like)]
  ├─ sub_14103A480 (key="mysteryUnlockGrants",  19B) [leaf: JSON key lookup — optional NEW field]
  ├─ sub_14103A480 (key="mysteryUnlockedRoutes", 21B) [leaf: JSON key lookup — optional NEW field]
  └─ codexmate_settings_field_lookup_sys_111 @ 0x14040CC30
       └─ key="CodexMateSettings" (17B), discriminant len=7
            [term: settings parser leaf]
```

---

## Termination Summary

| Node | Terminated Reason |
|---|---|
| sub_14108D200 | TLS accessor leaf |
| WakeByAddressSingle | Win32 import |
| win32_file_read_bytes_111 | Win32 ReadFile import |
| sub_140002FA0 | JSON parser serde-like, scope leaf |
| sub_14038E240 | 56882B Tauri dispatch, size_limit |
| sub_1403C0BD0 | alternate focus path, size_limit |
| sub_1403EFD40 | drop/cleanup leaf |
| sub_14012CB30 | Rust async runtime join machinery |
| sub_140120390 | Arc join / async runtime machinery |
| sub_1401A1D90 inner callees | field serializers, platform_primitive |
| sub_1403A64F0 | file write, platform_primitive |
