// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140c28210 | name sub_140C28210
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C28210(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r15
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
  void *v21; // rax
  __int64 v22; // r15
  __m128i *v23; // rax
  __int64 v24; // r12
  const __m128i *v25; // rdx
  __int64 v26; // rcx
  __m128i *v27; // rax
  __int64 v28; // rcx
  __int128 *v29; // r12
  const __m128i *v30; // r15
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __m128i *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __m128i *v38; // rax
  __int64 v39; // r12
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // r13
  unsigned __int64 v50; // r12
  const __m128i *v51; // rdx
  __m128i *v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __m128i *v56; // rax
  __int64 v57; // r12
  __int64 v58; // rcx
  void *v59; // rax
  __int64 v60; // rcx
  void *v61; // rax
  __int64 v62; // r14
  __int64 v63; // r15
  _QWORD *v64; // r12
  __int64 v65; // rdx
  __int64 v66; // r14
  _QWORD *v67; // r15
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 i; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 j; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 k; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 result; // rax
  __int64 v84; // rdx
  __int64 v85; // [rsp+30h] [rbp-50h] BYREF
  __int64 v86; // [rsp+38h] [rbp-48h]
  __int64 v87; // [rsp+40h] [rbp-40h]
  __int64 v88; // [rsp+50h] [rbp-30h] BYREF
  __int64 v89; // [rsp+58h] [rbp-28h]
  __int64 v90; // [rsp+60h] [rbp-20h]
  _BYTE v91[32]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v92; // [rsp+90h] [rbp+10h] BYREF
  __int64 v93; // [rsp+A0h] [rbp+20h]
  __int128 v94; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v95; // [rsp+B8h] [rbp+38h]
  __int64 v96; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v97; // [rsp+C8h] [rbp+48h]
  __int64 v98; // [rsp+D0h] [rbp+50h]
  __int64 v99; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v100; // [rsp+E0h] [rbp+60h]
  __int64 v101; // [rsp+E8h] [rbp+68h]
  _QWORD v102[3]; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v103; // [rsp+108h] [rbp+88h]
  _QWORD v104[2]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v105; // [rsp+120h] [rbp+A0h]
  __int128 v106; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v107; // [rsp+140h] [rbp+C0h]
  __int128 v108; // [rsp+148h] [rbp+C8h]
  __int64 v109; // [rsp+158h] [rbp+D8h]
  __int128 v110; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v111; // [rsp+170h] [rbp+F0h]
  __m128i *v112; // [rsp+178h] [rbp+F8h]
  __int128 v113; // [rsp+180h] [rbp+100h] BYREF
  __int64 v114; // [rsp+190h] [rbp+110h]
  __m256i v115; // [rsp+198h] [rbp+118h] BYREF
  __int64 v116; // [rsp+1B8h] [rbp+138h]
  __int64 v117; // [rsp+1C0h] [rbp+140h]
  __int128 v118; // [rsp+1C8h] [rbp+148h]
  __int64 v119; // [rsp+1D8h] [rbp+158h]
  __m128i *v120; // [rsp+238h] [rbp+1B8h]
  __m256i v121; // [rsp+240h] [rbp+1C0h] BYREF
  __m256i v122; // [rsp+260h] [rbp+1E0h] BYREF
  char v123; // [rsp+288h] [rbp+208h]
  char v124; // [rsp+289h] [rbp+209h]
  char v125; // [rsp+28Ah] [rbp+20Ah]
  char v126; // [rsp+28Bh] [rbp+20Bh]
  char v127; // [rsp+28Ch] [rbp+20Ch]
  char v128; // [rsp+28Dh] [rbp+20Dh]
  char v129; // [rsp+28Eh] [rbp+20Eh]
  char v130; // [rsp+28Fh] [rbp+20Fh]
  __int64 v131; // [rsp+290h] [rbp+210h]

  v131 = -2;
  sub_1416828D0(
    (unsigned int)&v88,
    *(_QWORD *)(a2 + 776),
    *(_QWORD *)(a2 + 784),
    (unsigned int)"codex_router_catalog.jsonmodels_cache.json",
    25);
  sub_1416828D0((unsigned int)&v85, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (unsigned int)"models_cache.json", 17);
  v4 = v89;
  v5 = v90;
  sub_140C429D0(v91, v89, v90);
  v6 = v86;
  sub_140C429D0(v104, v86, v87);
  *(_QWORD *)&v110 = 0;
  v111 = 0;
  nullsub_1(v7);
  v8 = (void *)sub_140001650(10, 1);
  if ( !v8 )
    sub_141938D2B(1, 10);
  qmemcpy(v8, "pathExists", 10);
  v122.m256i_i64[0] = 10;
  v122.m256i_i64[1] = (__int64)v8;
  v122.m256i_i64[2] = 10;
  v124 = 1;
  sub_141695A00(&v115, v4, v5);
  if ( v115.m256i_i32[0] == 2 )
  {
    if ( (v115.m256i_i8[8] & 3u) - 2 >= 2 && (v115.m256i_i8[8] & 3) != 0 )
    {
      --v115.m256i_i64[1];
      v115.m256i_i8[0] = 3;
      v124 = 1;
      sub_1416BCB00(&v115.m256i_u64[1]);
    }
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  v115.m256i_i8[0] = 1;
  v115.m256i_i8[1] = v9;
  v124 = 0;
  sub_140E72AA0(&v121, &v110, &v122, &v115);
  if ( v121.m256i_i8[0] != -1 )
    sub_14002F9D0(&v121);
  nullsub_1(v10);
  v11 = sub_140001650(5, 1);
  if ( !v11 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v11 + 4) = 115;
  *(_DWORD *)v11 = 1702132066;
  v122.m256i_i64[0] = 5;
  v122.m256i_i64[1] = v11;
  v122.m256i_i64[2] = 5;
  v123 = 1;
  sub_141695A00(&v115, v4, v5);
  if ( v115.m256i_i32[0] == 2 )
  {
    v12 = v115.m256i_i64[1];
    if ( (v115.m256i_i8[8] & 3u) - 2 >= 2 && (v115.m256i_i8[8] & 3) != 0 )
    {
      --v115.m256i_i64[1];
      v115.m256i_i8[0] = 3;
      v123 = 1;
      v12 = sub_1416BCB00(&v115.m256i_u64[1]);
    }
    v13 = 0;
  }
  else
  {
    v12 = *((_QWORD *)&v118 + 1);
    v13 = 2;
  }
  v115.m256i_i8[0] = v13;
  v115.m256i_i64[1] = 0;
  v115.m256i_i64[2] = v12;
  v123 = 0;
  sub_140E72AA0(&v121, &v110, &v122, &v115);
  if ( v121.m256i_i8[0] != -1 )
    sub_14002F9D0(&v121);
  nullsub_1(v14);
  v15 = (void *)sub_140001650(13, 1);
  if ( !v15 )
    sub_141938D2B(1, 13);
  qmemcpy(v15, "routerCatalog", 13);
  v122.m256i_i64[0] = 13;
  v122.m256i_i64[1] = (__int64)v15;
  v122.m256i_i64[2] = 13;
  v130 = 1;
  sub_140412420(&v115, v91);
  if ( v115.m256i_i8[0] == -1 )
  {
    v121.m256i_i64[0] = v115.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v121,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3CF48);
  }
  v121 = v115;
  v130 = 0;
  sub_140E72AA0(&v115, &v110, &v122, &v121);
  if ( v115.m256i_i8[0] != -1 )
    sub_14002F9D0(&v115);
  nullsub_1(v16);
  v17 = (void *)sub_140001650(11, 1);
  if ( !v17 )
    sub_141938D2B(1, 11);
  qmemcpy(v17, "modelsCache", 11);
  v122.m256i_i64[0] = 11;
  v122.m256i_i64[1] = (__int64)v17;
  v122.m256i_i64[2] = 11;
  v129 = 1;
  sub_140412420(&v115, v104);
  if ( v115.m256i_i8[0] == -1 )
  {
    v121.m256i_i64[0] = v115.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v121,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3CF48);
  }
  v121 = v115;
  v129 = 0;
  sub_140E72AA0(&v115, &v110, &v122, &v121);
  if ( v115.m256i_i8[0] != -1 )
    sub_14002F9D0(&v115);
  nullsub_1(v18);
  v19 = (void *)sub_140001650(15, 1);
  if ( !v19 )
    sub_141938D2B(1, 15);
  qmemcpy(v19, "officialCatalog", 15);
  v122.m256i_i64[0] = 15;
  v122.m256i_i64[1] = (__int64)v19;
  v122.m256i_i64[2] = 15;
  if ( *(_WORD *)(a2 + 1368) == 0xFFFE )
  {
    v115.m256i_i8[0] = 0;
  }
  else
  {
    v128 = 1;
    sub_140D278A0(&v115, a2 + 1344);
    if ( v115.m256i_i8[0] == -1 )
    {
      v121.m256i_i64[0] = v115.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v121,
        (unsigned int)&off_141A3BB28,
        (__int64)&off_141A3CF48);
    }
  }
  v121 = v115;
  v128 = 0;
  sub_140E72AA0(&v115, &v110, &v122, &v121);
  if ( v115.m256i_i8[0] != -1 )
    sub_14002F9D0(&v115);
  nullsub_1(v20);
  v21 = (void *)sub_140001650(11, 1);
  if ( !v21 )
    sub_141938D2B(1, 11);
  qmemcpy(v21, "catalogMode", 11);
  v122.m256i_i64[0] = 11;
  v122.m256i_i64[1] = (__int64)v21;
  v122.m256i_i64[2] = 11;
  v22 = *(unsigned __int8 *)(a2 + 1398);
  nullsub_1(0x4D676F6C61746163LL);
  v23 = (__m128i *)sub_140001650(v22 + 16, 1);
  v112 = v23;
  if ( !v23 )
    sub_141938D2B(1, v22 + 16);
  v24 = (__int64)v23;
  v25 = (const __m128i *)"native-discoverystatic-relay-only";
  if ( (_BYTE)v22 )
    v25 = (const __m128i *)"static-relay-only";
  sub_1418F44E0(v23, v25, v22 + 16);
  v115.m256i_i8[0] = 3;
  v115.m256i_i64[1] = v22 + 16;
  v115.m256i_i64[2] = v24;
  v115.m256i_i64[3] = v22 + 16;
  sub_140E72AA0(&v121, &v110, &v122, &v115);
  if ( v121.m256i_i8[0] != -1 )
    sub_14002F9D0(&v121);
  nullsub_1(v26);
  v27 = (__m128i *)sub_140001650(15, 1);
  if ( !v27 )
    sub_141938D2B(1, 15);
  qmemcpy(v27, "fieldComparison", 15);
  v102[0] = 15;
  v112 = v27;
  v102[1] = v27;
  v102[2] = 15;
  v28 = 0;
  v29 = &v94;
  if ( !v95 )
    v29 = &v92;
  v30 = (const __m128i *)&aAllroutermodel[15];
  if ( !v95 )
    v30 = (const __m128i *)aAllroutermodel;
  LOBYTE(v28) = v95 == 0;
  v31 = 4 * v28 + 11;
  if ( v107 && v93 | v95 )
  {
    sub_140EC6440(&v115, &v106, v29);
    sub_1403D45E0(&v99, &v115);
    v103 = a1;
    sub_140EC6440(&v115, v29, &v106);
    sub_1403D45E0(&v96, &v115);
    v44 = v4;
    *(_QWORD *)&v113 = 0;
    v114 = 0;
    nullsub_1(v45);
    v46 = sub_140001650(6, 1);
    if ( !v46 )
      sub_141938D2B(1, 6);
    v48 = v6;
    *(_WORD *)(v46 + 4) = 29557;
    *(_DWORD *)v46 = 1952543859;
    v122.m256i_i64[0] = 6;
    v122.m256i_i64[1] = v46;
    v122.m256i_i64[2] = 6;
    v49 = v101;
    v50 = 2LL * (v101 == 0) + 8;
    nullsub_1(v47);
    v120 = (__m128i *)sub_140001650(v50, 1);
    if ( !v120 )
      sub_141938D2B(1, v50);
    v51 = (const __m128i *)&unk_141A3D746;
    if ( !v49 )
      v51 = (const __m128i *)&unk_141A3D73C;
    v52 = v120;
    sub_1418F44E0(v120, v51, v50);
    v115.m256i_i8[0] = 3;
    v115.m256i_i64[1] = v50;
    v115.m256i_i64[2] = (__int64)v52;
    v115.m256i_i64[3] = v50;
    sub_140E72AA0(&v121, &v113, &v122, &v115);
    v6 = v48;
    v4 = v44;
    a1 = v103;
    if ( v121.m256i_i8[0] != -1 )
      sub_14002F9D0(&v121);
    nullsub_1(v53);
    v54 = sub_140001650(6, 1);
    if ( !v54 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v54 + 4) = 25955;
    *(_DWORD *)v54 = 1920298867;
    v122.m256i_i64[0] = 6;
    v122.m256i_i64[1] = v54;
    v122.m256i_i64[2] = 6;
    nullsub_1(v55);
    v56 = (__m128i *)sub_140001650(v31, 1);
    v120 = v56;
    if ( !v56 )
      sub_141938D2B(1, v31);
    v57 = (__int64)v56;
    sub_1418F44E0(v56, v30, v31);
    v115.m256i_i8[0] = 3;
    v115.m256i_i64[1] = v31;
    v115.m256i_i64[2] = v57;
    v115.m256i_i64[3] = v31;
    sub_140E72AA0(&v121, &v113, &v122, &v115);
    if ( v121.m256i_i8[0] != -1 )
      sub_14002F9D0(&v121);
    nullsub_1(v58);
    v59 = (void *)sub_140001650(17, 1);
    if ( !v59 )
      sub_141938D2B(1, 17);
    qmemcpy(v59, "missingFromRouter", 17);
    v122.m256i_i64[0] = 17;
    v122.m256i_i64[1] = (__int64)v59;
    v122.m256i_i64[2] = 17;
    v127 = 1;
    sub_140C100F0(&v115, &v99);
    if ( v115.m256i_i8[0] == -1 )
    {
      v121.m256i_i64[0] = v115.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v121,
        (unsigned int)&off_141A3BB28,
        (__int64)&off_141A3D750);
    }
    v121 = v115;
    v127 = 0;
    sub_140E72AA0(&v115, &v113, &v122, &v121);
    if ( v115.m256i_i8[0] != -1 )
      sub_14002F9D0(&v115);
    nullsub_1(v60);
    v61 = (void *)sub_140001650(13, 1);
    if ( !v61 )
      sub_141938D2B(1, 13);
    qmemcpy(v61, "extraInRouter", 13);
    v122.m256i_i64[0] = 13;
    v122.m256i_i64[1] = (__int64)v61;
    v122.m256i_i64[2] = 13;
    v126 = 1;
    sub_140C100F0(&v115, &v96);
    if ( v115.m256i_i8[0] == -1 )
    {
      v121.m256i_i64[0] = v115.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v121,
        (unsigned int)&off_141A3BB28,
        (__int64)&off_141A3D750);
    }
    v121 = v115;
    v126 = 0;
    sub_140E72AA0(&v115, &v113, &v122, &v121);
    if ( v115.m256i_i8[0] != -1 )
      sub_14002F9D0(&v115);
    *(_OWORD *)&v115.m256i_u64[1] = v113;
    v115.m256i_i64[3] = v114;
    v115.m256i_i8[0] = 5;
    v62 = v97;
    v63 = v98;
    if ( v98 )
    {
      v64 = (_QWORD *)(v97 + 8);
      do
      {
        v65 = *(v64 - 1);
        if ( v65 )
          sub_140001660(*v64, v65, 1);
        v64 += 3;
        --v63;
      }
      while ( v63 );
    }
    if ( v96 )
      sub_140001660(v62, 24 * v96, 8);
    v66 = v100;
    if ( v49 )
    {
      v67 = (_QWORD *)(v100 + 8);
      do
      {
        v68 = *(v67 - 1);
        if ( v68 )
          sub_140001660(*v67, v68, 1);
        v67 += 3;
        --v49;
      }
      while ( v49 );
    }
    if ( v99 )
      sub_140001660(v66, 24 * v99, 8);
  }
  else
  {
    *(_QWORD *)&v113 = 0;
    v114 = 0;
    nullsub_1(v28);
    v32 = sub_140001650(6, 1);
    if ( !v32 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v32 + 4) = 29557;
    *(_DWORD *)v32 = 1952543859;
    v122.m256i_i64[0] = 6;
    v122.m256i_i64[1] = v32;
    v122.m256i_i64[2] = 6;
    nullsub_1(v33);
    v34 = (__m128i *)sub_140001650(11, 1);
    v120 = v34;
    if ( !v34 )
      sub_141938D2B(1, 11);
    qmemcpy(v34, "unavailable", 11);
    v115.m256i_i8[0] = 3;
    v115.m256i_i64[1] = 11;
    v115.m256i_i64[2] = (__int64)v34;
    v115.m256i_i64[3] = 11;
    sub_140E72AA0(&v121, &v113, &v122, &v115);
    if ( v121.m256i_i8[0] != -1 )
      sub_14002F9D0(&v121);
    nullsub_1(v35);
    v36 = sub_140001650(6, 1);
    if ( !v36 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v36 + 4) = 25955;
    *(_DWORD *)v36 = 1920298867;
    v122.m256i_i64[0] = 6;
    v122.m256i_i64[1] = v36;
    v122.m256i_i64[2] = 6;
    nullsub_1(v37);
    v38 = (__m128i *)sub_140001650(v31, 1);
    v120 = v38;
    if ( !v38 )
      sub_141938D2B(1, v31);
    v39 = (__int64)v38;
    sub_1418F44E0(v38, v30, v31);
    v115.m256i_i8[0] = 3;
    v115.m256i_i64[1] = v31;
    v115.m256i_i64[2] = v39;
    v115.m256i_i64[3] = v31;
    sub_140E72AA0(&v121, &v113, &v122, &v115);
    if ( v121.m256i_i8[0] != -1 )
      sub_14002F9D0(&v121);
    nullsub_1(v40);
    v41 = (void *)sub_140001650(17, 1);
    if ( !v41 )
      sub_141938D2B(1, 17);
    qmemcpy(v41, "missingFromRouter", 17);
    v122.m256i_i64[0] = 17;
    v122.m256i_i64[1] = (__int64)v41;
    v122.m256i_i64[2] = 17;
    v115.m256i_i64[1] = 0;
    *(_OWORD *)&v115.m256i_u64[2] = 8u;
    v115.m256i_i8[0] = 4;
    sub_140E72AA0(&v121, &v113, &v122, &v115);
    if ( v121.m256i_i8[0] != -1 )
      sub_14002F9D0(&v121);
    nullsub_1(v42);
    v43 = (void *)sub_140001650(13, 1);
    if ( !v43 )
      sub_141938D2B(1, 13);
    qmemcpy(v43, "extraInRouter", 13);
    v122.m256i_i64[0] = 13;
    v122.m256i_i64[1] = (__int64)v43;
    v122.m256i_i64[2] = 13;
    v115.m256i_i64[1] = 0;
    *(_OWORD *)&v115.m256i_u64[2] = 8u;
    v115.m256i_i8[0] = 4;
    sub_140E72AA0(&v121, &v113, &v122, &v115);
    if ( v121.m256i_i8[0] != -1 )
      sub_14002F9D0(&v121);
    *(_OWORD *)&v115.m256i_u64[1] = v113;
    v115.m256i_i64[3] = v114;
    v115.m256i_i8[0] = 5;
  }
  v125 = 1;
  sub_140412420(&v121, &v115);
  if ( v121.m256i_i8[0] == -1 )
  {
    v122.m256i_i64[0] = v121.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v122,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3CF48);
  }
  v122 = v121;
  v125 = 0;
  sub_140E72AA0(&v121, &v110, v102, &v122);
  if ( v121.m256i_i8[0] != -1 )
    sub_14002F9D0(&v121);
  sub_14002F9D0(&v115);
  *(_QWORD *)(a1 + 24) = v111;
  *(_OWORD *)(a1 + 8) = v110;
  *(_BYTE *)a1 = 5;
  sub_14002F9D0(v104);
  if ( (_QWORD)v106 )
  {
    v69 = v107;
    v115.m256i_i64[1] = 0;
    *(_OWORD *)&v115.m256i_u64[2] = v106;
    v117 = 0;
    v118 = v106;
    v70 = 1;
  }
  else
  {
    v70 = 0;
    v69 = 0;
  }
  v115.m256i_i64[0] = v70;
  v116 = v70;
  v119 = v69;
  sub_140E828B0(&v121, &v115);
  for ( i = v121.m256i_i64[0]; v121.m256i_i64[0]; i = v121.m256i_i64[0] )
  {
    v72 = *(_QWORD *)(i + 24 * v121.m256i_i64[2] + 8);
    if ( v72 )
      sub_140001660(*(_QWORD *)(i + 24 * v121.m256i_i64[2] + 16), v72, 1);
    sub_140E828B0(&v121, &v115);
  }
  if ( (_QWORD)v108 )
  {
    v73 = v109;
    v115.m256i_i64[1] = 0;
    *(_OWORD *)&v115.m256i_u64[2] = v108;
    v117 = 0;
    v118 = v108;
    v74 = 1;
  }
  else
  {
    v74 = 0;
    v73 = 0;
  }
  v115.m256i_i64[0] = v74;
  v116 = v74;
  v119 = v73;
  sub_140E828B0(&v121, &v115);
  for ( j = v121.m256i_i64[0]; v121.m256i_i64[0]; j = v121.m256i_i64[0] )
  {
    v76 = *(_QWORD *)(j + 24 * v121.m256i_i64[2] + 8);
    if ( v76 )
      sub_140001660(*(_QWORD *)(j + 24 * v121.m256i_i64[2] + 16), v76, 1);
    sub_140E828B0(&v121, &v115);
  }
  sub_14002F9D0(v91);
  if ( (_QWORD)v92 )
  {
    v77 = v93;
    v115.m256i_i64[1] = 0;
    *(_OWORD *)&v115.m256i_u64[2] = v92;
    v117 = 0;
    v118 = v92;
    v78 = 1;
  }
  else
  {
    v78 = 0;
    v77 = 0;
  }
  v115.m256i_i64[0] = v78;
  v116 = v78;
  v119 = v77;
  sub_140E828B0(v104, &v115);
  for ( k = v104[0]; v104[0]; k = v104[0] )
  {
    v80 = *(_QWORD *)(k + 24 * v105 + 8);
    if ( v80 )
      sub_140001660(*(_QWORD *)(k + 24 * v105 + 16), v80, 1);
    sub_140E828B0(v104, &v115);
  }
  if ( (_QWORD)v94 )
  {
    v81 = v95;
    v115.m256i_i64[1] = 0;
    *(_OWORD *)&v115.m256i_u64[2] = v94;
    v117 = 0;
    v118 = v94;
    v82 = 1;
  }
  else
  {
    v82 = 0;
    v81 = 0;
  }
  v115.m256i_i64[0] = v82;
  v116 = v82;
  v119 = v81;
  sub_140E828B0(v104, &v115);
  for ( result = v104[0]; v104[0]; result = v104[0] )
  {
    v84 = *(_QWORD *)(result + 24 * v105 + 8);
    if ( v84 )
      sub_140001660(*(_QWORD *)(result + 24 * v105 + 16), v84, 1);
    sub_140E828B0(v104, &v115);
  }
  if ( v85 )
    result = sub_140001660(v6, v85, 1);
  if ( v88 )
    return sub_140001660(v4, v88, 1);
  return result;
}
