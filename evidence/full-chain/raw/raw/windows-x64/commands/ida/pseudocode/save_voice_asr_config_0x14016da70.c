// module: codexmate_lib/commands
// addr: 0x14016da70
// name: save_voice_asr_config
// win 1.2.1 | tauri command handler = save_voice_asr_config | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall save_voice_asr_config(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  _BYTE v5[520]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v6[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v7; // [rsp+3C0h] [rbp+340h]
  int v8; // [rsp+3C8h] [rbp+348h]
  int v9; // [rsp+3CCh] [rbp+34Ch]
  __int128 v10; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v11; // [rsp+3E0h] [rbp+360h]
  const char *v12; // [rsp+488h] [rbp+408h] BYREF
  __int64 v13; // [rsp+490h] [rbp+410h]
  const char *v14; // [rsp+498h] [rbp+418h]
  __int64 v15; // [rsp+4A0h] [rbp+420h]
  _BYTE *v16; // [rsp+4A8h] [rbp+428h]
  __int128 *v17; // [rsp+4B0h] [rbp+430h]
  __int64 v18; // [rsp+4B8h] [rbp+438h]
  __int64 v19; // [rsp+618h] [rbp+598h] BYREF
  __int128 v20; // [rsp+620h] [rbp+5A0h]
  __int128 v21; // [rsp+630h] [rbp+5B0h]
  __int128 v22; // [rsp+6D0h] [rbp+650h] BYREF
  __int128 v23; // [rsp+6E0h] [rbp+660h]
  __int128 v24; // [rsp+6F0h] [rbp+670h] BYREF
  __int128 v25; // [rsp+700h] [rbp+680h]
  __int128 v26; // [rsp+710h] [rbp+690h] BYREF
  __int128 v27; // [rsp+720h] [rbp+6A0h]
  __int128 v28; // [rsp+730h] [rbp+6B0h] BYREF
  __int128 v29; // [rsp+740h] [rbp+6C0h]
  __int128 v30; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v31; // [rsp+760h] [rbp+6E0h]
  __int64 v32; // [rsp+770h] [rbp+6F0h]
  __int64 v33; // [rsp+778h] [rbp+6F8h]
  __int64 v34; // [rsp+780h] [rbp+700h]
  __int64 v35; // [rsp+788h] [rbp+708h]
  __int64 v36; // [rsp+790h] [rbp+710h]
  __int64 v37; // [rsp+798h] [rbp+718h]
  __int64 v38; // [rsp+7A0h] [rbp+720h]
  char v39; // [rsp+7AEh] [rbp+72Eh]
  char v40; // [rsp+7AFh] [rbp+72Fh]
  __int64 v41; // [rsp+7B0h] [rbp+730h]

  v41 = -2;
  sub_141684120(v5, a1, 520);
  sub_141684120(v6, a1 + 520, 400);
  v31 = *(_QWORD *)(a1 + 936);
  v30 = *(_OWORD *)(a1 + 920);
  v18 = 0;
  v12 = aSaveVoiceAsrCo;
  v13 = 21;
  v14 = aAsrprovider;
  v15 = 11;
  v16 = v5;
  v17 = &v30;
  v40 = 1;
  sub_1409757B0(&v26, &v12);
  if ( (_BYTE)v26 == 0xFF )
  {
    v38 = *((_QWORD *)&v26 + 1);
    v37 = v27;
    v18 = 0;
    v12 = aSaveVoiceAsrCo;
    v13 = 21;
    v14 = aAsrapikey;
    v15 = 9;
    v16 = v5;
    v17 = &v30;
    sub_1409757B0(&v24, &v12);
    LOBYTE(v36) = (_BYTE)v24 == 0xFF;
    if ( (_BYTE)v24 == 0xFF )
    {
      v35 = *((_QWORD *)&v24 + 1);
      v33 = v25;
      v18 = 0;
      v12 = aSaveVoiceAsrCo;
      v13 = 21;
      v14 = aAsrmodel;
      v15 = 8;
      v16 = v5;
      v17 = &v30;
      sub_1409757B0(&v22, &v12);
      LOBYTE(v36) = (_BYTE)v22 == 0xFF;
      if ( (_BYTE)v22 == 0xFF )
      {
        v34 = *((_QWORD *)&v22 + 1);
        v32 = v23;
        v18 = 0;
        v12 = aSaveVoiceAsrCo;
        v13 = 21;
        v14 = aAsrbaseurl;
        v15 = 10;
        v16 = v5;
        v17 = &v30;
        sub_1409757B0(&v28, &v12);
        LOBYTE(v36) = v28;
        if ( (_BYTE)v28 == 0xFF )
        {
          sub_1407558C0(
            (unsigned int)&v10,
            (unsigned int)&v26 + 8,
            (unsigned int)&v24 + 8,
            (unsigned int)&v22 + 8,
            (__int64)&v28 + 8);
          sub_141684120(&v12, a1 + 520, 400);
          if ( (_QWORD)v10 == -1 )
          {
            v39 = 1;
            sub_1401BDB30(&v28, (char *)&v10 + 8);
            v21 = v29;
            v20 = v28;
            v19 = -1;
          }
          else
          {
            sub_141684120(&v19, &v10, 184);
          }
          v39 = 0;
          sub_140434380(&v12, &v19);
          goto LABEL_11;
        }
        v21 = v29;
        v20 = v28;
        sub_141684120(&v12, a1 + 520, 360);
        v10 = *(_OWORD *)(a1 + 880);
        v11 = *(_QWORD *)(a1 + 896);
        v19 = 1;
        sub_14047E370((unsigned int)&v12, v7, (unsigned int)&v19, (unsigned int)&v10, v8, v9);
        if ( v34 )
          sub_140001660(v32, v34, 1);
      }
      else
      {
        v21 = v23;
        v20 = v22;
        sub_141684120(&v12, a1 + 520, 360);
        v10 = *(_OWORD *)(a1 + 880);
        v11 = *(_QWORD *)(a1 + 896);
        v19 = 1;
        sub_14047E370((unsigned int)&v12, v7, (unsigned int)&v19, (unsigned int)&v10, v8, v9);
      }
      if ( v35 )
        sub_140001660(v33, v35, 1);
    }
    else
    {
      v21 = v25;
      v20 = v24;
      sub_141684120(&v12, a1 + 520, 360);
      v10 = *(_OWORD *)(a1 + 880);
      v11 = *(_QWORD *)(a1 + 896);
      v19 = 1;
      sub_14047E370((unsigned int)&v12, v7, (unsigned int)&v19, (unsigned int)&v10, v8, v9);
    }
    if ( v38 )
      sub_140001660(v37, v38, 1);
  }
  else
  {
    v21 = v27;
    v20 = v26;
    sub_141684120(&v12, a1 + 520, 360);
    v10 = *(_OWORD *)(a1 + 880);
    v11 = *(_QWORD *)(a1 + 896);
    v19 = 1;
    v40 = 0;
    sub_14047E370((unsigned int)&v12, v7, (unsigned int)&v19, (unsigned int)&v10, v8, v9);
  }
LABEL_11:
  if ( (_QWORD)v30 != -1 )
  {
    v2 = *((_QWORD *)&v30 + 1);
    v37 = v31;
    v38 = 0;
    v36 = *((_QWORD *)&v30 + 1);
    while ( v37 != v38 )
    {
      ++v38;
      v3 = v2 + 96;
      sub_1402C7520();
      v2 = v3;
    }
    if ( (_QWORD)v30 )
      sub_140001660(*((_QWORD *)&v30 + 1), 96 * v30, 8);
  }
  return sub_140014270(v5);
}