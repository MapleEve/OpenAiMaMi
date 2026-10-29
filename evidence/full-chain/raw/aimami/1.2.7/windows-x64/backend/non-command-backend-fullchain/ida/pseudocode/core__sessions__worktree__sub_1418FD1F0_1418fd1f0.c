// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x1418fd1f0 | name sub_1418FD1F0
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1418FD1F0(const __m128i **a1, __int64 a2, __int64 a3, __int64 a4)
{
  const __m128i *v5; // rcx
  bool v6; // cf
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  const __m128i *v12; // r15
  const __m128i *v13; // rbx
  __int64 v14; // r8
  const __m128i *v15; // r12
  const __m128i *v16; // r13
  __int64 v18; // r14
  __m128i v19; // xmm0
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v25; // rax
  const __m128i *v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  __int64 v31; // r8
  const __m128i *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  const __m128i *v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // r9
  __m128i si128; // xmm0
  __int64 v40; // rcx
  __int64 v41; // r14
  unsigned __int64 v42; // rax
  const __m128i *v43; // rcx
  const __m128i *v44; // rdx
  unsigned __int64 v46; // r10
  __m128i *v48; // r8
  __int8 v49; // r10
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  const __m128i *v64; // rax
  __int64 v65; // r11
  unsigned __int64 v66; // rax
  __m128i *v68; // r12
  __int64 v69; // rax
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  __m128i v72; // xmm2
  unsigned __int64 v73; // rdx
  const __m128i *v75; // rcx
  const __m128i *v76; // rdx
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  const __m128i *v79; // [rsp+20h] [rbp-60h] BYREF
  const __m128i *v80; // [rsp+28h] [rbp-58h]
  __int64 v81; // [rsp+30h] [rbp-50h]
  __int64 v82; // [rsp+38h] [rbp-48h]
  const __m128i **v83; // [rsp+40h] [rbp-40h]
  __int64 v84; // [rsp+48h] [rbp-38h]
  __int64 v85; // [rsp+50h] [rbp-30h]
  const __m128i *v86; // [rsp+58h] [rbp-28h]
  const __m128i *v87; // [rsp+60h] [rbp-20h]
  __int64 v88; // [rsp+68h] [rbp-18h]
  __int64 v89; // [rsp+70h] [rbp-10h]
  __int64 v90; // [rsp+78h] [rbp-8h]
  __int64 v91; // [rsp+80h] [rbp+0h]
  const __m128i **v92; // [rsp+88h] [rbp+8h]
  __int64 v93; // [rsp+90h] [rbp+10h]

  v93 = -2;
  v91 = a3;
  _RSI = a1;
  v5 = a1[3];
  v6 = __CFADD__(v5, a2);
  v7 = (unsigned __int64)v5->m128i_u64 + a2;
  if ( v6 )
    return sub_1416A9910((unsigned int)a4, v7);
  v8 = (unsigned __int64)_RSI[1];
  v9 = v8 + 1;
  v10 = ((v8 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v8 + 1) >> 3);
  if ( v8 < 8 )
    v10 = (unsigned __int64)_RSI[1];
  if ( v7 <= v10 >> 1 )
  {
    if ( v8 == -1 )
    {
      v37 = 0;
LABEL_47:
      _RSI[2] = (const __m128i *)(v37 - (_QWORD)v5);
      return -1;
    }
    v33 = *_RSI;
    v34 = (v9 >> 4) - (((v9 & 0xF) == 0) - 1LL);
    if ( v34 == 1 )
    {
      v35 = 0;
    }
    else
    {
      v38 = v34 & 0x1FFFFFFFFFFFFFFELL;
      v35 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1419E4480);
      do
      {
        v33[v35] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v33[v35]), si128);
        v33[v35 + 1] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v33[v35 + 1]), si128);
        v35 += 2;
        v38 -= 2;
      }
      while ( v38 );
      if ( (v34 & 1) == 0 )
        goto LABEL_28;
    }
    v33[v35] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v33[v35]), (__m128i)xmmword_1419E4480);
LABEL_28:
    if ( v9 < 0x10 )
    {
      v40 = 16;
    }
    else
    {
      v40 = v8 + 1;
      v9 = 16;
    }
    sub_1418F44E0((__m128i *)((char *)v33 + v40), v33, v9);
    v84 = (__int64)sub_140372E80;
    v85 = 104;
    v83 = _RSI;
    v41 = 0;
    do
    {
      v64 = *_RSI;
      if ( __OFSUB__(0, (*_RSI)->m128i_i8[v41]) )
      {
        v68 = (__m128i *)((char *)v64 + 104 * ~v41);
        while ( 1 )
        {
          v42 = sub_140D2AC70(v91, (char *)&v64[-6] - 104 * v41 - 8);
          v43 = *_RSI;
          v44 = _RSI[1];
          _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)*_RSI
                                                                                + (v42 & (unsigned __int64)v44))));
          v46 = v42 & (unsigned __int64)v44;
          if ( !(_DWORD)_R9 )
          {
            v65 = 16;
            v46 = v42 & (unsigned __int64)_RSI[1];
            do
            {
              v46 = (unsigned __int64)v44 & (v65 + v46);
              _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v43 + v46)));
              v65 += 16;
            }
            while ( !(_DWORD)_R9 );
          }
          __asm { tzcnt   r9d, r9d }
          _R9 = (unsigned __int64)v44 & (v46 + _R9);
          if ( v43->m128i_i8[_R9] >= 0 )
          {
            _R9 = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v43));
            __asm { tzcnt   r9d, r9d }
          }
          if ( ((unsigned __int64)v44 & ((v41 - (v42 & (unsigned __int64)v44)) ^ (_R9 - (v42 & (unsigned __int64)v44)))) < 0x10 )
          {
            v66 = v42 >> 57;
            v43->m128i_i8[v41] = v66;
            (*_RSI)[1].m128i_i8[(v41 - 16) & (unsigned __int64)v44] = v66;
            goto LABEL_41;
          }
          v48 = (__m128i *)((char *)v43 + 104 * ~_R9);
          v49 = v43->m128i_i8[_R9];
          v50 = v42 >> 57;
          v43->m128i_i8[_R9] = v50;
          (*_RSI)[1].m128i_i8[(unsigned __int64)v44 & (_R9 - 16)] = v50;
          if ( v49 == -1 )
            break;
          v51 = v68->m128i_i64[0];
          v68->m128i_i64[0] = v48->m128i_i64[0];
          v48->m128i_i64[0] = v51;
          v52 = v68->m128i_i64[1];
          v68->m128i_i64[1] = v48->m128i_i64[1];
          v48->m128i_i64[1] = v52;
          v53 = v68[1].m128i_i64[0];
          v68[1].m128i_i64[0] = v48[1].m128i_i64[0];
          v48[1].m128i_i64[0] = v53;
          v54 = v68[1].m128i_i64[1];
          v68[1].m128i_i64[1] = v48[1].m128i_i64[1];
          v48[1].m128i_i64[1] = v54;
          v55 = v68[2].m128i_i64[0];
          v68[2].m128i_i64[0] = v48[2].m128i_i64[0];
          v48[2].m128i_i64[0] = v55;
          v56 = v68[2].m128i_i64[1];
          v68[2].m128i_i64[1] = v48[2].m128i_i64[1];
          v48[2].m128i_i64[1] = v56;
          v57 = v68[3].m128i_i64[0];
          v68[3].m128i_i64[0] = v48[3].m128i_i64[0];
          v48[3].m128i_i64[0] = v57;
          v58 = v68[3].m128i_i64[1];
          v68[3].m128i_i64[1] = v48[3].m128i_i64[1];
          v48[3].m128i_i64[1] = v58;
          v59 = v68[4].m128i_i64[0];
          v68[4].m128i_i64[0] = v48[4].m128i_i64[0];
          v48[4].m128i_i64[0] = v59;
          v60 = v68[4].m128i_i64[1];
          v68[4].m128i_i64[1] = v48[4].m128i_i64[1];
          v48[4].m128i_i64[1] = v60;
          v61 = v68[5].m128i_i64[0];
          v68[5].m128i_i64[0] = v48[5].m128i_i64[0];
          v48[5].m128i_i64[0] = v61;
          v62 = v68[5].m128i_i64[1];
          v68[5].m128i_i64[1] = v48[5].m128i_i64[1];
          v48[5].m128i_i64[1] = v62;
          v63 = v68[6].m128i_i64[0];
          v68[6].m128i_i64[0] = v48[6].m128i_i64[0];
          v48[6].m128i_i64[0] = v63;
          v64 = *_RSI;
        }
        v69 = (unsigned __int64)_RSI[1] & (v41 - 16);
        (*_RSI)->m128i_i8[v41] = -1;
        (*_RSI)[1].m128i_i8[v69] = -1;
        v48[6].m128i_i64[0] = v68[6].m128i_i64[0];
        v48[5] = v68[5];
        v48[4] = v68[4];
        v70 = _mm_loadu_si128(v68);
        v71 = _mm_loadu_si128(v68 + 1);
        v72 = v68[2];
        v48[3] = v68[3];
        v48[2] = v72;
        v48[1] = v71;
        *v48 = v70;
      }
LABEL_41:
      ;
    }
    while ( v41++ != v8 );
    v73 = (unsigned __int64)_RSI[1];
    v5 = _RSI[3];
    v37 = ((v73 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v73 + 1) >> 3);
    if ( v73 < 8 )
      v37 = (unsigned __int64)_RSI[1];
    goto LABEL_47;
  }
  v11 = v10 + 1;
  if ( v11 <= v7 )
    v11 = v7;
  sub_1402957F0(&v79, 104, v11, a4);
  v12 = v79;
  v13 = v80;
  v14 = v81;
  if ( v79 )
  {
    v83 = _RSI + 4;
    v84 = 104;
    v85 = 16;
    v86 = v79;
    v87 = v80;
    v88 = v81;
    v89 = v82;
    v15 = _RSI[3];
    if ( v15 )
    {
      v90 = v81;
      v92 = _RSI;
      v16 = *_RSI;
      _EDI = ~_mm_movemask_epi8(_mm_load_si128(*_RSI));
      v18 = 0;
      do
      {
        if ( !(_WORD)_EDI )
        {
          do
          {
            v19 = _mm_load_si128(++v16);
            _EDI = _mm_movemask_epi8(v19) ^ 0xFFFF;
            v18 += 2;
          }
          while ( !_EDI );
        }
        __asm { tzcnt   esi, edi }
        v20 = (unsigned __int64)&_RSI[v18];
        v21 = sub_140D2AC70(v91, (char *)&(*v92)[-6] - 104 * v20 - 8);
        v22 = (unsigned __int64)v13 & v21;
        _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v12
                                                                               + ((unsigned __int64)v13 & v21))));
        if ( !(_DWORD)_RDX )
        {
          v31 = 16;
          do
          {
            v22 = (unsigned __int64)v13 & (v31 + v22);
            _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v12 + v22)));
            v31 += 16;
          }
          while ( !(_DWORD)_RDX );
        }
        __asm { tzcnt   edx, edx }
        _RDX = (unsigned __int64)v13 & (v22 + _RDX);
        if ( v12->m128i_i8[_RDX] >= 0 )
        {
          _ECX = _mm_movemask_epi8(_mm_load_si128(v12));
          __asm { tzcnt   edx, ecx }
        }
        v15 = (const __m128i *)((char *)v15 - 1);
        v25 = v21 >> 57;
        v12->m128i_i8[_RDX] = v25;
        v12[1].m128i_i8[(unsigned __int64)v13 & (_RDX - 16)] = v25;
        v26 = *v92;
        _RSI = (const __m128i **)~v20;
        v27 = 104 * ~_RDX;
        v12[6].m128i_i64[(unsigned __int64)v27 / 8] = (*v92)[6].m128i_i64[13 * (_QWORD)_RSI];
        *(const __m128i *)((char *)v12 + v27 + 80) = *(const __m128i *)((char *)v26 + 104 * (_QWORD)_RSI + 80);
        *(const __m128i *)((char *)v12 + v27 + 64) = *(const __m128i *)((char *)v26 + 104 * (_QWORD)_RSI + 64);
        v28 = _mm_loadu_si128((const __m128i *)((char *)v26 + 104 * (_QWORD)_RSI));
        v29 = _mm_loadu_si128((const __m128i *)((char *)v26 + 104 * (_QWORD)_RSI + 16));
        v30 = *(const __m128i *)((char *)v26 + 104 * (_QWORD)_RSI + 32);
        *(const __m128i *)((char *)v12 + v27 + 48) = *(const __m128i *)((char *)v26 + 104 * (_QWORD)_RSI + 48);
        *(__m128i *)((char *)v12 + v27 + 32) = v30;
        *(__m128i *)((char *)v12 + v27 + 16) = v29;
        *(__m128i *)((char *)v12 + v27) = v28;
        _EDI &= _EDI - 1;
      }
      while ( v15 );
      _RSI = v92;
      v36 = v92[3];
      v14 = v90;
    }
    else
    {
      v36 = nullptr;
    }
    v75 = *_RSI;
    v76 = _RSI[1];
    *_RSI = v12;
    _RSI[1] = v13;
    _RSI[2] = (const __m128i *)(v14 - (_QWORD)v36);
    _RSI[3] = v36;
    if ( v76 )
    {
      v77 = (104LL * (_QWORD)v76 + 119) & 0xFFFFFFFFFFFFFFF0uLL;
      v78 = (__int64)v76[1].m128i_i64 + v77 + 1;
      if ( v78 )
        sub_140001660((char *)v75 - v77, v78, 16);
    }
    return -1;
  }
  return (__int64)v13;
}
