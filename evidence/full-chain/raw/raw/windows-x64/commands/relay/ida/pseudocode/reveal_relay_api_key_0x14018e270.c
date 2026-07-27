// win 1.2.1 | tauri command handler = reveal_relay_api_key | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall reveal_relay_api_key(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // r14
  const char *v4; // rbx
  __int64 v5; // r14
  const char *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  _BYTE v15[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+238h] [rbp+1B8h]
  char v17[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v18; // [rsp+3C0h] [rbp+340h]
  int v19; // [rsp+3C8h] [rbp+348h]
  int v20; // [rsp+3CCh] [rbp+34Ch]
  const char *v21; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v22; // [rsp+3D8h] [rbp+358h]
  const char *v23; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v24; // [rsp+3E8h] [rbp+368h]
  __int128 v25; // [rsp+3F0h] [rbp+370h]
  __int128 v26; // [rsp+400h] [rbp+380h]
  __int128 v27; // [rsp+410h] [rbp+390h]
  __int128 v28; // [rsp+420h] [rbp+3A0h]
  __int64 v29; // [rsp+430h] [rbp+3B0h]
  _OWORD v30[2]; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v31; // [rsp+580h] [rbp+500h] BYREF
  __int128 v32; // [rsp+590h] [rbp+510h]
  __int128 v33; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v34; // [rsp+5B0h] [rbp+530h]
  __int128 v35; // [rsp+5C0h] [rbp+540h]
  __int128 v36; // [rsp+5D0h] [rbp+550h]
  __int64 v37; // [rsp+5E0h] [rbp+560h]
  __int64 v38; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v39; // [rsp+5F8h] [rbp+578h]
  _QWORD v40[11]; // [rsp+608h] [rbp+588h]
  __int128 v41; // [rsp+660h] [rbp+5E0h] BYREF
  const char *v42; // [rsp+670h] [rbp+5F0h]
  const char *v43; // [rsp+680h] [rbp+600h]
  __int64 v44; // [rsp+688h] [rbp+608h]
  char v45; // [rsp+696h] [rbp+616h]
  char v46; // [rsp+697h] [rbp+617h]
  __int64 v47; // [rsp+698h] [rbp+618h]

  v47 = -2; /*0x14018e289*/
  sub_141684120(v15, a1, 520); /*0x14018e2a7*/
  v2 = a1 + 520; /*0x14018e2ac*/
  sub_141684120(v17, a1 + 520, 400); /*0x14018e2c3*/
  v42 = *(const char **)(a1 + 936); /*0x14018e2cf*/
  v41 = *(_OWORD *)(a1 + 920); /*0x14018e2dd*/
  *(_QWORD *)&v26 = 0; /*0x14018e2e4*/
  v21 = aRevealRelayApi; /*0x14018e2f6*/
  v22 = 20; /*0x14018e2fd*/
  v23 = aManager_0; /*0x14018e30f*/
  v24 = 7; /*0x14018e316*/
  *(_QWORD *)&v25 = v15; /*0x14018e321*/
  *((_QWORD *)&v25 + 1) = &v41; /*0x14018e32f*/
  v46 = 1; /*0x14018e341*/
  v3 = (_QWORD *)sub_140004B10((volatile void *)(v16 + 16)); /*0x14018e34e*/
  if ( !v3 ) /*0x14018e354*/
  {
    v46 = 1; /*0x14018e466*/
    sub_1416850A0(v30, &v21, &v23); /*0x14018e47b*/
    if ( LOBYTE(v30[0]) != 0xFF ) /*0x14018e488*/
    {
      *(_OWORD *)v40 = v30[1]; /*0x14018e49c*/
      v39 = v30[0]; /*0x14018e4a3*/
      sub_141684120(&v21, a1 + 520, 360); /*0x14018e4bd*/
      v33 = *(_OWORD *)(a1 + 880); /*0x14018e4d0*/
      *(_QWORD *)&v34 = *(_QWORD *)(a1 + 896); /*0x14018e4de*/
      v38 = 1; /*0x14018e4f1*/
      v46 = 0; /*0x14018e4fc*/
      sub_14047E370((unsigned int)&v21, v18, (unsigned int)&v38, (unsigned int)&v33, v19, v20); /*0x14018e51c*/
      goto LABEL_20; /*0x14018e522*/
    }
    v3 = *((_QWORD **)&v30[0] + 1); /*0x14018e670*/
  }
  *(_QWORD *)&v26 = 0; /*0x14018e35a*/
  v21 = aRevealRelayApi; /*0x14018e365*/
  v22 = 20; /*0x14018e36c*/
  v23 = aProviderid; /*0x14018e37e*/
  v24 = 10; /*0x14018e385*/
  *(_QWORD *)&v25 = v15; /*0x14018e390*/
  *((_QWORD *)&v25 + 1) = &v41; /*0x14018e397*/
  v46 = 1; /*0x14018e39e*/
  sub_1409757B0(&v31, &v21); /*0x14018e3b3*/
  if ( (_BYTE)v31 == 0xFF ) /*0x14018e3c0*/
  {
    v44 = *((_QWORD *)&v31 + 1); /*0x14018e52e*/
    v43 = (const char *)v32; /*0x14018e54d*/
    sub_1408465F0((__int64)&v38, v3, v32, *((__int64 *)&v32 + 1)); /*0x14018e554*/
    sub_140ACDB60(&v21, &v38); /*0x14018e568*/
    v4 = v21; /*0x14018e56e*/
    v5 = v22; /*0x14018e575*/
    v6 = v23; /*0x14018e57c*/
    v7 = v24; /*0x14018e583*/
    v33 = v25; /*0x14018e591*/
    v34 = v26; /*0x14018e59f*/
    v35 = v27; /*0x14018e5ad*/
    v36 = v28; /*0x14018e5bb*/
    v37 = v29; /*0x14018e5c9*/
    if ( v44 ) /*0x14018e5da*/
      sub_140001660(v43, v44, 1); /*0x14018e5e9*/
    sub_141684120(&v21, v2, 400); /*0x14018e5fe*/
    if ( v4 != (const char *)-1LL ) /*0x14018e607*/
    {
      v38 = (__int64)v4; /*0x14018e609*/
      *(_QWORD *)&v39 = v5; /*0x14018e610*/
      *((_QWORD *)&v39 + 1) = v6; /*0x14018e617*/
      v40[0] = v7; /*0x14018e61e*/
      *(_OWORD *)&v40[1] = v33; /*0x14018e641*/
      *(_OWORD *)&v40[3] = v34; /*0x14018e648*/
      *(_OWORD *)&v40[5] = v35; /*0x14018e64f*/
      *(_OWORD *)&v40[7] = v36; /*0x14018e656*/
      v40[9] = v37; /*0x14018e664*/
LABEL_19:
      v45 = 0; /*0x14018e70f*/
      sub_1404363A0(&v21, &v38); /*0x14018e724*/
      goto LABEL_20; /*0x14018e724*/
    }
    if ( v7 < 0 ) /*0x14018e67f*/
    {
      v9 = 0; /*0x14018e681*/
      goto LABEL_13; /*0x14018e681*/
    }
    if ( v7 ) /*0x14018e69f*/
    {
      nullsub_1(v8); /*0x14018e6a5*/
      v9 = 1; /*0x14018e6aa*/
      v10 = sub_140001650(v7, 1); /*0x14018e6b7*/
      if ( !v10 ) /*0x14018e6bf*/
      {
LABEL_13:
        v43 = v6; /*0x14018e683*/
        v44 = v5; /*0x14018e68a*/
        sub_1416C2D4B(v9, v7); /*0x14018e697*/
      }
      v11 = v10; /*0x14018e6c1*/
      sub_141684120(v10, v6, v7); /*0x14018e6cd*/
      if ( !v5 ) /*0x14018e6d5*/
      {
LABEL_18:
        LOBYTE(v39) = 3; /*0x14018e6e8*/
        *((_QWORD *)&v39 + 1) = v7; /*0x14018e6ef*/
        v40[0] = v11; /*0x14018e6f6*/
        v40[1] = v7; /*0x14018e6fd*/
        v38 = -1; /*0x14018e704*/
        goto LABEL_19; /*0x14018e704*/
      }
    }
    else
    {
      v11 = 1; /*0x14018e7cb*/
      if ( !v5 ) /*0x14018e7d3*/
        goto LABEL_18; /*0x14018e7d3*/
    }
    sub_140001660(v6, v5, 1); /*0x14018e6e3*/
    goto LABEL_18; /*0x14018e6e3*/
  }
  *(_OWORD *)v40 = v32; /*0x14018e3d4*/
  v39 = v31; /*0x14018e3db*/
  sub_141684120(&v21, a1 + 520, 360); /*0x14018e3f5*/
  v33 = *(_OWORD *)(a1 + 880); /*0x14018e408*/
  *(_QWORD *)&v34 = *(_QWORD *)(a1 + 896); /*0x14018e416*/
  v38 = 1; /*0x14018e429*/
  v46 = 0; /*0x14018e434*/
  sub_14047E370((unsigned int)&v21, v18, (unsigned int)&v38, (unsigned int)&v33, v19, v20); /*0x14018e454*/
LABEL_20:
  if ( (_QWORD)v41 != -1 ) /*0x14018e732*/
  {
    v12 = *((_QWORD *)&v41 + 1); /*0x14018e734*/
    v43 = v42; /*0x14018e742*/
    v44 = 0; /*0x14018e749*/
    v40[10] = *((_QWORD *)&v41 + 1); /*0x14018e754*/
    while ( v43 != (const char *)v44 ) /*0x14018e76e*/
    {
      ++v44; /*0x14018e773*/
      v13 = v12 + 96; /*0x14018e77a*/
      sub_1402C7520(); /*0x14018e77e*/
      v12 = v13; /*0x14018e784*/
    }
    if ( (_QWORD)v41 ) /*0x14018e793*/
      sub_140001660(*((_QWORD *)&v41 + 1), 96 * v41, 8); /*0x14018e7aa*/
  }
  return sub_140014270(v15); /*0x14018e7b9*/
}