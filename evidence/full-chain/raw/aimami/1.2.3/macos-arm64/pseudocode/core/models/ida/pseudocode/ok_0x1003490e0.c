// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003490e0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hdce455b0d029b982(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003490f0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003490ff*/
  if ( !v2 ) /*0x100349107*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003491c2*/
  v3 = v2; /*0x10034910d*/
  *v2 = 27503; /*0x100349110*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100349115*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100349124*/
  if ( !v4 ) /*0x10034912c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003491d3*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100349132*/
  *v4 = 1667462483; /*0x100349139*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100349143*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x10034914b*/
  v5 = *a2; /*0x10034914f*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100349156*/
  *(_QWORD *)(a1 + 72) = v5; /*0x10034915a*/
  *(_DWORD *)(a1 + 104) = 1; /*0x10034915e*/
  *(_BYTE *)(a1 + 108) = 1; /*0x100349166*/
  *(_QWORD *)a1 = 2; /*0x10034916b*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100349172*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100349176*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034917e*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100349186*/
  *(_QWORD *)(a1 + 40) = 7; /*0x10034918a*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100349192*/
  *(_QWORD *)(a1 + 56) = 8; /*0x10034919a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003491a2*/
  return a1; /*0x1003491b1*/
}