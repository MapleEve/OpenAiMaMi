// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100349ce0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8d0ca3aa1d2f05e(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r15
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100349cf0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100349cff*/
  if ( !v2 ) /*0x100349d07*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100349da1*/
  v3 = v2; /*0x100349d0d*/
  *v2 = 27503; /*0x100349d10*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100349d15*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100349d24*/
  if ( !v4 ) /*0x100349d2c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100349db0*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100349d2e*/
  *v4 = 1667462483; /*0x100349d35*/
  *(_DWORD *)(a1 + 72) = 1; /*0x100349d3b*/
  *(_BYTE *)(a1 + 76) = 1; /*0x100349d42*/
  *(_QWORD *)a1 = 2; /*0x100349d46*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100349d4d*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100349d51*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100349d59*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100349d61*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100349d65*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100349d6d*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100349d75*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100349d7d*/
  *(_BYTE *)(a1 + 77) = a2; /*0x100349d85*/
  return a1; /*0x100349d90*/
}