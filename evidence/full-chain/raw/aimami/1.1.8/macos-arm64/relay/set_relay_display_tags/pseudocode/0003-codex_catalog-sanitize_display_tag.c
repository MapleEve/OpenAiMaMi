size_t *__fastcall codexmate_lib::core::relay::codex_catalog::sanitize_display_tag::had6cfbe1f7d6dd5e(
        size_t *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rdi
  void *v7; // rax
  __int64 v8; // rdx
  size_t v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  _QWORD v14[3]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v15; // [rsp+18h] [rbp-68h] BYREF
  __int64 v16; // [rsp+20h] [rbp-60h]
  __int64 v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-40h]
  void *__src; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h]

  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hafa7bbd3f925ae96( /*0x1006832eb*/
    &v18,
    a2,
    a2 + a3);
  v22 = v19; /*0x1006832f8*/
  v14[0] = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v19, v20); /*0x100683304*/
  v14[1] = v14[0] + v4; /*0x100683308*/
  v14[2] = 4; /*0x10068330c*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0fe35e1dc24b9a0e( /*0x10068331c*/
    &v15,
    v14);
  v5 = v16; /*0x100683321*/
  v6 = v16; /*0x100683329*/
  v7 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v16, v17); /*0x10068332c*/
  v9 = v8; /*0x100683331*/
  if ( v8 < 0 ) /*0x100683337*/
  {
    v10 = 0; /*0x100683339*/
    goto LABEL_3; /*0x100683339*/
  }
  if ( v8 ) /*0x100683348*/
  {
    __src = v7; /*0x10068334a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6); /*0x10068334e*/
    v10 = 1; /*0x100683353*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100683360*/
    if ( !v11 ) /*0x100683368*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x10068333b*/
    v12 = v11; /*0x10068336a*/
    v7 = __src; /*0x10068336d*/
  }
  else
  {
    v12 = 1; /*0x100683373*/
  }
  memcpy((void *)v12, v7, v9); /*0x100683382*/
  *a1 = v9; /*0x100683387*/
  a1[1] = v12; /*0x10068338a*/
  a1[2] = v9; /*0x10068338e*/
  if ( v18 ) /*0x100683399*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v18, 1); /*0x1006833a4*/
  if ( v15 ) /*0x1006833b0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v15, 1); /*0x1006833ba*/
  return a1; /*0x1006833c2*/
}
