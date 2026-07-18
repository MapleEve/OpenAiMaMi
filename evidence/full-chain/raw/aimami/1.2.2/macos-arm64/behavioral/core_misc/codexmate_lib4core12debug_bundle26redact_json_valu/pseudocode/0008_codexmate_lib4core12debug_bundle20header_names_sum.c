// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x1003fc0a0 d=1
__int64 __fastcall codexmate_lib::core::debug_bundle::header_names_summary::h278e1053fcb29704(size_t *a1, __int64 *a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r15
  _DWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+0h] [rbp-60h] BYREF
  _QWORD v12[3]; // [rsp+8h] [rbp-58h] BYREF
  __int64 *v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+28h] [rbp-38h]
  _QWORD *v15; // [rsp+30h] [rbp-30h]
  __int64 (__fastcall *v16)(); // [rsp+38h] [rbp-28h]

  v4 = a2[2]; /*0x1003fc0b5*/
  if ( v4 >= 2 ) /*0x1003fc0bd*/
  {
    v10 = a2[1]; /*0x1003fc1f1*/
    if ( v4 >= 0x15 ) /*0x1003fc1f9*/
      core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v10, v4, &v13); /*0x1003fc223*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h1ccf5003f0715752(v10, v4, 1, &v13); /*0x1003fc204*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::hf75b2df030a9d998(a2); /*0x1003fc0c6*/
  v5 = a2[2]; /*0x1003fc0cb*/
  if ( v5 ) /*0x1003fc0d2*/
  {
    v11 = a2[2]; /*0x1003fc0d8*/
    v6 = a2[1]; /*0x1003fc0dc*/
    alloc::str::join_generic_copy::hfccd3ffc09b1fad9(&v13, v6, v5, ", ", 2); /*0x1003fc0f7*/
    v12[2] = v15; /*0x1003fc100*/
    v12[1] = v14; /*0x1003fc10c*/
    v12[0] = v13; /*0x1003fc110*/
    v13 = &v11; /*0x1003fc118*/
    v14 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003fc123*/
    v15 = v12; /*0x1003fc12b*/
    v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003fc136*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, byte_1016F1117, (unsigned __int64)&v13); /*0x1003fc148*/
    if ( v12[0] ) /*0x1003fc154*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fc15f*/
    v7 = v6 + 8; /*0x1003fc164*/
    do /*0x1003fc177*/
    {
      if ( *(_QWORD *)(v7 - 8) ) /*0x1003fc179*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fc18a*/
      v7 += 24; /*0x1003fc170*/
      --v5; /*0x1003fc174*/
    }
    while ( v5 ); /*0x1003fc177*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fc191*/
    v8 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1003fc1a0*/
    if ( !v8 ) /*0x1003fc1a8*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003fc218*/
    *v8 = 1701736302; /*0x1003fc1aa*/
    *a1 = 4; /*0x1003fc1b0*/
    a1[1] = (size_t)v8; /*0x1003fc1b7*/
    a1[2] = 4; /*0x1003fc1bb*/
  }
  result = *a2; /*0x1003fc1c7*/
  if ( *a2 ) /*0x1003fc1c7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fc1df*/
  return result; /*0x1003fc1e4*/
}