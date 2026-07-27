// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100347970 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h947aca756cc18d75(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100347980*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034798f*/
  if ( !v2 ) /*0x100347997*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100347a7b*/
  v3 = v2; /*0x10034799d*/
  *v2 = 27503; /*0x1003479a0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003479a5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003479b4*/
  if ( !v4 ) /*0x1003479bc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100347a8c*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003479c2*/
  *v4 = 1667462483; /*0x1003479c9*/
  *(_QWORD *)(a1 + 128) = a2[7]; /*0x1003479d3*/
  *(_QWORD *)(a1 + 120) = a2[6]; /*0x1003479de*/
  *(_QWORD *)(a1 + 112) = a2[5]; /*0x1003479e6*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x1003479ee*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x1003479f6*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1003479fe*/
  v5 = *a2; /*0x100347a02*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100347a09*/
  *(_QWORD *)(a1 + 72) = v5; /*0x100347a0d*/
  *(_DWORD *)(a1 + 136) = 1; /*0x100347a11*/
  *(_BYTE *)(a1 + 140) = 1; /*0x100347a1c*/
  *(_QWORD *)a1 = 2; /*0x100347a24*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100347a2b*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100347a2f*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100347a37*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100347a3f*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100347a43*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100347a4b*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100347a53*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100347a5b*/
  return a1; /*0x100347a6a*/
}