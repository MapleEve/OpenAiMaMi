// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099f6a0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2a1079c6bbdecf6b(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r14
  void *v6; // r15
  void *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  size_t v13; // rbx
  __int64 v14; // rdi
  __int64 i; // r15
  _QWORD v17[95]; // [rsp+8h] [rbp-12C8h] BYREF
  _BYTE v18[360]; // [rsp+300h] [rbp-FD0h] BYREF
  _BYTE v19[360]; // [rsp+468h] [rbp-E68h] BYREF
  _BYTE v20[360]; // [rsp+5D0h] [rbp-D00h] BYREF
  _BYTE __dst[520]; // [rsp+738h] [rbp-B98h] BYREF
  _BYTE v22[712]; // [rsp+940h] [rbp-990h] BYREF
  _QWORD v23[50]; // [rsp+C08h] [rbp-6C8h] BYREF
  _QWORD v24[19]; // [rsp+D98h] [rbp-538h] BYREF
  _BYTE v25[152]; // [rsp+E30h] [rbp-4A0h] BYREF
  __int64 v26; // [rsp+EC8h] [rbp-408h] BYREF
  __int64 v27; // [rsp+ED0h] [rbp-400h]
  void *v28; // [rsp+ED8h] [rbp-3F8h]
  size_t __n; // [rsp+EE0h] [rbp-3F0h]
  _QWORD v30[95]; // [rsp+EE8h] [rbp-3E8h] BYREF
  _QWORD v31[3]; // [rsp+11E0h] [rbp-F0h] BYREF
  _QWORD v32[3]; // [rsp+11F8h] [rbp-D8h] BYREF
  _QWORD v33[3]; // [rsp+1210h] [rbp-C0h] BYREF
  _QWORD v34[4]; // [rsp+1228h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+1248h] [rbp-88h] BYREF
  void *v36; // [rsp+1250h] [rbp-80h]
  size_t v37; // [rsp+1258h] [rbp-78h]
  __int64 v38; // [rsp+1260h] [rbp-70h]
  void *v39; // [rsp+1268h] [rbp-68h] BYREF
  size_t v40; // [rsp+1270h] [rbp-60h]
  __int64 v41; // [rsp+1278h] [rbp-58h]
  int v42; // [rsp+1284h] [rbp-4Ch]
  __int64 v43; // [rsp+1288h] [rbp-48h] BYREF
  __int64 v44; // [rsp+1290h] [rbp-40h]
  __int64 v45; // [rsp+1298h] [rbp-38h]
  void *__srca; // [rsp+12A0h] [rbp-30h]

  v17[84] = 0; /*0x10099f6b4*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x10099f6d8*/
  __srca = __src + 520; /*0x10099f6f0*/
  memcpy(v23, __src + 520, sizeof(v23)); /*0x10099f6f4*/
  v45 = *((_QWORD *)__src + 117); /*0x10099f700*/
  v2 = *((_QWORD *)__src + 115); /*0x10099f704*/
  v44 = *((_QWORD *)__src + 116); /*0x10099f712*/
  v43 = v2; /*0x10099f716*/
  v30[2] = 0; /*0x10099f71a*/
  v26 = (__int64)"set_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099f72c*/
  v27 = 28; /*0x10099f733*/
  v28 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099f745*/
  __n = 3; /*0x10099f74c*/
  v30[0] = __dst; /*0x10099f757*/
  v30[1] = &v43; /*0x10099f762*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v24); /*0x10099f779*/
  if ( LODWORD(v24[0]) == 3 ) /*0x10099f785*/
  {
    v30[0] = v24[4]; /*0x10099f792*/
    __n = v24[3]; /*0x10099f7a0*/
    v28 = (void *)v24[2]; /*0x10099f7b5*/
    v27 = v24[1]; /*0x10099f7bc*/
    memcpy(v20, __srca, sizeof(v20)); /*0x10099f7d6*/
    v3 = *((_QWORD *)__src + 111); /*0x10099f7e9*/
    v33[0] = *((_QWORD *)__src + 110); /*0x10099f7f0*/
    v33[1] = v3; /*0x10099f7f7*/
    v33[2] = *((_QWORD *)__src + 112); /*0x10099f805*/
    v26 = 1; /*0x10099f81a*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099f838*/
      v20,
      v23[48],
      &v26,
      v33,
      LODWORD(v23[49]),
      HIDWORD(v23[49]));
    goto LABEL_25; /*0x10099f83d*/
  }
  memcpy(v25, v24, sizeof(v25)); /*0x10099f855*/
  v30[2] = 0; /*0x10099f85a*/
  v26 = (__int64)"set_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099f865*/
  v27 = 28; /*0x10099f86c*/
  v28 = "modeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099f87e*/
  __n = 6; /*0x10099f885*/
  v30[0] = __dst; /*0x10099f890*/
  v30[1] = &v43; /*0x10099f897*/
  v4 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v35, &v26); /*0x10099f8ac*/
  LOBYTE(v4) = (_BYTE)v35 == 6; /*0x10099f8b8*/
  v42 = v4; /*0x10099f8bb*/
  if ( (_BYTE)v35 != 6 ) /*0x10099f8be*/
  {
    v30[0] = v38; /*0x10099f993*/
    __n = v37; /*0x10099f99e*/
    v28 = v36; /*0x10099f9b0*/
    v27 = v35; /*0x10099f9b7*/
    memcpy(v19, __srca, sizeof(v19)); /*0x10099f9d1*/
    v9 = *((_QWORD *)__src + 111); /*0x10099f9e4*/
    v32[0] = *((_QWORD *)__src + 110); /*0x10099f9eb*/
    v32[1] = v9; /*0x10099f9f2*/
    v32[2] = *((_QWORD *)__src + 112); /*0x10099fa00*/
    v26 = 1; /*0x10099fa15*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099fa31*/
      v19,
      v23[48],
      &v26,
      v32,
      LODWORD(v23[49]),
      HIDWORD(v23[49]));
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v25); /*0x10099fa3f*/
    goto LABEL_25; /*0x10099fa44*/
  }
  v41 = v38; /*0x10099f8c8*/
  v40 = v37; /*0x10099f8d4*/
  v39 = v36; /*0x10099f8d8*/
  v30[2] = 0; /*0x10099f8dc*/
  v26 = (__int64)"set_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099f8e7*/
  v27 = 28; /*0x10099f8ee*/
  v28 = "processingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099f900*/
  __n = 14; /*0x10099f907*/
  v30[0] = __dst; /*0x10099f912*/
  v30[1] = &v43; /*0x10099f919*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hf74cca5299bda9c5(v34, &v26); /*0x10099f92e*/
  if ( LOBYTE(v34[0]) == 6 ) /*0x10099f93a*/
  {
    codexmate_lib::core::voice::runtime::set_processing_mode_id::h11f47356e6333cae( /*0x10099f959*/
      &v26,
      (__int64)v25,
      &v39,
      BYTE1(v34[0]));
    v5 = v27; /*0x10099f965*/
    v6 = v28; /*0x10099f96c*/
    v7 = (void *)__n; /*0x10099f973*/
    if ( v26 == 2 ) /*0x10099f97e*/
    {
      v8 = 2; /*0x10099f984*/
    }
    else
    {
      memcpy(&v22[32], v30, 0x2A8u); /*0x10099fb36*/
      *(_QWORD *)v22 = v26; /*0x10099fb3b*/
      *(_QWORD *)&v22[8] = v27; /*0x10099fb42*/
      *(_QWORD *)&v22[16] = v28; /*0x10099fb49*/
      *(_QWORD *)&v22[24] = __n; /*0x10099fb50*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(&v26, v22); /*0x10099fb65*/
      v8 = v26; /*0x10099fb6a*/
      v5 = v27; /*0x10099fb71*/
      v6 = v28; /*0x10099fb78*/
      v7 = (void *)__n; /*0x10099fb7f*/
      memcpy(v17, v30, sizeof(v17)); /*0x10099fb99*/
    }
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v25); /*0x10099fba5*/
    memcpy(v22, __srca, 0x190u); /*0x10099fbba*/
    if ( v8 == 2 ) /*0x10099fbc3*/
    {
      if ( (__int64)v7 < 0 ) /*0x10099fbc8*/
      {
        v11 = 0; /*0x10099fbca*/
        goto LABEL_15; /*0x10099fbca*/
      }
      if ( v7 ) /*0x10099fc10*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, __srca); /*0x10099fc12*/
        v11 = 1; /*0x10099fc17*/
        v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x10099fc25*/
        if ( !v12 ) /*0x10099fc2d*/
LABEL_15:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v7); /*0x10099fbcd*/
        v13 = v12; /*0x10099fc2f*/
      }
      else
      {
        v13 = 1; /*0x10099fc34*/
      }
      memcpy((void *)v13, v6, (size_t)v7); /*0x10099fc42*/
      if ( v5 ) /*0x10099fc4a*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x10099fc57*/
      LOBYTE(v27) = 3; /*0x10099fc5c*/
      v28 = v7; /*0x10099fc63*/
      __n = v13; /*0x10099fc6a*/
      v30[0] = v7; /*0x10099fc71*/
      v26 = 2; /*0x10099fc78*/
    }
    else
    {
      v26 = v8; /*0x10099fbda*/
      v27 = v5; /*0x10099fbe1*/
      v28 = v6; /*0x10099fbe8*/
      __n = (size_t)v7; /*0x10099fbef*/
      memcpy(v30, v17, sizeof(v30)); /*0x10099fc09*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v22, &v26); /*0x10099fc91*/
    goto LABEL_25; /*0x10099fc91*/
  }
  v30[0] = v34[3]; /*0x10099fa50*/
  __n = v34[2]; /*0x10099fa5e*/
  v28 = (void *)v34[1]; /*0x10099fa73*/
  v27 = v34[0]; /*0x10099fa7a*/
  memcpy(v18, __srca, sizeof(v18)); /*0x10099fa94*/
  v10 = *((_QWORD *)__src + 111); /*0x10099faa7*/
  v31[0] = *((_QWORD *)__src + 110); /*0x10099faae*/
  v31[1] = v10; /*0x10099fab5*/
  v31[2] = *((_QWORD *)__src + 112); /*0x10099fac3*/
  v26 = 1; /*0x10099fad8*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099faf4*/
    v18,
    v23[48],
    &v26,
    v31,
    LODWORD(v23[49]),
    HIDWORD(v23[49]));
  if ( v39 ) /*0x10099fb00*/
    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v39, 1); /*0x10099fb0b*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v25); /*0x10099fb19*/
LABEL_25:
  if ( !__OFSUB__(0, v43) ) /*0x10099fc9c*/
  {
    v14 = v44; /*0x10099fc9e*/
    for ( i = v45 + 1; i != 1; --i ) /*0x10099fca6*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x10099fcbd*/
      v14 += 96; /*0x10099fcc2*/
    }
    if ( v43 ) /*0x10099fcce*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 96 * v43, 8); /*0x10099fce1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099fcf2*/
}