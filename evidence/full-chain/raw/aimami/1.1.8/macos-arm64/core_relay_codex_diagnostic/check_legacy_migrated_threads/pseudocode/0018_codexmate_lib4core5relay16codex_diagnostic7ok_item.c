// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1003f5900 depth=1
// codexmate_lib4core5relay16codex_diagnostic7ok_item
unsigned __int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::ok_item::h548789469a50c203(
        __int64 a1,
        const void *a2,
        size_t a3,
        const void *a4,
        __int64 a5)
{
  void *v7; // rax
  _WORD *v8; // rax
  _WORD *v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  void *v15; // [rsp+8h] [rbp-38h]
  size_t v16; // [rsp+10h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f5921*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x1003f592e*/
  if ( !v7 ) /*0x1003f5936*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x1003f5a2e*/
  v15 = v7; /*0x1003f593c*/
  v16 = a3; /*0x1003f5946*/
  memcpy(v7, a2, a3); /*0x1003f594d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f5952*/
  v8 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1003f5961*/
  if ( !v8 ) /*0x1003f5969*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003f5a3d*/
  v9 = v8; /*0x1003f596f*/
  *v8 = 27503; /*0x1003f5972*/
  if ( a5 < 0 ) /*0x1003f597a*/
  {
    v10 = 0; /*0x1003f597c*/
    goto LABEL_5; /*0x1003f597c*/
  }
  if ( a5 ) /*0x1003f598e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f5990*/
    v10 = 1; /*0x1003f5995*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1u); /*0x1003f59a2*/
    if ( !v11 ) /*0x1003f59aa*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, a5); /*0x1003f597e*/
    v12 = v11; /*0x1003f59ac*/
  }
  else
  {
    v12 = 1; /*0x1003f59b1*/
  }
  memcpy((void *)v12, a4, a5); /*0x1003f59c1*/
  *(_QWORD *)a1 = v16; /*0x1003f59ca*/
  *(_QWORD *)(a1 + 8) = v15; /*0x1003f59d2*/
  *(_QWORD *)(a1 + 16) = v16; /*0x1003f59d7*/
  *(_QWORD *)(a1 + 24) = 2; /*0x1003f59dc*/
  *(_QWORD *)(a1 + 32) = v9; /*0x1003f59e5*/
  *(_QWORD *)(a1 + 40) = 2; /*0x1003f59ea*/
  *(_QWORD *)(a1 + 48) = a5; /*0x1003f59f3*/
  *(_QWORD *)(a1 + 56) = v12; /*0x1003f59f8*/
  *(_QWORD *)(a1 + 64) = a5; /*0x1003f59fd*/
  *(_QWORD *)(a1 + 72) = 0x8000000000000000LL; /*0x1003f5a0c*/
  *(_BYTE *)(a1 + 96) = 0; /*0x1003f5a11*/
  return 0x8000000000000000LL; /*0x1003f5a17*/
}