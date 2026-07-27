// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099ce50 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h17d833c58a6941c9(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  char *v3; // rax
  _QWORD *v4; // r12
  unsigned __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+0h] [rbp-930h] BYREF
  _BYTE v17[360]; // [rsp+168h] [rbp-7C8h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-660h] BYREF
  _QWORD v19[50]; // [rsp+4D8h] [rbp-458h] BYREF
  unsigned __int64 v20[10]; // [rsp+668h] [rbp-2C8h] BYREF
  _QWORD v21[50]; // [rsp+6B8h] [rbp-278h] BYREF
  _QWORD v22[3]; // [rsp+848h] [rbp-E8h] BYREF
  _QWORD v23[3]; // [rsp+860h] [rbp-D0h] BYREF
  _QWORD v24[10]; // [rsp+878h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+8C8h] [rbp-68h] BYREF
  _QWORD *v26; // [rsp+8D0h] [rbp-60h]
  __int64 v27; // [rsp+8D8h] [rbp-58h]
  __int64 v28; // [rsp+8E0h] [rbp-50h]
  __int64 v29; // [rsp+8E8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+8F0h] [rbp-40h]
  __int64 v31; // [rsp+8F8h] [rbp-38h]
  int v32; // [rsp+904h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099ce79*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x10099ce94*/
  v31 = *((_QWORD *)__src + 117); /*0x10099cea0*/
  v2 = *((_QWORD *)__src + 115); /*0x10099cea4*/
  v30 = *((_QWORD *)__src + 116); /*0x10099ceb2*/
  v29 = v2; /*0x10099ceb6*/
  v21[6] = 0; /*0x10099ceba*/
  v21[0] = "set_image_compatload_relay_stateget_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister"; /*0x10099cecc*/
  v21[1] = 16; /*0x10099ced3*/
  v3 = "mutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099cede*/
  v21[2] = "mutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099cee5*/
  v21[3] = 12; /*0x10099ceec*/
  v21[4] = __dst; /*0x10099cef7*/
  v21[5] = &v29; /*0x10099cf02*/
  LOBYTE(v3) = 1; /*0x10099cf14*/
  v32 = (int)v3; /*0x10099cf16*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h18d7865deb554c60(__dst[64] + 16LL); /*0x10099cf1e*/
  if ( !v4 ) /*0x10099cf24*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x10099cf38*/
      &v25,
      v21,
      &v21[2]);
    if ( (_BYTE)v25 != 6 ) /*0x10099cf41*/
    {
      v21[4] = v28; /*0x10099d0fb*/
      v21[3] = v27; /*0x10099d106*/
      v21[2] = v26; /*0x10099d115*/
      v21[1] = v25; /*0x10099d11c*/
      memcpy(v17, __src + 520, sizeof(v17)); /*0x10099d135*/
      v10 = *((_QWORD *)__src + 111); /*0x10099d148*/
      v23[0] = *((_QWORD *)__src + 110); /*0x10099d14f*/
      v23[1] = v10; /*0x10099d156*/
      v23[2] = *((_QWORD *)__src + 112); /*0x10099d164*/
      v21[0] = 1; /*0x10099d179*/
      v32 = 0; /*0x10099d184*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099d19c*/
        v17,
        v19[48],
        v21,
        v23,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_21; /*0x10099d19c*/
    }
    v4 = v26; /*0x10099cf47*/
  }
  v21[6] = 0; /*0x10099cf4b*/
  v21[0] = "set_image_compatload_relay_stateget_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister"; /*0x10099cf56*/
  v21[1] = 16; /*0x10099cf5d*/
  v21[2] = "enabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099cf6f*/
  v21[3] = 7; /*0x10099cf76*/
  v21[4] = __dst; /*0x10099cf88*/
  v21[5] = &v29; /*0x10099cf8f*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hd3dee5410a5f5aeb(v24, v21); /*0x10099cfa4*/
  if ( LOBYTE(v24[0]) == 6 ) /*0x10099cfb0*/
  {
    codexmate_lib::commands::system::set_image_compat::h80448e089726808c(v20, v4, BYTE1(v24[0]), a2); /*0x10099cfc3*/
    memcpy(v21, __src + 520, sizeof(v21)); /*0x10099cfd7*/
    if ( v20[0] == 0x8000000000000000LL ) /*0x10099cfed*/
    {
      v5 = v20[1]; /*0x10099cff3*/
      v6 = (const void *)v20[2]; /*0x10099cffa*/
      v7 = v20[3]; /*0x10099d001*/
      if ( (v20[3] & 0x8000000000000000LL) != 0LL ) /*0x10099d00b*/
      {
        v8 = 0; /*0x10099d011*/
        goto LABEL_8; /*0x10099d011*/
      }
      if ( v20[3] ) /*0x10099d1b0*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, __src + 520); /*0x10099d1b2*/
        v8 = 1; /*0x10099d1b7*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x10099d1c5*/
        if ( !v11 ) /*0x10099d1cd*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x10099d014*/
        v12 = v11; /*0x10099d1d3*/
      }
      else
      {
        v12 = 1; /*0x10099d1d8*/
      }
      memcpy((void *)v12, v6, v7); /*0x10099d1e7*/
      if ( v5 ) /*0x10099d1ef*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x10099d1fc*/
      LOBYTE(v24[1]) = 3; /*0x10099d201*/
      v24[2] = v7; /*0x10099d208*/
      v24[3] = v12; /*0x10099d20f*/
      v24[4] = v7; /*0x10099d216*/
      v24[0] = 0x8000000000000000LL; /*0x10099d227*/
    }
    else
    {
      qmemcpy(v24, v20, sizeof(v24)); /*0x10099d0ef*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h2769c9ed096da6a4(v21); /*0x10099d23c*/
  }
  else
  {
    v21[4] = v24[3]; /*0x10099d028*/
    v21[3] = v24[2]; /*0x10099d036*/
    v21[2] = v24[1]; /*0x10099d04b*/
    v21[1] = v24[0]; /*0x10099d052*/
    memcpy(v16, __src + 520, sizeof(v16)); /*0x10099d06b*/
    v9 = *((_QWORD *)__src + 111); /*0x10099d07e*/
    v22[0] = *((_QWORD *)__src + 110); /*0x10099d085*/
    v22[1] = v9; /*0x10099d08c*/
    v22[2] = *((_QWORD *)__src + 112); /*0x10099d09a*/
    v21[0] = 1; /*0x10099d0af*/
    v32 = 0; /*0x10099d0ba*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099d0d2*/
      v16,
      v19[48],
      v21,
      v22,
      LODWORD(v19[49]),
      HIDWORD(v19[49]));
  }
LABEL_21:
  if ( v29 != 0x8000000000000000LL ) /*0x10099d245*/
  {
    v13 = v30; /*0x10099d247*/
    for ( i = v31 + 1; i != 1; --i ) /*0x10099d24f*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x10099d26d*/
      v13 += 96; /*0x10099d272*/
    }
    if ( v29 ) /*0x10099d27e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 96 * v29, 8); /*0x10099d291*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099d2a2*/
}