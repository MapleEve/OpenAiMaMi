// module: codexmate_lib/core/debug_bundle
// addr: 0x14071e050
// name: catalog_shape
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::debug_bundle::catalog_shape | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall catalog_shape(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  void *v8; // rax
  __int8 v9; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int8 v13; // cl
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  void *v21; // r15
  __int64 v22; // r14
  __int128 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // r12
  void *v41; // rdx
  __int64 v42; // r13
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rcx
  void *v49; // rax
  __int64 v50; // rcx
  void *v51; // rax
  __int64 v52; // r14
  _QWORD *v53; // r15
  __int64 v54; // rdx
  __int64 v55; // r14
  _QWORD *v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 i; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 j; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 k; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 result; // rax
  __int64 v73; // rdx
  __int64 v74; // [rsp+28h] [rbp-58h] BYREF
  __int64 v75; // [rsp+30h] [rbp-50h]
  __int64 v76; // [rsp+38h] [rbp-48h]
  __int64 v77; // [rsp+48h] [rbp-38h] BYREF
  __int64 v78; // [rsp+50h] [rbp-30h]
  __int64 v79; // [rsp+58h] [rbp-28h]
  _BYTE v80[32]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v81; // [rsp+88h] [rbp+8h] BYREF
  __int64 v82; // [rsp+98h] [rbp+18h]
  __int128 v83; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v84; // [rsp+B0h] [rbp+30h]
  _QWORD v85[4]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v86; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v87; // [rsp+E0h] [rbp+60h]
  __int64 v88; // [rsp+E8h] [rbp+68h]
  _QWORD v89[2]; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v90; // [rsp+100h] [rbp+80h]
  __int128 v91; // [rsp+110h] [rbp+90h] BYREF
  __int64 v92; // [rsp+120h] [rbp+A0h]
  __int128 v93; // [rsp+128h] [rbp+A8h]
  __int64 v94; // [rsp+138h] [rbp+B8h]
  __int64 v95; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v96; // [rsp+148h] [rbp+C8h]
  __int64 v97; // [rsp+150h] [rbp+D0h]
  __int128 v98; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v99; // [rsp+168h] [rbp+E8h]
  __int128 v100; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v101; // [rsp+180h] [rbp+100h]
  __m256i v102; // [rsp+188h] [rbp+108h] BYREF
  __int64 v103; // [rsp+1A8h] [rbp+128h]
  __int64 v104; // [rsp+1B0h] [rbp+130h]
  __int128 v105; // [rsp+1B8h] [rbp+138h]
  __int64 v106; // [rsp+1C8h] [rbp+148h]
  __int64 v107; // [rsp+228h] [rbp+1A8h]
  __m256i v108; // [rsp+230h] [rbp+1B0h] BYREF
  __m256i v109; // [rsp+250h] [rbp+1D0h] BYREF
  char v110; // [rsp+279h] [rbp+1F9h]
  char v111; // [rsp+27Ah] [rbp+1FAh]
  char v112; // [rsp+27Bh] [rbp+1FBh]
  char v113; // [rsp+27Ch] [rbp+1FCh]
  char v114; // [rsp+27Dh] [rbp+1FDh]
  char v115; // [rsp+27Eh] [rbp+1FEh]
  char v116; // [rsp+27Fh] [rbp+1FFh]
  __int64 v117; // [rsp+280h] [rbp+200h]

  v117 = -2;
  sub_141473FA0((unsigned int)&v77, a2[97], a2[98], (unsigned int)"codex_router_catalog.jsonmodels_cache.json", 25);
  sub_141473FA0((unsigned int)&v74, a2[1], a2[2], (unsigned int)"models_cache.json", 17);
  v4 = v78;
  v5 = v79;
  read_catalog_file_shape(v80, v78, v79);
  v6 = v75;
  read_catalog_file_shape(v89, v75, v76);
  *(_QWORD *)&v98 = 0;
  v99 = 0;
  nullsub_1(v7);
  v8 = (void *)sub_140001650(10, 1);
  if ( !v8 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v8, "pathExists", 10);
  v109.m256i_i64[0] = 10;
  v109.m256i_i64[1] = (__int64)v8;
  v109.m256i_i64[2] = 10;
  v111 = 1;
  sub_141486710(&v102, v4, v5);
  if ( v102.m256i_i32[0] == 2 )
  {
    v111 = 1;
    sub_1401DD260(v102.m256i_i64[1]);
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  v102.m256i_i8[0] = 1;
  v102.m256i_i8[1] = v9;
  v111 = 0;
  sub_140307860(&v108, &v98, &v109, &v102);
  if ( v108.m256i_i8[0] != -1 )
    sub_1400104F0(&v108);
  nullsub_1(v10);
  v11 = sub_140001650(5, 1);
  if ( !v11 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v11 + 4) = 115;
  *(_DWORD *)v11 = 1702132066;
  v109.m256i_i64[0] = 5;
  v109.m256i_i64[1] = v11;
  v109.m256i_i64[2] = 5;
  v110 = 1;
  sub_141486710(&v102, v4, v5);
  if ( v102.m256i_i32[0] == 2 )
  {
    v110 = 1;
    v12 = sub_1401DD260(v102.m256i_i64[1]);
    v13 = 0;
  }
  else
  {
    v12 = *((_QWORD *)&v105 + 1);
    v13 = 2;
  }
  v102.m256i_i8[0] = v13;
  v102.m256i_i64[1] = 0;
  v102.m256i_i64[2] = v12;
  v110 = 0;
  sub_140307860(&v108, &v98, &v109, &v102);
  if ( v108.m256i_i8[0] != -1 )
    sub_1400104F0(&v108);
  nullsub_1(v14);
  v15 = (void *)sub_140001650(13, 1);
  if ( !v15 )
    sub_1416C2D4B(1, 13);
  qmemcpy(v15, "routerCatalog", 13);
  v109.m256i_i64[0] = 13;
  v109.m256i_i64[1] = (__int64)v15;
  v109.m256i_i64[2] = 13;
  v116 = 1;
  sub_140B842D0(&v102, v80);
  if ( v102.m256i_i8[0] == -1 )
  {
    v108.m256i_i64[0] = v102.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v108,
      (unsigned int)&off_141789020,
      (__int64)&off_141789A88);
  }
  v108 = v102;
  v116 = 0;
  sub_140307860(&v102, &v98, &v109, &v108);
  if ( v102.m256i_i8[0] != -1 )
    sub_1400104F0(&v102);
  nullsub_1(v16);
  v17 = (void *)sub_140001650(11, 1);
  if ( !v17 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v17, "modelsCache", 11);
  v109.m256i_i64[0] = 11;
  v109.m256i_i64[1] = (__int64)v17;
  v109.m256i_i64[2] = 11;
  v115 = 1;
  sub_140B842D0(&v102, v89);
  if ( v102.m256i_i8[0] == -1 )
  {
    v108.m256i_i64[0] = v102.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v108,
      (unsigned int)&off_141789020,
      (__int64)&off_141789A88);
  }
  v108 = v102;
  v115 = 0;
  sub_140307860(&v102, &v98, &v109, &v108);
  if ( v102.m256i_i8[0] != -1 )
    sub_1400104F0(&v102);
  nullsub_1(v18);
  v19 = (void *)sub_140001650(15, 1);
  if ( !v19 )
    sub_1416C2D4B(1, 15);
  qmemcpy(v19, "fieldComparison", 15);
  v85[0] = 15;
  v85[1] = v19;
  v85[2] = 15;
  v20 = 0;
  v21 = &unk_14178A1F2;
  if ( !v84 )
    v21 = &unk_14178A1E3;
  LOBYTE(v20) = v84 == 0;
  v22 = 4 * v20 + 11;
  v23 = &v83;
  if ( !v84 )
    v23 = &v81;
  v85[3] = v19;
  if ( v92 && v82 | v84 )
  {
    sub_1409D55C0(&v102, &v91, v23);
    sub_1403139F0(&v95, &v102);
    sub_1409D55C0(&v102, v23, &v91);
    sub_1403139F0(&v86, &v102);
    *(_QWORD *)&v100 = 0;
    v101 = 0;
    nullsub_1(v36);
    v37 = sub_140001650(6, 1);
    if ( !v37 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v37 + 4) = 29557;
    *(_DWORD *)v37 = 1952543859;
    v109.m256i_i64[0] = 6;
    v109.m256i_i64[1] = v37;
    v109.m256i_i64[2] = 6;
    v39 = v97;
    v40 = 2LL * (v97 == 0) + 8;
    nullsub_1(v38);
    v107 = sub_140001650(v40, 1);
    if ( !v107 )
      sub_1416C2D4B(1, v40);
    v41 = &unk_14178A218;
    if ( !v39 )
      v41 = &unk_14178A20E;
    v42 = v107;
    sub_141684120(v107, v41, v40);
    v102.m256i_i8[0] = 3;
    v102.m256i_i64[1] = v40;
    v102.m256i_i64[2] = v42;
    v102.m256i_i64[3] = v40;
    sub_140307860(&v108, &v100, &v109, &v102);
    if ( v108.m256i_i8[0] != -1 )
      sub_1400104F0(&v108);
    nullsub_1(v43);
    v44 = sub_140001650(6, 1);
    if ( !v44 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v44 + 4) = 25955;
    *(_DWORD *)v44 = 1920298867;
    v109.m256i_i64[0] = 6;
    v109.m256i_i64[1] = v44;
    v109.m256i_i64[2] = 6;
    nullsub_1(v45);
    v46 = sub_140001650(v22, 1);
    v107 = v46;
    if ( !v46 )
      sub_1416C2D4B(1, v22);
    v47 = v46;
    sub_141684120(v46, v21, v22);
    v102.m256i_i8[0] = 3;
    v102.m256i_i64[1] = v22;
    v102.m256i_i64[2] = v47;
    v102.m256i_i64[3] = v22;
    sub_140307860(&v108, &v100, &v109, &v102);
    if ( v108.m256i_i8[0] != -1 )
      sub_1400104F0(&v108);
    nullsub_1(v48);
    v49 = (void *)sub_140001650(17, 1);
    if ( !v49 )
      sub_1416C2D4B(1, 17);
    qmemcpy(v49, "missingFromRouter", 17);
    v109.m256i_i64[0] = 17;
    v109.m256i_i64[1] = (__int64)v49;
    v109.m256i_i64[2] = 17;
    v114 = 1;
    sub_140467F40(&v102, &v95);
    if ( v102.m256i_i8[0] == -1 )
    {
      v108.m256i_i64[0] = v102.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_10,
        43,
        (unsigned int)&v108,
        (unsigned int)&off_141789020,
        (__int64)&off_14178A220);
    }
    v108 = v102;
    v114 = 0;
    sub_140307860(&v102, &v100, &v109, &v108);
    if ( v102.m256i_i8[0] != -1 )
      sub_1400104F0(&v102);
    nullsub_1(v50);
    v51 = (void *)sub_140001650(13, 1);
    if ( !v51 )
      sub_1416C2D4B(1, 13);
    qmemcpy(v51, "extraInRouter", 13);
    v109.m256i_i64[0] = 13;
    v109.m256i_i64[1] = (__int64)v51;
    v109.m256i_i64[2] = 13;
    v113 = 1;
    sub_140467F40(&v102, &v86);
    if ( v102.m256i_i8[0] == -1 )
    {
      v108.m256i_i64[0] = v102.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_10,
        43,
        (unsigned int)&v108,
        (unsigned int)&off_141789020,
        (__int64)&off_14178A220);
    }
    v108 = v102;
    v113 = 0;
    sub_140307860(&v102, &v100, &v109, &v108);
    if ( v102.m256i_i8[0] != -1 )
      sub_1400104F0(&v102);
    *(_OWORD *)&v102.m256i_u64[1] = v100;
    v102.m256i_i64[3] = v101;
    v102.m256i_i8[0] = 5;
    v52 = v88;
    if ( v88 )
    {
      v53 = (_QWORD *)(v87 + 8);
      do
      {
        v54 = *(v53 - 1);
        if ( v54 )
          sub_140001660(*v53, v54, 1);
        v53 += 3;
        --v52;
      }
      while ( v52 );
    }
    if ( v86 )
      sub_140001660(v87, 24 * v86, 8);
    v55 = v97;
    if ( v97 )
    {
      v56 = (_QWORD *)(v96 + 8);
      do
      {
        v57 = *(v56 - 1);
        if ( v57 )
          sub_140001660(*v56, v57, 1);
        v56 += 3;
        --v55;
      }
      while ( v55 );
    }
    if ( v95 )
      sub_140001660(v96, 24 * v95, 8);
  }
  else
  {
    *(_QWORD *)&v100 = 0;
    v101 = 0;
    nullsub_1(v20);
    v24 = sub_140001650(6, 1);
    if ( !v24 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v24 + 4) = 29557;
    *(_DWORD *)v24 = 1952543859;
    v109.m256i_i64[0] = 6;
    v109.m256i_i64[1] = v24;
    v109.m256i_i64[2] = 6;
    nullsub_1(v25);
    v26 = (void *)sub_140001650(11, 1);
    v107 = (__int64)v26;
    if ( !v26 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v26, "unavailable", 11);
    v102.m256i_i8[0] = 3;
    v102.m256i_i64[1] = 11;
    v102.m256i_i64[2] = (__int64)v26;
    v102.m256i_i64[3] = 11;
    sub_140307860(&v108, &v100, &v109, &v102);
    if ( v108.m256i_i8[0] != -1 )
      sub_1400104F0(&v108);
    nullsub_1(v27);
    v28 = sub_140001650(6, 1);
    if ( !v28 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v28 + 4) = 25955;
    *(_DWORD *)v28 = 1920298867;
    v109.m256i_i64[0] = 6;
    v109.m256i_i64[1] = v28;
    v109.m256i_i64[2] = 6;
    nullsub_1(v29);
    v30 = sub_140001650(v22, 1);
    v107 = v30;
    if ( !v30 )
      sub_1416C2D4B(1, v22);
    v31 = v30;
    sub_141684120(v30, v21, v22);
    v102.m256i_i8[0] = 3;
    v102.m256i_i64[1] = v22;
    v102.m256i_i64[2] = v31;
    v102.m256i_i64[3] = v22;
    sub_140307860(&v108, &v100, &v109, &v102);
    if ( v108.m256i_i8[0] != -1 )
      sub_1400104F0(&v108);
    nullsub_1(v32);
    v33 = (void *)sub_140001650(17, 1);
    if ( !v33 )
      sub_1416C2D4B(1, 17);
    qmemcpy(v33, "missingFromRouter", 17);
    v109.m256i_i64[0] = 17;
    v109.m256i_i64[1] = (__int64)v33;
    v109.m256i_i64[2] = 17;
    v102.m256i_i64[1] = 0;
    *(_OWORD *)&v102.m256i_u64[2] = 8u;
    v102.m256i_i8[0] = 4;
    sub_140307860(&v108, &v100, &v109, &v102);
    if ( v108.m256i_i8[0] != -1 )
      sub_1400104F0(&v108);
    nullsub_1(v34);
    v35 = (void *)sub_140001650(13, 1);
    if ( !v35 )
      sub_1416C2D4B(1, 13);
    qmemcpy(v35, "extraInRouter", 13);
    v109.m256i_i64[0] = 13;
    v109.m256i_i64[1] = (__int64)v35;
    v109.m256i_i64[2] = 13;
    v102.m256i_i64[1] = 0;
    *(_OWORD *)&v102.m256i_u64[2] = 8u;
    v102.m256i_i8[0] = 4;
    sub_140307860(&v108, &v100, &v109, &v102);
    if ( v108.m256i_i8[0] != -1 )
      sub_1400104F0(&v108);
    *(_OWORD *)&v102.m256i_u64[1] = v100;
    v102.m256i_i64[3] = v101;
    v102.m256i_i8[0] = 5;
  }
  v112 = 1;
  sub_140B842D0(&v108, &v102);
  if ( v108.m256i_i8[0] == -1 )
  {
    v109.m256i_i64[0] = v108.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v109,
      (unsigned int)&off_141789020,
      (__int64)&off_141789A88);
  }
  v109 = v108;
  v112 = 0;
  sub_140307860(&v108, &v98, v85, &v109);
  if ( v108.m256i_i8[0] != -1 )
    sub_1400104F0(&v108);
  sub_1400104F0(&v102);
  *(_QWORD *)(a1 + 24) = v99;
  *(_OWORD *)(a1 + 8) = v98;
  *(_BYTE *)a1 = 5;
  sub_1400104F0(v89);
  if ( (_QWORD)v91 )
  {
    v58 = v92;
    v102.m256i_i64[1] = 0;
    *(_OWORD *)&v102.m256i_u64[2] = v91;
    v104 = 0;
    v105 = v91;
    v59 = 1;
  }
  else
  {
    v59 = 0;
    v58 = 0;
  }
  v102.m256i_i64[0] = v59;
  v103 = v59;
  v106 = v58;
  sub_140308850(&v108, &v102);
  for ( i = v108.m256i_i64[0]; v108.m256i_i64[0]; i = v108.m256i_i64[0] )
  {
    v61 = *(_QWORD *)(i + 24 * v108.m256i_i64[2] + 8);
    if ( v61 )
      sub_140001660(*(_QWORD *)(i + 24 * v108.m256i_i64[2] + 16), v61, 1);
    sub_140308850(&v108, &v102);
  }
  if ( (_QWORD)v93 )
  {
    v62 = v94;
    v102.m256i_i64[1] = 0;
    *(_OWORD *)&v102.m256i_u64[2] = v93;
    v104 = 0;
    v105 = v93;
    v63 = 1;
  }
  else
  {
    v63 = 0;
    v62 = 0;
  }
  v102.m256i_i64[0] = v63;
  v103 = v63;
  v106 = v62;
  sub_140308850(&v108, &v102);
  for ( j = v108.m256i_i64[0]; v108.m256i_i64[0]; j = v108.m256i_i64[0] )
  {
    v65 = *(_QWORD *)(j + 24 * v108.m256i_i64[2] + 8);
    if ( v65 )
      sub_140001660(*(_QWORD *)(j + 24 * v108.m256i_i64[2] + 16), v65, 1);
    sub_140308850(&v108, &v102);
  }
  sub_1400104F0(v80);
  if ( (_QWORD)v81 )
  {
    v66 = v82;
    v102.m256i_i64[1] = 0;
    *(_OWORD *)&v102.m256i_u64[2] = v81;
    v104 = 0;
    v105 = v81;
    v67 = 1;
  }
  else
  {
    v67 = 0;
    v66 = 0;
  }
  v102.m256i_i64[0] = v67;
  v103 = v67;
  v106 = v66;
  sub_140308850(v89, &v102);
  for ( k = v89[0]; v89[0]; k = v89[0] )
  {
    v69 = *(_QWORD *)(k + 24 * v90 + 8);
    if ( v69 )
      sub_140001660(*(_QWORD *)(k + 24 * v90 + 16), v69, 1);
    sub_140308850(v89, &v102);
  }
  if ( (_QWORD)v83 )
  {
    v70 = v84;
    v102.m256i_i64[1] = 0;
    *(_OWORD *)&v102.m256i_u64[2] = v83;
    v104 = 0;
    v105 = v83;
    v71 = 1;
  }
  else
  {
    v71 = 0;
    v70 = 0;
  }
  v102.m256i_i64[0] = v71;
  v103 = v71;
  v106 = v70;
  sub_140308850(v89, &v102);
  for ( result = v89[0]; v89[0]; result = v89[0] )
  {
    v73 = *(_QWORD *)(result + 24 * v90 + 8);
    if ( v73 )
      sub_140001660(*(_QWORD *)(result + 24 * v90 + 16), v73, 1);
    sub_140308850(v89, &v102);
  }
  if ( v74 )
    result = sub_140001660(v6, v74, 1);
  if ( v77 )
    return sub_140001660(v4, v77, 1);
  return result;
}