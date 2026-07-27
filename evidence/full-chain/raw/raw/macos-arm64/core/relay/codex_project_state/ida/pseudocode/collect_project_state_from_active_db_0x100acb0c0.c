// __ZN13codexmate_lib4core5relay19codex_project_state36collect_project_state_from_active_db @ 0x100acb0c0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_project_state::collect_project_state_from_active_db::h5cda1553b816d601(
        unsigned __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __m128 a5)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // rax
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rcx
  __m512i *v13; // rdi
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int128 v16; // krB0_16
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // r12
  size_t v22; // rdx
  size_t v23; // rbx
  __int64 v24; // rbx
  int v25; // eax
  char v26; // cl
  __int64 v27; // rsi
  __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r15
  __int64 v33; // r12
  size_t v34; // rdx
  size_t v35; // rbx
  __int64 v36; // rbx
  int v37; // eax
  char v38; // cl
  __int64 i; // rcx
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r15
  __int64 v43; // rbx
  size_t v44; // rdx
  size_t v45; // r12
  __int64 v46; // r12
  int v47; // eax
  char v48; // cl
  __int64 v49; // rax
  void *v50; // rcx
  __int64 j; // rcx
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // r15
  __int64 v55; // r12
  size_t v56; // rdx
  size_t v57; // rbx
  __int64 v58; // rbx
  int v59; // eax
  char v60; // cl
  __int64 v61; // rax
  char *v62; // rcx
  __int128 v63; // kr30_16
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // eax
  unsigned __int64 v67; // rax
  _QWORD *v68; // rsi
  __int64 v69; // rbx
  __int64 v70; // r14
  bool v71; // zf
  __int64 v72; // rbx
  __int64 v73; // r15
  __m128i v74; // xmm0
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // rcx
  __int64 v78; // r12
  __int64 v79; // r15
  const void *v80; // r12
  size_t v81; // rbx
  __int64 v82; // r13
  __int64 v83; // r14
  __int64 v84; // r14
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // r8
  __int64 v90; // rbx
  __int64 v91; // r12
  __int64 v92; // rsi
  __int64 v93; // r12
  __int64 v94; // rbx
  signed __int64 v95; // r13
  __int64 v96; // r14
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r9
  __int64 v100; // r8
  __int64 v101; // rbx
  __int64 v102; // r14
  double v103; // xmm0_8
  unsigned __int64 v104; // rbx
  __int64 k; // rax
  __int64 v106; // rsi
  unsigned __int64 v107; // r14
  unsigned __int64 v108; // rcx
  __int64 v109; // rax
  _QWORD *v110; // rbx
  __int64 v111; // rax
  unsigned __int64 *v112; // rdx
  __int64 v113; // rcx
  unsigned __int64 *v114; // rax
  _BYTE v116[112]; // [rsp+0h] [rbp-360h] BYREF
  _QWORD v117[3]; // [rsp+70h] [rbp-2F0h] BYREF
  _QWORD v118[3]; // [rsp+88h] [rbp-2D8h] BYREF
  _QWORD v119[3]; // [rsp+A0h] [rbp-2C0h] BYREF
  _QWORD v120[2]; // [rsp+B8h] [rbp-2A8h] BYREF
  _QWORD v121[3]; // [rsp+C8h] [rbp-298h] BYREF
  _QWORD v122[2]; // [rsp+E0h] [rbp-280h] BYREF
  __int64 v123; // [rsp+F0h] [rbp-270h] BYREF
  __int128 v124; // [rsp+F8h] [rbp-268h]
  __int64 v125; // [rsp+108h] [rbp-258h]
  __m128i v126; // [rsp+110h] [rbp-250h] BYREF
  unsigned __int64 v127; // [rsp+120h] [rbp-240h]
  __int64 v128; // [rsp+130h] [rbp-230h] BYREF
  __int64 v129; // [rsp+138h] [rbp-228h]
  __int64 v130; // [rsp+140h] [rbp-220h]
  __int64 v131; // [rsp+148h] [rbp-218h] BYREF
  __int64 v132; // [rsp+150h] [rbp-210h]
  _BYTE *v133; // [rsp+158h] [rbp-208h] BYREF
  _QWORD v134[3]; // [rsp+160h] [rbp-200h] BYREF
  signed __int64 v135; // [rsp+178h] [rbp-1E8h] BYREF
  __int64 v136; // [rsp+180h] [rbp-1E0h]
  __int64 v137; // [rsp+188h] [rbp-1D8h]
  _BYTE *v138; // [rsp+190h] [rbp-1D0h] BYREF
  __int64 v139; // [rsp+198h] [rbp-1C8h] BYREF
  __int64 v140; // [rsp+1A0h] [rbp-1C0h]
  unsigned __int64 *v141; // [rsp+1A8h] [rbp-1B8h]
  __int64 v142; // [rsp+1B0h] [rbp-1B0h]
  __int64 v143; // [rsp+1B8h] [rbp-1A8h]
  __int64 v144; // [rsp+1C0h] [rbp-1A0h]
  _BYTE v145[48]; // [rsp+1C8h] [rbp-198h] BYREF
  sqlite3_stmt *v146[2]; // [rsp+1F8h] [rbp-168h]
  unsigned __int64 v147; // [rsp+208h] [rbp-158h] BYREF
  __int64 v148; // [rsp+210h] [rbp-150h]
  __int64 v149; // [rsp+218h] [rbp-148h]
  __int64 v150; // [rsp+220h] [rbp-140h]
  __int64 v151; // [rsp+228h] [rbp-138h]
  __m128i v152; // [rsp+230h] [rbp-130h] BYREF
  _BYTE *v153; // [rsp+240h] [rbp-120h]
  __int64 v154; // [rsp+248h] [rbp-118h]
  unsigned __int64 v155; // [rsp+250h] [rbp-110h]
  __int128 v156; // [rsp+258h] [rbp-108h]
  __int64 v157; // [rsp+268h] [rbp-F8h]
  __m512i v158; // [rsp+270h] [rbp-F0h] BYREF
  _BYTE v159[112]; // [rsp+2B0h] [rbp-B0h] BYREF
  __int64 v160; // [rsp+320h] [rbp-40h]
  __int64 v161; // [rsp+328h] [rbp-38h]
  __int64 v162; // [rsp+330h] [rbp-30h]

  codexmate_lib::core::relay::codex_project_state::active_db_path::h3a30f1c5da4f6f85( /*0x100acb0ee*/
    (size_t *)v159,
    a2,
    *(double *)a5.i64);
  v155 = 0x8000000000000000LL; /*0x100acb0fe*/
  v140 = *(_QWORD *)v159; /*0x100acb105*/
  if ( *(_QWORD *)v159 == 0x8000000000000000LL ) /*0x100acb10f*/
  {
    a1[6] = 0; /*0x100acb111*/
    *a1 = 0; /*0x100acb119*/
    a1[1] = 8; /*0x100acb120*/
    a1[7] = 0; /*0x100acb128*/
    a1[2] = 0; /*0x100acb130*/
    a1[3] = 0; /*0x100acb138*/
    a1[9] = 0; /*0x100acb140*/
    a1[10] = 0; /*0x100acb148*/
    a1[4] = 8; /*0x100acb150*/
    a1[5] = 0; /*0x100acb158*/
    return *(double *)a5.i64; /*0x100acb160*/
  }
  v141 = a1; /*0x100acb165*/
  v7 = *(_QWORD *)&v159[8]; /*0x100acb16c*/
  v153 = *(_BYTE **)&v159[8]; /*0x100acb181*/
  v132 = *(_QWORD *)&v159[16]; /*0x100acb188*/
  rusqlite::Connection::open_with_flags::h44d322d71fbb5f40(v159, *(_QWORD *)&v159[8], *(_QWORD *)&v159[16], 32769); /*0x100acb194*/
  if ( v159[104] == 3 ) /*0x100acb19d*/
  {
    v158 = *(__m512i *)v159; /*0x100acb1b2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v159, v7); /*0x100acb20d*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100acb21c*/
    if ( !v8 ) /*0x100acb224*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100acc828*/
    v9 = (_QWORD *)v8; /*0x100acb22a*/
    v133 = v153; /*0x100acb234*/
    v134[0] = v132; /*0x100acb242*/
    *(_QWORD *)v145 = &v133; /*0x100acb250*/
    *(_QWORD *)&v145[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100acb25e*/
    *(_QWORD *)&v145[16] = &v158; /*0x100acb26c*/
    *(_QWORD *)&v145[24] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100acb27a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v119, &unk_1017BF7DC, v145); /*0x100acb296*/
    v9[2] = v119[2]; /*0x100acb2a2*/
    v10 = v119[0]; /*0x100acb2a6*/
    v9[1] = v119[1]; /*0x100acb2b4*/
    *v9 = v10; /*0x100acb2b8*/
    *(_OWORD *)&v145[8] = 0u; /*0x100acb2c6*/
    v11 = v141; /*0x100acb2d1*/
    v141[6] = 0; /*0x100acb2d8*/
    *v11 = 0; /*0x100acb2e0*/
    v11[1] = 8; /*0x100acb2e7*/
    v11[2] = 0; /*0x100acb2ef*/
    v11[7] = 0; /*0x100acb2f7*/
    v12 = *(_QWORD *)&v145[8]; /*0x100acb306*/
    v11[8] = *(_QWORD *)v145; /*0x100acb30d*/
    v11[9] = v12; /*0x100acb311*/
    v11[10] = 0; /*0x100acb315*/
    v11[3] = 1; /*0x100acb31d*/
    v11[4] = (unsigned __int64)v9; /*0x100acb325*/
    v11[5] = 1; /*0x100acb329*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v158); /*0x100acb338*/
    goto LABEL_157; /*0x100acb33d*/
  }
  v125 = a3; /*0x100acb342*/
  v152.i64[0] = a4; /*0x100acb349*/
  qmemcpy(v116, v159, sizeof(v116)); /*0x100acb366*/
  rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v159, v116, 0, 500000000); /*0x100acb37a*/
  if ( *(_QWORD *)v159 != 0x8000000000000016LL ) /*0x100acb386*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v159); /*0x100acb38f*/
  v13 = (__m512i *)v159; /*0x100acb394*/
  codexmate_lib::core::relay::codex_project_state::sqlite_table_columns::h5a472303a71d7212( /*0x100acb3a2*/
    (__int64 (__fastcall **)())v159,
    (__int64)v116);
  v14 = *(_QWORD *)v159; /*0x100acb3ae*/
  v15 = *(_QWORD *)&v159[24]; /*0x100acb3bc*/
  v16 = *(_OWORD *)&v159[8]; /*0x100acb3c6*/
  if ( *(_QWORD *)v159 != 0x8000000000000016LL ) /*0x100acb3c6*/
  {
    v27 = *(_QWORD *)&v159[40]; /*0x100acb4c5*/
    v28 = *(_QWORD *)&v159[32]; /*0x100acb4c5*/
    a5 = (__m128)_mm_loadu_si128((const __m128i *)&v159[48]); /*0x100acb4cc*/
    goto LABEL_149; /*0x100acb4d1*/
  }
  v123 = *(_QWORD *)&v159[8]; /*0x100acb3cc*/
  v124 = *(_OWORD *)&v159[16]; /*0x100acb3d3*/
  if ( !*(_QWORD *)&v159[8] ) /*0x100acb3e4*/
  {
    v152 = 0; /*0x100acb8a2*/
    v14 = 8; /*0x100acb8aa*/
    v155 = 0; /*0x100acb8b0*/
    v154 = 8; /*0x100acb8c0*/
    v160 = 0; /*0x100acb8c7*/
    v28 = 0; /*0x100acb8cf*/
    v156 = 0u; /*0x100acb8dd*/
    v64 = 0; /*0x100acb8e8*/
    v65 = 0; /*0x100acb8ea*/
    goto LABEL_143; /*0x100acb8ec*/
  }
  v154 = *(_QWORD *)&v159[24]; /*0x100acb3ea*/
  v162 = *(_QWORD *)&v159[16]; /*0x100acb3ff*/
  v156 = *(_OWORD *)&v159[8]; /*0x100acb403*/
  v17 = *(_QWORD *)&v159[8]; /*0x100acb40a*/
LABEL_11:
  v18 = v17 + 8; /*0x100acb40d*/
  v161 = v17; /*0x100acb411*/
  v160 = *(unsigned __int16 *)(v17 + 274); /*0x100acb41c*/
  v19 = 3LL * (unsigned int)(8 * v160); /*0x100acb427*/
  v20 = -1; /*0x100acb42b*/
  do /*0x100acb48c*/
  {
    if ( !v19 ) /*0x100acb443*/
    {
      v20 = v160; /*0x100acb497*/
LABEL_21:
      if ( !v162 ) /*0x100acb4a3*/
      {
LABEL_69:
        v152 = 0; /*0x100acba09*/
        v161 = 8; /*0x100acba1a*/
        v162 = 0; /*0x100acba1e*/
        v28 = 0; /*0x100acba26*/
        v69 = 0; /*0x100acba29*/
        v14 = 8; /*0x100acba2b*/
        v155 = 0; /*0x100acba31*/
        v70 = 0; /*0x100acba46*/
        goto LABEL_142; /*0x100acba49*/
      }
      --v162; /*0x100acb4a9*/
      v17 = *(_QWORD *)(v161 + 8 * v20 + 280); /*0x100acb4b1*/
      goto LABEL_11; /*0x100acb4b9*/
    }
    v21 = v18 + 24; /*0x100acb445*/
    v22 = *(_QWORD *)(v18 + 16); /*0x100acb44d*/
    v23 = v22 - 2; /*0x100acb454*/
    if ( v22 >= 2 ) /*0x100acb45d*/
      v22 = 2; /*0x100acb45d*/
    v24 = -(__int64)v23; /*0x100acb461*/
    v25 = memcmp("id", *(const void **)(v18 + 8), v22); /*0x100acb467*/
    if ( v25 ) /*0x100acb470*/
      v24 = v25; /*0x100acb470*/
    v26 = (v24 > 0) - (v24 < 0); /*0x100acb47d*/
    ++v20; /*0x100acb47f*/
    v19 -= 24; /*0x100acb482*/
    v18 = v21; /*0x100acb486*/
  }
  while ( v26 == 1 ); /*0x100acb48c*/
  if ( v26 ) /*0x100acb493*/
    goto LABEL_21; /*0x100acb493*/
  v162 = *((_QWORD *)&v156 + 1); /*0x100acb4e4*/
  v29 = v156; /*0x100acb4e8*/
LABEL_24:
  v30 = v29 + 8; /*0x100acb4ef*/
  v161 = v29; /*0x100acb4f3*/
  v160 = *(unsigned __int16 *)(v29 + 274); /*0x100acb4fe*/
  v31 = 3LL * (unsigned int)(8 * v160); /*0x100acb509*/
  v32 = -1; /*0x100acb50d*/
  do /*0x100acb56c*/
  {
    if ( !v31 ) /*0x100acb523*/
    {
      v32 = v160; /*0x100acb577*/
LABEL_34:
      if ( !v162 ) /*0x100acb583*/
        goto LABEL_69; /*0x100acb583*/
      --v162; /*0x100acb589*/
      v29 = *(_QWORD *)(v161 + 8 * v32 + 280); /*0x100acb591*/
      goto LABEL_24; /*0x100acb599*/
    }
    v33 = v30 + 24; /*0x100acb525*/
    v34 = *(_QWORD *)(v30 + 16); /*0x100acb52d*/
    v35 = v34 - 3; /*0x100acb534*/
    if ( v34 >= 3 ) /*0x100acb53d*/
      v34 = 3; /*0x100acb53d*/
    v36 = -(__int64)v35; /*0x100acb541*/
    v37 = memcmp(&unk_10167D2E0, *(const void **)(v30 + 8), v34); /*0x100acb547*/
    if ( v37 ) /*0x100acb550*/
      v36 = v37; /*0x100acb550*/
    v38 = (v36 > 0) - (v36 < 0); /*0x100acb55d*/
    ++v32; /*0x100acb55f*/
    v31 -= 24; /*0x100acb562*/
    v30 = v33; /*0x100acb566*/
  }
  while ( v38 == 1 ); /*0x100acb56c*/
  if ( v38 ) /*0x100acb573*/
    goto LABEL_34; /*0x100acb573*/
  v162 = *((_QWORD *)&v156 + 1); /*0x100acb5ac*/
  for ( i = v156; ; i = *(_QWORD *)(v161 + 8 * v42 + 280) ) /*0x100acb5b0*/
  {
    v40 = i + 8; /*0x100acb5b7*/
    v161 = i; /*0x100acb5bb*/
    v160 = *(unsigned __int16 *)(i + 274); /*0x100acb5c6*/
    v41 = 3LL * (unsigned int)(8 * v160); /*0x100acb5d1*/
    v42 = -1; /*0x100acb5d5*/
    do /*0x100acb62c*/
    {
      if ( !v41 ) /*0x100acb5e3*/
      {
        v42 = v160; /*0x100acb637*/
        goto LABEL_46; /*0x100acb637*/
      }
      v43 = v40 + 24; /*0x100acb5e5*/
      v44 = *(_QWORD *)(v40 + 16); /*0x100acb5ed*/
      v45 = v44 - 8; /*0x100acb5f4*/
      if ( v44 >= 8 ) /*0x100acb5fd*/
        v44 = 8; /*0x100acb5fd*/
      v46 = -(__int64)v45; /*0x100acb601*/
      v47 = memcmp("archivedAuthFile~/.codexsessionsccswitchorphaned", *(const void **)(v40 + 8), v44); /*0x100acb607*/
      if ( v47 ) /*0x100acb610*/
        v46 = v47; /*0x100acb610*/
      v48 = (v46 > 0) - (v46 < 0); /*0x100acb61d*/
      ++v42; /*0x100acb61f*/
      v41 -= 24; /*0x100acb622*/
      v40 = v43; /*0x100acb626*/
    }
    while ( v48 == 1 ); /*0x100acb62c*/
    if ( !v48 ) /*0x100acb633*/
    {
      v49 = 25; /*0x100acb65e*/
      v50 = &unk_10167D332; /*0x100acb663*/
      goto LABEL_48; /*0x100acb635*/
    }
LABEL_46:
    if ( !v162 ) /*0x100acb643*/
      break; /*0x100acb643*/
    --v162; /*0x100acb649*/
  }
  v49 = 5; /*0x100acbaa5*/
  v50 = &unk_10167D34B; /*0x100acbaaa*/
LABEL_48:
  v122[0] = v50; /*0x100acb66a*/
  v122[1] = v49; /*0x100acb671*/
  v162 = *((_QWORD *)&v156 + 1); /*0x100acb686*/
  for ( j = v156; ; j = *(_QWORD *)(v161 + 8 * v54 + 280) ) /*0x100acb68a*/
  {
    v52 = j + 8; /*0x100acb691*/
    v161 = j; /*0x100acb695*/
    v160 = *(unsigned __int16 *)(j + 274); /*0x100acb6a0*/
    v53 = 3LL * (unsigned int)(8 * v160); /*0x100acb6ab*/
    v54 = -1; /*0x100acb6af*/
    do /*0x100acb70c*/
    {
      if ( !v53 ) /*0x100acb6c3*/
      {
        v54 = v160; /*0x100acb717*/
        goto LABEL_59; /*0x100acb717*/
      }
      v55 = v52 + 24; /*0x100acb6c5*/
      v56 = *(_QWORD *)(v52 + 16); /*0x100acb6cd*/
      v57 = v56 - 13; /*0x100acb6d4*/
      if ( v56 >= 0xD ) /*0x100acb6dd*/
        v56 = 13; /*0x100acb6dd*/
      v58 = -(__int64)v57; /*0x100acb6e1*/
      v59 = memcmp( /*0x100acb6e7*/
              "updated_at_msCOALESCE(updated_at_ms, 0)updated_atCOALESCE(updated_at, 0)0codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
              *(const void **)(v52 + 8),
              v56);
      if ( v59 ) /*0x100acb6f0*/
        v58 = v59; /*0x100acb6f0*/
      v60 = (v58 > 0) - (v58 < 0); /*0x100acb6fd*/
      ++v54; /*0x100acb6ff*/
      v53 -= 24; /*0x100acb702*/
      v52 = v55; /*0x100acb706*/
    }
    while ( v60 == 1 ); /*0x100acb70c*/
    if ( !v60 ) /*0x100acb713*/
    {
      v61 = 26; /*0x100acb73e*/
      v62 = "COALESCE(updated_at_ms, 0)updated_atCOALESCE(updated_at, 0)0codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''"; /*0x100acb743*/
      goto LABEL_61; /*0x100acb715*/
    }
LABEL_59:
    if ( !v162 ) /*0x100acb723*/
      break; /*0x100acb723*/
    --v162; /*0x100acb729*/
  }
  v71 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h7e275ec91a8300f6( /*0x100acbace*/
          &v123,
          "updated_atCOALESCE(updated_at, 0)0codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
          10) == 0;
  v61 = 23; /*0x100acbad6*/
  if ( v71 ) /*0x100acbadb*/
    v61 = 1; /*0x100acbadb*/
  v62 = "COALESCE(updated_at, 0)0codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''"; /*0x100acbae6*/
  if ( v71 ) /*0x100acbaed*/
    v62 = "0codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''"; /*0x100acbaed*/
LABEL_61:
  v120[0] = v62; /*0x100acb74a*/
  v120[1] = v61; /*0x100acb751*/
  v158.i64[0] = (__int64)v122; /*0x100acb75f*/
  v158.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100acb76d*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v159, &unk_1017CA1ED, &v158); /*0x100acb789*/
  v63 = *(_OWORD *)v159; /*0x100acb795*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v159, v116, *(_QWORD *)&v159[8], *(_QWORD *)&v159[16]); /*0x100acb7b4*/
  v158 = *(__m512i *)&v159[8]; /*0x100acb7c6*/
  if ( *(_DWORD *)v159 == 1 ) /*0x100acb829*/
  {
    *(__m512i *)v159 = v158; /*0x100acb841*/
    goto LABEL_81; /*0x100acb899*/
  }
  *(_OWORD *)v146 = v158.i128[3]; /*0x100acb906*/
  *(_OWORD *)&v145[32] = v158.i128[2]; /*0x100acb922*/
  *(_OWORD *)&v145[16] = v158.i128[1]; /*0x100acb93e*/
  *(_OWORD *)v145 = v158.i128[0]; /*0x100acb95a*/
  v66 = sqlite3_bind_parameter_count((sqlite3_stmt *)v158.i64[7]); /*0x100acb968*/
  if ( !v66 ) /*0x100acb96f*/
  {
    v133 = v145; /*0x100acb9a6*/
    v134[0] = 0; /*0x100acb9ad*/
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x100acb9c6*/
      v159,
      &v133);
    v67 = *(_QWORD *)v159; /*0x100acb9d5*/
    if ( *(_QWORD *)v159 == 0x8000000000000016LL ) /*0x100acb9df*/
    {
      v68 = v134; /*0x100acb9e1*/
      if ( v134[0] ) /*0x100acb9f0*/
      {
        rusqlite::row::Row::get::h100bc309f48de08a(v159, v134, 0, 0x8000000000000016LL); /*0x100acb9ff*/
LABEL_79:
        core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v133); /*0x100acbb56*/
        goto LABEL_80; /*0x100acbb5d*/
      }
      v67 = 0x8000000000000009LL; /*0x100acbaf6*/
    }
    else
    {
      v68 = *(_QWORD **)&v159[8]; /*0x100acba4e*/
      v158.i128[0] = *(_OWORD *)&v159[16]; /*0x100acba5c*/
      v158.i128[1] = *(_OWORD *)&v159[32]; /*0x100acba78*/
      v158.i128[2] = *(_OWORD *)&v159[48]; /*0x100acba98*/
    }
    *(_QWORD *)v159 = v67; /*0x100acbafa*/
    *(_QWORD *)&v159[8] = v68; /*0x100acbb01*/
    *(_OWORD *)&v159[16] = v158.i128[0]; /*0x100acbb16*/
    *(_OWORD *)&v159[32] = v158.i128[1]; /*0x100acbb2b*/
    *(_OWORD *)&v159[48] = v158.i128[2]; /*0x100acbb47*/
    goto LABEL_79; /*0x100acbb47*/
  }
  *(_OWORD *)v159 = 0x8000000000000013LL; /*0x100acb981*/
  *(_QWORD *)&v159[16] = v66; /*0x100acb993*/
LABEL_80:
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v145); /*0x100acbb62*/
LABEL_81:
  v72 = *(_QWORD *)&v159[8]; /*0x100acbb6e*/
  v73 = *(_QWORD *)v159; /*0x100acbb75*/
  if ( *(_QWORD *)v159 != 0x8000000000000016LL ) /*0x100acbb89*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v159); /*0x100acbb92*/
  if ( v72 <= 0 ) /*0x100acbb9c*/
    v72 = 0; /*0x100acbb9c*/
  if ( v73 != 0x8000000000000016LL ) /*0x100acbbb0*/
    v72 = 0; /*0x100acbbb0*/
  v160 = v72; /*0x100acbbb4*/
  if ( (_QWORD)v63 ) /*0x100acbbbb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v63 + 1), v63, 1); /*0x100acbbc8*/
  *(_QWORD *)v159 = v122; /*0x100acbbd4*/
  *(_QWORD *)&v159[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100acbbdb*/
  *(_QWORD *)&v159[16] = v120; /*0x100acbbe9*/
  *(_QWORD *)&v159[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100acbbf0*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v158, &unk_1017CA213, v159); /*0x100acbc0c*/
  v142 = v158.i64[1]; /*0x100acbc3b*/
  v150 = v158.i64[0]; /*0x100acbc3b*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v159, v116, v158.i64[1], v158.i64[2]); /*0x100acbc42*/
  v14 = *(_QWORD *)&v159[8]; /*0x100acbc47*/
  v70 = *(_QWORD *)&v159[16]; /*0x100acbc4e*/
  v28 = *(_QWORD *)&v159[40]; /*0x100acbc63*/
  v69 = *(_QWORD *)&v159[48]; /*0x100acbc6a*/
  v74 = _mm_loadu_si128((const __m128i *)&v159[56]); /*0x100acbc6e*/
  if ( v159[0] ) /*0x100acbc7a*/
  {
    v152 = v74; /*0x100acbc7c*/
    v161 = *(_QWORD *)&v159[32]; /*0x100acbc84*/
    v162 = *(_QWORD *)&v159[24]; /*0x100acbc88*/
    goto LABEL_140; /*0x100acbc8c*/
  }
  *(_QWORD *)v145 = *(_QWORD *)&v159[8]; /*0x100acbc91*/
  *(_OWORD *)&v145[8] = *(_OWORD *)&v159[16]; /*0x100acbc98*/
  *(_OWORD *)&v145[24] = *(_OWORD *)&v159[32]; /*0x100acbca6*/
  *(_QWORD *)&v145[40] = *(_QWORD *)&v159[48]; /*0x100acbcb4*/
  *(__m128i *)v146 = v74; /*0x100acbcc2*/
  v75 = sqlite3_bind_parameter_count((sqlite3_stmt *)_mm_extract_epi64(v74, 1)); /*0x100acbcca*/
  if ( v75 ) /*0x100acbcd4*/
  {
    v162 = v75; /*0x100acbcd6*/
    v14 = 0x8000000000000013LL; /*0x100acbcda*/
    v70 = 0; /*0x100acbcde*/
LABEL_139:
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v145); /*0x100acc3b7*/
LABEL_140:
    if ( v150 ) /*0x100acc3cd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, v150, 1); /*0x100acc3db*/
LABEL_142:
    v65 = v154; /*0x100acc3e0*/
    *(_QWORD *)&v159[8] = 0; /*0x100acc3e7*/
    *(_OWORD *)&v159[16] = v156; /*0x100acc3f9*/
    *(_QWORD *)&v159[40] = 0; /*0x100acc40e*/
    *(_OWORD *)&v159[48] = v156; /*0x100acc419*/
    v64 = 1; /*0x100acc421*/
    v154 = v161; /*0x100acc42a*/
    v160 = v69; /*0x100acc431*/
    *((_QWORD *)&v156 + 1) = v162; /*0x100acc439*/
    *(_QWORD *)&v156 = v70; /*0x100acc440*/
LABEL_143:
    *(_QWORD *)v159 = v64; /*0x100acc447*/
    *(_QWORD *)&v159[32] = v64; /*0x100acc44e*/
    *(_QWORD *)&v159[64] = v65; /*0x100acc455*/
    v13 = &v158; /*0x100acc459*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v158, v159); /*0x100acc467*/
    for ( k = v158.i64[0]; v158.i64[0]; k = v158.i64[0] ) /*0x100acc476*/
    {
      v106 = *(_QWORD *)(k + 24 * v158.i64[2] + 8); /*0x100acc49b*/
      if ( v106 ) /*0x100acc4a3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(k + 24 * v158.i64[2] + 16), v106, 1); /*0x100acc4b3*/
      v13 = &v158; /*0x100acc4b8*/
      alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v158, v159); /*0x100acc4be*/
    }
    v107 = 0; /*0x100acc4cf*/
    v104 = 0; /*0x100acc4d2*/
    v108 = v155; /*0x100acc4d8*/
    if ( v155 != 0x8000000000000000LL ) /*0x100acc4e2*/
      goto LABEL_155; /*0x100acc4e2*/
    goto LABEL_148; /*0x100acc4e2*/
  }
  v147 = 0; /*0x100acbce6*/
  v148 = 8; /*0x100acbcf1*/
  v149 = 0; /*0x100acbcfc*/
  v121[0] = 0; /*0x100acbd07*/
  v121[2] = 0; /*0x100acbd12*/
  v126.i64[0] = 0; /*0x100acbd1d*/
  v127 = 0; /*0x100acbd28*/
  v131 = 0; /*0x100acbd33*/
  v138 = v145; /*0x100acbd45*/
  v139 = 0; /*0x100acbd4c*/
  v144 = 0; /*0x100acbd53*/
  while ( 1 ) /*0x100acbd85*/
  {
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x100acbd77*/
      v159,
      &v138);
    v14 = *(_QWORD *)v159; /*0x100acbd8a*/
    if ( *(_QWORD *)v159 != 0x8000000000000016LL ) /*0x100acbd94*/
    {
      v70 = *(_QWORD *)&v159[8]; /*0x100acc1d3*/
      v161 = *(_QWORD *)&v159[24]; /*0x100acc1ec*/
      v162 = *(_QWORD *)&v159[16]; /*0x100acc1ec*/
      v69 = *(_QWORD *)&v159[40]; /*0x100acc1f7*/
      v28 = *(_QWORD *)&v159[32]; /*0x100acc1f7*/
      v152 = _mm_loadu_si128((const __m128i *)&v159[48]); /*0x100acc203*/
      goto LABEL_137; /*0x100acc20b*/
    }
    v69 = v139; /*0x100acbd9a*/
    if ( !v139 ) /*0x100acbda4*/
      break; /*0x100acbda4*/
    rusqlite::row::Row::get::h97011a0484b66d6b(v159, &v139, 0, v77); /*0x100acbdba*/
    v157 = *(_QWORD *)&v159[8]; /*0x100acbdcd*/
    v14 = *(_QWORD *)v159; /*0x100acbdcd*/
    v161 = *(_QWORD *)&v159[24]; /*0x100acbde6*/
    v162 = *(_QWORD *)&v159[16]; /*0x100acbde6*/
    if ( *(_QWORD *)v159 != 0x8000000000000016LL ) /*0x100acbded*/
    {
      v69 = *(_QWORD *)&v159[40]; /*0x100acc319*/
      v28 = *(_QWORD *)&v159[32]; /*0x100acc319*/
      v152 = _mm_loadu_si128((const __m128i *)&v159[48]); /*0x100acc325*/
      v70 = v157; /*0x100acc32d*/
LABEL_137:
      core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v138); /*0x100acc362*/
      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdde816b66763b6c5(&v126); /*0x100acc375*/
      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc212aaf405e0d390(v121); /*0x100acc381*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v147); /*0x100acc38d*/
      if ( v147 ) /*0x100acc39c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, 24 * v147, 8); /*0x100acc3b2*/
      goto LABEL_139; /*0x100acc3b2*/
    }
    if ( (unsigned int)sqlite3_column_count(*(sqlite3_stmt **)(v69 + 56)) < 2 ) /*0x100acbdff*/
    {
      v14 = 0x800000000000000BLL; /*0x100acc336*/
      if ( v157 ) /*0x100acc344*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v157, 1); /*0x100acc34f*/
      v162 = v28; /*0x100acc354*/
      v161 = v70; /*0x100acc358*/
      v70 = 1; /*0x100acc35c*/
      goto LABEL_137; /*0x100acc35c*/
    }
    v78 = v157; /*0x100acbe14*/
    rusqlite::statement::Statement::value_ref::h9d19cccb4ac905ea(&v159[8], v69, 1); /*0x100acbe1b*/
    if ( *(_QWORD *)&v159[8] < 3u ) /*0x100acbe28*/
      goto LABEL_124; /*0x100acbe28*/
    core::str::converts::from_utf8::hb32deb9559450f6e(v159, *(_QWORD *)&v159[16], *(_QWORD *)&v159[24]); /*0x100acbe43*/
    if ( *(_DWORD *)v159 == 1 ) /*0x100acbe4f*/
      goto LABEL_124; /*0x100acbe4f*/
    v79 = v78; /*0x100acbe55*/
    v80 = *(const void **)&v159[8]; /*0x100acbe58*/
    v81 = *(_QWORD *)&v159[16]; /*0x100acbe5f*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v159, *(_QWORD *)&v159[16], 0, 1, 1); /*0x100acbe7d*/
    v82 = *(_QWORD *)&v159[8]; /*0x100acbe82*/
    if ( *(_DWORD *)v159 == 1 ) /*0x100acbe90*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*(_QWORD *)&v159[8], *(_QWORD *)&v159[16]); /*0x100acc84a*/
    v83 = *(_QWORD *)&v159[16]; /*0x100acbe96*/
    memcpy(*(void **)&v159[16], v80, v81); /*0x100acbea6*/
    v78 = v79; /*0x100acbeb2*/
    if ( v82 == v155 ) /*0x100acbebf*/
    {
LABEL_124:
      if ( v78 ) /*0x100acc19b*/
        *(double *)v74.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v78, 1); /*0x100acc1a9*/
      v131 = ++v144; /*0x100acc1bf*/
      v28 = v162; /*0x100acc1c6*/
      v70 = v161; /*0x100acc1ca*/
    }
    else
    {
      codexmate_lib::core::relay::codex_project_state::normalize_codex_path::h7ca6a8890dbadb8e(&v135, v83, v81); /*0x100acbed5*/
      if ( v137 ) /*0x100acbee2*/
      {
        v118[0] = v79; /*0x100acbee8*/
        v118[1] = v162; /*0x100acbef3*/
        v118[2] = v161; /*0x100acbefe*/
        v151 = v82; /*0x100acbf13*/
        v143 = v83; /*0x100acbf1a*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v128, &v135); /*0x100acbf21*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h0d78c153ea218cc9(&v158, &v126, v118); /*0x100acbf3b*/
        v84 = v162; /*0x100acbf4e*/
        if ( v158.i64[0] == v155 ) /*0x100acbf52*/
        {
          v85 = v158.i64[1]; /*0x100acbf58*/
          v86 = 3 * v158.i64[3]; /*0x100acbf66*/
          v87 = *(_QWORD *)(v158.i64[1] + 24 * v158.i64[3] + 272); /*0x100acbf6a*/
          v88 = *(_QWORD *)(v158.i64[1] + 24 * v158.i64[3] + 280); /*0x100acbf72*/
          *(_QWORD *)(v158.i64[1] + 8 * v86 + 288) = v130; /*0x100acbf81*/
          v89 = v129; /*0x100acbf90*/
          *(_QWORD *)(v85 + 8 * v86 + 272) = v128; /*0x100acbf97*/
          *(_QWORD *)(v85 + 8 * v86 + 280) = v89; /*0x100acbf9f*/
          if ( 2 * v87 ) /*0x100acbfa7*/
            *(double *)v74.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x100acbfbd*/
        }
        else
        {
          *(_QWORD *)&v159[48] = v158.i64[6]; /*0x100acc02e*/
          *(_OWORD *)&v159[32] = v158.i128[2]; /*0x100acc047*/
          *(_OWORD *)&v159[16] = v158.i128[1]; /*0x100acc063*/
          *(_OWORD *)v159 = v158.i128[0]; /*0x100acc07f*/
          v117[2] = v130; /*0x100acc08d*/
          v117[1] = v129; /*0x100acc0a2*/
          v117[0] = v128; /*0x100acc0a9*/
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h2cb353be52bcbf66( /*0x100acc0c5*/
            &v133,
            v159,
            v117);
        }
        v93 = v136; /*0x100acc0ca*/
        v94 = v137; /*0x100acc0d1*/
        if ( (unsigned __int8)codexmate_lib::core::relay::codex_project_state::is_codex_generated_projectless_dir::h356511d0c1e10a8c( /*0x100acc108*/
                                v136,
                                v137)
          || (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v159, &v135),
              (unsigned __int8)alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5131593e901fe385(
                                 v121,
                                 v159)) )
        {
          if ( v135 ) /*0x100acc11b*/
            *(double *)v74.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v135, 1); /*0x100acc125*/
        }
        else
        {
          v95 = v135; /*0x100acc12c*/
          v96 = v149; /*0x100acc133*/
          if ( v149 == v147 ) /*0x100acc141*/
            *(double *)v74.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v147); /*0x100acc14a*/
          v97 = v148; /*0x100acc14f*/
          v98 = 3 * v96; /*0x100acc156*/
          *(_QWORD *)(v148 + 8 * v98) = v95; /*0x100acc15a*/
          *(_QWORD *)(v97 + 8 * v98 + 8) = v93; /*0x100acc15e*/
          *(_QWORD *)(v97 + 8 * v98 + 16) = v94; /*0x100acc163*/
          v149 = v96 + 1; /*0x100acc16b*/
          v84 = v162; /*0x100acc172*/
        }
        v28 = v84; /*0x100acc176*/
        v90 = v84; /*0x100acc179*/
        v91 = v161; /*0x100acc17c*/
        v70 = v161; /*0x100acc180*/
        v92 = v151; /*0x100acc183*/
        if ( v151 ) /*0x100acc18d*/
        {
          v76 = v143; /*0x100acbd65*/
LABEL_95:
          *(double *)v74.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v92, 1); /*0x100acbd6c*/
          v28 = v90; /*0x100acbd71*/
          v70 = v91; /*0x100acbd74*/
          continue; /*0x100acbd74*/
        }
      }
      else
      {
        if ( v135 ) /*0x100acbfd4*/
          *(double *)v74.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, v135, 1); /*0x100acbfe2*/
        v90 = v162; /*0x100acbfea*/
        v91 = v161; /*0x100acbfee*/
        if ( v82 ) /*0x100acbff2*/
          *(double *)v74.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v82, 1); /*0x100acbfff*/
        v28 = v90; /*0x100acc004*/
        v70 = v91; /*0x100acc007*/
        v92 = v157; /*0x100acc00a*/
        if ( v157 ) /*0x100acc014*/
        {
          v76 = v90; /*0x100acc01f*/
          goto LABEL_95; /*0x100acc022*/
        }
      }
    }
  }
  core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v138); /*0x100acc217*/
  v99 = v152.i64[0]; /*0x100acc21c*/
  v100 = v125; /*0x100acc223*/
  if ( v144 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100acc246*/
  {
    v158.i64[0] = (__int64)&v131; /*0x100acc253*/
    v158.i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100acc261*/
    *(_QWORD *)v159 = "codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''"; /*0x100acc26f*/
    *(_QWORD *)&v159[8] = 47; /*0x100acc276*/
    *(_QWORD *)&v159[16] = "codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''"; /*0x100acc281*/
    *(_QWORD *)&v159[24] = 47; /*0x100acc288*/
    *(_QWORD *)&v159[32] = &off_101974788; /*0x100acc29a*/
    v101 = v152.i64[0]; /*0x100acc2bb*/
    v102 = v125; /*0x100acc2be*/
    log::__private_api::log::h719f4907c7336ae9(&unk_1017CA266, &v158, 2, v159); /*0x100acc2c1*/
    v100 = v102; /*0x100acc2c6*/
    v99 = v101; /*0x100acc2c9*/
  }
  v103 = codexmate_lib::core::relay::codex_project_state::collect_cwd_backfill_candidates::hd04b9c2866391954( /*0x100acc2e8*/
           (__m256i *)v159,
           (__int64)v116,
           (unsigned __int16 *)v156,
           *((size_t *)&v156 + 1),
           v100,
           v99,
           v74);
  if ( *(_QWORD *)v159 == 0x8000000000000016LL ) /*0x100acc2f4*/
  {
    v104 = *(_QWORD *)&v159[24]; /*0x100acc301*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_project_state..CwdBackfillCandidate$GT$$GT$::hd3a2aef879887b6b( /*0x100acc308*/
      &v159[8],
      v103);
  }
  else
  {
    v158 = *(__m512i *)v159; /*0x100acc67c*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v158); /*0x100acc6e3*/
    v104 = 0; /*0x100acc6e8*/
  }
  v155 = v147; /*0x100acc6f1*/
  v14 = v148; /*0x100acc6f8*/
  *(_QWORD *)&v156 = v149; /*0x100acc706*/
  v152 = _mm_load_si128(&v126); /*0x100acc715*/
  v107 = v127; /*0x100acc71d*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc212aaf405e0d390(v121); /*0x100acc72b*/
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v145); /*0x100acc737*/
  if ( v150 ) /*0x100acc746*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, v150, 1); /*0x100acc754*/
  v13 = (__m512i *)&v123; /*0x100acc759*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc212aaf405e0d390(&v123); /*0x100acc760*/
  v154 = 8; /*0x100acc76a*/
  *((_QWORD *)&v156 + 1) = 0; /*0x100acc771*/
  v28 = 0; /*0x100acc77c*/
  v108 = v155; /*0x100acc783*/
  if ( v155 != 0x8000000000000000LL ) /*0x100acc78d*/
  {
LABEL_155:
    v114 = v141; /*0x100acc793*/
    *v141 = v108; /*0x100acc79a*/
    v114[1] = v14; /*0x100acc79d*/
    *((_OWORD *)v114 + 1) = v156; /*0x100acc7a8*/
    v114[4] = v154; /*0x100acc7be*/
    v114[5] = v28; /*0x100acc7c2*/
    v114[6] = v160; /*0x100acc7ca*/
    a5 = (__m128)_mm_load_si128(&v152); /*0x100acc7ce*/
    *(__m128 *)(v114 + 7) = a5; /*0x100acc7d6*/
    v114[9] = v107; /*0x100acc7db*/
    v114[10] = v104; /*0x100acc7df*/
    goto LABEL_156; /*0x100acc7df*/
  }
LABEL_148:
  v16 = v156; /*0x100acc4e8*/
  v15 = v154; /*0x100acc4f6*/
  v27 = v160; /*0x100acc4fd*/
  a5 = (__m128)_mm_load_si128(&v152); /*0x100acc501*/
LABEL_149:
  *(_QWORD *)v159 = v14; /*0x100acc509*/
  *(_OWORD *)&v159[8] = v16; /*0x100acc510*/
  *(_QWORD *)&v159[24] = v15; /*0x100acc51e*/
  *(_QWORD *)&v159[32] = v28; /*0x100acc525*/
  *(_QWORD *)&v159[40] = v27; /*0x100acc52c*/
  *(__m128 *)&v159[48] = a5; /*0x100acc533*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v27); /*0x100acc538*/
  v109 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100acc547*/
  if ( !v109 ) /*0x100acc54f*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100acc839*/
  v110 = (_QWORD *)v109; /*0x100acc555*/
  v133 = v153; /*0x100acc55f*/
  v134[0] = v132; /*0x100acc56d*/
  v158.i64[0] = (__int64)&v133; /*0x100acc57b*/
  v158.i64[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100acc589*/
  v158.i64[2] = (__int64)v159; /*0x100acc597*/
  v158.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100acc5a5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v145, &unk_1017B9AD3, &v158); /*0x100acc5c1*/
  v110[2] = *(_QWORD *)&v145[16]; /*0x100acc5cd*/
  v111 = *(_QWORD *)v145; /*0x100acc5d1*/
  v110[1] = *(_QWORD *)&v145[8]; /*0x100acc5df*/
  *v110 = v111; /*0x100acc5e3*/
  *(__int128 *)((char *)v158.i128 + 8) = 0u; /*0x100acc5f1*/
  v112 = v141; /*0x100acc5fc*/
  v141[6] = 0; /*0x100acc603*/
  *v112 = 0; /*0x100acc60b*/
  v112[1] = 8; /*0x100acc612*/
  v112[2] = 0; /*0x100acc61a*/
  v112[7] = 0; /*0x100acc622*/
  v113 = v158.i64[1]; /*0x100acc631*/
  v112[8] = v158.i64[0]; /*0x100acc638*/
  v112[9] = v113; /*0x100acc63c*/
  v112[10] = 0; /*0x100acc640*/
  v112[3] = 1; /*0x100acc648*/
  v112[4] = (unsigned __int64)v110; /*0x100acc650*/
  v112[5] = 1; /*0x100acc654*/
  core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v159); /*0x100acc663*/
LABEL_156:
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v116); /*0x100acc7e3*/
LABEL_157:
  if ( v140 ) /*0x100acc7f9*/
    *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v153, v140, 1); /*0x100acc807*/
  return *(double *)a5.i64; /*0x100acc80c*/
}