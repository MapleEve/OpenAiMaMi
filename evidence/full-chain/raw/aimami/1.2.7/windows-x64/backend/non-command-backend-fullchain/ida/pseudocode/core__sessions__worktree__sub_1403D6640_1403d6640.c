// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x1403d6640 | name sub_1403D6640
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_1403D6640(__m128i *a1, const __m128i *a2, __int64 a3, __int64 _R9)
{
  __int64 v8; // rcx
  const __m128i *v9; // r8
  __m128i si128; // xmm0
  __int64 v11; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v20; // rbx
  const __m128i *v21; // r14
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v27; // r8
  __int64 v29; // r13
  const __m128i *v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __int64 v35; // r14
  __int64 i; // rdi
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // [rsp+30h] [rbp-50h]
  __m128i v42; // [rsp+40h] [rbp-40h]
  __m128i v43; // [rsp+60h] [rbp-20h]
  int v44; // [rsp+78h] [rbp-8h]
  __int64 v45; // [rsp+80h] [rbp+0h]
  __m128i v46; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v47; // [rsp+B0h] [rbp+30h]
  __int64 v48; // [rsp+B8h] [rbp+38h]
  __int64 v49; // [rsp+C0h] [rbp+40h]
  __int64 v50; // [rsp+D0h] [rbp+50h]

  v50 = -2;
  _RAX = a2[3].m128i_u64[1];
  if ( !_RAX )
  {
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = 8;
    a1[1].m128i_i64[0] = 0;
LABEL_13:
    if ( a2->m128i_i64[0] )
    {
      v18 = a2->m128i_i64[1];
      if ( v18 )
        sub_140001660(a2[1].m128i_i64[0], v18, a2->m128i_i64[0]);
    }
    return a1;
  }
  _EDX = a2[3].m128i_u16[0];
  v8 = a2[1].m128i_i64[1];
  if ( !(_WORD)_EDX )
  {
    v9 = (const __m128i *)a2[2].m128i_i64[0];
    do
    {
      si128 = _mm_load_si128(v9);
      v8 -= 384;
      ++v9;
      _EDX = _mm_movemask_epi8(si128) ^ 0xFFFF;
    }
    while ( !_EDX );
    a2[2].m128i_i64[0] = (__int64)v9;
    a2[1].m128i_i64[1] = v8;
  }
  __asm { tzcnt   r9d, edx }
  a2[3].m128i_i16[0] = _EDX & (_EDX - 1);
  v11 = -_R9;
  _RDX = 3 * v11;
  v13 = _RAX - 1;
  a2[3].m128i_i64[1] = _RAX - 1;
  v14 = *(_QWORD *)(v8 + 24 * v11 - 24);
  if ( v14 == -1 )
  {
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = 8;
    a1[1].m128i_i64[0] = 0;
    if ( _RAX != 1 )
    {
      _R15D = a2[3].m128i_u16[0];
      v20 = a2[1].m128i_i64[1];
      v21 = (const __m128i *)a2[2].m128i_i64[0];
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v22 = _mm_load_si128(v21);
            v20 -= 384;
            ++v21;
            _R15D = _mm_movemask_epi8(v22) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v23 = -3LL * _RAX;
        v24 = *(_QWORD *)(v20 + 8 * v23 - 24);
        if ( v24 )
          sub_140001660(*(_QWORD *)(v20 + 8 * v23 - 16), v24, 1);
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
        --v13;
      }
      while ( v13 );
    }
    goto LABEL_13;
  }
  v15 = *(_QWORD *)(v8 + 24 * v11 - 16);
  v16 = 4;
  if ( _RAX >= 5 )
    v16 = _RAX;
  if ( _RAX > 0x555555555555555LL )
  {
    v49 = *(_QWORD *)(v8 + 8 * _RDX - 16);
    v17 = 0;
    goto LABEL_11;
  }
  v25 = *(_QWORD *)(v8 + 8 * _RDX - 8);
  if ( 24 * v16 )
  {
    v49 = *(_QWORD *)(v8 + 8 * _RDX - 16);
    nullsub_1(v8);
    v17 = 8;
    _RAX = sub_140001650(24 * v16, 8);
    if ( !_RAX )
    {
LABEL_11:
      v48 = v14;
      sub_141938D2B(v17, 24 * v16);
    }
    v15 = v49;
  }
  else
  {
    _RAX = 8;
    v16 = 0;
  }
  *(_QWORD *)_RAX = v14;
  *(_QWORD *)(_RAX + 8) = v15;
  *(_QWORD *)(_RAX + 16) = v25;
  v46.m128i_i64[0] = v16;
  v46.m128i_i64[1] = _RAX;
  v47 = 1;
  v43 = a2[3];
  v42 = a2[1];
  v41 = _mm_loadu_si128(a2);
  v27 = v43.m128i_i64[1];
  if ( v43.m128i_i64[1] )
  {
    _R9D = v43.m128i_u16[0];
    v29 = a2[1].m128i_i64[1];
    v30 = (const __m128i *)a2[2].m128i_i64[0];
    v31 = 1;
    while ( 1 )
    {
      if ( !(_WORD)_R9D )
      {
        do
        {
          v33 = _mm_load_si128(v30);
          v29 -= 384;
          ++v30;
          _R9D = _mm_movemask_epi8(v33) ^ 0xFFFF;
        }
        while ( !_R9D );
      }
      __asm { tzcnt   edx, r9d }
      _R14D = _R9D & (_R9D - 1);
      v49 = v27 - 1;
      v48 = *(_QWORD *)(v29 - 24 * _RDX - 24);
      if ( v48 == -1 )
        break;
      v44 = _R9D & (_R9D - 1);
      v45 = *(_QWORD *)(v29 - 24 * _RDX - 16);
      v35 = *(_QWORD *)(v29 - 24 * _RDX - 8);
      if ( v31 == v46.m128i_i64[0] )
      {
        sub_14190D590((unsigned int)&v46, v31, v27, 8, 24);
        _RAX = v46.m128i_i64[1];
      }
      v32 = 3 * v31;
      *(_QWORD *)(_RAX + 8 * v32) = v48;
      HIDWORD(_RDX) = HIDWORD(v45);
      *(_QWORD *)(_RAX + 8 * v32 + 8) = v45;
      *(_QWORD *)(_RAX + 8 * v32 + 16) = v35;
      v47 = ++v31;
      v27 = v49;
      _R9D = v44;
      if ( !v49 )
        goto LABEL_36;
    }
    for ( i = v49; i; --i )
    {
      if ( !(_WORD)_R14D )
      {
        do
        {
          v38 = _mm_load_si128(v30);
          v29 -= 384;
          ++v30;
          _R14D = _mm_movemask_epi8(v38) ^ 0xFFFF;
        }
        while ( !_R14D );
      }
      __asm { tzcnt   eax, r14d }
      v39 = -3 * _RAX;
      v40 = *(_QWORD *)(v29 + 8 * v39 - 24);
      if ( v40 )
        sub_140001660(*(_QWORD *)(v29 + 8 * v39 - 16), v40, 1);
      _RAX = _R14D & (unsigned int)(_R14D - 1);
      _R14D &= _R14D - 1;
    }
  }
LABEL_36:
  if ( v41.m128i_i64[0] && v41.m128i_i64[1] )
    sub_140001660(v42.m128i_i64[0], v41.m128i_i64[1], v41.m128i_i64[0]);
  a1[1].m128i_i64[0] = v47;
  *a1 = _mm_loadu_si128(&v46);
  return a1;
}
