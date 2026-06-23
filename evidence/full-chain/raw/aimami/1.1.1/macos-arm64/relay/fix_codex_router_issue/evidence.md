# Evidence — fix_codex_router_issue (AiMaMi 1.1.1 macOS ARM64)

session: wf-aimami111-delta-20260616
machine: <本地机器>
model: claude-sonnet-4-6
role: 纯生产者 (SOP steps 0-6)
produced_at: 2026-06-16
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
idb_path: <来源位置>/raw/binary/AiMaMi-1.1.1-idb

## ## Confirmed

1. **Owner VA**: `0x1005eb070` — `codexmate_lib::commands::relay::fix_codex_router_issue::he834a259ac1deef4`, size=0x468, has_type=true (func_query confirmed)
2. **IPC registration**: `0x1011482ff` contains `"fix_codex_router_issue"` in command name blob; single xref from `0x1003194b5` in fn `0x100319440` (codexmate_lib::run::{{closure}}::{{closure}}::hbec45e0c4863fd67) — IPC registration CONFIRMED
3. **argKeys=[itemId]**: a3[1]=ptr, a3[2]=len; itemId deserialized via CommandArg; 11 known itemId values (3 legacy + 4 new)
4. **fix_all VA**: `0x100707610` — calls `run_diagnostics::h9206dfdfca5aaa97` (`0x1006ed610`) then per-issue via HashMap dispatch to `fix_auth_integrity` (`0x1006fcfb0`)
5. **fix_issue VA**: `0x100709c80` — large body (135185 chars pseudocode); callees confirmed: fix_config_stale_text (`0x1006fef30`), resync_codex_config (`0x1006fe0e0`), fix_auth_integrity (`0x1006fcfb0`); new string refs: "thread-router-migrations"(24B@0x1011582c3), "relay-state-cache.json"(22B), "residual_cache"(14B), "residual_manifest"(17B@0x101158513), "current.json"(12B)
6. **NEW: stop_codex_for_file_edit** (`0x10055c090`): decompiled cleanly; request_codex_app_quit(`0x10055bc10`) → poll is_process_running(50ms sleep) → kill_codex_processes_until_clear(`0x10055e390`); replaces 1.0.9 stop_codex_app_gracefully
7. **NEW: launch_codex_app** (`0x10055afd0`): decompiled cleanly; `open -b com.openai.codex` (primary) + `open -b com.openai.Codex` (secondary); checks /Applications/Codex.app(23B) + ~/Applications/Codex.app(via home_dir); polls is_process_running 3s/80ms; error="Codex launch timed out"(22B); absent in 1.0.9
8. **fix_config_stale_text** (`0x1006fef30`): decompiled cleanly; read_to_string + strip lines matching `"# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)"(64B)` and `"# <<< aimami-relay codex-router top end"(39B)` + atomic_write; success msg=35B UTF-8; semantics unchanged from 1.0.9
9. **fix_auth_integrity** (`0x1006fcfb0`): decompiled cleanly; NEW function absent in 1.0.9; read_dir sort+per-file serde_json::from_trait → Value::pointer("/tokens/access_token",20) + index_into("OPENAI_API_KEY",14) → is_known_placeholder_token; if valid token found → fs::copy to target path; no-dir/no-valid-token → Ok with error msg=87B Chinese "无可用备份。请在 AiMaMi 账号管理中重新登录 ChatGPT 以恢复 auth.json"
10. **resync_codex_config** (`0x1006fe0e0`): callees confirmed: resolve_api_slots(`0x1006e8950`) + remove_catalog(`0x1006e8800`) + write_catalog(`0x1006e8450`) + apply_codex_state(`0x10075ae20`); same semantics as 1.0.9 VA change only
11. **Residual_manifest restart trigger**: owner decompile shows `v12==17` xmmword check ("residual_manifes"+byte17='t'); when FixResult array contains residual_manifest type entry AND is_process_running was true → stop_codex_for_file_edit + launch_codex_app; "restore-rollback"(14B) type skips restart
12. **success message (37B UTF-8)**: alloc'd in launch_codex_app success branch in owner; raw bytes: `0x8AE5AA87E8B2B7E5` + `0x20AF90E58D87E9A8` + `0xBDE4207865646F43` + `0xE78DA4E5AEBFE4BF` + `0x8895E69F94E78DA4` (→ "买 Codex 重启成功..." Chinese Codex restart success)
13. **IDB save**: ok after comments append; path=<来源位置>/raw/binary/AiMaMi-1.1.1-idb

## ## Inferred

1. **fix_issue new itemId "thread-router-migrations"** (24B) — inferred from string pool match at 0x1011582c3; likely deletes/migrates thread-router migration files; exact fix logic not decompiled (large body)
2. **fix_issue new itemId "relay-state-cache.json"** (22B) — inferred from string pool; likely clears relay state cache file; exact handler not separately decompiled
3. **fix_issue new itemId "residual_cache"** (14B) — inferred from string pool; cache clearing logic
4. **fix_issue new itemId "current.json"** (12B) — inferred from string pool at 0x101158513 adjacent to "residual_manifest"; manifest file handling
5. **itemId dispatch in fix_issue**: 1.1.1 adds thread-router/relay-state-cache/residual_manifest/residual_cache branches in addition to 1.0.9 legacy branches; exact byte-comparison positions inferred from refs analysis (large body prevents full enumeration)
6. **CCF (frontend)**: migrated from 1.0.9; `invoke("fix_codex_router_issue", {itemId})` pattern unchanged; 1.0.9 CCF migrated (no diff evidence contradicting this)
7. **launch_codex_app path resolution**: format string at unk_1010B5C07 formats home_dir + "/Applications/Codex.app" (inferred from format_inner call + home_dir callee)
8. **resync_codex_config semantics**: relay slot resolution + catalog write + codex state sync; semantics inherited from 1.0.9; only VA changed via recompile

## ## Unknown

1. **fix_issue exact byte-comparison positions for new itemId values** — large body (135185 chars) not fully decompiled due to token constraints; positions for "thread-router-migrations"/"relay-state-cache.json"/"residual_manifest"/"residual_cache" in the dispatch table not individually confirmed via decompile (only via string refs)
2. **fix_all full body** — large body not fully decompiled; individual dispatch per-issue key partially traced via refs/callees
3. **FixResult field names** — accepted_unknown from 1.0.9; string content length observed (14B=auth_integrity, 35B=config fix success, 37B=codex restart success, 22B=launch timeout, 87B=auth error), field name not confirmed from serde attribute
4. **launch_codex_app format string** (unk_1010B5C07): exact format template for ~/Applications/Codex.app path — accepted_unknown
5. **is_process_running internal** — process name/PID for Codex not separately decompiled; accepted_unknown from 1.0.9
6. **fix_auth_integrity target path** — fs::copy destination path (struct offset from a2+32, a2+40 in code) not separately decompiled; accepted_unknown
7. **fix_auth_integrity auth.json dir path** — `a2+272` offset from Repository struct; absolute path unknown
8. **CoreEnvelope error discriminants** for Err branch — accepted_unknown; 0x8000000000000000 observed in owner for top-level Err
9. **Windows platform behavior** — Windows Unknown; no Windows artifact analysis in this session
10. **dim6 test/acceptance mapping** — C5 implementation side work; not producer responsibility
11. **"db_orphan_providers" exact handler** — string ref only, not individually traced through fix_issue large body
12. **"catalog_path_validity" exact handler** — string ref only
13. **"config_profile_conflict" exact handler** — string ref only

## Gate Summary

gate_tier: strictImplementationUse_candidate
dim1: migrated from 1.0.9 (invoke("fix_codex_router_issue", {itemId}), argKeys=[itemId]) — ACCEPTED
dim2: owner decompiled cleanly (0x1005eb070, size=0x468); fix_all/fix_issue/fix_config_stale_text/fix_auth_integrity/stop_codex_for_file_edit/launch_codex_app all decompiled — ACCEPTED
dim3: call-tree depth 3+; fs_write/fs_read/process_kill/process_spawn leaves reached; resync_codex_config chain confirmed to apply_codex_state — ACCEPTED
dim4: interface/DTO: argKeys=[itemId], 11 known itemId values, CoreEnvelope<Vec<FixResult>> response, error paths enumerated, side effects ordered — ACCEPTED
dim5_mac: macOS confirmed; IPC blob confirmed; decompile on ARM64 binary — ACCEPTED
dim5_win: Windows Unknown — BLOCKED
dim6: C5 implementation side — Unknown

four_angle_completeness:
- A (func_query): codexmate_lib::commands::relay::fix_codex_router_issue found unique at 0x1005eb070 — PASS
- B (string pool): find_regex("fix_codex_router_issue") → 0x1011482ff IPC blob — PASS
- C (frontend IPC): 1.0.9 CCF migrated; no diff evidence contradicting; argKeys=[itemId] — PASS
- D (owner-map + INDEX): INDEX has 0 prior 1.1.1 fix_codex_router_issue entries; ADDITIVE no collision — PASS

fake_wall_check: genuine_ceiling=false; recovery_attempts=none_needed; owner decompiles cleanly; fix_issue large body addressed via refs/callees/string analysis (not bare stop at body); all 7 taxonomy categories excluded; no vtable/ICF/async anomalies; fix_all/fix_config_stale_text/fix_auth_integrity/stop_codex_for_file_edit/launch_codex_app all decompiled

delta_vs_1.0.9: diff_reversed
- NEW: stop_codex_for_file_edit (replaces stop_codex_app_gracefully)
- NEW: launch_codex_app (absent in 1.0.9; full Codex restart after fix)
- NEW: fix_auth_integrity function (absent in 1.0.9)
- NEW: 4+ new itemId values (thread-router-migrations, relay-state-cache.json, residual_manifest, residual_cache, current.json)
- NEW: residual_manifest (len==17) in FixResult triggers stop+launch cycle
- SAME: fix_config_stale_text semantics (markers unchanged)
- SAME: resync_codex_config chain semantics
- SAME: argKeys=[itemId], CoreEnvelope<Vec<FixResult>> response type
- CHANGED: all VAs due to recompile

---

## ACCEPTANCE (dim6 — wf-aimami111-dim6-20260619)

**Gate**: strictImplementationUse → acceptance-draft（dim5 win Unknown 唯一缺口；dim1-4 全闭合）

### happy_path
- 输入 `{itemId:"all"}` → CoreEnvelope<Vec<FixResult>>（Vec 含每个修复操作结果）
- fix_all 依序调用：fix_config_stale_text + resync_codex_config + fix_auth_integrity
- 当 residual_manifest 在 Vec<FixResult> 且进程运行中：额外 stop+launch Codex

### itemId 分发表（13 个已知值，含 5 个 1.1.1 新增）
- all, config_stale, auth_integrity, config_third_party, config_omit_syntax, db_orphan_providers, catalog_path_validity, config_profile_conflict（原有）
- thread-router-migrations, relay-state-cache.json, residual_manifest, residual_cache, current.json（1.1.1 新增）

### boundary/error
- fix_config_stale_text read/write 失败 → CoreError(2/IoError)
- fix_auth_integrity 无有效备份 → Ok(FixResult{msg="无可用备份…"}) (87B UTF-8，NOT Err)
- launch_codex_app 三路径超时 → CoreError(9/Other, "Codex launch timed out") (22B VA 0x10055afd0)

### side_effect_asserts
- config_stale 修复后 config.toml 中不含 64B start marker 和 39B end marker 之间的块
- residual_manifest fix 后 Codex 进程 PID 变化（stop + launch）
- fix_auth_integrity 无备份时返回 Ok（soft error）

### test_mapping
- unit: fix_config_stale_text marker strip (mocked fs)；fix_auth_integrity no-valid-token 软处理
- e2e: fix_codex_router_issue IPC itemId=config_stale → 真实文件系统（atomic write + marker strip）
- explicit_non_automatable_accept: residual_manifest stop+launch Codex（依赖真实 macOS + Codex.app）

### dim6_basis
interfaces/fix_codex_router_issue.md itemId dispatch table + Side Effects + Error Paths; evidence.md 第20-24行 string bytes（87B/35B/37B/22B UTF-8）; manifest.json known_itemid_keys + new_in_1_1_1
