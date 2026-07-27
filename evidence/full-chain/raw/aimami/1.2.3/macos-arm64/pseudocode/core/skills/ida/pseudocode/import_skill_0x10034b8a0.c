// __ZN13codexmate_lib4core6skills12import_skill28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10034b8a0 | 基线 same-set
void *__fastcall codexmate_lib::core::skills::import_skill::_$u7b$$u7b$closure$u7d$$u7d$::hdb9cb19a800d8238(
        _QWORD *a1,
        __int64 a2)
{
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10034b8a9*/
  result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x10034b8b8*/
  if ( !result ) /*0x10034b8c0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x10034b910*/
  qmemcpy(result, "Invalid skill source", 20); /*0x10034b8da*/
  a1[1] = 20; /*0x10034b8e4*/
  a1[2] = result; /*0x10034b8ec*/
  a1[3] = 20; /*0x10034b8f0*/
  *a1 = 9; /*0x10034b8f8*/
  return result; /*0x10034b903*/
}