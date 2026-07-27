// __ZN13codexmate_lib4core5relay17router_transition12record_event @ 0x1009017f0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::router_transition::record_event::h5b6a19cae18f5f3d(
        char a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  double result; // xmm0_8
  _BYTE v9[24]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v10[4]; // [rsp+18h] [rbp-58h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-38h] BYREF
  char v12; // [rsp+4Fh] [rbp-21h] BYREF

  v12 = a1; /*0x100901808*/
  v6 = a4[1]; /*0x10090180c*/
  v7 = a4[2]; /*0x100901810*/
  v11[0] = v6; /*0x100901814*/
  v11[1] = v7; /*0x100901818*/
  v10[0] = &v12; /*0x100901820*/
  v10[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e; /*0x10090182b*/
  v10[2] = v11; /*0x100901833*/
  v10[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10090183e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v9, &unk_1017C7632, v10); /*0x100901851*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, a2, a3, v9); /*0x10090186c*/
  if ( *a4 ) /*0x100901871*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, *a4, 1); /*0x100901881*/
  return result; /*0x100901886*/
}