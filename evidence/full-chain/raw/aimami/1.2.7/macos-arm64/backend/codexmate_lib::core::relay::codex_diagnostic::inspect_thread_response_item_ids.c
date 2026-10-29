// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_diagnostic::inspect_thread_response_item_ids::h24bd2fc697033b07; addr: 0x100882f40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::codex_diagnostic::inspect_thread_response_item_ids::h24bd2fc697033b07(
        volatile signed __int64 ***a1,
        __int64 a2,
        __m128i si128)
{
  __int64 v3; // rdx
  volatile signed __int64 **v4; // rax
  volatile signed __int64 *v5; // r14
  __int64 v6; // rax
  const char *v7; // rcx
  volatile signed __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rdx
  void **v14; // r13
  void **v15; // rdi
  void **v16; // rax
  volatile signed __int64 **v17; // r14
  void **v18; // rdx
  volatile signed __int64 *v19; // rsi
  __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  volatile signed __int64 *v22; // r8
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rcx
  volatile signed __int64 **v27; // rdx
  size_t v28; // rbx
  volatile signed __int64 **v29; // rsi
  size_t v30; // r12
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rcx
  volatile signed __int64 **v35; // rdx
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 *v41; // rax
  __int64 v42; // rcx
  volatile signed __int64 **v43; // rdx
  __int64 v44; // rsi
  unsigned __int128 v45; // rax
  unsigned __int64 v46; // rbx
  volatile signed __int64 **v47; // rbx
  unsigned __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // rax
  volatile signed __int64 **v51; // rdi
  __int64 v52; // rdx
  volatile signed __int64 ***v53; // rsi
  volatile signed __int64 **v54; // rdi
  __int64 v55; // rax
  __int64 *v56; // r14
  __int64 v57; // r12
  __int64 *v58; // r13
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rbx
  volatile signed __int64 *v63; // rdx
  unsigned __int64 v64; // rcx
  const void *v65; // rsi
  size_t v66; // rdx
  __int64 v67; // rax
  void **v68; // r15
  void **v69; // rax
  __int64 v70; // rax
  volatile signed __int64 *v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rcx
  volatile signed __int64 **v74; // rdx
  __int64 v75; // rbx
  void **v76; // r15
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned __int64 v79; // r13
  unsigned __int64 v80; // r13
  __int64 v81; // rsi
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  volatile signed __int64 ***v84; // rdx
  volatile signed __int64 *v85; // rax
  __int64 v86; // rbx
  volatile signed __int64 *v87; // r14
  _QWORD *v88; // r15
  __int64 v89; // rsi
  __int64 v91; // rbx
  __int64 v92; // r14
  const __m128i *v93; // r15
  const __m128i *v95; // r12
  int v96; // r13d
  __int64 v97; // rax
  __int64 v98; // rsi
  unsigned __int64 v99; // rax
  __int64 v100; // rbx
  unsigned __int64 v101; // rbx
  _QWORD *v102; // r14
  __int64 v103; // rsi
  void **v105; // [rsp+0h] [rbp-250h] BYREF
  volatile signed __int64 *v106; // [rsp+8h] [rbp-248h]
  __int64 v107; // [rsp+10h] [rbp-240h]
  const __m128i *v108; // [rsp+18h] [rbp-238h] BYREF
  __int64 v109; // [rsp+20h] [rbp-230h]
  __int64 v110; // [rsp+28h] [rbp-228h]
  __int64 v111; // [rsp+30h] [rbp-220h]
  __int64 v112; // [rsp+38h] [rbp-218h]
  __int64 v113; // [rsp+40h] [rbp-210h]
  volatile signed __int64 *v114; // [rsp+48h] [rbp-208h]
  volatile signed __int64 *v115; // [rsp+50h] [rbp-200h]
  volatile signed __int64 *v116; // [rsp+58h] [rbp-1F8h]
  volatile signed __int64 *v117; // [rsp+60h] [rbp-1F0h]
  volatile signed __int64 ***v118; // [rsp+68h] [rbp-1E8h]
  volatile signed __int64 *v119; // [rsp+70h] [rbp-1E0h] BYREF
  __int64 (__fastcall *v120)(); // [rsp+78h] [rbp-1D8h]
  void ***v121; // [rsp+80h] [rbp-1D0h]
  __int64 (__fastcall *v122)(); // [rsp+88h] [rbp-1C8h]
  void **v123; // [rsp+90h] [rbp-1C0h]
  void **v124; // [rsp+98h] [rbp-1B8h]
  __int64 *v125; // [rsp+A0h] [rbp-1B0h]
  __int64 *v126; // [rsp+A8h] [rbp-1A8h]
  void *v127; // [rsp+B0h] [rbp-1A0h]
  __int64 *v128; // [rsp+B8h] [rbp-198h]
  void **v129; // [rsp+C0h] [rbp-190h]
  void **v130; // [rsp+C8h] [rbp-188h]
  void **v131; // [rsp+D0h] [rbp-180h]
  volatile signed __int64 **v132; // [rsp+D8h] [rbp-178h] BYREF
  volatile signed __int64 *v133; // [rsp+E0h] [rbp-170h]
  __int64 v134; // [rsp+E8h] [rbp-168h]
  volatile signed __int64 *v135; // [rsp+F0h] [rbp-160h] BYREF
  __int64 v136; // [rsp+F8h] [rbp-158h]
  volatile signed __int64 *v137; // [rsp+100h] [rbp-150h]
  __int64 v138; // [rsp+108h] [rbp-148h] BYREF
  __int64 v139; // [rsp+110h] [rbp-140h]
  unsigned __int64 v140; // [rsp+118h] [rbp-138h]
  void **v141; // [rsp+120h] [rbp-130h]
  __int64 v142; // [rsp+128h] [rbp-128h]
  unsigned __int64 v143; // [rsp+130h] [rbp-120h]
  void **v144; // [rsp+138h] [rbp-118h]
  void *v145; // [rsp+140h] [rbp-110h] BYREF
  __int64 *v146; // [rsp+148h] [rbp-108h]
  __int64 v147; // [rsp+150h] [rbp-100h]
  void **v148; // [rsp+158h] [rbp-F8h]
  void *__src; // [rsp+160h] [rbp-F0h]
  volatile signed __int64 **v150; // [rsp+168h] [rbp-E8h] BYREF
  volatile signed __int64 *v151; // [rsp+170h] [rbp-E0h]
  __int64 v152; // [rsp+178h] [rbp-D8h]
  volatile signed __int64 *v153; // [rsp+180h] [rbp-D0h]
  const char *v154; // [rsp+188h] [rbp-C8h]
  __int64 v155; // [rsp+190h] [rbp-C0h]
  __int64 v156; // [rsp+198h] [rbp-B8h]
  volatile signed __int64 **v157; // [rsp+1A0h] [rbp-B0h]
  __int64 v158; // [rsp+1A8h] [rbp-A8h]
  __int64 v159; // [rsp+1B0h] [rbp-A0h]
  volatile signed __int64 **v160; // [rsp+1B8h] [rbp-98h]
  volatile signed __int64 **v161; // [rsp+1C0h] [rbp-90h]
  volatile signed __int64 **v162; // [rsp+1C8h] [rbp-88h]
  volatile signed __int64 *v163; // [rsp+1D0h] [rbp-80h]
  volatile signed __int64 *v164; // [rsp+1D8h] [rbp-78h] BYREF
  __int64 v165; // [rsp+1E0h] [rbp-70h]
  volatile signed __int64 *v166; // [rsp+1E8h] [rbp-68h] BYREF
  void **v167; // [rsp+1F0h] [rbp-60h] BYREF
  __int64 v168; // [rsp+1F8h] [rbp-58h]
  void **v169; // [rsp+200h] [rbp-50h]
  volatile signed __int64 **v170; // [rsp+208h] [rbp-48h]
  __int64 v171; // [rsp+210h] [rbp-40h]
  size_t v172; // [rsp+218h] [rbp-38h]
  _BYTE v173[41]; // [rsp+227h] [rbp-29h] BYREF

  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h77c8e8996f4c34a7(&v150, a2); /*0x100882f5e*/
  v4 = v150; /*0x100882f63*/
  v164 = v151; /*0x100882f71*/
  v165 = v152; /*0x100882f7c*/
  v166 = v153; /*0x100882f87*/
  if ( v150 == (volatile signed __int64 **)11 ) /*0x100882f8f*/
  {
    v114 = v164; /*0x100882f99*/
    v115 = (volatile signed __int64 *)v165; /*0x100882fa0*/
    v5 = v166; /*0x100882fa7*/
    v116 = v166; /*0x100882fab*/
    if ( v166 ) /*0x100882fb5*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v150, a2, v3); /*0x100882fc2*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32LL * (_QWORD)v5, 8); /*0x100882fcf*/
      if ( !v6 ) /*0x100882fd7*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 32LL * (_QWORD)v5); /*0x100882fe5*/
    }
    else
    {
      v6 = 8; /*0x100883067*/
    }
    v145 = (void *)v5; /*0x10088306c*/
    v146 = (__int64 *)v6; /*0x100883073*/
    v147 = 0; /*0x10088307a*/
    v138 = 0; /*0x100883085*/
    v139 = 8; /*0x100883090*/
    v140 = 0; /*0x10088309b*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008830ad*/
    v10 = v9; /*0x1008830af*/
    v11 = *(_BYTE *)(v9 + 16) == 1; /*0x1008830b2*/
    v118 = a1; /*0x1008830b6*/
    if ( v11 ) /*0x1008830bd*/
    {
      v12 = *(_QWORD *)v9; /*0x1008830c3*/
      v13 = *(_QWORD *)(v10 + 8); /*0x1008830c6*/
    }
    else
    {
      v12 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)si128.i64); /*0x100884108*/
      *(_QWORD *)v10 = v12; /*0x10088410d*/
      *(_QWORD *)(v10 + 8) = v13; /*0x100884110*/
      *(_BYTE *)(v10 + 16) = 1; /*0x100884114*/
    }
    *(_QWORD *)v10 = v12 + 1; /*0x1008830ce*/
    v14 = (void **)v115; /*0x1008830d8*/
    v15 = (void **)&v115[22 * (_QWORD)v5]; /*0x1008830e6*/
    v111 = 0; /*0x1008830f0*/
    v110 = 0; /*0x1008830fe*/
    v109 = 0; /*0x10088310c*/
    v108 = (const __m128i *)&xmmword_1016F24C0; /*0x10088311a*/
    v112 = v12; /*0x10088312b*/
    v113 = v13; /*0x100883132*/
    v164 = v115; /*0x100883139*/
    v165 = (__int64)v115; /*0x10088313d*/
    v117 = v114; /*0x100883141*/
    v166 = v114; /*0x100883148*/
    v131 = v15; /*0x10088314c*/
    v167 = v15; /*0x100883153*/
    v124 = (void **)v115; /*0x100883157*/
    if ( v5 ) /*0x100883161*/
    {
      v14 = v124 + 22; /*0x10088316e*/
      while ( 1 ) /*0x1008831c6*/
      {
        v17 = (volatile signed __int64 **)*(v14 - 22); /*0x1008831c6*/
        if ( v17 == (volatile signed __int64 **)0x8000000000000000LL ) /*0x1008831d0*/
        {
LABEL_50:
          v165 = (__int64)v14; /*0x100883622*/
          goto LABEL_51; /*0x100883622*/
        }
        v18 = (void **)*(v14 - 21); /*0x1008831d6*/
        v19 = (volatile signed __int64 *)*(v14 - 19); /*0x1008831dd*/
        v15 = (void **)*(v14 - 18); /*0x1008831e4*/
        v20 = (__int64)*(v14 - 17); /*0x1008831eb*/
        v21 = (unsigned __int64)*(v14 - 16); /*0x1008831f2*/
        v141 = (void **)*(v14 - 15); /*0x1008831fa*/
        v22 = (volatile signed __int64 *)*(v14 - 13); /*0x100883201*/
        v171 = (__int64)*(v14 - 10); /*0x100883209*/
        v130 = (void **)*(v14 - 9); /*0x100883211*/
        v172 = (size_t)*(v14 - 7); /*0x10088321c*/
        v129 = (void **)*(v14 - 6); /*0x100883224*/
        v23 = (__int64)*(v14 - 4); /*0x10088322b*/
        v123 = (void **)*(v14 - 3); /*0x100883233*/
        v163 = v22; /*0x10088323a*/
        v143 = v21; /*0x100883241*/
        v148 = v18; /*0x100883248*/
        v162 = (volatile signed __int64 **)v19; /*0x10088324f*/
        v144 = v15; /*0x100883256*/
        if ( v22 == (volatile signed __int64 *)0x8000000000000000LL ) /*0x10088325d*/
          break; /*0x10088325d*/
        v142 = v23; /*0x100883310*/
        __src = *(v14 - 12); /*0x10088331b*/
        v30 = (size_t)*(v14 - 11); /*0x100883322*/
        if ( v30 ) /*0x100883329*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v19, v18); /*0x10088332b*/
          v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1); /*0x10088333d*/
          if ( !v31 ) /*0x100883343*/
          {
            v165 = (__int64)v14; /*0x100884154*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v30); /*0x100884160*/
          }
        }
        else
        {
          v31 = 1; /*0x10088334a*/
        }
        memcpy((void *)v31, __src, v30); /*0x10088335d*/
        v150 = (volatile signed __int64 **)v30; /*0x100883362*/
        v151 = (volatile signed __int64 *)v31; /*0x100883369*/
        v152 = v30; /*0x100883370*/
        v15 = (void **)&v108; /*0x100883377*/
        if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h62a3ac88aaa81a14(&v108, &v150) ) /*0x100883385*/
        {
          v150 = (volatile signed __int64 **)0x8000000000000001LL; /*0x1008833a0*/
          v32 = v147; /*0x1008833a7*/
          if ( (void *)v147 == v145 ) /*0x1008833b5*/
          {
            v15 = &v145; /*0x1008833b7*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfa48d394a59d3067(&v145); /*0x1008833be*/
          }
          v33 = v146; /*0x1008833c3*/
          v34 = 4 * v32; /*0x1008833cd*/
          v146[v34 + 3] = (__int64)v153; /*0x1008833d8*/
          v33[v34 + 2] = v152; /*0x1008833e4*/
          v35 = v150; /*0x1008833e9*/
          v33[v34 + 1] = (__int64)v151; /*0x1008833f7*/
          v33[v34] = (__int64)v35; /*0x1008833fc*/
          v147 = v32 + 1; /*0x100883403*/
          v23 = v142; /*0x100883411*/
          if ( v163 ) /*0x100883418*/
          {
            v15 = (void **)__src; /*0x10088341f*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v163, 1); /*0x100883426*/
          }
          v28 = v172; /*0x10088342e*/
          if ( v17 ) /*0x100883432*/
          {
            v15 = v148; /*0x100883439*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, v17, 1); /*0x100883443*/
          }
          v29 = v162; /*0x100883448*/
          if ( v162 ) /*0x100883452*/
          {
            v15 = v144; /*0x100883459*/
LABEL_32:
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v29, 1); /*0x100883460*/
          }
LABEL_33:
          v36 = v143; /*0x100883465*/
          if ( !v143 ) /*0x10088346f*/
            goto LABEL_35; /*0x10088346f*/
LABEL_34:
          v15 = v141; /*0x100883471*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v36, 1); /*0x10088347d*/
          goto LABEL_35; /*0x10088347d*/
        }
        v37 = v140; /*0x100883500*/
        if ( v140 == v138 ) /*0x10088350e*/
        {
          v15 = (void **)&v138; /*0x100883510*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v138); /*0x100883517*/
        }
        v38 = v139; /*0x10088351c*/
        v39 = 3 * v37; /*0x100883523*/
        *(_QWORD *)(v139 + 8 * v39) = v163; /*0x10088352b*/
        *(_QWORD *)(v38 + 8 * v39 + 8) = __src; /*0x100883536*/
        *(_QWORD *)(v38 + 8 * v39 + 16) = v30; /*0x10088353b*/
        v140 = v37 + 1; /*0x100883544*/
        v150 = v162; /*0x100883552*/
        v151 = (volatile signed __int64 *)v144; /*0x100883560*/
        v152 = v20; /*0x100883567*/
        v153 = (volatile signed __int64 *)v37; /*0x10088356e*/
        v40 = v147; /*0x100883575*/
        if ( (void *)v147 == v145 ) /*0x100883583*/
        {
          v15 = &v145; /*0x100883585*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfa48d394a59d3067(&v145); /*0x10088358c*/
        }
        v41 = v146; /*0x100883591*/
        v42 = 4 * v40; /*0x10088359b*/
        v146[v42 + 3] = (__int64)v153; /*0x1008835a6*/
        v41[v42 + 2] = v152; /*0x1008835b2*/
        v43 = v150; /*0x1008835b7*/
        v41[v42 + 1] = (__int64)v151; /*0x1008835c5*/
        v41[v42] = (__int64)v43; /*0x1008835ca*/
        v147 = v40 + 1; /*0x1008835d1*/
        v23 = v142; /*0x1008835e5*/
        if ( v17 ) /*0x1008835ec*/
        {
          v15 = v148; /*0x1008835f3*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, v17, 1); /*0x1008835fd*/
        }
        v36 = v143; /*0x100883602*/
        v28 = v172; /*0x10088360c*/
        if ( v143 ) /*0x100883610*/
          goto LABEL_34; /*0x100883610*/
LABEL_35:
        if ( 2 * v171 ) /*0x100883486*/
        {
          v15 = v130; /*0x1008834b5*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v171, 1); /*0x1008834bc*/
          if ( 2 * v28 ) /*0x1008834c1*/
          {
LABEL_11:
            v15 = v129; /*0x100883180*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v28, 1); /*0x10088318f*/
            if ( 2 * v23 ) /*0x100883194*/
              goto LABEL_40; /*0x10088319f*/
            goto LABEL_12; /*0x10088319f*/
          }
        }
        else if ( 2 * v28 ) /*0x100883493*/
        {
          goto LABEL_11; /*0x10088349e*/
        }
        if ( 2 * v23 ) /*0x1008834d2*/
        {
LABEL_40:
          v15 = v123; /*0x1008834e3*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v123, v23, 1); /*0x1008834f2*/
        }
LABEL_12:
        v16 = v14 - 22; /*0x1008831a5*/
        v14 += 22; /*0x1008831ac*/
        if ( v16 + 22 == v131 ) /*0x1008831c0*/
        {
          v14 = v131; /*0x10088361b*/
          goto LABEL_50; /*0x10088361b*/
        }
      }
      v151 = v19; /*0x100883263*/
      v152 = (__int64)v15; /*0x10088326a*/
      v153 = (volatile signed __int64 *)v20; /*0x100883271*/
      v150 = (volatile signed __int64 **)0x8000000000000000LL; /*0x100883278*/
      v24 = v147; /*0x10088327f*/
      if ( (void *)v147 == v145 ) /*0x10088328d*/
      {
        v15 = &v145; /*0x10088328f*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfa48d394a59d3067(&v145); /*0x100883296*/
      }
      v25 = v146; /*0x10088329b*/
      v26 = 4 * v24; /*0x1008832a5*/
      v146[v26 + 3] = (__int64)v153; /*0x1008832b0*/
      v25[v26 + 2] = v152; /*0x1008832bc*/
      v27 = v150; /*0x1008832c1*/
      v25[v26 + 1] = (__int64)v151; /*0x1008832cf*/
      v25[v26] = (__int64)v27; /*0x1008832d4*/
      v147 = v24 + 1; /*0x1008832db*/
      v28 = v172; /*0x1008832e5*/
      if ( v17 ) /*0x1008832e9*/
      {
        v15 = v148; /*0x1008832f4*/
        v29 = v17; /*0x1008832fb*/
        goto LABEL_32; /*0x1008832fe*/
      }
      goto LABEL_33; /*0x1008832e9*/
    }
LABEL_51:
    v44 = (__int64)v131; /*0x100883626*/
    v45 = 0x2E8BA2E8BA2E8BA3LL * (unsigned __int128)(unsigned __int64)((char *)v131 - (char *)v14); /*0x10088363d*/
    if ( v131 != v14 ) /*0x100883643*/
    {
      v46 = ((char *)v131 - (char *)v14) / 0xB0uLL; /*0x100883648*/
      do /*0x100883662*/
      {
        v15 = v14; /*0x100883650*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::h6f2c4d672fa81d90( /*0x100883653*/
          v14,
          v44);
        v14 += 22; /*0x100883658*/
        --v46; /*0x10088365f*/
      }
      while ( v46 ); /*0x100883662*/
    }
    if ( v117 ) /*0x10088366e*/
    {
      v44 = 176LL * (_QWORD)v117; /*0x100883670*/
      v15 = v124; /*0x10088367c*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, 176LL * (_QWORD)v117, 8); /*0x100883683*/
    }
    v47 = (volatile signed __int64 **)v139; /*0x100883688*/
    v48 = v140; /*0x10088368f*/
    if ( v140 >= 8 ) /*0x10088369a*/
    {
      v150 = nullptr; /*0x1008836de*/
      v152 = 4; /*0x1008836e9*/
      v153 = nullptr; /*0x1008836f4*/
      v155 = 1; /*0x1008836ff*/
      v156 = (__int64)&anon_d9d2f5b2094eba1d5a276dc1a2756762_10; /*0x100883711*/
      v157 = nullptr; /*0x100883718*/
      v159 = 0; /*0x100883723*/
      LOWORD(v161) = 0; /*0x10088372e*/
      v51 = &v164; /*0x100883742*/
      rayon_core::registry::Registry::new::hd25ab9d26de5ca1a(&v164, &v150, *((_QWORD *)&v45 + 1)); /*0x100883745*/
      v53 = (volatile signed __int64 ***)v165; /*0x10088374e*/
      if ( v164 == (volatile signed __int64 *)3 ) /*0x100883756*/
      {
        v164 = (volatile signed __int64 *)v165; /*0x100883758*/
        v150 = v47; /*0x100883760*/
        v151 = (volatile signed __int64 *)v48; /*0x100883767*/
        v152 = (__int64)v173; /*0x100883772*/
        rayon_core::registry::Registry::in_worker::h50571523b2e146fc(&v135, v165 + 128, &v150); /*0x100883787*/
        v54 = &v164; /*0x10088378c*/
        _$LT$rayon_core..thread_pool..ThreadPool$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha4b9412e9655f829(&v164); /*0x100883790*/
        if ( !_InterlockedDecrement64(v164) ) /*0x100883799*/
        {
          v54 = &v164; /*0x1008837a3*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde6f8c6f6f4c92ed(&v164); /*0x1008837a7*/
        }
      }
      else
      {
        v119 = v164; /*0x1008837b1*/
        v120 = (__int64 (__fastcall *)())v165; /*0x1008837b8*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008837cd*/
        {
          v164 = (volatile signed __int64 *)&v119; /*0x1008837da*/
          v165 = (__int64)_$LT$rayon_core..ThreadPoolBuildError$u20$as$u20$core..fmt..Display$GT$::fmt::h6af0e53b3a5f6f50; /*0x1008837e5*/
          v156 = 2; /*0x1008837e9*/
          v157 = (volatile signed __int64 **)&anon_0868f19ff3e9f3569e732f60bdb020cc_314; /*0x1008837fb*/
          v158 = 44; /*0x100883802*/
          v160 = (volatile signed __int64 **)&unk_101900109; /*0x100883814*/
          v161 = &v164; /*0x10088381b*/
          v150 = nullptr; /*0x100883822*/
          v151 = (volatile signed __int64 *)&anon_0868f19ff3e9f3569e732f60bdb020cc_314; /*0x10088382d*/
          v152 = 44; /*0x100883834*/
          v153 = nullptr; /*0x10088383f*/
          v154 = "src/core/relay/codex_diagnostic.rs"; /*0x100883851*/
          v155 = 34; /*0x100883858*/
          v159 = 0x16CC00000001LL; /*0x10088386d*/
          v51 = (volatile signed __int64 **)v173; /*0x100883874*/
          v53 = &v150; /*0x100883878*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, &v150); /*0x10088387f*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v53, v52); /*0x100883890*/
        v55 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v48, 8); /*0x10088389d*/
        if ( !v55 ) /*0x1008838a5*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 24 * v48); /*0x100884185*/
        v164 = (volatile signed __int64 *)v48; /*0x1008838ae*/
        v165 = v55; /*0x1008838b2*/
        v166 = nullptr; /*0x1008838ba*/
        v152 = v55; /*0x1008838c2*/
        v150 = &v166; /*0x1008838c9*/
        v151 = nullptr; /*0x1008838d0*/
        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h5a25d4b441664550( /*0x1008838e8*/
          v47,
          &v47[3 * v48],
          &v150);
        v135 = v164; /*0x1008838f5*/
        v136 = v165; /*0x1008838fc*/
        v137 = v166; /*0x100883907*/
        v54 = (volatile signed __int64 **)v119; /*0x10088390e*/
        core::ptr::drop_in_place$LT$rayon_core..ThreadPoolBuildError$GT$::h0da18503b5620f99(v119, v120); /*0x10088391c*/
      }
    }
    else
    {
      v49 = 3 * v140; /*0x1008836a4*/
      if ( v140 ) /*0x1008836ab*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v44, *((_QWORD *)&v45 + 1)); /*0x1008836b1*/
        v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v48, 8); /*0x1008836be*/
        if ( !v50 ) /*0x1008836c6*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 24 * v48); /*0x1008836d4*/
      }
      else
      {
        v50 = 8; /*0x100883923*/
      }
      v164 = (volatile signed __int64 *)v48; /*0x10088392b*/
      v165 = v50; /*0x10088392f*/
      v166 = nullptr; /*0x100883937*/
      v152 = v50; /*0x10088393f*/
      v150 = &v166; /*0x100883946*/
      v151 = nullptr; /*0x10088394d*/
      v54 = v47; /*0x10088395f*/
      _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h5a25d4b441664550( /*0x100883965*/
        v47,
        &v47[v49],
        &v150);
      v135 = v164; /*0x100883972*/
      v136 = v165; /*0x100883979*/
      v137 = v166; /*0x100883984*/
    }
    v170 = nullptr; /*0x100883995*/
    v164 = nullptr; /*0x10088399d*/
    v165 = 8; /*0x1008839a5*/
    v166 = nullptr; /*0x1008839ad*/
    v167 = nullptr; /*0x1008839b5*/
    v168 = 8; /*0x1008839bd*/
    v169 = nullptr; /*0x1008839c5*/
    v56 = v146; /*0x1008839d4*/
    v57 = 32 * v147; /*0x1008839e5*/
    v58 = &v146[4 * v147]; /*0x1008839e9*/
    v125 = v146; /*0x1008839ed*/
    v126 = v146; /*0x1008839f4*/
    __src = v145; /*0x1008839fb*/
    v127 = v145; /*0x100883a02*/
    v128 = v58; /*0x100883a09*/
    v144 = (void **)v146; /*0x100883a10*/
    if ( v147 ) /*0x100883a1a*/
    {
      v141 = (void **)v136; /*0x100883a27*/
      v148 = (void **)v137; /*0x100883a35*/
      v56 = (__int64 *)(v144 + 4); /*0x100883a43*/
      v143 = 0x8000000000000002LL; /*0x100883a4b*/
      while ( 1 ) /*0x100883a9d*/
      {
        v61 = *(v56 - 4); /*0x100883a9d*/
        if ( v61 == v143 ) /*0x100883aa8*/
          break; /*0x100883aa8*/
        v62 = *(v56 - 1); /*0x100883aae*/
        v63 = (volatile signed __int64 *)*(v56 - 3); /*0x100883ab6*/
        v107 = *(v56 - 2); /*0x100883abd*/
        v106 = v63; /*0x100883ac4*/
        v64 = v61 ^ 0x8000000000000000LL; /*0x100883ace*/
        if ( v61 >= 0 ) /*0x100883ad9*/
          v64 = 2; /*0x100883ad9*/
        if ( v64 ) /*0x100883ae0*/
        {
          if ( v64 != 1 ) /*0x100883aea*/
          {
            v132 = (volatile signed __int64 **)v61; /*0x100883aec*/
            v170 = (volatile signed __int64 **)((char *)v170 + 1); /*0x100883b01*/
            v134 = v107; /*0x100883b0c*/
            v133 = v106; /*0x100883b10*/
            if ( v62 >= v140 ) /*0x100883b1d*/
            {
              v126 = v56; /*0x10088411d*/
              core::panicking::panic_bounds_check::h56740b1198b22635(v62, v140, &off_101AB6728); /*0x10088412e*/
            }
            v65 = *(const void **)(v139 + 24 * v62 + 8); /*0x100883b2e*/
            v172 = *(_QWORD *)(v139 + 24 * v62 + 16); /*0x100883b3b*/
            v66 = v172; /*0x100883b33*/
            if ( v172 ) /*0x100883b3f*/
            {
              v171 = (__int64)v65; /*0x100883b41*/
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v65, v172); /*0x100883b45*/
              v67 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v172, 1); /*0x100883b53*/
              v65 = (const void *)v171; /*0x100883b58*/
              v66 = v172; /*0x100883b5c*/
              if ( !v67 ) /*0x100883b63*/
              {
                v126 = v56; /*0x100884167*/
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v172); /*0x100884176*/
              }
            }
            else
            {
              v67 = 1; /*0x100883b9c*/
            }
            v171 = v67; /*0x100883ba1*/
            v54 = (volatile signed __int64 **)v67; /*0x100883ba5*/
            memcpy((void *)v67, v65, v66); /*0x100883ba8*/
            if ( v62 >= (unsigned __int64)v148 ) /*0x100883bb4*/
            {
              v126 = v56; /*0x100884135*/
              core::panicking::panic_bounds_check::h56740b1198b22635(v62, v148, &off_101AB6740); /*0x10088414d*/
            }
            v69 = &v141[3 * v62]; /*0x100883bc1*/
            if ( *v69 == (void *)0x8000000000000000LL ) /*0x100883bd3*/
            {
              v70 = (__int64)v69[1]; /*0x100883bdc*/
              if ( v70 ) /*0x100883be3*/
              {
                v152 = v134; /*0x100883bf0*/
                v151 = v133; /*0x100883c05*/
                v150 = v132; /*0x100883c0c*/
                v153 = (volatile signed __int64 *)v172; /*0x100883c17*/
                v154 = (const char *)v171; /*0x100883c22*/
                v155 = v172; /*0x100883c29*/
                v156 = v70; /*0x100883c30*/
                v71 = v166; /*0x100883c37*/
                if ( v166 == v164 ) /*0x100883c3f*/
                {
                  v54 = &v164; /*0x100883c41*/
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hee0e70b5f45a4e45(&v164); /*0x100883c45*/
                }
                v72 = v165; /*0x100883c4a*/
                v73 = 56LL * (_QWORD)v71; /*0x100883c4e*/
                *(_QWORD *)(v165 + v73 + 48) = v156; /*0x100883c59*/
                *(_QWORD *)(v72 + v73 + 40) = v155; /*0x100883c65*/
                *(_QWORD *)(v72 + v73 + 32) = v154; /*0x100883c71*/
                *(_QWORD *)(v72 + v73 + 24) = v153; /*0x100883c7d*/
                *(_QWORD *)(v72 + v73 + 16) = v152; /*0x100883c89*/
                v74 = v150; /*0x100883c8e*/
                *(_QWORD *)(v72 + v73 + 8) = v151; /*0x100883c9c*/
                *(_QWORD *)(v72 + v73) = v74; /*0x100883ca1*/
                v166 = (volatile signed __int64 *)((char *)v71 + 1); /*0x100883ca8*/
              }
              else
              {
                if ( v172 ) /*0x100883e33*/
                {
                  v54 = (volatile signed __int64 **)v171; /*0x100883e3a*/
                  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v172, 1); /*0x100883e3e*/
                }
                if ( v132 ) /*0x100883e4d*/
                {
                  v54 = (volatile signed __int64 **)v133; /*0x100883e53*/
                  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v132, 1); /*0x100883e5f*/
                }
              }
            }
            else
            {
              v105 = &v141[3 * v62]; /*0x100883cb1*/
              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100883cc6*/
              {
                v119 = (volatile signed __int64 *)&v132; /*0x100883cd3*/
                v120 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100883ce1*/
                v121 = &v105; /*0x100883cef*/
                v122 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1d0e7a253d9414a9; /*0x100883cfd*/
                v156 = 2; /*0x100883d04*/
                v157 = (volatile signed __int64 **)&anon_0868f19ff3e9f3569e732f60bdb020cc_314; /*0x100883d16*/
                v158 = 44; /*0x100883d1d*/
                v160 = (volatile signed __int64 **)&unk_101901980; /*0x100883d2f*/
                v161 = &v119; /*0x100883d3d*/
                v150 = nullptr; /*0x100883d44*/
                v151 = (volatile signed __int64 *)&anon_0868f19ff3e9f3569e732f60bdb020cc_314; /*0x100883d4f*/
                v152 = 44; /*0x100883d56*/
                v153 = nullptr; /*0x100883d61*/
                v154 = "src/core/relay/codex_diagnostic.rs"; /*0x100883d73*/
                v155 = 34; /*0x100883d7a*/
                v159 = 0x16AB00000001LL; /*0x100883d8f*/
                v54 = (volatile signed __int64 **)v173; /*0x100883d96*/
                _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, &v150); /*0x100883da1*/
              }
              v162 = v132; /*0x100883dad*/
              v163 = v133; /*0x100883dbb*/
              v75 = v134; /*0x100883dbf*/
              v76 = v169; /*0x100883dc6*/
              if ( v169 == v167 ) /*0x100883dce*/
              {
                v54 = (volatile signed __int64 **)&v167; /*0x100883dd0*/
                *(double *)si128.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v167); /*0x100883dd4*/
              }
              v77 = v168; /*0x100883ddd*/
              v78 = 3LL * (_QWORD)v76; /*0x100883de1*/
              *(_QWORD *)(v168 + 8 * v78) = v162; /*0x100883dec*/
              *(_QWORD *)(v77 + 8 * v78 + 8) = v163; /*0x100883df4*/
              *(_QWORD *)(v77 + 8 * v78 + 16) = v75; /*0x100883df9*/
              v169 = (void **)((char *)v76 + 1); /*0x100883dfe*/
              if ( v172 ) /*0x100883e13*/
              {
                v54 = (volatile signed __int64 **)v171; /*0x100883e1e*/
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v172, 1); /*0x100883e22*/
              }
            }
          }
        }
        else
        {
          v172 = *(v56 - 3); /*0x100883b74*/
          v171 = *(v56 - 2); /*0x100883b7c*/
          v68 = v169; /*0x100883b80*/
          if ( v169 == v167 ) /*0x100883b88*/
          {
            v54 = (volatile signed __int64 **)&v167; /*0x100883b8e*/
            *(double *)si128.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v167); /*0x100883b92*/
          }
          v59 = v168; /*0x100883a60*/
          v60 = 3LL * (_QWORD)v68; /*0x100883a64*/
          *(_QWORD *)(v168 + 8 * v60) = v172; /*0x100883a6c*/
          *(_QWORD *)(v59 + 8 * v60 + 8) = v171; /*0x100883a74*/
          *(_QWORD *)(v59 + 8 * v60 + 16) = v62; /*0x100883a79*/
          v169 = (void **)((char *)v68 + 1); /*0x100883a81*/
        }
        v56 += 4; /*0x100883a8f*/
        v57 -= 32; /*0x100883a93*/
        if ( !v57 ) /*0x100883a97*/
        {
          v56 = v58; /*0x100883e69*/
          break; /*0x100883e69*/
        }
      }
      v126 = v56; /*0x100883e6c*/
    }
    v79 = (char *)v58 - (char *)v56; /*0x100883e73*/
    if ( v79 ) /*0x100883e76*/
    {
      v80 = v79 >> 5; /*0x100883e78*/
      while ( 1 ) /*0x100883eb5*/
      {
        v81 = *v56; /*0x100883eb5*/
        v83 = *v56 ^ 0x8000000000000000LL; /*0x100883ebb*/
        if ( *v56 >= 0 ) /*0x100883ec1*/
          v83 = 2; /*0x100883ec1*/
        if ( v83 ) /*0x100883ec8*/
          break; /*0x100883ec8*/
        v81 = v56[1]; /*0x100883e90*/
        v82 = 2; /*0x100883e94*/
        if ( v81 ) /*0x100883e9c*/
          goto LABEL_106; /*0x100883e9c*/
LABEL_107:
        v56 += 4; /*0x100883eac*/
        if ( !--v80 ) /*0x100883eb3*/
          goto LABEL_114; /*0x100883eb3*/
      }
      if ( v83 == 1 ) /*0x100883ece*/
        goto LABEL_107; /*0x100883ece*/
      v82 = 1; /*0x100883ed0*/
      if ( !v81 ) /*0x100883ed8*/
        goto LABEL_107; /*0x100883ed8*/
LABEL_106:
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56[v82], v81, 1); /*0x100883e9e*/
      goto LABEL_107; /*0x100883ea7*/
    }
LABEL_114:
    if ( __src ) /*0x100883ee6*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144, 32LL * (_QWORD)__src, 8); /*0x100883ef8*/
    v84 = v118; /*0x100883f01*/
    v118[7] = v170; /*0x100883f08*/
    v84[6] = (volatile signed __int64 **)v169; /*0x100883f10*/
    v84[5] = (volatile signed __int64 **)v168; /*0x100883f18*/
    v84[4] = (volatile signed __int64 **)v167; /*0x100883f20*/
    v84[3] = (volatile signed __int64 **)v166; /*0x100883f28*/
    v85 = v164; /*0x100883f2c*/
    v84[2] = (volatile signed __int64 **)v165; /*0x100883f34*/
    v84[1] = (volatile signed __int64 **)v85; /*0x100883f38*/
    *v84 = (volatile signed __int64 **)11; /*0x100883f3c*/
    v86 = v136; /*0x100883f43*/
    v87 = v137; /*0x100883f4a*/
    if ( v137 ) /*0x100883f54*/
    {
      v88 = (_QWORD *)(v136 + 8); /*0x100883f56*/
      do /*0x100883f67*/
      {
        v89 = *(v88 - 1); /*0x100883f69*/
        if ( 2 * v89 ) /*0x100883f6d*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v88, v89, 1); /*0x100883f82*/
        v88 += 3; /*0x100883f60*/
        v87 = (volatile signed __int64 *)((char *)v87 - 1); /*0x100883f64*/
      }
      while ( v87 ); /*0x100883f67*/
    }
    HIDWORD(_RAX) = HIDWORD(v135); /*0x100883f89*/
    if ( v135 ) /*0x100883f93*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, 24LL * (_QWORD)v135, 8); /*0x100883fa5*/
    v91 = v109; /*0x100883faa*/
    if ( v109 ) /*0x100883fb4*/
    {
      v92 = v111; /*0x100883fba*/
      if ( v111 ) /*0x100883fc4*/
      {
        v93 = v108; /*0x100883fca*/
        si128 = _mm_load_si128(v108); /*0x100883fd1*/
        _R13D = ~_mm_movemask_epi8(si128); /*0x100883fdb*/
        v95 = v108 + 1; /*0x100883fde*/
        do /*0x100884000*/
        {
          if ( !(_WORD)_R13D ) /*0x100884006*/
          {
            do /*0x10088402d*/
            {
              si128 = _mm_load_si128(v95); /*0x100884010*/
              v96 = _mm_movemask_epi8(si128); /*0x100884016*/
              v93 -= 24; /*0x10088401b*/
              ++v95; /*0x100884022*/
            }
            while ( v96 == 0xFFFF ); /*0x10088402d*/
            _R13D = ~v96; /*0x10088402f*/
          }
          __asm { tzcnt eax, r13d } /*0x100884032*/
          v97 = -3 * _RAX; /*0x10088403a*/
          v98 = *((_QWORD *)&v93[-1] + v97 - 1); /*0x10088403e*/
          if ( v98 ) /*0x100884046*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93[-1].i64[v97], v98, 1); /*0x100884055*/
          --v92; /*0x100883ff0*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100883ff7*/
          _R13D &= _R13D - 1; /*0x100883ffa*/
        }
        while ( v92 ); /*0x100884000*/
      }
      v99 = (24 * v91 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100884068*/
      v100 = v99 + v91 + 17; /*0x10088406f*/
      if ( v100 ) /*0x100884073*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v108 - v99, v100, 16); /*0x100884087*/
    }
    v101 = v140; /*0x10088408c*/
    if ( v140 ) /*0x100884096*/
    {
      v102 = (_QWORD *)(v139 + 8); /*0x10088409f*/
      do /*0x1008840b7*/
      {
        v103 = *(v102 - 1); /*0x1008840b9*/
        if ( v103 ) /*0x1008840c0*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v102, v103, 1); /*0x1008840ca*/
        v102 += 3; /*0x1008840b0*/
        --v101; /*0x1008840b4*/
      }
      while ( v101 ); /*0x1008840b7*/
    }
    if ( v138 ) /*0x1008840db*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, 24 * v138, 8); /*0x1008840f1*/
  }
  else
  {
    a1[11] = v161; /*0x100882ff6*/
    a1[10] = v160; /*0x100883001*/
    a1[9] = (volatile signed __int64 **)v159; /*0x10088300c*/
    a1[8] = (volatile signed __int64 **)v158; /*0x100883017*/
    a1[7] = v157; /*0x100883022*/
    a1[6] = (volatile signed __int64 **)v156; /*0x10088302d*/
    v7 = v154; /*0x100883031*/
    a1[5] = (volatile signed __int64 **)v155; /*0x10088303f*/
    a1[4] = (volatile signed __int64 **)v7; /*0x100883043*/
    a1[3] = (volatile signed __int64 **)v166; /*0x10088304b*/
    v8 = v164; /*0x10088304f*/
    a1[2] = (volatile signed __int64 **)v165; /*0x100883057*/
    a1[1] = (volatile signed __int64 **)v8; /*0x10088305b*/
    *a1 = v4; /*0x10088305f*/
  }
  return *(double *)si128.i64; /*0x1008840f6*/
}
