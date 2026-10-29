// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_{{closure}}::_{{closure}}::hecbaa7bf5926d9dc; addr: 0x100703a40; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:30Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hecbaa7bf5926d9dc(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  void *v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+20h] [rbp-C50h] BYREF
  _QWORD __dst[65]; // [rsp+188h] [rbp-AE8h] BYREF
  _BYTE v15[360]; // [rsp+390h] [rbp-8E0h] BYREF
  _QWORD v16[50]; // [rsp+4F8h] [rbp-778h] BYREF
  __int64 v17; // [rsp+688h] [rbp-5E8h] BYREF
  __int64 v18; // [rsp+690h] [rbp-5E0h]
  void *v19; // [rsp+698h] [rbp-5D8h]
  size_t __n; // [rsp+6A0h] [rbp-5D0h]
  _QWORD *v21; // [rsp+6A8h] [rbp-5C8h]
  _BYTE __srca[360]; // [rsp+6B0h] [rbp-5C0h] BYREF
  _QWORD v23[50]; // [rsp+818h] [rbp-458h] BYREF
  __int64 v24; // [rsp+9A8h] [rbp-2C8h] BYREF
  __int64 v25; // [rsp+9B0h] [rbp-2C0h]
  void *v26; // [rsp+9B8h] [rbp-2B8h] BYREF
  size_t v27; // [rsp+9C0h] [rbp-2B0h]
  _QWORD *v28; // [rsp+9C8h] [rbp-2A8h]
  _QWORD v29[45]; // [rsp+9D0h] [rbp-2A0h] BYREF
  _QWORD v30[3]; // [rsp+B38h] [rbp-138h] BYREF
  __int64 v31; // [rsp+B50h] [rbp-120h] BYREF
  __m256i v32; // [rsp+B58h] [rbp-118h]
  __int64 v33; // [rsp+B78h] [rbp-F8h]
  _BYTE v34[31]; // [rsp+B81h] [rbp-EFh]
  __int64 v35; // [rsp+BA0h] [rbp-D0h] BYREF
  __m256i v36; // [rsp+BA8h] [rbp-C8h]
  __int64 v37; // [rsp+BC8h] [rbp-A8h]
  __int64 v38; // [rsp+BD0h] [rbp-A0h]
  __int64 v39; // [rsp+BD8h] [rbp-98h] BYREF
  __int64 v40; // [rsp+BE0h] [rbp-90h]
  __int64 v41; // [rsp+BE8h] [rbp-88h]
  __int64 v42; // [rsp+BF0h] [rbp-80h]
  __int64 v43; // [rsp+BF8h] [rbp-78h]
  __int64 v44; // [rsp+C00h] [rbp-70h] BYREF
  __m256i v45; // [rsp+C08h] [rbp-68h]
  __int64 v46; // [rsp+C28h] [rbp-48h] BYREF
  __int64 v47; // [rsp+C30h] [rbp-40h]
  __int64 v48; // [rsp+C38h] [rbp-38h]
  char v49[41]; // [rsp+C47h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x100703a69*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x100703a84*/
  v48 = *((_QWORD *)__src + 117); /*0x100703a90*/
  v2 = *((_QWORD *)__src + 115); /*0x100703a94*/
  v47 = *((_QWORD *)__src + 116); /*0x100703aa2*/
  v46 = v2; /*0x100703aa6*/
  v29[1] = 0; /*0x100703aaa*/
  v24 = (__int64)"diagnose_codex_routerrun_codex_router_diagnosticsfix_codex_router_issueexport_relay_configimport_relay_configparse_aimami_deeplinkAiMaMi"; /*0x100703abc*/
  v25 = 21; /*0x100703ac3*/
  v26 = &unk_1017832C8; /*0x100703ad5*/
  v27 = 7; /*0x100703adc*/
  v28 = __dst; /*0x100703ae7*/
  v29[0] = &v46; /*0x100703af2*/
  if ( tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL) /*0x100703b32*/
    || (_$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847(
          v23,
          &v24,
          &v26),
        LOBYTE(v23[0]) == 6) )
  {
    codexmate_lib::commands::relay::diagnose_codex_router::h75b570ceeb47f4c4(&v17); /*0x100703b49*/
    memcpy(v23, __src + 520, sizeof(v23)); /*0x100703b5d*/
    if ( v17 == 0x8000000000000000LL ) /*0x100703b76*/
    {
      v43 = v18; /*0x100703b7f*/
      v4 = v19; /*0x100703b83*/
      v5 = __n; /*0x100703b8a*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100703b94*/
      {
        v6 = 0; /*0x100703b9a*/
        goto LABEL_6; /*0x100703b9a*/
      }
      if ( __n ) /*0x100703da5*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, __src + 520, v3); /*0x100703dab*/
        v6 = 1; /*0x100703db0*/
        v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100703dbe*/
        if ( !v9 ) /*0x100703dc6*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100703b9d*/
      }
      else
      {
        v9 = 1; /*0x100703e61*/
      }
      v38 = v9; /*0x100703e66*/
      memcpy((void *)v9, v4, v5); /*0x100703e76*/
      if ( v43 ) /*0x100703e82*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v43, 1); /*0x100703e8c*/
      memcpy(v15, __src + 520, sizeof(v15)); /*0x100703ea0*/
      v7 = v23[48]; /*0x100703ea5*/
      v42 = v23[48]; /*0x100703eac*/
      v45.i8[0] = 3; /*0x100703eb0*/
      v45.i64[1] = v5; /*0x100703eb4*/
      v45.i64[2] = v38; /*0x100703ebf*/
      v45.i64[3] = v5; /*0x100703ec3*/
      v44 = 1; /*0x100703ec7*/
    }
    else
    {
      memcpy(v29, __srca, sizeof(v29)); /*0x100703bc7*/
      memcpy(v15, __src + 520, sizeof(v15)); /*0x100703bdb*/
      v7 = v23[48]; /*0x100703be0*/
      v42 = v23[48]; /*0x100703be7*/
      v24 = v17; /*0x100703beb*/
      v25 = v18; /*0x100703bf9*/
      v26 = v19; /*0x100703c00*/
      v27 = __n; /*0x100703c0b*/
      v28 = v21; /*0x100703c16*/
      _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hbc5028aa5ed6defa(&v35, &v24); /*0x100703c2b*/
      if ( v35 == 0x8000000000000025LL ) /*0x100703c45*/
      {
        v45 = v36; /*0x100703c59*/
        v8 = 0; /*0x100703c73*/
      }
      else
      {
        v33 = v37; /*0x100703c81*/
        v32 = v36; /*0x100703c9d*/
        v31 = v35; /*0x100703cc7*/
        v39 = 0; /*0x100703cce*/
        v40 = 1; /*0x100703cd9*/
        v41 = 0; /*0x100703ce4*/
        v30[2] = 1610612768; /*0x100703cef*/
        v30[0] = &v39; /*0x100703d01*/
        v30[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x100703d0f*/
        if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x100703d24*/
                                &v31,
                                v30) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100703f92*/
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
            55,
            v49,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
        *(_QWORD *)&v34[7] = v39; /*0x100703d46*/
        *(_QWORD *)&v34[15] = v40; /*0x100703d4d*/
        *(_QWORD *)&v34[23] = v41; /*0x100703d54*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v31); /*0x100703d62*/
        v45.i8[0] = 3; /*0x100703d67*/
        *(__int128 *)((char *)v45.i128 + 1) = *(_OWORD *)v34; /*0x100703d79*/
        *(__int64 *)((char *)&v45.i64[2] + 1) = *(_QWORD *)&v34[16]; /*0x100703d88*/
        v45.i64[3] = *(_QWORD *)&v34[23]; /*0x100703d93*/
        v8 = 1; /*0x100703d97*/
      }
      v44 = v8; /*0x100703d9c*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100703ef5*/
      v15,
      v7,
      &v44,
      __src + 880,
      LODWORD(v23[49]),
      HIDWORD(v23[49]));
  }
  else
  {
    v28 = (_QWORD *)v23[3]; /*0x100703dd8*/
    v27 = v23[2]; /*0x100703de6*/
    v26 = (void *)v23[1]; /*0x100703dfb*/
    v25 = v23[0]; /*0x100703e02*/
    memcpy(v13, __src + 520, sizeof(v13)); /*0x100703e1b*/
    v24 = 1; /*0x100703e3c*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100703e57*/
      v13,
      v16[48],
      &v24,
      __src + 880,
      LODWORD(v16[49]),
      HIDWORD(v16[49]));
  }
  if ( v46 != 0x8000000000000000LL ) /*0x100703f08*/
  {
    v10 = v47; /*0x100703f0a*/
    for ( i = v48 + 1; i != 1; --i ) /*0x100703f12*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x100703f2d*/
      v10 += 96; /*0x100703f32*/
    }
    if ( v46 ) /*0x100703f3e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 96 * v46, 8); /*0x100703f51*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100703f62*/
}