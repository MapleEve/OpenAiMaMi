// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12thread_shape 0x1008a4e80 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8ec9e2a4581094f7(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  size_t v2; // r14
  __int64 v3; // r15
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-38h]
  __int64 v10; // [rsp+20h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-28h] BYREF

  v2 = a2[1] - *a2; /*0x1008a4e99*/
  if ( v2 > 0x7FFFFFFFFFFFFFF8LL ) /*0x1008a4ea9*/
  {
    v3 = 0; /*0x1008a4eab*/
    goto LABEL_3; /*0x1008a4eab*/
  }
  if ( a2[1] == *a2 ) /*0x1008a4ebf*/
  {
    v4 = 8; /*0x1008a4ef8*/
    v5 = 0; /*0x1008a4efd*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008a4ec4*/
    v3 = 8; /*0x1008a4ec9*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v2, 8u); /*0x1008a4ed7*/
    if ( !v4 ) /*0x1008a4edf*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3); /*0x1008a4eae*/
    v5 = 0xAAAAAAAAAAAAAAABLL * (v2 >> 3); /*0x1008a4eef*/
  }
  v9 = v5; /*0x1008a4eff*/
  v10 = v4; /*0x1008a4f03*/
  v11 = 0; /*0x1008a4f0b*/
  v8[2] = v4; /*0x1008a4f13*/
  v8[0] = &v11; /*0x1008a4f17*/
  v8[1] = 0; /*0x1008a4f1b*/
  ((void (__fastcall *)(_QWORD *, _QWORD *))_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h27b7870a83280600)( /*0x1008a4f2d*/
    a2,
    v8);
  a1[2] = v11; /*0x1008a4f36*/
  v6 = v9; /*0x1008a4f3a*/
  a1[1] = v10; /*0x1008a4f42*/
  *a1 = v6; /*0x1008a4f46*/
  return a1; /*0x1008a4f4c*/
}