// mac 1.1.8 delete_sessions node va=0x1001ba610 depth=0
// delete_sessions_owner
_QWORD *__fastcall codexmate_lib::core::sessions::delete_sessions::h71274b4f5f91b826(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // r15
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rsi
  char *v21; // rbx
  const __m128i *v22; // r13
  const __m128i *v23; // r12
  __int64 v25; // rax
  void *v26; // r14
  int v27; // r15d
  void *v29; // rbx
  const void *v30; // rsi
  __int64 v31; // r14
  const __m128i *v32; // r14
  const __m128i *v33; // r15
  __int64 v35; // r13
  size_t v36; // rcx
  unsigned __int64 v37; // r12
  __m128i v38; // xmm2
  unsigned __int64 v40; // r13
  __m128i v41; // xmm1
  __int64 i; // rcx
  unsigned __int64 v43; // r12
  void *v44; // rbx
  size_t v45; // r12
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 v48; // r13
  __int64 v49; // rsi
  signed __int64 v50; // rbx
  const void *v51; // r12
  __int64 v52; // rax
  size_t v53; // r13
  __int64 v55; // rax
  void *v56; // rsi
  size_t v57; // rbx
  int v58; // eax
  void *v59; // rbx
  size_t v60; // r14
  __int64 v61; // r14
  __int64 v62; // rbx
  __int64 v63; // r12
  __int64 v64; // rsi
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rdi
  void *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r12
  __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // r12
  __int64 v75; // rax
  char v76; // bl
  size_t v77; // rdx
  unsigned __int64 v78; // rax
  const __m128i *v80; // rdx
  __int64 v81; // rsi
  __m128i v82; // xmm1
  const __m128i *v83; // rdi
  __int64 j; // r8
  unsigned __int64 v85; // rax
  __m128i v86; // xmm2
  const __m128i *v88; // rax
  int v89; // eax
  size_t v90; // r15
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // r14
  __int64 v97; // r12
  size_t v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // rbx
  _QWORD *v101; // rbx
  _QWORD *v102; // rbx
  __int64 v104; // r14
  __int64 v105; // rbx
  const __m128i *v106; // r15
  const __m128i *v108; // r12
  int v109; // r13d
  __int64 v110; // rax
  __int64 v111; // rsi
  unsigned __int64 v112; // rax
  __int64 v113; // r14
  __int64 v114; // r14
  __int64 v116; // rbx
  const __m128i *v117; // r15
  const __m128i *v119; // r12
  int v120; // r13d
  __int8 *v121; // r14
  __int64 v122; // rsi
  __int64 v123; // rsi
  __int64 v124; // rbx
  __int64 v125; // r14
  __int64 v126; // rbx
  const __m128i *v127; // r15
  const __m128i *v129; // r12
  int v130; // r13d
  __int64 v131; // rax
  __int64 v132; // rsi
  unsigned __int64 v133; // rax
  __int64 v134; // r14
  __int64 v135; // r14
  __int64 v137; // rbx
  const __m128i *v138; // r15
  const __m128i *v140; // r12
  int v141; // r13d
  __int8 *v142; // r14
  __int64 v143; // rsi
  __int64 v144; // rsi
  size_t v145; // rax
  __int64 v147; // rdi
  _QWORD v148[3]; // [rsp+0h] [rbp-360h] BYREF
  __int64 v149; // [rsp+18h] [rbp-348h]
  __m128i v150; // [rsp+20h] [rbp-340h] BYREF
  __m128i v151; // [rsp+30h] [rbp-330h] BYREF
  __m128i v152; // [rsp+40h] [rbp-320h] BYREF
  const __m128i *v153; // [rsp+58h] [rbp-308h] BYREF
  void *v154; // [rsp+60h] [rbp-300h]
  __int64 v155; // [rsp+70h] [rbp-2F0h]
  char v156[16]; // [rsp+78h] [rbp-2E8h] BYREF
  _QWORD v157[13]; // [rsp+88h] [rbp-2D8h] BYREF
  char v158; // [rsp+F0h] [rbp-270h]
  _BYTE v159[7]; // [rsp+F1h] [rbp-26Fh]
  _QWORD v160[13]; // [rsp+F8h] [rbp-268h] BYREF
  __int64 *v161; // [rsp+160h] [rbp-200h] BYREF
  void *v162; // [rsp+168h] [rbp-1F8h]
  __int64 v163; // [rsp+170h] [rbp-1F0h]
  size_t v164; // [rsp+178h] [rbp-1E8h]
  size_t v165; // [rsp+180h] [rbp-1E0h] BYREF
  __int64 v166; // [rsp+188h] [rbp-1D8h]
  size_t v167; // [rsp+190h] [rbp-1D0h]
  __int64 v168; // [rsp+198h] [rbp-1C8h]
  __int64 v169; // [rsp+1A0h] [rbp-1C0h]
  __int64 v170; // [rsp+1A8h] [rbp-1B8h]
  __int64 v171; // [rsp+1B0h] [rbp-1B0h]
  __int64 v172; // [rsp+1B8h] [rbp-1A8h]
  const __m128i *v173; // [rsp+1C0h] [rbp-1A0h] BYREF
  __int64 v174; // [rsp+1C8h] [rbp-198h]
  __int64 v175; // [rsp+1D0h] [rbp-190h]
  __int64 v176; // [rsp+1D8h] [rbp-188h]
  __int64 v177; // [rsp+1E0h] [rbp-180h]
  __int64 v178; // [rsp+1E8h] [rbp-178h]
  const __m128i *v179; // [rsp+1F0h] [rbp-170h]
  __int64 v180; // [rsp+1F8h] [rbp-168h]
  __int64 v181; // [rsp+200h] [rbp-160h]
  char *v182; // [rsp+208h] [rbp-158h]
  _QWORD v183[2]; // [rsp+210h] [rbp-150h] BYREF
  __int64 v184; // [rsp+220h] [rbp-140h] BYREF
  __int8 *v185; // [rsp+228h] [rbp-138h]
  const __m128i *v186; // [rsp+230h] [rbp-130h]
  __int64 v187; // [rsp+238h] [rbp-128h]
  _QWORD v188[13]; // [rsp+240h] [rbp-120h] BYREF
  char v189; // [rsp+2A8h] [rbp-B8h]
  _DWORD v190[11]; // [rsp+2A9h] [rbp-B7h]
  size_t v191; // [rsp+2D8h] [rbp-88h]
  void *__s1; // [rsp+2E0h] [rbp-80h]
  size_t v193; // [rsp+2E8h] [rbp-78h]
  void *__src; // [rsp+2F0h] [rbp-70h]
  __int64 v195; // [rsp+2F8h] [rbp-68h]
  __int64 v196; // [rsp+300h] [rbp-60h] BYREF
  __int64 v197; // [rsp+308h] [rbp-58h]
  __int64 v198; // [rsp+310h] [rbp-50h]
  void *v199; // [rsp+318h] [rbp-48h]
  _QWORD *v200; // [rsp+320h] [rbp-40h]
  _QWORD *v201; // [rsp+328h] [rbp-38h]
  size_t __n; // [rsp+330h] [rbp-30h]

  v163 = a3; /*0x1001ba624*/
  v201 = a2; /*0x1001ba62b*/
  v4 = a1; /*0x1001ba62f*/
  if ( !a4 ) /*0x1001ba635*/
  {
    a1[1] = 0; /*0x1001ba849*/
    a1[2] = 8; /*0x1001ba851*/
    a1[3] = 0; /*0x1001ba859*/
    *a1 = 10; /*0x1001ba861*/
    return v4; /*0x1001ba868*/
  }
  v5 = a4; /*0x1001ba63b*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1001ba645*/
  v7 = v6; /*0x1001ba647*/
  v8 = *(_BYTE *)(v6 + 16) == 1; /*0x1001ba64a*/
  v200 = a1; /*0x1001ba64e*/
  if ( v8 ) /*0x1001ba652*/
  {
    v9 = *(_QWORD *)v6; /*0x1001ba658*/
    v10 = *(_QWORD *)(v7 + 8); /*0x1001ba65b*/
  }
  else
  {
    v9 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1001bba74*/
    *(_QWORD *)v7 = v9; /*0x1001bba79*/
    *(_QWORD *)(v7 + 8) = v10; /*0x1001bba7c*/
    *(_BYTE *)(v7 + 16) = 1; /*0x1001bba80*/
  }
  *(_QWORD *)v7 = v9 + 1; /*0x1001ba663*/
  memset(&v188[1], 0, 24); /*0x1001ba689*/
  v188[0] = anon_0bcfb5f5de49270c5675714f036928d0_3; /*0x1001ba697*/
  v188[4] = v9; /*0x1001ba6a5*/
  v188[5] = v10; /*0x1001ba6ac*/
  hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(v188, v5, &v188[4], 1); /*0x1001ba6c8*/
  v149 = v163 + 24 * v5; /*0x1001ba6dc*/
  v11 = (_QWORD *)(v163 + 16); /*0x1001ba6e3*/
  do /*0x1001ba706*/
  {
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h919a34fee2aa172f(v188, *(v11 - 1), *v11); /*0x1001ba6fa*/
    v11 += 3; /*0x1001ba6ff*/
    --v5; /*0x1001ba703*/
  }
  while ( v5 ); /*0x1001ba706*/
  v183[1] = v188[5]; /*0x1001ba70f*/
  v183[0] = v188[4]; /*0x1001ba71d*/
  v182 = (char *)v188[3]; /*0x1001ba72b*/
  v181 = v188[2]; /*0x1001ba739*/
  v180 = v188[1]; /*0x1001ba74e*/
  v179 = (const __m128i *)v188[0]; /*0x1001ba755*/
  codexmate_lib::core::sessions::build_rollout_index::h43b5af1068d7271f(&v153, v201); /*0x1001ba767*/
  if ( *(_BYTE *)(v7 + 16) == 1 ) /*0x1001ba771*/
  {
    v12 = *(_QWORD *)v7; /*0x1001ba777*/
    v13 = *(_QWORD *)(v7 + 8); /*0x1001ba77a*/
  }
  else
  {
    v12 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1001bba8a*/
    *(_QWORD *)v7 = v12; /*0x1001bba8f*/
    *(_QWORD *)(v7 + 8) = v13; /*0x1001bba92*/
    *(_BYTE *)(v7 + 16) = 1; /*0x1001bba96*/
  }
  *(_QWORD *)v7 = v12 + 1; /*0x1001ba782*/
  v176 = 0; /*0x1001ba78c*/
  v175 = 0; /*0x1001ba79a*/
  v174 = 0; /*0x1001ba7a8*/
  v173 = (const __m128i *)anon_0bcfb5f5de49270c5675714f036928d0_3; /*0x1001ba7af*/
  v177 = v12; /*0x1001ba7b6*/
  v178 = v13; /*0x1001ba7bd*/
  v14 = v201[13]; /*0x1001ba7c8*/
  v15 = v201[14]; /*0x1001ba7cc*/
  std::sys::fs::metadata::h32fa16d3052ea535(v188, v14, v15); /*0x1001ba7dd*/
  v4 = v200; /*0x1001ba7e2*/
  if ( LOBYTE(v188[0]) )
  {
    if ( (v188[1] & 3) == 1 ) /*0x1001ba7fe*/
    {
      v16 = v188[1] - 1LL; /*0x1001ba804*/
      v17 = *(_QWORD *)(v188[1] - 1LL); /*0x1001ba808*/
      v18 = *(_QWORD *)(v188[1] + 7LL); /*0x1001ba80c*/
      if ( *(_QWORD *)v18 ) /*0x1001ba810*/
        (*(void (__fastcall **)(__int64))v18)(v17); /*0x1001ba81b*/
      v19 = *(_QWORD *)(v18 + 8); /*0x1001ba81d*/
      if ( v19 ) /*0x1001ba824*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16)); /*0x1001ba82d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24, 8); /*0x1001ba83f*/
    }
  }
  else
  {
    codexmate_lib::core::sessions::open_codex_db::h3aad3cf6c75ec1cc(v188, v14, v15, 0); /*0x1001ba87c*/
    if ( v189 == 3 ) /*0x1001ba88a*/
    {
      _RAX = (__int64)v160; /*0x1001ba88c*/
      qmemcpy(v160, v188, 0x60u); /*0x1001ba8a2*/
      qmemcpy(v4, v160, 0x60u); /*0x1001ba8b0*/
      goto LABEL_160; /*0x1001ba8b0*/
    }
    qmemcpy(v160, v188, sizeof(v160)); /*0x1001ba8ce*/
    *(_DWORD *)&v159[3] = *(_DWORD *)((char *)v190 + 3); /*0x1001ba8dd*/
    *(_DWORD *)v159 = v190[0]; /*0x1001ba8e3*/
    qmemcpy(v157, v160, sizeof(v157)); /*0x1001ba8f8*/
    v158 = v189; /*0x1001ba8fb*/
    v21 = v182; /*0x1001ba901*/
    if ( v182 )
    {
      v22 = v179; /*0x1001ba911*/
      v23 = v179 + 1; /*0x1001ba918*/
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v179)); /*0x1001ba927*/
      __n = 0x8000000000000016LL; /*0x1001ba938*/
      while ( 1 )
      {
        if ( !(_WORD)_R15D ) /*0x1001ba998*/
        {
          do /*0x1001ba9bd*/
          {
            v27 = _mm_movemask_epi8(_mm_load_si128(v23)); /*0x1001ba9a6*/
            v22 -= 16; /*0x1001ba9ab*/
            ++v23; /*0x1001ba9b2*/
          }
          while ( v27 == 0xFFFF ); /*0x1001ba9bd*/
          _R15D = ~v27; /*0x1001ba9bf*/
        }
        __asm { tzcnt eax, r15d } /*0x1001ba9c2*/
        v184 = (__int64)v22[-1].i64 - (unsigned int)(16 * _EAX); /*0x1001ba9d4*/
        v161 = &v184; /*0x1001ba9e2*/
        v162 = &unk_101526128; /*0x1001ba9f0*/
        rusqlite::Connection::execute::hc25883e027f66208( /*0x1001baa18*/
          &v165,
          v157,
          "DELETE FROM thread_spawn_edges WHERE child_thread_id = ?1 OR parent_thread_id = ?1DELETE FROM threads WHERE id = ?1payload",
          82,
          &v161);
        if ( v165 != __n ) /*0x1001baa28*/
          break; /*0x1001baa28*/
        v161 = &v184; /*0x1001baa35*/
        v162 = &unk_101526128; /*0x1001baa43*/
        rusqlite::Connection::execute::hc25883e027f66208( /*0x1001baa6b*/
          &v165,
          v157,
          "DELETE FROM threads WHERE id = ?1payload",
          33,
          &v161);
        if ( v165 != __n )
        {
          v160[7] = v172; /*0x1001bb763*/
          v160[6] = v171; /*0x1001bb771*/
          v160[5] = v170; /*0x1001bb77f*/
          v160[4] = v169; /*0x1001bb78d*/
          v160[3] = v168; /*0x1001bb79b*/
          v160[2] = v167; /*0x1001bb7a9*/
          v160[1] = v166; /*0x1001bb7be*/
          v160[0] = v165; /*0x1001bb7c5*/
          v188[0] = v160; /*0x1001bb7d3*/
          v188[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1001bb7e1*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(
            &v196,
            "\x16sqlite delete thread: \xC0src/core/sessions.rs",
            v188);
          v124 = v196; /*0x1001bb7ff*/
          v188[0] = v197; /*0x1001bb807*/
          v188[1] = v198; /*0x1001bb812*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(v160); /*0x1001bb820*/
          v4 = v200; /*0x1001bb825*/
          goto LABEL_159; /*0x1001bb825*/
        }
        if ( v166 ) /*0x1001baa89*/
        {
          __src = v21; /*0x1001baa8f*/
          v29 = *(void **)(v184 + 8); /*0x1001baa9a*/
          if ( (__int64)v29 < 0 ) /*0x1001baaa1*/
          {
            v31 = 0; /*0x1001baada*/
            goto LABEL_34; /*0x1001baada*/
          }
          v30 = *(const void **)v184; /*0x1001baaa3*/
          if ( v29 ) /*0x1001baaa6*/
          {
            v199 = *(void **)v184; /*0x1001baaac*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001baab0*/
            v31 = 1; /*0x1001baab5*/
            v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1); /*0x1001baac3*/
            if ( !v25 ) /*0x1001baacb*/
            {
              v199 = v29; /*0x1001bbae4*/
LABEL_34:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v199); /*0x1001baadd*/
            }
            v30 = v199; /*0x1001baad1*/
          }
          else
          {
            v25 = 1; /*0x1001ba93e*/
          }
          v26 = (void *)v25; /*0x1001ba949*/
          memcpy((void *)v25, v30, (size_t)v29); /*0x1001ba94c*/
          v188[0] = v29; /*0x1001ba951*/
          v199 = v26; /*0x1001ba958*/
          v188[1] = v26; /*0x1001ba95c*/
          v188[2] = v29; /*0x1001ba963*/
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1d31b66c0e1d63b4(&v173, v188); /*0x1001ba978*/
          v21 = (char *)__src; /*0x1001ba97d*/
        }
        _R15D &= _R15D - 1; /*0x1001ba988*/
        if ( !--v21 ) /*0x1001ba98e*/
          goto LABEL_35; /*0x1001ba98e*/
      }
      v160[7] = v172; /*0x1001bb691*/
      v160[6] = v171; /*0x1001bb69f*/
      v160[5] = v170; /*0x1001bb6ad*/
      v160[4] = v169; /*0x1001bb6bb*/
      v160[3] = v168; /*0x1001bb6c9*/
      v160[2] = v167; /*0x1001bb6d7*/
      v160[1] = v166; /*0x1001bb6ec*/
      v160[0] = v165; /*0x1001bb6f3*/
      v188[0] = v160; /*0x1001bb701*/
      v188[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1001bb70f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        &v196,
        "\x1Asqlite delete spawn edge: \xC0\x16sqlite delete thread: \xC0src/core/sessions.rs",
        v188);
      v124 = v196; /*0x1001bb72d*/
      v188[0] = v197; /*0x1001bb735*/
      v188[1] = v198; /*0x1001bb740*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(v160); /*0x1001bb74e*/
      v4 = v200; /*0x1001bb753*/
LABEL_159:
      qmemcpy(v4 + 2, v188, 0x50u); /*0x1001bb829*/
      *v4 = 9; /*0x1001bb83c*/
      v4[1] = v124; /*0x1001bb843*/
      HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(v157) >> 32; /*0x1001bb84e*/
      goto LABEL_160; /*0x1001bb84e*/
    }
LABEL_35:
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(v157); /*0x1001baaee*/
  }
  v164 = (size_t)v182; /*0x1001bab01*/
  if ( v182 ) /*0x1001bab0b*/
  {
    v32 = v179; /*0x1001bab11*/
    v33 = v179 + 1; /*0x1001bab18*/
    _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(v179)); /*0x1001bab25*/
    v35 = v155; /*0x1001bab27*/
    v199 = v154; /*0x1001bab3c*/
    v191 = (size_t)v153; /*0x1001bab40*/
    v186 = (const __m128i *)((char *)v153 - 72); /*0x1001bab4b*/
    v36 = v164; /*0x1001bab52*/
    v195 = v155; /*0x1001bab59*/
    while ( 1 ) /*0x1001bad70*/
    {
      __n = v36; /*0x1001bad70*/
      if ( (_WORD)_RAX ) /*0x1001bad77*/
      {
        __src = (void *)_RAX; /*0x1001bad7c*/
        if ( !v35 ) /*0x1001bad80*/
          goto LABEL_65; /*0x1001bad80*/
      }
      else
      {
        do /*0x1001bade9*/
        {
          v58 = _mm_movemask_epi8(_mm_load_si128(v33)); /*0x1001badd5*/
          v32 -= 16; /*0x1001badd9*/
          ++v33; /*0x1001bade0*/
        }
        while ( v58 == 0xFFFF ); /*0x1001bade9*/
        _RAX = (unsigned int)~v58; /*0x1001badeb*/
        __src = (void *)_RAX; /*0x1001badf0*/
        if ( !v35 ) /*0x1001badf4*/
          goto LABEL_65; /*0x1001badf4*/
      }
      __asm { tzcnt eax, eax } /*0x1001bad82*/
      v55 = (unsigned int)(16 * _EAX); /*0x1001bad86*/
      v56 = *(void **)((char *)v32[-1].i64 - v55); /*0x1001bad8f*/
      v185 = &v32->i8[-v55]; /*0x1001bad93*/
      v57 = *(unsigned __int64 *)((char *)&v32->u64[-1] - v55); /*0x1001bad9a*/
      __s1 = v56; /*0x1001bada5*/
      v43 = core::hash::BuildHasher::hash_one::h245728ff9d912134(v156, v56, v57); /*0x1001badb1*/
      v41 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v43 >> 57), (__m128i)0LL); /*0x1001badc0*/
      for ( i = 0; ; i += 16 ) /*0x1001badc5*/
      {
        v37 = (unsigned __int64)v199 & v43; /*0x1001bab70*/
        v38 = _mm_loadu_si128((const __m128i *)(v191 + v37)); /*0x1001bab7b*/
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v38, v41)); /*0x1001bab89*/
        if ( (_DWORD)_RAX ) /*0x1001bab8f*/
          break; /*0x1001bab8f*/
LABEL_43:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v38, (__m128i)-1LL)) ) /*0x1001bac28*/
          goto LABEL_65; /*0x1001bac2e*/
        v43 = v37 + i + 16; /*0x1001bac34*/
      }
      v151 = v41; /*0x1001bab95*/
      v187 = i; /*0x1001bab9d*/
      v152 = v38; /*0x1001baba4*/
      while ( 1 ) /*0x1001babac*/
      {
        v150.i64[0] = _RAX; /*0x1001babac*/
        __asm { tzcnt eax, eax } /*0x1001babb3*/
        v40 = -9LL * ((unsigned __int64)v199 & (v37 + _RAX)); /*0x1001babc1*/
        if ( v57 == v186[1].i64[-9 * ((unsigned __int64)v199 & (v37 + _RAX))] /*0x1001babe2*/
          && !memcmp(__s1, (const void *)v186->i64[-9 * ((unsigned __int64)v199 & (v37 + _RAX)) + 1], v57) )
        {
          break; /*0x1001babe2*/
        }
        _RAX = (unsigned int)(v150.i32[0] - 1); /*0x1001babf2*/
        LOWORD(_RAX) = v150.i16[0] & (v150.i16[0] - 1); /*0x1001babf5*/
        v35 = v195; /*0x1001babf8*/
        v41 = _mm_load_si128(&v151); /*0x1001babfc*/
        i = v187; /*0x1001bac04*/
        v38 = _mm_load_si128(&v152); /*0x1001bac0b*/
        if ( !(_WORD)_RAX ) /*0x1001bac13*/
          goto LABEL_43; /*0x1001bac13*/
      }
      v44 = *(void **)(v191 + 8 * v40 - 40); /*0x1001bac57*/
      v45 = *(_QWORD *)(v191 + 8 * v40 - 32); /*0x1001bac5c*/
      std::sys::fs::metadata::h32fa16d3052ea535(v188, v44, v45); /*0x1001bac6e*/
      if ( !LOBYTE(v188[0]) ) /*0x1001bac7a*/
        break; /*0x1001bac7a*/
      v35 = v195; /*0x1001bac8b*/
      if ( (v188[1] & 3) == 1 ) /*0x1001bac8f*/
      {
        v46 = v188[1] - 1LL; /*0x1001bac95*/
        v47 = *(_QWORD *)(v188[1] - 1LL); /*0x1001bac99*/
        v48 = *(_QWORD *)(v188[1] + 7LL); /*0x1001bac9d*/
        if ( *(_QWORD *)v48 ) /*0x1001baca1*/
          (*(void (__fastcall **)(__int64))v48)(v47); /*0x1001bacad*/
        v49 = *(_QWORD *)(v48 + 8); /*0x1001bacaf*/
        if ( v49 ) /*0x1001bacb6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v49, *(_QWORD *)(v48 + 16)); /*0x1001bacbf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24, 8); /*0x1001bacd1*/
LABEL_59:
        v35 = v195; /*0x1001bad67*/
      }
LABEL_65:
      _RAX = (unsigned int)__src & ((_DWORD)__src - 1); /*0x1001bae00*/
      v36 = __n - 1; /*0x1001bae0d*/
      if ( __n == 1 ) /*0x1001bae10*/
        goto LABEL_66; /*0x1001bae10*/
    }
    _RAX = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v44, v45); /*0x1001bace1*/
    if ( _RAX ) /*0x1001bace9*/
    {
      v4 = v200; /*0x1001bb676*/
      *v200 = 2; /*0x1001bb67a*/
      v4[1] = _RAX; /*0x1001bb681*/
      goto LABEL_160; /*0x1001bb685*/
    }
    v50 = *((_QWORD *)v185 - 1); /*0x1001bacf6*/
    if ( v50 < 0 ) /*0x1001bacfd*/
    {
      v147 = 0; /*0x1001bae99*/
LABEL_74:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v147, v193); /*0x1001bae9b*/
    }
    v51 = *((const void **)v185 - 2); /*0x1001bad03*/
    if ( v50 ) /*0x1001bad07*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001bad09*/
      v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v50, 1); /*0x1001bad16*/
      if ( !v52 ) /*0x1001bad1e*/
      {
        v193 = v50; /*0x1001bbad6*/
        v147 = 1; /*0x1001bbada*/
        goto LABEL_74; /*0x1001bbadf*/
      }
    }
    else
    {
      v52 = 1; /*0x1001bad25*/
    }
    v53 = v52; /*0x1001bad2d*/
    memcpy((void *)v52, v51, v50); /*0x1001bad36*/
    v188[0] = v50; /*0x1001bad3b*/
    v193 = v53; /*0x1001bad42*/
    v188[1] = v53; /*0x1001bad46*/
    v188[2] = v50; /*0x1001bad4d*/
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1d31b66c0e1d63b4(&v173, v188); /*0x1001bad62*/
    goto LABEL_59; /*0x1001bad62*/
  }
LABEL_66:
  v59 = (void *)v201[10]; /*0x1001bae16*/
  v60 = v201[11]; /*0x1001bae1e*/
  std::sys::fs::metadata::h32fa16d3052ea535(v188, v59, v60); /*0x1001bae2f*/
  v4 = v200; /*0x1001bae34*/
  if ( LODWORD(v188[0]) == 1 ) /*0x1001bae3f*/
  {
    if ( (v188[1] & 3) != 1 ) /*0x1001bae50*/
      goto LABEL_134; /*0x1001bae50*/
    v61 = v188[1] - 1LL; /*0x1001bae56*/
    v62 = *(_QWORD *)(v188[1] - 1LL); /*0x1001bae5a*/
    v63 = *(_QWORD *)(v188[1] + 7LL); /*0x1001bae5e*/
    if ( *(_QWORD *)v63 ) /*0x1001bae62*/
      (*(void (__fastcall **)(_QWORD))v63)(*(_QWORD *)(v188[1] - 1LL)); /*0x1001bae6e*/
    v64 = *(_QWORD *)(v63 + 8); /*0x1001bae70*/
    if ( v64 ) /*0x1001bae78*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v64, *(_QWORD *)(v63 + 16)); /*0x1001bae82*/
    v65 = 24; /*0x1001bae87*/
    v66 = 8; /*0x1001bae8c*/
    v67 = v61; /*0x1001bae91*/
    goto LABEL_133; /*0x1001bae94*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v188, v59, v60); /*0x1001baeb6*/
  v68 = (void *)v188[1]; /*0x1001baec2*/
  HIDWORD(_RAX) = 0x80000000; /*0x1001baed3*/
  if ( v188[0] == 0x8000000000000000LL ) /*0x1001baeda*/
  {
    *v4 = 2; /*0x1001baedc*/
    v4[1] = v68; /*0x1001baee3*/
    goto LABEL_160; /*0x1001baee7*/
  }
  v191 = v60; /*0x1001baeec*/
  v199 = v59; /*0x1001baef3*/
  v201 = (_QWORD *)v188[0]; /*0x1001baef7*/
  v196 = 0; /*0x1001baf02*/
  v197 = 8; /*0x1001baf0a*/
  v198 = 0; /*0x1001baf12*/
  v188[0] = 0; /*0x1001baf1a*/
  v188[1] = v188[2]; /*0x1001baf25*/
  __s1 = v68; /*0x1001baf33*/
  v188[2] = v68; /*0x1001baf37*/
  v188[3] = v188[1]; /*0x1001baf3e*/
  v188[4] = 0; /*0x1001baf45*/
  v188[5] = v188[1]; /*0x1001baf50*/
  v188[6] = 0xA0000000ALL; /*0x1001baf61*/
  LOBYTE(v188[7]) = 1; /*0x1001baf68*/
  LOWORD(v188[8]) = 0; /*0x1001baf6f*/
  do /*0x1001bafb8*/
  {
    v71 = v188[2]; /*0x1001bafb8*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1001bafc5*/
      v157,
      &v188[2]);
    if ( LODWORD(v157[0]) == 1 ) /*0x1001bafd1*/
    {
      v72 = v188[0]; /*0x1001bafda*/
      v188[0] = v157[2]; /*0x1001bafe1*/
      v73 = v157[2] - v72; /*0x1001bafe8*/
      v74 = v72 + v71; /*0x1001bafeb*/
      if ( v157[2] == v72 ) /*0x1001baff1*/
        goto LABEL_92; /*0x1001baff1*/
      goto LABEL_86; /*0x1001baff1*/
    }
    if ( BYTE1(v188[8]) ) /*0x1001bb007*/
      break; /*0x1001bb007*/
    BYTE1(v188[8]) = 1; /*0x1001bb00d*/
    v73 = v188[1] - v188[0]; /*0x1001bb022*/
    if ( (LOBYTE(v188[8]) | (v188[1] != v188[0])) != 1 ) /*0x1001bb030*/
      break; /*0x1001bb030*/
    v74 = v188[2] + v188[0]; /*0x1001bb036*/
    if ( !v73 ) /*0x1001bb040*/
      goto LABEL_92; /*0x1001bb040*/
LABEL_86:
    if ( *(_BYTE *)(v74 + v73 - 1) == 10 ) /*0x1001bb048*/
    {
      if ( v73 == 1 ) /*0x1001bb050*/
      {
        v73 = 0; /*0x1001bb060*/
      }
      else if ( *(_BYTE *)(v74 + v73 - 2) == 13 ) /*0x1001bb058*/
      {
        v73 -= 2; /*0x1001bb05a*/
      }
      else
      {
        --v73; /*0x1001bb065*/
      }
    }
LABEL_92:
    v157[0] = v74; /*0x1001bb070*/
    v157[1] = v73; /*0x1001bb077*/
    v157[3] = 0; /*0x1001bb085*/
    v157[2] = 0; /*0x1001bb08d*/
    v157[4] = v74; /*0x1001bb094*/
    v157[5] = v73; /*0x1001bb09b*/
    serde_json::de::from_trait::h13c6255c2aa0fc50(v160, v157); /*0x1001bb0ac*/
    if ( LOBYTE(v160[0]) == 6 ) /*0x1001bb0b8*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::ha21db7e75e29d7ea(v160); /*0x1001bb0c1*/
LABEL_113:
      v94 = v198; /*0x1001bb310*/
      if ( v198 == v196 ) /*0x1001bb318*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v196); /*0x1001bb322*/
      v69 = v197; /*0x1001baf90*/
      v70 = 16 * v94; /*0x1001baf97*/
      *(_QWORD *)(v197 + v70) = v74; /*0x1001baf9b*/
      *(_QWORD *)(v69 + v70 + 8) = v73; /*0x1001baf9f*/
      v198 = v94 + 1; /*0x1001bafa7*/
      continue; /*0x1001bafa7*/
    }
    v157[3] = v160[3]; /*0x1001bb0d7*/
    v157[2] = v160[2]; /*0x1001bb0e5*/
    v157[1] = v160[1]; /*0x1001bb0fa*/
    v157[0] = v160[0]; /*0x1001bb101*/
    v75 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("id", 2, v157); /*0x1001bb117*/
    v76 = 1; /*0x1001bb11c*/
    if ( v75 && *(_BYTE *)v75 == 3 && v164 ) /*0x1001bb138*/
    {
      v77 = *(_QWORD *)(v75 + 24); /*0x1001bb142*/
      __src = *(void **)(v75 + 16); /*0x1001bb14d*/
      __n = v77; /*0x1001bb151*/
      v78 = core::hash::BuildHasher::hash_one::h245728ff9d912134(v183, __src, v77); /*0x1001bb155*/
      _RCX = v78 >> 57; /*0x1001bb15d*/
      v80 = v179; /*0x1001bb161*/
      v81 = v180; /*0x1001bb168*/
      v82 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v78 >> 57), (__m128i)0LL); /*0x1001bb177*/
      v83 = v179 - 1; /*0x1001bb17c*/
      for ( j = 0; ; j += 16 ) /*0x1001bb180*/
      {
        v85 = v81 & v78; /*0x1001bb183*/
        v86 = _mm_loadu_si128((const __m128i *)((char *)v80 + v85)); /*0x1001bb186*/
        _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v86, v82)); /*0x1001bb193*/
        if ( _R14D ) /*0x1001bb19b*/
          break; /*0x1001bb19b*/
LABEL_103:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v86, (__m128i)-1LL)); /*0x1001bb24c*/
        if ( (_DWORD)_RCX ) /*0x1001bb25a*/
          goto LABEL_112; /*0x1001bb25a*/
        v78 = v85 + j + 16; /*0x1001bb25c*/
      }
      v185 = (__int8 *)v85; /*0x1001bb1a1*/
      v186 = v80; /*0x1001bb1a8*/
      v195 = v81; /*0x1001bb1af*/
      v150 = v82; /*0x1001bb1b3*/
      v151.i64[0] = (__int64)v83; /*0x1001bb1bb*/
      v187 = j; /*0x1001bb1c2*/
      v152 = v86; /*0x1001bb1c9*/
      while ( 1 ) /*0x1001bb1d1*/
      {
        __asm { tzcnt ecx, r14d } /*0x1001bb1d1*/
        v88 = &v83[-(v81 & (v85 + _RCX))]; /*0x1001bb1e3*/
        HIDWORD(_RCX) = HIDWORD(__n); /*0x1001bb1e6*/
        if ( __n == v88->i64[1] ) /*0x1001bb1ee*/
        {
          v89 = memcmp(__src, (const void *)v88->i64[0], __n); /*0x1001bb1fb*/
          v90 = __n; /*0x1001bb200*/
          if ( !v89 ) /*0x1001bb206*/
            break; /*0x1001bb206*/
        }
        v91 = _R14D - 1; /*0x1001bb208*/
        LOWORD(v91) = _R14D & (_R14D - 1); /*0x1001bb20c*/
        v8 = (_WORD)v91 == 0; /*0x1001bb20c*/
        _R14D = v91; /*0x1001bb210*/
        v85 = (unsigned __int64)v185; /*0x1001bb213*/
        v80 = v186; /*0x1001bb221*/
        v81 = v195; /*0x1001bb228*/
        v82 = _mm_load_si128(&v150); /*0x1001bb22c*/
        v83 = (const __m128i *)v151.i64[0]; /*0x1001bb234*/
        j = v187; /*0x1001bb23b*/
        v86 = _mm_load_si128(&v152); /*0x1001bb242*/
        if ( v8 ) /*0x1001bb24a*/
          goto LABEL_103; /*0x1001bb24a*/
      }
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1001bb274*/
      {
        v99 = 0; /*0x1001bb39a*/
        goto LABEL_120; /*0x1001bb39a*/
      }
      if ( __n ) /*0x1001bb27a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001bb27c*/
        v92 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v90, 1); /*0x1001bb289*/
        if ( !v92 ) /*0x1001bb291*/
        {
          v193 = __n; /*0x1001bbaf1*/
          v99 = 1; /*0x1001bbaf5*/
LABEL_120:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v99, v193); /*0x1001bb39c*/
        }
        v93 = v92; /*0x1001bb297*/
        v90 = __n; /*0x1001bb29a*/
      }
      else
      {
        v93 = 1; /*0x1001bb2a9*/
      }
      memcpy((void *)v93, __src, v90); /*0x1001bb2b8*/
      v165 = v90; /*0x1001bb2bd*/
      v193 = v93; /*0x1001bb2c4*/
      v166 = v93; /*0x1001bb2c8*/
      v167 = v90; /*0x1001bb2cf*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1d31b66c0e1d63b4(&v173, &v165); /*0x1001bb2e4*/
      v76 = 0; /*0x1001bb2f0*/
    }
LABEL_112:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v157); /*0x1001bb300*/
    if ( v76 ) /*0x1001bb30a*/
      goto LABEL_113; /*0x1001bb30a*/
  }
  while ( !BYTE1(v188[8]) ); /*0x1001bafb8*/
  if ( v198 ) /*0x1001bb333*/
  {
    alloc::str::join_generic_copy::hf183b70a1ae88120(v188, v197, v198, "\n", 1); /*0x1001bb34d*/
    v4 = v200; /*0x1001bb352*/
    v95 = v188[2]; /*0x1001bb356*/
    v157[2] = v188[2]; /*0x1001bb35d*/
    v96 = v188[0]; /*0x1001bb364*/
    v157[1] = v188[1]; /*0x1001bb372*/
    v157[0] = v188[0]; /*0x1001bb379*/
    if ( v188[0] == v188[2] ) /*0x1001bb383*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v157, v188[2], 1, 1, 1); /*0x1001bbaba*/
      v96 = v157[0]; /*0x1001bbabf*/
      v95 = v157[2]; /*0x1001bbac6*/
      v4 = v200; /*0x1001bbacd*/
    }
    v97 = v157[1]; /*0x1001bb389*/
    *(_BYTE *)(v157[1] + v95) = 10; /*0x1001bb390*/
    v98 = v95 + 1; /*0x1001bb395*/
  }
  else
  {
    v97 = 1; /*0x1001bb3ab*/
    v98 = 0; /*0x1001bb3b1*/
    v96 = 0; /*0x1001bb3b3*/
    v4 = v200; /*0x1001bb3b6*/
  }
  _RAX = std::fs::write::inner::had0c1bee0a2c1e21(v199, v191, (void *)v97, v98); /*0x1001bb3c8*/
  v100 = _RAX; /*0x1001bb3cd*/
  if ( v96 ) /*0x1001bb3d3*/
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v96, 1) >> 32; /*0x1001bb3e0*/
  if ( !v100 ) /*0x1001bb3e8*/
  {
    v102 = v201; /*0x1001bb43a*/
    if ( v196 ) /*0x1001bb43e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v197, 16 * v196, 8); /*0x1001bb44d*/
    if ( !v102 ) /*0x1001bb455*/
    {
LABEL_134:
      v148[0] = v163; /*0x1001bb468*/
      v148[1] = v149; /*0x1001bb47d*/
      v148[2] = &v173; /*0x1001bb48b*/
      ((void (__fastcall *)(_QWORD *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h195594696fa269ac)( /*0x1001bb4a0*/
        v188,
        v148);
      v4[3] = v188[2]; /*0x1001bb4ac*/
      _RAX = v188[0]; /*0x1001bb4b0*/
      v4[2] = v188[1]; /*0x1001bb4be*/
      v4[1] = _RAX; /*0x1001bb4c2*/
      *v4 = 10; /*0x1001bb4c6*/
      v104 = v174; /*0x1001bb4cd*/
      if ( v174 ) /*0x1001bb4d7*/
      {
        v105 = v176; /*0x1001bb4dd*/
        if ( v176 ) /*0x1001bb4e7*/
        {
          v106 = v173; /*0x1001bb4ed*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v173)); /*0x1001bb4fe*/
          v108 = v173 + 1; /*0x1001bb501*/
          do /*0x1001bb520*/
          {
            if ( !(_WORD)_R13D ) /*0x1001bb526*/
            {
              do /*0x1001bb54d*/
              {
                v109 = _mm_movemask_epi8(_mm_load_si128(v108)); /*0x1001bb536*/
                v106 -= 24; /*0x1001bb53b*/
                ++v108; /*0x1001bb542*/
              }
              while ( v109 == 0xFFFF ); /*0x1001bb54d*/
              _R13D = ~v109; /*0x1001bb54f*/
            }
            __asm { tzcnt eax, r13d } /*0x1001bb552*/
            v110 = -3 * _RAX; /*0x1001bb55a*/
            v111 = *((_QWORD *)&v106[-1] + v110 - 1); /*0x1001bb55e*/
            if ( v111 ) /*0x1001bb566*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106[-1].i64[v110], v111, 1); /*0x1001bb575*/
            --v105; /*0x1001bb510*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1001bb517*/
            _R13D &= _R13D - 1; /*0x1001bb51a*/
          }
          while ( v105 ); /*0x1001bb520*/
        }
        v112 = (24 * v104 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1001bb588*/
        v113 = v112 + v104; /*0x1001bb58c*/
        v8 = v113 == -17; /*0x1001bb58f*/
        v114 = v113 + 17; /*0x1001bb58f*/
        v4 = v200; /*0x1001bb593*/
        if ( !v8 ) /*0x1001bb597*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v173 - v112, v114, 16); /*0x1001bb5ab*/
      }
      HIDWORD(_RAX) = HIDWORD(v154); /*0x1001bb5b0*/
      if ( v154 ) /*0x1001bb5ba*/
      {
        __n = (size_t)v154; /*0x1001bb5c0*/
        v116 = v155; /*0x1001bb5c4*/
        if ( v155 ) /*0x1001bb5ce*/
        {
          v117 = v153; /*0x1001bb5d4*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v153)); /*0x1001bb5e5*/
          v119 = v153 + 1; /*0x1001bb5e8*/
          do /*0x1001bb5fd*/
          {
            if ( !(_WORD)_R13D ) /*0x1001bb607*/
            {
              do /*0x1001bb62d*/
              {
                v120 = _mm_movemask_epi8(_mm_load_si128(v119)); /*0x1001bb616*/
                v117 -= 72; /*0x1001bb61b*/
                ++v119; /*0x1001bb622*/
              }
              while ( v120 == 0xFFFF ); /*0x1001bb62d*/
              _R13D = ~v120; /*0x1001bb62f*/
            }
            __asm { tzcnt eax, r13d } /*0x1001bb632*/
            v121 = &v117->i8[-72 * _RAX]; /*0x1001bb63e*/
            v122 = *((_QWORD *)v121 - 9); /*0x1001bb642*/
            if ( v122 ) /*0x1001bb64a*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v121 - 8), v122, 1); /*0x1001bb655*/
            v123 = *((_QWORD *)v121 - 6); /*0x1001bb65a*/
            if ( v123 ) /*0x1001bb661*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v121 - 5), v123, 1); /*0x1001bb66c*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1001bb5f4*/
            _R13D &= _R13D - 1; /*0x1001bb5f7*/
            --v116; /*0x1001bb5fa*/
          }
          while ( v116 ); /*0x1001bb5fd*/
        }
        goto LABEL_182; /*0x1001bb5fd*/
      }
      goto LABEL_184; /*0x1001bb5ba*/
    }
    v66 = 1; /*0x1001bb457*/
    v67 = (__int64)__s1; /*0x1001bb45c*/
    v65 = (__int64)v102; /*0x1001bb460*/
LABEL_133:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v65, v66); /*0x1001bb463*/
    goto LABEL_134; /*0x1001bb463*/
  }
  *v4 = 2; /*0x1001bb3ea*/
  v4[1] = v100; /*0x1001bb3f1*/
  v101 = v201; /*0x1001bb3fc*/
  if ( v196 ) /*0x1001bb400*/
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v197, 16 * v196, 8) >> 32; /*0x1001bb40f*/
  if ( v101 ) /*0x1001bb417*/
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v101, 1) >> 32; /*0x1001bb429*/
LABEL_160:
  v125 = v174; /*0x1001bb853*/
  if ( v174 ) /*0x1001bb85d*/
  {
    v126 = v176; /*0x1001bb863*/
    if ( v176 ) /*0x1001bb86d*/
    {
      v127 = v173; /*0x1001bb873*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v173)); /*0x1001bb884*/
      v129 = v173 + 1; /*0x1001bb887*/
      do /*0x1001bb8a0*/
      {
        if ( !(_WORD)_R13D ) /*0x1001bb8a6*/
        {
          do /*0x1001bb8cd*/
          {
            v130 = _mm_movemask_epi8(_mm_load_si128(v129)); /*0x1001bb8b6*/
            v127 -= 24; /*0x1001bb8bb*/
            ++v129; /*0x1001bb8c2*/
          }
          while ( v130 == 0xFFFF ); /*0x1001bb8cd*/
          _R13D = ~v130; /*0x1001bb8cf*/
        }
        __asm { tzcnt eax, r13d } /*0x1001bb8d2*/
        v131 = -3 * _RAX; /*0x1001bb8da*/
        v132 = *((_QWORD *)&v127[-1] + v131 - 1); /*0x1001bb8de*/
        if ( v132 ) /*0x1001bb8e6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127[-1].i64[v131], v132, 1); /*0x1001bb8f5*/
        --v126; /*0x1001bb890*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1001bb897*/
        _R13D &= _R13D - 1; /*0x1001bb89a*/
      }
      while ( v126 ); /*0x1001bb8a0*/
    }
    v133 = (24 * v125 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1001bb908*/
    v134 = v133 + v125; /*0x1001bb90c*/
    v8 = v134 == -17; /*0x1001bb90f*/
    v135 = v134 + 17; /*0x1001bb90f*/
    v4 = v200; /*0x1001bb913*/
    if ( !v8 ) /*0x1001bb917*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v173 - v133, v135, 16); /*0x1001bb92b*/
  }
  HIDWORD(_RAX) = HIDWORD(v154); /*0x1001bb930*/
  if ( v154 ) /*0x1001bb93a*/
  {
    __n = (size_t)v154; /*0x1001bb940*/
    v137 = v155; /*0x1001bb944*/
    if ( v155 ) /*0x1001bb94e*/
    {
      v138 = v153; /*0x1001bb954*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v153)); /*0x1001bb965*/
      v140 = v153 + 1; /*0x1001bb968*/
      do /*0x1001bb97d*/
      {
        if ( !(_WORD)_R13D ) /*0x1001bb983*/
        {
          do /*0x1001bb9ad*/
          {
            v141 = _mm_movemask_epi8(_mm_load_si128(v140)); /*0x1001bb996*/
            v138 -= 72; /*0x1001bb99b*/
            ++v140; /*0x1001bb9a2*/
          }
          while ( v141 == 0xFFFF ); /*0x1001bb9ad*/
          _R13D = ~v141; /*0x1001bb9af*/
        }
        __asm { tzcnt eax, r13d } /*0x1001bb9b2*/
        v142 = &v138->i8[-72 * _RAX]; /*0x1001bb9be*/
        v143 = *((_QWORD *)v142 - 9); /*0x1001bb9c2*/
        if ( v143 ) /*0x1001bb9ca*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v142 - 8), v143, 1); /*0x1001bb9d5*/
        v144 = *((_QWORD *)v142 - 6); /*0x1001bb9da*/
        if ( v144 ) /*0x1001bb9e1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v142 - 5), v144, 1); /*0x1001bb9ec*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1001bb974*/
        _R13D &= _R13D - 1; /*0x1001bb977*/
        --v137; /*0x1001bb97a*/
      }
      while ( v137 ); /*0x1001bb97d*/
    }
LABEL_182:
    v145 = (72 * __n + 87) & 0xFFFFFFFFFFFFFFF0LL; /*0x1001bb9f6*/
    v4 = v200; /*0x1001bba11*/
    if ( v145 + __n != -17 ) /*0x1001bba15*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v153 - v145, v145 + __n + 17, 16); /*0x1001bba26*/
  }
LABEL_184:
  if ( v180 && 17 * v180 != -33 ) /*0x1001bba45*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v179[-v180 - 1], 17 * v180 + 33, 16); /*0x1001bba5a*/
  return v4; /*0x1001bba62*/
}