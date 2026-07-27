// win 1.2.1 | tauri command handler = delete_relay_provider | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall delete_relay_provider(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r14
  __int128 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[512]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+230h] [rbp+1B0h]
  _BYTE v14[384]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v15; // [rsp+3B8h] [rbp+338h]
  int v16; // [rsp+3C0h] [rbp+340h]
  int v17; // [rsp+3C4h] [rbp+344h]
  _BYTE v18[152]; // [rsp+3C8h] [rbp+348h] BYREF
  const char *v19; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v20; // [rsp+468h] [rbp+3E8h]
  const char *v21; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v22; // [rsp+478h] [rbp+3F8h]
  _BYTE *v23; // [rsp+480h] [rbp+400h]
  __int128 *v24; // [rsp+488h] [rbp+408h]
  __int64 v25; // [rsp+490h] [rbp+410h]
  _BYTE v26[48]; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v27; // [rsp+620h] [rbp+5A0h]
  __int128 v28; // [rsp+630h] [rbp+5B0h]
  __int128 v29; // [rsp+690h] [rbp+610h] BYREF
  __int64 v30; // [rsp+6A0h] [rbp+620h]
  __int128 v31; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v32; // [rsp+6C0h] [rbp+640h]
  _OWORD v33[2]; // [rsp+6C8h] [rbp+648h] BYREF
  __int64 v34; // [rsp+6E8h] [rbp+668h]
  _BYTE v35[48]; // [rsp+6F0h] [rbp+670h] BYREF
  __int128 v36; // [rsp+720h] [rbp+6A0h]
  __int128 v37; // [rsp+730h] [rbp+6B0h]
  __m256i v38; // [rsp+740h] [rbp+6C0h] BYREF
  __int128 v39; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v40; // [rsp+770h] [rbp+6F0h]
  __int64 v41; // [rsp+780h] [rbp+700h]
  __int64 v42; // [rsp+788h] [rbp+708h]
  char v43; // [rsp+795h] [rbp+715h]
  char v44; // [rsp+796h] [rbp+716h]
  char v45; // [rsp+797h] [rbp+717h]
  __int64 v46; // [rsp+798h] [rbp+718h]

  v46 = -2; /*0x140190af9*/
  sub_141684120(v12, a1, 520); /*0x140190b17*/
  sub_141684120(v14, a1 + 520, 400); /*0x140190b33*/
  v40 = *(_QWORD *)(a1 + 936); /*0x140190b3f*/
  v39 = *(_OWORD *)(a1 + 920); /*0x140190b4d*/
  v25 = 0; /*0x140190b54*/
  v19 = aDeleteRelayPro; /*0x140190b66*/
  v20 = 21; /*0x140190b6d*/
  v21 = aApp; /*0x140190b7f*/
  v22 = 3; /*0x140190b86*/
  v23 = v12; /*0x140190b91*/
  v24 = &v39; /*0x140190b9f*/
  v45 = 1; /*0x140190ba6*/
  sub_1401C3650(v26, &v19); /*0x140190bbb*/
  if ( *(_DWORD *)v26 == -1 ) /*0x140190bc8*/
  {
    *(_OWORD *)&v35[24] = *(_OWORD *)&v26[24]; /*0x140190d70*/
    *(_OWORD *)&v35[8] = *(_OWORD *)&v26[8]; /*0x140190d77*/
    sub_141684120(&v19, a1 + 520, 360); /*0x140190d91*/
    *(_OWORD *)v38.m256i_i8 = *(_OWORD *)(a1 + 880); /*0x140190da4*/
    v38.m256i_i64[2] = *(_QWORD *)(a1 + 896); /*0x140190db2*/
    *(_QWORD *)v35 = 1; /*0x140190dc5*/
    v45 = 0; /*0x140190dd0*/
    sub_14047E370((unsigned int)&v19, v15, (unsigned int)v35, (unsigned int)&v38, v16, v17); /*0x140190df0*/
    goto LABEL_22; /*0x140190df6*/
  }
  sub_141684120(v18, v26, 152); /*0x140190be2*/
  v25 = 0; /*0x140190be7*/
  v19 = aDeleteRelayPro; /*0x140190bf2*/
  v20 = 21; /*0x140190bf9*/
  v21 = aManager_0; /*0x140190c0b*/
  v22 = 7; /*0x140190c12*/
  v23 = v12; /*0x140190c1d*/
  v24 = &v39; /*0x140190c24*/
  v2 = sub_140004B10((volatile void *)(v13 + 16)); /*0x140190c3c*/
  if ( !v2 ) /*0x140190c42*/
  {
    sub_1416850A0(v33, &v19, &v21); /*0x140190e10*/
    if ( LOBYTE(v33[0]) != 0xFF ) /*0x140190e1d*/
    {
      *(_OWORD *)&v35[24] = v33[1]; /*0x140190e31*/
      *(_OWORD *)&v35[8] = v33[0]; /*0x140190e38*/
      sub_141684120(&v19, a1 + 520, 360); /*0x140190e52*/
      *(_OWORD *)v38.m256i_i8 = *(_OWORD *)(a1 + 880); /*0x140190e65*/
      v38.m256i_i64[2] = *(_QWORD *)(a1 + 896); /*0x140190e73*/
      *(_QWORD *)v35 = 1; /*0x140190e86*/
      v44 = 0; /*0x140190e91*/
      sub_14047E370((unsigned int)&v19, v15, (unsigned int)v35, (unsigned int)&v38, v16, v17); /*0x140190eb1*/
      v45 = 0; /*0x140190eb7*/
      sub_140014150(v18); /*0x140190ec5*/
      goto LABEL_22; /*0x140190ecb*/
    }
    v2 = *((_QWORD *)&v33[0] + 1); /*0x140190f74*/
  }
  v25 = 0; /*0x140190c48*/
  v19 = aDeleteRelayPro; /*0x140190c53*/
  v20 = 21; /*0x140190c5a*/
  v21 = aProviderid; /*0x140190c6c*/
  v22 = 10; /*0x140190c73*/
  v23 = v12; /*0x140190c7e*/
  v24 = &v39; /*0x140190c85*/
  v44 = 1; /*0x140190c8c*/
  sub_1409757B0(&v38, &v19); /*0x140190ca1*/
  LOBYTE(v42) = v38.m256i_i8[0]; /*0x140190cae*/
  if ( v38.m256i_i8[0] == -1 ) /*0x140190cb6*/
  {
    v32 = v38.m256i_i64[3]; /*0x140190ed7*/
    v31 = *(_OWORD *)&v38.m256i_u64[1]; /*0x140190ee5*/
    sub_1404855A0(v35, v18, v2, &v31); /*0x140190f04*/
    sub_141684120(&v19, a1 + 520, 400); /*0x140190f1a*/
    if ( *(_QWORD *)v35 != -1 ) /*0x140190f27*/
    {
      v28 = v37; /*0x140190f30*/
      v27 = v36; /*0x140190f53*/
      *(_OWORD *)&v26[32] = *(_OWORD *)&v35[32]; /*0x140190f5a*/
      *(_OWORD *)&v26[16] = *(_OWORD *)&v35[16]; /*0x140190f61*/
      *(_OWORD *)v26 = *(_OWORD *)v35; /*0x140190f68*/
LABEL_21:
      v43 = 0; /*0x14019102b*/
      sub_140438810(&v19, v26); /*0x140191040*/
      goto LABEL_22; /*0x140191040*/
    }
    v4 = *(_QWORD *)&v35[8]; /*0x140190f80*/
    *((_QWORD *)&v5 + 1) = *(_QWORD *)&v35[24]; /*0x140190f8e*/
    v6 = *(_QWORD *)&v35[16]; /*0x140190f8e*/
    if ( *(__int64 *)&v35[24] < 0 ) /*0x140190f98*/
    {
      v7 = 0; /*0x140190f9a*/
      goto LABEL_13; /*0x140190f9a*/
    }
    if ( *(_QWORD *)&v35[24] ) /*0x140190fb8*/
    {
      nullsub_1(v3); /*0x140190fba*/
      v7 = 1; /*0x140190fbf*/
      v8 = sub_140001650(*((_QWORD *)&v5 + 1), 1); /*0x140190fcc*/
      if ( !v8 ) /*0x140190fd4*/
      {
LABEL_13:
        v41 = v6; /*0x140190f9c*/
        v42 = v4; /*0x140190fa3*/
        sub_1416C2D4B(v7, *((_QWORD *)&v5 + 1)); /*0x140190fb0*/
      }
      *(_QWORD *)&v5 = v8; /*0x140190fd6*/
      sub_141684120(v8, v6, *((_QWORD *)&v5 + 1)); /*0x140190fe2*/
    }
    else
    {
      *(_QWORD *)&v5 = 1; /*0x140190fe9*/
    }
    if ( v4 ) /*0x140190ff1*/
      sub_140001660(v6, v4, 1); /*0x140190fff*/
    v26[8] = 3; /*0x140191004*/
    *(_QWORD *)&v26[16] = *((_QWORD *)&v5 + 1); /*0x14019100b*/
    *(_OWORD *)&v26[24] = v5; /*0x140191012*/
    *(_QWORD *)v26 = -1; /*0x140191020*/
    goto LABEL_21; /*0x140191020*/
  }
  *(__m256i *)&v35[8] = v38; /*0x140190cca*/
  sub_141684120(&v19, a1 + 520, 360); /*0x140190ceb*/
  v29 = *(_OWORD *)(a1 + 880); /*0x140190cfe*/
  v30 = *(_QWORD *)(a1 + 896); /*0x140190d0c*/
  *(_QWORD *)v35 = 1; /*0x140190d1f*/
  sub_14047E370((unsigned int)&v19, v15, (unsigned int)v35, (unsigned int)&v29, v16, v17); /*0x140190d43*/
  v45 = 0; /*0x140190d49*/
  sub_140014150(v18); /*0x140190d57*/
LABEL_22:
  if ( (_QWORD)v39 != -1 ) /*0x14019104e*/
  {
    v9 = *((_QWORD *)&v39 + 1); /*0x140191050*/
    v41 = v40; /*0x14019105e*/
    v42 = 0; /*0x140191065*/
    v34 = *((_QWORD *)&v39 + 1); /*0x140191070*/
    while ( v41 != v42 ) /*0x14019108e*/
    {
      ++v42; /*0x140191093*/
      v10 = v9 + 96; /*0x14019109a*/
      sub_1402C7520(); /*0x14019109e*/
      v9 = v10; /*0x1401910a4*/
    }
    if ( (_QWORD)v39 ) /*0x1401910b3*/
      sub_140001660(*((_QWORD *)&v39 + 1), 96 * v39, 8); /*0x1401910ca*/
  }
  return sub_140014270(v12); /*0x1401910d9*/
}