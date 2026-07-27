// __ZN13codexmate_lib4core5relay23codex_thread_visibility35inspect_router_thread_model_catalog @ 0x100aea410 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_model_catalog::hef17cfa3d974fdef(
        _QWORD *a1,
        _QWORD *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 *v8; // r14
  __int64 *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rsi
  __m128i v17; // xmm0
  __int64 v18; // rbx
  unsigned __int64 v19; // r12
  __int64 v20; // r14
  __m128i v21; // xmm1
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 (__fastcall *v27)(_QWORD, _QWORD); // rdx
  __int64 v28; // rax
  size_t v29; // rdx
  size_t v30; // rbx
  const void *v31; // r12
  unsigned __int64 v32; // rax
  __m128i v33; // xmm1
  __int64 i; // rdx
  unsigned __int64 v35; // rax
  __m128i v37; // xmm2
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  int v41; // eax
  bool v42; // zf
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // r15
  __int64 v50; // rbx
  __int64 v51; // r14
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r13
  __int64 v55; // r14
  __int64 v56; // r12
  __int64 v57; // r15
  unsigned __int64 v58; // r12
  _QWORD *v59; // rbx
  __int64 v60; // rsi
  unsigned __int64 v61; // rbx
  _QWORD *v62; // r14
  __int64 v63; // rsi
  _QWORD v65[14]; // [rsp+8h] [rbp-3F8h] BYREF
  _QWORD v66[15]; // [rsp+78h] [rbp-388h] BYREF
  __m128i v67; // [rsp+F0h] [rbp-310h] BYREF
  __m128i v68; // [rsp+100h] [rbp-300h] BYREF
  _QWORD v69[3]; // [rsp+110h] [rbp-2F0h] BYREF
  _QWORD *v70; // [rsp+128h] [rbp-2D8h]
  __int64 v71; // [rsp+130h] [rbp-2D0h]
  __int64 v72; // [rsp+138h] [rbp-2C8h]
  __int64 v73; // [rsp+140h] [rbp-2C0h]
  __int64 v74; // [rsp+148h] [rbp-2B8h]
  __int64 v75; // [rsp+150h] [rbp-2B0h]
  _OWORD v76[9]; // [rsp+158h] [rbp-2A8h] BYREF
  __int64 v77; // [rsp+1F0h] [rbp-210h] BYREF
  __int64 v78; // [rsp+1F8h] [rbp-208h]
  __int64 v79; // [rsp+200h] [rbp-200h]
  _QWORD v80[12]; // [rsp+208h] [rbp-1F8h] BYREF
  _OWORD v81[5]; // [rsp+268h] [rbp-198h] BYREF
  _OWORD v82[5]; // [rsp+2B8h] [rbp-148h] BYREF
  __int64 *v83; // [rsp+308h] [rbp-F8h]
  __int64 v84; // [rsp+310h] [rbp-F0h]
  _QWORD *v85; // [rsp+318h] [rbp-E8h]
  __int64 *v86; // [rsp+320h] [rbp-E0h]
  _QWORD *v87; // [rsp+328h] [rbp-D8h] BYREF
  __int64 (__fastcall *v88)(); // [rsp+330h] [rbp-D0h]
  _QWORD *v89; // [rsp+338h] [rbp-C8h]
  __int64 (__fastcall *v90)(); // [rsp+340h] [rbp-C0h]
  __int64 *v91; // [rsp+348h] [rbp-B8h] BYREF
  __int64 (__fastcall *v92)(_QWORD, _QWORD); // [rsp+350h] [rbp-B0h]
  _QWORD *v93; // [rsp+358h] [rbp-A8h]
  __int64 (__fastcall *v94)(_QWORD, _QWORD); // [rsp+360h] [rbp-A0h]
  __int64 v95; // [rsp+368h] [rbp-98h]
  __int64 v96; // [rsp+370h] [rbp-90h]
  __int64 v97; // [rsp+378h] [rbp-88h]
  __int64 v98; // [rsp+380h] [rbp-80h]
  __int64 v99; // [rsp+388h] [rbp-78h] BYREF
  _QWORD *v100; // [rsp+390h] [rbp-70h]
  __int64 v101; // [rsp+398h] [rbp-68h]
  __int64 v102; // [rsp+3A0h] [rbp-60h]
  __int64 v103; // [rsp+3A8h] [rbp-58h]
  __int64 v104; // [rsp+3B0h] [rbp-50h]
  __int64 v105; // [rsp+3B8h] [rbp-48h]
  __int64 v106; // [rsp+3C0h] [rbp-40h]
  __int64 v107; // [rsp+3C8h] [rbp-38h]
  __int64 v108; // [rsp+3D0h] [rbp-30h]

  v85 = a1; /*0x100aea427*/
  *(double *)v2.i64 = codexmate_lib::core::relay::codex_thread_visibility::load_router_catalog_model_index::hb44b863e0ca931dd( /*0x100aea44d*/
                        v76,
                        a2[73],
                        a2[74]);
  if ( *(_QWORD *)&v76[0] == 0x8000000000000001LL ) /*0x100aea45d*/
  {
    qmemcpy(v66, (char *)v76 + 8, 0x60u); /*0x100aea479*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66[12], (char *)&v76[6] + 8); /*0x100aea47c*/
    v3 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100aea48b*/
    if ( !v3 ) /*0x100aea493*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100aeb2bc*/
    v4 = (_QWORD *)v3; /*0x100aea499*/
    v80[0] = 0; /*0x100aea49c*/
    v80[1] = 1; /*0x100aea4a7*/
    v80[2] = 0; /*0x100aea4b2*/
    v65[2] = 1610612768; /*0x100aea4bd*/
    v65[0] = v80; /*0x100aea4cf*/
    v65[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100aea4dd*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100aea4f2*/
                            v66,
                            v65) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100aeb2e4*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v82,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v4[2] = v80[2]; /*0x100aea506*/
    v5 = v80[0]; /*0x100aea50a*/
    v4[1] = v80[1]; /*0x100aea518*/
    *v4 = v5; /*0x100aea51c*/
    v6 = v85; /*0x100aea51f*/
    v85[9] = 0; /*0x100aea526*/
    v6[8] = 0; /*0x100aea52e*/
    v6[7] = 0; /*0x100aea536*/
    v6[6] = 0; /*0x100aea53e*/
    *v6 = 1; /*0x100aea546*/
    v6[1] = v4; /*0x100aea54d*/
    v7 = v6; /*0x100aea551*/
    v6[2] = 1; /*0x100aea554*/
    v6[3] = 0; /*0x100aea55c*/
    v6[4] = 8; /*0x100aea564*/
    v6[5] = 0; /*0x100aea56c*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb((char *)v76 + 8); /*0x100aea577*/
    return v7; /*0x100aea57c*/
  }
  qmemcpy(v66, v76, sizeof(v66)); /*0x100aea594*/
  *(_QWORD *)&v81[0] = 0; /*0x100aea597*/
  memset(&v81[3], 0, 32); /*0x100aea5a2*/
  *((_QWORD *)&v81[0] + 1) = 8; /*0x100aea5ce*/
  v81[1] = 0u; /*0x100aea5d9*/
  v81[2] = 8u; /*0x100aea5ef*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v76, a2); /*0x100aea612*/
  v8 = *((__int64 **)&v76[0] + 1); /*0x100aea61e*/
  v69[2] = *((_QWORD *)&v76[0] + 1); /*0x100aea634*/
  v70 = *((_QWORD **)&v76[0] + 1); /*0x100aea63b*/
  v74 = *(_QWORD *)&v76[0]; /*0x100aea642*/
  v71 = *(_QWORD *)&v76[0]; /*0x100aea649*/
  v84 = *((_QWORD *)&v76[0] + 1) + 24LL * *(_QWORD *)&v76[1]; /*0x100aea650*/
  v72 = v84; /*0x100aea657*/
  v86 = *((__int64 **)&v76[0] + 1); /*0x100aea65e*/
  if ( !*(_QWORD *)&v76[1] ) /*0x100aea668*/
    goto LABEL_85; /*0x100aea668*/
  v9 = v86; /*0x100aea66e*/
LABEL_8:
  v83 = v9 + 3; /*0x100aea697*/
  v70 = v9 + 3; /*0x100aea6a2*/
  v10 = *v9; /*0x100aea6a9*/
  if ( *v9 != 0x8000000000000000LL ) /*0x100aea6af*/
  {
    v11 = v9[2]; /*0x100aea6b9*/
    v106 = v9[1]; /*0x100aea6c0*/
    std::sys::fs::metadata::h32fa16d3052ea535(v76, v106, v11); /*0x100aea6c7*/
    v108 = v10; /*0x100aea6d3*/
    if ( LODWORD(v76[0]) == 1 ) /*0x100aea6d7*/
    {
      if ( (BYTE8(v76[0]) & 3) == 1 ) /*0x100aea6ec*/
      {
        v13 = *((_QWORD *)&v76[0] + 1) - 1LL; /*0x100aea6ee*/
        v14 = *(_QWORD *)(*((_QWORD *)&v76[0] + 1) - 1LL); /*0x100aea6f2*/
        v15 = *(_QWORD *)(*((_QWORD *)&v76[0] + 1) + 7LL); /*0x100aea6f6*/
        if ( *(_QWORD *)v15 ) /*0x100aea6fa*/
          (*(void (__fastcall **)(__int64, double))v15)(v14, *(double *)v2.i64); /*0x100aea705*/
        v16 = *(_QWORD *)(v15 + 8); /*0x100aea707*/
        if ( v16 ) /*0x100aea70e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x100aea717*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x100aea729*/
      }
      *(_QWORD *)&v82[0] = 0; /*0x100aea72e*/
      memset(&v82[3], 0, 32); /*0x100aea758*/
      *((_QWORD *)&v82[0] + 1) = 8; /*0x100aea75f*/
      v82[1] = 0u; /*0x100aea772*/
      v82[2] = 8u; /*0x100aea77a*/
      v17 = 0; /*0x100aea790*/
      v18 = 8; /*0x100aea794*/
      v19 = 0; /*0x100aea799*/
      v20 = 0; /*0x100aea79c*/
      v21 = 0; /*0x100aea79f*/
      goto LABEL_59; /*0x100aea7a3*/
    }
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::h07bf0b0a45198e2f( /*0x100aea7ba*/
      (__int64)v76,
      v106,
      v11);
    if ( BYTE8(v76[6]) == 3 ) /*0x100aea7c6*/
    {
      qmemcpy(v80, v76, sizeof(v80)); /*0x100aea7de*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v81, &v76[6]); /*0x100aea7e1*/
      v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100aea7f0*/
      if ( !v22 ) /*0x100aea7f8*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100aeb29a*/
      v18 = v22; /*0x100aea7fe*/
      v99 = v106; /*0x100aea805*/
      v100 = (_QWORD *)v11; /*0x100aea809*/
      v91 = &v99; /*0x100aea811*/
      v92 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100aea81f*/
      v93 = v80; /*0x100aea826*/
      v94 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100aea834*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v87, &unk_1017B9AD3, &v91); /*0x100aea850*/
      *(_QWORD *)(v18 + 16) = v89; /*0x100aea85c*/
      v23 = v87; /*0x100aea860*/
      *(_QWORD *)(v18 + 8) = v88; /*0x100aea86e*/
      *(_QWORD *)v18 = v23; /*0x100aea872*/
      memset(&v82[3], 0, 32); /*0x100aea894*/
      *(_QWORD *)&v82[0] = 1; /*0x100aea89b*/
      *((_QWORD *)&v82[0] + 1) = v18; /*0x100aea8a6*/
      v82[1] = 1u; /*0x100aea8ad*/
      v82[2] = 8u; /*0x100aea8c3*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v80); /*0x100aea8dc*/
LABEL_55:
      v17 = 0; /*0x100aeaec3*/
      v19 = 1; /*0x100aeaec7*/
      v20 = 1; /*0x100aeaecd*/
      v21 = 0; /*0x100aeaed3*/
      goto LABEL_59; /*0x100aeaed7*/
    }
    qmemcpy(v65, v76, sizeof(v65)); /*0x100aea902*/
    codexmate_lib::core::relay::codex_thread_visibility::collect_router_model_targets::hf5ddd6ccb607c54c( /*0x100aea90f*/
      (__int64)v80,
      (__int64)v65);
    if ( LODWORD(v80[0]) != 11 ) /*0x100aea91b*/
    {
      qmemcpy(v76, v80, 0x60u); /*0x100aeadb4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v76[6], v81); /*0x100aeadb7*/
      v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100aeadc6*/
      if ( !v47 ) /*0x100aeadce*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100aeb2ab*/
      v18 = v47; /*0x100aeadd4*/
      v99 = v106; /*0x100aeaddb*/
      v100 = (_QWORD *)v11; /*0x100aeaddf*/
      v91 = &v99; /*0x100aeade7*/
      v92 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100aeadf5*/
      v93 = v76; /*0x100aeadfc*/
      v94 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100aeae0a*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v87, &unk_1017B9AD3, &v91); /*0x100aeae26*/
      *(_QWORD *)(v18 + 16) = v89; /*0x100aeae32*/
      v48 = v87; /*0x100aeae36*/
      *(_QWORD *)(v18 + 8) = v88; /*0x100aeae44*/
      *(_QWORD *)v18 = v48; /*0x100aeae48*/
      memset(&v82[3], 0, 32); /*0x100aeae6a*/
      *(_QWORD *)&v82[0] = 1; /*0x100aeae71*/
      *((_QWORD *)&v82[0] + 1) = v18; /*0x100aeae7c*/
      v82[1] = 1u; /*0x100aeae83*/
      v82[2] = 8u; /*0x100aeae99*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v76); /*0x100aeaeb2*/
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v65); /*0x100aeaebe*/
      goto LABEL_55; /*0x100aeaebe*/
    }
    v24 = (_QWORD *)v80[2]; /*0x100aea928*/
    v76[3] = v80[3]; /*0x100aea936*/
    *(_QWORD *)&v76[0] = 0; /*0x100aea93d*/
    v76[4] = 0u; /*0x100aea957*/
    *((_QWORD *)&v76[0] + 1) = 8; /*0x100aea966*/
    v76[1] = 0u; /*0x100aea979*/
    v76[2] = 8u; /*0x100aea981*/
    v99 = v80[2]; /*0x100aea9a0*/
    v100 = (_QWORD *)v80[2]; /*0x100aea9a4*/
    v101 = v80[1]; /*0x100aea9a8*/
    v107 = v80[2] + 72LL * v80[3]; /*0x100aea9ac*/
    v102 = v107; /*0x100aea9b0*/
    if ( !v80[3] ) /*0x100aea9b7*/
      goto LABEL_58; /*0x100aea9b7*/
    v105 = v66[6]; /*0x100aea9c4*/
    v104 = v66[4]; /*0x100aea9d6*/
    v103 = v66[3]; /*0x100aea9da*/
    v73 = v66[3] - 24LL; /*0x100aea9e9*/
    while ( 1 ) /*0x100aeaa0a*/
    {
      v25 = *v24; /*0x100aeaa0a*/
      v26 = (__int64 *)v24[1]; /*0x100aeaa0e*/
      v98 = v24[8]; /*0x100aeaa16*/
      v97 = v24[7]; /*0x100aeaa1e*/
      v96 = v24[6]; /*0x100aeaa29*/
      v95 = v24[5]; /*0x100aeaa34*/
      v94 = (__int64 (__fastcall *)(_QWORD, _QWORD))v24[4]; /*0x100aeaa3f*/
      v93 = (_QWORD *)v24[3]; /*0x100aeaa4a*/
      v27 = (__int64 (__fastcall *)(_QWORD, _QWORD))v24[2]; /*0x100aeaa51*/
      v24 += 9; /*0x100aeaa55*/
      v92 = v27; /*0x100aeaa59*/
      v91 = v26; /*0x100aeaa60*/
      if ( v25 == 0x8000000000000000LL ) /*0x100aeaa6a*/
      {
LABEL_57:
        v100 = v24; /*0x100aeaedd*/
LABEL_58:
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h120dc19110250805( /*0x100aeaee1*/
          &v99,
          *(double *)v2.i64);
        qmemcpy(v82, v76, sizeof(v82)); /*0x100aeaefd*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v65); /*0x100aeaf0b*/
        v17 = _mm_loadu_si128((const __m128i *)&v82[3]); /*0x100aeaf10*/
        v21 = _mm_loadu_si128((const __m128i *)&v82[4]); /*0x100aeaf18*/
        v18 = *((_QWORD *)&v82[0] + 1); /*0x100aeaf27*/
        v20 = *(_QWORD *)&v82[0]; /*0x100aeaf27*/
        v19 = *(_QWORD *)&v82[1]; /*0x100aeaf2e*/
LABEL_59:
        v81[3] = _mm_add_epi64(_mm_loadu_si128((const __m128i *)&v81[3]), v17); /*0x100aeaf40*/
        v2 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)&v81[4]), v21); /*0x100aeaf5c*/
        v81[4] = v2; /*0x100aeaf60*/
        *(_QWORD *)&v76[0] = v18; /*0x100aeaf78*/
        *(_QWORD *)&v76[1] = v20; /*0x100aeaf7f*/
        *((_QWORD *)&v76[0] + 1) = v18; /*0x100aeaf86*/
        *((_QWORD *)&v76[1] + 1) = v18 + 24 * v19; /*0x100aeaf8d*/
        v49 = *(_QWORD *)&v81[1]; /*0x100aeaf9b*/
        if ( v19 > *(_QWORD *)&v81[0] - *(_QWORD *)&v81[1] ) /*0x100aeafa8*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100aeb1c6*/
            v81,
            *(_QWORD *)&v81[1],
            v19,
            8,
            24,
            v12);
          v49 = *(_QWORD *)&v81[1]; /*0x100aeb1cb*/
        }
        memcpy((void *)(*((_QWORD *)&v81[0] + 1) + 24 * v49), (const void *)v18, 24 * v19); /*0x100aeafc3*/
        *(_QWORD *)&v81[1] = v49 + v19; /*0x100aeafcb*/
        if ( v20 ) /*0x100aeafd5*/
          *(double *)v2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 24 * v20, 8); /*0x100aeafe7*/
        v50 = *(_QWORD *)&v82[2]; /*0x100aeaff3*/
        *(_QWORD *)&v76[0] = *(_QWORD *)&v82[2]; /*0x100aeb009*/
        *((_QWORD *)&v76[0] + 1) = *(_QWORD *)&v82[2]; /*0x100aeb010*/
        v103 = *((_QWORD *)&v82[1] + 1); /*0x100aeb017*/
        *(_QWORD *)&v76[1] = *((_QWORD *)&v82[1] + 1); /*0x100aeb01b*/
        v107 = *(_QWORD *)&v82[2] + 24LL * *((_QWORD *)&v82[2] + 1); /*0x100aeb022*/
        *((_QWORD *)&v76[1] + 1) = v107; /*0x100aeb026*/
        v105 = *(_QWORD *)&v82[2]; /*0x100aeb02d*/
        v51 = v108; /*0x100aeb034*/
        if ( *((_QWORD *)&v82[2] + 1) ) /*0x100aeb049*/
        {
          v50 = v105 + 24; /*0x100aeb053*/
          while ( 1 ) /*0x100aeb09f*/
          {
            v54 = *(_QWORD *)(v50 - 24); /*0x100aeb09f*/
            if ( v54 == 0x8000000000000000LL ) /*0x100aeb0a6*/
              break; /*0x100aeb0a6*/
            v55 = v50 - 24; /*0x100aeb0a8*/
            v56 = *(_QWORD *)(v50 - 24 + 8); /*0x100aeb0ac*/
            v57 = *((_QWORD *)&v81[2] + 1); /*0x100aeb0b0*/
            if ( *((_QWORD *)&v81[2] + 1) >= 3u ) /*0x100aeb0bb*/
            {
              if ( v54 ) /*0x100aeb0e3*/
                *(double *)v2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x100aeb0f0*/
                                      *(_QWORD *)(v50 - 24 + 8),
                                      *(_QWORD *)(v50 - 24),
                                      1);
            }
            else
            {
              v104 = *(_QWORD *)(v55 + 16); /*0x100aeb0c1*/
              if ( *((_QWORD *)&v81[2] + 1) == *((_QWORD *)&v81[1] + 1) ) /*0x100aeb0cc*/
                *(double *)v2.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((char *)&v81[1] + 8); /*0x100aeb0d5*/
              v52 = *(_QWORD *)&v81[2]; /*0x100aeb060*/
              v53 = 3 * v57; /*0x100aeb067*/
              *(_QWORD *)(*(_QWORD *)&v81[2] + 8 * v53) = v54; /*0x100aeb06b*/
              *(_QWORD *)(v52 + 8 * v53 + 8) = v56; /*0x100aeb06f*/
              *(_QWORD *)(v52 + 8 * v53 + 16) = v104; /*0x100aeb078*/
              *((_QWORD *)&v81[2] + 1) = v57 + 1; /*0x100aeb080*/
            }
            v50 += 24; /*0x100aeb087*/
            if ( v55 + 24 == v107 ) /*0x100aeb09d*/
            {
              v50 = v107; /*0x100aeb100*/
              break; /*0x100aeb100*/
            }
          }
          *((_QWORD *)&v76[0] + 1) = v50; /*0x100aeb104*/
          v51 = v108; /*0x100aeb10b*/
        }
        if ( v107 != v50 ) /*0x100aeb130*/
        {
          v58 = (v107 - v50) / 0x18uLL; /*0x100aeb135*/
          v59 = (_QWORD *)(v50 + 8); /*0x100aeb139*/
          do /*0x100aeb147*/
          {
            v60 = *(v59 - 1); /*0x100aeb149*/
            if ( v60 ) /*0x100aeb150*/
              *(double *)v2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v59, v60, 1); /*0x100aeb15a*/
            v59 += 3; /*0x100aeb140*/
            --v58; /*0x100aeb144*/
          }
          while ( v58 ); /*0x100aeb147*/
        }
        if ( v103 ) /*0x100aeb177*/
          *(double *)v2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, 24 * v103, 8); /*0x100aeb18a*/
        if ( v51 ) /*0x100aeb192*/
          *(double *)v2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v51, 1); /*0x100aeb1a4*/
        v9 = v83; /*0x100aea687*/
        if ( v83 == (__int64 *)v84 ) /*0x100aea691*/
          goto LABEL_90; /*0x100aea691*/
        goto LABEL_8; /*0x100aea691*/
      }
      v80[0] = v25; /*0x100aeaa70*/
      v80[8] = v98; /*0x100aeaa82*/
      v80[7] = v97; /*0x100aeaa8d*/
      v80[6] = v96; /*0x100aeaa98*/
      v80[5] = v95; /*0x100aeaaa3*/
      v80[4] = v94; /*0x100aeaaae*/
      v80[3] = v93; /*0x100aeaab9*/
      v80[2] = v92; /*0x100aeaacb*/
      v80[1] = v91; /*0x100aeaacf*/
      if ( v96 == 0x8000000000000000LL /*0x100aeaaf8*/
        || (v28 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v80[7], v80[8]), (v30 = v29) == 0) )
      {
        v2 = _mm_sub_epi64(_mm_loadu_si128((const __m128i *)&v76[4]), (__m128i)-1LL); /*0x100aeac1c*/
        v76[4] = v2; /*0x100aeac20*/
        v30 = 7; /*0x100aeac28*/
        v31 = &unk_10167DF47; /*0x100aeac2d*/
      }
      else
      {
        v31 = (const void *)v28; /*0x100aeaafe*/
        if ( v105 ) /*0x100aeab06*/
        {
          v32 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v66[7], v28, v29); /*0x100aeab19*/
          v33 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v32 >> 57), (__m128i)0LL); /*0x100aeab2d*/
          for ( i = 0; ; i += 16 ) /*0x100aeab32*/
          {
            v35 = v104 & v32; /*0x100aeab34*/
            HIDWORD(_RCX) = HIDWORD(v103); /*0x100aeab38*/
            v37 = _mm_loadu_si128((const __m128i *)(v103 + v35)); /*0x100aeab3c*/
            v2 = _mm_cmpeq_epi8(v37, v33); /*0x100aeab45*/
            _R15D = _mm_movemask_epi8(v2); /*0x100aeab49*/
            if ( _R15D ) /*0x100aeab51*/
              break; /*0x100aeab51*/
LABEL_34:
            v2.i64[0] = -1; /*0x100aeabe0*/
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v37, (__m128i)-1LL)) ) /*0x100aeabe8*/
              goto LABEL_37; /*0x100aeabf8*/
            v32 = v35 + i + 16; /*0x100aeabfa*/
          }
          v67 = v33; /*0x100aeab57*/
          v75 = i; /*0x100aeab5f*/
          v68 = v37; /*0x100aeab66*/
          while ( 1 ) /*0x100aeab6e*/
          {
            __asm { tzcnt ecx, r15d } /*0x100aeab6e*/
            v39 = v35; /*0x100aeab73*/
            v40 = -3LL * (v104 & (v35 + _RCX)); /*0x100aeab80*/
            HIDWORD(_RCX) = HIDWORD(v73); /*0x100aeab84*/
            if ( v30 == *(_QWORD *)(v73 + 8 * v40 + 16) && !memcmp(v31, *(const void **)(v73 + 8 * v40 + 8), v30) ) /*0x100aeaba0*/
              break; /*0x100aeaba0*/
            v41 = _R15D - 1; /*0x100aeabad*/
            LOWORD(v41) = _R15D & (_R15D - 1); /*0x100aeabb1*/
            v42 = (_WORD)v41 == 0; /*0x100aeabb1*/
            _R15D = v41; /*0x100aeabb5*/
            v35 = v39; /*0x100aeabb8*/
            v33 = _mm_load_si128(&v67); /*0x100aeabc2*/
            i = v75; /*0x100aeabca*/
            v37 = _mm_load_si128(&v68); /*0x100aeabd1*/
            if ( v42 ) /*0x100aeabd9*/
              goto LABEL_34; /*0x100aeabd9*/
          }
          ++*((_QWORD *)&v76[3] + 1); /*0x100aead1f*/
          goto LABEL_45; /*0x100aead1f*/
        }
LABEL_37:
        ++*(_QWORD *)&v76[4]; /*0x100aeac36*/
      }
      v69[0] = v31; /*0x100aeac3d*/
      v69[1] = v30; /*0x100aeac44*/
      v87 = v80; /*0x100aeac4b*/
      v88 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aeac59*/
      v89 = v69; /*0x100aeac67*/
      v90 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aeac75*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v77, &unk_1017CBD00, &v87); /*0x100aeac91*/
      v43 = *((_QWORD *)&v76[2] + 1); /*0x100aeac96*/
      if ( *((_QWORD *)&v76[2] + 1) >= 3u ) /*0x100aeaca1*/
      {
        if ( v77 ) /*0x100aead0a*/
          *(double *)v2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x100aead18*/
      }
      else
      {
        if ( *((_QWORD *)&v76[2] + 1) == *((_QWORD *)&v76[1] + 1) ) /*0x100aeacaa*/
          *(double *)v2.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((char *)&v76[1] + 8); /*0x100aeacc1*/
        v44 = *(_QWORD *)&v76[2]; /*0x100aeacc6*/
        v45 = 3 * v43; /*0x100aeaccd*/
        *(_QWORD *)(*(_QWORD *)&v76[2] + 8 * v45 + 16) = v79; /*0x100aeacd8*/
        v46 = v77; /*0x100aeacdd*/
        *(_QWORD *)(v44 + 8 * v45 + 8) = v78; /*0x100aeaceb*/
        *(_QWORD *)(v44 + 8 * v45) = v46; /*0x100aeacf0*/
        *((_QWORD *)&v76[2] + 1) = v43 + 1; /*0x100aeacf7*/
      }
LABEL_45:
      if ( v80[0] ) /*0x100aead41*/
        *(double *)v2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80[1], v80[0], 1); /*0x100aead4f*/
      if ( v80[3] != 0x8000000000000000LL && v80[3] ) /*0x100aead63*/
        *(double *)v2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80[4], v80[3], 1); /*0x100aead71*/
      if ( v80[6] != 0x8000000000000000LL && v80[6] ) /*0x100aead89*/
        *(double *)v2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80[7], v80[6], 1); /*0x100aead9b*/
      if ( v24 == (_QWORD *)v107 ) /*0x100aeaa04*/
      {
        v24 = (_QWORD *)v107; /*0x100aeaed9*/
        goto LABEL_57; /*0x100aeaed9*/
      }
    }
  }
  v8 = v83; /*0x100aeb1d7*/
LABEL_85:
  if ( (__int64 *)v84 != v8 ) /*0x100aeb1fb*/
  {
    v61 = (v84 - (__int64)v8) / 0x18uLL; /*0x100aeb200*/
    v62 = v8 + 1; /*0x100aeb204*/
    do /*0x100aeb217*/
    {
      v63 = *(v62 - 1); /*0x100aeb219*/
      if ( v63 ) /*0x100aeb220*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v62, v63, 1); /*0x100aeb22a*/
      v62 += 3; /*0x100aeb210*/
      --v61; /*0x100aeb214*/
    }
    while ( v61 ); /*0x100aeb217*/
  }
LABEL_90:
  if ( v74 ) /*0x100aeb23b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, 24 * v74, 8); /*0x100aeb251*/
  v7 = v85; /*0x100aeb262*/
  qmemcpy(v85, v81, 0x50u); /*0x100aeb26c*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..RouterCatalogModelIndex$GT$::h819ad9381fef45a6(v66); /*0x100aeb276*/
  return v7; /*0x100aeb27e*/
}