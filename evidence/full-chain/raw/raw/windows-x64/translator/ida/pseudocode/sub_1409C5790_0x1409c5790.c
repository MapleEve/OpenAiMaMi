// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409C5790(__int64 a1, __int64 a2)
{
  int v3; // edi
  _WORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  void *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  void *v33; // rax
  unsigned __int64 v34; // rbx
  __int64 v35; // rcx
  void *v36; // rax
  unsigned __int64 v37; // r14
  __int64 v38; // rcx
  void *v39; // rax
  unsigned __int64 v40; // r14
  __int128 v41; // xmm0
  _OWORD *v42; // rax
  _DWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int128 v49; // [rsp+30h] [rbp-50h] BYREF
  __int64 v50; // [rsp+40h] [rbp-40h]
  __int64 v51; // [rsp+48h] [rbp-38h]
  __m256i v52; // [rsp+50h] [rbp-30h] BYREF
  __int64 v53; // [rsp+70h] [rbp-10h] BYREF
  __int128 v54; // [rsp+78h] [rbp-8h]
  __int64 v55; // [rsp+88h] [rbp+8h]
  __int128 v56; // [rsp+90h] [rbp+10h] BYREF
  __int64 v57; // [rsp+A0h] [rbp+20h]
  __m256i v58; // [rsp+A8h] [rbp+28h] BYREF
  char v59; // [rsp+CBh] [rbp+4Bh]
  char v60; // [rsp+CCh] [rbp+4Ch]
  char v61; // [rsp+CDh] [rbp+4Dh]
  char v62; // [rsp+CEh] [rbp+4Eh]
  char v63; // [rsp+CFh] [rbp+4Fh]
  __int64 v64; // [rsp+D0h] [rbp+50h]

  v64 = -2; /*0x1409c57ab*/
  v3 = a1; /*0x1409c57b6*/
  *(_QWORD *)&v56 = 0; /*0x1409c57b9*/
  v57 = 0; /*0x1409c57c1*/
  nullsub_1(a1); /*0x1409c57c9*/
  v4 = (_WORD *)sub_140001650(2, 1); /*0x1409c57d8*/
  if ( !v4 ) /*0x1409c57e0*/
    sub_1416C2D4B(1, 2); /*0x1409c6000*/
  *v4 = 25705; /*0x1409c57e6*/
  v53 = 2; /*0x1409c57eb*/
  *(_QWORD *)&v54 = v4; /*0x1409c57f3*/
  *((_QWORD *)&v54 + 1) = 2; /*0x1409c57f7*/
  v6 = *(_QWORD *)(a2 + 40); /*0x1409c57ff*/
  if ( v6 < 0 ) /*0x1409c5806*/
  {
    v7 = 0; /*0x1409c5808*/
    goto LABEL_4; /*0x1409c5808*/
  }
  if ( v6 ) /*0x1409c5820*/
  {
    v8 = *(_QWORD *)(a2 + 32); /*0x1409c5822*/
    nullsub_1(v5); /*0x1409c5826*/
    v7 = 1; /*0x1409c582b*/
    v9 = sub_140001650(v6, 1); /*0x1409c5839*/
    if ( !v9 ) /*0x1409c5841*/
    {
LABEL_4:
      v61 = 1; /*0x1409c580b*/
      sub_1416C2D4B(v7, v6); /*0x1409c5815*/
    }
    v10 = v9; /*0x1409c5843*/
    sub_141684120(v9, v8, v6); /*0x1409c584f*/
  }
  else
  {
    v10 = 1; /*0x1409c5856*/
  }
  v58.m256i_i8[0] = 3; /*0x1409c585c*/
  v58.m256i_i64[1] = v6; /*0x1409c5860*/
  v58.m256i_i64[2] = v10; /*0x1409c5864*/
  v58.m256i_i64[3] = v6; /*0x1409c5868*/
  v61 = 0; /*0x1409c586c*/
  sub_140307860(&v52, &v56, &v53, &v58); /*0x1409c5880*/
  if ( v52.m256i_i8[0] != -1 ) /*0x1409c588a*/
    sub_1400104F0(&v52); /*0x1409c5890*/
  nullsub_1(v11); /*0x1409c5896*/
  v12 = sub_140001650(6, 1); /*0x1409c58a5*/
  if ( !v12 ) /*0x1409c58ad*/
    sub_1416C2D4B(1, 6); /*0x1409c6015*/
  *(_WORD *)(v12 + 4) = 29795; /*0x1409c58b3*/
  *(_DWORD *)v12 = 1701470831; /*0x1409c58b9*/
  v53 = 6; /*0x1409c58bf*/
  *(_QWORD *)&v54 = v12; /*0x1409c58c7*/
  *((_QWORD *)&v54 + 1) = 6; /*0x1409c58cb*/
  nullsub_1(v13); /*0x1409c58d3*/
  v14 = (_QWORD *)sub_140001650(8, 1); /*0x1409c58e2*/
  v51 = (__int64)v14; /*0x1409c58ea*/
  if ( !v14 ) /*0x1409c58ee*/
    sub_1416C2D4B(1, 8); /*0x1409c602a*/
  *v14 = 0x65736E6F70736572LL; /*0x1409c58fe*/
  v58.m256i_i8[0] = 3; /*0x1409c5901*/
  v58.m256i_i64[1] = 8; /*0x1409c5905*/
  v58.m256i_i64[2] = (__int64)v14; /*0x1409c590d*/
  v58.m256i_i64[3] = 8; /*0x1409c5911*/
  sub_140307860(&v52, &v56, &v53, &v58); /*0x1409c5929*/
  if ( v52.m256i_i8[0] != -1 ) /*0x1409c5933*/
    sub_1400104F0(&v52); /*0x1409c5939*/
  nullsub_1(v15); /*0x1409c593f*/
  v16 = (void *)sub_140001650(10, 1); /*0x1409c594e*/
  if ( !v16 ) /*0x1409c5956*/
    sub_1416C2D4B(1, 10); /*0x1409c603f*/
  qmemcpy(v16, "created_at", 10); /*0x1409c5966*/
  v53 = 10; /*0x1409c596f*/
  *(_QWORD *)&v54 = v16; /*0x1409c5977*/
  *((_QWORD *)&v54 + 1) = 10; /*0x1409c597b*/
  v17 = *(_QWORD *)(a2 + 328); /*0x1409c5983*/
  v58.m256i_i8[0] = 2; /*0x1409c5991*/
  v58.m256i_i64[1] = v17 >> 63; /*0x1409c5995*/
  v58.m256i_i64[2] = v17; /*0x1409c5999*/
  sub_140307860(&v52, &v56, &v53, &v58); /*0x1409c59ad*/
  if ( v52.m256i_i8[0] != -1 ) /*0x1409c59b7*/
    sub_1400104F0(&v52); /*0x1409c59bd*/
  nullsub_1(v18); /*0x1409c59c3*/
  v19 = sub_140001650(6, 1); /*0x1409c59d2*/
  if ( !v19 ) /*0x1409c59da*/
    sub_1416C2D4B(1, 6); /*0x1409c6054*/
  *(_WORD *)(v19 + 4) = 29557; /*0x1409c59e0*/
  *(_DWORD *)v19 = 1952543859; /*0x1409c59e6*/
  v53 = 6; /*0x1409c59ec*/
  *(_QWORD *)&v54 = v19; /*0x1409c59f4*/
  *((_QWORD *)&v54 + 1) = 6; /*0x1409c59f8*/
  nullsub_1(v20); /*0x1409c5a00*/
  v21 = sub_140001650(9, 1); /*0x1409c5a0f*/
  v51 = v21; /*0x1409c5a17*/
  if ( !v21 ) /*0x1409c5a1b*/
    sub_1416C2D4B(1, 9); /*0x1409c6069*/
  *(_QWORD *)v21 = 0x6574656C706D6F63LL; /*0x1409c5a2b*/
  *(_BYTE *)(v21 + 8) = 100; /*0x1409c5a2e*/
  v58.m256i_i8[0] = 3; /*0x1409c5a32*/
  v58.m256i_i64[1] = 9; /*0x1409c5a36*/
  v58.m256i_i64[2] = v21; /*0x1409c5a3e*/
  v58.m256i_i64[3] = 9; /*0x1409c5a42*/
  sub_140307860(&v52, &v56, &v53, &v58); /*0x1409c5a5a*/
  if ( v52.m256i_i8[0] != -1 ) /*0x1409c5a64*/
    sub_1400104F0(&v52); /*0x1409c5a6a*/
  nullsub_1(v22); /*0x1409c5a70*/
  v23 = sub_140001650(5, 1); /*0x1409c5a7f*/
  if ( !v23 ) /*0x1409c5a87*/
    sub_1416C2D4B(1, 5); /*0x1409c607e*/
  *(_BYTE *)(v23 + 4) = 108; /*0x1409c5a8d*/
  *(_DWORD *)v23 = 1701080941; /*0x1409c5a91*/
  v53 = 5; /*0x1409c5a97*/
  *(_QWORD *)&v54 = v23; /*0x1409c5a9f*/
  *((_QWORD *)&v54 + 1) = 5; /*0x1409c5aa3*/
  v25 = *(_QWORD *)(a2 + 16); /*0x1409c5aab*/
  if ( v25 < 0 ) /*0x1409c5ab2*/
  {
    v26 = 0; /*0x1409c5ab4*/
    goto LABEL_25; /*0x1409c5ab4*/
  }
  if ( v25 ) /*0x1409c5acc*/
  {
    v27 = *(_QWORD *)(a2 + 8); /*0x1409c5ace*/
    nullsub_1(v24); /*0x1409c5ad2*/
    v26 = 1; /*0x1409c5ad7*/
    v28 = sub_140001650(v25, 1); /*0x1409c5ae5*/
    if ( !v28 ) /*0x1409c5aed*/
    {
LABEL_25:
      v60 = 1; /*0x1409c5ab7*/
      sub_1416C2D4B(v26, v25); /*0x1409c5ac1*/
    }
    v29 = v28; /*0x1409c5aef*/
    sub_141684120(v28, v27, v25); /*0x1409c5afb*/
  }
  else
  {
    v29 = 1; /*0x1409c5b02*/
  }
  v58.m256i_i8[0] = 3; /*0x1409c5b08*/
  v58.m256i_i64[1] = v25; /*0x1409c5b0c*/
  v58.m256i_i64[2] = v29; /*0x1409c5b10*/
  v58.m256i_i64[3] = v25; /*0x1409c5b14*/
  v60 = 0; /*0x1409c5b18*/
  sub_140307860(&v52, &v56, &v53, &v58); /*0x1409c5b2c*/
  if ( v52.m256i_i8[0] != -1 ) /*0x1409c5b36*/
    sub_1400104F0(&v52); /*0x1409c5b3c*/
  nullsub_1(v30); /*0x1409c5b42*/
  v31 = sub_140001650(6, 1); /*0x1409c5b51*/
  if ( !v31 ) /*0x1409c5b59*/
    sub_1416C2D4B(1, 6); /*0x1409c6090*/
  *(_WORD *)(v31 + 4) = 29813; /*0x1409c5b5f*/
  *(_DWORD *)v31 = 1886680431; /*0x1409c5b65*/
  v53 = 6; /*0x1409c5b6b*/
  *(_QWORD *)&v54 = v31; /*0x1409c5b73*/
  *((_QWORD *)&v54 + 1) = 6; /*0x1409c5b77*/
  v63 = 1; /*0x1409c5b83*/
  sub_140467C90(&v58, a2 + 48); /*0x1409c5b8b*/
  if ( v58.m256i_i8[0] == -1 ) /*0x1409c5b95*/
  {
    v52.m256i_i64[0] = v58.m256i_i64[1]; /*0x1409c5f8e*/
    sub_1416C3060( /*0x1409c5fb5*/
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v52,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A63D8);
  }
  v52 = v58; /*0x1409c5ba3*/
  v63 = 0; /*0x1409c5bab*/
  sub_140307860(&v58, &v56, &v53, &v52); /*0x1409c5bbf*/
  if ( v58.m256i_i8[0] != -1 ) /*0x1409c5bc9*/
    sub_1400104F0(&v58); /*0x1409c5bcf*/
  v54 = v56; /*0x1409c5bd9*/
  v55 = v57; /*0x1409c5be1*/
  LOBYTE(v53) = 5; /*0x1409c5be5*/
  if ( *(_BYTE *)(a2 + 366) ) /*0x1409c5be9*/
  {
    *(_QWORD *)&v49 = 0; /*0x1409c5bf6*/
    v50 = 0; /*0x1409c5bfe*/
    nullsub_1(v32); /*0x1409c5c06*/
    v33 = (void *)sub_140001650(12, 1); /*0x1409c5c15*/
    if ( !v33 ) /*0x1409c5c1d*/
      sub_1416C2D4B(1, 12); /*0x1409c60d8*/
    qmemcpy(v33, "input_tokens", 12); /*0x1409c5c2d*/
    *(_QWORD *)&v56 = 12; /*0x1409c5c37*/
    *((_QWORD *)&v56 + 1) = v33; /*0x1409c5c3f*/
    v57 = 12; /*0x1409c5c43*/
    v34 = *(_QWORD *)(a2 + 336); /*0x1409c5c4b*/
    v58.m256i_i8[0] = 2; /*0x1409c5c59*/
    v58.m256i_i64[1] = v34 >> 63; /*0x1409c5c5d*/
    v58.m256i_i64[2] = v34; /*0x1409c5c61*/
    sub_140307860(&v52, &v49, &v56, &v58); /*0x1409c5c75*/
    if ( v52.m256i_i8[0] != -1 ) /*0x1409c5c7f*/
      sub_1400104F0(&v52); /*0x1409c5c85*/
    nullsub_1(v35); /*0x1409c5c8b*/
    v36 = (void *)sub_140001650(13, 1); /*0x1409c5c9a*/
    if ( !v36 ) /*0x1409c5ca2*/
      sub_1416C2D4B(1, 13); /*0x1409c60ea*/
    qmemcpy(v36, "output_tokens", 13); /*0x1409c5cc0*/
    *(_QWORD *)&v56 = 13; /*0x1409c5cc3*/
    *((_QWORD *)&v56 + 1) = v36; /*0x1409c5ccb*/
    v57 = 13; /*0x1409c5ccf*/
    v37 = *(_QWORD *)(a2 + 344); /*0x1409c5cd7*/
    v58.m256i_i8[0] = 2; /*0x1409c5ce5*/
    v58.m256i_i64[1] = v37 >> 63; /*0x1409c5ce9*/
    v58.m256i_i64[2] = v37; /*0x1409c5ced*/
    sub_140307860(&v52, &v49, &v56, &v58); /*0x1409c5d01*/
    if ( v52.m256i_i8[0] != -1 ) /*0x1409c5d0b*/
      sub_1400104F0(&v52); /*0x1409c5d11*/
    nullsub_1(v38); /*0x1409c5d17*/
    v39 = (void *)sub_140001650(12, 1); /*0x1409c5d26*/
    if ( !v39 ) /*0x1409c5d2e*/
      sub_1416C2D4B(1, 12); /*0x1409c60fc*/
    qmemcpy(v39, "total_tokens", 12); /*0x1409c5d3e*/
    *(_QWORD *)&v56 = 12; /*0x1409c5d48*/
    *((_QWORD *)&v56 + 1) = v39; /*0x1409c5d50*/
    v57 = 12; /*0x1409c5d54*/
    v40 = v34 + v37; /*0x1409c5d5c*/
    v58.m256i_i8[0] = 2; /*0x1409c5d66*/
    v58.m256i_i64[1] = v40 >> 63; /*0x1409c5d6a*/
    v58.m256i_i64[2] = v40; /*0x1409c5d6e*/
    sub_140307860(&v52, &v49, &v56, &v58); /*0x1409c5d82*/
    if ( v52.m256i_i8[0] != -1 ) /*0x1409c5d8c*/
      sub_1400104F0(&v52); /*0x1409c5d92*/
    *(_OWORD *)&v58.m256i_u64[1] = v49; /*0x1409c5d9c*/
    v58.m256i_i64[3] = v50; /*0x1409c5da4*/
    v58.m256i_i8[0] = 5; /*0x1409c5da8*/
    v59 = 1; /*0x1409c5dac*/
    v51 = sub_141433E50(aUsage_2, 5, &v53); /*0x1409c5dc6*/
    sub_1400104F0(v51); /*0x1409c5dcd*/
    v41 = *(_OWORD *)v58.m256i_i8; /*0x1409c5dd3*/
    v42 = (_OWORD *)v51; /*0x1409c5ddb*/
    *(_OWORD *)(v51 + 16) = *(_OWORD *)&v58.m256i_u64[2]; /*0x1409c5ddf*/
    *v42 = v41; /*0x1409c5de3*/
  }
  *(_QWORD *)&v49 = 0; /*0x1409c5de6*/
  v50 = 0; /*0x1409c5dee*/
  nullsub_1(v32); /*0x1409c5df6*/
  v43 = (_DWORD *)sub_140001650(4, 1); /*0x1409c5e05*/
  if ( !v43 ) /*0x1409c5e0d*/
    sub_1416C2D4B(1, 4); /*0x1409c60a2*/
  *v43 = 1701869940; /*0x1409c5e13*/
  *(_QWORD *)&v56 = 4; /*0x1409c5e19*/
  *((_QWORD *)&v56 + 1) = v43; /*0x1409c5e21*/
  v57 = 4; /*0x1409c5e25*/
  nullsub_1(v44); /*0x1409c5e2d*/
  v45 = sub_140001650(18, 1); /*0x1409c5e3c*/
  v51 = v45; /*0x1409c5e44*/
  if ( !v45 ) /*0x1409c5e48*/
    sub_1416C2D4B(1, 18); /*0x1409c60b4*/
  *(_OWORD *)v45 = *(_OWORD *)"response.completed"; /*0x1409c5e55*/
  *(_WORD *)(v45 + 16) = 25701; /*0x1409c5e58*/
  v58.m256i_i8[0] = 3; /*0x1409c5e5e*/
  v58.m256i_i64[1] = 18; /*0x1409c5e62*/
  v58.m256i_i64[2] = v45; /*0x1409c5e6a*/
  v58.m256i_i64[3] = 18; /*0x1409c5e6e*/
  sub_140307860(&v52, &v49, &v56, &v58); /*0x1409c5e86*/
  if ( v52.m256i_i8[0] != -1 ) /*0x1409c5e90*/
    sub_1400104F0(&v52); /*0x1409c5e96*/
  nullsub_1(v46); /*0x1409c5e9c*/
  v47 = (_QWORD *)sub_140001650(8, 1); /*0x1409c5eab*/
  if ( !v47 ) /*0x1409c5eb3*/
    sub_1416C2D4B(1, 8); /*0x1409c60c6*/
  *v47 = 0x65736E6F70736572LL; /*0x1409c5eb9*/
  *(_QWORD *)&v56 = 8; /*0x1409c5ebc*/
  *((_QWORD *)&v56 + 1) = v47; /*0x1409c5ec4*/
  v57 = 8; /*0x1409c5ec8*/
  v62 = 1; /*0x1409c5ed0*/
  sub_140B842D0(&v58, &v53); /*0x1409c5edc*/
  if ( v58.m256i_i8[0] == -1 ) /*0x1409c5ee6*/
  {
    v52.m256i_i64[0] = v58.m256i_i64[1]; /*0x1409c5fc4*/
    sub_1416C3060( /*0x1409c5feb*/
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v52,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A63F0);
  }
  v52 = v58; /*0x1409c5ef4*/
  v62 = 0; /*0x1409c5efc*/
  sub_140307860(&v58, &v49, &v56, &v52); /*0x1409c5f13*/
  if ( v58.m256i_i8[0] != -1 ) /*0x1409c5f1d*/
    sub_1400104F0(&v58); /*0x1409c5f23*/
  *(_OWORD *)&v58.m256i_u64[1] = v49; /*0x1409c5f34*/
  v58.m256i_i64[3] = v50; /*0x1409c5f3c*/
  v58.m256i_i8[0] = 5; /*0x1409c5f40*/
  sub_1409C6750(v3, a2 + 352, (unsigned int)"response.completed", 18, (__int64)&v58); /*0x1409c5f5c*/
  sub_1400104F0(&v53); /*0x1409c5f66*/
  return sub_1400104F0(&v58); /*0x1409c5f76*/
}