# System Diff — AiMaMi 1.2.3 tray (windows-x64)

## Platform Artifacts

- Binary: `raw/binary/AiMaMi.1.2.3 win64.exe`, PE, x64. sha256 independently re-hashed this session: `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (matches the value already on file in `../windows-1.2.3-accounts/manifest.json` for the same release).
- IDB: `<二进制路径>\AiMaMi.1.2.3 win64.exe.i64` on the IDA MCP host (<host>), confirmed live this session (`server_health` → status=ok, uptime=121281s, IDA decompiler_ready=true).

## Frontend IPC surface

- 131 total IPC commands enumerated in `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — identical count to the macOS 1.2.3 build's `ipc-contracts.jsonl`. 0 'tray' hits on both platforms. Tray is architecturally a native-callback-only subsystem on both platforms (no `invoke("<command>")` surface), consistent with a shared cross-platform Tauri tray-icon integration.

## Backend symbol-name evidence for a shared (not platform-forked) implementation

- Two of the three windows-side named functions this package covers (`create_bootstrap_tray_menu`, `handle_tray_menu_event`) match the mac Rust module path **exactly**: `codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu` / `::handle_tray_menu_event`. This is strong (not proof-positive, but strong) evidence that windows 1.2.3 tray is built from the same cross-platform Rust module as macOS 1.2.3 tray (i.e. Tauri's `tauri::tray` abstraction), not a windows-native reimplementation.
- This is a notable contrast with `windows-1.0.9-tray` (see prior-version reference below), which per that package's README used native win32 APIs directly (`Shell_NotifyIconW`, `RegisterClassW`, `CreateWindowExW`, `TrackPopupMenu`, `AppendMenuW`). If confirmed by a future diff pass, this would mean AiMaMi migrated its windows tray implementation from a native win32 approach (1.0.9) to a Tauri cross-platform abstraction (1.2.3) at some point between those releases. **Not formally diffed this session** — recorded as a hypothesis with strong supporting evidence (exact symbol-name match), not a closed finding.

## Coverage delta vs macOS 1.2.3 tray sibling

| dimension | macOS 1.2.3 tray | windows 1.2.3 tray (this package) |
|---|---|---|
| named target families | 10/10 | 3/10 |
| raw .c files | 12 | 5 |
| dim1 (frontend control-flow) | accepted-native-substitute | accepted-native-substitute (identical basis) |
| dim2 (backend owner/decompile) | strong (10/10) | partial (3/10) |
| dim3 (call-tree-to-leaf) | partial | partial, covered-targets-only |
| dim4 (interface/DTO) | not-closed | not-closed |
| dim5 (platform gate) | mac-closed-for-existence | windows-partial-this-pass |
| dim6 (test/acceptance) | not-closed | not-closed |
| gate tier | consumerStartReady (10/10) | consumerStartReady (3/10), blocked (7/10) |

Per `platformPolicy.doNotInferWindowsFromMacOS`, the macOS package's 10/10 coverage is **not** used to backfill or assume windows coverage for the 7 uncovered targets. The gap is reported honestly as `truly_undone` in `data/task-plan.json`.

## Plugin/capability/OTA

Not examined this session; out of scope for a tray-module gapfill pass. No claim made either way.

## Prior version reference (not a migration basis)

- `internal-reverse/audits/windows-1.0.9-tray/` (`accepted_full_leaf_100_windows_ida`, native win32 API chain). Different binary, different addresses, no RULE 9 diff run this session. See `manifest.json.prior_version_reference` for the full caveat.
