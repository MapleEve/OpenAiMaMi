// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x140950a30 | successor of pre-update 0x140c28210 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR_PARTIAL"}
double __fastcall sub_140950A30(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int8 v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r12
  char *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rcx
  __int128 *v37; // r12
  void *v38; // r15
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rdx
  __int64 v52; // rcx
  void *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  void *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r13
  __int64 v63; // r12
  void *v64; // rdx
  __int64 v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // rdx
  __int64 v74; // rcx
  void *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  void *v78; // rax
  __int64 v79; // r14
  _QWORD *v80; // r15
  __int64 v81; // rdx
  __int64 v82; // r14
  _QWORD *v83; // r15
  __int64 v84; // rdx
  double result; // xmm0_8
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 i; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 j; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 k; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 m; // rax
  __int64 v101; // rdx
  __int64 v102; // [rsp+28h] [rbp-58h] BYREF
  __int64 v103; // [rsp+30h] [rbp-50h]
  __int64 v104; // [rsp+38h] [rbp-48h]
  __int64 v105; // [rsp+48h] [rbp-38h] BYREF
  __int64 v106; // [rsp+50h] [rbp-30h]
  __int64 v107; // [rsp+58h] [rbp-28h]
  _BYTE v108[32]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v109; // [rsp+88h] [rbp+8h] BYREF
  __int64 v110; // [rsp+98h] [rbp+18h]
  __int128 v111; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v112; // [rsp+B0h] [rbp+30h]
  _QWORD v113[3]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v114; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v115; // [rsp+D8h] [rbp+58h]
  __int64 v116; // [rsp+E0h] [rbp+60h]
  _QWORD v117[2]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v118; // [rsp+F8h] [rbp+78h]
  __int128 v119; // [rsp+108h] [rbp+88h] BYREF
  __int64 v120; // [rsp+118h] [rbp+98h]
  __int128 v121; // [rsp+120h] [rbp+A0h]
  __int64 v122; // [rsp+130h] [rbp+B0h]
  __int64 v123; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v124; // [rsp+140h] [rbp+C0h]
  __int64 v125; // [rsp+148h] [rbp+C8h]
  __int128 v126; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v127; // [rsp+160h] [rbp+E0h]
  __int64 v128; // [rsp+168h] [rbp+E8h]
  __int128 v129; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v130; // [rsp+180h] [rbp+100h]
  __m256i v131; // [rsp+188h] [rbp+108h] BYREF
  __int64 v132; // [rsp+1A8h] [rbp+128h]
  __int64 v133; // [rsp+1B0h] [rbp+130h]
  __int128 v134; // [rsp+1B8h] [rbp+138h]
  __int64 v135; // [rsp+1C8h] [rbp+148h]
  __int64 v136; // [rsp+228h] [rbp+1A8h]
  __m256i v137; // [rsp+230h] [rbp+1B0h] BYREF
  __m256i v138; // [rsp+250h] [rbp+1D0h] BYREF
  char v139; // [rsp+278h] [rbp+1F8h]
  char v140; // [rsp+279h] [rbp+1F9h]
  char v141; // [rsp+27Ah] [rbp+1FAh]
  char v142; // [rsp+27Bh] [rbp+1FBh]
  char v143; // [rsp+27Ch] [rbp+1FCh]
  char v144; // [rsp+27Dh] [rbp+1FDh]
  char v145; // [rsp+27Eh] [rbp+1FEh]
  char v146; // [rsp+27Fh] [rbp+1FFh]
  __int64 v147; // [rsp+280h] [rbp+200h]

  v147 = -2;
  sub_1416B18A0(
    (unsigned int)&v105,
    *(_QWORD *)(a2 + 776),
    *(_QWORD *)(a2 + 784),
    (unsigned int)"codex_router_catalog.jsonmodels_cache.json",
    25);
  sub_1416B18A0((unsigned int)&v102, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (unsigned int)"models_cache.json", 17);
  v4 = v106;
  v5 = v107;
  sub_1409678C0((__int64)v108, v106, v107);
  v6 = v103;
  sub_1409678C0((__int64)v117, v103, v104);
  *(_QWORD *)&v126 = 0;
  v127 = 0;
  nullsub_1(v8, v7);
  v9 = (void *)sub_140001650(10, 1);
  if ( !v9 )
    sub_14196B2DB(1, 10);
  qmemcpy(v9, "pathExists", 10);
  v138.m256i_i64[0] = 10;
  v138.m256i_i64[1] = (__int64)v9;
  v138.m256i_i64[2] = 10;
  v140 = 1;
  sub_1416C49D0(&v131, v4, v5);
  if ( v131.m256i_i32[0] == 2 )
  {
    if ( (v131.m256i_i8[8] & 3u) - 2 >= 2 && (v131.m256i_i8[8] & 3) != 0 )
    {
      --v131.m256i_i64[1];
      v131.m256i_i8[0] = 3;
      v140 = 1;
      sub_1416EBAD0(&v131.m256i_u64[1]);
    }
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  v131.m256i_i8[0] = 1;
  v131.m256i_i8[1] = v10;
  v140 = 0;
  sub_140A68320(&v137, &v126, &v138, &v131);
  if ( v137.m256i_i8[0] != -1 )
    sub_140032FF0(&v137);
  nullsub_1(v12, v11);
  v13 = sub_140001650(5, 1);
  if ( !v13 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v13 + 4) = 115;
  *(_DWORD *)v13 = 1702132066;
  v138.m256i_i64[0] = 5;
  v138.m256i_i64[1] = v13;
  v138.m256i_i64[2] = 5;
  v139 = 1;
  sub_1416C49D0(&v131, v4, v5);
  if ( v131.m256i_i32[0] == 2 )
  {
    v14 = v131.m256i_i64[1];
    if ( (v131.m256i_i8[8] & 3u) - 2 >= 2 && (v131.m256i_i8[8] & 3) != 0 )
    {
      --v131.m256i_i64[1];
      v131.m256i_i8[0] = 3;
      v139 = 1;
      v14 = sub_1416EBAD0(&v131.m256i_u64[1]);
    }
    v15 = 0;
  }
  else
  {
    v14 = *((_QWORD *)&v134 + 1);
    v15 = 2;
  }
  v131.m256i_i8[0] = v15;
  v131.m256i_i64[1] = 0;
  v131.m256i_i64[2] = v14;
  v139 = 0;
  sub_140A68320(&v137, &v126, &v138, &v131);
  if ( v137.m256i_i8[0] != -1 )
    sub_140032FF0(&v137);
  nullsub_1(v17, v16);
  v18 = (void *)sub_140001650(13, 1);
  if ( !v18 )
    sub_14196B2DB(1, 13);
  qmemcpy(v18, "routerCatalog", 13);
  v138.m256i_i64[0] = 13;
  v138.m256i_i64[1] = (__int64)v18;
  v138.m256i_i64[2] = 13;
  v146 = 1;
  sub_140B73E90(&v131, v108);
  if ( v131.m256i_i8[0] == -1 )
  {
    v137.m256i_i64[0] = v131.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v137,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5BEC8);
  }
  v137 = v131;
  v146 = 0;
  sub_140A68320(&v131, &v126, &v138, &v137);
  if ( v131.m256i_i8[0] != -1 )
    sub_140032FF0(&v131);
  nullsub_1(v20, v19);
  v21 = (void *)sub_140001650(11, 1);
  if ( !v21 )
    sub_14196B2DB(1, 11);
  qmemcpy(v21, "modelsCache", 11);
  v138.m256i_i64[0] = 11;
  v138.m256i_i64[1] = (__int64)v21;
  v138.m256i_i64[2] = 11;
  v145 = 1;
  sub_140B73E90(&v131, v117);
  if ( v131.m256i_i8[0] == -1 )
  {
    v137.m256i_i64[0] = v131.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v137,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5BEC8);
  }
  v137 = v131;
  v145 = 0;
  sub_140A68320(&v131, &v126, &v138, &v137);
  if ( v131.m256i_i8[0] != -1 )
    sub_140032FF0(&v131);
  nullsub_1(v23, v22);
  v24 = (void *)sub_140001650(15, 1);
  if ( !v24 )
    sub_14196B2DB(1, 15);
  qmemcpy(v24, "officialCatalog", 15);
  v138.m256i_i64[0] = 15;
  v138.m256i_i64[1] = (__int64)v24;
  v138.m256i_i64[2] = 15;
  if ( *(_WORD *)(a2 + 1368) == 0xFFFE )
  {
    v131.m256i_i8[0] = 0;
  }
  else
  {
    v144 = 1;
    sub_1401C0DA0(&v131, a2 + 1344);
    if ( v131.m256i_i8[0] == -1 )
    {
      v137.m256i_i64[0] = v131.m256i_i64[1];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v137,
        (unsigned int)&off_141A5A840,
        (__int64)&off_141A5BEC8);
    }
  }
  v137 = v131;
  v144 = 0;
  sub_140A68320(&v131, &v126, &v138, &v137);
  if ( v131.m256i_i8[0] != -1 )
    sub_140032FF0(&v131);
  nullsub_1(v26, v25);
  v27 = (void *)sub_140001650(11, 1);
  if ( !v27 )
    sub_14196B2DB(1, 11);
  qmemcpy(v27, "catalogMode", 11);
  v138.m256i_i64[0] = 11;
  v138.m256i_i64[1] = (__int64)v27;
  v138.m256i_i64[2] = 11;
  v29 = *(unsigned __int8 *)(a2 + 1398);
  nullsub_1(0x4D676F6C61746163LL, v28);
  v30 = sub_140001650(v29 + 16, 1);
  v128 = v30;
  if ( !v30 )
    sub_14196B2DB(1, v29 + 16);
  v31 = v30;
  v32 = "native-discoverystatic-relay-only";
  if ( (_BYTE)v29 )
    v32 = "static-relay-only";
  sub_1419234B0(v30, v32, v29 + 16);
  v131.m256i_i8[0] = 3;
  v131.m256i_i64[1] = v29 + 16;
  v131.m256i_i64[2] = v31;
  v131.m256i_i64[3] = v29 + 16;
  sub_140A68320(&v137, &v126, &v138, &v131);
  if ( v137.m256i_i8[0] != -1 )
    sub_140032FF0(&v137);
  nullsub_1(v34, v33);
  v35 = (void *)sub_140001650(15, 1);
  if ( !v35 )
    sub_14196B2DB(1, 15);
  qmemcpy(v35, "fieldComparison", 15);
  v113[0] = 15;
  v113[1] = v35;
  v113[2] = 15;
  v36 = 0;
  v37 = &v111;
  if ( !v112 )
    v37 = &v109;
  v38 = &unk_141A5C692;
  if ( !v112 )
    v38 = &unk_141A5C683;
  LOBYTE(v36) = v112 == 0;
  v39 = 4 * v36 + 11;
  v128 = (__int64)v35;
  if ( v120 && v110 | v112 )
  {
    sub_1408755E0(&v131, &v119, v37);
    sub_14020AEF0(&v123, &v131);
    sub_1408755E0(&v131, v37, &v119);
    sub_14020AEF0(&v114, &v131);
    *(_QWORD *)&v129 = 0;
    v130 = 0;
    nullsub_1(v58, v57);
    v59 = sub_140001650(6, 1);
    if ( !v59 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v59 + 4) = 29557;
    *(_DWORD *)v59 = 1952543859;
    v138.m256i_i64[0] = 6;
    v138.m256i_i64[1] = v59;
    v138.m256i_i64[2] = 6;
    v62 = v125;
    v63 = 2LL * (v125 == 0) + 8;
    nullsub_1(v61, v60);
    v136 = sub_140001650(v63, 1);
    if ( !v136 )
      sub_14196B2DB(1, v63);
    v64 = &unk_141A5C6B8;
    if ( !v62 )
      v64 = &unk_141A5C6AE;
    v65 = v136;
    sub_1419234B0(v136, v64, v63);
    v131.m256i_i8[0] = 3;
    v131.m256i_i64[1] = v63;
    v131.m256i_i64[2] = v65;
    v131.m256i_i64[3] = v63;
    sub_140A68320(&v137, &v129, &v138, &v131);
    if ( v137.m256i_i8[0] != -1 )
      sub_140032FF0(&v137);
    nullsub_1(v67, v66);
    v68 = sub_140001650(6, 1);
    if ( !v68 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v68 + 4) = 25955;
    *(_DWORD *)v68 = 1920298867;
    v138.m256i_i64[0] = 6;
    v138.m256i_i64[1] = v68;
    v138.m256i_i64[2] = 6;
    nullsub_1(v70, v69);
    v71 = sub_140001650(v39, 1);
    v136 = v71;
    if ( !v71 )
      sub_14196B2DB(1, v39);
    v72 = v71;
    sub_1419234B0(v71, v38, v39);
    v131.m256i_i8[0] = 3;
    v131.m256i_i64[1] = v39;
    v131.m256i_i64[2] = v72;
    v131.m256i_i64[3] = v39;
    sub_140A68320(&v137, &v129, &v138, &v131);
    if ( v137.m256i_i8[0] != -1 )
      sub_140032FF0(&v137);
    nullsub_1(v74, v73);
    v75 = (void *)sub_140001650(17, 1);
    if ( !v75 )
      sub_14196B2DB(1, 17);
    qmemcpy(v75, "missingFromRouter", 17);
    v138.m256i_i64[0] = 17;
    v138.m256i_i64[1] = (__int64)v75;
    v138.m256i_i64[2] = 17;
    v143 = 1;
    sub_1407B3FB0(&v131, &v123);
    if ( v131.m256i_i8[0] == -1 )
    {
      v137.m256i_i64[0] = v131.m256i_i64[1];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v137,
        (unsigned int)&off_141A5A840,
        (__int64)&off_141A5C6C0);
    }
    v137 = v131;
    v143 = 0;
    sub_140A68320(&v131, &v129, &v138, &v137);
    if ( v131.m256i_i8[0] != -1 )
      sub_140032FF0(&v131);
    nullsub_1(v77, v76);
    v78 = (void *)sub_140001650(13, 1);
    if ( !v78 )
      sub_14196B2DB(1, 13);
    qmemcpy(v78, "extraInRouter", 13);
    v138.m256i_i64[0] = 13;
    v138.m256i_i64[1] = (__int64)v78;
    v138.m256i_i64[2] = 13;
    v142 = 1;
    sub_1407B3FB0(&v131, &v114);
    if ( v131.m256i_i8[0] == -1 )
    {
      v137.m256i_i64[0] = v131.m256i_i64[1];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v137,
        (unsigned int)&off_141A5A840,
        (__int64)&off_141A5C6C0);
    }
    v137 = v131;
    v142 = 0;
    sub_140A68320(&v131, &v129, &v138, &v137);
    if ( v131.m256i_i8[0] != -1 )
      sub_140032FF0(&v131);
    *(_OWORD *)&v131.m256i_u64[1] = v129;
    v131.m256i_i64[3] = v130;
    v131.m256i_i8[0] = 5;
    v79 = v116;
    if ( v116 )
    {
      v80 = (_QWORD *)(v115 + 8);
      do
      {
        v81 = *(v80 - 1);
        if ( v81 )
          sub_140001660(*v80, v81, 1);
        v80 += 3;
        --v79;
      }
      while ( v79 );
    }
    if ( v114 )
      sub_140001660(v115, 24 * v114, 8);
    v82 = v125;
    if ( v125 )
    {
      v83 = (_QWORD *)(v124 + 8);
      do
      {
        v84 = *(v83 - 1);
        if ( v84 )
          sub_140001660(*v83, v84, 1);
        v83 += 3;
        --v82;
      }
      while ( v82 );
    }
    if ( v123 )
      sub_140001660(v124, 24 * v123, 8);
  }
  else
  {
    *(_QWORD *)&v129 = 0;
    v130 = 0;
    nullsub_1(v36, &v119);
    v40 = sub_140001650(6, 1);
    if ( !v40 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v40 + 4) = 29557;
    *(_DWORD *)v40 = 1952543859;
    v138.m256i_i64[0] = 6;
    v138.m256i_i64[1] = v40;
    v138.m256i_i64[2] = 6;
    nullsub_1(v42, v41);
    v43 = (void *)sub_140001650(11, 1);
    v136 = (__int64)v43;
    if ( !v43 )
      sub_14196B2DB(1, 11);
    qmemcpy(v43, "unavailable", 11);
    v131.m256i_i8[0] = 3;
    v131.m256i_i64[1] = 11;
    v131.m256i_i64[2] = (__int64)v43;
    v131.m256i_i64[3] = 11;
    sub_140A68320(&v137, &v129, &v138, &v131);
    if ( v137.m256i_i8[0] != -1 )
      sub_140032FF0(&v137);
    nullsub_1(v45, v44);
    v46 = sub_140001650(6, 1);
    if ( !v46 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v46 + 4) = 25955;
    *(_DWORD *)v46 = 1920298867;
    v138.m256i_i64[0] = 6;
    v138.m256i_i64[1] = v46;
    v138.m256i_i64[2] = 6;
    nullsub_1(v48, v47);
    v49 = sub_140001650(v39, 1);
    v136 = v49;
    if ( !v49 )
      sub_14196B2DB(1, v39);
    v50 = v49;
    sub_1419234B0(v49, v38, v39);
    v131.m256i_i8[0] = 3;
    v131.m256i_i64[1] = v39;
    v131.m256i_i64[2] = v50;
    v131.m256i_i64[3] = v39;
    sub_140A68320(&v137, &v129, &v138, &v131);
    if ( v137.m256i_i8[0] != -1 )
      sub_140032FF0(&v137);
    nullsub_1(v52, v51);
    v53 = (void *)sub_140001650(17, 1);
    if ( !v53 )
      sub_14196B2DB(1, 17);
    qmemcpy(v53, "missingFromRouter", 17);
    v138.m256i_i64[0] = 17;
    v138.m256i_i64[1] = (__int64)v53;
    v138.m256i_i64[2] = 17;
    v131.m256i_i64[1] = 0;
    *(_OWORD *)&v131.m256i_u64[2] = 8u;
    v131.m256i_i8[0] = 4;
    sub_140A68320(&v137, &v129, &v138, &v131);
    if ( v137.m256i_i8[0] != -1 )
      sub_140032FF0(&v137);
    nullsub_1(v55, v54);
    v56 = (void *)sub_140001650(13, 1);
    if ( !v56 )
      sub_14196B2DB(1, 13);
    qmemcpy(v56, "extraInRouter", 13);
    v138.m256i_i64[0] = 13;
    v138.m256i_i64[1] = (__int64)v56;
    v138.m256i_i64[2] = 13;
    v131.m256i_i64[1] = 0;
    *(_OWORD *)&v131.m256i_u64[2] = 8u;
    v131.m256i_i8[0] = 4;
    sub_140A68320(&v137, &v129, &v138, &v131);
    if ( v137.m256i_i8[0] != -1 )
      sub_140032FF0(&v137);
    *(_OWORD *)&v131.m256i_u64[1] = v129;
    v131.m256i_i64[3] = v130;
    v131.m256i_i8[0] = 5;
  }
  v141 = 1;
  sub_140B73E90(&v137, &v131);
  if ( v137.m256i_i8[0] == -1 )
  {
    v138.m256i_i64[0] = v137.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v138,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5BEC8);
  }
  v138 = v137;
  v141 = 0;
  sub_140A68320(&v137, &v126, v113, &v138);
  if ( v137.m256i_i8[0] != -1 )
    sub_140032FF0(&v137);
  sub_140032FF0(&v131);
  *(_QWORD *)(a1 + 24) = v127;
  result = *(double *)&v126;
  *(_OWORD *)(a1 + 8) = v126;
  *(_BYTE *)a1 = 5;
  sub_140032FF0(v117);
  if ( (_QWORD)v119 )
  {
    v86 = v120;
    v131.m256i_i64[1] = 0;
    *(_OWORD *)&v131.m256i_u64[2] = v119;
    v133 = 0;
    v134 = v119;
    v87 = 1;
  }
  else
  {
    v87 = 0;
    v86 = 0;
  }
  v131.m256i_i64[0] = v87;
  v132 = v87;
  v135 = v86;
  sub_140A6FD50(&v137, &v131);
  for ( i = v137.m256i_i64[0]; v137.m256i_i64[0]; i = v137.m256i_i64[0] )
  {
    v89 = *(_QWORD *)(i + 24 * v137.m256i_i64[2] + 8);
    if ( v89 )
      result = sub_140001660(*(_QWORD *)(i + 24 * v137.m256i_i64[2] + 16), v89, 1);
    sub_140A6FD50(&v137, &v131);
  }
  if ( (_QWORD)v121 )
  {
    v90 = v122;
    v131.m256i_i64[1] = 0;
    *(_OWORD *)&v131.m256i_u64[2] = v121;
    v133 = 0;
    v134 = v121;
    v91 = 1;
  }
  else
  {
    v91 = 0;
    v90 = 0;
  }
  v131.m256i_i64[0] = v91;
  v132 = v91;
  v135 = v90;
  sub_140A6FD50(&v137, &v131);
  for ( j = v137.m256i_i64[0]; v137.m256i_i64[0]; j = v137.m256i_i64[0] )
  {
    v93 = *(_QWORD *)(j + 24 * v137.m256i_i64[2] + 8);
    if ( v93 )
      result = sub_140001660(*(_QWORD *)(j + 24 * v137.m256i_i64[2] + 16), v93, 1);
    sub_140A6FD50(&v137, &v131);
  }
  sub_140032FF0(v108);
  if ( (_QWORD)v109 )
  {
    v94 = v110;
    v131.m256i_i64[1] = 0;
    *(_OWORD *)&v131.m256i_u64[2] = v109;
    v133 = 0;
    v134 = v109;
    v95 = 1;
  }
  else
  {
    v95 = 0;
    v94 = 0;
  }
  v131.m256i_i64[0] = v95;
  v132 = v95;
  v135 = v94;
  sub_140A6FD50(v117, &v131);
  for ( k = v117[0]; v117[0]; k = v117[0] )
  {
    v97 = *(_QWORD *)(k + 24 * v118 + 8);
    if ( v97 )
      result = sub_140001660(*(_QWORD *)(k + 24 * v118 + 16), v97, 1);
    sub_140A6FD50(v117, &v131);
  }
  if ( (_QWORD)v111 )
  {
    v98 = v112;
    v131.m256i_i64[1] = 0;
    *(_OWORD *)&v131.m256i_u64[2] = v111;
    v133 = 0;
    v134 = v111;
    v99 = 1;
  }
  else
  {
    v99 = 0;
    v98 = 0;
  }
  v131.m256i_i64[0] = v99;
  v132 = v99;
  v135 = v98;
  sub_140A6FD50(v117, &v131);
  for ( m = v117[0]; v117[0]; m = v117[0] )
  {
    v101 = *(_QWORD *)(m + 24 * v118 + 8);
    if ( v101 )
      result = sub_140001660(*(_QWORD *)(m + 24 * v118 + 16), v101, 1);
    sub_140A6FD50(v117, &v131);
  }
  if ( v102 )
    result = sub_140001660(v6, v102, 1);
  if ( v105 )
    return sub_140001660(v4, v105, 1);
  return result;
}
