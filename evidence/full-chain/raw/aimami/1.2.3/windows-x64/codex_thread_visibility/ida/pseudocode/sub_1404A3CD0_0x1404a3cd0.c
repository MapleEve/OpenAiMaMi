// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404a3cd0
// name: sub_1404A3CD0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404A3CD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  int v10; // eax
  __m128i v11; // xmm6
  __int64 v12; // rdi
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  __int64 v23; // rdi
  const __m128i *v24; // r15
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 i; // rcx
  unsigned __int64 v28; // rax
  __m128i v29; // xmm2
  __int64 v31; // r9
  char v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __m128i si128; // xmm2
  __m128i v42; // xmm3
  __int64 v44; // r8
  int v45; // r9d
  char v46; // r8
  const __m128i *v47; // rsi
  __m128i v49; // xmm0
  __int64 v50; // rax
  __int64 v51; // rdx
  __m128i v52; // [rsp+20h] [rbp-60h] BYREF
  __int64 v53; // [rsp+30h] [rbp-50h]
  _OWORD v54[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v55[72]; // [rsp+80h] [rbp+0h] BYREF
  __m128i v56; // [rsp+D0h] [rbp+50h]
  __m128i v57; // [rsp+E0h] [rbp+60h]
  __m128i v58; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v59; // [rsp+100h] [rbp+80h] BYREF
  __m128i v60; // [rsp+110h] [rbp+90h] BYREF
  __m128i v61; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v62; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v63; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v64; // [rsp+158h] [rbp+D8h]
  __m128i v65; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v66; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v67; // [rsp+180h] [rbp+100h] BYREF
  __m128i v68; // [rsp+190h] [rbp+110h] BYREF
  __m128i v69; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v70; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v71; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v72; // [rsp+1D0h] [rbp+150h]
  __int64 v73; // [rsp+1E8h] [rbp+168h]

  v73 = -2;
  sub_14046F850(v55, a2, aPragmaTableInf, 26);
  if ( *(_DWORD *)v55 == 1 )
  {
    v68 = *(__m128i *)&v55[56];
    v67 = *(__m128i *)&v55[40];
    v66 = *(__m128i *)&v55[24];
    v65 = *(__m128i *)&v55[8];
    *(_QWORD *)&v54[0] = &v65;
    *((_QWORD *)&v54[0] + 1) = sub_140FB8910;
    sub_14149C0F0(&v52, &unk_141757B6F, v54);
    v59 = v52;
    v60.m128i_i64[0] = v53;
    result = sub_14043D020(&v65);
    v4 = _mm_load_si128(&v59);
    v5 = _mm_load_si128(&v60);
    v6 = _mm_load_si128(&v61);
    v72 = _mm_load_si128(&v62);
    v71 = v6;
    v70 = v5;
    v69 = v4;
    *(__m128i *)(a1 + 56) = v72;
    *(__m128i *)(a1 + 40) = v6;
    *(__m128i *)(a1 + 24) = v5;
    *(__m128i *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 10;
    return result;
  }
  v7 = _mm_loadu_si128((const __m128i *)&v55[24]);
  v8 = _mm_loadu_si128((const __m128i *)&v55[40]);
  v9 = _mm_loadu_si128((const __m128i *)&v55[56]);
  v69 = _mm_loadu_si128((const __m128i *)&v55[8]);
  v59 = v69;
  v60 = v7;
  v61 = v8;
  v62 = v9;
  v10 = sub_1414B6B70(v9.m128i_i64[1]);
  if ( v10 )
  {
    *(_OWORD *)v55 = 0x8000000000000013uLL;
    *(_QWORD *)&v55[16] = v10;
    v63.m128i_i64[0] = (__int64)v55;
    v63.m128i_i64[1] = (__int64)sub_140FB8910;
    sub_14149C0F0(&v69, &unk_141757AB2, &v63);
    v11 = v69;
    v12 = v70.m128i_i64[0];
    sub_14043D020(v55);
    *(_QWORD *)a1 = 10;
    *(__m128i *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 24) = v12;
  }
  else
  {
    sub_140988360(&v65, &v59, 0);
    if ( v65.m128i_i64[0] == -1 )
    {
      v18 = _mm_loadu_si128((const __m128i *)&v66.m128i_u64[1]);
      v19 = _mm_loadu_si128((const __m128i *)&v67.m128i_u64[1]);
      v56 = _mm_loadu_si128((const __m128i *)&v65.m128i_u64[1]);
      v57 = v18;
      v58 = v19;
      v20 = v18.m128i_i64[1];
      if ( v18.m128i_i64[1] )
      {
        v21 = sub_1403795A0(&v58, aModel_1, 5);
        v23 = v56.m128i_i64[1];
        v24 = (const __m128i *)v56.m128i_i64[0];
        v25 = _mm_cvtsi32_si128(v21 >> 57);
        v26 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v25, v25), 0), 68);
        for ( i = 0; ; i += 16 )
        {
          v28 = v56.m128i_i64[1] & v21;
          v29 = _mm_loadu_si128((const __m128i *)(v56.m128i_i64[0] + v28));
          _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v29, v26));
          if ( _R8D )
            break;
LABEL_14:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v29, (__m128i)-1LL)) )
          {
            v32 = 0;
            goto LABEL_20;
          }
          v21 = i + v28 + 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r9d, r8d }
          v31 = -3LL * (v56.m128i_i64[1] & (v28 + _R9));
          if ( *(_QWORD *)(v56.m128i_i64[0] + 8 * v31 - 8) == 5 )
          {
            v32 = 1;
            if ( !(**(_DWORD **)(v56.m128i_i64[0] + 8 * v31 - 16) ^ 0x65646F6D
                 | *(unsigned __int8 *)(*(_QWORD *)(v56.m128i_i64[0] + 8 * v31 - 16) + 4LL) ^ 0x6C) )
              break;
          }
          _R9 = (unsigned int)(_R8D - 1);
          LOWORD(_R9) = _R8D & (_R8D - 1);
          _R8D = _R9;
          if ( !(_WORD)_R9 )
            goto LABEL_14;
        }
LABEL_20:
        v35 = sub_1403795A0(&v58, aReasoningEffor_0, 16);
        v37 = _mm_cvtsi32_si128(v35 >> 57);
        v38 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v37, v37), 0), 68);
        v39 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_141748F20);
        while ( 1 )
        {
          _RAX = v23 & v35;
          v42 = _mm_loadu_si128((const __m128i *)((char *)v24 + _RAX));
          _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v42, v38));
          if ( _EDX )
            break;
LABEL_25:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v42, (__m128i)-1LL)) )
          {
            v46 = 0;
            goto LABEL_28;
          }
          v35 = v39 + _RAX + 16;
          v39 += 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r8d, edx }
          v44 = -3LL * (v23 & (_RAX + _R8));
          if ( v24->m128i_i64[v44 - 1] == 16 )
          {
            v45 = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v24[-1].m128i_i64[v44]), si128));
            v46 = 1;
            if ( v45 == 0xFFFF )
              break;
          }
          _R8 = (unsigned int)(_EDX - 1);
          LOWORD(_R8) = _EDX & (_EDX - 1);
          _EDX = _R8;
          if ( !(_WORD)_R8 )
            goto LABEL_25;
        }
LABEL_28:
        *(_BYTE *)(a1 + 8) = v32;
        *(_BYTE *)(a1 + 9) = v46;
        *(_QWORD *)a1 = -1;
        if ( !v23 )
          return sub_14043D1B0(&v59);
        v47 = v24 + 1;
        _EBX = ~_mm_movemask_epi8(_mm_load_si128(v24));
        do
        {
          if ( !(_WORD)_EBX )
          {
            do
            {
              v49 = _mm_load_si128(v47);
              v24 -= 24;
              ++v47;
              _EBX = _mm_movemask_epi8(v49) ^ 0xFFFF;
            }
            while ( !_EBX );
          }
          __asm { tzcnt   eax, ebx }
          v50 = -3LL * _RAX;
          v51 = *((_QWORD *)&v24[-1] + v50 - 1);
          if ( v51 )
            sub_140001660(v24[-1].m128i_i64[v50], v51, 1);
          --v20;
          _RAX = _EBX & (unsigned int)(_EBX - 1);
          _EBX &= _EBX - 1;
        }
        while ( v20 );
      }
      else
      {
        *(_WORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = -1;
        v23 = v56.m128i_i64[1];
        if ( !v56.m128i_i64[1] )
          return sub_14043D1B0(&v59);
      }
      v33 = (24 * v23 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v34 = v33 + v23 + 17;
      if ( v34 )
        sub_140001660(v56.m128i_i64[0] - v33, v34, 16);
      return sub_14043D1B0(&v59);
    }
    v13 = _mm_loadu_si128(&v65);
    v14 = _mm_loadu_si128(&v66);
    v15 = _mm_loadu_si128(&v67);
    *(__m128i *)&v55[48] = _mm_loadu_si128(&v68);
    *(__m128i *)&v55[32] = v15;
    *(__m128i *)&v55[16] = v14;
    *(__m128i *)v55 = v13;
    v69.m128i_i64[0] = (__int64)v55;
    v69.m128i_i64[1] = (__int64)sub_140FB8910;
    sub_14149C0F0(&v63, &unk_141757B89, &v69);
    v69 = _mm_loadu_si128(&v63);
    v70.m128i_i64[0] = v64;
    sub_14043D020(v55);
    v16 = _mm_load_si128(&v69);
    v17 = _mm_load_si128(&v70);
    v54[0] = v16;
    v54[1] = v17;
    *(__m128i *)(a1 + 40) = _mm_load_si128(&v71);
    *(__m128i *)(a1 + 24) = v17;
    *(__m128i *)(a1 + 8) = v16;
    *(_QWORD *)a1 = 10;
  }
  return sub_14043D1B0(&v59);
}