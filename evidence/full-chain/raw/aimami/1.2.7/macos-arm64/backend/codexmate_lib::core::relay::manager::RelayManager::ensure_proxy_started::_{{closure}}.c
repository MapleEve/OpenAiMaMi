// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::_$u7b$$u7b$closure$u7d$$u7d$::hf41093b1a3d93de5; addr: 0x1009fe240; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// B-level RelayManager::ensure_proxy_started closure: axum Router route table incl. GET /codex/router/v1/models for router-catalog-config::RT-01; range 0x1009fe240-0x1009fe9f8; sha f019dbc8e267; session <审计会话>; not gate promotion
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::_$u7b$$u7b$closure$u7d$$u7d$::hf41093b1a3d93de5(
        __int64 *a1,
        __int64 a2,
        double a3)
{
  volatile signed __int64 *v4; // rdx
  volatile signed __int64 *v5; // rcx
  volatile signed __int64 *v6; // rax
  int v7; // r15d
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // r12
  volatile signed __int64 *v11; // r14
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r14d
  int v21; // r15d
  __int64 v22; // r13
  unsigned int v23; // eax
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // r15d
  unsigned int v27; // r12d
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // r14
  __int64 v32; // r14
  __int64 v33; // r14
  __int64 v34; // r14
  __int64 v35; // r14
  __int64 v36; // r14
  __int64 v37; // r14
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 **v42; // r14
  __int64 v43; // r15
  __int64 *v44; // rdi
  __int64 v45; // r8
  __int64 v46; // rdx
  __int16 *v47; // rax
  __int64 v48; // rcx
  __int64 *v49; // rsi
  volatile signed __int64 *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rsi
  __int64 v59; // r13
  __int64 v60; // rdx
  volatile signed __int64 *v61; // rax
  __int64 v62; // rdx
  volatile signed __int64 *v63; // r12
  volatile signed __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // rdx
  void *v68; // rax
  __int64 *v69; // rcx
  char v70; // r14
  __int64 result; // rax
  __int64 v72; // rcx
  __int64 v73; // rsi
  _QWORD *v74; // rax
  __int64 v75; // r14
  __int64 v76; // r12
  __int64 v77; // rsi
  __int16 v78; // ax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  int v82; // eax
  __int64 *v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // [rsp+0h] [rbp-4A0h] BYREF
  __int64 v86; // [rsp+8h] [rbp-498h]
  volatile signed __int64 *v87; // [rsp+10h] [rbp-490h]
  __int64 v88; // [rsp+18h] [rbp-488h]
  __int64 v89; // [rsp+20h] [rbp-480h]
  __int64 v90; // [rsp+28h] [rbp-478h]
  __int64 v91; // [rsp+1B8h] [rbp-2E8h]
  __int64 v92; // [rsp+1C0h] [rbp-2E0h]
  __int64 v93; // [rsp+1C8h] [rbp-2D8h]
  __int64 v94; // [rsp+1D0h] [rbp-2D0h]
  __int64 v95; // [rsp+1D8h] [rbp-2C8h]
  __int64 v96; // [rsp+1E0h] [rbp-2C0h]
  volatile signed __int64 *v97; // [rsp+1E8h] [rbp-2B8h]
  volatile signed __int64 *v98; // [rsp+1F0h] [rbp-2B0h]
  __int64 v99; // [rsp+1F8h] [rbp-2A8h]
  _QWORD *v100; // [rsp+200h] [rbp-2A0h]
  _QWORD *v101; // [rsp+208h] [rbp-298h]
  _QWORD *v102; // [rsp+210h] [rbp-290h]
  _QWORD v103[56]; // [rsp+218h] [rbp-288h] BYREF
  __int64 *v104; // [rsp+3D8h] [rbp-C8h]
  __int64 v105; // [rsp+3E0h] [rbp-C0h]
  _BYTE *v106; // [rsp+3E8h] [rbp-B8h]
  __int64 v107; // [rsp+3F0h] [rbp-B0h]
  __int64 v108; // [rsp+3F8h] [rbp-A8h]
  _QWORD *v109; // [rsp+400h] [rbp-A0h]
  __int64 v110; // [rsp+408h] [rbp-98h]
  volatile signed __int64 *v111; // [rsp+410h] [rbp-90h]
  __int64 v112; // [rsp+418h] [rbp-88h]
  volatile signed __int64 *v113; // [rsp+420h] [rbp-80h] BYREF
  volatile signed __int64 *v114; // [rsp+428h] [rbp-78h] BYREF
  volatile signed __int64 *v115; // [rsp+430h] [rbp-70h] BYREF
  volatile signed __int64 *v116; // [rsp+438h] [rbp-68h] BYREF
  _BYTE *v117; // [rsp+440h] [rbp-60h]
  __int64 v118; // [rsp+448h] [rbp-58h]
  _QWORD v119[2]; // [rsp+450h] [rbp-50h] BYREF
  __int64 **v120; // [rsp+460h] [rbp-40h]
  volatile signed __int64 *v121; // [rsp+468h] [rbp-38h]
  volatile signed __int64 *v122; // [rsp+470h] [rbp-30h]

  v104 = a1; /*0x1009fe257*/
  switch ( *(_BYTE *)(a2 + 244) ) /*0x1009fe273*/
  {
    case 0: /*0x1009fe273*/
      v4 = *(volatile signed __int64 **)a2; /*0x1009fe275*/
      v5 = *(volatile signed __int64 **)(a2 + 8); /*0x1009fe278*/
      v6 = *(volatile signed __int64 **)(a2 + 16); /*0x1009fe27c*/
      v7 = *(unsigned __int16 *)(a2 + 240); /*0x1009fe280*/
      v8 = *(unsigned __int16 *)(a2 + 242); /*0x1009fe288*/
      v107 = a2 + 24; /*0x1009fe294*/
      *(_QWORD *)(a2 + 24) = v4; /*0x1009fe29b*/
      *(_QWORD *)(a2 + 32) = v5; /*0x1009fe29f*/
      *(_QWORD *)(a2 + 40) = v6; /*0x1009fe2a3*/
      *(_WORD *)(a2 + 224) = v7; /*0x1009fe2a7*/
      *(_WORD *)(a2 + 226) = v8; /*0x1009fe2af*/
      v106 = (_BYTE *)(a2 + 228); /*0x1009fe2be*/
      *(_BYTE *)(a2 + 228) = 0; /*0x1009fe2c5*/
      break; /*0x1009fe2cc*/
    case 1: /*0x1009fe273*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101ABAB78); /*0x1009ff0ca*/
    case 2: /*0x1009fe273*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101ABAB78); /*0x1009ff0be*/
    case 3: /*0x1009fe273*/
      v106 = (_BYTE *)(a2 + 228); /*0x1009fe2d5*/
      v9 = *(unsigned __int8 *)(a2 + 228); /*0x1009fe2dc*/
      v107 = a2 + 24; /*0x1009fe2e7*/
      switch ( v9 ) /*0x1009fe2fc*/
      {
        case 0LL: /*0x1009fe2fc*/
          v4 = *(volatile signed __int64 **)(a2 + 24); /*0x1009fe2fe*/
          v5 = *(volatile signed __int64 **)(a2 + 32); /*0x1009fe302*/
          v6 = *(volatile signed __int64 **)(a2 + 40); /*0x1009fe306*/
          v7 = *(unsigned __int16 *)(a2 + 224); /*0x1009fe30a*/
          v8 = *(unsigned __int16 *)(a2 + 226); /*0x1009fe312*/
          break; /*0x1009fe312*/
        case 1LL: /*0x1009fe2fc*/
          JUMPOUT(0x1009FF0E0LL); /*0x1009ff0e0*/
        case 2LL: /*0x1009fe2fc*/
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101ABAB20); /*0x1009ff0d6*/
        case 3LL: /*0x1009fe2fc*/
          JUMPOUT(0x1009FE9F8LL); /*0x1009fe9f8*/
      }
      return result;
  }
  *(_DWORD *)(a2 + 232) = 0; /*0x1009fe31a*/
  *(_DWORD *)(a2 + 229) = 0; /*0x1009fe324*/
  *(_BYTE *)(a2 + 232) = 1; /*0x1009fe32e*/
  v116 = v4; /*0x1009fe335*/
  *(_BYTE *)(a2 + 231) = 1; /*0x1009fe339*/
  v115 = v5; /*0x1009fe340*/
  *(_BYTE *)(a2 + 230) = 1; /*0x1009fe344*/
  v114 = v6; /*0x1009fe34b*/
  codexmate_lib::core::relay::http_client::build::ha19d0dcbd6f775d1(v103, 0, 0); /*0x1009fe35a*/
  v10 = v103[0]; /*0x1009fe35f*/
  v11 = (volatile signed __int64 *)v103[1]; /*0x1009fe366*/
  if ( v103[0] != 0x8000000000000000LL ) /*0x1009fe37a*/
  {
    v43 = v103[2]; /*0x1009fe9ec*/
    goto LABEL_30; /*0x1009fe9f3*/
  }
  *(_BYTE *)(a2 + 229) = 1; /*0x1009fe387*/
  v113 = v11; /*0x1009fe38a*/
  codexmate_lib::core::relay::http_client::build::ha19d0dcbd6f775d1(v103, 0, 1); /*0x1009fe39c*/
  v10 = v103[0]; /*0x1009fe3a1*/
  v11 = (volatile signed __int64 *)v103[1]; /*0x1009fe3a8*/
  if ( v103[0] != 0x8000000000000000LL ) /*0x1009fe3bc*/
  {
    v43 = v103[2]; /*0x1009feb34*/
    *(_BYTE *)(a2 + 235) = 0; /*0x1009feb3b*/
    if ( *(_BYTE *)(a2 + 229) ) /*0x1009feb42*/
      goto LABEL_28; /*0x1009feb49*/
    goto LABEL_30; /*0x1009feb49*/
  }
  *(_BYTE *)(a2 + 235) = 1; /*0x1009fe3c2*/
  v103[55] = v11; /*0x1009fe3c9*/
  v121 = v116; /*0x1009fe3d4*/
  v122 = v115; /*0x1009fe3dc*/
  v119[0] = v114; /*0x1009fe3e4*/
  *(_DWORD *)(a2 + 229) = 0; /*0x1009fe3e8*/
  v103[0] = 1; /*0x1009fe3f6*/
  v103[1] = 1; /*0x1009fe401*/
  v103[2] = 0; /*0x1009fe40c*/
  LOBYTE(v103[3]) = 0; /*0x1009fe417*/
  v103[4] = v113; /*0x1009fe41e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v103, 0, v12); /*0x1009fe425*/
  v13 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 8); /*0x1009fe434*/
  if ( !v13 ) /*0x1009fe43c*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 40); /*0x1009ff07e*/
  v13[4] = v103[4]; /*0x1009fe449*/
  v13[3] = v103[3]; /*0x1009fe454*/
  v13[2] = v103[2]; /*0x1009fe45f*/
  v14 = v103[0]; /*0x1009fe463*/
  v15 = v103[1]; /*0x1009fe46a*/
  v13[1] = v103[1]; /*0x1009fe471*/
  *v13 = v14; /*0x1009fe475*/
  v109 = v13; /*0x1009fe478*/
  *(_BYTE *)(a2 + 235) = 0; /*0x1009fe47f*/
  v103[0] = 1; /*0x1009fe486*/
  v103[1] = 1; /*0x1009fe491*/
  v103[2] = 0; /*0x1009fe49c*/
  LOBYTE(v103[3]) = 0; /*0x1009fe4a7*/
  v103[4] = v11; /*0x1009fe4ae*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(40, 8, v15); /*0x1009fe4b5*/
  v16 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 8); /*0x1009fe4c4*/
  if ( !v16 ) /*0x1009fe4cc*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 40); /*0x1009ff099*/
  v17 = v16; /*0x1009fe4d2*/
  LODWORD(v118) = v8; /*0x1009fe4d5*/
  LODWORD(v120) = v7; /*0x1009fe4d9*/
  v16[4] = v103[4]; /*0x1009fe4e4*/
  v16[3] = v103[3]; /*0x1009fe4f0*/
  v16[2] = v103[2]; /*0x1009fe4fc*/
  v18 = v103[0]; /*0x1009fe501*/
  v17[1] = v103[1]; /*0x1009fe50f*/
  *v17 = v18; /*0x1009fe514*/
  v85 = (__int64)v17; /*0x1009fe518*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v103); /*0x1009fe526*/
  v20 = v103[0]; /*0x1009fe52b*/
  v21 = (SLODWORD(v103[0]) >> 13) - 1; /*0x1009fe538*/
  LODWORD(v22) = 0; /*0x1009fe53c*/
  if ( SLODWORD(v103[0]) >> 13 <= 0 ) /*0x1009fe541*/
  {
    v23 = (1 - (SLODWORD(v103[0]) >> 13)) / 0x190u + 1; /*0x1009fe555*/
    v21 += 400 * v23; /*0x1009fe55d*/
    LODWORD(v22) = -146097 * v23; /*0x1009fe560*/
  }
  v96 = HIDWORD(v103[0]); /*0x1009fe56d*/
  LODWORD(v117) = v103[1]; /*0x1009fe57a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v103, 8, v19); /*0x1009fe57d*/
  v24 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1009fe58c*/
  if ( !v24 ) /*0x1009fe594*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009ff0ad*/
  v25 = 1000 /*0x1009fe5fe*/
      * (v96
       + 86400LL * (int)(((v21 / 100) >> 2) + v22 + ((v20 >> 4) & 0x1FF) - v21 / 100 + ((1461 * v21) >> 2) - 719163))
      + (unsigned int)v117 / 0xF4240uLL;
  *v24 = 1; /*0x1009fe601*/
  v24[1] = 1; /*0x1009fe608*/
  v24[2] = v25; /*0x1009fe610*/
  *(_BYTE *)(a2 + 234) = 1; /*0x1009fe614*/
  v97 = v121; /*0x1009fe61f*/
  v98 = v122; /*0x1009fe62a*/
  v99 = v119[0]; /*0x1009fe635*/
  v100 = v109; /*0x1009fe643*/
  v101 = v17; /*0x1009fe64a*/
  v102 = v24; /*0x1009fe651*/
  v85 = axum::routing::Router$LT$S$GT$::new::hf28f5245c167d1ca(24); /*0x1009fe660*/
  axum::routing::method_routing::get::h2c8a1e7a58155b0b(v103); /*0x1009fe66e*/
  v26 = (unsigned int)v120; /*0x1009fe673*/
  v27 = v118; /*0x1009fe677*/
  v28 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v85, &unk_101785BB0, 16, v103, &off_101ABAA00); /*0x1009fe69d*/
  v109 = (_QWORD *)v28; /*0x1009fe6a0*/
  axum::routing::method_routing::post::h731604cb25ea8478(v103); /*0x1009fe6ae*/
  v29 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v28, &unk_101791FAE, 25, v103, &off_101ABAA18); /*0x1009fe6d5*/
  v119[0] = v29; /*0x1009fe6d8*/
  axum::routing::method_routing::post::h816a69f37e3dfcbe(v103); /*0x1009fe6e3*/
  axum::routing::method_routing::MethodRouter$LT$S$C$E$GT$::layer::h86e0b92bceb4d17c(&v85, v103); /*0x1009fe6f6*/
  v30 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v29, &unk_101791FC7, 18, &v85, &off_101ABAA30); /*0x1009fe71d*/
  v122 = (volatile signed __int64 *)v30; /*0x1009fe720*/
  axum::routing::method_routing::post::h3543622ebca6133b(v103); /*0x1009fe72b*/
  v31 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v30, &unk_101791FD9, 17, v103, &off_101ABAA48); /*0x1009fe752*/
  v121 = (volatile signed __int64 *)v31; /*0x1009fe755*/
  axum::routing::method_routing::get::h5d016df19a329547(v103); /*0x1009fe760*/
  v32 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v31, &unk_101791FEA, 15, v103, &off_101ABAA60); /*0x1009fe787*/
  v105 = v32; /*0x1009fe78a*/
  axum::routing::method_routing::get::h98a7259e19774580(v103); /*0x1009fe798*/
  v33 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v32, &unk_101791FF9, 23, v103, &off_101ABAA78); /*0x1009fe7bf*/
  v108 = v33; /*0x1009fe7c2*/
  axum::routing::method_routing::post::h32075582b4d9dedc(v103); /*0x1009fe7d0*/
  v34 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v33, &unk_101792010, 27, v103, &off_101ABAA90); /*0x1009fe7f7*/
  v91 = v34; /*0x1009fe7fa*/
  axum::routing::method_routing::post::h6e9514f5d0999a26(v103); /*0x1009fe808*/
  axum::routing::method_routing::MethodRouter$LT$S$C$E$GT$::layer::h86e0b92bceb4d17c(&v85, v103); /*0x1009fe81b*/
  v35 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v34, &unk_10179202B, 26, &v85, &off_101ABAAA8); /*0x1009fe842*/
  v92 = v35; /*0x1009fe845*/
  axum::routing::method_routing::post::hfe7fa2d8253f3f09(v103); /*0x1009fe853*/
  axum::routing::method_routing::MethodRouter$LT$S$C$E$GT$::layer::h86e0b92bceb4d17c(&v85, v103); /*0x1009fe866*/
  v36 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v35, &unk_101792045, 34, &v85, &off_101ABAAC0); /*0x1009fe88d*/
  v93 = v36; /*0x1009fe890*/
  axum::routing::method_routing::post::h347a2c06266eb2e4(v103); /*0x1009fe89e*/
  v37 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v36, &unk_101792067, 35, v103, &off_101ABAAD8); /*0x1009fe8c5*/
  v94 = v37; /*0x1009fe8c8*/
  axum::routing::method_routing::post::h1040b35b95a5b1f0(v103); /*0x1009fe8d6*/
  v38 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v37, &unk_10179208A, 29, v103, &off_101ABAAF0); /*0x1009fe8fd*/
  v95 = v38; /*0x1009fe900*/
  axum::routing::method_routing::get::h417d48dcb88a2f48(v103); /*0x1009fe90e*/
  v39 = axum::routing::Router$LT$S$GT$::route::h340f51da0464efb4(v38, &unk_1017920A7, 23, v103, &off_101ABAB08); /*0x1009fe930*/
  v40 = axum::routing::Router$LT$S$GT$::layer::h550ec6253419c592(v39, 1, 0x20000000); /*0x1009fe942*/
  v41 = axum::routing::Router$LT$S$GT$::layer::h2a0aa26728583f25(v40); /*0x1009fe94a*/
  *(_BYTE *)(a2 + 234) = 0; /*0x1009fe94f*/
  v103[5] = v102; /*0x1009fe95d*/
  v103[4] = v101; /*0x1009fe96b*/
  v103[3] = v100; /*0x1009fe979*/
  v103[2] = v99; /*0x1009fe987*/
  v103[1] = v98; /*0x1009fe99c*/
  v103[0] = v97; /*0x1009fe9a3*/
  *(_QWORD *)(a2 + 48) = axum::routing::Router$LT$S$GT$::with_state::h21533c53f3f268c3(v41, v103); /*0x1009fe9b9*/
  *(_BYTE *)(a2 + 233) = 1; /*0x1009fe9bd*/
  *(_WORD *)(a2 + 218) = v26; /*0x1009fe9c4*/
  *(_WORD *)(a2 + 220) = v27; /*0x1009fe9cc*/
  v117 = (_BYTE *)(a2 + 223); /*0x1009fe9db*/
  *(_BYTE *)(a2 + 223) = 0; /*0x1009fe9df*/
  v42 = (__int64 **)(a2 + 56); /*0x1009fe9e6*/
  *(_BYTE *)(a2 + 222) = 1; /*0x1009fea2e*/
  *(_QWORD *)(a2 + 120) = 0x8000000000000000LL; /*0x1009fea3f*/
  v44 = v103; /*0x1009fea43*/
  codexmate_lib::core::relay::proxy_server::proxy_port_candidates::h8b6b5375f31c544c(v103, v26, v27); /*0x1009fea50*/
  v46 = v103[0]; /*0x1009fea55*/
  v47 = (__int16 *)v103[1]; /*0x1009fea5c*/
  v48 = v103[1] + 2LL * v103[2]; /*0x1009fea6a*/
  *(_QWORD *)(a2 + 56) = v103[1]; /*0x1009fea6e*/
  *(_QWORD *)(a2 + 64) = v47; /*0x1009fea72*/
  *(_QWORD *)(a2 + 72) = v46; /*0x1009fea76*/
  *(_QWORD *)(a2 + 80) = v48; /*0x1009fea7a*/
  if ( v47 == (__int16 *)v48 ) /*0x1009fea81*/
  {
LABEL_15:
    v49 = v42[2]; /*0x1009fea87*/
    if ( v49 ) /*0x1009fea8e*/
    {
      v44 = *v42; /*0x1009fea90*/
      v49 = (__int64 *)(2LL * (_QWORD)v49); /*0x1009fea93*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v49, 2); /*0x1009fea9b*/
    }
    v120 = v42; /*0x1009feaa0*/
    *(_BYTE *)(a2 + 222) = 0; /*0x1009feaa4*/
    v10 = *(_QWORD *)(a2 + 120); /*0x1009feaab*/
    if ( v10 == 0x8000000000000000LL ) /*0x1009feabc*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, v49, v46); /*0x1009feac2*/
      v10 = 38; /*0x1009feac7*/
      v50 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1); /*0x1009fead7*/
      if ( !v50 ) /*0x1009feadf*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 38); /*0x1009ff0fb*/
      v11 = v50; /*0x1009feae5*/
      qmemcpy((void *)v50, "no free port available for relay proxy", 38); /*0x1009feb2a*/
      v51 = 38; /*0x1009feb2d*/
    }
    else
    {
      v11 = *(volatile signed __int64 **)(a2 + 128); /*0x1009feb4d*/
      v51 = *(_QWORD *)(a2 + 136); /*0x1009feb54*/
    }
    v118 = v51; /*0x1009feb5b*/
    *(_BYTE *)(a2 + 222) = 0; /*0x1009feb5f*/
    v52 = 2; /*0x1009feb66*/
    goto LABEL_24; /*0x1009feb66*/
  }
  while ( 1 ) /*0x1009ff93a*/
  {
    *(_QWORD *)(a2 + 64) = v47 + 1; /*0x1009ff93a*/
    v78 = *v47; /*0x1009ff93e*/
    *(_WORD *)(a2 + 216) = v78; /*0x1009ff941*/
    *(_DWORD *)(a2 + 90) = 16777343; /*0x1009ff948*/
    *(_WORD *)(a2 + 94) = v78; /*0x1009ff94f*/
    *(_WORD *)(a2 + 88) = 0; /*0x1009ff953*/
    v79 = *(_QWORD *)(a2 + 104); /*0x1009ff95d*/
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 96); /*0x1009ff961*/
    *(_QWORD *)(a2 + 160) = v79; /*0x1009ff968*/
    *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 112); /*0x1009ff973*/
    *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 88); /*0x1009ff97e*/
    v22 = a2 + 208; /*0x1009ff985*/
    *(_BYTE *)(a2 + 208) = 0; /*0x1009ff98c*/
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(a2 + 168); /*0x1009ff99a*/
    *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 160); /*0x1009ff9a8*/
    v80 = *(_QWORD *)(a2 + 144); /*0x1009ff9af*/
    v81 = *(_QWORD *)(a2 + 152); /*0x1009ff9b6*/
    *(_QWORD *)(a2 + 184) = v81; /*0x1009ff9bd*/
    *(_QWORD *)(a2 + 176) = v80; /*0x1009ff9c4*/
    v82 = *(unsigned __int16 *)(a2 + 176); /*0x1009ff9cb*/
    *(_WORD *)(a2 + 176) = 4; /*0x1009ff9d2*/
    if ( v82 == 4 ) /*0x1009ff9de*/
      core::option::expect_failed::ha75f8bdcbd673567( /*0x1009ff9f7*/
        "`Ready` polled after completionThe shell scope `command` value is required.future polled after completion",
        31,
        &anon_25039b10cfdf58965817401c80a821a1_1229);
    v120 = v42; /*0x1009ff717*/
    if ( v82 != 2 ) /*0x1009ff71b*/
      break; /*0x1009ff71b*/
    v10 = std::io::error::Error::new::h2838dbd593bc6ec9(20, &unk_1017929FE, 32, v81, v45); /*0x1009ff7fa*/
LABEL_69:
    *(_BYTE *)(a2 + 208) = 1; /*0x1009ff7fd*/
    v119[0] = v10; /*0x1009ff804*/
    v103[0] = a2 + 88; /*0x1009ff80c*/
    v103[1] = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::h838195b3255c29ef; /*0x1009ff81a*/
    v103[2] = v119; /*0x1009ff825*/
    v103[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1009ff833*/
    v44 = &v85; /*0x1009ff841*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v85, &unk_101904C8E, v103); /*0x1009ff84f*/
    v109 = (_QWORD *)v85; /*0x1009ff862*/
    v110 = v86; /*0x1009ff869*/
    v111 = v87; /*0x1009ff877*/
    v73 = *(_QWORD *)(a2 + 120); /*0x1009ff882*/
    if ( v73 != 0x8000000000000000LL && v73 ) /*0x1009ff898*/
    {
      v44 = *(__int64 **)(a2 + 128); /*0x1009ff89a*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v73, 1); /*0x1009ff8a6*/
    }
    *(_BYTE *)(a2 + 222) = 1; /*0x1009ff8ab*/
    *(_QWORD *)(a2 + 136) = v111; /*0x1009ff8b9*/
    v74 = v109; /*0x1009ff8bd*/
    *(_QWORD *)(a2 + 128) = v110; /*0x1009ff8cb*/
    *(_QWORD *)(a2 + 120) = v74; /*0x1009ff8cf*/
    if ( (v119[0] & 3) == 1 ) /*0x1009ff8de*/
    {
      v75 = v119[0] - 1LL; /*0x1009ff8e0*/
      v76 = *(_QWORD *)(v119[0] - 1LL); /*0x1009ff8e4*/
      v22 = *(_QWORD *)(v119[0] + 7LL); /*0x1009ff8e8*/
      if ( *(_QWORD *)v22 ) /*0x1009ff8ec*/
        (*(void (__fastcall **)(__int64, double))v22)(v76, a3); /*0x1009ff8f8*/
      v77 = *(_QWORD *)(v22 + 8); /*0x1009ff8fa*/
      if ( v77 ) /*0x1009ff901*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v77, *(_QWORD *)(v22 + 16)); /*0x1009ff90a*/
      v44 = (__int64 *)v75; /*0x1009ff919*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, 24, 8); /*0x1009ff91c*/
    }
    v47 = *(__int16 **)(a2 + 64); /*0x1009ff921*/
    v42 = v120; /*0x1009ff929*/
    if ( v47 == *(__int16 **)(a2 + 80) ) /*0x1009ff930*/
      goto LABEL_15; /*0x1009ff930*/
  }
  v10 = *(_QWORD *)(a2 + 184); /*0x1009ff721*/
  if ( v82 == 3 ) /*0x1009ff72b*/
    goto LABEL_69; /*0x1009ff72b*/
  LOWORD(v85) = v82; /*0x1009ff731*/
  *(_DWORD *)((char *)&v85 + 2) = *(_DWORD *)(a2 + 178); /*0x1009ff73e*/
  HIWORD(v85) = *(_WORD *)(a2 + 182); /*0x1009ff74b*/
  v86 = v10; /*0x1009ff752*/
  v72 = *(_QWORD *)(a2 + 200); /*0x1009ff760*/
  v87 = *(volatile signed __int64 **)(a2 + 192); /*0x1009ff767*/
  v88 = v72; /*0x1009ff76e*/
  tokio::net::tcp::listener::TcpListener::bind_addr::h3aee9901cdd51da4(v103, &v85); /*0x1009ff783*/
  v52 = v103[0]; /*0x1009ff788*/
  v10 = v103[1]; /*0x1009ff78f*/
  if ( v103[0] == 2 ) /*0x1009ff79a*/
    goto LABEL_69; /*0x1009ff79a*/
  v11 = (volatile signed __int64 *)v103[2]; /*0x1009ff79c*/
  v118 = v103[3]; /*0x1009ff7aa*/
  *(_BYTE *)v22 = 1; /*0x1009ff7ae*/
  if ( v52 == 3 ) /*0x1009ff7b7*/
  {
    *v117 = 3; /*0x1009ff7c1*/
    *v106 = 3; /*0x1009ff7cb*/
    result = (__int64)v104; /*0x1009ff7ce*/
    *v104 = 2; /*0x1009ff7d5*/
    v70 = 3; /*0x1009ff7dc*/
    goto LABEL_50; /*0x1009ff7df*/
  }
  LODWORD(v22) = *(unsigned __int16 *)(a2 + 216); /*0x1009ffa01*/
  v83 = v120[2]; /*0x1009ffa0d*/
  if ( v83 ) /*0x1009ffa14*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v120, 2LL * (_QWORD)v83, 2); /*0x1009ffa21*/
  v84 = *(_QWORD *)(a2 + 120); /*0x1009ffa26*/
  if ( v84 != 0x8000000000000000LL && v84 ) /*0x1009ffa3c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 128), v84, 1); /*0x1009ffa4a*/
  *(_BYTE *)(a2 + 222) = 0; /*0x1009ffa4f*/
LABEL_24:
  *v117 = 1; /*0x1009feb6c*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..bind_proxy_listener..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1db6cad0405fb357(v120); /*0x1009feb77*/
  if ( v52 == 2 ) /*0x1009feb80*/
  {
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 48)) ) /*0x1009feb8a*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h130b3c1fab17572e(a2 + 48); /*0x1009feb94*/
    *(_WORD *)(a2 + 233) = 0; /*0x1009feb99*/
    v43 = v118; /*0x1009feba2*/
    *(_BYTE *)(a2 + 235) = 0; /*0x1009feba6*/
    if ( *(_BYTE *)(a2 + 229) ) /*0x1009febad*/
    {
LABEL_28:
      if ( !_InterlockedDecrement64(v113) ) /*0x1009febba*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(&v113); /*0x1009febc4*/
    }
LABEL_30:
    *(_BYTE *)(a2 + 229) = 0; /*0x1009febc9*/
    if ( *(_BYTE *)(a2 + 230) && !_InterlockedDecrement64(v114) ) /*0x1009febdd*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h43ca3acf4b7becc9(&v114); /*0x1009febe7*/
    *(_BYTE *)(a2 + 230) = 0; /*0x1009febec*/
    if ( *(_BYTE *)(a2 + 231) && !_InterlockedDecrement64(v115) ) /*0x1009fec00*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe18873d810502fc(&v115); /*0x1009fec0a*/
    *(_BYTE *)(a2 + 231) = 0; /*0x1009fec0f*/
    if ( *(_BYTE *)(a2 + 232) && !_InterlockedDecrement64(v116) ) /*0x1009fec23*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h14f2e892ce4ee5d3(&v116); /*0x1009fec2d*/
    *(_BYTE *)(a2 + 232) = 0; /*0x1009fec32*/
    v53 = 1; /*0x1009fec39*/
  }
  else
  {
    v109 = (_QWORD *)v52; /*0x1009fec43*/
    v110 = v10; /*0x1009fec4a*/
    v111 = v11; /*0x1009fec51*/
    v112 = v118; /*0x1009fec5c*/
    *(_BYTE *)(a2 + 233) = 0; /*0x1009fec63*/
    v54 = *(_QWORD *)(a2 + 48); /*0x1009fec6a*/
    v85 = v54; /*0x1009fec6e*/
    tokio::sync::semaphore::Semaphore::new::hfefa93c45a3f5d4c(&v103[2], 32, &anon_90096945ae5392e7faa4fe68e375fd44_394); /*0x1009fec88*/
    v103[0] = 1; /*0x1009fec8d*/
    v103[1] = 1; /*0x1009fec98*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v103[2], 32, v55); /*0x1009feca3*/
    v56 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 8); /*0x1009fecb2*/
    if ( !v56 ) /*0x1009fecba*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64); /*0x1009ff027*/
    LOWORD(v43) = v22; /*0x1009fecc0*/
    v56[7] = v103[7]; /*0x1009fecca*/
    v56[6] = v103[6]; /*0x1009fecd5*/
    v56[5] = v103[5]; /*0x1009fece0*/
    v56[4] = v103[4]; /*0x1009feceb*/
    v56[3] = v103[3]; /*0x1009fecf6*/
    v56[2] = v103[2]; /*0x1009fed01*/
    v57 = v103[0]; /*0x1009fed05*/
    v56[1] = v103[1]; /*0x1009fed13*/
    *v56 = v57; /*0x1009fed17*/
    v58 = v56; /*0x1009fed1d*/
    v59 = axum::routing::Router$LT$S$GT$::layer::hccf5acd9e02999ae(v54, v56, (unsigned int)v22); /*0x1009fed28*/
    v108 = v59; /*0x1009fed2b*/
    v103[0] = 1; /*0x1009fed32*/
    v103[1] = 1; /*0x1009fed3d*/
    v103[6] = 0; /*0x1009fed48*/
    LOBYTE(v103[7]) = 0; /*0x1009fed53*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v58, v60); /*0x1009fed5a*/
    v61 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 8); /*0x1009fed69*/
    if ( !v61 ) /*0x1009fed71*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64); /*0x1009ff03b*/
    v63 = v61; /*0x1009fed77*/
    *((_QWORD *)v61 + 7) = v103[7]; /*0x1009fed81*/
    *((_QWORD *)v61 + 6) = v103[6]; /*0x1009fed8d*/
    *((_QWORD *)v61 + 5) = v103[5]; /*0x1009fed99*/
    *((_QWORD *)v61 + 4) = v103[4]; /*0x1009feda5*/
    *((_QWORD *)v61 + 3) = v103[3]; /*0x1009fedb1*/
    *((_QWORD *)v61 + 2) = v103[2]; /*0x1009fedbd*/
    v64 = v103[0]; /*0x1009fedc2*/
    *((_QWORD *)v63 + 1) = v103[1]; /*0x1009fedd0*/
    *v63 = v64; /*0x1009fedd5*/
    if ( _InterlockedIncrement64(v63) <= 0 ) /*0x1009fedde*/
      goto LABEL_62; /*0x1009fedde*/
    v105 = (__int64)v63; /*0x1009fede4*/
    v121 = v63; /*0x1009fedeb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(64, 8, v62); /*0x1009fedef*/
    v65 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1009fedfe*/
    if ( !v65 ) /*0x1009fee09*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009ff04f*/
    *(_QWORD *)v65 = 1; /*0x1009fee0f*/
    *(_QWORD *)(v65 + 8) = 1; /*0x1009fee16*/
    *(_BYTE *)(v65 + 16) = 1; /*0x1009fee1e*/
    v122 = (volatile signed __int64 *)v65; /*0x1009fee23*/
    if ( _InterlockedIncrement64((volatile signed __int64 *)v65) <= 0 ) /*0x1009fee2b*/
LABEL_62:
      BUG(); /*0x1009ff669*/
    v103[3] = v112; /*0x1009fee38*/
    v103[2] = v111; /*0x1009fee46*/
    v103[1] = v110; /*0x1009fee5b*/
    v103[0] = v109; /*0x1009fee62*/
    v103[4] = v59; /*0x1009fee69*/
    v103[6] = v63; /*0x1009fee70*/
    v103[5] = v65; /*0x1009fee77*/
    LOWORD(v103[9]) = v43; /*0x1009fee7e*/
    BYTE2(v103[9]) = 0; /*0x1009fee86*/
    v66 = tokio::task::spawn::spawn::hce6dc8efc4c899d1(v103, &off_101ABAB38); /*0x1009feea0*/
    if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v66) ) /*0x1009feea6*/
      tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v66); /*0x1009feeb2*/
    v119[0] = 1; /*0x1009feeb7*/
    v119[1] = v63; /*0x1009feebf*/
    tokio::sync::batch_semaphore::Semaphore::new::h75e4ddfd8dfcbd5f(&v85, 1); /*0x1009feecf*/
    v103[7] = v90; /*0x1009feedb*/
    v103[6] = v89; /*0x1009feee9*/
    v103[5] = v88; /*0x1009feef7*/
    v103[4] = v87; /*0x1009fef05*/
    v103[3] = v86; /*0x1009fef1a*/
    v103[2] = v85; /*0x1009fef21*/
    v103[0] = 1; /*0x1009fef28*/
    v103[1] = 1; /*0x1009fef33*/
    v103[8] = 1; /*0x1009fef3e*/
    v103[9] = v63; /*0x1009fef49*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v85, 1, v67); /*0x1009fef50*/
    v68 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 8); /*0x1009fef5f*/
    if ( !v68 ) /*0x1009fef67*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 80); /*0x1009ff063*/
    v10 = (__int64)v68; /*0x1009fef6d*/
    qmemcpy(v68, v103, 0x50u); /*0x1009fef7f*/
    v11 = v122; /*0x1009fef82*/
    v43 = (unsigned __int16)v43; /*0x1009fef86*/
    *(_WORD *)(a2 + 233) = 0; /*0x1009fef8a*/
    *(_BYTE *)(a2 + 235) = 0; /*0x1009fef93*/
    *(_DWORD *)(a2 + 229) = 0; /*0x1009fef9a*/
    v53 = 0; /*0x1009fefa4*/
  }
  v69 = v104; /*0x1009fefa6*/
  *v104 = v53; /*0x1009fefad*/
  v69[1] = v10; /*0x1009fefb0*/
  v69[2] = (__int64)v11; /*0x1009fefb4*/
  v69[3] = v43; /*0x1009fefb8*/
  *v106 = 1; /*0x1009fefc3*/
  v70 = 1; /*0x1009fefc6*/
  result = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..start..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc80a10bf110cefe3(v107); /*0x1009fefd0*/
LABEL_50:
  *(_BYTE *)(a2 + 244) = v70; /*0x1009fefd5*/
  return result; /*0x1009fefdc*/
}
