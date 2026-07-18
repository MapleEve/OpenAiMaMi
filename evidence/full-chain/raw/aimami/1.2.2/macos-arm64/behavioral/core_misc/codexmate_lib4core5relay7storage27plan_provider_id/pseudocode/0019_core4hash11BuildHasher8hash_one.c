// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x100459d80 d=2
__int64 __fastcall core::hash::BuildHasher::hash_one::h1f375af5b84b211f(const __m128i *a1, _QWORD *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __m128i v30; // [rsp+0h] [rbp-60h] BYREF
  __m128i v31; // [rsp+10h] [rbp-50h]
  __m128i v32; // [rsp+20h] [rbp-40h]
  __int128 v33; // [rsp+30h] [rbp-30h]
  __int64 v34; // [rsp+40h] [rbp-20h]
  char v35[9]; // [rsp+57h] [rbp-9h] BYREF

  v2 = _mm_loadu_si128(a1); /*0x100459d89*/
  v30 = _mm_xor_si128(_mm_shuffle_epi32(v2, 68), (__m128i)xmmword_10151B470); /*0x100459da7*/
  v31 = _mm_xor_si128(_mm_shuffle_epi32(v2, 238), (__m128i)xmmword_10151B480); /*0x100459dac*/
  v32 = v2; /*0x100459db1*/
  v33 = 0; /*0x100459dba*/
  v34 = 0; /*0x100459dbf*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h523d9a90c6a6e46d(&v30, *a2, a2[1]); /*0x100459dd8*/
  v35[0] = -1; /*0x100459ddd*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h523d9a90c6a6e46d(&v30, v35, 1); /*0x100459ded*/
  v3 = *((_QWORD *)&v33 + 1) | ((_QWORD)v33 << 56); /*0x100459dfa*/
  v4 = (v3 ^ v31.i64[1]) + v30.i64[1]; /*0x100459e18*/
  v5 = (v31.i64[0] + v30.i64[0]) ^ __ROL8__(v31.i64[0], 13); /*0x100459e1b*/
  v6 = v4 ^ __ROL8__(v3 ^ v31.i64[1], 16); /*0x100459e22*/
  v7 = v5 + v4; /*0x100459e29*/
  v8 = v6 + __ROL8__(v31.i64[0] + v30.i64[0], 32); /*0x100459e2c*/
  v9 = v7 ^ __ROL8__(v5, 17); /*0x100459e33*/
  v10 = v8 ^ __ROL8__(v6, 21); /*0x100459e3e*/
  v11 = v9 + (v3 ^ v8); /*0x100459e4b*/
  v12 = v10 + (__ROL8__(v7, 32) ^ 0xFFLL); /*0x100459e4e*/
  v13 = v11 ^ __ROL8__(v9, 13); /*0x100459e55*/
  v14 = v12 ^ __ROL8__(v10, 16); /*0x100459e60*/
  v15 = v13 + v12; /*0x100459e63*/
  v16 = v14 + __ROL8__(v11, 32); /*0x100459e6a*/
  v17 = v15 ^ __ROL8__(v13, 17); /*0x100459e6d*/
  v18 = v16 ^ __ROL8__(v14, 21); /*0x100459e74*/
  v19 = v17 + v16; /*0x100459e7b*/
  v20 = v18 + __ROL8__(v15, 32); /*0x100459e7e*/
  v21 = v19 ^ __ROL8__(v17, 13); /*0x100459e85*/
  v22 = v20 ^ __ROL8__(v18, 16); /*0x100459e90*/
  v23 = v21 + v20; /*0x100459e93*/
  v24 = v22 + __ROL8__(v19, 32); /*0x100459e9a*/
  v25 = v23 ^ __ROL8__(v21, 17); /*0x100459e9d*/
  v26 = v24 ^ __ROL8__(v22, 21); /*0x100459ea4*/
  v27 = v26 + __ROL8__(v23, 32); /*0x100459eae*/
  v28 = (v25 + v24) ^ __ROL8__(v25, 13); /*0x100459eb5*/
  return (v28 + v27) ^ __ROL8__(v27 ^ __ROL8__(v26, 16), 21) ^ __ROL8__(v28, 17) ^ __ROL8__(v28 + v27, 32); /*0x100459eda*/
}