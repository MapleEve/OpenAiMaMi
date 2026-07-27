// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100347240 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h812dc47c5eb533ec(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100347250*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034725f*/
  if ( !v2 ) /*0x100347267*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100347318*/
  v3 = v2; /*0x10034726d*/
  *v2 = 27503; /*0x100347270*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100347275*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100347284*/
  if ( !v4 ) /*0x10034728c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100347329*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100347292*/
  *v4 = 1667462483; /*0x100347299*/
  qmemcpy((void *)(a1 + 72), a2, 0x58u); /*0x1003472ab*/
  *(_DWORD *)(a1 + 160) = 1; /*0x1003472ae*/
  *(_BYTE *)(a1 + 164) = 1; /*0x1003472b9*/
  *(_QWORD *)a1 = 2; /*0x1003472c1*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003472c8*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003472cc*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003472d4*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003472dc*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003472e0*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003472e8*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003472f0*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003472f8*/
  return a1; /*0x100347307*/
}