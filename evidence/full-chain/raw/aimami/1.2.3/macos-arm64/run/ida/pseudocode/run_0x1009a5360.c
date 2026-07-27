// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a5360 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h56be5d1b79aec59f(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r14
  const void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-7C8h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-660h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-458h] BYREF
  _QWORD v17[50]; // [rsp+508h] [rbp-2C8h] BYREF
  _QWORD v18[14]; // [rsp+698h] [rbp-138h] BYREF
  _QWORD v19[14]; // [rsp+708h] [rbp-C8h] BYREF
  _QWORD v20[3]; // [rsp+778h] [rbp-58h] BYREF
  __int64 v21; // [rsp+790h] [rbp-40h] BYREF
  __int64 v22; // [rsp+798h] [rbp-38h]
  __int64 v23; // [rsp+7A0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a5389*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a53a4*/
  v23 = *((_QWORD *)__src + 117); /*0x1009a53b0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a53b4*/
  v22 = *((_QWORD *)__src + 116); /*0x1009a53c2*/
  v21 = v2; /*0x1009a53c6*/
  v17[6] = 0; /*0x1009a53ca*/
  v17[0] = "get_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009a53dc*/
  v17[1] = 31; /*0x1009a53e3*/
  v17[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a53f5*/
  v17[3] = 7; /*0x1009a53fc*/
  v17[4] = __dst; /*0x1009a5407*/
  v17[5] = &v21; /*0x1009a5412*/
  v3 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009a5427*/
  if ( !v3 ) /*0x1009a5439*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a5450*/
      v19,
      v17,
      &v17[2]);
    if ( LOBYTE(v19[0]) != 6 ) /*0x1009a545c*/
    {
      v17[4] = v19[3]; /*0x1009a5516*/
      v17[3] = v19[2]; /*0x1009a5524*/
      v17[2] = v19[1]; /*0x1009a5539*/
      v17[1] = v19[0]; /*0x1009a5540*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a5559*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a556c*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009a5573*/
      v20[1] = v10; /*0x1009a5577*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009a5582*/
      v17[0] = 1; /*0x1009a5594*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a55b0*/
        v14,
        v16[48],
        v17,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009a55b5*/
    }
    v3 = v19[1]; /*0x1009a5462*/
  }
  codexmate_lib::commands::relay::get_codex_router_auth_readiness::h898be560227c07db((__int64)v18, v3); /*0x1009a5473*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a5487*/
  if ( v18[0] == 0x8000000000000000LL ) /*0x1009a5493*/
  {
    v4 = v18[1]; /*0x1009a5495*/
    v5 = (const void *)v18[2]; /*0x1009a549c*/
    v6 = v18[3]; /*0x1009a54a3*/
    if ( v18[3] < 0LL ) /*0x1009a54ad*/
    {
      v7 = 0; /*0x1009a54af*/
      goto LABEL_7; /*0x1009a54af*/
    }
    if ( v18[3] ) /*0x1009a54da*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009a54e0*/
      v7 = 1; /*0x1009a54e5*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a54f3*/
      if ( !v8 ) /*0x1009a54fb*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a54b2*/
      v9 = v8; /*0x1009a54fd*/
    }
    else
    {
      v9 = 1; /*0x1009a55b7*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009a55c6*/
    if ( v4 ) /*0x1009a55ce*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a55db*/
    LOBYTE(v19[1]) = 3; /*0x1009a55e0*/
    v19[2] = v6; /*0x1009a55e7*/
    v19[3] = v9; /*0x1009a55ee*/
    v19[4] = v6; /*0x1009a55f5*/
    v19[0] = 0x8000000000000000LL; /*0x1009a55fc*/
  }
  else
  {
    qmemcpy(v19, v18, sizeof(v19)); /*0x1009a54d2*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h7588e75002afe4f7(v17); /*0x1009a5611*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x1009a561a*/
  {
    v11 = v22; /*0x1009a561c*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009a5624*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a563d*/
      v11 += 96; /*0x1009a5642*/
    }
    if ( v21 ) /*0x1009a564e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009a5661*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a5672*/
}