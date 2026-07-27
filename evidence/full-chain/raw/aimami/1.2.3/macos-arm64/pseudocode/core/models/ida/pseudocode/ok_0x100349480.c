// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100349480 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::he46dd80689000970(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100349490*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034949f*/
  if ( !v2 ) /*0x1003494a7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100349562*/
  v3 = v2; /*0x1003494ad*/
  *v2 = 27503; /*0x1003494b0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003494b5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003494c4*/
  if ( !v4 ) /*0x1003494cc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100349573*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003494d2*/
  *v4 = 1667462483; /*0x1003494d9*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x1003494e3*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1003494eb*/
  v5 = *a2; /*0x1003494ef*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x1003494f6*/
  *(_QWORD *)(a1 + 72) = v5; /*0x1003494fa*/
  *(_DWORD *)(a1 + 104) = 1; /*0x1003494fe*/
  *(_BYTE *)(a1 + 108) = 1; /*0x100349506*/
  *(_QWORD *)a1 = 2; /*0x10034950b*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100349512*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100349516*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034951e*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100349526*/
  *(_QWORD *)(a1 + 40) = 7; /*0x10034952a*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100349532*/
  *(_QWORD *)(a1 + 56) = 8; /*0x10034953a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100349542*/
  return a1; /*0x100349551*/
}