// module: codexmate_lib/commands
// addr: 0x14016ced0
// name: test_voice_asr_config
// win 1.2.1 | tauri command handler = test_voice_asr_config | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall test_voice_asr_config(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  _BYTE v5[520]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v6[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v7; // [rsp+3C0h] [rbp+340h]
  int v8; // [rsp+3C8h] [rbp+348h]
  int v9; // [rsp+3CCh] [rbp+34Ch]
  const char *v10; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v11; // [rsp+3D8h] [rbp+358h]
  const char *v12; // [rsp+3E0h] [rbp+360h]
  __int64 v13; // [rsp+3E8h] [rbp+368h]
  _BYTE *v14; // [rsp+3F0h] [rbp+370h]
  __int128 *v15; // [rsp+3F8h] [rbp+378h]
  __int64 v16; // [rsp+400h] [rbp+380h]
  __int128 v17; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v18; // [rsp+570h] [rbp+4F0h]
  __m256i v19; // [rsp+580h] [rbp+500h] BYREF
  __m256i v20; // [rsp+5A0h] [rbp+520h] BYREF
  __m256i v21; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v22; // [rsp+5E0h] [rbp+560h] BYREF
  __int128 v23; // [rsp+5F0h] [rbp+570h]
  __int128 v24; // [rsp+600h] [rbp+580h]
  __int128 v25; // [rsp+610h] [rbp+590h]
  __int128 v26; // [rsp+620h] [rbp+5A0h]
  __int128 v27; // [rsp+630h] [rbp+5B0h]
  __int64 v28; // [rsp+640h] [rbp+5C0h]
  __int64 v29; // [rsp+648h] [rbp+5C8h]
  _BYTE v30[48]; // [rsp+650h] [rbp+5D0h] BYREF
  __int128 v31; // [rsp+680h] [rbp+600h]
  __int128 v32; // [rsp+690h] [rbp+610h]
  __int128 v33; // [rsp+6A0h] [rbp+620h]
  __int64 v34; // [rsp+6B0h] [rbp+630h]
  __m256i v35; // [rsp+6B8h] [rbp+638h] BYREF
  __int64 v36; // [rsp+6D8h] [rbp+658h]
  __int128 v37; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v38; // [rsp+6F0h] [rbp+670h]
  __int128 v39; // [rsp+700h] [rbp+680h] BYREF
  __int64 v40; // [rsp+710h] [rbp+690h]
  __int128 v41; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v42; // [rsp+730h] [rbp+6B0h]
  __int128 v43; // [rsp+740h] [rbp+6C0h] BYREF
  __int64 v44; // [rsp+750h] [rbp+6D0h]
  __int64 v45; // [rsp+760h] [rbp+6E0h]
  char v46; // [rsp+76Eh] [rbp+6EEh]
  char v47; // [rsp+76Fh] [rbp+6EFh]
  __int64 v48; // [rsp+770h] [rbp+6F0h]

  v48 = -2;
  sub_141684120(v5, a1, 520);
  sub_141684120(v6, a1 + 520, 400);
  v40 = *(_QWORD *)(a1 + 936);
  v39 = *(_OWORD *)(a1 + 920);
  v16 = 0;
  v10 = aTestVoiceAsrCo;
  v11 = 21;
  v12 = aAsrprovider;
  v13 = 11;
  v14 = v5;
  v15 = &v39;
  v47 = 1;
  sub_1409757B0(&v21, &v10);
  if ( v21.m256i_i8[0] == -1 )
  {
    v44 = v21.m256i_i64[3];
    v43 = *(_OWORD *)&v21.m256i_u64[1];
    v16 = 0;
    v10 = aTestVoiceAsrCo;
    v11 = 21;
    v12 = aAsrapikey;
    v13 = 9;
    v14 = v5;
    v15 = &v39;
    sub_1409757B0(&v20, &v10);
    LOBYTE(v45) = v20.m256i_i8[0] == -1;
    if ( v20.m256i_i8[0] == -1 )
    {
      v42 = v20.m256i_i64[3];
      v41 = *(_OWORD *)&v20.m256i_u64[1];
      v16 = 0;
      v10 = aTestVoiceAsrCo;
      v11 = 21;
      v12 = aAsrmodel;
      v13 = 8;
      v14 = v5;
      v15 = &v39;
      sub_1409757B0(&v19, &v10);
      LOBYTE(v45) = v19.m256i_i8[0] == -1;
      if ( v19.m256i_i8[0] == -1 )
      {
        v38 = v19.m256i_i64[3];
        v37 = *(_OWORD *)&v19.m256i_u64[1];
        v16 = 0;
        v10 = aTestVoiceAsrCo;
        v11 = 21;
        v12 = aAsrbaseurl;
        v13 = 10;
        v14 = v5;
        v15 = &v39;
        sub_1409757B0(&v35, &v10);
        LOBYTE(v45) = v35.m256i_i8[0];
        if ( v35.m256i_i8[0] == -1 )
        {
          v18 = v35.m256i_i64[3];
          v17 = *(_OWORD *)&v35.m256i_u64[1];
          sub_140755DC0((unsigned int)&v22, (unsigned int)&v43, (unsigned int)&v41, (unsigned int)&v37, (__int64)&v17);
          sub_141684120(&v10, a1 + 520, 400);
          if ( (_QWORD)v22 == -1 )
          {
            v46 = 1;
            sub_1401BDB30(&v35, (char *)&v22 + 8);
            *(__m256i *)&v30[8] = v35;
            *(_QWORD *)v30 = -1;
          }
          else
          {
            v34 = v28;
            v33 = v27;
            v32 = v26;
            v31 = v25;
            *(_OWORD *)&v30[32] = v24;
            *(_OWORD *)&v30[16] = v23;
            *(_OWORD *)v30 = v22;
          }
          v46 = 0;
          sub_1404363A0(&v10, v30);
          goto LABEL_11;
        }
        *(__m256i *)&v30[8] = v35;
        sub_141684120(&v10, a1 + 520, 360);
        v22 = *(_OWORD *)(a1 + 880);
        *(_QWORD *)&v23 = *(_QWORD *)(a1 + 896);
        *(_QWORD *)v30 = 1;
        sub_14047E370((unsigned int)&v10, v7, (unsigned int)v30, (unsigned int)&v22, v8, v9);
        if ( (_QWORD)v37 )
          sub_140001660(*((_QWORD *)&v37 + 1), v37, 1);
      }
      else
      {
        *(__m256i *)&v30[8] = v19;
        sub_141684120(&v10, a1 + 520, 360);
        v22 = *(_OWORD *)(a1 + 880);
        *(_QWORD *)&v23 = *(_QWORD *)(a1 + 896);
        *(_QWORD *)v30 = 1;
        sub_14047E370((unsigned int)&v10, v7, (unsigned int)v30, (unsigned int)&v22, v8, v9);
      }
      if ( (_QWORD)v41 )
        sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
    }
    else
    {
      *(__m256i *)&v30[8] = v20;
      sub_141684120(&v10, a1 + 520, 360);
      v22 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v23 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v30 = 1;
      sub_14047E370((unsigned int)&v10, v7, (unsigned int)v30, (unsigned int)&v22, v8, v9);
    }
    if ( (_QWORD)v43 )
      sub_140001660(*((_QWORD *)&v43 + 1), v43, 1);
  }
  else
  {
    *(__m256i *)&v30[8] = v21;
    sub_141684120(&v10, a1 + 520, 360);
    v22 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v23 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v30 = 1;
    v47 = 0;
    sub_14047E370((unsigned int)&v10, v7, (unsigned int)v30, (unsigned int)&v22, v8, v9);
  }
LABEL_11:
  if ( (_QWORD)v39 != -1 )
  {
    v2 = *((_QWORD *)&v39 + 1);
    v36 = v40;
    v45 = 0;
    v29 = *((_QWORD *)&v39 + 1);
    while ( v36 != v45 )
    {
      ++v45;
      v3 = v2 + 96;
      sub_1402C7520();
      v2 = v3;
    }
    if ( (_QWORD)v39 )
      sub_140001660(*((_QWORD *)&v39 + 1), 96 * v39, 8);
  }
  return sub_140014270(v5);
}