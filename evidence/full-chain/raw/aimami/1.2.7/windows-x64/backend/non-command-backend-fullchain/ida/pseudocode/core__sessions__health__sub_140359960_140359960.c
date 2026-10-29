// win 1.2.7 | module src/core/sessions/health.rs | ea 0x140359960 | name sub_140359960
// win 1.2.7 | module src/core/sessions/health.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140359960(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __m128i v5; // xmm2
  __int128 v6; // xmm0
  __m128i v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rdx
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __int64 v12; // rdx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __m128i v15; // xmm0
  __m128i si128; // xmm1
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  unsigned __int64 v22; // rdi
  const __m128i *v24; // r15
  __int64 i; // r13
  bool v27; // cf
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __int128 v37; // xmm0
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  __m128i v42; // xmm2
  __int64 v43; // rbx
  __int64 v44; // rdi
  const __m128i *v45; // r12
  const __m128i *v46; // r15
  __m128i v48; // xmm0
  const __m128i *v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rbx
  bool v52; // zf
  __int64 v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // r14
  const __m128i *v57; // r15
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // r14
  const __m128i *v65; // r15
  __m128i v67; // xmm0
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rdi
  __m128i v71; // xmm1
  __m128i v72; // xmm2
  __int64 *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r15
  __int64 v76; // r13
  __int64 *v77; // rbx
  __int64 v78; // rcx
  unsigned __int64 v79; // r14
  __m128i v80; // xmm0
  __m128i v81; // xmm7
  __int64 v82; // rcx
  __int64 j; // rdx
  unsigned __int64 v84; // r14
  __m128i v86; // xmm8
  const __m128i *v88; // r13
  __int64 v89; // rbx
  int v90; // eax
  __int64 v91; // rbx
  __int64 v92; // r13
  __int64 v93; // r14
  __int64 v94; // r15
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r12
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // r15
  __int64 v101; // r14
  char v102; // bl
  __int64 v103; // r9
  unsigned __int64 v104; // r9
  unsigned __int64 v105; // r8
  __int64 v106; // r8
  __int64 v107; // rdi
  __int64 v108; // rdx
  __m128i v109; // xmm1
  __m128i v110; // xmm2
  __int128 v111; // xmm3
  __int128 v112; // xmm4
  __int128 v113; // xmm5
  __m128i v114; // xmm1
  __m128i v115; // xmm2
  __m128i v116; // xmm0
  __int64 v117; // r14
  unsigned __int64 v118; // r14
  __int64 v119; // r12
  __int64 v120; // rax
  __int128 v121; // xmm0
  __m128i v122; // xmm1
  __m128i v123; // xmm2
  __int64 v124; // rdx
  __m128i v125; // [rsp+30h] [rbp-50h] BYREF
  __m128i v126; // [rsp+40h] [rbp-40h]
  __m128i v127; // [rsp+50h] [rbp-30h]
  __m128i v128; // [rsp+60h] [rbp-20h] BYREF
  __int64 v129; // [rsp+70h] [rbp-10h]
  __int64 v130; // [rsp+80h] [rbp+0h]
  __int64 v131; // [rsp+88h] [rbp+8h]
  __int64 v132; // [rsp+90h] [rbp+10h]
  __int64 v133; // [rsp+98h] [rbp+18h]
  __int64 v134; // [rsp+A0h] [rbp+20h]
  __int64 v135; // [rsp+A8h] [rbp+28h]
  __int64 v136; // [rsp+B0h] [rbp+30h]
  __int64 v137; // [rsp+B8h] [rbp+38h]
  __m128i v138; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v139; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v140[2]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v141; // [rsp+100h] [rbp+80h] BYREF
  __int128 v142; // [rsp+108h] [rbp+88h]
  __m128i v143; // [rsp+118h] [rbp+98h] BYREF
  __m128i v144; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v145; // [rsp+138h] [rbp+B8h]
  __m128i v146; // [rsp+148h] [rbp+C8h]
  __m128i v147; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v148; // [rsp+168h] [rbp+E8h]
  __int128 v149; // [rsp+178h] [rbp+F8h]
  __int128 v150; // [rsp+188h] [rbp+108h]
  __int128 v151; // [rsp+198h] [rbp+118h]
  __int64 v152; // [rsp+1A8h] [rbp+128h]
  __m128i v153; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v154; // [rsp+1C0h] [rbp+140h]
  __int64 v155; // [rsp+1C8h] [rbp+148h]
  __m128i v156; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v157; // [rsp+1E8h] [rbp+168h]
  __m128i v158; // [rsp+1F0h] [rbp+170h] BYREF
  _BYTE v159[72]; // [rsp+200h] [rbp+180h] BYREF
  _BYTE v160[96]; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v161; // [rsp+2B0h] [rbp+230h]
  char v162; // [rsp+2B8h] [rbp+238h]
  _BYTE v163[7]; // [rsp+2B9h] [rbp+239h]
  __int64 v164; // [rsp+2C0h] [rbp+240h]
  __int64 v165; // [rsp+2C8h] [rbp+248h]
  _BYTE v166[104]; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v167; // [rsp+338h] [rbp+2B8h]
  __int128 v168; // [rsp+348h] [rbp+2C8h]
  __int128 v169; // [rsp+358h] [rbp+2D8h]
  __int128 v170; // [rsp+368h] [rbp+2E8h]
  __int64 v171; // [rsp+378h] [rbp+2F8h]
  __m256i v172; // [rsp+380h] [rbp+300h] BYREF
  __m128i v173; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v174; // [rsp+3B0h] [rbp+330h]
  __m128i v175; // [rsp+3C0h] [rbp+340h] BYREF
  __m128i v176; // [rsp+3D0h] [rbp+350h]
  __int64 v177; // [rsp+3E0h] [rbp+360h]
  const __m128i *v178; // [rsp+3F0h] [rbp+370h]
  __int64 v179; // [rsp+3F8h] [rbp+378h]
  __int64 *v180; // [rsp+400h] [rbp+380h]
  __int64 v181; // [rsp+408h] [rbp+388h]
  __int64 v182; // [rsp+410h] [rbp+390h]
  __int64 v183; // [rsp+418h] [rbp+398h]
  bool v184; // [rsp+423h] [rbp+3A3h]
  char v185; // [rsp+424h] [rbp+3A4h]
  char v186; // [rsp+425h] [rbp+3A5h]
  char v187; // [rsp+426h] [rbp+3A6h]
  char v188; // [rsp+427h] [rbp+3A7h]
  __int64 v189; // [rsp+428h] [rbp+3A8h]

  v189 = -2;
  sub_140C1C870(v166);
  *(_OWORD *)v160 = *(_OWORD *)&v166[8];
  *(_OWORD *)&v160[16] = *(_OWORD *)&v166[24];
  *(_OWORD *)&v160[32] = *(_OWORD *)&v166[40];
  *(_OWORD *)&v160[48] = *(_OWORD *)&v166[56];
  *(_OWORD *)&v160[64] = *(_OWORD *)&v166[72];
  *(_OWORD *)&v160[80] = *(_OWORD *)&v166[88];
  if ( *(_QWORD *)v166 == 2 )
  {
    v172 = *(__m256i *)v160;
    v173 = *(__m128i *)&v160[32];
    v174 = *(_OWORD *)&v160[48];
    v175 = *(__m128i *)&v160[64];
    v176 = *(__m128i *)&v160[80];
  }
  else
  {
    v152 = v171;
    v151 = v170;
    v150 = v169;
    v149 = v168;
    v148 = v167;
    v142 = *(_OWORD *)v160;
    v143 = *(__m128i *)&v160[16];
    v144 = *(__m128i *)&v160[32];
    v145 = *(_OWORD *)&v160[48];
    v146 = *(__m128i *)&v160[64];
    v147 = *(__m128i *)&v160[80];
    v141 = *(_QWORD *)v166;
    sub_140C4A970(&v172, &v141, 0);
    sub_140BAC0A0(&v141);
  }
  v4 = v172.m256i_i64[0];
  v128 = *(__m128i *)&v172.m256i_u64[1];
  v129 = v172.m256i_i64[3];
  if ( v172.m256i_i64[0] != -1 )
  {
    v5 = _mm_load_si128(&v175);
    *(__m128i *)&v159[56] = v176;
    *(__m128i *)&v159[40] = v5;
    *(_OWORD *)&v159[24] = v174;
    *(__m128i *)&v159[8] = v173;
    *(_QWORD *)v159 = v129;
    v158 = v128;
    v153 = v128;
    v154 = v129;
    v155 = v173.m128i_i64[0];
    v156 = *(__m128i *)&v159[16];
    *(_QWORD *)(a1 + 88) = v176.m128i_i64[1];
    v6 = *(_OWORD *)&v159[32];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v159[48];
    *(_OWORD *)(a1 + 56) = v6;
    v7 = _mm_load_si128(&v153);
    v8 = v154;
    v9 = v155;
    *(__m128i *)(a1 + 40) = _mm_load_si128(&v156);
    *(_QWORD *)(a1 + 24) = v8;
    *(_QWORD *)(a1 + 32) = v9;
    *(__m128i *)(a1 + 8) = v7;
    *(_QWORD *)a1 = v4;
    return a1;
  }
  sub_1402DED50(&v138, &v128);
  v10 = _mm_loadu_si128(&v139);
  v11 = _mm_loadu_si128(v140);
  v158 = _mm_loadu_si128(&v138);
  v156 = v11;
  v125 = v158;
  v126 = v10;
  v127 = v11;
  v186 = 1;
  sub_1401BEB90(v160, a2);
  v13 = *(_QWORD *)v160;
  v158 = *(__m128i *)&v160[8];
  *(_OWORD *)v159 = *(_OWORD *)&v160[24];
  *(_OWORD *)&v159[16] = *(_OWORD *)&v160[40];
  if ( *(_QWORD *)v160 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v160[88];
    v14 = *(_OWORD *)&v160[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v160[72];
    *(_OWORD *)(a1 + 56) = v14;
    v15 = _mm_load_si128(&v158);
    si128 = _mm_load_si128((const __m128i *)v159);
    *(__m128i *)(a1 + 40) = _mm_load_si128((const __m128i *)&v159[16]);
    *(__m128i *)(a1 + 24) = si128;
    *(__m128i *)(a1 + 8) = v15;
    *(_QWORD *)a1 = v13;
LABEL_8:
    sub_140298940(&v125, v12);
    return a1;
  }
  v18 = _mm_load_si128((const __m128i *)v159);
  v19 = _mm_load_si128((const __m128i *)&v159[16]);
  v138 = _mm_load_si128(&v158);
  v139 = v18;
  v140[0] = v19;
  sub_1401C07D0(v166, &v138, a2);
  v172 = *(__m256i *)&v166[8];
  v173 = *(__m128i *)&v166[40];
  v174 = *(_OWORD *)&v166[56];
  v175 = *(__m128i *)&v166[72];
  v176 = *(__m128i *)&v166[88];
  if ( !*(_QWORD *)v166 )
  {
    *(__m128i *)(a1 + 80) = v176;
    *(__m128i *)(a1 + 64) = v175;
    v34 = _mm_load_si128((const __m128i *)&v172);
    v35 = _mm_load_si128((const __m128i *)&v172.m256i_u64[2]);
    v36 = _mm_load_si128(&v173);
    *(_OWORD *)(a1 + 48) = v174;
    *(__m128i *)(a1 + 32) = v36;
    *(__m128i *)(a1 + 16) = v35;
    *(__m128i *)a1 = v34;
    sub_14029A620(&v158);
    goto LABEL_8;
  }
  v182 = a2;
  *(_QWORD *)&v150 = v169;
  v149 = v168;
  v148 = v167;
  v20 = _mm_load_si128((const __m128i *)&v172.m256i_u64[2]);
  v21 = _mm_load_si128(&v173);
  v142 = *(_OWORD *)v172.m256i_i8;
  v143 = v20;
  v144 = v21;
  v145 = v174;
  v146 = v175;
  v147 = v176;
  v178 = *(const __m128i **)v166;
  v141 = *(_QWORD *)v166;
  sub_14029A620(&v158);
  v22 = v125.m128i_i64[0];
  _RAX = v126.m128i_i64[1];
  v24 = (const __m128i *)(v125.m128i_i64[0] + 16);
  _EBX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v125.m128i_i64[0]));
  v157 = 0;
  v131 = v126.m128i_i64[1];
  for ( i = v126.m128i_i64[1]; ; _RAX = i )
  {
    v27 = i-- != 0;
    v130 = _RAX;
    v184 = v27;
    if ( !v27 )
    {
      v185 = 1;
      sub_14035B7D0(v166, v182, &v125);
      _RAX = *(_QWORD *)v166;
      *(_OWORD *)v160 = *(_OWORD *)&v166[8];
      *(_OWORD *)&v160[16] = *(_OWORD *)&v166[24];
      *(_OWORD *)&v160[32] = *(_OWORD *)&v166[40];
      if ( *(_QWORD *)v166 != -1 )
      {
        *(_QWORD *)(a1 + 88) = *(_QWORD *)&v166[88];
        v37 = *(_OWORD *)&v166[56];
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v166[72];
        *(_OWORD *)(a1 + 56) = v37;
        v38 = _mm_load_si128((const __m128i *)v160);
        v39 = _mm_load_si128((const __m128i *)&v160[16]);
        *(__m128i *)(a1 + 40) = _mm_load_si128((const __m128i *)&v160[32]);
        *(__m128i *)(a1 + 24) = v39;
        *(__m128i *)(a1 + 8) = v38;
        *(_QWORD *)a1 = _RAX;
        goto LABEL_21;
      }
      v71 = _mm_load_si128((const __m128i *)&v160[16]);
      v72 = _mm_load_si128((const __m128i *)&v160[32]);
      v158 = _mm_load_si128((const __m128i *)v160);
      *(__m128i *)v159 = v71;
      *(__m128i *)&v159[16] = v72;
      v188 = 1;
      sub_140359550(v166, &v158, &v141, &v144.m128i_u64[1]);
      v73 = *(__int64 **)&v166[8];
      v74 = *(_QWORD *)v166;
      v132 = *(_QWORD *)&v166[16];
      v75 = *(_QWORD *)&v166[8] + 24LL * *(_QWORD *)&v166[16];
      *(_QWORD *)v166 = *(_QWORD *)&v166[8];
      *(_QWORD *)&v166[16] = v74;
      *(_QWORD *)&v166[24] = v75;
      v183 = v142;
      v164 = v143.m128i_i64[0];
      v76 = 0;
      if ( *(_QWORD *)&v166[8] != v75 )
      {
        do
        {
          v77 = v73 + 3;
          *(_QWORD *)&v166[8] = v73 + 3;
          v78 = *v73;
          *(__m128i *)v172.m256i_i8 = _mm_loadu_si128((const __m128i *)(v73 + 1));
          if ( v78 == -1 )
            break;
          v179 = v78;
          *(_QWORD *)v160 = v78;
          *(__m128i *)&v160[8] = _mm_load_si128((const __m128i *)&v172);
          if ( !v164 )
LABEL_80:
            sub_141938FE0(aNoEntryFoundFo, 22, &off_1419EA550);
          v79 = sub_140D2AC70(&v143.m128i_u64[1], v160);
          v80 = _mm_cvtsi32_si128(v79 >> 57);
          v81 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v80, v80), 0), 68);
          v82 = *(_QWORD *)&v160[8];
          v22 = *(_QWORD *)&v160[16];
          for ( j = 0; ; j += 16 )
          {
            v84 = v183 & v79;
            HIDWORD(_RAX) = HIDWORD(v178);
            v86 = _mm_loadu_si128((const __m128i *)((char *)v178 + v84));
            _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v86, v81));
            if ( _R12D )
              break;
LABEL_66:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v86, (__m128i)-1LL)) )
              goto LABEL_80;
            v79 = j + v84 + 16;
          }
          v181 = v76;
          v180 = v77;
          v165 = j;
          while ( 1 )
          {
            __asm { tzcnt   eax, r12d }
            if ( v22 == v178[-5 * (v183 & (v84 + _RAX)) - 4].m128i_i64[0] )
            {
              v88 = &v178[-5 * (v183 & (v84 + _RAX))];
              v89 = v82;
              v90 = sub_1418F4B70(v82, v88[-5].m128i_i64[1]);
              v82 = v89;
              if ( !v90 )
                break;
            }
            _RAX = (unsigned int)(_R12D - 1);
            LOWORD(_RAX) = _R12D & (_R12D - 1);
            _R12D = _RAX;
            v76 = v181;
            v77 = v180;
            j = v165;
            if ( !(_WORD)_RAX )
              goto LABEL_66;
          }
          if ( v88[-4].m128i_i8[8] )
          {
            v91 = v88[-3].m128i_i64[0];
            if ( v91 <= 0 )
              v91 = 0;
          }
          else
          {
            v91 = 0;
          }
          v92 = v181;
          if ( v179 )
            sub_140001660(v82, v179, 1);
          v76 = v91 + v92;
          v73 = v180;
        }
        while ( v180 != (__int64 *)v75 );
      }
      v188 = 1;
      sub_140383620(v166);
      v93 = *(_QWORD *)(v182 + 8);
      v94 = *(_QWORD *)(v182 + 16);
      v188 = 1;
      v95 = sub_140353FF0(v93, v94);
      v179 = v96;
      v97 = v95;
      v188 = 1;
      v98 = sub_14035B070(v93, v94);
      v164 = v99;
      v100 = v98;
      v188 = 1;
      sub_1401B5F40(&v138, v182);
      v101 = v139.m128i_i64[0];
      v187 = 1;
      v183 = v138.m128i_i64[1];
      v102 = sub_141682B30(v138.m128i_i64[1], v139.m128i_i64[0]);
      if ( v102 )
      {
        v187 = 1;
        LOBYTE(v103) = 1;
        sub_1402C8680(v166, v183, v101, v103);
        LOBYTE(v22) = (_BYTE)v167 == 0xFF;
        if ( (_BYTE)v167 == 0xFF )
        {
          v176 = _mm_loadu_si128((const __m128i *)&v166[80]);
          v109 = _mm_loadu_si128((const __m128i *)&v166[64]);
          v175 = v109;
          v110 = _mm_loadu_si128((const __m128i *)v166);
          v111 = *(_OWORD *)&v166[16];
          v112 = *(_OWORD *)&v166[32];
          v113 = *(_OWORD *)&v166[48];
          v174 = *(_OWORD *)&v166[48];
          v173 = *(__m128i *)&v166[32];
          *(_OWORD *)&v172.m256i_u64[2] = *(_OWORD *)&v166[16];
          *(__m128i *)v172.m256i_i8 = v110;
          *(__m128i *)(a1 + 80) = v176;
          *(__m128i *)(a1 + 64) = v109;
          *(_OWORD *)(a1 + 48) = v113;
          *(_OWORD *)(a1 + 32) = v112;
          *(_OWORD *)(a1 + 16) = v111;
          *(__m128i *)a1 = v110;
          goto LABEL_93;
        }
        v177 = *(_QWORD *)&v166[96];
        v176 = *(__m128i *)&v166[80];
        v175 = *(__m128i *)&v166[64];
        v174 = *(_OWORD *)&v166[48];
        v173 = *(__m128i *)&v166[32];
        v172 = *(__m256i *)v166;
        *(_DWORD *)v163 = *(_DWORD *)((char *)&v167 + 1);
        *(_DWORD *)&v163[3] = DWORD1(v167);
        *(_OWORD *)v160 = *(_OWORD *)v166;
        *(_OWORD *)&v160[16] = *(_OWORD *)&v166[16];
        *(_OWORD *)&v160[32] = *(_OWORD *)&v166[32];
        *(_OWORD *)&v160[48] = *(_OWORD *)&v166[48];
        *(_OWORD *)&v160[64] = *(_OWORD *)&v166[64];
        *(_OWORD *)&v160[80] = *(_OWORD *)&v166[80];
        v161 = *(_QWORD *)&v166[96];
        v162 = v167;
        v181 = v76;
        LOBYTE(v182) = (_BYTE)v167 == 0xFF;
        v135 = v100;
        if ( (_QWORD)v148 )
        {
          v105 = (24 * v148 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          v136 = v148 + v105 + 17;
          v104 = v147.m128i_i64[1] - v105;
          v106 = 16;
        }
        else
        {
          v106 = 0;
        }
        v134 = v97;
        v165 = v158.m128i_i64[0] + v158.m128i_i64[1] + 1;
        v114 = _mm_load_si128((const __m128i *)v158.m128i_i64[0]);
        v133 = v158.m128i_i64[0] + 16;
        v180 = *(__int64 **)&v159[8];
        v115 = _mm_load_si128((const __m128i *)v147.m128i_i64[1]);
        v116 = _mm_load_si128((const __m128i *)v144.m128i_i64[1]);
        v117 = v146.m128i_i64[0];
        if ( (_QWORD)v145 )
        {
          v118 = (24 * v145 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          v137 = v118 + v145 + 17;
          v22 = v144.m128i_i64[1] - v118;
          v117 = v146.m128i_i64[0];
          v119 = 16;
        }
        else
        {
          v119 = 0;
        }
        *(_QWORD *)&v166[64] = v106;
        *(_QWORD *)&v166[72] = v136;
        *(_QWORD *)&v166[80] = v104;
        *(_QWORD *)&v166[88] = v147.m128i_i64[1];
        *(_QWORD *)&v166[96] = v147.m128i_i64[1] + 16;
        *(_QWORD *)&v167 = v147.m128i_i64[1] + v148 + 1;
        WORD4(v167) = ~(unsigned __int16)_mm_movemask_epi8(v115);
        *(_QWORD *)&v168 = v149;
        *((_QWORD *)&v168 + 1) = v158.m128i_i64[0];
        *(_QWORD *)&v169 = v133;
        *((_QWORD *)&v169 + 1) = v165;
        LOWORD(v170) = ~(unsigned __int16)_mm_movemask_epi8(v114);
        *((_QWORD *)&v170 + 1) = v180;
        *(_QWORD *)v166 = v119;
        *(_QWORD *)&v166[8] = v137;
        *(_QWORD *)&v166[16] = v22;
        *(_QWORD *)&v166[24] = v144.m128i_i64[1];
        *(_QWORD *)&v166[32] = v144.m128i_i64[1] + 16;
        *(_QWORD *)&v166[40] = v144.m128i_i64[1] + v145 + 1;
        *(_WORD *)&v166[48] = ~(unsigned __int16)_mm_movemask_epi8(v116);
        *(_QWORD *)&v166[56] = v117;
        sub_1402B31E0(&v172, v166);
        sub_1403543C0((__int64)v166, (__int64)v160, v172.m256i_i64, (__int64)&v141);
        v76 = v181;
        LOBYTE(v22) = v182;
        v97 = v134;
        v100 = v135;
        v120 = *(_QWORD *)v166;
        v153 = _mm_loadu_si128((const __m128i *)&v166[8]);
        v154 = *(_QWORD *)&v166[24];
        if ( *(_QWORD *)v166 != -1 )
        {
          v121 = *(_OWORD *)&v166[32];
          v122 = _mm_loadu_si128((const __m128i *)&v166[48]);
          v123 = _mm_loadu_si128((const __m128i *)&v166[64]);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v166[80];
          *(__m128i *)(a1 + 64) = v123;
          *(__m128i *)(a1 + 48) = v122;
          *(_OWORD *)(a1 + 32) = v121;
          *(_QWORD *)(a1 + 24) = v154;
          *(__m128i *)(a1 + 8) = _mm_load_si128(&v153);
          *(_QWORD *)a1 = v120;
          sub_140370B80(&v172);
          v187 = 0;
          sub_14029B090(v160);
LABEL_93:
          v124 = v138.m128i_i64[0];
          if ( v138.m128i_i64[0] )
            sub_140001660(v183, v138.m128i_i64[0], 1);
          HIDWORD(_RAX) = (unsigned __int64)sub_140298940(&v158, v124) >> 32;
          v43 = v142;
          if ( (_QWORD)v142 )
            goto LABEL_22;
          goto LABEL_34;
        }
        v107 = v154;
        sub_140025530(&v153);
        sub_140370B80(&v172);
        v187 = 0;
        sub_14029B090(v160);
      }
      else
      {
        v107 = 0;
      }
      *(_QWORD *)(a1 + 8) = v100;
      *(_QWORD *)(a1 + 16) = v164;
      *(_QWORD *)(a1 + 24) = v131;
      *(_QWORD *)(a1 + 32) = v132;
      *(_QWORD *)(a1 + 40) = v76;
      *(_QWORD *)(a1 + 48) = v157;
      *(_QWORD *)(a1 + 56) = v97;
      *(_QWORD *)(a1 + 64) = v179;
      *(_QWORD *)(a1 + 72) = v107;
      *(_BYTE *)(a1 + 80) = 1;
      *(_QWORD *)a1 = -1;
      v108 = v138.m128i_i64[0];
      if ( v138.m128i_i64[0] )
        sub_140001660(v183, v138.m128i_i64[0], 1);
      sub_140298940(&v158, v108);
      sub_14029A500(&v141);
      if ( !v102 )
      {
        sub_140370B80(&v144.m128i_u64[1]);
        sub_140370B80(&v147.m128i_u64[1]);
      }
      return a1;
    }
    if ( !(_WORD)_EBX )
    {
      do
      {
        v28 = _mm_load_si128(v24);
        v22 -= 6656LL;
        ++v24;
        _EBX = _mm_movemask_epi8(v28) ^ 0xFFFF;
      }
      while ( !_EBX );
    }
    __asm { tzcnt   eax, ebx }
    v29 = -416 * _RAX;
    v30 = *(_QWORD *)(v22 + v29 - 408);
    v31 = *(_QWORD *)(v22 + v29 - 400);
    v185 = 1;
    sub_1402D3470((unsigned int)v166, v30, v31, v22 + v29 - 392, (__int64)&v141);
    v32 = *(_QWORD *)v166;
    _RAX = v166[8];
    if ( *(_QWORD *)v166 != -1 )
      break;
    v157 += v166[8] ^ 1LL;
    _EBX &= _EBX - 1;
  }
  v12 = *(_QWORD *)&v166[88];
  *(_QWORD *)(a1 + 88) = *(_QWORD *)&v166[88];
  *(_OWORD *)(a1 + 73) = *(_OWORD *)&v166[73];
  v40 = _mm_loadu_si128((const __m128i *)&v166[9]);
  v41 = _mm_loadu_si128((const __m128i *)&v166[25]);
  v42 = _mm_loadu_si128((const __m128i *)&v166[41]);
  *(_OWORD *)(a1 + 57) = *(_OWORD *)&v166[57];
  *(__m128i *)(a1 + 41) = v42;
  *(__m128i *)(a1 + 25) = v41;
  *(__m128i *)(a1 + 9) = v40;
  *(_QWORD *)a1 = v32;
  *(_BYTE *)(a1 + 8) = _RAX;
LABEL_21:
  LOBYTE(v22) = 1;
  v43 = v142;
  if ( (_QWORD)v142 )
  {
LABEL_22:
    LOBYTE(v182) = v22;
    v44 = v143.m128i_i64[0];
    if ( v143.m128i_i64[0] )
    {
      v45 = v178;
      v46 = v178 + 1;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v178));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v48 = _mm_load_si128(v46);
            v45 -= 80;
            ++v46;
            _R13D = _mm_movemask_epi8(v48) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   eax, r13d }
        v49 = &v45[-5 * _RAX];
        v50 = v49[-5].m128i_i64[0];
        if ( v50 )
          sub_140001660(v49[-5].m128i_i64[1], v50, 1);
        v12 = v49[-3].m128i_i64[1];
        if ( v12 != -1 && v12 )
          sub_140001660(v49[-2].m128i_i64[0], v12, 1);
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
        --v44;
      }
      while ( v44 );
    }
    _RAX = 80 * v43;
    v51 = 81 * v43;
    v52 = v51 == -97;
    v53 = v51 + 97;
    LOBYTE(v22) = v182;
    if ( !v52 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660((char *)&v178[-5] - _RAX, v53, 16) >> 32;
  }
LABEL_34:
  if ( (_BYTE)v22 )
  {
    v54 = v145;
    if ( (_QWORD)v145 )
    {
      v55 = v146.m128i_i64[0];
      if ( v146.m128i_i64[0] )
      {
        v56 = v144.m128i_i64[1];
        v57 = (const __m128i *)(v144.m128i_i64[1] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v144.m128i_i64[1]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v59 = _mm_load_si128(v57);
              v56 -= 384;
              ++v57;
              _R12D = _mm_movemask_epi8(v59) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v60 = -3 * _RAX;
          v12 = *(_QWORD *)(v56 + 8 * v60 - 24);
          if ( v12 )
            sub_140001660(*(_QWORD *)(v56 + 8 * v60 - 16), v12, 1);
          --v55;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v55 );
      }
      _RAX = (24 * v54 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v61 = _RAX + v54 + 17;
      if ( v61 )
        HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v144.m128i_i64[1] - _RAX, v61, 16) >> 32;
    }
    v62 = v148;
    if ( (_QWORD)v148 )
    {
      v63 = v149;
      if ( (_QWORD)v149 )
      {
        v64 = v147.m128i_i64[1];
        v65 = (const __m128i *)(v147.m128i_i64[1] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v147.m128i_i64[1]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v67 = _mm_load_si128(v65);
              v64 -= 384;
              ++v65;
              _R12D = _mm_movemask_epi8(v67) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v68 = -3 * _RAX;
          v12 = *(_QWORD *)(v64 + 8 * v68 - 24);
          if ( v12 )
            sub_140001660(*(_QWORD *)(v64 + 8 * v68 - 16), v12, 1);
          --v63;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v63 );
      }
      v69 = (24 * v62 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v70 = v69 + v62 + 17;
      if ( v70 )
        sub_140001660(v147.m128i_i64[1] - v69, v70, 16);
    }
  }
  if ( v130 )
    goto LABEL_8;
  return a1;
}
