// module: codexmate_lib/core/auth
// addr: 0x1403cd440
// name: sub_1403CD440
// win 1.2.1 | module src/core/auth.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1403CD440(__int64 a1, _QWORD *a2, _QWORD *a3, const __m128i *a4)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rdi
  __m128i *v21; // rax
  __m128i v22; // xmm0
  char v23; // bl
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 i; // r8
  unsigned __int64 v30; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  unsigned __int64 v34; // rax
  __m128i v35; // xmm2
  __int64 v37; // r10
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // r8
  __m128d v41; // xmm1
  double v42; // xmm0_8
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r14
  __int32 v47; // eax
  __int64 v48; // rdx
  __int32 v49; // r14d
  __int64 v50; // r15
  __int64 v51; // rcx
  _DWORD *v52; // rax
  _QWORD *v53; // rdx
  const __m128i *v54; // r8
  __int64 v55; // r9
  _BYTE v57[48]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v58; // [rsp+58h] [rbp-28h] BYREF
  __int64 v59; // [rsp+60h] [rbp-20h]
  __int64 v60; // [rsp+70h] [rbp-10h]
  char v61[16]; // [rsp+78h] [rbp-8h] BYREF
  __int64 v62; // [rsp+88h] [rbp+8h] BYREF
  __int64 v63; // [rsp+90h] [rbp+10h]
  unsigned __int64 v64; // [rsp+98h] [rbp+18h]
  __int128 v65; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v66; // [rsp+B0h] [rbp+30h]
  __int64 v67; // [rsp+B8h] [rbp+38h]
  __m128i v68; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v69; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v70; // [rsp+E0h] [rbp+60h] BYREF
  __int32 v71; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v72; // [rsp+FCh] [rbp+7Ch]
  __int64 v73; // [rsp+108h] [rbp+88h]
  __int64 v74; // [rsp+110h] [rbp+90h]
  __int64 v75; // [rsp+118h] [rbp+98h]
  __m128i v76; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v77; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v78; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v79; // [rsp+158h] [rbp+D8h]
  __int64 v80; // [rsp+160h] [rbp+E0h]
  _QWORD *v81; // [rsp+168h] [rbp+E8h]
  __int64 v82; // [rsp+170h] [rbp+F0h]
  _QWORD *v83; // [rsp+178h] [rbp+F8h]
  __int64 v84; // [rsp+180h] [rbp+100h]
  __int64 v85; // [rsp+188h] [rbp+108h]
  const __m128i *v86; // [rsp+190h] [rbp+110h]
  char v87; // [rsp+19Bh] [rbp+11Bh]
  char v88; // [rsp+19Ch] [rbp+11Ch]
  char v89; // [rsp+19Dh] [rbp+11Dh]
  char v90; // [rsp+19Eh] [rbp+11Eh]
  char v91; // [rsp+19Fh] [rbp+11Fh]
  __int64 v92; // [rsp+1A0h] [rbp+120h]

  v92 = -2;
  v8 = a3[1];
  v9 = a3[2];
  sub_14033BC10(v8, v9);
  if ( !v11 )
  {
    nullsub_1(v10);
    v20 = 41;
    v21 = (__m128i *)sub_140001650(41, 1);
    if ( !v21 )
    {
      v86 = a4;
      v81 = a3;
      v80 = v8;
      v83 = a2;
      v90 = 1;
      v89 = 1;
      sub_1416C2D4B(1, 41);
    }
    qmemcpy(&v21[1], "onse missing access_token", 25);
    v22 = _mm_loadu_si128((const __m128i *)&xmmword_141751029);
    goto LABEL_11;
  }
  sub_14033BC10(a4->m128i_i64[1], a4[1].m128i_i64[0]);
  if ( !v13 )
  {
    nullsub_1(v12);
    v20 = 42;
    v21 = (__m128i *)sub_140001650(42, 1);
    if ( !v21 )
    {
      v86 = a4;
      v81 = a3;
      v80 = v8;
      v83 = a2;
      v90 = 1;
      v89 = 1;
      sub_1416C2D4B(1, 42);
    }
    qmemcpy(&v21[1], "onse missing refresh_token", 26);
    v22 = _mm_loadu_si128((const __m128i *)&xmmword_14174D39E);
LABEL_11:
    *v21 = v22;
    v23 = 0;
    goto LABEL_16;
  }
  if ( *a2 != -1 )
  {
    v85 = *a2;
    v14 = a2[2];
    v84 = a2[1];
    sub_14033BC10(v84, v14);
    if ( v15 )
    {
      v86 = a4;
      v81 = a3;
      v83 = a2;
      v88 = 1;
      v80 = v8;
      sub_1403C93C0((__int64)&v58, v8, v9);
      v87 = 1;
      sub_1403C93C0((__int64)v57, v84, v14);
      v91 = 1;
      sub_1403C8D80(&v68, v57, aHttpsApiOpenai, 27);
      if ( v68.m128i_i64[0] )
      {
        v18 = _mm_loadu_si128(&v68);
        v19 = _mm_loadu_si128(&v69);
        v78 = _mm_loadu_si128(&v70);
        v77 = v19;
        v76 = v18;
      }
      else
      {
        v91 = 1;
        sub_1403C8D80(&v76, &v58, aHttpsApiOpenai, 27);
      }
      if ( v76.m128i_i64[0] )
      {
        v24 = _mm_load_si128(&v76);
        v25 = _mm_load_si128(&v77);
        v70 = _mm_load_si128(&v78);
        v69 = v25;
        v68 = v24;
      }
      else
      {
        v91 = 1;
        v26 = sub_141470CD0(v17, v16);
        if ( *(_BYTE *)(v26 + 16) == 1 )
        {
          v27 = *(_QWORD *)v26;
          v28 = *(_QWORD *)(v26 + 8);
        }
        else
        {
          v91 = 1;
          v9 = v26;
          v27 = sub_141486EF0();
          v26 = v9;
          *(_QWORD *)v9 = v27;
          *(_QWORD *)(v9 + 8) = v28;
          *(_BYTE *)(v9 + 16) = 1;
        }
        *(_QWORD *)v26 = v27 + 1;
        v69 = *((__m128i *)&off_14174C6F0 + 1);
        v68 = _mm_loadu_si128((const __m128i *)&off_14174C6F0);
        v70.m128i_i64[0] = v27;
        v70.m128i_i64[1] = v28;
      }
      sub_1403C8BE0(&v76, &v68, aChatgptAccount, 18);
      if ( v76.m128i_i64[0] == -1 )
      {
        v82 = -1;
      }
      else
      {
        v9 = v77.m128i_i64[0];
        if ( v77.m128i_i64[0] )
        {
          v73 = v76.m128i_i64[1];
          v82 = v76.m128i_i64[0];
          if ( !v60 )
            goto LABEL_60;
          goto LABEL_36;
        }
        v82 = -1;
        if ( v76.m128i_i64[0] )
          sub_140001660(v76.m128i_i64[1], v76.m128i_i64[0], 1);
      }
      if ( !v60 )
        goto LABEL_60;
LABEL_36:
      v30 = sub_1403795A0(v61, aExp, 3);
      v32 = _mm_cvtsi32_si128(v30 >> 57);
      v33 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v32, v32), 0), 68);
      for ( i = 0; ; i += 16LL )
      {
        v34 = v59 & v30;
        v35 = _mm_loadu_si128((const __m128i *)(v58 + v34));
        _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v35, v33));
        if ( _R9D )
          break;
LABEL_41:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v35, (__m128i)-1LL)) )
          goto LABEL_60;
        v30 = i + v34 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v37 = -56LL * (v59 & (v34 + _R10));
        if ( *(_QWORD *)(v58 + v37 - 40) == 3 )
        {
          v38 = v58 + v37;
          if ( !(**(_WORD **)(v38 - 48) ^ 0x7865 | *(unsigned __int8 *)(*(_QWORD *)(v38 - 48) + 2LL) ^ 0x70) )
            break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_41;
      }
      if ( *(_BYTE *)(v38 - 32) != 2 )
        goto LABEL_60;
      v39 = *(_QWORD *)(v38 - 24);
      if ( v39 )
      {
        if ( (_DWORD)v39 == 1 )
        {
          v40 = *(_QWORD *)(v38 - 16);
          goto LABEL_53;
        }
        v42 = *(double *)(v38 - 16);
      }
      else
      {
        v40 = *(_QWORD *)(v38 - 16);
        if ( v40 >= 0 )
          goto LABEL_53;
        v41 = _mm_sub_pd(
                (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)v40, (__m128i)xmmword_1416C6270),
                (__m128d)xmmword_1416C6280);
        v42 = _mm_unpackhi_pd(v41, v41).m128d_f64[0] + v41.m128d_f64[0];
      }
      v43 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v42 <= 9.223372036854775e18 )
        v43 = (unsigned int)(int)v42;
      v40 = v43;
LABEL_53:
      v44 = v40 / 86400;
      v45 = (v40 % 86400) >> 63;
      v46 = v40 % 86400 + 86400;
      if ( v40 % 86400 >= 0 )
        v46 = v40 % 86400;
      i = 0xFFFFFFFF00000000uLL;
      if ( (unsigned __int64)(v45 + v44 - 2146764485) >= 0xFFFFFFFF00000000uLL )
      {
        v47 = sub_140FFA170((unsigned int)(v44 + v45 + 719163));
        if ( v47 )
        {
          v76.m128i_i32[0] = v47;
          *(__int64 *)((char *)v76.m128i_i64 + 4) = (unsigned int)v46;
          sub_14099C380(&v62, &v76);
          v48 = 0;
          v79 = v62;
          i = v64;
          v67 = v63;
          if ( v62 != -1 )
            v48 = v63;
          goto LABEL_61;
        }
      }
LABEL_60:
      v79 = -1;
      v48 = 0;
LABEL_61:
      sub_1403CB100(&v76, v48, i);
      if ( v76.m128i_i64[0] == -1 )
        goto LABEL_67;
      v74 = v76.m128i_i64[1];
      v75 = v76.m128i_i64[0];
      sub_140FFC360(&v71, v76.m128i_i64[1], v77.m128i_i64[0]);
      v49 = v71;
      v50 = v72;
      if ( v75 )
        sub_140001660(v74, v75, 1);
      if ( !v49 )
      {
LABEL_67:
        sub_140FFA6E0(&v76);
        sub_14099C380(&v65, &v76);
      }
      else
      {
        v76.m128i_i32[0] = v49;
        *(__int64 *)((char *)v76.m128i_i64 + 4) = v50;
        sub_140FFB0D0(&v71, &v76, 3600, 0);
        if ( !v71 )
          sub_1416C3000(aDatetimeTimede, 33, &off_14174D450);
        v76.m128i_i32[0] = v71;
        *(__int64 *)((char *)v76.m128i_i64 + 4) = v72;
        sub_14099C380(&v65, &v76);
      }
      nullsub_1(v51);
      v52 = (_DWORD *)sub_140001650(7, 1);
      v53 = v81;
      v54 = v86;
      v55 = v73;
      if ( !v52 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v52 + 3) = 1953523572;
      *v52 = 1952540771;
      *(_QWORD *)(a1 + 160) = v66;
      *(_OWORD *)(a1 + 144) = v65;
      *(_QWORD *)a1 = 7;
      *(_QWORD *)(a1 + 8) = v52;
      *(_QWORD *)(a1 + 16) = 7;
      *(_QWORD *)(a1 + 24) = -1;
      *(_QWORD *)(a1 + 48) = v85;
      *(_QWORD *)(a1 + 56) = v84;
      *(_QWORD *)(a1 + 64) = v14;
      *(_OWORD *)(a1 + 72) = *(_OWORD *)v53;
      *(_QWORD *)(a1 + 88) = v53[2];
      *(__m128i *)(a1 + 96) = _mm_loadu_si128(v54);
      *(_QWORD *)(a1 + 112) = v54[1].m128i_i64[0];
      *(_QWORD *)(a1 + 120) = v82;
      *(_QWORD *)(a1 + 128) = v55;
      *(_QWORD *)(a1 + 136) = v9;
      *(_BYTE *)(a1 + 168) = 0;
      if ( v79 > 0 )
        sub_140001660(v63, v79, 1);
      v91 = 0;
      sub_14067F250(&v68);
      v87 = 0;
      sub_14067F250(v57);
      v88 = 0;
      sub_14067F250(&v58);
      return a1;
    }
    if ( v85 )
      sub_140001660(v84, v85, 1);
  }
  nullsub_1(v12);
  v20 = 37;
  v21 = (__m128i *)sub_140001650(37, 1);
  if ( !v21 )
  {
    v86 = a4;
    v81 = a3;
    v80 = v8;
    v83 = a2;
    v90 = 0;
    v89 = 1;
    sub_1416C2D4B(1, 37);
  }
  qmemcpy(&v21[1], "onse missing id_token", 21);
  *v21 = _mm_loadu_si128((const __m128i *)&xmmword_14174D47F);
  v23 = 1;
LABEL_16:
  *(_QWORD *)(a1 + 8) = 9;
  *(_QWORD *)(a1 + 16) = v20;
  *(_QWORD *)(a1 + 24) = v21;
  *(_QWORD *)(a1 + 32) = v20;
  *(_QWORD *)a1 = -2;
  if ( a4->m128i_i64[0] )
    sub_140001660(a4->m128i_i64[1], a4->m128i_i64[0], 1);
  if ( *a3 )
    sub_140001660(v8, *a3, 1);
  if ( (((unsigned __int64)(*a2 + 1LL) < 2) | (unsigned __int8)v23) != 1 )
    sub_140001660(a2[1], *a2, 1);
  return a1;
}