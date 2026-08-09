// __ZN13codexmate_lib4core5relay12proxy_server13try_translate28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1002550c0 | 基线 same-set
// [FULL hexrays]

char __fastcall codexmate_lib::core::relay::proxy_server::try_translate::_$u7b$$u7b$closure$u7d$$u7d$::ha7d38d5fd67c8e41(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14
  _BYTE *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  char v19; // cl
  _QWORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r14
  char result; // al
  __int64 v30; // r13
  __int64 (__fastcall **v31)(); // r14
  __int128 v32; // kr10_16
  __int64 v33; // r13
  __int64 v34; // rsi
  _QWORD *v35; // r15
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int8 *v39; // r14
  signed __int64 v40; // r13
  __int64 i; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  const void *v46; // rsi
  __int64 v47; // r14
  __int64 v48; // r14
  int v49; // eax
  __int128 v50; // kr40_16
  int v51; // r15d
  __int16 v52; // r8
  __int64 v53; // r15
  __int64 v54; // r12
  char *v55; // rax
  _BYTE *v56; // r14
  char *v57; // rax
  char *v58; // rcx
  char v59; // dl
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  _DWORD *v64; // r15
  __int64 v65; // r14
  __int64 v66; // r13
  __int128 v67; // kr60_16
  char *v68; // rsi
  int v69; // ecx
  __int64 v70; // r13
  __int64 v71; // rdx
  __int64 v72; // r12
  __int64 v73; // rsi
  char v74; // r14
  __int64 *v75; // rax
  __int64 v76; // r12
  char *v77; // rsi
  volatile signed __int64 *v78; // r12
  __int64 v79; // r15
  int v80; // r14d
  __int16 v81; // r8
  void (__fastcall **v82)(__int64); // rdx
  __int64 v83; // r15
  void (__fastcall **v84)(__int64); // r12
  void (__fastcall *v85)(__int64); // rsi
  __int128 v86; // kr90_16
  _QWORD *v87; // r12
  _BYTE *v88; // r15
  int v89; // ecx
  unsigned int v90; // ecx
  int v91; // edx
  __int64 v92; // rax
  __int64 v93; // r14
  char v94; // of
  volatile signed __int64 *v95; // r13
  __int64 v96; // rt0
  volatile signed __int64 *v97; // r12
  __int64 v98; // rt0
  __int64 v99; // rsi
  __int64 v100; // rax
  __int64 v101; // r14
  __int16 v102; // r8
  char *v103; // rax
  char *v104; // r15
  _BYTE *v105; // r15
  __int16 v106; // r14
  __int16 v107; // ax
  __int64 v108; // rsi
  __int64 v109; // r14
  void (__fastcall **v110)(__int64); // rdx
  void (__fastcall **v111)(__int64); // r13
  void (__fastcall *v112)(__int64); // rsi
  int v113; // eax
  unsigned int v114; // eax
  int v115; // ecx
  __int64 *v116; // rax
  _BYTE v117[120]; // [rsp+8h] [rbp-9B8h] BYREF
  _BYTE v118[96]; // [rsp+80h] [rbp-940h] BYREF
  _QWORD v119[12]; // [rsp+E0h] [rbp-8E0h] BYREF
  _BYTE v120[120]; // [rsp+140h] [rbp-880h] BYREF
  _QWORD v121[14]; // [rsp+1B8h] [rbp-808h] BYREF
  _DWORD v122[28]; // [rsp+228h] [rbp-798h] BYREF
  _BYTE v123[32]; // [rsp+298h] [rbp-728h] BYREF
  _QWORD v124[15]; // [rsp+2B8h] [rbp-708h] BYREF
  volatile signed __int64 *v125; // [rsp+330h] [rbp-690h] BYREF
  _BYTE v126[104]; // [rsp+338h] [rbp-688h] BYREF
  _BYTE v127[112]; // [rsp+3A0h] [rbp-620h] BYREF
  __int128 v128; // [rsp+410h] [rbp-5B0h]
  __int64 v129; // [rsp+420h] [rbp-5A0h]
  __int64 v130; // [rsp+428h] [rbp-598h]
  __int64 *v131; // [rsp+430h] [rbp-590h]
  __int64 v132; // [rsp+438h] [rbp-588h]
  __int64 v133; // [rsp+440h] [rbp-580h]
  __int64 v134; // [rsp+448h] [rbp-578h]
  _QWORD v135[15]; // [rsp+458h] [rbp-568h] BYREF
  __int64 v136; // [rsp+4D0h] [rbp-4F0h]
  __int64 v137; // [rsp+4D8h] [rbp-4E8h]
  __int64 v138; // [rsp+4E0h] [rbp-4E0h]
  __int64 v139; // [rsp+4E8h] [rbp-4D8h]
  __int128 v140; // [rsp+4F0h] [rbp-4D0h]
  __int128 v141; // [rsp+500h] [rbp-4C0h]
  unsigned __int128 v142; // [rsp+510h] [rbp-4B0h]
  __int128 v143; // [rsp+520h] [rbp-4A0h]
  _BYTE v144[104]; // [rsp+530h] [rbp-490h] BYREF
  __int16 v145; // [rsp+598h] [rbp-428h]
  int v146; // [rsp+59Ah] [rbp-426h]
  __int16 v147; // [rsp+59Eh] [rbp-422h]
  _QWORD v148[15]; // [rsp+640h] [rbp-380h] BYREF
  _QWORD v149[15]; // [rsp+6B8h] [rbp-308h] BYREF
  __int64 (__fastcall **v150)(); // [rsp+730h] [rbp-290h] BYREF
  _OWORD v151[17]; // [rsp+738h] [rbp-288h] BYREF
  __int64 *v152; // [rsp+848h] [rbp-178h]
  _OWORD __dst[17]; // [rsp+850h] [rbp-170h] BYREF
  int v154; // [rsp+968h] [rbp-58h]
  __int16 v155; // [rsp+96Ch] [rbp-54h]
  __int64 v156; // [rsp+970h] [rbp-50h]
  __int64 (__fastcall **v157)(); // [rsp+978h] [rbp-48h]
  _BYTE *v158; // [rsp+980h] [rbp-40h]
  _QWORD *v159; // [rsp+988h] [rbp-38h]
  _QWORD *v160; // [rsp+990h] [rbp-30h]

  v152 = a1;
  switch ( *((_BYTE *)a2 + 197) )
  {
    case 0:
      *(_DWORD *)((char *)a2 + 193) = 256;
      *((_OWORD *)a2 + 9) = *(_OWORD *)(a2 + 21);
      v5 = a2[16];
      v6 = a2[17];
      v7 = a2[9];
      *a2 = a2[8];
      a2[1] = v7;
      a2[2] = a2[10];
      a2[3] = a2[11];
      v8 = a2[23];
      a2[4] = a2[12];
      a2[5] = a2[13];
      a2[6] = a2[14];
      a2[7] = a2[15];
      *((_BYTE *)a2 + 192) = *((_BYTE *)a2 + 198);
      v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "stream",
                      6,
                      a2 + 4);
      if ( v9 && *v9 == 1 && (v9[1] & 1) != 0 )
      {
        if ( *(_BYTE *)a2 == 5 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("stream", 6);
          v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
          if ( !v10 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
          *(_WORD *)(v10 + 4) = 28001;
          *(_DWORD *)v10 = 1701999731;
          v124[0] = 6;
          v124[1] = v10;
          v124[2] = 6;
          LOWORD(v135[0]) = 257;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v151, a2 + 1, v124);
          if ( __OFSUB__(0, *(_QWORD *)&v151[0]) )
          {
            v11 = *((_QWORD *)&v151[0] + 1);
            v12 = 32LL * *((_QWORD *)&v151[1] + 1);
            v148[3] = *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + 32LL * *((_QWORD *)&v151[1] + 1) + 24);
            v148[2] = *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + 32LL * *((_QWORD *)&v151[1] + 1) + 16);
            v13 = *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + 32LL * *((_QWORD *)&v151[1] + 1));
            v148[1] = *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + 32LL * *((_QWORD *)&v151[1] + 1) + 8);
            v148[0] = v13;
            *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + v12 + 24) = v135[3];
            *(_QWORD *)(v11 + v12 + 16) = v135[2];
            v14 = v135[0];
            *(_QWORD *)(v11 + v12 + 8) = v135[1];
            *(_QWORD *)(v11 + v12) = v14;
            if ( LOBYTE(v148[0]) != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v148);
          }
          else
          {
            *(_QWORD *)&__dst[3] = *(_QWORD *)&v151[3];
            __dst[2] = v151[2];
            *((_QWORD *)&__dst[1] + 1) = *((_QWORD *)&v151[1] + 1);
            *(_OWORD *)((char *)__dst + 8) = *(_OWORD *)((char *)v151 + 8);
            *(_QWORD *)&__dst[0] = *(_QWORD *)&v151[0];
            v149[3] = v135[3];
            v149[2] = v135[2];
            v149[1] = v135[1];
            v149[0] = v135[0];
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              v144,
              __dst,
              v149);
          }
        }
        v17 = a2[18];
        v18 = a2[19];
        *((_BYTE *)a2 + 194) = 0;
        __dst[3] = *((_OWORD *)a2 + 1);
        v60 = *a2;
        *((_QWORD *)&__dst[2] + 1) = a2[1];
        *(_QWORD *)&__dst[2] = v60;
        v19 = *((_BYTE *)a2 + 192);
        v141 = __dst[1];
        v142 = __PAIR128__(*((unsigned __int64 *)&__dst[2] + 1), v60);
        v143 = __dst[3];
        v140 = __dst[0];
        v20 = a2 + 25;
        a2[32] = *((_QWORD *)&__dst[3] + 1);
        a2[31] = v143;
        *(_OWORD *)(a2 + 29) = v142;
        *(_OWORD *)(a2 + 27) = v141;
        *(_OWORD *)(a2 + 25) = v140;
        a2[33] = v5;
        a2[34] = v6;
        a2[38] = v17;
        a2[39] = v18;
        a2[40] = v8;
        v158 = (char *)a2 + 331;
        *((_BYTE *)a2 + 331) = 0;
        *((_BYTE *)a2 + 332) = v19;
LABEL_69:
        *(_WORD *)((char *)a2 + 329) = 0;
        a2[35] = v17;
        a2[36] = v18;
        v20[3] = a2[32];
        v20[2] = a2[31];
        v61 = a2[29];
        v20[1] = a2[30];
        v159 = v20;
        *v20 = v61;
        *((_BYTE *)a2 + 328) = v19;
        codexmate_lib::core::relay::proxy_server::build_upstream_headers::hfb8c5da4446947b4(v118, v18);
        *((_BYTE *)a2 + 330) = 1;
        v62 = codexmate_lib::core::relay::proxy_server::ProxyContext::client_for::ha60cf1864b88a927(
                *(_QWORD *)(a2[35] + 24LL),
                *(_QWORD *)(a2[35] + 32LL),
                *(unsigned __int8 *)(a2[36] + 229LL));
        a2[37] = v62;
        reqwest::async_impl::client::Client::request::h7c49bfd56329fb46(
          __dst,
          v62,
          &anon_39a6e93098609d65551b0fc4eadbbbd9_845,
          v5,
          v6);
        *((_BYTE *)a2 + 330) = 0;
        qmemcpy(v127, v118, 0x60u);
        reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(v151, __dst);
        reqwest::async_impl::request::RequestBuilder::json::hc3bd6ec843dbdd77(v144, v151);
        a2[42] = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(v144);
        a2[43] = v63;
LABEL_70:
        v64 = a2 + 42;
        _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d(
          __dst,
          a2 + 42,
          a3);
        v65 = *(_QWORD *)&__dst[0];
        if ( *(_QWORD *)&__dst[0] == 4 )
        {
          *v158 = 3;
LABEL_105:
          *v152 = 6;
          result = 3;
          goto LABEL_160;
        }
        v66 = *((_QWORD *)&__dst[0] + 1);
        qmemcpy(v148, &__dst[1], sizeof(v148));
        core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a2 + 42);
        if ( (_DWORD)v65 == 3 )
        {
          *(_QWORD *)v127 = v66;
          codexmate_lib::core::relay::proxy_server::ProxyContext::note_network_failure::h1ac7213a89a53d0c(a2[35]);
          *(_QWORD *)&v151[0] = v127;
          *((_QWORD *)&v151[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B9947, v151);
          v160 = *((_QWORD **)&__dst[0] + 1);
          v157 = *(__int64 (__fastcall ***)())&__dst[0];
          v156 = *(_QWORD *)&__dst[1];
          *(_QWORD *)v144 = v127;
          *(_QWORD *)&v144[8] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017B9947, v144);
          v67 = v151[0];
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            __dst,
            502,
            *((_QWORD *)&v151[0] + 1),
            *(_QWORD *)&v151[1],
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            14);
          v33 = *(_QWORD *)&__dst[0];
          qmemcpy(v135, (char *)__dst + 8, sizeof(v135));
          v68 = (char *)&__dst[8];
          if ( (_QWORD)v67 )
          {
            v68 = (char *)v67;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v67 + 1), v67, 1);
          }
        }
        else
        {
          *((_BYTE *)a2 + 329) = 1;
          a2[43] = v65;
          a2[44] = v66;
          qmemcpy(a2 + 45, v148, 0x78u);
          v69 = *((_DWORD *)a2 + 112);
          *((_WORD *)a2 + 168) = v69;
          if ( (unsigned __int16)(v69 - 200) <= 0x63u )
          {
            *((_BYTE *)a2 + 329) = 0;
            memcpy(__dst, a2 + 43, 0x88u);
            v70 = reqwest::async_impl::response::Response::bytes_stream::h4afb02b64d51c5f9(__dst);
            v72 = v71;
            v73 = a2[36] + 96LL;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v144, v73);
            v74 = *((_BYTE *)a2 + 328);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v144, v73);
            v75 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
            if ( !v75 )
              alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
            *v75 = v70;
            v75[1] = v72;
            v128 = 0;
            v129 = 1;
            v130 = 0;
            v131 = v75;
            LOBYTE(v132) = 0;
            v76 = *(_QWORD *)&v144[8];
            if ( v74 )
            {
              codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::new::hfca717e718c104d7(
                __dst,
                *(_QWORD *)&v144[8],
                *(_QWORD *)&v144[16]);
              qmemcpy(v151, __dst, 0x70u);
              v77 = (char *)&__dst[7];
            }
            else
            {
              codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::new::h4363bdbb5ff1d11d(
                __dst,
                *(_QWORD *)&v144[8],
                *(_QWORD *)&v144[16]);
              qmemcpy((char *)v151 + 8, __dst, 0x68u);
              v77 = (char *)&__dst[6] + 8;
              *(_QWORD *)&v151[0] = 0x8000000000000000LL;
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v151[7], v77);
            v92 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 8);
            if ( !v92 )
              alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64);
            v93 = v92;
            *(_QWORD *)(v92 + 56) = v134;
            *(_QWORD *)(v92 + 48) = v133;
            *(_QWORD *)(v92 + 40) = v132;
            *(_QWORD *)(v92 + 32) = v131;
            *(_QWORD *)(v92 + 24) = v130;
            *(_QWORD *)(v92 + 16) = v129;
            *(_OWORD *)v92 = v128;
            qmemcpy(v122, v151, sizeof(v122));
            v94 = 0;
            if ( *(_QWORD *)v144 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, *(_QWORD *)v144, 1);
            __dst[0] = 0;
            __dst[1] = 1u;
            qmemcpy(&__dst[2], v122, 0x70u);
            *(_QWORD *)&__dst[9] = v93;
            BYTE8(__dst[9]) = 0;
            v95 = *(volatile signed __int64 **)a2[35];
            v96 = _InterlockedIncrement64(v95);
            if ( (v96 < 0) ^ v94 | (v96 == 0)
              || (v119[0] = v95,
                  v97 = *(volatile signed __int64 **)(a2[35] + 8LL),
                  v98 = _InterlockedIncrement64(v97),
                  (v98 < 0) ^ v94 | (v98 == 0)) )
            {
              BUG();
            }
            v125 = v97;
            v99 = a2[36];
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v144, v99);
            v121[0] = v95;
            *(_QWORD *)v127 = v97;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v144, v99);
            v100 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
            if ( !v100 )
              alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
            v101 = v100;
            *(_QWORD *)v100 = 1;
            *(_QWORD *)(v100 + 8) = 1;
            *(_BYTE *)(v100 + 16) = 0;
            memcpy(v151, __dst, 0xB0u);
            *(_QWORD *)&v151[11] = *(_QWORD *)v144;
            *(_OWORD *)((char *)&v151[11] + 8) = *(_OWORD *)&v144[8];
            *((_QWORD *)&v151[12] + 1) = v101;
            *(_QWORD *)&v151[13] = "relay translated stream failedtext/event-stream";
            *((_QWORD *)&v151[13] + 1) = 30;
            *(_QWORD *)&v151[14] = v97;
            *((_QWORD *)&v151[14] + 1) = v95;
            LOWORD(v101) = 200;
            if ( (unsigned __int16)(*v64 - 1000) >= 0xFC7Cu )
              LODWORD(v101) = *v64;
            http::response::Parts::new::h962418c42e7bc305(__dst);
            qmemcpy(v119, (char *)__dst + 8, sizeof(v119));
            v102 = WORD4(__dst[6]);
            v154 = *(_DWORD *)((char *)&__dst[6] + 10);
            v155 = HIWORD(__dst[6]);
            if ( *(_QWORD *)&__dst[0] != 3 )
            {
              qmemcpy(v119, (char *)__dst + 8, sizeof(v119));
              v155 = HIWORD(__dst[6]);
              v154 = *(_DWORD *)((char *)&__dst[6] + 10);
              v102 = v101;
            }
            *(_QWORD *)v144 = *(_QWORD *)&__dst[0];
            qmemcpy(&v144[8], v119, 0x60u);
            v145 = v102;
            v146 = v154;
            v147 = v155;
            __dst[2] = 0u;
            *((_QWORD *)&__dst[1] + 1) = 29;
            *(_QWORD *)&__dst[1] = 0;
            *(_QWORD *)&__dst[0] = "text/event-stream";
            *((_QWORD *)&__dst[0] + 1) = 17;
            http::response::Builder::and_then::h8cb37f589ff149ea(v127, v144, __dst);
            __dst[2] = 0u;
            *((_QWORD *)&__dst[1] + 1) = 17;
            *(_QWORD *)&__dst[1] = 0;
            *(_QWORD *)&__dst[0] = "no-cacheidentityusernamepasswordfragmentif-matchif-rangelocationNoParentUnixTimeContinueexpectedsegmentsoriginalBorrowed";
            *((_QWORD *)&__dst[0] + 1) = 8;
            http::response::Builder::and_then::h8cb37f589ff149ea(v121, v127, __dst);
            *(_QWORD *)&__dst[0] = &unk_1015DD698;
            *((_QWORD *)&__dst[0] + 1) = 17;
            *(_QWORD *)&__dst[1] = &unk_1015DD6A9;
            *((_QWORD *)&__dst[1] + 1) = 2;
            http::response::Builder::and_then::h4e0760d990fde360(&v125, v121, __dst);
            if ( *(_QWORD *)&v151[0] == 3 )
              core::option::unwrap_failed::h44626cade04bbf1e(&off_101960250);
            memcpy((char *)&__dst[1] + 8, (char *)&v151[1] + 8, 0xD8u);
            *(_QWORD *)&__dst[0] = *(_QWORD *)&v151[0];
            *(_OWORD *)((char *)__dst + 8) = *(_OWORD *)((char *)v151 + 8);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
              (char *)&__dst[1] + 8,
              (char *)&v151[1] + 8);
            v103 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(240, 8);
            if ( !v103 )
              alloc::alloc::handle_alloc_error::h450e44845847d219(8, 240);
            v104 = v103;
            memcpy(v103, __dst, 0xF0u);
            if ( v125 == (volatile signed __int64 *)3 )
            {
              core::ptr::drop_in_place$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..proxy_server..sse_translate_stream..TranslatorState$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::ha7ffc2b622884d0a(v104);
              v87 = v159;
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..record_stream_failure_on_error$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..proxy_server..sse_translate_stream..TranslatorState$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8f9919adeb0ceef4(v104 + 176);
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, 240, 8);
              codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
                v149,
                500,
                &unk_1015DD6AB,
                21,
                "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
                14);
              v157 = v150;
            }
            else
            {
              memcpy((char *)&v149[1] + 2, &v126[2], 0x66u);
              v149[0] = v125;
              LOWORD(v149[1]) = *(_WORD *)v126;
              v149[14] = v104;
              v157 = &off_1019603E8;
              v150 = &off_1019603E8;
              v87 = v159;
            }
            v105 = v158;
            qmemcpy(v135, v149, sizeof(v135));
            *((_BYTE *)a2 + 329) = 0;
            if ( !_InterlockedDecrement64((volatile signed __int64 *)a2[37]) )
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 37, &v150);
            *((_BYTE *)a2 + 330) = 0;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v87);
            qmemcpy(v124, v135, sizeof(v124));
            *v105 = 1;
            v33 = 3;
LABEL_125:
            qmemcpy(v120, v124, sizeof(v120));
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..try_translate_streaming..$u7b$$u7b$closure$u7d$$u7d$$GT$::hac7b2eece2ec9892(v87);
            v31 = v157;
            v35 = v160;
            v36 = v156;
LABEL_156:
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 4);
            if ( *((_BYTE *)a2 + 194) )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2);
            *((_BYTE *)a2 + 194) = 0;
LABEL_159:
            v116 = v152;
            *v152 = v33;
            qmemcpy(v116 + 1, v120, 0x78u);
            v116[16] = (__int64)v31;
            v116[17] = (__int64)v35;
            v116[18] = v36;
            result = 1;
            goto LABEL_160;
          }
          *((_BYTE *)a2 + 329) = 0;
          memcpy(a2 + 60, a2 + 43, 0x88u);
          *((_BYTE *)a2 + 896) = 0;
          v15 = v158;
LABEL_81:
          reqwest::async_impl::response::Response::bytes::_$u7b$$u7b$closure$u7d$$u7d$::h5d321b96357654fe(
            __dst,
            a2 + 60,
            a3);
          if ( LODWORD(__dst[0]) == 1 )
          {
            *v15 = 4;
            goto LABEL_105;
          }
          v158 = v15;
          v78 = *((volatile signed __int64 **)&__dst[0] + 1);
          v136 = *((_QWORD *)&__dst[1] + 1);
          v79 = *(_QWORD *)&__dst[1];
          v137 = *(_QWORD *)&__dst[2];
          core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a2 + 60);
          if ( v78 )
          {
            *(_QWORD *)&v126[16] = v137;
            *(_QWORD *)&v126[8] = v136;
            v125 = v78;
            *(_QWORD *)v126 = v79;
            LOWORD(v80) = 502;
            if ( (unsigned __int16)(*((_DWORD *)a2 + 84) - 1000) >= 0xFC7Cu )
              v80 = *((_DWORD *)a2 + 84);
            http::response::Parts::new::h962418c42e7bc305(v151);
            qmemcpy(v121, (char *)v151 + 8, 0x60u);
            v81 = WORD4(v151[6]);
            v122[0] = *(_DWORD *)((char *)&v151[6] + 10);
            LOWORD(v122[1]) = HIWORD(v151[6]);
            if ( *(_QWORD *)&v151[0] != 3 )
            {
              qmemcpy(v121, (char *)v151 + 8, 0x60u);
              LOWORD(v122[1]) = HIWORD(v151[6]);
              v122[0] = *(_DWORD *)((char *)&v151[6] + 10);
              v81 = v80;
            }
            *(_QWORD *)v144 = *(_QWORD *)&v151[0];
            qmemcpy(&v144[8], v121, 0x60u);
            v145 = v81;
            v146 = v122[0];
            v147 = v122[1];
            v151[2] = 0u;
            *((_QWORD *)&v151[1] + 1) = 29;
            *(_QWORD *)&v151[0] = &unk_1015DBAA0;
            *(_OWORD *)((char *)v151 + 8) = 0x10u;
            http::response::Builder::and_then::h8cb37f589ff149ea(v127, v144, v151);
            *((_QWORD *)&v151[1] + 1) = *(_QWORD *)&v126[16];
            *(_OWORD *)((char *)v151 + 8) = *(_OWORD *)v126;
            *(_QWORD *)&v151[0] = v125;
            v83 = _$LT$axum_core..body..Body$u20$as$u20$core..convert..From$LT$bytes..bytes..Bytes$GT$$GT$::from::hc72db8ca21e2e159(v151);
            v84 = v82;
            if ( *(_QWORD *)v127 == 3 )
            {
              if ( *v82 )
                (*v82)(v83);
              v85 = v84[1];
              if ( v85 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v85, v84[2]);
              codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
                __dst,
                502,
                "build error body failedproxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
                23,
                "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
                14);
            }
            else
            {
              memcpy((char *)__dst + 10, &v127[10], 0x66u);
              *(_QWORD *)&__dst[0] = *(_QWORD *)v127;
              WORD4(__dst[0]) = *(_WORD *)&v127[8];
              *(_QWORD *)&__dst[7] = v83;
              *((_QWORD *)&__dst[7] + 1) = v84;
            }
            v89 = *((unsigned __int16 *)a2 + 168);
            v87 = v159;
            v88 = v158;
            if ( (unsigned __int16)(v89 - 500) < 0x64u
              || (v90 = v89 - 401, v90 <= 0x1C) && (v91 = 268435917, _bittest(&v91, v90)) )
            {
              *(_QWORD *)v144 = a2 + 42;
              *(_QWORD *)&v144[8] = _$LT$http..status..StatusCode$u20$as$u20$core..fmt..Display$GT$::fmt::h9532ff36c27bd9e7;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017B9AD9, v144);
              v157 = *(__int64 (__fastcall ***)())&v151[0];
              v156 = *(_QWORD *)&v151[1];
              v160 = *((_QWORD **)&v151[0] + 1);
              v33 = *(_QWORD *)&__dst[0];
              qmemcpy(v135, (char *)__dst + 8, sizeof(v135));
              v68 = (char *)&__dst[8];
              *((_BYTE *)a2 + 329) = 0;
              if ( _InterlockedDecrement64((volatile signed __int64 *)a2[37]) )
                goto LABEL_104;
            }
            else
            {
              qmemcpy(v135, __dst, sizeof(v135));
              v68 = (char *)&__dst[7] + 8;
              v33 = 5;
              v157 = *((__int64 (__fastcall ***)())&__dst[7] + 1);
              *((_BYTE *)a2 + 329) = 0;
              if ( _InterlockedDecrement64((volatile signed __int64 *)a2[37]) )
              {
LABEL_104:
                *((_BYTE *)a2 + 330) = 0;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v87);
                qmemcpy(v124, v135, sizeof(v124));
                *v88 = 1;
                if ( v33 == 6 )
                  goto LABEL_105;
                goto LABEL_125;
              }
            }
LABEL_103:
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 37, v68);
            goto LABEL_104;
          }
          *(_QWORD *)v127 = v79;
          *(_QWORD *)&v151[0] = v127;
          *((_QWORD *)&v151[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B997B, v151);
          v160 = *((_QWORD **)&__dst[0] + 1);
          v157 = *(__int64 (__fastcall ***)())&__dst[0];
          v156 = *(_QWORD *)&__dst[1];
          *(_QWORD *)v144 = v127;
          *(_QWORD *)&v144[8] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017B997B, v144);
          v86 = v151[0];
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            __dst,
            502,
            *((_QWORD *)&v151[0] + 1),
            *(_QWORD *)&v151[1],
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            14);
          v33 = *(_QWORD *)&__dst[0];
          qmemcpy(v135, (char *)__dst + 8, sizeof(v135));
          v68 = (char *)&__dst[8];
          if ( (_QWORD)v86 )
          {
            v68 = (char *)v86;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v86 + 1), v86, 1);
          }
        }
        core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v127);
        v87 = v159;
        v88 = v158;
        *((_BYTE *)a2 + 329) = 0;
        if ( _InterlockedDecrement64((volatile signed __int64 *)a2[37]) )
          goto LABEL_104;
        goto LABEL_103;
      }
      if ( *(_BYTE *)a2 == 5 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("stream", 6);
        v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v21 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
        *(_WORD *)(v21 + 4) = 28001;
        *(_DWORD *)v21 = 1701999731;
        v124[0] = 6;
        v124[1] = v21;
        v124[2] = 6;
        LOWORD(v135[0]) = 1;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v151, a2 + 1, v124);
        if ( __OFSUB__(0, *(_QWORD *)&v151[0]) )
        {
          v22 = *((_QWORD *)&v151[0] + 1);
          v23 = 32LL * *((_QWORD *)&v151[1] + 1);
          v148[3] = *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + 32LL * *((_QWORD *)&v151[1] + 1) + 24);
          v148[2] = *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + 32LL * *((_QWORD *)&v151[1] + 1) + 16);
          v24 = *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + 32LL * *((_QWORD *)&v151[1] + 1));
          v148[1] = *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + 32LL * *((_QWORD *)&v151[1] + 1) + 8);
          v148[0] = v24;
          *(_QWORD *)(*((_QWORD *)&v151[0] + 1) + v23 + 24) = v135[3];
          *(_QWORD *)(v22 + v23 + 16) = v135[2];
          v25 = v135[0];
          *(_QWORD *)(v22 + v23 + 8) = v135[1];
          *(_QWORD *)(v22 + v23) = v25;
          if ( LOBYTE(v148[0]) != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v148);
        }
        else
        {
          *(_QWORD *)&__dst[3] = *(_QWORD *)&v151[3];
          __dst[2] = v151[2];
          *((_QWORD *)&__dst[1] + 1) = *((_QWORD *)&v151[1] + 1);
          *(_OWORD *)((char *)__dst + 8) = *(_OWORD *)((char *)v151 + 8);
          *(_QWORD *)&__dst[0] = *(_QWORD *)&v151[0];
          v149[3] = v135[3];
          v149[2] = v135[2];
          v149[1] = v135[1];
          v149[0] = v135[0];
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            v144,
            __dst,
            v149);
        }
      }
      codexmate_lib::core::relay::proxy_server::build_upstream_headers::hfb8c5da4446947b4(v135, a2[19]);
      *((_BYTE *)a2 + 196) = 1;
      v26 = codexmate_lib::core::relay::proxy_server::ProxyContext::client_for::ha60cf1864b88a927(
              *(_QWORD *)(a2[18] + 24LL),
              *(_QWORD *)(a2[18] + 32LL),
              *(unsigned __int8 *)(a2[19] + 229LL));
      a2[20] = v26;
      reqwest::async_impl::client::Client::request::h7c49bfd56329fb46(
        __dst,
        v26,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_845,
        v5,
        v6);
      *((_BYTE *)a2 + 196) = 0;
      qmemcpy(v149, v135, 0x60u);
      reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(v151, __dst);
      reqwest::async_impl::request::RequestBuilder::json::hc3bd6ec843dbdd77(v144, v151);
      a2[25] = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(v144);
      a2[26] = v27;
LABEL_20:
      _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d(
        __dst,
        a2 + 25,
        a3);
      v28 = *(_QWORD *)&__dst[0];
      if ( *(_QWORD *)&__dst[0] != 4 )
      {
        v30 = *((_QWORD *)&__dst[0] + 1);
        qmemcpy(v117, &__dst[1], sizeof(v117));
        core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a2 + 25);
        if ( (_DWORD)v28 == 3 )
        {
          v149[0] = v30;
          codexmate_lib::core::relay::proxy_server::ProxyContext::note_network_failure::h1ac7213a89a53d0c(a2[18]);
          *(_QWORD *)&v151[0] = v149;
          *((_QWORD *)&v151[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B9947, v151);
          v160 = *((_QWORD **)&__dst[0] + 1);
          v31 = *(__int64 (__fastcall ***)())&__dst[0];
          v156 = *(_QWORD *)&__dst[1];
          *(_QWORD *)v144 = v149;
          *(_QWORD *)&v144[8] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017B9947, v144);
          v32 = v151[0];
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            __dst,
            502,
            *((_QWORD *)&v151[0] + 1),
            *(_QWORD *)&v151[1],
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            14);
          v33 = *(_QWORD *)&__dst[0];
          qmemcpy(v120, (char *)__dst + 8, sizeof(v120));
          v34 = (__int64)&__dst[8];
          if ( (_QWORD)v32 )
          {
            v34 = v32;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v32 + 1), v32, 1);
          }
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v149);
          v35 = v160;
          v36 = v156;
          *((_BYTE *)a2 + 195) = 0;
          if ( _InterlockedDecrement64((volatile signed __int64 *)a2[20]) )
            goto LABEL_155;
          goto LABEL_154;
        }
        *((_BYTE *)a2 + 195) = 1;
        a2[26] = v28;
        a2[27] = v30;
        qmemcpy(a2 + 28, v117, 0x78u);
        *((_WORD *)a2 + 100) = *((_WORD *)a2 + 156);
        __dst[1] = 0u;
        *((_QWORD *)&__dst[0] + 1) = 29;
        *(_QWORD *)&__dst[0] = 0;
        v37 = http::header::map::HeaderMap$LT$T$GT$::get::hcb866ec1781bf934(a2 + 26, __dst);
        v38 = 43;
        if ( v37 )
        {
          v39 = *(unsigned __int8 **)(v37 + 8);
          v40 = *(_QWORD *)(v37 + 16);
          if ( v40 )
          {
            for ( i = 0; i != v40; ++i )
            {
              v43 = v39[i];
              v42 = (unsigned int)(v43 - 32);
              LOBYTE(v42) = (unsigned __int8)(v43 - 32) < 0x5Fu;
              LOBYTE(v43) = v42 | ((_BYTE)v43 == 9);
              if ( !(_BYTE)v43 )
                goto LABEL_35;
            }
            if ( v40 < 0 )
            {
              v44 = 0;
              goto LABEL_34;
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, v43);
            v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v40, 1);
            v44 = 1;
            if ( !v45 )
LABEL_34:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v44, v40);
          }
          else
          {
            v45 = 1;
          }
          v46 = v39;
          v47 = v45;
          memcpy((void *)v45, v46, v40);
          a2[43] = v40;
          a2[44] = v47;
          v38 = 45;
        }
        else
        {
LABEL_35:
          v40 = 0x8000000000000000LL;
        }
        a2[v38] = v40;
        *((_BYTE *)a2 + 193) = 1;
        *((_BYTE *)a2 + 195) = 0;
        memcpy(a2 + 46, a2 + 26, 0x88u);
        *((_BYTE *)a2 + 784) = 0;
LABEL_39:
        v35 = a2 + 46;
        reqwest::async_impl::response::Response::bytes::_$u7b$$u7b$closure$u7d$$u7d$::h5d321b96357654fe(
          __dst,
          a2 + 46,
          a3);
        if ( LODWORD(__dst[0]) == 1 )
        {
          *v152 = 6;
          result = 5;
          goto LABEL_160;
        }
        v36 = *((_QWORD *)&__dst[0] + 1);
        v138 = *((_QWORD *)&__dst[1] + 1);
        v48 = *(_QWORD *)&__dst[1];
        v139 = *(_QWORD *)&__dst[2];
        core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a2 + 46);
        if ( v36 )
        {
          v148[3] = v139;
          v148[2] = v138;
          v148[0] = v36;
          v148[1] = v48;
          v49 = *((_DWORD *)a2 + 50);
          if ( (unsigned __int16)(v49 - 200) >= 0x64u )
          {
            LOWORD(v51) = 502;
            if ( (unsigned __int16)(v49 - 1000) >= 0xFC7Cu )
              v51 = *((_DWORD *)a2 + 50);
            http::response::Parts::new::h962418c42e7bc305(__dst);
            qmemcpy(v144, (char *)__dst + 8, 0x60u);
            v52 = WORD4(__dst[6]);
            LODWORD(v149[0]) = *(_DWORD *)((char *)&__dst[6] + 10);
            WORD2(v149[0]) = HIWORD(__dst[6]);
            if ( *(_QWORD *)&__dst[0] != 3 )
            {
              qmemcpy(v144, (char *)__dst + 8, 0x60u);
              WORD2(v149[0]) = HIWORD(__dst[6]);
              LODWORD(v149[0]) = *(_DWORD *)((char *)&__dst[6] + 10);
              v52 = v51;
            }
            *(_QWORD *)&v151[0] = *(_QWORD *)&__dst[0];
            qmemcpy((char *)v151 + 8, v144, 0x60u);
            WORD4(v151[6]) = v52;
            *(_DWORD *)((char *)&v151[6] + 10) = v149[0];
            HIWORD(v151[6]) = WORD2(v149[0]);
            *((_BYTE *)a2 + 193) = 0;
            v53 = a2[43];
            v158 = a2 + 25;
            if ( __OFSUB__(-v53, 1) )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2((char *)&v151[6] + 8, &v144[96]);
              v54 = 16;
              v55 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
              if ( !v55 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
              v56 = v55;
              qmemcpy(v55, "application/json", 16);
              v57 = v55 + 16;
              v53 = 16;
            }
            else
            {
              v56 = (_BYTE *)a2[44];
              v54 = a2[45];
              if ( !v54 )
              {
                v54 = 0;
LABEL_136:
                v160 = v56;
                v159 = (_QWORD *)v53;
                bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(v149, v56, v54);
                LOBYTE(v149[4]) = 0;
                *(_QWORD *)&v144[64] = v149[4];
                *(_QWORD *)&v144[56] = v149[3];
                *(_QWORD *)&v144[48] = v149[2];
                *(_QWORD *)&v144[40] = v149[1];
                *(_QWORD *)&v144[32] = v149[0];
                *(_QWORD *)v144 = 0;
                *(_OWORD *)&v144[8] = 0x1Du;
                *(_QWORD *)&v144[24] = 0;
                http::response::Builder::and_then::h9467106c3dd9e2be(__dst, v151, v144);
                qmemcpy(v151, __dst, 0x70u);
LABEL_137:
                v109 = *(_QWORD *)&v151[0];
                v35 = (_QWORD *)BYTE8(v151[0]);
                LOBYTE(v156) = BYTE9(v151[0]);
                *(_QWORD *)&v144[24] = v148[3];
                *(_OWORD *)&v144[8] = *(_OWORD *)&v148[1];
                *(_QWORD *)v144 = v148[0];
                v36 = _$LT$axum_core..body..Body$u20$as$u20$core..convert..From$LT$bytes..bytes..Bytes$GT$$GT$::from::hc72db8ca21e2e159(v144);
                v111 = v110;
                if ( v109 == 3 )
                {
                  if ( *v110 )
                    (*v110)(v36);
                  v112 = v111[1];
                  if ( v112 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v112, v111[2]);
                  codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
                    __dst,
                    502,
                    "build error body failedproxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
                    23,
                    "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
                    14);
                }
                else
                {
                  memcpy((char *)__dst + 10, (char *)v151 + 10, 0x66u);
                  *(_QWORD *)&__dst[0] = v109;
                  BYTE8(__dst[0]) = (_BYTE)v35;
                  BYTE9(__dst[0]) = v156;
                  *(_QWORD *)&__dst[7] = v36;
                  *((_QWORD *)&__dst[7] + 1) = v111;
                }
                v113 = *(unsigned __int16 *)v158;
                if ( (unsigned __int16)(v113 - 500) < 0x64u
                  || (v114 = v113 - 401, v114 <= 0x1C) && (v115 = 268435917, _bittest(&v115, v114)) )
                {
                  v149[0] = v158;
                  v149[1] = _$LT$http..status..StatusCode$u20$as$u20$core..fmt..Display$GT$::fmt::h9532ff36c27bd9e7;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v144, &unk_1017B9962, v149);
                  v31 = *(__int64 (__fastcall ***)())v144;
                  v36 = *(_QWORD *)&v144[16];
                  v35 = *(_QWORD **)&v144[8];
                  v33 = *(_QWORD *)&__dst[0];
                  qmemcpy(v120, (char *)__dst + 8, sizeof(v120));
                  v34 = (__int64)v159;
                  if ( !v159 )
                    goto LABEL_149;
                }
                else
                {
                  qmemcpy(v120, __dst, sizeof(v120));
                  v33 = 5;
                  v31 = *((__int64 (__fastcall ***)())&__dst[7] + 1);
                  v34 = (__int64)v159;
                  if ( !v159 )
                    goto LABEL_149;
                }
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, v34, 1);
                goto LABEL_149;
              }
              v57 = &v56[v54];
            }
            v58 = v56;
            while ( 1 )
            {
              v59 = *v58;
              if ( (unsigned __int8)*v58 > 0x1Fu )
              {
                if ( v59 == 127 )
                  goto LABEL_66;
              }
              else if ( v59 != 9 )
              {
LABEL_66:
                v159 = (_QWORD *)v53;
                v160 = v56;
                goto LABEL_137;
              }
              if ( ++v58 == v57 )
                goto LABEL_136;
            }
          }
          *(_QWORD *)&__dst[0] = v48;
          *((_QWORD *)&__dst[0] + 1) = v148[2];
          __dst[1] = 0u;
          serde_json::de::from_trait::ha73f8db442141d1f(v151, __dst);
          if ( LOBYTE(v151[0]) != 6 )
          {
            *(_QWORD *)&v144[24] = *((_QWORD *)&v151[1] + 1);
            *(_OWORD *)&v144[8] = *(_OWORD *)((char *)v151 + 8);
            *(_QWORD *)v144 = *(_QWORD *)&v151[0];
            if ( *((_BYTE *)a2 + 192) == 1 )
              codexmate_lib::core::relay::translator::openai_chat_to_anthropic_response::h65764620b8ca243c(v123, v144);
            else
              codexmate_lib::core::relay::translator::anthropic_to_openai_chat_response::h428dcf028609ad21(v123, v144);
            v106 = *((_WORD *)a2 + 100);
            _$LT$axum..json..Json$LT$T$GT$$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::h7212e14c3f6814bb(
              __dst,
              v123);
            v107 = 200;
            if ( (unsigned __int16)(v106 - 1000) >= 0xFC7Cu )
              v107 = v106;
            WORD4(__dst[6]) = v107;
            qmemcpy(v120, __dst, sizeof(v120));
            v31 = *((__int64 (__fastcall ***)())&__dst[7] + 1);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v144);
            (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v148[0] + 32LL))(&v148[3], v148[1], v148[2]);
            v108 = a2[43];
            if ( !__OFSUB__(-v108, 1) && a2[43] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[44], v108, 1);
            *((_BYTE *)a2 + 193) = 0;
            *((_BYTE *)a2 + 195) = 0;
            if ( !_InterlockedDecrement64((volatile signed __int64 *)a2[20]) )
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 20, v108);
            *((_BYTE *)a2 + 196) = 0;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 4);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2);
            *((_BYTE *)a2 + 194) = 0;
            v33 = 3;
            goto LABEL_159;
          }
          v124[0] = *((_QWORD *)&v151[0] + 1);
          codexmate_lib::core::relay::proxy_server::record_upstream_json_decode_failure::ha19861bb81971b08(
            (unsigned int)v149,
            a2[18],
            *(_QWORD *)(a2[19] + 8LL),
            *(_QWORD *)(a2[19] + 16LL),
            (unsigned int)"relaybuild error body failedproxy.upstreamcodex_routecompletedrelay pass-through stream failed"
                          "transfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild s"
                          "treaming body failed",
            5,
            (char)v124);
          v35 = (_QWORD *)v149[1];
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            __dst,
            502,
            v149[1],
            v149[2],
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            14);
          qmemcpy(v120, __dst, sizeof(v120));
          v31 = *((__int64 (__fastcall ***)())&__dst[7] + 1);
          if ( v149[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v149[0], 1);
          core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v124);
          v34 = v148[1];
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v148[0] + 32LL))(&v148[3], v148[1], v148[2]);
          v33 = 5;
        }
        else
        {
          v149[0] = v48;
          *(_QWORD *)&v151[0] = v149;
          *((_QWORD *)&v151[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B997B, v151);
          v160 = *((_QWORD **)&__dst[0] + 1);
          v31 = *(__int64 (__fastcall ***)())&__dst[0];
          v156 = *(_QWORD *)&__dst[1];
          *(_QWORD *)v144 = v149;
          *(_QWORD *)&v144[8] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017B997B, v144);
          v50 = v151[0];
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            __dst,
            502,
            *((_QWORD *)&v151[0] + 1),
            *(_QWORD *)&v151[1],
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            14);
          v33 = *(_QWORD *)&__dst[0];
          qmemcpy(v120, (char *)__dst + 8, sizeof(v120));
          v34 = (__int64)&__dst[8];
          if ( (_QWORD)v50 )
          {
            v34 = v50;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v50 + 1), v50, 1);
          }
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v149);
          v35 = v160;
          v36 = v156;
        }
LABEL_149:
        if ( *((_BYTE *)a2 + 193) )
        {
          v34 = a2[43];
          if ( !__OFSUB__(-v34, 1) )
          {
            if ( a2[43] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[44], v34, 1);
          }
        }
        *((_BYTE *)a2 + 193) = 0;
        *((_BYTE *)a2 + 195) = 0;
        if ( _InterlockedDecrement64((volatile signed __int64 *)a2[20]) )
          goto LABEL_155;
LABEL_154:
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 20, v34);
LABEL_155:
        *((_BYTE *)a2 + 196) = 0;
        goto LABEL_156;
      }
      *v152 = 6;
      result = 4;
LABEL_160:
      *((_BYTE *)a2 + 197) = result;
      return result;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D530);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D530);
    case 3:
      v15 = (char *)a2 + 331;
      v16 = *((unsigned __int8 *)a2 + 331);
      v159 = a2 + 25;
      switch ( v16 )
      {
        case 0LL:
          v158 = (char *)a2 + 331;
          v17 = a2[38];
          v18 = a2[39];
          v5 = a2[33];
          v6 = a2[34];
          v19 = *((_BYTE *)a2 + 332);
          v20 = v159;
          goto LABEL_69;
        case 1LL:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D6E0);
        case 2LL:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D6E0);
        case 3LL:
          v158 = (char *)a2 + 331;
          goto LABEL_70;
        case 4LL:
          goto LABEL_81;
      }
    case 4:
      goto LABEL_20;
    case 5:
      goto LABEL_39;
  }
}
