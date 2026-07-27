// __ZN13codexmate_lib4core5relay17router_reconciler12RouterOnPlan12ensure_ready @ 0x100324d00 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::router_reconciler::RouterOnPlan::ensure_ready::h88df491b94405864(
        _QWORD *a1,
        __int64 a2)
{
  void *v2; // rax
  void *v3; // r14

  if ( *(_QWORD *)(a2 + 16) && *(_QWORD *)(a2 + 40) ) /*0x100324d11*/
  {
    *a1 = 11; /*0x100324d18*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100324d21*/
    v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(157, 1); /*0x100324d30*/
    if ( !v2 ) /*0x100324d38*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 157); /*0x100324d7e*/
    v3 = v2; /*0x100324d3a*/
    memcpy(v2, &anon_b0ee9adff4519c22b647af231a5a39fa_171, 0x9Du); /*0x100324d4c*/
    *a1 = 10; /*0x100324d51*/
    a1[1] = 157; /*0x100324d58*/
    a1[2] = v3; /*0x100324d60*/
    a1[3] = 157; /*0x100324d64*/
  }
  return a1; /*0x100324d6f*/
}