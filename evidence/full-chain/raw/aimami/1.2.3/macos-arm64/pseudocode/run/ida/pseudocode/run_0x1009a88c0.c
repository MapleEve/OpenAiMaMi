// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a88c0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h82b74d0244e9aebe(
        char *__src,
        double a2,
        double a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  void *v6; // r15
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
  __int64 v20; // [rsp+748h] [rbp-98h] BYREF
  void *v21; // [rsp+750h] [rbp-90h]
  size_t __n; // [rsp+758h] [rbp-88h]
  __int64 v23; // [rsp+760h] [rbp-80h] BYREF
  __int64 v24; // [rsp+768h] [rbp-78h]
  char *v25; // [rsp+770h] [rbp-70h]
  __int64 v26; // [rsp+778h] [rbp-68h]
  _BYTE *v27; // [rsp+780h] [rbp-60h]
  __int64 *v28; // [rsp+788h] [rbp-58h]
  __int64 v29; // [rsp+790h] [rbp-50h]
  __int64 v30; // [rsp+7A0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+7A8h] [rbp-38h]
  __int64 v32; // [rsp+7B0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a88e9*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a8904*/
  v32 = *((_QWORD *)__src + 117); /*0x1009a8910*/
  v3 = *((_QWORD *)__src + 115); /*0x1009a8914*/
  v31 = *((_QWORD *)__src + 116); /*0x1009a8922*/
  v30 = v3; /*0x1009a8926*/
  v29 = 0; /*0x1009a892a*/
  v23 = (__int64)"has_notchget_hotspot_enabledset_hotspot_enabledfocus_main_windowhotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009a8939*/
  v24 = 9; /*0x1009a893d*/
  v25 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a894c*/
  v26 = 3; /*0x1009a8950*/
  v27 = __dst; /*0x1009a8958*/
  v28 = &v30; /*0x1009a8960*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009a8972*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009a8988*/
  {
    memcpy(v16, __srca, sizeof(v16)); /*0x1009a8a49*/
    codexmate_lib::commands::hotspot::has_notch::h1dc669b3354b85b6((__int64)&v20, (__int64)v16, a2, a3); /*0x1009a8a58*/
    memcpy(__srca, __src + 520, sizeof(__srca)); /*0x1009a8a6c*/
    v5 = v20; /*0x1009a8a71*/
    if ( v20 == 0x8000000000000000LL ) /*0x1009a8a7b*/
    {
      BYTE1(v23) = (_BYTE)v21; /*0x1009a8a84*/
      LOBYTE(v23) = 6; /*0x1009a8a87*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hec5d67e463ed9f2c(__srca); /*0x1009a8b1a*/
      goto LABEL_16; /*0x1009a8b25*/
    }
    v6 = v21; /*0x1009a8a90*/
    v7 = __n; /*0x1009a8a97*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009a8aa1*/
    {
      v8 = 0; /*0x1009a8aa3*/
      goto LABEL_7; /*0x1009a8aa3*/
    }
    if ( __n ) /*0x1009a8ab3*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, __src + 520); /*0x1009a8ab5*/
      v8 = 1; /*0x1009a8aba*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009a8ac8*/
      if ( !v9 ) /*0x1009a8ad0*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009a8aa6*/
      v10 = v9; /*0x1009a8ad2*/
    }
    else
    {
      v10 = 1; /*0x1009a8ae1*/
    }
    memcpy((void *)v10, v6, v7); /*0x1009a8af0*/
    if ( v5 ) /*0x1009a8af8*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009a8b05*/
    LOBYTE(v23) = 3; /*0x1009a8b0a*/
    v24 = v7; /*0x1009a8b0e*/
    v25 = (char *)v10; /*0x1009a8b12*/
    v26 = v7; /*0x1009a8b16*/
    goto LABEL_15; /*0x1009a8b16*/
  }
  v27 = (_BYTE *)__srca[4]; /*0x1009a8995*/
  v26 = __srca[3]; /*0x1009a89a0*/
  v25 = (char *)__srca[2]; /*0x1009a89b2*/
  v24 = __srca[1]; /*0x1009a89b6*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a89cc*/
  v4 = *((_QWORD *)__src + 111); /*0x1009a89df*/
  v19[0] = *((_QWORD *)__src + 110); /*0x1009a89e6*/
  v19[1] = v4; /*0x1009a89ed*/
  v19[2] = *((_QWORD *)__src + 112); /*0x1009a89fb*/
  v23 = 1; /*0x1009a8a10*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a8a29*/
    v14,
    v17[48],
    &v23,
    v19,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_16:
  if ( v30 != 0x8000000000000000LL ) /*0x1009a8b2e*/
  {
    v11 = v31; /*0x1009a8b30*/
    for ( i = v32 + 1; i != 1; --i ) /*0x1009a8b38*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a8b4d*/
      v11 += 96; /*0x1009a8b52*/
    }
    if ( v30 ) /*0x1009a8b5e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 96 * v30, 8); /*0x1009a8b71*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a8b82*/
}