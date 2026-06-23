# set_hotspot_enabled — Owner Evidence (Windows x64 1.1.1)

**session**: wf-aimami111-delta-20260617-repair
**machine**: <本地机器>
**platform**: windows-x64

---

## Owner Function

**Name**: `set_hotspot_enabled_ipc_dispatcher_sys`
**VA**: `0x140022070`
**Size**: 1454 bytes (0x5AE)
**IDB**: `<本地路径>

### Triangulation Evidence

**1. String reference (find_regex)**
- String `"set_hotspot_enabled"` at 0x1412AC47F
- Referenced by handler at 0x1400220F9 (within function 0x140022070): `v43 = aSetHotspotEnab`
- This is the IPC command name used in both app-path and repo-path dispatch

**2. xrefs_to(0x140022070)**
```
0x140010DE1  code  fn=tauri_ipc_main_dispatcher_sys (0x14000D2A0, size=0x45CE)
0x1414FD608  data  (vtable/fn-ptr entry)
0x14189E920  data  (vtable/fn-ptr entry)
```
- Called from the main Tauri IPC dispatcher — this is the canonical entry point for `set_hotspot_enabled`

**3. xrefs_to core impl (0x14060CE60)**
```
0x140022328  code  fn=set_hotspot_enabled_ipc_dispatcher_sys (0x140022070)
0x14162008C  data
0x1418E2558  data
```
- Core impl is exclusively called from the handler — ownership chain confirmed

**4. Decompile confirms command name**
- `aSetHotspotEnab` (0x1412AC47F) = `"set_hotspot_enabled"` appears in both:
  - App path setup (0x1400220F9)
  - Repo path setup (0x140022228)
- `aEnabled` (0x1412AC720) = `"enabled"` is the bool arg field name

### Dispatcher Call Site

```
tauri_ipc_main_dispatcher_sys @ 0x14000D2A0
  call site: 0x140010DE1
  → set_hotspot_enabled_ipc_dispatcher_sys @ 0x140022070
```

---

## Rename Actions Applied

| Old name | New name | VA |
|---|---|---|
| `sub_1402FF1A0` | `parse_bool_from_ipc_arg_sys` | 0x1402FF1A0 |
| (already named) | `set_hotspot_enabled_core_impl_sys` | 0x14060CE60 |
| (already named) | `set_hotspot_enabled_enable_branch_sys` | 0x14060D750 |

IDB saved: `<本地路径>
