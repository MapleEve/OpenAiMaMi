// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::feed_line::haabafc0955346ac1; addr: 0x1002b18e0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:51Z
__int64 *__fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::feed_line::haabafc0955346ac1(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  size_t v4; // r13
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  char v11; // di
  char v12; // r8
  char v13; // r9
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // edi
  __int128 v17; // rax
  bool v18; // r12
  __int64 v19; // rax
  void *v20; // rax
  size_t v21; // rdx
  void *v22; // rax
  _QWORD *v23; // rax
  const void *v24; // r12
  _QWORD *v25; // rax
  unsigned int *v26; // rdi
  _QWORD *v27; // rax
  void *v28; // rax
  size_t v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r13
  __int64 v33; // r12
  size_t v34; // r15
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int8 v39; // al
  int v40; // eax
  size_t v41; // r15
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __m256i *v46; // r15
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rsi
  unsigned __int16 v54; // [rsp+8h] [rbp-208h]
  _QWORD v55[3]; // [rsp+18h] [rbp-1F8h] BYREF
  _QWORD v56[9]; // [rsp+30h] [rbp-1E0h] BYREF
  _QWORD v57[9]; // [rsp+78h] [rbp-198h] BYREF
  _QWORD v58[3]; // [rsp+C0h] [rbp-150h] BYREF
  void *__src; // [rsp+D8h] [rbp-138h]
  __int64 v60; // [rsp+E0h] [rbp-130h]
  __int64 v61; // [rsp+E8h] [rbp-128h]
  __int64 v62; // [rsp+F0h] [rbp-120h]
  __int64 v63; // [rsp+F8h] [rbp-118h]
  __int64 v64; // [rsp+100h] [rbp-110h]
  __int64 v65; // [rsp+108h] [rbp-108h]
  __int64 v66; // [rsp+110h] [rbp-100h]
  __int64 v67; // [rsp+118h] [rbp-F8h]
  __int64 v68; // [rsp+120h] [rbp-F0h]
  __int64 v69; // [rsp+128h] [rbp-E8h]
  __int64 v70; // [rsp+130h] [rbp-E0h] BYREF
  __int64 v71; // [rsp+138h] [rbp-D8h]
  __int64 v72; // [rsp+140h] [rbp-D0h]
  __m256i v73; // [rsp+148h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+168h] [rbp-A8h]
  _OWORD v75[2]; // [rsp+170h] [rbp-A0h] BYREF
  size_t __n; // [rsp+190h] [rbp-80h]
  __int128 v77; // [rsp+198h] [rbp-78h] BYREF
  __int128 __dst; // [rsp+1A8h] [rbp-68h]
  __m256i v79; // [rsp+1B8h] [rbp-58h] BYREF
  __int128 v80; // [rsp+1D8h] [rbp-38h]

  if ( !*(_BYTE *)(a2 + 782) ) /*0x1002b18f7*/
  {
    do /*0x1002b19b6*/
    {
      while ( 1 ) /*0x1002b194b*/
      {
        if ( !a4 ) /*0x1002b194e*/
          goto LABEL_2; /*0x1002b194e*/
        v8 = a4; /*0x1002b1950*/
        v9 = a3 + a4; /*0x1002b1953*/
        v10 = *(char *)(v9 - 1); /*0x1002b1956*/
        if ( v10 < 0 ) /*0x1002b195c*/
          break; /*0x1002b195c*/
        a4 = v9 - 1 - a3; /*0x1002b1943*/
        if ( v10 != 13 ) /*0x1002b1949*/
          goto LABEL_15; /*0x1002b1949*/
      }
      v11 = *(_BYTE *)(v9 - 2); /*0x1002b195e*/
      if ( v11 >= -64 ) /*0x1002b1966*/
      {
        v14 = v9 - 2; /*0x1002b198d*/
        v16 = v11 & 0x1F; /*0x1002b1991*/
      }
      else
      {
        v12 = *(_BYTE *)(v9 - 3); /*0x1002b1968*/
        if ( v12 >= -64 ) /*0x1002b1971*/
        {
          v14 = v9 - 3; /*0x1002b1996*/
          v15 = v12 & 0xF; /*0x1002b199a*/
        }
        else
        {
          v13 = *(_BYTE *)(v9 - 4); /*0x1002b1973*/
          v14 = v9 - 4; /*0x1002b1978*/
          v15 = ((v13 & 7) << 6) | v12 & 0x3F; /*0x1002b1988*/
        }
        v16 = (v15 << 6) | v11 & 0x3F; /*0x1002b19a5*/
      }
      a4 = v14 - a3; /*0x1002b19b0*/
    }
    while ( ((v16 << 6) | v10 & 0x3F) == 0xD ); /*0x1002b19b6*/
LABEL_15:
    if ( v8 >= 5 && !(*(_DWORD *)a3 ^ 0x61746164 | *(unsigned __int8 *)(a3 + 4) ^ 0x3A) ) /*0x1002b19d0*/
    {
      *(_QWORD *)&v17 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hbdda09ae4876d342(a3 + 5, v8 - 5); /*0x1002b19e3*/
      if ( *((_QWORD *)&v17 + 1) != 0 && (_QWORD)v17 != 0 ) /*0x1002b19f1*/
      {
        if ( *((_QWORD *)&v17 + 1) == 6 && !(*(_DWORD *)v17 ^ 0x4E4F445B | *(unsigned __int16 *)(v17 + 4) ^ 0x5D45) ) /*0x1002b1a17*/
        {
          codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::fail_with_status::h40ace1ab3fbfea12( /*0x1002b1bc3*/
            a1,
            a2,
            "stream_truncatedhttp_statusresponse.failed",
            0x10u,
            "Upstream Anthropic stream ended before message_stopInvalid JSON in Anthropic SSE datacodexmate_lib::core::re"
            "lay::codex_catalog",
            0x33u,
            0,
            v54);
          return a1; /*0x1002b1bc8*/
        }
        v79.i128[0] = v17; /*0x1002b1a1d*/
        v79.i128[1] = 0u; /*0x1002b1a25*/
        v80 = v17; /*0x1002b1a35*/
        serde_json::de::from_trait::h99bf8e350a0ab991(&v77, &v79); /*0x1002b1a45*/
        if ( (_BYTE)v77 == 6 ) /*0x1002b1a4e*/
        {
          codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::fail_with_status::h40ace1ab3fbfea12( /*0x1002b1a76*/
            a1,
            a2,
            "upstream_protocol_errorChat content or conflicting finish_reason arrived after completionstatuscompleted",
            0x17u,
            "Invalid JSON in Anthropic SSE datacodexmate_lib::core::relay::codex_catalog",
            0x22u,
            0,
            v54);
          core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::hf5c35f1ee244fdb8(&v77); /*0x1002b1a7f*/
          return a1; /*0x1002b1a84*/
        }
        v75[1] = __dst; /*0x1002b1a98*/
        v75[0] = v77; /*0x1002b1aae*/
        if ( *(_QWORD *)(a2 + 632) ) /*0x1002b1ab5*/
          codexmate_lib::core::relay::anthropic_trace::Trace::event::hee73e03a4f5aa990( /*0x1002b1acd*/
            (_QWORD *)(a2 + 632),
            (__int64)v75);
        v73.i8[0] = 6; /*0x1002b1adc*/
        v18 = 1; /*0x1002b1ae6*/
        if ( *(_QWORD *)(a2 + 368) == 0x8000000000000001LL ) /*0x1002b1af0*/
          goto LABEL_25; /*0x1002b1af0*/
        v20 = (void *)codexmate_lib::core::relay::translator::anthropic_message::Message::event::ha410f432b7ded36c( /*0x1002b1b66*/
                        a2 + 368,
                        v75);
        if ( v20 ) /*0x1002b1b6e*/
        {
          codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::fail_with_status::h40ace1ab3fbfea12( /*0x1002b1b93*/
            a1,
            a2,
            "upstream_protocol_errorChat content or conflicting finish_reason arrived after completionstatuscompleted",
            0x17u,
            v20,
            v21,
            0,
            v54);
LABEL_64:
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v75); /*0x1002b1f20*/
          return a1; /*0x1002b1f2c*/
        }
        v25 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002b1c7b*/
                          "type",
                          4,
                          v75);
        if ( !v25 ) /*0x1002b1c83*/
          v25 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002b1c85*/
        if ( *(_BYTE *)v25 != 3 ) /*0x1002b1c8f*/
        {
LABEL_25:
          codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::handle_event::h84038d7426b0a6f0( /*0x1002b1af2*/
            &v70,
            (char *)a2,
            (__int64)v75);
          if ( ((v18 | *(_BYTE *)(a2 + 782)) & 1) != 0 ) /*0x1002b1b15*/
          {
            a1[2] = v72; /*0x1002b1b22*/
            v19 = v70; /*0x1002b1b26*/
            a1[1] = v71; /*0x1002b1b34*/
            *a1 = v19; /*0x1002b1b38*/
            if ( !v18 ) /*0x1002b1b3e*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v73); /*0x1002b1b4b*/
          }
          else
          {
            v79 = v73; /*0x1002b1bdf*/
            v22 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002b1c09*/
                            "type",
                            4,
                            &v79);
            if ( !v22 ) /*0x1002b1c11*/
              v22 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002b1c13*/
            if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x1002b1c24*/
                                    v22,
                                    &off_101BF2440) )
            {
              v23 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002b1c41*/
                                "iderrormessage",
                                2,
                                &v79);
              if ( !v23 ) /*0x1002b1c49*/
                v23 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002b1c4b*/
              if ( *(_BYTE *)v23 == 3 ) /*0x1002b1c55*/
              {
                v24 = (const void *)v23[2]; /*0x1002b1c5b*/
                v4 = v23[3]; /*0x1002b1c5f*/
              }
              else
              {
                v24 = nullptr; /*0x1002b1db3*/
              }
              v30 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1002b1dc6*/
                      &v79,
                      "/input/queryaddedweb_search_callanthropic_search_incompleteSearch result has no matching call",
                      12);
              if ( v30 && *(_BYTE *)v30 == 3 && v24 ) /*0x1002b1de0*/
              {
                __src = *(void **)(v30 + 16); /*0x1002b1dea*/
                __n = *(_QWORD *)(v30 + 24); /*0x1002b1df5*/
                alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::hd1744e5f3df8d4ac(&v77, v4, 0, 1, 1); /*0x1002b1e0d*/
                v74 = *((_QWORD *)&v77 + 1); /*0x1002b1e16*/
                if ( (_DWORD)v77 == 1 ) /*0x1002b1e21*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v74, __dst); /*0x1002b2499*/
                v31 = __dst; /*0x1002b1e27*/
                memcpy((void *)__dst, v24, v4); /*0x1002b1e34*/
                v58[0] = v74; /*0x1002b1e40*/
                v60 = v31; /*0x1002b1e47*/
                v58[1] = v31; /*0x1002b1e4e*/
                v58[2] = v4; /*0x1002b1e55*/
                alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::hd1744e5f3df8d4ac(&v77, __n, 0, 1, 1); /*0x1002b1e71*/
                v32 = *((_QWORD *)&v77 + 1); /*0x1002b1e76*/
                if ( (_BYTE)v77 ) /*0x1002b1e7e*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v77 + 1), __dst); /*0x1002b24ae*/
                v33 = __dst; /*0x1002b1e8b*/
                v34 = __n; /*0x1002b1e99*/
                memcpy((void *)__dst, __src, __n); /*0x1002b1ea0*/
                *(_QWORD *)&v77 = v32; /*0x1002b1ea5*/
                *((_QWORD *)&v77 + 1) = v33; /*0x1002b1ea9*/
                *(_QWORD *)&__dst = v34; /*0x1002b1ead*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6df91172f6a28919( /*0x1002b1ec6*/
                  v55,
                  a2 + 720,
                  v58,
                  &v77);
                if ( v55[0] != 0x8000000000000000LL && v55[0] ) /*0x1002b1ee4*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55[1], v55[0], 1); /*0x1002b1ef2*/
              }
            }
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v79); /*0x1002b1efb*/
            a1[2] = v72; /*0x1002b1f07*/
            v35 = v70; /*0x1002b1f0b*/
            a1[1] = v71; /*0x1002b1f19*/
            *a1 = v35; /*0x1002b1f1d*/
          }
          goto LABEL_64; /*0x1002b1b50*/
        }
        v26 = (unsigned int *)v25[2]; /*0x1002b1c95*/
        v4 = v25[3]; /*0x1002b1c99*/
        if ( *(_BYTE *)(a2 + 781) ) /*0x1002b1c9d*/
        {
          if ( v4 != 18 ) /*0x1002b1caf*/
          {
            if ( v4 != 13 ) /*0x1002b1cb9*/
            {
              if ( v4 != 12 ) /*0x1002b1cc3*/
                goto LABEL_25; /*0x1002b1cc3*/
              if ( !(*(_QWORD *)v26 ^ 0x5F6567617373656DLL | v26[2] ^ 0x706F7473LL) /*0x1002b1d2c*/
                && *(_QWORD *)(a2 + 368) != 0x8000000000000000LL
                && *(_QWORD *)(a2 + 384) == 10
                && !(**(_QWORD **)(a2 + 376) ^ 0x75745F6573756170LL
                   | *(unsigned __int16 *)(*(_QWORD *)(a2 + 376) + 8LL) ^ 0x6E72LL) )
              {
                codexmate_lib::core::relay::translator::anthropic_message::Message::assistant::h371d356a28258bb5( /*0x1002b1d3c*/
                  &v79,
                  a2 + 368);
                v27 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002b1d51*/
                                  &unk_1018213D1,
                                  7,
                                  &v79);
                if ( !v27 ) /*0x1002b1d59*/
                  v27 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002b1d5b*/
                if ( *(_BYTE *)v27 != 4 ) /*0x1002b1d65*/
                  core::option::unwrap_failed::h44626cade04bbf1e(&off_101BF2450); /*0x1002b24bc*/
                v28 = (void *)codexmate_lib::core::relay::translator::anthropic_message::validate_pause::h1bb08092034a707f( /*0x1002b1d73*/
                                v27[2],
                                v27[3]);
                if ( v28 ) /*0x1002b1d7b*/
                {
                  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::fail_with_status::h40ace1ab3fbfea12( /*0x1002b1da0*/
                    a1,
                    a2,
                    "upstream_protocol_errorChat content or conflicting finish_reason arrived after completionstatuscompleted",
                    0x17u,
                    v28,
                    v29,
                    0,
                    v54);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v79); /*0x1002b1da9*/
                }
                else
                {
                  codexmate_lib::core::relay::translator::anthropic_message::add_usage::h537e40a658bb5c2b( /*0x1002b2277*/
                    a2 + 520,
                    a2 + 392);
                  v47 = *(_QWORD *)(a2 + 424); /*0x1002b228a*/
                  v48 = *(_QWORD *)(a2 + 432); /*0x1002b2291*/
                  *(_QWORD *)(a2 + 424) = 0; /*0x1002b2298*/
                  v49 = v47; /*0x1002b22a3*/
                  if ( v47 ) /*0x1002b22a9*/
                    v49 = *(_QWORD *)(a2 + 440); /*0x1002b22ab*/
                  *(_QWORD *)(a2 + 440) = 0; /*0x1002b22b2*/
                  v57[0] = v47 != 0; /*0x1002b22c5*/
                  v57[1] = 0; /*0x1002b22cc*/
                  v57[2] = v47; /*0x1002b22d7*/
                  v57[3] = v48; /*0x1002b22de*/
                  v57[4] = v57[0]; /*0x1002b22e5*/
                  v57[5] = 0; /*0x1002b22ec*/
                  v57[6] = v47; /*0x1002b22f7*/
                  v57[7] = v48; /*0x1002b22fe*/
                  v57[8] = v49; /*0x1002b2305*/
                  alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h8eaf5d3371627cbb(a2 + 136, v57); /*0x1002b2313*/
                  if ( *(_BYTE *)(a2 + 552) != 6 ) /*0x1002b2327*/
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(a2 + 552); /*0x1002b232c*/
                  *(__m256i *)(a2 + 552) = v79; /*0x1002b233e*/
                  v62 = 0; /*0x1002b2354*/
                  v63 = 0; /*0x1002b235f*/
                  v65 = 0; /*0x1002b236a*/
                  v66 = 0; /*0x1002b2375*/
                  v68 = 0; /*0x1002b2380*/
                  v69 = 0; /*0x1002b238b*/
                  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..translator..anthropic_message..Message$GT$$GT$::h778c80f6b881ee72(a2 + 368); /*0x1002b2399*/
                  *(_QWORD *)(a2 + 368) = 0x8000000000000000LL; /*0x1002b23a8*/
                  *(_BYTE *)(a2 + 392) = 0; /*0x1002b23af*/
                  *(_QWORD *)(a2 + 424) = 0; /*0x1002b23b7*/
                  *(_QWORD *)(a2 + 448) = v63; /*0x1002b23c9*/
                  v50 = v61; /*0x1002b23cd*/
                  *(_QWORD *)(a2 + 440) = v62; /*0x1002b23db*/
                  *(_QWORD *)(a2 + 432) = v50; /*0x1002b23df*/
                  *(_QWORD *)(a2 + 472) = v66; /*0x1002b23ea*/
                  v51 = v64; /*0x1002b23f1*/
                  *(_QWORD *)(a2 + 464) = v65; /*0x1002b23ff*/
                  *(_QWORD *)(a2 + 456) = v51; /*0x1002b2406*/
                  *(_QWORD *)(a2 + 496) = v69; /*0x1002b2414*/
                  v52 = v67; /*0x1002b241b*/
                  *(_QWORD *)(a2 + 488) = v68; /*0x1002b2429*/
                  *(_QWORD *)(a2 + 480) = v52; /*0x1002b2430*/
                  *(_BYTE *)(a2 + 512) = 0; /*0x1002b2437*/
                  v53 = *(_QWORD *)(a2 + 344); /*0x1002b243f*/
                  if ( v53 != 0x8000000000000000LL && v53 ) /*0x1002b244e*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 352), v53, 1); /*0x1002b245c*/
                  *(_QWORD *)(a2 + 344) = 0x8000000000000000LL; /*0x1002b246b*/
                  *a1 = 0; /*0x1002b2472*/
                  a1[1] = 1; /*0x1002b2479*/
                  a1[2] = 0; /*0x1002b2481*/
                }
                goto LABEL_64; /*0x1002b1dae*/
              }
              goto LABEL_79; /*0x1002b1d2f*/
            }
            goto LABEL_76; /*0x1002b1cb9*/
          }
        }
        else
        {
          if ( v4 == 12 ) /*0x1002b1f35*/
          {
LABEL_79:
            v42 = *(_QWORD *)v26 ^ 0x5F6567617373656DLL; /*0x1002b2028*/
            __n = (size_t)v26; /*0x1002b2038*/
            if ( !(v42 | v26[2] ^ 0x706F7473LL) ) /*0x1002b2046*/
            {
              v43 = *(_QWORD *)(a2 + 424); /*0x1002b2056*/
              v44 = *(_QWORD *)(a2 + 432); /*0x1002b205d*/
              *(_QWORD *)(a2 + 424) = 0; /*0x1002b2064*/
              v45 = v43; /*0x1002b206f*/
              if ( v43 ) /*0x1002b2075*/
                v45 = *(_QWORD *)(a2 + 440); /*0x1002b2077*/
              *(_QWORD *)(a2 + 440) = 0; /*0x1002b207e*/
              v56[0] = v43 != 0; /*0x1002b2091*/
              v56[1] = 0; /*0x1002b2098*/
              v56[2] = v43; /*0x1002b20a3*/
              v56[3] = v44; /*0x1002b20aa*/
              v56[4] = v56[0]; /*0x1002b20b1*/
              v56[5] = 0; /*0x1002b20b8*/
              v56[6] = v43; /*0x1002b20c3*/
              v56[7] = v44; /*0x1002b20ca*/
              v56[8] = v45; /*0x1002b20d1*/
              alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h8eaf5d3371627cbb(a2 + 136, v56); /*0x1002b20df*/
            }
            if ( *(_QWORD *)__n ^ 0x5F6567617373656DLL | *(unsigned int *)(__n + 8) ^ 0x706F7473LL ) /*0x1002b20f4*/
              goto LABEL_25; /*0x1002b20f7*/
            v18 = 0; /*0x1002b20fd*/
            v41 = 12; /*0x1002b2100*/
LABEL_86:
            _$LT$serde_json..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::h8271c7755bc56075(&v77, a2 + 520); /*0x1002b210b*/
            codexmate_lib::core::relay::translator::anthropic_message::add_usage::h537e40a658bb5c2b(&v77, a2 + 392); /*0x1002b2126*/
            if ( v18 /*0x1002b2145*/
              && !memcmp(
                    (const void *)__n,
                    "message_startcontent_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop",
                    v41) )
            {
              v79.i128[1] = __dst; /*0x1002b21bd*/
              v79.i128[0] = v77; /*0x1002b21cd*/
              _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2("message", 7u); /*0x1002b21e4*/
              v46 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1002b21fd*/
                                 "usagechoicesdeltafinish_reasontool_callsupstream_protocol_errorChat content or conflict"
                                 "ing finish_reason arrived after completionstatuscompleted",
                                 5u);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v46); /*0x1002b2203*/
            }
            else
            {
              v79.i128[1] = __dst; /*0x1002b2153*/
              v79.i128[0] = v77; /*0x1002b2163*/
              v46 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1002b217f*/
                                 "usagechoicesdeltafinish_reasontool_callsupstream_protocol_errorChat content or conflict"
                                 "ing finish_reason arrived after completionstatuscompleted",
                                 5u);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v46); /*0x1002b2185*/
            }
            *v46 = v79; /*0x1002b2196*/
            v18 = 1; /*0x1002b21a9*/
            goto LABEL_25; /*0x1002b21ac*/
          }
          if ( v4 == 13 ) /*0x1002b1f3f*/
          {
LABEL_76:
            v40 = memcmp( /*0x1002b1fe2*/
                    v26,
                    "message_startcontent_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop",
                    v25[3]);
            v41 = 13; /*0x1002b1ff4*/
            __n = (size_t)v26; /*0x1002b1ffc*/
            if ( v40 ) /*0x1002b2000*/
            {
              v18 = 1; /*0x1002b2018*/
              if ( memcmp(v26, "message_deltamessage_stop", v4) ) /*0x1002b2013*/
                goto LABEL_25; /*0x1002b201d*/
            }
            else
            {
              v18 = 1; /*0x1002b2108*/
            }
            goto LABEL_86; /*0x1002b201d*/
          }
          if ( v4 != 18 ) /*0x1002b1f49*/
            goto LABEL_25; /*0x1002b1f49*/
        }
        v18 = 1; /*0x1002b1f5e*/
        if ( !memcmp(v26, "content_block_stopmessage_deltamessage_stop", v25[3]) ) /*0x1002b1f59*/
        {
          v36 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002b1f7c*/
                            "indexensured aboveresponse.function_call_arguments.delta",
                            5,
                            v75);
          if ( !v36 ) /*0x1002b1f84*/
            v36 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002b1f86*/
          if ( *(_BYTE *)v36 == 2 && !v36[1] ) /*0x1002b1f97*/
          {
            v79.i64[0] = v36[2]; /*0x1002b2254*/
            v37 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3778d392a212fabc(a2 + 424, &v79); /*0x1002b2261*/
          }
          else
          {
            v37 = 0; /*0x1002b1f9d*/
          }
          v38 = core::option::Option$LT$T$GT$::filter::he6b9320ad5af836a(v37); /*0x1002b1f9f*/
          if ( v38 ) /*0x1002b1fa7*/
          {
            _$LT$serde_json..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::h8271c7755bc56075(&v79, v38); /*0x1002b1fb4*/
            v39 = v79.i8[0]; /*0x1002b1fb9*/
            v77 = *(__int128 *)((char *)v79.i128 + 1); /*0x1002b1fc1*/
            *(_QWORD *)&__dst = *(__int64 *)((char *)&v79.i64[2] + 1); /*0x1002b1fd1*/
            *(_QWORD *)((char *)&__dst + 7) = v79.i64[3]; /*0x1002b1fd9*/
          }
          else
          {
            v39 = 6; /*0x1002b220a*/
          }
          v73.i8[0] = v39; /*0x1002b220c*/
          *(__int128 *)((char *)v73.i128 + 1) = v77; /*0x1002b221a*/
          *(__int64 *)((char *)&v73.i64[2] + 1) = __dst; /*0x1002b222c*/
          v73.i64[3] = *(_QWORD *)((char *)&__dst + 7); /*0x1002b2237*/
          v18 = v39 == 6; /*0x1002b2240*/
        }
        goto LABEL_25; /*0x1002b2244*/
      }
    }
  }
LABEL_2:
  *a1 = 0; /*0x1002b1900*/
  a1[1] = 1; /*0x1002b1907*/
  a1[2] = 0; /*0x1002b190f*/
  return a1; /*0x1002b191a*/
}