// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h592b1fd3878040e4; addr: 0x1006f8890; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h592b1fd3878040e4(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  void *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r14
  size_t v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  void *v11; // r15
  __int64 v12; // rdi
  __int64 i; // r15
  _BYTE v15[360]; // [rsp+0h] [rbp-AE0h] BYREF
  _BYTE v16[360]; // [rsp+168h] [rbp-978h] BYREF
  _BYTE v17[360]; // [rsp+2D0h] [rbp-810h] BYREF
  _QWORD __dst[65]; // [rsp+438h] [rbp-6A8h] BYREF
  _QWORD v19[50]; // [rsp+640h] [rbp-4A0h] BYREF
  _QWORD v20[50]; // [rsp+7D0h] [rbp-310h] BYREF
  _QWORD v21[19]; // [rsp+960h] [rbp-180h] BYREF
  __int64 v22; // [rsp+9F8h] [rbp-E8h] BYREF
  void *v23; // [rsp+A00h] [rbp-E0h]
  size_t __n; // [rsp+A08h] [rbp-D8h]
  _QWORD v25[4]; // [rsp+A10h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+A30h] [rbp-B0h] BYREF
  char *v27; // [rsp+A38h] [rbp-A8h]
  __int64 v28; // [rsp+A40h] [rbp-A0h]
  _QWORD *v29; // [rsp+A48h] [rbp-98h]
  void *v30; // [rsp+A50h] [rbp-90h]
  __int64 v31; // [rsp+A58h] [rbp-88h] BYREF
  __int64 v32; // [rsp+A60h] [rbp-80h]
  __int64 v33; // [rsp+A68h] [rbp-78h]
  void *__srca; // [rsp+A70h] [rbp-70h]
  __int64 v35; // [rsp+A78h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A80h] [rbp-60h]
  char *v37; // [rsp+A88h] [rbp-58h] BYREF
  __int64 v38; // [rsp+A90h] [rbp-50h]
  _QWORD *v39; // [rsp+A98h] [rbp-48h]
  __int64 *v40; // [rsp+AA0h] [rbp-40h]
  __int64 v41; // [rsp+AA8h] [rbp-38h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f88b9*/
  __srca = __src + 520; /*0x1006f88d1*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x1006f88d5*/
  v33 = *((_QWORD *)__src + 117); /*0x1006f88e1*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f88e5*/
  v32 = *((_QWORD *)__src + 116); /*0x1006f88f3*/
  v31 = v2; /*0x1006f88f7*/
  v41 = 0; /*0x1006f88fe*/
  v35 = (__int64)"set_hotspot_enabledfocus_main_windowhotspot_readyupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006f890d*/
  v36 = 19; /*0x1006f8911*/
  v37 = "appstarted"; /*0x1006f8920*/
  v38 = 3; /*0x1006f8924*/
  v39 = __dst; /*0x1006f892c*/
  v40 = &v31; /*0x1006f8937*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(v19); /*0x1006f8949*/
  if ( LODWORD(v19[0]) != 3 ) /*0x1006f895f*/
  {
    memcpy(v21, v19, sizeof(v21)); /*0x1006f89f3*/
    v41 = 0; /*0x1006f89f8*/
    v35 = (__int64)"set_hotspot_enabledfocus_main_windowhotspot_readyupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006f8a07*/
    v36 = 19; /*0x1006f8a0b*/
    v37 = (char *)&unk_1016E98EC; /*0x1006f8a1a*/
    v38 = 4; /*0x1006f8a1e*/
    v39 = __dst; /*0x1006f8a26*/
    v40 = &v31; /*0x1006f8a2a*/
    v3 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x1006f8a3e*/
    if ( !v3 ) /*0x1006f8a44*/
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f8a55*/
        &v26,
        &v35,
        &v37);
      if ( (_BYTE)v26 != 6 ) /*0x1006f8a61*/
      {
        v39 = v29; /*0x1006f8bea*/
        v38 = v28; /*0x1006f8bf5*/
        v37 = v27; /*0x1006f8c07*/
        v36 = v26; /*0x1006f8c0b*/
        memcpy(v16, __srca, sizeof(v16)); /*0x1006f8c22*/
        v35 = 1; /*0x1006f8c43*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f8c58*/
          v16,
          v20[48],
          &v35,
          __src + 880,
          LODWORD(v20[49]),
          HIDWORD(v20[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v21); /*0x1006f8c67*/
        goto LABEL_22; /*0x1006f8c76*/
      }
      v3 = (__int64)v27; /*0x1006f8a67*/
    }
    v41 = 0; /*0x1006f8a6e*/
    v35 = (__int64)"set_hotspot_enabledfocus_main_windowhotspot_readyupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006f8a76*/
    v36 = 19; /*0x1006f8a7a*/
    v37 = (char *)&anon_1d5e2ba954832094e55fcdce7f3204cb_472; /*0x1006f8a89*/
    v38 = 7; /*0x1006f8a8d*/
    v39 = __dst; /*0x1006f8a95*/
    v40 = &v31; /*0x1006f8a99*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h84e3518ea2010953(v25, &v35); /*0x1006f8aab*/
    v4 = __srca; /*0x1006f8ab7*/
    if ( LOBYTE(v25[0]) != 6 ) /*0x1006f8abb*/
    {
      v39 = (_QWORD *)v25[3]; /*0x1006f8b28*/
      v38 = v25[2]; /*0x1006f8b33*/
      v37 = (char *)v25[1]; /*0x1006f8b45*/
      v36 = v25[0]; /*0x1006f8b49*/
      memcpy(v15, __srca, sizeof(v15)); /*0x1006f8b5f*/
      v35 = 1; /*0x1006f8b80*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f8b92*/
        v15,
        v20[48],
        &v35,
        __src + 880,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v21); /*0x1006f8ba1*/
      goto LABEL_22; /*0x1006f8bb0*/
    }
    codexmate_lib::commands::hotspot::set_hotspot_enabled::hecc36d846bae4e55(&v22, v21, v3, BYTE1(v25[0])); /*0x1006f8ad5*/
    memcpy(v19, v4, sizeof(v19)); /*0x1006f8ae9*/
    v6 = v22; /*0x1006f8aee*/
    if ( v22 == 0x8000000000000000LL ) /*0x1006f8b02*/
    {
      BYTE1(v21[0]) = (_BYTE)v23; /*0x1006f8b0f*/
      LOBYTE(v21[0]) = 6; /*0x1006f8b15*/
LABEL_21:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hba67ea4134f24302(v4); /*0x1006f8cf9*/
      goto LABEL_22; /*0x1006f8d03*/
    }
    v7 = __n; /*0x1006f8bbc*/
    v30 = v23; /*0x1006f8bc6*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f8bcd*/
    {
      v8 = 0; /*0x1006f8bd3*/
      goto LABEL_12; /*0x1006f8bd3*/
    }
    if ( __n ) /*0x1006f8c7b*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v4, v5); /*0x1006f8c7d*/
      v8 = 1; /*0x1006f8c82*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1006f8c90*/
      if ( !v9 ) /*0x1006f8c98*/
LABEL_12:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1006f8bd6*/
      v10 = v9; /*0x1006f8c9e*/
    }
    else
    {
      v10 = 1; /*0x1006f8ca3*/
    }
    v11 = v30; /*0x1006f8cac*/
    memcpy((void *)v10, v30, v7); /*0x1006f8cb9*/
    if ( v6 ) /*0x1006f8cc1*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v6, 1); /*0x1006f8cce*/
    LOBYTE(v21[0]) = 3; /*0x1006f8cd3*/
    v21[1] = v7; /*0x1006f8cda*/
    v21[2] = v10; /*0x1006f8ce1*/
    v21[3] = v7; /*0x1006f8ce8*/
    goto LABEL_21; /*0x1006f8ce8*/
  }
  v39 = (_QWORD *)v19[4]; /*0x1006f8968*/
  v38 = v19[3]; /*0x1006f8973*/
  v37 = (char *)v19[2]; /*0x1006f8985*/
  v36 = v19[1]; /*0x1006f8989*/
  memcpy(v17, __srca, sizeof(v17)); /*0x1006f89a0*/
  v35 = 1; /*0x1006f89c1*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f89d6*/
    v17,
    v20[48],
    &v35,
    __src + 880,
    LODWORD(v20[49]),
    HIDWORD(v20[49]));
LABEL_22:
  if ( v31 != 0x8000000000000000LL ) /*0x1006f8d0f*/
  {
    v12 = v32; /*0x1006f8d11*/
    for ( i = v33 + 1; i != 1; --i ) /*0x1006f8d19*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f8d2d*/
      v12 += 96; /*0x1006f8d32*/
    }
    if ( v31 ) /*0x1006f8d41*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 96 * v31, 8); /*0x1006f8d54*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f8d65*/
}