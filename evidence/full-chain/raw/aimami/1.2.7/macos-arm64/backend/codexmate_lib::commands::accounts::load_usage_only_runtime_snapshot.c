// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h1aa1ffab5add01fd; addr: 0x100a62660; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
// B-level evidence identity verified; module codexmate_lib/commands/accounts; range 0x100a62660-0x100a631d2; sha f019dbc8e267; session <审计会话>; method same-callee-string-number-sets; decompiler-type-variant; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
// [release-semantic-writeback <审计会话> 0x100a62660]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [accounts-content-analysis / helper-extraction-and-retained-operations-confirmed-full-equivalence-unproven] load_usage_only_runtime_snapshot callee 大幅缩减不能解释成用量刷新被删除；核心刷新链已搬到新 enric
// h_account_usage_via_api 及闭包。 分组证据：release load_usage_only_runtime_snapshot 实际调用 enrich_account_usage_via_api，然后重新取得共享锁并持久化刷新后的运行态，失败报 Failed to persist refreshed runtime state。；新he
// lper正文实际包含 collect_account_api_contexts、test_api_connectivity、apply_usage_result、quota_store::upsert_item、sync_token_status_to_quota_store、finish_refresh_report、Utc/SystemTime、线程sc
// ope及is_connect/is_timeout分类。；其闭包实际调用 refresh_token_with_policy、fetch_usage_with_one_auth_retry、build_account_token_status、log_token_refresh_outcome；这些正是pre调用集中消失的业务叶。缺API请求上下文有明确 r
// efreshed account snapshot has no API request context 错误。；pre调用字段证明这些业务操作原在旧owner中；pre owner完整体缺失，因此此处只确认外提结构和操作存在，不声称每个错误优先级、并发批次和分支完全无变化。
// 副作用边界："HTTP用量/连通性请求、OAuth凭据刷新、quota store更新和刷新状态持久化；不是只读显示函数。"
// 限制：非整函数逐路径等价证明。
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e027
// 4206dd853ade3eef7cc9003b68d1e289ab88947f776436e
char *__fastcall codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h1aa1ffab5add01fd(
        char *__dst,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        double a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r15
  char v13; // al
  __int64 v14; // r12
  __int64 v15; // r13
  char v16; // r14
  int v17; // ecx
  char v18; // al
  char v19; // al
  _QWORD *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  const void *v23; // r13
  size_t v24; // r14
  __int64 v25; // rax
  void *v26; // rax
  double v27; // xmm0_8
  unsigned __int8 v28; // r15
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  char v33; // r14
  __int64 v34; // r15
  __int64 v35; // r12
  char v36; // r13
  int v37; // eax
  __int64 v38; // rdx
  void *v39; // rax
  void *v40; // r15
  char v41; // r13
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r15
  _QWORD *v52; // r12
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rsi
  _BYTE v59[1136]; // [rsp+8h] [rbp-1508h] BYREF
  _QWORD v60[110]; // [rsp+478h] [rbp-1098h] BYREF
  _QWORD v61[142]; // [rsp+7E8h] [rbp-D28h] BYREF
  _QWORD v62[110]; // [rsp+C58h] [rbp-8B8h] BYREF
  _QWORD v63[142]; // [rsp+FC8h] [rbp-548h] BYREF
  _QWORD v64[5]; // [rsp+1438h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+1460h] [rbp-B0h]
  __int64 v66; // [rsp+1468h] [rbp-A8h]
  __int64 v67; // [rsp+1470h] [rbp-A0h]
  __int64 v68; // [rsp+1478h] [rbp-98h]
  __int64 v69; // [rsp+1480h] [rbp-90h] BYREF
  __int64 v70; // [rsp+1488h] [rbp-88h]
  __int64 v71; // [rsp+1490h] [rbp-80h]
  __int64 v72; // [rsp+1498h] [rbp-78h]
  __int64 v73; // [rsp+14A0h] [rbp-70h] BYREF
  __int64 v74; // [rsp+14A8h] [rbp-68h]
  __int64 v75; // [rsp+14B0h] [rbp-60h]
  _DWORD v76[2]; // [rsp+14B8h] [rbp-58h]
  _QWORD *v77; // [rsp+14C0h] [rbp-50h]
  size_t v78; // [rsp+14C8h] [rbp-48h]
  int v79; // [rsp+14D4h] [rbp-3Ch]
  _QWORD *v80; // [rsp+14D8h] [rbp-38h]
  int v81; // [rsp+14E4h] [rbp-2Ch]

  v60[14] = 0; /*0x100a62674*/
  v8 = *(_QWORD *)a2; /*0x100a6268f*/
  if ( !*(_QWORD *)a2 ) /*0x100a6268f*/
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(a2); /*0x100a627b4*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a5); /*0x100a6269b*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100a626aa*/
  {
    v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8) ^ 1; /*0x100a627c4*/
    v18 = *(_BYTE *)(a2 + 8); /*0x100a627c8*/
    v80 = (_QWORD *)a2; /*0x100a627cf*/
    if ( v18 ) /*0x100a627d3*/
      goto LABEL_5; /*0x100a627d3*/
  }
  else
  {
    v12 = 0; /*0x100a626b6*/
    v13 = *(_BYTE *)(a2 + 8); /*0x100a626b9*/
    v80 = (_QWORD *)a2; /*0x100a626c0*/
    if ( v13 ) /*0x100a626c4*/
    {
LABEL_5:
      v61[0] = 0; /*0x100a626ca*/
      v61[1] = 1; /*0x100a626d5*/
      v61[2] = 0; /*0x100a626e0*/
      v63[2] = 1610612768; /*0x100a626eb*/
      v63[0] = v61; /*0x100a626fd*/
      v63[1] = &anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a6270b*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x100a62725*/
                              &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                              41,
                              v63,
                              v9,
                              v10,
                              v11) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a62bc4*/
          &anon_442098b8dbdde10fede7d79fc85e0df3_291,
          55,
          &v69,
          &anon_442098b8dbdde10fede7d79fc85e0df3_301,
          &anon_442098b8dbdde10fede7d79fc85e0df3_293);
      v14 = v61[0]; /*0x100a62732*/
      v15 = v61[1]; /*0x100a62739*/
      v16 = v61[2]; /*0x100a62740*/
      v76[0] = *(_DWORD *)((char *)&v61[2] + 1); /*0x100a6274e*/
      *(_DWORD *)((char *)v76 + 3) = HIDWORD(v61[2]); /*0x100a62757*/
      if ( !v12 /*0x100a62bce*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
      {
        *((_BYTE *)v80 + 8) = 1; /*0x100a62bdf*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v80); /*0x100a62783*/
      *((_QWORD *)__dst + 1) = v14; /*0x100a62788*/
      *((_QWORD *)__dst + 2) = v15; /*0x100a6278c*/
      __dst[24] = v16; /*0x100a62790*/
      v17 = *(_DWORD *)((char *)v76 + 3); /*0x100a62797*/
      *(_DWORD *)(__dst + 25) = v76[0]; /*0x100a6279a*/
      *((_DWORD *)__dst + 7) = v17; /*0x100a6279d*/
      *(_QWORD *)__dst = 3; /*0x100a627a0*/
      return __dst; /*0x100a627a7*/
    }
  }
  v79 = a3; /*0x100a627d9*/
  v72 = a2 + 16; /*0x100a627e8*/
  codexmate_lib::core::repository::Repository::load_local_state_synced::he6073a50d2b691f7(v63); /*0x100a627ec*/
  if ( v63[0] == 2 ) /*0x100a62803*/
  {
    qmemcpy(v60, &v63[1], 0x60u); /*0x100a6281b*/
    v73 = 0; /*0x100a6281e*/
    v74 = 1; /*0x100a62826*/
    v75 = 0; /*0x100a6282e*/
    v62[2] = 1610612768; /*0x100a62836*/
    v62[0] = &v73; /*0x100a62845*/
    v62[1] = &anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a62853*/
    v19 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a62864*/
            v60,
            v62);
    v20 = v80; /*0x100a6286b*/
    if ( v19 ) /*0x100a6286f*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a62c09*/
        &anon_442098b8dbdde10fede7d79fc85e0df3_291,
        55,
        &v69,
        &anon_442098b8dbdde10fede7d79fc85e0df3_301,
        &anon_442098b8dbdde10fede7d79fc85e0df3_293);
    v69 = v73; /*0x100a6287d*/
    v70 = v74; /*0x100a62884*/
    v71 = v75; /*0x100a6288f*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&v63[1]); /*0x100a62896*/
    v21 = v69; /*0x100a6289f*/
    v22 = v70; /*0x100a628a6*/
    v64[3] = v69; /*0x100a628ad*/
    v64[4] = v70; /*0x100a628b4*/
    v65 = v71; /*0x100a628bb*/
    *((_QWORD *)__dst + 3) = v71; /*0x100a628c2*/
    *((_QWORD *)__dst + 2) = v22; /*0x100a628c6*/
    *((_QWORD *)__dst + 1) = v21; /*0x100a628ca*/
    *(_QWORD *)__dst = 3; /*0x100a628ce*/
    if ( !v12 /*0x100a6316c*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v63[1]) )
    {
      *((_BYTE *)v20 + 8) = 1; /*0x100a63179*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v20); /*0x100a628fa*/
    return __dst; /*0x100a628ff*/
  }
  v68 = v63[3]; /*0x100a62908*/
  v67 = v63[2]; /*0x100a62917*/
  v66 = v63[1]; /*0x100a6291e*/
  memcpy(&v61[4], &v63[4], 0x450u); /*0x100a62938*/
  v65 = v63[3]; /*0x100a62944*/
  v61[1] = v63[1]; /*0x100a62959*/
  v61[2] = v63[2]; /*0x100a62960*/
  v61[3] = v63[3]; /*0x100a62967*/
  v61[0] = v63[0]; /*0x100a6296e*/
  v23 = (const void *)v80[51]; /*0x100a62979*/
  v24 = v80[52]; /*0x100a62980*/
  if ( v24 ) /*0x100a6298a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v61[4], &v63[4], v63[2]); /*0x100a6298c*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x100a62999*/
    if ( !v25 ) /*0x100a629a1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24); /*0x100a629ab*/
  }
  else
  {
    v25 = 1; /*0x100a629b5*/
  }
  v77 = (_QWORD *)v25; /*0x100a629ba*/
  memcpy((void *)v25, v23, v24); /*0x100a629c7*/
  memcpy(v59, v61, sizeof(v59)); /*0x100a629df*/
  if ( !v12 /*0x100a63152*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v59) )
  {
    *((_BYTE *)v80 + 8) = 1; /*0x100a63163*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v80); /*0x100a62a0d*/
  v26 = memcpy(v63, v59, sizeof(v63)); /*0x100a62a28*/
  LOBYTE(v26) = 1; /*0x100a62a2d*/
  v81 = (int)v26; /*0x100a62a2f*/
  v78 = v24; /*0x100a62a3d*/
  v27 = codexmate_lib::core::repository::usage_refresh::enrich_account_usage_via_api::h8dd066924e489988( /*0x100a62a44*/
          v63,
          v77,
          v24,
          a4);
  v28 = v79; /*0x100a62a49*/
  v29 = *v80; /*0x100a62a51*/
  if ( !*v80 ) /*0x100a62a51*/
    v29 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v80); /*0x100a62c1c*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v27); /*0x100a62a5d*/
  v32 = 0x7FFFFFFFFFFFFFFFLL; /*0x100a62a6c*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a62a79*/
  {
    v33 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v29) ^ 1; /*0x100a62c2c*/
    if ( *((_BYTE *)v80 + 8) ) /*0x100a62c34*/
      goto LABEL_25; /*0x100a62c3a*/
LABEL_36:
    codexmate_lib::core::repository::Repository::persist_progressive_state::h06a5392b5fa44fbf(v60, v72, v63); /*0x100a62c40*/
    if ( LODWORD(v60[0]) != 11 ) /*0x100a62c5e*/
    {
      qmemcpy(v61, v60, 0x60u); /*0x100a62c7a*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v61[12], &v60[12], v38); /*0x100a62c7d*/
      v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x100a62c8c*/
      if ( !v39 ) /*0x100a62c94*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x100a631cb*/
      v40 = v39; /*0x100a62c9a*/
      v41 = v33; /*0x100a62c9d*/
      qmemcpy(v39, "PROGRESSIVE_STATE_SAVE_FAILED", 29); /*0x100a62cd4*/
      v62[0] = v61; /*0x100a62cd7*/
      v62[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x100a62ce5*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_1018F64EA, v62); /*0x100a62d01*/
      v62[0] = 29; /*0x100a62d06*/
      v62[1] = v40; /*0x100a62d11*/
      v62[2] = 29; /*0x100a62d18*/
      v62[3] = v64[0]; /*0x100a62d31*/
      v62[4] = v64[1]; /*0x100a62d38*/
      v62[5] = v64[2]; /*0x100a62d46*/
      v42 = v63[114]; /*0x100a62d4d*/
      if ( v63[114] == v63[112] ) /*0x100a62d5b*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe7f21ef8a99469c(&v63[112]); /*0x100a62d64*/
      v43 = v63[113]; /*0x100a62d69*/
      v44 = 48 * v42; /*0x100a62d74*/
      *(_QWORD *)(v63[113] + v44 + 40) = v62[5]; /*0x100a62d7f*/
      *(_QWORD *)(v43 + v44 + 32) = v62[4]; /*0x100a62d8b*/
      *(_QWORD *)(v43 + v44 + 24) = v62[3]; /*0x100a62d97*/
      *(_QWORD *)(v43 + v44 + 16) = v62[2]; /*0x100a62da3*/
      v45 = v62[0]; /*0x100a62da8*/
      *(_QWORD *)(v43 + v44 + 8) = v62[1]; /*0x100a62db6*/
      *(_QWORD *)(v43 + v44) = v45; /*0x100a62dbb*/
      v63[114] = v42 + 1; /*0x100a62dc2*/
      v33 = v41; /*0x100a62dd0*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v61); /*0x100a62dd3*/
      v28 = v79; /*0x100a62dd8*/
    }
    codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::hff0599f7e6155179( /*0x100a62df2*/
      v61,
      v72,
      (__int64)v63,
      v28);
    v62[94] = v63[111]; /*0x100a62dfe*/
    v62[93] = v63[110]; /*0x100a62e13*/
    v62[92] = v63[109]; /*0x100a62e1a*/
    qmemcpy(&v62[95], &v63[125], 0x78u); /*0x100a62e34*/
    memcpy(v62, v61, 0x2E0u); /*0x100a62e4d*/
    codexmate_lib::commands::accounts::store_bootstrap_snapshot_best_effort::h148e5ca3d1d0a7f2( /*0x100a62e65*/
      v72,
      v62,
      &unk_1017933B6,
      13);
    memcpy(v60, v62, sizeof(v60)); /*0x100a62e80*/
    v75 = v63[114]; /*0x100a62e8c*/
    v74 = v63[113]; /*0x100a62e9e*/
    v73 = v63[112]; /*0x100a62ea2*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h32b098fdb7bc264d(v61, v60); /*0x100a62eb4*/
    memcpy(__dst, v61, 0x3C0u); /*0x100a62ec8*/
    if ( !v33 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a62ee9*/
    {
      v81 = 0; /*0x100a6319d*/
      if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst) ) /*0x100a631a4*/
        *((_BYTE *)v80 + 8) = 1; /*0x100a631b5*/
    }
    v46 = *v80; /*0x100a62ef3*/
    v81 = 0; /*0x100a62ef6*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v46); /*0x100a62efd*/
    if ( v78 ) /*0x100a62f09*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v78, 1); /*0x100a62f14*/
    if ( v63[67] ) /*0x100a62f23*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63[68], v63[67], 1); /*0x100a62f31*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hb6a483dd2db0ab56(&v63[71]); /*0x100a62f3d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h939f6e3f6a2b103c(v63); /*0x100a62f49*/
    if ( 2LL * v63[96] ) /*0x100a62f55*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63[97], v63[96], 1); /*0x100a62f6e*/
    v47 = v63[94]; /*0x100a62f73*/
    v48 = v63[95]; /*0x100a62f7a*/
    if ( v63[95] ) /*0x100a62f84*/
    {
      v49 = v63[94]; /*0x100a62f86*/
      do /*0x100a62fa2*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::ha0a2ce5fd6075f91(v49); /*0x100a62f93*/
        v49 += 424; /*0x100a62f98*/
        --v48; /*0x100a62f9f*/
      }
      while ( v48 ); /*0x100a62fa2*/
    }
    if ( v63[93] ) /*0x100a62fae*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 424LL * v63[93], 8); /*0x100a62fbf*/
    v50 = v63[105]; /*0x100a62fc4*/
    v51 = v63[106]; /*0x100a62fcb*/
    if ( v63[106] ) /*0x100a62fd5*/
    {
      v52 = (_QWORD *)(v63[105] + 152LL); /*0x100a62fd7*/
      do /*0x100a62fea*/
      {
        v53 = *(v52 - 1); /*0x100a62fec*/
        if ( v53 ) /*0x100a62ff4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v52, v53, 1); /*0x100a62fff*/
        if ( *((_DWORD *)v52 - 14) != 2 ) /*0x100a6300a*/
        {
          v54 = *(v52 - 5); /*0x100a6300c*/
          if ( 2 * v54 ) /*0x100a63011*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v52 - 4), v54, 1); /*0x100a63028*/
        }
        v52 += 24; /*0x100a62fe0*/
        --v51; /*0x100a62fe7*/
      }
      while ( v51 ); /*0x100a62fea*/
    }
    if ( v63[104] ) /*0x100a63039*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 192LL * v63[104], 8); /*0x100a6304b*/
    if ( LODWORD(v63[19]) == 2 ) /*0x100a63057*/
    {
      v55 = v63[115]; /*0x100a63059*/
      if ( !(2LL * v63[115]) ) /*0x100a63060*/
        goto LABEL_66; /*0x100a6306b*/
    }
    else
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h06d77c68fd4e944d(&v63[19]); /*0x100a630b1*/
      v55 = v63[115]; /*0x100a630b6*/
      if ( !(2LL * v63[115]) ) /*0x100a630c8*/
      {
LABEL_66:
        v56 = v63[118]; /*0x100a6306d*/
        if ( !(2LL * v63[118]) ) /*0x100a63074*/
          goto LABEL_67; /*0x100a6307f*/
        goto LABEL_71; /*0x100a6307f*/
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63[116], v55, 1); /*0x100a630d6*/
    v56 = v63[118]; /*0x100a630db*/
    if ( !(2LL * v63[118]) ) /*0x100a630ed*/
    {
LABEL_67:
      v57 = v63[122]; /*0x100a63081*/
      if ( !(2LL * v63[122]) ) /*0x100a63088*/
        return __dst; /*0x100a63093*/
LABEL_72:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63[123], v57, 1); /*0x100a63114*/
      return __dst; /*0x100a63125*/
    }
LABEL_71:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63[119], v56, 1); /*0x100a630ef*/
    v57 = v63[122]; /*0x100a63100*/
    if ( !(2LL * v63[122]) ) /*0x100a63112*/
      return __dst; /*0x100a63112*/
    goto LABEL_72; /*0x100a63112*/
  }
  v33 = 0; /*0x100a62a7f*/
  if ( !*((_BYTE *)v80 + 8) ) /*0x100a62a8c*/
    goto LABEL_36; /*0x100a62a8c*/
LABEL_25:
  v60[0] = 0; /*0x100a62a92*/
  v60[1] = 1; /*0x100a62a9d*/
  v60[2] = 0; /*0x100a62aa8*/
  v61[2] = 1610612768; /*0x100a62ab3*/
  v61[0] = v60; /*0x100a62ac5*/
  v61[1] = &anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a62ad3*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x100a62aed*/
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                          41,
                          v61,
                          v32,
                          v30,
                          v31) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a6314b*/
      &anon_442098b8dbdde10fede7d79fc85e0df3_291,
      55,
      &v69,
      &anon_442098b8dbdde10fede7d79fc85e0df3_301,
      &anon_442098b8dbdde10fede7d79fc85e0df3_293);
  v34 = v60[0]; /*0x100a62afa*/
  v35 = v60[1]; /*0x100a62b01*/
  v36 = v60[2]; /*0x100a62b08*/
  LODWORD(v62[0]) = *(_DWORD *)((char *)&v60[2] + 1); /*0x100a62b16*/
  *(_DWORD *)((char *)v62 + 3) = HIDWORD(v60[2]); /*0x100a62b22*/
  if ( !v33 /*0x100a63183*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
  {
    *((_BYTE *)v80 + 8) = 1; /*0x100a63194*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v80); /*0x100a62b51*/
  v37 = v62[0]; /*0x100a62b56*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v62 + 3); /*0x100a62b62*/
  *(_DWORD *)(__dst + 25) = v37; /*0x100a62b65*/
  *((_QWORD *)__dst + 1) = v34; /*0x100a62b68*/
  *((_QWORD *)__dst + 2) = v35; /*0x100a62b6c*/
  __dst[24] = v36; /*0x100a62b70*/
  *(_QWORD *)__dst = 3; /*0x100a62b74*/
  if ( v78 ) /*0x100a62b82*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v78, 1); /*0x100a62b8d*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h2083ab4ec30214a5(v63); /*0x100a62b99*/
  return __dst; /*0x100a63098*/
}