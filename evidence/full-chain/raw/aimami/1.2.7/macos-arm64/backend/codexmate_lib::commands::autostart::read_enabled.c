// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::autostart::read_enabled::h6a5ab60549540c25; addr: 0x10039fa40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
unsigned __int64 __fastcall codexmate_lib::commands::autostart::read_enabled::h6a5ab60549540c25(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(); // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(); // rdi
  _QWORD v12[2]; // [rsp+8h] [rbp-78h] BYREF
  void **v13; // [rsp+18h] [rbp-68h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+20h] [rbp-60h]
  __int64 v15; // [rsp+28h] [rbp-58h]
  void *v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  void **v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]

  v3 = tauri::state::StateManager::try_get::hbf7082e2b678b07a(*(_QWORD *)(a2 + 4872) + 16LL); /*0x10039fa5d*/
  if ( !v3 ) /*0x10039fa65*/
  {
    v16 = &anon_1d5e2ba954832094e55fcdce7f3204cb_1781; /*0x10039fb6e*/
    v17 = 41; /*0x10039fb72*/
    v19 = &v16; /*0x10039fb7e*/
    v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x10039fb89*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x10039fb9f*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      &v19,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  tauri_plugin_autostart::AutoLaunchManager::is_enabled::h511e0d2299b67eee(&v13, v3); /*0x10039fa7c*/
  if ( v13 == (void **)0x8000000000000001LL ) /*0x10039fa89*/
  {
    result = (unsigned __int8)v14; /*0x10039fa8b*/
    *(_BYTE *)(a1 + 8) = (_BYTE)v14; /*0x10039fa8f*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10039fa92*/
    return result; /*0x10039fa95*/
  }
  v21 = v15; /*0x10039fa9e*/
  v20 = v14; /*0x10039faaa*/
  v19 = v13; /*0x10039faae*/
  v12[0] = &v19; /*0x10039fab6*/
  v12[1] = _$LT$tauri_plugin_autostart..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8e0129bcf871b870; /*0x10039fac1*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v16, &unk_1018F6554, v12); /*0x10039fad4*/
  v5 = (__int64)v19; /*0x10039fad9*/
  if ( v19 == (void **)0x8000000000000000LL ) /*0x10039fae0*/
  {
    if ( ((unsigned __int8)v20 & 3) == 1 ) /*0x10039faee*/
    {
      v6 = (__int64 (__fastcall *)())((char *)v20 - 1); /*0x10039faf0*/
      v7 = *(_QWORD *)((char *)v20 - 1); /*0x10039faf4*/
      v8 = *(_QWORD *)((char *)v20 + 7); /*0x10039faf8*/
      if ( *(_QWORD *)v8 ) /*0x10039fafc*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x10039fb08*/
      v9 = *(_QWORD *)(v8 + 8); /*0x10039fb0a*/
      if ( v9 ) /*0x10039fb12*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x10039fb1c*/
      v5 = 24; /*0x10039fb21*/
      v10 = 8; /*0x10039fb26*/
      v11 = v6; /*0x10039fb2b*/
      goto LABEL_13; /*0x10039fb2e*/
    }
  }
  else if ( v19 ) /*0x10039fb33*/
  {
    v11 = v20; /*0x10039fb35*/
    v10 = 1; /*0x10039fb39*/
LABEL_13:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v5, v10); /*0x10039fb3e*/
  }
  *(_QWORD *)(a1 + 16) = v18; /*0x10039fb43*/
  result = (unsigned __int64)v16; /*0x10039fb4b*/
  *(_QWORD *)(a1 + 8) = v17; /*0x10039fb53*/
  *(_QWORD *)a1 = result; /*0x10039fb57*/
  return result; /*0x10039fb5a*/
}