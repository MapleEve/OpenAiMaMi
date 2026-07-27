// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099e720 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h221b919ffd19240a(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  const char *v3; // rax
  __int64 *v4; // r12
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 i; // r15
  __int64 v15; // rax
  __int64 v16; // r12
  _BYTE v17[360]; // [rsp+0h] [rbp-B30h] BYREF
  _BYTE v18[360]; // [rsp+168h] [rbp-9C8h] BYREF
  _BYTE v19[360]; // [rsp+2D0h] [rbp-860h] BYREF
  _QWORD __dst[65]; // [rsp+438h] [rbp-6F8h] BYREF
  _QWORD v21[50]; // [rsp+640h] [rbp-4F0h] BYREF
  _QWORD v22[14]; // [rsp+7D0h] [rbp-360h] BYREF
  _QWORD v23[50]; // [rsp+840h] [rbp-2F0h] BYREF
  _QWORD v24[14]; // [rsp+9D0h] [rbp-160h] BYREF
  _QWORD v25[3]; // [rsp+A40h] [rbp-F0h] BYREF
  _QWORD v26[3]; // [rsp+A58h] [rbp-D8h] BYREF
  _QWORD v27[3]; // [rsp+A70h] [rbp-C0h] BYREF
  _QWORD v28[3]; // [rsp+A88h] [rbp-A8h] BYREF
  _QWORD v29[4]; // [rsp+AA0h] [rbp-90h] BYREF
  __int64 v30; // [rsp+AC0h] [rbp-70h] BYREF
  __int64 *v31; // [rsp+AC8h] [rbp-68h]
  __int64 v32; // [rsp+AD0h] [rbp-60h]
  __int64 v33; // [rsp+AD8h] [rbp-58h]
  __int64 v34; // [rsp+AE0h] [rbp-50h] BYREF
  __int64 v35; // [rsp+AE8h] [rbp-48h]
  __int64 v36; // [rsp+AF0h] [rbp-40h]
  void *__srca; // [rsp+AF8h] [rbp-38h]
  int v38; // [rsp+B00h] [rbp-30h]
  unsigned __int8 v39; // [rsp+B07h] [rbp-29h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099e749*/
  __srca = __src + 520; /*0x10099e761*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x10099e765*/
  v36 = *((_QWORD *)__src + 117); /*0x10099e771*/
  v2 = *((_QWORD *)__src + 115); /*0x10099e775*/
  v35 = *((_QWORD *)__src + 116); /*0x10099e783*/
  v34 = v2; /*0x10099e787*/
  v23[6] = 0; /*0x10099e78b*/
  v23[0] = "set_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update"; /*0x10099e79d*/
  v23[1] = 20; /*0x10099e7a4*/
  v3 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10099e7af*/
  v23[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10099e7b6*/
  v23[3] = 4; /*0x10099e7bd*/
  v23[4] = __dst; /*0x10099e7c8*/
  v23[5] = &v34; /*0x10099e7d3*/
  LOBYTE(v3) = 1; /*0x10099e7e5*/
  v38 = (int)v3; /*0x10099e7e7*/
  v4 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x10099e7ef*/
  if ( !v4 ) /*0x10099e7f5*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x10099e809*/
      &v30,
      v23,
      &v23[2]);
    if ( (_BYTE)v30 != 6 ) /*0x10099e812*/
    {
      v23[4] = v33; /*0x10099eb02*/
      v23[3] = v32; /*0x10099eb0d*/
      v23[2] = v31; /*0x10099eb1c*/
      v23[1] = v30; /*0x10099eb23*/
      memcpy(v19, __srca, sizeof(v19)); /*0x10099eb3d*/
      v11 = *((_QWORD *)__src + 111); /*0x10099eb50*/
      v27[0] = *((_QWORD *)__src + 110); /*0x10099eb57*/
      v27[1] = v11; /*0x10099eb5e*/
      v27[2] = *((_QWORD *)__src + 112); /*0x10099eb6c*/
      v23[0] = 1; /*0x10099eb81*/
      v38 = 0; /*0x10099eb8c*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099eba4*/
        v19,
        v21[48],
        v23,
        v27,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      goto LABEL_13; /*0x10099eba4*/
    }
    v4 = v31; /*0x10099e818*/
  }
  v23[6] = 0; /*0x10099e81c*/
  v23[0] = "set_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update"; /*0x10099e827*/
  v23[1] = 20; /*0x10099e82e*/
  v23[2] = "modepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10099e840*/
  v23[3] = 4; /*0x10099e847*/
  v23[4] = __dst; /*0x10099e852*/
  v23[5] = &v34; /*0x10099e859*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h5bbcf6f52fa2a77c(v29, v23); /*0x10099e86e*/
  if ( LOBYTE(v29[0]) == 6 ) /*0x10099e87a*/
  {
    v39 = BYTE1(v29[0]); /*0x10099e887*/
    v23[6] = 0; /*0x10099e88a*/
    v23[0] = "set_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update"; /*0x10099e895*/
    v23[1] = 20; /*0x10099e89c*/
    v23[2] = "urlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099e8ae*/
    v23[3] = 3; /*0x10099e8b5*/
    v23[4] = __dst; /*0x10099e8c0*/
    v23[5] = &v34; /*0x10099e8c7*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(v24, v23); /*0x10099e8dc*/
    if ( LOBYTE(v24[0]) == 6 ) /*0x10099e8e8*/
    {
      v28[2] = v24[3]; /*0x10099e8f5*/
      v28[1] = v24[2]; /*0x10099e90a*/
      v28[0] = v24[1]; /*0x10099e911*/
      codexmate_lib::commands::system::set_api_proxy_config::hf56921607dbc87f1(v22, v4, v39, v28); /*0x10099e92d*/
      memcpy(v23, __srca, sizeof(v23)); /*0x10099e942*/
      if ( v22[0] == 0x8000000000000000LL ) /*0x10099e958*/
      {
        v5 = v22[1]; /*0x10099e95e*/
        v6 = (const void *)v22[2]; /*0x10099e965*/
        v7 = v22[3]; /*0x10099e96c*/
        if ( v22[3] < 0LL ) /*0x10099e976*/
        {
          v8 = 0; /*0x10099e97c*/
          goto LABEL_9; /*0x10099e97c*/
        }
        if ( v22[3] ) /*0x10099ec3c*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, __srca); /*0x10099ec3e*/
          v8 = 1; /*0x10099ec43*/
          v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x10099ec51*/
          if ( !v15 ) /*0x10099ec59*/
LABEL_9:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x10099e97f*/
          v16 = v15; /*0x10099ec5f*/
        }
        else
        {
          v16 = 1; /*0x10099ec64*/
        }
        memcpy((void *)v16, v6, v7); /*0x10099ec73*/
        if ( v5 ) /*0x10099ec7b*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x10099ec88*/
        LOBYTE(v24[1]) = 3; /*0x10099ec8d*/
        v24[2] = v7; /*0x10099ec94*/
        v24[3] = v16; /*0x10099ec9b*/
        v24[4] = v7; /*0x10099eca2*/
        v24[0] = 0x8000000000000000LL; /*0x10099ecb3*/
      }
      else
      {
        qmemcpy(v24, v22, sizeof(v24)); /*0x10099ec37*/
      }
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h6168ebd00c3eccfc(v23); /*0x10099ecc8*/
    }
    else
    {
      v23[4] = v24[3]; /*0x10099ea49*/
      v23[3] = v24[2]; /*0x10099ea57*/
      v23[2] = v24[1]; /*0x10099ea6c*/
      v23[1] = v24[0]; /*0x10099ea73*/
      memcpy(v17, __srca, sizeof(v17)); /*0x10099ea8d*/
      v10 = *((_QWORD *)__src + 111); /*0x10099eaa0*/
      v25[0] = *((_QWORD *)__src + 110); /*0x10099eaa7*/
      v25[1] = v10; /*0x10099eaae*/
      v25[2] = *((_QWORD *)__src + 112); /*0x10099eabc*/
      v23[0] = 1; /*0x10099ead1*/
      v38 = 0; /*0x10099eadc*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099eaf4*/
        v17,
        v21[48],
        v23,
        v25,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
    }
  }
  else
  {
    v23[4] = v29[3]; /*0x10099e990*/
    v23[3] = v29[2]; /*0x10099e99b*/
    v23[2] = v29[1]; /*0x10099e9b0*/
    v23[1] = v29[0]; /*0x10099e9b7*/
    memcpy(v18, __srca, sizeof(v18)); /*0x10099e9d1*/
    v9 = *((_QWORD *)__src + 111); /*0x10099e9e4*/
    v26[0] = *((_QWORD *)__src + 110); /*0x10099e9eb*/
    v26[1] = v9; /*0x10099e9f2*/
    v26[2] = *((_QWORD *)__src + 112); /*0x10099ea00*/
    v23[0] = 1; /*0x10099ea15*/
    v38 = 0; /*0x10099ea20*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099ea38*/
      v18,
      v21[48],
      v23,
      v26,
      LODWORD(v21[49]),
      HIDWORD(v21[49]));
  }
LABEL_13:
  if ( v34 != 0x8000000000000000LL ) /*0x10099ebb7*/
  {
    v12 = v35; /*0x10099ebb9*/
    for ( i = v36 + 1; i != 1; --i ) /*0x10099ebc1*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v12); /*0x10099ebdd*/
      v12 += 96; /*0x10099ebe2*/
    }
    if ( v34 ) /*0x10099ebee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 96 * v34, 8); /*0x10099ec01*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099ec12*/
}