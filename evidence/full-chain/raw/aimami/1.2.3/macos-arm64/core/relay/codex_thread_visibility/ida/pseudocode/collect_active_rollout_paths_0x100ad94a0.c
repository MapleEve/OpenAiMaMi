// __ZN13codexmate_lib4core5relay23codex_thread_visibility28collect_active_rollout_paths @ 0x100ad94a0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::collect_active_rollout_paths::h780c6fe0c7fd3d31(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // r15
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 (__fastcall **v10)(); // r12
  __int64 (__fastcall *v11)(_QWORD, _QWORD); // r13
  __int64 v12; // r12
  __int64 v13; // rbx
  __m128i si128; // xmm0
  int v15; // eax
  __int64 *v16; // rax
  __int64 *v17; // r13
  __int64 **v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  _QWORD *v23; // r15
  __int64 v24; // rsi
  _QWORD *v25; // rdx
  __int64 v27; // rbx
  __int64 v28; // r14
  const __m128i *v29; // r15
  const __m128i *v31; // r12
  int v32; // r13d
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rbx
  _QWORD v39[14]; // [rsp+8h] [rbp-278h] BYREF
  const __m128i *v40; // [rsp+78h] [rbp-208h] BYREF
  __int64 v41; // [rsp+80h] [rbp-200h]
  __int64 v42; // [rsp+88h] [rbp-1F8h]
  __int64 v43; // [rsp+90h] [rbp-1F0h]
  __int64 v44; // [rsp+98h] [rbp-1E8h]
  __int64 v45; // [rsp+A0h] [rbp-1E0h]
  _QWORD *v46; // [rsp+A8h] [rbp-1D8h]
  __int64 v47; // [rsp+B0h] [rbp-1D0h]
  unsigned __int64 v48; // [rsp+B8h] [rbp-1C8h]
  __int64 *v49; // [rsp+C0h] [rbp-1C0h]
  __int64 (__fastcall *v50)(); // [rsp+C8h] [rbp-1B8h]
  __int64 v51; // [rsp+D0h] [rbp-1B0h] BYREF
  __int64 **v52; // [rsp+D8h] [rbp-1A8h]
  __int64 **v53; // [rsp+E0h] [rbp-1A0h]
  __int64 (__fastcall *v54)(_QWORD, _QWORD); // [rsp+E8h] [rbp-198h]
  __int64 (__fastcall *v55)(_QWORD, _QWORD); // [rsp+F0h] [rbp-190h]
  __int64 *v56; // [rsp+F8h] [rbp-188h]
  __int64 (__fastcall *v57)(_QWORD, _QWORD); // [rsp+100h] [rbp-180h]
  sqlite3_stmt *v58; // [rsp+108h] [rbp-178h]
  __int64 *v59; // [rsp+110h] [rbp-170h] BYREF
  __int64 (__fastcall *v60)(); // [rsp+118h] [rbp-168h]
  __int64 **v61; // [rsp+120h] [rbp-160h]
  __int64 **v62; // [rsp+128h] [rbp-158h]
  __int64 (__fastcall *v63)(_QWORD, _QWORD); // [rsp+130h] [rbp-150h]
  __int64 (__fastcall *v64)(_QWORD, _QWORD); // [rsp+138h] [rbp-148h]
  __int64 *v65; // [rsp+140h] [rbp-140h]
  __int64 (__fastcall *v66)(_QWORD, _QWORD); // [rsp+148h] [rbp-138h]
  sqlite3_stmt *v67; // [rsp+150h] [rbp-130h]
  __int64 v68; // [rsp+158h] [rbp-128h]
  __int64 *v69; // [rsp+160h] [rbp-120h]
  __int64 v70; // [rsp+168h] [rbp-118h]
  __int64 v71; // [rsp+170h] [rbp-110h]
  __int64 v72; // [rsp+178h] [rbp-108h] BYREF
  __int64 v73; // [rsp+180h] [rbp-100h]
  __int64 v74; // [rsp+188h] [rbp-F8h]
  __int64 v75; // [rsp+190h] [rbp-F0h]
  _QWORD v76[14]; // [rsp+198h] [rbp-E8h] BYREF
  __int64 *v77; // [rsp+208h] [rbp-78h] BYREF
  __int64 v78; // [rsp+210h] [rbp-70h] BYREF
  __int64 (__fastcall **v79)(); // [rsp+218h] [rbp-68h]
  __int64 v80; // [rsp+220h] [rbp-60h]
  __int64 (__fastcall **v81)(); // [rsp+228h] [rbp-58h] BYREF
  __int64 (__fastcall *v82)(_QWORD, _QWORD); // [rsp+230h] [rbp-50h]
  __int64 *v83; // [rsp+238h] [rbp-48h]
  __int64 (__fastcall *v84)(_QWORD, _QWORD); // [rsp+240h] [rbp-40h]
  __int64 (__fastcall *v85)(); // [rsp+248h] [rbp-38h] BYREF
  __int64 **v86; // [rsp+250h] [rbp-30h]

  v46 = a1; /*0x100ad94b4*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100ad94c2*/
  v4 = (_QWORD *)v2; /*0x100ad94c4*/
  if ( *(_BYTE *)(v2 + 16) == 1 ) /*0x100ad94cb*/
  {
    v5 = *(_QWORD *)v2; /*0x100ad94d1*/
    v6 = v4[1]; /*0x100ad94d4*/
  }
  else
  {
    v37 = v2; /*0x100ad9fe1*/
    v5 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100ad9fe4*/
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           a2,
           v3,
           v2);
    v4 = (_QWORD *)v37; /*0x100ad9fec*/
    *(_QWORD *)v37 = v5; /*0x100ad9fef*/
    *(_QWORD *)(v37 + 8) = v6; /*0x100ad9ff2*/
    *(_BYTE *)(v37 + 16) = 1; /*0x100ad9ff6*/
  }
  *v4 = v5 + 1; /*0x100ad94dc*/
  v43 = 0; /*0x100ad94e6*/
  v42 = 0; /*0x100ad94f4*/
  v41 = 0; /*0x100ad9502*/
  v40 = (const __m128i *)&xmmword_1015FBEC0; /*0x100ad9510*/
  v44 = v5; /*0x100ad9517*/
  v45 = v6; /*0x100ad951e*/
  v72 = 0; /*0x100ad9525*/
  v73 = 8; /*0x100ad9530*/
  v74 = 0; /*0x100ad953b*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v76, a2); /*0x100ad954d*/
  v7 = (__int64 *)v76[1]; /*0x100ad9559*/
  v68 = v76[1]; /*0x100ad956f*/
  v69 = (__int64 *)v76[1]; /*0x100ad9576*/
  v47 = v76[0]; /*0x100ad957d*/
  v70 = v76[0]; /*0x100ad9584*/
  v75 = v76[1] + 24LL * v76[2]; /*0x100ad958b*/
  v71 = v75; /*0x100ad9592*/
  v49 = (__int64 *)v76[1]; /*0x100ad9599*/
  if ( v76[2] ) /*0x100ad95a3*/
  {
    v48 = 0x8000000000000000LL; /*0x100ad95be*/
    v8 = v49; /*0x100ad95cc*/
    while ( 1 ) /*0x100ad95f7*/
    {
      v7 = v8 + 3; /*0x100ad95f7*/
      v9 = *v8; /*0x100ad95fb*/
      if ( *v8 == v48 ) /*0x100ad9605*/
        break; /*0x100ad9605*/
      v10 = (__int64 (__fastcall **)())v8[1]; /*0x100ad960b*/
      v11 = (__int64 (__fastcall *)(_QWORD, _QWORD))v8[2]; /*0x100ad960f*/
      rusqlite::Connection::open_with_flags::h44d322d71fbb5f40(v76, v10, v11, 1); /*0x100ad961e*/
      if ( LOBYTE(v76[13]) == 3 ) /*0x100ad9627*/
      {
        v66 = (__int64 (__fastcall *)(_QWORD, _QWORD))v76[7]; /*0x100ad9634*/
        v65 = (__int64 *)v76[6]; /*0x100ad9642*/
        v64 = (__int64 (__fastcall *)(_QWORD, _QWORD))v76[5]; /*0x100ad9650*/
        v63 = (__int64 (__fastcall *)(_QWORD, _QWORD))v76[4]; /*0x100ad965e*/
        v62 = (__int64 **)v76[3]; /*0x100ad966c*/
        v61 = (__int64 **)v76[2]; /*0x100ad967a*/
        v60 = (__int64 (__fastcall *)())v76[1]; /*0x100ad968f*/
        v59 = (__int64 *)v76[0]; /*0x100ad9696*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ad96ab*/
        {
          v81 = v10; /*0x100ad96b1*/
          v82 = v11; /*0x100ad96b5*/
          v51 = (__int64)&v81; /*0x100ad96bd*/
          v52 = (__int64 **)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad96cb*/
          v53 = &v59; /*0x100ad96d9*/
          v54 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad96e7*/
          v39[6] = 2; /*0x100ad96ee*/
          v39[7] = &unk_10167D5D6; /*0x100ad9700*/
          v39[8] = 51; /*0x100ad9707*/
          v39[10] = &unk_1017CAD2F; /*0x100ad9719*/
          v39[11] = &v51; /*0x100ad9727*/
          v39[0] = 0; /*0x100ad972e*/
          v39[1] = &unk_10167D5D6; /*0x100ad9739*/
          v39[2] = 51; /*0x100ad9740*/
          v39[3] = 0; /*0x100ad974b*/
          v39[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ad975d*/
          v39[5] = 41; /*0x100ad9764*/
          v39[9] = 0x183E00000001LL; /*0x100ad9779*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v77, v39); /*0x100ad978b*/
        }
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v59); /*0x100ad9797*/
      }
      else
      {
        qmemcpy(v39, v76, sizeof(v39)); /*0x100ad97c6*/
        v52 = nullptr; /*0x100ad97c9*/
        v51 = 5000; /*0x100ad97d4*/
        v59 = &v51; /*0x100ad97e6*/
        v60 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100ad97f4*/
        v79 = v10; /*0x100ad980c*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v76, &unk_1017CACA6, &v59); /*0x100ad9810*/
        v80 = v9; /*0x100ad9815*/
        v12 = v76[0]; /*0x100ad9819*/
        v13 = v76[1]; /*0x100ad9820*/
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v76, v39, v76[1], v76[2]); /*0x100ad983f*/
        if ( v76[0] != 0x8000000000000016LL ) /*0x100ad9855*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v76); /*0x100ad985e*/
        if ( v12 ) /*0x100ad9866*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x100ad9873*/
        v9 = v80; /*0x100ad9892*/
        v10 = v79; /*0x100ad9896*/
        rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v59, v39, &unk_10167D882, 74); /*0x100ad989a*/
        if ( (_BYTE)v59 ) /*0x100ad98a6*/
        {
          v58 = v67; /*0x100ad98b7*/
          v57 = v66; /*0x100ad98c2*/
          v56 = v65; /*0x100ad98cd*/
          v55 = v64; /*0x100ad98d8*/
          v54 = v63; /*0x100ad98e3*/
          v53 = v62; /*0x100ad98ee*/
          v52 = v61; /*0x100ad98fc*/
          v51 = (__int64)v60; /*0x100ad9903*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ad9918*/
          {
            v85 = (__int64 (__fastcall *)())v10; /*0x100ad991e*/
            v86 = (__int64 **)v11; /*0x100ad9922*/
            v81 = &v85; /*0x100ad992a*/
            v82 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad9935*/
            v83 = &v51; /*0x100ad9940*/
            v84 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad994b*/
            v76[6] = 2; /*0x100ad994f*/
            v76[7] = &unk_10167D5D6; /*0x100ad9961*/
            v76[8] = 51; /*0x100ad9968*/
            v76[10] = &unk_1017CACFA; /*0x100ad997a*/
            v76[11] = &v81; /*0x100ad9985*/
            v76[0] = 0; /*0x100ad998c*/
            v76[1] = &unk_10167D5D6; /*0x100ad9997*/
            v76[2] = 51; /*0x100ad999e*/
            v76[3] = 0; /*0x100ad99a9*/
            v76[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ad99bb*/
            v76[5] = 41; /*0x100ad99c2*/
            v76[9] = 0x184E00000001LL; /*0x100ad99d7*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v77, v76); /*0x100ad99e9*/
          }
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v51); /*0x100ad99f5*/
        }
        else
        {
          v58 = v67; /*0x100ad9a0b*/
          v57 = v66; /*0x100ad9a16*/
          v56 = v65; /*0x100ad9a21*/
          v55 = v64; /*0x100ad9a2c*/
          v54 = v63; /*0x100ad9a37*/
          v53 = v62; /*0x100ad9a42*/
          v52 = v61; /*0x100ad9a50*/
          v51 = (__int64)v60; /*0x100ad9a57*/
          v15 = sqlite3_bind_parameter_count(v67); /*0x100ad9a5e*/
          if ( !v15 ) /*0x100ad9a68*/
          {
            v77 = &v51; /*0x100ad9b91*/
            v78 = 0; /*0x100ad9b95*/
            while ( 1 ) /*0x100ad9bb7*/
            {
              _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x100ad9bb7*/
                &v59,
                &v77);
              v16 = v59; /*0x100ad9bbc*/
              if ( v59 == (__int64 *)0x8000000000000016LL ) /*0x100ad9bd0*/
              {
                if ( !v78 ) /*0x100ad9bd7*/
                  goto LABEL_38; /*0x100ad9bd7*/
                rusqlite::row::Row::get::h97011a0484b66d6b(v76, &v78, 0, 0x8000000000000016LL); /*0x100ad9bea*/
                v16 = (__int64 *)v76[0]; /*0x100ad9bef*/
                v17 = (__int64 *)v76[1]; /*0x100ad9bf6*/
                v85 = (__int64 (__fastcall *)())v76[2]; /*0x100ad9c04*/
                v86 = (__int64 **)v76[3]; /*0x100ad9c08*/
                v81 = (__int64 (__fastcall **)())v76[4]; /*0x100ad9c14*/
                v82 = (__int64 (__fastcall *)(_QWORD, _QWORD))v76[5]; /*0x100ad9c18*/
                v83 = (__int64 *)v76[6]; /*0x100ad9c20*/
                v84 = (__int64 (__fastcall *)(_QWORD, _QWORD))v76[7]; /*0x100ad9c28*/
                if ( v76[0] == 0x8000000000000017LL ) /*0x100ad9c3c*/
                {
LABEL_38:
                  core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v77); /*0x100ad9dfc*/
                  goto LABEL_39; /*0x100ad9dfc*/
                }
              }
              else
              {
                v17 = (__int64 *)v60; /*0x100ad9c50*/
                v76[7] = v66; /*0x100ad9c62*/
                v76[6] = v65; /*0x100ad9c6a*/
                v76[5] = v64; /*0x100ad9c72*/
                v76[4] = v63; /*0x100ad9c7a*/
                v76[3] = v62; /*0x100ad9c86*/
                v76[2] = v61; /*0x100ad9c8a*/
                v76[0] = v59; /*0x100ad9c8d*/
                v76[1] = v60; /*0x100ad9c94*/
                v85 = (__int64 (__fastcall *)())v61; /*0x100ad9ca2*/
                v86 = v62; /*0x100ad9ca6*/
                v81 = (__int64 (__fastcall **)())v63; /*0x100ad9cb2*/
                v82 = v64; /*0x100ad9cb6*/
                v83 = v65; /*0x100ad9cbe*/
                v84 = v66; /*0x100ad9cc6*/
              }
              v76[7] = v84; /*0x100ad9cce*/
              v76[6] = v83; /*0x100ad9cd6*/
              v76[5] = v82; /*0x100ad9ce2*/
              v76[4] = v81; /*0x100ad9ce6*/
              v76[0] = v16; /*0x100ad9cea*/
              v76[1] = v17; /*0x100ad9cf1*/
              v76[3] = v86; /*0x100ad9d00*/
              v76[2] = v85; /*0x100ad9d04*/
              if ( v16 == (__int64 *)0x8000000000000016LL ) /*0x100ad9d14*/
              {
                if ( v17 != (__int64 *)v48 ) /*0x100ad9d21*/
                {
                  v61 = v86; /*0x100ad9d36*/
                  v60 = v85; /*0x100ad9d3a*/
                  v59 = v17; /*0x100ad9d3d*/
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v76, &v59); /*0x100ad9d52*/
                  if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3( /*0x100ad9d65*/
                                          &v40,
                                          v76) )
                  {
                    if ( v17 ) /*0x100ad9d71*/
                      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v17, 1); /*0x100ad9d86*/
                  }
                  else
                  {
                    v50 = v60; /*0x100ad9d97*/
                    v18 = v61; /*0x100ad9d9e*/
                    v19 = v74; /*0x100ad9da5*/
                    if ( v74 == v72 ) /*0x100ad9db3*/
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v72); /*0x100ad9dbc*/
                    v20 = v73; /*0x100ad9dc1*/
                    v21 = 3 * v19; /*0x100ad9dc8*/
                    *(_QWORD *)(v73 + 8 * v21) = v17; /*0x100ad9dcc*/
                    *(_QWORD *)(v20 + 8 * v21 + 8) = v50; /*0x100ad9dd7*/
                    *(_QWORD *)(v20 + 8 * v21 + 16) = v18; /*0x100ad9ddc*/
                    v74 = v19 + 1; /*0x100ad9de4*/
                    v9 = v80; /*0x100ad9deb*/
                    v10 = v79; /*0x100ad9def*/
                  }
                }
              }
              else
              {
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v76); /*0x100ad9ba7*/
              }
            }
          }
          v59 = (__int64 *)0x8000000000000013LL; /*0x100ad9a7c*/
          v60 = nullptr; /*0x100ad9a83*/
          v61 = (__int64 **)v15; /*0x100ad9a8e*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ad9aa3*/
          {
            v85 = (__int64 (__fastcall *)())v10; /*0x100ad9aa9*/
            v86 = (__int64 **)v11; /*0x100ad9aad*/
            v81 = &v85; /*0x100ad9ab5*/
            v82 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad9ac0*/
            v83 = (__int64 *)&v59; /*0x100ad9acb*/
            v84 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad9ad6*/
            v76[6] = 2; /*0x100ad9ada*/
            v76[7] = &unk_10167D5D6; /*0x100ad9aec*/
            v76[8] = 51; /*0x100ad9af3*/
            v76[10] = &unk_1017CACC1; /*0x100ad9b05*/
            v76[11] = &v81; /*0x100ad9b10*/
            v76[0] = 0; /*0x100ad9b17*/
            v76[1] = &unk_10167D5D6; /*0x100ad9b22*/
            v76[2] = 51; /*0x100ad9b29*/
            v76[3] = 0; /*0x100ad9b34*/
            v76[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ad9b46*/
            v76[5] = 41; /*0x100ad9b4d*/
            v76[9] = 0x185800000001LL; /*0x100ad9b62*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v77, v76); /*0x100ad9b74*/
          }
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v59); /*0x100ad9b80*/
LABEL_39:
          core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v51); /*0x100ad9e01*/
        }
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v39); /*0x100ad9e14*/
      }
      if ( v9 ) /*0x100ad9e1c*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100ad9e2d*/
      v8 = v7; /*0x100ad95e0*/
      if ( v7 == (__int64 *)v75 ) /*0x100ad95f1*/
      {
        v7 = (__int64 *)v75; /*0x100ad9e37*/
        break; /*0x100ad9e37*/
      }
    }
    v69 = v7; /*0x100ad9e3e*/
  }
  if ( (__int64 *)v75 != v7 ) /*0x100ad9e62*/
  {
    v22 = (v75 - (__int64)v7) / 0x18uLL; /*0x100ad9e67*/
    v23 = v7 + 1; /*0x100ad9e6b*/
    do /*0x100ad9e87*/
    {
      v24 = *(v23 - 1); /*0x100ad9e89*/
      if ( v24 ) /*0x100ad9e90*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v23, v24, 1); /*0x100ad9e9a*/
      v23 += 3; /*0x100ad9e80*/
      --v22; /*0x100ad9e84*/
    }
    while ( v22 ); /*0x100ad9e87*/
  }
  if ( v47 ) /*0x100ad9eab*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, 24 * v47, 8); /*0x100ad9ec1*/
  v25 = v46; /*0x100ad9ecd*/
  v46[2] = v74; /*0x100ad9ed4*/
  _RAX = v72; /*0x100ad9ed8*/
  v25[1] = v73; /*0x100ad9ee6*/
  *v25 = _RAX; /*0x100ad9eea*/
  v27 = v41; /*0x100ad9eed*/
  if ( v41 ) /*0x100ad9ef7*/
  {
    v28 = v43; /*0x100ad9efd*/
    if ( v43 ) /*0x100ad9f07*/
    {
      v29 = v40; /*0x100ad9f0d*/
      si128 = _mm_load_si128(v40); /*0x100ad9f14*/
      _R13D = ~_mm_movemask_epi8(si128); /*0x100ad9f1e*/
      v31 = v40 + 1; /*0x100ad9f21*/
      do /*0x100ad9f40*/
      {
        if ( !(_WORD)_R13D ) /*0x100ad9f46*/
        {
          do /*0x100ad9f6d*/
          {
            si128 = _mm_load_si128(v31); /*0x100ad9f50*/
            v32 = _mm_movemask_epi8(si128); /*0x100ad9f56*/
            v29 -= 24; /*0x100ad9f5b*/
            ++v31; /*0x100ad9f62*/
          }
          while ( v32 == 0xFFFF ); /*0x100ad9f6d*/
          _R13D = ~v32; /*0x100ad9f6f*/
        }
        __asm { tzcnt eax, r13d } /*0x100ad9f72*/
        v33 = -3 * _RAX; /*0x100ad9f7a*/
        v34 = *((_QWORD *)&v29[-1] + v33 - 1); /*0x100ad9f7e*/
        if ( v34 ) /*0x100ad9f86*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29[-1].i64[v33], v34, 1); /*0x100ad9f95*/
        --v28; /*0x100ad9f30*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100ad9f37*/
        _R13D &= _R13D - 1; /*0x100ad9f3a*/
      }
      while ( v28 ); /*0x100ad9f40*/
    }
    v35 = (24 * v27 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100ad9fa8*/
    v36 = v35 + v27 + 17; /*0x100ad9faf*/
    if ( v36 ) /*0x100ad9fb3*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v40 - v35, v36, 16); /*0x100ad9fc7*/
  }
  return *(double *)si128.i64; /*0x100ad9fcc*/
}