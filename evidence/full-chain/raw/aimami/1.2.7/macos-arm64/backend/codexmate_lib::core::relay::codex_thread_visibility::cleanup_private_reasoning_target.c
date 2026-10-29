// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_target::h821ca4ad370066e1; addr: 0x10048adf0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_target::h821ca4ad370066e1(
        _QWORD *a1,
        __int64 a2,
        double a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  _BYTE *v8; // rax
  _BYTE *v9; // r15
  __int64 v10; // r14
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 *v15; // rdi
  _QWORD *v16; // rsi
  _BYTE *v17; // rdi
  _BYTE *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rsi
  unsigned __int64 v22; // r12
  __int64 result; // rax
  _BYTE *v24; // rax
  _BYTE *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r12
  _BYTE *v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  _BYTE *v37; // rax
  char **v38; // rdi
  _BYTE *v39; // rsi
  unsigned __int8 v40; // al
  __int64 v41; // rdx
  char *v42; // rbx
  int v43; // r14d
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // r13
  _BYTE *v47; // rax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r15
  _BYTE v51[24]; // [rsp+0h] [rbp-3E0h] BYREF
  _QWORD v52[12]; // [rsp+18h] [rbp-3C8h] BYREF
  __int64 v53; // [rsp+78h] [rbp-368h]
  _QWORD v54[12]; // [rsp+80h] [rbp-360h] BYREF
  _QWORD *v55; // [rsp+E0h] [rbp-300h] BYREF
  _QWORD v56[12]; // [rsp+E8h] [rbp-2F8h] BYREF
  __int64 v57; // [rsp+148h] [rbp-298h] BYREF
  __int64 v58; // [rsp+150h] [rbp-290h]
  __int64 v59; // [rsp+158h] [rbp-288h]
  __int64 v60; // [rsp+160h] [rbp-280h]
  __int64 v61; // [rsp+168h] [rbp-278h]
  __int64 v62; // [rsp+170h] [rbp-270h]
  __int64 v63; // [rsp+178h] [rbp-268h]
  __int64 v64; // [rsp+180h] [rbp-260h]
  __int64 v65; // [rsp+188h] [rbp-258h]
  __int64 v66; // [rsp+190h] [rbp-250h]
  __int64 v67; // [rsp+198h] [rbp-248h]
  __int64 v68; // [rsp+1A0h] [rbp-240h]
  __int64 v69; // [rsp+1A8h] [rbp-238h] BYREF
  void *__src; // [rsp+1B0h] [rbp-230h]
  size_t __n; // [rsp+1B8h] [rbp-228h]
  __int64 v72; // [rsp+1C0h] [rbp-220h] BYREF
  int v73; // [rsp+1CCh] [rbp-214h] BYREF
  __int16 v74; // [rsp+1D0h] [rbp-210h]
  int v75; // [rsp+1D2h] [rbp-20Eh]
  __int16 v76; // [rsp+1D6h] [rbp-20Ah]
  __int64 v77; // [rsp+1D8h] [rbp-208h] BYREF
  unsigned __int64 v78; // [rsp+1E0h] [rbp-200h]
  __int64 v79; // [rsp+1E8h] [rbp-1F8h]
  char *v80; // [rsp+1F0h] [rbp-1F0h]
  __int64 (__fastcall *v81)(_QWORD, _QWORD); // [rsp+1F8h] [rbp-1E8h]
  __int64 v82; // [rsp+200h] [rbp-1E0h]
  char *v83; // [rsp+208h] [rbp-1D8h]
  __int64 (__fastcall *v84)(_QWORD, _QWORD); // [rsp+210h] [rbp-1D0h]
  __int64 v85; // [rsp+218h] [rbp-1C8h]
  _BYTE __dst[120]; // [rsp+220h] [rbp-1C0h] BYREF
  __int64 v87; // [rsp+298h] [rbp-148h]
  char *v88; // [rsp+2A0h] [rbp-140h]
  __int64 (__fastcall *v89)(_QWORD, _QWORD); // [rsp+2A8h] [rbp-138h]
  __int64 v90; // [rsp+2B0h] [rbp-130h]
  char *v91; // [rsp+2B8h] [rbp-128h]
  __int64 (__fastcall *v92)(_QWORD, _QWORD); // [rsp+2C0h] [rbp-120h]
  char *v93; // [rsp+2C8h] [rbp-118h] BYREF
  _QWORD v94[12]; // [rsp+2D0h] [rbp-110h] BYREF
  __int64 *v95; // [rsp+330h] [rbp-B0h]
  __int64 v96; // [rsp+338h] [rbp-A8h]
  __int64 v97; // [rsp+340h] [rbp-A0h]
  char *v98; // [rsp+348h] [rbp-98h]
  __int64 (__fastcall *v99)(_QWORD, _QWORD); // [rsp+350h] [rbp-90h]
  __int64 v100; // [rsp+358h] [rbp-88h]
  char *v101; // [rsp+360h] [rbp-80h] BYREF
  __int64 (__fastcall *v102)(_QWORD, _QWORD); // [rsp+368h] [rbp-78h]
  __int64 v103; // [rsp+370h] [rbp-70h]
  char *v104; // [rsp+378h] [rbp-68h]
  __int64 (__fastcall *v105)(_QWORD, _QWORD); // [rsp+380h] [rbp-60h]
  __int64 v106; // [rsp+388h] [rbp-58h]
  __int64 v107; // [rsp+390h] [rbp-50h]
  __int64 v108; // [rsp+398h] [rbp-48h]
  char *v109; // [rsp+3A0h] [rbp-40h]
  __int64 v110; // [rsp+3A8h] [rbp-38h]
  char v111; // [rsp+3B7h] [rbp-29h] BYREF

  v3 = a2; /*0x10048ae04*/
  a1[3] = 0; /*0x10048ae07*/
  a1[2] = 0; /*0x10048ae0f*/
  a1[1] = 0; /*0x10048ae17*/
  v55 = a1; /*0x10048ae1f*/
  *a1 = 0; /*0x10048ae26*/
  v4 = *(_QWORD *)(a2 + 32); /*0x10048ae2d*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10048ae31*/
  codexmate_lib::core::relay::codex_thread_visibility::RolloutReadStamp::read::h92ad3bb2d9025d9d(__dst, v4, v5); /*0x10048ae42*/
  v53 = a2; /*0x10048ae54*/
  if ( __OFSUB__(-*(_QWORD *)__dst, 1) ) /*0x10048ae51*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v4, v6); /*0x10048ae61*/
    v7 = 49; /*0x10048ae66*/
    v8 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x10048ae76*/
    if ( !v8 ) /*0x10048ae7e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x10048be53*/
    v9 = v8; /*0x10048ae84*/
    qmemcpy(v8, "private reasoning candidate is no longer readable", 49); /*0x10048aed7*/
    v10 = 10; /*0x10048aedf*/
    v3 = 49; /*0x10048aee5*/
    goto LABEL_51; /*0x10048aeea*/
  }
  v61 = *(_QWORD *)&__dst[32]; /*0x10048af15*/
  v62 = *(_QWORD *)&__dst[40]; /*0x10048af23*/
  v63 = *(_QWORD *)&__dst[48]; /*0x10048af31*/
  v64 = *(_QWORD *)&__dst[56]; /*0x10048af3f*/
  v65 = *(_QWORD *)&__dst[64]; /*0x10048af4d*/
  v66 = *(_QWORD *)&__dst[72]; /*0x10048af5b*/
  v67 = *(_QWORD *)&__dst[80]; /*0x10048af69*/
  v68 = *(_QWORD *)&__dst[88]; /*0x10048af77*/
  v57 = *(_QWORD *)__dst; /*0x10048af7e*/
  v58 = *(_QWORD *)&__dst[8]; /*0x10048af85*/
  v59 = *(_QWORD *)&__dst[16]; /*0x10048af8c*/
  v60 = *(_QWORD *)&__dst[24]; /*0x10048af93*/
  v11 = *(_QWORD *)(a2 + 48) == 0x8000000000000000LL; /*0x10048af9a*/
  v110 = v5; /*0x10048af9e*/
  if ( v11 /*0x10048afe4*/
    || *(_QWORD *)(a2 + 104) != v64
    || !(unsigned __int8)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(
                           *(_QWORD *)(a2 + 56),
                           *(_QWORD *)(a2 + 64),
                           *(_QWORD *)&__dst[8],
                           *(_QWORD *)&__dst[16])
    || *(_QWORD *)(a2 + 72) != v60
    || *(_DWORD *)(a2 + 80) != (_DWORD)v61 )
  {
    goto LABEL_19; /*0x10048afe4*/
  }
  v12 = *(_DWORD *)(a2 + 96); /*0x10048afe6*/
  if ( v12 != 1000000000 ) /*0x10048aff4*/
  {
    if ( (_DWORD)v63 == 1000000000 || v12 != (_DWORD)v63 || *(_QWORD *)(a2 + 88) != v62 ) /*0x10048b017*/
      goto LABEL_19; /*0x10048b017*/
LABEL_15:
    if ( *(_QWORD *)(a2 + 112) == v65 /*0x10048b051*/
      && *(_QWORD *)(a2 + 120) == v66
      && *(_QWORD *)(a2 + 128) == v67
      && *(_QWORD *)(a2 + 136) == v68 )
    {
      goto LABEL_41; /*0x10048b051*/
    }
    goto LABEL_19; /*0x10048b051*/
  }
  if ( (_DWORD)v63 == 1000000000 ) /*0x10048affc*/
    goto LABEL_15; /*0x10048affc*/
LABEL_19:
  codexmate_lib::core::relay::codex_thread_visibility::convergence_anchors_for_thread::h50c5127b22cc79d9(__dst); /*0x10048b057*/
  v14 = *(_QWORD *)__dst; /*0x10048b071*/
  qmemcpy(v54, &__dst[8], sizeof(v54)); /*0x10048b08b*/
  if ( *(_QWORD *)__dst == 0x8000000000000000LL ) /*0x10048b091*/
  {
    qmemcpy(v56, v54, sizeof(v56)); /*0x10048b0a6*/
    v16 = &v55; /*0x10048b0a6*/
    v15 = &v57; /*0x10048b0a6*/
  }
  else
  {
    v99 = v89; /*0x10048b0b5*/
    v98 = v88; /*0x10048b0c3*/
    v97 = v87; /*0x10048b0d1*/
    v96 = *(_QWORD *)&__dst[112]; /*0x10048b0e6*/
    v95 = *(__int64 **)&__dst[104]; /*0x10048b0ed*/
    qmemcpy(v94, v54, sizeof(v94)); /*0x10048b107*/
    v93 = *(char **)__dst; /*0x10048b10a*/
    v15 = v56; /*0x10048b111*/
    codexmate_lib::core::relay::codex_thread_visibility::rollout_provider_anchors::h285dddb3fde87d00(v56, &v93, v4, v5); /*0x10048b125*/
    if ( v14 ) /*0x10048b12d*/
    {
      v15 = (__int64 *)v94[0]; /*0x10048b12f*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94[0], v14, 1); /*0x10048b13e*/
    }
    if ( v94[5] ) /*0x10048b14d*/
    {
      v15 = (__int64 *)v94[6]; /*0x10048b14f*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94[6], v94[5], 1); /*0x10048b15b*/
    }
    v16 = (_QWORD *)v94[11]; /*0x10048b160*/
    if ( v94[11] != 0x8000000000000000LL && v94[11] ) /*0x10048b16f*/
    {
      v15 = v95; /*0x10048b171*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v94[11], 1); /*0x10048b17d*/
    }
  }
  v10 = v56[0]; /*0x10048b182*/
  v7 = v56[1]; /*0x10048b189*/
  v9 = (_BYTE *)v56[2]; /*0x10048b190*/
  v3 = v56[3]; /*0x10048b197*/
  v80 = (char *)v56[4]; /*0x10048b1a5*/
  v81 = (__int64 (__fastcall *)(_QWORD, _QWORD))v56[5]; /*0x10048b1b3*/
  v82 = v56[6]; /*0x10048b1c1*/
  v83 = (char *)v56[7]; /*0x10048b1cf*/
  v84 = (__int64 (__fastcall *)(_QWORD, _QWORD))v56[8]; /*0x10048b1dd*/
  v85 = v56[9]; /*0x10048b1eb*/
  if ( v56[0] != 11 ) /*0x10048b1f6*/
  {
    v108 = v56[11]; /*0x10048b3e0*/
    v107 = v56[10]; /*0x10048b3e4*/
    v101 = v80; /*0x10048b3f6*/
    v102 = v81; /*0x10048b3fa*/
    v103 = v82; /*0x10048b405*/
    v104 = v83; /*0x10048b410*/
    v105 = v84; /*0x10048b41b*/
    v106 = v85; /*0x10048b426*/
    v21 = v57; /*0x10048b42a*/
    if ( !v57 ) /*0x10048b434*/
    {
LABEL_51:
      v22 = v7 >> 8; /*0x10048b447*/
LABEL_52:
      v93 = (char *)v10; /*0x10048b44e*/
      v94[0] = (v22 << 8) | (unsigned __int8)v7; /*0x10048b460*/
      v94[1] = v9; /*0x10048b467*/
      v94[2] = v3; /*0x10048b46e*/
      v94[3] = v101; /*0x10048b47d*/
      v94[4] = v102; /*0x10048b484*/
      v94[5] = v103; /*0x10048b48f*/
      v94[6] = v104; /*0x10048b49a*/
      v94[7] = v105; /*0x10048b4a5*/
      v94[8] = v106; /*0x10048b4b0*/
      v94[9] = v107; /*0x10048b4bb*/
      v94[10] = v108; /*0x10048b4c6*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10048b4db*/
      {
        v54[0] = v53; /*0x10048b4e8*/
        v54[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10048b4f6*/
        v54[2] = &v93; /*0x10048b504*/
        v54[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x10048b512*/
        *(_QWORD *)&__dst[48] = 2; /*0x10048b519*/
        *(_QWORD *)&__dst[56] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048b52b*/
        *(_QWORD *)&__dst[64] = 51; /*0x10048b532*/
        *(_QWORD *)&__dst[80] = &unk_1018F7F83; /*0x10048b544*/
        *(_QWORD *)&__dst[88] = v54; /*0x10048b552*/
        *(_QWORD *)__dst = 0; /*0x10048b559*/
        *(_QWORD *)&__dst[8] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048b564*/
        *(_QWORD *)&__dst[16] = 51; /*0x10048b56b*/
        *(_QWORD *)&__dst[24] = 0; /*0x10048b576*/
        *(_QWORD *)&__dst[32] = "src/core/relay/codex_thread_visibility.rs"; /*0x10048b588*/
        *(_QWORD *)&__dst[40] = 41; /*0x10048b58f*/
        *(_QWORD *)&__dst[72] = 0x268800000001LL; /*0x10048b5a4*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v56, __dst); /*0x10048b5b9*/
      }
      v55[3] = 1; /*0x10048b5c5*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&v93); /*0x10048b5d4*/
    }
LABEL_50:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v21, 1); /*0x10048b436*/
    goto LABEL_51; /*0x10048b442*/
  }
  v52[0] = v56[1]; /*0x10048b1ff*/
  v52[1] = v56[2]; /*0x10048b206*/
  v52[2] = v56[3]; /*0x10048b20d*/
  v52[3] = v80; /*0x10048b222*/
  v52[4] = v81; /*0x10048b229*/
  v52[5] = v82; /*0x10048b237*/
  v52[6] = v83; /*0x10048b245*/
  v52[7] = v84; /*0x10048b253*/
  v52[8] = v85; /*0x10048b261*/
  if ( v56[1] != 0x8000000000000000LL /*0x10048b658*/
    && (v56[3] != 6 || *(_DWORD *)v56[2] ^ 0x6E65706F | *(unsigned __int16 *)(v56[2] + 4LL) ^ 0x6961)
    || v52[3] != 0x8000000000000000LL
    && (v52[5] != 6 || *(_DWORD *)v52[4] ^ 0x6E65706F | *(unsigned __int16 *)(v52[4] + 4LL) ^ 0x6961)
    || (v16 = (_QWORD *)v52[6], v52[6] != 0x8000000000000000LL)
    && (v52[8] != 6 || *(_DWORD *)v52[7] ^ 0x6E65706F | *(unsigned __int16 *)(v52[7] + 4LL) ^ 0x6961) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v16, v13); /*0x10048b660*/
    v24 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1); /*0x10048b66f*/
    if ( !v24 ) /*0x10048b677*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 60); /*0x10048bf6c*/
    v25 = v24; /*0x10048b67d*/
    qmemcpy(v24, "private reasoning candidate provider changed; retry required", 60); /*0x10048b6e4*/
    if ( 2 * v7 ) /*0x10048b6f1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v7, 1); /*0x10048b721*/
      v26 = v52[3]; /*0x10048b726*/
      if ( v52[3] == 0x8000000000000000LL ) /*0x10048b73a*/
        goto LABEL_71; /*0x10048b73a*/
    }
    else
    {
      v26 = v52[3]; /*0x10048b6fe*/
      if ( v52[3] == 0x8000000000000000LL ) /*0x10048b712*/
        goto LABEL_71; /*0x10048b712*/
    }
    if ( v26 ) /*0x10048b73f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52[4], v26, 1); /*0x10048b74d*/
LABEL_71:
    v10 = 10; /*0x10048b752*/
    v7 = 60; /*0x10048b75f*/
    if ( v52[6] != 0x8000000000000000LL && v52[6] ) /*0x10048b777*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52[7], v52[6], 1); /*0x10048b785*/
    v3 = 60; /*0x10048b78a*/
    v9 = v25; /*0x10048b78f*/
    v21 = v57; /*0x10048b792*/
    if ( !v57 ) /*0x10048b79c*/
      goto LABEL_51; /*0x10048b79c*/
    goto LABEL_50; /*0x10048b79c*/
  }
  if ( 2LL * v56[1] ) /*0x10048b2af*/
  {
    v3 = v52[6]; /*0x10048b2c4*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56[2], v56[1], 1); /*0x10048b2ca*/
    v16 = (_QWORD *)v52[6]; /*0x10048b2cf*/
  }
  if ( v52[3] != 0x8000000000000000LL && v52[3] ) /*0x10048b2e4*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52[4], v52[3], 1); /*0x10048b2f8*/
  if ( v16 != (_QWORD *)0x8000000000000000LL && v16 ) /*0x10048b308*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52[7], v16, 1); /*0x10048b316*/
  v5 = v110; /*0x10048b31e*/
LABEL_41:
  v17 = __dst; /*0x10048b322*/
  v18 = (_BYTE *)v4; /*0x10048b329*/
  codexmate_lib::core::relay::codex_thread_visibility::RolloutReadStamp::read::h92ad3bb2d9025d9d(__dst, v4, v5); /*0x10048b32f*/
  v9 = *(_BYTE **)__dst; /*0x10048b334*/
  if ( *(_QWORD *)__dst != 0x8000000000000000LL ) /*0x10048b33e*/
  {
    if ( *(_QWORD *)&__dst[56] == v64 ) /*0x10048b352*/
    {
      v20 = *(_QWORD *)&__dst[8]; /*0x10048b358*/
      v18 = *(_BYTE **)&__dst[16]; /*0x10048b35f*/
      v17 = *(_BYTE **)&__dst[8]; /*0x10048b374*/
      if ( (unsigned __int8)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff( /*0x10048b377*/
                              *(_QWORD *)&__dst[8],
                              *(_QWORD *)&__dst[16],
                              v58,
                              v59) )
      {
        if ( *(_QWORD *)&__dst[24] == v60 && *(_DWORD *)&__dst[32] == (_DWORD)v61 ) /*0x10048b3a4*/
        {
          if ( *(_DWORD *)&__dst[48] == 1000000000 ) /*0x10048b3bb*/
          {
            if ( (_DWORD)v63 != 1000000000 ) /*0x10048b3c7*/
              goto LABEL_92; /*0x10048b3c7*/
          }
          else if ( (_DWORD)v63 == 1000000000 || *(_DWORD *)&__dst[48] != (_DWORD)v63 || *(_QWORD *)&__dst[40] != v62 ) /*0x10048b7c9*/
          {
            goto LABEL_92; /*0x10048b7c9*/
          }
          if ( *(_QWORD *)&__dst[64] == v65 /*0x10048b819*/
            && *(_QWORD *)&__dst[72] == v66
            && *(_QWORD *)&__dst[80] == v67
            && *(_QWORD *)&__dst[88] == v68 )
          {
            v109 = (char *)v4; /*0x10048b81f*/
            if ( v9 ) /*0x10048b826*/
              a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v9, 1); /*0x10048b833*/
            codexmate_lib::core::relay::codex_thread_visibility::rollout_history::reader::hd7e21cc134c0ebd0( /*0x10048b847*/
              __dst,
              v109,
              v110);
            v7 = *(_QWORD *)&__dst[8]; /*0x10048b853*/
            v100 = *(_QWORD *)__dst; /*0x10048b85a*/
            if ( *(_QWORD *)__dst ) /*0x10048b864*/
            {
              v54[0] = 0; /*0x10048b86a*/
              v54[1] = 1; /*0x10048b875*/
              v3 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 112LL); /*0x10048b880*/
              v9 = v54; /*0x10048b884*/
              v10 = 11; /*0x10048b892*/
              while ( 1 ) /*0x10048b898*/
              {
                v54[2] = 0; /*0x10048b898*/
                if ( (((__int64 (__fastcall *)(__int64, __int64, _QWORD *))v3)(v100, 10, v54) & 1) != 0 ) /*0x10048b8b6*/
                {
                  v28 = v27; /*0x10048ba1c*/
                  v10 = 2; /*0x10048ba1f*/
                  goto LABEL_105; /*0x10048ba25*/
                }
                if ( !v27 ) /*0x10048b8bf*/
                {
                  v28 = 0; /*0x10048ba2a*/
                  goto LABEL_105; /*0x10048ba2d*/
                }
                codexmate_lib::core::relay::codex_thread_visibility::line_is_unusable_reasoning_response_item::h37eacd04c43f9926( /*0x10048b8de*/
                  __dst,
                  (unsigned __int8 *)v54[1],
                  v54[2],
                  (__int64)v109,
                  v110);
                if ( *(_QWORD *)__dst != 11 ) /*0x10048b8ee*/
                  break; /*0x10048b8ee*/
                if ( __dst[8] == 1 ) /*0x10048b8fb*/
                {
                  v28 = 1; /*0x10048b8fd*/
                  goto LABEL_105; /*0x10048b903*/
                }
              }
              v28 = *(_QWORD *)&__dst[8]; /*0x10048ba32*/
              v9 = *(_BYTE **)&__dst[16]; /*0x10048ba39*/
              v3 = *(_QWORD *)&__dst[24]; /*0x10048ba40*/
              v93 = *(char **)&__dst[32]; /*0x10048ba4e*/
              v94[0] = *(_QWORD *)&__dst[40]; /*0x10048ba5c*/
              v94[1] = *(_QWORD *)&__dst[48]; /*0x10048ba6a*/
              v94[2] = *(_QWORD *)&__dst[56]; /*0x10048ba78*/
              v94[3] = *(_QWORD *)&__dst[64]; /*0x10048ba86*/
              v94[4] = *(_QWORD *)&__dst[72]; /*0x10048ba94*/
              v94[5] = *(_QWORD *)&__dst[80]; /*0x10048baa2*/
              v94[6] = *(_QWORD *)&__dst[88]; /*0x10048bab0*/
              v10 = *(_QWORD *)__dst; /*0x10048bab7*/
LABEL_105:
              if ( v54[0] ) /*0x10048bac4*/
                a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[1], v54[0], 1); /*0x10048bad2*/
              if ( *(_QWORD *)v7 ) /*0x10048bad7*/
                (*(void (__fastcall **)(__int64))v7)(v100); /*0x10048bae7*/
              v31 = *(_QWORD *)(v7 + 8); /*0x10048bae9*/
              if ( v31 ) /*0x10048baf0*/
                a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v31, *(_QWORD *)(v7 + 16)); /*0x10048bafd*/
              if ( (_DWORD)v10 == 11 ) /*0x10048bb06*/
              {
                if ( (v28 & 1) == 0 ) /*0x10048bb10*/
                {
                  v10 = 11; /*0x10048bc8b*/
                  v22 = 0; /*0x10048bc91*/
                  LOBYTE(v7) = 0; /*0x10048bc94*/
                  goto LABEL_96; /*0x10048bc97*/
                }
                codexmate_lib::core::relay::codex_thread_visibility::rollout_history::has_positions::h5f2fe6009df600b9( /*0x10048bb25*/
                  __dst,
                  v109,
                  v110);
                v10 = *(_QWORD *)__dst; /*0x10048bb2a*/
                LOBYTE(v7) = __dst[8]; /*0x10048bb31*/
                if ( *(_QWORD *)__dst != 11 ) /*0x10048bb3d*/
                {
                  v22 = ((unsigned __int64)((__dst[15] << 16) | (unsigned int)*(unsigned __int16 *)&__dst[13]) << 32) /*0x10048bcba*/
                      | *(unsigned int *)&__dst[9];
                  v9 = *(_BYTE **)&__dst[16]; /*0x10048bcbd*/
                  v3 = *(_QWORD *)&__dst[24]; /*0x10048bcc4*/
                  v101 = *(char **)&__dst[32]; /*0x10048bcd2*/
                  v102 = *(__int64 (__fastcall **)(_QWORD, _QWORD))&__dst[40]; /*0x10048bcdd*/
                  v103 = *(_QWORD *)&__dst[48]; /*0x10048bce8*/
                  v104 = *(char **)&__dst[56]; /*0x10048bcf3*/
                  v105 = *(__int64 (__fastcall **)(_QWORD, _QWORD))&__dst[64]; /*0x10048bcfe*/
                  v106 = *(_QWORD *)&__dst[72]; /*0x10048bd09*/
                  v107 = *(_QWORD *)&__dst[80]; /*0x10048bd14*/
                  v108 = *(_QWORD *)&__dst[88]; /*0x10048bd1f*/
                  goto LABEL_96; /*0x10048bd23*/
                }
                v111 = __dst[8]; /*0x10048bb43*/
                codexmate_lib::core::relay::codex_thread_visibility::rollout_history::resolve::h705afcdb05904caf(__dst); /*0x10048bb56*/
                v33 = *(_QWORD *)__dst; /*0x10048bb65*/
                v7 = *(_QWORD *)&__dst[8]; /*0x10048bb6c*/
                if ( *(_QWORD *)__dst == 0x8000000000000001LL ) /*0x10048bb79*/
                  goto LABEL_117; /*0x10048bb79*/
                v34 = *(_QWORD *)&__dst[16]; /*0x10048bb7f*/
                qmemcpy(v52, &__dst[24], sizeof(v52)); /*0x10048bb99*/
                v3 = v87; /*0x10048bb9c*/
                v80 = v88; /*0x10048bbaa*/
                v81 = v89; /*0x10048bbb8*/
                v82 = v90; /*0x10048bbc6*/
                v83 = v91; /*0x10048bbd4*/
                v84 = v92; /*0x10048bbe2*/
                if ( *(_QWORD *)__dst == 0x8000000000000000LL ) /*0x10048bbf6*/
                {
                  v7 = std::io::error::Error::new::h2838dbd593bc6ec9( /*0x10048bc0f*/
                         0,
                         "rollout is missing",
                         18,
                         0x8000000000000000LL,
                         v32);
LABEL_117:
                  v10 = 2; /*0x10048bc12*/
LABEL_118:
                  v22 = v7 >> 8; /*0x10048bc18*/
                  goto LABEL_96; /*0x10048bc1f*/
                }
                qmemcpy(__dst, v52, 0x60u); /*0x10048bd3b*/
                v89 = v84; /*0x10048bd45*/
                v88 = v83; /*0x10048bd53*/
                v87 = v82; /*0x10048bd61*/
                *(_QWORD *)&__dst[112] = v81; /*0x10048bd76*/
                *(_QWORD *)&__dst[104] = v80; /*0x10048bd7d*/
                v77 = v33; /*0x10048bd84*/
                v78 = v7; /*0x10048bd8b*/
                v79 = v34; /*0x10048bd92*/
                *(_QWORD *)&__dst[96] = v3; /*0x10048bd99*/
                v35 = (__int64)v109; /*0x10048bda7*/
                codexmate_lib::core::relay::codex_thread_visibility::RolloutReadStamp::read::h92ad3bb2d9025d9d( /*0x10048bdaf*/
                  &v93,
                  v109,
                  v110);
                if ( v93 == (char *)0x8000000000000000LL ) /*0x10048bdc8*/
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v93, v35, v36); /*0x10048bdce*/
                  v7 = 38; /*0x10048bdd3*/
                  v37 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1); /*0x10048bde3*/
                  if ( !v37 ) /*0x10048bdeb*/
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 38); /*0x10048c421*/
                  v9 = v37; /*0x10048bdf1*/
                  qmemcpy(v37, "cannot snapshot rollout before writing", 38); /*0x10048be36*/
                  v10 = 10; /*0x10048be39*/
                  v3 = 38; /*0x10048be3f*/
LABEL_142:
                  if ( v77 ) /*0x10048c160*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x10048c172*/
                  goto LABEL_118; /*0x10048c177*/
                }
                v38 = (char **)v94[0]; /*0x10048be58*/
                v39 = (_BYTE *)v94[1]; /*0x10048be5f*/
                v56[4] = v94[3]; /*0x10048be74*/
                v56[5] = v94[4]; /*0x10048be82*/
                v56[6] = v94[5]; /*0x10048be90*/
                v56[7] = v94[6]; /*0x10048be9e*/
                v56[8] = v94[7]; /*0x10048beac*/
                v56[9] = v94[8]; /*0x10048beba*/
                v56[10] = v94[9]; /*0x10048bec8*/
                v56[11] = v94[10]; /*0x10048bed6*/
                v56[0] = v93; /*0x10048bedd*/
                v56[1] = v94[0]; /*0x10048bee4*/
                v56[2] = v94[1]; /*0x10048beeb*/
                v56[3] = v94[2]; /*0x10048bef2*/
                v40 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff( /*0x10048bf07*/
                        v94[0],
                        v94[1],
                        v78,
                        v79);
                if ( ((v56[7] == v3) & v40) == 1 ) /*0x10048bf1a*/
                {
                  v42 = (char *)v56[3]; /*0x10048bf20*/
                  v43 = v56[4]; /*0x10048bf27*/
                  v38 = &v93; /*0x10048bf2e*/
                  v9 = __dst; /*0x10048bf35*/
                  v39 = __dst; /*0x10048bf3c*/
                  std::fs::Metadata::modified::h0e075817eaa8c909(&v93, __dst); /*0x10048bf3f*/
                  if ( LODWORD(v94[0]) == 1000000000 ) /*0x10048bf4f*/
                  {
                    v38 = (char **)v93; /*0x10048bf51*/
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3a76a939600446ed(v93); /*0x10048bf58*/
                  }
                  else if ( v43 == LODWORD(v94[0]) && v42 == v93 ) /*0x10048bf86*/
                  {
                    v44 = v79; /*0x10048bf93*/
                    v46 = std::path::Path::parent::h4c3ac26770731fbb(v78, v79); /*0x10048bf9f*/
                    if ( v46 ) /*0x10048bfa5*/
                    {
                      v3 = v45; /*0x10048bfab*/
                      uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v54); /*0x10048bfb8*/
                      v93 = (char *)v54; /*0x10048bfbd*/
                      v94[0] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c; /*0x10048bfcb*/
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(v51, &unk_1018F76F6, &v93); /*0x10048bfe7*/
                      std::path::Path::join::hab95b41607619e2b(&v69, v46, v3, v51); /*0x10048c003*/
                      v73 = 0; /*0x10048c008*/
                      v75 = 256; /*0x10048c012*/
                      v76 = 256; /*0x10048c01c*/
                      v74 = 384; /*0x10048c033*/
                      std::fs::OpenOptions::_open::h1dad73452047b8aa(&v93, &v73, __src, __n); /*0x10048c058*/
                      if ( (_DWORD)v93 == 1 ) /*0x10048c064*/
                      {
                        v7 = v94[0]; /*0x10048c06a*/
                        if ( v69 ) /*0x10048c07b*/
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v69, 1); /*0x10048c089*/
                        v10 = 2; /*0x10048c08e*/
                      }
                      else
                      {
                        v48 = HIDWORD(v93); /*0x10048c215*/
                        v93 = v109; /*0x10048c21f*/
                        v94[0] = v110; /*0x10048c22a*/
                        v94[1] = &v77; /*0x10048c238*/
                        LODWORD(v94[11]) = v48; /*0x10048c23f*/
                        v94[2] = v109; /*0x10048c245*/
                        v94[3] = v110; /*0x10048c24c*/
                        v94[4] = &v111; /*0x10048c257*/
                        v94[5] = &v57; /*0x10048c265*/
                        v94[6] = &v69; /*0x10048c26c*/
                        v94[7] = __dst; /*0x10048c273*/
                        v94[8] = v56; /*0x10048c281*/
                        v94[9] = v46; /*0x10048c288*/
                        v94[10] = v3; /*0x10048c28f*/
                        codexmate_lib::core::relay::codex_thread_visibility::rollout_history::rewrite::_$u7b$$u7b$closure$u7d$$u7d$::h11d0526c8dce2377( /*0x10048c2a4*/
                          v54,
                          (__int64 *)&v93,
                          a3);
                        v10 = v54[0]; /*0x10048c2a9*/
                        if ( v54[0] != 11 ) /*0x10048c2b4*/
                        {
                          v49 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x10048c2c8*/
                          v50 = v49; /*0x10048c2cd*/
                          if ( v49 ) /*0x10048c2d3*/
                          {
                            if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v49) ) /*0x10048c2dc*/
                            {
                              v72 = v50; /*0x10048c2e9*/
                              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10048c2fe*/
                              {
                                v101 = (char *)&v72; /*0x10048c307*/
                                v102 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10048c312*/
                                v93 = "codexmate_lib::core::relay::codex_thread_visibility::rollout_history"; /*0x10048c31d*/
                                v94[0] = 68; /*0x10048c324*/
                                v94[1] = "codexmate_lib::core::relay::codex_thread_visibility::rollout_history"; /*0x10048c32f*/
                                v94[2] = 68; /*0x10048c336*/
                                v94[3] = &off_101AA8848; /*0x10048c348*/
                                log::__private_api::log::hf5bade4875454669(&unk_1018F770E, &v101, 2, &v93); /*0x10048c366*/
                                v50 = v72; /*0x10048c36b*/
                              }
                            }
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3a76a939600446ed(v50); /*0x10048c37f*/
                          }
                        }
                        v7 = v54[1]; /*0x10048c384*/
                        v9 = (_BYTE *)v54[2]; /*0x10048c38b*/
                        v3 = v54[3]; /*0x10048c392*/
                        v101 = (char *)v54[4]; /*0x10048c3a0*/
                        v102 = (__int64 (__fastcall *)(_QWORD, _QWORD))v54[5]; /*0x10048c3ab*/
                        v103 = v54[6]; /*0x10048c3b6*/
                        v104 = (char *)v54[7]; /*0x10048c3c1*/
                        v105 = (__int64 (__fastcall *)(_QWORD, _QWORD))v54[8]; /*0x10048c3cc*/
                        v106 = v54[9]; /*0x10048c3d7*/
                        v107 = v54[10]; /*0x10048c3e2*/
                        v108 = v54[11]; /*0x10048c3ed*/
                        if ( v69 ) /*0x10048c3fb*/
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v69, 1); /*0x10048c40d*/
                      }
                    }
                    else
                    {
                      codexmate_lib::core::relay::codex_thread_visibility::rollout_history::rewrite::_$u7b$$u7b$closure$u7d$$u7d$::h78d5b1339f6f6a87( /*0x10048c197*/
                        &v93,
                        v44,
                        v45);
                      v10 = (__int64)v93; /*0x10048c19c*/
                      v7 = v94[0]; /*0x10048c1a3*/
                      v9 = (_BYTE *)v94[1]; /*0x10048c1aa*/
                      v3 = v94[2]; /*0x10048c1b1*/
                      v101 = (char *)v94[3]; /*0x10048c1bf*/
                      v102 = (__int64 (__fastcall *)(_QWORD, _QWORD))v94[4]; /*0x10048c1ca*/
                      v103 = v94[5]; /*0x10048c1d5*/
                      v104 = (char *)v94[6]; /*0x10048c1e0*/
                      v105 = (__int64 (__fastcall *)(_QWORD, _QWORD))v94[7]; /*0x10048c1eb*/
                      v106 = v94[8]; /*0x10048c1f6*/
                      v107 = v94[9]; /*0x10048c201*/
                      v108 = v94[10]; /*0x10048c20c*/
                    }
                    goto LABEL_140; /*0x10048c094*/
                  }
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v39, v41); /*0x10048c099*/
                v7 = 61; /*0x10048c09e*/
                v47 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(61, 1); /*0x10048c0ae*/
                if ( !v47 ) /*0x10048c0b6*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 61); /*0x10048c432*/
                v9 = v47; /*0x10048c0bc*/
                qmemcpy(v47, "rollout representation changed before writing; retry required", 61); /*0x10048c12b*/
                v10 = 10; /*0x10048c12e*/
                v3 = 61; /*0x10048c134*/
LABEL_140:
                if ( v56[0] ) /*0x10048c143*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56[1], v56[0], 1); /*0x10048c151*/
                goto LABEL_142; /*0x10048c151*/
              }
              v7 = v28; /*0x10048bc24*/
            }
            else
            {
              v10 = 2; /*0x10048ba11*/
            }
            v22 = v7 >> 8; /*0x10048bc2a*/
            v108 = v94[6]; /*0x10048bc35*/
            v107 = v94[5]; /*0x10048bc40*/
            v106 = v94[4]; /*0x10048bc4b*/
            v105 = (__int64 (__fastcall *)(_QWORD, _QWORD))v94[3]; /*0x10048bc56*/
            v104 = (char *)v94[2]; /*0x10048bc61*/
            v103 = v94[1]; /*0x10048bc6c*/
            v102 = (__int64 (__fastcall *)(_QWORD, _QWORD))v94[0]; /*0x10048bc7e*/
            v101 = v93; /*0x10048bc82*/
            goto LABEL_96; /*0x10048bc86*/
          }
        }
      }
    }
LABEL_92:
    if ( v9 ) /*0x10048b90b*/
    {
      v17 = *(_BYTE **)&__dst[8]; /*0x10048b90d*/
      v18 = v9; /*0x10048b919*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[8], v9, 1); /*0x10048b91c*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v18, v19); /*0x10048b921*/
  v3 = 64; /*0x10048b926*/
  v29 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 1); /*0x10048b935*/
  if ( !v29 ) /*0x10048b93d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 64); /*0x10048c186*/
  v9 = v29; /*0x10048b943*/
  qmemcpy(v29, "rollout changed before private reasoning cleanup; retry required", 64); /*0x10048b9b2*/
  v10 = 10; /*0x10048b9b5*/
  LOBYTE(v7) = 64; /*0x10048b9bb*/
  v22 = 0; /*0x10048b9be*/
LABEL_96:
  if ( v57 ) /*0x10048b9cb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x10048b9d9*/
  if ( v10 != 11 ) /*0x10048b9e2*/
    goto LABEL_52; /*0x10048b9e2*/
  result = (v22 << 8) | (unsigned __int8)v7; /*0x10048b9f0*/
  if ( result ) /*0x10048b9f3*/
  {
    v30 = v55; /*0x10048b9f9*/
    v55[1] = 1; /*0x10048ba00*/
    v30[2] = result; /*0x10048ba08*/
  }
  return result; /*0x10048b5d9*/
}
