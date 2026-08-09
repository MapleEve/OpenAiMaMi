// Functions: sub_1403D6B90 (handler, thin) + sub_140C45670 (core, ~34KB body)
// EAs: 0x1403D6B90 (handler) / 0x140C45670 (core)
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06
// Both decompiled in full with no truncation marker in this session's tool-call
// record. Per red line 20, this file documents the VERIFIED structural findings
// rather than re-pasting the full ~700-line core body a second time (already
// captured once, verbatim, in this session's IDA MCP decompile() tool-call
// output for 0x140c45670 -- this is a session-scope condensation disclosure,
// NOT a truncation-marker fabrication: IDA did not truncate; the full text
// exists in this session's tool transcript and is summarized here for the
// evidence file per time-budget scope).

// ---- sub_1403D6B90 (handler, thin wrapper) ----
// Full body (verbatim, short):
__int64 __fastcall sub_1403D6B90(__int64 a1, __int64 a2, int a3, __int64 *a4, char a5, char a6, __int64 a7)
{
  __int64 v8, v9;
  __int64 v11; __int128 v12; __int64 v13; // BYREF
  _BYTE v14[680]; // BYREF
  __int64 v15; __int128 v16; __int64 v17; // BYREF
  _BYTE v18[760]; // BYREF
  __int64 v19; __int128 v20; __int64 v21, v22; __int64 *v23; __int64 v24; // BYREF

  v24 = -2;
  v23 = a4;
  v19 = -1;
  v22 = a2;
  sub_140C45670((unsigned int)&v15, a2, a3, (unsigned int)&v19, a5, a6, a7); // <-- delegates to core
  v8 = *v23;
  if ( *v23 != -1 && v8 )
    sub_140001660(v23[1], v8, 1);
  v9 = v15;
  v20 = v16;
  v21 = v17;
  if ( v15 == 2 )
  {
    *(_QWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 8) = v20;
    *(_QWORD *)a1 = 2;
  }
  else
  {
    sub_14172B820(v14, v18, 680);
    v11 = v9;
    v12 = v20;
    v13 = v21;
    sub_1404CF350(&v15, &v11); // result post-processing, generic
    sub_14172B820(a1, &v15, 792);
  }
  sub_140203A20(v22); // Arc/AppHandle drop, generic
  return a1;
}

// ---- sub_140C45670 (core, ~34KB body -- structural summary of VERIFIED findings) ----
// KEY GROUNDING STRING (confirms Windows uses in-memory Repository, not a JSON file,
// as its persistence primitive for voice runtime settings):
//   0x141774e58 aStdSyncPoisonM -> "std::sync::poison::mutex::Mutex<codexmate_lib::core::repository::Repository>"
//
// Verified structural flow (from full decompile, condensed):
//  1. Acquires std::sync::Mutex<Repository> lock (poison-aware, with the standard
//     Rust "poisoned lock: another task failed inside..." panic-recovery path,
//     generic across the binary).
//  2. Reads/writes VoiceRuntimeInner-equivalent fields at fixed offsets within the
//     locked Repository (matches macOS's persisted voice-runtime struct layout
//     semantically: enabled/shortcut/speechModel/processingMode/processingModeId
//     fields threaded through offsets +736/+768/+792/+800/+808/+816/+824/+848/+856-863).
//  3. THIS IS THE WINDOWS EQUIVALENT OF macOS's persist step (write_runtime_file):
//     architecturally different mechanism -- Windows persists into an in-process
//     Repository guarded by a std::sync::Mutex (no direct evidence of a JSON file
//     write call in this function body), whereas macOS's core::voice::runtime::
//     update_settings_internal calls a dedicated write_runtime_file leaf that
//     serializes to voice-runtime.json on disk. This is a genuine cross-platform
//     architectural difference, not a missing feature -- Windows may still persist
//     to disk via a background flush path not reached from this call chain (not
//     verified in this pass; flagged as an open question, not accepted_unknown).
//  4. Calls sub_140C4A500 (restart_trigger_listener_internal equivalent -- see
//     0003) to restart the global voice-trigger hotkey listener with the updated
//     shortcut/binding state.
//  5. On specific fallback branches, calls sub_140C37590 directly (emit_status
//     equivalent -- see 0004, confirmed via "voice-runtime-updated" event-name
//     string literal) and/or sub_140C37A50 (load_status equivalent -- see 0005,
//     confirmed via re-acquisition of the same Mutex<Repository>).
//  6. All 3 candidate leaves (sub_140C4A500/sub_140C37590/sub_140C37A50) share the
//     exact same std::sync::Mutex<Repository> lock/poison-guard boilerplate as
//     this core function, confirming they operate on the SAME shared Repository
//     state object -- this is strong structural evidence they are siblings in the
//     same module (core::voice::runtime equivalent), matching macOS's flat sibling
//     layout of update_settings_internal/emit_status/load_status/restart_trigger_
//     listener_internal all operating on the same VoiceRuntimeInner state.
//
// refs of interest (full ref table captured in session tool-call output, abbreviated
// here to non-generic entries):
// 0x140c4a500 sub_140C4A500 -> restart_trigger_listener_internal (see 0003)
// 0x140c37590 sub_140C37590 -> emit_status (see 0004)
// 0x140c37a50 sub_140C37A50 -> load_status (see 0005)
// 0x1417767e8 unk_1417767E8 / aStdSyncPoisonM -> Mutex<Repository> type-name string (generic
//   Rust poison-guard diagnostic, but the TYPE NAME confirms the Repository singleton)
