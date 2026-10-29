// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_catalog::CatalogReply::into_http_response::hdad3b5a786c0b41e; addr: 0x1005d23f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
void *__fastcall codexmate_lib::core::relay::native_catalog::CatalogReply::into_http_response::hdad3b5a786c0b41e(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // eax
  void (__fastcall **v8)(__int64 *, __int64 (__fastcall **)(), void *); // rax
  __int64 v9; // rsi
  __int16 v10; // r12
  void (__fastcall **v11)(__int64 *, __int64 (__fastcall **)(), void *); // rax
  _WORD v13[64]; // [rsp+0h] [rbp-150h] BYREF
  _QWORD v14[5]; // [rsp+80h] [rbp-D0h] BYREF
  _QWORD v15[4]; // [rsp+A8h] [rbp-A8h] BYREF
  void (__fastcall **v16)(__int64 *, __int64 (__fastcall **)(), void *); // [rsp+C8h] [rbp-88h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+D0h] [rbp-80h]
  void *v18; // [rsp+D8h] [rbp-78h]
  __int64 v19; // [rsp+E0h] [rbp-70h]
  __int64 v20; // [rsp+E8h] [rbp-68h]
  void (__fastcall **v21)(__int64 *, __int64 (__fastcall **)(), void *); // [rsp+F0h] [rbp-60h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+F8h] [rbp-58h]
  void *v23; // [rsp+100h] [rbp-50h]
  __int64 v24; // [rsp+108h] [rbp-48h] BYREF
  __int64 v25; // [rsp+110h] [rbp-40h]
  __int64 v26; // [rsp+118h] [rbp-38h]
  _BYTE v27[41]; // [rsp+127h] [rbp-29h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 96); /*0x1005d240a*/
  if ( v5 == 6 ) /*0x1005d2411*/
  {
    v24 = *(_QWORD *)(a2 + 24); /*0x1005d2421*/
    v23 = *(void **)(a2 + 16); /*0x1005d2429*/
    v8 = *(void (__fastcall ***)(__int64 *, __int64 (__fastcall **)(), void *))a2; /*0x1005d242d*/
    v22 = *(__int64 (__fastcall ***)())(a2 + 8); /*0x1005d2434*/
    v21 = v8; /*0x1005d2438*/
    _$LT$axum..json..Json$LT$T$GT$$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::he29a06df9ea3ad95( /*0x1005d244a*/
      v13,
      &v21);
    v9 = 0; /*0x1005d2453*/
    if ( *(_BYTE *)(a2 + 64) != 2 ) /*0x1005d2459*/
      v9 = a2 + 32; /*0x1005d2459*/
    codexmate_lib::core::relay::native_catalog::response_identity::ha6700a1f5995616c(v14, v9, a3, a4); /*0x1005d246a*/
    v21 = (void (__fastcall **)(__int64 *, __int64 (__fastcall **)(), void *))v13; /*0x1005d246f*/
    v22 = (__int64 (__fastcall **)())v14[0]; /*0x1005d2481*/
    v23 = (void *)v14[1]; /*0x1005d2485*/
    v24 = v14[2]; /*0x1005d2490*/
    v25 = v14[3]; /*0x1005d249b*/
    v26 = v14[4]; /*0x1005d24a6*/
    http::header::name::HdrName::from_static::h5a775c628bc69215( /*0x1005d24c1*/
      &v16,
      "etagutf8itemsendtailload&lt;&gt;list\r\n\r\nsizeheadHttp",
      4,
      &v21);
    if ( (_BYTE)v20 == 3 ) /*0x1005d24ca*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016FD4B3, 23, v27, &unk_101AACFF8, &off_101AAC4F0); /*0x1005d26bb*/
    v25 = v20; /*0x1005d24d4*/
    v24 = v19; /*0x1005d24dc*/
    v23 = v18; /*0x1005d24e4*/
    v22 = v17; /*0x1005d24f3*/
    v21 = v16; /*0x1005d24f7*/
    if ( (_BYTE)v20 != 2 ) /*0x1005d24fd*/
LABEL_17:
      v21[4](&v24, v22, v23); /*0x1005d2625*/
  }
  else
  {
    if ( v5 == 3 ) /*0x1005d251e*/
    {
      v10 = 504; /*0x1005d2554*/
    }
    else if ( v5 == 1 ) /*0x1005d2523*/
    {
      v10 = 502; /*0x1005d2548*/
      if ( (unsigned __int16)(*(_WORD *)(a2 + 98) - 400) < 0xC8u ) /*0x1005d254e*/
        v10 = *(_WORD *)(a2 + 98); /*0x1005d254e*/
    }
    else
    {
      v10 = 502; /*0x1005d2525*/
      if ( !*(_WORD *)(a2 + 96) ) /*0x1005d240a*/
        v10 = 401; /*0x1005d252e*/
    }
    v15[3] = *(_QWORD *)(a2 + 24); /*0x1005d255d*/
    v15[2] = *(_QWORD *)(a2 + 16); /*0x1005d2568*/
    v11 = *(void (__fastcall ***)(__int64 *, __int64 (__fastcall **)(), void *))a2; /*0x1005d256f*/
    v15[1] = *(_QWORD *)(a2 + 8); /*0x1005d2576*/
    v15[0] = v11; /*0x1005d257d*/
    _$LT$axum..json..Json$LT$T$GT$$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::he29a06df9ea3ad95( /*0x1005d2595*/
      v13,
      v15);
    v13[52] = v10; /*0x1005d259a*/
    v21 = (void (__fastcall **)(__int64 *, __int64 (__fastcall **)(), void *))v13; /*0x1005d25a2*/
    v22 = &off_101AAD110; /*0x1005d25ad*/
    v23 = &unk_1016FC268; /*0x1005d25b8*/
    v24 = 8; /*0x1005d25bc*/
    v25 = 0; /*0x1005d25c4*/
    LOBYTE(v26) = 0; /*0x1005d25cc*/
    http::header::name::HdrName::from_static::h5a775c628bc69215(&v16, &unk_1016FD538, 13, &v21); /*0x1005d25e7*/
    if ( (_BYTE)v20 == 3 ) /*0x1005d25f0*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016FD4B3, 23, v27, &unk_101AACFF8, &off_101AAC4F0); /*0x1005d2696*/
    v25 = v20; /*0x1005d25fa*/
    v24 = v19; /*0x1005d2602*/
    v23 = v18; /*0x1005d260a*/
    v22 = v17; /*0x1005d2619*/
    v21 = v16; /*0x1005d261d*/
    if ( (_BYTE)v20 != 2 ) /*0x1005d2623*/
      goto LABEL_17; /*0x1005d2623*/
  }
  qmemcpy(a1, v13, 0x80u); /*0x1005d2647*/
  if ( *(_BYTE *)(a2 + 64) != 2 ) /*0x1005d264e*/
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 32LL))( /*0x1005d2660*/
      a2 + 56,
      *(_QWORD *)(a2 + 40),
      *(_QWORD *)(a2 + 48));
  return a1; /*0x1005d2666*/
}
