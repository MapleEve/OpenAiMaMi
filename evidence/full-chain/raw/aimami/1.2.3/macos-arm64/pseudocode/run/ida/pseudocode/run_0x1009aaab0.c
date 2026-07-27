// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009aaab0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h913c1e308aa6f6ae(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // r14
  const void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-888h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-720h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-518h] BYREF
  _QWORD __srca[26]; // [rsp+508h] [rbp-388h] BYREF
  _QWORD v18[50]; // [rsp+5D8h] [rbp-2B8h] BYREF
  _QWORD v19[26]; // [rsp+768h] [rbp-128h] BYREF
  _QWORD v20[3]; // [rsp+838h] [rbp-58h] BYREF
  __int64 v21; // [rsp+850h] [rbp-40h] BYREF
  __int64 v22; // [rsp+858h] [rbp-38h]
  __int64 v23; // [rsp+860h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009aaad9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009aaaf4*/
  v23 = *((_QWORD *)__src + 117); /*0x1009aab00*/
  v2 = *((_QWORD *)__src + 115); /*0x1009aab04*/
  v22 = *((_QWORD *)__src + 116); /*0x1009aab12*/
  v21 = v2; /*0x1009aab16*/
  v18[6] = 0; /*0x1009aab1a*/
  v18[0] = "load_voice_workspaceupsert_voice_templateremove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyr" /*0x1009aab2c*/
           "eplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_v"
           "ocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_vo"
           "ice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modes"
           "save_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture"
           "_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_v"
           "oice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_ov"
           "erlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_v"
           "oice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhid"
           "e_voice_search_overlayvoice_search_overlay_ready";
  v18[1] = 20; /*0x1009aab33*/
  v18[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009aab45*/
  v18[3] = 4; /*0x1009aab4c*/
  v18[4] = __dst; /*0x1009aab57*/
  v18[5] = &v21; /*0x1009aab62*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009aab77*/
  if ( !v3 ) /*0x1009aab89*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009aaba0*/
      v19,
      v18,
      &v18[2]);
    if ( LOBYTE(v19[0]) != 6 ) /*0x1009aabac*/
    {
      v18[4] = v19[3]; /*0x1009aac68*/
      v18[3] = v19[2]; /*0x1009aac76*/
      v18[2] = v19[1]; /*0x1009aac8b*/
      v18[1] = v19[0]; /*0x1009aac92*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009aacab*/
      v10 = *((_QWORD *)__src + 111); /*0x1009aacbe*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009aacc5*/
      v20[1] = v10; /*0x1009aacc9*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009aacd4*/
      v18[0] = 1; /*0x1009aace6*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009aad02*/
        v14,
        v16[48],
        v18,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009aad07*/
    }
    v3 = (__int64 *)v19[1]; /*0x1009aabb2*/
  }
  codexmate_lib::commands::voice::load_voice_workspace::haf5686e07f691f6c((char *)__srca, v3); /*0x1009aabc3*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1009aabd7*/
  if ( __srca[0] == 0x8000000000000000LL ) /*0x1009aabe3*/
  {
    v4 = __srca[1]; /*0x1009aabe5*/
    v5 = (const void *)__srca[2]; /*0x1009aabec*/
    v6 = __srca[3]; /*0x1009aabf3*/
    if ( __srca[3] < 0LL ) /*0x1009aabfd*/
    {
      v7 = 0; /*0x1009aabff*/
      goto LABEL_7; /*0x1009aabff*/
    }
    if ( __srca[3] ) /*0x1009aac2c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520); /*0x1009aac32*/
      v7 = 1; /*0x1009aac37*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009aac45*/
      if ( !v8 ) /*0x1009aac4d*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009aac02*/
      v9 = v8; /*0x1009aac4f*/
    }
    else
    {
      v9 = 1; /*0x1009aad09*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009aad18*/
    if ( v4 ) /*0x1009aad20*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009aad2d*/
    LOBYTE(v19[1]) = 3; /*0x1009aad32*/
    v19[2] = v6; /*0x1009aad39*/
    v19[3] = v9; /*0x1009aad40*/
    v19[4] = v6; /*0x1009aad47*/
    v19[0] = 0x8000000000000000LL; /*0x1009aad4e*/
  }
  else
  {
    memcpy(v19, __srca, sizeof(v19)); /*0x1009aac22*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::hb0319e22a9d36ccc(v18, v19); /*0x1009aad63*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x1009aad6c*/
  {
    v11 = v22; /*0x1009aad6e*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009aad76*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009aad8d*/
      v11 += 96; /*0x1009aad92*/
    }
    if ( v21 ) /*0x1009aad9e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009aadb1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009aadc2*/
}