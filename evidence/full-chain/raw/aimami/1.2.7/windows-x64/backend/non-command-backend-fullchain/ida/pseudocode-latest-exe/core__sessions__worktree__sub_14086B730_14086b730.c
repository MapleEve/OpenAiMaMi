// win 1.2.7 latest-exe | module src/core/sessions/worktree.rs | ea 0x14086b730 | successor of pre-update 0x140392250 | session <审计会话>
// match evidence: {"body_sim": 0.476, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int64 __fastcall sub_14086B730(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int32 a4)
{
  __int64 v8; // r12
  __int64 v10; // r9
  unsigned __int64 v11; // r15
  __int64 v12; // r8
  volatile signed __int64 *v13; // r10
  const __m128i *v14; // r13
  __int64 v15; // r11
  unsigned __int64 v16; // r12
  __m128i v17; // xmm0
  __m128i v18; // xmm6
  volatile signed __int64 *v19; // rcx
  __int64 v20; // rbx
  __int64 i; // r9
  unsigned __int64 v22; // r15
  __m128i v23; // xmm8
  __int64 v25; // r14
  volatile signed __int64 *v26; // rdx
  __int64 v27; // rax
  volatile signed __int64 *v28; // rbx
  int v29; // eax
  __int64 result; // rax
  char v32; // al
  __int64 v33; // rax
  __int64 v35; // [rsp+20h] [rbp-60h]
  __int64 v36; // [rsp+28h] [rbp-58h]
  __int64 v37; // [rsp+30h] [rbp-50h]
  __int64 v38; // [rsp+38h] [rbp-48h]
  volatile signed __int64 *v39; // [rsp+40h] [rbp-40h]
  unsigned __int64 v40; // [rsp+48h] [rbp-38h]
  volatile signed __int64 *v41; // [rsp+50h] [rbp-30h] BYREF
  __int64 v42; // [rsp+58h] [rbp-28h]
  __int32 v43; // [rsp+64h] [rbp-1Ch]
  __int64 v44; // [rsp+68h] [rbp-18h]

  v44 = -2;
  v41 = a2;
  v42 = a3;
  v8 = a1 + 32;
  _RAX = sub_1406CE9D0(a1 + 32, &v41);
  v11 = _RAX;
  v12 = a3;
  v13 = a2;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    LOBYTE(v10) = 1;
    HIDWORD(_RAX) = (unsigned __int64)sub_141924D70(a1, 1, v8, v10) >> 32;
    v13 = v41;
    v12 = v42;
  }
  v14 = *(const __m128i **)a1;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = v11 >> 57;
  v17 = _mm_cvtsi32_si128(v11 >> 57);
  v18 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v17, v17), 0), 68);
  v19 = v13 + 2;
  v20 = 0;
  for ( i = 0; ; i += 16 )
  {
    v22 = v15 & v11;
    v23 = _mm_loadu_si128((const __m128i *)((char *)v14 + v22));
    _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v23, v18));
    if ( _ESI )
      break;
LABEL_12:
    _RDX = v40;
    if ( v20 != 1 )
    {
      _RAX = (unsigned int)_mm_movemask_epi8(v23);
      if ( !(_DWORD)_RAX )
      {
        v20 = 0;
        goto LABEL_18;
      }
      __asm { tzcnt   edx, eax }
      _RDX = v15 & (v22 + _RDX);
    }
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v23, (__m128i)-1LL));
    if ( (_DWORD)_RAX )
    {
      v32 = v14->m128i_i8[_RDX];
      if ( v32 >= 0 )
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v14));
        __asm { tzcnt   edx, eax }
        v32 = v14->m128i_i8[_RDX];
      }
      v14->m128i_i8[_RDX] = v16;
      v14[1].m128i_i8[v15 & (_RDX - 16)] = v16;
      *(__m128i *)(a1 + 16) = _mm_sub_epi64(
                                _mm_loadu_si128((const __m128i *)(a1 + 16)),
                                (__m128i)_mm_shuffle_pd(
                                           (__m128d)_mm_cvtsi32_si128(v32 & 1),
                                           (__m128d)xmmword_14196F130,
                                           2));
      v33 = -3LL * _RDX;
      *((_QWORD *)&v14[-1] + v33 - 1) = v13;
      v14[-1].m128i_i64[v33] = v12;
      v14->m128i_i32[2 * v33 - 2] = a4;
      return 0;
    }
    v20 = 1;
LABEL_18:
    v40 = _RDX;
    v11 = i + v22 + 16;
  }
  v43 = a4;
  v35 = i;
  v36 = v20;
  while ( 1 )
  {
    __asm { tzcnt   eax, esi }
    v25 = -3LL * (v15 & (v22 + _RAX));
    v26 = (volatile signed __int64 *)*((_QWORD *)&v14[-1] - 3 * (v15 & (v22 + _RAX)) - 1);
    v27 = v14[-1].m128i_i64[-3 * (v15 & (v22 + _RAX))];
    if ( v13 == v26 || v12 != v27 )
      break;
    v37 = v12;
    v39 = v19;
    v28 = v13;
    v38 = v15;
    v29 = sub_141923B40(v19, v26 + 2, v12);
    v15 = v38;
    v13 = v28;
    v19 = v39;
    v12 = v37;
    if ( !v29 )
      goto LABEL_19;
LABEL_11:
    _RAX = (unsigned int)(_ESI - 1);
    LOWORD(_RAX) = _ESI & (_ESI - 1);
    _ESI = _RAX;
    a4 = v43;
    i = v35;
    v20 = v36;
    if ( !(_WORD)_RAX )
      goto LABEL_12;
  }
  if ( v13 != v26 || v12 != v27 )
    goto LABEL_11;
LABEL_19:
  v14->m128i_i32[2 * v25 - 2] = v43;
  result = 1;
  if ( !_InterlockedDecrement64(v41) )
  {
    sub_14105A100(&v41, v26, v12);
    return 1;
  }
  return result;
}
