// __ZN13codexmate_lib4core6skills19resolve_backup_path @ 0x10034e3c0 | 基线 same-set
void *__fastcall codexmate_lib::core::skills::resolve_backup_path::hf083208b26f1082c(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        _BYTE *a5)
{
  _BYTE *v9; // rdi
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  void *result; // rax
  _BYTE v13[64]; // [rsp+8h] [rbp-A8h] BYREF
  _BYTE v14[56]; // [rsp+48h] [rbp-68h] BYREF
  __int64 v15; // [rsp+80h] [rbp-30h]

  v15 = a3; /*0x10034e3da*/
  std::path::Path::components::he8b0f71a48373be5(v13, a4, a5); /*0x10034e3f4*/
  v9 = v14; /*0x10034e3f9*/
  v10 = v13; /*0x10034e3fd*/
  _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd56fdb6f9bc0ab11(v14, v13); /*0x10034e400*/
  if ( v14[0] == 9 /*0x10034e42f*/
    && (v9 = v14,
        v10 = v13,
        _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd56fdb6f9bc0ab11(
          v14,
          v13),
        v14[0] == 10)
    && (v9 = a4, v10 = a5, core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a4, a5), v11) )
  {
    result = (void *)std::path::Path::_join::hb1a495d4f06b13b8(a1 + 1, a2, v15, a4, a5); /*0x10034e442*/
    *a1 = 11; /*0x10034e447*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v10); /*0x10034e450*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x10034e45f*/
    if ( !result ) /*0x10034e467*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x10034e4c9*/
    qmemcpy(result, "Invalid skill backup id", 23); /*0x10034e48f*/
    *a1 = 9; /*0x10034e492*/
    a1[1] = 23; /*0x10034e499*/
    a1[2] = result; /*0x10034e4a1*/
    a1[3] = 23; /*0x10034e4a5*/
  }
  return result; /*0x10034e4ad*/
}