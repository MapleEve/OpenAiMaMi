// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346210 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h42340fb3a28d6e0d(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100346220*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034622f*/
  if ( !v2 ) /*0x100346237*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003462fa*/
  v3 = v2; /*0x10034623d*/
  *v2 = 27503; /*0x100346240*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346245*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346254*/
  if ( !v4 ) /*0x10034625c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034630b*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100346262*/
  *v4 = 1667462483; /*0x100346269*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x100346273*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x10034627b*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100346283*/
  v5 = *a2; /*0x100346287*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x10034628e*/
  *(_QWORD *)(a1 + 72) = v5; /*0x100346292*/
  *(_DWORD *)(a1 + 112) = 1; /*0x100346296*/
  *(_BYTE *)(a1 + 116) = 1; /*0x10034629e*/
  *(_QWORD *)a1 = 2; /*0x1003462a3*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003462aa*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003462ae*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003462b6*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003462be*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003462c2*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003462ca*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003462d2*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003462da*/
  return a1; /*0x1003462e9*/
}