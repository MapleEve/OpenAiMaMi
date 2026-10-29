// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h8d97bfd73ae6f485; addr: 0x1006fd7c0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:27Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h8d97bfd73ae6f485(
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
  _BYTE v14[360]; // [rsp+20h] [rbp-A10h] BYREF
  _QWORD __dst[65]; // [rsp+188h] [rbp-8A8h] BYREF
  _QWORD v16[50]; // [rsp+390h] [rbp-6A0h] BYREF
  _QWORD v17[45]; // [rsp+520h] [rbp-510h] BYREF
  _QWORD v18[50]; // [rsp+688h] [rbp-3A8h] BYREF
  _QWORD v19[5]; // [rsp+818h] [rbp-218h] BYREF
  _BYTE v20[72]; // [rsp+840h] [rbp-1F0h] BYREF
  __int64 v21; // [rsp+888h] [rbp-1A8h] BYREF
  __int64 v22; // [rsp+890h] [rbp-1A0h]
  void *__srca; // [rsp+898h] [rbp-198h]
  size_t __n; // [rsp+8A0h] [rbp-190h]
  __int64 v25; // [rsp+8A8h] [rbp-188h]
  _BYTE v26[72]; // [rsp+8B0h] [rbp-180h] BYREF
  _QWORD v27[3]; // [rsp+8F8h] [rbp-138h] BYREF
  __int64 v28; // [rsp+910h] [rbp-120h] BYREF
  __m256i v29; // [rsp+918h] [rbp-118h]
  __int64 v30; // [rsp+938h] [rbp-F8h]
  _BYTE v31[31]; // [rsp+941h] [rbp-EFh]
  __int64 v32; // [rsp+960h] [rbp-D0h] BYREF
  __m256i v33; // [rsp+968h] [rbp-C8h]
  __int64 v34; // [rsp+988h] [rbp-A8h]
  __int64 v35; // [rsp+990h] [rbp-A0h]
  __int64 v36; // [rsp+998h] [rbp-98h] BYREF
  __int64 v37; // [rsp+9A0h] [rbp-90h]
  __int64 v38; // [rsp+9A8h] [rbp-88h]
  __int64 v39; // [rsp+9B0h] [rbp-80h]
  __int64 v40; // [rsp+9B8h] [rbp-78h]
  __int64 v41; // [rsp+9C0h] [rbp-70h] BYREF
  __m256i v42; // [rsp+9C8h] [rbp-68h]
  __int64 v43; // [rsp+9E8h] [rbp-48h] BYREF
  __int64 v44; // [rsp+9F0h] [rbp-40h]
  __int64 v45; // [rsp+9F8h] [rbp-38h]
  _BYTE v46[41]; // [rsp+A07h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fd7e9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1006fd804*/
  v45 = *((_QWORD *)__src + 117); /*0x1006fd810*/
  v2 = *((_QWORD *)__src + 115); /*0x1006fd814*/
  v44 = *((_QWORD *)__src + 116); /*0x1006fd822*/
  v43 = v2; /*0x1006fd826*/
  v18[6] = 0; /*0x1006fd82a*/
  v18[0] = &xmmword_1016FFBF0; /*0x1006fd83c*/
  v18[1] = 16; /*0x1006fd843*/
  v18[2] = &unk_1017832DF; /*0x1006fd855*/
  v18[3] = 12; /*0x1006fd85c*/
  v18[4] = __dst; /*0x1006fd867*/
  v18[5] = &v43; /*0x1006fd872*/
  v3 = tauri::state::StateManager::try_get::h7aded0c5892c0acf(__dst[64] + 16LL, a2); /*0x1006fd887*/
  if ( !v3 ) /*0x1006fd88f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006fd8a6*/
      v17,
      v18,
      &v18[2]);
    if ( LOBYTE(v17[0]) != 6 ) /*0x1006fd8b2*/
    {
      v18[4] = v17[3]; /*0x1006fdb5a*/
      v18[3] = v17[2]; /*0x1006fdb68*/
      v18[2] = v17[1]; /*0x1006fdb7d*/
      v18[1] = v17[0]; /*0x1006fdb84*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1006fdb9d*/
      v18[0] = 1; /*0x1006fdbbe*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fdbd9*/
        v14,
        v16[48],
        v18,
        __src + 880,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_22; /*0x1006fdbde*/
    }
    v3 = v17[1]; /*0x1006fd8b8*/
  }
  codexmate_lib::commands::system::force_kill_codex::h68ca39292a8b141d(&v21, v3); /*0x1006fd8c9*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1006fd8dd*/
  if ( v21 == 0x8000000000000000LL ) /*0x1006fd8f6*/
  {
    v40 = v22; /*0x1006fd8ff*/
    v5 = __srca; /*0x1006fd903*/
    v6 = __n; /*0x1006fd90a*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006fd914*/
    {
      v7 = 0; /*0x1006fd91a*/
      goto LABEL_7; /*0x1006fd91a*/
    }
    if ( __n ) /*0x1006fdb27*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520, v4); /*0x1006fdb2d*/
      v7 = 1; /*0x1006fdb32*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006fdb40*/
      if ( !v10 ) /*0x1006fdb48*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006fd91d*/
    }
    else
    {
      v10 = 1; /*0x1006fdbe3*/
    }
    v35 = v10; /*0x1006fdbe8*/
    memcpy((void *)v10, v5, v6); /*0x1006fdbf8*/
    if ( v40 ) /*0x1006fdc04*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v40, 1); /*0x1006fdc0e*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1006fdc22*/
    v8 = v18[48]; /*0x1006fdc27*/
    v39 = v18[48]; /*0x1006fdc2e*/
    v42.i8[0] = 3; /*0x1006fdc32*/
    v42.i64[1] = v6; /*0x1006fdc36*/
    v42.i64[2] = v35; /*0x1006fdc41*/
    v42.i64[3] = v6; /*0x1006fdc45*/
    v41 = 1; /*0x1006fdc49*/
  }
  else
  {
    qmemcpy(v20, v26, sizeof(v20)); /*0x1006fd947*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1006fd959*/
    v8 = v18[48]; /*0x1006fd95e*/
    v39 = v18[48]; /*0x1006fd965*/
    v19[0] = v21; /*0x1006fd969*/
    v19[1] = v22; /*0x1006fd979*/
    v19[2] = __srca; /*0x1006fd980*/
    v19[3] = __n; /*0x1006fd98c*/
    v19[4] = v25; /*0x1006fd998*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h3ff82263d77199ee(&v32, v19); /*0x1006fd9ad*/
    if ( v32 == 0x8000000000000025LL ) /*0x1006fd9c7*/
    {
      v42 = v33; /*0x1006fd9db*/
      v9 = 0; /*0x1006fd9f5*/
    }
    else
    {
      v30 = v34; /*0x1006fda03*/
      v29 = v33; /*0x1006fda1f*/
      v28 = v32; /*0x1006fda49*/
      v36 = 0; /*0x1006fda50*/
      v37 = 1; /*0x1006fda5b*/
      v38 = 0; /*0x1006fda66*/
      v27[2] = 1610612768; /*0x1006fda71*/
      v27[0] = &v36; /*0x1006fda83*/
      v27[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006fda91*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006fdaa6*/
                              &v28,
                              v27) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006fdd12*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v46,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v31[7] = v36; /*0x1006fdac8*/
      *(_QWORD *)&v31[15] = v37; /*0x1006fdacf*/
      *(_QWORD *)&v31[23] = v38; /*0x1006fdad6*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v28); /*0x1006fdae4*/
      v42.i8[0] = 3; /*0x1006fdae9*/
      *(__int128 *)((char *)v42.i128 + 1) = *(_OWORD *)v31; /*0x1006fdafb*/
      *(__int64 *)((char *)&v42.i64[2] + 1) = *(_QWORD *)&v31[16]; /*0x1006fdb0a*/
      v42.i64[3] = *(_QWORD *)&v31[23]; /*0x1006fdb15*/
      v9 = 1; /*0x1006fdb19*/
    }
    v41 = v9; /*0x1006fdb1e*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fdc77*/
    v17,
    v8,
    &v41,
    __src + 880,
    LODWORD(v18[49]),
    HIDWORD(v18[49]));
LABEL_22:
  if ( v43 != 0x8000000000000000LL ) /*0x1006fdc8a*/
  {
    v11 = v44; /*0x1006fdc8c*/
    for ( i = v45 + 1; i != 1; --i ) /*0x1006fdc94*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fdcad*/
      v11 += 96; /*0x1006fdcb2*/
    }
    if ( v43 ) /*0x1006fdcbe*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 96 * v43, 8); /*0x1006fdcd1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006fdce2*/
}