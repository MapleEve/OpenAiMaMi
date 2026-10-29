// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha5cf185a6994032d; addr: 0x1006fe810; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha5cf185a6994032d(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  void *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rbx
  size_t v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  void *v11; // r15
  __int64 v12; // rdi
  __int64 i; // r15
  _BYTE v15[360]; // [rsp+8h] [rbp-DA8h] BYREF
  _BYTE v16[360]; // [rsp+170h] [rbp-C40h] BYREF
  _BYTE v17[360]; // [rsp+2D8h] [rbp-AD8h] BYREF
  _QWORD __dst[65]; // [rsp+440h] [rbp-970h] BYREF
  _QWORD v19[58]; // [rsp+648h] [rbp-768h] BYREF
  _QWORD v20[50]; // [rsp+818h] [rbp-598h] BYREF
  _QWORD v21[50]; // [rsp+9A8h] [rbp-408h] BYREF
  _QWORD v22[58]; // [rsp+B38h] [rbp-278h] BYREF
  _QWORD v23[4]; // [rsp+D08h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+D28h] [rbp-88h] BYREF
  __int64 v25; // [rsp+D30h] [rbp-80h]
  __int64 v26; // [rsp+D38h] [rbp-78h]
  __int64 v27; // [rsp+D40h] [rbp-70h]
  __int64 v28; // [rsp+D48h] [rbp-68h]
  __int64 v29; // [rsp+D50h] [rbp-60h]
  __int64 v30; // [rsp+D58h] [rbp-58h]
  __int64 v31; // [rsp+D60h] [rbp-50h] BYREF
  __int64 v32; // [rsp+D68h] [rbp-48h]
  __int64 v33; // [rsp+D70h] [rbp-40h]
  void *__srca; // [rsp+D78h] [rbp-38h]
  void *v35; // [rsp+D80h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fe839*/
  __srca = __src + 520; /*0x1006fe851*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x1006fe855*/
  v33 = *((_QWORD *)__src + 117); /*0x1006fe861*/
  v2 = *((_QWORD *)__src + 115); /*0x1006fe865*/
  v32 = *((_QWORD *)__src + 116); /*0x1006fe873*/
  v31 = v2; /*0x1006fe877*/
  v22[6] = 0; /*0x1006fe87b*/
  v22[0] = "set_relay_provider_networkreorder_relay_providers"; /*0x1006fe88d*/
  v22[1] = 26; /*0x1006fe894*/
  v3 = &unk_1017832C8; /*0x1006fe89f*/
  v22[2] = &unk_1017832C8; /*0x1006fe8a6*/
  v22[3] = 7; /*0x1006fe8ad*/
  v22[4] = __dst; /*0x1006fe8b8*/
  v22[5] = &v31; /*0x1006fe8c3*/
  LOBYTE(v3) = 1; /*0x1006fe8d5*/
  LODWORD(v35) = (_DWORD)v3; /*0x1006fe8d7*/
  if ( tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL) /*0x1006fe908*/
    || (_$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847(
          v23,
          v22,
          &v22[2]),
        LOBYTE(v23[0]) == 6) )
  {
    v22[6] = 0; /*0x1006fe915*/
    v22[0] = "set_relay_provider_networkreorder_relay_providers"; /*0x1006fe920*/
    v22[1] = 26; /*0x1006fe927*/
    v22[2] = &unk_1017832FF; /*0x1006fe939*/
    v22[3] = 10; /*0x1006fe940*/
    v22[4] = __dst; /*0x1006fe94b*/
    v22[5] = &v31; /*0x1006fe952*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(&v24, v22); /*0x1006fe967*/
    if ( (_BYTE)v24 == 6 ) /*0x1006fe973*/
    {
      v30 = v27; /*0x1006fe97d*/
      v29 = v26; /*0x1006fe989*/
      v28 = v25; /*0x1006fe98d*/
      v22[6] = 0; /*0x1006fe991*/
      v22[0] = "set_relay_provider_networkreorder_relay_providers"; /*0x1006fe99c*/
      v22[1] = 26; /*0x1006fe9a3*/
      v22[2] = "networkgrantsinputeventunable to create thread with 8MiB stackthe generated Tauri `Context` panicked during creation\n"; /*0x1006fe9b5*/
      v22[3] = 7; /*0x1006fe9bc*/
      v22[4] = __dst; /*0x1006fe9c7*/
      v22[5] = &v31; /*0x1006fe9ce*/
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h0565a2dbc4ab2822(v20, v22); /*0x1006fe9e3*/
      v4 = __srca; /*0x1006fe9ef*/
      if ( LOBYTE(v20[0]) == 6 ) /*0x1006fe9f3*/
      {
        codexmate_lib::commands::relay::set_relay_provider_network::h7f7d933a82e04275(v19); /*0x1006fea0e*/
        memcpy(v20, v4, sizeof(v20)); /*0x1006fea22*/
        if ( v19[0] == 0x8000000000000000LL ) /*0x1006fea38*/
        {
          v6 = v19[1]; /*0x1006fea3e*/
          v35 = (void *)v19[2]; /*0x1006fea4c*/
          v7 = v19[3]; /*0x1006fea50*/
          if ( v19[3] < 0LL ) /*0x1006fea5a*/
          {
            v8 = 0; /*0x1006fea60*/
            goto LABEL_8; /*0x1006fea60*/
          }
          if ( v19[3] ) /*0x1006fec6d*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v4, v5); /*0x1006fec6f*/
            v8 = 1; /*0x1006fec74*/
            v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1006fec82*/
            if ( !v9 ) /*0x1006fec8a*/
LABEL_8:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1006fea63*/
            v10 = v9; /*0x1006fec90*/
          }
          else
          {
            v10 = 1; /*0x1006fec95*/
          }
          v11 = v35; /*0x1006fec9e*/
          memcpy((void *)v10, v35, v7); /*0x1006feca8*/
          if ( v6 ) /*0x1006fecb0*/
            a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v6, 1); /*0x1006fecbd*/
          LOBYTE(v22[1]) = 3; /*0x1006fecc2*/
          v22[2] = v7; /*0x1006fecc9*/
          v22[3] = v10; /*0x1006fecd0*/
          v22[4] = v7; /*0x1006fecd7*/
          v22[0] = 0x8000000000000000LL; /*0x1006fece8*/
        }
        else
        {
          memcpy(v22, v19, sizeof(v22)); /*0x1006fec63*/
        }
        tauri::ipc::InvokeResolver$LT$R$GT$::respond::h65e65036963d222b(v4, v22); /*0x1006fecf9*/
      }
      else
      {
        v22[4] = v20[3]; /*0x1006feb06*/
        v22[3] = v20[2]; /*0x1006feb14*/
        v22[2] = v20[1]; /*0x1006feb29*/
        v22[1] = v20[0]; /*0x1006feb30*/
        memcpy(v15, __srca, sizeof(v15)); /*0x1006feb49*/
        v22[0] = 1; /*0x1006feb6a*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006feb82*/
          v15,
          v21[48],
          v22,
          __src + 880,
          LODWORD(v21[49]),
          HIDWORD(v21[49]));
        if ( v28 ) /*0x1006feb98*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x1006feba7*/
      }
    }
    else
    {
      v22[4] = v27; /*0x1006fea77*/
      v22[3] = v26; /*0x1006fea82*/
      v22[2] = v25; /*0x1006fea94*/
      v22[1] = v24; /*0x1006fea9b*/
      memcpy(v16, __srca, sizeof(v16)); /*0x1006feab5*/
      v22[0] = 1; /*0x1006fead6*/
      LODWORD(v35) = 0; /*0x1006feae1*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006feaf5*/
        v16,
        v21[48],
        v22,
        __src + 880,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
    }
  }
  else
  {
    v22[4] = v23[3]; /*0x1006febb8*/
    v22[3] = v23[2]; /*0x1006febc6*/
    v22[2] = v23[1]; /*0x1006febdb*/
    v22[1] = v23[0]; /*0x1006febe2*/
    memcpy(v17, __srca, sizeof(v17)); /*0x1006febfc*/
    v22[0] = 1; /*0x1006fec1d*/
    LODWORD(v35) = 0; /*0x1006fec28*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fec3c*/
      v17,
      v21[48],
      v22,
      __src + 880,
      LODWORD(v21[49]),
      HIDWORD(v21[49]));
  }
  if ( v31 != 0x8000000000000000LL ) /*0x1006fed02*/
  {
    v12 = v32; /*0x1006fed04*/
    for ( i = v33 + 1; i != 1; --i ) /*0x1006fed0c*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fed1d*/
      v12 += 96; /*0x1006fed22*/
    }
    if ( v31 ) /*0x1006fed2e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 96 * v31, 8); /*0x1006fed41*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006fed52*/
}