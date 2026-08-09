// Function: sub_14015DD80 (update_voice_runtime_settings dispatch layer)
// EA: 0x14015DD80
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06
// No truncation marker; full body returned. Matches macOS dispatcher layer
// (tauri_cmd_update_voice_runtime_settings_dispatch, 0x100623880): parses the same
// 6 fields (app, enabled, shortcut, speechModel, processingMode, processingModeId)
// via sequential manager.request() calls, then delegates to sub_1403D6B90 (handler).
__int64 __fastcall sub_14015DD80(__int64 a1)
{
  __int8 v2, v3;
  __int64 v4, v5;
  _BYTE v7[520]; // BYREF
  int v8; // BYREF
  __m256i v9;
  __int64 v10; // BYREF
  __m256i v11; // BYREF
  _BYTE v12[384]; // BYREF
  __int64 v13; int v14, v15;
  __int64 v16; // BYREF -- arg key pointer slot, reused per field
  __int128 v17, v18;
  __int128 *v19;
  __int64 v20;
  _OWORD v21[9]; // BYREF
  __int128 v22; __int64 v23;
  __int128 v24; __int64 v25;
  __m256i v26, v27, v28, v29;
  __int64 v30;
  __int128 v31; // BYREF
  __int64 v32, v33;
  __m256i v34; // BYREF
  __int128 v35; // BYREF
  __int64 v36, v37;
  char v38, v39;
  __int64 v40;

  v40 = -2;
  sub_14172B820(v7, a1, 520);
  sub_14172B820(v12, a1 + 520, 400);
  v32 = *(_QWORD *)(a1 + 936);
  v31 = *(_OWORD *)(a1 + 920);
  v20 = 0;
  v16 = (__int64)aUpdateVoiceRun; // "update_voice_runtime_settings"
  *(_QWORD *)&v17 = 29;
  *((_QWORD *)&v17 + 1) = aApp; // "app" arg key
  *(_QWORD *)&v18 = 3;
  *((_QWORD *)&v18 + 1) = v7;
  v19 = &v31;
  v39 = 1;
  sub_1401A9630((__int64)&v8, (__int64)&v16); // manager.request completion for "app"
  if ( v8 == -1 )
  {
    // early-exit path: app handle resolution failed -> emit error CoreEnvelope directly
    v11 = v9;
    sub_14172B820(&v16, a1 + 520, 360);
    *(_OWORD *)v34.m256i_i8 = *(_OWORD *)(a1 + 880);
    v34.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    v10 = 1;
    v39 = 0;
    sub_140AFFC30((__int64)&v16, v13, (__int64)&v10, (__int128 *)v34.m256i_i8, v14, v15); // generic CoreEnvelope finalize (shared)
  }
  else
  {
    sub_14172B820(v21, &v8, 152);
    v20 = 0;
    v16 = (__int64)aUpdateVoiceRun;
    *(_QWORD *)&v17 = 29;
    *((_QWORD *)&v17 + 1) = aEnabled; // "enabled"
    *(_QWORD *)&v18 = 7;
    *((_QWORD *)&v18 + 1) = v7;
    v19 = &v31;
    sub_1409562A0(&v28, &v16); // manager.request completion for "enabled"
    LOBYTE(v37) = v28.m256i_i8[0] == -1;
    if ( v28.m256i_i8[0] == -1 )
    {
      v2 = v28.m256i_i8[1];
      v20 = 0;
      v16 = (__int64)aUpdateVoiceRun;
      *(_QWORD *)&v17 = 29;
      *((_QWORD *)&v17 + 1) = aShortcut; // "shortcut"
      *(_QWORD *)&v18 = 8;
      *((_QWORD *)&v18 + 1) = v7;
      v19 = &v31;
      sub_140952570(&v29, &v16); // manager.request completion for "shortcut"
      LOBYTE(v37) = v29.m256i_i8[0] == -1;
      if ( v29.m256i_i8[0] == -1 )
      {
        v36 = v29.m256i_i64[3];
        v35 = *(_OWORD *)&v29.m256i_u64[1];
        v20 = 0;
        v16 = (__int64)aUpdateVoiceRun;
        *(_QWORD *)&v17 = 29;
        *((_QWORD *)&v17 + 1) = aSpeechmodel; // "speechModel"
        *(_QWORD *)&v18 = 11;
        *((_QWORD *)&v18 + 1) = v7;
        v19 = &v31;
        sub_1409539E0(&v27, &v16); // manager.request completion for "speechModel"
        LOBYTE(v37) = v27.m256i_i8[0] == -1;
        if ( v27.m256i_i8[0] == -1 )
        {
          v3 = v27.m256i_i8[1];
          v20 = 0;
          v16 = (__int64)aUpdateVoiceRun;
          *(_QWORD *)&v17 = 29;
          *((_QWORD *)&v17 + 1) = aProcessingmode; // "processingMode"
          *(_QWORD *)&v18 = 14;
          *((_QWORD *)&v18 + 1) = v7;
          v19 = &v31;
          sub_140953DC0(&v26, &v16); // manager.request completion for "processingMode"
          LOBYTE(v37) = v26.m256i_i8[0] == -1;
          if ( v26.m256i_i8[0] == -1 )
          {
            LOBYTE(v33) = v26.m256i_i8[1];
            v20 = 0;
            v16 = (__int64)aUpdateVoiceRun;
            *(_QWORD *)&v17 = 29;
            *((_QWORD *)&v17 + 1) = aProcessingmode_0; // "processingModeId"
            *(_QWORD *)&v18 = 16;
            *((_QWORD *)&v18 + 1) = v7;
            v19 = &v31;
            sub_140952570(&v34, &v16); // manager.request completion for "processingModeId"
            LOBYTE(v37) = v34.m256i_i8[0];
            if ( v34.m256i_i8[0] == -1 )
            {
              // ALL 6 args resolved successfully -> call handler (sub_1403D6B90)
              v25 = v34.m256i_i64[3];
              v24 = *(_OWORD *)&v34.m256i_u64[1];
              sub_1403D6B90((unsigned int)&v10, (unsigned int)v21, v2, (unsigned int)&v35, v3, v33, (__int64)&v24); // handler call
              sub_14172B820(&v8, a1 + 520, 400);
              if ( (_DWORD)v10 == 2 )
              {
                v38 = 1;
                sub_1401A80B0(v21, &v11);
                v18 = v21[1];
                v17 = v21[0];
                v16 = 2;
              }
              else
              {
                sub_14172B820(&v16, &v10, 792);
              }
              v38 = 0;
              sub_140A946C0(&v8, &v16);
              goto LABEL_23;
            }
            // ...(error-path fallthrough branches, each mirrors the same structure:
            //     re-pack partial result and call sub_140AFFC30 to emit error CoreEnvelope;
            //     omitted here for brevity -- structurally identical to the v8==-1
            //     early-exit branch above at each nesting level)
          }
        }
      }
    }
  }
LABEL_23:
  if ( (_QWORD)v31 != -1 )
  {
    v4 = *((_QWORD *)&v31 + 1);
    v33 = v32;
    v37 = 0;
    v30 = *((_QWORD *)&v31 + 1);
    while ( v33 != v37 )
    {
      ++v37;
      v5 = v4 + 96;
      sub_140401FB0(); // Vec<T> drop_in_place, generic
      v4 = v5;
    }
    if ( (_QWORD)v31 )
      sub_140001660(*((_QWORD *)&v31 + 1), 96 * v31, 8);
  }
  return sub_140043900(v7); // stack-local drop_in_place cleanup, generic
}

// refs of interest:
// 0x14177a59c aUpdateVoiceRun -> "update_voice_runtime_settings"
// 0x14177a424 aApp -> "app"; 0x14177a163 aEnabled -> "enabled";
// 0x14177a5b9 aShortcut -> "shortcut"; 0x14177a5c1 aSpeechmodel -> "speechModel";
// 0x14177a58e aProcessingmode -> "processingMode"; 0x14177a5cc aProcessingmode_0 -> "processingModeId"
// -- CONFIRMS exact 6-field parity with macOS dispatcher_inputs
//    [AppHandle, enabled, shortcut, speechModel, processingMode, <16-byte CommandArg>]
// 0x1403d6b90 sub_1403D6B90 -> handler layer (see 0002)
// 0x140affc30 sub_140AFFC30 -> generic CoreEnvelope finalize (shared across all commands)
