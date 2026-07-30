// __ZN13codexmate_lib4core5relay16codex_diagnostic30prepare_orphan_thread_adoption28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10024d710 | 1.2.4 NEW-delta
void *__fastcall codexmate_lib::core::relay::codex_diagnostic::prepare_orphan_thread_adoption::_$u7b$$u7b$closure$u7d$$u7d$::h2329b9aa67ac5f49(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x10024d719*/
  result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x10024d728*/
  if ( !result ) /*0x10024d730*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x10024d795*/
  qmemcpy(result, "rollout has no database owner", 29); /*0x10024d766*/
  a1[1] = 29; /*0x10024d769*/
  a1[2] = result; /*0x10024d771*/
  a1[3] = 29; /*0x10024d775*/
  *a1 = 9; /*0x10024d77d*/
  return result; /*0x10024d788*/
}