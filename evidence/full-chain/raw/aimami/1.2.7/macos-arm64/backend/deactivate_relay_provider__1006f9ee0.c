// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h622d6dd03d50af36; addr: 0x1006f9ee0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:24Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h622d6dd03d50af36(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  void *v4; // rbx
  __int64 v5; // rdx
  const void *v6; // r13
  size_t v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-DA8h] BYREF
  _BYTE v15[360]; // [rsp+170h] [rbp-C40h] BYREF
  _BYTE v16[360]; // [rsp+2D8h] [rbp-AD8h] BYREF
  _QWORD __dst[65]; // [rsp+440h] [rbp-970h] BYREF
  _QWORD v18[58]; // [rsp+648h] [rbp-768h] BYREF
  _QWORD v19[50]; // [rsp+818h] [rbp-598h] BYREF
  _QWORD v20[50]; // [rsp+9A8h] [rbp-408h] BYREF
  _QWORD v21[58]; // [rsp+B38h] [rbp-278h] BYREF
  _QWORD v22[4]; // [rsp+D08h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+D28h] [rbp-88h] BYREF
  __int64 v24; // [rsp+D30h] [rbp-80h]
  __int64 v25; // [rsp+D38h] [rbp-78h]
  __int64 v26; // [rsp+D40h] [rbp-70h]
  __int64 v27; // [rsp+D48h] [rbp-68h]
  __int64 v28; // [rsp+D50h] [rbp-60h]
  __int64 v29; // [rsp+D58h] [rbp-58h]
  __int64 v30; // [rsp+D60h] [rbp-50h] BYREF
  __int64 v31; // [rsp+D68h] [rbp-48h]
  __int64 v32; // [rsp+D70h] [rbp-40h]
  void *__srca; // [rsp+D78h] [rbp-38h]
  __int64 v34; // [rsp+D80h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f9f09*/
  __srca = __src + 520; /*0x1006f9f21*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x1006f9f25*/
  v32 = *((_QWORD *)__src + 117); /*0x1006f9f31*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f9f35*/
  v31 = *((_QWORD *)__src + 116); /*0x1006f9f43*/
  v30 = v2; /*0x1006f9f47*/
  v21[6] = 0; /*0x1006f9f4b*/
  v21[0] = "deactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006f9f5d*/
  v21[1] = 25; /*0x1006f9f64*/
  v3 = &unk_1017832C8; /*0x1006f9f6f*/
  v21[2] = &unk_1017832C8; /*0x1006f9f76*/
  v21[3] = 7; /*0x1006f9f7d*/
  v21[4] = __dst; /*0x1006f9f88*/
  v21[5] = &v30; /*0x1006f9f93*/
  LOBYTE(v3) = 1; /*0x1006f9fa5*/
  LODWORD(v34) = (_DWORD)v3; /*0x1006f9fa7*/
  if ( tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL) /*0x1006f9fd8*/
    || (_$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847(
          v22,
          v21,
          &v21[2]),
        LOBYTE(v22[0]) == 6) )
  {
    v21[6] = 0; /*0x1006f9fe5*/
    v21[0] = "deactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006f9ff0*/
    v21[1] = 25; /*0x1006f9ff7*/
    v21[2] = &unk_1017832FF; /*0x1006fa009*/
    v21[3] = 10; /*0x1006fa010*/
    v21[4] = __dst; /*0x1006fa01b*/
    v21[5] = &v30; /*0x1006fa022*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(&v23, v21); /*0x1006fa037*/
    if ( (_BYTE)v23 == 6 ) /*0x1006fa043*/
    {
      v29 = v26; /*0x1006fa04d*/
      v28 = v25; /*0x1006fa059*/
      v27 = v24; /*0x1006fa05d*/
      v21[6] = 0; /*0x1006fa061*/
      v21[0] = "deactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006fa06c*/
      v21[1] = 25; /*0x1006fa073*/
      v21[2] = &unk_101783309; /*0x1006fa085*/
      v21[3] = 3; /*0x1006fa08c*/
      v21[4] = __dst; /*0x1006fa097*/
      v21[5] = &v30; /*0x1006fa09e*/
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h339e480a6b739d1f(v19, v21); /*0x1006fa0b3*/
      v4 = __srca; /*0x1006fa0bf*/
      if ( LOBYTE(v19[0]) == 6 ) /*0x1006fa0c3*/
      {
        codexmate_lib::commands::relay::deactivate_relay_provider::haff1b322d90e0b90(v18); /*0x1006fa0d7*/
        memcpy(v19, v4, sizeof(v19)); /*0x1006fa0eb*/
        if ( v18[0] == 0x8000000000000000LL ) /*0x1006fa101*/
        {
          v34 = v18[1]; /*0x1006fa10e*/
          v6 = (const void *)v18[2]; /*0x1006fa112*/
          v7 = v18[3]; /*0x1006fa119*/
          if ( v18[3] < 0LL ) /*0x1006fa123*/
          {
            v8 = 0; /*0x1006fa129*/
            goto LABEL_8; /*0x1006fa129*/
          }
          if ( v18[3] ) /*0x1006fa31c*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v4, v5); /*0x1006fa31e*/
            v8 = 1; /*0x1006fa323*/
            v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1006fa331*/
            if ( !v9 ) /*0x1006fa339*/
LABEL_8:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1006fa12c*/
            v10 = v9; /*0x1006fa33f*/
          }
          else
          {
            v10 = 1; /*0x1006fa344*/
          }
          memcpy((void *)v10, v6, v7); /*0x1006fa353*/
          if ( v34 ) /*0x1006fa35f*/
            a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v34, 1); /*0x1006fa369*/
          LOBYTE(v21[1]) = 3; /*0x1006fa36e*/
          v21[2] = v7; /*0x1006fa375*/
          v21[3] = v10; /*0x1006fa37c*/
          v21[4] = v7; /*0x1006fa383*/
          v21[0] = 0x8000000000000000LL; /*0x1006fa394*/
        }
        else
        {
          memcpy(v21, v18, sizeof(v21)); /*0x1006fa315*/
        }
        tauri::ipc::InvokeResolver$LT$R$GT$::respond::h65e65036963d222b(v4, v21); /*0x1006fa3a5*/
      }
      else
      {
        v21[4] = v19[3]; /*0x1006fa1cc*/
        v21[3] = v19[2]; /*0x1006fa1da*/
        v21[2] = v19[1]; /*0x1006fa1ef*/
        v21[1] = v19[0]; /*0x1006fa1f6*/
        memcpy(v14, __srca, sizeof(v14)); /*0x1006fa20f*/
        v21[0] = 1; /*0x1006fa230*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fa248*/
          v14,
          v20[48],
          v21,
          __src + 880,
          LODWORD(v20[49]),
          HIDWORD(v20[49]));
        if ( v27 ) /*0x1006fa254*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x1006fa263*/
      }
    }
    else
    {
      v21[4] = v26; /*0x1006fa13d*/
      v21[3] = v25; /*0x1006fa148*/
      v21[2] = v24; /*0x1006fa15a*/
      v21[1] = v23; /*0x1006fa161*/
      memcpy(v15, __srca, sizeof(v15)); /*0x1006fa17b*/
      v21[0] = 1; /*0x1006fa19c*/
      LODWORD(v34) = 0; /*0x1006fa1a7*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fa1bb*/
        v15,
        v20[48],
        v21,
        __src + 880,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
    }
  }
  else
  {
    v21[4] = v22[3]; /*0x1006fa274*/
    v21[3] = v22[2]; /*0x1006fa282*/
    v21[2] = v22[1]; /*0x1006fa297*/
    v21[1] = v22[0]; /*0x1006fa29e*/
    memcpy(v16, __srca, sizeof(v16)); /*0x1006fa2b8*/
    v21[0] = 1; /*0x1006fa2d9*/
    LODWORD(v34) = 0; /*0x1006fa2e4*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fa2f8*/
      v16,
      v20[48],
      v21,
      __src + 880,
      LODWORD(v20[49]),
      HIDWORD(v20[49]));
  }
  if ( v30 != 0x8000000000000000LL ) /*0x1006fa3b8*/
  {
    v11 = v31; /*0x1006fa3ba*/
    for ( i = v32 + 1; i != 1; --i ) /*0x1006fa3c2*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fa3dd*/
      v11 += 96; /*0x1006fa3e2*/
    }
    if ( v30 ) /*0x1006fa3ee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 96 * v30, 8); /*0x1006fa401*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006fa412*/
}