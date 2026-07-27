// __ZN13codexmate_lib8platform19voice_trigger_macos12trigger_kind @ 0x1005dfd30 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::voice_trigger_macos::trigger_kind::h54f3afebbabc3835(
        __int64 *a1,
        signed __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  if ( a2 <= 999 ) /*0x1005dfd41*/
  {
    if ( (unsigned __int64)a2 <= 0x3F && (v4 = 0xFDC0000000000000LL, _bittest64((const __int64 *)&v4, a2)) ) /*0x1005dfd82*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1005dfd88*/
      v2 = 8; /*0x1005dfd8d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1005dfd9d*/
      if ( result ) /*0x1005dfda5*/
      {
        v5 = 0x7265696669646F6DLL; /*0x1005dfda7*/
LABEL_8:
        *(_QWORD *)result = v5; /*0x1005dfdb1*/
        goto LABEL_9; /*0x1005dfdb1*/
      }
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1005dfdc4*/
      v2 = 8; /*0x1005dfdc9*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1005dfdd9*/
      if ( result ) /*0x1005dfde1*/
      {
        v5 = 0x6472616F6279656BLL; /*0x1005dfde3*/
        goto LABEL_8; /*0x1005dfded*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x1005dfe08*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1005dfd43*/
  v2 = 5; /*0x1005dfd48*/
  result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1005dfd58*/
  if ( !result ) /*0x1005dfd60*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1005dfdf9*/
  *(_BYTE *)(result + 4) = 101; /*0x1005dfd66*/
  *(_DWORD *)result = 1937076077; /*0x1005dfd6a*/
LABEL_9:
  *a1 = v2; /*0x1005dfdb4*/
  a1[1] = result; /*0x1005dfdb7*/
  a1[2] = v2; /*0x1005dfdbb*/
  return result; /*0x1005dfdbf*/
}