// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h99e68742b398a18e; addr: 0x1006fe310; session: <审计会话>; decompiled_at: 2026-10-26T03:22:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h99e68742b398a18e(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 i; // r15
  _BYTE v6[360]; // [rsp+8h] [rbp-6A8h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-540h] BYREF
  _QWORD v8[50]; // [rsp+378h] [rbp-338h] BYREF
  _BYTE v9[152]; // [rsp+508h] [rbp-1A8h] BYREF
  _QWORD __srca[19]; // [rsp+5A0h] [rbp-110h] BYREF
  __int64 v11; // [rsp+638h] [rbp-78h] BYREF
  __int64 v12; // [rsp+640h] [rbp-70h]
  char *v13; // [rsp+648h] [rbp-68h]
  __int64 v14; // [rsp+650h] [rbp-60h]
  _BYTE *v15; // [rsp+658h] [rbp-58h]
  __int64 *v16; // [rsp+660h] [rbp-50h]
  __int64 v17; // [rsp+668h] [rbp-48h]
  __int64 v18; // [rsp+678h] [rbp-38h] BYREF
  __int64 v19; // [rsp+680h] [rbp-30h]
  __int64 v20; // [rsp+688h] [rbp-28h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fe337*/
  memcpy(v8, __src + 520, sizeof(v8)); /*0x1006fe352*/
  v20 = *((_QWORD *)__src + 117); /*0x1006fe35e*/
  v2 = *((_QWORD *)__src + 115); /*0x1006fe362*/
  v19 = *((_QWORD *)__src + 116); /*0x1006fe370*/
  v18 = v2; /*0x1006fe374*/
  v17 = 0; /*0x1006fe378*/
  v11 = (__int64)"graceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1006fe387*/
  v12 = 27; /*0x1006fe38b*/
  v13 = "appstarted"; /*0x1006fe39a*/
  v14 = 3; /*0x1006fe39e*/
  v15 = __dst; /*0x1006fe3a6*/
  v16 = &v18; /*0x1006fe3ae*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(__srca); /*0x1006fe3c0*/
  if ( LODWORD(__srca[0]) == 3 ) /*0x1006fe3cc*/
  {
    v15 = (_BYTE *)__srca[4]; /*0x1006fe3d5*/
    v14 = __srca[3]; /*0x1006fe3e0*/
    v13 = (char *)__srca[2]; /*0x1006fe3f2*/
    v12 = __srca[1]; /*0x1006fe3f6*/
    memcpy(v6, __src + 520, sizeof(v6)); /*0x1006fe40c*/
    v11 = 1; /*0x1006fe42d*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fe442*/
      v6,
      v8[48],
      &v11,
      __src + 880,
      LODWORD(v8[49]),
      HIDWORD(v8[49]));
  }
  else
  {
    memcpy(v9, __srca, sizeof(v9)); /*0x1006fe45f*/
    a2 = tauri::app::AppHandle$LT$R$GT$::request_restart::he781bb6937e3529e(__srca); /*0x1006fe467*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v9, a2); /*0x1006fe473*/
    LOBYTE(__srca[0]) = 6; /*0x1006fe478*/
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::he92e07bdbef96a86(__src + 520); /*0x1006fe489*/
  }
  if ( !__OFSUB__(0, v18) ) /*0x1006fe494*/
  {
    v3 = v19; /*0x1006fe496*/
    for ( i = v20 + 1; i != 1; --i ) /*0x1006fe49e*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fe4bd*/
      v3 += 96; /*0x1006fe4c2*/
    }
    if ( v18 ) /*0x1006fe4ce*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 96 * v18, 8); /*0x1006fe4e1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006fe4f2*/
}