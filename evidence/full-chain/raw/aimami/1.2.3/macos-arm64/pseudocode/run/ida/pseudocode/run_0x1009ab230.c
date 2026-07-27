// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ab230 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9b27172283fd0b48(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  char *v3; // rax
  __int64 v4; // r12
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
  __int64 v29; // [rsp+CA0h] [rbp-A0h]
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ab259*/
  __srca = __src + 520; /*0x1009ab271*/
  memcpy(v22, __src + 520, sizeof(v22)); /*0x1009ab275*/
  v41 = *((_QWORD *)__src + 117); /*0x1009ab281*/
  v2 = *((_QWORD *)__src + 115); /*0x1009ab285*/
  v40 = *((_QWORD *)__src + 116); /*0x1009ab293*/
  v39 = v2; /*0x1009ab297*/
  v24[6] = 0; /*0x1009ab29b*/
  v24[0] = "set_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009ab2ad*/
  v24[1] = 26; /*0x1009ab2b4*/
  v3 = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ab2bf*/
  v24[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ab2c6*/
  v24[3] = 7; /*0x1009ab2cd*/
  v24[4] = __dst; /*0x1009ab2d8*/
  v24[5] = &v39; /*0x1009ab2e3*/
  LOBYTE(v3) = 1; /*0x1009ab2f5*/
  v43 = (int)v3; /*0x1009ab2f7*/
  v4 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009ab2ff*/
  if ( !v4 ) /*0x1009ab305*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009ab31c*/
      &v28,
      v24,
      &v24[2]);
    if ( (_BYTE)v28 != 6 ) /*0x1009ab328*/
    {
      v24[4] = v31; /*0x1009ab61d*/
      v24[3] = v30; /*0x1009ab62b*/
      v24[2] = v29; /*0x1009ab640*/
      v24[1] = v28; /*0x1009ab647*/
      memcpy(v19, __srca, sizeof(v19)); /*0x1009ab661*/
      v11 = *((_QWORD *)__src + 111); /*0x1009ab674*/
      v27[0] = *((_QWORD *)__src + 110); /*0x1009ab67b*/
      v27[1] = v11; /*0x1009ab682*/
      v27[2] = *((_QWORD *)__src + 112); /*0x1009ab690*/
      v24[0] = 1; /*0x1009ab6a5*/
      v43 = 0; /*0x1009ab6b0*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ab6c8*/
        v19,
        v22[48],
        v24,
        v27,
        LODWORD(v22[49]),
        HIDWORD(v22[49]));
      goto LABEL_24; /*0x1009ab6c8*/
    }
    v4 = v29; /*0x1009ab32e*/
  }
  v24[6] = 0; /*0x1009ab335*/
  v24[0] = "set_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009ab340*/
  v24[1] = 26; /*0x1009ab347*/
  v24[2] = "providerIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ab359*/
  v24[3] = 10; /*0x1009ab360*/
  v24[4] = __dst; /*0x1009ab36b*/
  v24[5] = &v39; /*0x1009ab372*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v32, v24); /*0x1009ab387*/
  if ( (_BYTE)v32 == 6 ) /*0x1009ab393*/
  {
    v38 = v35; /*0x1009ab39d*/
    v37 = v34; /*0x1009ab3a9*/
    v36 = v33; /*0x1009ab3ad*/
    v24[6] = 0; /*0x1009ab3b1*/
    v24[0] = "set_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009ab3bc*/
    v24[1] = 26; /*0x1009ab3c3*/
    v24[2] = "networkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ab3d5*/
    v24[3] = 7; /*0x1009ab3dc*/
    v24[4] = __dst; /*0x1009ab3e7*/
    v24[5] = &v39; /*0x1009ab3ee*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::he687443f78bf023a(v23, v24); /*0x1009ab403*/
    if ( LOBYTE(v23[0]) == 6 ) /*0x1009ab40f*/
    {
      codexmate_lib::commands::relay::set_relay_provider_network::hf095a26b2ce6674c(v21, v4, &v36, BYTE1(v23[0])); /*0x1009ab42a*/
      memcpy(v24, __srca, sizeof(v24)); /*0x1009ab43f*/
      if ( v21[0] == 0x8000000000000000LL ) /*0x1009ab455*/
      {
        v5 = v21[1]; /*0x1009ab45b*/
        v6 = (const void *)v21[2]; /*0x1009ab462*/
        v7 = v21[3]; /*0x1009ab469*/
        if ( v21[3] < 0LL ) /*0x1009ab473*/
        {
          v8 = 0; /*0x1009ab479*/
          goto LABEL_9; /*0x1009ab479*/
        }
        if ( v21[3] ) /*0x1009ab6f6*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, __srca); /*0x1009ab6f8*/
          v8 = 1; /*0x1009ab6fd*/
          v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009ab70b*/
          if ( !v12 ) /*0x1009ab713*/
LABEL_9:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009ab47c*/
          v13 = v12; /*0x1009ab719*/
        }
        else
        {
          v13 = 1; /*0x1009ab71e*/
        }
        memcpy((void *)v13, v6, v7); /*0x1009ab72d*/
        if ( v5 ) /*0x1009ab735*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009ab742*/
        LOBYTE(v23[1]) = 3; /*0x1009ab747*/
        v23[2] = v7; /*0x1009ab74e*/
        v23[3] = v13; /*0x1009ab755*/
        v23[4] = v7; /*0x1009ab75c*/
        v23[0] = 0x8000000000000000LL; /*0x1009ab76d*/
      }
      else
      {
        memcpy(v23, v21, sizeof(v23)); /*0x1009ab6ef*/
      }
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h3bba10af9bdd15bf(v24, v23); /*0x1009ab782*/
    }
    else
    {
      v24[4] = v23[3]; /*0x1009ab543*/
      v24[3] = v23[2]; /*0x1009ab551*/
      v24[2] = v23[1]; /*0x1009ab566*/
      v24[1] = v23[0]; /*0x1009ab56d*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009ab587*/
      v10 = *((_QWORD *)__src + 111); /*0x1009ab59a*/
      v25[0] = *((_QWORD *)__src + 110); /*0x1009ab5a1*/
      v25[1] = v10; /*0x1009ab5a8*/
      v25[2] = *((_QWORD *)__src + 112); /*0x1009ab5b6*/
      v24[0] = 1; /*0x1009ab5cb*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ab5e7*/
        v17,
        v22[48],
        v24,
        v25,
        LODWORD(v22[49]),
        HIDWORD(v22[49]));
      if ( v36 ) /*0x1009ab5fd*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x1009ab60c*/
    }
  }
  else
  {
    v24[4] = v35; /*0x1009ab48d*/
    v24[3] = v34; /*0x1009ab498*/
    v24[2] = v33; /*0x1009ab4aa*/
    v24[1] = v32; /*0x1009ab4b1*/
    memcpy(v18, __srca, sizeof(v18)); /*0x1009ab4cb*/
    v9 = *((_QWORD *)__src + 111); /*0x1009ab4de*/
    v26[0] = *((_QWORD *)__src + 110); /*0x1009ab4e5*/
    v26[1] = v9; /*0x1009ab4ec*/
    v26[2] = *((_QWORD *)__src + 112); /*0x1009ab4fa*/
    v24[0] = 1; /*0x1009ab50f*/
    v43 = 0; /*0x1009ab51a*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ab532*/
      v18,
      v22[48],
      v24,
      v26,
      LODWORD(v22[49]),
      HIDWORD(v22[49]));
  }
LABEL_24:
  if ( v39 != 0x8000000000000000LL ) /*0x1009ab78b*/
  {
    v14 = v40; /*0x1009ab78d*/
    for ( i = v41 + 1; i != 1; --i ) /*0x1009ab795*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x1009ab7ad*/
      v14 += 96; /*0x1009ab7b2*/
    }
    if ( v39 ) /*0x1009ab7be*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 96 * v39, 8); /*0x1009ab7d1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ab7e2*/
}