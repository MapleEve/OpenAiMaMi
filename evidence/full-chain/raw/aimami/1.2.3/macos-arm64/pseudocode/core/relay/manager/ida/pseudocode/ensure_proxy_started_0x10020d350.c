// __ZN13codexmate_lib4core5relay7manager12RelayManager20ensure_proxy_started28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10020d350 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::_$u7b$$u7b$closure$u7d$$u7d$::hb0c82cd45f0c504f(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rbx
  volatile signed __int64 *v3; // rdx
  volatile signed __int64 *v4; // rcx
  volatile signed __int64 *v5; // rax
  unsigned int v6; // r14d
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // r13
  volatile signed __int64 *v10; // r12
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  __int64 v15; // rax
  unsigned int v16; // r15d
  int v17; // r12d
  int v18; // r14d
  unsigned int v19; // eax
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r12
  unsigned int v23; // r14d
  unsigned int v24; // r15d
  __int64 v25; // r12
  __int64 v26; // r12
  __int64 v27; // r12
  __int64 v28; // r12
  __int64 v29; // r12
  __int64 v30; // rax
  void *v31; // rax
  _QWORD *v32; // r12
  __int64 v33; // r15
  _QWORD *v34; // rdi
  __int64 v35; // rdx
  __int16 *v36; // rax
  __int64 v37; // rcx
  volatile signed __int64 *v38; // rax
  __int64 v39; // r14
  _QWORD *v40; // rdi
  __int64 v41; // rax
  volatile signed __int64 *v42; // rax
  volatile signed __int64 *v43; // r14
  volatile signed __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r13
  void *v47; // rax
  __int64 *v48; // rcx
  char v49; // r14
  __int64 result; // rax
  __int64 v51; // rcx
  __int64 v52; // rsi
  _QWORD *v53; // rax
  __int16 v54; // ax
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // eax
  _QWORD *v58; // r13
  __int64 v59; // r14
  __int64 v60; // r12
  __int64 v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // [rsp+0h] [rbp-310h]
  __int64 v65; // [rsp+8h] [rbp-308h]
  __int64 v66; // [rsp+10h] [rbp-300h]
  __int64 v67; // [rsp+18h] [rbp-2F8h]
  __int64 v68; // [rsp+20h] [rbp-2F0h]
  _QWORD v69[55]; // [rsp+28h] [rbp-2E8h] BYREF
  volatile signed __int64 *v70; // [rsp+1E0h] [rbp-130h]
  volatile signed __int64 *v71; // [rsp+1E8h] [rbp-128h]
  __int64 v72; // [rsp+1F0h] [rbp-120h]
  _QWORD *v73; // [rsp+1F8h] [rbp-118h]
  _QWORD *v74; // [rsp+200h] [rbp-110h]
  _QWORD *v75; // [rsp+208h] [rbp-108h]
  volatile signed __int64 *v76; // [rsp+210h] [rbp-100h]
  _QWORD *v77; // [rsp+218h] [rbp-F8h] BYREF
  __int64 v78; // [rsp+220h] [rbp-F0h]
  volatile signed __int64 *v79; // [rsp+228h] [rbp-E8h]
  __int64 v80; // [rsp+230h] [rbp-E0h]
  __int64 v81; // [rsp+238h] [rbp-D8h]
  __int64 v82; // [rsp+240h] [rbp-D0h]
  __int64 v83; // [rsp+248h] [rbp-C8h]
  _BYTE *v84; // [rsp+250h] [rbp-C0h]
  __int64 v85; // [rsp+258h] [rbp-B8h]
  __int64 v86; // [rsp+260h] [rbp-B0h]
  _QWORD *v87; // [rsp+268h] [rbp-A8h]
  __int64 v88; // [rsp+270h] [rbp-A0h]
  volatile signed __int64 *v89; // [rsp+278h] [rbp-98h]
  __int64 v90; // [rsp+280h] [rbp-90h]
  volatile signed __int64 *v91; // [rsp+288h] [rbp-88h] BYREF
  volatile signed __int64 *v92; // [rsp+290h] [rbp-80h] BYREF
  volatile signed __int64 *v93; // [rsp+298h] [rbp-78h] BYREF
  volatile signed __int64 *v94; // [rsp+2A0h] [rbp-70h] BYREF
  __int64 *v95; // [rsp+2A8h] [rbp-68h]
  _BYTE *v96; // [rsp+2B0h] [rbp-60h]
  _QWORD *v97; // [rsp+2B8h] [rbp-58h]
  _QWORD v98[2]; // [rsp+2C0h] [rbp-50h] BYREF
  unsigned int v99; // [rsp+2D4h] [rbp-3Ch]
  volatile signed __int64 *v100; // [rsp+2D8h] [rbp-38h]
  volatile signed __int64 *v101; // [rsp+2E0h] [rbp-30h]

  v2 = a2; /*0x10020d364*/
  v95 = a1; /*0x10020d367*/
  switch ( *(_BYTE *)(a2 + 244) ) /*0x10020d380*/
  {
    case 0: /*0x10020d380*/
      v3 = *(volatile signed __int64 **)a2; /*0x10020d382*/
      v4 = *(volatile signed __int64 **)(a2 + 8); /*0x10020d385*/
      v5 = *(volatile signed __int64 **)(a2 + 16); /*0x10020d389*/
      v6 = *(unsigned __int16 *)(a2 + 240); /*0x10020d38d*/
      v7 = *(unsigned __int16 *)(a2 + 242); /*0x10020d395*/
      v85 = a2 + 24; /*0x10020d3a1*/
      *(_QWORD *)(a2 + 24) = v3; /*0x10020d3a8*/
      *(_QWORD *)(a2 + 32) = v4; /*0x10020d3ac*/
      *(_QWORD *)(a2 + 40) = v5; /*0x10020d3b0*/
      *(_WORD *)(a2 + 224) = v6; /*0x10020d3b4*/
      *(_WORD *)(a2 + 226) = v7; /*0x10020d3bc*/
      a2 += 228; /*0x10020d3c4*/
      v84 = (_BYTE *)(v2 + 228); /*0x10020d3cb*/
      *(_BYTE *)(v2 + 228) = 0; /*0x10020d3d2*/
      break; /*0x10020d3d9*/
    case 1: /*0x10020d380*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195BF78); /*0x10020e078*/
    case 2: /*0x10020d380*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195BF78); /*0x10020e06c*/
    case 3: /*0x10020d380*/
      v84 = (_BYTE *)(a2 + 228); /*0x10020d3e2*/
      v8 = *(unsigned __int8 *)(a2 + 228); /*0x10020d3e9*/
      v85 = a2 + 24; /*0x10020d3f4*/
      switch ( v8 ) /*0x10020d409*/
      {
        case 0LL: /*0x10020d409*/
          v3 = *(volatile signed __int64 **)(a2 + 24); /*0x10020d40b*/
          v4 = *(volatile signed __int64 **)(a2 + 32); /*0x10020d40f*/
          v5 = *(volatile signed __int64 **)(a2 + 40); /*0x10020d413*/
          v6 = *(unsigned __int16 *)(a2 + 224); /*0x10020d417*/
          v7 = *(unsigned __int16 *)(a2 + 226); /*0x10020d41f*/
          break; /*0x10020d41f*/
        case 1LL: /*0x10020d409*/
          JUMPOUT(0x10020E08ELL); /*0x10020e08e*/
        case 2LL: /*0x10020d409*/
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195BF48); /*0x10020e084*/
        case 3LL: /*0x10020d409*/
          JUMPOUT(0x10020DA83LL); /*0x10020da83*/
      }
      return result;
  }
  *(_DWORD *)(v2 + 232) = 0; /*0x10020d427*/
  *(_DWORD *)(v2 + 229) = 0; /*0x10020d431*/
  *(_BYTE *)(v2 + 232) = 1; /*0x10020d43b*/
  v94 = v3; /*0x10020d442*/
  *(_BYTE *)(v2 + 231) = 1; /*0x10020d446*/
  v93 = v4; /*0x10020d44d*/
  *(_BYTE *)(v2 + 230) = 1; /*0x10020d451*/
  v92 = v5; /*0x10020d458*/
  codexmate_lib::core::relay::proxy_server::build_upstream_client::h5f1660336de15931(v69); /*0x10020d463*/
  v9 = v69[0]; /*0x10020d468*/
  v10 = (volatile signed __int64 *)v69[1]; /*0x10020d46f*/
  if ( v69[0] != 0x8000000000000000LL ) /*0x10020d483*/
  {
    v33 = v69[2]; /*0x10020da77*/
    goto LABEL_30; /*0x10020da7e*/
  }
  *(_BYTE *)(v2 + 229) = 1; /*0x10020d490*/
  v91 = v10; /*0x10020d493*/
  codexmate_lib::core::relay::proxy_server::build_upstream_direct_client::h2e1c168ed6d0eaf9(v69); /*0x10020d4a1*/
  v9 = v69[0]; /*0x10020d4a6*/
  v10 = (volatile signed __int64 *)v69[1]; /*0x10020d4ad*/
  if ( v69[0] != 0x8000000000000000LL ) /*0x10020d4c1*/
  {
    v33 = v69[2]; /*0x10020dbc7*/
    *(_BYTE *)(v2 + 235) = 0; /*0x10020dbce*/
    if ( *(_BYTE *)(v2 + 229) ) /*0x10020dbd5*/
      goto LABEL_28; /*0x10020dbdc*/
    goto LABEL_30; /*0x10020dbdc*/
  }
  LODWORD(v97) = v7; /*0x10020d4c7*/
  *(_BYTE *)(v2 + 235) = 1; /*0x10020d4cb*/
  v76 = v10; /*0x10020d4d2*/
  v101 = v94; /*0x10020d4dd*/
  v100 = v93; /*0x10020d4e5*/
  v98[0] = v92; /*0x10020d4ed*/
  *(_DWORD *)(v2 + 229) = 0; /*0x10020d4f1*/
  v69[0] = 1; /*0x10020d502*/
  v69[1] = 1; /*0x10020d50d*/
  v69[2] = 0; /*0x10020d518*/
  LOBYTE(v69[3]) = 0; /*0x10020d523*/
  v69[4] = v91; /*0x10020d52a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v69, a2); /*0x10020d531*/
  v11 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 8); /*0x10020d540*/
  if ( !v11 ) /*0x10020d548*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 40); /*0x10020e02c*/
  v11[4] = v69[4]; /*0x10020d555*/
  v11[3] = v69[3]; /*0x10020d560*/
  v11[2] = v69[2]; /*0x10020d56b*/
  v12 = v69[0]; /*0x10020d56f*/
  v11[1] = v69[1]; /*0x10020d57d*/
  *v11 = v12; /*0x10020d581*/
  v87 = v11; /*0x10020d584*/
  *(_BYTE *)(v2 + 235) = 0; /*0x10020d58b*/
  v69[0] = 1; /*0x10020d592*/
  v69[1] = 1; /*0x10020d59d*/
  v69[2] = 0; /*0x10020d5a8*/
  LOBYTE(v69[3]) = 0; /*0x10020d5b3*/
  v69[4] = v10; /*0x10020d5ba*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(40, 8); /*0x10020d5c1*/
  v13 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 8); /*0x10020d5d0*/
  if ( !v13 ) /*0x10020d5d8*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 40); /*0x10020e047*/
  v14 = v13; /*0x10020d5de*/
  v99 = v6; /*0x10020d5e1*/
  v13[4] = v69[4]; /*0x10020d5ec*/
  v13[3] = v69[3]; /*0x10020d5f7*/
  v13[2] = v69[2]; /*0x10020d602*/
  v15 = v69[0]; /*0x10020d606*/
  v14[1] = v69[1]; /*0x10020d614*/
  *v14 = v15; /*0x10020d618*/
  v77 = v14; /*0x10020d61c*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v69); /*0x10020d62a*/
  v16 = v69[0]; /*0x10020d62f*/
  v17 = (SLODWORD(v69[0]) >> 13) - 1; /*0x10020d63c*/
  v18 = 0; /*0x10020d640*/
  if ( SLODWORD(v69[0]) >> 13 <= 0 ) /*0x10020d645*/
  {
    v19 = (1 - (SLODWORD(v69[0]) >> 13)) / 0x190u + 1; /*0x10020d659*/
    v17 += 400 * v19; /*0x10020d661*/
    v18 = -146097 * v19; /*0x10020d664*/
  }
  v86 = HIDWORD(v69[0]); /*0x10020d671*/
  LODWORD(v96) = v69[1]; /*0x10020d67e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v69, 8); /*0x10020d681*/
  v20 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10020d690*/
  if ( !v20 ) /*0x10020d698*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10020e05b*/
  v21 = 1000 /*0x10020d702*/
      * (v86
       + 86400LL * (int)(((v17 / 100) >> 2) + v18 + ((v16 >> 4) & 0x1FF) - v17 / 100 + ((1461 * v17) >> 2) - 719163))
      + (unsigned int)v96 / 0xF4240uLL;
  *v20 = 1; /*0x10020d705*/
  v20[1] = 1; /*0x10020d70c*/
  v20[2] = v21; /*0x10020d714*/
  *(_BYTE *)(v2 + 234) = 1; /*0x10020d718*/
  v70 = v101; /*0x10020d723*/
  v71 = v100; /*0x10020d72e*/
  v72 = v98[0]; /*0x10020d739*/
  v73 = v87; /*0x10020d747*/
  v74 = v14; /*0x10020d74e*/
  v75 = v20; /*0x10020d755*/
  v22 = axum::routing::Router$LT$S$GT$::new::h321a10128cbb7f22(); /*0x10020d761*/
  v77 = (_QWORD *)v22; /*0x10020d764*/
  axum::routing::method_routing::get::ha9c9b8fedca9e5a4(v69); /*0x10020d772*/
  v23 = v99; /*0x10020d777*/
  v24 = (unsigned int)v97; /*0x10020d77b*/
  v25 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023(v22, &unk_1015DBA90, 16, v69, &off_10195BE40); /*0x10020d7a1*/
  v87 = (_QWORD *)v25; /*0x10020d7a4*/
  axum::routing::method_routing::post::h93609578af3a9749(v69); /*0x10020d7b2*/
  v26 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d7d9*/
          v25,
          "/:ide/v1/chat/completions/:ide/v1/responses/:ide/v1/messages/:ide/v1/models/codex/v1/responses/compact/codex/r"
          "outer/v1/responses/codex/router/v1/responses/compact/codex/router/v1/images/generations/codex/router/v1/images"
          "/edits/codex/router/v1/health",
          25,
          v69,
          &off_10195BE58);
  v98[0] = v26; /*0x10020d7dc*/
  axum::routing::method_routing::post::h94372360dd4215c1(v69); /*0x10020d7e7*/
  v27 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d80e*/
          v26,
          "/:ide/v1/responses/:ide/v1/messages/:ide/v1/models/codex/v1/responses/compact/codex/router/v1/responses/codex/router/v1/responses/compact/codex/router/v1/images/generations/codex/router/v1/images/edits/codex/router/v1/health",
          18,
          v69,
          &off_10195BE70);
  v100 = (volatile signed __int64 *)v27; /*0x10020d811*/
  axum::routing::method_routing::post::h54a9ee86b31ee989(v69); /*0x10020d81c*/
  v28 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d843*/
          v27,
          "/:ide/v1/messages/:ide/v1/models/codex/v1/responses/compact/codex/router/v1/responses/codex/router/v1/responses/compact/codex/router/v1/images/generations/codex/router/v1/images/edits/codex/router/v1/health",
          17,
          v69,
          &off_10195BE88);
  v101 = (volatile signed __int64 *)v28; /*0x10020d846*/
  axum::routing::method_routing::get::hc6f3bbebafc05487(v69); /*0x10020d851*/
  v29 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d878*/
          v28,
          "/:ide/v1/models/codex/v1/responses/compact/codex/router/v1/responses/codex/router/v1/responses/compact/codex/router/v1/images/generations/codex/router/v1/images/edits/codex/router/v1/health",
          15,
          v69,
          &off_10195BEA0);
  v83 = v29; /*0x10020d87b*/
  axum::routing::method_routing::post::h917a442c82b23f80(v69); /*0x10020d889*/
  v64 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d8b3*/
          v29,
          "/codex/v1/responses/compact/codex/router/v1/responses/codex/router/v1/responses/compact/codex/router/v1/images/generations/codex/router/v1/images/edits/codex/router/v1/health",
          27,
          v69,
          &off_10195BEB8);
  axum::routing::method_routing::post::h6269707216e5efee(v69); /*0x10020d8c1*/
  v65 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d8eb*/
          v64,
          "/codex/router/v1/responses/codex/router/v1/responses/compact/codex/router/v1/images/generations/codex/router/v1/images/edits/codex/router/v1/health",
          26,
          v69,
          &off_10195BED0);
  axum::routing::method_routing::post::h95ff7a8dfdc60461(v69); /*0x10020d8f9*/
  v66 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d923*/
          v65,
          "/codex/router/v1/responses/compact/codex/router/v1/images/generations/codex/router/v1/images/edits/codex/router/v1/health",
          34,
          v69,
          &off_10195BEE8);
  axum::routing::method_routing::post::h4e7ec1ac1934d35f(v69); /*0x10020d931*/
  v67 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d95b*/
          v66,
          "/codex/router/v1/images/generations/codex/router/v1/images/edits/codex/router/v1/health",
          35,
          v69,
          &off_10195BF00);
  axum::routing::method_routing::post::h81af4f4154918e9d(v69); /*0x10020d969*/
  v68 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d993*/
          v67,
          "/codex/router/v1/images/edits/codex/router/v1/health",
          29,
          v69,
          &off_10195BF18);
  axum::routing::method_routing::get::hd0382f7820177e37(v69); /*0x10020d9a1*/
  v30 = axum::routing::Router$LT$S$GT$::route::h62ed6d671d325023( /*0x10020d9c3*/
          v68,
          "/codex/router/v1/health",
          23,
          v69,
          &off_10195BF30);
  v31 = axum::routing::Router$LT$S$GT$::layer::h2f8ddbaa7a394f4f(v30, 1, 0x20000000); /*0x10020d9d5*/
  *(_BYTE *)(v2 + 234) = 0; /*0x10020d9da*/
  v69[5] = v75; /*0x10020d9e8*/
  v69[4] = v74; /*0x10020d9f6*/
  v69[3] = v73; /*0x10020da04*/
  v69[2] = v72; /*0x10020da12*/
  v69[1] = v71; /*0x10020da27*/
  v69[0] = v70; /*0x10020da2e*/
  *(_QWORD *)(v2 + 48) = axum::routing::Router$LT$S$GT$::with_state::h2b34de2543767f09(v31, v69); /*0x10020da44*/
  *(_BYTE *)(v2 + 233) = 1; /*0x10020da48*/
  *(_WORD *)(v2 + 218) = v23; /*0x10020da4f*/
  *(_WORD *)(v2 + 220) = v24; /*0x10020da57*/
  v96 = (_BYTE *)(v2 + 223); /*0x10020da66*/
  *(_BYTE *)(v2 + 223) = 0; /*0x10020da6a*/
  v32 = (_QWORD *)(v2 + 56); /*0x10020da71*/
  *(_BYTE *)(v2 + 222) = 1; /*0x10020dab9*/
  *(_QWORD *)(v2 + 120) = 0x8000000000000000LL; /*0x10020daca*/
  v34 = v69; /*0x10020dace*/
  codexmate_lib::core::relay::proxy_server::proxy_port_candidates::h71b8d24aafff7533(v69, v23, v24); /*0x10020dadb*/
  v35 = v69[0]; /*0x10020dae0*/
  v36 = (__int16 *)v69[1]; /*0x10020dae7*/
  v37 = v69[1] + 2LL * v69[2]; /*0x10020daf5*/
  *(_QWORD *)(v2 + 56) = v69[1]; /*0x10020daf9*/
  *(_QWORD *)(v2 + 64) = v36; /*0x10020dafd*/
  *(_QWORD *)(v2 + 72) = v35; /*0x10020db01*/
  *(_QWORD *)(v2 + 80) = v37; /*0x10020db05*/
  if ( v36 == (__int16 *)v37 ) /*0x10020db0c*/
  {
LABEL_15:
    a2 = v32[2]; /*0x10020db12*/
    if ( a2 ) /*0x10020db1a*/
    {
      v34 = (_QWORD *)*v32; /*0x10020db1c*/
      a2 *= 2; /*0x10020db20*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, a2, 2); /*0x10020db28*/
    }
    v97 = v32; /*0x10020db2d*/
    *(_BYTE *)(v2 + 222) = 0; /*0x10020db31*/
    v9 = *(_QWORD *)(v2 + 120); /*0x10020db38*/
    if ( v9 == 0x8000000000000000LL ) /*0x10020db49*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, a2); /*0x10020db4f*/
      v9 = 38; /*0x10020db54*/
      a2 = 1; /*0x10020db5f*/
      v38 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1); /*0x10020db64*/
      if ( !v38 ) /*0x10020db6c*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 38); /*0x10020e0a9*/
      v10 = v38; /*0x10020db72*/
      qmemcpy((void *)v38, "no free port available for relay proxy", 38); /*0x10020dbbb*/
      v33 = 38; /*0x10020dbbf*/
    }
    else
    {
      v10 = *(volatile signed __int64 **)(v2 + 128); /*0x10020dbe0*/
      v33 = *(_QWORD *)(v2 + 136); /*0x10020dbe7*/
    }
    *(_BYTE *)(v2 + 222) = 0; /*0x10020dbee*/
    v39 = 2; /*0x10020dbf5*/
    goto LABEL_24; /*0x10020dbf5*/
  }
  while ( 1 ) /*0x10020e833*/
  {
    *(_QWORD *)(v2 + 64) = v36 + 1; /*0x10020e833*/
    v54 = *v36; /*0x10020e837*/
    *(_WORD *)(v2 + 216) = v54; /*0x10020e83a*/
    *(_DWORD *)(v2 + 90) = 16777343; /*0x10020e841*/
    *(_WORD *)(v2 + 94) = v54; /*0x10020e848*/
    *(_WORD *)(v2 + 88) = 0; /*0x10020e84c*/
    v55 = *(_QWORD *)(v2 + 104); /*0x10020e856*/
    *(_QWORD *)(v2 + 152) = *(_QWORD *)(v2 + 96); /*0x10020e85a*/
    *(_QWORD *)(v2 + 160) = v55; /*0x10020e861*/
    *(_QWORD *)(v2 + 168) = *(_QWORD *)(v2 + 112); /*0x10020e86c*/
    *(_QWORD *)(v2 + 144) = *(_QWORD *)(v2 + 88); /*0x10020e877*/
    *(_BYTE *)(v2 + 208) = 0; /*0x10020e885*/
    *(_QWORD *)(v2 + 200) = *(_QWORD *)(v2 + 168); /*0x10020e893*/
    *(_QWORD *)(v2 + 192) = *(_QWORD *)(v2 + 160); /*0x10020e8a1*/
    v56 = *(_QWORD *)(v2 + 144); /*0x10020e8a8*/
    *(_QWORD *)(v2 + 184) = *(_QWORD *)(v2 + 152); /*0x10020e8b6*/
    *(_QWORD *)(v2 + 176) = v56; /*0x10020e8bd*/
    v57 = *(unsigned __int16 *)(v2 + 176); /*0x10020e8c4*/
    *(_WORD *)(v2 + 176) = 4; /*0x10020e8cb*/
    if ( v57 == 4 ) /*0x10020e8d7*/
      core::option::expect_failed::ha75f8bdcbd673567("`Ready` polled after completion", 31, &off_10195D220); /*0x10020e8f0*/
    if ( v57 != 2 ) /*0x10020e652*/
      break; /*0x10020e652*/
    v9 = std::io::error::Error::new::h2838dbd593bc6ec9(20, "could not resolve to any addressSunMonTueWedThuFriSat", 32); /*0x10020e734*/
LABEL_67:
    *(_BYTE *)(v2 + 208) = 1; /*0x10020e737*/
    v98[0] = v9; /*0x10020e73e*/
    v69[0] = v2 + 88; /*0x10020e746*/
    v69[1] = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::h838195b3255c29ef; /*0x10020e754*/
    v69[2] = v98; /*0x10020e75f*/
    v69[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10020e76d*/
    v34 = &v77; /*0x10020e77b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v77, &unk_1017B8994, v69); /*0x10020e789*/
    v87 = v77; /*0x10020e79c*/
    v88 = v78; /*0x10020e7a3*/
    v89 = v79; /*0x10020e7b1*/
    v52 = *(_QWORD *)(v2 + 120); /*0x10020e7bc*/
    if ( v52 != 0x8000000000000000LL && v52 ) /*0x10020e7d2*/
    {
      v34 = *(_QWORD **)(v2 + 128); /*0x10020e7d4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v52, 1); /*0x10020e7e0*/
    }
    *(_BYTE *)(v2 + 222) = 1; /*0x10020e7e5*/
    *(_QWORD *)(v2 + 136) = v89; /*0x10020e7f3*/
    v53 = v87; /*0x10020e7f7*/
    *(_QWORD *)(v2 + 128) = v88; /*0x10020e805*/
    *(_QWORD *)(v2 + 120) = v53; /*0x10020e809*/
    if ( (v98[0] & 3) == 1 ) /*0x10020e818*/
    {
      v58 = v32; /*0x10020e8fa*/
      v59 = v98[0] - 1LL; /*0x10020e8fd*/
      v60 = *(_QWORD *)(v98[0] - 1LL); /*0x10020e901*/
      v61 = *(_QWORD *)(v98[0] + 7LL); /*0x10020e905*/
      if ( *(_QWORD *)v61 ) /*0x10020e909*/
        (*(void (__fastcall **)(__int64))v61)(v60); /*0x10020e914*/
      v62 = *(_QWORD *)(v61 + 8); /*0x10020e916*/
      if ( v62 ) /*0x10020e91d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v62, *(_QWORD *)(v61 + 16)); /*0x10020e926*/
      v34 = (_QWORD *)v59; /*0x10020e935*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 24, 8); /*0x10020e938*/
      v32 = v58; /*0x10020e93d*/
      v36 = *(__int16 **)(v2 + 64); /*0x10020e940*/
      if ( v36 == *(__int16 **)(v2 + 80) ) /*0x10020e94b*/
        goto LABEL_15; /*0x10020e94b*/
    }
    else
    {
      v36 = *(__int16 **)(v2 + 64); /*0x10020e81e*/
      if ( v36 == *(__int16 **)(v2 + 80) ) /*0x10020e829*/
        goto LABEL_15; /*0x10020e829*/
    }
  }
  v9 = *(_QWORD *)(v2 + 184); /*0x10020e658*/
  if ( v57 == 3 ) /*0x10020e662*/
    goto LABEL_67; /*0x10020e662*/
  LOWORD(v77) = v57; /*0x10020e668*/
  *(_DWORD *)((char *)&v77 + 2) = *(_DWORD *)(v2 + 178); /*0x10020e675*/
  HIWORD(v77) = *(_WORD *)(v2 + 182); /*0x10020e682*/
  v78 = v9; /*0x10020e689*/
  v51 = *(_QWORD *)(v2 + 200); /*0x10020e697*/
  v79 = *(volatile signed __int64 **)(v2 + 192); /*0x10020e69e*/
  v80 = v51; /*0x10020e6a5*/
  tokio::net::tcp::listener::TcpListener::bind_addr::h3aee9901cdd51da4(v69, &v77); /*0x10020e6ba*/
  v39 = v69[0]; /*0x10020e6bf*/
  v9 = v69[1]; /*0x10020e6c6*/
  if ( v69[0] == 2 ) /*0x10020e6d1*/
    goto LABEL_67; /*0x10020e6d1*/
  v97 = v32; /*0x10020e6d3*/
  v10 = (volatile signed __int64 *)v69[2]; /*0x10020e6d7*/
  v86 = v69[3]; /*0x10020e6e5*/
  *(_BYTE *)(v2 + 208) = 1; /*0x10020e6ec*/
  if ( v39 == 3 ) /*0x10020e6f4*/
  {
    *v96 = 3; /*0x10020e6fe*/
    *v84 = 3; /*0x10020e708*/
    result = (__int64)v95; /*0x10020e70b*/
    *v95 = 2; /*0x10020e70f*/
    v49 = 3; /*0x10020e716*/
    goto LABEL_49; /*0x10020e719*/
  }
  LOWORD(v99) = *(_WORD *)(v2 + 216); /*0x10020e95d*/
  v63 = v97[2]; /*0x10020e965*/
  if ( v63 ) /*0x10020e96c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v97, 2 * v63, 2); /*0x10020e979*/
  a2 = *(_QWORD *)(v2 + 120); /*0x10020e97e*/
  v33 = v86; /*0x10020e98f*/
  if ( a2 != 0x8000000000000000LL && a2 ) /*0x10020e99b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v2 + 128), a2, 1); /*0x10020e9a9*/
  *(_BYTE *)(v2 + 222) = 0; /*0x10020e9ae*/
LABEL_24:
  *v96 = 1; /*0x10020dbfb*/
  v40 = v97; /*0x10020dc02*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..bind_proxy_listener..$u7b$$u7b$closure$u7d$$u7d$$GT$::h3d7b825236d87067(v97); /*0x10020dc06*/
  if ( v39 == 2 ) /*0x10020dc0f*/
  {
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v2 + 48)) ) /*0x10020dc19*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h130b3c1fab17572e(v2 + 48); /*0x10020dc23*/
    *(_WORD *)(v2 + 233) = 0; /*0x10020dc28*/
    *(_BYTE *)(v2 + 235) = 0; /*0x10020dc31*/
    if ( *(_BYTE *)(v2 + 229) ) /*0x10020dc38*/
    {
LABEL_28:
      if ( !_InterlockedDecrement64(v91) ) /*0x10020dc48*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(&v91, a2); /*0x10020dc55*/
    }
LABEL_30:
    *(_BYTE *)(v2 + 229) = 0; /*0x10020dc5a*/
    if ( *(_BYTE *)(v2 + 230) && !_InterlockedDecrement64(v92) ) /*0x10020dc6e*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6be3d0f96c4a6214(&v92); /*0x10020dc78*/
    *(_BYTE *)(v2 + 230) = 0; /*0x10020dc7d*/
    if ( *(_BYTE *)(v2 + 231) && !_InterlockedDecrement64(v93) ) /*0x10020dc91*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h751c7976264be74c(&v93); /*0x10020dc9b*/
    *(_BYTE *)(v2 + 231) = 0; /*0x10020dca0*/
    if ( *(_BYTE *)(v2 + 232) && !_InterlockedDecrement64(v94) ) /*0x10020dcb4*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h271a25dd80f4e2ed(&v94); /*0x10020dcbe*/
    *(_BYTE *)(v2 + 232) = 0; /*0x10020dcc3*/
    v41 = 1; /*0x10020dcca*/
  }
  else
  {
    v87 = (_QWORD *)v39; /*0x10020dcd4*/
    v88 = v9; /*0x10020dcdb*/
    v89 = v10; /*0x10020dce2*/
    v90 = v33; /*0x10020dce9*/
    v69[0] = 1; /*0x10020dcf0*/
    v69[1] = 1; /*0x10020dcfb*/
    v69[6] = 0; /*0x10020dd06*/
    LOBYTE(v69[7]) = 0; /*0x10020dd11*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, a2); /*0x10020dd18*/
    v42 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 8); /*0x10020dd27*/
    if ( !v42 ) /*0x10020dd2f*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64); /*0x10020dfe9*/
    v43 = v42; /*0x10020dd35*/
    *((_QWORD *)v42 + 7) = v69[7]; /*0x10020dd3f*/
    *((_QWORD *)v42 + 6) = v69[6]; /*0x10020dd4a*/
    *((_QWORD *)v42 + 5) = v69[5]; /*0x10020dd55*/
    *((_QWORD *)v42 + 4) = v69[4]; /*0x10020dd60*/
    *((_QWORD *)v42 + 3) = v69[3]; /*0x10020dd6b*/
    *((_QWORD *)v42 + 2) = v69[2]; /*0x10020dd76*/
    v44 = v69[0]; /*0x10020dd7a*/
    *((_QWORD *)v43 + 1) = v69[1]; /*0x10020dd88*/
    *v43 = v44; /*0x10020dd8c*/
    if ( _InterlockedIncrement64(v43) <= 0 ) /*0x10020dd93*/
      goto LABEL_60; /*0x10020dd93*/
    v83 = (__int64)v43; /*0x10020dd99*/
    v101 = v43; /*0x10020dda0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(64, 8); /*0x10020dda4*/
    v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10020ddb3*/
    v10 = (volatile signed __int64 *)v45; /*0x10020ddb8*/
    LOWORD(v33) = v99; /*0x10020ddbe*/
    if ( !v45 ) /*0x10020ddc3*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10020dffd*/
    *(_QWORD *)v45 = 1; /*0x10020ddc9*/
    *(_QWORD *)(v45 + 8) = 1; /*0x10020ddd1*/
    *(_BYTE *)(v45 + 16) = 1; /*0x10020ddda*/
    v100 = (volatile signed __int64 *)v45; /*0x10020dde0*/
    if ( _InterlockedIncrement64((volatile signed __int64 *)v45) <= 0 ) /*0x10020dde9*/
LABEL_60:
      BUG(); /*0x10020e5a3*/
    *(_BYTE *)(v2 + 233) = 0; /*0x10020ddef*/
    v69[3] = v90; /*0x10020ddfd*/
    v69[2] = v89; /*0x10020de0b*/
    v69[1] = v88; /*0x10020de20*/
    v69[0] = v87; /*0x10020de27*/
    v69[4] = *(_QWORD *)(v2 + 48); /*0x10020de32*/
    v69[6] = v43; /*0x10020de39*/
    v69[5] = v45; /*0x10020de40*/
    LOWORD(v69[9]) = v33; /*0x10020de47*/
    BYTE2(v69[9]) = 0; /*0x10020de4f*/
    v46 = tokio::task::spawn::spawn::hc80efde48ce8f708(v69, (__int64)&off_10195BF60); /*0x10020de69*/
    if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v46) ) /*0x10020de6f*/
      tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v46); /*0x10020de7b*/
    v98[0] = 1; /*0x10020de80*/
    v98[1] = v43; /*0x10020de88*/
    tokio::sync::batch_semaphore::Semaphore::new::h75e4ddfd8dfcbd5f(&v77, 1); /*0x10020de98*/
    v69[7] = v82; /*0x10020dea4*/
    v69[6] = v81; /*0x10020deb2*/
    v69[5] = v80; /*0x10020dec0*/
    v69[4] = v79; /*0x10020dece*/
    v69[3] = v78; /*0x10020dee3*/
    v69[2] = v77; /*0x10020deea*/
    v69[0] = 1; /*0x10020def1*/
    v69[1] = 1; /*0x10020defc*/
    v69[8] = 1; /*0x10020df07*/
    v69[9] = v43; /*0x10020df12*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v77, 1); /*0x10020df19*/
    v47 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 8); /*0x10020df28*/
    if ( !v47 ) /*0x10020df30*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 80); /*0x10020e011*/
    v9 = (__int64)v47; /*0x10020df36*/
    qmemcpy(v47, v69, 0x50u); /*0x10020df48*/
    v33 = (unsigned __int16)v33; /*0x10020df4b*/
    *(_WORD *)(v2 + 233) = 0; /*0x10020df4f*/
    *(_BYTE *)(v2 + 235) = 0; /*0x10020df58*/
    *(_DWORD *)(v2 + 229) = 0; /*0x10020df5f*/
    v41 = 0; /*0x10020df69*/
  }
  v48 = v95; /*0x10020df6b*/
  *v95 = v41; /*0x10020df6f*/
  v48[1] = v9; /*0x10020df72*/
  v48[2] = (__int64)v10; /*0x10020df76*/
  v48[3] = v33; /*0x10020df7a*/
  *v84 = 1; /*0x10020df85*/
  v49 = 1; /*0x10020df88*/
  result = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..start..$u7b$$u7b$closure$u7d$$u7d$$GT$::heb6bccc94c7a855d(v85); /*0x10020df92*/
LABEL_49:
  *(_BYTE *)(v2 + 244) = v49; /*0x10020df97*/
  return result; /*0x10020df9e*/
}