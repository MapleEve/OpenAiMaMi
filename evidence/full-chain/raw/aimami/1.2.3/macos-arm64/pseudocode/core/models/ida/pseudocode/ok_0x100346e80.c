// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346e80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h7e5d3fedf5491edb(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100346e90*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100346e9f*/
  if ( !v2 ) /*0x100346ea7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100346f58*/
  v3 = v2; /*0x100346ead*/
  *v2 = 27503; /*0x100346eb0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346eb5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346ec4*/
  if ( !v4 ) /*0x100346ecc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100346f69*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100346ed2*/
  *v4 = 1667462483; /*0x100346ed9*/
  qmemcpy((void *)(a1 + 72), a2, 0x50u); /*0x100346eeb*/
  *(_DWORD *)(a1 + 152) = 1; /*0x100346eee*/
  *(_BYTE *)(a1 + 156) = 1; /*0x100346ef9*/
  *(_QWORD *)a1 = 2; /*0x100346f01*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100346f08*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100346f0c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100346f14*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100346f1c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100346f20*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100346f28*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100346f30*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100346f38*/
  return a1; /*0x100346f47*/
}