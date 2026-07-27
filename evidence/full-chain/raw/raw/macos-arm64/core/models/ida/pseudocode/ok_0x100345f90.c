// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100345f90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h2e8a3f7822e9c1fc(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100345fa0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100345faf*/
  if ( !v2 ) /*0x100345fb7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100346068*/
  v3 = v2; /*0x100345fbd*/
  *v2 = 27503; /*0x100345fc0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100345fc5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100345fd4*/
  if ( !v4 ) /*0x100345fdc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100346079*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100345fe2*/
  *v4 = 1667462483; /*0x100345fe9*/
  qmemcpy((void *)(a1 + 72), a2, 0x48u); /*0x100345ffb*/
  *(_DWORD *)(a1 + 144) = 1; /*0x100345ffe*/
  *(_BYTE *)(a1 + 148) = 1; /*0x100346009*/
  *(_QWORD *)a1 = 2; /*0x100346011*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100346018*/
  *(_QWORD *)(a1 + 16) = 2; /*0x10034601c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100346024*/
  *(_QWORD *)(a1 + 32) = v4; /*0x10034602c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100346030*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100346038*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100346040*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100346048*/
  return a1; /*0x100346057*/
}