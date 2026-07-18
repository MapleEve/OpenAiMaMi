// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x100431a20 d=1
__int64 __fastcall _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::haa87e277dc9899c8(
        __m128i *a1,
        char *a2,
        size_t a3)
{
  size_t v3; // r12
  char *v4; // r15
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  __int64 *v7; // rsi
  __int64 result; // rax
  __m128i si128; // xmm0
  __m128i v10; // xmm2
  _OWORD v11[3]; // [rsp+0h] [rbp-140h] BYREF
  __int64 v12; // [rsp+30h] [rbp-110h]
  unsigned __int64 v13; // [rsp+38h] [rbp-108h]
  __m128i v14[7]; // [rsp+40h] [rbp-100h] BYREF
  _QWORD v15[18]; // [rsp+B0h] [rbp-90h] BYREF

  v15[0] = 0xBB67AE856A09E667LL; /*0x100431a87*/
  v15[1] = 0xA54FF53A3C6EF372LL; /*0x100431a98*/
  v15[2] = 0x9B05688C510E527FLL; /*0x100431aa9*/
  v15[3] = 0x5BE0CD191F83D9ABLL; /*0x100431ab7*/
  memset(&v15[4], 0, 73); /*0x100431abb*/
  if ( a3 >= 0x40 ) /*0x100431ac7*/
  {
    v3 = a3 & 0x3F; /*0x100431ae1*/
    v4 = &a2[a3 & 0x7FFFFFFFFFFFFFC0LL]; /*0x100431ae5*/
    v15[4] = a3 >> 6; /*0x100431aec*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v15, a2); /*0x100431af7*/
    a2 = v4; /*0x100431aff*/
    a3 = v3; /*0x100431b02*/
  }
  else
  {
    LOBYTE(v3) = a3; /*0x100431acc*/
  }
  memcpy(&v15[5], a2, a3); /*0x100431b05*/
  LOBYTE(v15[13]) = v3; /*0x100431b0a*/
  qmemcpy(v14, v15, sizeof(v14)); /*0x100431b21*/
  v5 = v14[6].u8[8]; /*0x100431b2b*/
  v6 = _byteswap_uint64((v14[2].i64[0] << 9) | (8 * (unsigned int)v14[6].u8[8])); /*0x100431b49*/
  v14[2].i8[v14[6].u8[8] + 8] = 0x80; /*0x100431b4c*/
  if ( (_DWORD)v5 == 63 || (__bzero((char *)&v14[2].u64[1] + v5 + 1, v5 ^ 0x3F), ((unsigned int)v5 ^ 0x38) <= 7) ) /*0x100431b7a*/
  {
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v14, &v14[2].u64[1]); /*0x100431b8e*/
    memset(v11, 0, sizeof(v11)); /*0x100431ba4*/
    v12 = 0; /*0x100431bab*/
    v13 = v6; /*0x100431bb6*/
    v7 = (__int64 *)v11; /*0x100431bbd*/
  }
  else
  {
    v14[6].i64[0] = v6; /*0x100431bce*/
    v7 = &v14[2].i64[1]; /*0x100431be1*/
  }
  result = sha2::sha256::compress256::hc74ebc2fd6208bb9(v14, v7); /*0x100431be4*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_10151B460); /*0x100431be9*/
  v10 = _mm_shuffle_epi8(_mm_load_si128(&v14[1]), si128); /*0x100431c06*/
  *a1 = _mm_shuffle_epi8(_mm_load_si128(v14), si128); /*0x100431c0b*/
  a1[1] = v10; /*0x100431c0f*/
  return result; /*0x100431c14*/
}