// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hcbfd5f766d77afe3; addr: 0x100701ed0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:25Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hcbfd5f766d77afe3(
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x100701ef9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x100701f14*/
  v28 = *((_QWORD *)__src + 117); /*0x100701f20*/
  v2 = *((_QWORD *)__src + 115); /*0x100701f24*/
  v27 = *((_QWORD *)__src + 116); /*0x100701f32*/
  v26 = v2; /*0x100701f36*/
  v17[6] = 0; /*0x100701f3a*/
  v17[0] = "dismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x100701f4c*/
  v17[1] = 27; /*0x100701f53*/
  v17[2] = &unk_1016E98EC; /*0x100701f65*/
  v17[3] = 4; /*0x100701f6c*/
  v17[4] = __dst; /*0x100701f77*/
  v17[5] = &v26; /*0x100701f82*/
  v3 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x100701f97*/
  if ( v3 ) /*0x100701fa9*/
  {
LABEL_4:
    codexmate_lib::commands::system::dismiss_pending_auto_switch::hf80602c637fb1b49(&v18, v3); /*0x100701fd0*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x100701feb*/
    v5 = v18; /*0x100701ff0*/
    if ( v18 == 0x8000000000000000LL ) /*0x100701ff7*/
    {
      BYTE1(v22) = (_BYTE)v19; /*0x100701ffd*/
      LOBYTE(v22) = 6; /*0x100702000*/
LABEL_17:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hba67ea4134f24302(__src + 520); /*0x10070211d*/
      goto LABEL_18; /*0x100702124*/
    }
    v6 = __n; /*0x10070200d*/
    __srca = v19; /*0x100702014*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100702018*/
    {
      v7 = 0; /*0x10070201a*/
      goto LABEL_8; /*0x10070201a*/
    }
    if ( __n ) /*0x10070202a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520, v4); /*0x100702030*/
      v7 = 1; /*0x100702035*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100702043*/
      if ( !v8 ) /*0x10070204b*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x10070201d*/
      v9 = v8; /*0x10070204d*/
    }
    else
    {
      v9 = 1; /*0x1007020d6*/
    }
    v10 = __srca; /*0x1007020df*/
    memcpy((void *)v9, __srca, v6); /*0x1007020e9*/
    if ( v5 ) /*0x1007020f1*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v5, 1); /*0x1007020fe*/
    LOBYTE(v22) = 3; /*0x100702103*/
    v23 = v6; /*0x100702107*/
    v24 = v9; /*0x10070210b*/
    v25 = v6; /*0x10070210f*/
    goto LABEL_17; /*0x10070210f*/
  }
  _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x100701fbd*/
    &v22,
    v17,
    &v17[2]);
  if ( (_BYTE)v22 == 6 ) /*0x100701fc6*/
  {
    v3 = v23; /*0x100701fcc*/
    goto LABEL_4; /*0x100701fcc*/
  }
  v17[4] = v25; /*0x100702059*/
  v17[3] = v24; /*0x100702064*/
  v17[2] = v23; /*0x100702073*/
  v17[1] = v22; /*0x10070207a*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x100702093*/
  v17[0] = 1; /*0x1007020b4*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1007020cf*/
    v14,
    v16[48],
    v17,
    __src + 880,
    LODWORD(v16[49]),
    HIDWORD(v16[49]));
LABEL_18:
  if ( v26 != 0x8000000000000000LL ) /*0x10070212d*/
  {
    v11 = v27; /*0x10070212f*/
    for ( i = v28 + 1; i != 1; --i ) /*0x100702137*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x10070214d*/
      v11 += 96; /*0x100702152*/
    }
    if ( v26 ) /*0x10070215e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 96 * v26, 8); /*0x100702171*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100702182*/
}