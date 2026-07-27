// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a1d20 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h35c7d25317e01334(
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
  _QWORD v15[95]; // [rsp+8h] [rbp-1108h] BYREF
  _BYTE v16[360]; // [rsp+300h] [rbp-E10h] BYREF
  _BYTE v17[360]; // [rsp+468h] [rbp-CA8h] BYREF
  _BYTE __dst[520]; // [rsp+5D0h] [rbp-B40h] BYREF
  _BYTE v19[712]; // [rsp+7D8h] [rbp-938h] BYREF
  _QWORD v20[50]; // [rsp+AA0h] [rbp-670h] BYREF
  _QWORD v21[19]; // [rsp+C30h] [rbp-4E0h] BYREF
  _BYTE v22[152]; // [rsp+CC8h] [rbp-448h] BYREF
  __int64 v23; // [rsp+D60h] [rbp-3B0h] BYREF
  __int64 v24; // [rsp+D68h] [rbp-3A8h]
  void *v25; // [rsp+D70h] [rbp-3A0h]
  size_t __n; // [rsp+D78h] [rbp-398h]
  _QWORD v27[95]; // [rsp+D80h] [rbp-390h] BYREF
  _QWORD v28[3]; // [rsp+1078h] [rbp-98h] BYREF
  _QWORD v29[3]; // [rsp+1090h] [rbp-80h] BYREF
  _QWORD v30[4]; // [rsp+10A8h] [rbp-68h] BYREF
  __int64 v31; // [rsp+10C8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+10D0h] [rbp-40h]
  __int64 v33; // [rsp+10D8h] [rbp-38h]
  void *__srca; // [rsp+10E0h] [rbp-30h]

  v15[28] = 0; /*0x1009a1d34*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a1d58*/
  __srca = __src + 520; /*0x1009a1d70*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x1009a1d74*/
  v33 = *((_QWORD *)__src + 117); /*0x1009a1d80*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a1d84*/
  v32 = *((_QWORD *)__src + 116); /*0x1009a1d92*/
  v31 = v2; /*0x1009a1d96*/
  v27[2] = 0; /*0x1009a1d9a*/
  v23 = (__int64)"set_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a1dac*/
  v24 = 23; /*0x1009a1db3*/
  v25 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a1dc5*/
  __n = 3; /*0x1009a1dcc*/
  v27[0] = __dst; /*0x1009a1dd7*/
  v27[1] = &v31; /*0x1009a1de2*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v21); /*0x1009a1dfa*/
  if ( LODWORD(v21[0]) != 3 ) /*0x1009a1e06*/
  {
    memcpy(v22, v21, sizeof(v22)); /*0x1009a1ecb*/
    v27[2] = 0; /*0x1009a1ed0*/
    v23 = (__int64)"set_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a1edb*/
    v24 = 23; /*0x1009a1ee2*/
    v25 = "stylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a1ef4*/
    __n = 5; /*0x1009a1efb*/
    v27[0] = __dst; /*0x1009a1f06*/
    v27[1] = &v31; /*0x1009a1f0d*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::haf98f15d493c51c1(v30, &v23); /*0x1009a1f1f*/
    if ( LOBYTE(v30[0]) != 6 ) /*0x1009a1f28*/
    {
      v27[0] = v30[3]; /*0x1009a1f76*/
      __n = v30[2]; /*0x1009a1f81*/
      v25 = (void *)v30[1]; /*0x1009a1f90*/
      v24 = v30[0]; /*0x1009a1f97*/
      memcpy(v16, __srca, sizeof(v16)); /*0x1009a1fb1*/
      v8 = *((_QWORD *)__src + 111); /*0x1009a1fc4*/
      v28[0] = *((_QWORD *)__src + 110); /*0x1009a1fcb*/
      v28[1] = v8; /*0x1009a1fd2*/
      v28[2] = *((_QWORD *)__src + 112); /*0x1009a1fe0*/
      v23 = 1; /*0x1009a1ff5*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a2011*/
        v16,
        v20[48],
        &v23,
        v28,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v22); /*0x1009a2020*/
      goto LABEL_21; /*0x1009a2025*/
    }
    codexmate_lib::core::voice::runtime::set_overlay_style::hd9f2f06c8e9120c2(&v23, (__int64)v22, BYTE1(v30[0])); /*0x1009a1f3c*/
    v4 = v24; /*0x1009a1f48*/
    v5 = v25; /*0x1009a1f4f*/
    v6 = (void *)__n; /*0x1009a1f56*/
    if ( v23 == 2 ) /*0x1009a1f61*/
    {
      v7 = 2; /*0x1009a1f67*/
    }
    else
    {
      memcpy(&v19[32], v27, 0x2A8u); /*0x1009a203d*/
      *(_QWORD *)v19 = v23; /*0x1009a2042*/
      *(_QWORD *)&v19[8] = v24; /*0x1009a2049*/
      *(_QWORD *)&v19[16] = v25; /*0x1009a2050*/
      *(_QWORD *)&v19[24] = __n; /*0x1009a2057*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(&v23, v19); /*0x1009a206c*/
      v7 = v23; /*0x1009a2071*/
      v4 = v24; /*0x1009a2078*/
      v5 = v25; /*0x1009a207f*/
      v6 = (void *)__n; /*0x1009a2086*/
      memcpy(v15, v27, sizeof(v15)); /*0x1009a20a0*/
    }
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v22); /*0x1009a20ac*/
    memcpy(v19, __srca, 0x190u); /*0x1009a20c1*/
    if ( v7 == 2 ) /*0x1009a20ca*/
    {
      if ( (__int64)v6 < 0 ) /*0x1009a20cf*/
      {
        v9 = 0; /*0x1009a20d1*/
        goto LABEL_11; /*0x1009a20d1*/
      }
      if ( v6 ) /*0x1009a2117*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __srca); /*0x1009a2119*/
        v9 = 1; /*0x1009a211e*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a212c*/
        if ( !v10 ) /*0x1009a2134*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v6); /*0x1009a20d4*/
        v11 = v10; /*0x1009a2136*/
      }
      else
      {
        v11 = 1; /*0x1009a213b*/
      }
      memcpy((void *)v11, v5, (size_t)v6); /*0x1009a2149*/
      if ( v4 ) /*0x1009a2151*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a215e*/
      LOBYTE(v24) = 3; /*0x1009a2163*/
      v25 = v6; /*0x1009a216a*/
      __n = v11; /*0x1009a2171*/
      v27[0] = v6; /*0x1009a2178*/
      v23 = 2; /*0x1009a217f*/
    }
    else
    {
      v23 = v7; /*0x1009a20e1*/
      v24 = v4; /*0x1009a20e8*/
      v25 = v5; /*0x1009a20ef*/
      __n = (size_t)v6; /*0x1009a20f6*/
      memcpy(v27, v15, sizeof(v27)); /*0x1009a2110*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v19, &v23); /*0x1009a2198*/
    goto LABEL_21; /*0x1009a2198*/
  }
  v27[0] = v21[4]; /*0x1009a1e13*/
  __n = v21[3]; /*0x1009a1e21*/
  v25 = (void *)v21[2]; /*0x1009a1e36*/
  v24 = v21[1]; /*0x1009a1e3d*/
  memcpy(v17, __srca, sizeof(v17)); /*0x1009a1e57*/
  v3 = *((_QWORD *)__src + 111); /*0x1009a1e6a*/
  v29[0] = *((_QWORD *)__src + 110); /*0x1009a1e71*/
  v29[1] = v3; /*0x1009a1e75*/
  v29[2] = *((_QWORD *)__src + 112); /*0x1009a1e80*/
  v23 = 1; /*0x1009a1e92*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a1eae*/
    v17,
    v20[48],
    &v23,
    v29,
    LODWORD(v20[49]),
    HIDWORD(v20[49]));
LABEL_21:
  if ( !__OFSUB__(0, v31) ) /*0x1009a21a3*/
  {
    v12 = v32; /*0x1009a21a5*/
    for ( i = v33 + 1; i != 1; --i ) /*0x1009a21ad*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v12); /*0x1009a21bd*/
      v12 += 96; /*0x1009a21c2*/
    }
    if ( v31 ) /*0x1009a21ce*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 96 * v31, 8); /*0x1009a21e1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a21f2*/
}