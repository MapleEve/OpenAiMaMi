// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099e210 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h21dfb65813298459(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  const void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+0h] [rbp-F10h] BYREF
  _BYTE v15[360]; // [rsp+168h] [rbp-DA8h] BYREF
  _QWORD v16[99]; // [rsp+2D0h] [rbp-C40h] BYREF
  _BYTE __dst[520]; // [rsp+5E8h] [rbp-928h] BYREF
  _QWORD __srca[99]; // [rsp+7F0h] [rbp-720h] BYREF
  _BYTE v19[400]; // [rsp+B08h] [rbp-408h] BYREF
  _QWORD v20[50]; // [rsp+C98h] [rbp-278h] BYREF
  _QWORD v21[3]; // [rsp+E28h] [rbp-E8h] BYREF
  _QWORD v22[3]; // [rsp+E40h] [rbp-D0h] BYREF
  __int64 v23[3]; // [rsp+E58h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+E70h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+E78h] [rbp-98h]
  __int64 v26; // [rsp+E80h] [rbp-90h]
  __int64 v27; // [rsp+E88h] [rbp-88h]
  __int64 v28; // [rsp+E90h] [rbp-80h] BYREF
  __int64 v29; // [rsp+E98h] [rbp-78h]
  char *v30; // [rsp+EA0h] [rbp-70h]
  __int64 v31; // [rsp+EA8h] [rbp-68h]
  _BYTE *v32; // [rsp+EB0h] [rbp-60h]
  __int64 *v33; // [rsp+EB8h] [rbp-58h]
  __int64 v34; // [rsp+EC0h] [rbp-50h]
  __int64 v35; // [rsp+ED0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+ED8h] [rbp-38h]
  __int64 v37; // [rsp+EE0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099e239*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x10099e254*/
  v37 = *((_QWORD *)__src + 117); /*0x10099e260*/
  v2 = *((_QWORD *)__src + 115); /*0x10099e264*/
  v36 = *((_QWORD *)__src + 116); /*0x10099e272*/
  v35 = v2; /*0x10099e276*/
  v34 = 0; /*0x10099e27a*/
  v28 = (__int64)"remove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099e289*/
  v29 = 26; /*0x10099e28d*/
  v30 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099e29c*/
  v31 = 3; /*0x10099e2a0*/
  v32 = __dst; /*0x10099e2a8*/
  v33 = &v35; /*0x10099e2b0*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x10099e2c2*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x10099e2ce*/
  {
    memcpy(v19, __srca, 0x98u); /*0x10099e38c*/
    v34 = 0; /*0x10099e391*/
    v28 = (__int64)"remove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099e399*/
    v29 = 26; /*0x10099e39d*/
    v30 = "modeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099e3ac*/
    v31 = 6; /*0x10099e3b0*/
    v32 = __dst; /*0x10099e3bf*/
    v33 = &v35; /*0x10099e3c3*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v24, &v28); /*0x10099e3d2*/
    if ( (_BYTE)v24 != 6 ) /*0x10099e3de*/
    {
      v32 = (_BYTE *)v27; /*0x10099e47e*/
      v31 = v26; /*0x10099e489*/
      v30 = (char *)v25; /*0x10099e49b*/
      v29 = v24; /*0x10099e49f*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x10099e4b5*/
      v8 = *((_QWORD *)__src + 111); /*0x10099e4c8*/
      v21[0] = *((_QWORD *)__src + 110); /*0x10099e4cf*/
      v21[1] = v8; /*0x10099e4d6*/
      v21[2] = *((_QWORD *)__src + 112); /*0x10099e4e4*/
      v28 = 1; /*0x10099e4f9*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099e50f*/
        v14,
        v20[48],
        &v28,
        v21,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v19); /*0x10099e51e*/
      goto LABEL_18; /*0x10099e523*/
    }
    v23[2] = v27; /*0x10099e3eb*/
    v23[1] = v26; /*0x10099e400*/
    v23[0] = v25; /*0x10099e407*/
    codexmate_lib::commands::voice_runtime::remove_voice_mode_shortcut::hc6c0a1843ba39c74(v16, (__int64)v19, v23); /*0x10099e423*/
    memcpy(v19, __src + 520, sizeof(v19)); /*0x10099e437*/
    if ( LODWORD(v16[0]) == 2 ) /*0x10099e443*/
    {
      v4 = v16[1]; /*0x10099e449*/
      v5 = (const void *)v16[2]; /*0x10099e450*/
      v6 = v16[3]; /*0x10099e457*/
      if ( v16[3] < 0LL ) /*0x10099e461*/
      {
        v7 = 0; /*0x10099e467*/
        goto LABEL_7; /*0x10099e467*/
      }
      if ( v16[3] ) /*0x10099e542*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __src + 520); /*0x10099e544*/
        v7 = 1; /*0x10099e549*/
        v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x10099e557*/
        if ( !v9 ) /*0x10099e55f*/
LABEL_7:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x10099e46a*/
        v10 = v9; /*0x10099e565*/
      }
      else
      {
        v10 = 1; /*0x10099e56a*/
      }
      memcpy((void *)v10, v5, v6); /*0x10099e579*/
      if ( v4 ) /*0x10099e581*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x10099e58e*/
      LOBYTE(__srca[1]) = 3; /*0x10099e593*/
      __srca[2] = v6; /*0x10099e59a*/
      __srca[3] = v10; /*0x10099e5a1*/
      __srca[4] = v6; /*0x10099e5a8*/
      __srca[0] = 2; /*0x10099e5af*/
    }
    else
    {
      memcpy(__srca, v16, sizeof(__srca)); /*0x10099e53b*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v19, __srca); /*0x10099e5c8*/
    goto LABEL_18; /*0x10099e5c8*/
  }
  v32 = (_BYTE *)__srca[4]; /*0x10099e2db*/
  v31 = __srca[3]; /*0x10099e2e6*/
  v30 = (char *)__srca[2]; /*0x10099e2f8*/
  v29 = __srca[1]; /*0x10099e2fc*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x10099e312*/
  v3 = *((_QWORD *)__src + 111); /*0x10099e325*/
  v22[0] = *((_QWORD *)__src + 110); /*0x10099e32c*/
  v22[1] = v3; /*0x10099e333*/
  v22[2] = *((_QWORD *)__src + 112); /*0x10099e341*/
  v28 = 1; /*0x10099e356*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099e36f*/
    v15,
    v20[48],
    &v28,
    v22,
    LODWORD(v20[49]),
    HIDWORD(v20[49]));
LABEL_18:
  if ( !__OFSUB__(0, v35) ) /*0x10099e5d3*/
  {
    v11 = v36; /*0x10099e5d5*/
    for ( i = v37 + 1; i != 1; --i ) /*0x10099e5dd*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x10099e5ed*/
      v11 += 96; /*0x10099e5f2*/
    }
    if ( v35 ) /*0x10099e5fe*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 96 * v35, 8); /*0x10099e611*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099e622*/
}