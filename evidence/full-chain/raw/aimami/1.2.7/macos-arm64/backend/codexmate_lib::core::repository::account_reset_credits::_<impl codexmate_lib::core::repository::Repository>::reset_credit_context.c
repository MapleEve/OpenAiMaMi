// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::account_reset_credits::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::reset_credit_context::h30cba837866be440; addr: 0x100ae1ae0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_QWORD *__fastcall codexmate_lib::core::repository::account_reset_credits::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::reset_credit_context::h30cba837866be440(
        _QWORD *a1,
        __int64 *a2,
        void *a3,
        size_t a4)
{
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // rax
  __int64 v19; // r15
  __int64 v21; // rax
  __int64 *v22; // [rsp+0h] [rbp-5E0h] BYREF
  _BYTE v23[96]; // [rsp+8h] [rbp-5D8h] BYREF
  _BYTE v24[72]; // [rsp+68h] [rbp-578h] BYREF
  _BYTE v25[96]; // [rsp+B0h] [rbp-530h] BYREF
  _QWORD v26[22]; // [rsp+110h] [rbp-4D0h] BYREF
  __int64 v27; // [rsp+1C0h] [rbp-420h] BYREF
  _QWORD v28[12]; // [rsp+1C8h] [rbp-418h] BYREF
  _BYTE __dst[136]; // [rsp+228h] [rbp-3B8h] BYREF
  _QWORD v30[22]; // [rsp+2B0h] [rbp-330h] BYREF
  _QWORD v31[11]; // [rsp+360h] [rbp-280h] BYREF
  _QWORD v32[30]; // [rsp+3B8h] [rbp-228h] BYREF
  _QWORD v33[30]; // [rsp+4A8h] [rbp-138h] BYREF
  _QWORD *v34; // [rsp+598h] [rbp-48h]
  __int64 v35; // [rsp+5A0h] [rbp-40h]
  void *__s2; // [rsp+5A8h] [rbp-38h]
  __int64 *v37; // [rsp+5B0h] [rbp-30h]

  __s2 = a3; /*0x100ae1af7*/
  v5 = a1; /*0x100ae1afe*/
  codexmate_lib::core::repository::Repository::load_registry::h2c1c3a33cebc3d11(v32, a2[28], a2[29]); /*0x100ae1b16*/
  v7 = v32[0]; /*0x100ae1b1b*/
  qmemcpy(v33, &v32[1], 0x58u); /*0x100ae1b35*/
  if ( v32[0] != 11 ) /*0x100ae1b3c*/
  {
    qmemcpy(a1 + 1, v33, 0x58u); /*0x100ae1c57*/
    *a1 = v7; /*0x100ae1c5a*/
    return v5; /*0x100ae1c5e*/
  }
  v37 = a2; /*0x100ae1b42*/
  v34 = a1; /*0x100ae1b46*/
  qmemcpy(v31, v33, sizeof(v31)); /*0x100ae1b5d*/
  v9 = &v33[11]; /*0x100ae1b5d*/
  v8 = v32; /*0x100ae1b5d*/
  v10 = v31[1]; /*0x100ae1b60*/
  v11 = v31[2]; /*0x100ae1b67*/
  if ( !v31[2] ) /*0x100ae1b71*/
  {
LABEL_11:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v9, v6); /*0x100ae1c63*/
    v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100ae1c72*/
    if ( !v18 ) /*0x100ae1c7a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x100ae21c0*/
    qmemcpy(v18, "Account is no longer available", 30); /*0x100ae1cb4*/
    v5 = v34; /*0x100ae1cb7*/
    *v34 = 9; /*0x100ae1cbb*/
    v5[1] = 30; /*0x100ae1cc3*/
    v5[2] = v18; /*0x100ae1ccc*/
    v5[3] = 30; /*0x100ae1cd1*/
    goto LABEL_13; /*0x100ae1cd1*/
  }
  v12 = 424LL * v31[2]; /*0x100ae1b77*/
  v13 = 0; /*0x100ae1b7e*/
  while ( 1 ) /*0x100ae1ba0*/
  {
    if ( *(_QWORD *)(v10 + v13 + 208) == a4 ) /*0x100ae1ba8*/
    {
      v8 = *(_QWORD **)(v10 + v13 + 200); /*0x100ae1baa*/
      v9 = __s2; /*0x100ae1bb2*/
      if ( !memcmp(v8, __s2, a4) ) /*0x100ae1bb9*/
        break; /*0x100ae1bb9*/
    }
    v13 += 424; /*0x100ae1b90*/
    if ( v12 == v13 ) /*0x100ae1b9a*/
      goto LABEL_11; /*0x100ae1b9a*/
  }
  v14 = *(_QWORD *)(v10 + v13 + 224); /*0x100ae1bc2*/
  v15 = *(_QWORD *)(v10 + v13 + 232); /*0x100ae1bca*/
  v16 = v37[31]; /*0x100ae1bd6*/
  v17 = v37[32]; /*0x100ae1bdd*/
  v35 = v14; /*0x100ae1beb*/
  codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hc8f26203b6a4a22e(v32, v14, v15, v16, v17); /*0x100ae1bf2*/
  v5 = v34; /*0x100ae1bf7*/
  if ( LODWORD(v32[0]) != 11 ) /*0x100ae1c02*/
  {
    qmemcpy(v33, v32, 0x60u); /*0x100ae1d6c*/
    if ( v33[0] != 11 ) /*0x100ae1d77*/
      goto LABEL_30; /*0x100ae1d77*/
    goto LABEL_25; /*0x100ae1d77*/
  }
  std::sys::fs::symlink_metadata::hd69903fe66faddbd(v32, v35, v15); /*0x100ae1c16*/
  if ( LODWORD(v32[0]) != 1 )
  {
    if ( (v32[1] & 0xF00000000000LL) != 0x800000000000LL ) /*0x100ae1d98*/
    {
      v27 = v35; /*0x100ae1e86*/
      v28[0] = v15; /*0x100ae1e8d*/
      v32[0] = &v27; /*0x100ae1e9b*/
      v32[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae1ea9*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v33[1], &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_283, v32); /*0x100ae1ec5*/
      v33[0] = 9; /*0x100ae1eca*/
      goto LABEL_30; /*0x100ae1eca*/
    }
LABEL_25:
    codexmate_lib::core::account_observation::AuthObservation::read::hee36ca1fcea17c52(v32, v35, v15); /*0x100ae1d9e*/
    qmemcpy(v33, &v32[1], 0x60u); /*0x100ae1dcb*/
    if ( v32[0] == 3 ) /*0x100ae1dd2*/
      goto LABEL_30; /*0x100ae1dd2*/
    memcpy(__dst, &v32[13], sizeof(__dst)); /*0x100ae1deb*/
    qmemcpy(v28, v33, sizeof(v28)); /*0x100ae1e03*/
    v27 = v32[0]; /*0x100ae1e06*/
    codexmate_lib::core::repository::account_reset_credits::matching_auth::h5f3cad462a7782e3(v32); /*0x100ae1e22*/
    qmemcpy(v33, &v32[1], 0x60u); /*0x100ae1e4f*/
    if ( v32[0] == 0x8000000000000001LL ) /*0x100ae1e59*/
    {
      qmemcpy(v5, v33, 0x60u); /*0x100ae1e6e*/
LABEL_28:
      core::ptr::drop_in_place$LT$codexmate_lib..core..account_observation..AuthObservation$GT$::hcc76ce0095a74f8e(&v27); /*0x100ae1e71*/
      goto LABEL_13; /*0x100ae1e7d*/
    }
    qmemcpy(&v30[13], &v32[13], 0x48u); /*0x100ae1eff*/
    qmemcpy(&v30[1], v33, 0x60u); /*0x100ae1f15*/
    v30[0] = v32[0]; /*0x100ae1f18*/
    codexmate_lib::core::account_observation::AuthObservation::read::hee36ca1fcea17c52(v33, v37[4], v37[5]); /*0x100ae1f2e*/
    if ( v33[0] != 2 )
    {
      if ( LODWORD(v33[0]) == 3 )
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
        {
          v32[0] = "codexmate_lib::core::repository::account_reset_credits"; /*0x100ae1f60*/
          v32[1] = 54; /*0x100ae1f67*/
          v32[2] = "codexmate_lib::core::repository::account_reset_credits"; /*0x100ae1f72*/
          v32[3] = 54; /*0x100ae1f79*/
          v32[4] = &off_101ABC108; /*0x100ae1f8b*/
          log::__private_api::log::hf5bade4875454669(
            "[AiMaMi][accounts] Reset card details: live credentials unreadable; using validated saved credentialscodexmate_lib::core::repository::account_reset_credits",
            203,
            2,
            v32);
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..account_observation..AuthObservation$C$codexmate_lib..core..models..CoreError$GT$$GT$::h5039649c284b6d23(v33); /*0x100ae1fb6*/
        goto LABEL_39; /*0x100ae1fbb*/
      }
      if ( v33[7] == a4 && !memcmp((const void *)v33[6], __s2, a4) ) /*0x100ae1fdb*/
      {
        v37 = (__int64 *)0x8000000000000001LL; /*0x100ae20ac*/
        memcpy(v32, v33, sizeof(v32)); /*0x100ae20c6*/
        codexmate_lib::core::repository::account_reset_credits::matching_auth::h5f3cad462a7782e3(&v22); /*0x100ae20dc*/
        qmemcpy(v25, v23, sizeof(v25)); /*0x100ae20fb*/
        if ( v22 == v37 ) /*0x100ae2102*/
        {
          qmemcpy(v5, v25, 0x60u); /*0x100ae2113*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..account_observation..AuthObservation$GT$::hcc76ce0095a74f8e(v33); /*0x100ae211d*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hbff2ffc481245f9b(v30); /*0x100ae2129*/
          goto LABEL_28; /*0x100ae212e*/
        }
        qmemcpy(&v26[13], v24, 0x48u); /*0x100ae2146*/
        qmemcpy(&v26[1], v25, 0x60u); /*0x100ae215c*/
        v26[0] = v22; /*0x100ae215f*/
        if ( (unsigned __int8)codexmate_lib::core::oauth_refresh::auth_is_newer::hda4b2187a70c6e7b(v30, v26) ) /*0x100ae2174*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hbff2ffc481245f9b(v26); /*0x100ae2184*/
        }
        else
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hbff2ffc481245f9b(v30); /*0x100ae2198*/
          memcpy(v30, v26, sizeof(v30)); /*0x100ae21ac*/
        }
      }
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_observation..AuthObservation$GT$::hcc76ce0095a74f8e(v33); /*0x100ae1fe8*/
LABEL_39:
    codexmate_lib::core::auth::make_api_request_context::ha24e84aaeca56c81(v33, v30); /*0x100ae1fed*/
    if ( v33[0] == 0x8000000000000000LL ) /*0x100ae2011*/
    {
      codexmate_lib::core::repository::account_reset_credits::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::reset_credit_context::_$u7b$$u7b$closure$u7d$$u7d$::he93009c9272e3dad(v32); /*0x100ae201a*/
      qmemcpy(v5, v32, 0x60u); /*0x100ae202e*/
    }
    else
    {
      v5[6] = v33[5]; /*0x100ae203a*/
      v5[5] = v33[4]; /*0x100ae2046*/
      v5[4] = v33[3]; /*0x100ae2052*/
      v5[3] = v33[2]; /*0x100ae205e*/
      v21 = v33[0]; /*0x100ae2063*/
      v5[2] = v33[1]; /*0x100ae2071*/
      v5[1] = v21; /*0x100ae2076*/
      *v5 = 11; /*0x100ae207b*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hbff2ffc481245f9b(v30); /*0x100ae208a*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_observation..AuthObservation$GT$::hcc76ce0095a74f8e(&v27); /*0x100ae2096*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h92081ece5e23ff8e(v31); /*0x100ae20a2*/
    return v5; /*0x100ae20a7*/
  }
  v33[0] = 2; /*0x100ae1c2f*/
  v33[1] = v32[1]; /*0x100ae1c3a*/
LABEL_30:
  qmemcpy(v5, v33, 0x60u); /*0x100ae1ee4*/
LABEL_13:
  if ( v31[3] != 0x8000000000000000LL && v31[3] ) /*0x100ae1cf3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31[4], v31[3], 1); /*0x100ae1d01*/
  if ( v11 ) /*0x100ae1d09*/
  {
    v19 = v10; /*0x100ae1d0b*/
    do /*0x100ae1d22*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::ha0a2ce5fd6075f91(v19); /*0x100ae1d13*/
      v19 += 424; /*0x100ae1d18*/
      --v11; /*0x100ae1d1f*/
    }
    while ( v11 ); /*0x100ae1d22*/
  }
  if ( v31[0] ) /*0x100ae1d2e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 424LL * v31[0], 8); /*0x100ae1d3f*/
  return v5; /*0x100ae1d47*/
}