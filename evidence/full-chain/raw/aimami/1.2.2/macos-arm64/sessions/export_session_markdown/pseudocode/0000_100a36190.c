// mac 1.2.2 NEW export_session_markdown 0x100a36190 d=0
_QWORD *__fastcall codexmate_lib::core::sessions::export_session_markdown::hd91cb5c7220fb0b8(
        _QWORD *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  size_t v8; // rdx
  size_t v9; // r15
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  char *v17; // r13
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // r12
  size_t v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  void *v26; // r9
  size_t v27; // r10
  __int64 v28; // r11
  void **v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r14
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v38; // r8
  __int64 v39; // rsi
  _QWORD *v40; // rax
  _QWORD *v41; // rbx
  void *v42; // r12
  void *v43; // r15
  void *v44; // rax
  _QWORD *v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rcx
  _QWORD *v48; // rdx
  __int64 v49; // rax
  void **v50; // r12
  void *v51; // r15
  void *v52; // r14
  void **v53; // rbx
  void *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rax
  void *v57; // r12
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  bool v61; // zf
  void *v62; // rax
  __int64 v63; // rax
  void *v64; // r12
  __int64 v65; // rdx
  __int64 v66; // rdi
  __int64 v67; // r14
  void *v68; // r13
  size_t v69; // r15
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  _QWORD *v73; // rcx
  __int64 v74; // rax
  _QWORD *v75; // rcx
  __int64 v76; // rax
  _QWORD *v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  size_t v82; // rdx
  size_t v83; // r14
  char *v84; // r12
  void *v85; // r15
  size_t v86; // r12
  __int64 v87; // r13
  _QWORD *v88; // rax
  _QWORD __dst[41]; // [rsp+8h] [rbp-468h] BYREF
  void *v90; // [rsp+150h] [rbp-320h] BYREF
  void *v91; // [rsp+158h] [rbp-318h]
  void *v92; // [rsp+160h] [rbp-310h]
  _QWORD v93[3]; // [rsp+168h] [rbp-308h] BYREF
  __int64 v94; // [rsp+180h] [rbp-2F0h] BYREF
  __int128 v95; // [rsp+188h] [rbp-2E8h]
  __int64 v96; // [rsp+198h] [rbp-2D8h]
  __int64 v97; // [rsp+1A0h] [rbp-2D0h]
  __int64 v98; // [rsp+1A8h] [rbp-2C8h]
  __int64 v99; // [rsp+1B0h] [rbp-2C0h]
  __int64 v100; // [rsp+1B8h] [rbp-2B8h]
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
  void *v119; // [rsp+2D0h] [rbp-1A0h]
  __int128 v120; // [rsp+2D8h] [rbp-198h] BYREF
  size_t v121; // [rsp+2E8h] [rbp-188h]
  __int64 v122; // [rsp+2F0h] [rbp-180h]
  __int64 v123; // [rsp+2F8h] [rbp-178h]
  __int64 v124; // [rsp+300h] [rbp-170h]
  __int64 v125; // [rsp+308h] [rbp-168h] BYREF
  __int64 v126; // [rsp+310h] [rbp-160h]
  __int64 v127; // [rsp+318h] [rbp-158h]
  _QWORD v128[4]; // [rsp+320h] [rbp-150h] BYREF
  void *v129; // [rsp+340h] [rbp-130h] BYREF
  void *v130; // [rsp+348h] [rbp-128h]
  size_t v131; // [rsp+350h] [rbp-120h]
  __int64 v132; // [rsp+358h] [rbp-118h] BYREF
  void *v133; // [rsp+360h] [rbp-110h] BYREF
  void *v134; // [rsp+368h] [rbp-108h]
  __int64 v135; // [rsp+370h] [rbp-100h]
  __int64 v136; // [rsp+378h] [rbp-F8h] BYREF
  __int64 v137; // [rsp+380h] [rbp-F0h]
  __int64 v138; // [rsp+388h] [rbp-E8h]
  void *v139; // [rsp+390h] [rbp-E0h] BYREF
  void *__src; // [rsp+398h] [rbp-D8h]
  size_t __n; // [rsp+3A0h] [rbp-D0h]
  __int64 v142; // [rsp+3A8h] [rbp-C8h]
  void *v143; // [rsp+3B0h] [rbp-C0h]
  void *v144; // [rsp+3B8h] [rbp-B8h]
  void *v145; // [rsp+3C0h] [rbp-B0h]
  __int64 v146; // [rsp+3C8h] [rbp-A8h]
  __int128 v147; // [rsp+3D0h] [rbp-A0h] BYREF
  size_t v148; // [rsp+3E0h] [rbp-90h]
  __int64 v149; // [rsp+3E8h] [rbp-88h]
  __int64 v150; // [rsp+3F0h] [rbp-80h]
  __int64 v151; // [rsp+3F8h] [rbp-78h]
  __int64 v152; // [rsp+400h] [rbp-70h]
  __int64 v153; // [rsp+408h] [rbp-68h]
  void *__s2[2]; // [rsp+410h] [rbp-60h]
  void *v155; // [rsp+420h] [rbp-50h]
  __int64 v156; // [rsp+428h] [rbp-48h]
  __int64 v157; // [rsp+430h] [rbp-40h]
  void *v158; // [rsp+438h] [rbp-38h]
  _QWORD *v159; // [rsp+440h] [rbp-30h]

  v159 = a1; /*0x100a361ad*/
  __s2[0] = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(a3, a4); /*0x100a361bc*/
  if ( !v8 ) /*0x100a361c3*/
  {
    ((void (*)(void))_RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2)(); /*0x100a36450*/
    v35 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x100a3645f*/
    if ( !v35 ) /*0x100a36467*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x100a370a2*/
    *(_QWORD *)((char *)v35 + 14) = 0xBAA9E7BAB8E4BD83LL; /*0x100a36477*/
    v35[1] = 0xBD83E88DB8E42044LL; /*0x100a36485*/
    *v35 = 0x49208BA8E7BFBAE7LL; /*0x100a36493*/
    v36 = v159; /*0x100a36496*/
    *v159 = 8; /*0x100a3649a*/
    v36[1] = 22; /*0x100a364a1*/
    v36[2] = v35; /*0x100a364a9*/
    v36[3] = 22; /*0x100a364b0*/
    return v36; /*0x100a364b8*/
  }
  v9 = v8; /*0x100a361c9*/
  v157 = a5; /*0x100a361cc*/
  v10 = __dst; /*0x100a361d0*/
  codexmate_lib::core::sessions::load_sessions::h8b0ddb30f01931c2(__dst, a2); /*0x100a361da*/
  v11 = __dst[0]; /*0x100a361df*/
  v12 = __dst[1]; /*0x100a361e6*/
  v13 = __dst[2]; /*0x100a361ed*/
  v14 = __dst[3]; /*0x100a361f4*/
  if ( __dst[0] != 10 ) /*0x100a361ff*/
  {
    v38 = v159; /*0x100a364c4*/
    v159[11] = __dst[11]; /*0x100a364c8*/
    v38[10] = __dst[10]; /*0x100a364d3*/
    v38[9] = __dst[9]; /*0x100a364de*/
    v38[8] = __dst[8]; /*0x100a364e9*/
    v38[7] = __dst[7]; /*0x100a364f4*/
    v38[6] = __dst[6]; /*0x100a364ff*/
    v39 = __dst[4]; /*0x100a36503*/
    v38[5] = __dst[5]; /*0x100a36511*/
    v38[4] = v39; /*0x100a36515*/
    *v38 = v11; /*0x100a36519*/
    v38[1] = v12; /*0x100a3651c*/
    v38[2] = v13; /*0x100a36520*/
    v38[3] = v14; /*0x100a36524*/
    return v38; /*0x100a3652b*/
  }
  v152 = a6; /*0x100a36205*/
  v15 = 328LL * __dst[3]; /*0x100a36209*/
  v16 = __dst[2] + 328LL * __dst[3]; /*0x100a36210*/
  v139 = (void *)__dst[2]; /*0x100a36215*/
  __n = __dst[1]; /*0x100a3621c*/
  __src = (void *)__dst[2]; /*0x100a36223*/
  v142 = v16; /*0x100a3622a*/
  if ( !__dst[3] ) /*0x100a36234*/
  {
LABEL_17:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, a2, v16, v12); /*0x100a36538*/
    v40 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x100a36547*/
    if ( !v40 ) /*0x100a3654f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100a370b1*/
    *(_QWORD *)((char *)v40 + 13) = 0x8BA8E7BFBAE794BALL; /*0x100a3655f*/
    v40[1] = 0xE794BAE5B9AFE5B0LL; /*0x100a3656d*/
    *v40 = 0x88E5BE89E6AA9CE6LL; /*0x100a3657b*/
    v41 = v159; /*0x100a3657e*/
    *v159 = 9; /*0x100a36582*/
    v41[1] = 21; /*0x100a36589*/
    v41[2] = v40; /*0x100a36591*/
    v41[3] = 21; /*0x100a36595*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3c46f7e436e2a930(&v139); /*0x100a365a4*/
    return v41; /*0x100a365bd*/
  }
  v158 = (void *)(__dst[2] + 328LL * __dst[3]); /*0x100a3623a*/
  v17 = (char *)(__dst[2] + 328LL); /*0x100a3623e*/
  while ( 1 ) /*0x100a3626c*/
  {
    a2 = v17 - 328; /*0x100a3626c*/
    memcpy(__dst, v17 - 328, sizeof(__dst)); /*0x100a3627b*/
    if ( __dst[4] == v9 ) /*0x100a36287*/
    {
      v10 = (_QWORD *)__dst[3]; /*0x100a36289*/
      a2 = (char *)__s2[0]; /*0x100a36290*/
      if ( !memcmp((const void *)__dst[3], __s2[0], v9) ) /*0x100a36297*/
        break; /*0x100a36297*/
    }
    v10 = __dst; /*0x100a36250*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h7e88e8834c05a698(__dst); /*0x100a36253*/
LABEL_6:
    v17 += 328; /*0x100a36258*/
    v15 -= 328; /*0x100a3625f*/
    if ( !v15 ) /*0x100a36266*/
    {
      __src = v158; /*0x100a36531*/
      goto LABEL_17; /*0x100a36531*/
    }
  }
  v18 = __dst[0]; /*0x100a362a0*/
  if ( __dst[0] == 2 ) /*0x100a362ab*/
    goto LABEL_6; /*0x100a362ab*/
  __src = v17; /*0x100a362ad*/
  v19 = *((_QWORD *)v17 - 38); /*0x100a362b4*/
  v20 = *((_QWORD *)v17 - 37); /*0x100a362bb*/
  v21 = (size_t)(v17 - 224); /*0x100a362c2*/
  v158 = *((void **)v17 - 39); /*0x100a362d7*/
  *(_OWORD *)__s2 = *((_OWORD *)v17 - 20); /*0x100a362e3*/
  v22 = *((_QWORD *)v17 - 36); /*0x100a362e7*/
  v23 = *((_QWORD *)v17 - 35); /*0x100a362ee*/
  v24 = *((_QWORD *)v17 - 34); /*0x100a362f5*/
  v25 = *((_QWORD *)v17 - 33); /*0x100a362fc*/
  v26 = *((void **)v17 - 32); /*0x100a36303*/
  v27 = *((_QWORD *)v17 - 31); /*0x100a3630a*/
  v28 = *((_QWORD *)v17 - 30); /*0x100a36311*/
  v105 = *((_QWORD *)v17 - 29); /*0x100a3631f*/
  v104 = v28; /*0x100a36326*/
  v103 = v27; /*0x100a3632d*/
  v102 = v26; /*0x100a36334*/
  v101 = v25; /*0x100a3633b*/
  v100 = v24; /*0x100a36342*/
  v99 = v23; /*0x100a36349*/
  v98 = v22; /*0x100a36350*/
  memmove(v106, v17 - 224, 0xE0u); /*0x100a3635c*/
  v94 = v18; /*0x100a36361*/
  v95 = *(_OWORD *)__s2; /*0x100a3636c*/
  v153 = v19; /*0x100a36373*/
  v96 = v19; /*0x100a36377*/
  v118 = v20; /*0x100a3637e*/
  v97 = v20; /*0x100a36385*/
  v29 = &v139; /*0x100a36393*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3c46f7e436e2a930(&v139); /*0x100a36396*/
  if ( v117[95] ) /*0x100a363a2*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v139, v21, v30, v31); /*0x100a363a8*/
    v32 = 54; /*0x100a363ad*/
    v33 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x100a363bd*/
    if ( v33 ) /*0x100a363c5*/
    {
      *(_QWORD *)((char *)v33 + 46) = 0x6E776F646B72614DLL; /*0x100a363d5*/
      v33[5] = 0x614D20BA87E5BCAFLL; /*0x100a363e3*/
      v33[4] = 0xE595B3E6A097E68CLL; /*0x100a363f1*/
      v33[3] = 0xBCEFB6BBE48796E6LL; /*0x100a363ff*/
      v33[2] = 0x2074756F6C6C6F72LL; /*0x100a3640d*/
      v33[1] = 0x2091B0E5BABCE78BLL; /*0x100a3641b*/
      *v33 = 0xA8E7BFBAE7A5AFE8LL; /*0x100a36429*/
      v34 = v159; /*0x100a3642c*/
      *v159 = 9; /*0x100a36430*/
      v34[1] = 54; /*0x100a36437*/
      v34[2] = v33; /*0x100a3643f*/
      v34[3] = 54; /*0x100a36443*/
      goto LABEL_26; /*0x100a3644b*/
    }
    goto LABEL_117; /*0x100a363c5*/
  }
  if ( __OFSUB__(0, v101) /*0x100a365e9*/
    || (v42 = v102,
        v43 = (void *)v103,
        v29 = (void **)v102,
        v21 = v103,
        core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(v102, v103),
        !v30) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v21, v30, v31); /*0x100a36670*/
    v32 = 36; /*0x100a36675*/
    v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x100a36685*/
    if ( v46 ) /*0x100a3668d*/
    {
      *(_QWORD *)(v46 + 24) = 0xB7E8B6BBE48796E6LL; /*0x100a3669d*/
      *(_QWORD *)(v46 + 16) = 0x2074756F6C6C6F72LL; /*0x100a366ab*/
      *(_QWORD *)(v46 + 8) = 0x2095BDE5B0AEE8AALL; /*0x100a366b9*/
      *(_QWORD *)v46 = 0x9CE68BA8E7BFBAE7LL; /*0x100a366c7*/
      *(_DWORD *)(v46 + 32) = -2067864145; /*0x100a366ca*/
      v47 = v159; /*0x100a366d1*/
      *v159 = 9; /*0x100a366d5*/
      v47[1] = 36; /*0x100a366dc*/
      v47[2] = v46; /*0x100a366e4*/
      v47[3] = 36; /*0x100a366e8*/
      goto LABEL_26; /*0x100a366e8*/
    }
LABEL_117:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v32); /*0x100a370e6*/
  }
  if ( !(unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b(v42, (size_t)v43) ) /*0x100a365fc*/
  {
    v139 = v42; /*0x100a36705*/
    __src = v43; /*0x100a3670c*/
    __dst[0] = &v139; /*0x100a36713*/
    __dst[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a36721*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v93, &unk_1016FEBBC, __dst); /*0x100a3673d*/
    v48 = v159; /*0x100a36749*/
    v159[3] = v93[2]; /*0x100a3674d*/
    v49 = v93[0]; /*0x100a36751*/
    v48[2] = v93[1]; /*0x100a3675f*/
    v48[1] = v49; /*0x100a36763*/
    *v48 = 9; /*0x100a36767*/
    goto LABEL_26; /*0x100a3676e*/
  }
  LODWORD(v147) = 0; /*0x100a36602*/
  WORD2(v147) = 438; /*0x100a3660c*/
  *(_DWORD *)((char *)&v147 + 6) = 1; /*0x100a36615*/
  WORD5(v147) = 0; /*0x100a3661f*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v139, &v147, v42, v43); /*0x100a36643*/
  if ( (_BYTE)v139 ) /*0x100a3664f*/
  {
    v44 = __src; /*0x100a36655*/
    v45 = v159; /*0x100a3665c*/
    *v159 = 2; /*0x100a36660*/
    v45[1] = v44; /*0x100a36667*/
    goto LABEL_26; /*0x100a3666b*/
  }
  std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd0c8c4721f166e25(&v120, 0x2000, HIDWORD(v139)); /*0x100a36782*/
  v125 = 0; /*0x100a36791*/
  v126 = 8; /*0x100a3679c*/
  v127 = 0; /*0x100a367a7*/
  v151 = v124; /*0x100a367b9*/
  v150 = v123; /*0x100a367c4*/
  v149 = v122; /*0x100a367cf*/
  v148 = v121; /*0x100a367dd*/
  v147 = v120; /*0x100a367f9*/
  v50 = &v90; /*0x100a36800*/
  __s2[0] = (void *)0x8000000000000001LL; /*0x100a36812*/
  while ( 2 ) /*0x100a3682a*/
  {
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h46a3e152254ccfa0( /*0x100a3682a*/
      v50,
      &v147);
    v51 = v90; /*0x100a36835*/
    if ( v90 != __s2[0] ) /*0x100a36840*/
    {
      v52 = v91; /*0x100a36846*/
      if ( v90 == (void *)0x8000000000000000LL ) /*0x100a36850*/
      {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::ha9b120268625f5ba( /*0x100a36825*/
          0x8000000000000000LL,
          v91);
        continue; /*0x100a36825*/
      }
      v53 = v50; /*0x100a36852*/
      v54 = v92; /*0x100a36855*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(v91, v92); /*0x100a36862*/
      if ( !v55 ) /*0x100a3686a*/
        goto LABEL_40; /*0x100a3686a*/
      v139 = v52; /*0x100a36870*/
      __src = v54; /*0x100a36877*/
      v142 = 0; /*0x100a36885*/
      __n = 0; /*0x100a3688d*/
      v143 = v52; /*0x100a36894*/
      v144 = v54; /*0x100a3689b*/
      serde_json::de::from_trait::hd7f835a315d0fab8(&v132, &v139); /*0x100a368b0*/
      if ( (_BYTE)v132 == 6 ) /*0x100a368bc*/
      {
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(&v133); /*0x100a368c5*/
        goto LABEL_40; /*0x100a368ca*/
      }
      v128[3] = v135; /*0x100a368d6*/
      v128[2] = v134; /*0x100a368e4*/
      v128[1] = v133; /*0x100a368f9*/
      v128[0] = v132; /*0x100a36900*/
      v56 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a3691a*/
              "typefullargsopenwithkindsavetrueuuidemitshowhide",
              4,
              v128);
      if ( !v56 /*0x100a36955*/
        || *(_BYTE *)v56 != 3
        || *(_QWORD *)(v56 + 24) != 13
        || **(_QWORD **)(v56 + 16) ^ 0x65736E6F70736572LL
         | *(_QWORD *)(*(_QWORD *)(v56 + 16) + 5LL) ^ 0x6D6574695F65736ELL )
      {
        goto LABEL_39; /*0x100a36955*/
      }
      v57 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a369a6*/
                      "payload",
                      7,
                      v128);
      if ( !v57 ) /*0x100a369b3*/
        v57 = &unk_1015A2DA8; /*0x100a369b3*/
      v58 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a369c6*/
              "typefullargsopenwithkindsavetrueuuidemitshowhide",
              4,
              v57);
      if ( !v58 ) /*0x100a369ce*/
        goto LABEL_39; /*0x100a369ce*/
      if ( *(_BYTE *)v58 != 3 ) /*0x100a369d3*/
        goto LABEL_39; /*0x100a369d3*/
      if ( *(_QWORD *)(v58 + 24) != 7 ) /*0x100a369da*/
        goto LABEL_39; /*0x100a369da*/
      if ( **(_DWORD **)(v58 + 16) ^ 0x7373656D | *(_DWORD *)(*(_QWORD *)(v58 + 16) + 3LL) ^ 0x65676173 ) /*0x100a369f7*/
        goto LABEL_39; /*0x100a369f7*/
      v59 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a36a0e*/
              "roleuserdonehostnametool\t",
              4,
              v57);
      if ( !v59 || *(_BYTE *)v59 != 3 ) /*0x100a36a1f*/
        goto LABEL_39; /*0x100a36a1f*/
      v60 = *(_QWORD *)(v59 + 16); /*0x100a36a25*/
      v156 = *(_QWORD *)(v59 + 24); /*0x100a36a2d*/
      if ( v156 != 9 ) /*0x100a36a35*/
      {
        if ( v156 == 4 ) /*0x100a36a3c*/
        {
          v61 = *(_DWORD *)v60 == 1919251317; /*0x100a36a42*/
          v62 = &unk_1015A0330; /*0x100a36a48*/
          goto LABEL_54; /*0x100a36a4f*/
        }
        goto LABEL_39; /*0x100a36a3c*/
      }
      v61 = (*(_QWORD *)v60 ^ 0x6E61747369737361LL | *(unsigned __int8 *)(v60 + 8) ^ 0x74LL) == 0; /*0x100a36a69*/
      v62 = &unk_1015A2EC7; /*0x100a36a6c*/
LABEL_54:
      v155 = v62; /*0x100a36a73*/
      if ( v61 ) /*0x100a36a77*/
      {
        v63 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a36a8c*/
                &unk_1015A2B43,
                7,
                v57);
        codexmate_lib::core::sessions::serialize_export_content::h2eabf1ffa5cbae75(&v129, v63); /*0x100a36a9b*/
        v64 = v130; /*0x100a36aa0*/
        core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(v130, v131); /*0x100a36ab1*/
        if ( !v65 ) /*0x100a36ab9*/
        {
          if ( v129 ) /*0x100a36b68*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v129, 1); /*0x100a36b76*/
          goto LABEL_39; /*0x100a36b7b*/
        }
        codexmate_lib::core::sessions::format_export_timestamp::h8a3dda342e6fa806(&v132, v128); /*0x100a36acd*/
        __n = v131; /*0x100a36ad9*/
        __src = v130; /*0x100a36aee*/
        v139 = v129; /*0x100a36af5*/
        v145 = v155; /*0x100a36b00*/
        v146 = v156; /*0x100a36b0b*/
        v144 = v134; /*0x100a36b20*/
        v143 = v133; /*0x100a36b32*/
        v142 = v132; /*0x100a36b36*/
        alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hd138e1ac11e788b5(&v125, &v139); /*0x100a36b48*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v128); /*0x100a36b54*/
      }
      else
      {
LABEL_39:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v128); /*0x100a3695a*/
      }
LABEL_40:
      v50 = v53; /*0x100a36966*/
      if ( v51 ) /*0x100a36973*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x100a36984*/
      continue; /*0x100a36989*/
    }
    break;
  }
  if ( *((_QWORD *)&v147 + 1) ) /*0x100a36b8a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, *((_QWORD *)&v147 + 1), 1); /*0x100a36b98*/
  v66 = (unsigned int)v151; /*0x100a36b9d*/
  close_NOCANCEL((unsigned int)v151); /*0x100a36ba0*/
  v138 = v127; /*0x100a36bba*/
  v137 = v126; /*0x100a36bc1*/
  v136 = v125; /*0x100a36bc8*/
  v67 = v127; /*0x100a36bcf*/
  if ( !v127 ) /*0x100a36bdd*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, v157, 0, v126); /*0x100a36cef*/
    v76 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x100a36cfe*/
    if ( !v76 ) /*0x100a36d06*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42); /*0x100a370ff*/
    *(_QWORD *)(v76 + 32) = 0xE688B6E68B89E6A9LL; /*0x100a36d16*/
    *(_QWORD *)(v76 + 24) = 0x8AE59688E6B788E6LL; /*0x100a36d24*/
    *(_QWORD *)(v76 + 16) = 0xA894E7849AE7BA87LL; /*0x100a36d32*/
    *(_QWORD *)(v76 + 8) = 0xE5BCAFE5AF8FE5B0LL; /*0x100a36d40*/
    *(_QWORD *)v76 = 0x88E5BE89E6AA9CE6LL; /*0x100a36d4e*/
    *(_WORD *)(v76 + 40) = -20607; /*0x100a36d51*/
    v77 = v159; /*0x100a36d57*/
    *v159 = 9; /*0x100a36d5b*/
    v77[1] = 42; /*0x100a36d62*/
    v77[2] = v76; /*0x100a36d6a*/
    v77[3] = 42; /*0x100a36d6e*/
    goto LABEL_72; /*0x100a36d6e*/
  }
  codexmate_lib::core::sessions::ensure_markdown_extension::h2fa5786bb66d7966(&v120, v157, v152); /*0x100a36bee*/
  v68 = *((void **)&v120 + 1); /*0x100a36bf3*/
  v69 = v121; /*0x100a36bfa*/
  v70 = std::path::Path::parent::h4c3ac26770731fbb(*((_QWORD *)&v120 + 1), v121); /*0x100a36c07*/
  if ( v70 != 0 && v71 != 0 ) /*0x100a36c15*/
  {
    LOWORD(__dst[0]) = 511; /*0x100a36c22*/
    BYTE2(__dst[0]) = 1; /*0x100a36c2b*/
    v72 = std::fs::DirBuilder::_create::h099c6e2853c95452(__dst, v70); /*0x100a36c3c*/
    if ( v72 ) /*0x100a36c44*/
    {
      v73 = v159; /*0x100a36c46*/
      *v159 = 2; /*0x100a36c4a*/
      v73[1] = v72; /*0x100a36c51*/
      goto LABEL_68; /*0x100a36c55*/
    }
  }
  codexmate_lib::core::sessions::render_export_markdown::h98b5d767cdce7861(&v147, v99, v100, v137, v67); /*0x100a36c76*/
  __s2[0] = *((void **)&v147 + 1); /*0x100a36c8f*/
  v74 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hd5da3edf4306a101(v68, v69); /*0x100a36c96*/
  if ( v74 ) /*0x100a36c9e*/
  {
    v75 = v159; /*0x100a36ca4*/
    *v159 = 2; /*0x100a36ca8*/
    v75[1] = v74; /*0x100a36caf*/
    if ( (_QWORD)v147 ) /*0x100a36cbd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2[0], v147, 1); /*0x100a36cc8*/
LABEL_68:
    if ( (_QWORD)v120 ) /*0x100a36cd7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v120, 1); /*0x100a36ce5*/
LABEL_72:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..sessions..ExportMessage$GT$$GT$::h72dae3ffbbf49997(&v136); /*0x100a36d76*/
LABEL_26:
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h7e88e8834c05a698(&v94); /*0x100a366f0*/
    return v159; /*0x100a366fc*/
  }
  else
  {
    std::sys::fs::metadata::h32fa16d3052ea535(__dst, v68, v69); /*0x100a36d94*/
    if ( LOBYTE(__dst[0]) ) /*0x100a36da0*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$i64$C$std..io..error..Error$GT$$GT$::ha3e95ba79bfefee7(__dst[1]); /*0x100a36da9*/
      v78 = 0; /*0x100a36dae*/
    }
    else
    {
      v78 = __dst[13]; /*0x100a36db2*/
    }
    v79 = std::path::Path::file_name::hf6c2daad91e50ebf(v68, v69); /*0x100a36dbf*/
    if ( v79 ) /*0x100a36dc7*/
    {
      v81 = codexmate_lib::core::sessions::export_session_markdown::_$u7b$$u7b$closure$u7d$$u7d$::h849723f905c1c981( /*0x100a36dcf*/
              v79,
              v80);
      v83 = v82; /*0x100a36dd4*/
      v84 = "codex-session.mdregistry-backupsquota-store.jsonDeepLinkProtocol"; /*0x100a36dda*/
      if ( v81 ) /*0x100a36de1*/
        v84 = (char *)v81; /*0x100a36de1*/
      else
        v83 = 16; /*0x100a36dea*/
    }
    else
    {
      v83 = 16; /*0x100a36df0*/
      v84 = "codex-session.mdregistry-backupsquota-store.jsonDeepLinkProtocol"; /*0x100a36df6*/
    }
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h7da47a1739ade32e(__dst, v83, 0, 1, 1); /*0x100a36e14*/
    v157 = __dst[1]; /*0x100a36e20*/
    if ( LODWORD(__dst[0]) == 1 ) /*0x100a36e2b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v157, __dst[2]); /*0x100a370c3*/
    v156 = __dst[2]; /*0x100a36e38*/
    memcpy((void *)__dst[2], v84, v83); /*0x100a36e42*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v139, v68, v69); /*0x100a36e54*/
    v155 = v68; /*0x100a36e59*/
    v85 = __src; /*0x100a36e5d*/
    v86 = __n; /*0x100a36e64*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h7da47a1739ade32e(__dst, __n, 0, 1, 1); /*0x100a36e82*/
    v152 = __dst[1]; /*0x100a36e8e*/
    if ( LOBYTE(__dst[0]) ) /*0x100a36e99*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v152, __dst[2]); /*0x100a370df*/
    v87 = __dst[2]; /*0x100a36e9f*/
    v119 = v85; /*0x100a36ea9*/
    memcpy((void *)__dst[2], v85, v86); /*0x100a36eb6*/
    v88 = v159; /*0x100a36ebb*/
    v159[7] = v157; /*0x100a36ec3*/
    v88[8] = v156; /*0x100a36ecb*/
    v88[9] = v83; /*0x100a36ecf*/
    v88[1] = v158; /*0x100a36ed7*/
    v88[2] = v153; /*0x100a36edf*/
    v88[3] = v118; /*0x100a36eea*/
    v88[4] = v152; /*0x100a36ef2*/
    v88[5] = v87; /*0x100a36ef6*/
    v88[6] = v86; /*0x100a36efa*/
    v88[10] = v78; /*0x100a36efe*/
    *v88 = 10; /*0x100a36f02*/
    if ( (_QWORD)v147 ) /*0x100a36f13*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2[0], v147, 1); /*0x100a36f1e*/
    if ( (_QWORD)v120 ) /*0x100a36f37*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v120, 1); /*0x100a36f42*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..sessions..ExportMessage$GT$$GT$::h72dae3ffbbf49997(&v136); /*0x100a36f4e*/
    if ( v98 ) /*0x100a36f5d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v98, 1); /*0x100a36f6b*/
    if ( v101 != 0x8000000000000000LL && v101 ) /*0x100a36f7f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v101, 1); /*0x100a36f8d*/
    if ( v104 != 0x8000000000000000LL && v104 ) /*0x100a36fa1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, v104, 1); /*0x100a36faf*/
    if ( v107 != 0x8000000000000000LL && v107 ) /*0x100a36fc3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1); /*0x100a36fd1*/
    if ( v109 != 0x8000000000000000LL && v109 ) /*0x100a36fe5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v109, 1); /*0x100a36ff3*/
    if ( v111 != 0x8000000000000000LL && v111 ) /*0x100a37007*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v111, 1); /*0x100a37015*/
    if ( v113 != 0x8000000000000000LL && v113 ) /*0x100a37029*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1); /*0x100a37037*/
    if ( v115 != 0x8000000000000000LL && v115 ) /*0x100a3704b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v115, 1); /*0x100a37059*/
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..SessionWorktreeMigrationInfo$GT$$GT$::h05529ba1b311e190(v117); /*0x100a37065*/
    if ( 2LL * (_QWORD)v139 ) /*0x100a37071*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v139, 1); /*0x100a3708a*/
    return v159; /*0x100a3708f*/
  }
}