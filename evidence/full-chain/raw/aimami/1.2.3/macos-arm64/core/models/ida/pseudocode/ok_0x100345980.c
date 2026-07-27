// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100345980 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h10461fc8c8750ce5(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100345991*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003459a0*/
  if ( !v2 ) /*0x1003459a8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100345a5c*/
  v3 = v2; /*0x1003459ae*/
  *v2 = 27503; /*0x1003459b1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003459b6*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003459c5*/
  if ( !v4 ) /*0x1003459cd*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100345a6d*/
  v5 = v4; /*0x1003459d3*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003459d6*/
  *v4 = 1667462483; /*0x1003459dd*/
  memcpy((void *)(a1 + 72), a2, 0x88u); /*0x1003459ef*/
  *(_DWORD *)(a1 + 208) = 1; /*0x1003459f4*/
  *(_BYTE *)(a1 + 212) = 1; /*0x1003459ff*/
  *(_QWORD *)a1 = 2; /*0x100345a07*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100345a0e*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100345a12*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100345a1a*/
  *(_QWORD *)(a1 + 32) = v5; /*0x100345a22*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100345a26*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100345a2e*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100345a36*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100345a3e*/
  return a1; /*0x100345a49*/
}