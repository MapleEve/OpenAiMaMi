// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348960 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hc85091822687b974(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348970*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034897f*/
  if ( !v2 ) /*0x100348987*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100348a6b*/
  v3 = v2; /*0x10034898d*/
  *v2 = 27503; /*0x100348990*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348995*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003489a4*/
  if ( !v4 ) /*0x1003489ac*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100348a7c*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003489b2*/
  *v4 = 1667462483; /*0x1003489b9*/
  *(_QWORD *)(a1 + 128) = a2[7]; /*0x1003489c3*/
  *(_QWORD *)(a1 + 120) = a2[6]; /*0x1003489ce*/
  *(_QWORD *)(a1 + 112) = a2[5]; /*0x1003489d6*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x1003489de*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x1003489e6*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1003489ee*/
  v5 = *a2; /*0x1003489f2*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x1003489f9*/
  *(_QWORD *)(a1 + 72) = v5; /*0x1003489fd*/
  *(_DWORD *)(a1 + 136) = 1; /*0x100348a01*/
  *(_BYTE *)(a1 + 140) = 1; /*0x100348a0c*/
  *(_QWORD *)a1 = 2; /*0x100348a14*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100348a1b*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100348a1f*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100348a27*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100348a2f*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100348a33*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100348a3b*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100348a43*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100348a4b*/
  return a1; /*0x100348a5a*/
}