// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb44b91fb24d99897; addr: 0x1006ffd80; session: <审计会话>; decompiled_at: 2026-10-26T03:22:23Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb44b91fb24d99897(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  void *v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+20h] [rbp-9F0h] BYREF
  _QWORD __dst[65]; // [rsp+188h] [rbp-888h] BYREF
  _QWORD v16[50]; // [rsp+390h] [rbp-680h] BYREF
  _QWORD v17[45]; // [rsp+520h] [rbp-4F0h] BYREF
  _QWORD v18[50]; // [rsp+688h] [rbp-388h] BYREF
  _QWORD v19[12]; // [rsp+818h] [rbp-1F8h] BYREF
  __int64 v20; // [rsp+878h] [rbp-198h] BYREF
  __int64 v21; // [rsp+880h] [rbp-190h]
  void *__srca; // [rsp+888h] [rbp-188h]
  size_t __n; // [rsp+890h] [rbp-180h]
  __int64 v24; // [rsp+898h] [rbp-178h]
  __int64 v25; // [rsp+8A0h] [rbp-170h]
  __int64 v26; // [rsp+8A8h] [rbp-168h]
  __int64 v27; // [rsp+8B0h] [rbp-160h]
  __int64 v28; // [rsp+8B8h] [rbp-158h]
  __int64 v29; // [rsp+8C0h] [rbp-150h]
  __int64 v30; // [rsp+8C8h] [rbp-148h]
  __int64 v31; // [rsp+8D0h] [rbp-140h]
  _QWORD v32[3]; // [rsp+8D8h] [rbp-138h] BYREF
  __int64 v33; // [rsp+8F0h] [rbp-120h] BYREF
  __m256i v34; // [rsp+8F8h] [rbp-118h]
  __int64 v35; // [rsp+918h] [rbp-F8h]
  _BYTE v36[31]; // [rsp+921h] [rbp-EFh]
  __int64 v37; // [rsp+940h] [rbp-D0h] BYREF
  __m256i v38; // [rsp+948h] [rbp-C8h]
  __int64 v39; // [rsp+968h] [rbp-A8h]
  __int64 v40; // [rsp+970h] [rbp-A0h]
  __int64 v41; // [rsp+978h] [rbp-98h] BYREF
  __int64 v42; // [rsp+980h] [rbp-90h]
  __int64 v43; // [rsp+988h] [rbp-88h]
  __int64 v44; // [rsp+990h] [rbp-80h]
  __int64 v45; // [rsp+998h] [rbp-78h]
  __int64 v46; // [rsp+9A0h] [rbp-70h] BYREF
  __m256i v47; // [rsp+9A8h] [rbp-68h]
  __int64 v48; // [rsp+9C8h] [rbp-48h] BYREF
  __int64 v49; // [rsp+9D0h] [rbp-40h]
  __int64 v50; // [rsp+9D8h] [rbp-38h]
  _BYTE v51[41]; // [rsp+9E7h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006ffda9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1006ffdc4*/
  v50 = *((_QWORD *)__src + 117); /*0x1006ffdd0*/
  v2 = *((_QWORD *)__src + 115); /*0x1006ffdd4*/
  v49 = *((_QWORD *)__src + 116); /*0x1006ffde2*/
  v48 = v2; /*0x1006ffde6*/
  v18[6] = 0; /*0x1006ffdea*/
  v18[0] = "cleanget_claude_web_search_compatset_claude_web_search_compatset_auto_switch"; /*0x1006ffdfc*/
  v18[1] = 5; /*0x1006ffe03*/
  v18[2] = &unk_1016E98EC; /*0x1006ffe15*/
  v18[3] = 4; /*0x1006ffe1c*/
  v18[4] = __dst; /*0x1006ffe27*/
  v18[5] = &v48; /*0x1006ffe32*/
  v3 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x1006ffe47*/
  if ( !v3 ) /*0x1006ffe4f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006ffe66*/
      v17,
      v18,
      &v18[2]);
    if ( LOBYTE(v17[0]) != 6 ) /*0x1006ffe72*/
    {
      v18[4] = v17[3]; /*0x100700162*/
      v18[3] = v17[2]; /*0x100700170*/
      v18[2] = v17[1]; /*0x100700185*/
      v18[1] = v17[0]; /*0x10070018c*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1007001a5*/
      v18[0] = 1; /*0x1007001c6*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1007001e1*/
        v14,
        v16[48],
        v18,
        __src + 880,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_22; /*0x1007001e6*/
    }
    v3 = v17[1]; /*0x1006ffe78*/
  }
  codexmate_lib::commands::system::clean::ha6594f89073c5495(&v20, v3); /*0x1006ffe89*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1006ffe9d*/
  if ( v20 == 0x8000000000000000LL ) /*0x1006ffeb6*/
  {
    v45 = v21; /*0x1006ffebf*/
    v5 = __srca; /*0x1006ffec3*/
    v6 = __n; /*0x1006ffeca*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006ffed4*/
    {
      v7 = 0; /*0x1006ffeda*/
      goto LABEL_7; /*0x1006ffeda*/
    }
    if ( __n ) /*0x10070012f*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520, v4); /*0x100700135*/
      v7 = 1; /*0x10070013a*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100700148*/
      if ( !v10 ) /*0x100700150*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006ffedd*/
    }
    else
    {
      v10 = 1; /*0x1007001eb*/
    }
    v40 = v10; /*0x1007001f0*/
    memcpy((void *)v10, v5, v6); /*0x100700200*/
    if ( v45 ) /*0x10070020c*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v45, 1); /*0x100700216*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x10070022a*/
    v8 = v18[48]; /*0x10070022f*/
    v44 = v18[48]; /*0x100700236*/
    v47.i8[0] = 3; /*0x10070023a*/
    v47.i64[1] = v6; /*0x10070023e*/
    v47.i64[2] = v40; /*0x100700249*/
    v47.i64[3] = v6; /*0x10070024d*/
    v46 = 1; /*0x100700251*/
  }
  else
  {
    v19[11] = v31; /*0x1006ffefb*/
    v19[10] = v30; /*0x1006fff09*/
    v19[9] = v29; /*0x1006fff17*/
    v19[8] = v28; /*0x1006fff25*/
    v19[7] = v27; /*0x1006fff33*/
    v19[6] = v26; /*0x1006fff48*/
    v19[5] = v25; /*0x1006fff4f*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1006fff65*/
    v8 = v18[48]; /*0x1006fff6a*/
    v44 = v18[48]; /*0x1006fff71*/
    v19[0] = v20; /*0x1006fff75*/
    v19[1] = v21; /*0x1006fff83*/
    v19[2] = __srca; /*0x1006fff8a*/
    v19[3] = __n; /*0x1006fff95*/
    v19[4] = v24; /*0x1006fffa0*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h39d1dd2d0dd7cd70(&v37, v19); /*0x1006fffb5*/
    if ( v37 == 0x8000000000000025LL ) /*0x1006fffcf*/
    {
      v47 = v38; /*0x1006fffe3*/
      v9 = 0; /*0x1006ffffd*/
    }
    else
    {
      v35 = v39; /*0x10070000b*/
      v34 = v38; /*0x100700027*/
      v33 = v37; /*0x100700051*/
      v41 = 0; /*0x100700058*/
      v42 = 1; /*0x100700063*/
      v43 = 0; /*0x10070006e*/
      v32[2] = 1610612768; /*0x100700079*/
      v32[0] = &v41; /*0x10070008b*/
      v32[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x100700099*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1007000ae*/
                              &v33,
                              v32) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100700312*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v51,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v36[7] = v41; /*0x1007000d0*/
      *(_QWORD *)&v36[15] = v42; /*0x1007000d7*/
      *(_QWORD *)&v36[23] = v43; /*0x1007000de*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v33); /*0x1007000ec*/
      v47.i8[0] = 3; /*0x1007000f1*/
      *(__int128 *)((char *)v47.i128 + 1) = *(_OWORD *)v36; /*0x100700103*/
      *(__int64 *)((char *)&v47.i64[2] + 1) = *(_QWORD *)&v36[16]; /*0x100700112*/
      v47.i64[3] = *(_QWORD *)&v36[23]; /*0x10070011d*/
      v9 = 1; /*0x100700121*/
    }
    v46 = v9; /*0x100700126*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x10070027f*/
    v17,
    v8,
    &v46,
    __src + 880,
    LODWORD(v18[49]),
    HIDWORD(v18[49]));
LABEL_22:
  if ( v48 != 0x8000000000000000LL ) /*0x100700292*/
  {
    v11 = v49; /*0x100700294*/
    for ( i = v50 + 1; i != 1; --i ) /*0x10070029c*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1007002ad*/
      v11 += 96; /*0x1007002b2*/
    }
    if ( v48 ) /*0x1007002be*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, 96 * v48, 8); /*0x1007002d1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1007002e2*/
}