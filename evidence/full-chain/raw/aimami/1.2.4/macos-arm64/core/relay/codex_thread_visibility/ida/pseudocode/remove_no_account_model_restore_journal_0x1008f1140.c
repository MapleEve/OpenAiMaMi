// __ZN13codexmate_lib4core5relay23codex_thread_visibility39remove_no_account_model_restore_journal @ 0x1008f1140 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::remove_no_account_model_restore_journal::haea7c83ed816a14b(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rbx
  size_t v3; // r15
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  _QWORD v10[12]; // [rsp+0h] [rbp-E0h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-80h] BYREF
  _QWORD v12[2]; // [rsp+80h] [rbp-60h] BYREF
  __int64 v13; // [rsp+90h] [rbp-50h] BYREF
  void *__src; // [rsp+98h] [rbp-48h]
  size_t __n; // [rsp+A0h] [rbp-40h]
  __int64 v16; // [rsp+A8h] [rbp-38h] BYREF
  _BYTE v17[41]; // [rsp+B7h] [rbp-29h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8(&v13, a1, a2, &unk_10167FE13, 36); /*0x1008f116b*/
  v2 = __src; /*0x1008f1170*/
  v3 = __n; /*0x1008f1174*/
  result = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x1008f117e*/
  v5 = result; /*0x1008f1183*/
  if ( !result ) /*0x1008f1189*/
    goto LABEL_6; /*0x1008f1189*/
  v16 = result; /*0x1008f118f*/
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(result) /*0x1008f11b1*/
    && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
  {
    v12[0] = v2; /*0x1008f11b7*/
    v12[1] = v3; /*0x1008f11bb*/
    v11[0] = v12; /*0x1008f11c3*/
    v11[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008f11ce*/
    v11[2] = &v16; /*0x1008f11d6*/
    v11[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008f11e1*/
    v10[6] = 2; /*0x1008f11e5*/
    v10[7] = &unk_10167F573; /*0x1008f11f7*/
    v10[8] = 51; /*0x1008f11fe*/
    v10[10] = &unk_1017D2AEE; /*0x1008f1210*/
    v10[11] = v11; /*0x1008f121b*/
    v10[0] = 0; /*0x1008f1222*/
    v10[1] = &unk_10167F573; /*0x1008f122d*/
    v10[2] = 51; /*0x1008f1234*/
    v10[3] = 0; /*0x1008f123f*/
    v10[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x1008f1251*/
    v10[5] = 41; /*0x1008f1258*/
    v10[9] = 0x66D00000001LL; /*0x1008f126d*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v17, v10); /*0x1008f127f*/
    v5 = v16; /*0x1008f1284*/
  }
  result = v5 & 3; /*0x1008f128b*/
  if ( (_DWORD)result != 1 ) /*0x1008f1291*/
  {
LABEL_6:
    v6 = v13; /*0x1008f1293*/
    if ( !v13 ) /*0x1008f129a*/
      return result; /*0x1008f129a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v6, 1); /*0x1008f129a*/
  }
  v7 = *(_QWORD *)(v5 - 1); /*0x1008f12bf*/
  v8 = *(_QWORD *)(v5 + 7); /*0x1008f12c3*/
  if ( *(_QWORD *)v8 ) /*0x1008f12c7*/
    (*(void (__fastcall **)(_QWORD))v8)(*(_QWORD *)(v5 - 1)); /*0x1008f12d3*/
  v9 = *(_QWORD *)(v8 + 8); /*0x1008f12d5*/
  if ( v9 ) /*0x1008f12dc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x1008f12e5*/
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5 - 1, 24, 8); /*0x1008f12f7*/
  v6 = v13; /*0x1008f12fc*/
  if ( v13 ) /*0x1008f1303*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v6, 1); /*0x1008f129c*/
  return result; /*0x1008f12a9*/
}