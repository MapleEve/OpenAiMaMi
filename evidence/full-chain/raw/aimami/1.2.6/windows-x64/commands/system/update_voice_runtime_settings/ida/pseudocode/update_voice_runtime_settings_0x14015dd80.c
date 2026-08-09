// Pseudocode for update_voice_runtime_settings (EA: 0x14015dd80, size: 0x91d)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: 职责：Tauri 命令 update_voice_runtime_settings 的 dispatcher，对应 macOS tauri_cmd_update_voice_runtime_settings_dispatch(0x100623880)，confirmed_parity。边界：仅负责命令分发与参数封送，实际解析在 handler(sub_1403D6B90)，持久化在 core(su
// 职责：Tauri 命令 update_voice_runtime_settings 的 dispatcher，对应 macOS tauri_cmd_update_voice_runtime_settings_dispatch(0x100623880)，confirmed_parity。边界：仅负责命令分发与参数封送，实际解析在 handler(sub_1403D6B90)，持久化在 core(sub_140C45670)。副作用：无直接副作用。1.2.6 windows deep pass 20260806
__int64 __fastcall tauri_cmd_update_voice_runtime_settings_dispatch(__int64 a1)
{
  __int8 v2; // r14
  char v3; // r13
  __int64 v4; // rcx
  __int64 v5; // rsi
  _BYTE v7[520]; // [rsp+40h] [rbp-40h] BYREF
  int v8; // [rsp+248h] [rbp+1C8h] BYREF
  __m256i v9; // [rsp+250h] [rbp+1D0h]
  __int64 v10; // [rsp+3D8h] [rbp+358h] BYREF
  __m256i v11; // [rsp+3E0h] [rbp+360h] BYREF
  _BYTE v12[384]; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v13; // [rsp+870h] [rbp+7F0h]
  int v14; // [rsp+878h] [rbp+7F8h]
  int v15; // [rsp+87Ch] [rbp+7FCh]
  __int64 v16; // [rsp+880h] [rbp+800h] BYREF
  __int128 v17; // [rsp+888h] [rbp+808h]
  __int128 v18; // [rsp+898h] [rbp+818h]
  __int128 *v19; // [rsp+8A8h] [rbp+828h]
  __int64 v20; // [rsp+8B0h] [rbp+830h]
  _OWORD v21[9]; // [rsp+B98h] [rbp+B18h] BYREF
  __int128 v22; // [rsp+C30h] [rbp+BB0h] BYREF
  __int64 v23; // [rsp+C40h] [rbp+BC0h]
  __int128 v24; // [rsp+C50h] [rbp+BD0h] BYREF
  __int64 v25; // [rsp+C60h] [rbp+BE0h]
  __m256i v26; // [rsp+C68h] [rbp+BE8h] BYREF
  __m256i v27; // [rsp+C88h] [rbp+C08h] BYREF
  __m256i v28; // [rsp+CA8h] [rbp+C28h] BYREF
  __m256i v29; // [rsp+CC8h] [rbp+C48h] BYREF
  __int64 v30; // [rsp+CE8h] [rbp+C68h]
  __int128 v31; // [rsp+CF0h] [rbp+C70h] BYREF
  __int64 v32; // [rsp+D00h] [rbp+C80h]
  __int64 v33; // [rsp+D08h] [rbp+C88h]
  __m256i v34; // [rsp+D10h] [rbp+C90h] BYREF
  __int128 v35; // [rsp+D30h] [rbp+CB0h] BYREF
  __int64 v36; // [rsp+D40h] [rbp+CC0h]
  __int64 v37; // [rsp+D50h] [rbp+CD0h]
  char v38; // [rsp+D5Eh] [rbp+CDEh]
  char v39; // [rsp+D5Fh] [rbp+CDFh]
  __int64 v40; // [rsp+D60h] [rbp+CE0h]

  v40 = -2;
  sub_14172B820(v7, a1, 520);
  sub_14172B820(v12, a1 + 520, 400);
  v32 = *(_QWORD *)(a1 + 936);
  v31 = *(_OWORD *)(a1 + 920);
  v20 = 0;
  v16 = (__int64)aUpdateVoiceRun;
  *(_QWORD *)&v17 = 29;
  *((_QWORD *)&v17 + 1) = aApp;
  *(_QWORD *)&v18 = 3;
  *((_QWORD *)&v18 + 1) = v7;
  v19 = &v31;
  v39 = 1;
  sub_1401A9630((__int64)&v8, (__int64)&v16);
  if ( v8 == -1 )
  {
    v11 = v9;
    sub_14172B820(&v16, a1 + 520, 360);
    *(_OWORD *)v34.m256i_i8 = *(_OWORD *)(a1 + 880);
    v34.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    v10 = 1;
    v39 = 0;
    sub_140AFFC30((__int64)&v16, v13, (__int64)&v10, (__int128 *)v34.m256i_i8, v14, v15);
  }
  else
  {
    sub_14172B820(v21, &v8, 152);
    v20 = 0;
    v16 = (__int64)aUpdateVoiceRun;
    *(_QWORD *)&v17 = 29;
    *((_QWORD *)&v17 + 1) = aEnabled;
    *(_QWORD *)&v18 = 7;
    *((_QWORD *)&v18 + 1) = v7;
    v19 = &v31;
    sub_1409562A0(&v28, &v16);
    LOBYTE(v37) = v28.m256i_i8[0] == -1;
    if ( v28.m256i_i8[0] == -1 )
    {
      v2 = v28.m256i_i8[1];
      v20 = 0;
      v16 = (__int64)aUpdateVoiceRun;
      *(_QWORD *)&v17 = 29;
      *((_QWORD *)&v17 + 1) = aShortcut;
      *(_QWORD *)&v18 = 8;
      *((_QWORD *)&v18 + 1) = v7;
      v19 = &v31;
      sub_140952570(&v29, &v16);
      LOBYTE(v37) = v29.m256i_i8[0] == -1;
      if ( v29.m256i_i8[0] == -1 )
      {
        v36 = v29.m256i_i64[3];
        v35 = *(_OWORD *)&v29.m256i_u64[1];
        v20 = 0;
        v16 = (__int64)aUpdateVoiceRun;
        *(_QWORD *)&v17 = 29;
        *((_QWORD *)&v17 + 1) = aSpeechmodel;
        *(_QWORD *)&v18 = 11;
        *((_QWORD *)&v18 + 1) = v7;
        v19 = &v31;
        sub_1409539E0(&v27, &v16);
        LOBYTE(v37) = v27.m256i_i8[0] == -1;
        if ( v27.m256i_i8[0] == -1 )
        {
          v3 = v27.m256i_i8[1];
          v20 = 0;
          v16 = (__int64)aUpdateVoiceRun;
          *(_QWORD *)&v17 = 29;
          *((_QWORD *)&v17 + 1) = aProcessingmode;
          *(_QWORD *)&v18 = 14;
          *((_QWORD *)&v18 + 1) = v7;
          v19 = &v31;
          sub_140953DC0(&v26, &v16);
          LOBYTE(v37) = v26.m256i_i8[0] == -1;
          if ( v26.m256i_i8[0] == -1 )
          {
            LOBYTE(v33) = v26.m256i_i8[1];
            v20 = 0;
            v16 = (__int64)aUpdateVoiceRun;
            *(_QWORD *)&v17 = 29;
            *((_QWORD *)&v17 + 1) = aProcessingmode_0;
            *(_QWORD *)&v18 = 16;
            *((_QWORD *)&v18 + 1) = v7;
            v19 = &v31;
            sub_140952570(&v34, &v16);
            LOBYTE(v37) = v34.m256i_i8[0];
            if ( v34.m256i_i8[0] == -1 )
            {
              v25 = v34.m256i_i64[3];
              v24 = *(_OWORD *)&v34.m256i_u64[1];
              update_voice_runtime_settings(
                (unsigned int)&v10,
                (unsigned int)v21,
                v2,
                (unsigned int)&v35,
                v3,
                v33,
                (__int64)&v24);
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
            v11 = v34;
            sub_14172B820(&v16, a1 + 520, 360);
            v22 = *(_OWORD *)(a1 + 880);
            v23 = *(_QWORD *)(a1 + 896);
            v10 = 1;
            sub_140AFFC30((__int64)&v16, v13, (__int64)&v10, &v22, v14, v15);
            if ( (__int64)v35 > 0 )
              sub_140001660(*((_QWORD *)&v35 + 1), v35, 1);
          }
          else
          {
            v11 = v26;
            sub_14172B820(&v16, a1 + 520, 360);
            *(_OWORD *)v34.m256i_i8 = *(_OWORD *)(a1 + 880);
            v34.m256i_i64[2] = *(_QWORD *)(a1 + 896);
            v10 = 1;
            sub_140AFFC30((__int64)&v16, v13, (__int64)&v10, (__int128 *)v34.m256i_i8, v14, v15);
            if ( (__int64)v35 > 0 )
              sub_140001660(*((_QWORD *)&v35 + 1), v35, 1);
          }
        }
        else
        {
          v11 = v27;
          sub_14172B820(&v16, a1 + 520, 360);
          *(_OWORD *)v34.m256i_i8 = *(_OWORD *)(a1 + 880);
          v34.m256i_i64[2] = *(_QWORD *)(a1 + 896);
          v10 = 1;
          sub_140AFFC30((__int64)&v16, v13, (__int64)&v10, (__int128 *)v34.m256i_i8, v14, v15);
          if ( (__int64)v35 > 0 )
            sub_140001660(*((_QWORD *)&v35 + 1), v35, 1);
        }
        v39 = 0;
        sub_1400437E0(v21);
      }
      else
      {
        v11 = v29;
        sub_14172B820(&v16, a1 + 520, 360);
        *(_OWORD *)v34.m256i_i8 = *(_OWORD *)(a1 + 880);
        v34.m256i_i64[2] = *(_QWORD *)(a1 + 896);
        v10 = 1;
        sub_140AFFC30((__int64)&v16, v13, (__int64)&v10, (__int128 *)v34.m256i_i8, v14, v15);
        v39 = 0;
        sub_1400437E0(v21);
      }
    }
    else
    {
      v11 = v28;
      sub_14172B820(&v16, a1 + 520, 360);
      *(_OWORD *)v34.m256i_i8 = *(_OWORD *)(a1 + 880);
      v34.m256i_i64[2] = *(_QWORD *)(a1 + 896);
      v10 = 1;
      sub_140AFFC30((__int64)&v16, v13, (__int64)&v10, (__int128 *)v34.m256i_i8, v14, v15);
      v39 = 0;
      sub_1400437E0(v21);
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
      sub_140401FB0();
      v4 = v5;
    }
    if ( (_QWORD)v31 )
      sub_140001660(*((_QWORD *)&v31 + 1), 96 * v31, 8);
  }
  return sub_140043900(v7);
}
