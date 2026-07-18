// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x1003ec4d0 d=0
unsigned __int64 __fastcall codexmate_lib::core::debug_bundle::auth_shape::hf9497251f4c1d3de(__int64 a1, __int64 a2)
{
  size_t v3; // r12
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // r14
  size_t v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  size_t v11; // rbx
  _QWORD *v12; // rax
  char v13; // al
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r13
  const void *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 result; // rax
  void *v22; // rax
  void *v23; // rax
  void *v24; // rax
  char v25; // al
  void *v26; // rax
  char v27; // al
  void *v28; // rax
  char v29; // bl
  __int64 v30; // rax
  void *v31; // rax
  __int64 v32; // r15
  void *v33; // rax
  __int64 v34; // r13
  void *v35; // rax
  __int64 v36; // r14
  void *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD __src[22]; // [rsp+8h] [rbp-378h] BYREF
  _QWORD v42[3]; // [rsp+B8h] [rbp-2C8h] BYREF
  _QWORD __dst[22]; // [rsp+D0h] [rbp-2B0h] BYREF
  _QWORD v44[22]; // [rsp+180h] [rbp-200h] BYREF
  size_t v45; // [rsp+230h] [rbp-150h]
  unsigned __int64 v46; // [rsp+238h] [rbp-148h]
  __int64 v47[22]; // [rsp+240h] [rbp-140h] BYREF
  unsigned __int64 v48; // [rsp+2F0h] [rbp-90h]
  __int64 v49; // [rsp+2F8h] [rbp-88h]
  const void *v50; // [rsp+300h] [rbp-80h]
  _QWORD v51[2]; // [rsp+308h] [rbp-78h] BYREF
  __int64 v52; // [rsp+318h] [rbp-68h]
  __int64 v53; // [rsp+320h] [rbp-60h] BYREF
  __int64 v54; // [rsp+328h] [rbp-58h]
  __int64 v55; // [rsp+330h] [rbp-50h]
  void *v56; // [rsp+338h] [rbp-48h]
  __int64 v57; // [rsp+340h] [rbp-40h] BYREF
  _QWORD *v58; // [rsp+348h] [rbp-38h]
  __int64 v59; // [rsp+350h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 40); /*0x1003ec4f8*/
  v56 = *(void **)(a2 + 32); /*0x1003ec503*/
  codexmate_lib::core::auth::load_auth_file::hc0773b331a626706(__src, v56, v3); /*0x1003ec50a*/
  if ( __src[0] != 0x8000000000000001LL ) /*0x1003ec51a*/
  {
    v46 = 0x8000000000000001LL; /*0x1003ec6cd*/
    v45 = v3; /*0x1003ec6d4*/
    v49 = a1; /*0x1003ec6db*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1003ec6f5*/
    v51[0] = 0; /*0x1003ec6fa*/
    v52 = 0; /*0x1003ec702*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ec70a*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003ec71e*/
    if ( !v10 ) /*0x1003ec726*/
      goto LABEL_91; /*0x1003ec726*/
    *(_WORD *)(v10 + 4) = 29556; /*0x1003ec72c*/
    *(_DWORD *)v10 = 1936291941; /*0x1003ec732*/
    v57 = 6; /*0x1003ec738*/
    v58 = (_QWORD *)v10; /*0x1003ec740*/
    v59 = 6; /*0x1003ec744*/
    LOWORD(v47[0]) = 257; /*0x1003ec74c*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(v44, v51, &v57, v47); /*0x1003ec76b*/
    if ( LOBYTE(v44[0]) != 6 ) /*0x1003ec777*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ec780*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ec785*/
    v11 = 8; /*0x1003ec78a*/
    v12 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1003ec799*/
    if ( !v12 ) /*0x1003ec7a1*/
      goto LABEL_91; /*0x1003ec7a1*/
    *v12 = 0x65646F4D68747561LL; /*0x1003ec7b4*/
    v57 = 8; /*0x1003ec7b7*/
    v58 = v12; /*0x1003ec7bf*/
    v59 = 8; /*0x1003ec7c3*/
    if ( __dst[0] == 0x8000000000000000LL ) /*0x1003ec7df*/
    {
      v48 = 0x8000000000000000LL; /*0x1003ec7e1*/
      v13 = 0; /*0x1003ec7e8*/
      goto LABEL_33; /*0x1003ec7ea*/
    }
    v11 = __dst[2]; /*0x1003ec7ef*/
    if ( __dst[2] < 0LL ) /*0x1003ec7f9*/
    {
      v14 = 0; /*0x1003ec7fb*/
      goto LABEL_18; /*0x1003ec7fb*/
    }
    v48 = __dst[0]; /*0x1003ec83d*/
    v17 = (const void *)__dst[1]; /*0x1003ec844*/
    if ( __dst[2] ) /*0x1003ec84b*/
    {
      v50 = (const void *)__dst[1]; /*0x1003ec851*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ec855*/
      v14 = 1; /*0x1003ec85a*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1u); /*0x1003ec868*/
      if ( !v18 ) /*0x1003ec870*/
LABEL_18:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14); /*0x1003ec7fe*/
      v3 = v18; /*0x1003ec872*/
      v17 = v50; /*0x1003ec875*/
    }
    else
    {
      v3 = 1; /*0x1003ec928*/
    }
    memcpy((void *)v3, v17, v11); /*0x1003ec934*/
    v13 = 3; /*0x1003ec939*/
LABEL_33:
    LOBYTE(v47[0]) = v13; /*0x1003ec93b*/
    v47[1] = v11; /*0x1003ec941*/
    v47[2] = v3; /*0x1003ec948*/
    v47[3] = v11; /*0x1003ec94f*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(v44, v51, &v57, v47); /*0x1003ec96c*/
    if ( LOBYTE(v44[0]) != 6 ) /*0x1003ec978*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ec981*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ec986*/
    v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1003ec99a*/
    if ( v22 ) /*0x1003ec9a2*/
    {
      qmemcpy(v22, "hasOpenAiApiKey", 15); /*0x1003ec9c0*/
      v57 = 15; /*0x1003ec9c3*/
      v58 = v22; /*0x1003ec9cb*/
      v59 = 15; /*0x1003ec9cf*/
      v50 = (const void *)__dst[3]; /*0x1003ec9e8*/
      LOBYTE(v47[0]) = 1; /*0x1003ec9ff*/
      BYTE1(v47[0]) = __dst[3] != 0x8000000000000000LL && __dst[5] != 0; /*0x1003eca06*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(v44, v51, &v57, v47); /*0x1003eca22*/
      if ( LOBYTE(v44[0]) != 6 ) /*0x1003eca2e*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003eca37*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003eca3c*/
      v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1003eca50*/
      if ( v23 ) /*0x1003eca58*/
      {
        qmemcpy(v23, "isRouterUnlockAuth", 18); /*0x1003eca76*/
        v57 = 18; /*0x1003eca7f*/
        v58 = v23; /*0x1003eca87*/
        v59 = 18; /*0x1003eca8b*/
        LOBYTE(v47[0]) = 1; /*0x1003eca9a*/
        BYTE1(v47[0]) = __dst[21]; /*0x1003ecaa1*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(v44, v51, &v57, v47); /*0x1003ecabd*/
        if ( LOBYTE(v44[0]) != 6 ) /*0x1003ecac9*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ecad2*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ecad7*/
        v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1003ecae6*/
        if ( v24 ) /*0x1003ecaee*/
        {
          qmemcpy(v24, "routerUnlockActive", 18); /*0x1003ecb0f*/
          v57 = 18; /*0x1003ecb19*/
          v58 = v24; /*0x1003ecb21*/
          v59 = 18; /*0x1003ecb25*/
          v25 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h4dfb964e4d7ca71f(a2); /*0x1003ecb30*/
          LOBYTE(v47[0]) = 1; /*0x1003ecb37*/
          BYTE1(v47[0]) = v25 == 1; /*0x1003ecb3e*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(v44, v51, &v57, v47); /*0x1003ecb5b*/
          if ( LOBYTE(v44[0]) != 6 ) /*0x1003ecb67*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ecb70*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ecb75*/
          v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 1u); /*0x1003ecb89*/
          if ( v26 ) /*0x1003ecb91*/
          {
            qmemcpy(v26, "routerUnlockMarkerExists", 24); /*0x1003ecbb6*/
            v57 = 24; /*0x1003ecbb9*/
            v58 = v26; /*0x1003ecbc1*/
            v59 = 24; /*0x1003ecbc5*/
            v27 = codexmate_lib::core::relay::router_unlock_auth::marker_exists::hdbfa996e1ae88533(a2); /*0x1003ecbd0*/
            LOBYTE(v47[0]) = 1; /*0x1003ecbd5*/
            BYTE1(v47[0]) = v27; /*0x1003ecbdc*/
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(v44, v51, &v57, v47); /*0x1003ecbf8*/
            if ( LOBYTE(v44[0]) != 6 ) /*0x1003ecc04*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ecc0d*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ecc12*/
            v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x17u, 1u); /*0x1003ecc26*/
            if ( v28 ) /*0x1003ecc2e*/
            {
              qmemcpy(v28, "hasUsableRealOauthLogin", 23); /*0x1003ecc5d*/
              v57 = 23; /*0x1003ecc60*/
              v58 = v28; /*0x1003ecc68*/
              v59 = 23; /*0x1003ecc6c*/
              codexmate_lib::core::auth::load_auth_file::hc0773b331a626706(v47, v56, v45); /*0x1003ecc86*/
              if ( v47[0] == v46 ) /*0x1003ecc99*/
              {
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(&v47[1]); /*0x1003ecca2*/
                v29 = 0; /*0x1003ecca7*/
              }
              else
              {
                memcpy(v44, v47, sizeof(v44)); /*0x1003eccc1*/
                v29 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h30033325e6399d11(v44); /*0x1003eccce*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h2d413a1c8462ab70(v44); /*0x1003eccd7*/
              }
              LOBYTE(v47[0]) = 1; /*0x1003eccdc*/
              BYTE1(v47[0]) = v29; /*0x1003ecce3*/
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(v44, v51, &v57, v47); /*0x1003eccff*/
              if ( LOBYTE(v44[0]) != 6 ) /*0x1003ecd0b*/
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ecd14*/
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ecd19*/
              v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003ecd2d*/
              if ( v30 ) /*0x1003ecd35*/
              {
                *(_WORD *)(v30 + 4) = 29550; /*0x1003ecd3e*/
                *(_DWORD *)v30 = 1701539700; /*0x1003ecd44*/
                v42[0] = 6; /*0x1003ecd4a*/
                v42[1] = v30; /*0x1003ecd55*/
                v42[2] = 6; /*0x1003ecd5c*/
                v53 = 0; /*0x1003ecd67*/
                v55 = 0; /*0x1003ecd6f*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ecd77*/
                v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x1003ecd8b*/
                if ( !v31 ) /*0x1003ecd93*/
                  goto LABEL_92; /*0x1003ecd93*/
                qmemcpy(v31, "hasIdToken", 10); /*0x1003ecda3*/
                v57 = 10; /*0x1003ecdac*/
                v58 = v31; /*0x1003ecdb4*/
                v59 = 10; /*0x1003ecdb8*/
                v32 = __dst[6]; /*0x1003ecdc0*/
                LOBYTE(v47[0]) = 1; /*0x1003ecde4*/
                BYTE1(v47[0]) = __dst[6] != 0x8000000000000000LL && __dst[8] != 0; /*0x1003ecdeb*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ece07*/
                  v44,
                  &v53,
                  &v57,
                  v47);
                if ( LOBYTE(v44[0]) != 6 ) /*0x1003ece13*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ece1c*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ece21*/
                v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xEu, 1u); /*0x1003ece35*/
                if ( !v33 ) /*0x1003ece3d*/
                  goto LABEL_92; /*0x1003ece3d*/
                qmemcpy(v33, "hasAccessToken", 14); /*0x1003ece5b*/
                v57 = 14; /*0x1003ece5e*/
                v58 = v33; /*0x1003ece66*/
                v59 = 14; /*0x1003ece6a*/
                v34 = __dst[9]; /*0x1003ece72*/
                LOBYTE(v47[0]) = 1; /*0x1003ece96*/
                BYTE1(v47[0]) = __dst[9] != 0x8000000000000000LL && __dst[11] != 0; /*0x1003ece9d*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003eceb9*/
                  v44,
                  &v53,
                  &v57,
                  v47);
                if ( LOBYTE(v44[0]) != 6 ) /*0x1003ecec5*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ecece*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003eced3*/
                v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1003ecee7*/
                if ( !v35 ) /*0x1003eceef*/
                  goto LABEL_92; /*0x1003eceef*/
                qmemcpy(v35, "hasRefreshToken", 15); /*0x1003ecf0d*/
                v57 = 15; /*0x1003ecf10*/
                v58 = v35; /*0x1003ecf18*/
                v59 = 15; /*0x1003ecf1c*/
                v36 = __dst[12]; /*0x1003ecf24*/
                LOBYTE(v47[0]) = 1; /*0x1003ecf48*/
                BYTE1(v47[0]) = __dst[12] != 0x8000000000000000LL && __dst[14] != 0; /*0x1003ecf4f*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ecf6b*/
                  v44,
                  &v53,
                  &v57,
                  v47);
                if ( LOBYTE(v44[0]) != 6 ) /*0x1003ecf77*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ecf80*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ecf85*/
                v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1003ecf99*/
                if ( !v37 ) /*0x1003ecfa1*/
LABEL_92:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003ed21f*/
                qmemcpy(v37, "hasAccountId", 12); /*0x1003ecfb1*/
                v57 = 12; /*0x1003ecfbb*/
                v58 = v37; /*0x1003ecfc3*/
                v59 = 12; /*0x1003ecfc7*/
                v38 = __dst[15]; /*0x1003ecfcf*/
                LOBYTE(v47[0]) = 1; /*0x1003ecff3*/
                BYTE1(v47[0]) = __dst[15] != 0x8000000000000000LL && __dst[17] != 0; /*0x1003ecffa*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ed016*/
                  v44,
                  &v53,
                  &v57,
                  v47);
                if ( LOBYTE(v44[0]) != 6 ) /*0x1003ed022*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ed02b*/
                v47[1] = v53; /*0x1003ed038*/
                v47[2] = v54; /*0x1003ed03f*/
                v47[3] = v55; /*0x1003ed04a*/
                LOBYTE(v47[0]) = 5; /*0x1003ed051*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(v44, v51, v42, v47); /*0x1003ed071*/
                if ( LOBYTE(v44[0]) != 6 ) /*0x1003ed07d*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v44); /*0x1003ed086*/
                v39 = v49; /*0x1003ed08f*/
                *(_QWORD *)(v49 + 24) = v52; /*0x1003ed096*/
                v40 = v51[0]; /*0x1003ed09a*/
                *(_QWORD *)(v39 + 16) = v51[1]; /*0x1003ed0a2*/
                *(_QWORD *)(v39 + 8) = v40; /*0x1003ed0a6*/
                *(_BYTE *)v39 = 5; /*0x1003ed0aa*/
                if ( v48 != 0x8000000000000000LL && v48 ) /*0x1003ed0c6*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed0d4*/
                if ( v50 != (const void *)0x8000000000000000LL && v50 ) /*0x1003ed0ef*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed0fd*/
                if ( v32 != 0x8000000000000000LL && v32 ) /*0x1003ed114*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed125*/
                if ( v34 != 0x8000000000000000LL && v34 ) /*0x1003ed13c*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed14d*/
                if ( v36 != 0x8000000000000000LL && v36 ) /*0x1003ed164*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed175*/
                if ( v38 != 0x8000000000000000LL && v38 ) /*0x1003ed18c*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed19d*/
                result = 0x8000000000000000LL; /*0x1003ed1a9*/
                if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x1003ed1bb*/
                  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed1c9*/
                return result; /*0x1003ed1c9*/
              }
            }
          }
        }
      }
    }
LABEL_91:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003ed208*/
  }
  qmemcpy(v44, &__src[1], 0x60u); /*0x1003ec533*/
  v53 = 0; /*0x1003ec536*/
  v55 = 0; /*0x1003ec53e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ec546*/
  v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003ec55b*/
  if ( !v4 ) /*0x1003ec563*/
    goto LABEL_93; /*0x1003ec563*/
  *(_WORD *)(v4 + 4) = 29556; /*0x1003ec56c*/
  *(_DWORD *)v4 = 1936291941; /*0x1003ec572*/
  v57 = 6; /*0x1003ec578*/
  v58 = (_QWORD *)v4; /*0x1003ec580*/
  v59 = 6; /*0x1003ec584*/
  std::sys::fs::metadata::h32fa16d3052ea535(v47, v56, v3); /*0x1003ec59a*/
  v5 = v47[0]; /*0x1003ec59f*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x1003ec5b0*/
    v47[0],
    v47[1]);
  LOBYTE(v47[0]) = 1; /*0x1003ec5b8*/
  BYTE1(v47[0]) = v5 ^ 1; /*0x1003ec5bf*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(__dst, &v53, &v57, v47); /*0x1003ec5de*/
  if ( LOBYTE(__dst[0]) != 6 ) /*0x1003ec5ea*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(__dst); /*0x1003ec5f3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ec5f8*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1003ec60d*/
  if ( !v6 ) /*0x1003ec615*/
LABEL_93:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003ed22e*/
  *(_BYTE *)(v6 + 4) = 114; /*0x1003ec61e*/
  *(_DWORD *)v6 = 1869771365; /*0x1003ec622*/
  v57 = 5; /*0x1003ec628*/
  v58 = (_QWORD *)v6; /*0x1003ec630*/
  v59 = 5; /*0x1003ec634*/
  __dst[0] = 0; /*0x1003ec63c*/
  __dst[1] = 1; /*0x1003ec647*/
  __dst[2] = 0; /*0x1003ec652*/
  v47[2] = 1610612768; /*0x1003ec65d*/
  v47[0] = (__int64)__dst; /*0x1003ec668*/
  v47[1] = (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_986; /*0x1003ec676*/
  if ( _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1(v44, v47) ) /*0x1003ec68b*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ed201*/
      (__int64)"a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Re"
               "sult::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept"
               "-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-me"
               "thodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request"
               "-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dis"
               "positioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinc"
               "eif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onl"
               "yrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-w"
               "ebsocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-re"
               "questsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      55,
      (__int64)v42,
      (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_1005,
      (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_989);
  v7 = __dst[0]; /*0x1003ec698*/
  v56 = (void *)__dst[1]; /*0x1003ec6a6*/
  v8 = __dst[2]; /*0x1003ec6aa*/
  if ( __dst[2] < 0LL ) /*0x1003ec6b4*/
  {
    v9 = 0; /*0x1003ec6ba*/
    goto LABEL_9; /*0x1003ec6ba*/
  }
  v49 = a1; /*0x1003ec80e*/
  if ( __dst[2] ) /*0x1003ec815*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ec817*/
    v9 = 1; /*0x1003ec81c*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1u); /*0x1003ec82a*/
    if ( !v15 ) /*0x1003ec832*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9); /*0x1003ec6bd*/
    v16 = v15; /*0x1003ec838*/
  }
  else
  {
    v16 = 1; /*0x1003ec87e*/
  }
  memcpy((void *)v16, v56, v8); /*0x1003ec88e*/
  LOBYTE(v47[0]) = 3; /*0x1003ec893*/
  v47[1] = v8; /*0x1003ec89a*/
  v47[2] = v16; /*0x1003ec8a1*/
  v47[3] = v8; /*0x1003ec8a8*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(__dst, &v53, &v57, v47); /*0x1003ec8c5*/
  v19 = v49; /*0x1003ec8d1*/
  if ( LOBYTE(__dst[0]) != 6 ) /*0x1003ec8d8*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(__dst); /*0x1003ec8e1*/
  if ( v7 ) /*0x1003ec8e9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ec8f7*/
  *(_QWORD *)(v19 + 24) = v55; /*0x1003ec900*/
  v20 = v53; /*0x1003ec904*/
  *(_QWORD *)(v19 + 16) = v54; /*0x1003ec90c*/
  *(_QWORD *)(v19 + 8) = v20; /*0x1003ec910*/
  *(_BYTE *)v19 = 5; /*0x1003ec914*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(v44); /*0x1003ed1ce*/
}