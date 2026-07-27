// __ZN13codexmate_lib8platform9debug_log15rotate_if_large @ 0x100916f10 | 基线 same-set
double __fastcall codexmate_lib::platform::debug_log::rotate_if_large::hac9f9be774bd6423(void *__src, size_t __n)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rsi
  double result; // xmm0_8
  void *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  _BYTE v12[8]; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+8h] [rbp-C8h]
  unsigned __int64 v14; // [rsp+68h] [rbp-68h]
  __int64 v15; // [rsp+98h] [rbp-38h] BYREF
  void *v16; // [rsp+A0h] [rbp-30h]
  size_t v17; // [rsp+A8h] [rbp-28h]

  std::sys::fs::metadata::h32fa16d3052ea535(v12, __src, __n); /*0x100916f35*/
  if ( v12[0] ) /*0x100916f41*/
  {
    if ( (v13 & 3) == 1 ) /*0x100916f52*/
    {
      v2 = v13 - 1; /*0x100916f58*/
      v3 = *(_QWORD *)(v13 - 1); /*0x100916f5c*/
      v4 = *(_QWORD *)(v13 + 7); /*0x100916f60*/
      if ( *(_QWORD *)v4 ) /*0x100916f64*/
        (*(void (__fastcall **)(__int64))v4)(v3); /*0x100916f70*/
      v5 = *(_QWORD *)(v4 + 8); /*0x100916f72*/
      if ( v5 ) /*0x100916f7a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x100916f84*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24, 8); /*0x100916fa5*/
    }
  }
  else if ( v14 >= 0x800001 ) /*0x100916fb2*/
  {
    std::path::Path::_with_extension::hcb726c8e846e50fc(&v15, __src, __n, "log.1~", 5); /*0x100916fcb*/
    v7 = v16; /*0x100916fd0*/
    v8 = std::sys::fs::rename::h7934e6142c921014(__src, __n, v16, v17); /*0x100916fe6*/
    if ( v15 ) /*0x100916ff0*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v15, 1); /*0x100916ffa*/
    if ( (v8 & 3) == 1 ) /*0x100917007*/
    {
      v9 = *(_QWORD *)(v8 - 1); /*0x10091701f*/
      v10 = *(_QWORD *)(v8 + 7); /*0x100917023*/
      if ( *(_QWORD *)v10 ) /*0x100917027*/
        (*(void (__fastcall **)(_QWORD))v10)(*(_QWORD *)(v8 - 1)); /*0x100917033*/
      v11 = *(_QWORD *)(v10 + 8); /*0x100917035*/
      if ( v11 ) /*0x10091703d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16)); /*0x100917047*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8 - 1, 24, 8); /*0x100917059*/
    }
  }
  return result; /*0x100916f96*/
}