// __ZN13codexmate_lib4core5relay13codex_runtime21latest_schema_matches @ 0x100ac7690 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_runtime::latest_schema_matches::h0cd4310943fdc6c4(__int128 a1)
{
  _BYTE *v1; // rbx
  int v2; // eax
  __int64 v3; // rbx
  __m128i v4; // xmm0
  unsigned int v5; // r15d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rax
  sqlite3_stmt *v12; // rdx
  const __m128i *v13; // r14
  __m128i v14; // kr00_16
  _BYTE *v15; // r12
  unsigned __int64 v17; // rax
  __m128i v18; // xmm0
  __int8 *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rbx
  __m128i v23; // xmm2
  __int64 v25; // rdi
  unsigned __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rcx
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __int64 v33; // rsi
  __m128i v34; // xmm4
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __m128i v38; // xmm0
  __int64 i; // rcx
  __m128i v40; // xmm2
  __int64 v42; // r8
  const __m128i *v43; // rbx
  const __m128i *v45; // r13
  int v46; // r14d
  __int64 v47; // rax
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  __int64 v50; // rsi
  _BYTE *v51; // [rsp+8h] [rbp-238h]
  sqlite3_stmt *v52; // [rsp+10h] [rbp-230h]
  sqlite3_stmt *v53; // [rsp+18h] [rbp-228h]
  unsigned __int64 v54; // [rsp+48h] [rbp-1F8h] BYREF
  __m128i v55; // [rsp+50h] [rbp-1F0h]
  _BYTE *v56; // [rsp+60h] [rbp-1E0h]
  sqlite3_stmt *v57; // [rsp+68h] [rbp-1D8h]
  sqlite3_stmt *v58; // [rsp+70h] [rbp-1D0h]
  sqlite3_stmt *v59; // [rsp+78h] [rbp-1C8h]
  sqlite3_stmt *v60; // [rsp+80h] [rbp-1C0h]
  sqlite3_stmt *v61; // [rsp+88h] [rbp-1B8h]
  __int64 v62; // [rsp+90h] [rbp-1B0h]
  __int64 v63; // [rsp+98h] [rbp-1A8h]
  __int64 v64; // [rsp+A0h] [rbp-1A0h]
  __int64 v65; // [rsp+A8h] [rbp-198h]
  char v66; // [rsp+B0h] [rbp-190h]
  _BYTE v67[7]; // [rsp+B1h] [rbp-18Fh]
  __int128 v68; // [rsp+B8h] [rbp-188h] BYREF
  const __m128i *v69; // [rsp+C8h] [rbp-178h]
  __int128 v70; // [rsp+D0h] [rbp-170h] BYREF
  _BYTE *v71; // [rsp+E0h] [rbp-160h]
  __m128i v72; // [rsp+F0h] [rbp-150h] BYREF
  _BYTE *v73; // [rsp+100h] [rbp-140h]
  sqlite3_stmt *v74; // [rsp+108h] [rbp-138h]
  sqlite3_stmt *v75; // [rsp+110h] [rbp-130h]
  sqlite3_stmt *v76; // [rsp+118h] [rbp-128h]
  sqlite3_stmt *v77; // [rsp+120h] [rbp-120h]
  sqlite3_stmt *v78; // [rsp+128h] [rbp-118h]
  __m128i v79; // [rsp+130h] [rbp-110h] BYREF
  _BYTE *v80; // [rsp+140h] [rbp-100h]
  __int64 (__fastcall *v81)(_QWORD, _QWORD); // [rsp+148h] [rbp-F8h]
  _BYTE v82[24]; // [rsp+150h] [rbp-F0h] BYREF
  sqlite3_stmt *v83; // [rsp+168h] [rbp-D8h]
  sqlite3_stmt *v84; // [rsp+170h] [rbp-D0h]
  sqlite3_stmt *v85; // [rsp+178h] [rbp-C8h]
  sqlite3_stmt *v86; // [rsp+180h] [rbp-C0h]
  sqlite3_stmt *v87; // [rsp+188h] [rbp-B8h]
  __m128i si128; // [rsp+190h] [rbp-B0h] BYREF
  unsigned __int64 v89; // [rsp+1A8h] [rbp-98h] BYREF
  __m128i v90; // [rsp+1B0h] [rbp-90h] BYREF
  sqlite3_stmt *v91; // [rsp+1C0h] [rbp-80h]
  sqlite3_stmt *v92; // [rsp+1C8h] [rbp-78h] BYREF
  sqlite3_stmt *v93; // [rsp+1D0h] [rbp-70h]
  sqlite3_stmt *v94; // [rsp+1D8h] [rbp-68h]
  sqlite3_stmt *v95; // [rsp+1E0h] [rbp-60h]
  sqlite3_stmt *v96; // [rsp+1E8h] [rbp-58h]
  __int64 v97; // [rsp+1F0h] [rbp-50h]
  __int64 v98; // [rsp+1F8h] [rbp-48h]
  __int64 v99; // [rsp+200h] [rbp-40h]
  __int64 v100; // [rsp+208h] [rbp-38h]
  char v101; // [rsp+210h] [rbp-30h]
  _BYTE v102[7]; // [rsp+211h] [rbp-2Fh]

  rusqlite::Connection::open_with_flags::h45227a733d927884(&v89, a1, *((_QWORD *)&a1 + 1), 1); /*0x100ac76bc*/
  if ( v101 == 3 ) /*0x100ac76c7*/
  {
    v87 = v95; /*0x100ac76d1*/
    v86 = v94; /*0x100ac76dc*/
    v85 = v93; /*0x100ac76e7*/
    v84 = v92; /*0x100ac76f2*/
    v83 = (sqlite3_stmt *)v91; /*0x100ac76fd*/
    *(__m128i *)&v82[8] = v90; /*0x100ac7720*/
    *(_QWORD *)v82 = v89; /*0x100ac7727*/
    v70 = a1; /*0x100ac772e*/
    v72.i64[0] = (__int64)&v70; /*0x100ac7743*/
    v72.i64[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ac7751*/
    v73 = v82; /*0x100ac775f*/
    v74 = (sqlite3_stmt *)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ac776d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v79, &unk_1017CA069, &v72); /*0x100ac7789*/
    si128 = _mm_load_si128(&v79); /*0x100ac7796*/
    v1 = v80; /*0x100ac779e*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v82); /*0x100ac77ac*/
LABEL_8:
    v4 = _mm_load_si128(&si128); /*0x100ac7a62*/
    v89 = 10; /*0x100ac7a6a*/
    v90 = v4; /*0x100ac7a75*/
    v91 = v1; /*0x100ac7a7d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v89); /*0x100ac7a88*/
    return 0; /*0x100ac7a8d*/
  }
  v57 = v92; /*0x100ac77c5*/
  v58 = v93; /*0x100ac77d0*/
  v59 = v94; /*0x100ac77db*/
  v60 = v95; /*0x100ac77e6*/
  v61 = v96; /*0x100ac77f1*/
  v62 = v97; /*0x100ac77fc*/
  v63 = v98; /*0x100ac7807*/
  v64 = v99; /*0x100ac7812*/
  *(_DWORD *)&v67[3] = *(_DWORD *)&v102[3]; /*0x100ac7820*/
  *(_DWORD *)v67 = *(_DWORD *)v102; /*0x100ac7829*/
  v55 = _mm_loadu_si128(&v90); /*0x100ac7837*/
  v56 = v91; /*0x100ac783f*/
  v54 = v89; /*0x100ac7846*/
  v65 = v100; /*0x100ac784d*/
  v66 = v101; /*0x100ac7854*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v89, &v54, "PRAGMA table_info(threads)", 26); /*0x100ac7877*/
  if ( (_DWORD)v89 == 1 ) /*0x100ac7883*/
  {
    v87 = v96; /*0x100ac7894*/
    v86 = v95; /*0x100ac789f*/
    v85 = v94; /*0x100ac78aa*/
    v84 = v93; /*0x100ac78b5*/
    v83 = v92; /*0x100ac78c0*/
    *(_QWORD *)&v82[16] = v91; /*0x100ac78cb*/
    *(__m128i *)v82 = v90; /*0x100ac78e0*/
    v68 = a1; /*0x100ac78e7*/
    v79.i64[0] = (__int64)&v68; /*0x100ac78fc*/
    v79.i64[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ac790a*/
    v80 = v82; /*0x100ac7918*/
    v81 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ac7926*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v70, &unk_1017CA021, &v79); /*0x100ac7942*/
    si128 = _mm_load_si128((const __m128i *)&v70); /*0x100ac794f*/
    v1 = v71; /*0x100ac7957*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v82); /*0x100ac7965*/
LABEL_7:
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v54); /*0x100ac7a56*/
    goto LABEL_8; /*0x100ac7a5d*/
  }
  v74 = v92; /*0x100ac7977*/
  v75 = v93; /*0x100ac7982*/
  v76 = v94; /*0x100ac798d*/
  v77 = v95; /*0x100ac7998*/
  v78 = v96; /*0x100ac79a3*/
  v72 = _mm_loadu_si128(&v90); /*0x100ac79b2*/
  v73 = v91; /*0x100ac79ba*/
  v2 = sqlite3_bind_parameter_count(v96); /*0x100ac79c1*/
  v3 = v2; /*0x100ac79c6*/
  if ( v2 ) /*0x100ac79cb*/
  {
    v89 = 0x8000000000000013LL; /*0x100ac79df*/
    v90.i64[0] = 0; /*0x100ac79e6*/
    v90.i64[1] = v2; /*0x100ac79f1*/
    v79.i64[0] = (__int64)&v89; /*0x100ac79f8*/
    v79.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ac7a06*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v82, &unk_1017CA049, &v79); /*0x100ac7a22*/
    si128 = _mm_load_si128((const __m128i *)v82); /*0x100ac7a2f*/
    v1 = *(_BYTE **)&v82[16]; /*0x100ac7a37*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v89); /*0x100ac7a45*/
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v72); /*0x100ac7a51*/
    goto LABEL_7; /*0x100ac7a51*/
  }
  *(_QWORD *)v82 = &v72; /*0x100ac7aac*/
  *(_QWORD *)&v82[8] = 0; /*0x100ac7ab3*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100ac7ac1*/
  v10 = v7; /*0x100ac7ac3*/
  if ( *(_BYTE *)(v7 + 16) == 1 ) /*0x100ac7aca*/
  {
    v11 = *(_QWORD *)v7; /*0x100ac7ad0*/
    v12 = *(sqlite3_stmt **)(v10 + 8); /*0x100ac7ad3*/
  }
  else
  {
    v11 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100ac7f2c*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            &v54,
            v8,
            v9);
    *(_QWORD *)v10 = v11; /*0x100ac7f31*/
    *(_QWORD *)(v10 + 8) = v12; /*0x100ac7f34*/
    *(_BYTE *)(v10 + 16) = 1; /*0x100ac7f38*/
  }
  *(_QWORD *)v10 = v11 + 1; /*0x100ac7adb*/
  v91 = nullptr; /*0x100ac7ae5*/
  v90 = 0u; /*0x100ac7afe*/
  v89 = (unsigned __int64)&xmmword_1015FBEC0; /*0x100ac7b0c*/
  v92 = (sqlite3_stmt *)v11; /*0x100ac7b13*/
  v93 = v12; /*0x100ac7b17*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h54e51357a8f66a9e( /*0x100ac7b2c*/
    &v72,
    v3,
    &v89);
  v13 = (const __m128i *)v89; /*0x100ac7b31*/
  v14 = v90; /*0x100ac7b3f*/
  v51 = v91; /*0x100ac7b4a*/
  v52 = v92; /*0x100ac7b55*/
  v53 = v93; /*0x100ac7b60*/
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v72); /*0x100ac7b6e*/
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v54); /*0x100ac7b7a*/
  v93 = v53; /*0x100ac7b86*/
  v15 = v51; /*0x100ac7b8a*/
  v92 = v52; /*0x100ac7b98*/
  v91 = v51; /*0x100ac7b9c*/
  v89 = (unsigned __int64)v13; /*0x100ac7ba0*/
  v90 = v14; /*0x100ac7ba7*/
  if ( !v51 ) /*0x100ac7bb8*/
  {
    v5 = 0; /*0x100ac7d1e*/
    v35 = v14.i64[0]; /*0x100ac7d24*/
    if ( !v14.i64[0] ) /*0x100ac7d27*/
      return v5; /*0x100ac7d27*/
    goto LABEL_50; /*0x100ac7d27*/
  }
  si128.i64[0] = v14.i64[0]; /*0x100ac7bbe*/
  _RDI = (unsigned __int64)&v92; /*0x100ac7bd5*/
  v17 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345( /*0x100ac7bd8*/
          &v92,
          "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
          5);
  v18 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v17 >> 57), (__m128i)0LL); /*0x100ac7bec*/
  v19 = &v13[-2].i8[8]; /*0x100ac7bf1*/
  v20 = 0; /*0x100ac7bf5*/
  v21 = si128.i64[0]; /*0x100ac7c00*/
  while ( 1 ) /*0x100ac7c07*/
  {
    _RAX = si128.i64[0] & v17; /*0x100ac7c07*/
    v23 = _mm_loadu_si128((const __m128i *)((char *)v13 + _RAX)); /*0x100ac7c0a*/
    _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v23, v18)); /*0x100ac7c18*/
    if ( _ESI ) /*0x100ac7c1e*/
      break; /*0x100ac7c1e*/
LABEL_18:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v23, (__m128i)-1LL)) ) /*0x100ac7c62*/
      goto LABEL_40; /*0x100ac7c68*/
    v17 = _RAX + v20 + 16; /*0x100ac7c6e*/
    v20 += 16; /*0x100ac7c73*/
  }
  while ( 1 ) /*0x100ac7c20*/
  {
    __asm { tzcnt edi, esi } /*0x100ac7c20*/
    v25 = -3LL * (si128.i64[0] & (_RAX + _RDI)); /*0x100ac7c2d*/
    if ( *(_QWORD *)&v19[8 * v25 + 16] == 5 /*0x100ac7c4f*/
      && !(**(_DWORD **)&v19[8 * v25 + 8] ^ 0x65646F6D | *(unsigned __int8 *)(*(_QWORD *)&v19[8 * v25 + 8] + 4LL) ^ 0x6C) )
    {
      break; /*0x100ac7c4f*/
    }
    _RDI = (unsigned int)(_ESI - 1); /*0x100ac7c54*/
    LOWORD(_RDI) = _ESI & (_ESI - 1); /*0x100ac7c57*/
    _ESI = _RDI; /*0x100ac7c5a*/
    if ( !(_WORD)_RDI ) /*0x100ac7c5c*/
      goto LABEL_18; /*0x100ac7c5c*/
  }
  _RSI = (unsigned __int64)"reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id"; /*0x100ac7c79*/
  v27 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345( /*0x100ac7c88*/
          &v92,
          "reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
          16);
  v28 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v27 >> 57), (__m128i)0LL); /*0x100ac7c9c*/
  v29 = 0; /*0x100ac7ca1*/
  v30 = _mm_load_si128((const __m128i *)"reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id"); /*0x100ac7ca7*/
  while ( 1 ) /*0x100ac7caf*/
  {
    _RAX = v21 & v27; /*0x100ac7caf*/
    v31 = _mm_loadu_si128((const __m128i *)((char *)v13 + _RAX)); /*0x100ac7cb2*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v31, v28)); /*0x100ac7cc0*/
    if ( _EDX ) /*0x100ac7cc6*/
      break; /*0x100ac7cc6*/
LABEL_25:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v31, (__m128i)-1LL)) ) /*0x100ac7d07*/
      goto LABEL_40; /*0x100ac7d0d*/
    v27 = _RAX + v29 + 16; /*0x100ac7d13*/
    v29 += 16; /*0x100ac7d18*/
  }
  while ( 1 ) /*0x100ac7cc8*/
  {
    __asm { tzcnt esi, edx } /*0x100ac7cc8*/
    v33 = -3LL * (v21 & (_RAX + _RSI)); /*0x100ac7cd5*/
    if ( *(_QWORD *)&v19[8 * v33 + 16] == 16 ) /*0x100ac7cdf*/
    {
      v34 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)&v19[8 * v33 + 8]), v30); /*0x100ac7cee*/
      if ( _mm_testz_si128(v34, v34) ) /*0x100ac7cf7*/
        break; /*0x100ac7cf7*/
    }
    _RSI = (unsigned int)(_EDX - 1); /*0x100ac7cf9*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x100ac7cfc*/
    _EDX = _RSI; /*0x100ac7cff*/
    if ( !(_WORD)_RSI ) /*0x100ac7d01*/
      goto LABEL_25; /*0x100ac7d01*/
  }
  v36 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345( /*0x100ac7d41*/
          &v92,
          "thread_sourcepreviewrecency_atrecency_at_mshistory_modePRAGMA table_info(threads)",
          13);
  v38 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v36 >> 57), (__m128i)0LL); /*0x100ac7d55*/
  for ( i = 0; ; i += 16 ) /*0x100ac7d5a*/
  {
    _RAX = v21 & v36; /*0x100ac7d74*/
    v40 = _mm_loadu_si128((const __m128i *)((char *)v13 + _RAX)); /*0x100ac7d77*/
    _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v40, v38)); /*0x100ac7d85*/
    if ( _EDI ) /*0x100ac7d8b*/
      break; /*0x100ac7d8b*/
LABEL_34:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v40, (__m128i)-1LL)) ) /*0x100ac7dd3*/
      goto LABEL_40; /*0x100ac7dd9*/
    v36 = _RAX + i + 16; /*0x100ac7ddb*/
  }
  while ( 1 ) /*0x100ac7d8d*/
  {
    __asm { tzcnt r8d, edi } /*0x100ac7d8d*/
    v42 = -3 * (v21 & (_RAX + _R8)); /*0x100ac7d9b*/
    if ( *(_QWORD *)&v19[8 * v42 + 16] == 13 /*0x100ac7dbd*/
      && !(**(_QWORD **)&v19[8 * v42 + 8] ^ 0x735F646165726874LL
         | *(_QWORD *)(*(_QWORD *)&v19[8 * v42 + 8] + 5LL) ^ 0x656372756F735F64LL) )
    {
      break; /*0x100ac7dbd*/
    }
    _R8 = (unsigned int)(_EDI - 1); /*0x100ac7dc2*/
    LOWORD(_R8) = _EDI & (_EDI - 1); /*0x100ac7dc6*/
    _EDI = _R8; /*0x100ac7dca*/
    if ( !(_WORD)_R8 ) /*0x100ac7dcd*/
      goto LABEL_34; /*0x100ac7dcd*/
  }
  _RAX = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h450e6cee02eb5bbc( /*0x100ac7df9*/
           &v89,
           "previewrecency_atrecency_at_mshistory_modePRAGMA table_info(threads)",
           7);
  if ( (_BYTE)_RAX ) /*0x100ac7e00*/
  {
    _RAX = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h450e6cee02eb5bbc( /*0x100ac7e15*/
             &v89,
             "recency_atrecency_at_mshistory_modePRAGMA table_info(threads)",
             10);
    if ( (_BYTE)_RAX ) /*0x100ac7e1c*/
    {
      _RAX = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h450e6cee02eb5bbc( /*0x100ac7e31*/
               &v89,
               "recency_at_mshistory_modePRAGMA table_info(threads)",
               13);
      if ( (_BYTE)_RAX ) /*0x100ac7e38*/
      {
        _RAX = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h450e6cee02eb5bbc( /*0x100ac7e4d*/
                 &v89,
                 "history_modePRAGMA table_info(threads)",
                 12);
        v5 = _RAX; /*0x100ac7e52*/
        goto LABEL_41; /*0x100ac7e55*/
      }
    }
  }
LABEL_40:
  v5 = 0; /*0x100ac7e57*/
LABEL_41:
  if ( v21 ) /*0x100ac7e5d*/
  {
    v43 = v13; /*0x100ac7e68*/
    _R14D = ~_mm_movemask_epi8(_mm_load_si128(v13)); /*0x100ac7e70*/
    v45 = v43 + 1; /*0x100ac7e73*/
    v69 = v43; /*0x100ac7e77*/
    do /*0x100ac7e90*/
    {
      if ( !(_WORD)_R14D ) /*0x100ac7e96*/
      {
        do /*0x100ac7ebd*/
        {
          v46 = _mm_movemask_epi8(_mm_load_si128(v45)); /*0x100ac7ea6*/
          v43 -= 24; /*0x100ac7eab*/
          ++v45; /*0x100ac7eb2*/
        }
        while ( v46 == 0xFFFF ); /*0x100ac7ebd*/
        _R14D = ~v46; /*0x100ac7ebf*/
      }
      __asm { tzcnt eax, r14d } /*0x100ac7ec2*/
      v47 = -3 * _RAX; /*0x100ac7eca*/
      v48 = *((_QWORD *)&v43[-1] + v47 - 1); /*0x100ac7ece*/
      if ( v48 ) /*0x100ac7ed6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43[-1].i64[v47], v48, 1); /*0x100ac7ee5*/
      --v15; /*0x100ac7e80*/
      _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100ac7e87*/
      _R14D &= _R14D - 1; /*0x100ac7e8a*/
    }
    while ( v15 ); /*0x100ac7e90*/
    v13 = v69; /*0x100ac7eec*/
    v35 = si128.i64[0]; /*0x100ac7ef3*/
LABEL_50:
    v49 = (24 * v35 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100ac7efa*/
    v50 = v49 + v35 + 17; /*0x100ac7f0d*/
    if ( v50 ) /*0x100ac7f11*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v13 - v49, v50, 16); /*0x100ac7f22*/
  }
  return v5; /*0x100ac7a93*/
}