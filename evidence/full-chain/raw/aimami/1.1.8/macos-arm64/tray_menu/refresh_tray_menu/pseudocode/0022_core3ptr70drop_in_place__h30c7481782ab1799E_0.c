// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x1004f3010 depth=2
// core3ptr70drop_in_place::h30c7481782ab1799E_0
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerListPayload$GT$::h30c7481782ab1799(
        __int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  __int64 result; // rax

  v2 = a1[2] + 1; /*0x1004f3029*/
  v3 = a1[1]; /*0x1004f302c*/
  while ( v2 != 1 ) /*0x1004f3034*/
  {
    --v2; /*0x1004f303d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hb7d375415fe5c34e(v3); /*0x1004f3040*/
    v3 += 224; /*0x1004f3045*/
  }
  result = *a1; /*0x1004f304a*/
  if ( *a1 ) /*0x1004f304a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f3061*/
  if ( a1[3] ) /*0x1004f3066*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f3086*/
  return result; /*0x1004f307c*/
}