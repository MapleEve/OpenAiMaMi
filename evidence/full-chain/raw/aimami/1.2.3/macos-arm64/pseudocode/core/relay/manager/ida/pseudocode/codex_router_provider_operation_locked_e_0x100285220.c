// __ZN13codexmate_lib4core5relay7manager44codex_router_provider_operation_locked_error @ 0x100285220 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::manager::codex_router_provider_operation_locked_error::h60ede02d74b2a292(
        _QWORD *a1,
        __int64 a2)
{
  void *v2; // rax
  void *v3; // r14
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10028522a*/
  v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(107, 1); /*0x100285239*/
  if ( !v2 ) /*0x100285241*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 107); /*0x100285284*/
  v3 = v2; /*0x100285243*/
  result = memcpy(v2, &unk_1015DEC2E, 0x6Bu); /*0x100285255*/
  a1[1] = 107; /*0x10028525a*/
  a1[2] = v3; /*0x100285262*/
  a1[3] = 107; /*0x100285266*/
  *a1 = 10; /*0x10028526e*/
  return result; /*0x100285275*/
}