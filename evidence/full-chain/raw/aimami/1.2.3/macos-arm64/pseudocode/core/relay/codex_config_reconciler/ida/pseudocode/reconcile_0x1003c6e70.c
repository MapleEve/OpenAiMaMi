// __ZN13codexmate_lib4core5relay23codex_config_reconciler9reconcile @ 0x1003c6e70 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_config_reconciler::reconcile::h1c034bae44515f5c(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // r12
  __int64 v5; // r13
  __int64 v6; // r15
  char v7; // al
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  _QWORD *v13; // r8
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // r15
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r14
  __int64 v31; // rsi
  _QWORD *result; // rax
  unsigned __int64 v33; // rsi
  _QWORD *v34; // rbx
  __int64 v35; // rax
  _QWORD *v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rbx
  _QWORD v41[12]; // [rsp+10h] [rbp-1D0h] BYREF
  _QWORD *v42; // [rsp+70h] [rbp-170h] BYREF
  __int64 (__fastcall *v43)(_QWORD, _QWORD); // [rsp+78h] [rbp-168h]
  __int64 v44; // [rsp+80h] [rbp-160h]
  __int64 v45; // [rsp+88h] [rbp-158h]
  __int64 v46; // [rsp+90h] [rbp-150h]
  __int64 v47; // [rsp+98h] [rbp-148h]
  __int64 v48; // [rsp+A0h] [rbp-140h]
  __int64 v49; // [rsp+A8h] [rbp-138h]
  __int64 v50; // [rsp+B0h] [rbp-130h]
  __int64 v51; // [rsp+B8h] [rbp-128h]
  _QWORD v52[12]; // [rsp+C0h] [rbp-120h] BYREF
  _QWORD v53[12]; // [rsp+120h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+180h] [rbp-60h]
  _QWORD *v55; // [rsp+188h] [rbp-58h]
  __int64 v56; // [rsp+190h] [rbp-50h]
  int v57; // [rsp+19Ch] [rbp-44h]
  unsigned __int64 v58; // [rsp+1A0h] [rbp-40h]
  _QWORD *v59; // [rsp+1A8h] [rbp-38h]
  _BYTE v60[41]; // [rsp+1B7h] [rbp-29h] BYREF

  v5 = a3[1]; /*0x1003c6e91*/
  v6 = a3[3]; /*0x1003c6e95*/
  v7 = a3[6] & (v5 != 0); /*0x1003c6e9f*/
  v55 = a1; /*0x1003c6ea4*/
  v49 = a2; /*0x1003c6ea8*/
  if ( v7 != 1 ) /*0x1003c6eaf*/
  {
    v15 = v5; /*0x1003c7140*/
LABEL_17:
    v17 = a3[4]; /*0x1003c714b*/
    v18 = *a3; /*0x1003c714f*/
    v19 = a3[2]; /*0x1003c7152*/
    v57 = 0; /*0x1003c7156*/
    v20 = 0x8000000000000000LL; /*0x1003c715d*/
    LODWORD(v5) = 0; /*0x1003c7160*/
    goto LABEL_18; /*0x1003c7160*/
  }
  if ( !v6 ) /*0x1003c6eb8*/
  {
    v15 = v5; /*0x1003c7145*/
    v6 = 0; /*0x1003c7148*/
    goto LABEL_17; /*0x1003c7148*/
  }
  v3 = a2; /*0x1003c6ebe*/
  v8 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(a2); /*0x1003c6ec4*/
  v9 = a3[2]; /*0x1003c6ed3*/
  v56 = *a3; /*0x1003c6ee4*/
  v54 = v9; /*0x1003c6eeb*/
  codexmate_lib::core::relay::codex_catalog::write_catalog::hab70531d01891a9e( /*0x1003c6ef2*/
    (unsigned int)v41,
    a2,
    v56,
    v5,
    v9,
    v6,
    v8 != 1);
  if ( LODWORD(v41[0]) == 11 ) /*0x1003c6efe*/
  {
    v59 = (_QWORD *)v41[2]; /*0x1003c6f12*/
    v51 = v41[3]; /*0x1003c6f1d*/
    v10 = a3[4]; /*0x1003c6f24*/
    v50 = v10; /*0x1003c6f28*/
    v58 = v41[1]; /*0x1003c6f35*/
    if ( v41[1] != 0x8000000000000000LL && v10 != 0 ) /*0x1003c6f32*/
    {
      codexmate_lib::core::relay::config_takeover::inspect::ha24bdf4827804be9(v53, a2); /*0x1003c6f5b*/
      v11 = v53[0]; /*0x1003c6f60*/
      v52[0] = v53[1]; /*0x1003c6f6e*/
      v52[1] = v53[2]; /*0x1003c6f7c*/
      v52[2] = v53[3]; /*0x1003c6f8a*/
      v52[3] = v53[4]; /*0x1003c6f98*/
      v52[4] = v53[5]; /*0x1003c6fa6*/
      v52[5] = v53[6]; /*0x1003c6fb4*/
      v52[6] = v53[7]; /*0x1003c6fc2*/
      if ( v53[0] != 11 ) /*0x1003c6fcd*/
      {
        v36 = v55; /*0x1003c7518*/
        v55[11] = v53[11]; /*0x1003c751c*/
        v36[10] = v53[10]; /*0x1003c7524*/
        v37 = v53[8]; /*0x1003c7528*/
        v36[9] = v53[9]; /*0x1003c7530*/
        v36[8] = v37; /*0x1003c7534*/
        v36[7] = v52[6]; /*0x1003c753f*/
        v36[6] = v52[5]; /*0x1003c754a*/
        v36[5] = v52[4]; /*0x1003c7555*/
        v36[4] = v52[3]; /*0x1003c7560*/
        v36[3] = v52[2]; /*0x1003c756b*/
        v38 = v52[0]; /*0x1003c756f*/
        v36[2] = v52[1]; /*0x1003c757d*/
        v36[1] = v38; /*0x1003c7581*/
        *v36 = v11; /*0x1003c7585*/
        result = v36; /*0x1003c7588*/
        v33 = v58; /*0x1003c758b*/
        v25 = v59; /*0x1003c758f*/
        goto LABEL_36; /*0x1003c7593*/
      }
      v42 = (_QWORD *)v52[0]; /*0x1003c6fe1*/
      v43 = (__int64 (__fastcall *)(_QWORD, _QWORD))v52[1]; /*0x1003c6fe8*/
      v44 = v52[2]; /*0x1003c6ff6*/
      v45 = v52[3]; /*0x1003c7004*/
      v46 = v52[4]; /*0x1003c7012*/
      v47 = v52[5]; /*0x1003c7020*/
      v48 = v52[6]; /*0x1003c702e*/
      if ( v52[5] | v52[2] ) /*0x1003c7035*/
      {
        v12 = v58; /*0x1003c7048*/
        codexmate_lib::core::relay::config_takeover::takeover::h0751a2fbecf2bbb0(v53, a2); /*0x1003c704c*/
        v13 = v55; /*0x1003c7051*/
        v14 = v53[0]; /*0x1003c7055*/
        qmemcpy(v52, &v53[1], 0x50u); /*0x1003c706f*/
        if ( v53[0] != 11 ) /*0x1003c7076*/
        {
          v39 = v53[11]; /*0x1003c7598*/
          v40 = v55; /*0x1003c759c*/
          qmemcpy(v55 + 1, v52, 0x50u); /*0x1003c75af*/
          *v13 = v14; /*0x1003c75b2*/
          v13[11] = v39; /*0x1003c75b5*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverInspection$GT$::h84deaf6f946ce2ee(&v42); /*0x1003c75c0*/
          result = v40; /*0x1003c75c5*/
          v33 = v12; /*0x1003c75c8*/
          v25 = v59; /*0x1003c75cb*/
          goto LABEL_36; /*0x1003c75cf*/
        }
        qmemcpy(v41, v52, 0x50u); /*0x1003c7092*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(v52); /*0x1003c7098*/
        if ( v41[0] ) /*0x1003c70a7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[1], 24LL * v41[0], 8); /*0x1003c70bd*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v41[3]); /*0x1003c70c9*/
        if ( v41[3] ) /*0x1003c70d8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[4], 24LL * v41[3], 8); /*0x1003c70ee*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v41[6]); /*0x1003c70fa*/
        if ( v41[6] ) /*0x1003c7109*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[7], 24LL * v41[6], 8); /*0x1003c711f*/
      }
      v15 = v5; /*0x1003c7124*/
      v16 = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverInspection$GT$::h84deaf6f946ce2ee(&v42); /*0x1003c712e*/
      LOBYTE(v16) = 1; /*0x1003c7133*/
      v57 = v16; /*0x1003c7135*/
      LOBYTE(v5) = 1; /*0x1003c7138*/
    }
    else
    {
      v15 = v5; /*0x1003c74dc*/
      LOBYTE(v10) = 1; /*0x1003c74df*/
      v57 = v10; /*0x1003c74e1*/
      LODWORD(v5) = 0; /*0x1003c74e4*/
    }
    v20 = v58; /*0x1003c74e7*/
    a1 = v59; /*0x1003c74eb*/
    v18 = v56; /*0x1003c74f9*/
    v19 = v54; /*0x1003c74fd*/
    v17 = v50; /*0x1003c7501*/
    v3 = v51; /*0x1003c7508*/
  }
  else
  {
    qmemcpy(v52, v41, sizeof(v52)); /*0x1003c73e5*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1003c73f6*/
    {
      v42 = v52; /*0x1003c73fc*/
      v43 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1003c740a*/
      v53[6] = 2; /*0x1003c7411*/
      v53[7] = &unk_1015F9B38; /*0x1003c7423*/
      v53[8] = 51; /*0x1003c742a*/
      v53[10] = &unk_1017BDFCA; /*0x1003c7439*/
      v53[11] = &v42; /*0x1003c7444*/
      v53[0] = 0; /*0x1003c7448*/
      v53[1] = &unk_1015F9B38; /*0x1003c7453*/
      v53[2] = 51; /*0x1003c745a*/
      v53[3] = 0; /*0x1003c7465*/
      v53[4] = "src/core/relay/codex_config_reconciler.rs"; /*0x1003c7477*/
      v53[5] = 41; /*0x1003c747e*/
      v53[9] = 0x2500000001LL; /*0x1003c7493*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v60, v53); /*0x1003c74a2*/
    }
    v15 = v5; /*0x1003c74a7*/
    a1 = v52; /*0x1003c74aa*/
    v35 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v52); /*0x1003c74b1*/
    v17 = a3[4]; /*0x1003c74b6*/
    LOBYTE(v35) = 1; /*0x1003c74ba*/
    v57 = v35; /*0x1003c74bc*/
    LODWORD(v5) = 0; /*0x1003c74bf*/
    v20 = 0x8000000000000000LL; /*0x1003c74cc*/
    v18 = v56; /*0x1003c74cf*/
    v19 = v54; /*0x1003c74d3*/
  }
LABEL_18:
  v21 = a3[5]; /*0x1003c7166*/
  v22 = nullptr; /*0x1003c716a*/
  v58 = v20; /*0x1003c716c*/
  v59 = a1; /*0x1003c7176*/
  if ( v20 != 0x8000000000000000LL ) /*0x1003c717a*/
    v22 = a1; /*0x1003c717a*/
  v52[0] = v18; /*0x1003c717e*/
  v52[1] = v15; /*0x1003c7185*/
  v52[2] = v19; /*0x1003c718c*/
  v52[3] = v6; /*0x1003c7193*/
  v52[4] = v17; /*0x1003c719a*/
  v52[5] = v21; /*0x1003c71a1*/
  LODWORD(v56) = v5; /*0x1003c71a8*/
  LOBYTE(v52[8]) = v5; /*0x1003c71ac*/
  v52[6] = v22; /*0x1003c71b3*/
  v52[7] = v3; /*0x1003c71ba*/
  v23 = v49; /*0x1003c71c1*/
  v24 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(v49); /*0x1003c71cb*/
  if ( v24 ) /*0x1003c71d3*/
  {
    v53[0] = 2; /*0x1003c71d5*/
    v53[1] = v24; /*0x1003c71e0*/
    goto LABEL_35; /*0x1003c71e7*/
  }
  codexmate_lib::core::codex_config::update_text::he68e9fad74444d83( /*0x1003c7212*/
    v53,
    *(_QWORD *)(v23 + 56),
    *(_QWORD *)(v23 + 64),
    &anon_3ce6d1417794db0febde534c64082f90_158,
    23,
    v52);
  if ( v53[0] != 11 ) /*0x1003c721f*/
  {
LABEL_35:
    result = v55; /*0x1003c7385*/
    qmemcpy(v55, v53, 0x60u); /*0x1003c7398*/
    v33 = v58; /*0x1003c739b*/
    v25 = v59; /*0x1003c73a2*/
    if ( v58 == 0x8000000000000000LL ) /*0x1003c73a6*/
      return result; /*0x1003c73a6*/
    goto LABEL_36; /*0x1003c73a6*/
  }
  v25 = v59; /*0x1003c7229*/
  if ( !(_BYTE)v57 ) /*0x1003c722d*/
  {
    v26 = codexmate_lib::core::relay::codex_catalog::remove_catalog::hc38a8f1fa697fd2d(v23); /*0x1003c7236*/
    v25 = v59; /*0x1003c723e*/
    if ( v26 ) /*0x1003c7242*/
    {
      v41[0] = v26; /*0x1003c7248*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1003c725d*/
      {
        v27 = v59; /*0x1003c7263*/
        v52[0] = v41; /*0x1003c726d*/
        v52[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1003c727b*/
        v53[6] = 2; /*0x1003c7282*/
        v53[7] = &unk_1015F9B38; /*0x1003c7294*/
        v53[8] = 51; /*0x1003c729b*/
        v53[10] = &unk_1017BE04B; /*0x1003c72aa*/
        v53[11] = v52; /*0x1003c72ae*/
        v53[0] = 0; /*0x1003c72b2*/
        v53[1] = &unk_1015F9B38; /*0x1003c72bd*/
        v53[2] = 51; /*0x1003c72c4*/
        v53[3] = 0; /*0x1003c72cf*/
        v53[4] = "src/core/relay/codex_config_reconciler.rs"; /*0x1003c72e1*/
        v53[5] = 41; /*0x1003c72e8*/
        v53[9] = 0x4800000001LL; /*0x1003c72fd*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v60, v53); /*0x1003c730c*/
        v26 = v41[0]; /*0x1003c7311*/
        v25 = v27; /*0x1003c7318*/
      }
      if ( (v26 & 3) == 1 ) /*0x1003c7323*/
      {
        v28 = v26 - 1; /*0x1003c7325*/
        v29 = *(_QWORD *)(v26 - 1); /*0x1003c7329*/
        v30 = *(_QWORD *)(v26 + 7); /*0x1003c732d*/
        if ( *(_QWORD *)v30 ) /*0x1003c7331*/
          (*(void (__fastcall **)(__int64))v30)(v29); /*0x1003c733c*/
        v31 = *(_QWORD *)(v30 + 8); /*0x1003c733e*/
        if ( v31 ) /*0x1003c7345*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v31, *(_QWORD *)(v30 + 16)); /*0x1003c734e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 24, 8); /*0x1003c7360*/
        v25 = v59; /*0x1003c7365*/
      }
    }
  }
  result = v55; /*0x1003c7369*/
  *((_BYTE *)v55 + 8) = v56; /*0x1003c7370*/
  *result = 11; /*0x1003c7373*/
  v33 = v58; /*0x1003c737a*/
  if ( v58 != 0x8000000000000000LL ) /*0x1003c7381*/
  {
LABEL_36:
    if ( v33 ) /*0x1003c73ab*/
    {
      v34 = result; /*0x1003c73b2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v33, 1); /*0x1003c73b5*/
      return v34; /*0x1003c73ba*/
    }
  }
  return result; /*0x1003c73bd*/
}