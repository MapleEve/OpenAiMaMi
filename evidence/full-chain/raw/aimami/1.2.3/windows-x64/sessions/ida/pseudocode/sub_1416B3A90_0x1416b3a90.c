// module: codexmate_lib/core/sessions
// addr: 0x1416b3a90
// name: sub_1416B3A90
// win 1.2.1 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1416B3A90(__int64 a1, __int64 a2, const __m128i *a3, unsigned int a4)
{
  __int64 v4; // rbx
  bool v5; // cf
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  const __m128i *v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rdx
  const __m128i *v15; // r13
  __int64 v17; // r15
  const __m128i *v18; // r12
  __m128i v19; // xmm0
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  const __m128i *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __m128i si128; // xmm0
  __int64 v34; // rcx
  __int64 v35; // r12
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v39; // r9
  __m128i *v41; // rdx
  __int8 v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r10
  unsigned __int64 v47; // rax
  __m128i *v49; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v53; // rax
  __int64 v55; // [rsp+28h] [rbp-80h]
  __int64 v56; // [rsp+30h] [rbp-78h]
  __int64 v57; // [rsp+38h] [rbp-70h]
  __int64 v58; // [rsp+40h] [rbp-68h]
  _QWORD v59[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v60; // [rsp+58h] [rbp-50h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = __CFADD__(v4, a2);
  v6 = v4 + a2;
  if ( v5 )
    return sub_141499B40(a4, v6);
  _RDI = a1;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v8 + 1;
  v10 = ((v8 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v8 + 1) >> 3);
  if ( v8 < 8 )
    v10 = *(_QWORD *)(a1 + 8);
  if ( v6 <= v10 >> 1 )
  {
    if ( v8 == -1 )
    {
      v31 = 0;
LABEL_47:
      *(_QWORD *)(_RDI + 16) = v31 - v4;
      return -1;
    }
    v28 = *(const __m128i **)a1;
    v29 = (v9 >> 4) - (((v9 & 0xF) == 0) - 1LL);
    if ( v29 == 1 )
    {
      v30 = 0;
    }
    else
    {
      v32 = v29 & 0x1FFFFFFFFFFFFFFELL;
      v30 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141763EE0);
      do
      {
        v28[v30] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v28[v30]), si128);
        v28[v30 + 1] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v28[v30 + 1]), si128);
        v30 += 2;
        v32 -= 2;
      }
      while ( v32 );
      if ( (v29 & 1) == 0 )
        goto LABEL_28;
    }
    v28[v30] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v28[v30]), (__m128i)xmmword_141763EE0);
LABEL_28:
    if ( v9 < 0x10 )
    {
      v34 = 16;
    }
    else
    {
      v34 = v8 + 1;
      v9 = 16;
    }
    sub_141684120(&v28->m128i_i8[v34], v28, v9);
    v35 = 0;
    do
    {
      if ( __OFSUB__(0, v28->m128i_i8[v35]) )
      {
        v49 = (__m128i *)&v28[~v35];
        while ( 1 )
        {
          v36 = sub_140379420(a3, (const __m128i *)v28[-v35 - 1].m128i_i64);
          v37 = *(_QWORD *)(_RDI + 8);
          _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v28 + (v36 & v37))));
          v39 = v36 & v37;
          if ( !(_DWORD)_R8 )
          {
            v46 = 16;
            v39 = v36 & *(_QWORD *)(_RDI + 8);
            do
            {
              v39 = v37 & (v46 + v39);
              _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v28 + v39)));
              v46 += 16;
            }
            while ( !(_DWORD)_R8 );
          }
          __asm { tzcnt   r8d, r8d }
          _R8 = v37 & (v39 + _R8);
          if ( v28->m128i_i8[_R8] >= 0 )
          {
            _R8 = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v28));
            __asm { tzcnt   r8d, r8d }
          }
          if ( (v37 & ((v35 - (v36 & v37)) ^ (_R8 - (v36 & v37)))) < 0x10 )
          {
            v47 = v36 >> 57;
            v28->m128i_i8[v35] = v47;
            v28 = *(const __m128i **)_RDI;
            *(_BYTE *)(*(_QWORD *)_RDI + ((v35 - 16) & v37) + 16) = v47;
            goto LABEL_41;
          }
          v41 = (__m128i *)&v28[~_R8];
          v42 = v28->m128i_i8[_R8];
          v43 = v36 >> 57;
          v28->m128i_i8[_R8] = v43;
          v28 = *(const __m128i **)_RDI;
          *(_BYTE *)(*(_QWORD *)_RDI + (v37 & (_R8 - 16)) + 16) = v43;
          if ( v42 == -1 )
            break;
          v44 = v49->m128i_i64[0];
          v49->m128i_i64[0] = v41->m128i_i64[0];
          v41->m128i_i64[0] = v44;
          v45 = v49->m128i_i64[1];
          v49->m128i_i64[1] = v41->m128i_i64[1];
          v41->m128i_i64[1] = v45;
          v28 = *(const __m128i **)_RDI;
        }
        v50 = *(_QWORD *)(_RDI + 8) & (v35 - 16);
        v28->m128i_i8[v35] = -1;
        v28[1].m128i_i8[v50] = -1;
        *v41 = _mm_loadu_si128(v49);
      }
LABEL_41:
      ;
    }
    while ( v35++ != v8 );
    v51 = *(_QWORD *)(_RDI + 8);
    v4 = *(_QWORD *)(_RDI + 24);
    v31 = ((v51 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v51 + 1) >> 3);
    if ( v51 < 8 )
      v31 = *(_QWORD *)(_RDI + 8);
    goto LABEL_47;
  }
  v58 = *(_QWORD *)(a1 + 8);
  v11 = v10 + 1;
  if ( v11 <= v6 )
    v11 = v6;
  sub_1412C0640(v59, 16, v11);
  v12 = (const __m128i *)v59[0];
  v13 = v59[1];
  v14 = v60;
  if ( v59[0] )
  {
    if ( v4 )
    {
      v55 = v60;
      v57 = _RDI;
      v15 = *(const __m128i **)_RDI;
      _ESI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)*(_QWORD *)_RDI));
      v17 = 0;
      v18 = *(const __m128i **)_RDI;
      v56 = v4;
      do
      {
        if ( !(_WORD)_ESI )
        {
          do
          {
            v19 = _mm_load_si128(++v18);
            _ESI = _mm_movemask_epi8(v19) ^ 0xFFFF;
            v17 += 16;
          }
          while ( !_ESI );
        }
        __asm { tzcnt   edi, esi }
        v20 = v17 + _RDI;
        v21 = sub_140379420(a3, (const __m128i *)v15[-v20 - 1].m128i_i64);
        v22 = v13 & v21;
        _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v12 + (v13 & v21))));
        if ( !(_DWORD)_RDX )
        {
          v26 = 16;
          do
          {
            v22 = v13 & (v26 + v22);
            _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v12 + v22)));
            v26 += 16;
          }
          while ( !(_DWORD)_RDX );
        }
        __asm { tzcnt   edx, edx }
        _RDX = v13 & (v22 + _RDX);
        if ( v12->m128i_i8[_RDX] >= 0 )
        {
          _ECX = _mm_movemask_epi8(_mm_load_si128(v12));
          __asm { tzcnt   edx, ecx }
        }
        --v4;
        v25 = v21 >> 57;
        v12->m128i_i8[_RDX] = v25;
        v12[1].m128i_i8[v13 & (_RDX - 16)] = v25;
        _RDI = 16 * ~v20;
        v12[~_RDX] = _mm_loadu_si128((const __m128i *)((char *)v15 + _RDI));
        _ESI &= _ESI - 1;
      }
      while ( v4 );
      _RDI = v57;
      v4 = v56;
      v14 = v55;
    }
    else
    {
      v15 = *(const __m128i **)_RDI;
    }
    *(_QWORD *)_RDI = v12;
    *(_QWORD *)(_RDI + 8) = v13;
    *(_QWORD *)(_RDI + 16) = v14 - v4;
    v13 = -1;
    if ( v58 )
    {
      v53 = (16 * v58 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v53 + v58 != -17 )
        sub_140001660((char *)v15 - v53, v53 + v58 + 17, 16);
    }
  }
  return v13;
}