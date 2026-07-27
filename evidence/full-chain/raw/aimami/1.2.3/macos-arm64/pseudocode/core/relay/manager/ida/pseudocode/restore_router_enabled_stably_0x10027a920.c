// __ZN13codexmate_lib4core5relay7manager12RelayManager29restore_router_enabled_stably @ 0x10027a920 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::restore_router_enabled_stably::h7cdb26249eaa89f9(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v9; // cl
  char *v10; // r10
  _QWORD *v11; // r12
  __int64 (__fastcall *v12)(); // r8
  char *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r14
  _QWORD *v20; // r15
  __int64 v21; // r9
  void *v22; // rax
  __int64 v23; // r14
  __int64 (__fastcall *v24)(); // rbx
  _QWORD *v25; // r15
  _QWORD *v26; // rbx
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(); // r14
  char *v29; // rbx
  __int64 v30; // r14
  _QWORD *v31; // r15
  __int64 v32; // rsi
  __int64 result; // rax
  _QWORD v34[2]; // [rsp+40h] [rbp-140h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-130h] BYREF
  _QWORD *v36; // [rsp+60h] [rbp-120h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+68h] [rbp-118h]
  char *v38; // [rsp+70h] [rbp-110h]
  __int64 v39; // [rsp+78h] [rbp-108h]
  char *v40; // [rsp+80h] [rbp-100h]
  __int64 v41; // [rsp+88h] [rbp-F8h]
  char v42; // [rsp+90h] [rbp-F0h]
  _QWORD *v43; // [rsp+98h] [rbp-E8h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+A0h] [rbp-E0h] BYREF
  char *v45; // [rsp+A8h] [rbp-D8h]
  __int64 v46; // [rsp+B0h] [rbp-D0h]
  __int64 v47; // [rsp+B8h] [rbp-C8h]
  __int64 v48; // [rsp+C0h] [rbp-C0h]
  __int64 v49; // [rsp+C8h] [rbp-B8h]
  __int64 v50; // [rsp+D0h] [rbp-B0h]
  __int64 v51; // [rsp+D8h] [rbp-A8h] BYREF
  char *v52; // [rsp+E0h] [rbp-A0h]
  __int64 v53; // [rsp+E8h] [rbp-98h]
  __int64 v54; // [rsp+F0h] [rbp-90h] BYREF
  char *v55; // [rsp+F8h] [rbp-88h]
  __int64 v56; // [rsp+100h] [rbp-80h]
  __int64 (__fastcall *v57)(); // [rsp+108h] [rbp-78h]
  char *v58; // [rsp+110h] [rbp-70h]
  __int64 v59; // [rsp+118h] [rbp-68h]
  __int64 v60; // [rsp+120h] [rbp-60h]
  char *v61; // [rsp+128h] [rbp-58h]
  __int64 v62; // [rsp+130h] [rbp-50h]
  __int64 v63; // [rsp+138h] [rbp-48h]
  void *v64; // [rsp+140h] [rbp-40h]
  _QWORD *v65; // [rsp+148h] [rbp-38h]
  _BYTE v66[41]; // [rsp+157h] [rbp-29h] BYREF

  v35[0] = a4; /*0x10027a940*/
  v35[1] = a5; /*0x10027a947*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10027a95c*/
  {
    v43 = v35; /*0x10027a969*/
    v44 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10027a977*/
    v60 = 2; /*0x10027a97e*/
    v61 = "codexmate_lib::core::relay::manager"; /*0x10027a98d*/
    v62 = 35; /*0x10027a991*/
    v64 = &unk_1017BA587; /*0x10027a9a0*/
    v65 = &v43; /*0x10027a9ab*/
    v54 = 0; /*0x10027a9af*/
    v55 = "codexmate_lib::core::relay::manager"; /*0x10027a9ba*/
    v56 = 35; /*0x10027a9c1*/
    v57 = nullptr; /*0x10027a9c9*/
    v58 = "src/core/relay/manager.rs"; /*0x10027a9d8*/
    v59 = 25; /*0x10027a9dc*/
    v63 = 0x89C00000001LL; /*0x10027a9ee*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v66, &v54); /*0x10027a9fd*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h83c13dceed25a0ea( /*0x10027aa1b*/
    &v43,
    *(_QWORD *)(a6 + 8),
    *(_QWORD *)(a6 + 8) + 232LL * *(_QWORD *)(a6 + 16));
  codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h72d6d7e22d69822e(&v54, a6); /*0x10027aa2a*/
  v38 = v45; /*0x10027aa36*/
  v37 = v44; /*0x10027aa4b*/
  v36 = v43; /*0x10027aa52*/
  v9 = *(_BYTE *)(a6 + 293); /*0x10027aa59*/
  v39 = v54; /*0x10027aa6f*/
  v40 = v55; /*0x10027aa76*/
  v41 = v56; /*0x10027aa81*/
  v42 = v9; /*0x10027aa88*/
  if ( v45 && v41 ) /*0x10027aa9f*/
  {
    v43 = (_QWORD *)a2; /*0x10027aaa5*/
    v44 = (__int64 (__fastcall *)())a3; /*0x10027aaac*/
    v45 = (char *)&v36; /*0x10027aaba*/
    codexmate_lib::core::relay::router_transition::run::h47180377c95c0f60( /*0x10027aaf4*/
      (unsigned int)&v54,
      a3,
      0,
      0,
      (unsigned int)"NativeOff compensationRouterOn rollbackswitching router account moderouter auth-mode toggle",
      22,
      (__int64)&v43,
      a2,
      a3,
      a2,
      a6);
    v10 = v55; /*0x10027ab00*/
    v11 = (_QWORD *)v56; /*0x10027ab07*/
    v12 = v57; /*0x10027ab0b*/
    v13 = v58; /*0x10027ab0f*/
    v14 = v59; /*0x10027ab13*/
    v15 = v60; /*0x10027ab17*/
    v16 = (__int64)v61; /*0x10027ab1b*/
    v17 = v62; /*0x10027ab1f*/
    v18 = v63; /*0x10027ab23*/
    v19 = (__int64)v64; /*0x10027ab27*/
    v20 = v65; /*0x10027ab2b*/
    if ( v54 != 11 ) /*0x10027ab33*/
    {
      *a1 = v54; /*0x10027abc8*/
      a1[1] = (__int64)v10; /*0x10027abcb*/
      a1[2] = (__int64)v11; /*0x10027abcf*/
      a1[3] = (__int64)v12; /*0x10027abd3*/
      a1[4] = (__int64)v13; /*0x10027abd7*/
      a1[5] = v14; /*0x10027abdb*/
      a1[6] = v15; /*0x10027abdf*/
      a1[7] = v16; /*0x10027abe3*/
      a1[8] = v17; /*0x10027abe7*/
      a1[9] = v18; /*0x10027abeb*/
      a1[10] = v19; /*0x10027abef*/
      a1[11] = (__int64)v20; /*0x10027abf3*/
      v24 = v37; /*0x10027abf7*/
      v25 = v38; /*0x10027abfe*/
      if ( !v38 ) /*0x10027ac08*/
        goto LABEL_28; /*0x10027ac08*/
      goto LABEL_26; /*0x10027ac08*/
    }
    if ( v55 == (char *)2 ) /*0x10027ab3d*/
    {
      v19 = 8; /*0x10027ab43*/
      v20 = nullptr; /*0x10027ab49*/
      v21 = (__int64)v61; /*0x10027ab4c*/
      v16 = v62; /*0x10027ab4f*/
      v17 = v63; /*0x10027ab52*/
      v18 = 0; /*0x10027ab55*/
    }
    else
    {
      v21 = v60; /*0x10027ac13*/
      v15 = v59; /*0x10027ac16*/
      v14 = (__int64)v58; /*0x10027ac19*/
      v13 = (char *)v57; /*0x10027ac1c*/
      v12 = (__int64 (__fastcall *)())v56; /*0x10027ac1f*/
      v11 = v55; /*0x10027ac22*/
    }
    v43 = v11; /*0x10027ac25*/
    v44 = v12; /*0x10027ac2c*/
    v45 = v13; /*0x10027ac33*/
    v46 = v14; /*0x10027ac3a*/
    v47 = v15; /*0x10027ac41*/
    v48 = v21; /*0x10027ac48*/
    v49 = v16; /*0x10027ac4f*/
    v50 = v17; /*0x10027ac56*/
    if ( v20 ) /*0x10027ac75*/
    {
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x10027ac89*/
      {
        alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x10027aca9*/
          &v54,
          v19,
          v20,
          " | router_transitionstate_db_selectedcodexmate_lib::core::relay::manager",
          3);
        v53 = v56; /*0x10027acb2*/
        v52 = v55; /*0x10027acc7*/
        v51 = v54; /*0x10027acce*/
        v34[0] = &v51; /*0x10027acdc*/
        v34[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027acea*/
        v60 = 2; /*0x10027acf1*/
        v61 = "codexmate_lib::core::relay::manager"; /*0x10027ad00*/
        v62 = 35; /*0x10027ad04*/
        v64 = &unk_1017BA5BE; /*0x10027ad13*/
        v65 = v34; /*0x10027ad1e*/
        v54 = 0; /*0x10027ad22*/
        v55 = "codexmate_lib::core::relay::manager"; /*0x10027ad2d*/
        v56 = 35; /*0x10027ad34*/
        v57 = nullptr; /*0x10027ad3c*/
        v58 = "src/core/relay/manager.rs"; /*0x10027ad4b*/
        v59 = 25; /*0x10027ad4f*/
        v63 = 0x8BD00000001LL; /*0x10027ad61*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v66, &v54); /*0x10027ad70*/
        if ( v51 ) /*0x10027ad7f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x10027ad8d*/
      }
      *a1 = 11; /*0x10027ad92*/
      v26 = (_QWORD *)(v19 + 8); /*0x10027ad99*/
      do /*0x10027ada7*/
      {
        v27 = *(v26 - 1); /*0x10027ada9*/
        if ( v27 ) /*0x10027adb0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v26, v27, 1); /*0x10027adba*/
        v26 += 3; /*0x10027ada0*/
        v20 = (_QWORD *)((char *)v20 - 1); /*0x10027ada4*/
      }
      while ( v20 ); /*0x10027ada7*/
    }
    else
    {
      *a1 = 11; /*0x10027adc1*/
    }
    if ( v18 ) /*0x10027adcb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24 * v18, 8); /*0x10027adde*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnResult$GT$::h6e06eaf0a1fab1d9(&v44); /*0x10027aded*/
    v24 = v37; /*0x10027adf2*/
    v25 = v38; /*0x10027adf9*/
    if ( v38 ) /*0x10027ae03*/
    {
LABEL_26:
      v28 = v24; /*0x10027ae05*/
      do /*0x10027ae22*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v28); /*0x10027ae13*/
        v28 = (__int64 (__fastcall *)())((char *)v28 + 232); /*0x10027ae18*/
        v25 = (_QWORD *)((char *)v25 - 1); /*0x10027ae1f*/
      }
      while ( v25 ); /*0x10027ae22*/
    }
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v54, v55); /*0x10027ab5d*/
    v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(157, 1); /*0x10027ab6c*/
    if ( !v22 ) /*0x10027ab74*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 157); /*0x10027aebe*/
    v23 = (__int64)v22; /*0x10027ab7a*/
    memcpy(v22, &anon_b0ee9adff4519c22b647af231a5a39fa_171, 0x9Du); /*0x10027ab8c*/
    *a1 = 10; /*0x10027ab91*/
    a1[1] = 157; /*0x10027ab98*/
    a1[2] = v23; /*0x10027aba0*/
    a1[3] = 157; /*0x10027aba4*/
    v24 = v37; /*0x10027abac*/
    v25 = v38; /*0x10027abb3*/
    if ( v38 ) /*0x10027abbd*/
      goto LABEL_26; /*0x10027abbd*/
  }
LABEL_28:
  if ( v36 ) /*0x10027ae2e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 232LL * (_QWORD)v36, 8); /*0x10027ae3f*/
  v29 = v40; /*0x10027ae44*/
  v30 = v41; /*0x10027ae4b*/
  if ( v41 ) /*0x10027ae55*/
  {
    v31 = v40 + 8; /*0x10027ae57*/
    do /*0x10027ae67*/
    {
      v32 = *(v31 - 1); /*0x10027ae69*/
      if ( v32 ) /*0x10027ae70*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v31, v32, 1); /*0x10027ae7a*/
      v31 += 3; /*0x10027ae60*/
      --v30; /*0x10027ae64*/
    }
    while ( v30 ); /*0x10027ae67*/
  }
  result = v39; /*0x10027ae81*/
  if ( v39 ) /*0x10027ae8b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 24 * v39, 8); /*0x10027ae9d*/
  return result; /*0x10027aea2*/
}