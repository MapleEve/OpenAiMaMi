// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100347fc0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::ha20fbaf465e20dfa(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100347fd0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100347fdf*/
  if ( !v2 ) /*0x100347fe7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003480a2*/
  v3 = v2; /*0x100347fed*/
  *v2 = 27503; /*0x100347ff0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100347ff5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348004*/
  if ( !v4 ) /*0x10034800c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003480b3*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348012*/
  *v4 = 1667462483; /*0x100348019*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100348023*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x10034802b*/
  v5 = *a2; /*0x10034802f*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100348036*/
  *(_QWORD *)(a1 + 72) = v5; /*0x10034803a*/
  *(_DWORD *)(a1 + 104) = 1; /*0x10034803e*/
  *(_BYTE *)(a1 + 108) = 1; /*0x100348046*/
  *(_QWORD *)a1 = 2; /*0x10034804b*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100348052*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100348056*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034805e*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100348066*/
  *(_QWORD *)(a1 + 40) = 7; /*0x10034806a*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100348072*/
  *(_QWORD *)(a1 + 56) = 8; /*0x10034807a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100348082*/
  return a1; /*0x100348091*/
}