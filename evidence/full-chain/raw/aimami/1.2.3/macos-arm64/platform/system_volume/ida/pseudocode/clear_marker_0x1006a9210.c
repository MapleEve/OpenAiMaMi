// __ZN13codexmate_lib8platform13system_volume12clear_marker @ 0x1006a9210 | 基线 same-set
double __fastcall codexmate_lib::platform::system_volume::clear_marker::ha27159d58c68f744(double a1)
{
  double result; // xmm0_8
  void *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rsi
  _QWORD v7[93]; // [rsp+0h] [rbp-320h] BYREF
  __int64 v8; // [rsp+2E8h] [rbp-38h] BYREF
  void *__src; // [rsp+2F0h] [rbp-30h]
  size_t __n; // [rsp+2F8h] [rbp-28h]

  result = codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b(&v8, a1); /*0x1006a9229*/
  codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(v7, &v8); /*0x1006a9238*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v8, v7[43], v7[44], &anon_4776471024d1e9bb78f2861cb2b51e1e_750, 24); /*0x1006a925c*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v7); /*0x1006a9268*/
  v2 = __src; /*0x1006a926d*/
  v3 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x1006a927d*/
  if ( v8 ) /*0x1006a9287*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v8, 1); /*0x1006a9291*/
  if ( (v3 & 3) == 1 ) /*0x1006a929f*/
  {
    v4 = *(_QWORD *)(v3 - 1); /*0x1006a92b7*/
    v5 = *(_QWORD *)(v3 + 7); /*0x1006a92bb*/
    if ( *(_QWORD *)v5 ) /*0x1006a92bf*/
      (*(void (__fastcall **)(_QWORD, double))v5)(*(_QWORD *)(v3 - 1), result); /*0x1006a92cb*/
    v6 = *(_QWORD *)(v5 + 8); /*0x1006a92cd*/
    if ( v6 ) /*0x1006a92d5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x1006a92df*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3 - 1, 24, 8); /*0x1006a92f1*/
  }
  return result; /*0x1006a92a1*/
}