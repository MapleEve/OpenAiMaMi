// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346730 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h5bb586e6e17224d7(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100346740*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034674f*/
  if ( !v2 ) /*0x100346757*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100346808*/
  v3 = v2; /*0x10034675d*/
  *v2 = 27503; /*0x100346760*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346765*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346774*/
  if ( !v4 ) /*0x10034677c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100346819*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100346782*/
  *v4 = 1667462483; /*0x100346789*/
  qmemcpy((void *)(a1 + 72), a2, 0x58u); /*0x10034679b*/
  *(_DWORD *)(a1 + 160) = 1; /*0x10034679e*/
  *(_BYTE *)(a1 + 164) = 1; /*0x1003467a9*/
  *(_QWORD *)a1 = 2; /*0x1003467b1*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003467b8*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003467bc*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003467c4*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003467cc*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003467d0*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003467d8*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003467e0*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003467e8*/
  return a1; /*0x1003467f7*/
}