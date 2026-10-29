// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hffff6f01f5177c5a; addr: 0x100706370; session: <审计会话>; decompiled_at: 2026-10-26T03:22:27Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hffff6f01f5177c5a(
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x100706399*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1007063b4*/
  v28 = *((_QWORD *)__src + 117); /*0x1007063c0*/
  v2 = *((_QWORD *)__src + 115); /*0x1007063c4*/
  v27 = *((_QWORD *)__src + 116); /*0x1007063d2*/
  v26 = v2; /*0x1007063d6*/
  v16[6] = 0; /*0x1007063da*/
  v16[0] = "get_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1007063ec*/
  v16[1] = 13; /*0x1007063f3*/
  v16[2] = &unk_1016E98EC; /*0x100706405*/
  v16[3] = 4; /*0x10070640c*/
  v16[4] = __dst; /*0x100706417*/
  v16[5] = &v26; /*0x100706422*/
  v3 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x100706437*/
  if ( !v3 ) /*0x10070643f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x100706453*/
      &v22,
      v16,
      &v16[2]);
    if ( (_BYTE)v22 != 6 ) /*0x10070645c*/
    {
      v16[4] = v25; /*0x10070650a*/
      v16[3] = v24; /*0x100706515*/
      v16[2] = v23; /*0x100706524*/
      v16[1] = v22; /*0x10070652b*/
      memcpy(v13, __src + 520, sizeof(v13)); /*0x100706544*/
      v16[0] = 1; /*0x100706565*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100706580*/
        v13,
        v15[48],
        v16,
        __src + 880,
        LODWORD(v15[49]),
        HIDWORD(v15[49]));
      goto LABEL_18; /*0x100706585*/
    }
    v3 = v23; /*0x100706462*/
  }
  codexmate_lib::commands::system::get_device_id::h054acd22c5044683(&v17, v3); /*0x100706470*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x100706484*/
  if ( v17 == 1 ) /*0x100706490*/
  {
    v21 = v18; /*0x100706496*/
    v5 = __srca; /*0x10070649a*/
    v6 = __n; /*0x10070649e*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1007064a5*/
    {
      v7 = 0; /*0x1007064a7*/
      goto LABEL_7; /*0x1007064a7*/
    }
    if ( __n ) /*0x1007064db*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, __src + 520, v4); /*0x1007064e1*/
      v7 = 1; /*0x1007064e6*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1007064f4*/
      if ( !v8 ) /*0x1007064fc*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1007064aa*/
      v9 = v8; /*0x1007064fe*/
    }
    else
    {
      v9 = 1; /*0x100706587*/
    }
    memcpy((void *)v9, v5, v6); /*0x100706596*/
    if ( v21 ) /*0x1007065a2*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v21, 1); /*0x1007065ac*/
    LOBYTE(v22) = 3; /*0x1007065b1*/
    v23 = v6; /*0x1007065b5*/
    v24 = v9; /*0x1007065b9*/
    v25 = v6; /*0x1007065bd*/
  }
  else
  {
    v25 = __n; /*0x1007064bf*/
    v24 = (__int64)__srca; /*0x1007064ca*/
    v23 = v18; /*0x1007064ce*/
    LOBYTE(v22) = 6; /*0x1007064d2*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h700233aea68bc06a(__src + 520); /*0x1007065c8*/
LABEL_18:
  if ( !__OFSUB__(0, v26) ) /*0x1007065d3*/
  {
    v10 = v27; /*0x1007065d5*/
    for ( i = v28 + 1; i != 1; --i ) /*0x1007065dd*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1007065ed*/
      v10 += 96; /*0x1007065f2*/
    }
    if ( v26 ) /*0x1007065fe*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 96 * v26, 8); /*0x100706611*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100706622*/
}