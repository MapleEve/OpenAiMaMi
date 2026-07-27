// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a3d50 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h449f167cab6698c1(
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
  _BYTE v14[360]; // [rsp+8h] [rbp-828h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-6C0h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-4B8h] BYREF
  _QWORD __srca[20]; // [rsp+508h] [rbp-328h] BYREF
  _QWORD v18[50]; // [rsp+5A8h] [rbp-288h] BYREF
  _QWORD v19[20]; // [rsp+738h] [rbp-F8h] BYREF
  _QWORD v20[3]; // [rsp+7D8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+7F0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+7F8h] [rbp-38h]
  __int64 v23; // [rsp+800h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a3d79*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a3d94*/
  v23 = *((_QWORD *)__src + 117); /*0x1009a3da0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a3da4*/
  v22 = *((_QWORD *)__src + 116); /*0x1009a3db2*/
  v21 = v2; /*0x1009a3db6*/
  v18[6] = 0; /*0x1009a3dba*/
  v18[0] = "get_relay_proxy_status"; /*0x1009a3dcc*/
  v18[1] = 22; /*0x1009a3dd3*/
  v18[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a3de5*/
  v18[3] = 7; /*0x1009a3dec*/
  v18[4] = __dst; /*0x1009a3df7*/
  v18[5] = &v21; /*0x1009a3e02*/
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009a3e17*/
  if ( !v3 ) /*0x1009a3e29*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a3e40*/
      v19,
      v18,
      &v18[2]);
    if ( LOBYTE(v19[0]) != 6 ) /*0x1009a3e4c*/
    {
      v18[4] = v19[3]; /*0x1009a3f1b*/
      v18[3] = v19[2]; /*0x1009a3f29*/
      v18[2] = v19[1]; /*0x1009a3f3e*/
      v18[1] = v19[0]; /*0x1009a3f45*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a3f5e*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a3f71*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009a3f78*/
      v20[1] = v10; /*0x1009a3f7c*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009a3f87*/
      v18[0] = 1; /*0x1009a3f99*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a3fb5*/
        v14,
        v16[48],
        v18,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009a3fba*/
    }
    v3 = (_QWORD *)v19[1]; /*0x1009a3e52*/
  }
  codexmate_lib::core::relay::manager::RelayManager::compose_proxy_status::h7248b3f51c4d799d((__int64)v18, v3); /*0x1009a3e63*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hc30352c15bf6895c((__int64)__srca, v18); /*0x1009a3e76*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1009a3e8a*/
  if ( __srca[0] == 0x8000000000000000LL ) /*0x1009a3e96*/
  {
    v4 = __srca[1]; /*0x1009a3e98*/
    v5 = (const void *)__srca[2]; /*0x1009a3e9f*/
    v6 = __srca[3]; /*0x1009a3ea6*/
    if ( __srca[3] < 0LL ) /*0x1009a3eb0*/
    {
      v7 = 0; /*0x1009a3eb2*/
      goto LABEL_7; /*0x1009a3eb2*/
    }
    if ( __srca[3] ) /*0x1009a3edf*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520); /*0x1009a3ee5*/
      v7 = 1; /*0x1009a3eea*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a3ef8*/
      if ( !v8 ) /*0x1009a3f00*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a3eb5*/
      v9 = v8; /*0x1009a3f02*/
    }
    else
    {
      v9 = 1; /*0x1009a3fbc*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009a3fcb*/
    if ( v4 ) /*0x1009a3fd3*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a3fe0*/
    LOBYTE(v19[1]) = 3; /*0x1009a3fe5*/
    v19[2] = v6; /*0x1009a3fec*/
    v19[3] = v9; /*0x1009a3ff3*/
    v19[4] = v6; /*0x1009a3ffa*/
    v19[0] = 0x8000000000000000LL; /*0x1009a4001*/
  }
  else
  {
    memcpy(v19, __srca, sizeof(v19)); /*0x1009a3ed5*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h3b0a1925b61cc849(v18, v19); /*0x1009a4016*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x1009a401f*/
  {
    v11 = v22; /*0x1009a4021*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009a4029*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a403d*/
      v11 += 96; /*0x1009a4042*/
    }
    if ( v21 ) /*0x1009a404e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009a4061*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a4072*/
}