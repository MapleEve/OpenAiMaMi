// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100345bd0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h1c53b334ef90e766(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100345be0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100345bef*/
  if ( !v2 ) /*0x100345bf7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100345ca8*/
  v3 = v2; /*0x100345bfd*/
  *v2 = 27503; /*0x100345c00*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100345c05*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100345c14*/
  if ( !v4 ) /*0x100345c1c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100345cb9*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100345c22*/
  *v4 = 1667462483; /*0x100345c29*/
  qmemcpy((void *)(a1 + 72), a2, 0x80u); /*0x100345c3b*/
  *(_DWORD *)(a1 + 200) = 1; /*0x100345c3e*/
  *(_BYTE *)(a1 + 204) = 1; /*0x100345c49*/
  *(_QWORD *)a1 = 2; /*0x100345c51*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100345c58*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100345c5c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100345c64*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100345c6c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100345c70*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100345c78*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100345c80*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100345c88*/
  return a1; /*0x100345c97*/
}