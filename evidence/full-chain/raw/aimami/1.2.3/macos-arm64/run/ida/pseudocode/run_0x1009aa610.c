// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009aa610 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h90091d5bb7c91a85(
        char *__src,
        double a2)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r14
  void *v7; // r15
  void *v8; // r12
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // rax
  size_t v12; // rbx
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[760]; // [rsp+8h] [rbp-F68h] BYREF
  _BYTE v17[360]; // [rsp+300h] [rbp-C70h] BYREF
  _BYTE __dst[520]; // [rsp+468h] [rbp-B08h] BYREF
  _QWORD v19[50]; // [rsp+670h] [rbp-900h] BYREF
  _BYTE v20[712]; // [rsp+800h] [rbp-770h] BYREF
  _BYTE v21[152]; // [rsp+AC8h] [rbp-4A8h] BYREF
  _QWORD __srca[19]; // [rsp+B60h] [rbp-410h] BYREF
  __int64 v23; // [rsp+BF8h] [rbp-378h] BYREF
  __int64 v24; // [rsp+C00h] [rbp-370h]
  void *v25; // [rsp+C08h] [rbp-368h]
  size_t __n; // [rsp+C10h] [rbp-360h]
  _QWORD v27[95]; // [rsp+C18h] [rbp-358h] BYREF
  _QWORD v28[3]; // [rsp+F10h] [rbp-60h] BYREF
  __int64 v29; // [rsp+F28h] [rbp-48h] BYREF
  __int64 v30; // [rsp+F30h] [rbp-40h]
  __int64 v31; // [rsp+F38h] [rbp-38h]
  int v32; // [rsp+F44h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009aa639*/
  v2 = __src + 520; /*0x1009aa63e*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009aa654*/
  v31 = *((_QWORD *)__src + 117); /*0x1009aa660*/
  v3 = *((_QWORD *)__src + 115); /*0x1009aa664*/
  v30 = *((_QWORD *)__src + 116); /*0x1009aa672*/
  v29 = v3; /*0x1009aa676*/
  v27[2] = 0; /*0x1009aa67a*/
  v23 = (__int64)"stop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009aa68c*/
  v24 = 18; /*0x1009aa693*/
  v25 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009aa6a5*/
  __n = 3; /*0x1009aa6ac*/
  v27[0] = __dst; /*0x1009aa6b7*/
  v4 = &v29; /*0x1009aa6be*/
  v27[1] = &v29; /*0x1009aa6c2*/
  LOBYTE(v4) = 1; /*0x1009aa6c9*/
  v32 = (int)v4; /*0x1009aa6cb*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009aa6dc*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009aa6e8*/
  {
    memcpy(v21, __srca, sizeof(v21)); /*0x1009aa7b3*/
    codexmate_lib::core::voice::runtime::stop_capture::h955d7093ac8b0a2b(&v23, (__int64)v21); /*0x1009aa7c2*/
    v6 = v24; /*0x1009aa7ce*/
    v7 = v25; /*0x1009aa7d5*/
    v8 = (void *)__n; /*0x1009aa7dc*/
    if ( v23 == 2 ) /*0x1009aa7e7*/
    {
      v9 = 2; /*0x1009aa7e9*/
    }
    else
    {
      memcpy(&v20[32], v27, 0x2A8u); /*0x1009aa804*/
      *(_QWORD *)v20 = v23; /*0x1009aa809*/
      *(_QWORD *)&v20[8] = v24; /*0x1009aa810*/
      *(_QWORD *)&v20[16] = v25; /*0x1009aa817*/
      *(_QWORD *)&v20[24] = __n; /*0x1009aa81e*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(&v23, v20); /*0x1009aa833*/
      v9 = v23; /*0x1009aa838*/
      v6 = v24; /*0x1009aa83f*/
      v7 = v25; /*0x1009aa846*/
      v8 = (void *)__n; /*0x1009aa84d*/
      memcpy(v16, v27, sizeof(v16)); /*0x1009aa867*/
    }
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v21); /*0x1009aa873*/
    memcpy(v20, v2, 0x190u); /*0x1009aa887*/
    if ( v9 == 2 ) /*0x1009aa890*/
    {
      if ( (__int64)v8 < 0 ) /*0x1009aa895*/
      {
        v10 = 0; /*0x1009aa897*/
        goto LABEL_9; /*0x1009aa897*/
      }
      if ( v8 ) /*0x1009aa8dd*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v2); /*0x1009aa8df*/
        v10 = 1; /*0x1009aa8e4*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009aa8f2*/
        if ( !v11 ) /*0x1009aa8fa*/
LABEL_9:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v8); /*0x1009aa89a*/
        v12 = v11; /*0x1009aa8fc*/
      }
      else
      {
        v12 = 1; /*0x1009aa901*/
      }
      memcpy((void *)v12, v7, (size_t)v8); /*0x1009aa90f*/
      if ( v6 ) /*0x1009aa917*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x1009aa924*/
      LOBYTE(v24) = 3; /*0x1009aa929*/
      v25 = v8; /*0x1009aa930*/
      __n = v12; /*0x1009aa937*/
      v27[0] = v8; /*0x1009aa93e*/
      v23 = 2; /*0x1009aa945*/
    }
    else
    {
      v23 = v9; /*0x1009aa8a7*/
      v24 = v6; /*0x1009aa8ae*/
      v25 = v7; /*0x1009aa8b5*/
      __n = (size_t)v8; /*0x1009aa8bc*/
      memcpy(v27, v16, sizeof(v27)); /*0x1009aa8d6*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v20, &v23); /*0x1009aa95e*/
    goto LABEL_19; /*0x1009aa95e*/
  }
  v27[0] = __srca[4]; /*0x1009aa6f5*/
  __n = __srca[3]; /*0x1009aa703*/
  v25 = (void *)__srca[2]; /*0x1009aa718*/
  v24 = __srca[1]; /*0x1009aa71f*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009aa738*/
  v5 = *((_QWORD *)__src + 111); /*0x1009aa74b*/
  v28[0] = *((_QWORD *)__src + 110); /*0x1009aa752*/
  v28[1] = v5; /*0x1009aa756*/
  v28[2] = *((_QWORD *)__src + 112); /*0x1009aa761*/
  v23 = 1; /*0x1009aa773*/
  v32 = 0; /*0x1009aa77e*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009aa793*/
    v17,
    v19[48],
    &v23,
    v28,
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
LABEL_19:
  if ( !__OFSUB__(0, v29) ) /*0x1009aa969*/
  {
    v13 = v30; /*0x1009aa96b*/
    for ( i = v31 + 1; i != 1; --i ) /*0x1009aa973*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009aa98d*/
      v13 += 96; /*0x1009aa992*/
    }
    if ( v29 ) /*0x1009aa99e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 96 * v29, 8); /*0x1009aa9b1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009aa9c2*/
}