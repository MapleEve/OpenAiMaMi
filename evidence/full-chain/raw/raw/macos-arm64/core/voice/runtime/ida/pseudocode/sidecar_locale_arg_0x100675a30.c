// __ZN13codexmate_lib4core5voice7runtime18sidecar_locale_arg @ 0x100675a30 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::sidecar_locale_arg::h9d4a6b0e5224fa76(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // rax
  _BYTE *v5; // rax
  double result; // xmm0_8
  __int64 v7; // [rsp+8h] [rbp-28h] BYREF
  _DWORD *v8; // [rsp+10h] [rbp-20h]
  __int64 v9; // [rsp+18h] [rbp-18h]

  codexmate_lib::core::voice::runtime::normalize_recognition_language::h7e55ddc3ae8f6e78(&v7, a2, a3); /*0x100675a42*/
  if ( v9 == 4 && (v3 = v8, *v8 == 1869903201) ) /*0x100675a58*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v7, a2); /*0x100675a7a*/
    v5 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1, 1); /*0x100675a89*/
    if ( !v5 ) /*0x100675a91*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 1); /*0x100675ad1*/
    *v5 = 45; /*0x100675a93*/
    *a1 = 1; /*0x100675a96*/
    a1[1] = v5; /*0x100675a9d*/
    a1[2] = 1; /*0x100675aa1*/
    if ( v7 ) /*0x100675ab0*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v7, 1); /*0x100675ac2*/
  }
  else
  {
    a1[2] = v9; /*0x100675a5e*/
    v4 = v7; /*0x100675a62*/
    a1[1] = v8; /*0x100675a6a*/
    *a1 = v4; /*0x100675a6e*/
  }
  return result; /*0x100675a71*/
}