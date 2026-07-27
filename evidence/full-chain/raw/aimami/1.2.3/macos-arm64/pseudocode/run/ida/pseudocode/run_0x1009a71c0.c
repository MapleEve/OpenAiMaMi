// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a71c0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6f3e01f2e1fb24da(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  const char *v3; // rax
  _QWORD *v4; // r12
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
  _BYTE v16[360]; // [rsp+0h] [rbp-A50h] BYREF
  _BYTE v17[360]; // [rsp+168h] [rbp-8E8h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-780h] BYREF
  _QWORD v19[50]; // [rsp+4D8h] [rbp-578h] BYREF
  _QWORD v20[26]; // [rsp+668h] [rbp-3E8h] BYREF
  _QWORD v21[26]; // [rsp+738h] [rbp-318h] BYREF
  _QWORD v22[50]; // [rsp+808h] [rbp-248h] BYREF
  _QWORD v23[3]; // [rsp+998h] [rbp-B8h] BYREF
  _QWORD v24[3]; // [rsp+9B0h] [rbp-A0h] BYREF
  _QWORD v25[3]; // [rsp+9C8h] [rbp-88h] BYREF
  __int64 v26; // [rsp+9E0h] [rbp-70h] BYREF
  _QWORD *v27; // [rsp+9E8h] [rbp-68h]
  __int64 v28; // [rsp+9F0h] [rbp-60h]
  __int64 v29; // [rsp+9F8h] [rbp-58h]
  __int64 v30; // [rsp+A00h] [rbp-50h] BYREF
  __int64 v31; // [rsp+A08h] [rbp-48h]
  __int64 v32; // [rsp+A10h] [rbp-40h]
  void *__srca; // [rsp+A18h] [rbp-38h]
  int v34; // [rsp+A24h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a71e9*/
  __srca = __src + 520; /*0x1009a7201*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009a7205*/
  v32 = *((_QWORD *)__src + 117); /*0x1009a7211*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a7215*/
  v31 = *((_QWORD *)__src + 116); /*0x1009a7223*/
  v30 = v2; /*0x1009a7227*/
  v22[6] = 0; /*0x1009a722b*/
  v22[0] = "remove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a723d*/
  v22[1] = 21; /*0x1009a7244*/
  v3 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009a724f*/
  v22[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009a7256*/
  v22[3] = 4; /*0x1009a725d*/
  v22[4] = __dst; /*0x1009a7268*/
  v22[5] = &v30; /*0x1009a7273*/
  LOBYTE(v3) = 1; /*0x1009a7285*/
  v34 = (int)v3; /*0x1009a7287*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009a728f*/
  if ( !v4 ) /*0x1009a7295*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a72a9*/
      &v26,
      v22,
      &v22[2]);
    if ( (_BYTE)v26 != 6 ) /*0x1009a72b2*/
    {
      v22[4] = v29; /*0x1009a7491*/
      v22[3] = v28; /*0x1009a749c*/
      v22[2] = v27; /*0x1009a74ab*/
      v22[1] = v26; /*0x1009a74b2*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009a74cc*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a74df*/
      v24[0] = *((_QWORD *)__src + 110); /*0x1009a74e6*/
      v24[1] = v10; /*0x1009a74ed*/
      v24[2] = *((_QWORD *)__src + 112); /*0x1009a74fb*/
      v22[0] = 1; /*0x1009a7510*/
      v34 = 0; /*0x1009a751b*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a7533*/
        v17,
        v19[48],
        v22,
        v24,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_21; /*0x1009a7533*/
    }
    v4 = v27; /*0x1009a72b8*/
  }
  v22[6] = 0; /*0x1009a72bc*/
  v22[0] = "remove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a72c7*/
  v22[1] = 21; /*0x1009a72ce*/
  v22[2] = "idsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a72e0*/
  v22[3] = 2; /*0x1009a72e7*/
  v22[4] = __dst; /*0x1009a72f2*/
  v22[5] = &v30; /*0x1009a72f9*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v21, v22); /*0x1009a730e*/
  if ( LOBYTE(v21[0]) == 6 ) /*0x1009a731a*/
  {
    v25[2] = v21[3]; /*0x1009a7327*/
    v25[1] = v21[2]; /*0x1009a7339*/
    v25[0] = v21[1]; /*0x1009a733d*/
    codexmate_lib::commands::voice::remove_voice_template::h2ac0442e5d9c4511((char *)v20, v4, v25); /*0x1009a7355*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1009a736a*/
    if ( v20[0] == 0x8000000000000000LL ) /*0x1009a7380*/
    {
      v5 = v20[1]; /*0x1009a7386*/
      v6 = (const void *)v20[2]; /*0x1009a738d*/
      v7 = v20[3]; /*0x1009a7394*/
      if ( v20[3] < 0LL ) /*0x1009a739e*/
      {
        v8 = 0; /*0x1009a73a4*/
        goto LABEL_8; /*0x1009a73a4*/
      }
      if ( v20[3] ) /*0x1009a7547*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, __srca); /*0x1009a7549*/
        v8 = 1; /*0x1009a754e*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009a755c*/
        if ( !v11 ) /*0x1009a7564*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009a73a7*/
        v12 = v11; /*0x1009a756a*/
      }
      else
      {
        v12 = 1; /*0x1009a756f*/
      }
      memcpy((void *)v12, v6, v7); /*0x1009a757e*/
      if ( v5 ) /*0x1009a7586*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009a7593*/
      LOBYTE(v21[1]) = 3; /*0x1009a7598*/
      v21[2] = v7; /*0x1009a759f*/
      v21[3] = v12; /*0x1009a75a6*/
      v21[4] = v7; /*0x1009a75ad*/
      v21[0] = 0x8000000000000000LL; /*0x1009a75be*/
    }
    else
    {
      memcpy(v21, v20, sizeof(v21)); /*0x1009a7483*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hb0319e22a9d36ccc(v22, v21); /*0x1009a75d3*/
  }
  else
  {
    v22[4] = v21[3]; /*0x1009a73bb*/
    v22[3] = v21[2]; /*0x1009a73c9*/
    v22[2] = v21[1]; /*0x1009a73de*/
    v22[1] = v21[0]; /*0x1009a73e5*/
    memcpy(v16, __srca, sizeof(v16)); /*0x1009a73ff*/
    v9 = *((_QWORD *)__src + 111); /*0x1009a7412*/
    v23[0] = *((_QWORD *)__src + 110); /*0x1009a7419*/
    v23[1] = v9; /*0x1009a7420*/
    v23[2] = *((_QWORD *)__src + 112); /*0x1009a742e*/
    v22[0] = 1; /*0x1009a7443*/
    v34 = 0; /*0x1009a744e*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a7466*/
      v16,
      v19[48],
      v22,
      v23,
      LODWORD(v19[49]),
      HIDWORD(v19[49]));
  }
LABEL_21:
  if ( v30 != 0x8000000000000000LL ) /*0x1009a75dc*/
  {
    v13 = v31; /*0x1009a75de*/
    for ( i = v32 + 1; i != 1; --i ) /*0x1009a75e6*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009a75fd*/
      v13 += 96; /*0x1009a7602*/
    }
    if ( v30 ) /*0x1009a760e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 96 * v30, 8); /*0x1009a7621*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a7632*/
}