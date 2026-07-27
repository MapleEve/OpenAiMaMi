// __ZN13codexmate_lib4core5voice9workspace23replace_vocabulary_kind @ 0x100b03b20 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::replace_vocabulary_kind::h7dab34fdd28a5dae(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __m128i a4)
{
  _QWORD *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r14
  char v7; // r15
  double v8; // xmm0_8
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  size_t v36; // rdx
  const void *v37; // r14
  __int64 v38; // rax
  size_t v39; // rdx
  const void *v40; // r15
  __int64 *v41; // rdi
  __int64 v42; // rsi
  void *v43; // rax
  void *v44; // rdi
  const void *v45; // rsi
  size_t v46; // r14
  void *v47; // rax
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // r14
  void *v52; // rax
  void *v53; // rdx
  void *v54; // r15
  bool v55; // zf
  unsigned __int64 v56; // r14
  __int64 v57; // r9
  __int64 v58; // r13
  __int64 v59; // r14
  __int64 v60; // r15
  __int64 v61; // rbx
  __int64 v62; // r13
  void *v63; // r14
  unsigned __int64 v64; // r15
  size_t v65; // r12
  void *v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rbx
  int v70; // edx
  __int64 v71; // rax
  size_t v72; // rsi
  __int64 v74; // rbx
  __int64 v75; // r14
  const __m128i *v76; // r15
  const __m128i *v78; // r12
  int v79; // r13d
  __int64 v80; // rax
  __int64 v82; // rbx
  __int64 v83; // r14
  const __m128i *v84; // r15
  const __m128i *v86; // r12
  int v87; // r13d
  __int64 v88; // rax
  unsigned __int64 v89; // rax
  __int64 v90; // rbx
  size_t v91; // rbx
  __int64 v92; // rdx
  unsigned __int64 v93; // rax
  __int64 v94; // rbx
  size_t v95; // rbx
  __int64 v97; // rdi
  __int64 v98; // rdi
  size_t v99; // r12
  char *v100; // r13
  size_t v101; // r15
  _BYTE v102[24]; // [rsp+0h] [rbp-3A0h] BYREF
  _BYTE v103[16]; // [rsp+18h] [rbp-388h] BYREF
  __int64 v104; // [rsp+28h] [rbp-378h] BYREF
  _QWORD v105[12]; // [rsp+30h] [rbp-370h] BYREF
  _QWORD v106[3]; // [rsp+90h] [rbp-310h] BYREF
  __int64 v107; // [rsp+A8h] [rbp-2F8h]
  __int64 v108; // [rsp+B0h] [rbp-2F0h]
  _QWORD v109[2]; // [rsp+B8h] [rbp-2E8h] BYREF
  __int64 v110; // [rsp+C8h] [rbp-2D8h]
  __int64 v111; // [rsp+D0h] [rbp-2D0h]
  __int64 v112; // [rsp+D8h] [rbp-2C8h]
  __int64 v113; // [rsp+E0h] [rbp-2C0h]
  __int64 v114; // [rsp+E8h] [rbp-2B8h]
  __int64 v115; // [rsp+F0h] [rbp-2B0h]
  __int64 v116; // [rsp+F8h] [rbp-2A8h]
  __int64 v117; // [rsp+100h] [rbp-2A0h]
  _QWORD v118[12]; // [rsp+108h] [rbp-298h] BYREF
  _QWORD *v119; // [rsp+168h] [rbp-238h] BYREF
  __int64 v120; // [rsp+170h] [rbp-230h]
  __int64 v121; // [rsp+178h] [rbp-228h]
  __int64 v122; // [rsp+180h] [rbp-220h]
  __int64 v123; // [rsp+188h] [rbp-218h]
  __int64 v124; // [rsp+190h] [rbp-210h]
  const __m128i *v125; // [rsp+198h] [rbp-208h] BYREF
  __int64 v126; // [rsp+1A0h] [rbp-200h]
  __int64 v127; // [rsp+1A8h] [rbp-1F8h]
  __int64 v128; // [rsp+1B0h] [rbp-1F0h]
  __int64 v129; // [rsp+1B8h] [rbp-1E8h]
  __int64 v130; // [rsp+1C0h] [rbp-1E0h]
  size_t v131; // [rsp+1C8h] [rbp-1D8h] BYREF
  __int64 v132; // [rsp+1D0h] [rbp-1D0h]
  __int64 v133; // [rsp+1E0h] [rbp-1C0h]
  __int64 v134; // [rsp+1E8h] [rbp-1B8h]
  __int64 v135; // [rsp+1F0h] [rbp-1B0h]
  size_t v136; // [rsp+1F8h] [rbp-1A8h] BYREF
  __int64 v137; // [rsp+200h] [rbp-1A0h]
  _QWORD *v138; // [rsp+210h] [rbp-190h] BYREF
  __int64 v139; // [rsp+218h] [rbp-188h]
  unsigned __int64 v140; // [rsp+220h] [rbp-180h]
  __int64 v141; // [rsp+228h] [rbp-178h] BYREF
  void *v142; // [rsp+230h] [rbp-170h]
  unsigned __int64 v143; // [rsp+238h] [rbp-168h]
  _QWORD *v144; // [rsp+240h] [rbp-160h]
  __int64 v145; // [rsp+248h] [rbp-158h]
  __int64 v146; // [rsp+250h] [rbp-150h]
  void *v147; // [rsp+258h] [rbp-148h]
  __int64 v148[20]; // [rsp+260h] [rbp-140h] BYREF
  __int64 v149; // [rsp+300h] [rbp-A0h] BYREF
  __int64 v150; // [rsp+308h] [rbp-98h]
  __int64 v151; // [rsp+310h] [rbp-90h]
  __int64 v152; // [rsp+318h] [rbp-88h]
  __int64 v153; // [rsp+320h] [rbp-80h]
  __int64 v154; // [rsp+328h] [rbp-78h]
  __int64 v155; // [rsp+330h] [rbp-70h]
  __int64 v156; // [rsp+338h] [rbp-68h]
  size_t v157; // [rsp+340h] [rbp-60h]
  size_t v158; // [rsp+348h] [rbp-58h]
  _QWORD *v159; // [rsp+350h] [rbp-50h]
  __int64 v160; // [rsp+358h] [rbp-48h]
  size_t __n; // [rsp+360h] [rbp-40h]
  __int64 v162; // [rsp+368h] [rbp-38h]
  char v163; // [rsp+376h] [rbp-2Ah]
  char v164; // [rsp+377h] [rbp-29h]

  v162 = a3; /*0x100b03b34*/
  v4 = (_QWORD *)a1; /*0x100b03b3b*/
  codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119(v148); /*0x100b03b47*/
  v5 = v148[0]; /*0x100b03b4c*/
  v6 = v148[1]; /*0x100b03b53*/
  v7 = v148[2]; /*0x100b03b5a*/
  if ( v148[0] != 11 ) /*0x100b03b66*/
  {
    memcpy((void *)(a1 + 25), (char *)&v148[2] + 1, 0x4Fu); /*0x100b03c2b*/
    *(_QWORD *)(a1 + 8) = v5; /*0x100b03c30*/
    *(_QWORD *)(a1 + 16) = v6; /*0x100b03c35*/
    *(_BYTE *)(a1 + 24) = v7; /*0x100b03c3a*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100b03c49*/
    v10 = (_QWORD *)v162; /*0x100b03c4d*/
    v11 = *(_QWORD *)(v162 + 24); /*0x100b03c51*/
    if ( v11 == 0x8000000000000000LL ) /*0x100b03c58*/
    {
LABEL_10:
      v12 = v10[6]; /*0x100b03c6d*/
      if ( v12 != 0x8000000000000000LL && v12 ) /*0x100b03c83*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10[7], v12, 1); /*0x100b03c8e*/
      v13 = v10[2]; /*0x100b03c93*/
      if ( v13 ) /*0x100b03c9a*/
      {
        v14 = (_QWORD *)(*(_QWORD *)(v162 + 8) + 56LL); /*0x100b03ca4*/
        do /*0x100b03cb7*/
        {
          v15 = *(v14 - 7); /*0x100b03cb9*/
          if ( v15 ) /*0x100b03cc0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v14 - 6), v15, 1); /*0x100b03ccb*/
          v16 = *(v14 - 4); /*0x100b03cd0*/
          if ( v16 ) /*0x100b03cd7*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v14 - 3), v16, 1); /*0x100b03ce2*/
          v17 = *(v14 - 1); /*0x100b03ce7*/
          if ( 2 * v17 ) /*0x100b03ceb*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v14, v17, 1); /*0x100b03d00*/
          v14 += 9; /*0x100b03cb0*/
          --v13; /*0x100b03cb4*/
        }
        while ( v13 ); /*0x100b03cb7*/
      }
      if ( *(_QWORD *)v162 ) /*0x100b03d0b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v162 + 8), 72LL * *(_QWORD *)v162, 8); /*0x100b03d2c*/
      return v4; /*0x100b03d31*/
    }
LABEL_8:
    if ( v11 ) /*0x100b03c5d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10[4], v11, 1); /*0x100b03c68*/
    goto LABEL_10; /*0x100b03c68*/
  }
  v164 = v148[2]; /*0x100b03b6c*/
  v159 = (_QWORD *)v148[1]; /*0x100b03b70*/
  v8 = codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v148, a2, a4); /*0x100b03b80*/
  qmemcpy(v118, &v148[1], sizeof(v118)); /*0x100b03b9f*/
  if ( v148[0] == 0x8000000000000000LL ) /*0x100b03baf*/
  {
    qmemcpy((void *)(a1 + 8), v118, 0x60u); /*0x100b03bc6*/
    v9 = a1 + 104; /*0x100b03bc6*/
    *v4 = 0x8000000000000000LL; /*0x100b03bc9*/
    if ( (v164 & 1) == 0 /*0x100b04ba6*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v9,
                             &v119,
                             0x8000000000000000LL,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v159 + 8) = 1; /*0x100b04bb7*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v159); /*0x100b03bfc*/
    v10 = (_QWORD *)v162; /*0x100b03c01*/
    v11 = *(_QWORD *)(v162 + 24); /*0x100b03c05*/
    if ( v11 == 0x8000000000000000LL ) /*0x100b03c16*/
      goto LABEL_10; /*0x100b03c16*/
    goto LABEL_8; /*0x100b03c16*/
  }
  v108 = v148[17]; /*0x100b03d3d*/
  v107 = v148[16]; /*0x100b03d4b*/
  v106[2] = v148[15]; /*0x100b03d59*/
  v106[1] = v148[14]; /*0x100b03d6e*/
  v106[0] = v148[13]; /*0x100b03d75*/
  qmemcpy(v105, v118, sizeof(v105)); /*0x100b03d8f*/
  v104 = v148[0]; /*0x100b03d92*/
  v118[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v106, &v119); /*0x100b03d9e*/
  LODWORD(v118[1]) = v18; /*0x100b03da5*/
  std::time::SystemTime::duration_since::had059553cab94f96(v148, v118, 0, 0); /*0x100b03dbd*/
  if ( LOBYTE(v148[0]) ) /*0x100b03dc9*/
    v134 = 0; /*0x100b03ddb*/
  else
    v134 = v148[1]; /*0x100b03dd2*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100b03ded*/
  v22 = v19; /*0x100b03def*/
  if ( *(_BYTE *)(v19 + 16) == 1 ) /*0x100b03df6*/
  {
    v23 = *(_QWORD *)v19; /*0x100b03dfc*/
    v24 = *(_QWORD *)(v22 + 8); /*0x100b03dff*/
  }
  else
  {
    v23 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100b04b66*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v118,
            v20,
            v21);
    *(_QWORD *)v22 = v23; /*0x100b04b6b*/
    *(_QWORD *)(v22 + 8) = v24; /*0x100b04b6e*/
    *(_BYTE *)(v22 + 16) = 1; /*0x100b04b72*/
  }
  *(_QWORD *)v22 = v23 + 1; /*0x100b03e07*/
  v128 = 0; /*0x100b03e11*/
  v127 = 0; /*0x100b03e1f*/
  v126 = 0; /*0x100b03e2d*/
  v125 = (const __m128i *)&xmmword_1015FBEC0; /*0x100b03e3b*/
  v129 = v23; /*0x100b03e42*/
  v130 = v24; /*0x100b03e49*/
  v141 = 0; /*0x100b03e50*/
  v142 = (void *)8; /*0x100b03e5b*/
  v143 = 0; /*0x100b03e66*/
  v25 = (__int64 *)v162; /*0x100b03e71*/
  v148[2] = *(_QWORD *)(v162 + 40); /*0x100b03e79*/
  v26 = *(_QWORD *)(v162 + 24); /*0x100b03e80*/
  v148[1] = *(_QWORD *)(v162 + 32); /*0x100b03e88*/
  v148[0] = v26; /*0x100b03e8f*/
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(&v136, v148); /*0x100b03ea4*/
  v119 = a2; /*0x100b03ea9*/
  v144 = (_QWORD *)a1; /*0x100b03eb0*/
  v148[2] = v25[8]; /*0x100b03ebb*/
  v27 = v25[6]; /*0x100b03ec2*/
  v148[1] = v25[7]; /*0x100b03eca*/
  v148[0] = v27; /*0x100b03ed1*/
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(&v131, v148); /*0x100b03ee6*/
  v28 = *v25; /*0x100b03eeb*/
  v30 = v25[2]; /*0x100b03ef2*/
  v149 = v25[1]; /*0x100b03eff*/
  v29 = v149; /*0x100b03eee*/
  v150 = v149; /*0x100b03f06*/
  v151 = v28; /*0x100b03f0d*/
  v153 = v149 + 72 * v30; /*0x100b03f14*/
  v152 = v153; /*0x100b03f18*/
  if ( !v30 ) /*0x100b03f22*/
    goto LABEL_73; /*0x100b03f22*/
  do /*0x100b04588*/
  {
    v29 += 72; /*0x100b03f28*/
    while ( 1 ) /*0x100b03f46*/
    {
      v32 = *(_QWORD *)(v29 - 72); /*0x100b03f46*/
      v33 = *(_QWORD *)(v29 - 64); /*0x100b03f4a*/
      v117 = *(_QWORD *)(v29 - 8); /*0x100b03f52*/
      v116 = *(_QWORD *)(v29 - 16); /*0x100b03f5d*/
      v115 = *(_QWORD *)(v29 - 24); /*0x100b03f68*/
      v114 = *(_QWORD *)(v29 - 32); /*0x100b03f73*/
      v113 = *(_QWORD *)(v29 - 40); /*0x100b03f7e*/
      v112 = *(_QWORD *)(v29 - 48); /*0x100b03f89*/
      v111 = *(_QWORD *)(v29 - 56); /*0x100b03f94*/
      v110 = v33; /*0x100b03f9b*/
      if ( v32 == 0x8000000000000000LL ) /*0x100b03faf*/
        goto LABEL_72; /*0x100b03faf*/
      v118[0] = v32; /*0x100b03fb5*/
      v118[8] = v117; /*0x100b03fca*/
      v118[7] = v116; /*0x100b03fd5*/
      v118[6] = v115; /*0x100b03fe0*/
      v118[5] = v114; /*0x100b03feb*/
      v118[4] = v113; /*0x100b03ff6*/
      v118[3] = v112; /*0x100b04001*/
      v118[2] = v111; /*0x100b04013*/
      v118[1] = v110; /*0x100b04017*/
      v34 = v110; /*0x100b0401a*/
      v35 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v110, v111); /*0x100b0402b*/
      __n = v36; /*0x100b04030*/
      v37 = (const void *)v35; /*0x100b04034*/
      v133 = v118[4]; /*0x100b04045*/
      v38 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v118[4], v118[5]); /*0x100b0404c*/
      v158 = v39; /*0x100b04051*/
      v40 = (const void *)v38; /*0x100b04055*/
      if ( __n != 0 && v39 != 0 ) /*0x100b04067*/
      {
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(v102, v37, __n); /*0x100b04078*/
        if ( !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v125, v102) ) /*0x100b0408b*/
          break; /*0x100b0408b*/
      }
      if ( v32 ) /*0x100b04097*/
        v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v32, 1); /*0x100b040a4*/
      if ( v118[3] ) /*0x100b040b3*/
        v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v118[3], 1); /*0x100b040c1*/
      if ( v118[6] != 0x8000000000000000LL && v118[6] ) /*0x100b040e3*/
        v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118[7], v118[6], 1); /*0x100b040f5*/
      v31 = v29 - 72; /*0x100b03f30*/
      v29 += 72; /*0x100b03f34*/
      if ( v31 + 72 == v153 ) /*0x100b03f40*/
        goto LABEL_71; /*0x100b03f40*/
    }
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v103); /*0x100b04106*/
    v138 = nullptr; /*0x100b0410b*/
    v139 = 1; /*0x100b04116*/
    v140 = 0; /*0x100b04121*/
    v148[2] = 1610612768; /*0x100b0412c*/
    v148[0] = (__int64)&v138; /*0x100b0413e*/
    v148[1] = (__int64)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100b0414c*/
    if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x100b04161*/
                            v103,
                            v148) )
    {
      v150 = v29; /*0x100b04bdc*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100b04c04*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v109,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    }
    v160 = (__int64)v138; /*0x100b04187*/
    v156 = v139; /*0x100b0418b*/
    if ( v140 <= 8 ) /*0x100b0418f*/
    {
      if ( v140 != 8 ) /*0x100b0419c*/
      {
LABEL_144:
        v150 = v29; /*0x100b04c0b*/
        core::str::slice_error_fail::h480e51fbd8b15eba(v139, v140, 0, 8, &off_101974A98); /*0x100b04c20*/
      }
    }
    else if ( *(char *)(v139 + 8) < -64 ) /*0x100b04195*/
    {
      goto LABEL_144; /*0x100b04195*/
    }
    v109[0] = v139; /*0x100b041a2*/
    v109[1] = 8; /*0x100b041a9*/
    v138 = v109; /*0x100b041bb*/
    v139 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100b041c9*/
    v41 = v148; /*0x100b041d0*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v148, &unk_1017CBF7C, &v138); /*0x100b041e5*/
    v42 = v160; /*0x100b041ea*/
    if ( v160 ) /*0x100b041f1*/
    {
      v41 = (__int64 *)v156; /*0x100b041f8*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v156, v160, 1); /*0x100b041fc*/
    }
    v160 = v148[0]; /*0x100b04208*/
    v156 = v148[1]; /*0x100b04213*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100b0421e*/
    {
      v97 = 0; /*0x100b04ab1*/
      goto LABEL_129; /*0x100b04ab1*/
    }
    v120 = v148[2]; /*0x100b0422b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v42); /*0x100b04232*/
    v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100b04240*/
    if ( !v43 ) /*0x100b04248*/
    {
      v157 = __n; /*0x100b04c43*/
      v97 = 1; /*0x100b04c47*/
LABEL_129:
      v150 = v29; /*0x100b04ab3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v97, v157); /*0x100b04abe*/
    }
    v157 = (size_t)v43; /*0x100b0424e*/
    v44 = v43; /*0x100b04252*/
    v45 = v37; /*0x100b04255*/
    memcpy(v43, v37, __n); /*0x100b0425c*/
    v46 = v158; /*0x100b04261*/
    if ( (v158 & 0x8000000000000000LL) != 0LL ) /*0x100b04268*/
    {
      v98 = 0; /*0x100b04ac8*/
      goto LABEL_131; /*0x100b04ac8*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, v45); /*0x100b0426e*/
    v47 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v46, 1); /*0x100b0427b*/
    if ( !v47 ) /*0x100b04283*/
    {
      v154 = v46; /*0x100b04c51*/
      v98 = 1; /*0x100b04c55*/
LABEL_131:
      v150 = v29; /*0x100b04aca*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v98, v154); /*0x100b04ad5*/
    }
    v154 = (__int64)v47; /*0x100b04289*/
    memcpy(v47, v40, v46); /*0x100b04296*/
    v163 = *(_BYTE *)(v162 + 72); /*0x100b042a3*/
    v48 = 0x8000000000000000LL; /*0x100b042b0*/
    v49 = v145; /*0x100b042ba*/
    if ( v136 != 0x8000000000000000LL ) /*0x100b042c1*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v148, &v136); /*0x100b042d1*/
      v48 = v148[0]; /*0x100b042d6*/
      v49 = v148[1]; /*0x100b042dd*/
      v122 = v148[2]; /*0x100b042eb*/
    }
    v50 = 0x8000000000000000LL; /*0x100b042fc*/
    v145 = v49; /*0x100b04306*/
    v146 = v48; /*0x100b0430d*/
    if ( v131 != 0x8000000000000000LL ) /*0x100b04314*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v148, &v131); /*0x100b04324*/
      v50 = v148[0]; /*0x100b04329*/
      v135 = v148[1]; /*0x100b04337*/
      v123 = v148[2]; /*0x100b04345*/
    }
    v51 = 0x8000000000000000LL; /*0x100b04353*/
    v121 = v118[6]; /*0x100b04360*/
    if ( v118[6] != 0x8000000000000000LL ) /*0x100b04367*/
    {
      v155 = v50; /*0x100b0436d*/
      v52 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v118[7], v118[8]); /*0x100b0437f*/
      v54 = v53; /*0x100b04384*/
      v55 = v52 != nullptr && v53 != nullptr; /*0x100b04393*/
      v50 = v155; /*0x100b04395*/
      if ( v55 ) /*0x100b04399*/
      {
        v147 = v52; /*0x100b0439b*/
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v148, v54, 0, 1, 1); /*0x100b043b9*/
        v51 = v148[1]; /*0x100b043be*/
        if ( LOBYTE(v148[0]) ) /*0x100b043cc*/
        {
          v150 = v29; /*0x100b04c27*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v148[1], v148[2]); /*0x100b04c38*/
        }
        v124 = v148[2]; /*0x100b043d9*/
        memcpy((void *)v148[2], v147, (size_t)v54); /*0x100b043ea*/
        v147 = v54; /*0x100b043ef*/
        v50 = v155; /*0x100b043f6*/
      }
    }
    v148[0] = v160; /*0x100b043fe*/
    v148[1] = v156; /*0x100b04409*/
    v148[2] = v120; /*0x100b04417*/
    v148[3] = __n; /*0x100b04422*/
    v148[4] = v157; /*0x100b0442d*/
    v148[5] = __n; /*0x100b04434*/
    v148[6] = v158; /*0x100b0443f*/
    v148[7] = v154; /*0x100b0444a*/
    v148[8] = v158; /*0x100b04451*/
    LOBYTE(v148[19]) = v163; /*0x100b0445c*/
    v148[9] = v146; /*0x100b04469*/
    v148[10] = v145; /*0x100b04477*/
    v148[11] = v122; /*0x100b04485*/
    v148[12] = v50; /*0x100b0448c*/
    v148[13] = v135; /*0x100b0449a*/
    v148[14] = v123; /*0x100b044a8*/
    v148[15] = v51; /*0x100b044af*/
    v148[16] = v124; /*0x100b044bd*/
    v148[17] = (__int64)v147; /*0x100b044cb*/
    v148[18] = v134; /*0x100b044d9*/
    v56 = v143; /*0x100b044e0*/
    if ( v143 == v141 ) /*0x100b044ee*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h483ed231e2079eb6(&v141); /*0x100b044f7*/
    memcpy((char *)v142 + 160 * v56, v148, 0xA0u); /*0x100b04517*/
    v143 = v56 + 1; /*0x100b0451f*/
    if ( v32 ) /*0x100b04529*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v32, 1); /*0x100b04536*/
    if ( v118[3] ) /*0x100b04545*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v118[3], 1); /*0x100b04553*/
    if ( v121 != 0x8000000000000000LL && v121 ) /*0x100b04571*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118[7], v121, 1); /*0x100b0457f*/
  }
  while ( v29 != v153 ); /*0x100b04588*/
LABEL_71:
  v29 = v153; /*0x100b0458e*/
LABEL_72:
  v150 = v29; /*0x100b04592*/
LABEL_73:
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hebb616033d725cb0( /*0x100b04599*/
    &v149,
    v8);
  v148[0] = v162 + 72; /*0x100b045ad*/
  v148[1] = (__int64)&v136; /*0x100b045bb*/
  if ( v105[4] ) /*0x100b045cc*/
  {
    v58 = v105[3]; /*0x100b045ce*/
    v59 = 160LL * v105[4] - 160; /*0x100b045dd*/
    __n = v105[4]; /*0x100b045e4*/
    v60 = -v105[4]; /*0x100b045e8*/
    v61 = 0; /*0x100b045eb*/
    v158 = v105[3]; /*0x100b045f4*/
    while ( (unsigned __int8)alloc::vec::Vec$LT$T$C$A$GT$::retain::_$u7b$$u7b$closure$u7d$$u7d$::h6c37acfcbdce6750( /*0x100b0460d*/
                               v148,
                               v58) )
    {
      ++v61; /*0x100b04613*/
      v59 -= 160; /*0x100b04616*/
      v58 += 160; /*0x100b0461d*/
      if ( !(v61 + v60) ) /*0x100b04627*/
      {
        v61 = v105[4]; /*0x100b0462c*/
        goto LABEL_79; /*0x100b04633*/
      }
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyEntry$GT$::h34eaa804dcf1652a(v58); /*0x100b04ae2*/
    v99 = v61 + 1 - __n; /*0x100b04aeb*/
    if ( v61 + 1 < __n ) /*0x100b04aef*/
    {
      v100 = (char *)(v58 + 160); /*0x100b04af1*/
      v101 = v158; /*0x100b04af8*/
      do /*0x100b04b58*/
      {
        while ( (unsigned __int8)alloc::vec::Vec$LT$T$C$A$GT$::retain::_$u7b$$u7b$closure$u7d$$u7d$::h6c37acfcbdce6750( /*0x100b04b3d*/
                                   v148,
                                   v100) )
        {
          memcpy((void *)(v101 + 160 * v61++), v100, 0xA0u); /*0x100b04b11*/
          v59 -= 160; /*0x100b04b19*/
          v100 += 160; /*0x100b04b20*/
          if ( !++v99 ) /*0x100b04b2a*/
            goto LABEL_137; /*0x100b04b2a*/
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyEntry$GT$::h34eaa804dcf1652a(v100); /*0x100b04b42*/
        v59 -= 160; /*0x100b04b47*/
        v100 += 160; /*0x100b04b4e*/
        ++v99; /*0x100b04b55*/
      }
      while ( v99 ); /*0x100b04b58*/
    }
LABEL_137:
    v105[4] = v61; /*0x100b04b5a*/
  }
  else
  {
    v61 = 0; /*0x100b04635*/
  }
LABEL_79:
  v62 = v141; /*0x100b04637*/
  v63 = v142; /*0x100b0463e*/
  v64 = v143; /*0x100b04645*/
  v65 = 160 * v143; /*0x100b04653*/
  v148[0] = (__int64)v142; /*0x100b0465b*/
  v148[2] = v141; /*0x100b04662*/
  v148[1] = (__int64)v142; /*0x100b04669*/
  v148[3] = (__int64)v142 + 160 * v143; /*0x100b04670*/
  if ( v143 > v105[2] - v61 ) /*0x100b04684*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100b04b93*/
      &v105[2],
      v61,
      v143,
      8,
      160,
      v57);
    v61 = v105[4]; /*0x100b04b98*/
  }
  v66 = (void *)(v105[3] + 160 * v61); /*0x100b04692*/
  v67 = (__int64)v63; /*0x100b04699*/
  memcpy(v66, v63, v65); /*0x100b0469f*/
  v105[4] = v61 + v64; /*0x100b046a7*/
  if ( v62 ) /*0x100b046b1*/
  {
    v67 = 160 * v62; /*0x100b046b7*/
    v66 = v63; /*0x100b046c1*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, 160 * v62, 8); /*0x100b046c4*/
  }
  LODWORD(v108) = 1; /*0x100b046c9*/
  v68 = std::time::SystemTime::now::h1fe79e41f9d5677f(v66, v67); /*0x100b046d3*/
  v4 = v144; /*0x100b046d8*/
  v69 = (__int64)v119; /*0x100b046df*/
  v118[0] = v68; /*0x100b046e6*/
  LODWORD(v118[1]) = v70; /*0x100b046ed*/
  std::time::SystemTime::duration_since::had059553cab94f96(v148, v118, 0, 0); /*0x100b04705*/
  if ( LOBYTE(v148[0]) ) /*0x100b04711*/
    v71 = 0; /*0x100b0471c*/
  else
    v71 = v148[1]; /*0x100b04713*/
  v107 = v71; /*0x100b0471e*/
  codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(&v104); /*0x100b0472c*/
  codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v148, v69, (__int64)&v104, v8); /*0x100b04742*/
  if ( LODWORD(v148[0]) == 11 ) /*0x100b0474e*/
  {
    codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47( /*0x100b04770*/
      v148,
      *(_QWORD *)(v69 + 536),
      *(_QWORD *)(v69 + 544),
      (__int64)&v104);
    qmemcpy(v4, v148, 0x80u); /*0x100b04784*/
    if ( v131 != 0x8000000000000000LL && v131 ) /*0x100b047a0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1); /*0x100b047ae*/
    v72 = v136; /*0x100b047b3*/
    HIDWORD(_RAX) = 0x80000000; /*0x100b047ba*/
    if ( v136 != 0x8000000000000000LL && v136 ) /*0x100b047cc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, v136, 1); /*0x100b047da*/
    v74 = v126; /*0x100b047df*/
    if ( v126 ) /*0x100b047e9*/
    {
      v75 = v128; /*0x100b047ef*/
      if ( v128 ) /*0x100b047f9*/
      {
        v76 = v125; /*0x100b047ff*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v125)); /*0x100b04810*/
        v78 = v125 + 1; /*0x100b04813*/
        do /*0x100b04830*/
        {
          if ( !(_WORD)_R13D ) /*0x100b0483a*/
          {
            do /*0x100b0485d*/
            {
              v79 = _mm_movemask_epi8(_mm_load_si128(v78)); /*0x100b04846*/
              v76 -= 24; /*0x100b0484b*/
              ++v78; /*0x100b04852*/
            }
            while ( v79 == 0xFFFF ); /*0x100b0485d*/
            _R13D = ~v79; /*0x100b0485f*/
          }
          __asm { tzcnt eax, r13d } /*0x100b04862*/
          v80 = -3 * _RAX; /*0x100b0486a*/
          v72 = *((_QWORD *)&v76[-1] + v80 - 1); /*0x100b0486e*/
          if ( v72 ) /*0x100b04876*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[-1].i64[v80], v72, 1); /*0x100b04885*/
          --v75; /*0x100b04820*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100b04827*/
          _R13D &= _R13D - 1; /*0x100b0482a*/
        }
        while ( v75 ); /*0x100b04830*/
      }
      v93 = (24 * v74 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b04a2f*/
      v94 = v93 + v74; /*0x100b04a33*/
      v55 = v94 == -17; /*0x100b04a36*/
      v95 = v94 + 17; /*0x100b04a36*/
      v4 = v144; /*0x100b04a3a*/
      if ( !v55 ) /*0x100b04a41*/
      {
        v72 = v95; /*0x100b04a52*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v125 - v93, v95, 16); /*0x100b04a55*/
      }
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v104); /*0x100b04a63*/
    if ( (v164 & 1) != 0 /*0x100b04a88*/
      || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
    {
      goto LABEL_126; /*0x100b04a88*/
    }
LABEL_141:
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x100b04bc2*/
                             &v104,
                             v72,
                             v92,
                             0x7FFFFFFFFFFFFFFFLL) )
      *((_BYTE *)v159 + 8) = 1; /*0x100b04bd3*/
    goto LABEL_126; /*0x100b04bd7*/
  }
  qmemcpy(v4 + 1, v148, 0x60u); /*0x100b0489d*/
  *v4 = 0x8000000000000000LL; /*0x100b048aa*/
  if ( v131 != 0x8000000000000000LL && v131 ) /*0x100b048bd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1); /*0x100b048cb*/
  v72 = v136; /*0x100b048d0*/
  HIDWORD(_RAX) = 0x80000000; /*0x100b048d7*/
  if ( v136 != 0x8000000000000000LL && v136 ) /*0x100b048e9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, v136, 1); /*0x100b048f7*/
  v82 = v126; /*0x100b048fc*/
  if ( v126 ) /*0x100b04906*/
  {
    v83 = v128; /*0x100b0490c*/
    if ( v128 ) /*0x100b04916*/
    {
      v84 = v125; /*0x100b0491c*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v125)); /*0x100b0492d*/
      v86 = v125 + 1; /*0x100b04930*/
      do /*0x100b04950*/
      {
        if ( !(_WORD)_R13D ) /*0x100b04956*/
        {
          do /*0x100b0497d*/
          {
            v87 = _mm_movemask_epi8(_mm_load_si128(v86)); /*0x100b04966*/
            v84 -= 24; /*0x100b0496b*/
            ++v86; /*0x100b04972*/
          }
          while ( v87 == 0xFFFF ); /*0x100b0497d*/
          _R13D = ~v87; /*0x100b0497f*/
        }
        __asm { tzcnt eax, r13d } /*0x100b04982*/
        v88 = -3 * _RAX; /*0x100b0498a*/
        v72 = *((_QWORD *)&v84[-1] + v88 - 1); /*0x100b0498e*/
        if ( v72 ) /*0x100b04996*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84[-1].i64[v88], v72, 1); /*0x100b049a5*/
        --v83; /*0x100b04940*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100b04947*/
        _R13D &= _R13D - 1; /*0x100b0494a*/
      }
      while ( v83 ); /*0x100b04950*/
    }
    v89 = (24 * v82 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b049b8*/
    v90 = v89 + v82; /*0x100b049bc*/
    v55 = v90 == -17; /*0x100b049bf*/
    v91 = v90 + 17; /*0x100b049bf*/
    v4 = v144; /*0x100b049c3*/
    if ( !v55 ) /*0x100b049ca*/
    {
      v72 = v91; /*0x100b049db*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v125 - v89, v91, 16); /*0x100b049de*/
    }
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v104); /*0x100b049ec*/
  if ( (v164 & 1) == 0 /*0x100b04a15*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    goto LABEL_141; /*0x100b04a15*/
  }
LABEL_126:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v159); /*0x100b04a8e*/
  return v4; /*0x100b04a9f*/
}