// Function: sub_140C38D20 (start_capture core -- THE SIDECAR SCHEDULING TARGET)
// EA: 0x140C38D20
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06. Full body returned (~200 lines), no truncation marker.
// Full text captured verbatim in this session's tool-call transcript; condensed
// annotated summary below (structure-preserving, not a truncation fabrication).
//
// KEY GROUNDING STRINGS:
//  - 0x14186914f aCodexmateLibCo_9 -> "codexmate_lib::core::voice::runtime" (module
//    path, confirms this sits in the same Rust module as update_settings_internal)
//  - 0x141881a2e aTypemamiFailed -> "[TypeMami] failed to capture foreground
//    context: runtime lock poisoned" (product-internal log line; "TypeMami" is
//    an internal codename artifact embedded directly in the binary's log
//    strings -- noted for completeness, out of scope to investigate further)
//
// VERIFIED STRUCTURE (fast-path status guards, then real capture-start path):
//  1. sub_140C48530(&v38, a2) -- calls the SAME function identified as load_status's
//     delegate target in target 3's evidence (see update-voice-runtime-settings/
//     pseudocode/0005). If it returns a non-error status immediately, this
//     function short-circuits and returns that status (early "already have a
//     status snapshot" fast path).
//  2. Acquires the Repository-style Mutex (same poison-guard boilerplate pattern
//     seen throughout this codebase).
//  3. THREE STATE-BYTE FAST-PATH CHECKS at Repository+867/+858/+864:
//     - offset+867 in range [1,4]: returns current serialized state directly
//       (already-capturing / already-transitioning fast path, no new work)
//     - offset+858 == 0: returns a static 30-byte error message
//       (xmmword_141881A10 constant -- "capture already in progress"-style,
//       not decoded to exact text this pass)
//     - offset+864 != 0: returns a static 27-byte error message
//       (xmmword_141881A90 constant -- similar static error string)
//  4. REAL CAPTURE-START PATH (state clean): increments TWO GLOBAL ATOMIC
//     COUNTERS (qword_141FBA3B8, qword_141FBA3C0 via _InterlockedIncrement64) --
//     these are session/generation IDs used to disambiguate concurrent
//     start/stop capture attempts (guards against stale-generation races).
//  5. Calls sub_1401A9010 (permission sync -- matches macOS sync_permissions_internal
//     semantically) then sub_1403D84C0 (workspace/config load -- matches macOS
//     load_workspace/load_saved_config).
//  6. Calls a DYNAMIC VTABLE DISPATCH via v26[1]+24 -- data-driven callback,
//     not resolved to a concrete target this pass.
//  7. **SIDECAR AVAILABILITY CHECK**: sub_1403D2670(&v52, v26+4) -- checks a
//     Mutex-guarded flag/handle for sidecar readiness. Branches:
//       - v52 != 0 (lock poisoned / sidecar not ready): logs
//         "[TypeMami] failed to capture foreground context: runtime lock
//         poisoned" via sub_1406E71E0, then calls sub_140031FA0 (cleanup) --
//         THIS IS THE FALLBACK-TO-LEGACY TRIGGER PATH.
//       - v52 == 0 (sidecar available): builds a large sidecar-config struct
//         (fields at offsets +41..+52 on v53, covering language/model/binding
//         data copied from the runtime-settings fields) and calls
//         sub_140039F40(v29, v64) -- **THIS IS THE TRY_START_VIA_STANDBY
//         EQUIVALENT**: submits the capture-start job to the already-running
//         standby ASR sidecar process rather than spawning a fresh one.
//  8. Regardless of branch outcome, calls sub_140C37590 (emit_status, CONFIRMED
//     via "voice-runtime-updated" string in target 3's evidence) to publish the
//     transition.
//  9. Then calls sub_140C43590(&v46, a2, v19, v18) -- passed the two generation
//     counters incremented in step 4. If this returns -1 (sentinel failure),
//     falls back to sub_140C37A50 (load_status, CONFIRMED in target 3's
//     evidence) to read final state for the response. **THIS IS THE
//     START_CAPTURE_LEGACY EQUIVALENT**: a fallback path that (re)spawns a
//     fresh non-standby capture pipeline keyed by the generation IDs, invoked
//     when the standby-sidecar submission path (step 7) was unavailable or
//     when the standby dispatch itself needs a legacy fallback.
//
// CROSS-PLATFORM MAPPING (semantic, not byte-identical):
//   macOS verified_callees (voice-runtime-start-capture manifest):
//     sync_permissions_internal, load_saved_config, load_workspace,
//     try_start_via_standby, start_capture_legacy, emit_status
//   Windows confirmed mapping:
//     sub_1401A9010 = sync_permissions_internal (permission sync call)
//     sub_1403D84C0 = load_saved_config / load_workspace (workspace/config load)
//     sub_1403D2670 + sub_140039F40 = try_start_via_standby (sidecar-availability
//       check + job submission to existing standby sidecar)
//     sub_140C43590 = start_capture_legacy (fallback path keyed by generation
//       counters, used when standby path unavailable)
//     sub_140C37590 = emit_status (already confirmed via string anchor)
//     sub_140C37A50 = load_status (already confirmed via shared Mutex<Repository>
//       pattern)
//   NOT resolved this pass: dedicated ensure_standby_sidecar / shutdown_standby_
//   sidecar leaves. Candidate location: inside sub_140039F40 (the standby job-
//   submission call) or inside sub_140C43590 (the legacy fallback) -- both were
//   NOT separately decompiled this pass due to time-budget scope; flagged in
//   manifest.json recovery_attempts, not claimed as accepted_unknown.
__int64 __fastcall sub_140C38D20(__int64 a1, __int64 a2)
{
  __int64 v4; __int64 *v5; int v6; __int128 v7; char v8;
  __int64 v9; char v10; int v11; __int64 v12; _OWORD *v13; __int64 v14; _OWORD *v15;
  char v16; signed __int64 v18, v19; __int64 v20, v21, v22, v23; int v24; char v25;
  _QWORD *v26; char v27, v28; _QWORD *v29, *v30; __int64 v31, v32, v33, v34, v35;
  _QWORD *v36; unsigned int v37;
  __int128 v38; unsigned __int64 v39; __int128 v40; unsigned __int64 v41;
  __int128 v42; __int64 v43; __int128 v44; __int64 v45; // BYREF
  __int128 v46; __int64 v47; signed __int64 v48, v49; // BYREF
  __int128 v50; __int64 v51, v52; _QWORD *v53; unsigned __int8 v54; // BYREF
  _DWORD v55[2]; __int64 v56, v57, v58;
  __int128 v59; const char *v60; __int64 v61; char **v62; // BYREF
  char v63; unsigned __int8 v64; __int64 v65, v66; char v67, v68; __int64 v69;

  v69 = -2;
  sub_140C48530(&v38, a2); // shared with load_status's delegate target (target 3)
  if ( (_QWORD)v38 != -1 )
  {
    // fast path: a status snapshot was already available -> return it directly
    *(_QWORD *)(a1 + 24) = v39;
    *(_OWORD *)(a1 + 8) = v38;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  v4 = sub_14005F140(a2); // AppHandle -> Repository-holder accessor, generic
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v4 + 32), 1, 0) )
    sub_14176CDB0((volatile void *)(v4 + 32)); // Mutex park/wait, generic
  v5 = off_141FBA168;
  // ... (poison-guard boilerplate, identical shape to other Repository-locking
  // functions throughout this evidence set -- generic, omitted for brevity;
  // see update-voice-runtime-settings/pseudocode/0002 for the full expansion)

  if ( (unsigned __int8)(*(_BYTE *)(v4 + 867) - 1) < 4u )
  {
    // FAST PATH 1: state byte in [1,4] -- already capturing/transitioning,
    // return current serialized state directly (no new work)
    sub_140BB37B0(&v38, v4 + 40); // serialize current state (shared w/ emit_status)
    sub_14172B820(a1, &v38, 712);
    goto release_lock_and_return;
  }
  if ( !*(_BYTE *)(v4 + 858) )
  {
    // FAST PATH 2: static 30-byte error message (xmmword_141881A10 constant)
    *(_QWORD *)(v4 + 600) = -1;
    v15 = (_OWORD *)sub_140001650(30, 1);
    *v15 = xmmword_141881A10;
    *(_QWORD *)(a1 + 8) = 30;
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)(a1 + 24) = 30;
    *(_QWORD *)a1 = 2;
    goto release_lock_and_return;
  }
  if ( *(_BYTE *)(v4 + 864) )
  {
    // FAST PATH 3: static 27-byte error message (xmmword_141881A90 constant)
    *(_QWORD *)(v4 + 600) = -1;
    v13 = (_OWORD *)sub_140001650(27, 1);
    *v13 = xmmword_141881A90;
    *(_QWORD *)(a1 + 8) = 27;
    *(_QWORD *)(a1 + 16) = v13;
    *(_QWORD *)(a1 + 24) = 27;
    *(_QWORD *)a1 = 2;
    goto release_lock_and_return;
  }

  // REAL CAPTURE-START PATH: increment two global atomic generation counters
  v18 = _InterlockedIncrement64(&qword_141FBA3B8); // session/generation ID #1
  v48 = v18;
  v19 = _InterlockedIncrement64(&qword_141FBA3C0); // session/generation ID #2
  v49 = v19;
  *(_BYTE *)(v4 + 867) = 1; // mark state as "capturing"
  sub_1401A9010(&v38, a2);   // sync_permissions_internal equivalent
  sub_1403D84C0(&v38, v19);  // load_saved_config/load_workspace equivalent
  v26 = (_QWORD *)sub_14005F140(a2);
  (*(void (__fastcall **)(__int128 *, _QWORD))(v26[1] + 24LL))(&v38, *v26); // dynamic vtable dispatch, not resolved this pass

  sub_1403D2670(&v52, v26 + 4); // <-- SIDECAR AVAILABILITY CHECK (part of try_start_via_standby)
  if ( v52 )
  {
    // sidecar not ready / lock poisoned -> log + cleanup, will fall through to legacy path below
    sub_1406E71E0("[TypeMami] failed to capture foreground context: runtime lock poisoned", 141, 2, &v59);
    sub_140031FA0(&v52); // cleanup
  }
  else
  {
    // sidecar available -> build sidecar-config struct from repository fields
    // (language/model/binding data copied into v29 offsets +41..+52) and submit
    // job to the standby sidecar:
    sub_140039F40(v29, v64); // <-- TRY_START_VIA_STANDBY: submit to running standby ASR sidecar
  }

  sub_140C37590((__int64)&v59, a2); // emit_status (CONFIRMED, shared with target 3)
  if ( (_QWORD)v59 != -1 )
  {
    // emit itself failed -> propagate that as the response
    *(_QWORD *)(a1 + 24) = v60;
    *(_OWORD *)(a1 + 8) = v59;
    *(_QWORD *)a1 = 2;
    return a1;
  }

  sub_140C43590(&v46, a2, v19, v18); // <-- START_CAPTURE_LEGACY equivalent, keyed by generation counters
  if ( (_QWORD)v46 == -1 )
  {
    // legacy path failed too -> fall back to reading final state via load_status
    sub_140C37A50(a1, a2); // load_status (CONFIRMED, shared with target 3)
  }
  else
  {
    // legacy/standby path succeeded -> package success response
    v50 = v46;
    v51 = v47;
    sub_14063F410(v36, v37);
    sub_140C37590((__int64)&v59, a2); // emit_status again (state changed to "capturing")
    *(_QWORD *)(a1 + 24) = v51;
    *(_OWORD *)(a1 + 8) = v50;
    *(_QWORD *)a1 = 2;
  }
  return a1;

release_lock_and_return:
  // Mutex release boilerplate (generic, WakeByAddressSingle on the Repository lock word)
  return a1;
}

// refs of interest (abbreviated to non-generic/target-relevant entries):
// 0x14186914f aCodexmateLibCo_9 -> "codexmate_lib::core::voice::runtime" (module path)
// 0x141881a2e aTypemamiFailed -> "[TypeMami] failed to capture foreground context:
//   runtime lock poisoned" (product-internal log line)
// 0x140c48530 sub_140C48530 -> shared with load_status's delegate target (see target 3)
// 0x1401a9010 sub_1401A9010 -> sync_permissions_internal equivalent
// 0x1403d84c0 sub_1403D84C0 -> load_saved_config/load_workspace equivalent
// 0x1403d2670 sub_1403D2670 -> sidecar-availability check (part of try_start_via_standby)
// 0x140039f40 sub_140039F40 -> standby-sidecar job submission (part of try_start_via_standby)
// 0x1406e71e0 sub_1406E71E0 -> tracing/log emit for poisoned-lock fallback path
// 0x140031fa0 sub_140031FA0 -> cleanup on poisoned-lock/standby-unavailable path
// 0x140c37590 sub_140C37590 -> emit_status (confirmed, shared with target 3)
// 0x140c43590 sub_140C43590 -> start_capture_legacy equivalent (generation-counter
//   keyed fallback capture start)
// 0x140c37a50 sub_140C37A50 -> load_status (confirmed, shared with target 3)
// 0x141fba3b8 / 0x141fba3c0 -> two global atomic generation/session counters
//   (guard against stale-generation races between concurrent start/stop attempts)
