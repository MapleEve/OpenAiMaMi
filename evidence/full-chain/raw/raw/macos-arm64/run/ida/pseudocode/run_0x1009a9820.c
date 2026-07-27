// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a9820 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h882e8643016b8d62(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  char *v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 i; // r15
  _BYTE v17[360]; // [rsp+0h] [rbp-D40h] BYREF
  _BYTE v18[360]; // [rsp+168h] [rbp-BD8h] BYREF
  _BYTE v19[360]; // [rsp+2D0h] [rbp-A70h] BYREF
  _QWORD __dst[65]; // [rsp+438h] [rbp-908h] BYREF
  _QWORD v21[47]; // [rsp+640h] [rbp-700h] BYREF
  _QWORD v22[50]; // [rsp+7B8h] [rbp-588h] BYREF
  _QWORD v23[47]; // [rsp+948h] [rbp-3F8h] BYREF
  _QWORD v24[50]; // [rsp+AC0h] [rbp-280h] BYREF
  _QWORD v25[3]; // [rsp+C50h] [rbp-F0h] BYREF
  _QWORD v26[3]; // [rsp+C68h] [rbp-D8h] BYREF
  _QWORD v27[3]; // [rsp+C80h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+C98h] [rbp-A8h] BYREF
  _QWORD *v29; // [rsp+CA0h] [rbp-A0h]
  __int64 v30; // [rsp+CA8h] [rbp-98h]
  __int64 v31; // [rsp+CB0h] [rbp-90h]
  __int64 v32; // [rsp+CB8h] [rbp-88h] BYREF
  __int64 v33; // [rsp+CC0h] [rbp-80h]
  __int64 v34; // [rsp+CC8h] [rbp-78h]
  __int64 v35; // [rsp+CD0h] [rbp-70h]
  __int64 v36; // [rsp+CD8h] [rbp-68h] BYREF
  __int64 v37; // [rsp+CE0h] [rbp-60h]
  __int64 v38; // [rsp+CE8h] [rbp-58h]
  __int64 v39; // [rsp+CF0h] [rbp-50h] BYREF
  __int64 v40; // [rsp+CF8h] [rbp-48h]
  __int64 v41; // [rsp+D00h] [rbp-40h]
  void *__srca; // [rsp+D08h] [rbp-38h]
  int v43; // [rsp+D14h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a9849*/
  __srca = __src + 520; /*0x1009a9861*/
  memcpy(v22, __src + 520, sizeof(v22)); /*0x1009a9865*/
  v41 = *((_QWORD *)__src + 117); /*0x1009a9871*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a9875*/
  v40 = *((_QWORD *)__src + 116); /*0x1009a9883*/
  v39 = v2; /*0x1009a9887*/
  v24[6] = 0; /*0x1009a988b*/
  v24[0] = "deactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009a989d*/
  v24[1] = 25; /*0x1009a98a4*/
  v3 = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a98af*/
  v24[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a98b6*/
  v24[3] = 7; /*0x1009a98bd*/
  v24[4] = __dst; /*0x1009a98c8*/
  v24[5] = &v39; /*0x1009a98d3*/
  LOBYTE(v3) = 1; /*0x1009a98e5*/
  v43 = (int)v3; /*0x1009a98e7*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009a98ef*/
  if ( !v4 ) /*0x1009a98f5*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a990c*/
      &v28,
      v24,
      &v24[2]);
    if ( (_BYTE)v28 != 6 ) /*0x1009a9918*/
    {
      v24[4] = v31; /*0x1009a9bfc*/
      v24[3] = v30; /*0x1009a9c0a*/
      v24[2] = v29; /*0x1009a9c1f*/
      v24[1] = v28; /*0x1009a9c26*/
      memcpy(v19, __srca, sizeof(v19)); /*0x1009a9c40*/
      v11 = *((_QWORD *)__src + 111); /*0x1009a9c53*/
      v27[0] = *((_QWORD *)__src + 110); /*0x1009a9c5a*/
      v27[1] = v11; /*0x1009a9c61*/
      v27[2] = *((_QWORD *)__src + 112); /*0x1009a9c6f*/
      v24[0] = 1; /*0x1009a9c84*/
      v43 = 0; /*0x1009a9c8f*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a9ca7*/
        v19,
        v22[48],
        v24,
        v27,
        LODWORD(v22[49]),
        HIDWORD(v22[49]));
      goto LABEL_23; /*0x1009a9cac*/
    }
    v4 = v29; /*0x1009a991e*/
  }
  v24[6] = 0; /*0x1009a9925*/
  v24[0] = "deactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009a9930*/
  v24[1] = 25; /*0x1009a9937*/
  v24[2] = "providerIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a9949*/
  v24[3] = 10; /*0x1009a9950*/
  v24[4] = __dst; /*0x1009a995b*/
  v24[5] = &v39; /*0x1009a9962*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v32, v24); /*0x1009a9977*/
  if ( (_BYTE)v32 == 6 ) /*0x1009a9983*/
  {
    v38 = v35; /*0x1009a998d*/
    v37 = v34; /*0x1009a9999*/
    v36 = v33; /*0x1009a999d*/
    v24[6] = 0; /*0x1009a99a1*/
    v24[0] = "deactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009a99ac*/
    v24[1] = 25; /*0x1009a99b3*/
    v24[2] = "idenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a99c5*/
    v24[3] = 3; /*0x1009a99cc*/
    v24[4] = __dst; /*0x1009a99d7*/
    v24[5] = &v39; /*0x1009a99de*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h3c13f9516fa4f179(v23, v24); /*0x1009a99f3*/
    if ( LOBYTE(v23[0]) == 6 ) /*0x1009a99ff*/
    {
      codexmate_lib::commands::relay::deactivate_relay_provider::h75dd542c23a42905(v21, v4, &v36); /*0x1009a9a13*/
      memcpy(v24, __srca, sizeof(v24)); /*0x1009a9a28*/
      if ( v21[0] == 0x8000000000000000LL ) /*0x1009a9a3e*/
      {
        v5 = v21[1]; /*0x1009a9a44*/
        v6 = (const void *)v21[2]; /*0x1009a9a4b*/
        v7 = v21[3]; /*0x1009a9a52*/
        if ( v21[3] < 0LL ) /*0x1009a9a5c*/
        {
          v8 = 0; /*0x1009a9a62*/
          goto LABEL_9; /*0x1009a9a62*/
        }
        if ( v21[3] ) /*0x1009a9ccb*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, __srca); /*0x1009a9ccd*/
          v8 = 1; /*0x1009a9cd2*/
          v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009a9ce0*/
          if ( !v12 ) /*0x1009a9ce8*/
LABEL_9:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009a9a65*/
          v13 = v12; /*0x1009a9cee*/
        }
        else
        {
          v13 = 1; /*0x1009a9cf3*/
        }
        memcpy((void *)v13, v6, v7); /*0x1009a9d02*/
        if ( v5 ) /*0x1009a9d0a*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009a9d17*/
        LOBYTE(v23[1]) = 3; /*0x1009a9d1c*/
        v23[2] = v7; /*0x1009a9d23*/
        v23[3] = v13; /*0x1009a9d2a*/
        v23[4] = v7; /*0x1009a9d31*/
        v23[0] = 0x8000000000000000LL; /*0x1009a9d42*/
      }
      else
      {
        memcpy(v23, v21, sizeof(v23)); /*0x1009a9cc4*/
      }
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h3bba10af9bdd15bf(v24, v23); /*0x1009a9d57*/
    }
    else
    {
      v24[4] = v23[3]; /*0x1009a9b2c*/
      v24[3] = v23[2]; /*0x1009a9b3a*/
      v24[2] = v23[1]; /*0x1009a9b4f*/
      v24[1] = v23[0]; /*0x1009a9b56*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009a9b70*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a9b83*/
      v25[0] = *((_QWORD *)__src + 110); /*0x1009a9b8a*/
      v25[1] = v10; /*0x1009a9b91*/
      v25[2] = *((_QWORD *)__src + 112); /*0x1009a9b9f*/
      v24[0] = 1; /*0x1009a9bb4*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a9bd0*/
        v17,
        v22[48],
        v24,
        v25,
        LODWORD(v22[49]),
        HIDWORD(v22[49]));
      if ( v36 ) /*0x1009a9bdc*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x1009a9beb*/
    }
  }
  else
  {
    v24[4] = v35; /*0x1009a9a76*/
    v24[3] = v34; /*0x1009a9a81*/
    v24[2] = v33; /*0x1009a9a93*/
    v24[1] = v32; /*0x1009a9a9a*/
    memcpy(v18, __srca, sizeof(v18)); /*0x1009a9ab4*/
    v9 = *((_QWORD *)__src + 111); /*0x1009a9ac7*/
    v26[0] = *((_QWORD *)__src + 110); /*0x1009a9ace*/
    v26[1] = v9; /*0x1009a9ad5*/
    v26[2] = *((_QWORD *)__src + 112); /*0x1009a9ae3*/
    v24[0] = 1; /*0x1009a9af8*/
    v43 = 0; /*0x1009a9b03*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a9b1b*/
      v18,
      v22[48],
      v24,
      v26,
      LODWORD(v22[49]),
      HIDWORD(v22[49]));
  }
LABEL_23:
  if ( v39 != 0x8000000000000000LL ) /*0x1009a9d6a*/
  {
    v14 = v40; /*0x1009a9d6c*/
    for ( i = v41 + 1; i != 1; --i ) /*0x1009a9d74*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x1009a9d8d*/
      v14 += 96; /*0x1009a9d92*/
    }
    if ( v39 ) /*0x1009a9d9e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 96 * v39, 8); /*0x1009a9db1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a9dc2*/
}