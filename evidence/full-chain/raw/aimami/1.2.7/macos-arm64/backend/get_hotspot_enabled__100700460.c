// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb5374ce6dd6e8f8e; addr: 0x100700460; session: <审计会话>; decompiled_at: 2026-10-26T03:22:27Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb5374ce6dd6e8f8e(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  size_t v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  void *v10; // r15
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+0h] [rbp-710h] BYREF
  _QWORD __dst[65]; // [rsp+168h] [rbp-5A8h] BYREF
  _QWORD v16[50]; // [rsp+370h] [rbp-3A0h] BYREF
  _QWORD v17[50]; // [rsp+500h] [rbp-210h] BYREF
  __int64 v18; // [rsp+690h] [rbp-80h] BYREF
  void *v19; // [rsp+698h] [rbp-78h]
  size_t __n; // [rsp+6A0h] [rbp-70h]
  void *__srca; // [rsp+6A8h] [rbp-68h]
  __int64 v22; // [rsp+6B0h] [rbp-60h] BYREF
  size_t v23; // [rsp+6B8h] [rbp-58h]
  __int64 v24; // [rsp+6C0h] [rbp-50h]
  size_t v25; // [rsp+6C8h] [rbp-48h]
  __int64 v26; // [rsp+6D0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+6D8h] [rbp-38h]
  __int64 v28; // [rsp+6E0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x100700489*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1007004a4*/
  v28 = *((_QWORD *)__src + 117); /*0x1007004b0*/
  v2 = *((_QWORD *)__src + 115); /*0x1007004b4*/
  v27 = *((_QWORD *)__src + 116); /*0x1007004c2*/
  v26 = v2; /*0x1007004c6*/
  v17[6] = 0; /*0x1007004ca*/
  v17[0] = "get_hotspot_enabledset_hotspot_enabledfocus_main_windowhotspot_readyupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1007004dc*/
  v17[1] = 19; /*0x1007004e3*/
  v17[2] = &unk_1016E98EC; /*0x1007004f5*/
  v17[3] = 4; /*0x1007004fc*/
  v17[4] = __dst; /*0x100700507*/
  v17[5] = &v26; /*0x100700512*/
  v3 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x100700527*/
  if ( v3 ) /*0x100700539*/
  {
LABEL_4:
    codexmate_lib::commands::hotspot::get_hotspot_enabled::haf69d4e3e594fb3b(&v18, v3); /*0x100700560*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x10070057b*/
    v5 = v18; /*0x100700580*/
    if ( v18 == 0x8000000000000000LL ) /*0x100700587*/
    {
      BYTE1(v22) = (_BYTE)v19; /*0x10070058d*/
      LOBYTE(v22) = 6; /*0x100700590*/
LABEL_17:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hba67ea4134f24302(__src + 520); /*0x1007006ad*/
      goto LABEL_18; /*0x1007006b4*/
    }
    v6 = __n; /*0x10070059d*/
    __srca = v19; /*0x1007005a4*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1007005a8*/
    {
      v7 = 0; /*0x1007005aa*/
      goto LABEL_8; /*0x1007005aa*/
    }
    if ( __n ) /*0x1007005ba*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520, v4); /*0x1007005c0*/
      v7 = 1; /*0x1007005c5*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1007005d3*/
      if ( !v8 ) /*0x1007005db*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1007005ad*/
      v9 = v8; /*0x1007005dd*/
    }
    else
    {
      v9 = 1; /*0x100700666*/
    }
    v10 = __srca; /*0x10070066f*/
    memcpy((void *)v9, __srca, v6); /*0x100700679*/
    if ( v5 ) /*0x100700681*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v5, 1); /*0x10070068e*/
    LOBYTE(v22) = 3; /*0x100700693*/
    v23 = v6; /*0x100700697*/
    v24 = v9; /*0x10070069b*/
    v25 = v6; /*0x10070069f*/
    goto LABEL_17; /*0x10070069f*/
  }
  _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x10070054d*/
    &v22,
    v17,
    &v17[2]);
  if ( (_BYTE)v22 == 6 ) /*0x100700556*/
  {
    v3 = v23; /*0x10070055c*/
    goto LABEL_4; /*0x10070055c*/
  }
  v17[4] = v25; /*0x1007005e9*/
  v17[3] = v24; /*0x1007005f4*/
  v17[2] = v23; /*0x100700603*/
  v17[1] = v22; /*0x10070060a*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x100700623*/
  v17[0] = 1; /*0x100700644*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x10070065f*/
    v14,
    v16[48],
    v17,
    __src + 880,
    LODWORD(v16[49]),
    HIDWORD(v16[49]));
LABEL_18:
  if ( v26 != 0x8000000000000000LL ) /*0x1007006bd*/
  {
    v11 = v27; /*0x1007006bf*/
    for ( i = v28 + 1; i != 1; --i ) /*0x1007006c7*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1007006dd*/
      v11 += 96; /*0x1007006e2*/
    }
    if ( v26 ) /*0x1007006ee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 96 * v26, 8); /*0x100700701*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100700712*/
}