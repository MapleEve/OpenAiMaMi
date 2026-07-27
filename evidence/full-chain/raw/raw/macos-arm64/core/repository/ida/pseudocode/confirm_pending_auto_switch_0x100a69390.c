// __ZN13codexmate_lib4core10repository10Repository27confirm_pending_auto_switch28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100a69390
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void *__fastcall codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::_$u7b$$u7b$closure$u7d$$u7d$::hbb0f7df2484972fe(
        signed __int64 *a1,
        const void *a2,
        signed __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  void *result; // rax

  if ( a3 < 0 ) /*0x100a693a4*/
  {
    v4 = 0; /*0x100a693a6*/
    goto LABEL_3; /*0x100a693a6*/
  }
  if ( a3 ) /*0x100a693b7*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100a693bc*/
    v4 = 1; /*0x100a693c1*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100a693cf*/
    if ( !v5 ) /*0x100a693d7*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a3); /*0x100a693a9*/
    v6 = v5; /*0x100a693d9*/
  }
  else
  {
    v6 = 1; /*0x100a693e1*/
  }
  result = memcpy((void *)v6, a2, a3); /*0x100a693ed*/
  *a1 = a3; /*0x100a693f2*/
  a1[1] = v6; /*0x100a693f5*/
  a1[2] = a3; /*0x100a693f9*/
  return result; /*0x100a69401*/
}