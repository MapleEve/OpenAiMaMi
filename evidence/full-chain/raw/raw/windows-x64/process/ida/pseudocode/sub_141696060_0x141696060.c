// module: codexmate_lib/platform/process
// addr: 0x141696060
// name: sub_141696060
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141696060(const __m128i **a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  const __m128i *v4; // rbx
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
  unsigned __int64 v20; // rdi
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
  const __m128i *v42; // rcx
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
  const __m128i *v60; // [rsp+38h] [rbp-70h]
  const __m128i *v61; // [rsp+40h] [rbp-68h]
  _QWORD v62[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v63; // [rsp+58h] [rbp-50h]

  v4 = a1[3];
  v5 = __CFADD__(v4, a2);
  v6 = (unsigned __int64)v4->m128i_u64 + a2;
  if ( v5 )
    return sub_141499B40((unsigned int)a4, v6);
  _RDI = a1;
  v8 = (unsigned __int64)a1[1];
  v9 = v8 + 1;
  v10 = ((v8 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v8 + 1) >> 3);
  if ( v8 < 8 )
    v10 = (unsigned __int64)a1[1];
  if ( v6 <= v10 >> 1 )
  {
    if ( v8 == -1 )
    {
      v32 = 0;
LABEL_48:
      _RDI[2] = (const __m128i *)(v32 - (_QWORD)v4);
      return -1;
    }
    v28 = *a1;
    v29 = (v9 >> 4) - (((v9 & 0xF) == 0) - 1LL);
    if ( v29 == 1 )
    {
      v30 = 0;
    }
    else
    {
      v33 = v29 & 0x1FFFFFFFFFFFFFFELL;
      v30 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141763EE0);
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
    v28[v30] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v28[v30]), (__m128i)xmmword_141763EE0);
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
    sub_141684120(&v28->m128i_i8[v35], v28, v9);
    v36 = 0;
    do
    {
      if ( __OFSUB__(0, v28->m128i_i8[v36]) )
      {
        v39 = ~v36;
        for ( i = v28; ; i = *_RDI )
        {
          v41 = sub_140378990(a3, &i->m128i_i32[-v36 - 1]);
          v42 = _RDI[1];
          _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)i
                                                                                + (v41 & (unsigned __int64)v42))));
          v44 = v41 & (unsigned __int64)v42;
          if ( !(_DWORD)_R8 )
          {
            v51 = 16;
            v44 = v41 & (unsigned __int64)_RDI[1];
            do
            {
              v44 = (unsigned __int64)v42 & (v51 + v44);
              _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)i + v44)));
              v51 += 16;
            }
            while ( !(_DWORD)_R8 );
          }
          __asm { tzcnt   r8d, r8d }
          _R8 = (unsigned __int64)v42 & (v44 + _R8);
          if ( i->m128i_i8[_R8] >= 0 )
          {
            _R8 = (unsigned int)_mm_movemask_epi8(_mm_load_si128(i));
            __asm { tzcnt   r8d, r8d }
          }
          if ( ((unsigned __int64)v42 & ((v36 - (v41 & (unsigned __int64)v42)) ^ (_R8 - (v41 & (unsigned __int64)v42)))) < 0x10 )
          {
            v52 = v41 >> 57;
            i->m128i_i8[v36] = v52;
            v37 = *_RDI;
            (*_RDI)[1].m128i_i8[(v36 - 16) & (unsigned __int64)v42] = v52;
            goto LABEL_32;
          }
          v46 = ~_R8;
          v47 = i->m128i_i8[_R8];
          v48 = v41 >> 57;
          v49 = (unsigned __int64)v42 & (_R8 - 16);
          i->m128i_i8[_R8] = v48;
          v37 = *_RDI;
          (*_RDI)[1].m128i_i8[v49] = v48;
          if ( v47 == -1 )
            break;
          v50 = v28->m128i_i32[v39];
          v28->m128i_i32[v39] = i->m128i_i32[v46];
          i->m128i_i32[v46] = v50;
        }
        v53 = (unsigned __int64)_RDI[1] & (v36 - 16);
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
    v54 = (unsigned __int64)_RDI[1];
    v4 = _RDI[3];
    v32 = ((v54 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v54 + 1) >> 3);
    if ( v54 < 8 )
      v32 = (unsigned __int64)_RDI[1];
    goto LABEL_48;
  }
  v61 = a1[1];
  v11 = v10 + 1;
  if ( v11 <= v6 )
    v11 = v6;
  sub_1405AC280(v62, 4, v11, a4);
  v12 = (const __m128i *)v62[0];
  v13 = v62[1];
  v14 = v63;
  if ( v62[0] )
  {
    if ( v4 )
    {
      v59 = v63;
      v15 = *_RDI;
      _ESI = ~_mm_movemask_epi8(_mm_load_si128(*_RDI));
      v17 = 0;
      v18 = *_RDI;
      v60 = v4;
      do
      {
        if ( !(_WORD)_ESI )
        {
          do
          {
            v19 = _mm_load_si128(++v18);
            _ESI = _mm_movemask_epi8(v19) ^ 0xFFFF;
            v17 += 2;
          }
          while ( !_ESI );
        }
        __asm { tzcnt   edi, esi }
        v20 = (unsigned __int64)&_RDI[v17];
        v21 = sub_140378990(a3, &v15->m128i_i32[-v20 - 1]);
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
        v4 = (const __m128i *)((char *)v4 - 1);
        v25 = v21 >> 57;
        v12->m128i_i8[_RDX] = v25;
        v12[1].m128i_i8[v13 & (_RDX - 16)] = v25;
        _RDI = (const __m128i **)~v20;
        v12->m128i_i32[~_RDX] = v15->m128i_i32[(_QWORD)_RDI];
        _ESI &= _ESI - 1;
      }
      while ( v4 );
      v31 = a1;
      v4 = v60;
      v14 = v59;
    }
    else
    {
      v31 = _RDI;
      v15 = *_RDI;
    }
    *v31 = v12;
    v31[1] = (const __m128i *)v13;
    v31[2] = (const __m128i *)(v14 - (_QWORD)v4);
    v13 = -1;
    if ( v61 )
    {
      v56 = (4LL * (_QWORD)v61 + 19) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( &v61->m128i_i8[v56] != (__int8 *)-17LL )
        sub_140001660((char *)v15 - v56, &v61[1].m128i_i8[v56 + 1], 16);
    }
  }
  return v13;
}