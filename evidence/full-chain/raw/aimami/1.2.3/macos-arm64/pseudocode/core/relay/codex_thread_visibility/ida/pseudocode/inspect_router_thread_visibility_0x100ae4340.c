// __ZN13codexmate_lib4core5relay23codex_thread_visibility32inspect_router_thread_visibility @ 0x100ae4340 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_visibility::h1b95e8bc7282f0f5(
        _QWORD *a1)
{
  __int64 *v1; // r12
  __int64 *v2; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // r15d
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 *v16; // rcx
  _QWORD *v17; // rbx
  sqlite3_stmt *v18; // r14
  int v19; // eax
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // rcx
  __int64 v26; // r14
  unsigned __int64 v27; // rdx
  __m128i inserted; // xmm0
  unsigned __int64 v29; // rbx
  _QWORD *v30; // r12
  __int64 v31; // rsi
  _BYTE v33[112]; // [rsp+8h] [rbp-2F8h] BYREF
  _QWORD v34[3]; // [rsp+78h] [rbp-288h] BYREF
  _QWORD *v35; // [rsp+90h] [rbp-270h]
  __int64 v36; // [rsp+98h] [rbp-268h]
  __int64 v37; // [rsp+A0h] [rbp-260h]
  __int128 v38; // [rsp+A8h] [rbp-258h]
  unsigned __int64 v39; // [rsp+B8h] [rbp-248h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-240h]
  __int64 v41; // [rsp+C8h] [rbp-238h]
  _OWORD **v42; // [rsp+D0h] [rbp-230h] BYREF
  void *v43; // [rsp+D8h] [rbp-228h] BYREF
  _QWORD v44[2]; // [rsp+E0h] [rbp-220h] BYREF
  _QWORD v45[2]; // [rsp+F0h] [rbp-210h] BYREF
  int v46; // [rsp+104h] [rbp-1FCh]
  __int64 v47; // [rsp+108h] [rbp-1F8h]
  __int64 v48; // [rsp+110h] [rbp-1F0h]
  __int64 v49; // [rsp+118h] [rbp-1E8h]
  _OWORD *v50; // [rsp+120h] [rbp-1E0h] BYREF
  __int128 v51; // [rsp+128h] [rbp-1D8h]
  __int128 v52; // [rsp+138h] [rbp-1C8h]
  __int128 v53; // [rsp+148h] [rbp-1B8h]
  sqlite3_stmt *v54; // [rsp+158h] [rbp-1A8h]
  _OWORD v55[9]; // [rsp+160h] [rbp-1A0h] BYREF
  _OWORD v56[6]; // [rsp+1F8h] [rbp-108h] BYREF
  _QWORD *v57; // [rsp+258h] [rbp-A8h] BYREF
  _OWORD *v58; // [rsp+260h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+268h] [rbp-98h] BYREF
  __m512i v60; // [rsp+270h] [rbp-90h] BYREF
  __int64 v61; // [rsp+2B0h] [rbp-50h]
  __int64 v62; // [rsp+2B8h] [rbp-48h]
  void *v63; // [rsp+2C0h] [rbp-40h]
  _QWORD *v64; // [rsp+2C8h] [rbp-38h]
  __int64 v65; // [rsp+2D0h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v55, a1); /*0x100ae435e*/
  v1 = *((__int64 **)&v55[0] + 1); /*0x100ae4371*/
  v34[2] = *((_QWORD *)&v55[0] + 1); /*0x100ae4380*/
  v35 = *((_QWORD **)&v55[0] + 1); /*0x100ae4387*/
  v38 = v55[0]; /*0x100ae438e*/
  v36 = *(_QWORD *)&v55[0]; /*0x100ae4395*/
  v41 = *((_QWORD *)&v55[0] + 1) + 24LL * *(_QWORD *)&v55[1]; /*0x100ae439c*/
  v37 = v41; /*0x100ae43a3*/
  if ( *(_QWORD *)&v55[1] ) /*0x100ae43b4*/
  {
    v40 = 0x8000000000000000LL; /*0x100ae43c8*/
    v2 = *((__int64 **)&v55[0] + 1); /*0x100ae43cf*/
    v3 = 0; /*0x100ae43d2*/
    v49 = 0; /*0x100ae43d5*/
    while ( 1 ) /*0x100ae440a*/
    {
      v1 = v2 + 3; /*0x100ae440a*/
      v35 = v2 + 3; /*0x100ae440e*/
      v65 = *v2; /*0x100ae4418*/
      if ( v65 == v40 ) /*0x100ae4423*/
        goto LABEL_78; /*0x100ae4423*/
      v4 = v2[2]; /*0x100ae442d*/
      v47 = v2[1]; /*0x100ae4438*/
      std::sys::fs::metadata::h32fa16d3052ea535(v55, v47, v4); /*0x100ae4442*/
      if ( LODWORD(v55[0]) == 1 ) /*0x100ae444e*/
      {
        if ( (BYTE8(v55[0]) & 3) == 1 ) /*0x100ae445f*/
        {
          v11 = *((_QWORD *)&v55[0] + 1) - 1LL; /*0x100ae4879*/
          v12 = *(_QWORD *)(*((_QWORD *)&v55[0] + 1) - 1LL); /*0x100ae487d*/
          v13 = *(_QWORD *)(*((_QWORD *)&v55[0] + 1) + 7LL); /*0x100ae4881*/
          if ( *(_QWORD *)v13 ) /*0x100ae4885*/
            (*(void (__fastcall **)(__int64))v13)(v12); /*0x100ae4890*/
          v14 = *(_QWORD *)(v13 + 8); /*0x100ae4892*/
          if ( v14 ) /*0x100ae4899*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16)); /*0x100ae48a2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24, 8); /*0x100ae48b4*/
          v5 = 0; /*0x100ae48b9*/
          v6 = 0; /*0x100ae48bb*/
        }
        else
        {
          v5 = 0; /*0x100ae4465*/
          v6 = 0; /*0x100ae4467*/
        }
        goto LABEL_74; /*0x100ae446a*/
      }
      codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::h07bf0b0a45198e2f( /*0x100ae4481*/
        (__int64)v55,
        v47,
        v4);
      if ( BYTE8(v55[6]) != 3 ) /*0x100ae448d*/
        break; /*0x100ae448d*/
      qmemcpy(v56, v55, sizeof(v56)); /*0x100ae44a9*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae44ba*/
      {
        v50 = v56; /*0x100ae44c0*/
        *(_QWORD *)&v51 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae44ce*/
        v60.i64[6] = 2; /*0x100ae44d5*/
        v60.i64[7] = (__int64)&unk_10167D5D6; /*0x100ae44e4*/
        v61 = 51; /*0x100ae44e8*/
        v63 = &unk_1017CAEDB; /*0x100ae44f7*/
        v64 = &v50; /*0x100ae4502*/
        v60.i64[0] = 0; /*0x100ae4506*/
        v60.i64[1] = (__int64)&unk_10167D5D6; /*0x100ae4511*/
        v60.i128[1] = 0x33u; /*0x100ae4518*/
        v60.i64[4] = (__int64)"src/core/relay/codex_thread_visibility.rs"; /*0x100ae452f*/
        v60.i64[5] = 41; /*0x100ae4533*/
        v62 = 0x15D00000001LL; /*0x100ae4545*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v58, &v60); /*0x100ae4557*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v56); /*0x100ae4566*/
      v6 = 0; /*0x100ae456b*/
LABEL_49:
      v5 = 0; /*0x100ae4d25*/
LABEL_74:
      if ( v65 ) /*0x100ae52c7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v65, 1); /*0x100ae52d9*/
      v49 += v5; /*0x100ae43f0*/
      v3 += v6; /*0x100ae43f7*/
      v2 = v1; /*0x100ae43fa*/
      if ( v1 == (__int64 *)v41 ) /*0x100ae4404*/
        goto LABEL_83; /*0x100ae4404*/
    }
    qmemcpy(v33, v55, sizeof(v33)); /*0x100ae4599*/
    v34[0] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_812; /*0x100ae45a3*/
    v34[1] = 6; /*0x100ae45aa*/
    v42 = (_OWORD **)v34; /*0x100ae45bc*/
    v43 = &unk_1019747F0; /*0x100ae45ca*/
    v44[0] = &off_1019748F8; /*0x100ae45d8*/
    v44[1] = &unk_1019747F0; /*0x100ae45df*/
    v45[0] = &off_1019748B8; /*0x100ae45ed*/
    v45[1] = &unk_1019747F0; /*0x100ae45f4*/
    rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x100ae460d*/
      v55,
      v33,
      "SELECT COUNT(*) FROM threads WHERE model_provider = ?1 OR model_provider = ?2 OR (model_provider LIKE 'openai' AND model_provider <> ?3)SELECT source FROM threads WHERE COALESCE(archived, 0) = 0 AND model_provider = ?1/payload/model_reasoning_effortmedium",
      136);
    v60 = *(__m512i *)((char *)v55 + 8); /*0x100ae4626*/
    if ( LODWORD(v55[0]) == 1 ) /*0x100ae4667*/
    {
      v54 = (sqlite3_stmt *)v60.i64[7]; /*0x100ae466d*/
      v53 = *(__int128 *)((char *)&v60.i128[2] + 8); /*0x100ae4683*/
      v52 = *(__int128 *)((char *)&v60.i128[1] + 8); /*0x100ae4699*/
      v51 = *(__int128 *)((char *)v60.i128 + 8); /*0x100ae46b9*/
      v50 = (_OWORD *)v60.i64[0]; /*0x100ae46c0*/
      goto LABEL_38; /*0x100ae46c7*/
    }
    *((_QWORD *)&v56[3] + 1) = v60.i64[7]; /*0x100ae46d0*/
    *(_OWORD *)((char *)&v56[2] + 8) = *(__int128 *)((char *)&v60.i128[2] + 8); /*0x100ae46e6*/
    *(_OWORD *)((char *)&v56[1] + 8) = *(__int128 *)((char *)&v60.i128[1] + 8); /*0x100ae46fc*/
    *(_OWORD *)((char *)v56 + 8) = *(__int128 *)((char *)v60.i128 + 8); /*0x100ae471c*/
    *(_QWORD *)&v56[0] = v60.i64[0]; /*0x100ae4723*/
    v7 = sqlite3_bind_parameter_count((sqlite3_stmt *)v60.i64[7]); /*0x100ae4736*/
    v57 = &v42; /*0x100ae4740*/
    if ( v7 ) /*0x100ae474a*/
    {
      rusqlite::statement::Statement::bind_parameter::h827c23edb04c4beb(v55, v56, &v57, 1); /*0x100ae476a*/
      v8 = *(_QWORD *)&v55[0]; /*0x100ae476f*/
      if ( *(_QWORD *)&v55[0] != 0x8000000000000016LL ) /*0x100ae4783*/
        goto LABEL_20; /*0x100ae4783*/
      v57 = v44; /*0x100ae4790*/
      v9 = 2; /*0x100ae4797*/
      if ( v7 != 1 ) /*0x100ae47a0*/
      {
        rusqlite::statement::Statement::bind_parameter::h827c23edb04c4beb(v55, v56, &v57, 2); /*0x100ae47c0*/
        v8 = *(_QWORD *)&v55[0]; /*0x100ae47c5*/
        if ( *(_QWORD *)&v55[0] != 0x8000000000000016LL /*0x100ae482b*/
          || (v57 = v45, v9 = 3, v7 != 2)
          && (rusqlite::statement::Statement::bind_parameter::h827c23edb04c4beb(v55, v56, &v57, 3),
              v8 = *(_QWORD *)&v55[0],
              *(_QWORD *)&v55[0] != 0x8000000000000016LL) )
        {
LABEL_20:
          v10 = *(_QWORD *)&v55[1]; /*0x100ae4838*/
          v9 = *((_QWORD *)&v55[0] + 1); /*0x100ae4838*/
          v60.i64[0] = *((_QWORD *)&v55[1] + 1); /*0x100ae484e*/
          *(__int128 *)((char *)v60.i128 + 8) = v55[2]; /*0x100ae4855*/
          *(__int128 *)((char *)&v60.i128[1] + 8) = v55[3]; /*0x100ae4868*/
LABEL_32:
          v50 = (_OWORD *)v8; /*0x100ae4956*/
          *(_QWORD *)&v51 = v9; /*0x100ae495d*/
          *((_QWORD *)&v51 + 1) = v10; /*0x100ae4964*/
          v54 = (sqlite3_stmt *)v60.i64[4]; /*0x100ae4976*/
          v53 = v60.i128[1]; /*0x100ae4986*/
          v52 = v60.i128[0]; /*0x100ae499c*/
LABEL_37:
          core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v56); /*0x100ae4a4c*/
LABEL_38:
          v6 = v51; /*0x100ae4a62*/
          if ( v50 == (_OWORD *)0x8000000000000016LL ) /*0x100ae4a73*/
          {
            if ( (__int64)v51 <= 0 ) /*0x100ae4a7d*/
              v6 = 0; /*0x100ae4a7d*/
          }
          else
          {
            v60.i64[7] = (__int64)v54; /*0x100ae4a95*/
            *(__int128 *)((char *)&v60.i128[2] + 8) = v53; /*0x100ae4aa5*/
            *(__int128 *)((char *)&v60.i128[1] + 8) = v52; /*0x100ae4ab8*/
            v60.i64[0] = (__int64)v50; /*0x100ae4abf*/
            *(__int128 *)((char *)v60.i128 + 8) = v51; /*0x100ae4ac6*/
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae4adb*/
            {
              *(_QWORD *)&v56[0] = &v60; /*0x100ae4ae8*/
              *((_QWORD *)&v56[0] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ae4af6*/
              *(_QWORD *)&v55[3] = 2; /*0x100ae4afd*/
              *((_QWORD *)&v55[3] + 1) = &unk_10167D5D6; /*0x100ae4b0f*/
              *(_QWORD *)&v55[4] = 51; /*0x100ae4b16*/
              *(_QWORD *)&v55[5] = &unk_1017CAF13; /*0x100ae4b28*/
              *((_QWORD *)&v55[5] + 1) = v56; /*0x100ae4b36*/
              *(_QWORD *)&v55[0] = 0; /*0x100ae4b3d*/
              *((_QWORD *)&v55[0] + 1) = &unk_10167D5D6; /*0x100ae4b48*/
              v55[1] = 0x33u; /*0x100ae4b4f*/
              *(_QWORD *)&v55[2] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae4b6c*/
              *((_QWORD *)&v55[2] + 1) = 41; /*0x100ae4b73*/
              *((_QWORD *)&v55[4] + 1) = 0x17200000001LL; /*0x100ae4b88*/
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v58, v55); /*0x100ae4b9d*/
            }
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v60); /*0x100ae4ba9*/
            v6 = 0; /*0x100ae4bae*/
          }
          rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x100ae4bcb*/
            &v60,
            v33,
            "SELECT source FROM threads WHERE COALESCE(archived, 0) = 0 AND model_provider = ?1/payload/model_reasoning_effortmedium",
            82);
          if ( v60.i8[0] ) /*0x100ae4bd7*/
          {
            *((_QWORD *)&v56[3] + 1) = v61; /*0x100ae4be5*/
            *(_OWORD *)((char *)&v56[2] + 8) = v60.i128[3]; /*0x100ae4bfb*/
            *(_OWORD *)((char *)&v56[1] + 8) = v60.i128[2]; /*0x100ae4c11*/
            *(_OWORD *)((char *)v56 + 8) = v60.i128[1]; /*0x100ae4c2a*/
            *(_QWORD *)&v56[0] = v60.i64[1]; /*0x100ae4c31*/
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae4c46*/
            {
              v42 = (_OWORD **)v56; /*0x100ae4c53*/
              v43 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ae4c61*/
              *(_QWORD *)&v55[3] = 2; /*0x100ae4c68*/
              *((_QWORD *)&v55[3] + 1) = &unk_10167D5D6; /*0x100ae4c7a*/
              *(_QWORD *)&v55[4] = 51; /*0x100ae4c81*/
              *(_QWORD *)&v55[5] = &unk_1017CAE9E; /*0x100ae4c93*/
              *((_QWORD *)&v55[5] + 1) = &v42; /*0x100ae4ca1*/
              *(_QWORD *)&v55[0] = 0; /*0x100ae4ca8*/
              *((_QWORD *)&v55[0] + 1) = &unk_10167D5D6; /*0x100ae4cb3*/
              v55[1] = 0x33u; /*0x100ae4cba*/
              *(_QWORD *)&v55[2] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae4cd7*/
              *((_QWORD *)&v55[2] + 1) = 41; /*0x100ae4cde*/
              *((_QWORD *)&v55[4] + 1) = 0x17E00000001LL; /*0x100ae4cf3*/
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v58, v55); /*0x100ae4d08*/
            }
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v56); /*0x100ae4d14*/
            core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v33); /*0x100ae4d20*/
            goto LABEL_49; /*0x100ae4d20*/
          }
          v48 = v6; /*0x100ae4d2c*/
          v54 = (sqlite3_stmt *)v61; /*0x100ae4d3b*/
          v53 = v60.i128[3]; /*0x100ae4d51*/
          v52 = v60.i128[2]; /*0x100ae4d67*/
          v17 = (_QWORD *)v60.i64[1]; /*0x100ae4d79*/
          v51 = v60.i128[1]; /*0x100ae4d80*/
          v50 = (_OWORD *)v60.i64[1]; /*0x100ae4d87*/
          v18 = (sqlite3_stmt *)v61; /*0x100ae4d8e*/
          v19 = sqlite3_bind_parameter_count((sqlite3_stmt *)v61); /*0x100ae4d98*/
          v20 = 0x8000000000000013LL; /*0x100ae4d9d*/
          if ( v19 ) /*0x100ae4da3*/
          {
            v46 = v19; /*0x100ae4da9*/
            v39 = 0x8000000000000013LL; /*0x100ae4daf*/
            v21 = sqlite3_bind_text64( /*0x100ae4dd7*/
                    v18,
                    1,
                    &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_732,
                    6u,
                    (void (__cdecl *)(void *))0xFFFFFFFFFFFFFFFFLL,
                    1u);
            if ( *v17 >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x100ae4de6*/
              core::cell::panic_already_mutably_borrowed::h333111125182db63(&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1546); /*0x100ae539b*/
            ++*v17; /*0x100ae4def*/
            rusqlite::error::decode_result_raw::h0a038d2a8c5fdb22(v55, v17[2], v21); /*0x100ae4dff*/
            --*v17; /*0x100ae4e04*/
            v6 = v48; /*0x100ae4e1b*/
            v20 = v39; /*0x100ae4e22*/
            if ( *(_QWORD *)&v55[0] == 0x8000000000000016LL ) /*0x100ae4e29*/
            {
              if ( v46 == 1 ) /*0x100ae4e38*/
              {
                v42 = &v50; /*0x100ae4e45*/
                v43 = nullptr; /*0x100ae4e4c*/
                v5 = 0; /*0x100ae4e57*/
                while ( 1 ) /*0x100ae4e6e*/
                {
                  _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x100ae4e6e*/
                    v55,
                    &v42);
                  v6 = v48; /*0x100ae4e73*/
                  v23 = *(_QWORD *)&v55[0]; /*0x100ae4e7a*/
                  if ( *(_QWORD *)&v55[0] != 0x8000000000000016LL ) /*0x100ae4e8e*/
                    break; /*0x100ae4e8e*/
                  if ( !v43 ) /*0x100ae4e9c*/
                  {
                    core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v42); /*0x100ae52ea*/
                    goto LABEL_73; /*0x100ae52ef*/
                  }
                  rusqlite::row::Row::get::hcedcbe2f57af1c50(v55, &v43, 0, v22); /*0x100ae4eb2*/
                  v24 = *((_QWORD *)&v55[0] + 1); /*0x100ae4ebe*/
                  v23 = *(_QWORD *)&v55[0]; /*0x100ae4ebe*/
                  v25 = *((_QWORD *)&v55[1] + 1); /*0x100ae4ec5*/
                  if ( *(_QWORD *)&v55[0] == 0x8000000000000016LL ) /*0x100ae4ed9*/
                  {
                    v26 = *(_QWORD *)&v55[1]; /*0x100ae4ee6*/
                    if ( *((_QWORD *)&v55[0] + 1) == v40 ) /*0x100ae4ef2*/
                    {
                      v26 = 1; /*0x100ae4ef2*/
                      v24 = 0; /*0x100ae4efb*/
                    }
                    v5 += (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100ae4f1c*/
                                             "\"subagent\"threadsupdated_at_msCOALESCE(updated_at_ms, 0)updated_atCOALESC"
                                             "E(updated_at, 0)0codexmate_lib::core::relay::codex_project_stateprojectless"
                                             "-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoin"
                                             "t(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
                                             0xAu,
                                             (void *)v26)
                        ^ 1u;
                    if ( v24 ) /*0x100ae4f22*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v24, 1); /*0x100ae4f33*/
                  }
                  else
                  {
                    v27 = *(_QWORD *)&v55[1]; /*0x100ae4f90*/
                    *(_QWORD *)&v56[0] = *(_QWORD *)&v55[2]; /*0x100ae4fa6*/
                    *(_OWORD *)((char *)v56 + 8) = *(_OWORD *)((char *)&v55[2] + 8); /*0x100ae4fad*/
                    *((_QWORD *)&v56[1] + 1) = *((_QWORD *)&v55[3] + 1); /*0x100ae4fc3*/
LABEL_64:
                    v60.i64[7] = *((_QWORD *)&v56[1] + 1); /*0x100ae4fca*/
                    *(__int128 *)((char *)&v60.i128[2] + 8) = *(_OWORD *)((char *)v56 + 8); /*0x100ae4ff2*/
                    v60.i64[4] = *(_QWORD *)&v56[0]; /*0x100ae4ff6*/
                    v60.i64[0] = v23; /*0x100ae4ffa*/
                    v60.i64[1] = v24; /*0x100ae5001*/
                    v60.i128[1] = __PAIR128__(v25, v27); /*0x100ae5008*/
                    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae501e*/
                    {
                      *(_QWORD *)&v56[0] = &v60; /*0x100ae502b*/
                      *((_QWORD *)&v56[0] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ae5039*/
                      *(_QWORD *)&v55[3] = 2; /*0x100ae5040*/
                      *((_QWORD *)&v55[3] + 1) = &unk_10167D5D6; /*0x100ae5052*/
                      *(_QWORD *)&v55[4] = 51; /*0x100ae5059*/
                      *(_QWORD *)&v55[5] = &unk_1017CAE2F; /*0x100ae506b*/
                      *((_QWORD *)&v55[5] + 1) = v56; /*0x100ae5079*/
                      *(_QWORD *)&v55[0] = 0; /*0x100ae5080*/
                      *((_QWORD *)&v55[0] + 1) = &unk_10167D5D6; /*0x100ae508b*/
                      v55[1] = 0x33u; /*0x100ae5092*/
                      *(_QWORD *)&v55[2] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae50af*/
                      *((_QWORD *)&v55[2] + 1) = 41; /*0x100ae50b6*/
                      *((_QWORD *)&v55[4] + 1) = 0x19500000001LL; /*0x100ae50cb*/
                      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v58, v55); /*0x100ae50e0*/
                    }
                    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v60); /*0x100ae50ec*/
                    ++v5; /*0x100ae50f1*/
                  }
                }
                v27 = *(_QWORD *)&v55[1]; /*0x100ae4f47*/
                v24 = *((_QWORD *)&v55[0] + 1); /*0x100ae4f47*/
                v25 = *((_QWORD *)&v55[1] + 1); /*0x100ae4f4e*/
                *((_QWORD *)&v56[1] + 1) = *((_QWORD *)&v55[3] + 1); /*0x100ae4f60*/
                *(_OWORD *)((char *)v56 + 8) = *(_OWORD *)((char *)&v55[2] + 8); /*0x100ae4f7a*/
                *(_QWORD *)&v56[0] = *(_QWORD *)&v55[2]; /*0x100ae4f81*/
                goto LABEL_64; /*0x100ae4f88*/
              }
              inserted = _mm_insert_epi64(_mm_cvtsi32_si128(1u), v46, 1); /*0x100ae515f*/
            }
            else
            {
              inserted = _mm_loadu_si128((const __m128i *)((char *)v55 + 8)); /*0x100ae510a*/
              *(_QWORD *)&v56[0] = *((_QWORD *)&v55[1] + 1); /*0x100ae5121*/
              *(_OWORD *)((char *)v56 + 8) = v55[2]; /*0x100ae5128*/
              *(_OWORD *)((char *)&v56[1] + 8) = v55[3]; /*0x100ae513e*/
              v20 = *(_QWORD *)&v55[0]; /*0x100ae5150*/
            }
          }
          else
          {
            inserted = _mm_cvtsi32_si128(1u); /*0x100ae50f9*/
            v6 = v48; /*0x100ae5101*/
          }
          v60.i64[7] = *(_QWORD *)&v56[2]; /*0x100ae5171*/
          *(__int128 *)((char *)&v60.i128[2] + 8) = v56[1]; /*0x100ae5187*/
          *(__int128 *)((char *)&v60.i128[1] + 8) = v56[0]; /*0x100ae519d*/
          v60.i64[0] = v20; /*0x100ae51a1*/
          *(__m128i *)&v60.u32[2] = inserted; /*0x100ae51a8*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae51c8*/
          {
            *(_QWORD *)&v56[0] = &v60; /*0x100ae51d5*/
            *((_QWORD *)&v56[0] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ae51e3*/
            *(_QWORD *)&v55[3] = 2; /*0x100ae51ea*/
            *((_QWORD *)&v55[3] + 1) = &unk_10167D5D6; /*0x100ae51fc*/
            *(_QWORD *)&v55[4] = 51; /*0x100ae5203*/
            *(_QWORD *)&v55[5] = &unk_1017CAE69; /*0x100ae5215*/
            *((_QWORD *)&v55[5] + 1) = v56; /*0x100ae5223*/
            *(_QWORD *)&v55[0] = 0; /*0x100ae522a*/
            *((_QWORD *)&v55[0] + 1) = &unk_10167D5D6; /*0x100ae5235*/
            v55[1] = 0x33u; /*0x100ae523c*/
            *(_QWORD *)&v55[2] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae5259*/
            *((_QWORD *)&v55[2] + 1) = 41; /*0x100ae5260*/
            *((_QWORD *)&v55[4] + 1) = 0x19F00000001LL; /*0x100ae5275*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v58, v55); /*0x100ae528a*/
          }
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v60); /*0x100ae5296*/
          v5 = 0; /*0x100ae529b*/
LABEL_73:
          core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v50); /*0x100ae529d*/
          core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v33); /*0x100ae52b0*/
          goto LABEL_74; /*0x100ae52b0*/
        }
      }
    }
    else
    {
      v9 = 1; /*0x100ae48cd*/
    }
    v10 = v7; /*0x100ae48d2*/
    if ( v9 != v7 ) /*0x100ae48d8*/
    {
      v8 = 0x8000000000000013LL; /*0x100ae4952*/
      goto LABEL_32; /*0x100ae4952*/
    }
    v58 = v56; /*0x100ae48e1*/
    v59 = 0; /*0x100ae48e8*/
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x100ae4901*/
      v55,
      &v58);
    v15 = *(_QWORD *)&v55[0]; /*0x100ae4910*/
    if ( *(_QWORD *)&v55[0] == 0x8000000000000016LL ) /*0x100ae491a*/
    {
      if ( v59 ) /*0x100ae4928*/
      {
        rusqlite::row::Row::get::h100bc309f48de08a(&v50, &v59, 0, 0x8000000000000016LL); /*0x100ae493e*/
LABEL_36:
        core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v58); /*0x100ae4a40*/
        goto LABEL_37; /*0x100ae4a47*/
      }
      v15 = 0x8000000000000009LL; /*0x100ae49eb*/
      v16 = &v59; /*0x100ae49ef*/
    }
    else
    {
      v60.i64[0] = *(_QWORD *)&v55[1]; /*0x100ae49bb*/
      v16 = *((__int64 **)&v55[0] + 1); /*0x100ae49bb*/
      *(__int128 *)((char *)v60.i128 + 8) = *(_OWORD *)((char *)&v55[1] + 8); /*0x100ae49c2*/
      v60.i64[3] = *((_QWORD *)&v55[2] + 1); /*0x100ae49d5*/
      v60.i128[2] = v55[3]; /*0x100ae49e5*/
    }
    v50 = (_OWORD *)v15; /*0x100ae49f6*/
    *(_QWORD *)&v51 = v16; /*0x100ae49fd*/
    v54 = (sqlite3_stmt *)v60.i64[5]; /*0x100ae4a0f*/
    v53 = *(__int128 *)((char *)&v60.i128[1] + 8); /*0x100ae4a1f*/
    v52 = *(__int128 *)((char *)v60.i128 + 8); /*0x100ae4a39*/
    *((_QWORD *)&v51 + 1) = v60.i64[0]; /*0x100ae4a3d*/
    goto LABEL_36; /*0x100ae4a3d*/
  }
  v49 = 0; /*0x100ae52f1*/
  v3 = 0; /*0x100ae52fc*/
LABEL_78:
  if ( (__int64 *)v41 != v1 ) /*0x100ae531c*/
  {
    v29 = (v41 - (__int64)v1) / 0x18uLL; /*0x100ae5321*/
    v30 = v1 + 1; /*0x100ae5325*/
    do /*0x100ae5337*/
    {
      v31 = *(v30 - 1); /*0x100ae5339*/
      if ( v31 ) /*0x100ae5341*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v30, v31, 1); /*0x100ae534c*/
      v30 += 3; /*0x100ae5330*/
      --v29; /*0x100ae5334*/
    }
    while ( v29 ); /*0x100ae5337*/
  }
LABEL_83:
  if ( (_QWORD)v38 ) /*0x100ae535d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v38 + 1), 24 * v38, 8); /*0x100ae5373*/
  return v3; /*0x100ae5382*/
}