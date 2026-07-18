// mac 1.2.2 NEW write_client_debug_log 0x1008c95a0 d=1
__int64 __fastcall codexmate_lib::platform::debug_log::write_client_event::hafeaa1ab68966ea2(
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
  _DWORD *v20; // rax
  _DWORD *v21; // rax
  __int64 result; // rax
  size_t v23[3]; // [rsp+0h] [rbp-160h] BYREF
  _QWORD v24[2]; // [rsp+18h] [rbp-148h] BYREF
  size_t v25; // [rsp+28h] [rbp-138h] BYREF
  __int64 v26; // [rsp+30h] [rbp-130h]
  __int64 v27; // [rsp+38h] [rbp-128h]
  _QWORD v28[3]; // [rsp+40h] [rbp-120h] BYREF
  _QWORD v29[3]; // [rsp+58h] [rbp-108h] BYREF
  __int64 v30; // [rsp+70h] [rbp-F0h]
  _QWORD *v31; // [rsp+78h] [rbp-E8h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+80h] [rbp-E0h]
  _QWORD *v33; // [rsp+88h] [rbp-D8h]
  __int64 (__fastcall *v34)(); // [rsp+90h] [rbp-D0h]
  __int64 *v35; // [rsp+98h] [rbp-C8h]
  __int64 (__fastcall *v36)(); // [rsp+A0h] [rbp-C0h]
  __int64 *v37; // [rsp+A8h] [rbp-B8h]
  __int64 (__fastcall *v38)(); // [rsp+B0h] [rbp-B0h]
  _QWORD *v39; // [rsp+B8h] [rbp-A8h]
  __int64 (__fastcall *v40)(); // [rsp+C0h] [rbp-A0h]
  _QWORD **v41; // [rsp+C8h] [rbp-98h]
  __int64 (__fastcall *v42)(); // [rsp+D0h] [rbp-90h]
  _QWORD *v43; // [rsp+D8h] [rbp-88h]
  void *v44; // [rsp+E0h] [rbp-80h]
  __int64 v45; // [rsp+E8h] [rbp-78h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+F0h] [rbp-70h]
  __int64 v47; // [rsp+F8h] [rbp-68h]
  __int64 v48; // [rsp+100h] [rbp-60h] BYREF
  __int64 (__fastcall *v49)(); // [rsp+108h] [rbp-58h]
  __int64 v50; // [rsp+110h] [rbp-50h]
  _QWORD *v51; // [rsp+118h] [rbp-48h]
  _QWORD *v52; // [rsp+120h] [rbp-40h] BYREF
  size_t v53; // [rsp+128h] [rbp-38h]
  size_t v54; // [rsp+130h] [rbp-30h]

  v15 = (void *)a1[1]; /*0x1008c95c6*/
  v43 = a1; /*0x1008c95ca*/
  v16 = a1[2]; /*0x1008c95d1*/
  v44 = v15; /*0x1008c95d5*/
  v51 = a2; /*0x1008c95d9*/
  v24[0] = codexmate_lib::platform::debug_log::normalize_client_level::h7a56d855b54f3d79(v15, v16); /*0x1008c95e2*/
  v24[1] = v17; /*0x1008c95e9*/
  v18 = a2[2]; /*0x1008c95f4*/
  v30 = a2[1]; /*0x1008c9604*/
  codexmate_lib::platform::debug_log::bounded::ha93dbbea7494d98b(v29, v30, v18, 96); /*0x1008c960b*/
  v19 = a3[1]; /*0x1008c9610*/
  codexmate_lib::platform::debug_log::bounded::ha93dbbea7494d98b(v28, v19, a3[2], 4000); /*0x1008c9629*/
  if ( a6 == 0 || a7 == 0 ) /*0x1008c963b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008c9642*/
    v20 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1008c9651*/
    if ( !v20 ) /*0x1008c9659*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1008c99b7*/
    *(_DWORD *)((char *)v20 + 3) = 1853321070; /*0x1008c965f*/
    *v20 = 1852534389; /*0x1008c9666*/
    v48 = 7; /*0x1008c966c*/
    v49 = (__int64 (__fastcall *)())v20; /*0x1008c9674*/
    v50 = 7; /*0x1008c9678*/
  }
  else
  {
    codexmate_lib::platform::debug_log::bounded::ha93dbbea7494d98b(&v31, a6, a7, 64); /*0x1008c9691*/
    v50 = (__int64)v33; /*0x1008c969d*/
    v49 = v32; /*0x1008c96af*/
    v48 = (__int64)v31; /*0x1008c96b3*/
  }
  if ( a8 == 0 || a9 == 0 ) /*0x1008c96c8*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008c96cf*/
    v21 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1008c96de*/
    if ( !v21 ) /*0x1008c96e6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1008c99c8*/
    *(_DWORD *)((char *)v21 + 3) = 1853321070; /*0x1008c96ec*/
    *v21 = 1852534389; /*0x1008c96f3*/
    v45 = 7; /*0x1008c96f9*/
    v46 = (__int64 (__fastcall *)())v21; /*0x1008c9701*/
    v47 = 7; /*0x1008c9705*/
  }
  else
  {
    codexmate_lib::platform::debug_log::bounded::ha93dbbea7494d98b(&v31, a8, a9, 300); /*0x1008c971b*/
    v47 = (__int64)v33; /*0x1008c9727*/
    v46 = v32; /*0x1008c9739*/
    v45 = (__int64)v31; /*0x1008c973d*/
  }
  if ( a4 == 0 || a5 == 0 ) /*0x1008c974a*/
  {
    v52 = nullptr; /*0x1008c9751*/
    v53 = 1; /*0x1008c9759*/
    v54 = 0; /*0x1008c9761*/
  }
  else
  {
    codexmate_lib::platform::debug_log::bounded::ha93dbbea7494d98b(&v31, a4, a5, 8000); /*0x1008c9780*/
    v52 = &v31; /*0x1008c9785*/
    v53 = (size_t)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c9790*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v23, byte_1016FA373, (unsigned __int64)&v52); /*0x1008c97a6*/
    if ( v31 ) /*0x1008c97b5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v31, 1); /*0x1008c97c3*/
    v52 = (_QWORD *)v23[0]; /*0x1008c97d6*/
    v53 = v23[1]; /*0x1008c97da*/
    v54 = v23[2]; /*0x1008c97e5*/
  }
  v31 = v24; /*0x1008c97f0*/
  v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x1008c97fe*/
  v33 = v29; /*0x1008c980c*/
  v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c981a*/
  v35 = &v48; /*0x1008c9825*/
  v36 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c982c*/
  v37 = &v45; /*0x1008c9837*/
  v38 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c983e*/
  v39 = v28; /*0x1008c984c*/
  v40 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c9853*/
  v41 = &v52; /*0x1008c985e*/
  v42 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c9865*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v25, byte_1016FA348, (unsigned __int64)&v31); /*0x1008c9881*/
  if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::hcb8a774b937aebd6 ) /*0x1008c9890*/
    codexmate_lib::platform::debug_log::append_line::hd94facb518a61d68(&unk_10192A090, v26, v27); /*0x1008c98aa*/
  if ( v25 ) /*0x1008c98b9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x1008c98c7*/
  if ( v52 ) /*0x1008c98d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v52, 1); /*0x1008c98de*/
  if ( v45 ) /*0x1008c98ea*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x1008c98f5*/
  if ( v48 ) /*0x1008c9901*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x1008c990c*/
  if ( v28[0] ) /*0x1008c991b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28[1], v28[0], 1); /*0x1008c9929*/
  if ( v29[0] ) /*0x1008c9938*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29[1], v29[0], 1); /*0x1008c9946*/
  if ( *a3 ) /*0x1008c994b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, *a3, 1); /*0x1008c995c*/
  if ( *v51 ) /*0x1008c9965*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, *v51, 1); /*0x1008c9979*/
  result = (__int64)v43; /*0x1008c997e*/
  if ( *v43 ) /*0x1008c9985*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, *v43, 1); /*0x1008c9996*/
  return result; /*0x1008c999b*/
}