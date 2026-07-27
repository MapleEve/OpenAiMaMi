// __ZN13codexmate_lib8commands8sessions23export_session_markdown28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1007020d0 | 基线 same-set
double __fastcall codexmate_lib::commands::sessions::export_session_markdown::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf93e433d7b2a1b45(
        _QWORD *a1,
        _QWORD *a2,
        __m128i a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi

  v4 = a2[96]; /*0x1007020ec*/
  v5 = a2[97]; /*0x1007020f3*/
  codexmate_lib::core::sessions::export_session_markdown::h74fb29cfcc312df6(a1, a2, a2[94], a2[95], v5, a2[98], a3); /*0x100702104*/
  if ( v4 ) /*0x10070210c*/
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x100702119*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(a2); /*0x100702121*/
  v6 = a2[93]; /*0x100702126*/
  if ( v6 ) /*0x100702130*/
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[94], v6, 1); /*0x100702146*/
  return *(double *)a3.i64; /*0x10070213e*/
}