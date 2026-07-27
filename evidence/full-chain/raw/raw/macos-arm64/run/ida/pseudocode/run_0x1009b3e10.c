// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b3e10 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he797e3c607ef449b(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  const void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+0h] [rbp-DB0h] BYREF
  _BYTE __dst[520]; // [rsp+168h] [rbp-C48h] BYREF
  _BYTE v15[152]; // [rsp+370h] [rbp-A40h] BYREF
  _QWORD v16[99]; // [rsp+408h] [rbp-9A8h] BYREF
  _QWORD v17[50]; // [rsp+720h] [rbp-690h] BYREF
  _QWORD __srca[99]; // [rsp+8B0h] [rbp-500h] BYREF
  _QWORD v19[50]; // [rsp+BC8h] [rbp-1E8h] BYREF
  _QWORD v20[3]; // [rsp+D58h] [rbp-58h] BYREF
  __int64 v21; // [rsp+D70h] [rbp-40h] BYREF
  __int64 v22; // [rsp+D78h] [rbp-38h]
  __int64 v23; // [rsp+D80h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b3e39*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009b3e54*/
  v23 = *((_QWORD *)__src + 117); /*0x1009b3e60*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b3e64*/
  v22 = *((_QWORD *)__src + 116); /*0x1009b3e72*/
  v21 = v2; /*0x1009b3e76*/
  v19[6] = 0; /*0x1009b3e7a*/
  v19[0] = "request_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b3e8c*/
  v19[1] = 25; /*0x1009b3e93*/
  v19[2] = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b3ea5*/
  v19[3] = 3; /*0x1009b3eac*/
  v19[4] = __dst; /*0x1009b3eb7*/
  v19[5] = &v21; /*0x1009b3ec2*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009b3eda*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009b3ee6*/
  {
    memcpy(v15, __srca, sizeof(v15)); /*0x1009b3fad*/
    codexmate_lib::commands::voice_runtime::request_voice_permissions::he1132bb1afe35502(v16, (__int64)v15); /*0x1009b3fbc*/
    memcpy(v19, __src + 520, sizeof(v19)); /*0x1009b3fd0*/
    if ( LODWORD(v16[0]) == 2 ) /*0x1009b3fdc*/
    {
      v4 = v16[1]; /*0x1009b3fde*/
      v5 = (const void *)v16[2]; /*0x1009b3fe5*/
      v6 = v16[3]; /*0x1009b3fec*/
      if ( v16[3] < 0LL ) /*0x1009b3ff6*/
      {
        v7 = 0; /*0x1009b3ff8*/
        goto LABEL_6; /*0x1009b3ff8*/
      }
      if ( v16[3] ) /*0x1009b4022*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __src + 520); /*0x1009b4024*/
        v7 = 1; /*0x1009b4029*/
        v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009b4037*/
        if ( !v8 ) /*0x1009b403f*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009b3ffb*/
        v9 = v8; /*0x1009b4041*/
      }
      else
      {
        v9 = 1; /*0x1009b4046*/
      }
      memcpy((void *)v9, v5, v6); /*0x1009b4055*/
      if ( v4 ) /*0x1009b405d*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009b406a*/
      LOBYTE(__srca[1]) = 3; /*0x1009b406f*/
      __srca[2] = v6; /*0x1009b4076*/
      __srca[3] = v9; /*0x1009b407d*/
      __srca[4] = v6; /*0x1009b4084*/
      __srca[0] = 2; /*0x1009b408b*/
    }
    else
    {
      memcpy(__srca, v16, sizeof(__srca)); /*0x1009b401b*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v19, __srca); /*0x1009b40a4*/
    goto LABEL_16; /*0x1009b40a4*/
  }
  v19[4] = __srca[4]; /*0x1009b3ef3*/
  v19[3] = __srca[3]; /*0x1009b3f01*/
  v19[2] = __srca[2]; /*0x1009b3f16*/
  v19[1] = __srca[1]; /*0x1009b3f1d*/
  memcpy(v13, __src + 520, sizeof(v13)); /*0x1009b3f36*/
  v3 = *((_QWORD *)__src + 111); /*0x1009b3f49*/
  v20[0] = *((_QWORD *)__src + 110); /*0x1009b3f50*/
  v20[1] = v3; /*0x1009b3f54*/
  v20[2] = *((_QWORD *)__src + 112); /*0x1009b3f5f*/
  v19[0] = 1; /*0x1009b3f71*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b3f8d*/
    v13,
    v17[48],
    v19,
    v20,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_16:
  if ( !__OFSUB__(0, v21) ) /*0x1009b40af*/
  {
    v10 = v22; /*0x1009b40b1*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009b40b9*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v10); /*0x1009b40cd*/
      v10 += 96; /*0x1009b40d2*/
    }
    if ( v21 ) /*0x1009b40de*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009b40f1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b4102*/
}