// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009aa280 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h8fa0eafe71ced944(
        char *__src,
        double a2,
        double a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-7D8h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-670h] BYREF
  _BYTE v16[152]; // [rsp+378h] [rbp-468h] BYREF
  _QWORD v17[50]; // [rsp+410h] [rbp-3D0h] BYREF
  _QWORD __srca[50]; // [rsp+5A0h] [rbp-240h] BYREF
  _QWORD v19[3]; // [rsp+730h] [rbp-B0h] BYREF
  _QWORD v20[2]; // [rsp+748h] [rbp-98h] BYREF
  size_t __n; // [rsp+758h] [rbp-88h]
  __int64 v22; // [rsp+760h] [rbp-80h] BYREF
  __int64 v23; // [rsp+768h] [rbp-78h]
  char *v24; // [rsp+770h] [rbp-70h]
  __int64 v25; // [rsp+778h] [rbp-68h]
  _BYTE *v26; // [rsp+780h] [rbp-60h]
  __int64 *v27; // [rsp+788h] [rbp-58h]
  __int64 v28; // [rsp+790h] [rbp-50h]
  __int64 v29; // [rsp+7A0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+7A8h] [rbp-38h]
  __int64 v31; // [rsp+7B0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009aa2a9*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009aa2c4*/
  v31 = *((_QWORD *)__src + 117); /*0x1009aa2d0*/
  v3 = *((_QWORD *)__src + 115); /*0x1009aa2d4*/
  v30 = *((_QWORD *)__src + 116); /*0x1009aa2e2*/
  v29 = v3; /*0x1009aa2e6*/
  v28 = 0; /*0x1009aa2ea*/
  v22 = (__int64)"focus_main_windowhotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009aa2f9*/
  v23 = 17; /*0x1009aa2fd*/
  v24 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009aa30c*/
  v25 = 3; /*0x1009aa310*/
  v26 = __dst; /*0x1009aa318*/
  v27 = &v29; /*0x1009aa320*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009aa332*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009aa348*/
  {
    memcpy(v16, __srca, sizeof(v16)); /*0x1009aa409*/
    codexmate_lib::commands::hotspot::focus_main_window::h83b1e451cc929a03(v20, (__int64)v16, a2, a3); /*0x1009aa418*/
    memcpy(__srca, __src + 520, sizeof(__srca)); /*0x1009aa42c*/
    v5 = v20[0]; /*0x1009aa431*/
    if ( v20[0] == 0x8000000000000000LL ) /*0x1009aa43b*/
    {
      LOBYTE(v22) = 6; /*0x1009aa43d*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9f6c6c7c6be4e32b(__srca); /*0x1009aa4d0*/
      goto LABEL_16; /*0x1009aa4db*/
    }
    v6 = (const void *)v20[1]; /*0x1009aa446*/
    v7 = __n; /*0x1009aa44d*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009aa457*/
    {
      v8 = 0; /*0x1009aa459*/
      goto LABEL_7; /*0x1009aa459*/
    }
    if ( __n ) /*0x1009aa469*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, __src + 520); /*0x1009aa46b*/
      v8 = 1; /*0x1009aa470*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009aa47e*/
      if ( !v9 ) /*0x1009aa486*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009aa45c*/
      v10 = v9; /*0x1009aa488*/
    }
    else
    {
      v10 = 1; /*0x1009aa497*/
    }
    memcpy((void *)v10, v6, v7); /*0x1009aa4a6*/
    if ( v5 ) /*0x1009aa4ae*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009aa4bb*/
    LOBYTE(v22) = 3; /*0x1009aa4c0*/
    v23 = v7; /*0x1009aa4c4*/
    v24 = (char *)v10; /*0x1009aa4c8*/
    v25 = v7; /*0x1009aa4cc*/
    goto LABEL_15; /*0x1009aa4cc*/
  }
  v26 = (_BYTE *)__srca[4]; /*0x1009aa355*/
  v25 = __srca[3]; /*0x1009aa360*/
  v24 = (char *)__srca[2]; /*0x1009aa372*/
  v23 = __srca[1]; /*0x1009aa376*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x1009aa38c*/
  v4 = *((_QWORD *)__src + 111); /*0x1009aa39f*/
  v19[0] = *((_QWORD *)__src + 110); /*0x1009aa3a6*/
  v19[1] = v4; /*0x1009aa3ad*/
  v19[2] = *((_QWORD *)__src + 112); /*0x1009aa3bb*/
  v22 = 1; /*0x1009aa3d0*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009aa3e9*/
    v14,
    v17[48],
    &v22,
    v19,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_16:
  if ( v29 != 0x8000000000000000LL ) /*0x1009aa4e4*/
  {
    v11 = v30; /*0x1009aa4e6*/
    for ( i = v31 + 1; i != 1; --i ) /*0x1009aa4ee*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009aa50d*/
      v11 += 96; /*0x1009aa512*/
    }
    if ( v29 ) /*0x1009aa51e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 96 * v29, 8); /*0x1009aa531*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009aa542*/
}