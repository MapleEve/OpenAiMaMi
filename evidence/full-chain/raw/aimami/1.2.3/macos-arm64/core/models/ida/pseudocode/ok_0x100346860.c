// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346860 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h5c7cbf2dd1b0ed02(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100346870*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034687f*/
  if ( !v2 ) /*0x100346887*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10034694a*/
  v3 = v2; /*0x10034688d*/
  *v2 = 27503; /*0x100346890*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346895*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003468a4*/
  if ( !v4 ) /*0x1003468ac*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034695b*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003468b2*/
  *v4 = 1667462483; /*0x1003468b9*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x1003468c3*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x1003468cb*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1003468d3*/
  v5 = *a2; /*0x1003468d7*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x1003468de*/
  *(_QWORD *)(a1 + 72) = v5; /*0x1003468e2*/
  *(_DWORD *)(a1 + 112) = 1; /*0x1003468e6*/
  *(_BYTE *)(a1 + 116) = 1; /*0x1003468ee*/
  *(_QWORD *)a1 = 2; /*0x1003468f3*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003468fa*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003468fe*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100346906*/
  *(_QWORD *)(a1 + 32) = v4; /*0x10034690e*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100346912*/
  *(_QWORD *)(a1 + 48) = 0; /*0x10034691a*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100346922*/
  *(_QWORD *)(a1 + 64) = 0; /*0x10034692a*/
  return a1; /*0x100346939*/
}