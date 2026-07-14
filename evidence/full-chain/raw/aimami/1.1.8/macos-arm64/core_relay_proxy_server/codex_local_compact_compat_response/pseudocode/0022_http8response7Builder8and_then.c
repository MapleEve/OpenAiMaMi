// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_compact_compat_response node 0x1007c9f70 depth=1
__int64 __fastcall http::response::Builder::and_then::ha70c815d5f1a0a95(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  char v5; // r13
  __m256i *v6; // rax
  __int64 v7; // r12
  __m256i *v8; // rsi
  __int64 v9; // rax
  __int64 i; // rax
  __int8 v11; // cl
  __int64 v12; // r14
  __int64 v13; // rax
  _BYTE __dst[103]; // [rsp+1h] [rbp-19Fh] BYREF
  __int64 v16; // [rsp+68h] [rbp-138h] BYREF
  char v17; // [rsp+70h] [rbp-130h]
  _BYTE __src[103]; // [rsp+71h] [rbp-12Fh] BYREF
  __m256i v19; // [rsp+D8h] [rbp-C8h] BYREF
  char v20; // [rsp+F8h] [rbp-A8h]
  _BYTE v21[7]; // [rsp+F9h] [rbp-A7h]
  __m256i *v22; // [rsp+100h] [rbp-A0h]
  size_t v23; // [rsp+108h] [rbp-98h]
  __int64 v24; // [rsp+110h] [rbp-90h]
  __int64 v25; // [rsp+118h] [rbp-88h]
  __int64 v26; // [rsp+120h] [rbp-80h]
  __int64 v27; // [rsp+128h] [rbp-78h] BYREF
  __m256i v28; // [rsp+130h] [rbp-70h] BYREF
  _BYTE v29[7]; // [rsp+151h] [rbp-4Fh]
  __int64 v30; // [rsp+158h] [rbp-48h]
  __m256i *v31; // [rsp+160h] [rbp-40h]
  __int64 v32; // [rsp+168h] [rbp-38h]
  __int64 v33[6]; // [rsp+170h] [rbp-30h] BYREF

  v4 = *(_QWORD *)a2; /*0x1007c9f8d*/
  v5 = *(_BYTE *)(a2 + 8); /*0x1007c9f90*/
  memcpy(__dst, (const void *)(a2 + 9), sizeof(__dst)); /*0x1007c9fa8*/
  v27 = *(_QWORD *)(a3 + 40); /*0x1007c9fb1*/
  v26 = *(_QWORD *)(a3 + 32); /*0x1007c9fb9*/
  v25 = *(_QWORD *)(a3 + 24); /*0x1007c9fc1*/
  v24 = *(_QWORD *)(a3 + 16); /*0x1007c9fcc*/
  v6 = *(__m256i **)a3; /*0x1007c9fd3*/
  v23 = *(_QWORD *)(a3 + 8); /*0x1007c9fda*/
  v22 = v6; /*0x1007c9fe1*/
  if ( v4 == 3 ) /*0x1007c9fec*/
  {
    v7 = 3; /*0x1007c9ff5*/
    if ( v24 ) /*0x1007c9ffe*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v24 + 32))(&v27, v25, v26); /*0x1007ca013*/
    goto LABEL_16; /*0x1007ca016*/
  }
  memcpy(__src, (const void *)(a2 + 9), sizeof(__src)); /*0x1007ca02a*/
  v8 = v22; /*0x1007ca02f*/
  v16 = v4; /*0x1007ca03d*/
  v17 = v5; /*0x1007ca044*/
  v33[0] = *(_QWORD *)(a3 + 40); /*0x1007ca04f*/
  v32 = *(_QWORD *)(a3 + 32); /*0x1007ca057*/
  v9 = *(_QWORD *)(a3 + 16); /*0x1007ca05b*/
  v31 = *(__m256i **)(a3 + 24); /*0x1007ca063*/
  v30 = v9; /*0x1007ca067*/
  if ( v23 ) /*0x1007ca06e*/
  {
    for ( i = 0; v23 != i; ++i ) /*0x1007ca070*/
    {
      v11 = v22->i8[i]; /*0x1007ca08d*/
      if ( (unsigned __int8)v11 > 0x1Fu ) /*0x1007ca094*/
      {
        if ( v11 == 127 ) /*0x1007ca083*/
          goto LABEL_10; /*0x1007ca083*/
      }
      else if ( v11 != 9 ) /*0x1007ca099*/
      {
LABEL_10:
        v5 = 5; /*0x1007ca09b*/
        if ( v30 ) /*0x1007ca0a5*/
        {
          v8 = v31; /*0x1007ca0af*/
          (*(void (__fastcall **)(__int64 *, __m256i *, __int64))(v30 + 32))(v33, v31, v32); /*0x1007ca0b7*/
        }
LABEL_13:
        core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799(&v16, v8); /*0x1007ca159*/
        v7 = 3; /*0x1007ca16c*/
        if ( *(_QWORD *)&__src[87] ) /*0x1007ca175*/
        {
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4f3df4ae14586d84(*(const __m128i ***)&__src[87]); /*0x1007ca17a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1007ca18c*/
        }
        goto LABEL_16; /*0x1007ca191*/
      }
    }
  }
  bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e((__int64)&v28, v22, v23); /*0x1007ca0bf*/
  v12 = a3 + 16; /*0x1007ca0c8*/
  v19 = v28; /*0x1007ca0d4*/
  *(_DWORD *)v21 = *(_DWORD *)v29; /*0x1007ca0ff*/
  *(_DWORD *)&v21[3] = *(_DWORD *)&v29[3]; /*0x1007ca108*/
  v20 = 0; /*0x1007ca115*/
  v28.i128[1] = *(_OWORD *)(v12 + 16); /*0x1007ca128*/
  v13 = *(_QWORD *)v12; /*0x1007ca12c*/
  v28.i64[1] = *(_QWORD *)(v12 + 8); /*0x1007ca133*/
  v28.i64[0] = v13; /*0x1007ca137*/
  v8 = &v28; /*0x1007ca142*/
  v5 = 6; /*0x1007ca152*/
  if ( (unsigned __int8)http::header::map::HeaderMap$LT$T$GT$::try_append2::h24e4dbf6c27f1b21(&v16, &v28, &v19) == 2 ) /*0x1007ca157*/
    goto LABEL_13; /*0x1007ca157*/
  v7 = v16; /*0x1007ca193*/
  v5 = v17; /*0x1007ca19a*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1007ca1b5*/
LABEL_16:
  *(_QWORD *)a1 = v7; /*0x1007ca1ba*/
  *(_BYTE *)(a1 + 8) = v5; /*0x1007ca1bd*/
  memcpy((void *)(a1 + 9), __dst, 0x67u); /*0x1007ca1d4*/
  return a1; /*0x1007ca1dc*/
}