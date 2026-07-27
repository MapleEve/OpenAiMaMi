// __ZN13codexmate_lib8platform5paths19harden_private_file @ 0x100544a80 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::paths::harden_private_file::h423ff868481465b0(void *__src, size_t __n)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rsi
  int v7; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+10h] [rbp-B0h]

  std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v7, __src, __n); /*0x100544aa5*/
  v2 = v8; /*0x100544aaa*/
  if ( v7 != 1 ) /*0x100544ab8*/
  {
    if ( (v8 & 0xF00000000000LL) == 0x800000000000LL ) /*0x100544b38*/
      return std::sys::fs::set_permissions::hfb7e5143e400282f(__src, __n); /*0x100544b54*/
    return 0; /*0x100544b38*/
  }
  if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v8) ) /*0x100544abd*/
  {
    if ( (v2 & 3) == 1 ) /*0x100544ad3*/
    {
      v3 = *(_QWORD *)(v2 - 1); /*0x100544add*/
      v4 = *(_QWORD *)(v2 + 7); /*0x100544ae1*/
      if ( *(_QWORD *)v4 ) /*0x100544ae5*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v2 - 1)); /*0x100544af1*/
      v5 = *(_QWORD *)(v4 + 8); /*0x100544af3*/
      if ( v5 ) /*0x100544afb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x100544b05*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2 - 1, 24, 8); /*0x100544b17*/
    }
    return 0; /*0x100544b59*/
  }
  return v2; /*0x100544b45*/
}