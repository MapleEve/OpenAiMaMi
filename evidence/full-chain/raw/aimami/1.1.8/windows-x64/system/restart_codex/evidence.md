# evidence — restart_codex (AiMaMi 1.1.8, windows-x64)

session: <审计会话> | machine: <本地机器>
produced_at: 2026-07-13 | batch: windows-x64 deep gold-leaf 15/20
source_binary: `raw/binary/AiMaMi 1.1.8 win64.exe`
source_binary_sha256: `f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10`
(re-computed this round via `shasum -a 256` against the raw/binary/ SOT, matches every sibling
1.1.8 windows-x64 leaf's recorded sha this session)

## 分析工具就绪门

`健康检查` on win 反编译器 returned `status=ok`, `uptime_sec=217127.833`,
`idb_path=<证据库> 1.1.8 win64.exe.i64`, `module=AiMaMi 1.1.8 win64.exe`,
`反编译就绪=true`, `auto_analysis_ready=true`. Module name matches exactly. No retry needed.

## Idempotency check (executed before any write)

`find raw/aimami/1.1.8/windows-x64/*/restart_codex/` returned empty prior to this write (verified
via `ls`/`find` this round: `windows-x64/system/` contained `check_update_installability/`,
`confirm_pending_auto_switch/`, `confirm_pending_auto_switch_and_restart_codex/`,
`get_system_info/`, `has_notch/` -- no `restart_codex/` directory). `grep -n
'"key":"aimami/1.1.8/windows-x64/[^"]*restart_codex' INDEX.jsonl` returned 0 hits for this exact
standalone command (only the sibling combo command `confirm_pending_auto_switch_and_restart_codex`
had a prior INDEX entry). A narrative description of this owner's behavior already existed inside
`REVERSE-STATUS.md` (an earlier shard sub-step this same session that live-decompiled 4 "clean
symbol owner" commands including `restart_codex`), but **no raw/ leaf bundle
(pseudocode+call-tree+interface+evidence+gate-report) existed for it** -- this leaf is the first
full raw-evidence write for this specific command, not a duplicate. gate=ALLOW/first, no takeover
token needed, no collision detected.

## Confirmed

1. Owner resolved and confirmed at `0x14084a390` (`restart_codex_owner_sys`), size 7958 bytes
   (0x1f16), 332 basic_blocks, cyclomatic_complexity=169. Full `decompile()` call this round
   returned the entire body with **0 truncation** (no `decompile_truncated` field in the response),
   distinct from the size-limited `analyze_function()` compact preview which does truncate at
   ~1150 chars for this same address.
2. 4 independent code callers confirmed (`0x140023170`, `0x14027d330`, `0x14027fec0`,
   `0x140354530`) -- all distinct IPC-dispatch landing pads, consistent with the 2 frontend
   wrappers (`restartCodex`/`restartCodexApp`) both invoking command name `restart_codex`
   (`argKeys=[]` both, confirmed in `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl`
   rows 82 and 120).
3. 5-phase Codex.exe locator confirmed byte-for-byte: 10 env-var path candidates
   (LOCALAPPDATA/PROGRAMFILES/PROGRAMFILES(X86) combinations), registry App-Paths query (HKCU+HKLM,
   `reg query ... /ve`), registry Uninstall sweep via PowerShell script (HKCU+HKLM), `where
   Codex.exe`, `where Codex` -- all spawned via the shared `restart_codex_spawn_capture_sys`
   helper (`0x141074BC0`, fully decompiled, 0 truncation, confirmed synchronous
   `WaitForSingleObject(INFINITE)` + `GetExitCodeProcess` pattern).
4. **NEW relaunch mechanism confirmed** (absent from the 1.0.9 baseline): once located, this
   version actively spawns a second PowerShell process (`powershell -NoProfile -WindowStyle Hidden
   -Command <relaunch-script>`) to relaunch Codex.exe, then polls process presence via
   `restart_codex_is_process_running_sys` (`0x140110240`, fully decompiled, 0 truncation, confirmed
   genuine `CreateToolhelp32Snapshot`+`Process32FirstW`/`Process32NextW` enumeration with
   case-insensitive SIMD name-fold compare against literal `"Codex"`).
5. Error path confirmed: if all 5 locate phases fail, returns discriminant tag=7, error string
   `"Codex.exe not found"` (19 bytes, literal confirmed in owner's string list).
6. Depth-3/4 termini confirmed genuine Win32 API calls, not shims: `WaitForSingleObject` +
   `GetExitCodeProcess` (kernel32 imports, direct calls in `restart_codex_spawn_capture_sys`);
   `CreateToolhelp32Snapshot`+`Process32FirstW`+`Process32NextW` (kernel32 imports, direct calls in
   `restart_codex_is_process_running_sys`); `CreateProcessW` (confirmed present in
   `restart_codex_cmd_spawn_raw_sys`@`0x141069e60`'s callee list, the shared
   Rust-stdlib-process-spawn primitive underlying every external invocation this command makes).

## Inferred

1. Discriminant tag `9` (returned when the hidden-relaunch PowerShell spawn itself reports empty
   stdout) is inferred to represent an "early success / launch-initiated" signal distinct from tag
   `10` ("process-presence-confirmed success"), based on the code shape (tag=9 returns immediately
   without entering the process-presence poll loop, whereas tag=10 is only set after the poll loop
   observes the target process). Not independently verified against how the frontend/IPC consumer
   actually branches on these two values.
2. The 1.1.8 owner's retention of the exact same App-Paths/Uninstall registry string literals as
   the 1.0.9 baseline is inferred to mean the locate-phase logic itself is largely unchanged
   (continuity), with the relaunch phase being the sole substantive addition -- inferred from
   byte-identical string literals and structurally analogous phase ordering, not from a
   line-by-line diff against a full 1.0.9 windows decompile of the equivalent locator (the 1.0.9
   baseline's locator lives in a separate function, `check_update_installability_core_sys`, per its
   own DISTILLED entry, so a literal function-body diff was not performed this round).
3. The sleep interval constant `0x8000000` (100ns units) observed in the poll loops is inferred to
   represent roughly 0.2 seconds per iteration based on the raw value, consistent in magnitude with
   similar poll-sleep constants documented elsewhere this session for sibling commands, though the
   exact intended real-world duration was not independently cross-checked against a Rust
   `Duration`-construction call site this round.

## Unknown (not fabricated, not papered over as accepted_unknown without recovery_attempts)

1. Whether the 1.0.9 baseline's explicit "quit old Codex process" step
   (`signal_codex_quit_wake`+`quit_codex_wait_fallback_kill_sys`, 8s wait then `taskkill.exe`
   fallback) still exists anywhere in the 1.1.8 `restart_codex_owner_sys` body. Recovery attempts:
   (a) searched the full decompiled owner body for a direct call shape matching the 1.0.9
   `quit_codex_wait_fallback_kill_sys` signature (8-second `WaitForSingleObject`-style wait +
   `taskkill` spawn) -- not found in the traced locate/relaunch call graph; (b) did not perform a
   `find_regex`/`xrefs_to` sweep for a `taskkill` literal string specifically scoped to this owner's
   callee set this round (out of budget) -- recorded Unknown, not asserted removed.
2. Exact semantic distinction between response discriminant tags `9` and `10` (see Inferred #1) --
   recovery attempt: reviewed both code paths that set each tag, confirmed they are reached via
   genuinely different control-flow branches (early-return vs post-poll-loop), but did not trace
   how the IPC resolver / frontend TypeScript layer discriminates between them (would require
   cross-referencing `assets/index-CX-I_QAq.js` response-handling code for the `restartCodex`/
   `restartCodexApp` wrapper call sites, not performed this round).
3. Exact PowerShell relaunch script contents (template `unk_14135AC6E`) -- the template address and
   its substitution mechanism (`sub_14108F360`) were observed and referenced, but the resulting
   script string was not independently reconstructed/rendered this round; recovery attempt:
   confirmed the template is referenced via the generic string-formatting helper also used for the
   Uninstall-sweep script (template `unk_14135ADE6`), consistent shape, but did not call
   `get_bytes`/`get_string` on the template address to extract the literal placeholder syntax.

## Delta vs 1.0.9 baseline (summary; full detail in call-trees/restart_codex.jsonl `delta_vs_1_0_9`)

**This command changed between 1.0.9 and 1.1.8.** The 1.0.9 windows baseline
(`internal-reverse/aimami/1.0.9/windows-x64/restart_codex_cmd_wrapper/DISTILLED.md`,
owner=`0x14026f140`, 547B thin wrapper) only quits the running Codex process and locates the
executable path -- it never spawns a new Codex.exe itself. The 1.1.8 owner
(`0x14084a390`, 7958B, not a thin wrapper) retains the same locator string literals but adds a
genuinely new side effect: it actively relaunches Codex.exe via a hidden PowerShell process and
polls for process-presence confirmation. This is a real behavioral addition (delta), not a value
tweak, and is independently consistent with this same session's REVERSE-STATUS.md narrative
sub-entry that first surfaced this finding via a callees-based recovery pass; this leaf formalizes
that finding into the first full raw/ evidence bundle for this exact standalone command (as opposed
to the sibling combo command `confirm_pending_auto_switch_and_restart_codex`, which already had its
own separately-completed leaf this session).

## Fake-wall taxonomy (all 8 categories explicitly excluded, no accepted_unknown/genuine_ceiling
claimed on the owner)

`drop_in_place`=N/A (owner is a real named IPC-dispatch-reachable command implementation, not a
destructor); `architecture_only`=N/A (full decompile, 0 truncation, no budget bail); `async_decompile_failed`=N/A
(synchronous body, no `::poll`/coroutine state machine observed); `wrong_VA`=N/A (owner-map hit
cross-checked against 4 real distinct IPC-dispatch callers, unique address, no ICF-fold ambiguity);
`vtable`=N/A (all key callees are static named/addressed calls, no indirect dynamic dispatch on the
locate/relaunch path); `HTTP_terminal`=N/A (no network I/O; side effects are process-spawn only);
`library_internal`=applies ONLY to the depth3 `restart_codex_cmd_spawn_raw_sys`@`0x141069e60`
generic Rust-stdlib process-spawn primitive (correctly excluded as shared infra, not the
command-specific owner itself, which IS fully attributed and fully decompiled);
`body_too_large`=N/A for the owner (7958B fully decompiled in one pass); applies only to the same
depth3 generic stdlib function (18845B, partially transcribed, terminus already confirmed via its
callee list containing `CreateProcessW`).
