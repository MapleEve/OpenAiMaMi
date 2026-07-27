// __ZN13codexmate_lib4core5relay16codex_diagnostic31collect_diagnostic_main_threads @ 0x10050c750 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h7b024af7a6c1ec26(
        __int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // r12
  _QWORD *v6; // r15
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r13
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  char *v16; // rsi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rbx
  size_t v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r15
  unsigned __int64 v35; // rbx
  _QWORD *v36; // r12
  __int64 v37; // rsi
  _QWORD *v38; // rdx
  __int64 result; // rax
  unsigned __int64 v40; // rax
  __m128 v41; // xmm1
  unsigned __int128 v42; // krD0_16
  unsigned __int64 v43; // r14
  unsigned __int128 v44; // krE0_16
  unsigned __int64 v45; // rbx
  __int64 v46; // rbx
  void *v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r14
  unsigned __int64 v53; // rbx
  __int64 v54; // rsi
  __int128 v55; // kr100_16
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int128 v58; // kr110_16
  __int64 v59; // r10
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-370h] BYREF
  __int128 v63; // [rsp+8h] [rbp-368h]
  __int64 v64; // [rsp+18h] [rbp-358h]
  __int128 v65; // [rsp+20h] [rbp-350h]
  __int128 v66; // [rsp+30h] [rbp-340h]
  __int128 v67; // [rsp+40h] [rbp-330h]
  __int128 v68; // [rsp+50h] [rbp-320h]
  __int64 v69; // [rsp+60h] [rbp-310h]
  char v70; // [rsp+68h] [rbp-308h]
  _BYTE v71[7]; // [rsp+69h] [rbp-307h]
  _QWORD v72[2]; // [rsp+70h] [rbp-300h] BYREF
  __int128 v73; // [rsp+80h] [rbp-2F0h] BYREF
  __int64 v74; // [rsp+90h] [rbp-2E0h]
  __int128 v75; // [rsp+98h] [rbp-2D8h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-2C8h]
  __int128 v77; // [rsp+B0h] [rbp-2C0h]
  __int128 v78; // [rsp+C0h] [rbp-2B0h]
  sqlite3_stmt *v79; // [rsp+D0h] [rbp-2A0h]
  __int64 v80; // [rsp+D8h] [rbp-298h]
  __int64 v81; // [rsp+E0h] [rbp-290h]
  __int64 v82; // [rsp+E8h] [rbp-288h]
  unsigned __int64 v83; // [rsp+F0h] [rbp-280h]
  unsigned __int64 v84; // [rsp+F8h] [rbp-278h]
  unsigned __int64 v85; // [rsp+100h] [rbp-270h]
  __int64 v86; // [rsp+108h] [rbp-268h]
  __int128 v87; // [rsp+110h] [rbp-260h] BYREF
  __int64 v88; // [rsp+120h] [rbp-250h]
  __int128 v89; // [rsp+128h] [rbp-248h]
  __int128 v90; // [rsp+138h] [rbp-238h]
  __int64 v91; // [rsp+148h] [rbp-228h]
  __int128 *v92; // [rsp+150h] [rbp-220h] BYREF
  __int128 v93; // [rsp+158h] [rbp-218h]
  __int64 (__fastcall *v94)(_QWORD, _QWORD); // [rsp+168h] [rbp-208h]
  __int128 v95; // [rsp+170h] [rbp-200h]
  __int128 v96; // [rsp+180h] [rbp-1F0h]
  _BYTE v97[24]; // [rsp+190h] [rbp-1E0h] BYREF
  __int128 v98; // [rsp+1A8h] [rbp-1C8h]
  __int128 v99; // [rsp+1B8h] [rbp-1B8h]
  __int64 v100; // [rsp+1C8h] [rbp-1A8h]
  __int64 v101; // [rsp+1D0h] [rbp-1A0h] BYREF
  __int64 v102; // [rsp+1D8h] [rbp-198h]
  __int64 v103; // [rsp+1E0h] [rbp-190h]
  __int64 v104; // [rsp+1E8h] [rbp-188h]
  unsigned __int64 v105; // [rsp+1F0h] [rbp-180h]
  unsigned __int64 v106; // [rsp+1F8h] [rbp-178h]
  __int128 v107; // [rsp+200h] [rbp-170h] BYREF
  __int64 v108; // [rsp+210h] [rbp-160h]
  __int128 v109; // [rsp+218h] [rbp-158h]
  __int128 v110; // [rsp+228h] [rbp-148h]
  __int64 v111; // [rsp+238h] [rbp-138h]
  __int64 v112; // [rsp+240h] [rbp-130h]
  __int64 v113; // [rsp+248h] [rbp-128h]
  __int64 v114; // [rsp+250h] [rbp-120h]
  __int64 v115; // [rsp+258h] [rbp-118h]
  __int64 v116; // [rsp+260h] [rbp-110h]
  _OWORD v117[6]; // [rsp+268h] [rbp-108h] BYREF
  __int64 v118; // [rsp+2C8h] [rbp-A8h]
  char v119; // [rsp+2D0h] [rbp-A0h]
  _BYTE v120[7]; // [rsp+2D1h] [rbp-9Fh]
  unsigned __int64 v121; // [rsp+2D8h] [rbp-98h]
  __int128 v122; // [rsp+2E0h] [rbp-90h]
  unsigned __int64 v123; // [rsp+2F0h] [rbp-80h]
  void *__src; // [rsp+2F8h] [rbp-78h]
  __int128 v125; // [rsp+300h] [rbp-70h]
  unsigned __int64 v126; // [rsp+310h] [rbp-60h]
  unsigned __int64 v127; // [rsp+318h] [rbp-58h]
  unsigned __int64 v128; // [rsp+320h] [rbp-50h]
  size_t __n; // [rsp+328h] [rbp-48h]
  unsigned __int64 v130; // [rsp+330h] [rbp-40h]
  unsigned __int64 v131; // [rsp+338h] [rbp-38h]
  unsigned __int64 v132; // [rsp+340h] [rbp-30h]

  v112 = a1; /*0x10050c764*/
  v101 = 0; /*0x10050c76b*/
  v102 = 8; /*0x10050c776*/
  v103 = 0; /*0x10050c781*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v117); /*0x10050c793*/
  v3 = *((_QWORD *)&v117[0] + 1); /*0x10050c79f*/
  v4 = *((_QWORD *)&v117[0] + 1) + 24LL * *(_QWORD *)&v117[1]; /*0x10050c7b9*/
  v113 = *((_QWORD *)&v117[0] + 1); /*0x10050c7bd*/
  v114 = *((_QWORD *)&v117[0] + 1); /*0x10050c7c4*/
  v80 = *(_QWORD *)&v117[0]; /*0x10050c7cb*/
  v115 = *(_QWORD *)&v117[0]; /*0x10050c7d2*/
  v116 = v4; /*0x10050c7d9*/
  v5 = *((_QWORD *)&v117[0] + 1); /*0x10050c7e0*/
  if ( !*(_QWORD *)&v117[1] ) /*0x10050c7e6*/
  {
LABEL_47:
    v34 = v3; /*0x10050cf46*/
    if ( v4 != v5 ) /*0x10050cf5f*/
    {
      v35 = (v4 - v5) / 0x18uLL; /*0x10050cf64*/
      v36 = (_QWORD *)(v5 + 8); /*0x10050cf68*/
      do /*0x10050cf77*/
      {
        v37 = *(v36 - 1); /*0x10050cf79*/
        if ( v37 ) /*0x10050cf81*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v36, v37, 1); /*0x10050cf8c*/
        v36 += 3; /*0x10050cf70*/
        --v35; /*0x10050cf74*/
      }
      while ( v35 ); /*0x10050cf77*/
    }
    if ( v80 ) /*0x10050cf9d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 24 * v80, 8); /*0x10050cfaf*/
    v38 = (_QWORD *)v112; /*0x10050cfbb*/
    *(_QWORD *)(v112 + 24) = v103; /*0x10050cfc2*/
    result = v101; /*0x10050cfc6*/
    v38[2] = v102; /*0x10050cfd4*/
    v38[1] = result; /*0x10050cfd8*/
    *v38 = 11; /*0x10050cfdc*/
    return result; /*0x10050cfe3*/
  }
  v83 = 24LL * *(_QWORD *)&v117[1] - 24; /*0x10050c7fa*/
  v6 = (_QWORD *)(*((_QWORD *)&v117[0] + 1) + 32LL); /*0x10050c801*/
  v7 = 0x8000000000000000LL; /*0x10050c805*/
  v8 = *((_QWORD *)&v117[0] + 1); /*0x10050c809*/
  v82 = *((_QWORD *)&v117[0] + 1); /*0x10050c80c*/
  v81 = *((_QWORD *)&v117[0] + 1) + 24LL * *(_QWORD *)&v117[1]; /*0x10050c813*/
  *(_QWORD *)&v122 = 0x8000000000000000LL; /*0x10050c81a*/
LABEL_3:
  v5 = v8 + 24; /*0x10050c821*/
  v9 = *(_QWORD *)v8; /*0x10050c825*/
  if ( *(_QWORD *)v8 == v7 ) /*0x10050c82b*/
  {
LABEL_46:
    v114 = v5; /*0x10050cf3f*/
    goto LABEL_47; /*0x10050cf3f*/
  }
  v10 = *(_QWORD *)(v8 + 16); /*0x10050c835*/
  __src = *(void **)(v8 + 8); /*0x10050c840*/
  __n = v10; /*0x10050c844*/
  v104 = v9; /*0x10050c84d*/
  rusqlite::Connection::open_with_flags::h44d322d71fbb5f40( /*0x10050c854*/
    v117,
    __src,
    v10,
    32769,
    v1,
    v2,
    v62,
    v63,
    *((_QWORD *)&v63 + 1));
  if ( v119 != 3 ) /*0x10050c862*/
  {
    v108 = *((_QWORD *)&v117[1] + 1); /*0x10050c87a*/
    v107 = *(_OWORD *)((char *)v117 + 8); /*0x10050c88f*/
    v65 = v117[2]; /*0x10050c8a5*/
    v66 = v117[3]; /*0x10050c8b1*/
    v67 = v117[4]; /*0x10050c8c1*/
    v68 = v117[5]; /*0x10050c8d1*/
    *(_DWORD *)&v71[3] = *(_DWORD *)&v120[3]; /*0x10050c8ea*/
    *(_DWORD *)v71 = *(_DWORD *)v120; /*0x10050c8ee*/
    v75 = *(_OWORD *)((char *)v117 + 8); /*0x10050c900*/
    v76 = *((_QWORD *)&v117[1] + 1); /*0x10050c915*/
    v64 = *((_QWORD *)&v117[1] + 1); /*0x10050c91c*/
    v63 = *(_OWORD *)((char *)v117 + 8); /*0x10050c924*/
    v62 = *(_QWORD *)&v117[0]; /*0x10050c927*/
    v69 = v118; /*0x10050c92e*/
    v70 = v119; /*0x10050c935*/
    rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v117, &v62, 3, 0); /*0x10050c950*/
    if ( *(_QWORD *)&v117[0] != 0x8000000000000016LL ) /*0x10050c966*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v117); /*0x10050c96f*/
    rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10050c98e*/
      v117,
      &v62,
      "SELECT id, rollout_path, COALESCE(model_provider, ''), COALESCE(source, '') FROM threads WHERE COALESCE(archived, "
      "0) = 0 ORDER BY id",
      132);
    if ( LODWORD(v117[0]) == 1 ) /*0x10050c99a*/
    {
      v114 = v5; /*0x10050d559*/
      v96 = *(_OWORD *)((char *)&v117[3] + 8); /*0x10050d576*/
      v95 = *(_OWORD *)((char *)&v117[2] + 8); /*0x10050d58c*/
      v94 = *(__int64 (__fastcall **)(_QWORD, _QWORD))&v117[2]; /*0x10050d597*/
      v93 = v117[1]; /*0x10050d5b0*/
      v92 = *((__int128 **)&v117[0] + 1); /*0x10050d5b7*/
      v72[0] = __src; /*0x10050d5c2*/
      v72[1] = __n; /*0x10050d5cd*/
      *(_QWORD *)v97 = v72; /*0x10050d5db*/
      *(_QWORD *)&v97[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10050d5e9*/
      *(_QWORD *)&v97[16] = &v92; /*0x10050d5f7*/
      *(_QWORD *)&v98 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10050d605*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v73, &unk_1017C0883, v97); /*0x10050d621*/
      *(_OWORD *)v97 = v73; /*0x10050d634*/
      *(_QWORD *)&v97[16] = v74; /*0x10050d649*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v92); /*0x10050d657*/
      v87 = *(_OWORD *)v97; /*0x10050d66a*/
      v88 = *(_QWORD *)&v97[16]; /*0x10050d67f*/
      v89 = v98; /*0x10050d68d*/
      v90 = v99; /*0x10050d6a9*/
      v91 = v100; /*0x10050d6c5*/
      v111 = v100; /*0x10050d6d3*/
      v51 = v99; /*0x10050d6e8*/
      v110 = v99; /*0x10050d6ef*/
      v50 = *((_QWORD *)&v98 + 1); /*0x10050d6f6*/
      v47 = (void *)v98; /*0x10050d704*/
      v109 = v98; /*0x10050d70b*/
      v57 = *(_QWORD *)&v97[16]; /*0x10050d712*/
      v108 = *(_QWORD *)&v97[16]; /*0x10050d719*/
      v58 = *(_OWORD *)v97; /*0x10050d727*/
      v107 = *(_OWORD *)v97; /*0x10050d735*/
      v59 = v112; /*0x10050d73c*/
      *(_OWORD *)(v112 + 48) = v99; /*0x10050d747*/
      *(_QWORD *)(v59 + 40) = v50; /*0x10050d74b*/
      *(_QWORD *)(v59 + 32) = v47; /*0x10050d74f*/
      *(_QWORD *)(v59 + 24) = v57; /*0x10050d753*/
      *(_OWORD *)(v59 + 8) = v58; /*0x10050d75b*/
      *(_QWORD *)(v59 + 64) = v111; /*0x10050d766*/
      *(_QWORD *)v59 = 10; /*0x10050d76a*/
LABEL_76:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v62, v47, v50, v51); /*0x10050d317*/
      if ( !v9 ) /*0x10050d326*/
        goto LABEL_78; /*0x10050d326*/
LABEL_77:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v9, 1); /*0x10050d328*/
      goto LABEL_78; /*0x10050d334*/
    }
    v91 = *(_QWORD *)&v117[4]; /*0x10050c9ab*/
    v90 = v117[3]; /*0x10050c9c1*/
    *((_QWORD *)&v89 + 1) = *((_QWORD *)&v117[2] + 1); /*0x10050c9cc*/
    v107 = *(_OWORD *)((char *)v117 + 8); /*0x10050c9e2*/
    v108 = *((_QWORD *)&v117[1] + 1); /*0x10050c9f0*/
    v109 = v117[2]; /*0x10050c9f7*/
    v110 = v117[3]; /*0x10050ca05*/
    v111 = *(_QWORD *)&v117[4]; /*0x10050ca13*/
    v79 = *(sqlite3_stmt **)&v117[4]; /*0x10050ca21*/
    v78 = v117[3]; /*0x10050ca3d*/
    v77 = v117[2]; /*0x10050ca59*/
    v76 = *((_QWORD *)&v117[1] + 1); /*0x10050ca67*/
    v75 = *(_OWORD *)((char *)v117 + 8); /*0x10050ca83*/
    v11 = sqlite3_bind_parameter_count(*(sqlite3_stmt **)&v117[4]); /*0x10050ca91*/
    v15 = v11; /*0x10050ca96*/
    if ( v11 ) /*0x10050ca9b*/
    {
      v114 = v5; /*0x10050d776*/
      v117[0] = 0x8000000000000013LL; /*0x10050d78b*/
      *(_QWORD *)&v117[1] = v11; /*0x10050d79d*/
      *(_QWORD *)&v87 = __src; /*0x10050d7a8*/
      *((_QWORD *)&v87 + 1) = __n; /*0x10050d7b3*/
      v92 = &v87; /*0x10050d7c1*/
      *(_QWORD *)&v93 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10050d7cf*/
      *((_QWORD *)&v93 + 1) = v117; /*0x10050d7dd*/
      v94 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10050d7eb*/
      v47 = &unk_1017C08AF; /*0x10050d7f2*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v97, &unk_1017C08AF, &v92); /*0x10050d807*/
      v125 = *(_OWORD *)v97; /*0x10050d813*/
      v60 = *(_QWORD *)&v97[16]; /*0x10050d817*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v117); /*0x10050d825*/
      v61 = v112; /*0x10050d82a*/
      *(_QWORD *)v112 = 10; /*0x10050d831*/
      *(_OWORD *)(v61 + 8) = v125; /*0x10050d83c*/
      *(_QWORD *)(v61 + 24) = v60; /*0x10050d840*/
LABEL_75:
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v75); /*0x10050d30b*/
      goto LABEL_76; /*0x10050d312*/
    }
    *(_QWORD *)&v107 = &v75; /*0x10050caa8*/
    *((_QWORD *)&v107 + 1) = v11; /*0x10050caaf*/
    while ( 1 ) /*0x10050ccff*/
    {
      while ( 1 ) /*0x10050ccba*/
      {
        while ( 1 ) /*0x10050caeb*/
        {
          v16 = (char *)&v107; /*0x10050caeb*/
          _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10050caf2*/
            v117,
            &v107,
            v12,
            v15,
            v13,
            v14,
            v62,
            v63,
            *((_QWORD *)&v63 + 1));
          v17 = *(_QWORD *)&v117[0]; /*0x10050caf7*/
          if ( *(_QWORD *)&v117[0] != 0x8000000000000016LL ) /*0x10050cb0b*/
          {
            v114 = v5; /*0x10050cfe8*/
            v18 = *((_QWORD *)&v117[0] + 1); /*0x10050cfef*/
            v19 = *((_QWORD *)&v117[1] + 1); /*0x10050cffd*/
            v40 = *(_QWORD *)&v117[1]; /*0x10050cffd*/
            v41 = (__m128)v117[2]; /*0x10050d004*/
            v42 = v117[3]; /*0x10050d019*/
            goto LABEL_74; /*0x10050d019*/
          }
          if ( !*((_QWORD *)&v107 + 1) ) /*0x10050cb19*/
            goto LABEL_42; /*0x10050cb19*/
          rusqlite::row::Row::get::h97011a0484b66d6b(v117, (char *)&v107 + 8, 0, &off_1019642C8); /*0x10050cb36*/
          v18 = *((_QWORD *)&v117[0] + 1); /*0x10050cb42*/
          v17 = *(_QWORD *)&v117[0]; /*0x10050cb42*/
          v19 = *((_QWORD *)&v117[1] + 1); /*0x10050cb54*/
          v130 = *(_QWORD *)&v117[1]; /*0x10050cb54*/
          if ( *(_QWORD *)&v117[0] != 0x8000000000000016LL ) /*0x10050cb68*/
          {
            v114 = v5; /*0x10050d01e*/
            v41 = (__m128)v117[2]; /*0x10050d025*/
            v40 = v130; /*0x10050d03a*/
            v42 = v117[3]; /*0x10050d03e*/
            goto LABEL_74; /*0x10050d03e*/
          }
          *(_QWORD *)&v125 = *((_QWORD *)&v117[0] + 1); /*0x10050cb88*/
          rusqlite::row::Row::get::hcedcbe2f57af1c50(v117, (char *)&v107 + 8, 1, &off_1019642E0); /*0x10050cb8c*/
          v132 = *((_QWORD *)&v117[0] + 1); /*0x10050cb9f*/
          v17 = *(_QWORD *)&v117[0]; /*0x10050cb9f*/
          v128 = *((_QWORD *)&v117[1] + 1); /*0x10050cbb5*/
          v131 = *(_QWORD *)&v117[1]; /*0x10050cbb5*/
          if ( *(_QWORD *)&v117[0] != 0x8000000000000016LL ) /*0x10050cbc6*/
          {
            v114 = v5; /*0x10050d043*/
            v41 = (__m128)v117[2]; /*0x10050d04a*/
            v42 = v117[3]; /*0x10050d062*/
            if ( v18 ) /*0x10050d062*/
            {
              v126 = *((_QWORD *)&v117[3] + 1); /*0x10050d067*/
              v43 = *(_QWORD *)&v117[3]; /*0x10050d067*/
              v122 = v117[2]; /*0x10050d077*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v18, 1); /*0x10050d07e*/
              v41 = (__m128)v122; /*0x10050d08a*/
              v42 = __PAIR128__(v126, v43); /*0x10050d08a*/
            }
            v19 = v128; /*0x10050d091*/
            v40 = v131; /*0x10050d095*/
            v18 = v132; /*0x10050d099*/
            goto LABEL_74; /*0x10050d09d*/
          }
          rusqlite::row::Row::get::h97011a0484b66d6b(v117, (char *)&v107 + 8, 2, &off_1019642F8); /*0x10050cbe6*/
          v127 = *((_QWORD *)&v117[0] + 1); /*0x10050cbf9*/
          v17 = *(_QWORD *)&v117[0]; /*0x10050cbf9*/
          v126 = *((_QWORD *)&v117[1] + 1); /*0x10050cc0f*/
          v123 = *(_QWORD *)&v117[1]; /*0x10050cc0f*/
          if ( *(_QWORD *)&v117[0] != 0x8000000000000016LL ) /*0x10050cc20*/
          {
            v114 = v5; /*0x10050d0a2*/
            v41 = (__m128)v117[2]; /*0x10050d0a9*/
            v42 = v117[3]; /*0x10050d0b7*/
            v122 = v117[2]; /*0x10050d0cd*/
            if ( 2 * v132 ) /*0x10050d0c2*/
            {
              v44 = v117[3]; /*0x10050d0d9*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v131, v132, 1); /*0x10050d0e5*/
              v41 = (__m128)v122; /*0x10050d0f0*/
              v42 = v44; /*0x10050d0f0*/
            }
            if ( (_QWORD)v125 ) /*0x10050d0fe*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v125, 1); /*0x10050d10f*/
              v41 = (__m128)v122; /*0x10050d11a*/
            }
            v19 = v126; /*0x10050d121*/
            v40 = v123; /*0x10050d125*/
            v18 = v127; /*0x10050d129*/
            goto LABEL_74; /*0x10050d12d*/
          }
          v18 = v19; /*0x10050cc26*/
          v16 = (char *)&v107 + 8; /*0x10050cc35*/
          rusqlite::row::Row::get::h97011a0484b66d6b(v117, (char *)&v107 + 8, 3, &off_101964310); /*0x10050cc43*/
          v121 = *((_QWORD *)&v117[0] + 1); /*0x10050cc56*/
          v17 = *(_QWORD *)&v117[0]; /*0x10050cc56*/
          v19 = *((_QWORD *)&v117[1] + 1); /*0x10050cc64*/
          v20 = *(_QWORD *)&v117[1]; /*0x10050cc64*/
          if ( *(_QWORD *)&v117[0] != 0x8000000000000016LL ) /*0x10050cc78*/
          {
            v114 = v5; /*0x10050d132*/
            v41 = (__m128)v117[2]; /*0x10050d139*/
            v126 = *((_QWORD *)&v117[3] + 1); /*0x10050d152*/
            v128 = *(_QWORD *)&v117[3]; /*0x10050d152*/
            v122 = v117[2]; /*0x10050d15d*/
            if ( v127 ) /*0x10050d164*/
            {
              v45 = *(_QWORD *)&v117[1]; /*0x10050d166*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v123, v127, 1); /*0x10050d172*/
              v41 = (__m128)v122; /*0x10050d177*/
              v20 = v45; /*0x10050d17e*/
            }
            v46 = v125; /*0x10050d190*/
            v85 = v20; /*0x10050d194*/
            if ( 2 * v132 ) /*0x10050d185*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v131, v132, 1); /*0x10050d1f6*/
              v41 = (__m128)v122; /*0x10050d1fb*/
              v20 = v85; /*0x10050d202*/
              if ( !v46 ) /*0x10050d20c*/
                goto LABEL_72; /*0x10050d20c*/
LABEL_69:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v46, 1); /*0x10050d1a2*/
              v41 = (__m128)v122; /*0x10050d1b3*/
              v40 = v85; /*0x10050d1ba*/
            }
            else
            {
              if ( (_QWORD)v125 ) /*0x10050d1a0*/
                goto LABEL_69; /*0x10050d1a0*/
LABEL_72:
              v40 = v20; /*0x10050d20e*/
            }
            v18 = v121; /*0x10050d211*/
            v42 = __PAIR128__(v126, v128); /*0x10050d21c*/
LABEL_74:
            v117[3] = v42; /*0x10050d220*/
            *(_QWORD *)&v117[0] = v17; /*0x10050d22e*/
            *((_QWORD *)&v117[0] + 1) = v18; /*0x10050d235*/
            *(_QWORD *)&v117[1] = v40; /*0x10050d23c*/
            *((_QWORD *)&v117[1] + 1) = v19; /*0x10050d243*/
            v117[2] = v41; /*0x10050d24a*/
            *(_QWORD *)&v87 = __src; /*0x10050d255*/
            *((_QWORD *)&v87 + 1) = __n; /*0x10050d260*/
            v92 = &v87; /*0x10050d26e*/
            *(_QWORD *)&v93 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10050d27c*/
            *((_QWORD *)&v93 + 1) = v117; /*0x10050d28a*/
            v94 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10050d298*/
            v47 = &unk_1017C08D9; /*0x10050d29f*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v97, &unk_1017C08D9, &v92); /*0x10050d2b4*/
            v48 = *(_QWORD *)v97; /*0x10050d2b9*/
            v125 = *(_OWORD *)&v97[8]; /*0x10050d2c7*/
            v9 = v104; /*0x10050d2d2*/
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v117); /*0x10050d2d9*/
            v4 = v81; /*0x10050d2de*/
            v49 = v112; /*0x10050d2e5*/
            *(_QWORD *)v112 = 10; /*0x10050d2ec*/
            *(_QWORD *)(v49 + 8) = v48; /*0x10050d2f3*/
            *(_OWORD *)(v49 + 16) = v125; /*0x10050d2fb*/
            core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v107); /*0x10050d306*/
            goto LABEL_75; /*0x10050d306*/
          }
          if ( __OFSUB__(-(__int64)v125, 1) ) /*0x10050cc88*/
          {
            v17 = v130; /*0x10050d1c3*/
            v114 = v5; /*0x10050d1c7*/
            v41 = _mm_movelh_ps((__m128)v126, (__m128)v132); /*0x10050d1d8*/
            v19 = v123; /*0x10050d1e3*/
            v40 = v127; /*0x10050d1e7*/
            v42 = __PAIR128__(v128, v131); /*0x10050d1eb*/
            goto LABEL_74; /*0x10050d1eb*/
          }
          if ( (_QWORD)v125 == 0x8000000000000001LL ) /*0x10050cc9b*/
          {
LABEL_42:
            core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v107); /*0x10050cece*/
            v31 = v104; /*0x10050cee1*/
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v75); /*0x10050cee8*/
            v4 = v81; /*0x10050ceed*/
            core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v62, v16, v32, v33); /*0x10050cefb*/
            if ( v31 ) /*0x10050cf03*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v31, 1); /*0x10050cf11*/
            v83 -= 24LL; /*0x10050cf16*/
            v6 += 3; /*0x10050cf1e*/
            v8 = v5; /*0x10050cf22*/
            v3 = v82; /*0x10050cf28*/
            v7 = v122; /*0x10050cf2f*/
            if ( v5 == v4 ) /*0x10050cf36*/
            {
              v5 = v4; /*0x10050cf3c*/
              goto LABEL_46; /*0x10050cf3c*/
            }
            goto LABEL_3; /*0x10050cf36*/
          }
          v21 = *(_QWORD *)&v117[1]; /*0x10050ccad*/
          if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10050ccb3*/
                                  "\"subagent\"threadsupdated_at_msCOALESCE(updated_at_ms, 0)updated_atCOALESCE(updated_a"
                                  "t, 0)0codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFER"
                                  "REDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = "
                                  "?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
                                  0xAu,
                                  *(void **)&v117[1]) )
            break; /*0x10050ccb3*/
          v23 = __n; /*0x10050cd13*/
          if ( __n ) /*0x10050cd1a*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x10050cd1c*/
              "\"subagent\"threadsupdated_at_msCOALESCE(updated_at_ms, 0)updated_atCOALESCE(updated_at, 0)0codexmate_lib:"
              ":core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA "
              "wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
              10);
            v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10050cd2a*/
            v23 = __n; /*0x10050cd2f*/
            if ( !v24 ) /*0x10050cd36*/
            {
              v114 = v5; /*0x10050d849*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x10050d858*/
            }
          }
          else
          {
            v24 = 1; /*0x10050cd3d*/
          }
          v86 = v24; /*0x10050cd42*/
          memcpy((void *)v24, __src, v23); /*0x10050cd50*/
          v25 = v122; /*0x10050cd55*/
          if ( v132 == (_QWORD)v122 ) /*0x10050cd60*/
          {
            v26 = v105; /*0x10050cdae*/
            v12 = v106; /*0x10050cdb5*/
          }
          else
          {
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v131, v128); /*0x10050cd6a*/
            v26 = v131; /*0x10050cd6f*/
            v25 = v132; /*0x10050cd73*/
            v28 = v27 == 0; /*0x10050cd77*/
            v12 = v128; /*0x10050cd7a*/
            if ( v28 ) /*0x10050cd7e*/
            {
              if ( v132 ) /*0x10050cd87*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v131, v132, 1); /*0x10050cd92*/
              v26 = v105; /*0x10050cd97*/
              v12 = v106; /*0x10050cd9e*/
              v25 = v122; /*0x10050cda5*/
            }
          }
          *(_QWORD *)&v117[3] = v127; /*0x10050cdc0*/
          *((_QWORD *)&v117[3] + 1) = v123; /*0x10050cdcb*/
          *(_QWORD *)&v117[4] = v126; /*0x10050cdd6*/
          *(_QWORD *)&v117[0] = __n; /*0x10050cde1*/
          *((_QWORD *)&v117[0] + 1) = v86; /*0x10050cdef*/
          *(_QWORD *)&v117[1] = __n; /*0x10050cdf6*/
          *((_QWORD *)&v117[1] + 1) = v125; /*0x10050ce01*/
          v117[2] = __PAIR128__(v18, v130); /*0x10050ce0c*/
          *((_QWORD *)&v117[4] + 1) = v25; /*0x10050ce1a*/
          v84 = v26; /*0x10050ce21*/
          *(_QWORD *)&v117[5] = v26; /*0x10050ce28*/
          v128 = v12; /*0x10050ce2f*/
          *((_QWORD *)&v117[5] + 1) = v12; /*0x10050ce33*/
          v29 = v103; /*0x10050ce3a*/
          if ( v103 == v101 ) /*0x10050ce48*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h8b5a3ecf3d9897d5(&v101); /*0x10050ce51*/
          qmemcpy((void *)(v102 + 96 * v29), v117, 0x60u); /*0x10050ce71*/
          v15 = 0; /*0x10050ce71*/
          v103 = v29 + 1; /*0x10050ce77*/
          v105 = v84; /*0x10050ce85*/
          v30 = v128; /*0x10050ce8c*/
          v106 = v128; /*0x10050ce90*/
          if ( v121 ) /*0x10050cea1*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v121, 1); /*0x10050ceaf*/
            v105 = v84; /*0x10050cebb*/
            v106 = v30; /*0x10050cec2*/
          }
        }
        if ( v121 ) /*0x10050ccc6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v121, 1); /*0x10050ccd0*/
        v22 = v125; /*0x10050ccdc*/
        if ( v127 ) /*0x10050cce0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v123, v127, 1); /*0x10050cceb*/
        if ( !(2 * v132) ) /*0x10050ccf4*/
          break; /*0x10050ccf4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v131, v132, 1); /*0x10050cac9*/
        if ( v22 ) /*0x10050cad1*/
          goto LABEL_11; /*0x10050cad1*/
      }
      if ( v22 ) /*0x10050cd08*/
LABEL_11:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v22, 1); /*0x10050cad3*/
    }
  }
  v114 = v5; /*0x10050d3f2*/
  v96 = v117[3]; /*0x10050d40e*/
  v95 = v117[2]; /*0x10050d42a*/
  v94 = *((__int64 (__fastcall **)(_QWORD, _QWORD))&v117[1] + 1); /*0x10050d438*/
  v93 = *(_OWORD *)((char *)v117 + 8); /*0x10050d45b*/
  v92 = *(__int128 **)&v117[0]; /*0x10050d462*/
  *(_QWORD *)&v73 = __src; /*0x10050d46d*/
  *((_QWORD *)&v73 + 1) = __n; /*0x10050d478*/
  *(_QWORD *)v97 = &v73; /*0x10050d486*/
  *(_QWORD *)&v97[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10050d494*/
  *(_QWORD *)&v97[16] = &v92; /*0x10050d4a2*/
  *(_QWORD *)&v98 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10050d4b0*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v87, &unk_1017C0857, v97); /*0x10050d4cc*/
  *(_OWORD *)v97 = v87; /*0x10050d4df*/
  *(_QWORD *)&v97[16] = v88; /*0x10050d4f4*/
  core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v92); /*0x10050d502*/
  v55 = *(_OWORD *)v97; /*0x10050d515*/
  v75 = *(_OWORD *)v97; /*0x10050d51c*/
  v76 = *(_QWORD *)&v97[16]; /*0x10050d52a*/
  v56 = v112; /*0x10050d531*/
  *(_QWORD *)(v112 + 24) = *(_QWORD *)&v97[16]; /*0x10050d538*/
  *(_OWORD *)(v56 + 8) = v55; /*0x10050d540*/
  *(_QWORD *)v56 = 10; /*0x10050d544*/
  if ( v9 ) /*0x10050d54e*/
    goto LABEL_77; /*0x10050d54e*/
LABEL_78:
  v28 = v4 == v5; /*0x10050d339*/
  v52 = v80; /*0x10050d33c*/
  if ( !v28 ) /*0x10050d343*/
  {
    v53 = v83 / 0x18; /*0x10050d35c*/
    do /*0x10050d377*/
    {
      v54 = *(v6 - 1); /*0x10050d379*/
      if ( v54 ) /*0x10050d380*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v54, 1); /*0x10050d38a*/
      v6 += 3; /*0x10050d370*/
      --v53; /*0x10050d374*/
    }
    while ( v53 ); /*0x10050d377*/
  }
  if ( v52 ) /*0x10050d394*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, 24 * v52, 8); /*0x10050d3aa*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72f82cad8096f66a(&v101); /*0x10050d3b6*/
  result = v101; /*0x10050d3bb*/
  if ( v101 ) /*0x10050d3c5*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, 96 * v101, 8); /*0x10050d3db*/
  return result; /*0x10050d3e0*/
}