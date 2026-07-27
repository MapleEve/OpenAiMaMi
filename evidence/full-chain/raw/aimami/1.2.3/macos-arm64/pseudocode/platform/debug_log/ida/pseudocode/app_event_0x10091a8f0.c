// __ZN13codexmate_lib8platform9debug_log9app_event @ 0x10091a8f0 | 基线 same-set
double __fastcall codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 *v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  double result; // xmm0_8
  _QWORD v16[6]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-88h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-70h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-58h] BYREF
  __int64 v20; // [rsp+80h] [rbp-40h] BYREF
  __int64 v21; // [rsp+88h] [rbp-38h]
  __int64 v22; // [rsp+90h] [rbp-30h]

  codexmate_lib::platform::debug_log::normalize_event_token::hb3eb4003c8eaeefd(v19, a1, a2, a4, (__int64)a5, a6); /*0x10091a91a*/
  codexmate_lib::platform::debug_log::normalize_event_token::hb3eb4003c8eaeefd(v18, a3, a4, v9, v10, v11); /*0x10091a92c*/
  v12 = (unsigned __int8 *)a5[1]; /*0x10091a931*/
  codexmate_lib::platform::debug_log::bounded::h95d3a386b5ba0844(v17, v12, a5[2], 2000, v13, v14); /*0x10091a94b*/
  v16[0] = v19; /*0x10091a950*/
  v16[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10091a95e*/
  v16[2] = v18; /*0x10091a965*/
  v16[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10091a96c*/
  v16[4] = v17; /*0x10091a973*/
  v16[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10091a97a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v20, &anon_155c4da9b5393270cfa7378e2b52c417_470, v16); /*0x10091a993*/
  if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de ) /*0x10091a9a2*/
    result = codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc((__int64)&unk_1019FF248, v21, v22); /*0x10091a9b6*/
  if ( v20 ) /*0x10091a9c2*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x10091a9cd*/
  if ( v17[0] ) /*0x10091a9dc*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[1], v17[0], 1); /*0x10091a9e7*/
  if ( v18[0] ) /*0x10091a9f3*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[1], v18[0], 1); /*0x10091a9fe*/
  if ( v19[0] ) /*0x10091aa0a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19[1], v19[0], 1); /*0x10091aa15*/
  if ( *a5 ) /*0x10091aa1a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, *a5, 1); /*0x10091aa2a*/
  return result; /*0x10091aa2f*/
}