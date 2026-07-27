// win 1.2.1 | module src/core/relay/proxy_passthrough.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_passthrough::error_response | 跨平台字符串签名匹配(名↔函数一致)
__int128 *__fastcall error_response(__int128 *a1, __int16 a2, __int64 a3, __int64 a4, __int128 a5)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 i; // rax
  unsigned __int8 v29; // cl
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  char v34; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v35[23]; // [rsp+49h] [rbp-37h]
  __int64 v36; // [rsp+60h] [rbp-20h]
  _QWORD v37[3]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v38; // [rsp+80h] [rbp+0h] BYREF
  __int64 v39; // [rsp+90h] [rbp+10h]
  void *v40; // [rsp+98h] [rbp+18h]
  __int64 v41; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v42; // [rsp+A8h] [rbp+28h]
  __int128 v43; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v44; // [rsp+C0h] [rbp+40h]
  __int64 v45; // [rsp+D0h] [rbp+50h]
  __m256i v46; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v47; // [rsp+F8h] [rbp+78h]
  __int128 v48; // [rsp+108h] [rbp+88h]
  __int128 v49; // [rsp+118h] [rbp+98h]
  __int128 v50; // [rsp+128h] [rbp+A8h]
  __int128 v51; // [rsp+138h] [rbp+B8h]
  __int128 v52; // [rsp+148h] [rbp+C8h]
  __int128 v53; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v54; // [rsp+168h] [rbp+E8h] BYREF
  __int128 v55; // [rsp+178h] [rbp+F8h]
  __int64 v56; // [rsp+188h] [rbp+108h]
  _BYTE v57[40]; // [rsp+190h] [rbp+110h] BYREF
  __int64 v58; // [rsp+1B8h] [rbp+138h]
  char v59; // [rsp+1C4h] [rbp+144h]
  char v60; // [rsp+1C5h] [rbp+145h]
  char v61; // [rsp+1C6h] [rbp+146h]
  char v62; // [rsp+1C7h] [rbp+147h] BYREF
  __int64 v63; // [rsp+1C8h] [rbp+148h]

  v63 = -2; /*0x140674449*/
  v41 = a3; /*0x140674460*/
  v42 = a4; /*0x140674464*/
  v53 = a5; /*0x140674468*/
  if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14067447d*/
  {
    *(_QWORD *)v57 = &v53; /*0x14067448a*/
    *(_QWORD *)&v57[8] = sub_14041F680; /*0x140674498*/
    *(_QWORD *)&v57[16] = &v41; /*0x1406744a3*/
    *(_QWORD *)&v57[24] = sub_14041F680; /*0x1406744aa*/
    v46.m256i_i64[0] = 0; /*0x1406744b1*/
    v46.m256i_i64[1] = (__int64)aCodexmateLibCo_3; /*0x1406744c0*/
    *(_OWORD *)&v46.m256i_u64[2] = 0x2Du; /*0x1406744c4*/
    *(_QWORD *)&v47 = aSrcCoreRelayPr_0; /*0x1406744db*/
    *((_QWORD *)&v47 + 1) = 35; /*0x1406744df*/
    *(_QWORD *)&v48 = 2; /*0x1406744ea*/
    *((_QWORD *)&v48 + 1) = aCodexmateLibCo_3; /*0x1406744f5*/
    *(_QWORD *)&v49 = 45; /*0x1406744fc*/
    *((_QWORD *)&v49 + 1) = 0x13800000001LL; /*0x140674511*/
    *(_QWORD *)&v50 = &unk_14177CA06; /*0x14067451f*/
    *((_QWORD *)&v50 + 1) = v57; /*0x14067452d*/
    sub_1412C36A0(&v62, &v46); /*0x14067453f*/
  }
  *(_QWORD *)&v38 = 0; /*0x140674544*/
  v39 = 0; /*0x14067454c*/
  nullsub_1(a1); /*0x140674554*/
  v7 = sub_140001650(5, 1); /*0x140674563*/
  if ( !v7 ) /*0x14067456b*/
    sub_1416C2D4B(1, 5); /*0x140674b42*/
  *(_BYTE *)(v7 + 4) = 114; /*0x140674571*/
  *(_DWORD *)v7 = 1869771365; /*0x140674575*/
  v37[0] = 5; /*0x14067457b*/
  v37[1] = v7; /*0x140674583*/
  v37[2] = 5; /*0x140674587*/
  *(_QWORD *)&v43 = 0; /*0x14067458f*/
  *(_QWORD *)&v44 = 0; /*0x140674597*/
  nullsub_1(v8); /*0x14067459f*/
  v9 = (_DWORD *)sub_140001650(7, 1); /*0x1406745ae*/
  if ( !v9 ) /*0x1406745b6*/
    sub_1416C2D4B(1, 7); /*0x140674b54*/
  *(_DWORD *)((char *)v9 + 3) = 1701273971; /*0x1406745bc*/
  *v9 = 1936942445; /*0x1406745c3*/
  *(_QWORD *)&v54 = 7; /*0x1406745c9*/
  *((_QWORD *)&v54 + 1) = v9; /*0x1406745d4*/
  *(_QWORD *)&v55 = 7; /*0x1406745db*/
  v11 = v42; /*0x1406745e6*/
  if ( v42 < 0 ) /*0x1406745ed*/
  {
    v12 = 0; /*0x1406745ef*/
    goto LABEL_7; /*0x1406745ef*/
  }
  if ( v42 ) /*0x14067460a*/
  {
    v13 = v41; /*0x14067460c*/
    nullsub_1(v10); /*0x140674610*/
    v12 = 1; /*0x140674615*/
    v14 = sub_140001650(v11, 1); /*0x140674623*/
    if ( !v14 ) /*0x14067462b*/
    {
LABEL_7:
      v61 = 1; /*0x1406745f2*/
      sub_1416C2D4B(v12, v11); /*0x1406745ff*/
    }
    v15 = v14; /*0x14067462d*/
    sub_141684120(v14, v13, v11); /*0x140674639*/
  }
  else
  {
    v15 = 1; /*0x140674640*/
  }
  v46.m256i_i8[0] = 3; /*0x140674646*/
  v46.m256i_i64[1] = v11; /*0x14067464a*/
  v46.m256i_i64[2] = v15; /*0x14067464e*/
  v46.m256i_i64[3] = v11; /*0x140674652*/
  v61 = 0; /*0x140674656*/
  sub_140307860(v57, &v43, &v54, &v46); /*0x140674673*/
  if ( v57[0] != 0xFF ) /*0x140674680*/
    sub_1400104F0(v57); /*0x140674689*/
  nullsub_1(v16); /*0x14067468f*/
  v17 = (_DWORD *)sub_140001650(4, 1); /*0x14067469e*/
  if ( !v17 ) /*0x1406746a6*/
    sub_1416C2D4B(1, 4); /*0x140674b66*/
  *v17 = 1701869940; /*0x1406746ac*/
  *(_QWORD *)&v54 = 4; /*0x1406746b2*/
  *((_QWORD *)&v54 + 1) = v17; /*0x1406746bd*/
  *(_QWORD *)&v55 = 4; /*0x1406746c4*/
  nullsub_1(v18); /*0x1406746cf*/
  v19 = (void *)sub_140001650(18, 1); /*0x1406746de*/
  v40 = v19; /*0x1406746e6*/
  if ( !v19 ) /*0x1406746ea*/
    sub_1416C2D4B(1, 18); /*0x140674b78*/
  qmemcpy(v19, "aimami_proxy_error", 18); /*0x1406746f7*/
  v46.m256i_i8[0] = 3; /*0x140674700*/
  v46.m256i_i64[1] = 18; /*0x140674704*/
  v46.m256i_i64[2] = (__int64)v19; /*0x14067470c*/
  v46.m256i_i64[3] = 18; /*0x140674710*/
  sub_140307860(v57, &v43, &v54, &v46); /*0x14067472e*/
  if ( v57[0] != 0xFF ) /*0x14067473b*/
    sub_1400104F0(v57); /*0x140674744*/
  nullsub_1(v20); /*0x14067474a*/
  v21 = (_DWORD *)sub_140001650(4, 1); /*0x140674759*/
  if ( !v21 ) /*0x140674761*/
    sub_1416C2D4B(1, 4); /*0x140674b8a*/
  *v21 = 1701080931; /*0x140674767*/
  *(_QWORD *)&v54 = 4; /*0x14067476d*/
  *((_QWORD *)&v54 + 1) = v21; /*0x140674778*/
  *(_QWORD *)&v55 = 4; /*0x14067477f*/
  v23 = *((_QWORD *)&v53 + 1); /*0x14067478a*/
  if ( v53 < 0 ) /*0x140674794*/
  {
    v24 = 0; /*0x140674796*/
    goto LABEL_21; /*0x140674796*/
  }
  if ( *((_QWORD *)&v53 + 1) ) /*0x1406747b1*/
  {
    v25 = v53; /*0x1406747b3*/
    nullsub_1(v22); /*0x1406747ba*/
    v24 = 1; /*0x1406747bf*/
    v26 = sub_140001650(v23, 1); /*0x1406747cd*/
    if ( !v26 ) /*0x1406747d5*/
    {
LABEL_21:
      v60 = 1; /*0x140674799*/
      sub_1416C2D4B(v24, v23); /*0x1406747a6*/
    }
    v27 = v26; /*0x1406747d7*/
    sub_141684120(v26, v25, v23); /*0x1406747e3*/
  }
  else
  {
    v27 = 1; /*0x1406747ea*/
  }
  v46.m256i_i8[0] = 3; /*0x1406747f0*/
  v46.m256i_i64[1] = v23; /*0x1406747f4*/
  v46.m256i_i64[2] = v27; /*0x1406747f8*/
  v46.m256i_i64[3] = v23; /*0x1406747fc*/
  v60 = 0; /*0x140674800*/
  sub_140307860(v57, &v43, &v54, &v46); /*0x14067481d*/
  if ( v57[0] != 0xFF ) /*0x14067482a*/
    sub_1400104F0(v57); /*0x140674833*/
  *(_OWORD *)&v46.m256i_u64[1] = v43; /*0x14067483d*/
  v46.m256i_i64[3] = v44; /*0x140674845*/
  v46.m256i_i8[0] = 5; /*0x140674849*/
  v59 = 0; /*0x14067484d*/
  sub_140307860(v57, &v38, v37, &v46); /*0x140674869*/
  if ( v57[0] != 0xFF ) /*0x140674876*/
    sub_1400104F0(v57); /*0x14067487f*/
  *(_OWORD *)((char *)&v46.m256i_u32[1] + 3) = v38; /*0x14067488d*/
  *(__int64 *)((char *)&v46.m256i_i64[2] + 7) = v39; /*0x140674891*/
  v34 = 5; /*0x140674895*/
  *(_OWORD *)v35 = *(_OWORD *)v46.m256i_i8; /*0x14067489d*/
  *(_QWORD *)&v35[15] = *((_QWORD *)&v38 + 1); /*0x1406748a5*/
  v36 = v39; /*0x1406748ad*/
  sub_140677670(&v46, &v34); /*0x1406748b8*/
  WORD4(v51) = a2; /*0x1406748bd*/
  *(_QWORD *)v57 = &v46; /*0x1406748c4*/
  *(_QWORD *)&v57[8] = off_14177A978; /*0x1406748d2*/
  *(_QWORD *)&v57[16] = aOpenaiPassthro; /*0x1406748e0*/
  *(_QWORD *)&v57[24] = 18; /*0x1406748e7*/
  *(_QWORD *)&v57[32] = 0; /*0x1406748f2*/
  LOBYTE(v58) = 0; /*0x1406748fd*/
  sub_1406C8AD0(&v54, aXAimamiRoute, 14, v57); /*0x14067491f*/
  if ( (_BYTE)v56 == 0xFF ) /*0x14067492c*/
    sub_1416C3060( /*0x140674aff*/
      (unsigned int)aSizeOverflowsM_0,
      23,
      (unsigned int)&v62,
      (unsigned int)&unk_1417693B8,
      (__int64)&off_1417646D0);
  *(_QWORD *)&v57[32] = v56; /*0x140674939*/
  *(_OWORD *)&v57[16] = v55; /*0x14067494e*/
  *(_OWORD *)v57 = v54; /*0x140674955*/
  if ( (_BYTE)v56 != 2 ) /*0x14067495e*/
    (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v57 + 32LL))( /*0x14067497c*/
      &v57[24],
      *(_QWORD *)&v57[8],
      *(_QWORD *)&v57[16]);
  if ( *((_QWORD *)&v53 + 1) ) /*0x140674991*/
  {
    for ( i = 0; *((_QWORD *)&v53 + 1) != i; ++i ) /*0x140674993*/
    {
      v29 = *(_BYTE *)(v53 + i); /*0x1406749b1*/
      if ( v29 > 0x1Fu ) /*0x1406749b8*/
      {
        if ( v29 == 127 ) /*0x1406749a3*/
          goto LABEL_43; /*0x1406749a3*/
      }
      else if ( v29 != 9 ) /*0x1406749bd*/
      {
        goto LABEL_43; /*0x1406749bd*/
      }
    }
  }
  sub_1414464F0(&v43, v53, *((_QWORD *)&v53 + 1)); /*0x1406749c4*/
  LOBYTE(v45) = 0; /*0x1406749ce*/
  v58 = v45; /*0x1406749d6*/
  *(_OWORD *)&v57[24] = v44; /*0x1406749e5*/
  *(_OWORD *)&v57[8] = v43; /*0x1406749ec*/
  *(_QWORD *)v57 = &v46; /*0x1406749f3*/
  sub_1406C8AD0(&v54, aXAimamiReason, 15, v57); /*0x140674a15*/
  if ( (_BYTE)v56 == 0xFF ) /*0x140674a22*/
    sub_1416C3060( /*0x140674b30*/
      (unsigned int)aSizeOverflowsM_0,
      23,
      (unsigned int)&v62,
      (unsigned int)&unk_1417693B8,
      (__int64)&off_1417646D0);
  *(_QWORD *)&v57[32] = v56; /*0x140674a2f*/
  *(_OWORD *)&v57[16] = v55; /*0x140674a44*/
  *(_OWORD *)v57 = v54; /*0x140674a4b*/
  if ( (_BYTE)v56 != 2 ) /*0x140674a54*/
    (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v57 + 32LL))( /*0x140674a72*/
      &v57[24],
      *(_QWORD *)&v57[8],
      *(_QWORD *)&v57[16]);
LABEL_43:
  a1[7] = v52; /*0x140674a76*/
  a1[6] = v51; /*0x140674a88*/
  a1[5] = v50; /*0x140674a93*/
  a1[4] = v49; /*0x140674a9e*/
  v30 = *(_OWORD *)v46.m256i_i8; /*0x140674aa2*/
  v31 = *(_OWORD *)&v46.m256i_u64[2]; /*0x140674aa6*/
  v32 = v47; /*0x140674aaa*/
  a1[3] = v48; /*0x140674ab5*/
  a1[2] = v32; /*0x140674ab9*/
  a1[1] = v31; /*0x140674abd*/
  *a1 = v30; /*0x140674ac1*/
  return a1; /*0x140674ac7*/
}