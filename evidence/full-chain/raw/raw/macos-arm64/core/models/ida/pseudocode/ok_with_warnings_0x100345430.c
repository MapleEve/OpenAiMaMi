// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$16ok_with_warnings @ 0x100345430 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h5aea1e1a5899531c(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  _WORD *v4; // rax
  _WORD *v5; // r15
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100345444*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100345453*/
  if ( !v4 ) /*0x10034545b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100345543*/
  v5 = v4; /*0x100345461*/
  *v4 = 27503; /*0x100345464*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100345469*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100345478*/
  if ( !v6 ) /*0x100345480*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100345554*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x100345486*/
  *v6 = 1667462483; /*0x10034548d*/
  *(_QWORD *)(a1 + 64) = a3[2]; /*0x100345497*/
  v7 = *a3; /*0x10034549c*/
  *(_QWORD *)(a1 + 56) = a3[1]; /*0x1003454a3*/
  *(_QWORD *)(a1 + 48) = v7; /*0x1003454a8*/
  v8 = a2[1]; /*0x1003454b0*/
  *(_QWORD *)(a1 + 72) = *a2; /*0x1003454b4*/
  *(_QWORD *)(a1 + 80) = v8; /*0x1003454b9*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1003454c2*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x1003454cb*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x1003454d4*/
  *(_QWORD *)(a1 + 112) = a2[5]; /*0x1003454dd*/
  *(_QWORD *)(a1 + 120) = a2[6]; /*0x1003454e6*/
  *(_DWORD *)(a1 + 128) = 1; /*0x1003454eb*/
  *(_BYTE *)(a1 + 132) = 1; /*0x1003454f7*/
  *(_QWORD *)a1 = 2; /*0x100345500*/
  *(_QWORD *)(a1 + 8) = v5; /*0x100345508*/
  *(_QWORD *)(a1 + 16) = 2; /*0x10034550d*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100345516*/
  *(_QWORD *)(a1 + 32) = v6; /*0x10034551f*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100345524*/
  return a1; /*0x100345530*/
}