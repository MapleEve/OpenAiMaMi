// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ab900 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9e19dca1f36e4d64(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // r14
  const void *v7; // r13
  size_t v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 i; // r15
  _BYTE v20[360]; // [rsp+0h] [rbp-DC0h] BYREF
  _BYTE v21[360]; // [rsp+168h] [rbp-C58h] BYREF
  _BYTE v22[360]; // [rsp+2D0h] [rbp-AF0h] BYREF
  _BYTE v23[360]; // [rsp+438h] [rbp-988h] BYREF
  _QWORD __dst[65]; // [rsp+5A0h] [rbp-820h] BYREF
  _QWORD v25[26]; // [rsp+7A8h] [rbp-618h] BYREF
  _QWORD v26[50]; // [rsp+878h] [rbp-548h] BYREF
  _QWORD v27[26]; // [rsp+A08h] [rbp-3B8h] BYREF
  _QWORD v28[50]; // [rsp+AD8h] [rbp-2E8h] BYREF
  _QWORD v29[3]; // [rsp+C68h] [rbp-158h] BYREF
  _QWORD v30[3]; // [rsp+C80h] [rbp-140h] BYREF
  _QWORD v31[3]; // [rsp+C98h] [rbp-128h] BYREF
  _QWORD v32[3]; // [rsp+CB0h] [rbp-110h] BYREF
  _QWORD v33[3]; // [rsp+CC8h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+CE0h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+CE8h] [rbp-D8h]
  __int64 v36; // [rsp+CF0h] [rbp-D0h]
  __int64 v37; // [rsp+CF8h] [rbp-C8h]
  __int64 v38; // [rsp+D00h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+D08h] [rbp-B8h]
  __int64 v40; // [rsp+D10h] [rbp-B0h]
  __int64 v41; // [rsp+D18h] [rbp-A8h]
  __int64 v42; // [rsp+D20h] [rbp-A0h] BYREF
  _QWORD *v43; // [rsp+D28h] [rbp-98h]
  __int64 v44; // [rsp+D30h] [rbp-90h]
  __int64 v45; // [rsp+D38h] [rbp-88h]
  __int64 v46; // [rsp+D40h] [rbp-80h] BYREF
  __int64 v47; // [rsp+D48h] [rbp-78h]
  __int64 v48; // [rsp+D50h] [rbp-70h]
  __int64 v49; // [rsp+D58h] [rbp-68h] BYREF
  __int64 v50; // [rsp+D60h] [rbp-60h]
  __int64 v51; // [rsp+D68h] [rbp-58h]
  __int64 v52; // [rsp+D70h] [rbp-50h] BYREF
  __int64 v53; // [rsp+D78h] [rbp-48h]
  __int64 v54; // [rsp+D80h] [rbp-40h]
  int v55; // [rsp+D8Ch] [rbp-34h]
  void *__srca; // [rsp+D90h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ab929*/
  __srca = __src + 520; /*0x1009ab941*/
  memcpy(v26, __src + 520, sizeof(v26)); /*0x1009ab945*/
  v51 = *((_QWORD *)__src + 117); /*0x1009ab951*/
  v2 = *((_QWORD *)__src + 115); /*0x1009ab955*/
  v50 = *((_QWORD *)__src + 116); /*0x1009ab963*/
  v49 = v2; /*0x1009ab967*/
  v28[6] = 0; /*0x1009ab96b*/
  v28[0] = "upsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009ab97d*/
  v28[1] = 33; /*0x1009ab984*/
  v28[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009ab996*/
  v28[3] = 4; /*0x1009ab99d*/
  v28[4] = __dst; /*0x1009ab9a8*/
  v28[5] = &v49; /*0x1009ab9b3*/
  v3 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009ab9c8*/
  v4 = (_QWORD *)v3; /*0x1009ab9cd*/
  if ( v3 ) /*0x1009ab9d3*/
  {
    v43 = (_QWORD *)v3; /*0x1009ab9d5*/
    LOBYTE(v42) = 6; /*0x1009ab9dc*/
  }
  else
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009ab9fa*/
      &v42,
      v28,
      &v28[2]);
    if ( (_BYTE)v42 != 6 ) /*0x1009aba06*/
    {
      v28[4] = v45; /*0x1009abdc9*/
      v28[3] = v44; /*0x1009abdd7*/
      v28[2] = v43; /*0x1009abdec*/
      v28[1] = v42; /*0x1009abdf3*/
      memcpy(v23, __srca, sizeof(v23)); /*0x1009abe0d*/
      v13 = *((_QWORD *)__src + 111); /*0x1009abe20*/
      v32[0] = *((_QWORD *)__src + 110); /*0x1009abe27*/
      v32[1] = v13; /*0x1009abe2e*/
      v32[2] = *((_QWORD *)__src + 112); /*0x1009abe3c*/
      v28[0] = 1; /*0x1009abe51*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009abe70*/
        v23,
        v26[48],
        v28,
        v32,
        LODWORD(v26[49]),
        HIDWORD(v26[49]));
      goto LABEL_29; /*0x1009abe7f*/
    }
    v4 = v43; /*0x1009aba0c*/
  }
  v28[6] = 0; /*0x1009aba13*/
  v28[0] = "upsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009aba25*/
  v28[1] = 33; /*0x1009aba2c*/
  v28[2] = "bundleIdkeyLabelcallbackattemptsOverflow"; /*0x1009aba3e*/
  v28[3] = 8; /*0x1009aba45*/
  v28[4] = __dst; /*0x1009aba50*/
  v28[5] = &v49; /*0x1009aba57*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v38, v28); /*0x1009aba6c*/
  if ( (_BYTE)v38 != 6 ) /*0x1009aba78*/
  {
    v28[4] = v41; /*0x1009abc45*/
    v28[3] = v40; /*0x1009abc53*/
    v28[2] = v39; /*0x1009abc68*/
    v28[1] = v38; /*0x1009abc6f*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1009abc89*/
    v10 = *((_QWORD *)__src + 111); /*0x1009abc9c*/
    v31[0] = *((_QWORD *)__src + 110); /*0x1009abca3*/
    v31[1] = v10; /*0x1009abcaa*/
    v31[2] = *((_QWORD *)__src + 112); /*0x1009abcb8*/
    v28[0] = 1; /*0x1009abccd*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009abcec*/
      v22,
      v26[48],
      v28,
      v31,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    goto LABEL_29; /*0x1009abcf1*/
  }
  v54 = v41; /*0x1009aba85*/
  v53 = v40; /*0x1009aba97*/
  v52 = v39; /*0x1009aba9b*/
  v28[6] = 0; /*0x1009aba9f*/
  v28[0] = "upsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009abab1*/
  v28[1] = 33; /*0x1009abab8*/
  v28[2] = &unk_1015FB9C8; /*0x1009abaca*/
  v28[3] = 4; /*0x1009abad1*/
  v28[4] = __dst; /*0x1009abadc*/
  v28[5] = &v49; /*0x1009abae3*/
  v5 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v34, v28); /*0x1009abaf8*/
  LOBYTE(v5) = (_BYTE)v34 == 6; /*0x1009abb04*/
  v55 = v5; /*0x1009abb07*/
  if ( (_BYTE)v34 != 6 ) /*0x1009abb0a*/
  {
    v28[4] = v37; /*0x1009abcfd*/
    v28[3] = v36; /*0x1009abd0b*/
    v28[2] = v35; /*0x1009abd20*/
    v28[1] = v34; /*0x1009abd27*/
    memcpy(v21, __srca, sizeof(v21)); /*0x1009abd41*/
    v11 = *((_QWORD *)__src + 111); /*0x1009abd54*/
    v30[0] = *((_QWORD *)__src + 110); /*0x1009abd5b*/
    v30[1] = v11; /*0x1009abd62*/
    v30[2] = *((_QWORD *)__src + 112); /*0x1009abd70*/
    v28[0] = 1; /*0x1009abd85*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009abda1*/
      v21,
      v26[48],
      v28,
      v30,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    v12 = v52; /*0x1009abda6*/
    if ( !v52 ) /*0x1009abdb7*/
      goto LABEL_29; /*0x1009abdb7*/
    goto LABEL_19; /*0x1009abdb7*/
  }
  v48 = v37; /*0x1009abb17*/
  v47 = v36; /*0x1009abb29*/
  v46 = v35; /*0x1009abb2d*/
  v28[6] = 0; /*0x1009abb31*/
  v28[0] = "upsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009abb43*/
  v28[1] = 33; /*0x1009abb4a*/
  v28[2] = "pathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009abb5c*/
  v28[3] = 4; /*0x1009abb63*/
  v28[4] = __dst; /*0x1009abb6e*/
  v28[5] = &v49; /*0x1009abb75*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v27, v28); /*0x1009abb8a*/
  if ( LOBYTE(v27[0]) != 6 ) /*0x1009abb96*/
  {
    v28[4] = v27[3]; /*0x1009abe8b*/
    v28[3] = v27[2]; /*0x1009abe99*/
    v28[2] = v27[1]; /*0x1009abeae*/
    v28[1] = v27[0]; /*0x1009abeb5*/
    memcpy(v20, __srca, sizeof(v20)); /*0x1009abecf*/
    v14 = *((_QWORD *)__src + 111); /*0x1009abee2*/
    v29[0] = *((_QWORD *)__src + 110); /*0x1009abee9*/
    v29[1] = v14; /*0x1009abef0*/
    v29[2] = *((_QWORD *)__src + 112); /*0x1009abefe*/
    v28[0] = 1; /*0x1009abf13*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009abf2f*/
      v20,
      v26[48],
      v28,
      v29,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    if ( v46 ) /*0x1009abf45*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1); /*0x1009abf50*/
    v12 = v52; /*0x1009abf55*/
    if ( !v52 ) /*0x1009abf5c*/
      goto LABEL_29; /*0x1009abf5c*/
LABEL_19:
    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v12, 1); /*0x1009abf62*/
    goto LABEL_29; /*0x1009abf70*/
  }
  v33[2] = v27[3]; /*0x1009abba3*/
  v33[1] = v27[2]; /*0x1009abbb8*/
  v33[0] = v27[1]; /*0x1009abbbf*/
  codexmate_lib::commands::voice::upsert_voice_vocabulary_app_scope::hfc4c9ebdf1c6379b((char *)v25, v4, &v52, &v46, v33); /*0x1009abbdf*/
  memcpy(v28, __srca, sizeof(v28)); /*0x1009abbf4*/
  if ( v25[0] == 0x8000000000000000LL ) /*0x1009abc0a*/
  {
    v6 = v25[1]; /*0x1009abc10*/
    v7 = (const void *)v25[2]; /*0x1009abc17*/
    v8 = v25[3]; /*0x1009abc1e*/
    if ( v25[3] < 0LL ) /*0x1009abc28*/
    {
      v9 = 0; /*0x1009abc2e*/
      goto LABEL_11; /*0x1009abc2e*/
    }
    if ( v25[3] ) /*0x1009abf8f*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, __srca); /*0x1009abf91*/
      v9 = 1; /*0x1009abf96*/
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009abfa4*/
      if ( !v15 ) /*0x1009abfac*/
LABEL_11:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009abc31*/
      v16 = v15; /*0x1009abfb2*/
    }
    else
    {
      v16 = 1; /*0x1009abfb7*/
    }
    memcpy((void *)v16, v7, v8); /*0x1009abfc6*/
    if ( v6 ) /*0x1009abfce*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x1009abfdb*/
    LOBYTE(v27[1]) = 3; /*0x1009abfe0*/
    v27[2] = v8; /*0x1009abfe7*/
    v27[3] = v16; /*0x1009abfee*/
    v27[4] = v8; /*0x1009abff5*/
    v27[0] = 0x8000000000000000LL; /*0x1009ac006*/
  }
  else
  {
    memcpy(v27, v25, sizeof(v27)); /*0x1009abf88*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::hb0319e22a9d36ccc(v28, v27); /*0x1009ac01b*/
LABEL_29:
  if ( v49 != 0x8000000000000000LL ) /*0x1009ac024*/
  {
    v17 = v50; /*0x1009ac026*/
    for ( i = v51 + 1; i != 1; --i ) /*0x1009ac02e*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v17); /*0x1009ac04d*/
      v17 += 96; /*0x1009ac052*/
    }
    if ( v49 ) /*0x1009ac05e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 96 * v49, 8); /*0x1009ac071*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ac082*/
}