// __ZN13codexmate_lib4core10repository18SnapshotQuarantine5stage28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100a77c60 | 基线 same-set
void *__fastcall codexmate_lib::core::repository::SnapshotQuarantine::stage::_$u7b$$u7b$closure$u7d$$u7d$::h0392ddcedbba4a79(
        _QWORD *a1,
        __int64 a2)
{
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100a77c69*/
  result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x100a77c78*/
  if ( !result ) /*0x100a77c80*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x100a77ce9*/
  qmemcpy(result, "Account snapshot has no file name", 33); /*0x100a77cb6*/
  a1[1] = 33; /*0x100a77cbd*/
  a1[2] = result; /*0x100a77cc5*/
  a1[3] = 33; /*0x100a77cc9*/
  *a1 = 9; /*0x100a77cd1*/
  return result; /*0x100a77cdc*/
}