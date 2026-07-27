// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a26e0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h412fc4e665aa80d6(
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a2709*/
  __srca = __src + 520; /*0x1009a2721*/
  memcpy(v26, __src + 520, sizeof(v26)); /*0x1009a2725*/
  v47 = *((_QWORD *)__src + 117); /*0x1009a2731*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a2735*/
  v46 = *((_QWORD *)__src + 116); /*0x1009a2743*/
  v45 = v2; /*0x1009a2747*/
  v28[6] = 0; /*0x1009a274b*/
  v28[0] = "save_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a275d*/
  v28[1] = 21; /*0x1009a2764*/
  v28[2] = "asrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a2776*/
  v28[3] = 11; /*0x1009a277d*/
  v28[4] = __dst; /*0x1009a2788*/
  v28[5] = &v45; /*0x1009a2793*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v41, v28); /*0x1009a27aa*/
  if ( (_BYTE)v41 != 6 ) /*0x1009a27b6*/
  {
    v28[4] = v44; /*0x1009a29bc*/
    v28[3] = v43; /*0x1009a29ca*/
    v28[2] = v42; /*0x1009a29df*/
    v28[1] = v41; /*0x1009a29e6*/
    memcpy(v23, __srca, sizeof(v23)); /*0x1009a2a00*/
    v10 = *((_QWORD *)__src + 111); /*0x1009a2a13*/
    v32[0] = *((_QWORD *)__src + 110); /*0x1009a2a1a*/
    v32[1] = v10; /*0x1009a2a21*/
    v32[2] = *((_QWORD *)__src + 112); /*0x1009a2a2f*/
    v28[0] = 1; /*0x1009a2a44*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a2a62*/
      v23,
      v26[48],
      v28,
      v32,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    goto LABEL_16; /*0x1009a2a71*/
  }
  v54 = v42; /*0x1009a27c3*/
  v51 = v43; /*0x1009a27ce*/
  v28[6] = 0; /*0x1009a27d2*/
  v28[0] = "save_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a27dd*/
  v28[1] = 21; /*0x1009a27e4*/
  v28[2] = "asrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a27f6*/
  v28[3] = 9; /*0x1009a27fd*/
  v28[4] = __dst; /*0x1009a2808*/
  v28[5] = &v45; /*0x1009a280f*/
  v3 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v37, v28); /*0x1009a2824*/
  LOBYTE(v3) = (_BYTE)v37 == 6; /*0x1009a2830*/
  v53 = v3; /*0x1009a2833*/
  if ( (_BYTE)v37 != 6 ) /*0x1009a2836*/
  {
    v28[4] = v40; /*0x1009a2a7d*/
    v28[3] = v39; /*0x1009a2a8b*/
    v28[2] = v38; /*0x1009a2aa0*/
    v28[1] = v37; /*0x1009a2aa7*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1009a2ac1*/
    v11 = *((_QWORD *)__src + 111); /*0x1009a2ad4*/
    v31[0] = *((_QWORD *)__src + 110); /*0x1009a2adb*/
    v31[1] = v11; /*0x1009a2ae2*/
    v31[2] = *((_QWORD *)__src + 112); /*0x1009a2af0*/
    v28[0] = 1; /*0x1009a2b05*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a2b21*/
      v22,
      v26[48],
      v28,
      v31,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    v12 = v54; /*0x1009a2b26*/
    if ( !v54 ) /*0x1009a2b37*/
      goto LABEL_16; /*0x1009a2b37*/
    goto LABEL_15; /*0x1009a2b37*/
  }
  v4 = v38; /*0x1009a283c*/
  v49 = v39; /*0x1009a284a*/
  v28[6] = 0; /*0x1009a284e*/
  v28[0] = "save_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a2859*/
  v28[1] = 21; /*0x1009a2860*/
  v28[2] = "asrModeldiagnoserelaunchcategoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch"; /*0x1009a2872*/
  v28[3] = 8; /*0x1009a2879*/
  v28[4] = __dst; /*0x1009a2884*/
  v28[5] = &v45; /*0x1009a288b*/
  v5 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v33, v28); /*0x1009a28a0*/
  LOBYTE(v5) = (_BYTE)v33 == 6; /*0x1009a28ac*/
  v53 = v5; /*0x1009a28af*/
  if ( (_BYTE)v33 != 6 ) /*0x1009a28b2*/
  {
    v28[4] = v36; /*0x1009a2b49*/
    v28[3] = v35; /*0x1009a2b57*/
    v28[2] = v34; /*0x1009a2b6c*/
    v28[1] = v33; /*0x1009a2b73*/
    memcpy(v21, __srca, sizeof(v21)); /*0x1009a2b8d*/
    v13 = *((_QWORD *)__src + 111); /*0x1009a2ba0*/
    v30[0] = *((_QWORD *)__src + 110); /*0x1009a2ba7*/
    v30[1] = v13; /*0x1009a2bae*/
    v30[2] = *((_QWORD *)__src + 112); /*0x1009a2bbc*/
    v28[0] = 1; /*0x1009a2bd1*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a2bed*/
      v21,
      v26[48],
      v28,
      v30,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    if ( !v4 ) /*0x1009a2bff*/
      goto LABEL_14; /*0x1009a2bff*/
    goto LABEL_13; /*0x1009a2bff*/
  }
  v50 = v34; /*0x1009a28bf*/
  v48 = v35; /*0x1009a28ca*/
  v28[6] = 0; /*0x1009a28ce*/
  v28[0] = "save_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a28d9*/
  v28[1] = 21; /*0x1009a28e0*/
  v28[2] = "asrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a28f2*/
  v28[3] = 10; /*0x1009a28f9*/
  v28[4] = __dst; /*0x1009a2904*/
  v28[5] = &v45; /*0x1009a290b*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v27, v28); /*0x1009a2920*/
  if ( LOBYTE(v27[0]) != 6 ) /*0x1009a2936*/
  {
    v28[4] = v27[3]; /*0x1009a2c9b*/
    v28[3] = v27[2]; /*0x1009a2ca9*/
    v28[2] = v27[1]; /*0x1009a2cbe*/
    v28[1] = v27[0]; /*0x1009a2cc5*/
    memcpy(v20, __srca, sizeof(v20)); /*0x1009a2cdf*/
    v17 = *((_QWORD *)__src + 111); /*0x1009a2cf2*/
    v29[0] = *((_QWORD *)__src + 110); /*0x1009a2cf9*/
    v29[1] = v17; /*0x1009a2d00*/
    v29[2] = *((_QWORD *)__src + 112); /*0x1009a2d0e*/
    v28[0] = 1; /*0x1009a2d23*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a2d3f*/
      v20,
      v26[48],
      v28,
      v29,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    if ( v50 ) /*0x1009a2d4b*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v50, 1); /*0x1009a2d56*/
    if ( !v4 ) /*0x1009a2d5e*/
    {
LABEL_14:
      v12 = v54; /*0x1009a2c12*/
      if ( !v54 ) /*0x1009a2c19*/
        goto LABEL_16; /*0x1009a2c19*/
LABEL_15:
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v12, 1); /*0x1009a2c1b*/
      goto LABEL_16; /*0x1009a2c24*/
    }
LABEL_13:
    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v4, 1); /*0x1009a2c01*/
    goto LABEL_14; /*0x1009a2c0d*/
  }
  codexmate_lib::commands::voice::save_voice_asr_config::hcabd4a8b90193064(v25, &v42, &v38, &v34, &v27[1]); /*0x1009a295f*/
  v6 = __srca; /*0x1009a2970*/
  memcpy(v28, __srca, sizeof(v28)); /*0x1009a2974*/
  if ( v25[0] == 0x8000000000000000LL ) /*0x1009a2980*/
  {
    __srca = (void *)v25[1]; /*0x1009a298d*/
    v7 = (const void *)v25[2]; /*0x1009a2991*/
    v8 = v25[3]; /*0x1009a2998*/
    if ( v25[3] < 0LL ) /*0x1009a29a2*/
    {
      v9 = 0; /*0x1009a29a8*/
      goto LABEL_8; /*0x1009a29a8*/
    }
    if ( v25[3] ) /*0x1009a2d83*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v6); /*0x1009a2d85*/
      v9 = 1; /*0x1009a2d8a*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009a2d98*/
      if ( !v18 ) /*0x1009a2da0*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009a29ab*/
      v19 = v18; /*0x1009a2da6*/
    }
    else
    {
      v19 = 1; /*0x1009a2dab*/
    }
    memcpy((void *)v19, v7, v8); /*0x1009a2dba*/
    if ( __srca ) /*0x1009a2dc6*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, __srca, 1); /*0x1009a2dd0*/
    LOBYTE(v27[1]) = 3; /*0x1009a2dd5*/
    v27[2] = v8; /*0x1009a2ddc*/
    v27[3] = v19; /*0x1009a2de3*/
    v27[4] = v8; /*0x1009a2dea*/
    v27[0] = 0x8000000000000000LL; /*0x1009a2df1*/
  }
  else
  {
    memcpy(v27, v25, sizeof(v27)); /*0x1009a2d7c*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h814e343e6b44d57d(v28, v27); /*0x1009a2e06*/
LABEL_16:
  if ( v45 != 0x8000000000000000LL ) /*0x1009a2c2d*/
  {
    v14 = v46; /*0x1009a2c2f*/
    for ( i = v47 + 1; i != 1; --i ) /*0x1009a2c37*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x1009a2c4d*/
      v14 += 96; /*0x1009a2c52*/
    }
    if ( v45 ) /*0x1009a2c5e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 96 * v45, 8); /*0x1009a2c71*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a2c82*/
}