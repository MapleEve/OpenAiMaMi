// __ZN13codexmate_lib8platform17voice_permissions22log_tcc_query_snapshot @ 0x1005df720 | 基线 same-set
double __fastcall codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::h9df29db964997742(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  id v8; // rdi
  const char *v9; // rsi
  id v10; // rax
  id v11; // rdi
  const char *v12; // rsi
  id v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  double result; // xmm0_8
  const char *v19; // rsi
  _QWORD v20[2]; // [rsp+0h] [rbp-100h] BYREF
  __int64 *v21; // [rsp+10h] [rbp-F0h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+18h] [rbp-E8h]
  __int64 v23; // [rsp+20h] [rbp-E0h]
  __int64 (__fastcall *v24)(); // [rsp+28h] [rbp-D8h]
  id *v25; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v26)(); // [rsp+38h] [rbp-C8h]
  id *v27; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v28)(); // [rsp+48h] [rbp-B8h]
  Boolean *v29; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall *v30)(); // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  id v34; // [rsp+78h] [rbp-88h] BYREF
  id v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  char v45; // [rsp+D6h] [rbp-2Ah] BYREF
  Boolean v46; // [rsp+D7h] [rbp-29h] BYREF

  v8 = codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_CLASS::h7edf0e04e36e7a7c; /*0x1005df740*/
  if ( codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_CLASS::h7edf0e04e36e7a7c ) /*0x1005df74a*/
  {
    v9 = codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h339d5971847037ea; /*0x1005df750*/
    if ( codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h339d5971847037ea ) /*0x1005df75a*/
    {
LABEL_3:
      v10 = objc_msgSend(v8, v9, AVMediaTypeAudio); /*0x1005df760*/
      goto LABEL_4; /*0x1005df76a*/
    }
  }
  else
  {
    v8 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005dfa5e*/
               &codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_CLASS::h7edf0e04e36e7a7c,
               "AVCaptureDevice",
               &off_101965600);
    v9 = codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h339d5971847037ea; /*0x1005dfa61*/
    if ( codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h339d5971847037ea ) /*0x1005dfa6b*/
      goto LABEL_3; /*0x1005dfa6b*/
  }
  v19 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005dfa8d*/
                        &codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h339d5971847037ea,
                        "authorizationStatusForMediaType:");
  v10 = objc_msgSend(v8, v19, AVMediaTypeAudio); /*0x1005dfa90*/
LABEL_4:
  v35 = v10; /*0x1005df76f*/
  v11 = codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_CLASS::h2173c12f8f9a764e; /*0x1005df773*/
  if ( codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_CLASS::h2173c12f8f9a764e ) /*0x1005df77d*/
  {
    v12 = codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h6f81f6e012702370; /*0x1005df783*/
    if ( codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h6f81f6e012702370 ) /*0x1005df78d*/
    {
LABEL_6:
      v13 = objc_msgSend(v11, v12); /*0x1005df793*/
      goto LABEL_7; /*0x1005df793*/
    }
  }
  else
  {
    v11 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005dfaaf*/
                &codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_CLASS::h2173c12f8f9a764e,
                "SFSpeechRecognizer",
                &off_101965618);
    v12 = codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h6f81f6e012702370; /*0x1005dfab2*/
    if ( codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h6f81f6e012702370 ) /*0x1005dfabc*/
      goto LABEL_6; /*0x1005dfabc*/
  }
  v12 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005dfade*/
                        &codexmate_lib::platform::voice_permissions::log_tcc_query_snapshot::CACHED_SEL::h6f81f6e012702370,
                        "authorizationStatus");
  v13 = objc_msgSend(v11, v12); /*0x1005dfae1*/
LABEL_7:
  v34 = v13; /*0x1005df798*/
  v46 = AXIsProcessTrusted(); /*0x1005df7a4*/
  if ( a1 ) /*0x1005df7aa*/
  {
    v39 = a1; /*0x1005df7b0*/
    v40 = a2; /*0x1005df7b4*/
    v42 = 0; /*0x1005df7b8*/
    v43 = 1; /*0x1005df7c0*/
    v44 = 0; /*0x1005df7c8*/
    v23 = 1610612768; /*0x1005df7d0*/
    v21 = &v42; /*0x1005df7df*/
    v22 = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005df7ed*/
    v14 = (__int64)&v39; /*0x1005df7f4*/
    v15 = (__int64)&v21; /*0x1005df7f8*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v39, &v21) ) /*0x1005df7ff*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dfb04*/
        &anon_338d2c24067067f307e22096ebff88a8_1090,
        55,
        &v45,
        &anon_338d2c24067067f307e22096ebff88a8_1093,
        &anon_338d2c24067067f307e22096ebff88a8_1092);
    v36 = v42; /*0x1005df814*/
    v37 = v43; /*0x1005df818*/
    v38 = v44; /*0x1005df820*/
    if ( a3 ) /*0x1005df827*/
    {
LABEL_10:
      v20[0] = a3; /*0x1005df82d*/
      v20[1] = a4; /*0x1005df834*/
      v42 = 0; /*0x1005df83b*/
      v43 = 1; /*0x1005df843*/
      v44 = 0; /*0x1005df84b*/
      v23 = 1610612768; /*0x1005df853*/
      v21 = &v42; /*0x1005df862*/
      v22 = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005df870*/
      if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v20, &v21) ) /*0x1005df885*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dfb29*/
          &anon_338d2c24067067f307e22096ebff88a8_1090,
          55,
          &v45,
          &anon_338d2c24067067f307e22096ebff88a8_1093,
          &anon_338d2c24067067f307e22096ebff88a8_1092);
      v39 = v42; /*0x1005df89a*/
      v40 = v43; /*0x1005df89e*/
      v41 = v44; /*0x1005df8a6*/
      goto LABEL_16; /*0x1005df8aa*/
    }
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x1005df8af*/
    v14 = 6; /*0x1005df8b4*/
    v15 = 1; /*0x1005df8b9*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1005df8be*/
    if ( !v16 ) /*0x1005df8c6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1005dfb3a*/
    *(_WORD *)(v16 + 4) = 15973; /*0x1005df8cc*/
    *(_DWORD *)v16 = 1852796476; /*0x1005df8d2*/
    v36 = 6; /*0x1005df8d8*/
    v37 = v16; /*0x1005df8e0*/
    v38 = 6; /*0x1005df8e4*/
    if ( a3 ) /*0x1005df8ef*/
      goto LABEL_10; /*0x1005df8ef*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v15); /*0x1005df8f5*/
  v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1005df904*/
  if ( !v17 ) /*0x1005df90c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1005dfb49*/
  *(_WORD *)(v17 + 4) = 15973; /*0x1005df912*/
  *(_DWORD *)v17 = 1852796476; /*0x1005df918*/
  v39 = 6; /*0x1005df91e*/
  v40 = v17; /*0x1005df926*/
  v41 = 6; /*0x1005df92a*/
LABEL_16:
  v21 = &v36; /*0x1005df932*/
  v22 = (__int64 (__fastcall **)())_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005df944*/
  v23 = (__int64)&v39; /*0x1005df94f*/
  v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005df956*/
  v25 = &v35; /*0x1005df961*/
  v26 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x1005df96f*/
  v27 = &v34; /*0x1005df97d*/
  v28 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x1005df984*/
  v29 = &v46; /*0x1005df98f*/
  v30 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005df99d*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v31, &unk_1017C25B1, &v21); /*0x1005df9b9*/
  if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de ) /*0x1005df9cb*/
    codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc(&unk_1019FF248, v32, v33); /*0x1005df9e2*/
  if ( v31 ) /*0x1005df9f1*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v31, 1); /*0x1005df9ff*/
  if ( v39 ) /*0x1005dfa0b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v39, 1); /*0x1005dfa16*/
  if ( v36 ) /*0x1005dfa22*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x1005dfa2d*/
  return result; /*0x1005dfa32*/
}