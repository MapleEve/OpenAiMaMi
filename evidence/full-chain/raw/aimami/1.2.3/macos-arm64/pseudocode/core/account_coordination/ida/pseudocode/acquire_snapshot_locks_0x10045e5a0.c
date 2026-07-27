// __ZN13codexmate_lib4core20account_coordination22acquire_snapshot_locks @ 0x10045e5a0
__int64 __fastcall codexmate_lib::core::account_coordination::acquire_snapshot_locks::hbe1ca0ff4bf12d73(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  _QWORD *v7; // r12
  __int64 v8; // rsi
  _QWORD v10[4]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  unsigned __int64 v13; // [rsp+30h] [rbp-30h]
  char v14; // [rsp+3Fh] [rbp-21h] BYREF

  v2 = *a2; /*0x10045e5b2*/
  v3 = a2[1]; /*0x10045e5b5*/
  v4 = v3 + 24 * a2[2]; /*0x10045e5c1*/
  v10[0] = v3; /*0x10045e5c5*/
  v10[1] = v3; /*0x10045e5c9*/
  v10[2] = v2; /*0x10045e5cd*/
  v10[3] = v4; /*0x10045e5d1*/
  ((void (__fastcall *)(__int64 *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::from_iter::hc9e25e659695a227)( /*0x10045e5dd*/
    &v11,
    v10);
  v10[0] = &v14; /*0x10045e5ee*/
  if ( v13 >= 2 ) /*0x10045e5f6*/
  {
    if ( v13 >= 0x15 ) /*0x10045e685*/
      core::slice::sort::stable::driftsort_main::h4d55894083fcad81(v12, v13, v10); /*0x10045e69e*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::hf45747cbbaf9af8c(v12, v13, 1, v10); /*0x10045e690*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::hcf63e4e8b6d681ac(&v11); /*0x10045e600*/
  v5 = v12; /*0x10045e605*/
  v6 = v13; /*0x10045e609*/
  core::iter::adapters::try_process::h17eb5511baf9f3a8(a1, v12, v12 + 24 * v13); /*0x10045e61b*/
  if ( v6 ) /*0x10045e623*/
  {
    v7 = (_QWORD *)(v5 + 8); /*0x10045e625*/
    do /*0x10045e637*/
    {
      v8 = *(v7 - 1); /*0x10045e639*/
      if ( v8 ) /*0x10045e641*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v7, v8, 1); /*0x10045e64c*/
      v7 += 3; /*0x10045e630*/
      --v6; /*0x10045e634*/
    }
    while ( v6 ); /*0x10045e637*/
  }
  if ( v11 ) /*0x10045e65a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24 * v11, 8); /*0x10045e66c*/
  return a1; /*0x10045e674*/
}