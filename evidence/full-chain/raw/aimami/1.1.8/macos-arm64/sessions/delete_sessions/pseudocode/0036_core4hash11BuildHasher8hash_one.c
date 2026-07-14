// mac 1.1.8 delete_sessions node va=0x1007c6400 depth=2
// core4hash11BuildHasher8hash_one
__int64 __fastcall core::hash::BuildHasher::hash_one::ha7bb103da4581b64(const __m128i *a1)
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

  v1 = _mm_loadu_si128(a1); /*0x1007c6409*/
  v29 = _mm_xor_si128(_mm_shuffle_epi32(v1, 68), (__m128i)xmmword_1012C8670); /*0x1007c6427*/
  v30 = _mm_xor_si128(_mm_shuffle_epi32(v1, 238), (__m128i)xmmword_1012C8680); /*0x1007c642c*/
  v31 = v1; /*0x1007c6431*/
  v32 = 0; /*0x1007c643a*/
  v33 = 0; /*0x1007c643f*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h1d8db205c8c4d35e(&v29); /*0x1007c6458*/
  v34 = -1; /*0x1007c645d*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h1d8db205c8c4d35e(&v29); /*0x1007c646d*/
  v2 = *((_QWORD *)&v32 + 1) | ((_QWORD)v32 << 56); /*0x1007c647a*/
  v3 = (v2 ^ v30.i64[1]) + v29.i64[1]; /*0x1007c6498*/
  v4 = (v30.i64[0] + v29.i64[0]) ^ __ROL8__(v30.i64[0], 13); /*0x1007c649b*/
  v5 = v3 ^ __ROL8__(v2 ^ v30.i64[1], 16); /*0x1007c64a2*/
  v6 = v4 + v3; /*0x1007c64a9*/
  v7 = v5 + __ROL8__(v30.i64[0] + v29.i64[0], 32); /*0x1007c64ac*/
  v8 = v6 ^ __ROL8__(v4, 17); /*0x1007c64b3*/
  v9 = v7 ^ __ROL8__(v5, 21); /*0x1007c64be*/
  v10 = v8 + (v2 ^ v7); /*0x1007c64cb*/
  v11 = v9 + (__ROL8__(v6, 32) ^ 0xFFLL); /*0x1007c64ce*/
  v12 = v10 ^ __ROL8__(v8, 13); /*0x1007c64d5*/
  v13 = v11 ^ __ROL8__(v9, 16); /*0x1007c64e0*/
  v14 = v12 + v11; /*0x1007c64e3*/
  v15 = v13 + __ROL8__(v10, 32); /*0x1007c64ea*/
  v16 = v14 ^ __ROL8__(v12, 17); /*0x1007c64ed*/
  v17 = v15 ^ __ROL8__(v13, 21); /*0x1007c64f4*/
  v18 = v16 + v15; /*0x1007c64fb*/
  v19 = v17 + __ROL8__(v14, 32); /*0x1007c64fe*/
  v20 = v18 ^ __ROL8__(v16, 13); /*0x1007c6505*/
  v21 = v19 ^ __ROL8__(v17, 16); /*0x1007c6510*/
  v22 = v20 + v19; /*0x1007c6513*/
  v23 = v21 + __ROL8__(v18, 32); /*0x1007c651a*/
  v24 = v22 ^ __ROL8__(v20, 17); /*0x1007c651d*/
  v25 = v23 ^ __ROL8__(v21, 21); /*0x1007c6524*/
  v26 = v25 + __ROL8__(v22, 32); /*0x1007c652e*/
  v27 = (v24 + v23) ^ __ROL8__(v24, 13); /*0x1007c6535*/
  return (v27 + v26) ^ __ROL8__(v26 ^ __ROL8__(v25, 16), 21) ^ __ROL8__(v27, 17) ^ __ROL8__(v27 + v26, 32); /*0x1007c655a*/
}