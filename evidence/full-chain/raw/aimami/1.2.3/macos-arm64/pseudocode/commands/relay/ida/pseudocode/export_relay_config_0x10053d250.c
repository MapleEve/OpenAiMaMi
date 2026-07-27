// __ZN13codexmate_lib8commands5relay19export_relay_config @ 0x10053d250 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::relay::export_relay_config::h41d571b38e9e2a9c(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned __int8 a4,
        __m128i a5)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v15[37]; // [rsp+18h] [rbp-218h] BYREF
  _QWORD v16[3]; // [rsp+140h] [rbp-F0h] BYREF
  _QWORD v17[12]; // [rsp+158h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+1B8h] [rbp-78h]
  __int64 v19; // [rsp+1C0h] [rbp-70h]
  __int64 v20; // [rsp+1C8h] [rbp-68h]
  __int64 v21; // [rsp+1D0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+1D8h] [rbp-58h]
  __int64 v23; // [rsp+1E0h] [rbp-50h]
  __int64 v24; // [rsp+1E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+1F0h] [rbp-40h]
  __int64 v26; // [rsp+1F8h] [rbp-38h]
  __int64 v27; // [rsp+200h] [rbp-30h]

  v6 = *a3; /*0x10053d26a*/
  v27 = a3[1]; /*0x10053d271*/
  v7 = a2[2]; /*0x10053d275*/
  if ( __OFSUB__(0, *(_QWORD *)(v7 + 16)) ) /*0x10053d27b*/
  {
    v9 = a3[2]; /*0x10053d288*/
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555((__int64)v15, (__int64)a2); /*0x10053d296*/
    codexmate_lib::core::relay::io::export_to_file::ha6954daba252f349( /*0x10053d2bb*/
      v17,
      (_QWORD *)(*a2 + 16LL),
      (__int64)v15,
      v27,
      v9,
      a4,
      a5);
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v15); /*0x10053d2c7*/
    if ( LODWORD(v17[0]) == 11 ) /*0x10053d2d3*/
    {
LABEL_3:
      v10 = v17[1]; /*0x10053d2d9*/
      v11 = v17[5]; /*0x10053d2fc*/
      v18 = v17[2]; /*0x10053d303*/
      v19 = v17[3]; /*0x10053d307*/
      v20 = v17[4]; /*0x10053d30b*/
      v17[0] = v17[2]; /*0x10053d30f*/
      v17[1] = v17[3]; /*0x10053d316*/
      v17[2] = v17[4]; /*0x10053d31d*/
      if ( v6 ) /*0x10053d327*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v6, 1); /*0x10053d335*/
      v15[0] = v10; /*0x10053d33a*/
      v15[1] = v17[0]; /*0x10053d34f*/
      v15[2] = v17[1]; /*0x10053d356*/
      v15[3] = v17[2]; /*0x10053d364*/
      v15[4] = v11; /*0x10053d36b*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h42340fb3a28d6e0d((__int64)a1, v15); /*0x10053d37c*/
      return a1; /*0x10053d381*/
    }
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v15[1], v7 + 16); /*0x10053d391*/
    v15[0] = 9; /*0x10053d396*/
    qmemcpy(v17, v15, sizeof(v17)); /*0x10053d3b4*/
    if ( LODWORD(v17[0]) == 11 ) /*0x10053d3be*/
      goto LABEL_3; /*0x10053d3be*/
  }
  qmemcpy(v15, v17, 0x60u); /*0x10053d3da*/
  v24 = 0; /*0x10053d3dd*/
  v25 = 1; /*0x10053d3e5*/
  v26 = 0; /*0x10053d3ed*/
  v16[2] = 1610612768; /*0x10053d3f5*/
  v16[0] = &v24; /*0x10053d404*/
  v16[1] = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10053d412*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10053d423*/
                          v15,
                          v16) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053d4ce*/
      &anon_92869709a5e99ce1936aa4e326b6c562_1258,
      55,
      &v21,
      &anon_92869709a5e99ce1936aa4e326b6c562_1272,
      &anon_92869709a5e99ce1936aa4e326b6c562_1260);
  v21 = v24; /*0x10053d438*/
  v22 = v25; /*0x10053d43c*/
  v23 = v26; /*0x10053d444*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v17); /*0x10053d44f*/
  v12 = v21; /*0x10053d462*/
  v13 = v22; /*0x10053d466*/
  v18 = v21; /*0x10053d46a*/
  v19 = v22; /*0x10053d46e*/
  v20 = v23; /*0x10053d472*/
  a1[3] = v23; /*0x10053d476*/
  a1[2] = v13; /*0x10053d47a*/
  a1[1] = v12; /*0x10053d47e*/
  *a1 = 0x8000000000000000LL; /*0x10053d482*/
  if ( v6 ) /*0x10053d488*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v6, 1); /*0x10053d496*/
  return a1; /*0x10053d49e*/
}