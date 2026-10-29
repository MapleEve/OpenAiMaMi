// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h091f42123bfb9dae; addr: 0x1006f3430; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h091f42123bfb9dae(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  __int64 *v4; // r12
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
  _QWORD v21[2]; // [rsp+7F8h] [rbp-A8h] BYREF
  size_t __n; // [rsp+808h] [rbp-98h]
  __int64 v23; // [rsp+810h] [rbp-90h] BYREF
  __int64 *v24; // [rsp+818h] [rbp-88h]
  __int64 v25; // [rsp+820h] [rbp-80h]
  __int64 v26; // [rsp+828h] [rbp-78h]
  __int64 v27; // [rsp+830h] [rbp-70h] BYREF
  size_t v28; // [rsp+838h] [rbp-68h]
  __int64 v29; // [rsp+840h] [rbp-60h]
  size_t v30; // [rsp+848h] [rbp-58h]
  __int64 v31; // [rsp+850h] [rbp-50h] BYREF
  __int64 v32; // [rsp+858h] [rbp-48h]
  __int64 v33; // [rsp+860h] [rbp-40h]
  void *__srca; // [rsp+868h] [rbp-38h]
  void *v35; // [rsp+870h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f3459*/
  __srca = __src + 520; /*0x1006f3471*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1006f3475*/
  v33 = *((_QWORD *)__src + 117); /*0x1006f3481*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f3485*/
  v32 = *((_QWORD *)__src + 116); /*0x1006f3493*/
  v31 = v2; /*0x1006f3497*/
  v20[6] = 0; /*0x1006f349b*/
  v20[0] = "set_dashboard_analytics_active"; /*0x1006f34ad*/
  v20[1] = 30; /*0x1006f34b4*/
  v3 = &unk_1016E98EC; /*0x1006f34bf*/
  v20[2] = &unk_1016E98EC; /*0x1006f34c6*/
  v20[3] = 4; /*0x1006f34cd*/
  v20[4] = __dst; /*0x1006f34d8*/
  v20[5] = &v31; /*0x1006f34e3*/
  LOBYTE(v3) = 1; /*0x1006f34f5*/
  LODWORD(v35) = (_DWORD)v3; /*0x1006f34f7*/
  v4 = (__int64 *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x1006f34ff*/
  if ( !v4 ) /*0x1006f3505*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f351c*/
      &v23,
      v20,
      &v20[2]);
    if ( (_BYTE)v23 != 6 ) /*0x1006f3528*/
    {
      v20[4] = v26; /*0x1006f3695*/
      v20[3] = v25; /*0x1006f36a0*/
      v20[2] = v24; /*0x1006f36b5*/
      v20[1] = v23; /*0x1006f36bc*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1006f36d6*/
      v20[0] = 1; /*0x1006f36f7*/
      LODWORD(v35) = 0; /*0x1006f3702*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f3716*/
        v17,
        v19[48],
        v20,
        __src + 880,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_20; /*0x1006f371b*/
    }
    v4 = v24; /*0x1006f352e*/
  }
  v20[6] = 0; /*0x1006f3535*/
  v20[0] = "set_dashboard_analytics_active"; /*0x1006f3540*/
  v20[1] = 30; /*0x1006f3547*/
  v20[2] = &unk_1017832CF; /*0x1006f3559*/
  v20[3] = 6; /*0x1006f3560*/
  v20[4] = __dst; /*0x1006f356b*/
  v20[5] = &v31; /*0x1006f3572*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h84e3518ea2010953(&v27, v20); /*0x1006f3584*/
  if ( (_BYTE)v27 == 6 ) /*0x1006f358d*/
  {
    codexmate_lib::commands::analytics::set_dashboard_analytics_active::h28e5629f5cb8146a( /*0x1006f359d*/
      (__int64)v21,
      v4,
      BYTE1(v27),
      a2);
    v5 = __srca; /*0x1006f35ae*/
    memcpy(v20, __srca, sizeof(v20)); /*0x1006f35b5*/
    v7 = v21[0]; /*0x1006f35ba*/
    if ( v21[0] == 0x8000000000000000LL ) /*0x1006f35ce*/
    {
      LOBYTE(v27) = 6; /*0x1006f35d4*/
LABEL_19:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::he92e07bdbef96a86(v5); /*0x1006f3782*/
      goto LABEL_20; /*0x1006f3789*/
    }
    v8 = __n; /*0x1006f366d*/
    v35 = (void *)v21[1]; /*0x1006f3677*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f367b*/
    {
      v9 = 0; /*0x1006f3681*/
      goto LABEL_10; /*0x1006f3681*/
    }
    if ( __n ) /*0x1006f371d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, __srca, v6); /*0x1006f371f*/
      v9 = 1; /*0x1006f3724*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1006f3732*/
      if ( !v10 ) /*0x1006f373a*/
LABEL_10:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1006f3684*/
      v11 = v10; /*0x1006f3740*/
    }
    else
    {
      v11 = 1; /*0x1006f3745*/
    }
    v12 = v35; /*0x1006f374e*/
    memcpy((void *)v11, v35, v8); /*0x1006f3758*/
    if ( v7 ) /*0x1006f3760*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v7, 1); /*0x1006f376d*/
    LOBYTE(v27) = 3; /*0x1006f3772*/
    v28 = v8; /*0x1006f3776*/
    v29 = v11; /*0x1006f377a*/
    v30 = v8; /*0x1006f377e*/
    goto LABEL_19; /*0x1006f377e*/
  }
  v20[4] = v30; /*0x1006f35e1*/
  v20[3] = v29; /*0x1006f35ec*/
  v20[2] = v28; /*0x1006f35fb*/
  v20[1] = v27; /*0x1006f3602*/
  memcpy(v16, __srca, sizeof(v16)); /*0x1006f361c*/
  v20[0] = 1; /*0x1006f363d*/
  LODWORD(v35) = 0; /*0x1006f3648*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f365c*/
    v16,
    v19[48],
    v20,
    __src + 880,
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
LABEL_20:
  if ( v31 != 0x8000000000000000LL ) /*0x1006f379c*/
  {
    v13 = v32; /*0x1006f379e*/
    for ( i = v33 + 1; i != 1; --i ) /*0x1006f37a6*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f37bd*/
      v13 += 96; /*0x1006f37c2*/
    }
    if ( v31 ) /*0x1006f37ce*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 96 * v31, 8); /*0x1006f37e1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f37f2*/
}