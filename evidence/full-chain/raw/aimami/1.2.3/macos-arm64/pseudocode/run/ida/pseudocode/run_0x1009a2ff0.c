// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a2ff0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h41b3303b2565f2bb(
        char *__src,
        double a2,
        double a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  void *v6; // rsi
  const void *v7; // r14
  size_t v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 i; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r15
  _BYTE v21[360]; // [rsp+8h] [rbp-D08h] BYREF
  _BYTE v22[360]; // [rsp+170h] [rbp-BA0h] BYREF
  _BYTE v23[360]; // [rsp+2D8h] [rbp-A38h] BYREF
  _BYTE v24[360]; // [rsp+440h] [rbp-8D0h] BYREF
  _BYTE __dst[520]; // [rsp+5A8h] [rbp-768h] BYREF
  _QWORD v26[50]; // [rsp+7B0h] [rbp-560h] BYREF
  _QWORD v27[13]; // [rsp+940h] [rbp-3D0h] BYREF
  _QWORD v28[50]; // [rsp+9A8h] [rbp-368h] BYREF
  _QWORD v29[13]; // [rsp+B38h] [rbp-1D8h] BYREF
  _QWORD v30[3]; // [rsp+BA0h] [rbp-170h] BYREF
  _QWORD v31[3]; // [rsp+BB8h] [rbp-158h] BYREF
  _QWORD v32[3]; // [rsp+BD0h] [rbp-140h] BYREF
  _QWORD v33[3]; // [rsp+BE8h] [rbp-128h] BYREF
  _QWORD v34[3]; // [rsp+C00h] [rbp-110h] BYREF
  __int64 v35; // [rsp+C18h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+C20h] [rbp-F0h]
  __int64 v37; // [rsp+C28h] [rbp-E8h]
  __int64 v38; // [rsp+C30h] [rbp-E0h]
  __int64 v39; // [rsp+C38h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+C40h] [rbp-D0h]
  __int64 v41; // [rsp+C48h] [rbp-C8h]
  __int64 v42; // [rsp+C50h] [rbp-C0h]
  __int64 v43; // [rsp+C58h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+C60h] [rbp-B0h]
  __int64 v45; // [rsp+C68h] [rbp-A8h]
  __int64 v46; // [rsp+C70h] [rbp-A0h]
  __int64 v47; // [rsp+C78h] [rbp-98h] BYREF
  __int64 v48; // [rsp+C80h] [rbp-90h]
  __int64 v49; // [rsp+C88h] [rbp-88h]
  __int64 v50; // [rsp+C90h] [rbp-80h] BYREF
  __int64 v51; // [rsp+C98h] [rbp-78h]
  __int64 v52; // [rsp+CA0h] [rbp-70h]
  __int64 v53; // [rsp+CA8h] [rbp-68h] BYREF
  __int64 v54; // [rsp+CB0h] [rbp-60h]
  __int64 v55; // [rsp+CB8h] [rbp-58h]
  __int64 v56; // [rsp+CC0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+CC8h] [rbp-48h]
  __int64 v58; // [rsp+CD0h] [rbp-40h]
  void *__srca; // [rsp+CD8h] [rbp-38h]
  int v60; // [rsp+CE4h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a3019*/
  __srca = __src + 520; /*0x1009a3031*/
  memcpy(v26, __src + 520, sizeof(v26)); /*0x1009a3035*/
  v52 = *((_QWORD *)__src + 117); /*0x1009a3041*/
  v3 = *((_QWORD *)__src + 115); /*0x1009a3045*/
  v51 = *((_QWORD *)__src + 116); /*0x1009a3053*/
  v50 = v3; /*0x1009a3057*/
  v28[6] = 0; /*0x1009a305b*/
  v28[0] = "test_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a3070*/
  v28[1] = 21; /*0x1009a3077*/
  v28[2] = "asrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a3089*/
  v28[3] = 11; /*0x1009a3090*/
  v28[4] = __dst; /*0x1009a309b*/
  v28[5] = &v50; /*0x1009a30a9*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v43, v28); /*0x1009a30c1*/
  if ( (_BYTE)v43 != 6 ) /*0x1009a30cd*/
  {
    v28[4] = v46; /*0x1009a3328*/
    v28[3] = v45; /*0x1009a3336*/
    v28[2] = v44; /*0x1009a334b*/
    v28[1] = v43; /*0x1009a3352*/
    memcpy(v24, __srca, sizeof(v24)); /*0x1009a336c*/
    v10 = *((_QWORD *)__src + 111); /*0x1009a337f*/
    v33[0] = *((_QWORD *)__src + 110); /*0x1009a3386*/
    v33[1] = v10; /*0x1009a338d*/
    v33[2] = *((_QWORD *)__src + 112); /*0x1009a339b*/
    v28[0] = 1; /*0x1009a33b0*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a33cf*/
      v24,
      v26[48],
      v28,
      v33,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    goto LABEL_16; /*0x1009a33de*/
  }
  v58 = v46; /*0x1009a30da*/
  v57 = v45; /*0x1009a30ec*/
  v56 = v44; /*0x1009a30f0*/
  v28[6] = 0; /*0x1009a30f4*/
  v28[0] = "test_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a30ff*/
  v28[1] = 21; /*0x1009a3106*/
  v28[2] = "asrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a3118*/
  v28[3] = 9; /*0x1009a311f*/
  v28[4] = __dst; /*0x1009a312a*/
  v28[5] = &v50; /*0x1009a3131*/
  v4 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v39, v28); /*0x1009a3146*/
  LOBYTE(v4) = (_BYTE)v39 == 6; /*0x1009a3152*/
  v60 = v4; /*0x1009a3155*/
  if ( (_BYTE)v39 != 6 ) /*0x1009a3158*/
  {
    v28[4] = v42; /*0x1009a33ea*/
    v28[3] = v41; /*0x1009a33f8*/
    v28[2] = v40; /*0x1009a340d*/
    v28[1] = v39; /*0x1009a3414*/
    memcpy(v23, __srca, sizeof(v23)); /*0x1009a342e*/
    v11 = *((_QWORD *)__src + 111); /*0x1009a3441*/
    v32[0] = *((_QWORD *)__src + 110); /*0x1009a3448*/
    v32[1] = v11; /*0x1009a344f*/
    v32[2] = *((_QWORD *)__src + 112); /*0x1009a345d*/
    v28[0] = 1; /*0x1009a3472*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a348e*/
      v23,
      v26[48],
      v28,
      v32,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    v12 = v56; /*0x1009a3493*/
    if ( !v56 ) /*0x1009a34a4*/
      goto LABEL_16; /*0x1009a34a4*/
    goto LABEL_15; /*0x1009a34a4*/
  }
  v55 = v42; /*0x1009a3165*/
  v54 = v41; /*0x1009a3177*/
  v53 = v40; /*0x1009a317b*/
  v28[6] = 0; /*0x1009a317f*/
  v28[0] = "test_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a318a*/
  v28[1] = 21; /*0x1009a3191*/
  v28[2] = "asrModeldiagnoserelaunchcategoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch"; /*0x1009a31a3*/
  v28[3] = 8; /*0x1009a31aa*/
  v28[4] = __dst; /*0x1009a31b5*/
  v28[5] = &v50; /*0x1009a31bc*/
  v5 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v35, v28); /*0x1009a31d1*/
  LOBYTE(v5) = (_BYTE)v35 == 6; /*0x1009a31dd*/
  v60 = v5; /*0x1009a31e0*/
  if ( (_BYTE)v35 != 6 ) /*0x1009a31e3*/
  {
    v28[4] = v38; /*0x1009a34b6*/
    v28[3] = v37; /*0x1009a34c4*/
    v28[2] = v36; /*0x1009a34d9*/
    v28[1] = v35; /*0x1009a34e0*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1009a34fa*/
    v13 = *((_QWORD *)__src + 111); /*0x1009a350d*/
    v31[0] = *((_QWORD *)__src + 110); /*0x1009a3514*/
    v31[1] = v13; /*0x1009a351b*/
    v31[2] = *((_QWORD *)__src + 112); /*0x1009a3529*/
    v28[0] = 1; /*0x1009a353e*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a355a*/
      v22,
      v26[48],
      v28,
      v31,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    v14 = v53; /*0x1009a355f*/
    if ( !v53 ) /*0x1009a3570*/
      goto LABEL_14; /*0x1009a3570*/
    goto LABEL_13; /*0x1009a3570*/
  }
  v49 = v38; /*0x1009a31f0*/
  v48 = v37; /*0x1009a3205*/
  v47 = v36; /*0x1009a320c*/
  v28[6] = 0; /*0x1009a3213*/
  v28[0] = "test_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a321e*/
  v28[1] = 21; /*0x1009a3225*/
  v28[2] = "asrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a3237*/
  v28[3] = 10; /*0x1009a323e*/
  v28[4] = __dst; /*0x1009a3249*/
  v28[5] = &v50; /*0x1009a3250*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v29, v28); /*0x1009a3265*/
  if ( LOBYTE(v29[0]) != 6 ) /*0x1009a327b*/
  {
    v28[4] = v29[3]; /*0x1009a360b*/
    v28[3] = v29[2]; /*0x1009a3619*/
    v28[2] = v29[1]; /*0x1009a362e*/
    v28[1] = v29[0]; /*0x1009a3635*/
    memcpy(v21, __srca, sizeof(v21)); /*0x1009a364f*/
    v18 = *((_QWORD *)__src + 111); /*0x1009a3662*/
    v30[0] = *((_QWORD *)__src + 110); /*0x1009a3669*/
    v30[1] = v18; /*0x1009a3670*/
    v30[2] = *((_QWORD *)__src + 112); /*0x1009a367e*/
    v28[0] = 1; /*0x1009a3693*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a36af*/
      v21,
      v26[48],
      v28,
      v30,
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
    if ( v47 ) /*0x1009a36be*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v47, 1); /*0x1009a36cc*/
    v14 = v53; /*0x1009a36d1*/
    if ( !v53 ) /*0x1009a36d8*/
    {
LABEL_14:
      v12 = v56; /*0x1009a3580*/
      if ( !v56 ) /*0x1009a3587*/
        goto LABEL_16; /*0x1009a3587*/
LABEL_15:
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v12, 1); /*0x1009a3589*/
      goto LABEL_16; /*0x1009a3592*/
    }
LABEL_13:
    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v14, 1); /*0x1009a3572*/
    goto LABEL_14; /*0x1009a357b*/
  }
  v34[2] = v29[3]; /*0x1009a3288*/
  v34[1] = v29[2]; /*0x1009a329d*/
  v34[0] = v29[1]; /*0x1009a32a4*/
  codexmate_lib::commands::voice::test_voice_asr_config::h079e2a5806866f59((char *)v27, &v56, &v53, &v47, v34, a2, a3); /*0x1009a32c8*/
  v6 = __srca; /*0x1009a32d9*/
  memcpy(v28, __srca, sizeof(v28)); /*0x1009a32dd*/
  if ( v27[0] == 0x8000000000000000LL ) /*0x1009a32e9*/
  {
    __srca = (void *)v27[1]; /*0x1009a32f6*/
    v7 = (const void *)v27[2]; /*0x1009a32fa*/
    v8 = v27[3]; /*0x1009a3301*/
    if ( v27[3] < 0LL ) /*0x1009a330b*/
    {
      v9 = 0; /*0x1009a3311*/
      goto LABEL_8; /*0x1009a3311*/
    }
    if ( v27[3] ) /*0x1009a36fb*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v6); /*0x1009a36fd*/
      v9 = 1; /*0x1009a3702*/
      v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009a3710*/
      if ( !v19 ) /*0x1009a3718*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009a3314*/
      v20 = v19; /*0x1009a371e*/
    }
    else
    {
      v20 = 1; /*0x1009a3723*/
    }
    memcpy((void *)v20, v7, v8); /*0x1009a3732*/
    if ( __srca ) /*0x1009a373e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, __srca, 1); /*0x1009a3748*/
    LOBYTE(v29[1]) = 3; /*0x1009a374d*/
    v29[2] = v8; /*0x1009a3754*/
    v29[3] = v20; /*0x1009a375b*/
    v29[4] = v8; /*0x1009a3762*/
    v29[0] = 0x8000000000000000LL; /*0x1009a3769*/
  }
  else
  {
    qmemcpy(v29, v27, sizeof(v29)); /*0x1009a36f6*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::he6e9b581a8cbdc24(v28); /*0x1009a377e*/
LABEL_16:
  if ( v50 != 0x8000000000000000LL ) /*0x1009a359b*/
  {
    v15 = v51; /*0x1009a359d*/
    for ( i = v52 + 1; i != 1; --i ) /*0x1009a35a5*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v15); /*0x1009a35bd*/
      v15 += 96; /*0x1009a35c2*/
    }
    if ( v50 ) /*0x1009a35ce*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, 96 * v50, 8); /*0x1009a35e1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a35f2*/
}