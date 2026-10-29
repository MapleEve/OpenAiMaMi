// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140a7e520 | successor of pre-update 0x140359960 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_140A7E520(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __m128i si128; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rax
  __int128 v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __int64 v16; // r15
  const __m128i *v17; // r12
  __int64 v18; // r14
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  __int64 v26; // rax
  __int128 v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // r14
  const __m128i *v40; // r15
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // r14
  const __m128i *v49; // r15
  __m128i v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  __m128i v56; // xmm1
  __m128i v57; // xmm2
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r12
  unsigned __int64 v61; // r14
  __int64 v62; // r15
  __int64 *v63; // rdi
  __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v67; // r9
  __m128i v68; // xmm0
  __m128i v69; // xmm7
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 i; // r10
  unsigned __int64 v73; // rax
  __m128i v74; // xmm8
  __int64 v76; // r14
  __int64 v77; // rdi
  int v78; // eax
  int v79; // eax
  bool v80; // zf
  __int64 v81; // rdi
  unsigned __int64 v82; // r14
  __int64 v83; // r15
  __int64 v84; // r12
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // r15
  __int64 v88; // rdx
  __int64 v89; // r12
  int v90; // ecx
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // r13
  __int128 v94; // kr20_16
  __int64 v95; // rcx
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // r10
  __int64 v98; // rdi
  __m128i v99; // xmm1
  __m128i v100; // xmm2
  __int128 v101; // xmm3
  __int128 v102; // xmm4
  __int128 v103; // xmm5
  __m128i v104; // xmm1
  __m128i v105; // xmm2
  __m128i v106; // xmm0
  unsigned __int64 v107; // r8
  __int64 v108; // r8
  __int64 v109; // rax
  __int128 v110; // xmm0
  __m128i v111; // xmm1
  __m128i v112; // xmm2
  __m128i v113; // [rsp+30h] [rbp-50h] BYREF
  __m128i v114; // [rsp+40h] [rbp-40h]
  __m128i v115; // [rsp+50h] [rbp-30h]
  __m128i v116; // [rsp+60h] [rbp-20h] BYREF
  __m128i v117; // [rsp+70h] [rbp-10h]
  __m128i v118; // [rsp+80h] [rbp+0h]
  __int64 v119; // [rsp+90h] [rbp+10h]
  __int64 v120; // [rsp+98h] [rbp+18h]
  __int64 v121; // [rsp+A0h] [rbp+20h]
  __int64 v122; // [rsp+A8h] [rbp+28h]
  __int64 v123; // [rsp+B0h] [rbp+30h]
  __int64 v124; // [rsp+B8h] [rbp+38h]
  _BYTE v125[96]; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v126; // [rsp+120h] [rbp+A0h]
  char v127; // [rsp+128h] [rbp+A8h]
  _BYTE v128[7]; // [rsp+129h] [rbp+A9h]
  _BYTE v129[56]; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v130; // [rsp+168h] [rbp+E8h]
  __m128i v131; // [rsp+178h] [rbp+F8h]
  __m128i v132; // [rsp+188h] [rbp+108h] BYREF
  __int128 v133; // [rsp+198h] [rbp+118h]
  __int128 v134; // [rsp+1A8h] [rbp+128h]
  __int64 v135; // [rsp+1B8h] [rbp+138h]
  __m128i v136; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v137; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v138; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v139; // [rsp+1F0h] [rbp+170h]
  __m128i v140; // [rsp+200h] [rbp+180h]
  __m128i v141; // [rsp+210h] [rbp+190h] BYREF
  __int64 v142; // [rsp+220h] [rbp+1A0h]
  __m128i v143; // [rsp+230h] [rbp+1B0h] BYREF
  __m128i v144; // [rsp+240h] [rbp+1C0h] BYREF
  __m128i v145; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v146; // [rsp+260h] [rbp+1E0h]
  __int64 v147; // [rsp+268h] [rbp+1E8h]
  _BYTE v148[104]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v149; // [rsp+2D8h] [rbp+258h]
  __int128 v150; // [rsp+2E8h] [rbp+268h]
  __int64 v151; // [rsp+2F8h] [rbp+278h]
  __int64 v152; // [rsp+300h] [rbp+280h]
  __int16 v153; // [rsp+308h] [rbp+288h]
  __int64 v154; // [rsp+310h] [rbp+290h]
  __int128 v155; // [rsp+318h] [rbp+298h]
  unsigned __int64 v156; // [rsp+328h] [rbp+2A8h]
  __int64 v157; // [rsp+330h] [rbp+2B0h]
  __int64 v158; // [rsp+338h] [rbp+2B8h]
  __int64 v159; // [rsp+340h] [rbp+2C0h]
  __int64 v160; // [rsp+348h] [rbp+2C8h]
  char v161; // [rsp+353h] [rbp+2D3h]
  char v162; // [rsp+354h] [rbp+2D4h]
  char v163; // [rsp+355h] [rbp+2D5h]
  char v164; // [rsp+356h] [rbp+2D6h]
  char v165; // [rsp+357h] [rbp+2D7h]
  __int64 v166; // [rsp+358h] [rbp+2D8h]

  v166 = -2;
  _RDI = a2;
  sub_14088A600(v148);
  v4 = *(_QWORD *)v148;
  *(_OWORD *)v129 = *(_OWORD *)&v148[8];
  *(_OWORD *)&v129[16] = *(_OWORD *)&v148[24];
  *(_OWORD *)&v129[32] = *(_OWORD *)&v148[40];
  if ( *(_QWORD *)v148 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v148[88];
    v5 = *(_OWORD *)&v148[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v148[72];
    *(_OWORD *)(a1 + 56) = v5;
    si128 = _mm_load_si128((const __m128i *)v129);
    v7 = _mm_load_si128((const __m128i *)&v129[16]);
    *(__m128i *)(a1 + 40) = _mm_load_si128((const __m128i *)&v129[32]);
    *(__m128i *)(a1 + 24) = v7;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = v4;
    return a1;
  }
  v113 = _mm_load_si128((const __m128i *)v129);
  v114 = _mm_load_si128((const __m128i *)&v129[16]);
  v115 = _mm_load_si128((const __m128i *)&v129[32]);
  v165 = 1;
  sub_1407B9590(v125, _RDI);
  v8 = *(_QWORD *)v125;
  v143 = *(__m128i *)&v125[8];
  v144 = *(__m128i *)&v125[24];
  v145 = *(__m128i *)&v125[40];
  if ( *(_QWORD *)v125 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v125[88];
    v9 = *(_OWORD *)&v125[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v125[72];
    *(_OWORD *)(a1 + 56) = v9;
    v10 = _mm_load_si128(&v143);
    v11 = _mm_load_si128(&v144);
    *(__m128i *)(a1 + 40) = _mm_load_si128(&v145);
    *(__m128i *)(a1 + 24) = v11;
    *(__m128i *)(a1 + 8) = v10;
    *(_QWORD *)a1 = v8;
LABEL_5:
    sub_14018FA70(&v113);
    return a1;
  }
  v116 = _mm_load_si128(&v143);
  v117 = _mm_load_si128(&v144);
  v118 = _mm_load_si128(&v145);
  sub_1407BB100(v148, (const __m128i **)&v116, _RDI);
  v136 = *(__m128i *)&v148[8];
  v137 = *(__m128i *)&v148[24];
  v138 = *(__m128i *)&v148[40];
  v139 = *(_OWORD *)&v148[56];
  v140 = *(__m128i *)&v148[72];
  v141 = *(__m128i *)&v148[88];
  if ( !*(_QWORD *)v148 )
  {
    *(__m128i *)(a1 + 80) = v141;
    *(__m128i *)(a1 + 64) = v140;
    v30 = _mm_load_si128(&v136);
    v31 = _mm_load_si128(&v137);
    v32 = _mm_load_si128(&v138);
    *(_OWORD *)(a1 + 48) = v139;
    *(__m128i *)(a1 + 32) = v32;
    *(__m128i *)(a1 + 16) = v31;
    *(__m128i *)a1 = v30;
    v165 = 1;
    sub_14018F700(&v143);
    goto LABEL_5;
  }
  v160 = _RDI;
  v135 = v151;
  v134 = v150;
  v133 = v149;
  v13 = _mm_load_si128(&v137);
  v14 = _mm_load_si128(&v138);
  *(__m128i *)&v129[8] = v136;
  *(__m128i *)&v129[24] = v13;
  *(__m128i *)&v129[40] = v14;
  v130 = v139;
  v131 = v140;
  v132 = _mm_load_si128(&v141);
  v158 = *(_QWORD *)v148;
  *(_QWORD *)v129 = *(_QWORD *)v148;
  v164 = 1;
  v163 = 1;
  HIDWORD(_RAX) = (unsigned __int64)sub_14018F700(&v143) >> 32;
  v16 = v113.m128i_i64[0];
  v17 = (const __m128i *)(v113.m128i_i64[0] + 16);
  LODWORD(_RDI) = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v113.m128i_i64[0]));
  v159 = 0;
  v119 = v114.m128i_i64[1];
  v18 = v114.m128i_i64[1] - 1;
  if ( !v114.m128i_i64[1] )
  {
LABEL_13:
    v164 = 1;
    v163 = 0;
    sub_140A80310((__int64)v148, v160, (const __m128i **)&v113);
    v26 = *(_QWORD *)v148;
    *(_OWORD *)v125 = *(_OWORD *)&v148[8];
    *(_OWORD *)&v125[16] = *(_OWORD *)&v148[24];
    *(_OWORD *)&v125[32] = *(_OWORD *)&v148[40];
    if ( *(_QWORD *)v148 != -1 )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v148[88];
      v27 = *(_OWORD *)&v148[56];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v148[72];
      *(_OWORD *)(a1 + 56) = v27;
      v28 = _mm_load_si128((const __m128i *)v125);
      v29 = _mm_load_si128((const __m128i *)&v125[16]);
      *(__m128i *)(a1 + 40) = _mm_load_si128((const __m128i *)&v125[32]);
      *(__m128i *)(a1 + 24) = v29;
      *(__m128i *)(a1 + 8) = v28;
      *(_QWORD *)a1 = v26;
      LOBYTE(_RDI) = 1;
LABEL_15:
      LODWORD(v159) = _RDI;
      LODWORD(v160) = 0;
      goto LABEL_18;
    }
    v56 = _mm_load_si128((const __m128i *)&v125[16]);
    v57 = _mm_load_si128((const __m128i *)&v125[32]);
    v143 = _mm_load_si128((const __m128i *)v125);
    v144 = v56;
    v145 = v57;
    v162 = 1;
    sub_140A7E160((__m128i *)v148, (const __m128i **)&v143, (__int64)v129, (__int64)&v129[48]);
    v58 = *(__int64 **)&v148[8];
    v59 = *(_QWORD *)v148;
    v120 = *(_QWORD *)&v148[16];
    v60 = *(_QWORD *)&v148[8] + 24LL * *(_QWORD *)&v148[16];
    *(_QWORD *)v148 = *(_QWORD *)&v148[8];
    *(_QWORD *)&v148[16] = v59;
    *(_QWORD *)&v148[24] = v60;
    v61 = 0;
    v62 = v158;
    if ( *(_QWORD *)&v148[8] != v60 )
    {
      do
      {
        v63 = v58 + 3;
        *(_QWORD *)&v148[8] = v58 + 3;
        v64 = *v58;
        v136 = *(__m128i *)(v58 + 1);
        if ( v64 == -1 )
          break;
        v157 = v64;
        *(_QWORD *)v125 = v64;
        *(__m128i *)&v125[8] = v136;
        if ( !*(_QWORD *)&v129[24] )
LABEL_63:
          sub_14196B590(aNoEntryFoundFo_0, 22, &off_141A6BA98);
        v65 = sub_1406CECD0(&v129[32], v125);
        v67 = *(_QWORD *)&v129[8];
        v68 = _mm_cvtsi32_si128(v65 >> 57);
        v69 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v68, v68), 0), 68);
        v70 = *(_QWORD *)&v125[8];
        v71 = *(_QWORD *)&v125[16];
        for ( i = 0; ; i += 16 )
        {
          v73 = v67 & v65;
          v74 = _mm_loadu_si128((const __m128i *)(v62 + v73));
          _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v74, v69));
          if ( _R13D )
            break;
LABEL_50:
          _RDX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v74, (__m128i)-1LL));
          if ( (_DWORD)_RDX )
            goto LABEL_63;
          v65 = i + v73 + 16;
        }
        *((_QWORD *)&v155 + 1) = v73;
        v156 = v61;
        v146 = v67;
        *(_QWORD *)&v155 = v63;
        v147 = i;
        while ( 1 )
        {
          __asm { tzcnt   edx, r13d }
          _RDX = -(__int64)(v67 & (v73 + _RDX));
          if ( v71 == *(_QWORD *)(v62 + 80 * _RDX - 64) )
          {
            v76 = v62 + 80 * _RDX;
            v77 = v70;
            v78 = sub_141923B40(v70, *(_QWORD *)(v76 - 72), v71);
            v70 = v77;
            if ( !v78 )
              break;
          }
          v79 = _R13D - 1;
          LOWORD(v79) = _R13D & (_R13D - 1);
          v80 = (_WORD)v79 == 0;
          _R13D = v79;
          v73 = *((_QWORD *)&v155 + 1);
          v61 = v156;
          v67 = v146;
          v63 = (__int64 *)v155;
          i = v147;
          if ( v80 )
            goto LABEL_50;
        }
        if ( *(_BYTE *)(v76 - 56) )
        {
          v81 = *(_QWORD *)(v76 - 48);
          if ( v81 <= 0 )
            v81 = 0;
        }
        else
        {
          v81 = 0;
        }
        v82 = v156;
        v62 = v158;
        if ( v157 )
          sub_140001660(v70, v157, 1);
        v61 = v81 + v82;
        v58 = (__int64 *)v155;
      }
      while ( (_QWORD)v155 != v60 );
    }
    sub_1401A5C50(v148);
    v83 = *(_QWORD *)(v160 + 8);
    v84 = *(_QWORD *)(v160 + 16);
    v162 = 1;
    v85 = sub_140A790E0(v83, v84);
    _RDI = v86;
    v162 = 1;
    v87 = sub_140A7FBB0(v83, v84);
    v89 = v88;
    v162 = 1;
    sub_140A2A810(v148, v160);
    v93 = *(_QWORD *)&v148[8];
    v92 = *(_QWORD *)v148;
    v94 = *(_OWORD *)&v148[16];
    if ( *(_QWORD *)v148 != -1 )
    {
      v95 = *(_QWORD *)&v148[32];
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v148[88];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v148[72];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v148[56];
      *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)&v148[40]);
      *(_OWORD *)(a1 + 16) = v94;
      *(_QWORD *)(a1 + 32) = v95;
      *(_QWORD *)a1 = v92;
      *(_QWORD *)(a1 + 8) = v93;
      LOBYTE(_RDI) = 1;
LABEL_62:
      v164 = _RDI;
      v163 = 0;
      sub_14018FA70(&v143);
      goto LABEL_15;
    }
    v160 = _RDI;
    if ( *(_QWORD *)&v148[8] == -1 )
    {
      LOBYTE(v90) = 1;
      v98 = 0;
    }
    else
    {
      v158 = *(_QWORD *)&v148[8];
      v161 = 1;
      v157 = *(_QWORD *)&v148[16];
      LOBYTE(v91) = 1;
      sub_140876430(v148, *(_QWORD *)&v148[16], *(_QWORD *)&v148[24], v91);
      if ( (_BYTE)v149 == 0xFF )
      {
        v141 = _mm_loadu_si128((const __m128i *)&v148[80]);
        v99 = _mm_loadu_si128((const __m128i *)&v148[64]);
        v140 = v99;
        v100 = _mm_loadu_si128((const __m128i *)v148);
        v101 = *(_OWORD *)&v148[16];
        v102 = *(_OWORD *)&v148[32];
        v103 = *(_OWORD *)&v148[48];
        v139 = *(_OWORD *)&v148[48];
        v138 = *(__m128i *)&v148[32];
        v137 = *(__m128i *)&v148[16];
        v136 = v100;
        *(__m128i *)(a1 + 80) = v141;
        *(__m128i *)(a1 + 64) = v99;
        *(_OWORD *)(a1 + 48) = v103;
        *(_OWORD *)(a1 + 32) = v102;
        *(_OWORD *)(a1 + 16) = v101;
        *(__m128i *)a1 = v100;
        LOBYTE(_RDI) = 1;
        goto LABEL_76;
      }
      v142 = *(_QWORD *)&v148[96];
      v141 = *(__m128i *)&v148[80];
      v140 = *(__m128i *)&v148[64];
      v139 = *(_OWORD *)&v148[48];
      v138 = *(__m128i *)&v148[32];
      v137 = *(__m128i *)&v148[16];
      v136 = *(__m128i *)v148;
      *(_DWORD *)v128 = *(_DWORD *)((char *)&v149 + 1);
      *(_DWORD *)&v128[3] = DWORD1(v149);
      *(_OWORD *)v125 = *(_OWORD *)v148;
      *(_OWORD *)&v125[16] = *(_OWORD *)&v148[16];
      *(_OWORD *)&v125[32] = *(_OWORD *)&v148[32];
      *(_OWORD *)&v125[48] = *(_OWORD *)&v148[48];
      *(_OWORD *)&v125[64] = *(_OWORD *)&v148[64];
      *(_OWORD *)&v125[80] = *(_OWORD *)&v148[80];
      v126 = *(_QWORD *)&v148[96];
      v127 = v149;
      if ( (_QWORD)v133 )
      {
        v97 = (24 * v133 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v123 = v133 + v97 + 17;
        v96 = v132.m128i_i64[1] - v97;
        *((_QWORD *)&v155 + 1) = 16;
      }
      else
      {
        *((_QWORD *)&v155 + 1) = 0;
      }
      v156 = v61;
      v147 = v143.m128i_i64[0] + v143.m128i_i64[1] + 1;
      v104 = _mm_load_si128((const __m128i *)v143.m128i_i64[0]);
      v121 = v143.m128i_i64[0] + 16;
      v146 = v144.m128i_i64[1];
      v122 = v134;
      v105 = _mm_load_si128((const __m128i *)v132.m128i_i64[1]);
      *(_QWORD *)&v155 = v131.m128i_i64[0];
      v106 = _mm_load_si128(*(const __m128i **)&v129[48]);
      if ( (_QWORD)v130 )
      {
        v107 = (24 * v130 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v124 = v107 + v130 + 17;
        v61 = *(_QWORD *)&v129[48] - v107;
        v108 = 16;
      }
      else
      {
        v108 = 0;
      }
      *(_QWORD *)&v148[72] = v123;
      *(_QWORD *)&v148[80] = v96;
      *(_QWORD *)&v148[88] = v132.m128i_i64[1];
      *(_QWORD *)&v148[96] = v132.m128i_i64[1] + 16;
      *(_QWORD *)&v149 = v132.m128i_i64[1] + v133 + 1;
      WORD4(v149) = ~(unsigned __int16)_mm_movemask_epi8(v105);
      *(_QWORD *)&v150 = v122;
      *((_QWORD *)&v150 + 1) = v143.m128i_i64[0];
      v151 = v121;
      v152 = v147;
      v153 = ~(unsigned __int16)_mm_movemask_epi8(v104);
      v154 = v146;
      *(_QWORD *)v148 = v108;
      *(_QWORD *)&v148[8] = v124;
      *(_QWORD *)&v148[16] = v61;
      *(_QWORD *)&v148[24] = *(_QWORD *)&v129[48];
      *(_QWORD *)&v148[32] = *(_QWORD *)&v129[48] + 16LL;
      *(_QWORD *)&v148[40] = *(_QWORD *)&v129[48] + v130 + 1;
      *(_WORD *)&v148[48] = ~(unsigned __int16)_mm_movemask_epi8(v106);
      *(_OWORD *)&v148[56] = v155;
      sub_140A260E0(&v136, v148);
      v61 = v156;
      sub_140A794B0(v148, v125, &v136, v129);
      v109 = *(_QWORD *)v148;
      v116 = _mm_loadu_si128((const __m128i *)&v148[8]);
      v117.m128i_i64[0] = *(_QWORD *)&v148[24];
      if ( *(_QWORD *)v148 != -1 )
      {
        v110 = *(_OWORD *)&v148[32];
        v111 = _mm_loadu_si128((const __m128i *)&v148[48]);
        v112 = _mm_loadu_si128((const __m128i *)&v148[64]);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v148[80];
        *(__m128i *)(a1 + 64) = v112;
        *(__m128i *)(a1 + 48) = v111;
        *(_OWORD *)(a1 + 32) = v110;
        *(_QWORD *)(a1 + 24) = v117.m128i_i64[0];
        *(__m128i *)(a1 + 8) = _mm_load_si128(&v116);
        *(_QWORD *)a1 = v109;
        sub_140190060(&v136);
        v161 = 0;
        sub_140A18DE0(v125);
        LODWORD(_RDI) = 0;
LABEL_76:
        if ( v158 )
          sub_140001660(v157, v158, 1);
        goto LABEL_62;
      }
      v98 = v117.m128i_i64[0];
      sub_1400290B0(&v116);
      sub_140190060(&v136);
      v161 = 0;
      sub_140A18DE0(v125);
      v93 = v158;
      if ( v158 )
        sub_140001660(v157, v158, 1);
      v90 = 0;
    }
    *(_QWORD *)(a1 + 8) = v87;
    *(_QWORD *)(a1 + 16) = v89;
    *(_QWORD *)(a1 + 24) = v119;
    *(_QWORD *)(a1 + 32) = v120;
    *(_QWORD *)(a1 + 40) = v61;
    *(_QWORD *)(a1 + 48) = v159;
    *(_QWORD *)(a1 + 56) = v85;
    *(_QWORD *)(a1 + 64) = v160;
    *(_QWORD *)(a1 + 72) = v98;
    *(_BYTE *)(a1 + 80) = 1;
    *(_QWORD *)a1 = -1;
    LODWORD(v159) = v90;
    v164 = v90;
    v163 = 0;
    sub_14018FA70(&v143);
    sub_14018F950(v129);
    if ( v93 == -1 )
    {
      sub_140190060(&v129[48]);
      v165 = 0;
      sub_140190060(&v132.m128i_u64[1]);
    }
    return a1;
  }
  while ( 1 )
  {
    for ( ; !(_DWORD)_RDI; LODWORD(_RDI) = _mm_movemask_epi8(v19) ^ 0xFFFF )
    {
      v19 = _mm_load_si128(v17);
      v16 -= 6656;
      ++v17;
    }
    __asm { tzcnt   eax, edi }
    v20 = -416 * _RAX;
    v21 = *(_QWORD *)(v16 + v20 - 408);
    v22 = *(_QWORD *)(v16 + v20 - 400);
    v164 = 1;
    v163 = 1;
    sub_140880350((__int64)v148, v21, v22, (_QWORD *)(v16 + v20 - 392), (__int64 *)v129);
    v23 = *(_QWORD *)v148;
    v24 = v148[8];
    if ( *(_QWORD *)v148 != -1 )
      break;
    _RAX = v148[8] ^ 1LL;
    v159 += _RAX;
    LODWORD(_RDI) = _RDI & (_RDI - 1);
    if ( v18-- == 0 )
      goto LABEL_13;
  }
  *(_QWORD *)(a1 + 88) = *(_QWORD *)&v148[88];
  *(_OWORD *)(a1 + 73) = *(_OWORD *)&v148[73];
  v33 = *(_OWORD *)&v148[9];
  v34 = *(_OWORD *)&v148[25];
  v35 = *(_OWORD *)&v148[41];
  *(_OWORD *)(a1 + 57) = *(_OWORD *)&v148[57];
  *(_OWORD *)(a1 + 41) = v35;
  *(_OWORD *)(a1 + 25) = v34;
  *(_OWORD *)(a1 + 9) = v33;
  *(_QWORD *)a1 = v23;
  *(_BYTE *)(a1 + 8) = v24;
  LOBYTE(v24) = 1;
  LODWORD(v159) = v24;
  LOBYTE(v24) = 1;
  LODWORD(v160) = v24;
LABEL_18:
  HIDWORD(_RAX) = (unsigned __int64)sub_14018F950(v129) >> 32;
  if ( (_BYTE)v159 )
  {
    v37 = v130;
    if ( (_QWORD)v130 )
    {
      v38 = v131.m128i_i64[0];
      if ( v131.m128i_i64[0] )
      {
        v39 = *(_QWORD *)&v129[48];
        v40 = (const __m128i *)(*(_QWORD *)&v129[48] + 16LL);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&v129[48]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v42 = _mm_load_si128(v40);
              v39 -= 384;
              ++v40;
              _R12D = _mm_movemask_epi8(v42) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v43 = -3LL * _RAX;
          v44 = *(_QWORD *)(v39 + 8 * v43 - 24);
          if ( v44 )
            sub_140001660(*(_QWORD *)(v39 + 8 * v43 - 16), v44, 1);
          --v38;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v38 );
      }
      _RAX = (24 * v37 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v45 = _RAX + v37 + 17;
      if ( v45 )
        sub_140001660(*(_QWORD *)&v129[48] - _RAX, v45, 16);
    }
    v46 = v133;
    if ( (_QWORD)v133 )
    {
      v47 = v134;
      if ( (_QWORD)v134 )
      {
        v48 = v132.m128i_i64[1];
        v49 = (const __m128i *)(v132.m128i_i64[1] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v132.m128i_i64[1]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v51 = _mm_load_si128(v49);
              v48 -= 384;
              ++v49;
              _R12D = _mm_movemask_epi8(v51) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v52 = -3LL * _RAX;
          v53 = *(_QWORD *)(v48 + 8 * v52 - 24);
          if ( v53 )
            sub_140001660(*(_QWORD *)(v48 + 8 * v52 - 16), v53, 1);
          --v47;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v47 );
      }
      v54 = (24 * v46 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v55 = v54 + v46 + 17;
      if ( v55 )
        sub_140001660(v132.m128i_i64[1] - v54, v55, 16);
    }
  }
  if ( (_BYTE)v160 )
    goto LABEL_5;
  return a1;
}
