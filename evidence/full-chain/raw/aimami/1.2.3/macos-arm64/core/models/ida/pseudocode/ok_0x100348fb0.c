// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348fb0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hd85bd7f8bdddd4fd(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348fc0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100348fcf*/
  if ( !v2 ) /*0x100348fd7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100349088*/
  v3 = v2; /*0x100348fdd*/
  *v2 = 27503; /*0x100348fe0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348fe5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348ff4*/
  if ( !v4 ) /*0x100348ffc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100349099*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100349002*/
  *v4 = 1667462483; /*0x100349009*/
  qmemcpy((void *)(a1 + 72), a2, 0x60u); /*0x10034901b*/
  *(_DWORD *)(a1 + 168) = 1; /*0x10034901e*/
  *(_BYTE *)(a1 + 172) = 1; /*0x100349029*/
  *(_QWORD *)a1 = 2; /*0x100349031*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100349038*/
  *(_QWORD *)(a1 + 16) = 2; /*0x10034903c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100349044*/
  *(_QWORD *)(a1 + 32) = v4; /*0x10034904c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100349050*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100349058*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100349060*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100349068*/
  return a1; /*0x100349077*/
}