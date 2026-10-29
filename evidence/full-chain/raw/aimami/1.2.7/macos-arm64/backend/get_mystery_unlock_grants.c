// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h251f06b4dc5b01a2; addr: 0x1006f4b50; session: <审计会话>; decompiled_at: 2026-10-26T03:22:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h251f06b4dc5b01a2(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
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
  size_t v18; // [rsp+6A0h] [rbp-80h]
  void *__srca; // [rsp+6A8h] [rbp-78h]
  size_t __n; // [rsp+6B0h] [rbp-70h]
  size_t v21; // [rsp+6B8h] [rbp-68h]
  __int64 v22; // [rsp+6C0h] [rbp-60h] BYREF
  size_t v23; // [rsp+6C8h] [rbp-58h]
  __int64 v24; // [rsp+6D0h] [rbp-50h]
  size_t v25; // [rsp+6D8h] [rbp-48h]
  __int64 v26; // [rsp+6E0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+6E8h] [rbp-38h]
  __int64 v28; // [rsp+6F0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f4b79*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1006f4b94*/
  v28 = *((_QWORD *)__src + 117); /*0x1006f4ba0*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f4ba4*/
  v27 = *((_QWORD *)__src + 116); /*0x1006f4bb2*/
  v26 = v2; /*0x1006f4bb6*/
  v16[6] = 0; /*0x1006f4bba*/
  v16[0] = "get_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1006f4bcc*/
  v16[1] = 25; /*0x1006f4bd3*/
  v16[2] = &unk_1016E98EC; /*0x1006f4be5*/
  v16[3] = 4; /*0x1006f4bec*/
  v16[4] = __dst; /*0x1006f4bf7*/
  v16[5] = &v26; /*0x1006f4c02*/
  v3 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x1006f4c17*/
  if ( !v3 ) /*0x1006f4c1f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f4c33*/
      &v22,
      v16,
      &v16[2]);
    if ( (_BYTE)v22 != 6 ) /*0x1006f4c3c*/
    {
      v16[4] = v25; /*0x1006f4cea*/
      v16[3] = v24; /*0x1006f4cf5*/
      v16[2] = v23; /*0x1006f4d04*/
      v16[1] = v22; /*0x1006f4d0b*/
      memcpy(v13, __src + 520, sizeof(v13)); /*0x1006f4d24*/
      v16[0] = 1; /*0x1006f4d45*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f4d60*/
        v13,
        v15[48],
        v16,
        __src + 880,
        LODWORD(v15[49]),
        HIDWORD(v15[49]));
      goto LABEL_18; /*0x1006f4d65*/
    }
    v3 = v23; /*0x1006f4c42*/
  }
  codexmate_lib::commands::system::get_mystery_unlock_grants::h595c9a1d33ec634d(&v17, v3); /*0x1006f4c50*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1006f4c64*/
  if ( v17 == 1 ) /*0x1006f4c70*/
  {
    v21 = v18; /*0x1006f4c76*/
    v5 = __srca; /*0x1006f4c7a*/
    v6 = __n; /*0x1006f4c7e*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f4c85*/
    {
      v7 = 0; /*0x1006f4c87*/
      goto LABEL_7; /*0x1006f4c87*/
    }
    if ( __n ) /*0x1006f4cbb*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, __src + 520, v4); /*0x1006f4cc1*/
      v7 = 1; /*0x1006f4cc6*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006f4cd4*/
      if ( !v8 ) /*0x1006f4cdc*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006f4c8a*/
      v9 = v8; /*0x1006f4cde*/
    }
    else
    {
      v9 = 1; /*0x1006f4d67*/
    }
    memcpy((void *)v9, v5, v6); /*0x1006f4d76*/
    if ( v21 ) /*0x1006f4d82*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v21, 1); /*0x1006f4d8c*/
    LOBYTE(v22) = 3; /*0x1006f4d91*/
    v23 = v6; /*0x1006f4d95*/
    v24 = v9; /*0x1006f4d99*/
    v25 = v6; /*0x1006f4d9d*/
  }
  else
  {
    v25 = __n; /*0x1006f4c9f*/
    v24 = (__int64)__srca; /*0x1006f4caa*/
    v23 = v18; /*0x1006f4cae*/
    LOBYTE(v22) = 6; /*0x1006f4cb2*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h5d7fcc8c5399b8ef(__src + 520); /*0x1006f4da8*/
LABEL_18:
  if ( !__OFSUB__(0, v26) ) /*0x1006f4db3*/
  {
    v10 = v27; /*0x1006f4db5*/
    for ( i = v28 + 1; i != 1; --i ) /*0x1006f4dbd*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f4dcd*/
      v10 += 96; /*0x1006f4dd2*/
    }
    if ( v26 ) /*0x1006f4dde*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 96 * v26, 8); /*0x1006f4df1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f4e02*/
}