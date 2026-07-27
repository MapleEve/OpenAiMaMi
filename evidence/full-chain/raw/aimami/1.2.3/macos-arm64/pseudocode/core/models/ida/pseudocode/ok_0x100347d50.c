// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100347d50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h96dc74fc83abf1b0(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100347d60*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100347d6f*/
  if ( !v2 ) /*0x100347d77*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100347e32*/
  v3 = v2; /*0x100347d7d*/
  *v2 = 27503; /*0x100347d80*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100347d85*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100347d94*/
  if ( !v4 ) /*0x100347d9c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100347e43*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100347da2*/
  *v4 = 1667462483; /*0x100347da9*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100347db3*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100347dbb*/
  v5 = *a2; /*0x100347dbf*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100347dc6*/
  *(_QWORD *)(a1 + 72) = v5; /*0x100347dca*/
  *(_DWORD *)(a1 + 104) = 1; /*0x100347dce*/
  *(_BYTE *)(a1 + 108) = 1; /*0x100347dd6*/
  *(_QWORD *)a1 = 2; /*0x100347ddb*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100347de2*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100347de6*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100347dee*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100347df6*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100347dfa*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100347e02*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100347e0a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100347e12*/
  return a1; /*0x100347e21*/
}