# evidence.md — delete_sessions (AiMaMi 1.1.1 macOS ARM64)

**Session**: <审计会话> (integrity_recovered — supersedes <审计会话>)
**Machine**: <本地机器>
**Date**: 2026-06-17
**Prior Session**: <审计会话> (2026-06-16) — misclassified as same-sweep; delta_vs_109 was deferred
**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**IDB**: AiMaMi.i64 (hexrays_ready=true, uptime=82534s)
**Module**: codexmate_lib::commands::sessions
**Command**: delete_sessions (14/76)
**delta_class**: integrity_recovered

---

## ## Confirmed

- **Owner VA**: `0x10072e1c0` — `codexmate_lib::commands::sessions::delete_sessions` (size=0x431, has_type=true)
- **Core impl VA**: `0x100727410` — `codexmate_lib::core::sessions::delete_sessions` (size=0x134c, has_type=true)
- **IPC dispatch xref**: `0x100308af8` in `codexmate_lib::run::{{closure}}` (single xref, IPC routing confirmed)
- **argKeys**: `["ids"]` — frontend sends `{ids: t}` where t is array of session ID strings; confirmed in ipc-contracts.jsonl line 86 col 25785
- **argObject**: `"{ids:t}"` — confirmed in frontend IPC contracts
- **Empty ids fast-path**: if len(ids)==0, returns `CoreEnvelope::Ok(Vec::empty)` immediately (no DB open, no file ops)
- **SQL stmt 1**: `DELETE FROM thread_spawn_edges WHERE child_thread_id = ?1 OR parent_thread_id = ?1` (bound per session id)
- **SQL stmt 2**: `DELETE FROM threads WHERE id = ?1` (bound per session id, executed after stmt 1)
- **DB access**: `open_codex_db` uses `rusqlite::Connection::open_with_flags` with flags `32770 - a4` (read-write mode), followed by `busy_timeout(5s, 0)`
- **DB path source**: `a2[13]`, `a2[14]` — pointer+len fields from AppState passed via mutex guard
- **File deletion**: `std::sys::fs::remove_file` called for each matched rollout file (path from rollout index)
- **Rollout index scan**: `build_rollout_index` scans 2 dirs (`AppState+120` and `AppState+144`), finds `rollout-*.jsonl` files (magic check: ends in `rollout-*.jsonl`, `-rollout` suffix 8 chars), builds HashMap<session_id, {path, mtime}>
- **walkdir::visit**: recursive readdir, collects `(path_ptr, path_len, dir_entry_name, mtime, mtime_secs)` tuples; recurses into subdirs; uses `std::fs::Metadata::modified`
- **Global state JSON rewrite**: reads `codex-global-state.json` at path derived from serde field `"/payload/model/payload/model_reasoning_effort.codex-global-state.json"`, line-by-line serde_json parse, filters out lines where `json["id"]` matches any session id in delete set, rewrites filtered lines (newline-joined) via `std::fs::write`
- **Response type**: `CoreEnvelope<Vec<(path, mtime)>>` — Ok wraps a Vec of (path_string, mtime_float) tuples for deleted sessions; each entry is a rollout file path + mtime
- **Error type**: `CoreEnvelope<Err(String)>` — CoreError code 9/Other for SQLite errors (formatted as "sqlite delete spawn edge: <rusqlite_error>" or "sqlite delete thread: <rusqlite_error>"); CoreError code 2/IoError for fs::remove_file and fs::write errors
- **Four-angle A (func_query)**: name_regex `.*delete_sessions.*` → 2 hits: `0x100727410` (core) + `0x10072e1c0` (command) — PASS (unique owner)
- **Four-angle B (string pool)**: find_regex `delete_sessions` → `0x101147f2d` IPC registration blob confirming command name in dispatcher — PASS
- **Four-angle C (frontend IPC)**: ipc-contracts.jsonl → command=delete_sessions, argKeys=["ids"], argObject="{ids:t}" — PASS
- **Four-angle D (owner-map + INDEX)**: owner-map-111.jsonl status=not_yet_queried, INDEX.jsonl has no 1.1.1 delete_sessions entry — ADDITIVE, no collision — PASS

---

## ## Inferred

- **Session ID format**: strings used as HashMap keys and as SQL bind params; exact format (UUID vs path segment) not read from binary, inferred from SQL `?1` bind and JSON `index_into("id")` key
- **AppState layout offsets**: `AppState+120` / `AppState+144` are the two rollout scan dirs; `AppState[13]`/`AppState[14]` are DB path ptr/len; these are struct field offsets, not decompiler-named fields
- **rollout file naming**: file is detected by: (a) ends with `.jsonl`, (b) basename includes `-rollout` as prefix-like segment (decompiled magic check: `*(_QWORD *)v63 != 0x2D74756F6C6C6F72LL` — little-endian `rollout-` 8 bytes), (c) file extension check `.json` (4B) + `nl` (2B)
- **JSON path key for global-state**: the constant `"/payload/model/payload/model_reasoning_effort.codex-global-state.json"` appears in string context at `0x101159635`; the actual global-state file path is constructed from AppState fields, not hardcoded
- **build_rollout_index key format**: key built by `alloc::str::join_generic_copy` joining segments from rollout JSON fields: `/payload/cwd`, `/payload/timestamp`, `/payload/source/subagent/thread_spawn/parent_thread_id`, `/payload/source/subagent/thread_spawn/depth`, `/payload/agent_nickname`, `/payload/agent_role`, `subagent/thread_spawn/parent_thread_id`, `subagent/thread_spawn/depth` with delimiter `-`
- **Ordering**: SQL deletes run first (for each id), then file deletions, then global-state JSON rewrite
- **busy_timeout(5s)**: `rusqlite::Connection::busy_timeout` called with 5 seconds after open_with_flags; reduces SQLite lock contention
- **Mutex acquisition**: AppState mutex locked before entering core impl (in tauri command thunk); lock held for duration of entire delete operation
- **Return on empty ids**: fast path at line `if !a4` returns `CoreEnvelope::Ok([])` without touching DB or files

---

## ## Unknown

- **session_id exact string format**: not extracted (UUID4 / hash / path-derived — unknown)
- **AppState struct field names**: offsets known (120, 144, 13*8, 14*8) but Rust field names not recovered (struct not fully typed in IDB)
- **codex-global-state.json full schema**: only `id` field confirmed via `index_into`; other fields unknown
- **rollout JSON schema**: only `id` field accessed; full schema unknown
- **Vec<(path, mtime)> exact serde field names**: serde derive — not decompiler-visible; response shape is Vec of 2-tuples, not named struct
- **Two rollout scan directories exact paths**: `AppState+120` and `AppState+144` — absolute paths depend on AppState initialization, not recovered here
- **CoreError numeric codes confirmed**: code 9/Other (SQLite format error) and code 2/IoError (fs errors) — same as other commands; mapping confirmed by CoreError Display impl at `0x10058fda0`
- **walkdir depth limit**: recursive but no depth cap visible in decompile; visits all subdirs
- **global-state.json parse behavior on invalid JSON lines**: `serde_json::de::from_trait` returns Err for non-JSON lines; `core::ptr::drop_in_place<Result<Value,Error>>` drops and the line is preserved in output (not deleted)
- **Windows platform behavior**: not examined; Windows evidence must be independently produced
- **DB schema version**: not checked in this command; assumed compatible
- **Ordering of IDs in response Vec**: order matches rollout index iteration order (hashmap — undefined order)

---

## ## Delta Analysis vs 1.0.9 (integrity_recovered)

**Classification**: `integrity_recovered` — prior session <审计会话> deferred `delta_vs_109` without completing analysis; this session closes the loop.

**Evidence basis**:
- 1.0.9 macOS 逆向分析 closure (`delete_sessions-ida-closure.json`): single callee listed = owner `0x1005759ec` only; threading_model="sync selected-id destructive mutator; no async/spawn"; side_effect_boundary_closed=true; conclusion=accepted_full_leaf_100. The 1.0.9 closure was **too shallow** — it did not enumerate sub-callees, SQL statements, or file operations.
- 1.0.9 `load_sessions` deep-reverify (m3max audit): found `build_rollout_index::h12a196a1d1e19410` (0x100576880), `open_codex_db::hffedd49680e6747a` (0x1005755c8), `walkdir::visit` (0x1005776c4) and SQL strings `DELETE FROM thread_spawn_edges WHERE child_thread_id = ?1 OR parent_thread_id = ?1`, `DELETE FROM threads WHERE id = ?1` in the **1.0.9 binary string pool** (adjacent to sessions module code).
- 1.0.9 Windows string neighborhood: confirmed same SQL blob (`DELETE FROM thread_spawn_edges...DELETE FROM threads...`) present in 1.0.9 Windows binary.

**Conclusion**: The `thread_spawn_edges` table and its deletion, `build_rollout_index`, rollout file deletion, and `codex-global-state.json` filter-rewrite were **all present in 1.0.9**. The 1.0.9 逆向分析 closure simply did not document them. This is **not a functional binary delta** between 1.0.9 and 1.1.1 for `delete_sessions`.

**True delta classification**: `same_behavior` — the app-level callee set (build_rollout_index / open_codex_db / walkdir::visit / rusqlite::execute / fs::remove_file / serde_json / fs::write / global-state JSON rewrite) is present in both versions. The 1.1.1 documentation is complete; the 1.0.9 documentation was incomplete.

**Noise filter applied** (per pipeline rules — do not count as delta):
- VA addresses changed (1.0.9 owner `0x1005759ec` → 1.1.1 owner `0x10072e1c0`): compiler relayout, not app behavior change
- Rust symbol hash suffixes changed (`hffedd49680e6747a` → `h757fb42a93d6f5e2` for open_codex_db): compilation artifact
- Stack frame size / register allocations: decompiler noise

**What IS different (documentation gap, not binary gap)**:
- 1.0.9 逆向分析 closure listed 0 sub-callees; 1.1.1 closure documents full callee tree to depth ≥5
- 1.1.1 explicitly confirms `thread_spawn_edges` as a separate table (subagent spawn tracking schema)
- 1.1.1 response type documented as `CoreEnvelope<Vec<(path_string, mtime_float)>>` vs. 1.0.9 documented only as "success/error envelope"

**Gate**: `integrity_recovered` — delta loop closed; existing 1.1.1 pseudocode, call-tree, and evidence are accepted as ground truth; no re-reversal needed.

---

## ACCEPTANCE (dim6 — <审计会话>)

**Gate**: strictImplementationUse → acceptance-draft（dim5 win Unknown 唯一缺口；dim4 全闭合）

### happy_path
- 输入 `{ids:["session-abc","session-def"]}` → CoreEnvelope<Vec<(path_str, f64)>>
- 响应是被删除的 rollout 文件路径 + mtime，NOT session 记录本身
- 副作用有序：mutex lock → DB open → DELETE thread_spawn_edges × n → DELETE threads × n → DB close → build_rollout_index + remove_file × n → filter+rewrite codex-global-state.json → mutex unlock

### boundary/error
- ids=[] → Ok([]) fast-path，无 SQL 无 fs 操作
- SQLite DELETE thread_spawn_edges 失败 → CoreError(9/Other, "sqlite delete spawn edge: <rusqlite::Error>")
- SQLite DELETE threads 失败 → CoreError(9/Other, "sqlite delete thread: <rusqlite::Error>")
- fs::remove_file 失败 → CoreError(2/IoError)
- global-state.json 某行非法 JSON → 行被保留（not deleted，not error）

### side_effect_asserts
- threads 表 id 在 ids 内的行被删除
- thread_spawn_edges 中 child/parent 在 ids 内的行被删除
- 对应 rollout-*.jsonl 文件被 remove
- codex-global-state.json 中 json["id"] 匹配行被过滤

### test_mapping
- unit: core::sessions::delete_sessions (mocked rusqlite + mocked fs)；empty-ids fast-path；invalid JSON line 保留行为
- e2e: 真实 SQLite DB + 真实 rollout 目录；响应 Vec<(path,mtime)> 格式确认

### dim6_basis
interfaces/delete_sessions_dto.md Side Effects 有序列表 + Error Envelope; evidence.md C3 SQL statements + C4 rollout index + C5 global-state rewrite
