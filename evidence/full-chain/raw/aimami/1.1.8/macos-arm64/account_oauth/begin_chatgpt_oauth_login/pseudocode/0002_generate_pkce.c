// callee (depth 1 from owner 0x1000a2e40): codexmate_lib::core::oauth_login::generate_pkce::h3ec0fe10d4f3cf18
// VA: 0x1003cdd30 — full Hex-Rays decompile, no bail, 3597 chars total (verbatim below)
// PKCE = OAuth 2.0 Proof Key for Code Exchange (RFC 7636): generates a random code_verifier and
// derives code_challenge = base64url(sha256(code_verifier)). Both values are session-local, never
// transmitted except: verifier is POSTed once to the token endpoint (see 0003/evidence.md), challenge
// is embedded in the authorize URL (see 0003_build_authorize_url.c). Neither is a static secret.
_QWORD *__fastcall codexmate_lib::core::oauth_login::generate_pkce::h3ec0fe10d4f3cf18(_QWORD *a1)
{
  char *v1; // r14
  size_t v2; // r15
  char *v3; // rsi
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  __m128i si128; // xmm0
  __m128i v7; // xmm2
  __int64 v8; // rax
  __int64 v9; // rcx
  _OWORD v11[2]; // [rsp+0h] [rbp-1A0h] BYREF
  _OWORD v12[3]; // [rsp+20h] [rbp-180h] BYREF
  __int64 v13; // [rsp+50h] [rbp-150h]
  unsigned __int64 v14; // [rsp+58h] [rbp-148h]
  __m128i v15[7]; // [rsp+60h] [rbp-140h] BYREF
  _QWORD v16[3]; // [rsp+D8h] [rbp-C8h] BYREF
  _QWORD v17[14]; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+160h] [rbp-40h] BYREF
  char *v19; // [rsp+168h] [rbp-38h]
  size_t __n; // [rsp+170h] [rbp-30h]

  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v12); /*0x1003cdd51*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v17); /*0x1003cdd60*/
  v15[0].i64[0] = (__int64)v12; /*0x1003cdd65*/
  v15[0].i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1003cdd73*/
  v15[1].i64[0] = (__int64)v17; /*0x1003cdd7a*/
  v15[1].i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1003cdd81*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v18, &anon_0eedd02070250de7472aa97ee6b1a8ea_59, v15); /*0x1003cdd9a*/
  // ^ formats two v4 UUIDs together as the code_verifier string (uuid+uuid concatenation pattern,
  //   matches Codex-CLI-style verifier construction — length >> RFC7636 minimum 43 chars)
  v1 = v19; /*0x1003cdd9f*/
  v2 = __n; /*0x1003cdda3*/
  v17[0] = 0xBB67AE856A09E667LL; /*0x1003cddff*/       // SHA-256 IV words (standard FIPS 180-4 constants)
  v17[1] = 0xA54FF53A3C6EF372LL; /*0x1003cde10*/
  v17[2] = 0x9B05688C510E527FLL; /*0x1003cde21*/
  v17[3] = 0x5BE0CD191F83D9ABLL; /*0x1003cde32*/
  memset(&v17[4], 0, 73); /*0x1003cde39*/
  if ( __n >= 0x40 ) /*0x1003cde48*/
  {
    v17[4] = __n >> 6; /*0x1003cde59*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v17, v19); /*0x1003cde6a — 0x100ada2d0*/
    v3 = &v1[v2 & 0x7FFFFFFFFFFFFFC0LL]; /*0x1003cde7c*/
    v2 &= 0x3Fu; /*0x1003cde7f*/
  }
  else
  {
    v3 = v19; /*0x1003cde4d*/
  }
  memcpy(&v17[5], v3, v2); /*0x1003cde89*/
  LOBYTE(v17[13]) = v2; /*0x1003cde8e*/
  qmemcpy(v15, v17, sizeof(v15)); /*0x1003cdea5*/
  v4 = v15[6].u8[8]; /*0x1003cdeaf*/
  v5 = _byteswap_uint64((v15[2].i64[0] << 9) | (8 * (unsigned int)v15[6].u8[8])); /*0x1003cdecd*/
  v15[2].i8[v15[6].u8[8] + 8] = 0x80; /*0x1003cded0*/
  if ( (_DWORD)v4 == 63 || (__bzero((char *)&v15[2].u64[1] + v4 + 1, v4 ^ 0x3F), ((unsigned int)v4 ^ 0x38) <= 7) ) /*0x1003cdefe*/
  {
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v15, &v15[2].u64[1]); /*0x1003cdf0f*/
    memset(v12, 0, sizeof(v12)); /*0x1003cdf28*/
    v13 = 0; /*0x1003cdf30*/
    v14 = v5; /*0x1003cdf3b*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v15, v12); /*0x1003cdf55*/
  }
  else
  {
    v15[6].i64[0] = v5; /*0x1003cdf5c*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v15, &v15[2].u64[1]); /*0x1003cdf72*/
  }
  // above block = one-shot SHA-256(code_verifier) — standard Merkle-Damgard padding + compress256 rounds
  si128 = _mm_load_si128((const __m128i *)&xmmword_1012C1900); /*0x1003cdf77*/         // byte-swap mask constant
  v7 = _mm_shuffle_epi8(_mm_load_si128(&v15[1]), si128); /*0x1003cdf94*/
  v11[0] = _mm_shuffle_epi8(_mm_load_si128(v15), si128); /*0x1003cdf99*/
  v11[1] = v7; /*0x1003cdfa1*/
  ((void (__fastcall *)(_QWORD *, void *, _OWORD *, __int64))base64::engine::Engine::encode::inner::h6e86c551e78f1899)( /*0x1003cdfc3 — 0x10025c330*/
    v16,
    &anon_0eedd02070250de7472aa97ee6b1a8ea_60,
    v11,
    32);
  // ^ base64url-encodes the 32-byte SHA-256 digest -> code_challenge (RFC 7636 S256 method)
  a1[2] = __n; /*0x1003cdfcc*/
  v8 = v18; /*0x1003cdfd0*/
  a1[1] = v19; /*0x1003cdfd8*/
  *a1 = v8; /*0x1003cdfdc*/
  v9 = v16[1]; /*0x1003cdfe6*/
  a1[3] = v16[0]; /*0x1003cdfed*/
  a1[4] = v9; /*0x1003cdff1*/
  a1[5] = v16[2]; /*0x1003cdffc*/
  return a1;   // returns {code_verifier: String, code_challenge: String} pair struct /*0x1003ce003*/
}
