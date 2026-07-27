// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009aea40 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb8941c363a110829(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  char *v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+0h] [rbp-BA0h] BYREF
  _BYTE v17[360]; // [rsp+168h] [rbp-A38h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-8D0h] BYREF
  _QWORD v19[47]; // [rsp+4D8h] [rbp-6C8h] BYREF
  _QWORD v20[50]; // [rsp+650h] [rbp-550h] BYREF
  _QWORD v21[47]; // [rsp+7E0h] [rbp-3C0h] BYREF
  _QWORD v22[50]; // [rsp+958h] [rbp-248h] BYREF
  _QWORD v23[3]; // [rsp+AE8h] [rbp-B8h] BYREF
  _QWORD v24[3]; // [rsp+B00h] [rbp-A0h] BYREF
  _QWORD v25[3]; // [rsp+B18h] [rbp-88h] BYREF
  __int64 v26; // [rsp+B30h] [rbp-70h] BYREF
  _QWORD *v27; // [rsp+B38h] [rbp-68h]
  __int64 v28; // [rsp+B40h] [rbp-60h]
  __int64 v29; // [rsp+B48h] [rbp-58h]
  __int64 v30; // [rsp+B50h] [rbp-50h] BYREF
  __int64 v31; // [rsp+B58h] [rbp-48h]
  __int64 v32; // [rsp+B60h] [rbp-40h]
  void *__srca; // [rsp+B68h] [rbp-38h]
  int v34; // [rsp+B74h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009aea69*/
  __srca = __src + 520; /*0x1009aea81*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x1009aea85*/
  v32 = *((_QWORD *)__src + 117); /*0x1009aea91*/
  v2 = *((_QWORD *)__src + 115); /*0x1009aea95*/
  v31 = *((_QWORD *)__src + 116); /*0x1009aeaa3*/
  v30 = v2; /*0x1009aeaa7*/
  v22[6] = 0; /*0x1009aeaab*/
  v22[0] = "reorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009aeabd*/
  v22[1] = 23; /*0x1009aeac4*/
  v3 = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009aeacf*/
  v22[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009aead6*/
  v22[3] = 7; /*0x1009aeadd*/
  v22[4] = __dst; /*0x1009aeae8*/
  v22[5] = &v30; /*0x1009aeaf3*/
  LOBYTE(v3) = 1; /*0x1009aeb05*/
  v34 = (int)v3; /*0x1009aeb07*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009aeb0f*/
  if ( !v4 ) /*0x1009aeb15*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009aeb29*/
      &v26,
      v22,
      &v22[2]);
    if ( (_BYTE)v26 != 6 ) /*0x1009aeb32*/
    {
      v22[4] = v29; /*0x1009aed11*/
      v22[3] = v28; /*0x1009aed1c*/
      v22[2] = v27; /*0x1009aed2b*/
      v22[1] = v26; /*0x1009aed32*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009aed4c*/
      v10 = *((_QWORD *)__src + 111); /*0x1009aed5f*/
      v24[0] = *((_QWORD *)__src + 110); /*0x1009aed66*/
      v24[1] = v10; /*0x1009aed6d*/
      v24[2] = *((_QWORD *)__src + 112); /*0x1009aed7b*/
      v22[0] = 1; /*0x1009aed90*/
      v34 = 0; /*0x1009aed9b*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009aedb3*/
        v17,
        v20[48],
        v22,
        v24,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
      goto LABEL_21; /*0x1009aedb3*/
    }
    v4 = v27; /*0x1009aeb38*/
  }
  v22[6] = 0; /*0x1009aeb3c*/
  v22[0] = "reorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009aeb47*/
  v22[1] = 23; /*0x1009aeb4e*/
  v22[2] = "orderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009aeb60*/
  v22[3] = 10; /*0x1009aeb67*/
  v22[4] = __dst; /*0x1009aeb72*/
  v22[5] = &v30; /*0x1009aeb79*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2acca326e8d04504(v21, v22); /*0x1009aeb8e*/
  if ( LOBYTE(v21[0]) == 6 ) /*0x1009aeb9a*/
  {
    v25[2] = v21[3]; /*0x1009aeba7*/
    v25[1] = v21[2]; /*0x1009aebb9*/
    v25[0] = v21[1]; /*0x1009aebbd*/
    codexmate_lib::commands::relay::reorder_relay_providers::he3f423697a6ecac2(v19, v4, v25); /*0x1009aebd5*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1009aebea*/
    if ( v19[0] == 0x8000000000000000LL ) /*0x1009aec00*/
    {
      v5 = v19[1]; /*0x1009aec06*/
      v6 = (const void *)v19[2]; /*0x1009aec0d*/
      v7 = v19[3]; /*0x1009aec14*/
      if ( v19[3] < 0LL ) /*0x1009aec1e*/
      {
        v8 = 0; /*0x1009aec24*/
        goto LABEL_8; /*0x1009aec24*/
      }
      if ( v19[3] ) /*0x1009aedc7*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, __srca); /*0x1009aedc9*/
        v8 = 1; /*0x1009aedce*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009aeddc*/
        if ( !v11 ) /*0x1009aede4*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009aec27*/
        v12 = v11; /*0x1009aedea*/
      }
      else
      {
        v12 = 1; /*0x1009aedef*/
      }
      memcpy((void *)v12, v6, v7); /*0x1009aedfe*/
      if ( v5 ) /*0x1009aee06*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009aee13*/
      LOBYTE(v21[1]) = 3; /*0x1009aee18*/
      v21[2] = v7; /*0x1009aee1f*/
      v21[3] = v12; /*0x1009aee26*/
      v21[4] = v7; /*0x1009aee2d*/
      v21[0] = 0x8000000000000000LL; /*0x1009aee3e*/
    }
    else
    {
      memcpy(v21, v19, sizeof(v21)); /*0x1009aed03*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h3bba10af9bdd15bf(v22, v21); /*0x1009aee53*/
  }
  else
  {
    v22[4] = v21[3]; /*0x1009aec3b*/
    v22[3] = v21[2]; /*0x1009aec49*/
    v22[2] = v21[1]; /*0x1009aec5e*/
    v22[1] = v21[0]; /*0x1009aec65*/
    memcpy(v16, __srca, sizeof(v16)); /*0x1009aec7f*/
    v9 = *((_QWORD *)__src + 111); /*0x1009aec92*/
    v23[0] = *((_QWORD *)__src + 110); /*0x1009aec99*/
    v23[1] = v9; /*0x1009aeca0*/
    v23[2] = *((_QWORD *)__src + 112); /*0x1009aecae*/
    v22[0] = 1; /*0x1009aecc3*/
    v34 = 0; /*0x1009aecce*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009aece6*/
      v16,
      v20[48],
      v22,
      v23,
      LODWORD(v20[49]),
      HIDWORD(v20[49]));
  }
LABEL_21:
  if ( v30 != 0x8000000000000000LL ) /*0x1009aee5c*/
  {
    v13 = v31; /*0x1009aee5e*/
    for ( i = v32 + 1; i != 1; --i ) /*0x1009aee66*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009aee7d*/
      v13 += 96; /*0x1009aee82*/
    }
    if ( v30 ) /*0x1009aee8e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 96 * v30, 8); /*0x1009aeea1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009aeeb2*/
}