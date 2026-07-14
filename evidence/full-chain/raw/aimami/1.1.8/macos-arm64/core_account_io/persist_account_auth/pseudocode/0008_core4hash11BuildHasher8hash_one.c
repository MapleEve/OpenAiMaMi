// mac 1.1.8 behavioral persist_account_auth 0x1007c5b50 d=1
__int64 __fastcall core::hash::BuildHasher::hash_one::hf01745fa5506c7f9(const __m128i *a1, __int64 a2)
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
  unsigned int v35; // [rsp+57h] [rbp-9h] BYREF

  v2 = _mm_loadu_si128(a1); /*0x1007c5b59*/
  v30 = _mm_xor_si128(_mm_shuffle_epi32(v2, 68), (__m128i)xmmword_1012C8670); /*0x1007c5b77*/
  v31 = _mm_xor_si128(_mm_shuffle_epi32(v2, 238), (__m128i)xmmword_1012C8680); /*0x1007c5b7c*/
  v32 = v2; /*0x1007c5b81*/
  v33 = 0; /*0x1007c5b8a*/
  v34 = 0; /*0x1007c5b8f*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h1d8db205c8c4d35e( /*0x1007c5ba9*/
    v30.i64,
    *(unsigned int **)(a2 + 8),
    *(_QWORD *)(a2 + 16));
  LOBYTE(v35) = -1; /*0x1007c5bae*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h1d8db205c8c4d35e(v30.i64, &v35, 1u); /*0x1007c5bbe*/
  v3 = *((_QWORD *)&v33 + 1) | ((_QWORD)v33 << 56); /*0x1007c5bcb*/
  v4 = (v3 ^ v31.i64[1]) + v30.i64[1]; /*0x1007c5be9*/
  v5 = (v31.i64[0] + v30.i64[0]) ^ __ROL8__(v31.i64[0], 13); /*0x1007c5bec*/
  v6 = v4 ^ __ROL8__(v3 ^ v31.i64[1], 16); /*0x1007c5bf3*/
  v7 = v5 + v4; /*0x1007c5bfa*/
  v8 = v6 + __ROL8__(v31.i64[0] + v30.i64[0], 32); /*0x1007c5bfd*/
  v9 = v7 ^ __ROL8__(v5, 17); /*0x1007c5c04*/
  v10 = v8 ^ __ROL8__(v6, 21); /*0x1007c5c0f*/
  v11 = v9 + (v3 ^ v8); /*0x1007c5c1c*/
  v12 = v10 + (__ROL8__(v7, 32) ^ 0xFFLL); /*0x1007c5c1f*/
  v13 = v11 ^ __ROL8__(v9, 13); /*0x1007c5c26*/
  v14 = v12 ^ __ROL8__(v10, 16); /*0x1007c5c31*/
  v15 = v13 + v12; /*0x1007c5c34*/
  v16 = v14 + __ROL8__(v11, 32); /*0x1007c5c3b*/
  v17 = v15 ^ __ROL8__(v13, 17); /*0x1007c5c3e*/
  v18 = v16 ^ __ROL8__(v14, 21); /*0x1007c5c45*/
  v19 = v17 + v16; /*0x1007c5c4c*/
  v20 = v18 + __ROL8__(v15, 32); /*0x1007c5c4f*/
  v21 = v19 ^ __ROL8__(v17, 13); /*0x1007c5c56*/
  v22 = v20 ^ __ROL8__(v18, 16); /*0x1007c5c61*/
  v23 = v21 + v20; /*0x1007c5c64*/
  v24 = v22 + __ROL8__(v19, 32); /*0x1007c5c6b*/
  v25 = v23 ^ __ROL8__(v21, 17); /*0x1007c5c6e*/
  v26 = v24 ^ __ROL8__(v22, 21); /*0x1007c5c75*/
  v27 = v26 + __ROL8__(v23, 32); /*0x1007c5c7f*/
  v28 = (v25 + v24) ^ __ROL8__(v25, 13); /*0x1007c5c86*/
  return (v28 + v27) ^ __ROL8__(v27 ^ __ROL8__(v26, 16), 21) ^ __ROL8__(v28, 17) ^ __ROL8__(v28 + v27, 32); /*0x1007c5cab*/
}