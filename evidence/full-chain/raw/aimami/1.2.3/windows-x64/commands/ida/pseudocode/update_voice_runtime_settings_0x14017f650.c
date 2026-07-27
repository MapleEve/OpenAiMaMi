// module: codexmate_lib/commands
// addr: 0x14017f650
// name: update_voice_runtime_settings
// win 1.2.1 | tauri command handler = update_voice_runtime_settings | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall update_voice_runtime_settings(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int8 v5; // r14
  char v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-60h]
  _BYTE v11[520]; // [rsp+40h] [rbp-40h] BYREF
  int v12; // [rsp+248h] [rbp+1C8h] BYREF
  __m256i v13; // [rsp+250h] [rbp+1D0h]
  __int64 v14; // [rsp+3D8h] [rbp+358h] BYREF
  __m256i v15; // [rsp+3E0h] [rbp+360h] BYREF
  _BYTE v16[384]; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v17; // [rsp+870h] [rbp+7F0h]
  int v18; // [rsp+878h] [rbp+7F8h]
  int v19; // [rsp+87Ch] [rbp+7FCh]
  __int64 v20; // [rsp+880h] [rbp+800h] BYREF
  __int128 v21; // [rsp+888h] [rbp+808h]
  __int128 v22; // [rsp+898h] [rbp+818h]
  __int128 *v23; // [rsp+8A8h] [rbp+828h]
  __int64 v24; // [rsp+8B0h] [rbp+830h]
  _OWORD v25[9]; // [rsp+B98h] [rbp+B18h] BYREF
  __int128 v26; // [rsp+C30h] [rbp+BB0h] BYREF
  __int64 v27; // [rsp+C40h] [rbp+BC0h]
  __int128 v28; // [rsp+C50h] [rbp+BD0h] BYREF
  __int64 v29; // [rsp+C60h] [rbp+BE0h]
  __m256i v30; // [rsp+C68h] [rbp+BE8h] BYREF
  __m256i v31; // [rsp+C88h] [rbp+C08h] BYREF
  __m256i v32; // [rsp+CA8h] [rbp+C28h] BYREF
  __m256i v33; // [rsp+CC8h] [rbp+C48h] BYREF
  __int64 v34; // [rsp+CE8h] [rbp+C68h]
  __int128 v35; // [rsp+CF0h] [rbp+C70h] BYREF
  __int64 v36; // [rsp+D00h] [rbp+C80h]
  __int64 v37; // [rsp+D08h] [rbp+C88h]
  __m256i v38; // [rsp+D10h] [rbp+C90h] BYREF
  __int128 v39; // [rsp+D30h] [rbp+CB0h] BYREF
  __int64 v40; // [rsp+D40h] [rbp+CC0h]
  __int64 v41; // [rsp+D50h] [rbp+CD0h]
  char v42; // [rsp+D5Eh] [rbp+CDEh]
  char v43; // [rsp+D5Fh] [rbp+CDFh]
  __int64 v44; // [rsp+D60h] [rbp+CE0h]

  v44 = -2;
  sub_141684120(v11, a1, 520);
  sub_141684120(v16, a1 + 520, 400);
  v36 = *(_QWORD *)(a1 + 936);
  v35 = *(_OWORD *)(a1 + 920);
  v24 = 0;
  v20 = (__int64)aUpdateVoiceRun;
  *(_QWORD *)&v21 = 29;
  *((_QWORD *)&v21 + 1) = aApp;
  *(_QWORD *)&v22 = 3;
  *((_QWORD *)&v22 + 1) = v11;
  v23 = &v35;
  v43 = 1;
  sub_1401C3650(&v12, &v20);
  if ( v12 == -1 )
  {
    v15 = v13;
    sub_141684120(&v20, a1 + 520, 360);
    *(_OWORD *)v38.m256i_i8 = *(_OWORD *)(a1 + 880);
    v38.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    v14 = 1;
    v43 = 0;
    sub_14047E370((unsigned int)&v20, v17, (unsigned int)&v14, (unsigned int)&v38, v18, v19);
  }
  else
  {
    sub_141684120(v25, &v12, 152);
    v24 = 0;
    v20 = (__int64)aUpdateVoiceRun;
    *(_QWORD *)&v21 = 29;
    *((_QWORD *)&v21 + 1) = aEnabled;
    *(_QWORD *)&v22 = 7;
    *((_QWORD *)&v22 + 1) = v11;
    v23 = &v35;
    sub_1401BCE80(&v32, &v20);
    LOBYTE(v41) = v32.m256i_i8[0] == -1;
    if ( v32.m256i_i8[0] == -1 )
    {
      v5 = v32.m256i_i8[1];
      v24 = 0;
      v20 = (__int64)aUpdateVoiceRun;
      *(_QWORD *)&v21 = 29;
      *((_QWORD *)&v21 + 1) = aShortcut;
      *(_QWORD *)&v22 = 8;
      *((_QWORD *)&v22 + 1) = v11;
      v23 = &v35;
      sub_140973410(&v33, &v20);
      LOBYTE(v41) = v33.m256i_i8[0] == -1;
      if ( v33.m256i_i8[0] == -1 )
      {
        v40 = v33.m256i_i64[3];
        v39 = *(_OWORD *)&v33.m256i_u64[1];
        v24 = 0;
        v20 = (__int64)aUpdateVoiceRun;
        *(_QWORD *)&v21 = 29;
        *((_QWORD *)&v21 + 1) = aSpeechmodel;
        *(_QWORD *)&v22 = 11;
        *((_QWORD *)&v22 + 1) = v11;
        v23 = &v35;
        sub_1409744E0(&v31, &v20);
        LOBYTE(v41) = v31.m256i_i8[0] == -1;
        if ( v31.m256i_i8[0] == -1 )
        {
          v6 = v31.m256i_i8[1];
          v24 = 0;
          v20 = (__int64)aUpdateVoiceRun;
          *(_QWORD *)&v21 = 29;
          *((_QWORD *)&v21 + 1) = aProcessingmode;
          *(_QWORD *)&v22 = 14;
          *((_QWORD *)&v22 + 1) = v11;
          v23 = &v35;
          sub_1409748E0(&v30, &v20);
          LOBYTE(v41) = v30.m256i_i8[0] == -1;
          if ( v30.m256i_i8[0] == -1 )
          {
            LOBYTE(v37) = v30.m256i_i8[1];
            v24 = 0;
            v20 = (__int64)aUpdateVoiceRun;
            *(_QWORD *)&v21 = 29;
            *((_QWORD *)&v21 + 1) = aProcessingmode_0;
            *(_QWORD *)&v22 = 16;
            *((_QWORD *)&v22 + 1) = v11;
            v23 = &v35;
            sub_140973410(&v38, &v20);
            LOBYTE(v41) = v38.m256i_i8[0];
            if ( v38.m256i_i8[0] == -1 )
            {
              v29 = v38.m256i_i64[3];
              v28 = *(_OWORD *)&v38.m256i_u64[1];
              sub_140B954A0((unsigned int)&v14, (unsigned int)v25, v5, (unsigned int)&v39, v6, v37, (__int64)&v28);
              sub_141684120(&v12, a1 + 520, 400);
              if ( (_DWORD)v14 == 2 )
              {
                v42 = 1;
                sub_1401BDB30(v25, &v15);
                v22 = v25[1];
                v21 = v25[0];
                v20 = 2;
              }
              else
              {
                sub_141684120(&v20, &v14, 792);
              }
              v42 = 0;
              sub_1404353B0(&v12, &v20);
              goto LABEL_26;
            }
            v15 = v38;
            sub_141684120(&v20, a1 + 520, 360);
            v26 = *(_OWORD *)(a1 + 880);
            v27 = *(_QWORD *)(a1 + 896);
            v14 = 1;
            sub_14047E370((unsigned int)&v20, v17, (unsigned int)&v14, (unsigned int)&v26, v18, v19);
            if ( (_QWORD)v39 != -1 && (_QWORD)v39 )
              sub_140001660(*((_QWORD *)&v39 + 1), v39, 1);
          }
          else
          {
            v15 = v30;
            sub_141684120(&v20, a1 + 520, 360);
            *(_OWORD *)v38.m256i_i8 = *(_OWORD *)(a1 + 880);
            v38.m256i_i64[2] = *(_QWORD *)(a1 + 896);
            v14 = 1;
            sub_14047E370((unsigned int)&v20, v17, (unsigned int)&v14, (unsigned int)&v38, v18, v19);
            if ( (_QWORD)v39 != -1 && (_QWORD)v39 )
              sub_140001660(*((_QWORD *)&v39 + 1), v39, 1);
          }
        }
        else
        {
          v15 = v31;
          sub_141684120(&v20, a1 + 520, 360);
          *(_OWORD *)v38.m256i_i8 = *(_OWORD *)(a1 + 880);
          v38.m256i_i64[2] = *(_QWORD *)(a1 + 896);
          v14 = 1;
          sub_14047E370((unsigned int)&v20, v17, (unsigned int)&v14, (unsigned int)&v38, v18, v19);
          if ( (_QWORD)v39 != -1 && (_QWORD)v39 )
            sub_140001660(*((_QWORD *)&v39 + 1), v39, 1);
        }
        v43 = 0;
        sub_140014150(v25);
      }
      else
      {
        v15 = v33;
        sub_141684120(&v20, a1 + 520, 360);
        *(_OWORD *)v38.m256i_i8 = *(_OWORD *)(a1 + 880);
        v38.m256i_i64[2] = *(_QWORD *)(a1 + 896);
        v14 = 1;
        sub_14047E370((unsigned int)&v20, v17, (unsigned int)&v14, (unsigned int)&v38, v18, v19);
        v43 = 0;
        sub_140014150(v25);
      }
    }
    else
    {
      v15 = v32;
      sub_141684120(&v20, a1 + 520, 360);
      *(_OWORD *)v38.m256i_i8 = *(_OWORD *)(a1 + 880);
      v38.m256i_i64[2] = *(_QWORD *)(a1 + 896);
      v14 = 1;
      sub_14047E370((unsigned int)&v20, v17, (unsigned int)&v14, (unsigned int)&v38, v18, v19);
      v43 = 0;
      sub_140014150(v25);
    }
  }
LABEL_26:
  if ( (_QWORD)v35 != -1 )
  {
    v7 = *((_QWORD *)&v35 + 1);
    v37 = v36;
    v41 = 0;
    v34 = *((_QWORD *)&v35 + 1);
    while ( v37 != v41 )
    {
      ++v41;
      v8 = v7 + 96;
      sub_1402C7520(v7, v2, v3, v4, v10);
      v7 = v8;
    }
    if ( (_QWORD)v35 )
      sub_140001660(*((_QWORD *)&v35 + 1), 96 * v35, 8);
  }
  return sub_140014270(v11);
}