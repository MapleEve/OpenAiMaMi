// __ZN13codexmate_lib4core5voice9workspace19read_workspace_file @ 0x100b01560 | 基线 same-set
double __fastcall codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(
        _QWORD *a1,
        _QWORD *a2,
        __m128i si128)
{
  __int64 v4; // rax
  void *v5; // rbx
  size_t v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rsi
  _QWORD *v11; // r8
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rax
  _QWORD *v18; // rax
  void *v19; // r13
  int v20; // edx
  __int64 v21; // rsi
  void *v22; // r13
  __int64 v23; // r15
  size_t v24; // r15
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // r13
  __int64 v29; // rsi
  _BYTE *v30; // rdi
  char *v31; // rbx
  size_t v32; // rdx
  size_t v33; // r15
  const __m128i **v34; // rbx
  const __m128i *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // r12
  __int64 v39; // r13
  const __m128i *v40; // rax
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rax
  const __m128i *v46; // rcx
  __int64 v47; // rsi
  _QWORD *v48; // rax
  __int64 v49; // rcx
  const __m128i *v50; // rcx
  __int64 v51; // rcx
  char *v52; // r15
  _QWORD *v53; // rax
  __int64 **v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  const __m128i *v58; // rbx
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // rdx
  char *v70; // rcx
  __int64 v71; // r15
  __int64 v72; // rbx
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rdx
  void *v76; // r13
  const void *v77; // r12
  size_t v78; // r14
  __int64 v79; // r15
  void *v80; // rax
  size_t v81; // r15
  char *v82; // rax
  char *v83; // rdi
  const void *v84; // rsi
  void *v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r14
  __int64 v89; // r14
  const __m128i *v90; // rbx
  const __m128i *v91; // r14
  const __m128i *v92; // r15
  const __m128i *v94; // r12
  int v95; // r13d
  __int64 v96; // rax
  __int64 v97; // rsi
  unsigned __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rdi
  _QWORD v102[18]; // [rsp+0h] [rbp-320h] BYREF
  __int64 v103; // [rsp+90h] [rbp-290h] BYREF
  __int64 v104; // [rsp+98h] [rbp-288h]
  __int64 v105; // [rsp+A0h] [rbp-280h]
  const __m128i *v106[18]; // [rsp+A8h] [rbp-278h] BYREF
  __int64 v107; // [rsp+138h] [rbp-1E8h]
  __int64 v108; // [rsp+140h] [rbp-1E0h]
  __int64 v109; // [rsp+148h] [rbp-1D8h]
  _QWORD v110[12]; // [rsp+150h] [rbp-1D0h] BYREF
  __int64 *v111; // [rsp+1B0h] [rbp-170h] BYREF
  __int64 v112; // [rsp+1B8h] [rbp-168h]
  void *v113; // [rsp+1C0h] [rbp-160h] BYREF
  size_t v114; // [rsp+1C8h] [rbp-158h]
  const __m128i **v115; // [rsp+1D0h] [rbp-150h] BYREF
  char *v116; // [rsp+1D8h] [rbp-148h]
  __int64 v117; // [rsp+1E0h] [rbp-140h] BYREF
  void *v118; // [rsp+1E8h] [rbp-138h]
  size_t v119; // [rsp+1F0h] [rbp-130h]
  __int64 v120; // [rsp+1F8h] [rbp-128h] BYREF
  const __m128i *v121; // [rsp+200h] [rbp-120h] BYREF
  char *v122; // [rsp+208h] [rbp-118h]
  char *v123; // [rsp+210h] [rbp-110h]
  __int64 v124; // [rsp+218h] [rbp-108h]
  _QWORD __src[19]; // [rsp+220h] [rbp-100h] BYREF
  void *__dst; // [rsp+2B8h] [rbp-68h]
  __int64 v127; // [rsp+2C0h] [rbp-60h]
  size_t v128; // [rsp+2C8h] [rbp-58h]
  size_t __n; // [rsp+2D0h] [rbp-50h]
  char *v130; // [rsp+2D8h] [rbp-48h]
  void *__s2; // [rsp+2E0h] [rbp-40h]
  char v132; // [rsp+2EFh] [rbp-31h] BYREF
  void *v133; // [rsp+2F0h] [rbp-30h]

  v4 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x100b0157d*/
  if ( v4 ) /*0x100b01585*/
  {
    a1[1] = 2; /*0x100b01587*/
    a1[2] = v4; /*0x100b0158f*/
    *a1 = 0x8000000000000000LL; /*0x100b0159d*/
    return *(double *)si128.i64; /*0x100b0159d*/
  }
  __dst = a1; /*0x100b015b2*/
  v5 = (void *)a2[67]; /*0x100b015b6*/
  v6 = a2[68]; /*0x100b015be*/
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v5, v6); /*0x100b015d3*/
  if ( LODWORD(__src[0]) == 1 ) /*0x100b015df*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x100b015f4*/
    {
      v7 = __src[1] - 1LL; /*0x100b015f6*/
      v8 = *(_QWORD *)(__src[1] - 1LL); /*0x100b015fa*/
      v9 = *(_QWORD *)(__src[1] + 7LL); /*0x100b015fe*/
      if ( *(_QWORD *)v9 ) /*0x100b01602*/
        (*(void (__fastcall **)(__int64))v9)(v8); /*0x100b0160e*/
      v10 = *(_QWORD *)(v9 + 8); /*0x100b01610*/
      if ( v10 ) /*0x100b01617*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x100b01620*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24, 8); /*0x100b01632*/
    }
    codexmate_lib::core::voice::workspace::default_workspace_file::he177bb6fcd683de8(__src); /*0x100b01641*/
    codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v106, a2, __src); /*0x100b01653*/
    v11 = __dst; /*0x100b01658*/
    if ( LODWORD(v106[0]) == 11 ) /*0x100b01663*/
    {
      memcpy(__dst, __src, 0x90u); /*0x100b01678*/
    }
    else
    {
      qmemcpy((char *)__dst + 8, v106, 0x60u); /*0x100b017c0*/
      *v11 = 0x8000000000000000LL; /*0x100b017cd*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(__src); /*0x100b017d7*/
    }
    return *(double *)si128.i64; /*0x100b0167d*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__src, v5, v6); /*0x100b01699*/
  v12 = __src[1]; /*0x100b016a5*/
  v133 = (void *)__src[0]; /*0x100b016ac*/
  if ( __OFSUB__(-__src[0], 1) ) /*0x100b016b0*/
  {
    v13 = __dst; /*0x100b016b5*/
    *((_QWORD *)__dst + 1) = 2; /*0x100b016b9*/
    v13[2] = v12; /*0x100b016c1*/
    *v13 = 0x8000000000000000LL; /*0x100b016c5*/
    return *(double *)si128.i64; /*0x100b016c8*/
  }
  v14 = __src[2]; /*0x100b016cd*/
  v124 = __src[1]; /*0x100b016d4*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(__src[1], __src[2]); /*0x100b016de*/
  if ( !v15 ) /*0x100b016e6*/
  {
    codexmate_lib::core::voice::workspace::default_workspace_file::he177bb6fcd683de8(__src); /*0x100b017e8*/
    codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v106, a2, __src); /*0x100b017fe*/
    v18 = __dst; /*0x100b0180a*/
    if ( LODWORD(v106[0]) == 11 ) /*0x100b01818*/
    {
      memcpy(__dst, __src, 0x90u); /*0x100b01829*/
    }
    else
    {
      qmemcpy((char *)__dst + 8, v106, 0x60u); /*0x100b018a1*/
      *v18 = 0x8000000000000000LL; /*0x100b018a4*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(__src); /*0x100b018ae*/
    }
    v22 = v133; /*0x100b018b3*/
    if ( !v133 ) /*0x100b018ba*/
      return *(double *)si128.i64; /*0x100b018ba*/
    goto LABEL_119; /*0x100b018ba*/
  }
  __src[0] = v124; /*0x100b016f3*/
  __src[1] = v14; /*0x100b016fa*/
  __src[2] = 0; /*0x100b01701*/
  __src[3] = 0; /*0x100b0170c*/
  __src[4] = v124; /*0x100b01717*/
  __src[5] = v14; /*0x100b0171e*/
  serde_json::de::from_trait::h978556ff3dde7d0e(v106); /*0x100b01733*/
  if ( v106[0] == (const __m128i *)0x8000000000000000LL ) /*0x100b01749*/
  {
    v121 = v106[1]; /*0x100b01756*/
    v115 = &v121; /*0x100b01764*/
    v110[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v106, __src); /*0x100b01770*/
    LODWORD(v110[1]) = v16; /*0x100b01777*/
    std::time::SystemTime::duration_since::had059553cab94f96(__src, v110, 0, 0); /*0x100b01792*/
    if ( LOBYTE(__src[0]) ) /*0x100b0179e*/
      v17 = 0; /*0x100b018c5*/
    else
      v17 = __src[1]; /*0x100b017a4*/
    v110[0] = v17; /*0x100b018c7*/
    __src[0] = v110; /*0x100b018ce*/
    __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100b018dc*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v103, &unk_1017CBFCF, __src); /*0x100b018f8*/
    v23 = v104; /*0x100b018fd*/
    std::path::Path::_with_file_name::h86e79e0aa4e97973(&v117, v5, v6, v104, v105); /*0x100b0191b*/
    if ( v103 ) /*0x100b0192a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v103, 1); /*0x100b01934*/
    v24 = v119; /*0x100b01940*/
    __s2 = v118; /*0x100b0194d*/
    v25 = std::sys::fs::rename::h7934e6142c921014(v5, v6, v118, v119); /*0x100b01954*/
    if ( v25 ) /*0x100b0195c*/
    {
      v120 = v25; /*0x100b01962*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100b01977*/
      {
        v113 = v5; /*0x100b0197d*/
        v114 = v6; /*0x100b01984*/
        v110[0] = &v113; /*0x100b01992*/
        v110[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100b019a0*/
        v110[2] = &v120; /*0x100b019ae*/
        v110[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100b019bc*/
        v110[4] = &v115; /*0x100b019ca*/
        v110[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf77e482456819156; /*0x100b019d8*/
        __src[6] = 2; /*0x100b019df*/
        __src[7] = &unk_10167E3A2; /*0x100b019f1*/
        __src[8] = 37; /*0x100b019f8*/
        __src[10] = &unk_1017CC02E; /*0x100b01a0a*/
        __src[11] = v110; /*0x100b01a11*/
        __src[0] = 0; /*0x100b01a18*/
        __src[1] = &unk_10167E3A2; /*0x100b01a23*/
        __src[2] = 37; /*0x100b01a2a*/
        __src[3] = 0; /*0x100b01a35*/
        __src[4] = "src/core/voice/workspace.rs"; /*0x100b01a47*/
        __src[5] = 27; /*0x100b01a4e*/
        __src[9] = 0x26B00000001LL; /*0x100b01a63*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v132, __src); /*0x100b01a75*/
        v25 = v120; /*0x100b01a7a*/
      }
      if ( (v25 & 3) == 1 ) /*0x100b01a89*/
      {
        v26 = v25 - 1; /*0x100b01a8f*/
        v27 = *(_QWORD *)(v25 - 1); /*0x100b01a93*/
        v28 = *(_QWORD *)(v25 + 7); /*0x100b01a97*/
        if ( *(_QWORD *)v28 ) /*0x100b01a9b*/
          (*(void (__fastcall **)(__int64))v28)(v27); /*0x100b01aa7*/
        v29 = *(_QWORD *)(v28 + 8); /*0x100b01aa9*/
        if ( v29 ) /*0x100b01ab0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16)); /*0x100b01ab9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 24, 8); /*0x100b01acb*/
      }
    }
    else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100b01e73*/
    {
      v113 = __s2; /*0x100b01e7d*/
      v114 = v24; /*0x100b01e84*/
      v110[0] = &v113; /*0x100b01e92*/
      v110[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100b01ea0*/
      v110[2] = &v115; /*0x100b01eae*/
      v110[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf77e482456819156; /*0x100b01ebc*/
      __src[6] = 2; /*0x100b01ec3*/
      __src[7] = &unk_10167E3A2; /*0x100b01ed5*/
      __src[8] = 37; /*0x100b01edc*/
      __src[10] = &unk_1017CBFF0; /*0x100b01eee*/
      __src[11] = v110; /*0x100b01ef5*/
      __src[0] = 0; /*0x100b01efc*/
      __src[1] = &unk_10167E3A2; /*0x100b01f07*/
      __src[2] = 37; /*0x100b01f0e*/
      __src[3] = 0; /*0x100b01f19*/
      __src[4] = "src/core/voice/workspace.rs"; /*0x100b01f2b*/
      __src[5] = 27; /*0x100b01f32*/
      __src[9] = 0x26400000001LL; /*0x100b01f47*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v132, __src); /*0x100b01f59*/
    }
    if ( v117 ) /*0x100b01f68*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v117, 1); /*0x100b01f73*/
    codexmate_lib::core::voice::workspace::default_workspace_file::he177bb6fcd683de8(__src); /*0x100b01f7f*/
    codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v110, a2, __src); /*0x100b01f95*/
    v53 = __dst; /*0x100b01fa1*/
    if ( LODWORD(v110[0]) == 11 ) /*0x100b01faf*/
    {
      v54 = (__int64 **)__src; /*0x100b01fb1*/
      memcpy(__dst, __src, 0x90u); /*0x100b01fc0*/
    }
    else
    {
      qmemcpy((char *)__dst + 8, v110, 0x60u); /*0x100b01fd7*/
      v54 = &v111; /*0x100b01fd7*/
      *v53 = 0x8000000000000000LL; /*0x100b01fda*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(__src); /*0x100b01fe4*/
    }
    v58 = v121; /*0x100b01fe9*/
    if ( v121->i64[0] == 1 ) /*0x100b01ff7*/
    {
      v22 = v133; /*0x100b0201f*/
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v121->u64[1], v54, v55, v56, v57); /*0x100b02023*/
    }
    else
    {
      v22 = v133; /*0x100b01ffc*/
      if ( !v121->i64[0] ) /*0x100b01ff0*/
      {
        v59 = v121[1].i64[0]; /*0x100b02002*/
        if ( v59 ) /*0x100b02009*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121->i64[1], v59, 1); /*0x100b02014*/
      }
    }
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, 40, 8); /*0x100b02035*/
    if ( !v22 ) /*0x100b0203d*/
      return *(double *)si128.i64; /*0x100b0203d*/
LABEL_119:
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v22, 1); /*0x100b024e2*/
    return *(double *)si128.i64; /*0x100b024f6*/
  }
  memcpy(v102, v106, sizeof(v102)); /*0x100b01846*/
  v19 = v133; /*0x100b0184b*/
  v106[0] = (const __m128i *)std::time::SystemTime::now::h1fe79e41f9d5677f(v102, v106); /*0x100b01854*/
  LODWORD(v106[1]) = v20; /*0x100b0185b*/
  std::time::SystemTime::duration_since::had059553cab94f96(__src, v106, 0, 0); /*0x100b01873*/
  if ( LOBYTE(__src[0]) ) /*0x100b0187f*/
    v21 = 0; /*0x100b01ad5*/
  else
    v21 = __src[1]; /*0x100b01885*/
  codexmate_lib::core::voice::workspace::default_templates::h5ed037f3f0927880(&v117, v21); /*0x100b01ade*/
  v30 = v118; /*0x100b01aea*/
  v110[0] = v118; /*0x100b01aff*/
  v110[1] = v118; /*0x100b01b06*/
  v112 = v117; /*0x100b01b0d*/
  v110[2] = v117; /*0x100b01b14*/
  v122 = (char *)v118 + 112 * v119; /*0x100b01b1b*/
  v110[3] = v122; /*0x100b01b22*/
  v116 = (char *)v118; /*0x100b01b29*/
  if ( v119 ) /*0x100b01b33*/
  {
    v31 = v116; /*0x100b01b39*/
    while ( 1 ) /*0x100b01b7c*/
    {
      v30 = v31 + 112; /*0x100b01b7c*/
      if ( *(_QWORD *)v31 == 0x8000000000000000LL ) /*0x100b01b90*/
        break; /*0x100b01b90*/
      v32 = (size_t)v31; /*0x100b01b96*/
      v127 = *(_QWORD *)v31; /*0x100b01b99*/
      v130 = v31 + 112; /*0x100b01b9d*/
      __s2 = *((void **)v31 + 1); /*0x100b01ba5*/
      v33 = *((_QWORD *)v31 + 2); /*0x100b01ba9*/
      v34 = (const __m128i **)(v31 + 24); /*0x100b01bad*/
      __n = v32; /*0x100b01bb5*/
      LOBYTE(v128) = *(_BYTE *)(v32 + 105); /*0x100b01bbd*/
      v106[5] = v34[5]; /*0x100b01bc4*/
      v106[4] = v34[4]; /*0x100b01bcf*/
      v106[3] = v34[3]; /*0x100b01bda*/
      v106[2] = v34[2]; /*0x100b01be5*/
      v35 = *v34; /*0x100b01bec*/
      v106[1] = v34[1]; /*0x100b01bf3*/
      v106[0] = v35; /*0x100b01bfa*/
      v36 = *(_QWORD *)(v32 + 80); /*0x100b01c04*/
      v107 = *(_QWORD *)(v32 + 72); /*0x100b01c08*/
      v108 = v36; /*0x100b01c0f*/
      v111 = (__int64 *)(v32 + 72); /*0x100b01c16*/
      v109 = *(_QWORD *)(v32 + 88); /*0x100b01c21*/
      v37 = v102[1]; /*0x100b01c28*/
      v38 = 112LL * v102[2]; /*0x100b01c36*/
      v123 = (char *)v102[2]; /*0x100b01c3a*/
      if ( v102[2] ) /*0x100b01c44*/
      {
        v39 = 0; /*0x100b01c4a*/
        while ( *(_QWORD *)(v37 + v39 + 16) != v33 || memcmp(*(const void **)(v37 + v39 + 8), __s2, v33) ) /*0x100b01c77*/
        {
          v39 += 112; /*0x100b01c50*/
          if ( v38 == v39 ) /*0x100b01c57*/
            goto LABEL_58; /*0x100b01c57*/
        }
        __src[2] = v34[2]; /*0x100b01c7d*/
        v40 = *v34; /*0x100b01c84*/
        __src[1] = v34[1]; /*0x100b01c8b*/
        __src[0] = v40; /*0x100b01c92*/
        v41 = *(_QWORD *)(v37 + v39 + 24); /*0x100b01c99*/
        if ( v41 ) /*0x100b01ca1*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v37 + v39 + 32), v41, 1); /*0x100b01cad*/
        v42 = (_QWORD *)(v37 + v39 + 24); /*0x100b01cb2*/
        v42[2] = __src[2]; /*0x100b01cbe*/
        v43 = __src[0]; /*0x100b01cc2*/
        v42[1] = __src[1]; /*0x100b01cd0*/
        *v42 = v43; /*0x100b01cd4*/
        v44 = *(_QWORD *)(v37 + v39 + 48); /*0x100b01cd7*/
        v31 = v130; /*0x100b01cdf*/
        if ( v44 ) /*0x100b01ce3*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v37 + v39 + 56), v44, 1); /*0x100b01cef*/
        v45 = v37 + v39 + 48; /*0x100b01cf4*/
        *(const __m128i **)(v45 + 16) = v106[5]; /*0x100b01d04*/
        v46 = v106[3]; /*0x100b01d08*/
        *(const __m128i **)(v45 + 8) = v106[4]; /*0x100b01d0f*/
        *(_QWORD *)v45 = v46; /*0x100b01d13*/
        *(_BYTE *)(v37 + v39 + 105) = v128; /*0x100b01d1a*/
        v47 = *(_QWORD *)(v37 + v39 + 72); /*0x100b01d1f*/
        if ( v47 ) /*0x100b01d27*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v37 + v39 + 80), v47, 1); /*0x100b01d33*/
        v48 = (_QWORD *)(v37 + v39 + 72); /*0x100b01d38*/
        v48[2] = v109; /*0x100b01d44*/
        v49 = v107; /*0x100b01d48*/
        v48[1] = v108; /*0x100b01d56*/
        *v48 = v49; /*0x100b01d5a*/
        *(_BYTE *)(v37 + v39 + 104) = 1; /*0x100b01d5d*/
        v19 = v133; /*0x100b01d6a*/
        if ( v127 ) /*0x100b01d6e*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v127, 1); /*0x100b01d7d*/
      }
      else
      {
LABEL_58:
        __src[0] = v127; /*0x100b01d90*/
        __src[1] = __s2; /*0x100b01dab*/
        __src[2] = v33; /*0x100b01db2*/
        __src[8] = v34[5]; /*0x100b01dc4*/
        __src[7] = v34[4]; /*0x100b01dcc*/
        __src[6] = v34[3]; /*0x100b01dd4*/
        __src[5] = v34[2]; /*0x100b01ddc*/
        v50 = *v34; /*0x100b01de0*/
        __src[4] = v34[1]; /*0x100b01de7*/
        __src[3] = v50; /*0x100b01deb*/
        __src[11] = v111[2]; /*0x100b01df9*/
        v51 = *v111; /*0x100b01dfd*/
        __src[10] = v111[1]; /*0x100b01e04*/
        __src[9] = v51; /*0x100b01e08*/
        LOBYTE(__src[13]) = *(_BYTE *)(__n + 104); /*0x100b01e10*/
        __src[12] = *(_QWORD *)(__n + 96); /*0x100b01e16*/
        BYTE1(__src[13]) = v128; /*0x100b01e1e*/
        HIWORD(__src[13]) = *(_WORD *)(__n + 110); /*0x100b01e28*/
        *(_DWORD *)((char *)&__src[13] + 2) = *(_DWORD *)(__n + 106); /*0x100b01e2e*/
        v52 = v123; /*0x100b01e31*/
        v19 = v133; /*0x100b01e3f*/
        v31 = v130; /*0x100b01e43*/
        if ( v123 == (char *)v102[0] ) /*0x100b01e47*/
        {
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::ha12118a19a989fe2(v102, *(double *)si128.i64); /*0x100b01e54*/
          v37 = v102[1]; /*0x100b01e59*/
        }
        qmemcpy((void *)(v38 + v37), __src, 0x70u); /*0x100b01b62*/
        v102[2] = v52 + 1; /*0x100b01b68*/
      }
      if ( v31 == v122 ) /*0x100b01b76*/
      {
        v30 = v122; /*0x100b02048*/
        break; /*0x100b02048*/
      }
    }
    v110[1] = v30; /*0x100b0204f*/
  }
  v60 = 0x6DB6DB6DB6DB6DB7LL * ((unsigned __int64)(v122 - v30) >> 4); /*0x100b0206e*/
  core::ptr::drop_in_place$LT$$u5b$codexmate_lib..core..models..VoicePromptTemplate$u5d$$GT$::hd6af1f5b3fc8a147( /*0x100b02072*/
    v30,
    v60);
  if ( v112 ) /*0x100b02081*/
  {
    v60 = 112 * v112; /*0x100b02083*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, 112 * v112, 8); /*0x100b02093*/
  }
  v61 = v102[7]; /*0x100b02098*/
  v62 = v102[8]; /*0x100b0209f*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100b020ad*/
  v66 = v63; /*0x100b020af*/
  if ( *(_BYTE *)(v63 + 16) == 1 ) /*0x100b020b6*/
  {
    v67 = *(_QWORD *)v63; /*0x100b020bc*/
    v68 = *(_QWORD *)(v66 + 8); /*0x100b020bf*/
  }
  else
  {
    v67 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100b02510*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v60,
            v64,
            v65);
    *(_QWORD *)v66 = v67; /*0x100b02515*/
    *(_QWORD *)(v66 + 8) = v68; /*0x100b02518*/
    *(_BYTE *)(v66 + 16) = 1; /*0x100b0251c*/
  }
  *(_QWORD *)v66 = v67 + 1; /*0x100b020c7*/
  memset(&__src[1], 0, 24); /*0x100b020ed*/
  __src[0] = &xmmword_1015FBEC0; /*0x100b020fb*/
  __src[4] = v67; /*0x100b02102*/
  __src[5] = v68; /*0x100b02109*/
  if ( v62 ) /*0x100b02113*/
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(__src, v62, &__src[4], 1); /*0x100b0253c*/
    do /*0x100b0256c*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v106, v61); /*0x100b02555*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(__src, v106); /*0x100b02560*/
      v61 += 72; /*0x100b02565*/
      --v62; /*0x100b02569*/
    }
    while ( v62 ); /*0x100b0256c*/
  }
  v106[5] = (const __m128i *)__src[5]; /*0x100b02120*/
  v106[4] = (const __m128i *)__src[4]; /*0x100b0212e*/
  v106[3] = (const __m128i *)__src[3]; /*0x100b0213c*/
  v106[2] = (const __m128i *)__src[2]; /*0x100b0214a*/
  v106[1] = (const __m128i *)__src[1]; /*0x100b0215f*/
  v106[0] = (const __m128i *)__src[0]; /*0x100b02166*/
  HIDWORD(_RAX) = HIDWORD(v102[5]); /*0x100b0216d*/
  if ( v102[5] ) /*0x100b02177*/
  {
    v70 = (char *)v102[4]; /*0x100b0217d*/
    v71 = 160LL * v102[5]; /*0x100b02188*/
    v72 = 0; /*0x100b0218c*/
    v130 = (char *)v102[4]; /*0x100b0218e*/
    do /*0x100b021ac*/
    {
      HIDWORD(_RAX) = 0x80000000; /*0x100b021ac*/
      if ( *(_QWORD *)&v70[v72 + 72] != 0x8000000000000000LL ) /*0x100b021bb*/
      {
        __s2 = v19; /*0x100b021bd*/
        v73 = *(_QWORD *)&v70[v72 + 80]; /*0x100b021c1*/
        v74 = *(_QWORD *)&v70[v72 + 88]; /*0x100b021c6*/
        _RAX = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v73, v74); /*0x100b021cb*/
        v76 = (void *)v75; /*0x100b021d0*/
        if ( !v75 ) /*0x100b021d6*/
          goto LABEL_83; /*0x100b021d6*/
        if ( v75 < 0 ) /*0x100b021db*/
        {
          v79 = 0; /*0x100b0246c*/
          goto LABEL_115; /*0x100b0246c*/
        }
        v77 = (const void *)_RAX; /*0x100b021e1*/
        v127 = v71; /*0x100b021e4*/
        v78 = v75; /*0x100b021e8*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v73, v74); /*0x100b021eb*/
        v79 = 1; /*0x100b021f0*/
        v80 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v76, 1); /*0x100b021fe*/
        if ( !v80 ) /*0x100b02206*/
          goto LABEL_126; /*0x100b02206*/
        v81 = (size_t)v80; /*0x100b0220c*/
        memcpy(v80, v77, (size_t)v76); /*0x100b02218*/
        __src[0] = v76; /*0x100b0221d*/
        v128 = v81; /*0x100b02224*/
        __src[1] = v81; /*0x100b02228*/
        __n = (size_t)v76; /*0x100b0222f*/
        __src[2] = v76; /*0x100b02233*/
        _RAX = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v106, __src); /*0x100b02248*/
        v71 = v127; /*0x100b0224d*/
        if ( (_BYTE)_RAX ) /*0x100b02253*/
        {
LABEL_83:
          v19 = __s2; /*0x100b02194*/
        }
        else
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v106, __src); /*0x100b02259*/
          v79 = 1; /*0x100b0225e*/
          v78 = __n; /*0x100b02269*/
          v82 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100b02270*/
          if ( !v82 ) /*0x100b02278*/
          {
LABEL_126:
            v128 = v78; /*0x100b02573*/
LABEL_115:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v79, v128); /*0x100b0246f*/
          }
          v123 = v82; /*0x100b0227e*/
          v83 = v82; /*0x100b02285*/
          v84 = v77; /*0x100b02288*/
          memcpy(v82, v77, v78); /*0x100b0228e*/
          if ( *(_QWORD *)&v130[v72 + 96] == 0x8000000000000000LL ) /*0x100b022a6*/
          {
            v86 = 0; /*0x100b022a8*/
          }
          else
          {
            v83 = *(char **)&v130[v72 + 104]; /*0x100b022b0*/
            v84 = *(const void **)&v130[v72 + 112]; /*0x100b022b5*/
            v86 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v83, v84); /*0x100b022ba*/
          }
          v71 = v127; /*0x100b022aa*/
          if ( v86 != 0 && v85 != nullptr ) /*0x100b022cc*/
          {
            v76 = v85; /*0x100b022d3*/
            v77 = (const void *)v86; /*0x100b022d7*/
          }
          if ( (__int64)v76 < 0 ) /*0x100b022de*/
          {
            v100 = 0; /*0x100b024fb*/
            goto LABEL_121; /*0x100b024fb*/
          }
          if ( v76 ) /*0x100b022e4*/
          {
            LOBYTE(v84) = v86 == 0 || v85 == nullptr; /*0x100b022d0*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v83, v84); /*0x100b022e6*/
            v87 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v76, 1); /*0x100b022f3*/
            if ( !v87 ) /*0x100b022fb*/
            {
              __s2 = v76; /*0x100b0257c*/
              v100 = 1; /*0x100b02580*/
LABEL_121:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v100, __s2); /*0x100b024fd*/
            }
            v88 = v87; /*0x100b02301*/
          }
          else
          {
            v88 = 1; /*0x100b02306*/
          }
          memcpy((void *)v88, v77, (size_t)v76); /*0x100b02315*/
          __src[0] = __n; /*0x100b0231e*/
          __src[1] = v123; /*0x100b0232c*/
          __src[2] = __n; /*0x100b02333*/
          __src[3] = v76; /*0x100b0233a*/
          __src[4] = v88; /*0x100b02341*/
          _RAX = v88; /*0x100b02348*/
          __src[5] = v76; /*0x100b0234b*/
          __src[6] = 0; /*0x100b02352*/
          __src[7] = 1; /*0x100b0235d*/
          __src[8] = 0; /*0x100b02368*/
          v89 = v102[8]; /*0x100b02373*/
          v19 = (void *)_RAX; /*0x100b02381*/
          if ( v102[8] == v102[6] ) /*0x100b02384*/
            HIDWORD(_RAX) = (unsigned __int64)alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v102[6]) >> 32; /*0x100b0238d*/
          qmemcpy((void *)(v102[7] + 72 * v89), __src, 0x48u); /*0x100b023ad*/
          v102[8] = v89 + 1; /*0x100b023b3*/
        }
        v70 = v130; /*0x100b02198*/
      }
      v72 += 160; /*0x100b0219c*/
    }
    while ( v71 != v72 ); /*0x100b021ac*/
  }
  v90 = v106[1]; /*0x100b023bf*/
  if ( v106[1] ) /*0x100b023c9*/
  {
    v91 = v106[3]; /*0x100b023cf*/
    if ( v106[3] ) /*0x100b023d9*/
    {
      v92 = v106[0]; /*0x100b023df*/
      si128 = _mm_load_si128(v106[0]); /*0x100b023e6*/
      _R13D = ~_mm_movemask_epi8(si128); /*0x100b023f0*/
      v94 = v106[0] + 1; /*0x100b023f3*/
      do /*0x100b02409*/
      {
        if ( !(_WORD)_R13D ) /*0x100b0240f*/
        {
          do /*0x100b0243d*/
          {
            si128 = _mm_load_si128(v94); /*0x100b02420*/
            v95 = _mm_movemask_epi8(si128); /*0x100b02426*/
            v92 -= 24; /*0x100b0242b*/
            ++v94; /*0x100b02432*/
          }
          while ( v95 == 0xFFFF ); /*0x100b0243d*/
          _R13D = ~v95; /*0x100b0243f*/
        }
        __asm { tzcnt eax, r13d } /*0x100b02442*/
        v96 = -3 * _RAX; /*0x100b0244a*/
        v97 = *((_QWORD *)&v92[-1] + v96 - 1); /*0x100b0244e*/
        if ( v97 ) /*0x100b02456*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92[-1].i64[v96], v97, 1); /*0x100b02465*/
        v91 = (const __m128i *)((char *)v91 - 1); /*0x100b023f9*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100b02400*/
        _R13D &= _R13D - 1; /*0x100b02403*/
      }
      while ( v91 ); /*0x100b02409*/
    }
    v98 = (24LL * (_QWORD)v90 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b02490*/
    v99 = (__int64)v90[1].i64 + v98 + 1; /*0x100b02497*/
    if ( v99 ) /*0x100b0249b*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v106[0] - v98, v99, 16); /*0x100b024af*/
  }
  v22 = v133; /*0x100b024bb*/
  codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(v102); /*0x100b024bf*/
  memcpy(__dst, v102, 0x90u); /*0x100b024d4*/
  if ( v22 ) /*0x100b024dc*/
    goto LABEL_119; /*0x100b024dc*/
  return *(double *)si128.i64; /*0x100b015a0*/
}