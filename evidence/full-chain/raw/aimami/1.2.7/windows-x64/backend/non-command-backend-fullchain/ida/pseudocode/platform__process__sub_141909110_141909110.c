// win 1.2.7 | module src/platform/process.rs | ea 0x141909110 | name sub_141909110
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141909110(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v4; // rbx
  bool v5; // cf
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rbp
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
  const __m128i **v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __m128i si128; // xmm0
  __int64 v35; // rcx
  __int64 v36; // r15
  const __m128i *v37; // r8
  __int64 v39; // rbx
  const __m128i *i; // rsi
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v44; // r9
  unsigned __int64 v46; // rdx
  __int8 v47; // r9
  unsigned __int64 v48; // rax
  __int64 v49; // r10
  __int32 v50; // eax
  __int64 v51; // r10
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v56; // rax
  __int64 v59; // [rsp+30h] [rbp-78h]
  __int64 v60; // [rsp+38h] [rbp-70h]
  __int64 v61; // [rsp+40h] [rbp-68h]
  _QWORD v62[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v63; // [rsp+58h] [rbp-50h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = __CFADD__(v4, a2);
  v6 = v4 + a2;
  if ( v5 )
    return sub_1416A9910((unsigned int)a4, v6);
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
      v32 = 0;
LABEL_48:
      *(_QWORD *)(_RDI + 16) = v32 - v4;
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
      v33 = v29 & 0x1FFFFFFFFFFFFFFELL;
      v30 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1419E4480);
      do
      {
        v28[v30] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v28[v30]), si128);
        v28[v30 + 1] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v28[v30 + 1]), si128);
        v30 += 2;
        v33 -= 2;
      }
      while ( v33 );
      if ( (v29 & 1) == 0 )
        goto LABEL_28;
    }
    v28[v30] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v28[v30]), (__m128i)xmmword_1419E4480);
LABEL_28:
    if ( v9 < 0x10 )
    {
      v35 = 16;
    }
    else
    {
      v35 = v8 + 1;
      v9 = 16;
    }
    sub_1418F44E0((__m128i *)((char *)v28 + v35), v28, v9);
    v36 = 0;
    do
    {
      if ( __OFSUB__(0, v28->m128i_i8[v36]) )
      {
        v39 = ~v36;
        for ( i = v28; ; i = *(const __m128i **)_RDI )
        {
          v41 = sub_140D2BE70(a3, &i->m128i_i32[-v36 - 1]);
          v42 = *(_QWORD *)(_RDI + 8);
          _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)i + (v41 & v42))));
          v44 = v41 & v42;
          if ( !(_DWORD)_R8 )
          {
            v51 = 16;
            v44 = v41 & *(_QWORD *)(_RDI + 8);
            do
            {
              v44 = v42 & (v51 + v44);
              _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)i + v44)));
              v51 += 16;
            }
            while ( !(_DWORD)_R8 );
          }
          __asm { tzcnt   r8d, r8d }
          _R8 = v42 & (v44 + _R8);
          if ( i->m128i_i8[_R8] >= 0 )
          {
            _R8 = (unsigned int)_mm_movemask_epi8(_mm_load_si128(i));
            __asm { tzcnt   r8d, r8d }
          }
          if ( (v42 & ((v36 - (v41 & v42)) ^ (_R8 - (v41 & v42)))) < 0x10 )
          {
            v52 = v41 >> 57;
            i->m128i_i8[v36] = v52;
            v37 = *(const __m128i **)_RDI;
            *(_BYTE *)(*(_QWORD *)_RDI + ((v36 - 16) & v42) + 16) = v52;
            goto LABEL_32;
          }
          v46 = ~_R8;
          v47 = i->m128i_i8[_R8];
          v48 = v41 >> 57;
          v49 = v42 & (_R8 - 16);
          i->m128i_i8[_R8] = v48;
          v37 = *(const __m128i **)_RDI;
          *(_BYTE *)(*(_QWORD *)_RDI + v49 + 16) = v48;
          if ( v47 == -1 )
            break;
          v50 = v28->m128i_i32[v39];
          v28->m128i_i32[v39] = i->m128i_i32[v46];
          i->m128i_i32[v46] = v50;
        }
        v53 = *(_QWORD *)(_RDI + 8) & (v36 - 16);
        v37->m128i_i8[v36] = -1;
        v37[1].m128i_i8[v53] = -1;
        i->m128i_i32[v46] = v28->m128i_i32[v39];
      }
      else
      {
        v37 = v28;
      }
LABEL_32:
      v28 = v37;
    }
    while ( v36++ != v8 );
    v54 = *(_QWORD *)(_RDI + 8);
    v4 = *(_QWORD *)(_RDI + 24);
    v32 = ((v54 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v54 + 1) >> 3);
    if ( v54 < 8 )
      v32 = *(_QWORD *)(_RDI + 8);
    goto LABEL_48;
  }
  v61 = *(_QWORD *)(a1 + 8);
  v11 = v10 + 1;
  if ( v11 <= v6 )
    v11 = v6;
  sub_1402957F0(v62, 4, v11, a4);
  v12 = (const __m128i *)v62[0];
  v13 = v62[1];
  v14 = v63;
  if ( v62[0] )
  {
    if ( v4 )
    {
      v59 = v63;
      v15 = *(const __m128i **)_RDI;
      _ESI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)*(_QWORD *)_RDI));
      v17 = 0;
      v18 = *(const __m128i **)_RDI;
      v60 = v4;
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
        v21 = sub_140D2BE70(a3, &v15->m128i_i32[-v20 - 1]);
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
        _RDI = ~v20;
        v12->m128i_i32[~_RDX] = v15->m128i_i32[_RDI];
        _ESI &= _ESI - 1;
      }
      while ( v4 );
      v31 = (const __m128i **)a1;
      v4 = v60;
      v14 = v59;
    }
    else
    {
      v31 = (const __m128i **)_RDI;
      v15 = *(const __m128i **)_RDI;
    }
    *v31 = v12;
    v31[1] = (const __m128i *)v13;
    v31[2] = (const __m128i *)(v14 - v4);
    v13 = -1;
    if ( v61 )
    {
      v56 = (4 * v61 + 19) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v56 + v61 != -17 )
        sub_140001660((char *)v15 - v56, v56 + v61 + 17, 16);
    }
  }
  return v13;
}
