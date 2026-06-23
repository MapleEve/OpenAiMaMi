# AiMaMi 1.1.1 Windows-x64 — system/diagnose Evidence

**Session**: wf-aimami111-delta-20260616 | **Machine**: <本地机器> | **Model**: claude-sonnet-4-6
**Date**: 2026-06-17 | **Role**: 纯生产者 (SOP steps 0-6)
**Binary**: AiMaMi 1.1.1 win64.exe (PE/x64 stripped) | **IDB**: AiMaMi 1.1.1 win64.exe.i64
**逆向分析 gate**: status=ok, uptime=50077s, hexrays_ready=true, module=AiMaMi 1.1.1 win64.exe

## Owner Localization Chain

**Step 1: find_regex "diagnose"**
- `0x1412ac28c` → string "diagnose" (len=8)
- `0x1412ac56b` → string "diagnose_codex_router" (unrelated: sub_140021AE0 router diagnostics)

**Step 2: xrefs_to "diagnose" string**
- `0x14000df51` → data xref from `tauri_ipc_main_dispatcher_sys(0x14000d2a0)` size=0x45ce
- confirms IPC dispatcher references "diagnose" command name

**Step 3: Handler identification**
- Dispatcher callees analysis → `sub_14078EE90` (size=901)
- `sub_14078EE90`: callers=[tauri_ipc_main_dispatcher_sys], code xref from `0x14000dffc`
- strings in handler: "poisoned lock" + reqwest path — matches diagnose context
- CONFIRMED: diagnose_ipc_cmd_handler_win = 0x14078EE90

**Step 4: Renamed functions**
| Old Name | New Name | VA | Size | Role |
|---|---|---|---|---|
| sub_14078EE90 | diagnose_ipc_cmd_handler_win | 0x14078EE90 | 901 | IPC handler, A-level |
| sub_1401B8530 | diagnose_task_body_win | 0x1401B8530 | 1325 | sync execution body |
| sub_140214D00 | diagnose_ok_response_builder_win | 0x140214D00 | 298 | ok+scheduler tag builder |
| sub_140790870 | repository_diagnose_core_win | 0x140790870 | 2978 | full Repository::diagnose |
| sub_140797E70 | diagnose_execute_with_repo_win | 0x140797E70 | 537 | repo helper wrapper |
| sub_1407D24F0 | diagnose_blocking_task_runner_win | 0x1407D24F0 | 310 | tokio blocking task |
| sub_1401B62F0 | sync_local_runtime_state_builder | 0x1401B62F0 | 935 | (already named) |
| sub_140213770 | schedule_full_runtime_refresh_builder | 0x140213770 | 302 | (already named) |

## Call Tree

### Path A: Sync Task Body (direct invoke path)
```
tauri_ipc_main_dispatcher_sys (0x14000d2a0)
  → [call at 0x14000dffc after "diagnose" string match]
  → diagnose_ipc_cmd_handler_win (0x14078EE90, size=901) [A-level]
    → sub_14006EDC0 (0x14006EDC0) [StateManager lock helper]
    → diagnose_task_body_win (0x1401B8530, size=1325)
      → state_manager_lock_and_assemble (0x1401abc20) [RwLock::read + assemble]
      → diagnose_ok_response_builder_win (0x140214D00, size=298)
        → alloc 2B: 'ok' (0x6B6F = 27503)
        → alloc 7B: scheduler tag (1667462483 + 1936942435)
        → write fields at +336..+400 in output struct
```

### Path B: Tokio Async Full Path
```
tokio async executor
  → sub_140A751F0 (0x140A751F0, size=593) [async poll state machine, switch case 0-3]
    → sub_1409FA8B0 (0x1409FA8B0) [async task spawner]
      → diagnose_blocking_task_runner_win (0x1407D24F0, size=310) [block_in_place wrapper]
        → sub_140F03290 [block_in_place / tokio_spawn_blocking_runtime]
        → repository_diagnose_core_win (0x140790870, size=2978)
          → state_manager_lock_and_assemble (0x1401abc20)
          → [PROGRESSIVE_STATE_SAVE_FAILED path]
            → sub_1401AF5C0 [save state]
            → if save fails → alloc 29B "PROGRESSIVE_STATE_SAVE_FAILED" + sub_1410A1DF0
          → sync_local_runtime_state_builder (0x1401B62F0, size=935)
            → if a4==4: check_schtask_codexmate_autoswitch [WIN-SPECIFIC]
            → alloc 22B "dev.aimami.auto-switch"
          → sub_1401B53F0 (0x1401B53F0, size=2536) [load_local_state_synced equiv]
          → schedule_full_runtime_refresh_builder (0x140213770, size=302)
            → alloc 2B 'ok' + 7B scheduler tag
            → writes fields at +680..+720 (+744 ptr)
```

## Interface / DTO

**Request**: argKeys=[] (zero arguments, same as mac)
**Response**: CoreEnvelope<DiagnoseResult>
**Return size**: ~416 bytes (consistent with mac, output struct large)

### ok Response Builder Fields (Path A, sub_140214D00)
- offset +336: u64 = 2 (discriminant "ok" variant)
- offset +344: ptr to 2B string "ok" (0x6B6F)
- offset +352: u64 = 2 (len of "ok")
- offset +360: u64 = 7 (len of scheduler tag)
- offset +368: ptr to 7B scheduler tag
- offset +376: u64 = 7
- offset +384: u64 = 0
- offset +392: u64 = 8
- offset +400: u64 = 0
- offset +408: dword = 1
- offset +412: byte = 1

### schedule_full_runtime_refresh_builder Fields (Path B, 0x140213770)
- Identical scheduler tag structure but at offsets +680..+720
- offset +680: u64 = 2 (ok len), +688: ptr ok, +696: u64=2, +704: u64=7, +712: ptr tag, +720: u64=7
- offset +728..+744: sub_1401B53F0 result copy
- offset +752: dword=1, +756: byte=1

## Windows Platform Delta vs macOS

| Dimension | macOS | Windows |
|---|---|---|
| Autoswitch check | launchctl/launchd plist | check_schtask_codexmate_autoswitch (Windows scheduled task) |
| Atomic ops | mac atomic (arm64) | InterlockedCompareExchange8 |
| Futex equiv | mac futex | WakeByAddressSingle |
| Async path | Rust async (poll via ARM64 state machine) | tokio async (sub_140A751F0 switch-4-case) |
| Bundle-id hardcode | "dev.aimami.auto-switch" (22B) | same: "dev.aimami.auto-switch" (22B) confirmed |
| Error string | "poisoned lock: ..." | same: "poisoned lock: another task failed inside" (41B) |
| Command string | "diagnose" len=8 | same: 0x1412ac28c len=8 |

## Error Paths

- **Poisoned lock**: `Mutex<codexmate_lib::core::repository::Repository>` poisoned → panic via `sub_1410B1930` + `sub_14124BFE0` (Display fmt error)
- **PROGRESSIVE_STATE_SAVE_FAILED**: sub_1401AF5C0 save fails → alloc 29B error string, error path via sub_1410A1DF0
- **A Display implementation returned an error unexpectedly**: fallback panic path (same as mac)
- **tokio blocking task double-run**: "[internal exception] blocking task ran twice" from tokio-1.50.0

## Four-Angle Completeness

**A (func_query name_regex)**: win PE stripped — no mangled names; all targets found via string xref + caller chain — PASS (methodology)
**B (string pool)**: find_regex "diagnose" → 2 hits (command name + codex_router); "diagnose_codex_router" xref confirmed unrelated — PASS
**C (frontend IPC)**: shared JS frontend with macOS; dim1 inherited from mac-arm64 evidence — PARTIAL (dim1 not win-specific)
**D (owner-map + INDEX)**: no prior 1.1.1 windows-x64 diagnose in INDEX; ADDITIVE, no collision — PASS

## Fake-Wall Check

genuine_ceiling=false. All 7 taxonomy categories excluded:
1. drop_in_place≠async body: `sub_1407D24F0` confirmed as blocking_task_runner (tokio), not drop shim
2. architecture_only/budget rule: not applicable
3. async decompile failed: async poll body `sub_140A751F0` decompiled cleanly (switch-4-case)
4. wrong VA: validated via string xref chain + callers check
5. vtable dynamic dispatch: no vtable in handler chain
6. HTTP-terminal external-only: reqwest path in repository_core but not blocking happy path
7. ICF-identical: no ICF collapse evidence (sizes differ: 901/1325/298/2978)

## IDB Write-back

- rename: 8 functions renamed (all OK)
- set_comments: 5 addresses annotated
- idb_save: ok (<本地路径>
