// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_visibility::h624fd90363ac8a17; addr: 0x10048c5b0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_visibility::h624fd90363ac8a17(
        __int64 a1)
{
  __int64 *v1; // r13
  __int64 *v2; // rax
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  _QWORD *v22; // r13
  __int64 v23; // rsi
  _QWORD v25[14]; // [rsp+0h] [rbp-2A0h] BYREF
  _QWORD v26[3]; // [rsp+70h] [rbp-230h] BYREF
  _QWORD *v27; // [rsp+88h] [rbp-218h]
  __int64 v28; // [rsp+90h] [rbp-210h]
  __int64 v29; // [rsp+98h] [rbp-208h]
  __int64 v30; // [rsp+A0h] [rbp-200h]
  __int64 v31; // [rsp+A8h] [rbp-1F8h]
  __int64 v32; // [rsp+B0h] [rbp-1F0h]
  __int64 v33; // [rsp+B8h] [rbp-1E8h]
  _QWORD *v34; // [rsp+C0h] [rbp-1E0h] BYREF
  __int128 v35; // [rsp+C8h] [rbp-1D8h]
  void *v36; // [rsp+D8h] [rbp-1C8h]
  __int128 v37; // [rsp+E0h] [rbp-1C0h]
  __int64 v38; // [rsp+F0h] [rbp-1B0h]
  __int64 v39; // [rsp+F8h] [rbp-1A8h]
  unsigned __int64 v40; // [rsp+100h] [rbp-1A0h]
  __int64 v41; // [rsp+108h] [rbp-198h]
  __int64 v42; // [rsp+110h] [rbp-190h]
  __int64 v43; // [rsp+118h] [rbp-188h]
  __int64 v44; // [rsp+120h] [rbp-180h]
  _OWORD v45[6]; // [rsp+128h] [rbp-178h] BYREF
  _QWORD v46[19]; // [rsp+188h] [rbp-118h] BYREF
  _OWORD **v47; // [rsp+220h] [rbp-80h] BYREF
  __int64 (__fastcall *v48)(_QWORD, _QWORD); // [rsp+228h] [rbp-78h] BYREF
  _OWORD *v49; // [rsp+230h] [rbp-70h] BYREF
  __int128 v50; // [rsp+238h] [rbp-68h]
  __int128 v51; // [rsp+248h] [rbp-58h]
  __int128 v52; // [rsp+258h] [rbp-48h]
  __int64 v53; // [rsp+268h] [rbp-38h]
  _BYTE v54[41]; // [rsp+277h] [rbp-29h] BYREF

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::hdcc4745326ed4935(v46, a1); /*0x10048c5ce*/
  v1 = (__int64 *)v46[1]; /*0x10048c5e1*/
  v26[2] = v46[1]; /*0x10048c5f1*/
  v27 = (_QWORD *)v46[1]; /*0x10048c5f8*/
  v32 = v46[0]; /*0x10048c5ff*/
  v28 = v46[0]; /*0x10048c606*/
  v41 = v46[1] + 24LL * v46[2]; /*0x10048c60d*/
  v29 = v41; /*0x10048c614*/
  v33 = v46[1]; /*0x10048c61e*/
  if ( v46[2] ) /*0x10048c625*/
  {
    v40 = 0x8000000000000000LL; /*0x10048c639*/
    v2 = (__int64 *)v46[1]; /*0x10048c647*/
    v44 = 0; /*0x10048c64a*/
    v3 = 0; /*0x10048c655*/
    while ( 1 ) /*0x10048c67a*/
    {
      v1 = v2 + 3; /*0x10048c67a*/
      v27 = v2 + 3; /*0x10048c67e*/
      v4 = *v2; /*0x10048c685*/
      if ( *v2 == v40 ) /*0x10048c68f*/
        goto LABEL_48; /*0x10048c68f*/
      v31 = v3; /*0x10048c695*/
      v43 = v4; /*0x10048c69c*/
      v5 = v2[2]; /*0x10048c6aa*/
      v42 = v2[1]; /*0x10048c6ae*/
      std::sys::fs::metadata::h32fa16d3052ea535(v46, v42, v5); /*0x10048c6b8*/
      v6 = v46[0]; /*0x10048c6bd*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h47ac3589c64e6d2a( /*0x10048c6ce*/
        v46[0],
        v46[1]);
      if ( v6 ) /*0x10048c6d6*/
      {
        v7 = 0; /*0x10048c6d8*/
        v8 = 0; /*0x10048c6db*/
        v9 = v43; /*0x10048c6dd*/
        v10 = v31; /*0x10048c6e7*/
        if ( !v43 ) /*0x10048c6ee*/
          goto LABEL_3; /*0x10048c6ee*/
LABEL_46:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v9, 1); /*0x10048d106*/
        goto LABEL_3; /*0x10048d117*/
      }
      codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::haffd23d3ac3aaabc(v46, v42, v5); /*0x10048c70d*/
      if ( LOBYTE(v46[13]) == 3 ) /*0x10048c719*/
      {
        qmemcpy(v45, v46, sizeof(v45)); /*0x10048c731*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10048c742*/
        {
          v49 = v45; /*0x10048c748*/
          *(_QWORD *)&v50 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x10048c753*/
          v25[6] = 2; /*0x10048c757*/
          v25[7] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048c769*/
          v25[8] = 51; /*0x10048c770*/
          v25[10] = &unk_1018F7C98; /*0x10048c782*/
          v25[11] = &v49; /*0x10048c78d*/
          v25[0] = 0; /*0x10048c794*/
          v25[1] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048c79f*/
          v25[2] = 51; /*0x10048c7a6*/
          v25[3] = 0; /*0x10048c7b1*/
          v25[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x10048c7c3*/
          v25[5] = 41; /*0x10048c7ca*/
          v25[9] = 0x1F600000001LL; /*0x10048c7df*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v54, v25); /*0x10048c7f1*/
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v45); /*0x10048c800*/
        v7 = 0; /*0x10048c805*/
        v11 = 0; /*0x10048c808*/
        goto LABEL_45; /*0x10048c80b*/
      }
      qmemcpy(v25, v46, sizeof(v25)); /*0x10048c825*/
      v26[0] = "aimai1openaicodex_router_catalog.jsonmodels_cache.json"; /*0x10048c82f*/
      v26[1] = 6; /*0x10048c836*/
      v34 = v26; /*0x10048c848*/
      *(_QWORD *)&v35 = &unk_101AA8978; /*0x10048c856*/
      *((_QWORD *)&v35 + 1) = &off_101AA89F8; /*0x10048c864*/
      v36 = &unk_101AA8978; /*0x10048c86b*/
      *(_QWORD *)&v37 = &off_101AA8950; /*0x10048c879*/
      *((_QWORD *)&v37 + 1) = &unk_101AA8978; /*0x10048c880*/
      rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10048c899*/
        v46,
        v25,
        "SELECT COUNT(*) FROM threads WHERE model_provider = ?1 OR model_provider = ?2 OR (model_provider LIKE 'openai' AND model_provider <> ?3)SELECT source FROM threads WHERE COALESCE(archived, 0) = 0 AND model_provider = ?1phase_split/payload/model_reasoning_effortSELECT DISTINCT rollout_path FROM threads WHERE rollout_path IS NOT NULL AND rollout_path <> '' AND COALESCE(archived, 0) = 0/payload/base_instructionsprovenance",
        136);
      v45[0] = *(_OWORD *)&v46[1]; /*0x10048c8b2*/
      v45[1] = *(_OWORD *)&v46[3]; /*0x10048c8c4*/
      v45[2] = *(_OWORD *)&v46[5]; /*0x10048c8da*/
      v45[3] = *(_OWORD *)&v46[7]; /*0x10048c8f0*/
      if ( LODWORD(v46[0]) == 1 ) /*0x10048c905*/
      {
        v53 = *((_QWORD *)&v45[3] + 1); /*0x10048c90e*/
        v52 = *(_OWORD *)((char *)&v45[2] + 8); /*0x10048c924*/
        v51 = *(_OWORD *)((char *)&v45[1] + 8); /*0x10048c93a*/
        v50 = *(_OWORD *)((char *)v45 + 8); /*0x10048c957*/
        v49 = *(_OWORD **)&v45[0]; /*0x10048c95b*/
      }
      else
      {
        v46[7] = *((_QWORD *)&v45[3] + 1); /*0x10048c96b*/
        *(_OWORD *)&v46[5] = *(_OWORD *)((char *)&v45[2] + 8); /*0x10048c987*/
        v46[4] = *(_QWORD *)&v45[2]; /*0x10048c995*/
        v46[3] = *((_QWORD *)&v45[1] + 1); /*0x10048c9a3*/
        *(_OWORD *)&v46[1] = *(_OWORD *)((char *)v45 + 8); /*0x10048c9c6*/
        v46[0] = *(_QWORD *)&v45[0]; /*0x10048c9cd*/
        rusqlite::statement::Statement::query_row::he803698735b7f3a6(&v49, v46, &v34, 3); /*0x10048c9e7*/
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(v46); /*0x10048c9ef*/
      }
      v11 = v50; /*0x10048c9f8*/
      if ( v49 == (_OWORD *)0x8000000000000016LL ) /*0x10048ca09*/
      {
        if ( (__int64)v50 <= 0 ) /*0x10048ca13*/
          v11 = 0; /*0x10048ca13*/
      }
      else
      {
        *((_QWORD *)&v45[3] + 1) = v53; /*0x10048ca2b*/
        *(_OWORD *)((char *)&v45[2] + 8) = v52; /*0x10048ca3b*/
        *(_OWORD *)((char *)&v45[1] + 8) = v51; /*0x10048ca4e*/
        *(_QWORD *)&v45[0] = v49; /*0x10048ca55*/
        *(_OWORD *)((char *)v45 + 8) = v50; /*0x10048ca5c*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10048ca71*/
        {
          v49 = v45; /*0x10048ca7e*/
          *(_QWORD *)&v50 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10048ca89*/
          v46[6] = 2; /*0x10048ca8d*/
          v46[7] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048ca9f*/
          v46[8] = 51; /*0x10048caa6*/
          v46[10] = &unk_1018F7CD0; /*0x10048cab8*/
          v46[11] = &v49; /*0x10048cac3*/
          v46[0] = 0; /*0x10048caca*/
          v46[1] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048cad5*/
          v46[2] = 51; /*0x10048cadc*/
          v46[3] = 0; /*0x10048cae7*/
          v46[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x10048caf9*/
          v46[5] = 41; /*0x10048cb00*/
          v46[9] = 0x20B00000001LL; /*0x10048cb15*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v54, v46); /*0x10048cb23*/
        }
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v45); /*0x10048cb2f*/
        v11 = 0; /*0x10048cb34*/
      }
      rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10048cb51*/
        v45,
        v25,
        "SELECT source FROM threads WHERE COALESCE(archived, 0) = 0 AND model_provider = ?1phase_split/payload/model_reasoning_effortSELECT DISTINCT rollout_path FROM threads WHERE rollout_path IS NOT NULL AND rollout_path <> '' AND COALESCE(archived, 0) = 0/payload/base_instructionsprovenance",
        82);
      if ( LOBYTE(v45[0]) ) /*0x10048cb5d*/
      {
        v53 = *(_QWORD *)&v45[4]; /*0x10048cb6e*/
        v52 = v45[3]; /*0x10048cb7e*/
        v51 = v45[2]; /*0x10048cb8e*/
        v50 = v45[1]; /*0x10048cba1*/
        v49 = *((_OWORD **)&v45[0] + 1); /*0x10048cba5*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10048cbb7*/
        {
          v47 = &v49; /*0x10048cbc1*/
          v48 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10048cbcc*/
          v46[6] = 2; /*0x10048cbd0*/
          v46[7] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048cbe2*/
          v46[8] = 51; /*0x10048cbe9*/
          v46[10] = &unk_1018F7C5B; /*0x10048cbfb*/
          v46[11] = &v47; /*0x10048cc06*/
          v46[0] = 0; /*0x10048cc0d*/
          v46[1] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048cc18*/
          v46[2] = 51; /*0x10048cc1f*/
          v46[3] = 0; /*0x10048cc2a*/
          v46[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x10048cc3c*/
          v46[5] = 41; /*0x10048cc43*/
          v46[9] = 0x21700000001LL; /*0x10048cc58*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v54, v46); /*0x10048cc66*/
        }
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v49); /*0x10048cc6f*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v25); /*0x10048cc7b*/
        v7 = 0; /*0x10048cc80*/
        goto LABEL_45; /*0x10048cc83*/
      }
      v39 = *(_QWORD *)&v45[4]; /*0x10048cc93*/
      v38 = *((_QWORD *)&v45[3] + 1); /*0x10048cc9e*/
      v37 = *(_OWORD *)((char *)&v45[2] + 8); /*0x10048ccb4*/
      v36 = *(void **)&v45[2]; /*0x10048ccbf*/
      v35 = v45[1]; /*0x10048ccd8*/
      v34 = *((_QWORD **)&v45[0] + 1); /*0x10048ccdf*/
      _$LT$$u5b$T$u3b$$u20$1$u5d$$u20$as$u20$rusqlite..params..Params$GT$::__bind_in::h8343240bf3b2cf7f( /*0x10048ccfc*/
        v46,
        "openaicodex_router_catalog.jsonmodels_cache.json",
        6,
        *((_QWORD *)&v45[0] + 1),
        *(_QWORD *)&v45[4]);
      v15 = 0x8000000000000016LL; /*0x10048cd08*/
      if ( v46[0] == 0x8000000000000016LL ) /*0x10048cd15*/
        break; /*0x10048cd15*/
      *((_QWORD *)&v45[3] + 1) = v46[7]; /*0x10048cfbc*/
      *(_OWORD *)((char *)&v45[2] + 8) = *(_OWORD *)&v46[5]; /*0x10048cfcc*/
      *(_QWORD *)&v45[2] = v46[4]; /*0x10048cfd8*/
      *((_QWORD *)&v45[1] + 1) = v46[3]; /*0x10048cfdc*/
      *(_QWORD *)&v45[0] = v46[0]; /*0x10048cfe7*/
      *(_OWORD *)((char *)v45 + 8) = *(_OWORD *)&v46[1]; /*0x10048cfee*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10048d003*/
      {
        v49 = v45; /*0x10048d010*/
        *(_QWORD *)&v50 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10048d01b*/
        v46[6] = 2; /*0x10048d01f*/
        v46[7] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048d031*/
        v46[8] = 51; /*0x10048d038*/
        v46[10] = &unk_1018F7C26; /*0x10048d04a*/
        v46[11] = &v49; /*0x10048d055*/
        v46[0] = 0; /*0x10048d05c*/
        v46[1] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048d067*/
        v46[2] = 51; /*0x10048d06e*/
        v46[3] = 0; /*0x10048d079*/
        v46[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x10048d08b*/
        v46[5] = 41; /*0x10048d092*/
        v46[9] = 0x23800000001LL; /*0x10048d0a7*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v54, v46); /*0x10048d0b5*/
      }
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v45); /*0x10048d0c1*/
      v7 = 0; /*0x10048d0c6*/
LABEL_44:
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(&v34); /*0x10048d0d4*/
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v25); /*0x10048d0e7*/
LABEL_45:
      v8 = v11; /*0x10048d0ec*/
      v9 = v43; /*0x10048d0ef*/
      v10 = v31; /*0x10048d0f9*/
      if ( v43 ) /*0x10048d100*/
        goto LABEL_46; /*0x10048d100*/
LABEL_3:
      v3 = v7 + v10; /*0x10048c660*/
      v44 += v8; /*0x10048c663*/
      v2 = v1; /*0x10048c66a*/
      if ( v1 == (__int64 *)v41 ) /*0x10048c674*/
        goto LABEL_53; /*0x10048c674*/
    }
    v30 = v11; /*0x10048cd1b*/
    v47 = (_OWORD **)&v34; /*0x10048cd29*/
    v48 = nullptr; /*0x10048cd2d*/
    v7 = 0; /*0x10048cd35*/
    while ( 1 ) /*0x10048cd4a*/
    {
      _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10048cd4a*/
        v46,
        &v47,
        v12,
        v15,
        v13,
        v14,
        v25[0],
        v25[1],
        v25[2]);
      v16 = v46[0]; /*0x10048cd4f*/
      if ( v46[0] != 0x8000000000000016LL ) /*0x10048cd63*/
        break; /*0x10048cd63*/
      v11 = v30; /*0x10048cd6e*/
      if ( !v48 ) /*0x10048cd75*/
      {
        core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h2239e9987ac3b07a(&v47); /*0x10048d0cf*/
        goto LABEL_44; /*0x10048d0cf*/
      }
      rusqlite::row::Row::get::hb958b9566d9487cf(v46, &v48, 0, &off_101AA8A08); /*0x10048cd8b*/
      v16 = v46[0]; /*0x10048cd90*/
      v17 = v46[1]; /*0x10048cd97*/
      v18 = v46[3]; /*0x10048cd9e*/
      if ( v46[0] == 0x8000000000000016LL ) /*0x10048cdb2*/
      {
        v19 = v46[2]; /*0x10048cdbf*/
        if ( v46[1] == v40 ) /*0x10048cdcb*/
        {
          v19 = 1; /*0x10048cdcb*/
          v17 = 0; /*0x10048cdd4*/
        }
        v7 += (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10048cdf5*/
                                 (void *)&anon_19faa30eef2c8845dad92cc05fa4a600_335,
                                 0xAu,
                                 (void *)v19)
            ^ 1u;
        if ( v17 ) /*0x10048cdfb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v17, 1); /*0x10048ce0c*/
      }
      else
      {
        v20 = v46[2]; /*0x10048ce60*/
        v49 = (_OWORD *)v46[4]; /*0x10048ce76*/
        v50 = *(_OWORD *)&v46[5]; /*0x10048ce7a*/
        *(_QWORD *)&v51 = v46[7]; /*0x10048ce8a*/
LABEL_37:
        *((_QWORD *)&v45[3] + 1) = v51; /*0x10048ce8e*/
        *(_OWORD *)((char *)&v45[2] + 8) = v50; /*0x10048cead*/
        *(_QWORD *)&v45[2] = v49; /*0x10048ceb1*/
        *(_QWORD *)&v45[0] = v16; /*0x10048ceb5*/
        *((_QWORD *)&v45[0] + 1) = v17; /*0x10048cebc*/
        v45[1] = __PAIR128__(v18, v20); /*0x10048cec3*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10048cedf*/
        {
          v49 = v45; /*0x10048ceec*/
          *(_QWORD *)&v50 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10048cef7*/
          v46[6] = 2; /*0x10048cefb*/
          v46[7] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048cf0d*/
          v46[8] = 51; /*0x10048cf14*/
          v46[10] = &unk_1018F7BEC; /*0x10048cf26*/
          v46[11] = &v49; /*0x10048cf31*/
          v46[0] = 0; /*0x10048cf38*/
          v46[1] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048cf43*/
          v46[2] = 51; /*0x10048cf4a*/
          v46[3] = 0; /*0x10048cf55*/
          v46[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x10048cf67*/
          v46[5] = 41; /*0x10048cf6e*/
          v46[9] = 0x22E00000001LL; /*0x10048cf83*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v54, v46); /*0x10048cf91*/
        }
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v45); /*0x10048cf9d*/
        ++v7; /*0x10048cfa2*/
      }
    }
    v20 = v46[2]; /*0x10048ce27*/
    v17 = v46[1]; /*0x10048ce27*/
    v18 = v46[3]; /*0x10048ce2e*/
    *(_QWORD *)&v51 = v46[7]; /*0x10048ce40*/
    v50 = *(_OWORD *)&v46[5]; /*0x10048ce54*/
    v49 = (_OWORD *)v46[4]; /*0x10048ce58*/
    goto LABEL_37; /*0x10048ce5c*/
  }
  v44 = 0; /*0x10048d11f*/
LABEL_48:
  if ( (__int64 *)v41 != v1 ) /*0x10048d147*/
  {
    v21 = (v41 - (__int64)v1) / 0x18uLL; /*0x10048d14c*/
    v22 = v1 + 1; /*0x10048d150*/
    do /*0x10048d167*/
    {
      v23 = *(v22 - 1); /*0x10048d169*/
      if ( v23 ) /*0x10048d170*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v23, 1); /*0x10048d17b*/
      v22 += 3; /*0x10048d160*/
      --v21; /*0x10048d164*/
    }
    while ( v21 ); /*0x10048d167*/
  }
LABEL_53:
  if ( v32 ) /*0x10048d18c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 24 * v32, 8); /*0x10048d1a2*/
  return v44; /*0x10048d1b1*/
}
