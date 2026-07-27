// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348100 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::ha21784da8ac92a2a(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348111*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100348120*/
  if ( !v2 ) /*0x100348128*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003481dc*/
  v3 = v2; /*0x10034812e*/
  *v2 = 27503; /*0x100348131*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348136*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348145*/
  if ( !v4 ) /*0x10034814d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003481ed*/
  v5 = v4; /*0x100348153*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348156*/
  *v4 = 1667462483; /*0x10034815d*/
  memcpy((void *)(a1 + 72), a2, 0x120u); /*0x10034816f*/
  *(_DWORD *)(a1 + 360) = 1; /*0x100348174*/
  *(_BYTE *)(a1 + 364) = 1; /*0x10034817f*/
  *(_QWORD *)a1 = 2; /*0x100348187*/
  *(_QWORD *)(a1 + 8) = v3; /*0x10034818e*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100348192*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034819a*/
  *(_QWORD *)(a1 + 32) = v5; /*0x1003481a2*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003481a6*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003481ae*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003481b6*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003481be*/
  return a1; /*0x1003481c9*/
}