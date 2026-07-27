// __ZN13codexmate_lib4core5relay12proxy_server16try_pass_through28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100257d90 | 基线 same-set
char __fastcall codexmate_lib::core::relay::proxy_server::try_pass_through::_$u7b$$u7b$closure$u7d$$u7d$::h2a9c211365cf42ec(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  char result; // al
  __int64 v14; // r15
  __int64 *v15; // r12
  unsigned __int16 *v16; // r13
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 *v20; // r13
  __int64 (__fastcall **v21)(); // r12
  __int64 v22; // r12
  size_t v23; // r15
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // r14d
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // r15d
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // r15
  size_t v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r12
  __int64 (__fastcall **v43)(); // rcx
  unsigned __int16 **v44; // r15
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rsi
  _QWORD *v49; // r14
  _QWORD *i; // rcx
  __int64 v51; // rax
  signed __int64 v52; // rdx
  unsigned __int16 **v53; // r12
  _QWORD *v54; // r15
  const void *v55; // r14
  __int64 v56; // r15
  size_t v57; // r12
  void *v58; // rax
  size_t v59; // rsi
  __int64 v60; // rax
  _QWORD *v61; // rdi
  __int64 v62; // rsi
  __int64 j; // rax
  unsigned __int8 v64; // cl
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __m128i v72; // xmm5
  __m128i v73; // xmm6
  __m128i v74; // xmm7
  __m128i v75; // xmm0
  __m128i v76; // xmm1
  __m128i v77; // xmm2
  __m128i v78; // xmm3
  __int64 v79; // rcx
  __m128i si128; // xmm3
  __m128i v81; // xmm4
  __m128i v82; // xmm5
  __m128i v83; // xmm0
  __m128i v84; // xmm1
  __m128i v85; // xmm1
  __m128i v86; // xmm1
  __m128i v87; // xmm1
  char v88; // of
  __int64 (__fastcall **v89)(); // rdx
  __int64 v90; // r12
  volatile signed __int64 *v91; // r15
  __int64 v92; // rt0
  volatile signed __int64 *v93; // r13
  __int64 v94; // rt0
  __int64 v95; // rsi
  __int64 v96; // rax
  __m128i v97; // xmm0
  _QWORD *v98; // rax
  _QWORD *v99; // r15
  __int64 v100; // r12
  __int64 v101; // r13
  __int64 v102; // rsi
  __int64 v103; // r15
  bool v104; // r14
  unsigned __int64 v105; // rsi
  _BYTE v106[120]; // [rsp+8h] [rbp-6F8h] BYREF
  _BYTE v107[96]; // [rsp+80h] [rbp-680h] BYREF
  _BYTE v108[120]; // [rsp+E0h] [rbp-620h] BYREF
  _QWORD v109[15]; // [rsp+158h] [rbp-5A8h] BYREF
  __int64 (__fastcall **v110)(); // [rsp+1D0h] [rbp-530h] BYREF
  _QWORD v111[34]; // [rsp+1D8h] [rbp-528h] BYREF
  _QWORD v112[17]; // [rsp+2E8h] [rbp-418h] BYREF
  unsigned __int16 *v113; // [rsp+370h] [rbp-390h] BYREF
  _QWORD v114[33]; // [rsp+378h] [rbp-388h] BYREF
  _QWORD __dst[34]; // [rsp+480h] [rbp-280h] BYREF
  volatile signed __int64 *v116; // [rsp+590h] [rbp-170h] BYREF
  __int64 v117; // [rsp+598h] [rbp-168h]
  __int64 v118; // [rsp+5A0h] [rbp-160h]
  __int64 v119; // [rsp+5A8h] [rbp-158h]
  __int64 v120; // [rsp+5B0h] [rbp-150h]
  _QWORD v121[12]; // [rsp+5B8h] [rbp-148h] BYREF
  __int64 v122; // [rsp+618h] [rbp-E8h]
  _QWORD *v123; // [rsp+620h] [rbp-E0h]
  __int64 v124; // [rsp+628h] [rbp-D8h]
  _QWORD v125[5]; // [rsp+630h] [rbp-D0h] BYREF
  __int64 *v126; // [rsp+658h] [rbp-A8h]
  unsigned __int64 v127; // [rsp+660h] [rbp-A0h]
  char **v128; // [rsp+668h] [rbp-98h]
  volatile signed __int64 *v129; // [rsp+670h] [rbp-90h]
  __int64 v130; // [rsp+678h] [rbp-88h]
  __int64 v131; // [rsp+680h] [rbp-80h]
  __int64 v132; // [rsp+688h] [rbp-78h] BYREF
  __int64 v133; // [rsp+690h] [rbp-70h]
  unsigned __int64 v134; // [rsp+698h] [rbp-68h]
  _QWORD *v135; // [rsp+6A0h] [rbp-60h]
  char **v136; // [rsp+6A8h] [rbp-58h]
  __int64 v137; // [rsp+6B0h] [rbp-50h]
  unsigned __int64 v138; // [rsp+6B8h] [rbp-48h]
  unsigned __int16 v139; // [rsp+6C6h] [rbp-3Ah] BYREF
  __int64 (__fastcall **v140)(); // [rsp+6C8h] [rbp-38h]
  size_t __n; // [rsp+6D0h] [rbp-30h]

  v5 = a1; /*0x100257daa*/
  switch ( *(_BYTE *)(a2 + 145) ) /*0x100257dc2*/
  {
    case 0: /*0x100257dc2*/
      *(_BYTE *)(a2 + 144) = 0; /*0x100257dc7*/
      v6 = *(_QWORD *)(a2 + 128); /*0x100257dce*/
      *(__m128i *)(a2 + 96) = _mm_loadu_si128((const __m128i *)(a2 + 120)); /*0x100257dda*/
      v7 = *(_QWORD *)(a2 + 80); /*0x100257ddf*/
      v8 = *(_QWORD *)(a2 + 88); /*0x100257de3*/
      v9 = *(_QWORD *)(a2 + 40); /*0x100257deb*/
      *(_QWORD *)a2 = *(_QWORD *)(a2 + 32); /*0x100257def*/
      *(_QWORD *)(a2 + 8) = v9; /*0x100257df2*/
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(a2 + 48); /*0x100257dfa*/
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(a2 + 56); /*0x100257e02*/
      codexmate_lib::core::relay::proxy_server::build_upstream_headers::hfb8c5da4446947b4(v107, v6); /*0x100257e0d*/
      *(_BYTE *)(a2 + 144) = 1; /*0x100257e12*/
      v10 = codexmate_lib::core::relay::proxy_server::ProxyContext::client_for::ha60cf1864b88a927( /*0x100257e30*/
              *(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL),
              *(_QWORD *)(*(_QWORD *)(a2 + 96) + 32LL),
              *(unsigned __int8 *)(*(_QWORD *)(a2 + 104) + 229LL));
      *(_QWORD *)(a2 + 112) = v10; /*0x100257e35*/
      reqwest::async_impl::client::Client::request::h7c49bfd56329fb46( /*0x100257e50*/
        __dst,
        v10,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_845,
        v7,
        v8);
      *(_BYTE *)(a2 + 144) = 0; /*0x100257e55*/
      qmemcpy(v121, v107, sizeof(v121)); /*0x100257e72*/
      reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(&v113, __dst); /*0x100257e83*/
      v5 = a1; /*0x100257e88*/
      reqwest::async_impl::request::RequestBuilder::json::hc3bd6ec843dbdd77(v111, &v113); /*0x100257e9c*/
      *(_QWORD *)(a2 + 64) = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(v111); /*0x100257ead*/
      *(_QWORD *)(a2 + 72) = v11; /*0x100257eb1*/
      break; /*0x100257eb1*/
    case 1: /*0x100257dc2*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D560); /*0x100258ded*/
    case 2: /*0x100257dc2*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D560); /*0x100258de1*/
    case 3: /*0x100257dc2*/
      break;
  }
  _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d( /*0x100257eb5*/
    __dst,
    a2 + 64,
    a3);
  v12 = __dst[0]; /*0x100257ecb*/
  if ( __dst[0] == 4 ) /*0x100257ed6*/
  {
    *v5 = 6; /*0x100257ed8*/
    result = 3; /*0x100257ee0*/
    goto LABEL_32; /*0x100257ee2*/
  }
  v14 = __dst[1]; /*0x100257ee7*/
  qmemcpy(v106, &__dst[2], sizeof(v106)); /*0x100257f01*/
  core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a2 + 64); /*0x100257f07*/
  if ( (_DWORD)v12 == 3 ) /*0x100257f10*/
  {
    v121[0] = v14; /*0x100257f16*/
    codexmate_lib::core::relay::proxy_server::ProxyContext::note_network_failure::h1ac7213a89a53d0c(*(_QWORD *)(a2 + 96)); /*0x100257f21*/
    v113 = (unsigned __int16 *)v121; /*0x100257f2d*/
    v114[0] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x100257f3b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B9947, &v113); /*0x100257f57*/
    v15 = v5; /*0x100257f5c*/
    v140 = (__int64 (__fastcall **)())__dst[0]; /*0x100257f66*/
    v138 = __dst[2]; /*0x100257f7c*/
    __n = __dst[1]; /*0x100257f7c*/
    v111[0] = v121; /*0x100257f80*/
    v111[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x100257f87*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v113, &unk_1017B9947, v111); /*0x100257fa3*/
    v16 = v113; /*0x100257fa8*/
    v17 = v114[0]; /*0x100257faf*/
    codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x100257fd9*/
      __dst,
      502,
      v114[0],
      v114[1],
      "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
      14);
    v18 = __dst[0]; /*0x100257fde*/
    qmemcpy(v108, &__dst[1], sizeof(v108)); /*0x100257ff8*/
    v19 = (__int64)&__dst[16]; /*0x100257ff8*/
    if ( v16 ) /*0x100257ffe*/
    {
      v19 = (__int64)v16; /*0x100258008*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x10025800b*/
    }
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v121); /*0x100258017*/
    v20 = v15; /*0x10025801c*/
    v21 = v140; /*0x10025801f*/
    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 112)) ) /*0x100258027*/
      goto LABEL_30; /*0x10025802b*/
    goto LABEL_29; /*0x10025802b*/
  }
  qmemcpy(&v112[2], v106, 0x78u); /*0x100258053*/
  v112[0] = v12; /*0x100258056*/
  v112[1] = v14; /*0x10025805d*/
  v139 = v112[13]; /*0x10025806b*/
  v22 = v112[10]; /*0x10025806f*/
  v23 = 4LL * v112[10]; /*0x100258076*/
  if ( v112[10] >> 62 != 0 || (unsigned __int64)(4LL * v112[10]) > 0x7FFFFFFFFFFFFFFELL ) /*0x10025808f*/
  {
    v24 = 0; /*0x100258096*/
    goto LABEL_12; /*0x100258096*/
  }
  v126 = v5; /*0x1002580a9*/
  LOWORD(v140) = v112[11]; /*0x1002580b7*/
  v25 = v112[9]; /*0x1002580bb*/
  if ( v23 ) /*0x1002580c5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v113, v107); /*0x1002580c7*/
    v24 = 2; /*0x1002580cc*/
    v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 2); /*0x1002580da*/
    if ( !v26 ) /*0x1002580e2*/
LABEL_12:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, v23); /*0x100258099*/
    v27 = v26; /*0x1002580e4*/
  }
  else
  {
    v27 = 2; /*0x1002580e9*/
  }
  memcpy((void *)v27, (const void *)v25, v23); /*0x1002580f7*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfe8f8c941e9360dc(&v113, &v112[3]); /*0x10025810a*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he9843f4b519c7ea4(__dst, &v112[6]); /*0x10025811d*/
  if ( v112[0] >= 2u ) /*0x10025812d*/
  {
    v111[1] = v112[2]; /*0x10025813d*/
    v111[0] = v112[1]; /*0x100258144*/
  }
  LOWORD(v121[11]) = (_WORD)v140; /*0x10025814f*/
  v121[9] = v27; /*0x100258156*/
  v121[10] = v22; /*0x10025815d*/
  v121[3] = v113; /*0x100258172*/
  v121[4] = v114[0]; /*0x100258179*/
  v121[5] = v114[1]; /*0x100258187*/
  v121[6] = __dst[0]; /*0x10025819c*/
  *(_OWORD *)&v121[7] = *(_OWORD *)&__dst[1]; /*0x1002581a3*/
  v121[0] = v112[0]; /*0x1002581b8*/
  v121[1] = v111[0]; /*0x1002581cd*/
  v121[2] = v111[1]; /*0x1002581d4*/
  v28 = v139; /*0x1002581db*/
  if ( (unsigned __int16)(v139 - 500) < 0x64u /*0x100258202*/
    || (unsigned int)v139 - 401 <= 0x1C && (v29 = 268435917, _bittest(&v29, v139 - 401)) )
  {
    v30 = *(_QWORD *)(a2 + 104) + 24LL; /*0x10025820f*/
    __dst[0] = &v139; /*0x100258217*/
    __dst[1] = _$LT$http..status..StatusCode$u20$as$u20$core..fmt..Display$GT$::fmt::h9532ff36c27bd9e7; /*0x100258225*/
    __dst[2] = v30; /*0x10025822c*/
    __dst[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10025823a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v113, &unk_1017B99D4, __dst); /*0x100258256*/
    v140 = (__int64 (__fastcall **)())v113; /*0x100258262*/
    __n = v114[0]; /*0x10025826d*/
    v138 = v114[1]; /*0x100258278*/
    v31 = v139; /*0x10025827c*/
    v32 = *(_QWORD *)(a2 + 104) + 24LL; /*0x100258285*/
    v113 = &v139; /*0x100258289*/
    v114[0] = _$LT$http..status..StatusCode$u20$as$u20$core..fmt..Display$GT$::fmt::h9532ff36c27bd9e7; /*0x100258290*/
    v114[1] = v32; /*0x100258297*/
    v114[2] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10025829e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v111, &unk_1017B99D4, &v113); /*0x1002582ba*/
    v33 = 502; /*0x1002582ce*/
    if ( (unsigned __int16)(v31 - 1000) >= 0xFC7Cu ) /*0x1002582d3*/
      v33 = v31; /*0x1002582d3*/
    v34 = v111[0]; /*0x1002582d7*/
    v35 = v111[1]; /*0x1002582de*/
    codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x100258303*/
      __dst,
      v33,
      v111[1],
      v111[2],
      "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
      14);
    v18 = __dst[0]; /*0x100258308*/
    qmemcpy(v108, &__dst[1], sizeof(v108)); /*0x100258322*/
    v21 = v140; /*0x100258328*/
    if ( v34 ) /*0x10025832c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v34, 1); /*0x100258339*/
    core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v121); /*0x100258345*/
    core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(v112); /*0x100258351*/
    v20 = v126; /*0x100258356*/
    v36 = v112[16]; /*0x10025835d*/
    if ( *(_QWORD *)v112[16] ) /*0x100258364*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v112[16] + 8LL), *(_QWORD *)v112[16], 1); /*0x100258375*/
    v19 = 88; /*0x10025837a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 88, 8); /*0x100258387*/
    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 112)) ) /*0x100258390*/
      goto LABEL_30; /*0x100258394*/
LABEL_29:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 112, v19); /*0x100258396*/
LABEL_30:
    *(_BYTE *)(a2 + 144) = 0; /*0x10025839f*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2); /*0x1002583a9*/
    v37 = __n; /*0x1002583ae*/
    v38 = v138; /*0x1002583b2*/
    goto LABEL_31; /*0x1002583b2*/
  }
  http::response::Parts::new::h962418c42e7bc305(__dst); /*0x100258403*/
  v124 = (unsigned int)(v28 - 200); /*0x10025840f*/
  v39 = v139; /*0x100258416*/
  v40 = __dst[0]; /*0x10025841b*/
  qmemcpy(v111, &__dst[1], 0x60u); /*0x100258438*/
  v41 = LOWORD(__dst[13]); /*0x10025843b*/
  LODWORD(v125[0]) = *(_DWORD *)((char *)&__dst[13] + 2); /*0x100258449*/
  WORD2(v125[0]) = HIWORD(__dst[13]); /*0x100258456*/
  if ( __dst[0] != 3 ) /*0x100258461*/
  {
    v41 = 200; /*0x10025847a*/
    if ( (unsigned __int16)(v139 - 1000) >= 0xFC7Cu ) /*0x100258480*/
      v41 = v139; /*0x100258480*/
    qmemcpy(v111, &__dst[1], 0x60u); /*0x100258493*/
    WORD2(v125[0]) = HIWORD(__dst[13]); /*0x10025849b*/
    LODWORD(v125[0]) = *(_DWORD *)((char *)&__dst[13] + 2); /*0x1002584a5*/
  }
  v113 = (unsigned __int16 *)__dst[0]; /*0x1002584ab*/
  qmemcpy(v114, v111, 0x60u); /*0x1002584c5*/
  LOWORD(v114[12]) = v41; /*0x1002584c8*/
  *(_DWORD *)((char *)&v114[12] + 2) = v125[0]; /*0x1002584d6*/
  HIWORD(v114[12]) = WORD2(v125[0]); /*0x1002584e3*/
  v42 = v121[4]; /*0x1002584ea*/
  v138 = v121[5]; /*0x1002584fa*/
  v127 = v121[8]; /*0x10025850b*/
  v122 = v121[7]; /*0x100258519*/
  v43 = (__int64 (__fastcall **)())(2 * (unsigned int)(v121[5] == 0)); /*0x100258520*/
  v44 = &v113; /*0x100258522*/
  v45 = (unsigned __int64)&off_101960160; /*0x100258529*/
  v128 = &off_101960160; /*0x100258530*/
  v46 = 0; /*0x100258537*/
  v137 = v121[4]; /*0x100258539*/
  if ( v43 == (__int64 (__fastcall **)())2 ) /*0x100258541*/
    goto LABEL_45; /*0x100258541*/
LABEL_38:
  if ( v46 >= v138 ) /*0x100258547*/
  {
    v105 = v138; /*0x100258e22*/
    goto LABEL_130; /*0x100258e26*/
  }
  v40 = v42 + 104 * v46; /*0x100258551*/
  v134 = v46; /*0x100258557*/
  if ( ((unsigned __int8)v43 & 1) != 0 ) /*0x10025855b*/
  {
    if ( v45 < v127 ) /*0x100258564*/
    {
      v136 = (char **)v45; /*0x10025856a*/
      v47 = v122 + 72 * v45; /*0x100258579*/
      v48 = 2; /*0x10025857d*/
      if ( *(_BYTE *)(v47 + 16) ) /*0x100258582*/
      {
        v136 = *(char ***)(v47 + 24); /*0x10025858d*/
        v48 = 1; /*0x100258591*/
      }
      v49 = (_QWORD *)(v47 + 32); /*0x100258596*/
      i = (_QWORD *)(v42 + 104 * v46); /*0x10025859a*/
      goto LABEL_50; /*0x10025859d*/
    }
    v46 = v45; /*0x100258e30*/
    v105 = v127; /*0x100258e33*/
    v128 = &off_101960178; /*0x100258e41*/
LABEL_130:
    core::panicking::panic_bounds_check::h56740b1198b22635(v46, v105, v128, v43); /*0x100258e48*/
  }
  for ( i = (_QWORD *)(v42 + 104 * v46); ; i = (_QWORD *)(v42 + 104 * v46) ) /*0x10025859f*/
  {
    v48 = 2; /*0x1002585bc*/
    if ( (*(_BYTE *)i & 1) != 0 ) /*0x1002585c4*/
    {
      v136 = (char **)i[1]; /*0x1002585ca*/
      v48 = 1; /*0x1002585ce*/
    }
    v49 = i + 3; /*0x1002585d3*/
LABEL_50:
    if ( i[8] ) /*0x1002585d7*/
    {
      v51 = i[9]; /*0x1002585de*/
      v52 = i[10]; /*0x1002585e2*/
    }
    else
    {
      v46 = *((unsigned int *)i + 18); /*0x1002585e8*/
      v53 = v44; /*0x1002585eb*/
      v140 = (__int64 (__fastcall **)())v48; /*0x1002585ee*/
      v54 = i; /*0x1002585f2*/
      v51 = http::header::name::StandardHeader::as_str::h29c468d187218f48(v46, v48, v40, i, v41, v39); /*0x1002585f5*/
      i = v54; /*0x1002585fa*/
      v48 = (__int64)v140; /*0x1002585fd*/
      v44 = v53; /*0x100258601*/
    }
    if ( v52 < 0 ) /*0x100258607*/
    {
      v56 = 0; /*0x100258b46*/
      goto LABEL_106; /*0x100258b46*/
    }
    v135 = v49; /*0x10025860d*/
    v123 = i; /*0x100258611*/
    __n = v52; /*0x100258618*/
    v140 = (__int64 (__fastcall **)())v48; /*0x10025861c*/
    if ( !v52 ) /*0x100258620*/
    {
      v25 = 1; /*0x10025867e*/
      __n = 0; /*0x100258695*/
      v42 = v137; /*0x10025869d*/
      v61 = v135; /*0x1002586a1*/
      goto LABEL_59; /*0x1002586a1*/
    }
    v55 = (const void *)v51; /*0x100258622*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v48); /*0x100258625*/
    v56 = 1; /*0x10025862a*/
    v57 = __n; /*0x100258635*/
    v58 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10025863c*/
    if ( !v58 ) /*0x100258644*/
    {
      v25 = v57; /*0x100258e28*/
LABEL_106:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v56, v25); /*0x100258b49*/
    }
    v25 = (__int64)v58; /*0x10025864a*/
    memcpy(v58, v55, v57); /*0x100258656*/
    v59 = v57; /*0x10025865f*/
    if ( v57 < 8 ) /*0x100258662*/
    {
      v60 = 0; /*0x100258668*/
      v42 = v137; /*0x10025866a*/
      v44 = &v113; /*0x10025866e*/
      v61 = v135; /*0x100258675*/
      goto LABEL_85; /*0x100258679*/
    }
    v42 = v137; /*0x100258746*/
    v61 = v135; /*0x10025874a*/
    if ( v59 < 0x20 ) /*0x10025874e*/
    {
      v60 = 0; /*0x100258754*/
      v44 = &v113; /*0x100258756*/
LABEL_82:
      v79 = v60; /*0x1002588f9*/
      v60 = v59 & 0x7FFFFFFFFFFFFFF8LL; /*0x10025890a*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10025890d*/
      v81 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100258915*/
      v82 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10025891d*/
      do /*0x100258956*/
      {
        v83 = _mm_loadl_epi64((const __m128i *)(v25 + v79)); /*0x100258925*/
        v84 = _mm_add_epi8(v83, si128); /*0x100258930*/
        *(_QWORD *)(v25 + v79) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v84, v81), v84), v82), v83).u64[0]; /*0x100258948*/
        v79 += 8; /*0x10025894f*/
      }
      while ( v60 != v79 ); /*0x100258956*/
      goto LABEL_86; /*0x100258956*/
    }
    v60 = v59 & 0x7FFFFFFFFFFFFFE0LL; /*0x100258869*/
    v71 = 0; /*0x10025886c*/
    v72 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10025886e*/
    v73 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100258876*/
    v74 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10025887e*/
    do /*0x1002588e1*/
    {
      v75 = _mm_loadu_si128((const __m128i *)(v25 + v71)); /*0x100258886*/
      v76 = _mm_loadu_si128((const __m128i *)(v25 + v71 + 16)); /*0x10025888d*/
      v77 = _mm_add_epi8(v75, v72); /*0x100258898*/
      v78 = _mm_add_epi8(v76, v72); /*0x1002588a0*/
      *(__m128i *)(v25 + v71) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v77, v73), v77), v74), v75); /*0x1002588cc*/
      *(__m128i *)(v25 + v71 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v78, v73), v78), v74), v76); /*0x1002588d3*/
      v71 += 32; /*0x1002588da*/
    }
    while ( v60 != v71 ); /*0x1002588e1*/
    v44 = &v113; /*0x1002588e6*/
    if ( v59 != v60 ) /*0x1002588ed*/
    {
      if ( (v59 & 0x18) != 0 ) /*0x1002588f7*/
        goto LABEL_82; /*0x1002588f7*/
      do /*0x100258979*/
      {
LABEL_85:
        *(_BYTE *)(v25 + v60) |= 32 * ((unsigned __int8)(*(_BYTE *)(v25 + v60) - 65) < 0x1Au); /*0x10025895a*/
        ++v60; /*0x100258973*/
LABEL_86:
        ; /*0x100258976*/
      }
      while ( v59 != v60 ); /*0x100258979*/
    }
    switch ( v59 ) /*0x100258997*/
    {
      case 2uLL: /*0x100258997*/
        if ( *(_WORD *)v25 == 25972 ) /*0x1002589a0*/
          goto LABEL_75; /*0x1002589a0*/
        __n = 2; /*0x1002589ab*/
        break; /*0x1002589af*/
      case 7uLL: /*0x100258997*/
        if ( !(*(_DWORD *)v25 ^ 0x72677075 | *(_DWORD *)(v25 + 3) ^ 0x65646172) ) /*0x100258a08*/
          goto LABEL_75; /*0x100258a08*/
        __n = 7; /*0x100258a13*/
        break; /*0x100258a17*/
      case 8uLL: /*0x100258997*/
        if ( *(_QWORD *)v25 == 0x7372656C69617274LL ) /*0x100258a9f*/
          goto LABEL_75; /*0x100258a9f*/
        __n = 8; /*0x100258aaa*/
        break; /*0x100258aae*/
      case 0xAuLL: /*0x100258997*/
        if ( !(*(_QWORD *)v25 ^ 0x697463656E6E6F63LL | *(unsigned __int16 *)(v25 + 8) ^ 0x6E6FLL) /*0x100258af6*/
          || !(*(_QWORD *)v25 ^ 0x696C612D7065656BLL | *(unsigned __int16 *)(v25 + 8) ^ 0x6576LL) )
        {
          goto LABEL_75; /*0x100258af9*/
        }
        __n = 10; /*0x100258b04*/
        break; /*0x100258b08*/
      case 0xEuLL: /*0x100258997*/
        if ( !(*(_QWORD *)v25 ^ 0x2D746E65746E6F63LL | *(_QWORD *)(v25 + 6) ^ 0x6874676E656C2D74LL) ) /*0x100258b32*/
          goto LABEL_75; /*0x100258b32*/
        __n = 14; /*0x100258b3d*/
        break; /*0x100258b41*/
      case 0x11uLL: /*0x100258997*/
        v85 = _mm_or_si128( /*0x1002589d3*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v25 + 16)), (__m128i)xmmword_1015DCA40),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v25), (__m128i)xmmword_1015DCA30));
        if ( _mm_testz_si128(v85, v85) ) /*0x1002589dc*/
          goto LABEL_75; /*0x1002589dc*/
        __n = 17; /*0x1002589e7*/
        break; /*0x1002589eb*/
      case 0x12uLL: /*0x100258997*/
        v86 = _mm_or_si128( /*0x100258a3b*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v25 + 16)), *(__m128i *)"te"),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v25), *(__m128i *)"proxy-authenticate"));
        if ( _mm_testz_si128(v86, v86) ) /*0x100258a44*/
          goto LABEL_75; /*0x100258a44*/
        __n = 18; /*0x100258a4f*/
        break; /*0x100258a53*/
      case 0x13uLL: /*0x100258997*/
        v87 = _mm_or_si128( /*0x100258a74*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)(v25 + 3)),
                  *(__m128i *)"xy-authorizationproxy-authorizatproxy-authenticate"),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v25), *(__m128i *)"proxy-authorizatproxy-authenticate"));
        if ( _mm_testz_si128(v87, v87) ) /*0x100258a7d*/
          goto LABEL_75; /*0x100258a7d*/
        __n = 19; /*0x100258a88*/
        break; /*0x100258a8c*/
      default:
        break;
    }
LABEL_59:
    v62 = v61[1]; /*0x1002586a5*/
    v40 = v61[2]; /*0x1002586a9*/
    if ( v40 ) /*0x1002586b0*/
    {
      for ( j = 0; v40 != j; ++j ) /*0x1002586b2*/
      {
        v64 = *(_BYTE *)(v62 + j); /*0x1002586c7*/
        if ( v64 > 0x1Fu ) /*0x1002586ce*/
        {
          if ( v64 == 127 ) /*0x1002586b9*/
            goto LABEL_74; /*0x1002586b9*/
        }
        else if ( v64 != 9 ) /*0x1002586d3*/
        {
          goto LABEL_74; /*0x1002586d3*/
        }
      }
    }
    bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v116, v62, v40); /*0x1002586da*/
    LOBYTE(v120) = 0; /*0x1002586e6*/
    v133 = v120; /*0x1002586f4*/
    v132 = v119; /*0x1002586ff*/
    v131 = v118; /*0x10025870a*/
    v68 = v117; /*0x100258715*/
    v130 = v117; /*0x10025871c*/
    v129 = v116; /*0x100258723*/
    if ( v123[8] ) /*0x100258731*/
    {
      v69 = v123[9]; /*0x100258738*/
      v70 = v123[10]; /*0x10025873c*/
    }
    else
    {
      v69 = http::header::name::StandardHeader::as_str::h29c468d187218f48( /*0x10025876a*/
              *((unsigned int *)v123 + 18),
              v62,
              v65,
              v117,
              v66,
              v67);
    }
    http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(v125, v69, v70, v68, v66, v67); /*0x100258774*/
    if ( LOBYTE(v125[0]) ) /*0x100258780*/
    {
      (*((void (__fastcall **)(__int64 *, __int64, __int64))v129 + 4))(&v132, v130, v131); /*0x100258798*/
    }
    else
    {
      v111[3] = v125[4]; /*0x1002587ab*/
      v111[2] = v125[3]; /*0x1002587b6*/
      v111[1] = v125[2]; /*0x1002587c4*/
      v111[0] = v125[1]; /*0x1002587cb*/
      v111[8] = v133; /*0x1002587dd*/
      v111[7] = v132; /*0x1002587e5*/
      v111[6] = v131; /*0x1002587ed*/
      v111[5] = v130; /*0x1002587ff*/
      v111[4] = v129; /*0x100258803*/
      http::response::Builder::and_then::h9467106c3dd9e2be(__dst, v44, v111); /*0x100258814*/
      qmemcpy(v44, __dst, 0x70u); /*0x100258824*/
      v42 = v137; /*0x100258827*/
    }
LABEL_74:
    v59 = __n; /*0x10025882b*/
    if ( __n ) /*0x100258832*/
LABEL_75:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v59, 1); /*0x100258834*/
    v43 = v140; /*0x100258841*/
    v46 = v134; /*0x100258845*/
    v45 = (unsigned __int64)v136; /*0x100258849*/
    if ( v140 != (__int64 (__fastcall **)())2 ) /*0x100258851*/
      goto LABEL_38; /*0x100258851*/
LABEL_45:
    if ( ++v46 >= v138 ) /*0x1002585ab*/
      break; /*0x1002585ab*/
    v134 = v46; /*0x1002585b1*/
  }
  memcpy(__dst, v112, 0x88u); /*0x100258b6f*/
  v90 = reqwest::async_impl::response::Response::bytes_stream::h4afb02b64d51c5f9(__dst); /*0x100258b7c*/
  v91 = **(volatile signed __int64 ***)(a2 + 96); /*0x100258b83*/
  v92 = _InterlockedIncrement64(v91); /*0x100258b86*/
  if ( (v92 < 0) ^ v88 | (v92 == 0) /*0x100258ba8*/
    || (v140 = v89,
        v116 = v91,
        v93 = *(volatile signed __int64 **)(*(_QWORD *)(a2 + 96) + 8LL),
        v94 = _InterlockedIncrement64(v93),
        (v94 < 0) ^ v88 | (v94 == 0)) )
  {
    BUG(); /*0x100258e54*/
  }
  v129 = v93; /*0x100258bae*/
  v95 = *(_QWORD *)(a2 + 104); /*0x100258bb5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v95); /*0x100258bc0*/
  v125[0] = v91; /*0x100258bc5*/
  v111[0] = v93; /*0x100258bcc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v95); /*0x100258bd3*/
  v96 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100258be2*/
  if ( !v96 ) /*0x100258bea*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100258dfc*/
  *(_QWORD *)v96 = 1; /*0x100258bf0*/
  *(_QWORD *)(v96 + 8) = 1; /*0x100258bf7*/
  *(_BYTE *)(v96 + 16) = 0; /*0x100258bff*/
  if ( __dst[0] == 0x8000000000000000LL ) /*0x100258c1b*/
    core::option::unwrap_failed::h44626cade04bbf1e(&off_101960250); /*0x100258e1b*/
  v97 = _mm_loadu_si128((const __m128i *)&__dst[1]); /*0x100258c21*/
  __dst[3] = v96; /*0x100258c29*/
  __dst[4] = "relay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed"; /*0x100258c37*/
  __dst[5] = 32; /*0x100258c3e*/
  __dst[6] = v93; /*0x100258c49*/
  __dst[7] = v91; /*0x100258c50*/
  __dst[8] = v90; /*0x100258c57*/
  __dst[9] = v140; /*0x100258c62*/
  *(__m128i *)&__dst[1] = v97; /*0x100258c70*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100258c78*/
  v98 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 8); /*0x100258c87*/
  if ( !v98 ) /*0x100258c8f*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 80); /*0x100258e0d*/
  v99 = v98; /*0x100258c95*/
  qmemcpy(v98, __dst, 0x50u); /*0x100258ca7*/
  if ( v113 == (unsigned __int16 *)3 ) /*0x100258cb5*/
  {
    v100 = v98[8]; /*0x100258cb7*/
    v101 = v98[9]; /*0x100258cbb*/
    if ( *(_QWORD *)v101 ) /*0x100258cbf*/
      (*(void (__fastcall **)(_QWORD))v101)(v98[8]); /*0x100258ccb*/
    v102 = *(_QWORD *)(v101 + 8); /*0x100258ccd*/
    if ( v102 ) /*0x100258cd4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v102, *(_QWORD *)(v101 + 16)); /*0x100258cdd*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..record_stream_failure_on_error$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..proxy_server..sse_translate_stream..TranslatorState$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8f9919adeb0ceef4(v99); /*0x100258ce5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, 80, 8); /*0x100258cf7*/
    codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x100258d21*/
      v109,
      500,
      "build streaming body failed",
      27,
      "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
      14);
    v21 = v110; /*0x100258d26*/
  }
  else
  {
    memcpy((char *)&v109[1] + 2, (char *)v114 + 2, 0x66u); /*0x100258d4a*/
    v109[0] = v113; /*0x100258d4f*/
    LOWORD(v109[1]) = v114[0]; /*0x100258d56*/
    v109[14] = v99; /*0x100258d5e*/
    v21 = &off_1019602C8; /*0x100258d65*/
    v110 = &off_1019602C8; /*0x100258d6c*/
  }
  v103 = 0; /*0x100258d73*/
  v104 = (unsigned __int16)v124 >= 0x64u; /*0x100258d7e*/
  qmemcpy(v108, v109, sizeof(v108)); /*0x100258d95*/
  core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v121); /*0x100258d9f*/
  v20 = v126; /*0x100258da4*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 112)) ) /*0x100258daf*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 112, &v110); /*0x100258db9*/
  *(_BYTE *)(a2 + 144) = 0; /*0x100258dbe*/
  v37 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2); /*0x100258dc8*/
  LOBYTE(v103) = v104; /*0x100258dcd*/
  v18 = 2 * v103 + 3; /*0x100258dd0*/
LABEL_31:
  *v20 = v18; /*0x1002583b6*/
  qmemcpy(v20 + 1, v108, 0x78u); /*0x1002583ca*/
  v20[16] = (__int64)v21; /*0x1002583cd*/
  v20[17] = v37; /*0x1002583d4*/
  v20[18] = v38; /*0x1002583db*/
  result = 1; /*0x1002583e2*/
LABEL_32:
  *(_BYTE *)(a2 + 145) = result; /*0x1002583e4*/
  return result; /*0x1002583ea*/
}