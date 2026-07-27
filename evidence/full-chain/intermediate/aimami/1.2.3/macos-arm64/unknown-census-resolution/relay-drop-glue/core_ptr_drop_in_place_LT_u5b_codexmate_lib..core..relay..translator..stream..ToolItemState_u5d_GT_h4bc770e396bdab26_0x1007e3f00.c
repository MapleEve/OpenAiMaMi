// IDA Hex-Rays decompile evidence
// addr: 0x1007e3f00
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
void __fastcall core::ptr::drop_in_place$LT$$u5b$codexmate_lib..core..relay..translator..stream..ToolItemState$u5d$$GT$::h4bc770e396bdab26(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  if ( a2 ) /*0x1007e3f03*/
  {
    v2 = a2; /*0x1007e3f10*/
    v3 = (_QWORD *)(a1 + 80); /*0x1007e3f16*/
    do /*0x1007e3f27*/
    {
      v4 = *(v3 - 10); /*0x1007e3f29*/
      if ( v4 ) /*0x1007e3f30*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v3 - 9), v4, 1); /*0x1007e3f3b*/
      v5 = *(v3 - 7); /*0x1007e3f40*/
      if ( v5 ) /*0x1007e3f47*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v3 - 6), v5, 1); /*0x1007e3f52*/
      v6 = *(v3 - 4); /*0x1007e3f57*/
      if ( v6 ) /*0x1007e3f5e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v3 - 3), v6, 1); /*0x1007e3f69*/
      v7 = *(v3 - 1); /*0x1007e3f6e*/
      if ( v7 ) /*0x1007e3f75*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v7, 1); /*0x1007e3f7f*/
      v3 += 13; /*0x1007e3f20*/
      --v2; /*0x1007e3f24*/
    }
    while ( v2 ); /*0x1007e3f27*/
  }
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
