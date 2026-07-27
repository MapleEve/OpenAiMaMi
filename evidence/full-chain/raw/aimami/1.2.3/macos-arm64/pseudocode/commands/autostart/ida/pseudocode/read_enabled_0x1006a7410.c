// __ZN13codexmate_lib8commands9autostart12read_enabled @ 0x1006a7410
unsigned __int64 __fastcall codexmate_lib::commands::autostart::read_enabled::ha4e465ff69e6af59(__int64 a1, __int64 a2)
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

  v3 = tauri::state::StateManager::try_get::hc83b298ea759c550(*(_QWORD *)(a2 + 4872) + 16LL); /*0x1006a742d*/
  if ( !v3 ) /*0x1006a7435*/
  {
    v16 = &anon_0df76e0cec988e6dc281ac0519b88803_1035; /*0x1006a753e*/
    v17 = 41; /*0x1006a7542*/
    v19 = &v16; /*0x1006a754e*/
    v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a7559*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006a756f*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v19,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  tauri_plugin_autostart::AutoLaunchManager::is_enabled::h511e0d2299b67eee(&v13, v3); /*0x1006a744c*/
  if ( v13 == (void **)0x8000000000000001LL ) /*0x1006a7459*/
  {
    result = (unsigned __int8)v14; /*0x1006a745b*/
    *(_BYTE *)(a1 + 8) = (_BYTE)v14; /*0x1006a745f*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006a7462*/
    return result; /*0x1006a7465*/
  }
  v21 = v15; /*0x1006a746e*/
  v20 = v14; /*0x1006a747a*/
  v19 = v13; /*0x1006a747e*/
  v12[0] = &v19; /*0x1006a7486*/
  v12[1] = _$LT$tauri_plugin_autostart..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8e0129bcf871b870; /*0x1006a7491*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v16, &unk_1017C37EE, v12); /*0x1006a74a4*/
  v5 = (__int64)v19; /*0x1006a74a9*/
  if ( v19 == (void **)0x8000000000000000LL ) /*0x1006a74b0*/
  {
    if ( ((unsigned __int8)v20 & 3) == 1 ) /*0x1006a74be*/
    {
      v6 = (__int64 (__fastcall *)())((char *)v20 - 1); /*0x1006a74c0*/
      v7 = *(_QWORD *)((char *)v20 - 1); /*0x1006a74c4*/
      v8 = *(_QWORD *)((char *)v20 + 7); /*0x1006a74c8*/
      if ( *(_QWORD *)v8 ) /*0x1006a74cc*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x1006a74d8*/
      v9 = *(_QWORD *)(v8 + 8); /*0x1006a74da*/
      if ( v9 ) /*0x1006a74e2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x1006a74ec*/
      v5 = 24; /*0x1006a74f1*/
      v10 = 8; /*0x1006a74f6*/
      v11 = v6; /*0x1006a74fb*/
      goto LABEL_13; /*0x1006a74fe*/
    }
  }
  else if ( v19 ) /*0x1006a7503*/
  {
    v11 = v20; /*0x1006a7505*/
    v10 = 1; /*0x1006a7509*/
LABEL_13:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v5, v10); /*0x1006a750e*/
  }
  *(_QWORD *)(a1 + 16) = v18; /*0x1006a7513*/
  result = (unsigned __int64)v16; /*0x1006a751b*/
  *(_QWORD *)(a1 + 8) = v17; /*0x1006a7523*/
  *(_QWORD *)a1 = result; /*0x1006a7527*/
  return result; /*0x1006a752a*/
}