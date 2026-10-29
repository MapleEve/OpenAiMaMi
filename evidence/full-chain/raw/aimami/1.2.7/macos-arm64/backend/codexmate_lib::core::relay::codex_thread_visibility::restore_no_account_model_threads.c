// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::restore_no_account_model_threads::hf5de3bf7b6805257; addr: 0x100492030; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
char *__fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_no_account_model_threads::hf5de3bf7b6805257(
        char *a1,
        __int64 a2,
        double a3)
{
  char *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rbx
  _QWORD *v24; // r14
  __int64 v25; // rsi
  _QWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // r13
  __int64 v33; // r15
  __int64 v34; // r12
  unsigned __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // r14
  const size_t *v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // r15
  void *v43; // rdi
  __int64 v44; // rsi
  void *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rax
  _QWORD *v51; // rbx
  _QWORD *v52; // r14
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rsi
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  __int8 *v58; // rdi
  __int64 v59; // rdx
  char *v60; // r13
  __int64 v61; // rbx
  __int8 *v62; // r15
  unsigned __int64 v63; // rax
  _QWORD *v64; // r14
  unsigned __int64 v65; // rbx
  __int64 v66; // rsi
  __int64 v67; // rdi
  unsigned __int64 i; // r15
  _QWORD *v69; // r14
  __int64 v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // rsi
  const __m128i *v74; // r12
  __m128i si128; // xmm0
  unsigned __int64 v76; // rax
  __int64 v77; // r15
  const __m128i *v78; // r14
  int v81; // eax
  unsigned __int64 v83; // rdi
  int v84; // r13d
  _QWORD *v85; // r14
  double v86; // xmm0_8
  char *v87; // rcx
  __int64 v88; // r14
  unsigned __int64 v89; // r12
  __int64 v90; // rdi
  _QWORD *v91; // rdx
  __int64 v92; // rax
  _QWORD *v93; // rdx
  __int64 v94; // rax
  _QWORD *v95; // rdx
  __int64 v96; // rax
  _QWORD v97[3]; // [rsp+20h] [rbp-3F0h] BYREF
  _QWORD v98[3]; // [rsp+38h] [rbp-3D8h] BYREF
  _QWORD v99[3]; // [rsp+50h] [rbp-3C0h] BYREF
  _QWORD v100[3]; // [rsp+68h] [rbp-3A8h] BYREF
  _QWORD v101[3]; // [rsp+80h] [rbp-390h] BYREF
  _QWORD v102[9]; // [rsp+98h] [rbp-378h] BYREF
  __int64 v103; // [rsp+E0h] [rbp-330h] BYREF
  int v104[2]; // [rsp+E8h] [rbp-328h]
  const __m128i *v105; // [rsp+F0h] [rbp-320h] BYREF
  __int64 v106; // [rsp+F8h] [rbp-318h]
  __int64 v107; // [rsp+100h] [rbp-310h]
  __int64 v108; // [rsp+108h] [rbp-308h]
  __int64 v109; // [rsp+110h] [rbp-300h]
  __int64 v110; // [rsp+118h] [rbp-2F8h]
  __int64 v111; // [rsp+120h] [rbp-2F0h] BYREF
  _QWORD *v112; // [rsp+128h] [rbp-2E8h]
  __int64 v113; // [rsp+130h] [rbp-2E0h]
  __int64 v114; // [rsp+138h] [rbp-2D8h]
  _QWORD *v115; // [rsp+140h] [rbp-2D0h] BYREF
  __int64 (__fastcall *v116)(_QWORD *, __int64 *, __int64, __int64, __int64, __int64); // [rsp+148h] [rbp-2C8h]
  __int64 v117; // [rsp+150h] [rbp-2C0h]
  __int64 v118; // [rsp+158h] [rbp-2B8h]
  __int64 v119; // [rsp+160h] [rbp-2B0h]
  __int64 v120; // [rsp+168h] [rbp-2A8h]
  __int128 v121; // [rsp+170h] [rbp-2A0h] BYREF
  __int128 v122; // [rsp+180h] [rbp-290h] BYREF
  __int64 v123; // [rsp+190h] [rbp-280h] BYREF
  int v124[28]; // [rsp+198h] [rbp-278h] BYREF
  __int64 v125; // [rsp+208h] [rbp-208h]
  _QWORD v126[13]; // [rsp+210h] [rbp-200h] BYREF
  _QWORD v127[19]; // [rsp+278h] [rbp-198h] BYREF
  __int64 *v128; // [rsp+310h] [rbp-100h] BYREF
  __int64 (__fastcall *v129)(); // [rsp+318h] [rbp-F8h]
  _QWORD *v130; // [rsp+320h] [rbp-F0h]
  char *v131; // [rsp+328h] [rbp-E8h]
  __int64 v132; // [rsp+330h] [rbp-E0h]
  __int64 v133; // [rsp+338h] [rbp-D8h]
  __int64 v134; // [rsp+340h] [rbp-D0h]
  __int64 v135; // [rsp+348h] [rbp-C8h]
  __int64 *v136; // [rsp+350h] [rbp-C0h] BYREF
  __int64 v137; // [rsp+358h] [rbp-B8h]
  _QWORD *v138; // [rsp+360h] [rbp-B0h]
  __int64 v139; // [rsp+368h] [rbp-A8h]
  __int64 v140; // [rsp+370h] [rbp-A0h]
  void *__s2; // [rsp+378h] [rbp-98h]
  int v142[2]; // [rsp+380h] [rbp-90h]
  void *__s1; // [rsp+388h] [rbp-88h]
  __int64 v144; // [rsp+390h] [rbp-80h] BYREF
  __int64 v145; // [rsp+398h] [rbp-78h]
  unsigned __int64 v146; // [rsp+3A0h] [rbp-70h]
  char *v147; // [rsp+3A8h] [rbp-68h]
  __int64 v148; // [rsp+3B0h] [rbp-60h]
  char *v149; // [rsp+3B8h] [rbp-58h]
  __int64 v150; // [rsp+3C0h] [rbp-50h]
  __int64 v151; // [rsp+3C8h] [rbp-48h]
  __int64 v152; // [rsp+3D0h] [rbp-40h]
  __int64 v153; // [rsp+3D8h] [rbp-38h]
  __int64 v154; // [rsp+3E0h] [rbp-30h]

  v3 = a1; /*0x100492047*/
  v4 = *(_QWORD *)(a2 + 592); /*0x100492051*/
  v125 = *(_QWORD *)(a2 + 584); /*0x10049205f*/
  v140 = v4; /*0x100492066*/
  codexmate_lib::core::relay::codex_thread_visibility::load_no_account_model_restore_journal::hf61cce737349794f( /*0x10049206d*/
    v127,
    v125,
    v4);
  v5 = v127[0]; /*0x100492072*/
  *(_QWORD *)v124 = v127[1]; /*0x100492080*/
  *(_QWORD *)&v124[2] = v127[2]; /*0x10049208e*/
  *(_QWORD *)&v124[4] = v127[3]; /*0x10049209c*/
  *(_QWORD *)&v124[6] = v127[4]; /*0x1004920aa*/
  if ( v127[0] != 11 ) /*0x1004920b5*/
  {
    *((_QWORD *)a1 + 11) = v127[11]; /*0x100492311*/
    *((_QWORD *)a1 + 10) = v127[10]; /*0x10049231c*/
    *((_QWORD *)a1 + 9) = v127[9]; /*0x100492327*/
    *((_QWORD *)a1 + 8) = v127[8]; /*0x100492332*/
    *((_QWORD *)a1 + 7) = v127[7]; /*0x10049233d*/
    v18 = v127[5]; /*0x100492341*/
    *((_QWORD *)a1 + 6) = v127[6]; /*0x10049234f*/
    *((_QWORD *)a1 + 5) = v18; /*0x100492353*/
    *((_QWORD *)a1 + 4) = *(_QWORD *)&v124[6]; /*0x10049235e*/
    *((_QWORD *)a1 + 3) = *(_QWORD *)&v124[4]; /*0x100492369*/
    v19 = *(_QWORD *)v124; /*0x10049236d*/
    *((_QWORD *)a1 + 2) = *(_QWORD *)&v124[2]; /*0x10049237b*/
    *((_QWORD *)a1 + 1) = v19; /*0x10049237f*/
    *(_QWORD *)a1 = v5; /*0x100492383*/
    return v3; /*0x100492386*/
  }
  v111 = *(_QWORD *)v124; /*0x1004920c9*/
  v112 = *(_QWORD **)&v124[2]; /*0x1004920d0*/
  v6 = *(_QWORD *)&v124[4]; /*0x1004920d7*/
  v113 = *(_QWORD *)&v124[4]; /*0x1004920de*/
  v114 = *(_QWORD *)&v124[6]; /*0x1004920ec*/
  if ( !*(_QWORD *)&v124[4] ) /*0x1004920f6*/
  {
    *((_QWORD *)a1 + 5) = 0; /*0x10049238b*/
    *((_QWORD *)a1 + 4) = 0; /*0x100492393*/
    *((_QWORD *)a1 + 3) = 0; /*0x10049239b*/
    *((_QWORD *)a1 + 2) = 0; /*0x1004923a3*/
    *((_QWORD *)a1 + 1) = 0; /*0x1004923ab*/
    *(_QWORD *)a1 = 11; /*0x1004923b3*/
    v20 = v112; /*0x1004923ba*/
    v21 = v111; /*0x1004923c1*/
    if ( v111 ) /*0x1004923cb*/
      goto LABEL_133; /*0x1004923cb*/
    return v3; /*0x1004923cb*/
  }
  v144 = 0; /*0x1004920fc*/
  v145 = 8; /*0x100492104*/
  v146 = 0; /*0x10049210c*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::hdcc4745326ed4935(v127, a2); /*0x10049211e*/
  v149 = a1; /*0x100492123*/
  v7 = v127[0]; /*0x100492127*/
  v8 = v127[1]; /*0x10049212e*/
  v153 = 24LL * v127[2]; /*0x100492148*/
  v128 = (__int64 *)v127[1]; /*0x10049214f*/
  v129 = (__int64 (__fastcall *)())v127[1]; /*0x100492156*/
  v130 = (_QWORD *)v127[0]; /*0x10049215d*/
  v147 = (char *)(v127[1] + 24LL * v127[2]); /*0x100492164*/
  v131 = v147; /*0x100492168*/
  v9 = v127[1]; /*0x10049216f*/
  v148 = *(_QWORD *)&v124[4]; /*0x100492175*/
  if ( !v127[2] ) /*0x100492179*/
    goto LABEL_23; /*0x100492179*/
  v139 = v127[0]; /*0x10049217f*/
  v10 = 0; /*0x100492186*/
  v154 = v127[1]; /*0x100492189*/
  while ( 1 ) /*0x1004921a6*/
  {
    v11 = *(_QWORD *)(v8 + v10); /*0x1004921a6*/
    if ( v11 == 0x8000000000000000LL ) /*0x1004921b7*/
    {
      v9 = v8 + v10 + 24; /*0x1004923d6*/
      goto LABEL_22; /*0x1004923db*/
    }
    v12 = v8; /*0x1004921bd*/
    v13 = *(_QWORD *)(v8 + v10 + 8); /*0x1004921c0*/
    v14 = *(_QWORD *)(v12 + v10 + 16); /*0x1004921c5*/
    std::sys::fs::metadata::h32fa16d3052ea535(v127, v13, v14); /*0x1004921d7*/
    v15 = v127[0]; /*0x1004921dc*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h47ac3589c64e6d2a( /*0x1004921ed*/
      v127[0],
      v127[1]);
    if ( v15 ) /*0x1004921f5*/
      goto LABEL_15; /*0x1004921f5*/
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::h3b468e57114146c7( /*0x100492208*/
      v127,
      v13,
      v14,
      a3);
    if ( LOBYTE(v127[13]) == 3 ) /*0x100492216*/
    {
      qmemcpy(v126, v127, 0x60u); /*0x100492e91*/
      qmemcpy(v149, v126, 0x60u); /*0x100492ea0*/
      goto LABEL_108; /*0x100492ea0*/
    }
    qmemcpy(v126, v127, sizeof(v126)); /*0x100492235*/
    v124[27] = HIDWORD(v127[13]); /*0x10049224b*/
    *(int *)((char *)&v124[26] + 1) = *(_DWORD *)((char *)&v127[13] + 1); /*0x10049224e*/
    qmemcpy(v124, v126, 0x68u); /*0x100492262*/
    LOBYTE(v124[26]) = v127[13]; /*0x100492265*/
    codexmate_lib::core::relay::codex_thread_visibility::read_thread_columns::h0a67f0752ba13f6c(v127, v124); /*0x100492271*/
    v16 = v127[0]; /*0x100492276*/
    if ( v127[0] != 11 ) /*0x100492281*/
      break; /*0x100492281*/
    if ( LOBYTE(v127[1]) ) /*0x10049228e*/
    {
      qmemcpy(v127, v124, 0x70u); /*0x1004922a3*/
      v17 = v146; /*0x1004922a6*/
      if ( v146 == v144 ) /*0x1004922ae*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h37ea5476d5ad6643(&v144); /*0x1004922b4*/
      qmemcpy((void *)(v145 + 112 * v17), v127, 0x70u); /*0x1004922cd*/
      v146 = v17 + 1; /*0x1004922d3*/
    }
    else
    {
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v124); /*0x1004922e7*/
    }
LABEL_15:
    if ( v11 ) /*0x1004922ef*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v11, 1); /*0x100492300*/
    v10 += 24; /*0x100492190*/
    v6 = v148; /*0x100492198*/
    v8 = v154; /*0x10049219c*/
    if ( v153 == v10 ) /*0x1004921a0*/
    {
      v9 = (__int64)v147; /*0x1004923dd*/
LABEL_22:
      v129 = (__int64 (__fastcall *)())v9; /*0x1004923e1*/
      v7 = v139; /*0x1004923e8*/
LABEL_23:
      v22 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)&v147[-v9]; /*0x1004923ef*/
      if ( v147 != (char *)v9 ) /*0x100492409*/
      {
        v23 = (unsigned __int64)&v147[-v9] / 0x18; /*0x10049240e*/
        v24 = (_QWORD *)(v9 + 8); /*0x100492412*/
        do /*0x100492427*/
        {
          v25 = *(v24 - 1); /*0x100492429*/
          if ( v25 ) /*0x100492430*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v25, 1); /*0x10049243a*/
          v24 += 3; /*0x100492420*/
          --v23; /*0x100492424*/
        }
        while ( v23 ); /*0x100492427*/
      }
      if ( v7 ) /*0x100492444*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24 * v7, 8); /*0x100492456*/
      v26 = v149; /*0x100492460*/
      if ( !v146 ) /*0x100492464*/
      {
        codexmate_lib::core::relay::codex_thread_visibility::remove_no_account_model_restore_journal::h03204f27b2590f8c( /*0x100492e46*/
          v125,
          v140,
          *((_QWORD *)&v22 + 1));
        v26[2] = 0; /*0x100492e4b*/
        v26[1] = 0; /*0x100492e53*/
        v26[3] = v6; /*0x100492e5b*/
        v26[4] = 0; /*0x100492e5f*/
        v26[5] = 0; /*0x100492e67*/
        *v26 = 11; /*0x100492e6f*/
        goto LABEL_118; /*0x100492e76*/
      }
      v122 = 0; /*0x10049246e*/
      v121 = 0; /*0x100492476*/
      v123 = 0; /*0x10049247e*/
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100492490*/
      v28 = v27; /*0x100492492*/
      if ( *(_BYTE *)(v27 + 16) == 1 ) /*0x100492499*/
      {
        v29 = *(_QWORD *)v27; /*0x10049249f*/
        v30 = *(_QWORD *)(v28 + 8); /*0x1004924a2*/
      }
      else
      {
        v29 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(0.0); /*0x100493406*/
        *(_QWORD *)v28 = v29; /*0x10049340b*/
        *(_QWORD *)(v28 + 8) = v30; /*0x10049340e*/
        *(_BYTE *)(v28 + 16) = 1; /*0x100493412*/
      }
      *(_QWORD *)v28 = v29 + 1; /*0x1004924aa*/
      v108 = 0; /*0x1004924b4*/
      v107 = 0; /*0x1004924c2*/
      v106 = 0; /*0x1004924d0*/
      v105 = (const __m128i *)&xmmword_1016F24C0; /*0x1004924de*/
      v109 = v29; /*0x1004924e5*/
      v110 = v30; /*0x1004924ec*/
      v136 = nullptr; /*0x1004924f3*/
      v137 = 8; /*0x1004924fe*/
      v138 = nullptr; /*0x100492509*/
      v31 = 9 * v6; /*0x10049251b*/
      v32 = v112; /*0x100492520*/
      v139 = (__int64)&v112[v31]; /*0x100492527*/
      v147 = nullptr; /*0x10049252e*/
      v117 = 0; /*0x100492536*/
      v119 = 0; /*0x100492541*/
      v118 = 0; /*0x10049254c*/
      v120 = 0; /*0x100492557*/
      while ( !v146 ) /*0x100492569*/
      {
LABEL_41:
        *(_QWORD *)&v122 = ++v147; /*0x10049279a*/
LABEL_42:
        v32 += 9; /*0x1004927a1*/
        if ( v32 == (_QWORD *)v139 ) /*0x1004927ac*/
        {
          v74 = v105; /*0x100493080*/
          si128 = _mm_load_si128(v105); /*0x10049308e*/
          v153 = v106; /*0x100493097*/
          if ( v106 ) /*0x10049309b*/
          {
            v76 = (8 * v106 + 23) & 0xFFFFFFFFFFFFFFF0LL; /*0x1004930a5*/
            v154 = v106 + v76 + 17; /*0x1004930ae*/
            v147 = &v105->i8[-v76]; /*0x1004930b8*/
            v148 = 16; /*0x1004930c1*/
          }
          else
          {
            v148 = 0; /*0x1004930c7*/
          }
          v77 = v108; /*0x1004930cf*/
          v78 = v105 + 1; /*0x1004930d6*/
          for ( _EAX = ~_mm_movemask_epi8(si128); v77-- != 0; _EAX = v84 ) /*0x1004930df*/
          {
            if ( !(_WORD)_EAX ) /*0x1004930f9*/
            {
              do /*0x100493116*/
              {
                v81 = _mm_movemask_epi8(_mm_load_si128(v78)); /*0x100493105*/
                v74 -= 8; /*0x100493109*/
                ++v78; /*0x10049310d*/
              }
              while ( v81 == 0xFFFF ); /*0x100493116*/
              _EAX = ~v81; /*0x100493118*/
            }
            __asm { tzcnt ecx, eax } /*0x10049311a*/
            v83 = *(unsigned __int64 *)((char *)&v74->u64[-1] - (unsigned int)(8 * _ECX)); /*0x100493127*/
            if ( v83 >= v146 ) /*0x100493132*/
              core::panicking::panic_bounds_check::h56740b1198b22635(v83, v146, &off_101AA8AD8); /*0x100493773*/
            v84 = _EAX & (_EAX - 1); /*0x10049313c*/
            *(double *)si128.i64 = codexmate_lib::core::relay::codex_thread_visibility::checkpoint_after_committed_write::hf9b6fe30fba84627( /*0x10049314f*/
                                     v145 + 112 * v83,
                                     "no-account model restoreFollow the user's instructions carefully. Respond helpfully and use tools when appropriate.task metadata changed after instruction preparation; retry required",
                                     24);
          }
          if ( v153 && v154 ) /*0x100493167*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, v154, v148); /*0x100493171*/
          v85 = v138; /*0x100493176*/
          if ( v138 ) /*0x100493180*/
          {
            v128 = v136; /*0x10049319a*/
            v129 = (__int64 (__fastcall *)())v137; /*0x1004931a1*/
            v130 = v138; /*0x1004931af*/
            LODWORD(v131) = v114; /*0x1004931b6*/
            codexmate_lib::core::relay::codex_thread_visibility::write_no_account_model_restore_journal::hffc5892f424dc9b2( /*0x1004931d8*/
              v124,
              v125,
              v140,
              (__int64)&v128);
            if ( v124[0] != 11 ) /*0x1004931e4*/
            {
              qmemcpy(v127, v124, 0x60u); /*0x100493200*/
              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100493211*/
              {
                v115 = v127; /*0x100493213*/
                v116 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x100493221*/
                v126[0] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10049322f*/
                v126[1] = 51; /*0x100493236*/
                v126[2] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100493241*/
                v126[3] = 51; /*0x100493248*/
                v126[4] = &off_101AA8AC0; /*0x10049325a*/
                log::__private_api::log::hf5bade4875454669(&unk_1018F81D6, &v115, 2, v126); /*0x10049327b*/
              }
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v127); /*0x100493287*/
            }
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..NoAccountModelRestoreJournal$GT$::h4bb8da94b46f425a( /*0x100493293*/
              &v128,
              *(double *)si128.i64);
          }
          else
          {
            codexmate_lib::core::relay::codex_thread_visibility::remove_no_account_model_restore_journal::h03204f27b2590f8c( /*0x1004932a8*/
              v125,
              v140,
              v30);
          }
          v127[0] = &v121; /*0x1004932d0*/
          v127[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004932de*/
          v127[2] = (char *)&v121 + 8; /*0x1004932e5*/
          v127[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004932ec*/
          v127[4] = &v122; /*0x1004932f3*/
          v127[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004932fa*/
          v127[6] = (char *)&v122 + 8; /*0x100493301*/
          v127[7] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100493308*/
          v127[8] = &v123; /*0x10049330f*/
          v127[9] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100493316*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v97, &unk_1018F50B4, v127); /*0x100493332*/
          v86 = codexmate_lib::platform::debug_log::app_event::h5d690f20bb61e31b( /*0x100493356*/
                  (__int64)"relay_no_account_model_restoreno-account model restoreFollow the user's instructions carefully. Respond helpfully and use tools when appropriate.task metadata changed after instruction preparation; retry required",
                  30,
                  (__int64)"donetextNoneSome",
                  4,
                  v97);
          v87 = v149; /*0x100493362*/
          *((_QWORD *)v149 + 5) = v123; /*0x100493366*/
          *(_OWORD *)(v87 + 24) = v122; /*0x10049337c*/
          *(_OWORD *)(v87 + 8) = v121; /*0x100493392*/
          *(_QWORD *)v87 = 11; /*0x100493396*/
          if ( !v85 ) /*0x1004933a0*/
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..NoAccountModelRestoreEntry$GT$$GT$::h7c1a99d944d173a1( /*0x1004933a9*/
              &v136,
              v86);
          v88 = v145; /*0x1004933ae*/
          v89 = v146 + 1; /*0x1004933b6*/
          v90 = v145; /*0x1004933b9*/
          while ( v89 != 1 ) /*0x1004933c4*/
          {
            --v89; /*0x1004933ca*/
            core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v86); /*0x1004933cd*/
            v90 += 112; /*0x1004933d2*/
          }
          if ( v144 ) /*0x1004933de*/
            v86 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, 112 * v144, 8); /*0x1004933ec*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..NoAccountModelRestoreJournal$GT$::h4bb8da94b46f425a( /*0x1004933f8*/
            &v111,
            v86);
          return v149; /*0x100493401*/
        }
      }
      v33 = v145; /*0x10049256f*/
      v154 = -112LL * v146; /*0x100492577*/
      v34 = 0; /*0x10049257b*/
      v35 = 0; /*0x10049257e*/
      v153 = (__int64)v32; /*0x100492580*/
      while ( 2 ) /*0x100492590*/
      {
        v36 = v32; /*0x100492590*/
        v37 = v32[1]; /*0x100492593*/
        v38 = v36[2]; /*0x100492597*/
        rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x1004925b1*/
          v124,
          v33,
          "SELECT model, model_provider, COALESCE(rollout_path, ''), COALESCE(source, '') FROM threads WHERE id = ?1 AND "
          "COALESCE(archived, 0) = 0UPDATE threads SET model = ?2 WHERE id = ?1no-account-model-restorerelay_no_account_m"
          "odel_restoreno-account model restoreFollow the user's instructions carefully. Respond helpfully and use tools "
          "when appropriate.task metadata changed after instruction preparation; retry required",
          135);
        v126[0] = *(_QWORD *)&v124[2]; /*0x1004925ca*/
        v126[1] = *(_QWORD *)&v124[4]; /*0x1004925d1*/
        v126[2] = *(_QWORD *)&v124[6]; /*0x1004925dc*/
        v126[3] = *(_QWORD *)&v124[8]; /*0x1004925e7*/
        v126[4] = *(_QWORD *)&v124[10]; /*0x1004925f2*/
        v126[5] = *(_QWORD *)&v124[12]; /*0x1004925fd*/
        v126[6] = *(_QWORD *)&v124[14]; /*0x100492608*/
        v126[7] = *(_QWORD *)&v124[16]; /*0x100492613*/
        if ( v124[0] == 1 ) /*0x10049261d*/
        {
          v127[8] = v126[7]; /*0x100492631*/
          v127[7] = v126[6]; /*0x10049263c*/
          v127[6] = v126[5]; /*0x100492647*/
          v127[5] = v126[4]; /*0x100492652*/
          v127[4] = v126[3]; /*0x10049265d*/
          v127[3] = v126[2]; /*0x100492668*/
          v127[2] = v126[1]; /*0x10049267a*/
          v127[1] = v126[0]; /*0x10049267e*/
          v127[0] = 0x8000000000000000LL; /*0x10049268b*/
LABEL_39:
          if ( v127[1] != 0x8000000000000009LL ) /*0x100492764*/
          {
            *(_QWORD *)&v124[14] = v127[8]; /*0x100492c70*/
            *(_QWORD *)&v124[12] = v127[7]; /*0x100492c7b*/
            *(_QWORD *)&v124[10] = v127[6]; /*0x100492c86*/
            *(_QWORD *)&v124[8] = v127[5]; /*0x100492c91*/
            *(_QWORD *)&v124[6] = v127[4]; /*0x100492c9c*/
            *(_QWORD *)&v124[4] = v127[3]; /*0x100492ca7*/
            *(_QWORD *)&v124[2] = v127[2]; /*0x100492cb5*/
            *(_QWORD *)v124 = v127[1]; /*0x100492cbc*/
            v126[0] = v153; /*0x100492cc7*/
            v126[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100492cd5*/
            v126[2] = v124; /*0x100492ce3*/
            v126[3] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100492cf1*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v101, &unk_1018F81A7, v126); /*0x100492d0d*/
            v49 = v149; /*0x100492d19*/
            *((_QWORD *)v149 + 3) = v101[2]; /*0x100492d1d*/
            v50 = v101[0]; /*0x100492d21*/
            v49[2] = v101[1]; /*0x100492d2f*/
            v49[1] = v50; /*0x100492d33*/
            *v49 = 10; /*0x100492d37*/
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v124); /*0x100492d45*/
            v6 = v148; /*0x100492d4a*/
            goto LABEL_90; /*0x100492d4a*/
          }
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v127[1]); /*0x100492771*/
          v33 += 112; /*0x100492776*/
          v34 -= 112; /*0x10049277a*/
          ++v35; /*0x10049277e*/
          v32 = (_QWORD *)v153; /*0x100492785*/
          if ( v154 == v34 ) /*0x100492789*/
            goto LABEL_41; /*0x100492789*/
          continue; /*0x100492789*/
        }
        break;
      }
      v135 = v126[7]; /*0x1004926a7*/
      v134 = v126[6]; /*0x1004926b5*/
      v133 = v126[5]; /*0x1004926c3*/
      v132 = v126[4]; /*0x1004926d1*/
      v131 = (char *)v126[3]; /*0x1004926df*/
      v130 = (_QWORD *)v126[2]; /*0x1004926ed*/
      v129 = (__int64 (__fastcall *)())v126[1]; /*0x100492702*/
      v128 = (__int64 *)v126[0]; /*0x100492709*/
      *(_QWORD *)v124 = v37; /*0x100492710*/
      *(_QWORD *)&v124[2] = v38; /*0x100492717*/
      rusqlite::statement::Statement::query_row::hdb6778749da0898a(v127, &v128, v124); /*0x100492736*/
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(&v128); /*0x10049273e*/
      if ( v127[0] == 0x8000000000000000LL ) /*0x100492757*/
        goto LABEL_39; /*0x100492757*/
      v150 = v127[0]; /*0x1004927b7*/
      v154 = v127[1]; /*0x1004927c2*/
      v152 = v127[3]; /*0x1004927cd*/
      *(_QWORD *)v142 = v127[4]; /*0x1004927d8*/
      v39 = v127[6]; /*0x1004927df*/
      __s1 = (void *)v127[7]; /*0x1004927ed*/
      v151 = v127[9]; /*0x1004927fb*/
      __s2 = (void *)v127[10]; /*0x100492806*/
      if ( v127[2] != 6 /*0x100492898*/
        || (v30 = 1634560353,
            (*(_DWORD *)v154 ^ 0x616D6961 | *(unsigned __int16 *)(v154 + 4) ^ 0x3169) != 0
         || v127[6] == 0x8000000000000000LL)
        || (v30 = v127[8], v127[8] != *(_QWORD *)(v153 + 40))
        || (*(_QWORD *)v104 = v127[5], memcmp(__s1, *(const void **)(v153 + 32), v127[8]))
        || (v40 = &anon_19faa30eef2c8845dad92cc05fa4a600_335,
            (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                               (void *)&anon_19faa30eef2c8845dad92cc05fa4a600_335,
                               0xAu,
                               __s2)) )
      {
        *((_QWORD *)&v121 + 1) = ++v117; /*0x1004928b6*/
        v41 = v39; /*0x1004928bd*/
        v42 = v152; /*0x1004928c0*/
        v32 = (_QWORD *)v153; /*0x1004928c4*/
        goto LABEL_50; /*0x1004928c4*/
      }
      if ( !*(_QWORD *)v104 ) /*0x100492946*/
      {
        v102[0] = 0x8000000000000000LL; /*0x100492956*/
        goto LABEL_66; /*0x10049295d*/
      }
      if ( *(_QWORD *)(v153 + 48) == 0x8000000000000000LL ) /*0x100492950*/
      {
        v45 = nullptr; /*0x100492952*/
      }
      else
      {
        v45 = *(void **)(v153 + 56); /*0x10049295f*/
        v40 = *(const size_t **)(v153 + 64); /*0x100492963*/
      }
      codexmate_lib::core::relay::codex_thread_visibility::patch_no_account_model_restore_rollout::h2cdcc6269843cf42( /*0x100492993*/
        (int)v124,
        v142[0],
        v104[0],
        *(_QWORD *)(v153 + 8),
        *(_QWORD *)(v153 + 16),
        *(_QWORD *)(v153 + 32),
        *(_QWORD *)(v153 + 40),
        v45,
        (size_t)v40);
      if ( *(_QWORD *)v124 == 11 ) /*0x1004929a3*/
      {
        qmemcpy(v102, &v124[2], sizeof(v102)); /*0x1004929bc*/
LABEL_66:
        if ( v35 >= v146 ) /*0x1004929c6*/
          core::panicking::panic_bounds_check::h56740b1198b22635(v35, v146, &off_101AA8A50); /*0x100493784*/
        v103 = v153; /*0x1004929d7*/
        if ( *(_QWORD *)(v153 + 48) == 0x8000000000000000LL ) /*0x1004929e2*/
        {
          v46 = nullptr; /*0x1004929e4*/
        }
        else
        {
          v46 = *(_QWORD **)(v153 + 56); /*0x1004929e8*/
          v116 = *(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, __int64, __int64, __int64))(v153 + 64); /*0x1004929f0*/
        }
        v115 = v46; /*0x1004929f7*/
        v128 = &v103; /*0x100492a05*/
        v129 = (__int64 (__fastcall *)())&unk_101AA8A68; /*0x100492a13*/
        v130 = &v115; /*0x100492a21*/
        v131 = (char *)&unk_101AA8A88; /*0x100492a2f*/
        rusqlite::Connection::execute::h46e369c3bf91ce92( /*0x100492a56*/
          v124,
          v145 - v34,
          "UPDATE threads SET model = ?2 WHERE id = ?1no-account-model-restorerelay_no_account_model_restoreno-account model restoreFollow the user's instructions carefully. Respond helpfully and use tools when appropriate.task metadata changed after instruction preparation; retry required",
          43,
          &v128,
          2);
        if ( *(_QWORD *)v124 == 0x8000000000000016LL ) /*0x100492a66*/
        {
          if ( *(_QWORD *)&v124[2] == 1 ) /*0x100492a77*/
          {
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h39f7c27424a234f7(&v105, v35); /*0x100492a87*/
            *(_QWORD *)&v121 = ++v118; /*0x100492a9d*/
            if ( v102[0] != 0x8000000000000000LL ) /*0x100492aab*/
            {
              *((_QWORD *)&v122 + 1) = ++v119; /*0x100492abe*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedRolloutPatch$GT$::ha0941f5a73467f26(v102); /*0x100492acc*/
            }
            v47 = v152; /*0x100492ad1*/
            v32 = (_QWORD *)v153; /*0x100492ad5*/
            if ( v151 ) /*0x100492ae0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v151, 1); /*0x100492aee*/
            if ( v47 ) /*0x100492af6*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v142, v47, 1); /*0x100492b07*/
            if ( v150 ) /*0x100492b13*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, v150, 1); /*0x100492b1e*/
            if ( v39 ) /*0x100492b26*/
            {
              v43 = __s1; /*0x100492b31*/
              v44 = v39; /*0x100492b38*/
              goto LABEL_58; /*0x100492b3b*/
            }
            goto LABEL_42; /*0x100492b26*/
          }
          v126[0] = *(_QWORD *)&v124[2]; /*0x10049353f*/
          if ( v102[0] != 0x8000000000000000LL ) /*0x100493554*/
          {
            codexmate_lib::core::relay::codex_thread_visibility::revert_rollout_patch::h23a987343ea15390(v102); /*0x10049355d*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedRolloutPatch$GT$::ha0941f5a73467f26(v102); /*0x100493569*/
          }
          v127[0] = v153; /*0x100493572*/
          v127[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100493580*/
          v127[2] = v126; /*0x10049358e*/
          v127[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10049359c*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v99, &unk_1018F80BF, v127); /*0x1004935b8*/
          v93 = v149; /*0x1004935c4*/
          *((_QWORD *)v149 + 3) = v99[2]; /*0x1004935c8*/
          v94 = v99[0]; /*0x1004935cc*/
          v93[2] = v99[1]; /*0x1004935da*/
          v93[1] = v94; /*0x1004935de*/
          *v93 = 10; /*0x1004935e2*/
        }
        else
        {
          v127[7] = *(_QWORD *)&v124[14]; /*0x100493422*/
          v127[6] = *(_QWORD *)&v124[12]; /*0x100493430*/
          v127[5] = *(_QWORD *)&v124[10]; /*0x10049343e*/
          v127[4] = *(_QWORD *)&v124[8]; /*0x10049344c*/
          v127[3] = *(_QWORD *)&v124[6]; /*0x10049345a*/
          v127[2] = *(_QWORD *)&v124[4]; /*0x100493468*/
          v127[1] = *(_QWORD *)&v124[2]; /*0x10049347d*/
          v127[0] = *(_QWORD *)v124; /*0x100493484*/
          if ( v102[0] != 0x8000000000000000LL ) /*0x100493499*/
          {
            codexmate_lib::core::relay::codex_thread_visibility::revert_rollout_patch::h23a987343ea15390(v102); /*0x1004934a2*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedRolloutPatch$GT$::ha0941f5a73467f26(v102); /*0x1004934ae*/
          }
          v126[0] = v153; /*0x1004934b7*/
          v126[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004934c5*/
          v126[2] = v127; /*0x1004934d3*/
          v126[3] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1004934e1*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_1018F80EB, v126); /*0x1004934fd*/
          v91 = v149; /*0x100493509*/
          *((_QWORD *)v149 + 3) = v98[2]; /*0x10049350d*/
          v92 = v98[0]; /*0x100493511*/
          v91[2] = v98[1]; /*0x10049351f*/
          v91[1] = v92; /*0x100493523*/
          *v91 = 10; /*0x100493527*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v127); /*0x100493535*/
        }
        if ( v151 ) /*0x1004935ee*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v151, 1); /*0x100493600*/
        if ( v152 ) /*0x10049360a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v142, v152, 1); /*0x10049361c*/
        if ( v150 ) /*0x100493626*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, v150, 1); /*0x100493635*/
        if ( v39 ) /*0x10049363d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v39, 1); /*0x10049364e*/
        v6 = v148; /*0x100493653*/
      }
      else
      {
        v48 = *(_QWORD *)v124 - 2LL; /*0x100492b40*/
        if ( *(_QWORD *)v124 < 2u ) /*0x100492b49*/
          v48 = 2; /*0x100492b49*/
        if ( v48 == 1 || v48 == 7 ) /*0x100492b57*/
        {
          qmemcpy(v127, v124, 0x60u); /*0x100492b70*/
          v123 = ++v120; /*0x100492b84*/
          v32 = (_QWORD *)v153; /*0x100492b95*/
          v41 = v39; /*0x100492b9c*/
          v42 = v152; /*0x100492b9f*/
          _$LT$codexmate_lib..core..relay..codex_thread_visibility..NoAccountModelRestoreEntry$u20$as$u20$core..clone..Clone$GT$::clone::hf84952169e4fc500( /*0x100492ba3*/
            v126,
            v153);
          alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h8379f8831d4bf084(&v136, v126); /*0x100492bb2*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100492bc5*/
          {
            v128 = v32; /*0x100492bcb*/
            v129 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100492bd9*/
            v130 = v127; /*0x100492be7*/
            v131 = (char *)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x100492bf5*/
            v126[0] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100492c03*/
            v126[1] = 51; /*0x100492c0a*/
            v126[2] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100492c15*/
            v126[3] = 51; /*0x100492c1c*/
            v126[4] = &off_101AA8AA8; /*0x100492c2e*/
            log::__private_api::log::hf5bade4875454669(&unk_1018F8149, &v128, 2, v126); /*0x100492c4f*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v127); /*0x100492c5b*/
LABEL_50:
          if ( v151 ) /*0x1004928cf*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v151, 1); /*0x1004928dd*/
          if ( v42 ) /*0x1004928e5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v142, v42, 1); /*0x1004928f6*/
          if ( v150 ) /*0x100492902*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, v150, 1); /*0x10049290d*/
          if ( 2 * v41 ) /*0x100492912*/
          {
            v43 = __s1; /*0x100492928*/
            v44 = v41; /*0x10049292f*/
LABEL_58:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v44, 1); /*0x100492932*/
            goto LABEL_42; /*0x100492937*/
          }
          goto LABEL_42; /*0x10049291d*/
        }
        qmemcpy(v127, v124, 0x60u); /*0x100493672*/
        v126[0] = v153; /*0x100493679*/
        v126[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100493687*/
        v126[2] = v127; /*0x10049368e*/
        v126[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x10049369c*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v100, &unk_1018F8117, v126); /*0x1004936b8*/
        v95 = v149; /*0x1004936c4*/
        *((_QWORD *)v149 + 3) = v100[2]; /*0x1004936c8*/
        v96 = v100[0]; /*0x1004936cc*/
        v95[2] = v100[1]; /*0x1004936da*/
        v95[1] = v96; /*0x1004936de*/
        *v95 = 10; /*0x1004936e2*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v127); /*0x1004936f0*/
        if ( v151 ) /*0x1004936fa*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v151, 1); /*0x10049370c*/
        if ( v152 ) /*0x100493716*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v142, v152, 1); /*0x100493728*/
        if ( v150 ) /*0x100493732*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, v150, 1); /*0x100493741*/
        v6 = v148; /*0x100493749*/
        if ( v39 ) /*0x10049374d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v39, 1); /*0x100493762*/
      }
LABEL_90:
      v51 = v138; /*0x100492d4e*/
      if ( v138 ) /*0x100492d58*/
      {
        v52 = (_QWORD *)(v137 + 56); /*0x100492d61*/
        while ( 1 ) /*0x100492d79*/
        {
          v53 = *(v52 - 7); /*0x100492d79*/
          if ( v53 ) /*0x100492d80*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v52 - 6), v53, 1); /*0x100492d8b*/
          v54 = *(v52 - 1); /*0x100492d90*/
          if ( !(2 * v54) ) /*0x100492d94*/
            break; /*0x100492d94*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v52, v54, 1); /*0x100492db8*/
          v55 = *(v52 - 4); /*0x100492dbd*/
          if ( v55 ) /*0x100492dc4*/
            goto LABEL_99; /*0x100492dc4*/
LABEL_92:
          v52 += 9; /*0x100492d70*/
          v51 = (_QWORD *)((char *)v51 - 1); /*0x100492d74*/
          if ( !v51 ) /*0x100492d77*/
            goto LABEL_100; /*0x100492d77*/
        }
        v55 = *(v52 - 4); /*0x100492da1*/
        if ( !v55 ) /*0x100492da8*/
          goto LABEL_92; /*0x100492da8*/
LABEL_99:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v52 - 3), v55, 1); /*0x100492dc6*/
        goto LABEL_92; /*0x100492dd4*/
      }
LABEL_100:
      if ( v136 ) /*0x100492de0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, 72LL * (_QWORD)v136, 8); /*0x100492df6*/
      if ( v106 ) /*0x100492e05*/
      {
        v56 = (8 * v106 + 23) & 0xFFFFFFFFFFFFFFF0LL; /*0x100492e13*/
        v57 = v56 + v106 + 17; /*0x100492e1a*/
        if ( v56 + v106 != -17 ) /*0x100492e1e*/
        {
          v58 = &v105->i8[-v56]; /*0x100492e2b*/
          v59 = 16; /*0x100492e2e*/
LABEL_117:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, v59); /*0x100492f8d*/
          goto LABEL_118; /*0x100492f8d*/
        }
      }
      goto LABEL_118; /*0x100492e1e*/
    }
  }
  v129 = (__int64 (__fastcall *)())(v154 + v10 + 24); /*0x100492eae*/
  LOBYTE(v140) = v127[1]; /*0x100492ebc*/
  v60 = v149; /*0x100492ec9*/
  memcpy(v149 + 9, (char *)&v127[1] + 1, 0x57u); /*0x100492ed6*/
  *(_QWORD *)v60 = v16; /*0x100492edb*/
  v60[8] = v140; /*0x100492ee6*/
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v124); /*0x100492ef1*/
LABEL_108:
  v61 = v153 - 24; /*0x100492ef6*/
  v6 = v148; /*0x100492f01*/
  if ( v11 ) /*0x100492f05*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v11, 1); /*0x100492f12*/
  v62 = (__int8 *)v154; /*0x100492f1a*/
  if ( v61 != v10 ) /*0x100492f1e*/
  {
    v63 = v153 - v10 - 24; /*0x100492f27*/
    v64 = (_QWORD *)(v154 + v10 + 32); /*0x100492f2b*/
    v65 = v63 / 0x18; /*0x100492f40*/
    do /*0x100492f57*/
    {
      v66 = *(v64 - 1); /*0x100492f59*/
      if ( v66 ) /*0x100492f60*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v64, v66, 1); /*0x100492f6a*/
      v64 += 3; /*0x100492f50*/
      --v65; /*0x100492f54*/
    }
    while ( v65 ); /*0x100492f57*/
  }
  if ( v139 ) /*0x100492f7b*/
  {
    v57 = 24 * v139; /*0x100492f81*/
    v59 = 8; /*0x100492f85*/
    v58 = v62; /*0x100492f8a*/
    goto LABEL_117; /*0x100492f8a*/
  }
LABEL_118:
  v67 = v145; /*0x100492f92*/
  for ( i = v146 + 1; i != 1; --i ) /*0x100492f9a*/
  {
    ((void (*)(void))core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d)(); /*0x100492fad*/
    v67 += 112; /*0x100492fb2*/
  }
  if ( v144 ) /*0x100492fbe*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, 112 * v144, 8); /*0x100492fcd*/
  v20 = v112; /*0x100492fd2*/
  v69 = v112 + 7; /*0x100492fd9*/
  while ( 2 ) /*0x100492fe9*/
  {
    v70 = *(v69 - 7); /*0x100492fe9*/
    if ( v70 ) /*0x100492ff0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v69 - 6), v70, 1); /*0x100492ffb*/
    v71 = *(v69 - 1); /*0x100493000*/
    if ( 2 * v71 ) /*0x100493004*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v69, v71, 1); /*0x100493028*/
      v72 = *(v69 - 4); /*0x10049302d*/
      if ( !v72 ) /*0x100493034*/
        goto LABEL_124; /*0x100493034*/
      goto LABEL_131; /*0x100493034*/
    }
    v72 = *(v69 - 4); /*0x100493011*/
    if ( v72 ) /*0x100493018*/
LABEL_131:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v69 - 3), v72, 1); /*0x100493036*/
LABEL_124:
    v69 += 9; /*0x100492fe0*/
    if ( --v6 ) /*0x100492fe7*/
      continue; /*0x100492fe7*/
    break;
  }
  v3 = v149; /*0x100493046*/
  v21 = v111; /*0x10049304a*/
  if ( v111 ) /*0x100493054*/
LABEL_133:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 72 * v21, 8); /*0x100493056*/
  return v3; /*0x10049306e*/
}
