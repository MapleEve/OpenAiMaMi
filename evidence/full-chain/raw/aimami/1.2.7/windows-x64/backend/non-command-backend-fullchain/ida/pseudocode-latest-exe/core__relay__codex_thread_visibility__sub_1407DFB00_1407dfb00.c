// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407dfb00 | successor of pre-update 0x140237c40 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.97, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1407DFB00(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int128 v12; // kr10_16
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm6
  __m128i v19; // xmm7
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  int v22; // edx
  __m128i si128; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rcx
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // r14
  __m128i v36; // xmm6
  __int64 v37; // rbx
  unsigned __int64 v38; // rsi
  __int64 v39; // r13
  __int64 v40; // r12
  __m128i v41; // xmm7
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // r12
  __m128i v46; // xmm7
  __int64 v47; // rdi
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  __int64 v50; // r8
  unsigned __int64 v51; // r9
  __int64 v52; // r9
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rbx
  const __m128i *v56; // r14
  __m128i v58; // xmm0
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rdi
  unsigned __int64 v65; // rsi
  _QWORD *v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rax
  unsigned int v71; // edx
  __int64 v72; // rdi
  __int128 v73; // xmm1
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rbx
  const __m128i *v77; // r14
  __m128i v79; // xmm0
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdi
  bool v85; // zf
  __int64 v86; // rdi
  __int64 v88; // r13
  _BYTE v89[24]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v90; // [rsp+40h] [rbp-40h] BYREF
  __int128 v91; // [rsp+50h] [rbp-30h]
  __int64 v92; // [rsp+68h] [rbp-18h] BYREF
  __m128i v93; // [rsp+70h] [rbp-10h]
  __m128i v94; // [rsp+80h] [rbp+0h]
  __m128i v95; // [rsp+90h] [rbp+10h]
  __int128 v96; // [rsp+A0h] [rbp+20h]
  __m128i v97; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v98; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v99; // [rsp+D0h] [rbp+50h]
  _OWORD v100[2]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v101; // [rsp+100h] [rbp+80h] BYREF
  __m128i v102; // [rsp+110h] [rbp+90h]
  __int64 v103; // [rsp+120h] [rbp+A0h]
  _QWORD v104[2]; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v105; // [rsp+140h] [rbp+C0h] BYREF
  int v106; // [rsp+148h] [rbp+C8h]
  __int64 v107; // [rsp+150h] [rbp+D0h] BYREF
  int v108; // [rsp+158h] [rbp+D8h]
  __int64 v109; // [rsp+160h] [rbp+E0h] BYREF
  int v110; // [rsp+168h] [rbp+E8h]
  unsigned __int128 v111; // [rsp+170h] [rbp+F0h] BYREF
  unsigned __int128 v112; // [rsp+180h] [rbp+100h] BYREF
  __m128i v113; // [rsp+190h] [rbp+110h] BYREF
  __m128i v114; // [rsp+1A0h] [rbp+120h]
  __int64 v115; // [rsp+1B0h] [rbp+130h]
  __int64 v116; // [rsp+1B8h] [rbp+138h]
  __m128i v117; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v118; // [rsp+1D0h] [rbp+150h]
  __int64 v119; // [rsp+1E0h] [rbp+160h]
  __int64 v120; // [rsp+1E8h] [rbp+168h]
  unsigned __int64 v121; // [rsp+1F8h] [rbp+178h] BYREF
  unsigned __int64 v122; // [rsp+200h] [rbp+180h] BYREF
  _BYTE v123[24]; // [rsp+208h] [rbp+188h] BYREF
  __int64 v124; // [rsp+220h] [rbp+1A0h]
  __int64 v125; // [rsp+228h] [rbp+1A8h]
  __m128i v126; // [rsp+230h] [rbp+1B0h] BYREF
  unsigned __int64 v127; // [rsp+240h] [rbp+1C0h]
  unsigned __int128 v128; // [rsp+250h] [rbp+1D0h] BYREF
  __m128i v129; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v130; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v131; // [rsp+280h] [rbp+200h]
  __m128i v132; // [rsp+290h] [rbp+210h]
  __m128i v133; // [rsp+2A0h] [rbp+220h] BYREF
  _BYTE v134[40]; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v135; // [rsp+2D8h] [rbp+258h]
  __int128 v136; // [rsp+2E8h] [rbp+268h]
  __m128i v137; // [rsp+2F8h] [rbp+278h]
  __m128i v138; // [rsp+308h] [rbp+288h]
  __int128 v139; // [rsp+318h] [rbp+298h]
  __int128 v140; // [rsp+328h] [rbp+2A8h]
  __int128 v141; // [rsp+338h] [rbp+2B8h]
  __int128 v142; // [rsp+348h] [rbp+2C8h]
  __m128i v143; // [rsp+360h] [rbp+2E0h] BYREF
  volatile signed __int64 *v144; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v145; // [rsp+378h] [rbp+2F8h]
  char v146; // [rsp+387h] [rbp+307h] BYREF
  __int64 v147; // [rsp+388h] [rbp+308h]

  v147 = -2;
  v145 = a4;
  v109 = sub_1416AEBD0();
  v110 = v9;
  sub_1407FD620((unsigned int)v134, a2, *(_QWORD *)a3, *(_QWORD *)(a3 + 8), a6);
  v128 = *(_OWORD *)&v134[8];
  v129 = *(__m128i *)&v134[24];
  v130 = v135;
  v131 = v136;
  v132 = v137;
  v133 = v138;
  if ( *(_QWORD *)v134 == -1 )
  {
    *(__m128i *)(a1 + 88) = v133;
    *(__m128i *)(a1 + 72) = v132;
    si128 = _mm_load_si128((const __m128i *)&v128);
    v24 = v129;
    v25 = _mm_load_si128(&v130);
    *(_OWORD *)(a1 + 56) = v131;
    *(__m128i *)(a1 + 40) = v25;
    *(__m128i *)(a1 + 24) = v24;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  v124 = a1;
  v101 = v142;
  v100[1] = v141;
  v100[0] = v140;
  v99 = v139;
  v93 = (__m128i)v128;
  v94 = _mm_load_si128(&v129);
  v95 = _mm_load_si128(&v130);
  v96 = v131;
  v97 = v132;
  v98 = _mm_load_si128(&v133);
  v92 = *(_QWORD *)v134;
  v10 = sub_1416AED20(&v109);
  v112 = 0x3E8 * (unsigned __int128)(unsigned __int64)v10 + v11 / 0xF4240uLL;
  v12 = v96;
  v13 = sub_1416AE140(v112);
  v15 = v13;
  if ( *(_BYTE *)(v13 + 16) == 1 )
  {
    v16 = *(_QWORD *)v13;
    v17 = *(_QWORD *)(v15 + 8);
  }
  else
  {
    v16 = sub_1416C5230();
    *(_QWORD *)v15 = v16;
    *(_QWORD *)(v15 + 8) = v17;
    *(_BYTE *)(v15 + 16) = 1;
  }
  *(_QWORD *)v15 = v16 + 1;
  v18 = _mm_loadu_si128((const __m128i *)&xmmword_141A46B20);
  *(__m128i *)&v134[16] = v18;
  v19 = _mm_loadu_si128((const __m128i *)&off_141A46B10);
  *(__m128i *)v134 = v19;
  *(_QWORD *)&v134[32] = v16;
  v135.m128i_i64[0] = v17;
  if ( *((_QWORD *)&v12 + 1) )
  {
    LOBYTE(v14) = 1;
    sub_141929750(v134, *((_QWORD *)&v12 + 1), &v134[32], v14);
    v88 = 0;
    do
    {
      sub_1407D9200(&v128, *(_QWORD *)(v12 + 32 * v88 + 8), *(_QWORD *)(v12 + 32 * v88 + 16));
      sub_14086D5C0(v134, &v128);
      ++v88;
    }
    while ( v88 != *((_QWORD *)&v12 + 1) );
  }
  v20 = _mm_load_si128((const __m128i *)v134);
  v21 = _mm_load_si128((const __m128i *)&v134[16]);
  v119 = *(_QWORD *)&v134[32];
  v120 = v135.m128i_i64[0];
  v118 = v21;
  v117 = v20;
  v107 = sub_1416AEBD0();
  v108 = v22;
  if ( *(_BYTE *)(a3 + 16) == 1 )
  {
    *(_QWORD *)&v134[16] = v98.m128i_i64[0];
    *(__m128i *)v134 = _mm_loadu_si128(&v97);
    v97.m128i_i64[0] = 0;
    v97.m128i_i64[1] = 8;
    v98.m128i_i64[0] = 0;
    sub_1407F9490(&v128, v134, &v117);
    v102 = _mm_loadu_si128((const __m128i *)&v128);
    v103 = v129.m128i_i64[0];
    v125 = 1;
  }
  else
  {
    v125 = 0;
  }
  v27 = sub_1416AED20(&v107);
  v111 = 0x3E8 * (unsigned __int128)(unsigned __int64)v27 + v28 / 0xF4240uLL;
  v105 = sub_1416AEBD0();
  v106 = v30;
  if ( *(_BYTE *)(a3 + 17) == 1 )
  {
    v127 = *((_QWORD *)&v99 + 1);
    v126 = _mm_loadu_si128((const __m128i *)&v98.m128i_u64[1]);
    v98.m128i_i64[1] = 0;
    v99 = 8u;
    v31 = sub_1416AE140(v29);
    v32 = v31;
    if ( *(_BYTE *)(v31 + 16) == 1 )
    {
      v33 = *(_QWORD *)v31;
      v34 = *(_QWORD *)(v32 + 8);
    }
    else
    {
      v33 = sub_1416C5230();
      *(_QWORD *)v32 = v33;
      *(_QWORD *)(v32 + 8) = v34;
      *(_BYTE *)(v32 + 16) = 1;
    }
    *(_QWORD *)v32 = v33 + 1;
    v114 = v18;
    v113 = v19;
    v115 = v33;
    v116 = v34;
    sub_14019DB90(&v126, &v113);
    v35 = v127;
    v122 = v127;
    v36 = 0;
    memset(v123, 0, sizeof(v123));
    if ( v145 )
    {
      if ( !v127 )
        goto LABEL_29;
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64))(a5 + 40))(v145, 0, v127);
    }
    v37 = v126.m128i_i64[1];
    if ( v35 > 7 )
    {
      v104[0] = v145;
      v104[1] = a5;
      *(_QWORD *)v134 = 0;
      *(_QWORD *)&v134[16] = 4;
      *(_QWORD *)&v134[24] = 0;
      v135.m128i_i64[0] = 1;
      v135.m128i_i64[1] = (__int64)&unk_141A04A28;
      *(_QWORD *)&v136 = 0;
      v137.m128i_i64[0] = 0;
      v138.m128i_i16[0] = 0;
      sub_140199620(&v128, v134);
      if ( (_QWORD)v128 != -1 )
      {
        v143 = (__m128i)v128;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v128 = &v143;
          *((_QWORD *)&v128 + 1) = sub_1411ED6B0;
          v135.m128i_i64[1] = 2;
          *(_QWORD *)&v136 = aCodexmateLibCo_11;
          *((_QWORD *)&v136 + 1) = 51;
          v137.m128i_i64[1] = (__int64)&unk_141A4C764;
          v138.m128i_i64[0] = (__int64)&v128;
          *(_QWORD *)v134 = 0;
          *(_QWORD *)&v134[8] = aCodexmateLibCo_11;
          *(_QWORD *)&v134[16] = 51;
          *(_QWORD *)&v134[24] = 0;
          *(_QWORD *)&v134[32] = aSrcCoreRelayCo_0;
          v135.m128i_i64[0] = 41;
          v137.m128i_i64[0] = 0x264D00000001LL;
          sub_141503E20(&v146, v134);
        }
        v38 = v37 + 120 * v35;
        if ( v145 )
        {
          v39 = 0;
          v40 = 0;
          do
          {
            sub_1407E5590(v134, v37);
            ++v40;
            v41 = _mm_loadu_si128((const __m128i *)&v134[8]);
            v42 = *(_QWORD *)&v134[24];
            (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(a5 + 40))(v145, v40, v35);
            v37 += 120;
            v39 += v42;
            v36 = _mm_add_epi64(v36, v41);
          }
          while ( v37 != v38 );
        }
        else
        {
          v39 = 0;
          do
          {
            sub_1407E5590(v134, v37);
            v37 += 120;
            v36 = _mm_add_epi64(v36, _mm_loadu_si128((const __m128i *)&v134[8]));
            v39 += *(_QWORD *)&v134[24];
          }
          while ( v37 != v38 );
        }
        if ( v143.m128i_i32[0] >= 2u && (v143.m128i_i8[8] & 3u) - 2 >= 2 && (v143.m128i_i8[8] & 3) != 0 )
        {
          *(_QWORD *)&v134[8] = v143.m128i_i64[1] - 1;
          v134[0] = 3;
          sub_1416EBAD0(&v134[8]);
        }
        goto LABEL_52;
      }
      v144 = *((volatile signed __int64 **)&v128 + 1);
      v143.m128i_i16[0] = 0;
      v143.m128i_i64[1] = 0;
      v121 = v35;
      *(_QWORD *)v134 = v37;
      *(_QWORD *)&v134[8] = v35;
      *(_QWORD *)&v134[16] = v104;
      *(_QWORD *)&v134[24] = &v143;
      *(_QWORD *)&v134[32] = &v121;
      sub_14019AC80(&v128, *((_QWORD *)&v128 + 1) + 128LL, v134);
      v48 = v128;
      if ( v129.m128i_i64[0] )
      {
        v49 = (v129.m128i_i64[0] - 1) & 0x7FFFFFFFFFFFFFFLL;
        if ( v49 >= 3 )
        {
          v51 = (v49 + 1) & 0xFFFFFFFFFFFFFFFCuLL;
          v39 = 0;
          v50 = *((_QWORD *)&v128 + 1);
          do
          {
            v36 = _mm_add_epi64(
                    _mm_loadu_si128((const __m128i *)(v50 + 104)),
                    _mm_add_epi64(
                      _mm_add_epi64(
                        _mm_loadu_si128((const __m128i *)(v50 + 72)),
                        _mm_loadu_si128((const __m128i *)(v50 + 40))),
                      _mm_add_epi64(_mm_loadu_si128((const __m128i *)(v50 + 8)), v36)));
            v39 += *(_QWORD *)(v50 + 120) + *(_QWORD *)(v50 + 88) + *(_QWORD *)(v50 + 56) + *(_QWORD *)(v50 + 24);
            v50 += 128;
            v51 -= 4LL;
          }
          while ( v51 );
          if ( (v129.m128i_i8[0] & 3) == 0 )
            goto LABEL_48;
        }
        else
        {
          v39 = 0;
          v50 = *((_QWORD *)&v128 + 1);
        }
        v52 = 0;
        do
        {
          v36 = _mm_add_epi64(v36, _mm_loadu_si128((const __m128i *)(v50 + v52 + 8)));
          v39 += *(_QWORD *)(v50 + v52 + 24);
          v52 += 32;
        }
        while ( 32 * (v129.m128i_i8[0] & 3) != v52 );
      }
      else
      {
        v39 = 0;
      }
LABEL_48:
      if ( (_QWORD)v128 )
        sub_140001660(*((_QWORD *)&v128 + 1), 32 * v128, 8);
      sub_1411EE6A0(&v144, v48);
      if ( !_InterlockedDecrement64(v144) )
        sub_1411ED250(&v144);
      goto LABEL_52;
    }
    if ( v35 )
    {
      v44 = v126.m128i_i64[1] + 120 * v35;
      if ( v145 )
      {
        v39 = 0;
        v45 = 0;
        do
        {
          sub_1407E5590(v134, v37);
          ++v45;
          v46 = _mm_loadu_si128((const __m128i *)&v134[8]);
          v47 = *(_QWORD *)&v134[24];
          (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(a5 + 40))(v145, v45, v35);
          v37 += 120;
          v39 += v47;
          v36 = _mm_add_epi64(v36, v46);
        }
        while ( v37 != v44 );
      }
      else
      {
        v39 = 0;
        do
        {
          sub_1407E5590(v134, v37);
          v37 += 120;
          v36 = _mm_add_epi64(v36, _mm_loadu_si128((const __m128i *)&v134[8]));
          v39 += *(_QWORD *)&v134[24];
        }
        while ( v37 != v44 );
      }
      goto LABEL_52;
    }
LABEL_29:
    v39 = 0;
LABEL_52:
    *(__m128i *)v123 = v36;
    *(_QWORD *)&v123[16] = v39;
    if ( v39 | v36.m128i_i64[0] && *(_QWORD *)off_14223FF10 >= 3u )
    {
      *(_QWORD *)&v128 = &v122;
      *((_QWORD *)&v128 + 1) = sub_1416EBAE0;
      v129.m128i_i64[0] = (__int64)v123;
      v129.m128i_i64[1] = (__int64)sub_1416EBAE0;
      v130.m128i_i64[0] = (__int64)&v123[8];
      v130.m128i_i64[1] = (__int64)sub_1416EBAE0;
      *(_QWORD *)&v131 = &v123[16];
      *((_QWORD *)&v131 + 1) = sub_1416EBAE0;
      v135.m128i_i64[1] = 3;
      *(_QWORD *)&v136 = aCodexmateLibCo_11;
      *((_QWORD *)&v136 + 1) = 51;
      v137.m128i_i64[1] = (__int64)&unk_141A4B656;
      v138.m128i_i64[0] = (__int64)&v128;
      *(_QWORD *)v134 = 0;
      *(_QWORD *)&v134[8] = aCodexmateLibCo_11;
      *(_QWORD *)&v134[16] = 51;
      *(_QWORD *)&v134[24] = 0;
      *(_QWORD *)&v134[32] = aSrcCoreRelayCo_0;
      v135.m128i_i64[0] = 41;
      v137.m128i_i64[0] = 0x262700000001LL;
      sub_141503E20(&v146, v134);
    }
    v91 = *(_OWORD *)&v123[8];
    v90 = _mm_loadu_si128((const __m128i *)&v122);
    v53 = v113.m128i_i64[1];
    if ( v113.m128i_i64[1] )
    {
      v54 = v114.m128i_i64[1];
      if ( v114.m128i_i64[1] )
      {
        v55 = v113.m128i_i64[0];
        v56 = (const __m128i *)(v113.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v113.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v58 = _mm_load_si128(v56);
              v55 -= 512;
              ++v56;
              _R15D = _mm_movemask_epi8(v58) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   ecx, r15d }
          v60 = v55 - (unsigned int)(32 * _ECX);
          v61 = *(_QWORD *)(v60 - 32);
          if ( v61 )
            sub_140001660(*(_QWORD *)(v60 - 24), v61, 1);
          --v54;
          _R15D &= _R15D - 1;
        }
        while ( v54 );
      }
      v62 = 32 * v53;
      v63 = 33 * v53 + 49;
      if ( v63 )
        sub_140001660(v113.m128i_i64[0] - v62 - 32, v63, 16);
    }
    v64 = v126.m128i_i64[1];
    v65 = v127;
    if ( v127 )
    {
      v66 = (_QWORD *)(v126.m128i_i64[1] + 64);
      do
      {
        v67 = *(v66 - 8);
        if ( v67 )
          sub_140001660(*(v66 - 7), v67, 1);
        v68 = *(v66 - 5);
        if ( v68 )
          sub_140001660(*(v66 - 4), v68, 1);
        v69 = *(v66 - 1);
        if ( v69 > 0 )
          sub_140001660(*v66, v69, 1);
        v66 += 15;
        --v65;
      }
      while ( v65 );
    }
    if ( v126.m128i_i64[0] )
      sub_140001660(v64, 120 * v126.m128i_i64[0], 8);
    v43 = 1;
    goto LABEL_77;
  }
  v43 = 0;
LABEL_77:
  v70 = sub_1416AED20(&v105);
  v128 = 0x3E8 * (unsigned __int128)(unsigned __int64)v70 + v71 / 0xF4240uLL;
  *(_QWORD *)v134 = &v112;
  *(_QWORD *)&v134[8] = sub_1416E85A0;
  *(_QWORD *)&v134[16] = &v111;
  *(_QWORD *)&v134[24] = sub_1416E85A0;
  *(_QWORD *)&v134[32] = &v128;
  v135.m128i_i64[0] = (__int64)sub_1416E85A0;
  v135.m128i_i64[1] = (__int64)v100;
  *(_QWORD *)&v136 = sub_1416EBAE0;
  *((_QWORD *)&v136 + 1) = (char *)&v101 + 8;
  v137.m128i_i64[0] = (__int64)sub_1416EBAE0;
  sub_1416DAFA0(v89, &unk_141A4ADE6, v134);
  sub_1406C9730((unsigned int)aThreadReconcil_0, 16, (unsigned int)aPhaseSplit, 11, (__int64)v89);
  v72 = v124;
  sub_1419234B0(v124 + 72, &v92, 168);
  *(__m128i *)(v72 + 8) = v102;
  *(_QWORD *)(v72 + 24) = v103;
  v73 = v91;
  *(__m128i *)(v72 + 40) = _mm_load_si128(&v90);
  *(_OWORD *)(v72 + 56) = v73;
  *(_QWORD *)v72 = v125;
  *(_QWORD *)(v72 + 32) = v43;
  v26 = v72;
  v74 = v117.m128i_i64[1];
  if ( v117.m128i_i64[1] )
  {
    v75 = v118.m128i_i64[1];
    if ( v118.m128i_i64[1] )
    {
      v76 = v117.m128i_i64[0];
      v77 = (const __m128i *)(v117.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v117.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v79 = _mm_load_si128(v77);
            v76 -= 512;
            ++v77;
            _R15D = _mm_movemask_epi8(v79) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   ecx, r15d }
        v81 = v76 - (unsigned int)(32 * _ECX);
        v82 = *(_QWORD *)(v81 - 32);
        if ( v82 )
          sub_140001660(*(_QWORD *)(v81 - 24), v82, 1);
        --v75;
        _R15D &= _R15D - 1;
      }
      while ( v75 );
    }
    v83 = 32 * v74;
    v84 = 33 * v74;
    v85 = v84 == -49;
    v86 = v84 + 49;
    v26 = v124;
    if ( !v85 )
      sub_140001660(v117.m128i_i64[0] - v83 - 32, v86, 16);
  }
  return v26;
}
