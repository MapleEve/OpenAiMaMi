// __ZN13codexmate_lib4core5relay7manager12RelayManager30rollback_router_enabled_stably @ 0x10027aff0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled_stably::hfde561a241c90274(
        _QWORD *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r10
  _QWORD *v14; // r13
  __int64 (__fastcall *v15)(); // r8
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 result; // rax
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // r9
  __int64 v25; // rbx
  _QWORD *v26; // r11
  _QWORD *v27; // rbx
  __int64 v28; // rsi
  _QWORD *v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rsi
  _BYTE v33[292]; // [rsp+28h] [rbp-278h] BYREF
  char v34; // [rsp+14Ch] [rbp-154h]
  unsigned __int8 v35; // [rsp+14Dh] [rbp-153h]
  _QWORD v36[6]; // [rsp+150h] [rbp-150h] BYREF
  _QWORD v37[2]; // [rsp+180h] [rbp-120h] BYREF
  _QWORD v38[2]; // [rsp+190h] [rbp-110h] BYREF
  __int64 v39; // [rsp+1A0h] [rbp-100h]
  _QWORD *v40; // [rsp+1A8h] [rbp-F8h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+1B0h] [rbp-F0h] BYREF
  __int64 v42; // [rsp+1B8h] [rbp-E8h]
  __int64 v43; // [rsp+1C0h] [rbp-E0h]
  __int64 v44; // [rsp+1C8h] [rbp-D8h]
  __int64 v45; // [rsp+1D0h] [rbp-D0h]
  __int64 v46; // [rsp+1D8h] [rbp-C8h]
  __int64 v47; // [rsp+1E0h] [rbp-C0h]
  _QWORD *v48; // [rsp+1E8h] [rbp-B8h]
  _QWORD v49[12]; // [rsp+1F0h] [rbp-B0h] BYREF
  _QWORD *v50; // [rsp+250h] [rbp-50h]
  __int64 v51; // [rsp+258h] [rbp-48h] BYREF
  __int64 v52; // [rsp+260h] [rbp-40h]
  __int64 v53; // [rsp+268h] [rbp-38h]
  char v54; // [rsp+276h] [rbp-2Ah] BYREF
  unsigned __int8 v55[41]; // [rsp+277h] [rbp-29h] BYREF

  v39 = a6; /*0x10027b004*/
  v48 = (_QWORD *)a2; /*0x10027b00e*/
  v38[0] = a4; /*0x10027b01c*/
  v38[1] = a5; /*0x10027b023*/
  v55[0] = a7; /*0x10027b02a*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10027b03b*/
  {
    v40 = v38; /*0x10027b048*/
    v41 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10027b056*/
    v49[6] = 2; /*0x10027b05d*/
    v49[7] = "codexmate_lib::core::relay::manager"; /*0x10027b06c*/
    v49[8] = 35; /*0x10027b070*/
    v49[10] = &unk_1017BA5FC; /*0x10027b07f*/
    v49[11] = &v40; /*0x10027b08a*/
    v49[0] = 0; /*0x10027b08e*/
    v49[1] = "codexmate_lib::core::relay::manager"; /*0x10027b099*/
    v49[2] = 35; /*0x10027b0a0*/
    v49[3] = 0; /*0x10027b0ab*/
    v49[4] = "src/core/relay/manager.rs"; /*0x10027b0bd*/
    v49[5] = 25; /*0x10027b0c4*/
    v49[9] = 0x86000000001LL; /*0x10027b0d9*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v54, v49); /*0x10027b0e8*/
  }
  codexmate_lib::core::relay::invariants::verify_invariants_with_depth::h960ecc8c9694ee1f(v49, a3, 1, 0); /*0x10027b0fe*/
  v8 = v49[0]; /*0x10027b103*/
  v9 = v49[1]; /*0x10027b10a*/
  if ( !v49[2] ) /*0x10027b11b*/
  {
    if ( v49[0] ) /*0x10027b247*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49[1], 32LL * v49[0], 8); /*0x10027b258*/
    v25 = (__int64)v48; /*0x10027b264*/
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v33, v48); /*0x10027b26e*/
    if ( v34 || a7 != v35 ) /*0x10027b287*/
    {
      v34 = 0; /*0x10027b2d1*/
      v35 = a7; /*0x10027b2d8*/
      result = codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(v49, v25, v33); /*0x10027b2ef*/
      if ( v49[0] != 11 ) /*0x10027b2fc*/
      {
        qmemcpy(a1, v49, 0x60u); /*0x10027b5d0*/
        return result; /*0x10027b5d0*/
      }
    }
    else
    {
      result = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v33); /*0x10027b292*/
    }
    *a1 = 11; /*0x10027b302*/
    return result; /*0x10027b309*/
  }
  v50 = a1; /*0x10027b121*/
  v10 = 32LL * v49[2]; /*0x10027b125*/
  v11 = 0; /*0x10027b129*/
  do /*0x10027b137*/
  {
    v12 = *(_QWORD *)(v9 + v11); /*0x10027b139*/
    if ( v12 ) /*0x10027b140*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v9 + v11 + 8), v12, 1); /*0x10027b14c*/
    v11 += 32; /*0x10027b130*/
  }
  while ( v10 != v11 ); /*0x10027b137*/
  if ( v8 ) /*0x10027b156*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 32 * v8, 8); /*0x10027b167*/
  v40 = v48; /*0x10027b173*/
  v41 = (__int64 (__fastcall *)())a3; /*0x10027b17a*/
  v42 = v39; /*0x10027b188*/
  codexmate_lib::core::relay::router_transition::run::ha674ad013dc5681f( /*0x10027b1d3*/
    (unsigned int)v49,
    (_DWORD)a3,
    1,
    1,
    (unsigned int)"RouterOn rollbackswitching router account moderouter auth-mode toggle",
    17,
    (__int64)&v40,
    (__int64)v48,
    (__int64)a3,
    (__int64)v48,
    (__int64)v55);
  v13 = v49[1]; /*0x10027b1df*/
  v14 = (_QWORD *)v49[2]; /*0x10027b1e6*/
  v15 = (__int64 (__fastcall *)())v49[3]; /*0x10027b1ed*/
  v16 = v49[4]; /*0x10027b1f4*/
  v17 = v49[5]; /*0x10027b1fb*/
  v18 = v49[6]; /*0x10027b202*/
  v19 = v49[7]; /*0x10027b206*/
  result = v49[8]; /*0x10027b20a*/
  v21 = v49[9]; /*0x10027b20e*/
  v22 = v49[10]; /*0x10027b212*/
  v23 = v49[11]; /*0x10027b216*/
  if ( v49[0] == 11 ) /*0x10027b21e*/
  {
    if ( v49[1] == 2 ) /*0x10027b224*/
    {
      v22 = 8; /*0x10027b22a*/
      v23 = 0; /*0x10027b230*/
      v24 = v49[7]; /*0x10027b233*/
      v19 = v49[8]; /*0x10027b236*/
      result = v49[9]; /*0x10027b239*/
      v21 = 0; /*0x10027b23c*/
    }
    else
    {
      v24 = v49[6]; /*0x10027b30e*/
      v18 = v49[5]; /*0x10027b311*/
      v17 = v49[4]; /*0x10027b314*/
      v16 = v49[3]; /*0x10027b317*/
      v15 = (__int64 (__fastcall *)())v49[2]; /*0x10027b31a*/
      v14 = (_QWORD *)v49[1]; /*0x10027b31d*/
    }
    v40 = v14; /*0x10027b320*/
    v41 = v15; /*0x10027b327*/
    v42 = v16; /*0x10027b32e*/
    v43 = v17; /*0x10027b335*/
    v44 = v18; /*0x10027b33c*/
    v45 = v24; /*0x10027b343*/
    v46 = v19; /*0x10027b34a*/
    v47 = result; /*0x10027b351*/
    v36[3] = v21; /*0x10027b358*/
    v36[4] = v22; /*0x10027b35f*/
    v36[5] = v23; /*0x10027b366*/
    if ( (((unsigned __int8)v14 & 1) == 0) | result & 1 ) /*0x10027b374*/
    {
      if ( v23 ) /*0x10027b37f*/
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x10027b393*/
        {
          alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x10027b3b3*/
            v49,
            v22,
            v23,
            " | router_transitionstate_db_selectedcodexmate_lib::core::relay::manager",
            3);
          v53 = v49[2]; /*0x10027b3bf*/
          v52 = v49[1]; /*0x10027b3d1*/
          v51 = v49[0]; /*0x10027b3d5*/
          v37[0] = &v51; /*0x10027b3dd*/
          v37[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027b3eb*/
          v49[6] = 2; /*0x10027b3f2*/
          v49[7] = "codexmate_lib::core::relay::manager"; /*0x10027b401*/
          v49[8] = 35; /*0x10027b405*/
          v49[10] = &unk_1017BA66C; /*0x10027b414*/
          v49[11] = v37; /*0x10027b41f*/
          v49[0] = 0; /*0x10027b423*/
          v49[1] = "codexmate_lib::core::relay::manager"; /*0x10027b42e*/
          v49[2] = 35; /*0x10027b435*/
          v49[3] = 0; /*0x10027b440*/
          v49[4] = "src/core/relay/manager.rs"; /*0x10027b452*/
          v49[5] = 25; /*0x10027b459*/
          v49[9] = 0x88B00000001LL; /*0x10027b46e*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v54, v49); /*0x10027b47d*/
          if ( v51 ) /*0x10027b489*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x10027b494*/
        }
        *v50 = 11; /*0x10027b49d*/
        v27 = (_QWORD *)(v22 + 8); /*0x10027b4a4*/
        do /*0x10027b4b7*/
        {
          v28 = *(v27 - 1); /*0x10027b4bd*/
          if ( v28 ) /*0x10027b4c4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v27, v28, 1); /*0x10027b4ce*/
          v27 += 3; /*0x10027b4b0*/
          --v23; /*0x10027b4b4*/
        }
        while ( v23 ); /*0x10027b4b7*/
      }
      else
      {
        *v50 = 11; /*0x10027b5d9*/
      }
    }
    else
    {
      alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x10027b4ef*/
        v49,
        v22,
        v23,
        " | router_transitionstate_db_selectedcodexmate_lib::core::relay::manager",
        3);
      v53 = v49[2]; /*0x10027b4fb*/
      v52 = v49[1]; /*0x10027b50d*/
      v51 = v49[0]; /*0x10027b511*/
      v49[0] = &v51; /*0x10027b519*/
      v49[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027b527*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v36, &unk_1017BA62C, v49); /*0x10027b543*/
      if ( v51 ) /*0x10027b54f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x10027b55a*/
      v29 = v50; /*0x10027b566*/
      v50[3] = v36[2]; /*0x10027b56a*/
      v30 = v36[0]; /*0x10027b56e*/
      v29[2] = v36[1]; /*0x10027b57c*/
      v29[1] = v30; /*0x10027b580*/
      *v29 = 10; /*0x10027b584*/
      if ( v23 ) /*0x10027b58e*/
      {
        v31 = (_QWORD *)(v22 + 8); /*0x10027b590*/
        do /*0x10027b5a7*/
        {
          v32 = *(v31 - 1); /*0x10027b5a9*/
          if ( v32 ) /*0x10027b5b0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v31, v32, 1); /*0x10027b5ba*/
          v31 += 3; /*0x10027b5a0*/
          --v23; /*0x10027b5a4*/
        }
        while ( v23 ); /*0x10027b5a7*/
      }
    }
    if ( v21 ) /*0x10027b5e3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24 * v21, 8); /*0x10027b5f5*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnResult$GT$::h6e06eaf0a1fab1d9(&v41); /*0x10027b604*/
  }
  else
  {
    v26 = v50; /*0x10027b299*/
    *v50 = v49[0]; /*0x10027b29d*/
    v26[1] = v13; /*0x10027b2a0*/
    v26[2] = v14; /*0x10027b2a4*/
    v26[3] = v15; /*0x10027b2a8*/
    v26[4] = v16; /*0x10027b2ac*/
    v26[5] = v17; /*0x10027b2b0*/
    v26[6] = v18; /*0x10027b2b4*/
    v26[7] = v19; /*0x10027b2b8*/
    v26[8] = result; /*0x10027b2bc*/
    v26[9] = v21; /*0x10027b2c0*/
    v26[10] = v22; /*0x10027b2c4*/
    v26[11] = v23; /*0x10027b2c8*/
  }
  return result; /*0x10027b609*/
}