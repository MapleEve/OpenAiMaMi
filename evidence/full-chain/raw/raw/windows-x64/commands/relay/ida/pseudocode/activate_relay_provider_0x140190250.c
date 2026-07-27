// win 1.2.1 | tauri command handler = activate_relay_provider | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall activate_relay_provider(__int64 a1)
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

  v42 = -2; /*0x140190269*/
  sub_141684120(v12, a1, 520); /*0x140190287*/
  sub_141684120(v14, a1 + 520, 400); /*0x1401902a3*/
  v37 = *(_QWORD *)(a1 + 936); /*0x1401902af*/
  v36 = *(_OWORD *)(a1 + 920); /*0x1401902bd*/
  v29 = 0; /*0x1401902c4*/
  v23 = aActivateRelayP; /*0x1401902d6*/
  v24 = 23; /*0x1401902dd*/
  v25 = aManager_0; /*0x1401902ef*/
  v26 = 7; /*0x1401902f6*/
  v27 = v12; /*0x140190301*/
  v28 = &v36; /*0x14019030f*/
  v41 = 1; /*0x140190321*/
  v2 = sub_140004B10((volatile void *)(v13 + 16)); /*0x14019032e*/
  if ( !v2 ) /*0x140190334*/
  {
    v41 = 1; /*0x140190446*/
    sub_1416850A0(&v31, &v23, &v25); /*0x14019045b*/
    if ( v31.m256i_i8[0] != -1 ) /*0x140190468*/
    {
      v22 = v31; /*0x14019047c*/
      sub_141684120(&v23, a1 + 520, 360); /*0x14019049d*/
      v18 = *(_OWORD *)(a1 + 880); /*0x1401904b0*/
      v19 = *(_QWORD *)(a1 + 896); /*0x1401904be*/
      v21 = 1; /*0x1401904d1*/
      v41 = 0; /*0x1401904dc*/
      sub_14047E370((unsigned int)&v23, v15, (unsigned int)&v21, (unsigned int)&v18, v16, v17); /*0x1401904fc*/
      goto LABEL_23; /*0x140190502*/
    }
    v2 = v31.m256i_i64[1]; /*0x140190644*/
  }
  v29 = 0; /*0x14019033a*/
  v23 = aActivateRelayP; /*0x140190345*/
  v24 = 23; /*0x14019034c*/
  v25 = aProviderid; /*0x14019035e*/
  v26 = 10; /*0x140190365*/
  v27 = v12; /*0x140190370*/
  v28 = &v36; /*0x140190377*/
  v41 = 1; /*0x14019037e*/
  sub_1409757B0(&v32, &v23); /*0x140190393*/
  if ( v32.m256i_i8[0] != -1 ) /*0x1401903a0*/
  {
    v22 = v32; /*0x1401903b4*/
    sub_141684120(&v23, a1 + 520, 360); /*0x1401903d5*/
    v18 = *(_OWORD *)(a1 + 880); /*0x1401903e8*/
    v19 = *(_QWORD *)(a1 + 896); /*0x1401903f6*/
    v21 = 1; /*0x140190409*/
    v41 = 0; /*0x140190414*/
    sub_14047E370((unsigned int)&v23, v15, (unsigned int)&v21, (unsigned int)&v18, v16, v17); /*0x140190434*/
    goto LABEL_23; /*0x14019043a*/
  }
  v35 = v32.m256i_i64[3]; /*0x14019050e*/
  v34 = *(_OWORD *)&v32.m256i_u64[1]; /*0x14019051c*/
  v29 = 0; /*0x140190523*/
  v23 = aActivateRelayP; /*0x14019052e*/
  v24 = 23; /*0x140190535*/
  v25 = aIde; /*0x140190547*/
  v26 = 3; /*0x14019054e*/
  v27 = v12; /*0x140190559*/
  v28 = &v36; /*0x140190560*/
  sub_140AF04D0(&v30, &v23); /*0x140190575*/
  LOBYTE(v39) = v30.m256i_i8[0]; /*0x140190582*/
  if ( v30.m256i_i8[0] == -1 ) /*0x14019058a*/
  {
    sub_140486E40(&v18, v2, &v34); /*0x140190661*/
    sub_141684120(&v23, a1 + 520, 400); /*0x140190677*/
    if ( (_QWORD)v18 != -1 ) /*0x140190684*/
    {
      sub_141684120(&v21, &v18, 376); /*0x14019069a*/
LABEL_22:
      v40 = 0; /*0x14019074f*/
      sub_140437160(&v23, &v21); /*0x140190764*/
      goto LABEL_23; /*0x140190764*/
    }
    v4 = *((_QWORD *)&v18 + 1); /*0x1401906a4*/
    v5 = v19; /*0x1401906ab*/
    *((_QWORD *)&v6 + 1) = v20; /*0x1401906b2*/
    if ( v20 < 0 ) /*0x1401906bc*/
    {
      v7 = 0; /*0x1401906be*/
      goto LABEL_14; /*0x1401906be*/
    }
    if ( v20 ) /*0x1401906dc*/
    {
      nullsub_1(v3); /*0x1401906de*/
      v7 = 1; /*0x1401906e3*/
      v8 = sub_140001650(*((_QWORD *)&v6 + 1), 1); /*0x1401906f0*/
      if ( !v8 ) /*0x1401906f8*/
      {
LABEL_14:
        v38 = v5; /*0x1401906c0*/
        v39 = v4; /*0x1401906c7*/
        sub_1416C2D4B(v7, *((_QWORD *)&v6 + 1)); /*0x1401906d4*/
      }
      *(_QWORD *)&v6 = v8; /*0x1401906fa*/
      sub_141684120(v8, v5, *((_QWORD *)&v6 + 1)); /*0x140190706*/
    }
    else
    {
      *(_QWORD *)&v6 = 1; /*0x14019070d*/
    }
    if ( v4 ) /*0x140190715*/
      sub_140001660(v5, v4, 1); /*0x140190723*/
    v22.m256i_i8[0] = 3; /*0x140190728*/
    v22.m256i_i64[1] = *((_QWORD *)&v6 + 1); /*0x14019072f*/
    *(_OWORD *)&v22.m256i_u64[2] = v6; /*0x140190736*/
    v21 = -1; /*0x140190744*/
    goto LABEL_22; /*0x140190744*/
  }
  v22 = v30; /*0x14019059e*/
  sub_141684120(&v23, a1 + 520, 360); /*0x1401905bf*/
  v18 = *(_OWORD *)(a1 + 880); /*0x1401905d2*/
  v19 = *(_QWORD *)(a1 + 896); /*0x1401905e0*/
  v21 = 1; /*0x1401905f3*/
  sub_14047E370((unsigned int)&v23, v15, (unsigned int)&v21, (unsigned int)&v18, v16, v17); /*0x140190617*/
  if ( (_QWORD)v34 ) /*0x140190627*/
    sub_140001660(*((_QWORD *)&v34 + 1), v34, 1); /*0x14019063a*/
LABEL_23:
  if ( (_QWORD)v36 != -1 ) /*0x140190772*/
  {
    v9 = *((_QWORD *)&v36 + 1); /*0x140190774*/
    v38 = v37; /*0x140190782*/
    v39 = 0; /*0x140190789*/
    v33 = *((_QWORD *)&v36 + 1); /*0x140190794*/
    while ( v38 != v39 ) /*0x1401907ae*/
    {
      ++v39; /*0x1401907b3*/
      v10 = v9 + 96; /*0x1401907ba*/
      sub_1402C7520(); /*0x1401907be*/
      v9 = v10; /*0x1401907c4*/
    }
    if ( (_QWORD)v36 ) /*0x1401907d3*/
      sub_140001660(*((_QWORD *)&v36 + 1), 96 * v36, 8); /*0x1401907ea*/
  }
  return sub_140014270(v12); /*0x1401907f9*/
}