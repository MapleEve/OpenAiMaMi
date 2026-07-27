// win 1.2.1 | tauri command handler = deactivate_relay_provider | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall deactivate_relay_provider(__int64 a1)
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
  __int64 v21; // [rsp+550h] [rbp+4D0h] BYREF
  __m256i v22; // [rsp+558h] [rbp+4D8h]
  const char *v23; // [rsp+6C8h] [rbp+648h] BYREF
  __int64 v24; // [rsp+6D0h] [rbp+650h]
  const char *v25; // [rsp+6D8h] [rbp+658h] BYREF
  __int64 v26; // [rsp+6E0h] [rbp+660h]
  _BYTE *v27; // [rsp+6E8h] [rbp+668h]
  __int128 *v28; // [rsp+6F0h] [rbp+670h]
  __int64 v29; // [rsp+6F8h] [rbp+678h]
  __m256i v30; // [rsp+858h] [rbp+7D8h] BYREF
  __m256i v31; // [rsp+878h] [rbp+7F8h] BYREF
  __m256i v32; // [rsp+898h] [rbp+818h] BYREF
  __int64 v33; // [rsp+8B8h] [rbp+838h]
  __int128 v34; // [rsp+8C0h] [rbp+840h] BYREF
  __int64 v35; // [rsp+8D0h] [rbp+850h]
  __int128 v36; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v37; // [rsp+8F0h] [rbp+870h]
  __int64 v38; // [rsp+900h] [rbp+880h]
  __int64 v39; // [rsp+908h] [rbp+888h]
  char v40; // [rsp+916h] [rbp+896h]
  char v41; // [rsp+917h] [rbp+897h]
  __int64 v42; // [rsp+918h] [rbp+898h]

  v42 = -2; /*0x14018f9d9*/
  sub_141684120(v12, a1, 520); /*0x14018f9f7*/
  sub_141684120(v14, a1 + 520, 400); /*0x14018fa13*/
  v37 = *(_QWORD *)(a1 + 936); /*0x14018fa1f*/
  v36 = *(_OWORD *)(a1 + 920); /*0x14018fa2d*/
  v29 = 0; /*0x14018fa34*/
  v23 = aDeactivateRela; /*0x14018fa46*/
  v24 = 25; /*0x14018fa4d*/
  v25 = aManager_0; /*0x14018fa5f*/
  v26 = 7; /*0x14018fa66*/
  v27 = v12; /*0x14018fa71*/
  v28 = &v36; /*0x14018fa7f*/
  v41 = 1; /*0x14018fa91*/
  v2 = sub_140004B10((volatile void *)(v13 + 16)); /*0x14018fa9e*/
  if ( !v2 ) /*0x14018faa4*/
  {
    v41 = 1; /*0x14018fbb6*/
    sub_1416850A0(&v31, &v23, &v25); /*0x14018fbcb*/
    if ( v31.m256i_i8[0] != -1 ) /*0x14018fbd8*/
    {
      v22 = v31; /*0x14018fbec*/
      sub_141684120(&v23, a1 + 520, 360); /*0x14018fc0d*/
      v18 = *(_OWORD *)(a1 + 880); /*0x14018fc20*/
      v19 = *(_QWORD *)(a1 + 896); /*0x14018fc2e*/
      v21 = 1; /*0x14018fc41*/
      v41 = 0; /*0x14018fc4c*/
      sub_14047E370((unsigned int)&v23, v15, (unsigned int)&v21, (unsigned int)&v18, v16, v17); /*0x14018fc6c*/
      goto LABEL_23; /*0x14018fc72*/
    }
    v2 = v31.m256i_i64[1]; /*0x14018fdb4*/
  }
  v29 = 0; /*0x14018faaa*/
  v23 = aDeactivateRela; /*0x14018fab5*/
  v24 = 25; /*0x14018fabc*/
  v25 = aProviderid; /*0x14018face*/
  v26 = 10; /*0x14018fad5*/
  v27 = v12; /*0x14018fae0*/
  v28 = &v36; /*0x14018fae7*/
  v41 = 1; /*0x14018faee*/
  sub_1409757B0(&v32, &v23); /*0x14018fb03*/
  if ( v32.m256i_i8[0] != -1 ) /*0x14018fb10*/
  {
    v22 = v32; /*0x14018fb24*/
    sub_141684120(&v23, a1 + 520, 360); /*0x14018fb45*/
    v18 = *(_OWORD *)(a1 + 880); /*0x14018fb58*/
    v19 = *(_QWORD *)(a1 + 896); /*0x14018fb66*/
    v21 = 1; /*0x14018fb79*/
    v41 = 0; /*0x14018fb84*/
    sub_14047E370((unsigned int)&v23, v15, (unsigned int)&v21, (unsigned int)&v18, v16, v17); /*0x14018fba4*/
    goto LABEL_23; /*0x14018fbaa*/
  }
  v35 = v32.m256i_i64[3]; /*0x14018fc7e*/
  v34 = *(_OWORD *)&v32.m256i_u64[1]; /*0x14018fc8c*/
  v29 = 0; /*0x14018fc93*/
  v23 = aDeactivateRela; /*0x14018fc9e*/
  v24 = 25; /*0x14018fca5*/
  v25 = aIde; /*0x14018fcb7*/
  v26 = 3; /*0x14018fcbe*/
  v27 = v12; /*0x14018fcc9*/
  v28 = &v36; /*0x14018fcd0*/
  sub_140AF04D0(&v30, &v23); /*0x14018fce5*/
  LOBYTE(v39) = v30.m256i_i8[0]; /*0x14018fcf2*/
  if ( v30.m256i_i8[0] == -1 ) /*0x14018fcfa*/
  {
    sub_140487330(&v18, v2, &v34); /*0x14018fdd1*/
    sub_141684120(&v23, a1 + 520, 400); /*0x14018fde7*/
    if ( (_QWORD)v18 != -1 ) /*0x14018fdf4*/
    {
      sub_141684120(&v21, &v18, 376); /*0x14018fe0a*/
LABEL_22:
      v40 = 0; /*0x14018febf*/
      sub_140437160(&v23, &v21); /*0x14018fed4*/
      goto LABEL_23; /*0x14018fed4*/
    }
    v4 = *((_QWORD *)&v18 + 1); /*0x14018fe14*/
    v5 = v19; /*0x14018fe1b*/
    *((_QWORD *)&v6 + 1) = v20; /*0x14018fe22*/
    if ( v20 < 0 ) /*0x14018fe2c*/
    {
      v7 = 0; /*0x14018fe2e*/
      goto LABEL_14; /*0x14018fe2e*/
    }
    if ( v20 ) /*0x14018fe4c*/
    {
      nullsub_1(v3); /*0x14018fe4e*/
      v7 = 1; /*0x14018fe53*/
      v8 = sub_140001650(*((_QWORD *)&v6 + 1), 1); /*0x14018fe60*/
      if ( !v8 ) /*0x14018fe68*/
      {
LABEL_14:
        v38 = v5; /*0x14018fe30*/
        v39 = v4; /*0x14018fe37*/
        sub_1416C2D4B(v7, *((_QWORD *)&v6 + 1)); /*0x14018fe44*/
      }
      *(_QWORD *)&v6 = v8; /*0x14018fe6a*/
      sub_141684120(v8, v5, *((_QWORD *)&v6 + 1)); /*0x14018fe76*/
    }
    else
    {
      *(_QWORD *)&v6 = 1; /*0x14018fe7d*/
    }
    if ( v4 ) /*0x14018fe85*/
      sub_140001660(v5, v4, 1); /*0x14018fe93*/
    v22.m256i_i8[0] = 3; /*0x14018fe98*/
    v22.m256i_i64[1] = *((_QWORD *)&v6 + 1); /*0x14018fe9f*/
    *(_OWORD *)&v22.m256i_u64[2] = v6; /*0x14018fea6*/
    v21 = -1; /*0x14018feb4*/
    goto LABEL_22; /*0x14018feb4*/
  }
  v22 = v30; /*0x14018fd0e*/
  sub_141684120(&v23, a1 + 520, 360); /*0x14018fd2f*/
  v18 = *(_OWORD *)(a1 + 880); /*0x14018fd42*/
  v19 = *(_QWORD *)(a1 + 896); /*0x14018fd50*/
  v21 = 1; /*0x14018fd63*/
  sub_14047E370((unsigned int)&v23, v15, (unsigned int)&v21, (unsigned int)&v18, v16, v17); /*0x14018fd87*/
  if ( (_QWORD)v34 ) /*0x14018fd97*/
    sub_140001660(*((_QWORD *)&v34 + 1), v34, 1); /*0x14018fdaa*/
LABEL_23:
  if ( (_QWORD)v36 != -1 ) /*0x14018fee2*/
  {
    v9 = *((_QWORD *)&v36 + 1); /*0x14018fee4*/
    v38 = v37; /*0x14018fef2*/
    v39 = 0; /*0x14018fef9*/
    v33 = *((_QWORD *)&v36 + 1); /*0x14018ff04*/
    while ( v38 != v39 ) /*0x14018ff1e*/
    {
      ++v39; /*0x14018ff23*/
      v10 = v9 + 96; /*0x14018ff2a*/
      sub_1402C7520(); /*0x14018ff2e*/
      v9 = v10; /*0x14018ff34*/
    }
    if ( (_QWORD)v36 ) /*0x14018ff43*/
      sub_140001660(*((_QWORD *)&v36 + 1), 96 * v36, 8); /*0x14018ff5a*/
  }
  return sub_140014270(v12); /*0x14018ff69*/
}