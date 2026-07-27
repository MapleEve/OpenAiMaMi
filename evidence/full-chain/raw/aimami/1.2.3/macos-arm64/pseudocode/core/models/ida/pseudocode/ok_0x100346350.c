// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346350 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h45687a04b670ac59(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100346361*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100346370*/
  if ( !v2 ) /*0x100346378*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10034642c*/
  v3 = v2; /*0x10034637e*/
  *v2 = 27503; /*0x100346381*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346386*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346395*/
  if ( !v4 ) /*0x10034639d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034643d*/
  v5 = v4; /*0x1003463a3*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003463a6*/
  *v4 = 1667462483; /*0x1003463ad*/
  memcpy((void *)(a1 + 72), a2, 0x148u); /*0x1003463bf*/
  *(_DWORD *)(a1 + 400) = 1; /*0x1003463c4*/
  *(_BYTE *)(a1 + 404) = 1; /*0x1003463cf*/
  *(_QWORD *)a1 = 2; /*0x1003463d7*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003463de*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003463e2*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003463ea*/
  *(_QWORD *)(a1 + 32) = v5; /*0x1003463f2*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003463f6*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003463fe*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100346406*/
  *(_QWORD *)(a1 + 64) = 0; /*0x10034640e*/
  return a1; /*0x100346419*/
}