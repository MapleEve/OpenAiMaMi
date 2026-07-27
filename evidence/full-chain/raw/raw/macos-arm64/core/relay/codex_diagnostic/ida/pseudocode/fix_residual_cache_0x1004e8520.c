// __ZN13codexmate_lib4core5relay16codex_diagnostic18fix_residual_cache @ 0x1004e8520 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_residual_cache::h049b2d6edb00f0c8(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // rbx
  void *v5; // rbx
  size_t v6; // r15
  __int64 v7; // r12
  size_t v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r15
  void *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-100h] BYREF
  _QWORD *v23; // [rsp+8h] [rbp-F8h]
  __int64 v24; // [rsp+10h] [rbp-F0h]
  __int64 v25; // [rsp+18h] [rbp-E8h]
  __int64 v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+98h] [rbp-68h] BYREF
  void *__src; // [rsp+A0h] [rbp-60h]
  size_t __n; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  _QWORD *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v22, a2, a3, &unk_1015FCB64, 24); /*0x1004e8549*/
  v4 = v23; /*0x1004e854e*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v28, v23, v24, &unk_1015FCB7C, 22); /*0x1004e8570*/
  if ( v22 ) /*0x1004e857f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v22, 1); /*0x1004e8589*/
  v5 = __src; /*0x1004e858e*/
  v6 = __n; /*0x1004e8592*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v22, __src, __n); /*0x1004e85a3*/
  v7 = v22; /*0x1004e85a8*/
  v8 = (size_t)v23; /*0x1004e85af*/
  v9 = v22; /*0x1004e85b6*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1004e85b9*/
    v22,
    v23);
  if ( !v7 ) /*0x1004e85c1*/
  {
    v9 = (__int64)v5; /*0x1004e85c3*/
    v8 = v6; /*0x1004e85c6*/
    result = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v5, v6); /*0x1004e85c9*/
    if ( result ) /*0x1004e85d1*/
    {
      *a1 = 2; /*0x1004e85d3*/
      a1[1] = result; /*0x1004e85da*/
      v11 = v28; /*0x1004e85de*/
      if ( !v28 ) /*0x1004e85e5*/
        return result; /*0x1004e85e5*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v11, 1); /*0x1004e85e5*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v8); /*0x1004e85f0*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e85ff*/
  if ( !v12 ) /*0x1004e8607*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e87ac*/
  v13 = (_QWORD *)v12; /*0x1004e860d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e8610*/
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1004e861f*/
  if ( !v14 ) /*0x1004e8627*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x1004e87ce*/
  qmemcpy(v14, "residual_cache", 14); /*0x1004e8645*/
  *v13 = 14; /*0x1004e8648*/
  v13[1] = v14; /*0x1004e864f*/
  v13[2] = 14; /*0x1004e8653*/
  v34 = 1; /*0x1004e865b*/
  v35 = v13; /*0x1004e8663*/
  v36 = 1; /*0x1004e8667*/
  v31 = 0; /*0x1004e866f*/
  v32 = 8; /*0x1004e8677*/
  v33 = 0; /*0x1004e867f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1); /*0x1004e8687*/
  v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e8696*/
  if ( !v15 ) /*0x1004e869e*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e87bd*/
  v16 = (_QWORD *)v15; /*0x1004e86a4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e86a7*/
  v17 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x1004e86b6*/
  if ( !v17 ) /*0x1004e86be*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x1004e87df*/
  qmemcpy(v17 + 2, "state-cache", 11); /*0x1004e86ce*/
  v17[1] = 0x2D79616C657220A4LL; /*0x1004e86dc*/
  *v17 = 0x99E9A088E5B2B7E5LL; /*0x1004e86ea*/
  *v16 = 27; /*0x1004e86f4*/
  v16[1] = v17; /*0x1004e86fb*/
  v16[2] = 27; /*0x1004e86ff*/
  result = v36; /*0x1004e8707*/
  v24 = v36; /*0x1004e870b*/
  v18 = v34; /*0x1004e8712*/
  v19 = v35; /*0x1004e8716*/
  v23 = v35; /*0x1004e871a*/
  v22 = v34; /*0x1004e8721*/
  v20 = v31; /*0x1004e8728*/
  v21 = v32; /*0x1004e872c*/
  v25 = v31; /*0x1004e8730*/
  v26 = v32; /*0x1004e8737*/
  v27 = v33; /*0x1004e8742*/
  a1[6] = v33; /*0x1004e8749*/
  a1[5] = v21; /*0x1004e874d*/
  a1[4] = v20; /*0x1004e8751*/
  a1[3] = result; /*0x1004e8755*/
  a1[2] = v19; /*0x1004e8759*/
  a1[1] = v18; /*0x1004e875d*/
  a1[7] = 1; /*0x1004e8761*/
  a1[8] = v16; /*0x1004e8769*/
  a1[9] = 1; /*0x1004e876d*/
  *a1 = 11; /*0x1004e8775*/
  v11 = v28; /*0x1004e877c*/
  if ( v28 ) /*0x1004e8783*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v11, 1); /*0x1004e8785*/
  return result; /*0x1004e8792*/
}