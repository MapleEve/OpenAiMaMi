// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4b2c6a6d3fa9483b; addr: 0x1006f7ac0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:26Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4b2c6a6d3fa9483b(
        char *__src,
        double a2)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  size_t v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  void *v10; // r15
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-7C8h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-660h] BYREF
  _BYTE v16[152]; // [rsp+378h] [rbp-458h] BYREF
  _QWORD v17[50]; // [rsp+410h] [rbp-3C0h] BYREF
  _QWORD __srca[50]; // [rsp+5A0h] [rbp-230h] BYREF
  _QWORD v19[2]; // [rsp+730h] [rbp-A0h] BYREF
  size_t __n; // [rsp+740h] [rbp-90h]
  __int64 v21; // [rsp+748h] [rbp-88h] BYREF
  __int64 v22; // [rsp+750h] [rbp-80h]
  char *v23; // [rsp+758h] [rbp-78h]
  __int64 v24; // [rsp+760h] [rbp-70h]
  _BYTE *v25; // [rsp+768h] [rbp-68h]
  __int64 *v26; // [rsp+770h] [rbp-60h]
  __int64 v27; // [rsp+778h] [rbp-58h]
  void *v28; // [rsp+788h] [rbp-48h]
  __int64 v29; // [rsp+790h] [rbp-40h] BYREF
  __int64 v30; // [rsp+798h] [rbp-38h]
  __int64 v31; // [rsp+7A0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f7ae9*/
  v2 = __src + 520; /*0x1006f7aee*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1006f7b04*/
  v31 = *((_QWORD *)__src + 117); /*0x1006f7b10*/
  v3 = *((_QWORD *)__src + 115); /*0x1006f7b14*/
  v30 = *((_QWORD *)__src + 116); /*0x1006f7b22*/
  v29 = v3; /*0x1006f7b26*/
  v27 = 0; /*0x1006f7b2a*/
  v21 = (__int64)"focus_main_windowhotspot_readyupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006f7b39*/
  v22 = 17; /*0x1006f7b40*/
  v23 = "appstarted"; /*0x1006f7b4f*/
  v24 = 3; /*0x1006f7b53*/
  v25 = __dst; /*0x1006f7b5b*/
  v26 = &v29; /*0x1006f7b63*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(__srca); /*0x1006f7b78*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1006f7b8e*/
  {
    memcpy(v16, __srca, sizeof(v16)); /*0x1006f7c2e*/
    codexmate_lib::commands::hotspot::focus_main_window::h7a8a88fc5bf763af(v19, v16); /*0x1006f7c3d*/
    memcpy(__srca, v2, sizeof(__srca)); /*0x1006f7c51*/
    v5 = v19[0]; /*0x1006f7c56*/
    if ( v19[0] == 0x8000000000000000LL ) /*0x1006f7c60*/
    {
      LOBYTE(v21) = 6; /*0x1006f7c62*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::he92e07bdbef96a86(v2); /*0x1006f7d03*/
      goto LABEL_16; /*0x1006f7d0d*/
    }
    v6 = __n; /*0x1006f7c75*/
    v28 = (void *)v19[1]; /*0x1006f7c7f*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f7c83*/
    {
      v7 = 0; /*0x1006f7c85*/
      goto LABEL_7; /*0x1006f7c85*/
    }
    if ( __n ) /*0x1006f7c95*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, v2, v4); /*0x1006f7c97*/
      v7 = 1; /*0x1006f7c9c*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006f7caa*/
      if ( !v8 ) /*0x1006f7cb2*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006f7c88*/
      v9 = v8; /*0x1006f7cb4*/
    }
    else
    {
      v9 = 1; /*0x1006f7cb9*/
    }
    v10 = v28; /*0x1006f7cc2*/
    memcpy((void *)v9, v28, v6); /*0x1006f7ccc*/
    if ( v5 ) /*0x1006f7cd4*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v5, 1); /*0x1006f7ce1*/
    LOBYTE(v21) = 3; /*0x1006f7ce6*/
    v22 = v6; /*0x1006f7ced*/
    v23 = (char *)v9; /*0x1006f7cf1*/
    v24 = v6; /*0x1006f7cf5*/
    goto LABEL_15; /*0x1006f7cf5*/
  }
  v25 = (_BYTE *)__srca[4]; /*0x1006f7b9b*/
  v24 = __srca[3]; /*0x1006f7ba6*/
  v23 = (char *)__srca[2]; /*0x1006f7bb8*/
  v22 = __srca[1]; /*0x1006f7bbc*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x1006f7bd2*/
  v21 = 1; /*0x1006f7bf3*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f7c0e*/
    v14,
    v17[48],
    &v21,
    __src + 880,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_16:
  if ( v29 != 0x8000000000000000LL ) /*0x1006f7d16*/
  {
    v11 = v30; /*0x1006f7d18*/
    for ( i = v31 + 1; i != 1; --i ) /*0x1006f7d20*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f7d3d*/
      v11 += 96; /*0x1006f7d42*/
    }
    if ( v29 ) /*0x1006f7d4e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 96 * v29, 8); /*0x1006f7d61*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f7d72*/
}