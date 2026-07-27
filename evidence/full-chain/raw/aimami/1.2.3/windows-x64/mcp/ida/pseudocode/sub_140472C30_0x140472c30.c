// module: codexmate_lib/core/mcp
// addr: 0x140472c30
// name: sub_140472C30
// win 1.2.1 | module src/core/mcp.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140472C30(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r15
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  const __m128i *v13; // r13
  __int64 v14; // r10
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __m128i v17; // xmm6
  __m128i *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 i; // rcx
  unsigned __int64 v23; // r14
  __m128i v24; // xmm8
  __int64 v26; // rax
  __int8 *v27; // r15
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // eax
  __int128 v32; // xmm0
  __int64 v33; // r14
  char v34; // al
  __int64 v35; // rax
  __m128i v38; // [rsp+20h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-50h]
  const __m128i *v40; // [rsp+40h] [rbp-40h]
  __int64 v41; // [rsp+48h] [rbp-38h]
  unsigned __int64 v42; // [rsp+50h] [rbp-30h]
  __int64 v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h]
  unsigned __int64 v45; // [rsp+68h] [rbp-18h]
  __int64 v46; // [rsp+70h] [rbp-10h]
  __int64 v47; // [rsp+78h] [rbp-8h]

  v8 = a2 + 32;
  _RAX = sub_140378810(a2 + 32, a3);
  v11 = _RAX;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    LOBYTE(v10) = 1;
    HIDWORD(_RAX) = (unsigned __int64)sub_14168D2B0(a2, 1, v8, v10) >> 32;
  }
  v47 = a4;
  v46 = a1;
  v13 = *(const __m128i **)a2;
  v40 = (const __m128i *)a2;
  v14 = *(_QWORD *)(a2 + 8);
  v15 = v11 >> 57;
  v16 = _mm_cvtsi32_si128(v11 >> 57);
  v17 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v16, v16), 0), 68);
  v18 = a3;
  v19 = a3->m128i_i64[1];
  v20 = a3[1].m128i_i64[0];
  v21 = 0;
  for ( i = 0; ; i += 16 )
  {
    v23 = v14 & v11;
    v24 = _mm_loadu_si128((const __m128i *)((char *)v13 + v23));
    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v24, v17));
    if ( _R12D )
      break;
LABEL_9:
    _R11 = v45;
    if ( v21 != 1 )
    {
      _RAX = (unsigned int)_mm_movemask_epi8(v24);
      if ( !(_DWORD)_RAX )
      {
        v21 = 0;
        goto LABEL_15;
      }
      __asm { tzcnt   r11d, eax }
      _R11 = v14 & (v23 + _R11);
    }
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v24, (__m128i)-1LL));
    if ( (_DWORD)_RAX )
    {
      v34 = v13->m128i_i8[_R11];
      v33 = v46;
      if ( v34 >= 0 )
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v13));
        __asm { tzcnt   r11d, eax }
        v34 = v13->m128i_i8[_R11];
      }
      v39 = v18[1].m128i_i64[0];
      v38 = *v18;
      v13->m128i_i8[_R11] = v15;
      v13[1].m128i_i8[v14 & (_R11 - 16)] = v15;
      v40[1] = _mm_sub_epi64(
                 _mm_loadu_si128(v40 + 1),
                 (__m128i)_mm_shuffle_pd((__m128d)_mm_cvtsi32_si128(v34 & 1), (__m128d)xmmword_141748CD0, 2));
      v35 = -5LL * _R11;
      *((_QWORD *)&v13[-1] + v35 - 1) = v39;
      *(__m128i *)((char *)v13 + 8 * v35 - 40) = v38;
      v13[-1].m128i_i64[v35] = v47;
      v13->m128i_i64[v35 - 1] = a5;
      *(_QWORD *)v46 = 0;
      return v33;
    }
    v21 = 1;
LABEL_15:
    v45 = _R11;
    v11 = i + v23 + 16;
  }
  v41 = v14;
  v42 = v15;
  v43 = i;
  v44 = v21;
  while ( 1 )
  {
    __asm { tzcnt   eax, r12d }
    v26 = -5LL * (v14 & (v23 + _RAX));
    if ( v20 == *((_QWORD *)&v13[-1] + v26 - 1) )
    {
      v27 = &v13->m128i_i8[8 * v26];
      v28 = v20;
      v29 = a5;
      v30 = sub_1416847B0(v19, *((_QWORD *)v27 - 4), v20);
      a5 = v29;
      v20 = v28;
      v18 = a3;
      if ( !v30 )
        break;
    }
    _RAX = (unsigned int)(_R12D - 1);
    LOWORD(_RAX) = _R12D & (_R12D - 1);
    _R12D = _RAX;
    v14 = v41;
    v15 = v42;
    i = v43;
    v21 = v44;
    if ( !(_WORD)_RAX )
      goto LABEL_9;
  }
  v32 = *((_OWORD *)v27 - 1);
  *((_QWORD *)v27 - 2) = v47;
  *((_QWORD *)v27 - 1) = a5;
  v33 = v46;
  *(_OWORD *)(v46 + 8) = v32;
  *(_QWORD *)v46 = 1;
  if ( a3->m128i_i64[0] )
    sub_140001660(a3->m128i_i64[1], a3->m128i_i64[0], 1);
  return v33;
}