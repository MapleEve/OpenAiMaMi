// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a6a40 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6cdaa9f58e8fedfa(
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
  _BYTE v14[360]; // [rsp+8h] [rbp-9D8h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-870h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-668h] BYREF
  _QWORD __srca[47]; // [rsp+508h] [rbp-4D8h] BYREF
  _QWORD v18[47]; // [rsp+680h] [rbp-360h] BYREF
  _QWORD v19[50]; // [rsp+7F8h] [rbp-1E8h] BYREF
  _QWORD v20[3]; // [rsp+988h] [rbp-58h] BYREF
  __int64 v21; // [rsp+9A0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+9A8h] [rbp-38h]
  __int64 v23; // [rsp+9B0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a6a69*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a6a84*/
  v23 = *((_QWORD *)__src + 117); /*0x1009a6a90*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a6a94*/
  v22 = *((_QWORD *)__src + 116); /*0x1009a6aa2*/
  v21 = v2; /*0x1009a6aa6*/
  v19[6] = 0; /*0x1009a6aaa*/
  v19[0] = "load_relay_stateget_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister"; /*0x1009a6abc*/
  v19[1] = 16; /*0x1009a6ac3*/
  v19[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a6ad5*/
  v19[3] = 7; /*0x1009a6adc*/
  v19[4] = __dst; /*0x1009a6ae7*/
  v19[5] = &v21; /*0x1009a6af2*/
  v3 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009a6b07*/
  if ( !v3 ) /*0x1009a6b19*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a6b30*/
      v18,
      v19,
      &v19[2]);
    if ( LOBYTE(v18[0]) != 6 ) /*0x1009a6b3c*/
    {
      v19[4] = v18[3]; /*0x1009a6bf8*/
      v19[3] = v18[2]; /*0x1009a6c06*/
      v19[2] = v18[1]; /*0x1009a6c1b*/
      v19[1] = v18[0]; /*0x1009a6c22*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a6c3b*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a6c4e*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009a6c55*/
      v20[1] = v10; /*0x1009a6c59*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009a6c64*/
      v19[0] = 1; /*0x1009a6c76*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a6c92*/
        v14,
        v16[48],
        v19,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009a6c97*/
    }
    v3 = v18[1]; /*0x1009a6b42*/
  }
  codexmate_lib::commands::relay::load_relay_state::he8c597c73daa0a99(__srca, v3); /*0x1009a6b53*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009a6b67*/
  if ( __srca[0] == 0x8000000000000000LL ) /*0x1009a6b73*/
  {
    v4 = __srca[1]; /*0x1009a6b75*/
    v5 = (const void *)__srca[2]; /*0x1009a6b7c*/
    v6 = __srca[3]; /*0x1009a6b83*/
    if ( __srca[3] < 0LL ) /*0x1009a6b8d*/
    {
      v7 = 0; /*0x1009a6b8f*/
      goto LABEL_7; /*0x1009a6b8f*/
    }
    if ( __srca[3] ) /*0x1009a6bbc*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __src + 520); /*0x1009a6bc2*/
      v7 = 1; /*0x1009a6bc7*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a6bd5*/
      if ( !v8 ) /*0x1009a6bdd*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a6b92*/
      v9 = v8; /*0x1009a6bdf*/
    }
    else
    {
      v9 = 1; /*0x1009a6c99*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009a6ca8*/
    if ( v4 ) /*0x1009a6cb0*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a6cbd*/
    LOBYTE(v18[1]) = 3; /*0x1009a6cc2*/
    v18[2] = v6; /*0x1009a6cc9*/
    v18[3] = v9; /*0x1009a6cd0*/
    v18[4] = v6; /*0x1009a6cd7*/
    v18[0] = 0x8000000000000000LL; /*0x1009a6cde*/
  }
  else
  {
    memcpy(v18, __srca, sizeof(v18)); /*0x1009a6bb2*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h3bba10af9bdd15bf(v19, v18); /*0x1009a6cf3*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x1009a6cfc*/
  {
    v11 = v22; /*0x1009a6cfe*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009a6d06*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a6d1d*/
      v11 += 96; /*0x1009a6d22*/
    }
    if ( v21 ) /*0x1009a6d2e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009a6d41*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a6d52*/
}