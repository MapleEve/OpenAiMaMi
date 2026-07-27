// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140669240
// name: sub_140669240
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140669240(__int64 a1, unsigned __int8 a2, __int16 a3)
{
  _WORD *v6; // rax
  int v7; // r14d
  int v8; // r15d
  unsigned int v9; // r15d
  __int64 v10; // r12
  __m128i v11; // xmm0
  __int64 v12; // r9
  int v13; // r10d
  __int64 v14; // rdx
  bool v15; // zf
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h]
  __int64 v19; // [rsp+38h] [rbp-8h]

  v19 = -2;
  nullsub_1(a1);
  v6 = (_WORD *)sub_140001650(258, 2);
  if ( !v6 )
    sub_1416C2D4B(2, 258);
  *(_QWORD *)&v17 = 129;
  *((_QWORD *)&v17 + 1) = v6;
  v18 = 0;
  if ( ((a3 != 0) & a2) != 0 )
  {
    *v6 = a3;
    v18 = 1;
  }
  v7 = 0;
  do
  {
    v8 = v7++;
    v9 = v8 + 25817;
    v10 = v18;
    v11 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v9), 0), 68);
    v12 = 0;
    while ( (v18 & 0x3FFFFFFFFFFFFFE0LL) != v12 )
    {
      v13 = _mm_movemask_epi8(
              _mm_packs_epi16(
                _mm_or_si128(
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)(*((_QWORD *)&v17 + 1) + 2 * v12 + 32)), v11),
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)(*((_QWORD *)&v17 + 1) + 2 * v12)), v11)),
                _mm_or_si128(
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)(*((_QWORD *)&v17 + 1) + 2 * v12 + 48)), v11),
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)(*((_QWORD *)&v17 + 1) + 2 * v12 + 16)), v11))));
      v12 += 32;
      if ( v13 )
        goto LABEL_6;
    }
    v14 = 0;
    while ( 2 * (v18 & 0x1F) != v14 )
    {
      v15 = *(_WORD *)(*((_QWORD *)&v17 + 1) + 2 * (v18 & 0x3FFFFFFFFFFFFFE0LL) + v14) == (unsigned __int16)v9;
      v14 += 2;
      if ( v15 )
        goto LABEL_6;
    }
    if ( v18 == (_QWORD)v17 )
      sub_1416C1E80(&v17);
    *(_WORD *)(*((_QWORD *)&v17 + 1) + 2 * v10) = v9;
    v18 = v10 + 1;
LABEL_6:
    ;
  }
  while ( (unsigned __int16)v7 != 128 );
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v17;
  return a1;
}