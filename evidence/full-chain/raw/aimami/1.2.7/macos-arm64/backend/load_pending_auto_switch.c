// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h16f6627a56eb047d; addr: 0x1006f4010; session: <审计会话>; decompiled_at: 2026-10-26T03:22:32Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h16f6627a56eb047d(
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
  _BYTE v13[360]; // [rsp+20h] [rbp-F60h] BYREF
  _QWORD __dst[65]; // [rsp+188h] [rbp-DF8h] BYREF
  __int64 v15; // [rsp+390h] [rbp-BF0h] BYREF
  __int64 v16; // [rsp+398h] [rbp-BE8h]
  void *v17; // [rsp+3A0h] [rbp-BE0h]
  size_t __n; // [rsp+3A8h] [rbp-BD8h]
  _QWORD *v19; // [rsp+3B0h] [rbp-BD0h]
  _BYTE __srca[752]; // [rsp+3B8h] [rbp-BC8h] BYREF
  _BYTE v21[360]; // [rsp+6A8h] [rbp-8D8h] BYREF
  _QWORD v22[50]; // [rsp+810h] [rbp-770h] BYREF
  __int64 v23; // [rsp+9A0h] [rbp-5E0h] BYREF
  __int64 v24; // [rsp+9A8h] [rbp-5D8h]
  void *v25; // [rsp+9B0h] [rbp-5D0h] BYREF
  size_t v26; // [rsp+9B8h] [rbp-5C8h]
  _QWORD *v27; // [rsp+9C0h] [rbp-5C0h]
  _QWORD v28[94]; // [rsp+9C8h] [rbp-5B8h] BYREF
  _QWORD v29[50]; // [rsp+CB8h] [rbp-2C8h] BYREF
  _QWORD v30[3]; // [rsp+E48h] [rbp-138h] BYREF
  __int64 v31; // [rsp+E60h] [rbp-120h] BYREF
  __m256i v32; // [rsp+E68h] [rbp-118h]
  __int64 v33; // [rsp+E88h] [rbp-F8h]
  _BYTE v34[31]; // [rsp+E91h] [rbp-EFh]
  __int64 v35; // [rsp+EB0h] [rbp-D0h] BYREF
  __m256i v36; // [rsp+EB8h] [rbp-C8h]
  __int64 v37; // [rsp+ED8h] [rbp-A8h]
  __int64 v38; // [rsp+EE0h] [rbp-A0h]
  __int64 v39; // [rsp+EE8h] [rbp-98h] BYREF
  __int64 v40; // [rsp+EF0h] [rbp-90h]
  __int64 v41; // [rsp+EF8h] [rbp-88h]
  __int64 v42; // [rsp+F00h] [rbp-80h]
  __int64 v43; // [rsp+F08h] [rbp-78h]
  __int64 v44; // [rsp+F10h] [rbp-70h] BYREF
  __m256i v45; // [rsp+F18h] [rbp-68h]
  __int64 v46; // [rsp+F38h] [rbp-48h] BYREF
  __int64 v47; // [rsp+F40h] [rbp-40h]
  __int64 v48; // [rsp+F48h] [rbp-38h]
  char v49[41]; // [rsp+F57h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f4039*/
  memcpy(v22, __src + 520, sizeof(v22)); /*0x1006f4054*/
  v48 = *((_QWORD *)__src + 117); /*0x1006f4060*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f4064*/
  v47 = *((_QWORD *)__src + 116); /*0x1006f4072*/
  v46 = v2; /*0x1006f4076*/
  v28[1] = 0; /*0x1006f407a*/
  v23 = (__int64)"load_pending_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1006f408c*/
  v24 = 24; /*0x1006f4093*/
  v25 = &unk_1016E98EC; /*0x1006f40a5*/
  v26 = 4; /*0x1006f40ac*/
  v27 = __dst; /*0x1006f40b7*/
  v28[0] = &v46; /*0x1006f40c2*/
  if ( tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL) /*0x1006f4102*/
    || (_$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847(
          v29,
          &v23,
          &v25),
        LOBYTE(v29[0]) == 6) )
  {
    codexmate_lib::commands::system::load_pending_auto_switch::h92123fc51f606a17(&v15); /*0x1006f4119*/
    memcpy(v29, __src + 520, sizeof(v29)); /*0x1006f412d*/
    if ( v15 == 3 ) /*0x1006f413d*/
    {
      v43 = v16; /*0x1006f4146*/
      v4 = v17; /*0x1006f414a*/
      v5 = __n; /*0x1006f4151*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f415b*/
      {
        v6 = 0; /*0x1006f4161*/
        goto LABEL_6; /*0x1006f4161*/
      }
      if ( __n ) /*0x1006f436c*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, __src + 520, v3); /*0x1006f4372*/
        v6 = 1; /*0x1006f4377*/
        v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1006f4385*/
        if ( !v9 ) /*0x1006f438d*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x1006f4164*/
      }
      else
      {
        v9 = 1; /*0x1006f4428*/
      }
      v38 = v9; /*0x1006f442d*/
      memcpy((void *)v9, v4, v5); /*0x1006f443d*/
      if ( v43 ) /*0x1006f4449*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v43, 1); /*0x1006f4453*/
      memcpy(v21, __src + 520, sizeof(v21)); /*0x1006f4467*/
      v7 = v29[48]; /*0x1006f446c*/
      v42 = v29[48]; /*0x1006f4473*/
      v45.i8[0] = 3; /*0x1006f4477*/
      v45.i64[1] = v5; /*0x1006f447b*/
      v45.i64[2] = v38; /*0x1006f4486*/
      v45.i64[3] = v5; /*0x1006f448a*/
      v44 = 1; /*0x1006f448e*/
    }
    else
    {
      memcpy(v28, __srca, sizeof(v28)); /*0x1006f418e*/
      memcpy(v21, __src + 520, sizeof(v21)); /*0x1006f41a2*/
      v7 = v29[48]; /*0x1006f41a7*/
      v42 = v29[48]; /*0x1006f41ae*/
      v23 = v15; /*0x1006f41b2*/
      v24 = v16; /*0x1006f41c0*/
      v25 = v17; /*0x1006f41c7*/
      v26 = __n; /*0x1006f41d2*/
      v27 = v19; /*0x1006f41dd*/
      _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hf38f7f3ac0e3a796(&v35, &v23); /*0x1006f41f2*/
      if ( v35 == 0x8000000000000025LL ) /*0x1006f420c*/
      {
        v45 = v36; /*0x1006f4220*/
        v8 = 0; /*0x1006f423a*/
      }
      else
      {
        v33 = v37; /*0x1006f4248*/
        v32 = v36; /*0x1006f4264*/
        v31 = v35; /*0x1006f428e*/
        v39 = 0; /*0x1006f4295*/
        v40 = 1; /*0x1006f42a0*/
        v41 = 0; /*0x1006f42ab*/
        v30[2] = 1610612768; /*0x1006f42b6*/
        v30[0] = &v39; /*0x1006f42c8*/
        v30[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006f42d6*/
        if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006f42eb*/
                                &v31,
                                v30) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f4552*/
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
            55,
            v49,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
        *(_QWORD *)&v34[7] = v39; /*0x1006f430d*/
        *(_QWORD *)&v34[15] = v40; /*0x1006f4314*/
        *(_QWORD *)&v34[23] = v41; /*0x1006f431b*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v31); /*0x1006f4329*/
        v45.i8[0] = 3; /*0x1006f432e*/
        *(__int128 *)((char *)v45.i128 + 1) = *(_OWORD *)v34; /*0x1006f4340*/
        *(__int64 *)((char *)&v45.i64[2] + 1) = *(_QWORD *)&v34[16]; /*0x1006f434f*/
        v45.i64[3] = *(_QWORD *)&v34[23]; /*0x1006f435a*/
        v8 = 1; /*0x1006f435e*/
      }
      v44 = v8; /*0x1006f4363*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f44bc*/
      v21,
      v7,
      &v44,
      __src + 880,
      LODWORD(v29[49]),
      HIDWORD(v29[49]));
  }
  else
  {
    v27 = (_QWORD *)v29[3]; /*0x1006f439f*/
    v26 = v29[2]; /*0x1006f43ad*/
    v25 = (void *)v29[1]; /*0x1006f43c2*/
    v24 = v29[0]; /*0x1006f43c9*/
    memcpy(v13, __src + 520, sizeof(v13)); /*0x1006f43e2*/
    v23 = 1; /*0x1006f4403*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f441e*/
      v13,
      v22[48],
      &v23,
      __src + 880,
      LODWORD(v22[49]),
      HIDWORD(v22[49]));
  }
  if ( v46 != 0x8000000000000000LL ) /*0x1006f44cf*/
  {
    v10 = v47; /*0x1006f44d1*/
    for ( i = v48 + 1; i != 1; --i ) /*0x1006f44d9*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f44ed*/
      v10 += 96; /*0x1006f44f2*/
    }
    if ( v46 ) /*0x1006f44fe*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 96 * v46, 8); /*0x1006f4511*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f4522*/
}