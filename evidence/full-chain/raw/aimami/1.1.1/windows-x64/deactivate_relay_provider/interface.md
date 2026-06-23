# deactivate_relay_provider — Interface & DTO (Windows x64, Gold Leaf)
**Session**: <审计会话>

---

## dim1 — Frontend CCF

| Field | Value |
|---|---|
| Source file | `assets/index-DdcCOEJG.js` line 86 col 119655 |
| Invoke snippet | `vt("deactivate_relay_provider", {providerId: t, ide: e})` |
| Wrapper function | `deactivate(providerId, ide)` (minified static function) |
| Callsite | `Zt.deactivate(b, C)` from `mutationFn` at line 306 |
| IPC kind | `tauriInvoke` |
| argKeys (frontend) | `["providerId", "ide"]` |

**Note**: Frontend sends only `{providerId, ide}`. The `manager` field is resolved server-side by `run_codex_router_diagnostics_owner_sys` — not present in frontend payload.

---

## dim2 — IPC Param Keys + Extractor Functions

| Param | Key string | Key len | Extractor VA | 逆向分析 name |
|---|---|---|---|---|
| manager | `"manager"` @0x1412AC6C0 | 7 | 0x141214620 | `query_installed_skills_with_repo_111` (reused) |
| providerId | `"providerId"` @0x1412AC6C7 | 10 | 0x1402FED40 | `remove_skill_parse_id_param_111` (reused) |
| ide | `"ide"` @0x1412AC727 | 3 | 0x140240B70 | `sub_140240B70` |
| command name | `"deactivate_relay_provider"` @0x1412AC501 | 25 | — | `aDeactivateRela` |

**Extractor contract**: returns `Result<T, E>` with tag byte: `6` = Ok, other = Err. On Err: send error response via `sub_14080C3C0` and return.

---

## dim4 — DTO / Struct Layout

### Manager struct layout (inner ptr = `mgr_ptr[1]`)
| Offset | Size | Field |
|---|---|---|
| +0 | — | (vtable/type tag) |
| +16 | 1B | write-lock byte (WIN futex: InterlockedCompareExchange8 target) |
| +17 | 1B | poison flag |
| +24 | 368B | relay state snapshot (RelayManagerState) |
| +808 | 8B | config write path ptr |
| +816 | 8B | config write path len |

### RelayManagerState snapshot (368 bytes, copied by `sub_141212FB0`)
| Offset / Index | Field |
|---|---|
| v37 (flag byte) | `codex_router_enabled` — Guard 1 target |
| v36, v17 (count fields) | active provider count — Guard 2 target |
| [33..34] [41..42] [45..46] [49..50] [57..58] [61..62] [113..114] [117..118] [97..98] | 9x config parent dir path pairs (ptr, len) |

### Provider list entry layout (compact Vec<String>)
| Offset within entry | Field |
|---|---|
| 0 | ptr (u64) |
| 8 | len (u64) |
| 16 | cap (u64) |
- Array base: `arr[1] + 24` (skip 24-byte Vec header)
- Count: `arr[2]`
- Match: `entry.len == key.len && memcmp(entry.ptr, key.ptr, key.len) == 0`

### Relay draft/test input slot
- Stride: 232 bytes
- Field zeroed on drop: `slot[+88]` (offset 88 = index 11 in u64 array)
- Drop loop: `relay_draft_test_input_drop_sys(@0x1401D6220)` per slot, count from `v103[1]`

### JSON config schema fields (written by `relay_config_serialize_and_atomic_write_sys`)
String refs at 0x1412BFC90:
1. `schemaVersion`
2. `providers`
3. `activeByIde`
4. `proxy`
5. `codexRouterEnabled`
6. `codexApiLogin`
7. `codexApiSlots`
8. `displayTagGlobal`
9. `displayTagWoyao`

---

## dim3 — Call-tree Depth (summary)

Max depth = **6** (handler → core → mutate → persist → serialize → atomic_write/WIN-API).
All branches terminated with explicit reason (see call-tree.md).

---

## dim5 — Error Paths + Guards

| Guard | Location VA | Condition | Error text | Error bytes | Discriminant |
|---|---|---|---|---|---|
| `router_enabled_block` | 0x1406D5E70 | `codex_router_enabled == true` | "当前 Codex 智能路由已开启，禁止操作中转模型，如需操作请关闭 Codex 智能路由。" | 107 @0x1412EBCF0 | 9 |
| `last_active_provider_block` | 0x1406D5E70 | `remaining_active_count == 0` | "无法停用最后一个 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。" | 123 @0x1412EA638 | 9 |
| `poison_panic` | 0x1406D5E70 | `*(v8+17) == 1` | "relay state poisoned" @0x1412EA5ED | 20B | panic (sub_14124BFE0) |
| `atomic_write_missing_parent` | 0x140504310 | parent dir lookup fails | "atomic write: missing parent" @0x1412D9476 | 28B | IoError=9 |
| `parent_dir_missing` | 0x1406F2870 | any of 9 path_exists checks fail | — | — | serialize_err=2 |
| `persist_failed` | 0x1406D5E70 | `relay_providers_config_write_and_persist_sys` != 10 | error copied from persist result | — | 0x8000000000000000 |
| `sync_failed` | 0x1406D5E70 | `relay_post_login_state_sync_sys` != 10 | error code from sync | — | 0x8000000000000000 |

---

## Side Effects

| Type | Target | Operation | VA |
|---|---|---|---|
| in_memory_mutation | relay provider list | compact-remove by providerId (len+memcmp) | 0x14033FB70 |
| in_memory_mutation | manager inner state | snapshot swapped into `mgr_inner+24` (368B copy) | 0x1406E6960 |
| disk_write | relay config JSON | atomic write (UUID-temp + MoveFileEx rename) via path @mgr[808] | 0x140504310 |
| state_machine_drive | relay manager | post-change re-drive via `sub_14073BC50` | 0x1406E1750 |
| memory_free | relay draft/test inputs | per-slot drop (stride 232), count from slot array | 0x1401D6220 |

---

## Locking

| Lock | Target | Mechanism |
|---|---|---|
| Write lock (mutate) | `mgr_inner+16` | `InterlockedCompareExchange8(v8+16, 1, 0)` + `WakeByAddressSingle(v8+16)` |
| Write lock (snapshot swap) | `mgr_inner+16` | same futex pattern, second acquisition in `relay_providers_config_write_and_persist_sys` |
| Write lock (post-sync) | `v6+16` | same futex in `relay_post_login_state_sync_sys` |
| Poison guard | `v8+17` | byte flag, panic if set via `sub_14124BFE0` |
