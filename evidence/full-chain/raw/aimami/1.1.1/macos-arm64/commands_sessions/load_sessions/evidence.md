# Evidence: load_sessions — AiMaMi 1.1.1 macOS ARM64

**session**: wf-aimami111-delta-20260616
**machine**: <本地机器>
**model**: claude-sonnet-4-6
**role**: 纯生产者 (SOP steps 0-6)
**produced_at**: 2026-06-17
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi (macos-arm64)
**idb**: AiMaMi.i64 (hexrays_ready=true, uptime=56117s at session start)
**gate_tier**: strictImplementationUse_candidate (dim2+dim3+dim4+dim5_mac+delta_nil; dim1 accepted_unknown consistent with 1.0.9 baseline; dim5_win Unknown; dim6 Unknown)
**delta_status**: delta_nil — behavior identical to 1.0.9; SQL query / DTO / side-effects / argKeys unchanged; only recompile VAs changed

---

## ## Confirmed

1. **Core impl VA**: `0x100721c70` — `codexmate_lib::core::sessions::load_sessions::h6efd1054dc7f493d`, size=0x4616 (17942 bytes), has_type=true; decompile OK (104153 chars output).
2. **Threading model**: spawn_blocking pattern confirmed via `BlockingTask<load_sessions::{{closure}}>` drop shims at 0x100009970/0x100011b10/0x100013770/0x100018730. `BlockingTask::poll @0x1005976c0` calls core directly; `tokio::Core::poll @0x10018c8c0` is the harness bridge; `Harness::poll @0x100071f00` drives the task.
3. **IPC dispatch**: `respond_async_serialized_inner::{{closure}} @0x1001234d0` (shared IPC dispatcher blob, same as fetch_relay_models_draft) references command string blob at `0x1010e7311`. Command name "load_sessions" confirmed in packed command name blob at this address (find_regex n=1).
4. **SQL query** byte-confirmed at `0x101159710`: `SELECT id, title, updated_at, cwd, archived, agent_nickname, agent_role, source, model_provider FROM threads` — **identical to 1.0.9**.
5. **Response type**: `CoreEnvelope<SessionListPayload>` confirmed via drop shim demangled name at `0x1000d3e60`: `drop_in_place<ResultFutureTag::future<CoreEnvelope<SessionListPayload>,String,load_sessions::{{closure}}>>`.
6. **argKeys**: `[]` (zero arguments) — confirmed via 1.0.9 baseline (ipc-contracts.jsonl) and 1.1.1 IPC blob structure; no arg deserializer callees in core.
7. **open_codex_db** `@0x100726df0`: `rusqlite::Connection::open_with_flags` with flags `32770-a4` (SQLITE_OPEN_READONLY=0x1 | SQLITE_OPEN_URI=0x40 = 0x8002 → 32770 - 4 = 32770-a4 pattern); `busy_timeout` = 5s; error: CoreError code 9 on open failure.
8. **build_rollout_index** `@0x100728940`: scans 2 CodexPaths roots (loop i∈{0,16}×8), filter: filename ends `.jsonl` AND starts `rollout-`; parses filename split by `-` (5+ parts via `from_iter`); reads JSON pointer paths: `/payload/cwd`, `/payload/timestamp`, `/payload/source/subagent/thread_spawn/parent_thread_id`, `/payload/source/subagent/thread_spawn/depth`, `/payload/agent_nickname`, `/payload/agent_role`; converts `\` → `/` in path strings (SSE vectorized path normalization); HashMap build with RandomState.
9. **walkdir::visit** `@0x100729ac0`: recursive `read_dir`; per-file: `metadata` + `Metadata::modified` → mtime as f64 secs; returns vec of tuples `{path_ptr, path_len, parent_len, mtime_f64}` (stride=40 per entry, capacity grows via `grow_one`); stores ALL files found under 2 roots (no extension filter at this level — filter is in `build_rollout_index`).
10. **is_codex_visible_session** `@0x100729230`: source field visibility filter — len=19: XOR check against xmmword_101157680/101157690 (likely `"conversation_thread"` 19B); len=6: case-insensitive char match for `"openai"`; XOR pattern `0x6F637376 | 0x6564` = `"vsco"+"ed"` = `"vscode"` (6B); recursive call for nested workspace path matching; also checks rollout index HashMap for workspace path membership; checks parent path exclusion set.
11. **truncate_chars** `@0x100727180`: UTF-8 aware char truncation (handles 1/2/3/4 byte sequences); used for title/excerpt truncation in response DTO.
12. **rusqlite::Rows::advance** `@0x100754dc0`: `sqlite3_step` → SQLITE_ROW(100)→ok / SQLITE_DONE(101)→reset+done; error propagation via `decode_result_raw`; mutex refcount guard.
13. **Closure drop shim field count**: `drop_in_place<load_sessions::{{closure}}::{{closure}}>@0x100009970` frees 30 String/buffer fields (pairs at offsets +0×3, +1×3, ..., +29×3 = offsets 0,3,6,...,87 in QWORD pairs). This means the closure captures 15 Strings worth of CodexPaths + session-state data for the spawn_blocking call.
14. **idb_save**: ok (called after append_comments, path=AiMaMi.i64).
15. **fake_wall_taxonomy_all_excluded**: genuine_ceiling=false; async body decisively excluded (func_query for `load_sessions.*{poll|async_fn_env|generator|resume}` = 0 hits — only BlockingTask bridge 0x1005976c0); drop_in_place shims are RAII destructors; wrong_VA excluded (unique func_query hit); body_too_large excluded (17942B single decompile pass, ok=true); vtable = all business callees direct demangled static; HTTP-terminal = N/A (pure sqlite+fs, no network); architecture_only = no budget override applied; ICF = not folded (unique symbol + hash mismatch verified).

---

## ## Inferred

1. **DTO: SessionListPayload** (inferred from 1.0.9 canonical + drop shim type name + SQL columns): `{items: Vec<CodexSession>, total: i32}` FLAT layout. Item `CodexSession` 15 fields (from 1.0.9 confirmed): `{id, fileSize, filePath, threadName, updatedAt, projectName, projectPath, parentSessionId, depth, agentNickname, agentRole, isArchived, excerpt, projectPathMissing, isConversationThread}`.
2. **DTO drift vs C5 current**: `SessionListPayload` in 1.1.1 (and 1.0.9) is FLAT `{items, total}` — C5 current impl uses `SessionTreePayload` with grouped project tree (`{projects: Vec<ProjectGroup>, totalSessions, totalSizeBytes, databasePath, databaseExists, scannedAt, items?}`). This is an intentional C5 divergence (product decision), not a 1.1.1 change.
3. **CodexPaths derivation**: 2 roots enumerated in build_rollout_index (consistent with 1.0.9 `home1`+`home2` dual-root pattern). Exact paths constructed by `CodexPaths::resolve_codex_home` + `CodexPaths::from_home`.
4. **Rollout index keys**: workspace path (normalized, `\`→`/`) mapped to `{depth: u8, rollout_data: ...}` including subagent spawn metadata. Used in `is_codex_visible_session` to filter sessions by workspace membership and subagent classification.
5. **Error envelope**: `CoreEnvelope` discriminant `0x8000000000000000` = Err variant; code 9 = serde/IO/rusqlite open failure; mutex-poison panic is unhandled (`panic!` path in `prepare_with_flags` callchain).
6. **Delta vs 1.0.9**: No behavior change confirmed. Function symbol renamed (`h6efd1054dc7f493d` vs 1.0.9 `h3f76237f56310fb0`) due to recompile, but SQL/DTO/side-effects/argKeys identical. New rollout-index JSON pointer paths in build_rollout_index suggest possible new rollout fields (subagent depth/parent_thread_id) added vs 1.0.9, but same filesystem walk logic.
7. **Side effects**: READ-ONLY — SQLite threads SELECT only + rollout-*.jsonl walk under 2 CodexPaths roots (read_dir + OpenOptions read + serde). NO fs::write, NO sqlite-write/DELETE, NO spawn, NO HTTP, NO sidecar.
8. **IPC registration chain**: 1.1.1 uses shared `respond_async_serialized_inner` blob (command name at offset within blob at 0x1010e7311). No standalone `load_sessions` symbol in 1.1.1 run module — inlined into shared IPC dispatcher (consistent with other 1.1.1 commands: get_relay_proxy_status, fetch_relay_models_draft pattern).

---

## ## Unknown

1. **dim1 Frontend CCF** (UI trigger, invoke wrapper, state mutation on return) — `owner-map-111.jsonl` status=shared/not_yet_queried for load_sessions dim1; blocks full readyToImplement promotion; consistent with 1.0.9 baseline (session=wf-aimami109-sessions-analytics established dim1 `consumerStartReady` via ipc-contracts.jsonl).
2. **Exact load_sessions IPC closure VA** — no standalone `codexmate_lib::commands::sessions::load_sessions` symbol in 1.1.1; shared dispatcher pattern means no per-command closure VA assignable; closest proxy is `respond_async_serialized_inner @0x1001234d0`.
3. **CodexPaths exact paths** (home1, home2 string values): constructed dynamically from `~/.codex` + platform paths; not decoded in this session.
4. **Full rollout-*.jsonl JSON schema** delta vs 1.0.9: new pointer paths `/payload/source/subagent/thread_spawn/parent_thread_id` and `/payload/source/subagent/thread_spawn/depth` suggest new subagent spawn fields; whether these were in 1.0.9 unknown.
5. **is_codex_visible_session source field full enum**: len=19 XOR confirmed (likely `"conversation_thread"`); len=6 `"openai"` and `"vscode"` confirmed; other source values (e.g. `"codex"`, `"human"`) not confirmed in this session.
6. **Row deserialization closure** (`load_codex_threads::{{closure}}`): drop shim only found at 0x10073e630; body not decompiled (medium-priority); maps rusqlite Row columns to CodexThreadRow struct; 9 SQL columns → struct fields.
7. **Windows platform**: Windows Unknown — separate producer task required for win64 binary.
8. **dim6 test/acceptance mapping**: C5 implementation side; not reverser's scope.
9. **parentSessionId, depth field population**: rollout index lookup determines `parentSessionId`/`depth` for subagent threads; exact HashMap value layout (offset 88→parentSessionId, offset 96/104→depth per decompile) not fully mapped.
10. **truncate_chars max_len param**: called for title/excerpt; max char count value not extracted in this session (likely 100 or 200 from 1.0.9 baseline).
