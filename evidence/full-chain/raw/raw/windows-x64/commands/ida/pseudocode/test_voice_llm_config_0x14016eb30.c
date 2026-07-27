// module: codexmate_lib/commands
// addr: 0x14016eb30
// name: test_voice_llm_config
// win 1.2.1 | tauri command handler = test_voice_llm_config | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall test_voice_llm_config(__int64 a1)
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
  __int128 v18; // [rsp+570h] [rbp+4F0h]
  __int128 v19; // [rsp+580h] [rbp+500h]
  __int128 v20; // [rsp+590h] [rbp+510h]
  __int128 v21; // [rsp+5A0h] [rbp+520h]
  __int128 v22; // [rsp+5B0h] [rbp+530h]
  __int64 v23; // [rsp+5C0h] [rbp+540h]
  __int128 v24; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v25; // [rsp+5E0h] [rbp+560h]
  __int128 v26; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v27; // [rsp+600h] [rbp+580h]
  __int128 v28; // [rsp+610h] [rbp+590h] BYREF
  __int128 v29; // [rsp+620h] [rbp+5A0h]
  __int128 v30; // [rsp+630h] [rbp+5B0h] BYREF
  __int128 v31; // [rsp+640h] [rbp+5C0h]
  _BYTE v32[48]; // [rsp+650h] [rbp+5D0h] BYREF
  __int128 v33; // [rsp+680h] [rbp+600h]
  __int128 v34; // [rsp+690h] [rbp+610h]
  __int128 v35; // [rsp+6A0h] [rbp+620h]
  __int64 v36; // [rsp+6B0h] [rbp+630h]
  __int128 v37; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v38; // [rsp+6D0h] [rbp+650h]
  __int64 v39; // [rsp+6E0h] [rbp+660h]
  __int64 v40; // [rsp+6E8h] [rbp+668h]
  __int64 v41; // [rsp+6F0h] [rbp+670h]
  __int64 v42; // [rsp+6F8h] [rbp+678h]
  __int64 v43; // [rsp+700h] [rbp+680h]
  __int64 v44; // [rsp+708h] [rbp+688h]
  __int64 v45; // [rsp+710h] [rbp+690h]
  char v46; // [rsp+71Eh] [rbp+69Eh]
  char v47; // [rsp+71Fh] [rbp+69Fh]
  __int64 v48; // [rsp+720h] [rbp+6A0h]

  v48 = -2;
  sub_141684120(v5, a1, 520);
  sub_141684120(v6, a1 + 520, 400);
  v38 = *(_QWORD *)(a1 + 936);
  v37 = *(_OWORD *)(a1 + 920);
  v16 = 0;
  v10 = aTestVoiceLlmCo;
  v11 = 21;
  v12 = aLlmprovider;
  v13 = 11;
  v14 = v5;
  v15 = &v37;
  v47 = 1;
  sub_1409757B0(&v28, &v10);
  if ( (_BYTE)v28 == 0xFF )
  {
    v45 = *((_QWORD *)&v28 + 1);
    v44 = v29;
    v16 = 0;
    v10 = aTestVoiceLlmCo;
    v11 = 21;
    v12 = aLlmapikey;
    v13 = 9;
    v14 = v5;
    v15 = &v37;
    sub_1409757B0(&v26, &v10);
    LOBYTE(v43) = (_BYTE)v26 == 0xFF;
    if ( (_BYTE)v26 == 0xFF )
    {
      v42 = *((_QWORD *)&v26 + 1);
      v40 = v27;
      v16 = 0;
      v10 = aTestVoiceLlmCo;
      v11 = 21;
      v12 = aLlmmodel;
      v13 = 8;
      v14 = v5;
      v15 = &v37;
      sub_1409757B0(&v24, &v10);
      LOBYTE(v43) = (_BYTE)v24 == 0xFF;
      if ( (_BYTE)v24 == 0xFF )
      {
        v41 = *((_QWORD *)&v24 + 1);
        v39 = v25;
        v16 = 0;
        v10 = aTestVoiceLlmCo;
        v11 = 21;
        v12 = aLlmbaseurl;
        v13 = 10;
        v14 = v5;
        v15 = &v37;
        sub_1409757B0(&v30, &v10);
        LOBYTE(v43) = v30;
        if ( (_BYTE)v30 == 0xFF )
        {
          sub_140757350(
            (unsigned int)&v17,
            (unsigned int)&v28 + 8,
            (unsigned int)&v26 + 8,
            (unsigned int)&v24 + 8,
            (__int64)&v30 + 8);
          sub_141684120(&v10, a1 + 520, 400);
          if ( (_QWORD)v17 == -1 )
          {
            v46 = 1;
            sub_1401BDB30(&v30, (char *)&v17 + 8);
            *(_OWORD *)&v32[24] = v31;
            *(_OWORD *)&v32[8] = v30;
            *(_QWORD *)v32 = -1;
          }
          else
          {
            v36 = v23;
            v35 = v22;
            v34 = v21;
            v33 = v20;
            *(_OWORD *)&v32[32] = v19;
            *(_OWORD *)&v32[16] = v18;
            *(_OWORD *)v32 = v17;
          }
          v46 = 0;
          sub_1404363A0(&v10, v32);
          goto LABEL_11;
        }
        *(_OWORD *)&v32[24] = v31;
        *(_OWORD *)&v32[8] = v30;
        sub_141684120(&v10, a1 + 520, 360);
        v17 = *(_OWORD *)(a1 + 880);
        *(_QWORD *)&v18 = *(_QWORD *)(a1 + 896);
        *(_QWORD *)v32 = 1;
        sub_14047E370((unsigned int)&v10, v7, (unsigned int)v32, (unsigned int)&v17, v8, v9);
        if ( v41 )
          sub_140001660(v39, v41, 1);
      }
      else
      {
        *(_OWORD *)&v32[24] = v25;
        *(_OWORD *)&v32[8] = v24;
        sub_141684120(&v10, a1 + 520, 360);
        v17 = *(_OWORD *)(a1 + 880);
        *(_QWORD *)&v18 = *(_QWORD *)(a1 + 896);
        *(_QWORD *)v32 = 1;
        sub_14047E370((unsigned int)&v10, v7, (unsigned int)v32, (unsigned int)&v17, v8, v9);
      }
      if ( v42 )
        sub_140001660(v40, v42, 1);
    }
    else
    {
      *(_OWORD *)&v32[24] = v27;
      *(_OWORD *)&v32[8] = v26;
      sub_141684120(&v10, a1 + 520, 360);
      v17 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v18 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v32 = 1;
      sub_14047E370((unsigned int)&v10, v7, (unsigned int)v32, (unsigned int)&v17, v8, v9);
    }
    if ( v45 )
      sub_140001660(v44, v45, 1);
  }
  else
  {
    *(_OWORD *)&v32[24] = v29;
    *(_OWORD *)&v32[8] = v28;
    sub_141684120(&v10, a1 + 520, 360);
    v17 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v18 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v32 = 1;
    v47 = 0;
    sub_14047E370((unsigned int)&v10, v7, (unsigned int)v32, (unsigned int)&v17, v8, v9);
  }
LABEL_11:
  if ( (_QWORD)v37 != -1 )
  {
    v2 = *((_QWORD *)&v37 + 1);
    v44 = v38;
    v45 = 0;
    v43 = *((_QWORD *)&v37 + 1);
    while ( v44 != v45 )
    {
      ++v45;
      v3 = v2 + 96;
      sub_1402C7520();
      v2 = v3;
    }
    if ( (_QWORD)v37 )
      sub_140001660(*((_QWORD *)&v37 + 1), 96 * v37, 8);
  }
  return sub_140014270(v5);
}