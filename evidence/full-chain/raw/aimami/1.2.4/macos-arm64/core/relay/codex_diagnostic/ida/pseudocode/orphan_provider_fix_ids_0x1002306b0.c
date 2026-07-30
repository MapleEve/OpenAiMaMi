// __ZN13codexmate_lib4core5relay16codex_diagnostic23orphan_provider_fix_ids @ 0x1002306b0 | 1.2.4 NEW-delta
void *__fastcall codexmate_lib::core::relay::codex_diagnostic::orphan_provider_fix_ids::h1efc66fdabad2717(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // r15
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x1002306bd*/
  v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x1002306cc*/
  if ( !v4 ) /*0x1002306d4*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x1002307b5*/
  v7 = (_QWORD *)v4; /*0x1002306da*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 8, v5, v6); /*0x1002306dd*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1002306ec*/
  if ( !v8 ) /*0x1002306f4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1002307c4*/
  v11 = v8; /*0x1002306fa*/
  qmemcpy(v8, "db_orphan_providers", 19); /*0x100230715*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1, v9, v10); /*0x100230720*/
  result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x10023072f*/
  if ( !result ) /*0x100230737*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1002307d5*/
  qmemcpy(result, "rollout_orphan_providers", 24); /*0x100230763*/
  *v7 = 19; /*0x100230766*/
  v7[1] = v11; /*0x10023076d*/
  v7[2] = 19; /*0x100230771*/
  v7[3] = 24; /*0x100230779*/
  v7[4] = result; /*0x100230781*/
  v7[5] = 24; /*0x100230785*/
  *a1 = 2; /*0x10023078d*/
  a1[1] = v7; /*0x100230794*/
  a1[2] = 2; /*0x100230798*/
  return result; /*0x1002307a4*/
}