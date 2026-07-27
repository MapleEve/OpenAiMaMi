// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348360 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hb29085f7e85859aa(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348370*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034837f*/
  if ( !v2 ) /*0x100348387*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100348438*/
  v3 = v2; /*0x10034838d*/
  *v2 = 27503; /*0x100348390*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348395*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003483a4*/
  if ( !v4 ) /*0x1003483ac*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100348449*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003483b2*/
  *v4 = 1667462483; /*0x1003483b9*/
  qmemcpy((void *)(a1 + 72), a2, 0x48u); /*0x1003483cb*/
  *(_DWORD *)(a1 + 144) = 1; /*0x1003483ce*/
  *(_BYTE *)(a1 + 148) = 1; /*0x1003483d9*/
  *(_QWORD *)a1 = 2; /*0x1003483e1*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003483e8*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003483ec*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003483f4*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003483fc*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100348400*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100348408*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100348410*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100348418*/
  return a1; /*0x100348427*/
}