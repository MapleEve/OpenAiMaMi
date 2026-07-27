// __ZN13codexmate_lib4core5relay18router_unlock_auth33backup_contains_usable_real_oauth @ 0x100522530 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::backup_contains_usable_real_oauth::h2d0adfdb410430d2(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned int v13; // r15d
  _QWORD __src[22]; // [rsp+8h] [rbp-218h] BYREF
  _QWORD v16[2]; // [rsp+B8h] [rbp-168h] BYREF
  _QWORD __dst[22]; // [rsp+C8h] [rbp-158h] BYREF
  _QWORD v18[2]; // [rsp+178h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+188h] [rbp-98h] BYREF
  __int64 v20; // [rsp+190h] [rbp-90h]
  __int64 v21; // [rsp+198h] [rbp-88h]
  __int64 v22; // [rsp+1A0h] [rbp-80h] BYREF
  __int64 v23; // [rsp+1A8h] [rbp-78h]
  __int64 v24; // [rsp+1B0h] [rbp-70h]
  _QWORD v25[3]; // [rsp+1B8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+1D0h] [rbp-50h]
  __int64 v27; // [rsp+1D8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+1E0h] [rbp-40h]
  __int64 v29; // [rsp+1E8h] [rbp-38h]
  __int64 v30; // [rsp+1F0h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v19, a1, a2, &anon_92869709a5e99ce1936aa4e326b6c562_830, 30); /*0x10052255e*/
  v2 = v20; /*0x100522563*/
  v3 = v21; /*0x10052256a*/
  v18[0] = "readinessrouter unlock missing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock" /*0x100522578*/
           " auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanu"
           "porphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unloc"
           "k auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup";
  v18[1] = 9; /*0x10052257f*/
  std::fs::read::inner::h6a30c15c40add28b(&v27, v20, v21); /*0x100522597*/
  v4 = v27; /*0x10052259c*/
  if ( __OFSUB__(-v27, 1) ) /*0x1005225a7*/
  {
    v25[0] = v28; /*0x1005225b0*/
    __dst[0] = v18; /*0x1005225bb*/
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005225c9*/
    __dst[2] = v25; /*0x1005225d4*/
    __dst[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1005225e2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v22, &unk_1017C1305, __dst); /*0x1005225fb*/
    v5 = v22; /*0x100522600*/
    v6 = v23; /*0x100522604*/
    v7 = v24; /*0x100522608*/
    if ( (v25[0] & 3) == 1 ) /*0x100522618*/
    {
      v26 = v25[0] - 1LL; /*0x10052261e*/
      v30 = *(_QWORD *)(v25[0] - 1LL); /*0x100522626*/
      v8 = *(_QWORD *)(v25[0] + 7LL); /*0x10052262a*/
      if ( *(_QWORD *)v8 ) /*0x10052262e*/
        (*(void (__fastcall **)(__int64))v8)(v30); /*0x10052263a*/
      v9 = *(_QWORD *)(v8 + 8); /*0x100522640*/
      if ( v9 ) /*0x100522647*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v9, *(_QWORD *)(v8 + 16)); /*0x10052264d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 24, 8); /*0x100522660*/
    }
    __src[1] = v5; /*0x100522665*/
    __src[2] = v6; /*0x10052266c*/
    __src[3] = v7; /*0x100522673*/
    __src[0] = 10; /*0x10052267a*/
    goto LABEL_19; /*0x100522685*/
  }
  v10 = v29; /*0x10052268a*/
  v30 = v28; /*0x100522692*/
  codexmate_lib::core::relay::router_unlock_auth::validate_user_owned_auth_backup::h8180e94bd907e42f(v25, v28, v29); /*0x100522699*/
  if ( v25[0] != 0x8000000000000000LL ) /*0x1005226ac*/
  {
    v29 = v25[2]; /*0x10052274c*/
    v28 = v25[1]; /*0x100522758*/
    v27 = v25[0]; /*0x10052275c*/
    v16[0] = v2; /*0x100522760*/
    v16[1] = v3; /*0x100522767*/
    __dst[0] = v18; /*0x100522775*/
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100522783*/
    __dst[2] = v16; /*0x100522791*/
    __dst[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10052279f*/
    __dst[4] = &v27; /*0x1005227a6*/
    __dst[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005227b4*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v22, &unk_1017C1266, __dst); /*0x1005227cd*/
    __dst[0] = v22; /*0x1005227da*/
    __dst[1] = v23; /*0x1005227e1*/
    __dst[2] = v24; /*0x1005227ec*/
    if ( v27 ) /*0x1005227fa*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x100522805*/
    __src[1] = __dst[0]; /*0x100522818*/
    __src[2] = __dst[1]; /*0x10052281f*/
    __src[3] = __dst[2]; /*0x10052282d*/
    __src[0] = 10; /*0x100522834*/
    if ( v4 ) /*0x100522842*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v4, 1); /*0x100522850*/
LABEL_19:
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src); /*0x100522855*/
    v12 = v19; /*0x100522861*/
    if ( v19 ) /*0x10052286b*/
    {
      v11 = v2; /*0x100522872*/
      goto LABEL_21; /*0x100522872*/
    }
    return 0; /*0x10052286b*/
  }
  if ( v19 ) /*0x1005226bc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v19, 1); /*0x1005226c6*/
  __dst[0] = v30; /*0x1005226cf*/
  __dst[1] = v10; /*0x1005226d6*/
  __dst[2] = 0; /*0x1005226dd*/
  __dst[3] = 0; /*0x1005226e8*/
  serde_json::de::from_trait::hee93ab9047d5d7fd(__src, __dst); /*0x100522701*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x10052271c*/
  {
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&__src[1]); /*0x100522729*/
    if ( v4 ) /*0x100522731*/
    {
      v11 = v30; /*0x10052273c*/
      v12 = v4; /*0x100522740*/
LABEL_21:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v12, 1); /*0x100522875*/
    }
    return 0; /*0x10052287a*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1005228a8*/
  v13 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(__dst); /*0x1005228b5*/
  if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x1005228c7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1005228d5*/
  if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x1005228e9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x1005228f7*/
  if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x10052290b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x100522919*/
  if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x10052292d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x10052293b*/
  if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x10052294f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x10052295d*/
  if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x100522971*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x10052297f*/
  if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x100522993*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x1005229a1*/
  if ( v4 ) /*0x1005229a9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v4, 1); /*0x1005229bb*/
  return v13; /*0x100522880*/
}