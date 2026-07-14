# evidence — get_system_info (AiMaMi 1.1.8, windows-x64)

session: <审计会话> · machine: <本地机器>
owner_va: null (genuinely absent — see below) · core dispatcher_va (reference only): 0x1403cf5b0
binary: `raw/binary/AiMaMi 1.1.8 win64.exe` — 分析工具就绪门
uptime_sec=212529.038, 反编译就绪=true, module=`AiMaMi 1.1.8 win64.exe`, idb_path=
`<证据库> 1.1.8 win64.exe.i64`) before any find_regex/func_query/find_bytes call this round.

## Confirmed

- `get_system_info` is a real, active frontend IPC wrapper on windows-x64 1.1.8: `getSystemInfo:()=>te("get_system_info")`,
  `argKeys=[]`, `kind=tauriInvokeWrapper`, file `assets/index-CX-I_QAq.js:86`
  (`raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 99). The command is listed in
  `intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-same.win.txt` line 34 — i.e. it is
  **not** new in 1.1.8, it has been part of the frontend command surface unchanged since at least
  1.0.9 on both platforms.
- The command's Rust-side owner symbol **does** exist on macOS: `owner_va=0x1006c9110`,
  `owner_symbol=__ZN13codexmate_lib8commands6system15get_system_info17h4766a9754b0ff435E`,
  `module=commands::system`, `source=func_query_clean_top_level_symbol`
  (`intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` line 38). This proves
  the command is a genuine, currently-shipping product feature on at least one platform, not a
  dead/legacy stub across the board.
- On **windows-x64 1.1.8**, the literal ASCII bytes `get_system_info` (15 bytes: `67 65 74 5f 73 79
  73 74 65 6d 5f 69 6e 66 6f`) do **not** exist anywhere in the compiled binary. This was confirmed
  by 5 independent methods, 2 of them this round live against the current IDB, 1 a full raw-byte
  scan independent of 反编译器's string-recognition heuristics:
  1. This session's own STAGE1 owner-map discovery pass already recorded `present:false` with
     method `string_pool_absent(anchored+unanchored+substring+targeted_api_import_xref_search,0_hits)`
     (`intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` line 38).
  2. This round's live `find_regex {"pattern":"get_system_info"}` → `{"n":0,"matches":[]}`.
  3. This round's live `func_query {"name_regex":"get_system_info"}` → `{"data":[],"next_offset":null}`.
  4. This round's live `func_query {"name_regex":"commands6system"}` → `{"data":[],"next_offset":null}`
     (confirms the entire `commands::system` Rust module path is unresolvable on windows-x64,
     consistent with this binary being fully symbol-stripped, as already documented for the sibling
     `get_relay_provider_quota` leaf this same session).
  5. This round's live `find_bytes {"patterns":["67 65 74 5f 73 79 73 74 65 6d 5f 69 6e 66 6f"]}`
     (raw hex byte-pattern scan of the entire image, independent of whether 反编译器 auto-recognizes the
     bytes as a "string") → `{"n":0,"matches":[]}`.
- **Positive control (rules out tooling/methodology failure)**: the identical `find_regex` method
  was run this round against 6 sibling command-name literals of comparable or shorter length —
  `load_sessions`(13), `get_device_id`(13), `restart_codex`(13, 3 hits), `run_daemon_once`(15),
  `switch_account`(14, 2 hits), `logout`(6) — every one resolved with `n>=1`. `get_notification_client_state`
  (30 chars, a much longer literal) was also confirmed present at `0x14133b52f`. This rules out a
  short-string SIMD/immediate-inlining tooling blind spot as the explanation: the absence is
  command-specific, not a general string-length artifact.
- Windows-API import strings `GetSystemInfo`/`GetNativeSystemInfo` (kernel32) do exist in the binary
  (`0x1413c7950`, `0x1413c7c58`, `0x14195ac68`) but these are unrelated Win32 API import names, not
  the Tauri IPC command-dispatch literal — already flagged as a known false-positive class in this
  session's owner-map methodology (`targeted_api_import_xref_search`).
- The overall windows IPC dispatch architecture is unchanged vs 1.0.9/1.1.1 this round
  (`intermediate/aimami/1.1.8/windows-x64/version-delta/win-divergence-118.json`): a single
  19155-byte main dispatcher at `0x1403cf5b0` (112 callees) handles every command via string-literal
  xref, exactly the mechanism that successfully resolved the sibling `get_relay_provider_quota` leaf
  this session — so the negative result here is not an artifact of a changed/obfuscated dispatch
  mechanism, it is a genuine absence of this one command's dispatch literal.

## Inferred

- The most likely explanation for the absence is that the Windows-side `#[tauri::command]` handler
  for `get_system_info` was removed from (or never added to) the `tauri::generate_handler![...]`
  registration list for the windows-x64 build target, while the shared cross-platform frontend
  TypeScript bundle still exports and calls the `getSystemInfo` wrapper unconditionally — i.e. a
  platform-specific dead/unreachable frontend call, not a bug in this reverse-engineering pass.
- Given the migration-source baseline (`raw/aimami/1.1.1/windows-x64/system/get_system_info/evidence/reverse.md`,
  session `<审计会话>`, out-of-scope for this round's 1.0.9→1.1.8 comparison
  but cited per the pipeline's old→new migration-source convention) recorded a **working** windows
  dispatch chain at depth 5 (`get_system_info_ipc_dispatcher_branch_sys_111@0x14001D130` →
  `get_system_info_cmd_owner_sys_111@0x140835CC0` → field_builder/serialize/drop tree, itself
  structurally matched to a 1.0.9 windows chain rooted at `sub_140070050`), it is inferred that the
  windows-side implementation was live at least through 1.1.1 and was removed sometime in the
  1.1.1→1.1.8 window — this exact removal point is not pinpointed this round since 1.1.1 is out of
  this round's comparison scope (not independently re-verified live against a fresh 1.1.1 反编译器
  session this round; the 1.1.1 finding is taken as previously-recorded fact, not re-derived).
- It is inferred (not confirmed) that invoking `get_system_info` from the shipping Windows 1.1.8 app
  would fail at runtime with a Tauri "command not found"/deserialization-mismatch style error,
  since no dispatch literal or owner function exists to service it — this is an inference from the
  dispatch-architecture model documented in `win-divergence-118.json`, not an observed runtime error
  (no live app execution was performed this round; this pipeline only does static 反编译器/binary
  analysis, never runs or patches the target binary).

## Unknown

- The exact 1.1.1→1.1.8 sub-version or build commit at which the windows handler was dropped is
  Unknown — this round's scope skips 1.1.1 as an out-of-scope intermediate version per the task's
  own instructions, so no live re-verification against a 1.1.1 IDB was performed this round.
- Whether the windows-x64 1.0.9 build (prior to 1.1.1) also had a working `get_system_info` handler
  is Unknown from this round's own live evidence; the only signal is a secondhand note inside the
  1.1.1 evidence file itself ("1.0.9 windows/system/get_system_info: readyToImplement=false,
  README dim6 empty" plus a cited `sub_140070050` call-tree root) which was not independently
  re-opened or re-verified this round.
- Whether the macOS 1.1.8 build's confirmed owner (`0x1006c9110`) is actually reachable at runtime
  from the macOS frontend (i.e. whether this is a genuine cross-platform capability gap — mac has
  it, windows doesn't — or whether mac's own dispatcher wiring has some other gate) is Unknown;
  this round's macOS owner-map entry is an angle-A discovery-only record (symbol resolved, no full
  gold-leaf decompile/call-tree performed for the mac side of this command).
- Whether the windows frontend bundle's `getSystemInfo` wrapper is actually invoked anywhere in the
  current UI code path (i.e. whether this is a live, user-reachable dead call, or genuinely
  unreachable/orphaned frontend code no UI ever calls) is Unknown — this round only confirmed the
  wrapper's existence in the bundled JS asset table, not its live call-graph reachability from any
  specific UI component.
- Whether there exists some alternate, non-string-literal dispatch path for this specific command
  (e.g. a numeric/hash-based fast-path unique to this one command) that would not surface via
  string-pool or raw-byte scanning is Unknown in the strict sense that no such mechanism was
  observed anywhere else in this binary's dispatch architecture (`win-divergence-118.json` documents
  a single uniform string-literal-driven dispatcher for all 131 commands with no alternate path
  found for any other command this session), making this hypothesis unlikely but not disproven.

## Delta vs baselines

- **vs 1.0.9**: `get_system_info` is listed in `cmd-same.win.txt` (unchanged frontend command since
  1.0.9), so this is **not** a "new in 1.1.8" command from the frontend's perspective. No live
  1.0.9 windows-x64 backend evidence exists on disk this round to independently confirm whether the
  1.0.9 backend handler existed (secondhand note in the 1.1.1 evidence file suggests it did, as
  `sub_140070050`, but this round did not re-open or re-verify that claim).
- **vs 1.1.1** (out-of-scope baseline, cited only as migration-source evidence per pipeline
  convention, not re-claimed as this round's comparison baseline): the 1.1.1 windows build had a
  **confirmed working** dispatch chain (depth 5, `get_system_info_ipc_dispatcher_branch_sys_111` →
  `get_system_info_cmd_owner_sys_111` → field_builder/serialize/drop). The 1.1.8 build has **zero**
  trace of the command's dispatch literal anywhere in the binary (5-method exhaustive negative,
  including a full raw-byte scan of the entire image). This is recorded as a **genuine
  windows-side regression/removal finding for the 1.1.1→1.1.8 window**, not a decompile-depth
  ceiling and not a tooling artifact (ruled out via positive-control sibling-command checks above).
  The macOS side, by contrast, still has a live owner symbol in 1.1.8 — so this looks like a
  windows-specific capability drop, not a cross-platform feature removal.
