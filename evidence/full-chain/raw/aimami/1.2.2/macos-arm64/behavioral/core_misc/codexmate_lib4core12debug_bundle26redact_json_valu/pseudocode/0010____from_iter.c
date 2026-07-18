// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x1003918e0 d=1
__int64 *__fastcall _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::hd002362a76b4575d(
        __int64 *a1,
        const void *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD v9[11]; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-50h] BYREF
  __int64 v11; // [rsp+68h] [rbp-48h] BYREF
  __int64 v12; // [rsp+70h] [rbp-40h]
  __int64 v13; // [rsp+78h] [rbp-38h] BYREF
  __int64 v14; // [rsp+80h] [rbp-30h]
  unsigned __int64 v15; // [rsp+88h] [rbp-28h]

  qmemcpy(v9, a2, 0x50u); /*0x100391904*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h56bd954605ad0844( /*0x10039190e*/
    &v13,
    v9);
  if ( v15 ) /*0x10039191a*/
  {
    v9[0] = &v11; /*0x100391928*/
    if ( v15 != 1 ) /*0x100391933*/
    {
      if ( v15 >= 0x15 ) /*0x100391a20*/
        core::slice::sort::stable::driftsort_main::h0d512a88b448c483(v14, v15, v9); /*0x100391a50*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::hd6028c5c8d88b96b(v14, v15, 1, v9); /*0x100391a2e*/
    }
    v2 = v13; /*0x100391939*/
    v3 = v14; /*0x10039193d*/
    v4 = v15; /*0x100391941*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100391945*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x278u, 8u); /*0x100391954*/
    if ( !v5 ) /*0x10039195c*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 632); /*0x100391a42*/
    *(_QWORD *)(v5 + 352) = 0; /*0x100391962*/
    *(_WORD *)(v5 + 626) = 0; /*0x10039196d*/
    v11 = v5; /*0x100391976*/
    v12 = 0; /*0x10039197a*/
    v10 = 0; /*0x100391982*/
    v9[0] = 0x8000000000000001LL; /*0x10039199b*/
    v9[7] = v3; /*0x1003919a2*/
    v9[8] = v3; /*0x1003919a6*/
    v9[9] = v2; /*0x1003919aa*/
    v9[10] = v3 + 56 * v4; /*0x1003919ae*/
    alloc::collections::btree::append::_$LT$impl$u20$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Owned$C$K$C$V$C$alloc..collections..btree..node..marker..LeafOrInternal$GT$$GT$::bulk_push::hc33109e1252f87b9( /*0x1003919c1*/
      &v11,
      v9,
      &v10);
    v6 = v12; /*0x1003919ca*/
    v7 = v10; /*0x1003919ce*/
    *a1 = v11; /*0x1003919d2*/
    a1[1] = v6; /*0x1003919d5*/
    a1[2] = v7; /*0x1003919d9*/
  }
  else
  {
    *a1 = 0; /*0x1003919df*/
    a1[2] = 0; /*0x1003919e6*/
    if ( v13 ) /*0x1003919f5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100391a04*/
  }
  return a1; /*0x100391a0c*/
}