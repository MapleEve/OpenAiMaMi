// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h60be03e848f73112; addr: 0x1006f9470; session: <审计会话>; decompiled_at: 2026-10-26T03:22:31Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h60be03e848f73112(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r14
  __int128 v7; // kr00_16
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+18h] [rbp-CD8h] BYREF
  _BYTE v17[360]; // [rsp+180h] [rbp-B70h] BYREF
  _BYTE v18[360]; // [rsp+2E8h] [rbp-A08h] BYREF
  _QWORD __dst[65]; // [rsp+450h] [rbp-8A0h] BYREF
  _QWORD v20[50]; // [rsp+658h] [rbp-698h] BYREF
  _BYTE v21[360]; // [rsp+7E8h] [rbp-508h] BYREF
  _OWORD v22[25]; // [rsp+950h] [rbp-3A0h] BYREF
  __int64 v23; // [rsp+AE0h] [rbp-210h] BYREF
  __int64 v24; // [rsp+AE8h] [rbp-208h]
  __int128 v25; // [rsp+AF0h] [rbp-200h]
  _QWORD *v26; // [rsp+B00h] [rbp-1F0h]
  _BYTE v27[72]; // [rsp+B08h] [rbp-1E8h] BYREF
  _QWORD v28[3]; // [rsp+B50h] [rbp-1A0h] BYREF
  _BYTE v29[31]; // [rsp+B69h] [rbp-187h]
  __int64 v30; // [rsp+B88h] [rbp-168h] BYREF
  __m256i v31; // [rsp+B90h] [rbp-160h] BYREF
  __int64 v32; // [rsp+BB0h] [rbp-140h]
  __int64 v33; // [rsp+BB8h] [rbp-138h] BYREF
  __int64 v34; // [rsp+BC0h] [rbp-130h]
  __int64 v35; // [rsp+BC8h] [rbp-128h]
  __int64 v36; // [rsp+BD0h] [rbp-120h]
  __int64 v37; // [rsp+BD8h] [rbp-118h] BYREF
  __m256i v38; // [rsp+BE0h] [rbp-110h]
  __int64 v39; // [rsp+C00h] [rbp-F0h]
  __int64 v40; // [rsp+C08h] [rbp-E8h] BYREF
  __m256i v41; // [rsp+C10h] [rbp-E0h]
  __int64 v42; // [rsp+C30h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+C38h] [rbp-B8h]
  __int128 v44; // [rsp+C40h] [rbp-B0h] BYREF
  _QWORD *v45; // [rsp+C50h] [rbp-A0h]
  _QWORD v46[9]; // [rsp+C58h] [rbp-98h] BYREF
  __int64 v47; // [rsp+CA0h] [rbp-50h] BYREF
  __int64 v48; // [rsp+CA8h] [rbp-48h]
  __int64 v49; // [rsp+CB0h] [rbp-40h]
  void *__srca; // [rsp+CB8h] [rbp-38h]
  char v51[41]; // [rsp+CC7h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f9499*/
  __srca = __src + 520; /*0x1006f94b1*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x1006f94b5*/
  v49 = *((_QWORD *)__src + 117); /*0x1006f94c1*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f94c5*/
  v48 = *((_QWORD *)__src + 116); /*0x1006f94d3*/
  v47 = v2; /*0x1006f94d7*/
  v46[1] = 0; /*0x1006f94db*/
  v42 = (__int64)"import_relay_configparse_aimami_deeplinkAiMaMi"; /*0x1006f94f0*/
  v43 = 19; /*0x1006f94f7*/
  *(_QWORD *)&v44 = "appstarted"; /*0x1006f9509*/
  *((_QWORD *)&v44 + 1) = 3; /*0x1006f9510*/
  v45 = __dst; /*0x1006f951b*/
  v46[0] = &v47; /*0x1006f9526*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(v22); /*0x1006f953e*/
  if ( LODWORD(v22[0]) != 3 ) /*0x1006f954a*/
  {
    memcpy(v21, v22, 0x98u); /*0x1006f95fe*/
    v46[1] = 0; /*0x1006f9603*/
    v42 = (__int64)"import_relay_configparse_aimami_deeplinkAiMaMi"; /*0x1006f9611*/
    v43 = 19; /*0x1006f9618*/
    *(_QWORD *)&v44 = &unk_1017832C8; /*0x1006f962a*/
    *((_QWORD *)&v44 + 1) = 7; /*0x1006f9631*/
    v45 = __dst; /*0x1006f963c*/
    v46[0] = &v47; /*0x1006f9643*/
    v3 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x1006f9655*/
    v4 = v3; /*0x1006f965a*/
    if ( v3 ) /*0x1006f9660*/
    {
      v38.i64[0] = v3; /*0x1006f9662*/
    }
    else
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f9680*/
        &v37,
        &v42,
        &v44);
      if ( (_BYTE)v37 != 6 ) /*0x1006f968c*/
      {
        v45 = (_QWORD *)v38.i64[2]; /*0x1006f9903*/
        v44 = v38.i128[0]; /*0x1006f9926*/
        v43 = v37; /*0x1006f992d*/
        memcpy(v17, __srca, sizeof(v17)); /*0x1006f9947*/
        v42 = 1; /*0x1006f9968*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f9983*/
          v17,
          v20[48],
          &v42,
          __src + 880,
          LODWORD(v20[49]),
          HIDWORD(v20[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v21); /*0x1006f9992*/
        goto LABEL_27; /*0x1006f99a1*/
      }
      v4 = v38.i64[0]; /*0x1006f9692*/
    }
    v46[1] = 0; /*0x1006f9699*/
    v42 = (__int64)"import_relay_configparse_aimami_deeplinkAiMaMi"; /*0x1006f96a4*/
    v43 = 19; /*0x1006f96ab*/
    *(_QWORD *)&v44 = "filePathrelaunchdiagnosecategoryuserNotecurrencymutationdownloadbytesRidregisterdeepLinkprotocolun" /*0x1006f96bd*/
                      "listenset_sizeset_iconminimizemaximizereparentall branches are disabled and there is no else branch";
    *((_QWORD *)&v44 + 1) = 8; /*0x1006f96c4*/
    v45 = __dst; /*0x1006f96cf*/
    v46[0] = &v47; /*0x1006f96d6*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(&v30, &v42); /*0x1006f96ee*/
    if ( (_BYTE)v30 != 6 ) /*0x1006f96fa*/
    {
      v45 = (_QWORD *)v31.i64[2]; /*0x1006f9787*/
      v44 = v31.i128[0]; /*0x1006f97aa*/
      v43 = v30; /*0x1006f97b1*/
      memcpy(v16, __srca, sizeof(v16)); /*0x1006f97cb*/
      v42 = 1; /*0x1006f97ec*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f9804*/
        v16,
        v20[48],
        &v42,
        __src + 880,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v21); /*0x1006f9813*/
      goto LABEL_27; /*0x1006f9822*/
    }
    codexmate_lib::commands::relay::import_relay_config::h5fef75815b49a8a1(&v23, v21, v4, &v31); /*0x1006f9718*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1006f9730*/
    if ( v23 == 0x8000000000000000LL ) /*0x1006f9749*/
    {
      v6 = v24; /*0x1006f974f*/
      v7 = v25; /*0x1006f975d*/
      if ( v25 < 0 ) /*0x1006f9767*/
      {
        v8 = 0; /*0x1006f976d*/
        goto LABEL_11; /*0x1006f976d*/
      }
      if ( *((_QWORD *)&v25 + 1) ) /*0x1006f9ae3*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, __srca, v5); /*0x1006f9ae5*/
        v8 = 1; /*0x1006f9aea*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(*((_QWORD *)&v7 + 1), 1); /*0x1006f9af8*/
        if ( !v11 ) /*0x1006f9b00*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, *((_QWORD *)&v7 + 1)); /*0x1006f9770*/
        v12 = v11; /*0x1006f9b06*/
      }
      else
      {
        v12 = 1; /*0x1006f9b15*/
      }
      memcpy((void *)v12, (const void *)v7, *((size_t *)&v7 + 1)); /*0x1006f9b24*/
      if ( v6 ) /*0x1006f9b2c*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x1006f9b39*/
      memcpy(v21, __srca, sizeof(v21)); /*0x1006f9b4e*/
      v9 = *(_QWORD *)&v22[24]; /*0x1006f9b53*/
      v36 = *(_QWORD *)&v22[24]; /*0x1006f9b5a*/
      v41.i8[0] = 3; /*0x1006f9b61*/
      v41.i64[1] = *((_QWORD *)&v7 + 1); /*0x1006f9b68*/
      v41.i64[2] = v12; /*0x1006f9b6f*/
      v41.i64[3] = *((_QWORD *)&v7 + 1); /*0x1006f9b76*/
      v40 = 1; /*0x1006f9b7d*/
    }
    else
    {
      qmemcpy(v46, v27, sizeof(v46)); /*0x1006f9841*/
      memcpy(v21, __srca, sizeof(v21)); /*0x1006f9853*/
      v9 = *(_QWORD *)&v22[24]; /*0x1006f9858*/
      v36 = *(_QWORD *)&v22[24]; /*0x1006f985f*/
      v42 = v23; /*0x1006f9866*/
      v43 = v24; /*0x1006f9874*/
      v44 = v25; /*0x1006f987b*/
      v45 = v26; /*0x1006f9891*/
      _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hea5c4d5e1606b36f(&v37, &v42); /*0x1006f98a6*/
      if ( v37 == 0x8000000000000025LL ) /*0x1006f98b7*/
      {
        v41 = v38; /*0x1006f98d2*/
        v10 = 0; /*0x1006f98f5*/
      }
      else
      {
        v32 = v39; /*0x1006f99ad*/
        v31 = v38; /*0x1006f99c9*/
        v30 = v37; /*0x1006f99f3*/
        v33 = 0; /*0x1006f99fa*/
        v34 = 1; /*0x1006f9a05*/
        v35 = 0; /*0x1006f9a10*/
        v28[2] = 1610612768; /*0x1006f9a1b*/
        v28[0] = &v33; /*0x1006f9a2d*/
        v28[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006f9a3b*/
        if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006f9a50*/
                                &v30,
                                v28) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f9c42*/
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
            55,
            v51,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
        *(_QWORD *)&v29[7] = v33; /*0x1006f9a72*/
        *(_QWORD *)&v29[15] = v34; /*0x1006f9a79*/
        *(_QWORD *)&v29[23] = v35; /*0x1006f9a80*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v30); /*0x1006f9a8e*/
        v41.i8[0] = 3; /*0x1006f9a93*/
        *(__int128 *)((char *)v41.i128 + 1) = *(_OWORD *)v29; /*0x1006f9aa8*/
        *(__int64 *)((char *)&v41.i64[2] + 1) = *(_QWORD *)&v29[16]; /*0x1006f9abd*/
        v41.i64[3] = *(_QWORD *)&v29[23]; /*0x1006f9acb*/
        v10 = 1; /*0x1006f9ad2*/
      }
      v40 = v10; /*0x1006f9ad7*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f9bae*/
      v21,
      v9,
      &v40,
      (char *)&v22[22] + 8,
      DWORD2(v22[24]),
      HIDWORD(v22[24]));
    goto LABEL_27; /*0x1006f9bae*/
  }
  v45 = *(_QWORD **)&v22[2]; /*0x1006f9557*/
  v44 = v22[1]; /*0x1006f957a*/
  v43 = *((_QWORD *)&v22[0] + 1); /*0x1006f9581*/
  memcpy(v18, __srca, sizeof(v18)); /*0x1006f959b*/
  v42 = 1; /*0x1006f95bc*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f95d7*/
    v18,
    v20[48],
    &v42,
    __src + 880,
    LODWORD(v20[49]),
    HIDWORD(v20[49]));
LABEL_27:
  if ( v47 != 0x8000000000000000LL ) /*0x1006f9bb7*/
  {
    v13 = v48; /*0x1006f9bb9*/
    for ( i = v49 + 1; i != 1; --i ) /*0x1006f9bc1*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f9bdd*/
      v13 += 96; /*0x1006f9be2*/
    }
    if ( v47 ) /*0x1006f9bee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 96 * v47, 8); /*0x1006f9c01*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f9c12*/
}