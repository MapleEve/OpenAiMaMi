// __ZN13codexmate_lib4core12debug_bundle20header_names_summary @ 0x1004d5a70 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::header_names_summary::h4ba000d06d225391(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // r15
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-60h] BYREF
  __int64 *v15; // [rsp+8h] [rbp-58h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+10h] [rbp-50h]
  __int64 **v17; // [rsp+18h] [rbp-48h]
  __int64 *v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+28h] [rbp-38h]
  __int64 **v20; // [rsp+30h] [rbp-30h]
  __int64 (__fastcall *v21)(); // [rsp+38h] [rbp-28h]

  v6 = a2[2]; /*0x1004d5a85*/
  if ( v6 >= 2 ) /*0x1004d5a8d*/
  {
    v13 = a2[1]; /*0x1004d5bc1*/
    if ( v6 >= 0x15 ) /*0x1004d5bc9*/
      core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v13, v6, &v18, a4); /*0x1004d5bf3*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h83ca487eb4badd76(v13, v6, 1, &v18); /*0x1004d5bd4*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h9258108c33673bcf(a2, v6, a3, a4); /*0x1004d5a96*/
  v7 = a2[2]; /*0x1004d5a9b*/
  if ( v7 ) /*0x1004d5aa2*/
  {
    v14 = a2[2]; /*0x1004d5aa8*/
    v8 = a2[1]; /*0x1004d5aac*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(&v18, v8, v7, ", ", 2); /*0x1004d5ac7*/
    v17 = v20; /*0x1004d5ad0*/
    v16 = v19; /*0x1004d5adc*/
    v15 = v18; /*0x1004d5ae0*/
    v18 = &v14; /*0x1004d5ae8*/
    v19 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004d5af3*/
    v20 = &v15; /*0x1004d5afb*/
    v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004d5b06*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017BF5B5, &v18); /*0x1004d5b18*/
    if ( v15 ) /*0x1004d5b24*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1004d5b2f*/
    v9 = (_QWORD *)(v8 + 8); /*0x1004d5b34*/
    do /*0x1004d5b47*/
    {
      v10 = *(v9 - 1); /*0x1004d5b49*/
      if ( v10 ) /*0x1004d5b50*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1); /*0x1004d5b5a*/
      v9 += 3; /*0x1004d5b40*/
      --v7; /*0x1004d5b44*/
    }
    while ( v7 ); /*0x1004d5b47*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v6); /*0x1004d5b61*/
    v11 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1004d5b70*/
    if ( !v11 ) /*0x1004d5b78*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1004d5be8*/
    *v11 = 1701736302; /*0x1004d5b7a*/
    *a1 = 4; /*0x1004d5b80*/
    a1[1] = v11; /*0x1004d5b87*/
    a1[2] = 4; /*0x1004d5b8b*/
    v8 = a2[1]; /*0x1004d5b93*/
  }
  result = *a2; /*0x1004d5b97*/
  if ( *a2 ) /*0x1004d5b97*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24 * result, 8); /*0x1004d5baf*/
  return result; /*0x1004d5bb4*/
}