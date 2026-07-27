// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348230 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::ha86c4f1e62a7cff1(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348240*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034824f*/
  if ( !v2 ) /*0x100348257*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100348308*/
  v3 = v2; /*0x10034825d*/
  *v2 = 27503; /*0x100348260*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348265*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348274*/
  if ( !v4 ) /*0x10034827c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100348319*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348282*/
  *v4 = 1667462483; /*0x100348289*/
  qmemcpy((void *)(a1 + 72), a2, 0x60u); /*0x10034829b*/
  *(_DWORD *)(a1 + 168) = 1; /*0x10034829e*/
  *(_BYTE *)(a1 + 172) = 1; /*0x1003482a9*/
  *(_QWORD *)a1 = 2; /*0x1003482b1*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003482b8*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003482bc*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003482c4*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003482cc*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003482d0*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003482d8*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003482e0*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003482e8*/
  return a1; /*0x1003482f7*/
}