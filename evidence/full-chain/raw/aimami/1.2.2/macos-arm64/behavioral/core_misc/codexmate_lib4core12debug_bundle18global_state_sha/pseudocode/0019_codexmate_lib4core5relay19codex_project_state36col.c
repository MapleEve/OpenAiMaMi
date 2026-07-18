// mac 1.2.2 NEW codexmate_lib4core12debug_bundle18global_state_sha 0x100859b50 d=2
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::collect_project_state_from_active_db::h4755e45a6a30ea90(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // rbx
  size_t v10; // rax
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int128 v15; // kr10_16
  __int64 i; // rcx
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // r12
  size_t v21; // rdx
  size_t v22; // rbx
  __int64 v23; // rbx
  int v24; // eax
  char v25; // cl
  __int128 v26; // rdi
  __m128i v27; // xmm0
  __int64 j; // rcx
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // r12
  size_t v33; // rdx
  size_t v34; // rbx
  __int64 v35; // rbx
  int v36; // eax
  char v37; // cl
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r15
  __int64 v42; // rbx
  size_t v43; // rdx
  size_t v44; // r12
  __int64 v45; // r12
  int v46; // eax
  char v47; // cl
  __int64 v48; // rax
  void *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // r15
  __int64 v54; // r12
  size_t v55; // rdx
  size_t v56; // rbx
  __int64 v57; // rbx
  int v58; // eax
  char v59; // cl
  __int64 v60; // rax
  void *v61; // rcx
  __int64 v62; // r14
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  unsigned __int64 v68; // rax
  _QWORD *v69; // rsi
  __int64 v70; // r14
  bool v71; // zf
  __int64 v72; // rbx
  __int64 v73; // r15
  __m128i v74; // xmm0
  int v75; // eax
  size_t **v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // r14
  __int64 v80; // r12
  __int64 v81; // rbx
  __int64 v82; // r15
  __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // rbx
  unsigned __int64 v86; // r14
  __int64 k; // rax
  __int64 v88; // rax
  _QWORD *v89; // rbx
  size_t v90; // rax
  unsigned __int64 *v91; // rdx
  __int64 v92; // rcx
  unsigned __int64 *v93; // rax
  _BYTE v94[112]; // [rsp+0h] [rbp-300h] BYREF
  size_t v95[3]; // [rsp+70h] [rbp-290h] BYREF
  _QWORD v96[2]; // [rsp+88h] [rbp-278h] BYREF
  _QWORD v97[3]; // [rsp+98h] [rbp-268h] BYREF
  _QWORD v98[2]; // [rsp+B0h] [rbp-250h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-240h] BYREF
  __int128 v100; // [rsp+C8h] [rbp-238h]
  __int64 v101; // [rsp+D8h] [rbp-228h]
  __m128i v102; // [rsp+E0h] [rbp-220h] BYREF
  unsigned __int64 v103; // [rsp+F0h] [rbp-210h]
  __int64 v104; // [rsp+100h] [rbp-200h]
  __int64 v105; // [rsp+108h] [rbp-1F8h] BYREF
  __int64 v106; // [rsp+110h] [rbp-1F0h]
  __int64 v107; // [rsp+118h] [rbp-1E8h]
  unsigned __int64 *v108; // [rsp+120h] [rbp-1E0h]
  __int64 v109; // [rsp+128h] [rbp-1D8h]
  size_t **v110; // [rsp+130h] [rbp-1D0h] BYREF
  _BYTE v111[40]; // [rsp+138h] [rbp-1C8h]
  sqlite3_stmt *v112[2]; // [rsp+160h] [rbp-1A0h]
  size_t *v113; // [rsp+170h] [rbp-190h] BYREF
  __int64 v114; // [rsp+178h] [rbp-188h] BYREF
  __int64 v115; // [rsp+180h] [rbp-180h]
  size_t *v116; // [rsp+188h] [rbp-178h] BYREF
  _QWORD v117[2]; // [rsp+190h] [rbp-170h] BYREF
  unsigned __int64 v118; // [rsp+1A0h] [rbp-160h] BYREF
  __int64 v119; // [rsp+1A8h] [rbp-158h]
  __int64 v120; // [rsp+1B0h] [rbp-150h]
  size_t *v121; // [rsp+1B8h] [rbp-148h]
  __int64 v122; // [rsp+1C0h] [rbp-140h]
  unsigned __int64 v123; // [rsp+1C8h] [rbp-138h]
  __int64 v124; // [rsp+1D0h] [rbp-130h]
  __int64 v125; // [rsp+1D8h] [rbp-128h]
  __m128i v126; // [rsp+1E0h] [rbp-120h] BYREF
  __m512i v127; // [rsp+1F8h] [rbp-108h] BYREF
  _BYTE v128[112]; // [rsp+238h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+2A8h] [rbp-58h]
  unsigned __int64 v130; // [rsp+2B0h] [rbp-50h]
  __int64 v131; // [rsp+2B8h] [rbp-48h]
  __int64 v132; // [rsp+2C0h] [rbp-40h]
  __int64 v133; // [rsp+2C8h] [rbp-38h]
  __int64 v134; // [rsp+2D0h] [rbp-30h]

  result = codexmate_lib::core::relay::codex_project_state::active_db_path::he8748f26520f8c0b(v128, a2); /*0x100859b7e*/
  v7 = *(_QWORD *)v128; /*0x100859b83*/
  v123 = 0x8000000000000000LL; /*0x100859b8e*/
  if ( *(_QWORD *)v128 == 0x8000000000000000LL ) /*0x100859b98*/
  {
    a1[6] = 0; /*0x100859b9a*/
    *a1 = 0; /*0x100859ba2*/
    a1[1] = 8; /*0x100859ba9*/
    a1[7] = 0; /*0x100859bb1*/
    a1[2] = 0; /*0x100859bb9*/
    a1[3] = 0; /*0x100859bc1*/
    a1[9] = 0; /*0x100859bc9*/
    a1[10] = 0; /*0x100859bd1*/
    a1[4] = 8; /*0x100859bd9*/
    a1[5] = 0; /*0x100859be1*/
    return result; /*0x100859be9*/
  }
  v108 = a1; /*0x100859bee*/
  v121 = *(size_t **)&v128[8]; /*0x100859c0a*/
  v104 = *(_QWORD *)&v128[16]; /*0x100859c11*/
  rusqlite::Connection::open_with_flags::he05a01f64a2af598(v128, *(_QWORD *)&v128[8], *(_QWORD *)&v128[16], 32769); /*0x100859c1d*/
  if ( v128[104] == 3 ) /*0x100859c26*/
  {
    v127 = *(__m512i *)v128; /*0x100859c41*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100859c9c*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x100859cab*/
    if ( !v8 ) /*0x100859cb3*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10085b04a*/
    v9 = (_QWORD *)v8; /*0x100859cb9*/
    v116 = v121; /*0x100859cc3*/
    v117[0] = v104; /*0x100859cd1*/
    v110 = &v116; /*0x100859cdf*/
    *(_QWORD *)v111 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100859ced*/
    *(_QWORD *)&v111[8] = &v127; /*0x100859cfb*/
    *(_QWORD *)&v111[16] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100859d09*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v95, byte_1016F1327, (unsigned __int64)&v110); /*0x100859d25*/
    v9[2] = v95[2]; /*0x100859d31*/
    v10 = v95[0]; /*0x100859d35*/
    v9[1] = v95[1]; /*0x100859d43*/
    *v9 = v10; /*0x100859d47*/
    *(_QWORD *)&v111[8] = 0; /*0x100859d4a*/
    *(_QWORD *)v111 = 0; /*0x100859d55*/
    v11 = v108; /*0x100859d60*/
    v108[6] = 0; /*0x100859d67*/
    *v11 = 0; /*0x100859d6f*/
    v11[1] = 8; /*0x100859d76*/
    v11[2] = 0; /*0x100859d7e*/
    v11[7] = 0; /*0x100859d86*/
    v12 = *(_QWORD *)v111; /*0x100859d95*/
    v11[8] = (unsigned __int64)v110; /*0x100859d9c*/
    v11[9] = v12; /*0x100859da0*/
    v11[10] = 0; /*0x100859da4*/
    v11[3] = 1; /*0x100859dac*/
    v11[4] = (unsigned __int64)v9; /*0x100859db4*/
    v11[5] = 1; /*0x100859db8*/
    result = core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v127); /*0x100859dc7*/
    goto LABEL_150; /*0x100859dcc*/
  }
  v130 = a3; /*0x100859dd1*/
  qmemcpy(v94, v128, sizeof(v94)); /*0x100859deb*/
  v125 = v7; /*0x100859dff*/
  rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v128, v94, 0, 500000000); /*0x100859e06*/
  if ( *(_QWORD *)v128 != 0x8000000000000016LL ) /*0x100859e12*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(v128); /*0x100859e1b*/
  codexmate_lib::core::relay::codex_project_state::sqlite_table_columns::h698b75afd626a269(v128, v94); /*0x100859e2e*/
  v13 = *(_QWORD *)&v128[8]; /*0x100859e3a*/
  v14 = *(_QWORD *)v128; /*0x100859e3a*/
  v15 = *(_OWORD *)&v128[16]; /*0x100859e48*/
  if ( *(_QWORD *)v128 != 0x8000000000000016LL ) /*0x100859e52*/
  {
    v26 = *(_OWORD *)&v128[32]; /*0x100859f58*/
    v27 = _mm_loadu_si128((const __m128i *)&v128[48]); /*0x100859f66*/
    goto LABEL_146; /*0x100859f6e*/
  }
  v99 = *(_QWORD *)&v128[8]; /*0x100859e58*/
  v100 = *(_OWORD *)&v128[16]; /*0x100859e5f*/
  if ( !*(_QWORD *)&v128[8] ) /*0x100859e70*/
  {
    v126 = 0; /*0x10085a34f*/
    v14 = 8; /*0x10085a357*/
    v123 = 0; /*0x10085a35d*/
    v63 = 8; /*0x10085a368*/
    v132 = 0; /*0x10085a36d*/
    v130 = 0; /*0x10085a375*/
    v64 = 0; /*0x10085a37d*/
    v129 = 0; /*0x10085a37f*/
    v65 = 0; /*0x10085a387*/
    v66 = 0; /*0x10085a389*/
    goto LABEL_139; /*0x10085a38b*/
  }
  v101 = a4; /*0x100859e76*/
  v122 = *(_QWORD *)&v128[24]; /*0x100859e7d*/
  v134 = 0; /*0x100859e84*/
  v131 = *(_QWORD *)&v128[16]; /*0x100859e93*/
  v133 = *(_QWORD *)&v128[16]; /*0x100859e97*/
  v129 = *(_QWORD *)&v128[8]; /*0x100859e9b*/
  for ( i = *(_QWORD *)&v128[8]; ; i = *(_QWORD *)(v132 + 8 * v19 + 280) ) /*0x100859e9f*/
  {
    v17 = i + 8; /*0x100859ea2*/
    v132 = i; /*0x100859ea6*/
    v126.i64[0] = *(unsigned __int16 *)(i + 274); /*0x100859eb1*/
    v18 = 3LL * (unsigned int)(8 * v126.i32[0]); /*0x100859ebf*/
    v19 = -1; /*0x100859ec3*/
    do /*0x100859f1c*/
    {
      if ( !v18 ) /*0x100859ed3*/
      {
        v19 = v126.i64[0]; /*0x100859f27*/
        goto LABEL_21; /*0x100859f27*/
      }
      v20 = v17 + 24; /*0x100859ed5*/
      v21 = *(_QWORD *)(v17 + 16); /*0x100859edd*/
      v22 = v21 - 2; /*0x100859ee4*/
      if ( v21 >= 2 ) /*0x100859eed*/
        v21 = 2; /*0x100859eed*/
      v23 = -(__int64)v22; /*0x100859ef1*/
      v24 = memcmp("idassistanttool_callsreasoning_content", *(const void **)(v17 + 8), v21); /*0x100859ef7*/
      if ( v24 ) /*0x100859f00*/
        v23 = v24; /*0x100859f00*/
      v25 = (v23 > 0) - (v23 < 0); /*0x100859f0d*/
      ++v19; /*0x100859f0f*/
      v18 -= 24; /*0x100859f12*/
      v17 = v20; /*0x100859f16*/
    }
    while ( v25 == 1 ); /*0x100859f1c*/
    if ( !v25 ) /*0x100859f23*/
      break; /*0x100859f23*/
LABEL_21:
    v7 = v125; /*0x100859f2e*/
    if ( !v133 ) /*0x100859f3d*/
    {
LABEL_73:
      v126 = 0; /*0x10085a4a8*/
      v63 = 8; /*0x10085a4b4*/
      v133 = 0; /*0x10085a4b9*/
      v130 = 0; /*0x10085a4c1*/
      v132 = 0; /*0x10085a4c9*/
      v14 = 8; /*0x10085a4d1*/
      v123 = 0; /*0x10085a4d7*/
      v70 = v131; /*0x10085a4ec*/
      goto LABEL_138; /*0x10085a4f0*/
    }
    --v133; /*0x100859f43*/
  }
  v134 = 0; /*0x100859f73*/
  v133 = v131; /*0x100859f86*/
  for ( j = v129; ; j = *(_QWORD *)(v132 + 8 * v31 + 280) ) /*0x100859f8a*/
  {
    v29 = j + 8; /*0x100859f8e*/
    v132 = j; /*0x100859f92*/
    v126.i64[0] = *(unsigned __int16 *)(j + 274); /*0x100859f9d*/
    v30 = 3LL * (unsigned int)(8 * v126.i32[0]); /*0x100859fab*/
    v31 = -1; /*0x100859faf*/
    do /*0x10085a00c*/
    {
      if ( !v30 ) /*0x100859fc3*/
      {
        v31 = v126.i64[0]; /*0x10085a017*/
        goto LABEL_35; /*0x10085a017*/
      }
      v32 = v29 + 24; /*0x100859fc5*/
      v33 = *(_QWORD *)(v29 + 16); /*0x100859fcd*/
      v34 = v33 - 3; /*0x100859fd4*/
      if ( v33 >= 3 ) /*0x100859fdd*/
        v33 = 3; /*0x100859fdd*/
      v35 = -(__int64)v34; /*0x100859fe1*/
      v36 = memcmp(&unk_101599B35, *(const void **)(v29 + 8), v33); /*0x100859fe7*/
      if ( v36 ) /*0x100859ff0*/
        v35 = v36; /*0x100859ff0*/
      v37 = (v35 > 0) - (v35 < 0); /*0x100859ffd*/
      ++v31; /*0x100859fff*/
      v30 -= 24; /*0x10085a002*/
      v29 = v32; /*0x10085a006*/
    }
    while ( v37 == 1 ); /*0x10085a00c*/
    if ( !v37 ) /*0x10085a013*/
      break; /*0x10085a013*/
LABEL_35:
    v7 = v125; /*0x10085a01e*/
    if ( !v133 ) /*0x10085a02d*/
      goto LABEL_73; /*0x10085a02d*/
    --v133; /*0x10085a033*/
  }
  v134 = v131; /*0x10085a053*/
  v38 = v129; /*0x10085a057*/
  while ( 2 ) /*0x10085a05b*/
  {
    v39 = v38 + 8; /*0x10085a05b*/
    v133 = v38; /*0x10085a05f*/
    v132 = *(unsigned __int16 *)(v38 + 274); /*0x10085a06a*/
    v40 = 3LL * (unsigned int)(8 * v132); /*0x10085a075*/
    v41 = -1; /*0x10085a079*/
    do /*0x10085a0cc*/
    {
      if ( !v40 ) /*0x10085a083*/
      {
        v41 = v132; /*0x10085a0d7*/
        goto LABEL_48; /*0x10085a0d7*/
      }
      v42 = v39 + 24; /*0x10085a085*/
      v43 = *(_QWORD *)(v39 + 16); /*0x10085a08d*/
      v44 = v43 - 8; /*0x10085a094*/
      if ( v43 >= 8 ) /*0x10085a09d*/
        v43 = 8; /*0x10085a09d*/
      v45 = -(__int64)v44; /*0x10085a0a1*/
      v46 = memcmp("archivedidentitytrailers", *(const void **)(v39 + 8), v43); /*0x10085a0a7*/
      if ( v46 ) /*0x10085a0b0*/
        v45 = v46; /*0x10085a0b0*/
      v47 = (v45 > 0) - (v45 < 0); /*0x10085a0bd*/
      ++v41; /*0x10085a0bf*/
      v40 -= 24; /*0x10085a0c2*/
      v39 = v42; /*0x10085a0c6*/
    }
    while ( v47 == 1 ); /*0x10085a0cc*/
    if ( !v47 ) /*0x10085a0d3*/
    {
      v48 = 25; /*0x10085a0fe*/
      v49 = &unk_101599B87; /*0x10085a103*/
      goto LABEL_51; /*0x10085a103*/
    }
LABEL_48:
    if ( v134 ) /*0x10085a0e3*/
    {
      --v134; /*0x10085a0e9*/
      v38 = *(_QWORD *)(v133 + 8 * v41 + 280); /*0x10085a0f1*/
      continue; /*0x10085a0f9*/
    }
    break;
  }
  v48 = 5; /*0x10085a552*/
  v49 = &unk_101599BA0; /*0x10085a557*/
LABEL_51:
  v98[0] = v49; /*0x10085a10a*/
  v98[1] = v48; /*0x10085a111*/
  v134 = v131; /*0x10085a123*/
  v50 = v129; /*0x10085a127*/
  while ( 2 ) /*0x10085a12b*/
  {
    v51 = v50 + 8; /*0x10085a12b*/
    v133 = v50; /*0x10085a12f*/
    v132 = *(unsigned __int16 *)(v50 + 274); /*0x10085a13a*/
    v52 = 3LL * (unsigned int)(8 * v132); /*0x10085a145*/
    v53 = -1; /*0x10085a149*/
    do /*0x10085a19c*/
    {
      if ( !v52 ) /*0x10085a153*/
      {
        v53 = v132; /*0x10085a1a7*/
        goto LABEL_62; /*0x10085a1a7*/
      }
      v54 = v51 + 24; /*0x10085a155*/
      v55 = *(_QWORD *)(v51 + 16); /*0x10085a15d*/
      v56 = v55 - 13; /*0x10085a164*/
      if ( v55 >= 0xD ) /*0x10085a16d*/
        v55 = 13; /*0x10085a16d*/
      v57 = -(__int64)v56; /*0x10085a171*/
      v58 = memcmp(&unk_101599BCC, *(const void **)(v51 + 8), v55); /*0x10085a177*/
      if ( v58 ) /*0x10085a180*/
        v57 = v58; /*0x10085a180*/
      v59 = (v57 > 0) - (v57 < 0); /*0x10085a18d*/
      ++v53; /*0x10085a18f*/
      v52 -= 24; /*0x10085a192*/
      v51 = v54; /*0x10085a196*/
    }
    while ( v59 == 1 ); /*0x10085a19c*/
    if ( !v59 ) /*0x10085a1a3*/
    {
      v60 = 26; /*0x10085a1d5*/
      v61 = &unk_101599BD9; /*0x10085a1da*/
      v7 = v125; /*0x10085a1e1*/
      goto LABEL_65; /*0x10085a1e1*/
    }
LABEL_62:
    v7 = v125; /*0x10085a1ab*/
    if ( v134 ) /*0x10085a1ba*/
    {
      --v134; /*0x10085a1c0*/
      v50 = *(_QWORD *)(v133 + 8 * v53 + 280); /*0x10085a1c8*/
      continue; /*0x10085a1d0*/
    }
    break;
  }
  v71 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3883abf83e3e72e1(&v99, &unk_101599BF3, 10) == 0; /*0x10085a57b*/
  v60 = 23; /*0x10085a583*/
  if ( v71 ) /*0x10085a588*/
    v60 = 1; /*0x10085a588*/
  v61 = &unk_101599BFD; /*0x10085a593*/
  if ( v71 ) /*0x10085a59a*/
    v61 = &unk_101599C14; /*0x10085a59a*/
LABEL_65:
  v96[0] = v61; /*0x10085a1e8*/
  v96[1] = v60; /*0x10085a1ef*/
  v127.i64[0] = (__int64)v98; /*0x10085a1fd*/
  v127.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x10085a20b*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)v128, byte_1016F87E4, (unsigned __int64)&v127); /*0x10085a227*/
  v62 = *(_QWORD *)v128; /*0x10085a22c*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v128, v94, *(_QWORD *)&v128[8], *(_QWORD *)&v128[16]); /*0x10085a252*/
  v127 = *(__m512i *)&v128[8]; /*0x10085a264*/
  if ( *(_DWORD *)v128 != 1 ) /*0x10085a2d0*/
  {
    *(_OWORD *)v112 = v127.i128[3]; /*0x10085a3a5*/
    *(_OWORD *)&v111[24] = v127.i128[2]; /*0x10085a3c1*/
    *(_OWORD *)&v111[8] = v127.i128[1]; /*0x10085a3dd*/
    *(_QWORD *)v111 = v127.i64[1]; /*0x10085a3f2*/
    v110 = (size_t **)v127.i64[0]; /*0x10085a3f9*/
    v67 = sqlite3_bind_parameter_count((sqlite3_stmt *)v127.i64[7]); /*0x10085a407*/
    if ( v67 ) /*0x10085a40e*/
    {
      *(_OWORD *)v128 = 0x8000000000000013LL; /*0x10085a420*/
      *(_QWORD *)&v128[16] = v67; /*0x10085a432*/
LABEL_84:
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(&v110); /*0x10085a615*/
      goto LABEL_85; /*0x10085a61c*/
    }
    v116 = (size_t *)&v110; /*0x10085a445*/
    v117[0] = 0; /*0x10085a44c*/
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10085a465*/
      v128,
      &v116);
    v68 = *(_QWORD *)v128; /*0x10085a474*/
    if ( *(_QWORD *)v128 == 0x8000000000000016LL ) /*0x10085a47e*/
    {
      v69 = v117; /*0x10085a480*/
      if ( v117[0] ) /*0x10085a48f*/
      {
        rusqlite::row::Row::get::he3f9561efa4fc2f8(v128, v117, 0, 0x8000000000000016LL); /*0x10085a49e*/
LABEL_83:
        core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h546317856ed6037f(&v116); /*0x10085a609*/
        goto LABEL_84; /*0x10085a610*/
      }
      v68 = 0x8000000000000009LL; /*0x10085a5a3*/
    }
    else
    {
      v69 = *(_QWORD **)&v128[8]; /*0x10085a4f5*/
      v127.i128[0] = *(_OWORD *)&v128[16]; /*0x10085a503*/
      v127.i128[1] = *(_OWORD *)&v128[32]; /*0x10085a51f*/
      v127.i128[2] = *(_OWORD *)&v128[48]; /*0x10085a542*/
    }
    *(_QWORD *)v128 = v68; /*0x10085a5a7*/
    *(_QWORD *)&v128[8] = v69; /*0x10085a5ae*/
    *(_OWORD *)&v128[16] = v127.i128[0]; /*0x10085a5c3*/
    *(_OWORD *)&v128[32] = v127.i128[1]; /*0x10085a5d8*/
    *(_OWORD *)&v128[48] = v127.i128[2]; /*0x10085a5f4*/
    goto LABEL_83; /*0x10085a5f4*/
  }
  *(__m512i *)v128 = v127; /*0x10085a2eb*/
LABEL_85:
  v72 = *(_QWORD *)&v128[8]; /*0x10085a621*/
  v73 = *(_QWORD *)v128; /*0x10085a628*/
  if ( *(_QWORD *)v128 != 0x8000000000000016LL ) /*0x10085a63c*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(v128); /*0x10085a645*/
  if ( v72 <= 0 ) /*0x10085a64f*/
    v72 = 0; /*0x10085a64f*/
  if ( v73 != 0x8000000000000016LL ) /*0x10085a663*/
    v72 = 0; /*0x10085a663*/
  v132 = v72; /*0x10085a667*/
  if ( v62 ) /*0x10085a66e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085a67b*/
  *(_QWORD *)v128 = v98; /*0x10085a687*/
  *(_QWORD *)&v128[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x10085a695*/
  *(_QWORD *)&v128[16] = v96; /*0x10085a6a3*/
  *(_QWORD *)&v128[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x10085a6aa*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v127, byte_1016F880A, (unsigned __int64)v128); /*0x10085a6c6*/
  v109 = v127.i64[1]; /*0x10085a6f5*/
  v115 = v127.i64[0]; /*0x10085a6f5*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v128, v94, v127.i64[1], v127.i64[2]); /*0x10085a6fc*/
  v70 = v131; /*0x10085a701*/
  v14 = *(_QWORD *)&v128[8]; /*0x10085a705*/
  v63 = *(_QWORD *)&v128[32]; /*0x10085a71a*/
  v74 = _mm_loadu_si128((const __m128i *)&v128[56]); /*0x10085a72f*/
  if ( v128[0] ) /*0x10085a73e*/
  {
    v132 = *(_QWORD *)&v128[48]; /*0x10085a740*/
    v130 = *(_QWORD *)&v128[40]; /*0x10085a744*/
    v126 = v74; /*0x10085a748*/
    v133 = *(_QWORD *)&v128[24]; /*0x10085a750*/
    v134 = *(_QWORD *)&v128[16]; /*0x10085a754*/
    goto LABEL_136; /*0x10085a758*/
  }
  v110 = *(size_t ***)&v128[8]; /*0x10085a75d*/
  *(_OWORD *)v111 = *(_OWORD *)&v128[16]; /*0x10085a764*/
  *(_OWORD *)&v111[16] = *(_OWORD *)&v128[32]; /*0x10085a772*/
  *(_QWORD *)&v111[32] = *(_QWORD *)&v128[48]; /*0x10085a780*/
  *(__m128i *)v112 = v74; /*0x10085a78e*/
  v75 = sqlite3_bind_parameter_count((sqlite3_stmt *)_mm_extract_epi64(v74, 1)); /*0x10085a796*/
  if ( v75 ) /*0x10085a7a0*/
  {
    v133 = v75; /*0x10085a7a2*/
    v14 = 0x8000000000000013LL; /*0x10085a7a6*/
    v134 = 0; /*0x10085a7aa*/
LABEL_135:
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(&v110); /*0x10085ad18*/
LABEL_136:
    if ( v115 ) /*0x10085ad2e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085ad3c*/
LABEL_138:
    v66 = v122; /*0x10085ad41*/
    *(_QWORD *)&v128[8] = 0; /*0x10085ad48*/
    *(_QWORD *)&v128[16] = v129; /*0x10085ad57*/
    *(_QWORD *)&v128[24] = v70; /*0x10085ad5e*/
    *(_QWORD *)&v128[40] = 0; /*0x10085ad65*/
    *(_QWORD *)&v128[48] = v129; /*0x10085ad70*/
    *(_QWORD *)&v128[56] = v70; /*0x10085ad77*/
    v65 = 1; /*0x10085ad7e*/
    v64 = v133; /*0x10085ad83*/
    v129 = v134; /*0x10085ad8b*/
LABEL_139:
    v122 = v63; /*0x10085ad8f*/
    v131 = v64; /*0x10085ad96*/
    *(_QWORD *)v128 = v65; /*0x10085ad9a*/
    *(_QWORD *)&v128[32] = v65; /*0x10085ada1*/
    *(_QWORD *)&v128[64] = v66; /*0x10085ada8*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a( /*0x10085adbd*/
      (unsigned __int64 *)&v127,
      (__int64)v128);
    for ( k = v127.i64[0]; v127.i64[0]; k = v127.i64[0] ) /*0x10085adcc*/
    {
      if ( *(_QWORD *)(k + 24 * v127.i64[2] + 8) ) /*0x10085adeb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085ae03*/
      alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a( /*0x10085ae0e*/
        (unsigned __int64 *)&v127,
        (__int64)v128);
    }
    v86 = 0; /*0x10085ae1f*/
    v85 = 0; /*0x10085ae22*/
    goto LABEL_144; /*0x10085ae22*/
  }
  v118 = 0; /*0x10085a7b7*/
  v119 = 8; /*0x10085a7c2*/
  v120 = 0; /*0x10085a7cd*/
  v97[0] = 0; /*0x10085a7d8*/
  v97[2] = 0; /*0x10085a7e3*/
  v102.i64[0] = 0; /*0x10085a7ee*/
  v103 = 0; /*0x10085a7f9*/
  v113 = (size_t *)&v110; /*0x10085a80b*/
  v114 = 0; /*0x10085a812*/
  while ( 1 ) /*0x10085a823*/
  {
    v76 = &v113; /*0x10085a823*/
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10085a82a*/
      v128,
      &v113);
    v70 = v131; /*0x10085a82f*/
    v14 = *(_QWORD *)v128; /*0x10085a833*/
    if ( *(_QWORD *)v128 != 0x8000000000000016LL ) /*0x10085a83d*/
    {
      v134 = *(_QWORD *)&v128[8]; /*0x10085aab1*/
      v63 = *(_QWORD *)&v128[24]; /*0x10085aac0*/
      v133 = *(_QWORD *)&v128[16]; /*0x10085aac0*/
LABEL_122:
      v132 = *(_QWORD *)&v128[40]; /*0x10085aac7*/
      v130 = *(_QWORD *)&v128[32]; /*0x10085aad9*/
      v126 = _mm_loadu_si128((const __m128i *)&v128[48]); /*0x10085aae5*/
LABEL_133:
      core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h546317856ed6037f(&v113); /*0x10085acc3*/
      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he718097c6c64b5f3( /*0x10085acd6*/
        &v102,
        v76);
      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4ddde6934d10beef(v97); /*0x10085ace2*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h80d854279f2bc02b(&v118); /*0x10085acee*/
      if ( v118 ) /*0x10085acfd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085ad13*/
      goto LABEL_135; /*0x10085ad13*/
    }
    if ( !v114 ) /*0x10085a84b*/
      break; /*0x10085a84b*/
    v76 = (size_t **)&v114; /*0x10085a854*/
    rusqlite::row::Row::get::h6ee44dbb4cb5afdf(v128, &v114, 0, v77); /*0x10085a85d*/
    v134 = *(_QWORD *)&v128[8]; /*0x10085a870*/
    v14 = *(_QWORD *)v128; /*0x10085a870*/
    v63 = *(_QWORD *)&v128[24]; /*0x10085a87f*/
    v133 = *(_QWORD *)&v128[16]; /*0x10085a87f*/
    if ( *(_QWORD *)v128 != 0x8000000000000016LL ) /*0x10085a889*/
      goto LABEL_122; /*0x10085a889*/
    rusqlite::row::Row::get::h6ee44dbb4cb5afdf(v128, &v114, 1, v78); /*0x10085a8a2*/
    v124 = *(_QWORD *)&v128[8]; /*0x10085a8b5*/
    v14 = *(_QWORD *)v128; /*0x10085a8b5*/
    v79 = *(_QWORD *)&v128[16]; /*0x10085a8bc*/
    if ( *(_QWORD *)v128 != 0x8000000000000016LL ) /*0x10085a8cd*/
    {
      v132 = *(_QWORD *)&v128[40]; /*0x10085ab56*/
      v130 = *(_QWORD *)&v128[32]; /*0x10085ab56*/
      v126 = _mm_loadu_si128((const __m128i *)&v128[48]); /*0x10085ab62*/
      v76 = (size_t **)v134; /*0x10085ab6a*/
      v63 = *(_QWORD *)&v128[24]; /*0x10085ab77*/
      if ( v134 ) /*0x10085ab71*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085ab83*/
        v133 = v79; /*0x10085ab88*/
      }
      else
      {
        v133 = *(_QWORD *)&v128[16]; /*0x10085acb1*/
      }
      v134 = v124; /*0x10085acbb*/
      v70 = v131; /*0x10085acbf*/
      goto LABEL_133; /*0x10085acbf*/
    }
    codexmate_lib::core::relay::codex_project_state::normalize_codex_path::h210bb04e7e8e957f( /*0x10085a8dd*/
      &v105,
      *(_QWORD *)&v128[16],
      *(_QWORD *)&v128[24]);
    v80 = v107; /*0x10085a8e2*/
    if ( v107 ) /*0x10085a8ec*/
    {
      v127.i64[0] = v134; /*0x10085a8f6*/
      v127.i64[1] = v133; /*0x10085a901*/
      v127.i64[2] = v63; /*0x10085a908*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v128, &v105); /*0x10085a920*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hfa4d1214d9fc24f5(&v116, &v102, &v127, v128); /*0x10085a93d*/
      if ( v116 != (size_t *)v123 && v116 ) /*0x10085a955*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085a963*/
        v80 = v107; /*0x10085a968*/
      }
      v81 = v106; /*0x10085a96f*/
      if ( (unsigned __int8)codexmate_lib::core::relay::codex_project_state::is_codex_generated_projectless_dir::h0e57a1bb79b048b0( /*0x10085a9a6*/
                              v106,
                              v80)
        || (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v128, &v105),
            (unsigned __int8)alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1e593a78bb104b56(
                               v97,
                               v128)) )
      {
        if ( v105 ) /*0x10085a9b9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085a9c7*/
      }
      else
      {
        v126.i64[0] = v105; /*0x10085aa31*/
        v82 = v120; /*0x10085aa38*/
        if ( v120 == v118 ) /*0x10085aa46*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((__int64 *)&v118); /*0x10085aa4f*/
        v83 = v119; /*0x10085aa54*/
        v84 = 3 * v82; /*0x10085aa5b*/
        *(_QWORD *)(v119 + 8 * v84) = v126.i64[0]; /*0x10085aa66*/
        *(_QWORD *)(v83 + 8 * v84 + 8) = v81; /*0x10085aa6a*/
        *(_QWORD *)(v83 + 8 * v84 + 16) = v80; /*0x10085aa6f*/
        v120 = v82 + 1; /*0x10085aa77*/
      }
      if ( v124 ) /*0x10085aa92*/
        goto LABEL_115; /*0x10085aa92*/
    }
    else
    {
      if ( v105 ) /*0x10085a9db*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085a9e9*/
      if ( v124 ) /*0x10085a9fc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085aa06*/
      if ( v134 ) /*0x10085aa12*/
LABEL_115:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085aa18*/
    }
  }
  core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h546317856ed6037f(&v113); /*0x10085aaf9*/
  codexmate_lib::core::relay::codex_project_state::collect_cwd_backfill_candidates::hf257a29c44aff214( /*0x10085ab1e*/
    v128,
    v94,
    v129,
    v70,
    v130,
    v101);
  if ( *(_QWORD *)v128 == 0x8000000000000016LL ) /*0x10085ab2a*/
  {
    v85 = *(_QWORD *)&v128[24]; /*0x10085ab33*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_project_state..CwdBackfillCandidate$GT$$GT$::hbe01b4b8c05b1e3d(&v128[8]); /*0x10085ab3a*/
  }
  else
  {
    v127 = *(__m512i *)v128; /*0x10085aba6*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v127); /*0x10085ac0d*/
    v85 = 0; /*0x10085ac12*/
  }
  v123 = v118; /*0x10085ac1b*/
  v14 = v119; /*0x10085ac22*/
  v129 = v120; /*0x10085ac30*/
  v126 = _mm_load_si128(&v102); /*0x10085ac3c*/
  v86 = v103; /*0x10085ac44*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4ddde6934d10beef(v97); /*0x10085ac52*/
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(&v110); /*0x10085ac5e*/
  if ( v115 ) /*0x10085ac6d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085ac7b*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4ddde6934d10beef(&v99); /*0x10085ac87*/
  v122 = 8; /*0x10085ac91*/
  v131 = 0; /*0x10085ac98*/
  v130 = 0; /*0x10085aca0*/
LABEL_144:
  if ( v123 == 0x8000000000000000LL ) /*0x10085ae32*/
  {
    v13 = v129; /*0x10085ae38*/
    *((_QWORD *)&v26 + 1) = v132; /*0x10085ae47*/
    v27 = _mm_load_si128(&v126); /*0x10085ae4b*/
    *(_QWORD *)&v26 = v130; /*0x10085ae53*/
    v15 = __PAIR128__(v122, v131); /*0x10085ae53*/
LABEL_146:
    *(_QWORD *)v128 = v14; /*0x10085ae57*/
    *(_QWORD *)&v128[8] = v13; /*0x10085ae5e*/
    *(_OWORD *)&v128[16] = v15; /*0x10085ae65*/
    *(_OWORD *)&v128[32] = v26; /*0x10085ae73*/
    *(__m128i *)&v128[48] = v27; /*0x10085ae81*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10085ae89*/
    v88 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x10085ae98*/
    if ( !v88 ) /*0x10085aea0*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10085b05b*/
    v89 = (_QWORD *)v88; /*0x10085aea6*/
    v116 = v121; /*0x10085aeb0*/
    v117[0] = v104; /*0x10085aebe*/
    v127.i64[0] = (__int64)&v116; /*0x10085aecc*/
    v127.i64[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10085aeda*/
    v127.i64[2] = (__int64)v128; /*0x10085aee8*/
    v127.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10085aef6*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x10085af12*/
      (size_t *)&v110,
      anon_2bd54b5feae36596fad298fd65f30afc_13,
      (unsigned __int64)&v127);
    v89[2] = *(_QWORD *)&v111[8]; /*0x10085af1e*/
    v90 = (size_t)v110; /*0x10085af22*/
    v89[1] = *(_QWORD *)v111; /*0x10085af30*/
    *v89 = v90; /*0x10085af34*/
    *(__int128 *)((char *)v127.i128 + 8) = 0u; /*0x10085af42*/
    v91 = v108; /*0x10085af4d*/
    v108[6] = 0; /*0x10085af54*/
    *v91 = 0; /*0x10085af5c*/
    v91[1] = 8; /*0x10085af63*/
    v91[2] = 0; /*0x10085af6b*/
    v91[7] = 0; /*0x10085af73*/
    v92 = v127.i64[1]; /*0x10085af82*/
    v91[8] = v127.i64[0]; /*0x10085af89*/
    v91[9] = v92; /*0x10085af8d*/
    v91[10] = 0; /*0x10085af91*/
    v91[3] = 1; /*0x10085af99*/
    v91[4] = (unsigned __int64)v89; /*0x10085afa1*/
    v91[5] = 1; /*0x10085afa5*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(v128); /*0x10085afb4*/
  }
  else
  {
    v93 = v108; /*0x10085afbb*/
    *v108 = v123; /*0x10085afc2*/
    v93[1] = v14; /*0x10085afc5*/
    v93[2] = v129; /*0x10085afcd*/
    v93[3] = v131; /*0x10085afd5*/
    v93[4] = v122; /*0x10085afe0*/
    v93[5] = v130; /*0x10085afe8*/
    v93[6] = v132; /*0x10085aff0*/
    *(__m128i *)(v93 + 7) = _mm_load_si128(&v126); /*0x10085affc*/
    v93[9] = v86; /*0x10085b001*/
    v93[10] = v85; /*0x10085b005*/
  }
  result = core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251(v94); /*0x10085b010*/
LABEL_150:
  if ( v7 ) /*0x10085b018*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085b029*/
  return result; /*0x10085b02e*/
}