// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003469a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h6c74eb133b70c3e2(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003469b1*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003469c0*/
  if ( !v2 ) /*0x1003469c8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100346a7c*/
  v3 = v2; /*0x1003469ce*/
  *v2 = 27503; /*0x1003469d1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003469d6*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003469e5*/
  if ( !v4 ) /*0x1003469ed*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100346a8d*/
  v5 = v4; /*0x1003469f3*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003469f6*/
  *v4 = 1667462483; /*0x1003469fd*/
  memcpy((void *)(a1 + 72), a2, 0x128u); /*0x100346a0f*/
  *(_DWORD *)(a1 + 368) = 1; /*0x100346a14*/
  *(_BYTE *)(a1 + 372) = 1; /*0x100346a1f*/
  *(_QWORD *)a1 = 2; /*0x100346a27*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100346a2e*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100346a32*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100346a3a*/
  *(_QWORD *)(a1 + 32) = v5; /*0x100346a42*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100346a46*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100346a4e*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100346a56*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100346a5e*/
  return a1; /*0x100346a69*/
}