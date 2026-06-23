# restart_codex — AiMaMi 1.1.1 Windows x64

**Session**: <审计会话>
**Machine**: <本地机器>
**Date**: 2026-06-16
**Binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**IDB**: <本地路径>
**Gate**: strictImplementationUse (dim1-5 closed; dim6 内部构建-side pending)
**is_upstream**: false (内部构建-extra command, not in upstream codex-cli)
**IDB saved**: true (idb_save confirmed 2026-06-16)

---

## Owner VA

| Symbol | VA | Size |
|---|---|---|
| `restart_codex_cmd_wrapper_sys_111` | 0x14001AE30 | 547B |
| `restart_codex_quit_launch_coordinator_sys_111` | 0x1407838D0 | 376B |
| `quit_codex_poll_wait_sys_111` | 0x1407A39B0 | ~256B |
| `quit_codex_fallback_kill_sys_111` | 0x1407A44D0 | large |
| `check_update_installability_launch_sys_111` | 0x1407A02E0 | very large |

---

## Full Call Chain (depth ≥5)

```
restart_codex_cmd_wrapper_sys_111 @ 0x14001AE30
  → restart_codex_quit_launch_coordinator_sys_111 @ 0x1407838D0
      Phase 1 — Quit poll:
      → quit_codex_poll_wait_sys_111 @ 0x1407A39B0
          → sub_140504DA0("Codex", 5) [is_process_running]
          → sub_14108D4A0(0, 50000000) [sleep 50ms]
          LOOP: poll until Codex absent OR 5s timeout
      Phase 2 — Kill fallback:
      → quit_codex_fallback_kill_sys_111 @ 0x1407A44D0
          → sub_1407A3090 [get process list]
          → sub_1410828F0("taskkill", 8) [build cmd]
          → "taskkill /F /T /PID <pid>"
          → sub_14108D4A0(0, 300000000) [sleep 300ms per round]
          DEADLINE: sub_141097540(v2, v3, 3, 0) [3s deadline]
      Phase 3 — Launch (check_update_installability_launch):
      → check_update_installability_launch_sys_111 @ 0x1407A02E0
          Path discovery (10 candidates, in order):
          1. %LOCALAPPDATA%\Programs\Codex\Codex.exe
          2. %LOCALAPPDATA%\Codex\Codex.exe
          3. %LOCALAPPDATA%\Programs\OpenAI Codex\Codex.exe
          4. %LOCALAPPDATA%\Programs\OpenAI\Codex\Codex.exe
          5. %PROGRAMFILES%\Codex\Codex.exe
          6. %PROGRAMFILES%\OpenAI Codex\Codex.exe
          7. %PROGRAMFILES%\OpenAI\Codex\Codex.exe
          8. %PROGRAMFILES(X86)%\Codex\Codex.exe
          9. %PROGRAMFILES(X86)%\OpenAI Codex\Codex.exe
         10. %PROGRAMFILES(X86)%\OpenAI\Codex\Codex.exe
          Registry fallback (2 keys, 2 hives):
          → reg query HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\Codex.exe /ve
          → reg query HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\Codex.exe /ve
          → reg query HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall [scan]
          → reg query HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall [scan]
          PATH fallback:
          → where Codex.exe [CLI]
          → where Codex [CLI]
          Launch (PowerShell):
          → powershell -NoProfile -Command <path> [first attempt]
          → powershell -NoProfile -WindowStyle Hidden -Command <path> [second attempt]
          Poll after launch:
          → sub_140504DA0("Codex", 5) is_running @80ms, 5s timeout
          Error: "Codex.exe not found" (tag=7) if all paths fail
  Error path:
  → returns 0x8000000000000000 (CODEX_APP_QUIT_TIMEOUT)
  Success path:
  → tag=3 (Ok)
  → restart_codex_quit_launch_coordinator_sys_111 returns sret v17
  IPC response:
  → sub_140832560 [IPC response serializer, tag6=error/tag3=ok]
  → sub_14080C3C0 [tauri_ipc_resolve_sys]
```

---

## Interface / DTO

- **Command name**: `restart_codex`
- **Arguments**: none (no-args IPC)
- **Return**: `()` success, or error string
- **Error envelope**:
  - `0x8000000000000000` → CODEX_APP_QUIT_TIMEOUT
  - "Codex.exe not found" (tag=7) → launch path exhausted
- **Side effects**: terminates Codex process + relaunches Codex

---

## Platform Delta vs 1.0.9 Windows

| Aspect | 1.0.9 Win | 1.1.1 Win |
|---|---|---|
| Quit mechanism | `signal_codex_quit_wake` (WakeByAddressSingle condvar) | ABSENT — replaced by poll-wait @50ms |
| Quit timeout | 8s | 5s (poll loop) |
| Kill fallback timeout | 8s total | 3s deadline |
| Kill fallback sleep | varies | 300ms per round |
| Launch paths | 10 (same set) | 10 (same set) |
| Launch poll sleep | 80ms | 80ms |
| Launch poll timeout | 5s | 5s |
| Error string | CODEX_APP_QUIT_TIMEOUT (92 chars) | 0x8000000000000000 |
| VA (cmd wrapper) | 0x14026f140 | 0x14001AE30 (DRIFTED) |
| is_upstream | false | false |

**Critical win 1.1.1 difference**: `signal_codex_quit_wake` (condvar WakeByAddressSingle) is ABSENT in win 1.1.1 — confirmed by exhaustive 5-pattern search in divergence session. Quit is now purely poll-based.

---

## CCF (Frontend)

Shared with 1.0.9 baseline — frontend CCF confirmed via win-divergence session:
- `index-CL22l5v8.js:86:30953` — `restartCodex` wrapper
- `use-relay-providers-BNphfsn5.js:2` — `restartCodexApp` wrapper
- Both wrappers: `invoke("restart_codex")` (no args)

---

## Gate Status

| Dim | Status | Evidence |
|---|---|---|
| dim1 frontend CCF | closed | index-CL22l5v8.js:86 restartCodex+restartCodexApp wrappers |
| dim2 backend owner+pseudocode | closed | 逆向分析 A-level decompile @ 0x14001AE30 |
| dim3 call-tree to leaves | closed | 5-depth: cmd_wrapper→coordinator→poll_quit→kill→launch; terminal leaves: taskkill, powershell, is_process_running, Codex.exe not found |
| dim4 interface/DTO/error | closed | no-args; CODEX_APP_QUIT_TIMEOUT=0x8000000000000000; "Codex.exe not found" tag7 |
| dim5 platform gate | closed (win) | win 1.1.1 independent evidence; macOS NOT inferred |
| dim6 acceptance mapping | 内部构建-side pending | outside reverse scope |

**Ceiling**: `strictImplementationUse` (dim6 missing = 内部构建-side task)

---

## Locator Evidence

- Dispatcher: `tauri_ipc_main_dispatcher_sys` @ 0x14000D2A0 (41-case, 17870B)
- Dispatcher CALL @ 0x140010921 → 0x14001AE30
- String locator: byte scan dispatcher case-13 region for "restart_codex" byte sequence → JE→0x1400108d2 → CALL→0x14001AE30
- 1.0.9 VA 0x14026f140 is NOT restart_codex in 1.1.1 (now `sub_14026EE50`, JSON token extraction)
