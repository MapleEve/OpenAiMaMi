// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbf9f031e138c1cb2; addr: 0x1007016b0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:34Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbf9f031e138c1cb2(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  __int64 v4; // r12
  void *v5; // rbx
  __int64 v6; // rdx
  void *v7; // r14
  size_t v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 i; // r15
  _BYTE v15[360]; // [rsp+0h] [rbp-8C0h] BYREF
  _BYTE v16[360]; // [rsp+168h] [rbp-758h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-5F0h] BYREF
  _QWORD v18[50]; // [rsp+4D8h] [rbp-3E8h] BYREF
  _QWORD v19[50]; // [rsp+668h] [rbp-258h] BYREF
  _QWORD v20[3]; // [rsp+7F8h] [rbp-C8h] BYREF
  int v21; // [rsp+810h] [rbp-B0h] BYREF
  size_t v22; // [rsp+818h] [rbp-A8h]
  void *v23; // [rsp+820h] [rbp-A0h]
  size_t __n; // [rsp+828h] [rbp-98h]
  __int64 v25; // [rsp+830h] [rbp-90h] BYREF
  __int64 v26; // [rsp+838h] [rbp-88h]
  __int64 v27; // [rsp+840h] [rbp-80h]
  __int64 v28; // [rsp+848h] [rbp-78h]
  __int64 v29; // [rsp+850h] [rbp-70h] BYREF
  __int64 v30; // [rsp+858h] [rbp-68h]
  __int64 v31; // [rsp+860h] [rbp-60h]
  void *__srca; // [rsp+868h] [rbp-58h]
  __int64 v33; // [rsp+870h] [rbp-50h] BYREF
  size_t v34; // [rsp+878h] [rbp-48h]
  __int64 v35; // [rsp+880h] [rbp-40h]
  size_t v36; // [rsp+888h] [rbp-38h]
  size_t v37; // [rsp+890h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1007016d9*/
  __srca = __src + 520; /*0x1007016f1*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1007016f5*/
  v31 = *((_QWORD *)__src + 117); /*0x100701701*/
  v2 = *((_QWORD *)__src + 115); /*0x100701705*/
  v30 = *((_QWORD *)__src + 116); /*0x100701713*/
  v29 = v2; /*0x100701717*/
  v19[6] = 0; /*0x10070171b*/
  v19[0] = "merge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x10070172d*/
  v19[1] = 27; /*0x100701734*/
  v3 = &unk_1016E98EC; /*0x10070173f*/
  v19[2] = &unk_1016E98EC; /*0x100701746*/
  v19[3] = 4; /*0x10070174d*/
  v19[4] = __dst; /*0x100701758*/
  v19[5] = &v29; /*0x100701763*/
  LOBYTE(v3) = 1; /*0x100701775*/
  LODWORD(v37) = (_DWORD)v3; /*0x100701777*/
  v4 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x10070177f*/
  if ( !v4 ) /*0x100701785*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x10070179c*/
      &v25,
      v19,
      &v19[2]);
    if ( (_BYTE)v25 != 6 ) /*0x1007017a8*/
    {
      v19[4] = v28; /*0x100701955*/
      v19[3] = v27; /*0x100701960*/
      v19[2] = v26; /*0x100701975*/
      v19[1] = v25; /*0x10070197c*/
      memcpy(v16, __srca, sizeof(v16)); /*0x100701996*/
      v19[0] = 1; /*0x1007019b7*/
      LODWORD(v37) = 0; /*0x1007019c2*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1007019d6*/
        v16,
        v18[48],
        v19,
        __src + 880,
        LODWORD(v18[49]),
        HIDWORD(v18[49]));
      goto LABEL_20; /*0x1007019db*/
    }
    v4 = v26; /*0x1007017ae*/
  }
  v19[6] = 0; /*0x1007017b5*/
  v19[0] = "merge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1007017c0*/
  v19[1] = 27; /*0x1007017c7*/
  v19[2] = "grantsinputeventunable to create thread with 8MiB stackthe generated Tauri `Context` panicked during creation\n"; /*0x1007017d9*/
  v19[3] = 6; /*0x1007017e0*/
  v19[4] = __dst; /*0x1007017eb*/
  v19[5] = &v29; /*0x1007017f2*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h6d710b3946208093(&v33, v19); /*0x100701804*/
  if ( (_BYTE)v33 == 6 ) /*0x10070180d*/
  {
    v20[2] = v36; /*0x100701817*/
    v20[1] = v35; /*0x100701826*/
    v20[0] = v34; /*0x10070182d*/
    codexmate_lib::commands::system::merge_mystery_unlock_grants::hb5f1c2e8710a7377(&v21, v4, v20); /*0x100701845*/
    v5 = __srca; /*0x100701856*/
    memcpy(v19, __srca, sizeof(v19)); /*0x10070185d*/
    if ( v21 == 1 ) /*0x100701869*/
    {
      v37 = v22; /*0x100701876*/
      v7 = v23; /*0x10070187a*/
      v8 = __n; /*0x100701881*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10070188b*/
      {
        v9 = 0; /*0x100701891*/
        goto LABEL_8; /*0x100701891*/
      }
      if ( __n ) /*0x1007019dd*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __srca, v6); /*0x1007019df*/
        v9 = 1; /*0x1007019e4*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1007019f2*/
        if ( !v10 ) /*0x1007019fa*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x100701894*/
        v11 = v10; /*0x100701a00*/
      }
      else
      {
        v11 = 1; /*0x100701a05*/
      }
      memcpy((void *)v11, v7, v8); /*0x100701a14*/
      if ( v37 ) /*0x100701a20*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v37, 1); /*0x100701a2a*/
      LOBYTE(v33) = 3; /*0x100701a2f*/
      v34 = v8; /*0x100701a33*/
      v35 = v11; /*0x100701a37*/
      v36 = v8; /*0x100701a3b*/
    }
    else
    {
      v36 = __n; /*0x100701935*/
      v35 = (__int64)v23; /*0x100701940*/
      v34 = v22; /*0x100701944*/
      LOBYTE(v33) = 6; /*0x100701948*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h5d7fcc8c5399b8ef(v5); /*0x100701a46*/
  }
  else
  {
    v19[4] = v36; /*0x1007018a5*/
    v19[3] = v35; /*0x1007018b0*/
    v19[2] = v34; /*0x1007018bf*/
    v19[1] = v33; /*0x1007018c6*/
    memcpy(v15, __srca, sizeof(v15)); /*0x1007018e0*/
    v19[0] = 1; /*0x100701901*/
    LODWORD(v37) = 0; /*0x10070190c*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100701920*/
      v15,
      v18[48],
      v19,
      __src + 880,
      LODWORD(v18[49]),
      HIDWORD(v18[49]));
  }
LABEL_20:
  if ( !__OFSUB__(0, v29) ) /*0x100701a51*/
  {
    v12 = v30; /*0x100701a53*/
    for ( i = v31 + 1; i != 1; --i ) /*0x100701a5b*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x100701a6d*/
      v12 += 96; /*0x100701a72*/
    }
    if ( v29 ) /*0x100701a7e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 96 * v29, 8); /*0x100701a91*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100701aa2*/
}