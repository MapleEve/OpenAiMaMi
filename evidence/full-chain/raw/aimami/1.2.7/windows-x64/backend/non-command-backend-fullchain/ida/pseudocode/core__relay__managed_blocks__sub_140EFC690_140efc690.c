// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140efc690 | name sub_140EFC690
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140EFC690(const __m128i *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  const __m128i *v3; // rdx
  bool v4; // zf
  char result; // al
  char v6; // al
  char v7; // si
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  const __m128i *v9; // [rsp+30h] [rbp-18h]
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  if ( a2 >= 0x10 )
  {
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(a1), (__m128i)xmmword_1419EC580)) == 0xFFFF )
    {
      v2 = a2 - 16;
      v3 = a1 + 1;
      goto LABEL_8;
    }
  }
  else if ( a2 < 9 )
  {
    return 0;
  }
  if ( a1->m128i_i64[0] ^ 0x73656C69666F7270LL | a1->m128i_u8[8] ^ 0x2ELL )
    return 0;
  v2 = a2 - 9;
  v3 = (const __m128i *)((char *)&a1->m128i_u64[1] + 1);
LABEL_8:
  sub_140EF8F80(&v8, v3, v2);
  if ( v8 == -1 )
    return 0;
  if ( v10 == 12 )
  {
    v4 = (v9->m128i_i64[0] ^ 0x725F696D616D6961LL | v9->m128i_i32[2] ^ 0x79616C65u) == 0;
LABEL_19:
    v6 = v4;
    goto LABEL_20;
  }
  if ( v10 <= 0xC
    || v9->m128i_i64[0] ^ 0x725F696D616D6961LL | *(__int64 *)((char *)v9->m128i_i64 + 5) ^ 0x5F79616C65725F69LL )
  {
    if ( v10 == 6 )
    {
      v4 = (v9->m128i_i32[0] ^ 0x616D6961 | v9->m128i_i16[2] ^ 0x3169) == 0;
      goto LABEL_19;
    }
    if ( v10 == 19 )
    {
      v4 = _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(
                 _mm_loadu_si128((const __m128i *)((char *)&xmmword_141A3E902 + 3)),
                 _mm_loadu_si128((const __m128i *)((char *)v9->m128i_i32 + 3))),
               _mm_cmpeq_epi8(_mm_loadu_si128(v9), _mm_loadu_si128((const __m128i *)&xmmword_141A3E902)))) == 0xFFFF;
      goto LABEL_19;
    }
    v6 = 0;
  }
  else
  {
    v6 = 1;
  }
LABEL_20:
  result = v6 ^ 1;
  if ( v8 )
  {
    v7 = result;
    sub_140001660(v9, v8, 1);
    return v7;
  }
  return result;
}
