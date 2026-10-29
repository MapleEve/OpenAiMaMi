// win 1.2.7 | module src/core/sessions/health.rs | ea 0x140359550 | name sub_140359550
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140359550(__m128i *a1, const __m128i **a2, const __m128i **a3, __int64 a4)
{
  const __m128i *v7; // rdi
  const __m128i *v8; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  const __m128i *v18; // rbx
  __m128i si128; // xmm0
  __int64 v20; // rax
  const __m128i *v21; // rsi
  __int64 v22; // rdi
  int v23; // eax
  __int64 m128i_i64; // rbx
  const __m128i **v25; // rcx
  __int64 v26; // r14
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // rdi
  __int64 result; // rax
  __m128i *v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rbx
  const __m128i *v35; // r14
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rbx
  __m128i v42; // [rsp+20h] [rbp-60h] BYREF
  __int128 v43; // [rsp+30h] [rbp-50h]
  __int128 v44; // [rsp+40h] [rbp-40h]
  __m128i *v45; // [rsp+50h] [rbp-30h] BYREF
  __m128i v46; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-18h]
  __int64 v48; // [rsp+70h] [rbp-10h]
  const __m128i **v49; // [rsp+78h] [rbp-8h]
  __m128i *v50; // [rsp+80h] [rbp+0h]
  __m128i v51; // [rsp+88h] [rbp+8h] BYREF
  __int64 v52; // [rsp+98h] [rbp+18h]
  __m128i v53; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v54; // [rsp+B0h] [rbp+30h]
  __int128 v55; // [rsp+C0h] [rbp+40h]
  __m128i *v56; // [rsp+D0h] [rbp+50h]
  __int64 v57; // [rsp+D8h] [rbp+58h]
  const __m128i **v58; // [rsp+E0h] [rbp+60h]
  char v59; // [rsp+EFh] [rbp+6Fh] BYREF
  __int64 v60; // [rsp+F0h] [rbp+70h]

  v60 = -2;
  v50 = a1;
  v7 = *a2;
  v8 = a2[3];
  _R14D = ~_mm_movemask_epi8(_mm_load_si128(*a2));
  _RAX = sub_14167F170(a1);
  v15 = *(_BYTE *)(_RAX + 16) == 1;
  v48 = a4;
  v49 = a2;
  v58 = a3;
  if ( v15 )
  {
    v16 = *(_QWORD *)_RAX;
    v17 = *(_QWORD *)(_RAX + 8);
  }
  else
  {
    v41 = _RAX;
    v16 = sub_141696260(v12, v11, v13, v14);
    _RAX = v41;
    *(_QWORD *)v41 = v16;
    *(_QWORD *)(v41 + 8) = v17;
    *(_BYTE *)(v41 + 16) = 1;
  }
  v18 = v7 + 1;
  *(_QWORD *)_RAX = v16 + 1;
  v54 = *(&off_1419E4870 + 1);
  v53 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
  *(_QWORD *)&v55 = v16;
  *((_QWORD *)&v55 + 1) = v17;
  while ( 1 )
  {
    if ( (_WORD)_R14D )
      goto LABEL_8;
    if ( !v8 )
      break;
    do
    {
      si128 = _mm_load_si128(v18);
      v7 -= 416;
      ++v18;
      _R14D = _mm_movemask_epi8(si128) ^ 0xFFFF;
    }
    while ( !_R14D );
LABEL_8:
    __asm { tzcnt   eax, r14d }
    v20 = -26 * _RAX;
    if ( *((_QWORD *)&v7[v20 - 14] - 1) != -1 )
    {
      sub_1416AC440(&v51, (char *)&v7[v20 - 14] - 8);
      if ( v51.m128i_i64[0] != -1 )
      {
        *(_QWORD *)&v43 = v52;
        v42 = _mm_loadu_si128(&v51);
        sub_1403AAB80(&v53, &v42);
      }
    }
    _RAX = _R14D & (unsigned int)(_R14D - 1);
    v8 = (const __m128i *)((char *)v8 - 1);
    _R14D &= _R14D - 1;
  }
  v44 = v55;
  v43 = v54;
  v42 = v53;
  v22 = (__int64)v58[1]->m128i_i64 + (_QWORD)*v58 + 1;
  v23 = ~_mm_movemask_epi8(_mm_load_si128(*v58));
  m128i_i64 = (__int64)(*v58)[1].m128i_i64;
  v25 = (const __m128i **)v58[3];
  v53.m128i_i64[0] = (__int64)*v58;
  v21 = (const __m128i *)v53.m128i_i64[0];
  v53.m128i_i64[1] = m128i_i64;
  *(_QWORD *)&v54 = v22;
  WORD4(v54) = v23;
  v58 = v25;
  *(_QWORD *)&v55 = v25;
  v26 = (__int64)v49;
  *((_QWORD *)&v55 + 1) = v49;
  v56 = &v42;
  v27 = v48;
  v57 = v48;
  sub_1403D39B0(&v46, &v53);
  v28 = ~_mm_movemask_epi8(_mm_load_si128(v21));
  v51.m128i_i64[0] = v26;
  v51.m128i_i64[1] = (__int64)&v42;
  v52 = v27;
  v45 = &v51;
  v53.m128i_i64[0] = (__int64)v21;
  v53.m128i_i64[1] = m128i_i64;
  *(_QWORD *)&v54 = v22;
  WORD4(v54) = v28;
  v29 = sub_140295970(&v53, v58, 0, &v45);
  if ( v47 >= 2 )
  {
    if ( v47 >= 0x15 )
      sub_1415584D0(v46.m128i_i64[1], v47, &v59);
    else
      sub_140DFF490(v46.m128i_i64[1], v47, 1, &v59);
  }
  result = v47;
  v31 = v50;
  v50[1].m128i_i64[0] = v47;
  *v31 = _mm_loadu_si128(&v46);
  v31[1].m128i_i64[1] = v29;
  v32 = v42.m128i_i64[1];
  if ( v42.m128i_i64[1] )
  {
    v33 = *((_QWORD *)&v43 + 1);
    if ( *((_QWORD *)&v43 + 1) )
    {
      v34 = v42.m128i_i64[0];
      v35 = (const __m128i *)(v42.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v42.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v37 = _mm_load_si128(v35);
            v34 -= 384;
            ++v35;
            _R15D = _mm_movemask_epi8(v37) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v38 = -3 * result;
        v39 = *(_QWORD *)(v34 + 8 * v38 - 24);
        if ( v39 )
          sub_140001660(*(_QWORD *)(v34 + 8 * v38 - 16), v39, 1);
        --v33;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v33 );
    }
    result = (24 * v32 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v40 = result + v32 + 17;
    if ( v40 )
      return sub_140001660(v42.m128i_i64[0] - result, v40, 16);
  }
  return result;
}
