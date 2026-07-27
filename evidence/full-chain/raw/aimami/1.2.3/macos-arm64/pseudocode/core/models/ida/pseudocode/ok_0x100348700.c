// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348700 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hc30352c15bf6895c(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348710*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034871f*/
  if ( !v2 ) /*0x100348727*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003487d8*/
  v3 = v2; /*0x10034872d*/
  *v2 = 27503; /*0x100348730*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348735*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348744*/
  if ( !v4 ) /*0x10034874c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003487e9*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348752*/
  *v4 = 1667462483; /*0x100348759*/
  qmemcpy((void *)(a1 + 72), a2, 0x50u); /*0x10034876b*/
  *(_DWORD *)(a1 + 152) = 1; /*0x10034876e*/
  *(_BYTE *)(a1 + 156) = 1; /*0x100348779*/
  *(_QWORD *)a1 = 2; /*0x100348781*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100348788*/
  *(_QWORD *)(a1 + 16) = 2; /*0x10034878c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100348794*/
  *(_QWORD *)(a1 + 32) = v4; /*0x10034879c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003487a0*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003487a8*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003487b0*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003487b8*/
  return a1; /*0x1003487c7*/
}