// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b5100 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfaa5d6d032e21365(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  const void *v4; // r15
  size_t v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+0h] [rbp-890h] BYREF
  _BYTE __dst[520]; // [rsp+168h] [rbp-728h] BYREF
  _QWORD v15[50]; // [rsp+370h] [rbp-520h] BYREF
  _QWORD __srca[25]; // [rsp+500h] [rbp-390h] BYREF
  _QWORD v17[50]; // [rsp+5C8h] [rbp-2C8h] BYREF
  _QWORD v18[25]; // [rsp+758h] [rbp-138h] BYREF
  _QWORD v19[3]; // [rsp+820h] [rbp-70h] BYREF
  __int64 v20[3]; // [rsp+838h] [rbp-58h] BYREF
  __int64 v21; // [rsp+850h] [rbp-40h] BYREF
  __int64 v22; // [rsp+858h] [rbp-38h]
  __int64 v23; // [rsp+860h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b5129*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1009b5144*/
  v23 = *((_QWORD *)__src + 117); /*0x1009b5150*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b5154*/
  v22 = *((_QWORD *)__src + 116); /*0x1009b5162*/
  v21 = v2; /*0x1009b5166*/
  v17[6] = 0; /*0x1009b516a*/
  v17[0] = "parse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b517c*/
  v17[1] = 21; /*0x1009b5183*/
  v17[2] = "urlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b5195*/
  v17[3] = 3; /*0x1009b519c*/
  v17[4] = __dst; /*0x1009b51a7*/
  v17[5] = &v21; /*0x1009b51b2*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v18, v17); /*0x1009b51ca*/
  if ( LOBYTE(v18[0]) == 6 ) /*0x1009b51e0*/
  {
    v20[2] = v18[3]; /*0x1009b51ed*/
    v20[1] = v18[2]; /*0x1009b51ff*/
    v20[0] = v18[1]; /*0x1009b5203*/
    codexmate_lib::commands::deeplink::parse_aimami_deeplink::h19a3c0701289616f((__int64)__srca, v20); /*0x1009b5212*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1009b5226*/
    if ( __srca[0] == 0x8000000000000000LL ) /*0x1009b5232*/
    {
      v3 = __srca[1]; /*0x1009b5238*/
      v4 = (const void *)__srca[2]; /*0x1009b523f*/
      v5 = __srca[3]; /*0x1009b5246*/
      if ( __srca[3] < 0LL ) /*0x1009b5250*/
      {
        v6 = 0; /*0x1009b5256*/
        goto LABEL_5; /*0x1009b5256*/
      }
      if ( __srca[3] ) /*0x1009b532b*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009b532d*/
        v6 = 1; /*0x1009b5332*/
        v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1009b5340*/
        if ( !v8 ) /*0x1009b5348*/
LABEL_5:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x1009b5259*/
        v9 = v8; /*0x1009b534e*/
      }
      else
      {
        v9 = 1; /*0x1009b535d*/
      }
      memcpy((void *)v9, v4, v5); /*0x1009b536c*/
      if ( v3 ) /*0x1009b5374*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x1009b5381*/
      LOBYTE(v18[1]) = 3; /*0x1009b5386*/
      v18[2] = v5; /*0x1009b538d*/
      v18[3] = v9; /*0x1009b5394*/
      v18[4] = v5; /*0x1009b539b*/
      v18[0] = 0x8000000000000000LL; /*0x1009b53a2*/
    }
    else
    {
      memcpy(v18, __srca, sizeof(v18)); /*0x1009b5324*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h92fa3440b6a9a467(v17, v18); /*0x1009b53b7*/
  }
  else
  {
    v17[4] = v18[3]; /*0x1009b526d*/
    v17[3] = v18[2]; /*0x1009b527b*/
    v17[2] = v18[1]; /*0x1009b5290*/
    v17[1] = v18[0]; /*0x1009b5297*/
    memcpy(v13, __src + 520, sizeof(v13)); /*0x1009b52b0*/
    v7 = *((_QWORD *)__src + 111); /*0x1009b52c3*/
    v19[0] = *((_QWORD *)__src + 110); /*0x1009b52ca*/
    v19[1] = v7; /*0x1009b52ce*/
    v19[2] = *((_QWORD *)__src + 112); /*0x1009b52d9*/
    v17[0] = 1; /*0x1009b52eb*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b5307*/
      v13,
      v15[48],
      v17,
      v19,
      LODWORD(v15[49]),
      HIDWORD(v15[49]));
  }
  if ( v21 != 0x8000000000000000LL ) /*0x1009b53c0*/
  {
    v10 = v22; /*0x1009b53c2*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009b53ca*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v10); /*0x1009b53dd*/
      v10 += 96; /*0x1009b53e2*/
    }
    if ( v21 ) /*0x1009b53ee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009b5401*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b5412*/
}