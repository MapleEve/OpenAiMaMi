// __ZN13codexmate_lib4core5relay12proxy_server21forward_with_failover28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10025a340 | 基线 same-set
// [FULL decompile]

char __fastcall codexmate_lib::core::relay::proxy_server::forward_with_failover::_$u7b$$u7b$closure$u7d$$u7d$::ha2a3d67ba146c352(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 *v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rax
  bool v22; // zf
  void *v23; // r14
  void *v24; // r12
  _QWORD *v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 *v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 *v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r9
  void *v41; // r10
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // r9
  void *v46; // r10
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // r9
  void *v51; // r10
  __int64 v52; // rax
  _QWORD *v53; // rsi
  __int64 v54; // r15
  _QWORD *v55; // rsi
  __int64 v56; // r15
  __int64 v57; // rsi
  __int64 v58; // r14
  __int64 v59; // r14
  _QWORD *v60; // rsi
  __int64 v61; // r14
  void *v62; // r15
  __int64 v63; // rsi
  __int64 v64; // r14
  _QWORD *v65; // rsi
  __int64 v66; // r14
  void *v67; // r15
  __int64 v68; // rsi
  __int64 v69; // r14
  _QWORD *v70; // rsi
  __int64 v71; // r14
  void *v72; // r15
  _QWORD *v73; // rsi
  __int64 v74; // r14
  void *v75; // r15
  _QWORD *v76; // rsi
  __int64 v77; // r14
  void *v78; // r15
  __int64 v79; // rsi
  __int64 v80; // r14
  _QWORD *v81; // rsi
  __int64 v82; // r14
  void *v83; // r15
  __int64 v84; // rsi
  __int64 v85; // r14
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r12
  char v89; // al
  char v90; // al
  __int64 v91; // r15
  __int64 v92; // r14
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rsi
  void *v102; // r15
  unsigned __int64 v103; // rax
  __int64 v104; // rcx
  bool v105; // cf
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // r14
  __int64 v109; // rax
  __int64 v110; // r15
  __int64 v111; // r12
  __int64 v112; // r14
  int v113; // edx
  int v114; // ecx
  unsigned int v115; // ecx
  __int64 v116; // r15
  __int64 v117; // r14
  __int64 v118; // rax
  __int64 v119; // rax
  char result; // al
  _BYTE v121[120]; // [rsp+0h] [rbp-770h] BYREF
  _QWORD v122[18]; // [rsp+78h] [rbp-6F8h] BYREF
  _QWORD v123[16]; // [rsp+108h] [rbp-668h] BYREF
  _QWORD v124[16]; // [rsp+188h] [rbp-5E8h] BYREF
  _QWORD v125[10]; // [rsp+208h] [rbp-568h] BYREF
  _QWORD v126[10]; // [rsp+258h] [rbp-518h] BYREF
  _QWORD v127[10]; // [rsp+2A8h] [rbp-4C8h] BYREF
  _QWORD v128[16]; // [rsp+2F8h] [rbp-478h] BYREF
  _QWORD v129[16]; // [rsp+378h] [rbp-3F8h] BYREF
  _QWORD v130[4]; // [rsp+3F8h] [rbp-378h] BYREF
  _QWORD v131[4]; // [rsp+418h] [rbp-358h] BYREF
  _QWORD __dst[18]; // [rsp+438h] [rbp-338h] BYREF
  __int64 v133; // [rsp+4C8h] [rbp-2A8h]
  __int64 v134; // [rsp+4D0h] [rbp-2A0h]
  __int64 v135; // [rsp+4D8h] [rbp-298h]
  __int64 v136; // [rsp+4E0h] [rbp-290h]
  __int64 v137; // [rsp+4E8h] [rbp-288h]
  __int64 v138; // [rsp+4F0h] [rbp-280h]
  __int64 v139; // [rsp+4F8h] [rbp-278h]
  __int64 v140; // [rsp+500h] [rbp-270h]
  __int64 v141; // [rsp+508h] [rbp-268h]
  __int64 v142; // [rsp+510h] [rbp-260h] BYREF
  __int64 v143; // [rsp+518h] [rbp-258h]
  __int64 v144; // [rsp+520h] [rbp-250h]
  __int64 v145; // [rsp+528h] [rbp-248h]
  __int64 v146[58]; // [rsp+530h] [rbp-240h] BYREF
  _QWORD *v147; // [rsp+700h] [rbp-70h]
  char *v148; // [rsp+708h] [rbp-68h]
  char *v149; // [rsp+710h] [rbp-60h]
  __int64 v150; // [rsp+718h] [rbp-58h]
  __int64 v151; // [rsp+720h] [rbp-50h]
  void *v152; // [rsp+728h] [rbp-48h]
  _QWORD *v153; // [rsp+730h] [rbp-40h]
  __int64 v154; // [rsp+738h] [rbp-38h]
  __int64 v155; // [rsp+740h] [rbp-30h]

  v150 = a3;
  v4 = *(unsigned __int8 *)(a2 + 1544);
  v147 = a1;
  switch ( v4 )
  {
    case 0LL:
      v5 = *(_QWORD **)(a2 + 40);
      v6 = *(_QWORD *)(a2 + 48);
      *(_BYTE *)(a2 + 1545) = 1;
      v145 = *(_QWORD *)(a2 + 32);
      v144 = *(_QWORD *)(a2 + 24);
      v143 = *(_QWORD *)(a2 + 16);
      v7 = *(_QWORD *)a2;
      v142 = *(_QWORD *)(a2 + 8);
      v141 = v7;
      v8 = (__int64 *)(a2 + 56);
      codexmate_lib::core::relay::proxy_server::pick_candidates_for::h094c25be24f8cc71((_QWORD *)(a2 + 56), v5);
      if ( !*(_QWORD *)(a2 + 72) )
      {
        v122[0] = &unk_1015DDFF1;
        v122[1] = 5;
        __dst[0] = v122;
        __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v146, &unk_1017B9A11, __dst);
        v17 = v146[0];
        v18 = v146[1];
        codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
          v123,
          502,
          v146[1],
          v146[2],
          "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
          14);
        if ( v17 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1);
        v19 = *(_QWORD *)(a2 + 72);
        if ( v19 )
        {
          v20 = *(_QWORD *)(a2 + 64);
          do
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v20);
            v20 += 232;
            --v19;
          }
          while ( v19 );
        }
        v21 = *v8;
        v22 = *v8 == 0;
        v23 = v147;
        if ( !v22 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 64), 232 * v21, 8);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v142);
        *(_BYTE *)(a2 + 1545) = 0;
        goto LABEL_139;
      }
      v146[7] = *(_QWORD *)(a2 + 72);
      v9 = *v8;
      v146[6] = *(_QWORD *)(a2 + 64);
      v146[5] = v9;
      *(_BYTE *)(a2 + 1545) = 0;
      v146[0] = v141;
      v133 = v141;
      v134 = v142;
      v135 = v143;
      v136 = v144;
      v137 = v145;
      v138 = v146[5];
      v139 = v146[6];
      v140 = v146[7];
      v10 = (_QWORD *)(a2 + 80);
      *(_QWORD *)(a2 + 136) = v146[7];
      *(_QWORD *)(a2 + 128) = v139;
      *(_QWORD *)(a2 + 120) = v138;
      *(_QWORD *)(a2 + 112) = v137;
      *(_QWORD *)(a2 + 104) = v136;
      *(_QWORD *)(a2 + 96) = v135;
      v11 = v133;
      *(_QWORD *)(a2 + 88) = v134;
      *(_QWORD *)(a2 + 80) = v11;
      *(_QWORD *)(a2 + 144) = v5;
      *(_QWORD *)(a2 + 152) = v6;
      v149 = (char *)(a2 + 568);
      *(_BYTE *)(a2 + 568) = 0;
LABEL_6:
      *(_QWORD *)(a2 + 160) = v5;
      v12 = *(_QWORD *)(a2 + 128);
      *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 120);
      *(_QWORD *)(a2 + 176) = v12;
      *(_QWORD *)(a2 + 184) = *(_QWORD *)(a2 + 136);
      *(_QWORD *)(a2 + 192) = v6;
      v13 = v10[1];
      *(_QWORD *)(a2 + 200) = *v10;
      *(_QWORD *)(a2 + 208) = v13;
      *(_QWORD *)(a2 + 216) = v10[2];
      *(_QWORD *)(a2 + 224) = v10[3];
      *(_QWORD *)(a2 + 232) = v10[4];
      v14 = *(_QWORD *)(a2 + 184);
      if ( !v14 )
      {
        codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
          v124,
          502,
          "no candidate provider availableall relay providers failed; please check provider config / networkmessage",
          31,
          "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
          14);
LABEL_132:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 208);
        v116 = *(_QWORD *)(a2 + 184);
        if ( v116 )
        {
          v117 = *(_QWORD *)(a2 + 176);
          do
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v117);
            v117 += 232;
            --v116;
          }
          while ( v116 );
        }
LABEL_135:
        v118 = *(_QWORD *)(a2 + 168);
        if ( v118 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 176), 232 * v118, 8);
        v119 = v124[0];
        qmemcpy(v121, &v124[1], sizeof(v121));
        *v149 = 1;
        if ( v119 == 3 )
          goto LABEL_143;
        v123[0] = v119;
        qmemcpy(&v123[1], v121, 0x78u);
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_with_candidates..$u7b$$u7b$closure$u7d$$u7d$$GT$::h52dab01adeb79006(v10);
        *(_BYTE *)(a2 + 1545) = 0;
        v23 = v147;
LABEL_139:
        qmemcpy(v23, v123, 0x80u);
        result = 1;
        goto LABEL_144;
      }
      v153 = v10;
      *(_QWORD *)(a2 + 240) = 3;
      *(_QWORD *)(a2 + 368) = v14;
      v15 = *(_QWORD *)(a2 + 176);
      v16 = v15 + 232 * v14;
      *(_QWORD *)(a2 + 376) = v15;
      *(_QWORD *)(a2 + 384) = v16;
      *(_QWORD *)(a2 + 392) = 0;
      break;
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D698);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D698);
    case 3LL:
      v149 = (char *)(a2 + 568);
      v10 = (_QWORD *)(a2 + 80);
      switch ( *(_BYTE *)(a2 + 568) )
      {
        case 0:
          v5 = *(_QWORD **)(a2 + 144);
          v6 = *(_QWORD *)(a2 + 152);
          goto LABEL_6;
        case 1:
          v153 = (_QWORD *)(a2 + 80);
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D6C8);
        case 2:
          v153 = (_QWORD *)(a2 + 80);
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D6C8);
        case 3:
          v148 = (char *)(a2 + 608);
          v24 = (void *)(a2 + 576);
          switch ( *(_BYTE *)(a2 + 608) )
          {
            case 0:
              v153 = (_QWORD *)(a2 + 80);
              v155 = *(_QWORD *)(a2 + 576);
              v15 = *(_QWORD *)(a2 + 584);
              v154 = *(_QWORD *)(a2 + 592);
              v25 = *(_QWORD **)(a2 + 600);
              goto LABEL_29;
            case 1:
              v152 = (void *)(a2 + 576);
              v153 = (_QWORD *)(a2 + 80);
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D518);
            case 2:
              v152 = (void *)(a2 + 576);
              v153 = (_QWORD *)(a2 + 80);
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D518);
            case 3:
              goto LABEL_108;
            case 4:
              goto LABEL_97;
            case 5:
              v152 = (void *)(a2 + 576);
              goto LABEL_78;
            case 6:
              v152 = (void *)(a2 + 576);
              goto LABEL_92;
            case 7:
              goto LABEL_103;
          }
        case 4:
          goto LABEL_127;
        case 5:
          goto LABEL_83;
      }
  }
  while ( 1 )
  {
    if ( v15 == v16 )
    {
      if ( *(_QWORD *)(a2 + 240) == 3 )
      {
        v10 = v153;
        codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
          __dst,
          502,
          "all relay providers failed; please check provider config / networkmessage",
          66,
          "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
          14);
      }
      else
      {
        __dst[0] = *(_QWORD *)(a2 + 240);
        qmemcpy(&__dst[1], (const void *)(a2 + 248), 0x78u);
        v10 = v153;
      }
      qmemcpy(v146, __dst, 0x80u);
      memcpy((void *)(a2 + 576), v146, 0x1D0u);
      *(_BYTE *)(a2 + 1040) = 0;
LABEL_83:
      codexmate_lib::core::relay::proxy_server::inject_hint_into_error::_$u7b$$u7b$closure$u7d$$u7d$::h67aca40ba7e36d14(
        __dst,
        a2 + 576,
        v150);
      if ( LODWORD(__dst[0]) == 3 )
      {
        v90 = 5;
        goto LABEL_142;
      }
      qmemcpy(v124, __dst, sizeof(v124));
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..inject_hint_into_error..$u7b$$u7b$closure$u7d$$u7d$$GT$::h7a43820e390efce4(a2 + 576);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2 + 208);
      v91 = *(_QWORD *)(a2 + 184);
      if ( v91 )
      {
        v92 = *(_QWORD *)(a2 + 176);
        do
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v92);
          v92 += 232;
          --v91;
        }
        while ( v91 );
      }
      goto LABEL_135;
    }
    *(_QWORD *)(a2 + 376) = v15 + 232;
    v26 = *(_QWORD *)(a2 + 392) + 1LL;
    *(_QWORD *)(a2 + 392) = v26;
    *(_QWORD *)(a2 + 400) = v15;
    *(_QWORD *)(a2 + 408) = v26;
    v27 = *(_QWORD *)(a2 + 192);
    v25 = (_QWORD *)(a2 + 200);
    v24 = (void *)(a2 + 576);
    v155 = *(_QWORD *)(a2 + 160);
    *(_QWORD *)(a2 + 576) = v155;
    *(_QWORD *)(a2 + 584) = v15;
    v154 = v27;
    *(_QWORD *)(a2 + 592) = v27;
    *(_QWORD *)(a2 + 600) = a2 + 200;
    v148 = (char *)(a2 + 608);
    *(_BYTE *)(a2 + 608) = 0;
LABEL_29:
    if ( *v25 != 2 )
      break;
    v31 = v25 + 1;
    if ( *(_BYTE *)(v15 + 230) == 2 )
    {
      v152 = v24;
      v32 = *(_QWORD *)(v15 + 56);
      v33 = *(_QWORD *)(v15 + 64);
      v151 = a2 + 616;
      codexmate_lib::core::relay::upstream_url::join_upstream_url::h90512dea8a6c0852(
        a2 + 616,
        v32,
        v33,
        "/v1/messages/v1/chat/completions/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failur"
        "e (re-read system proxy)codexmate_lib::core::relay::proxy_serverstream",
        12);
      v34 = *(_QWORD *)(a2 + 624);
      v35 = *(_QWORD *)(a2 + 632);
      switch ( *(_BYTE *)v31 )
      {
        case 0:
          LOBYTE(v146[0]) = 0;
          break;
        case 1:
        case 2:
          v146[3] = v25[4];
          v146[2] = v25[3];
          v36 = *v31;
          v146[1] = v25[2];
          v146[0] = v36;
          break;
        case 3:
          v59 = *(_QWORD *)(a2 + 632);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v146[1], v25 + 2);
          v35 = v59;
          LOBYTE(v146[0]) = 3;
          break;
        case 4:
          v58 = *(_QWORD *)(a2 + 632);
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
            &v146[1],
            v25 + 2);
          v35 = v58;
          LOBYTE(v146[0]) = 4;
          break;
        case 5:
          if ( v25[4] )
          {
            v63 = v25[2];
            if ( !v63 )
              core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
            v64 = *(_QWORD *)(a2 + 632);
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
              &v146[1],
              v63,
              v25[3]);
            v35 = v64;
          }
          else
          {
            v146[1] = 0;
            v146[3] = 0;
          }
          LOBYTE(v146[0]) = 5;
          break;
      }
      v93 = v154;
      v94 = v155;
      v127[7] = v146[3];
      v127[6] = v146[2];
      v127[5] = v146[1];
      v127[4] = v146[0];
      qmemcpy((void *)(a2 + 640), v127, 0x50u);
      *(_QWORD *)(a2 + 720) = v34;
      *(_QWORD *)(a2 + 728) = v35;
      *(_QWORD *)(a2 + 760) = v94;
      *(_QWORD *)(a2 + 768) = v15;
      *(_QWORD *)(a2 + 776) = v93;
      *(_BYTE *)(a2 + 785) = 0;
      v10 = v153;
LABEL_92:
      codexmate_lib::core::relay::proxy_server::try_pass_through::_$u7b$$u7b$closure$u7d$$u7d$::h2a9c211365cf42ec(
        v146,
        a2 + 640,
        v150);
      v88 = v146[0];
      if ( v146[0] == 6 )
      {
        v89 = 6;
        goto LABEL_141;
      }
      goto LABEL_98;
    }
    codexmate_lib::core::relay::translator::anthropic_to_openai_chat_request::h14ee8ffc9106fc93(
      v130,
      v25 + 1,
      *(_QWORD *)(v15 + 104),
      *(_QWORD *)(v15 + 112));
    v43 = *(_QWORD *)(v15 + 56);
    v44 = *(_QWORD *)(v15 + 64);
    v151 = a2 + 616;
    codexmate_lib::core::relay::upstream_url::join_upstream_url::h90512dea8a6c0852(
      a2 + 616,
      v43,
      v44,
      "/v1/chat/completions/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failure (re-read system proxy)codexmate_lib::core::relay::proxy_serverstream",
      20);
    v45 = *(_QWORD *)(a2 + 624);
    v46 = *(void **)(a2 + 632);
    switch ( *(_BYTE *)v31 )
    {
      case 0:
        LOBYTE(v146[0]) = 0;
        break;
      case 1:
      case 2:
        v146[3] = v25[4];
        v146[2] = v25[3];
        v47 = *v31;
        v146[1] = v25[2];
        v146[0] = v47;
        break;
      case 3:
        v73 = v25 + 2;
        v74 = *(_QWORD *)(a2 + 624);
        v75 = *(void **)(a2 + 632);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v146[1], v73);
        v46 = v75;
        v45 = v74;
        LOBYTE(v146[0]) = 3;
        break;
      case 4:
        v70 = v25 + 2;
        v71 = *(_QWORD *)(a2 + 624);
        v72 = *(void **)(a2 + 632);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v146[1], v70);
        v46 = v72;
        v45 = v71;
        LOBYTE(v146[0]) = 4;
        break;
      case 5:
        if ( v25[4] )
        {
          v152 = *(void **)(a2 + 632);
          v79 = v25[2];
          if ( !v79 )
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
          v80 = v45;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &v146[1],
            v79,
            v25[3]);
          v45 = v80;
          v46 = v152;
        }
        else
        {
          v146[1] = 0;
          v146[3] = 0;
        }
        LOBYTE(v146[0]) = 5;
        break;
    }
    v97 = v154;
    v98 = v155;
    v129[11] = v130[3];
    v129[10] = v130[2];
    v129[9] = v130[1];
    v129[8] = v130[0];
    v129[12] = v146[0];
    v129[13] = v146[1];
    v129[14] = v146[2];
    v129[15] = v146[3];
    qmemcpy((void *)(a2 + 640), v129, 0x80u);
    *(_QWORD *)(a2 + 768) = v45;
    *(_QWORD *)(a2 + 776) = v46;
    *(_QWORD *)(a2 + 808) = v98;
    *(_QWORD *)(a2 + 816) = v15;
    *(_QWORD *)(a2 + 824) = v97;
    *(_WORD *)(a2 + 837) = 256;
    v10 = v153;
LABEL_103:
    v152 = v24;
    codexmate_lib::core::relay::proxy_server::try_translate::_$u7b$$u7b$closure$u7d$$u7d$::ha7d38d5fd67c8e41(
      v146,
      (_QWORD *)(a2 + 640),
      v150);
    v88 = v146[0];
    if ( v146[0] == 6 )
    {
      v89 = 7;
      goto LABEL_141;
    }
LABEL_109:
    memcpy(__dst, &v146[1], sizeof(__dst));
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..try_translate..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6ab6e483c4e23bd4(a2 + 640);
LABEL_110:
    v101 = *(_QWORD *)(a2 + 616);
    if ( v101 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 624), v101, 1);
    memcpy(v122, __dst, sizeof(v122));
    *(_BYTE *)(a2 + 608) = 1;
    *(_QWORD *)(a2 + 416) = v88;
    memcpy((void *)(a2 + 424), v122, 0x90u);
    v102 = v152;
    v153 = v10;
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..try_forward..$u7b$$u7b$closure$u7d$$u7d$$GT$::he307b6a7a365d15f(v152);
    v103 = *(_QWORD *)(a2 + 416);
    v104 = v103 - 3;
    v105 = v103 < 3;
    v106 = 1;
    if ( !v105 )
      v106 = v104;
    if ( v106 != 1 )
    {
      if ( v106 )
      {
        memmove(v102, (const void *)(a2 + 424), 0x80u);
        *(_BYTE *)(a2 + 1040) = 0;
LABEL_127:
        codexmate_lib::core::relay::proxy_server::inject_hint_into_error::_$u7b$$u7b$closure$u7d$$u7d$::h67aca40ba7e36d14(
          v146,
          a2 + 576,
          v150);
        if ( LODWORD(v146[0]) == 3 )
        {
          v90 = 4;
          goto LABEL_142;
        }
        qmemcpy(v124, v146, sizeof(v124));
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..inject_hint_into_error..$u7b$$u7b$closure$u7d$$u7d$$GT$::h7a43820e390efce4(a2 + 576);
      }
      else
      {
        qmemcpy(v146, (const void *)(a2 + 424), 0x80u);
        codexmate_lib::core::relay::breaker::record_success::h89f703488f35bc78(
          *(_QWORD *)(a2 + 160) + 8LL,
          *(_QWORD *)(*(_QWORD *)(a2 + 400) + 8LL),
          *(_QWORD *)(*(_QWORD *)(a2 + 400) + 16LL));
        qmemcpy(v124, v146, sizeof(v124));
      }
      if ( *(_DWORD *)(a2 + 240) != 3 )
        core::ptr::drop_in_place$LT$http..response..Response$LT$axum_core..body..Body$GT$$GT$::hffe02e5ac479aa98(a2 + 240);
      goto LABEL_132;
    }
    qmemcpy(v146, (const void *)(a2 + 416), 0x80u);
    v128[2] = *(_QWORD *)(a2 + 560);
    v107 = *(_QWORD *)(a2 + 544);
    v128[1] = *(_QWORD *)(a2 + 552);
    v128[0] = v107;
    v108 = *(_QWORD *)(a2 + 160);
    v109 = *(_QWORD *)(a2 + 400);
    v110 = *(_QWORD *)(v109 + 8);
    v111 = *(_QWORD *)(v109 + 16);
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__dst);
    v112 = v108 + 8;
    v113 = (SLODWORD(__dst[0]) >> 13) - 1;
    v114 = 0;
    if ( SLODWORD(__dst[0]) >> 13 <= 0 )
    {
      v115 = (1 - (SLODWORD(__dst[0]) >> 13)) / 0x190u + 1;
      v113 += 400 * v115;
      v114 = -146097 * v115;
    }
    v127[0] = codexmate_lib::core::relay::breaker::record_failure::hf46755412870e316(
                v112,
                v110,
                v111,
                1000
              * (HIDWORD(__dst[0])
               + 86400LL
               * (((v113 / 100) >> 2)
                + ((1461 * v113) >> 2)
                + v114
                + ((LODWORD(__dst[0]) >> 4) & 0x1FF)
                - v113 / 100
                - 719163))
              + LODWORD(__dst[1]) / 0xF4240uLL);
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v129[0] = *(_QWORD *)(a2 + 400);
      v129[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      v129[2] = a2 + 408;
      v129[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v129[4] = a2 + 368;
      v129[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v129[6] = v127;
      v129[7] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b;
      v129[8] = v128;
      v129[9] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      __dst[6] = 2;
      __dst[7] = "codexmate_lib::core::relay::proxy_serverstream";
      __dst[8] = 40;
      __dst[10] = &unk_1017B9A51;
      __dst[11] = v129;
      __dst[0] = 0;
      __dst[1] = "codexmate_lib::core::relay::proxy_serverstream";
      __dst[2] = 40;
      __dst[3] = 0;
      __dst[4] = "src/core/relay/proxy_server.rs";
      __dst[5] = 30;
      __dst[9] = 0x5C400000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v126, __dst);
    }
    codexmate_lib::core::relay::proxy_server::record_forward_failure::h39a4015ba5fcedd5(
      *(_QWORD *)(a2 + 160),
      *(_QWORD *)(*(_QWORD *)(a2 + 400) + 8LL),
      *(_QWORD *)(*(_QWORD *)(a2 + 400) + 16LL),
      v128[1],
      v128[2]);
    if ( *(_DWORD *)(a2 + 240) != 3 )
      core::ptr::drop_in_place$LT$http..response..Response$LT$axum_core..body..Body$GT$$GT$::hffe02e5ac479aa98(a2 + 240);
    qmemcpy((void *)(a2 + 240), v146, 0x80u);
    if ( v128[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v128[1], v128[0], 1);
    v15 = *(_QWORD *)(a2 + 376);
    v16 = *(_QWORD *)(a2 + 384);
  }
  if ( (unsigned int)*v25 == 1 )
  {
    v152 = v24;
    codexmate_lib::core::relay::upstream_url::join_upstream_url::h90512dea8a6c0852(
      a2 + 616,
      *(_QWORD *)(v15 + 56),
      *(_QWORD *)(v15 + 64),
      "/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failure (re-read system proxy)codexmate_lib::core::relay::proxy_serverstream",
      13);
    v28 = *(_QWORD *)(a2 + 624);
    v29 = *(_QWORD *)(a2 + 632);
    switch ( *((_BYTE *)v25 + 8) )
    {
      case 0:
        LOBYTE(v146[0]) = 0;
        break;
      case 1:
      case 2:
        v146[3] = v25[4];
        v146[2] = v25[3];
        v30 = v25[1];
        v146[1] = v25[2];
        v146[0] = v30;
        break;
      case 3:
        v55 = v25 + 2;
        v56 = *(_QWORD *)(a2 + 632);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v146[1], v55);
        v29 = v56;
        LOBYTE(v146[0]) = 3;
        break;
      case 4:
        v53 = v25 + 2;
        v54 = *(_QWORD *)(a2 + 632);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v146[1], v53);
        v29 = v54;
        LOBYTE(v146[0]) = 4;
        break;
      case 5:
        if ( v25[4] )
        {
          v151 = *(_QWORD *)(a2 + 632);
          v57 = v25[2];
          if ( !v57 )
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &v146[1],
            v57,
            v25[3]);
          v29 = v151;
        }
        else
        {
          v146[1] = 0;
          v146[3] = 0;
        }
        LOBYTE(v146[0]) = 5;
        break;
    }
    v86 = v154;
    v87 = v155;
    v126[7] = v146[3];
    v126[6] = v146[2];
    v126[5] = v146[1];
    v126[4] = v146[0];
    qmemcpy((void *)(a2 + 640), v126, 0x50u);
    *(_QWORD *)(a2 + 720) = v28;
    *(_QWORD *)(a2 + 728) = v29;
    *(_QWORD *)(a2 + 760) = v87;
    *(_QWORD *)(a2 + 768) = v15;
    *(_QWORD *)(a2 + 776) = v86;
    *(_BYTE *)(a2 + 785) = 0;
    v10 = v153;
LABEL_78:
    codexmate_lib::core::relay::proxy_server::try_pass_through::_$u7b$$u7b$closure$u7d$$u7d$::h2a9c211365cf42ec(
      v146,
      a2 + 640,
      v150);
    v88 = v146[0];
    if ( v146[0] == 6 )
    {
      v89 = 5;
      goto LABEL_141;
    }
LABEL_98:
    memcpy(__dst, &v146[1], sizeof(__dst));
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..try_pass_through..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8420497b6ea74f3c(a2 + 640);
    goto LABEL_110;
  }
  v37 = v25 + 1;
  if ( *(_BYTE *)(v15 + 230) != 2 )
  {
    v48 = *(_QWORD *)(v15 + 56);
    v49 = *(_QWORD *)(v15 + 64);
    v151 = a2 + 616;
    codexmate_lib::core::relay::upstream_url::join_upstream_url::h90512dea8a6c0852(
      a2 + 616,
      v48,
      v49,
      "/v1/chat/completions/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failure (re-read system proxy)codexmate_lib::core::relay::proxy_serverstream",
      20);
    v50 = *(_QWORD *)(a2 + 624);
    v51 = *(void **)(a2 + 632);
    switch ( *(_BYTE *)v37 )
    {
      case 0:
        LOBYTE(v146[0]) = 0;
        break;
      case 1:
      case 2:
        v146[3] = v25[4];
        v146[2] = v25[3];
        v52 = *v37;
        v146[1] = v25[2];
        v146[0] = v52;
        break;
      case 3:
        v65 = v25 + 2;
        v66 = *(_QWORD *)(a2 + 624);
        v67 = *(void **)(a2 + 632);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v146[1], v65);
        v51 = v67;
        v50 = v66;
        LOBYTE(v146[0]) = 3;
        break;
      case 4:
        v60 = v25 + 2;
        v61 = *(_QWORD *)(a2 + 624);
        v62 = *(void **)(a2 + 632);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v146[1], v60);
        v51 = v62;
        v50 = v61;
        LOBYTE(v146[0]) = 4;
        break;
      case 5:
        if ( v25[4] )
        {
          v152 = *(void **)(a2 + 632);
          v68 = v25[2];
          if ( !v68 )
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
          v69 = v50;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &v146[1],
            v68,
            v25[3]);
          v50 = v69;
          v51 = v152;
        }
        else
        {
          v146[1] = 0;
          v146[3] = 0;
        }
        LOBYTE(v146[0]) = 5;
        break;
    }
    v95 = v154;
    v96 = v155;
    v125[7] = v146[3];
    v125[6] = v146[2];
    v125[5] = v146[1];
    v125[4] = v146[0];
    qmemcpy((void *)(a2 + 640), v125, 0x50u);
    *(_QWORD *)(a2 + 720) = v50;
    *(_QWORD *)(a2 + 728) = v51;
    *(_QWORD *)(a2 + 760) = v96;
    *(_QWORD *)(a2 + 768) = v15;
    *(_QWORD *)(a2 + 776) = v95;
    *(_BYTE *)(a2 + 785) = 0;
    v10 = v153;
LABEL_97:
    v152 = v24;
    codexmate_lib::core::relay::proxy_server::try_pass_through::_$u7b$$u7b$closure$u7d$$u7d$::h2a9c211365cf42ec(
      v146,
      a2 + 640,
      v150);
    v88 = v146[0];
    if ( v146[0] == 6 )
    {
      v89 = 4;
      goto LABEL_141;
    }
    goto LABEL_98;
  }
  codexmate_lib::core::relay::translator::openai_chat_to_anthropic_request::h3d88b15f190b8ba9(
    v131,
    v25 + 1,
    *(_QWORD *)(v15 + 104),
    *(_QWORD *)(v15 + 112));
  v38 = *(_QWORD *)(v15 + 56);
  v39 = *(_QWORD *)(v15 + 64);
  v151 = a2 + 616;
  codexmate_lib::core::relay::upstream_url::join_upstream_url::h90512dea8a6c0852(
    a2 + 616,
    v38,
    v39,
    "/v1/messages/v1/chat/completions/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failure (r"
    "e-read system proxy)codexmate_lib::core::relay::proxy_serverstream",
    12);
  v40 = *(_QWORD *)(a2 + 624);
  v41 = *(void **)(a2 + 632);
  switch ( *(_BYTE *)v37 )
  {
    case 0:
      LOBYTE(v146[0]) = 0;
      break;
    case 1:
    case 2:
      v146[3] = v25[4];
      v146[2] = v25[3];
      v42 = *v37;
      v146[1] = v25[2];
      v146[0] = v42;
      break;
    case 3:
      v81 = v25 + 2;
      v82 = *(_QWORD *)(a2 + 624);
      v83 = *(void **)(a2 + 632);
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v146[1], v81);
      v41 = v83;
      v40 = v82;
      LOBYTE(v146[0]) = 3;
      break;
    case 4:
      v76 = v25 + 2;
      v77 = *(_QWORD *)(a2 + 624);
      v78 = *(void **)(a2 + 632);
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v146[1], v76);
      v41 = v78;
      v40 = v77;
      LOBYTE(v146[0]) = 4;
      break;
    case 5:
      if ( v25[4] )
      {
        v152 = *(void **)(a2 + 632);
        v84 = v25[2];
        if ( !v84 )
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
        v85 = v40;
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
          &v146[1],
          v84,
          v25[3]);
        v40 = v85;
        v41 = v152;
      }
      else
      {
        v146[1] = 0;
        v146[3] = 0;
      }
      LOBYTE(v146[0]) = 5;
      break;
    case 6:
      JUMPOUT(0x100A9DC7FLL);
    case 7:
      JUMPOUT(0x10025BD70LL);
  }
  v99 = v154;
  v100 = v155;
  v128[11] = v131[3];
  v128[10] = v131[2];
  v128[9] = v131[1];
  v128[8] = v131[0];
  v128[12] = v146[0];
  v128[13] = v146[1];
  v128[14] = v146[2];
  v128[15] = v146[3];
  qmemcpy((void *)(a2 + 640), v128, 0x80u);
  *(_QWORD *)(a2 + 768) = v40;
  *(_QWORD *)(a2 + 776) = v41;
  *(_QWORD *)(a2 + 808) = v100;
  *(_QWORD *)(a2 + 816) = v15;
  *(_QWORD *)(a2 + 824) = v99;
  *(_WORD *)(a2 + 837) = 0;
  v10 = v153;
LABEL_108:
  v152 = v24;
  codexmate_lib::core::relay::proxy_server::try_translate::_$u7b$$u7b$closure$u7d$$u7d$::ha7d38d5fd67c8e41(
    v146,
    (_QWORD *)(a2 + 640),
    v150);
  v88 = v146[0];
  if ( v146[0] != 6 )
    goto LABEL_109;
  v89 = 3;
LABEL_141:
  *v148 = v89;
  v90 = 3;
LABEL_142:
  *v149 = v90;
LABEL_143:
  *v147 = 3;
  result = 3;
LABEL_144:
  *(_BYTE *)(a2 + 1544) = result;
  return result;
}
