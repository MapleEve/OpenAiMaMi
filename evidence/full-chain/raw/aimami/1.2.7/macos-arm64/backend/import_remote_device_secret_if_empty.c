// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3838f22776457268; addr: 0x1006f55a0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:31Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3838f22776457268(
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
  _BYTE v16[360]; // [rsp+8h] [rbp-8B8h] BYREF
  _BYTE v17[360]; // [rsp+170h] [rbp-750h] BYREF
  _QWORD __dst[65]; // [rsp+2D8h] [rbp-5E8h] BYREF
  _QWORD v19[50]; // [rsp+4E0h] [rbp-3E0h] BYREF
  _QWORD v20[50]; // [rsp+670h] [rbp-250h] BYREF
  _QWORD v21[3]; // [rsp+800h] [rbp-C0h] BYREF
  _QWORD v22[2]; // [rsp+818h] [rbp-A8h] BYREF
  size_t __n; // [rsp+828h] [rbp-98h]
  __int64 v24; // [rsp+830h] [rbp-90h] BYREF
  __int64 v25; // [rsp+838h] [rbp-88h]
  __int64 v26; // [rsp+840h] [rbp-80h]
  __int64 v27; // [rsp+848h] [rbp-78h]
  __int64 v28; // [rsp+850h] [rbp-70h] BYREF
  size_t v29; // [rsp+858h] [rbp-68h]
  __int64 v30; // [rsp+860h] [rbp-60h]
  size_t v31; // [rsp+868h] [rbp-58h]
  __int64 v32; // [rsp+870h] [rbp-50h] BYREF
  __int64 v33; // [rsp+878h] [rbp-48h]
  __int64 v34; // [rsp+880h] [rbp-40h]
  void *__srca; // [rsp+888h] [rbp-38h]
  void *v36; // [rsp+890h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f55c9*/
  __srca = __src + 520; /*0x1006f55e1*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1006f55e5*/
  v34 = *((_QWORD *)__src + 117); /*0x1006f55f1*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f55f5*/
  v33 = *((_QWORD *)__src + 116); /*0x1006f5603*/
  v32 = v2; /*0x1006f5607*/
  v20[6] = 0; /*0x1006f560b*/
  v20[0] = "import_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1006f561d*/
  v20[1] = 36; /*0x1006f5624*/
  v3 = &unk_1016E98EC; /*0x1006f562f*/
  v20[2] = &unk_1016E98EC; /*0x1006f5636*/
  v20[3] = 4; /*0x1006f563d*/
  v20[4] = __dst; /*0x1006f5648*/
  v20[5] = &v32; /*0x1006f5653*/
  LOBYTE(v3) = 1; /*0x1006f5665*/
  LODWORD(v36) = (_DWORD)v3; /*0x1006f5667*/
  v4 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x1006f566f*/
  if ( !v4 ) /*0x1006f5675*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f568c*/
      &v24,
      v20,
      &v20[2]);
    if ( (_BYTE)v24 != 6 ) /*0x1006f5698*/
    {
      v20[4] = v27; /*0x1006f5829*/
      v20[3] = v26; /*0x1006f5834*/
      v20[2] = v25; /*0x1006f5849*/
      v20[1] = v24; /*0x1006f5850*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1006f586a*/
      v20[0] = 1; /*0x1006f588b*/
      LODWORD(v36) = 0; /*0x1006f5896*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f58aa*/
        v17,
        v19[48],
        v20,
        __src + 880,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_20; /*0x1006f58af*/
    }
    v4 = v25; /*0x1006f569e*/
  }
  v20[6] = 0; /*0x1006f56a5*/
  v20[0] = "import_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1006f56b0*/
  v20[1] = 36; /*0x1006f56b7*/
  v20[2] = &unk_1017832F6; /*0x1006f56c9*/
  v20[3] = 6; /*0x1006f56d0*/
  v20[4] = __dst; /*0x1006f56db*/
  v20[5] = &v32; /*0x1006f56e2*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(&v28, v20); /*0x1006f56f4*/
  if ( (_BYTE)v28 == 6 ) /*0x1006f56fd*/
  {
    v21[2] = v31; /*0x1006f5703*/
    v21[1] = v30; /*0x1006f5712*/
    v21[0] = v29; /*0x1006f5719*/
    codexmate_lib::commands::system::import_remote_device_secret_if_empty::h1afc9ee0b48f84e8(v22, v4, v21); /*0x1006f5731*/
    v5 = __srca; /*0x1006f5742*/
    memcpy(v20, __srca, sizeof(v20)); /*0x1006f5749*/
    v7 = v22[0]; /*0x1006f574e*/
    if ( v22[0] == 0x8000000000000000LL ) /*0x1006f5762*/
    {
      LOBYTE(v28) = 6; /*0x1006f5768*/
LABEL_19:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::he92e07bdbef96a86(v5); /*0x1006f5916*/
      goto LABEL_20; /*0x1006f591d*/
    }
    v8 = __n; /*0x1006f5801*/
    v36 = (void *)v22[1]; /*0x1006f580b*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f580f*/
    {
      v9 = 0; /*0x1006f5815*/
      goto LABEL_10; /*0x1006f5815*/
    }
    if ( __n ) /*0x1006f58b1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, __srca, v6); /*0x1006f58b3*/
      v9 = 1; /*0x1006f58b8*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1006f58c6*/
      if ( !v10 ) /*0x1006f58ce*/
LABEL_10:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1006f5818*/
      v11 = v10; /*0x1006f58d4*/
    }
    else
    {
      v11 = 1; /*0x1006f58d9*/
    }
    v12 = v36; /*0x1006f58e2*/
    memcpy((void *)v11, v36, v8); /*0x1006f58ec*/
    if ( v7 ) /*0x1006f58f4*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v7, 1); /*0x1006f5901*/
    LOBYTE(v28) = 3; /*0x1006f5906*/
    v29 = v8; /*0x1006f590a*/
    v30 = v11; /*0x1006f590e*/
    v31 = v8; /*0x1006f5912*/
    goto LABEL_19; /*0x1006f5912*/
  }
  v20[4] = v31; /*0x1006f5775*/
  v20[3] = v30; /*0x1006f5780*/
  v20[2] = v29; /*0x1006f578f*/
  v20[1] = v28; /*0x1006f5796*/
  memcpy(v16, __srca, sizeof(v16)); /*0x1006f57b0*/
  v20[0] = 1; /*0x1006f57d1*/
  LODWORD(v36) = 0; /*0x1006f57dc*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f57f0*/
    v16,
    v19[48],
    v20,
    __src + 880,
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
LABEL_20:
  if ( v32 != 0x8000000000000000LL ) /*0x1006f5930*/
  {
    v13 = v33; /*0x1006f5932*/
    for ( i = v34 + 1; i != 1; --i ) /*0x1006f593a*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f594d*/
      v13 += 96; /*0x1006f5952*/
    }
    if ( v32 ) /*0x1006f595e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 96 * v32, 8); /*0x1006f5971*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f5982*/
}