// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_{{closure}}::_{{closure}}::hac5d9e5426b696e9; addr: 0x1006fefc0; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:31Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hac5d9e5426b696e9(
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
  _BYTE v14[360]; // [rsp+20h] [rbp-9D0h] BYREF
  _QWORD __dst[65]; // [rsp+188h] [rbp-868h] BYREF
  _QWORD v16[50]; // [rsp+390h] [rbp-660h] BYREF
  _QWORD v17[45]; // [rsp+520h] [rbp-4D0h] BYREF
  _QWORD v18[50]; // [rsp+688h] [rbp-368h] BYREF
  _QWORD v19[10]; // [rsp+818h] [rbp-1D8h] BYREF
  __int64 v20; // [rsp+868h] [rbp-188h] BYREF
  __int64 v21; // [rsp+870h] [rbp-180h]
  void *__srca; // [rsp+878h] [rbp-178h]
  size_t __n; // [rsp+880h] [rbp-170h]
  __int64 v24; // [rsp+888h] [rbp-168h]
  __int64 v25; // [rsp+890h] [rbp-160h]
  __int64 v26; // [rsp+898h] [rbp-158h]
  __int64 v27; // [rsp+8A0h] [rbp-150h]
  __int64 v28; // [rsp+8A8h] [rbp-148h]
  __int64 v29; // [rsp+8B0h] [rbp-140h]
  _QWORD v30[3]; // [rsp+8B8h] [rbp-138h] BYREF
  __int64 v31; // [rsp+8D0h] [rbp-120h] BYREF
  __m256i v32; // [rsp+8D8h] [rbp-118h]
  __int64 v33; // [rsp+8F8h] [rbp-F8h]
  _BYTE v34[31]; // [rsp+901h] [rbp-EFh]
  __int64 v35; // [rsp+920h] [rbp-D0h] BYREF
  __m256i v36; // [rsp+928h] [rbp-C8h]
  __int64 v37; // [rsp+948h] [rbp-A8h]
  __int64 v38; // [rsp+950h] [rbp-A0h]
  __int64 v39; // [rsp+958h] [rbp-98h] BYREF
  __int64 v40; // [rsp+960h] [rbp-90h]
  __int64 v41; // [rsp+968h] [rbp-88h]
  __int64 v42; // [rsp+970h] [rbp-80h]
  __int64 v43; // [rsp+978h] [rbp-78h]
  __int64 v44; // [rsp+980h] [rbp-70h] BYREF
  __m256i v45; // [rsp+988h] [rbp-68h]
  __int64 v46; // [rsp+9A8h] [rbp-48h] BYREF
  __int64 v47; // [rsp+9B0h] [rbp-40h]
  __int64 v48; // [rsp+9B8h] [rbp-38h]
  _BYTE v49[41]; // [rsp+9C7h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fefe9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1006ff004*/
  v48 = *((_QWORD *)__src + 117); /*0x1006ff010*/
  v2 = *((_QWORD *)__src + 115); /*0x1006ff014*/
  v47 = *((_QWORD *)__src + 116); /*0x1006ff022*/
  v46 = v2; /*0x1006ff026*/
  v18[6] = 0; /*0x1006ff02a*/
  v18[0] = "get_claude_web_search_compatset_claude_web_search_compatset_auto_switch"; /*0x1006ff03c*/
  v18[1] = 28; /*0x1006ff043*/
  v18[2] = &unk_1017832C8; /*0x1006ff055*/
  v18[3] = 7; /*0x1006ff05c*/
  v18[4] = __dst; /*0x1006ff067*/
  v18[5] = &v46; /*0x1006ff072*/
  v3 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x1006ff087*/
  if ( !v3 ) /*0x1006ff08f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006ff0a6*/
      v17,
      v18,
      &v18[2]);
    if ( LOBYTE(v17[0]) != 6 ) /*0x1006ff0b2*/
    {
      v18[4] = v17[3]; /*0x1006ff386*/
      v18[3] = v17[2]; /*0x1006ff394*/
      v18[2] = v17[1]; /*0x1006ff3a9*/
      v18[1] = v17[0]; /*0x1006ff3b0*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1006ff3c9*/
      v18[0] = 1; /*0x1006ff3ea*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006ff405*/
        v14,
        v16[48],
        v18,
        __src + 880,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_22; /*0x1006ff40a*/
    }
    v3 = v17[1]; /*0x1006ff0b8*/
  }
  codexmate_lib::commands::system::get_claude_web_search_compat::h3b4a9775c3ba3cd9(&v20, v3); /*0x1006ff0c9*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1006ff0dd*/
  if ( v20 == 0x8000000000000000LL ) /*0x1006ff0f6*/
  {
    v43 = v21; /*0x1006ff0ff*/
    v5 = __srca; /*0x1006ff103*/
    v6 = __n; /*0x1006ff10a*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006ff114*/
    {
      v7 = 0; /*0x1006ff11a*/
      goto LABEL_7; /*0x1006ff11a*/
    }
    if ( __n ) /*0x1006ff353*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520, v4); /*0x1006ff359*/
      v7 = 1; /*0x1006ff35e*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006ff36c*/
      if ( !v10 ) /*0x1006ff374*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006ff11d*/
    }
    else
    {
      v10 = 1; /*0x1006ff40f*/
    }
    v38 = v10; /*0x1006ff414*/
    memcpy((void *)v10, v5, v6); /*0x1006ff424*/
    if ( v43 ) /*0x1006ff430*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v43, 1); /*0x1006ff43a*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1006ff44e*/
    v8 = v18[48]; /*0x1006ff453*/
    v42 = v18[48]; /*0x1006ff45a*/
    v45.i8[0] = 3; /*0x1006ff45e*/
    v45.i64[1] = v6; /*0x1006ff462*/
    v45.i64[2] = v38; /*0x1006ff46d*/
    v45.i64[3] = v6; /*0x1006ff471*/
    v44 = 1; /*0x1006ff475*/
  }
  else
  {
    v19[9] = v29; /*0x1006ff13b*/
    v19[8] = v28; /*0x1006ff149*/
    v19[7] = v27; /*0x1006ff157*/
    v19[6] = v26; /*0x1006ff16c*/
    v19[5] = v25; /*0x1006ff173*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1006ff189*/
    v8 = v18[48]; /*0x1006ff18e*/
    v42 = v18[48]; /*0x1006ff195*/
    v19[0] = v20; /*0x1006ff199*/
    v19[1] = v21; /*0x1006ff1a7*/
    v19[2] = __srca; /*0x1006ff1ae*/
    v19[3] = __n; /*0x1006ff1b9*/
    v19[4] = v24; /*0x1006ff1c4*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h4a445dd8036f291b(&v35, v19); /*0x1006ff1d9*/
    if ( v35 == 0x8000000000000025LL ) /*0x1006ff1f3*/
    {
      v45 = v36; /*0x1006ff207*/
      v9 = 0; /*0x1006ff221*/
    }
    else
    {
      v33 = v37; /*0x1006ff22f*/
      v32 = v36; /*0x1006ff24b*/
      v31 = v35; /*0x1006ff275*/
      v39 = 0; /*0x1006ff27c*/
      v40 = 1; /*0x1006ff287*/
      v41 = 0; /*0x1006ff292*/
      v30[2] = 1610612768; /*0x1006ff29d*/
      v30[0] = &v39; /*0x1006ff2af*/
      v30[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006ff2bd*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006ff2d2*/
                              &v31,
                              v30) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006ff542*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v49,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v34[7] = v39; /*0x1006ff2f4*/
      *(_QWORD *)&v34[15] = v40; /*0x1006ff2fb*/
      *(_QWORD *)&v34[23] = v41; /*0x1006ff302*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v31); /*0x1006ff310*/
      v45.i8[0] = 3; /*0x1006ff315*/
      *(__int128 *)((char *)v45.i128 + 1) = *(_OWORD *)v34; /*0x1006ff327*/
      *(__int64 *)((char *)&v45.i64[2] + 1) = *(_QWORD *)&v34[16]; /*0x1006ff336*/
      v45.i64[3] = *(_QWORD *)&v34[23]; /*0x1006ff341*/
      v9 = 1; /*0x1006ff345*/
    }
    v44 = v9; /*0x1006ff34a*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006ff4a3*/
    v17,
    v8,
    &v44,
    __src + 880,
    LODWORD(v18[49]),
    HIDWORD(v18[49]));
LABEL_22:
  if ( v46 != 0x8000000000000000LL ) /*0x1006ff4b6*/
  {
    v11 = v47; /*0x1006ff4b8*/
    for ( i = v48 + 1; i != 1; --i ) /*0x1006ff4c0*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006ff4dd*/
      v11 += 96; /*0x1006ff4e2*/
    }
    if ( v46 ) /*0x1006ff4ee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 96 * v46, 8); /*0x1006ff501*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006ff512*/
}