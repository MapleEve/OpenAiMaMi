// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348830 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hc48e0a84672ac72d(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348840*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034884f*/
  if ( !v2 ) /*0x100348857*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10034890a*/
  v3 = v2; /*0x10034885d*/
  *v2 = 27503; /*0x100348860*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348865*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348874*/
  if ( !v4 ) /*0x10034887c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034891b*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348882*/
  *v4 = 1667462483; /*0x100348889*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100348893*/
  v5 = *a2; /*0x100348897*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x10034889e*/
  *(_QWORD *)(a1 + 72) = v5; /*0x1003488a2*/
  *(_DWORD *)(a1 + 96) = 1; /*0x1003488a6*/
  *(_BYTE *)(a1 + 100) = 1; /*0x1003488ae*/
  *(_QWORD *)a1 = 2; /*0x1003488b3*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003488ba*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003488be*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003488c6*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003488ce*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003488d2*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003488da*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003488e2*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003488ea*/
  return a1; /*0x1003488f9*/
}