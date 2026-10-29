// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbd385296c68a4ce2; addr: 0x1007007e0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:31Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbd385296c68a4ce2(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  void *v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+20h] [rbp-1290h] BYREF
  __int64 v14; // [rsp+188h] [rbp-1128h] BYREF
  __int64 v15; // [rsp+190h] [rbp-1120h]
  void *v16; // [rsp+198h] [rbp-1118h]
  size_t __n; // [rsp+1A0h] [rbp-1110h]
  _QWORD *v18; // [rsp+1A8h] [rbp-1108h]
  _QWORD __srca[145]; // [rsp+1B0h] [rbp-1100h] BYREF
  _QWORD __dst[65]; // [rsp+638h] [rbp-C78h] BYREF
  _BYTE v21[360]; // [rsp+840h] [rbp-A70h] BYREF
  _QWORD v22[50]; // [rsp+9A8h] [rbp-908h] BYREF
  __int64 v23; // [rsp+B38h] [rbp-778h] BYREF
  __int64 v24; // [rsp+B40h] [rbp-770h]
  void *v25; // [rsp+B48h] [rbp-768h] BYREF
  size_t v26; // [rsp+B50h] [rbp-760h]
  _QWORD *v27; // [rsp+B58h] [rbp-758h]
  _QWORD v28[145]; // [rsp+B60h] [rbp-750h] BYREF
  _QWORD v29[50]; // [rsp+FE8h] [rbp-2C8h] BYREF
  _QWORD v30[3]; // [rsp+1178h] [rbp-138h] BYREF
  __int64 v31; // [rsp+1190h] [rbp-120h] BYREF
  __m256i v32; // [rsp+1198h] [rbp-118h]
  __int64 v33; // [rsp+11B8h] [rbp-F8h]
  _BYTE v34[31]; // [rsp+11C1h] [rbp-EFh]
  __int64 v35; // [rsp+11E0h] [rbp-D0h] BYREF
  __m256i v36; // [rsp+11E8h] [rbp-C8h]
  __int64 v37; // [rsp+1208h] [rbp-A8h]
  __int64 v38; // [rsp+1210h] [rbp-A0h]
  __int64 v39; // [rsp+1218h] [rbp-98h] BYREF
  __int64 v40; // [rsp+1220h] [rbp-90h]
  __int64 v41; // [rsp+1228h] [rbp-88h]
  __int64 v42; // [rsp+1230h] [rbp-80h]
  __int64 v43; // [rsp+1238h] [rbp-78h]
  __int64 v44; // [rsp+1240h] [rbp-70h] BYREF
  __m256i v45; // [rsp+1248h] [rbp-68h]
  __int64 v46; // [rsp+1268h] [rbp-48h] BYREF
  __int64 v47; // [rsp+1270h] [rbp-40h]
  __int64 v48; // [rsp+1278h] [rbp-38h]
  char v49[41]; // [rsp+1287h] [rbp-29h] BYREF

  __srca[27] = 0; /*0x1007007f4*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x100700818*/
  memcpy(v22, __src + 520, sizeof(v22)); /*0x100700833*/
  v48 = *((_QWORD *)__src + 117); /*0x10070083f*/
  v2 = *((_QWORD *)__src + 115); /*0x100700843*/
  v47 = *((_QWORD *)__src + 116); /*0x100700851*/
  v46 = v2; /*0x100700855*/
  v28[1] = 0; /*0x100700859*/
  v23 = (__int64)"load_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x10070086b*/
  v24 = 20; /*0x100700872*/
  v25 = &unk_1016E98EC; /*0x100700884*/
  v26 = 4; /*0x10070088b*/
  v27 = __dst; /*0x100700896*/
  v28[0] = &v46; /*0x1007008a1*/
  if ( tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL) /*0x1007008e1*/
    || (_$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847(
          v29,
          &v23,
          &v25),
        LOBYTE(v29[0]) == 6) )
  {
    codexmate_lib::commands::system::load_bootstrap_state::h0f6570ab5790622a(&v14); /*0x1007008f8*/
    memcpy(v29, __src + 520, sizeof(v29)); /*0x10070090c*/
    if ( v14 == 2 ) /*0x10070091c*/
    {
      v43 = v15; /*0x100700925*/
      v4 = v16; /*0x100700929*/
      v5 = __n; /*0x100700930*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10070093a*/
      {
        v6 = 0; /*0x100700940*/
        goto LABEL_6; /*0x100700940*/
      }
      if ( __n ) /*0x100700b4b*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, __src + 520, v3); /*0x100700b51*/
        v6 = 1; /*0x100700b56*/
        v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100700b64*/
        if ( !v9 ) /*0x100700b6c*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100700943*/
      }
      else
      {
        v9 = 1; /*0x100700c07*/
      }
      v38 = v9; /*0x100700c0c*/
      memcpy((void *)v9, v4, v5); /*0x100700c1c*/
      if ( v43 ) /*0x100700c28*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v43, 1); /*0x100700c32*/
      memcpy(v21, __src + 520, sizeof(v21)); /*0x100700c46*/
      v7 = v29[48]; /*0x100700c4b*/
      v42 = v29[48]; /*0x100700c52*/
      v45.i8[0] = 3; /*0x100700c56*/
      v45.i64[1] = v5; /*0x100700c5a*/
      v45.i64[2] = v38; /*0x100700c65*/
      v45.i64[3] = v5; /*0x100700c69*/
      v44 = 1; /*0x100700c6d*/
    }
    else
    {
      memcpy(v28, __srca, sizeof(v28)); /*0x10070096d*/
      memcpy(v21, __src + 520, sizeof(v21)); /*0x100700981*/
      v7 = v29[48]; /*0x100700986*/
      v42 = v29[48]; /*0x10070098d*/
      v23 = v14; /*0x100700991*/
      v24 = v15; /*0x10070099f*/
      v25 = v16; /*0x1007009a6*/
      v26 = __n; /*0x1007009b1*/
      v27 = v18; /*0x1007009bc*/
      _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h267f5e63cb3b8420(&v35, &v23); /*0x1007009d1*/
      if ( v35 == 0x8000000000000025LL ) /*0x1007009eb*/
      {
        v45 = v36; /*0x1007009ff*/
        v8 = 0; /*0x100700a19*/
      }
      else
      {
        v33 = v37; /*0x100700a27*/
        v32 = v36; /*0x100700a43*/
        v31 = v35; /*0x100700a6d*/
        v39 = 0; /*0x100700a74*/
        v40 = 1; /*0x100700a7f*/
        v41 = 0; /*0x100700a8a*/
        v30[2] = 1610612768; /*0x100700a95*/
        v30[0] = &v39; /*0x100700aa7*/
        v30[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x100700ab5*/
        if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x100700aca*/
                                &v31,
                                v30) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100700d32*/
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
            55,
            v49,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
        *(_QWORD *)&v34[7] = v39; /*0x100700aec*/
        *(_QWORD *)&v34[15] = v40; /*0x100700af3*/
        *(_QWORD *)&v34[23] = v41; /*0x100700afa*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v31); /*0x100700b08*/
        v45.i8[0] = 3; /*0x100700b0d*/
        *(__int128 *)((char *)v45.i128 + 1) = *(_OWORD *)v34; /*0x100700b1f*/
        *(__int64 *)((char *)&v45.i64[2] + 1) = *(_QWORD *)&v34[16]; /*0x100700b2e*/
        v45.i64[3] = *(_QWORD *)&v34[23]; /*0x100700b39*/
        v8 = 1; /*0x100700b3d*/
      }
      v44 = v8; /*0x100700b42*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100700c9b*/
      v21,
      v7,
      &v44,
      __src + 880,
      LODWORD(v29[49]),
      HIDWORD(v29[49]));
  }
  else
  {
    v27 = (_QWORD *)v29[3]; /*0x100700b7e*/
    v26 = v29[2]; /*0x100700b8c*/
    v25 = (void *)v29[1]; /*0x100700ba1*/
    v24 = v29[0]; /*0x100700ba8*/
    memcpy(v13, __src + 520, sizeof(v13)); /*0x100700bc1*/
    v23 = 1; /*0x100700be2*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100700bfd*/
      v13,
      v22[48],
      &v23,
      __src + 880,
      LODWORD(v22[49]),
      HIDWORD(v22[49]));
  }
  if ( v46 != 0x8000000000000000LL ) /*0x100700cae*/
  {
    v10 = v47; /*0x100700cb0*/
    for ( i = v48 + 1; i != 1; --i ) /*0x100700cb8*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x100700ccd*/
      v10 += 96; /*0x100700cd2*/
    }
    if ( v46 ) /*0x100700cde*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 96 * v46, 8); /*0x100700cf1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100700d02*/
}