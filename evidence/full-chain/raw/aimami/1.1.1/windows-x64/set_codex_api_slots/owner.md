# set_codex_api_slots — Owner (Windows x64, AiMaMi 1.1.1)

**session**: wf-aimami111-delta-20260616
**machine**: <本地机器>
**binary**: AiMaMi 1.1.1 win64.exe
**binary_sha256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**idb**: <本地路径>
**produced_at**: 2026-06-16

## String Locator

- `"set_codex_api_slots"` @ `0x1412ac5b2` (19B, single match)
- single xref → `set_codex_api_slots_owner_sys@0x14001BDE0` (0x4C1=1217B)

## Dispatcher Confirmation

xrefs_to `0x14001BDE0`:
- `0x1400116cb` (code, fn=`tauri_ipc_main_dispatcher_sys@0x14000D2A0`, 0x45CE=17870B) — main IPC dispatcher call site ✓
- `0x1414fc150` (data, fn=null) — vtable/fn-pointer entry ✓
- `0x14189e3ec` (data, fn=null) — registration table entry ✓

Dispatcher: `tauri_ipc_main_dispatcher_sys@0x14000D2A0` (41-case switch, cyclomatic=151)

## Owner Wrapper VA Table

| Symbol | VA | Size |
|---|---|---|
| `set_codex_api_slots_owner_sys` | `0x14001BDE0` | 0x4C1 (1217B) |
| `set_codex_api_slots_core_dispatch_sys` | `0x140218120` | ~200B |
| `set_codex_api_slots_ok_response_build_sys` | `0x140216BA0` | ~130B |
| relay state write-lock gate | `0x1406D9FC0` | large |
| relay provider slots updater | `0x1406D7860` | large |
| `relay_providers_config_write_and_persist_sys` | `0x1406E6960` | (shared) |

## Parameters

| Param | Key | Len | Type |
|---|---|---|---|
| manager | `"manager"` @ `0x1412ac6c0` | 7B | String |
| slots | `"slots"` @ `0x1412ac75f` (confirmed: 73 6c 6f 74 73) | 5B | Vec\<CodexApiSlot\> |

### CodexApiSlot struct (serde, 2 fields)

- `"struct CodexApiSlot"` @ `0x1412c1b40`
- `"struct CodexApiSlot with 2 elements"` @ `0x1412da0e8`

| Field | Len | Note |
|---|---|---|
| `providerId` | 10B | matches relay provider |
| `model` | 5B | model string per slot |

### Slots Count Constraint

`sub_1406D7860` validates `a4 <= 5` (slots count per provider, max 5).

## IDB Write-back

### Rename (A)
- `sub_14001BDE0` → `set_codex_api_slots_owner_sys` ✓
- `sub_140218120` → `set_codex_api_slots_core_dispatch_sys` ✓
- `sub_140216BA0` → `set_codex_api_slots_ok_response_build_sys` ✓

### Comments (B)
- `0x14001BDE0` — owner evidence ✓
- `0x140218120` — core dispatch evidence ✓
- `0x1406D9FC0` — relay state write-lock evidence ✓
- `0x1406D7860` — relay slots Vec updater evidence ✓

### idb_save
ok=true, path=<本地路径>
