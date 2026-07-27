// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346fb0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h805ff6e1850606e3(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100346fc0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100346fcf*/
  if ( !v2 ) /*0x100346fd7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100347092*/
  v3 = v2; /*0x100346fdd*/
  *v2 = 27503; /*0x100346fe0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346fe5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346ff4*/
  if ( !v4 ) /*0x100346ffc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003470a3*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100347002*/
  *v4 = 1667462483; /*0x100347009*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100347013*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x10034701b*/
  v5 = *a2; /*0x10034701f*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100347026*/
  *(_QWORD *)(a1 + 72) = v5; /*0x10034702a*/
  *(_DWORD *)(a1 + 104) = 1; /*0x10034702e*/
  *(_BYTE *)(a1 + 108) = 1; /*0x100347036*/
  *(_QWORD *)a1 = 2; /*0x10034703b*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100347042*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100347046*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034704e*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100347056*/
  *(_QWORD *)(a1 + 40) = 7; /*0x10034705a*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100347062*/
  *(_QWORD *)(a1 + 56) = 8; /*0x10034706a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100347072*/
  return a1; /*0x100347081*/
}