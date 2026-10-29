// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_diagnostic::fix_thread_response_item_ids::h8c42bbea37e30f95; addr: 0x100874db0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
volatile signed __int64 ***__fastcall codexmate_lib::core::relay::codex_diagnostic::fix_thread_response_item_ids::h8c42bbea37e30f95(
        volatile signed __int64 ***a1,
        __int64 a2,
        __m128i a3)
{
  volatile signed __int64 ***v4; // r13
  __int64 v5; // rdx
  volatile signed __int64 **v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  volatile signed __int64 **v14; // rcx
  volatile signed __int64 **v15; // r12
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  volatile signed __int64 **v21; // rcx
  __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  volatile signed __int64 **v25; // r14
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  volatile signed __int64 **v29; // r14
  __int64 v30; // r15
  __int64 v31; // r12
  _QWORD *v32; // r13
  __int64 v33; // rsi
  _QWORD *v34; // rbx
  unsigned __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rsi
  volatile signed __int64 ***v38; // rdi
  __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  volatile signed __int64 **v41; // rax
  __int64 v42; // rcx
  volatile signed __int64 **v43; // rcx
  __int64 v44; // rbx
  volatile signed __int64 *v45; // rax
  volatile signed __int64 **v46; // rax
  __int64 v47; // rcx
  volatile signed __int64 **v48; // rdx
  __int64 v49; // rsi
  volatile signed __int64 **v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // r14
  void *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rax
  volatile signed __int64 **v59; // rax
  volatile signed __int64 **v60; // rcx
  volatile signed __int64 **v61; // rdx
  volatile signed __int64 **v62; // rsi
  volatile signed __int64 **v63; // rdi
  __int64 v64; // rsi
  const __m128i *v65; // rsi
  __m128i v66; // xmm0
  __m128i v67; // xmm1
  __m128i v68; // xmm1
  unsigned __int64 v69; // rax
  _QWORD *v70; // rcx
  __int64 *v71; // rax
  __int64 v72; // r14
  __int64 v73; // r15
  volatile signed __int64 ****v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rdx
  volatile signed __int64 **v77; // r14
  void *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  volatile signed __int64 **v81; // r14
  volatile signed __int64 *v82; // rax
  volatile signed __int64 **v83; // rax
  __int64 v84; // rcx
  volatile signed __int64 **v85; // rdx
  __int64 v86; // rsi
  volatile signed __int64 **v87; // rdi
  _QWORD *v88; // r14
  __int64 v89; // rsi
  __int64 v90; // r14
  _QWORD *v91; // r15
  __int64 v92; // rsi
  __int64 v94; // rax
  __int64 v95; // rdx
  volatile signed __int64 **v96; // r14
  void *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  volatile signed __int64 **v100; // r14
  volatile signed __int64 *v101; // rax
  __int64 v102; // rax
  volatile signed __int64 **v103; // rcx
  __int64 v104; // rdx
  volatile signed __int64 **v105; // rsi
  volatile signed __int64 **v106; // rdi
  _QWORD v107[3]; // [rsp+8h] [rbp-318h] BYREF
  _QWORD v108[3]; // [rsp+20h] [rbp-300h] BYREF
  _QWORD v109[3]; // [rsp+38h] [rbp-2E8h] BYREF
  _QWORD v110[3]; // [rsp+50h] [rbp-2D0h] BYREF
  _QWORD v111[3]; // [rsp+68h] [rbp-2B8h] BYREF
  __int64 v112; // [rsp+80h] [rbp-2A0h] BYREF
  __int64 v113; // [rsp+88h] [rbp-298h]
  __int64 v114; // [rsp+90h] [rbp-290h]
  __int64 v115; // [rsp+98h] [rbp-288h]
  __int64 v116; // [rsp+A0h] [rbp-280h]
  __int64 v117; // [rsp+A8h] [rbp-278h]
  __int64 v118; // [rsp+B0h] [rbp-270h]
  __int64 v119; // [rsp+B8h] [rbp-268h]
  __int64 v120; // [rsp+C0h] [rbp-260h]
  __int64 v121; // [rsp+C8h] [rbp-258h]
  __int64 v122; // [rsp+D0h] [rbp-250h] BYREF
  __int64 v123; // [rsp+D8h] [rbp-248h]
  __int64 *v124; // [rsp+E0h] [rbp-240h]
  __int64 v125; // [rsp+E8h] [rbp-238h]
  _QWORD v126[4]; // [rsp+F0h] [rbp-230h] BYREF
  _QWORD v127[12]; // [rsp+110h] [rbp-210h] BYREF
  __int64 v128; // [rsp+170h] [rbp-1B0h]
  __int64 v129; // [rsp+178h] [rbp-1A8h] BYREF
  __int64 v130; // [rsp+180h] [rbp-1A0h]
  volatile signed __int64 ***v131; // [rsp+188h] [rbp-198h]
  __int64 *v132; // [rsp+190h] [rbp-190h] BYREF
  __int64 v133; // [rsp+198h] [rbp-188h]
  volatile signed __int64 **v134; // [rsp+1A0h] [rbp-180h]
  __int64 (__fastcall *v135)(_QWORD *, __int64 *, __int64, __int64, __int64, __int64); // [rsp+1A8h] [rbp-178h]
  volatile signed __int64 **v136; // [rsp+1B0h] [rbp-170h] BYREF
  __int64 v137; // [rsp+1B8h] [rbp-168h]
  volatile signed __int64 **v138; // [rsp+1C0h] [rbp-160h]
  __int64 v139; // [rsp+1C8h] [rbp-158h]
  __int64 v140; // [rsp+1D0h] [rbp-150h]
  __int64 v141; // [rsp+1D8h] [rbp-148h]
  __int64 v142; // [rsp+1E0h] [rbp-140h] BYREF
  __int64 v143; // [rsp+1E8h] [rbp-138h]
  __int64 v144; // [rsp+1F0h] [rbp-130h]
  _QWORD v145[12]; // [rsp+1F8h] [rbp-128h] BYREF
  __int64 v146; // [rsp+258h] [rbp-C8h] BYREF
  volatile signed __int64 **v147; // [rsp+260h] [rbp-C0h]
  __int64 v148; // [rsp+268h] [rbp-B8h]
  volatile signed __int64 **v149; // [rsp+270h] [rbp-B0h]
  __int64 v150; // [rsp+278h] [rbp-A8h]
  __int64 v151; // [rsp+280h] [rbp-A0h]
  __int64 v152; // [rsp+288h] [rbp-98h]
  char v153; // [rsp+297h] [rbp-89h] BYREF
  volatile signed __int64 **v154; // [rsp+298h] [rbp-88h] BYREF
  __int64 (__fastcall *v155)(); // [rsp+2A0h] [rbp-80h]
  __int64 v156; // [rsp+2A8h] [rbp-78h]
  __int64 (__fastcall *v157)(); // [rsp+2B0h] [rbp-70h]
  const char *v158; // [rsp+2B8h] [rbp-68h]
  __int64 v159; // [rsp+2C0h] [rbp-60h]
  __int64 v160; // [rsp+2C8h] [rbp-58h]
  __int64 (__fastcall *v161)(); // [rsp+2D0h] [rbp-50h]
  __int64 v162; // [rsp+2D8h] [rbp-48h]
  __int64 v163; // [rsp+2E0h] [rbp-40h]
  volatile signed __int64 **v164; // [rsp+2E8h] [rbp-38h]
  __int64 **v165; // [rsp+2F0h] [rbp-30h]

  v4 = a1; /*0x100874dc7*/
  *(double *)a3.i64 = codexmate_lib::core::relay::codex_diagnostic::inspect_thread_response_item_ids::h24bd2fc697033b07( /*0x100874dd1*/
                        &v154,
                        a2,
                        a3);
  v6 = v154; /*0x100874dd6*/
  v145[0] = v155; /*0x100874de1*/
  v145[1] = v156; /*0x100874dec*/
  v145[2] = v157; /*0x100874df7*/
  v145[3] = v158; /*0x100874e02*/
  v145[4] = v159; /*0x100874e0d*/
  v145[5] = v160; /*0x100874e18*/
  v145[6] = v161; /*0x100874e23*/
  if ( v154 != (volatile signed __int64 **)11 ) /*0x100874e2e*/
  {
    a1[11] = (volatile signed __int64 **)v165; /*0x100875214*/
    a1[10] = v164; /*0x10087521c*/
    v20 = v162; /*0x100875220*/
    a1[9] = (volatile signed __int64 **)v163; /*0x100875228*/
    a1[8] = (volatile signed __int64 **)v20; /*0x10087522c*/
    a1[7] = (volatile signed __int64 **)v145[6]; /*0x100875237*/
    a1[6] = (volatile signed __int64 **)v145[5]; /*0x100875242*/
    a1[5] = (volatile signed __int64 **)v145[4]; /*0x10087524d*/
    a1[4] = (volatile signed __int64 **)v145[3]; /*0x100875258*/
    a1[3] = (volatile signed __int64 **)v145[2]; /*0x100875263*/
    v21 = (volatile signed __int64 **)v145[0]; /*0x100875267*/
    a1[2] = (volatile signed __int64 **)v145[1]; /*0x100875275*/
    a1[1] = v21; /*0x100875279*/
    *a1 = v6; /*0x10087527d*/
    return v4; /*0x100875281*/
  }
  v119 = v145[0]; /*0x100874e42*/
  v120 = v145[1]; /*0x100874e49*/
  v7 = v145[2]; /*0x100874e50*/
  v121 = v145[2]; /*0x100874e57*/
  v122 = v145[3]; /*0x100874e65*/
  v123 = v145[4]; /*0x100874e73*/
  v124 = (__int64 *)v145[5]; /*0x100874e81*/
  v125 = v145[6]; /*0x100874e8f*/
  if ( !v145[2] ) /*0x100874e99*/
  {
    v22 = v124; /*0x100875286*/
    if ( v124 ) /*0x100875290*/
    {
      v136 = nullptr; /*0x100875296*/
      v137 = 8; /*0x1008752a1*/
      v138 = nullptr; /*0x1008752ac*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v154, a2, v5); /*0x1008752b7*/
      v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1008752c6*/
      if ( !v23 ) /*0x1008752ce*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10087613e*/
      v25 = (volatile signed __int64 **)v23; /*0x1008752d4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8, v24); /*0x1008752d7*/
      v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x1008752e6*/
      if ( !v26 ) /*0x1008752ee*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1008761be*/
      qmemcpy(v26, "thread_response_item_ids", 24); /*0x10087531a*/
      *v25 = (volatile signed __int64 *)24; /*0x10087531d*/
      v25[1] = (volatile signed __int64 *)v26; /*0x100875324*/
      v25[2] = (volatile signed __int64 *)24; /*0x100875328*/
      v146 = 1; /*0x100875330*/
      v147 = v25; /*0x10087533b*/
      v148 = 1; /*0x100875342*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1, v27); /*0x10087534d*/
      v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10087535c*/
      if ( !v28 ) /*0x100875364*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100876152*/
      v29 = (volatile signed __int64 **)v28; /*0x10087536a*/
      v132 = v22; /*0x10087536d*/
      v110[0] = v123; /*0x100875383*/
      v110[1] = v123 + 24LL * (_QWORD)v22; /*0x10087538a*/
      v110[2] = 5; /*0x100875391*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1324bfa397d156de( /*0x1008753aa*/
        v145,
        v110);
      v30 = v145[1]; /*0x1008753af*/
      v31 = v145[2]; /*0x1008753b6*/
      alloc::str::join_generic_copy::h877a7dfcc3252013(&v154, v145[1], v145[2], &unk_10178860B, 3); /*0x1008753d7*/
      v127[2] = v156; /*0x1008753e0*/
      v127[1] = v155; /*0x1008753f2*/
      v127[0] = v154; /*0x1008753f9*/
      v154 = (volatile signed __int64 **)&v132; /*0x100875407*/
      v155 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100875415*/
      v156 = (__int64)v127; /*0x100875420*/
      v157 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10087542b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v111, &unk_10190065F, &v154); /*0x100875444*/
      v131 = a1; /*0x100875449*/
      if ( v127[0] ) /*0x10087545a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127[1], v127[0], 1); /*0x100875468*/
      if ( v31 ) /*0x100875470*/
      {
        v32 = (_QWORD *)(v30 + 8); /*0x100875476*/
        do /*0x100875487*/
        {
          v33 = *(v32 - 1); /*0x10087548d*/
          if ( v33 ) /*0x100875494*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, v33, 1); /*0x10087549f*/
          v32 += 3; /*0x100875480*/
          --v31; /*0x100875484*/
        }
        while ( v31 ); /*0x100875487*/
      }
      if ( v145[0] ) /*0x1008756b7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24LL * v145[0], 8); /*0x1008756c9*/
      v29[2] = (volatile signed __int64 *)v111[2]; /*0x1008756d5*/
      v45 = (volatile signed __int64 *)v111[0]; /*0x1008756d9*/
      v29[1] = (volatile signed __int64 *)v111[1]; /*0x1008756e7*/
      *v29 = v45; /*0x1008756eb*/
      v46 = v136; /*0x1008756ee*/
      v47 = v137; /*0x1008756f5*/
      v154 = v136; /*0x1008756fc*/
      v155 = (__int64 (__fastcall *)())v137; /*0x100875703*/
      v48 = v138; /*0x100875707*/
      v156 = (__int64)v138; /*0x10087570e*/
      v49 = v146; /*0x100875712*/
      v50 = v147; /*0x100875719*/
      v157 = (__int64 (__fastcall *)())v146; /*0x100875720*/
      v158 = (const char *)v147; /*0x100875724*/
      v159 = v148; /*0x10087572f*/
      v4 = v131; /*0x100875733*/
      v131[6] = (volatile signed __int64 **)v148; /*0x10087573a*/
      v4[5] = v50; /*0x10087573e*/
      v4[4] = (volatile signed __int64 **)v49; /*0x100875742*/
      v4[3] = v48; /*0x100875746*/
      v4[2] = (volatile signed __int64 **)v47; /*0x10087574a*/
      v4[1] = v46; /*0x10087574e*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v154, a2, v5); /*0x100875757*/
      v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100875766*/
      if ( !v51 ) /*0x10087576e*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100876166*/
      v53 = (_QWORD *)v51; /*0x100875774*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8, v52); /*0x100875777*/
      v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100875786*/
      if ( !v54 ) /*0x10087578e*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1008761cf*/
      qmemcpy(v54, "thread_response_item_ids", 24); /*0x1008757ba*/
      *v53 = 24; /*0x1008757bd*/
      v53[1] = v54; /*0x1008757c4*/
      v53[2] = 24; /*0x1008757c8*/
      v127[0] = 1; /*0x1008757d0*/
      v127[1] = v53; /*0x1008757db*/
      v127[2] = 1; /*0x1008757e2*/
      v145[0] = 0; /*0x1008757ed*/
      v145[1] = 8; /*0x1008757f8*/
      v145[2] = 0; /*0x100875803*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1, v55); /*0x10087580e*/
      v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10087581d*/
      if ( !v56 ) /*0x100875825*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10087617a*/
      v29 = (volatile signed __int64 **)v56; /*0x10087582b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8, v57); /*0x10087582e*/
      v58 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x10087583d*/
      if ( !v58 ) /*0x100875845*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39); /*0x1008761e0*/
      *(_QWORD *)((char *)v58 + 31) = 0x444920B9A1E9A894LL; /*0x100875855*/
      v58[3] = 0x94E783B0E88889E7LL; /*0x100875863*/
      v58[2] = 0xA797E6849AE78DA4LL; /*0x100875871*/
      v58[1] = 0xE5AEBFE481A6E880LL; /*0x10087587f*/
      *v58 = 0x9CE9899CE6A1B2E6LL; /*0x10087588d*/
      *v29 = (volatile signed __int64 *)39; /*0x100875890*/
      v29[1] = v58; /*0x100875897*/
      v29[2] = (volatile signed __int64 *)39; /*0x10087589b*/
      v59 = (volatile signed __int64 **)v127[2]; /*0x1008758a3*/
      v156 = v127[2]; /*0x1008758aa*/
      v60 = (volatile signed __int64 **)v127[0]; /*0x1008758ae*/
      v61 = (volatile signed __int64 **)v127[1]; /*0x1008758b5*/
      v155 = (__int64 (__fastcall *)())v127[1]; /*0x1008758bc*/
      v154 = (volatile signed __int64 **)v127[0]; /*0x1008758c0*/
      v62 = (volatile signed __int64 **)v145[0]; /*0x1008758c7*/
      v63 = (volatile signed __int64 **)v145[1]; /*0x1008758ce*/
      v157 = (__int64 (__fastcall *)())v145[0]; /*0x1008758d5*/
      v158 = (const char *)v145[1]; /*0x1008758d9*/
      v159 = v145[2]; /*0x1008758e4*/
      v4[6] = (volatile signed __int64 **)v145[2]; /*0x1008758e8*/
      v4[5] = v63; /*0x1008758ec*/
      v4[4] = v62; /*0x1008758f0*/
      v4[3] = v59; /*0x1008758f4*/
      v4[2] = v61; /*0x1008758f8*/
      v4[1] = v60; /*0x1008758fc*/
    }
    v4[7] = (volatile signed __int64 **)1; /*0x100875900*/
    v4[8] = v29; /*0x100875908*/
    v4[9] = (volatile signed __int64 **)1; /*0x10087590c*/
    *v4 = (volatile signed __int64 **)11; /*0x100875914*/
    if ( v119 ) /*0x100875926*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, 56 * v119, 8); /*0x10087593c*/
    goto LABEL_92; /*0x100875941*/
  }
  v8 = *(_QWORD *)(a2 + 584); /*0x100874e9f*/
  v117 = a2; /*0x100874ea6*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v112, v8, *(_QWORD *)(a2 + 592), &unk_101789571, 38); /*0x100874ec8*/
  v131 = a1; /*0x100874ecd*/
  v129 = 0; /*0x100874ed4*/
  v142 = 0; /*0x100874edf*/
  v143 = 8; /*0x100874eea*/
  v144 = 0; /*0x100874ef5*/
  v9 = v120; /*0x100874f07*/
  v10 = 56 * v7; /*0x100874f0e*/
  v126[0] = v120; /*0x100874f17*/
  v126[1] = v120; /*0x100874f1e*/
  v118 = v119; /*0x100874f25*/
  v126[2] = v119; /*0x100874f2c*/
  v126[3] = v120 + 56 * v7; /*0x100874f33*/
  v11 = v113; /*0x100874f3a*/
  v115 = v114; /*0x100874f48*/
  v12 = 0; /*0x100874f4f*/
  v128 = v113; /*0x100874f59*/
  v116 = 56 * v7; /*0x100874f60*/
  while ( 1 ) /*0x100874f7d*/
  {
    v13 = *(_QWORD *)(v9 + v12); /*0x100874f7d*/
    v14 = *(volatile signed __int64 ***)(v9 + v12 + 8); /*0x100874f82*/
    v141 = *(_QWORD *)(v9 + v12 + 48); /*0x100874f8c*/
    v140 = *(_QWORD *)(v9 + v12 + 40); /*0x100874f98*/
    v139 = *(_QWORD *)(v9 + v12 + 32); /*0x100874fa4*/
    v138 = *(volatile signed __int64 ***)(v9 + v12 + 24); /*0x100874fb0*/
    v137 = *(_QWORD *)(v9 + v12 + 16); /*0x100874fbc*/
    v136 = v14; /*0x100874fc3*/
    if ( __OFSUB__(-v13, 1) ) /*0x100874fd0*/
      break; /*0x100874fd0*/
    v146 = v13; /*0x100874fd6*/
    v152 = v141; /*0x100874feb*/
    v151 = v140; /*0x100874ff6*/
    v150 = v139; /*0x100875001*/
    v149 = v138; /*0x10087500c*/
    v148 = v137; /*0x10087501e*/
    v147 = v136; /*0x100875022*/
    codexmate_lib::core::relay::response_item_id_compat::repair_invalid_ids_in_rollout::h286b8af493142cfd( /*0x100875044*/
      v127,
      v139,
      v140,
      v11,
      v115,
      *(double *)a3.i64);
    if ( LODWORD(v127[0]) == 11 ) /*0x100875050*/
    {
      v129 += v127[1]; /*0x100875059*/
      if ( v146 ) /*0x10087506a*/
        *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, v146, 1); /*0x10087507c*/
    }
    else
    {
      qmemcpy(v145, v127, sizeof(v145)); /*0x10087509f*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008750b0*/
      {
        v132 = &v146; /*0x1008750bd*/
        v133 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008750cb*/
        v134 = (volatile signed __int64 **)v145; /*0x1008750d2*/
        v135 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x1008750e0*/
        v160 = 2; /*0x1008750e7*/
        v161 = (__int64 (__fastcall *)())&anon_0868f19ff3e9f3569e732f60bdb020cc_314; /*0x1008750f6*/
        v162 = 44; /*0x1008750fa*/
        v164 = (volatile signed __int64 **)&unk_1019007AB; /*0x100875109*/
        v165 = &v132; /*0x100875114*/
        v154 = nullptr; /*0x100875118*/
        v155 = (__int64 (__fastcall *)())&anon_0868f19ff3e9f3569e732f60bdb020cc_314; /*0x100875123*/
        v156 = 44; /*0x100875127*/
        v157 = nullptr; /*0x10087512f*/
        v158 = "src/core/relay/codex_diagnostic.rs"; /*0x10087513e*/
        v159 = 34; /*0x100875142*/
        v163 = 0x175500000001LL; /*0x100875154*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v153, &v154); /*0x100875166*/
      }
      v130 = v146; /*0x100875172*/
      v15 = v147; /*0x100875179*/
      v16 = v148; /*0x100875180*/
      v17 = v144; /*0x100875187*/
      if ( v144 == v142 ) /*0x100875195*/
        *(double *)a3.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v142); /*0x10087519e*/
      v18 = v143; /*0x1008751a3*/
      v19 = 3 * v17; /*0x1008751aa*/
      *(_QWORD *)(v143 + 8 * v19) = v130; /*0x1008751b5*/
      *(_QWORD *)(v18 + 8 * v19 + 8) = v15; /*0x1008751b9*/
      *(_QWORD *)(v18 + 8 * v19 + 16) = v16; /*0x1008751be*/
      v144 = v17 + 1; /*0x1008751c6*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v145); /*0x1008751d7*/
      v11 = v128; /*0x1008751dc*/
      v10 = v116; /*0x1008751e3*/
    }
    if ( v149 ) /*0x1008751f4*/
      *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v150, v149, 1); /*0x100875206*/
    v12 += 56; /*0x100874f70*/
    if ( v10 == v12 ) /*0x100874f77*/
      goto LABEL_35; /*0x100874f77*/
  }
  if ( v10 - 56 != v12 ) /*0x1008754ad*/
  {
    v34 = (_QWORD *)(v9 + v12 + 88); /*0x1008754b6*/
    v35 = (v10 - v12 - 56) / 0x38uLL; /*0x1008754cf*/
    do /*0x1008754e7*/
    {
      v36 = *(v34 - 4); /*0x1008754e9*/
      if ( v36 ) /*0x1008754f0*/
        *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v34 - 3), v36, 1); /*0x1008754fb*/
      v37 = *(v34 - 1); /*0x100875500*/
      if ( v37 ) /*0x100875507*/
        *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v34, v37, 1); /*0x100875511*/
      v34 += 7; /*0x1008754e0*/
      --v35; /*0x1008754e4*/
    }
    while ( v35 ); /*0x1008754e7*/
  }
LABEL_35:
  if ( v118 ) /*0x100875522*/
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 56 * v118, 8); /*0x100875530*/
  v38 = &v154; /*0x100875535*/
  v39 = v117; /*0x10087553c*/
  codexmate_lib::core::relay::codex_diagnostic::inspect_thread_response_item_ids::h24bd2fc697033b07(&v154, v117, a3); /*0x100875543*/
  v41 = v154; /*0x100875548*/
  v145[0] = v155; /*0x100875553*/
  v145[1] = v156; /*0x10087555e*/
  v145[2] = v157; /*0x100875569*/
  v145[3] = v158; /*0x100875574*/
  v145[4] = v159; /*0x10087557f*/
  v145[5] = v160; /*0x10087558a*/
  v145[6] = v161; /*0x100875595*/
  v4 = v131; /*0x1008755a0*/
  if ( v154 != (volatile signed __int64 **)11 ) /*0x1008755a7*/
  {
    v131[11] = (volatile signed __int64 **)v165; /*0x10087562b*/
    v4[10] = v164; /*0x100875633*/
    v42 = v162; /*0x100875637*/
    v4[9] = (volatile signed __int64 **)v163; /*0x10087563f*/
    v4[8] = (volatile signed __int64 **)v42; /*0x100875643*/
    v4[7] = (volatile signed __int64 **)v145[6]; /*0x10087564e*/
    v4[6] = (volatile signed __int64 **)v145[5]; /*0x100875659*/
    v4[5] = (volatile signed __int64 **)v145[4]; /*0x100875664*/
    v4[4] = (volatile signed __int64 **)v145[3]; /*0x10087566f*/
    v4[3] = (volatile signed __int64 **)v145[2]; /*0x10087567a*/
    v43 = (volatile signed __int64 **)v145[0]; /*0x10087567e*/
    v4[2] = (volatile signed __int64 **)v145[1]; /*0x10087568c*/
    v4[1] = v43; /*0x100875690*/
    *v4 = v41; /*0x100875694*/
    v44 = v144; /*0x100875698*/
    if ( !v144 ) /*0x1008756a2*/
    {
LABEL_87:
      if ( v142 ) /*0x100875e7b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, 24 * v142, 8); /*0x100875e91*/
      if ( v112 ) /*0x100875ea0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v112, 1); /*0x100875eaa*/
      v22 = v124; /*0x100875eaf*/
LABEL_92:
      v90 = v123; /*0x100875eb6*/
      if ( v22 ) /*0x100875ec0*/
      {
        v91 = (_QWORD *)(v123 + 8); /*0x100875ec2*/
        do /*0x100875ed7*/
        {
          v92 = *(v91 - 1); /*0x100875ed9*/
          if ( v92 ) /*0x100875ee0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v91, v92, 1); /*0x100875eea*/
          v91 += 3; /*0x100875ed0*/
          v22 = (__int64 *)((char *)v22 - 1); /*0x100875ed4*/
        }
        while ( v22 ); /*0x100875ed7*/
      }
      if ( v122 ) /*0x100875efb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, 24 * v122, 8); /*0x100875f0d*/
      return v4; /*0x100875f0d*/
    }
LABEL_83:
    v88 = (_QWORD *)(v143 + 8); /*0x100875e3a*/
    do /*0x100875e57*/
    {
      v89 = *(v88 - 1); /*0x100875e59*/
      if ( v89 ) /*0x100875e60*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v88, v89, 1); /*0x100875e6a*/
      v88 += 3; /*0x100875e50*/
      --v44; /*0x100875e54*/
    }
    while ( v44 ); /*0x100875e57*/
    goto LABEL_87; /*0x100875e57*/
  }
  v127[0] = v145[0]; /*0x1008755b7*/
  v127[1] = v145[1]; /*0x1008755be*/
  v127[2] = v145[2]; /*0x1008755cc*/
  v127[3] = v145[3]; /*0x1008755da*/
  v127[4] = v145[4]; /*0x1008755e8*/
  v127[5] = v145[5]; /*0x1008755f6*/
  v127[6] = v145[6]; /*0x100875604*/
  if ( v144 ) /*0x100875613*/
  {
    if ( !v145[2] ) /*0x10087561c*/
    {
LABEL_73:
      v64 = 0; /*0x100875b8c*/
      v126[0] = 0; /*0x100875b8e*/
      v71 = (__int64 *)v127[5]; /*0x100875b95*/
      if ( !v127[5] ) /*0x100875b9f*/
        goto LABEL_74; /*0x100875b9f*/
      goto LABEL_62; /*0x100875b9f*/
    }
LABEL_54:
    if ( v145[2] >= 4u ) /*0x10087595a*/
    {
      v40 = v145[2] & 0xFFFFFFFFFFFFFFFCLL; /*0x100875965*/
      v65 = (const __m128i *)(v127[1] + 216LL); /*0x100875969*/
      v66 = 0; /*0x100875970*/
      v38 = (volatile signed __int64 ***)(v145[2] & 0xFFFFFFFFFFFFFFFCLL); /*0x100875974*/
      v67 = 0; /*0x100875977*/
      do /*0x1008759b1*/
      {
        v66 = _mm_add_epi64( /*0x100875991*/
                v66,
                _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)((char *)v65 - 168)), _mm_loadl_epi64(v65 - 7)));
        v67 = _mm_add_epi64( /*0x1008759a2*/
                v67,
                _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)((char *)v65 - 56)), _mm_loadl_epi64(v65)));
        v65 += 14; /*0x1008759a6*/
        v38 = (volatile signed __int64 ***)((char *)v38 - 4); /*0x1008759ad*/
      }
      while ( v38 ); /*0x1008759b1*/
      v68 = _mm_add_epi64(v67, v66); /*0x1008759b3*/
      v64 = _mm_add_epi64(_mm_shuffle_epi32(v68, 238), v68).u64[0]; /*0x1008759c0*/
      if ( v145[2] == v40 ) /*0x1008759c8*/
      {
LABEL_61:
        v126[0] = v64; /*0x1008759ec*/
        v71 = (__int64 *)v127[5]; /*0x1008759f3*/
        if ( !v127[5] ) /*0x1008759fd*/
        {
LABEL_74:
          v132 = nullptr; /*0x100875ba5*/
          v133 = 1; /*0x100875bb0*/
          v134 = nullptr; /*0x100875bbb*/
          goto LABEL_75; /*0x100875bbb*/
        }
LABEL_62:
        v132 = v71; /*0x100875a03*/
        v109[0] = v127[4]; /*0x100875a19*/
        v109[1] = v127[4] + 24LL * (_QWORD)v71; /*0x100875a20*/
        v109[2] = 5; /*0x100875a27*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1324bfa397d156de( /*0x100875a40*/
          v145,
          v109);
        v72 = v145[1]; /*0x100875a45*/
        v73 = v145[2]; /*0x100875a4c*/
        alloc::str::join_generic_copy::h877a7dfcc3252013(&v154, v145[1], v145[2], &unk_10178860B, 3); /*0x100875a6d*/
        v148 = v156; /*0x100875a76*/
        v147 = (volatile signed __int64 **)v155; /*0x100875a88*/
        v146 = (__int64)v154; /*0x100875a8f*/
        v154 = (volatile signed __int64 **)&v132; /*0x100875a9d*/
        v155 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100875aab*/
        v156 = (__int64)&v146; /*0x100875ab6*/
        v157 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100875ac1*/
        v38 = &v136; /*0x100875acc*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v136, &unk_101900730, &v154); /*0x100875ada*/
        v64 = v146; /*0x100875adf*/
        if ( v146 ) /*0x100875ae9*/
        {
          v38 = (volatile signed __int64 ***)v147; /*0x100875aeb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, v146, 1); /*0x100875af7*/
        }
        if ( v73 ) /*0x100875aff*/
        {
          v74 = (volatile signed __int64 ****)(v72 + 8); /*0x100875b01*/
          do /*0x100875b17*/
          {
            v64 = (__int64)*(v74 - 1); /*0x100875b19*/
            if ( v64 ) /*0x100875b20*/
            {
              v38 = *v74; /*0x100875b22*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v74, v64, 1); /*0x100875b2a*/
            }
            v74 += 3; /*0x100875b10*/
            --v73; /*0x100875b14*/
          }
          while ( v73 ); /*0x100875b17*/
        }
        if ( v145[0] ) /*0x100875b3b*/
        {
          v64 = 24LL * v145[0]; /*0x100875b41*/
          v38 = (volatile signed __int64 ***)v72; /*0x100875b4a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 24LL * v145[0], 8); /*0x100875b4d*/
        }
        v132 = (__int64 *)v136; /*0x100875b60*/
        v133 = v137; /*0x100875b67*/
        v134 = v138; /*0x100875b75*/
LABEL_75:
        v136 = nullptr; /*0x100875bc6*/
        v137 = 8; /*0x100875bd1*/
        v138 = nullptr; /*0x100875bdc*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v64, v40); /*0x100875be7*/
        v75 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100875bf6*/
        if ( !v75 ) /*0x100875bfe*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100876116*/
        v77 = (volatile signed __int64 **)v75; /*0x100875c04*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8, v76); /*0x100875c07*/
        v78 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100875c16*/
        if ( !v78 ) /*0x100875c1e*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1008761ad*/
        qmemcpy(v78, "thread_response_item_ids", 24); /*0x100875c4a*/
        *v77 = (volatile signed __int64 *)24; /*0x100875c4d*/
        v77[1] = (volatile signed __int64 *)v78; /*0x100875c54*/
        v77[2] = (volatile signed __int64 *)24; /*0x100875c58*/
        v146 = 1; /*0x100875c60*/
        v147 = v77; /*0x100875c6b*/
        v148 = 1; /*0x100875c72*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1, v79); /*0x100875c7d*/
        v80 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100875c8c*/
        if ( !v80 ) /*0x100875c94*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10087612a*/
        v81 = (volatile signed __int64 **)v80; /*0x100875c9a*/
        alloc::str::join_generic_copy::h877a7dfcc3252013(&v154, v143, v144, &unk_10178860B, 3); /*0x100875cbf*/
        v145[2] = v156; /*0x100875cc8*/
        v145[1] = v155; /*0x100875cda*/
        v145[0] = v154; /*0x100875ce1*/
        v154 = (volatile signed __int64 **)&v129; /*0x100875cef*/
        v155 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100875cfd*/
        v156 = (__int64)v126; /*0x100875d08*/
        v157 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100875d0c*/
        v158 = (const char *)v145; /*0x100875d17*/
        v159 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100875d22*/
        v160 = (__int64)&v132; /*0x100875d2d*/
        v161 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100875d31*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v108, &unk_101900751, &v154); /*0x100875d4a*/
        if ( v145[0] ) /*0x100875d59*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145[1], v145[0], 1); /*0x100875d67*/
        v81[2] = (volatile signed __int64 *)v108[2]; /*0x100875d73*/
        v82 = (volatile signed __int64 *)v108[0]; /*0x100875d77*/
        v81[1] = (volatile signed __int64 *)v108[1]; /*0x100875d85*/
        *v81 = v82; /*0x100875d89*/
        v83 = v136; /*0x100875d8c*/
        v84 = v137; /*0x100875d93*/
        v154 = v136; /*0x100875d9a*/
        v155 = (__int64 (__fastcall *)())v137; /*0x100875da1*/
        v85 = v138; /*0x100875da5*/
        v156 = (__int64)v138; /*0x100875dac*/
        v86 = v146; /*0x100875db0*/
        v87 = v147; /*0x100875db7*/
        v157 = (__int64 (__fastcall *)())v146; /*0x100875dbe*/
        v158 = (const char *)v147; /*0x100875dc2*/
        v159 = v148; /*0x100875dcd*/
        v4[6] = (volatile signed __int64 **)v148; /*0x100875dd1*/
        v4[5] = v87; /*0x100875dd5*/
        v4[4] = (volatile signed __int64 **)v86; /*0x100875dd9*/
        v4[3] = v85; /*0x100875ddd*/
        v4[2] = (volatile signed __int64 **)v84; /*0x100875de1*/
        v4[1] = v83; /*0x100875de5*/
        v4[7] = (volatile signed __int64 **)1; /*0x100875de9*/
        v4[8] = v81; /*0x100875df1*/
        v4[9] = (volatile signed __int64 **)1; /*0x100875df5*/
        *v4 = (volatile signed __int64 **)11; /*0x100875dfd*/
        if ( v132 ) /*0x100875e0f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v132, 1); /*0x100875e1d*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..ResponseItemIdInspection$GT$::h7fc4bf2e78a7bc89(v127); /*0x100875e29*/
        v44 = v144; /*0x100875e2e*/
        if ( !v144 ) /*0x100875e38*/
          goto LABEL_87; /*0x100875e38*/
        goto LABEL_83; /*0x100875e38*/
      }
    }
    else
    {
      v40 = 0; /*0x10087595c*/
      v64 = 0; /*0x10087595e*/
    }
    v69 = v145[2] - v40; /*0x1008759ca*/
    v40 *= 56LL; /*0x1008759cd*/
    v70 = (_QWORD *)(v40 + v127[1] + 48); /*0x1008759d1*/
    do /*0x1008759ea*/
    {
      v64 += *v70; /*0x1008759e0*/
      v70 += 7; /*0x1008759e3*/
      --v69; /*0x1008759e7*/
    }
    while ( v69 ); /*0x1008759ea*/
    goto LABEL_61; /*0x1008759ea*/
  }
  if ( v145[2] ) /*0x100875949*/
    goto LABEL_54; /*0x100875949*/
  if ( v127[5] ) /*0x100875b86*/
    goto LABEL_73; /*0x100875b86*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v154, v39, v40); /*0x100875f27*/
  v94 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100875f36*/
  if ( !v94 ) /*0x100875f3e*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10087618b*/
  v96 = (volatile signed __int64 **)v94; /*0x100875f44*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8, v95); /*0x100875f47*/
  v97 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100875f56*/
  if ( !v97 ) /*0x100875f5e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1008761f1*/
  qmemcpy(v97, "thread_response_item_ids", 24); /*0x100875f8a*/
  *v96 = (volatile signed __int64 *)24; /*0x100875f8d*/
  v96[1] = (volatile signed __int64 *)v97; /*0x100875f94*/
  v96[2] = (volatile signed __int64 *)24; /*0x100875f98*/
  v146 = 1; /*0x100875fa0*/
  v147 = v96; /*0x100875fab*/
  v148 = 1; /*0x100875fb2*/
  v145[0] = 0; /*0x100875fbd*/
  v145[1] = 8; /*0x100875fc8*/
  v145[2] = 0; /*0x100875fd3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1, v98); /*0x100875fde*/
  v99 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100875fed*/
  if ( !v99 ) /*0x100875ff5*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10087619c*/
  v100 = (volatile signed __int64 **)v99; /*0x100875ffb*/
  v154 = (volatile signed __int64 **)&v129; /*0x100876005*/
  v155 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100876013*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v107, &unk_1019006BA, &v154); /*0x10087602c*/
  v100[2] = (volatile signed __int64 *)v107[2]; /*0x100876038*/
  v101 = (volatile signed __int64 *)v107[0]; /*0x10087603c*/
  v100[1] = (volatile signed __int64 *)v107[1]; /*0x10087604a*/
  *v100 = v101; /*0x10087604e*/
  v102 = v146; /*0x100876051*/
  v103 = v147; /*0x100876058*/
  v154 = (volatile signed __int64 **)v146; /*0x10087605f*/
  v155 = (__int64 (__fastcall *)())v147; /*0x100876066*/
  v104 = v148; /*0x10087606a*/
  v156 = v148; /*0x100876071*/
  v105 = (volatile signed __int64 **)v145[0]; /*0x100876075*/
  v106 = (volatile signed __int64 **)v145[1]; /*0x10087607c*/
  v157 = (__int64 (__fastcall *)())v145[0]; /*0x100876083*/
  v158 = (const char *)v145[1]; /*0x100876087*/
  v159 = v145[2]; /*0x100876092*/
  v4[6] = (volatile signed __int64 **)v145[2]; /*0x100876096*/
  v4[5] = v106; /*0x10087609a*/
  v4[4] = v105; /*0x10087609e*/
  v4[3] = (volatile signed __int64 **)v104; /*0x1008760a2*/
  v4[2] = v103; /*0x1008760a6*/
  v4[1] = (volatile signed __int64 **)v102; /*0x1008760aa*/
  v4[7] = (volatile signed __int64 **)1; /*0x1008760ae*/
  v4[8] = v100; /*0x1008760b6*/
  v4[9] = (volatile signed __int64 **)1; /*0x1008760ba*/
  *v4 = (volatile signed __int64 **)11; /*0x1008760c2*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..ResponseItemIdInspection$GT$::h7fc4bf2e78a7bc89(v127); /*0x1008760d1*/
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(&v142); /*0x1008760dd*/
  if ( v112 ) /*0x1008760ec*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v112, 1); /*0x1008760f6*/
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(&v122); /*0x100876102*/
  return v4; /*0x100875f15*/
}
