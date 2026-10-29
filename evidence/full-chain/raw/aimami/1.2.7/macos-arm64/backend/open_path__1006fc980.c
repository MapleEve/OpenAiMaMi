// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h72547a81ecd9a21e; addr: 0x1006fc980; session: <审计会话>; decompiled_at: 2026-10-26T03:22:34Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h72547a81ecd9a21e(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  size_t v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r13
  void *v9; // r15
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+8h] [rbp-728h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-5C0h] BYREF
  _QWORD v15[50]; // [rsp+378h] [rbp-3B8h] BYREF
  _QWORD v16[50]; // [rsp+508h] [rbp-228h] BYREF
  _QWORD v17[3]; // [rsp+698h] [rbp-98h] BYREF
  _QWORD v18[2]; // [rsp+6B0h] [rbp-80h] BYREF
  size_t __n; // [rsp+6C0h] [rbp-70h]
  void *__srca; // [rsp+6C8h] [rbp-68h]
  __int64 v21; // [rsp+6D0h] [rbp-60h] BYREF
  size_t v22; // [rsp+6D8h] [rbp-58h]
  __int64 v23; // [rsp+6E0h] [rbp-50h]
  size_t v24; // [rsp+6E8h] [rbp-48h]
  __int64 v25; // [rsp+6F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+6F8h] [rbp-38h]
  __int64 v27; // [rsp+700h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fc9a9*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1006fc9c4*/
  v27 = *((_QWORD *)__src + 117); /*0x1006fc9d0*/
  v2 = *((_QWORD *)__src + 115); /*0x1006fc9d4*/
  v26 = *((_QWORD *)__src + 116); /*0x1006fc9e2*/
  v25 = v2; /*0x1006fc9e6*/
  v16[6] = 0; /*0x1006fc9ea*/
  v16[0] = "open_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1006fc9fc*/
  v16[1] = 9; /*0x1006fca03*/
  v16[2] = "pathtransportcommandheadersenvironmentnetworkgrantsinputeventunable to create thread with 8MiB stackthe gener" /*0x1006fca15*/
           "ated Tauri `Context` panicked during creation\n";
  v16[3] = 4; /*0x1006fca1c*/
  v16[4] = __dst; /*0x1006fca27*/
  v16[5] = &v25; /*0x1006fca32*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(&v21, v16); /*0x1006fca47*/
  if ( (_BYTE)v21 == 6 ) /*0x1006fca5a*/
  {
    v17[2] = v24; /*0x1006fca60*/
    v17[1] = v23; /*0x1006fca6f*/
    v17[0] = v22; /*0x1006fca76*/
    codexmate_lib::commands::system::open_path::h4d7b44362e684710(v18, v17); /*0x1006fca88*/
    memcpy(v16, __src + 520, sizeof(v16)); /*0x1006fca9c*/
    v4 = v18[0]; /*0x1006fcaa1*/
    if ( v18[0] == 0x8000000000000000LL ) /*0x1006fcaa8*/
    {
      LOBYTE(v21) = 6; /*0x1006fcaae*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::he92e07bdbef96a86(__src + 520); /*0x1006fcbc7*/
      goto LABEL_16; /*0x1006fcbce*/
    }
    v5 = __n; /*0x1006fcb3f*/
    __srca = (void *)v18[1]; /*0x1006fcb46*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006fcb4a*/
    {
      v6 = 0; /*0x1006fcb4c*/
      goto LABEL_7; /*0x1006fcb4c*/
    }
    if ( __n ) /*0x1006fcb5c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, __src + 520, v3); /*0x1006fcb5e*/
      v6 = 1; /*0x1006fcb63*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1006fcb71*/
      if ( !v7 ) /*0x1006fcb79*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x1006fcb4f*/
      v8 = v7; /*0x1006fcb7b*/
    }
    else
    {
      v8 = 1; /*0x1006fcb80*/
    }
    v9 = __srca; /*0x1006fcb89*/
    memcpy((void *)v8, __srca, v5); /*0x1006fcb93*/
    if ( v4 ) /*0x1006fcb9b*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v4, 1); /*0x1006fcba8*/
    LOBYTE(v21) = 3; /*0x1006fcbad*/
    v22 = v5; /*0x1006fcbb1*/
    v23 = v8; /*0x1006fcbb5*/
    v24 = v5; /*0x1006fcbb9*/
    goto LABEL_15; /*0x1006fcbb9*/
  }
  v16[4] = v24; /*0x1006fcabb*/
  v16[3] = v23; /*0x1006fcac6*/
  v16[2] = v22; /*0x1006fcad5*/
  v16[1] = v21; /*0x1006fcadc*/
  memcpy(v13, __src + 520, sizeof(v13)); /*0x1006fcaf5*/
  v16[0] = 1; /*0x1006fcb16*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fcb31*/
    v13,
    v15[48],
    v16,
    __src + 880,
    LODWORD(v15[49]),
    HIDWORD(v15[49]));
LABEL_16:
  if ( v25 != 0x8000000000000000LL ) /*0x1006fcbd7*/
  {
    v10 = v26; /*0x1006fcbd9*/
    for ( i = v27 + 1; i != 1; --i ) /*0x1006fcbe1*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fcbfd*/
      v10 += 96; /*0x1006fcc02*/
    }
    if ( v25 ) /*0x1006fcc0e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 96 * v25, 8); /*0x1006fcc21*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006fcc32*/
}