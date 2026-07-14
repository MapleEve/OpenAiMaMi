// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x1007c5860 depth=3
__int64 __fastcall core::hash::BuildHasher::hash_one::h245728ff9d912134(const __m128i *a1)
{
  __m128i v1; // xmm0
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __m128i v29; // [rsp+0h] [rbp-60h] BYREF
  __m128i v30; // [rsp+10h] [rbp-50h]
  __m128i v31; // [rsp+20h] [rbp-40h]
  __int128 v32; // [rsp+30h] [rbp-30h]
  __int64 v33; // [rsp+40h] [rbp-20h]
  char v34; // [rsp+57h] [rbp-9h]

  v1 = _mm_loadu_si128(a1); /*0x1007c5869*/
  v29 = _mm_xor_si128(_mm_shuffle_epi32(v1, 68), (__m128i)xmmword_1012C8670); /*0x1007c587a*/
  v30 = _mm_xor_si128(_mm_shuffle_epi32(v1, 238), (__m128i)xmmword_1012C8680); /*0x1007c588c*/
  v31 = v1; /*0x1007c5891*/
  v32 = 0; /*0x1007c589a*/
  v33 = 0; /*0x1007c589f*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h1d8db205c8c4d35e(&v29); /*0x1007c58ae*/
  v34 = -1; /*0x1007c58b3*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h1d8db205c8c4d35e(&v29); /*0x1007c58c3*/
  v2 = *((_QWORD *)&v32 + 1) | ((_QWORD)v32 << 56); /*0x1007c58d0*/
  v3 = (v2 ^ v30.i64[1]) + v29.i64[1]; /*0x1007c58ee*/
  v4 = (v30.i64[0] + v29.i64[0]) ^ __ROL8__(v30.i64[0], 13); /*0x1007c58f1*/
  v5 = v3 ^ __ROL8__(v2 ^ v30.i64[1], 16); /*0x1007c58f8*/
  v6 = v4 + v3; /*0x1007c58ff*/
  v7 = v5 + __ROL8__(v30.i64[0] + v29.i64[0], 32); /*0x1007c5902*/
  v8 = v6 ^ __ROL8__(v4, 17); /*0x1007c5909*/
  v9 = v7 ^ __ROL8__(v5, 21); /*0x1007c5914*/
  v10 = v8 + (v2 ^ v7); /*0x1007c5921*/
  v11 = v9 + (__ROL8__(v6, 32) ^ 0xFFLL); /*0x1007c5924*/
  v12 = v10 ^ __ROL8__(v8, 13); /*0x1007c592b*/
  v13 = v11 ^ __ROL8__(v9, 16); /*0x1007c5936*/
  v14 = v12 + v11; /*0x1007c5939*/
  v15 = v13 + __ROL8__(v10, 32); /*0x1007c5940*/
  v16 = v14 ^ __ROL8__(v12, 17); /*0x1007c5943*/
  v17 = v15 ^ __ROL8__(v13, 21); /*0x1007c594a*/
  v18 = v16 + v15; /*0x1007c5951*/
  v19 = v17 + __ROL8__(v14, 32); /*0x1007c5954*/
  v20 = v18 ^ __ROL8__(v16, 13); /*0x1007c595b*/
  v21 = v19 ^ __ROL8__(v17, 16); /*0x1007c5966*/
  v22 = v20 + v19; /*0x1007c5969*/
  v23 = v21 + __ROL8__(v18, 32); /*0x1007c5970*/
  v24 = v22 ^ __ROL8__(v20, 17); /*0x1007c5973*/
  v25 = v23 ^ __ROL8__(v21, 21); /*0x1007c597a*/
  v26 = v25 + __ROL8__(v22, 32); /*0x1007c5984*/
  v27 = (v24 + v23) ^ __ROL8__(v24, 13); /*0x1007c598b*/
  return (v27 + v26) ^ __ROL8__(v26 ^ __ROL8__(v25, 16), 21) ^ __ROL8__(v27, 17) ^ __ROL8__(v27 + v26, 32); /*0x1007c59b0*/
}