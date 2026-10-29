// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::sessions::health::clean_catalog_ghost_threads::hcc1b8ed0154ea3b1; addr: 0x100b1bfa0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_QWORD *__fastcall codexmate_lib::core::sessions::health::clean_catalog_ghost_threads::hcc1b8ed0154ea3b1(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __m128i a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  double v11; // xmm0_8
  __int64 v12; // rax
  const __m128i **v13; // rdi
  int v14; // ecx
  __m128i si128; // xmm0
  unsigned __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rcx
  const __m128i *v19; // rcx
  __int64 v21; // rcx
  const __m128i *v22; // rcx
  int v23; // r10d
  __m128i v24; // xmm0
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r11
  __int64 v27; // r11
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  const __m128i **v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD v36[13]; // [rsp+8h] [rbp-358h] BYREF
  const __m128i *v37[6]; // [rsp+70h] [rbp-2F0h] BYREF
  _QWORD v38[14]; // [rsp+A0h] [rbp-2C0h] BYREF
  _QWORD v39[6]; // [rsp+110h] [rbp-250h] BYREF
  const __m128i *v40; // [rsp+140h] [rbp-220h] BYREF
  __int64 v41; // [rsp+148h] [rbp-218h]
  __int64 v42; // [rsp+150h] [rbp-210h]
  __int64 v43; // [rsp+158h] [rbp-208h]
  __int64 v44; // [rsp+160h] [rbp-200h]
  __int64 v45; // [rsp+168h] [rbp-1F8h]
  __int8 *v46; // [rsp+170h] [rbp-1F0h]
  __int64 v47; // [rsp+178h] [rbp-1E8h]
  __int64 v48; // [rsp+180h] [rbp-1E0h]
  const __m128i *v49; // [rsp+188h] [rbp-1D8h]
  __int64 v50; // [rsp+190h] [rbp-1D0h]
  __int64 v51; // [rsp+198h] [rbp-1C8h]
  __int64 v52; // [rsp+1A0h] [rbp-1C0h]
  __int64 v53; // [rsp+1A8h] [rbp-1B8h]
  __int64 v54; // [rsp+1B0h] [rbp-1B0h]
  __int64 v55; // [rsp+1B8h] [rbp-1A8h] BYREF
  __int64 v56; // [rsp+1C0h] [rbp-1A0h]
  __int64 v57; // [rsp+1C8h] [rbp-198h]
  const __m128i *v58; // [rsp+1D0h] [rbp-190h] BYREF
  _QWORD v59[12]; // [rsp+1D8h] [rbp-188h] BYREF
  __int64 v60; // [rsp+238h] [rbp-128h]
  __int64 v61; // [rsp+240h] [rbp-120h]
  __int64 v62; // [rsp+248h] [rbp-118h]
  const __m128i *v63; // [rsp+250h] [rbp-110h]
  const __m128i *v64; // [rsp+258h] [rbp-108h]
  _QWORD v65[13]; // [rsp+260h] [rbp-100h] BYREF
  __int64 v66; // [rsp+2C8h] [rbp-98h]
  __int64 v67; // [rsp+2D0h] [rbp-90h]
  __int64 v68; // [rsp+2D8h] [rbp-88h]
  const __m128i *v69; // [rsp+2E0h] [rbp-80h]
  const __m128i *v70; // [rsp+2E8h] [rbp-78h]
  __int8 *v71; // [rsp+2F0h] [rbp-70h]
  __int16 v72; // [rsp+2F8h] [rbp-68h]
  __int64 v73; // [rsp+300h] [rbp-60h]
  const __m128i *v74; // [rsp+308h] [rbp-58h] BYREF
  __int64 v75; // [rsp+310h] [rbp-50h]
  __int64 v76; // [rsp+318h] [rbp-48h]
  __int64 v77; // [rsp+320h] [rbp-40h]
  __int64 v78; // [rsp+328h] [rbp-38h]
  __int64 v79; // [rsp+330h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::catalog_db_path::heabc70b49956984d( /*0x100b1bfc1*/
    v65,
    (__int64)a2,
    a3,
    *(double *)a4.i64);
  v5 = v65[0]; /*0x100b1bfc6*/
  v6 = v65[1]; /*0x100b1bfcd*/
  v7 = v65[2]; /*0x100b1bfd4*/
  v8 = v65[3]; /*0x100b1bfdb*/
  if ( v65[0] != 11 ) /*0x100b1bfe6*/
  {
    a1[11] = v65[11]; /*0x100b1c03a*/
    a1[10] = v65[10]; /*0x100b1c045*/
    a1[9] = v65[9]; /*0x100b1c050*/
    a1[8] = v65[8]; /*0x100b1c05b*/
    a1[7] = v65[7]; /*0x100b1c066*/
    a1[6] = v65[6]; /*0x100b1c071*/
    v9 = v65[4]; /*0x100b1c075*/
    a1[5] = v65[5]; /*0x100b1c083*/
    a1[4] = v9; /*0x100b1c087*/
    a1[2] = v7; /*0x100b1c08b*/
    a1[3] = v8; /*0x100b1c08f*/
    *a1 = v5; /*0x100b1c093*/
    a1[1] = v6; /*0x100b1c096*/
    return a1; /*0x100b1c09a*/
  }
  if ( v65[1] != 0x8000000000000000LL ) /*0x100b1bff9*/
  {
    codexmate_lib::core::sessions::reconcile_official_thread_rows::ha8b5f08e4b547d3b(v65, (size_t)a2, a4); /*0x100b1c0a9*/
    v10 = v65[0]; /*0x100b1c0ae*/
    v58 = (const __m128i *)v65[1]; /*0x100b1c0bc*/
    v59[0] = v65[2]; /*0x100b1c0ca*/
    v59[1] = v65[3]; /*0x100b1c0d8*/
    v59[2] = v65[4]; /*0x100b1c0e6*/
    v59[3] = v65[5]; /*0x100b1c0f4*/
    v59[4] = v65[6]; /*0x100b1c102*/
    if ( v65[0] != 11 ) /*0x100b1c10d*/
      goto LABEL_11; /*0x100b1c10d*/
    v37[0] = v58; /*0x100b1c121*/
    v37[1] = (const __m128i *)v59[0]; /*0x100b1c128*/
    v37[2] = (const __m128i *)v59[1]; /*0x100b1c136*/
    v37[3] = (const __m128i *)v59[2]; /*0x100b1c144*/
    v37[4] = (const __m128i *)v59[3]; /*0x100b1c152*/
    v37[5] = (const __m128i *)v59[4]; /*0x100b1c160*/
    v11 = codexmate_lib::core::sessions::health::load_complete_health_thread_rows::h96c8f87d8aecdda3(v65, a2, v37, a4); /*0x100b1c178*/
    v10 = v65[0]; /*0x100b1c17d*/
    v58 = (const __m128i *)v65[1]; /*0x100b1c18b*/
    v59[0] = v65[2]; /*0x100b1c199*/
    v59[1] = v65[3]; /*0x100b1c1a7*/
    v59[2] = v65[4]; /*0x100b1c1b5*/
    v59[3] = v65[5]; /*0x100b1c1c3*/
    v59[4] = v65[6]; /*0x100b1c1d1*/
    if ( v65[0] != 11 ) /*0x100b1c1dc*/
    {
LABEL_11:
      a1[11] = v65[11]; /*0x100b1c3e3*/
      a1[10] = v65[10]; /*0x100b1c3ee*/
      a1[9] = v65[9]; /*0x100b1c3f9*/
      v18 = v65[7]; /*0x100b1c3fd*/
      a1[8] = v65[8]; /*0x100b1c40b*/
      a1[7] = v18; /*0x100b1c40f*/
      a1[6] = v59[4]; /*0x100b1c41a*/
      a1[5] = v59[3]; /*0x100b1c425*/
      a1[4] = v59[2]; /*0x100b1c430*/
      a1[3] = v59[1]; /*0x100b1c43b*/
      v19 = v58; /*0x100b1c43f*/
      a1[2] = v59[0]; /*0x100b1c44d*/
      a1[1] = v19; /*0x100b1c451*/
      *a1 = v10; /*0x100b1c455*/
      if ( !v6 ) /*0x100b1c45b*/
        return a1; /*0x100b1c45b*/
LABEL_12:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x100b1c45d*/
      return a1; /*0x100b1c468*/
    }
    v40 = v58; /*0x100b1c1f0*/
    v41 = v59[0]; /*0x100b1c1f7*/
    v42 = v59[1]; /*0x100b1c205*/
    v43 = v59[2]; /*0x100b1c213*/
    v44 = v59[3]; /*0x100b1c221*/
    v45 = v59[4]; /*0x100b1c22f*/
    codexmate_lib::core::sessions::history::HistoryInventory::load::h6e6b5da7cbfd2061(v38, a2); /*0x100b1c240*/
    v12 = v38[0]; /*0x100b1c245*/
    v74 = (const __m128i *)v38[1]; /*0x100b1c253*/
    v75 = v38[2]; /*0x100b1c25e*/
    v76 = v38[3]; /*0x100b1c269*/
    v77 = v38[4]; /*0x100b1c274*/
    v78 = v38[5]; /*0x100b1c27f*/
    v79 = v38[6]; /*0x100b1c28a*/
    if ( v38[0] != 11 ) /*0x100b1c292*/
    {
      a1[11] = v38[11]; /*0x100b1c489*/
      a1[10] = v38[10]; /*0x100b1c494*/
      a1[9] = v38[9]; /*0x100b1c49f*/
      v21 = v38[7]; /*0x100b1c4a3*/
      a1[8] = v38[8]; /*0x100b1c4b1*/
      a1[7] = v21; /*0x100b1c4b5*/
      a1[6] = v79; /*0x100b1c4bd*/
      a1[5] = v78; /*0x100b1c4c5*/
      a1[4] = v77; /*0x100b1c4cd*/
      a1[3] = v76; /*0x100b1c4d5*/
      v22 = v74; /*0x100b1c4d9*/
      a1[2] = v75; /*0x100b1c4e1*/
      a1[1] = v22; /*0x100b1c4e5*/
      *a1 = v12; /*0x100b1c4e9*/
      goto LABEL_30; /*0x100b1c4ec*/
    }
    v39[0] = v74; /*0x100b1c2a0*/
    v39[1] = v75; /*0x100b1c2a7*/
    v39[2] = v76; /*0x100b1c2b2*/
    v39[3] = v77; /*0x100b1c2bd*/
    v39[4] = v78; /*0x100b1c2c8*/
    v39[5] = v79; /*0x100b1c2d3*/
    codexmate_lib::core::sessions::history::HistoryInventory::health::h918049cd3d7086c0(v65, v39, a2, v11); /*0x100b1c2eb*/
    qmemcpy(v36, &v65[1], 0x60u); /*0x100b1c30a*/
    if ( !v65[0] ) /*0x100b1c310*/
    {
      qmemcpy(a1, v36, 0x60u); /*0x100b1c500*/
      a2 = &v36[12]; /*0x100b1c500*/
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf4e00578ec214d6d(&v74); /*0x100b1c507*/
      goto LABEL_30; /*0x100b1c50c*/
    }
    v64 = v70; /*0x100b1c31a*/
    v63 = v69; /*0x100b1c325*/
    v62 = v68; /*0x100b1c333*/
    v61 = v67; /*0x100b1c348*/
    v60 = v66; /*0x100b1c34f*/
    qmemcpy(v59, v36, sizeof(v59)); /*0x100b1c369*/
    v58 = (const __m128i *)v65[0]; /*0x100b1c36c*/
    v13 = &v74; /*0x100b1c373*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf4e00578ec214d6d(&v74); /*0x100b1c377*/
    v14 = ~_mm_movemask_epi8(_mm_load_si128(v40)); /*0x100b1c392*/
    si128 = _mm_load_si128((const __m128i *)v59[11]); /*0x100b1c3a2*/
    if ( v60 ) /*0x100b1c3a9*/
    {
      v16 = (24 * v60 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b1c3bb*/
      v53 = v60 + v16 + 17; /*0x100b1c3c4*/
      v13 = (const __m128i **)(v59[11] - v16); /*0x100b1c3ce*/
      v17 = 16; /*0x100b1c3d1*/
    }
    else
    {
      v17 = 0; /*0x100b1c511*/
    }
    v46 = &v40->i8[v41 + 1]; /*0x100b1c519*/
    v49 = v40 + 1; /*0x100b1c524*/
    v48 = v43; /*0x100b1c532*/
    v50 = v62; /*0x100b1c540*/
    v51 = v59[11] + 16LL; /*0x100b1c54b*/
    v23 = ~_mm_movemask_epi8(si128); /*0x100b1c557*/
    v52 = v59[11] + v60 + 1; /*0x100b1c55f*/
    v24 = _mm_load_si128((const __m128i *)v59[5]); /*0x100b1c574*/
    v25 = v59[8]; /*0x100b1c578*/
    v47 = v59[8]; /*0x100b1c57f*/
    if ( v59[6] ) /*0x100b1c589*/
    {
      v26 = (24LL * v59[6] + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b1c597*/
      v54 = v59[6] + v26 + 17; /*0x100b1c5a0*/
      v25 = v59[5] - v26; /*0x100b1c5aa*/
      v27 = 16; /*0x100b1c5ad*/
    }
    else
    {
      v27 = 0; /*0x100b1c5b5*/
    }
    v65[8] = v17; /*0x100b1c5b8*/
    v65[9] = v53; /*0x100b1c5c6*/
    v65[10] = v13; /*0x100b1c5cd*/
    v65[11] = v59[11]; /*0x100b1c5d4*/
    v65[12] = v51; /*0x100b1c5e2*/
    v66 = v52; /*0x100b1c5f0*/
    LOWORD(v67) = v23; /*0x100b1c5f7*/
    v68 = v50; /*0x100b1c606*/
    v69 = v40; /*0x100b1c60d*/
    v70 = v49; /*0x100b1c618*/
    v71 = v46; /*0x100b1c623*/
    v72 = v14; /*0x100b1c627*/
    v73 = v48; /*0x100b1c632*/
    v65[0] = v27; /*0x100b1c636*/
    v65[1] = v54; /*0x100b1c644*/
    v65[2] = v25; /*0x100b1c64b*/
    v65[3] = v59[5]; /*0x100b1c657*/
    v65[4] = v59[5] + 16LL; /*0x100b1c662*/
    v65[5] = v59[5] + v59[6] + 1LL; /*0x100b1c669*/
    LOWORD(v65[6]) = ~(unsigned __int16)_mm_movemask_epi8(v24); /*0x100b1c676*/
    v65[7] = v47; /*0x100b1c684*/
    _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::ha0b0e543044341d2( /*0x100b1c699*/
      v39,
      v65);
    v79 = v59[4]; /*0x100b1c6a5*/
    v78 = v59[3]; /*0x100b1c6b0*/
    v77 = v59[2]; /*0x100b1c6bb*/
    v76 = v59[1]; /*0x100b1c6c6*/
    v75 = v59[0]; /*0x100b1c6d8*/
    v74 = v58; /*0x100b1c6dc*/
    codexmate_lib::core::sessions::open_codex_db::h89dffd484138ba2b(v65, v7, v8, 0); /*0x100b1c6ef*/
    if ( (_BYTE)v66 == 3 ) /*0x100b1c70c*/
    {
      qmemcpy(v36, v65, 0x60u); /*0x100b1c716*/
      qmemcpy(a1, v36, 0x60u); /*0x100b1c724*/
      a2 = &v36[12]; /*0x100b1c724*/
    }
    else
    {
      qmemcpy(v36, v65, sizeof(v36)); /*0x100b1c734*/
      v38[13] = v66; /*0x100b1c743*/
      qmemcpy(v38, v36, 0x68u); /*0x100b1c761*/
      a2 = v38; /*0x100b1c77c*/
      codexmate_lib::core::sessions::health::catalog_local_ghost_ids::hc01c8cbab8e80a57(v65, v38, v39, &v74); /*0x100b1c77f*/
      v30 = v65[0]; /*0x100b1c784*/
      v36[0] = v65[1]; /*0x100b1c792*/
      v36[1] = v65[2]; /*0x100b1c7a0*/
      v36[2] = v65[3]; /*0x100b1c7ae*/
      if ( v65[0] == 11 ) /*0x100b1c7b9*/
      {
        v55 = v36[0]; /*0x100b1c7cd*/
        v56 = v36[1]; /*0x100b1c7d4*/
        v57 = v36[2]; /*0x100b1c7e2*/
        if ( v36[2] ) /*0x100b1c7ec*/
        {
          a2 = v38; /*0x100b1c800*/
          codexmate_lib::core::sessions::health::apply_catalog_missing_mark::hffa14d03f8883a4d( /*0x100b1c807*/
            v65,
            (__int64)v38,
            v56,
            v36[2],
            v28,
            v29);
          v31 = v65[3]; /*0x100b1c80c*/
          a1[3] = v65[2]; /*0x100b1c81a*/
          v32 = v65[0]; /*0x100b1c81e*/
          a1[2] = v65[1]; /*0x100b1c82c*/
          a1[1] = v32; /*0x100b1c830*/
          a1[4] = v31; /*0x100b1c834*/
          a1[5] = 0; /*0x100b1c838*/
          *a1 = 11; /*0x100b1c840*/
          core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(&v55); /*0x100b1c84e*/
          core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v38, *(double *)v24.i64); /*0x100b1c85a*/
          v33 = &v58; /*0x100b1c85f*/
LABEL_29:
          core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$codexmate_lib..core..sessions..RolloutInfo$GT$$GT$::h2d650e509c20b0dc(v33); /*0x100b1c934*/
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87dcd97a83e749a4(v39); /*0x100b1c940*/
LABEL_30:
          core::ptr::drop_in_place$LT$hashbrown..raw..RawTable$LT$$LP$alloc..string..String$C$codexmate_lib..core..sessions..CodexThreadRow$RP$$GT$$GT$::h8dfa37bcfe2b7af5( /*0x100b1c945*/
            &v40,
            a2);
          if ( !v6 ) /*0x100b1c954*/
            return a1; /*0x100b1c954*/
          goto LABEL_12; /*0x100b1c954*/
        }
        a1[1] = 0; /*0x100b1c8e9*/
        a1[2] = 8; /*0x100b1c8f1*/
        a1[3] = 0; /*0x100b1c8f9*/
        a1[4] = 0; /*0x100b1c901*/
        a1[5] = 0; /*0x100b1c909*/
        *a1 = 11; /*0x100b1c911*/
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(&v55); /*0x100b1c91f*/
      }
      else
      {
        a1[11] = v65[11]; /*0x100b1c872*/
        a1[10] = v65[10]; /*0x100b1c87d*/
        a1[9] = v65[9]; /*0x100b1c888*/
        a1[8] = v65[8]; /*0x100b1c893*/
        a1[7] = v65[7]; /*0x100b1c89e*/
        a1[6] = v65[6]; /*0x100b1c8a9*/
        v34 = v65[4]; /*0x100b1c8ad*/
        a1[5] = v65[5]; /*0x100b1c8bb*/
        a1[4] = v34; /*0x100b1c8bf*/
        a1[3] = v36[2]; /*0x100b1c8ca*/
        v35 = v36[0]; /*0x100b1c8ce*/
        a1[2] = v36[1]; /*0x100b1c8dc*/
        a1[1] = v35; /*0x100b1c8e0*/
        *a1 = v30; /*0x100b1c8e4*/
      }
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v38, *(double *)v24.i64); /*0x100b1c92b*/
    }
    v33 = &v74; /*0x100b1c930*/
    goto LABEL_29; /*0x100b1c930*/
  }
  a1[1] = 0; /*0x100b1bfff*/
  a1[2] = 8; /*0x100b1c007*/
  a1[3] = 0; /*0x100b1c00f*/
  a1[4] = 0; /*0x100b1c017*/
  a1[5] = 0; /*0x100b1c01f*/
  *a1 = 11; /*0x100b1c027*/
  return a1; /*0x100b1c470*/
}