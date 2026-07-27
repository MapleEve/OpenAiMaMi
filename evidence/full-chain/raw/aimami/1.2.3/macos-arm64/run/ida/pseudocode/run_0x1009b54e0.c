// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b54e0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfb62142ab5e49293(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  char *v4; // r12
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+8h] [rbp-B68h] BYREF
  _BYTE v17[360]; // [rsp+170h] [rbp-A00h] BYREF
  _BYTE v18[360]; // [rsp+2D8h] [rbp-898h] BYREF
  _QWORD __dst[65]; // [rsp+440h] [rbp-730h] BYREF
  _QWORD __srca[50]; // [rsp+648h] [rbp-528h] BYREF
  _QWORD v21[50]; // [rsp+7D8h] [rbp-398h] BYREF
  _QWORD v22[10]; // [rsp+968h] [rbp-208h] BYREF
  _QWORD v23[19]; // [rsp+9B8h] [rbp-1B8h] BYREF
  _QWORD v24[3]; // [rsp+A50h] [rbp-120h] BYREF
  _QWORD v25[3]; // [rsp+A68h] [rbp-108h] BYREF
  _QWORD v26[3]; // [rsp+A80h] [rbp-F0h] BYREF
  __int64 v27[3]; // [rsp+A98h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+AB0h] [rbp-C0h] BYREF
  char *v29; // [rsp+AB8h] [rbp-B8h]
  __int64 v30; // [rsp+AC0h] [rbp-B0h]
  _QWORD *v31; // [rsp+AC8h] [rbp-A8h]
  __int64 v32; // [rsp+AD0h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+AD8h] [rbp-98h]
  __int64 v34; // [rsp+AE0h] [rbp-90h]
  __int64 v35; // [rsp+AE8h] [rbp-88h]
  __int64 v36; // [rsp+AF0h] [rbp-80h] BYREF
  __int64 v37; // [rsp+AF8h] [rbp-78h]
  __int64 v38; // [rsp+B00h] [rbp-70h]
  __int64 v39; // [rsp+B08h] [rbp-68h] BYREF
  __int64 v40; // [rsp+B10h] [rbp-60h]
  char *v41; // [rsp+B18h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B20h] [rbp-50h]
  _QWORD *v43; // [rsp+B28h] [rbp-48h]
  __int64 *v44; // [rsp+B30h] [rbp-40h]
  __int64 v45; // [rsp+B38h] [rbp-38h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b5509*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x1009b5524*/
  v38 = *((_QWORD *)__src + 117); /*0x1009b5530*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b5534*/
  v37 = *((_QWORD *)__src + 116); /*0x1009b5542*/
  v36 = v2; /*0x1009b5546*/
  v45 = 0; /*0x1009b554a*/
  v39 = (__int64)"delete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009b5559*/
  v40 = 21; /*0x1009b555d*/
  v41 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b556c*/
  v42 = 3; /*0x1009b5570*/
  v43 = __dst; /*0x1009b5578*/
  v44 = &v36; /*0x1009b5580*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009b5592*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009b55a8*/
  {
    memcpy(v23, __srca, sizeof(v23)); /*0x1009b5666*/
    v45 = 0; /*0x1009b566b*/
    v39 = (__int64)"delete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009b567a*/
    v40 = 21; /*0x1009b567e*/
    v41 = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b568d*/
    v42 = 7; /*0x1009b5691*/
    v43 = __dst; /*0x1009b5699*/
    v44 = &v36; /*0x1009b56a1*/
    v4 = (char *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009b56b5*/
    if ( !v4 ) /*0x1009b56bb*/
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009b56cc*/
        &v28,
        &v39,
        &v41);
      if ( (_BYTE)v28 != 6 ) /*0x1009b56d8*/
      {
        v43 = v31; /*0x1009b58b5*/
        v42 = v30; /*0x1009b58c0*/
        v41 = v29; /*0x1009b58d2*/
        v40 = v28; /*0x1009b58d6*/
        memcpy(v17, __src + 520, sizeof(v17)); /*0x1009b58ec*/
        v10 = *((_QWORD *)__src + 111); /*0x1009b58ff*/
        v25[0] = *((_QWORD *)__src + 110); /*0x1009b5906*/
        v25[1] = v10; /*0x1009b590d*/
        v25[2] = *((_QWORD *)__src + 112); /*0x1009b591b*/
        v39 = 1; /*0x1009b5930*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b5949*/
          v17,
          v21[48],
          &v39,
          v25,
          LODWORD(v21[49]),
          HIDWORD(v21[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v23); /*0x1009b5958*/
        goto LABEL_22; /*0x1009b5967*/
      }
      v4 = v29; /*0x1009b56de*/
    }
    v45 = 0; /*0x1009b56e5*/
    v39 = (__int64)"delete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009b56ed*/
    v40 = 21; /*0x1009b56f1*/
    v41 = "providerIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b5700*/
    v42 = 10; /*0x1009b5704*/
    v43 = __dst; /*0x1009b570c*/
    v44 = &v36; /*0x1009b5714*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v32, &v39); /*0x1009b5726*/
    if ( (_BYTE)v32 != 6 ) /*0x1009b5732*/
    {
      v43 = (_QWORD *)v35; /*0x1009b57df*/
      v42 = v34; /*0x1009b57ea*/
      v41 = (char *)v33; /*0x1009b57fc*/
      v40 = v32; /*0x1009b5800*/
      memcpy(v16, __src + 520, sizeof(v16)); /*0x1009b5816*/
      v9 = *((_QWORD *)__src + 111); /*0x1009b5829*/
      v24[0] = *((_QWORD *)__src + 110); /*0x1009b5830*/
      v24[1] = v9; /*0x1009b5837*/
      v24[2] = *((_QWORD *)__src + 112); /*0x1009b5845*/
      v39 = 1; /*0x1009b585a*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b5870*/
        v16,
        v21[48],
        &v39,
        v24,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v23); /*0x1009b587f*/
      goto LABEL_22; /*0x1009b588e*/
    }
    v27[2] = v35; /*0x1009b573f*/
    v27[1] = v34; /*0x1009b5754*/
    v27[0] = v33; /*0x1009b575b*/
    codexmate_lib::commands::relay::delete_relay_provider::hfce5b74d936ec669(v22, (__int64)v23, (_QWORD **)v4, v27); /*0x1009b577a*/
    memcpy(__srca, __src + 520, sizeof(__srca)); /*0x1009b578e*/
    if ( v22[0] == 0x8000000000000000LL ) /*0x1009b57a4*/
    {
      v5 = v22[1]; /*0x1009b57aa*/
      v6 = (const void *)v22[2]; /*0x1009b57b1*/
      v7 = v22[3]; /*0x1009b57b8*/
      if ( v22[3] < 0LL ) /*0x1009b57c2*/
      {
        v8 = 0; /*0x1009b57c8*/
        goto LABEL_10; /*0x1009b57c8*/
      }
      if ( v22[3] ) /*0x1009b596c*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, __src + 520); /*0x1009b596e*/
        v8 = 1; /*0x1009b5973*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009b5981*/
        if ( !v11 ) /*0x1009b5989*/
LABEL_10:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009b57cb*/
        v12 = v11; /*0x1009b598f*/
      }
      else
      {
        v12 = 1; /*0x1009b5994*/
      }
      memcpy((void *)v12, v6, v7); /*0x1009b59a3*/
      if ( v5 ) /*0x1009b59ab*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009b59b8*/
      LOBYTE(v23[1]) = 3; /*0x1009b59bd*/
      v23[2] = v7; /*0x1009b59c4*/
      v23[3] = v12; /*0x1009b59cb*/
      v23[4] = v7; /*0x1009b59d2*/
      v23[0] = 0x8000000000000000LL; /*0x1009b59e3*/
    }
    else
    {
      qmemcpy(v23, v22, 0x50u); /*0x1009b58a6*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hd6e58039a39c24e0(__srca); /*0x1009b59f8*/
    goto LABEL_22; /*0x1009b59f8*/
  }
  v43 = (_QWORD *)__srca[4]; /*0x1009b55b5*/
  v42 = __srca[3]; /*0x1009b55c0*/
  v41 = (char *)__srca[2]; /*0x1009b55d2*/
  v40 = __srca[1]; /*0x1009b55d6*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1009b55ec*/
  v3 = *((_QWORD *)__src + 111); /*0x1009b55ff*/
  v26[0] = *((_QWORD *)__src + 110); /*0x1009b5606*/
  v26[1] = v3; /*0x1009b560d*/
  v26[2] = *((_QWORD *)__src + 112); /*0x1009b561b*/
  v39 = 1; /*0x1009b5630*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b5649*/
    v18,
    v21[48],
    &v39,
    v26,
    LODWORD(v21[49]),
    HIDWORD(v21[49]));
LABEL_22:
  if ( v36 != 0x8000000000000000LL ) /*0x1009b5a01*/
  {
    v13 = v37; /*0x1009b5a03*/
    for ( i = v38 + 1; i != 1; --i ) /*0x1009b5a0b*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009b5a1d*/
      v13 += 96; /*0x1009b5a22*/
    }
    if ( v36 ) /*0x1009b5a2e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 96 * v36, 8); /*0x1009b5a41*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b5a52*/
}