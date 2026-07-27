// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a0dd0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h342c274de0eda953(
        char *__src,
        double a2,
        double a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  void *v7; // rsi
  const void *v8; // rbx
  size_t v9; // r15
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 i; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  _BYTE v21[360]; // [rsp+0h] [rbp-CD0h] BYREF
  _BYTE v22[360]; // [rsp+168h] [rbp-B68h] BYREF
  _BYTE v23[360]; // [rsp+2D0h] [rbp-A00h] BYREF
  _BYTE v24[360]; // [rsp+438h] [rbp-898h] BYREF
  _BYTE __dst[520]; // [rsp+5A0h] [rbp-730h] BYREF
  _QWORD v26[50]; // [rsp+7A8h] [rbp-528h] BYREF
  _QWORD v27[13]; // [rsp+938h] [rbp-398h] BYREF
  _QWORD v28[13]; // [rsp+9A0h] [rbp-330h] BYREF
  _QWORD v29[50]; // [rsp+A08h] [rbp-2C8h] BYREF
  _QWORD v30[3]; // [rsp+B98h] [rbp-138h] BYREF
  _QWORD v31[3]; // [rsp+BB0h] [rbp-120h] BYREF
  _QWORD v32[3]; // [rsp+BC8h] [rbp-108h] BYREF
  _QWORD v33[3]; // [rsp+BE0h] [rbp-F0h] BYREF
  __int64 v34; // [rsp+BF8h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+C00h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+C08h] [rbp-C8h]
  __int64 v37; // [rsp+C10h] [rbp-C0h]
  __int64 v38; // [rsp+C18h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+C20h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+C28h] [rbp-A8h]
  __int64 v41; // [rsp+C30h] [rbp-A0h]
  __int64 v42; // [rsp+C38h] [rbp-98h] BYREF
  __int64 v43; // [rsp+C40h] [rbp-90h] BYREF
  __int64 v44; // [rsp+C48h] [rbp-88h]
  __int64 v45; // [rsp+C50h] [rbp-80h]
  __int64 v46; // [rsp+C58h] [rbp-78h] BYREF
  __int64 v47; // [rsp+C60h] [rbp-70h]
  __int64 v48; // [rsp+C68h] [rbp-68h]
  __int64 v49; // [rsp+C70h] [rbp-60h]
  __int64 v50; // [rsp+C78h] [rbp-58h]
  __int64 v51; // [rsp+C80h] [rbp-50h]
  __int64 v52; // [rsp+C88h] [rbp-48h]
  void *__srca; // [rsp+C90h] [rbp-40h]
  int v54; // [rsp+C9Ch] [rbp-34h]
  __int64 v55; // [rsp+CA0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a0df9*/
  __srca = __src + 520; /*0x1009a0e11*/
  memcpy(v26, __src + 520, sizeof(v26)); /*0x1009a0e15*/
  v48 = *((_QWORD *)__src + 117); /*0x1009a0e21*/
  v3 = *((_QWORD *)__src + 115); /*0x1009a0e25*/
  v47 = *((_QWORD *)__src + 116); /*0x1009a0e33*/
  v46 = v3; /*0x1009a0e37*/
  v29[6] = 0; /*0x1009a0e3b*/
  v29[0] = "test_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a0e4d*/
  v29[1] = 21; /*0x1009a0e54*/
  v29[2] = "llmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a0e66*/
  v29[3] = 11; /*0x1009a0e6d*/
  v29[4] = __dst; /*0x1009a0e78*/
  v29[5] = &v46; /*0x1009a0e83*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v42, v29); /*0x1009a0e9a*/
  if ( (_BYTE)v42 != 6 ) /*0x1009a0ea6*/
  {
    v29[4] = v45; /*0x1009a10ac*/
    v29[3] = v44; /*0x1009a10ba*/
    v29[2] = v43; /*0x1009a10cf*/
    v29[1] = v42; /*0x1009a10d6*/
    memcpy(v24, __srca, sizeof(v24)); /*0x1009a10f0*/
    v11 = *((_QWORD *)__src + 111); /*0x1009a1103*/
    v33[0] = *((_QWORD *)__src + 110); /*0x1009a110a*/
    v33[1] = v11; /*0x1009a1111*/
    v33[2] = *((_QWORD *)__src + 112); /*0x1009a111f*/
    v29[0] = 1; /*0x1009a1134*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a1152*/
      v24,
      v26[48],
      v29,
      v33,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    goto LABEL_16; /*0x1009a1161*/
  }
  v55 = v43; /*0x1009a0eb3*/
  v52 = v44; /*0x1009a0ebe*/
  v29[6] = 0; /*0x1009a0ec2*/
  v29[0] = "test_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a0ecd*/
  v29[1] = 21; /*0x1009a0ed4*/
  v29[2] = "llmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a0ee6*/
  v29[3] = 9; /*0x1009a0eed*/
  v29[4] = __dst; /*0x1009a0ef8*/
  v29[5] = &v46; /*0x1009a0eff*/
  v4 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v38, v29); /*0x1009a0f14*/
  LOBYTE(v4) = (_BYTE)v38 == 6; /*0x1009a0f20*/
  v54 = v4; /*0x1009a0f23*/
  if ( (_BYTE)v38 != 6 ) /*0x1009a0f26*/
  {
    v29[4] = v41; /*0x1009a116d*/
    v29[3] = v40; /*0x1009a117b*/
    v29[2] = v39; /*0x1009a1190*/
    v29[1] = v38; /*0x1009a1197*/
    memcpy(v23, __srca, sizeof(v23)); /*0x1009a11b1*/
    v12 = *((_QWORD *)__src + 111); /*0x1009a11c4*/
    v32[0] = *((_QWORD *)__src + 110); /*0x1009a11cb*/
    v32[1] = v12; /*0x1009a11d2*/
    v32[2] = *((_QWORD *)__src + 112); /*0x1009a11e0*/
    v29[0] = 1; /*0x1009a11f5*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a1211*/
      v23,
      v26[48],
      v29,
      v32,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    v13 = v55; /*0x1009a1216*/
    if ( !v55 ) /*0x1009a1227*/
      goto LABEL_16; /*0x1009a1227*/
    goto LABEL_15; /*0x1009a1227*/
  }
  v5 = v39; /*0x1009a0f2c*/
  v50 = v40; /*0x1009a0f3a*/
  v29[6] = 0; /*0x1009a0f3e*/
  v29[0] = "test_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a0f49*/
  v29[1] = 21; /*0x1009a0f50*/
  v29[2] = "llmModelasrModeldiagnoserelaunchcategoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch"; /*0x1009a0f62*/
  v29[3] = 8; /*0x1009a0f69*/
  v29[4] = __dst; /*0x1009a0f74*/
  v29[5] = &v46; /*0x1009a0f7b*/
  v6 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v34, v29); /*0x1009a0f90*/
  LOBYTE(v6) = (_BYTE)v34 == 6; /*0x1009a0f9c*/
  v54 = v6; /*0x1009a0f9f*/
  if ( (_BYTE)v34 != 6 ) /*0x1009a0fa2*/
  {
    v29[4] = v37; /*0x1009a1239*/
    v29[3] = v36; /*0x1009a1247*/
    v29[2] = v35; /*0x1009a125c*/
    v29[1] = v34; /*0x1009a1263*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1009a127d*/
    v14 = *((_QWORD *)__src + 111); /*0x1009a1290*/
    v31[0] = *((_QWORD *)__src + 110); /*0x1009a1297*/
    v31[1] = v14; /*0x1009a129e*/
    v31[2] = *((_QWORD *)__src + 112); /*0x1009a12ac*/
    v29[0] = 1; /*0x1009a12c1*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a12dd*/
      v22,
      v26[48],
      v29,
      v31,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    if ( !v5 ) /*0x1009a12ef*/
      goto LABEL_14; /*0x1009a12ef*/
    goto LABEL_13; /*0x1009a12ef*/
  }
  v51 = v35; /*0x1009a0faf*/
  v49 = v36; /*0x1009a0fba*/
  v29[6] = 0; /*0x1009a0fbe*/
  v29[0] = "test_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a0fc9*/
  v29[1] = 21; /*0x1009a0fd0*/
  v29[2] = "llmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a0fe2*/
  v29[3] = 10; /*0x1009a0fe9*/
  v29[4] = __dst; /*0x1009a0ff4*/
  v29[5] = &v46; /*0x1009a0ffb*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v28, v29); /*0x1009a1010*/
  if ( LOBYTE(v28[0]) != 6 ) /*0x1009a1026*/
  {
    v29[4] = v28[3]; /*0x1009a138b*/
    v29[3] = v28[2]; /*0x1009a1399*/
    v29[2] = v28[1]; /*0x1009a13ae*/
    v29[1] = v28[0]; /*0x1009a13b5*/
    memcpy(v21, __srca, sizeof(v21)); /*0x1009a13cf*/
    v18 = *((_QWORD *)__src + 111); /*0x1009a13e2*/
    v30[0] = *((_QWORD *)__src + 110); /*0x1009a13e9*/
    v30[1] = v18; /*0x1009a13f0*/
    v30[2] = *((_QWORD *)__src + 112); /*0x1009a13fe*/
    v29[0] = 1; /*0x1009a1413*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a142f*/
      v21,
      v26[48],
      v29,
      v30,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    if ( v51 ) /*0x1009a143b*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v51, 1); /*0x1009a1446*/
    if ( !v5 ) /*0x1009a144e*/
    {
LABEL_14:
      v13 = v55; /*0x1009a1302*/
      if ( !v55 ) /*0x1009a1309*/
        goto LABEL_16; /*0x1009a1309*/
LABEL_15:
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v13, 1); /*0x1009a130b*/
      goto LABEL_16; /*0x1009a1314*/
    }
LABEL_13:
    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v5, 1); /*0x1009a12f1*/
    goto LABEL_14; /*0x1009a12fd*/
  }
  codexmate_lib::commands::voice::test_voice_llm_config::h496f86901bbb45f4(v27, &v43, &v39, &v35, &v28[1], a2, a3); /*0x1009a104f*/
  v7 = __srca; /*0x1009a1060*/
  memcpy(v29, __srca, sizeof(v29)); /*0x1009a1064*/
  if ( v27[0] == 0x8000000000000000LL ) /*0x1009a1070*/
  {
    __srca = (void *)v27[1]; /*0x1009a107d*/
    v8 = (const void *)v27[2]; /*0x1009a1081*/
    v9 = v27[3]; /*0x1009a1088*/
    if ( v27[3] < 0LL ) /*0x1009a1092*/
    {
      v10 = 0; /*0x1009a1098*/
      goto LABEL_8; /*0x1009a1098*/
    }
    if ( v27[3] ) /*0x1009a1471*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v7); /*0x1009a1473*/
      v10 = 1; /*0x1009a1478*/
      v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1009a1486*/
      if ( !v19 ) /*0x1009a148e*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1009a109b*/
      v20 = v19; /*0x1009a1494*/
    }
    else
    {
      v20 = 1; /*0x1009a1499*/
    }
    memcpy((void *)v20, v8, v9); /*0x1009a14a8*/
    if ( __srca ) /*0x1009a14b4*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, __srca, 1); /*0x1009a14be*/
    LOBYTE(v28[1]) = 3; /*0x1009a14c3*/
    v28[2] = v9; /*0x1009a14ca*/
    v28[3] = v20; /*0x1009a14d1*/
    v28[4] = v9; /*0x1009a14d8*/
    v28[0] = 0x8000000000000000LL; /*0x1009a14df*/
  }
  else
  {
    qmemcpy(v28, v27, sizeof(v28)); /*0x1009a146c*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::he6e9b581a8cbdc24(v29); /*0x1009a14f4*/
LABEL_16:
  if ( v46 != 0x8000000000000000LL ) /*0x1009a131d*/
  {
    v15 = v47; /*0x1009a131f*/
    for ( i = v48 + 1; i != 1; --i ) /*0x1009a1327*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v15); /*0x1009a133d*/
      v15 += 96; /*0x1009a1342*/
    }
    if ( v46 ) /*0x1009a134e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 96 * v46, 8); /*0x1009a1361*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a1372*/
}