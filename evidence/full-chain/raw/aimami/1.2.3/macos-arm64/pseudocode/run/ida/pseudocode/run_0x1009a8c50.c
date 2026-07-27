// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a8c50 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h830feef853b53f99(
        char *__src,
        __m128i a2)
{
  __int64 v2; // rax
  char *v3; // rax
  _QWORD *v4; // r13
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 i; // r15
  _BYTE v17[360]; // [rsp+0h] [rbp-B30h] BYREF
  _BYTE v18[360]; // [rsp+168h] [rbp-9C8h] BYREF
  _BYTE v19[360]; // [rsp+2D0h] [rbp-860h] BYREF
  _QWORD __dst[65]; // [rsp+438h] [rbp-6F8h] BYREF
  _QWORD v21[50]; // [rsp+640h] [rbp-4F0h] BYREF
  _QWORD v22[15]; // [rsp+7D0h] [rbp-360h] BYREF
  _QWORD v23[50]; // [rsp+848h] [rbp-2E8h] BYREF
  _QWORD v24[15]; // [rsp+9D8h] [rbp-158h] BYREF
  _QWORD v25[3]; // [rsp+A50h] [rbp-E0h] BYREF
  _QWORD v26[3]; // [rsp+A68h] [rbp-C8h] BYREF
  _QWORD v27[3]; // [rsp+A80h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+A98h] [rbp-98h] BYREF
  _QWORD *v29; // [rsp+AA0h] [rbp-90h]
  __int64 v30; // [rsp+AA8h] [rbp-88h]
  __int64 v31; // [rsp+AB0h] [rbp-80h]
  __int64 v32; // [rsp+AB8h] [rbp-78h] BYREF
  __int64 v33; // [rsp+AC0h] [rbp-70h] BYREF
  __int64 v34; // [rsp+AC8h] [rbp-68h]
  __int64 v35; // [rsp+AD0h] [rbp-60h]
  __int64 v36; // [rsp+AD8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+AE0h] [rbp-50h]
  __int64 v38; // [rsp+AE8h] [rbp-48h]
  __int64 v39; // [rsp+AF0h] [rbp-40h]
  void *__srca; // [rsp+AF8h] [rbp-38h]
  __int64 v41; // [rsp+B00h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a8c79*/
  __srca = __src + 520; /*0x1009a8c91*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x1009a8c95*/
  v38 = *((_QWORD *)__src + 117); /*0x1009a8ca1*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a8ca5*/
  v37 = *((_QWORD *)__src + 116); /*0x1009a8cb3*/
  v36 = v2; /*0x1009a8cb7*/
  v23[6] = 0; /*0x1009a8cbb*/
  v23[0] = "export_relay_configimport_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a8ccd*/
  v23[1] = 19; /*0x1009a8cd4*/
  v3 = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a8cdf*/
  v23[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a8ce6*/
  v23[3] = 7; /*0x1009a8ced*/
  v23[4] = __dst; /*0x1009a8cf8*/
  v23[5] = &v36; /*0x1009a8d03*/
  LOBYTE(v3) = 1; /*0x1009a8d15*/
  LODWORD(v41) = (_DWORD)v3; /*0x1009a8d17*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009a8d1f*/
  if ( !v4 ) /*0x1009a8d25*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a8d3c*/
      &v28,
      v23,
      &v23[2]);
    if ( (_BYTE)v28 != 6 ) /*0x1009a8d48*/
    {
      v23[4] = v31; /*0x1009a9029*/
      v23[3] = v30; /*0x1009a9037*/
      v23[2] = v29; /*0x1009a904c*/
      v23[1] = v28; /*0x1009a9053*/
      memcpy(v19, __srca, sizeof(v19)); /*0x1009a906d*/
      v11 = *((_QWORD *)__src + 111); /*0x1009a9080*/
      v27[0] = *((_QWORD *)__src + 110); /*0x1009a9087*/
      v27[1] = v11; /*0x1009a908e*/
      v27[2] = *((_QWORD *)__src + 112); /*0x1009a909c*/
      v23[0] = 1; /*0x1009a90b1*/
      LODWORD(v41) = 0; /*0x1009a90bc*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a90d4*/
        v19,
        v21[48],
        v23,
        v27,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      goto LABEL_24; /*0x1009a90d4*/
    }
    v4 = v29; /*0x1009a8d4e*/
  }
  v23[6] = 0; /*0x1009a8d55*/
  v23[0] = "export_relay_configimport_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a8d60*/
  v23[1] = 19; /*0x1009a8d67*/
  v23[2] = "filePathllmModelasrModeldiagnoserelaunchcategoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepL" /*0x1009a8d79*/
           "inkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch";
  v23[3] = 8; /*0x1009a8d80*/
  v23[4] = __dst; /*0x1009a8d8b*/
  v23[5] = &v36; /*0x1009a8d92*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v32, v23); /*0x1009a8da4*/
  if ( (_BYTE)v32 == 6 ) /*0x1009a8dad*/
  {
    v41 = v33; /*0x1009a8db7*/
    v39 = v34; /*0x1009a8dbf*/
    v23[6] = 0; /*0x1009a8dc3*/
    v23[0] = "export_relay_configimport_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a8dce*/
    v23[1] = 19; /*0x1009a8dd5*/
    v23[2] = "includeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a8de7*/
    v23[3] = 14; /*0x1009a8dee*/
    v23[4] = __dst; /*0x1009a8df9*/
    v23[5] = &v36; /*0x1009a8e00*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hd3dee5410a5f5aeb(v24, v23); /*0x1009a8e15*/
    if ( LOBYTE(v24[0]) == 6 ) /*0x1009a8e21*/
    {
      codexmate_lib::commands::relay::export_relay_config::h41d571b38e9e2a9c(v22, v4, &v33, BYTE1(v24[0]), a2); /*0x1009a8e3c*/
      memcpy(v23, __srca, sizeof(v23)); /*0x1009a8e51*/
      if ( v22[0] == 0x8000000000000000LL ) /*0x1009a8e67*/
      {
        v5 = v22[1]; /*0x1009a8e6d*/
        v6 = (const void *)v22[2]; /*0x1009a8e74*/
        v7 = v22[3]; /*0x1009a8e7b*/
        if ( v22[3] < 0LL ) /*0x1009a8e85*/
        {
          v8 = 0; /*0x1009a8e8b*/
          goto LABEL_9; /*0x1009a8e8b*/
        }
        if ( v22[3] ) /*0x1009a9100*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, __srca); /*0x1009a9102*/
          v8 = 1; /*0x1009a9107*/
          v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009a9115*/
          if ( !v12 ) /*0x1009a911d*/
LABEL_9:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009a8e8e*/
          v13 = v12; /*0x1009a9123*/
        }
        else
        {
          v13 = 1; /*0x1009a9132*/
        }
        memcpy((void *)v13, v6, v7); /*0x1009a9141*/
        if ( v5 ) /*0x1009a9149*/
          *(double *)a2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009a9156*/
        LOBYTE(v24[1]) = 3; /*0x1009a915b*/
        v24[2] = v7; /*0x1009a9162*/
        v24[3] = v13; /*0x1009a9169*/
        v24[4] = v7; /*0x1009a9170*/
        v24[0] = 0x8000000000000000LL; /*0x1009a9177*/
      }
      else
      {
        qmemcpy(v24, v22, sizeof(v24)); /*0x1009a90fb*/
      }
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hb1fb29ad2b9e3b21(v23); /*0x1009a918c*/
    }
    else
    {
      v23[4] = v24[3]; /*0x1009a8f52*/
      v23[3] = v24[2]; /*0x1009a8f60*/
      v23[2] = v24[1]; /*0x1009a8f75*/
      v23[1] = v24[0]; /*0x1009a8f7c*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009a8f96*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a8fa9*/
      v25[0] = *((_QWORD *)__src + 110); /*0x1009a8fb0*/
      v25[1] = v10; /*0x1009a8fb7*/
      v25[2] = *((_QWORD *)__src + 112); /*0x1009a8fc5*/
      v23[0] = 1; /*0x1009a8fda*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a8ff6*/
        v17,
        v21[48],
        v23,
        v25,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      if ( v41 ) /*0x1009a900c*/
        *(double *)a2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v41, 1); /*0x1009a901b*/
    }
  }
  else
  {
    v23[4] = v35; /*0x1009a8e9f*/
    v23[3] = v34; /*0x1009a8eaa*/
    v23[2] = v33; /*0x1009a8eb9*/
    v23[1] = v32; /*0x1009a8ec0*/
    memcpy(v18, __srca, sizeof(v18)); /*0x1009a8eda*/
    v9 = *((_QWORD *)__src + 111); /*0x1009a8eed*/
    v26[0] = *((_QWORD *)__src + 110); /*0x1009a8ef4*/
    v26[1] = v9; /*0x1009a8efb*/
    v26[2] = *((_QWORD *)__src + 112); /*0x1009a8f09*/
    v23[0] = 1; /*0x1009a8f1e*/
    LODWORD(v41) = 0; /*0x1009a8f29*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a8f41*/
      v18,
      v21[48],
      v23,
      v26,
      LODWORD(v21[49]),
      HIDWORD(v21[49]));
  }
LABEL_24:
  if ( v36 != 0x8000000000000000LL ) /*0x1009a9195*/
  {
    v14 = v37; /*0x1009a9197*/
    for ( i = v38 + 1; i != 1; --i ) /*0x1009a919f*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x1009a91bd*/
      v14 += 96; /*0x1009a91c2*/
    }
    if ( v36 ) /*0x1009a91ce*/
      *(double *)a2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 96 * v36, 8); /*0x1009a91e1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, *(double *)a2.i64); /*0x1009a91f2*/
}