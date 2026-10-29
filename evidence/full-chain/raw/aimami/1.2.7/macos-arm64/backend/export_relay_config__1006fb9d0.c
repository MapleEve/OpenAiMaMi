// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6cc7e0b836767ae8; addr: 0x1006fb9d0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:26Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6cc7e0b836767ae8(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rdx
  __int128 v7; // kr10_16
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 i; // r15
  _BYTE v17[360]; // [rsp+18h] [rbp-CF8h] BYREF
  _BYTE v18[360]; // [rsp+180h] [rbp-B90h] BYREF
  _BYTE v19[360]; // [rsp+2E8h] [rbp-A28h] BYREF
  _QWORD __dst[65]; // [rsp+450h] [rbp-8C0h] BYREF
  _QWORD v21[50]; // [rsp+658h] [rbp-6B8h] BYREF
  _QWORD v22[45]; // [rsp+7E8h] [rbp-528h] BYREF
  __int64 v23; // [rsp+950h] [rbp-3C0h] BYREF
  __int128 v24; // [rsp+958h] [rbp-3B8h]
  size_t __n; // [rsp+968h] [rbp-3A8h]
  __int64 v26; // [rsp+970h] [rbp-3A0h]
  _BYTE v27[80]; // [rsp+978h] [rbp-398h] BYREF
  _OWORD v28[25]; // [rsp+9C8h] [rbp-348h] BYREF
  __int64 v29; // [rsp+B58h] [rbp-1B8h] BYREF
  __int128 v30; // [rsp+B60h] [rbp-1B0h] BYREF
  size_t v31; // [rsp+B70h] [rbp-1A0h]
  __int64 v32; // [rsp+B78h] [rbp-198h]
  _BYTE v33[80]; // [rsp+B80h] [rbp-190h] BYREF
  _QWORD v34[3]; // [rsp+BD0h] [rbp-140h] BYREF
  _BYTE v35[31]; // [rsp+BE9h] [rbp-127h]
  __int64 v36; // [rsp+C08h] [rbp-108h] BYREF
  __m256i v37; // [rsp+C10h] [rbp-100h]
  __int64 v38; // [rsp+C30h] [rbp-E0h]
  __int64 v39; // [rsp+C38h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+C40h] [rbp-D0h]
  __int64 v41; // [rsp+C48h] [rbp-C8h]
  __int64 v42; // [rsp+C50h] [rbp-C0h] BYREF
  __m256i v43; // [rsp+C58h] [rbp-B8h]
  __int64 v44; // [rsp+C78h] [rbp-98h]
  __int64 v45; // [rsp+C80h] [rbp-90h]
  __int64 v46; // [rsp+C88h] [rbp-88h] BYREF
  __m256i v47; // [rsp+C90h] [rbp-80h]
  __int64 v48; // [rsp+CB0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+CB8h] [rbp-58h]
  __int64 v50; // [rsp+CC0h] [rbp-50h]
  __int64 v51; // [rsp+CC8h] [rbp-48h]
  void *__srca; // [rsp+CD0h] [rbp-40h]
  char v53; // [rsp+CDFh] [rbp-31h] BYREF
  __int64 v54; // [rsp+CE0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fb9f9*/
  __srca = __src + 520; /*0x1006fba11*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x1006fba15*/
  v50 = *((_QWORD *)__src + 117); /*0x1006fba21*/
  v2 = *((_QWORD *)__src + 115); /*0x1006fba25*/
  v49 = *((_QWORD *)__src + 116); /*0x1006fba33*/
  v48 = v2; /*0x1006fba37*/
  *(_QWORD *)&v28[3] = 0; /*0x1006fba3b*/
  *(_QWORD *)&v28[0] = "export_relay_configimport_relay_configparse_aimami_deeplinkAiMaMi"; /*0x1006fba4d*/
  *((_QWORD *)&v28[0] + 1) = 19; /*0x1006fba54*/
  v3 = &unk_1017832C8; /*0x1006fba5f*/
  *(_QWORD *)&v28[1] = &unk_1017832C8; /*0x1006fba66*/
  *((_QWORD *)&v28[1] + 1) = 7; /*0x1006fba6d*/
  *(_QWORD *)&v28[2] = __dst; /*0x1006fba78*/
  *((_QWORD *)&v28[2] + 1) = &v48; /*0x1006fba83*/
  LOBYTE(v3) = 1; /*0x1006fba95*/
  LODWORD(v54) = (_DWORD)v3; /*0x1006fba97*/
  v4 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x1006fba9a*/
  v5 = v4; /*0x1006fba9f*/
  if ( v4 ) /*0x1006fbaa5*/
  {
    v43.i64[0] = v4; /*0x1006fbaa7*/
    LOBYTE(v42) = 6; /*0x1006fbaae*/
  }
  else
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006fbacc*/
      &v42,
      v28,
      &v28[1]);
    if ( (_BYTE)v42 != 6 ) /*0x1006fbad8*/
    {
      *(_QWORD *)&v28[2] = v43.i64[2]; /*0x1006fbd92*/
      v28[1] = v43.i128[0]; /*0x1006fbdb5*/
      *((_QWORD *)&v28[0] + 1) = v42; /*0x1006fbdbc*/
      memcpy(v19, __srca, sizeof(v19)); /*0x1006fbdd6*/
      *(_QWORD *)&v28[0] = 1; /*0x1006fbdf7*/
      LODWORD(v54) = 0; /*0x1006fbe02*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fbe16*/
        v19,
        v21[48],
        v28,
        __src + 880,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      goto LABEL_29; /*0x1006fbe16*/
    }
    v5 = v43.i64[0]; /*0x1006fbade*/
  }
  *(_QWORD *)&v28[3] = 0; /*0x1006fbae5*/
  *(_QWORD *)&v28[0] = "export_relay_configimport_relay_configparse_aimami_deeplinkAiMaMi"; /*0x1006fbaf0*/
  *((_QWORD *)&v28[0] + 1) = 19; /*0x1006fbaf7*/
  *(_QWORD *)&v28[1] = "filePathrelaunchdiagnosecategoryuserNotecurrencymutationdownloadbytesRidregisterdeepLinkprotocolu" /*0x1006fbb09*/
                       "nlistenset_sizeset_iconminimizemaximizereparentall branches are disabled and there is no else branch";
  *((_QWORD *)&v28[1] + 1) = 8; /*0x1006fbb10*/
  *(_QWORD *)&v28[2] = __dst; /*0x1006fbb1b*/
  *((_QWORD *)&v28[2] + 1) = &v48; /*0x1006fbb22*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(&v29, v28); /*0x1006fbb37*/
  if ( (_BYTE)v29 == 6 ) /*0x1006fbb43*/
  {
    v51 = *((_QWORD *)&v30 + 1); /*0x1006fbb5b*/
    v54 = v30; /*0x1006fbb5b*/
    *(_QWORD *)&v28[3] = 0; /*0x1006fbb5f*/
    *(_QWORD *)&v28[0] = "export_relay_configimport_relay_configparse_aimami_deeplinkAiMaMi"; /*0x1006fbb6a*/
    *((_QWORD *)&v28[0] + 1) = 19; /*0x1006fbb71*/
    *(_QWORD *)&v28[1] = &unk_10178330C; /*0x1006fbb83*/
    *((_QWORD *)&v28[1] + 1) = 14; /*0x1006fbb8a*/
    *(_QWORD *)&v28[2] = __dst; /*0x1006fbb95*/
    *((_QWORD *)&v28[2] + 1) = &v48; /*0x1006fbb9c*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h84e3518ea2010953(v22, v28); /*0x1006fbbb1*/
    if ( LOBYTE(v22[0]) == 6 ) /*0x1006fbbbd*/
    {
      codexmate_lib::commands::relay::export_relay_config::hfa7b95083057fdea(&v23, v5, &v30, BYTE1(v22[0])); /*0x1006fbbdb*/
      memcpy(v28, __srca, sizeof(v28)); /*0x1006fbbf3*/
      if ( v23 == 0x8000000000000000LL ) /*0x1006fbc0c*/
      {
        v7 = v24; /*0x1006fbc19*/
        v8 = __n; /*0x1006fbc20*/
        if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006fbc2a*/
        {
          v9 = 0; /*0x1006fbc30*/
          goto LABEL_10; /*0x1006fbc30*/
        }
        if ( __n ) /*0x1006fc01d*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, __srca, v6); /*0x1006fc01f*/
          v9 = 1; /*0x1006fc024*/
          v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1006fc032*/
          if ( !v12 ) /*0x1006fc03a*/
LABEL_10:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1006fbc33*/
          v13 = v12; /*0x1006fc040*/
        }
        else
        {
          v13 = 1; /*0x1006fc045*/
        }
        memcpy((void *)v13, *((const void **)&v7 + 1), v8); /*0x1006fc054*/
        if ( (_QWORD)v7 ) /*0x1006fc05c*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v7 + 1), v7, 1); /*0x1006fc069*/
        memcpy(v22, __srca, sizeof(v22)); /*0x1006fc07e*/
        v10 = *(_QWORD *)&v28[24]; /*0x1006fc083*/
        v45 = *(_QWORD *)&v28[24]; /*0x1006fc08a*/
        v47.i8[0] = 3; /*0x1006fc091*/
        v47.i64[1] = v8; /*0x1006fc095*/
        v47.i64[2] = v13; /*0x1006fc099*/
        v47.i64[3] = v8; /*0x1006fc09d*/
        v46 = 1; /*0x1006fc0a1*/
      }
      else
      {
        qmemcpy(v33, v27, sizeof(v33)); /*0x1006fbe44*/
        memcpy(v22, __srca, sizeof(v22)); /*0x1006fbe56*/
        v10 = *(_QWORD *)&v28[24]; /*0x1006fbe5b*/
        v45 = *(_QWORD *)&v28[24]; /*0x1006fbe62*/
        v29 = v23; /*0x1006fbe69*/
        v30 = v24; /*0x1006fbe77*/
        v31 = __n; /*0x1006fbe89*/
        v32 = v26; /*0x1006fbe94*/
        _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h6c57f040f7b8fea3(&v36, &v29); /*0x1006fbea9*/
        if ( v36 == 0x8000000000000025LL ) /*0x1006fbeba*/
        {
          v47 = v37; /*0x1006fbece*/
          v11 = 0; /*0x1006fbee8*/
        }
        else
        {
          v44 = v38; /*0x1006fbef6*/
          v43 = v37; /*0x1006fbf12*/
          v42 = v36; /*0x1006fbf3c*/
          v39 = 0; /*0x1006fbf43*/
          v40 = 1; /*0x1006fbf4e*/
          v41 = 0; /*0x1006fbf59*/
          v34[2] = 1610612768; /*0x1006fbf64*/
          v34[0] = &v39; /*0x1006fbf76*/
          v34[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006fbf84*/
          if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006fbf99*/
                                  &v42,
                                  v34) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006fc172*/
              &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
              55,
              &v53,
              &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
              &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
          *(_QWORD *)&v35[7] = v39; /*0x1006fbfbb*/
          *(_QWORD *)&v35[15] = v40; /*0x1006fbfc2*/
          *(_QWORD *)&v35[23] = v41; /*0x1006fbfc9*/
          core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v42); /*0x1006fbfd7*/
          v47.i8[0] = 3; /*0x1006fbfdc*/
          *(__int128 *)((char *)v47.i128 + 1) = *(_OWORD *)v35; /*0x1006fbfee*/
          *(__int64 *)((char *)&v47.i64[2] + 1) = *(_QWORD *)&v35[16]; /*0x1006fbffd*/
          v47.i64[3] = *(_QWORD *)&v35[23]; /*0x1006fc008*/
          v11 = 1; /*0x1006fc00c*/
        }
        v46 = v11; /*0x1006fc011*/
      }
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fc0dc*/
        v22,
        v10,
        &v46,
        (char *)&v28[22] + 8,
        DWORD2(v28[24]),
        HIDWORD(v28[24]));
    }
    else
    {
      *(_QWORD *)&v28[2] = v22[3]; /*0x1006fbcdf*/
      v28[1] = *(_OWORD *)&v22[1]; /*0x1006fbd02*/
      *((_QWORD *)&v28[0] + 1) = v22[0]; /*0x1006fbd09*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1006fbd23*/
      *(_QWORD *)&v28[0] = 1; /*0x1006fbd44*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fbd5c*/
        v17,
        v21[48],
        v28,
        __src + 880,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      if ( v54 ) /*0x1006fbd72*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v54, 1); /*0x1006fbd81*/
    }
  }
  else
  {
    *(_QWORD *)&v28[2] = v31; /*0x1006fbc4a*/
    v28[1] = v30; /*0x1006fbc6d*/
    *((_QWORD *)&v28[0] + 1) = v29; /*0x1006fbc74*/
    memcpy(v18, __srca, sizeof(v18)); /*0x1006fbc8e*/
    *(_QWORD *)&v28[0] = 1; /*0x1006fbcaf*/
    LODWORD(v54) = 0; /*0x1006fbcba*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fbcce*/
      v18,
      v21[48],
      v28,
      __src + 880,
      LODWORD(v21[49]),
      HIDWORD(v21[49]));
  }
LABEL_29:
  if ( v48 != 0x8000000000000000LL ) /*0x1006fc0e5*/
  {
    v14 = v49; /*0x1006fc0e7*/
    for ( i = v50 + 1; i != 1; --i ) /*0x1006fc0ef*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fc10d*/
      v14 += 96; /*0x1006fc112*/
    }
    if ( v48 ) /*0x1006fc11e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, 96 * v48, 8); /*0x1006fc131*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006fc142*/
}