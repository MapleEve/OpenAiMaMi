// __ZN13codexmate_lib4core5relay23codex_thread_visibility47inspect_thread_provider_convergence_with_reader @ 0x1008fb160 | 1.2.4 NEW-delta
void *__fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence_with_reader::hda668315b0172051(
        void *a1,
        __int64 a2,
        void *a3,
        signed __int64 a4,
        _QWORD *a5)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 *v9; // r14
  __int64 v10; // r15
  unsigned __int64 *v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rbx
  unsigned __int64 v16; // r12
  __int64 *v17; // rax
  __int64 v18; // r14
  unsigned __int64 *v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 *v29; // rcx
  _QWORD *v30; // r15
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  unsigned __int64 v35; // rbx
  _QWORD *v36; // rsi
  __int64 (__fastcall *v37)(); // rdi
  __int64 v38; // rbx
  __int64 v39; // r13
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r15
  char v42; // al
  int v43; // ecx
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rbx
  _QWORD *v57; // r12
  __int64 v58; // rsi
  _QWORD v60[14]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v61[24]; // [rsp+70h] [rbp-390h] BYREF
  _BYTE v62[24]; // [rsp+88h] [rbp-378h] BYREF
  _QWORD v63[3]; // [rsp+A0h] [rbp-360h] BYREF
  unsigned __int64 v64; // [rsp+B8h] [rbp-348h]
  unsigned __int64 v65; // [rsp+C0h] [rbp-340h]
  unsigned __int64 v66; // [rsp+C8h] [rbp-338h]
  _QWORD v67[2]; // [rsp+D0h] [rbp-330h] BYREF
  _QWORD v68[3]; // [rsp+E0h] [rbp-320h] BYREF
  _QWORD v69[3]; // [rsp+F8h] [rbp-308h] BYREF
  _QWORD *v70; // [rsp+110h] [rbp-2F0h]
  void *v71; // [rsp+118h] [rbp-2E8h]
  unsigned __int64 v72; // [rsp+120h] [rbp-2E0h]
  unsigned __int64 v73; // [rsp+128h] [rbp-2D8h]
  unsigned __int64 v74; // [rsp+130h] [rbp-2D0h] BYREF
  unsigned __int64 v75; // [rsp+138h] [rbp-2C8h]
  unsigned __int64 v76; // [rsp+140h] [rbp-2C0h]
  unsigned __int64 v77; // [rsp+148h] [rbp-2B8h] BYREF
  unsigned __int64 v78; // [rsp+150h] [rbp-2B0h]
  unsigned __int64 v79; // [rsp+158h] [rbp-2A8h]
  __int64 v80; // [rsp+160h] [rbp-2A0h] BYREF
  __int64 v81; // [rsp+168h] [rbp-298h]
  __int64 v82; // [rsp+170h] [rbp-290h]
  __int64 v83; // [rsp+178h] [rbp-288h] BYREF
  __int64 v84; // [rsp+180h] [rbp-280h]
  __int64 v85; // [rsp+188h] [rbp-278h]
  unsigned __int64 v86[19]; // [rsp+190h] [rbp-270h] BYREF
  unsigned __int64 *v87; // [rsp+228h] [rbp-1D8h]
  __int64 v88; // [rsp+230h] [rbp-1D0h]
  unsigned __int64 v89; // [rsp+238h] [rbp-1C8h]
  unsigned __int64 v90; // [rsp+240h] [rbp-1C0h]
  __int64 v91; // [rsp+248h] [rbp-1B8h] BYREF
  __int64 v92; // [rsp+250h] [rbp-1B0h]
  __int64 v93; // [rsp+258h] [rbp-1A8h]
  __int64 v94; // [rsp+260h] [rbp-1A0h]
  _QWORD v95[12]; // [rsp+268h] [rbp-198h] BYREF
  _QWORD *v96; // [rsp+2C8h] [rbp-138h] BYREF
  __int64 (__fastcall *v97)(); // [rsp+2D0h] [rbp-130h]
  unsigned __int64 v98; // [rsp+2D8h] [rbp-128h]
  _QWORD v99[14]; // [rsp+2E0h] [rbp-120h] BYREF
  unsigned __int64 v100; // [rsp+350h] [rbp-B0h] BYREF
  unsigned __int64 v101; // [rsp+358h] [rbp-A8h] BYREF
  unsigned __int64 v102; // [rsp+360h] [rbp-A0h]
  unsigned __int64 v103; // [rsp+368h] [rbp-98h]
  unsigned __int64 v104; // [rsp+370h] [rbp-90h]
  unsigned __int64 v105; // [rsp+378h] [rbp-88h]
  unsigned __int64 *v106; // [rsp+380h] [rbp-80h] BYREF
  __int64 v107; // [rsp+388h] [rbp-78h]
  unsigned __int64 *v108; // [rsp+390h] [rbp-70h]
  __int64 (__fastcall *v109)(_QWORD, _QWORD); // [rsp+398h] [rbp-68h]
  __int64 v110; // [rsp+3A0h] [rbp-60h]
  __int64 v111; // [rsp+3A8h] [rbp-58h]
  __int64 v112; // [rsp+3B0h] [rbp-50h]
  __int64 v113; // [rsp+3B8h] [rbp-48h]
  void *__src; // [rsp+3C0h] [rbp-40h]
  _QWORD *v115; // [rsp+3C8h] [rbp-38h]
  __int64 v116; // [rsp+3D0h] [rbp-30h]

  v67[0] = a3; /*0x1008fb177*/
  v67[1] = a4; /*0x1008fb17e*/
  if ( a4 < 0 ) /*0x1008fb188*/
  {
    v6 = 0; /*0x1008fb18a*/
    goto LABEL_3; /*0x1008fb18a*/
  }
  __src = a3; /*0x1008fb19b*/
  v70 = a5; /*0x1008fb19f*/
  if ( a4 ) /*0x1008fb1a9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x1008fb1ab*/
    v6 = 1; /*0x1008fb1b0*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x1008fb1be*/
    if ( !v7 ) /*0x1008fb1c6*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, a4); /*0x1008fb18d*/
    v8 = v7; /*0x1008fb1c8*/
  }
  else
  {
    v8 = 1; /*0x1008fb1cd*/
  }
  memcpy((void *)v8, __src, a4); /*0x1008fb1df*/
  v99[0] = a4; /*0x1008fb1e4*/
  v99[1] = v8; /*0x1008fb1eb*/
  v99[2] = a4; /*0x1008fb1f2*/
  v99[3] = 0; /*0x1008fb230*/
  v99[4] = 8; /*0x1008fb23b*/
  v99[5] = 0; /*0x1008fb246*/
  v99[6] = 0; /*0x1008fb251*/
  v99[7] = 8; /*0x1008fb25c*/
  memset(&v99[8], 0, 48); /*0x1008fb267*/
  v95[0] = __src; /*0x1008fb272*/
  v95[1] = a4; /*0x1008fb279*/
  if ( a4 != 6 /*0x1008fb2b6*/
    || *(_DWORD *)__src ^ 0x6E65706F | *((unsigned __int16 *)__src + 2) ^ 0x6961
    && *(_DWORD *)__src ^ 0x616D6961 | *((unsigned __int16 *)__src + 2) ^ 0x3169 )
  {
    v86[0] = (unsigned __int64)v95; /*0x1008fb2c5*/
    v86[1] = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1008fb2d3*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v60[1], &unk_1017D191B, v86); /*0x1008fb2ef*/
    v60[0] = 10; /*0x1008fb2f4*/
    qmemcpy(v86, v60, 0x60u); /*0x1008fb315*/
    v106 = nullptr; /*0x1008fb318*/
    v107 = 1; /*0x1008fb320*/
    v108 = nullptr; /*0x1008fb328*/
    v95[2] = 1610612768; /*0x1008fb330*/
    v95[0] = &v106; /*0x1008fb33f*/
    v95[1] = &off_10197D5E0; /*0x1008fb34d*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b( /*0x1008fb35e*/
                            v86,
                            v95) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_101680BC3, 55, &v100, &unk_10197D6C8, &off_10197D610); /*0x1008fc017*/
    v9 = v106; /*0x1008fb36e*/
    v10 = v107; /*0x1008fb372*/
    v11 = v108; /*0x1008fb376*/
    v12 = v99[5]; /*0x1008fb37a*/
    if ( v99[5] == v99[3] ) /*0x1008fb388*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v99[3]); /*0x1008fb391*/
    v13 = v99[4]; /*0x1008fb396*/
    v14 = 3 * v12; /*0x1008fb39d*/
    *(_QWORD *)(v99[4] + 8 * v14) = v9; /*0x1008fb3a1*/
    *(_QWORD *)(v13 + 8 * v14 + 8) = v10; /*0x1008fb3a5*/
    *(_QWORD *)(v13 + 8 * v14 + 16) = v11; /*0x1008fb3aa*/
    v99[5] = v12 + 1; /*0x1008fb3b2*/
    v15 = a1; /*0x1008fb3c5*/
    qmemcpy(a1, v99, 0x70u); /*0x1008fb3cb*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v86); /*0x1008fb3d5*/
    return v15; /*0x1008fb3da*/
  }
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h2c37c38d14365ff6(v86); /*0x1008fb3e9*/
  v71 = a1; /*0x1008fb3ee*/
  v16 = v86[1]; /*0x1008fb3fc*/
  v63[2] = v86[1]; /*0x1008fb412*/
  v64 = v86[1]; /*0x1008fb419*/
  v72 = v86[0]; /*0x1008fb420*/
  v65 = v86[0]; /*0x1008fb427*/
  v89 = v86[1] + 24 * v86[2]; /*0x1008fb42e*/
  v66 = v89; /*0x1008fb435*/
  v90 = v86[1]; /*0x1008fb43c*/
  if ( v86[2] ) /*0x1008fb446*/
  {
    v17 = (__int64 *)v90; /*0x1008fb456*/
    while ( 1 ) /*0x1008fb470*/
    {
      v16 = (unsigned __int64)(v17 + 3); /*0x1008fb470*/
      v64 = (unsigned __int64)(v17 + 3); /*0x1008fb474*/
      v18 = *v17; /*0x1008fb47b*/
      if ( *v17 == 0x8000000000000000LL ) /*0x1008fb481*/
        break; /*0x1008fb481*/
      v19 = (unsigned __int64 *)v17[1]; /*0x1008fb487*/
      v20 = v17[2]; /*0x1008fb48b*/
      v87 = v19; /*0x1008fb49c*/
      std::sys::fs::metadata::h32fa16d3052ea535(v86, v19, v20); /*0x1008fb4a3*/
      v21 = v86[0]; /*0x1008fb4a8*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h2adb4e876f561eac( /*0x1008fb4b9*/
        v86[0],
        v86[1]);
      if ( v21 ) /*0x1008fb4c1*/
        goto LABEL_89; /*0x1008fb4c1*/
      codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::h7db5dcb7031bfcb1(v86, v19, v20); /*0x1008fb4d4*/
      if ( LOBYTE(v86[13]) == 3 ) /*0x1008fb4e0*/
      {
        qmemcpy(v60, v86, 0x60u); /*0x1008fb4fc*/
        v106 = v19; /*0x1008fb4ff*/
        v107 = v20; /*0x1008fb503*/
        v95[0] = &v106; /*0x1008fb50b*/
        v95[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008fb519*/
        v95[2] = v60; /*0x1008fb520*/
        v95[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x1008fb52e*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v69, &unk_1017C3E33, v95); /*0x1008fb54a*/
        v22 = v99[5]; /*0x1008fb54f*/
        if ( v99[5] == v99[3] ) /*0x1008fb55d*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v99[3]); /*0x1008fb566*/
        v23 = v99[4]; /*0x1008fb56b*/
        v24 = 3 * v22; /*0x1008fb572*/
        *(_QWORD *)(v99[4] + 8 * v24 + 16) = v69[2]; /*0x1008fb57d*/
        v25 = v69[0]; /*0x1008fb582*/
        *(_QWORD *)(v23 + 8 * v24 + 8) = v69[1]; /*0x1008fb590*/
        *(_QWORD *)(v23 + 8 * v24) = v25; /*0x1008fb595*/
        v99[5] = v22 + 1; /*0x1008fb59c*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v60); /*0x1008fb5aa*/
        goto LABEL_89; /*0x1008fb5af*/
      }
      qmemcpy(v60, v86, sizeof(v60)); /*0x1008fb5d6*/
      codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h54a0b54540cbf65c( /*0x1008fb5e3*/
        v95,
        v60);
      if ( LODWORD(v95[0]) != 11 ) /*0x1008fb5f9*/
      {
        qmemcpy(v86, v95, 0x60u); /*0x1008fbe48*/
        v100 = (unsigned __int64)v19; /*0x1008fbe4b*/
        v101 = v20; /*0x1008fbe52*/
        v106 = &v100; /*0x1008fbe60*/
        v107 = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008fbe6b*/
        v108 = v86; /*0x1008fbe6f*/
        v109 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x1008fbe7a*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v68, &unk_1017C3E33, &v106); /*0x1008fbe90*/
        v52 = v99[5]; /*0x1008fbe95*/
        if ( v99[5] == v99[3] ) /*0x1008fbea3*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v99[3]); /*0x1008fbeac*/
        v53 = v99[4]; /*0x1008fbeb1*/
        v54 = 3 * v52; /*0x1008fbeb8*/
        *(_QWORD *)(v99[4] + 8 * v54 + 16) = v68[2]; /*0x1008fbec3*/
        v55 = v68[0]; /*0x1008fbec8*/
        *(_QWORD *)(v53 + 8 * v54 + 8) = v68[1]; /*0x1008fbed6*/
        *(_QWORD *)(v53 + 8 * v54) = v55; /*0x1008fbedb*/
        v99[5] = v52 + 1; /*0x1008fbee2*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v86); /*0x1008fbef0*/
        goto LABEL_88; /*0x1008fbef5*/
      }
      v116 = v18; /*0x1008fb5ff*/
      v91 = v95[2]; /*0x1008fb620*/
      v92 = v95[2]; /*0x1008fb627*/
      v93 = v95[1]; /*0x1008fb62e*/
      v88 = v95[2] + 72LL * v95[3]; /*0x1008fb635*/
      v94 = v88; /*0x1008fb63c*/
      if ( !v95[3] ) /*0x1008fb646*/
        goto LABEL_87; /*0x1008fb646*/
      v26 = v95[2] + 72LL; /*0x1008fb64c*/
      while ( 1 ) /*0x1008fb679*/
      {
        v28 = *(_QWORD *)(v26 - 72); /*0x1008fb679*/
        v29 = *(unsigned __int64 **)(v26 - 64); /*0x1008fb67d*/
        v113 = *(_QWORD *)(v26 - 8); /*0x1008fb685*/
        v112 = *(_QWORD *)(v26 - 16); /*0x1008fb68d*/
        v111 = *(_QWORD *)(v26 - 24); /*0x1008fb695*/
        v110 = *(_QWORD *)(v26 - 32); /*0x1008fb69d*/
        v109 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v26 - 40); /*0x1008fb6a5*/
        v108 = *(unsigned __int64 **)(v26 - 48); /*0x1008fb6ad*/
        v107 = *(_QWORD *)(v26 - 56); /*0x1008fb6b5*/
        v106 = v29; /*0x1008fb6b9*/
        if ( v28 == 0x8000000000000000LL ) /*0x1008fb6c0*/
          break; /*0x1008fb6c0*/
        v95[0] = v28; /*0x1008fb6c6*/
        v95[8] = v113; /*0x1008fb6d8*/
        v95[7] = v112; /*0x1008fb6e0*/
        v95[6] = v111; /*0x1008fb6e8*/
        v95[5] = v110; /*0x1008fb6f0*/
        v95[4] = v109; /*0x1008fb6f8*/
        v95[3] = v108; /*0x1008fb700*/
        ++v99[9]; /*0x1008fb70c*/
        v95[2] = v107; /*0x1008fb713*/
        v95[1] = v106; /*0x1008fb717*/
        if ( v111 == 0x8000000000000000LL ) /*0x1008fb721*/
        {
          ++v99[12]; /*0x1008fb727*/
          v86[0] = (unsigned __int64)v95; /*0x1008fb735*/
          v86[1] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008fb743*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v62, &unk_1017D2BF2, v86); /*0x1008fb75f*/
          v30 = v62; /*0x1008fb764*/
          v31 = v99[8]; /*0x1008fb76b*/
          if ( v99[8] < 3u ) /*0x1008fb776*/
            goto LABEL_31; /*0x1008fb776*/
        }
        else
        {
          std::sys::fs::metadata::h32fa16d3052ea535(v86, v95[7], v95[8]); /*0x1008fb7f5*/
          v35 = v86[0]; /*0x1008fb7fa*/
          core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h2adb4e876f561eac( /*0x1008fb80b*/
            v86[0],
            v86[1]);
          if ( !v35 ) /*0x1008fb813*/
          {
            v38 = v95[7]; /*0x1008fb8d0*/
            v39 = v95[8]; /*0x1008fb8d7*/
            codexmate_lib::core::relay::codex_diagnostic::DiagnosticRolloutProviderCache::read::hf6e727bfaebe7832( /*0x1008fb8f2*/
              v86,
              v70,
              v95[7],
              v95[8]);
            if ( ((v86[0] - 0x7FFFFFFFFFFFFFFFLL) & ((__int64)v86[0] >> 63)) != 0 ) /*0x1008fb914*/
            {
              if ( ((v86[0] - 0x7FFFFFFFFFFFFFFFLL) & ((__int64)v86[0] >> 63)) == 1 ) /*0x1008fb91a*/
              {
                v63[0] = v38; /*0x1008fb920*/
                v63[1] = v39; /*0x1008fb927*/
                v96 = v63; /*0x1008fb935*/
                v97 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008fb943*/
                alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1008fb95f*/
                  &v101,
                  &anon_7245a3145add9b93f83b0a9aa358a664_679,
                  &v96);
              }
              else
              {
                v103 = v86[3]; /*0x1008fbb0e*/
                v102 = v86[2]; /*0x1008fbb19*/
                v101 = v86[1]; /*0x1008fbb1d*/
              }
              v100 = 0x8000000000000000LL; /*0x1008fbb2a*/
              goto LABEL_54; /*0x1008fbb2a*/
            }
            v105 = v86[5]; /*0x1008fb970*/
            v104 = v86[4]; /*0x1008fb97e*/
            v103 = v86[3]; /*0x1008fb98c*/
            v102 = v86[2]; /*0x1008fb99a*/
            v101 = v86[1]; /*0x1008fb9af*/
            v100 = v86[0]; /*0x1008fb9b6*/
            if ( v86[0] == 0x8000000000000000LL ) /*0x1008fb9ca*/
            {
LABEL_54:
              v98 = v103; /*0x1008fbb31*/
              v97 = (__int64 (__fastcall *)())v102; /*0x1008fbb4a*/
              v96 = (_QWORD *)v101; /*0x1008fbb51*/
              ++v99[13]; /*0x1008fbb58*/
              v86[0] = (unsigned __int64)v95; /*0x1008fbb66*/
              v86[1] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008fbb74*/
              v86[2] = (unsigned __int64)&v96; /*0x1008fbb82*/
              v86[3] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008fbb89*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v83, &unk_1017C3E33, v86); /*0x1008fbba5*/
              v44 = v99[8]; /*0x1008fbbaa*/
              if ( v99[8] >= 3u ) /*0x1008fbbb5*/
              {
                if ( v83 ) /*0x1008fbc28*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v83, 1); /*0x1008fbc36*/
              }
              else
              {
                if ( v99[8] == v99[6] ) /*0x1008fbbbe*/
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v99[6]); /*0x1008fbbd5*/
                v45 = v99[7]; /*0x1008fbbda*/
                v46 = 3 * v44; /*0x1008fbbe1*/
                *(_QWORD *)(v99[7] + 8 * v46 + 16) = v85; /*0x1008fbbec*/
                v47 = v83; /*0x1008fbbf1*/
                *(_QWORD *)(v45 + 8 * v46 + 8) = v84; /*0x1008fbbff*/
                *(_QWORD *)(v45 + 8 * v46) = v47; /*0x1008fbc04*/
                v99[8] = v44 + 1; /*0x1008fbc0b*/
              }
              v36 = v96; /*0x1008fbc3b*/
              if ( !v96 ) /*0x1008fbc45*/
                goto LABEL_63; /*0x1008fbc45*/
              v37 = v97; /*0x1008fbc47*/
              goto LABEL_62; /*0x1008fbc47*/
            }
            v79 = v105; /*0x1008fb9d7*/
            v78 = v104; /*0x1008fb9e5*/
            v77 = v103; /*0x1008fb9f3*/
            v40 = v102; /*0x1008fb9fa*/
            v76 = v102; /*0x1008fba01*/
            v75 = v101; /*0x1008fba16*/
            v74 = v100; /*0x1008fba1d*/
            v41 = v101; /*0x1008fba24*/
            if ( !(unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::h5d699b0e873beb9c( /*0x1008fba50*/
                                     v101,
                                     v102)
              || (v73 = v78,
                  v115 = (_QWORD *)v79,
                  !(unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::h5d699b0e873beb9c(
                                      v78,
                                      v79)) )
            {
LABEL_78:
              if ( v74 ) /*0x1008fbe03*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v74, 1); /*0x1008fbe11*/
              v36 = (_QWORD *)v77; /*0x1008fbe16*/
              if ( !v77 ) /*0x1008fbe20*/
                goto LABEL_63; /*0x1008fbe20*/
              v37 = (__int64 (__fastcall *)())v78; /*0x1008fbe26*/
              goto LABEL_62; /*0x1008fbe2d*/
            }
            if ( v95[5] == 6 /*0x1008fba83*/
              && !(*(_DWORD *)__src ^ *(_DWORD *)v95[4]
                 | (unsigned __int16)(*((_WORD *)__src + 2) ^ *(_WORD *)(v95[4] + 4LL))) )
            {
              v42 = 1; /*0x1008fbcc4*/
              if ( v40 == 6 ) /*0x1008fbcca*/
                goto LABEL_47; /*0x1008fbcca*/
            }
            else
            {
              ++v99[10]; /*0x1008fba89*/
              v42 = 0; /*0x1008fba90*/
              if ( v40 == 6 ) /*0x1008fba96*/
              {
LABEL_47:
                v43 = 0; /*0x1008fba9c*/
                if ( v115 == (_QWORD *)6 ) /*0x1008fbabd*/
                {
                  LOBYTE(v43) = (*(_DWORD *)__src ^ *(_DWORD *)v41 /*0x1008fbac3*/
                               | (unsigned __int16)(*((_WORD *)__src + 2) ^ *(_WORD *)(v41 + 4))) != 0;
                  if ( !v43 /*0x1008fbae7*/
                    && !(*(_DWORD *)__src ^ *(_DWORD *)v73
                       | (unsigned __int16)(*((_WORD *)__src + 2) ^ *(_WORD *)(v73 + 4))) )
                  {
                    if ( v42 ) /*0x1008fbaf1*/
                      goto LABEL_78; /*0x1008fbaf1*/
LABEL_72:
                    v86[0] = (unsigned __int64)v95; /*0x1008fbcd7*/
                    v86[1] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008fbcec*/
                    v86[2] = (unsigned __int64)&v95[3]; /*0x1008fbcfa*/
                    v86[3] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008fbd01*/
                    v86[4] = (unsigned __int64)&v74; /*0x1008fbd0f*/
                    v86[5] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008fbd16*/
                    v86[6] = (unsigned __int64)&v77; /*0x1008fbd24*/
                    v86[7] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008fbd2b*/
                    v86[8] = (unsigned __int64)v67; /*0x1008fbd39*/
                    v86[9] = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1008fbd47*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v80, &unk_1017D2D02, v86); /*0x1008fbd63*/
                    v48 = v99[8]; /*0x1008fbd68*/
                    if ( v99[8] >= 3u ) /*0x1008fbd73*/
                    {
                      if ( v80 ) /*0x1008fbde6*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v80, 1); /*0x1008fbdf4*/
                    }
                    else
                    {
                      if ( v99[8] == v99[6] ) /*0x1008fbd7c*/
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v99[6]); /*0x1008fbd93*/
                      v49 = v99[7]; /*0x1008fbd98*/
                      v50 = 3 * v48; /*0x1008fbd9f*/
                      *(_QWORD *)(v99[7] + 8 * v50 + 16) = v82; /*0x1008fbdaa*/
                      v51 = v80; /*0x1008fbdaf*/
                      *(_QWORD *)(v49 + 8 * v50 + 8) = v81; /*0x1008fbdbd*/
                      *(_QWORD *)(v49 + 8 * v50) = v51; /*0x1008fbdc2*/
                      v99[8] = v48 + 1; /*0x1008fbdc9*/
                    }
                    goto LABEL_78; /*0x1008fbdda*/
                  }
                }
              }
            }
            ++v99[11]; /*0x1008fbcd0*/
            goto LABEL_72; /*0x1008fbcd0*/
          }
          ++v99[12]; /*0x1008fb819*/
          v100 = v95[7]; /*0x1008fb82e*/
          v101 = v95[8]; /*0x1008fb835*/
          v86[0] = (unsigned __int64)v95; /*0x1008fb843*/
          v86[1] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008fb851*/
          v86[2] = (unsigned __int64)&v100; /*0x1008fb85f*/
          v86[3] = (unsigned __int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008fb86d*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v61, &unk_1017D2CE9, v86); /*0x1008fb889*/
          v30 = v61; /*0x1008fb88e*/
          v31 = v99[8]; /*0x1008fb895*/
          if ( v99[8] < 3u ) /*0x1008fb8a0*/
          {
LABEL_31:
            if ( v31 == v99[6] ) /*0x1008fb783*/
            {
              v115 = (_QWORD *)*v30; /*0x1008fb788*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v99[6]); /*0x1008fb797*/
            }
            v32 = v99[7]; /*0x1008fb79c*/
            v33 = 3 * v31; /*0x1008fb7a3*/
            *(_QWORD *)(v99[7] + 8 * v33 + 16) = v30[2]; /*0x1008fb7ac*/
            v34 = (_QWORD *)*v30; /*0x1008fb7b1*/
            *(_QWORD *)(v32 + 8 * v33 + 8) = v30[1]; /*0x1008fb7b8*/
            *(_QWORD *)(v32 + 8 * v33) = v34; /*0x1008fb7bd*/
            v99[8] = v31 + 1; /*0x1008fb7c4*/
            goto LABEL_63; /*0x1008fb7d5*/
          }
        }
        v36 = (_QWORD *)*v30; /*0x1008fb8a6*/
        if ( *v30 ) /*0x1008fb8a6*/
        {
          v37 = (__int64 (__fastcall *)())v30[1]; /*0x1008fb8bc*/
LABEL_62:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x1008fbc4e*/
        }
LABEL_63:
        if ( v95[0] ) /*0x1008fbc62*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[1], v95[0], 1); /*0x1008fbc70*/
        v19 = v87; /*0x1008fbc7f*/
        if ( v95[6] != 0x8000000000000000LL && v95[6] ) /*0x1008fbc8b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[7], v95[6], 1); /*0x1008fbc99*/
        if ( v95[3] ) /*0x1008fbca8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[4], v95[3], 1); /*0x1008fbcba*/
        v27 = v26 - 72; /*0x1008fb660*/
        v26 += 72; /*0x1008fb664*/
        if ( v27 + 72 == v88 ) /*0x1008fb673*/
        {
          v26 = v88; /*0x1008fbef7*/
          break; /*0x1008fbef7*/
        }
      }
      v92 = v26; /*0x1008fbefe*/
LABEL_87:
      v18 = v116; /*0x1008fbf05*/
      _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h887842800b956d55(&v91); /*0x1008fbf10*/
LABEL_88:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(v60); /*0x1008fbf15*/
LABEL_89:
      if ( v18 ) /*0x1008fbf2e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x1008fbf3f*/
      v17 = (__int64 *)v16; /*0x1008fb460*/
      if ( v16 == v89 ) /*0x1008fb46a*/
        goto LABEL_96; /*0x1008fb46a*/
    }
  }
  if ( v89 != v16 ) /*0x1008fbf66*/
  {
    v56 = (v89 - v16) / 0x18; /*0x1008fbf6b*/
    v57 = (_QWORD *)(v16 + 8); /*0x1008fbf6f*/
    do /*0x1008fbf87*/
    {
      v58 = *(v57 - 1); /*0x1008fbf89*/
      if ( v58 ) /*0x1008fbf91*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v57, v58, 1); /*0x1008fbf9c*/
      v57 += 3; /*0x1008fbf80*/
      --v56; /*0x1008fbf84*/
    }
    while ( v56 ); /*0x1008fbf87*/
  }
LABEL_96:
  if ( v72 ) /*0x1008fbfad*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, 24 * v72, 8); /*0x1008fbfc3*/
  v15 = v71; /*0x1008fbfd4*/
  qmemcpy(v71, v99, 0x70u); /*0x1008fbfde*/
  return v15; /*0x1008fbfe4*/
}