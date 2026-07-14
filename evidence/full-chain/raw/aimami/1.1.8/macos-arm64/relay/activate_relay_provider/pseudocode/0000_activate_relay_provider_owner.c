// mac 1.1.8 activate_relay_provider node va=0x1004c6610 depth=0
// activate_relay_provider_owner
_QWORD *__fastcall codexmate_lib::commands::relay::activate_relay_provider::heab3b124ae2d75b0(
        _QWORD *__dst,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  _QWORD v9[53]; // [rsp+0h] [rbp-400h] BYREF
  _QWORD v10[4]; // [rsp+1A8h] [rbp-258h] BYREF
  _BYTE __dsta[312]; // [rsp+1C8h] [rbp-238h] BYREF
  _BYTE v12[96]; // [rsp+300h] [rbp-100h] BYREF
  _QWORD v13[3]; // [rsp+360h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+378h] [rbp-88h]
  __int64 v15; // [rsp+380h] [rbp-80h]
  __int64 v16; // [rsp+388h] [rbp-78h]
  __int64 v17; // [rsp+390h] [rbp-70h]
  __int64 v18; // [rsp+398h] [rbp-68h]
  __int64 v19; // [rsp+3A0h] [rbp-60h]
  __int64 v20; // [rsp+3A8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+3B0h] [rbp-50h]
  __int64 v22; // [rsp+3B8h] [rbp-48h]
  __int64 v23; // [rsp+3C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+3C8h] [rbp-38h]
  __int64 v25; // [rsp+3D0h] [rbp-30h]

  v4 = a3[1]; /*0x1004c662a*/
  codexmate_lib::core::relay::manager::RelayManager::activate::h971fcd34ae9b9a8c(v9, a2, v4, a3[2]); /*0x1004c663c*/
  if ( !__OFSUB__(-v9[0], 1) ) /*0x1004c6655*/
  {
    v19 = v9[3]; /*0x1004c672d*/
    v18 = v9[2]; /*0x1004c673a*/
    v17 = v9[1]; /*0x1004c673e*/
    memcpy(__dsta, &v9[4], sizeof(__dsta)); /*0x1004c6755*/
    v14 = v9[1]; /*0x1004c6762*/
    v10[0] = v9[0]; /*0x1004c676d*/
    v10[1] = v9[1]; /*0x1004c6774*/
    v10[2] = v9[2]; /*0x1004c677b*/
    v10[3] = v9[3]; /*0x1004c6782*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8cb36c706799a66b(v9, v10); /*0x1004c6797*/
    memcpy(__dst, v9, 0x1A8u); /*0x1004c67ab*/
    v7 = *a3; /*0x1004c67b0*/
    if ( !*a3 ) /*0x1004c67b6*/
      return __dst; /*0x1004c67b6*/
LABEL_6:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v7, 1); /*0x1004c67b8*/
    return __dst; /*0x1004c67c0*/
  }
  qmemcpy(v12, &v9[1], sizeof(v12)); /*0x1004c666d*/
  v23 = 0; /*0x1004c6670*/
  v24 = 1; /*0x1004c6678*/
  v25 = 0; /*0x1004c6680*/
  v13[2] = 1610612768; /*0x1004c6688*/
  v13[0] = &v23; /*0x1004c6697*/
  v13[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004c66a5*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004c66b6*/
                          v12,
                          v13) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c67f8*/
      "a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap()` on an `Err` value",
      55,
      &v20,
      &anon_3e4c14ac1826b92abbb84b981a88c995_940,
      &anon_3e4c14ac1826b92abbb84b981a88c995_929);
  v20 = v23; /*0x1004c66cb*/
  v21 = v24; /*0x1004c66cf*/
  v22 = v25; /*0x1004c66d7*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v9[1]); /*0x1004c66de*/
  v5 = v20; /*0x1004c66f1*/
  v6 = v21; /*0x1004c66f5*/
  v14 = v20; /*0x1004c66f9*/
  v15 = v21; /*0x1004c6700*/
  v16 = v22; /*0x1004c6704*/
  __dst[3] = v22; /*0x1004c6708*/
  __dst[2] = v6; /*0x1004c670c*/
  __dst[1] = v5; /*0x1004c6710*/
  *__dst = 0x8000000000000000LL; /*0x1004c6714*/
  v7 = *a3; /*0x1004c6717*/
  if ( *a3 ) /*0x1004c6717*/
    goto LABEL_6; /*0x1004c671d*/
  return __dst; /*0x1004c67c8*/
}