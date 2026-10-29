// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfaac2f79b9d2dc54; addr: 0x100705c60; session: <审计会话>; decompiled_at: 2026-10-26T03:22:30Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfaac2f79b9d2dc54(
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
  __int64 v19; // [rsp+730h] [rbp-A0h] BYREF
  void *v20; // [rsp+738h] [rbp-98h]
  size_t __n; // [rsp+740h] [rbp-90h]
  __int64 v22; // [rsp+748h] [rbp-88h] BYREF
  __int64 v23; // [rsp+750h] [rbp-80h]
  char *v24; // [rsp+758h] [rbp-78h]
  __int64 v25; // [rsp+760h] [rbp-70h]
  _BYTE *v26; // [rsp+768h] [rbp-68h]
  __int64 *v27; // [rsp+770h] [rbp-60h]
  __int64 v28; // [rsp+778h] [rbp-58h]
  void *v29; // [rsp+788h] [rbp-48h]
  __int64 v30; // [rsp+790h] [rbp-40h] BYREF
  __int64 v31; // [rsp+798h] [rbp-38h]
  __int64 v32; // [rsp+7A0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x100705c89*/
  v2 = __src + 520; /*0x100705c8e*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x100705ca4*/
  v32 = *((_QWORD *)__src + 117); /*0x100705cb0*/
  v3 = *((_QWORD *)__src + 115); /*0x100705cb4*/
  v31 = *((_QWORD *)__src + 116); /*0x100705cc2*/
  v30 = v3; /*0x100705cc6*/
  v28 = 0; /*0x100705cca*/
  v22 = (__int64)"has_notchget_hotspot_enabledset_hotspot_enabledfocus_main_windowhotspot_readyupsert_relay_providerdelet" /*0x100705cd9*/
                 "e_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers";
  v23 = 9; /*0x100705ce0*/
  v24 = "appstarted"; /*0x100705cef*/
  v25 = 3; /*0x100705cf3*/
  v26 = __dst; /*0x100705cfb*/
  v27 = &v30; /*0x100705d03*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(__srca); /*0x100705d18*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x100705d2e*/
  {
    memcpy(v16, __srca, sizeof(v16)); /*0x100705dce*/
    codexmate_lib::commands::hotspot::has_notch::h9b22d67b9af6f2d7(&v19, v16); /*0x100705ddd*/
    memcpy(__srca, v2, sizeof(__srca)); /*0x100705df1*/
    v5 = v19; /*0x100705df6*/
    if ( v19 == 0x8000000000000000LL ) /*0x100705e00*/
    {
      BYTE1(v22) = (_BYTE)v20; /*0x100705e09*/
      LOBYTE(v22) = 6; /*0x100705e0f*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hba67ea4134f24302(v2); /*0x100705eb0*/
      goto LABEL_16; /*0x100705eba*/
    }
    v6 = __n; /*0x100705e22*/
    v29 = v20; /*0x100705e2c*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100705e30*/
    {
      v7 = 0; /*0x100705e32*/
      goto LABEL_7; /*0x100705e32*/
    }
    if ( __n ) /*0x100705e42*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, v2, v4); /*0x100705e44*/
      v7 = 1; /*0x100705e49*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100705e57*/
      if ( !v8 ) /*0x100705e5f*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x100705e35*/
      v9 = v8; /*0x100705e61*/
    }
    else
    {
      v9 = 1; /*0x100705e66*/
    }
    v10 = v29; /*0x100705e6f*/
    memcpy((void *)v9, v29, v6); /*0x100705e79*/
    if ( v5 ) /*0x100705e81*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v5, 1); /*0x100705e8e*/
    LOBYTE(v22) = 3; /*0x100705e93*/
    v23 = v6; /*0x100705e9a*/
    v24 = (char *)v9; /*0x100705e9e*/
    v25 = v6; /*0x100705ea2*/
    goto LABEL_15; /*0x100705ea2*/
  }
  v26 = (_BYTE *)__srca[4]; /*0x100705d3b*/
  v25 = __srca[3]; /*0x100705d46*/
  v24 = (char *)__srca[2]; /*0x100705d58*/
  v23 = __srca[1]; /*0x100705d5c*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x100705d72*/
  v22 = 1; /*0x100705d93*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100705dae*/
    v14,
    v17[48],
    &v22,
    __src + 880,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_16:
  if ( v30 != 0x8000000000000000LL ) /*0x100705ec3*/
  {
    v11 = v31; /*0x100705ec5*/
    for ( i = v32 + 1; i != 1; --i ) /*0x100705ecd*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x100705edd*/
      v11 += 96; /*0x100705ee2*/
    }
    if ( v30 ) /*0x100705eee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 96 * v30, 8); /*0x100705f01*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100705f12*/
}