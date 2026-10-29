// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_reset_credits::fetch_history::h11925426de1c6dd5; addr: 0x1009fc9c0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
_QWORD *__fastcall codexmate_lib::core::account_reset_credits::fetch_history::h11925426de1c6dd5(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        double a6)
{
  int v6; // r14d
  __int64 v9; // rax
  char *v10; // rdi
  __int64 v11; // rsi
  _BYTE *v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // r15
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  const char *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int8 *v36; // r13
  size_t v37; // r14
  __int64 v38; // rax
  int v39; // esi
  int v40; // edx
  unsigned int v41; // ecx
  unsigned __int64 v42; // r13
  __int64 v43; // r14
  __int64 v44; // r15
  void *v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rsi
  __int64 v50; // rdi
  _QWORD v51[6]; // [rsp+10h] [rbp-160h] BYREF
  _QWORD v52[4]; // [rsp+40h] [rbp-130h] BYREF
  __int64 v53; // [rsp+60h] [rbp-110h]
  unsigned __int64 v54; // [rsp+68h] [rbp-108h] BYREF
  __int64 v55; // [rsp+70h] [rbp-100h]
  __int64 v56; // [rsp+78h] [rbp-F8h]
  _QWORD v57[12]; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-90h]
  __int64 v59; // [rsp+E8h] [rbp-88h]
  __int64 v60; // [rsp+F0h] [rbp-80h]
  __int64 v61; // [rsp+F8h] [rbp-78h]
  __int64 v62; // [rsp+100h] [rbp-70h]
  __int64 v63; // [rsp+108h] [rbp-68h]
  unsigned __int64 v64; // [rsp+110h] [rbp-60h]
  __int64 v65; // [rsp+118h] [rbp-58h]
  __int64 v66; // [rsp+120h] [rbp-50h] BYREF
  __int64 v67; // [rsp+128h] [rbp-48h]
  unsigned __int64 v68; // [rsp+130h] [rbp-40h]
  __int64 v69; // [rsp+138h] [rbp-38h]
  char v70; // [rsp+147h] [rbp-29h] BYREF

  v6 = a4; /*0x1009fc9d7*/
  codexmate_lib::core::account_reset_credits::validate_cursor::hf8dec41ec24e5a91(v57, a4, a5); /*0x1009fc9f0*/
  if ( LODWORD(v57[0]) == 11 ) /*0x1009fc9fc*/
  {
    codexmate_lib::core::account_reset_credits::fetch_json::hec184fecb2319124( /*0x1009fca22*/
      (unsigned int)v57,
      (unsigned int)&unk_101791EAF,
      69,
      a2,
      a3,
      v6);
    v9 = v57[0]; /*0x1009fca27*/
    v58 = v57[1]; /*0x1009fca35*/
    v59 = v57[2]; /*0x1009fca43*/
    v60 = v57[3]; /*0x1009fca51*/
    v61 = v57[4]; /*0x1009fca5c*/
    if ( v57[0] == 11 ) /*0x1009fca64*/
    {
      v52[0] = v58; /*0x1009fca78*/
      v52[1] = v59; /*0x1009fca7f*/
      v52[2] = v60; /*0x1009fca8a*/
      v52[3] = v61; /*0x1009fca95*/
      v10 = "eventsnext_cursor"; /*0x1009fca9c*/
      v11 = 6; /*0x1009fcaaa*/
      v12 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009fcaaf*/
                       "eventsnext_cursor",
                       6,
                       v52);
      v14 = v12; /*0x1009fcab4*/
      if ( v12 && *v12 == 4 ) /*0x1009fcac4*/
      {
        v10 = "next_cursor"; /*0x1009fcaca*/
        v11 = 11; /*0x1009fcad8*/
        v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009fcadd*/
                "next_cursor",
                11,
                v52);
        if ( !v15 || !*(_BYTE *)v15 ) /*0x1009fcaeb*/
          goto LABEL_18; /*0x1009fcaf0*/
        if ( *(_BYTE *)v15 == 3 ) /*0x1009fcaf9*/
        {
          if ( *(_QWORD *)(v15 + 24) ) /*0x1009fcaff*/
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v54, v15 + 8); /*0x1009fcb18*/
            v13 = v56; /*0x1009fcb2b*/
            v16 = 0; /*0x1009fcb32*/
            v64 = v54; /*0x1009fcb34*/
            v62 = v55; /*0x1009fcb3b*/
            if ( !__OFSUB__(-(__int64)v54, 1) ) /*0x1009fcb3f*/
              v16 = v55; /*0x1009fcb3f*/
LABEL_19:
            codexmate_lib::core::account_reset_credits::validate_cursor::hf8dec41ec24e5a91(v57, v16, v13); /*0x1009fcca1*/
            if ( LODWORD(v57[0]) == 11 ) /*0x1009fccb4*/
            {
              std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1009fccc1*/
              v22 = v21; /*0x1009fccc3*/
              if ( *(_BYTE *)(v21 + 16) == 1 ) /*0x1009fccca*/
              {
                v23 = *(_QWORD *)v21; /*0x1009fccd0*/
                v24 = *(_QWORD *)(v22 + 8); /*0x1009fccd3*/
              }
              else
              {
                v23 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(a6); /*0x1009fd14b*/
                *(_QWORD *)v22 = v23; /*0x1009fd150*/
                *(_QWORD *)(v22 + 8) = v24; /*0x1009fd153*/
                *(_BYTE *)(v22 + 16) = 1; /*0x1009fd157*/
              }
              *(_QWORD *)v22 = v23 + 1; /*0x1009fccdb*/
              memset(&v51[1], 0, 24); /*0x1009fcd01*/
              v51[0] = &xmmword_1016F24C0; /*0x1009fcd0f*/
              v51[4] = v23; /*0x1009fcd16*/
              v51[5] = v24; /*0x1009fcd1d*/
              v66 = 0; /*0x1009fcd24*/
              v67 = 8; /*0x1009fcd2c*/
              v68 = 0; /*0x1009fcd34*/
              v25 = *((_QWORD *)v14 + 3); /*0x1009fcd3c*/
              if ( !v25 ) /*0x1009fcd43*/
              {
LABEL_53:
                v46 = v68; /*0x1009fd0d0*/
                v57[2] = v68; /*0x1009fd0d4*/
                v47 = v66; /*0x1009fd0db*/
                v48 = v67; /*0x1009fd0df*/
                v57[1] = v67; /*0x1009fd0e3*/
                v57[0] = v66; /*0x1009fd0ea*/
                v49 = v54; /*0x1009fd0f1*/
                v50 = v55; /*0x1009fd0f8*/
                v57[3] = v54; /*0x1009fd0ff*/
                v57[4] = v55; /*0x1009fd106*/
                v57[5] = v56; /*0x1009fd114*/
                a1[6] = v56; /*0x1009fd11b*/
                a1[5] = v50; /*0x1009fd11f*/
                a1[4] = v49; /*0x1009fd123*/
                a1[3] = v46; /*0x1009fd127*/
                a1[2] = v48; /*0x1009fd12b*/
                a1[1] = v47; /*0x1009fd12f*/
                *a1 = 11; /*0x1009fd133*/
                _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hba51ad1d951f010e(v51); /*0x1009fd141*/
                goto LABEL_16; /*0x1009fd146*/
              }
              v26 = *((_QWORD *)v14 + 2); /*0x1009fcd49*/
              v27 = 32 * v25; /*0x1009fcd4d*/
              while ( 1 ) /*0x1009fcdc8*/
              {
                v31 = 4; /*0x1009fcdc8*/
                v32 = (const char *)&unk_1016E9914; /*0x1009fcdcd*/
                v33 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009fcdd7*/
                        &unk_1016E9914,
                        4,
                        v26);
                if ( !v33 || *(_BYTE *)v33 != 3 ) /*0x1009fcde8*/
                  break; /*0x1009fcde8*/
                if ( *(_QWORD *)(v33 + 24) == 7 /*0x1009fce0c*/
                  && !(**(_DWORD **)(v33 + 16) ^ 0x6E617267 | *(_DWORD *)(*(_QWORD *)(v33 + 16) + 3LL) ^ 0x6465746E) )
                {
                  v31 = 2; /*0x1009fce10*/
                  v32 = "idcursor"; /*0x1009fce15*/
                  v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009fce1f*/
                          "idcursor",
                          2,
                          v26);
                  if ( !v35 ) /*0x1009fce27*/
                    break; /*0x1009fce27*/
                  if ( *(_BYTE *)v35 != 3 ) /*0x1009fce30*/
                    break; /*0x1009fce30*/
                  v36 = *(unsigned __int8 **)(v35 + 16); /*0x1009fce36*/
                  v37 = *(_QWORD *)(v35 + 24); /*0x1009fce3a*/
                  v32 = (const char *)v36; /*0x1009fce3e*/
                  v31 = v37; /*0x1009fce41*/
                  core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v36, v37); /*0x1009fce44*/
                  if ( v37 > 0x100 || !v34 ) /*0x1009fce59*/
                    break; /*0x1009fce59*/
                  if ( !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6cf8ac836d3e88db( /*0x1009fce6c*/
                                           v51,
                                           v36,
                                           v37) )
                  {
                    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h331ad6372c5f4439(v57, v37, 0, 1, 1); /*0x1009fce90*/
                    v69 = v57[1]; /*0x1009fce9c*/
                    if ( LODWORD(v57[0]) == 1 ) /*0x1009fcea7*/
                    {
                      v43 = v57[2]; /*0x1009fd17d*/
                      v44 = v69; /*0x1009fd184*/
LABEL_58:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v44, v43); /*0x1009fd188*/
                    }
                    v63 = v57[2]; /*0x1009fceb4*/
                    memcpy((void *)v57[2], v36, v37); /*0x1009fcebe*/
                    v38 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009fced2*/
                            "occurred_at",
                            11,
                            v26);
                    if ( v38 /*0x1009fcf05*/
                      && *(_BYTE *)v38 == 3
                      && (chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5(
                            v57,
                            *(_QWORD *)(v38 + 16),
                            *(_QWORD *)(v38 + 24),
                            a6),
                          LODWORD(v57[0])) )
                    {
                      v39 = (SLODWORD(v57[0]) >> 13) - 1; /*0x1009fcf10*/
                      v40 = 0; /*0x1009fcf13*/
                      if ( SLODWORD(v57[0]) >> 13 <= 0 ) /*0x1009fcf17*/
                      {
                        v41 = (1 - (SLODWORD(v57[0]) >> 13)) / 0x190u + 1; /*0x1009fcf2b*/
                        v39 += 400 * v41; /*0x1009fcf33*/
                        v40 = -146097 * v41; /*0x1009fcf35*/
                      }
                      v53 = HIDWORD(v57[0]) /*0x1009fcf86*/
                          + 86400LL
                          * (((v39 / 100) >> 2)
                           + ((1461 * v39) >> 2)
                           + v40
                           + ((LODWORD(v57[0]) >> 4) & 0x1FF)
                           - v39 / 100
                           - 719163);
                      v65 = 1; /*0x1009fcf92*/
                    }
                    else
                    {
                      v65 = 0; /*0x1009fcf98*/
                    }
                    v42 = v68; /*0x1009fcfa0*/
                    if ( v68 == v66 ) /*0x1009fcfa8*/
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he98f55756f891b36(&v66); /*0x1009fcfb2*/
                    v29 = v67; /*0x1009fcd7f*/
                    v30 = 5 * v42; /*0x1009fcd83*/
                    *(_QWORD *)(v67 + 8 * v30) = v65; /*0x1009fcd8c*/
                    *(_QWORD *)(v29 + 8 * v30 + 8) = v53; /*0x1009fcd97*/
                    *(_QWORD *)(v29 + 8 * v30 + 16) = v69; /*0x1009fcda0*/
                    *(_QWORD *)(v29 + 8 * v30 + 24) = v63; /*0x1009fcda9*/
                    *(_QWORD *)(v29 + 8 * v30 + 32) = v37; /*0x1009fcdae*/
                    v68 = v42 + 1; /*0x1009fcdb6*/
                  }
                }
                v26 += 32; /*0x1009fcdba*/
                v27 -= 32; /*0x1009fcdbe*/
                if ( !v27 ) /*0x1009fcdc2*/
                {
                  v57[0] = &v70; /*0x1009fd0bf*/
                  if ( v68 >= 2 ) /*0x1009fd0ca*/
                  {
                    if ( v68 >= 0x15 ) /*0x1009fd165*/
                      core::slice::sort::stable::driftsort_main::hab983c464e7b8783(v67, v68, v57); /*0x1009fd1ad*/
                    else
                      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h4d893826e525ca12( /*0x1009fd173*/
                        v67,
                        v68,
                        1,
                        v57);
                  }
                  goto LABEL_53; /*0x1009fd178*/
                }
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v31, v34); /*0x1009fcfbc*/
              v43 = 49; /*0x1009fcfc1*/
              v44 = 1; /*0x1009fcfc7*/
              v45 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1009fcfd7*/
              if ( !v45 ) /*0x1009fcfdf*/
                goto LABEL_58; /*0x1009fcfdf*/
              qmemcpy(v45, "Reset credit details returned an invalid response", 49); /*0x1009fd035*/
              *a1 = 9; /*0x1009fd03c*/
              a1[1] = 49; /*0x1009fd043*/
              a1[2] = v45; /*0x1009fd04b*/
              a1[3] = 49; /*0x1009fd04f*/
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hda85ca5318e81617(&v66); /*0x1009fd05b*/
              if ( v66 ) /*0x1009fd067*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 40 * v66, 8); /*0x1009fd07a*/
              _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hba51ad1d951f010e(v51); /*0x1009fd086*/
              v28 = v64; /*0x1009fd08b*/
              if ( !(2 * v64) ) /*0x1009fd09a*/
                goto LABEL_16; /*0x1009fd09a*/
            }
            else
            {
              qmemcpy(a1, v57, 0x60u); /*0x1009fcd62*/
              v28 = v64; /*0x1009fcd65*/
              if ( !(2 * v64) ) /*0x1009fcd74*/
              {
LABEL_16:
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v52); /*0x1009fcc69*/
                return a1; /*0x1009fcc70*/
              }
            }
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v28, 1); /*0x1009fd0a9*/
            goto LABEL_16; /*0x1009fd0ae*/
          }
LABEL_18:
          v64 = 0x8000000000000000LL; /*0x1009fcc8a*/
          v54 = 0x8000000000000000LL; /*0x1009fcc98*/
          v16 = 0; /*0x1009fcc9f*/
          goto LABEL_19; /*0x1009fcc9f*/
        }
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11, v13); /*0x1009fcbda*/
      v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1009fcbe9*/
      if ( !v19 ) /*0x1009fcbf1*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x1009fd19f*/
      qmemcpy(v19, "Reset credit details returned an invalid response", 49); /*0x1009fcc47*/
      *a1 = 9; /*0x1009fcc4e*/
      a1[1] = 49; /*0x1009fcc55*/
      a1[2] = v19; /*0x1009fcc5d*/
      a1[3] = 49; /*0x1009fcc61*/
      goto LABEL_16; /*0x1009fcc61*/
    }
    a1[11] = v57[11]; /*0x1009fcb66*/
    a1[10] = v57[10]; /*0x1009fcb71*/
    a1[9] = v57[9]; /*0x1009fcb7c*/
    a1[8] = v57[8]; /*0x1009fcb87*/
    a1[7] = v57[7]; /*0x1009fcb92*/
    v17 = v57[5]; /*0x1009fcb96*/
    a1[6] = v57[6]; /*0x1009fcba4*/
    a1[5] = v17; /*0x1009fcba8*/
    a1[4] = v61; /*0x1009fcbb0*/
    a1[3] = v60; /*0x1009fcbb8*/
    v18 = v58; /*0x1009fcbbc*/
    a1[2] = v59; /*0x1009fcbca*/
    a1[1] = v18; /*0x1009fcbce*/
    *a1 = v9; /*0x1009fcbd2*/
  }
  else
  {
    qmemcpy(a1, v57, 0x60u); /*0x1009fcb57*/
  }
  return a1; /*0x1009fcc78*/
}