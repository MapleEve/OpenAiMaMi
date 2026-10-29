// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf8f3b81a61279b9a; addr: 0x100705650; session: <审计会话>; decompiled_at: 2026-10-26T03:34:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf8f3b81a61279b9a(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // r12
  void *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r14
  void *v7; // rbx
  size_t v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 i; // r15
  _BYTE v15[360]; // [rsp+8h] [rbp-AF8h] BYREF
  _BYTE v16[360]; // [rsp+170h] [rbp-990h] BYREF
  _BYTE v17[360]; // [rsp+2D8h] [rbp-828h] BYREF
  _QWORD __dst[65]; // [rsp+440h] [rbp-6C0h] BYREF
  _QWORD __srca[50]; // [rsp+648h] [rbp-4B8h] BYREF
  _QWORD v20[50]; // [rsp+7D8h] [rbp-328h] BYREF
  _QWORD v21[19]; // [rsp+968h] [rbp-198h] BYREF
  _QWORD v22[3]; // [rsp+A00h] [rbp-100h] BYREF
  int v23; // [rsp+A18h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+A20h] [rbp-E0h]
  void *v25; // [rsp+A28h] [rbp-D8h]
  size_t __n; // [rsp+A30h] [rbp-D0h]
  __int64 v27; // [rsp+A38h] [rbp-C8h] BYREF
  char *v28; // [rsp+A40h] [rbp-C0h]
  __int64 v29; // [rsp+A48h] [rbp-B8h]
  _QWORD *v30; // [rsp+A50h] [rbp-B0h]
  __int64 v31; // [rsp+A58h] [rbp-A8h] BYREF
  char *v32; // [rsp+A60h] [rbp-A0h]
  __int64 v33; // [rsp+A68h] [rbp-98h]
  _QWORD *v34; // [rsp+A70h] [rbp-90h]
  __int64 v35; // [rsp+A78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+A80h] [rbp-80h]
  __int64 v37; // [rsp+A88h] [rbp-78h]
  void *v38; // [rsp+A90h] [rbp-70h]
  __int64 v39; // [rsp+A98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+AA0h] [rbp-60h]
  char *v41; // [rsp+AA8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+AB0h] [rbp-50h]
  _QWORD *v43; // [rsp+AB8h] [rbp-48h]
  __int64 *v44; // [rsp+AC0h] [rbp-40h]
  __int64 v45; // [rsp+AC8h] [rbp-38h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x100705679*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x100705694*/
  v37 = *((_QWORD *)__src + 117); /*0x1007056a0*/
  v2 = *((_QWORD *)__src + 115); /*0x1007056a4*/
  v36 = *((_QWORD *)__src + 116); /*0x1007056b2*/
  v35 = v2; /*0x1007056b6*/
  v45 = 0; /*0x1007056bd*/
  v39 = (__int64)"set_usage_refresh_intervalget_usage_refresh_all_accountsset_usage_refresh_all_accountsrun_daemon_oncerestart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1007056cc*/
  v40 = 26; /*0x1007056d0*/
  v41 = "appstarted"; /*0x1007056df*/
  v42 = 3; /*0x1007056e3*/
  v43 = __dst; /*0x1007056eb*/
  v44 = &v35; /*0x1007056f6*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(__srca); /*0x100705708*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x100705714*/
  {
    v38 = __src + 520; /*0x100705794*/
    memcpy(v21, __srca, sizeof(v21)); /*0x1007057ab*/
    v45 = 0; /*0x1007057b0*/
    v39 = (__int64)"set_usage_refresh_intervalget_usage_refresh_all_accountsset_usage_refresh_all_accountsrun_daemon_oncerestart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1007057bf*/
    v40 = 26; /*0x1007057c3*/
    v41 = (char *)&unk_1016E98EC; /*0x1007057d2*/
    v42 = 4; /*0x1007057d6*/
    v43 = __dst; /*0x1007057de*/
    v44 = &v35; /*0x1007057e2*/
    v3 = (__int64 *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x1007057f6*/
    if ( !v3 ) /*0x1007057fc*/
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x10070580d*/
        &v27,
        &v39,
        &v41);
      if ( (_BYTE)v27 != 6 ) /*0x100705819*/
      {
        v43 = v30; /*0x1007059d4*/
        v42 = v29; /*0x1007059df*/
        v41 = v28; /*0x1007059f1*/
        v40 = v27; /*0x1007059f5*/
        memcpy(v16, v38, sizeof(v16)); /*0x100705a0c*/
        v39 = 1; /*0x100705a2d*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100705a42*/
          v16,
          v20[48],
          &v39,
          __src + 880,
          LODWORD(v20[49]),
          HIDWORD(v20[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v21); /*0x100705a51*/
        goto LABEL_22; /*0x100705a56*/
      }
      v3 = (__int64 *)v28; /*0x10070581f*/
    }
    v45 = 0; /*0x100705826*/
    v39 = (__int64)"set_usage_refresh_intervalget_usage_refresh_all_accountsset_usage_refresh_all_accountsrun_daemon_oncerestart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x10070582e*/
    v40 = 26; /*0x100705832*/
    v41 = "intervalSKILL.mdResponseProjectsfinishedprogressminWidthmaxWidthclosableproxyUrldevtoolsid_tokenauthPathrootPathencodingsequencemetadatamultipleapiProxypub_dateNulErrorUrlParseapp_showapp_hideset_textpositionchannelsbasenameresolverset_menu"; /*0x100705841*/
    v42 = 8; /*0x100705845*/
    v43 = __dst; /*0x10070584d*/
    v44 = &v35; /*0x100705851*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(&v31, &v39); /*0x100705863*/
    if ( (_BYTE)v31 != 6 ) /*0x10070586f*/
    {
      v43 = v34; /*0x100705916*/
      v42 = v33; /*0x100705921*/
      v41 = v32; /*0x100705933*/
      v40 = v31; /*0x100705937*/
      memcpy(v15, v38, sizeof(v15)); /*0x10070594e*/
      v39 = 1; /*0x10070596f*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100705981*/
        v15,
        v20[48],
        &v39,
        __src + 880,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v21); /*0x100705990*/
      goto LABEL_22; /*0x100705995*/
    }
    v22[2] = v34; /*0x10070587c*/
    v22[1] = v33; /*0x100705891*/
    v22[0] = v32; /*0x100705898*/
    codexmate_lib::commands::system::set_usage_refresh_interval::h0b4f0cc6162231d6( /*0x1007058b7*/
      (__int64)&v23,
      (__int64)v21,
      v3,
      v22,
      a2);
    v4 = v38; /*0x1007058c8*/
    memcpy(__srca, v38, sizeof(__srca)); /*0x1007058cf*/
    if ( v23 == 1 ) /*0x1007058db*/
    {
      v6 = v24; /*0x1007058e1*/
      v7 = v25; /*0x1007058e8*/
      v8 = __n; /*0x1007058ef*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1007058f9*/
      {
        v9 = 0; /*0x1007058ff*/
        goto LABEL_10; /*0x1007058ff*/
      }
      if ( __n ) /*0x100705a5b*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, v38, v5); /*0x100705a5d*/
        v9 = 1; /*0x100705a62*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x100705a70*/
        if ( !v10 ) /*0x100705a78*/
LABEL_10:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x100705902*/
        v11 = v10; /*0x100705a7e*/
      }
      else
      {
        v11 = 1; /*0x100705a83*/
      }
      memcpy((void *)v11, v7, v8); /*0x100705a92*/
      if ( v6 ) /*0x100705a9a*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x100705aa7*/
      LOBYTE(v21[0]) = 3; /*0x100705aac*/
      v21[1] = v8; /*0x100705ab3*/
      v21[2] = v11; /*0x100705aba*/
      v21[3] = v8; /*0x100705ac1*/
      v4 = v38; /*0x100705ac8*/
    }
    else
    {
      v21[3] = __n; /*0x1007059a5*/
      v21[2] = v25; /*0x1007059b3*/
      v21[1] = v24; /*0x1007059ba*/
      LOBYTE(v21[0]) = 6; /*0x1007059c1*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h700233aea68bc06a(v4); /*0x100705ad6*/
    goto LABEL_22; /*0x100705ad6*/
  }
  v43 = (_QWORD *)__srca[4]; /*0x10070571d*/
  v42 = __srca[3]; /*0x100705728*/
  v41 = (char *)__srca[2]; /*0x10070573a*/
  v40 = __srca[1]; /*0x10070573e*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x100705754*/
  v39 = 1; /*0x100705775*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x10070578a*/
    v17,
    v20[48],
    &v39,
    __src + 880,
    LODWORD(v20[49]),
    HIDWORD(v20[49]));
LABEL_22:
  if ( !__OFSUB__(0, v35) ) /*0x100705ae4*/
  {
    v12 = v36; /*0x100705ae6*/
    for ( i = v37 + 1; i != 1; --i ) /*0x100705aee*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x100705b0d*/
      v12 += 96; /*0x100705b12*/
    }
    if ( v35 ) /*0x100705b21*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 96 * v35, 8); /*0x100705b34*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100705b45*/
}