// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he8406978b4aec3b2; addr: 0x100703450; session: <审计会话>; decompiled_at: 2026-10-26T03:22:22Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he8406978b4aec3b2(
        char *__src,
        double a2)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // r12
  size_t v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdi
  _BYTE v13[400]; // [rsp+8h] [rbp-5A8h] BYREF
  _BYTE v14[400]; // [rsp+198h] [rbp-418h] BYREF
  _BYTE __dst[520]; // [rsp+328h] [rbp-288h] BYREF
  __int64 v16; // [rsp+530h] [rbp-80h] BYREF
  void *v17; // [rsp+538h] [rbp-78h]
  size_t __n; // [rsp+540h] [rbp-70h]
  char v19; // [rsp+548h] [rbp-68h]
  char v20; // [rsp+549h] [rbp-67h]
  size_t v21; // [rsp+550h] [rbp-60h]
  __int64 v22; // [rsp+558h] [rbp-58h]
  size_t v23; // [rsp+560h] [rbp-50h]
  __int64 v24; // [rsp+568h] [rbp-48h]
  __int64 v25; // [rsp+570h] [rbp-40h]
  void *__srca; // [rsp+578h] [rbp-38h]
  __int64 v27; // [rsp+580h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x100703476*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x100703491*/
  v27 = *((_QWORD *)__src + 115); /*0x10070349d*/
  v3 = *((_QWORD *)__src + 116); /*0x1007034a1*/
  v4 = *((_QWORD *)__src + 117); /*0x1007034a8*/
  codexmate_lib::commands::account_oauth::cancel_chatgpt_oauth_login::h6d2b107baeea2ae1(&v16); /*0x1007034b3*/
  memcpy(v13, __src + 520, sizeof(v13)); /*0x1007034c7*/
  v6 = v16; /*0x1007034cc*/
  if ( __OFSUB__(-v16, 1) ) /*0x1007034d3*/
  {
    v20 = (char)v17; /*0x1007034dc*/
    v19 = 6; /*0x1007034df*/
    goto LABEL_13; /*0x1007034e3*/
  }
  v24 = v3; /*0x1007034e8*/
  __srca = v17; /*0x1007034f0*/
  v7 = __n; /*0x1007034f4*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1007034fb*/
  {
    v8 = 0; /*0x1007034fd*/
    goto LABEL_5; /*0x1007034fd*/
  }
  if ( __n ) /*0x100703509*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, __src + 520, v5); /*0x10070350b*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x100703518*/
    v8 = 1; /*0x10070351d*/
    if ( !v9 ) /*0x100703525*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1007034ff*/
  }
  else
  {
    v9 = 1; /*0x100703529*/
  }
  v25 = v9; /*0x10070352e*/
  memcpy((void *)v9, __srca, v7); /*0x10070353c*/
  if ( v6 ) /*0x100703544*/
    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__srca, v6, 1); /*0x100703552*/
  v19 = 3; /*0x100703557*/
  v21 = v7; /*0x10070355b*/
  v22 = v25; /*0x100703563*/
  v23 = v7; /*0x100703567*/
  v3 = v24; /*0x10070356b*/
LABEL_13:
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::hba67ea4134f24302(__src + 520); /*0x10070356f*/
  if ( v27 != 0x8000000000000000LL ) /*0x100703589*/
  {
    v10 = v4 + 1; /*0x10070358b*/
    v11 = v3; /*0x10070358e*/
    while ( v10 != 1 ) /*0x1007035a4*/
    {
      --v10; /*0x1007035aa*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1007035ad*/
      v11 += 96; /*0x1007035b2*/
    }
    if ( v27 ) /*0x1007035be*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 96 * v27, 8); /*0x1007035d0*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1007035e1*/
}