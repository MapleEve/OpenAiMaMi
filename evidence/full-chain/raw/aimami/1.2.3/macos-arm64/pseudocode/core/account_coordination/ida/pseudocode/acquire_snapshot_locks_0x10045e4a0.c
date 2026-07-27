// __ZN13codexmate_lib4core20account_coordination22acquire_snapshot_locks @ 0x10045e4a0
__int64 __fastcall codexmate_lib::core::account_coordination::acquire_snapshot_locks::hb37ff38d1b6d0a13(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v6; // [rsp+8h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-38h]
  char *v9; // [rsp+20h] [rbp-30h] BYREF
  char v10; // [rsp+2Fh] [rbp-21h] BYREF

  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h063329c9682e7cc8(&v6); /*0x10045e4b6*/
  v9 = &v10; /*0x10045e4c7*/
  if ( v8 >= 2 ) /*0x10045e4cf*/
  {
    if ( v8 >= 0x15 ) /*0x10045e565*/
      core::slice::sort::stable::driftsort_main::h9e9c388ceb7af121(v7, v8, &v9); /*0x10045e57e*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::hf45747cbbaf9af8c(v7, v8, 1, &v9); /*0x10045e570*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::hcf63e4e8b6d681ac(&v6); /*0x10045e4d9*/
  v1 = v7; /*0x10045e4de*/
  v2 = v8; /*0x10045e4e2*/
  core::iter::adapters::try_process::hae57af15f8d76490(a1, v7, v7 + 24 * v8); /*0x10045e4f4*/
  if ( v2 ) /*0x10045e4fc*/
  {
    v3 = (_QWORD *)(v1 + 8); /*0x10045e4fe*/
    do /*0x10045e517*/
    {
      v4 = *(v3 - 1); /*0x10045e519*/
      if ( v4 ) /*0x10045e521*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v4, 1); /*0x10045e52c*/
      v3 += 3; /*0x10045e510*/
      --v2; /*0x10045e514*/
    }
    while ( v2 ); /*0x10045e517*/
  }
  if ( v6 ) /*0x10045e53a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24 * v6, 8); /*0x10045e54c*/
  return a1; /*0x10045e554*/
}