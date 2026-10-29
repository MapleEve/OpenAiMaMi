// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x140227cf0 | name sub_140227CF0
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140227CF0(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        signed __int64 a4,
        const __m128i *a5,
        unsigned __int64 a6)
{
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  __m128i *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  void *v16; // rax
  __m128i *v17; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  void *v20; // rax
  signed __int64 v21; // rbx
  __int64 v22; // r12
  const __m128i *v23; // r15
  __m128i *v24; // rax
  __int64 v25; // r14
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  void *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  void *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  void *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  void *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  void *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  void *v56; // rax
  __int8 v57; // al
  __int64 v58; // rcx
  _DWORD *v59; // rax
  __int64 v60; // rcx
  signed __int64 v61; // rbx
  __int64 v62; // r12
  const __m128i *v63; // r15
  __m128i *v64; // rax
  __int64 v65; // r14
  __int64 v66; // rcx
  _DWORD *v67; // rax
  __int64 v68; // rcx
  _DWORD *v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  void *v75; // rax
  unsigned __int64 v76; // rdi
  __int64 v77; // rcx
  void *v78; // rax
  __int64 v79; // rax
  bool v80; // cf
  __int64 v81; // rdi
  __int64 result; // rax
  _QWORD v83[4]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v84; // [rsp+90h] [rbp+10h] BYREF
  __int64 v85; // [rsp+A0h] [rbp+20h]
  __int128 v86; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v87; // [rsp+B8h] [rbp+38h]
  __m256i v88; // [rsp+C0h] [rbp+40h] BYREF
  char v89; // [rsp+E4h] [rbp+64h]
  char v90; // [rsp+E5h] [rbp+65h]
  char v91; // [rsp+E6h] [rbp+66h]
  char v92; // [rsp+E7h] [rbp+67h]
  __m256i v93; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v94; // [rsp+108h] [rbp+88h] BYREF
  _DWORD *v95; // [rsp+110h] [rbp+90h]
  __int64 v96; // [rsp+118h] [rbp+98h]
  char v97; // [rsp+124h] [rbp+A4h]
  char v98; // [rsp+125h] [rbp+A5h]
  char v99; // [rsp+126h] [rbp+A6h]
  char v100; // [rsp+127h] [rbp+A7h]
  __int64 v101; // [rsp+128h] [rbp+A8h]

  v101 = -2;
  *(_QWORD *)&v86 = 0;
  v87 = 0;
  nullsub_1(a1);
  v10 = (_DWORD *)sub_140001650(7, 1);
  if ( !v10 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v10 + 3) = 1701670755;
  *v10 = 1668576623;
  v94 = 7;
  v95 = v10;
  v96 = 7;
  if ( a4 < 0 )
  {
    v12 = 0;
    goto LABEL_4;
  }
  if ( a4 )
  {
    nullsub_1(v11);
    v12 = 1;
    v13 = (__m128i *)sub_140001650(a4, 1);
    if ( !v13 )
    {
LABEL_4:
      v92 = 1;
      sub_141938D2B(v12, a4);
    }
    v14 = (__int64)v13;
    sub_1418F44E0(v13, a3, a4);
  }
  else
  {
    v14 = 1;
  }
  v93.m256i_i8[0] = 3;
  v93.m256i_i64[1] = a4;
  v93.m256i_i64[2] = v14;
  v93.m256i_i64[3] = a4;
  v92 = 0;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v15);
  v16 = (void *)sub_140001650(11, 1);
  if ( !v16 )
    sub_141938D2B(1, 11);
  qmemcpy(v16, "error_class", 11);
  v94 = 11;
  v95 = v16;
  v96 = 11;
  nullsub_1(0x6C635F726F727265LL);
  v17 = (__m128i *)sub_140001650(a6, 1);
  v83[3] = v17;
  if ( !v17 )
    sub_141938D2B(1, a6);
  v18 = (__int64)v17;
  sub_1418F44E0(v17, a5, a6);
  v93.m256i_i8[0] = 3;
  v93.m256i_i64[1] = a6;
  v93.m256i_i64[2] = v18;
  v93.m256i_i64[3] = a6;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v19);
  v20 = (void *)sub_140001650(10, 1);
  if ( !v20 )
    sub_141938D2B(1, 10);
  qmemcpy(v20, "error_kind", 10);
  v94 = 10;
  v95 = v20;
  v96 = 10;
  v21 = *(_QWORD *)(a2 + 168);
  if ( v21 < 0 )
  {
    v22 = 0;
    goto LABEL_18;
  }
  if ( v21 )
  {
    v23 = *(const __m128i **)(a2 + 160);
    nullsub_1(0x696B5F726F727265LL);
    v22 = 1;
    v24 = (__m128i *)sub_140001650(v21, 1);
    if ( !v24 )
    {
LABEL_18:
      v91 = 1;
      sub_141938D2B(v22, v21);
    }
    v25 = (__int64)v24;
    sub_1418F44E0(v24, v23, v21);
  }
  else
  {
    v25 = 1;
  }
  v93.m256i_i8[0] = 3;
  v93.m256i_i64[1] = v21;
  v93.m256i_i64[2] = v25;
  v93.m256i_i64[3] = v21;
  v91 = 0;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v26);
  v27 = (_QWORD *)sub_140001650(8, 1);
  if ( !v27 )
    sub_141938D2B(1, 8);
  *v27 = 0x7374706D65747461LL;
  v94 = 8;
  v95 = v27;
  v96 = 8;
  v28 = *(unsigned int *)(a2 + 280);
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v28;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v29);
  v30 = sub_140001650(6, 1);
  if ( !v30 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v30 + 4) = 29556;
  *(_DWORD *)v30 = 1852143205;
  v94 = 6;
  v95 = (_DWORD *)v30;
  v96 = 6;
  v31 = *(_QWORD *)(a2 + 176);
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v31;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v32);
  v33 = sub_140001650(6, 1);
  if ( !v33 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v33 + 4) = 29537;
  *(_DWORD *)v33 = 1953260900;
  v94 = 6;
  v95 = (_DWORD *)v33;
  v96 = 6;
  v34 = *(_QWORD *)(a2 + 184);
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v34;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v35);
  v36 = (void *)sub_140001650(12, 1);
  if ( !v36 )
    sub_141938D2B(1, 12);
  qmemcpy(v36, "delta_counts", 12);
  v94 = 12;
  v95 = v36;
  v96 = 12;
  v100 = 1;
  sub_14040F240(&v93, a2 + 192);
  if ( v93.m256i_i8[0] == -1 )
  {
    v88.m256i_i64[0] = v93.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)&v88,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419DD128);
  }
  v88 = v93;
  v100 = 0;
  sub_140E72AA0(&v93, &v86, &v94, &v88);
  if ( v93.m256i_i8[0] != -1 )
    sub_14002F9D0(&v93);
  nullsub_1(v37);
  v38 = sub_140001650(5, 1);
  if ( !v38 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v38 + 4) = 115;
  *(_DWORD *)v38 = 1702132066;
  v94 = 5;
  v95 = (_DWORD *)v38;
  v96 = 5;
  v39 = *(_QWORD *)(a2 + 240);
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v39;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v40);
  v41 = (void *)sub_140001650(13, 1);
  if ( !v41 )
    sub_141938D2B(1, 13);
  qmemcpy(v41, "first_byte_ms", 13);
  v94 = 13;
  v95 = v41;
  v96 = 13;
  v42 = *(_QWORD *)(a2 + 8);
  v93.m256i_i8[0] = 2 * *(_BYTE *)a2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v42;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v43);
  v44 = (void *)sub_140001650(12, 1);
  if ( !v44 )
    sub_141938D2B(1, 12);
  qmemcpy(v44, "last_byte_ms", 12);
  v94 = 12;
  v95 = v44;
  v96 = 12;
  v45 = *(_QWORD *)(a2 + 24);
  v93.m256i_i8[0] = 2 * *(_BYTE *)(a2 + 16);
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v45;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v46);
  v47 = (void *)sub_140001650(10, 1);
  if ( !v47 )
    sub_141938D2B(1, 10);
  qmemcpy(v47, "max_gap_ms", 10);
  v94 = 10;
  v95 = v47;
  v96 = 10;
  v48 = *(_QWORD *)(a2 + 248);
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v48;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v49);
  v50 = (void *)sub_140001650(12, 1);
  if ( !v50 )
    sub_141938D2B(1, 12);
  qmemcpy(v50, "block_starts", 12);
  v94 = 12;
  v95 = v50;
  v96 = 12;
  v51 = *(_QWORD *)(a2 + 256);
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v51;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v52);
  v53 = (void *)sub_140001650(11, 1);
  if ( !v53 )
    sub_141938D2B(1, 11);
  qmemcpy(v53, "block_stops", 11);
  v94 = 11;
  v95 = v53;
  v96 = 11;
  v54 = *(_QWORD *)(a2 + 264);
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v54;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v55);
  v56 = (void *)sub_140001650(12, 1);
  if ( !v56 )
    sub_141938D2B(1, 12);
  qmemcpy(v56, "message_stop", 12);
  v94 = 12;
  v95 = v56;
  v96 = 12;
  v57 = *(_BYTE *)(a2 + 285);
  v93.m256i_i8[0] = 1;
  v93.m256i_i8[1] = v57;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v58);
  v59 = (_DWORD *)sub_140001650(4, 1);
  if ( !v59 )
    sub_141938D2B(1, 4);
  *v59 = 1886352499;
  v94 = 4;
  v95 = v59;
  v96 = 4;
  v61 = *(_QWORD *)(a2 + 152);
  if ( v61 < 0 )
  {
    v62 = 0;
    goto LABEL_62;
  }
  if ( v61 )
  {
    v63 = *(const __m128i **)(a2 + 144);
    nullsub_1(v60);
    v62 = 1;
    v64 = (__m128i *)sub_140001650(v61, 1);
    if ( !v64 )
    {
LABEL_62:
      v90 = 1;
      sub_141938D2B(v62, v61);
    }
    v65 = (__int64)v64;
    sub_1418F44E0(v64, v63, v61);
  }
  else
  {
    v65 = 1;
  }
  v93.m256i_i8[0] = 3;
  v93.m256i_i64[1] = v61;
  v93.m256i_i64[2] = v65;
  v93.m256i_i64[3] = v61;
  v90 = 0;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v66);
  v67 = (_DWORD *)sub_140001650(4, 1);
  if ( !v67 )
    sub_141938D2B(1, 4);
  *v67 = 1818845556;
  v94 = 4;
  v95 = v67;
  v96 = 4;
  v99 = 1;
  sub_140C115E0(&v93, a2 + 80);
  if ( v93.m256i_i8[0] == -1 )
  {
    v88.m256i_i64[0] = v93.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)&v88,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419DD128);
  }
  v88 = v93;
  v99 = 0;
  sub_140E72AA0(&v93, &v86, &v94, &v88);
  if ( v93.m256i_i8[0] != -1 )
    sub_14002F9D0(&v93);
  nullsub_1(v68);
  v69 = (_DWORD *)sub_140001650(4, 1);
  if ( !v69 )
    sub_141938D2B(1, 4);
  *v69 = 1954047348;
  v83[0] = 4;
  v83[1] = v69;
  v83[2] = 4;
  *(_QWORD *)&v84 = 0;
  v85 = 0;
  nullsub_1(v70);
  v71 = (_QWORD *)sub_140001650(8, 1);
  if ( !v71 )
    sub_141938D2B(1, 8);
  *v71 = 0x6D61657274737075LL;
  v94 = 8;
  v95 = v71;
  v96 = 8;
  if ( *(_DWORD *)(a2 + 32) == 1 )
  {
    v98 = 1;
    sub_1401A7820(&v93, a2 + 40);
    if ( v93.m256i_i8[0] == -1 )
    {
      v88.m256i_i64[0] = v93.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_0,
        43,
        (unsigned int)&v88,
        (unsigned int)&off_1419D7F48,
        (__int64)&off_1419DD128);
    }
  }
  else
  {
    v93.m256i_i8[0] = 0;
  }
  v88 = v93;
  v98 = 0;
  sub_140E72AA0(&v93, &v84, &v94, &v88);
  if ( v93.m256i_i8[0] != -1 )
    sub_14002F9D0(&v93);
  nullsub_1(v72);
  v73 = sub_140001650(9, 1);
  if ( !v73 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v73 = 0x65736E6F70736572LL;
  *(_BYTE *)(v73 + 8) = 115;
  v94 = 9;
  v95 = (_DWORD *)v73;
  v96 = 9;
  if ( *(_DWORD *)(a2 + 56) == 1 )
  {
    v97 = 1;
    sub_1401A7820(&v93, a2 + 64);
    if ( v93.m256i_i8[0] == -1 )
    {
      v88.m256i_i64[0] = v93.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_0,
        43,
        (unsigned int)&v88,
        (unsigned int)&off_1419D7F48,
        (__int64)&off_1419DD128);
    }
  }
  else
  {
    v93.m256i_i8[0] = 0;
  }
  v88 = v93;
  v97 = 0;
  sub_140E72AA0(&v93, &v84, &v94, &v88);
  if ( v93.m256i_i8[0] != -1 )
    sub_14002F9D0(&v93);
  *(_OWORD *)&v93.m256i_u64[1] = v84;
  v93.m256i_i64[3] = v85;
  v93.m256i_i8[0] = 5;
  v89 = 0;
  sub_140E72AA0(&v88, &v86, v83, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v74);
  v75 = (void *)sub_140001650(13, 1);
  if ( !v75 )
    sub_141938D2B(1, 13);
  qmemcpy(v75, "usage_samples", 13);
  v94 = 13;
  v95 = v75;
  v96 = 13;
  v76 = *(_QWORD *)(a2 + 272);
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v76;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  nullsub_1(v77);
  v78 = (void *)sub_140001650(13, 1);
  if ( !v78 )
    sub_141938D2B(1, 13);
  qmemcpy(v78, "usage_omitted", 13);
  v94 = 13;
  v95 = v78;
  v79 = 0;
  v80 = v76 < 8;
  v81 = v76 - 8;
  if ( !v80 )
    v79 = v81;
  v96 = 13;
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v79;
  sub_140E72AA0(&v88, &v86, &v94, &v93);
  if ( v88.m256i_i8[0] != -1 )
    sub_14002F9D0(&v88);
  result = v87;
  *(_QWORD *)(a1 + 24) = v87;
  *(_OWORD *)(a1 + 8) = v86;
  *(_BYTE *)a1 = 5;
  return result;
}
