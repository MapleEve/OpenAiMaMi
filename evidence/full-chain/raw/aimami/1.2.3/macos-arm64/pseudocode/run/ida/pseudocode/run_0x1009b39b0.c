// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b39b0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc784e5f98656c86f(
        char *__src,
        double a2)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  unsigned __int64 v6; // r15
  void *v7; // r14
  void *v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  size_t v11; // rbx
  __int64 v12; // rdi
  __int64 i; // r15
  _BYTE v15[360]; // [rsp+8h] [rbp-898h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-730h] BYREF
  _QWORD v17[50]; // [rsp+378h] [rbp-528h] BYREF
  _BYTE v18[152]; // [rsp+508h] [rbp-398h] BYREF
  _BYTE v19[96]; // [rsp+5A0h] [rbp-300h] BYREF
  _QWORD __srca[50]; // [rsp+600h] [rbp-2A0h] BYREF
  __int64 v21[6]; // [rsp+790h] [rbp-110h] BYREF
  _QWORD v22[3]; // [rsp+7C0h] [rbp-E0h] BYREF
  unsigned __int64 v23; // [rsp+7D8h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+7E0h] [rbp-C0h]
  void *v25; // [rsp+7E8h] [rbp-B8h]
  size_t __n; // [rsp+7F0h] [rbp-B0h]
  _QWORD v27[12]; // [rsp+7F8h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+858h] [rbp-48h] BYREF
  __int64 v29; // [rsp+860h] [rbp-40h]
  __int64 v30; // [rsp+868h] [rbp-38h]
  __int64 v31; // [rsp+870h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b39d9*/
  v2 = __src + 520; /*0x1009b39de*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009b39f4*/
  v30 = *((_QWORD *)__src + 117); /*0x1009b3a00*/
  v3 = *((_QWORD *)__src + 115); /*0x1009b3a04*/
  v29 = *((_QWORD *)__src + 116); /*0x1009b3a12*/
  v28 = v3; /*0x1009b3a16*/
  v27[2] = 0; /*0x1009b3a1a*/
  v23 = (unsigned __int64)"voice_search_overlay_ready"; /*0x1009b3a2c*/
  v24 = 26; /*0x1009b3a33*/
  v25 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b3a45*/
  __n = 3; /*0x1009b3a4c*/
  v27[0] = __dst; /*0x1009b3a57*/
  v27[1] = &v28; /*0x1009b3a62*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009b3a7a*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009b3a86*/
  {
    memcpy(v18, __srca, sizeof(v18)); /*0x1009b3b63*/
    v5 = (__int64 *)tauri::Manager::state::hdb449afff486731a(__srca); /*0x1009b3b6b*/
    codexmate_lib::core::voice::runtime::overlay::VoiceSearchResultState::snapshot::h0458b2f74a3f5159(v21, v5); /*0x1009b3b7a*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h46a9370900051674((__int64)&v23, v21); /*0x1009b3b8d*/
    v6 = v23; /*0x1009b3b92*/
    v31 = v24; /*0x1009b3ba0*/
    v7 = v25; /*0x1009b3ba4*/
    v8 = (void *)__n; /*0x1009b3bab*/
    qmemcpy(v19, v27, sizeof(v19)); /*0x1009b3bc5*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v18); /*0x1009b3bcf*/
    memcpy(__srca, v2, sizeof(__srca)); /*0x1009b3be3*/
    if ( v6 == 0x8000000000000000LL ) /*0x1009b3bf5*/
    {
      if ( (__int64)v8 < 0 ) /*0x1009b3bfa*/
      {
        v9 = 0; /*0x1009b3bfc*/
        goto LABEL_6; /*0x1009b3bfc*/
      }
      if ( v8 ) /*0x1009b3c44*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, v2); /*0x1009b3c46*/
        v9 = 1; /*0x1009b3c4b*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009b3c59*/
        if ( !v10 ) /*0x1009b3c61*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009b3bff*/
        v11 = v10; /*0x1009b3c63*/
      }
      else
      {
        v11 = 1; /*0x1009b3c72*/
      }
      memcpy((void *)v11, v7, (size_t)v8); /*0x1009b3c80*/
      if ( v31 ) /*0x1009b3c8c*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v31, 1); /*0x1009b3c96*/
      LOBYTE(v24) = 3; /*0x1009b3c9b*/
      v25 = v8; /*0x1009b3ca2*/
      __n = v11; /*0x1009b3ca9*/
      v27[0] = v8; /*0x1009b3cb0*/
      v23 = 0x8000000000000000LL; /*0x1009b3cb7*/
    }
    else
    {
      v23 = v6; /*0x1009b3c0c*/
      v24 = v31; /*0x1009b3c17*/
      v25 = v7; /*0x1009b3c1e*/
      __n = (size_t)v8; /*0x1009b3c25*/
      qmemcpy(v27, v19, sizeof(v27)); /*0x1009b3c3f*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h51897ca6c4dad799(__srca); /*0x1009b3ccc*/
    goto LABEL_16; /*0x1009b3ccc*/
  }
  v27[0] = __srca[4]; /*0x1009b3a93*/
  __n = __srca[3]; /*0x1009b3aa1*/
  v25 = (void *)__srca[2]; /*0x1009b3ab6*/
  v24 = __srca[1]; /*0x1009b3abd*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1009b3ad6*/
  v4 = *((_QWORD *)__src + 111); /*0x1009b3ae9*/
  v22[0] = *((_QWORD *)__src + 110); /*0x1009b3af0*/
  v22[1] = v4; /*0x1009b3af7*/
  v22[2] = *((_QWORD *)__src + 112); /*0x1009b3b05*/
  v23 = 1; /*0x1009b3b1a*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b3b39*/
    v15,
    v17[48],
    &v23,
    v22,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_16:
  if ( v28 != 0x8000000000000000LL ) /*0x1009b3cd5*/
  {
    v12 = v29; /*0x1009b3cd7*/
    for ( i = v30 + 1; i != 1; --i ) /*0x1009b3cdf*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v12); /*0x1009b3cfd*/
      v12 += 96; /*0x1009b3d02*/
    }
    if ( v28 ) /*0x1009b3d0e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 96 * v28, 8); /*0x1009b3d21*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b3d32*/
}