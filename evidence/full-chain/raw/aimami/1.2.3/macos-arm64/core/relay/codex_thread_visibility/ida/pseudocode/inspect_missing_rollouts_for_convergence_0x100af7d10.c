// __ZN13codexmate_lib4core5relay23codex_thread_visibility40inspect_missing_rollouts_for_convergence @ 0x100af7d10 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_missing_rollouts_for_convergence::he13f091f11a0c011(
        void *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r13
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rcx
  _BYTE *v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rbx
  _QWORD *v34; // r13
  __int64 v35; // rsi
  void *result; // rax
  _BYTE v37[112]; // [rsp+8h] [rbp-328h] BYREF
  _BYTE v38[24]; // [rsp+78h] [rbp-2B8h] BYREF
  _BYTE v39[24]; // [rsp+90h] [rbp-2A0h] BYREF
  _BYTE v40[24]; // [rsp+A8h] [rbp-288h] BYREF
  _QWORD v41[19]; // [rsp+C0h] [rbp-270h] BYREF
  _QWORD v42[3]; // [rsp+158h] [rbp-1D8h] BYREF
  _QWORD v43[3]; // [rsp+170h] [rbp-1C0h] BYREF
  const void *v44; // [rsp+188h] [rbp-1A8h]
  size_t v45; // [rsp+190h] [rbp-1A0h]
  void *v46; // [rsp+198h] [rbp-198h]
  __int64 v47; // [rsp+1A0h] [rbp-190h]
  _QWORD v48[12]; // [rsp+1A8h] [rbp-188h] BYREF
  __int64 v49; // [rsp+208h] [rbp-128h]
  __int64 v50; // [rsp+210h] [rbp-120h]
  __int64 *v51; // [rsp+218h] [rbp-118h]
  __int64 *v52; // [rsp+220h] [rbp-110h] BYREF
  __int64 (__fastcall *v53)(_QWORD, _QWORD); // [rsp+228h] [rbp-108h]
  _QWORD *v54; // [rsp+230h] [rbp-100h]
  __int64 (__fastcall *v55)(_QWORD, _QWORD); // [rsp+238h] [rbp-F8h]
  __int64 v56; // [rsp+240h] [rbp-F0h]
  __int64 v57; // [rsp+248h] [rbp-E8h]
  __int64 v58; // [rsp+250h] [rbp-E0h]
  __int64 v59; // [rsp+258h] [rbp-D8h]
  _QWORD v60[10]; // [rsp+260h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+2B0h] [rbp-80h] BYREF
  __int64 v62; // [rsp+2B8h] [rbp-78h]
  __int64 v63; // [rsp+2C0h] [rbp-70h]
  __int64 v64; // [rsp+2C8h] [rbp-68h]
  __int64 v65; // [rsp+2D0h] [rbp-60h]
  _QWORD *v66; // [rsp+2D8h] [rbp-58h]
  __int64 v67; // [rsp+2E0h] [rbp-50h]
  __int64 v68; // [rsp+2E8h] [rbp-48h]
  __int64 v69; // [rsp+2F0h] [rbp-40h]
  __int64 v70; // [rsp+2F8h] [rbp-38h]
  __int64 v71; // [rsp+300h] [rbp-30h]

  v46 = a1; /*0x100af7d27*/
  v60[0] = 0; /*0x100af7d2e*/
  v60[1] = 8; /*0x100af7d65*/
  v60[2] = 0; /*0x100af7d70*/
  v60[3] = 0; /*0x100af7d7b*/
  v60[4] = 8; /*0x100af7d86*/
  memset(&v60[5], 0, 40); /*0x100af7d91*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v41, a2); /*0x100af7da6*/
  v2 = (_QWORD *)v41[1]; /*0x100af7db2*/
  v65 = v41[1]; /*0x100af7dc9*/
  v66 = (_QWORD *)v41[1]; /*0x100af7dcd*/
  v47 = v41[0]; /*0x100af7dd1*/
  v67 = v41[0]; /*0x100af7dd8*/
  v71 = v41[1] + 24LL * v41[2]; /*0x100af7ddc*/
  v68 = v71; /*0x100af7de0*/
  v51 = (__int64 *)v41[1]; /*0x100af7de4*/
  if ( v41[2] ) /*0x100af7dee*/
  {
    v44 = (const void *)a2[43]; /*0x100af7dfb*/
    v45 = a2[44]; /*0x100af7e09*/
    v3 = v51; /*0x100af7e10*/
    while ( 1 ) /*0x100af7e2d*/
    {
      v2 = v3 + 3; /*0x100af7e2d*/
      v4 = *v3; /*0x100af7e31*/
      if ( *v3 == 0x8000000000000000LL ) /*0x100af7e41*/
      {
LABEL_57:
        v66 = v2; /*0x100af8542*/
        break; /*0x100af8542*/
      }
      v5 = v3[1]; /*0x100af7e47*/
      v6 = v3[2]; /*0x100af7e4b*/
      v69 = v5; /*0x100af7e58*/
      std::sys::fs::metadata::h32fa16d3052ea535(v41, v5, v6); /*0x100af7e5c*/
      if ( LOBYTE(v41[0]) ) /*0x100af7e68*/
      {
        if ( (v41[1] & 3) == 1 ) /*0x100af7e79*/
        {
          v70 = v4; /*0x100af7e7f*/
          v7 = v41[1] - 1LL; /*0x100af7e83*/
          v8 = *(_QWORD *)(v41[1] - 1LL); /*0x100af7e87*/
          v9 = *(_QWORD *)(v41[1] + 7LL); /*0x100af7e8b*/
          if ( *(_QWORD *)v9 ) /*0x100af7e8f*/
            (*(void (__fastcall **)(__int64))v9)(v8); /*0x100af7e9a*/
          v10 = *(_QWORD *)(v9 + 8); /*0x100af7e9c*/
          if ( v10 ) /*0x100af7ea3*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x100af7eac*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24, 8); /*0x100af7ebe*/
          v4 = v70; /*0x100af7ec3*/
          v5 = v69; /*0x100af7ec7*/
        }
        goto LABEL_54; /*0x100af7ecb*/
      }
      codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::h07bf0b0a45198e2f( /*0x100af7ed9*/
        (__int64)v41,
        v5,
        v6);
      v70 = v4; /*0x100af7ee5*/
      if ( LOBYTE(v41[13]) == 3 ) /*0x100af7ee9*/
      {
        qmemcpy(v48, v41, sizeof(v48)); /*0x100af7f01*/
        v61 = v5; /*0x100af7f04*/
        v62 = v6; /*0x100af7f08*/
        v52 = &v61; /*0x100af7f10*/
        v53 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100af7f1e*/
        v54 = v48; /*0x100af7f25*/
        v55 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100af7f33*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v43, &unk_1017B9AD3, &v52); /*0x100af7f4f*/
        v11 = v60[2]; /*0x100af7f54*/
        if ( v60[2] == v60[0] ) /*0x100af7f62*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v60); /*0x100af7f6b*/
        v12 = v60[1]; /*0x100af7f70*/
        v13 = 3 * v11; /*0x100af7f77*/
        *(_QWORD *)(v60[1] + 8 * v13 + 16) = v43[2]; /*0x100af7f82*/
        v14 = v43[0]; /*0x100af7f87*/
        *(_QWORD *)(v12 + 8 * v13 + 8) = v43[1]; /*0x100af7f95*/
        *(_QWORD *)(v12 + 8 * v13) = v14; /*0x100af7f9a*/
        v60[2] = v11 + 1; /*0x100af7fa1*/
        v4 = v70; /*0x100af7faf*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v48); /*0x100af7fb3*/
        goto LABEL_54; /*0x100af7fb8*/
      }
      qmemcpy(v37, v41, sizeof(v37)); /*0x100af7fd2*/
      codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h29551f1dfa54e579( /*0x100af7fdf*/
        v48,
        (__int64)v37);
      if ( LODWORD(v48[0]) != 11 ) /*0x100af7feb*/
      {
        qmemcpy(v41, v48, 0x60u); /*0x100af8434*/
        v61 = v5; /*0x100af8437*/
        v62 = v6; /*0x100af843b*/
        v52 = &v61; /*0x100af8443*/
        v53 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100af8451*/
        v54 = v41; /*0x100af8458*/
        v55 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100af8466*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, &unk_1017B9AD3, &v52); /*0x100af8482*/
        v29 = v60[2]; /*0x100af8487*/
        if ( v60[2] == v60[0] ) /*0x100af8495*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v60); /*0x100af849e*/
        v30 = v60[1]; /*0x100af84a3*/
        v31 = 3 * v29; /*0x100af84aa*/
        *(_QWORD *)(v60[1] + 8 * v31 + 16) = v42[2]; /*0x100af84b5*/
        v32 = v42[0]; /*0x100af84ba*/
        *(_QWORD *)(v30 + 8 * v31 + 8) = v42[1]; /*0x100af84c8*/
        *(_QWORD *)(v30 + 8 * v31) = v32; /*0x100af84cd*/
        v60[2] = v29 + 1; /*0x100af84d4*/
        v4 = v70; /*0x100af84de*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v41); /*0x100af84e2*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v37); /*0x100af84ee*/
        goto LABEL_54; /*0x100af84f3*/
      }
      v60[6] += v48[3]; /*0x100af7fff*/
      v15 = v48[2] + 72LL * v48[3]; /*0x100af8011*/
      v61 = v48[2]; /*0x100af8015*/
      v62 = v48[2]; /*0x100af8019*/
      v63 = v48[1]; /*0x100af801d*/
      v64 = v15; /*0x100af8021*/
      if ( !v48[3] ) /*0x100af8028*/
        goto LABEL_53; /*0x100af8028*/
      v16 = v48[2] + 72LL; /*0x100af802e*/
      v49 = v48[2] + 72LL * v48[3]; /*0x100af8032*/
      while ( 1 ) /*0x100af8055*/
      {
        v18 = *(_QWORD *)(v16 - 72); /*0x100af8055*/
        v19 = *(__int64 **)(v16 - 64); /*0x100af8059*/
        v59 = *(_QWORD *)(v16 - 8); /*0x100af8061*/
        v58 = *(_QWORD *)(v16 - 16); /*0x100af806c*/
        v57 = *(_QWORD *)(v16 - 24); /*0x100af8077*/
        v56 = *(_QWORD *)(v16 - 32); /*0x100af8082*/
        v55 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v16 - 40); /*0x100af808d*/
        v54 = *(_QWORD **)(v16 - 48); /*0x100af8098*/
        v53 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v16 - 56); /*0x100af80a3*/
        v52 = v19; /*0x100af80aa*/
        if ( v18 == 0x8000000000000000LL ) /*0x100af80be*/
          break; /*0x100af80be*/
        v48[0] = v18; /*0x100af80c4*/
        v48[8] = v59; /*0x100af80d9*/
        v48[7] = v58; /*0x100af80e4*/
        v48[6] = v57; /*0x100af80ef*/
        v48[5] = v56; /*0x100af80fa*/
        v48[4] = v55; /*0x100af8105*/
        v48[3] = v54; /*0x100af8110*/
        v48[2] = v53; /*0x100af8122*/
        v48[1] = v52; /*0x100af8126*/
        if ( v57 == 0x8000000000000000LL ) /*0x100af8130*/
        {
          ++v60[7]; /*0x100af8136*/
          ++v60[9]; /*0x100af813d*/
          v41[0] = v48; /*0x100af814b*/
          v41[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100af8159*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v40, &unk_1017CB6F4, v41); /*0x100af8171*/
          v20 = v40; /*0x100af8176*/
LABEL_23:
          v21 = v60[5]; /*0x100af817d*/
          if ( v60[5] >= 3u ) /*0x100af8192*/
          {
            v5 = v69; /*0x100af8336*/
            if ( *(_QWORD *)v20 ) /*0x100af8330*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v20 + 1), *(_QWORD *)v20, 1); /*0x100af8345*/
          }
          else
          {
            if ( v60[5] == v60[3] ) /*0x100af819f*/
            {
              v50 = *(_QWORD *)v20; /*0x100af81a4*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v60[3]); /*0x100af81b6*/
            }
            v22 = v60[4]; /*0x100af81bb*/
            v23 = 3 * v21; /*0x100af81c2*/
            *(_QWORD *)(v60[4] + 8 * v23 + 16) = *((_QWORD *)v20 + 2); /*0x100af81ca*/
            v24 = *(_QWORD *)v20; /*0x100af81cf*/
            *(_QWORD *)(v22 + 8 * v23 + 8) = *((_QWORD *)v20 + 1); /*0x100af81d6*/
            *(_QWORD *)(v22 + 8 * v23) = v24; /*0x100af81db*/
            v60[5] = v21 + 1; /*0x100af81e2*/
            v5 = v69; /*0x100af81e9*/
            v15 = v49; /*0x100af81f7*/
          }
          goto LABEL_38; /*0x100af81fe*/
        }
        std::sys::fs::metadata::h32fa16d3052ea535(v41, v48[7], v48[8]); /*0x100af8221*/
        if ( LOBYTE(v41[0]) ) /*0x100af822d*/
        {
          if ( (v41[1] & 3) == 1 ) /*0x100af8242*/
          {
            v25 = v41[1] - 1LL; /*0x100af8244*/
            v26 = *(_QWORD *)(v41[1] - 1LL); /*0x100af8248*/
            v27 = *(_QWORD *)(v41[1] + 7LL); /*0x100af824c*/
            if ( *(_QWORD *)v27 ) /*0x100af8250*/
              (*(void (__fastcall **)(__int64))v27)(v26); /*0x100af825b*/
            v28 = *(_QWORD *)(v27 + 8); /*0x100af825d*/
            if ( v28 ) /*0x100af8264*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x100af826d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x100af827f*/
            v15 = v49; /*0x100af828b*/
          }
          ++v60[7]; /*0x100af8292*/
          codexmate_lib::core::relay::codex_thread_visibility::find_trusted_rollout_backup::ha066b49cdc5f109c( /*0x100af82ca*/
            v41,
            v44,
            v45,
            v48[1],
            v48[2],
            v48[7],
            v48[8]);
          if ( v41[0] == 0x8000000000000000LL ) /*0x100af82e3*/
          {
            ++v60[9]; /*0x100af82e9*/
            v41[0] = v48; /*0x100af82f7*/
            v41[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100af8305*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v38, &unk_1017CBCDE, v41); /*0x100af831d*/
            v20 = v38; /*0x100af8322*/
          }
          else
          {
            if ( v41[0] ) /*0x100af83cd*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[1], v41[0], 1); /*0x100af83db*/
            ++v60[8]; /*0x100af83e0*/
            v41[0] = v48; /*0x100af83ee*/
            v41[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100af83fc*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_1017CBCC0, v41); /*0x100af8414*/
            v20 = v39; /*0x100af8419*/
          }
          goto LABEL_23; /*0x100af8329*/
        }
LABEL_38:
        if ( v48[0] ) /*0x100af835e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48[1], v48[0], 1); /*0x100af836c*/
        if ( v48[6] != 0x8000000000000000LL && v48[6] ) /*0x100af838a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48[7], v48[6], 1); /*0x100af8398*/
        if ( v48[3] ) /*0x100af83ae*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48[4], v48[3], 1); /*0x100af83c0*/
        v17 = v16 - 72; /*0x100af8040*/
        v16 += 72; /*0x100af8044*/
        if ( v17 + 72 == v15 ) /*0x100af804f*/
        {
          v16 = v15; /*0x100af84f5*/
          break; /*0x100af84f5*/
        }
      }
      v62 = v16; /*0x100af84f8*/
LABEL_53:
      _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8621f74bc492ec42(&v61); /*0x100af84fc*/
      v4 = v70; /*0x100af850c*/
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v37); /*0x100af8510*/
LABEL_54:
      if ( v4 ) /*0x100af8523*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x100af8534*/
      v3 = v2; /*0x100af7e20*/
      if ( v2 == (_QWORD *)v71 ) /*0x100af7e27*/
      {
        v2 = (_QWORD *)v71; /*0x100af853e*/
        goto LABEL_57; /*0x100af853e*/
      }
    }
  }
  if ( (_QWORD *)v71 != v2 ) /*0x100af8560*/
  {
    v33 = (v71 - (__int64)v2) / 0x18uLL; /*0x100af8565*/
    v34 = v2 + 1; /*0x100af8569*/
    do /*0x100af8577*/
    {
      v35 = *(v34 - 1); /*0x100af8579*/
      if ( v35 ) /*0x100af8580*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v34, v35, 1); /*0x100af858b*/
      v34 += 3; /*0x100af8570*/
      --v33; /*0x100af8574*/
    }
    while ( v33 ); /*0x100af8577*/
  }
  if ( v47 ) /*0x100af859c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, 24 * v47, 8); /*0x100af85b2*/
  result = v46; /*0x100af85c3*/
  qmemcpy(v46, v60, 0x50u); /*0x100af85cd*/
  return result; /*0x100af85d0*/
}