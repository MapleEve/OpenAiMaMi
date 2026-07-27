// IDA Hex-Rays decompile evidence
// addr: 0x1007d8ca0
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..oauth_refresh..TokenEndpointError$C$serde_json..error..Error$GT$$GT$::hddb7d8d2e4a752fe(
        __int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rax
  double result; // xmm0_8

  v1 = *a1; /*0x1007d8cb1*/
  if ( *a1 != 0x8000000000000001LL ) /*0x1007d8cb7*/
  {
    v4 = a1[3]; /*0x1007d8ce4*/
    if ( v4 == 0x8000000000000002LL ) /*0x1007d8cef*/
      goto LABEL_14; /*0x1007d8cef*/
    if ( v4 == 0x8000000000000001LL ) /*0x1007d8cf4*/
    {
      v5 = a1[4]; /*0x1007d8cf6*/
      v6 = 2; /*0x1007d8cfa*/
      if ( !v5 ) /*0x1007d8d02*/
      {
LABEL_14:
        if ( !(2 * v1) ) /*0x1007d8d43*/
          return result; /*0x1007d8d4e*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], v1, 1); /*0x1007d8d4e*/
      }
    }
    else
    {
      if ( 2 * v4 ) /*0x1007d8d25*/
      {
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v4, 1); /*0x1007d8d64*/
        v5 = a1[6]; /*0x1007d8d6c*/
        if ( !(2 * v5) ) /*0x1007d8d7b*/
          goto LABEL_14; /*0x1007d8d7b*/
      }
      else
      {
        v5 = a1[6]; /*0x1007d8d32*/
        if ( !(2 * v5) ) /*0x1007d8d36*/
          goto LABEL_14; /*0x1007d8d41*/
      }
      v6 = 4; /*0x1007d8d7d*/
    }
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[v6 + 3], v5, 1); /*0x1007d8d92*/
    if ( !(2 * v1) ) /*0x1007d8da5*/
      return result; /*0x1007d8da5*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], v1, 1); /*0x1007d8db7*/
  }
  v2 = (_QWORD *)a1[1]; /*0x1007d8cb9*/
  if ( *v2 == 1 ) /*0x1007d8cc4*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v2 + 1); /*0x1007d8d0a*/
  }
  else if ( !*v2 ) /*0x1007d8cbd*/
  {
    v3 = v2[2]; /*0x1007d8ccb*/
    if ( v3 ) /*0x1007d8cd2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2[1], v3, 1); /*0x1007d8cdd*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 40, 8); /*0x1007d8d1c*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1007dbf70  __ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h035ee12b7c6572f3E_9
