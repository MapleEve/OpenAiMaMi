// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100347830 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h94764890305376b9(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100347840*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034784f*/
  if ( !v2 ) /*0x100347857*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100347912*/
  v3 = v2; /*0x10034785d*/
  *v2 = 27503; /*0x100347860*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100347865*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100347874*/
  if ( !v4 ) /*0x10034787c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100347923*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100347882*/
  *v4 = 1667462483; /*0x100347889*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100347893*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x10034789b*/
  v5 = *a2; /*0x10034789f*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x1003478a6*/
  *(_QWORD *)(a1 + 72) = v5; /*0x1003478aa*/
  *(_DWORD *)(a1 + 104) = 1; /*0x1003478ae*/
  *(_BYTE *)(a1 + 108) = 1; /*0x1003478b6*/
  *(_QWORD *)a1 = 2; /*0x1003478bb*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003478c2*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003478c6*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003478ce*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003478d6*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003478da*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003478e2*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003478ea*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003478f2*/
  return a1; /*0x100347901*/
}