// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_trace::fingerprint::hd309362751b4ec00; addr: 0x100578a10; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:42Z
_QWORD *__fastcall codexmate_lib::core::relay::anthropic_trace::fingerprint::hd309362751b4ec00(
        _QWORD *a1,
        char *a2,
        size_t a3,
        char *a4,
        size_t a5)
{
  __int64 v7; // rbx
  size_t v8; // rbx
  char *v9; // r12
  char *v10; // r13
  char *v11; // rsi
  size_t v12; // rdx
  size_t v13; // r13
  size_t v14; // rbx
  size_t v15; // r13
  size_t v16; // rbx
  char *v17; // r15
  size_t v18; // rdx
  size_t v19; // r15
  char *v20; // rsi
  char *v21; // r13
  __int64 v22; // r15
  unsigned __int64 v23; // r12
  __int64 *v24; // rsi
  __m128i si128; // xmm0
  __m128i v26; // xmm2
  _QWORD *result; // rax
  _OWORD *v28; // rdx
  size_t v29; // r14
  __m128i v30[7]; // [rsp+0h] [rbp-190h] BYREF
  __int128 v31; // [rsp+78h] [rbp-118h] BYREF
  __int64 v32; // [rsp+88h] [rbp-108h]
  __m128i *v33; // [rsp+90h] [rbp-100h] BYREF
  char *v34; // [rsp+98h] [rbp-F8h]
  __int128 v35; // [rsp+A0h] [rbp-F0h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-E0h]
  __int128 v37; // [rsp+C0h] [rbp-D0h]
  __int64 v38; // [rsp+D0h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+D8h] [rbp-B8h]
  _QWORD v40[14]; // [rsp+E8h] [rbp-A8h] BYREF
  size_t __n; // [rsp+158h] [rbp-38h]
  _QWORD *v42; // [rsp+160h] [rbp-30h]

  v42 = a1; /*0x100578a2a*/
  v40[0] = 0xBB67AE856A09E667LL; /*0x100578a7c*/
  v40[1] = 0xA54FF53A3C6EF372LL; /*0x100578a8d*/
  v40[2] = 0x9B05688C510E527FLL; /*0x100578a9e*/
  v40[3] = 0x5BE0CD191F83D9ABLL; /*0x100578aaf*/
  memset(&v40[4], 0, 73); /*0x100578ab6*/
  if ( qword_101C980C8 ) /*0x100578acb*/
  {
    v29 = a5; /*0x100578eee*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hf4dfbf303024bcf1(&codexmate_lib::core::relay::anthropic_trace::fingerprint::SALT::h51777b57432e7b67); /*0x100578ef1*/
    a5 = v29; /*0x100578ef6*/
  }
  v7 = LOBYTE(v40[13]); /*0x100578ad5*/
  __n = a5; /*0x100578add*/
  if ( LOBYTE(v40[13]) >= 0x30uLL ) /*0x100578ae1*/
  {
    v34 = a4; /*0x100578b0f*/
    v9 = (char *)&codexmate_lib::core::relay::anthropic_trace::fingerprint::SALT::h51777b57432e7b67 /*0x100578b16*/
       + 64LL
       - LOBYTE(v40[13]);
    v8 = LOBYTE(v40[13]) - 48LL; /*0x100578b1e*/
    v10 = a2; /*0x100578b22*/
    memcpy( /*0x100578b28*/
      (char *)&v40[5] + LOBYTE(v40[13]),
      &codexmate_lib::core::relay::anthropic_trace::fingerprint::SALT::h51777b57432e7b67,
      64LL - LOBYTE(v40[13]));
    ++v40[4]; /*0x100578b2d*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v40, &v40[5]); /*0x100578b43*/
    v11 = &v9[v8 & 0x7FFFFFFFFFFFFFC0LL]; /*0x100578b58*/
    a4 = v34; /*0x100578b5b*/
    memcpy(&v40[5], v11, v8); /*0x100578b68*/
    a2 = v10; /*0x100578b6d*/
  }
  else
  {
    *(_QWORD *)((char *)&v40[6] + LOBYTE(v40[13])) = qword_101C980C0; /*0x100578aea*/
    *(_QWORD *)((char *)&v40[5] + v7) = codexmate_lib::core::relay::anthropic_trace::fingerprint::SALT::h51777b57432e7b67; /*0x100578af6*/
    v8 = v7 + 16; /*0x100578afa*/
  }
  LOBYTE(v40[13]) = v8; /*0x100578b70*/
  v12 = 64 - v8; /*0x100578b78*/
  v13 = a3 - (64 - v8); /*0x100578b7e*/
  if ( a3 >= 64 - v8 ) /*0x100578b81*/
  {
    if ( v8 ) /*0x100578bd6*/
    {
      v17 = &a2[v12]; /*0x100578bd8*/
      memcpy((char *)&v40[5] + v8, a2, v12); /*0x100578be2*/
      ++v40[4]; /*0x100578be7*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v40, &v40[5]); /*0x100578bfd*/
      a2 = v17; /*0x100578c02*/
    }
    else
    {
      v13 = a3; /*0x100578c07*/
    }
    memcpy(&v40[5], a2, v13); /*0x100578c10*/
    v14 = v13; /*0x100578c15*/
LABEL_14:
    *((_BYTE *)&v40[5] + v14) = 0; /*0x100578c18*/
    LOBYTE(v40[13]) = v13 + 1; /*0x100578c20*/
    v16 = (unsigned __int8)(v13 + 1); /*0x100578c24*/
    v18 = 64 - v16; /*0x100578c2d*/
    v15 = __n; /*0x100578c30*/
    v19 = __n - (64 - v16); /*0x100578c37*/
    if ( __n < 64 - v16 ) /*0x100578c3a*/
      goto LABEL_15; /*0x100578c3a*/
    v20 = a4; /*0x100578c55*/
    a4 += v18; /*0x100578c58*/
    memcpy((char *)&v40[5] + v16, v20, v18); /*0x100578c61*/
    ++v40[4]; /*0x100578c66*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v40, &v40[5]); /*0x100578c7c*/
    v16 = v19 & 0x3F; /*0x100578c94*/
    v21 = &a4[v19 & 0x7FFFFFFFFFFFFFC0LL]; /*0x100578c97*/
    if ( v19 < 0x40 ) /*0x100578c9e*/
    {
LABEL_20:
      memcpy(&v40[5], v21, v16); /*0x100578cd8*/
      goto LABEL_21; /*0x100578ce1*/
    }
LABEL_19:
    v40[4] += v19 >> 6; /*0x100578cbb*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v40, a4); /*0x100578cd3*/
    goto LABEL_20; /*0x100578cd3*/
  }
  memcpy((char *)&v40[5] + v8, a2, a3); /*0x100578b8a*/
  v14 = a3 + v8; /*0x100578b8f*/
  LOBYTE(v40[13]) = v14; /*0x100578b92*/
  LOBYTE(v13) = v14; /*0x100578b95*/
  if ( v14 != 63 ) /*0x100578b9c*/
    goto LABEL_14; /*0x100578b9c*/
  HIBYTE(v40[12]) = 0; /*0x100578b9e*/
  ++v40[4]; /*0x100578ba2*/
  sha2::sha256::compress256::hc74ebc2fd6208bb9(v40, &v40[5]); /*0x100578bb8*/
  LOBYTE(v40[13]) = 0; /*0x100578bbd*/
  v15 = __n; /*0x100578bc1*/
  if ( __n >= 0x40 ) /*0x100578bc9*/
  {
    v19 = __n; /*0x100578ca2*/
    v16 = __n & 0x3F; /*0x100578cb5*/
    v21 = &a4[__n & 0x7FFFFFFFFFFFFFC0LL]; /*0x100578cb8*/
    goto LABEL_19; /*0x100578cb8*/
  }
  v16 = 0; /*0x100578bcf*/
LABEL_15:
  memcpy((char *)&v40[5] + v16, a4, v15); /*0x100578c3c*/
  LOBYTE(v16) = v15 + v16; /*0x100578c4d*/
LABEL_21:
  LOBYTE(v40[13]) = v16; /*0x100578ce6*/
  qmemcpy(v30, v40, sizeof(v30)); /*0x100578cff*/
  v22 = v30[6].u8[8]; /*0x100578d09*/
  v23 = _byteswap_uint64((v30[2].i64[0] << 9) | (8 * (unsigned int)v30[6].u8[8])); /*0x100578d27*/
  v30[2].i8[v30[6].u8[8] + 8] = 0x80; /*0x100578d2a*/
  if ( (_DWORD)v22 == 63 || (__bzero((char *)&v30[2].u64[1] + v22 + 1, v22 ^ 0x3F), ((unsigned int)v22 ^ 0x38) <= 7) ) /*0x100578d58*/
  {
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v30, &v30[2].u64[1]); /*0x100578d6c*/
    v37 = 0; /*0x100578d74*/
    v36 = 0; /*0x100578d7b*/
    v35 = 0; /*0x100578d82*/
    v38 = 0; /*0x100578d89*/
    v39 = v23; /*0x100578d94*/
    v24 = (__int64 *)&v35; /*0x100578d9b*/
  }
  else
  {
    v30[6].i64[0] = v23; /*0x100578dac*/
    v24 = &v30[2].i64[1]; /*0x100578dbf*/
  }
  sha2::sha256::compress256::hc74ebc2fd6208bb9(v30, v24); /*0x100578dc2*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1018315E0); /*0x100578dc7*/
  v26 = _mm_shuffle_epi8(_mm_load_si128(&v30[1]), si128); /*0x100578de4*/
  v30[0] = _mm_shuffle_epi8(_mm_load_si128(v30), si128); /*0x100578de9*/
  v30[1] = v26; /*0x100578df1*/
  v33 = v30; /*0x100578df9*/
  *(_QWORD *)&v35 = &v33; /*0x100578e07*/
  *((_QWORD *)&v35 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hcf91b2f05f8a9f22; /*0x100578e15*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v31, &anon_ce2d7e055d4ebd72bdfc640dd1dd85ab_61, &v35); /*0x100578e31*/
  if ( (_QWORD)v31 == 0x8000000000000000LL ) /*0x100578e4b*/
  {
    result = v42; /*0x100578e4d*/
    *v42 = 0; /*0x100578e51*/
    result[1] = 1; /*0x100578e58*/
    result[2] = 0; /*0x100578e60*/
  }
  else
  {
    *(_QWORD *)&v36 = v32; /*0x100578e7f*/
    v35 = v31; /*0x100578e9b*/
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hf2331bd00cf79081( /*0x100578ea9*/
      &v30[0].i8[1],
      &v30[0].u64[1],
      &v35);
    v28 = v42; /*0x100578eb5*/
    v42[2] = v36; /*0x100578eb9*/
    result = (_QWORD *)v35; /*0x100578ec4*/
    *v28 = v35; /*0x100578ecf*/
  }
  return result; /*0x100578ed2*/
}