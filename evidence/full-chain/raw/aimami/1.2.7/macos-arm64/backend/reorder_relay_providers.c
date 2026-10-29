// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h0da0b043806c85b4; addr: 0x1006f38c0; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h0da0b043806c85b4(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  __int64 v4; // r12
  void *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r14
  const void *v8; // rbx
  size_t v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+0h] [rbp-C20h] BYREF
  _BYTE v17[360]; // [rsp+168h] [rbp-AB8h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-950h] BYREF
  _QWORD v19[58]; // [rsp+4D8h] [rbp-748h] BYREF
  _QWORD v20[50]; // [rsp+6A8h] [rbp-578h] BYREF
  _QWORD v21[50]; // [rsp+838h] [rbp-3E8h] BYREF
  _QWORD v22[58]; // [rsp+9C8h] [rbp-258h] BYREF
  _QWORD v23[3]; // [rsp+B98h] [rbp-88h] BYREF
  __int64 v24; // [rsp+BB0h] [rbp-70h] BYREF
  __int64 v25; // [rsp+BB8h] [rbp-68h]
  __int64 v26; // [rsp+BC0h] [rbp-60h]
  __int64 v27; // [rsp+BC8h] [rbp-58h]
  __int64 v28; // [rsp+BD0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+BD8h] [rbp-48h]
  __int64 v30; // [rsp+BE0h] [rbp-40h]
  void *__srca; // [rsp+BE8h] [rbp-38h]
  int v32; // [rsp+BF4h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f38e9*/
  __srca = __src + 520; /*0x1006f3901*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x1006f3905*/
  v30 = *((_QWORD *)__src + 117); /*0x1006f3911*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f3915*/
  v29 = *((_QWORD *)__src + 116); /*0x1006f3923*/
  v28 = v2; /*0x1006f3927*/
  v22[6] = 0; /*0x1006f392b*/
  v22[0] = "reorder_relay_providers"; /*0x1006f393d*/
  v22[1] = 23; /*0x1006f3944*/
  v3 = &unk_1017832C8; /*0x1006f394f*/
  v22[2] = &unk_1017832C8; /*0x1006f3956*/
  v22[3] = 7; /*0x1006f395d*/
  v22[4] = __dst; /*0x1006f3968*/
  v22[5] = &v28; /*0x1006f3973*/
  LOBYTE(v3) = 1; /*0x1006f3985*/
  v32 = (int)v3; /*0x1006f3987*/
  v4 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x1006f398f*/
  if ( !v4 ) /*0x1006f3995*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f39a9*/
      &v24,
      v22,
      &v22[2]);
    if ( (_BYTE)v24 != 6 ) /*0x1006f39b2*/
    {
      v22[4] = v27; /*0x1006f3b6d*/
      v22[3] = v26; /*0x1006f3b78*/
      v22[2] = v25; /*0x1006f3b87*/
      v22[1] = v24; /*0x1006f3b8e*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1006f3ba8*/
      v22[0] = 1; /*0x1006f3bc9*/
      v32 = 0; /*0x1006f3bd4*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f3be8*/
        v17,
        v20[48],
        v22,
        __src + 880,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
      goto LABEL_21; /*0x1006f3be8*/
    }
    v4 = v25; /*0x1006f39b8*/
  }
  v22[6] = 0; /*0x1006f39bc*/
  v22[0] = "reorder_relay_providers"; /*0x1006f39c7*/
  v22[1] = 23; /*0x1006f39ce*/
  v22[2] = &unk_1017832D5; /*0x1006f39e0*/
  v22[3] = 10; /*0x1006f39e7*/
  v22[4] = __dst; /*0x1006f39f2*/
  v22[5] = &v28; /*0x1006f39f9*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h032d8e460154486d(v21, v22); /*0x1006f3a0e*/
  if ( LOBYTE(v21[0]) == 6 ) /*0x1006f3a1a*/
  {
    v23[2] = v21[3]; /*0x1006f3a27*/
    v23[1] = v21[2]; /*0x1006f3a39*/
    v23[0] = v21[1]; /*0x1006f3a3d*/
    codexmate_lib::commands::relay::reorder_relay_providers::h2dfa62913d045c10(v19, v4, v23); /*0x1006f3a55*/
    v5 = __srca; /*0x1006f3a66*/
    memcpy(v21, __srca, sizeof(v21)); /*0x1006f3a6d*/
    if ( v19[0] == 0x8000000000000000LL ) /*0x1006f3a83*/
    {
      v7 = v19[1]; /*0x1006f3a89*/
      v8 = (const void *)v19[2]; /*0x1006f3a90*/
      v9 = v19[3]; /*0x1006f3a97*/
      if ( v19[3] < 0LL ) /*0x1006f3aa1*/
      {
        v10 = 0; /*0x1006f3aa7*/
        goto LABEL_8; /*0x1006f3aa7*/
      }
      if ( v19[3] ) /*0x1006f3bfc*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, __srca, v6); /*0x1006f3bfe*/
        v10 = 1; /*0x1006f3c03*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1006f3c11*/
        if ( !v11 ) /*0x1006f3c19*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1006f3aaa*/
        v12 = v11; /*0x1006f3c1f*/
        v5 = __srca; /*0x1006f3c22*/
      }
      else
      {
        v12 = 1; /*0x1006f3c28*/
      }
      memcpy((void *)v12, v8, v9); /*0x1006f3c37*/
      if ( v7 ) /*0x1006f3c3f*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1006f3c4c*/
      LOBYTE(v22[1]) = 3; /*0x1006f3c51*/
      v22[2] = v9; /*0x1006f3c58*/
      v22[3] = v12; /*0x1006f3c5f*/
      v22[4] = v9; /*0x1006f3c66*/
      v22[0] = 0x8000000000000000LL; /*0x1006f3c77*/
    }
    else
    {
      memcpy(v22, v19, sizeof(v22)); /*0x1006f3b5f*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h65e65036963d222b(v5, v22); /*0x1006f3c88*/
  }
  else
  {
    v22[4] = v21[3]; /*0x1006f3abe*/
    v22[3] = v21[2]; /*0x1006f3acc*/
    v22[2] = v21[1]; /*0x1006f3ae1*/
    v22[1] = v21[0]; /*0x1006f3ae8*/
    memcpy(v16, __srca, sizeof(v16)); /*0x1006f3b02*/
    v22[0] = 1; /*0x1006f3b23*/
    v32 = 0; /*0x1006f3b2e*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f3b42*/
      v16,
      v20[48],
      v22,
      __src + 880,
      LODWORD(v20[49]),
      HIDWORD(v20[49]));
  }
LABEL_21:
  if ( v28 != 0x8000000000000000LL ) /*0x1006f3c91*/
  {
    v13 = v29; /*0x1006f3c93*/
    for ( i = v30 + 1; i != 1; --i ) /*0x1006f3c9b*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f3cad*/
      v13 += 96; /*0x1006f3cb2*/
    }
    if ( v28 ) /*0x1006f3cbe*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 96 * v28, 8); /*0x1006f3cd1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f3ce2*/
}