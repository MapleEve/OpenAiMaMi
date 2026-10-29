// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x140392250 | name sub_140392250
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140392250(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __m128i v10; // xmm9
  __m128i *v13; // r12
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  bool v18; // zf
  __int64 v19; // r9
  __int64 i; // r10
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rdi
  __int64 v28; // r14
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  char v32; // al
  __int64 v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __m128i v37; // xmm2
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int64 v40; // r9
  const __m128i *v41; // rdi
  unsigned __int64 v42; // rbx
  __m128i v43; // xmm0
  __m128i v44; // xmm8
  __int64 v45; // rsi
  __int64 result; // rax
  _BYTE v48[80]; // [rsp+88h] [rbp+8h] BYREF
  __m128i v49; // [rsp+E0h] [rbp+60h] BYREF
  _BYTE v50[88]; // [rsp+F0h] [rbp+70h]
  __int64 v51; // [rsp+150h] [rbp+D0h]
  __int64 v52; // [rsp+158h] [rbp+D8h]
  __int64 v53; // [rsp+160h] [rbp+E0h]
  unsigned __int64 v54; // [rsp+168h] [rbp+E8h]
  __int64 v55; // [rsp+170h] [rbp+F0h]
  __int64 v56; // [rsp+178h] [rbp+F8h]
  __int64 v57; // [rsp+180h] [rbp+100h]
  __int64 v58; // [rsp+188h] [rbp+108h]
  __int64 v59; // [rsp+190h] [rbp+110h]
  __int64 v60; // [rsp+198h] [rbp+118h]
  __int64 v61; // [rsp+1A0h] [rbp+120h]
  __int64 v62; // [rsp+1A8h] [rbp+128h]
  __int64 v63; // [rsp+1B0h] [rbp+130h]
  __int64 v64; // [rsp+1B8h] [rbp+138h]
  __m128i v65; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v66; // [rsp+1D0h] [rbp+150h]
  __int64 v67; // [rsp+1E0h] [rbp+160h]
  __int64 v68; // [rsp+1E8h] [rbp+168h]
  char v69; // [rsp+1F7h] [rbp+177h]
  __int64 v70; // [rsp+1F8h] [rbp+178h]

  v70 = -2;
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = v4 + 104 * v5;
  v55 = v4;
  v57 = v3;
  v56 = v4;
  v7 = (v5 >> 1) + (v5 & 1);
  if ( !*(_QWORD *)(a1 + 24) )
    v7 = v5;
  v58 = v4 + 104 * v5;
  v63 = a1 + 32;
  if ( v7 > *(_QWORD *)(a1 + 16) )
  {
    v69 = 1;
    LOBYTE(v6) = 1;
    sub_1418FD1F0(a1, v7, a1 + 32, v6);
  }
  v61 = v57;
  v62 = v58;
  v59 = v55;
  v60 = v56;
  v8 = v56;
  v51 = v58;
  if ( v56 != v58 )
  {
    v64 = a1;
    do
    {
      *(_QWORD *)&v48[72] = *(_QWORD *)(v8 + 96);
      *(_OWORD *)&v48[56] = *(_OWORD *)(v8 + 80);
      *(_OWORD *)&v48[40] = *(_OWORD *)(v8 + 64);
      v38 = *(_OWORD *)(v8 + 16);
      v39 = *(_OWORD *)(v8 + 32);
      *(_OWORD *)&v48[24] = *(_OWORD *)(v8 + 48);
      *(_OWORD *)&v48[8] = v39;
      *(_QWORD *)v48 = *((_QWORD *)&v38 + 1);
      v66 = *(_QWORD *)(v8 + 16);
      v65 = *(__m128i *)v8;
      v67 = v8 + 104;
      v23 = sub_140D2AC70(v63, &v65);
      if ( !*(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v40) = 1;
        sub_1418FD1F0(a1, 1, v63, v40);
      }
      v41 = *(const __m128i **)a1;
      v19 = *(_QWORD *)(a1 + 8);
      v42 = v23 >> 57;
      v43 = _mm_cvtsi32_si128(v23 >> 57);
      v44 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v43, v43), 0), 68);
      v16 = v65.m128i_i64[1];
      v45 = v66;
      _RAX = 0;
      for ( i = 0; ; i += 16 )
      {
        v9 = v19 & v23;
        v10 = _mm_loadu_si128((const __m128i *)((char *)v41 + v9));
        _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v10, v44));
        if ( _R15D )
          break;
LABEL_12:
        _RDX = v54;
        if ( _RAX != 1 )
        {
          if ( !_mm_movemask_epi8(v10) )
          {
            _RAX = 0;
            goto LABEL_18;
          }
          __asm { tzcnt   edx, eax }
          _RDX = v19 & (v9 + _RDX);
        }
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v10, (__m128i)-1LL)) )
        {
          v32 = v41->m128i_i8[_RDX];
          _R8 = _RDX;
          v8 = v67;
          if ( v32 >= 0 )
          {
            _EAX = _mm_movemask_epi8(_mm_load_si128(v41));
            __asm { tzcnt   r8d, eax }
            v32 = v41->m128i_i8[_R8];
          }
          *(_QWORD *)v50 = v66;
          v49 = v65;
          *(_OWORD *)&v50[72] = *(_OWORD *)&v48[64];
          *(_OWORD *)&v50[56] = *(_OWORD *)&v48[48];
          *(_OWORD *)&v50[40] = *(_OWORD *)&v48[32];
          *(_OWORD *)&v50[24] = *(_OWORD *)&v48[16];
          *(_OWORD *)&v50[8] = *(_OWORD *)v48;
          v41->m128i_i8[_R8] = v42;
          v41[1].m128i_i8[v19 & (_R8 - 16)] = v42;
          *(__m128i *)(a1 + 16) = _mm_sub_epi64(
                                    _mm_loadu_si128((const __m128i *)(a1 + 16)),
                                    (__m128i)_mm_shuffle_ps(
                                               (__m128)_mm_cvtsi32_si128(v32 & 1),
                                               (__m128)xmmword_1419D3560,
                                               228));
          v34 = -104LL * _R8;
          v41->m128i_i64[(unsigned __int64)v34 / 8 - 1] = *(_QWORD *)&v50[80];
          *(const __m128i *)((char *)v41 + v34 - 24) = *(const __m128i *)&v50[64];
          *(const __m128i *)((char *)v41 + v34 - 40) = *(const __m128i *)&v50[48];
          v35 = _mm_load_si128(&v49);
          v36 = *(__m128i *)v50;
          v37 = *(__m128i *)&v50[16];
          *(const __m128i *)((char *)v41 + v34 - 56) = *(const __m128i *)&v50[32];
          *(__m128i *)((char *)v41 + v34 - 72) = v37;
          *(__m128i *)((char *)v41 + v34 - 88) = v36;
          *(__m128i *)((char *)v41 + v34 - 104) = v35;
          goto LABEL_31;
        }
        _RAX = 1;
LABEL_18:
        v54 = _RDX;
        v23 = i + v9 + 16;
      }
      v68 = v19;
      v52 = i;
      v53 = _RAX;
      while ( 1 )
      {
        __asm { tzcnt   eax, r15d }
        if ( v45 == *((_QWORD *)&v41[-5] - 13 * (v19 & (v9 + _RAX)) - 1) )
        {
          v13 = (__m128i *)((char *)v41 - 104 * (v19 & (v9 + _RAX)));
          v14 = v16;
          v15 = sub_1418F4B70(v16, v13[-6].m128i_i64[0]);
          v16 = v14;
          if ( !v15 )
            break;
        }
        v17 = _R15D - 1;
        LOWORD(v17) = _R15D & (_R15D - 1);
        v18 = (_WORD)v17 == 0;
        _R15D = v17;
        a1 = v64;
        v19 = v68;
        i = v52;
        _RAX = v53;
        if ( v18 )
          goto LABEL_12;
      }
      v24 = v13[-5].m128i_u64[0];
      v25 = v13[-5].m128i_i64[1];
      v26 = v13[-4].m128i_i64[1];
      v27 = v13[-3].m128i_i64[0];
      v28 = v13[-2].m128i_i64[0];
      v68 = v13[-2].m128i_i64[1];
      v13[-1] = *(__m128i *)&v48[64];
      v29 = _mm_loadu_si128((const __m128i *)v48);
      v30 = *(__m128i *)&v48[16];
      v31 = *(__m128i *)&v48[32];
      v13[-2] = *(__m128i *)&v48[48];
      v13[-3] = v31;
      v13[-4] = v30;
      v13[-5] = v29;
      if ( v65.m128i_i64[0] )
        sub_140001660(v16, v65.m128i_i64[0], 1);
      a1 = v64;
      v8 = v67;
      if ( v24 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( v24 )
          sub_140001660(v25, v24, 1);
        if ( v26 )
          sub_140001660(v27, v26, 1);
        if ( (unsigned __int64)(v28 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v68, v28, 1);
      }
LABEL_31:
      ;
    }
    while ( v8 != v51 );
  }
  result = v61;
  if ( v61 )
    return sub_140001660(v59, 104 * v61, 8);
  return result;
}
