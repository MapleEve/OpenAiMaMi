# configure_auto_switch — AiMaMi 1.1.1 macOS ARM64 Evidence

**session**: <审计会话>
**machine**: <本地机器>
**produced_at**: 2026-06-16
**binary**: AiMaMi 1.1.1 universal (macOS ARM64)
**source_binary_sha256**: (see manifest.json; IDB open against AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi.i64)
**module**: codexmate_lib::commands::system (confirmed by demangled name)

---

## ## Confirmed

### C1 — Owner VA + Symbol
- Command wrapper: `codexmate_lib::commands::system::configure_auto_switch` @ `0x100619b80`, size=0x312=786B, `has_type=true`
- Core impl: `codexmate_lib::core::repository::Repository::configure_auto_switch` @ `0x1004c7280`, size=0x392=914B, `has_type=true`
- Dispatcher xref: single xref at `0x10030867d` in `codexmate_lib::run::{{closure}}` @ `0x100305aa0` (IPC router), confirmed static dispatch

### C2 — String Locator
- `"configure_auto_switch"` present in rodata blob @ `0x101147f2d` (concatenated command string: `"delete_sessionscleanset_auto_switchconfigure_auto_switchset_api_proxy_config..."`)
- `"threshold5hPercent"` and `"thresholdWeeklyPercent"` confirmed at `0x10115116c`
- Error strings: `" 5h threshold must be 0-100, got "` @ `0x1010b4708`; `"$weekly threshold must be 0-100, got "` @ `0x1010b472b`
- Label string: `"dev.aimami.auto-switch"` (22B) allocated on heap in core impl

### C3 — Frontend IPC Contract (dim1)
- **argKeys**: `["threshold5hPercent", "thresholdWeeklyPercent"]`
- **argObject**: `{threshold5hPercent:t,thresholdWeeklyPercent:e}`
- **wrapper**: `configureAutoSwitch:(t,e)=>ne("configure_auto_switch",{threshold5hPercent:t,thresholdWeeklyPercent:e})`
- **file**: `assets/index-DdcCOEJG.js`, line 86, col 25116
- **kind**: `tauriInvokeWrapper`
- Source: `<来源位置>/raw/aimami/1.1.1/macos-arm64/frontend/ipc-contracts.jsonl`

### C4 — Breaking Delta vs 1.0.9 (CONFIRMED BEHAVIOR CHANGE)
1.0.9 argKeys: `{enabled, thresholdPct, hasSchedule, scheduleMin}` (4 params)
1.1.1 argKeys: `{threshold5hPercent, thresholdWeeklyPercent}` (2 params)
- `enabled` param moved to sibling command `set_auto_switch` (confirmed: `set_auto_switch:(t)=>ne("set_auto_switch",{enabled:t})`)
- `thresholdPct` (single threshold) replaced by `threshold5hPercent` + `thresholdWeeklyPercent` (two time-window thresholds)
- `hasSchedule` + `scheduleMin` REMOVED entirely from this command
- This is a **diff_reversed** target — new raw evidence required. Not migrated_no_behavior_diff.

### 内部构建 — Backend Core Logic (dim2)
Command wrapper pattern (identical to 1.0.9 pattern, just rebase):
- Acquires OnceBox mutex on Repository singleton
- Panic-count check → poison guard
- Calls `Repository::configure_auto_switch(repo+16, a3=threshold5hPct, a4=threshold_weekly_flag, a5=weekly_pct, a6=?)`
- On err: format CoreError → output sentinel 0x8000000000000000
- On ok: copy 0x78-byte result to output
- Mutex::unlock

Core impl business logic:
1. `Repository::load_registry` (0x1004bf8e0) → reads registry.json
2. If registry OK (status=10): extract current auto_switch config (check `LOBYTE(v41[8]) != 2` = snooze_state)
3. **Validate threshold5hPct** (a3): if `a3 >= 0x65` (i.e. ≥101): format error "5h threshold must be 0-100, got {a3}" via anon format args → return CoreError
4. **If has_schedule flag set (a4 & 1)**: validate weekly_pct (a5=v45): if `v45 >= 0x65`: format error "weekly threshold must be 0-100, got {v45}" → return CoreError
5. Update registry fields: `v41[7] = __PAIR64__(v10=weekly_pct, v11=5h_pct)`, `LODWORD(v41[8]) = v12=state`, `v41[6] = duration_since_now`
6. `Repository::persist_registry` (0x1004c3a00) → write registry.json (full rewrite with serde_json)
7. On persist error: return CoreError
8. `check_daemon_state` (0x10055a310) via repo+632/+640 offsets → runs `lsof`-based daemon probe
9. Alloc 22B "dev.aimami.auto-switch" label
10. `CoreEnvelope::ok` → build success response

### C6 — persist_registry Full Chain (dim3 leaf)
- `CodexPaths::ensure_directories` (0x1005582b0) → 9x DirBuilder::create → FS leaf
- Optional: `std::sys::fs::metadata` + `std::sys::fs::copy` (backup if registry exists)
- serde_json serialize registry: 4 `SerializeMap::serialize_entry` calls (schemaVersion, updatedAt, activeAccountKey, items) + 2 `SerializeStruct::serialize_field` + `end`
- `std::fs::write` (0x100201fe0) → `write(2, buf, len)` syscall → **FS implementation leaf**

### C7 — check_daemon_state Full Chain (dim3 leaf)
- `LEGACY_DAEMON_CLEANUP` once-flag check
- `std::sys::fs::metadata` on daemon socket/pid path (a1=path_ptr, a2=path_len)
- If metadata OK (file exists): spawn `Command::new(lsof[4])` + arg from string blob + arg `unk_101151662` (22B path)
- `process::Command::output` → `waitpid` syscall → OS process leaf
- Returns bool: `v11 != 0` (exit code check)

### C8 — Error Paths (dim4)
- Validation err threshold5h ≥ 101: CoreError string "5h threshold must be 0-100, got {N}"
- Validation err weekly ≥ 101 (when has_schedule set): CoreError string "weekly threshold must be 0-100, got {N}"
- persist_registry error: CoreError (IO error from fs::write)
- Mutex poisoned: CoreError "..." (41-char error string at anon_91b23c3e0afeec67b869976d9683aaed_627)
- All wrapped in CoreEnvelope sentinel 0x8000000000000000

### C9 — Response Payload (dim4)
- Success: CoreEnvelope<AutoSwitchConfig> (0x78 bytes output):
  - `v34..v40` fields: serviceLabel (22B "dev.aimami.auto-switch"), threshold5h_pct (u32), weekly_pct (u32?), snooze_state (byte), has_schedule flag (byte), daemon_state (bool from check_daemon_state)
- Error: sentinel 0x8000000000000000 + CoreError string

### C10 — Module Confirmed
- demangled symbol: `codexmate_lib::commands::system::configure_auto_switch`
- Module path: `codexmate_lib::commands::system`
- Raw leaf dir: `raw/aimami/1.1.1/macos-arm64/system/configure_auto_switch/`

---

## ## Inferred

### I1 — AutoSwitchConfig struct (1.1.1)
Based on core impl output fields and 1.0.9 baseline:
- `threshold5hPercent: u32` (0–100, validated)
- `thresholdWeeklyPercent: u32` (0–100, validated when has_schedule=true)
- `hasSchedule: bool` (internal flag, whether weekly threshold is active)
- `snoozeState: u8` (enum, 0=no snooze, 2=snoozed — inferred from `LOBYTE(v41[8]) != 2` branch)
- `updatedAt: u64` (SystemTime::duration_since epoch seconds, stored in v41[6])
- `serviceLabel: String` = "dev.aimami.auto-switch" (22B, allocated per-call)
- `daemonState: bool` (from check_daemon_state, appears in response as v22)

### I2 — Registry JSON Fields for auto_switch section
The registry RegistryFile struct holds the auto_switch config at offsets:
- `v41[7]` (u64): packed `__PAIR64__(weekly_pct, threshold5h_pct)` — two u32s
- `LODWORD(v41[8])`: snooze_state or enabled flag
- `v41[6]`: updatedAt (duration_since epoch)
- `v41[8]` byte 0: state enum (0 or 2 for snooze)
- `v41[9]` byte 0: (additional flag, observed LOBYTE(v41[9])=1 after load)

### I3 — set_auto_switch split confirms role separation
`set_auto_switch` (0x100617a00) takes single `enabled: bool` param → calls `Repository::set_auto_switch` (0x1004c23e0). The `enabled` flag for auto-switch feature on/off is now a separate command from threshold configuration, unlike 1.0.9 where both were in `configure_auto_switch`.

### I4 — Validation semantics
Both thresholds validated as `u32 < 101` (0-100 inclusive). The weekly threshold is only validated when `has_schedule` internal flag is set (a4 & 1 branch). If `has_schedule=false`, weekly threshold is not validated even if provided.

---

## ## Unknown

### U1 — Exact AutoSwitchConfig response byte layout
The 0x78-byte response struct field offsets are inferred from v34..v40 assignments. Exact serialization (field order in JSON response to frontend) not confirmed from pseudocode alone. dim4 partial.

### U2 — Frontend consumption of response
How the frontend consumes the CoreEnvelope<AutoSwitchConfig> response (which fields it reads, toast/state mutation) not traced from ipc-contracts alone. FCF partial for UI state.

### ~~U3~~ — `a4` param semantics in backend — **RESOLVED 2026-06-17**
**Resolution**: ipc-contracts.jsonl re-verified this session confirms exactly 2 argKeys: `["threshold5hPercent", "thresholdWeeklyPercent"]`. No hidden params. Tauri `Option<u32>` ABI: `thresholdWeeklyPercent: Option<u32>` in Rust command signature → Tauri deserializes as `(a4: bool=Some/None, a6: u32=value)`. Backend branch `if (v44 & 1) != 0` tests the Option discriminant, validating weekly threshold only when Some. **No longer blocks_start. Category: resolved.**

### U4 — Windows behavior
Windows binary evidence not collected this session. Platform gate: macOS confirmed; Windows Unknown. Per GATE-SPEC, do not infer from macOS.

### U5 — `lsof` arguments in check_daemon_state
The exact path passed as second arg (`unk_101151662`, 22B) to lsof not read. Likely the launchd plist path `dev.aimami.auto-switch` or daemon socket path.

### U6 — dim6 test/acceptance mapping
Not in scope for this producer pass. Remains empty per 1.0.9 precedent.

---

## ACCEPTANCE (dim6 — <审计会话>)

**Gate**: strictImplementationUse → acceptance-draft（dim4 partial U1 + dim5 win Unknown 阻塞升档）

### happy_path
- 输入 `{threshold5hPercent:50, thresholdWeeklyPercent:80}` → 返回 `CoreEnvelope<AutoSwitchConfig>` 含 serviceLabel="dev.aimami.auto-switch"、echoed thresholds、snoozeActive、daemonState
- 副作用：registry.json 全量重写（auto_switch 节点更新），备份文件生成，9 目录 ensure，lsof subprocess

### boundary/error
- threshold5hPercent ≥ 101 → "5h threshold must be 0-100, got {N}" (VA 0x1010b4708)
- thresholdWeeklyPercent ≥ 101 AND has_schedule → "$weekly threshold must be 0-100, got {N}" (VA 0x1010b472b)
- fs::write 失败 → CoreError(2/IoError)
- mutex poisoned → 41-char static error

### side_effect_asserts
- registry.json 含更新后的 threshold 字段；backup 目录有新备份；serviceLabel 固定 "dev.aimami.auto-switch"

### test_mapping
- unit: threshold 校验逻辑 (mocked repo)
- e2e: Tauri Option<u32> ABI 解析 + registry.json 写入
- explicit_non_automatable_accept: lsof subprocess daemon 状态验证

### dim6_basis
evidence.md 内部构建/C8 string VA + interfaces/ Side Effects 表 + dim3 call-tree leaf
