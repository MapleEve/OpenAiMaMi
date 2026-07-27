// __ZN13codexmate_lib4core11oauth_login19build_authorize_url @ 0x1008e68f0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::oauth_login::build_authorize_url::hfe7b7e519b50de07(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  _QWORD v18[11]; // [rsp+18h] [rbp-108h] BYREF
  __int64 v19; // [rsp+70h] [rbp-B0h]
  __int64 v20; // [rsp+78h] [rbp-A8h]
  __int64 v21; // [rsp+80h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+88h] [rbp-98h]
  __int64 v23; // [rsp+90h] [rbp-90h]
  _QWORD v24[11]; // [rsp+98h] [rbp-88h] BYREF
  _BYTE v25[41]; // [rsp+F7h] [rbp-29h] BYREF

  v20 = a5; /*0x1008e6904*/
  v19 = a4; /*0x1008e690b*/
  v18[4] = 0; /*0x1008e6925*/
  v18[0] = 0; /*0x1008e6930*/
  v18[2] = 0; /*0x1008e693b*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(v24, v18, &anon_155c4da9b5393270cfa7378e2b52c417_162, 39); /*0x1008e6960*/
  if ( v24[0] == 0x8000000000000000LL ) /*0x1008e6970*/
  {
    LOBYTE(v18[0]) = v24[1]; /*0x1008e6da3*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008e6dca*/
      &anon_155c4da9b5393270cfa7378e2b52c417_163,
      33,
      v18,
      &anon_155c4da9b5393270cfa7378e2b52c417_759,
      &anon_155c4da9b5393270cfa7378e2b52c417_164);
  }
  qmemcpy(v18, v24, sizeof(v18)); /*0x1008e698c*/
  url::Url::query_pairs_mut::h509c3bdf2599cd13(v24, v18); /*0x1008e6999*/
  if ( v24[0] == 0x8000000000000001LL ) /*0x1008e69a5*/
    goto LABEL_20; /*0x1008e69a5*/
  v6 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24); /*0x1008e69b2*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1008e69e7*/
    v6,
    v24[4],
    v24[5],
    v24[6],
    (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_165,
    13,
    (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_159,
    4);
  if ( v24[0] == 0x8000000000000001LL ) /*0x1008e69f3*/
    goto LABEL_20; /*0x1008e69f3*/
  v7 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24); /*0x1008e6a00*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1008e6a35*/
    v7,
    v24[4],
    v24[5],
    v24[6],
    (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_166,
    9,
    (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_167,
    28);
  if ( v24[0] == 0x8000000000000001LL ) /*0x1008e6a41*/
    goto LABEL_20; /*0x1008e6a41*/
  v8 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24); /*0x1008e6a4e*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1008e6a83*/
    v8,
    v24[4],
    v24[5],
    v24[6],
    (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_168,
    12,
    (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_169,
    35);
  if ( v24[0] == 0x8000000000000001LL ) /*0x1008e6a8f*/
    goto LABEL_20; /*0x1008e6a8f*/
  v9 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24); /*0x1008e6a9c*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1008e6ad1*/
    v9,
    v24[4],
    v24[5],
    v24[6],
    (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_170,
    5,
    (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_171,
    35);
  if ( v24[0] == 0x8000000000000001LL ) /*0x1008e6add*/
    goto LABEL_20; /*0x1008e6add*/
  v10 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24); /*0x1008e6aea*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1008e6b14*/
    v10,
    v24[4],
    v24[5],
    v24[6],
    (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_172,
    14,
    a2,
    a3);
  if ( v24[0] == 0x8000000000000001LL ) /*0x1008e6b20*/
    goto LABEL_20; /*0x1008e6b20*/
  v11 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24); /*0x1008e6b2d*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1008e6b62*/
    v11,
    v24[4],
    v24[5],
    v24[6],
    (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_173,
    21,
    (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_174,
    4);
  if ( v24[0] == 0x8000000000000001LL /*0x1008e6c51*/
    || (v12 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24),
        form_urlencoded::append_pair::h6e478387beac77a4(
          v12,
          v24[4],
          v24[5],
          v24[6],
          (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_175,
          26,
          (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_176,
          4),
        v24[0] == 0x8000000000000001LL)
    || (v13 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24),
        form_urlencoded::append_pair::h6e478387beac77a4(
          v13,
          v24[4],
          v24[5],
          v24[6],
          (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_177,
          25,
          (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_176,
          4),
        v24[0] == 0x8000000000000001LL)
    || (v14 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24),
        form_urlencoded::append_pair::h6e478387beac77a4(
          v14,
          v24[4],
          v24[5],
          v24[6],
          (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_178,
          10,
          (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_179,
          12),
        v24[0] == 0x8000000000000001LL) )
  {
LABEL_20:
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1008e6d98*/
      &anon_10420c9971c21f44d230d15b39fb3fec_943,
      41,
      &anon_10420c9971c21f44d230d15b39fb3fec_944);
  }
  v15 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v24); /*0x1008e6c5e*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1008e6c96*/
    v15,
    v24[4],
    v24[5],
    v24[6],
    (unsigned int)&anon_155c4da9b5393270cfa7378e2b52c417_160,
    5,
    v19,
    v20);
  if ( v24[0] != 0x8000000000000001LL ) /*0x1008e6ca2*/
  {
    _$LT$url..UrlQuery$u20$as$u20$core..ops..drop..Drop$GT$::drop::h95cb3aea21492abc(v24); /*0x1008e6cab*/
    if ( v24[0] != 0x8000000000000000LL ) /*0x1008e6cba*/
    {
      if ( v24[0] ) /*0x1008e6cbf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[1], v24[0], 1); /*0x1008e6cca*/
    }
  }
  v21 = 0; /*0x1008e6cdd*/
  v22 = 1; /*0x1008e6ce8*/
  v23 = 0; /*0x1008e6cf3*/
  v24[2] = 1610612768; /*0x1008e6cfe*/
  v24[0] = &v21; /*0x1008e6d0d*/
  v24[1] = &anon_155c4da9b5393270cfa7378e2b52c417_744; /*0x1008e6d1b*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(v18[1], v18[2], v24) ) /*0x1008e6d26*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008e6ded*/
      &anon_155c4da9b5393270cfa7378e2b52c417_745,
      55,
      v25,
      &anon_155c4da9b5393270cfa7378e2b52c417_758,
      &anon_155c4da9b5393270cfa7378e2b52c417_747);
  a1[2] = v23; /*0x1008e6d3a*/
  v16 = v21; /*0x1008e6d3e*/
  a1[1] = v22; /*0x1008e6d4c*/
  *a1 = v16; /*0x1008e6d50*/
  if ( v18[0] ) /*0x1008e6d5d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[1], v18[0], 1); /*0x1008e6d6b*/
  return a1; /*0x1008e6d73*/
}