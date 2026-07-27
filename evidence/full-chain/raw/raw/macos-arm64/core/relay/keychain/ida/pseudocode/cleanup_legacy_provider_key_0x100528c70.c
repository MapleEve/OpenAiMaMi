// __ZN13codexmate_lib4core5relay8keychain27cleanup_legacy_provider_key @ 0x100528c70 | 基线 same-set
double __fastcall codexmate_lib::core::relay::keychain::cleanup_legacy_provider_key::h654722c8519453b3(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  double result; // xmm0_8
  _QWORD v6[4]; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-C8h] BYREF
  const char *v8; // [rsp+30h] [rbp-C0h]
  __int64 v9; // [rsp+38h] [rbp-B8h]
  __int64 v10; // [rsp+40h] [rbp-B0h]
  const char *v11; // [rsp+48h] [rbp-A8h]
  __int64 v12; // [rsp+50h] [rbp-A0h]
  __int64 v13; // [rsp+58h] [rbp-98h]
  const char *v14; // [rsp+60h] [rbp-90h]
  __int64 v15; // [rsp+68h] [rbp-88h]
  __int64 v16; // [rsp+70h] [rbp-80h]
  void *v17; // [rsp+78h] [rbp-78h]
  _QWORD *v18; // [rsp+80h] [rbp-70h]
  _QWORD v19[3]; // [rsp+88h] [rbp-68h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-48h]
  __int64 v22; // [rsp+B0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-38h]
  __int64 v24; // [rsp+C0h] [rbp-30h]
  _BYTE v25[33]; // [rsp+CFh] [rbp-21h] BYREF

  v3 = a3; /*0x100528c82*/
  v4 = a2; /*0x100528c85*/
  v20 = a2; /*0x100528c8b*/
  v21 = a3; /*0x100528c8f*/
  if ( (unsigned __int8)codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h42f58ae8ebd86916(a2, a3) ) /*0x100528c99*/
  {
    if ( (unsigned __int8)codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h42f58ae8ebd86916(a2, v3) ) /*0x100528cb6*/
    {
      result = codexmate_lib::core::relay::keychain::delete_key_file::h82b77f1e4410ef89( /*0x100528cdb*/
                 v19,
                 *(_QWORD *)(a1 + 584),
                 *(_QWORD *)(a1 + 592),
                 a2,
                 v3);
      if ( v19[0] != 0x8000000000000000LL ) /*0x100528ce4*/
      {
        v24 = v19[2]; /*0x100528cee*/
        v23 = v19[1]; /*0x100528cfa*/
        v22 = v19[0]; /*0x100528cfe*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100528d10*/
        {
          v6[0] = &v20; /*0x100528d1a*/
          v6[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100528d28*/
          v6[2] = &v22; /*0x100528d33*/
          v6[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100528d41*/
          v13 = 2; /*0x100528d48*/
          v14 = "codexmate_lib::core::relay::keychain"; /*0x100528d5a*/
          v15 = 36; /*0x100528d61*/
          v17 = &anon_92869709a5e99ce1936aa4e326b6c562_1000; /*0x100528d73*/
          v18 = v6; /*0x100528d7e*/
          v7 = 0; /*0x100528d82*/
          v8 = "codexmate_lib::core::relay::keychain"; /*0x100528d8d*/
          v9 = 36; /*0x100528d94*/
          v10 = 0; /*0x100528d9f*/
          v11 = "src/core/relay/keychain.rs"; /*0x100528db1*/
          v12 = 26; /*0x100528db8*/
          v16 = 0x7F00000001LL; /*0x100528dcd*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v25, &v7); /*0x100528ddc*/
        }
        if ( v22 ) /*0x100528de8*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100528df3*/
        v4 = v20; /*0x100528df8*/
        v3 = v21; /*0x100528dfc*/
      }
    }
    codexmate_lib::core::relay::keychain::mac_keychain::delete::hfbcfbdce78a6723f( /*0x100528e19*/
      &v7,
      &anon_92869709a5e99ce1936aa4e326b6c562_997,
      16,
      v4,
      v3);
    if ( v7 != 0x8000000000000000LL ) /*0x100528e28*/
    {
      if ( v7 ) /*0x100528e2d*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x100528e3b*/
    }
  }
  return result; /*0x100528e40*/
}