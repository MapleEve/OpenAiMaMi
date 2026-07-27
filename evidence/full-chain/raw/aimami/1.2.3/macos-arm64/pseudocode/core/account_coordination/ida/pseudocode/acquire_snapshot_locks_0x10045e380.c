// __ZN13codexmate_lib4core20account_coordination22acquire_snapshot_locks @ 0x10045e380
__int64 __fastcall codexmate_lib::core::account_coordination::acquire_snapshot_locks::h26cefb270ec26f6e(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // rsi
  _QWORD v8[5]; // [rsp+8h] [rbp-68h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h]
  unsigned __int64 v11; // [rsp+40h] [rbp-30h]
  char v12; // [rsp+4Fh] [rbp-21h] BYREF

  v8[4] = a2[4]; /*0x10045e396*/
  v8[3] = a2[3]; /*0x10045e39e*/
  v8[2] = a2[2]; /*0x10045e3a6*/
  v2 = *a2; /*0x10045e3aa*/
  v8[1] = a2[1]; /*0x10045e3b1*/
  v8[0] = v2; /*0x10045e3b5*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h658e9af1578e61a6( /*0x10045e3c1*/
    &v9,
    v8);
  v8[0] = &v12; /*0x10045e3d2*/
  if ( v11 >= 2 ) /*0x10045e3da*/
  {
    if ( v11 >= 0x15 ) /*0x10045e465*/
      core::slice::sort::stable::driftsort_main::h12b4315c01cf1935(v10, v11, v8); /*0x10045e47e*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::hf45747cbbaf9af8c(v10, v11, 1, v8); /*0x10045e470*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::hcf63e4e8b6d681ac(&v9); /*0x10045e3e4*/
  v3 = v10; /*0x10045e3e9*/
  v4 = v11; /*0x10045e3ed*/
  core::iter::adapters::try_process::he04f2673d0092f51(a1, v10, v10 + 24 * v11); /*0x10045e3ff*/
  if ( v4 ) /*0x10045e407*/
  {
    v5 = (_QWORD *)(v3 + 8); /*0x10045e409*/
    do /*0x10045e417*/
    {
      v6 = *(v5 - 1); /*0x10045e419*/
      if ( v6 ) /*0x10045e421*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v6, 1); /*0x10045e42c*/
      v5 += 3; /*0x10045e410*/
      --v4; /*0x10045e414*/
    }
    while ( v4 ); /*0x10045e417*/
  }
  if ( v9 ) /*0x10045e43a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24 * v9, 8); /*0x10045e44c*/
  return a1; /*0x10045e454*/
}