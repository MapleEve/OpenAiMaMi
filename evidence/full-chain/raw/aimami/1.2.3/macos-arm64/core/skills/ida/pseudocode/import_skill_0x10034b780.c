// __ZN13codexmate_lib4core6skills12import_skill28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10034b780 | 基线 same-set
__int64 __fastcall codexmate_lib::core::skills::import_skill::_$u7b$$u7b$closure$u7d$$u7d$::h1719e62e9aecf7ae(
        size_t *a1,
        const void *a2,
        size_t a3,
        __int64 a4)
{
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi

  if ( a3 ) /*0x10034b79f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10034b7a4*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x10034b7b9*/
    if ( !v6 ) /*0x10034b7bf*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x10034b7c9*/
  }
  else
  {
    v6 = 1; /*0x10034b7d0*/
  }
  memcpy((void *)v6, a2, a3); /*0x10034b7dc*/
  *a1 = a3; /*0x10034b7e1*/
  a1[1] = v6; /*0x10034b7e4*/
  a1[2] = a3; /*0x10034b7e8*/
  result = a4 & 3; /*0x10034b7ef*/
  if ( (_DWORD)result == 1 ) /*0x10034b7f5*/
  {
    v8 = *(_QWORD *)(a4 - 1); /*0x10034b808*/
    v9 = *(_QWORD *)(a4 + 7); /*0x10034b80c*/
    if ( *(_QWORD *)v9 ) /*0x10034b810*/
      (*(void (__fastcall **)(_QWORD))v9)(*(_QWORD *)(a4 - 1)); /*0x10034b81c*/
    v10 = *(_QWORD *)(v9 + 8); /*0x10034b81e*/
    if ( v10 ) /*0x10034b826*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x10034b830*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4 - 1, 24, 8); /*0x10034b84e*/
  }
  return result; /*0x10034b7f7*/
}