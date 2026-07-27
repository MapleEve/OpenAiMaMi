# closed-source-interface-map.md — AiMaMi 1.1.1 Windows-x64 Delta

**session**: <审计会话>
**source bundle**: windows-1.1.1-delta
**produced**: 2026-06-18
**machine**: <本地机器>
**scope**: win-delta.txt 全 54 命令接口聚合（dim2 argKeys + dim4 struct/DTO）
**authority**: win 接口权威参考 — 消费者实现依据

### Coverage

| 分类 | 数量 |
|---|---|
| 总命令数 | 54 |
| 有 argKeys | 33 |
| 有 response fields | 31 |
| 有接口数据（args 或 resp） | 49 |
| high confidence | 33 |
| REMOVED | 1 (get_image_compat) |
| NOT-IPC | 1 (force_kill_codex) |

---

## 约定

- **gate**: gold_leaf > strictImplementationUse > strictImplementationUse_candidate > consumerStartReady > below_consumerStartReady
- **from-gate-report**: 顶层 gate-report.json 来源，非直接 逆向分析 leaf 文件证据
- **REMOVED**: win 1.1.1 binary 无此命令 → 消费者 win 端禁止实现
- **NOT-IPC**: 内部 Rust 函数，非 Tauri invoke，消费者不可直接调用
- **evidence-pointer**: 有逆向证据但 DTO 未完整提取

---

## 接口一览（按 gate 排序）

| # | command | gate | confidence | argKeys | respFields | deltaClass |
|---|---|---|---|---|---|---|
| 1 | `activate_relay_provider` | gold_leaf | high | 3 | 0 | impl_replaced |
| 2 | `deactivate_relay_provider` | gold_leaf | high | 3 | 0 | impl_replaced |
| 3 | `delete_sessions` | gold_leaf | high | 3 | 9 | integrity_recovered |
| 4 | `delete_skill_backup` | gold_leaf | high | 2 | 2 | integrity_recovered |
| 5 | `dismiss_pending_auto_switch` | gold_leaf | high | 7 | 0 | integrity_recovered |
| 6 | `get_mystery_unlock_grants` | gold_leaf | high | 0 | 7 | integrity_recovered |
| 7 | `get_notification_client_state` | gold_leaf | high | 0 | 5 | integrity_recovered |
| 8 | `load_installed_skills` | gold_leaf | high | 0 | 7 | integrity_recovered |
| 9 | `load_mcp_servers` | gold_leaf | high | 0 | 15 | impl_replaced |
| 10 | `load_quota_history` | gold_leaf | high | 2 | 0 | body_changed |
| 11 | `load_relay_state` | gold_leaf | high | 1 | 6 | callee_set_restructure_plus_DTO_field_addition |
| 12 | `load_sessions` | gold_leaf | high | 0 | 9 | new_command |
| 13 | `load_skill_backups` | gold_leaf | high | 0 | 6 | integrity_recovered |
| 14 | `load_snapshot` | gold_leaf | high | 6 | 0 | integrity_recovered |
| 15 | `merge_mystery_unlock_grants` | gold_leaf | high | 4 | 10 | integrity_recovered |
| 16 | `refresh_usage_snapshot` | gold_leaf | high | 0 | 2 | integrity_recovered |
| 17 | `remove_mcp_server` | gold_leaf | high | 2 | 0 | impl_replaced |
| 18 | `remove_skill` | gold_leaf | high | 3 | 1 | new_command |
| 19 | `restore_skill_backup` | gold_leaf | high | 1 | 11 | integrity_recovered |
| 20 | `run_codex_router_diagnostics` | gold_leaf | high | 0 | 9 | new_command |
| 21 | `set_image_compat` | gold_leaf | high | 1 | 0 | integrity_recovered |
| 22 | `set_mcp_server_enabled` | gold_leaf | high | 3 | 0 | impl_replaced |
| 23 | `set_usage_refresh_interval` | gold_leaf | high | 3 | 0 | integrity_recovered |
| 24 | `upsert_mcp_server` | gold_leaf | high | 9 | 1 | dto_and_impl_replaced |
| 25 | `upsert_relay_provider` | gold_leaf | high | 11 | 5 | impl_replaced |
| 26 | `begin_add_account_attach_monitor` | strictImplementationUse | high | 0 | 0 | new_command |
| 27 | `diagnose_codex_router` | strictImplementationUse | high | 0 | 0 | new_command |
| 28 | `hotspot_ready` | strictImplementationUse | high | 0 | 3 | new_command |
| 29 | `restart_codex` | strictImplementationUse | high | 0 | 2 | new_command |
| 30 | `reveal_relay_api_key` | strictImplementationUse | high | 1 | 2 | new_command |
| 31 | `set_auto_switch` | strictImplementationUse | high | 1 | 5 | integrity_recovered |
| 32 | `diagnose` | strictImplementationUse_candidate | medium | 0 | 0 | new_command |
| 33 | `fix_codex_router_issue` | strictImplementationUse_candidate | medium | 2 | 0 | new_command |
| 34 | `get_hotspot_enabled` | strictImplementationUse_candidate | medium | 0 | 1 | new_command |
| 35 | `get_relay_provider_quota` | strictImplementationUse_candidate | medium | 3 | 1 | new_command |
| 36 | `has_notch` | strictImplementationUse_candidate | medium | 0 | 1 | new_command |
| 37 | `import_skill` | strictImplementationUse_candidate | medium | 2 | 6 | integrity_recovered |
| 38 | `parse_aimami_deeplink` | strictImplementationUse_candidate | medium | 11 | 2 | new_command |
| 39 | `reorder_relay_providers` | strictImplementationUse_candidate | medium | 3 | 0 | new_command |
| 40 | `set_codex_router_enabled` | strictImplementationUse_candidate | medium | 3 | 0 | new_command |
| 41 | `get_device_id` | consumerStartReady | medium | 0 | 5 | integrity_recovered |
| 42 | `get_or_create_remote_device_secret` | consumerStartReady | medium | 0 | 2 | integrity_recovered |
| 43 | `set_codex_api_login` | consumerStartReady | medium | 3 | 0 | new_command |
| 44 | `set_codex_api_slots` | consumerStartReady | medium | 4 | 0 | new_command |
| 45 | `set_hotspot_enabled` | consumerStartReady | medium | 1 | 1 | new_command |
| 46 | `set_relay_display_tags` | consumerStartReady | medium | 3 | 0 | new_command |
| 47 | `test_relay_draft_stream` | consumerStartReady | medium | 2 | 0 | new_command |
| 48 | `test_relay_provider_stream` | consumerStartReady | medium | 2 | 4 | new_command |
| 49 | `confirm_pending_auto_switch_and_restart_codex` | below_consumerStartReady | low | 1 | 0 | new_command |
| 50 | `force_kill_codex` | evidence_only | high | 0 | 1 | impl_replaced |
| 51 | `get_image_compat` | evidence_only | high | 0 | 0 | command_removed |
| 52 | `graceful_restart_for_update` | evidence_only | low | 0 | 4 | new_command |
| 53 | `import_accounts_from_file` | evidence_only | medium | 3 | 0 | new_command |
| 54 | `import_chatgpt_session_account` | evidence_only | low | 0 | 0 | new_command |

---

## 接口详情（按 win-delta.txt 顺序）

### `activate_relay_provider`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `impl_replaced`
- **readyToImplement**: `False`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140017EC0`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `manager`, `providerId`, `ide`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - disk_write

**note**: goldleaf 补全：owner(1486B)+build_response+core_and_persist+write_persist+serialize_under_lock+atomic_write 全量逆向；call_tree depth=6 edges=29；6新callee vs sweep已记录；ipc_params=[manager,providerId,ide]；stride 232B；idb renamed+commented+saved

**逆向分析 symbols**: `handler@0x140017EC0`, `activate_relay_provider_owner_sys`, `run_codex_router_diagnostics_owner_sys@0x14006F4B0`, `activate_relay_provider_build_response_sys@0x14021B9B0`, `relay_activate_core_and_persist_sys@0x1406E7880`

---

### `begin_add_account_attach_monitor`

- **gate**: `strictImplementationUse`
- **confidence**: high
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140013a60`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - schtasks.exe (Windows task scheduler)
  - CloseHandle
  - WakeByAddressSingle

**note**: gate=strictImplementationUse. dim2/3/4/5 all closed. dim1 pending frontend CCF. account_stride=360B. Win unique: schtasks.exe + CloseHandle + WakeByAddressSingle. goldleaf path accounts/.

**逆向分析 symbols**: `handler@0x140013a60`

---

### `confirm_pending_auto_switch_and_restart_codex`

- **gate**: `below_consumerStartReady`
- **confidence**: low
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `input`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - WakeByAddressSingle
  - macOS 1.0.9 使用 6-phase 线性协程，win 1.1.1 使用 4-state outer + nested sub-state（差异）
  - `_InterlockedIncrement64`, `WakeByAddressSingle`, `__imp_CloseHandle`, `RtlFailFast` 均为 Win32-only 路
  - macOS 等价路径使用 futex/park-thread 的 pthread 变体（不可外推）
  - relay provider vtable stride 逻辑 (472/704 byte offset) 是 win 特有，mac 需独立验证

---

### `deactivate_relay_provider`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `impl_replaced`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x14001F940`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `manager`, `providerId`, `ide`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - in_memory_mutation
  - disk_write
  - state_machine_drive
  - memory_free
  - Lock

**note**: goldleaf 补全：全 6 dim 闭合；2 new callees vs 1.0.9（relay_config_check_parent_dirs_sys/relay_draft_test_input_drop_sys）；3 guards documented；ipc_params=[manager,providerId,ide]；stride 232B；readyToImplement=true

**逆向分析 symbols**: `handler@0x14001F940`

---

### `delete_sessions`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140023F80`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `name`, `repo`, `ids`

**response fields (dim4)**:
  - offset|size|field|
  - function|VA|role|
  - win32_file_read_bytes_111|0x141093260|read thread state file (OS I/O leaf)|
  - win32_file_write_bytes_111|0x141093710|persist updated thread state (OS I/O leaf)|
  - win32_path_canonicalize_111|0x1410908e0|path canonicalization in snooze_file_delete path|
  - snooze_file_delete_win32_111|0x14108f810|calls DeleteFileW / SetFileInformationByHandle|
  - DeleteFileW|0x14124d830|Win32 delete (external, terminated_reason=OS)|
  - SetFileInformationByHandle|0x14124d118|Win32 posix-delete fallback (external)|
  - GetLastError|0x14124d708|Win32 error check after file ops|

**side effects**:
  - db_write
  - db_write
  - file_read
  - file_write
  - file_read
  - file_delete

**note**: goldleaf 补全：新增 DELETE FROM thread_spawn_edges cascade SQL + delete_sessions_build_session_list_111(rollout.json scan)；SSE2 SIMD path-normalize confirmed；ipc_params=[repo,ids]；depth=6 all branches terminated

**逆向分析 symbols**: `handler@0x140023F80`, `handler@{'func': 'delete_sessions_handler_111', 'idb_name': 'delete_sessions_owner_sys', 'va': '0x140023f80', 'size': '0x511'}`

---

### `delete_skill_backup`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140024D90`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `repo`, `id`

**response fields (dim4)**:
  - deletedBackupID: string;        // the id that was deleted
  - remainingBackupCount: number;   // u32: count of backups remaining after deletion

**side effects**:
  - Path encoding: UTF-8 → UTF-16 OsString via snooze_file_open_111 (CreateFileW)
  - Directory read: ReadDirectoryChangesW adapter (sub_140672D70 / sub_14108C7E0)
  - Win32 primitives: CloseHandle, WakeByAddressSingle, _InterlockedDecrement64
  - Sort: same two-path sort (n<21 / n≥21) as macOS build — binary-level identical logic

**note**: goldleaf 补全：response DTO 变更（bare ok/Success → deletedBackupID+remainingBackupCount）；新 response serializer@0x140211890；sort_unstable post-delete(n<21:insertion/n≥21:pdq)；ipc_params=[repo,id]

**逆向分析 symbols**: `handler@0x140024D90`, `delete_skill_backup_owner_sys`

---

### `diagnose`

- **gate**: `strictImplementationUse_candidate`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x14078EE90`
- **evidence**: `manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - none / not extracted

**note**: gate=strictImplementationUse_candidate; call_tree_depth=4; system/ subdir leaf; gate_accepted=false

**逆向分析 symbols**: `handler@0x14078EE90`

---

### `diagnose_codex_router`

- **gate**: `strictImplementationUse`
- **confidence**: high
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140021AE0`
- **evidence**: `manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - none / not extracted

**note**: gate upgraded to strictImplementationUse from evidence_only; owner@0x140021AE0(911B)+core_engine@0x140218E30; call_tree_depth=3

**逆向分析 symbols**: `handler@0x140021AE0`, `core_engine@0x140218E30`

---

### `dismiss_pending_auto_switch`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140029270`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `currentAccountKey`, `candidateAccountKey`, `dismissedAt`, `optional`, `Dimension`, `readyToImplement`, `strictImplementationUse`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - READ
  - WRITE
  - DELETE

**note**: goldleaf 补全：5 new callees vs 1.0.9（snooze_file_delete/win32_file_write/GetSystemTimePreciseAsFileTime/elapsed_since_ts/io_error_classify）；new persistence artifact auto-switch-snooze.json；新 return variant RestartNeeded；new ipc param 'repo'；depth=7

**逆向分析 symbols**: `handler@0x140029270`

---

### `fix_codex_router_issue`

- **gate**: `strictImplementationUse_candidate`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `True`
- **evidence**: `manifest.json`

**argKeys (dim2)**:
  `manager`, `itemId`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - CodexPaths resolution (pure)
  - RelayManager state snapshot (read-only mutex)
  - is_process_running check: sub_140504DA0(Codex,5) (read-only)
  - fix_config_stale_text_sys: read_to_string + atomic_write (FS write)
  - resync_codex_config_sys: write_catalog + apply_codex_state (FS write)
  - fix_all_sections_impl_full_sys: fix_auth_integrity inlined (conditional FS copy/write), RegOpenKeyEx
  - Conditional: quit_codex_poll_wait_sys_111 (process kill, poll @50ms 5s, fallback kill) when process
  - Conditional: check_update_installability_launch_sys_111 (process spawn 10-path scan, poll @80ms 5s)

**note**: depth session 补全：owner@0x1400246B0 全量逆向；argKeys=[manager,itemId]；前端 CCF migrated from 1.0.9；no_gate_promotion_to_ready=true（dim6 absent）；gate 从 dispatcher_confirmed_only 升至 strictImplementationUse_candidate

---

### `force_kill_codex`

- **gate**: `evidence_only`
- **confidence**: high
- **delta_class**: `impl_replaced`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x14079FF10`
- **evidence**: `gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - internal-only: Ok(tag=10) or Err(CODEX_FORCE_KILL_FAILED, tag=9)

**side effects**:
  - taskkill /IM Codex.exe (soft)
  - CreateToolhelp32Snapshot + Process32NextW (hard kill)
  - WakeByAddressSingle

**note**: NOT a Tauri IPC command - internal Rust call only. Two-phase kill: soft (taskkill /IM no /F) then hard pid-enumerator loop. owner=quit_codex_taskkill_imagename_sys_111@0x14079FF10

**逆向分析 symbols**: `handler@0x14079FF10`, `quit_codex_taskkill_imagename_sys_111`

---

### `get_device_id`

- **gate**: `consumerStartReady`
- **confidence**: medium
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x1400208C0`
- **evidence**: `gate-report.json, manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - hotspot
  - usageRefreshInterval
  - deviceId
  - remoteDeviceSecret
  - notificationsSince；call_tree_depth=5

**side effects**:
  - none / not extracted

**note**: sweep session；gate_result=pass；5 response fields: hotspot/usageRefreshInterval/deviceId/remoteDeviceSecret/notificationsSince；call_tree_depth=5

**逆向分析 symbols**: `handler@0x1400208C0`

---

### `get_hotspot_enabled`

- **gate**: `strictImplementationUse_candidate`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - path|semantics|

**errors**:
  - `condition`

**side effects**:
  - **None** — read-only
  - No file write, no keychain, no HTTP, no mutex held after return
  - Mutex: `_InterlockedCompareExchange8` acquire → read → `WakeByAddressSingle` release (Windows mutex
  - aspect
  - `HotspotConfig` contains `enabled: bool` as a field in `CodexMateSettings` hashmap value
  - Settings key = "hotspot" (7 bytes)
  - Storage: `CodexMateSettings` map under `~/.codex/` settings persistence (via `codexmate_settings_fie
  - Additional optional fields: `mysteryUnlockGrants`, `mysteryUnlockedRoutes` (read alongside hotspot c

**note**: 旧结论 macOS-only 已推翻，win 1.1.1 有实体 backend handler@0x140021570

---

### `get_image_compat`

- **gate**: `evidence_only`
- **confidence**: high
- **delta_class**: `command_removed`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - none / not extracted

**note**: REMOVED in win 1.1.1. IPC command absent from dispatch table. In 1.0.9 routed via 41-case dispatch. set_image_compat still present in 1.1.1.

---

### `get_mystery_unlock_grants`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140023560`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - hotspot (string)
  - usageRefreshInterval (number, e.g. 86400000)
  - deviceId (string)
  - remoteDeviceSecret (string)
  - notificationsSince (string)
  - apiProxy (string|null)
  - mysteryUnlockGrants (array: {route:string, expiresAtMs?:number})

**side effects**:
  - none / not extracted

**note**: goldleaf 补全：NEW command (absent 1.0.9)；response DTO={hotspot,usageRefreshInterval,deviceId,remoteDeviceSecret,notificationsSince,apiProxy,mysteryUnlockGrants}；MysteryUnlockGrant stride=40B；grant expiry filter conditional write；dim6 pass

**逆向分析 symbols**: `handler@0x140023560`, `handler@{'va': '0x140023560', 'idb_name': 'get_mystery_unlock_grants_handler_111', 'size_bytes': 895, 'ipc_string_va': '0x1412AC39A', 'registered_in': 'tauri_ipc_main_dispatcher_sys @ 0x14000D2A0', 'sweep_bucket_va_correction': 'sweep va_111=0x140789210 was wrong — that is a generic Result-unwrap shim at owner+0x12B'}`

---

### `get_notification_client_state`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x140122010`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - hotspot (bool)
  - usageRefreshInterval (u64, NEW vs 1.0.9)
  - deviceId (string|null)
  - remoteDeviceSecret (string|null, NEW vs 1.0.9)
  - notificationsSince (string|null, NEW vs 1.0.9)

**side effects**:
  - none / not extracted

**note**: Zero-arg, pure state query. 3 NEW fields vs 1.0.9. serializer@0x1401A1D90.

**逆向分析 symbols**: `handler@0x140122010`, `get_notification_client_state_async_poll_sys_111`

---

### `get_or_create_remote_device_secret`

- **gate**: `consumerStartReady`
- **confidence**: medium
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x14000E335`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - Ok(string: 65-char secret "{hex32}-{hex32}")
  - Err(IoErr/ParseErr)

**side effects**:
  - disk_write (hotspot config JSON, conditional)
  - reads app settings file

**note**: 内部构建-extra command (not upstream codex)；previously mis-classified same；managed_state_key=dev.aimami.auto-switch；UUID format + settings write scope changed；gate_result=PASS；root goldleaf version gate_tier=full_leaf

**逆向分析 symbols**: `handler@0x14000E335`, `handler@0x14078CD70`

---

### `get_relay_provider_quota`

- **gate**: `strictImplementationUse_candidate`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `param`, `manager`, `providerId`

**response fields (dim4)**:
  - offset|size|rust type (inferred)|field semantic|

**errors**:
  - `panic`
  - `string`

**side effects**:
  - Reads relay state (in-memory, immutable from quota-fetch perspective): no write to state Vec
  - Reads `secrets.json` from disk via `relay_keychain_lookup_for_quota_sys`
  - Reads environment variables: `USER`, `USERNAME` (keychain fallback path)
  - Computes SHA-256 of API key (SIMD byte-swap path, 32B alloc)
  - Debug log gate: `*off_141899A88 > 2` → logging active (no external write observed)
  - HTTP request builder: constructs outbound HTTP request (headers + body); no observed local write sid
  - aspect
  - discriminant

---

### `graceful_restart_for_update`

- **gate**: `evidence_only`
- **confidence**: low
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `{'name': 'restart_codex_cmd_wrapper_sys_111', 'va': '0x14001AE30', 'size_bytes': 547}`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - Leaf|Terminated Reason|
  - `get_codex_pids_toolhelp_sys_111`|CreateToolhelp32Snapshot returns INVALID_HANDLE or Process32NextW exhausted|
  - `quit_codex_fallback_kill_sys_111`|No Codex PIDs remaining OR 3s deadline exceeded|
  - `check_update_installability_launch_sys_111`|"Codex.exe not found" OR process appeared in 5s poll OR spawn failed|

**side effects**:
  - none / not extracted

**逆向分析 symbols**: `handler@{'name': 'restart_codex_cmd_wrapper_sys_111', 'va': '0x14001AE30', 'size_bytes': 547}`

---

### `has_notch`

- **gate**: `strictImplementationUse_candidate`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x140023000`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - bool (always true on win; mac/win platform fork)

**side effects**:
  - none / not extracted

**note**: Win fixed return bool true. mac/win platform fork confirmed. owner@0x140023000(863B). dim1 migrated 1.0.9.

**逆向分析 symbols**: `handler@0x140023000`

---

### `hotspot_ready`

- **gate**: `strictImplementationUse`
- **confidence**: high
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140016720`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - genuine_ceiling (bool)
  - accepted_unknown (bool)
  - real_body_found (bool)

**errors**:
  - `Condition`
  - `Caller`
  - `VA`
  - `Dim`
  - `dim1`
  - `dim2`
  - `dim3`
  - `dim4`
  - `dim5`
  - `dim6`

**side effects**:
  - none / not extracted

**逆向分析 symbols**: `handler@0x140016720`

---

### `import_accounts_from_file`

- **gate**: `evidence_only`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x140961470`
- **evidence**: `manifest.json`

**argKeys (dim2)**:
  `filePath`, `overwriteExisting`, `selectedKeys`

**response fields (dim4)**:
  _(not extracted; see note)_

**errors**:
  - `RUNTIME_REFRESH_FAILED_AFTER_IMPORT (win 1.1.1 new error)`

**side effects**:
  - relay_provider_vtable_dispatch
  - atomic_ops (_InterlockedIncrement64)

**note**: handler VA 0x140961470 (6063B). New in 1.1.1: relay provider vtable concurrent import path via off_141899420

**逆向分析 symbols**: `handler@0x140961470`

---

### `import_chatgpt_session_account`

- **gate**: `evidence_only`
- **confidence**: low
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x140953280`
- **evidence**: `reverse.md`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - none / not extracted

**note**: ceiling_cracked: HexRays decompile failed (160 BB). Disasm analysis 939 instructions, all BB enumerated. owner@0x140953280. Full call tree extracted but dim4 DTO partial.

**逆向分析 symbols**: `handler@0x140953280`

---

### `import_skill`

- **gate**: `strictImplementationUse_candidate`
- **confidence**: medium
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `True`
- **strictImplementationUse**: `False`
- **owner VA**: `0x14001CA50`
- **evidence**: `gate-report.json, manifest.json`

**argKeys (dim2)**:
  `repo`, `path`

**response fields (dim4)**:
  - backupID
  - skillID
  - name
  - title
  - relativePath
  - createdAt

**errors**:
  - `Directory must contain SKILL.md`
  - `Must be a directory with SKILL.md or a SKILL.md file`
  - `Invalid skill source`

**side effects**:
  - win32_file_read_bytes_111: reads SKILL.md bytes
  - snooze_file_backup_copy_111 / CopyFileExW: recursively copies skill files to installed dir
  - sub_1403A6410: writes InstalledSkillSummary JSON to installed_skills table (path 0x1412EC051)
  - uuid_v4_generate_raw_sys: generates new backupID UUID per import
  - sub_14108C150: fires event notification after successful install (new in 1.1.1)
  - pending_auto_switch_state_lock_acquire_111: holds auto-switch lock for duration of import

**note**: status=readyToImplement；interface_delta: 1.0.9={path:string} → 1.1.1={repo:string,path:string}；ADDED repo parameter

**逆向分析 symbols**: `handler@0x14001CA50`, `import_skill_cmd_111`

---

### `load_installed_skills`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x14002A100`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - backupID (string)
  - skillID (string)
  - name (string)
  - title (string)
  - summary (string)
  - relativePath (string)
  - directoryPath (string)

**side effects**:
  - filesystem_read

**note**: goldleaf 补全：PATH_B (sub_1407DD060 bootstrap-cache write-back) was missing from sweep；1.1.1 NOT pure read-only when pending_auto_switch active；new callees pending_auto_switch_state_lock_acquire+sub_1407DD060；dim4 PASS_PARTIAL（2 fields unresolved）

**逆向分析 symbols**: `handler@0x14002A100`, `handler@{'name': 'load_installed_skills_cmd_111', 'va': '0x14002A100', 'size_bytes': 911, 'string_anchor': '0x1412AC157', 'ipc_dispatch_xref': '0x14002A180'}`

---

### `load_mcp_servers`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `impl_replaced`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x14001C4C0`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - `name`|+0|String|
  - `transport`|+217|u8 enum|
  - `enabled`|+216|u8 bool|
  - `sourcePath`|+24|String|
  - `command`|+72|Option\<String\>|
  - `args`|+48|Option\<Vec\<String\>\>|
  - `url`|+96|Option\<String\>|
  - `headers`|+120|HashMap\<String,String\>|
  - `environment`|+168|HashMap\<String,String\>|
  - `id`|+16|String|
  - `name`|+40|String|
  - `title`|+136|Option\<String\>|
  - `summary`|+160|Option\<String\>|
  - `relativePath`|+64|String|
  - `directoryPath`|+88|String|

**errors**:
  - `Code`

**side effects**:
  - none / not extracted

**note**: goldleaf 补全：整条 load_mcp_servers_write_snapshot_111 branch 是 1.1.1 新增；new DTO fields McpServer.transport/enabled InstalledSkill.title/summary SkillSnapshot.usageAnalytics；mcp_config_toml_parse_and_remove_111@0x1406790D0 new callee；TOML+snapshot double write new side-effects

**逆向分析 symbols**: `handler@0x14001C4C0`, `handler@{'va': '0x14001c4c0', 'ida_name': 'load_mcp_servers_owner_sys', 'previous_name': 'load_mcp_servers_handler_111', 'string_anchor': '0x1412ac10f', 'idb': '<本地路径>'}`

---

### `load_quota_history`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `body_changed`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x140020E40`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `accountKey(frontend)`, `repo(server-side)`

**response fields (dim4)**:
  _(not extracted; see note)_

**errors**:
  - `condition`

**side effects**:
  - none / not extracted

**note**: goldleaf 补全；delta_class 从 integrity_recovered 修正为 body_changed：新增 7-day retention filter + accountKey filter + max-2000 trim-rewrite；QuotaHistoryPoint 953B/24 fields；ipc_params=[accountKey(frontend),repo(server-side)]；HIGH risk（消费者静默丢失7天前数据）

**逆向分析 symbols**: `handler@0x140020E40`, `handler@{'va': '0x140020E40', 'name_renamed': 'load_quota_history_owner_sys', 'idb_comment': 'gold-leaf for load_quota_history; sha d24e429a; session <审计会话>; not gate promotion', 'size_bytes': '0x511', 'ipc_registration': 'tauri_ipc_main_dispatcher_sys @ 0x14000db63', 'vtable_entries': ['0x1414fd1e4', '0x14189e824']}`

---

### `load_relay_state`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `callee_set_restructure_plus_DTO_field_addition`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140015870`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `a1`

**response fields (dim4)**:
  - `schemaVersion`|`a2+440`|u32/bool|有|有|
  - `success`|`a2+444`|bool|有|有|
  - `code`|`a2+0`|string|有|有|
  - `message`|`a2+24`|string|有|有|
  - `warnings`|`a2+48`|array?|**无**|**新增**|
  - `data`|`a2+72`|object (368 bytes)|有|有|

**side effects**:
  - disk_write
  - TCP/HTTP

**note**: goldleaf 补全；4 new callees vs 1.0.9（query_installed_skills_with_repo/relay_config_connection_refresh_and_write/relay_config_serialize_and_atomic_write/relay_response_field_warnings_write）；new DTO field 'warnings'@a2+48；新 side-effects：disk_write(relay JSON每次load触发)+TCP_connect_probe(300ms)；readyToImplement=true dim6 pass

**逆向分析 symbols**: `handler@0x140015870`, `handler@{'symbol': 'load_relay_state_ipc_handler_111', 'va': '0x140015870', 'size_bytes': 911, 'string_anchor': '0x1412AC4B0', 'string_anchor_string': 'load_relay_state', 'xref_from': '0x1400158F0', 'xref_count': 1, 'module_string': 'codexmate_lib::core::relay::manager', 'module_string_va': '0x1412EA8F8', 'source_path_string': 'src\\core\\relay\\manager.rs', 'source_path_va': '0x1412EA601'}`

---

### `load_sessions`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `new_command`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140992490`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - codexHome (string|null)
  - accountsPath (string|null)
  - authPath (string|null)
  - registryPath (string|null)
  - sessionsPath (string|null)
  - autoSwitchLogPath (string|null, NEW in 1.1.1)
  - sessions (array)
  - pendingAutoSwitch (object|null)
  - skillsInfo (object)

**errors**:
  - `condition`

**side effects**:
  - filesystem_read (CodexHomePaths 9 fields, autoSwitchLogPath NEW)

**note**: goldleaf 补全；NEW command in 1.1.1 windows；CodexHomePaths struct 9 fields（1.0.9=8）；new field autoSwitchLogPath@offset144；new callees: pending_auto_switch_state_lock/query_installed_skills_with_repo/skill_store_get_all/load_session_analytics_impl；dim4 dto confirmed

**逆向分析 symbols**: `handler@0x140992490`

---

### `load_skill_backups`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x140028120`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - schemaVersion (u32)
  - success (bool)
  - code (u32)
  - message (string)
  - warnings (string[])
  - data (SkillBackupListPayload|null)

**errors**:
  - `Condition`

**side effects**:
  - filesystem_read

**note**: Zero-arg. repo context from handler ctx+520 internally. handler=load_skill_backups_owner_sys@0x140028120.

**逆向分析 symbols**: `handler@0x140028120`, `load_skill_backups_owner_sys`, `load_skill_backups_wrap_and_dispatch_111@0x1408333E0`

---

### `load_snapshot`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x1409656E0`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `schema_version`, `written_at`, `snapshot_progressive`, `usage_analytics`, `mcp_servers`, `installed_skills`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - TCP/HTTP

**note**: goldleaf 补全；4 delta findings：snapshotProgressive field NEW, Account struct 336B(3 new optional timestamps), refresh_usage_snapshot_core_111 整条新并行管道(HTTP fetch+dedup+disk persist quota history)；owner decompile failed hex-rays但 async body 0x140796310 fully decompiled；depth=8 all paths terminated

**逆向分析 symbols**: `handler@0x1409656E0`, `handler@{'va': '0x1409656E0', 'size': '0xed9', 'basic_blocks': 133, 'decompile_status': 'TOO_LARGE — hex-rays failure (3801 bytes, 133 basic blocks)', 'string_anchor': '0x1412faa1b', 'string_xref_in_owner': '0x1409657aa', 'effective_owner_decompiled': '0x140796310 (load_snapshot_async_body_111)'}`

---

### `merge_mystery_unlock_grants`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x1400254C0`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `repo`, `grants`, `key`, `value`

**response fields (dim4)**:
  - elapsed_ms: number;  // merge latency in milliseconds
  - `mcp`|3|inline byte cmp|no|
  - `skills`|6|inline uint32+uint16 cmp|no|
  - `overview`|8|QWORD cmp|no|
  - `accounts`|8|QWORD cmp|no|
  - `sessions`|8|QWORD cmp|no|
  - `settings`|8|QWORD cmp|no|
  - `maintenance`|11|2x QWORD overlap cmp|no|
  - `subscription`|12|QWORD+DWORD cmp|no|
  - `customInstructions`|18|SSE2 SIMD (`xmmword_1412B5240`)|**YES**|

**side effects**:
  - Effect
  - Windows-only: `_InterlockedCompareExchange8`, `WakeByAddressSingle`, `GetSystemTimePreciseAsFileTime
  - Corresponding macOS path: separate binary (mac leaf verified in parallel session)
  - No `#[cfg(windows)]` visible at Rust level — binary is windows-x64 exclusive

**note**: goldleaf 补全；sweep 误分类 same；实际6大 app-level changes：pending_auto_switch gate NEW/mystery_grant_mutex NEW/hotspot_merge_grants NEW(atomic read-modify-write)/customInstructions grant key NEW(18chars)/mysteryUnlockedRoutes DTO field NEW/elapsed telemetry NEW；hotspot config 扩展为7字段文档

**逆向分析 symbols**: `handler@0x1400254C0`, `handler@{'symbol': 'merge_mystery_unlock_grants_owner_sys', 'va': '0x1400254C0', 'size_bytes': '0x4B1', 'ipc_command_string_va': '0x1412AC3B3', 'ipc_command_string': 'merge_mystery_unlock_grants', 'idb_renamed': True, 'idb_commented': True}`

---

### `parse_aimami_deeplink`

- **gate**: `strictImplementationUse_candidate`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `url`, `Component`, `scheme`, `path`, `resource`, `app`, `name`, `endpoint`, `apiKey`, `model`, `aimami`

**response fields (dim4)**:
  - status: "ok";       // 2B string "ok" (0x6B6F LE)
  - result: "success";  // 7B string (see deeplink_success_response_build_sys)

**side effects**:
  - relay_provider_hashmap_insert_sys @ 0x140730900
  - Target: TLS-based AppState at `TLS[TlsIndex] + 584` = relay_providers HashMap
  - Implementation: Robin-Hood SIMD insert via sub_1403703F0 (sub_140624F90 = hash)
  - **NO config.toml write, NO secrets.json write, NO fs side-effect from parse_aimami_deeplink_core_sys
  - The provider is inserted into the runtime in-memory relay state only
  - Persistence would require a subsequent upsert_relay_provider call (separate IPC command)
  - No HTTP outbound call from this command
  - No IPC relay to other commands

---

### `refresh_usage_snapshot`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x140984C40`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - usageAttemptCount (u32, NEW vs 1.0.9)
  - CoreEnvelope wrapper: schemaVersion/success/code/message/warnings/data

**side effects**:
  - HTTP/network (usage data fetch)
  - disk_write

**note**: Zero-arg. 1.1.1 delta: new usageAttemptCount field. Formatter@0x140E30410 (UsageResult, 0x25 variants).

**逆向分析 symbols**: `handler@0x140984C40`, `handler@{'name': 'refresh_usage_snapshot_owner_sys', 'va': '0x140984C40', 'size_bytes': 4062, 'basic_blocks': 123, 'decompile_status': 'FAILED_hex_rays', 'reconstruction_method': 'callees + basic_blocks + string_xrefs', 'idb_renamed': True, 'idb_commented': True}`

---

### `remove_mcp_server`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `impl_replaced`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x140019040`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `name`, `repo`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - filesystem_write (codex-router TOML)
  - SQLite_write

**逆向分析 symbols**: `handler@0x140019040`, `handler@{'ipc_handler': {'name': 'remove_mcp_server_owner_sys', 'idb_original_name': 'remove_mcp_server_ipc_handler_111', 'va': '0x140019040', 'size_bytes': '0x4C1', 'idb_comment': 'gold-leaf for remove_mcp_server; sha d24e429a; session <审计会话>; not gate promotion'}, 'exec': {'name': 'remove_mcp_server_exec_111', 'va': '0x1401C4F40', 'size_bytes': '0x755'}, 'ok_builder': {'name': 'build_remove_mcp_server_ok_result_111', 'va': '0x1402161B0', 'size_bytes': '0x115'}}`

---

### `remove_skill`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x140022920`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `param`, `repo`, `id`

**response fields (dim4)**:
  - condition|response|

**side effects**:
  - none / not extracted

**逆向分析 symbols**: `handler@0x140022920`, `remove_skill_owner_sys`

---

### `reorder_relay_providers`

- **gate**: `strictImplementationUse_candidate`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `True`
- **owner VA**: `0x14001D5E0`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `param`, `manager`, `orderedIds`

**response fields (dim4)**:
  _(not extracted; see note)_

**errors**:
  - `error`

**side effects**:
  - Fields written: schemaVersion, providers (reordered), activeByIde, proxy, codexRouterEnabled, codexA
  - atomic: uses temp file + rename (GetCurrentProcessId in temp name)
  - stride = 232B per RelayProvider entry
  - fields hashed via sub_140624F90 (Robin-Hood SIMD, 0x945CA2F02A2B6F44uLL mask)
  - cloned via sub_1410A2210 (232B copy)
  - aspect
  - frontend invokes: `invoke("reorder_relay_providers", { manager, orderedIds })`
  - response: null/unit on success (frontend discards payload, invalidates relay list query)

**逆向分析 symbols**: `handler@0x14001D5E0`

---

### `restart_codex`

- **gate**: `strictImplementationUse`
- **confidence**: high
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `True`
- **owner VA**: `0x14001AE30`
- **evidence**: `manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - Ok(tag=3)
  - Err(CODEX_APP_QUIT_TIMEOUT=0x8000000000000000,tag=6)

**errors**:
  - `CODEX_APP_QUIT_TIMEOUT`
  - `codex_not_found (Codex.exe not found)`
  - `taskkill_timeout (kill deadline exceeded)`

**side effects**:
  - WakeByAddressSingle (quit signal)
  - taskkill /IM Codex.exe (soft)
  - taskkill /F /T /PID (hard per-pid, 3s deadline)
  - CreateToolhelp32Snapshot + Process32FirstW/NextW

**note**: Zero args. CCF: invoke("restart_codex") confirmed. Six-phase win quit flow. owner=restart_codex_cmd_wrapper_sys_111@0x14001AE30. strictImplementationUse (dim6 missing).

**逆向分析 symbols**: `handler@0x14001AE30`, `restart_codex_cmd_wrapper_sys_111`, `restart_codex_quit_launch_coordinator_sys_111@0x1407838D0`

---

### `restore_skill_backup`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `{'name': 'restore_skill_backup_owner_sys', 'prior_name': 'restore_skill_backup_handler_111', 'addr': '0x1400201E0', 'size_bytes': '0x4C1', 'string_anchor': '0x1412AC196', 'xref_dispatch': '0x14000F4C4', 'dispatcher': 'tauri_ipc_main_dispatcher_sys @ 0x14000D2A0'}`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `id`

**response fields (dim4)**:
  - restoredSkill: InstalledSkillSummary;  // skill metadata after restore
  - backup: SkillBackupSummary;            // backup record used for restore
  - rollbackBackup: SkillBackupSummary | null;  // NEW: rollback tracking entry
  - backupID: string;      // UUID v4, BCryptGenRandom via ProcessPrng @ 0x140F5A860
  - skillID: string;       // from SKILL.md parse
  - name: string;          // from SKILL.md parse
  - title: string;         // from SKILL.md parse
  - relativePath: string;  // from SKILL.md parse
  - createdAt: number;     // u64 timestamp, system_time_precise_u32_111 @ 0x14107B7E0
  - deletedBackupID: string;        // string @ 0x1412C0992
  - remainingBackupCount: number;   // string @ 0x1412C09A1

**errors**:
  - `Addr`

**side effects**:
  - Effect
  - Timestamp

**逆向分析 symbols**: `handler@{'name': 'restore_skill_backup_owner_sys', 'prior_name': 'restore_skill_backup_handler_111', 'addr': '0x1400201E0', 'size_bytes': '0x4C1', 'string_anchor': '0x1412AC196', 'xref_dispatch': '0x14000F4C4', 'dispatcher': 'tauri_ipc_main_dispatcher_sys @ 0x14000D2A0'}`

---

### `reveal_relay_api_key`

- **gate**: `strictImplementationUse`
- **confidence**: high
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `True`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `providerId`

**response fields (dim4)**:
  - apiKey (string)
  - ok (bool)

**side effects**:
  - none / not extracted

---

### `run_codex_router_diagnostics`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `new_command`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `0x14006f4b0`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  _(zero-arg; see note)_

**response fields (dim4)**:
  - status: "ok"
  - kind: "Success"
  - data: DiagnosticData (32B, 2x __m128i)
  - data.config_parse_results
  - data.path_existence_results (29 paths)
  - data.base_url_validation
  - data.mode_validation
  - data.relay_keychain_status
  - data.router_consistency_judgment

**side effects**:
  - reads router config.toml
  - filesystem path existence checks (29 paths)

**note**: Zero args. CCF: s("run_codex_router_diagnostics") confirmed. gold_leaf gate. Response 32-byte struct.

**逆向分析 symbols**: `handler@0x14006f4b0`

---

### `set_auto_switch`

- **gate**: `strictImplementationUse`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `False`
- **strictImplementationUse**: `True`
- **owner VA**: `{'name': 'set_auto_switch_owner_sys', 'name_prev': 'cmd_set_auto_switch_111', 'renamed_in_idb': True, 'va': '0x1400286B0', 'size_bytes': '0x501', 'string_anchor': '0x1412AC1F1', 'xref_from': '0x140028732', 'idb_comment': 'gold-leaf for set_auto_switch; sha d24e429a; session <审计会话>; not gate promotion'}`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `enabled`

**response fields (dim4)**:
  - bundle_name:     "dev.aimami.auto-switch"  // 22-byte heap alloc, NEW IN 1.1.1
  - enabled:         bool  (= enabled & 1)
  - schtask_running: u8    (0=running, 1=other, 2=not_found)
  - updatedAt_low:   u32   // system_time_precise_u32_111 low
  - updatedAt_high:  u32   // elapsed_since_ts_111 high

**side effects**:
  - none / not extracted

**note**: gate_tier=full_leaf (not gold_leaf)；sIU=true rTI=false

**逆向分析 symbols**: `handler@{'name': 'set_auto_switch_owner_sys', 'name_prev': 'cmd_set_auto_switch_111', 'renamed_in_idb': True, 'va': '0x1400286B0', 'size_bytes': '0x501', 'string_anchor': '0x1412AC1F1', 'xref_from': '0x140028732', 'idb_comment': 'gold-leaf for set_auto_switch; sha d24e429a; session <审计会话>; not gate promotion'}`

---

### `set_codex_api_login`

- **gate**: `consumerStartReady`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `manager`, `enabled`, `relaunch`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - disk_write (relay config JSON)
  - relay_state_update

---

### `set_codex_api_slots`

- **gate**: `consumerStartReady`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `providerId`, `model`, `manager`, `slots`

**response fields (dim4)**:
  _(not extracted; see note)_

**errors**:
  - `Condition`

**side effects**:
  - Aspect

---

### `set_codex_router_enabled`

- **gate**: `strictImplementationUse_candidate`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `{'va': '0x14067CA20', 'name': 'set_codex_router_toml_section_write_win_sys', 'size_bytes': 7492, 'has_type': False, 'icf': False, 'decompile_success': True, 'rename_level': 'A', 'mac_parity': {'mac_va': '0x1005d7950', 'mac_symbol': 'codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::hbce68602ab47eb41', 'mac_size_bytes': 7455, 'size_delta_bytes': 37, 'size_delta_pct': 0.5, 'parity': 'strong'}}`
- **evidence**: `manifest.json`

**argKeys (dim2)**:
  `enabled(bool)`, `relaunch`, `apiLogin`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - FS_write_codex_config_toml_atomic
  - OS_process_stop_codex
  - OS_process_launch_codex
  - catalog_write_or_remove
  - virtual_auth_marker_write_or_cleanup
  - tcp_proxy_liveness_check_or_spawn
  - thread_migration_write

**note**: gate_candidate=strictImplementationUse；arg_keys=[enabled(bool)]+secondary[relaunch,apiLogin]；dispatcher@0x140963A40(4974B)；response=CoreEnvelope<CodexRouterTogglePayload>

**逆向分析 symbols**: `handler@{'va': '0x14067CA20', 'name': 'set_codex_router_toml_section_write_win_sys', 'size_bytes': 7492, 'has_type': False, 'icf': False, 'decompile_success': True, 'rename_level': 'A', 'mac_parity': {'mac_va': '0x1005d7950', 'mac_symbol': 'codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::hbce68602ab47eb41', 'mac_size_bytes': 7455, 'size_delta_bytes': 37, 'size_delta_pct': 0.5, 'parity': 'strong'}}`

---

### `set_hotspot_enabled`

- **gate**: `consumerStartReady`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `enabled`

**response fields (dim4)**:
  - Discriminant|Meaning|

**errors**:
  - `Condition`

**side effects**:
  - Writes `enabled` state to CodexMate settings hotspot section (persisted)
  - On `enabled=true`: triggers WebView hotspot route reload (`index.html`/`hotspot`)
  - On `enabled=false`: disables hotspot in store, no WebView reload
  - Mutex prevents concurrent hotspot enable/disable races
  - `mysteryUnlockGrants` / `mysteryUnlockedRoutes` fields optionally co-read from settings

**note**: 旧结论 macOS-only 已推翻，win 1.1.1 有实体 backend handler@0x140022070

---

### `set_image_compat`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `{'handler_va': '0x1400173A0', 'handler_name': 'set_image_compat_owner_sys', 'handler_size_bytes': 911, 'dispatcher_callsite': '0x140011619', 'dispatch_string_va': '0x1412AC1E1', 'dispatch_string': 'set_image_compat'}`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `enabled`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - none / not extracted

**逆向分析 symbols**: `handler@{'handler_va': '0x1400173A0', 'handler_name': 'set_image_compat_owner_sys', 'handler_size_bytes': 911, 'dispatcher_callsite': '0x140011619', 'dispatch_string_va': '0x1412AC1E1', 'dispatch_string': 'set_image_compat'}`

---

### `set_mcp_server_enabled`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `impl_replaced`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x14001DCC0`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `name`, `enabled`, `repo`

**response fields (dim4)**:
  _(not extracted; see note)_

**errors**:
  - `Condition`
  - `Delta`

**side effects**:
  - filesystem_write (codex-router TOML with relay guard fencing)

**note**: delta: relay guard comment fencing (aimami-relay managed start/end strings) NEW vs 1.0.9. owner@0x14001DCC0

**逆向分析 symbols**: `handler@0x14001DCC0`

---

### `set_relay_display_tags`

- **gate**: `consumerStartReady`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x14001F080`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `manager`, `global`, `woyao`

**response fields (dim4)**:
  _(not extracted; see note)_

**errors**:
  - `Condition`

**side effects**:
  - Aspect
  - Command: `set_relay_display_tags`
  - Wrapper function: to be confirmed from CCF (frontend pass)
  - arg_keys: `["manager", "global", "woyao"]` (backend-confirmed; optional fields = global/woyao)

**逆向分析 symbols**: `handler@0x14001F080`, `set_relay_display_tags_owner_sys`

---

### `set_usage_refresh_interval`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `integrity_recovered`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `{'name': 'set_usage_refresh_interval_handler_111', 'va': '0x140018760', 'size_bytes': 1502, 'string_anchor': '0x1412ac243', 'ipc_dispatcher_xref': '0x14000F219'}`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `command`, `app`, `interval`

**response fields (dim4)**:
  _(not extracted; see note)_

**errors**:
  - `Condition`

**side effects**:
  - Global
  - qword_1418930D0
  - byte_1418930C8
  - byte_1418930C9
  - dword_1418930E8
  - unk_1418930E0

**逆向分析 symbols**: `handler@{'name': 'set_usage_refresh_interval_handler_111', 'va': '0x140018760', 'size_bytes': 1502, 'string_anchor': '0x1412ac243', 'ipc_dispatcher_xref': '0x14000F219'}`

---

### `test_relay_draft_stream`

- **gate**: `consumerStartReady`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `manager`, `input`

**response fields (dim4)**:
  _(not extracted; see note)_

**side effects**:
  - none / not extracted

---

### `test_relay_provider_stream`

- **gate**: `consumerStartReady`
- **confidence**: medium
- **delta_class**: `new_command`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **evidence**: `interface.md, gate-report.json, manifest.json`

**argKeys (dim2)**:
  `manager`, `providerId`

**response fields (dim4)**:
  - schemaVersion
  - success
  - message
  - warnings

**errors**:
  - `error_code`

**side effects**:
  - SSE_stream_response
  - TCP/HTTP (relay stream test)

---

### `upsert_mcp_server`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `dto_and_impl_replaced`
- **readyToImplement**: `False`
- **strictImplementationUse**: `False`
- **owner VA**: `0x140019720`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `repo`, `name`, `transport`, `enabled`, `command`, `args`, `url`, `headers`, `environment`

**response fields (dim4)**:
  - CoreEnvelope<McpServerMutationPayload>

**errors**:
  - `pending_auto_switch_state_lock non-zero`
  - `query_installed_skills_with_repo Err`
  - `DTO field parse failure`

**side effects**:
  - filesystem_write (codex-router TOML)
  - SQLite_write (query_installed_skills)
  - relay guard fencing (NEW in 1.1.1)

**note**: dto_and_impl_replaced vs 1.0.9. NEW fields vs baseline. Frontend wraps in {input:{...}}. Full CCF confirmed.

**逆向分析 symbols**: `handler@0x140019720`, `handler@{'symbol': 'upsert_mcp_server_111', 'va': '0x140019720', 'renamed_to': 'upsert_mcp_server_owner_sys', 'size_bytes': 3388, 'size_hex': '0xD3C'}`

---

### `upsert_relay_provider`

- **gate**: `gold_leaf`
- **confidence**: high
- **delta_class**: `impl_replaced`
- **readyToImplement**: `True`
- **strictImplementationUse**: `True`
- **owner VA**: `{'va': '0x1400149d0', 'symbol': 'upsert_relay_provider_cmd_handler_111', 'size_bytes': '0x5de', 'caller': 'tauri_ipc_main_dispatcher_sys @ 0x14000d2a0', 'ipc_command_string': 'upsert_relay_provider', 'ipc_command_va': '0x1412ac4c0', 'data_xrefs': ['0x1414fa98c', '0x14189ddbc'], 'decompile_status': 'real_IDA decompiler_obtained_2026-06-18'}`
- **evidence**: `interface.md, gate-report.json`

**argKeys (dim2)**:
  `baseUrl`, `apiKey`, `wireApi`, `brand`, `models`, `extraHeaders`, `providerId`, `providerName`, `schemaVersion`, `routeExpiresAtMs`, `enum`

**response fields (dim4)**:
  - schemaVersion: number;
  - success: boolean;
  - code: number;         // 10 = Ok
  - message: string;
  - warnings?: string[];

**side effects**:
  - Atomic JSON write of relay config. Fields: schemaVersion/providers/activeByIde/proxy/codexRouterEnab
  - Platform keychain write for API key storage. Windows Credential Store.
  - NEW in 1.1.1: tray menu rebuild after successful upsert. Chain: relay_post_login_state_sync_sys(0x14
  - NEW in 1.1.1: reads MCP server snapshot from Repository Mutex (lock fields [78],[79]) to populate tr
  - NEW in 1.1.1: alternate tray branch when both relay_state==3 and mcp_snapshot.tag==3.

**逆向分析 symbols**: `handler@{'va': '0x1400149d0', 'symbol': 'upsert_relay_provider_cmd_handler_111', 'size_bytes': '0x5de', 'caller': 'tauri_ipc_main_dispatcher_sys @ 0x14000d2a0', 'ipc_command_string': 'upsert_relay_provider', 'ipc_command_va': '0x1412ac4c0', 'data_xrefs': ['0x1414fa98c', '0x14189ddbc'], 'decompile_status': 'real_IDA decompiler_obtained_2026-06-18'}`

---
