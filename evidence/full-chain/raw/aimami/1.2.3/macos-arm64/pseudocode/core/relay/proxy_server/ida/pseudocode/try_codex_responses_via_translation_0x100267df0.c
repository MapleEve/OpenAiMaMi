// __ZN13codexmate_lib4core5relay12proxy_server35try_codex_responses_via_translation28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100267df0 | 基线 same-set
// [FULL decompile]

char __fastcall codexmate_lib::core::relay::proxy_server::try_codex_responses_via_translation::_$u7b$$u7b$closure$u7d$$u7d$::hca8954d2ab7010ba(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  signed __int64 v9; // r12
  bool v10; // zf
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r13
  int v20; // eax
  const void *v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rsi
  __int16 v24; // r14
  __int16 v25; // r8
  void (__fastcall **v26)(__int64); // rdx
  __int64 v27; // r15
  void (__fastcall **v28)(__int64); // r12
  __int64 v29; // r14
  void (__fastcall *v30)(__int64); // rsi
  int v31; // ecx
  unsigned int v32; // ecx
  int v33; // edx
  __int64 (__fastcall **v34)(); // r15
  __int64 v35; // r13
  __int64 (__fastcall ***v36)(); // rsi
  __int64 v37; // rsi
  __int64 *v38; // rax
  char result; // al
  void *v40; // r14
  signed __int64 v41; // r15
  __int64 v42; // r12
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rsi
  __int64 *v46; // rax
  _OWORD *v47; // r15
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r12
  _OWORD *v51; // rdi
  __int64 v52; // rsi
  void *v53; // rax
  void *v54; // r15
  char v55; // of
  __int64 (__fastcall **v56)(); // r12
  __int64 v57; // r15
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 *v60; // rax
  char *v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // r12
  char *v65; // rdi
  __int64 v66; // rsi
  void *v67; // rax
  volatile signed __int64 *v68; // r14
  __int64 v69; // rt0
  volatile signed __int64 *v70; // r13
  __int64 v71; // rt0
  __int64 v72; // rsi
  __int64 v73; // rax
  __int16 v74; // r8
  _QWORD *v75; // rax
  _QWORD *v76; // r15
  __int64 v77; // r13
  __int64 v78; // rsi
  unsigned __int16 v79; // [rsp+18h] [rbp-948h]
  __int64 v80; // [rsp+28h] [rbp-938h]
  _BYTE v81[120]; // [rsp+30h] [rbp-930h] BYREF
  _BYTE v82[96]; // [rsp+A8h] [rbp-8B8h] BYREF
  _QWORD v83[15]; // [rsp+108h] [rbp-858h] BYREF
  __int64 (__fastcall **v84)(); // [rsp+180h] [rbp-7E0h] BYREF
  _BYTE v85[120]; // [rsp+188h] [rbp-7D8h] BYREF
  _BYTE v86[32]; // [rsp+200h] [rbp-760h] BYREF
  _OWORD v87[27]; // [rsp+220h] [rbp-740h] BYREF
  _BYTE v88[104]; // [rsp+3D0h] [rbp-590h] BYREF
  __int16 v89; // [rsp+438h] [rbp-528h]
  int v90; // [rsp+43Ah] [rbp-526h]
  __int16 v91; // [rsp+43Eh] [rbp-522h]
  __int128 v92; // [rsp+4E0h] [rbp-480h]
  __int64 v93; // [rsp+4F0h] [rbp-470h]
  __int64 v94; // [rsp+4F8h] [rbp-468h]
  __int64 *v95; // [rsp+500h] [rbp-460h]
  __int64 v96; // [rsp+508h] [rbp-458h]
  __int64 v97; // [rsp+510h] [rbp-450h]
  __int64 v98; // [rsp+518h] [rbp-448h]
  __int128 v99; // [rsp+520h] [rbp-440h]
  __int64 v100; // [rsp+530h] [rbp-430h]
  __int64 v101; // [rsp+538h] [rbp-428h]
  __int64 *v102; // [rsp+540h] [rbp-420h]
  __int64 v103; // [rsp+548h] [rbp-418h]
  __int64 v104; // [rsp+550h] [rbp-410h]
  __int64 v105; // [rsp+558h] [rbp-408h]
  __int64 v106; // [rsp+560h] [rbp-400h]
  __int64 v107; // [rsp+568h] [rbp-3F8h]
  _OWORD __dst[31]; // [rsp+570h] [rbp-3F0h] BYREF
  __int128 v109; // [rsp+760h] [rbp-200h] BYREF
  __int128 v110; // [rsp+770h] [rbp-1F0h]
  _BYTE v111[112]; // [rsp+780h] [rbp-1E0h] BYREF
  __int64 v112; // [rsp+7F0h] [rbp-170h] BYREF
  __int128 v113; // [rsp+7F8h] [rbp-168h]
  __int64 v114; // [rsp+808h] [rbp-158h]
  __int128 v115; // [rsp+810h] [rbp-150h]
  __int128 v116; // [rsp+820h] [rbp-140h]
  __int128 v117; // [rsp+830h] [rbp-130h]
  __int64 v118; // [rsp+840h] [rbp-120h]
  _OWORD v119[6]; // [rsp+848h] [rbp-118h] BYREF
  _BYTE v120[112]; // [rsp+8A8h] [rbp-B8h] BYREF
  __int64 *v121; // [rsp+918h] [rbp-48h]
  __int128 v122; // [rsp+920h] [rbp-40h]
  int v123; // [rsp+930h] [rbp-30h]
  __int16 v124; // [rsp+934h] [rbp-2Ch]

  v121 = a1;
  switch ( *(_BYTE *)(a2 + 432) )
  {
    case 0:
      *(_WORD *)(a2 + 430) = 256;
      *(_BYTE *)(a2 + 429) = 0;
      *(_OWORD *)(a2 + 176) = *(_OWORD *)(a2 + 384);
      v5 = *(_QWORD *)(a2 + 152);
      *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 144);
      *(_QWORD *)(a2 + 120) = v5;
      v6 = *(_QWORD *)(a2 + 72);
      *(_QWORD *)a2 = *(_QWORD *)(a2 + 64);
      *(_QWORD *)(a2 + 8) = v6;
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(a2 + 80);
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(a2 + 426) = *(_BYTE *)(a2 + 433);
      *(_BYTE *)(a2 + 427) = *(_BYTE *)(a2 + 434);
      v7 = *(_QWORD *)(a2 + 168);
      *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a2 + 136) = v7;
      v8 = *(_QWORD *)(a2 + 96);
      v9 = *(_QWORD *)(a2 + 104);
      *(_OWORD *)(a2 + 192) = *(_OWORD *)(a2 + 400);
      *(_QWORD *)(a2 + 208) = *(_QWORD *)(a2 + 416);
      if ( v8 )
      {
        v10 = v9 == 0;
        if ( v9 < 0 )
        {
LABEL_4:
          v11 = 0;
          goto LABEL_5;
        }
      }
      else
      {
        a1 = (__int64 *)&unk_1015DD1EB;
        v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &unk_1015DD1EB,
                5,
                a2);
        if ( !v12 || *(_BYTE *)v12 != 3 )
        {
          v8 = 1;
          v9 = 0;
          v14 = 1;
          goto LABEL_14;
        }
        v8 = *(_QWORD *)(v12 + 16);
        v9 = *(_QWORD *)(v12 + 24);
        v10 = v9 == 0;
        if ( v9 < 0 )
          goto LABEL_4;
      }
      if ( v10 )
      {
        v14 = 1;
        v9 = 0;
      }
      else
      {
        *(_QWORD *)&v122 = v8;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, v8);
        v11 = 1;
        v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1);
        if ( !v13 )
LABEL_5:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v9);
        v14 = v13;
        v8 = v122;
      }
LABEL_14:
      memcpy((void *)v14, (const void *)v8, v9);
      *(_QWORD *)(a2 + 216) = v9;
      *(_QWORD *)(a2 + 224) = v14;
      *(_QWORD *)(a2 + 232) = v9;
      codexmate_lib::core::relay::proxy_server::record_codex_route::h0d853fc1531bef50(
        *(_QWORD **)(a2 + 176),
        *(const void **)(a2 + 128),
        *(_QWORD *)(a2 + 136),
        (const void *)v14,
        v9,
        *(_QWORD *)(a2 + 184),
        *(void **)(a2 + 112),
        *(_QWORD *)(a2 + 120),
        0,
        v79,
        0,
        v80);
      *(_BYTE *)(a2 + 431) = 0;
      v15 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)a2;
      *(_QWORD *)(a2 + 40) = v15;
      *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 24);
      *(_BYTE *)(a2 + 428) = 0;
      while ( 1 )
      {
        codexmate_lib::core::relay::proxy_server::build_upstream_headers::hfb8c5da4446947b4(v82, *(_QWORD *)(a2 + 184));
        *(_BYTE *)(a2 + 430) = 1;
        v16 = codexmate_lib::core::relay::proxy_server::ProxyContext::client_for::ha60cf1864b88a927(
                *(_QWORD *)(*(_QWORD *)(a2 + 176) + 24LL),
                *(_QWORD *)(*(_QWORD *)(a2 + 176) + 32LL),
                *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 229LL));
        *(_QWORD *)(a2 + 240) = v16;
        reqwest::async_impl::client::Client::request::h7c49bfd56329fb46(
          __dst,
          v16,
          &anon_39a6e93098609d65551b0fc4eadbbbd9_845,
          *(_QWORD *)(a2 + 112),
          *(_QWORD *)(a2 + 120));
        *(_BYTE *)(a2 + 430) = 0;
        qmemcpy(v120, v82, 0x60u);
        reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(v87, __dst);
        reqwest::async_impl::request::RequestBuilder::json::hc3bd6ec843dbdd77(v88, v87);
        *(_QWORD *)(a2 + 440) = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(v88);
        *(_QWORD *)(a2 + 448) = v17;
LABEL_19:
        _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d(
          __dst,
          a2 + 440,
          a3);
        v18 = *(_QWORD *)&__dst[0];
        if ( *(_QWORD *)&__dst[0] == 4 )
        {
          *v121 = 6;
          result = 3;
          goto LABEL_61;
        }
        v19 = *((_QWORD *)&__dst[0] + 1);
        qmemcpy(v81, &__dst[1], sizeof(v81));
        core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a2 + 440);
        if ( (_DWORD)v18 == 3 )
        {
          *(_QWORD *)v120 = v19;
          codexmate_lib::core::relay::proxy_server::ProxyContext::note_network_failure::h1ac7213a89a53d0c(*(_QWORD *)(a2 + 176));
          *(_QWORD *)&v87[0] = v120;
          *((_QWORD *)&v87[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B9947, v87);
          v40 = *((void **)&__dst[0] + 1);
          *(_OWORD *)v88 = __dst[0];
          v41 = *(_QWORD *)&__dst[1];
          *(_QWORD *)&v88[16] = *(_QWORD *)&__dst[1];
          codexmate_lib::core::relay::proxy_server::record_codex_route::h0d853fc1531bef50(
            *(_QWORD **)(a2 + 176),
            *(const void **)(a2 + 128),
            *(_QWORD *)(a2 + 136),
            *(const void **)(a2 + 224),
            *(_QWORD *)(a2 + 232),
            *(_QWORD *)(a2 + 184),
            *(void **)(a2 + 112),
            *(_QWORD *)(a2 + 120),
            0,
            v79,
            *((__int64 *)&__dst[0] + 1),
            *(__int64 *)&__dst[1]);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v87, v88);
          *(_QWORD *)&v122 = v40;
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            __dst,
            502,
            v40,
            v41,
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            0xEu);
          v35 = *(_QWORD *)&__dst[0];
          qmemcpy(v85, (char *)__dst + 8, sizeof(v85));
          v28 = *((void (__fastcall ***)(__int64))&v87[0] + 1);
          v34 = *(__int64 (__fastcall ***)())&v87[0];
          v29 = *(_QWORD *)&v87[1];
          v36 = *(__int64 (__fastcall ****)())v88;
          if ( *(_QWORD *)v88 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, *(_QWORD *)v88, 1);
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v120);
          goto LABEL_56;
        }
        *(_BYTE *)(a2 + 429) = 1;
        *(_QWORD *)(a2 + 248) = v18;
        *(_QWORD *)(a2 + 256) = v19;
        qmemcpy((void *)(a2 + 264), v81, 0x78u);
        v20 = *(_DWORD *)(a2 + 352);
        *(_WORD *)(a2 + 424) = v20;
        codexmate_lib::core::relay::proxy_server::record_codex_route::h0d853fc1531bef50(
          *(_QWORD **)(a2 + 176),
          *(const void **)(a2 + 128),
          *(_QWORD *)(a2 + 136),
          *(const void **)(a2 + 224),
          *(_QWORD *)(a2 + 232),
          *(_QWORD *)(a2 + 184),
          *(void **)(a2 + 112),
          *(_QWORD *)(a2 + 120),
          1u,
          v20,
          0,
          v80);
        v21 = (const void *)(a2 + 248);
        if ( (unsigned __int16)(*(_WORD *)(a2 + 424) - 200) <= 0x63u )
          break;
        *(_BYTE *)(a2 + 429) = 0;
        memcpy((void *)(a2 + 440), v21, 0x88u);
        *(_BYTE *)(a2 + 856) = 0;
LABEL_23:
        reqwest::async_impl::response::Response::bytes::_$u7b$$u7b$closure$u7d$$u7d$::h5d321b96357654fe(
          __dst,
          a2 + 440,
          a3);
        if ( LOBYTE(__dst[0]) )
        {
          *v121 = 6;
          result = 4;
          goto LABEL_61;
        }
        v110 = *(_OWORD *)((char *)&__dst[1] + 8);
        v109 = *(_OWORD *)((char *)__dst + 8);
        core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a2 + 440);
        if ( (_QWORD)v109 )
        {
          v119[1] = v110;
          v119[0] = v109;
        }
        else
        {
          *((_QWORD *)&v119[0] + 1) = 1;
          v119[1] = 0u;
          *(_QWORD *)&v119[0] = &anon_39a6e93098609d65551b0fc4eadbbbd9_846;
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38((char *)&v109 + 8);
        }
        if ( *(_BYTE *)(a2 + 428) || *(_WORD *)(a2 + 424) != 400 || !*(_BYTE *)(a2 + 427) )
          goto LABEL_41;
        alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v87, *((_QWORD *)&v119[0] + 1), *(_QWORD *)&v119[1]);
        v22 = *((_QWORD *)&v87[0] + 1);
        if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 "web_search[AiMaMi] web_search tool rejected by upstream; retrying without itcodex responses translated stream failedcodex-router",
                                 0xAu,
                                 *((void **)&v87[0] + 1))
          || !(unsigned __int8)codexmate_lib::core::relay::translator::strip_anthropic_web_search_tools::hf53f6439255c07b9(a2 + 32) )
        {
          if ( 2LL * *(_QWORD *)&v87[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, *(_QWORD *)&v87[0], 1);
LABEL_41:
          v24 = 502;
          if ( (unsigned __int16)(*(_DWORD *)(a2 + 424) - 1000) >= 0xFC7Cu )
            v24 = *(_DWORD *)(a2 + 424);
          http::response::Parts::new::h962418c42e7bc305(v87);
          qmemcpy(v111, (char *)v87 + 8, 0x60u);
          v25 = WORD4(v87[6]);
          LODWORD(v112) = *(_DWORD *)((char *)&v87[6] + 10);
          WORD2(v112) = HIWORD(v87[6]);
          if ( *(_QWORD *)&v87[0] != 3 )
          {
            qmemcpy(v111, (char *)v87 + 8, 0x60u);
            WORD2(v112) = HIWORD(v87[6]);
            LODWORD(v112) = *(_DWORD *)((char *)&v87[6] + 10);
            v25 = v24;
          }
          *(_QWORD *)v88 = *(_QWORD *)&v87[0];
          qmemcpy(&v88[8], v111, 0x60u);
          v89 = v25;
          v90 = v112;
          v91 = WORD2(v112);
          v87[2] = 0u;
          *((_QWORD *)&v87[1] + 1) = 29;
          *(_QWORD *)&v87[1] = 0;
          *(_QWORD *)&v87[0] = &unk_1015DBAA0;
          *((_QWORD *)&v87[0] + 1) = 16;
          http::response::Builder::and_then::h8cb37f589ff149ea(v120, v88, v87);
          v87[1] = v119[1];
          v87[0] = v119[0];
          v27 = _$LT$axum_core..body..Body$u20$as$u20$core..convert..From$LT$bytes..bytes..Bytes$GT$$GT$::from::hc72db8ca21e2e159(v87);
          v28 = v26;
          v29 = *(_QWORD *)v120;
          if ( *(_QWORD *)v120 == 3 )
          {
            if ( *v26 )
              (*v26)(v27);
            v30 = v28[1];
            if ( v30 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v30, v28[2]);
            codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
              __dst,
              502,
              "build error body failedproxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
              23,
              "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
              0xEu);
          }
          else
          {
            memcpy((char *)__dst + 10, &v120[10], 0x66u);
            *(_QWORD *)&__dst[0] = *(_QWORD *)v120;
            WORD4(__dst[0]) = *(_WORD *)&v120[8];
            *(_QWORD *)&__dst[7] = v27;
            *((_QWORD *)&__dst[7] + 1) = v28;
          }
          v31 = *(unsigned __int16 *)(a2 + 424);
          if ( (unsigned __int16)(v31 - 500) < 0x64u
            || (v32 = v31 - 401, v32 <= 0x1C) && (v33 = 268435917, _bittest(&v33, v32)) )
          {
            *(_QWORD *)v88 = a2 + 424;
            *(_QWORD *)&v88[8] = _$LT$http..status..StatusCode$u20$as$u20$core..fmt..Display$GT$::fmt::h9532ff36c27bd9e7;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v87, &unk_1017B9CCE, v88);
            v28 = *((void (__fastcall ***)(__int64))&v87[0] + 1);
            v34 = *(__int64 (__fastcall ***)())&v87[0];
            v29 = *(_QWORD *)&v87[1];
            v35 = *(_QWORD *)&__dst[0];
            qmemcpy(v85, (char *)__dst + 8, sizeof(v85));
            v36 = (__int64 (__fastcall ***)())&__dst[8];
          }
          else
          {
            qmemcpy(v85, __dst, sizeof(v85));
            v36 = (__int64 (__fastcall ***)())&__dst[7] + 1;
            v35 = 5;
            v34 = *((__int64 (__fastcall ***)())&__dst[7] + 1);
          }
          goto LABEL_56;
        }
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u )
        {
          *(_QWORD *)&__dst[3] = 3;
          *((_QWORD *)&__dst[3] + 1) = "codexmate_lib::core::relay::proxy_serverstream";
          *(_QWORD *)&__dst[4] = 40;
          *(_QWORD *)&__dst[5] = "[AiMaMi] web_search tool rejected by upstream; retrying without itcodex responses translated stream failedcodex-router";
          *((_QWORD *)&__dst[5] + 1) = 133;
          *(_QWORD *)&__dst[0] = 0;
          *((_QWORD *)&__dst[0] + 1) = "codexmate_lib::core::relay::proxy_serverstream";
          __dst[1] = 0x28u;
          *(_QWORD *)&__dst[2] = "src/core/relay/proxy_server.rs";
          *((_QWORD *)&__dst[2] + 1) = 30;
          *((_QWORD *)&__dst[4] + 1) = 0x73200000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v88, __dst);
        }
        *(_BYTE *)(a2 + 428) = 1;
        if ( 2LL * *(_QWORD *)&v87[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, *(_QWORD *)&v87[0], 1);
        v23 = *((_QWORD *)&v119[0] + 1);
        (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)&v119[0] + 32LL))(
          (char *)&v119[1] + 8,
          *((_QWORD *)&v119[0] + 1),
          *(_QWORD *)&v119[1]);
        *(_BYTE *)(a2 + 429) = 0;
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 240)) )
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 240, v23);
        *(_BYTE *)(a2 + 430) = 0;
      }
      if ( *(_BYTE *)(a2 + 426) )
      {
        *(_BYTE *)(a2 + 429) = 0;
        memcpy(__dst, v21, 0x88u);
        v42 = reqwest::async_impl::response::Response::bytes_stream::h4afb02b64d51c5f9(__dst);
        v44 = v43;
        if ( *(_BYTE *)(a2 + 427) == 1 )
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
            v111,
            *(_QWORD *)(a2 + 184) + 96LL);
          v45 = *(_QWORD *)(a2 + 200);
          v122 = *(_OWORD *)(v45 + 32);
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h75267910c8af8f2e(v120);
          *(_OWORD *)&v120[32] = v122;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v120, v45);
          v46 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
          if ( !v46 )
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
          *v46 = v42;
          v46[1] = v44;
          v92 = 0;
          v93 = 1;
          v94 = 0;
          v95 = v46;
          LOBYTE(v96) = 0;
          v47 = *(_OWORD **)&v111[8];
          *(_OWORD *)&v88[32] = *(_OWORD *)&v120[32];
          *(_QWORD *)&v88[24] = *(_QWORD *)&v120[24];
          *(_QWORD *)&v88[16] = *(_QWORD *)&v120[16];
          *(_OWORD *)v88 = *(_OWORD *)v120;
          v48 = *(_QWORD *)&v111[8];
          codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::with_tool_name_map::hd264e5c42fa9ed78(
            v87,
            *(_QWORD *)&v111[8],
            *(_QWORD *)&v111[16],
            v88);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v87, v48);
          v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 8);
          if ( !v49 )
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64);
          v50 = v49;
          *(_QWORD *)(v49 + 56) = v98;
          *(_QWORD *)(v49 + 48) = v97;
          *(_QWORD *)(v49 + 40) = v96;
          *(_QWORD *)(v49 + 32) = v95;
          *(_QWORD *)(v49 + 24) = v94;
          *(_QWORD *)(v49 + 16) = v93;
          *(_OWORD *)v49 = v92;
          v51 = &__dst[2];
          memcpy(&__dst[2], v87, 0x170u);
          __dst[0] = 0;
          __dst[1] = 1u;
          *(_QWORD *)&__dst[25] = v50;
          BYTE8(__dst[25]) = 0;
          v52 = *(_QWORD *)v111;
          if ( *(_QWORD *)v111 )
          {
            v51 = v47;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, *(_QWORD *)v111, 1);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v52);
          v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(432, 8);
          if ( !v53 )
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 432);
          v54 = v53;
          memcpy(v53, __dst, 0x1B0u);
          v56 = &anon_155c4da9b5393270cfa7378e2b52c417_43;
        }
        else
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
            &v112,
            *(_QWORD *)(a2 + 184) + 96LL);
          v122 = *(_OWORD *)(*(_QWORD *)(a2 + 200) + 32LL);
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h75267910c8af8f2e(v119);
          v119[2] = v122;
          v59 = *(_QWORD *)(a2 + 208);
          v122 = *(_OWORD *)(v59 + 32);
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h127091071eec6b7a(v111);
          *(_OWORD *)&v111[32] = v122;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v111, v59);
          v60 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
          if ( !v60 )
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
          *v60 = v42;
          v60[1] = v44;
          v99 = 0;
          v100 = 1;
          v101 = 0;
          v102 = v60;
          LOBYTE(v103) = 0;
          v61 = (char *)v113;
          *(_OWORD *)&v120[32] = v119[2];
          *(_OWORD *)&v120[16] = v119[1];
          *(_OWORD *)v120 = v119[0];
          *(_OWORD *)&v88[32] = *(_OWORD *)&v111[32];
          *(_QWORD *)&v88[24] = *(_QWORD *)&v111[24];
          *(_QWORD *)&v88[16] = *(_QWORD *)&v111[16];
          *(_OWORD *)v88 = *(_OWORD *)v111;
          v62 = v113;
          codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::with_tool_maps::h5275ed9507ab0ed7(
            v87,
            v113,
            *((_QWORD *)&v113 + 1),
            v120,
            v88);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v87, v62);
          v63 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 8);
          if ( !v63 )
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64);
          v64 = v63;
          *(_QWORD *)(v63 + 56) = v105;
          *(_QWORD *)(v63 + 48) = v104;
          *(_QWORD *)(v63 + 40) = v103;
          *(_QWORD *)(v63 + 32) = v102;
          *(_QWORD *)(v63 + 24) = v101;
          *(_QWORD *)(v63 + 16) = v100;
          *(_OWORD *)v63 = v99;
          v65 = (char *)__dst + 8;
          memcpy((char *)__dst + 8, v87, 0x1B0u);
          *(_QWORD *)&__dst[0] = 0;
          *((_QWORD *)&__dst[27] + 1) = 0;
          __dst[28] = 1u;
          *(_QWORD *)&__dst[29] = v64;
          BYTE8(__dst[29]) = 0;
          v66 = v112;
          if ( v112 )
          {
            v65 = v61;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v112, 1);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v65, v66);
          v67 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(496, 8);
          if ( !v67 )
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 496);
          v54 = v67;
          memcpy(v67, __dst, 0x1F0u);
          v56 = &anon_155c4da9b5393270cfa7378e2b52c417_42;
        }
        v68 = **(volatile signed __int64 ***)(a2 + 176);
        v69 = _InterlockedIncrement64(v68);
        if ( (v69 < 0) ^ v55 | (v69 == 0)
          || (*(_QWORD *)v111 = v68,
              v70 = *(volatile signed __int64 **)(*(_QWORD *)(a2 + 176) + 8LL),
              v71 = _InterlockedIncrement64(v70),
              (v71 < 0) ^ v55 | (v71 == 0)) )
        {
          BUG();
        }
        *(_QWORD *)v120 = v70;
        v72 = *(_QWORD *)(a2 + 184);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v72);
        *(_QWORD *)v88 = v68;
        *(_QWORD *)&v87[0] = v70;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v72);
        v73 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
        if ( !v73 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
        *(_QWORD *)v73 = 1;
        *(_QWORD *)(v73 + 8) = 1;
        *(_BYTE *)(v73 + 16) = 0;
        v113 = *(_OWORD *)((char *)__dst + 8);
        v112 = *(_QWORD *)&__dst[0];
        *(_QWORD *)&v117 = v54;
        *((_QWORD *)&v117 + 1) = v56;
        v114 = v73;
        *(_QWORD *)&v115 = "codex responses translated stream failedcodex-router";
        *((_QWORD *)&v115 + 1) = 40;
        *(_QWORD *)&v116 = v70;
        *((_QWORD *)&v116 + 1) = v68;
        http::response::Parts::new::h962418c42e7bc305(__dst);
        qmemcpy(v119, (char *)__dst + 8, sizeof(v119));
        v74 = WORD4(__dst[6]);
        v123 = *(_DWORD *)((char *)&__dst[6] + 10);
        v124 = HIWORD(__dst[6]);
        if ( *(_QWORD *)&__dst[0] != 3 )
        {
          qmemcpy(v119, (char *)__dst + 8, sizeof(v119));
          v124 = HIWORD(__dst[6]);
          v123 = *(_DWORD *)((char *)&__dst[6] + 10);
          v74 = 200;
        }
        *(_QWORD *)&v87[0] = *(_QWORD *)&__dst[0];
        qmemcpy((char *)v87 + 8, v119, 0x60u);
        WORD4(v87[6]) = v74;
        *(_DWORD *)((char *)&v87[6] + 10) = v123;
        HIWORD(v87[6]) = v124;
        __dst[2] = 0u;
        *((_QWORD *)&__dst[1] + 1) = 29;
        *(_QWORD *)&__dst[1] = 0;
        *(_QWORD *)&__dst[0] = "text/event-stream";
        *((_QWORD *)&__dst[0] + 1) = 17;
        http::response::Builder::and_then::h8cb37f589ff149ea(v88, v87, __dst);
        __dst[2] = 0u;
        *((_QWORD *)&__dst[1] + 1) = 17;
        *(_QWORD *)&__dst[1] = 0;
        *(_QWORD *)&__dst[0] = "no-cacheidentityusernamepasswordfragmentif-matchif-rangelocationNoParentUnixTimeContinueexpectedsegmentsoriginalBorrowed";
        *((_QWORD *)&__dst[0] + 1) = 8;
        http::response::Builder::and_then::h8cb37f589ff149ea(v120, v88, __dst);
        *(_QWORD *)&__dst[0] = &unk_1015DD698;
        *((_QWORD *)&__dst[0] + 1) = 17;
        *(_QWORD *)&__dst[1] = &unk_1015DD6A9;
        *((_QWORD *)&__dst[1] + 1) = 2;
        http::response::Builder::and_then::h4e0760d990fde360(v111, v120, __dst);
        if ( __OFSUB__(-v112, 1) )
          core::option::unwrap_failed::h44626cade04bbf1e(&off_101960250);
        __dst[4] = v117;
        __dst[3] = v116;
        __dst[2] = v115;
        *((_QWORD *)&__dst[1] + 1) = v114;
        *(_QWORD *)&__dst[0] = v112;
        *(_OWORD *)((char *)__dst + 8) = v113;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v111, v120);
        v75 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 8);
        if ( !v75 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 80);
        v76 = v75;
        qmemcpy(v75, __dst, 0x50u);
        v29 = *(_QWORD *)v111;
        if ( *(_QWORD *)v111 == 3 )
        {
          v28 = (void (__fastcall **)(__int64))v75[8];
          v77 = v75[9];
          if ( *(_QWORD *)v77 )
            (*(void (__fastcall **)(_QWORD))v77)(v75[8]);
          v78 = *(_QWORD *)(v77 + 8);
          if ( v78 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v78, *(_QWORD *)(v77 + 16));
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..record_stream_failure_on_error$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..proxy_server..sse_translate_stream..TranslatorState$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8f9919adeb0ceef4(v76);
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 80, 8);
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            v83,
            500,
            &unk_1015DD6AB,
            21,
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            0xEu);
          v34 = v84;
        }
        else
        {
          v28 = (void (__fastcall **)(__int64))*(unsigned __int16 *)&v111[8];
          memcpy((char *)&v83[1] + 2, &v111[10], 0x66u);
          v83[0] = *(_QWORD *)v111;
          LOWORD(v83[1]) = *(_WORD *)&v111[8];
          v83[14] = v76;
          v34 = &off_1019602F8;
          v84 = &off_1019602F8;
        }
        qmemcpy(v85, v83, sizeof(v85));
        v36 = &v84;
        v35 = 3;
      }
      else
      {
        *(_BYTE *)(a2 + 429) = 0;
        memcpy((void *)(a2 + 440), v21, 0x88u);
        *(_BYTE *)(a2 + 856) = 0;
LABEL_76:
        v28 = (void (__fastcall **)(__int64))(a2 + 440);
        reqwest::async_impl::response::Response::bytes::_$u7b$$u7b$closure$u7d$$u7d$::h5d321b96357654fe(
          __dst,
          a2 + 440,
          a3);
        if ( LODWORD(__dst[0]) == 1 )
        {
          *v121 = 6;
          result = 5;
          goto LABEL_61;
        }
        v57 = *((_QWORD *)&__dst[0] + 1);
        v106 = *((_QWORD *)&__dst[1] + 1);
        v29 = *(_QWORD *)&__dst[1];
        v107 = *(_QWORD *)&__dst[2];
        core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a2 + 440);
        if ( v57 )
        {
          *(_QWORD *)&v120[24] = v107;
          *(_QWORD *)&v120[16] = v106;
          *(_QWORD *)v120 = v57;
          *(_QWORD *)&v120[8] = v29;
          *(_QWORD *)&__dst[0] = v29;
          *((_QWORD *)&__dst[0] + 1) = v106;
          __dst[1] = 0u;
          serde_json::de::from_trait::ha73f8db442141d1f(v87, __dst);
          if ( LOBYTE(v87[0]) == 6 )
          {
            *(_QWORD *)&v119[0] = *((_QWORD *)&v87[0] + 1);
            codexmate_lib::core::relay::proxy_server::record_upstream_json_decode_failure::ha19861bb81971b08(
              v111,
              *(_QWORD **)(a2 + 176),
              *(const void **)(*(_QWORD *)(a2 + 184) + 8LL),
              *(_QWORD *)(*(_QWORD *)(a2 + 184) + 16LL),
              (__int64)"codex-router",
              12,
              (char)v119);
            v28 = *(void (__fastcall ***)(__int64))&v111[8];
            codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
              __dst,
              502,
              *(void **)&v111[8],
              *(signed __int64 *)&v111[16],
              "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
              0xEu);
            qmemcpy(v85, __dst, sizeof(v85));
            v34 = *((__int64 (__fastcall ***)())&__dst[7] + 1);
            if ( *(_QWORD *)v111 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, *(_QWORD *)v111, 1);
            core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v119);
            v36 = *(__int64 (__fastcall ****)())&v120[8];
            (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v120 + 32LL))(
              &v120[24],
              *(_QWORD *)&v120[8],
              *(_QWORD *)&v120[16]);
            v35 = 5;
          }
          else
          {
            *(_OWORD *)&v88[16] = v87[1];
            *(_OWORD *)v88 = v87[0];
            v58 = *(_QWORD *)(a2 + 200);
            if ( *(_BYTE *)(a2 + 427) == 1 )
              codexmate_lib::core::relay::translator::anthropic_to_responses_response_with_tool_map::h58553209f6c91da6(
                v86,
                v88,
                v58);
            else
              codexmate_lib::core::relay::translator::chat_to_responses_response::hc2f4bad558319739(v86, v88, v58);
            _$LT$axum..json..Json$LT$T$GT$$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::h7212e14c3f6814bb(
              __dst,
              v86);
            WORD4(__dst[6]) = 200;
            qmemcpy(v85, __dst, sizeof(v85));
            v34 = *((__int64 (__fastcall ***)())&__dst[7] + 1);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v88);
            v36 = *(__int64 (__fastcall ****)())&v120[8];
            (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v120 + 32LL))(
              &v120[24],
              *(_QWORD *)&v120[8],
              *(_QWORD *)&v120[16]);
            v35 = 3;
          }
        }
        else
        {
          *(_QWORD *)v111 = v29;
          *(_QWORD *)&v87[0] = v111;
          *((_QWORD *)&v87[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B997B, v87);
          v28 = *((void (__fastcall ***)(__int64))&__dst[0] + 1);
          v34 = *(__int64 (__fastcall ***)())&__dst[0];
          v29 = *(_QWORD *)&__dst[1];
          *(_QWORD *)v88 = v111;
          *(_QWORD *)&v88[8] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v87, &unk_1017B997B, v88);
          v118 = *((_QWORD *)&v87[0] + 1);
          *(_QWORD *)&v122 = *(_QWORD *)&v87[0];
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            __dst,
            502,
            *((void **)&v87[0] + 1),
            *(signed __int64 *)&v87[1],
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            0xEu);
          v35 = *(_QWORD *)&__dst[0];
          qmemcpy(v85, (char *)__dst + 8, sizeof(v85));
          v36 = (__int64 (__fastcall ***)())v122;
          if ( (_QWORD)v122 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v122, 1);
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v111);
        }
      }
LABEL_56:
      *(_BYTE *)(a2 + 429) = 0;
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 240)) )
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 240, v36);
      *(_BYTE *)(a2 + 430) = 0;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 32);
      v37 = *(_QWORD *)(a2 + 216);
      if ( v37 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 224), v37, 1);
      *(_BYTE *)(a2 + 431) = 0;
      v38 = v121;
      *v121 = v35;
      qmemcpy(v38 + 1, v85, 0x78u);
      v38[16] = (__int64)v34;
      v38[17] = (__int64)v28;
      v38[18] = v29;
      result = 1;
LABEL_61:
      *(_BYTE *)(a2 + 432) = result;
      return result;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D7E0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D7E0);
    case 3:
      goto LABEL_19;
    case 4:
      goto LABEL_23;
    case 5:
      goto LABEL_76;
  }
}
