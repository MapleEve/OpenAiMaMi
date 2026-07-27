// IDA Hex-Rays decompile evidence
// addr: 0x1000f1610
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..fetch_models..fetch_openai_async..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1c25f68cb8af1655(
        __int64 a1)
{
  int v1; // eax
  _QWORD *v2; // r14
  double result; // xmm0_8
  __int64 v4; // rsi

  v1 = *(unsigned __int8 *)(a1 + 72); /*0x1000f161a*/
  if ( v1 == 3 ) /*0x1000f1621*/
  {
    core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2( /*0x1000f1681*/
      *(_QWORD *)(a1 + 80),
      *(_QWORD *)(a1 + 88));
  }
  else
  {
    if ( v1 != 4 ) /*0x1000f1626*/
      return result; /*0x1000f1626*/
    if ( *(_BYTE *)(a1 + 776) == 3 ) /*0x1000f1636*/
    {
      core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a1 + 352); /*0x1000f168f*/
    }
    else if ( !*(_BYTE *)(a1 + 776) ) /*0x1000f162c*/
    {
      core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(a1 + 216); /*0x1000f1643*/
      v2 = *(_QWORD **)(a1 + 344); /*0x1000f1648*/
      if ( *v2 ) /*0x1000f164f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2[1], *v2, 1); /*0x1000f1660*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 88, 8); /*0x1000f1672*/
    }
  }
  v4 = *(_QWORD *)(a1 + 48); /*0x1000f1694*/
  if ( v4 ) /*0x1000f169b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 56), v4, 1); /*0x1000f16aa*/
  return result; /*0x1000f16a6*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1001246b0  __ZN4core3ptr57drop_in_place$LT$reqwest..async_impl..client..Pending$GT$17h14bbaa446e9798e2E_0
// 0x10012a670  __ZN4core3ptr96drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$17he09c21e64e830488E_0
// 0x1001080a0  __ZN4core3ptr226drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$17h0bbfe0f28d08e7ecE_0
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
