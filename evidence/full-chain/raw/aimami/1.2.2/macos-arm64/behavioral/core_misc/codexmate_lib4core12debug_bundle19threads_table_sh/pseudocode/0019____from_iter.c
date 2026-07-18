// mac 1.2.2 NEW codexmate_lib4core12debug_bundle19threads_table_sh 0x10048c060 d=1
_QWORD *__fastcall _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h2cd49421cb31bc40(
        _QWORD *a1)
{
  unsigned __int64 v1; // r14
  __int64 v2; // r15
  _QWORD v4[4]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  unsigned __int64 v7; // [rsp+30h] [rbp-20h]

  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hdd331e7b7b996e64(&v5); /*0x10048c074*/
  v1 = v7; /*0x10048c079*/
  if ( v7 ) /*0x10048c080*/
  {
    v2 = v6; /*0x10048c082*/
    if ( v7 != 1 ) /*0x10048c08a*/
    {
      if ( v7 >= 0x15 ) /*0x10048c0f6*/
        core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v6, v7, v4); /*0x10048c11b*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::h1ccf5003f0715752(v6, v7, 1, v4); /*0x10048c107*/
    }
    v4[0] = v2; /*0x10048c098*/
    v4[1] = v2; /*0x10048c09c*/
    v4[2] = v5; /*0x10048c0a0*/
    v4[3] = v2 + 24 * v1; /*0x10048c0a4*/
    ((void (__fastcall *)(_QWORD *, _QWORD *))alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::bulk_build_from_sorted_iter::hccfff7d362e7e950)( /*0x10048c0af*/
      a1,
      v4);
  }
  else
  {
    *a1 = 0; /*0x10048c0b6*/
    a1[2] = 0; /*0x10048c0bd*/
    if ( v5 ) /*0x10048c0cc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10048c0df*/
  }
  return a1; /*0x10048c0e7*/
}