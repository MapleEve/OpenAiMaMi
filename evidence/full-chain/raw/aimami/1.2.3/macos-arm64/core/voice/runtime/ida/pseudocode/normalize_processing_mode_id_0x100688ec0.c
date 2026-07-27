// __ZN13codexmate_lib4core5voice7runtime28normalize_processing_mode_id @ 0x100688ec0 | 基线 same-set
void *__fastcall codexmate_lib::core::voice::runtime::normalize_processing_mode_id::hecc8c93fa1ac0fb0(
        size_t *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  size_t v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  const void *v13; // r12
  void *v14; // rax
  size_t v15; // r15
  void *result; // rax

  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x100688eda*/
  if ( v9 ) /*0x100688ee2*/
  {
    v10 = v9; /*0x100688ee4*/
    if ( v9 < 0 ) /*0x100688ee7*/
    {
      v11 = 0; /*0x100688ee9*/
      goto LABEL_4; /*0x100688ee9*/
    }
    v13 = (const void *)v8; /*0x100688f38*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x100688f3b*/
    v11 = 1; /*0x100688f40*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x100688f4e*/
    if ( !v14 ) /*0x100688f56*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x100688eec*/
  }
  else
  {
    v12 = 8 * (unsigned int)a4; /*0x100688efb*/
    v10 = *(_QWORD *)((char *)&unk_101605D98 + v12); /*0x100688f05*/
    v13 = *(_UNKNOWN **)((char *)&off_1019689A8 + v12); /*0x100688f10*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x100688f14*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x100688f21*/
    if ( !v14 ) /*0x100688f29*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v10); /*0x100688f33*/
  }
  v15 = (size_t)v14; /*0x100688f58*/
  result = memcpy(v14, v13, v10); /*0x100688f64*/
  *a1 = v10; /*0x100688f69*/
  a1[1] = v15; /*0x100688f6c*/
  a1[2] = v10; /*0x100688f70*/
  return result; /*0x100688f78*/
}