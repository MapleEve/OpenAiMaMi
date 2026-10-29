// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6840f2b9b8e7817e; addr: 0x1006fb070; session: <审计会话>; decompiled_at: 2026-10-26T03:22:24Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6840f2b9b8e7817e(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r14
  __int128 v7; // kr00_16
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+20h] [rbp-CB0h] BYREF
  _BYTE v17[360]; // [rsp+188h] [rbp-B48h] BYREF
  _BYTE v18[360]; // [rsp+2F0h] [rbp-9E0h] BYREF
  _QWORD __dst[65]; // [rsp+458h] [rbp-878h] BYREF
  _QWORD v20[50]; // [rsp+660h] [rbp-670h] BYREF
  _BYTE v21[360]; // [rsp+7F0h] [rbp-4E0h] BYREF
  _OWORD v22[25]; // [rsp+958h] [rbp-378h] BYREF
  __int64 v23; // [rsp+AE8h] [rbp-1E8h] BYREF
  __int64 v24; // [rsp+AF0h] [rbp-1E0h]
  __int128 v25; // [rsp+AF8h] [rbp-1D8h]
  _QWORD *v26; // [rsp+B08h] [rbp-1C8h]
  __int64 *v27; // [rsp+B10h] [rbp-1C0h]
  __int64 v28; // [rsp+B18h] [rbp-1B8h]
  __int64 v29; // [rsp+B20h] [rbp-1B0h]
  __int64 v30; // [rsp+B28h] [rbp-1A8h]
  __int64 v31; // [rsp+B30h] [rbp-1A0h]
  _QWORD v32[3]; // [rsp+B38h] [rbp-198h] BYREF
  __int128 v33; // [rsp+B50h] [rbp-180h] BYREF
  __int64 v34; // [rsp+B60h] [rbp-170h]
  _BYTE v35[31]; // [rsp+B69h] [rbp-167h]
  __int64 v36; // [rsp+B88h] [rbp-148h] BYREF
  __int64 v37; // [rsp+B90h] [rbp-140h]
  __int64 v38; // [rsp+B98h] [rbp-138h]
  __int64 v39; // [rsp+BA0h] [rbp-130h] BYREF
  __m256i v40; // [rsp+BA8h] [rbp-128h]
  __int64 v41; // [rsp+BC8h] [rbp-108h]
  __int64 v42; // [rsp+BD0h] [rbp-100h]
  __int64 v43; // [rsp+BD8h] [rbp-F8h] BYREF
  __m256i v44; // [rsp+BE0h] [rbp-F0h]
  __int64 v45; // [rsp+C00h] [rbp-D0h] BYREF
  __m256i v46; // [rsp+C08h] [rbp-C8h]
  __int64 v47; // [rsp+C28h] [rbp-A8h]
  __int64 v48; // [rsp+C30h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+C38h] [rbp-98h]
  __int64 v50; // [rsp+C40h] [rbp-90h]
  __int64 v51; // [rsp+C48h] [rbp-88h] BYREF
  __int64 v52; // [rsp+C50h] [rbp-80h]
  __int128 v53; // [rsp+C58h] [rbp-78h] BYREF
  _QWORD *v54; // [rsp+C68h] [rbp-68h]
  __int64 *v55; // [rsp+C70h] [rbp-60h]
  __int64 v56; // [rsp+C78h] [rbp-58h]
  __int64 v57; // [rsp+C80h] [rbp-50h]
  __int64 v58; // [rsp+C88h] [rbp-48h]
  __int64 v59; // [rsp+C90h] [rbp-40h]
  void *__srca; // [rsp+C98h] [rbp-38h]
  char v61[41]; // [rsp+CA7h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fb099*/
  __srca = __src + 520; /*0x1006fb0b1*/
  memcpy(v20, __src + 520, sizeof(v20)); /*0x1006fb0b5*/
  v50 = *((_QWORD *)__src + 117); /*0x1006fb0c1*/
  v2 = *((_QWORD *)__src + 115); /*0x1006fb0c8*/
  v49 = *((_QWORD *)__src + 116); /*0x1006fb0d6*/
  v48 = v2; /*0x1006fb0dd*/
  v56 = 0; /*0x1006fb0e4*/
  v51 = (__int64)"delete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006fb0f6*/
  v52 = 21; /*0x1006fb0fd*/
  *(_QWORD *)&v53 = "appstarted"; /*0x1006fb10c*/
  *((_QWORD *)&v53 + 1) = 3; /*0x1006fb110*/
  v54 = __dst; /*0x1006fb118*/
  v55 = &v48; /*0x1006fb123*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(v22); /*0x1006fb138*/
  if ( LODWORD(v22[0]) != 3 ) /*0x1006fb144*/
  {
    memcpy(v21, v22, 0x98u); /*0x1006fb1ec*/
    v56 = 0; /*0x1006fb1f1*/
    v51 = (__int64)"delete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006fb1fc*/
    v52 = 21; /*0x1006fb203*/
    *(_QWORD *)&v53 = &unk_1017832C8; /*0x1006fb212*/
    *((_QWORD *)&v53 + 1) = 7; /*0x1006fb216*/
    v54 = __dst; /*0x1006fb21e*/
    v55 = &v48; /*0x1006fb222*/
    v3 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x1006fb231*/
    v4 = v3; /*0x1006fb236*/
    if ( v3 ) /*0x1006fb23c*/
    {
      v46.i64[0] = v3; /*0x1006fb23e*/
      LOBYTE(v45) = 6; /*0x1006fb245*/
    }
    else
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006fb260*/
        &v45,
        &v51,
        &v53);
      if ( (_BYTE)v45 != 6 ) /*0x1006fb26c*/
      {
        v54 = (_QWORD *)v46.i64[2]; /*0x1006fb504*/
        v53 = v46.i128[0]; /*0x1006fb521*/
        v52 = v45; /*0x1006fb525*/
        memcpy(v17, __srca, sizeof(v17)); /*0x1006fb53c*/
        v51 = 1; /*0x1006fb55d*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fb578*/
          v17,
          v20[48],
          &v51,
          __src + 880,
          LODWORD(v20[49]),
          HIDWORD(v20[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v21); /*0x1006fb587*/
        goto LABEL_27; /*0x1006fb596*/
      }
      v4 = v46.i64[0]; /*0x1006fb272*/
    }
    v56 = 0; /*0x1006fb279*/
    v51 = (__int64)"delete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006fb281*/
    v52 = 21; /*0x1006fb288*/
    *(_QWORD *)&v53 = &unk_1017832FF; /*0x1006fb297*/
    *((_QWORD *)&v53 + 1) = 10; /*0x1006fb29b*/
    v54 = __dst; /*0x1006fb2a3*/
    v55 = &v48; /*0x1006fb2a7*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(&v39, &v51); /*0x1006fb2bc*/
    if ( (_BYTE)v39 != 6 ) /*0x1006fb2c8*/
    {
      v54 = (_QWORD *)v40.i64[2]; /*0x1006fb37f*/
      v53 = v40.i128[0]; /*0x1006fb39c*/
      v52 = v39; /*0x1006fb3a0*/
      memcpy(v16, __srca, sizeof(v16)); /*0x1006fb3b7*/
      v51 = 1; /*0x1006fb3d8*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fb3f0*/
        v16,
        v20[48],
        &v51,
        __src + 880,
        LODWORD(v20[49]),
        HIDWORD(v20[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v21); /*0x1006fb3ff*/
      goto LABEL_27; /*0x1006fb40e*/
    }
    v34 = v40.i64[2]; /*0x1006fb2d5*/
    v33 = v40.i128[0]; /*0x1006fb2f1*/
    codexmate_lib::commands::relay::delete_relay_provider::h377b05ca2f92eb23(&v23, v21, v4, &v33); /*0x1006fb310*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1006fb328*/
    if ( v23 == 0x8000000000000000LL ) /*0x1006fb341*/
    {
      v6 = v24; /*0x1006fb347*/
      v7 = v25; /*0x1006fb355*/
      if ( v25 < 0 ) /*0x1006fb35f*/
      {
        v8 = 0; /*0x1006fb365*/
        goto LABEL_11; /*0x1006fb365*/
      }
      if ( *((_QWORD *)&v25 + 1) ) /*0x1006fb6d8*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, __srca, v5); /*0x1006fb6da*/
        v8 = 1; /*0x1006fb6df*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(*((_QWORD *)&v7 + 1), 1); /*0x1006fb6ed*/
        if ( !v11 ) /*0x1006fb6f5*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, *((_QWORD *)&v7 + 1)); /*0x1006fb368*/
        v12 = v11; /*0x1006fb6fb*/
      }
      else
      {
        v12 = 1; /*0x1006fb70a*/
      }
      memcpy((void *)v12, (const void *)v7, *((size_t *)&v7 + 1)); /*0x1006fb719*/
      if ( v6 ) /*0x1006fb721*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x1006fb72e*/
      memcpy(v21, __srca, sizeof(v21)); /*0x1006fb743*/
      v9 = *(_QWORD *)&v22[24]; /*0x1006fb748*/
      v42 = *(_QWORD *)&v22[24]; /*0x1006fb74f*/
      v44.i8[0] = 3; /*0x1006fb756*/
      v44.i64[1] = *((_QWORD *)&v7 + 1); /*0x1006fb75d*/
      v44.i64[2] = v12; /*0x1006fb764*/
      v44.i64[3] = *((_QWORD *)&v7 + 1); /*0x1006fb76b*/
      v43 = 1; /*0x1006fb772*/
    }
    else
    {
      v59 = v31; /*0x1006fb421*/
      v58 = v30; /*0x1006fb42c*/
      v57 = v29; /*0x1006fb437*/
      v56 = v28; /*0x1006fb449*/
      v55 = v27; /*0x1006fb44d*/
      memcpy(v21, __srca, sizeof(v21)); /*0x1006fb460*/
      v9 = *(_QWORD *)&v22[24]; /*0x1006fb465*/
      v42 = *(_QWORD *)&v22[24]; /*0x1006fb46c*/
      v51 = v23; /*0x1006fb473*/
      v52 = v24; /*0x1006fb481*/
      v53 = v25; /*0x1006fb485*/
      v54 = v26; /*0x1006fb495*/
      _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hca05ed81c5fced2b(&v45, &v51); /*0x1006fb4a7*/
      if ( v45 == 0x8000000000000025LL ) /*0x1006fb4b8*/
      {
        v44 = v46; /*0x1006fb4d3*/
        v10 = 0; /*0x1006fb4f6*/
      }
      else
      {
        v41 = v47; /*0x1006fb5a2*/
        v40 = v46; /*0x1006fb5be*/
        v39 = v45; /*0x1006fb5e8*/
        v36 = 0; /*0x1006fb5ef*/
        v37 = 1; /*0x1006fb5fa*/
        v38 = 0; /*0x1006fb605*/
        v32[2] = 1610612768; /*0x1006fb610*/
        v32[0] = &v36; /*0x1006fb622*/
        v32[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006fb630*/
        if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006fb645*/
                                &v39,
                                v32) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006fb848*/
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
            55,
            v61,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
        *(_QWORD *)&v35[7] = v36; /*0x1006fb667*/
        *(_QWORD *)&v35[15] = v37; /*0x1006fb66e*/
        *(_QWORD *)&v35[23] = v38; /*0x1006fb675*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v39); /*0x1006fb683*/
        v44.i8[0] = 3; /*0x1006fb688*/
        *(__int128 *)((char *)v44.i128 + 1) = *(_OWORD *)v35; /*0x1006fb69d*/
        *(__int64 *)((char *)&v44.i64[2] + 1) = *(_QWORD *)&v35[16]; /*0x1006fb6b2*/
        v44.i64[3] = *(_QWORD *)&v35[23]; /*0x1006fb6c0*/
        v10 = 1; /*0x1006fb6c7*/
      }
      v43 = v10; /*0x1006fb6cc*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fb7a3*/
      v21,
      v9,
      &v43,
      (char *)&v22[22] + 8,
      DWORD2(v22[24]),
      HIDWORD(v22[24]));
    goto LABEL_27; /*0x1006fb7a3*/
  }
  v54 = *(_QWORD **)&v22[2]; /*0x1006fb151*/
  v53 = v22[1]; /*0x1006fb16e*/
  v52 = *((_QWORD *)&v22[0] + 1); /*0x1006fb172*/
  memcpy(v18, __srca, sizeof(v18)); /*0x1006fb189*/
  v51 = 1; /*0x1006fb1aa*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fb1c5*/
    v18,
    v20[48],
    &v51,
    __src + 880,
    LODWORD(v20[49]),
    HIDWORD(v20[49]));
LABEL_27:
  if ( v48 != 0x8000000000000000LL ) /*0x1006fb7af*/
  {
    v13 = v49; /*0x1006fb7b1*/
    for ( i = v50 + 1; i != 1; --i ) /*0x1006fb7bf*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fb7dd*/
      v13 += 96; /*0x1006fb7e2*/
    }
    if ( v48 ) /*0x1006fb7f1*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, 96 * v48, 8); /*0x1006fb807*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006fb818*/
}