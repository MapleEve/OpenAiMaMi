// win 1.2.7 | module src/core/sessions/health.rs | ea 0x1401c07d0 | name sub_1401C07D0
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_1401C07D0(__m128i *a1, const __m128i **a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __m128i v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  const __m128i *v26; // rdi
  const __m128i *v27; // rbx
  __int64 m128i_i64; // rcx
  __int128 *v31; // r12
  bool v32; // cf
  __int64 v33; // rbx
  __m128i si128; // xmm0
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r13
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int128 *v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rsi
  __int64 v44; // r13
  __int64 v45; // rbx
  __m128 v46; // xmm9
  unsigned __int64 v47; // r13
  __int64 v48; // rcx
  const __m128i *v49; // rdi
  unsigned __int64 v50; // r14
  char v51; // bl
  double v52; // xmm0_8
  __m128d v53; // xmm0
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __m128i *v57; // rax
  __m128i *v58; // rsi
  __int64 v59; // rcx
  __m128i *v60; // rcx
  __m128i *v61; // rax
  __int64 v62; // rax
  __m128i *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rbx
  const __m128i *v70; // r14
  __m128i v72; // xmm0
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // rbx
  const __m128i *v79; // r14
  __m128i v81; // xmm0
  __int64 v82; // rax
  __int64 v83; // rdx
  unsigned __int64 v84; // rax
  __int64 v85; // rsi
  __int64 v87; // rdi
  int v88[4]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v89; // [rsp+40h] [rbp-40h]
  __int64 v90; // [rsp+48h] [rbp-38h]
  __int128 v91; // [rsp+68h] [rbp-18h]
  __int64 v92; // [rsp+78h] [rbp-8h]
  __m128i v93; // [rsp+80h] [rbp+0h] BYREF
  __m128i v94; // [rsp+90h] [rbp+10h]
  __m128i v95; // [rsp+A0h] [rbp+20h]
  _OWORD v96[3]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v97; // [rsp+E0h] [rbp+60h]
  __m128i v98[3]; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v99; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v100; // [rsp+130h] [rbp+B0h]
  __m128i v101; // [rsp+140h] [rbp+C0h]
  __int128 v102; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v103; // [rsp+160h] [rbp+E0h]
  __int64 v104; // [rsp+170h] [rbp+F0h]
  __int64 v105; // [rsp+178h] [rbp+F8h]
  __int64 v106; // [rsp+188h] [rbp+108h] BYREF
  _BYTE v107[24]; // [rsp+190h] [rbp+110h] BYREF
  __int64 v108; // [rsp+1A8h] [rbp+128h]
  __int64 v109; // [rsp+1B0h] [rbp+130h]
  const __m128i *v110; // [rsp+1B8h] [rbp+138h]
  __int128 v111; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v112; // [rsp+1D0h] [rbp+150h]
  __m128i v113; // [rsp+1E0h] [rbp+160h]
  __int128 v114; // [rsp+1F0h] [rbp+170h]
  __int128 v115; // [rsp+200h] [rbp+180h]
  __int128 v116; // [rsp+210h] [rbp+190h]
  __int64 v117; // [rsp+220h] [rbp+1A0h]
  const __m128i *v118; // [rsp+228h] [rbp+1A8h]
  const __m128i **v119; // [rsp+230h] [rbp+1B0h]
  const __m128i *v120; // [rsp+238h] [rbp+1B8h]
  __int64 v121; // [rsp+240h] [rbp+1C0h]
  __int64 v122; // [rsp+248h] [rbp+1C8h]
  __m128i *v123; // [rsp+250h] [rbp+1D0h]
  char *v124; // [rsp+258h] [rbp+1D8h]
  __int128 v125; // [rsp+260h] [rbp+1E0h]
  __int64 v126; // [rsp+270h] [rbp+1F0h]
  char *v127; // [rsp+278h] [rbp+1F8h]
  char v128; // [rsp+287h] [rbp+207h]
  __int64 v129; // [rsp+288h] [rbp+208h]

  v129 = -2;
  v119 = a2;
  v123 = a1;
  v4 = sub_14167F170(a1);
  if ( *(_BYTE *)(v4 + 16) == 1 )
  {
    v9 = *(_QWORD *)v4;
    v10 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v87 = v4;
    v9 = sub_141696260(v6, v5, v7, v8);
    v4 = v87;
    *(_QWORD *)v87 = v9;
    *(_QWORD *)(v87 + 8) = v10;
    *(_BYTE *)(v87 + 16) = 1;
  }
  *(_QWORD *)v4 = v9 + 1;
  v94 = (__m128i)xmmword_1419D6520;
  v93 = *(__m128i *)&off_1419D6510;
  v95.m128i_i64[0] = v9;
  v95.m128i_i64[1] = v10;
  v11 = sub_14167F170(v9);
  v16 = v11;
  if ( *(_BYTE *)(v11 + 16) == 1 )
  {
    v17 = *(__m128i *)v11;
  }
  else
  {
    v17.m128i_i64[0] = sub_141696260(v13, v12, v14, v15);
    *(__m128i *)v16 = v17;
    *(_BYTE *)(v16 + 16) = 1;
  }
  *(_QWORD *)v16 = v17.m128i_i64[0] + 1;
  v112 = xmmword_1419D6520;
  v111 = *(_OWORD *)&off_1419D6510;
  v113 = v17;
  v18 = sub_14167F170(v17.m128i_i64[0] + 1);
  v23 = v18;
  if ( *(_BYTE *)(v18 + 16) == 1 )
  {
    v24 = *(_QWORD *)v18;
    v25 = *(_QWORD *)(v23 + 8);
  }
  else
  {
    v24 = sub_141696260(v20, v19, v21, v22);
    *(_QWORD *)v23 = v24;
    *(_QWORD *)(v23 + 8) = v25;
    *(_BYTE *)(v23 + 16) = 1;
  }
  *(_QWORD *)v23 = v24 + 1;
  v98[2] = v95;
  v98[1] = v94;
  v98[0] = v93;
  v99 = v111;
  v100 = v112;
  v101 = v113;
  v102 = *(_OWORD *)&off_1419D6510;
  v103 = xmmword_1419D6520;
  v104 = v24;
  v105 = v25;
  v26 = *v119;
  v27 = v119[3];
  m128i_i64 = (__int64)(*v119)[1].m128i_i64;
  _R15D = ~_mm_movemask_epi8(_mm_load_si128(*v119));
  v109 = *(_QWORD *)(a3 + 200);
  _RAX = *(const __m128i **)(a3 + 208);
  v110 = _RAX;
  v31 = &v111;
  v120 = (const __m128i *)m128i_i64;
  v32 = v27 == nullptr;
  v33 = (__int64)&v27[-1].m128i_i64[1] + 7;
  if ( v32 )
  {
LABEL_48:
    sub_1418F44E0(v123, v98, 0x90u);
  }
  else
  {
    while ( 1 )
    {
      if ( !(_WORD)_R15D )
      {
        _RAX = v120;
        do
        {
          si128 = _mm_load_si128(_RAX);
          v26 -= 56;
          ++_RAX;
          _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
        }
        while ( !_R15D );
        v120 = _RAX;
      }
      __asm { tzcnt   eax, r15d }
      v35 = -56LL * (_QWORD)_RAX;
      sub_1402755B0(v31, *((_QWORD *)&v26[-1] - 7 * (_QWORD)_RAX - 1), v26[-1].m128i_i64[-7 * (_QWORD)_RAX]);
      v36 = *((_QWORD *)&v111 + 1);
      if ( (_QWORD)v111 == -1 )
      {
        v60 = v123;
        v123->m128i_i64[1] = 2;
        v60[1].m128i_i64[0] = v36;
        v60->m128i_i64[0] = 0;
        goto LABEL_57;
      }
      v108 = v33;
      v118 = v26;
      v97 = v117;
      v96[2] = v116;
      v96[1] = v115;
      v96[0] = v114;
      v95 = v113;
      v94 = (__m128i)v112;
      v93 = (__m128i)v111;
      v37 = *(_QWORD *)((char *)&v26[-1] + v35 - 8);
      v127 = &v26->m128i_i8[v35];
      v38 = *((_QWORD *)&v114 + 1);
      v39 = v115;
      sub_1401BF510(
        (_DWORD)v31,
        (_DWORD)v119,
        v37,
        v26[-1].m128i_i64[(unsigned __int64)v35 / 8],
        *((__int64 *)&v114 + 1),
        v115);
      v40 = *((_QWORD *)&v111 + 1);
      if ( (_QWORD)v111 == -1 )
      {
        v61 = v123;
        v123->m128i_i64[1] = 2;
        v61[1].m128i_i64[0] = v40;
        v61->m128i_i64[0] = 0;
        goto LABEL_56;
      }
      v125 = v111;
      v91 = v111;
      v124 = (char *)v112;
      v92 = v112;
      sub_1416AC440(v31, v96);
      sub_1403AAB80(&v102, v31);
      v41 = v31;
      v126 = (__int64)&v118[-3] + v35 - 8;
      if ( *((_QWORD *)v127 - 5) != v39 || (unsigned int)sub_1418F4B70(*((_QWORD *)v127 - 6), v38) )
      {
        sub_1416AC440(v31, v126);
        sub_1403AAB80(&v99, v31);
        sub_1416AC440(v31, v96);
        sub_1403AAB80(&v99, v31);
      }
      _R15D &= _R15D - 1;
      v42 = *((_QWORD *)&v125 + 1);
      v43 = *((_QWORD *)&v125 + 1) + 272LL * (_QWORD)v124;
      v44 = 0;
      while ( v42 != v43 )
      {
        v45 = v42;
        if ( *(_DWORD *)(v42 + 88) != 2 )
        {
          sub_1416AC440(v41, v42 + 104);
          sub_1403AAB80(&v99, v41);
        }
        v42 += 272;
        if ( ++v44 < (unsigned __int64)v124 )
        {
          sub_1416AC440(v41, v45 + 136);
          sub_1403AAB80(&v99, v41);
        }
      }
      sub_141695A00(v41, *((_QWORD *)v127 - 3), *((_QWORD *)v127 - 2));
      if ( (_DWORD)v111 == 2 )
        break;
      v46 = (__m128)(unsigned __int64)v114;
      v47 = *((_QWORD *)&v114 + 1);
      sub_1416AC440(v107, v126);
      sub_1416AB5A0(v41, *((_QWORD *)v127 - 3), *((_QWORD *)v127 - 2));
      v31 = v41;
      v49 = *((const __m128i **)&v111 + 1);
      v50 = v112;
      if ( (_QWORD)v111 == -1 )
      {
        if ( (__int64)v112 < 0 )
        {
          v59 = 0;
          goto LABEL_47;
        }
        if ( (_QWORD)v112 )
        {
          nullsub_1(v48);
          v57 = (__m128i *)sub_140001650(v50, 1);
          if ( !v57 )
          {
            v121 = v50;
            v59 = 1;
LABEL_47:
            sub_141938D2B(v59, v121);
          }
          v58 = v57;
          sub_1418F44E0(v57, v49, v50);
          v126 = v50;
          v121 = (__int64)v58;
          v122 = (__int64)v58;
        }
        else
        {
          v121 = 1;
          v126 = 0;
          v122 = 1;
          v50 = 0;
        }
      }
      else
      {
        v122 = *((_QWORD *)&v111 + 1);
        v126 = v111;
      }
      if ( v47 >= 0x7FFFFFFFFFFFFFFFLL )
        v47 = 0x7FFFFFFFFFFFFFFFLL;
      v51 = sub_141681D40(*((_QWORD *)v127 - 3), *((_QWORD *)v127 - 2), v109, v110);
      _mm_storel_ps((double *)&v106, v46);
      sub_141683E30(v31, &v106, 3577643008LL, 27111902);
      v52 = 0.0;
      if ( !(_BYTE)v111 )
      {
        v53 = _mm_sub_pd(
                (__m128d)_mm_unpacklo_ps((__m128)*((unsigned __int64 *)&v111 + 1), (__m128)0x4530000043300000uLL),
                (__m128d)xmmword_1419D34A0);
        v52 = (double)(int)v112 / 1000000000.0 + _mm_unpackhi_pd(v53, v53).m128d_f64[0] + v53.m128d_f64[0];
      }
      *(_QWORD *)&v112 = v126;
      *((_QWORD *)&v112 + 1) = v122;
      v113.m128i_i64[0] = v50;
      *(_QWORD *)&v111 = 1;
      *((_QWORD *)&v111 + 1) = v47;
      LOBYTE(v114) = v51;
      *(double *)&v113.m128i_i64[1] = v52;
      v128 = 0;
      sub_1403A9690(v88, v98, v107, v31);
      v54 = v108;
      v26 = v118;
      if ( v88[0] != 2 && v89 != -1 && v89 )
        sub_140001660(v90, v89, 1);
      v55 = *((_QWORD *)&v125 + 1);
      v127 = nullptr;
      while ( v124 != v127 )
      {
        ++v127;
        v56 = v55 + 272;
        sub_14038D1D0();
        v55 = v56;
      }
      if ( (_QWORD)v125 )
        sub_140001660(*((_QWORD *)&v125 + 1), 272 * v125, 8);
      HIDWORD(_RAX) = (unsigned __int64)sub_140197020((__int64)&v93) >> 32;
      v32 = v54 == 0;
      v33 = v54 - 1;
      if ( v32 )
        goto LABEL_48;
    }
    v62 = *((_QWORD *)&v111 + 1);
    v63 = v123;
    v123->m128i_i64[1] = 2;
    v63[1].m128i_i64[0] = v62;
    v63->m128i_i64[0] = 0;
    v127 = nullptr;
    v64 = *((_QWORD *)&v125 + 1);
    while ( v124 != v127 )
    {
      ++v127;
      v65 = v64 + 272;
      sub_14038D1D0();
      v64 = v65;
    }
    if ( (_QWORD)v125 )
      sub_140001660(*((_QWORD *)&v125 + 1), 272 * v125, 8);
LABEL_56:
    sub_140197020((__int64)&v93);
LABEL_57:
    HIDWORD(_RAX) = (unsigned __int64)sub_14029A500(v98) >> 32;
    v67 = *((_QWORD *)&v99 + 1);
    if ( *((_QWORD *)&v99 + 1) )
    {
      v68 = *((_QWORD *)&v100 + 1);
      if ( *((_QWORD *)&v100 + 1) )
      {
        v69 = v99;
        v70 = (const __m128i *)(v99 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v99));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v72 = _mm_load_si128(v70);
              v69 -= 384;
              ++v70;
              _R15D = _mm_movemask_epi8(v72) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v73 = -3LL * _RAX;
          v74 = *(_QWORD *)(v69 + 8 * v73 - 24);
          if ( v74 )
            sub_140001660(*(_QWORD *)(v69 + 8 * v73 - 16), v74, 1);
          --v68;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v68 );
      }
      _RAX = (24 * v67 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v75 = _RAX + v67 + 17;
      if ( v75 )
        HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v99 - _RAX, v75, 16) >> 32;
    }
    v76 = *((_QWORD *)&v102 + 1);
    if ( *((_QWORD *)&v102 + 1) )
    {
      v77 = *((_QWORD *)&v103 + 1);
      if ( *((_QWORD *)&v103 + 1) )
      {
        v78 = v102;
        v79 = (const __m128i *)(v102 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v102));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v81 = _mm_load_si128(v79);
              v78 -= 384;
              ++v79;
              _R15D = _mm_movemask_epi8(v81) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v82 = -3LL * _RAX;
          v83 = *(_QWORD *)(v78 + 8 * v82 - 24);
          if ( v83 )
            sub_140001660(*(_QWORD *)(v78 + 8 * v82 - 16), v83, 1);
          --v77;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v77 );
      }
      v84 = (24 * v76 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v85 = v84 + v76 + 17;
      if ( v85 )
        sub_140001660(v102 - v84, v85, 16);
    }
  }
  return v123;
}
