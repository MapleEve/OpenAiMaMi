// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h461c1916deb3f2af; addr: 0x1006f6000; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h461c1916deb3f2af(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  __int64 v4; // r12
  void *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r14
  const void *v8; // rbx
  size_t v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+8h] [rbp-908h] BYREF
  _BYTE v17[360]; // [rsp+170h] [rbp-7A0h] BYREF
  _QWORD __dst[65]; // [rsp+2D8h] [rbp-638h] BYREF
  _QWORD v19[50]; // [rsp+4E0h] [rbp-430h] BYREF
  _QWORD v20[10]; // [rsp+670h] [rbp-2A0h] BYREF
  _QWORD v21[50]; // [rsp+6C0h] [rbp-250h] BYREF
  _QWORD v22[10]; // [rsp+850h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+8A0h] [rbp-70h] BYREF
  __int64 v24; // [rsp+8A8h] [rbp-68h]
  __int64 v25; // [rsp+8B0h] [rbp-60h]
  __int64 v26; // [rsp+8B8h] [rbp-58h]
  __int64 v27; // [rsp+8C0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+8C8h] [rbp-48h]
  __int64 v29; // [rsp+8D0h] [rbp-40h]
  void *__srca; // [rsp+8D8h] [rbp-38h]
  int v31; // [rsp+8E4h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f6029*/
  __srca = __src + 520; /*0x1006f6041*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1006f6045*/
  v29 = *((_QWORD *)__src + 117); /*0x1006f6051*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f6055*/
  v28 = *((_QWORD *)__src + 116); /*0x1006f6063*/
  v27 = v2; /*0x1006f6067*/
  v21[6] = 0; /*0x1006f606b*/
  v21[0] = &xmmword_1016FFC10; /*0x1006f607d*/
  v21[1] = 16; /*0x1006f6084*/
  v3 = &unk_1017832DF; /*0x1006f608f*/
  v21[2] = &unk_1017832DF; /*0x1006f6096*/
  v21[3] = 12; /*0x1006f609d*/
  v21[4] = __dst; /*0x1006f60a8*/
  v21[5] = &v27; /*0x1006f60b3*/
  LOBYTE(v3) = 1; /*0x1006f60c5*/
  v31 = (int)v3; /*0x1006f60c7*/
  v4 = tauri::state::StateManager::try_get::h7aded0c5892c0acf(__dst[64] + 16LL, a2); /*0x1006f60cf*/
  if ( !v4 ) /*0x1006f60d5*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f60e9*/
      &v23,
      v21,
      &v21[2]);
    if ( (_BYTE)v23 != 6 ) /*0x1006f60f2*/
    {
      v21[4] = v26; /*0x1006f6283*/
      v21[3] = v25; /*0x1006f628e*/
      v21[2] = v24; /*0x1006f629d*/
      v21[1] = v23; /*0x1006f62a4*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1006f62be*/
      v21[0] = 1; /*0x1006f62df*/
      v31 = 0; /*0x1006f62ea*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f62fe*/
        v17,
        v19[48],
        v21,
        __src + 880,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_21; /*0x1006f62fe*/
    }
    v4 = v24; /*0x1006f60f8*/
  }
  v21[6] = 0; /*0x1006f60fc*/
  v21[0] = &xmmword_1016FFC10; /*0x1006f6107*/
  v21[1] = 16; /*0x1006f610e*/
  v21[2] = &anon_1d5e2ba954832094e55fcdce7f3204cb_472; /*0x1006f6120*/
  v21[3] = 7; /*0x1006f6127*/
  v21[4] = __dst; /*0x1006f6132*/
  v21[5] = &v27; /*0x1006f6139*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h84e3518ea2010953(v22, v21); /*0x1006f614e*/
  if ( LOBYTE(v22[0]) == 6 ) /*0x1006f615a*/
  {
    codexmate_lib::commands::system::set_image_compat::h7a0d44715a0445c2(v20, v4, BYTE1(v22[0])); /*0x1006f616d*/
    v5 = __srca; /*0x1006f617e*/
    memcpy(v21, __srca, sizeof(v21)); /*0x1006f6185*/
    if ( v20[0] == 0x8000000000000000LL ) /*0x1006f619b*/
    {
      v7 = v20[1]; /*0x1006f61a1*/
      v8 = (const void *)v20[2]; /*0x1006f61a8*/
      v9 = v20[3]; /*0x1006f61af*/
      if ( v20[3] < 0LL ) /*0x1006f61b9*/
      {
        v10 = 0; /*0x1006f61bf*/
        goto LABEL_8; /*0x1006f61bf*/
      }
      if ( v20[3] ) /*0x1006f6312*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, __srca, v6); /*0x1006f6314*/
        v10 = 1; /*0x1006f6319*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1006f6327*/
        if ( !v11 ) /*0x1006f632f*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1006f61c2*/
        v12 = v11; /*0x1006f6335*/
        v5 = __srca; /*0x1006f6338*/
      }
      else
      {
        v12 = 1; /*0x1006f633e*/
      }
      memcpy((void *)v12, v8, v9); /*0x1006f634d*/
      if ( v7 ) /*0x1006f6355*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1006f6362*/
      LOBYTE(v22[1]) = 3; /*0x1006f6367*/
      v22[2] = v9; /*0x1006f636e*/
      v22[3] = v12; /*0x1006f6375*/
      v22[4] = v9; /*0x1006f637c*/
      v22[0] = 0x8000000000000000LL; /*0x1006f638d*/
    }
    else
    {
      qmemcpy(v22, v20, sizeof(v22)); /*0x1006f6277*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h4e4e1cead659ac64(v5); /*0x1006f639e*/
  }
  else
  {
    v21[4] = v22[3]; /*0x1006f61d6*/
    v21[3] = v22[2]; /*0x1006f61e4*/
    v21[2] = v22[1]; /*0x1006f61f9*/
    v21[1] = v22[0]; /*0x1006f6200*/
    memcpy(v16, __srca, sizeof(v16)); /*0x1006f621a*/
    v21[0] = 1; /*0x1006f623b*/
    v31 = 0; /*0x1006f6246*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f625a*/
      v16,
      v19[48],
      v21,
      __src + 880,
      LODWORD(v19[49]),
      HIDWORD(v19[49]));
  }
LABEL_21:
  if ( v27 != 0x8000000000000000LL ) /*0x1006f63a7*/
  {
    v13 = v28; /*0x1006f63a9*/
    for ( i = v29 + 1; i != 1; --i ) /*0x1006f63b1*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f63cd*/
      v13 += 96; /*0x1006f63d2*/
    }
    if ( v27 ) /*0x1006f63de*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 96 * v27, 8); /*0x1006f63f1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f6402*/
}