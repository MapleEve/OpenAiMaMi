// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a5740 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6550f0ba37c7f593(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  void *v7; // r13
  size_t v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 i; // r15
  _BYTE v15[360]; // [rsp+0h] [rbp-980h] BYREF
  _BYTE v16[360]; // [rsp+168h] [rbp-818h] BYREF
  _BYTE __dst[520]; // [rsp+2D0h] [rbp-6B0h] BYREF
  _QWORD v18[50]; // [rsp+4D8h] [rbp-4A8h] BYREF
  _QWORD v19[50]; // [rsp+668h] [rbp-318h] BYREF
  _QWORD v20[19]; // [rsp+7F8h] [rbp-188h] BYREF
  _QWORD v21[3]; // [rsp+890h] [rbp-F0h] BYREF
  _QWORD v22[3]; // [rsp+8A8h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+8C0h] [rbp-C0h] BYREF
  void *v24; // [rsp+8C8h] [rbp-B8h]
  size_t __n; // [rsp+8D0h] [rbp-B0h]
  __int64 v26; // [rsp+8D8h] [rbp-A8h] BYREF
  char *v27; // [rsp+8E0h] [rbp-A0h]
  __int64 v28; // [rsp+8E8h] [rbp-98h]
  _BYTE *v29; // [rsp+8F0h] [rbp-90h]
  __int64 v30; // [rsp+8F8h] [rbp-88h] BYREF
  __int64 v31; // [rsp+900h] [rbp-80h]
  char *v32; // [rsp+908h] [rbp-78h]
  __int64 v33; // [rsp+910h] [rbp-70h]
  _BYTE *v34; // [rsp+918h] [rbp-68h]
  __int64 *v35; // [rsp+920h] [rbp-60h]
  __int64 v36; // [rsp+928h] [rbp-58h]
  __int64 v37; // [rsp+938h] [rbp-48h] BYREF
  __int64 v38; // [rsp+940h] [rbp-40h]
  __int64 v39; // [rsp+948h] [rbp-38h]
  void *__srca; // [rsp+950h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a5769*/
  __srca = __src + 520; /*0x1009a5781*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1009a5785*/
  v39 = *((_QWORD *)__src + 117); /*0x1009a5791*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a5795*/
  v38 = *((_QWORD *)__src + 116); /*0x1009a57a3*/
  v37 = v2; /*0x1009a57a7*/
  v36 = 0; /*0x1009a57ab*/
  v30 = (__int64)"voice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a57ba*/
  v31 = 21; /*0x1009a57c1*/
  v32 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a57d0*/
  v33 = 3; /*0x1009a57d4*/
  v34 = __dst; /*0x1009a57dc*/
  v35 = &v37; /*0x1009a57e4*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v19); /*0x1009a57f8*/
  if ( LODWORD(v19[0]) != 3 ) /*0x1009a5804*/
  {
    memcpy(v20, v19, sizeof(v20)); /*0x1009a58d2*/
    v36 = 0; /*0x1009a58d7*/
    v30 = (__int64)"voice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a58df*/
    v31 = 21; /*0x1009a58e6*/
    v32 = "sessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a58f5*/
    v33 = 17; /*0x1009a58f9*/
    v34 = __dst; /*0x1009a5901*/
    v35 = &v37; /*0x1009a5905*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2055dc4899fbef3a(&v26, &v30); /*0x1009a5917*/
    if ( (_BYTE)v26 != 6 ) /*0x1009a592d*/
    {
      v34 = v29; /*0x1009a5994*/
      v33 = v28; /*0x1009a599f*/
      v32 = v27; /*0x1009a59b1*/
      v31 = v26; /*0x1009a59b5*/
      memcpy(v15, __srca, sizeof(v15)); /*0x1009a59cc*/
      v6 = *((_QWORD *)__src + 111); /*0x1009a59df*/
      v21[0] = *((_QWORD *)__src + 110); /*0x1009a59e6*/
      v21[1] = v6; /*0x1009a59ed*/
      v21[2] = *((_QWORD *)__src + 112); /*0x1009a59fb*/
      v30 = 1; /*0x1009a5a10*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a5a2c*/
        v15,
        v18[48],
        &v30,
        v21,
        LODWORD(v18[49]),
        HIDWORD(v18[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v20); /*0x1009a5a3a*/
      goto LABEL_18; /*0x1009a5a3f*/
    }
    codexmate_lib::core::voice::runtime::notify_processing_done::hdc075b800f908cf7( /*0x1009a594b*/
      (__int64)&v23,
      (__int64)v20,
      (char)v27,
      v28);
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v20); /*0x1009a5957*/
    v4 = __srca; /*0x1009a5968*/
    memcpy(v19, __srca, sizeof(v19)); /*0x1009a596c*/
    v5 = v23; /*0x1009a5971*/
    if ( v23 == 0x8000000000000000LL ) /*0x1009a597b*/
    {
      LOBYTE(v20[0]) = 6; /*0x1009a5981*/
LABEL_17:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9f6c6c7c6be4e32b(v19); /*0x1009a5adc*/
      goto LABEL_18; /*0x1009a5aea*/
    }
    v7 = v24; /*0x1009a5a44*/
    v8 = __n; /*0x1009a5a4b*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009a5a55*/
    {
      __srca = v24; /*0x1009a5a57*/
      v9 = 0; /*0x1009a5a5b*/
      goto LABEL_9; /*0x1009a5a5b*/
    }
    if ( __n ) /*0x1009a5a6b*/
    {
      __srca = v24; /*0x1009a5a6d*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v4); /*0x1009a5a71*/
      v9 = 1; /*0x1009a5a76*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009a5a84*/
      if ( !v10 ) /*0x1009a5a8c*/
LABEL_9:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009a5a5e*/
      v11 = v10; /*0x1009a5a8e*/
      v7 = __srca; /*0x1009a5a91*/
    }
    else
    {
      v11 = 1; /*0x1009a5a97*/
    }
    memcpy((void *)v11, v7, v8); /*0x1009a5aa6*/
    if ( v5 ) /*0x1009a5aae*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v5, 1); /*0x1009a5abb*/
    LOBYTE(v20[0]) = 3; /*0x1009a5ac0*/
    v20[1] = v8; /*0x1009a5ac7*/
    v20[2] = v11; /*0x1009a5ace*/
    v20[3] = v8; /*0x1009a5ad5*/
    goto LABEL_17; /*0x1009a5ad5*/
  }
  v34 = (_BYTE *)v19[4]; /*0x1009a5811*/
  v33 = v19[3]; /*0x1009a581c*/
  v32 = (char *)v19[2]; /*0x1009a582e*/
  v31 = v19[1]; /*0x1009a5832*/
  memcpy(v16, __srca, sizeof(v16)); /*0x1009a5849*/
  v3 = *((_QWORD *)__src + 111); /*0x1009a585c*/
  v22[0] = *((_QWORD *)__src + 110); /*0x1009a5863*/
  v22[1] = v3; /*0x1009a586a*/
  v22[2] = *((_QWORD *)__src + 112); /*0x1009a5878*/
  v30 = 1; /*0x1009a588d*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a58ab*/
    v16,
    v18[48],
    &v30,
    v22,
    LODWORD(v18[49]),
    HIDWORD(v18[49]));
LABEL_18:
  if ( v37 != 0x8000000000000000LL ) /*0x1009a5af3*/
  {
    v12 = v38; /*0x1009a5af5*/
    for ( i = v39 + 1; i != 1; --i ) /*0x1009a5afd*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v12); /*0x1009a5b0d*/
      v12 += 96; /*0x1009a5b12*/
    }
    if ( v37 ) /*0x1009a5b1e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, 96 * v37, 8); /*0x1009a5b31*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a5b42*/
}