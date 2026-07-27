// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100347c20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h9653158b56e2fd46(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100347c31*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100347c40*/
  if ( !v2 ) /*0x100347c48*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100347cfc*/
  v3 = v2; /*0x100347c4e*/
  *v2 = 27503; /*0x100347c51*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100347c56*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100347c65*/
  if ( !v4 ) /*0x100347c6d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100347d0d*/
  v5 = v4; /*0x100347c73*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100347c76*/
  *v4 = 1667462483; /*0x100347c7d*/
  memcpy((void *)(a1 + 72), a2, 0x140u); /*0x100347c8f*/
  *(_DWORD *)(a1 + 392) = 1; /*0x100347c94*/
  *(_BYTE *)(a1 + 396) = 1; /*0x100347c9f*/
  *(_QWORD *)a1 = 2; /*0x100347ca7*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100347cae*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100347cb2*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100347cba*/
  *(_QWORD *)(a1 + 32) = v5; /*0x100347cc2*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100347cc6*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100347cce*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100347cd6*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100347cde*/
  return a1; /*0x100347ce9*/
}