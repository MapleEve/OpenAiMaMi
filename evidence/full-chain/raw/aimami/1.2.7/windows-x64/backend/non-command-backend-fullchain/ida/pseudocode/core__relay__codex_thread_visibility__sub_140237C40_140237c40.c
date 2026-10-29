// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140237c40 | name sub_140237C40
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140237C40(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int128 v13; // kr10_16
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm6
  __m128i v23; // xmm7
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  int v26; // edx
  __m128i si128; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // r14
  __m128i v43; // xmm6
  _QWORD *v44; // rbx
  _QWORD *v45; // rsi
  __int64 v46; // r13
  __int64 v47; // r12
  __m128i v48; // xmm7
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // r12
  __m128i v53; // xmm7
  __int64 v54; // rdi
  unsigned __int64 v55; // r8
  __int64 v56; // r8
  unsigned __int64 v57; // r9
  __int64 v58; // r9
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rbx
  const __m128i *v62; // r14
  __m128i v64; // xmm0
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rdi
  unsigned __int64 v71; // rsi
  _QWORD *v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rax
  unsigned int v77; // edx
  __int64 v78; // rdi
  __int128 v79; // xmm1
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rbx
  const __m128i *v83; // r14
  __m128i v85; // xmm0
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // r13
  _BYTE v91[24]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v92; // [rsp+40h] [rbp-40h] BYREF
  __int128 v93; // [rsp+50h] [rbp-30h]
  __int64 v94; // [rsp+68h] [rbp-18h] BYREF
  __m128i v95; // [rsp+70h] [rbp-10h]
  __m128i v96; // [rsp+80h] [rbp+0h]
  __m128i v97; // [rsp+90h] [rbp+10h]
  __int128 v98; // [rsp+A0h] [rbp+20h]
  __m128i v99; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v100; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v101; // [rsp+D0h] [rbp+50h]
  _OWORD v102[2]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v103; // [rsp+100h] [rbp+80h] BYREF
  __m128i v104; // [rsp+110h] [rbp+90h]
  __int64 v105; // [rsp+120h] [rbp+A0h]
  _QWORD v106[2]; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v107; // [rsp+140h] [rbp+C0h] BYREF
  int v108; // [rsp+148h] [rbp+C8h]
  __int64 v109; // [rsp+150h] [rbp+D0h] BYREF
  int v110; // [rsp+158h] [rbp+D8h]
  __int64 v111; // [rsp+160h] [rbp+E0h] BYREF
  int v112; // [rsp+168h] [rbp+E8h]
  unsigned __int128 v113; // [rsp+170h] [rbp+F0h] BYREF
  unsigned __int128 v114; // [rsp+180h] [rbp+100h] BYREF
  __m128i v115; // [rsp+190h] [rbp+110h] BYREF
  __m128i v116; // [rsp+1A0h] [rbp+120h]
  __int64 v117; // [rsp+1B0h] [rbp+130h]
  __int64 v118; // [rsp+1B8h] [rbp+138h]
  __m128i v119; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v120; // [rsp+1D0h] [rbp+150h]
  __int64 v121; // [rsp+1E0h] [rbp+160h]
  __int64 v122; // [rsp+1E8h] [rbp+168h]
  unsigned __int64 v123; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v124; // [rsp+200h] [rbp+180h]
  unsigned __int64 v125; // [rsp+208h] [rbp+188h] BYREF
  _BYTE v126[24]; // [rsp+210h] [rbp+190h] BYREF
  __int64 v127; // [rsp+228h] [rbp+1A8h]
  __m128i v128; // [rsp+230h] [rbp+1B0h] BYREF
  unsigned __int64 v129; // [rsp+240h] [rbp+1C0h]
  unsigned __int128 v130; // [rsp+250h] [rbp+1D0h] BYREF
  __m128i v131; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v132; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v133; // [rsp+280h] [rbp+200h]
  __m128i v134; // [rsp+290h] [rbp+210h]
  __m128i v135; // [rsp+2A0h] [rbp+220h] BYREF
  _BYTE v136[40]; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v137; // [rsp+2D8h] [rbp+258h]
  __int128 v138; // [rsp+2E8h] [rbp+268h]
  __m128i v139; // [rsp+2F8h] [rbp+278h]
  __m128i v140; // [rsp+308h] [rbp+288h]
  __int128 v141; // [rsp+318h] [rbp+298h]
  __int128 v142; // [rsp+328h] [rbp+2A8h]
  __int128 v143; // [rsp+338h] [rbp+2B8h]
  __int128 v144; // [rsp+348h] [rbp+2C8h]
  __m128i v145; // [rsp+360h] [rbp+2E0h] BYREF
  volatile signed __int64 *v146; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v147; // [rsp+378h] [rbp+2F8h]
  char v148; // [rsp+387h] [rbp+307h] BYREF
  __int64 v149; // [rsp+388h] [rbp+308h]

  v149 = -2;
  v147 = a4;
  v111 = sub_14167FC00();
  v112 = v9;
  sub_140255F10((unsigned int)v136, a2, *(_QWORD *)a3, *(_QWORD *)(a3 + 8), a6);
  result = *(_QWORD *)v136;
  v130 = *(_OWORD *)&v136[8];
  v131 = *(__m128i *)&v136[24];
  v132 = v137;
  v133 = v138;
  v134 = v139;
  v135 = v140;
  if ( *(_QWORD *)v136 == -1 )
  {
    *(__m128i *)(a1 + 88) = v135;
    *(__m128i *)(a1 + 72) = v134;
    si128 = _mm_load_si128((const __m128i *)&v130);
    v28 = v131;
    v29 = _mm_load_si128(&v132);
    *(_OWORD *)(a1 + 56) = v133;
    *(__m128i *)(a1 + 40) = v29;
    *(__m128i *)(a1 + 24) = v28;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = 2;
    return result;
  }
  v124 = a1;
  v103 = v144;
  v102[1] = v143;
  v102[0] = v142;
  v101 = v141;
  v95 = (__m128i)v130;
  v96 = _mm_load_si128(&v131);
  v97 = _mm_load_si128(&v132);
  v98 = v133;
  v99 = v134;
  v100 = _mm_load_si128(&v135);
  v94 = *(_QWORD *)v136;
  v11 = sub_14167FD50(&v111);
  v114 = 0x3E8 * (unsigned __int128)(unsigned __int64)v11 + v12 / 0xF4240uLL;
  v13 = v98;
  v14 = sub_14167F170(v114);
  v19 = v14;
  if ( *(_BYTE *)(v14 + 16) == 1 )
  {
    v20 = *(_QWORD *)v14;
    v21 = *(_QWORD *)(v19 + 8);
  }
  else
  {
    v20 = sub_141696260(v16, v15, v17, v18);
    *(_QWORD *)v19 = v20;
    *(_QWORD *)(v19 + 8) = v21;
    *(_BYTE *)(v19 + 16) = 1;
  }
  *(_QWORD *)v19 = v20 + 1;
  v22 = _mm_loadu_si128((const __m128i *)&xmmword_1419D6520);
  *(__m128i *)&v136[16] = v22;
  v23 = _mm_loadu_si128((const __m128i *)&off_1419D6510);
  *(__m128i *)v136 = v23;
  *(_QWORD *)&v136[32] = v20;
  v137.m128i_i64[0] = v21;
  if ( *((_QWORD *)&v13 + 1) )
  {
    LOBYTE(v18) = 1;
    sub_1418FC060(v136, *((_QWORD *)&v13 + 1), &v136[32], v18);
    v90 = 0;
    do
    {
      sub_140230FD0(&v130, *(_QWORD *)(v13 + 32 * v90 + 8), *(_QWORD *)(v13 + 32 * v90 + 16));
      sub_1403A6F90(v136, &v130);
      ++v90;
    }
    while ( v90 != *((_QWORD *)&v13 + 1) );
  }
  v24 = _mm_load_si128((const __m128i *)v136);
  v25 = _mm_load_si128((const __m128i *)&v136[16]);
  v121 = *(_QWORD *)&v136[32];
  v122 = v137.m128i_i64[0];
  v120 = v25;
  v119 = v24;
  v109 = sub_14167FC00();
  v110 = v26;
  if ( *(_BYTE *)(a3 + 16) == 1 )
  {
    *(_QWORD *)&v136[16] = v100.m128i_i64[0];
    *(__m128i *)v136 = _mm_loadu_si128(&v99);
    v99.m128i_i64[0] = 0;
    v99.m128i_i64[1] = 8;
    v100.m128i_i64[0] = 0;
    sub_140252400(&v130, v136, &v119);
    v104 = _mm_loadu_si128((const __m128i *)&v130);
    v105 = v131.m128i_i64[0];
    v127 = 1;
  }
  else
  {
    v127 = 0;
  }
  v30 = sub_14167FD50(&v109);
  v113 = 0x3E8 * (unsigned __int128)(unsigned __int64)v30 + v31 / 0xF4240uLL;
  v107 = sub_14167FC00();
  v108 = v33;
  if ( *(_BYTE *)(a3 + 17) == 1 )
  {
    v129 = *((_QWORD *)&v101 + 1);
    v128 = _mm_loadu_si128((const __m128i *)&v100.m128i_u64[1]);
    v100.m128i_i64[1] = 0;
    v101 = 8u;
    v34 = sub_14167F170(v32);
    v39 = v34;
    if ( *(_BYTE *)(v34 + 16) == 1 )
    {
      v40 = *(_QWORD *)v34;
      v41 = *(_QWORD *)(v39 + 8);
    }
    else
    {
      v40 = sub_141696260(v36, v35, v37, v38);
      *(_QWORD *)v39 = v40;
      *(_QWORD *)(v39 + 8) = v41;
      *(_BYTE *)(v39 + 16) = 1;
    }
    *(_QWORD *)v39 = v40 + 1;
    v116 = v22;
    v115 = v23;
    v117 = v40;
    v118 = v41;
    sub_14037E440(&v128, &v115);
    v42 = v129;
    v125 = v129;
    v43 = 0;
    memset(v126, 0, sizeof(v126));
    if ( v147 )
    {
      if ( !v129 )
        goto LABEL_29;
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64))(a5 + 40))(v147, 0, v129);
    }
    v44 = (_QWORD *)v128.m128i_i64[1];
    if ( v42 > 7 )
    {
      v106[0] = v147;
      v106[1] = a5;
      *(_QWORD *)v136 = 0;
      *(_QWORD *)&v136[16] = 4;
      *(_QWORD *)&v136[24] = 0;
      v137.m128i_i64[0] = 1;
      v137.m128i_i64[1] = (__int64)&unk_14193C980;
      *(_QWORD *)&v138 = 0;
      v139.m128i_i64[0] = 0;
      v140.m128i_i16[0] = 0;
      sub_14000B630(&v130, v136);
      if ( (_QWORD)v130 != -1 )
      {
        v145 = (__m128i)v130;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)&v130 = &v145;
          *((_QWORD *)&v130 + 1) = sub_1411C6B40;
          v137.m128i_i64[1] = 2;
          *(_QWORD *)&v138 = aCodexmateLibCo_0;
          *((_QWORD *)&v138 + 1) = 51;
          v139.m128i_i64[1] = (__int64)&unk_1419E03D4;
          v140.m128i_i64[0] = (__int64)&v130;
          *(_QWORD *)v136 = 0;
          *(_QWORD *)&v136[8] = aCodexmateLibCo_0;
          *(_QWORD *)&v136[16] = 51;
          *(_QWORD *)&v136[24] = 0;
          *(_QWORD *)&v136[32] = aSrcCoreRelayCo_0;
          v137.m128i_i64[0] = 41;
          v139.m128i_i64[0] = 0x264D00000001LL;
          sub_1414D53A0(&v148, v136);
        }
        v45 = &v44[15 * v42];
        if ( v147 )
        {
          v46 = 0;
          v47 = 0;
          do
          {
            sub_14023DA40((__int64)v136, v44);
            ++v47;
            v48 = _mm_loadu_si128((const __m128i *)&v136[8]);
            v49 = *(_QWORD *)&v136[24];
            (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(a5 + 40))(v147, v47, v42);
            v44 += 15;
            v46 += v49;
            v43 = _mm_add_epi64(v43, v48);
          }
          while ( v44 != v45 );
        }
        else
        {
          v46 = 0;
          do
          {
            sub_14023DA40((__int64)v136, v44);
            v44 += 15;
            v43 = _mm_add_epi64(v43, _mm_loadu_si128((const __m128i *)&v136[8]));
            v46 += *(_QWORD *)&v136[24];
          }
          while ( v44 != v45 );
        }
        if ( v145.m128i_i32[0] >= 2u && (v145.m128i_i8[8] & 3u) - 2 >= 2 && (v145.m128i_i8[8] & 3) != 0 )
        {
          *(_QWORD *)&v136[8] = v145.m128i_i64[1] - 1;
          v136[0] = 3;
          sub_1416BCB00(&v136[8]);
        }
        goto LABEL_52;
      }
      v146 = *((volatile signed __int64 **)&v130 + 1);
      v145.m128i_i16[0] = 0;
      v145.m128i_i64[1] = 0;
      v123 = v42;
      *(_QWORD *)v136 = v44;
      *(_QWORD *)&v136[8] = v42;
      *(_QWORD *)&v136[16] = v106;
      *(_QWORD *)&v136[24] = &v145;
      *(_QWORD *)&v136[32] = &v123;
      sub_14000CB10(&v130, *((_QWORD *)&v130 + 1) + 128LL, v136);
      if ( v131.m128i_i64[0] )
      {
        v55 = (v131.m128i_i64[0] - 1) & 0x7FFFFFFFFFFFFFFLL;
        if ( v55 >= 3 )
        {
          v57 = (v55 + 1) & 0xFFFFFFFFFFFFFFFCuLL;
          v46 = 0;
          v56 = *((_QWORD *)&v130 + 1);
          do
          {
            v43 = _mm_add_epi64(
                    _mm_loadu_si128((const __m128i *)(v56 + 104)),
                    _mm_add_epi64(
                      _mm_add_epi64(
                        _mm_loadu_si128((const __m128i *)(v56 + 72)),
                        _mm_loadu_si128((const __m128i *)(v56 + 40))),
                      _mm_add_epi64(_mm_loadu_si128((const __m128i *)(v56 + 8)), v43)));
            v46 += *(_QWORD *)(v56 + 120) + *(_QWORD *)(v56 + 88) + *(_QWORD *)(v56 + 56) + *(_QWORD *)(v56 + 24);
            v56 += 128;
            v57 -= 4LL;
          }
          while ( v57 );
          if ( (v131.m128i_i8[0] & 3) == 0 )
            goto LABEL_48;
        }
        else
        {
          v46 = 0;
          v56 = *((_QWORD *)&v130 + 1);
        }
        v58 = 0;
        do
        {
          v43 = _mm_add_epi64(v43, _mm_loadu_si128((const __m128i *)(v56 + v58 + 8)));
          v46 += *(_QWORD *)(v56 + v58 + 24);
          v58 += 32;
        }
        while ( 32 * (v131.m128i_i8[0] & 3) != v58 );
      }
      else
      {
        v46 = 0;
      }
LABEL_48:
      if ( (_QWORD)v130 )
        sub_140001660(*((_QWORD *)&v130 + 1), 32 * v130, 8);
      sub_1411C79D0(&v146);
      if ( !_InterlockedDecrement64(v146) )
        sub_1411C66E0(&v146);
      goto LABEL_52;
    }
    if ( v42 )
    {
      v51 = v128.m128i_i64[1] + 120 * v42;
      if ( v147 )
      {
        v46 = 0;
        v52 = 0;
        do
        {
          sub_14023DA40((__int64)v136, v44);
          ++v52;
          v53 = _mm_loadu_si128((const __m128i *)&v136[8]);
          v54 = *(_QWORD *)&v136[24];
          (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(a5 + 40))(v147, v52, v42);
          v44 += 15;
          v46 += v54;
          v43 = _mm_add_epi64(v43, v53);
        }
        while ( v44 != (_QWORD *)v51 );
      }
      else
      {
        v46 = 0;
        do
        {
          sub_14023DA40((__int64)v136, v44);
          v44 += 15;
          v43 = _mm_add_epi64(v43, _mm_loadu_si128((const __m128i *)&v136[8]));
          v46 += *(_QWORD *)&v136[24];
        }
        while ( v44 != (_QWORD *)v51 );
      }
      goto LABEL_52;
    }
LABEL_29:
    v46 = 0;
LABEL_52:
    *(__m128i *)v126 = v43;
    *(_QWORD *)&v126[16] = v46;
    if ( v46 | v43.m128i_i64[0] && *(_QWORD *)off_1421E6EC0 >= 3u )
    {
      *(_QWORD *)&v130 = &v125;
      *((_QWORD *)&v130 + 1) = sub_1416BCB10;
      v131.m128i_i64[0] = (__int64)v126;
      v131.m128i_i64[1] = (__int64)sub_1416BCB10;
      v132.m128i_i64[0] = (__int64)&v126[8];
      v132.m128i_i64[1] = (__int64)sub_1416BCB10;
      *(_QWORD *)&v133 = &v126[16];
      *((_QWORD *)&v133 + 1) = sub_1416BCB10;
      v137.m128i_i64[1] = 3;
      *(_QWORD *)&v138 = aCodexmateLibCo_0;
      *((_QWORD *)&v138 + 1) = 51;
      v139.m128i_i64[1] = (__int64)&unk_1419DF2BE;
      v140.m128i_i64[0] = (__int64)&v130;
      *(_QWORD *)v136 = 0;
      *(_QWORD *)&v136[8] = aCodexmateLibCo_0;
      *(_QWORD *)&v136[16] = 51;
      *(_QWORD *)&v136[24] = 0;
      *(_QWORD *)&v136[32] = aSrcCoreRelayCo_0;
      v137.m128i_i64[0] = 41;
      v139.m128i_i64[0] = 0x262700000001LL;
      sub_1414D53A0(&v148, v136);
    }
    v93 = *(_OWORD *)&v126[8];
    v92 = _mm_loadu_si128((const __m128i *)&v125);
    v59 = v115.m128i_i64[1];
    if ( v115.m128i_i64[1] )
    {
      v60 = v116.m128i_i64[1];
      if ( v116.m128i_i64[1] )
      {
        v61 = v115.m128i_i64[0];
        v62 = (const __m128i *)(v115.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v115.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v64 = _mm_load_si128(v62);
              v61 -= 512;
              ++v62;
              _R15D = _mm_movemask_epi8(v64) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   ecx, r15d }
          v66 = v61 - (unsigned int)(32 * _ECX);
          v67 = *(_QWORD *)(v66 - 32);
          if ( v67 )
            sub_140001660(*(_QWORD *)(v66 - 24), v67, 1);
          --v60;
          _R15D &= _R15D - 1;
        }
        while ( v60 );
      }
      v68 = 32 * v59;
      v69 = 33 * v59 + 49;
      if ( v69 )
        sub_140001660(v115.m128i_i64[0] - v68 - 32, v69, 16);
    }
    v70 = v128.m128i_i64[1];
    v71 = v129;
    if ( v129 )
    {
      v72 = (_QWORD *)(v128.m128i_i64[1] + 64);
      do
      {
        v73 = *(v72 - 8);
        if ( v73 )
          sub_140001660(*(v72 - 7), v73, 1);
        v74 = *(v72 - 5);
        if ( v74 )
          sub_140001660(*(v72 - 4), v74, 1);
        v75 = *(v72 - 1);
        if ( v75 != -1 && v75 )
          sub_140001660(*v72, v75, 1);
        v72 += 15;
        --v71;
      }
      while ( v71 );
    }
    if ( v128.m128i_i64[0] )
      sub_140001660(v70, 120 * v128.m128i_i64[0], 8);
    v50 = 1;
    goto LABEL_78;
  }
  v50 = 0;
LABEL_78:
  v76 = sub_14167FD50(&v107);
  v130 = 0x3E8 * (unsigned __int128)(unsigned __int64)v76 + v77 / 0xF4240uLL;
  *(_QWORD *)v136 = &v114;
  *(_QWORD *)&v136[8] = sub_1416B95D0;
  *(_QWORD *)&v136[16] = &v113;
  *(_QWORD *)&v136[24] = sub_1416B95D0;
  *(_QWORD *)&v136[32] = &v130;
  v137.m128i_i64[0] = (__int64)sub_1416B95D0;
  v137.m128i_i64[1] = (__int64)v102;
  *(_QWORD *)&v138 = sub_1416BCB10;
  *((_QWORD *)&v138 + 1) = (char *)&v103 + 8;
  v139.m128i_i64[0] = (__int64)sub_1416BCB10;
  sub_1416ABFD0(v91, &unk_1419DEAAE, v136);
  sub_14019B500((unsigned int)aThreadReconcil, 16, (unsigned int)aPhaseSplit, 11, (__int64)v91);
  v78 = v124;
  sub_1418F44E0((__m128i *)(v124 + 72), (const __m128i *)&v94, 0xA8u);
  *(__m128i *)(v78 + 8) = v104;
  *(_QWORD *)(v78 + 24) = v105;
  v79 = v93;
  *(__m128i *)(v78 + 40) = _mm_load_si128(&v92);
  *(_OWORD *)(v78 + 56) = v79;
  result = v127;
  *(_QWORD *)v78 = v127;
  *(_QWORD *)(v78 + 32) = v50;
  v80 = v119.m128i_i64[1];
  if ( v119.m128i_i64[1] )
  {
    v81 = v120.m128i_i64[1];
    if ( v120.m128i_i64[1] )
    {
      v82 = v119.m128i_i64[0];
      v83 = (const __m128i *)(v119.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v119.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v85 = _mm_load_si128(v83);
            v82 -= 512;
            ++v83;
            _R15D = _mm_movemask_epi8(v85) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   ecx, r15d }
        v87 = v82 - (unsigned int)(32 * _ECX);
        v88 = *(_QWORD *)(v87 - 32);
        if ( v88 )
          sub_140001660(*(_QWORD *)(v87 - 24), v88, 1);
        --v81;
        _R15D &= _R15D - 1;
      }
      while ( v81 );
    }
    result = 32 * v80;
    v89 = 33 * v80 + 49;
    if ( v89 )
      return sub_140001660(v119.m128i_i64[0] - result - 32, v89, 16);
  }
  return result;
}
