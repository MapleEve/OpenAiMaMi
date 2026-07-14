// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x1005ce080 depth=0
void __fastcall codexmate_lib::core::relay::manager::RelayManager::bootstrap::he311303061b4b97b(
        __int64 *a1,
        double a2,
        double a3)
{
  __int64 *v4; // rsi
  char v5; // r15
  __int64 *v6; // r14
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  char v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  __int128 v14; // rcx
  __int64 v15; // r14
  void *v16; // rax
  __m256i v17[3]; // [rsp+8h] [rbp-258h] BYREF
  __int64 v18; // [rsp+68h] [rbp-1F8h] BYREF
  __int128 v19; // [rsp+70h] [rbp-1F0h]
  __int64 v20; // [rsp+80h] [rbp-1E0h]
  __m256i v21; // [rsp+88h] [rbp-1D8h]
  __m256i v22; // [rsp+A8h] [rbp-1B8h]
  char v23; // [rsp+1BCh] [rbp-A4h]
  __m256i v24[3]; // [rsp+1C0h] [rbp-A0h] BYREF
  __m256i *v25; // [rsp+220h] [rbp-40h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+228h] [rbp-38h]
  __int64 *v27; // [rsp+230h] [rbp-30h]
  __int64 (__fastcall *v28)(); // [rsp+238h] [rbp-28h]

  if ( !a1[4] ) /*0x1005ce095*/
    return; /*0x1005ce095*/
  v4 = a1; /*0x1005ce0a8*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)&v18, (__int64)a1, a2, a3); /*0x1005ce0ab*/
  v5 = v23; /*0x1005ce0b0*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(&v18, a2); /*0x1005ce0bb*/
  if ( !v5 ) /*0x1005ce0c3*/
  {
    v6 = (__int64 *)(*a1 + 16); /*0x1005ce0cc*/
    codexmate_lib::core::relay::codex_diagnostic::cleanup_config_orphan_provider::hf766672bb126a551(v6); /*0x1005ce0d3*/
    codexmate_lib::core::relay::codex_thread_visibility::cleanup_orphan_router_threads::h1d9f327bcb57816c(v6); /*0x1005ce0db*/
    if ( (unsigned __int8)codexmate_lib::core::relay::config_takeover::backup_exists::h400c494af663f2d1(v6) ) /*0x1005ce0e3*/
    {
      codexmate_lib::core::relay::config_takeover::restore::h5528967c60fb8f1b(v24, v6); /*0x1005ce0fa*/
      if ( v24[0].i32[0] != 10 ) /*0x1005ce106*/
      {
        qmemcpy(v17, v24, sizeof(v17)); /*0x1005ce330*/
        v4 = (__int64 *)&v25; /*0x1005ce330*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005ce341*/
        {
          v25 = v17; /*0x1005ce347*/
          v26 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005ce352*/
          v21.i64[2] = 2; /*0x1005ce356*/
          v21.i64[3] = (__int64)"codexmate_lib::core::relay::manager"; /*0x1005ce368*/
          v22.i64[0] = 35; /*0x1005ce36f*/
          v22.i64[2] = (__int64)&unk_10122CB70; /*0x1005ce381*/
          v22.i64[3] = (__int64)&v25; /*0x1005ce38c*/
          v18 = 0; /*0x1005ce393*/
          *(_QWORD *)&v19 = "codexmate_lib::core::relay::manager"; /*0x1005ce39e*/
          *((_QWORD *)&v19 + 1) = 35; /*0x1005ce3a5*/
          v20 = 0; /*0x1005ce3b0*/
          v21.i64[0] = (__int64)"src/core/relay/manager.rs"; /*0x1005ce3c2*/
          v21.i64[1] = 25; /*0x1005ce3c9*/
          v22.i64[1] = 0xA900000001LL; /*0x1005ce3de*/
          v4 = &v18; /*0x1005ce3e9*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x1005ce3f0*/
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v17); /*0x1005ce3fc*/
        if ( !(unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::hf9c94452b5c1b9f7(v6) ) /*0x1005ce404*/
          goto LABEL_16; /*0x1005ce40b*/
        goto LABEL_9; /*0x1005ce40b*/
      }
      qmemcpy(v17, &v24[0].u32[2], 0x48u); /*0x1005ce122*/
      v4 = &v24[2].i64[2]; /*0x1005ce122*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x1005ce133*/
      {
        v25 = v17; /*0x1005ce140*/
        v26 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hd6a65c85f5e82b00; /*0x1005ce14b*/
        v27 = &v17[0].i64[3]; /*0x1005ce14f*/
        v28 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hd6a65c85f5e82b00; /*0x1005ce153*/
        v21.i64[2] = 3; /*0x1005ce157*/
        v21.i64[3] = (__int64)"codexmate_lib::core::relay::manager"; /*0x1005ce169*/
        v22.i64[0] = 35; /*0x1005ce170*/
        v22.i64[2] = (__int64)&unk_10122CB23; /*0x1005ce182*/
        v22.i64[3] = (__int64)&v25; /*0x1005ce18d*/
        v18 = 0; /*0x1005ce194*/
        *(_QWORD *)&v19 = "codexmate_lib::core::relay::manager"; /*0x1005ce19f*/
        *((_QWORD *)&v19 + 1) = 35; /*0x1005ce1a6*/
        v20 = 0; /*0x1005ce1b1*/
        v21.i64[0] = (__int64)"src/core/relay/manager.rs"; /*0x1005ce1c3*/
        v21.i64[1] = 25; /*0x1005ce1ca*/
        v22.i64[1] = 0xA400000001LL; /*0x1005ce1df*/
        v4 = &v18; /*0x1005ce1ea*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x1005ce1f1*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..RestoreSummary$GT$::hbdb181ed4c9cc782(v17); /*0x1005ce1fd*/
    }
    if ( !(unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::hf9c94452b5c1b9f7(v6) ) /*0x1005ce20c*/
    {
LABEL_16:
      if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::marker_exists::hea0986d78849e3cb((__int64)v6) /*0x1005ce427*/
        || (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d((__int64)v6) == 1 )
      {
        v4 = v6; /*0x1005ce434*/
        codexmate_lib::core::relay::router_unlock_auth::cleanup::h242b88d72bef9392((__int64)v24, v6, a2); /*0x1005ce437*/
        if ( v24[0].i32[0] != 10 ) /*0x1005ce443*/
        {
          qmemcpy(v17, v24, sizeof(v17)); /*0x1005ce45f*/
          v4 = (__int64 *)&v25; /*0x1005ce45f*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005ce470*/
          {
            v25 = v17; /*0x1005ce476*/
            v26 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005ce481*/
            v21.i64[2] = 2; /*0x1005ce485*/
            v21.i64[3] = (__int64)"codexmate_lib::core::relay::manager"; /*0x1005ce497*/
            v22.i64[0] = 35; /*0x1005ce49e*/
            v22.i64[2] = (__int64)&unk_10122CBD2; /*0x1005ce4b0*/
            v22.i64[3] = (__int64)&v25; /*0x1005ce4bb*/
            v18 = 0; /*0x1005ce4c2*/
            *(_QWORD *)&v19 = "codexmate_lib::core::relay::manager"; /*0x1005ce4cd*/
            *((_QWORD *)&v19 + 1) = 35; /*0x1005ce4d4*/
            v20 = 0; /*0x1005ce4df*/
            v21.i64[0] = (__int64)"src/core/relay/manager.rs"; /*0x1005ce4f1*/
            v21.i64[1] = 25; /*0x1005ce4f8*/
            v22.i64[1] = 0xB700000001LL; /*0x1005ce50d*/
            v4 = &v18; /*0x1005ce518*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x1005ce51f*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v17); /*0x1005ce52b*/
        }
      }
      goto LABEL_22; /*0x1005ce52b*/
    }
LABEL_9:
    v4 = v6; /*0x1005ce212*/
    codexmate_lib::core::relay::legacy_virtual_auth::cleanup::h59fef3b5d2f283ae(v24, v6, a2); /*0x1005ce21c*/
    if ( v24[0].i32[0] != 10 ) /*0x1005ce228*/
    {
      qmemcpy(v17, v24, sizeof(v17)); /*0x1005ce244*/
      v4 = (__int64 *)&v25; /*0x1005ce244*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005ce255*/
      {
        v25 = v17; /*0x1005ce25b*/
        v26 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005ce266*/
        v21.i64[2] = 2; /*0x1005ce26a*/
        v21.i64[3] = (__int64)"codexmate_lib::core::relay::manager"; /*0x1005ce27c*/
        v22.i64[0] = 35; /*0x1005ce283*/
        v22.i64[2] = (__int64)&unk_10122CB9F; /*0x1005ce295*/
        v22.i64[3] = (__int64)&v25; /*0x1005ce2a0*/
        v18 = 0; /*0x1005ce2a7*/
        *(_QWORD *)&v19 = "codexmate_lib::core::relay::manager"; /*0x1005ce2b2*/
        *((_QWORD *)&v19 + 1) = 35; /*0x1005ce2b9*/
        v20 = 0; /*0x1005ce2c4*/
        v21.i64[0] = (__int64)"src/core/relay/manager.rs"; /*0x1005ce2d6*/
        v21.i64[1] = 25; /*0x1005ce2dd*/
        v22.i64[1] = 0xB000000001LL; /*0x1005ce2f2*/
        v4 = &v18; /*0x1005ce2fd*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x1005ce304*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v17); /*0x1005ce310*/
    }
    goto LABEL_16; /*0x1005ce315*/
  }
LABEL_22:
  codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hd0b215828faba6dc( /*0x1005ce530*/
    (__int64)a1,
    (volatile signed __int64 **)v4,
    a2,
    a3);
  v7 = &v18; /*0x1005ce538*/
  codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h02cff1335e2f372e(&v18, (__int64)a1); /*0x1005ce542*/
  v10 = v18; /*0x1005ce547*/
  if ( __OFSUB__(-v18, 1) ) /*0x1005ce551*/
  {
    v11 = 0; /*0x1005ce556*/
  }
  else
  {
    if ( v18 ) /*0x1005ce55b*/
    {
      v7 = (__int64 *)v19; /*0x1005ce55d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ce569*/
    }
    v11 = codexmate_lib::platform::process::is_process_running::h2043172b9767bad6((__int64)v7, v10, v8, v9); /*0x1005ce573*/
  }
  codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9(&v18, a1, a2, a3); /*0x1005ce580*/
  v12 = v18; /*0x1005ce585*/
  if ( v18 != 10 ) /*0x1005ce590*/
    goto LABEL_39; /*0x1005ce590*/
  codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h02cff1335e2f372e(&v18, (__int64)a1); /*0x1005ce5aa*/
  if ( v18 == 0x8000000000000000LL ) /*0x1005ce5b9*/
    goto LABEL_29; /*0x1005ce5b9*/
  if ( v18 ) /*0x1005ce6a2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ce6b0*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005ce6c3*/
  {
    v21.i64[2] = 2; /*0x1005ce6c9*/
    v21.i64[3] = (__int64)"codexmate_lib::core::relay::manager"; /*0x1005ce6db*/
    v22.i64[0] = 35; /*0x1005ce6e2*/
    v22.i64[2] = (__int64)&unk_1012CB94A; /*0x1005ce6f4*/
    v22.i64[3] = 165; /*0x1005ce6fb*/
    v18 = 0; /*0x1005ce706*/
    *(_QWORD *)&v19 = "codexmate_lib::core::relay::manager"; /*0x1005ce711*/
    *((_QWORD *)&v19 + 1) = 35; /*0x1005ce718*/
    v20 = 0; /*0x1005ce723*/
    v21.i64[0] = (__int64)"src/core/relay/manager.rs"; /*0x1005ce735*/
    v21.i64[1] = 25; /*0x1005ce73c*/
    v22.i64[1] = 0x38100000001LL; /*0x1005ce751*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x1005ce763*/
  }
  v13 = *a1 + 16; /*0x1005ce76b*/
  v17[0].i128[0] = 8u; /*0x1005ce76f*/
  v17[0].i128[1] = 8u; /*0x1005ce785*/
  v17[2].i8[0] = 0; /*0x1005ce790*/
  v17[1].i64[2] = 0; /*0x1005ce797*/
  v17[1].i64[0] = 0; /*0x1005ce7ad*/
  codexmate_lib::core::relay::codex_writer::apply_codex_state::h57ffc59d60ac1cd7(&v18, v13, (__int64)v17, a2); /*0x1005ce7c6*/
  v12 = v18; /*0x1005ce7cb*/
  if ( v18 != 10 ) /*0x1005ce7d6*/
    goto LABEL_39; /*0x1005ce7d6*/
  codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9(&v18, a1, a2, a3); /*0x1005ce7e2*/
  v12 = v18; /*0x1005ce7e7*/
  if ( v18 == 10 ) /*0x1005ce7f2*/
  {
LABEL_29:
    codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h02cff1335e2f372e(&v18, (__int64)a1); /*0x1005ce5c9*/
    if ( v18 == 0x8000000000000000LL ) /*0x1005ce5d8*/
    {
      if ( v11 ) /*0x1005ce5e1*/
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x1005ce5f5*/
        {
          v21.i64[2] = 2; /*0x1005ce5fb*/
          v21.i64[3] = (__int64)"codexmate_lib::core::relay::manager"; /*0x1005ce60d*/
          v22.i64[0] = 35; /*0x1005ce614*/
          v22.i64[2] = (__int64)&unk_1012CB99C; /*0x1005ce626*/
          v22.i64[3] = 227; /*0x1005ce62d*/
          v18 = 0; /*0x1005ce638*/
          *(_QWORD *)&v19 = "codexmate_lib::core::relay::manager"; /*0x1005ce643*/
          *((_QWORD *)&v19 + 1) = 35; /*0x1005ce64a*/
          v20 = 0; /*0x1005ce655*/
          v21.i64[0] = (__int64)"src/core/relay/manager.rs"; /*0x1005ce667*/
          v21.i64[1] = 25; /*0x1005ce66e*/
          v22.i64[1] = 0x39000000001LL; /*0x1005ce683*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x1005ce695*/
        }
      }
      return; /*0x1005ce69a*/
    }
    if ( v18 ) /*0x1005ce9d7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ce9e5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005ce9ea*/
    v15 = 77; /*0x1005ce9ef*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x4Du, 1u); /*0x1005ce9ff*/
    if ( !v16 ) /*0x1005cea07*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 77); /*0x1005cea39*/
    *((_QWORD *)&v14 + 1) = v16; /*0x1005cea09*/
    memcpy(v16, &unk_1012CBA0D, 0x4Du); /*0x1005cea1b*/
    v12 = 9; /*0x1005cea20*/
    *(_QWORD *)&v14 = 77; /*0x1005cea25*/
  }
  else
  {
LABEL_39:
    v14 = v19; /*0x1005ce7f8*/
    v15 = v20; /*0x1005ce806*/
    v24[0] = v21; /*0x1005ce814*/
    v24[1] = v22; /*0x1005ce84c*/
  }
  v17[0].i64[0] = v12; /*0x1005ce871*/
  *(__int128 *)((char *)v17[0].i128 + 8) = v14; /*0x1005ce878*/
  v17[0].i64[3] = v15; /*0x1005ce886*/
  v17[1] = v24[0]; /*0x1005ce89b*/
  v17[2] = v24[1]; /*0x1005ce8c9*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005ce8ff*/
  {
    v25 = v17; /*0x1005ce90c*/
    v26 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005ce917*/
    v21.i64[2] = 2; /*0x1005ce91b*/
    v21.i64[3] = (__int64)"codexmate_lib::core::relay::manager"; /*0x1005ce92d*/
    v22.i64[0] = 35; /*0x1005ce934*/
    v22.i64[2] = (__int64)&unk_10122CC0B; /*0x1005ce946*/
    v22.i64[3] = (__int64)&v25; /*0x1005ce951*/
    v18 = 0; /*0x1005ce958*/
    *(_QWORD *)&v19 = "codexmate_lib::core::relay::manager"; /*0x1005ce963*/
    *((_QWORD *)&v19 + 1) = 35; /*0x1005ce96a*/
    v20 = 0; /*0x1005ce975*/
    v21.i64[0] = (__int64)"src/core/relay/manager.rs"; /*0x1005ce987*/
    v21.i64[1] = 25; /*0x1005ce98e*/
    v22.i64[1] = 0xBD00000001LL; /*0x1005ce9a3*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x1005ce9b5*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v17); /*0x1005ce9c1*/
}