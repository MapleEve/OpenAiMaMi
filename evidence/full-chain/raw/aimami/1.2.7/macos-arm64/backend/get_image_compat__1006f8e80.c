// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h5a31b4a9b4145185; addr: 0x1006f8e80; session: <审计会话>; decompiled_at: 2026-10-26T03:22:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h5a31b4a9b4145185(
        char *__src,
        double a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rdx
  size_t v6; // r14
  __int64 v7; // r12
  __int64 v8; // rax
  void *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rdi
  _BYTE v13[400]; // [rsp+8h] [rbp-618h] BYREF
  _BYTE v14[400]; // [rsp+198h] [rbp-488h] BYREF
  _BYTE __dst[520]; // [rsp+328h] [rbp-2F8h] BYREF
  _QWORD v16[10]; // [rsp+530h] [rbp-F0h] BYREF
  _QWORD v17[10]; // [rsp+580h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+5D0h] [rbp-50h]
  __int64 v19; // [rsp+5D8h] [rbp-48h]
  __int64 v20; // [rsp+5E0h] [rbp-40h]
  void *__srca; // [rsp+5E8h] [rbp-38h]
  __int64 v22; // [rsp+5F0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f8ea6*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x1006f8ec1*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f8ec6*/
  v3 = *((_QWORD *)__src + 116); /*0x1006f8ecd*/
  v4 = *((_QWORD *)__src + 117); /*0x1006f8ed4*/
  codexmate_lib::commands::system::get_image_compat::hdfd96849bd72fff1(v16); /*0x1006f8ee2*/
  memcpy(v13, __src + 520, sizeof(v13)); /*0x1006f8ef6*/
  if ( __OFSUB__(0, v16[0]) ) /*0x1006f8efd*/
  {
    v22 = v2; /*0x1006f8f06*/
    v20 = v16[1]; /*0x1006f8f11*/
    __srca = (void *)v16[2]; /*0x1006f8f1c*/
    v6 = v16[3]; /*0x1006f8f20*/
    if ( v16[3] < 0LL ) /*0x1006f8f2a*/
    {
      v7 = 0; /*0x1006f8f2c*/
      goto LABEL_4; /*0x1006f8f2c*/
    }
    v18 = v3; /*0x1006f8f57*/
    if ( v16[3] ) /*0x1006f8f5b*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, __src + 520, v5); /*0x1006f8f5d*/
      v7 = 1; /*0x1006f8f62*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006f8f70*/
      if ( !v8 ) /*0x1006f8f78*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006f8f2f*/
    }
    else
    {
      v8 = 1; /*0x1006f8f7c*/
    }
    v19 = v8; /*0x1006f8f81*/
    v9 = __srca; /*0x1006f8f88*/
    memcpy((void *)v8, __srca, v6); /*0x1006f8f92*/
    if ( v20 ) /*0x1006f8f9e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v20, 1); /*0x1006f8fa8*/
    LOBYTE(v17[1]) = 3; /*0x1006f8fad*/
    v17[2] = v6; /*0x1006f8fb4*/
    v17[3] = v19; /*0x1006f8fbf*/
    v17[4] = v6; /*0x1006f8fc6*/
    v17[0] = 0x8000000000000000LL; /*0x1006f8fd4*/
    v2 = v22; /*0x1006f8fdb*/
    v3 = v18; /*0x1006f8fdf*/
  }
  else
  {
    qmemcpy(v17, v16, sizeof(v17)); /*0x1006f8f4f*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h4e4e1cead659ac64(__src + 520); /*0x1006f8fed*/
  if ( v2 != 0x8000000000000000LL ) /*0x1006f8fff*/
  {
    v10 = v4 + 1; /*0x1006f9001*/
    v11 = v3; /*0x1006f9004*/
    while ( v10 != 1 ) /*0x1006f9014*/
    {
      --v10; /*0x1006f901a*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f901d*/
      v11 += 96; /*0x1006f9022*/
    }
    if ( v2 ) /*0x1006f902a*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 96 * v2, 8); /*0x1006f903c*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f904d*/
}