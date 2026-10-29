// win 1.2.7 | module src/core/relay/proxy_passthrough.rs | ea 0x140db8220 | name sub_140DB8220
// win 1.2.7 | module src/core/relay/proxy_passthrough.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140DB8220(__int128 *a1, __int16 a2, const __m128i *a3, __int64 a4, __int128 a5)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  const __m128i *v13; // r15
  __m128i *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // r12
  const __m128i *v25; // r15
  __m128i *v26; // rax
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
  const __m128i *v41; // [rsp+A0h] [rbp+20h] BYREF
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

  v63 = -2;
  v41 = a3;
  v42 = a4;
  v53 = a5;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)v57 = &v53;
    *(_QWORD *)&v57[8] = sub_140186EE0;
    *(_QWORD *)&v57[16] = &v41;
    *(_QWORD *)&v57[24] = sub_140186EE0;
    *(_QWORD *)&v48 = 2;
    *((_QWORD *)&v48 + 1) = aCodexmateLibCo_37;
    *(_QWORD *)&v49 = 45;
    *(_QWORD *)&v50 = &unk_141A4E058;
    *((_QWORD *)&v50 + 1) = v57;
    v46.m256i_i64[0] = 0;
    v46.m256i_i64[1] = (__int64)aCodexmateLibCo_37;
    *(_OWORD *)&v46.m256i_u64[2] = 0x2Du;
    *(_QWORD *)&v47 = aSrcCoreRelayPr_6;
    *((_QWORD *)&v47 + 1) = 35;
    *((_QWORD *)&v49 + 1) = 0x14A00000001LL;
    sub_1414D53A0(&v62, &v46);
  }
  *(_QWORD *)&v38 = 0;
  v39 = 0;
  nullsub_1(a1);
  v7 = sub_140001650(5, 1);
  if ( !v7 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v7 + 4) = 114;
  *(_DWORD *)v7 = 1869771365;
  v37[0] = 5;
  v37[1] = v7;
  v37[2] = 5;
  *(_QWORD *)&v43 = 0;
  *(_QWORD *)&v44 = 0;
  nullsub_1(v8);
  v9 = (_DWORD *)sub_140001650(7, 1);
  if ( !v9 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v9 + 3) = 1701273971;
  *v9 = 1936942445;
  *(_QWORD *)&v54 = 7;
  *((_QWORD *)&v54 + 1) = v9;
  *(_QWORD *)&v55 = 7;
  v11 = v42;
  if ( v42 < 0 )
  {
    v12 = 0;
    goto LABEL_7;
  }
  if ( v42 )
  {
    v13 = v41;
    nullsub_1(v10);
    v12 = 1;
    v14 = (__m128i *)sub_140001650(v11, 1);
    if ( !v14 )
    {
LABEL_7:
      v61 = 1;
      sub_141938D2B(v12, v11);
    }
    v15 = (__int64)v14;
    sub_1418F44E0(v14, v13, v11);
  }
  else
  {
    v15 = 1;
  }
  v46.m256i_i8[0] = 3;
  v46.m256i_i64[1] = v11;
  v46.m256i_i64[2] = v15;
  v46.m256i_i64[3] = v11;
  v61 = 0;
  sub_140E72AA0(v57, &v43, &v54, &v46);
  if ( v57[0] != 0xFF )
    sub_140409B40(v57);
  nullsub_1(v16);
  v17 = (_DWORD *)sub_140001650(4, 1);
  if ( !v17 )
    sub_141938D2B(1, 4);
  *v17 = 1701869940;
  *(_QWORD *)&v54 = 4;
  *((_QWORD *)&v54 + 1) = v17;
  *(_QWORD *)&v55 = 4;
  nullsub_1(v18);
  v19 = (void *)sub_140001650(18, 1);
  v40 = v19;
  if ( !v19 )
    sub_141938D2B(1, 18);
  qmemcpy(v19, "aimami_proxy_error", 18);
  v46.m256i_i8[0] = 3;
  v46.m256i_i64[1] = 18;
  v46.m256i_i64[2] = (__int64)v19;
  v46.m256i_i64[3] = 18;
  sub_140E72AA0(v57, &v43, &v54, &v46);
  if ( v57[0] != 0xFF )
    sub_140409B40(v57);
  nullsub_1(v20);
  v21 = (_DWORD *)sub_140001650(4, 1);
  if ( !v21 )
    sub_141938D2B(1, 4);
  *v21 = 1701080931;
  *(_QWORD *)&v54 = 4;
  *((_QWORD *)&v54 + 1) = v21;
  *(_QWORD *)&v55 = 4;
  v23 = *((_QWORD *)&v53 + 1);
  if ( v53 < 0 )
  {
    v24 = 0;
    goto LABEL_21;
  }
  if ( *((_QWORD *)&v53 + 1) )
  {
    v25 = (const __m128i *)v53;
    nullsub_1(v22);
    v24 = 1;
    v26 = (__m128i *)sub_140001650(v23, 1);
    if ( !v26 )
    {
LABEL_21:
      v60 = 1;
      sub_141938D2B(v24, v23);
    }
    v27 = (__int64)v26;
    sub_1418F44E0(v26, v25, v23);
  }
  else
  {
    v27 = 1;
  }
  v46.m256i_i8[0] = 3;
  v46.m256i_i64[1] = v23;
  v46.m256i_i64[2] = v27;
  v46.m256i_i64[3] = v23;
  v60 = 0;
  sub_140E72AA0(v57, &v43, &v54, &v46);
  if ( v57[0] != 0xFF )
    sub_140409B40(v57);
  *(_OWORD *)&v46.m256i_u64[1] = v43;
  v46.m256i_i64[3] = v44;
  v46.m256i_i8[0] = 5;
  v59 = 0;
  sub_140E72AA0(v57, &v38, v37, &v46);
  if ( v57[0] != 0xFF )
    sub_140409B40(v57);
  *(_OWORD *)((char *)&v46.m256i_u32[1] + 3) = v38;
  *(__int64 *)((char *)&v46.m256i_i64[2] + 7) = v39;
  v34 = 5;
  *(_OWORD *)v35 = *(_OWORD *)v46.m256i_i8;
  *(_QWORD *)&v35[15] = *((_QWORD *)&v38 + 1);
  v36 = v39;
  sub_140DC30A0(&v46, &v34);
  WORD4(v51) = a2;
  *(_QWORD *)v57 = &v46;
  *(_QWORD *)&v57[8] = off_141A422B8;
  *(_QWORD *)&v57[16] = aOpenaiPassthro;
  *(_QWORD *)&v57[24] = 18;
  *(_QWORD *)&v57[32] = 0;
  LOBYTE(v58) = 0;
  sub_140CB9F10(&v54, aXAimamiRoute, 14, v57);
  if ( (_BYTE)v56 == 0xFF )
    sub_141939040(
      (unsigned int)aSizeOverflowsM,
      23,
      (unsigned int)&v62,
      (unsigned int)&unk_141A49818,
      (__int64)&off_141A42490);
  *(_QWORD *)&v57[32] = v56;
  *(_OWORD *)&v57[16] = v55;
  *(_OWORD *)v57 = v54;
  if ( (_BYTE)v56 != 2 )
    (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v57 + 32LL))(
      &v57[24],
      *(_QWORD *)&v57[8],
      *(_QWORD *)&v57[16]);
  if ( *((_QWORD *)&v53 + 1) )
  {
    for ( i = 0; *((_QWORD *)&v53 + 1) != i; ++i )
    {
      v29 = *(_BYTE *)(v53 + i);
      if ( v29 > 0x1Fu )
      {
        if ( v29 == 127 )
          goto LABEL_43;
      }
      else if ( v29 != 9 )
      {
        goto LABEL_43;
      }
    }
  }
  sub_141653430(&v43);
  LOBYTE(v45) = 0;
  v58 = v45;
  *(_OWORD *)&v57[24] = v44;
  *(_OWORD *)&v57[8] = v43;
  *(_QWORD *)v57 = &v46;
  sub_140CB9F10(&v54, aXAimamiReason, 15, v57);
  if ( (_BYTE)v56 == 0xFF )
    sub_141939040(
      (unsigned int)aSizeOverflowsM,
      23,
      (unsigned int)&v62,
      (unsigned int)&unk_141A49818,
      (__int64)&off_141A42490);
  *(_QWORD *)&v57[32] = v56;
  *(_OWORD *)&v57[16] = v55;
  *(_OWORD *)v57 = v54;
  if ( (_BYTE)v56 != 2 )
    (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v57 + 32LL))(
      &v57[24],
      *(_QWORD *)&v57[8],
      *(_QWORD *)&v57[16]);
LABEL_43:
  a1[7] = v52;
  a1[6] = v51;
  a1[5] = v50;
  a1[4] = v49;
  v30 = *(_OWORD *)v46.m256i_i8;
  v31 = *(_OWORD *)&v46.m256i_u64[2];
  v32 = v47;
  a1[3] = v48;
  a1[2] = v32;
  a1[1] = v31;
  *a1 = v30;
  return a1;
}
