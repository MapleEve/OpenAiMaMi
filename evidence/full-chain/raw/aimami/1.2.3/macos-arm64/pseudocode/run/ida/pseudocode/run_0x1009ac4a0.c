// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ac4a0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha351c879befc9b2f(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  const char *v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // r14
  const void *v7; // r15
  size_t v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+8h] [rbp-958h] BYREF
  _BYTE v17[360]; // [rsp+170h] [rbp-7F0h] BYREF
  _QWORD __dst[65]; // [rsp+2D8h] [rbp-688h] BYREF
  _QWORD v19[50]; // [rsp+4E0h] [rbp-480h] BYREF
  _QWORD v20[10]; // [rsp+670h] [rbp-2F0h] BYREF
  _QWORD v21[50]; // [rsp+6C0h] [rbp-2A0h] BYREF
  _QWORD v22[10]; // [rsp+850h] [rbp-110h] BYREF
  __int64 v23[4]; // [rsp+8A0h] [rbp-C0h] BYREF
  _QWORD v24[3]; // [rsp+8C0h] [rbp-A0h] BYREF
  _QWORD v25[3]; // [rsp+8D8h] [rbp-88h] BYREF
  __int64 v26; // [rsp+8F0h] [rbp-70h] BYREF
  _QWORD *v27; // [rsp+8F8h] [rbp-68h]
  __int64 v28; // [rsp+900h] [rbp-60h]
  __int64 v29; // [rsp+908h] [rbp-58h]
  __int64 v30; // [rsp+910h] [rbp-50h] BYREF
  __int64 v31; // [rsp+918h] [rbp-48h]
  __int64 v32; // [rsp+920h] [rbp-40h]
  void *__srca; // [rsp+928h] [rbp-38h]
  int v34; // [rsp+934h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ac4c9*/
  __srca = __src + 520; /*0x1009ac4e1*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009ac4e5*/
  v32 = *((_QWORD *)__src + 117); /*0x1009ac4f1*/
  v2 = *((_QWORD *)__src + 115); /*0x1009ac4f5*/
  v31 = *((_QWORD *)__src + 116); /*0x1009ac503*/
  v30 = v2; /*0x1009ac507*/
  v21[6] = 0; /*0x1009ac50b*/
  v21[0] = "save_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009ac51d*/
  v21[1] = 27; /*0x1009ac524*/
  v3 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009ac52f*/
  v21[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009ac536*/
  v21[3] = 4; /*0x1009ac53d*/
  v21[4] = __dst; /*0x1009ac548*/
  v21[5] = &v30; /*0x1009ac553*/
  LOBYTE(v3) = 1; /*0x1009ac565*/
  v34 = (int)v3; /*0x1009ac567*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009ac56f*/
  if ( !v4 ) /*0x1009ac575*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009ac589*/
      &v26,
      v21,
      &v21[2]);
    if ( (_BYTE)v26 != 6 ) /*0x1009ac592*/
    {
      v21[4] = v29; /*0x1009ac76c*/
      v21[3] = v28; /*0x1009ac777*/
      v21[2] = v27; /*0x1009ac786*/
      v21[1] = v26; /*0x1009ac78d*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009ac7a7*/
      v10 = *((_QWORD *)__src + 111); /*0x1009ac7ba*/
      v25[0] = *((_QWORD *)__src + 110); /*0x1009ac7c1*/
      v25[1] = v10; /*0x1009ac7c8*/
      v25[2] = *((_QWORD *)__src + 112); /*0x1009ac7d3*/
      v21[0] = 1; /*0x1009ac7e5*/
      v34 = 0; /*0x1009ac7f0*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ac808*/
        v17,
        v19[48],
        v21,
        v25,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_21; /*0x1009ac808*/
    }
    v4 = v27; /*0x1009ac598*/
  }
  v21[6] = 0; /*0x1009ac59c*/
  v21[0] = "save_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009ac5a7*/
  v21[1] = 27; /*0x1009ac5ae*/
  v21[2] = "modessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ac5c0*/
  v21[3] = 5; /*0x1009ac5c7*/
  v21[4] = __dst; /*0x1009ac5d2*/
  v21[5] = &v30; /*0x1009ac5d9*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h4def4935e51bef7d(v22, v21); /*0x1009ac5ee*/
  if ( LODWORD(v22[0]) != 1 ) /*0x1009ac601*/
  {
    v23[3] = v22[4]; /*0x1009ac6ba*/
    v23[2] = v22[3]; /*0x1009ac6c5*/
    v23[1] = v22[2]; /*0x1009ac6d3*/
    v23[0] = v22[1]; /*0x1009ac6da*/
    codexmate_lib::commands::voice::save_voice_processing_modes::h24790f7afeaa302e(v20, v4, v23, a2); /*0x1009ac6f2*/
    memcpy(v21, __srca, sizeof(v21)); /*0x1009ac707*/
    if ( v20[0] == 0x8000000000000000LL ) /*0x1009ac71d*/
    {
      v6 = v20[1]; /*0x1009ac71f*/
      v7 = (const void *)v20[2]; /*0x1009ac726*/
      v8 = v20[3]; /*0x1009ac72d*/
      if ( v20[3] < 0LL ) /*0x1009ac737*/
      {
        v9 = 0; /*0x1009ac73d*/
        goto LABEL_9; /*0x1009ac73d*/
      }
      if ( v20[3] ) /*0x1009ac81c*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, __srca); /*0x1009ac81e*/
        v9 = 1; /*0x1009ac823*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009ac831*/
        if ( !v11 ) /*0x1009ac839*/
LABEL_9:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009ac740*/
        v12 = v11; /*0x1009ac83f*/
      }
      else
      {
        v12 = 1; /*0x1009ac844*/
      }
      memcpy((void *)v12, v7, v8); /*0x1009ac853*/
      if ( v6 ) /*0x1009ac85b*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x1009ac868*/
      LOBYTE(v22[1]) = 3; /*0x1009ac86d*/
      v22[2] = v8; /*0x1009ac874*/
      v22[3] = v12; /*0x1009ac87b*/
      v22[4] = v8; /*0x1009ac882*/
      v22[0] = 0x8000000000000000LL; /*0x1009ac893*/
    }
    else
    {
      qmemcpy(v22, v20, sizeof(v22)); /*0x1009ac760*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hd6e58039a39c24e0(v21); /*0x1009ac8a8*/
    goto LABEL_21; /*0x1009ac8a8*/
  }
  v21[4] = v22[4]; /*0x1009ac60b*/
  v21[3] = v22[3]; /*0x1009ac616*/
  v21[2] = v22[2]; /*0x1009ac624*/
  v21[1] = v22[1]; /*0x1009ac62b*/
  memcpy(v16, __srca, sizeof(v16)); /*0x1009ac645*/
  v5 = *((_QWORD *)__src + 111); /*0x1009ac658*/
  v24[0] = *((_QWORD *)__src + 110); /*0x1009ac65f*/
  v24[1] = v5; /*0x1009ac666*/
  v24[2] = *((_QWORD *)__src + 112); /*0x1009ac674*/
  v21[0] = 1; /*0x1009ac689*/
  v34 = 0; /*0x1009ac694*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ac6ac*/
    v16,
    v19[48],
    v21,
    v24,
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
LABEL_21:
  if ( v30 != 0x8000000000000000LL ) /*0x1009ac8b1*/
  {
    v13 = v31; /*0x1009ac8b3*/
    for ( i = v32 + 1; i != 1; --i ) /*0x1009ac8bb*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009ac8cd*/
      v13 += 96; /*0x1009ac8d2*/
    }
    if ( v30 ) /*0x1009ac8de*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 96 * v30, 8); /*0x1009ac8f1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ac902*/
}