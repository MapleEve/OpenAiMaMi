// __ZN13codexmate_lib4core10repository18SnapshotQuarantine5stage28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100a77cf0 | 基线 same-set
void *__fastcall codexmate_lib::core::repository::SnapshotQuarantine::stage::_$u7b$$u7b$closure$u7d$$u7d$::h9a29045394e9bfc0(
        _QWORD *a1,
        __int64 a2)
{
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100a77cf9*/
  result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100a77d08*/
  if ( !result ) /*0x100a77d10*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x100a77d75*/
  qmemcpy(result, "Account snapshot has no parent", 30); /*0x100a77d46*/
  a1[1] = 30; /*0x100a77d49*/
  a1[2] = result; /*0x100a77d51*/
  a1[3] = 30; /*0x100a77d55*/
  *a1 = 9; /*0x100a77d5d*/
  return result; /*0x100a77d68*/
}