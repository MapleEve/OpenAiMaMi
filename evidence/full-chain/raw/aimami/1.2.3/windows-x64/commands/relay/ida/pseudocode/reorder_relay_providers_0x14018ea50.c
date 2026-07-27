// win 1.2.1 | tauri command handler = reorder_relay_providers | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall reorder_relay_providers(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  __int128 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+238h] [rbp+1B8h]
  _BYTE v14[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v15; // [rsp+3C0h] [rbp+340h]
  int v16; // [rsp+3C8h] [rbp+348h]
  int v17; // [rsp+3CCh] [rbp+34Ch]
  __int128 v18; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v19; // [rsp+3E0h] [rbp+360h]
  __int64 v20; // [rsp+3E8h] [rbp+368h]
  __int64 v21; // [rsp+548h] [rbp+4C8h] BYREF
  __m256i v22; // [rsp+550h] [rbp+4D0h]
  const char *v23; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v24; // [rsp+6C8h] [rbp+648h]
  const char *v25; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v26; // [rsp+6D8h] [rbp+658h]
  _BYTE *v27; // [rsp+6E0h] [rbp+660h]
  __int128 *v28; // [rsp+6E8h] [rbp+668h]
  __int64 v29; // [rsp+6F0h] [rbp+670h]
  __int128 v30; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v31; // [rsp+860h] [rbp+7E0h]
  __m256i v32; // [rsp+868h] [rbp+7E8h] BYREF
  __m256i v33; // [rsp+888h] [rbp+808h] BYREF
  __int64 v34; // [rsp+8A8h] [rbp+828h]
  __int128 v35; // [rsp+8B0h] [rbp+830h] BYREF
  __int64 v36; // [rsp+8C0h] [rbp+840h]
  __int64 v37; // [rsp+8D0h] [rbp+850h]
  __int64 v38; // [rsp+8D8h] [rbp+858h]
  char v39; // [rsp+8E6h] [rbp+866h]
  char v40; // [rsp+8E7h] [rbp+867h]
  __int64 v41; // [rsp+8E8h] [rbp+868h]

  v41 = -2; /*0x14018ea69*/
  sub_141684120(v12, a1, 520); /*0x14018ea87*/
  sub_141684120(v14, a1 + 520, 400); /*0x14018eaa3*/
  v36 = *(_QWORD *)(a1 + 936); /*0x14018eaaf*/
  v35 = *(_OWORD *)(a1 + 920); /*0x14018eabd*/
  v29 = 0; /*0x14018eac4*/
  v23 = aReorderRelayPr; /*0x14018ead6*/
  v24 = 23; /*0x14018eadd*/
  v25 = aManager_0; /*0x14018eaef*/
  v26 = 7; /*0x14018eaf6*/
  v27 = v12; /*0x14018eb01*/
  v28 = &v35; /*0x14018eb0f*/
  v40 = 1; /*0x14018eb21*/
  v2 = sub_140004B10((volatile void *)(v13 + 16)); /*0x14018eb2e*/
  if ( !v2 ) /*0x14018eb34*/
  {
    v40 = 1; /*0x14018ec46*/
    sub_1416850A0(&v32, &v23, &v25); /*0x14018ec5b*/
    if ( v32.m256i_i8[0] != -1 ) /*0x14018ec68*/
    {
      v22 = v32; /*0x14018ec7c*/
      sub_141684120(&v23, a1 + 520, 360); /*0x14018ec9d*/
      v18 = *(_OWORD *)(a1 + 880); /*0x14018ecb0*/
      v19 = *(_QWORD *)(a1 + 896); /*0x14018ecbe*/
      v21 = 1; /*0x14018ecd1*/
      v40 = 0; /*0x14018ecdc*/
      sub_14047E370((unsigned int)&v23, v15, (unsigned int)&v21, (unsigned int)&v18, v16, v17); /*0x14018ecfc*/
      goto LABEL_18; /*0x14018ed02*/
    }
    v2 = v32.m256i_i64[1]; /*0x14018ed7e*/
  }
  v29 = 0; /*0x14018eb3a*/
  v23 = aReorderRelayPr; /*0x14018eb45*/
  v24 = 23; /*0x14018eb4c*/
  v25 = aOrderedids; /*0x14018eb5e*/
  v26 = 10; /*0x14018eb65*/
  v27 = v12; /*0x14018eb70*/
  v28 = &v35; /*0x14018eb77*/
  v40 = 1; /*0x14018eb7e*/
  sub_1403204C0(&v33, &v23); /*0x14018eb93*/
  if ( v33.m256i_i8[0] == -1 ) /*0x14018eba0*/
  {
    v31 = v33.m256i_i64[3]; /*0x14018ed0e*/
    v30 = *(_OWORD *)&v33.m256i_u64[1]; /*0x14018ed1c*/
    v40 = 1; /*0x14018ed23*/
    sub_140487110(&v18, v2, &v30); /*0x14018ed3b*/
    sub_141684120(&v23, a1 + 520, 400); /*0x14018ed51*/
    if ( (_QWORD)v18 != -1 ) /*0x14018ed5e*/
    {
      sub_141684120(&v21, &v18, 376); /*0x14018ed74*/
LABEL_17:
      v39 = 0; /*0x14018ee32*/
      sub_140437160(&v23, &v21); /*0x14018ee47*/
      goto LABEL_18; /*0x14018ee47*/
    }
    v4 = *((_QWORD *)&v18 + 1); /*0x14018ed8a*/
    v5 = v19; /*0x14018ed91*/
    *((_QWORD *)&v6 + 1) = v20; /*0x14018ed98*/
    if ( v20 < 0 ) /*0x14018eda2*/
    {
      v7 = 0; /*0x14018eda4*/
      goto LABEL_11; /*0x14018eda4*/
    }
    if ( v20 ) /*0x14018edc2*/
    {
      nullsub_1(v3); /*0x14018edc8*/
      v7 = 1; /*0x14018edcd*/
      v8 = sub_140001650(*((_QWORD *)&v6 + 1), 1); /*0x14018edda*/
      if ( !v8 ) /*0x14018ede2*/
      {
LABEL_11:
        v37 = v5; /*0x14018eda6*/
        v38 = v4; /*0x14018edad*/
        sub_1416C2D4B(v7, *((_QWORD *)&v6 + 1)); /*0x14018edba*/
      }
      *(_QWORD *)&v6 = v8; /*0x14018ede4*/
      sub_141684120(v8, v5, *((_QWORD *)&v6 + 1)); /*0x14018edf0*/
      if ( !v4 ) /*0x14018edf8*/
      {
LABEL_16:
        v22.m256i_i8[0] = 3; /*0x14018ee0b*/
        v22.m256i_i64[1] = *((_QWORD *)&v6 + 1); /*0x14018ee12*/
        *(_OWORD *)&v22.m256i_u64[2] = v6; /*0x14018ee19*/
        v21 = -1; /*0x14018ee27*/
        goto LABEL_17; /*0x14018ee27*/
      }
    }
    else
    {
      *(_QWORD *)&v6 = 1; /*0x14018eefb*/
      if ( !*((_QWORD *)&v18 + 1) ) /*0x14018ef03*/
        goto LABEL_16; /*0x14018ef03*/
    }
    sub_140001660(v5, v4, 1); /*0x14018ee06*/
    goto LABEL_16; /*0x14018ee06*/
  }
  v22 = v33; /*0x14018ebb4*/
  sub_141684120(&v23, a1 + 520, 360); /*0x14018ebd5*/
  v18 = *(_OWORD *)(a1 + 880); /*0x14018ebe8*/
  v19 = *(_QWORD *)(a1 + 896); /*0x14018ebf6*/
  v21 = 1; /*0x14018ec09*/
  v40 = 0; /*0x14018ec14*/
  sub_14047E370((unsigned int)&v23, v15, (unsigned int)&v21, (unsigned int)&v18, v16, v17); /*0x14018ec34*/
LABEL_18:
  if ( (_QWORD)v35 != -1 ) /*0x14018ee55*/
  {
    v9 = *((_QWORD *)&v35 + 1); /*0x14018ee5b*/
    v37 = v36; /*0x14018ee69*/
    v38 = 0; /*0x14018ee70*/
    v34 = *((_QWORD *)&v35 + 1); /*0x14018ee7b*/
    while ( v37 != v38 ) /*0x14018ee9e*/
    {
      ++v38; /*0x14018eea3*/
      v10 = v9 + 96; /*0x14018eeaa*/
      sub_1402C7520(); /*0x14018eeae*/
      v9 = v10; /*0x14018eeb4*/
    }
    if ( (_QWORD)v35 ) /*0x14018eec3*/
      sub_140001660(*((_QWORD *)&v35 + 1), 96 * v35, 8); /*0x14018eeda*/
  }
  return sub_140014270(v12); /*0x14018eee9*/
}