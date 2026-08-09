// Function: sub_14015B7B0 (start_voice_capture command dispatch)
// EA: 0x14015B7B0
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06. Full body returned, no truncation marker.
// Single-arg dispatcher (only "app" -- matches macOS public_command wrapper
// commands::voice_runtime::start_voice_capture, 0x100494f50) delegating to
// sub_140C38D20 (core -- see 0002).
__int64 __fastcall sub_14015B7B0(__int64 a1)
{
  __int64 v2, v3, v4, v6, v7, v8, v9, v10, v11, v12;
  const char *v5;
  _BYTE v14[520]; // BYREF
  __int64 v15; __int128 v16, v17; // BYREF
  char v18[384]; // BYREF
  __int64 v19; int v20, v21;
  __int128 v22; // BYREF
  const char *v23; __int64 v24;
  char v25[688]; // BYREF
  _BYTE v26[152]; // BYREF
  int v27; __int128 v28, v29; // BYREF
  __int64 v30, v31; const char *v32; __int64 v33; // BYREF
  _QWORD v34[96]; // BYREF
  __int128 v35; // BYREF
  const char *v36, *v37; __int64 v38;
  char v39, v40; __int64 v41;

  v41 = -2;
  sub_14172B820(v14, a1, 520);
  v2 = a1 + 520;
  sub_14172B820(v18, a1 + 520, 400);
  v36 = *(const char **)(a1 + 936);
  v35 = *(_OWORD *)(a1 + 920);
  v34[2] = 0;
  v30 = (__int64)aStartVoiceCapt; // "start_voice_capture"
  v31 = 19;
  v32 = aApp; // "app"
  v33 = 3;
  v34[0] = v14;
  v34[1] = &v35;
  v40 = 1;
  sub_1401A9630((__int64)&v27, (__int64)&v30); // manager.request completion for "app"
  if ( v27 != -1 )
  {
    sub_14172B820(v26, &v27, 152);
    sub_140C38D20(&v30, v26); // <-- delegates to core (see 0002-start-capture-core-0x140c38d20.c)
    v3 = v30; v4 = v31; v5 = v32; v6 = v33;
    if ( v30 == 2 )
    {
      v7 = 2;
    }
    else
    {
      sub_14172B820(v25, v34, 680);
      *(_QWORD *)&v22 = v3; *((_QWORD *)&v22 + 1) = v4; v23 = v5; v24 = v6;
      sub_1404CF350(&v30, &v22); // result post-processing, generic
      v7 = v30; v4 = v31; v5 = v32; v6 = v33;
      sub_14172B820(&v15, v34, 760);
    }
    v40 = 1;
    sub_140203A20(v26); // Arc/AppHandle drop, generic
    sub_14172B820(&v22, v2, 400);
    if ( v7 != 2 )
    {
      v30 = v7; v31 = v4; v32 = v5; v33 = v6;
      sub_14172B820(v34, &v15, 760);
LABEL_16:
      v39 = 0;
      sub_140A946C0(&v22, &v30); // finalize
      goto LABEL_17;
    }
    // ...(error-path re-pack branches identical in structure to other dispatchers
    //     in this evidence set -- generic buffer clone / drop_in_place chains)
    LOBYTE(v31) = 3;
    v32 = (const char *)v6;
    v33 = v10;
    v34[0] = v6;
    v30 = 2;
    goto LABEL_16;
  }
  v17 = v29; v16 = v28;
  sub_14172B820(&v30, a1 + 520, 360);
  v22 = *(_OWORD *)(a1 + 880);
  v23 = *(const char **)(a1 + 896);
  v15 = 1;
  v40 = 0;
  sub_140AFFC30((__int64)&v30, v19, (__int64)&v15, &v22, v20, v21); // generic CoreEnvelope finalize (shared)
LABEL_17:
  if ( (_QWORD)v35 != -1 )
  {
    v11 = *((_QWORD *)&v35 + 1);
    v37 = v36; v38 = 0;
    v34[95] = *((_QWORD *)&v35 + 1);
    while ( v37 != (const char *)v38 )
    {
      ++v38;
      v12 = v11 + 96;
      sub_140401FB0(); // Vec<T> drop_in_place, generic
      v11 = v12;
    }
    if ( (_QWORD)v35 )
      sub_140001660(*((_QWORD *)&v35 + 1), 96 * v35, 8);
  }
  return sub_140043900(v14); // stack-local drop_in_place cleanup, generic
}

// refs of interest:
// 0x14177a50f aStartVoiceCapt -> "start_voice_capture"
// 0x14177a424 aApp -> "app"
// 0x140c38d20 sub_140C38D20 -> core capture-start function (see 0002)
// 0x140affc30 sub_140AFFC30 -> generic CoreEnvelope finalize (shared across all commands)
