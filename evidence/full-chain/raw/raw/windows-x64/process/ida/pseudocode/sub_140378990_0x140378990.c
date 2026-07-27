// module: codexmate_lib/platform/process
// addr: 0x140378990
// name: sub_140378990
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140378990(const __m128i *a1, int *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  int v30; // [rsp+2Ch] [rbp-4Ch] BYREF
  __m128i v31; // [rsp+30h] [rbp-48h] BYREF
  __m128i v32; // [rsp+40h] [rbp-38h]
  __m128i v33; // [rsp+50h] [rbp-28h]
  __int128 v34; // [rsp+60h] [rbp-18h]
  __int64 v35; // [rsp+70h] [rbp-8h]

  v2 = _mm_loadu_si128(a1);
  v31 = _mm_xor_si128(_mm_shuffle_epi32(v2, 68), (__m128i)xmmword_141748C50);
  v32 = _mm_xor_si128(_mm_shuffle_epi32(v2, 238), (__m128i)xmmword_141748C60);
  v33 = v2;
  v34 = 0;
  v35 = 0;
  v30 = *a2;
  sub_140420970(&v31, &v30, 4);
  v3 = *((_QWORD *)&v34 + 1) | ((_QWORD)v34 << 56);
  v4 = (v3 ^ v32.m128i_i64[1]) + v31.m128i_i64[1];
  v5 = (v32.m128i_i64[0] + v31.m128i_i64[0]) ^ __ROL8__(v32.m128i_i64[0], 13);
  v6 = v4 ^ __ROL8__(v3 ^ v32.m128i_i64[1], 16);
  v7 = v5 + v4;
  v8 = v6 + __ROL8__(v32.m128i_i64[0] + v31.m128i_i64[0], 32);
  v9 = v7 ^ __ROL8__(v5, 17);
  v10 = v8 ^ __ROL8__(v6, 21);
  v11 = v9 + (v3 ^ v8);
  v12 = v10 + (__ROL8__(v7, 32) ^ 0xFFLL);
  v13 = v11 ^ __ROL8__(v9, 13);
  v14 = v12 ^ __ROL8__(v10, 16);
  v15 = v13 + v12;
  v16 = v14 + __ROL8__(v11, 32);
  v17 = v15 ^ __ROL8__(v13, 17);
  v18 = v16 ^ __ROL8__(v14, 21);
  v19 = v17 + v16;
  v20 = v18 + __ROL8__(v15, 32);
  v21 = v19 ^ __ROL8__(v17, 13);
  v22 = v20 ^ __ROL8__(v18, 16);
  v23 = v21 + v20;
  v24 = v22 + __ROL8__(v19, 32);
  v25 = v23 ^ __ROL8__(v21, 17);
  v26 = v24 ^ __ROL8__(v22, 21);
  v27 = v26 + __ROL8__(v23, 32);
  v28 = (v25 + v24) ^ __ROL8__(v25, 13);
  return (v28 + v27) ^ __ROL8__(v27 ^ __ROL8__(v26, 16), 21) ^ __ROL8__(v28, 17) ^ __ROL8__(v28 + v27, 32);
}