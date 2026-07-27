// __ZN13codexmate_lib4core5relay7storage43migrate_legacy_minimax_m3_official_protocol @ 0x1008b1270
// 1.2.3 NEW-delta | codexmate_lib::core::relay::storage::migrate_legacy_minimax_m3_official_protocol | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::storage::migrate_legacy_minimax_m3_official_protocol::hc42c1b9f3e5c76d3(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // edx
  bool v16; // al
  __int64 v17; // rdi
  bool v18; // r13
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // rax
  __int64 v24; // rdx
  _QWORD v26[11]; // [rsp+0h] [rbp-F0h] BYREF
  _QWORD v27[11]; // [rsp+58h] [rbp-98h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-40h]
  __int64 v29; // [rsp+B8h] [rbp-38h]
  __int64 v30; // [rsp+C0h] [rbp-30h]

  if ( a2 ) /*0x1008b1287*/
  {
    v2 = a1; /*0x1008b128d*/
    v3 = a1 + 232 * a2; /*0x1008b1297*/
    v30 = 0; /*0x1008b12ab*/
    while ( 1 ) /*0x1008b12db*/
    {
      v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(v2 + 56), *(_QWORD *)(v2 + 64)); /*0x1008b12db*/
      v27[4] = 0; /*0x1008b12e3*/
      v27[0] = 0; /*0x1008b12eb*/
      v27[2] = 0; /*0x1008b12f6*/
      url::ParseOptions::parse::h7da66aa6bebaf5b6(v26, v27, v4, v5); /*0x1008b130a*/
      if ( !__OFSUB__(0, v26[0]) ) /*0x1008b1316*/
      {
        qmemcpy(v27, v26, sizeof(v27)); /*0x1008b1323*/
        v6 = v27[1]; /*0x1008b1329*/
        if ( !HIDWORD(v27[5]) ) /*0x1008b1333*/
          goto LABEL_16; /*0x1008b1333*/
        if ( v27[2] <= (unsigned __int64)HIDWORD(v27[5]) ) /*0x1008b133f*/
        {
          if ( v27[2] != HIDWORD(v27[5]) ) /*0x1008b134e*/
LABEL_56:
            core::str::slice_error_fail::h480e51fbd8b15eba(v27[1], v27[2], 0, HIDWORD(v27[5]), &off_10196D5E0); /*0x1008b1725*/
        }
        else if ( *(char *)(v27[1] + HIDWORD(v27[5])) <= -65 ) /*0x1008b1347*/
        {
          goto LABEL_56; /*0x1008b1347*/
        }
        if ( HIDWORD(v27[5]) != 5 /*0x1008b13dd*/
          || memcmp((const void *)v27[1], "https", 5u)
          || (url::Url::username::hd711546128392e77(v27), v7)
          || url::Url::password::hd737168add2f42dd(v27)
          || url::Url::query::h1af7b45471000a3f(v27)
          || url::Url::fragment::h2d6f863d83ace37d(v27)
          || (v8 = url::Url::host_str::h951633b861c322f2(v27)) == 0 )
        {
LABEL_16:
          if ( v27[0] ) /*0x1008b13ba*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v27[0], 1); /*0x1008b13c8*/
          goto LABEL_3; /*0x1008b13cd*/
        }
        if ( v9 == 14 ) /*0x1008b13e3*/
        {
          if ( *(_QWORD *)v8 ^ 0x696E696D2E697061LL | *(_QWORD *)(v8 + 6) ^ 0x6F692E78616D696ELL ) /*0x1008b1421*/
            goto LABEL_16; /*0x1008b1424*/
        }
        else
        {
          if ( v9 != 16 ) /*0x1008b13e9*/
            goto LABEL_16; /*0x1008b13e9*/
          v10 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015DA170); /*0x1008b13ef*/
          if ( !_mm_testz_si128(v10, v10) ) /*0x1008b13f7*/
            goto LABEL_16; /*0x1008b13fc*/
        }
        v11 = url::Url::path::hdacd300d547f5011(v27); /*0x1008b1429*/
        v13 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hd16cbd0279b6b068(v11, v12, 47); /*0x1008b1439*/
        if ( !v14 ) /*0x1008b1441*/
        {
          if ( v27[0] ) /*0x1008b149c*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v27[0], 1); /*0x1008b14a6*/
LABEL_32:
          v19 = *(_QWORD *)(v2 + 136); /*0x1008b14ab*/
          if ( v19 ) /*0x1008b14b5*/
          {
            v29 = *(_QWORD *)(v2 + 128); /*0x1008b14c2*/
            v28 = 96 * v19; /*0x1008b14ce*/
            v20 = 0; /*0x1008b14d2*/
            do /*0x1008b14df*/
            {
              v21 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x1008b14f3*/
                      *(_QWORD *)(v29 + v20 + 24),
                      *(_QWORD *)(v29 + v20 + 32));
              v26[0] = 0; /*0x1008b14f8*/
              v26[1] = v22; /*0x1008b1503*/
              v26[2] = v21; /*0x1008b150a*/
              v26[3] = v22; /*0x1008b1511*/
              v26[4] = 0; /*0x1008b1518*/
              v26[5] = v22; /*0x1008b1523*/
              v26[6] = 0x2F0000002FLL; /*0x1008b1534*/
              LOBYTE(v26[7]) = 1; /*0x1008b153b*/
              LOWORD(v26[8]) = 1; /*0x1008b1542*/
              v23 = (_BYTE *)core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(v26); /*0x1008b154e*/
              if ( v23 != nullptr /*0x1008b167c*/
                && v24 == 10
                && (*v23 | (unsigned __int8)(32 * ((unsigned __int8)(*v23 - 65) < 0x1Au))) == 109
                && (v23[1] | (unsigned __int8)(32 * ((unsigned __int8)(v23[1] - 65) < 0x1Au))) == 105
                && (v23[2] | (unsigned __int8)(32 * ((unsigned __int8)(v23[2] - 65) < 0x1Au))) == 110
                && (v23[3] | (unsigned __int8)(32 * ((unsigned __int8)(v23[3] - 65) < 0x1Au))) == 105
                && (v23[4] | (unsigned __int8)(32 * ((unsigned __int8)(v23[4] - 65) < 0x1Au))) == 109
                && (v23[5] | (unsigned __int8)(32 * ((unsigned __int8)(v23[5] - 65) < 0x1Au))) == 97
                && (v23[6] | (unsigned __int8)(32 * ((unsigned __int8)(v23[6] - 65) < 0x1Au))) == 120
                && (v23[7] | (unsigned __int8)(32 * ((unsigned __int8)(v23[7] - 65) < 0x1Au))) == 45
                && (v23[8] | (unsigned __int8)(32 * ((unsigned __int8)(v23[8] - 65) < 0x1Au))) == 109
                && (v23[9] | (unsigned __int8)(32 * ((unsigned __int8)(v23[9] - 65) < 0x1Au))) == 51
                && !*(_BYTE *)(v29 + v20 + 88) )
              {
                *(_BYTE *)(v29 + v20 + 88) = 1; /*0x1008b168c*/
                ++v30; /*0x1008b1692*/
              }
              v20 += 96; /*0x1008b14d7*/
            }
            while ( v28 != v20 ); /*0x1008b14df*/
            if ( codexmate_lib::core::relay::storage::is_minimax_m3_model::hf48f4c7d1559f18b( /*0x1008b16b0*/
                   *(_QWORD *)(v2 + 104),
                   *(_QWORD *)(v2 + 112))
              && !*(_BYTE *)(v2 + 230) )
            {
              *(_BYTE *)(v2 + 230) = 1; /*0x1008b16c3*/
            }
          }
          else if ( codexmate_lib::core::relay::storage::is_minimax_m3_model::hf48f4c7d1559f18b( /*0x1008b16e4*/
                      *(_QWORD *)(v2 + 104),
                      *(_QWORD *)(v2 + 112))
                 && !*(_BYTE *)(v2 + 230) )
          {
            *(_BYTE *)(v2 + 230) = 1; /*0x1008b16f7*/
            ++v30; /*0x1008b16fe*/
          }
          goto LABEL_3; /*0x1008b16ca*/
        }
        if ( v14 != 3 ) /*0x1008b1447*/
          goto LABEL_16; /*0x1008b1447*/
        v15 = 0; /*0x1008b145d*/
        v16 = (*(_WORD *)v13 ^ 0x762F | *(unsigned __int8 *)(v13 + 2) ^ 0x31) != 0; /*0x1008b1462*/
        if ( v27[0] ) /*0x1008b146f*/
        {
          v17 = v6; /*0x1008b1476*/
          v18 = v16; /*0x1008b1479*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v27[0], 1); /*0x1008b147c*/
          v16 = v18; /*0x1008b1481*/
          v15 = 0; /*0x1008b1484*/
        }
        LOBYTE(v15) = v16; /*0x1008b1486*/
        if ( !v15 ) /*0x1008b148a*/
          goto LABEL_32; /*0x1008b148a*/
      }
LABEL_3:
      v2 += 232; /*0x1008b12c3*/
      if ( v2 == v3 ) /*0x1008b12cd*/
        return v30; /*0x1008b12cd*/
    }
  }
  return 0; /*0x1008b1713*/
}