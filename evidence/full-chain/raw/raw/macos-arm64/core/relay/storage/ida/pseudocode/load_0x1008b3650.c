// __ZN13codexmate_lib4core5relay7storage4load28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008b3650 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::storage::load::_$u7b$$u7b$closure$u7d$$u7d$::h49c08c47ba2c2122(
        _QWORD *a1,
        __int64 a2)
{
  void *v2; // rax
  void *v3; // r14
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1008b365a*/
  v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(79, 1); /*0x1008b3669*/
  if ( !v2 ) /*0x1008b3671*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 79); /*0x1008b36b4*/
  v3 = v2; /*0x1008b3673*/
  result = memcpy(v2, &unk_101675DD4, 0x4Fu); /*0x1008b3685*/
  a1[1] = 79; /*0x1008b368a*/
  a1[2] = v3; /*0x1008b3692*/
  a1[3] = 79; /*0x1008b3696*/
  *a1 = 9; /*0x1008b369e*/
  return result; /*0x1008b36a5*/
}