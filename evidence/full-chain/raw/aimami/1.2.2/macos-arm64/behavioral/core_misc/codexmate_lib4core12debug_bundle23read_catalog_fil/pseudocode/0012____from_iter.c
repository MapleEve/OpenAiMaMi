// mac 1.2.2 NEW codexmate_lib4core12debug_bundle23read_catalog_fil 0x10048c300 d=1
_QWORD *__fastcall _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::hbdd3982c5ef5e1ed(
        _QWORD *a1,
        const void *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // r14
  _QWORD *v6; // r15
  _QWORD v8[9]; // [rsp+8h] [rbp-78h] BYREF
  __int64 v9; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp-28h]
  unsigned __int64 v11; // [rsp+60h] [rbp-20h]

  qmemcpy(v8, a2, sizeof(v8)); /*0x10048c31c*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::ha03c0a6f20cc1cef( /*0x10048c326*/
    &v9,
    v8);
  v5 = v11; /*0x10048c32b*/
  if ( v11 ) /*0x10048c332*/
  {
    v6 = v10; /*0x10048c334*/
    if ( v11 != 1 ) /*0x10048c33c*/
    {
      if ( v11 >= 0x15 ) /*0x10048c3a8*/
        core::slice::sort::stable::driftsort_main::h5af4c5863c061b64((__int64)v10, v11, (__int64)v8); /*0x10048c3cd*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::h1ccf5003f0715752(v10, v11, 1); /*0x10048c3b9*/
    }
    v8[0] = v6; /*0x10048c34a*/
    v8[1] = v6; /*0x10048c34e*/
    v8[2] = v9; /*0x10048c352*/
    v8[3] = &v6[3 * v5]; /*0x10048c356*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::bulk_build_from_sorted_iter::hccfff7d362e7e950( /*0x10048c361*/
      a1,
      v8,
      v2,
      v8[3],
      v3,
      v4);
  }
  else
  {
    *a1 = 0; /*0x10048c368*/
    a1[2] = 0; /*0x10048c36f*/
    if ( v9 ) /*0x10048c37e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10048c391*/
  }
  return a1; /*0x10048c399*/
}