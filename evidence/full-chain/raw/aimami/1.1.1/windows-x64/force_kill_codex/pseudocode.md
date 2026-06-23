# force_kill_codex — 1.1.1 Windows x64 Pseudocode

**Session**: wf-aimami111-delta-20260618-finish
**Machine**: <本地机器>
**Role**: producer
**Binary**: AiMaMi 1.1.1 win64.exe
**Imagebase**: 0x140000000
**IDB**: <本地路径>
**Baseline**: 1.0.9

---

## Phase 1: Soft kill by image name (quit_codex_taskkill_imagename_sys_111)

**VA**: 0x14079FF10
**Size**: 0x2F9 bytes

```c
// quit_codex_taskkill_imagename_sys_111
// Soft-kill: taskkill /IM Codex.exe (no /F flag — unlike 1.0.9)
// Returns Ok(()) tag=10 or Err(String) tag=9
__int64 __fastcall quit_codex_taskkill_imagename_sys_111(__int64 a1)
{
  // Builds: taskkill /IM Codex.exe (CREATE_NO_WINDOW = 0x8000000)
  // NOTE: 1.0.9 used /F flag; 1.1.1 omits /F here (soft signal)
  sub_1410828F0(&v10, "taskkill", 8);   // build OsString
  v13 = 0x8000000;                       // CREATE_NO_WINDOW
  sub_1410827D0(&v10, "/IM", 3);
  sub_1410827D0(&v10, "Codex.exe", 9);
  sub_1410878D0(&v25, &v10);             // spawn Command

  if spawn fails → *a1 = 9 (Err)
  if exit_status != 0 → format "taskkill Codex failed: <status>" → *a1 = 9 (Err)
  else → *a1 = 10 (Ok(()))
}
```

## Phase 2: Fallback per-PID hard kill (quit_codex_fallback_kill_sys_111)

**VA**: 0x1407A44D0
**Size**: 0x552 bytes

```c
// quit_codex_fallback_kill_sys_111
// Hard-kill loop: enumerate PIDs via ToolHelp32, taskkill /F /T /PID per-pid,
// 300ms sleep between poll cycles, 3-second total deadline
__int64 __fastcall quit_codex_fallback_kill_sys_111(__int64 a1)
{
  deadline = sub_141097540(sub_141077C40(), ..., 3s);  // 3-second deadline

  while (true) {
    get_codex_pids_toolhelp_sys_111(&pids);    // ToolHelp32 enumerate

    if pids.result_tag != 10 → propagate Err → break;
    if pids.count == 0 → *a1 = 10 (Ok); goto done;

    if (now >= deadline) break;  // timeout

    // Per-PID loop:
    for each pid in pids:
      spawn "taskkill /F /T /PID <pid>"    // CREATE_NO_WINDOW
      // /F = force, /T = tree-kill
      wait exit status (drop errors best-effort)

    sub_14108D4A0(0, 300_000_000);   // sleep 300ms

    free(pids);
  }

  // Deadline exceeded or Err:
  format "\CODEX_FORCE_KILL_FAILED: <pids_as_string>"  // string @ 0x1412F444A
  *a1 = 9 (Err)
done:
  cleanup pids vec;
}
```

## Coordinator (quit_codex_send_signal_wakebya_sys_111)

**VA**: 0x1407A3C60
**Size**: 0x1D6 bytes
Called upstream to send WakeByAddressAll signal before hard-kill phase.

## Poller (quit_codex_poll_wait_sys_111)

**VA**: 0x1407A39B0
**Size**: 0xC6 bytes
Calls quit_codex_taskkill_imagename_sys_111 then waits.

## PID enumerator (get_codex_pids_toolhelp_sys_111)

**VA**: 0x1407A3090
**Size**: 0x632 bytes
Win32 CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS) + Process32FirstW/NextW.
Matches "codex.exe" or related prefix.
