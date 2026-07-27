// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003475d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8e7cb16a780864e6(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003475e1*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003475f0*/
  if ( !v2 ) /*0x1003475f8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003476ac*/
  v3 = v2; /*0x1003475fe*/
  *v2 = 27503; /*0x100347601*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100347606*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100347615*/
  if ( !v4 ) /*0x10034761d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003476bd*/
  v5 = v4; /*0x100347623*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100347626*/
  *v4 = 1667462483; /*0x10034762d*/
  memcpy((void *)(a1 + 72), a2, 0xE8u); /*0x10034763f*/
  *(_DWORD *)(a1 + 304) = 1; /*0x100347644*/
  *(_BYTE *)(a1 + 308) = 1; /*0x10034764f*/
  *(_QWORD *)a1 = 2; /*0x100347657*/
  *(_QWORD *)(a1 + 8) = v3; /*0x10034765e*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100347662*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034766a*/
  *(_QWORD *)(a1 + 32) = v5; /*0x100347672*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100347676*/
  *(_QWORD *)(a1 + 48) = 0; /*0x10034767e*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100347686*/
  *(_QWORD *)(a1 + 64) = 0; /*0x10034768e*/
  return a1; /*0x100347699*/
}