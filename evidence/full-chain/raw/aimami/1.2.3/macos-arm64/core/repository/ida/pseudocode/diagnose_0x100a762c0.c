// __ZN13codexmate_lib4core10repository10Repository8diagnose @ 0x100a762c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::diagnose::h773f305c6f31c083(_QWORD *__dst, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  _QWORD *v14; // r12
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r15
  _QWORD *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rsi
  _BYTE v24[1072]; // [rsp+0h] [rbp-9E0h] BYREF
  __int64 v25; // [rsp+430h] [rbp-5B0h] BYREF
  _BYTE v26[96]; // [rsp+438h] [rbp-5A8h] BYREF
  _QWORD __dsta[121]; // [rsp+498h] [rbp-548h] BYREF
  _QWORD v28[41]; // [rsp+860h] [rbp-180h] BYREF
  int v29; // [rsp+9A8h] [rbp-38h]
  bool v30; // [rsp+9ACh] [rbp-34h]
  __int64 v31; // [rsp+9B0h] [rbp-30h]

  codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(v24, a2); /*0x100a762de*/
  qmemcpy(v28, &v24[8], 0x60u); /*0x100a762fd*/
  if ( *(_QWORD *)v24 == 2 ) /*0x100a76304*/
  {
    qmemcpy(__dst + 1, v28, 0x60u); /*0x100a76316*/
    *__dst = 2; /*0x100a76319*/
  }
  else
  {
    memcpy(__dsta, &v24[104], sizeof(__dsta)); /*0x100a76338*/
    qmemcpy(v26, v28, sizeof(v26)); /*0x100a76350*/
    v25 = *(_QWORD *)v24; /*0x100a76353*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dsta, &v28[12]); /*0x100a7635a*/
    v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100a76369*/
    if ( !v2 ) /*0x100a76371*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100a7677c*/
    v3 = v2; /*0x100a76377*/
    *(_BYTE *)(v2 + 4) = 51; /*0x100a7637a*/
    *(_DWORD *)v2 = 775040561; /*0x100a7637e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100a76384*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100a76393*/
    if ( !v4 ) /*0x100a7639b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100a7678d*/
    v5 = v4; /*0x100a763a1*/
    *(_BYTE *)(v4 + 4) = 115; /*0x100a763a4*/
    *(_DWORD *)v4 = 1868783981; /*0x100a763a8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100a763ae*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100a763bd*/
    if ( !v6 ) /*0x100a763c5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100a7679e*/
    v7 = v6; /*0x100a763cb*/
    *(_WORD *)(v6 + 4) = 13366; /*0x100a763d5*/
    *(_DWORD *)v6 = 1597388920; /*0x100a763db*/
    v28[28] = 5; /*0x100a763e1*/
    v28[29] = v5; /*0x100a763ec*/
    v28[30] = 5; /*0x100a763f3*/
    v8 = __dsta[74]; /*0x100a763fe*/
    *(_QWORD *)&v24[16] = __dsta[96]; /*0x100a76413*/
    *(_QWORD *)&v24[8] = __dsta[95]; /*0x100a76421*/
    *(_QWORD *)v24 = __dsta[94]; /*0x100a7642f*/
    *(_QWORD *)&v24[24] = __dsta[97]; /*0x100a7643d*/
    *(_QWORD *)&v24[32] = __dsta[98]; /*0x100a7644b*/
    *(_QWORD *)&v24[40] = __dsta[99]; /*0x100a76459*/
    memcpy(&v28[3], &__dsta[50], 0xB0u); /*0x100a7646c*/
    v31 = __dsta[6]; /*0x100a76471*/
    v28[25] = 5; /*0x100a76479*/
    v28[26] = v3; /*0x100a76484*/
    v28[27] = 5; /*0x100a7648b*/
    v28[31] = 6; /*0x100a76496*/
    v28[32] = v7; /*0x100a764a1*/
    v28[33] = 6; /*0x100a764a5*/
    v29 = __dsta[74]; /*0x100a764ad*/
    v30 = __dsta[6] != 2; /*0x100a764b1*/
    v28[0] = 0; /*0x100a764b5*/
    LOBYTE(v28[2]) = 0; /*0x100a764c0*/
    v28[34] = __dsta[94]; /*0x100a764d5*/
    v28[35] = __dsta[95]; /*0x100a764d9*/
    v28[36] = __dsta[96]; /*0x100a764e4*/
    v28[37] = __dsta[97]; /*0x100a764ef*/
    v28[38] = __dsta[98]; /*0x100a764fa*/
    v28[39] = __dsta[99]; /*0x100a76505*/
    v28[40] = __dsta[100]; /*0x100a76510*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8071e308383cb2e5(v24, v28); /*0x100a76522*/
    memcpy(__dst, v24, 0x1A0u); /*0x100a76536*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(&v25, v24); /*0x100a76542*/
    v9 = __dsta[75]; /*0x100a76547*/
    if ( !__OFSUB__(-__dsta[75], 1) && __dsta[75] ) /*0x100a76556*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[76], __dsta[75], 1); /*0x100a76564*/
    v10 = __dsta[73]; /*0x100a76569*/
    if ( v8 ) /*0x100a76573*/
    {
      v11 = __dsta[73]; /*0x100a76575*/
      do /*0x100a76592*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v11); /*0x100a76583*/
        v11 += 424; /*0x100a76588*/
        --v8; /*0x100a7658f*/
      }
      while ( v8 ); /*0x100a76592*/
    }
    if ( __dsta[72] ) /*0x100a7659e*/
    {
      v9 = 424LL * __dsta[72]; /*0x100a765a0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 424LL * __dsta[72], 8); /*0x100a765af*/
    }
    v12 = __dsta[84]; /*0x100a765b4*/
    v13 = __dsta[85]; /*0x100a765bb*/
    if ( __dsta[85] ) /*0x100a765c5*/
    {
      v14 = (_QWORD *)(__dsta[84] + 128LL); /*0x100a765c7*/
      do /*0x100a765da*/
      {
        v9 = *(v14 - 1); /*0x100a765dc*/
        if ( v9 ) /*0x100a765e4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v14, v9, 1); /*0x100a765ef*/
        v14 += 20; /*0x100a765d0*/
        --v13; /*0x100a765d7*/
      }
      while ( v13 ); /*0x100a765da*/
    }
    if ( __dsta[83] ) /*0x100a76600*/
    {
      v9 = 160LL * __dsta[83]; /*0x100a76606*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 160LL * __dsta[83], 8); /*0x100a76612*/
    }
    v15 = __dsta[89]; /*0x100a76617*/
    v16 = __dsta[90]; /*0x100a7661e*/
    if ( __dsta[90] ) /*0x100a76628*/
    {
      v17 = __dsta[89]; /*0x100a7662a*/
      do /*0x100a76642*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v17); /*0x100a76633*/
        v17 += 352; /*0x100a76638*/
        --v16; /*0x100a7663f*/
      }
      while ( v16 ); /*0x100a76642*/
    }
    if ( __dsta[88] ) /*0x100a7664e*/
    {
      v9 = 352LL * __dsta[88]; /*0x100a76650*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 352LL * __dsta[88], 8); /*0x100a7665f*/
    }
    if ( (_DWORD)v31 != 2 ) /*0x100a76668*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(&__dsta[6], v9); /*0x100a76671*/
    v18 = __dsta[92]; /*0x100a76676*/
    v19 = __dsta[93]; /*0x100a7667d*/
    if ( __dsta[93] ) /*0x100a76687*/
    {
      v20 = (_QWORD *)(__dsta[92] + 32LL); /*0x100a76689*/
      do /*0x100a76697*/
      {
        v21 = *(v20 - 4); /*0x100a76699*/
        if ( v21 ) /*0x100a766a1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v20 - 3), v21, 1); /*0x100a766ad*/
        v22 = *(v20 - 1); /*0x100a766b2*/
        if ( v22 ) /*0x100a766ba*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v22, 1); /*0x100a766c5*/
        v20 += 6; /*0x100a76690*/
        --v19; /*0x100a76694*/
      }
      while ( v19 ); /*0x100a76697*/
    }
    if ( __dsta[91] ) /*0x100a766e0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 48LL * __dsta[91], 8); /*0x100a766f2*/
    if ( __dsta[101] != 0x8000000000000000LL && __dsta[101] ) /*0x100a76706*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[102], __dsta[101], 1); /*0x100a76714*/
    if ( __dsta[104] != 0x8000000000000000LL ) /*0x100a76723*/
    {
      if ( __dsta[104] ) /*0x100a76728*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[105], __dsta[104], 1); /*0x100a76736*/
      if ( __dsta[107] != 0x8000000000000000LL && __dsta[107] ) /*0x100a7674a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[108], __dsta[107], 1); /*0x100a76758*/
    }
  }
  return __dst; /*0x100a76760*/
}