// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_{{closure}}::_{{closure}}::h0196b3c42ded8df5; addr: 0x1006f2b00; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:31Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h0196b3c42ded8df5(
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
  _BYTE v15[360]; // [rsp+18h] [rbp-9F8h] BYREF
  _QWORD __dst[65]; // [rsp+180h] [rbp-890h] BYREF
  _QWORD v17[50]; // [rsp+388h] [rbp-688h] BYREF
  _QWORD v18[45]; // [rsp+518h] [rbp-4F8h] BYREF
  _QWORD v19[50]; // [rsp+680h] [rbp-390h] BYREF
  _QWORD v20[13]; // [rsp+810h] [rbp-200h] BYREF
  __int64 v21; // [rsp+878h] [rbp-198h] BYREF
  __int64 v22; // [rsp+880h] [rbp-190h]
  void *__srca; // [rsp+888h] [rbp-188h]
  size_t __n; // [rsp+890h] [rbp-180h]
  __int64 v25; // [rsp+898h] [rbp-178h]
  __int64 v26; // [rsp+8A0h] [rbp-170h]
  __int64 v27; // [rsp+8A8h] [rbp-168h]
  __int64 v28; // [rsp+8B0h] [rbp-160h]
  __int64 v29; // [rsp+8B8h] [rbp-158h]
  __int64 v30; // [rsp+8C0h] [rbp-150h]
  __int64 v31; // [rsp+8C8h] [rbp-148h]
  __int64 v32; // [rsp+8D0h] [rbp-140h]
  __int64 v33; // [rsp+8D8h] [rbp-138h]
  _QWORD v34[3]; // [rsp+8E0h] [rbp-130h] BYREF
  __int64 v35; // [rsp+8F8h] [rbp-118h] BYREF
  __m256i v36; // [rsp+900h] [rbp-110h]
  __int64 v37; // [rsp+920h] [rbp-F0h]
  _BYTE v38[31]; // [rsp+929h] [rbp-E7h]
  __int64 v39; // [rsp+948h] [rbp-C8h] BYREF
  __m256i v40; // [rsp+950h] [rbp-C0h]
  __int64 v41; // [rsp+970h] [rbp-A0h]
  __int64 v42; // [rsp+978h] [rbp-98h]
  __int64 v43; // [rsp+980h] [rbp-90h] BYREF
  __int64 v44; // [rsp+988h] [rbp-88h]
  __int64 v45; // [rsp+990h] [rbp-80h]
  __int64 v46; // [rsp+998h] [rbp-78h]
  __int64 v47; // [rsp+9A0h] [rbp-70h] BYREF
  __m256i v48; // [rsp+9A8h] [rbp-68h]
  __int64 v49; // [rsp+9C8h] [rbp-48h] BYREF
  __int64 v50; // [rsp+9D0h] [rbp-40h]
  __int64 v51; // [rsp+9D8h] [rbp-38h]
  _BYTE v52[41]; // [rsp+9E7h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f2b29*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1006f2b44*/
  v51 = *((_QWORD *)__src + 117); /*0x1006f2b50*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f2b54*/
  v50 = *((_QWORD *)__src + 116); /*0x1006f2b62*/
  v49 = v2; /*0x1006f2b66*/
  v19[6] = 0; /*0x1006f2b6a*/
  v19[0] = &xmmword_1016FFDF0; /*0x1006f2b7c*/
  v19[1] = 16; /*0x1006f2b83*/
  v19[2] = &unk_1017832C8; /*0x1006f2b95*/
  v19[3] = 7; /*0x1006f2b9c*/
  v19[4] = __dst; /*0x1006f2ba7*/
  v19[5] = &v49; /*0x1006f2bb2*/
  v3 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x1006f2bc7*/
  if ( !v3 ) /*0x1006f2bd9*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f2bf0*/
      v18,
      v19,
      &v19[2]);
    if ( LOBYTE(v18[0]) != 6 ) /*0x1006f2bfc*/
    {
      v19[4] = v18[3]; /*0x1006f2eef*/
      v19[3] = v18[2]; /*0x1006f2efd*/
      v19[2] = v18[1]; /*0x1006f2f12*/
      v19[1] = v18[0]; /*0x1006f2f19*/
      memcpy(v15, __src + 520, sizeof(v15)); /*0x1006f2f32*/
      v19[0] = 1; /*0x1006f2f53*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f2f6e*/
        v15,
        v17[48],
        v19,
        __src + 880,
        LODWORD(v17[49]),
        HIDWORD(v17[49]));
      goto LABEL_22; /*0x1006f2f73*/
    }
    v3 = v18[1]; /*0x1006f2c02*/
  }
  codexmate_lib::core::relay::manager::RelayManager::get_active::h62bf4a5d7cc53492(v19, v3); /*0x1006f2c13*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h56b7b3402c6ea0c2(&v21, v19); /*0x1006f2c26*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1006f2c3a*/
  if ( v21 == 0x8000000000000000LL ) /*0x1006f2c49*/
  {
    v5 = v22; /*0x1006f2c4b*/
    v6 = __srca; /*0x1006f2c52*/
    v7 = __n; /*0x1006f2c59*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f2c63*/
    {
      v8 = 0; /*0x1006f2c69*/
      goto LABEL_7; /*0x1006f2c69*/
    }
    if ( __n ) /*0x1006f2ebc*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __src + 520, v4); /*0x1006f2ec2*/
      v8 = 1; /*0x1006f2ec7*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1006f2ed5*/
      if ( !v11 ) /*0x1006f2edd*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1006f2c6c*/
    }
    else
    {
      v11 = 1; /*0x1006f2f78*/
    }
    v42 = v11; /*0x1006f2f7d*/
    memcpy((void *)v11, v6, v7); /*0x1006f2f8d*/
    if ( v5 ) /*0x1006f2f95*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1006f2fa2*/
    memcpy(v18, __src + 520, sizeof(v18)); /*0x1006f2fb6*/
    v9 = v19[48]; /*0x1006f2fbb*/
    v46 = v19[48]; /*0x1006f2fc2*/
    v48.i8[0] = 3; /*0x1006f2fc6*/
    v48.i64[1] = v7; /*0x1006f2fca*/
    v48.i64[2] = v42; /*0x1006f2fd5*/
    v48.i64[3] = v7; /*0x1006f2fd9*/
    v47 = 1; /*0x1006f2fdd*/
  }
  else
  {
    v20[12] = v33; /*0x1006f2c8a*/
    v20[11] = v32; /*0x1006f2c98*/
    v20[10] = v31; /*0x1006f2ca6*/
    v20[9] = v30; /*0x1006f2cb4*/
    v20[8] = v29; /*0x1006f2cc2*/
    v20[7] = v28; /*0x1006f2cd0*/
    v20[6] = v27; /*0x1006f2ce5*/
    v20[5] = v26; /*0x1006f2cec*/
    memcpy(v18, __src + 520, sizeof(v18)); /*0x1006f2d02*/
    v9 = v19[48]; /*0x1006f2d07*/
    v46 = v19[48]; /*0x1006f2d0e*/
    v20[0] = v21; /*0x1006f2d12*/
    v20[1] = v22; /*0x1006f2d20*/
    v20[2] = __srca; /*0x1006f2d27*/
    v20[3] = __n; /*0x1006f2d32*/
    v20[4] = v25; /*0x1006f2d3d*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h1e28e261ab57ee69(&v39, v20); /*0x1006f2d52*/
    if ( v39 == 0x8000000000000025LL ) /*0x1006f2d62*/
    {
      v48 = v40; /*0x1006f2d76*/
      v10 = 0; /*0x1006f2d90*/
    }
    else
    {
      v37 = v41; /*0x1006f2d9e*/
      v36 = v40; /*0x1006f2dba*/
      v35 = v39; /*0x1006f2de4*/
      v43 = 0; /*0x1006f2deb*/
      v44 = 1; /*0x1006f2df6*/
      v45 = 0; /*0x1006f2e01*/
      v34[2] = 1610612768; /*0x1006f2e09*/
      v34[0] = &v43; /*0x1006f2e1b*/
      v34[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006f2e29*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006f2e3e*/
                              &v35,
                              v34) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f30a2*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v52,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v38[7] = v43; /*0x1006f2e5d*/
      *(_QWORD *)&v38[15] = v44; /*0x1006f2e64*/
      *(_QWORD *)&v38[23] = v45; /*0x1006f2e6b*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v35); /*0x1006f2e79*/
      v48.i8[0] = 3; /*0x1006f2e7e*/
      *(__int128 *)((char *)v48.i128 + 1) = *(_OWORD *)v38; /*0x1006f2e90*/
      *(__int64 *)((char *)&v48.i64[2] + 1) = *(_QWORD *)&v38[16]; /*0x1006f2e9f*/
      v48.i64[3] = *(_QWORD *)&v38[23]; /*0x1006f2eaa*/
      v10 = 1; /*0x1006f2eae*/
    }
    v47 = v10; /*0x1006f2eb3*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f3012*/
    v18,
    v9,
    &v47,
    &v19[45],
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
LABEL_22:
  if ( v49 != 0x8000000000000000LL ) /*0x1006f301b*/
  {
    v12 = v50; /*0x1006f301d*/
    for ( i = v51 + 1; i != 1; --i ) /*0x1006f3025*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f303d*/
      v12 += 96; /*0x1006f3042*/
    }
    if ( v49 ) /*0x1006f304e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 96 * v49, 8); /*0x1006f3061*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f3072*/
}