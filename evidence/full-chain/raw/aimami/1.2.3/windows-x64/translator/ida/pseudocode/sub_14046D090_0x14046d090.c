// module: codexmate_lib/core/relay/translator
// addr: 0x14046d090
// name: sub_14046D090
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_14046D090(__m128i *a1, __int64 *a2, const __m128i *a3)
{
  _QWORD *v4; // r14
  unsigned __int64 v5; // r15
  __int64 v7; // r13
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __m128i v10; // xmm6
  const __m128i *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rbx
  __m128i v17; // xmm8
  __int64 v19; // r13
  const __m128i *v20; // r14
  __int64 v21; // r15
  int v22; // eax
  __m128i *v23; // rsi
  unsigned __int64 v25; // [rsp+28h] [rbp-58h]
  __int64 v26; // [rsp+30h] [rbp-50h]
  __int64 v27; // [rsp+38h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-40h]

  v4 = a2 + 4;
  v5 = sub_140378810(a2 + 4, a3);
  _RAX = v5 >> 57;
  v7 = *a2;
  v8 = a2[1];
  v9 = _mm_cvtsi32_si128(v5 >> 57);
  v10 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v9, v9), 0), 68);
  v11 = a3;
  v12 = a3->m128i_i64[1];
  v13 = a3[1].m128i_i64[0];
  v14 = 0;
  v15 = v5;
  while ( 1 )
  {
    v16 = v8 & v15;
    v17 = _mm_loadu_si128((const __m128i *)(v7 + v16));
    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v17, v10));
    if ( _R12D )
      break;
LABEL_7:
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v17, (__m128i)-1LL));
    if ( (_DWORD)_RAX )
    {
      if ( !a2[2] )
      {
        LOBYTE(v12) = 1;
        sub_141692EA0(a2, 1, v4, v12);
      }
      v23 = a1;
      a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
      *a1 = _mm_loadu_si128(a3);
      a1[1].m128i_i64[1] = (__int64)a2;
      a1[2].m128i_i64[0] = v5;
      return v23;
    }
    v15 = v14 + v16 + 16;
    v14 += 16;
  }
  v25 = v5;
  v26 = v7;
  v27 = v8;
  v28 = v14;
  while ( 1 )
  {
    __asm { tzcnt   eax, r12d }
    v19 = v7 - 32 * (v8 & (v16 + _RAX));
    if ( *(_QWORD *)(v19 - 16) == v13 )
    {
      v20 = v11;
      v21 = v12;
      v22 = sub_1416847B0(*(_QWORD *)(v19 - 24), v12, v13);
      v12 = v21;
      v11 = v20;
      if ( !v22 )
        break;
    }
    _RAX = (unsigned int)(_R12D - 1);
    LOWORD(_RAX) = _R12D & (_R12D - 1);
    _R12D = _RAX;
    v4 = a2 + 4;
    v5 = v25;
    v7 = v26;
    v8 = v27;
    v14 = v28;
    if ( !(_WORD)_RAX )
      goto LABEL_7;
  }
  v23 = a1;
  a1->m128i_i64[1] = v19;
  a1[1].m128i_i64[0] = (__int64)a2;
  a1->m128i_i64[0] = -1;
  if ( v20->m128i_i64[0] )
    sub_140001660(v21, v20->m128i_i64[0], 1);
  return v23;
}