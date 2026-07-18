// mac 1.2.2 NEW codexmate_lib4core12debug_bundle21thread_catalog_h 0x100a1a090 d=1
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_model_catalog::h201a40a7d0ef8328(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rax
  __int64 v9; // r14
  size_t v10; // r12
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // r14
  __m128i v16; // xmm1
  __int64 v17; // rax
  size_t v18; // rax
  __int64 *v19; // r13
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rdx
  unsigned __int8 *v23; // rax
  size_t v24; // rdx
  size_t v25; // rbx
  unsigned __int8 *v26; // r12
  unsigned __int64 v27; // rax
  __m128i v28; // xmm1
  __int64 i; // rdx
  unsigned __int64 v30; // rax
  __m128i v32; // xmm2
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  int v36; // eax
  bool v37; // zf
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rcx
  size_t v41; // rdx
  __int64 v42; // rax
  size_t v43; // rax
  __int64 v44; // r15
  __int64 *v45; // rbx
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r13
  __int64 *v50; // r14
  __int64 v51; // r12
  __int64 v52; // r15
  unsigned __int128 v53; // rax
  unsigned __int64 v54; // r12
  __int64 *v55; // rbx
  unsigned __int64 v56; // rbx
  _QWORD *v57; // r14
  __int64 v59[14]; // [rsp+8h] [rbp-3F8h] BYREF
  _QWORD v60[15]; // [rsp+78h] [rbp-388h] BYREF
  __m128i v61; // [rsp+F0h] [rbp-310h] BYREF
  __m128i v62; // [rsp+100h] [rbp-300h] BYREF
  _QWORD v63[3]; // [rsp+110h] [rbp-2F0h] BYREF
  _QWORD *v64; // [rsp+128h] [rbp-2D8h]
  __int64 v65; // [rsp+130h] [rbp-2D0h]
  __int64 v66; // [rsp+138h] [rbp-2C8h]
  __int64 v67; // [rsp+140h] [rbp-2C0h]
  __int64 v68; // [rsp+148h] [rbp-2B8h]
  __int64 v69; // [rsp+150h] [rbp-2B0h]
  _OWORD v70[9]; // [rsp+158h] [rbp-2A8h] BYREF
  size_t v71[3]; // [rsp+1F0h] [rbp-210h] BYREF
  __int64 *v72[12]; // [rsp+208h] [rbp-1F8h] BYREF
  _OWORD v73[5]; // [rsp+268h] [rbp-198h] BYREF
  _OWORD v74[5]; // [rsp+2B8h] [rbp-148h] BYREF
  __int64 *v75; // [rsp+308h] [rbp-F8h]
  __int64 v76; // [rsp+310h] [rbp-F0h]
  _QWORD *v77; // [rsp+318h] [rbp-E8h]
  __int64 *v78; // [rsp+320h] [rbp-E0h]
  __int64 **v79; // [rsp+328h] [rbp-D8h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+330h] [rbp-D0h]
  _QWORD *v81; // [rsp+338h] [rbp-C8h]
  __int64 (__fastcall *v82)(); // [rsp+340h] [rbp-C0h]
  __int64 *v83; // [rsp+348h] [rbp-B8h] BYREF
  __int64 *v84; // [rsp+350h] [rbp-B0h]
  __int64 *v85; // [rsp+358h] [rbp-A8h]
  __int64 *v86; // [rsp+360h] [rbp-A0h]
  __int64 *v87; // [rsp+368h] [rbp-98h]
  __int64 *v88; // [rsp+370h] [rbp-90h]
  __int64 *v89; // [rsp+378h] [rbp-88h]
  __int64 *v90; // [rsp+380h] [rbp-80h]
  __int64 *v91; // [rsp+388h] [rbp-78h] BYREF
  __int64 *v92; // [rsp+390h] [rbp-70h]
  __int64 *v93; // [rsp+398h] [rbp-68h]
  __int64 *v94; // [rsp+3A0h] [rbp-60h]
  __int64 v95; // [rsp+3A8h] [rbp-58h]
  __int64 v96; // [rsp+3B0h] [rbp-50h]
  __int64 v97; // [rsp+3B8h] [rbp-48h]
  void *v98; // [rsp+3C0h] [rbp-40h]
  __int64 *v99; // [rsp+3C8h] [rbp-38h]
  __int64 v100; // [rsp+3D0h] [rbp-30h]

  v77 = a1; /*0x100a1a0a7*/
  codexmate_lib::core::relay::codex_thread_visibility::load_router_catalog_model_index::h1313eb627a1737da( /*0x100a1a0cd*/
    v70,
    a2[73],
    a2[74]);
  if ( *(_QWORD *)&v70[0] == 0x8000000000000001LL ) /*0x100a1a0dd*/
  {
    qmemcpy(v60, (char *)v70 + 8, 0x60u); /*0x100a1a0f9*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a1a0fc*/
    v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x100a1a10b*/
    if ( !v2 ) /*0x100a1a113*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100a1aefc*/
    v3 = v2; /*0x100a1a119*/
    v72[0] = nullptr; /*0x100a1a11c*/
    v72[1] = (__int64 *)1; /*0x100a1a127*/
    v72[2] = nullptr; /*0x100a1a132*/
    v59[2] = 1610612768; /*0x100a1a13d*/
    v59[0] = (__int64)v72; /*0x100a1a14f*/
    v59[1] = (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1225; /*0x100a1a15d*/
    if ( _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1(v60, v59) ) /*0x100a1a172*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a1af24*/
        (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1226,
        55,
        (__int64)v74,
        (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1239,
        (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1228);
    *(__int64 **)(v3 + 16) = v72[2]; /*0x100a1a186*/
    v4 = v72[0]; /*0x100a1a18a*/
    *(__int64 **)(v3 + 8) = v72[1]; /*0x100a1a198*/
    *(_QWORD *)v3 = v4; /*0x100a1a19c*/
    v5 = v77; /*0x100a1a19f*/
    v77[9] = 0; /*0x100a1a1a6*/
    v5[8] = 0; /*0x100a1a1ae*/
    v5[7] = 0; /*0x100a1a1b6*/
    v5[6] = 0; /*0x100a1a1be*/
    *v5 = 1; /*0x100a1a1c6*/
    v5[1] = v3; /*0x100a1a1cd*/
    v6 = v5; /*0x100a1a1d1*/
    v5[2] = 1; /*0x100a1a1d4*/
    v5[3] = 0; /*0x100a1a1dc*/
    v5[4] = 8; /*0x100a1a1e4*/
    v5[5] = 0; /*0x100a1a1ec*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc((__int64 **)v70 + 1); /*0x100a1a1f7*/
    return v6; /*0x100a1a1fc*/
  }
  qmemcpy(v60, v70, sizeof(v60)); /*0x100a1a214*/
  *(_QWORD *)&v73[0] = 0; /*0x100a1a217*/
  memset(&v73[3], 0, 32); /*0x100a1a222*/
  *((_QWORD *)&v73[0] + 1) = 8; /*0x100a1a24e*/
  v73[1] = 0u; /*0x100a1a259*/
  v73[2] = 8u; /*0x100a1a26f*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h3e0dde50a913824a(v70, a2); /*0x100a1a292*/
  v7 = *((__int64 **)&v70[0] + 1); /*0x100a1a29e*/
  v63[2] = *((_QWORD *)&v70[0] + 1); /*0x100a1a2b4*/
  v64 = *((_QWORD **)&v70[0] + 1); /*0x100a1a2bb*/
  v68 = *(_QWORD *)&v70[0]; /*0x100a1a2c2*/
  v65 = *(_QWORD *)&v70[0]; /*0x100a1a2c9*/
  v76 = *((_QWORD *)&v70[0] + 1) + 24LL * *(_QWORD *)&v70[1]; /*0x100a1a2d0*/
  v66 = v76; /*0x100a1a2d7*/
  v78 = *((__int64 **)&v70[0] + 1); /*0x100a1a2de*/
  if ( !*(_QWORD *)&v70[1] ) /*0x100a1a2e8*/
    goto LABEL_79; /*0x100a1a2e8*/
  v8 = v78; /*0x100a1a2ee*/
LABEL_8:
  v75 = v8 + 3; /*0x100a1a317*/
  v64 = v8 + 3; /*0x100a1a322*/
  v9 = *v8; /*0x100a1a329*/
  if ( *v8 != 0x8000000000000000LL ) /*0x100a1a32f*/
  {
    v10 = v8[2]; /*0x100a1a339*/
    v98 = (void *)v8[1]; /*0x100a1a340*/
    std::sys::fs::metadata::h32fa16d3052ea535((__int64 *)v70, v98, v10); /*0x100a1a347*/
    v11 = *(_QWORD *)&v70[0]; /*0x100a1a34c*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x100a1a35d*/
      *(__int64 *)&v70[0],
      *((__int64 *)&v70[0] + 1));
    v100 = v9; /*0x100a1a365*/
    if ( v11 ) /*0x100a1a369*/
    {
      *(_QWORD *)&v74[0] = 0; /*0x100a1a36f*/
      memset(&v74[3], 0, 32); /*0x100a1a399*/
      *((_QWORD *)&v74[0] + 1) = 8; /*0x100a1a3a0*/
      v74[1] = 0u; /*0x100a1a3b3*/
      v74[2] = 8u; /*0x100a1a3bb*/
      v12 = 0; /*0x100a1a3d1*/
      v13 = 8; /*0x100a1a3d5*/
      v14 = 0; /*0x100a1a3da*/
      v15 = 0; /*0x100a1a3dd*/
      v16 = 0; /*0x100a1a3e0*/
      goto LABEL_53; /*0x100a1a3e4*/
    }
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::h5393c5872235f96a(v70, v98, v10); /*0x100a1a3fa*/
    if ( BYTE8(v70[6]) == 3 ) /*0x100a1a406*/
    {
      qmemcpy(v72, v70, sizeof(v72)); /*0x100a1a41e*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a1a421*/
      v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x100a1a430*/
      if ( !v17 ) /*0x100a1a438*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100a1aeda*/
      v13 = v17; /*0x100a1a43e*/
      v91 = (__int64 *)v98; /*0x100a1a445*/
      v92 = (__int64 *)v10; /*0x100a1a449*/
      v83 = (__int64 *)&v91; /*0x100a1a451*/
      v84 = (__int64 *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a1a45f*/
      v85 = (__int64 *)v72; /*0x100a1a466*/
      v86 = (__int64 *)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1; /*0x100a1a474*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v79, byte_1016FD14A, (unsigned __int64)&v83); /*0x100a1a490*/
      *(_QWORD *)(v13 + 16) = v81; /*0x100a1a49c*/
      v18 = (size_t)v79; /*0x100a1a4a0*/
      *(_QWORD *)(v13 + 8) = v80; /*0x100a1a4ae*/
      *(_QWORD *)v13 = v18; /*0x100a1a4b2*/
      memset(&v74[3], 0, 32); /*0x100a1a4d4*/
      *(_QWORD *)&v74[0] = 1; /*0x100a1a4db*/
      *((_QWORD *)&v74[0] + 1) = v13; /*0x100a1a4e6*/
      v74[1] = 1u; /*0x100a1a4ed*/
      v74[2] = 8u; /*0x100a1a503*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(v72); /*0x100a1a51c*/
LABEL_49:
      v12 = 0; /*0x100a1ab03*/
      v14 = 1; /*0x100a1ab07*/
      v15 = 1; /*0x100a1ab0d*/
      v16 = 0; /*0x100a1ab13*/
      goto LABEL_53; /*0x100a1ab17*/
    }
    qmemcpy(v59, v70, sizeof(v59)); /*0x100a1a542*/
    codexmate_lib::core::relay::codex_thread_visibility::collect_router_model_targets::hf99a1b24b4b16b33(v72, v59); /*0x100a1a54f*/
    if ( LODWORD(v72[0]) != 10 ) /*0x100a1a55b*/
    {
      qmemcpy(v70, v72, 0x60u); /*0x100a1a9f4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a1a9f7*/
      v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x100a1aa06*/
      if ( !v42 ) /*0x100a1aa0e*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100a1aeeb*/
      v13 = v42; /*0x100a1aa14*/
      v91 = (__int64 *)v98; /*0x100a1aa1b*/
      v92 = (__int64 *)v10; /*0x100a1aa1f*/
      v83 = (__int64 *)&v91; /*0x100a1aa27*/
      v84 = (__int64 *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a1aa35*/
      v85 = (__int64 *)v70; /*0x100a1aa3c*/
      v86 = (__int64 *)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1; /*0x100a1aa4a*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v79, byte_1016FD14A, (unsigned __int64)&v83); /*0x100a1aa66*/
      *(_QWORD *)(v13 + 16) = v81; /*0x100a1aa72*/
      v43 = (size_t)v79; /*0x100a1aa76*/
      *(_QWORD *)(v13 + 8) = v80; /*0x100a1aa84*/
      *(_QWORD *)v13 = v43; /*0x100a1aa88*/
      memset(&v74[3], 0, 32); /*0x100a1aaaa*/
      *(_QWORD *)&v74[0] = 1; /*0x100a1aab1*/
      *((_QWORD *)&v74[0] + 1) = v13; /*0x100a1aabc*/
      v74[1] = 1u; /*0x100a1aac3*/
      v74[2] = 8u; /*0x100a1aad9*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc((__int64 **)v70); /*0x100a1aaf2*/
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251((__int64)v59); /*0x100a1aafe*/
      goto LABEL_49; /*0x100a1aafe*/
    }
    v19 = v72[2]; /*0x100a1a568*/
    v70[3] = (unsigned __int64)v72[3]; /*0x100a1a576*/
    *(_QWORD *)&v70[0] = 0; /*0x100a1a57d*/
    v70[4] = 0u; /*0x100a1a597*/
    *((_QWORD *)&v70[0] + 1) = 8; /*0x100a1a5a6*/
    v70[1] = 0u; /*0x100a1a5b9*/
    v70[2] = 8u; /*0x100a1a5c1*/
    v91 = v72[2]; /*0x100a1a5e0*/
    v92 = v72[2]; /*0x100a1a5e4*/
    v93 = v72[1]; /*0x100a1a5e8*/
    v99 = &v72[2][9 * (__int64)v72[3]]; /*0x100a1a5ec*/
    v94 = v99; /*0x100a1a5f0*/
    if ( !v72[3] ) /*0x100a1a5fe*/
      goto LABEL_52; /*0x100a1a5fe*/
    v97 = v60[6]; /*0x100a1a60b*/
    v96 = v60[4]; /*0x100a1a61d*/
    v95 = v60[3]; /*0x100a1a621*/
    v67 = v60[3] - 24LL; /*0x100a1a629*/
    while ( 1 ) /*0x100a1a64a*/
    {
      v20 = (__int64 *)*v19; /*0x100a1a64a*/
      v21 = (__int64 *)v19[1]; /*0x100a1a64e*/
      v90 = (__int64 *)v19[8]; /*0x100a1a656*/
      v89 = (__int64 *)v19[7]; /*0x100a1a65e*/
      v88 = (__int64 *)v19[6]; /*0x100a1a669*/
      v87 = (__int64 *)v19[5]; /*0x100a1a674*/
      v86 = (__int64 *)v19[4]; /*0x100a1a67f*/
      v85 = (__int64 *)v19[3]; /*0x100a1a68a*/
      v22 = (__int64 *)v19[2]; /*0x100a1a691*/
      v19 += 9; /*0x100a1a695*/
      v84 = v22; /*0x100a1a699*/
      v83 = v21; /*0x100a1a6a0*/
      if ( v20 == (__int64 *)0x8000000000000000LL ) /*0x100a1a6aa*/
      {
LABEL_51:
        v92 = v19; /*0x100a1ab1d*/
LABEL_52:
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac53fd26512e436b(&v91); /*0x100a1ab21*/
        qmemcpy(v74, v70, sizeof(v74)); /*0x100a1ab3d*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251((__int64)v59); /*0x100a1ab4b*/
        v12 = _mm_loadu_si128((const __m128i *)&v74[3]); /*0x100a1ab50*/
        v16 = _mm_loadu_si128((const __m128i *)&v74[4]); /*0x100a1ab58*/
        v13 = *((_QWORD *)&v74[0] + 1); /*0x100a1ab67*/
        v15 = *(_QWORD *)&v74[0]; /*0x100a1ab67*/
        v14 = *(_QWORD *)&v74[1]; /*0x100a1ab6e*/
LABEL_53:
        v73[3] = _mm_add_epi64(_mm_loadu_si128((const __m128i *)&v73[3]), v12); /*0x100a1ab80*/
        v73[4] = _mm_add_epi64(_mm_loadu_si128((const __m128i *)&v73[4]), v16); /*0x100a1aba0*/
        *(_QWORD *)&v70[0] = v13; /*0x100a1abb8*/
        *(_QWORD *)&v70[1] = v15; /*0x100a1abbf*/
        *((_QWORD *)&v70[0] + 1) = v13; /*0x100a1abc6*/
        *((_QWORD *)&v70[1] + 1) = v13 + 24 * v14; /*0x100a1abcd*/
        v44 = *(_QWORD *)&v73[1]; /*0x100a1abdb*/
        if ( v14 > *(_QWORD *)&v73[0] - *(_QWORD *)&v73[1] ) /*0x100a1abe8*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e( /*0x100a1ae06*/
            (unsigned __int64 *)v73,
            *(__int64 *)&v73[1],
            v14,
            8,
            0x18u);
          v44 = *(_QWORD *)&v73[1]; /*0x100a1ae0b*/
        }
        memcpy((void *)(*((_QWORD *)&v73[0] + 1) + 24 * v44), (const void *)v13, 24 * v14); /*0x100a1ac03*/
        *(_QWORD *)&v73[1] = v44 + v14; /*0x100a1ac0b*/
        if ( v15 ) /*0x100a1ac15*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1ac27*/
        v45 = *(__int64 **)&v74[2]; /*0x100a1ac33*/
        *(_QWORD *)&v70[0] = *(_QWORD *)&v74[2]; /*0x100a1ac49*/
        *((_QWORD *)&v70[0] + 1) = *(_QWORD *)&v74[2]; /*0x100a1ac50*/
        v95 = *((_QWORD *)&v74[1] + 1); /*0x100a1ac57*/
        *(_QWORD *)&v70[1] = *((_QWORD *)&v74[1] + 1); /*0x100a1ac5b*/
        v99 = (__int64 *)(*(_QWORD *)&v74[2] + 24LL * *((_QWORD *)&v74[2] + 1)); /*0x100a1ac62*/
        *((_QWORD *)&v70[1] + 1) = v99; /*0x100a1ac66*/
        v97 = *(_QWORD *)&v74[2]; /*0x100a1ac6d*/
        v46 = v100; /*0x100a1ac74*/
        if ( *((_QWORD *)&v74[2] + 1) ) /*0x100a1ac89*/
        {
          v45 = (__int64 *)(v97 + 24); /*0x100a1ac93*/
          while ( 1 ) /*0x100a1acdf*/
          {
            v49 = *(v45 - 3); /*0x100a1acdf*/
            if ( v49 == 0x8000000000000000LL ) /*0x100a1ace6*/
              break; /*0x100a1ace6*/
            v50 = v45 - 3; /*0x100a1ace8*/
            v51 = *(v45 - 2); /*0x100a1acec*/
            v52 = *((_QWORD *)&v73[2] + 1); /*0x100a1acf0*/
            if ( *((_QWORD *)&v73[2] + 1) >= 3u ) /*0x100a1acfb*/
            {
              if ( v49 ) /*0x100a1ad23*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1ad30*/
            }
            else
            {
              v96 = v50[2]; /*0x100a1ad01*/
              if ( *((_QWORD *)&v73[2] + 1) == *((_QWORD *)&v73[1] + 1) ) /*0x100a1ad0c*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((__int64 *)&v73[1] + 1); /*0x100a1ad15*/
              v47 = *(_QWORD *)&v73[2]; /*0x100a1aca0*/
              v48 = 3 * v52; /*0x100a1aca7*/
              *(_QWORD *)(*(_QWORD *)&v73[2] + 8 * v48) = v49; /*0x100a1acab*/
              *(_QWORD *)(v47 + 8 * v48 + 8) = v51; /*0x100a1acaf*/
              *(_QWORD *)(v47 + 8 * v48 + 16) = v96; /*0x100a1acb8*/
              *((_QWORD *)&v73[2] + 1) = v52 + 1; /*0x100a1acc0*/
            }
            v45 += 3; /*0x100a1acc7*/
            if ( v50 + 3 == v99 ) /*0x100a1acdd*/
            {
              v45 = v99; /*0x100a1ad40*/
              break; /*0x100a1ad40*/
            }
          }
          *((_QWORD *)&v70[0] + 1) = v45; /*0x100a1ad44*/
          v46 = v100; /*0x100a1ad4b*/
        }
        v53 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)((char *)v99 - (char *)v45); /*0x100a1ad6a*/
        if ( v99 != v45 ) /*0x100a1ad70*/
        {
          v54 = ((char *)v99 - (char *)v45) / 0x18uLL; /*0x100a1ad75*/
          v55 = v45 + 1; /*0x100a1ad79*/
          do /*0x100a1ad87*/
          {
            if ( *(v55 - 1) ) /*0x100a1ad89*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1ad9a*/
            v55 += 3; /*0x100a1ad80*/
            --v54; /*0x100a1ad84*/
          }
          while ( v54 ); /*0x100a1ad87*/
        }
        if ( v95 ) /*0x100a1adb7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1adca*/
        if ( v46 ) /*0x100a1add2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1ade4*/
        v8 = v75; /*0x100a1a307*/
        if ( v75 == (__int64 *)v76 ) /*0x100a1a311*/
          goto LABEL_84; /*0x100a1a311*/
        goto LABEL_8; /*0x100a1a311*/
      }
      v72[0] = v20; /*0x100a1a6b0*/
      v72[8] = v90; /*0x100a1a6c2*/
      v72[7] = v89; /*0x100a1a6cd*/
      v72[6] = v88; /*0x100a1a6d8*/
      v72[5] = v87; /*0x100a1a6e3*/
      v72[4] = v86; /*0x100a1a6ee*/
      v72[3] = v85; /*0x100a1a6f9*/
      v72[2] = v84; /*0x100a1a70b*/
      v72[1] = v83; /*0x100a1a70f*/
      if ( v88 == (__int64 *)0x8000000000000000LL /*0x100a1a738*/
        || (v23 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(
                    (unsigned __int8 *)v72[7],
                    (__int64)v72[8]),
            (v25 = v24) == 0) )
      {
        v70[4] = _mm_sub_epi64(_mm_loadu_si128((const __m128i *)&v70[4]), (__m128i)-1LL); /*0x100a1a860*/
        v25 = 7; /*0x100a1a868*/
        v26 = (unsigned __int8 *)&unk_1015A2B22; /*0x100a1a86d*/
      }
      else
      {
        v26 = v23; /*0x100a1a73e*/
        if ( v97 ) /*0x100a1a746*/
        {
          v27 = core::hash::BuildHasher::hash_one::h6159beed3a7466cf(&v60[7], v23, v24); /*0x100a1a759*/
          v28 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v27 >> 57), (__m128i)0LL); /*0x100a1a76d*/
          for ( i = 0; ; i += 16 ) /*0x100a1a772*/
          {
            v30 = v96 & v27; /*0x100a1a774*/
            HIDWORD(_RCX) = HIDWORD(v95); /*0x100a1a778*/
            v32 = _mm_loadu_si128((const __m128i *)(v95 + v30)); /*0x100a1a77c*/
            _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v32, v28)); /*0x100a1a789*/
            if ( _R15D ) /*0x100a1a791*/
              break; /*0x100a1a791*/
LABEL_28:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v32, (__m128i)-1LL)) ) /*0x100a1a828*/
              goto LABEL_31; /*0x100a1a838*/
            v27 = v30 + i + 16; /*0x100a1a83a*/
          }
          v61 = v28; /*0x100a1a797*/
          v69 = i; /*0x100a1a79f*/
          v62 = v32; /*0x100a1a7a6*/
          while ( 1 ) /*0x100a1a7ae*/
          {
            __asm { tzcnt ecx, r15d } /*0x100a1a7ae*/
            v34 = v30; /*0x100a1a7b3*/
            v35 = -3LL * (v96 & (v30 + _RCX)); /*0x100a1a7c0*/
            HIDWORD(_RCX) = HIDWORD(v67); /*0x100a1a7c4*/
            if ( v25 == *(_QWORD *)(v67 + 8 * v35 + 16) && !memcmp(v26, *(const void **)(v67 + 8 * v35 + 8), v25) ) /*0x100a1a7e0*/
              break; /*0x100a1a7e0*/
            v36 = _R15D - 1; /*0x100a1a7ed*/
            LOWORD(v36) = _R15D & (_R15D - 1); /*0x100a1a7f1*/
            v37 = (_WORD)v36 == 0; /*0x100a1a7f1*/
            _R15D = v36; /*0x100a1a7f5*/
            v30 = v34; /*0x100a1a7f8*/
            v28 = _mm_load_si128(&v61); /*0x100a1a802*/
            i = v69; /*0x100a1a80a*/
            v32 = _mm_load_si128(&v62); /*0x100a1a811*/
            if ( v37 ) /*0x100a1a819*/
              goto LABEL_28; /*0x100a1a819*/
          }
          ++*((_QWORD *)&v70[3] + 1); /*0x100a1a95f*/
          goto LABEL_39; /*0x100a1a95f*/
        }
LABEL_31:
        ++*(_QWORD *)&v70[4]; /*0x100a1a876*/
      }
      v63[0] = v26; /*0x100a1a87d*/
      v63[1] = v25; /*0x100a1a884*/
      v79 = v72; /*0x100a1a88b*/
      v80 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a1a899*/
      v81 = v63; /*0x100a1a8a7*/
      v82 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x100a1a8b5*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v71, byte_1016FE6EF, (unsigned __int64)&v79); /*0x100a1a8d1*/
      v38 = *((_QWORD *)&v70[2] + 1); /*0x100a1a8d6*/
      if ( *((_QWORD *)&v70[2] + 1) >= 3u ) /*0x100a1a8e1*/
      {
        if ( v71[0] ) /*0x100a1a94a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1a958*/
      }
      else
      {
        if ( *((_QWORD *)&v70[2] + 1) == *((_QWORD *)&v70[1] + 1) ) /*0x100a1a8ea*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((__int64 *)&v70[1] + 1); /*0x100a1a901*/
        v39 = *(_QWORD *)&v70[2]; /*0x100a1a906*/
        v40 = 3 * v38; /*0x100a1a90d*/
        *(_QWORD *)(*(_QWORD *)&v70[2] + 8 * v40 + 16) = v71[2]; /*0x100a1a918*/
        v41 = v71[0]; /*0x100a1a91d*/
        *(_QWORD *)(v39 + 8 * v40 + 8) = v71[1]; /*0x100a1a92b*/
        *(_QWORD *)(v39 + 8 * v40) = v41; /*0x100a1a930*/
        *((_QWORD *)&v70[2] + 1) = v38 + 1; /*0x100a1a937*/
      }
LABEL_39:
      if ( v72[0] ) /*0x100a1a981*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1a98f*/
      if ( v72[3] != (__int64 *)0x8000000000000000LL && v72[3] ) /*0x100a1a9a3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1a9b1*/
      if ( v72[6] != (__int64 *)0x8000000000000000LL && v72[6] ) /*0x100a1a9c9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1a9db*/
      if ( v19 == v99 ) /*0x100a1a644*/
      {
        v19 = v99; /*0x100a1ab19*/
        goto LABEL_51; /*0x100a1ab19*/
      }
    }
  }
  v7 = v75; /*0x100a1ae17*/
LABEL_79:
  v53 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v76 - (_QWORD)v7); /*0x100a1ae1e*/
  if ( (__int64 *)v76 != v7 ) /*0x100a1ae3b*/
  {
    v56 = (v76 - (__int64)v7) / 0x18uLL; /*0x100a1ae40*/
    v57 = v7 + 1; /*0x100a1ae44*/
    do /*0x100a1ae57*/
    {
      if ( *(v57 - 1) ) /*0x100a1ae59*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1ae6a*/
      v57 += 3; /*0x100a1ae50*/
      --v56; /*0x100a1ae54*/
    }
    while ( v56 ); /*0x100a1ae57*/
  }
LABEL_84:
  if ( v68 ) /*0x100a1ae7b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1ae91*/
  v6 = v77; /*0x100a1aea2*/
  qmemcpy(v77, v73, 0x50u); /*0x100a1aeac*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..RouterCatalogModelIndex$GT$::h1cbd66e45c897166( /*0x100a1aeb6*/
    v60,
    v74,
    *((_QWORD *)&v53 + 1));
  return v6; /*0x100a1aebe*/
}