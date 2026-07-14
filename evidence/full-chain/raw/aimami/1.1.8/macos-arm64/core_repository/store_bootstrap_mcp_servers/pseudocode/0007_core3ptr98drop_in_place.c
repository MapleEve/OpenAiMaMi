// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_mcp_servers node 0x10054d350 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..McpServerListPayload$GT$$GT$::ha92737fbdd27ed42(
        __int64 *a1)
{
  __int64 v1; // r13
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // rdi

  v1 = *a1; /*0x10054d361*/
  result = -*a1; /*0x10054d367*/
  if ( !__OFSUB__(result, 1) ) /*0x10054d36a*/
  {
    v4 = a1[2] + 1; /*0x10054d377*/
    v5 = a1[1]; /*0x10054d37a*/
    while ( v4 != 1 ) /*0x10054d384*/
    {
      --v4; /*0x10054d38d*/
      result = core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hb7d375415fe5c34e(v5); /*0x10054d390*/
      v5 += 224; /*0x10054d395*/
    }
    if ( v1 ) /*0x10054d39d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054d3ae*/
    if ( a1[3] ) /*0x10054d3b3*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054d3d3*/
  }
  return result; /*0x10054d3c5*/
}