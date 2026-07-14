// codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_visibility
// addr: 0x10040af00
// decompiled via 反编译器 MCP (mac) live 1.1.8 IDB, session <审计会话>

__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_visibility::h464f61e129d62a95(
        __int64 a1,
        double a2)
{
  __int64 v2; // r13
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  unsigned __int8 v17; // bl
  unsigned __int64 v18; // rbx
  _QWORD *v19; // r13
  __int64 v20; // rsi
  _BYTE v22[112]; // [rsp+0h] [rbp-2C0h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-250h] BYREF
  __int64 v24; // [rsp+88h] [rbp-238h]
  __int64 v25; // [rsp+90h] [rbp-230h]
  __int64 v26; // [rsp+98h] [rbp-228h]
  __int128 v27; // [rsp+A0h] [rbp-220h]
  __m256i *v28; // [rsp+B0h] [rbp-210h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-208h]
  void *v30; // [rsp+C8h] [rbp-1F8h]
  char **v31; // [rsp+D0h] [rbp-1F0h]
  void *v32; // [rsp+D8h] [rbp-1E8h]
  __int64 v33; // [rsp+E0h] [rbp-1E0h]
  __int64 v34; // [rsp+E8h] [rbp-1D8h]
  __int64 v35; // [rsp+F0h] [rbp-1D0h]
  __m256i v36[3]; // [rsp+F8h] [rbp-1C8h] BYREF
  unsigned __int64 v37; // [rsp+158h] [rbp-168h]
  __int64 v38; // [rsp+160h] [rbp-160h]
  __int64 v39; // [rsp+168h] [rbp-158h]
  __int64 v40; // [rsp+170h] [rbp-150h]
  __int64 v41; // [rsp+178h] [rbp-148h]
  __m256i v42[4]; // [rsp+180h] [rbp-140h] BYREF
  __m256i v43; // [rsp+218h] [rbp-A8h] BYREF
  _BYTE v44[40]; // [rsp+238h] [rbp-88h]
  __int64 v45; // [rsp+260h] [rbp-60h]
  void *v46; // [rsp+268h] [rbp-58h]
  __m256i **v47; // [rsp+270h] [rbp-50h]
  __int64 v48; // [rsp+278h] [rbp-48h]
  __int128 v49; // [rsp+280h] [rbp-40h] BYREF
  _BYTE v50[41]; // [rsp+297h] [rbp-29h] BYREF

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs_for_home::h53819d65dd7d53b6( /*0x10040af23*/
    v42,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  v2 = v42[0].i64[1]; /*0x10040af2f*/
  v23[2] = v42[0].i64[1]; /*0x10040af46*/
  v24 = v42[0].i64[1]; /*0x10040af4d*/
  v27 = v42[0].i128[0]; /*0x10040af54*/
  v25 = v42[0].i64[0]; /*0x10040af5b*/
  v35 = v42[0].i64[1] + 24 * v42[0].i64[2]; /*0x10040af62*/
  v26 = v35; /*0x10040af69*/
  if ( v42[0].i64[2] ) /*0x10040af7a*/
  {
    v37 = 0x8000000000000000LL; /*0x10040af95*/
    v3 = (__int64 *)v42[0].i64[1]; /*0x10040af9c*/
    v41 = 0; /*0x10040af9f*/
    v40 = 0; /*0x10040afaa*/
    while ( 1 ) /*0x10040afe2*/
    {
      v2 = (__int64)(v3 + 3); /*0x10040afe2*/
      v24 = (__int64)(v3 + 3); /*0x10040afe6*/
      v39 = *v3; /*0x10040aff0*/
      if ( v39 == v37 ) /*0x10040affe*/
        goto LABEL_56; /*0x10040affe*/
      v4 = v3[2]; /*0x10040b008*/
      v38 = v3[1]; /*0x10040b013*/
      std::sys::fs::metadata::h32fa16d3052ea535(v42, v38, v4); /*0x10040b01d*/
      if ( v42[0].i32[0] == 1 ) /*0x10040b029*/
      {
        if ( (v42[0].i8[8] & 3) == 1 ) /*0x10040b03a*/
        {
          v5 = v42[0].i64[1] - 1; /*0x10040b03c*/
          v6 = *(_QWORD *)(v42[0].i64[1] - 1); /*0x10040b040*/
          v7 = *(_QWORD *)(v42[0].i64[1] + 7); /*0x10040b044*/
          if ( *(_QWORD *)v7 ) /*0x10040b048*/
            (*(void (__fastcall **)(__int64))v7)(v6); /*0x10040b053*/
          v8 = *(_QWORD *)(v7 + 8); /*0x10040b055*/
          if ( v8 ) /*0x10040b05c*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x10040b065*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x10040b077*/
        }
        v9 = 0; /*0x10040b07c*/
        v48 = 0; /*0x10040b07f*/
      }
      else
      {
        codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::hf18a40af8a6a62bc(v42, v38, v4); /*0x10040b0a1*/
        if ( v42[3].i8[8] == 3 ) /*0x10040b0ad*/
        {
          qmemcpy(v36, v42, sizeof(v36)); /*0x10040b0c9*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10040b0da*/
          {
            v28 = v36; /*0x10040b0e0*/
            *(_QWORD *)&v29 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x10040b0ee*/
            *(_QWORD *)&v44[16] = 2; /*0x10040b0f5*/
            *(_QWORD *)&v44[24] = "codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040b104*/
            *(_QWORD *)&v44[32] = 51; /*0x10040b108*/
            v46 = &unk_101228501; /*0x10040b117*/
            v47 = &v28; /*0x10040b122*/
            v43.i64[0] = 0; /*0x10040b126*/
            v43.i64[1] = (__int64)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040b131*/
            v43.i128[1] = 0x33u; /*0x10040b138*/
            *(_QWORD *)v44 = "src/core/relay/codex_thread_visibility.rs"; /*0x10040b155*/
            *(_QWORD *)&v44[8] = 41; /*0x10040b15c*/
            v45 = 0xF000000001LL; /*0x10040b16e*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v50, &v43); /*0x10040b17d*/
          }
          a2 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v36); /*0x10040b18c*/
          v48 = 0; /*0x10040b191*/
        }
        else
        {
          qmemcpy(v22, v42, sizeof(v22)); /*0x10040b1b9*/
          v23[0] = &anon_0eedd02070250de7472aa97ee6b1a8ea_156; /*0x10040b1c3*/
          v23[1] = 6; /*0x10040b1ca*/
          v28 = (__m256i *)v23; /*0x10040b1dc*/
          *(_QWORD *)&v29 = &unk_10152F030; /*0x10040b1ea*/
          *((_QWORD *)&v29 + 1) = &off_10152EF58; /*0x10040b1f8*/
          v30 = &unk_10152F030; /*0x10040b1ff*/
          v31 = &off_10152F0D8; /*0x10040b20d*/
          v32 = &unk_10152F030; /*0x10040b214*/
          rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10040b22d*/
            v42,
            v22,
            "SELECT COUNT(*) FROM threads WHERE model_provider = ?1 OR model_provider = ?2 OR (model_provider LIKE 'openai' AND model_provider <> ?3)SELECT source FROM threads WHERE COALESCE(archived, 0) = 0 AND model_provider = ?1",
            136,
            a2);
          v43 = *(__m256i *)((char *)v42 + 8); /*0x10040b241*/
          *(_QWORD *)v44 = v42[1].i64[1]; /*0x10040b26c*/
          *(_OWORD *)&v44[8] = v42[1].i128[1]; /*0x10040b278*/
          *(_QWORD *)&v44[24] = v42[2].i64[0]; /*0x10040b28a*/
          if ( v42[0].i32[0] == 1 ) /*0x10040b291*/
          {
            v36[1] = *(__m256i *)v44; /*0x10040b2a2*/
            v36[0] = v43; /*0x10040b2c9*/
          }
          else
          {
            v42[1] = *(__m256i *)v44; /*0x10040b30e*/
            v42[0] = v43; /*0x10040b335*/
            rusqlite::statement::Statement::query_row::h13917935a8b757f4(v36, v42, &v28, 3); /*0x10040b383*/
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(v42); /*0x10040b38b*/
          }
          v10 = v36[0].i64[1]; /*0x10040b397*/
          if ( v36[0].i64[0] == 0x8000000000000016LL ) /*0x10040b3ab*/
          {
            if ( v36[0].i64[1] <= 0 ) /*0x10040b3b5*/
              v10 = 0; /*0x10040b3b5*/
            v48 = v10; /*0x10040b3b9*/
          }
          else
          {
            *(__m256i *)v44 = v36[1]; /*0x10040b3dc*/
            v43 = v36[0]; /*0x10040b3f7*/
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10040b41a*/
            {
              v36[0].i64[0] = (__int64)&v43; /*0x10040b427*/
              v36[0].i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10040b435*/
              v42[1].i64[2] = 2; /*0x10040b43c*/
              v42[1].i64[3] = (__int64)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040b44e*/
              v42[2].i64[0] = 51; /*0x10040b455*/
              v42[2].i64[2] = (__int64)&unk_101228539; /*0x10040b467*/
              v42[2].i64[3] = (__int64)v36; /*0x10040b475*/
              v42[0].i64[0] = 0; /*0x10040b47c*/
              v42[0].i64[1] = (__int64)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040b487*/
              v42[0].i128[1] = 0x33u; /*0x10040b48e*/
              v42[1].i64[0] = (__int64)"src/core/relay/codex_thread_visibility.rs"; /*0x10040b4ab*/
              v42[1].i64[1] = 41; /*0x10040b4b2*/
              v42[2].i64[1] = 0x10500000001LL; /*0x10040b4c7*/
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v50, v42); /*0x10040b4d9*/
            }
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(&v43); /*0x10040b4e5*/
            v48 = 0; /*0x10040b4ea*/
          }
          rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10040b50c*/
            &v43,
            v22,
            "SELECT source FROM threads WHERE COALESCE(archived, 0) = 0 AND model_provider = ?1",
            82,
            a2);
          if ( !v43.i8[0] ) /*0x10040b518*/
          {
            v34 = *(_QWORD *)&v44[32]; /*0x10040b670*/
            v33 = *(_QWORD *)&v44[24]; /*0x10040b67b*/
            v32 = *(void **)&v44[16]; /*0x10040b686*/
            v31 = *(char ***)&v44[8]; /*0x10040b691*/
            v30 = *(void **)v44; /*0x10040b69c*/
            v29 = v43.i128[1]; /*0x10040b6b5*/
            v28 = (__m256i *)v43.i64[1]; /*0x10040b6bc*/
            v42[0].i64[0] = (__int64)"openai"; /*0x10040b6ca*/
            v42[0].i64[1] = 6; /*0x10040b6d1*/
            rusqlite::statement::Statement::query_map::h7e78c9de3933e398(v36, &v28, v42); /*0x10040b6f1*/
            if ( v36[0].i64[0] == 0x8000000000000016LL ) /*0x10040b707*/
            {
              a2 = *(double *)&v36[0].i64[1]; /*0x10040b70d*/
              v49 = *(__int128 *)((char *)v36[0].i128 + 8); /*0x10040b714*/
              v9 = 0; /*0x10040b718*/
              while ( 1 ) /*0x10040b737*/
              {
                _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10040b737*/
                  v42,
                  &v49);
                v11 = v42[0].i64[0]; /*0x10040b73c*/
                if ( v42[0].i64[0] == 0x8000000000000016LL ) /*0x10040b750*/
                {
                  if ( !*((_QWORD *)&v49 + 1) ) /*0x10040b757*/
                  {
                    core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::hf15e4da9816c2a07(&v49); /*0x10040ba42*/
                    goto LABEL_52; /*0x10040ba42*/
                  }
                  rusqlite::row::Row::get::h5e9bf81a5f3b7aae(v42, (char *)&v49 + 8, 0, &off_10152F130); /*0x10040b771*/
                  v12 = v42[0].i64[1]; /*0x10040b77d*/
                  v11 = v42[0].i64[0]; /*0x10040b77d*/
                  v13 = v42[0].i64[3]; /*0x10040b784*/
                  if ( v42[0].i64[0] == 0x8000000000000016LL ) /*0x10040b798*/
                  {
                    v14 = v42[0].i64[2]; /*0x10040b7a5*/
                    if ( v42[0].i64[1] == v37 ) /*0x10040b7b1*/
                    {
                      v14 = 1; /*0x10040b7b1*/
                      v12 = 0; /*0x10040b7ba*/
                      v13 = 0; /*0x10040b7be*/
                    }
                  }
                  else
                  {
                    v14 = v42[0].i64[2]; /*0x10040b820*/
                    v43 = v42[1]; /*0x10040b831*/
                  }
                }
                else
                {
                  v14 = v42[0].i64[2]; /*0x10040b7d7*/
                  v12 = v42[0].i64[1]; /*0x10040b7d7*/
                  v13 = v42[0].i64[3]; /*0x10040b7de*/
                  v43 = v42[1]; /*0x10040b7f6*/
                }
                v42[1] = v43; /*0x10040b86a*/
                v42[0].i64[0] = v11; /*0x10040b887*/
                v42[0].i64[1] = v12; /*0x10040b88e*/
                v42[0].i64[2] = v14; /*0x10040b895*/
                v42[0].i64[3] = v13; /*0x10040b89c*/
                if ( v11 == 0x8000000000000016LL ) /*0x10040b8b0*/
                {
                  if ( v12 != v37 ) /*0x10040b8bd*/
                  {
                    v15 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10040b8d2*/
                            &anon_0eedd02070250de7472aa97ee6b1a8ea_574,
                            0xAu,
                            (void *)v14);
                    if ( v12 ) /*0x10040b8da*/
                    {
                      v16 = v14; /*0x10040b8e1*/
                      v17 = v15; /*0x10040b8e7*/
                      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v12, 1); /*0x10040b8e9*/
                      v15 = v17; /*0x10040b8ee*/
                    }
                    v9 += v15 ^ 1u; /*0x10040b8f5*/
                  }
                }
                else
                {
                  core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(v42); /*0x10040b727*/
                }
              }
            }
            *(__m256i *)v44 = v36[1]; /*0x10040b90f*/
            v43 = v36[0]; /*0x10040b933*/
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10040b972*/
            {
              *(_QWORD *)&v49 = &v43; /*0x10040b97f*/
              *((_QWORD *)&v49 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10040b98a*/
              v42[1].i64[2] = 2; /*0x10040b98e*/
              v42[1].i64[3] = (__int64)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040b9a0*/
              v42[2].i64[0] = 51; /*0x10040b9a7*/
              v42[2].i64[2] = (__int64)&unk_10122848F; /*0x10040b9b9*/
              v42[2].i64[3] = (__int64)&v49; /*0x10040b9c4*/
              v42[0].i64[0] = 0; /*0x10040b9cb*/
              v42[0].i64[1] = (__int64)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040b9d6*/
              v42[0].i128[1] = 0x33u; /*0x10040b9dd*/
              v42[1].i64[0] = (__int64)"src/core/relay/codex_thread_visibility.rs"; /*0x10040b9fa*/
              v42[1].i64[1] = 41; /*0x10040ba01*/
              v42[2].i64[1] = 0x12100000001LL; /*0x10040ba16*/
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v50, v42); /*0x10040ba28*/
            }
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(&v43); /*0x10040ba34*/
            v9 = 0; /*0x10040ba39*/
LABEL_52:
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(&v28); /*0x10040ba47*/
            core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(v22, a2); /*0x10040ba5a*/
            goto LABEL_53; /*0x10040ba5a*/
          }
          v36[1] = *(__m256i *)&v44[8]; /*0x10040b534*/
          v36[0].i64[3] = *(_QWORD *)v44; /*0x10040b555*/
          *(__int128 *)((char *)v36[0].i128 + 8) = v43.i128[1]; /*0x10040b56e*/
          v36[0].i64[0] = v43.i64[1]; /*0x10040b575*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10040b58a*/
          {
            *(_QWORD *)&v49 = v36; /*0x10040b597*/
            *((_QWORD *)&v49 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10040b5a2*/
            v42[1].i64[2] = 2; /*0x10040b5a6*/
            v42[1].i64[3] = (__int64)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040b5b8*/
            v42[2].i64[0] = 51; /*0x10040b5bf*/
            v42[2].i64[2] = (__int64)&unk_1012284C4; /*0x10040b5d1*/
            v42[2].i64[3] = (__int64)&v49; /*0x10040b5dc*/
            v42[0].i64[0] = 0; /*0x10040b5e3*/
            v42[0].i64[1] = (__int64)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040b5ee*/
            v42[0].i128[1] = 0x33u; /*0x10040b5f5*/
            v42[1].i64[0] = (__int64)"src/core/relay/codex_thread_visibility.rs"; /*0x10040b612*/
            v42[1].i64[1] = 41; /*0x10040b619*/
            v42[2].i64[1] = 0x11100000001LL; /*0x10040b62e*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v50, v42); /*0x10040b640*/
          }
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(v36); /*0x10040b64c*/
          core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(v22, a2); /*0x10040b658*/
        }
        v9 = 0; /*0x10040b65d*/
      }
LABEL_53:
      if ( v39 ) /*0x10040ba6a*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v39, 1); /*0x10040ba7c*/
      v40 += v9; /*0x10040afc0*/
      v41 += v48; /*0x10040afcb*/
      v3 = (__int64 *)v2; /*0x10040afd2*/
      if ( v2 == v35 ) /*0x10040afdc*/
        goto LABEL_61; /*0x10040afdc*/
    }
  }
  v40 = 0; /*0x10040ba86*/
  v41 = 0; /*0x10040ba91*/
LABEL_56:
  if ( v35 != v2 ) /*0x10040bab9*/
  {
    v18 = (v35 - v2) / 0x18uLL; /*0x10040babe*/
    v19 = (_QWORD *)(v2 + 8); /*0x10040bac2*/
    do /*0x10040bad7*/
    {
      v20 = *(v19 - 1); /*0x10040bad9*/
      if ( v20 ) /*0x10040bae0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v19, v20, 1); /*0x10040baeb*/
      v19 += 3; /*0x10040bad0*/
      --v18; /*0x10040bad4*/
    }
    while ( v18 ); /*0x10040bad7*/
  }
LABEL_61:
  if ( (_QWORD)v27 ) /*0x10040bafc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v27 + 1), 24 * v27, 8); /*0x10040bb12*/
  return v41; /*0x10040bb25*/
}
