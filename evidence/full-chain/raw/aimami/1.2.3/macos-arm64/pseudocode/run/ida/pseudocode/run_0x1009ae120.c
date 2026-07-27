// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ae120 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb65a6851ee14c5de(
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ae149*/
  __srca = __src + 520; /*0x1009ae161*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009ae165*/
  v32 = *((_QWORD *)__src + 117); /*0x1009ae171*/
  v2 = *((_QWORD *)__src + 115); /*0x1009ae175*/
  v31 = *((_QWORD *)__src + 116); /*0x1009ae183*/
  v30 = v2; /*0x1009ae187*/
  v22[6] = 0; /*0x1009ae18b*/
  v22[0] = "remove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009ae19d*/
  v22[1] = 33; /*0x1009ae1a4*/
  v3 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009ae1af*/
  v22[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009ae1b6*/
  v22[3] = 4; /*0x1009ae1bd*/
  v22[4] = __dst; /*0x1009ae1c8*/
  v22[5] = &v30; /*0x1009ae1d3*/
  LOBYTE(v3) = 1; /*0x1009ae1e5*/
  v34 = (int)v3; /*0x1009ae1e7*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009ae1ef*/
  if ( !v4 ) /*0x1009ae1f5*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009ae209*/
      &v26,
      v22,
      &v22[2]);
    if ( (_BYTE)v26 != 6 ) /*0x1009ae212*/
    {
      v22[4] = v29; /*0x1009ae3f1*/
      v22[3] = v28; /*0x1009ae3fc*/
      v22[2] = v27; /*0x1009ae40b*/
      v22[1] = v26; /*0x1009ae412*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009ae42c*/
      v10 = *((_QWORD *)__src + 111); /*0x1009ae43f*/
      v24[0] = *((_QWORD *)__src + 110); /*0x1009ae446*/
      v24[1] = v10; /*0x1009ae44d*/
      v24[2] = *((_QWORD *)__src + 112); /*0x1009ae45b*/
      v22[0] = 1; /*0x1009ae470*/
      v34 = 0; /*0x1009ae47b*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ae493*/
        v17,
        v19[48],
        v22,
        v24,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_21; /*0x1009ae493*/
    }
    v4 = v27; /*0x1009ae218*/
  }
  v22[6] = 0; /*0x1009ae21c*/
  v22[0] = "remove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009ae227*/
  v22[1] = 33; /*0x1009ae22e*/
  v22[2] = "appBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ae240*/
  v22[3] = 11; /*0x1009ae247*/
  v22[4] = __dst; /*0x1009ae252*/
  v22[5] = &v30; /*0x1009ae259*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v21, v22); /*0x1009ae26e*/
  if ( LOBYTE(v21[0]) == 6 ) /*0x1009ae27a*/
  {
    v25[2] = v21[3]; /*0x1009ae287*/
    v25[1] = v21[2]; /*0x1009ae299*/
    v25[0] = v21[1]; /*0x1009ae29d*/
    codexmate_lib::commands::voice::remove_voice_vocabulary_app_scope::h72bf51349c6ab1d4((char *)v20, v4, v25); /*0x1009ae2b5*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1009ae2ca*/
    if ( v20[0] == 0x8000000000000000LL ) /*0x1009ae2e0*/
    {
      v5 = v20[1]; /*0x1009ae2e6*/
      v6 = (const void *)v20[2]; /*0x1009ae2ed*/
      v7 = v20[3]; /*0x1009ae2f4*/
      if ( v20[3] < 0LL ) /*0x1009ae2fe*/
      {
        v8 = 0; /*0x1009ae304*/
        goto LABEL_8; /*0x1009ae304*/
      }
      if ( v20[3] ) /*0x1009ae4a7*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, __srca); /*0x1009ae4a9*/
        v8 = 1; /*0x1009ae4ae*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009ae4bc*/
        if ( !v11 ) /*0x1009ae4c4*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009ae307*/
        v12 = v11; /*0x1009ae4ca*/
      }
      else
      {
        v12 = 1; /*0x1009ae4cf*/
      }
      memcpy((void *)v12, v6, v7); /*0x1009ae4de*/
      if ( v5 ) /*0x1009ae4e6*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009ae4f3*/
      LOBYTE(v21[1]) = 3; /*0x1009ae4f8*/
      v21[2] = v7; /*0x1009ae4ff*/
      v21[3] = v12; /*0x1009ae506*/
      v21[4] = v7; /*0x1009ae50d*/
      v21[0] = 0x8000000000000000LL; /*0x1009ae51e*/
    }
    else
    {
      memcpy(v21, v20, sizeof(v21)); /*0x1009ae3e3*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hb0319e22a9d36ccc(v22, v21); /*0x1009ae533*/
  }
  else
  {
    v22[4] = v21[3]; /*0x1009ae31b*/
    v22[3] = v21[2]; /*0x1009ae329*/
    v22[2] = v21[1]; /*0x1009ae33e*/
    v22[1] = v21[0]; /*0x1009ae345*/
    memcpy(v16, __srca, sizeof(v16)); /*0x1009ae35f*/
    v9 = *((_QWORD *)__src + 111); /*0x1009ae372*/
    v23[0] = *((_QWORD *)__src + 110); /*0x1009ae379*/
    v23[1] = v9; /*0x1009ae380*/
    v23[2] = *((_QWORD *)__src + 112); /*0x1009ae38e*/
    v22[0] = 1; /*0x1009ae3a3*/
    v34 = 0; /*0x1009ae3ae*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ae3c6*/
      v16,
      v19[48],
      v22,
      v23,
      LODWORD(v19[49]),
      HIDWORD(v19[49]));
  }
LABEL_21:
  if ( v30 != 0x8000000000000000LL ) /*0x1009ae53c*/
  {
    v13 = v31; /*0x1009ae53e*/
    for ( i = v32 + 1; i != 1; --i ) /*0x1009ae546*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009ae55d*/
      v13 += 96; /*0x1009ae562*/
    }
    if ( v30 ) /*0x1009ae56e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 96 * v30, 8); /*0x1009ae581*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ae592*/
}