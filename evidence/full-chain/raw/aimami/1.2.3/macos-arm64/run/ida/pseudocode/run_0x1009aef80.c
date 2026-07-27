// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009aef80 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb93708d9625fa176(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  void *v5; // r15
  void *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rax
  size_t v11; // rbx
  __int64 v12; // rdi
  __int64 i; // r15
  _QWORD v15[95]; // [rsp+0h] [rbp-1120h] BYREF
  _BYTE v16[360]; // [rsp+2F8h] [rbp-E28h] BYREF
  _BYTE v17[360]; // [rsp+460h] [rbp-CC0h] BYREF
  _BYTE __dst[520]; // [rsp+5C8h] [rbp-B58h] BYREF
  _BYTE v19[712]; // [rsp+7D0h] [rbp-950h] BYREF
  _QWORD v20[50]; // [rsp+A98h] [rbp-688h] BYREF
  _QWORD v21[19]; // [rsp+C28h] [rbp-4F8h] BYREF
  _BYTE v22[152]; // [rsp+CC0h] [rbp-460h] BYREF
  __int64 v23; // [rsp+D58h] [rbp-3C8h] BYREF
  __int64 v24; // [rsp+D60h] [rbp-3C0h]
  void *v25; // [rsp+D68h] [rbp-3B8h]
  size_t __n; // [rsp+D70h] [rbp-3B0h]
  _QWORD v27[95]; // [rsp+D78h] [rbp-3A8h] BYREF
  _QWORD v28[3]; // [rsp+1070h] [rbp-B0h] BYREF
  _QWORD v29[3]; // [rsp+1088h] [rbp-98h] BYREF
  __int64 v30[3]; // [rsp+10A0h] [rbp-80h] BYREF
  __int64 v31; // [rsp+10B8h] [rbp-68h] BYREF
  void *v32; // [rsp+10C0h] [rbp-60h]
  size_t v33; // [rsp+10C8h] [rbp-58h]
  __int64 v34; // [rsp+10D0h] [rbp-50h]
  __int64 v35; // [rsp+10D8h] [rbp-48h] BYREF
  __int64 v36; // [rsp+10E0h] [rbp-40h]
  __int64 v37; // [rsp+10E8h] [rbp-38h]
  void *__srca; // [rsp+10F0h] [rbp-30h]

  v15[31] = 0; /*0x1009aef94*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1009aefb8*/
  __srca = __src + 520; /*0x1009aefd0*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x1009aefd4*/
  v37 = *((_QWORD *)__src + 117); /*0x1009aefe0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009aefe4*/
  v36 = *((_QWORD *)__src + 116); /*0x1009aeff2*/
  v35 = v2; /*0x1009aeff6*/
  v27[2] = 0; /*0x1009aeffa*/
  v23 = (__int64)"set_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009af00c*/
  v24 = 25; /*0x1009af013*/
  v25 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009af025*/
  __n = 3; /*0x1009af02c*/
  v27[0] = __dst; /*0x1009af037*/
  v27[1] = &v35; /*0x1009af042*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v21); /*0x1009af05a*/
  if ( LODWORD(v21[0]) != 3 ) /*0x1009af066*/
  {
    memcpy(v22, v21, sizeof(v22)); /*0x1009af137*/
    v27[2] = 0; /*0x1009af13c*/
    v23 = (__int64)"set_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009af147*/
    v24 = 25; /*0x1009af14e*/
    v25 = &unk_101602210; /*0x1009af160*/
    __n = 8; /*0x1009af167*/
    v27[0] = __dst; /*0x1009af172*/
    v27[1] = &v35; /*0x1009af179*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v31, &v23); /*0x1009af18b*/
    if ( (_BYTE)v31 != 6 ) /*0x1009af194*/
    {
      v27[0] = v34; /*0x1009af1fa*/
      __n = v33; /*0x1009af205*/
      v25 = v32; /*0x1009af214*/
      v24 = v31; /*0x1009af21b*/
      memcpy(v16, __srca, sizeof(v16)); /*0x1009af235*/
      v8 = *((_QWORD *)__src + 111); /*0x1009af248*/
      v28[0] = *((_QWORD *)__src + 110); /*0x1009af24f*/
      v28[1] = v8; /*0x1009af256*/
      v28[2] = *((_QWORD *)__src + 112); /*0x1009af264*/
      v23 = 1; /*0x1009af279*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009af295*/
        v16,
        v20[48],
        &v23,
        v28,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v22); /*0x1009af2a4*/
      goto LABEL_21; /*0x1009af2a9*/
    }
    v30[2] = v34; /*0x1009af19a*/
    v30[1] = v33; /*0x1009af1a6*/
    v30[0] = (__int64)v32; /*0x1009af1aa*/
    codexmate_lib::core::voice::runtime::set_global_shortcut::h599c9caa4cc6e991(&v23, (__int64)v22, v30); /*0x1009af1c0*/
    v4 = v24; /*0x1009af1cc*/
    v5 = v25; /*0x1009af1d3*/
    v6 = (void *)__n; /*0x1009af1da*/
    if ( v23 == 2 ) /*0x1009af1e5*/
    {
      v7 = 2; /*0x1009af1eb*/
    }
    else
    {
      memcpy(&v19[32], v27, 0x2A8u); /*0x1009af2c1*/
      *(_QWORD *)v19 = v23; /*0x1009af2c6*/
      *(_QWORD *)&v19[8] = v24; /*0x1009af2cd*/
      *(_QWORD *)&v19[16] = v25; /*0x1009af2d4*/
      *(_QWORD *)&v19[24] = __n; /*0x1009af2db*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(&v23, v19); /*0x1009af2f0*/
      v7 = v23; /*0x1009af2f5*/
      v4 = v24; /*0x1009af2fc*/
      v5 = v25; /*0x1009af303*/
      v6 = (void *)__n; /*0x1009af30a*/
      memcpy(v15, v27, sizeof(v15)); /*0x1009af324*/
    }
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v22); /*0x1009af330*/
    memcpy(v19, __srca, 0x190u); /*0x1009af345*/
    if ( v7 == 2 ) /*0x1009af34e*/
    {
      if ( (__int64)v6 < 0 ) /*0x1009af353*/
      {
        v9 = 0; /*0x1009af355*/
        goto LABEL_11; /*0x1009af355*/
      }
      if ( v6 ) /*0x1009af39b*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __srca); /*0x1009af39d*/
        v9 = 1; /*0x1009af3a2*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009af3b0*/
        if ( !v10 ) /*0x1009af3b8*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v6); /*0x1009af358*/
        v11 = v10; /*0x1009af3ba*/
      }
      else
      {
        v11 = 1; /*0x1009af3bf*/
      }
      memcpy((void *)v11, v5, (size_t)v6); /*0x1009af3cd*/
      if ( v4 ) /*0x1009af3d5*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009af3e2*/
      LOBYTE(v24) = 3; /*0x1009af3e7*/
      v25 = v6; /*0x1009af3ee*/
      __n = v11; /*0x1009af3f5*/
      v27[0] = v6; /*0x1009af3fc*/
      v23 = 2; /*0x1009af403*/
    }
    else
    {
      v23 = v7; /*0x1009af365*/
      v24 = v4; /*0x1009af36c*/
      v25 = v5; /*0x1009af373*/
      __n = (size_t)v6; /*0x1009af37a*/
      memcpy(v27, v15, sizeof(v27)); /*0x1009af394*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v19, &v23); /*0x1009af41c*/
    goto LABEL_21; /*0x1009af41c*/
  }
  v27[0] = v21[4]; /*0x1009af073*/
  __n = v21[3]; /*0x1009af081*/
  v25 = (void *)v21[2]; /*0x1009af096*/
  v24 = v21[1]; /*0x1009af09d*/
  memcpy(v17, __srca, sizeof(v17)); /*0x1009af0b7*/
  v3 = *((_QWORD *)__src + 111); /*0x1009af0ca*/
  v29[0] = *((_QWORD *)__src + 110); /*0x1009af0d1*/
  v29[1] = v3; /*0x1009af0d8*/
  v29[2] = *((_QWORD *)__src + 112); /*0x1009af0e6*/
  v23 = 1; /*0x1009af0fb*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009af11a*/
    v17,
    v20[48],
    &v23,
    v29,
    LODWORD(v20[49]),
    HIDWORD(v20[49]));
LABEL_21:
  if ( !__OFSUB__(0, v35) ) /*0x1009af427*/
  {
    v12 = v36; /*0x1009af429*/
    for ( i = v37 + 1; i != 1; --i ) /*0x1009af431*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v12); /*0x1009af44d*/
      v12 += 96; /*0x1009af452*/
    }
    if ( v35 ) /*0x1009af45e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 96 * v35, 8); /*0x1009af471*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009af482*/
}