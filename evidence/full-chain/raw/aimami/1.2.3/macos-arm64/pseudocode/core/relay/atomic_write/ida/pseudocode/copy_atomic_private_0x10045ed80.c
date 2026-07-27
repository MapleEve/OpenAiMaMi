// __ZN13codexmate_lib4core5relay12atomic_write19copy_atomic_private @ 0x10045ed80
__int64 __fastcall codexmate_lib::core::relay::atomic_write::copy_atomic_private::hbdb45d0e44575629(
        __int64 a1,
        __int64 a2,
        void *a3,
        size_t a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r15
  _QWORD v10[2]; // [rsp+8h] [rbp-38h] BYREF

  std::fs::read::inner::h6a30c15c40add28b(v10, a1, a2); /*0x10045ed9f*/
  v6 = v10[0]; /*0x10045eda4*/
  v7 = v10[1]; /*0x10045eda8*/
  if ( !__OFSUB__(-v10[0], 1) ) /*0x10045edb2*/
  {
    v8 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(a3, a4); /*0x10045edcc*/
    if ( v6 ) /*0x10045edd2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x10045eddf*/
    return v8; /*0x10045ede4*/
  }
  return v7; /*0x10045edea*/
}