// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100345e50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h216067d347a201ac(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100345e60*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100345e6f*/
  if ( !v2 ) /*0x100345e77*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100345f3a*/
  v3 = v2; /*0x100345e7d*/
  *v2 = 27503; /*0x100345e80*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100345e85*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100345e94*/
  if ( !v4 ) /*0x100345e9c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100345f4b*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100345ea2*/
  *v4 = 1667462483; /*0x100345ea9*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x100345eb3*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100345ebb*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100345ec3*/
  v5 = *a2; /*0x100345ec7*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100345ece*/
  *(_QWORD *)(a1 + 72) = v5; /*0x100345ed2*/
  *(_DWORD *)(a1 + 112) = 1; /*0x100345ed6*/
  *(_BYTE *)(a1 + 116) = 1; /*0x100345ede*/
  *(_QWORD *)a1 = 2; /*0x100345ee3*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100345eea*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100345eee*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100345ef6*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100345efe*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100345f02*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100345f0a*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100345f12*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100345f1a*/
  return a1; /*0x100345f29*/
}