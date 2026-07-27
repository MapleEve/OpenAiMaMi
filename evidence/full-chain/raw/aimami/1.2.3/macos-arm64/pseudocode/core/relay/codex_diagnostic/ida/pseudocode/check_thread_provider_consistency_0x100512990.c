// __ZN13codexmate_lib4core5relay16codex_diagnostic33check_thread_provider_consistency @ 0x100512990 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_thread_provider_consistency::h1a6e8cd0b3bb277e(
        __int64 a1,
        __int64 a2,
        int a3)
{
  char *v5; // rdx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  void *v12; // rax
  void *v13; // r14
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 (__fastcall *v16)(); // r13
  __int64 *v17; // r15
  __int64 v18; // rax
  void *v19; // rcx
  _BYTE v21[40]; // [rsp+8h] [rbp-128h] BYREF
  __int64 v22; // [rsp+30h] [rbp-100h]
  __int64 v23; // [rsp+40h] [rbp-F0h]
  __int64 v24; // [rsp+48h] [rbp-E8h]
  __int64 v25; // [rsp+58h] [rbp-D8h]
  __int64 v26; // [rsp+60h] [rbp-D0h]
  __int64 v27; // [rsp+68h] [rbp-C8h]
  unsigned __int64 v28; // [rsp+70h] [rbp-C0h]
  _QWORD v29[2]; // [rsp+78h] [rbp-B8h] BYREF
  _QWORD v30[3]; // [rsp+88h] [rbp-A8h] BYREF
  char *v31; // [rsp+A0h] [rbp-90h] BYREF
  _QWORD v32[2]; // [rsp+A8h] [rbp-88h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-78h]
  int v34; // [rsp+C4h] [rbp-6Ch]
  __int64 v35; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-60h]
  __int64 v37; // [rsp+D8h] [rbp-58h]
  _QWORD *v38; // [rsp+E0h] [rbp-50h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+E8h] [rbp-48h]
  __int64 *v40; // [rsp+F0h] [rbp-40h]
  __int64 (__fastcall *v41)(); // [rsp+F8h] [rbp-38h]
  _QWORD *v42; // [rsp+100h] [rbp-30h]

  v5 = "openaicodex_router_catalog.jsonmodels_cache.json"; /*0x1005129b1*/
  if ( (a3 & 1) != 0 ) /*0x1005129bc*/
    v5 = "aimai1openaicodex_router_catalog.jsonmodels_cache.json"; /*0x1005129bc*/
  v32[0] = v5; /*0x1005129c0*/
  v32[1] = 6; /*0x1005129c7*/
  codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::he6857c591f482337( /*0x1005129db*/
    v21,
    a2,
    v5,
    6);
  v6 = v25; /*0x1005129e0*/
  v7 = v26; /*0x1005129e7*/
  v8 = v27; /*0x1005129f4*/
  if ( v28 | v27 | v26 | v25 || v22 ) /*0x100512a12*/
  {
    v42 = (_QWORD *)v28; /*0x100512a18*/
    v34 = a3; /*0x100512a26*/
    if ( v24 ) /*0x100512a2a*/
    {
      v9 = v23; /*0x100512a2c*/
      v10 = (__int64)&v38; /*0x100512a3a*/
      alloc::str::join_generic_copy::heca7a5e86402c6b6(&v38, v23, v24, &unk_1015FD2A7, 3); /*0x100512a44*/
      v37 = (__int64)v40; /*0x100512a4d*/
      v36 = (__int64)v39; /*0x100512a59*/
      v35 = (__int64)v38; /*0x100512a5d*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, a2); /*0x100512a63*/
      v10 = 9; /*0x100512a68*/
      v9 = 1; /*0x100512a6d*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100512a72*/
      if ( !v11 ) /*0x100512a7a*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100512cf7*/
      *(_QWORD *)v11 = 0xBEE4BAA4E7A097E6LL; /*0x100512a8a*/
      *(_BYTE *)(v11 + 8) = -117; /*0x100512a8d*/
      v35 = 9; /*0x100512a91*/
      v36 = v11; /*0x100512a99*/
      v37 = 9; /*0x100512a9d*/
    }
    v33 = v6; /*0x100512aa5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v9); /*0x100512aa9*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x100512ab8*/
    if ( !v12 ) /*0x100512ac0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x100512cd5*/
    v13 = v12; /*0x100512ac6*/
    qmemcpy(v12, "thread_provider_consistency", 27); /*0x100512aef*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(27, 1); /*0x100512afa*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100512b09*/
    if ( !v14 ) /*0x100512b11*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100512ce6*/
    v15 = v14; /*0x100512b17*/
    *(_BYTE *)(v14 + 4) = 114; /*0x100512b1a*/
    *(_DWORD *)v14 = 1869771365; /*0x100512b1e*/
    v31 = (char *)v42 + v8 + v33 + v7 + v22; /*0x100512b36*/
    v29[0] = &v31; /*0x100512b44*/
    v29[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100512b52*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v38, &unk_1017C0BEC, v29); /*0x100512b6b*/
    v42 = v38; /*0x100512b74*/
    v16 = v39; /*0x100512b78*/
    v17 = v40; /*0x100512b7c*/
    v38 = v32; /*0x100512b8d*/
    v39 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100512b98*/
    v40 = &v35; /*0x100512ba0*/
    v41 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100512bab*/
    if ( (v34 & 1) != 0 ) /*0x100512b84*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v30, &unk_1017C0C4E, &v38); /*0x100512bc1*/
    else
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v30, &unk_1017C0C0C, &v38); /*0x100512c03*/
    *(_QWORD *)(a1 + 88) = v30[2]; /*0x100512c0f*/
    v18 = v30[0]; /*0x100512c13*/
    *(_QWORD *)(a1 + 80) = v30[1]; /*0x100512c21*/
    *(_QWORD *)(a1 + 72) = v18; /*0x100512c25*/
    *(_QWORD *)a1 = 27; /*0x100512c29*/
    *(_QWORD *)(a1 + 8) = v13; /*0x100512c30*/
    *(_QWORD *)(a1 + 16) = 27; /*0x100512c34*/
    *(_QWORD *)(a1 + 24) = 5; /*0x100512c3c*/
    *(_QWORD *)(a1 + 32) = v15; /*0x100512c44*/
    *(_QWORD *)(a1 + 40) = 5; /*0x100512c48*/
    *(_QWORD *)(a1 + 48) = v42; /*0x100512c54*/
    *(_QWORD *)(a1 + 56) = v16; /*0x100512c58*/
    *(_QWORD *)(a1 + 64) = v17; /*0x100512c5c*/
    *(_BYTE *)(a1 + 96) = 1; /*0x100512c60*/
    if ( v35 ) /*0x100512c6b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x100512c76*/
  }
  else
  {
    v19 = &unk_1015FE590; /*0x100512c84*/
    if ( (a3 & 1) != 0 ) /*0x100512c8f*/
      v19 = &unk_1015FE5B1; /*0x100512c8f*/
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100512ca8*/
      a1,
      &anon_92869709a5e99ce1936aa4e326b6c562_612,
      27,
      v19,
      33);
  }
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h50ec709024398c44(v21); /*0x100512cb9*/
}