// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a6e20 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6e74fd116518ad0e(
        char *__src,
        double a2)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  void *v6; // r15
  void *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  size_t v10; // rbx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+0h] [rbp-7C0h] BYREF
  _BYTE __dst[520]; // [rsp+168h] [rbp-658h] BYREF
  _QWORD v16[50]; // [rsp+370h] [rbp-450h] BYREF
  _BYTE v17[152]; // [rsp+500h] [rbp-2C0h] BYREF
  _QWORD __srca[50]; // [rsp+598h] [rbp-228h] BYREF
  _QWORD v19[3]; // [rsp+728h] [rbp-98h] BYREF
  __int64 v20; // [rsp+740h] [rbp-80h] BYREF
  void *v21; // [rsp+748h] [rbp-78h]
  size_t __n; // [rsp+750h] [rbp-70h]
  __int64 v23; // [rsp+758h] [rbp-68h]
  _BYTE *v24; // [rsp+760h] [rbp-60h]
  __int64 *v25; // [rsp+768h] [rbp-58h]
  __int64 v26; // [rsp+770h] [rbp-50h]
  __int64 v27; // [rsp+780h] [rbp-40h] BYREF
  __int64 v28; // [rsp+788h] [rbp-38h]
  __int64 v29; // [rsp+790h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a6e49*/
  v2 = __src + 520; /*0x1009a6e4e*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a6e64*/
  v29 = *((_QWORD *)__src + 117); /*0x1009a6e70*/
  v3 = *((_QWORD *)__src + 115); /*0x1009a6e74*/
  v28 = *((_QWORD *)__src + 116); /*0x1009a6e82*/
  v27 = v3; /*0x1009a6e86*/
  v26 = 0; /*0x1009a6e8a*/
  v20 = (__int64)"voice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a6e99*/
  v21 = (void *)19; /*0x1009a6e9d*/
  __n = (size_t)"appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a6eac*/
  v23 = 3; /*0x1009a6eb0*/
  v24 = __dst; /*0x1009a6eb8*/
  v25 = &v27; /*0x1009a6ec0*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009a6ed2*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009a6ede*/
  {
    memcpy(v17, __srca, sizeof(v17)); /*0x1009a6fa9*/
    codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)&v20, (__int64)v17); /*0x1009a6fb5*/
    v5 = v20; /*0x1009a6fba*/
    v6 = v21; /*0x1009a6fbe*/
    v7 = (void *)__n; /*0x1009a6fc2*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v17); /*0x1009a6fcd*/
    memcpy(__srca, v2, sizeof(__srca)); /*0x1009a6fe1*/
    if ( v5 == 0x8000000000000000LL ) /*0x1009a6ff3*/
    {
      LOBYTE(v20) = 6; /*0x1009a6ff5*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9f6c6c7c6be4e32b(__srca); /*0x1009a7076*/
      goto LABEL_16; /*0x1009a7081*/
    }
    if ( (__int64)v7 < 0 ) /*0x1009a6ffe*/
    {
      v8 = 0; /*0x1009a7000*/
      goto LABEL_7; /*0x1009a7000*/
    }
    if ( v7 ) /*0x1009a7010*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, v2); /*0x1009a7012*/
      v8 = 1; /*0x1009a7017*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009a7025*/
      if ( !v9 ) /*0x1009a702d*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009a7003*/
      v10 = v9; /*0x1009a702f*/
    }
    else
    {
      v10 = 1; /*0x1009a703e*/
    }
    memcpy((void *)v10, v6, (size_t)v7); /*0x1009a704c*/
    if ( v5 ) /*0x1009a7054*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009a7061*/
    LOBYTE(v20) = 3; /*0x1009a7066*/
    v21 = v7; /*0x1009a706a*/
    __n = v10; /*0x1009a706e*/
    v23 = (__int64)v7; /*0x1009a7072*/
    goto LABEL_15; /*0x1009a7072*/
  }
  v24 = (_BYTE *)__srca[4]; /*0x1009a6eeb*/
  v23 = __srca[3]; /*0x1009a6ef6*/
  __n = __srca[2]; /*0x1009a6f08*/
  v21 = (void *)__srca[1]; /*0x1009a6f0c*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a6f22*/
  v4 = *((_QWORD *)__src + 111); /*0x1009a6f35*/
  v19[0] = *((_QWORD *)__src + 110); /*0x1009a6f3c*/
  v19[1] = v4; /*0x1009a6f43*/
  v19[2] = *((_QWORD *)__src + 112); /*0x1009a6f51*/
  v20 = 1; /*0x1009a6f66*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a6f7f*/
    v14,
    v16[48],
    &v20,
    v19,
    LODWORD(v16[49]),
    HIDWORD(v16[49]));
LABEL_16:
  if ( v27 != 0x8000000000000000LL ) /*0x1009a708a*/
  {
    v11 = v28; /*0x1009a708c*/
    for ( i = v29 + 1; i != 1; --i ) /*0x1009a7094*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a70ad*/
      v11 += 96; /*0x1009a70b2*/
    }
    if ( v27 ) /*0x1009a70be*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 96 * v27, 8); /*0x1009a70d1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a70e2*/
}