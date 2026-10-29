// win 1.2.7 | module src/core/relay/codex_catalog.rs | ea 0x1403ac810 | name sub_1403AC810
// win 1.2.7 | module src/core/relay/codex_catalog.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403AC810(__int64 a1, __m128i *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // r9
  const __m128i *v7; // r13
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __m128i v10; // xmm0
  __m128i v11; // xmm6
  __m128i *v12; // rcx
  __int64 v13; // r8
  __int64 i; // r9
  unsigned __int64 v16; // rdi
  __m128i v17; // xmm8
  const __m128i *v19; // rbx
  int v20; // eax
  bool v21; // zf
  __int64 v23; // rdx
  char v24; // al
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __m128i v32; // [rsp+20h] [rbp-60h] BYREF
  __m128i v33; // [rsp+30h] [rbp-50h]
  __m128i v34; // [rsp+40h] [rbp-40h]
  __int64 v35; // [rsp+58h] [rbp-28h]
  __int64 v36; // [rsp+60h] [rbp-20h]
  __int64 v37; // [rsp+68h] [rbp-18h]
  __int64 v38; // [rsp+70h] [rbp-10h]
  __int64 v39; // [rsp+78h] [rbp-8h]
  __int64 v40; // [rsp+80h] [rbp+0h]
  __int64 v41; // [rsp+88h] [rbp+8h]
  __m128i *v42; // [rsp+90h] [rbp+10h]
  __int64 v43; // [rsp+98h] [rbp+18h]

  v43 = -2;
  v3 = a1;
  v4 = a1 + 32;
  v42 = a2;
  v5 = sub_140D2CA70(a1 + 32);
  if ( !*(_QWORD *)(v3 + 16) )
  {
    LOBYTE(v6) = 1;
    sub_141907CB0(v3, 1, v4, v6);
  }
  v7 = *(const __m128i **)v3;
  v8 = *(_QWORD *)(v3 + 8);
  v9 = v5 >> 57;
  v10 = _mm_cvtsi32_si128(v5 >> 57);
  v11 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v10, v10), 0), 68);
  v12 = v42;
  v40 = v42->m128i_i64[1];
  v13 = v42[1].m128i_i64[0];
  v39 = v42[2].m128i_i64[1];
  v35 = v42[2].m128i_i64[0];
  _RAX = 0;
  for ( i = 0; ; i += 16 )
  {
    v16 = v8 & v5;
    v17 = _mm_loadu_si128((const __m128i *)((char *)v7 + v16));
    _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v17, v11));
    if ( _R15D )
      break;
LABEL_11:
    if ( _RAX != 1 )
    {
      if ( !_mm_movemask_epi8(v17) )
      {
        _RAX = 0;
        goto LABEL_17;
      }
      __asm { tzcnt   r14d, eax }
      _R14 = v8 & (v16 + _R14);
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v17, (__m128i)-1LL)) )
    {
      v24 = v7->m128i_i8[_R14];
      if ( v24 >= 0 )
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v7));
        __asm { tzcnt   r14d, eax }
        v24 = v7->m128i_i8[_R14];
      }
      v25 = *v12;
      v26 = v12[1];
      v34 = v12[2];
      v33 = v26;
      v32 = v25;
      v7->m128i_i8[_R14] = v9;
      v7[1].m128i_i8[v8 & (_R14 - 16)] = v9;
      *(__m128i *)(v3 + 16) = _mm_sub_epi64(
                                _mm_loadu_si128((const __m128i *)(v3 + 16)),
                                (__m128i)_mm_shuffle_pd(
                                           (__m128d)_mm_cvtsi32_si128(v24 & 1),
                                           (__m128d)xmmword_1419D3560,
                                           2));
      v27 = 0xFFFFFFFFFFFFFFDLL * _R14;
      v28 = _mm_load_si128(&v32);
      v29 = v33;
      v7[v27 - 1] = v34;
      v7[v27 - 2] = v29;
      v7[v27 - 3] = v28;
      LODWORD(v3) = 0;
      return (unsigned int)v3;
    }
    _RAX = 1;
LABEL_17:
    v5 = i + v16 + 16;
  }
  v36 = v8;
  v41 = v13;
  v37 = i;
  v38 = _RAX;
  while ( 1 )
  {
    __asm { tzcnt   eax, r15d }
    if ( v13 == v7[-3 * (v8 & (v16 + _RAX)) - 2].m128i_i64[0] )
    {
      v19 = &v7[-3 * (v8 & (v16 + _RAX))];
      if ( !(unsigned int)sub_1418F4B70(v40, v19[-3].m128i_i64[1])
        && v39 == v19[-1].m128i_i64[1]
        && !(unsigned int)sub_1418F4B70(v35, v19[-1].m128i_i64[0]) )
      {
        break;
      }
    }
    v20 = _R15D - 1;
    LOWORD(v20) = _R15D & (_R15D - 1);
    v21 = (_WORD)v20 == 0;
    _R15D = v20;
    v12 = v42;
    v8 = v36;
    v13 = v41;
    i = v37;
    _RAX = v38;
    if ( v21 )
      goto LABEL_11;
  }
  if ( v42->m128i_i64[0] )
    sub_140001660(v40, v42->m128i_i64[0], 1);
  v23 = v42[1].m128i_i64[1];
  LOBYTE(v3) = 1;
  if ( v23 )
    sub_140001660(v42[2].m128i_i64[0], v23, 1);
  return (unsigned int)v3;
}
