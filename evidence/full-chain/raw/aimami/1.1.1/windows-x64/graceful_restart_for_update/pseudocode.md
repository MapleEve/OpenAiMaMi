# graceful_restart_for_update — Windows x64 Pseudocode
<!-- session=wf-aimami111-delta-20260618-goldleaf machine=<本地机器> gate_tier=gold -->
<!-- prior-session=wf-aimami111-delta-20260617-sweep (integrity_recovered); this session adds L5 + full dim1-6 closure -->

## Meta

| Field | Value |
|---|---|
| IPC command | `graceful_restart_for_update` |
| String addr | `0x1412AC294` |
| String xref | `tauri_ipc_main_dispatcher_sys@0x14000D2A0` (block 0x14000F4CE) |
| Owner VA | `0x14001AE30` (`restart_codex_cmd_wrapper_sys_111`) |
| delta_class | `integrity_recovered` |
| Baseline | 1.0.9 — command **not present** (new in 1.1.1) |
| IDB save | `<本地路径>|

---

## Layer 0 — IPC Dispatcher Entry

`tauri_ipc_main_dispatcher_sys` (0x14000D2A0, size=0x45CE, 41-case string-length switch).

Command string "graceful_restart_for_update" (len=27, 0x1B) matched at block 0x14000DD91 → 0x14000F4CE.
No args payload expected (no serde deserialization, memcpy of zero-length or trivial).
After string match: block 0x14000F5B5 calls `sub_141212FB0` (AVX2 memcpy intrinsic) to copy context,
then block 0x14000F62e calls `sub_14080F3B0` (mutex/lock acquire via `sub_140808930`),
then falls through to invoke `restart_codex_cmd_wrapper_sys_111` via dispatcher callees.

---

## Layer 1 — IPC Handler Wrapper

```c
// 0x14001AE30  size=0x223
__int64 restart_codex_cmd_wrapper_sys_111(_QWORD *a1)
{
    // 1. Copy IPC context (sub_141212FB0 = AVX2 memcpy)
    memcpy(v15, a1, 520);         // IPC request context
    memcpy(v14, a1+65, 400);      // response channel copy

    // 2. Call coordinator (no args — graceful_restart takes no payload)
    restart_codex_quit_launch_coordinator_sys_111(v17);

    // 3. Evaluate result tag
    if (v17[0] != OVERFLOW_TAG) {
        // Ok path: tag3 (OkWithString) or tag=0 (Ok empty)
        // Build string result from v17[1]/v18
        v19[0] = 3;   // tag3 = Ok
    } else {
        v19[0] = 6;   // tag6 = Err (QUIT_TIMEOUT: 0x8000000000000000)
    }

    // 4. Send IPC response via sub_140832560
    sub_140832560(v16, v19);

    // 5. Cleanup Arc ref + drop
    return sub_140042650(v15);
}
```

**err sentinel**: `0x8000000000000000` = CODEX_APP_QUIT_TIMEOUT
**ok tag**: 3 (OkWithString)
**response fn**: `sub_140832560`

---

## Layer 2 — Quit + Launch Coordinator

```c
// 0x1407838D0  size=0x178
_QWORD* restart_codex_quit_launch_coordinator_sys_111(_QWORD *out)
{
    // Step 1: Wait for Codex to quit (5s timeout)
    quit_codex_poll_wait_sys_111(&v10, /*timeout_sec=*/5, 0);

    if ((uint32_t)v10 != 10) {          // tag != Ok
        if ((uint64_t)v10 != 10) {
            // quit did not succeed — skip launch
            out[0] = 0x8000000000000000; // QUIT_TIMEOUT err
            return out;
        }
    }

    // Step 2: Find and launch new Codex
    check_update_installability_launch_sys_111(&v3);

    if ((uint64_t)v3 == 10) {
        // launch timed out
        out[0] = 0x8000000000000000;
        return out;
    }

    // Step 3: Build Ok result with launch info
    // sub_140243FC0 = Result::map/unwrap
    // sub_14124BFE0 = panic display impl (should not reach)
    sub_1407B1650(&v3);   // drop temp
    return out;           // out = Ok(launch_result)
}
```

**WakeByAddressSingle** present (parking_lot condvar for quit-wait signaling).
**tag=10** = internal Ok sentinel before final encode.

---

## Layer 3a — Quit Poll Wait

```c
// 0x1407A39B0  size=~300B
void quit_codex_poll_wait_sys_111(__int64 *out, int64_t timeout_sec, uint32_t timeout_frac)
{
    if (is_process_running_toolhelp_sys_111("Codex", 5) == 1) {
        // Codex is running — request quit
        quit_codex_send_signal_wakebya_sys_111();      // parking_lot WakeByAddress signal
        quit_codex_taskkill_imagename_sys_111(v16);    // taskkill /IM Codex.exe (soft)

        uint64_t deadline = monotonic_now() + seconds(timeout_sec, timeout_frac);  // 5s
        while (monotonic_now() < deadline
               && is_process_running_toolhelp_sys_111("Codex", 5) == 1) {
            sleep(50_000_000 ns);   // 50ms poll
        }
    }
    // Fallback kill regardless
    quit_codex_fallback_kill_sys_111(out);
}
```

**sub_14108D4A0(0, 50_000_000)** = nanosleep 50ms
**sub_141077C40** = monotonic clock (QueryPerformanceCounter)
**sub_141097540** = compute deadline timestamp
**quit_codex_send_signal_wakebya_sys_111@0x1407A3C60** = WakeByAddressSingle on quit condvar
**quit_codex_taskkill_imagename_sys_111@0x14079FF10** = taskkill /IM Codex.exe

---

## Layer 3b — Fallback Kill (leaf)

```c
// 0x1407A44D0  size=~500B
void quit_codex_fallback_kill_sys_111(__int64 *out)
{
    uint64_t deadline = monotonic_now() + seconds(3, 0);  // 3s deadline

    loop:
        get_codex_pids_toolhelp_sys_111(&pids);  // EnumProcesses ToolHelp32
        if (pids is empty) { *out = Ok; return; }
        if (monotonic_now() >= deadline) { break; }  // timeout

        for (pid in pids) {
            // Build: taskkill /F /T /PID <pid>
            args = build_cmd_args("taskkill", "/F", "/T", "/PID", pid_str);
            result = run_process(args);
            drop(result);
        }
        sleep(300_000_000 ns);   // 300ms between attempts
        drop(pids);

    // 3s exceeded with Codex still running
    // Build error message from taskkill stderr via sub_14033EB00
    // sub_1410A1DF0 = format error string
    *out = tag9(err_msg);  // tag9 = process-exit-error variant
}
```

**LEAF**: terminated_reason = no Codex PIDs remaining OR 3s deadline exceeded.
**get_codex_pids_toolhelp_sys_111@0x1407A3090** = CreateToolhelp32Snapshot + Process32First/Next, filter "Codex".
**sub_14108D4A0(0, 300_000_000)** = nanosleep 300ms.

---

## Layer 4 — Launch (check_update_installability_launch)

```c
// 0x1407A02E0  size=0x21D2
void check_update_installability_launch_sys_111(_QWORD *out)
{
    // PHASE 1: 10-path filesystem scan
    // Env vars expanded: LOCALAPPDATA, PROGRAMFILES, PROGRAMFILES(X86)
    paths[10] = {
        {LOCALAPPDATA, "Programs\\Codex\\Codex.exe"},
        {LOCALAPPDATA, "Codex\\Codex.exe"},
        {LOCALAPPDATA, "Programs\\OpenAI Codex\\Codex.exe"},
        {LOCALAPPDATA, "Programs\\OpenAI\\Codex\\Codex.exe"},
        {PROGRAMFILES, "Codex\\Codex.exe"},
        {PROGRAMFILES, "OpenAI Codex\\Codex.exe"},
        {PROGRAMFILES, "OpenAI\\Codex\\Codex.exe"},
        {PROGRAMFILES(X86), "Codex\\Codex.exe"},
        {PROGRAMFILES(X86), "OpenAI Codex\\Codex.exe"},
        {PROGRAMFILES(X86), "OpenAI\\Codex\\Codex.exe"},
    };
    candidates = collect_existing_paths(paths);  // sub_141089D90 = GetFileAttributesW / path_exists

    if (candidates not empty) goto LAUNCH;

    // PHASE 2: Registry App Paths (HKCU + HKLM)
    for key in [
        "HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\App Paths\\Codex.exe",
        "HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\App Paths\\Codex.exe",
    ] {
        result = run("reg", "query", key, "/ve");    // sub_1410878D0 = CreateProcess
        parse REG_SZ / REG_EXPAND_SZ value;         // sub_14072E9F0
        if found Codex.exe path: goto LAUNCH with path;
    }

    // PHASE 3: Registry Uninstall keys (HKCU + HKLM)
    for key in [
        "HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall",
        "HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall",
    ] {
        // powershell -NoProfile -Command <script> (x2 scripts)
        // sub_1410A1DF0 formats powershell command with registry key embedded
        result = run("powershell", "-NoProfile", "-Command", script);
        parse output for path ending "Codex.exe";
        if found: goto LAUNCH with path;
    }

    // PHASE 4+5: where Codex.exe / where Codex
    for query in ["where", "Codex.exe"], ["where", "Codex"] {
        result = run("where", query);
        parse output line by line for valid path;
        if found: goto LAUNCH;
    }

    // All 10 phases failed
    err_msg = alloc("Codex.exe not found", 19);
    *out = tag7(err_msg);  // tag7 = NotFound
    return;

LAUNCH:
    // sub_14107A3E0 = append flags (CREATE_NO_WINDOW etc.)
    // sub_1410828A0 = push arg
    // sub_141087850 = run process (CreateProcessW)
    run_process(codex_exe_path, args);

    if spawn failed (tag==2) {
        // powershell -NoProfile -WindowStyle Hidden -Command <launch_script>
        // sub_1407B2210 = build launch powershell command
        // sub_1410A1750 = format to args
        // sub_1407BF850 = ?
        launch_via_powershell();
        poll Codex running @80ms for 5s;
        if not running: *out = tag9(err);
        else: *out = Ok;
    } else {
        // Direct spawn succeeded
        CloseHandle(stdin/stdout/stderr handles);
        poll Codex running @80ms for 5s;
        if not running: *out = tag9(err);
        else: *out = Ok;
    }
}
```

**err tag7** = "Codex.exe not found"
**err tag9** = process spawn / launch error (stderr from powershell)
**ok tag=10** = Codex appeared in is_process_running_toolhelp within 5s

---

## Side-Effect Map

| Side Effect | Where | Notes |
|---|---|---|
| WakeByAddressSingle (quit condvar) | quit_codex_send_signal_wakebya_sys_111@0x1407A3C60 | parking_lot condvar signal |
| taskkill /IM Codex.exe | quit_codex_taskkill_imagename_sys_111@0x14079FF10 | soft kill by image name |
| taskkill /F /T /PID \<pid\> | quit_codex_fallback_kill_sys_111@0x1407A44D0 | per-pid forced kill |
| registry read (reg query) | check_update_installability_launch_sys_111 | App Paths + Uninstall keys |
| powershell -NoProfile -Command | check_update_installability_launch_sys_111 | query Uninstall + optional launch |
| CreateProcessW (Codex.exe launch) | check_update_installability_launch_sys_111 | direct or via powershell |
| IPC response | sub_140832560 | Ok(tag3) or Err(tag6) |

---

## Layer 5 — PID Enumeration Leaf (depth=5)

```c
// 0x1407A3090  [IDB: get_codex_pids_toolhelp_sys_111]
__int64 get_codex_pids_toolhelp_sys_111(__int64 *out)
{
    DWORD self_pid = GetCurrentProcessId();  // exclude AiMaMi from results
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS /*2*/, 0);
    if (snap == INVALID_HANDLE_VALUE) { out->tag=10; out->payload=empty; return; }

    PROCESSENTRY32W pe = { .dwSize = 568 };
    if (!Process32FirstW(snap, &pe)) {
        CloseHandle(snap); out->tag=10; out->payload=empty; return;
    }

    Vec<{pid:u32, name_ptr:u64, name_len:u64}> results;  // stride=32B, init capacity=8

    do {
        // WideChar→UTF-8 (SIMD for names >32B; sub_141221220 = utf16_to_utf8 alloc path)
        utf8_name = wchar_to_utf8(pe.szExeFile);

        // AVX2 SIMD lowercase: _mm_add_epi8 + _mm_min_epu8 + _mm_cmpeq_epi8 mask
        to_lowercase_avx2(utf8_name);   // in-place, 32B lanes

        if (pe.th32ProcessID != self_pid) {
            // Literal match constants (little-endian):
            // "codex.exe" (9B)   → *u64(name)^0x78652E7865646F63 | u8(name[8])^0x65 == 0
            // "codex-x" prefix   → *u32(name)^0x65646F63 | u16(name+4)^0x2D78 == 0
            // "codex helper"(12B)→ *u64(name)^0x6568207865646F63 | u32(name+8)^0x7265706C == 0
            if (matches_codex_name(utf8_name)) {
                results.push({th32ProcessID, name_ptr, name_len});
            }
        }
        free(utf8_name);
    } while (Process32NextW(snap, &pe));

    CloseHandle(snap);
    out->tag = 10;  // Ok
    out->payload = results;
}
```

**L5 platform primitives — all terminated (external_call)**:
- `CreateToolhelp32Snapshot` (import `0x14124D068`) — OS kernel, no AiMaMi callees
- `Process32FirstW` (import `0x14124D070`) — OS kernel
- `Process32NextW` (import `0x14124D080`) — OS kernel
- `CloseHandle` (import `0x14124D788`) — OS kernel
- `GetCurrentProcessId` (import `0x14108B3B0`) — OS kernel

---

## IPC Response Serializer (sub_140832560 @ 0x140832560)

```c
// Called by owner after coordinator returns
volatile int64_t* send_ipc_response(__int64 channel_ctx, __int128 *tag_payload)
{
    memcpy(local, channel_ctx, 360);      // channel state copy
    handle = *(channel_ctx + 384);

    if (tag_payload->tag_byte == 6) {
        // QUIT_TIMEOUT: send hardcoded error body
        buf = alloc(128);
        *buf = 0x6C6C756E;               // "null" sentinel magic
        payload = {ptr=buf, cap=128, len=4};
        is_ok = 0;
    } else {
        payload = *tag_payload;           // Ok path: coordinator output
        is_ok = 1;
    }

    // sub_14080C3C0 = Tauri channel frame write (IPC serialization)
    return sub_14080C3C0(local, handle, &is_ok, channel_ctx+360, stream_id, flags);
    // terminated_reason: external_call (Tauri runtime)
}
```

---

## Error / Result Taxonomy

| Tag | Value | Meaning |
|---|---|---|
| tag3 | 3 | Ok (OkWithString / success — Codex relaunched) |
| tag6 | 6 | Err: CODEX_APP_QUIT_TIMEOUT (0x8000000000000000) |
| tag7 | 7 | Err: "Codex.exe not found" (all 10 paths + reg + where exhausted) |
| tag9 | 9 | Err: process launch failure (stderr captured from taskkill/powershell) |
| tag10 | 10 | internal Ok sentinel (coordinator / leaf returns) |

---

## ACCEPTANCE — dim6 mapping (session wf-aimami111-dim6-20260619)

**dim6_basis**: pseudocode Layer 1-4 full trace; IPC tagged enum tag3/6/7/9 confirmed in gate-report.json ipc_contract; all 10-path Codex launch search paths confirmed via string VA evidence.

### happy_path

- Input: `invoke("graceful_restart_for_update")` — no args
- Codex running → WakeByAddressSingle condvar signal + `taskkill /IM Codex.exe` → ToolHelp32 confirms Codex gone within 5s → CreateProcessW on one of 10 known paths → Codex appears in ToolHelp32 within 5s
- Expected response: tag=3, `Ok(launch_info_string)`
- Side effects asserted: no file writes; no HTTP; old Codex PID absent post-call; new Codex PID present

### boundary / error

| Trigger | Tag | Expected |
|---|---|---|
| Codex PID still alive after 5s wait + 3s forced kill | 6 | Err, body starts with 0x6C6C756E ("null" LE), error sentinel 0x8000000000000000 |
| All 10 FS paths + 4 reg queries + 2 where queries exhausted, no Codex.exe found | 7 | Err string "Codex.exe not found" |
| Codex.exe found and spawned but not visible in ToolHelp32 within 5s | 9 | Err, stderr from powershell/taskkill captured |

### side_effect_asserts

- Registry: read-only (reg query /ve); no HKCU/HKLM writes
- Filesystem: no writes
- Network / HTTP / sidecar: none
- Process: conditional taskkill + Codex.exe CreateProcessW only

### test_mapping

| Test type | Scenario | Reason |
|---|---|---|
| manual | happy_path: Codex running → clean quit → relaunch | Live Codex process required; ToolHelp32 timing; WakeByAddressSingle condvar not injectable in unit |
| explicit_non_automatable_accept (producer-acceptance-draft) | tag6: kill timeout | Requires unkillable Codex (admin/locked handle); unsafe in CI |
| unit (producer-acceptance-draft) | tag7: Codex not found | Can mock all path resolution returns; assert error string "Codex.exe not found" |
| manual | tag9: Codex starts but does not appear in process list | OS scheduler-dependent poll timing |

### gate

dim1-5: all CLOSED (gold gate_tier). dim6: acceptance-draft. **gate_tier=readyToImplement** (eligible; pending C5 test fixture confirmation).
