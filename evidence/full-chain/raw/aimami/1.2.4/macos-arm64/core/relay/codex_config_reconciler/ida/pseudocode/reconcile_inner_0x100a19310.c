// __ZN13codexmate_lib4core5relay23codex_config_reconciler15reconcile_inner @ 0x100a19310 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_config_reconciler::reconcile_inner::h47bf92b0e0dfae14(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r15
  __int64 v8; // r14
  char v9; // al
  __int64 v10; // rdx
  char v11; // al
  void *v12; // rax
  __int64 v13; // rbx
  char v14; // r8
  unsigned __int64 v15; // rdx
  char v16; // r12
  int v17; // eax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rsi
  _QWORD *v29; // rax
  unsigned __int64 v30; // rsi
  __int64 *v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // r8
  _QWORD v36[12]; // [rsp+20h] [rbp-200h] BYREF
  _QWORD v37[12]; // [rsp+80h] [rbp-1A0h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-140h]
  _QWORD v39[14]; // [rsp+E8h] [rbp-138h] BYREF
  _QWORD v40[14]; // [rsp+158h] [rbp-C8h] BYREF
  _QWORD *v41; // [rsp+1C8h] [rbp-58h]
  _QWORD *v42; // [rsp+1D0h] [rbp-50h]
  __int64 v43; // [rsp+1D8h] [rbp-48h]
  int v44; // [rsp+1E4h] [rbp-3Ch]
  unsigned __int64 v45; // [rsp+1E8h] [rbp-38h]
  char v46; // [rsp+1F6h] [rbp-2Ah] BYREF
  char v47; // [rsp+1F7h] [rbp-29h]

  v41 = a1; /*0x100a19327*/
  v7 = a3[3]; /*0x100a19335*/
  v8 = a3[5]; /*0x100a19339*/
  v9 = a3[8] & (v7 != 0); /*0x100a19343*/
  v43 = a2; /*0x100a19348*/
  if ( v9 != 1 ) /*0x100a1934c*/
    goto LABEL_8; /*0x100a1934c*/
  if ( !v8 ) /*0x100a19355*/
  {
    v8 = 0; /*0x100a1942b*/
LABEL_8:
    v13 = *a3; /*0x100a1942e*/
    v14 = *((_BYTE *)a3 + 65); /*0x100a19432*/
    v44 = 0; /*0x100a19437*/
    v15 = 0x8000000000000000LL; /*0x100a1943e*/
    v16 = 0; /*0x100a19444*/
    goto LABEL_30; /*0x100a19447*/
  }
  v10 = *((unsigned __int8 *)a3 + 65); /*0x100a1935b*/
  v11 = *((_BYTE *)a3 + 65) ^ 1; /*0x100a19362*/
  v47 = *((_BYTE *)a3 + 65); /*0x100a19367*/
  if ( a4 ) /*0x100a1936a*/
  {
    if ( v11 != *(_BYTE *)(a4 + 104) ) /*0x100a19373*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, v10, a4); /*0x100a19379*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1); /*0x100a19388*/
      if ( !v12 ) /*0x100a19390*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 60); /*0x100a19bd5*/
      qmemcpy(v12, "prepared Codex catalog mode does not match the config target", 60); /*0x100a193f4*/
      v36[0] = 9; /*0x100a193fe*/
      v36[1] = 60; /*0x100a19409*/
      v36[2] = v12; /*0x100a19414*/
      v36[3] = 60; /*0x100a1941b*/
      goto LABEL_25; /*0x100a19426*/
    }
    codexmate_lib::core::relay::codex_catalog::write_prepared_catalog::h82f23902aa62a44b(v36, a2); /*0x100a194d5*/
    if ( LODWORD(v36[0]) == 11 ) /*0x100a194e1*/
    {
LABEL_13:
      v42 = (_QWORD *)v36[2]; /*0x100a194e7*/
      v17 = v36[3]; /*0x100a194f9*/
      v38 = v36[3]; /*0x100a19500*/
      v13 = *a3; /*0x100a19507*/
      LOBYTE(v17) = *a3 != 0; /*0x100a1950e*/
      v45 = v36[1]; /*0x100a19511*/
      if ( ((v36[1] != 0x8000000000000000LL) & (unsigned __int8)v17) == 0 ) /*0x100a1951d*/
      {
        LOBYTE(v17) = 1; /*0x100a1986b*/
        v44 = v17; /*0x100a1986d*/
        v16 = 0; /*0x100a19870*/
        goto LABEL_29; /*0x100a19870*/
      }
      codexmate_lib::core::relay::config_takeover::inspect::hfa389aa8ec145514(v40, v43); /*0x100a1952e*/
      result = v40[0]; /*0x100a19533*/
      v39[0] = v40[1]; /*0x100a19541*/
      v39[1] = v40[2]; /*0x100a1954f*/
      v39[2] = v40[3]; /*0x100a1955d*/
      v39[3] = v40[4]; /*0x100a1956b*/
      v39[4] = v40[5]; /*0x100a19579*/
      v39[5] = v40[6]; /*0x100a19587*/
      v39[6] = v40[7]; /*0x100a19595*/
      if ( v40[0] == 11 ) /*0x100a195a0*/
      {
        v36[0] = v39[0]; /*0x100a195b4*/
        v36[1] = v39[1]; /*0x100a195bb*/
        v36[2] = v39[2]; /*0x100a195c9*/
        v36[3] = v39[3]; /*0x100a195d7*/
        v36[4] = v39[4]; /*0x100a195e5*/
        v36[5] = v39[5]; /*0x100a195f3*/
        v36[6] = v39[6]; /*0x100a19601*/
        if ( !(v39[5] | v39[2]) ) /*0x100a1960b*/
        {
LABEL_23:
          v20 = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverInspection$GT$::hd6f922389697db92(v36); /*0x100a196f0*/
          LOBYTE(v20) = 1; /*0x100a196fc*/
          v44 = v20; /*0x100a196fe*/
          v16 = 1; /*0x100a19701*/
LABEL_29:
          v15 = v45; /*0x100a19873*/
          a1 = v42; /*0x100a19881*/
          a2 = v43; /*0x100a19885*/
          v14 = v47; /*0x100a19889*/
          a6 = v38; /*0x100a1988e*/
          goto LABEL_30; /*0x100a1988e*/
        }
        codexmate_lib::core::relay::config_takeover::takeover::he5131c5fddef948d(v40, v43); /*0x100a1961c*/
        v19 = v40[0]; /*0x100a19621*/
        qmemcpy(v39, &v40[1], 0x50u); /*0x100a1963b*/
        if ( v40[0] == 11 ) /*0x100a19642*/
        {
          qmemcpy(v37, v39, 0x50u); /*0x100a1965e*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h76a5fc128caa840b(v39); /*0x100a19664*/
          if ( v37[0] ) /*0x100a19673*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37[1], 24LL * v37[0], 8); /*0x100a19689*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h76a5fc128caa840b(&v37[3]); /*0x100a19695*/
          if ( v37[3] ) /*0x100a196a4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37[4], 24LL * v37[3], 8); /*0x100a196ba*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h76a5fc128caa840b(&v37[6]); /*0x100a196c6*/
          if ( v37[6] ) /*0x100a196d5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37[7], 24LL * v37[6], 8); /*0x100a196eb*/
          goto LABEL_23; /*0x100a196eb*/
        }
        v34 = v40[11]; /*0x100a19b8b*/
        v35 = v41; /*0x100a19b8f*/
        qmemcpy(v41 + 1, v39, 0x50u); /*0x100a19ba3*/
        *v35 = v19; /*0x100a19ba6*/
        v35[11] = v34; /*0x100a19ba9*/
        result = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverInspection$GT$::hd6f922389697db92(v36); /*0x100a19bb4*/
        v30 = v45; /*0x100a19bb9*/
        if ( !v45 ) /*0x100a19bc0*/
          return result; /*0x100a19bc0*/
      }
      else
      {
        v31 = v41; /*0x100a19b06*/
        v41[11] = v40[11]; /*0x100a19b0a*/
        v31[10] = v40[10]; /*0x100a19b12*/
        v32 = v40[8]; /*0x100a19b16*/
        v31[9] = v40[9]; /*0x100a19b21*/
        v31[8] = v32; /*0x100a19b25*/
        v31[7] = v39[6]; /*0x100a19b30*/
        v31[6] = v39[5]; /*0x100a19b3b*/
        v31[5] = v39[4]; /*0x100a19b46*/
        v31[4] = v39[3]; /*0x100a19b51*/
        v31[3] = v39[2]; /*0x100a19b5c*/
        v33 = v39[0]; /*0x100a19b60*/
        v31[2] = v39[1]; /*0x100a19b6e*/
        v31[1] = v33; /*0x100a19b72*/
        *v31 = result; /*0x100a19b76*/
        v30 = v45; /*0x100a19b79*/
        if ( !v45 ) /*0x100a19b80*/
          return result; /*0x100a19b80*/
      }
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v30, 1); /*0x100a19aeb*/
    }
  }
  else
  {
    codexmate_lib::core::relay::codex_catalog::prepare_router_catalog::h626f8f1fe1bcca94( /*0x100a1947c*/
      v40,
      a2,
      a3[2],
      v7,
      a3[4],
      v8,
      v11,
      a3[6],
      a3[7]);
    qmemcpy(v37, &v40[1], sizeof(v37)); /*0x100a1949b*/
    if ( v40[0] == 0x8000000000000000LL ) /*0x100a194a1*/
    {
      qmemcpy(v36, v37, sizeof(v36)); /*0x100a194ba*/
      if ( LODWORD(v36[0]) == 11 ) /*0x100a194c4*/
        goto LABEL_13; /*0x100a194c4*/
    }
    else
    {
      qmemcpy(&v39[1], v37, 0x60u); /*0x100a19720*/
      v39[0] = v40[0]; /*0x100a19723*/
      v39[13] = v40[13]; /*0x100a1972a*/
      codexmate_lib::core::relay::codex_catalog::write_prepared_catalog::h82f23902aa62a44b(v36, a2); /*0x100a19742*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..PreparedRouterCatalog$GT$::h78e9639802cbcd43(v39); /*0x100a1974e*/
      if ( LODWORD(v36[0]) == 11 ) /*0x100a1975a*/
        goto LABEL_13; /*0x100a1975a*/
    }
  }
LABEL_25:
  qmemcpy(v39, v36, 0x60u); /*0x100a19760*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a19787*/
  {
    v37[0] = v39; /*0x100a1978d*/
    v37[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x100a1979b*/
    v40[6] = 2; /*0x100a197a2*/
    v40[7] = &unk_1016848A8; /*0x100a197b4*/
    v40[8] = 51; /*0x100a197bb*/
    v40[10] = &unk_1017D52DC; /*0x100a197cd*/
    v40[11] = v37; /*0x100a197d8*/
    v40[0] = 0; /*0x100a197dc*/
    v40[1] = &unk_1016848A8; /*0x100a197e7*/
    v40[2] = 51; /*0x100a197ee*/
    v40[3] = 0; /*0x100a197f9*/
    v40[4] = "src/core/relay/codex_config_reconciler.rs"; /*0x100a1980b*/
    v40[5] = 41; /*0x100a19812*/
    v40[9] = 0x4200000001LL; /*0x100a19827*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v46, v40); /*0x100a19836*/
  }
  a1 = v39; /*0x100a1983b*/
  v21 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v39); /*0x100a19842*/
  v13 = *a3; /*0x100a19847*/
  LOBYTE(v21) = 1; /*0x100a1984b*/
  v44 = v21; /*0x100a1984d*/
  v16 = 0; /*0x100a19850*/
  v15 = 0x8000000000000000LL; /*0x100a1985d*/
  a2 = v43; /*0x100a19860*/
  v14 = v47; /*0x100a19864*/
LABEL_30:
  v39[4] = a3[2]; /*0x100a19895*/
  v39[5] = v7; /*0x100a198a0*/
  v39[6] = a3[4]; /*0x100a198ab*/
  v39[7] = v8; /*0x100a198b2*/
  v39[0] = v13; /*0x100a198b9*/
  v39[1] = a3[1]; /*0x100a198c4*/
  LOBYTE(v39[10]) = v16; /*0x100a198cb*/
  BYTE1(v39[10]) = v14; /*0x100a198d2*/
  v39[8] = a3[6]; /*0x100a198dd*/
  v39[9] = a3[7]; /*0x100a198e8*/
  v22 = nullptr; /*0x100a198ef*/
  v45 = v15; /*0x100a198f1*/
  v42 = a1; /*0x100a198f8*/
  if ( v15 != 0x8000000000000000LL ) /*0x100a198fc*/
    v22 = a1; /*0x100a198fc*/
  v39[2] = v22; /*0x100a19900*/
  v39[3] = a6; /*0x100a19907*/
  v23 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h75c583493c9998b0(a2); /*0x100a19911*/
  if ( v23 ) /*0x100a19919*/
  {
    v40[0] = 2; /*0x100a1991b*/
    v40[1] = v23; /*0x100a19926*/
LABEL_46:
    qmemcpy(v41, v40, 0x60u); /*0x100a19ab7*/
    goto LABEL_47; /*0x100a19ac7*/
  }
  codexmate_lib::core::codex_config::update_text::h7300749b72be3eb3( /*0x100a1995c*/
    v40,
    *(_QWORD *)(v43 + 56),
    *(_QWORD *)(v43 + 64),
    &anon_d163fe72d6e6e73a137b22815ab75905_93,
    23,
    v39);
  if ( v40[0] != 11 ) /*0x100a19969*/
    goto LABEL_46; /*0x100a19969*/
  if ( !(_BYTE)v44 ) /*0x100a19973*/
  {
    v24 = codexmate_lib::core::relay::codex_catalog::remove_catalog::h475f68a817949e70(v43); /*0x100a1997d*/
    if ( v24 ) /*0x100a19985*/
    {
      v37[0] = v24; /*0x100a1998b*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a199a0*/
      {
        v39[0] = v37; /*0x100a199ad*/
        v39[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100a199bb*/
        v40[6] = 2; /*0x100a199c2*/
        v40[7] = &unk_1016848A8; /*0x100a199d4*/
        v40[8] = 51; /*0x100a199db*/
        v40[10] = &unk_1017D535D; /*0x100a199ed*/
        v40[11] = v39; /*0x100a199f1*/
        v40[0] = 0; /*0x100a199f5*/
        v40[1] = &unk_1016848A8; /*0x100a19a00*/
        v40[2] = 51; /*0x100a19a07*/
        v40[3] = 0; /*0x100a19a12*/
        v40[4] = "src/core/relay/codex_config_reconciler.rs"; /*0x100a19a24*/
        v40[5] = 41; /*0x100a19a2b*/
        v40[9] = 0x6700000001LL; /*0x100a19a40*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v46, v40); /*0x100a19a4f*/
        v24 = v37[0]; /*0x100a19a54*/
      }
      if ( (v24 & 3) == 1 ) /*0x100a19a63*/
      {
        v25 = v24 - 1; /*0x100a19a65*/
        v26 = *(_QWORD *)(v24 - 1); /*0x100a19a69*/
        v27 = *(_QWORD *)(v24 + 7); /*0x100a19a6d*/
        if ( *(_QWORD *)v27 ) /*0x100a19a71*/
          (*(void (__fastcall **)(__int64))v27)(v26); /*0x100a19a7d*/
        v28 = *(_QWORD *)(v27 + 8); /*0x100a19a7f*/
        if ( v28 ) /*0x100a19a86*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x100a19a8f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x100a19aa1*/
      }
    }
  }
  v29 = v41; /*0x100a19aa6*/
  *((_BYTE *)v41 + 8) = v16; /*0x100a19aaa*/
  *v29 = 11; /*0x100a19aae*/
LABEL_47:
  result = 0x8000000000000000LL; /*0x100a19aca*/
  v30 = v45; /*0x100a19ad4*/
  if ( v45 != 0x8000000000000000LL && v45 ) /*0x100a19ae0*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v30, 1); /*0x100a19ae0*/
  return result; /*0x100a19af0*/
}