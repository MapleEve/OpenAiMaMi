// __ZN13codexmate_lib4core5relay12health_check23build_anthropic_headers @ 0x10089e7d0 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::health_check::build_anthropic_headers::hd2ef4cdad6caaa74(
        void *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 i; // rax
  unsigned __int8 v8; // cl
  _BYTE v10[32]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD v11[12]; // [rsp+28h] [rbp-158h] BYREF
  __int128 v12; // [rsp+88h] [rbp-F8h] BYREF
  __int128 v13; // [rsp+98h] [rbp-E8h]
  __int64 v14; // [rsp+A8h] [rbp-D8h]
  __int128 v15; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+C0h] [rbp-C0h]
  __int64 v17; // [rsp+D0h] [rbp-B0h]
  __int128 v18; // [rsp+E0h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+F0h] [rbp-90h]
  __int64 v20; // [rsp+100h] [rbp-80h]
  __int64 v21; // [rsp+108h] [rbp-78h] BYREF
  __int64 v22; // [rsp+110h] [rbp-70h]
  __int64 v23; // [rsp+118h] [rbp-68h]
  __int64 v24; // [rsp+120h] [rbp-60h]
  __int64 v25; // [rsp+128h] [rbp-58h]
  __int64 v26; // [rsp+130h] [rbp-50h]
  __int64 v27; // [rsp+138h] [rbp-48h]
  __int64 v28; // [rsp+140h] [rbp-40h]
  __int64 v29; // [rsp+148h] [rbp-38h] BYREF
  __int64 v30; // [rsp+150h] [rbp-30h]
  _BYTE v31[33]; // [rsp+15Fh] [rbp-21h] BYREF

  LOWORD(v11[11]) = 0; /*0x10089e7eb*/
  v11[9] = 2; /*0x10089e7f4*/
  v11[10] = 0; /*0x10089e7ff*/
  v11[3] = 0; /*0x10089e80a*/
  v11[4] = 8; /*0x10089e815*/
  v11[5] = 0; /*0x10089e820*/
  v11[6] = 0; /*0x10089e82b*/
  v11[7] = 8; /*0x10089e836*/
  v11[8] = 0; /*0x10089e841*/
  v11[0] = 0; /*0x10089e84c*/
  v16 = 0u; /*0x10089e862*/
  *((_QWORD *)&v15 + 1) = 29; /*0x10089e86d*/
  *(_QWORD *)&v15 = 0; /*0x10089e878*/
  *(_QWORD *)&v18 = &off_10196D500; /*0x10089e88a*/
  *((_QWORD *)&v18 + 1) = &unk_1015DBAA0; /*0x10089e898*/
  v19 = 0x10u; /*0x10089e89f*/
  LOBYTE(v20) = 0; /*0x10089e8b5*/
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v21, v11, &v15, &v18); /*0x10089e8d2*/
  if ( (_BYTE)v25 == 3 ) /*0x10089e8db*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v31, &unk_10196D420, &off_10196D130); /*0x10089ecfe*/
  v30 = v25; /*0x10089e8e5*/
  v29 = v24; /*0x10089e8ed*/
  v28 = v23; /*0x10089e8f5*/
  v27 = v22; /*0x10089e901*/
  v26 = v21; /*0x10089e905*/
  if ( (_BYTE)v25 != 2 ) /*0x10089e90b*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v26 + 32))(&v29, v27, v28); /*0x10089e91d*/
  v5 = a2[10]; /*0x10089e920*/
  v6 = a2[11]; /*0x10089e924*/
  if ( v6 ) /*0x10089e92b*/
  {
    for ( i = 0; v6 != i; ++i ) /*0x10089e92d*/
    {
      v8 = *(_BYTE *)(v5 + i); /*0x10089e951*/
      if ( v8 > 0x1Fu ) /*0x10089e958*/
      {
        if ( v8 == 127 ) /*0x10089e943*/
          goto LABEL_14; /*0x10089e943*/
      }
      else if ( v8 != 9 ) /*0x10089e95d*/
      {
        goto LABEL_14; /*0x10089e95d*/
      }
    }
  }
  bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v12, v5, v6); /*0x10089e964*/
  LOBYTE(v14) = 0; /*0x10089e970*/
  v17 = v14; /*0x10089e97e*/
  v16 = v13; /*0x10089e99a*/
  v15 = v12; /*0x10089e9b6*/
  http::header::name::HeaderName::from_static::h9e434d159ca12d45(v10, "x-api-keyanthropic-version2023-06-01", 9); /*0x10089e9d0*/
  v20 = v14; /*0x10089e9dc*/
  v19 = v13; /*0x10089e9f5*/
  v18 = v12; /*0x10089ea11*/
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v21, v11, v10, &v18); /*0x10089ea31*/
  if ( (_BYTE)v25 == 3 ) /*0x10089ea3a*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v31, &unk_10196D420, &off_10196D130); /*0x10089ed4b*/
  v30 = v25; /*0x10089ea44*/
  v29 = v24; /*0x10089ea4c*/
  v28 = v23; /*0x10089ea54*/
  v27 = v22; /*0x10089ea60*/
  v26 = v21; /*0x10089ea64*/
  if ( (_BYTE)v25 != 2 ) /*0x10089ea6a*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v26 + 32))(&v29, v27, v28); /*0x10089ea7c*/
LABEL_14:
  http::header::name::HeaderName::from_static::h9e434d159ca12d45(&v15, "anthropic-version2023-06-01", 17); /*0x10089ea7f*/
  *(_QWORD *)&v18 = &off_10196D500; /*0x10089ea97*/
  *((_QWORD *)&v18 + 1) = "2023-06-01"; /*0x10089eaa5*/
  v19 = 0xAu; /*0x10089eaac*/
  LOBYTE(v20) = 0; /*0x10089eac2*/
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v21, v11, &v15, &v18); /*0x10089eadf*/
  if ( (_BYTE)v25 == 3 ) /*0x10089eae8*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v31, &unk_10196D420, &off_10196D130); /*0x10089ed26*/
  v30 = v25; /*0x10089eaf2*/
  v29 = v24; /*0x10089eafa*/
  v28 = v23; /*0x10089eb02*/
  v27 = v22; /*0x10089eb0e*/
  v26 = v21; /*0x10089eb12*/
  if ( (_BYTE)v25 != 2 ) /*0x10089eb18*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v26 + 32))(&v29, v27, v28); /*0x10089eb2a*/
  if ( a3 ) /*0x10089eb30*/
  {
    v16 = 0; /*0x10089eb39*/
    v15 = 0; /*0x10089eb40*/
    *(_QWORD *)&v18 = &off_10196D500; /*0x10089eb47*/
    *((_QWORD *)&v18 + 1) = "text/event-stream"; /*0x10089eb55*/
    v19 = 0x11u; /*0x10089eb5c*/
    LOBYTE(v20) = 0; /*0x10089eb72*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v21, v11, &v15, &v18); /*0x10089eb8f*/
    if ( (_BYTE)v25 == 3 ) /*0x10089eb98*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v31, &unk_10196D420, &off_10196D130); /*0x10089ed70*/
    v30 = v25; /*0x10089eba2*/
    v29 = v24; /*0x10089ebaa*/
    v28 = v23; /*0x10089ebb2*/
    v27 = v22; /*0x10089ebbe*/
    v26 = v21; /*0x10089ebc2*/
    if ( (_BYTE)v25 != 2 ) /*0x10089ebc8*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v26 + 32))(&v29, v27, v28); /*0x10089ebda*/
    v16 = 0u; /*0x10089ebe8*/
    *((_QWORD *)&v15 + 1) = 2; /*0x10089ebf3*/
    *(_QWORD *)&v15 = 0; /*0x10089ebfe*/
    *(_QWORD *)&v18 = &off_10196D500; /*0x10089ec09*/
    *((_QWORD *)&v18 + 1) = "identityusernamepasswordfragmentif-matchif-rangelocationNoParentUnixTimeContinueexpectedsegmentsoriginalBorrowed"; /*0x10089ec17*/
    v19 = 8u; /*0x10089ec1e*/
    LOBYTE(v20) = 0; /*0x10089ec34*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v21, v11, &v15, &v18); /*0x10089ec51*/
    if ( (_BYTE)v25 == 3 ) /*0x10089ec5a*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v31, &unk_10196D420, &off_10196D130); /*0x10089ed95*/
    v30 = v25; /*0x10089ec64*/
    v29 = v24; /*0x10089ec6c*/
    v28 = v23; /*0x10089ec74*/
    v27 = v22; /*0x10089ec80*/
    v26 = v21; /*0x10089ec84*/
    if ( (_BYTE)v25 != 2 ) /*0x10089ec8a*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v26 + 32))(&v29, v27, v28); /*0x10089ec9c*/
  }
  codexmate_lib::core::relay::health_check::apply_extra_headers::hc38218fbdd812ad8((__int64)v11, a2[19], a2[20], 0); /*0x10089ecb6*/
  qmemcpy(a1, v11, 0x60u); /*0x10089ecca*/
  return a1; /*0x10089ecd0*/
}