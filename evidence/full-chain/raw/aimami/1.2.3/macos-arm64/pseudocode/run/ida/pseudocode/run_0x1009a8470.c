// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a8470 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h771ae226bae7df41(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // r14
  const void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-A08h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-8A0h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-698h] BYREF
  _QWORD __srca[50]; // [rsp+508h] [rbp-508h] BYREF
  _QWORD v18[50]; // [rsp+698h] [rbp-378h] BYREF
  _QWORD v19[50]; // [rsp+828h] [rbp-1E8h] BYREF
  _QWORD v20[3]; // [rsp+9B8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+9D0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+9D8h] [rbp-38h]
  __int64 v23; // [rsp+9E0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a8499*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a84b4*/
  v23 = *((_QWORD *)__src + 117); /*0x1009a84c0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a84c4*/
  v22 = *((_QWORD *)__src + 116); /*0x1009a84d2*/
  v21 = v2; /*0x1009a84d6*/
  v19[6] = 0; /*0x1009a84da*/
  v19[0] = "diagnose_codex_routerrun_codex_router_diagnosticsfix_codex_router_issueexport_relay_configimport_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a84ec*/
  v19[1] = 21; /*0x1009a84f3*/
  v19[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a8505*/
  v19[3] = 7; /*0x1009a850c*/
  v19[4] = __dst; /*0x1009a8517*/
  v19[5] = &v21; /*0x1009a8522*/
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009a8537*/
  if ( !v3 ) /*0x1009a8549*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a8560*/
      v18,
      v19,
      &v19[2]);
    if ( LOBYTE(v18[0]) != 6 ) /*0x1009a856c*/
    {
      v19[4] = v18[3]; /*0x1009a8628*/
      v19[3] = v18[2]; /*0x1009a8636*/
      v19[2] = v18[1]; /*0x1009a864b*/
      v19[1] = v18[0]; /*0x1009a8652*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a866b*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a867e*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009a8685*/
      v20[1] = v10; /*0x1009a8689*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009a8694*/
      v19[0] = 1; /*0x1009a86a6*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a86c2*/
        v14,
        v16[48],
        v19,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009a86c7*/
    }
    v3 = (_QWORD *)v18[1]; /*0x1009a8572*/
  }
  codexmate_lib::commands::relay::diagnose_codex_router::h336627d3d3c8fd78(__srca, v3); /*0x1009a8583*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1009a8597*/
  if ( __srca[0] == 0x8000000000000000LL ) /*0x1009a85a3*/
  {
    v4 = __srca[1]; /*0x1009a85a5*/
    v5 = (const void *)__srca[2]; /*0x1009a85ac*/
    v6 = __srca[3]; /*0x1009a85b3*/
    if ( __srca[3] < 0LL ) /*0x1009a85bd*/
    {
      v7 = 0; /*0x1009a85bf*/
      goto LABEL_7; /*0x1009a85bf*/
    }
    if ( __srca[3] ) /*0x1009a85ec*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520); /*0x1009a85f2*/
      v7 = 1; /*0x1009a85f7*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a8605*/
      if ( !v8 ) /*0x1009a860d*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a85c2*/
      v9 = v8; /*0x1009a860f*/
    }
    else
    {
      v9 = 1; /*0x1009a86c9*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009a86d8*/
    if ( v4 ) /*0x1009a86e0*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a86ed*/
    LOBYTE(v19[1]) = 3; /*0x1009a86f2*/
    v19[2] = v6; /*0x1009a86f9*/
    v19[3] = v9; /*0x1009a8700*/
    v19[4] = v6; /*0x1009a8707*/
    v19[0] = 0x8000000000000000LL; /*0x1009a870e*/
  }
  else
  {
    memcpy(v19, __srca, sizeof(v19)); /*0x1009a85e2*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h574bb8b490367024(v18, v19); /*0x1009a8723*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x1009a872c*/
  {
    v11 = v22; /*0x1009a872e*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009a8736*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a874d*/
      v11 += 96; /*0x1009a8752*/
    }
    if ( v21 ) /*0x1009a875e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009a8771*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a8782*/
}