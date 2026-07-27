// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a7ae0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h728e6f7c1f7ad6c9(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  void *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-9A8h] BYREF
  _BYTE v15[360]; // [rsp+170h] [rbp-840h] BYREF
  _BYTE __dst[520]; // [rsp+2D8h] [rbp-6D8h] BYREF
  _QWORD v17[50]; // [rsp+4E0h] [rbp-4D0h] BYREF
  _QWORD v18[50]; // [rsp+670h] [rbp-340h] BYREF
  _QWORD v19[19]; // [rsp+800h] [rbp-1B0h] BYREF
  _QWORD v20[3]; // [rsp+898h] [rbp-118h] BYREF
  _QWORD v21[3]; // [rsp+8B0h] [rbp-100h] BYREF
  _QWORD v22[4]; // [rsp+8C8h] [rbp-E8h] BYREF
  _BYTE *v23; // [rsp+8E8h] [rbp-C8h]
  __int64 *v24; // [rsp+8F0h] [rbp-C0h]
  __int64 v25; // [rsp+8F8h] [rbp-B8h]
  __int64 v26; // [rsp+900h] [rbp-B0h]
  __int64 v27; // [rsp+908h] [rbp-A8h]
  __int64 v28; // [rsp+910h] [rbp-A0h]
  __int64 v29; // [rsp+918h] [rbp-98h] BYREF
  __int64 v30; // [rsp+920h] [rbp-90h]
  __int64 v31; // [rsp+928h] [rbp-88h]
  __int64 v32; // [rsp+930h] [rbp-80h] BYREF
  __int64 v33; // [rsp+938h] [rbp-78h]
  void *v34; // [rsp+940h] [rbp-70h]
  size_t __n; // [rsp+948h] [rbp-68h]
  _BYTE *v36; // [rsp+950h] [rbp-60h]
  __int64 *v37; // [rsp+958h] [rbp-58h]
  __int64 v38; // [rsp+960h] [rbp-50h]
  __int64 v39; // [rsp+968h] [rbp-48h]
  __int64 v40; // [rsp+970h] [rbp-40h]
  __int64 v41; // [rsp+978h] [rbp-38h]
  void *__srca; // [rsp+980h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a7b09*/
  __srca = __src + 520; /*0x1009a7b21*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a7b25*/
  v31 = *((_QWORD *)__src + 117); /*0x1009a7b31*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a7b38*/
  v30 = *((_QWORD *)__src + 116); /*0x1009a7b46*/
  v29 = v2; /*0x1009a7b4d*/
  v38 = 0; /*0x1009a7b54*/
  v32 = (__int64)"set_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a7b63*/
  v33 = 37; /*0x1009a7b67*/
  v34 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a7b76*/
  __n = 3; /*0x1009a7b7a*/
  v36 = __dst; /*0x1009a7b82*/
  v37 = &v29; /*0x1009a7b8d*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v18); /*0x1009a7b9f*/
  if ( LODWORD(v18[0]) != 3 ) /*0x1009a7bab*/
  {
    memcpy(v19, v18, sizeof(v19)); /*0x1009a7c74*/
    v38 = 0; /*0x1009a7c79*/
    v32 = (__int64)"set_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a7c81*/
    v33 = 37; /*0x1009a7c85*/
    v34 = "suppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a7c94*/
    __n = 10; /*0x1009a7c98*/
    v36 = __dst; /*0x1009a7ca0*/
    v37 = &v29; /*0x1009a7ca4*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hd3dee5410a5f5aeb(v22, &v32); /*0x1009a7cb3*/
    if ( LOBYTE(v22[0]) != 6 ) /*0x1009a7cc9*/
    {
      v36 = (_BYTE *)v22[3]; /*0x1009a7d5a*/
      __n = v22[2]; /*0x1009a7d65*/
      v34 = (void *)v22[1]; /*0x1009a7d77*/
      v33 = v22[0]; /*0x1009a7d7b*/
      memcpy(v14, __srca, sizeof(v14)); /*0x1009a7d92*/
      v8 = *((_QWORD *)__src + 111); /*0x1009a7da5*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009a7dac*/
      v20[1] = v8; /*0x1009a7db3*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009a7dc1*/
      v32 = 1; /*0x1009a7dd6*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a7dec*/
        v14,
        v17[48],
        &v32,
        v20,
        LODWORD(v17[49]),
        HIDWORD(v17[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v19); /*0x1009a7dfb*/
      goto LABEL_21; /*0x1009a7e00*/
    }
    codexmate_lib::core::voice::runtime::set_trigger_listener_suppressed::hc1fcf1818f7c5caf( /*0x1009a7ce1*/
      &v32,
      (__int64)v19,
      BYTE1(v22[0]));
    v4 = v32; /*0x1009a7ce6*/
    if ( v32 == 0x8000000000000000LL ) /*0x1009a7ced*/
    {
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf6edda7bcbeb3a54((__int64)&v32, (__int64)v19); /*0x1009a7cf7*/
      v5 = v32; /*0x1009a7cfc*/
      v4 = v33; /*0x1009a7d00*/
      v6 = v34; /*0x1009a7d04*/
      v7 = __n; /*0x1009a7d08*/
      v23 = v36; /*0x1009a7d10*/
      v24 = v37; /*0x1009a7d1b*/
      v25 = v38; /*0x1009a7d26*/
      v26 = v39; /*0x1009a7d31*/
      v27 = v40; /*0x1009a7d3c*/
      v28 = v41; /*0x1009a7d47*/
    }
    else
    {
      v6 = (void *)v33; /*0x1009a7e05*/
      v7 = (__int64)v34; /*0x1009a7e09*/
      v5 = 0x8000000000000000LL; /*0x1009a7e0d*/
    }
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v19); /*0x1009a7e17*/
    memcpy(v18, __srca, sizeof(v18)); /*0x1009a7e2c*/
    if ( v5 == 0x8000000000000000LL ) /*0x1009a7e34*/
    {
      if ( v7 < 0 ) /*0x1009a7e39*/
      {
        v9 = 0; /*0x1009a7e3f*/
        goto LABEL_11; /*0x1009a7e3f*/
      }
      if ( v7 ) /*0x1009a7ec1*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __srca); /*0x1009a7ec3*/
        v9 = 1; /*0x1009a7ec8*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009a7ed6*/
        if ( !v10 ) /*0x1009a7ede*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v7); /*0x1009a7e42*/
      }
      else
      {
        v10 = 1; /*0x1009a7ee5*/
      }
      __srca = (void *)v10; /*0x1009a7eea*/
      memcpy((void *)v10, v6, v7); /*0x1009a7ef7*/
      if ( v4 ) /*0x1009a7eff*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v4, 1); /*0x1009a7f0c*/
      LOBYTE(v19[1]) = 3; /*0x1009a7f11*/
      v19[2] = v7; /*0x1009a7f18*/
      v19[3] = __srca; /*0x1009a7f23*/
      v19[4] = v7; /*0x1009a7f2a*/
      v19[0] = 0x8000000000000000LL; /*0x1009a7f31*/
    }
    else
    {
      v19[0] = v5; /*0x1009a7e4f*/
      v19[1] = v4; /*0x1009a7e56*/
      v19[2] = v6; /*0x1009a7e5d*/
      v19[3] = v7; /*0x1009a7e64*/
      v19[4] = v23; /*0x1009a7e79*/
      v19[5] = v24; /*0x1009a7e80*/
      v19[6] = v25; /*0x1009a7e8e*/
      v19[7] = v26; /*0x1009a7e9c*/
      v19[8] = v27; /*0x1009a7eaa*/
      v19[9] = v28; /*0x1009a7eb8*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hd6e58039a39c24e0(v18); /*0x1009a7f46*/
    goto LABEL_21; /*0x1009a7f46*/
  }
  v36 = (_BYTE *)v18[4]; /*0x1009a7bb8*/
  __n = v18[3]; /*0x1009a7bc3*/
  v34 = (void *)v18[2]; /*0x1009a7bd5*/
  v33 = v18[1]; /*0x1009a7bd9*/
  memcpy(v15, __srca, sizeof(v15)); /*0x1009a7bf0*/
  v3 = *((_QWORD *)__src + 111); /*0x1009a7c03*/
  v21[0] = *((_QWORD *)__src + 110); /*0x1009a7c0a*/
  v21[1] = v3; /*0x1009a7c11*/
  v21[2] = *((_QWORD *)__src + 112); /*0x1009a7c1f*/
  v32 = 1; /*0x1009a7c34*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a7c4d*/
    v15,
    v17[48],
    &v32,
    v21,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_21:
  if ( v29 != 0x8000000000000000LL ) /*0x1009a7f52*/
  {
    v11 = v30; /*0x1009a7f54*/
    for ( i = v31 + 1; i != 1; --i ) /*0x1009a7f62*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a7f7d*/
      v11 += 96; /*0x1009a7f82*/
    }
    if ( v29 ) /*0x1009a7f91*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 96 * v29, 8); /*0x1009a7fa7*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a7fb8*/
}