// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::Trace::event::hfde5f8d58d3d148d; addr: 0x1005d9c90; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::Trace::event::hfde5f8d58d3d148d(
        _QWORD *a1,
        char *a2,
        double a3)
{
  __int64 v4; // r13
  char *v5; // rdi
  int v6; // eax
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  signed __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // edx
  unsigned int v15; // ebx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r14
  unsigned int v27; // edx
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm1
  __int64 v32; // rax
  void *v33; // rax
  __int64 v34; // r14
  unsigned int v35; // edx
  unsigned int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  unsigned int v41; // edx
  unsigned __int128 v42; // kr10_16
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // r15
  _QWORD *v46; // rax
  __int64 v47; // rcx
  char v48; // al
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rax
  signed __int64 v56; // rsi
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v64; // rax
  unsigned __int8 *v65; // rsi
  __int64 v66; // rdx
  unsigned __int64 *v67; // rdi
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rcx
  __m128i v72; // xmm0
  char *v73; // [rsp+10h] [rbp-80h]
  char **v74; // [rsp+18h] [rbp-78h]
  __int64 v75; // [rsp+20h] [rbp-70h] BYREF
  signed __int64 v76; // [rsp+28h] [rbp-68h]
  __int64 v77; // [rsp+30h] [rbp-60h]
  signed __int64 v78; // [rsp+38h] [rbp-58h]
  __int64 v79; // [rsp+40h] [rbp-50h]
  __int64 v80; // [rsp+48h] [rbp-48h]
  __int64 v81; // [rsp+50h] [rbp-40h]
  __int64 v82; // [rsp+58h] [rbp-38h]
  int v83; // [rsp+64h] [rbp-2Ch]

  v4 = *a1; /*0x1005d9ca4*/
  v74 = (char **)(*a1 + 56LL); /*0x1005d9cab*/
  v5 = *v74; /*0x1005d9caf*/
  if ( !*v74 ) /*0x1005d9caf*/
    v5 = (char *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v74); /*0x1005d9d13*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a3); /*0x1005d9cb8*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005d9cc7*/
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5); /*0x1005d9d18*/
    LOBYTE(v6) = v6 ^ 1; /*0x1005d9d1d*/
    v83 = v6; /*0x1005d9d1f*/
    if ( *(_BYTE *)(v4 + 356) ) /*0x1005d9d31*/
      goto LABEL_5; /*0x1005d9d39*/
  }
  else
  {
    v83 = 0; /*0x1005d9ccf*/
    if ( *(_BYTE *)(v4 + 356) ) /*0x1005d9ce5*/
      goto LABEL_5; /*0x1005d9ced*/
  }
  ++*(_QWORD *)(v4 + 248); /*0x1005d9d3b*/
  v7 = 4; /*0x1005d9d49*/
  v8 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d9d51*/
                   &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_178,
                   4,
                   a2);
  if ( !v8 ) /*0x1005d9d59*/
    v8 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1005d9d5b*/
  v10 = 13; /*0x1005d9d62*/
  v5 = "unknown_eventindex"; /*0x1005d9d68*/
  if ( *(_BYTE *)v8 == 3 ) /*0x1005d9d72*/
  {
    v11 = v8[3] - 4LL; /*0x1005d9d7c*/
    v12 = v8[2]; /*0x1005d9d8a*/
    switch ( v11 ) /*0x1005d9d9c*/
    {
      case 0LL: /*0x1005d9d9c*/
        if ( *(_DWORD *)v12 == 1735289200 ) /*0x1005d9da4*/
          goto LABEL_5; /*0x1005d9da4*/
        break; /*0x1005d9da4*/
      case 1LL: /*0x1005d9d9c*/
        v5 = "unknown_eventindex"; /*0x1005d9f7b*/
        if ( !(*(_DWORD *)v12 ^ 0x6F727265 | *(unsigned __int8 *)(v12 + 4) ^ 0x72) ) /*0x1005d9f6e*/
          v5 = "upstream_error/delta/type"; /*0x1005d9f82*/
        v10 = ((*(_DWORD *)v12 ^ 0x6F727265 | *(unsigned __int8 *)(v12 + 4) ^ 0x72) == 0) + 13LL; /*0x1005d9f86*/
        break; /*0x1005d9f8a*/
      case 8LL: /*0x1005d9d9c*/
        if ( !(*(_QWORD *)v12 ^ 0x5F6567617373656DLL | *(unsigned int *)(v12 + 8) ^ 0x706F7473LL) ) /*0x1005d9dc5*/
        {
          v13 = std::time::Instant::elapsed::h457f209775ed485c(v4 + 40); /*0x1005d9dd7*/
          v15 = v14; /*0x1005d9dda*/
          v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d9deb*/
                  "usagecached_tokenstopephemeralcache_controlassistant",
                  5,
                  a2);
          v7 = (1000 * v13 + v15 / 0xF4240uLL) /*0x1005d9e1e*/
             | -(__int64)((0x3E8 * (unsigned __int128)(unsigned __int64)v13 + v15 / 0xF4240uLL) >> 64 != 0);
          codexmate_lib::core::relay::anthropic_trace::record_usage::hf204f1e9b8800680( /*0x1005d9e2d*/
            v4 + 72,
            v7,
            "message_stopmessage_deltaupstream_error/delta/type",
            12,
            v16);
          *(_BYTE *)(v4 + 357) = 1; /*0x1005d9e32*/
          v10 = 8; /*0x1005d9e3a*/
          v5 = (char *)&unk_1016FC298; /*0x1005d9e40*/
        }
        break; /*0x1005d9e47*/
      case 9LL: /*0x1005d9d9c*/
        v7 = *(_QWORD *)v12 ^ 0x5F6567617373656DLL | *(_QWORD *)(v12 + 5) ^ 0x74726174735F6567LL; /*0x1005d9fad*/
        if ( v7 ) /*0x1005d9fb0*/
        {
          v9 = *(_QWORD *)v12 ^ 0x5F6567617373656DLL | *(_QWORD *)(v12 + 5) ^ 0x61746C65645F6567LL; /*0x1005d9fc7*/
          if ( !v9 ) /*0x1005d9fca*/
          {
            v26 = std::time::Instant::elapsed::h457f209775ed485c(v4 + 40); /*0x1005d9fd9*/
            v28 = v27; /*0x1005d9fdc*/
            v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d9fed*/
                    "usagecached_tokenstopephemeralcache_controlassistant",
                    5,
                    a2);
            codexmate_lib::core::relay::anthropic_trace::record_usage::hf204f1e9b8800680( /*0x1005da02f*/
              v4 + 72,
              (1000 * v26 + v28 / 0xF4240uLL)
            | -(__int64)((0x3E8 * (unsigned __int128)(unsigned __int64)v26 + v28 / 0xF4240uLL) >> 64 != 0),
              "message_deltaupstream_error/delta/type",
              13,
              v29);
            v7 = (__int64)"/delta/stop_reasonmsg_delta/message/usagemsg_startunknown_eventindex"; /*0x1005da034*/
            v30 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1005da043*/
                    a2,
                    "/delta/stop_reasonmsg_delta/message/usagemsg_startunknown_eventindex",
                    18);
            v10 = 9; /*0x1005da048*/
            v5 = "msg_delta/message/usagemsg_startunknown_eventindex"; /*0x1005da04e*/
            if ( v30 ) /*0x1005da058*/
            {
              if ( *(_BYTE *)v30 == 3 ) /*0x1005da061*/
              {
                v7 = *(_QWORD *)(v30 + 24); /*0x1005da06e*/
                v5 = "msg_delta/message/usagemsg_startunknown_eventindex"; /*0x1005da077*/
                *(_QWORD *)(v4 + 216) = codexmate_lib::core::relay::anthropic_trace::stop_tag::h6bbf3163102b8b8e( /*0x1005da07a*/
                                          *(_QWORD *)(v30 + 16),
                                          v7);
                *(_QWORD *)(v4 + 224) = v9; /*0x1005da081*/
              }
            }
          }
        }
        else
        {
          if ( !*(_BYTE *)(v4 + 104) ) /*0x1005da140*/
          {
            *(_QWORD *)(v4 + 104) = 1; /*0x1005da147*/
            *(_QWORD *)(v4 + 112) = 0; /*0x1005da14f*/
            *(_QWORD *)(v4 + 120) = 0; /*0x1005da157*/
          }
          v34 = std::time::Instant::elapsed::h457f209775ed485c(v4 + 40); /*0x1005da168*/
          v36 = v35; /*0x1005da16b*/
          v37 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1005da17c*/
                  a2,
                  "/message/usagemsg_startunknown_eventindex",
                  14);
          v7 = (1000 * v34 + v36 / 0xF4240uLL) /*0x1005da1af*/
             | -(__int64)((0x3E8 * (unsigned __int128)(unsigned __int64)v34 + v36 / 0xF4240uLL) >> 64 != 0);
          codexmate_lib::core::relay::anthropic_trace::record_usage::hf204f1e9b8800680( /*0x1005da1be*/
            v4 + 72,
            v7,
            "message_startmessage_stopmessage_deltaupstream_error/delta/type",
            13,
            v37);
          *(_BYTE *)(v4 + 357) = 0; /*0x1005da1c3*/
          *(_QWORD *)(v4 + 216) = &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_508; /*0x1005da1d2*/
          *(_QWORD *)(v4 + 224) = 7; /*0x1005da1d9*/
          v10 = 9; /*0x1005da1e4*/
          v5 = "msg_startunknown_eventindex"; /*0x1005da1ea*/
        }
        break; /*0x1005da088*/
      case 14LL: /*0x1005d9d9c*/
        v31 = _mm_or_si128( /*0x1005da0a9*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v12 + 16)), (__m128i)xmmword_1016FC0F0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1016FC0E0));
        if ( _mm_testz_si128(v31, v31) ) /*0x1005da0ad*/
        {
          ++*(_QWORD *)(v4 + 336); /*0x1005da0b8*/
          v10 = 10; /*0x1005da0bf*/
          v5 = "block_stop/content_block/type/content_block/textcontent_block/delta/stop_reasonmsg_delta/message/usagemsg_startunknown_eventindex"; /*0x1005da0c5*/
        }
        break; /*0x1005da0cc*/
      case 15LL: /*0x1005d9d9c*/
        v17 = _mm_or_si128( /*0x1005d9e65*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1016FC0E0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v12 + 3)), (__m128i)xmmword_1016FC100));
        if ( _mm_testz_si128(v17, v17) ) /*0x1005d9e6e*/
        {
          ++*(_QWORD *)(v4 + 328); /*0x1005da0d1*/
          v32 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1005da0e7*/
                  a2,
                  "/content_block/type/content_block/textcontent_block/delta/stop_reasonmsg_delta/message/usagemsg_startunknown_eventindex",
                  19);
          if ( v32 ) /*0x1005da0ef*/
          {
            if ( *(_BYTE *)v32 == 3 && *(_QWORD *)(v32 + 24) == 4 && **(_DWORD **)(v32 + 16) == 1954047348 ) /*0x1005da107*/
            {
              v64 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1005da4cd*/
                      a2,
                      "/content_block/textcontent_block/delta/stop_reasonmsg_delta/message/usagemsg_startunknown_eventindex",
                      19);
              if ( v64 ) /*0x1005da4d5*/
              {
                if ( *(_BYTE *)v64 == 3 ) /*0x1005da4de*/
                {
                  v65 = *(unsigned __int8 **)(v64 + 16); /*0x1005da4e4*/
                  v66 = *(_QWORD *)(v64 + 24); /*0x1005da4e8*/
                  if ( *(_DWORD *)(v4 + 104) == 1 ) /*0x1005da4f1*/
                  {
                    v67 = (unsigned __int64 *)(v4 + 112); /*0x1005da4f7*/
                  }
                  else
                  {
                    *(_QWORD *)(v4 + 104) = 1; /*0x1005da61b*/
                    v67 = (unsigned __int64 *)(v4 + 112); /*0x1005da623*/
                    *(_QWORD *)(v4 + 112) = 0; /*0x1005da627*/
                    *(_QWORD *)(v4 + 120) = 0; /*0x1005da62f*/
                  }
                  codexmate_lib::core::relay::anthropic_trace::TextCounts::add::h7971b312fd0fe31a(v67, v65, v66); /*0x1005da637*/
                }
              }
            }
          }
          v7 = 13; /*0x1005da114*/
          v33 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005da11c*/
                          "content_block/delta/stop_reasonmsg_delta/message/usagemsg_startunknown_eventindex",
                          13,
                          a2);
          if ( !v33 ) /*0x1005da124*/
            v33 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1005da126*/
          v5 = (char *)codexmate_lib::core::relay::anthropic_trace::block_tag::he3644130fb272c8b(v33); /*0x1005da135*/
          v10 = v9; /*0x1005da138*/
        }
        else
        {
          v18 = _mm_or_si128( /*0x1005d9e8d*/
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1016F4C70),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v12 + 3)), (__m128i)xmmword_1016F4C60));
          if ( _mm_testz_si128(v18, v18) ) /*0x1005d9e91*/
          {
            ++*(_QWORD *)(v4 + 256); /*0x1005d9e9c*/
            v5 = a2; /*0x1005d9eaf*/
            v19 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a2, "/delta/type", 11); /*0x1005d9eb2*/
            v20 = 5; /*0x1005d9eb7*/
            if ( v19 && *(_BYTE *)v19 == 3 ) /*0x1005d9ec8*/
            {
              v21 = *(_QWORD *)(v19 + 24) - 10LL; /*0x1005d9ed2*/
              v22 = *(_QWORD *)(v19 + 16); /*0x1005d9ee0*/
              switch ( v21 ) /*0x1005d9ef2*/
              {
                case 0LL: /*0x1005d9ef2*/
                  if ( *(_QWORD *)v22 ^ 0x6C65645F74786574LL | *(unsigned __int16 *)(v22 + 8) ^ 0x6174LL ) /*0x1005d9f0b*/
                    goto LABEL_83; /*0x1005d9f0e*/
                  ++*(_QWORD *)(v4 + 264); /*0x1005d9f14*/
                  v5 = a2; /*0x1005d9f27*/
                  v23 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1005d9f2a*/
                          a2,
                          "/delta/textblock_stop/content_block/type/content_block/textcontent_block/delta/stop_reasonmsg_"
                          "delta/message/usagemsg_startunknown_eventindex",
                          11);
                  if ( v23 && *(_BYTE *)v23 == 3 ) /*0x1005d9f3b*/
                  {
                    v24 = *(unsigned __int8 **)(v23 + 16); /*0x1005d9f41*/
                    v25 = *(_QWORD *)(v23 + 24); /*0x1005d9f45*/
                    if ( *(_DWORD *)(v4 + 104) == 1 ) /*0x1005d9f4e*/
                    {
                      v5 = (char *)(v4 + 112); /*0x1005d9f54*/
                    }
                    else
                    {
                      *(_QWORD *)(v4 + 104) = 1; /*0x1005da641*/
                      v5 = (char *)(v4 + 112); /*0x1005da649*/
                      *(_QWORD *)(v4 + 112) = 0; /*0x1005da64d*/
                      *(_QWORD *)(v4 + 120) = 0; /*0x1005da655*/
                    }
                    codexmate_lib::core::relay::anthropic_trace::TextCounts::add::h7971b312fd0fe31a( /*0x1005da65d*/
                      (unsigned __int64 *)v5,
                      v24,
                      v25);
                  }
                  break; /*0x1005da662*/
                case 4LL: /*0x1005d9ef2*/
                  v71 = 4LL /*0x1005da5a4*/
                      * ((*(_QWORD *)v22 ^ 0x676E696B6E696874LL | *(_QWORD *)(v22 + 6) ^ 0x61746C65645F676ELL) != 0)
                      + 1;
                  ++*(_QWORD *)(v4 + 8 * v71 + 264); /*0x1005da5ac*/
                  break; /*0x1005da5b4*/
                case 5LL: /*0x1005d9ef2*/
                  if ( *(_QWORD *)v22 ^ 0x727574616E676973LL | *(_QWORD *)(v22 + 7) ^ 0x61746C65645F6572LL ) /*0x1005da51f*/
                  {
                    v68 = 0x6369746174696F6ELL; /*0x1005da528*/
                    v69 = _byteswap_uint64(*(_QWORD *)v22); /*0x1005da535*/
                    if ( v69 != 0x6369746174696F6ELL /*0x1005da553*/
                      || (v68 = 0x6E735F64656C7461LL,
                          v69 = _byteswap_uint64(*(_QWORD *)(v22 + 7)),
                          v70 = 0,
                          v69 != 0x6E735F64656C7461LL) )
                    {
                      v70 = 2 * (v69 >= v68) - 1; /*0x1005da55d*/
                    }
                    ++*(_QWORD *)(v4 + 8 * (5LL - (v70 == 0)) + 264); /*0x1005da56d*/
                  }
                  else
                  {
                    ++*(_QWORD *)(v4 + 280); /*0x1005da5f7*/
                  }
                  break; /*0x1005da575*/
                case 6LL: /*0x1005d9ef2*/
                  v72 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v22), (__m128i)xmmword_1016FC110); /*0x1005da5bd*/
                  v20 = 2LL * !_mm_testz_si128(v72, v72) + 3; /*0x1005da5cf*/
                  goto LABEL_83; /*0x1005da5cf*/
                default:
                  goto LABEL_83;
              }
            }
            else
            {
LABEL_83:
              ++*(_QWORD *)(v4 + 8 * v20 + 264); /*0x1005da5d4*/
            }
LABEL_5:
            if ( (_BYTE)v83 /*0x1005d9cff*/
              || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
            {
              return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v74); /*0x1005d9cff*/
            }
            goto LABEL_86; /*0x1005d9cff*/
          }
        }
        break; /*0x1005d9cff*/
      default:
        break;
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, v7, v9); /*0x1005da1f1*/
  v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(96, 8); /*0x1005da207*/
  if ( !v38 ) /*0x1005da20f*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 96); /*0x1005da5eb*/
  v39 = v38; /*0x1005da215*/
  v73 = a2; /*0x1005da218*/
  v40 = std::time::Instant::elapsed::h457f209775ed485c(v4 + 40); /*0x1005da220*/
  v42 = 0x3E8 * (unsigned __int128)(unsigned __int64)v40 + v41 / 0xF4240uLL; /*0x1005da23c*/
  v43 = 0; /*0x1005da243*/
  LOBYTE(v79) = 2; /*0x1005da254*/
  v80 = 0; /*0x1005da258*/
  v81 = v42 | -(__int64)(*((_QWORD *)&v42 + 1) != 0); /*0x1005da260*/
  if ( v10 < 0 ) /*0x1005da267*/
LABEL_49:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v43, v10); /*0x1005da269*/
  if ( v10 ) /*0x1005da279*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4 + 40, 8, -*((_QWORD *)&v42 + 1)); /*0x1005da27b*/
    v43 = 1; /*0x1005da280*/
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x1005da28e*/
    if ( !v44 ) /*0x1005da296*/
      goto LABEL_49; /*0x1005da296*/
    v45 = v44; /*0x1005da298*/
  }
  else
  {
    v45 = 1; /*0x1005da29d*/
  }
  memcpy((void *)v45, v5, v10); /*0x1005da2b0*/
  LOBYTE(v75) = 3; /*0x1005da2b5*/
  v76 = v10; /*0x1005da2b9*/
  v77 = v45; /*0x1005da2bd*/
  v78 = v10; /*0x1005da2c1*/
  v46 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005da2d5*/
                    "index",
                    5,
                    v73);
  if ( !v46 ) /*0x1005da2ee*/
    v46 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1005da2f0*/
  if ( *(_BYTE *)v46 == 2 && !v46[1] ) /*0x1005da301*/
  {
    v47 = v46[2]; /*0x1005da4b3*/
    v48 = 2; /*0x1005da4b7*/
  }
  else
  {
    v48 = 0; /*0x1005da307*/
  }
  *(_BYTE *)(v39 + 64) = v48; /*0x1005da309*/
  *(_QWORD *)(v39 + 72) = 0; /*0x1005da30c*/
  *(_QWORD *)(v39 + 80) = v47; /*0x1005da314*/
  *(_QWORD *)(v39 + 24) = v82; /*0x1005da31c*/
  *(_QWORD *)(v39 + 16) = v81; /*0x1005da324*/
  v49 = v79; /*0x1005da328*/
  *(_QWORD *)(v39 + 8) = v80; /*0x1005da330*/
  *(_QWORD *)v39 = v49; /*0x1005da334*/
  *(_QWORD *)(v39 + 56) = v78; /*0x1005da33b*/
  *(_QWORD *)(v39 + 48) = v77; /*0x1005da343*/
  v50 = v75; /*0x1005da347*/
  *(_QWORD *)(v39 + 40) = v76; /*0x1005da34f*/
  *(_QWORD *)(v39 + 32) = v50; /*0x1005da353*/
  v80 = 3; /*0x1005da357*/
  v81 = v39; /*0x1005da35f*/
  v82 = 3; /*0x1005da363*/
  LOBYTE(v79) = 4; /*0x1005da36b*/
  v51 = *(_QWORD *)(v4 + 176); /*0x1005da36f*/
  if ( v51 == 12 ) /*0x1005da37a*/
  {
    v52 = *(_QWORD *)(v4 + 168); /*0x1005da37c*/
    v53 = 0; /*0x1005da38e*/
    if ( (unsigned __int64)(v52 + 1) >= *(_QWORD *)(v4 + 152) ) /*0x1005da393*/
      v53 = *(_QWORD *)(v4 + 152); /*0x1005da393*/
    v54 = *(_QWORD *)(v4 + 160); /*0x1005da397*/
    *(_QWORD *)(v4 + 168) = v52 - v53 + 1; /*0x1005da3a6*/
    *(_QWORD *)(v4 + 176) = 11; /*0x1005da3ad*/
    v55 = 32 * v52; /*0x1005da3b8*/
    v56 = *(_QWORD *)(v54 + v55 + 8); /*0x1005da3c0*/
    v75 = *(_QWORD *)(v54 + v55); /*0x1005da3c5*/
    v78 = *(_QWORD *)(v54 + v55 + 24); /*0x1005da3ce*/
    v77 = *(_QWORD *)(v54 + v55 + 16); /*0x1005da3d7*/
    v76 = v56; /*0x1005da3db*/
    v51 = 11; /*0x1005da3df*/
    if ( (_BYTE)v75 != 6 ) /*0x1005da3e7*/
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v75); /*0x1005da3ed*/
      v51 = *(_QWORD *)(v4 + 176); /*0x1005da3f2*/
    }
  }
  v5 = (char *)(v4 + 152); /*0x1005da3f9*/
  v78 = v82; /*0x1005da404*/
  v77 = v81; /*0x1005da40c*/
  v76 = v80; /*0x1005da418*/
  v75 = v79; /*0x1005da41c*/
  v57 = *(_QWORD *)(v4 + 152); /*0x1005da420*/
  if ( v51 == v57 ) /*0x1005da426*/
  {
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::grow::hd79b5bb231922937(); /*0x1005da428*/
    v57 = *(_QWORD *)(v4 + 152); /*0x1005da42d*/
    v51 = *(_QWORD *)(v4 + 176); /*0x1005da434*/
  }
  *(_QWORD *)(v4 + 176) = v51 + 1; /*0x1005da43f*/
  v58 = *(_QWORD *)(v4 + 168) + v51; /*0x1005da446*/
  v59 = 0; /*0x1005da44d*/
  if ( v58 >= v57 ) /*0x1005da452*/
    v59 = v57; /*0x1005da452*/
  v60 = *(_QWORD *)(v4 + 160); /*0x1005da459*/
  v61 = 32 * (v58 - v59); /*0x1005da460*/
  *(_QWORD *)(v60 + v61 + 24) = v82; /*0x1005da468*/
  *(_QWORD *)(v60 + v61 + 16) = v81; /*0x1005da471*/
  v62 = v79; /*0x1005da476*/
  *(_QWORD *)(v60 + v61 + 8) = v80; /*0x1005da47e*/
  *(_QWORD *)(v60 + v61) = v62; /*0x1005da483*/
  if ( !(_BYTE)v83 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005da493*/
  {
LABEL_86:
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5) ) /*0x1005da604*/
      *(_BYTE *)(v4 + 64) = 1; /*0x1005da611*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v74); /*0x1005da4a0*/
}