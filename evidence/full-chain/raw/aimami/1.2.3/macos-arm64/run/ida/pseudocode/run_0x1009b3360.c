// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b3360 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc5ae4d6813470a75(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rcx
  void *v7; // r15
  size_t v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+8h] [rbp-B18h] BYREF
  _BYTE v17[360]; // [rsp+170h] [rbp-9B0h] BYREF
  _BYTE v18[360]; // [rsp+2D8h] [rbp-848h] BYREF
  _QWORD __dst[65]; // [rsp+440h] [rbp-6E0h] BYREF
  _QWORD __srca[50]; // [rsp+648h] [rbp-4D8h] BYREF
  _QWORD v21[50]; // [rsp+7D8h] [rbp-348h] BYREF
  _QWORD v22[19]; // [rsp+968h] [rbp-1B8h] BYREF
  _QWORD v23[3]; // [rsp+A00h] [rbp-120h] BYREF
  _QWORD v24[3]; // [rsp+A18h] [rbp-108h] BYREF
  _QWORD v25[3]; // [rsp+A30h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+A48h] [rbp-D8h] BYREF
  void *v27; // [rsp+A50h] [rbp-D0h]
  size_t __n; // [rsp+A58h] [rbp-C8h]
  _QWORD v29[4]; // [rsp+A60h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+A80h] [rbp-A0h] BYREF
  char *v31; // [rsp+A88h] [rbp-98h]
  __int64 v32; // [rsp+A90h] [rbp-90h]
  _QWORD *v33; // [rsp+A98h] [rbp-88h]
  __int64 v34; // [rsp+AA0h] [rbp-80h] BYREF
  __int64 v35; // [rsp+AA8h] [rbp-78h]
  __int64 v36; // [rsp+AB0h] [rbp-70h]
  __int64 v37; // [rsp+AB8h] [rbp-68h] BYREF
  __int64 v38; // [rsp+AC0h] [rbp-60h]
  char *v39; // [rsp+AC8h] [rbp-58h] BYREF
  __int64 v40; // [rsp+AD0h] [rbp-50h]
  _QWORD *v41; // [rsp+AD8h] [rbp-48h]
  __int64 *v42; // [rsp+AE0h] [rbp-40h]
  __int64 v43; // [rsp+AE8h] [rbp-38h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b3389*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x1009b33a4*/
  v36 = *((_QWORD *)__src + 117); /*0x1009b33b0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b33b4*/
  v35 = *((_QWORD *)__src + 116); /*0x1009b33c2*/
  v34 = v2; /*0x1009b33c6*/
  v43 = 0; /*0x1009b33ca*/
  v37 = (__int64)"set_hotspot_enabledfocus_main_windowhotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009b33d9*/
  v38 = 19; /*0x1009b33dd*/
  v39 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b33ec*/
  v40 = 3; /*0x1009b33f0*/
  v41 = __dst; /*0x1009b33f8*/
  v42 = &v34; /*0x1009b3400*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009b3412*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009b3428*/
  {
    memcpy(v22, __srca, sizeof(v22)); /*0x1009b34e6*/
    v43 = 0; /*0x1009b34eb*/
    v37 = (__int64)"set_hotspot_enabledfocus_main_windowhotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009b34fa*/
    v38 = 19; /*0x1009b34fe*/
    v39 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009b350d*/
    v40 = 4; /*0x1009b3511*/
    v41 = __dst; /*0x1009b3519*/
    v42 = &v34; /*0x1009b3521*/
    v4 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009b3535*/
    if ( !v4 ) /*0x1009b353b*/
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009b354c*/
        &v30,
        &v37,
        &v39);
      if ( (_BYTE)v30 != 6 ) /*0x1009b3558*/
      {
        v41 = v33; /*0x1009b3701*/
        v40 = v32; /*0x1009b370c*/
        v39 = v31; /*0x1009b371e*/
        v38 = v30; /*0x1009b3722*/
        memcpy(v17, __src + 520, sizeof(v17)); /*0x1009b3738*/
        v10 = *((_QWORD *)__src + 111); /*0x1009b374b*/
        v24[0] = *((_QWORD *)__src + 110); /*0x1009b3752*/
        v24[1] = v10; /*0x1009b3759*/
        v24[2] = *((_QWORD *)__src + 112); /*0x1009b3767*/
        v37 = 1; /*0x1009b377c*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b3795*/
          v17,
          v21[48],
          &v37,
          v24,
          LODWORD(v21[49]),
          HIDWORD(v21[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v22); /*0x1009b37a4*/
        goto LABEL_22; /*0x1009b37b3*/
      }
      v4 = (__int64 *)v31; /*0x1009b355e*/
    }
    v43 = 0; /*0x1009b3565*/
    v37 = (__int64)"set_hotspot_enabledfocus_main_windowhotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009b356d*/
    v38 = 19; /*0x1009b3571*/
    v39 = "enabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b3580*/
    v40 = 7; /*0x1009b3584*/
    v41 = __dst; /*0x1009b358c*/
    v42 = &v34; /*0x1009b3594*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hd3dee5410a5f5aeb(v29, &v37); /*0x1009b35a6*/
    if ( LOBYTE(v29[0]) != 6 ) /*0x1009b35b2*/
    {
      v41 = (_QWORD *)v29[3]; /*0x1009b361f*/
      v40 = v29[2]; /*0x1009b362a*/
      v39 = (char *)v29[1]; /*0x1009b363c*/
      v38 = v29[0]; /*0x1009b3640*/
      memcpy(v16, __src + 520, sizeof(v16)); /*0x1009b3656*/
      v6 = *((_QWORD *)__src + 111); /*0x1009b3669*/
      v23[0] = *((_QWORD *)__src + 110); /*0x1009b3670*/
      v23[1] = v6; /*0x1009b3677*/
      v23[2] = *((_QWORD *)__src + 112); /*0x1009b3685*/
      v37 = 1; /*0x1009b369a*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b36b0*/
        v16,
        v21[48],
        &v37,
        v23,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v22); /*0x1009b36bf*/
      goto LABEL_22; /*0x1009b36ce*/
    }
    codexmate_lib::commands::hotspot::set_hotspot_enabled::h51292592b27a8b15( /*0x1009b35cc*/
      (__int64)&v26,
      (__int64)v22,
      v4,
      SBYTE1(v29[0]));
    memcpy(__srca, __src + 520, sizeof(__srca)); /*0x1009b35e0*/
    v5 = v26; /*0x1009b35e5*/
    if ( v26 == 0x8000000000000000LL ) /*0x1009b35f9*/
    {
      BYTE1(v22[0]) = (_BYTE)v27; /*0x1009b3606*/
      LOBYTE(v22[0]) = 6; /*0x1009b360c*/
LABEL_21:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hec5d67e463ed9f2c(__srca); /*0x1009b382f*/
      goto LABEL_22; /*0x1009b383d*/
    }
    v7 = v27; /*0x1009b36d3*/
    v8 = __n; /*0x1009b36da*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009b36e4*/
    {
      v9 = 0; /*0x1009b36ea*/
      goto LABEL_12; /*0x1009b36ea*/
    }
    if ( __n ) /*0x1009b37b8*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, __src + 520); /*0x1009b37ba*/
      v9 = 1; /*0x1009b37bf*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009b37cd*/
      if ( !v11 ) /*0x1009b37d5*/
LABEL_12:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009b36ed*/
      v12 = v11; /*0x1009b37db*/
    }
    else
    {
      v12 = 1; /*0x1009b37e0*/
    }
    memcpy((void *)v12, v7, v8); /*0x1009b37ef*/
    if ( v5 ) /*0x1009b37f7*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v5, 1); /*0x1009b3804*/
    LOBYTE(v22[0]) = 3; /*0x1009b3809*/
    v22[1] = v8; /*0x1009b3810*/
    v22[2] = v12; /*0x1009b3817*/
    v22[3] = v8; /*0x1009b381e*/
    goto LABEL_21; /*0x1009b381e*/
  }
  v41 = (_QWORD *)__srca[4]; /*0x1009b3435*/
  v40 = __srca[3]; /*0x1009b3440*/
  v39 = (char *)__srca[2]; /*0x1009b3452*/
  v38 = __srca[1]; /*0x1009b3456*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1009b346c*/
  v3 = *((_QWORD *)__src + 111); /*0x1009b347f*/
  v25[0] = *((_QWORD *)__src + 110); /*0x1009b3486*/
  v25[1] = v3; /*0x1009b348d*/
  v25[2] = *((_QWORD *)__src + 112); /*0x1009b349b*/
  v37 = 1; /*0x1009b34b0*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b34c9*/
    v18,
    v21[48],
    &v37,
    v25,
    LODWORD(v21[49]),
    HIDWORD(v21[49]));
LABEL_22:
  if ( v34 != 0x8000000000000000LL ) /*0x1009b3846*/
  {
    v13 = v35; /*0x1009b3848*/
    for ( i = v36 + 1; i != 1; --i ) /*0x1009b3850*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009b386d*/
      v13 += 96; /*0x1009b3872*/
    }
    if ( v34 ) /*0x1009b387e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 96 * v34, 8); /*0x1009b3891*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b38a2*/
}