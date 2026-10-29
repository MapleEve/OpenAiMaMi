// win 1.2.7 | module src/core/sessions/health.rs | ea 0x1403543c0 | name sub_1403543C0
// win 1.2.7 | module src/core/sessions/health.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1403543C0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int128 v10; // xmm2
  int v11; // r14d
  unsigned __int64 v12; // rax
  unsigned __int128 v13; // kr00_16
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __m128i v19; // xmm0
  __m128i v20; // xmm7
  unsigned __int128 v21; // kr10_16
  __int64 i; // rdx
  unsigned __int64 v23; // rcx
  __m128i v24; // xmm8
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  __m128i si128; // xmm6
  __int64 v33; // rdi
  __m128i v34; // [rsp+20h] [rbp-60h] BYREF
  __int128 v35; // [rsp+30h] [rbp-50h]
  __int128 v36; // [rsp+40h] [rbp-40h]
  __int64 v37; // [rsp+50h] [rbp-30h]
  __m128i v38; // [rsp+60h] [rbp-20h] BYREF
  __m128i v39; // [rsp+70h] [rbp-10h]
  __int64 v40; // [rsp+80h] [rbp+0h]
  __m128i v41; // [rsp+90h] [rbp+10h] BYREF
  __int128 v42; // [rsp+A0h] [rbp+20h]
  __int128 v43; // [rsp+B0h] [rbp+30h]
  __int128 v44; // [rsp+C0h] [rbp+40h]
  __m128i v45; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v46; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v47; // [rsp+F0h] [rbp+70h]
  __int128 v48; // [rsp+100h] [rbp+80h]
  __m512i v49; // [rsp+110h] [rbp+90h] BYREF
  __int64 v50; // [rsp+158h] [rbp+D8h]
  _QWORD *v51; // [rsp+160h] [rbp+E0h]
  unsigned __int64 v52; // [rsp+168h] [rbp+E8h]
  __int64 v53; // [rsp+170h] [rbp+F0h]
  __int64 v54; // [rsp+178h] [rbp+F8h]
  __int64 v55; // [rsp+180h] [rbp+100h] BYREF
  __m512i v56; // [rsp+188h] [rbp+108h] BYREF
  __m128i v57; // [rsp+1C8h] [rbp+148h] BYREF
  unsigned __int64 v58; // [rsp+1D8h] [rbp+158h]
  __m512i v59; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v60; // [rsp+228h] [rbp+1A8h]
  unsigned __int64 v61; // [rsp+230h] [rbp+1B0h]
  __int64 v62; // [rsp+238h] [rbp+1B8h]
  __int64 v63; // [rsp+240h] [rbp+1C0h]
  __int64 v64; // [rsp+248h] [rbp+1C8h]
  char v65; // [rsp+257h] [rbp+1D7h]
  __int64 v66; // [rsp+258h] [rbp+1D8h]

  v66 = -2;
  sub_1402BA1E0(&v55, a2, aSelectThreadId_0, 87);
  if ( (_DWORD)v55 == 1 )
  {
    v59 = v56;
    v34.m128i_i64[0] = (__int64)&v59;
    v34.m128i_i64[1] = (__int64)sub_141404740;
    sub_1416ABFD0(&v41, &unk_1419E671D, &v34);
    v45 = v41;
    v46.m128i_i64[0] = v42;
    result = sub_14029C280(&v59);
    v8 = _mm_load_si128(&v45);
    v9 = v46;
    v10 = v47;
    *(_OWORD *)&v49.m512i_u64[6] = v48;
    *(_OWORD *)&v49.m512i_u64[4] = v47;
    *(__m128i *)&v49.m512i_u64[2] = v46;
    *(__m128i *)v49.m512i_i8 = v8;
    *(_OWORD *)(a1 + 56) = v48;
    *(_OWORD *)(a1 + 40) = v10;
    *(__m128i *)(a1 + 24) = v9;
    *(__m128i *)(a1 + 8) = v8;
    *(_QWORD *)a1 = 10;
    return result;
  }
  *(__m128i *)v49.m512i_i8 = _mm_loadu_si128((const __m128i *)&v56);
  v41 = *(__m128i *)v49.m512i_i8;
  v42 = *(_OWORD *)&v56.m512i_u64[2];
  v43 = *(_OWORD *)&v56.m512i_u64[4];
  v44 = *(_OWORD *)&v56.m512i_u64[6];
  v11 = sub_1417A9630(v56.m512i_i64[7]);
  v59.m512i_i64[0] = (__int64)&off_1419EA2C8;
  if ( !v11 )
  {
    v12 = 0x8000000000000013uLL;
    v13 = 1u;
    goto LABEL_37;
  }
  sub_140E91D00(&v55, &v41, &v59, 1);
  v12 = v55;
  if ( v55 != -1 )
  {
    v13 = *(_OWORD *)v56.m512i_i8;
    v38 = *(__m128i *)&v56.m512i_u64[2];
    v39 = _mm_loadu_si128((const __m128i *)&v56.m512i_u64[4]);
    v40 = v56.m512i_i64[6];
LABEL_37:
    v55 = v12;
    *(_OWORD *)v56.m512i_i8 = v13;
    *(__m128i *)&v56.m512i_u64[2] = _mm_load_si128(&v38);
    *(__m128i *)&v56.m512i_u64[4] = v39;
    v56.m512i_i64[6] = v40;
    v45.m128i_i64[0] = (__int64)&v55;
    v45.m128i_i64[1] = (__int64)sub_141404740;
    sub_1416ABFD0(&v59, &unk_1419E6738, &v45);
    si128 = _mm_load_si128((const __m128i *)&v59);
    v33 = v59.m512i_i64[2];
    sub_14029C280(&v55);
    *(_QWORD *)a1 = 10;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)(a1 + 24) = v33;
    return sub_14029C410(&v41);
  }
  if ( v11 != 1 )
  {
    v12 = 0x8000000000000013uLL;
    v13 = __PAIR128__(v11, 1);
    goto LABEL_37;
  }
  v57.m128i_i64[0] = 0;
  v57.m128i_i64[1] = 8;
  v58 = 0;
  v55 = 1;
  v56.m512i_i64[0] = (__int64)&v41;
  v56.m512i_i64[1] = 0;
  v56.m512i_i64[2] = -2;
  v56.m512i_i64[5] = -2;
  v50 = a3[3];
  v51 = a3 + 4;
  v60 = *a3;
  v54 = a3[1];
  v14 = 1;
LABEL_9:
  if ( v14 != 1 )
    goto LABEL_43;
  while ( 1 )
  {
    sub_14036A6D0(&v45, &v56);
    if ( v45.m128i_i64[0] != -1 )
    {
      v15 = _mm_loadu_si128(&v46);
      *(_OWORD *)&v59.m512i_u64[6] = v48;
      *(_OWORD *)&v59.m512i_u64[4] = v47;
      *(__m128i *)&v59.m512i_u64[2] = v15;
      *(__m128i *)v59.m512i_i8 = v45;
      goto LABEL_17;
    }
    if ( !v56.m512i_i64[1] )
      break;
    sub_14018E680(
      &v59,
      &v56.m512i_u64[1],
      0,
      &off_1419E6770,
      v34.m128i_i64[0],
      v34.m128i_i64[1],
      v35,
      *((_QWORD *)&v35 + 1),
      v36,
      *((_QWORD *)&v36 + 1),
      v37);
LABEL_17:
    v49 = v59;
    if ( v59.m512i_i64[0] == -2 )
      goto LABEL_40;
    v37 = v49.m512i_i64[7];
    v16 = _mm_loadu_si128((const __m128i *)&v49.m512i_u64[1]);
    v36 = *(_OWORD *)&v49.m512i_u64[5];
    v35 = *(_OWORD *)&v49.m512i_u64[3];
    v34 = v16;
    v59.m512i_i64[7] = v49.m512i_i64[7];
    *(_OWORD *)&v59.m512i_u64[5] = *(_OWORD *)&v49.m512i_u64[5];
    *(_OWORD *)&v59.m512i_u64[3] = *(_OWORD *)&v49.m512i_u64[3];
    *(__m128i *)&v59.m512i_u64[1] = v16;
    if ( v59.m512i_i64[0] == -1 )
    {
      v17 = v59.m512i_i64[1];
      if ( v59.m512i_i64[1] != -1 )
      {
        *(__m128i *)&v59.m512i_u64[1] = _mm_loadu_si128((const __m128i *)&v34.m128i_u64[1]);
        v64 = v17;
        v59.m512i_i64[0] = v17;
        if ( v50 )
        {
          v65 = 1;
          v18 = sub_140D2AC70(v51, &v59);
          v19 = _mm_cvtsi32_si128(v18 >> 57);
          v20 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v19, v19), 0), 68);
          v21 = *(_OWORD *)&v59.m512i_u64[1];
          for ( i = 0; ; i += 16 )
          {
            v23 = v54 & v18;
            v24 = _mm_loadu_si128((const __m128i *)(v60 + v23));
            _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v24, v20));
            if ( (_DWORD)_RAX )
              break;
LABEL_27:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v24, (__m128i)-1LL)) )
              goto LABEL_29;
            v18 = i + v23 + 16;
          }
          v52 = v23;
          v53 = i;
          while ( 1 )
          {
            v62 = _RAX;
            __asm { tzcnt   eax, eax }
            v26 = -3LL * (v54 & (v23 + _RAX));
            if ( *((_QWORD *)&v21 + 1) == *(_QWORD *)(v60 + 8 * v26 - 8) )
            {
              v27 = *(_QWORD *)(v60 + 8 * v26 - 16);
              v61 = v21 >> 64;
              v63 = v21;
              v28 = sub_1418F4B70(v21, v27);
              v21 = __PAIR128__(v61, v63);
              if ( !v28 )
                goto LABEL_30;
            }
            _RAX = (unsigned int)(v62 - 1);
            LOWORD(_RAX) = v62 & (v62 - 1);
            v23 = v52;
            i = v53;
            if ( !(_WORD)_RAX )
              goto LABEL_27;
          }
        }
LABEL_29:
        v65 = 1;
        if ( (unsigned __int8)sub_140373CC0(a4, &v59) )
        {
LABEL_30:
          if ( v64 )
          {
            sub_140001660(v59.m512i_i64[1], v64, 1);
            v14 = v55;
            goto LABEL_9;
          }
        }
        else
        {
          v62 = v59.m512i_i64[2];
          v63 = v59.m512i_i64[1];
          v61 = v58;
          if ( v58 == v57.m128i_i64[0] )
            sub_14190FDC0(&v57);
          v29 = v57.m128i_i64[1];
          v30 = v61;
          v31 = 3 * v61;
          *(_QWORD *)(v57.m128i_i64[1] + 8 * v31) = v64;
          *(_QWORD *)(v29 + 8 * v31 + 8) = v63;
          *(_QWORD *)(v29 + 8 * v31 + 16) = v62;
          v58 = v30 + 1;
        }
        v14 = v55;
        goto LABEL_9;
      }
    }
    else
    {
      sub_14029C280(&v59);
    }
    if ( !(_BYTE)v55 )
      goto LABEL_43;
  }
  v49.m512i_i64[0] = -2;
LABEL_40:
  if ( v55 )
    sub_14029C090(&v56);
  v55 = 0;
LABEL_43:
  sub_14029A2B0(&v55);
  *(_QWORD *)(a1 + 24) = v58;
  *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v57);
  *(_QWORD *)a1 = -1;
  return sub_14029C410(&v41);
}
