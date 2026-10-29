// win 1.2.7 | module src/core/sessions.rs | ea 0x1402d2590 | name sub_1402D2590
// win 1.2.7 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402D2590(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __m128i si128; // xmm0
  __m128i v16; // xmm0
  __int128 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r15
  __m128i v20; // kr10_16
  __int64 v21; // r13
  __m128i v22; // xmm0
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __m128i v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rbx
  __int64 v32; // r14
  const __m128i *v33; // r15
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v41; // r15
  __int64 v42; // r13
  __int64 v43; // [rsp+20h] [rbp-60h] BYREF
  __m128i v44; // [rsp+28h] [rbp-58h]
  __int64 v45; // [rsp+38h] [rbp-48h]
  __m128i v46; // [rsp+40h] [rbp-40h] BYREF
  __int128 v47; // [rsp+50h] [rbp-30h]
  __m256i v48; // [rsp+60h] [rbp-20h]
  _BYTE v49[24]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v50; // [rsp+98h] [rbp+18h]
  __m128i v51; // [rsp+A0h] [rbp+20h]
  __int128 v52; // [rsp+B0h] [rbp+30h]
  __m256i v53; // [rsp+C0h] [rbp+40h]
  __m128i v54; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v55; // [rsp+F0h] [rbp+70h]
  __m128i v56; // [rsp+100h] [rbp+80h]
  __int64 v57; // [rsp+118h] [rbp+98h]
  __m128i v58; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v59; // [rsp+130h] [rbp+B0h]
  __m256i v60; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v61; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v62; // [rsp+170h] [rbp+F0h] BYREF
  __m256i v63; // [rsp+180h] [rbp+100h]
  char v64; // [rsp+1AFh] [rbp+12Fh] BYREF
  __int64 v65; // [rsp+1B0h] [rbp+130h]

  v65 = -2;
  v8 = sub_14167F170(a1);
  if ( *(_BYTE *)(v8 + 16) == 1 )
  {
    v13 = *(_QWORD *)v8;
    v14 = *(_QWORD *)(v8 + 8);
  }
  else
  {
    v41 = v8;
    v13 = sub_141696260(v10, v9, v11, v12);
    v8 = v41;
    *(_QWORD *)v41 = v13;
    *(_QWORD *)(v41 + 8) = v14;
    *(_BYTE *)(v41 + 16) = 1;
  }
  *(_QWORD *)v8 = v13 + 1;
  v60 = off_1419E4870;
  v61.m128i_i64[0] = v13;
  v61.m128i_i64[1] = v14;
  if ( a4 )
  {
    LOBYTE(v12) = 1;
    sub_141930360(&v60, a4, &v61, v12);
    v42 = 0;
    do
    {
      sub_1416AC440(v49, a3 + 24 * v42);
      sub_1403AAB80(&v60, v49);
      ++v42;
    }
    while ( v42 != a4 );
  }
  si128 = _mm_load_si128((const __m128i *)&v60);
  v56 = v61;
  v55 = *(_OWORD *)&v60.m256i_u64[2];
  v54 = si128;
  sub_140C48060(&v60);
  v58 = *(__m128i *)&v60.m256i_u64[1];
  v59 = v60.m256i_i64[3];
  if ( v60.m256i_i64[0] == -1 )
  {
    *(__m128i *)v49 = _mm_load_si128(&v58);
    *(_QWORD *)&v49[16] = v59;
    sub_1402DCB00(&v43, a2, v49, &v54);
    if ( v43 == -1 )
    {
      v18 = v44.m128i_i64[1];
      v28 = v44.m128i_i64[0];
      v19 = v45;
      goto LABEL_23;
    }
  }
  else
  {
    v48 = v63;
    v47 = v62;
    v46 = v61;
    v44 = _mm_load_si128(&v58);
    v45 = v59;
    v43 = v60.m256i_i64[0];
  }
  v53 = v48;
  v16 = _mm_loadu_si128(&v46);
  v52 = v47;
  v51 = v16;
  v50 = v45;
  *(_QWORD *)v49 = v43;
  *(__m128i *)&v49[8] = v44;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v58.m128i_i64[0] = (__int64)v49;
    v58.m128i_i64[1] = (__int64)sub_14104A7D0;
    *(_QWORD *)&v62 = 2;
    *((_QWORD *)&v62 + 1) = aCodexmateLibCo_2;
    v63.m256i_i64[0] = 29;
    v63.m256i_i64[2] = (__int64)&unk_1419E8017;
    v63.m256i_i64[3] = (__int64)&v58;
    v60.m256i_i64[0] = 0;
    v60.m256i_i64[1] = (__int64)aCodexmateLibCo_2;
    *(_OWORD *)&v60.m256i_u64[2] = 0x1Du;
    v61.m128i_i64[0] = (__int64)aSrcCoreSession_5;
    v61.m128i_i64[1] = 20;
    v63.m256i_i64[1] = 0x8900000001LL;
    sub_1414D53A0(&v64, &v60);
  }
  sub_1402D3890((__int64)&v60, a2, v54.m128i_i64);
  v17 = *(_OWORD *)v60.m256i_i8;
  v19 = v60.m256i_i64[3];
  v18 = v60.m256i_i64[2];
  v20 = v61;
  v21 = v62;
  if ( v60.m256i_i64[0] == -1 )
  {
    v57 = v60.m256i_i64[1];
    if ( (_QWORD)v62 )
    {
      v25 = (_QWORD *)(v61.m128i_i64[1] + 32);
      do
      {
        v26 = *(v25 - 4);
        if ( v26 )
          sub_140001660(*(v25 - 3), v26, 1);
        v27 = *(v25 - 1);
        if ( v27 )
          sub_140001660(*v25, v27, 1);
        v25 += 6;
        --v21;
      }
      while ( v21 );
    }
    if ( v20.m128i_i64[0] )
      sub_140001660(v20.m128i_i64[1], 48 * v20.m128i_i64[0], 8);
    sub_14029DA50(v49);
    v28 = v57;
LABEL_23:
    *(_QWORD *)v49 = v18;
    *(_QWORD *)&v49[8] = v18;
    *(_QWORD *)&v49[16] = v28;
    v50 = v18 + 536 * v19;
    HIDWORD(_RAX) = (unsigned __int64)sub_140E159A0(&v60, v49) >> 32;
    v29 = _mm_loadu_si128((const __m128i *)&v60);
    v30 = *(_OWORD *)&v60.m256i_u64[2];
    *(__m128i *)(a1 + 40) = v61;
    *(_OWORD *)(a1 + 24) = v30;
    *(__m128i *)(a1 + 8) = v29;
    *(_QWORD *)a1 = -1;
    v24 = v54.m128i_i64[1];
    if ( !v54.m128i_i64[1] )
      return a1;
    goto LABEL_24;
  }
  *(_QWORD *)(a1 + 88) = v63.m256i_i64[3];
  v22 = _mm_loadu_si128((const __m128i *)((char *)&v62 + 8));
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v63.m256i_u64[1];
  *(__m128i *)(a1 + 56) = v22;
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&v17 + 1);
  *(_QWORD *)(a1 + 16) = v18;
  *(_QWORD *)(a1 + 24) = v19;
  *(__m128i *)(a1 + 32) = v20;
  *(_QWORD *)(a1 + 48) = v21;
  *(_QWORD *)a1 = v17;
  HIDWORD(_RAX) = (unsigned __int64)sub_14029DA50(v49) >> 32;
  v24 = v54.m128i_i64[1];
  if ( !v54.m128i_i64[1] )
    return a1;
LABEL_24:
  v31 = *((_QWORD *)&v55 + 1);
  if ( *((_QWORD *)&v55 + 1) )
  {
    v32 = v54.m128i_i64[0];
    v33 = (const __m128i *)(v54.m128i_i64[0] + 16);
    _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v54.m128i_i64[0]));
    do
    {
      if ( !(_WORD)_R12D )
      {
        do
        {
          v35 = _mm_load_si128(v33);
          v32 -= 384;
          ++v33;
          _R12D = _mm_movemask_epi8(v35) ^ 0xFFFF;
        }
        while ( !_R12D );
      }
      __asm { tzcnt   eax, r12d }
      v36 = -3 * _RAX;
      v37 = *(_QWORD *)(v32 + 8 * v36 - 24);
      if ( v37 )
        sub_140001660(*(_QWORD *)(v32 + 8 * v36 - 16), v37, 1);
      --v31;
      _RAX = _R12D & (unsigned int)(_R12D - 1);
      _R12D &= _R12D - 1;
    }
    while ( v31 );
  }
  v38 = (24 * v24 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
  v39 = v38 + v24 + 17;
  if ( v39 )
    sub_140001660(v54.m128i_i64[0] - v38, v39, 16);
  return a1;
}
