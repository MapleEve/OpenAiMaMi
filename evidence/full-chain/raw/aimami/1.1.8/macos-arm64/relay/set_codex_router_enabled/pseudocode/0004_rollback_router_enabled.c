// codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled
// addr: 0x1005c2bc0
// decompiled via 反编译器 MCP (mac) live 1.1.8 IDB, session <审计会话>

double __fastcall codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled::h283784581036905b(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        double result,
        double a7)
{
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // rbx
  _QWORD *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  _QWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbx
  _QWORD *v50; // r14
  __int64 v51; // rsi
  _BYTE v52[344]; // [rsp+8h] [rbp-408h] BYREF
  _QWORD v53[3]; // [rsp+160h] [rbp-2B0h] BYREF
  _QWORD v54[2]; // [rsp+178h] [rbp-298h] BYREF
  _QWORD v55[2]; // [rsp+188h] [rbp-288h] BYREF
  _QWORD v56[3]; // [rsp+198h] [rbp-278h] BYREF
  _QWORD v57[3]; // [rsp+1B0h] [rbp-260h] BYREF
  _QWORD v58[3]; // [rsp+1C8h] [rbp-248h] BYREF
  _QWORD v59[3]; // [rsp+1E0h] [rbp-230h] BYREF
  _QWORD v60[3]; // [rsp+1F8h] [rbp-218h] BYREF
  _QWORD v61[3]; // [rsp+210h] [rbp-200h] BYREF
  _QWORD v62[3]; // [rsp+228h] [rbp-1E8h] BYREF
  _QWORD v63[12]; // [rsp+240h] [rbp-1D0h] BYREF
  _OWORD *v64; // [rsp+2A0h] [rbp-170h] BYREF
  _QWORD v65[11]; // [rsp+2A8h] [rbp-168h] BYREF
  _QWORD *v66; // [rsp+300h] [rbp-110h]
  _OWORD v67[6]; // [rsp+308h] [rbp-108h] BYREF
  __int64 v68; // [rsp+368h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+370h] [rbp-A0h]
  __int64 v70; // [rsp+378h] [rbp-98h]
  _OWORD v71[6]; // [rsp+380h] [rbp-90h] BYREF
  _BYTE v72[41]; // [rsp+3E7h] [rbp-29h] BYREF

  v8 = a2; /*0x1005c2bd7*/
  v66 = a1; /*0x1005c2bda*/
  v55[0] = a3; /*0x1005c2be1*/
  v55[1] = a4; /*0x1005c2be8*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c2bfd*/
  {
    *(_QWORD *)&v67[0] = v55; /*0x1005c2c0a*/
    *((_QWORD *)&v67[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1005c2c18*/
    *(_QWORD *)&v71[3] = 2; /*0x1005c2c1f*/
    *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c2c2e*/
    *(_QWORD *)&v71[4] = 35; /*0x1005c2c32*/
    *(_QWORD *)&v71[5] = &unk_10122BCE0; /*0x1005c2c41*/
    *((_QWORD *)&v71[5] + 1) = v67; /*0x1005c2c4c*/
    *(_QWORD *)&v71[0] = 0; /*0x1005c2c50*/
    *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c2c5b*/
    v71[1] = 0x23u; /*0x1005c2c62*/
    *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c2c79*/
    *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c2c7d*/
    *((_QWORD *)&v71[4] + 1) = 0x61C00000001LL; /*0x1005c2c8f*/
    a2 = (__int64 *)v71; /*0x1005c2c97*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c2c9e*/
  }
  v68 = 0; /*0x1005c2ca3*/
  v69 = 8; /*0x1005c2cae*/
  v70 = 0; /*0x1005c2cb9*/
  v9 = v8[1]; /*0x1005c2cc4*/
  v10 = *(_QWORD *)(v9 + 16); /*0x1005c2ccc*/
  if ( !v10 ) /*0x1005c2cd3*/
    v10 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v9 + 16); /*0x1005c3d6e*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c2cd9*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005c2ce9*/
  {
    v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, a2, v11, result, a7) ^ 1; /*0x1005c3d7b*/
    if ( !*(_BYTE *)(v9 + 24) ) /*0x1005c3d83*/
      goto LABEL_7; /*0x1005c3d83*/
LABEL_91:
    *(_QWORD *)&v71[0] = v9 + 16; /*0x1005c3d89*/
    BYTE8(v71[0]) = v12; /*0x1005c3d90*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c3db7*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      v71,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_101534288);
  }
  v12 = 0; /*0x1005c2cf5*/
  if ( *(_BYTE *)(v9 + 24) ) /*0x1005c2cf7*/
    goto LABEL_91; /*0x1005c2cfd*/
LABEL_7:
  *(_BYTE *)(v9 + 372) = 0; /*0x1005c2d03*/
  *(_BYTE *)(v9 + 373) = a5; /*0x1005c2d0a*/
  if ( !v12 /*0x1005c3dbe*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, a2, v11, result, a7) )
  {
    *(_BYTE *)(v9 + 24) = 1; /*0x1005c3dcb*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v9 + 16), a2, v11, result, a7); /*0x1005c2d30*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)v52, (__int64)v8, result, a7); /*0x1005c2d3f*/
  codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(v63, v8, v52, result, a7); /*0x1005c2d55*/
  if ( LODWORD(v63[0]) != 10 ) /*0x1005c2d61*/
  {
    qmemcpy(v67, v63, sizeof(v67)); /*0x1005c2d7d*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c2d8e*/
    {
      v64 = v67; /*0x1005c2d94*/
      v65[0] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c2da2*/
      *(_QWORD *)&v71[3] = 2; /*0x1005c2da9*/
      *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c2db8*/
      *(_QWORD *)&v71[4] = 35; /*0x1005c2dbc*/
      *(_QWORD *)&v71[5] = &unk_10122BD18; /*0x1005c2dcb*/
      *((_QWORD *)&v71[5] + 1) = &v64; /*0x1005c2dd6*/
      *(_QWORD *)&v71[0] = 0; /*0x1005c2dda*/
      *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c2de5*/
      v71[1] = 0x23u; /*0x1005c2dec*/
      *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c2e03*/
      *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c2e07*/
      *((_QWORD *)&v71[4] + 1) = 0x62500000001LL; /*0x1005c2e19*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c2e28*/
    }
    *(_QWORD *)&v71[0] = v67; /*0x1005c2e2d*/
    *((_QWORD *)&v71[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c2e3b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v62, &unk_10122BD4B, v71); /*0x1005c2e57*/
    v13 = v70; /*0x1005c2e5c*/
    if ( v70 == v68 ) /*0x1005c2e6a*/
      result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v68); /*0x1005c2e73*/
    v14 = v69; /*0x1005c2e78*/
    v15 = 3 * v13; /*0x1005c2e7f*/
    *(_QWORD *)(v69 + 8 * v15 + 16) = v62[2]; /*0x1005c2e8a*/
    v16 = v62[0]; /*0x1005c2e8f*/
    *(_QWORD *)(v14 + 8 * v15 + 8) = v62[1]; /*0x1005c2e9d*/
    *(_QWORD *)(v14 + 8 * v15) = v16; /*0x1005c2ea2*/
    v70 = v13 + 1; /*0x1005c2ea9*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v67); /*0x1005c2eb7*/
  }
  codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9( /*0x1005c2ec6*/
    v71,
    v8,
    result,
    a7);
  if ( *(_QWORD *)&v71[0] == 10 ) /*0x1005c2ed6*/
  {
    v17 = *v8; /*0x1005c2ed8*/
  }
  else
  {
    qmemcpy(v65, (char *)v71 + 8, sizeof(v65)); /*0x1005c2ef3*/
    v64 = *(_OWORD **)&v71[0]; /*0x1005c2ef6*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c2f0b*/
    {
      *(_QWORD *)&v67[0] = &v64; /*0x1005c2f18*/
      *((_QWORD *)&v67[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c2f26*/
      *(_QWORD *)&v71[3] = 2; /*0x1005c2f2d*/
      *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c2f3c*/
      *(_QWORD *)&v71[4] = 35; /*0x1005c2f40*/
      *(_QWORD *)&v71[5] = &unk_10122BD6A; /*0x1005c2f4f*/
      *((_QWORD *)&v71[5] + 1) = v67; /*0x1005c2f5a*/
      *(_QWORD *)&v71[0] = 0; /*0x1005c2f5e*/
      *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c2f69*/
      v71[1] = 0x23u; /*0x1005c2f70*/
      *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c2f87*/
      *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c2f8b*/
      *((_QWORD *)&v71[4] + 1) = 0x62C00000001LL; /*0x1005c2f9d*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c2fac*/
    }
    v17 = *v8; /*0x1005c2fb1*/
    v71[0] = 8u; /*0x1005c2fb8*/
    v71[1] = 8u; /*0x1005c2fce*/
    LOBYTE(v71[4]) = 0; /*0x1005c2fd6*/
    *(_QWORD *)&v71[3] = 0; /*0x1005c2fda*/
    *(_QWORD *)&v71[2] = 0; /*0x1005c2fea*/
    codexmate_lib::core::relay::codex_writer::apply_codex_state::h57ffc59d60ac1cd7(v63, v17 + 16, v71); /*0x1005c3000*/
    if ( LODWORD(v63[0]) != 10 ) /*0x1005c300c*/
    {
      qmemcpy(v67, v63, sizeof(v67)); /*0x1005c3028*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 ) /*0x1005c3038*/
      {
        v54[0] = v67; /*0x1005c303e*/
        v54[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c304c*/
        *(_QWORD *)&v71[3] = 1; /*0x1005c3053*/
        *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c3062*/
        *(_QWORD *)&v71[4] = 35; /*0x1005c3066*/
        *(_QWORD *)&v71[5] = &unk_10122BDD5; /*0x1005c3075*/
        *((_QWORD *)&v71[5] + 1) = v54; /*0x1005c3080*/
        *(_QWORD *)&v71[0] = 0; /*0x1005c3084*/
        *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c308f*/
        v71[1] = 0x23u; /*0x1005c3096*/
        *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c30ad*/
        *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c30b1*/
        *((_QWORD *)&v71[4] + 1) = 0x63100000001LL; /*0x1005c30c3*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c30d2*/
      }
      *(_QWORD *)&v71[0] = &v64; /*0x1005c30de*/
      *((_QWORD *)&v71[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c30ec*/
      *(_QWORD *)&v71[1] = v67; /*0x1005c30f3*/
      *((_QWORD *)&v71[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c30f7*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v61, &unk_10122BE66, v71); /*0x1005c3110*/
      v18 = v70; /*0x1005c3115*/
      if ( v70 == v68 ) /*0x1005c3123*/
        result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v68); /*0x1005c312c*/
      v19 = v69; /*0x1005c3131*/
      v20 = 3 * v18; /*0x1005c3138*/
      *(_QWORD *)(v69 + 8 * v20 + 16) = v61[2]; /*0x1005c3143*/
      v21 = v61[0]; /*0x1005c3148*/
      *(_QWORD *)(v19 + 8 * v20 + 8) = v61[1]; /*0x1005c3156*/
      *(_QWORD *)(v19 + 8 * v20) = v21; /*0x1005c315b*/
      v70 = v18 + 1; /*0x1005c3162*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v67); /*0x1005c3170*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v64); /*0x1005c317c*/
  }
  v22 = v17 + 16; /*0x1005c3181*/
  codexmate_lib::core::relay::config_takeover::restore::h5528967c60fb8f1b(v63, v22); /*0x1005c318f*/
  if ( LODWORD(v63[0]) == 10 ) /*0x1005c319b*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..RestoreSummary$GT$::hbdb181ed4c9cc782(&v63[1]); /*0x1005c31a4*/
  }
  else
  {
    qmemcpy(v67, v63, sizeof(v67)); /*0x1005c31c4*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c31d5*/
    {
      v64 = v67; /*0x1005c31db*/
      v65[0] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c31e9*/
      *(_QWORD *)&v71[3] = 2; /*0x1005c31f0*/
      *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c31ff*/
      *(_QWORD *)&v71[4] = 35; /*0x1005c3203*/
      *(_QWORD *)&v71[5] = &unk_10122BE9D; /*0x1005c3212*/
      *((_QWORD *)&v71[5] + 1) = &v64; /*0x1005c321d*/
      *(_QWORD *)&v71[0] = 0; /*0x1005c3221*/
      *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c322c*/
      v71[1] = 0x23u; /*0x1005c3233*/
      *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c324a*/
      *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c324e*/
      *((_QWORD *)&v71[4] + 1) = 0x63C00000001LL; /*0x1005c3260*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c326f*/
    }
    *(_QWORD *)&v71[0] = v67; /*0x1005c3274*/
    *((_QWORD *)&v71[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c3282*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &unk_10122BED3, v71); /*0x1005c329e*/
    v23 = v70; /*0x1005c32a3*/
    if ( v70 == v68 ) /*0x1005c32b1*/
      result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v68); /*0x1005c32ba*/
    v24 = v69; /*0x1005c32bf*/
    v25 = 3 * v23; /*0x1005c32c6*/
    *(_QWORD *)(v69 + 8 * v25 + 16) = v60[2]; /*0x1005c32d1*/
    v26 = v60[0]; /*0x1005c32d6*/
    *(_QWORD *)(v24 + 8 * v25 + 8) = v60[1]; /*0x1005c32e4*/
    *(_QWORD *)(v24 + 8 * v25) = v26; /*0x1005c32e9*/
    v70 = v23 + 1; /*0x1005c32f0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v67); /*0x1005c32fe*/
  }
  codexmate_lib::core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence::h02b06405852eb9bf( /*0x1005c330d*/
    v63,
    v22);
  if ( LODWORD(v63[0]) == 10 ) /*0x1005c3319*/
  {
    qmemcpy(v67, &v63[1], 0x58u); /*0x1005c3332*/
    if ( v67[4] != 0 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005c3357*/
    {
      v64 = &v67[4]; /*0x1005c336b*/
      v65[0] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c3379*/
      v65[1] = (char *)&v67[4] + 8; /*0x1005c3380*/
      v65[2] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c3387*/
      *(_QWORD *)&v71[3] = 3; /*0x1005c338e*/
      *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c339d*/
      *(_QWORD *)&v71[4] = 35; /*0x1005c33a1*/
      *(_QWORD *)&v71[5] = &unk_10122BEEF; /*0x1005c33b0*/
      *((_QWORD *)&v71[5] + 1) = &v64; /*0x1005c33bb*/
      *(_QWORD *)&v71[0] = 0; /*0x1005c33bf*/
      *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c33ca*/
      v71[1] = 0x23u; /*0x1005c33d1*/
      *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c33e8*/
      *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c33ec*/
      *((_QWORD *)&v71[4] + 1) = 0x64200000001LL; /*0x1005c33fe*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c340d*/
    }
    if ( *((_QWORD *)&v67[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&v67[1] + 1) ) /*0x1005c342e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v67[2], *((_QWORD *)&v67[1] + 1), 1); /*0x1005c343c*/
    v27 = *((_QWORD *)&v67[0] + 1); /*0x1005c3441*/
    v28 = *(_QWORD *)&v67[1]; /*0x1005c3448*/
    if ( *(_QWORD *)&v67[1] ) /*0x1005c3452*/
    {
      v29 = (_QWORD *)(*((_QWORD *)&v67[0] + 1) + 8LL); /*0x1005c3458*/
      do /*0x1005c3467*/
      {
        v30 = *(v29 - 1); /*0x1005c346d*/
        if ( v30 ) /*0x1005c3475*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v29, v30, 1); /*0x1005c3480*/
        v29 += 3; /*0x1005c3460*/
        --v28; /*0x1005c3464*/
      }
      while ( v28 ); /*0x1005c3467*/
    }
    if ( *(_QWORD *)&v67[0] ) /*0x1005c35e8*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 24LL * *(_QWORD *)&v67[0], 8); /*0x1005c35fa*/
  }
  else
  {
    qmemcpy(v67, v63, sizeof(v67)); /*0x1005c349d*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c34ae*/
    {
      v64 = v67; /*0x1005c34b4*/
      v65[0] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c34c2*/
      *(_QWORD *)&v71[3] = 2; /*0x1005c34c9*/
      *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c34d8*/
      *(_QWORD *)&v71[4] = 35; /*0x1005c34dc*/
      *(_QWORD *)&v71[5] = &unk_10122BF56; /*0x1005c34eb*/
      *((_QWORD *)&v71[5] + 1) = &v64; /*0x1005c34f6*/
      *(_QWORD *)&v71[0] = 0; /*0x1005c34fa*/
      *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c3505*/
      v71[1] = 0x23u; /*0x1005c350c*/
      *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c3523*/
      *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c3527*/
      *((_QWORD *)&v71[4] + 1) = 0x64A00000001LL; /*0x1005c3539*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c3548*/
    }
    *(_QWORD *)&v71[0] = v67; /*0x1005c354d*/
    *((_QWORD *)&v71[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c355b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v59, &unk_10122BF92, v71); /*0x1005c3577*/
    v31 = v70; /*0x1005c357c*/
    if ( v70 == v68 ) /*0x1005c358a*/
      result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v68); /*0x1005c3593*/
    v32 = v69; /*0x1005c3598*/
    v33 = 3 * v31; /*0x1005c359f*/
    *(_QWORD *)(v69 + 8 * v33 + 16) = v59[2]; /*0x1005c35aa*/
    v34 = v59[0]; /*0x1005c35af*/
    *(_QWORD *)(v32 + 8 * v33 + 8) = v59[1]; /*0x1005c35bd*/
    *(_QWORD *)(v32 + 8 * v33) = v34; /*0x1005c35c2*/
    v70 = v31 + 1; /*0x1005c35c9*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v67); /*0x1005c35d7*/
  }
  codexmate_lib::core::relay::codex_thread_visibility::converge_threads_to_provider::h703ab7f3809d3c3f( /*0x1005c3615*/
    v63,
    v22,
    "openai",
    6);
  if ( LODWORD(v63[0]) == 10 ) /*0x1005c3621*/
  {
    v67[3] = *(_OWORD *)&v63[7]; /*0x1005c363c*/
    v67[2] = *(_OWORD *)&v63[5]; /*0x1005c3658*/
    v67[1] = *(_OWORD *)&v63[3]; /*0x1005c3674*/
    v67[0] = *(_OWORD *)&v63[1]; /*0x1005c3690*/
    if ( v63[6] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005c36ae*/
    {
      v64 = (_OWORD *)((char *)&v67[2] + 8); /*0x1005c36c9*/
      v65[0] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c36d7*/
      v65[1] = &v67[3]; /*0x1005c36de*/
      v65[2] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c36e5*/
      v65[3] = (char *)&v67[3] + 8; /*0x1005c36ec*/
      v65[4] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c36f3*/
      *(_QWORD *)&v71[3] = 3; /*0x1005c36fa*/
      *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c3709*/
      *(_QWORD *)&v71[4] = 35; /*0x1005c370d*/
      *(_QWORD *)&v71[5] = &unk_10122BFB4; /*0x1005c371c*/
      *((_QWORD *)&v71[5] + 1) = &v64; /*0x1005c3727*/
      *(_QWORD *)&v71[0] = 0; /*0x1005c372b*/
      *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c3736*/
      v71[1] = 0x23u; /*0x1005c373d*/
      *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c3754*/
      *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c3758*/
      *((_QWORD *)&v71[4] + 1) = 0x65400000001LL; /*0x1005c376a*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c3779*/
    }
    if ( *(_QWORD *)&v67[0] ) /*0x1005c3788*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v67[0] + 1), *(_QWORD *)&v67[0], 1); /*0x1005c379a*/
  }
  else
  {
    qmemcpy(v67, v63, sizeof(v67)); /*0x1005c37ba*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c37cb*/
    {
      v64 = v67; /*0x1005c37d1*/
      v65[0] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c37df*/
      *(_QWORD *)&v71[3] = 2; /*0x1005c37e6*/
      *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c37f5*/
      *(_QWORD *)&v71[4] = 35; /*0x1005c37f9*/
      *(_QWORD *)&v71[5] = &unk_10122C007; /*0x1005c3808*/
      *((_QWORD *)&v71[5] + 1) = &v64; /*0x1005c3813*/
      *(_QWORD *)&v71[0] = 0; /*0x1005c3817*/
      *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c3822*/
      v71[1] = 0x23u; /*0x1005c3829*/
      *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c3840*/
      *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c3844*/
      *((_QWORD *)&v71[4] + 1) = 0x65D00000001LL; /*0x1005c3856*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c3865*/
    }
    *(_QWORD *)&v71[0] = v67; /*0x1005c386a*/
    *((_QWORD *)&v71[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c3878*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v58, &unk_10122C046, v71); /*0x1005c3894*/
    v35 = v70; /*0x1005c3899*/
    if ( v70 == v68 ) /*0x1005c38a7*/
      result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v68); /*0x1005c38b0*/
    v36 = v69; /*0x1005c38b5*/
    v37 = 3 * v35; /*0x1005c38bc*/
    *(_QWORD *)(v69 + 8 * v37 + 16) = v58[2]; /*0x1005c38c7*/
    v38 = v58[0]; /*0x1005c38cc*/
    *(_QWORD *)(v36 + 8 * v37 + 8) = v58[1]; /*0x1005c38da*/
    *(_QWORD *)(v36 + 8 * v37) = v38; /*0x1005c38df*/
    v70 = v35 + 1; /*0x1005c38e6*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v67); /*0x1005c38f4*/
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::hf9c94452b5c1b9f7(v22) ) /*0x1005c38fc*/
  {
    codexmate_lib::core::relay::legacy_virtual_auth::cleanup::h59fef3b5d2f283ae(v63, v22); /*0x1005c3913*/
    if ( LODWORD(v63[0]) != 10 ) /*0x1005c391f*/
    {
      qmemcpy(v67, v63, sizeof(v67)); /*0x1005c393b*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c394c*/
      {
        v64 = v67; /*0x1005c3952*/
        v65[0] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c3960*/
        *(_QWORD *)&v71[3] = 2; /*0x1005c3967*/
        *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c3976*/
        *(_QWORD *)&v71[4] = 35; /*0x1005c397a*/
        *(_QWORD *)&v71[5] = &unk_10122C06B; /*0x1005c3989*/
        *((_QWORD *)&v71[5] + 1) = &v64; /*0x1005c3994*/
        *(_QWORD *)&v71[0] = 0; /*0x1005c3998*/
        *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c39a3*/
        v71[1] = 0x23u; /*0x1005c39aa*/
        *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c39c1*/
        *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c39c5*/
        *((_QWORD *)&v71[4] + 1) = 0x66400000001LL; /*0x1005c39d7*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c39e6*/
      }
      *(_QWORD *)&v71[0] = v67; /*0x1005c39eb*/
      *((_QWORD *)&v71[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c39f9*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v57, &unk_10122C0A5, v71); /*0x1005c3a15*/
      v39 = v70; /*0x1005c3a1a*/
      if ( v70 == v68 ) /*0x1005c3a28*/
        result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v68); /*0x1005c3a31*/
      v40 = v69; /*0x1005c3a36*/
      v41 = 3 * v39; /*0x1005c3a3d*/
      *(_QWORD *)(v69 + 8 * v41 + 16) = v57[2]; /*0x1005c3a48*/
      v42 = v57[0]; /*0x1005c3a4d*/
      *(_QWORD *)(v40 + 8 * v41 + 8) = v57[1]; /*0x1005c3a5b*/
      *(_QWORD *)(v40 + 8 * v41) = v42; /*0x1005c3a60*/
      v70 = v39 + 1; /*0x1005c3a67*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v67); /*0x1005c3a75*/
    }
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::marker_exists::hea0986d78849e3cb(v22) /*0x1005c3a90*/
    || (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d(v22) == 1 )
  {
    codexmate_lib::core::relay::router_unlock_auth::cleanup::h242b88d72bef9392(v63, v22); /*0x1005c3aa0*/
    if ( LODWORD(v63[0]) != 10 ) /*0x1005c3aac*/
    {
      qmemcpy(v67, v63, sizeof(v67)); /*0x1005c3ac8*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c3ad9*/
      {
        v64 = v67; /*0x1005c3adf*/
        v65[0] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c3aed*/
        *(_QWORD *)&v71[3] = 2; /*0x1005c3af4*/
        *((_QWORD *)&v71[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c3b03*/
        *(_QWORD *)&v71[4] = 35; /*0x1005c3b07*/
        *(_QWORD *)&v71[5] = &unk_10122C0CC; /*0x1005c3b16*/
        *((_QWORD *)&v71[5] + 1) = &v64; /*0x1005c3b21*/
        *(_QWORD *)&v71[0] = 0; /*0x1005c3b25*/
        *((_QWORD *)&v71[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c3b30*/
        v71[1] = 0x23u; /*0x1005c3b37*/
        *(_QWORD *)&v71[2] = "src/core/relay/manager.rs"; /*0x1005c3b4e*/
        *((_QWORD *)&v71[2] + 1) = 25; /*0x1005c3b52*/
        *((_QWORD *)&v71[4] + 1) = 0x66C00000001LL; /*0x1005c3b64*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v72, v71); /*0x1005c3b73*/
      }
      *(_QWORD *)&v71[0] = v67; /*0x1005c3b78*/
      *((_QWORD *)&v71[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c3b86*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v56, &unk_10122C10C, v71); /*0x1005c3ba2*/
      v43 = v70; /*0x1005c3ba7*/
      if ( v70 == v68 ) /*0x1005c3bb5*/
        result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v68); /*0x1005c3bbe*/
      v44 = v69; /*0x1005c3bc3*/
      v45 = 3 * v43; /*0x1005c3bca*/
      *(_QWORD *)(v69 + 8 * v45 + 16) = v56[2]; /*0x1005c3bd5*/
      v46 = v56[0]; /*0x1005c3bda*/
      *(_QWORD *)(v44 + 8 * v45 + 8) = v56[1]; /*0x1005c3be8*/
      *(_QWORD *)(v44 + 8 * v45) = v46; /*0x1005c3bed*/
      v70 = v43 + 1; /*0x1005c3bf4*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v67); /*0x1005c3c02*/
    }
  }
  if ( v70 ) /*0x1005c3c11*/
  {
    alloc::str::join_generic_copy::hd50f750ef8c6057e(v71, v69, v70, " | ", 3); /*0x1005c3c32*/
    *(_QWORD *)&v67[1] = *(_QWORD *)&v71[1]; /*0x1005c3c3b*/
    v67[0] = v71[0]; /*0x1005c3c57*/
    *(_QWORD *)&v71[0] = v67; /*0x1005c3c65*/
    *((_QWORD *)&v71[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005c3c73*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v53, &unk_10122C132, v71); /*0x1005c3c8f*/
    if ( *(_QWORD *)&v67[0] ) /*0x1005c3c9e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v67[0] + 1), *(_QWORD *)&v67[0], 1); /*0x1005c3cac*/
    v47 = v66; /*0x1005c3cb8*/
    v66[3] = v53[2]; /*0x1005c3cbf*/
    v48 = v53[0]; /*0x1005c3cc3*/
    v47[2] = v53[1]; /*0x1005c3cd1*/
    v47[1] = v48; /*0x1005c3cd5*/
    *v47 = 9; /*0x1005c3cd9*/
    v49 = v70; /*0x1005c3ce0*/
    if ( v70 ) /*0x1005c3cea*/
    {
      v50 = (_QWORD *)(v69 + 8); /*0x1005c3cf3*/
      do /*0x1005c3d07*/
      {
        v51 = *(v50 - 1); /*0x1005c3d09*/
        if ( v51 ) /*0x1005c3d10*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v50, v51, 1); /*0x1005c3d1a*/
        v50 += 3; /*0x1005c3d00*/
        --v49; /*0x1005c3d04*/
      }
      while ( v49 ); /*0x1005c3d07*/
    }
  }
  else
  {
    *v66 = 10; /*0x1005c3d28*/
  }
  if ( v68 ) /*0x1005c3d39*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, 24 * v68, 8); /*0x1005c3d4f*/
  return result; /*0x1005c3d54*/
}
