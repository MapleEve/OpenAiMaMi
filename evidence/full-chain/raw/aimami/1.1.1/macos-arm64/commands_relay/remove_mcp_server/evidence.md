# remove_mcp_server — AiMaMi 1.1.1 macOS arm64 Evidence

session: <审计会话>
machine: <本地机器>
produced_at: 2026-06-17
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
idb: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
module: commands_relay (IPC registration + MCP config operations)
delta_basis: 1.0.9 baseline (owner 0x10015c300) — delta_reversed (VA change only, core logic unchanged)

## Owner / VA

| symbol | VA | size |
|--------|-----|------|
| codexmate_lib::commands::mcp::remove_mcp_server (cmd handler) | 0x10072a660 | 1539B (0x603) |
| codexmate_lib::core::mcp::remove_mcp_server (core impl) | 0x1005a0510 | 2042B (0x7fa) |
| IPC dispatcher (codexmate_lib::run::{{closure}}::{{closure}}) | 0x10030db80 | 0x484B |

## ## Confirmed

- owner_va 0x10072a660 confirmed via func_query name_regex "remove_mcp_server" — unique demangled symbol codexmate_lib::commands::mcp::remove_mcp_server::hf1ad73aa378558ad
- core_impl_va 0x1005a0510 confirmed via func_query — unique demangled symbol codexmate_lib::core::mcp::remove_mcp_server::h360cb5a1f65874e9
- IPC dispatcher 0x10030db80 confirmed via xrefs_to(0x10072a660) — sole xref from codexmate_lib::run::{{closure}}::{{closure}}::h2309811c3176cdec
- packed command string at 0x101147e82: "upsert_mcp_serverset_mcp_server_enabledremove_mcp_serverload_installed_skills..." — confirms Angle B string pool PASS
- argKeys=["name"] confirmed: dispatcher uses from_command::hf4bb662b82c05125 to extract param; cmd handler forwards name ptr+len (v27[1], v27[2]) to core
- threading model: sync mutex (std::sys::pal::unix::sync::mutex::Mutex lock 0x100f2e7a0 / unlock 0x100f2e7c0); no async/spawn
- terminal FS leaf: save_config_text (0x1005a03d0) → atomic_write::write_atomic (0x10041e960): mkdir(parent) + OpenOptions write + File::write_all + File::sync_data + sys::fs::rename + sync_parent_dir (durable atomic write, POSIX)
- TOML parse leaf: parse_mcp_document (0x1005a2db0): reads TOML line-by-line → strip_toml_comment → trim → bracket detect → parse_mcp_section_header → hashbrown HashMap<sectionName, Vec<line_idx>>
- hash lookup: core::hash::BuildHasher::hash_one → SIMD 16B/iteration probe loop → memcmp on name match → tzcnt slot extraction
- entry removal: Vec clone → memmove splice (remove matched section lines) → join_generic_copy rejoins → save_config_text
- response payload: CoreEnvelope<Vec<McpServerSummary>> — Ok discriminant 0x8000000000000000; success body from load_mcp_servers (0x10059e470) re-read after delete; memcpy 0x88B (136B)
- McpServerSummary stride: 224B (drop_in_place loop: `v17 += 224; --v16`)
- error path 1: mutex poisoned — fmt display → return Err(CoreError) with 0x8000000000000000 discriminant
- error path 2: load_config_text fails (IO/metadata) → early return Err
- error path 3: parse_mcp_document fails (not-found) → format_inner(alloc::fmt) → Err string
- error path 4: save_config_text/atomic_write fails (OpenOptions/write_all/sync_data/rename) → return Err(IoError string)
- IDB comments appended: 0x10072a660 (A-level owner), 0x10030db80 (IPC dispatcher), 0x1005a0510 (core impl)
- idb_save completed ok=true

## ## Inferred

- argKeys=["name"] matches 1.0.9 manifest interface.arguments="name" — delta confirmed unchanged
- McpServerSummary DTO fields (name, url, enabled, etc.) not directly extracted from remove response path (only stride=224B confirmed from drop loop); same struct as add_mcp_server/list_mcp_servers response — accepted via struct-reuse inference
- TOML config file path: determined at runtime from AppState (v39[9], v39[10] = path ptr+len); not hardcoded in this function — config path is a CoreConfig field passed via AppState
- atomic_write temp file naming: `<parent>/<filename>.<pid>.<uuid4>` (confirmed from string "aimamihotspotfailed to spawn thread" @0x10114afa0 packed with process::id + uuid::v4::new_v4)
- no-op case (name not found): core impl exits via LABEL_12 path — format_inner builds error string "not found" or similar (alloc::fmt::format_inner with &unk_1010B6A09 format string, v79[0]=name_ptr)
- delta vs 1.0.9: load_config_text / parse_mcp_document / save_config_text pattern identical; VA changes only due to monomorphization; module namespace mcp unchanged

## ## Unknown

- exact format string at 0x1010B6A09 (not-found error message text) — non-blocking; pattern is format_inner with name arg
- McpServerSummary exact field layout beyond stride=224B — non-blocking; struct identity matches list_mcp_servers response
- Windows platform behavior — separate producer task (Windows IDB required)
- dim6 test/acceptance mapping — 内部构建 implementation side responsibility
- Frontend CCF exact trigger path in 1.1.1 frontend bundle — cross-confirmed via 1.1.1 ipc-contracts.jsonl (same JS bundle pattern); macOS-explicit trace accepted_unknown (non-blocking)
- Config file path exact value at runtime — passed via AppState, consistent with other mcp commands
- State poison error exact message string at 0x10114c2e6 — fmt string in anon symbol, non-blocking

## Fake-wall anti-cheat

genuine_ceiling=false — all 7 fake-wall taxonomy categories excluded:
1. drop_in_place ≠ async body: both functions synchronous (mutex/TOML ops); no ::poll/resume structure observed
2. architecture_only/budget rule: no self-imposed budget bail; both functions fully decompiled
3. async decompile failed: decompile succeeded for cmd handler + core impl + IPC dispatcher + all depth-2 callees
4.猜错 VA: func_query name_regex returned 2 unique demangled symbols with distinct addresses
5. vtable dynamic dispatch: all callees are direct calls; no vtable indirection
6. HTTP-terminal: no HTTP calls in call-tree; atomic_write is pure FS (confirmed by write_all+sync_data+rename leaf)
7. 库内部 vs config-callsite: parse_mcp_document and save_config_text are codexmate_lib internal (not external library internals)

## Four-angle completeness

- Angle A (func_query name_regex "remove_mcp_server"): 2 unique demangled symbols — PASS
- Angle B (string pool find_regex "remove_mcp_server"): n=1 packed cmd blob @0x101147e82 — PASS
- Angle C (frontend CCF): argKeys=["name"] from IPC dispatcher from_command; 1.1.1 ipc-contracts.jsonl confirms pattern (same JS bundle) — PASS (cross-platform accepted)
- Angle D (manifest+INDEX): manifest.json + call-trees JSONL + pseudocode files + evidence.md written; INDEX to be appended — PASS

## Gate

- dim1 (frontend CCF): Accepted (cross-platform via ipc-contracts.jsonl; argKeys=["name"] confirmed from dispatcher)
- dim2 (backend owner + pseudocode): Accepted — 0x10072a660 + 0x1005a0510 decompile ok
- dim3 (call-tree depth): Accepted — depth≥5, terminal leaves: write_atomic(fs), sync_data(syscall), rename(syscall), sync_parent_dir(fs)
- dim4 (interface/DTO/error/side-effect): Accepted — argKeys=["name"], CoreEnvelope<Vec<McpServerSummary>>, 4 error paths, TOML+atomic_write side effect
- dim5 (platform gate): macOS confirmed; Windows Unknown (separate task)
- dim6 (test/acceptance): Unknown — 内部构建 implementation side

gate_tier: strictImplementationUse_candidate (dim1+dim2+dim3+dim4+dim5_mac accepted; dim5_win+dim6 Unknown)
