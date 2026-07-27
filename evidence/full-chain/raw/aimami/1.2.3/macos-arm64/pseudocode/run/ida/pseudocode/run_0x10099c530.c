// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099c530 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1041ff49fd466842(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  const void *v4; // r15
  size_t v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+0h] [rbp-830h] BYREF
  _BYTE __dst[520]; // [rsp+168h] [rbp-6C8h] BYREF
  _QWORD v15[50]; // [rsp+370h] [rbp-4C0h] BYREF
  _QWORD __srca[19]; // [rsp+500h] [rbp-330h] BYREF
  _QWORD v17[50]; // [rsp+598h] [rbp-298h] BYREF
  _QWORD v18[19]; // [rsp+728h] [rbp-108h] BYREF
  _QWORD v19[3]; // [rsp+7C0h] [rbp-70h] BYREF
  _QWORD v20[3]; // [rsp+7D8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+7F0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+7F8h] [rbp-38h]
  __int64 v23; // [rsp+800h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099c559*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x10099c574*/
  v23 = *((_QWORD *)__src + 117); /*0x10099c580*/
  v2 = *((_QWORD *)__src + 115); /*0x10099c584*/
  v22 = *((_QWORD *)__src + 116); /*0x10099c592*/
  v21 = v2; /*0x10099c596*/
  v17[6] = 0; /*0x10099c59a*/
  v17[0] = "resolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099c5ac*/
  v17[1] = 33; /*0x10099c5b3*/
  v17[2] = "pathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10099c5c5*/
  v17[3] = 4; /*0x10099c5cc*/
  v17[4] = __dst; /*0x10099c5d7*/
  v17[5] = &v21; /*0x10099c5e2*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v18, v17); /*0x10099c5fa*/
  if ( LOBYTE(v18[0]) == 6 ) /*0x10099c610*/
  {
    v20[2] = v18[3]; /*0x10099c61d*/
    v20[1] = v18[2]; /*0x10099c62f*/
    v20[0] = v18[1]; /*0x10099c633*/
    codexmate_lib::commands::voice::resolve_voice_vocabulary_app_info::hb299d05c8c14623e(__srca, (__int64)v20); /*0x10099c642*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x10099c656*/
    if ( __srca[0] == 0x8000000000000000LL ) /*0x10099c662*/
    {
      v3 = __srca[1]; /*0x10099c668*/
      v4 = (const void *)__srca[2]; /*0x10099c66f*/
      v5 = __srca[3]; /*0x10099c676*/
      if ( __srca[3] < 0LL ) /*0x10099c680*/
      {
        v6 = 0; /*0x10099c686*/
        goto LABEL_5; /*0x10099c686*/
      }
      if ( __srca[3] ) /*0x10099c75b*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x10099c75d*/
        v6 = 1; /*0x10099c762*/
        v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x10099c770*/
        if ( !v8 ) /*0x10099c778*/
LABEL_5:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x10099c689*/
        v9 = v8; /*0x10099c77e*/
      }
      else
      {
        v9 = 1; /*0x10099c78d*/
      }
      memcpy((void *)v9, v4, v5); /*0x10099c79c*/
      if ( v3 ) /*0x10099c7a4*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x10099c7b1*/
      LOBYTE(v18[1]) = 3; /*0x10099c7b6*/
      v18[2] = v5; /*0x10099c7bd*/
      v18[3] = v9; /*0x10099c7c4*/
      v18[4] = v5; /*0x10099c7cb*/
      v18[0] = 0x8000000000000000LL; /*0x10099c7d2*/
    }
    else
    {
      memcpy(v18, __srca, sizeof(v18)); /*0x10099c754*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf33b0ca80fc87d7(v17, v18); /*0x10099c7e7*/
  }
  else
  {
    v17[4] = v18[3]; /*0x10099c69d*/
    v17[3] = v18[2]; /*0x10099c6ab*/
    v17[2] = v18[1]; /*0x10099c6c0*/
    v17[1] = v18[0]; /*0x10099c6c7*/
    memcpy(v13, __src + 520, sizeof(v13)); /*0x10099c6e0*/
    v7 = *((_QWORD *)__src + 111); /*0x10099c6f3*/
    v19[0] = *((_QWORD *)__src + 110); /*0x10099c6fa*/
    v19[1] = v7; /*0x10099c6fe*/
    v19[2] = *((_QWORD *)__src + 112); /*0x10099c709*/
    v17[0] = 1; /*0x10099c71b*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099c737*/
      v13,
      v15[48],
      v17,
      v19,
      LODWORD(v15[49]),
      HIDWORD(v15[49]));
  }
  if ( v21 != 0x8000000000000000LL ) /*0x10099c7f0*/
  {
    v10 = v22; /*0x10099c7f2*/
    for ( i = v23 + 1; i != 1; --i ) /*0x10099c7fa*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v10); /*0x10099c80d*/
      v10 += 96; /*0x10099c812*/
    }
    if ( v21 ) /*0x10099c81e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x10099c831*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099c842*/
}