// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100345850 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h0c15de36b7bcca72(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100345860*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034586f*/
  if ( !v2 ) /*0x100345877*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10034592a*/
  v3 = v2; /*0x10034587d*/
  *v2 = 27503; /*0x100345880*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100345885*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100345894*/
  if ( !v4 ) /*0x10034589c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034593b*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003458a2*/
  *v4 = 1667462483; /*0x1003458a9*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1003458b3*/
  v5 = *a2; /*0x1003458b7*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x1003458be*/
  *(_QWORD *)(a1 + 72) = v5; /*0x1003458c2*/
  *(_DWORD *)(a1 + 96) = 1; /*0x1003458c6*/
  *(_BYTE *)(a1 + 100) = 1; /*0x1003458ce*/
  *(_QWORD *)a1 = 2; /*0x1003458d3*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003458da*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003458de*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003458e6*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003458ee*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003458f2*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003458fa*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100345902*/
  *(_QWORD *)(a1 + 64) = 0; /*0x10034590a*/
  return a1; /*0x100345919*/
}