// mac 1.1.8 delete_sessions node va=0x100edf700 depth=2
// core4hash11BuildHasher8hash_one
__int64 __fastcall core::hash::BuildHasher::hash_one::h93317f3b4d40df8f(const __m128i *a1, _QWORD *a2)
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

  v2 = _mm_loadu_si128(a1); /*0x100edf709*/
  v30 = _mm_xor_si128(_mm_shuffle_epi32(v2, 68), (__m128i)xmmword_1012C8670); /*0x100edf727*/
  v31 = _mm_xor_si128(_mm_shuffle_epi32(v2, 238), (__m128i)xmmword_1012C8680); /*0x100edf72c*/
  v32 = v2; /*0x100edf731*/
  v33 = 0; /*0x100edf73a*/
  v34 = 0; /*0x100edf73f*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::hb85f9411ee69f752(&v30, *a2, a2[1]); /*0x100edf758*/
  v35[0] = -1; /*0x100edf75d*/
  _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::hb85f9411ee69f752(&v30, v35, 1); /*0x100edf76d*/
  v3 = *((_QWORD *)&v33 + 1) | ((_QWORD)v33 << 56); /*0x100edf77a*/
  v4 = (v3 ^ v31.i64[1]) + v30.i64[1]; /*0x100edf798*/
  v5 = (v31.i64[0] + v30.i64[0]) ^ __ROL8__(v31.i64[0], 13); /*0x100edf79b*/
  v6 = v4 ^ __ROL8__(v3 ^ v31.i64[1], 16); /*0x100edf7a2*/
  v7 = v5 + v4; /*0x100edf7a9*/
  v8 = v6 + __ROL8__(v31.i64[0] + v30.i64[0], 32); /*0x100edf7ac*/
  v9 = v7 ^ __ROL8__(v5, 17); /*0x100edf7b3*/
  v10 = v8 ^ __ROL8__(v6, 21); /*0x100edf7be*/
  v11 = v9 + (v3 ^ v8); /*0x100edf7cb*/
  v12 = v10 + (__ROL8__(v7, 32) ^ 0xFFLL); /*0x100edf7ce*/
  v13 = v11 ^ __ROL8__(v9, 13); /*0x100edf7d5*/
  v14 = v12 ^ __ROL8__(v10, 16); /*0x100edf7e0*/
  v15 = v13 + v12; /*0x100edf7e3*/
  v16 = v14 + __ROL8__(v11, 32); /*0x100edf7ea*/
  v17 = v15 ^ __ROL8__(v13, 17); /*0x100edf7ed*/
  v18 = v16 ^ __ROL8__(v14, 21); /*0x100edf7f4*/
  v19 = v17 + v16; /*0x100edf7fb*/
  v20 = v18 + __ROL8__(v15, 32); /*0x100edf7fe*/
  v21 = v19 ^ __ROL8__(v17, 13); /*0x100edf805*/
  v22 = v20 ^ __ROL8__(v18, 16); /*0x100edf810*/
  v23 = v21 + v20; /*0x100edf813*/
  v24 = v22 + __ROL8__(v19, 32); /*0x100edf81a*/
  v25 = v23 ^ __ROL8__(v21, 17); /*0x100edf81d*/
  v26 = v24 ^ __ROL8__(v22, 21); /*0x100edf824*/
  v27 = v26 + __ROL8__(v23, 32); /*0x100edf82e*/
  v28 = (v25 + v24) ^ __ROL8__(v25, 13); /*0x100edf835*/
  return (v28 + v27) ^ __ROL8__(v27 ^ __ROL8__(v26, 16), 21) ^ __ROL8__(v28, 17) ^ __ROL8__(v28 + v27, 32); /*0x100edf85a*/
}