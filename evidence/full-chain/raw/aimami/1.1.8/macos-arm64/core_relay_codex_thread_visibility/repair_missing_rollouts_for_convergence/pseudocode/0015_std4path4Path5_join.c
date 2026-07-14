// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x1010a9480 d=1
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

  v6 = a3; /*0x1010a9498*/
  if ( a3 ) /*0x1010a94a1*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010a94a6*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1u); /*0x1010a94b3*/
    if ( !v7 ) /*0x1010a94bb*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v6); /*0x1010a95d9*/
    v8 = (__int64)v7; /*0x1010a94c1*/
    memcpy(v7, a2, v6); /*0x1010a94cd*/
    v16 = v6; /*0x1010a94d2*/
    v17 = v8; /*0x1010a94d6*/
    v18 = v6; /*0x1010a94da*/
    v9 = *(_BYTE *)(v8 + v6 - 1) != 47; /*0x1010a94e4*/
    if ( !a5 ) /*0x1010a94ea*/
      goto LABEL_8; /*0x1010a94ea*/
  }
  else
  {
    v16 = 0; /*0x1010a94ee*/
    v17 = 1; /*0x1010a94f6*/
    v18 = 0; /*0x1010a94fe*/
    v8 = 1; /*0x1010a9506*/
    v9 = 0; /*0x1010a950c*/
    if ( !a5 ) /*0x1010a9511*/
      goto LABEL_8; /*0x1010a9511*/
  }
  if ( *a4 == 47 ) /*0x1010a951a*/
  {
    v10 = 0; /*0x1010a951c*/
    goto LABEL_10; /*0x1010a951f*/
  }
LABEL_8:
  if ( v9 ) /*0x1010a9523*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01(&v16, v6, 1, 1, 1); /*0x1010a953c*/
    v8 = v17; /*0x1010a9541*/
    v11 = v18; /*0x1010a9545*/
    *(_BYTE *)(v17 + v18) = 47; /*0x1010a9549*/
    v10 = v11 + 1; /*0x1010a954f*/
    v6 = v16; /*0x1010a9552*/
LABEL_10:
    v18 = v10; /*0x1010a9556*/
    if ( a5 > v6 - v10 ) /*0x1010a9560*/
      goto LABEL_14; /*0x1010a9560*/
    goto LABEL_13; /*0x1010a9560*/
  }
  v10 = v6; /*0x1010a9564*/
  if ( a5 ) /*0x1010a956d*/
  {
LABEL_14:
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01(&v16, v10, a5, 1, 1); /*0x1010a95ad*/
    v8 = v17; /*0x1010a95c7*/
    v10 = v18; /*0x1010a95cb*/
  }
LABEL_13:
  memcpy((void *)(v10 + v8), a4, a5); /*0x1010a956f*/
  v12 = a5 + v10; /*0x1010a9581*/
  v18 = v12; /*0x1010a9584*/
  v13 = v17; /*0x1010a958c*/
  *a1 = v16; /*0x1010a9590*/
  a1[1] = v13; /*0x1010a9593*/
  a1[2] = v12; /*0x1010a9597*/
  return a1; /*0x1010a959e*/
}