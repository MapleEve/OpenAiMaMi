// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100349960 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf6edda7bcbeb3a54(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10034996a*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100349979*/
  if ( !v2 ) /*0x100349981*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100349a11*/
  v3 = v2; /*0x100349987*/
  *v2 = 27503; /*0x10034998a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x10034998f*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10034999e*/
  if ( !v4 ) /*0x1003499a6*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100349a20*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003499a8*/
  *v4 = 1667462483; /*0x1003499af*/
  *(_DWORD *)(a1 + 72) = 1; /*0x1003499b5*/
  *(_BYTE *)(a1 + 76) = 1; /*0x1003499bc*/
  *(_QWORD *)a1 = 2; /*0x1003499c0*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003499c7*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003499cb*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003499d3*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003499db*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003499df*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003499e7*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003499ef*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003499f7*/
  return a1; /*0x100349a02*/
}