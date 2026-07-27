// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099ed90 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h260b93b1e8cc051e(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v6; // rsi
  const void *v7; // rbx
  size_t v8; // r15
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 i; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  _BYTE v20[360]; // [rsp+0h] [rbp-D70h] BYREF
  _BYTE v21[360]; // [rsp+168h] [rbp-C08h] BYREF
  _BYTE v22[360]; // [rsp+2D0h] [rbp-AA0h] BYREF
  _BYTE v23[360]; // [rsp+438h] [rbp-938h] BYREF
  _BYTE __dst[520]; // [rsp+5A0h] [rbp-7D0h] BYREF
  _QWORD v25[23]; // [rsp+7A8h] [rbp-5C8h] BYREF
  _QWORD v26[50]; // [rsp+860h] [rbp-510h] BYREF
  _QWORD v27[23]; // [rsp+9F0h] [rbp-380h] BYREF
  _QWORD v28[50]; // [rsp+AA8h] [rbp-2C8h] BYREF
  _QWORD v29[3]; // [rsp+C38h] [rbp-138h] BYREF
  _QWORD v30[3]; // [rsp+C50h] [rbp-120h] BYREF
  _QWORD v31[3]; // [rsp+C68h] [rbp-108h] BYREF
  _QWORD v32[3]; // [rsp+C80h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+C98h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+CA0h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+CA8h] [rbp-C8h]
  __int64 v36; // [rsp+CB0h] [rbp-C0h]
  __int64 v37; // [rsp+CB8h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+CC0h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+CC8h] [rbp-A8h]
  __int64 v40; // [rsp+CD0h] [rbp-A0h]
  __int64 v41; // [rsp+CD8h] [rbp-98h] BYREF
  __int64 v42; // [rsp+CE0h] [rbp-90h] BYREF
  __int64 v43; // [rsp+CE8h] [rbp-88h]
  __int64 v44; // [rsp+CF0h] [rbp-80h]
  __int64 v45; // [rsp+CF8h] [rbp-78h] BYREF
  __int64 v46; // [rsp+D00h] [rbp-70h]
  __int64 v47; // [rsp+D08h] [rbp-68h]
  __int64 v48; // [rsp+D10h] [rbp-60h]
  __int64 v49; // [rsp+D18h] [rbp-58h]
  __int64 v50; // [rsp+D20h] [rbp-50h]
  __int64 v51; // [rsp+D28h] [rbp-48h]
  void *__srca; // [rsp+D30h] [rbp-40h]
  int v53; // [rsp+D3Ch] [rbp-34h]
  __int64 v54; // [rsp+D40h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099edb9*/
  __srca = __src + 520; /*0x10099edd1*/
  memcpy(v26, __src + 520, sizeof(v26)); /*0x10099edd5*/
  v47 = *((_QWORD *)__src + 117); /*0x10099ede1*/
  v2 = *((_QWORD *)__src + 115); /*0x10099ede5*/
  v46 = *((_QWORD *)__src + 116); /*0x10099edf3*/
  v45 = v2; /*0x10099edf7*/
  v28[6] = 0; /*0x10099edfb*/
  v28[0] = "save_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099ee0d*/
  v28[1] = 21; /*0x10099ee14*/
  v28[2] = "llmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099ee26*/
  v28[3] = 11; /*0x10099ee2d*/
  v28[4] = __dst; /*0x10099ee38*/
  v28[5] = &v45; /*0x10099ee43*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v41, v28); /*0x10099ee5a*/
  if ( (_BYTE)v41 != 6 ) /*0x10099ee66*/
  {
    v28[4] = v44; /*0x10099f06c*/
    v28[3] = v43; /*0x10099f07a*/
    v28[2] = v42; /*0x10099f08f*/
    v28[1] = v41; /*0x10099f096*/
    memcpy(v23, __srca, sizeof(v23)); /*0x10099f0b0*/
    v10 = *((_QWORD *)__src + 111); /*0x10099f0c3*/
    v32[0] = *((_QWORD *)__src + 110); /*0x10099f0ca*/
    v32[1] = v10; /*0x10099f0d1*/
    v32[2] = *((_QWORD *)__src + 112); /*0x10099f0df*/
    v28[0] = 1; /*0x10099f0f4*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099f112*/
      v23,
      v26[48],
      v28,
      v32,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    goto LABEL_16; /*0x10099f121*/
  }
  v54 = v42; /*0x10099ee73*/
  v51 = v43; /*0x10099ee7e*/
  v28[6] = 0; /*0x10099ee82*/
  v28[0] = "save_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099ee8d*/
  v28[1] = 21; /*0x10099ee94*/
  v28[2] = "llmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099eea6*/
  v28[3] = 9; /*0x10099eead*/
  v28[4] = __dst; /*0x10099eeb8*/
  v28[5] = &v45; /*0x10099eebf*/
  v3 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v37, v28); /*0x10099eed4*/
  LOBYTE(v3) = (_BYTE)v37 == 6; /*0x10099eee0*/
  v53 = v3; /*0x10099eee3*/
  if ( (_BYTE)v37 != 6 ) /*0x10099eee6*/
  {
    v28[4] = v40; /*0x10099f12d*/
    v28[3] = v39; /*0x10099f13b*/
    v28[2] = v38; /*0x10099f150*/
    v28[1] = v37; /*0x10099f157*/
    memcpy(v22, __srca, sizeof(v22)); /*0x10099f171*/
    v11 = *((_QWORD *)__src + 111); /*0x10099f184*/
    v31[0] = *((_QWORD *)__src + 110); /*0x10099f18b*/
    v31[1] = v11; /*0x10099f192*/
    v31[2] = *((_QWORD *)__src + 112); /*0x10099f1a0*/
    v28[0] = 1; /*0x10099f1b5*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099f1d1*/
      v22,
      v26[48],
      v28,
      v31,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    v12 = v54; /*0x10099f1d6*/
    if ( !v54 ) /*0x10099f1e7*/
      goto LABEL_16; /*0x10099f1e7*/
    goto LABEL_15; /*0x10099f1e7*/
  }
  v4 = v38; /*0x10099eeec*/
  v49 = v39; /*0x10099eefa*/
  v28[6] = 0; /*0x10099eefe*/
  v28[0] = "save_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099ef09*/
  v28[1] = 21; /*0x10099ef10*/
  v28[2] = "llmModelasrModeldiagnoserelaunchcategoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch"; /*0x10099ef22*/
  v28[3] = 8; /*0x10099ef29*/
  v28[4] = __dst; /*0x10099ef34*/
  v28[5] = &v45; /*0x10099ef3b*/
  v5 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v33, v28); /*0x10099ef50*/
  LOBYTE(v5) = (_BYTE)v33 == 6; /*0x10099ef5c*/
  v53 = v5; /*0x10099ef5f*/
  if ( (_BYTE)v33 != 6 ) /*0x10099ef62*/
  {
    v28[4] = v36; /*0x10099f1f9*/
    v28[3] = v35; /*0x10099f207*/
    v28[2] = v34; /*0x10099f21c*/
    v28[1] = v33; /*0x10099f223*/
    memcpy(v21, __srca, sizeof(v21)); /*0x10099f23d*/
    v13 = *((_QWORD *)__src + 111); /*0x10099f250*/
    v30[0] = *((_QWORD *)__src + 110); /*0x10099f257*/
    v30[1] = v13; /*0x10099f25e*/
    v30[2] = *((_QWORD *)__src + 112); /*0x10099f26c*/
    v28[0] = 1; /*0x10099f281*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099f29d*/
      v21,
      v26[48],
      v28,
      v30,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    if ( !v4 ) /*0x10099f2af*/
      goto LABEL_14; /*0x10099f2af*/
    goto LABEL_13; /*0x10099f2af*/
  }
  v50 = v34; /*0x10099ef6f*/
  v48 = v35; /*0x10099ef7a*/
  v28[6] = 0; /*0x10099ef7e*/
  v28[0] = "save_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099ef89*/
  v28[1] = 21; /*0x10099ef90*/
  v28[2] = "llmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099efa2*/
  v28[3] = 10; /*0x10099efa9*/
  v28[4] = __dst; /*0x10099efb4*/
  v28[5] = &v45; /*0x10099efbb*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v27, v28); /*0x10099efd0*/
  if ( LOBYTE(v27[0]) != 6 ) /*0x10099efe6*/
  {
    v28[4] = v27[3]; /*0x10099f34b*/
    v28[3] = v27[2]; /*0x10099f359*/
    v28[2] = v27[1]; /*0x10099f36e*/
    v28[1] = v27[0]; /*0x10099f375*/
    memcpy(v20, __srca, sizeof(v20)); /*0x10099f38f*/
    v17 = *((_QWORD *)__src + 111); /*0x10099f3a2*/
    v29[0] = *((_QWORD *)__src + 110); /*0x10099f3a9*/
    v29[1] = v17; /*0x10099f3b0*/
    v29[2] = *((_QWORD *)__src + 112); /*0x10099f3be*/
    v28[0] = 1; /*0x10099f3d3*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099f3ef*/
      v20,
      v26[48],
      v28,
      v29,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    if ( v50 ) /*0x10099f3fb*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v50, 1); /*0x10099f406*/
    if ( !v4 ) /*0x10099f40e*/
    {
LABEL_14:
      v12 = v54; /*0x10099f2c2*/
      if ( !v54 ) /*0x10099f2c9*/
        goto LABEL_16; /*0x10099f2c9*/
LABEL_15:
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v12, 1); /*0x10099f2cb*/
      goto LABEL_16; /*0x10099f2d4*/
    }
LABEL_13:
    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v4, 1); /*0x10099f2b1*/
    goto LABEL_14; /*0x10099f2bd*/
  }
  codexmate_lib::commands::voice::save_voice_llm_config::h1dd181bea181fb2e(v25, &v42, &v38, &v34, &v27[1], a2); /*0x10099f00f*/
  v6 = __srca; /*0x10099f020*/
  memcpy(v28, __srca, sizeof(v28)); /*0x10099f024*/
  if ( v25[0] == 0x8000000000000000LL ) /*0x10099f030*/
  {
    __srca = (void *)v25[1]; /*0x10099f03d*/
    v7 = (const void *)v25[2]; /*0x10099f041*/
    v8 = v25[3]; /*0x10099f048*/
    if ( v25[3] < 0LL ) /*0x10099f052*/
    {
      v9 = 0; /*0x10099f058*/
      goto LABEL_8; /*0x10099f058*/
    }
    if ( v25[3] ) /*0x10099f433*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v6); /*0x10099f435*/
      v9 = 1; /*0x10099f43a*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x10099f448*/
      if ( !v18 ) /*0x10099f450*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x10099f05b*/
      v19 = v18; /*0x10099f456*/
    }
    else
    {
      v19 = 1; /*0x10099f45b*/
    }
    memcpy((void *)v19, v7, v8); /*0x10099f46a*/
    if ( __srca ) /*0x10099f476*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, __srca, 1); /*0x10099f480*/
    LOBYTE(v27[1]) = 3; /*0x10099f485*/
    v27[2] = v8; /*0x10099f48c*/
    v27[3] = v19; /*0x10099f493*/
    v27[4] = v8; /*0x10099f49a*/
    v27[0] = 0x8000000000000000LL; /*0x10099f4a1*/
  }
  else
  {
    memcpy(v27, v25, sizeof(v27)); /*0x10099f42c*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h256ff3847de0e375(v28, v27); /*0x10099f4b6*/
LABEL_16:
  if ( v45 != 0x8000000000000000LL ) /*0x10099f2dd*/
  {
    v14 = v46; /*0x10099f2df*/
    for ( i = v47 + 1; i != 1; --i ) /*0x10099f2e7*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x10099f2fd*/
      v14 += 96; /*0x10099f302*/
    }
    if ( v45 ) /*0x10099f30e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 96 * v45, 8); /*0x10099f321*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099f332*/
}