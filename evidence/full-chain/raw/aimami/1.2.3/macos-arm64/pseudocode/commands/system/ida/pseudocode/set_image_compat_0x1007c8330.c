// __ZN13codexmate_lib8commands6system16set_image_compat @ 0x1007c8330 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::commands::system::set_image_compat::h80448e089726808c(
        unsigned __int64 *a1,
        _QWORD *a2,
        unsigned __int8 a3,
        double a4)
{
  char v6; // r15
  double v7; // xmm0_8
  __int64 *v8; // r13
  __int64 v9; // r12
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 **v13; // r14
  __int64 v14; // r15
  char v15; // r12
  __int64 v17; // rdi
  void *v18; // r13
  __int64 v19; // rax
  __int64 v20; // r14
  _QWORD v21[93]; // [rsp+8h] [rbp-428h] BYREF
  _QWORD v22[12]; // [rsp+2F0h] [rbp-140h] BYREF
  __int64 v23[12]; // [rsp+350h] [rbp-E0h] BYREF
  unsigned __int64 v24; // [rsp+3B0h] [rbp-80h]
  __int64 *v25; // [rsp+3B8h] [rbp-78h] BYREF
  __int64 v26; // [rsp+3C0h] [rbp-70h]
  size_t __n; // [rsp+3C8h] [rbp-68h]
  void *__src; // [rsp+3D0h] [rbp-60h]
  __int64 *v29; // [rsp+3D8h] [rbp-58h]
  __int64 **v30; // [rsp+3E0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+3E8h] [rbp-48h]
  __int64 v32; // [rsp+3F0h] [rbp-40h]
  __int64 v33; // [rsp+3F8h] [rbp-38h]
  char v34; // [rsp+406h] [rbp-2Ah] BYREF
  char v35[41]; // [rsp+407h] [rbp-29h] BYREF

  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x1007c835d*/
    (__int64)v23,
    a2,
    (__int64)"updating image compatibilityososVersion",
    28);
  if ( LODWORD(v23[0]) == 11 ) /*0x1007c8369*/
  {
    v33 = v23[1]; /*0x1007c8376*/
    v6 = v23[2]; /*0x1007c837a*/
    v7 = codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b(v23, a4); /*0x1007c8389*/
    codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(v21, v23); /*0x1007c839c*/
    v35[0] = a3; /*0x1007c83af*/
    codexmate_lib::core::codex_config::update_text::h5582eca463192a5c(v22, v21[7], v21[8], &unk_101673DEB, 26, v35, v7); /*0x1007c83cb*/
    if ( LODWORD(v22[0]) == 11 ) /*0x1007c83d7*/
      goto LABEL_5; /*0x1007c83d7*/
    qmemcpy(v23, v22, sizeof(v23)); /*0x1007c83f3*/
    v25 = nullptr; /*0x1007c83f6*/
    v26 = 1; /*0x1007c83fe*/
    __n = 0; /*0x1007c8406*/
    v32 = 1610612768; /*0x1007c840e*/
    v30 = &v25; /*0x1007c841a*/
    v31 = (__int64)&anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c8425*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c8430*/
                            v23,
                            &v30) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c869e*/
        &anon_3ce6d1417794db0febde534c64082f90_390,
        55,
        &v34,
        &anon_3ce6d1417794db0febde534c64082f90_429,
        &anon_3ce6d1417794db0febde534c64082f90_392);
    v8 = v25; /*0x1007c843d*/
    __src = (void *)v26; /*0x1007c8445*/
    v9 = __n; /*0x1007c8449*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v22); /*0x1007c8454*/
    v29 = v8; /*0x1007c8466*/
    if ( v8 == (__int64 *)0x8000000000000000LL ) /*0x1007c846d*/
    {
LABEL_5:
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8d0ca3aa1d2f05e((__int64)v23, a3); /*0x1007c847e*/
      qmemcpy(a1, v23, 0x50u); /*0x1007c8492*/
      v10 = &v23[10]; /*0x1007c8492*/
      core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v21, v7); /*0x1007c849c*/
      if ( v6 || !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1007c84b0*/
      {
LABEL_7:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v33); /*0x1007c84bc*/
        return a1; /*0x1007c84c8*/
      }
LABEL_22:
      if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, v10, v11, v12) ) /*0x1007c8641*/
        *(_BYTE *)(v33 + 8) = 1; /*0x1007c8652*/
      goto LABEL_7; /*0x1007c8656*/
    }
    if ( v9 < 0 ) /*0x1007c8592*/
    {
      v17 = 0; /*0x1007c8594*/
      goto LABEL_13; /*0x1007c8594*/
    }
    v24 = 0x8000000000000000LL; /*0x1007c85a7*/
    v18 = __src; /*0x1007c85ab*/
    if ( v9 ) /*0x1007c85af*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, &v30); /*0x1007c85b1*/
      v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1007c85be*/
      v17 = 1; /*0x1007c85c3*/
      if ( !v19 ) /*0x1007c85cb*/
LABEL_13:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, v9); /*0x1007c859a*/
      v20 = v19; /*0x1007c85cd*/
    }
    else
    {
      v20 = 1; /*0x1007c85d2*/
    }
    memcpy((void *)v20, v18, v9); /*0x1007c85e1*/
    v10 = v29; /*0x1007c85e6*/
    if ( v29 ) /*0x1007c85ed*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v29, 1); /*0x1007c85f7*/
    a1[1] = v9; /*0x1007c85fc*/
    a1[2] = v20; /*0x1007c8600*/
    a1[3] = v9; /*0x1007c8604*/
    *a1 = v24; /*0x1007c860c*/
    core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v21, v7); /*0x1007c8616*/
    if ( v6 ) /*0x1007c861e*/
      goto LABEL_7; /*0x1007c861e*/
    v12 = 0x7FFFFFFFFFFFFFFFLL; /*0x1007c862e*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1007c863b*/
      goto LABEL_7; /*0x1007c863b*/
    goto LABEL_22; /*0x1007c863b*/
  }
  qmemcpy(v21, v23, 0x60u); /*0x1007c84e3*/
  v30 = nullptr; /*0x1007c84e6*/
  v31 = 1; /*0x1007c84ee*/
  v32 = 0; /*0x1007c84f6*/
  v22[2] = 1610612768; /*0x1007c84fe*/
  v22[0] = &v30; /*0x1007c850d*/
  v22[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c851b*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c852c*/
                          v21,
                          v22) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c8679*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v34,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v13 = v30; /*0x1007c8539*/
  v14 = v31; /*0x1007c853d*/
  v15 = v32; /*0x1007c8541*/
  *((_DWORD *)a1 + 7) = HIDWORD(v32); /*0x1007c8549*/
  *(_DWORD *)((char *)a1 + 25) = *(_DWORD *)((char *)&v32 + 1); /*0x1007c854f*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v23); /*0x1007c8559*/
  a1[1] = (unsigned __int64)v13; /*0x1007c855e*/
  a1[2] = v14; /*0x1007c8562*/
  *((_BYTE *)a1 + 24) = v15; /*0x1007c8566*/
  *a1 = 0x8000000000000000LL; /*0x1007c8577*/
  return a1; /*0x1007c857d*/
}