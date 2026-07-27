// 1.2.3 baseline same-set | codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$ | 完整基线逆(decompile+归目录)
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h56213c912c3fb06f(
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
  _BYTE v14[360]; // [rsp+8h] [rbp-7B8h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-650h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-448h] BYREF
  __int64 v17[50]; // [rsp+508h] [rbp-2B8h] BYREF
  _QWORD v18[13]; // [rsp+698h] [rbp-128h] BYREF
  _QWORD v19[13]; // [rsp+700h] [rbp-C0h] BYREF
  _QWORD v20[3]; // [rsp+768h] [rbp-58h] BYREF
  __int64 v21; // [rsp+780h] [rbp-40h] BYREF
  __int64 v22; // [rsp+788h] [rbp-38h]
  __int64 v23; // [rsp+790h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a4f99*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a4fb4*/
  v23 = *((_QWORD *)__src + 117); /*0x1009a4fc0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a4fc4*/
  v22 = *((_QWORD *)__src + 116); /*0x1009a4fd2*/
  v21 = v2; /*0x1009a4fd6*/
  v17[6] = 0; /*0x1009a4fda*/
  v17[0] = (__int64)"get_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister"; /*0x1009a4fec*/
  v17[1] = 16; /*0x1009a4ff3*/
  v17[2] = (__int64)"managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a5005*/
  v17[3] = 7; /*0x1009a500c*/
  v17[4] = (__int64)__dst; /*0x1009a5017*/
  v17[5] = (__int64)&v21; /*0x1009a5022*/
  v3 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009a5037*/
  if ( !v3 ) /*0x1009a5049*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a5060*/
      v19,
      v17,
      &v17[2]);
    if ( LOBYTE(v19[0]) != 6 ) /*0x1009a506c*/
    {
      v17[4] = v19[3]; /*0x1009a5139*/
      v17[3] = v19[2]; /*0x1009a5147*/
      v17[2] = v19[1]; /*0x1009a515c*/
      v17[1] = v19[0]; /*0x1009a5163*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a517c*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a518f*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009a5196*/
      v20[1] = v10; /*0x1009a519a*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009a51a5*/
      v17[0] = 1; /*0x1009a51b7*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a51d3*/
        v14,
        v16[48],
        v17,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009a51d8*/
    }
    v3 = v19[1]; /*0x1009a5072*/
  }
  codexmate_lib::core::relay::manager::RelayManager::get_active::he74a40ddd4d37459((__int64)v17, v3); /*0x1009a5083*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hbccf9fcf38e62029((__int64)v18, v17); /*0x1009a5096*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a50aa*/
  if ( v18[0] == 0x8000000000000000LL ) /*0x1009a50b6*/
  {
    v4 = v18[1]; /*0x1009a50b8*/
    v5 = (const void *)v18[2]; /*0x1009a50bf*/
    v6 = v18[3]; /*0x1009a50c6*/
    if ( v18[3] < 0LL ) /*0x1009a50d0*/
    {
      v7 = 0; /*0x1009a50d2*/
      goto LABEL_7; /*0x1009a50d2*/
    }
    if ( v18[3] ) /*0x1009a50fd*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009a5103*/
      v7 = 1; /*0x1009a5108*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a5116*/
      if ( !v8 ) /*0x1009a511e*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a50d5*/
      v9 = v8; /*0x1009a5120*/
    }
    else
    {
      v9 = 1; /*0x1009a51da*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009a51e9*/
    if ( v4 ) /*0x1009a51f1*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a51fe*/
    LOBYTE(v19[1]) = 3; /*0x1009a5203*/
    v19[2] = v6; /*0x1009a520a*/
    v19[3] = v9; /*0x1009a5211*/
    v19[4] = v6; /*0x1009a5218*/
    v19[0] = 0x8000000000000000LL; /*0x1009a521f*/
  }
  else
  {
    qmemcpy(v19, v18, sizeof(v19)); /*0x1009a50f5*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h3128e932857c857f(v17); /*0x1009a5234*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x1009a523d*/
  {
    v11 = v22; /*0x1009a523f*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009a5247*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a525d*/
      v11 += 96; /*0x1009a5262*/
    }
    if ( v21 ) /*0x1009a526e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009a5281*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a5292*/
}
