// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a2300 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3d457f17f44e33e5(
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a2329*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a2344*/
  v23 = *((_QWORD *)__src + 117); /*0x1009a2350*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a2354*/
  v22 = *((_QWORD *)__src + 116); /*0x1009a2362*/
  v21 = v2; /*0x1009a2366*/
  v17[6] = 0; /*0x1009a236a*/
  v17[0] = "force_kill_codexget_image_compatset_image_compatload_relay_stateget_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister"; /*0x1009a237c*/
  v17[1] = 16; /*0x1009a2383*/
  v17[2] = "mutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a2395*/
  v17[3] = 12; /*0x1009a239c*/
  v17[4] = __dst; /*0x1009a23a7*/
  v17[5] = &v21; /*0x1009a23b2*/
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h18d7865deb554c60(__dst[64] + 16LL); /*0x1009a23c7*/
  if ( !v3 ) /*0x1009a23d9*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a23f0*/
      v19,
      v17,
      &v17[2]);
    if ( LOBYTE(v19[0]) != 6 ) /*0x1009a23fc*/
    {
      v17[4] = v19[3]; /*0x1009a24b6*/
      v17[3] = v19[2]; /*0x1009a24c4*/
      v17[2] = v19[1]; /*0x1009a24d9*/
      v17[1] = v19[0]; /*0x1009a24e0*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a24f9*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a250c*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009a2513*/
      v20[1] = v10; /*0x1009a2517*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009a2522*/
      v17[0] = 1; /*0x1009a2534*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a2550*/
        v14,
        v16[48],
        v17,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009a2555*/
    }
    v3 = (_QWORD *)v19[1]; /*0x1009a2402*/
  }
  codexmate_lib::commands::system::force_kill_codex::h41281be10d94c36d(v18, v3); /*0x1009a2413*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a2427*/
  if ( v18[0] == 0x8000000000000000LL ) /*0x1009a2433*/
  {
    v4 = v18[1]; /*0x1009a2435*/
    v5 = (const void *)v18[2]; /*0x1009a243c*/
    v6 = v18[3]; /*0x1009a2443*/
    if ( v18[3] < 0LL ) /*0x1009a244d*/
    {
      v7 = 0; /*0x1009a244f*/
      goto LABEL_7; /*0x1009a244f*/
    }
    if ( v18[3] ) /*0x1009a247a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009a2480*/
      v7 = 1; /*0x1009a2485*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a2493*/
      if ( !v8 ) /*0x1009a249b*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a2452*/
      v9 = v8; /*0x1009a249d*/
    }
    else
    {
      v9 = 1; /*0x1009a2557*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009a2566*/
    if ( v4 ) /*0x1009a256e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a257b*/
    LOBYTE(v19[1]) = 3; /*0x1009a2580*/
    v19[2] = v6; /*0x1009a2587*/
    v19[3] = v9; /*0x1009a258e*/
    v19[4] = v6; /*0x1009a2595*/
    v19[0] = 0x8000000000000000LL; /*0x1009a259c*/
  }
  else
  {
    qmemcpy(v19, v18, sizeof(v19)); /*0x1009a2472*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h494ae9b3a5cca840(v17); /*0x1009a25b1*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x1009a25ba*/
  {
    v11 = v22; /*0x1009a25bc*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009a25c4*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a25dd*/
      v11 += 96; /*0x1009a25e2*/
    }
    if ( v21 ) /*0x1009a25ee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009a2601*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a2612*/
}