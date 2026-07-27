// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ada40 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb24eff03e6c8864c(
        char *__src,
        double a2,
        double a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // r14
  const void *v8; // r13
  size_t v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 i; // r15
  _BYTE v17[360]; // [rsp+0h] [rbp-E00h] BYREF
  _BYTE v18[360]; // [rsp+168h] [rbp-C98h] BYREF
  _BYTE v19[360]; // [rsp+2D0h] [rbp-B30h] BYREF
  _QWORD v20[22]; // [rsp+438h] [rbp-9C8h] BYREF
  _QWORD __dst[65]; // [rsp+4E8h] [rbp-918h] BYREF
  _QWORD v22[39]; // [rsp+6F0h] [rbp-710h] BYREF
  _QWORD v23[50]; // [rsp+828h] [rbp-5D8h] BYREF
  _QWORD __srca[39]; // [rsp+9B8h] [rbp-448h] BYREF
  _BYTE v25[152]; // [rsp+AF0h] [rbp-310h] BYREF
  _QWORD v26[50]; // [rsp+B88h] [rbp-278h] BYREF
  _QWORD v27[3]; // [rsp+D18h] [rbp-E8h] BYREF
  _QWORD v28[3]; // [rsp+D30h] [rbp-D0h] BYREF
  _QWORD v29[3]; // [rsp+D48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+D60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+D68h] [rbp-98h]
  char *v32; // [rsp+D70h] [rbp-90h]
  __int64 v33; // [rsp+D78h] [rbp-88h]
  _QWORD *v34; // [rsp+D80h] [rbp-80h]
  __int64 *v35; // [rsp+D88h] [rbp-78h]
  __int64 v36; // [rsp+D90h] [rbp-70h]
  __int64 v37; // [rsp+DA0h] [rbp-60h] BYREF
  _QWORD *v38; // [rsp+DA8h] [rbp-58h]
  __int64 v39; // [rsp+DB0h] [rbp-50h]
  __int64 v40; // [rsp+DB8h] [rbp-48h]
  __int64 v41; // [rsp+DC0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+DC8h] [rbp-38h]
  __int64 v43; // [rsp+DD0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ada69*/
  memcpy(v23, __src + 520, sizeof(v23)); /*0x1009ada84*/
  v43 = *((_QWORD *)__src + 117); /*0x1009ada90*/
  v3 = *((_QWORD *)__src + 115); /*0x1009ada94*/
  v42 = *((_QWORD *)__src + 116); /*0x1009adaa2*/
  v41 = v3; /*0x1009adaa6*/
  v26[6] = 0; /*0x1009adaaa*/
  v26[0] = "upsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009adabc*/
  v26[1] = 21; /*0x1009adac3*/
  v26[2] = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009adad5*/
  v26[3] = 3; /*0x1009adadc*/
  v26[4] = __dst; /*0x1009adae7*/
  v26[5] = &v41; /*0x1009adaf2*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009adb0a*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009adb20*/
  {
    memcpy(v25, __srca, sizeof(v25)); /*0x1009adbf0*/
    v26[6] = 0; /*0x1009adbf5*/
    v26[0] = "upsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009adc07*/
    v26[1] = 21; /*0x1009adc0e*/
    v26[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009adc20*/
    v26[3] = 7; /*0x1009adc27*/
    v26[4] = __dst; /*0x1009adc32*/
    v26[5] = &v41; /*0x1009adc3d*/
    v5 = (_QWORD *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009adc54*/
    if ( !v5 ) /*0x1009adc5a*/
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009adc6e*/
        &v37,
        v26,
        &v26[2]);
      if ( (_BYTE)v37 != 6 ) /*0x1009adc77*/
      {
        v26[4] = v40; /*0x1009ade61*/
        v26[3] = v39; /*0x1009ade6c*/
        v26[2] = v38; /*0x1009ade7b*/
        v26[1] = v37; /*0x1009ade82*/
        memcpy(v18, __src + 520, sizeof(v18)); /*0x1009ade9b*/
        v11 = *((_QWORD *)__src + 111); /*0x1009adeae*/
        v28[0] = *((_QWORD *)__src + 110); /*0x1009adeb5*/
        v28[1] = v11; /*0x1009adebc*/
        v28[2] = *((_QWORD *)__src + 112); /*0x1009adeca*/
        v26[0] = 1; /*0x1009adedf*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009adefe*/
          v18,
          v23[48],
          v26,
          v28,
          LODWORD(v23[49]),
          HIDWORD(v23[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v25); /*0x1009adf0d*/
        goto LABEL_22; /*0x1009adf1c*/
      }
      v5 = v38; /*0x1009adc7d*/
    }
    v36 = 0; /*0x1009adc81*/
    v30 = (__int64)"upsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009adc89*/
    v31 = 21; /*0x1009adc90*/
    v32 = "inputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009adca2*/
    v33 = 5; /*0x1009adca9*/
    v34 = __dst; /*0x1009adcb4*/
    v35 = &v41; /*0x1009adcbc*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h65a044b9b7eff33a(v26); /*0x1009adcd1*/
    if ( v26[0] == 0x8000000000000000LL ) /*0x1009adce7*/
    {
      v34 = (_QWORD *)v26[4]; /*0x1009adcf4*/
      v33 = v26[3]; /*0x1009adcff*/
      v32 = (char *)v26[2]; /*0x1009add14*/
      v31 = v26[1]; /*0x1009add1b*/
      memcpy(v17, __src + 520, sizeof(v17)); /*0x1009add34*/
      v6 = *((_QWORD *)__src + 111); /*0x1009add47*/
      v27[0] = *((_QWORD *)__src + 110); /*0x1009add4e*/
      v27[1] = v6; /*0x1009add55*/
      v27[2] = *((_QWORD *)__src + 112); /*0x1009add63*/
      v30 = 1; /*0x1009add78*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009add94*/
        v17,
        v23[48],
        &v30,
        v27,
        LODWORD(v23[49]),
        HIDWORD(v23[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v25); /*0x1009adda3*/
      goto LABEL_22; /*0x1009addb2*/
    }
    memcpy(v20, v26, sizeof(v20)); /*0x1009addcd*/
    codexmate_lib::commands::relay::upsert_relay_provider::haed180b7ea673c1f(v22, (__int64)v25, v5, v20, a2, a3); /*0x1009adde6*/
    memcpy(v26, __src + 520, sizeof(v26)); /*0x1009addfa*/
    if ( v22[0] == 0x8000000000000000LL ) /*0x1009ade10*/
    {
      v7 = v22[1]; /*0x1009ade12*/
      v8 = (const void *)v22[2]; /*0x1009ade19*/
      v9 = v22[3]; /*0x1009ade20*/
      if ( v22[3] < 0LL ) /*0x1009ade2a*/
      {
        v10 = 0; /*0x1009ade30*/
        goto LABEL_11; /*0x1009ade30*/
      }
      if ( v22[3] ) /*0x1009adf21*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, __src + 520); /*0x1009adf23*/
        v10 = 1; /*0x1009adf28*/
        v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1009adf36*/
        if ( !v12 ) /*0x1009adf3e*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1009ade33*/
        v13 = v12; /*0x1009adf44*/
      }
      else
      {
        v13 = 1; /*0x1009adf49*/
      }
      memcpy((void *)v13, v8, v9); /*0x1009adf58*/
      if ( v7 ) /*0x1009adf60*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1009adf6d*/
      LOBYTE(__srca[1]) = 3; /*0x1009adf72*/
      __srca[2] = v9; /*0x1009adf79*/
      __srca[3] = v13; /*0x1009adf80*/
      __srca[4] = v9; /*0x1009adf87*/
      __srca[0] = 0x8000000000000000LL; /*0x1009adf98*/
    }
    else
    {
      memcpy(__srca, v22, sizeof(__srca)); /*0x1009ade53*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcb0ecec32d9a0cca(v26, __srca); /*0x1009adfad*/
    goto LABEL_22; /*0x1009adfad*/
  }
  v26[4] = __srca[4]; /*0x1009adb2d*/
  v26[3] = __srca[3]; /*0x1009adb3b*/
  v26[2] = __srca[2]; /*0x1009adb50*/
  v26[1] = __srca[1]; /*0x1009adb57*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009adb70*/
  v4 = *((_QWORD *)__src + 111); /*0x1009adb83*/
  v29[0] = *((_QWORD *)__src + 110); /*0x1009adb8a*/
  v29[1] = v4; /*0x1009adb91*/
  v29[2] = *((_QWORD *)__src + 112); /*0x1009adb9f*/
  v26[0] = 1; /*0x1009adbb4*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009adbd3*/
    v19,
    v23[48],
    v26,
    v29,
    LODWORD(v23[49]),
    HIDWORD(v23[49]));
LABEL_22:
  if ( v41 != 0x8000000000000000LL ) /*0x1009adfb6*/
  {
    v14 = v42; /*0x1009adfb8*/
    for ( i = v43 + 1; i != 1; --i ) /*0x1009adfc0*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x1009adfdd*/
      v14 += 96; /*0x1009adfe2*/
    }
    if ( v41 ) /*0x1009adfee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, 96 * v41, 8); /*0x1009ae001*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ae012*/
}