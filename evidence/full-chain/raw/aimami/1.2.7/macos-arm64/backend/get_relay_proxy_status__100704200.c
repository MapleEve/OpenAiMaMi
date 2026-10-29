// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_{{closure}}::_{{closure}}::hefa52ccaabf479ca; addr: 0x100704200; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:31Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hefa52ccaabf479ca(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  void *v6; // r13
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 i; // r15
  _BYTE v15[360]; // [rsp+18h] [rbp-A68h] BYREF
  _QWORD __dst[65]; // [rsp+180h] [rbp-900h] BYREF
  _QWORD v17[50]; // [rsp+388h] [rbp-6F8h] BYREF
  _QWORD v18[45]; // [rsp+518h] [rbp-568h] BYREF
  _QWORD v19[5]; // [rsp+680h] [rbp-400h] BYREF
  _BYTE v20[120]; // [rsp+6A8h] [rbp-3D8h] BYREF
  __int64 v21; // [rsp+720h] [rbp-360h] BYREF
  __int64 v22; // [rsp+728h] [rbp-358h]
  void *__srca; // [rsp+730h] [rbp-350h]
  size_t __n; // [rsp+738h] [rbp-348h]
  __int64 v25; // [rsp+740h] [rbp-340h]
  _BYTE v26[120]; // [rsp+748h] [rbp-338h] BYREF
  _QWORD v27[50]; // [rsp+7C0h] [rbp-2C0h] BYREF
  _QWORD v28[3]; // [rsp+950h] [rbp-130h] BYREF
  __int64 v29; // [rsp+968h] [rbp-118h] BYREF
  __m256i v30; // [rsp+970h] [rbp-110h]
  __int64 v31; // [rsp+990h] [rbp-F0h]
  _BYTE v32[31]; // [rsp+999h] [rbp-E7h]
  __int64 v33; // [rsp+9B8h] [rbp-C8h] BYREF
  __m256i v34; // [rsp+9C0h] [rbp-C0h]
  __int64 v35; // [rsp+9E0h] [rbp-A0h]
  __int64 v36; // [rsp+9E8h] [rbp-98h]
  __int64 v37; // [rsp+9F0h] [rbp-90h] BYREF
  __int64 v38; // [rsp+9F8h] [rbp-88h]
  __int64 v39; // [rsp+A00h] [rbp-80h]
  __int64 v40; // [rsp+A08h] [rbp-78h]
  __int64 v41; // [rsp+A10h] [rbp-70h] BYREF
  __m256i v42; // [rsp+A18h] [rbp-68h]
  __int64 v43; // [rsp+A38h] [rbp-48h] BYREF
  __int64 v44; // [rsp+A40h] [rbp-40h]
  __int64 v45; // [rsp+A48h] [rbp-38h]
  _BYTE v46[41]; // [rsp+A57h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x100704229*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x100704244*/
  v45 = *((_QWORD *)__src + 117); /*0x100704250*/
  v2 = *((_QWORD *)__src + 115); /*0x100704254*/
  v44 = *((_QWORD *)__src + 116); /*0x100704262*/
  v43 = v2; /*0x100704266*/
  v27[6] = 0; /*0x10070426a*/
  v27[0] = "get_relay_proxy_status"; /*0x10070427c*/
  v27[1] = 22; /*0x100704283*/
  v27[2] = &unk_1017832C8; /*0x100704295*/
  v27[3] = 7; /*0x10070429c*/
  v27[4] = __dst; /*0x1007042a7*/
  v27[5] = &v43; /*0x1007042b2*/
  v3 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x1007042c7*/
  if ( !v3 ) /*0x1007042d9*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1007042f0*/
      v18,
      v27,
      &v27[2]);
    if ( LOBYTE(v18[0]) != 6 ) /*0x1007042fc*/
    {
      v27[4] = v18[3]; /*0x10070459a*/
      v27[3] = v18[2]; /*0x1007045a8*/
      v27[2] = v18[1]; /*0x1007045bd*/
      v27[1] = v18[0]; /*0x1007045c4*/
      memcpy(v15, __src + 520, sizeof(v15)); /*0x1007045dd*/
      v27[0] = 1; /*0x1007045fe*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100704619*/
        v15,
        v17[48],
        v27,
        __src + 880,
        LODWORD(v17[49]),
        HIDWORD(v17[49]));
      goto LABEL_22; /*0x10070461e*/
    }
    v3 = v18[1]; /*0x100704302*/
  }
  codexmate_lib::core::relay::manager::RelayManager::compose_proxy_status::h8e2f4014767b0ad3(v27, *(_QWORD *)(v3 + 24)); /*0x100704314*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h2cd955bcda76c669(&v21, v27); /*0x100704327*/
  memcpy(v27, __src + 520, sizeof(v27)); /*0x10070433b*/
  if ( v21 == 0x8000000000000000LL ) /*0x10070434a*/
  {
    v5 = v22; /*0x10070434c*/
    v6 = __srca; /*0x100704353*/
    v7 = __n; /*0x10070435a*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100704364*/
    {
      v8 = 0; /*0x10070436a*/
      goto LABEL_7; /*0x10070436a*/
    }
    if ( __n ) /*0x100704567*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, __src + 520, v4); /*0x10070456d*/
      v8 = 1; /*0x100704572*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x100704580*/
      if ( !v11 ) /*0x100704588*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x10070436d*/
    }
    else
    {
      v11 = 1; /*0x100704623*/
    }
    v36 = v11; /*0x100704628*/
    memcpy((void *)v11, v6, v7); /*0x100704638*/
    if ( v5 ) /*0x100704640*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x10070464d*/
    memcpy(v18, __src + 520, sizeof(v18)); /*0x100704661*/
    v9 = v27[48]; /*0x100704666*/
    v40 = v27[48]; /*0x10070466d*/
    v42.i8[0] = 3; /*0x100704671*/
    v42.i64[1] = v7; /*0x100704675*/
    v42.i64[2] = v36; /*0x100704680*/
    v42.i64[3] = v7; /*0x100704684*/
    v41 = 1; /*0x100704688*/
  }
  else
  {
    qmemcpy(v20, v26, sizeof(v20)); /*0x100704397*/
    memcpy(v18, __src + 520, sizeof(v18)); /*0x1007043a9*/
    v9 = v27[48]; /*0x1007043ae*/
    v40 = v27[48]; /*0x1007043b5*/
    v19[0] = v21; /*0x1007043b9*/
    v19[1] = v22; /*0x1007043c9*/
    v19[2] = __srca; /*0x1007043d0*/
    v19[3] = __n; /*0x1007043dc*/
    v19[4] = v25; /*0x1007043e8*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h5d5352eec3ad95de(&v33, v19); /*0x1007043fd*/
    if ( v33 == 0x8000000000000025LL ) /*0x10070440d*/
    {
      v42 = v34; /*0x100704421*/
      v10 = 0; /*0x10070443b*/
    }
    else
    {
      v31 = v35; /*0x100704449*/
      v30 = v34; /*0x100704465*/
      v29 = v33; /*0x10070448f*/
      v37 = 0; /*0x100704496*/
      v38 = 1; /*0x1007044a1*/
      v39 = 0; /*0x1007044ac*/
      v28[2] = 1610612768; /*0x1007044b4*/
      v28[0] = &v37; /*0x1007044c6*/
      v28[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1007044d4*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1007044e9*/
                              &v29,
                              v28) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100704752*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v46,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v32[7] = v37; /*0x100704508*/
      *(_QWORD *)&v32[15] = v38; /*0x10070450f*/
      *(_QWORD *)&v32[23] = v39; /*0x100704516*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v29); /*0x100704524*/
      v42.i8[0] = 3; /*0x100704529*/
      *(__int128 *)((char *)v42.i128 + 1) = *(_OWORD *)v32; /*0x10070453b*/
      *(__int64 *)((char *)&v42.i64[2] + 1) = *(_QWORD *)&v32[16]; /*0x10070454a*/
      v42.i64[3] = *(_QWORD *)&v32[23]; /*0x100704555*/
      v10 = 1; /*0x100704559*/
    }
    v41 = v10; /*0x10070455e*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1007046bd*/
    v18,
    v9,
    &v41,
    &v27[45],
    LODWORD(v27[49]),
    HIDWORD(v27[49]));
LABEL_22:
  if ( v43 != 0x8000000000000000LL ) /*0x1007046c6*/
  {
    v12 = v44; /*0x1007046c8*/
    for ( i = v45 + 1; i != 1; --i ) /*0x1007046d0*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1007046ed*/
      v12 += 96; /*0x1007046f2*/
    }
    if ( v43 ) /*0x1007046fe*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 96 * v43, 8); /*0x100704711*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100704722*/
}