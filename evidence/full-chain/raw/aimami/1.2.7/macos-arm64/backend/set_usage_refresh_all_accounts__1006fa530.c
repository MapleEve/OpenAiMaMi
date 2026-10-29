// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h62487ee98563a4ed; addr: 0x1006fa530; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h62487ee98563a4ed(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  __int64 v4; // r12
  void *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r14
  size_t v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  void *v12; // r15
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+0h] [rbp-8A0h] BYREF
  _BYTE v17[360]; // [rsp+168h] [rbp-738h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-5D0h] BYREF
  _QWORD v19[50]; // [rsp+4D8h] [rbp-3C8h] BYREF
  _QWORD v20[50]; // [rsp+668h] [rbp-238h] BYREF
  __int64 v21; // [rsp+7F8h] [rbp-A8h] BYREF
  void *v22; // [rsp+800h] [rbp-A0h]
  size_t __n; // [rsp+808h] [rbp-98h]
  __int64 v24; // [rsp+810h] [rbp-90h] BYREF
  __int64 v25; // [rsp+818h] [rbp-88h]
  __int64 v26; // [rsp+820h] [rbp-80h]
  __int64 v27; // [rsp+828h] [rbp-78h]
  __int64 v28; // [rsp+830h] [rbp-70h] BYREF
  size_t v29; // [rsp+838h] [rbp-68h]
  __int64 v30; // [rsp+840h] [rbp-60h]
  size_t v31; // [rsp+848h] [rbp-58h]
  __int64 v32; // [rsp+850h] [rbp-50h] BYREF
  __int64 v33; // [rsp+858h] [rbp-48h]
  __int64 v34; // [rsp+860h] [rbp-40h]
  void *__srca; // [rsp+868h] [rbp-38h]
  void *v36; // [rsp+870h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fa559*/
  __srca = __src + 520; /*0x1006fa571*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1006fa575*/
  v34 = *((_QWORD *)__src + 117); /*0x1006fa581*/
  v2 = *((_QWORD *)__src + 115); /*0x1006fa585*/
  v33 = *((_QWORD *)__src + 116); /*0x1006fa593*/
  v32 = v2; /*0x1006fa597*/
  v20[6] = 0; /*0x1006fa59b*/
  v20[0] = "set_usage_refresh_all_accountsrun_daemon_oncerestart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1006fa5ad*/
  v20[1] = 30; /*0x1006fa5b4*/
  v3 = &unk_1016E98EC; /*0x1006fa5bf*/
  v20[2] = &unk_1016E98EC; /*0x1006fa5c6*/
  v20[3] = 4; /*0x1006fa5cd*/
  v20[4] = __dst; /*0x1006fa5d8*/
  v20[5] = &v32; /*0x1006fa5e3*/
  LOBYTE(v3) = 1; /*0x1006fa5f5*/
  LODWORD(v36) = (_DWORD)v3; /*0x1006fa5f7*/
  v4 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x1006fa5ff*/
  if ( !v4 ) /*0x1006fa605*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006fa61c*/
      &v24,
      v20,
      &v20[2]);
    if ( (_BYTE)v24 != 6 ) /*0x1006fa628*/
    {
      v20[4] = v27; /*0x1006fa79f*/
      v20[3] = v26; /*0x1006fa7aa*/
      v20[2] = v25; /*0x1006fa7bf*/
      v20[1] = v24; /*0x1006fa7c6*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1006fa7e0*/
      v20[0] = 1; /*0x1006fa801*/
      LODWORD(v36) = 0; /*0x1006fa80c*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fa820*/
        v17,
        v19[48],
        v20,
        __src + 880,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_20; /*0x1006fa825*/
    }
    v4 = v25; /*0x1006fa62e*/
  }
  v20[6] = 0; /*0x1006fa635*/
  v20[0] = "set_usage_refresh_all_accountsrun_daemon_oncerestart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1006fa640*/
  v20[1] = 30; /*0x1006fa647*/
  v20[2] = &anon_1d5e2ba954832094e55fcdce7f3204cb_472; /*0x1006fa659*/
  v20[3] = 7; /*0x1006fa660*/
  v20[4] = __dst; /*0x1006fa66b*/
  v20[5] = &v32; /*0x1006fa672*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h84e3518ea2010953(&v28, v20); /*0x1006fa684*/
  if ( (_BYTE)v28 == 6 ) /*0x1006fa68d*/
  {
    codexmate_lib::commands::system::set_usage_refresh_all_accounts::heb23e4e786aaa979(&v21, v4, BYTE1(v28)); /*0x1006fa69d*/
    v5 = __srca; /*0x1006fa6ae*/
    memcpy(v20, __srca, sizeof(v20)); /*0x1006fa6b5*/
    v7 = v21; /*0x1006fa6ba*/
    if ( v21 == 0x8000000000000000LL ) /*0x1006fa6ce*/
    {
      BYTE1(v28) = (_BYTE)v22; /*0x1006fa6db*/
      LOBYTE(v28) = 6; /*0x1006fa6de*/
LABEL_19:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hba67ea4134f24302(v5); /*0x1006fa88c*/
      goto LABEL_20; /*0x1006fa893*/
    }
    v8 = __n; /*0x1006fa777*/
    v36 = v22; /*0x1006fa781*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006fa785*/
    {
      v9 = 0; /*0x1006fa78b*/
      goto LABEL_10; /*0x1006fa78b*/
    }
    if ( __n ) /*0x1006fa827*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, __srca, v6); /*0x1006fa829*/
      v9 = 1; /*0x1006fa82e*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1006fa83c*/
      if ( !v10 ) /*0x1006fa844*/
LABEL_10:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1006fa78e*/
      v11 = v10; /*0x1006fa84a*/
    }
    else
    {
      v11 = 1; /*0x1006fa84f*/
    }
    v12 = v36; /*0x1006fa858*/
    memcpy((void *)v11, v36, v8); /*0x1006fa862*/
    if ( v7 ) /*0x1006fa86a*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v7, 1); /*0x1006fa877*/
    LOBYTE(v28) = 3; /*0x1006fa87c*/
    v29 = v8; /*0x1006fa880*/
    v30 = v11; /*0x1006fa884*/
    v31 = v8; /*0x1006fa888*/
    goto LABEL_19; /*0x1006fa888*/
  }
  v20[4] = v31; /*0x1006fa6eb*/
  v20[3] = v30; /*0x1006fa6f6*/
  v20[2] = v29; /*0x1006fa705*/
  v20[1] = v28; /*0x1006fa70c*/
  memcpy(v16, __srca, sizeof(v16)); /*0x1006fa726*/
  v20[0] = 1; /*0x1006fa747*/
  LODWORD(v36) = 0; /*0x1006fa752*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fa766*/
    v16,
    v19[48],
    v20,
    __src + 880,
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
LABEL_20:
  if ( v32 != 0x8000000000000000LL ) /*0x1006fa8a6*/
  {
    v13 = v33; /*0x1006fa8a8*/
    for ( i = v34 + 1; i != 1; --i ) /*0x1006fa8b0*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fa8cd*/
      v13 += 96; /*0x1006fa8d2*/
    }
    if ( v32 ) /*0x1006fa8de*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 96 * v32, 8); /*0x1006fa8f1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006fa902*/
}