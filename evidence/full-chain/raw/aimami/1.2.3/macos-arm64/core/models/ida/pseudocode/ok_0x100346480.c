// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346480 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h46a9370900051674(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100346490*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034649f*/
  if ( !v2 ) /*0x1003464a7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100346572*/
  v3 = v2; /*0x1003464ad*/
  *v2 = 27503; /*0x1003464b0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003464b5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003464c4*/
  if ( !v4 ) /*0x1003464cc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100346583*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003464d2*/
  *v4 = 1667462483; /*0x1003464d9*/
  *(_QWORD *)(a1 + 112) = a2[5]; /*0x1003464e3*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x1003464eb*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x1003464f3*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1003464fb*/
  v5 = *a2; /*0x1003464ff*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100346506*/
  *(_QWORD *)(a1 + 72) = v5; /*0x10034650a*/
  *(_DWORD *)(a1 + 120) = 1; /*0x10034650e*/
  *(_BYTE *)(a1 + 124) = 1; /*0x100346516*/
  *(_QWORD *)a1 = 2; /*0x10034651b*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100346522*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100346526*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034652e*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100346536*/
  *(_QWORD *)(a1 + 40) = 7; /*0x10034653a*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100346542*/
  *(_QWORD *)(a1 + 56) = 8; /*0x10034654a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100346552*/
  return a1; /*0x100346561*/
}