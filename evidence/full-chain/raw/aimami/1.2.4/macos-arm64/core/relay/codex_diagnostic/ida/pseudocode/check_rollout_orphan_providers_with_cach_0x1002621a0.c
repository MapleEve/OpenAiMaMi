// __ZN13codexmate_lib4core5relay16codex_diagnostic41check_rollout_orphan_providers_with_cache @ 0x1002621a0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_rollout_orphan_providers_with_cache::h6be8e94d42872682(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        unsigned __int8 a4,
        _QWORD *a5)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  const __m128i *v16; // rdx
  const __m128i **v17; // rdi
  const __m128i *v18; // rbx
  const __m128i *v19; // r14
  const __m128i *v20; // r13
  size_t v21; // rdx
  unsigned __int64 v23; // rax
  __m128i *v24; // r15
  __int64 result; // rax
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rbx
  _DWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // r15
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // rdx
  const __m128i *v37; // rax
  signed __int64 v38; // r12
  const void *v39; // rsi
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // r13
  char v43; // al
  size_t v44; // r13
  unsigned __int64 v45; // r12
  __m128i v46; // xmm1
  __int64 i; // rcx
  unsigned __int64 v48; // r12
  __m128i v50; // xmm2
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __m128i v54; // xmm1
  __int64 j; // rbx
  unsigned __int64 v56; // rax
  __m128i v57; // xmm2
  unsigned __int64 v59; // r13
  __int64 v60; // rax
  int v61; // eax
  bool v62; // zf
  __int64 v63; // rbx
  __int64 v64; // r12
  __int64 v65; // rsi
  int v66; // eax
  __m128i si128; // xmm0
  __int64 v68; // r15
  unsigned __int64 v69; // r13
  unsigned __int64 v70; // r12
  __int64 v71; // rbx
  unsigned __int64 v72; // r15
  unsigned __int64 v73; // r12
  const char *v74; // rsi
  const __m128i *v76; // r15
  const __m128i *v77; // r12
  const __m128i *v79; // r13
  int v80; // ebx
  __int64 v81; // rax
  __int64 v82; // rsi
  unsigned __int64 v83; // rax
  __int64 v85; // r15
  const __m128i *v86; // r12
  const __m128i *v88; // r13
  int v89; // ebx
  __int64 v90; // rax
  __int64 v91; // rsi
  unsigned __int64 v92; // rax
  __int64 v94; // r15
  const __m128i *v95; // r12
  const __m128i *v97; // r13
  int v98; // ebx
  __int64 v99; // rax
  __int64 v100; // rsi
  unsigned __int64 v101; // rax
  char *v102; // r14
  const __m128i *v103; // rdi
  unsigned __int64 v104; // r13
  _QWORD *v105; // r12
  __int64 v106; // rsi
  unsigned __int64 v107; // r12
  _QWORD *v108; // r13
  unsigned __int64 *v109; // rdi
  __int64 v110; // rsi
  __int64 v111; // rdx
  unsigned __int64 v112; // rcx
  unsigned __int64 **v113; // rbx
  __int64 v114; // rbx
  bool v115; // r12
  int *v116; // r13
  void *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  void *v120; // r15
  __int64 v121; // r12
  _QWORD *v122; // rax
  unsigned __int64 v123; // rbx
  unsigned __int64 v124; // r13
  __int64 v125; // rdx
  __int64 v126; // rax
  __m128i v127; // [rsp+0h] [rbp-2E0h] BYREF
  _QWORD v128[3]; // [rsp+18h] [rbp-2C8h] BYREF
  __int16 v129; // [rsp+30h] [rbp-2B0h]
  const __m128i *v130; // [rsp+38h] [rbp-2A8h]
  _QWORD v131[3]; // [rsp+40h] [rbp-2A0h] BYREF
  const __m128i *v132[12]; // [rsp+58h] [rbp-288h] BYREF
  const __m128i *v133; // [rsp+B8h] [rbp-228h] BYREF
  unsigned __int64 v134; // [rsp+C0h] [rbp-220h]
  unsigned __int64 v135; // [rsp+C8h] [rbp-218h]
  __m128i v136; // [rsp+D0h] [rbp-210h] BYREF
  __m128i v137; // [rsp+E0h] [rbp-200h] BYREF
  unsigned __int64 v138[12]; // [rsp+F0h] [rbp-1F0h] BYREF
  __int64 v139; // [rsp+150h] [rbp-190h] BYREF
  _QWORD *v140; // [rsp+188h] [rbp-158h] BYREF
  __int64 v141; // [rsp+190h] [rbp-150h]
  unsigned __int64 v142; // [rsp+198h] [rbp-148h]
  unsigned __int64 v143; // [rsp+1A0h] [rbp-140h] BYREF
  unsigned __int64 v144; // [rsp+1A8h] [rbp-138h]
  unsigned __int64 v145; // [rsp+1B0h] [rbp-130h]
  const __m128i *v146; // [rsp+1B8h] [rbp-128h] BYREF
  __int64 (__fastcall **v147)(); // [rsp+1C0h] [rbp-120h]
  __int64 v148; // [rsp+1C8h] [rbp-118h]
  __int64 v149; // [rsp+1D0h] [rbp-110h]
  __int64 v150; // [rsp+1D8h] [rbp-108h]
  const __m128i *v151; // [rsp+1E0h] [rbp-100h]
  __int64 i64; // [rsp+1E8h] [rbp-F8h]
  const __m128i *v153; // [rsp+1F0h] [rbp-F0h]
  const __m128i *v154; // [rsp+1F8h] [rbp-E8h]
  __int64 v155; // [rsp+200h] [rbp-E0h] BYREF
  __int64 v156; // [rsp+208h] [rbp-D8h]
  __int64 v157; // [rsp+210h] [rbp-D0h]
  const __m128i *v158; // [rsp+218h] [rbp-C8h]
  const __m128i *v159; // [rsp+220h] [rbp-C0h] BYREF
  __int64 v160; // [rsp+228h] [rbp-B8h]
  __int64 v161; // [rsp+230h] [rbp-B0h]
  __int64 v162; // [rsp+238h] [rbp-A8h]
  _BYTE v163[16]; // [rsp+240h] [rbp-A0h] BYREF
  const __m128i **v164; // [rsp+250h] [rbp-90h] BYREF
  __int64 (__fastcall *v165)(); // [rsp+258h] [rbp-88h]
  unsigned __int64 v166; // [rsp+260h] [rbp-80h]
  __int64 v167; // [rsp+268h] [rbp-78h]
  __int8 *v168; // [rsp+270h] [rbp-70h]
  size_t v169; // [rsp+278h] [rbp-68h]
  unsigned __int64 v170; // [rsp+280h] [rbp-60h]
  unsigned __int64 v171; // [rsp+288h] [rbp-58h]
  _QWORD *v172; // [rsp+290h] [rbp-50h]
  __int64 v173; // [rsp+298h] [rbp-48h]
  void *v174; // [rsp+2A0h] [rbp-40h]
  const __m128i *v175; // [rsp+2A8h] [rbp-38h]
  void *__s1; // [rsp+2B0h] [rbp-30h]

  v175 = a3; /*0x1002621ba*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h2c37c38d14365ff6(v138); /*0x1002621cb*/
  v8 = v138[2]; /*0x1002621d0*/
  if ( v138[2] ) /*0x1002621da*/
  {
    v172 = a5; /*0x1002621e0*/
    v173 = a1; /*0x1002621e4*/
    v9 = v138[1]; /*0x1002621e8*/
    v10 = (_QWORD *)(v138[1] + 8); /*0x1002621ef*/
    do /*0x100262207*/
    {
      v11 = *(v10 - 1); /*0x100262209*/
      if ( v11 ) /*0x100262210*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v10, v11, 1); /*0x10026221a*/
      v10 += 3; /*0x100262200*/
      --v8; /*0x100262204*/
    }
    while ( v8 ); /*0x100262207*/
    if ( v138[0] ) /*0x10026222b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24 * v138[0], 8); /*0x10026223d*/
    codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::he5b0204558ef5cef(v132, a2); /*0x10026224c*/
    if ( LODWORD(v132[0]) == 11 ) /*0x100262258*/
    {
      v154 = v132[3]; /*0x100262265*/
      v153 = v132[2]; /*0x10026227a*/
      i64 = (__int64)v132[1]->i64; /*0x100262281*/
      codexmate_lib::core::relay::codex_diagnostic::diagnostic_valid_provider_ids::h0665f9b4390cad52( /*0x10026229f*/
        &v159,
        *(_QWORD *)(a2 + 56),
        *(_QWORD *)(a2 + 64),
        v175,
        a4);
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1002622ab*/
      v14 = v13; /*0x1002622ad*/
      if ( *(_BYTE *)(v13 + 16) == 1 ) /*0x1002622b4*/
      {
        v15 = *(_QWORD *)v13; /*0x1002622ba*/
        v16 = *(const __m128i **)(v14 + 8); /*0x1002622bd*/
      }
      else
      {
        v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100262fbc*/
        *(_QWORD *)v14 = v15; /*0x100262fc1*/
        *(_QWORD *)(v14 + 8) = v16; /*0x100262fc4*/
        *(_BYTE *)(v14 + 16) = 1; /*0x100262fc8*/
      }
      v149 = 0; /*0x1002622cc*/
      v17 = nullptr; /*0x1002622d3*/
      v148 = 0; /*0x1002622da*/
      v147 = nullptr; /*0x1002622e8*/
      v146 = (const __m128i *)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x1002622f6*/
      v150 = v15; /*0x1002622fd*/
      v151 = v16; /*0x100262304*/
      *(_QWORD *)v14 = v15 + 2; /*0x10026230f*/
      memset(&v132[1], 0, 24); /*0x100262320*/
      v132[0] = (const __m128i *)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x100262327*/
      v132[4] = (const __m128i *)(v15 + 1); /*0x10026232e*/
      v132[5] = v16; /*0x100262335*/
      v155 = 0; /*0x10026233c*/
      v18 = v153; /*0x100262347*/
      v19 = v154; /*0x10026234e*/
      v175 = v153; /*0x100262358*/
      if ( !v154 ) /*0x10026235c*/
        goto LABEL_84; /*0x10026235c*/
      v20 = &v153[11 * (_QWORD)v154]; /*0x100262373*/
      v21 = v160; /*0x10026237d*/
      v167 = v160; /*0x100262384*/
      v158 = v159; /*0x100262388*/
      v168 = &v159[-2].i8[8]; /*0x100262393*/
      _RCX = v162; /*0x100262397*/
      v157 = v162; /*0x10026239e*/
      v23 = 0x8000000000000000LL; /*0x1002623a5*/
      v156 = 0; /*0x1002623a9*/
      v24 = (__m128i *)v153; /*0x1002623b4*/
      while ( 1 ) /*0x100262601*/
      {
        if ( v24[4].i64[1] == v23 ) /*0x100262605*/
          goto LABEL_23; /*0x100262605*/
        v38 = v24[5].i64[1]; /*0x100262607*/
        if ( v38 < 0 ) /*0x10026260e*/
        {
          v40 = 0; /*0x100262b7c*/
LABEL_79:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v40, v38); /*0x100262b7e*/
        }
        v171 = (unsigned __int64)v20; /*0x100262614*/
        v170 = v23; /*0x100262618*/
        v39 = (const void *)v24[5].i64[0]; /*0x10026261c*/
        if ( v38 ) /*0x100262620*/
        {
          __s1 = v24; /*0x100262622*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v39, v21, _RCX); /*0x100262629*/
          v40 = 1; /*0x10026262e*/
          v41 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v38, 1); /*0x10026263b*/
          if ( !v41 ) /*0x100262643*/
            goto LABEL_79; /*0x100262643*/
          v42 = v41; /*0x100262649*/
          v18 = v175; /*0x10026264c*/
          v24 = (__m128i *)__s1; /*0x100262653*/
        }
        else
        {
          v42 = 1; /*0x100262659*/
        }
        memcpy((void *)v42, v39, v38); /*0x100262665*/
        v138[0] = v38; /*0x10026266a*/
        v138[1] = v42; /*0x100262671*/
        v138[2] = v38; /*0x100262678*/
        v17 = &v146; /*0x10026267f*/
        v43 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::ha57a76b688271ff9(&v146, v138); /*0x10026268d*/
        v20 = (const __m128i *)v171; /*0x100262692*/
        if ( !v43 ) /*0x100262698*/
          break; /*0x100262698*/
LABEL_22:
        v23 = v170; /*0x1002625ed*/
LABEL_23:
        v24 += 11; /*0x1002625f1*/
        if ( v24 == v20 ) /*0x1002625fb*/
        {
          if ( v132[3] ) /*0x100262b98*/
          {
            si128 = _mm_load_si128(v132[0]); /*0x100262bb1*/
            v128[0] = v132[0]; /*0x100262bbb*/
            v128[1] = v132[0] + 1; /*0x100262bc6*/
            v128[2] = (char *)v132[0]->i64 + (unsigned __int64)v132[1] + 1; /*0x100262bcd*/
            v129 = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x100262bd4*/
            v130 = v132[3]; /*0x100262bdb*/
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9ae99722b4cc515c( /*0x100262bf0*/
              &v140,
              v128);
            v68 = v141; /*0x100262bf5*/
            v69 = v142; /*0x100262bfc*/
            if ( v142 >= 2 ) /*0x100262c11*/
            {
              if ( v142 >= 0x15 ) /*0x100263003*/
              {
                core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v141, v142, &v164); /*0x10026336b*/
                v172 = v140; /*0x100263377*/
                v70 = v68 + 24 * v69; /*0x100263380*/
              }
              else
              {
                core::slice::sort::shared::smallsort::insertion_sort_shift_left::h25cba5eb821395c3(v141, v142, 1, &v164); /*0x10026301b*/
                v172 = v140; /*0x100263027*/
                v70 = v68 + 24 * v69; /*0x100263030*/
                if ( v69 - 2 < 3 ) /*0x10026303f*/
                {
LABEL_83:
                  v71 = v70; /*0x100262c37*/
                  goto LABEL_137; /*0x100262c3a*/
                }
              }
              v71 = v68 + 120; /*0x100263045*/
              goto LABEL_130; /*0x100263045*/
            }
            v172 = v140; /*0x100262c1e*/
            v70 = v141 + 24 * v142; /*0x100262c27*/
            v71 = v141; /*0x100262c2b*/
            if ( v142 ) /*0x100262c31*/
              goto LABEL_83; /*0x100262c31*/
LABEL_130:
            if ( v70 == v71 ) /*0x100263055*/
            {
              v70 = v71; /*0x100263096*/
            }
            else
            {
              v104 = (v70 - v71) / 0x18; /*0x10026305a*/
              v105 = (_QWORD *)(v71 + 8); /*0x10026305e*/
              do /*0x10026306b*/
              {
                v106 = *(v105 - 1); /*0x10026306d*/
                if ( v106 ) /*0x100263075*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v105, v106, 1); /*0x100263080*/
                v105 += 3; /*0x100263064*/
                --v104; /*0x100263068*/
              }
              while ( v104 ); /*0x10026306b*/
              v70 = v71; /*0x100263087*/
            }
LABEL_137:
            v107 = 0xAAAAAAAAAAAAAAABLL * ((v70 - v68) >> 3); /*0x100263099*/
            v108 = v172; /*0x1002630a4*/
            v164 = (const __m128i **)v172; /*0x1002630a8*/
            v165 = (__int64 (__fastcall *)())v68; /*0x1002630af*/
            v166 = v107; /*0x1002630b6*/
            v109 = v138; /*0x1002630c1*/
            v110 = v68; /*0x1002630ce*/
            alloc::str::join_generic_copy::h1b385c7941ba5aef(v138, v68, v107, &unk_1015E2256, 3); /*0x1002630d4*/
            v145 = v138[2]; /*0x1002630e0*/
            v112 = v138[1]; /*0x1002630ee*/
            v144 = v138[1]; /*0x1002630f5*/
            v143 = v138[0]; /*0x1002630fc*/
            if ( v71 != v68 ) /*0x100263106*/
            {
              v113 = (unsigned __int64 **)(v68 + 8); /*0x100263108*/
              do /*0x100263117*/
              {
                v110 = (__int64)*(v113 - 1); /*0x100263119*/
                if ( v110 ) /*0x100263120*/
                {
                  v109 = *v113; /*0x100263122*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v113, v110, 1); /*0x10026312a*/
                }
                v113 += 3; /*0x100263110*/
                --v107; /*0x100263114*/
              }
              while ( v107 ); /*0x100263117*/
            }
            if ( v108 ) /*0x100263134*/
            {
              v110 = 24LL * (_QWORD)v108; /*0x10026313a*/
              v109 = (unsigned __int64 *)v68; /*0x100263144*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, 24LL * (_QWORD)v108, 8); /*0x100263147*/
            }
            v133 = v132[3]; /*0x100263153*/
            v114 = 0; /*0x10026315a*/
            v115 = v132[3] < (const __m128i *)0xB; /*0x100263160*/
            v116 = &anon_7245a3145add9b93f83b0a9aa358a664_70; /*0x10026316b*/
            if ( v132[3] < (const __m128i *)0xB ) /*0x100263172*/
              v116 = (int *)"warning"; /*0x100263172*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v109, v110, v111, v112); /*0x100263176*/
            v117 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100263185*/
            if ( !v117 ) /*0x10026318d*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x100263348*/
            v120 = v117; /*0x100263193*/
            LOBYTE(v114) = v115; /*0x100263196*/
            v121 = 2 * v114 + 5; /*0x100263199*/
            qmemcpy(v117, "rollout_orphan_providers", 24); /*0x1002631c4*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1, v118, v119); /*0x1002631c7*/
            v122 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v121, 1); /*0x1002631d4*/
            if ( !v122 ) /*0x1002631dc*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2 * v114 + 5); /*0x100263357*/
            v172 = v122; /*0x1002631e2*/
            memcpy(v122, v116, 2 * v114 + 5); /*0x1002631ef*/
            v164 = &v133; /*0x1002631fb*/
            v165 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100263209*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v138, &unk_1017C3C19, &v164); /*0x100263225*/
            v171 = v138[0]; /*0x100263231*/
            v123 = v138[1]; /*0x100263235*/
            v124 = v138[2]; /*0x10026323c*/
            v138[0] = (unsigned __int64)&v143; /*0x10026324a*/
            v138[1] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100263258*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v131, &unk_1015E36E5, v138); /*0x100263274*/
            v125 = v173; /*0x100263280*/
            *(_QWORD *)(v173 + 88) = v131[2]; /*0x100263284*/
            v126 = v131[0]; /*0x100263288*/
            *(_QWORD *)(v125 + 80) = v131[1]; /*0x100263296*/
            *(_QWORD *)(v125 + 72) = v126; /*0x10026329a*/
            *(_QWORD *)v125 = 24; /*0x10026329e*/
            *(_QWORD *)(v125 + 8) = v120; /*0x1002632a5*/
            *(_QWORD *)(v125 + 16) = 24; /*0x1002632a9*/
            *(_QWORD *)(v125 + 24) = v121; /*0x1002632b1*/
            *(_QWORD *)(v125 + 32) = v172; /*0x1002632b9*/
            *(_QWORD *)(v125 + 40) = v121; /*0x1002632bd*/
            *(_QWORD *)(v125 + 48) = v171; /*0x1002632c5*/
            *(_QWORD *)(v125 + 56) = v123; /*0x1002632c9*/
            *(_QWORD *)(v125 + 64) = v124; /*0x1002632cd*/
            *(_BYTE *)(v125 + 96) = 1; /*0x1002632d1*/
            v74 = (const char *)v143; /*0x1002632d5*/
            if ( v143 ) /*0x1002632df*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144, v143, 1); /*0x1002632ed*/
            v18 = v175; /*0x1002632f2*/
            _RAX = (unsigned __int64)v132[1]; /*0x1002632f6*/
            if ( !v132[1] ) /*0x100263300*/
            {
LABEL_97:
              HIDWORD(_RAX) = HIDWORD(v147); /*0x100262d9d*/
              if ( v147 ) /*0x100262da7*/
              {
                v173 = (__int64)v147; /*0x100262dad*/
                v85 = v149; /*0x100262db1*/
                if ( v149 ) /*0x100262dbb*/
                {
                  v86 = v146; /*0x100262dc1*/
                  _EBX = ~_mm_movemask_epi8(_mm_load_si128(v146)); /*0x100262dd2*/
                  v88 = v146 + 1; /*0x100262dd4*/
                  do /*0x100262ded*/
                  {
                    if ( !(_WORD)_EBX ) /*0x100262df2*/
                    {
                      do /*0x100262e1b*/
                      {
                        v89 = _mm_movemask_epi8(_mm_load_si128(v88)); /*0x100262e06*/
                        v86 -= 24; /*0x100262e0a*/
                        ++v88; /*0x100262e11*/
                      }
                      while ( v89 == 0xFFFF ); /*0x100262e1b*/
                      _EBX = ~v89; /*0x100262e1d*/
                    }
                    __asm { tzcnt eax, ebx } /*0x100262e1f*/
                    v90 = -3 * _RAX; /*0x100262e26*/
                    v91 = *((_QWORD *)&v86[-1] + v90 - 1); /*0x100262e2a*/
                    if ( v91 ) /*0x100262e32*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86[-1].i64[v90], v91, 1); /*0x100262e41*/
                    --v85; /*0x100262de0*/
                    _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x100262de6*/
                    _EBX &= _EBX - 1; /*0x100262de8*/
                  }
                  while ( v85 ); /*0x100262ded*/
                }
                v92 = (24 * v173 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100262e58*/
                v74 = (const char *)(v92 + v173 + 17); /*0x100262e5f*/
                v18 = v175; /*0x100262e63*/
                if ( v92 + v173 != -17 ) /*0x100262e67*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v146 - v92, v74, 16); /*0x100262e78*/
              }
              HIDWORD(_RAX) = HIDWORD(v160); /*0x100262e7d*/
              if ( v160 ) /*0x100262e87*/
              {
                v173 = v160; /*0x100262e8d*/
                v94 = v162; /*0x100262e91*/
                if ( v162 ) /*0x100262e9b*/
                {
                  v95 = v159; /*0x100262ea1*/
                  _EBX = ~_mm_movemask_epi8(_mm_load_si128(v159)); /*0x100262eb2*/
                  v97 = v159 + 1; /*0x100262eb4*/
                  do /*0x100262ecd*/
                  {
                    if ( !(_WORD)_EBX ) /*0x100262ed2*/
                    {
                      do /*0x100262efb*/
                      {
                        v98 = _mm_movemask_epi8(_mm_load_si128(v97)); /*0x100262ee6*/
                        v95 -= 24; /*0x100262eea*/
                        ++v97; /*0x100262ef1*/
                      }
                      while ( v98 == 0xFFFF ); /*0x100262efb*/
                      _EBX = ~v98; /*0x100262efd*/
                    }
                    __asm { tzcnt eax, ebx } /*0x100262eff*/
                    v99 = -3 * _RAX; /*0x100262f06*/
                    v100 = *((_QWORD *)&v95[-1] + v99 - 1); /*0x100262f0a*/
                    if ( v100 ) /*0x100262f12*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[-1].i64[v99], v100, 1); /*0x100262f21*/
                    --v94; /*0x100262ec0*/
                    _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x100262ec6*/
                    _EBX &= _EBX - 1; /*0x100262ec8*/
                  }
                  while ( v94 ); /*0x100262ecd*/
                }
                v101 = (24 * v173 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100262f38*/
                v74 = (const char *)(v101 + v173 + 17); /*0x100262f3f*/
                v18 = v175; /*0x100262f43*/
                if ( v101 + v173 != -17 ) /*0x100262f47*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v159 - v101, v74, 16); /*0x100262f58*/
              }
              v102 = &v19->i8[1]; /*0x100262f5d*/
              v103 = v18; /*0x100262f60*/
              while ( v102 != (char *)1 ) /*0x100262f74*/
              {
                --v102; /*0x100262f7d*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::h657639c742bb6a00( /*0x100262f80*/
                  v103,
                  v74);
                v103 += 11; /*0x100262f85*/
              }
              result = i64; /*0x100262f8a*/
              if ( i64 ) /*0x100262f94*/
                return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 176 * i64, 8); /*0x100262fa5*/
              return result; /*0x100262fa5*/
            }
LABEL_87:
            v173 = _RAX; /*0x100262cc7*/
            v76 = v132[3]; /*0x100262ccb*/
            if ( v132[3] ) /*0x100262cd5*/
            {
              v77 = v132[0]; /*0x100262cdb*/
              _EBX = ~_mm_movemask_epi8(_mm_load_si128(v132[0])); /*0x100262cec*/
              v79 = v132[0] + 1; /*0x100262cee*/
              do /*0x100262d0d*/
              {
                if ( !(_WORD)_EBX ) /*0x100262d12*/
                {
                  do /*0x100262d3b*/
                  {
                    v80 = _mm_movemask_epi8(_mm_load_si128(v79)); /*0x100262d26*/
                    v77 -= 24; /*0x100262d2a*/
                    ++v79; /*0x100262d31*/
                  }
                  while ( v80 == 0xFFFF ); /*0x100262d3b*/
                  _EBX = ~v80; /*0x100262d3d*/
                }
                __asm { tzcnt eax, ebx } /*0x100262d3f*/
                v81 = -3LL * _RAX; /*0x100262d46*/
                v82 = *((_QWORD *)&v77[-1] + v81 - 1); /*0x100262d4a*/
                if ( v82 ) /*0x100262d52*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[-1].i64[v81], v82, 1); /*0x100262d61*/
                v76 = (const __m128i *)((char *)v76 - 1); /*0x100262d00*/
                _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x100262d06*/
                _EBX &= _EBX - 1; /*0x100262d08*/
              }
              while ( v76 ); /*0x100262d0d*/
            }
            v83 = (24 * v173 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100262d78*/
            v74 = (const char *)(v83 + v173 + 17); /*0x100262d7f*/
            v18 = v175; /*0x100262d83*/
            if ( v83 + v173 != -17 ) /*0x100262d87*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v132[0] - v83, v74, 16); /*0x100262d98*/
            goto LABEL_97; /*0x100262d98*/
          }
LABEL_84:
          v164 = (const __m128i **)&v155; /*0x100262c3f*/
          v165 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100262c54*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v138, &unk_1017C3BED, &v164); /*0x100262c70*/
          v72 = v138[0]; /*0x100262c75*/
          v73 = v138[1]; /*0x100262c7c*/
          v74 = "rollout_orphan_providersconfig-backups"; /*0x100262c8a*/
          codexmate_lib::core::relay::codex_diagnostic::ok_item::hb0663104acb46642( /*0x100262c9d*/
            v173,
            "rollout_orphan_providersconfig-backups",
            24,
            v138[1],
            v138[2]);
          if ( v72 ) /*0x100262ca5*/
          {
            v74 = (const char *)v72; /*0x100262caf*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v72, 1); /*0x100262cb2*/
          }
          _RAX = (unsigned __int64)v132[1]; /*0x100262cb7*/
          if ( !v132[1] ) /*0x100262cc1*/
            goto LABEL_97; /*0x100262cc1*/
          goto LABEL_87; /*0x100262cc1*/
        }
      }
      v17 = (const __m128i **)v138; /*0x1002626a6*/
      std::sys::fs::metadata::h32fa16d3052ea535(v138, v24[5].i64[0], v24[5].i64[1]); /*0x1002626ad*/
      if ( LODWORD(v138[0]) == 1 ) /*0x1002626b9*/
      {
        _RCX = v138[1] & 3; /*0x1002625e1*/
        if ( (_DWORD)_RCX == 1 ) /*0x1002625e7*/
        {
          __s1 = (void *)(v138[1] - 1); /*0x100262a18*/
          v63 = *(_QWORD *)(v138[1] - 1); /*0x100262a1c*/
          v64 = *(_QWORD *)(v138[1] + 7); /*0x100262a20*/
          if ( *(_QWORD *)v64 ) /*0x100262a24*/
            (*(void (__fastcall **)(__int64))v64)(v63); /*0x100262a30*/
          v65 = *(_QWORD *)(v64 + 8); /*0x100262a32*/
          if ( v65 ) /*0x100262a3a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v65, *(_QWORD *)(v64 + 16)); /*0x100262a44*/
          v17 = (const __m128i **)__s1; /*0x100262a53*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, 24, 8); /*0x100262a57*/
          v18 = v175; /*0x100262a5c*/
        }
        goto LABEL_22; /*0x100262a60*/
      }
      v155 = ++v156; /*0x1002626d0*/
      v17 = (const __m128i **)v138; /*0x1002626df*/
      codexmate_lib::core::relay::codex_diagnostic::DiagnosticRolloutProviderCache::read::hf6e727bfaebe7832( /*0x1002626ea*/
        v138,
        v172,
        v24[5].i64[0],
        v24[5].i64[1]);
      if ( (v138[0] & 0x8000000000000000LL) != 0LL ) /*0x1002626f9*/
      {
        if ( v138[0] != v170 && v138[1] ) /*0x1002629f8*/
        {
          v17 = (const __m128i **)v138[2]; /*0x1002629fe*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138[2], v138[1], 1); /*0x100262a0a*/
        }
        goto LABEL_22; /*0x100262a0f*/
      }
      v135 = v138[0]; /*0x100262706*/
      __s1 = (void *)v138[1]; /*0x100262714*/
      v44 = v138[2]; /*0x100262718*/
      v134 = v138[3]; /*0x100262726*/
      v174 = (void *)v138[4]; /*0x100262734*/
      v169 = v138[5]; /*0x10026273f*/
      if ( v157 ) /*0x10026274b*/
      {
        v17 = (const __m128i **)v163; /*0x100262751*/
        v45 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v163); /*0x100262764*/
        v46 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v45 >> 57), (__m128i)0LL); /*0x100262773*/
        for ( i = 0; ; i += 16 ) /*0x100262778*/
        {
          v48 = v167 & v45; /*0x10026277a*/
          HIDWORD(_RAX) = HIDWORD(v158); /*0x10026277e*/
          v50 = _mm_loadu_si128((const __m128i *)((char *)v158 + v48)); /*0x100262785*/
          _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v50, v46)); /*0x100262793*/
          if ( _EBX ) /*0x100262799*/
            break; /*0x100262799*/
LABEL_40:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v50, (__m128i)-1LL)) ) /*0x100262818*/
            goto LABEL_42; /*0x10026281e*/
          v45 = v48 + i + 16; /*0x100262820*/
        }
        v136 = v46; /*0x10026279b*/
        v137.i64[0] = i; /*0x1002627a3*/
        v127 = v50; /*0x1002627aa*/
        while ( 1 ) /*0x1002627b2*/
        {
          __asm { tzcnt eax, ebx } /*0x1002627b2*/
          v52 = -3LL * (v167 & (v48 + _RAX)); /*0x1002627c0*/
          if ( v44 == *(_QWORD *)&v168[8 * v52 + 16] ) /*0x1002627cd*/
          {
            v17 = (const __m128i **)__s1; /*0x1002627db*/
            if ( !memcmp(__s1, *(const void **)&v168[8 * v52 + 8], v44) ) /*0x1002627e2*/
              break; /*0x1002627e2*/
          }
          _RAX = (unsigned int)(_EBX - 1); /*0x1002627ef*/
          LOWORD(_RAX) = _EBX & (_EBX - 1); /*0x1002627f2*/
          _EBX = _RAX; /*0x1002627f5*/
          v46 = _mm_load_si128(&v136); /*0x1002627f7*/
          i = v137.i64[0]; /*0x1002627ff*/
          v50 = _mm_load_si128(&v127); /*0x100262806*/
          if ( !(_WORD)_RAX ) /*0x10026280e*/
            goto LABEL_40; /*0x10026280e*/
        }
      }
      else
      {
LABEL_42:
        if ( v44 != 6 /*0x1002628eb*/
          || (*(_BYTE *)__s1 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)__s1 - 65) < 0x1Au))) != 111
          || (*((_BYTE *)__s1 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 1) - 65) < 0x1Au))) != 112
          || (*((_BYTE *)__s1 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 2) - 65) < 0x1Au))) != 101
          || (*((_BYTE *)__s1 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 3) - 65) < 0x1Au))) != 110
          || (*((_BYTE *)__s1 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 4) - 65) < 0x1Au))) != 97
          || (*((_BYTE *)__s1 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 5) - 65) < 0x1Au))) != 105 )
        {
          goto LABEL_73; /*0x1002628eb*/
        }
      }
      if ( v157 ) /*0x1002628f9*/
      {
        v17 = (const __m128i **)v163; /*0x1002628ff*/
        v53 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v163); /*0x10026290e*/
        v54 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v53 >> 57), (__m128i)0LL); /*0x100262922*/
        for ( j = 0; ; j += 16 ) /*0x100262927*/
        {
          v56 = v167 & v53; /*0x100262929*/
          HIDWORD(_RCX) = HIDWORD(v158); /*0x10026292d*/
          v57 = _mm_loadu_si128((const __m128i *)((char *)v158 + v56)); /*0x100262934*/
          _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v57, v54)); /*0x100262941*/
          if ( _R12D ) /*0x100262949*/
            break; /*0x100262949*/
LABEL_56:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v57, (__m128i)-1LL)) ) /*0x1002629ca*/
            goto LABEL_66; /*0x1002629d0*/
          v53 = v56 + j + 16; /*0x1002629d6*/
        }
        v136 = v54; /*0x10026294b*/
        v137 = v57; /*0x100262953*/
        while ( 1 ) /*0x10026295b*/
        {
          __asm { tzcnt ecx, r12d } /*0x10026295b*/
          v59 = v56; /*0x100262960*/
          v60 = -3LL * (v167 & (v56 + _RCX)); /*0x10026296d*/
          HIDWORD(_RCX) = HIDWORD(v168); /*0x100262971*/
          v21 = v169; /*0x100262975*/
          if ( v169 == *(_QWORD *)&v168[8 * v60 + 16] ) /*0x10026297e*/
          {
            v17 = (const __m128i **)v174; /*0x10026298c*/
            if ( !memcmp(v174, *(const void **)&v168[8 * v60 + 8], v169) ) /*0x100262994*/
              goto LABEL_74; /*0x10026299b*/
          }
          v61 = _R12D - 1; /*0x1002629a1*/
          LOWORD(v61) = _R12D & (_R12D - 1); /*0x1002629a6*/
          v62 = (_WORD)v61 == 0; /*0x1002629a6*/
          _R12D = v61; /*0x1002629aa*/
          v56 = v59; /*0x1002629ad*/
          v54 = _mm_load_si128(&v136); /*0x1002629b0*/
          v57 = _mm_load_si128(&v137); /*0x1002629b8*/
          if ( v62 ) /*0x1002629c0*/
            goto LABEL_56; /*0x1002629c0*/
        }
      }
LABEL_66:
      if ( v169 == 6 /*0x100262af8*/
        && (*(_BYTE *)v174 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)v174 - 65) < 0x1Au))) == 111
        && (*((_BYTE *)v174 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v174 + 1) - 65) < 0x1Au))) == 112
        && (*((_BYTE *)v174 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v174 + 2) - 65) < 0x1Au))) == 101
        && (*((_BYTE *)v174 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v174 + 3) - 65) < 0x1Au))) == 110
        && (*((_BYTE *)v174 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v174 + 4) - 65) < 0x1Au))) == 97 )
      {
        v66 = *((unsigned __int8 *)v174 + 5); /*0x100262afe*/
        _RCX = (unsigned int)(v66 - 65); /*0x100262b02*/
        LOBYTE(_RCX) = v66 | (32 * ((unsigned __int8)(v66 - 65) < 0x1Au)); /*0x100262b0e*/
        if ( (_BYTE)_RCX == 105 ) /*0x100262b13*/
        {
LABEL_74:
          if ( v135 ) /*0x100262b41*/
          {
            v17 = (const __m128i **)__s1; /*0x100262b48*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v135, 1); /*0x100262b4c*/
          }
          v18 = v175; /*0x100262b5b*/
          v20 = (const __m128i *)v171; /*0x100262b5f*/
          if ( v134 ) /*0x100262b63*/
          {
            v17 = (const __m128i **)v174; /*0x100262b6e*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v174, v134, 1); /*0x100262b72*/
          }
          goto LABEL_22; /*0x100262b77*/
        }
      }
LABEL_73:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v164, &v24[1].u64[1]); /*0x100262b15*/
      v17 = v132; /*0x100262b28*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7686243132a986d1(v132, &v164); /*0x100262b32*/
      goto LABEL_74; /*0x100262b32*/
    }
    qmemcpy(v138, v132, sizeof(v138)); /*0x100262426*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v139, &v133, v12, 0); /*0x100262429*/
    v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100262438*/
    if ( !v26 ) /*0x100262440*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x100263315*/
    v29 = v26; /*0x100262446*/
    qmemcpy(v26, "rollout_orphan_providers", 24); /*0x10026246f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1, v27, v28); /*0x100262472*/
    v30 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100262481*/
    if ( !v30 ) /*0x100262489*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100263326*/
    v33 = v30; /*0x10026248f*/
    *(_DWORD *)((char *)v30 + 3) = 1735289198; /*0x100262492*/
    *v30 = 1852989815; /*0x100262499*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v31, v32); /*0x10026249f*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x1002624ae*/
    if ( !v34 ) /*0x1002624b6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x100263337*/
    v35 = v34; /*0x1002624bc*/
    *(_QWORD *)(v34 + 24) = 0xBCE5A2B4E7207475LL; /*0x1002624c9*/
    *(_QWORD *)(v34 + 16) = 0x6F6C6C6F5220968FLL; /*0x1002624d8*/
    *(_QWORD *)(v34 + 8) = 0xE5BBAFE8B495E68CLL; /*0x1002624e7*/
    *(_QWORD *)v34 = 0xAEE595B3E6A097E6LL; /*0x1002624f6*/
    *(_BYTE *)(v34 + 32) = -107; /*0x1002624fa*/
    v159 = nullptr; /*0x100262500*/
    v160 = 1; /*0x10026250b*/
    v161 = 0; /*0x100262516*/
    v148 = 1610612768; /*0x100262521*/
    v146 = (const __m128i *)&v159; /*0x100262533*/
    v147 = &anon_7245a3145add9b93f83b0a9aa358a664_1177; /*0x100262541*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b( /*0x100262556*/
                            v138,
                            &v146) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100262ff2*/
        "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result::u"
        "nwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
        55,
        &v164,
        &anon_7245a3145add9b93f83b0a9aa358a664_1194,
        &anon_7245a3145add9b93f83b0a9aa358a664_1180);
    v36 = v173; /*0x10026256a*/
    *(_QWORD *)(v173 + 88) = v161; /*0x10026256e*/
    v37 = v159; /*0x100262572*/
    *(_QWORD *)(v36 + 80) = v160; /*0x100262580*/
    *(_QWORD *)(v36 + 72) = v37; /*0x100262584*/
    *(_QWORD *)v36 = 24; /*0x100262588*/
    *(_QWORD *)(v36 + 8) = v29; /*0x10026258f*/
    *(_QWORD *)(v36 + 16) = 24; /*0x100262593*/
    *(_QWORD *)(v36 + 24) = 7; /*0x10026259b*/
    *(_QWORD *)(v36 + 32) = v33; /*0x1002625a3*/
    *(_QWORD *)(v36 + 40) = 7; /*0x1002625a7*/
    *(_QWORD *)(v36 + 48) = 33; /*0x1002625af*/
    *(_QWORD *)(v36 + 56) = v35; /*0x1002625b7*/
    *(_QWORD *)(v36 + 64) = 33; /*0x1002625bb*/
    *(_BYTE *)(v36 + 96) = 0; /*0x1002625c3*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v132); /*0x1002625ce*/
  }
  else
  {
    if ( v138[0] ) /*0x1002623c6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138[1], 24 * v138[0], 8); /*0x1002623dc*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb0663104acb46642( /*0x10026240e*/
             a1,
             "rollout_orphan_providersconfig-backups",
             24,
             &unk_1015E36B6,
             47);
  }
}