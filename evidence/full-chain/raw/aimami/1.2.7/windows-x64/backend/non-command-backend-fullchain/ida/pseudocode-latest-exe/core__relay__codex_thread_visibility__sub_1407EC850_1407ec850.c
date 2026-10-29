// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407ec850 | successor of pre-update 0x1402452f0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__m128i *__fastcall sub_1407EC850(__m128i *a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i si128; // xmm0
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rdi
  __int64 *i; // rax
  __int64 *v16; // r14
  __int64 v17; // r13
  __int64 v18; // rcx
  __int8 v19; // al
  __m128i v20; // xmm0
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __m128i *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // r13
  __int64 v42; // rsi
  unsigned __int64 v43; // r14
  __int64 v44; // r15
  __int64 v45; // rbx
  __m128i v46; // xmm0
  __int64 v47; // rcx
  __m128i v48; // xmm0
  __int64 v49; // rsi
  __int64 v50; // r13
  char v51; // al
  __int64 v52; // rcx
  _QWORD *v53; // r10
  __int64 v54; // rax
  __m128i v55; // xmm0
  _BYTE *v56; // rax
  __m128i *v57; // rsi
  __int64 v58; // rax
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __m128i *v61; // rcx
  __int64 v62; // rsi
  _QWORD *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  unsigned __int64 v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // r8
  __m128i v71; // xmm1
  __m128i v72; // xmm2
  __m128i v73; // xmm3
  __m128i v74; // xmm4
  __m128i v75; // xmm5
  __m128i *v76; // rax
  __m128i *v77; // r8
  __m128i v78; // xmm0
  __m128i v79; // xmm1
  __m128i v80; // xmm2
  bool v81; // zf
  __int64 v82; // rsi
  unsigned __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rsi
  _QWORD *v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v92; // rsi
  __m128i v93; // xmm0
  unsigned __int64 v94; // rax
  __int64 v95; // rdi
  const __m128i *v96; // r14
  __m128i v99; // xmm0
  unsigned __int64 v101; // rcx
  int v102; // r15d
  __int64 v103; // rdi
  __m128i v104; // xmm0
  char v105; // si
  __m128i *v106; // rcx
  __m128i v107; // xmm0
  __m128i v108; // xmm0
  __m128i *v109; // rsi
  bool v110; // bl
  __int64 v111; // rsi
  __int64 v112; // rdi
  unsigned __int64 v113; // rcx
  __int64 v114; // rdx
  __m128i v115; // xmm0
  __m128i *v116; // rcx
  _BYTE v117[24]; // [rsp+48h] [rbp-38h] BYREF
  __m128i v118; // [rsp+60h] [rbp-20h] BYREF
  __int64 v119; // [rsp+70h] [rbp-10h]
  __m128i v120; // [rsp+78h] [rbp-8h] BYREF
  __int64 v121; // [rsp+88h] [rbp+8h]
  __m128i v122; // [rsp+90h] [rbp+10h] BYREF
  __int64 v123; // [rsp+A0h] [rbp+20h]
  __m128i v124; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v125; // [rsp+B8h] [rbp+38h]
  __m128i v126; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v127; // [rsp+D0h] [rbp+50h]
  __int64 v128; // [rsp+E0h] [rbp+60h]
  __int64 v129; // [rsp+E8h] [rbp+68h]
  _QWORD *v130; // [rsp+F8h] [rbp+78h] BYREF
  _OWORD v131[5]; // [rsp+100h] [rbp+80h] BYREF
  __m128i v132; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v133; // [rsp+160h] [rbp+E0h]
  _BYTE *v134; // [rsp+170h] [rbp+F0h] BYREF
  __int64 (__fastcall *v135)(_QWORD, _QWORD); // [rsp+178h] [rbp+F8h]
  __int64 v136; // [rsp+180h] [rbp+100h]
  __int64 v137; // [rsp+188h] [rbp+108h]
  __int64 v138; // [rsp+190h] [rbp+110h]
  __int64 v139; // [rsp+198h] [rbp+118h]
  __int64 v140; // [rsp+1A0h] [rbp+120h]
  __int64 v141; // [rsp+1A8h] [rbp+128h]
  __int64 v142; // [rsp+1B0h] [rbp+130h]
  __int64 v143; // [rsp+1B8h] [rbp+138h]
  __m128i v144; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v145; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v146; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i v147; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v148; // [rsp+200h] [rbp+180h]
  __int128 v149; // [rsp+210h] [rbp+190h]
  __int128 v150; // [rsp+220h] [rbp+1A0h]
  __m128i v151; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v152; // [rsp+248h] [rbp+1C8h]
  __m128i v153; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v154; // [rsp+260h] [rbp+1E0h]
  __int128 v155; // [rsp+270h] [rbp+1F0h]
  __int128 v156; // [rsp+280h] [rbp+200h]
  __int128 v157; // [rsp+290h] [rbp+210h]
  __m128i v158; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v159; // [rsp+2B0h] [rbp+230h]
  _BYTE v160[96]; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v161; // [rsp+320h] [rbp+2A0h]
  _QWORD *v162; // [rsp+330h] [rbp+2B0h]
  __int64 v163; // [rsp+338h] [rbp+2B8h] BYREF
  __int64 v164; // [rsp+340h] [rbp+2C0h]
  unsigned __int64 v165; // [rsp+348h] [rbp+2C8h]
  __int64 v166; // [rsp+350h] [rbp+2D0h]
  __int64 v167; // [rsp+358h] [rbp+2D8h]
  __int64 v168; // [rsp+360h] [rbp+2E0h]
  __int64 v169; // [rsp+368h] [rbp+2E8h]
  __int64 v170; // [rsp+370h] [rbp+2F0h]
  __int64 v171; // [rsp+378h] [rbp+2F8h]
  __int64 v172; // [rsp+380h] [rbp+300h]
  unsigned __int64 v173; // [rsp+388h] [rbp+308h]
  _BYTE v174[96]; // [rsp+390h] [rbp+310h] BYREF
  __int128 v175; // [rsp+3F0h] [rbp+370h]
  __m128i *v176; // [rsp+400h] [rbp+380h]
  __int64 v177; // [rsp+408h] [rbp+388h]
  _QWORD *v178; // [rsp+410h] [rbp+390h]
  __int64 v179; // [rsp+418h] [rbp+398h]
  __int64 v180; // [rsp+420h] [rbp+3A0h]
  __int64 v181; // [rsp+428h] [rbp+3A8h]
  unsigned __int64 v182; // [rsp+430h] [rbp+3B0h]
  __int64 v183; // [rsp+438h] [rbp+3B8h]
  char v184; // [rsp+447h] [rbp+3C7h]
  __int64 v185; // [rsp+448h] [rbp+3C8h]
  __int64 v186; // [rsp+450h] [rbp+3D0h]
  char v187; // [rsp+45Dh] [rbp+3DDh]
  char v188; // [rsp+45Eh] [rbp+3DEh]
  char v189; // [rsp+45Fh] [rbp+3DFh]
  __int64 v190; // [rsp+460h] [rbp+3E0h]

  v190 = -2;
  v4 = *(_QWORD *)(a2 + 776);
  v5 = *(_QWORD *)(a2 + 784);
  sub_1407F9AF0((__int64)v174, v4, v5);
  v6 = *(_QWORD *)v174;
  *(_OWORD *)v160 = *(_OWORD *)&v174[8];
  *(_OWORD *)&v160[16] = *(_OWORD *)&v174[24];
  if ( *(_QWORD *)v174 != -1 )
  {
    a1[5].m128i_i64[1] = *(_QWORD *)&v174[88];
    v7 = *(__m128i *)&v174[40];
    v8 = *(__m128i *)&v174[56];
    *(__m128i *)((char *)a1 + 72) = *(__m128i *)&v174[72];
    *(__m128i *)((char *)a1 + 56) = v8;
    *(__m128i *)((char *)a1 + 40) = v7;
    si128 = _mm_load_si128((const __m128i *)v160);
    *(__m128i *)((char *)a1 + 24) = *(__m128i *)&v160[16];
    *(__m128i *)((char *)a1 + 8) = si128;
    a1->m128i_i64[0] = v6;
    return a1;
  }
  v136 = v4;
  v133 = *(_OWORD *)&v160[16];
  v132 = _mm_load_si128((const __m128i *)v160);
  v10 = *(_QWORD *)&v160[16];
  if ( !*(_QWORD *)&v160[16] )
  {
    *(__m128i *)((char *)&a1[1] + 8) = 0;
    *(__m128i *)((char *)a1 + 8) = 0;
    a1[2].m128i_i64[1] = 0;
    a1->m128i_i64[0] = -1;
    v26 = v132.m128i_i64[1];
    v27 = v132.m128i_i64[0];
    if ( v132.m128i_i64[0] )
      goto LABEL_131;
    return a1;
  }
  v138 = v5;
  v163 = 0;
  v164 = 8;
  v165 = 0;
  sub_140A2C460(v174, a2);
  v176 = a1;
  v11 = *(_QWORD *)&v174[8];
  v12 = *(_QWORD *)&v174[8] + 32LL * *(_QWORD *)&v174[16];
  v147.m128i_i64[0] = *(_QWORD *)&v174[8];
  v183 = *(_QWORD *)v174;
  *(_QWORD *)&v148 = *(_QWORD *)v174;
  *((_QWORD *)&v148 + 1) = v12;
  v13 = 32LL * *(_QWORD *)&v174[16] - 32;
  v14 = (_QWORD *)(*(_QWORD *)&v174[8] + 40LL);
  v182 = *(_QWORD *)&v174[8];
  for ( i = *(__int64 **)&v174[8]; ; i = v16 )
  {
    if ( i == (__int64 *)v12 )
      goto LABEL_28;
    v16 = i + 4;
    v147.m128i_i64[1] = (__int64)(i + 4);
    v11 = *i;
    v185 = v11;
    if ( v11 == -1 )
      break;
    v17 = i[2];
    v186 = i[1];
    sub_1416C49D0(v174, v186, v17);
    if ( *(_DWORD *)v174 == 2 )
    {
      v11 = v174[8] & 3;
      if ( (unsigned int)(v11 - 2) >= 2 && (v174[8] & 3) != 0 )
      {
        --*(_QWORD *)&v174[8];
        v174[0] = 3;
        sub_1416EBAD0(&v174[8]);
      }
    }
    else
    {
      sub_1407E1670((__int64)v174, v186, v17);
      if ( BYTE8(v175) == 0xFF )
      {
        v158 = _mm_loadu_si128((const __m128i *)&v174[80]);
        v71 = *(__m128i *)&v174[64];
        v157 = *(_OWORD *)&v174[64];
        v72 = *(__m128i *)v174;
        v73 = *(__m128i *)&v174[16];
        v74 = *(__m128i *)&v174[32];
        v75 = *(__m128i *)&v174[48];
        v156 = *(_OWORD *)&v174[48];
        v155 = *(_OWORD *)&v174[32];
        v154 = *(_OWORD *)&v174[16];
        v153 = *(__m128i *)v174;
        v76 = v176;
        v176[5] = v158;
        v76[4] = v71;
        v76[3] = v75;
        v76[2] = v74;
        v76[1] = v73;
        *v76 = v72;
        goto LABEL_107;
      }
      v159 = v175;
      v158 = *(__m128i *)&v174[80];
      v157 = *(_OWORD *)&v174[64];
      v156 = *(_OWORD *)&v174[48];
      v155 = *(_OWORD *)&v174[32];
      v154 = *(_OWORD *)&v174[16];
      v153 = *(__m128i *)v174;
      HIDWORD(v161) = HIDWORD(v175);
      *(_DWORD *)((char *)&v161 + 9) = *(_DWORD *)((char *)&v175 + 9);
      *(_OWORD *)v160 = *(_OWORD *)v174;
      *(_OWORD *)&v160[16] = *(_OWORD *)&v174[16];
      *(_OWORD *)&v160[32] = *(_OWORD *)&v174[32];
      *(_OWORD *)&v160[48] = *(_OWORD *)&v174[48];
      *(_OWORD *)&v160[64] = *(_OWORD *)&v174[64];
      *(__m128i *)&v160[80] = _mm_load_si128(&v158);
      *(_QWORD *)&v161 = v175;
      BYTE8(v161) = BYTE8(v175);
      v184 = 1;
      sub_1407D8740(v174);
      v18 = *(_QWORD *)v174;
      v19 = v174[8];
      if ( *(_QWORD *)v174 != -1 )
      {
        v77 = v176;
        v176[5].m128i_i64[1] = *(_QWORD *)&v174[88];
        *(__m128i *)((char *)v77 + 73) = *(__m128i *)&v174[73];
        v78 = _mm_loadu_si128((const __m128i *)&v174[9]);
        v79 = *(__m128i *)&v174[25];
        v80 = *(__m128i *)&v174[41];
        *(__m128i *)((char *)v77 + 57) = *(__m128i *)&v174[57];
        *(__m128i *)((char *)v77 + 41) = v80;
        *(__m128i *)((char *)v77 + 25) = v79;
        *(__m128i *)((char *)v77 + 9) = v78;
        v77->m128i_i64[0] = v18;
        v77->m128i_i8[8] = v19;
        sub_140777BC0(v160);
LABEL_107:
        if ( v185 )
          sub_140001660(v186, v185, 1);
        v81 = v12 == (_QWORD)v16;
        v82 = v183;
        if ( !v81 )
        {
          v83 = v13 >> 5;
          do
          {
            v84 = *(v14 - 1);
            if ( v84 )
              sub_140001660(*v14, v84, 1);
            v14 += 4;
            --v83;
          }
          while ( v83 );
        }
        if ( v82 )
        {
          v70 = 8;
          v69 = v182;
          v68 = 32 * v82;
LABEL_116:
          sub_140001660(v69, v68, v70);
        }
        goto LABEL_117;
      }
      if ( (v174[8] & 1) != 0 )
      {
        v175 = v161;
        *(_OWORD *)&v174[80] = *(_OWORD *)&v160[80];
        *(_OWORD *)&v174[64] = *(_OWORD *)&v160[64];
        v20 = _mm_load_si128((const __m128i *)v160);
        *(_OWORD *)&v174[48] = *(_OWORD *)&v160[48];
        *(_OWORD *)&v174[32] = *(_OWORD *)&v160[32];
        *(_OWORD *)&v174[16] = *(_OWORD *)&v160[16];
        *(__m128i *)v174 = v20;
        v21 = v165;
        if ( v165 == v163 )
          sub_141939740(&v163);
        v22 = v164;
        v11 = 112 * v21;
        *(_OWORD *)(v164 + v11 + 96) = v175;
        *(_OWORD *)(v22 + v11 + 80) = *(_OWORD *)&v174[80];
        *(_OWORD *)(v22 + v11 + 64) = *(_OWORD *)&v174[64];
        v23 = _mm_load_si128((const __m128i *)v174);
        v24 = *(_OWORD *)&v174[16];
        v25 = *(_OWORD *)&v174[32];
        *(_OWORD *)(v22 + v11 + 48) = *(_OWORD *)&v174[48];
        *(_OWORD *)(v22 + v11 + 32) = v25;
        *(_OWORD *)(v22 + v11 + 16) = v24;
        *(__m128i *)(v22 + v11) = v23;
        v165 = v21 + 1;
      }
      else
      {
        sub_140777BC0(v160);
      }
    }
    if ( v185 )
      sub_140001660(v186, v185, 1);
    v13 -= 32LL;
    v14 += 4;
  }
  if ( (__int64 *)v12 != v16 )
  {
    v28 = v13 >> 5;
    do
    {
      v29 = *(v14 - 1);
      if ( v29 )
        sub_140001660(*v14, v29, 1);
      v14 += 4;
      --v28;
    }
    while ( v28 );
  }
LABEL_28:
  if ( v183 )
    sub_140001660(v182, 32 * v183, 8);
  v30 = v176;
  if ( !v165 )
  {
    sub_140802F90(v136, v138);
    *(__m128i *)((char *)v30 + 8) = 0;
    v30[1].m128i_i64[1] = v10;
    v30[2] = 0;
    v30->m128i_i64[0] = -1;
    goto LABEL_117;
  }
  v145 = 0;
  v144 = 0;
  v146 = 0;
  v31 = sub_1416AE140(v11);
  v36 = v31;
  if ( *(_BYTE *)(v31 + 16) == 1 )
  {
    v37 = *(_QWORD *)v31;
    v38 = *(_QWORD *)(v36 + 8);
  }
  else
  {
    v37 = sub_1416C5230(v33, v32, v34, v35);
    *(_QWORD *)v36 = v37;
    *(_QWORD *)(v36 + 8) = v38;
    *(_BYTE *)(v36 + 16) = 1;
  }
  *(_QWORD *)v36 = v37 + 1;
  v127 = xmmword_141A46B20;
  v126 = _mm_loadu_si128((const __m128i *)&off_141A46B10);
  v128 = v37;
  v129 = v38;
  v151.m128i_i64[0] = 0;
  v151.m128i_i64[1] = 8;
  v152 = 0;
  v39 = v132.m128i_i64[1];
  v162 = (_QWORD *)v132.m128i_i64[1];
  v137 = v132.m128i_i64[1] + 72 * v10;
  v139 = 0;
  v142 = 0;
  v141 = 0;
  v140 = 0;
  v143 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v40 = v162;
      v186 = v39;
      v178 = v162;
      if ( v162 == (_QWORD *)v137 )
      {
LABEL_133:
        v92 = v126.m128i_i64[0];
        v93 = _mm_load_si128((const __m128i *)v126.m128i_i64[0]);
        v186 = v126.m128i_i64[1];
        if ( v126.m128i_i64[1] )
        {
          v94 = (8 * v126.m128i_i64[1] + 23) & 0xFFFFFFFFFFFFFFF0uLL;
          v185 = v94 + v126.m128i_i64[1] + 17;
          v182 = v126.m128i_i64[0] - v94;
          v183 = 16;
        }
        else
        {
          v183 = 0;
        }
        v95 = *((_QWORD *)&v127 + 1);
        v96 = (const __m128i *)(v126.m128i_i64[0] + 16);
        for ( _EAX = ~_mm_movemask_epi8(v93); v95-- != 0; _EAX = v102 )
        {
          if ( !(_WORD)_EAX )
          {
            do
            {
              v99 = _mm_load_si128(v96);
              v92 -= 128;
              ++v96;
              _EAX = _mm_movemask_epi8(v99) ^ 0xFFFF;
            }
            while ( !_EAX );
          }
          __asm { tzcnt   ecx, eax }
          v101 = *(_QWORD *)(v92 - (unsigned int)(8 * _ECX) - 8);
          if ( v101 >= v165 )
            sub_14196B673(v101, v165, &off_141A4B5D8);
          v102 = _EAX & (_EAX - 1);
          sub_1407E5410(v164 + 112 * v101, &unk_141A4B5F0, 24);
        }
        v103 = v136;
        if ( v186 && v185 )
          sub_140001660(v182, v185, v183);
        if ( v152 )
        {
          v147 = _mm_loadu_si128(&v151);
          *(_QWORD *)&v148 = v152;
          DWORD2(v148) = DWORD2(v133);
          sub_1407FC990(v160, v103, v138, (__int64)&v147);
          if ( *(_DWORD *)v160 != -1 )
          {
            *(_OWORD *)&v174[80] = *(_OWORD *)&v160[80];
            *(_OWORD *)&v174[64] = *(_OWORD *)&v160[64];
            v104 = _mm_loadu_si128((const __m128i *)v160);
            *(_OWORD *)&v174[48] = *(_OWORD *)&v160[48];
            *(_OWORD *)&v174[32] = *(_OWORD *)&v160[32];
            *(_OWORD *)&v174[16] = *(_OWORD *)&v160[16];
            *(__m128i *)v174 = v104;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v134 = v174;
              v135 = sub_140D76130;
              v153.m128i_i64[0] = (__int64)aCodexmateLibCo_11;
              v153.m128i_i64[1] = 51;
              *(_QWORD *)&v154 = aCodexmateLibCo_11;
              *((_QWORD *)&v154 + 1) = 51;
              *(_QWORD *)&v155 = &off_141A4B540;
              sub_140AF72B0(&unk_141A4B4F7, &v134, 2, &v153);
            }
            sub_140778C60(v174);
          }
          sub_1401A2670(&v147);
          v105 = 0;
        }
        else
        {
          v189 = 1;
          v105 = 1;
          sub_140802F90(v103, v138);
        }
        *(_QWORD *)v174 = &v144;
        *(_QWORD *)&v174[8] = sub_1416EBAE0;
        *(_QWORD *)&v174[16] = &v144.m128i_i64[1];
        *(_QWORD *)&v174[24] = sub_1416EBAE0;
        *(_QWORD *)&v174[32] = &v145;
        *(_QWORD *)&v174[40] = sub_1416EBAE0;
        *(_QWORD *)&v174[48] = &v145.m128i_i64[1];
        *(_QWORD *)&v174[56] = sub_1416EBAE0;
        *(_QWORD *)&v174[64] = &v146;
        *(_QWORD *)&v174[72] = sub_1416EBAE0;
        v189 = v105;
        sub_1416DAFA0(v117, &unk_141A4B558, v174);
        v189 = v105;
        sub_1406C9730((unsigned int)aRelayNoAccount, 30, (unsigned int)aDone_0, 4, (__int64)v117);
        v106 = v176;
        v176[2].m128i_i64[1] = v146;
        v107 = _mm_load_si128(&v144);
        *(__m128i *)((char *)v106 + 24) = v145;
        *(__m128i *)((char *)v106 + 8) = v107;
        v106->m128i_i64[0] = -1;
        if ( v105 )
          sub_1401A2670(&v151);
        sub_140776D20(&v163);
        sub_1401A2670(&v132);
        return v176;
      }
      while ( 1 )
      {
        v162 = v40 + 9;
        v41 = v164;
        v42 = v164 + 112 * v165;
        v43 = 0;
        if ( v164 != v42 )
          break;
LABEL_41:
        v145.m128i_i64[0] = ++v139;
        v40 = v162;
        v178 = v162;
        if ( v162 == (_QWORD *)v137 )
          goto LABEL_133;
      }
      while ( 1 )
      {
        v44 = v40[1];
        v45 = v40[2];
        v173 = v182;
        v172 = v185;
        v171 = v180;
        v170 = v181;
        v169 = v183;
        v168 = -1;
        v167 = v39;
        v166 = v179;
        v188 = 1;
        sub_1407C4200(v160, v41, aSelectModelMod, 135);
        v153 = *(__m128i *)&v160[8];
        v154 = *(_OWORD *)&v160[24];
        v155 = *(_OWORD *)&v160[40];
        v156 = *(_OWORD *)&v160[56];
        if ( *(_DWORD *)v160 == 1 )
        {
          v46 = _mm_load_si128(&v153);
          *(_OWORD *)&v174[56] = v156;
          *(_OWORD *)&v174[40] = v155;
          *(_OWORD *)&v174[24] = v154;
          *(__m128i *)&v174[8] = v46;
          *(_QWORD *)v174 = -1;
          v47 = v186;
          goto LABEL_39;
        }
        v48 = _mm_load_si128(&v153);
        v150 = v156;
        v149 = v155;
        v148 = v154;
        v147 = v48;
        *(_QWORD *)v160 = v44;
        *(_QWORD *)&v160[8] = v45;
        sub_1408FFA70(v174, &v147, v160);
        v173 = v182;
        v172 = v185;
        v171 = v180;
        v170 = v181;
        v169 = v183;
        v168 = -1;
        v167 = v186;
        v166 = v179;
        v188 = 1;
        sub_140778780(&v147);
        v47 = v186;
        if ( *(_QWORD *)v174 != -1 )
          break;
LABEL_39:
        if ( *(_QWORD *)&v174[8] != 0x8000000000000009uLL )
        {
          v60 = _mm_loadu_si128((const __m128i *)&v174[8]);
          *(_OWORD *)&v160[48] = *(_OWORD *)&v174[56];
          *(_OWORD *)&v160[32] = *(_OWORD *)&v174[40];
          *(_OWORD *)&v160[16] = *(_OWORD *)&v174[24];
          *(__m128i *)v160 = v60;
          v153.m128i_i64[0] = (__int64)v178;
          v153.m128i_i64[1] = (__int64)sub_1400015F0;
          *(_QWORD *)&v154 = v160;
          *((_QWORD *)&v154 + 1) = sub_14142D4D0;
          sub_1416DAFA0(&v124, &unk_141A4B4C8, &v153);
          v61 = v176;
          v176[1].m128i_i64[1] = v125;
          *(__m128i *)((char *)v61 + 8) = _mm_loadu_si128(&v124);
          v61->m128i_i64[0] = 10;
          v173 = v182;
          v172 = v185;
          v171 = v180;
          v170 = v181;
          v169 = v183;
          v168 = -1;
          v167 = v186;
          v166 = v179;
          v188 = 1;
          sub_1407785F0(v160);
          goto LABEL_90;
        }
        v173 = v182;
        v172 = v185;
        v171 = v180;
        v170 = v181;
        v169 = v183;
        v168 = -1;
        v167 = v47;
        v166 = v179;
        v188 = 1;
        sub_1407785F0(&v174[8]);
        v41 += 112;
        ++v43;
        v40 = v178;
        v39 = v186;
        if ( v41 == v42 )
          goto LABEL_41;
      }
      v183 = *(_QWORD *)&v174[8];
      v177 = *(_QWORD *)v174;
      v181 = *(_QWORD *)&v174[24];
      v180 = *(_QWORD *)&v174[32];
      v182 = *(_QWORD *)&v174[56];
      v185 = *(_QWORD *)&v174[48];
      v186 = *(_QWORD *)&v174[72];
      v179 = *(_QWORD *)&v174[80];
      if ( *(_QWORD *)&v174[16] != 6
        || *(_DWORD *)v183 ^ 0x616D6961 | *(unsigned __int16 *)(v183 + 4) ^ 0x3169
        || v185 == -1
        || *(_QWORD *)&v174[64] != v178[5]
        || (v49 = *(_QWORD *)&v174[40],
            v50 = *(_QWORD *)&v174[88],
            (unsigned int)sub_141923B40(v182, v178[4], *(_QWORD *)&v174[64]))
        || (v51 = sub_140842DD0(aSubagent, 10, v179, v50), v53 = v178, v51) )
      {
        v144.m128i_i64[1] = ++v142;
        goto LABEL_74;
      }
      if ( !v49 )
      {
        *(_QWORD *)&v131[0] = -1;
        goto LABEL_56;
      }
      if ( v178[6] == -1 )
      {
        v54 = 0;
      }
      else
      {
        v54 = v178[7];
        v52 = v178[8];
      }
      sub_1407FBAE0((unsigned int)v160, v180, v49, v178[1], v178[2], v178[4], v178[5], v54, v52);
      if ( *(_QWORD *)v160 != -1 )
      {
        v58 = *(_QWORD *)v160 - 2LL;
        if ( *(_QWORD *)v160 < 2u )
          v58 = 2;
        if ( v58 != 1 && v58 != 7 )
        {
          *(_OWORD *)&v174[80] = *(_OWORD *)&v160[80];
          *(_OWORD *)&v174[64] = *(_OWORD *)&v160[64];
          v115 = _mm_loadu_si128((const __m128i *)v160);
          *(_OWORD *)&v174[48] = *(_OWORD *)&v160[48];
          *(_OWORD *)&v174[32] = *(_OWORD *)&v160[32];
          *(_OWORD *)&v174[16] = *(_OWORD *)&v160[16];
          *(__m128i *)v174 = v115;
          v153.m128i_i64[0] = (__int64)v178;
          v153.m128i_i64[1] = (__int64)sub_1400015F0;
          *(_QWORD *)&v154 = v174;
          *((_QWORD *)&v154 + 1) = sub_140D76130;
          sub_1416DAFA0(&v122, &unk_141A4B41B, &v153);
          v116 = v176;
          v176[1].m128i_i64[1] = v123;
          *(__m128i *)((char *)v116 + 8) = _mm_loadu_si128(&v122);
          v116->m128i_i64[0] = 10;
          sub_140778C60(v174);
          if ( v186 )
            sub_140001660(v179, v186, 1);
          if ( v181 )
            sub_140001660(v180, v181, 1);
          if ( v177 )
            sub_140001660(v183, v177, 1);
          if ( !v185 )
            goto LABEL_90;
          v113 = v182;
          v114 = v185;
          goto LABEL_169;
        }
        *(_OWORD *)&v174[80] = *(_OWORD *)&v160[80];
        *(_OWORD *)&v174[64] = *(_OWORD *)&v160[64];
        v59 = _mm_loadu_si128((const __m128i *)v160);
        *(_OWORD *)&v174[48] = *(_OWORD *)&v160[48];
        *(_OWORD *)&v174[32] = *(_OWORD *)&v160[32];
        *(_OWORD *)&v174[16] = *(_OWORD *)&v160[16];
        *(__m128i *)v174 = v59;
        v146 = ++v143;
        sub_14083FF40(&v153, v178);
        sub_1407C5860(&v151, &v153);
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v147.m128i_i64[0] = (__int64)v178;
          v147.m128i_i64[1] = (__int64)sub_1400015F0;
          *(_QWORD *)&v148 = v174;
          *((_QWORD *)&v148 + 1) = sub_140D76130;
          v153.m128i_i64[0] = (__int64)aCodexmateLibCo_11;
          v153.m128i_i64[1] = 51;
          *(_QWORD *)&v154 = aCodexmateLibCo_11;
          *((_QWORD *)&v154 + 1) = 51;
          *(_QWORD *)&v155 = &off_141A4B4B0;
          sub_140AF72B0(&unk_141A4B44D, &v147, 2, &v153);
        }
        sub_140778C60(v174);
LABEL_74:
        if ( v186 )
          sub_140001660(v179, v186, 1);
        if ( v181 )
          sub_140001660(v180, v181, 1);
        if ( v177 )
          sub_140001660(v183, v177, 1);
        v39 = v186;
        if ( (unsigned __int64)(v185 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          sub_140001660(v182, v185, 1);
          v39 = v186;
        }
        continue;
      }
      break;
    }
    v131[4] = *(_OWORD *)&v160[72];
    v55 = _mm_loadu_si128((const __m128i *)&v160[8]);
    v131[3] = *(_OWORD *)&v160[56];
    v131[2] = *(_OWORD *)&v160[40];
    v131[1] = *(_OWORD *)&v160[24];
    v131[0] = v55;
    v53 = v178;
LABEL_56:
    if ( v43 >= v165 )
      sub_14196B673(v43, v165, &off_141A4B328);
    v130 = v53;
    if ( v53[6] == -1 )
    {
      v56 = nullptr;
    }
    else
    {
      v56 = (_BYTE *)v53[7];
      v135 = (__int64 (__fastcall *)(_QWORD, _QWORD))v53[8];
    }
    v134 = v56;
    v147.m128i_i64[0] = (__int64)&v130;
    v147.m128i_i64[1] = (__int64)&unk_141A4B340;
    *(_QWORD *)&v148 = &v134;
    *((_QWORD *)&v148 + 1) = &unk_141A4B360;
    sub_140772660((unsigned int)v160, v164 + 112 * v43, (unsigned int)aUpdateThreadsS_1, 43, (__int64)&v147, 2);
    if ( *(_QWORD *)v160 == -1 )
    {
      v57 = v176;
      if ( *(_QWORD *)&v160[8] == 1 )
      {
        v187 = 1;
        sub_140872C10(&v126, v43);
        v144.m128i_i64[0] = ++v140;
        if ( *(_QWORD *)&v131[0] != -1 )
        {
          v145.m128i_i64[1] = ++v141;
          sub_140191B20(v131);
        }
        if ( v186 )
          sub_140001660(v179, v186, 1);
        if ( v181 )
          sub_140001660(v180, v181, 1);
        if ( v177 )
          sub_140001660(v183, v177, 1);
        if ( v185 )
          sub_140001660(v182, v185, 1);
        v39 = v186;
        continue;
      }
      v153.m128i_i64[0] = *(_QWORD *)&v160[8];
      v110 = *(_QWORD *)&v131[0] == -1;
      if ( *(_QWORD *)&v131[0] != -1 )
      {
        sub_1407D8FF0(v131);
        sub_140191B20(v131);
      }
      *(_QWORD *)v174 = v178;
      *(_QWORD *)&v174[8] = sub_1400015F0;
      *(_QWORD *)&v174[16] = &v153;
      *(_QWORD *)&v174[24] = sub_1416EBAE0;
      v187 = v110;
      sub_1416DAFA0(&v120, &unk_141A4B3C3, v174);
      v57[1].m128i_i64[1] = v121;
      *(__m128i *)((char *)v57 + 8) = _mm_loadu_si128(&v120);
      v57->m128i_i64[0] = 10;
    }
    else
    {
      v108 = _mm_loadu_si128((const __m128i *)v160);
      *(_OWORD *)&v174[48] = *(_OWORD *)&v160[48];
      *(_OWORD *)&v174[32] = *(_OWORD *)&v160[32];
      *(_OWORD *)&v174[16] = *(_OWORD *)&v160[16];
      *(__m128i *)v174 = v108;
      LOBYTE(v162) = *(_QWORD *)&v131[0] == -1;
      v109 = v176;
      if ( *(_QWORD *)&v131[0] != -1 )
      {
        sub_1407D8FF0(v131);
        sub_140191B20(v131);
      }
      v153.m128i_i64[0] = (__int64)v178;
      v153.m128i_i64[1] = (__int64)sub_1400015F0;
      *(_QWORD *)&v154 = v174;
      *((_QWORD *)&v154 + 1) = sub_14142D4D0;
      sub_1416DAFA0(&v118, &unk_141A4B3EF, &v153);
      v109[1].m128i_i64[1] = v119;
      *(__m128i *)((char *)v109 + 8) = _mm_loadu_si128(&v118);
      v109->m128i_i64[0] = 10;
      v187 = (char)v162;
      sub_1407785F0(v174);
    }
    break;
  }
  v111 = v185;
  v112 = v181;
  if ( v186 )
    sub_140001660(v179, v186, 1);
  if ( v112 )
    sub_140001660(v180, v112, 1);
  if ( v177 )
    sub_140001660(v183, v177, 1);
  if ( v111 )
  {
    v113 = v182;
    v114 = v111;
LABEL_169:
    sub_140001660(v113, v114, 1);
  }
LABEL_90:
  v62 = v152;
  if ( v152 )
  {
    v63 = (_QWORD *)(v151.m128i_i64[1] + 56);
    do
    {
      v64 = *(v63 - 7);
      if ( v64 )
        sub_140001660(*(v63 - 6), v64, 1);
      v65 = *(v63 - 1);
      if ( v65 > 0 )
        sub_140001660(*v63, v65, 1);
      v66 = *(v63 - 4);
      if ( v66 )
        sub_140001660(*(v63 - 3), v66, 1);
      v63 += 9;
      --v62;
    }
    while ( v62 );
  }
  if ( v151.m128i_i64[0] )
    sub_140001660(v151.m128i_i64[1], 72 * v151.m128i_i64[0], 8);
  if ( v126.m128i_i64[1] )
  {
    v67 = (8 * v126.m128i_i64[1] + 23) & 0xFFFFFFFFFFFFFFF0uLL;
    v68 = v67 + v126.m128i_i64[1] + 17;
    if ( v67 + v126.m128i_i64[1] != -17 )
    {
      v69 = v126.m128i_i64[0] - v67;
      v70 = 16;
      goto LABEL_116;
    }
  }
LABEL_117:
  v85 = v164;
  v185 = v165;
  v186 = 0;
  v183 = v164;
  while ( v185 != v186 )
  {
    ++v186;
    v86 = v85 + 112;
    sub_1401A9C20();
    v85 = v86;
  }
  if ( v163 )
    sub_140001660(v164, 112 * v163, 8);
  v26 = v132.m128i_i64[1];
  v87 = (_QWORD *)(v132.m128i_i64[1] + 56);
  do
  {
    v88 = *(v87 - 7);
    if ( v88 )
      sub_140001660(*(v87 - 6), v88, 1);
    v89 = *(v87 - 1);
    if ( v89 > 0 )
      sub_140001660(*v87, v89, 1);
    v90 = *(v87 - 4);
    if ( v90 )
      sub_140001660(*(v87 - 3), v90, 1);
    v87 += 9;
    --v10;
  }
  while ( v10 );
  a1 = v176;
  v27 = v132.m128i_i64[0];
  if ( v132.m128i_i64[0] )
LABEL_131:
    sub_140001660(v26, 72 * v27, 8);
  return a1;
}
