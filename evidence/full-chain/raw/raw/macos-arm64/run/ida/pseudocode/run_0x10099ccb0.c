// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099ccb0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h16f42ba3555d5e9d(
        char *__src,
        double a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdi
  _BYTE __srca[400]; // [rsp+8h] [rbp-598h] BYREF
  _BYTE v8[400]; // [rsp+198h] [rbp-408h] BYREF
  _BYTE __dst[528]; // [rsp+328h] [rbp-278h] BYREF
  __int64 v10; // [rsp+538h] [rbp-68h]
  __int64 v11; // [rsp+540h] [rbp-60h]
  __int64 v12; // [rsp+548h] [rbp-58h]
  _QWORD v13[4]; // [rsp+550h] [rbp-50h] BYREF
  __int64 v14; // [rsp+570h] [rbp-30h]

  memcpy(__dst, __src, 0x208u); /*0x10099ccd6*/
  memcpy(v8, __src + 520, sizeof(v8)); /*0x10099ccf2*/
  v13[3] = __src + 920; /*0x10099ccff*/
  v2 = *((_QWORD *)__src + 115); /*0x10099cd03*/
  v14 = *((_QWORD *)__src + 116); /*0x10099cd13*/
  v3 = *((_QWORD *)__src + 117); /*0x10099cd17*/
  codexmate_lib::core::debug_bundle::default_bundle_file_name::h2fbceb24be941039((__int64)v13); /*0x10099cd26*/
  memcpy(__srca, __src + 520, sizeof(__srca)); /*0x10099cd3d*/
  v12 = v13[2]; /*0x10099cd46*/
  v11 = v13[1]; /*0x10099cd52*/
  v10 = v13[0]; /*0x10099cd56*/
  __dst[520] = 6; /*0x10099cd5a*/
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h95a2ba7235076756(__srca); /*0x10099cd68*/
  if ( !__OFSUB__(-v2, 1) ) /*0x10099cd73*/
  {
    v4 = v3 + 1; /*0x10099cd75*/
    v5 = v14; /*0x10099cd78*/
    while ( v4 != 1 ) /*0x10099cd84*/
    {
      --v4; /*0x10099cd8a*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v5); /*0x10099cd8d*/
      v5 += 96; /*0x10099cd92*/
    }
    if ( v2 ) /*0x10099cd9a*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 96 * v2, 8); /*0x10099cdae*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099cdbf*/
}