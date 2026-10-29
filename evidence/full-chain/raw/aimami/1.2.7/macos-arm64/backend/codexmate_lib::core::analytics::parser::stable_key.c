// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db; addr: 0x1009bc910; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:19Z
__int64 __fastcall codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  size_t v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rcx
  size_t v7; // rbx
  size_t v8; // r12
  size_t v9; // rdx
  unsigned __int64 v10; // r13
  size_t v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r12
  __int64 *v15; // rsi
  __int64 v16; // r14
  __m128i si128; // xmm0
  __m128i v18; // xmm2
  _OWORD v20[3]; // [rsp+0h] [rbp-160h] BYREF
  __int64 v21; // [rsp+30h] [rbp-130h]
  unsigned __int64 v22; // [rsp+38h] [rbp-128h]
  __m128i __src[7]; // [rsp+40h] [rbp-120h] BYREF
  _QWORD v24[14]; // [rsp+B0h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+120h] [rbp-40h]
  __int64 v26; // [rsp+128h] [rbp-38h]
  __int64 v27; // [rsp+130h] [rbp-30h]

  v25 = a2; /*0x1009bc924*/
  v27 = a1; /*0x1009bc928*/
  v24[0] = 0xBB67AE856A09E667LL; /*0x1009bc97d*/
  v24[1] = 0xA54FF53A3C6EF372LL; /*0x1009bc98e*/
  v24[2] = 0x9B05688C510E527FLL; /*0x1009bc99f*/
  v24[3] = 0x5BE0CD191F83D9ABLL; /*0x1009bc9b0*/
  memset(&v24[4], 0, 73); /*0x1009bc9b7*/
  v26 = a3; /*0x1009bc9c2*/
  if ( a3 ) /*0x1009bc9c9*/
  {
    v26 *= 16; /*0x1009bc9cf*/
    v3 = 0; /*0x1009bc9d4*/
    LOBYTE(v4) = 0; /*0x1009bc9d7*/
    while ( 1 ) /*0x1009bcabe*/
    {
      while ( 1 ) /*0x1009bca12*/
      {
        v5 = *(_QWORD *)(v25 + v3 + 8); /*0x1009bca12*/
        v6 = _byteswap_uint64(v5); /*0x1009bca1a*/
        __src[0].i64[0] = v6; /*0x1009bca1d*/
        if ( (unsigned __int8)v4 >= 0x38u ) /*0x1009bca2a*/
        {
          v7 = (unsigned __int8)v4 - 56LL; /*0x1009bca5c*/
          memcpy((char *)&v24[5] + (unsigned __int8)v4, __src, 64LL - (unsigned __int8)v4); /*0x1009bca67*/
          ++v24[4]; /*0x1009bca6c*/
          sha2::sha256::compress256::hc74ebc2fd6208bb9(v24, &v24[5]); /*0x1009bca82*/
          memcpy(&v24[5], (char *)__src + 64LL - (unsigned __int8)v4 + (v7 & 0x7FFFFFFFFFFFFFC0LL), v7); /*0x1009bcaa0*/
        }
        else
        {
          *(_QWORD *)((char *)&v24[5] + (unsigned __int8)v4) = v6; /*0x1009bca2c*/
          v7 = (unsigned __int8)v4 + 8LL; /*0x1009bca34*/
        }
        LOBYTE(v24[13]) = v7; /*0x1009bcaa5*/
        v8 = *(_QWORD *)(v25 + v3); /*0x1009bcaac*/
        v9 = 64 - v7; /*0x1009bcab5*/
        v10 = v5 - (64 - v7); /*0x1009bcabb*/
        if ( v5 >= 64 - v7 ) /*0x1009bcabe*/
          break; /*0x1009bcabe*/
        memcpy((char *)&v24[5] + v7, *(const void **)(v25 + v3), v5); /*0x1009bc9f1*/
        LOBYTE(v4) = v5 + v7; /*0x1009bc9f9*/
        LOBYTE(v24[13]) = v5 + v7; /*0x1009bc9fc*/
        v3 += 16; /*0x1009bca00*/
        if ( v26 == v3 ) /*0x1009bca08*/
          goto LABEL_15; /*0x1009bca08*/
      }
      if ( !v7 ) /*0x1009bcac7*/
        break; /*0x1009bcac7*/
      v11 = v8 + v9; /*0x1009bcacd*/
      memcpy((char *)&v24[5] + v7, *(const void **)(v25 + v3), v9); /*0x1009bcae1*/
      ++v24[4]; /*0x1009bcae6*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v24, &v24[5]); /*0x1009bcb00*/
      v8 = v11; /*0x1009bcb05*/
      if ( v10 >= 0x40 ) /*0x1009bcb0c*/
        goto LABEL_10; /*0x1009bcb0c*/
LABEL_11:
      v12 = v10 & 0x7FFFFFFFFFFFFFC0LL; /*0x1009bcb2b*/
      v4 = v10 & 0x3F; /*0x1009bcb3b*/
      memcpy(&v24[5], (const void *)(v12 + v8), v4); /*0x1009bcb4f*/
      LOBYTE(v24[13]) = v4; /*0x1009bcb54*/
      v3 += 16; /*0x1009bcb58*/
      if ( v26 == v3 ) /*0x1009bcb60*/
        goto LABEL_15; /*0x1009bcb60*/
    }
    v10 = v5; /*0x1009bcb68*/
    if ( v5 < 0x40 ) /*0x1009bcb6f*/
      goto LABEL_11; /*0x1009bcb6f*/
LABEL_10:
    v24[4] += v10 >> 6; /*0x1009bcb0e*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v24, v8); /*0x1009bcb26*/
    goto LABEL_11; /*0x1009bcb26*/
  }
LABEL_15:
  qmemcpy(__src, v24, sizeof(__src)); /*0x1009bcb89*/
  v13 = __src[6].u8[8]; /*0x1009bcb93*/
  v14 = _byteswap_uint64((__src[2].i64[0] << 9) | (8 * (unsigned int)__src[6].u8[8])); /*0x1009bcbb1*/
  __src[2].i8[__src[6].u8[8] + 8] = 0x80; /*0x1009bcbb4*/
  if ( (_DWORD)v13 == 63 || (__bzero((char *)&__src[2].u64[1] + v13 + 1, v13 ^ 0x3F), ((unsigned int)v13 ^ 0x38) <= 7) ) /*0x1009bcbe2*/
  {
    sha2::sha256::compress256::hc74ebc2fd6208bb9(__src, &__src[2].u64[1]); /*0x1009bcbf6*/
    memset(v20, 0, sizeof(v20)); /*0x1009bcc0c*/
    v21 = 0; /*0x1009bcc13*/
    v22 = v14; /*0x1009bcc1e*/
    v15 = (__int64 *)v20; /*0x1009bcc25*/
  }
  else
  {
    __src[6].i64[0] = v14; /*0x1009bcc36*/
    v15 = &__src[2].i64[1]; /*0x1009bcc49*/
  }
  sha2::sha256::compress256::hc74ebc2fd6208bb9(__src, v15); /*0x1009bcc4c*/
  v16 = v27; /*0x1009bcc51*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1016F2470); /*0x1009bcc55*/
  v18 = _mm_shuffle_epi8(_mm_load_si128(&__src[1]), si128); /*0x1009bcc72*/
  __src[0] = _mm_shuffle_epi8(_mm_load_si128(__src), si128); /*0x1009bcc77*/
  __src[1] = v18; /*0x1009bcc7f*/
  *(_QWORD *)&v20[0] = __src; /*0x1009bcc87*/
  *((_QWORD *)&v20[0] + 1) = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::h7c96d4390bb614f5; /*0x1009bcc95*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v27, &unk_1018F4375, v20); /*0x1009bccad*/
  return v16; /*0x1009bccb5*/
}