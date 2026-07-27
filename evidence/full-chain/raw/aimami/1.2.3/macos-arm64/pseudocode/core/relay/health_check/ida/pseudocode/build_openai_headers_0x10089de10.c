// __ZN13codexmate_lib4core5relay12health_check20build_openai_headers @ 0x10089de10 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::health_check::build_openai_headers::h10c3d169c14e9544(
        void *a1,
        __int64 a2,
        char a3)
{
  __int64 (__fastcall **v4)(); // r12
  char *v5; // r13
  __int64 i; // rax
  char v7; // cl
  char v8; // r15
  void *result; // rax
  _QWORD v10[5]; // [rsp+0h] [rbp-160h] BYREF
  _QWORD v11[12]; // [rsp+28h] [rbp-138h] BYREF
  void *v12; // [rsp+88h] [rbp-D8h]
  __int128 v13; // [rsp+90h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+A0h] [rbp-C0h]
  __int64 (__fastcall **v15)(); // [rsp+B8h] [rbp-A8h] BYREF
  char *v16; // [rsp+C0h] [rbp-A0h]
  __int64 v17; // [rsp+C8h] [rbp-98h]
  __int64 v18; // [rsp+D0h] [rbp-90h]
  __int64 v19; // [rsp+D8h] [rbp-88h]
  __int64 (__fastcall **v20)(); // [rsp+E0h] [rbp-80h] BYREF
  char *v21; // [rsp+E8h] [rbp-78h]
  __int64 v22; // [rsp+F0h] [rbp-70h]
  __int64 v23; // [rsp+F8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+100h] [rbp-60h]
  __int64 (__fastcall **v25)(); // [rsp+108h] [rbp-58h] BYREF
  char *v26; // [rsp+110h] [rbp-50h]
  __int64 v27; // [rsp+118h] [rbp-48h]
  __int64 v28; // [rsp+120h] [rbp-40h] BYREF
  __int64 v29; // [rsp+128h] [rbp-38h]
  _BYTE v30[41]; // [rsp+137h] [rbp-29h] BYREF

  v12 = a1; /*0x10089de2a*/
  LOWORD(v11[11]) = 0; /*0x10089de31*/
  v11[9] = 2; /*0x10089de3a*/
  v11[10] = 0; /*0x10089de45*/
  v11[3] = 0; /*0x10089de50*/
  v11[4] = 8; /*0x10089de5b*/
  v11[5] = 0; /*0x10089de66*/
  v11[6] = 0; /*0x10089de71*/
  v11[7] = 8; /*0x10089de7c*/
  v11[8] = 0; /*0x10089de87*/
  v11[0] = 0; /*0x10089de92*/
  v14 = 0u; /*0x10089dea8*/
  *((_QWORD *)&v13 + 1) = 29; /*0x10089deb3*/
  *(_QWORD *)&v13 = 0; /*0x10089debe*/
  v20 = &off_10196D500; /*0x10089ded0*/
  v21 = (char *)&unk_1015DBAA0; /*0x10089dedb*/
  v22 = 16; /*0x10089dedf*/
  v23 = 0; /*0x10089dee7*/
  LOBYTE(v24) = 0; /*0x10089deef*/
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v15, v11, &v13, &v20); /*0x10089df0c*/
  if ( (_BYTE)v19 == 3 ) /*0x10089df18*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v30, &unk_10196D420, &off_10196D130); /*0x10089e453*/
  v29 = v19; /*0x10089df25*/
  v28 = v18; /*0x10089df30*/
  v27 = v17; /*0x10089df3b*/
  v26 = v16; /*0x10089df4d*/
  v25 = v15; /*0x10089df51*/
  if ( (_BYTE)v19 != 2 ) /*0x10089df57*/
    ((void (__fastcall *)(__int64 *, char *, __int64))v25[4])(&v28, v26, v27); /*0x10089df69*/
  v20 = (__int64 (__fastcall **)())(a2 + 72); /*0x10089df70*/
  v21 = (char *)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10089df7b*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v15, &unk_1017B931C, &v20); /*0x10089df91*/
  v4 = v15; /*0x10089df96*/
  v5 = v16; /*0x10089df9d*/
  if ( v17 ) /*0x10089dfae*/
  {
    for ( i = 0; v17 != i; ++i ) /*0x10089dfb0*/
    {
      v7 = v16[i]; /*0x10089dfd1*/
      if ( (unsigned __int8)v7 > 0x1Fu ) /*0x10089dfda*/
      {
        if ( v7 == 127 ) /*0x10089dfc3*/
          goto LABEL_14; /*0x10089dfc3*/
      }
      else if ( v7 != 9 ) /*0x10089dfdf*/
      {
        goto LABEL_14; /*0x10089dfdf*/
      }
    }
  }
  bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v25, v16, v17); /*0x10089dfe6*/
  LOBYTE(v29) = 0; /*0x10089dff2*/
  v10[0] = v25; /*0x10089dffe*/
  v10[1] = v26; /*0x10089e005*/
  v10[2] = v27; /*0x10089e010*/
  v10[3] = v28; /*0x10089e01b*/
  v10[4] = v29; /*0x10089e026*/
  v23 = 0; /*0x10089e02d*/
  v22 = 0; /*0x10089e035*/
  v21 = (char *)16; /*0x10089e03d*/
  v20 = nullptr; /*0x10089e045*/
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v15, v11, &v20, v10); /*0x10089e066*/
  if ( (_BYTE)v19 == 3 ) /*0x10089e072*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v30, &unk_10196D420, &off_10196D130); /*0x10089e47b*/
  v24 = v19; /*0x10089e07f*/
  v23 = v18; /*0x10089e08a*/
  v22 = v17; /*0x10089e095*/
  v21 = v16; /*0x10089e0a7*/
  v20 = v15; /*0x10089e0ab*/
  if ( (_BYTE)v19 != 2 ) /*0x10089e0b1*/
    ((void (__fastcall *)(__int64 *, char *, __int64))v20[4])(&v23, v21, v22); /*0x10089e0c3*/
LABEL_14:
  if ( v4 ) /*0x10089e0c9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x10089e0d6*/
  if ( a3 ) /*0x10089e0de*/
  {
    v14 = 0; /*0x10089e0e7*/
    v13 = 0; /*0x10089e0ee*/
    v20 = &off_10196D500; /*0x10089e0f5*/
    v21 = "text/event-stream"; /*0x10089e100*/
    v22 = 17; /*0x10089e104*/
    v23 = 0; /*0x10089e10c*/
    LOBYTE(v24) = 0; /*0x10089e114*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v15, v11, &v13, &v20); /*0x10089e131*/
    if ( (_BYTE)v19 == 3 ) /*0x10089e13d*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v30, &unk_10196D420, &off_10196D130); /*0x10089e4a3*/
    v29 = v19; /*0x10089e14a*/
    v28 = v18; /*0x10089e155*/
    v27 = v17; /*0x10089e160*/
    v26 = v16; /*0x10089e172*/
    v25 = v15; /*0x10089e176*/
    if ( (_BYTE)v19 != 2 ) /*0x10089e17c*/
      ((void (__fastcall *)(__int64 *, char *, __int64))v25[4])(&v28, v26, v27); /*0x10089e18e*/
    v14 = 0u; /*0x10089e19c*/
    *((_QWORD *)&v13 + 1) = 2; /*0x10089e1a7*/
    *(_QWORD *)&v13 = 0; /*0x10089e1b2*/
    v20 = &off_10196D500; /*0x10089e1bd*/
    v21 = "identityusernamepasswordfragmentif-matchif-rangelocationNoParentUnixTimeContinueexpectedsegmentsoriginalBorrowed"; /*0x10089e1c8*/
    v22 = 8; /*0x10089e1cc*/
    v23 = 0; /*0x10089e1d4*/
    LOBYTE(v24) = 0; /*0x10089e1dc*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v15, v11, &v13, &v20); /*0x10089e1f9*/
    if ( (_BYTE)v19 == 3 ) /*0x10089e205*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v30, &unk_10196D420, &off_10196D130); /*0x10089e4c8*/
    v29 = v19; /*0x10089e212*/
    v28 = v18; /*0x10089e21d*/
    v27 = v17; /*0x10089e228*/
    v26 = v16; /*0x10089e23a*/
    v25 = v15; /*0x10089e23e*/
    if ( (_BYTE)v19 != 2 ) /*0x10089e244*/
      ((void (__fastcall *)(__int64 *, char *, __int64))v25[4])(&v28, v26, v27); /*0x10089e256*/
  }
  v8 = *(_BYTE *)(a2 + 230); /*0x10089e259*/
  if ( v8 == 1 ) /*0x10089e265*/
  {
    http::header::name::HeaderName::from_static::h9e434d159ca12d45(&v13, "originatorcodex_cli_rs", 10); /*0x10089e27e*/
    v20 = &off_10196D500; /*0x10089e283*/
    v21 = "codex_cli_rs"; /*0x10089e28e*/
    v22 = 12; /*0x10089e292*/
    v23 = 0; /*0x10089e29a*/
    LOBYTE(v24) = 0; /*0x10089e2a2*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v15, v11, &v13, &v20); /*0x10089e2bf*/
    if ( (_BYTE)v19 == 3 ) /*0x10089e2cb*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v30, &unk_10196D420, &off_10196D130); /*0x10089e4ed*/
    v29 = v19; /*0x10089e2d8*/
    v28 = v18; /*0x10089e2e3*/
    v27 = v17; /*0x10089e2ee*/
    v26 = v16; /*0x10089e300*/
    v25 = v15; /*0x10089e304*/
    if ( (_BYTE)v19 != 2 ) /*0x10089e30a*/
      ((void (__fastcall *)(__int64 *, char *, __int64))v25[4])(&v28, v26, v27); /*0x10089e31c*/
    v14 = 0u; /*0x10089e32a*/
    *((_QWORD *)&v13 + 1) = 70; /*0x10089e335*/
    *(_QWORD *)&v13 = 0; /*0x10089e340*/
    v20 = &off_10196D500; /*0x10089e34b*/
    v21 = "codex_cli_rs/0.80.0 AiMaMi"; /*0x10089e356*/
    v22 = 26; /*0x10089e35a*/
    v23 = 0; /*0x10089e362*/
    LOBYTE(v24) = 0; /*0x10089e36a*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v15, v11, &v13, &v20); /*0x10089e387*/
    if ( (_BYTE)v19 == 3 ) /*0x10089e393*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v30, &unk_10196D420, &off_10196D130); /*0x10089e512*/
    v29 = v19; /*0x10089e3a0*/
    v28 = v18; /*0x10089e3ab*/
    v27 = v17; /*0x10089e3b6*/
    v26 = v16; /*0x10089e3c8*/
    v25 = v15; /*0x10089e3cc*/
    if ( (_BYTE)v19 != 2 ) /*0x10089e3d2*/
      ((void (__fastcall *)(__int64 *, char *, __int64))v25[4])(&v28, v26, v27); /*0x10089e3e4*/
  }
  codexmate_lib::core::relay::health_check::apply_extra_headers::hc38218fbdd812ad8( /*0x10089e405*/
    (__int64)v11,
    *(_QWORD *)(a2 + 152),
    *(_QWORD *)(a2 + 160),
    v8 == 1);
  result = v12; /*0x10089e416*/
  qmemcpy(v12, v11, 0x60u); /*0x10089e420*/
  return result; /*0x10089e423*/
}