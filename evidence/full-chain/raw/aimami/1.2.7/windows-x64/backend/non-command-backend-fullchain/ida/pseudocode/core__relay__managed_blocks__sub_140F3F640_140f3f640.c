// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f3f640 | name sub_140F3F640
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F3F640(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  const __m128i *v7; // rsi
  __m128i *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i si128; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm6
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  char v25; // al
  char v26; // al
  unsigned __int64 v27; // r9
  __int64 v28; // rcx
  unsigned __int64 v30; // [rsp+30h] [rbp-30h]

  v2 = sub_140E91160(a1, a2);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( !v3 )
  {
    v9 = 1;
    goto LABEL_20;
  }
  v7 = (const __m128i *)v2;
  nullsub_1(v4);
  v6 = 1;
  v8 = (__m128i *)sub_140001650(v5, 1);
  if ( !v8 )
LABEL_3:
    sub_141938D2B(v6, v5);
  v9 = (__int64)v8;
  sub_1418F44E0(v8, v7, v5);
  if ( v5 < 8 )
  {
    v10 = 0;
    goto LABEL_18;
  }
  if ( v5 < 0x20 )
  {
    v10 = 0;
    goto LABEL_15;
  }
  v10 = v5 & 0x7FFFFFFFFFFFFFE0LL;
  v11 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v13 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v14 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
  do
  {
    v15 = _mm_loadu_si128((const __m128i *)(v9 + v11));
    v16 = _mm_loadu_si128((const __m128i *)(v9 + v11 + 16));
    v17 = _mm_add_epi8(v15, si128);
    v18 = _mm_add_epi8(v16, si128);
    *(__m128i *)(v9 + v11) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v13), v17), v14), v15);
    *(__m128i *)(v9 + v11 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v13), v18), v14), v16);
    v11 += 32;
  }
  while ( v10 != v11 );
  if ( v5 == v10 )
    goto LABEL_20;
  if ( (v5 & 0x18) != 0 )
  {
LABEL_15:
    v19 = v10;
    v10 = v5 & 0x7FFFFFFFFFFFFFF8LL;
    v20 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
    v21 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
    v22 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
    do
    {
      v23 = _mm_loadl_epi64((const __m128i *)(v9 + v19));
      v24 = _mm_add_epi8(v23, v20);
      *(_QWORD *)(v9 + v19) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v24, v21), v24), v22), v23).m128i_u64[0];
      v19 += 8;
    }
    while ( v10 != v19 );
    goto LABEL_19;
  }
  do
  {
LABEL_18:
    *(_BYTE *)(v9 + v10) |= 32 * ((unsigned __int8)(*(_BYTE *)(v9 + v10) - 65) < 0x1Au);
    ++v10;
LABEL_19:
    ;
  }
  while ( v5 != v10 );
LABEL_20:
  v30 = v5;
  v25 = sub_140F9CFB0(aCcSwitch, 9, v9, v5);
  LOBYTE(v5) = 1;
  if ( !v25
    && !(unsigned __int8)sub_140F9CFB0(aCcSwitch_0, 9, v9, v30)
    && !(unsigned __int8)sub_140F9CFB0(aCcswitch, 8, v9, v30)
    && !(unsigned __int8)sub_140F9CFB0(aCodexSwitch, 12, v9, v30) )
  {
    v26 = sub_140F9CFB0(aCodexSwitch_0, 12, v9, v30);
    v27 = v30;
    v28 = v9;
    if ( v26 )
      goto LABEL_27;
    LODWORD(v5) = sub_140F9CFB0(aDeecodex, 8, v9, v30);
  }
  v27 = v30;
  v28 = v9;
LABEL_27:
  if ( v27 )
    sub_140001660(v28, v27, 1);
  return (unsigned int)v5;
}
