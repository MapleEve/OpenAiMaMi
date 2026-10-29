// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hadd431f93554102d; addr: 0x1006ff690; session: <审计会话>; decompiled_at: 2026-10-26T03:33:20Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hadd431f93554102d(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void *v4; // rbx
  void *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r14
  const void *v8; // rbx
  size_t v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+0h] [rbp-950h] BYREF
  _BYTE v17[360]; // [rsp+168h] [rbp-7E8h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-680h] BYREF
  _QWORD v19[50]; // [rsp+4D8h] [rbp-478h] BYREF
  _QWORD v20[50]; // [rsp+668h] [rbp-2E8h] BYREF
  _QWORD v21[19]; // [rsp+7F8h] [rbp-158h] BYREF
  _QWORD v22[2]; // [rsp+890h] [rbp-C0h] BYREF
  size_t __n; // [rsp+8A0h] [rbp-B0h]
  __int64 v24; // [rsp+8A8h] [rbp-A8h] BYREF
  char *v25; // [rsp+8B0h] [rbp-A0h]
  __int64 v26; // [rsp+8B8h] [rbp-98h]
  _QWORD *v27; // [rsp+8C0h] [rbp-90h]
  __int64 v28; // [rsp+8C8h] [rbp-88h] BYREF
  __int64 v29; // [rsp+8D0h] [rbp-80h]
  char *v30; // [rsp+8D8h] [rbp-78h] BYREF
  __int64 v31; // [rsp+8E0h] [rbp-70h]
  _QWORD *v32; // [rsp+8E8h] [rbp-68h]
  __int64 *v33; // [rsp+8F0h] [rbp-60h]
  __int64 v34; // [rsp+8F8h] [rbp-58h]
  __int64 v35; // [rsp+908h] [rbp-48h] BYREF
  __int64 v36; // [rsp+910h] [rbp-40h]
  __int64 v37; // [rsp+918h] [rbp-38h]
  void *__srca; // [rsp+920h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006ff6b9*/
  __srca = __src + 520; /*0x1006ff6d1*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1006ff6d5*/
  v37 = *((_QWORD *)__src + 117); /*0x1006ff6e1*/
  v2 = *((_QWORD *)__src + 115); /*0x1006ff6e5*/
  v36 = *((_QWORD *)__src + 116); /*0x1006ff6f3*/
  v35 = v2; /*0x1006ff6f7*/
  v34 = 0; /*0x1006ff6fb*/
  v28 = (__int64)"quit_keeping_routerset_codex_router_no_account_modediagnose_codex_routerrun_codex_router_diagnosticsfix_codex_router_issueexport_relay_configimport_relay_configparse_aimami_deeplinkAiMaMi"; /*0x1006ff70a*/
  v29 = 19; /*0x1006ff711*/
  v30 = "appstarted"; /*0x1006ff720*/
  v31 = 3; /*0x1006ff724*/
  v32 = __dst; /*0x1006ff72c*/
  v33 = &v35; /*0x1006ff734*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(v20); /*0x1006ff749*/
  if ( LODWORD(v20[0]) != 3 ) /*0x1006ff75f*/
  {
    memcpy(v21, v20, sizeof(v21)); /*0x1006ff803*/
    v34 = 0; /*0x1006ff808*/
    v28 = (__int64)"quit_keeping_routerset_codex_router_no_account_modediagnose_codex_routerrun_codex_router_diagnosticsfix_codex_router_issueexport_relay_configimport_relay_configparse_aimami_deeplinkAiMaMi"; /*0x1006ff810*/
    v29 = 19; /*0x1006ff817*/
    v30 = (char *)&unk_1017832C8; /*0x1006ff826*/
    v31 = 7; /*0x1006ff82a*/
    v32 = __dst; /*0x1006ff832*/
    v33 = &v35; /*0x1006ff836*/
    v3 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x1006ff845*/
    if ( !v3 ) /*0x1006ff84d*/
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006ff861*/
        &v24,
        &v28,
        &v30);
      if ( (_BYTE)v24 != 6 ) /*0x1006ff86d*/
      {
        v32 = v27; /*0x1006ff918*/
        v31 = v26; /*0x1006ff923*/
        v30 = v25; /*0x1006ff935*/
        v29 = v24; /*0x1006ff939*/
        memcpy(v16, __srca, sizeof(v16)); /*0x1006ff950*/
        v28 = 1; /*0x1006ff971*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006ff989*/
          v16,
          v19[48],
          &v28,
          __src + 880,
          LODWORD(v19[49]),
          HIDWORD(v19[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v21); /*0x1006ff998*/
        goto LABEL_20; /*0x1006ff99d*/
      }
      v3 = (__int64)v25; /*0x1006ff873*/
    }
    v4 = __srca; /*0x1006ff87a*/
    codexmate_lib::commands::relay::quit_keeping_router::h9d7000d453cf10d2(v22, v21, v3); /*0x1006ff88f*/
    v5 = v4; /*0x1006ff8a0*/
    memcpy(v20, v4, sizeof(v20)); /*0x1006ff8a3*/
    v7 = v22[0]; /*0x1006ff8a8*/
    if ( v22[0] == 0x8000000000000000LL ) /*0x1006ff8b2*/
    {
      LOBYTE(v21[0]) = 6; /*0x1006ff8b4*/
LABEL_19:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::he92e07bdbef96a86(v4); /*0x1006ff9f5*/
      goto LABEL_20; /*0x1006ff9ff*/
    }
    v8 = (const void *)v22[1]; /*0x1006ff8c0*/
    v9 = __n; /*0x1006ff8c7*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006ff8d1*/
    {
      v10 = 0; /*0x1006ff8d3*/
      goto LABEL_10; /*0x1006ff8d3*/
    }
    if ( __n ) /*0x1006ff8e3*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v5, v6); /*0x1006ff8e9*/
      v10 = 1; /*0x1006ff8ee*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1006ff8fc*/
      if ( !v11 ) /*0x1006ff904*/
LABEL_10:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1006ff8d6*/
      v12 = v11; /*0x1006ff906*/
    }
    else
    {
      v12 = 1; /*0x1006ff9a2*/
    }
    memcpy((void *)v12, v8, v9); /*0x1006ff9b1*/
    if ( v7 ) /*0x1006ff9b9*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1006ff9c6*/
    LOBYTE(v21[0]) = 3; /*0x1006ff9cb*/
    v21[1] = v9; /*0x1006ff9d2*/
    v21[2] = v12; /*0x1006ff9d9*/
    v21[3] = v9; /*0x1006ff9e0*/
    v4 = __srca; /*0x1006ff9f1*/
    goto LABEL_19; /*0x1006ff9f1*/
  }
  v32 = (_QWORD *)v20[4]; /*0x1006ff76f*/
  v31 = v20[3]; /*0x1006ff77a*/
  v30 = (char *)v20[2]; /*0x1006ff78c*/
  v29 = v20[1]; /*0x1006ff790*/
  memcpy(v17, __srca, sizeof(v17)); /*0x1006ff7a7*/
  v28 = 1; /*0x1006ff7c8*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006ff7e3*/
    v17,
    v19[48],
    &v28,
    __src + 880,
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
LABEL_20:
  if ( v35 != 0x8000000000000000LL ) /*0x1006ffa08*/
  {
    v13 = v36; /*0x1006ffa0a*/
    for ( i = v37 + 1; i != 1; --i ) /*0x1006ffa12*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006ffa2d*/
      v13 += 96; /*0x1006ffa32*/
    }
    if ( v35 ) /*0x1006ffa3e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 96 * v35, 8); /*0x1006ffa51*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006ffa62*/
}