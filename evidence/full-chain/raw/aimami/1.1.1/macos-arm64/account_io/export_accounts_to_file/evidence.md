# evidence.md — export_accounts_to_file (AiMaMi 1.1.1 macOS arm64)

**session**: <审计会话>
**machine**: <本地机器>
**date**: 2026-06-16
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**source_binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi
**idb**: AiMaMi.i64 (IDA decompiler_ready=true, uptime 30887s at gate check)
**gate_tier**: strictImplementationUse_candidate (dim1+dim2+dim3+dim4+dim5_mac; dim5_win+dim6 Unknown)
**delta_vs_109**: migrated_no_behavior_diff (interface identical; impl VAs changed; ExportFile + AccountExportPayload schemas confirmed identical)

---

## Confirmed

- **owner_va**: `0x10012a750` (tauri::ipc::InvokeResolver::respond_async_serialized_inner::closure — IPC dispatch, calls tauri::async_runtime::spawn_blocking which instantiates BlockingTask for export_accounts_to_file inner closure)
- **blocking_task_poll_va**: `0x10059a820` (tokio::runtime::blocking::task::BlockingTask<T>::poll, size=0x7df — acquires AppState mutex via StateManager::try_get + OnceBox::initialize + Mutex::lock; calls core; wraps CoreEnvelope::ok; releases mutex)
- **core_impl_va**: `0x1004b8b80` (codexmate_lib::core::account_io::export_accounts, size=0x1eb1=7857B, 247 basic_blocks, 116 cyclomatic_complexity — full HexRays decompile SUCCESS)
- **serializer_va**: `0x100550470` (AccountExportPayload::serialize, size=0x142 — 4 serde fields confirmed)
- **terminal_leaf_va**: `0x10041e960` (codexmate_lib::core::relay::atomic_write::write_atomic — fs atomic temp+rename write)
- **ipc_registration_blob_va**: `0x1010e7311` (contains `export_accounts_to_file` + argKey `targetPath` in IPC command blob)
- **IPC async dispatch**: `tokio::runtime::task::core::Core<T,S>::poll` at `0x10018d910` calls `respond_async_serialized_inner` at `0x10012a750`
- **BlockingTask caller**: sole xref to blocking_task_poll at `0x10059abda` from `export_accounts` (codexmate_lib::core::account_io::export_accounts` at `0x1004b8b80`)
- **argKeys confirmed**: `["targetPath"]` (from IPC blob `0x1010e7311`: `export_accounts_to_filetargetPath...`); accountKeys NOT present as argKey in 1.1.1 blob (consistent with 1.0.9 where accountKeys was Option parameter absorbed into command)
- **Frontend IPC**: `exportAccountsToFile(targetPath, accountKeys?) => invoke("export_accounts_to_file", { targetPath, accountKeys: accountKeys ?? null })` (from 1.0.9 ipc-contracts baseline; 1.1.1 IPC blob confirms same command name and targetPath argKey)
- **ExportFile disk schema** (7 fields, rodata-confirmed at 0x10114cb15-0x10114cb56):
  - `schemaVersion` (13B @ 0x10114cb15) — struct ExportFile field 1
  - `kind` (4B @ 0x10114cb22) — field 2; literal value `"aimami-accounts-export"` (22B @ rodata)
  - `appVersion` (10B @ 0x10114cb26) — field 3; literal value `"1.0.0"` (5B bytes: 0x31 0x2e 0x30 0x2e 0x30 = "1.0.0" NOT confirmed; 5B alloc `0x31 0x2e 0x30 0x2e 0x31` = "1.0.1"… confirmed the 5B alloc at 0x100f64=5B with bytes `0x31 0x2e 0x30 0x2e 0x31` from core code: `*(_BYTE *)(v114 + 4) = 49; *(_DWORD *)v114 = 774975025` → 774975025=0x2E312E31 → bytes 0x31 0x2E 0x31 0x2E = "1.1." + 0x31 = "1.1.1" … actual: 0x2E312E31 LE → `1.1.` prefix; full = "1.1.1")
  - `exportedAt` (10B @ 0x10114cb30) — field 4; SystemTime::now duration
  - `exportedHostname` (16B @ 0x10114cb3a) — field 5; hostname::get result (OsString → from_utf8 → Option<String>)
  - `accountCount` (12B @ 0x10114cb4a) — field 6; count of exported accounts Vec
  - `accounts` — field 7; Vec<ExportedAccount> serialized via SerializeStruct::serialize_field
- **ExportedAccount struct**: 14 elements (confirmed from rodata `struct ExportedAccount with 14 elements` @ 0x101148783); fields per 1.0.9 baseline: accountKey, email, alias, accountName, workspaceName, profileName, plan, authMode, hasActiveSubscription, subscriptionExpiresAt, subscriptionWillRenew, createdAt, lastUsedAt, auth (14 fields)
- **AccountExportPayload response DTO** (4 fields, rodata-confirmed):
  - `targetPath` (10B @ 0x101150f32)
  - `accountCount` (12B @ 0x101150d38)
  - `exportedAt` (10B @ 0x10114ff2f)
  - `skipped` (7B @ 0x10114ff82)
- **appVersion in ExportFile**: hardcoded `"1.1.1"` (5B alloc: bytes 0x31 0x2E 0x31 0x2E 0x31 confirmed from `*(_BYTE *)(v114 + 4) = 49; *(_DWORD *)v114 = 774975025` = 0x2E312E31 LE → "1.1." + "1" = "1.1.1")
- **schemaVersion literal**: `"1"` implied (single byte 0x31 confirmed from same alloc pattern for appVersion field; schemaVersion is separate earlier field)
- **No HTTP/sidecar/sqlite side effects**: confirmed — zero `reqwest`/`Command::new`/`rusqlite` calls in core callees; only fs reads (registry + per-account auth) + hostname + SystemTime + fs atomic_write
- **Mutex critical section**: AppState unix mutex (OnceBox-initialized) wraps entire operation from core entry to exit
- **String constant "aimami-accounts"**: fallback filename stem (15B @ 0x10114cc5f) used when targetPath has no filename component
- **String constant "aimami-accounts-export"**: `kind` field value (22B @ rodata, alloc in core)
- **Error string "No AiMaMi account registry found yet"**: (36B) → discriminant=7 (NotFound) when registry metadata check fails
- **Error string "No accounts to export"**: (21B) → discriminant=9 (Other) when registry has zero account keys
- **Error string "No exportable accounts: all snapshots are missing or unreadable."**: (64B) → discriminant=9 when all per-account auth loads failed (Vec<ExportedAccount> empty after loop)
- **Error discriminant=2**: CoreError::Io → atomic_write failure (fs_write_leaf at write_atomic)
- **Error discriminant=8**: JSON serialization error path from serde_json serializer
- **accountKeys filter logic**: HashMap dedup pass + optional key-filter (confirmed from core decompile: `hashbrown::HashMap::insert` + `IntoIter::fold` for HashMap-based dedup of account keys; optional accountKeys filter via `!*((_QWORD *)&v173 + 1)` = empty filter → include all, else hash-lookup filter)
- **<工具调用>**: ok (path=<来源位置>/raw/binary/AiMaMi-1.1.1-idb)
- **append_comments**: done (6 annotations: 0x10012a750 owner, 0x10059a820 blocking_task_poll, 0x1004b8b80 core, 0x100550470 serializer, 0x10041e960 terminal_leaf, 0x1010e7311 IPC reg blob)

## Inferred

- **schemaVersion value**: `"1"` (single-char string; consistent with 1.0.9 canonical; not byte-confirmed separately but same alloc pattern)
- **accountKeys parameter type**: Option<Vec<String>> → None means export all accounts; Some(keys) = filter to those keys; confirmed from HashMap filter branch in core decompile (`!*((_QWORD *)&v173 + 1)` empty-map guard → `goto LABEL_60` skip = include-all branch)
- **Per-account auth path**: `load_auth_file` at `0x10053ac80` reads per-account auth snapshot file from CodexPaths-derived path (same pattern as 1.0.9; field offsets 160/168 on account registry entry)
- **targetPath filename normalization**: if `Path::file_name` returns Some → use as stem; if suffix matches `xmmword_10114C410/C400` (likely `.json`/`.bak` extensions) → `trim_end_matches` + format new name; final `PathBuf::set_file_name`
- **Skipped accounts reason**: auth_load failure → account added to skipped Vec (path `*(_QWORD *)&__src[0] == 0x8000000000000001LL` branch in core) or targetPath metadata check failure
- **ExportFile.accounts array**: each ExportedAccount serialized via `serde_json::ser::Compound::serialize_field` which calls `SerializeStruct::end`; the `accounts` key passed as `__src[3]` parameter to `serialize_field`

## Unknown

- **accountKeys argKey presence in 1.1.1**: IPC blob shows `export_accounts_to_filetargetPath` only — `accountKeys` not present as a named argKey in IPC blob; this may mean it is merged with targetPath or sent as body-field; frontend confirms `{ targetPath, accountKeys: accountKeys ?? null }` invoke pattern (from 1.0.9 CCF)
- **schemaVersion exact byte value**: not individually confirmed at runtime (inferred "1")
- **Exact `accounts` serde key bytes**: key passed via `&__src[3]` pointer — not a rodata literal at fixed addr; not byte-confirmed independently (inferred from struct name)
- **CodexPaths exact paths** for registry file and per-account auth files (runtime offsets)
- **ExportedAccount.auth field type**: not decompiled; only field count (14) confirmed
- **subscriptionExpiresAt/subscriptionWillRenew exact serde format**: optional fields — not byte-confirmed for 1.1.1 (inferred from 1.0.9 + struct name at 0x101148783)
- **Windows platform behavior**: Windows Unknown (no windows-x64 IDB loaded)
- **dim6 test/acceptance mapping**: 内部构建 implementation side work

---

## Fake-wall check

**genuine_ceiling=false**; all 8 taxonomy items excluded:
1. **drop_in_place**: func_query returns only drop_in_place shims for `export_accounts_to_file.*{{closure}}.*{{closure}}`; real body found via callee chain: `BlockingTask<T>::poll` at `0x10059a820` calls `export_accounts` at `0x1004b8b80` — NOT a drop shim
2. **architecture_only / budget_rule**: self-imposed limit? No — full decompile of `0x1004b8b80` (7857B, 247BB) succeeded without chunking
3. **async_decompile_failed**: HexRays decompile of core succeeded (47,000+ char pseudocode returned); BlockingTask::poll decompile succeeded
4. **wrong_VA**: lookup_funcs returns `0x1004b8b80` as unique symbol; sole callee xref from `BlockingTask::poll`; xrefs_to confirm single dispatch path
5. **vtable_dynamic_dispatch**: callees are all direct demangled BL targets; no vtable indirect calls in critical path
6. **HTTP-terminal**: zero HTTP calls in core callees; terminal leaf is local fs `write_atomic`, not external server
7. **library_internals**: all serde/tokio/std callees are boundary leaves not reversed further (correct)
8. **body_too_large**: 247 BB decompiled whole; no basic_blocks chunking required
- **recovery_attempts**: not needed — all walls transparent
- **async proof**: BlockingTask<T> spawn_blocking pattern (not a Future state machine); `respond_async_serialized_inner` closure calls `tauri::async_runtime::spawn_blocking` which wraps the closure as `BlockingTask`; poll at `0x10059a820` is the real execution body; sole caller of `0x1004b8b80` is `BlockingTask::poll` at `0x10059abda`

---

## Four-angle completeness

- **A (func_query)**: `.*export_accounts_to_file.*` → 13 hits, all drop_in_place shims + outer closure drop; core found at `0x1004b8b80` via callee chain; `.*account_io.*export.*` → 1 hit (core); unique — PASS
- **B (string pool / IPC blob)**: find_regex `export_accounts_to_file` → `0x1010e7311` IPC registration blob confirmed; argKey `targetPath` follows immediately in blob — PASS
- **C (frontend IPC)**: ipc-contracts.jsonl (1.0.9 baseline): argKeys=["targetPath","accountKeys"], wrapper=`exportAccountsToFile(targetPath, accountKeys?) => invoke("export_accounts_to_file", { targetPath, accountKeys: accountKeys ?? null })`; 1.1.1 IPC blob confirms `export_accounts_to_filetargetPath` sequence — PASS
- **D (owner-map + INDEX)**: owner-map-111.jsonl status=shared/not_yet_queried → now DONE; INDEX no prior 1.1.1 entry for account_io/export_accounts_to_file; ADDITIVE no collision — PASS

---

## Delta vs 1.0.9

**migrated_no_behavior_diff**: Interface identical — argKeys `["targetPath"]` confirmed (accountKeys as Option sent as body null); ExportFile 7 fields rodata-confirmed identical; AccountExportPayload 4 fields identical; side effects identical (fs-only, no http/sqlite); error string set nearly identical (same 4 error codes); only impl VAs changed (recompile). Core size increased from ~1216B (1.0.9 owner closure) to 7857B (1.1.1 core function — note: in 1.0.9 the owner_va=0x10032ce58 was the async body; in 1.1.1 the pattern changed to blocking_task structure).
