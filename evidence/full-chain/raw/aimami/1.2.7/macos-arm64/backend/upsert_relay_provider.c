// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf06cff15885b6f59; addr: 0x1007049b0; session: <审计会话>; decompiled_at: 2026-10-26T03:34:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf06cff15885b6f59(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  void *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+18h] [rbp-F58h] BYREF
  _BYTE v17[360]; // [rsp+180h] [rbp-DF0h] BYREF
  _BYTE v18[360]; // [rsp+2E8h] [rbp-C88h] BYREF
  _BYTE v19[176]; // [rsp+450h] [rbp-B20h] BYREF
  _QWORD __dst[65]; // [rsp+500h] [rbp-A70h] BYREF
  __int64 v21; // [rsp+708h] [rbp-868h] BYREF
  __int64 v22; // [rsp+710h] [rbp-860h]
  void *v23; // [rsp+718h] [rbp-858h]
  size_t __n; // [rsp+720h] [rbp-850h]
  __int64 v25; // [rsp+728h] [rbp-848h]
  _BYTE v26[296]; // [rsp+730h] [rbp-840h] BYREF
  _QWORD v27[50]; // [rsp+858h] [rbp-718h] BYREF
  _BYTE v28[360]; // [rsp+9E8h] [rbp-588h] BYREF
  _BYTE v29[336]; // [rsp+B50h] [rbp-420h] BYREF
  _OWORD v30[25]; // [rsp+CA0h] [rbp-2D0h] BYREF
  _QWORD v31[3]; // [rsp+E30h] [rbp-140h] BYREF
  _BYTE v32[31]; // [rsp+E49h] [rbp-127h]
  __int64 v33; // [rsp+E68h] [rbp-108h] BYREF
  __m256i v34; // [rsp+E70h] [rbp-100h]
  __int64 *v35; // [rsp+E90h] [rbp-E0h]
  __int64 v36; // [rsp+E98h] [rbp-D8h]
  __int64 v37; // [rsp+EA8h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+EB0h] [rbp-C0h]
  __int64 v39; // [rsp+EB8h] [rbp-B8h]
  __int64 v40; // [rsp+EC0h] [rbp-B0h]
  __int64 v41; // [rsp+EC8h] [rbp-A8h] BYREF
  __m256i v42; // [rsp+ED0h] [rbp-A0h]
  __int64 v43; // [rsp+EF0h] [rbp-80h] BYREF
  __m256i v44; // [rsp+EF8h] [rbp-78h]
  __int64 *v45; // [rsp+F18h] [rbp-58h]
  __int64 v46; // [rsp+F20h] [rbp-50h] BYREF
  __int64 v47; // [rsp+F28h] [rbp-48h]
  __int64 v48; // [rsp+F30h] [rbp-40h]
  void *__srca; // [rsp+F38h] [rbp-38h]
  _BYTE v50[41]; // [rsp+F47h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1007049d9*/
  __srca = __src + 520; /*0x1007049f1*/
  memcpy(v27, __src + 520, sizeof(v27)); /*0x1007049f5*/
  v48 = *((_QWORD *)__src + 117); /*0x100704a01*/
  v2 = *((_QWORD *)__src + 115); /*0x100704a05*/
  v47 = *((_QWORD *)__src + 116); /*0x100704a13*/
  v46 = v2; /*0x100704a17*/
  *(_QWORD *)&v30[3] = 0; /*0x100704a1b*/
  *(_QWORD *)&v30[0] = "upsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x100704a30*/
  *((_QWORD *)&v30[0] + 1) = 21; /*0x100704a37*/
  *(_QWORD *)&v30[1] = "appstarted"; /*0x100704a49*/
  *((_QWORD *)&v30[1] + 1) = 3; /*0x100704a50*/
  *(_QWORD *)&v30[2] = __dst; /*0x100704a5b*/
  *((_QWORD *)&v30[2] + 1) = &v46; /*0x100704a66*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(v28); /*0x100704a7e*/
  if ( *(_DWORD *)v28 != 3 ) /*0x100704a8a*/
  {
    memcpy(v29, v28, 0x98u); /*0x100704b3e*/
    *(_QWORD *)&v30[3] = 0; /*0x100704b43*/
    *(_QWORD *)&v30[0] = "upsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x100704b51*/
    *((_QWORD *)&v30[0] + 1) = 21; /*0x100704b58*/
    *(_QWORD *)&v30[1] = &unk_1017832C8; /*0x100704b6a*/
    *((_QWORD *)&v30[1] + 1) = 7; /*0x100704b71*/
    *(_QWORD *)&v30[2] = __dst; /*0x100704b7c*/
    *((_QWORD *)&v30[2] + 1) = &v46; /*0x100704b83*/
    v3 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x100704b95*/
    if ( v3 ) /*0x100704ba0*/
    {
      v44.i64[0] = v3; /*0x100704ba2*/
      LOBYTE(v43) = 6; /*0x100704ba6*/
    }
    else
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x100704bbe*/
        &v43,
        v30,
        &v30[1]);
      if ( (_BYTE)v43 != 6 ) /*0x100704bc7*/
      {
        *(_QWORD *)&v30[2] = v44.i64[2]; /*0x100704e45*/
        v30[1] = v44.i128[0]; /*0x100704e5f*/
        *((_QWORD *)&v30[0] + 1) = v43; /*0x100704e66*/
        memcpy(v17, __srca, sizeof(v17)); /*0x100704e80*/
        *(_QWORD *)&v30[0] = 1; /*0x100704ea1*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100704ebc*/
          v17,
          v27[48],
          v30,
          __src + 880,
          LODWORD(v27[49]),
          HIDWORD(v27[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v29); /*0x100704ecb*/
        goto LABEL_26; /*0x100704eda*/
      }
    }
    v36 = 0; /*0x100704bd1*/
    v33 = (__int64)"upsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x100704bdc*/
    v34.i64[0] = 21; /*0x100704be3*/
    v34.i64[1] = (__int64)"inputeventunable to create thread with 8MiB stackthe generated Tauri `Context` panicked during creation\n"; /*0x100704bf5*/
    v34.i64[2] = 5; /*0x100704bfc*/
    v34.i64[3] = (__int64)__dst; /*0x100704c07*/
    v35 = &v46; /*0x100704c0e*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hf7c3a2873b5c9ad7(v30); /*0x100704c26*/
    if ( *(_QWORD *)&v30[0] == 0x8000000000000000LL ) /*0x100704c3c*/
    {
      v34 = *(__m256i *)((char *)v30 + 8); /*0x100704c57*/
      memcpy(v16, __srca, sizeof(v16)); /*0x100704c8d*/
      v33 = 1; /*0x100704cae*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100704cc6*/
        v16,
        v27[48],
        &v33,
        __src + 880,
        LODWORD(v27[49]),
        HIDWORD(v27[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v29); /*0x100704cd5*/
      goto LABEL_26; /*0x100704ce4*/
    }
    memcpy(v19, v30, sizeof(v19)); /*0x100704cff*/
    codexmate_lib::commands::relay::upsert_relay_provider::h9c55623c64b9db2e(&v21); /*0x100704d18*/
    memcpy(v30, __srca, sizeof(v30)); /*0x100704d30*/
    if ( v21 == 0x8000000000000000LL ) /*0x100704d49*/
    {
      v5 = v22; /*0x100704d4b*/
      v6 = v23; /*0x100704d52*/
      v7 = __n; /*0x100704d59*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100704d63*/
      {
        v8 = 0; /*0x100704d69*/
        goto LABEL_11; /*0x100704d69*/
      }
      if ( __n ) /*0x10070500a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, __srca, v4); /*0x10070500c*/
        v8 = 1; /*0x100705011*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x10070501f*/
        if ( !v11 ) /*0x100705027*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x100704d6c*/
        v12 = v11; /*0x10070502d*/
      }
      else
      {
        v12 = 1; /*0x10070503c*/
      }
      memcpy((void *)v12, v6, v7); /*0x10070504b*/
      if ( v5 ) /*0x100705053*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100705060*/
      memcpy(v28, __srca, sizeof(v28)); /*0x100705075*/
      v9 = *(_QWORD *)&v30[24]; /*0x10070507a*/
      v40 = *(_QWORD *)&v30[24]; /*0x100705081*/
      v42.i8[0] = 3; /*0x100705088*/
      v42.i64[1] = v7; /*0x10070508f*/
      v42.i64[2] = v12; /*0x100705096*/
      v42.i64[3] = v7; /*0x10070509d*/
      v41 = 1; /*0x1007050a4*/
    }
    else
    {
      memcpy(&v29[40], v26, 0x128u); /*0x100704d96*/
      memcpy(v28, __srca, sizeof(v28)); /*0x100704daa*/
      v9 = *(_QWORD *)&v30[24]; /*0x100704daf*/
      v40 = *(_QWORD *)&v30[24]; /*0x100704db6*/
      *(_QWORD *)v29 = v21; /*0x100704dbd*/
      *(_QWORD *)&v29[8] = v22; /*0x100704dcb*/
      *(_QWORD *)&v29[16] = v23; /*0x100704dd2*/
      *(_QWORD *)&v29[24] = __n; /*0x100704ddd*/
      *(_QWORD *)&v29[32] = v25; /*0x100704de8*/
      _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h6d39c3c28e8114a2(&v43, v29); /*0x100704dfa*/
      if ( v43 == 0x8000000000000025LL ) /*0x100704e08*/
      {
        v42 = v44; /*0x100704e1d*/
        v10 = 0; /*0x100704e3a*/
      }
      else
      {
        v35 = v45; /*0x100704ee3*/
        v34 = v44; /*0x100704ef9*/
        v33 = v43; /*0x100704f1a*/
        v37 = 0; /*0x100704f21*/
        v38 = 1; /*0x100704f2c*/
        v39 = 0; /*0x100704f37*/
        v31[2] = 1610612768; /*0x100704f42*/
        v31[0] = &v37; /*0x100704f54*/
        v31[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x100704f62*/
        if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x100704f77*/
                                &v33,
                                v31) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100705162*/
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
            55,
            v50,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
        *(_QWORD *)&v32[7] = v37; /*0x100704f99*/
        *(_QWORD *)&v32[15] = v38; /*0x100704fa0*/
        *(_QWORD *)&v32[23] = v39; /*0x100704fa7*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v33); /*0x100704fb5*/
        v42.i8[0] = 3; /*0x100704fba*/
        *(__int128 *)((char *)v42.i128 + 1) = *(_OWORD *)v32; /*0x100704fcf*/
        *(__int64 *)((char *)&v42.i64[2] + 1) = *(_QWORD *)&v32[16]; /*0x100704fe4*/
        v42.i64[3] = *(_QWORD *)&v32[23]; /*0x100704ff2*/
        v10 = 1; /*0x100704ff9*/
      }
      v41 = v10; /*0x100704ffe*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1007050d5*/
      v28,
      v9,
      &v41,
      (char *)&v30[22] + 8,
      DWORD2(v30[24]),
      HIDWORD(v30[24]));
    goto LABEL_26; /*0x1007050d5*/
  }
  *(_QWORD *)&v30[2] = *(_QWORD *)&v28[32]; /*0x100704a97*/
  v30[1] = *(_OWORD *)&v28[16]; /*0x100704aba*/
  *((_QWORD *)&v30[0] + 1) = *(_QWORD *)&v28[8]; /*0x100704ac1*/
  memcpy(v18, __srca, sizeof(v18)); /*0x100704adb*/
  *(_QWORD *)&v30[0] = 1; /*0x100704afc*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100704b17*/
    v18,
    v27[48],
    v30,
    __src + 880,
    LODWORD(v27[49]),
    HIDWORD(v27[49]));
LABEL_26:
  if ( v46 != 0x8000000000000000LL ) /*0x1007050de*/
  {
    v13 = v47; /*0x1007050e0*/
    for ( i = v48 + 1; i != 1; --i ) /*0x1007050e8*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1007050fd*/
      v13 += 96; /*0x100705102*/
    }
    if ( v46 ) /*0x10070510e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 96 * v46, 8); /*0x100705121*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100705132*/
}