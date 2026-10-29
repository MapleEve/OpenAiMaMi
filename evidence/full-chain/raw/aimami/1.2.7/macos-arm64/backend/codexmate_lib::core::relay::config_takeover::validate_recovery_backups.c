// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::validate_recovery_backups::hf07139a7618471cb; addr: 0x1002254d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
_QWORD *__fastcall codexmate_lib::core::relay::config_takeover::validate_recovery_backups::hf07139a7618471cb(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r13
  _QWORD *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  _QWORD v25[11]; // [rsp+0h] [rbp-110h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-B0h]
  __int64 v28; // [rsp+68h] [rbp-A8h]
  __int64 v29; // [rsp+70h] [rbp-A0h]
  __int64 v30; // [rsp+78h] [rbp-98h]
  __int64 v31; // [rsp+80h] [rbp-90h] BYREF
  _QWORD v32[11]; // [rsp+88h] [rbp-88h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 584); /*0x1002254e7*/
  v3 = *(_QWORD *)(a2 + 592); /*0x1002254ee*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v26, v2, v3, &anon_8cf26f36e03587b9a54b9e7945b707cc_90, 27); /*0x100225512*/
  v33 = v27; /*0x100225532*/
  codexmate_lib::core::relay::config_takeover::read_backup_bytes::hcc31af03538a90c5( /*0x100225539*/
    &v31,
    v27,
    v28,
    (__int64)&anon_8cf26f36e03587b9a54b9e7945b707cc_90,
    27);
  v4 = v31; /*0x10022553e*/
  v5 = v32[0]; /*0x100225545*/
  v6 = v32[1]; /*0x10022554c*/
  v7 = v32[2]; /*0x100225550*/
  if ( v31 != 11 ) /*0x100225558*/
  {
    a1[11] = v32[10]; /*0x1002256cd*/
    a1[10] = v32[9]; /*0x1002256d5*/
    a1[9] = v32[8]; /*0x1002256dd*/
    a1[8] = v32[7]; /*0x1002256e5*/
    a1[7] = v32[6]; /*0x1002256ed*/
    a1[6] = v32[5]; /*0x1002256f5*/
    v18 = v32[3]; /*0x1002256f9*/
    a1[5] = v32[4]; /*0x100225701*/
    a1[4] = v18; /*0x100225705*/
    a1[2] = v6; /*0x100225709*/
    a1[3] = v7; /*0x10022570d*/
    *a1 = v4; /*0x100225711*/
    a1[1] = v5; /*0x100225714*/
    goto LABEL_17; /*0x100225714*/
  }
  if ( !__OFSUB__(-v32[0], 1) ) /*0x100225564*/
  {
    codexmate_lib::core::relay::config_takeover::decode_backup::h928ff6b99b2210ae(&v31, v32[1], v32[2]); /*0x100225570*/
    v8 = v31; /*0x100225575*/
    qmemcpy(v25, v32, sizeof(v25)); /*0x10022558f*/
    if ( v31 == 11 ) /*0x100225596*/
    {
      if ( v25[0] != 0x8000000000000000LL ) /*0x1002255ad*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hffd787307f7fc18a(v25); /*0x1002255b6*/
      if ( v5 ) /*0x1002255be*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1002255cb*/
      goto LABEL_8; /*0x1002255cb*/
    }
    qmemcpy(a1 + 1, v25, 0x58u); /*0x1002257e6*/
    *a1 = v8; /*0x1002257e9*/
    if ( v5 ) /*0x1002257ef*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100225800*/
LABEL_17:
    if ( v26 ) /*0x100225722*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v26, 1); /*0x100225731*/
    return a1; /*0x100225736*/
  }
LABEL_8:
  if ( v26 ) /*0x1002255da*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v26, 1); /*0x1002255e5*/
  std::path::Path::_join::hb1a495d4f06b13b8(v25, v2, v3, "codex_router_top_level_backup.json", 34); /*0x100225607*/
  v9 = v25[1]; /*0x10022560c*/
  codexmate_lib::core::relay::config_takeover::read_backup_bytes::hcc31af03538a90c5( /*0x10022562d*/
    &v31,
    v25[1],
    v25[2],
    (__int64)"codex_router_top_level_backup.json",
    34);
  v10 = v31; /*0x100225632*/
  v11 = v32[0]; /*0x100225639*/
  v12 = v32[1]; /*0x100225640*/
  v13 = v32[2]; /*0x100225644*/
  if ( v31 == 11 ) /*0x10022564c*/
  {
    if ( v32[0] == 0x8000000000000000LL ) /*0x10022565f*/
    {
LABEL_33:
      if ( v25[0] ) /*0x1002258c3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v25[0], 1); /*0x1002258cd*/
      *a1 = 11; /*0x1002258d2*/
      return a1; /*0x1002258d2*/
    }
    v33 = v32[1]; /*0x10022566c*/
    codexmate_lib::core::relay::config_takeover::decode_backup::h6c968de0bc1845a9(&v31, v32[1], v32[2]); /*0x100225670*/
    v14 = v31; /*0x100225675*/
    v15 = v32[1]; /*0x100225683*/
    v16 = v32[2]; /*0x100225687*/
    if ( v31 == 11 ) /*0x10022568f*/
    {
      if ( v32[0] != 0x8000000000000000LL ) /*0x1002256a2*/
      {
        v30 = v32[0]; /*0x1002256a8*/
        v29 = v9; /*0x1002256af*/
        if ( v32[2] ) /*0x1002256b9*/
        {
          v17 = (_QWORD *)(v32[1] + 8LL); /*0x1002256bf*/
          do /*0x100225747*/
          {
            v19 = *(v17 - 1); /*0x10022574d*/
            if ( v19 ) /*0x100225754*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v19, 1); /*0x10022575e*/
            v17 += 3; /*0x100225740*/
            --v16; /*0x100225744*/
          }
          while ( v16 ); /*0x100225747*/
        }
        v9 = v29; /*0x100225885*/
        if ( v30 ) /*0x10022588c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24 * v30, 8); /*0x10022589e*/
      }
      if ( v11 ) /*0x1002258aa*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v11, 1); /*0x1002258b4*/
      goto LABEL_33; /*0x1002258b4*/
    }
    v21 = v32[3]; /*0x10022580a*/
    v22 = v32[4]; /*0x10022580e*/
    v23 = v32[0]; /*0x100225812*/
    a1[11] = v32[10]; /*0x100225819*/
    a1[10] = v32[9]; /*0x100225821*/
    a1[9] = v32[8]; /*0x100225829*/
    a1[8] = v32[7]; /*0x100225831*/
    a1[7] = v32[6]; /*0x100225839*/
    a1[6] = v32[5]; /*0x100225841*/
    a1[5] = v22; /*0x100225845*/
    a1[1] = v23; /*0x100225849*/
    a1[2] = v15; /*0x10022584d*/
    a1[3] = v16; /*0x100225851*/
    a1[4] = v21; /*0x100225855*/
    *a1 = v14; /*0x100225859*/
    if ( v11 ) /*0x10022585f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v11, 1); /*0x100225871*/
  }
  else
  {
    a1[11] = v32[10]; /*0x100225769*/
    a1[10] = v32[9]; /*0x100225771*/
    a1[9] = v32[8]; /*0x100225779*/
    a1[8] = v32[7]; /*0x100225781*/
    a1[7] = v32[6]; /*0x100225789*/
    a1[6] = v32[5]; /*0x100225791*/
    v20 = v32[3]; /*0x100225795*/
    a1[5] = v32[4]; /*0x10022579d*/
    a1[4] = v20; /*0x1002257a1*/
    a1[2] = v12; /*0x1002257a5*/
    a1[3] = v13; /*0x1002257a9*/
    *a1 = v10; /*0x1002257ad*/
    a1[1] = v11; /*0x1002257b0*/
  }
  if ( v25[0] ) /*0x1002257be*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v25[0], 1); /*0x1002257cc*/
  return a1; /*0x1002258dc*/
}
