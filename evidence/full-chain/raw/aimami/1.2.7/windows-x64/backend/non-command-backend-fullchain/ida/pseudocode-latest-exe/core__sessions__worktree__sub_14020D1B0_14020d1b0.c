// win 1.2.7 latest-exe | module src/core/sessions/worktree.rs | ea 0x14020d1b0 | successor of pre-update 0x1403d6640 | session <审计会话>
// match evidence: {"body_sim": 0.839, "str_ov": 0, "anchor": 0.235, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
void __fastcall sub_14020D1B0(__m128i *a1, const __m128i *a2, __int64 a3, __int64 _R9)
{
  __int64 v8; // rcx
  const __m128i *v9; // r8
  __m128i si128; // xmm0
  __int64 v11; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v19; // rsi
  const __m128i *v20; // rbx
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v30; // r14
  __m128i v31; // xmm0
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // r9
  __int64 v36; // r14
  const __m128i *v37; // rdi
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // [rsp+30h] [rbp-50h]
  __m128i v42; // [rsp+40h] [rbp-40h]
  __m128i v43; // [rsp+50h] [rbp-30h]
  __m128i v44; // [rsp+60h] [rbp-20h]
  __m128i v45; // [rsp+70h] [rbp-10h] BYREF
  __int64 v46; // [rsp+80h] [rbp+0h]
  __int64 v47; // [rsp+88h] [rbp+8h]
  const __m128i *v48; // [rsp+90h] [rbp+10h]
  __int64 v49; // [rsp+A0h] [rbp+20h]

  v49 = -2;
  _RAX = a2[3].m128i_u64[1];
  if ( !_RAX )
  {
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = 8;
    a1[1].m128i_i64[0] = 0;
LABEL_13:
    if ( a2->m128i_i64[0] )
    {
      v17 = a2->m128i_i64[1];
      if ( v17 )
        sub_140001660(a2[1].m128i_i64[0], v17, a2->m128i_i64[0]);
    }
    return;
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
      _R14D = a2[3].m128i_u16[0];
      v19 = a2[1].m128i_i64[1];
      v20 = (const __m128i *)a2[2].m128i_i64[0];
      do
      {
        if ( !(_WORD)_R14D )
        {
          do
          {
            v21 = _mm_load_si128(v20);
            v19 -= 384;
            ++v20;
            _R14D = _mm_movemask_epi8(v21) ^ 0xFFFF;
          }
          while ( !_R14D );
        }
        __asm { tzcnt   eax, r14d }
        v22 = -3LL * _RAX;
        v23 = *(_QWORD *)(v19 + 8 * v22 - 24);
        if ( v23 )
          sub_140001660(*(_QWORD *)(v19 + 8 * v22 - 16), v23, 1);
        _RAX = _R14D & (unsigned int)(_R14D - 1);
        _R14D &= _R14D - 1;
        --v13;
      }
      while ( v13 );
    }
    goto LABEL_13;
  }
  v48 = *(const __m128i **)(v8 + 24 * v11 - 16);
  v15 = 4;
  if ( _RAX >= 5 )
    v15 = _RAX;
  if ( _RAX > 0x555555555555555LL )
  {
    v16 = 0;
    goto LABEL_11;
  }
  v24 = *(_QWORD *)(v8 + 24 * v11 - 8);
  if ( 24 * v15 )
  {
    nullsub_1(v8, _RDX);
    v16 = 8;
    _RAX = sub_140001650(24 * v15, 8);
    if ( !_RAX )
    {
LABEL_11:
      v47 = v14;
      sub_14196B2DB(v16, 24 * v15);
    }
  }
  else
  {
    _RAX = 8;
    v15 = 0;
  }
  *(_QWORD *)_RAX = v14;
  *(_QWORD *)(_RAX + 8) = v48;
  *(_QWORD *)(_RAX + 16) = v24;
  v45.m128i_i64[0] = v15;
  v45.m128i_i64[1] = _RAX;
  v46 = 1;
  v44 = a2[3];
  v43 = a2[2];
  v42 = a2[1];
  v41 = _mm_loadu_si128(a2);
  v26 = v44.m128i_i64[1];
  if ( v44.m128i_i64[1] )
  {
    v27 = 1;
    while ( 1 )
    {
      _ECX = v44.m128i_u16[0];
      v30 = v42.m128i_i64[1];
      if ( !v44.m128i_i16[0] )
      {
        _RDX = v43.m128i_i64[0];
        do
        {
          v31 = _mm_load_si128((const __m128i *)_RDX);
          v30 -= 384;
          _RDX += 16;
          _ECX = _mm_movemask_epi8(v31) ^ 0xFFFF;
        }
        while ( !_ECX );
        v43.m128i_i64[0] = _RDX;
        v42.m128i_i64[1] = v30;
      }
      __asm { tzcnt   edx, ecx }
      _R12D = _ECX & (_ECX - 1);
      v44.m128i_i16[0] = _ECX & (_ECX - 1);
      v33 = -3 * _RDX;
      v34 = v26 - 1;
      v44.m128i_i64[1] = v26 - 1;
      _RDX = *(_QWORD *)(v30 - 24 * _RDX - 24);
      if ( _RDX == -1 )
        break;
      v35 = *(_QWORD *)(v30 + 8 * v33 - 16);
      v36 = *(_QWORD *)(v30 + 8 * v33 - 8);
      if ( v27 == v45.m128i_i64[0] )
      {
        v47 = v35;
        v48 = (const __m128i *)_RDX;
        sub_141939070((unsigned int)&v45, v27, v26, 8, 24);
        _RAX = v45.m128i_i64[1];
        _RDX = (__int64)v48;
        v35 = v47;
      }
      v28 = 3 * v27;
      *(_QWORD *)(_RAX + 8 * v28) = _RDX;
      *(_QWORD *)(_RAX + 8 * v28 + 8) = v35;
      *(_QWORD *)(_RAX + 8 * v28 + 16) = v36;
      v46 = ++v27;
      v26 = v44.m128i_i64[1];
      if ( !v44.m128i_i64[1] )
        goto LABEL_44;
    }
    if ( v26 != 1 )
    {
      v37 = (const __m128i *)v43.m128i_i64[0];
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v38 = _mm_load_si128(v37);
            v30 -= 384;
            ++v37;
            _R12D = _mm_movemask_epi8(v38) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v39 = -3 * _RAX;
        v40 = *(_QWORD *)(v30 + 8 * v39 - 24);
        if ( v40 )
          sub_140001660(*(_QWORD *)(v30 + 8 * v39 - 16), v40, 1);
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
        --v34;
      }
      while ( v34 );
    }
  }
LABEL_44:
  if ( v41.m128i_i64[0] )
  {
    if ( v41.m128i_i64[1] )
      sub_140001660(v42.m128i_i64[0], v41.m128i_i64[1], v41.m128i_i64[0]);
  }
  a1[1].m128i_i64[0] = v46;
  *a1 = _mm_loadu_si128(&v45);
}
