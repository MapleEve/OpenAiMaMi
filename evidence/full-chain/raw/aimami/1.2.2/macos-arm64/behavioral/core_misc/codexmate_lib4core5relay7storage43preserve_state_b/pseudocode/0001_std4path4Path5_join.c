// mac 1.2.2 NEW codexmate_lib4core5relay7storage43preserve_state_b 0x10135fa60 d=1
size_t *__fastcall std::path::Path::_join::hb1a495d4f06b13b8(
        size_t *a1,
        const void *a2,
        size_t a3,
        _BYTE *a4,
        size_t a5)
{
  size_t v6; // r15
  void *v7; // rax
  __int64 v8; // r13
  bool v9; // al
  size_t v10; // r12
  size_t v11; // r12
  size_t v12; // r12
  __int64 v13; // rcx
  size_t v16; // [rsp+10h] [rbp-40h] BYREF
  __int64 v17; // [rsp+18h] [rbp-38h]
  size_t v18; // [rsp+20h] [rbp-30h]

  v6 = a3; /*0x10135fa78*/
  if ( a3 ) /*0x10135fa81*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10135fa86*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1u); /*0x10135fa93*/
    if ( !v7 ) /*0x10135fa9b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v6); /*0x10135fbb9*/
    v8 = (__int64)v7; /*0x10135faa1*/
    memcpy(v7, a2, v6); /*0x10135faad*/
    v16 = v6; /*0x10135fab2*/
    v17 = v8; /*0x10135fab6*/
    v18 = v6; /*0x10135faba*/
    v9 = *(_BYTE *)(v8 + v6 - 1) != 47; /*0x10135fac4*/
    if ( !a5 ) /*0x10135faca*/
      goto LABEL_8; /*0x10135faca*/
  }
  else
  {
    v16 = 0; /*0x10135face*/
    v17 = 1; /*0x10135fad6*/
    v18 = 0; /*0x10135fade*/
    v8 = 1; /*0x10135fae6*/
    v9 = 0; /*0x10135faec*/
    if ( !a5 ) /*0x10135faf1*/
      goto LABEL_8; /*0x10135faf1*/
  }
  if ( *a4 == 47 ) /*0x10135fafa*/
  {
    v10 = 0; /*0x10135fafc*/
    goto LABEL_10; /*0x10135faff*/
  }
LABEL_8:
  if ( v9 ) /*0x10135fb03*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01(&v16, v6, 1, 1, 1); /*0x10135fb1c*/
    v8 = v17; /*0x10135fb21*/
    v11 = v18; /*0x10135fb25*/
    *(_BYTE *)(v17 + v18) = 47; /*0x10135fb29*/
    v10 = v11 + 1; /*0x10135fb2f*/
    v6 = v16; /*0x10135fb32*/
LABEL_10:
    v18 = v10; /*0x10135fb36*/
    if ( a5 > v6 - v10 ) /*0x10135fb40*/
      goto LABEL_14; /*0x10135fb40*/
    goto LABEL_13; /*0x10135fb40*/
  }
  v10 = v6; /*0x10135fb44*/
  if ( a5 ) /*0x10135fb4d*/
  {
LABEL_14:
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01(&v16, v10, a5, 1, 1); /*0x10135fb8d*/
    v8 = v17; /*0x10135fba7*/
    v10 = v18; /*0x10135fbab*/
  }
LABEL_13:
  memcpy((void *)(v10 + v8), a4, a5); /*0x10135fb4f*/
  v12 = a5 + v10; /*0x10135fb61*/
  v18 = v12; /*0x10135fb64*/
  v13 = v17; /*0x10135fb6c*/
  *a1 = v16; /*0x10135fb70*/
  a1[1] = v13; /*0x10135fb73*/
  a1[2] = v12; /*0x10135fb77*/
  return a1; /*0x10135fb7e*/
}