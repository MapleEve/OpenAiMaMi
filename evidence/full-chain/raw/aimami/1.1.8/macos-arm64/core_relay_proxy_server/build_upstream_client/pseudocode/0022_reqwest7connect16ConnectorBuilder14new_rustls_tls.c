// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100b1e6c0 depth=2
__int64 __fastcall reqwest::connect::ConnectorBuilder::new_rustls_tls::h5591f97e7f368da5(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        void *__src,
        __int64 __n,
        char a9,
        char a10)
{
  int v10; // ebx
  char v12; // r12
  __int64 v13; // r9
  char v14; // r13
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  void *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 i; // rdx
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r14
  _BYTE *v29; // rdi
  __int64 v30; // rsi
  char v31; // r14
  char v32; // of
  volatile signed __int64 *v33; // rax
  __int64 v34; // rt0
  __int64 v35; // rcx
  char v36; // dl
  __int64 v37; // rdx
  __int64 v38; // rsi
  volatile signed __int64 *v39; // rdi
  __int64 v40; // rt0
  __int64 v41; // r8
  char v42; // r12
  volatile signed __int64 *v43; // r10
  __int64 v44; // rt0
  __int64 v45; // r11
  char v46; // r9
  char v47; // r14
  char v48; // al
  volatile signed __int64 *v49; // rcx
  __int64 v50; // rt0
  __int64 v51; // rbx
  volatile signed __int64 *v52; // r13
  __int64 v53; // rt0
  __int128 v54; // xmm0
  volatile signed __int64 *v55; // rax
  __int64 v56; // rt0
  __int64 v57; // rdx
  unsigned __int64 v58; // rbx
  __int64 v59; // r14
  __int64 v60; // r12
  volatile signed __int64 *v61; // rax
  volatile signed __int64 *v62; // r13
  __int64 v63; // rt0
  volatile signed __int64 *v64; // rbx
  const void *v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rdi
  char v68; // al
  unsigned __int64 v69; // rbx
  __int64 v70; // r12
  const void *v71; // r14
  __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // rdi
  const void *v75; // rsi
  char v76; // dl
  unsigned __int64 v77; // r8
  volatile signed __int64 *v78; // r14
  __int64 v79; // rt0
  char v80; // r11
  unsigned __int64 v81; // r12
  __int64 v82; // rax
  size_t v83; // rcx
  unsigned __int64 v84; // r9
  __int128 v85; // xmm0
  __int64 v86; // rbx
  __int64 v87; // r12
  bool v88; // zf
  unsigned __int64 v89; // rbx
  __int64 v90; // r12
  const void *v91; // rsi
  __int64 v92; // rax
  const void *v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rdi
  const void *v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rdi
  size_t v99; // rbx
  unsigned __int64 v100; // r10
  _QWORD *v101; // rdx
  size_t *v102; // rsi
  size_t v103; // r11
  unsigned __int64 v104; // rdx
  size_t v105; // rcx
  __int16 v106; // ax
  unsigned int v107; // r8d
  size_t v108; // rax
  __int64 v109; // rbx
  __int64 v110; // r12
  const void *v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rdi
  char v114; // bl
  volatile signed __int64 *v115; // rax
  __int64 v116; // r14
  __int64 v117; // rbx
  volatile signed __int64 *v118; // rax
  volatile signed __int64 *v119; // rax
  __int64 *v120; // rdx
  __int64 result; // rax
  __int64 v122; // rcx
  _QWORD *v123; // rsi
  __int64 v124; // rdx
  _QWORD v125[45]; // [rsp+8h] [rbp-4B8h] BYREF
  _BYTE v126[344]; // [rsp+170h] [rbp-350h] BYREF
  __int64 v127; // [rsp+2C8h] [rbp-1F8h] BYREF
  __int64 v128; // [rsp+2D0h] [rbp-1F0h]
  __int64 v129; // [rsp+2D8h] [rbp-1E8h]
  __int64 v130; // [rsp+2E0h] [rbp-1E0h]
  __int64 v131; // [rsp+2E8h] [rbp-1D8h]
  __int64 v132; // [rsp+2F0h] [rbp-1D0h]
  size_t v133; // [rsp+2F8h] [rbp-1C8h] BYREF
  _QWORD v134[10]; // [rsp+300h] [rbp-1C0h] BYREF
  __int64 v135; // [rsp+350h] [rbp-170h]
  __int64 v136; // [rsp+358h] [rbp-168h]
  volatile signed __int64 *v137; // [rsp+360h] [rbp-160h]
  __int64 v138; // [rsp+368h] [rbp-158h]
  volatile signed __int64 *v139; // [rsp+370h] [rbp-150h]
  __int64 v140; // [rsp+378h] [rbp-148h]
  volatile signed __int64 *v141; // [rsp+380h] [rbp-140h]
  __int64 v142; // [rsp+388h] [rbp-138h]
  volatile signed __int64 *v143; // [rsp+390h] [rbp-130h]
  __int64 v144; // [rsp+398h] [rbp-128h]
  __int128 v145; // [rsp+3A0h] [rbp-120h]
  __int128 v146; // [rsp+3B0h] [rbp-110h]
  volatile signed __int64 *v147; // [rsp+3C8h] [rbp-F8h]
  __int64 v148; // [rsp+3D0h] [rbp-F0h]
  __int64 v149; // [rsp+3D8h] [rbp-E8h]
  _QWORD *v150; // [rsp+3E0h] [rbp-E0h]
  volatile signed __int64 *v151; // [rsp+3E8h] [rbp-D8h]
  __int64 v152; // [rsp+3F0h] [rbp-D0h]
  __int64 v153; // [rsp+3F8h] [rbp-C8h]
  __int64 v154; // [rsp+400h] [rbp-C0h]
  volatile signed __int64 *v155; // [rsp+408h] [rbp-B8h]
  volatile signed __int64 *v156; // [rsp+410h] [rbp-B0h]
  __int64 v157; // [rsp+418h] [rbp-A8h]
  __int64 v158; // [rsp+420h] [rbp-A0h]
  unsigned __int64 v159; // [rsp+428h] [rbp-98h]
  __int64 v160; // [rsp+430h] [rbp-90h]
  const void *v161; // [rsp+438h] [rbp-88h]
  const void *v162; // [rsp+440h] [rbp-80h]
  unsigned __int64 v163; // [rsp+448h] [rbp-78h]
  volatile signed __int64 *v164; // [rsp+450h] [rbp-70h]
  size_t v165; // [rsp+458h] [rbp-68h]
  __int64 v166; // [rsp+460h] [rbp-60h]
  __int64 v167; // [rsp+468h] [rbp-58h]
  __int64 *v168; // [rsp+470h] [rbp-50h]
  size_t v169; // [rsp+478h] [rbp-48h]
  unsigned __int64 v170; // [rsp+480h] [rbp-40h]
  unsigned __int64 v171; // [rsp+488h] [rbp-38h]
  char v172; // [rsp+493h] [rbp-2Dh]
  char v173; // [rsp+494h] [rbp-2Ch]
  char v174; // [rsp+495h] [rbp-2Bh]
  char v175; // [rsp+496h] [rbp-2Ah]
  char v176; // [rsp+497h] [rbp-29h]

  v150 = a5; /*0x100b1e6d4*/
  v168 = a2; /*0x100b1e6de*/
  v135 = a1; /*0x100b1e6e2*/
  v149 = a4; /*0x100b1e6e9*/
  v148 = a4; /*0x100b1e6f0*/
  if ( *(_BYTE *)a6 == 2 ) /*0x100b1e6fd*/
  {
    v12 = 0; /*0x100b1e6ff*/
  }
  else
  {
    v10 = *(_DWORD *)(a6 + 1); /*0x100b1e704*/
    if ( (*(_BYTE *)a6 & 1) != 0 ) /*0x100b1e70a*/
    {
      v13 = a6 + 5; /*0x100b1e70c*/
      LODWORD(v125[1]) = *(_DWORD *)(v13 + 8); /*0x100b1e714*/
      v125[0] = *(_QWORD *)v13; /*0x100b1e71d*/
      v14 = 1; /*0x100b1e724*/
      v12 = 0; /*0x100b1e727*/
      goto LABEL_7; /*0x100b1e72a*/
    }
    v12 = 1; /*0x100b1e72c*/
  }
  v14 = 0; /*0x100b1e72f*/
LABEL_7:
  v15 = alloc::sync::Arc$LT$T$C$A$GT$::make_mut::h92cba3179d38c261(v168); /*0x100b1e732*/
  *(_BYTE *)(v15 + 121) = v12; /*0x100b1e73f*/
  *(_DWORD *)(v15 + 122) = v10; /*0x100b1e743*/
  *(_BYTE *)(v15 + 126) = v14; /*0x100b1e746*/
  *(_DWORD *)(v15 + 127) = v10; /*0x100b1e74a*/
  *(_QWORD *)(v15 + 131) = v125[0]; /*0x100b1e754*/
  *(_DWORD *)(v15 + 139) = v125[1]; /*0x100b1e761*/
  if ( !__src ) /*0x100b1e76a*/
    goto LABEL_23; /*0x100b1e76a*/
  if ( __n < 0 ) /*0x100b1e777*/
  {
    v18 = 0; /*0x100b1e779*/
    goto LABEL_10; /*0x100b1e779*/
  }
  if ( !__n ) /*0x100b1e78c*/
  {
    v20 = 1; /*0x100b1e7f1*/
    v21 = (__int64)__src; /*0x100b1e7fb*/
    v23 = 0; /*0x100b1e806*/
    i = 0; /*0x100b1e808*/
    goto LABEL_19; /*0x100b1e808*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1e78e*/
  v18 = 1; /*0x100b1e793*/
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1u); /*0x100b1e7a1*/
  if ( !v19 ) /*0x100b1e7a9*/
LABEL_10:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, __n); /*0x100b1e77c*/
  v20 = (__int64)v19; /*0x100b1e7ab*/
  v21 = (__int64)__src; /*0x100b1e7b1*/
  memcpy(v19, __src, __n); /*0x100b1e7b7*/
  if ( (unsigned __int64)__n > 0xF ) /*0x100b1e7c0*/
  {
    v21 = v20; /*0x100b1eb2c*/
    v68 = core::slice::memchr::memchr_aligned::hda948616f04379f9(0, v20, __n); /*0x100b1eb32*/
    v23 = __n; /*0x100b1eb37*/
    if ( (v68 & 1) == 0 ) /*0x100b1eb3c*/
      goto LABEL_19; /*0x100b1eb3c*/
LABEL_40:
    v125[0] = v23; /*0x100b1eb42*/
    v125[1] = v20; /*0x100b1eb49*/
    v125[2] = __n; /*0x100b1eb50*/
    v125[3] = i; /*0x100b1eb57*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100b1eb7f*/
      (__int64)"interface name should not have nulls in it",
      42,
      (__int64)v125,
      (__int64)&off_10154DAC0,
      (__int64)&off_10154DA30);
  }
  for ( i = 0; i != __n; ++i ) /*0x100b1e7c8*/
  {
    if ( !*(_BYTE *)(v20 + i) ) /*0x100b1e7d4*/
    {
      v23 = __n; /*0x100b1ec25*/
      goto LABEL_40; /*0x100b1ec30*/
    }
  }
  v23 = __n; /*0x100b1e7e2*/
  i = __n; /*0x100b1e7e5*/
LABEL_19:
  v125[0] = v23; /*0x100b1e814*/
  v125[1] = v20; /*0x100b1e81b*/
  v125[2] = __n; /*0x100b1e822*/
  v24 = alloc::ffi::c_str::CString::_from_vec_unchecked::hf813a0aca6310dca(v125, v21, i, v23, v16, v17); /*0x100b1e835*/
  v26 = v25; /*0x100b1e838*/
  v27 = alloc::sync::Arc$LT$T$C$A$GT$::make_mut::h92cba3179d38c261(v168); /*0x100b1e83f*/
  v28 = v27; /*0x100b1e844*/
  v29 = *(_BYTE **)(v27 + 104); /*0x100b1e847*/
  if ( v29 ) /*0x100b1e84e*/
  {
    v30 = *(_QWORD *)(v27 + 112); /*0x100b1e850*/
    *v29 = 0; /*0x100b1e854*/
    if ( v30 ) /*0x100b1e85a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b1e861*/
  }
  *(_QWORD *)(v28 + 104) = v24; /*0x100b1e866*/
  *(_QWORD *)(v28 + 112) = v26; /*0x100b1e86a*/
LABEL_23:
  v31 = a9; /*0x100b1e86e*/
  *(_BYTE *)(alloc::sync::Arc$LT$T$C$A$GT$::make_mut::h92cba3179d38c261(v168) + 143) = a9; /*0x100b1e87c*/
  *(_BYTE *)(alloc::sync::Arc$LT$T$C$A$GT$::make_mut::h92cba3179d38c261(v168) + 120) = 0; /*0x100b1e88c*/
  if ( !*(_QWORD *)(v149 + 32) ) /*0x100b1e89c*/
  {
    memcpy(&v125[2], a3, 0x158u); /*0x100b1ea4a*/
    v125[0] = 1; /*0x100b1ea4f*/
    v125[1] = 1; /*0x100b1ea5a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1ea65*/
    v61 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x168u, 8u); /*0x100b1ea74*/
    if ( !v61 ) /*0x100b1ea7c*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 360); /*0x100b1f4a2*/
    v62 = v61; /*0x100b1ea82*/
    memcpy((void *)v61, v125, 0x168u); /*0x100b1ea94*/
    v63 = _InterlockedIncrement64(v62); /*0x100b1ea99*/
    v64 = v62; /*0x100b1ea9e*/
    if ( !((v63 < 0) ^ v32 | (v63 == 0)) ) /*0x100b1eaa1*/
      goto LABEL_95; /*0x100b1eaa1*/
LABEL_99:
    BUG(); /*0x100b1f4c9*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3597af5a92ca6d08(&v127, a3 + 2); /*0x100b1e8ad*/
  v33 = (volatile signed __int64 *)a3[27]; /*0x100b1e8b2*/
  v34 = _InterlockedIncrement64(v33); /*0x100b1e8b9*/
  if ( (v34 < 0) ^ v32 | (v34 == 0) ) /*0x100b1e8bd*/
    goto LABEL_99; /*0x100b1e8bd*/
  v35 = a3[28]; /*0x100b1e8c3*/
  v36 = *((_BYTE *)a3 + 232); /*0x100b1e8ca*/
  v156 = v33; /*0x100b1e8d2*/
  v157 = v35; /*0x100b1e8d9*/
  LOBYTE(v158) = v36; /*0x100b1e8e0*/
  v37 = *a3; /*0x100b1e8e6*/
  v38 = a3[1]; /*0x100b1e8e9*/
  v39 = (volatile signed __int64 *)a3[30]; /*0x100b1e8ed*/
  v40 = _InterlockedIncrement64(v39); /*0x100b1e8f4*/
  if ( (v40 < 0) ^ v32 | (v40 == 0) ) /*0x100b1e8f8*/
    goto LABEL_99; /*0x100b1e8f8*/
  v41 = a3[31]; /*0x100b1e8fe*/
  v134[8] = v39; /*0x100b1e905*/
  v134[9] = v41; /*0x100b1e90c*/
  v42 = *((_BYTE *)a3 + 336); /*0x100b1e913*/
  v43 = (volatile signed __int64 *)a3[32]; /*0x100b1e91b*/
  v44 = _InterlockedIncrement64(v43); /*0x100b1e922*/
  if ( (v44 < 0) ^ v32 | (v44 == 0) ) /*0x100b1e926*/
    goto LABEL_99; /*0x100b1e926*/
  v45 = a3[33]; /*0x100b1e92c*/
  v134[6] = v43; /*0x100b1e933*/
  v134[7] = v45; /*0x100b1e93a*/
  v46 = *((_BYTE *)a3 + 337); /*0x100b1e941*/
  v47 = *((_BYTE *)a3 + 338); /*0x100b1e949*/
  v48 = *((_BYTE *)a3 + 339); /*0x100b1e951*/
  v49 = (volatile signed __int64 *)a3[34]; /*0x100b1e959*/
  v50 = _InterlockedIncrement64(v49); /*0x100b1e960*/
  if ( (v50 < 0) ^ v32 | (v50 == 0) ) /*0x100b1e964*/
    goto LABEL_99; /*0x100b1e964*/
  v51 = a3[35]; /*0x100b1e96a*/
  v134[4] = v49; /*0x100b1e971*/
  v134[5] = v51; /*0x100b1e978*/
  v52 = (volatile signed __int64 *)a3[36]; /*0x100b1e97f*/
  v53 = _InterlockedIncrement64(v52); /*0x100b1e986*/
  if ( (v53 < 0) ^ v32 | (v53 == 0) ) /*0x100b1e98b*/
    goto LABEL_99; /*0x100b1e98b*/
  v176 = v47; /*0x100b1e991*/
  v172 = v46; /*0x100b1e995*/
  v136 = v37; /*0x100b1e999*/
  v138 = v51; /*0x100b1e9a0*/
  v137 = v49; /*0x100b1e9a7*/
  v173 = v48; /*0x100b1e9ae*/
  v139 = v52; /*0x100b1e9b1*/
  v147 = v52; /*0x100b1e9b8*/
  v54 = *((_OWORD *)a3 + 20); /*0x100b1e9bf*/
  v55 = (volatile signed __int64 *)a3[37]; /*0x100b1e9c7*/
  v56 = _InterlockedIncrement64(v55); /*0x100b1e9ce*/
  if ( (v56 < 0) ^ v32 | (v56 == 0) ) /*0x100b1e9d2*/
    goto LABEL_99; /*0x100b1e9d2*/
  v57 = a3[38]; /*0x100b1e9e2*/
  v151 = v55; /*0x100b1e9e9*/
  v134[2] = v55; /*0x100b1e9f0*/
  v134[3] = v57; /*0x100b1e9f7*/
  v58 = a3[7]; /*0x100b1e9fe*/
  v59 = 16 * v58; /*0x100b1ea05*/
  if ( v58 >> 60 != 0 || 16 * v58 > 0x7FFFFFFFFFFFFFF8LL ) /*0x100b1ea1a*/
  {
    v60 = 0; /*0x100b1ea25*/
    goto LABEL_32; /*0x100b1ea25*/
  }
  v171 = 0x8000000000000000LL; /*0x100b1eaac*/
  v159 = v58; /*0x100b1eab0*/
  v153 = v57; /*0x100b1eab7*/
  v146 = v54; /*0x100b1eabe*/
  v144 = v45; /*0x100b1eac5*/
  v143 = v43; /*0x100b1eacc*/
  v174 = v42; /*0x100b1ead3*/
  v142 = v41; /*0x100b1ead7*/
  v141 = v39; /*0x100b1eade*/
  v140 = v38; /*0x100b1eae5*/
  v65 = (const void *)a3[6]; /*0x100b1eaec*/
  if ( v59 ) /*0x100b1eaf3*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1eaf9*/
    v60 = 8; /*0x100b1eafe*/
    v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v59, 8u); /*0x100b1eb0c*/
    if ( !v66 ) /*0x100b1eb14*/
LABEL_32:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v60, v59); /*0x100b1ea28*/
    v67 = v66; /*0x100b1eb1a*/
    v163 = v159; /*0x100b1eb24*/
  }
  else
  {
    v67 = 8; /*0x100b1eb89*/
    v163 = 0; /*0x100b1eb8e*/
  }
  v152 = v67; /*0x100b1eba0*/
  memcpy((void *)v67, v65, v59); /*0x100b1ebad*/
  v69 = 16 * a3[10]; /*0x100b1ebb9*/
  if ( (unsigned __int64)a3[10] > 0xFFFFFFFFFFFFFFFLL || v69 > 0x7FFFFFFFFFFFFFF8LL ) /*0x100b1ebc6*/
  {
    v70 = 0; /*0x100b1ebcd*/
    goto LABEL_44; /*0x100b1ebcd*/
  }
  v71 = (const void *)a3[9]; /*0x100b1ebe0*/
  v154 = a3[10]; /*0x100b1ebe7*/
  if ( v69 ) /*0x100b1ebee*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1ebf0*/
    v70 = 8; /*0x100b1ebf5*/
    v72 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v69, 8u); /*0x100b1ec03*/
    if ( !v72 ) /*0x100b1ec0b*/
LABEL_44:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v70, v69); /*0x100b1ebd0*/
    v73 = v72; /*0x100b1ec0d*/
    v160 = v154; /*0x100b1ec17*/
  }
  else
  {
    v73 = 8; /*0x100b1ec35*/
    v160 = 0; /*0x100b1ec3b*/
  }
  v74 = v73; /*0x100b1ec46*/
  v75 = v71; /*0x100b1ec49*/
  memcpy((void *)v73, v71, v69); /*0x100b1ec4f*/
  v78 = (volatile signed __int64 *)a3[39]; /*0x100b1ec54*/
  v79 = _InterlockedIncrement64(v78); /*0x100b1ec5b*/
  v80 = v176; /*0x100b1ec5f*/
  v81 = v159; /*0x100b1ec64*/
  if ( (v79 < 0) ^ v32 | (v79 == 0) ) /*0x100b1ec6b*/
    goto LABEL_99; /*0x100b1ec6b*/
  v134[1] = v78; /*0x100b1ec71*/
  v82 = a3[11]; /*0x100b1ec78*/
  v83 = 0x8000000000000000LL; /*0x100b1ec7c*/
  v84 = 0x8000000000000002LL; /*0x100b1ec86*/
  v85 = v146; /*0x100b1ec8d*/
  v86 = v153; /*0x100b1ec94*/
  if ( v82 == 0x8000000000000002LL ) /*0x100b1ec9b*/
  {
    v164 = v78; /*0x100b1ec9d*/
    v171 = v73; /*0x100b1eca1*/
    goto LABEL_87; /*0x100b1eca5*/
  }
  if ( __OFSUB__(-v82, 1) ) /*0x100b1ecb0*/
  {
    v87 = a3[14]; /*0x100b1ed1f*/
    if ( v87 < 0 ) /*0x100b1ed26*/
      goto LABEL_64; /*0x100b1ed26*/
    v170 = *((unsigned __int16 *)a3 + 60); /*0x100b1ed2d*/
    LODWORD(v171) = *((unsigned __int16 *)a3 + 61); /*0x100b1ed36*/
    v93 = (const void *)a3[13]; /*0x100b1ed39*/
    if ( v87 ) /*0x100b1ed3d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1ed43*/
      v94 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v87, 1u); /*0x100b1ed50*/
      if ( !v94 ) /*0x100b1ed58*/
        goto LABEL_100; /*0x100b1ed58*/
      v74 = v94; /*0x100b1ed5e*/
    }
    else
    {
      v74 = 1; /*0x100b1ee0e*/
    }
    v164 = v78; /*0x100b1ee13*/
    v166 = v74; /*0x100b1ee17*/
    memcpy((void *)v74, v93, v87); /*0x100b1ee21*/
    v169 = v87; /*0x100b1ee26*/
    v167 = v87; /*0x100b1ee2a*/
    v85 = v146; /*0x100b1ee2e*/
    v84 = 0x8000000000000000LL; /*0x100b1ee35*/
    v106 = v170; /*0x100b1ee3f*/
    LOWORD(v107) = v171; /*0x100b1ee43*/
    goto LABEL_85; /*0x100b1ee47*/
  }
  if ( v82 != 0x8000000000000001LL ) /*0x100b1ecbf*/
  {
    v87 = a3[13]; /*0x100b1ed66*/
    if ( v87 < 0 ) /*0x100b1ed6d*/
      goto LABEL_64; /*0x100b1ed6d*/
    LOBYTE(v170) = *((_BYTE *)a3 + 140); /*0x100b1ed86*/
    v145 = (unsigned __int64)a3[17]; /*0x100b1ed92*/
    v96 = (const void *)a3[12]; /*0x100b1ed99*/
    if ( !v87 ) /*0x100b1ed9d*/
    {
      v98 = 1; /*0x100b1ee4c*/
      goto LABEL_74; /*0x100b1ee4c*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1eda3*/
    v97 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v87, 1u); /*0x100b1edb0*/
    if ( v97 ) /*0x100b1edb8*/
    {
      v98 = v97; /*0x100b1edbe*/
LABEL_74:
      v167 = v98; /*0x100b1ee51*/
      memcpy((void *)v98, v96, v87); /*0x100b1ee5b*/
      v108 = a3[16]; /*0x100b1ee60*/
      v109 = 8 * v108; /*0x100b1ee67*/
      v165 = v108; /*0x100b1ee6f*/
      v166 = v87; /*0x100b1ee90*/
      if ( v108 >> 61 != 0 || 8 * v108 > 0x7FFFFFFFFFFFFFFELL ) /*0x100b1ee8b*/
      {
        v110 = 0; /*0x100b1ee96*/
        goto LABEL_76; /*0x100b1ee96*/
      }
      v111 = (const void *)a3[15]; /*0x100b1eea9*/
      if ( v109 ) /*0x100b1eeb0*/
      {
        v161 = (const void *)a3[15]; /*0x100b1eeb2*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1eeb9*/
        v110 = 2; /*0x100b1eebe*/
        v112 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v109, 2u); /*0x100b1eecc*/
        if ( !v112 ) /*0x100b1eed4*/
LABEL_76:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v110, v109); /*0x100b1ee99*/
        v113 = v112; /*0x100b1eed6*/
        v169 = v165; /*0x100b1eedd*/
        v87 = v166; /*0x100b1eee1*/
        v111 = v161; /*0x100b1eee5*/
      }
      else
      {
        v113 = 2; /*0x100b1eeee*/
        v169 = 0; /*0x100b1eef3*/
      }
      memcpy((void *)v113, v111, v109); /*0x100b1ef01*/
      BYTE4(v125[6]) = v170; /*0x100b1ef0a*/
      LODWORD(v125[6]) = v145; /*0x100b1ef17*/
      v125[0] = v87; /*0x100b1ef1f*/
      v125[1] = v167; /*0x100b1ef2a*/
      v125[2] = v87; /*0x100b1ef31*/
      v125[3] = v169; /*0x100b1ef3c*/
      v170 = v113; /*0x100b1ef43*/
      v125[4] = v113; /*0x100b1ef47*/
      v125[5] = v165; /*0x100b1ef52*/
      v114 = *((_BYTE *)a3 + 192); /*0x100b1ef59*/
      if ( a3[21] == 0x8000000000000000LL ) /*0x100b1ef72*/
      {
        v162 = (const void *)a3[22]; /*0x100b1ef7b*/
        v115 = (volatile signed __int64 *)a3[23]; /*0x100b1ef7f*/
      }
      else
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100b1ef96*/
          (size_t *)v126,
          (__int64)(a3 + 21));
        v171 = *(_QWORD *)v126; /*0x100b1efa2*/
        v162 = *(const void **)&v126[8]; /*0x100b1efad*/
        v115 = *(volatile signed __int64 **)&v126[16]; /*0x100b1efb1*/
      }
      v155 = v115; /*0x100b1efb8*/
      v175 = v114; /*0x100b1efbf*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbbac5c5b7aa94e44(v126, a3 + 18); /*0x100b1efd0*/
      v164 = v78; /*0x100b1efd5*/
      v106 = v170; /*0x100b1efd9*/
      v107 = WORD1(v170); /*0x100b1efe0*/
      v104 = HIDWORD(v170); /*0x100b1efe7*/
      v74 = v125[6]; /*0x100b1efeb*/
      v130 = *(_QWORD *)v126; /*0x100b1f000*/
      v131 = *(_QWORD *)&v126[8]; /*0x100b1f007*/
      v132 = *(_QWORD *)&v126[16]; /*0x100b1f015*/
      v100 = v171; /*0x100b1f01c*/
      v84 = v87; /*0x100b1f020*/
      v85 = v146; /*0x100b1f023*/
      v105 = v165; /*0x100b1f02a*/
LABEL_85:
      v171 = v73; /*0x100b1f02e*/
      v103 = a3[25]; /*0x100b1f032*/
      v90 = a3[26]; /*0x100b1f039*/
      LOWORD(v125[0]) = v106; /*0x100b1f040*/
      WORD1(v125[0]) = v107; /*0x100b1f047*/
      HIDWORD(v125[0]) = v104; /*0x100b1f04f*/
      *(_QWORD *)v126 = v105; /*0x100b1f055*/
      v101 = v134; /*0x100b1f05c*/
      v102 = &v133; /*0x100b1f063*/
      goto LABEL_86; /*0x100b1f063*/
    }
LABEL_100:
    v95 = 1; /*0x100b1f4cb*/
    goto LABEL_65; /*0x100b1f4d0*/
  }
  v87 = a3[14]; /*0x100b1ecc5*/
  v88 = v87 == 0; /*0x100b1ecc9*/
  if ( v87 < 0 ) /*0x100b1eccc*/
  {
LABEL_64:
    v95 = 0; /*0x100b1ed6f*/
    goto LABEL_65; /*0x100b1ed6f*/
  }
  v169 = a3[14]; /*0x100b1ecd2*/
  v89 = a3[15]; /*0x100b1ecd6*/
  v90 = a3[16]; /*0x100b1ecda*/
  v91 = (const void *)a3[13]; /*0x100b1ece1*/
  v164 = v78; /*0x100b1ece5*/
  v170 = v89; /*0x100b1ece9*/
  if ( !v88 ) /*0x100b1eced*/
  {
    v171 = (unsigned __int64)v91; /*0x100b1ecf3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1ecf7*/
    v92 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v169, 1u); /*0x100b1ed05*/
    if ( v92 ) /*0x100b1ed0d*/
    {
      v74 = v92; /*0x100b1ed13*/
      v91 = (const void *)v171; /*0x100b1ed16*/
      goto LABEL_70; /*0x100b1ed1a*/
    }
    v95 = 1; /*0x100b1f4d5*/
    v87 = v169; /*0x100b1f4da*/
LABEL_65:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v95, v87); /*0x100b1ed71*/
  }
  v74 = 1; /*0x100b1edc6*/
LABEL_70:
  v171 = v73; /*0x100b1edcb*/
  v166 = v74; /*0x100b1edcf*/
  v99 = v169; /*0x100b1edd3*/
  memcpy((void *)v74, v91, v169); /*0x100b1edda*/
  v84 = 0x8000000000000001LL; /*0x100b1ede9*/
  v101 = v126; /*0x100b1edec*/
  v102 = v125; /*0x100b1edf3*/
  v167 = v99; /*0x100b1edfa*/
  v85 = v146; /*0x100b1edfe*/
  v103 = v170; /*0x100b1ee05*/
LABEL_86:
  *v102 = v103; /*0x100b1f06a*/
  *v101 = v90; /*0x100b1f06d*/
  v161 = (const void *)v125[0]; /*0x100b1f077*/
  *(_QWORD *)&v145 = *(_QWORD *)v126; /*0x100b1f085*/
  v165 = v133; /*0x100b1f093*/
  v170 = v134[0]; /*0x100b1f09e*/
  v80 = v176; /*0x100b1f0a2*/
  v86 = v153; /*0x100b1f0a7*/
  v81 = v159; /*0x100b1f0ae*/
  v82 = v166; /*0x100b1f0b5*/
  v83 = v169; /*0x100b1f0b9*/
  v73 = v167; /*0x100b1f0bd*/
  v76 = v175; /*0x100b1f0c1*/
  v75 = v162; /*0x100b1f0c5*/
  v78 = v155; /*0x100b1f0c9*/
  v77 = v100; /*0x100b1f0d0*/
LABEL_87:
  *(_QWORD *)&v126[24] = v128; /*0x100b1f0d3*/
  *(_QWORD *)&v126[16] = v127; /*0x100b1f0f6*/
  *(_QWORD *)&v126[216] = v156; /*0x100b1f104*/
  *(_QWORD *)&v126[224] = v157; /*0x100b1f112*/
  *(_QWORD *)&v126[232] = v158; /*0x100b1f120*/
  *(_QWORD *)v126 = v136; /*0x100b1f12e*/
  *(_QWORD *)&v126[8] = v140; /*0x100b1f13c*/
  *(_QWORD *)&v126[240] = v141; /*0x100b1f14a*/
  *(_QWORD *)&v126[248] = v142; /*0x100b1f158*/
  v126[336] = v174; /*0x100b1f164*/
  *(_QWORD *)&v126[256] = v143; /*0x100b1f172*/
  *(_QWORD *)&v126[264] = v144; /*0x100b1f180*/
  v126[337] = v172; /*0x100b1f18c*/
  v126[338] = v80; /*0x100b1f193*/
  v126[339] = v173; /*0x100b1f19f*/
  *(_QWORD *)&v126[272] = v137; /*0x100b1f1ad*/
  *(_QWORD *)&v126[280] = v138; /*0x100b1f1bb*/
  *(_QWORD *)&v126[288] = v139; /*0x100b1f1c9*/
  *(_OWORD *)&v126[320] = v85; /*0x100b1f1d0*/
  *(_QWORD *)&v126[296] = v151; /*0x100b1f1de*/
  *(_QWORD *)&v126[304] = v86; /*0x100b1f1e5*/
  *(_QWORD *)&v126[40] = v163; /*0x100b1f1f0*/
  *(_QWORD *)&v126[48] = v152; /*0x100b1f1fe*/
  *(_QWORD *)&v126[56] = v81; /*0x100b1f205*/
  *(_QWORD *)&v126[64] = v160; /*0x100b1f213*/
  *(_QWORD *)&v126[72] = v171; /*0x100b1f21e*/
  *(_QWORD *)&v126[80] = v154; /*0x100b1f22c*/
  *(_QWORD *)&v126[312] = v164; /*0x100b1f237*/
  *(_QWORD *)&v126[88] = v84; /*0x100b1f23e*/
  *(_QWORD *)&v126[96] = v73; /*0x100b1f245*/
  *(_QWORD *)&v126[104] = v82; /*0x100b1f24c*/
  *(_QWORD *)&v126[112] = v83; /*0x100b1f253*/
  *(_QWORD *)&v126[120] = v161; /*0x100b1f261*/
  *(_QWORD *)&v126[128] = v145; /*0x100b1f26f*/
  *(_QWORD *)&v126[136] = v74; /*0x100b1f276*/
  *(_QWORD *)&v126[144] = v130; /*0x100b1f284*/
  *(_QWORD *)&v126[152] = v131; /*0x100b1f292*/
  *(_QWORD *)&v126[160] = v132; /*0x100b1f2a0*/
  *(_QWORD *)&v126[168] = v77; /*0x100b1f2a7*/
  *(_QWORD *)&v126[176] = v75; /*0x100b1f2ae*/
  *(_QWORD *)&v126[184] = v78; /*0x100b1f2b5*/
  v126[192] = v76; /*0x100b1f2bc*/
  *(_QWORD *)&v126[200] = v165; /*0x100b1f2c6*/
  *(_QWORD *)&v126[208] = v170; /*0x100b1f2d1*/
  v116 = v129; /*0x100b1f2df*/
  *(_QWORD *)&v126[32] = 0; /*0x100b1f2e6*/
  if ( v129 ) /*0x100b1f2f4*/
  {
    v117 = v128 + 8; /*0x100b1f2f6*/
    do /*0x100b1f307*/
    {
      if ( *(_QWORD *)(v117 - 8) ) /*0x100b1f309*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b1f31a*/
      v117 += 24; /*0x100b1f300*/
      --v116; /*0x100b1f304*/
    }
    while ( v116 ); /*0x100b1f307*/
  }
  memcpy(&v125[2], a3, 0x158u); /*0x100b1f333*/
  v125[0] = 1; /*0x100b1f338*/
  v125[1] = 1; /*0x100b1f343*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1f34e*/
  v118 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x168u, 8u); /*0x100b1f35d*/
  if ( !v118 ) /*0x100b1f365*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 360); /*0x100b1f4b3*/
  v62 = v118; /*0x100b1f36b*/
  memcpy((void *)v118, v125, 0x168u); /*0x100b1f37d*/
  v156 = v62; /*0x100b1f382*/
  memcpy(&v125[2], v126, 0x158u); /*0x100b1f39f*/
  v125[0] = 1; /*0x100b1f3a4*/
  v125[1] = 1; /*0x100b1f3af*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1f3ba*/
  v119 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x168u, 8u); /*0x100b1f3c9*/
  if ( !v119 ) /*0x100b1f3d1*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 360); /*0x100b1f4c4*/
  v64 = v119; /*0x100b1f3d7*/
  memcpy((void *)v119, v125, 0x168u); /*0x100b1f3e9*/
  v31 = a9; /*0x100b1f3ee*/
LABEL_95:
  v120 = v168; /*0x100b1f3f3*/
  result = v135; /*0x100b1f3ff*/
  *(_QWORD *)(v135 + 72) = v168[2]; /*0x100b1f406*/
  v122 = *v120; /*0x100b1f40a*/
  *(_QWORD *)(result + 64) = v120[1]; /*0x100b1f411*/
  *(_QWORD *)(result + 56) = v122; /*0x100b1f415*/
  v123 = v150; /*0x100b1f419*/
  v124 = v150[1]; /*0x100b1f423*/
  *(_QWORD *)(result + 16) = *v150; /*0x100b1f427*/
  *(_QWORD *)(result + 24) = v124; /*0x100b1f42b*/
  *(_QWORD *)(result + 32) = v123[2]; /*0x100b1f433*/
  *(_QWORD *)(result + 40) = v123[3]; /*0x100b1f43b*/
  *(_QWORD *)(result + 48) = v123[4]; /*0x100b1f443*/
  *(_QWORD *)(result + 80) = v62; /*0x100b1f447*/
  *(_QWORD *)(result + 88) = v64; /*0x100b1f44b*/
  *(_QWORD *)(result + 96) = v149; /*0x100b1f456*/
  *(_BYTE *)(result + 136) = 0; /*0x100b1f45a*/
  *(_DWORD *)(result + 8) = 1000000000; /*0x100b1f461*/
  *(_BYTE *)(result + 137) = v31; /*0x100b1f468*/
  *(_BYTE *)(result + 138) = a10; /*0x100b1f46f*/
  *(_QWORD *)(result + 104) = 0; /*0x100b1f476*/
  *(_QWORD *)(result + 120) = 0; /*0x100b1f47e*/
  return result; /*0x100b1f486*/
}