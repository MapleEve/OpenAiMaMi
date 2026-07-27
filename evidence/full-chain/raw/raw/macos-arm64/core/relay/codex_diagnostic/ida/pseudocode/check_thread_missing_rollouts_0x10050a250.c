// __ZN13codexmate_lib4core5relay16codex_diagnostic29check_thread_missing_rollouts @ 0x10050a250 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_thread_missing_rollouts::h4f6480d24cccd89e(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  void *v7; // rax
  void *v8; // r12
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rcx
  _BYTE v13[16]; // [rsp+0h] [rbp-110h] BYREF
  __int64 v14; // [rsp+10h] [rbp-100h]
  __int64 v15; // [rsp+20h] [rbp-F0h]
  __int64 v16; // [rsp+28h] [rbp-E8h]
  __int64 v17; // [rsp+38h] [rbp-D8h] BYREF
  char v18; // [rsp+40h] [rbp-D0h] BYREF
  char v19; // [rsp+48h] [rbp-C8h] BYREF
  _QWORD v20[3]; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A8h] BYREF
  _QWORD v22[3]; // [rsp+70h] [rbp-A0h] BYREF
  __int64 *v23; // [rsp+88h] [rbp-88h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+90h] [rbp-80h]
  char *v25; // [rsp+98h] [rbp-78h]
  __int64 (__fastcall *v26)(); // [rsp+A0h] [rbp-70h]
  __int64 *v27; // [rsp+A8h] [rbp-68h]
  __int64 (__fastcall *v28)(); // [rsp+B0h] [rbp-60h]
  __int64 *v29; // [rsp+B8h] [rbp-58h]
  __int64 (__fastcall *v30)(); // [rsp+C0h] [rbp-50h]
  __int64 v31; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-40h]
  __int64 v33; // [rsp+D8h] [rbp-38h]
  __int64 v34; // [rsp+E0h] [rbp-30h]

  codexmate_lib::core::relay::codex_thread_visibility::inspect_missing_rollouts_for_convergence::he13f091f11a0c011(v13); /*0x10050a26e*/
  if ( !v17 && !v14 ) /*0x10050a285*/
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x10050a553*/
      a1,
      &anon_92869709a5e99ce1936aa4e326b6c562_611,
      23,
      &unk_1015FE292,
      27);
    return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(v13); /*0x10050a553*/
  }
  if ( !v16 ) /*0x10050a295*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, a2); /*0x10050a356*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x10050a365*/
    if ( !v4 ) /*0x10050a36d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x10050a5a2*/
    *(_QWORD *)v4 = 0xBEE4BAA4E7A097E6LL; /*0x10050a37d*/
    *(_BYTE *)(v4 + 8) = -117; /*0x10050a380*/
    v31 = 9; /*0x10050a384*/
    v32 = v4; /*0x10050a38c*/
    v33 = 9; /*0x10050a390*/
    v2 = v14; /*0x10050a398*/
    if ( v14 ) /*0x10050a3a2*/
      goto LABEL_5; /*0x10050a3a2*/
LABEL_8:
    v23 = (__int64 *)&v18; /*0x10050a3a8*/
    v24 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a3c4*/
    v25 = &v19; /*0x10050a3c8*/
    v26 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a3cc*/
    v27 = &v31; /*0x10050a3d4*/
    v28 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10050a3df*/
    v3 = &unk_1017C06AF; /*0x10050a3e3*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v22, &unk_1017C06AF, &v23); /*0x10050a3f8*/
    goto LABEL_9; /*0x10050a3f8*/
  }
  alloc::str::join_generic_copy::heca7a5e86402c6b6(&v23, v15, v16, &unk_1015FD2A7, 3); /*0x10050a2b6*/
  v33 = (__int64)v25; /*0x10050a2bf*/
  v32 = (__int64)v24; /*0x10050a2ce*/
  v31 = (__int64)v23; /*0x10050a2d2*/
  v2 = v14; /*0x10050a2d6*/
  if ( !v14 ) /*0x10050a2e0*/
    goto LABEL_8; /*0x10050a2e0*/
LABEL_5:
  v21 = v2; /*0x10050a2e6*/
  v23 = &v21; /*0x10050a302*/
  v24 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a310*/
  v25 = &v18; /*0x10050a314*/
  v26 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a318*/
  v27 = (__int64 *)&v19; /*0x10050a31c*/
  v28 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a320*/
  v29 = &v31; /*0x10050a328*/
  v30 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10050a333*/
  v3 = &unk_1017C06F9; /*0x10050a337*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v22, &unk_1017C06F9, &v23); /*0x10050a34c*/
LABEL_9:
  v34 = v22[0]; /*0x10050a3fd*/
  v5 = v22[1]; /*0x10050a408*/
  v6 = v22[2]; /*0x10050a40f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v3); /*0x10050a416*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x10050a425*/
  if ( !v7 ) /*0x10050a42d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x10050a580*/
  v8 = v7; /*0x10050a433*/
  qmemcpy(v7, "thread_missing_rollouts", 23); /*0x10050a45e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x10050a462*/
  v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10050a471*/
  if ( !v9 ) /*0x10050a479*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10050a591*/
  v10 = v9; /*0x10050a47f*/
  *(_BYTE *)(v9 + 4) = 114; /*0x10050a489*/
  *(_DWORD *)v9 = 1869771365; /*0x10050a48e*/
  v23 = &v17; /*0x10050a496*/
  v24 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a4a4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v20, &unk_1017C074D, &v23); /*0x10050a4bd*/
  *(_QWORD *)(a1 + 72) = v34; /*0x10050a4c6*/
  *(_QWORD *)(a1 + 80) = v5; /*0x10050a4ca*/
  *(_QWORD *)(a1 + 88) = v6; /*0x10050a4ce*/
  *(_QWORD *)a1 = 23; /*0x10050a4d2*/
  *(_QWORD *)(a1 + 8) = v8; /*0x10050a4d9*/
  *(_QWORD *)(a1 + 16) = 23; /*0x10050a4dd*/
  *(_QWORD *)(a1 + 24) = 5; /*0x10050a4e5*/
  *(_QWORD *)(a1 + 32) = v10; /*0x10050a4ed*/
  *(_QWORD *)(a1 + 40) = 5; /*0x10050a4f1*/
  v11 = v20[1]; /*0x10050a500*/
  *(_QWORD *)(a1 + 48) = v20[0]; /*0x10050a507*/
  *(_QWORD *)(a1 + 56) = v11; /*0x10050a50b*/
  *(_QWORD *)(a1 + 64) = v20[2]; /*0x10050a516*/
  *(_BYTE *)(a1 + 96) = 1; /*0x10050a51a*/
  if ( v31 ) /*0x10050a525*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v31, 1); /*0x10050a530*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(v13); /*0x10050a564*/
}