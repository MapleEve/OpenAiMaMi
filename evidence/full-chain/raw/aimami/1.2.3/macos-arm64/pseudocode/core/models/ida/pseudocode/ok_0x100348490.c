// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348490 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hfcccfab8d11ab999(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003484a0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003484af*/
  if ( !v2 ) /*0x1003484b7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100348572*/
  v3 = v2; /*0x1003484bd*/
  *v2 = 27503; /*0x1003484c0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003484c5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003484d4*/
  if ( !v4 ) /*0x1003484dc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100348583*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003484e2*/
  *v4 = 1667462483; /*0x1003484e9*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x1003484f3*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1003484fb*/
  v5 = *a2; /*0x1003484ff*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100348506*/
  *(_QWORD *)(a1 + 72) = v5; /*0x10034850a*/
  *(_DWORD *)(a1 + 104) = 1; /*0x10034850e*/
  *(_BYTE *)(a1 + 108) = 1; /*0x100348516*/
  *(_QWORD *)a1 = 2; /*0x10034851b*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100348522*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100348526*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034852e*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100348536*/
  *(_QWORD *)(a1 + 40) = 7; /*0x10034853a*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100348542*/
  *(_QWORD *)(a1 + 56) = 8; /*0x10034854a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100348552*/
  return a1; /*0x100348561*/
}