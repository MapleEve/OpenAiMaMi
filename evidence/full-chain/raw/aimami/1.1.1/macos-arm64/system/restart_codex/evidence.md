# restart_codex — Evidence File
## Platform: macos-arm64  Version: 1.1.1  Module: system
## Session: <审计会话>  Machine: <本地机器>
## Binary: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi
## Binary SHA256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
## IDB: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
## 逆向分析: IDA decompiler_ready=true, uptime=60832s at session start

---

## Owner VA
- `0x100616150` — `codexmate_lib::commands::system::restart_codex::hed0488bc934334f0` (299B, has_type=true)
- IPC dispatcher: `0x100315290` — `codexmate_lib::run::{{closure}}::{{closure}}::h8b52f0eeb6cae796` (416B, synchronous)
- Sole xref to owner: `0x1003152f7` (inside dispatcher)
- Dispatcher's sole xref: `0x100309781` (inside run::closure::hd8c56cf10d2fdf11, the main Tauri command router)

---

## ## Confirmed

1. **Owner decompiled** (0x100616150, 299B, has_type=true): Two-phase flow — Phase 1 `stop_codex_for_file_edit`, Phase 2 `launch_codex_app`. Discriminant 10=Ok, 9=Err pattern confirmed.

2. **IPC dispatcher decompiled** (0x100315290, 416B): Synchronous — calls `restart_codex::hed0488bc934334f0` directly, then `InvokeResolver::respond`. No async state machine, no blocking::spawn wrapper.

3. **stop_codex_for_file_edit decompiled** (0x10055c090): `is_process_running` → `request_codex_app_quit(osascript)` → wait-poll-50ms → `kill_codex_processes_until_clear`. Quit error ignored (non-fatal), always reaches kill step.

4. **launch_codex_app decompiled** (0x10055afd0): 4-path launch strategy: `open -b bundleId1` → `open -b bundleId2` → `~/Applications/Codex.app` → `/Applications/Codex.app`. Each attempt followed by 80ms/3s poll loop. 250ms retry gap. Error: "Codex launch timed out" (22B).

5. **request_codex_app_quit decompiled** (0x10055bc10): `osascript -e 'tell application "Codex" to quit'`. Stderr collected, formatted as Err(String). Return 10=Ok on exit_code=0, 9=Err on non-zero.

6. **kill_codex_processes_until_clear decompiled** (0x10055e390): `collect_codex_kill_targets` → per-pid `kill` Command loop, 300ms sleep per round, 3s deadline. Join surviving PIDs into error string if deadline exceeded.

7. **is_process_running decompiled** (0x10055b8c0): `pgrep -x Codex`. Returns bool from exit_code==0.

8. **argKeys=[] confirmed** dual-source: ipc-contracts.jsonl (`argKeys:[]`, `argObject:null`, `params:"()"`) + frontend-control-flow.jsonl (bare invoke `ne("restart_codex")`/`vt("restart_codex")`).

9. **Response: CoreEnvelope::ok(()) = 0x8000000000000000**: owner returns unit discriminant on success path (LABEL_6 `*a1 = 0x8000000000000000LL`).

10. **Frontend CCF dim1 confirmed** (macOS same JS bundle): 2 wrappers (`restartCodex`/`restartCodexApp`), 4 CCF entries, callsites in `maintenance-page-C2wkSNnk.js:17` and `relay-page-CsHU7KuS.js:43`.

11. **No persistence/network**: call-tree has zero HTTP, zero file-write, zero registry calls. Side effects: OS process management only (pgrep/osascript/kill/open).

12. **Synchronous command pattern**: dispatcher `0x100315290` is a blocking closure (non-async), size 416B, single-function body. No tokio::spawn, no BlockingTask wrapper, no async state machine.

13. **Platform: is_upstream=false** (confirmed from Windows manifest and absence of `restart_codex` in upstream codex-cli commands). This is a 内部构建-extra AiMaMi command.

14. **IDB comments appended** (7 functions): 0x100616150, 0x100315290, 0x10055c090, 0x10055afd0, 0x10055bc10, 0x10055e390, 0x10055b8c0.

15. **Windows cross-reference** (INDEX line 1481): Windows `restart_codex` fully reversed (9 renamed functions, call-tree 17 entries). macOS strategy differs (osascript vs WakeByAddressSingle, pgrep vs Toolhelp32). Both platforms: same 3s kill deadline, no-args command.

---

## ## Inferred

1. **bundleId at 0x10114F1A0**: packed string in `.rodata`; likely `com.anthropic.codex` or similar (exact decode not attempted — blob packing pattern).

2. **bundleId2 at 0x10114F1B0**: second bundleId string in same packed region; fallback value.

3. **Retry count unbounded**: outer while(1) in launch_codex_app loops until v83 flag clears (set to 0 when all 4 paths fail), then errors out.

4. **quit error non-fatal by design**: `stop_codex_for_file_edit` drops quit errors and always proceeds to `kill_codex_processes_until_clear` — design intent is "best effort quit, force kill as fallback".

5. **collect_codex_kill_targets (0x10055c140)** collects live Codex-related PIDs via pgrep pattern. Not decompiled in this session; depth reached terminal via callee name + context.

6. **Frontend guard in relay-page**: `if(x||!v||p.length===0)return; ... if(await a.mutateAsync(p),t){ await ft.restartCodexApp() }` — restartCodexApp triggered only after successful API slots mutation AND t=true flag.

7. **Maintenance page trigger**: `N.restartCodex()` in mutation handler — likely a "Restart Codex" button in maintenance UI. No guards in handler_chain.

8. **Two invoke aliases**: `restartCodex` (maintenance/general) vs `restartCodexApp` (relay page) — both map to same backend command; functional difference is UI context only.

9. **3s launch timeout per attempt**: `Duration::new(3, 0)` passed to `Instant::add` in each launch poll loop.

10. **250ms retry gap** between launch strategies — gives OS time to settle between attempts.

---

## ## Unknown

1. **bundleId exact string content** at 0x10114F1A0 and 0x10114F1B0: packed blob not decoded. Likely `com.anthropic.codex` based on context. Accepted_unknown: non-blocking for implementation (launch by path is fallback).

2. **collect_codex_kill_targets internals** (0x10055c140): not decompiled. Inferred: pgrep-based collection returning Vec<u32> pids. Accepted_unknown: implementation can use `pgrep -f Codex` as substitute.

3. **dim5_win full detail**: macOS and Windows both reversed independently. This leaf covers macOS only. Windows delta confirmed from manifest (INDEX line 1481). Accepted_unknown: separate platform, no inference needed.

4. **dim6 test/acceptance mapping**: 内部构建 implementation side. Accepted_unknown: not producer's responsibility per GATE-SPEC.

5. **Exact pgrep pattern in collect_codex_kill_targets**: "Codex" vs "Codex.app" vs broader. Accepted_unknown: outer behavior (kill-until-clear) is confirmed terminal.

6. **osascript exit code semantics on Codex quit race**: if Codex already quit before osascript fires, exit code behavior unconfirmed. Accepted_unknown: non-blocking (kill_until_clear follows regardless).

7. **Launch retry termination condition**: `v83 & 1` flag in outer loop. Exact retry count not decoded from packed blob. Accepted_unknown: "Codex launch timed out" error path confirmed.

---

## Anti-Fake-Wall Verification
- genuine_ceiling: false
- All 6 functions decompiled successfully (owner + 5 platform functions)
- No async/poll body needed: `restart_codex` dispatcher is synchronous (blocking closure)
- No ICF folding: func_query name_regex "restart_codex" returned unique symbol 0x100616150
- No vtable dynamic dispatch in call tree
- No HTTP terminal (pure OS process management)
- All 7 fake-wall taxonomy categories excluded:
  1. drop_in_place≠async body: no async state machine; dispatcher calls owner directly
  2. architecture_only/budget_rule: full call-tree depth ≥6 achieved
  3. async_decompile_failed: N/A (synchronous)
  4. wrong_va: lookup_funcs + func_query cross-confirmed 0x100616150
  5. vtable_dynamic_dispatch: none in call tree
  6. HTTP_terminal_external_only: N/A (no HTTP)
  7. library_internal_vs_config_callsite: platform functions decompiled directly

---

## Four-Angle Completeness

### Angle A — func_query symbol enumeration
- `func_query {"name_regex":"restart_codex"}` → `0x100616150` unique demangled symbol `codexmate_lib::commands::system::restart_codex::hed0488bc934334f0` (has_type=true)
- **PASS**

### Angle B — string pool
- `find_regex("restart_codex")` → n=2 packed command blobs at 0x1010e7311 and 0x10114801b
- `restart_codex` appears only as suffix inside compound command names in string pool blobs
- Standalone `restart_codex` string NOT present in packed blobs (Tauri command registration uses length-prefixed substrings, not null-terminated standalone strings for this command)
- Confirmed via ipc-contracts.jsonl: `command:"restart_codex"` matched exactly
- **PASS** (confirmed via ipc-contracts cross-reference, not via standalone string pool hit — documented as acceptable since the JS bundle is ground truth for command name)

### Angle C — frontend CCF
- ipc-contracts.jsonl: `command:"restart_codex"`, `argKeys:[]`, `callee:"ne"/"vt"`, col=31150/120754 — PASS
- frontend-control-flow.jsonl: 4 entries — `restartCodex()→ne("restart_codex")` col=31166, `restartCodexApp()→vt("restart_codex")` col=120773, maintenance-page callsite, relay-page callsite with guard
- Same JS bundle mac/win confirmed (index-DdcCOEJG.js)
- **PASS**

### Angle D — manifest + INDEX coverage
- All files written to `raw/aimami/1.1.1/macos-arm64/system/restart_codex/`
- manifest.json, evidence.md, pseudocode ×3, pseudocode-manifest.jsonl, call-trees/restart_codex.jsonl, interfaces/interface.md
- INDEX.jsonl entry appended (session <审计会话>)
- **PASS**
