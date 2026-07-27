// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100349830 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf1357b66f780f0d9(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100349841*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100349850*/
  if ( !v2 ) /*0x100349858*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10034990c*/
  v3 = v2; /*0x10034985e*/
  *v2 = 27503; /*0x100349861*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100349866*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100349875*/
  if ( !v4 ) /*0x10034987d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034991d*/
  v5 = v4; /*0x100349883*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100349886*/
  *v4 = 1667462483; /*0x10034988d*/
  memcpy((void *)(a1 + 72), a2, 0xF0u); /*0x10034989f*/
  *(_DWORD *)(a1 + 312) = 1; /*0x1003498a4*/
  *(_BYTE *)(a1 + 316) = 1; /*0x1003498af*/
  *(_QWORD *)a1 = 2; /*0x1003498b7*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003498be*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003498c2*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003498ca*/
  *(_QWORD *)(a1 + 32) = v5; /*0x1003498d2*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003498d6*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003498de*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003498e6*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003498ee*/
  return a1; /*0x1003498f9*/
}