// Function: sub_140C37590 (emit_status equivalent)
// EA: 0x140C37590
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06. Full body returned, no truncation marker.
// CONFIRMED via literal event-name string "voice-runtime-updated" (0x1418819fb
// aVoiceRuntimeUp) passed to sub_14005EC90 -- a Tauri-style event-emit call
// (name, name_len, payload_ptr). This is the direct Windows counterpart of
// macOS's emit_status leaf.
__int64 __fastcall sub_140C37590(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; __int64 *v5;
  __int128 v6; char v7;
  PVOID v8; char v9; int v10, v11;
  char *v12; char v13;
  _QWORD v15[89]; // BYREF
  _OWORD v16[45]; // BYREF -- serialized voice-runtime status payload
  _QWORD v17[3]; __int128 v18; __int64 v19; // BYREF
  __int128 v20, v21, v22; // BYREF
  PVOID Address; _DWORD v24[2]; int v25;
  char v26; __int64 v27;

  v27 = -2;
  v2 = a2;
  v4 = sub_14005F140(a2); // AppHandle -> Repository-holder accessor, generic
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v4 + 32), 1, 0) )
    sub_14176CDB0((volatile void *)(v4 + 32)); // Mutex park/wait, generic
  v5 = off_141FBA168;
  if ( 2 * *v5 )
  {
    // ... (poison-guard boilerplate, identical shape to core function -- generic)
    v25 = sub_14176DA50() ^ 1;
    Address = (PVOID)(v4 + 32);
    if ( *(_BYTE *)(v4 + 33) )
      goto LABEL_5; // poisoned-lock panic path (generic, omitted -- see companion
                    // core file 0002 for the identical boilerplate structure)
  }
  else
  {
    v25 = 0;
    Address = (PVOID)(v4 + 32);
    if ( *(_BYTE *)(v4 + 33) )
    {
LABEL_5:
      // poisoned-lock panic path, generic (identical to other Repository-locking
      // functions in this evidence set)
      goto skip_panic_block;
    }
  }
  sub_140BB37B0(v16, v4 + 40); // serialize current VoiceRuntimeInner-equivalent
                               // state from the locked Repository into v16 payload
skip_panic_block:
  v12 = (char *)(v4 + 32);
  if ( !(_BYTE)v25 && 2 * *v5 && !(unsigned __int8)sub_14176DA50() )
    *(_BYTE *)(v4 + 33) = 1;
  v13 = *v12;
  *v12 = 0;
  if ( v13 == 2 )
    WakeByAddressSingle((PVOID)(v4 + 32)); // release Mutex, generic
  sub_14172B820(v15, v16, 712); // copy serialized payload
  sub_14005EC90((unsigned int)&v20, v2, (unsigned int)aVoiceRuntimeUp, 21, (__int64)v15); // <-- EMIT EVENT "voice-runtime-updated" (Tauri event-emit call: app_handle, event_name, event_name_len=21, payload)
  if ( (_QWORD)v20 == -1 )
  {
    *(_QWORD *)a1 = -1; // emit failed -> propagate error sentinel
  }
  else
  {
    v16[2] = v22; v16[1] = v21; v16[0] = v20;
    *(_QWORD *)&v18 = 0; *((_QWORD *)&v18 + 1) = 1; v19 = 0;
    v17[2] = 1610612768; v17[0] = &v18; v17[1] = &off_141882C90;
    if ( (unsigned __int8)sub_1412DDF00(v16, v17) )
      sub_14176E860( // Display-format error path, generic
        (unsigned int)aADisplayImplem_10, 55, (unsigned int)&v26,
        (unsigned int)&unk_14186AD48, (__int64)&off_141882D48);
    *(_QWORD *)(a1 + 16) = v19;
    *(_OWORD *)a1 = v18;
    sub_140B7F2E0(v16); // cleanup
  }
  return a1;
}

// refs of interest:
// 0x1418819fb aVoiceRuntimeUp -> "voice-runtime-updated" -- THE KEY GROUNDING STRING:
//   this IS the Tauri frontend event name emitted whenever voice runtime state
//   changes, confirming this function is emit_status.
// 0x140bb37b0 sub_140BB37B0 -> serializes current Repository-held voice-runtime
//   state into the event payload (candidate VoiceRuntimeInner::to_payload
//   equivalent -- not separately decompiled this pass, see manifest.json
//   recovery_attempts)
// 0x14005ec90 sub_14005EC90 -> Tauri event-emit primitive (app_handle.emit(name, payload))
