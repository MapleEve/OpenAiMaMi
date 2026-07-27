// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099d810 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1aedc0c129e5d404(
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099d839*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x10099d854*/
  v31 = *((_QWORD *)__src + 117); /*0x10099d860*/
  v3 = *((_QWORD *)__src + 115); /*0x10099d864*/
  v30 = *((_QWORD *)__src + 116); /*0x10099d872*/
  v29 = v3; /*0x10099d876*/
  v28 = 0; /*0x10099d87a*/
  v22 = (__int64)"hotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x10099d889*/
  v23 = 13; /*0x10099d88d*/
  v24 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099d89c*/
  v25 = 3; /*0x10099d8a0*/
  v26 = __dst; /*0x10099d8a8*/
  v27 = &v29; /*0x10099d8b0*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x10099d8c2*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x10099d8d8*/
  {
    memcpy(v16, __srca, sizeof(v16)); /*0x10099d999*/
    codexmate_lib::commands::hotspot::hotspot_ready::hff0177cb53051f37(v20, (__int64)v16, a2, a3); /*0x10099d9a8*/
    memcpy(__srca, __src + 520, sizeof(__srca)); /*0x10099d9bc*/
    v5 = v20[0]; /*0x10099d9c1*/
    if ( v20[0] == 0x8000000000000000LL ) /*0x10099d9cb*/
    {
      LOBYTE(v22) = 6; /*0x10099d9cd*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9f6c6c7c6be4e32b(__srca); /*0x10099da60*/
      goto LABEL_16; /*0x10099da6b*/
    }
    v6 = (const void *)v20[1]; /*0x10099d9d6*/
    v7 = __n; /*0x10099d9dd*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10099d9e7*/
    {
      v8 = 0; /*0x10099d9e9*/
      goto LABEL_7; /*0x10099d9e9*/
    }
    if ( __n ) /*0x10099d9f9*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, __src + 520); /*0x10099d9fb*/
      v8 = 1; /*0x10099da00*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x10099da0e*/
      if ( !v9 ) /*0x10099da16*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x10099d9ec*/
      v10 = v9; /*0x10099da18*/
    }
    else
    {
      v10 = 1; /*0x10099da27*/
    }
    memcpy((void *)v10, v6, v7); /*0x10099da36*/
    if ( v5 ) /*0x10099da3e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x10099da4b*/
    LOBYTE(v22) = 3; /*0x10099da50*/
    v23 = v7; /*0x10099da54*/
    v24 = (char *)v10; /*0x10099da58*/
    v25 = v7; /*0x10099da5c*/
    goto LABEL_15; /*0x10099da5c*/
  }
  v26 = (_BYTE *)__srca[4]; /*0x10099d8e5*/
  v25 = __srca[3]; /*0x10099d8f0*/
  v24 = (char *)__srca[2]; /*0x10099d902*/
  v23 = __srca[1]; /*0x10099d906*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x10099d91c*/
  v4 = *((_QWORD *)__src + 111); /*0x10099d92f*/
  v19[0] = *((_QWORD *)__src + 110); /*0x10099d936*/
  v19[1] = v4; /*0x10099d93d*/
  v19[2] = *((_QWORD *)__src + 112); /*0x10099d94b*/
  v22 = 1; /*0x10099d960*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099d979*/
    v14,
    v17[48],
    &v22,
    v19,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_16:
  if ( v29 != 0x8000000000000000LL ) /*0x10099da74*/
  {
    v11 = v30; /*0x10099da76*/
    for ( i = v31 + 1; i != 1; --i ) /*0x10099da7e*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x10099da9d*/
      v11 += 96; /*0x10099daa2*/
    }
    if ( v29 ) /*0x10099daae*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 96 * v29, 8); /*0x10099dac1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099dad2*/
}