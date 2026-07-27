// __ZN13codexmate_lib4core5relay12fetch_models15parse_model_ids @ 0x100253c10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::fetch_models::parse_model_ids::hb592b5b3ff790236(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  void *v5; // rax
  void *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-20h] BYREF
  __int64 v9; // [rsp+8h] [rbp-18h]
  __int64 v10; // [rsp+10h] [rbp-10h]

  v2 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("data", 4, a2); /*0x100253c2b*/
  if ( v2 && *(_BYTE *)v2 == 4 ) /*0x100253c38*/
  {
    v3 = *(_QWORD *)(v2 + 16); /*0x100253c3a*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2e4bd7c2fed47441( /*0x100253c4d*/
      &v8,
      v3,
      v3 + 32LL * *(_QWORD *)(v2 + 24));
    if ( v10 ) /*0x100253c57*/
    {
      a1[3] = v10; /*0x100253c61*/
      v4 = v8; /*0x100253c65*/
      a1[2] = v9; /*0x100253c6d*/
      a1[1] = v4; /*0x100253c71*/
      *a1 = 0; /*0x100253c75*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v8, v3); /*0x100253d16*/
      v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x100253d25*/
      if ( !v7 ) /*0x100253d2d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28); /*0x100253db7*/
      qmemcpy(v7, "upstream model list is empty", 28); /*0x100253d55*/
      a1[1] = 28; /*0x100253d5f*/
      a1[2] = v7; /*0x100253d67*/
      a1[3] = 28; /*0x100253d6b*/
      *a1 = 1; /*0x100253d73*/
      if ( v8 ) /*0x100253d81*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24 * v8, 8); /*0x100253d94*/
    }
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("data", 4); /*0x100253c81*/
    v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x100253c90*/
    if ( !v5 ) /*0x100253c98*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45); /*0x100253da8*/
    qmemcpy(v5, "upstream did not return a standard model list", 45); /*0x100253cee*/
    a1[1] = 45; /*0x100253cf1*/
    a1[2] = v5; /*0x100253cf9*/
    a1[3] = 45; /*0x100253cfd*/
    *a1 = 1; /*0x100253d05*/
  }
  return a1; /*0x100253d0f*/
}