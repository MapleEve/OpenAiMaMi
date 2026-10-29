// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h581bf6870e04ca5d; addr: 0x1006f8080; session: <审计会话>; decompiled_at: 2026-10-26T03:22:24Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h581bf6870e04ca5d(
        char *__src,
        double a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rdi
  _BYTE v7[400]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE __dst[528]; // [rsp+190h] [rbp-270h] BYREF
  __int64 v9; // [rsp+3A0h] [rbp-60h]
  __int64 v10; // [rsp+3A8h] [rbp-58h]
  __int64 v11; // [rsp+3B0h] [rbp-50h]
  _QWORD v12[3]; // [rsp+3B8h] [rbp-48h] BYREF
  __int64 v13; // [rsp+3D0h] [rbp-30h]

  memcpy(__dst, __src, 0x208u); /*0x1006f80a6*/
  memcpy(v7, __src + 520, sizeof(v7)); /*0x1006f80c2*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f80cf*/
  v13 = *((_QWORD *)__src + 116); /*0x1006f80df*/
  v3 = *((_QWORD *)__src + 117); /*0x1006f80e3*/
  codexmate_lib::core::debug_bundle::default_bundle_file_name::h9103d7786b1194b3(v12); /*0x1006f80f1*/
  v11 = v12[2]; /*0x1006f80fa*/
  v10 = v12[1]; /*0x1006f8106*/
  v9 = v12[0]; /*0x1006f810a*/
  __dst[520] = 6; /*0x1006f810e*/
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h700233aea68bc06a(__src + 520); /*0x1006f811b*/
  if ( !__OFSUB__(-v2, 1) ) /*0x1006f8126*/
  {
    v4 = v3 + 1; /*0x1006f8128*/
    v5 = v13; /*0x1006f812b*/
    while ( v4 != 1 ) /*0x1006f8134*/
    {
      --v4; /*0x1006f813a*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f813d*/
      v5 += 96; /*0x1006f8142*/
    }
    if ( v2 ) /*0x1006f814a*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 96 * v2, 8); /*0x1006f815e*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f816f*/
}