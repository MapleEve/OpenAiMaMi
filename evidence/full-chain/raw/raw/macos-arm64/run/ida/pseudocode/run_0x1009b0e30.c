// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b0e30 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbf44b48f4cd63aa6(
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b0e59*/
  __srca = __src + 520; /*0x1009b0e71*/
  memcpy(v22, __src + 520, sizeof(v22)); /*0x1009b0e75*/
  v41 = *((_QWORD *)__src + 117); /*0x1009b0e81*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b0e85*/
  v40 = *((_QWORD *)__src + 116); /*0x1009b0e93*/
  v39 = v2; /*0x1009b0e97*/
  v24[6] = 0; /*0x1009b0e9b*/
  v24[0] = "activate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009b0ead*/
  v24[1] = 23; /*0x1009b0eb4*/
  v3 = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b0ebf*/
  v24[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b0ec6*/
  v24[3] = 7; /*0x1009b0ecd*/
  v24[4] = __dst; /*0x1009b0ed8*/
  v24[5] = &v39; /*0x1009b0ee3*/
  LOBYTE(v3) = 1; /*0x1009b0ef5*/
  v43 = (int)v3; /*0x1009b0ef7*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009b0eff*/
  if ( !v4 ) /*0x1009b0f05*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009b0f1c*/
      &v28,
      v24,
      &v24[2]);
    if ( (_BYTE)v28 != 6 ) /*0x1009b0f28*/
    {
      v24[4] = v31; /*0x1009b120c*/
      v24[3] = v30; /*0x1009b121a*/
      v24[2] = v29; /*0x1009b122f*/
      v24[1] = v28; /*0x1009b1236*/
      memcpy(v19, __srca, sizeof(v19)); /*0x1009b1250*/
      v11 = *((_QWORD *)__src + 111); /*0x1009b1263*/
      v27[0] = *((_QWORD *)__src + 110); /*0x1009b126a*/
      v27[1] = v11; /*0x1009b1271*/
      v27[2] = *((_QWORD *)__src + 112); /*0x1009b127f*/
      v24[0] = 1; /*0x1009b1294*/
      v43 = 0; /*0x1009b129f*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b12b7*/
        v19,
        v22[48],
        v24,
        v27,
        LODWORD(v22[49]),
        HIDWORD(v22[49]));
      goto LABEL_23; /*0x1009b12bc*/
    }
    v4 = v29; /*0x1009b0f2e*/
  }
  v24[6] = 0; /*0x1009b0f35*/
  v24[0] = "activate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009b0f40*/
  v24[1] = 23; /*0x1009b0f47*/
  v24[2] = "providerIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b0f59*/
  v24[3] = 10; /*0x1009b0f60*/
  v24[4] = __dst; /*0x1009b0f6b*/
  v24[5] = &v39; /*0x1009b0f72*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v32, v24); /*0x1009b0f87*/
  if ( (_BYTE)v32 == 6 ) /*0x1009b0f93*/
  {
    v38 = v35; /*0x1009b0f9d*/
    v37 = v34; /*0x1009b0fa9*/
    v36 = v33; /*0x1009b0fad*/
    v24[6] = 0; /*0x1009b0fb1*/
    v24[0] = "activate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009b0fbc*/
    v24[1] = 23; /*0x1009b0fc3*/
    v24[2] = "idenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b0fd5*/
    v24[3] = 3; /*0x1009b0fdc*/
    v24[4] = __dst; /*0x1009b0fe7*/
    v24[5] = &v39; /*0x1009b0fee*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h3c13f9516fa4f179(v23, v24); /*0x1009b1003*/
    if ( LOBYTE(v23[0]) == 6 ) /*0x1009b100f*/
    {
      codexmate_lib::commands::relay::activate_relay_provider::hc5d39e556c87d954(v21, v4, &v36); /*0x1009b1023*/
      memcpy(v24, __srca, sizeof(v24)); /*0x1009b1038*/
      if ( v21[0] == 0x8000000000000000LL ) /*0x1009b104e*/
      {
        v5 = v21[1]; /*0x1009b1054*/
        v6 = (const void *)v21[2]; /*0x1009b105b*/
        v7 = v21[3]; /*0x1009b1062*/
        if ( v21[3] < 0LL ) /*0x1009b106c*/
        {
          v8 = 0; /*0x1009b1072*/
          goto LABEL_9; /*0x1009b1072*/
        }
        if ( v21[3] ) /*0x1009b12db*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, __srca); /*0x1009b12dd*/
          v8 = 1; /*0x1009b12e2*/
          v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009b12f0*/
          if ( !v12 ) /*0x1009b12f8*/
LABEL_9:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009b1075*/
          v13 = v12; /*0x1009b12fe*/
        }
        else
        {
          v13 = 1; /*0x1009b1303*/
        }
        memcpy((void *)v13, v6, v7); /*0x1009b1312*/
        if ( v5 ) /*0x1009b131a*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009b1327*/
        LOBYTE(v23[1]) = 3; /*0x1009b132c*/
        v23[2] = v7; /*0x1009b1333*/
        v23[3] = v13; /*0x1009b133a*/
        v23[4] = v7; /*0x1009b1341*/
        v23[0] = 0x8000000000000000LL; /*0x1009b1352*/
      }
      else
      {
        memcpy(v23, v21, sizeof(v23)); /*0x1009b12d4*/
      }
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h3bba10af9bdd15bf(v24, v23); /*0x1009b1367*/
    }
    else
    {
      v24[4] = v23[3]; /*0x1009b113c*/
      v24[3] = v23[2]; /*0x1009b114a*/
      v24[2] = v23[1]; /*0x1009b115f*/
      v24[1] = v23[0]; /*0x1009b1166*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009b1180*/
      v10 = *((_QWORD *)__src + 111); /*0x1009b1193*/
      v25[0] = *((_QWORD *)__src + 110); /*0x1009b119a*/
      v25[1] = v10; /*0x1009b11a1*/
      v25[2] = *((_QWORD *)__src + 112); /*0x1009b11af*/
      v24[0] = 1; /*0x1009b11c4*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b11e0*/
        v17,
        v22[48],
        v24,
        v25,
        LODWORD(v22[49]),
        HIDWORD(v22[49]));
      if ( v36 ) /*0x1009b11ec*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x1009b11fb*/
    }
  }
  else
  {
    v24[4] = v35; /*0x1009b1086*/
    v24[3] = v34; /*0x1009b1091*/
    v24[2] = v33; /*0x1009b10a3*/
    v24[1] = v32; /*0x1009b10aa*/
    memcpy(v18, __srca, sizeof(v18)); /*0x1009b10c4*/
    v9 = *((_QWORD *)__src + 111); /*0x1009b10d7*/
    v26[0] = *((_QWORD *)__src + 110); /*0x1009b10de*/
    v26[1] = v9; /*0x1009b10e5*/
    v26[2] = *((_QWORD *)__src + 112); /*0x1009b10f3*/
    v24[0] = 1; /*0x1009b1108*/
    v43 = 0; /*0x1009b1113*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b112b*/
      v18,
      v22[48],
      v24,
      v26,
      LODWORD(v22[49]),
      HIDWORD(v22[49]));
  }
LABEL_23:
  if ( v39 != 0x8000000000000000LL ) /*0x1009b137a*/
  {
    v14 = v40; /*0x1009b137c*/
    for ( i = v41 + 1; i != 1; --i ) /*0x1009b1384*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x1009b139d*/
      v14 += 96; /*0x1009b13a2*/
    }
    if ( v39 ) /*0x1009b13ae*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 96 * v39, 8); /*0x1009b13c1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b13d2*/
}