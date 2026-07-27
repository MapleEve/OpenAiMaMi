// __ZN13codexmate_lib4core5relay16codex_diagnostic7ok_item @ 0x100519050 | 基线 same-set
unsigned __int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
        __int64 a1,
        const void *a2,
        size_t a3,
        const void *a4,
        signed __int64 a5)
{
  void *v8; // rax
  void *v9; // rdi
  _WORD *v10; // rax
  _WORD *v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  void *v17; // [rsp+8h] [rbp-38h]
  size_t v18; // [rsp+10h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100519071*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x10051907e*/
  if ( !v8 ) /*0x100519086*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x10051917e*/
  v17 = v8; /*0x10051908c*/
  v9 = v8; /*0x100519090*/
  v18 = a3; /*0x100519096*/
  memcpy(v8, a2, a3); /*0x10051909d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, a2); /*0x1005190a2*/
  v10 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1005190b1*/
  if ( !v10 ) /*0x1005190b9*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10051918d*/
  v11 = v10; /*0x1005190bf*/
  *v10 = 27503; /*0x1005190c2*/
  if ( a5 < 0 ) /*0x1005190ca*/
  {
    v12 = 0; /*0x1005190cc*/
    goto LABEL_5; /*0x1005190cc*/
  }
  if ( a5 ) /*0x1005190de*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1005190e0*/
    v12 = 1; /*0x1005190e5*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x1005190f2*/
    if ( !v13 ) /*0x1005190fa*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, a5); /*0x1005190ce*/
    v14 = v13; /*0x1005190fc*/
  }
  else
  {
    v14 = 1; /*0x100519101*/
  }
  memcpy((void *)v14, a4, a5); /*0x100519111*/
  *(_QWORD *)a1 = v18; /*0x10051911a*/
  *(_QWORD *)(a1 + 8) = v17; /*0x100519122*/
  *(_QWORD *)(a1 + 16) = v18; /*0x100519127*/
  *(_QWORD *)(a1 + 24) = 2; /*0x10051912c*/
  *(_QWORD *)(a1 + 32) = v11; /*0x100519135*/
  *(_QWORD *)(a1 + 40) = 2; /*0x10051913a*/
  *(_QWORD *)(a1 + 48) = a5; /*0x100519143*/
  *(_QWORD *)(a1 + 56) = v14; /*0x100519148*/
  *(_QWORD *)(a1 + 64) = a5; /*0x10051914d*/
  *(_QWORD *)(a1 + 72) = 0x8000000000000000LL; /*0x10051915c*/
  *(_BYTE *)(a1 + 96) = 0; /*0x100519161*/
  return 0x8000000000000000LL; /*0x100519167*/
}