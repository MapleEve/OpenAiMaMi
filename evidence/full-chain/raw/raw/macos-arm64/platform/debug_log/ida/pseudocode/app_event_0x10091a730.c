// __ZN13codexmate_lib8platform9debug_log9app_event @ 0x10091a730 | 基线 same-set
double __fastcall codexmate_lib::platform::debug_log::app_event::ha23bcf77044d6eee(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  double result; // xmm0_8
  _QWORD v16[6]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-88h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v19; // [rsp+68h] [rbp-58h] BYREF
  __int64 v20; // [rsp+70h] [rbp-50h]
  __int64 v21; // [rsp+78h] [rbp-48h]
  _QWORD v22[8]; // [rsp+80h] [rbp-40h] BYREF

  codexmate_lib::platform::debug_log::normalize_event_token::hb3eb4003c8eaeefd(v22, a1, a2, a4, (__int64)a5, a6); /*0x10091a75a*/
  codexmate_lib::platform::debug_log::normalize_event_token::hb3eb4003c8eaeefd(v18, a3, a4, v10, v11, v12); /*0x10091a76c*/
  codexmate_lib::platform::debug_log::bounded::h95d3a386b5ba0844(v17, a5, a6, 2000, v13, v14); /*0x10091a786*/
  v16[0] = v22; /*0x10091a78f*/
  v16[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10091a79d*/
  v16[2] = v18; /*0x10091a7a4*/
  v16[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10091a7ab*/
  v16[4] = v17; /*0x10091a7b2*/
  v16[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10091a7b9*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v19, &anon_155c4da9b5393270cfa7378e2b52c417_470, v16); /*0x10091a7d2*/
  if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de ) /*0x10091a7e1*/
    result = codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc((__int64)&unk_1019FF248, v20, v21); /*0x10091a7f5*/
  if ( v19 ) /*0x10091a801*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x10091a80c*/
  if ( v17[0] ) /*0x10091a81b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[1], v17[0], 1); /*0x10091a826*/
  if ( v18[0] ) /*0x10091a832*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[1], v18[0], 1); /*0x10091a83d*/
  if ( v22[0] ) /*0x10091a849*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[1], v22[0], 1); /*0x10091a854*/
  return result; /*0x10091a859*/
}