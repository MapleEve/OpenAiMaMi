// __ZN13codexmate_lib8platform11voice_macos26resolve_voice_sidecar_path @ 0x1003c7670 | 基线 same-set
__int64 *__fastcall codexmate_lib::platform::voice_macos::resolve_voice_sidecar_path::h69bec614c361cc72(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  void **v5; // r15
  __int64 v6; // r13
  __int64 (__fastcall *v7)(); // r12
  void **v8; // r12
  void **v9; // r14
  __int64 (__fastcall *v10)(); // r13
  __int64 v11; // r14
  void **v12; // r13
  void **v13; // r14
  void **v14; // rdi
  __int64 v15; // r14
  void *v16; // rax
  void *v17; // r14
  __int64 (__fastcall *v18)(); // r15
  __int64 v19; // r14
  __int64 v20; // r15
  void **v21; // r12
  __int64 (__fastcall *v22)(); // rsi
  void **v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  void **v30; // [rsp+0h] [rbp-140h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+8h] [rbp-138h]
  __int64 v32; // [rsp+10h] [rbp-130h]
  __int64 v33; // [rsp+98h] [rbp-A8h] BYREF
  void **v34; // [rsp+A0h] [rbp-A0h]
  __int64 v35; // [rsp+A8h] [rbp-98h]
  __int64 v36; // [rsp+B0h] [rbp-90h] BYREF
  void **v37; // [rsp+B8h] [rbp-88h]
  __int64 v38; // [rsp+C0h] [rbp-80h]
  __int64 v39; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-70h]
  void **v41; // [rsp+D8h] [rbp-68h]
  __int64 v42; // [rsp+E0h] [rbp-60h]
  void *v43; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v44; // [rsp+100h] [rbp-40h]
  __int64 v45; // [rsp+108h] [rbp-38h]
  __int64 v46; // [rsp+110h] [rbp-30h]

  v3 = tauri::state::StateManager::try_get::h146a00c0a7f36172(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1003c7699*/
  if ( !v3 ) /*0x1003c76a1*/
  {
    v43 = &anon_0df76e0cec988e6dc281ac0519b88803_1039; /*0x1003c7b73*/
    v44 = 83; /*0x1003c7b77*/
    v30 = &v43; /*0x1003c7b83*/
    v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1003c7b91*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1003c7bad*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v30,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = v3; /*0x1003c76b5*/
  tauri::path::desktop::PathResolver$LT$R$GT$::resource_dir::h3264633aaa92045e(&v39, v3); /*0x1003c76b8*/
  if ( v39 != 0x8000000000000025LL ) /*0x1003c76c1*/
  {
LABEL_18:
    v14 = (void **)&v39; /*0x1003c78a2*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v39); /*0x1003c78a6*/
LABEL_19:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v4); /*0x1003c78ab*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(56, 1); /*0x1003c78ba*/
    if ( !v16 ) /*0x1003c78c2*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 56); /*0x1003c7bbc*/
    v17 = v16; /*0x1003c78c8*/
    qmemcpy(v16, "/Users/borawong/WONG/Develop-box/aionsale-wong/src-tauri", 56); /*0x1003c7929*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v30, v16, 56, &unk_1015F9B7D, 9); /*0x1003c7948*/
    v18 = v31; /*0x1003c794d*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v43, v31, v32, &unk_1015F9B6B, 5); /*0x1003c796f*/
    if ( v30 ) /*0x1003c797e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v30, 1); /*0x1003c7988*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 56, 1); /*0x1003c799a*/
    v19 = v44; /*0x1003c799f*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v39, v44, v45, &unk_1015F9B70, 13); /*0x1003c79bb*/
    v20 = v40; /*0x1003c79c0*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v30, v40, v41); /*0x1003c79d2*/
    v21 = v30; /*0x1003c79d7*/
    v22 = v31; /*0x1003c79de*/
    v23 = v30; /*0x1003c79e5*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1003c79e8*/
      v30,
      v31);
    if ( v21 ) /*0x1003c79f0*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v22); /*0x1003c79f6*/
      v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x1003c7a05*/
      if ( !v24 ) /*0x1003c7a0d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x1003c7bcb*/
      qmemcpy(v24, "voice sidecar binary not found", 30); /*0x1003c7a47*/
      a1[1] = 30; /*0x1003c7a4a*/
      a1[2] = (__int64)v24; /*0x1003c7a52*/
      a1[3] = 30; /*0x1003c7a56*/
      *a1 = 0x8000000000000000LL; /*0x1003c7a6c*/
      if ( v39 ) /*0x1003c7a76*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v39, 1); /*0x1003c7a80*/
    }
    else
    {
      a1[2] = (__int64)v41; /*0x1003c7a8b*/
      v25 = v39; /*0x1003c7a8f*/
      a1[1] = v40; /*0x1003c7a97*/
      *a1 = v25; /*0x1003c7a9b*/
      *((_BYTE *)a1 + 24) = 1; /*0x1003c7a9e*/
    }
    if ( v43 ) /*0x1003c7aa9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v43, 1); /*0x1003c7ab7*/
    return a1; /*0x1003c7abc*/
  }
  v5 = v41; /*0x1003c76cb*/
  v6 = v42; /*0x1003c76cf*/
  v46 = v40; /*0x1003c76ed*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v30, v41, v42, &unk_1015F9B6B, 5); /*0x1003c76f1*/
  v7 = v31; /*0x1003c76f6*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v36, v31, v32, &unk_1015F9B70, 13); /*0x1003c771b*/
  if ( v30 ) /*0x1003c772a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v30, 1); /*0x1003c7734*/
  v8 = v37; /*0x1003c7739*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v30, v37, v38); /*0x1003c774e*/
  v9 = v30; /*0x1003c7753*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1003c7764*/
    v30,
    v31);
  if ( v9 ) /*0x1003c776c*/
  {
    std::path::Path::_join::hb1a495d4f06b13b8(&v30, v5, v6, &unk_1015F9B7D, 9); /*0x1003c778c*/
    v10 = v31; /*0x1003c7791*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v43, v31, v32, &unk_1015F9B6B, 5); /*0x1003c77b3*/
    v11 = v44; /*0x1003c77b8*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v33, v44, v45, &unk_1015F9B70, 13); /*0x1003c77d7*/
    if ( v43 ) /*0x1003c77e3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v43, 1); /*0x1003c77ed*/
    if ( v30 ) /*0x1003c77fc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v30, 1); /*0x1003c7806*/
    v12 = v34; /*0x1003c780b*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v30, v34, v35); /*0x1003c7823*/
    v13 = v30; /*0x1003c7828*/
    v14 = v30; /*0x1003c7836*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1003c7839*/
      v30,
      v31);
    if ( v13 ) /*0x1003c7841*/
    {
      v15 = v46; /*0x1003c7851*/
      if ( v33 ) /*0x1003c7855*/
      {
        v14 = v12; /*0x1003c785c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v33, 1); /*0x1003c785f*/
      }
      v4 = v36; /*0x1003c7864*/
      if ( v36 ) /*0x1003c786e*/
      {
        v14 = v8; /*0x1003c7875*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v36, 1); /*0x1003c7878*/
      }
      if ( v15 ) /*0x1003c7880*/
      {
        v14 = v5; /*0x1003c7887*/
        v4 = v15; /*0x1003c788a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v15, 1); /*0x1003c788d*/
      }
      if ( v39 == 0x8000000000000025LL ) /*0x1003c78a0*/
        goto LABEL_19; /*0x1003c78a0*/
      goto LABEL_18; /*0x1003c78a0*/
    }
    a1[2] = v35; /*0x1003c7aef*/
    v28 = v33; /*0x1003c7af3*/
    a1[1] = (__int64)v34; /*0x1003c7b01*/
    *a1 = v28; /*0x1003c7b05*/
    *((_BYTE *)a1 + 24) = 1; /*0x1003c7b08*/
    v27 = v46; /*0x1003c7b16*/
    if ( v36 ) /*0x1003c7b1a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v36, 1); /*0x1003c7b24*/
  }
  else
  {
    a1[2] = v38; /*0x1003c7ac5*/
    v26 = v36; /*0x1003c7ac9*/
    a1[1] = (__int64)v37; /*0x1003c7ad7*/
    *a1 = v26; /*0x1003c7adb*/
    *((_BYTE *)a1 + 24) = 1; /*0x1003c7ade*/
    v27 = v46; /*0x1003c7ae2*/
  }
  if ( v27 ) /*0x1003c7b2c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v27, 1); /*0x1003c7b39*/
  if ( v39 != 0x8000000000000025LL ) /*0x1003c7b4c*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v39); /*0x1003c7b52*/
  return a1; /*0x1003c7b5a*/
}