// mac 1.2.2 NEW set_voice_overlay_style 0x10049bea0
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h0528062bd3e30340(
        char *__src)
{
  __int64 v1; // rax
  __int64 v2; // r14
  const void *v3; // r15
  size_t v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 i; // r15
  _BYTE v12[360]; // [rsp+8h] [rbp-888h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-720h] BYREF
  _QWORD v14[50]; // [rsp+378h] [rbp-518h] BYREF
  _QWORD __srca[26]; // [rsp+508h] [rbp-388h] BYREF
  _QWORD v16[50]; // [rsp+5D8h] [rbp-2B8h] BYREF
  _QWORD v17[26]; // [rsp+768h] [rbp-128h] BYREF
  _QWORD v18[3]; // [rsp+838h] [rbp-58h] BYREF
  __int64 v19; // [rsp+850h] [rbp-40h] BYREF
  __int64 v20; // [rsp+858h] [rbp-38h]
  __int64 v21; // [rsp+860h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10049bec9*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x10049bee4*/
  v21 = *((_QWORD *)__src + 117); /*0x10049bef0*/
  v1 = *((_QWORD *)__src + 115); /*0x10049bef4*/
  v20 = *((_QWORD *)__src + 116); /*0x10049bf02*/
  v19 = v1; /*0x10049bf06*/
  v16[6] = 0; /*0x10049bf0a*/
  v16[0] = "load_voice_workspaceupsert_voice_templateremove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyr" /*0x10049bf1c*/
           "eplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_v"
           "ocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_vo"
           "ice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modes"
           "save_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture"
           "_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_v"
           "oice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_ov"
           "erlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_v"
           "oice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhid"
           "e_voice_search_overlayvoice_search_overlay_ready";
  v16[1] = 20; /*0x10049bf23*/
  v16[2] = "repomodetextpathdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10049bf35*/
  v16[3] = 4; /*0x10049bf3c*/
  v16[4] = __dst; /*0x10049bf47*/
  v16[5] = &v19; /*0x10049bf52*/
  if ( tauri::state::StateManager::try_get::h1fbaf639ec243c26(__dst[64] + 16LL) /*0x10049bf9c*/
    || (_$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hecc39b36334a64e9(
          v17,
          v16,
          &v16[2]),
        LOBYTE(v17[0]) == 6) )
  {
    codexmate_lib::commands::voice::load_voice_workspace::h43f44162deddc894(__srca); /*0x10049bfb3*/
    memcpy(v16, __src + 520, sizeof(v16)); /*0x10049bfc7*/
    if ( __srca[0] == 0x8000000000000000LL ) /*0x10049bfd3*/
    {
      v2 = __srca[1]; /*0x10049bfd5*/
      v3 = (const void *)__srca[2]; /*0x10049bfdc*/
      v4 = __srca[3]; /*0x10049bfe3*/
      if ( __srca[3] < 0LL ) /*0x10049bfed*/
      {
        v5 = 0; /*0x10049bfef*/
        goto LABEL_6; /*0x10049bfef*/
      }
      if ( __srca[3] ) /*0x10049c01c*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10049c022*/
        v5 = 1; /*0x10049c027*/
        v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1u); /*0x10049c035*/
        if ( !v6 ) /*0x10049c03d*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5); /*0x10049bff2*/
        v7 = v6; /*0x10049c03f*/
      }
      else
      {
        v7 = 1; /*0x10049c0f9*/
      }
      memcpy((void *)v7, v3, v4); /*0x10049c108*/
      if ( v2 ) /*0x10049c110*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10049c11d*/
      LOBYTE(v17[1]) = 3; /*0x10049c122*/
      v17[2] = v4; /*0x10049c129*/
      v17[3] = v7; /*0x10049c130*/
      v17[4] = v4; /*0x10049c137*/
      v17[0] = 0x8000000000000000LL; /*0x10049c13e*/
    }
    else
    {
      memcpy(v17, __srca, sizeof(v17)); /*0x10049c012*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h8c1c90a39a1b627e(v16, v17); /*0x10049c153*/
  }
  else
  {
    v16[4] = v17[3]; /*0x10049c058*/
    v16[3] = v17[2]; /*0x10049c066*/
    v16[2] = v17[1]; /*0x10049c07b*/
    v16[1] = v17[0]; /*0x10049c082*/
    memcpy(v12, __src + 520, sizeof(v12)); /*0x10049c09b*/
    v8 = *((_QWORD *)__src + 111); /*0x10049c0ae*/
    v18[0] = *((_QWORD *)__src + 110); /*0x10049c0b5*/
    v18[1] = v8; /*0x10049c0b9*/
    v18[2] = *((_QWORD *)__src + 112); /*0x10049c0c4*/
    v16[0] = 1; /*0x10049c0d6*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h093f7e920846df9e( /*0x10049c0f2*/
      v12,
      v14[48],
      v16,
      v18,
      LODWORD(v14[49]),
      HIDWORD(v14[49]));
  }
  if ( v19 != 0x8000000000000000LL ) /*0x10049c15c*/
  {
    v9 = v20; /*0x10049c15e*/
    for ( i = v21 + 1; i != 1; --i ) /*0x10049c166*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h14952cdf494ac6a1(); /*0x10049c17d*/
      v9 += 96; /*0x10049c182*/
    }
    if ( v19 ) /*0x10049c18e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10049c1a1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h40b07b6a5ad3f5dc(__dst); /*0x10049c1b2*/
}