// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348ac0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hd1f92af78dfe42e0(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348ad1*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100348ae0*/
  if ( !v2 ) /*0x100348ae8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100348b9c*/
  v3 = v2; /*0x100348aee*/
  *v2 = 27503; /*0x100348af1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348af6*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348b05*/
  if ( !v4 ) /*0x100348b0d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100348bad*/
  v5 = v4; /*0x100348b13*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348b16*/
  *v4 = 1667462483; /*0x100348b1d*/
  memcpy((void *)(a1 + 72), a2, 0x160u); /*0x100348b2f*/
  *(_DWORD *)(a1 + 424) = 1; /*0x100348b34*/
  *(_BYTE *)(a1 + 428) = 1; /*0x100348b3f*/
  *(_QWORD *)a1 = 2; /*0x100348b47*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100348b4e*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100348b52*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100348b5a*/
  *(_QWORD *)(a1 + 32) = v5; /*0x100348b62*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100348b66*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100348b6e*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100348b76*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100348b7e*/
  return a1; /*0x100348b89*/
}