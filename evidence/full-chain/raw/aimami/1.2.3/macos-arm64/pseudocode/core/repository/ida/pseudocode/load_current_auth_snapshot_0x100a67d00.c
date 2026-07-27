// __ZN13codexmate_lib4core10repository10Repository26load_current_auth_snapshot @ 0x100a67d00 | 基线 same-set
double __fastcall codexmate_lib::core::repository::Repository::load_current_auth_snapshot::h8bef7fb94ca7d6d7(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3,
        __m128i a4)
{
  char *v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned __int64 __src[22]; // [rsp+8h] [rbp-298h] BYREF
  _BYTE v12[96]; // [rsp+B8h] [rbp-1E8h] BYREF
  _QWORD __dsta[22]; // [rsp+118h] [rbp-188h] BYREF
  __int64 v14; // [rsp+1C8h] [rbp-D8h] BYREF
  char *v15; // [rsp+1D0h] [rbp-D0h]
  __int64 v16; // [rsp+1D8h] [rbp-C8h]
  __int64 v17; // [rsp+1E0h] [rbp-C0h]
  const char *v18; // [rsp+1E8h] [rbp-B8h]
  __int64 v19; // [rsp+1F0h] [rbp-B0h]
  __int64 v20; // [rsp+1F8h] [rbp-A8h]
  char *v21; // [rsp+200h] [rbp-A0h]
  __int64 v22; // [rsp+208h] [rbp-98h]
  __int64 v23; // [rsp+210h] [rbp-90h]
  void *v24; // [rsp+218h] [rbp-88h]
  _BYTE **v25; // [rsp+220h] [rbp-80h]
  _BYTE *v26; // [rsp+260h] [rbp-40h] BYREF
  __int64 (__fastcall *v27)(_QWORD, _QWORD); // [rsp+268h] [rbp-38h]
  _BYTE v28[41]; // [rsp+277h] [rbp-29h] BYREF

  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, a2, a3); /*0x100a67d2e*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x100a67d3e*/
  {
    qmemcpy(v12, &__src[1], sizeof(v12)); /*0x100a67d5a*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v14, a2, a3); /*0x100a67d6a*/
    if ( (_BYTE)v14 ) /*0x100a67d76*/
    {
      if ( ((unsigned __int8)v15 & 3) == 1 ) /*0x100a67d8b*/
      {
        v5 = v15 - 1; /*0x100a67d91*/
        v6 = *(_QWORD *)(v15 - 1); /*0x100a67d95*/
        v7 = *(_QWORD *)(v15 + 7); /*0x100a67d99*/
        if ( *(_QWORD *)v7 ) /*0x100a67d9d*/
          (*(void (__fastcall **)(__int64))v7)(v6); /*0x100a67da9*/
        v8 = *(_QWORD *)(v7 + 8); /*0x100a67dab*/
        if ( v8 ) /*0x100a67db3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x100a67dbd*/
        *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x100a67dcf*/
      }
    }
    else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100a67f28*/
    {
      v26 = v12; /*0x100a67f2e*/
      v27 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a67f39*/
      v20 = 2; /*0x100a67f3d*/
      v21 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a67f4f*/
      v22 = 31; /*0x100a67f56*/
      v24 = &unk_1017C959C; /*0x100a67f68*/
      v25 = &v26; /*0x100a67f73*/
      v14 = 0; /*0x100a67f77*/
      v15 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a67f82*/
      v16 = 31; /*0x100a67f89*/
      v17 = 0; /*0x100a67f94*/
      v18 = "src/core/repository.rs"; /*0x100a67fa6*/
      v19 = 22; /*0x100a67fad*/
      v23 = 0x75100000001LL; /*0x100a67fc2*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v28, &v14); /*0x100a67fd4*/
    }
    *__dst = 2; /*0x100a67fd9*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v12); /*0x100a67fe7*/
    return *(double *)a4.i64; /*0x100a67fec*/
  }
  memcpy(__dsta, __src, sizeof(__dsta)); /*0x100a67def*/
  if ( !codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(__dsta) ) /*0x100a67dfe*/
  {
    *__dst = 2; /*0x100a67ff1*/
    goto LABEL_18; /*0x100a67ff1*/
  }
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190((__int64 *)__src, __dsta, a2, a3, a4); /*0x100a67e18*/
  if ( LODWORD(__src[0]) == 2 ) /*0x100a67e24*/
  {
    qmemcpy(v12, &__src[1], sizeof(v12)); /*0x100a67e40*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a67e51*/
    {
      v26 = v12; /*0x100a67e57*/
      v27 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a67e62*/
      v20 = 2; /*0x100a67e66*/
      v21 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a67e78*/
      v22 = 31; /*0x100a67e7f*/
      v24 = &unk_1017C956B; /*0x100a67e91*/
      v25 = &v26; /*0x100a67e9c*/
      v14 = 0; /*0x100a67ea0*/
      v15 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a67eab*/
      v16 = 31; /*0x100a67eb2*/
      v17 = 0; /*0x100a67ebd*/
      v18 = "src/core/repository.rs"; /*0x100a67ecf*/
      v19 = 22; /*0x100a67ed6*/
      v23 = 0x75C00000001LL; /*0x100a67eeb*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v28, &v14); /*0x100a67efd*/
    }
    *__dst = 2; /*0x100a67f02*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v12); /*0x100a67f10*/
LABEL_18:
    v9 = __dsta[0]; /*0x100a67ff8*/
    if ( __dsta[0] != 0x8000000000000000LL ) /*0x100a68002*/
      goto LABEL_19; /*0x100a68002*/
    goto LABEL_22; /*0x100a68002*/
  }
  memcpy(__dst, __src, 0x98u); /*0x100a6802b*/
  v9 = __dsta[0]; /*0x100a68030*/
  if ( __dsta[0] != 0x8000000000000000LL ) /*0x100a6803a*/
  {
LABEL_19:
    if ( v9 ) /*0x100a68007*/
      *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[1], v9, 1); /*0x100a68015*/
  }
LABEL_22:
  if ( __dsta[3] != 0x8000000000000000LL && __dsta[3] ) /*0x100a6804b*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[4], __dsta[3], 1); /*0x100a68059*/
  if ( __dsta[6] != 0x8000000000000000LL && __dsta[6] ) /*0x100a6806d*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[7], __dsta[6], 1); /*0x100a6807b*/
  if ( __dsta[9] != 0x8000000000000000LL && __dsta[9] ) /*0x100a6808f*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[10], __dsta[9], 1); /*0x100a6809d*/
  if ( __dsta[12] != 0x8000000000000000LL && __dsta[12] ) /*0x100a680b1*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[13], __dsta[12], 1); /*0x100a680bf*/
  if ( __dsta[15] != 0x8000000000000000LL && __dsta[15] ) /*0x100a680d3*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[16], __dsta[15], 1); /*0x100a680e1*/
  if ( __dsta[18] != 0x8000000000000000LL && __dsta[18] ) /*0x100a680f5*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[19], __dsta[18], 1); /*0x100a68103*/
  return *(double *)a4.i64; /*0x100a68108*/
}