// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x1002f09e0 depth=0
// run_daemon_once_cli_owner
_QWORD *__fastcall codexmate_lib::run_daemon_once_cli::h80fbb4e980950575(_QWORD *a1)
{
  __int64 v2; // r14
  __int64 v3; // r15
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rsi
  size_t v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r12
  void *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // r15
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  _BYTE v27[392]; // [rsp+8h] [rbp-C08h] BYREF
  void *v28; // [rsp+190h] [rbp-A80h]
  size_t __n; // [rsp+198h] [rbp-A78h]
  _BYTE v30[928]; // [rsp+2D8h] [rbp-938h] BYREF
  _BYTE v31[928]; // [rsp+678h] [rbp-598h] BYREF
  _QWORD v32[3]; // [rsp+A18h] [rbp-1F8h] BYREF
  _QWORD *v33; // [rsp+A30h] [rbp-1E0h]
  __int64 v34; // [rsp+A38h] [rbp-1D8h]
  __int64 v35; // [rsp+A40h] [rbp-1D0h]
  _BYTE v36[168]; // [rsp+A48h] [rbp-1C8h] BYREF
  _QWORD v37[3]; // [rsp+AF0h] [rbp-120h] BYREF
  _QWORD v38[12]; // [rsp+B08h] [rbp-108h] BYREF
  __int64 v39; // [rsp+B68h] [rbp-A8h]
  _DWORD v40[2]; // [rsp+B74h] [rbp-9Ch] BYREF
  char v41; // [rsp+B7Ch] [rbp-94h]
  _QWORD *v42; // [rsp+B80h] [rbp-90h]
  __int64 v43; // [rsp+B88h] [rbp-88h]
  __int64 v44; // [rsp+B90h] [rbp-80h]
  _QWORD *v45; // [rsp+B98h] [rbp-78h]
  __int64 v46; // [rsp+BA0h] [rbp-70h]
  __int64 v47; // [rsp+BA8h] [rbp-68h]
  _QWORD *v48; // [rsp+BB0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+BB8h] [rbp-58h]
  __int64 v50; // [rsp+BC0h] [rbp-50h]
  _QWORD *v51; // [rsp+BC8h] [rbp-48h] BYREF
  __int64 v52; // [rsp+BD0h] [rbp-40h]
  __int64 v53; // [rsp+BD8h] [rbp-38h]
  _BYTE v54[41]; // [rsp+BE7h] [rbp-29h] BYREF

  codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::hac90456ee84df9c2(v30); /*0x1002f0a01*/
  codexmate_lib::platform::paths::CodexPaths::from_home::h1ecd6646f13db1b2(v27, v30); /*0x1002f0a13*/
  codexmate_lib::core::repository::Repository::auto_switch_config::ha63a42fc96cbe185(v40, v27); /*0x1002f0a22*/
  if ( v41 ) /*0x1002f0a2e*/
  {
    codexmate_lib::core::repository::Repository::load_local_state_synced::hc043a16a3128e6a8(v30); /*0x1002f0a42*/
    if ( *(_QWORD *)v30 == 2 ) /*0x1002f0a59*/
    {
      qmemcpy(v36, &v30[8], 0x60u); /*0x1002f0a71*/
      v51 = nullptr; /*0x1002f0a74*/
      v52 = 1; /*0x1002f0a7c*/
      v53 = 0; /*0x1002f0a84*/
      v38[2] = 1610612768; /*0x1002f0a8c*/
      v38[0] = &v51; /*0x1002f0a9b*/
      v38[1] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_627; /*0x1002f0aa9*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1002f0aba*/
                              v36,
                              v38) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002f14f1*/
          &anon_7f3de6c6840f0b31a5181342ebf2ca5d_628,
          55,
          v54,
          &anon_7f3de6c6840f0b31a5181342ebf2ca5d_688,
          &anon_7f3de6c6840f0b31a5181342ebf2ca5d_630);
LABEL_24:
      v48 = v51; /*0x1002f0d53*/
      v49 = v52; /*0x1002f0d5f*/
      v50 = v53; /*0x1002f0d67*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v30[8]); /*0x1002f0d6e*/
      v9 = v48; /*0x1002f0d77*/
      v10 = v49; /*0x1002f0d7b*/
      v45 = v48; /*0x1002f0d7f*/
      v46 = v49; /*0x1002f0d83*/
      v47 = v50; /*0x1002f0d87*/
      a1[2] = v50; /*0x1002f0d8b*/
      a1[1] = v10; /*0x1002f0d8f*/
      *a1 = v9; /*0x1002f0d93*/
      goto LABEL_63; /*0x1002f0d96*/
    }
    v44 = *(_QWORD *)&v30[24]; /*0x1002f0b75*/
    v43 = *(_QWORD *)&v30[16]; /*0x1002f0b82*/
    v42 = *(_QWORD **)&v30[8]; /*0x1002f0b89*/
    memcpy(&v31[32], &v30[32], 0x380u); /*0x1002f0ba3*/
    v47 = *(_QWORD *)&v30[24]; /*0x1002f0bac*/
    *(_QWORD *)&v31[8] = *(_QWORD *)&v30[8]; /*0x1002f0bbe*/
    *(_QWORD *)&v31[16] = *(_QWORD *)&v30[16]; /*0x1002f0bc5*/
    *(_QWORD *)&v31[24] = *(_QWORD *)&v30[24]; /*0x1002f0bcc*/
    *(_QWORD *)v31 = *(_QWORD *)v30; /*0x1002f0bd3*/
    v7 = __n; /*0x1002f0bda*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1002f0be4*/
    {
      v8 = 0; /*0x1002f0bea*/
      goto LABEL_15; /*0x1002f0bea*/
    }
    v14 = v28; /*0x1002f0ec7*/
    if ( __n ) /*0x1002f0ece*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v31[32]); /*0x1002f0ed0*/
      v8 = 1; /*0x1002f0ed5*/
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1002f0ee3*/
      if ( !v15 ) /*0x1002f0eeb*/
LABEL_15:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1002f0bed*/
      v16 = v15; /*0x1002f0ef1*/
    }
    else
    {
      v16 = 1; /*0x1002f0ef6*/
    }
    memcpy((void *)v16, v14, v7); /*0x1002f0f04*/
    v39 = v16; /*0x1002f0f10*/
    codexmate_lib::core::repository::enrich_accounts_via_api::hf52d42816a28363a(v31, v16, v7); /*0x1002f0f1d*/
    codexmate_lib::core::repository::Repository::persist_progressive_state::h3c34116f81bffa5b(v30, v27, v31); /*0x1002f0f37*/
    if ( *(_DWORD *)v30 != 10 ) /*0x1002f0f43*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v30); /*0x1002f0f4c*/
    if ( *(_DWORD *)&v31[152] == 2 ) /*0x1002f0f58*/
    {
      codexmate_lib::core::repository::Repository::sync_auto_switch_request::he35da4947b9a407d(v36, v27, 0, 0, v40); /*0x1002f0f77*/
      if ( *(_DWORD *)v36 != 10 ) /*0x1002f0f83*/
      {
        qmemcpy(v30, v36, 0x60u); /*0x1002f0f9f*/
        v51 = nullptr; /*0x1002f0fa2*/
        v52 = 1; /*0x1002f0faa*/
        v53 = 0; /*0x1002f0fb2*/
        v38[2] = 1610612768; /*0x1002f0fba*/
        v38[0] = &v51; /*0x1002f0fc9*/
        v38[1] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_627; /*0x1002f0fd7*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1002f0fe8*/
                                v30,
                                v38) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002f1569*/
            &anon_7f3de6c6840f0b31a5181342ebf2ca5d_628,
            55,
            v54,
            &anon_7f3de6c6840f0b31a5181342ebf2ca5d_688,
            &anon_7f3de6c6840f0b31a5181342ebf2ca5d_630);
LABEL_37:
        v17 = v51; /*0x1002f0ff5*/
        v18 = v52; /*0x1002f0ff9*/
        v19 = v53; /*0x1002f0ffd*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v36); /*0x1002f1008*/
        *a1 = v17; /*0x1002f100d*/
        a1[1] = v18; /*0x1002f1010*/
        a1[2] = v19; /*0x1002f1014*/
        goto LABEL_60; /*0x1002f1018*/
      }
    }
    else if ( (*(_DWORD *)&v31[200] == 2 || *(int *)&v31[232] > v40[0]) /*0x1002f1054*/
           && (*(_DWORD *)&v31[240] == 2 || *(int *)&v31[272] > v40[1]) )
    {
      codexmate_lib::core::repository::Repository::sync_auto_switch_request::he35da4947b9a407d( /*0x1002f116b*/
        v36,
        v27,
        &v31[152],
        0,
        v40);
      if ( *(_DWORD *)v36 != 10 ) /*0x1002f1177*/
      {
        qmemcpy(v30, v36, 0x60u); /*0x1002f1460*/
        v51 = nullptr; /*0x1002f1463*/
        v52 = 1; /*0x1002f146b*/
        v53 = 0; /*0x1002f1473*/
        v38[2] = 1610612768; /*0x1002f147b*/
        v38[0] = &v51; /*0x1002f148a*/
        v38[1] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_627; /*0x1002f1498*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1002f14a9*/
                                v30,
                                v38) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002f15d8*/
            &anon_7f3de6c6840f0b31a5181342ebf2ca5d_628,
            55,
            v54,
            &anon_7f3de6c6840f0b31a5181342ebf2ca5d_688,
            &anon_7f3de6c6840f0b31a5181342ebf2ca5d_630);
        goto LABEL_37; /*0x1002f14b0*/
      }
    }
    else
    {
      v20 = codexmate_lib::core::repository::select_rotation_candidate::hd3eea7438d083a1d( /*0x1002f1076*/
              *(_QWORD *)&v31[792],
              *(_QWORD *)&v31[800],
              *(_QWORD *)&v31[336],
              *(_QWORD *)&v31[344]);
      if ( v20 ) /*0x1002f107e*/
      {
        codexmate_lib::core::repository::Repository::sync_auto_switch_request::he35da4947b9a407d( /*0x1002f109b*/
          v36,
          v27,
          &v31[152],
          v20,
          v40);
        if ( *(_DWORD *)v36 != 10 ) /*0x1002f10a7*/
        {
          qmemcpy(v30, v36, 0x60u); /*0x1002f1367*/
          v51 = nullptr; /*0x1002f136a*/
          v52 = 1; /*0x1002f1372*/
          v53 = 0; /*0x1002f137a*/
          v38[2] = 1610612768; /*0x1002f1382*/
          v38[0] = &v51; /*0x1002f1391*/
          v38[1] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_627; /*0x1002f139f*/
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1002f13b0*/
                                  v30,
                                  v38) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002f15b3*/
              &anon_7f3de6c6840f0b31a5181342ebf2ca5d_628,
              55,
              v54,
              &anon_7f3de6c6840f0b31a5181342ebf2ca5d_688,
              &anon_7f3de6c6840f0b31a5181342ebf2ca5d_630);
          v48 = v51; /*0x1002f13c5*/
          v49 = v52; /*0x1002f13c9*/
          v50 = v53; /*0x1002f13d1*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v36); /*0x1002f13dc*/
          v23 = v50; /*0x1002f13e1*/
          v24 = v48; /*0x1002f13e5*/
          v25 = v49; /*0x1002f13e9*/
          v45 = v48; /*0x1002f13ed*/
          v46 = v49; /*0x1002f13f1*/
          v47 = v50; /*0x1002f13f5*/
LABEL_59:
          a1[2] = v23; /*0x1002f13f9*/
          a1[1] = v25; /*0x1002f13fd*/
          *a1 = v24; /*0x1002f1401*/
LABEL_60:
          if ( v7 ) /*0x1002f1407*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v7, 1); /*0x1002f1418*/
LABEL_62:
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::hd95344f83d5f5579(v31); /*0x1002f141d*/
          goto LABEL_63; /*0x1002f1424*/
        }
        v37[0] = *(_QWORD *)&v36[8]; /*0x1002f10c2*/
        v37[1] = *(_QWORD *)&v36[16]; /*0x1002f10c9*/
        v37[2] = *(_QWORD *)&v36[24]; /*0x1002f10d0*/
LABEL_51:
        v38[0] = 0x8000000000000000LL; /*0x1002f11b3*/
        codexmate_lib::core::repository::Repository::build_daemon_payload::h8d185d870dac4e2c(v30, v27, v38, v37, 1); /*0x1002f11e6*/
        if ( *(_QWORD *)v30 != 0x8000000000000000LL ) /*0x1002f11f5*/
        {
          v47 = *(_QWORD *)&v30[24]; /*0x1002f12ae*/
          v46 = *(_QWORD *)&v30[16]; /*0x1002f12bb*/
          v45 = *(_QWORD **)&v30[8]; /*0x1002f12bf*/
          memcpy(&v36[32], &v30[32], 0x88u); /*0x1002f12d6*/
          v35 = *(_QWORD *)&v30[24]; /*0x1002f12df*/
          v34 = *(_QWORD *)&v30[16]; /*0x1002f12ee*/
          v33 = *(_QWORD **)&v30[8]; /*0x1002f12f5*/
          *(_QWORD *)&v36[8] = *(_QWORD *)&v30[8]; /*0x1002f12fc*/
          *(_QWORD *)&v36[16] = *(_QWORD *)&v30[16]; /*0x1002f1303*/
          *(_QWORD *)&v36[24] = *(_QWORD *)&v30[24]; /*0x1002f130a*/
          *(_QWORD *)v36 = *(_QWORD *)v30; /*0x1002f1311*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..DaemonRunPayload$GT$$GT$::h35848bd6f8909c64(v36); /*0x1002f131f*/
          *a1 = 0x8000000000000000LL; /*0x1002f1324*/
          if ( v7 ) /*0x1002f132a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v7, 1); /*0x1002f133b*/
          goto LABEL_62; /*0x1002f133b*/
        }
        qmemcpy(v38, &v30[8], sizeof(v38)); /*0x1002f120d*/
        v48 = nullptr; /*0x1002f1210*/
        v49 = 1; /*0x1002f1218*/
        v50 = 0; /*0x1002f1220*/
        v53 = 1610612768; /*0x1002f1228*/
        v51 = &v48; /*0x1002f1234*/
        v52 = (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_627; /*0x1002f123f*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1002f124a*/
                                v38,
                                &v51) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002f158e*/
            &anon_7f3de6c6840f0b31a5181342ebf2ca5d_628,
            55,
            v54,
            &anon_7f3de6c6840f0b31a5181342ebf2ca5d_688,
            &anon_7f3de6c6840f0b31a5181342ebf2ca5d_630);
        v42 = v48; /*0x1002f125f*/
        v43 = v49; /*0x1002f1266*/
        v44 = v50; /*0x1002f1271*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v30[8]); /*0x1002f1278*/
        v23 = v44; /*0x1002f127d*/
        v24 = v42; /*0x1002f1281*/
        v25 = v43; /*0x1002f1288*/
        v33 = v42; /*0x1002f128f*/
        v34 = v43; /*0x1002f1296*/
        v35 = v44; /*0x1002f129d*/
        goto LABEL_59; /*0x1002f12a4*/
      }
      codexmate_lib::core::repository::Repository::sync_auto_switch_request::he35da4947b9a407d( /*0x1002f10f6*/
        v36,
        v27,
        &v31[152],
        0,
        v40);
      if ( *(_DWORD *)v36 != 10 ) /*0x1002f1102*/
      {
        qmemcpy(v30, v36, 0x60u); /*0x1002f111a*/
        codexmate_lib::run_daemon_once_cli::_$u7b$$u7b$closure$u7d$$u7d$::h1832b0fc47184eb2(v38, v30); /*0x1002f1127*/
        v21 = v38[1]; /*0x1002f1133*/
        v22 = v38[2]; /*0x1002f113a*/
        *a1 = v38[0]; /*0x1002f1141*/
        a1[1] = v21; /*0x1002f1144*/
        a1[2] = v22; /*0x1002f1148*/
        goto LABEL_60; /*0x1002f114c*/
      }
    }
    if ( 2LL * *(_QWORD *)&v36[8] ) /*0x1002f1184*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v36[16], *(_QWORD *)&v36[8], 1); /*0x1002f119d*/
    v37[0] = 0x8000000000000000LL; /*0x1002f11ac*/
    goto LABEL_51; /*0x1002f11ac*/
  }
  codexmate_lib::core::repository::Repository::sync_local_runtime_state::h302170dd703d5dc4(v30, v27); /*0x1002f0afa*/
  if ( *(_DWORD *)v30 == 10 ) /*0x1002f0b06*/
  {
    v2 = *(_QWORD *)&v30[16]; /*0x1002f0b0c*/
    v3 = *(_QWORD *)&v30[24]; /*0x1002f0b13*/
    if ( *(_QWORD *)&v30[24] ) /*0x1002f0b1d*/
    {
      v4 = (_QWORD *)(*(_QWORD *)&v30[16] + 32LL); /*0x1002f0b23*/
      do /*0x1002f0b37*/
      {
        v5 = *(v4 - 4); /*0x1002f0b3d*/
        if ( v5 ) /*0x1002f0b45*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v4 - 3), v5, 1); /*0x1002f0b51*/
        v6 = *(v4 - 1); /*0x1002f0b56*/
        if ( v6 ) /*0x1002f0b5e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v4, v6, 1); /*0x1002f0b69*/
        v4 += 6; /*0x1002f0b30*/
        --v3; /*0x1002f0b34*/
      }
      while ( v3 ); /*0x1002f0b37*/
    }
    if ( *(_QWORD *)&v30[8] ) /*0x1002f0c15*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 48LL * *(_QWORD *)&v30[8], 8); /*0x1002f0c27*/
  }
  else
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v30); /*0x1002f0c04*/
  }
  codexmate_lib::core::repository::Repository::sync_auto_switch_request::he35da4947b9a407d(v31, v27, 0, 0, v40); /*0x1002f0c45*/
  if ( *(_DWORD *)v31 == 10 ) /*0x1002f0c51*/
  {
    if ( 2LL * *(_QWORD *)&v31[8] ) /*0x1002f0c5e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v31[16], *(_QWORD *)&v31[8], 1); /*0x1002f0c77*/
    v32[0] = 0x8000000000000000LL; /*0x1002f0c86*/
    *(_QWORD *)&v36[16] = v32[2]; /*0x1002f0c9b*/
    *(_QWORD *)&v36[8] = v32[1]; /*0x1002f0ca2*/
    *(_QWORD *)v36 = 0x8000000000000000LL; /*0x1002f0ca9*/
    codexmate_lib::core::repository::Repository::build_daemon_payload::h8d185d870dac4e2c(v30, v27, v36, v32, 0); /*0x1002f0ccf*/
    if ( *(_QWORD *)v30 != 0x8000000000000000LL ) /*0x1002f0ce5*/
    {
      v44 = *(_QWORD *)&v30[24]; /*0x1002f0e48*/
      v43 = *(_QWORD *)&v30[16]; /*0x1002f0e53*/
      v42 = *(_QWORD **)&v30[8]; /*0x1002f0e5a*/
      memcpy(&v31[32], &v30[32], 0x88u); /*0x1002f0e74*/
      v47 = *(_QWORD *)&v30[24]; /*0x1002f0e7d*/
      v46 = *(_QWORD *)&v30[16]; /*0x1002f0e8f*/
      v45 = *(_QWORD **)&v30[8]; /*0x1002f0e93*/
      *(_QWORD *)&v31[8] = *(_QWORD *)&v30[8]; /*0x1002f0e97*/
      *(_QWORD *)&v31[16] = *(_QWORD *)&v30[16]; /*0x1002f0e9e*/
      *(_QWORD *)&v31[24] = *(_QWORD *)&v30[24]; /*0x1002f0ea5*/
      *(_QWORD *)v31 = *(_QWORD *)v30; /*0x1002f0eac*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..DaemonRunPayload$GT$$GT$::h35848bd6f8909c64(v31); /*0x1002f0eba*/
      *a1 = 0x8000000000000000LL; /*0x1002f0ebf*/
      goto LABEL_63; /*0x1002f0ec2*/
    }
    qmemcpy(v36, &v30[8], 0x60u); /*0x1002f0cfd*/
    v51 = nullptr; /*0x1002f0d00*/
    v52 = 1; /*0x1002f0d08*/
    v53 = 0; /*0x1002f0d10*/
    v38[2] = 1610612768; /*0x1002f0d18*/
    v38[0] = &v51; /*0x1002f0d27*/
    v38[1] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_627; /*0x1002f0d35*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1002f0d46*/
                            v36,
                            v38) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002f1541*/
        &anon_7f3de6c6840f0b31a5181342ebf2ca5d_628,
        55,
        v54,
        &anon_7f3de6c6840f0b31a5181342ebf2ca5d_688,
        &anon_7f3de6c6840f0b31a5181342ebf2ca5d_630);
    goto LABEL_24; /*0x1002f0d4d*/
  }
  qmemcpy(v30, v31, 0x60u); /*0x1002f0db1*/
  v38[0] = 0; /*0x1002f0db4*/
  v38[1] = 1; /*0x1002f0dbf*/
  v38[2] = 0; /*0x1002f0dca*/
  *(_QWORD *)&v36[16] = 1610612768; /*0x1002f0dd5*/
  *(_QWORD *)v36 = v38; /*0x1002f0de7*/
  *(_QWORD *)&v36[8] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_627; /*0x1002f0df5*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1002f0e06*/
                          v30,
                          v36) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002f1519*/
      &anon_7f3de6c6840f0b31a5181342ebf2ca5d_628,
      55,
      v54,
      &anon_7f3de6c6840f0b31a5181342ebf2ca5d_688,
      &anon_7f3de6c6840f0b31a5181342ebf2ca5d_630);
  v11 = v38[0]; /*0x1002f0e13*/
  v12 = v38[1]; /*0x1002f0e1a*/
  v13 = v38[2]; /*0x1002f0e21*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v31); /*0x1002f0e2f*/
  *a1 = v11; /*0x1002f0e34*/
  a1[1] = v12; /*0x1002f0e37*/
  a1[2] = v13; /*0x1002f0e3b*/
LABEL_63:
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::haaba8b954ba2bc2e(v27); /*0x1002f1429*/
  return a1; /*0x1002f1438*/
}