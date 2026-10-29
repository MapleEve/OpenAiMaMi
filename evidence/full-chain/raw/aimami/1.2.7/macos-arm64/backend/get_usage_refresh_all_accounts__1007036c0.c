// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hec0bcddf0169a1b3; addr: 0x1007036c0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hec0bcddf0169a1b3(
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x1007036e9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x100703704*/
  v28 = *((_QWORD *)__src + 117); /*0x100703710*/
  v2 = *((_QWORD *)__src + 115); /*0x100703714*/
  v27 = *((_QWORD *)__src + 116); /*0x100703722*/
  v26 = v2; /*0x100703726*/
  v17[6] = 0; /*0x10070372a*/
  v17[0] = "get_usage_refresh_all_accountsset_usage_refresh_all_accountsrun_daemon_oncerestart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x10070373c*/
  v17[1] = 30; /*0x100703743*/
  v17[2] = &unk_1016E98EC; /*0x100703755*/
  v17[3] = 4; /*0x10070375c*/
  v17[4] = __dst; /*0x100703767*/
  v17[5] = &v26; /*0x100703772*/
  v3 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x100703787*/
  if ( v3 ) /*0x100703799*/
  {
LABEL_4:
    codexmate_lib::commands::system::get_usage_refresh_all_accounts::h5c79b66c8b1fca23(&v18, v3); /*0x1007037c0*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1007037db*/
    v5 = v18; /*0x1007037e0*/
    if ( v18 == 0x8000000000000000LL ) /*0x1007037e7*/
    {
      BYTE1(v22) = (_BYTE)v19; /*0x1007037ed*/
      LOBYTE(v22) = 6; /*0x1007037f0*/
LABEL_17:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hba67ea4134f24302(__src + 520); /*0x10070390d*/
      goto LABEL_18; /*0x100703914*/
    }
    v6 = __n; /*0x1007037fd*/
    __srca = v19; /*0x100703804*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100703808*/
    {
      v7 = 0; /*0x10070380a*/
      goto LABEL_8; /*0x10070380a*/
    }
    if ( __n ) /*0x10070381a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520, v4); /*0x100703820*/
      v7 = 1; /*0x100703825*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100703833*/
      if ( !v8 ) /*0x10070383b*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x10070380d*/
      v9 = v8; /*0x10070383d*/
    }
    else
    {
      v9 = 1; /*0x1007038c6*/
    }
    v10 = __srca; /*0x1007038cf*/
    memcpy((void *)v9, __srca, v6); /*0x1007038d9*/
    if ( v5 ) /*0x1007038e1*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v5, 1); /*0x1007038ee*/
    LOBYTE(v22) = 3; /*0x1007038f3*/
    v23 = v6; /*0x1007038f7*/
    v24 = v9; /*0x1007038fb*/
    v25 = v6; /*0x1007038ff*/
    goto LABEL_17; /*0x1007038ff*/
  }
  _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1007037ad*/
    &v22,
    v17,
    &v17[2]);
  if ( (_BYTE)v22 == 6 ) /*0x1007037b6*/
  {
    v3 = v23; /*0x1007037bc*/
    goto LABEL_4; /*0x1007037bc*/
  }
  v17[4] = v25; /*0x100703849*/
  v17[3] = v24; /*0x100703854*/
  v17[2] = v23; /*0x100703863*/
  v17[1] = v22; /*0x10070386a*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x100703883*/
  v17[0] = 1; /*0x1007038a4*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1007038bf*/
    v14,
    v16[48],
    v17,
    __src + 880,
    LODWORD(v16[49]),
    HIDWORD(v16[49]));
LABEL_18:
  if ( v26 != 0x8000000000000000LL ) /*0x10070391d*/
  {
    v11 = v27; /*0x10070391f*/
    for ( i = v28 + 1; i != 1; --i ) /*0x100703927*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x10070393d*/
      v11 += 96; /*0x100703942*/
    }
    if ( v26 ) /*0x10070394e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 96 * v26, 8); /*0x100703961*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100703972*/
}