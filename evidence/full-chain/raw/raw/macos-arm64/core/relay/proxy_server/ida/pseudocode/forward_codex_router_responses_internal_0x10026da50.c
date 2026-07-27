// __ZN13codexmate_lib4core5relay12proxy_server39forward_codex_router_responses_internal28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10026da50 | 基线 same-set
char __fastcall codexmate_lib::core::relay::proxy_server::forward_codex_router_responses_internal::_$u7b$$u7b$closure$u7d$$u7d$::h05dc96f9ea7a121e(
        _QWORD *a1,
        __int64 a2,
        void *a3)
{
  _QWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 v8; // r13
  __int64 v9; // rax
  unsigned __int8 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // r13
  __int64 *v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // r14
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  _QWORD *v30; // rsi
  char result; // al
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // rdi
  char v38; // al
  __int64 v39; // r14
  _QWORD *v40; // r13
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // r12
  __int64 v52; // rsi
  __int64 v53; // rax
  void *v54; // r14
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rsi
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int64 v61; // r14
  __int64 v62; // r12
  unsigned __int16 v63; // [rsp+0h] [rbp-250h]
  size_t v64; // [rsp+8h] [rbp-248h]
  char v65[128]; // [rsp+30h] [rbp-220h] BYREF
  _BYTE v66[24]; // [rsp+B0h] [rbp-1A0h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-188h]
  __int64 v68; // [rsp+D0h] [rbp-180h]
  __int64 v69; // [rsp+D8h] [rbp-178h]
  __int64 v70; // [rsp+E0h] [rbp-170h] BYREF
  __int64 v71; // [rsp+E8h] [rbp-168h]
  __int64 v72; // [rsp+F0h] [rbp-160h]
  _QWORD v73[16]; // [rsp+F8h] [rbp-158h] BYREF
  __int64 v74; // [rsp+178h] [rbp-D8h] BYREF
  __int64 v75[16]; // [rsp+180h] [rbp-D0h] BYREF
  _QWORD *v76; // [rsp+200h] [rbp-50h]
  _QWORD *v77; // [rsp+208h] [rbp-48h]
  void *__src; // [rsp+210h] [rbp-40h]
  __int64 v79; // [rsp+218h] [rbp-38h]
  unsigned __int8 v80; // [rsp+227h] [rbp-29h]

  v5 = a1; /*0x10026da6a*/
  switch ( *(_BYTE *)(a2 + 697) ) /*0x10026da82*/
  {
    case 0: /*0x10026da82*/
      *(_DWORD *)(a2 + 698) = 256; /*0x10026da84*/
      *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 128); /*0x10026da95*/
      qmemcpy((void *)(a2 + 176), (const void *)a2, 0x60u); /*0x10026daae*/
      *(_QWORD *)(a2 + 296) = *(_QWORD *)(a2 + 120); /*0x10026dabc*/
      *(_QWORD *)(a2 + 288) = *(_QWORD *)(a2 + 112); /*0x10026dac7*/
      v6 = *(_QWORD *)(a2 + 96); /*0x10026dace*/
      *(_QWORD *)(a2 + 280) = *(_QWORD *)(a2 + 104); /*0x10026dad6*/
      *(_QWORD *)(a2 + 272) = v6; /*0x10026dadd*/
      v7 = *(_QWORD *)(a2 + 144); /*0x10026daeb*/
      *(_QWORD *)(a2 + 304) = *(_QWORD *)(a2 + 136); /*0x10026daf2*/
      *(_QWORD *)(a2 + 312) = v7; /*0x10026daf9*/
      v8 = *(_BYTE *)(a2 + 696); /*0x10026db00*/
      v67 = *(_QWORD *)(a2 + 152); /*0x10026db0f*/
      v68 = *(_QWORD *)(a2 + 160); /*0x10026db1d*/
      v76 = (_QWORD *)(a2 + 272); /*0x10026db30*/
      v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10026db34*/
             &unk_1015DD1EB,
             5,
             a2 + 272);
      v74 = a2 + 176; /*0x10026db39*/
      v77 = a1; /*0x10026db40*/
      if ( v9 ) /*0x10026db47*/
      {
        __src = a3; /*0x10026db49*/
        v10 = v8; /*0x10026db4d*/
        v11 = 0; /*0x10026db50*/
        v12 = *(_QWORD *)(v9 + 24); /*0x10026db56*/
        v13 = 1; /*0x10026db5a*/
        v14 = *(_QWORD *)(v9 + 16); /*0x10026db60*/
        if ( *(_BYTE *)v9 != 3 ) /*0x10026db64*/
          v14 = 1; /*0x10026db64*/
        v15 = 0; /*0x10026db68*/
        if ( *(_BYTE *)v9 == 3 ) /*0x10026db6e*/
          v15 = *(_QWORD *)(v9 + 24); /*0x10026db6e*/
        if ( v15 < 0 ) /*0x10026db75*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v12); /*0x10026db77*/
        if ( v15 ) /*0x10026db97*/
        {
          v79 = v14; /*0x10026db99*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1015DD1EB, v14); /*0x10026db9d*/
          v11 = 1; /*0x10026dba2*/
          v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x10026dbb0*/
          if ( !v16 ) /*0x10026dbb8*/
          {
            v12 = v15; /*0x10026ebe2*/
            goto LABEL_8; /*0x10026ebe5*/
          }
          v13 = v16; /*0x10026dbbe*/
          v14 = v79; /*0x10026dbc1*/
        }
        else
        {
          v15 = 0; /*0x10026dbc7*/
        }
        v8 = v10; /*0x10026dbca*/
        a3 = __src; /*0x10026dbcd*/
      }
      else
      {
        v14 = 1; /*0x10026db87*/
        v15 = 0; /*0x10026db8c*/
        v13 = 1; /*0x10026db8f*/
      }
      memcpy((void *)v13, (const void *)v14, v15); /*0x10026dbd7*/
      *(_QWORD *)(a2 + 320) = v15; /*0x10026dbdc*/
      *(_QWORD *)(a2 + 328) = v13; /*0x10026dbe3*/
      *(_QWORD *)(a2 + 336) = v15; /*0x10026dbea*/
      *(_BYTE *)(a2 + 698) = 1; /*0x10026dbf1*/
      v17 = v13; /*0x10026dc03*/
      codexmate_lib::core::relay::proxy_server::codex_router_lookup_model::h57b1d0b4e84703cb( /*0x10026dc09*/
        (size_t *)(a2 + 344),
        (char *)v13,
        v15,
        v8);
      if ( !*(_QWORD *)(a2 + 336) ) /*0x10026dc16*/
      {
        codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x10026dcff*/
          v65,
          400,
          &unk_1015DDEAC,
          37,
          &unk_1015DDED1,
          0x14u);
LABEL_101:
        v59 = *(_QWORD *)(a2 + 344); /*0x10026e96f*/
        if ( v59 ) /*0x10026e979*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 352), v59, 1); /*0x10026e987*/
        v5 = v77; /*0x10026e993*/
        if ( *(_BYTE *)(a2 + 698) ) /*0x10026e98c*/
        {
          v60 = *(_QWORD *)(a2 + 320); /*0x10026e999*/
          if ( v60 ) /*0x10026e9a3*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 328), v60, 1); /*0x10026e9b1*/
        }
        *(_BYTE *)(a2 + 698) = 0; /*0x10026e9b6*/
        if ( *(_BYTE *)(a2 + 699) ) /*0x10026e9bd*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 272); /*0x10026e9cd*/
        *(_BYTE *)(a2 + 699) = 0; /*0x10026e9d2*/
        goto LABEL_109; /*0x10026e9d2*/
      }
      LOBYTE(__src) = v8; /*0x10026dc1c*/
      v18 = *(_QWORD **)(a2 + 168); /*0x10026dc20*/
      v19 = *v18; /*0x10026dc27*/
      v20 = (__int64 *)(*v18 + 16LL); /*0x10026dc2a*/
      v21 = *v20; /*0x10026dc2e*/
      if ( !*v20 ) /*0x10026dc2e*/
        v21 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(*v18 + 16LL); /*0x10026eb67*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v21); /*0x10026dc3b*/
      if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10026dc4a*/
        v24 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, v17, v22, v23) ^ 1; /*0x10026eb77*/
      else
        v24 = 0; /*0x10026dc56*/
      v25 = *(_BYTE *)(v19 + 24); /*0x10026dc59*/
      v75[1] = (__int64)v20; /*0x10026dc65*/
      LOBYTE(v75[2]) = v24; /*0x10026dc6c*/
      v75[0] = v25 != 0; /*0x10026dc73*/
      if ( v25 ) /*0x10026dc7a*/
      {
        codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x10026dca5*/
          v65,
          500,
          "state poisoned::toolsimage_url[AiMaMi] image_url rejected by upstream; retrying with text fallbackexpect",
          14,
          &unk_1015DDC78,
          0x15u);
        if ( !v24 /*0x10026eb80*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v65,
                                 500,
                                 v26,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v19 + 24) = 1; /*0x10026eb8d*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v20); /*0x10026dcd0*/
        goto LABEL_101; /*0x10026dcd5*/
      }
      v79 = a2 + 368; /*0x10026dd14*/
      _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x10026dd18*/
        a2 + 368,
        v19 + 32);
      if ( !v24 /*0x10026eb97*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               a2 + 368,
                               v19 + 32,
                               v27,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v19 + 24) = 1; /*0x10026eba4*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v20); /*0x10026dd43*/
      if ( *(_BYTE *)(a2 + 660) != 1 ) /*0x10026dd5d*/
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10026dd9e*/
        {
          v73[0] = a2 + 320; /*0x10026dda4*/
          v73[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10026ddb2*/
          v73[2] = a2 + 304; /*0x10026ddb9*/
          v73[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10026ddc7*/
          v75[0] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026ddd5*/
          v75[1] = 40; /*0x10026dddc*/
          v75[2] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026dde7*/
          v75[3] = 40; /*0x10026ddee*/
          v75[4] = (__int64)&off_10195D888; /*0x10026de00*/
          log::__private_api::log::h719f4907c7336ae9(&unk_1017B9D6B, v73, 2, v75); /*0x10026de21*/
        }
        codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x10026de4b*/
          v65,
          503,
          &unk_1015DDD07,
          146,
          &unk_1015DDBD9,
          0xFu);
        goto LABEL_100; /*0x10026de50*/
      }
      if ( (_BYTE)__src ) /*0x10026dd63*/
      {
        if ( *(_QWORD *)(a2 + 360) <= 0xCu ) /*0x10026dd71*/
        {
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 2u ) /*0x10026dd85*/
          {
LABEL_41:
            codexmate_lib::core::relay::proxy_server::record_codex_openai_passthrough_route::hfd4fdfaf7886fb4a( /*0x10026df9e*/
              *(__int64 **)(a2 + 168),
              *(void **)(a2 + 304),
              *(_QWORD *)(a2 + 312),
              *(const void **)(a2 + 328),
              *(_QWORD *)(a2 + 336),
              0,
              v63);
            *(_QWORD *)(a2 + 704) = codexmate_lib::core::relay::proxy_server::ProxyContext::upstream::h3ecec722c869e74b(*(_QWORD *)(a2 + 168)); /*0x10026dfd5*/
            v30 = v76; /*0x10026dfe6*/
            _$LT$serde_json..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::h8271c7755bc56075(a2 + 760, v76); /*0x10026dfea*/
            codexmate_lib::core::relay::proxy_server::sanitize_body_for_official_upstream::hfbf77cd4d93d2100( /*0x10026dff2*/
              (_BYTE *)(a2 + 760),
              (__int64)v30);
            v5 = v77; /*0x10026dff7*/
            *(_QWORD *)(a2 + 728) = a2 + 704; /*0x10026e002*/
            *(_QWORD *)(a2 + 736) = v74; /*0x10026e010*/
            *(_QWORD *)(a2 + 744) = a2 + 760; /*0x10026e017*/
            *(_WORD *)(a2 + 753) = 256; /*0x10026e01e*/
LABEL_42:
            codexmate_lib::core::relay::proxy_passthrough::forward_to_openai::_$u7b$$u7b$closure$u7d$$u7d$::h38707532c597c01e( /*0x10026e027*/
              v75,
              a2 + 712,
              a3);
            if ( LODWORD(v75[0]) == 3 ) /*0x10026e047*/
            {
              *v5 = 3; /*0x10026e049*/
              result = 3; /*0x10026e051*/
              goto LABEL_110; /*0x10026e053*/
            }
            qmemcpy(v73, v75, sizeof(v73)); /*0x10026e06b*/
            if ( *(_BYTE *)(a2 + 753) == 3 ) /*0x10026e075*/
            {
              core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a2 + 712); /*0x10026e07a*/
              *(_BYTE *)(a2 + 752) = 0; /*0x10026e07f*/
            }
            _$LT$$RF$str$u20$as$u20$http..header..map..as_header_name..Sealed$GT$::find::h6639e9683dd8a52e( /*0x10026e0a0*/
              v75,
              "x-aimami-reasoninput",
              15,
              v73);
            if ( LOBYTE(v75[0]) ) /*0x10026e0ac*/
            {
              if ( v75[2] >= v73[5] ) /*0x10026e0c3*/
                core::panicking::panic_bounds_check::h56740b1198b22635( /*0x10026ebcd*/
                  v75[2],
                  v73[5],
                  &anon_39a6e93098609d65551b0fc4eadbbbd9_907,
                  v32);
              v33 = *(_QWORD *)(v73[4] + 104 * v75[2] + 40); /*0x10026e0d4*/
              if ( v33 ) /*0x10026e0dc*/
              {
                v34 = *(_QWORD *)(v73[4] + 104 * v75[2] + 32); /*0x10026e0de*/
                v35 = 0; /*0x10026e0e3*/
                while ( (unsigned __int8)(*(_BYTE *)(v34 + v35) - 32) < 0x5Fu || *(_BYTE *)(v34 + v35) == 9 ) /*0x10026e10a*/
                {
                  if ( v33 == ++v35 ) /*0x10026e112*/
                  {
                    if ( v33 == 19 ) /*0x10026e118*/
                    {
                      v36 = _mm_or_si128( /*0x10026e133*/
                              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v34), (__m128i)xmmword_1015DCA80),
                              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v34 + 3)), (__m128i)xmmword_1015DCA70));
                      if ( _mm_testz_si128(v36, v36) ) /*0x10026e137*/
                        codexmate_lib::core::relay::proxy_server::ProxyContext::note_network_failure::h1ac7213a89a53d0c(*(_QWORD *)(a2 + 168)); /*0x10026e145*/
                    }
                    break; /*0x10026e145*/
                  }
                }
              }
            }
            codexmate_lib::core::relay::proxy_server::record_codex_openai_passthrough_route::hfd4fdfaf7886fb4a( /*0x10026e14a*/
              *(__int64 **)(a2 + 168),
              *(void **)(a2 + 304),
              *(_QWORD *)(a2 + 312),
              *(const void **)(a2 + 328),
              *(_QWORD *)(a2 + 336),
              1,
              v73[13]);
            v77 = v5; /*0x10026e181*/
            qmemcpy(v65, v73, sizeof(v65)); /*0x10026e198*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 760); /*0x10026e1a2*/
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 704)) ) /*0x10026e1ae*/
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 704, &v74); /*0x10026e1bf*/
            goto LABEL_100; /*0x10026e1c4*/
          }
LABEL_40:
          v73[0] = a2 + 320; /*0x10026df31*/
          v73[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10026df3f*/
          v75[0] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026df4d*/
          v75[1] = 40; /*0x10026df54*/
          v75[2] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026df5f*/
          v75[3] = 40; /*0x10026df66*/
          v75[4] = (__int64)&off_10195D8D0; /*0x10026df78*/
          log::__private_api::log::h719f4907c7336ae9(&unk_1017B9E6C, v73, 3, v75); /*0x10026df99*/
          goto LABEL_41; /*0x10026df99*/
        }
        if ( **(_QWORD **)(a2 + 352) ^ 0x725F696D616D6961LL /*0x10026df18*/
           | *(_QWORD *)(*(_QWORD *)(a2 + 352) + 5LL) ^ 0x5F79616C65725F69LL )
        {
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 2u ) /*0x10026df2f*/
            goto LABEL_41; /*0x10026df2f*/
          goto LABEL_40; /*0x10026df2f*/
        }
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x10026e570*/
        {
          v73[0] = a2 + 320; /*0x10026e576*/
          v73[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10026e584*/
          v73[2] = a2 + 304; /*0x10026e58b*/
          v73[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10026e599*/
          v75[0] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026e5a7*/
          v75[1] = 40; /*0x10026e5ae*/
          v75[2] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026e5b9*/
          v75[3] = 40; /*0x10026e5c0*/
          v75[4] = (__int64)&off_10195D8E8; /*0x10026e5d2*/
          log::__private_api::log::h719f4907c7336ae9(&unk_1017B9EB1, v73, 3, v75); /*0x10026e5f3*/
        }
        codexmate_lib::core::relay::proxy_server::record_codex_route::h0d853fc1531bef50( /*0x10026e64b*/
          *(_QWORD **)(a2 + 168),
          *(const void **)(a2 + 304),
          *(_QWORD *)(a2 + 312),
          *(const void **)(a2 + 328),
          *(_QWORD *)(a2 + 336),
          0,
          nullptr,
          v64,
          1u,
          0xC8u,
          (__int64)"local compact compatibility responseno relay provider configured for codexall codex relay providers failed; please check provider config / networkgpt-image-2",
          36);
        codexmate_lib::core::relay::proxy_server::codex_local_compact_compat_response::hd8bce4ade049df87( /*0x10026e669*/
          v65,
          (__int64)v76,
          *(const void **)(a2 + 328),
          *(_QWORD *)(a2 + 336));
LABEL_100:
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(a2 + 368); /*0x10026e963*/
        goto LABEL_101; /*0x10026e96a*/
      }
      *(_BYTE *)(a2 + 699) = 0; /*0x10026de55*/
      v75[3] = v76[3]; /*0x10026de64*/
      v75[2] = v76[2]; /*0x10026de6f*/
      v28 = *v76; /*0x10026de76*/
      v75[1] = v76[1]; /*0x10026de7d*/
      v75[0] = v28; /*0x10026de84*/
      codexmate_lib::core::relay::proxy_server::expand_aimami_compactions_for_upstream::hb726aa1e46cd8e17( /*0x10026de9c*/
        (_QWORD *)(a2 + 664),
        v75);
      codexmate_lib::core::relay::proxy_server::resolve_relay_route::he8d67a121f56dd01( /*0x10026debd*/
        (void *)(a2 + 704),
        v79,
        *(char **)(a2 + 352),
        *(_QWORD *)(a2 + 360));
      if ( *(_QWORD *)(a2 + 704) != 0x8000000000000000LL ) /*0x10026ded3*/
      {
        v76 = (_QWORD *)(a2 + 320); /*0x10026e1c9*/
        *(_BYTE *)(a2 + 701) = 1; /*0x10026e1d0*/
        memcpy((void *)(a2 + 936), (const void *)(a2 + 704), 0xE8u); /*0x10026e1e9*/
        v37 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 16LL) + 16LL; /*0x10026e1f9*/
        __src = (void *)(a2 + 936); /*0x10026e1fd*/
        v38 = codexmate_lib::core::relay::storage::lazy_load_api_key::h1b51e8f1fd913730(v37); /*0x10026e204*/
        v39 = a2 + 664; /*0x10026e20b*/
        v40 = v76; /*0x10026e20e*/
        if ( v38 ) /*0x10026e212*/
        {
          std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(v73, **(_QWORD **)(a2 + 168) + 16LL); /*0x10026e22d*/
          if ( LOBYTE(v73[0]) ) /*0x10026e239*/
          {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..relay..models..RelayState$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..relay..models..RelayState$GT$$GT$$GT$$GT$::h3879aacd7ba5cf5c(v73); /*0x10026e246*/
          }
          else
          {
            v80 = v73[2]; /*0x10026e681*/
            v48 = *(_QWORD *)(v73[1] + 24LL); /*0x10026e684*/
            v79 = v73[1]; /*0x10026e688*/
            v49 = v48 + 232LL * *(_QWORD *)(v73[1] + 32LL); /*0x10026e694*/
            v70 = v48; /*0x10026e697*/
            v71 = v49; /*0x10026e69e*/
            v50 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h2caca272e36d40b5( /*0x10026e6ba*/
                    &v70,
                    *(_QWORD *)(a2 + 944),
                    *(_QWORD *)(a2 + 952));
            if ( v50 ) /*0x10026e6c2*/
            {
              v51 = (_QWORD *)v50; /*0x10026e6c4*/
              v69 = a2 + 664; /*0x10026e6c7*/
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v75, a2 + 1008); /*0x10026e6dc*/
              v52 = v51[9]; /*0x10026e6e8*/
              if ( v52 ) /*0x10026e6f0*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[10], v52, 1); /*0x10026e6fc*/
              v51[11] = v75[2]; /*0x10026e708*/
              v53 = v75[0]; /*0x10026e70c*/
              v51[10] = v75[1]; /*0x10026e71a*/
              v51[9] = v53; /*0x10026e71e*/
              v39 = v69; /*0x10026e721*/
            }
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..ipc..authority..RuntimeAuthority$GT$$GT$::hb9398d9c5518911a( /*0x10026e730*/
              v79,
              v80);
          }
        }
        _$LT$serde_json..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::h8271c7755bc56075(v75, v39); /*0x10026e73f*/
        codexmate_lib::core::relay::proxy_server::drop_cross_provider_previous_response_id::h40e9e7b8e03be2ad( /*0x10026e755*/
          a2 + 3336,
          v75);
        *(_BYTE *)(a2 + 700) = 1; /*0x10026e75a*/
        if ( *(_BYTE *)(a2 + 3336) == 5 ) /*0x10026e768*/
        {
          _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::ha6157aedeeebe3ed(v66); /*0x10026e775*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v70, a2 + 1032); /*0x10026e788*/
          v75[3] = v72; /*0x10026e79b*/
          v75[2] = v71; /*0x10026e7b0*/
          v75[1] = v70; /*0x10026e7b7*/
          LOBYTE(v75[0]) = 3; /*0x10026e7be*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v73, a2 + 3344, v66, v75); /*0x10026e7da*/
          if ( LOBYTE(v73[0]) != 6 ) /*0x10026e7e6*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v73); /*0x10026e7ef*/
        }
        v79 = *(_QWORD *)(a2 + 168); /*0x10026e7fb*/
        v54 = (void *)alloc::alloc::exchange_malloc::h35ae2f61eae31883(232); /*0x10026e809*/
        *(_BYTE *)(a2 + 701) = 0; /*0x10026e80c*/
        memcpy(v54, __src, 0xE8u); /*0x10026e81f*/
        *(_BYTE *)(a2 + 700) = 0; /*0x10026e824*/
        v55 = *(_QWORD *)(a2 + 304); /*0x10026e82b*/
        v56 = *(_QWORD *)(a2 + 312); /*0x10026e832*/
        *(_BYTE *)(a2 + 698) = 0; /*0x10026e839*/
        *(_QWORD *)(a2 + 1168) = 1; /*0x10026e840*/
        *(_QWORD *)(a2 + 1176) = v54; /*0x10026e84b*/
        *(_QWORD *)(a2 + 1184) = 1; /*0x10026e852*/
        v57 = v40[1]; /*0x10026e861*/
        *(_QWORD *)(a2 + 1192) = *v40; /*0x10026e865*/
        *(_QWORD *)(a2 + 1200) = v57; /*0x10026e86c*/
        *(_QWORD *)(a2 + 1208) = v40[2]; /*0x10026e877*/
        v58 = *(_QWORD *)(a2 + 3344); /*0x10026e882*/
        *(_QWORD *)(a2 + 1216) = *(_QWORD *)(a2 + 3336); /*0x10026e887*/
        *(_QWORD *)(a2 + 1224) = v58; /*0x10026e88e*/
        *(_QWORD *)(a2 + 1232) = *(_QWORD *)(a2 + 3352); /*0x10026e89a*/
        *(_QWORD *)(a2 + 1240) = *(_QWORD *)(a2 + 3360); /*0x10026e8a6*/
        *(_QWORD *)(a2 + 1248) = v79; /*0x10026e8b1*/
        *(_QWORD *)(a2 + 1256) = v74; /*0x10026e8bf*/
        *(_QWORD *)(a2 + 1264) = v55; /*0x10026e8c6*/
        *(_QWORD *)(a2 + 1272) = v56; /*0x10026e8cd*/
        *(_QWORD *)(a2 + 1280) = v67; /*0x10026e8db*/
        *(_QWORD *)(a2 + 1288) = v68; /*0x10026e8e9*/
        *(_BYTE *)(a2 + 1752) = 0; /*0x10026e8f0*/
        v5 = v77; /*0x10026e8f7*/
LABEL_96:
        codexmate_lib::core::relay::proxy_server::forward_codex_responses_internal::_$u7b$$u7b$closure$u7d$$u7d$::ha0a9686e22e589cb( /*0x10026e8fb*/
          v75,
          a2 + 1168,
          (__int64)a3);
        if ( LODWORD(v75[0]) == 3 ) /*0x10026e91b*/
        {
          *v5 = 3; /*0x10026e91d*/
          result = 4; /*0x10026e925*/
          goto LABEL_110; /*0x10026e927*/
        }
        v77 = v5; /*0x10026e92c*/
        qmemcpy(v65, v75, sizeof(v65)); /*0x10026e943*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_codex_responses_internal..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8d8a4dfaefecb062(a2 + 1168); /*0x10026e949*/
        *(_WORD *)(a2 + 700) = 0; /*0x10026e94e*/
        goto LABEL_99; /*0x10026e94e*/
      }
      if ( *(_QWORD *)(a2 + 360) <= 0xCu ) /*0x10026dee1*/
      {
        v29 = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x10026deee*/
        goto LABEL_61; /*0x10026def1*/
      }
      v29 = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x10026e27c*/
      if ( !(**(_QWORD **)(a2 + 352) ^ 0x725F696D616D6961LL /*0x10026e27f*/
           | *(_QWORD *)(*(_QWORD *)(a2 + 352) + 5LL) ^ 0x5F79616C65725F69LL) )
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10026ea15*/
        {
          v73[0] = a2 + 320; /*0x10026ea17*/
          v73[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10026ea25*/
          v75[0] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026ea33*/
          v75[1] = 40; /*0x10026ea3a*/
          v75[2] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026ea45*/
          v75[3] = 40; /*0x10026ea4c*/
          v75[4] = (__int64)&off_10195D8B8; /*0x10026ea5e*/
          log::__private_api::log::h719f4907c7336ae9(&unk_1017B9E0C, v73, 2, v75); /*0x10026ea7f*/
        }
        codexmate_lib::core::relay::proxy_server::record_codex_route::h0d853fc1531bef50( /*0x10026ead7*/
          *(_QWORD **)(a2 + 168),
          *(const void **)(a2 + 304),
          *(_QWORD *)(a2 + 312),
          *(const void **)(a2 + 328),
          *(_QWORD *)(a2 + 336),
          0,
          nullptr,
          v64,
          1u,
          0x194u,
          (__int64)&unk_1015DDD99,
          52);
        v73[0] = a2 + 320; /*0x10026eadc*/
        v73[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10026eaea*/
        alloc::fmt::format::h69ce1ddff65303f5(v75, &unk_1015DDDCD, v73); /*0x10026eb06*/
        v61 = v75[0]; /*0x10026eb0b*/
        v62 = v75[1]; /*0x10026eb12*/
        codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x10026eb3c*/
          v65,
          404,
          (void *)v75[1],
          v75[2],
          &unk_1015DDE8F,
          0x1Du);
        if ( v61 ) /*0x10026eb44*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v61, 1); /*0x10026eb55*/
LABEL_99:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 664); /*0x10026e957*/
        goto LABEL_100; /*0x10026e95e*/
      }
LABEL_61:
      if ( v29 > 2 ) /*0x10026e289*/
      {
        v73[0] = a2 + 320; /*0x10026e28b*/
        v73[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10026e299*/
        v75[0] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026e2a7*/
        v75[1] = 40; /*0x10026e2ae*/
        v75[2] = (__int64)"codexmate_lib::core::relay::proxy_serverstream"; /*0x10026e2b9*/
        v75[3] = 40; /*0x10026e2c0*/
        v75[4] = (__int64)&off_10195D8A0; /*0x10026e2d2*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017B9DCF, v73, 3, v75); /*0x10026e2f3*/
      }
      codexmate_lib::core::relay::proxy_server::record_codex_openai_passthrough_route::hfd4fdfaf7886fb4a( /*0x10026e31e*/
        *(__int64 **)(a2 + 168),
        *(void **)(a2 + 304),
        *(_QWORD *)(a2 + 312),
        *(const void **)(a2 + 328),
        *(_QWORD *)(a2 + 336),
        0,
        v63);
      *(_QWORD *)(a2 + 704) = codexmate_lib::core::relay::proxy_server::ProxyContext::upstream::h3ecec722c869e74b(*(_QWORD *)(a2 + 168)); /*0x10026e32f*/
      _$LT$serde_json..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::h8271c7755bc56075(a2 + 760, a2 + 664); /*0x10026e343*/
      codexmate_lib::core::relay::proxy_server::sanitize_body_for_official_upstream::hfbf77cd4d93d2100( /*0x10026e34b*/
        (_BYTE *)(a2 + 760),
        a2 + 664);
      *(_QWORD *)(a2 + 728) = a2 + 704; /*0x10026e350*/
      *(_QWORD *)(a2 + 736) = v74; /*0x10026e35e*/
      *(_QWORD *)(a2 + 744) = a2 + 760; /*0x10026e365*/
      *(_WORD *)(a2 + 753) = 0; /*0x10026e36c*/
      v5 = v77; /*0x10026e375*/
LABEL_64:
      codexmate_lib::core::relay::proxy_passthrough::forward_to_openai::_$u7b$$u7b$closure$u7d$$u7d$::h38707532c597c01e( /*0x10026e379*/
        v75,
        a2 + 712,
        a3);
      if ( LODWORD(v75[0]) == 3 ) /*0x10026e399*/
      {
        *v5 = 3; /*0x10026e39b*/
        result = 5; /*0x10026e3a3*/
        goto LABEL_110; /*0x10026e3a5*/
      }
      qmemcpy(v73, v75, sizeof(v73)); /*0x10026e3bd*/
      if ( *(_BYTE *)(a2 + 753) == 3 ) /*0x10026e3c7*/
      {
        core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a2 + 712); /*0x10026e3cc*/
        *(_BYTE *)(a2 + 752) = 0; /*0x10026e3d1*/
      }
      _$LT$$RF$str$u20$as$u20$http..header..map..as_header_name..Sealed$GT$::find::h6639e9683dd8a52e( /*0x10026e3f2*/
        v75,
        "x-aimami-reasoninput",
        15,
        v73);
      if ( LOBYTE(v75[0]) ) /*0x10026e3fe*/
      {
        if ( v75[2] >= v73[5] ) /*0x10026e415*/
          core::panicking::panic_bounds_check::h56740b1198b22635( /*0x10026ebdb*/
            v75[2],
            v73[5],
            &anon_39a6e93098609d65551b0fc4eadbbbd9_907,
            v41);
        v42 = *(_QWORD *)(v73[4] + 104 * v75[2] + 40); /*0x10026e426*/
        if ( v42 ) /*0x10026e42e*/
        {
          v43 = *(_QWORD *)(v73[4] + 104 * v75[2] + 32); /*0x10026e430*/
          v44 = 0; /*0x10026e435*/
          while ( (unsigned __int8)(*(_BYTE *)(v43 + v44) - 32) < 0x5Fu || *(_BYTE *)(v43 + v44) == 9 ) /*0x10026e45a*/
          {
            if ( v42 == ++v44 ) /*0x10026e462*/
            {
              if ( v42 == 19 ) /*0x10026e468*/
              {
                v45 = _mm_or_si128( /*0x10026e483*/
                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)v43), (__m128i)xmmword_1015DCA80),
                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v43 + 3)), (__m128i)xmmword_1015DCA70));
                if ( _mm_testz_si128(v45, v45) ) /*0x10026e487*/
                  codexmate_lib::core::relay::proxy_server::ProxyContext::note_network_failure::h1ac7213a89a53d0c(*(_QWORD *)(a2 + 168)); /*0x10026e495*/
              }
              break; /*0x10026e495*/
            }
          }
        }
      }
      codexmate_lib::core::relay::proxy_server::record_codex_openai_passthrough_route::hfd4fdfaf7886fb4a( /*0x10026e49a*/
        *(__int64 **)(a2 + 168),
        *(void **)(a2 + 304),
        *(_QWORD *)(a2 + 312),
        *(const void **)(a2 + 328),
        *(_QWORD *)(a2 + 336),
        1,
        v73[13]);
      qmemcpy(v65, v73, sizeof(v65)); /*0x10026e4e4*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 760); /*0x10026e4ee*/
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 704)) ) /*0x10026e4fa*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 704, &v74); /*0x10026e507*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 664); /*0x10026e513*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(a2 + 368); /*0x10026e51f*/
      v46 = *(_QWORD *)(a2 + 344); /*0x10026e524*/
      if ( v46 ) /*0x10026e52e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 352), v46, 1); /*0x10026e53c*/
      v47 = *(_QWORD *)(a2 + 320); /*0x10026e541*/
      if ( v47 ) /*0x10026e54b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 328), v47, 1); /*0x10026e559*/
      *(_WORD *)(a2 + 698) = 0; /*0x10026e55e*/
LABEL_109:
      core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a2 + 176); /*0x10026e9d9*/
      qmemcpy(v5, v65, 0x80u); /*0x10026e9f4*/
      result = 1; /*0x10026e9f7*/
LABEL_110:
      *(_BYTE *)(a2 + 697) = result; /*0x10026e9f9*/
      return result;
    case 1: /*0x10026da82*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D900); /*0x10026ebc1*/
    case 2: /*0x10026da82*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D900); /*0x10026ebb5*/
    case 3: /*0x10026da82*/
      goto LABEL_42;
    case 4: /*0x10026da82*/
      goto LABEL_96;
    case 5: /*0x10026da82*/
      goto LABEL_64;
  }
}