// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346c20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h6f9c1bea516c67e2(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100346c30*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100346c3f*/
  if ( !v2 ) /*0x100346c47*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100346d2b*/
  v3 = v2; /*0x100346c4d*/
  *v2 = 27503; /*0x100346c50*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346c55*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346c64*/
  if ( !v4 ) /*0x100346c6c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100346d3c*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100346c72*/
  *v4 = 1667462483; /*0x100346c79*/
  *(_QWORD *)(a1 + 128) = a2[7]; /*0x100346c83*/
  *(_QWORD *)(a1 + 120) = a2[6]; /*0x100346c8e*/
  *(_QWORD *)(a1 + 112) = a2[5]; /*0x100346c96*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x100346c9e*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100346ca6*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100346cae*/
  v5 = *a2; /*0x100346cb2*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100346cb9*/
  *(_QWORD *)(a1 + 72) = v5; /*0x100346cbd*/
  *(_DWORD *)(a1 + 136) = 1; /*0x100346cc1*/
  *(_BYTE *)(a1 + 140) = 1; /*0x100346ccc*/
  *(_QWORD *)a1 = 2; /*0x100346cd4*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100346cdb*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100346cdf*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100346ce7*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100346cef*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100346cf3*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100346cfb*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100346d03*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100346d0b*/
  return a1; /*0x100346d1a*/
}