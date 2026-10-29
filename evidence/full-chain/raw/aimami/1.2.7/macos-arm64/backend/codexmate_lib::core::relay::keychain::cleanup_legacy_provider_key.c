// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::keychain::cleanup_legacy_provider_key::hf1b78fc018aed775; addr: 0x1009b6500; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
void __fastcall codexmate_lib::core::relay::keychain::cleanup_legacy_provider_key::hf1b78fc018aed775(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall *v7)(); // rdi
  _QWORD v8[2]; // [rsp+8h] [rbp-F8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-E8h] BYREF
  void *v10; // [rsp+20h] [rbp-E0h]
  __int64 v11; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+30h] [rbp-D0h]
  const char *v13; // [rsp+38h] [rbp-C8h]
  __int64 v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  void *v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  __int64 v18; // [rsp+60h] [rbp-A0h]
  void *v19; // [rsp+68h] [rbp-98h]
  _QWORD **v20; // [rsp+70h] [rbp-90h]
  _QWORD **v21; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+80h] [rbp-80h]
  _QWORD *v23; // [rsp+88h] [rbp-78h]
  _QWORD *v24; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+98h] [rbp-68h]
  _QWORD *v26; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v27)(); // [rsp+A8h] [rbp-58h]
  _QWORD *v28; // [rsp+B0h] [rbp-50h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+B8h] [rbp-48h]
  _QWORD *v30; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall *v31)(); // [rsp+C8h] [rbp-38h]
  char v32; // [rsp+D6h] [rbp-2Ah] BYREF
  char v33; // [rsp+D7h] [rbp-29h]

  v8[0] = a3; /*0x1009b6520*/
  v8[1] = a4; /*0x1009b6527*/
  if ( (unsigned __int8)codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h34c836f54e5b188d(a3, a4) ) /*0x1009b6534*/
  {
    codexmate_lib::core::relay::keychain::lock_store::h8b3983fcc7208950(&v28); /*0x1009b654f*/
    if ( v28 == (_QWORD *)0x8000000000000000LL ) /*0x1009b655b*/
    {
      v31 = v29; /*0x1009b6565*/
      v33 = (char)v30; /*0x1009b656d*/
      if ( (unsigned __int8)codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h34c836f54e5b188d( /*0x1009b65ac*/
                              a3,
                              a4)
        && (v7 = (__int64 (__fastcall *)())&v21,
            codexmate_lib::core::relay::keychain::write_key_file::h247a96a6c8de277d(
              (unsigned int)&v21,
              a1,
              a2,
              a3,
              a4,
              1,
              0),
            v21 != (_QWORD **)0x8000000000000000LL) )
      {
        v30 = v23; /*0x1009b670b*/
        v29 = v22; /*0x1009b671a*/
        v28 = v21; /*0x1009b671e*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1009b6730*/
        {
          v24 = v8; /*0x1009b673d*/
          v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1009b6748*/
          v26 = &v28; /*0x1009b6750*/
          v27 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1009b675b*/
          v15 = 2; /*0x1009b675f*/
          v16 = &unk_10179053C; /*0x1009b6771*/
          v17 = 36; /*0x1009b6778*/
          v19 = &unk_101904647; /*0x1009b678a*/
          v20 = &v24; /*0x1009b6795*/
          v9 = 0; /*0x1009b679c*/
          v10 = &unk_10179053C; /*0x1009b67a7*/
          v11 = 36; /*0x1009b67ae*/
          v12 = 0; /*0x1009b67b9*/
          v13 = "src/core/relay/keychain.rs"; /*0x1009b67cb*/
          v14 = 26; /*0x1009b67d2*/
          v18 = 0xBC00000001LL; /*0x1009b67e7*/
          v7 = (__int64 (__fastcall *)())&v32; /*0x1009b67ee*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v32, &v9); /*0x1009b67f9*/
        }
        if ( v28 ) /*0x1009b6805*/
        {
          v7 = v29; /*0x1009b6807*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x1009b6810*/
        }
        if ( !v33 /*0x1009b686c*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7) )
        {
          *((_BYTE *)v31 + 8) = 1; /*0x1009b6879*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v31); /*0x1009b683b*/
      }
      else
      {
        codexmate_lib::core::relay::keychain::cleanup_legacy_stores::h924e583287b46b06(a1, a2, a3, a4); /*0x1009b65be*/
        if ( !v33 /*0x1009b6852*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(a1) )
        {
          *((_BYTE *)v31 + 8) = 1; /*0x1009b6863*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v31); /*0x1009b65fe*/
      }
    }
    else
    {
      v26 = v30; /*0x1009b6607*/
      v25 = v29; /*0x1009b6613*/
      v24 = v28; /*0x1009b6617*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1009b6629*/
      {
        v21 = &v24; /*0x1009b6633*/
        v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1009b6641*/
        v15 = 2; /*0x1009b6645*/
        v16 = &unk_10179053C; /*0x1009b6657*/
        v17 = 36; /*0x1009b665e*/
        v19 = &unk_10190467E; /*0x1009b6670*/
        v20 = &v21; /*0x1009b667e*/
        v9 = 0; /*0x1009b6685*/
        v10 = &unk_10179053C; /*0x1009b6690*/
        v11 = 36; /*0x1009b6697*/
        v12 = 0; /*0x1009b66a2*/
        v13 = "src/core/relay/keychain.rs"; /*0x1009b66b4*/
        v14 = 26; /*0x1009b66bb*/
        v18 = 0xB600000001LL; /*0x1009b66d0*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v32, &v9); /*0x1009b66e2*/
      }
      if ( v24 ) /*0x1009b66ee*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x1009b66fd*/
    }
  }
}
