// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_compact_compat_response node 0x1007ca260 depth=1
__int64 *__fastcall http::response::Builder::and_then::hc7e53d9436f348cd(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r14
  char v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rsi
  size_t v8; // rdx
  const void *v9; // r15
  size_t v10; // r12
  _OWORD *v11; // rsi
  __int64 v12; // rax
  unsigned __int8 v13; // cl
  __int64 *v14; // r14
  _BYTE __dst[103]; // [rsp+29h] [rbp-177h] BYREF
  __int64 v17; // [rsp+90h] [rbp-110h] BYREF
  char v18; // [rsp+98h] [rbp-108h]
  _BYTE __src[103]; // [rsp+99h] [rbp-107h] BYREF
  __int64 *v20; // [rsp+100h] [rbp-A0h]
  _OWORD v21[2]; // [rsp+108h] [rbp-98h] BYREF
  _BYTE v22[7]; // [rsp+129h] [rbp-77h]
  __int16 v23; // [rsp+130h] [rbp-70h] BYREF
  _BYTE v24[38]; // [rsp+132h] [rbp-6Eh]
  __int128 v25; // [rsp+158h] [rbp-48h]
  __int128 v26; // [rsp+168h] [rbp-38h] BYREF

  v20 = a1; /*0x1007ca27a*/
  v4 = *(_QWORD *)a2; /*0x1007ca281*/
  v5 = *(_BYTE *)(a2 + 8); /*0x1007ca284*/
  memcpy(__dst, (const void *)(a2 + 9), sizeof(__dst)); /*0x1007ca29c*/
  v6 = 3; /*0x1007ca2a1*/
  if ( v4 == 3 ) /*0x1007ca2aa*/
    goto LABEL_17; /*0x1007ca2aa*/
  memcpy(__src, (const void *)(a2 + 9), sizeof(__src)); /*0x1007ca2c2*/
  v7 = *a3; /*0x1007ca2c7*/
  v8 = a3[1]; /*0x1007ca2cb*/
  v9 = (const void *)a3[2]; /*0x1007ca2d0*/
  v10 = a3[3]; /*0x1007ca2d5*/
  v17 = v4; /*0x1007ca2da*/
  v18 = v5; /*0x1007ca2e1*/
  http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(&v23, v7, v8); /*0x1007ca2ec*/
  if ( (_BYTE)v23 ) /*0x1007ca2f5*/
  {
    core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799(&v17, v7); /*0x1007ca2fe*/
    v6 = 3; /*0x1007ca30a*/
    v5 = 4; /*0x1007ca30f*/
    if ( *(_QWORD *)&__src[87] ) /*0x1007ca315*/
      goto LABEL_15; /*0x1007ca315*/
    goto LABEL_17; /*0x1007ca315*/
  }
  v11 = *(_OWORD **)&v24[14]; /*0x1007ca334*/
  v26 = *(_OWORD *)&v24[22]; /*0x1007ca347*/
  v25 = *(_OWORD *)&v24[6]; /*0x1007ca34b*/
  if ( !v10 ) /*0x1007ca352*/
  {
LABEL_13:
    bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e((__int64)v21, v9, v10); /*0x1007ca3a0*/
    *(_OWORD *)v24 = *(_OWORD *)((char *)v21 + 2); /*0x1007ca3c0*/
    *(_QWORD *)&v24[16] = *(_QWORD *)((char *)&v21[1] + 2); /*0x1007ca3d6*/
    *(_QWORD *)&v24[22] = *((_QWORD *)&v21[1] + 1); /*0x1007ca3de*/
    *(_DWORD *)&v24[31] = *(_DWORD *)v22; /*0x1007ca3e5*/
    *(_DWORD *)&v24[34] = *(_DWORD *)&v22[3]; /*0x1007ca3eb*/
    v23 = v21[0]; /*0x1007ca3ee*/
    v24[30] = 0; /*0x1007ca3f2*/
    v21[1] = v26; /*0x1007ca402*/
    v21[0] = v25; /*0x1007ca418*/
    v11 = v21; /*0x1007ca426*/
    v5 = 6; /*0x1007ca436*/
    if ( (unsigned __int8)http::header::map::HeaderMap$LT$T$GT$::try_append2::h24e4dbf6c27f1b21(&v17, v21, &v23) == 2 ) /*0x1007ca43b*/
      goto LABEL_14; /*0x1007ca43b*/
    v6 = v17; /*0x1007ca479*/
    v5 = v18; /*0x1007ca480*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1007ca494*/
    goto LABEL_17; /*0x1007ca494*/
  }
  v12 = 0; /*0x1007ca354*/
  while ( 1 ) /*0x1007ca36d*/
  {
    v13 = *((_BYTE *)v9 + v12); /*0x1007ca36d*/
    if ( v13 <= 0x1Fu ) /*0x1007ca375*/
      break; /*0x1007ca375*/
    if ( v13 == 127 ) /*0x1007ca363*/
      goto LABEL_11; /*0x1007ca363*/
LABEL_8:
    if ( v10 == ++v12 ) /*0x1007ca36b*/
      goto LABEL_13; /*0x1007ca36b*/
  }
  if ( v13 == 9 ) /*0x1007ca37a*/
    goto LABEL_8; /*0x1007ca37a*/
LABEL_11:
  v5 = 5; /*0x1007ca37c*/
  if ( (_QWORD)v25 ) /*0x1007ca386*/
  {
    v11 = *((_OWORD **)&v25 + 1); /*0x1007ca390*/
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v25 + 32))((char *)&v26 + 8, *((_QWORD *)&v25 + 1), v26); /*0x1007ca398*/
  }
LABEL_14:
  core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799(&v17, v11); /*0x1007ca43d*/
  v6 = 3; /*0x1007ca450*/
  if ( *(_QWORD *)&__src[87] ) /*0x1007ca458*/
  {
LABEL_15:
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4f3df4ae14586d84(*(const __m128i ***)&__src[87]); /*0x1007ca45a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1007ca46f*/
  }
LABEL_17:
  v14 = v20; /*0x1007ca499*/
  *v20 = v6; /*0x1007ca4a0*/
  *((_BYTE *)v14 + 8) = v5; /*0x1007ca4a3*/
  memcpy((char *)v14 + 9, __dst, 0x67u); /*0x1007ca4ba*/
  return v14; /*0x1007ca4c2*/
}