// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b5b60 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfd8a80d283371b70(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  const void *v8; // r13
  size_t v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 i; // r15
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r12
  _QWORD v23[45]; // [rsp+8h] [rbp-1058h] BYREF
  _BYTE v24[360]; // [rsp+170h] [rbp-EF0h] BYREF
  _BYTE v25[360]; // [rsp+2D8h] [rbp-D88h] BYREF
  _BYTE v26[360]; // [rsp+440h] [rbp-C20h] BYREF
  _BYTE v27[360]; // [rsp+5A8h] [rbp-AB8h] BYREF
  _QWORD __dst[65]; // [rsp+710h] [rbp-950h] BYREF
  _QWORD v29[40]; // [rsp+918h] [rbp-748h] BYREF
  _QWORD v30[50]; // [rsp+A58h] [rbp-608h] BYREF
  _QWORD v31[40]; // [rsp+BE8h] [rbp-478h] BYREF
  _QWORD v32[3]; // [rsp+D28h] [rbp-338h] BYREF
  _QWORD v33[3]; // [rsp+D40h] [rbp-320h] BYREF
  _QWORD v34[3]; // [rsp+D58h] [rbp-308h] BYREF
  _QWORD v35[3]; // [rsp+D70h] [rbp-2F0h] BYREF
  _QWORD v36[3]; // [rsp+D88h] [rbp-2D8h] BYREF
  _QWORD v37[3]; // [rsp+DA0h] [rbp-2C0h] BYREF
  _QWORD v38[50]; // [rsp+DB8h] [rbp-2A8h] BYREF
  __int64 v39; // [rsp+F48h] [rbp-118h] BYREF
  __int64 v40; // [rsp+F50h] [rbp-110h]
  __int64 v41; // [rsp+F58h] [rbp-108h]
  __int64 v42; // [rsp+F60h] [rbp-100h]
  __int64 v43; // [rsp+F68h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+F70h] [rbp-F0h]
  __int64 v45; // [rsp+F78h] [rbp-E8h]
  __int64 v46; // [rsp+F80h] [rbp-E0h]
  __int64 v47; // [rsp+F88h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+F90h] [rbp-D0h]
  __int64 v49; // [rsp+F98h] [rbp-C8h]
  __int64 v50; // [rsp+FA0h] [rbp-C0h]
  __int64 v51; // [rsp+FA8h] [rbp-B8h] BYREF
  _QWORD *v52; // [rsp+FB0h] [rbp-B0h]
  __int64 v53; // [rsp+FB8h] [rbp-A8h]
  __int64 v54; // [rsp+FC0h] [rbp-A0h]
  __int64 v55; // [rsp+FC8h] [rbp-98h] BYREF
  __int64 v56; // [rsp+FD0h] [rbp-90h]
  __int64 v57; // [rsp+FD8h] [rbp-88h]
  __int64 v58; // [rsp+FE0h] [rbp-80h] BYREF
  __int64 v59; // [rsp+FE8h] [rbp-78h]
  __int64 v60; // [rsp+FF0h] [rbp-70h]
  __int64 v61; // [rsp+FF8h] [rbp-68h] BYREF
  __int64 v62; // [rsp+1000h] [rbp-60h]
  __int64 v63; // [rsp+1008h] [rbp-58h]
  __int64 v64; // [rsp+1010h] [rbp-50h] BYREF
  __int64 v65; // [rsp+1018h] [rbp-48h]
  __int64 v66; // [rsp+1020h] [rbp-40h]
  void *__srca; // [rsp+1028h] [rbp-38h]
  int v68; // [rsp+1034h] [rbp-2Ch]

  v23[6] = 0; /*0x1009b5b74*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b5b95*/
  __srca = __src + 520; /*0x1009b5bad*/
  memcpy(v30, __src + 520, sizeof(v30)); /*0x1009b5bb1*/
  v60 = *((_QWORD *)__src + 117); /*0x1009b5bbd*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b5bc1*/
  v59 = *((_QWORD *)__src + 116); /*0x1009b5bcf*/
  v58 = v2; /*0x1009b5bd3*/
  v38[6] = 0; /*0x1009b5bd7*/
  v38[0] = "upsert_voice_templateremove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b5be9*/
  v38[1] = 21; /*0x1009b5bf0*/
  v38[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009b5c02*/
  v38[3] = 4; /*0x1009b5c09*/
  v38[4] = __dst; /*0x1009b5c14*/
  v38[5] = &v58; /*0x1009b5c1f*/
  v3 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009b5c34*/
  v4 = (_QWORD *)v3; /*0x1009b5c39*/
  if ( v3 ) /*0x1009b5c3f*/
  {
    v52 = (_QWORD *)v3; /*0x1009b5c41*/
    LOBYTE(v51) = 6; /*0x1009b5c48*/
  }
  else
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009b5c66*/
      &v51,
      v38,
      &v38[2]);
    if ( (_BYTE)v51 != 6 ) /*0x1009b5c72*/
    {
      v38[4] = v54; /*0x1009b60d7*/
      v38[3] = v53; /*0x1009b60e5*/
      v38[2] = v52; /*0x1009b60fa*/
      v38[1] = v51; /*0x1009b6101*/
      memcpy(v27, __srca, sizeof(v27)); /*0x1009b611b*/
      v14 = *((_QWORD *)__src + 111); /*0x1009b612e*/
      v36[0] = *((_QWORD *)__src + 110); /*0x1009b6135*/
      v36[1] = v14; /*0x1009b613c*/
      v36[2] = *((_QWORD *)__src + 112); /*0x1009b614a*/
      v38[0] = 1; /*0x1009b615f*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b617e*/
        v27,
        v30[48],
        v38,
        v36,
        LODWORD(v30[49]),
        HIDWORD(v30[49]));
      goto LABEL_17; /*0x1009b617e*/
    }
    v4 = v52; /*0x1009b5c78*/
  }
  v38[6] = 0; /*0x1009b5c7f*/
  v38[0] = "upsert_voice_templateremove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b5c91*/
  v38[1] = 21; /*0x1009b5c98*/
  v38[2] = "idsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b5caa*/
  v38[3] = 2; /*0x1009b5cb1*/
  v38[4] = __dst; /*0x1009b5cbc*/
  v38[5] = &v58; /*0x1009b5cc3*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v47, v38); /*0x1009b5cd8*/
  if ( (_BYTE)v47 != 6 ) /*0x1009b5ce4*/
  {
    v38[4] = v50; /*0x1009b5f53*/
    v38[3] = v49; /*0x1009b5f61*/
    v38[2] = v48; /*0x1009b5f76*/
    v38[1] = v47; /*0x1009b5f7d*/
    memcpy(v26, __srca, sizeof(v26)); /*0x1009b5f97*/
    v11 = *((_QWORD *)__src + 111); /*0x1009b5faa*/
    v35[0] = *((_QWORD *)__src + 110); /*0x1009b5fb1*/
    v35[1] = v11; /*0x1009b5fb8*/
    v35[2] = *((_QWORD *)__src + 112); /*0x1009b5fc6*/
    v38[0] = 1; /*0x1009b5fdb*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b5ffa*/
      v26,
      v30[48],
      v38,
      v35,
      LODWORD(v30[49]),
      HIDWORD(v30[49]));
    goto LABEL_17; /*0x1009b5fff*/
  }
  v66 = v50; /*0x1009b5cf1*/
  v65 = v49; /*0x1009b5d03*/
  v64 = v48; /*0x1009b5d07*/
  v38[6] = 0; /*0x1009b5d0b*/
  v38[0] = "upsert_voice_templateremove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b5d1d*/
  v38[1] = 21; /*0x1009b5d24*/
  v38[2] = "titledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b5d36*/
  v38[3] = 5; /*0x1009b5d3d*/
  v38[4] = __dst; /*0x1009b5d48*/
  v38[5] = &v58; /*0x1009b5d4f*/
  v5 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v43, v38); /*0x1009b5d64*/
  LOBYTE(v5) = (_BYTE)v43 == 6; /*0x1009b5d70*/
  v68 = v5; /*0x1009b5d73*/
  if ( (_BYTE)v43 != 6 ) /*0x1009b5d76*/
  {
    v38[4] = v46; /*0x1009b600b*/
    v38[3] = v45; /*0x1009b6019*/
    v38[2] = v44; /*0x1009b602e*/
    v38[1] = v43; /*0x1009b6035*/
    memcpy(v25, __srca, sizeof(v25)); /*0x1009b604f*/
    v12 = *((_QWORD *)__src + 111); /*0x1009b6062*/
    v34[0] = *((_QWORD *)__src + 110); /*0x1009b6069*/
    v34[1] = v12; /*0x1009b6070*/
    v34[2] = *((_QWORD *)__src + 112); /*0x1009b607e*/
    v38[0] = 1; /*0x1009b6093*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b60af*/
      v25,
      v30[48],
      v38,
      v34,
      LODWORD(v30[49]),
      HIDWORD(v30[49]));
    v13 = v64; /*0x1009b60b4*/
    if ( v64 == 0x8000000000000000LL ) /*0x1009b60c5*/
      goto LABEL_17; /*0x1009b60c5*/
    goto LABEL_27; /*0x1009b60c5*/
  }
  v63 = v46; /*0x1009b5d83*/
  v62 = v45; /*0x1009b5d95*/
  v61 = v44; /*0x1009b5d99*/
  v38[6] = 0; /*0x1009b5d9d*/
  v38[0] = "upsert_voice_templateremove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b5daf*/
  v38[1] = 21; /*0x1009b5db6*/
  v38[2] = "descriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b5dc8*/
  v38[3] = 11; /*0x1009b5dcf*/
  v38[4] = __dst; /*0x1009b5dda*/
  v38[5] = &v58; /*0x1009b5de1*/
  v6 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v39, v38); /*0x1009b5df6*/
  LOBYTE(v6) = (_BYTE)v39 == 6; /*0x1009b5e02*/
  v68 = v6; /*0x1009b5e05*/
  if ( (_BYTE)v39 != 6 ) /*0x1009b5e08*/
  {
    v38[4] = v42; /*0x1009b61fb*/
    v38[3] = v41; /*0x1009b6209*/
    v38[2] = v40; /*0x1009b621e*/
    v38[1] = v39; /*0x1009b6225*/
    memcpy(v24, __srca, sizeof(v24)); /*0x1009b623f*/
    v18 = *((_QWORD *)__src + 111); /*0x1009b6252*/
    v33[0] = *((_QWORD *)__src + 110); /*0x1009b6259*/
    v33[1] = v18; /*0x1009b6260*/
    v33[2] = *((_QWORD *)__src + 112); /*0x1009b626e*/
    v38[0] = 1; /*0x1009b6283*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b629f*/
      v24,
      v30[48],
      v38,
      v33,
      LODWORD(v30[49]),
      HIDWORD(v30[49]));
    v19 = v61; /*0x1009b62a4*/
    if ( !v61 ) /*0x1009b62b5*/
      goto LABEL_26; /*0x1009b62b5*/
    goto LABEL_25; /*0x1009b62b5*/
  }
  v57 = v42; /*0x1009b5e15*/
  v56 = v41; /*0x1009b5e2a*/
  v55 = v40; /*0x1009b5e31*/
  v38[6] = 0; /*0x1009b5e38*/
  v38[0] = "upsert_voice_templateremove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b5e4a*/
  v38[1] = 21; /*0x1009b5e51*/
  v38[2] = "contentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b5e63*/
  v38[3] = 7; /*0x1009b5e6a*/
  v38[4] = __dst; /*0x1009b5e75*/
  v38[5] = &v58; /*0x1009b5e7c*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v31, v38); /*0x1009b5e91*/
  if ( LOBYTE(v31[0]) != 6 ) /*0x1009b5e9d*/
  {
    v38[4] = v31[3]; /*0x1009b62f5*/
    v38[3] = v31[2]; /*0x1009b6303*/
    v38[2] = v31[1]; /*0x1009b6318*/
    v38[1] = v31[0]; /*0x1009b631f*/
    memcpy(v23, __srca, sizeof(v23)); /*0x1009b6339*/
    v20 = *((_QWORD *)__src + 111); /*0x1009b634c*/
    v32[0] = *((_QWORD *)__src + 110); /*0x1009b6353*/
    v32[1] = v20; /*0x1009b635a*/
    v32[2] = *((_QWORD *)__src + 112); /*0x1009b6368*/
    v38[0] = 1; /*0x1009b637d*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b6399*/
      v23,
      v30[48],
      v38,
      v32,
      LODWORD(v30[49]),
      HIDWORD(v30[49]));
    if ( v55 ) /*0x1009b63b2*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x1009b63c0*/
    v19 = v61; /*0x1009b63c5*/
    if ( !v61 ) /*0x1009b63cc*/
    {
LABEL_26:
      v13 = v64; /*0x1009b62c5*/
      if ( v64 == 0x8000000000000000LL ) /*0x1009b62cc*/
        goto LABEL_17; /*0x1009b62cc*/
LABEL_27:
      if ( v13 ) /*0x1009b62d5*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v13, 1); /*0x1009b62e4*/
      goto LABEL_17; /*0x1009b62e9*/
    }
LABEL_25:
    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v19, 1); /*0x1009b62b7*/
    goto LABEL_26; /*0x1009b62c0*/
  }
  v37[2] = v31[3]; /*0x1009b5eaa*/
  v37[1] = v31[2]; /*0x1009b5ebf*/
  v37[0] = v31[1]; /*0x1009b5ec6*/
  codexmate_lib::commands::voice::upsert_voice_template::h50044a7f5a51d26d((char *)v29, v4, &v64, &v61, &v55, v37); /*0x1009b5eed*/
  memcpy(v38, __srca, sizeof(v38)); /*0x1009b5f02*/
  if ( v29[0] == 0x8000000000000000LL ) /*0x1009b5f18*/
  {
    v7 = v29[1]; /*0x1009b5f1e*/
    v8 = (const void *)v29[2]; /*0x1009b5f25*/
    v9 = v29[3]; /*0x1009b5f2c*/
    if ( v29[3] < 0LL ) /*0x1009b5f36*/
    {
      v10 = 0; /*0x1009b5f3c*/
      goto LABEL_12; /*0x1009b5f3c*/
    }
    if ( v29[3] ) /*0x1009b63f1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, __srca); /*0x1009b63f3*/
      v10 = 1; /*0x1009b63f8*/
      v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1009b6406*/
      if ( !v21 ) /*0x1009b640e*/
LABEL_12:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1009b5f3f*/
      v22 = v21; /*0x1009b6414*/
    }
    else
    {
      v22 = 1; /*0x1009b6419*/
    }
    memcpy((void *)v22, v8, v9); /*0x1009b6428*/
    if ( v7 ) /*0x1009b6430*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1009b643d*/
    LOBYTE(v31[1]) = 3; /*0x1009b6442*/
    v31[2] = v9; /*0x1009b6449*/
    v31[3] = v22; /*0x1009b6450*/
    v31[4] = v9; /*0x1009b6457*/
    v31[0] = 0x8000000000000000LL; /*0x1009b6468*/
  }
  else
  {
    memcpy(v31, v29, sizeof(v31)); /*0x1009b63ea*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::hdd4aad1341dc4fbe(v38, v31); /*0x1009b647d*/
LABEL_17:
  if ( v58 != 0x8000000000000000LL ) /*0x1009b6191*/
  {
    v15 = v59; /*0x1009b6193*/
    for ( i = v60 + 1; i != 1; --i ) /*0x1009b619b*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v15); /*0x1009b61ad*/
      v15 += 96; /*0x1009b61b2*/
    }
    if ( v58 ) /*0x1009b61be*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 96 * v58, 8); /*0x1009b61d1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b61e2*/
}