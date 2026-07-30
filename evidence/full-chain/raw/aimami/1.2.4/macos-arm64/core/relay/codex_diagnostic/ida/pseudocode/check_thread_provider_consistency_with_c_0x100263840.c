// __ZN13codexmate_lib4core5relay16codex_diagnostic44check_thread_provider_consistency_with_cache @ 0x100263840 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_thread_provider_consistency_with_cache::h2e6dcbba1c1e3225(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  const char *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 (__fastcall *v21)(); // r15
  __int64 *v22; // r13
  __int64 v23; // rax
  void *v24; // rcx
  _BYTE v26[40]; // [rsp+8h] [rbp-128h] BYREF
  __int64 v27; // [rsp+30h] [rbp-100h]
  __int64 v28; // [rsp+40h] [rbp-F0h]
  __int64 v29; // [rsp+48h] [rbp-E8h]
  __int64 v30; // [rsp+58h] [rbp-D8h]
  __int64 v31; // [rsp+60h] [rbp-D0h]
  __int64 v32; // [rsp+68h] [rbp-C8h]
  unsigned __int64 v33; // [rsp+70h] [rbp-C0h]
  _QWORD v34[2]; // [rsp+78h] [rbp-B8h] BYREF
  _QWORD v35[3]; // [rsp+88h] [rbp-A8h] BYREF
  char *v36; // [rsp+A0h] [rbp-90h] BYREF
  _QWORD v37[2]; // [rsp+A8h] [rbp-88h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-78h]
  int v39; // [rsp+C4h] [rbp-6Ch]
  __int64 v40; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-60h]
  __int64 v42; // [rsp+D8h] [rbp-58h]
  _QWORD *v43; // [rsp+E0h] [rbp-50h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+E8h] [rbp-48h]
  __int64 *v45; // [rsp+F0h] [rbp-40h]
  __int64 (__fastcall *v46)(); // [rsp+F8h] [rbp-38h]
  _QWORD *v47; // [rsp+100h] [rbp-30h]

  v6 = "openai"; /*0x100263864*/
  if ( (a3 & 1) != 0 ) /*0x10026386f*/
    v6 = "aimai1"; /*0x10026386f*/
  v37[0] = v6; /*0x100263873*/
  v37[1] = 6; /*0x10026387a*/
  codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence_with_reader::hda668315b0172051( /*0x10026388e*/
    v26,
    a2,
    v6,
    6,
    a4);
  v7 = v30; /*0x100263893*/
  v8 = v31; /*0x10026389a*/
  v9 = v32; /*0x1002638a7*/
  if ( v33 | v32 | v31 | v30 || v27 ) /*0x1002638c5*/
  {
    v47 = (_QWORD *)v33; /*0x1002638cb*/
    v39 = a3; /*0x1002638d9*/
    if ( v29 ) /*0x1002638dd*/
    {
      v10 = v28; /*0x1002638df*/
      v11 = (__int64)&v43; /*0x1002638ed*/
      alloc::str::join_generic_copy::h1b385c7941ba5aef(&v43, v28, v29, &unk_1015E18D9, 3); /*0x1002638f7*/
      v42 = (__int64)v45; /*0x100263900*/
      v13 = (unsigned __int64)v44; /*0x100263908*/
      v41 = (__int64)v44; /*0x10026390c*/
      v40 = (__int64)v43; /*0x100263910*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, a2, 0, v33); /*0x100263916*/
      v11 = 9; /*0x10026391b*/
      v10 = 1; /*0x100263920*/
      v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100263925*/
      if ( !v14 ) /*0x10026392d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100263baa*/
      v13 = 0xBEE4BAA4E7A097E6LL; /*0x100263933*/
      *(_QWORD *)v14 = 0xBEE4BAA4E7A097E6LL; /*0x10026393d*/
      *(_BYTE *)(v14 + 8) = -117; /*0x100263940*/
      v40 = 9; /*0x100263944*/
      v41 = v14; /*0x10026394c*/
      v42 = 9; /*0x100263950*/
    }
    v38 = v7; /*0x100263958*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v10, v12, v13); /*0x10026395c*/
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x10026396b*/
    if ( !v15 ) /*0x100263973*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x100263b88*/
    v18 = v15; /*0x100263979*/
    qmemcpy(v15, "thread_provider_consistency", 27); /*0x1002639a2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(27, 1, v16, v17); /*0x1002639ad*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1002639bc*/
    if ( !v19 ) /*0x1002639c4*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100263b99*/
    v20 = v19; /*0x1002639ca*/
    *(_BYTE *)(v19 + 4) = 114; /*0x1002639cd*/
    *(_DWORD *)v19 = 1869771365; /*0x1002639d1*/
    v36 = (char *)v47 + v9 + v38 + v8 + v27; /*0x1002639e9*/
    v34[0] = &v36; /*0x1002639f7*/
    v34[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100263a05*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v43, &unk_1017C3C76, v34); /*0x100263a1e*/
    v47 = v43; /*0x100263a27*/
    v21 = v44; /*0x100263a2b*/
    v22 = v45; /*0x100263a2f*/
    v43 = v37; /*0x100263a40*/
    v44 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x100263a4b*/
    v45 = &v40; /*0x100263a53*/
    v46 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100263a5e*/
    if ( (v39 & 1) != 0 ) /*0x100263a37*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v35, &unk_1017C3CD8, &v43); /*0x100263a74*/
    else
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v35, &unk_1017C3C96, &v43); /*0x100263ab6*/
    *(_QWORD *)(a1 + 88) = v35[2]; /*0x100263ac2*/
    v23 = v35[0]; /*0x100263ac6*/
    *(_QWORD *)(a1 + 80) = v35[1]; /*0x100263ad4*/
    *(_QWORD *)(a1 + 72) = v23; /*0x100263ad8*/
    *(_QWORD *)a1 = 27; /*0x100263adc*/
    *(_QWORD *)(a1 + 8) = v18; /*0x100263ae3*/
    *(_QWORD *)(a1 + 16) = 27; /*0x100263ae7*/
    *(_QWORD *)(a1 + 24) = 5; /*0x100263aef*/
    *(_QWORD *)(a1 + 32) = v20; /*0x100263af7*/
    *(_QWORD *)(a1 + 40) = 5; /*0x100263afb*/
    *(_QWORD *)(a1 + 48) = v47; /*0x100263b07*/
    *(_QWORD *)(a1 + 56) = v21; /*0x100263b0b*/
    *(_QWORD *)(a1 + 64) = v22; /*0x100263b0f*/
    *(_BYTE *)(a1 + 96) = 1; /*0x100263b13*/
    if ( v40 ) /*0x100263b1e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x100263b29*/
  }
  else
  {
    v24 = &unk_1015E37A5; /*0x100263b37*/
    if ( (a3 & 1) != 0 ) /*0x100263b42*/
      v24 = &unk_1015E37C6; /*0x100263b42*/
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb0663104acb46642( /*0x100263b5b*/
      a1,
      &anon_7245a3145add9b93f83b0a9aa358a664_553,
      27,
      v24,
      33);
  }
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h28494f51dd4a0022(v26); /*0x100263b6c*/
}