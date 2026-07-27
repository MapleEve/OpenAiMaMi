// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ad140 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hafd9eb3726769900(
        char *__src,
        __m128i a2,
        __m128i a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // r12
  __int64 v6; // r14
  const void *v7; // r15
  size_t v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 i; // r15
  _BYTE v17[360]; // [rsp+0h] [rbp-B70h] BYREF
  _BYTE v18[360]; // [rsp+168h] [rbp-A08h] BYREF
  _BYTE v19[360]; // [rsp+2D0h] [rbp-8A0h] BYREF
  _QWORD __dst[65]; // [rsp+438h] [rbp-738h] BYREF
  _QWORD __srca[50]; // [rsp+640h] [rbp-530h] BYREF
  _QWORD v22[50]; // [rsp+7D0h] [rbp-3A0h] BYREF
  _QWORD v23[14]; // [rsp+960h] [rbp-210h] BYREF
  _QWORD v24[19]; // [rsp+9D0h] [rbp-1A0h] BYREF
  _QWORD v25[3]; // [rsp+A68h] [rbp-108h] BYREF
  _QWORD v26[3]; // [rsp+A80h] [rbp-F0h] BYREF
  _QWORD v27[3]; // [rsp+A98h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+AB0h] [rbp-C0h] BYREF
  __int64 v29[3]; // [rsp+AB8h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+AD0h] [rbp-A0h] BYREF
  char *v31; // [rsp+AD8h] [rbp-98h]
  __int64 v32; // [rsp+AE0h] [rbp-90h]
  _QWORD *v33; // [rsp+AE8h] [rbp-88h]
  __int64 v34; // [rsp+AF0h] [rbp-80h] BYREF
  __int64 v35; // [rsp+AF8h] [rbp-78h]
  __int64 v36; // [rsp+B00h] [rbp-70h]
  __int64 v37; // [rsp+B08h] [rbp-68h] BYREF
  __int64 v38; // [rsp+B10h] [rbp-60h]
  char *v39; // [rsp+B18h] [rbp-58h] BYREF
  __int64 v40; // [rsp+B20h] [rbp-50h]
  _QWORD *v41; // [rsp+B28h] [rbp-48h]
  __int64 *v42; // [rsp+B30h] [rbp-40h]
  __int64 v43; // [rsp+B38h] [rbp-38h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ad169*/
  memcpy(v22, __src + 520, sizeof(v22)); /*0x1009ad184*/
  v36 = *((_QWORD *)__src + 117); /*0x1009ad190*/
  v3 = *((_QWORD *)__src + 115); /*0x1009ad194*/
  v35 = *((_QWORD *)__src + 116); /*0x1009ad1a2*/
  v34 = v3; /*0x1009ad1a6*/
  v43 = 0; /*0x1009ad1aa*/
  v37 = (__int64)"import_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ad1b9*/
  v38 = 19; /*0x1009ad1bd*/
  v39 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ad1cc*/
  v40 = 3; /*0x1009ad1d0*/
  v41 = __dst; /*0x1009ad1d8*/
  v42 = &v34; /*0x1009ad1e0*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009ad1f2*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009ad208*/
  {
    memcpy(v24, __srca, sizeof(v24)); /*0x1009ad2c6*/
    v43 = 0; /*0x1009ad2cb*/
    v37 = (__int64)"import_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ad2da*/
    v38 = 19; /*0x1009ad2de*/
    v39 = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ad2ed*/
    v40 = 7; /*0x1009ad2f1*/
    v41 = __dst; /*0x1009ad2f9*/
    v42 = &v34; /*0x1009ad301*/
    v5 = (__int64 *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009ad315*/
    if ( !v5 ) /*0x1009ad31b*/
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009ad32c*/
        &v30,
        &v37,
        &v39);
      if ( (_BYTE)v30 != 6 ) /*0x1009ad338*/
      {
        v41 = v33; /*0x1009ad4e7*/
        v40 = v32; /*0x1009ad4f2*/
        v39 = v31; /*0x1009ad504*/
        v38 = v30; /*0x1009ad508*/
        memcpy(v18, __src + 520, sizeof(v18)); /*0x1009ad51e*/
        v11 = *((_QWORD *)__src + 111); /*0x1009ad531*/
        v26[0] = *((_QWORD *)__src + 110); /*0x1009ad538*/
        v26[1] = v11; /*0x1009ad53f*/
        v26[2] = *((_QWORD *)__src + 112); /*0x1009ad54d*/
        v37 = 1; /*0x1009ad562*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ad57b*/
          v18,
          v22[48],
          &v37,
          v26,
          LODWORD(v22[49]),
          HIDWORD(v22[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v24); /*0x1009ad58a*/
        goto LABEL_22; /*0x1009ad599*/
      }
      v5 = (__int64 *)v31; /*0x1009ad33e*/
    }
    v43 = 0; /*0x1009ad345*/
    v37 = (__int64)"import_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009ad34d*/
    v38 = 19; /*0x1009ad351*/
    v39 = "filePathllmModelasrModeldiagnoserelaunchcategoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepLi" /*0x1009ad360*/
          "nkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch";
    v40 = 8; /*0x1009ad364*/
    v41 = __dst; /*0x1009ad36c*/
    v42 = &v34; /*0x1009ad374*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v28, &v37); /*0x1009ad386*/
    if ( (_BYTE)v28 != 6 ) /*0x1009ad392*/
    {
      v41 = (_QWORD *)v29[2]; /*0x1009ad411*/
      v40 = v29[1]; /*0x1009ad41c*/
      v39 = (char *)v29[0]; /*0x1009ad42e*/
      v38 = v28; /*0x1009ad432*/
      memcpy(v17, __src + 520, sizeof(v17)); /*0x1009ad448*/
      v10 = *((_QWORD *)__src + 111); /*0x1009ad45b*/
      v25[0] = *((_QWORD *)__src + 110); /*0x1009ad462*/
      v25[1] = v10; /*0x1009ad469*/
      v25[2] = *((_QWORD *)__src + 112); /*0x1009ad477*/
      v37 = 1; /*0x1009ad48c*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ad4a2*/
        v17,
        v22[48],
        &v37,
        v25,
        LODWORD(v22[49]),
        HIDWORD(v22[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v24); /*0x1009ad4b1*/
      goto LABEL_22; /*0x1009ad4c0*/
    }
    codexmate_lib::commands::relay::import_relay_config::he8675bfbd55552b0(v23, (__int64)v24, v5, v29, a2, a3); /*0x1009ad3ac*/
    memcpy(__srca, __src + 520, sizeof(__srca)); /*0x1009ad3c0*/
    if ( v23[0] == 0x8000000000000000LL ) /*0x1009ad3d6*/
    {
      v6 = v23[1]; /*0x1009ad3dc*/
      v7 = (const void *)v23[2]; /*0x1009ad3e3*/
      v8 = v23[3]; /*0x1009ad3ea*/
      if ( v23[3] < 0LL ) /*0x1009ad3f4*/
      {
        v9 = 0; /*0x1009ad3fa*/
        goto LABEL_10; /*0x1009ad3fa*/
      }
      if ( v23[3] ) /*0x1009ad59e*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, __src + 520); /*0x1009ad5a0*/
        v9 = 1; /*0x1009ad5a5*/
        v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009ad5b3*/
        if ( !v12 ) /*0x1009ad5bb*/
LABEL_10:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009ad3fd*/
        v13 = v12; /*0x1009ad5c1*/
      }
      else
      {
        v13 = 1; /*0x1009ad5c6*/
      }
      memcpy((void *)v13, v7, v8); /*0x1009ad5d5*/
      if ( v6 ) /*0x1009ad5dd*/
        *(double *)a2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x1009ad5ea*/
      LOBYTE(v24[1]) = 3; /*0x1009ad5ef*/
      v24[2] = v8; /*0x1009ad5f6*/
      v24[3] = v13; /*0x1009ad5fd*/
      v24[4] = v8; /*0x1009ad604*/
      v24[0] = 0x8000000000000000LL; /*0x1009ad615*/
    }
    else
    {
      qmemcpy(v24, v23, 0x70u); /*0x1009ad4d8*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h4506b06909972615(__srca); /*0x1009ad62a*/
    goto LABEL_22; /*0x1009ad62a*/
  }
  v41 = (_QWORD *)__srca[4]; /*0x1009ad215*/
  v40 = __srca[3]; /*0x1009ad220*/
  v39 = (char *)__srca[2]; /*0x1009ad232*/
  v38 = __srca[1]; /*0x1009ad236*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009ad24c*/
  v4 = *((_QWORD *)__src + 111); /*0x1009ad25f*/
  v27[0] = *((_QWORD *)__src + 110); /*0x1009ad266*/
  v27[1] = v4; /*0x1009ad26d*/
  v27[2] = *((_QWORD *)__src + 112); /*0x1009ad27b*/
  v37 = 1; /*0x1009ad290*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ad2a9*/
    v19,
    v22[48],
    &v37,
    v27,
    LODWORD(v22[49]),
    HIDWORD(v22[49]));
LABEL_22:
  if ( v34 != 0x8000000000000000LL ) /*0x1009ad633*/
  {
    v14 = v35; /*0x1009ad635*/
    for ( i = v36 + 1; i != 1; --i ) /*0x1009ad63d*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x1009ad64d*/
      v14 += 96; /*0x1009ad652*/
    }
    if ( v34 ) /*0x1009ad65e*/
      *(double *)a2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 96 * v34, 8); /*0x1009ad671*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, *(double *)a2.i64); /*0x1009ad682*/
}