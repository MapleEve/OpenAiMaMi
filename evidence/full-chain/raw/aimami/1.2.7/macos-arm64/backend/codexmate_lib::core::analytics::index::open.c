// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::open::h0b002a90e8a0a409; addr: 0x10089b870; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
void __fastcall codexmate_lib::core::analytics::index::open::h0b002a90e8a0a409(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int128 v8; // kr00_16
  __int64 v9; // r15
  unsigned __int128 v10; // kr10_16
  __int64 v11; // r12
  __m128i v12; // xmm1
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rcx
  __m256i *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r14
  __m128i v26; // xmm0
  __int128 v27; // kr30_16
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rax
  _QWORD *v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // r14
  void *v35; // rax
  __m128i v36; // [rsp+0h] [rbp-3A0h] BYREF
  __m256i v37; // [rsp+10h] [rbp-390h] BYREF
  __int128 v38; // [rsp+30h] [rbp-370h]
  __int128 v39; // [rsp+40h] [rbp-360h]
  __m256i v40; // [rsp+50h] [rbp-350h] BYREF
  __int128 v41; // [rsp+70h] [rbp-330h]
  __int128 v42; // [rsp+80h] [rbp-320h]
  _QWORD v43[2]; // [rsp+90h] [rbp-310h] BYREF
  __m128i v44; // [rsp+A0h] [rbp-300h]
  __int64 v45; // [rsp+B0h] [rbp-2F0h]
  __int128 v46; // [rsp+B8h] [rbp-2E8h]
  __int64 v47; // [rsp+C8h] [rbp-2D8h]
  __int128 v48; // [rsp+D0h] [rbp-2D0h] BYREF
  __m256i v49; // [rsp+E0h] [rbp-2C0h]
  __int128 v50; // [rsp+100h] [rbp-2A0h]
  __m256i v51[2]; // [rsp+110h] [rbp-290h] BYREF
  __m128i v52; // [rsp+150h] [rbp-250h]
  _OWORD v53[7]; // [rsp+168h] [rbp-238h] BYREF
  __int64 v54; // [rsp+1D8h] [rbp-1C8h]
  __m128i v55; // [rsp+1E0h] [rbp-1C0h] BYREF
  __int64 v56; // [rsp+1F8h] [rbp-1A8h]
  __m128i v57; // [rsp+200h] [rbp-1A0h]
  __int64 v58; // [rsp+210h] [rbp-190h]
  __m256i *v59; // [rsp+218h] [rbp-188h] BYREF
  _QWORD v60[2]; // [rsp+220h] [rbp-180h] BYREF
  __m256i v61; // [rsp+230h] [rbp-170h] BYREF
  __int128 v62; // [rsp+250h] [rbp-150h] BYREF
  _BYTE v63[48]; // [rsp+260h] [rbp-140h]
  __m256i v64; // [rsp+290h] [rbp-110h] BYREF
  __int128 v65; // [rsp+2B0h] [rbp-F0h]
  __int64 v66; // [rsp+2C0h] [rbp-E0h]
  sqlite3_stmt *v67; // [rsp+2C8h] [rbp-D8h]
  __int64 v68; // [rsp+2D0h] [rbp-D0h]
  __m256i v69[3]; // [rsp+2D8h] [rbp-C8h] BYREF
  __m512i v70; // [rsp+338h] [rbp-68h] BYREF

  LOWORD(v53[0]) = 511; /*0x10089b88d*/
  BYTE2(v53[0]) = 1; /*0x10089b896*/
  v5 = std::fs::DirBuilder::_create::h099c6e2853c95452(v53, a2); /*0x10089b8a4*/
  if ( v5 ) /*0x10089b8ac*/
  {
    *(_QWORD *)a1 = 2; /*0x10089b8ae*/
    *(_QWORD *)(a1 + 8) = v5; /*0x10089b8b5*/
    *(_BYTE *)(a1 + 104) = 3; /*0x10089b8b9*/
    return; /*0x10089b8bd*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10089b8dc*/
    &v59,
    a2,
    a3,
    "analytics-v3.sqliteuser_versionforeign_keysONPRAGMA journal_mode=WAL;\n         CREATE TABLE IF NOT EXISTS files (\n           path TEXT PRIMARY KEY, fingerprint TEXT NOT NULL, state TEXT NOT NULL,\n           offset INTEGER NOT NULL, ordinal INTEGER NOT NULL, complete INTEGER NOT NULL,\n           thread_id TEXT NOT NULL, subagent INTEGER NOT NULL, incomplete INTEGER NOT NULL,\n           failed INTEGER NOT NULL DEFAULT 0, rollout_id TEXT NOT NULL);\n         CREATE TABLE IF NOT EXISTS facts (\n           source TEXT NOT NULL REFERENCES files(path) ON DELETE CASCADE,\n           key TEXT NOT NULL, thread_id TEXT NOT NULL, turn_id TEXT NOT NULL,\n           ts INTEGER NOT NULL, kind TEXT NOT NULL, priority INTEGER NOT NULL,\n           data TEXT NOT NULL,\n           PRIMARY KEY(source,key));\n         CREATE INDEX IF NOT EXISTS facts_identity ON facts(key,priority DESC,source);\n         CREATE TABLE IF NOT EXISTS meta (key TEXT PRIMARY KEY,value INTEGER NOT NULL);\n         PRAGMA user_version=3;",
    19);
  v6 = v60[0]; /*0x10089b8e1*/
  rusqlite::path_to_cstring::h3a6b3c588767bae1(v69, v60[0], v60[1]); /*0x10089b8f9*/
  v7 = v69[0].i64[0]; /*0x10089b908*/
  v8 = *(__int128 *)((char *)v69[0].i128 + 8); /*0x10089b916*/
  if ( v69[0].i64[0] != 0x8000000000000016LL ) /*0x10089b920*/
  {
    v68 = a1; /*0x10089ba11*/
    v55.i64[0] = v69[0].i64[1]; /*0x10089ba18*/
    v14 = v69[0].i64[3]; /*0x10089ba1f*/
    v15 = v69[1].i64[0]; /*0x10089ba26*/
    v64.i128[0] = *(__int128 *)((char *)v69[1].i128 + 8); /*0x10089ba34*/
    v64.i64[2] = v69[1].i64[3]; /*0x10089ba50*/
    if ( v59 ) /*0x10089ba61*/
    {
      v16 = v69[1].i64[0]; /*0x10089ba68*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v59, 1); /*0x10089ba6e*/
      v15 = v16; /*0x10089ba73*/
    }
    v12 = _mm_unpacklo_epi64((__m128i)*((unsigned __int64 *)&v8 + 1), (__m128i)(unsigned __int64)v14); /*0x10089ba80*/
    v17 = v55.i64[0]; /*0x10089ba84*/
    goto LABEL_22; /*0x10089ba8b*/
  }
  v10 = *(unsigned __int128 *)((char *)v69[0].u128 + 8); /*0x10089b930*/
  v68 = v10 >> 64; /*0x10089b930*/
  v9 = v10; /*0x10089b930*/
  rusqlite::inner_connection::InnerConnection::open_with_flags::h3a2e27052a583d8e( /*0x10089b942*/
    v69,
    v69[0].i64[1],
    v69[0].i64[2],
    32838,
    0);
  v11 = v69[0].i64[0]; /*0x10089b947*/
  if ( v69[0].i64[0] == 0x8000000000000016LL ) /*0x10089b95b*/
  {
    v70.i128[1] = v69[0].i128[1]; /*0x10089b977*/
    v70.i64[1] = v69[0].i64[1]; /*0x10089b97b*/
    v70.i64[0] = 0; /*0x10089b97f*/
    v54 = foldhash::seed::gen_per_hasher_seed::h01eea3e643df83bd(); /*0x10089b98c*/
    if ( byte_101B4DF20 != 2 ) /*0x10089b9a0*/
      foldhash::seed::global::GlobalSeed::init_slow::h7823214f07caac7d(); /*0x10089c61f*/
    v58 = v70.i64[1]; /*0x10089b9ae*/
    v7 = v70.i64[0]; /*0x10089b9ae*/
    v12 = _mm_loadu_si128((const __m128i *)&v70.u128[1]); /*0x10089b9b5*/
    v36 = 0; /*0x10089b9be*/
    v64.i64[0] = (__int64)&xmmword_1016F24C0; /*0x10089b9cd*/
    memset(&v64.u32[2], 0, 24); /*0x10089b9db*/
    v56 = 0; /*0x10089b9fe*/
    v13 = 0; /*0x10089ba09*/
  }
  else
  {
    v58 = v69[0].i64[1]; /*0x10089ba97*/
    v12 = _mm_loadu_si128((const __m128i *)&v69[0].u128[1]); /*0x10089ba9e*/
    v13 = v69[1].i64[0]; /*0x10089baa6*/
    v64.i128[0] = *(__int128 *)((char *)v69[1].i128 + 8); /*0x10089bab4*/
    v18 = v69[1].i64[3]; /*0x10089bac9*/
    v64.i64[2] = v69[1].i64[3]; /*0x10089bad0*/
    LOBYTE(v18) = 3; /*0x10089bad7*/
    v56 = v18; /*0x10089bad9*/
    v7 = v69[0].i64[0]; /*0x10089bae0*/
  }
  *(_BYTE *)v8 = 0; /*0x10089bae3*/
  v55 = v12; /*0x10089baf1*/
  if ( v68 ) /*0x10089baf9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v68, 1); /*0x10089bb03*/
    v12 = _mm_load_si128(&v55); /*0x10089bb08*/
  }
  if ( v59 ) /*0x10089bb1a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60[0], v59, 1); /*0x10089bb28*/
    v12 = _mm_load_si128(&v55); /*0x10089bb2d*/
  }
  if ( v11 != 0x8000000000000016LL ) /*0x10089bb42*/
  {
    v68 = a1; /*0x10089bd92*/
    v17 = v58; /*0x10089bd99*/
    v15 = v13; /*0x10089bda0*/
LABEL_22:
    v43[0] = v7; /*0x10089bda3*/
    v43[1] = v17; /*0x10089bdaa*/
    v44 = v12; /*0x10089bdb1*/
    v45 = v15; /*0x10089bdb9*/
    v46 = v64.i128[0]; /*0x10089bdce*/
    v47 = v64.i64[2]; /*0x10089bde3*/
    v70.i64[0] = (__int64)v43; /*0x10089bdf1*/
    v70.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089bdfc*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v69, &unk_101902300, &v70); /*0x10089be12*/
    v25 = v69[0].i64[0]; /*0x10089be17*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v43); /*0x10089be25*/
    v26 = _mm_loadu_si128((const __m128i *)&v69[0].u32[2]); /*0x10089be2a*/
    v61.i128[1] = *(_OWORD *)v63; /*0x10089be39*/
    v27 = v62; /*0x10089be47*/
    v61.i128[0] = v62; /*0x10089be55*/
    v57 = v52; /*0x10089be78*/
    v28 = v68; /*0x10089be86*/
    *(_OWORD *)(v68 + 56) = *(_OWORD *)v63; /*0x10089be91*/
    *(_OWORD *)(v28 + 40) = v27; /*0x10089be99*/
    *(__m128i *)(v28 + 80) = v57; /*0x10089beaf*/
    *(_QWORD *)v28 = 10; /*0x10089beb3*/
    *(_QWORD *)(v28 + 8) = v25; /*0x10089beba*/
    *(__m128i *)(v28 + 16) = v26; /*0x10089bebe*/
    *(_BYTE *)(v28 + 104) = 3; /*0x10089bec3*/
    return; /*0x10089bec7*/
  }
  *(_OWORD *)v63 = v64.i128[1]; /*0x10089bb5d*/
  v19 = _mm_load_si128(&v36); /*0x10089bb72*/
  v52 = v19; /*0x10089bb7a*/
  v61 = v64; /*0x10089bb82*/
  v57 = v19; /*0x10089bb9e*/
  *(__m256i *)((char *)&v53[2] + 8) = v64; /*0x10089bbbb*/
  v53[5] = v19; /*0x10089bbf3*/
  *(_QWORD *)&v53[0] = v7; /*0x10089bbfa*/
  *((_QWORD *)&v53[0] + 1) = v58; /*0x10089bc08*/
  v53[1] = v12; /*0x10089bc0f*/
  *(_QWORD *)&v53[2] = v13; /*0x10089bc17*/
  *((_QWORD *)&v53[4] + 1) = v54; /*0x10089bc25*/
  *(_QWORD *)&v53[6] = 16; /*0x10089bc2c*/
  BYTE8(v53[6]) = v56; /*0x10089bc3e*/
  rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v69, v53, 0, 500000000); /*0x10089bc59*/
  if ( v69[0].i64[0] != 0x8000000000000016LL ) /*0x10089bc65*/
  {
    v51[1] = v69[1]; /*0x10089bee1*/
    v51[0] = v69[0]; /*0x10089bf19*/
    v64.i64[0] = (__int64)v51; /*0x10089bf43*/
    v64.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089bf51*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v70, &unk_101902300, &v64); /*0x10089bf6a*/
    v64.i128[0] = v70.i128[0]; /*0x10089bf77*/
    v64.i64[2] = v70.i64[2]; /*0x10089bf89*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v51); /*0x10089bf97*/
    *(_QWORD *)(a1 + 24) = v64.i64[2]; /*0x10089bfa3*/
    *(_OWORD *)(a1 + 8) = v64.i128[0]; /*0x10089bfb9*/
    *(_QWORD *)a1 = 10; /*0x10089bfbd*/
    goto LABEL_56; /*0x10089bfc4*/
  }
  v61.i64[0] = 0; /*0x10089bc6b*/
  *(__int128 *)((char *)v61.i128 + 8) = 1u; /*0x10089bc76*/
  v21 = v69; /*0x10089bc93*/
  rusqlite::pragma::Sql::push_pragma::hc6d58b8448278711( /*0x10089bca9*/
    v69,
    &v61,
    0,
    v20,
    "user_versionforeign_keysONPRAGMA journal_mode=WAL;\n         CREATE TABLE IF NOT EXISTS files (\n           path TEXT PRIMARY KEY, fingerprint TEXT NOT NULL, state TEXT NOT NULL,\n           offset INTEGER NOT NULL, ordinal INTEGER NOT NULL, complete INTEGER NOT NULL,\n           thread_id TEXT NOT NULL, subagent INTEGER NOT NULL, incomplete INTEGER NOT NULL,\n           failed INTEGER NOT NULL DEFAULT 0, rollout_id TEXT NOT NULL);\n         CREATE TABLE IF NOT EXISTS facts (\n           source TEXT NOT NULL REFERENCES files(path) ON DELETE CASCADE,\n           key TEXT NOT NULL, thread_id TEXT NOT NULL, turn_id TEXT NOT NULL,\n           ts INTEGER NOT NULL, kind TEXT NOT NULL, priority INTEGER NOT NULL,\n           data TEXT NOT NULL,\n           PRIMARY KEY(source,key));\n         CREATE INDEX IF NOT EXISTS facts_identity ON facts(key,priority DESC,source);\n         CREATE TABLE IF NOT EXISTS meta (key TEXT PRIMARY KEY,value INTEGER NOT NULL);\n         PRAGMA user_version=3;",
    12,
    v36.i64[0],
    v36.i64[1]);
  if ( v69[0].i64[0] != 0x8000000000000016LL ) /*0x10089bcb5*/
  {
    *(__m256i *)&v63[16] = v69[1]; /*0x10089bfde*/
    *(_OWORD *)v63 = v69[0].i128[1]; /*0x10089c016*/
    v24 = v69[0].i64[1]; /*0x10089c024*/
    v23 = v69[0].i64[0]; /*0x10089c024*/
    goto LABEL_25; /*0x10089c024*/
  }
  v21 = v69; /*0x10089bcc9*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v69, v53, v61.i64[1], v61.i64[2]); /*0x10089bcd7*/
  *(__m256i *)v70.i8 = *(__m256i *)((char *)v69 + 8); /*0x10089bce9*/
  v70.i128[2] = *(__int128 *)((char *)v69[1].i128 + 8); /*0x10089bd15*/
  v70.i128[3] = *(__int128 *)((char *)&v69[1].i128[1] + 8); /*0x10089bd2b*/
  if ( v69[0].i32[0] == 1 ) /*0x10089bd3d*/
  {
    *(_OWORD *)&v63[32] = v70.i128[3]; /*0x10089bd52*/
    *(__m256i *)v63 = *(__m256i *)&v70.u128[1]; /*0x10089bd68*/
    v24 = v70.i64[1]; /*0x10089bd89*/
    v23 = v70.i64[0]; /*0x10089bd89*/
LABEL_25:
    *((_QWORD *)&v62 + 1) = v24; /*0x10089c02b*/
    *(_QWORD *)&v62 = v23; /*0x10089c032*/
    goto LABEL_36; /*0x10089c039*/
  }
  v67 = (sqlite3_stmt *)v70.i64[7]; /*0x10089c042*/
  v66 = v70.i64[6]; /*0x10089c04d*/
  v65 = v70.i128[2]; /*0x10089c063*/
  v64 = *(__m256i *)v70.i8; /*0x10089c079*/
  v29 = sqlite3_bind_parameter_count((sqlite3_stmt *)v70.i64[7]); /*0x10089c09d*/
  if ( !v29 ) /*0x10089c0a4*/
  {
    v59 = &v64; /*0x10089c0d1*/
    v60[0] = 0; /*0x10089c0d8*/
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10089c0f1*/
      v69,
      &v59);
    v30 = v69[0].i64[0]; /*0x10089c0f6*/
    if ( v69[0].i64[0] == 0x8000000000000016LL ) /*0x10089c100*/
    {
      v31 = v60; /*0x10089c102*/
      if ( v60[0] ) /*0x10089c111*/
      {
        rusqlite::row::Row::get::h36ab96ba55e8751f(&v62, v60, 0, &off_101AB6C48); /*0x10089c123*/
LABEL_34:
        core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h2239e9987ac3b07a(&v59); /*0x10089c1cc*/
        goto LABEL_35; /*0x10089c1d3*/
      }
      v30 = 0x8000000000000009LL; /*0x10089c178*/
    }
    else
    {
      v31 = (_QWORD *)v69[0].i64[1]; /*0x10089c12d*/
      *(__m256i *)v70.i8 = *(__m256i *)((char *)v69 + 16); /*0x10089c13b*/
      v70.i128[2] = v69[1].i128[1]; /*0x10089c167*/
    }
    *(_QWORD *)&v62 = v30; /*0x10089c17c*/
    *((_QWORD *)&v62 + 1) = v31; /*0x10089c183*/
    *(__m256i *)v63 = *(__m256i *)v70.i8; /*0x10089c192*/
    *(_OWORD *)&v63[32] = v70.i128[2]; /*0x10089c1ba*/
    goto LABEL_34; /*0x10089c1ba*/
  }
  v62 = 0x8000000000000013LL; /*0x10089c0ac*/
  *(_QWORD *)v63 = v29; /*0x10089c0be*/
LABEL_35:
  v21 = &v64; /*0x10089c1d8*/
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(&v64); /*0x10089c1df*/
LABEL_36:
  v32 = v61.i64[0]; /*0x10089c1e4*/
  if ( v61.i64[0] ) /*0x10089c1ee*/
  {
    v21 = (__m256i *)v61.i64[1]; /*0x10089c1f0*/
    *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61.i64[1], v61.i64[0], 1); /*0x10089c1fc*/
  }
  if ( (_QWORD)v62 == 0x8000000000000016LL ) /*0x10089c208*/
  {
    v33 = *((_QWORD *)&v62 + 1); /*0x10089c20e*/
    if ( *((_QWORD *)&v62 + 1) != 3 && *((_QWORD *)&v62 + 1) ) /*0x10089c21e*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v32, v22); /*0x10089c498*/
      v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x10089c4a7*/
      if ( !v35 ) /*0x10089c4af*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x10089c633*/
      qmemcpy(v35, "unsupported analytics cache version", 35); /*0x10089c4e9*/
      *(_QWORD *)a1 = 9; /*0x10089c4f3*/
      *(_QWORD *)(a1 + 8) = 35; /*0x10089c4fa*/
      *(_QWORD *)(a1 + 16) = v35; /*0x10089c502*/
      *(_QWORD *)(a1 + 24) = 35; /*0x10089c506*/
    }
    else
    {
      *(_QWORD *)&v62 = "ONPRAGMA journal_mode=WAL;\n         CREATE TABLE IF NOT EXISTS files (\n           path TEXT PRIMARY KEY, fingerprint TEXT NOT NULL, state TEXT NOT NULL,\n           offset INTEGER NOT NULL, ordinal INTEGER NOT NULL, complete INTEGER NOT NULL,\n           thread_id TEXT NOT NULL, subagent INTEGER NOT NULL, incomplete INTEGER NOT NULL,\n           failed INTEGER NOT NULL DEFAULT 0, rollout_id TEXT NOT NULL);\n         CREATE TABLE IF NOT EXISTS facts (\n           source TEXT NOT NULL REFERENCES files(path) ON DELETE CASCADE,\n           key TEXT NOT NULL, thread_id TEXT NOT NULL, turn_id TEXT NOT NULL,\n           ts INTEGER NOT NULL, kind TEXT NOT NULL, priority INTEGER NOT NULL,\n           data TEXT NOT NULL,\n           PRIMARY KEY(source,key));\n         CREATE INDEX IF NOT EXISTS facts_identity ON facts(key,priority DESC,source);\n         CREATE TABLE IF NOT EXISTS meta (key TEXT PRIMARY KEY,value INTEGER NOT NULL);\n         PRAGMA user_version=3;"; /*0x10089c22b*/
      *((_QWORD *)&v62 + 1) = 2; /*0x10089c232*/
      v64.i64[0] = 0; /*0x10089c23d*/
      *(__int128 *)((char *)v64.i128 + 8) = 1u; /*0x10089c248*/
      rusqlite::pragma::Sql::push_pragma::hc6d58b8448278711( /*0x10089c27b*/
        v69,
        &v64,
        0,
        v24,
        "foreign_keysONPRAGMA journal_mode=WAL;\n         CREATE TABLE IF NOT EXISTS files (\n           path TEXT PRIMARY KEY, fingerprint TEXT NOT NULL, state TEXT NOT NULL,\n           offset INTEGER NOT NULL, ordinal INTEGER NOT NULL, complete INTEGER NOT NULL,\n           thread_id TEXT NOT NULL, subagent INTEGER NOT NULL, incomplete INTEGER NOT NULL,\n           failed INTEGER NOT NULL DEFAULT 0, rollout_id TEXT NOT NULL);\n         CREATE TABLE IF NOT EXISTS facts (\n           source TEXT NOT NULL REFERENCES files(path) ON DELETE CASCADE,\n           key TEXT NOT NULL, thread_id TEXT NOT NULL, turn_id TEXT NOT NULL,\n           ts INTEGER NOT NULL, kind TEXT NOT NULL, priority INTEGER NOT NULL,\n           data TEXT NOT NULL,\n           PRIMARY KEY(source,key));\n         CREATE INDEX IF NOT EXISTS facts_identity ON facts(key,priority DESC,source);\n         CREATE TABLE IF NOT EXISTS meta (key TEXT PRIMARY KEY,value INTEGER NOT NULL);\n         PRAGMA user_version=3;",
        12,
        v36.i64[0],
        v36.i64[1]);
      if ( v69[0].i64[0] == 0x8000000000000016LL /*0x10089c2c1*/
        && (rusqlite::pragma::Sql::push_equal_sign::h00c33c52f1e60b99(&v64, *(double *)v19.i64),
            rusqlite::pragma::Sql::push_value::h9d757808f7cc6ec6(v69, &v64, &v62, &unk_101AB6698),
            v69[0].i64[0] == 0x8000000000000016LL) )
      {
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(&v70, v53, v64.i64[1], v64.i64[2]); /*0x10089c2e0*/
      }
      else
      {
        *(__m256i *)&v70.u128[2] = v69[1]; /*0x10089c3e8*/
        *(__m256i *)v70.i8 = v69[0]; /*0x10089c414*/
      }
      if ( v64.i64[0] ) /*0x10089c438*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64.i64[1], v64.i64[0], 1); /*0x10089c446*/
      if ( v70.i64[0] == 0x8000000000000016LL ) /*0x10089c44f*/
      {
        if ( v33 == 3 /*0x10089c47b*/
          || (rusqlite::Connection::execute_batch::h4a2529fc120bbad7(
                &v70,
                v53,
                "PRAGMA journal_mode=WAL;\n         CREATE TABLE IF NOT EXISTS files (\n           path TEXT PRIMARY KEY, fingerprint TEXT NOT NULL, state TEXT NOT NULL,\n           offset INTEGER NOT NULL, ordinal INTEGER NOT NULL, complete INTEGER NOT NULL,\n           thread_id TEXT NOT NULL, subagent INTEGER NOT NULL, incomplete INTEGER NOT NULL,\n           failed INTEGER NOT NULL DEFAULT 0, rollout_id TEXT NOT NULL);\n         CREATE TABLE IF NOT EXISTS facts (\n           source TEXT NOT NULL REFERENCES files(path) ON DELETE CASCADE,\n           key TEXT NOT NULL, thread_id TEXT NOT NULL, turn_id TEXT NOT NULL,\n           ts INTEGER NOT NULL, kind TEXT NOT NULL, priority INTEGER NOT NULL,\n           data TEXT NOT NULL,\n           PRIMARY KEY(source,key));\n         CREATE INDEX IF NOT EXISTS facts_identity ON facts(key,priority DESC,source);\n         CREATE TABLE IF NOT EXISTS meta (key TEXT PRIMARY KEY,value INTEGER NOT NULL);\n         PRAGMA user_version=3;",
                954),
              v70.i64[0] == 0x8000000000000016LL) )
        {
          qmemcpy((void *)a1, v53, 0x70u); /*0x10089c490*/
          return; /*0x10089c490*/
        }
        v39 = v70.i128[3]; /*0x10089c5be*/
        v38 = v70.i128[2]; /*0x10089c5d4*/
        v37 = *(__m256i *)v70.i8; /*0x10089c5ea*/
        codexmate_lib::core::analytics::index::db_error::hf0ea913c862a7833(v69, (__int64)&v37); /*0x10089c615*/
      }
      else
      {
        v42 = v70.i128[3]; /*0x10089c51f*/
        v41 = v70.i128[2]; /*0x10089c535*/
        v40 = *(__m256i *)v70.i8; /*0x10089c54b*/
        codexmate_lib::core::analytics::index::db_error::hf0ea913c862a7833(v69, (__int64)&v40); /*0x10089c576*/
      }
      qmemcpy((void *)a1, v69, 0x60u); /*0x10089c58a*/
    }
  }
  else
  {
    v50 = *(_OWORD *)&v63[32]; /*0x10089c2ff*/
    v49 = *(__m256i *)v63; /*0x10089c31b*/
    v48 = v62; /*0x10089c353*/
    v69[0].i64[0] = (__int64)&v48; /*0x10089c361*/
    v69[0].i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089c36f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v70, &unk_101902300, v69); /*0x10089c388*/
    v69[0].i128[0] = *(__int128 *)((char *)v70.i128 + 8); /*0x10089c395*/
    v34 = v70.i64[0]; /*0x10089c395*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v48); /*0x10089c3ae*/
    qmemcpy((void *)(a1 + 16), v69, 0x50u); /*0x10089c3c3*/
    *(_QWORD *)a1 = 10; /*0x10089c3c6*/
    *(_QWORD *)(a1 + 8) = v34; /*0x10089c3cd*/
  }
LABEL_56:
  *(_BYTE *)(a1 + 104) = 3; /*0x10089c58d*/
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v53); /*0x10089c598*/
}