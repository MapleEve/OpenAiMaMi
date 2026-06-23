# set_hotspot_enabled — Call Tree (Windows x64 1.1.1)

**session**: wf-aimami111-delta-20260617-repair
**root_va**: 0x140022070

---

## Full Call Tree

```
set_hotspot_enabled_ipc_dispatcher_sys          0x140022070  [handler, 1454B]
├── sub_141212FB0                                0x141212FB0  [memcpy/move helper]
├── get_usage_refresh_interval_read_sys_111      0x140089A50  [app path: usage check]
├── sub_14006EDC0                                0x14006EDC0  [repo lock guard acquire]
├── sub_141214620                                0x141214620  [repo two-phase read]
├── sub_14080C3C0                                0x14080C3C0  [error response builder]
├── parse_bool_from_ipc_arg_sys                  0x1402FF1A0  [bool arg decode, field="enabled"]
│   ├── sub_1402F9EB0                            0x1402F9EB0  [arg type discriminant check]
│   ├── sub_1412233C0                            0x141223 3C0 [string → bool converter]
│   └── sub_140E30410                            0x140E30410  [Display trait impl]
├── set_hotspot_enabled_core_impl_sys            0x14060CE60  [core impl]
│   ├── sub_14124A510                            0x14124A510  [mutex wait helper]
│   ├── sub_14124B1D0                            0x14124B1D0  [test mode check]
│   ├── sub_1410B1930                            0x1410B1930  [poisoned lock check]
│   ├── codexmate_settings_hotspot_read_full_sys_111  0x1401A15D0  [settings read]
│   │   ├── sub_141093260                        0x141093260  [hashmap lookup helper]
│   │   ├── sub_140002FA0                        0x140002FA0  [settings map iterate]
│   │   ├── codexmate_settings_field_lookup_sys_111  0x14040CC30  [field lookup: hotspot key]
│   │   ├── sub_14103A480                        0x14103A480  [mysteryUnlockGrants lookup]
│   │   ├── sub_14103A480                        0x14103A480  [mysteryUnlockedRoutes lookup]
│   │   └── sub_14103A580                        0x14103A580  [field update helper]
│   ├── sub_1401A1D90                            0x1401A1D90  [settings struct copy/convert]
│   ├── [enable=true] set_hotspot_enabled_enable_branch_sys  0x14060D750
│   │   ├── sub_140076AD0                        0x140076AD0  [repo state read]
│   │   ├── sub_1410A1B60                        0x1410A1B60  [route string builder: "index.html"]
│   │   ├── sub_14071E3A0                        0x14071E3A0  [route builder: "hotspot"]
│   │   ├── sub_140641090                        0x140641090  [WebView frame step 1]
│   │   ├── sub_14063BD20                        0x14063BD20  [WebView frame step 2]
│   │   ├── sub_1406411C0                        0x1406411C0  [WebView frame step 3]
│   │   ├── sub_14063C790                        0x14063C790  [WebView frame finalize]
│   │   ├── hotspot_ready_state_discriminant_check_sys_111  0x14038D560  [ready state check]
│   │   ├── sub_14061DD90                        0x14061DD90  [error slot drop]
│   │   └── sub_140001360                        0x140001360  [alloc 48B WebviewHandle]
│   ├── [enable=false] sub_140076AD0             0x140076AD0  [disable hotspot store]
│   ├── sub_1403C0BD0                            0x1403C0BD0  [notification build]
│   ├── sub_1403EFD40                            0x1403EFD40  [notification broadcast]
│   ├── WakeByAddressSingle                      0x14124A5D0  [mutex release]
│   ├── sub_14061DD90                            0x14061DD90  [slot drop]
│   └── sub_140E30410                            0x140E30410  [Display trait impl]
├── sub_14082F2D0                                0x14082F2D0  [ok response serializer]
├── sub_140041870                                0x140041870  [cleanup/drop]
├── sub_14033AB50                                0x14033AB50  [waiter loop iter]
├── sub_140001370                                0x140001370  [dealloc helper]
└── sub_140042650                                0x140042650  [final response builder]
```

---

## Key String References

| VA | String | Role |
|---|---|---|
| 0x1412AC47F | `set_hotspot_enabled` | IPC command name |
| 0x1412AC720 | `enabled` | bool arg field name |
| 0x1412AC6D5 | `app` | namespace: app path |
| 0x1412AC6D1 | `repo` | namespace: repo path |
| 0x1412B6EC8 | `CodexMateSettings` (len=7 key) | settings map key |
| 0x1412B684A | `mysteryUnlockGrants` | optional settings field |
| 0x1412B685D | `mysteryUnlockedRoutes` | optional settings field |
| 0x1412E0F58 | `hotspot` | WebView route name |
| 0x1412E0F5F | `index.html` | WebView base route |
