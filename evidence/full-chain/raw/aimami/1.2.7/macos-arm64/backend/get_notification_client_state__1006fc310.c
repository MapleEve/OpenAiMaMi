// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h711e0ef8383287fb; addr: 0x1006fc310; session: <审计会话>; decompiled_at: 2026-10-26T03:22:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h711e0ef8383287fb(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  void *v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+20h] [rbp-970h] BYREF
  _QWORD __dst[65]; // [rsp+188h] [rbp-808h] BYREF
  _QWORD v16[50]; // [rsp+390h] [rbp-600h] BYREF
  _QWORD v17[45]; // [rsp+520h] [rbp-470h] BYREF
  _QWORD v18[50]; // [rsp+688h] [rbp-308h] BYREF
  _QWORD v19[4]; // [rsp+818h] [rbp-178h] BYREF
  _QWORD v20[3]; // [rsp+838h] [rbp-158h] BYREF
  __int64 v21; // [rsp+850h] [rbp-140h] BYREF
  __m256i v22; // [rsp+858h] [rbp-138h]
  __int64 v23; // [rsp+878h] [rbp-118h]
  _BYTE v24[31]; // [rsp+881h] [rbp-10Fh]
  __int64 v25; // [rsp+8A0h] [rbp-F0h] BYREF
  __m256i v26; // [rsp+8A8h] [rbp-E8h]
  __int64 v27; // [rsp+8C8h] [rbp-C8h]
  __int64 v28; // [rsp+8D0h] [rbp-C0h]
  __int64 v29; // [rsp+8D8h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+8E0h] [rbp-B0h]
  void *__srca; // [rsp+8E8h] [rbp-A8h]
  size_t __n; // [rsp+8F0h] [rbp-A0h]
  __int64 v33; // [rsp+8F8h] [rbp-98h] BYREF
  __int64 v34; // [rsp+900h] [rbp-90h]
  __int64 v35; // [rsp+908h] [rbp-88h]
  __int64 v36; // [rsp+910h] [rbp-80h]
  __int64 v37; // [rsp+918h] [rbp-78h]
  __int64 v38; // [rsp+920h] [rbp-70h] BYREF
  __m256i v39; // [rsp+928h] [rbp-68h]
  __int64 v40; // [rsp+948h] [rbp-48h] BYREF
  __int64 v41; // [rsp+950h] [rbp-40h]
  __int64 v42; // [rsp+958h] [rbp-38h]
  _BYTE v43[41]; // [rsp+967h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fc339*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1006fc354*/
  v42 = *((_QWORD *)__src + 117); /*0x1006fc360*/
  v2 = *((_QWORD *)__src + 115); /*0x1006fc364*/
  v41 = *((_QWORD *)__src + 116); /*0x1006fc372*/
  v40 = v2; /*0x1006fc376*/
  v18[6] = 0; /*0x1006fc37a*/
  v18[0] = "get_notification_client_stateget_system_infodefault_debug_bundle_file_name"; /*0x1006fc38c*/
  v18[1] = 29; /*0x1006fc393*/
  v18[2] = &unk_1016E98EC; /*0x1006fc3a5*/
  v18[3] = 4; /*0x1006fc3ac*/
  v18[4] = __dst; /*0x1006fc3b7*/
  v18[5] = &v40; /*0x1006fc3c2*/
  v3 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x1006fc3d7*/
  if ( !v3 ) /*0x1006fc3e9*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006fc400*/
      v17,
      v18,
      &v18[2]);
    if ( LOBYTE(v17[0]) != 6 ) /*0x1006fc40c*/
    {
      v18[4] = v17[3]; /*0x1006fc68c*/
      v18[3] = v17[2]; /*0x1006fc69a*/
      v18[2] = v17[1]; /*0x1006fc6af*/
      v18[1] = v17[0]; /*0x1006fc6b6*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1006fc6cf*/
      v18[0] = 1; /*0x1006fc6f0*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fc70b*/
        v14,
        v16[48],
        v18,
        __src + 880,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_22; /*0x1006fc710*/
    }
    v3 = v17[1]; /*0x1006fc412*/
  }
  codexmate_lib::commands::system::get_notification_client_state::h5785eb06a21dc72c(&v29, v3); /*0x1006fc423*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1006fc437*/
  if ( v29 == 0x8000000000000000LL ) /*0x1006fc443*/
  {
    v37 = v30; /*0x1006fc44c*/
    v5 = __srca; /*0x1006fc450*/
    v6 = __n; /*0x1006fc457*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006fc461*/
    {
      v7 = 0; /*0x1006fc467*/
      goto LABEL_7; /*0x1006fc467*/
    }
    if ( __n ) /*0x1006fc64f*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520, v4); /*0x1006fc655*/
      v7 = 1; /*0x1006fc65a*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006fc668*/
      if ( !v10 ) /*0x1006fc670*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006fc46a*/
    }
    else
    {
      v10 = 1; /*0x1006fc715*/
    }
    v28 = v10; /*0x1006fc71a*/
    memcpy((void *)v10, v5, v6); /*0x1006fc72a*/
    if ( v37 ) /*0x1006fc736*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v37, 1); /*0x1006fc740*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1006fc754*/
    v8 = v18[48]; /*0x1006fc759*/
    v36 = v18[48]; /*0x1006fc760*/
    v39.i8[0] = 3; /*0x1006fc764*/
    v39.i64[1] = v6; /*0x1006fc768*/
    v39.i64[2] = v28; /*0x1006fc773*/
    v39.i64[3] = v6; /*0x1006fc777*/
    v38 = 1; /*0x1006fc77b*/
  }
  else
  {
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1006fc489*/
    v8 = v18[48]; /*0x1006fc48e*/
    v36 = v18[48]; /*0x1006fc495*/
    v19[3] = __n; /*0x1006fc4a0*/
    v19[2] = __srca; /*0x1006fc4ae*/
    v19[1] = v30; /*0x1006fc4c3*/
    v19[0] = v29; /*0x1006fc4ca*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hc3712ab25420bcc2(&v25, v19); /*0x1006fc4df*/
    if ( v25 == 0x8000000000000025LL ) /*0x1006fc4ef*/
    {
      v39 = v26; /*0x1006fc503*/
      v9 = 0; /*0x1006fc51d*/
    }
    else
    {
      v23 = v27; /*0x1006fc52b*/
      v22 = v26; /*0x1006fc547*/
      v21 = v25; /*0x1006fc571*/
      v33 = 0; /*0x1006fc578*/
      v34 = 1; /*0x1006fc583*/
      v35 = 0; /*0x1006fc58e*/
      v20[2] = 1610612768; /*0x1006fc599*/
      v20[0] = &v33; /*0x1006fc5ab*/
      v20[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006fc5b9*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006fc5ce*/
                              &v21,
                              v20) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006fc832*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v43,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v24[7] = v33; /*0x1006fc5f0*/
      *(_QWORD *)&v24[15] = v34; /*0x1006fc5f7*/
      *(_QWORD *)&v24[23] = v35; /*0x1006fc5fe*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v21); /*0x1006fc60c*/
      v39.i8[0] = 3; /*0x1006fc611*/
      *(__int128 *)((char *)v39.i128 + 1) = *(_OWORD *)v24; /*0x1006fc623*/
      *(__int64 *)((char *)&v39.i64[2] + 1) = *(_QWORD *)&v24[16]; /*0x1006fc632*/
      v39.i64[3] = *(_QWORD *)&v24[23]; /*0x1006fc63d*/
      v9 = 1; /*0x1006fc641*/
    }
    v38 = v9; /*0x1006fc646*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fc7a9*/
    v17,
    v8,
    &v38,
    __src + 880,
    LODWORD(v18[49]),
    HIDWORD(v18[49]));
LABEL_22:
  if ( v40 != 0x8000000000000000LL ) /*0x1006fc7b2*/
  {
    v11 = v41; /*0x1006fc7b4*/
    for ( i = v42 + 1; i != 1; --i ) /*0x1006fc7bc*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fc7cd*/
      v11 += 96; /*0x1006fc7d2*/
    }
    if ( v40 ) /*0x1006fc7de*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 96 * v40, 8); /*0x1006fc7f1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006fc802*/
}