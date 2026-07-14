// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND record_codex_route node 0x1005d4b30 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h082e8dfa355a3af0(
        _QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  result = -*a1; /*0x1005d4b3d*/
  if ( !__OFSUB__(result, 1) ) /*0x1005d4b40*/
  {
    if ( *a1 ) /*0x1005d4b3a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005d4b54*/
    if ( a1[3] ) /*0x1005d4b63*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005d4b75*/
    v2 = a1[6]; /*0x1005d4b7a*/
    if ( v2 != 0x8000000000000000LL && v2 ) /*0x1005d4b86*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005d4b91*/
    v3 = a1[9]; /*0x1005d4b96*/
    if ( v3 != 0x8000000000000000LL && v3 ) /*0x1005d4ba2*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005d4bad*/
    v4 = a1[12]; /*0x1005d4bb2*/
    if ( v4 != 0x8000000000000000LL && v4 ) /*0x1005d4bbe*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005d4bc9*/
    v5 = a1[15]; /*0x1005d4bce*/
    if ( v5 != 0x8000000000000000LL ) /*0x1005d4bd5*/
    {
      if ( v5 ) /*0x1005d4bda*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005d4bec*/
    }
  }
  return result; /*0x1005d4be8*/
}