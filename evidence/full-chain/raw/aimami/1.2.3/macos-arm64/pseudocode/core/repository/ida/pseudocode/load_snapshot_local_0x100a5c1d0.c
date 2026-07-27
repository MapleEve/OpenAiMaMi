// __ZN13codexmate_lib4core10repository10Repository19load_snapshot_local @ 0x100a5c1d0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::load_snapshot_local::h7b714ce076bcba03(_QWORD *__dst)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // r15
  _BYTE v8[672]; // [rsp+0h] [rbp-E70h] BYREF
  _BYTE v9[1072]; // [rsp+2A0h] [rbp-BD0h] BYREF
  _BYTE v10[672]; // [rsp+6D0h] [rbp-7A0h] BYREF
  __int64 v11; // [rsp+970h] [rbp-500h]
  __int64 v12; // [rsp+978h] [rbp-4F8h]
  __int64 v13; // [rsp+980h] [rbp-4F0h]
  _BYTE v14[120]; // [rsp+988h] [rbp-4E8h] BYREF
  __int64 v15; // [rsp+A00h] [rbp-470h] BYREF
  _BYTE v16[96]; // [rsp+A08h] [rbp-468h] BYREF
  _QWORD __dsta[121]; // [rsp+A68h] [rbp-408h] BYREF
  __int64 v18[8]; // [rsp+E30h] [rbp-40h] BYREF

  codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(v9); /*0x100a5c1f1*/
  qmemcpy(v10, &v9[8], 0x60u); /*0x100a5c210*/
  if ( *(_QWORD *)v9 == 2 ) /*0x100a5c217*/
  {
    qmemcpy(__dst + 1, v10, 0x60u); /*0x100a5c229*/
    *__dst = 3; /*0x100a5c22c*/
  }
  else
  {
    memcpy(__dsta, &v9[104], sizeof(__dsta)); /*0x100a5c255*/
    qmemcpy(v16, v10, sizeof(v16)); /*0x100a5c26d*/
    v15 = *(_QWORD *)v9; /*0x100a5c270*/
    codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::h05def326631eb6ea(v8); /*0x100a5c290*/
    v13 = __dsta[90]; /*0x100a5c29c*/
    v12 = __dsta[89]; /*0x100a5c2b1*/
    v11 = __dsta[88]; /*0x100a5c2b8*/
    qmemcpy(v14, &__dsta[104], sizeof(v14)); /*0x100a5c2d2*/
    memcpy(v10, v8, sizeof(v10)); /*0x100a5c2eb*/
    v18[2] = __dsta[93]; /*0x100a5c2f7*/
    v18[1] = __dsta[92]; /*0x100a5c309*/
    v18[0] = __dsta[91]; /*0x100a5c30d*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::hd50f06649d211a03(v9, v10, v18); /*0x100a5c322*/
    memcpy(__dst, v9, 0x380u); /*0x100a5c336*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hfc789ea0cf95a5fc(&__dsta[50]); /*0x100a5c342*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(&v15, v9); /*0x100a5c34e*/
    v1 = __dsta[75]; /*0x100a5c353*/
    if ( __dsta[75] != 0x8000000000000000LL && __dsta[75] ) /*0x100a5c362*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[76], __dsta[75], 1); /*0x100a5c370*/
    v2 = __dsta[73]; /*0x100a5c375*/
    v3 = __dsta[74]; /*0x100a5c37c*/
    if ( __dsta[74] ) /*0x100a5c386*/
    {
      v4 = __dsta[73]; /*0x100a5c388*/
      do /*0x100a5c3a2*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v4); /*0x100a5c393*/
        v4 += 424; /*0x100a5c398*/
        --v3; /*0x100a5c39f*/
      }
      while ( v3 ); /*0x100a5c3a2*/
    }
    if ( __dsta[72] ) /*0x100a5c3ae*/
    {
      v1 = 424LL * __dsta[72]; /*0x100a5c3b0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 424LL * __dsta[72], 8); /*0x100a5c3bf*/
    }
    v5 = __dsta[85]; /*0x100a5c3c4*/
    if ( __dsta[85] ) /*0x100a5c3ce*/
    {
      v6 = (_QWORD *)(__dsta[84] + 128LL); /*0x100a5c3d7*/
      do /*0x100a5c3ea*/
      {
        v1 = *(v6 - 1); /*0x100a5c3ec*/
        if ( v1 ) /*0x100a5c3f3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v1, 1); /*0x100a5c3fd*/
        v6 += 20; /*0x100a5c3e0*/
        --v5; /*0x100a5c3e7*/
      }
      while ( v5 ); /*0x100a5c3ea*/
    }
    if ( __dsta[83] ) /*0x100a5c40e*/
    {
      v1 = 160LL * __dsta[83]; /*0x100a5c41b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[84], 160LL * __dsta[83], 8); /*0x100a5c424*/
    }
    if ( LODWORD(__dsta[6]) != 2 ) /*0x100a5c430*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(&__dsta[6], v1); /*0x100a5c439*/
    if ( __dsta[94] != 0x8000000000000000LL && __dsta[94] ) /*0x100a5c44d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[95], __dsta[94], 1); /*0x100a5c45b*/
    if ( __dsta[97] != 0x8000000000000000LL && __dsta[97] ) /*0x100a5c46f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[98], __dsta[97], 1); /*0x100a5c47d*/
    if ( __dsta[101] != 0x8000000000000000LL && __dsta[101] ) /*0x100a5c491*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[102], __dsta[101], 1); /*0x100a5c49f*/
  }
  return __dst; /*0x100a5c4a7*/
}