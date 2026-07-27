// __ZN13codexmate_lib8platform9debug_log18write_client_event @ 0x100918c20 | 基线 same-set
double __fastcall codexmate_lib::platform::debug_log::write_client_event::hdbe9d4c85335e4fd(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  void *v15; // rdi
  size_t v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rdi
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  double result; // xmm0_8
  _QWORD v24[3]; // [rsp+0h] [rbp-160h] BYREF
  _QWORD v25[2]; // [rsp+18h] [rbp-148h] BYREF
  __int64 v26; // [rsp+28h] [rbp-138h] BYREF
  __int64 v27; // [rsp+30h] [rbp-130h]
  __int64 v28; // [rsp+38h] [rbp-128h]
  _QWORD v29[3]; // [rsp+40h] [rbp-120h] BYREF
  _QWORD v30[3]; // [rsp+58h] [rbp-108h] BYREF
  __int64 v31; // [rsp+70h] [rbp-F0h]
  _QWORD *v32; // [rsp+78h] [rbp-E8h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+80h] [rbp-E0h]
  _QWORD *v34; // [rsp+88h] [rbp-D8h]
  __int64 (__fastcall *v35)(); // [rsp+90h] [rbp-D0h]
  __int64 *v36; // [rsp+98h] [rbp-C8h]
  __int64 (__fastcall *v37)(); // [rsp+A0h] [rbp-C0h]
  __int64 *v38; // [rsp+A8h] [rbp-B8h]
  __int64 (__fastcall *v39)(); // [rsp+B0h] [rbp-B0h]
  _QWORD *v40; // [rsp+B8h] [rbp-A8h]
  __int64 (__fastcall *v41)(); // [rsp+C0h] [rbp-A0h]
  _QWORD **v42; // [rsp+C8h] [rbp-98h]
  __int64 (__fastcall *v43)(); // [rsp+D0h] [rbp-90h]
  _QWORD *v44; // [rsp+D8h] [rbp-88h]
  void *v45; // [rsp+E0h] [rbp-80h]
  __int64 v46; // [rsp+E8h] [rbp-78h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+F0h] [rbp-70h]
  __int64 v48; // [rsp+F8h] [rbp-68h]
  __int64 v49; // [rsp+100h] [rbp-60h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+108h] [rbp-58h]
  __int64 v51; // [rsp+110h] [rbp-50h]
  _QWORD *v52; // [rsp+118h] [rbp-48h]
  _QWORD *v53; // [rsp+120h] [rbp-40h] BYREF
  __int64 v54; // [rsp+128h] [rbp-38h]
  __int64 v55; // [rsp+130h] [rbp-30h]

  v15 = (void *)a1[1]; /*0x100918c46*/
  v44 = a1; /*0x100918c4a*/
  v16 = a1[2]; /*0x100918c51*/
  v45 = v15; /*0x100918c55*/
  v52 = a2; /*0x100918c59*/
  v25[0] = codexmate_lib::platform::debug_log::normalize_client_level::h5dd68a1393a471b9(v15, v16); /*0x100918c62*/
  v25[1] = v17; /*0x100918c69*/
  v18 = a2[2]; /*0x100918c74*/
  v31 = a2[1]; /*0x100918c84*/
  codexmate_lib::platform::debug_log::bounded::h95d3a386b5ba0844(v30, v31, v18, 96); /*0x100918c8b*/
  v19 = a3[1]; /*0x100918c90*/
  codexmate_lib::platform::debug_log::bounded::h95d3a386b5ba0844(v29, v19, a3[2], 4000); /*0x100918ca9*/
  if ( a6 == 0 || a7 == 0 ) /*0x100918cbb*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v19); /*0x100918cc2*/
    v20 = 7; /*0x100918cc7*/
    v21 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100918cd1*/
    if ( !v21 ) /*0x100918cd9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100919037*/
    *(_DWORD *)((char *)v21 + 3) = 1853321070; /*0x100918cdf*/
    *v21 = 1852534389; /*0x100918ce6*/
    v49 = 7; /*0x100918cec*/
    v50 = (__int64 (__fastcall *)())v21; /*0x100918cf4*/
    v51 = 7; /*0x100918cf8*/
  }
  else
  {
    v20 = (__int64)&v32; /*0x100918d02*/
    codexmate_lib::platform::debug_log::bounded::h95d3a386b5ba0844(&v32, a6, a7, 64); /*0x100918d11*/
    v51 = (__int64)v34; /*0x100918d1d*/
    v50 = v33; /*0x100918d2f*/
    v49 = (__int64)v32; /*0x100918d33*/
  }
  if ( a8 == 0 || a9 == 0 ) /*0x100918d48*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, a8); /*0x100918d4f*/
    v22 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100918d5e*/
    if ( !v22 ) /*0x100918d66*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100919048*/
    *(_DWORD *)((char *)v22 + 3) = 1853321070; /*0x100918d6c*/
    *v22 = 1852534389; /*0x100918d73*/
    v46 = 7; /*0x100918d79*/
    v47 = (__int64 (__fastcall *)())v22; /*0x100918d81*/
    v48 = 7; /*0x100918d85*/
  }
  else
  {
    codexmate_lib::platform::debug_log::bounded::h95d3a386b5ba0844(&v32, a8, a9, 300); /*0x100918d9b*/
    v48 = (__int64)v34; /*0x100918da7*/
    v47 = v33; /*0x100918db9*/
    v46 = (__int64)v32; /*0x100918dbd*/
  }
  if ( a4 == 0 || a5 == 0 ) /*0x100918dca*/
  {
    v53 = nullptr; /*0x100918dd1*/
    v54 = 1; /*0x100918dd9*/
    v55 = 0; /*0x100918de1*/
  }
  else
  {
    codexmate_lib::platform::debug_log::bounded::h95d3a386b5ba0844(&v32, a4, a5, 8000); /*0x100918e00*/
    v53 = &v32; /*0x100918e05*/
    v54 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100918e10*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1017C7AA7, &v53); /*0x100918e26*/
    if ( v32 ) /*0x100918e35*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v32, 1); /*0x100918e43*/
    v53 = (_QWORD *)v24[0]; /*0x100918e56*/
    v54 = v24[1]; /*0x100918e5a*/
    v55 = v24[2]; /*0x100918e65*/
  }
  v32 = v25; /*0x100918e70*/
  v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100918e7e*/
  v34 = v30; /*0x100918e8c*/
  v35 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100918e9a*/
  v36 = &v49; /*0x100918ea5*/
  v37 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100918eac*/
  v38 = &v46; /*0x100918eb7*/
  v39 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100918ebe*/
  v40 = v29; /*0x100918ecc*/
  v41 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100918ed3*/
  v42 = &v53; /*0x100918ede*/
  v43 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100918ee5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v26, &unk_1017C7A7C, &v32); /*0x100918f01*/
  if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de ) /*0x100918f10*/
    result = codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc((__int64)&unk_1019FF248, v27, v28); /*0x100918f2a*/
  if ( v26 ) /*0x100918f39*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v26, 1); /*0x100918f47*/
  if ( v53 ) /*0x100918f53*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v53, 1); /*0x100918f5e*/
  if ( v46 ) /*0x100918f6a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1); /*0x100918f75*/
  if ( v49 ) /*0x100918f81*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x100918f8c*/
  if ( v29[0] ) /*0x100918f9b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29[1], v29[0], 1); /*0x100918fa9*/
  if ( v30[0] ) /*0x100918fb8*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30[1], v30[0], 1); /*0x100918fc6*/
  if ( *a3 ) /*0x100918fcb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, *a3, 1); /*0x100918fdc*/
  if ( *v52 ) /*0x100918fe5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, *v52, 1); /*0x100918ff9*/
  if ( *v44 ) /*0x100919005*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, *v44, 1); /*0x100919016*/
  return result; /*0x10091901b*/
}