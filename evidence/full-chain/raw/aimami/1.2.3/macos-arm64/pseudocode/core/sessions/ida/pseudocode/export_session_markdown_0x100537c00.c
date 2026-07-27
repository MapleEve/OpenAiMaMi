// __ZN13codexmate_lib4core8sessions23export_session_markdown @ 0x100537c00 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::sessions::export_session_markdown::h74fb29cfcc312df6(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7)
{
  size_t v13; // rdx
  size_t v14; // rbx
  void *v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  char *v18; // r14
  __int64 v19; // rax
  char *v20; // r15
  unsigned __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r13
  void *v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(); // rdx
  __int64 v29; // rsi
  void *v30; // rdi
  size_t v31; // r8
  __int64 v32; // r9
  size_t v33; // rsi
  double v34; // xmm0_8
  unsigned __int64 v35; // rbx
  void *v36; // rdi
  __int64 v37; // rbx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  char *v42; // rsi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 v46; // rdx
  char *v47; // rdi
  void *v49; // r14
  void *v50; // rbx
  __int64 v51; // rdx
  void *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // r14
  void *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rax
  void *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  bool v64; // zf
  __int64 v65; // rcx
  __int64 v66; // rax
  void *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rbx
  void *v71; // r14
  size_t v72; // r15
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  size_t v82; // rdx
  size_t v83; // r12
  char *v84; // r14
  char *v85; // rbx
  size_t v86; // r14
  __int64 v87; // r15
  __int64 v88; // r12
  _QWORD __dst[41]; // [rsp+8h] [rbp-468h] BYREF
  __int64 v90; // [rsp+150h] [rbp-320h] BYREF
  __int64 v91; // [rsp+158h] [rbp-318h]
  void *v92; // [rsp+160h] [rbp-310h]
  _QWORD v93[3]; // [rsp+168h] [rbp-308h] BYREF
  __int64 v94; // [rsp+180h] [rbp-2F0h] BYREF
  __int128 v95; // [rsp+188h] [rbp-2E8h]
  void *v96; // [rsp+198h] [rbp-2D8h]
  __int64 v97; // [rsp+1A0h] [rbp-2D0h]
  __int64 v98; // [rsp+1A8h] [rbp-2C8h]
  __int64 v99; // [rsp+1B0h] [rbp-2C0h]
  __int64 (__fastcall *v100)(); // [rsp+1B8h] [rbp-2B8h]
  __int64 v101; // [rsp+1C0h] [rbp-2B0h]
  void *v102; // [rsp+1C8h] [rbp-2A8h]
  size_t v103; // [rsp+1D0h] [rbp-2A0h]
  __int64 v104; // [rsp+1D8h] [rbp-298h]
  __int64 v105; // [rsp+1E0h] [rbp-290h]
  char v106[8]; // [rsp+1E8h] [rbp-288h] BYREF
  __int64 v107; // [rsp+1F0h] [rbp-280h]
  __int64 v108; // [rsp+1F8h] [rbp-278h]
  __int64 v109; // [rsp+208h] [rbp-268h]
  __int64 v110; // [rsp+210h] [rbp-260h]
  __int64 v111; // [rsp+220h] [rbp-250h]
  __int64 v112; // [rsp+228h] [rbp-248h]
  __int64 v113; // [rsp+238h] [rbp-238h]
  __int64 v114; // [rsp+240h] [rbp-230h]
  __int64 v115; // [rsp+250h] [rbp-220h]
  __int64 v116; // [rsp+258h] [rbp-218h]
  _BYTE v117[96]; // [rsp+268h] [rbp-208h] BYREF
  __int64 v118; // [rsp+2C8h] [rbp-1A8h]
  size_t v119; // [rsp+2D0h] [rbp-1A0h]
  char *v120; // [rsp+2D8h] [rbp-198h]
  __int128 v121; // [rsp+2E0h] [rbp-190h] BYREF
  __int64 v122; // [rsp+2F0h] [rbp-180h]
  __int64 v123; // [rsp+2F8h] [rbp-178h]
  __int64 v124; // [rsp+300h] [rbp-170h]
  __int64 v125; // [rsp+308h] [rbp-168h]
  __int64 v126; // [rsp+310h] [rbp-160h] BYREF
  __int64 v127; // [rsp+318h] [rbp-158h]
  __int64 v128; // [rsp+320h] [rbp-150h]
  _QWORD v129[4]; // [rsp+328h] [rbp-148h] BYREF
  __int64 v130; // [rsp+348h] [rbp-128h] BYREF
  void *v131; // [rsp+350h] [rbp-120h]
  size_t v132; // [rsp+358h] [rbp-118h]
  void *v133; // [rsp+360h] [rbp-110h] BYREF
  __int64 v134; // [rsp+368h] [rbp-108h] BYREF
  void *v135; // [rsp+370h] [rbp-100h]
  __int64 v136; // [rsp+378h] [rbp-F8h]
  __int64 v137; // [rsp+380h] [rbp-F0h] BYREF
  __int64 v138; // [rsp+388h] [rbp-E8h]
  __int64 v139; // [rsp+390h] [rbp-E0h]
  __int64 v140; // [rsp+398h] [rbp-D8h] BYREF
  void *__src; // [rsp+3A0h] [rbp-D0h]
  size_t __n; // [rsp+3A8h] [rbp-C8h]
  void *v143; // [rsp+3B0h] [rbp-C0h]
  __int64 v144; // [rsp+3B8h] [rbp-B8h]
  void *v145; // [rsp+3C0h] [rbp-B0h]
  char *v146; // [rsp+3C8h] [rbp-A8h]
  __int64 v147; // [rsp+3D0h] [rbp-A0h]
  __int128 v148; // [rsp+3D8h] [rbp-98h] BYREF
  __int64 v149; // [rsp+3E8h] [rbp-88h]
  __int64 v150; // [rsp+3F0h] [rbp-80h]
  __int64 v151; // [rsp+3F8h] [rbp-78h]
  __int64 v152; // [rsp+400h] [rbp-70h]
  __int64 v153; // [rsp+408h] [rbp-68h]
  void *__s2[2]; // [rsp+410h] [rbp-60h]
  __int64 v155; // [rsp+420h] [rbp-50h]
  char *v156; // [rsp+428h] [rbp-48h]
  __int64 v157; // [rsp+430h] [rbp-40h]
  char *v158; // [rsp+438h] [rbp-38h]
  _QWORD *v159; // [rsp+440h] [rbp-30h]

  __s2[0] = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3, a4); /*0x100537c2b*/
  if ( !v13 ) /*0x100537c32*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a4); /*0x100537f27*/
    v39 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x100537f36*/
    if ( !v39 ) /*0x100537f3e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x100538bbf*/
    *(_QWORD *)((char *)v39 + 14) = 0xBAA9E7BAB8E4BD83LL; /*0x100537f4e*/
    v39[1] = 0xBD83E88DB8E42044LL; /*0x100537f5c*/
    *v39 = 0x49208BA8E7BFBAE7LL; /*0x100537f6a*/
    *a1 = 9; /*0x100537f6d*/
    a1[1] = 22; /*0x100537f75*/
    a1[2] = v39; /*0x100537f7d*/
    a1[3] = 22; /*0x100537f81*/
    return a1; /*0x100537f89*/
  }
  v14 = v13; /*0x100537c38*/
  v15 = a2; /*0x100537c42*/
  codexmate_lib::core::sessions::load_sessions::h8bd835a57b4abc44(__dst, a2, a7); /*0x100537c45*/
  v16 = __dst[0]; /*0x100537c4a*/
  v17 = (_QWORD *)__dst[1]; /*0x100537c51*/
  v18 = (char *)__dst[2]; /*0x100537c58*/
  v19 = __dst[3]; /*0x100537c5f*/
  if ( __dst[0] != 11 ) /*0x100537c6a*/
  {
    a1[11] = __dst[11]; /*0x100537f95*/
    a1[10] = __dst[10]; /*0x100537fa0*/
    a1[9] = __dst[9]; /*0x100537fab*/
    a1[8] = __dst[8]; /*0x100537fb6*/
    a1[7] = __dst[7]; /*0x100537fc1*/
    a1[6] = __dst[6]; /*0x100537fcc*/
    v40 = __dst[4]; /*0x100537fd0*/
    a1[5] = __dst[5]; /*0x100537fde*/
    a1[4] = v40; /*0x100537fe2*/
    *a1 = v16; /*0x100537fe6*/
    a1[1] = v17; /*0x100537fea*/
    a1[2] = v18; /*0x100537fee*/
    a1[3] = v19; /*0x100537ff2*/
    return a1; /*0x100537ff6*/
  }
  v153 = a5; /*0x100537c70*/
  v155 = a6; /*0x100537c74*/
  v140 = __dst[2]; /*0x100537c83*/
  v157 = __dst[1]; /*0x100537c8a*/
  __n = __dst[1]; /*0x100537c8e*/
  __src = (void *)__dst[2]; /*0x100537c95*/
  v156 = (char *)(__dst[2] + 328LL * __dst[3]); /*0x100537c9c*/
  v143 = v156; /*0x100537ca0*/
  v20 = (char *)__dst[2]; /*0x100537ca7*/
  if ( !__dst[3] ) /*0x100537cad*/
    goto LABEL_22; /*0x100537cad*/
  v159 = a1; /*0x100537cb3*/
  v21 = 328LL * __dst[3] - 328; /*0x100537cb7*/
  v158 = (char *)__dst[2]; /*0x100537cbe*/
  v22 = __dst[2] + 328LL; /*0x100537cc2*/
  while ( 1 ) /*0x100537d03*/
  {
    v15 = (void *)(v22 - 328); /*0x100537d03*/
    memcpy(__dst, (const void *)(v22 - 328), sizeof(__dst)); /*0x100537d12*/
    if ( __dst[4] == v14 ) /*0x100537d1e*/
    {
      v17 = (_QWORD *)__dst[3]; /*0x100537d20*/
      v15 = __s2[0]; /*0x100537d27*/
      if ( !memcmp((const void *)__dst[3], __s2[0], v14) ) /*0x100537d2e*/
        break; /*0x100537d2e*/
    }
    v17 = __dst; /*0x100537ce0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h33ddcaa040d12613(__dst); /*0x100537ce3*/
LABEL_6:
    v21 -= 328LL; /*0x100537ce8*/
    v22 += 328; /*0x100537cef*/
    if ( v21 == -328 ) /*0x100537cfd*/
    {
      v20 = v156; /*0x100537ffb*/
      __src = v156; /*0x100537fff*/
      a1 = v159; /*0x100538006*/
      v18 = v158; /*0x10053800a*/
LABEL_22:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v15); /*0x10053800e*/
      v41 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x10053801d*/
      if ( !v41 ) /*0x100538025*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100538bce*/
      v42 = v156; /*0x10053802e*/
      v43 = (0xC7CE0C7CE0C7CE0DLL * (unsigned __int128)(unsigned __int64)(v156 - v20)) >> 64; /*0x100538042*/
      *(_QWORD *)((char *)v41 + 13) = 0x8BA8E7BFBAE794BALL; /*0x10053804f*/
      v41[1] = 0xE794BAE5B9AFE5B0LL; /*0x10053805d*/
      *v41 = 0x88E5BE89E6AA9CE6LL; /*0x10053806b*/
      *a1 = 10; /*0x10053806e*/
      a1[1] = 21; /*0x100538076*/
      a1[2] = v41; /*0x10053807e*/
      a1[3] = 21; /*0x100538082*/
      if ( v42 != v20 ) /*0x10053808d*/
      {
        v44 = v43 >> 8; /*0x100538092*/
        do /*0x1005380b2*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h33ddcaa040d12613(v20); /*0x1005380a3*/
          v20 += 328; /*0x1005380a8*/
          --v44; /*0x1005380af*/
        }
        while ( v44 ); /*0x1005380b2*/
      }
      if ( !v157 ) /*0x1005380bb*/
        return a1; /*0x1005380bb*/
      v45 = 328 * v157; /*0x1005380bd*/
      v46 = 8; /*0x1005380c4*/
      v47 = v18; /*0x1005380c9*/
LABEL_28:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v45, v46); /*0x1005380cc*/
      return a1; /*0x1005380cc*/
    }
  }
  v23 = __dst[0]; /*0x100537d37*/
  if ( __dst[0] == 2 ) /*0x100537d42*/
    goto LABEL_6; /*0x100537d42*/
  v24 = *(void **)(v22 - 304); /*0x100537d44*/
  v25 = *(_QWORD *)(v22 - 296); /*0x100537d4b*/
  v156 = *(char **)(v22 - 312); /*0x100537d59*/
  *(_OWORD *)__s2 = *(_OWORD *)(v22 - 320); /*0x100537d65*/
  v26 = *(_QWORD *)(v22 - 288); /*0x100537d69*/
  v27 = *(_QWORD *)(v22 - 280); /*0x100537d70*/
  v28 = *(__int64 (__fastcall **)())(v22 - 272); /*0x100537d77*/
  v29 = *(_QWORD *)(v22 - 264); /*0x100537d7e*/
  v30 = *(void **)(v22 - 256); /*0x100537d85*/
  v31 = *(_QWORD *)(v22 - 248); /*0x100537d8c*/
  v32 = *(_QWORD *)(v22 - 240); /*0x100537d93*/
  v105 = *(_QWORD *)(v22 - 232); /*0x100537da1*/
  v104 = v32; /*0x100537da8*/
  v103 = v31; /*0x100537daf*/
  v102 = v30; /*0x100537db6*/
  v101 = v29; /*0x100537dbd*/
  v100 = v28; /*0x100537dc4*/
  v99 = v27; /*0x100537dcb*/
  v33 = v22 - 224; /*0x100537dd2*/
  v98 = v26; /*0x100537dd9*/
  memmove(v106, (const void *)(v22 - 224), 0xE0u); /*0x100537dec*/
  v94 = v23; /*0x100537df1*/
  v34 = *(double *)__s2; /*0x100537df8*/
  v95 = *(_OWORD *)__s2; /*0x100537dfc*/
  __s2[0] = v24; /*0x100537e03*/
  v96 = v24; /*0x100537e07*/
  v118 = v25; /*0x100537e0e*/
  v97 = v25; /*0x100537e15*/
  if ( v21 ) /*0x100537e1f*/
  {
    v35 = v21 / 0x148; /*0x100537e34*/
    do /*0x100537e52*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h33ddcaa040d12613(v22); /*0x100537e43*/
      v22 += 328; /*0x100537e48*/
      --v35; /*0x100537e4f*/
    }
    while ( v35 ); /*0x100537e52*/
  }
  a1 = v159; /*0x100537e5b*/
  v36 = v158; /*0x100537e5f*/
  if ( v157 ) /*0x100537e63*/
  {
    v33 = 328 * v157; /*0x100537e65*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v158, 328 * v157, 8); /*0x100537e71*/
  }
  if ( v117[95] ) /*0x100537e7d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v33); /*0x100537e83*/
    v37 = 54; /*0x100537e88*/
    v38 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x100537e97*/
    if ( v38 ) /*0x100537e9f*/
    {
      *(_QWORD *)((char *)v38 + 46) = 0x6E776F646B72614DLL; /*0x100537eaf*/
      v38[5] = 0x614D20BA87E5BCAFLL; /*0x100537ebd*/
      v38[4] = 0xE595B3E6A097E68CLL; /*0x100537ecb*/
      v38[3] = 0xBCEFB6BBE48796E6LL; /*0x100537ed9*/
      v38[2] = 0x2074756F6C6C6F72LL; /*0x100537ee7*/
      v38[1] = 0x2091B0E5BABCE78BLL; /*0x100537ef5*/
      *v38 = 0xA8E7BFBAE7A5AFE8LL; /*0x100537f03*/
      *a1 = 10; /*0x100537f06*/
      a1[1] = 54; /*0x100537f0e*/
      a1[2] = v38; /*0x100537f16*/
      a1[3] = 54; /*0x100537f1a*/
      goto LABEL_37; /*0x100537f22*/
    }
    goto LABEL_128; /*0x100537e9f*/
  }
  if ( __OFSUB__(0, v101) /*0x100538111*/
    || (v49 = v102,
        v50 = (void *)v103,
        v36 = v102,
        v33 = v103,
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v102, v103),
        !v51) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v33); /*0x10053818e*/
    v37 = 36; /*0x100538193*/
    v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x1005381a2*/
    if ( v53 ) /*0x1005381aa*/
    {
      *(_QWORD *)(v53 + 24) = 0xB7E8B6BBE48796E6LL; /*0x1005381ba*/
      *(_QWORD *)(v53 + 16) = 0x2074756F6C6C6F72LL; /*0x1005381c8*/
      *(_QWORD *)(v53 + 8) = 0x2095BDE5B0AEE8AALL; /*0x1005381d6*/
      *(_QWORD *)v53 = 0x9CE68BA8E7BFBAE7LL; /*0x1005381e4*/
      *(_DWORD *)(v53 + 32) = -2067864145; /*0x1005381e7*/
      *a1 = 10; /*0x1005381ee*/
      a1[1] = 36; /*0x1005381f6*/
      a1[2] = v53; /*0x1005381fe*/
      a1[3] = 36; /*0x100538202*/
      goto LABEL_37; /*0x100538202*/
    }
LABEL_128:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v37); /*0x100538c00*/
  }
  if ( !(unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b(v49, (size_t)v50) ) /*0x100538120*/
  {
    v140 = (__int64)v49; /*0x10053821b*/
    __src = v50; /*0x100538222*/
    __dst[0] = &v140; /*0x100538230*/
    __dst[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10053823e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v93, &unk_1017C1B43, __dst); /*0x10053825a*/
    a1[3] = v93[2]; /*0x100538266*/
    v54 = v93[0]; /*0x10053826a*/
    a1[2] = v93[1]; /*0x100538278*/
    a1[1] = v54; /*0x10053827c*/
    *a1 = 10; /*0x100538280*/
    goto LABEL_37; /*0x100538288*/
  }
  LODWORD(v148) = 0; /*0x100538126*/
  WORD2(v148) = 438; /*0x100538130*/
  *(_DWORD *)((char *)&v148 + 6) = 1; /*0x100538139*/
  WORD5(v148) = 0; /*0x100538143*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v140, &v148, v49, v50); /*0x100538167*/
  if ( (_BYTE)v140 ) /*0x100538173*/
  {
    v52 = __src; /*0x100538179*/
    *a1 = 2; /*0x100538180*/
    a1[1] = v52; /*0x100538188*/
    goto LABEL_37; /*0x10053818c*/
  }
  std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5b9dbff9b41ab0b3(&v121, 0x2000, HIDWORD(v140)); /*0x10053829c*/
  v126 = 0; /*0x1005382ab*/
  v127 = 8; /*0x1005382b6*/
  v128 = 0; /*0x1005382c1*/
  v152 = v125; /*0x1005382d3*/
  v151 = v124; /*0x1005382de*/
  v150 = v123; /*0x1005382e9*/
  v149 = v122; /*0x1005382f4*/
  v148 = v121; /*0x100538310*/
  while ( 2 ) /*0x10053832f*/
  {
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3e6b44ac088bb82( /*0x10053832f*/
      &v90,
      &v148);
    v55 = v90; /*0x100538342*/
    if ( v90 != 0x8000000000000001LL ) /*0x10053834c*/
    {
      v56 = v91; /*0x100538352*/
      if ( v90 == 0x8000000000000000LL ) /*0x10053835c*/
      {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x10053832a*/
          0x8000000000000000LL,
          v91);
        continue; /*0x10053832a*/
      }
      v57 = v92; /*0x10053835e*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v91, v92); /*0x10053836b*/
      if ( !v58 ) /*0x100538373*/
        goto LABEL_51; /*0x100538373*/
      v140 = v56; /*0x100538379*/
      __src = v57; /*0x100538380*/
      v143 = nullptr; /*0x10053838e*/
      __n = 0; /*0x100538396*/
      v144 = v56; /*0x10053839d*/
      v145 = v57; /*0x1005383a4*/
      serde_json::de::from_trait::h51e180b4bb6af5e0(&v133, &v140); /*0x1005383b9*/
      if ( (_BYTE)v133 == 6 ) /*0x1005383c5*/
      {
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v134); /*0x1005383ce*/
        goto LABEL_51; /*0x1005383d3*/
      }
      v129[3] = v136; /*0x1005383df*/
      v129[2] = v135; /*0x1005383ed*/
      v129[1] = v134; /*0x100538402*/
      v129[0] = v133; /*0x100538409*/
      v59 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100538423*/
              "typefullargsopenwithkindsavetrueuuidemitshowhide",
              4,
              v129);
      if ( v59 /*0x10053845e*/
        && *(_BYTE *)v59 == 3
        && *(_QWORD *)(v59 + 24) == 13
        && !(**(_QWORD **)(v59 + 16) ^ 0x65736E6F70736572LL
           | *(_QWORD *)(*(_QWORD *)(v59 + 16) + 5LL) ^ 0x6D6574695F65736ELL) )
      {
        v60 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005384af*/
                        "payloadbase_instructions",
                        7,
                        v129);
        if ( !v60 ) /*0x1005384bc*/
          v60 = &unk_1015FEEE0; /*0x1005384bc*/
        v61 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005384cf*/
                "typefullargsopenwithkindsavetrueuuidemitshowhide",
                4,
                v60);
        if ( v61 ) /*0x1005384d7*/
        {
          if ( *(_BYTE *)v61 == 3 /*0x100538500*/
            && *(_QWORD *)(v61 + 24) == 7
            && !(**(_DWORD **)(v61 + 16) ^ 0x7373656D | *(_DWORD *)(*(_QWORD *)(v61 + 16) + 3LL) ^ 0x65676173) )
          {
            v62 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("role", 4, v60); /*0x100538517*/
            if ( v62 ) /*0x10053851f*/
            {
              if ( *(_BYTE *)v62 == 3 ) /*0x100538528*/
              {
                v63 = *(_QWORD *)(v62 + 16); /*0x10053852e*/
                v157 = *(_QWORD *)(v62 + 24); /*0x100538536*/
                if ( v157 == 9 ) /*0x10053853e*/
                {
                  v65 = *(_QWORD *)v63 ^ 0x6E61747369737361LL | *(unsigned __int8 *)(v63 + 8) ^ 0x74LL; /*0x100538580*/
                  v158 = (char *)&unk_1015FEFF1; /*0x10053858a*/
                  a1 = v159; /*0x10053858e*/
                  if ( !v65 ) /*0x100538592*/
                    goto LABEL_66; /*0x100538592*/
                }
                else
                {
                  a1 = v159; /*0x100538545*/
                  if ( v157 == 4 ) /*0x100538549*/
                  {
                    v64 = *(_DWORD *)v63 == 1919251317; /*0x10053854f*/
                    v158 = "User.gitAuth"; /*0x10053855c*/
                    if ( v64 ) /*0x100538560*/
                    {
LABEL_66:
                      v66 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100538598*/
                              "contentgit-C--porcelain",
                              7,
                              v60);
                      codexmate_lib::core::sessions::serialize_export_content::hf52d7d64a4ffc9d5(&v130, v66); /*0x1005385b6*/
                      v67 = v131; /*0x1005385bb*/
                      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v131, v132); /*0x1005385cc*/
                      if ( v68 ) /*0x1005385d4*/
                      {
                        codexmate_lib::core::sessions::format_export_timestamp::h9a92069926f468c1(&v133, v129); /*0x1005385e8*/
                        __n = v132; /*0x1005385f4*/
                        __src = v131; /*0x100538609*/
                        v140 = v130; /*0x100538610*/
                        v146 = v158; /*0x10053861b*/
                        v147 = v157; /*0x100538626*/
                        v145 = v135; /*0x10053863b*/
                        v144 = v134; /*0x10053864d*/
                        v143 = v133; /*0x100538651*/
                        alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h63029976a8831926(&v126, &v140); /*0x100538663*/
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v129); /*0x10053866f*/
                        a1 = v159; /*0x100538674*/
LABEL_51:
                        if ( v55 ) /*0x10053847c*/
                          v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x10053848d*/
                        continue; /*0x100538492*/
                      }
                      if ( v130 ) /*0x100538687*/
                        v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v130, 1); /*0x100538691*/
                      a1 = v159; /*0x100538696*/
                    }
                  }
                }
              }
            }
          }
        }
      }
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v129); /*0x10053846a*/
      goto LABEL_51; /*0x10053846a*/
    }
    break;
  }
  if ( *((_QWORD *)&v148 + 1) ) /*0x1005386a9*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, *((_QWORD *)&v148 + 1), 1); /*0x1005386b7*/
  v69 = (unsigned int)v152; /*0x1005386bc*/
  close_NOCANCEL((unsigned int)v152); /*0x1005386bf*/
  v139 = v128; /*0x1005386d9*/
  v138 = v127; /*0x1005386e0*/
  v137 = v126; /*0x1005386e7*/
  v70 = v128; /*0x1005386ee*/
  if ( !v128 ) /*0x100538700*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v69, v153); /*0x100538808*/
    v77 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x100538817*/
    if ( !v77 ) /*0x10053881f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42); /*0x100538c19*/
    *(_QWORD *)(v77 + 32) = 0xE688B6E68B89E6A9LL; /*0x10053882f*/
    *(_QWORD *)(v77 + 24) = 0x8AE59688E6B788E6LL; /*0x10053883d*/
    *(_QWORD *)(v77 + 16) = 0xA894E7849AE7BA87LL; /*0x10053884b*/
    *(_QWORD *)(v77 + 8) = 0xE5BCAFE5AF8FE5B0LL; /*0x100538859*/
    *(_QWORD *)v77 = 0x88E5BE89E6AA9CE6LL; /*0x100538867*/
    *(_WORD *)(v77 + 40) = -20607; /*0x10053886a*/
    *a1 = 10; /*0x100538870*/
    a1[1] = 42; /*0x100538878*/
    a1[2] = v77; /*0x100538880*/
    a1[3] = 42; /*0x100538884*/
    goto LABEL_84; /*0x100538884*/
  }
  codexmate_lib::core::sessions::ensure_markdown_extension::h1fab5ac73a473fa0(&v121, v153, v155); /*0x10053870d*/
  v71 = *((void **)&v121 + 1); /*0x100538712*/
  v72 = v122; /*0x100538719*/
  v73 = std::path::Path::parent::h4c3ac26770731fbb(*((_QWORD *)&v121 + 1), v122); /*0x100538726*/
  if ( v73 != 0 && v74 != 0 ) /*0x100538734*/
  {
    LOWORD(__dst[0]) = 511; /*0x100538741*/
    BYTE2(__dst[0]) = 1; /*0x10053874a*/
    v75 = std::fs::DirBuilder::_create::h099c6e2853c95452(__dst, v73, v74); /*0x10053875b*/
    if ( v75 ) /*0x100538763*/
    {
      *a1 = 2; /*0x100538765*/
      a1[1] = v75; /*0x10053876d*/
      goto LABEL_80; /*0x100538771*/
    }
  }
  v34 = codexmate_lib::core::sessions::render_export_markdown::h0f63cf3cb2bc647c( /*0x100538792*/
          (__int64)&v148,
          v99,
          v100,
          v138,
          v70,
          v34);
  v157 = *((_QWORD *)&v148 + 1); /*0x1005387ab*/
  v76 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1005387b2*/
          v71,
          v72,
          *((__int64 *)&v148 + 1),
          v149,
          0);
  if ( !v76 ) /*0x1005387ba*/
  {
    std::sys::fs::metadata::h32fa16d3052ea535(__dst, v71, v72); /*0x1005388aa*/
    if ( LOBYTE(__dst[0]) ) /*0x1005388b6*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$i64$C$std..io..error..Error$GT$$GT$::h41555b87b3365429( /*0x1005388bf*/
        __dst[1],
        v34);
      v78 = 0; /*0x1005388c4*/
    }
    else
    {
      v78 = __dst[13]; /*0x1005388c8*/
    }
    v79 = std::path::Path::file_name::hf6c2daad91e50ebf(v71, v72); /*0x1005388d5*/
    v159 = v71; /*0x1005388dd*/
    if ( v79 ) /*0x1005388e1*/
    {
      v81 = codexmate_lib::core::debug_bundle::export_debug_bundle::_$u7b$$u7b$closure$u7d$$u7d$::h9842ff469b5e8afa( /*0x1005388e9*/
              v79,
              v80);
      v83 = v82; /*0x1005388ee*/
      v84 = "codex-session.mdproxy_last_errorlast_codex_routeregistry-backupsquota-store.json"; /*0x1005388f4*/
      if ( v81 ) /*0x1005388fb*/
        v84 = (char *)v81; /*0x1005388fb*/
      else
        v83 = 16; /*0x100538904*/
    }
    else
    {
      v83 = 16; /*0x10053890a*/
      v84 = "codex-session.mdproxy_last_errorlast_codex_routeregistry-backupsquota-store.json"; /*0x100538910*/
    }
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(__dst, v83, 0, 1, 1); /*0x10053892e*/
    v158 = (char *)__dst[1]; /*0x10053893a*/
    if ( LODWORD(__dst[0]) == 1 ) /*0x100538945*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v158, __dst[2]); /*0x100538be4*/
    v155 = __dst[2]; /*0x100538952*/
    memcpy((void *)__dst[2], v84, v83); /*0x10053895c*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v140, v159, v72); /*0x10053896f*/
    v119 = v83; /*0x100538974*/
    v153 = v78; /*0x10053897b*/
    v85 = (char *)__src; /*0x10053897f*/
    v86 = __n; /*0x100538986*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(__dst, __n, 0, 1, 1); /*0x1005389a4*/
    v87 = __dst[1]; /*0x1005389a9*/
    if ( LOBYTE(__dst[0]) ) /*0x1005389b7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__dst[1], __dst[2]); /*0x100538bf9*/
    v88 = __dst[2]; /*0x1005389bd*/
    v120 = v85; /*0x1005389c7*/
    memcpy((void *)__dst[2], v85, v86); /*0x1005389d4*/
    a1[7] = v158; /*0x1005389dd*/
    a1[8] = v155; /*0x1005389e5*/
    a1[9] = v119; /*0x1005389f0*/
    a1[1] = v156; /*0x1005389f8*/
    a1[2] = __s2[0]; /*0x100538a00*/
    a1[3] = v118; /*0x100538a0b*/
    a1[4] = v87; /*0x100538a0f*/
    a1[5] = v88; /*0x100538a13*/
    a1[6] = v86; /*0x100538a17*/
    a1[10] = v153; /*0x100538a1f*/
    *a1 = 11; /*0x100538a23*/
    if ( (_QWORD)v148 ) /*0x100538a35*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v148, 1); /*0x100538a40*/
    if ( (_QWORD)v121 ) /*0x100538a59*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, v121, 1); /*0x100538a64*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..sessions..ExportMessage$GT$$GT$::hef47d27fc259ad93( /*0x100538a70*/
      &v137,
      v34);
    if ( v98 ) /*0x100538a7f*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v98, 1); /*0x100538a8d*/
    if ( v101 != 0x8000000000000000LL && v101 ) /*0x100538aa1*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v101, 1); /*0x100538aaf*/
    if ( v104 != 0x8000000000000000LL && v104 ) /*0x100538ac3*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, v104, 1); /*0x100538ad1*/
    if ( v107 != 0x8000000000000000LL && v107 ) /*0x100538ae5*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1); /*0x100538af3*/
    if ( v109 != 0x8000000000000000LL && v109 ) /*0x100538b07*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v109, 1); /*0x100538b15*/
    if ( v111 != 0x8000000000000000LL && v111 ) /*0x100538b29*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v111, 1); /*0x100538b37*/
    if ( v113 != 0x8000000000000000LL && v113 ) /*0x100538b4b*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1); /*0x100538b59*/
    if ( v115 != 0x8000000000000000LL && v115 ) /*0x100538b6d*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v115, 1); /*0x100538b7b*/
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..SessionWorktreeMigrationInfo$GT$$GT$::ha8b5a5d2a22cea5a( /*0x100538b87*/
      v117,
      v34);
    v45 = v140; /*0x100538b8c*/
    if ( !(2 * v140) ) /*0x100538b9e*/
      return a1; /*0x100538b9e*/
    v46 = 1; /*0x100538ba4*/
    v47 = v120; /*0x100538ba9*/
    goto LABEL_28; /*0x100538bb0*/
  }
  *a1 = 2; /*0x1005387c0*/
  a1[1] = v76; /*0x1005387c8*/
  if ( (_QWORD)v148 ) /*0x1005387d6*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v148, 1); /*0x1005387e1*/
LABEL_80:
  if ( (_QWORD)v121 ) /*0x1005387f0*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v121, 1); /*0x1005387fe*/
LABEL_84:
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..sessions..ExportMessage$GT$$GT$::hef47d27fc259ad93( /*0x10053888c*/
    &v137,
    v34);
LABEL_37:
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h33ddcaa040d12613(&v94); /*0x10053820a*/
  return a1; /*0x1005380d4*/
}