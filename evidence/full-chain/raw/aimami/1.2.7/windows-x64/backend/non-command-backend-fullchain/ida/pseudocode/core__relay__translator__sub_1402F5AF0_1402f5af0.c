// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402f5af0 | name sub_1402F5AF0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_1402F5AF0(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // r8
  __m128i v7; // xmm0
  __m128i v8; // [rsp+20h] [rbp-50h] BYREF
  __m128i v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  __int128 v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-10h]
  __int64 v14; // [rsp+68h] [rbp-8h]
  __int64 v15; // [rsp+70h] [rbp+0h]

  v15 = -2;
  v3 = sub_1416419F0(aEncryptedConte_0, 17, a2);
  if ( v3
    && *(_BYTE *)v3 == 3
    && (v4 = *(_QWORD *)(v3 + 24), v4 >= 0x1D)
    && (v5 = *(_QWORD *)(v3 + 16),
        _mm_movemask_epi8(
          _mm_and_si128(
            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_1419D37F0),
            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v5 + 13)), (__m128i)xmmword_1419D37E0))) == 0xFFFF)
    && (sub_1401A44D0(&v10, &unk_1419E5C5D, v5 + 29, v4 - 29), v10 != -1) )
  {
    v14 = v10;
    v13 = v11;
    v10 = v11;
    v11 = v12;
    v12 = 0;
    sub_14062F970(&v8, &v10);
    if ( v8.m128i_i8[0] == -1 )
    {
      a1->m128i_i8[0] = -1;
      sub_14002F910(&v8.m128i_u64[1]);
    }
    else
    {
      v7 = _mm_loadu_si128(&v8);
      a1[1] = _mm_loadu_si128(&v9);
      *a1 = v7;
    }
    if ( v14 )
      sub_140001660(v13, v14, 1);
  }
  else
  {
    a1->m128i_i8[0] = -1;
  }
  return a1;
}
