// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he0f9bb7e33c3397a; addr: 0x100702e80; session: <审计会话>; decompiled_at: 2026-10-26T03:22:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he0f9bb7e33c3397a(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rdx
  void *v5; // r14
  size_t v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+8h] [rbp-718h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-5B0h] BYREF
  _QWORD v15[50]; // [rsp+378h] [rbp-3A8h] BYREF
  _QWORD v16[50]; // [rsp+508h] [rbp-218h] BYREF
  int v17; // [rsp+698h] [rbp-88h] BYREF
  __int64 *v18; // [rsp+6A0h] [rbp-80h]
  void *__srca; // [rsp+6A8h] [rbp-78h]
  size_t __n; // [rsp+6B0h] [rbp-70h]
  __int64 *v21; // [rsp+6B8h] [rbp-68h]
  __int64 v22; // [rsp+6C0h] [rbp-60h] BYREF
  __int64 *v23; // [rsp+6C8h] [rbp-58h]
  __int64 v24; // [rsp+6D0h] [rbp-50h]
  size_t v25; // [rsp+6D8h] [rbp-48h]
  __int64 v26; // [rsp+6E0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+6E8h] [rbp-38h]
  __int64 v28; // [rsp+6F0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x100702ea9*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x100702ec4*/
  v28 = *((_QWORD *)__src + 117); /*0x100702ed0*/
  v2 = *((_QWORD *)__src + 115); /*0x100702ed4*/
  v27 = *((_QWORD *)__src + 116); /*0x100702ee2*/
  v26 = v2; /*0x100702ee6*/
  v16[6] = 0; /*0x100702eea*/
  v16[0] = "get_usage_refresh_intervalset_usage_refresh_intervalget_usage_refresh_all_accountsset_usage_refresh_all_accountsrun_daemon_oncerestart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x100702efc*/
  v16[1] = 26; /*0x100702f03*/
  v16[2] = &unk_1016E98EC; /*0x100702f15*/
  v16[3] = 4; /*0x100702f1c*/
  v16[4] = __dst; /*0x100702f27*/
  v16[5] = &v26; /*0x100702f32*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x100702f47*/
  if ( !v3 ) /*0x100702f4f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x100702f63*/
      &v22,
      v16,
      &v16[2]);
    if ( (_BYTE)v22 != 6 ) /*0x100702f6c*/
    {
      v16[4] = v25; /*0x10070301a*/
      v16[3] = v24; /*0x100703025*/
      v16[2] = v23; /*0x100703034*/
      v16[1] = v22; /*0x10070303b*/
      memcpy(v13, __src + 520, sizeof(v13)); /*0x100703054*/
      v16[0] = 1; /*0x100703075*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100703090*/
        v13,
        v15[48],
        v16,
        __src + 880,
        LODWORD(v15[49]),
        HIDWORD(v15[49]));
      goto LABEL_18; /*0x100703095*/
    }
    v3 = v23; /*0x100702f72*/
  }
  codexmate_lib::commands::system::get_usage_refresh_interval::h55cbe67f3a8832f4((__int64)&v17, v3, a2); /*0x100702f80*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x100702f94*/
  if ( v17 == 1 ) /*0x100702fa0*/
  {
    v21 = v18; /*0x100702fa6*/
    v5 = __srca; /*0x100702faa*/
    v6 = __n; /*0x100702fae*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100702fb5*/
    {
      v7 = 0; /*0x100702fb7*/
      goto LABEL_7; /*0x100702fb7*/
    }
    if ( __n ) /*0x100702feb*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, __src + 520, v4); /*0x100702ff1*/
      v7 = 1; /*0x100702ff6*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100703004*/
      if ( !v8 ) /*0x10070300c*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x100702fba*/
      v9 = v8; /*0x10070300e*/
    }
    else
    {
      v9 = 1; /*0x100703097*/
    }
    memcpy((void *)v9, v5, v6); /*0x1007030a6*/
    if ( v21 ) /*0x1007030b2*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v21, 1); /*0x1007030bc*/
    LOBYTE(v22) = 3; /*0x1007030c1*/
    v23 = (__int64 *)v6; /*0x1007030c5*/
    v24 = v9; /*0x1007030c9*/
    v25 = v6; /*0x1007030cd*/
  }
  else
  {
    v25 = __n; /*0x100702fcf*/
    v24 = (__int64)__srca; /*0x100702fda*/
    v23 = v18; /*0x100702fde*/
    LOBYTE(v22) = 6; /*0x100702fe2*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h700233aea68bc06a(__src + 520); /*0x1007030d8*/
LABEL_18:
  if ( !__OFSUB__(0, v26) ) /*0x1007030e3*/
  {
    v10 = v27; /*0x1007030e5*/
    for ( i = v28 + 1; i != 1; --i ) /*0x1007030ed*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1007030fd*/
      v10 += 96; /*0x100703102*/
    }
    if ( v26 ) /*0x10070310e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 96 * v26, 8); /*0x100703121*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100703132*/
}