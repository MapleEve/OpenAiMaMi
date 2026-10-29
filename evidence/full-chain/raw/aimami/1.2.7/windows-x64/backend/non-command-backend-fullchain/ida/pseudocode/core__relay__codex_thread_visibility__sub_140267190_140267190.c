// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140267190 | name sub_140267190
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_140267190(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  _QWORD *v6; // r13
  __int64 *i; // rax
  __int64 *v8; // rdi
  __int64 v9; // r15
  __int128 v10; // rax
  __int64 *v11; // r12
  int v12; // esi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(unsigned __int64); // rax
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  unsigned __int64 v29; // r12
  _QWORD *v30; // rsi
  __m128i *v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // r8
  __m128i v34; // xmm0
  __int64 v35; // r14
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdi
  _BYTE *v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // r14
  __int64 v44; // r12
  __int32 v45; // eax
  __int64 v46; // r13
  __m128i *v47; // r12
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rdx
  unsigned __int64 v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // r15
  const __m128i *v62; // r12
  __m128i v64; // xmm0
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // r12
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // r14
  const __m128i *v73; // r15
  __m128i si128; // xmm0
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 *v83; // rcx
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  unsigned __int64 v89; // rsi
  unsigned __int64 v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // r14
  unsigned __int64 v93; // r15
  const __m128i *v94; // rbx
  __int64 v95; // r12
  __int64 v96; // rax
  __int64 v97; // r13
  __int64 v98; // rdx
  __int64 v99; // r12
  unsigned __int64 v100; // r12
  bool v101; // cf
  unsigned __int64 v102; // rdi
  unsigned __int64 v103; // rdi
  unsigned __int64 v104; // rbx
  __int64 v105; // rbx
  unsigned __int64 v106; // rcx
  __int64 *v107; // rcx
  unsigned __int64 *v108; // r9
  unsigned __int64 v109; // rax
  unsigned __int64 *v110; // rax
  unsigned __int64 *v111; // rcx
  unsigned __int64 *v112; // rdx
  unsigned __int64 *v113; // rdi
  unsigned __int64 *v114; // r10
  unsigned __int64 v115; // r9
  unsigned __int64 v116; // r8
  unsigned __int64 v117; // r9
  unsigned __int64 v118; // r8
  unsigned __int64 *v119; // r11
  unsigned __int64 *v120; // r10
  unsigned __int64 *v121; // r11
  _BYTE v122[24]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v123; // [rsp+48h] [rbp-38h] BYREF
  __int64 v124; // [rsp+58h] [rbp-28h]
  __m128i v125; // [rsp+60h] [rbp-20h]
  __int128 v126; // [rsp+70h] [rbp-10h]
  __int64 v127; // [rsp+80h] [rbp+0h]
  __int64 v128; // [rsp+88h] [rbp+8h]
  _QWORD *v129; // [rsp+90h] [rbp+10h]
  __int64 v130; // [rsp+98h] [rbp+18h]
  __int64 v131; // [rsp+A0h] [rbp+20h]
  _QWORD v132[2]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v133; // [rsp+B8h] [rbp+38h]
  _BYTE v134[48]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v135; // [rsp+F0h] [rbp+70h]
  __int128 v136; // [rsp+100h] [rbp+80h]
  __m128i v137; // [rsp+110h] [rbp+90h]
  __int128 v138; // [rsp+120h] [rbp+A0h]
  __m128i v139; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v140; // [rsp+140h] [rbp+C0h]
  _BYTE v141[48]; // [rsp+150h] [rbp+D0h]
  __int64 v142; // [rsp+188h] [rbp+108h]
  __m128i v143; // [rsp+190h] [rbp+110h]
  __m128i v144; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v145; // [rsp+1B0h] [rbp+130h]
  __int64 v146; // [rsp+1C0h] [rbp+140h]
  __int64 v147; // [rsp+1C8h] [rbp+148h]
  __int64 v148; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v149; // [rsp+1D8h] [rbp+158h]
  __int64 v150; // [rsp+1E0h] [rbp+160h]
  __int64 v151; // [rsp+1E8h] [rbp+168h]
  __int64 v152; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v153; // [rsp+1F8h] [rbp+178h]
  __m128i v154; // [rsp+200h] [rbp+180h] BYREF
  __m128i v155; // [rsp+210h] [rbp+190h]
  __int128 v156; // [rsp+220h] [rbp+1A0h]
  __int128 v157; // [rsp+230h] [rbp+1B0h]
  __int128 v158; // [rsp+240h] [rbp+1C0h]
  __m128i v159; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v160; // [rsp+260h] [rbp+1E0h] BYREF
  _QWORD v161[5]; // [rsp+268h] [rbp+1E8h] BYREF
  _BYTE v162[104]; // [rsp+290h] [rbp+210h] BYREF
  __int64 *v163; // [rsp+2F8h] [rbp+278h] BYREF
  __int64 (__fastcall *v164)(_QWORD, _QWORD, _QWORD); // [rsp+300h] [rbp+280h]
  __m128i *v165; // [rsp+308h] [rbp+288h]
  __int64 (__fastcall *v166)(_QWORD, _QWORD); // [rsp+310h] [rbp+290h]
  __int64 v167; // [rsp+318h] [rbp+298h]
  __int64 v168; // [rsp+320h] [rbp+2A0h]
  __int64 *v169; // [rsp+328h] [rbp+2A8h]
  __int32 v170; // [rsp+334h] [rbp+2B4h]
  __int64 v171; // [rsp+338h] [rbp+2B8h]
  __int64 v172; // [rsp+340h] [rbp+2C0h]
  unsigned __int64 v173; // [rsp+348h] [rbp+2C8h]
  __m128i v174; // [rsp+350h] [rbp+2D0h] BYREF
  __m128i v175; // [rsp+360h] [rbp+2E0h]
  __int128 v176; // [rsp+370h] [rbp+2F0h]
  __int128 v177; // [rsp+380h] [rbp+300h]
  __int128 v178; // [rsp+390h] [rbp+310h]
  __m128i v179; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v180; // [rsp+3B0h] [rbp+330h]
  unsigned __int64 *v181; // [rsp+3C8h] [rbp+348h]
  __int64 v182; // [rsp+3D0h] [rbp+350h]
  char v183; // [rsp+3DDh] [rbp+35Dh]
  char v184; // [rsp+3DEh] [rbp+35Eh]
  char v185; // [rsp+3DFh] [rbp+35Fh] BYREF
  __int64 v186; // [rsp+3E0h] [rbp+360h]

  v186 = -2;
  v183 = a3;
  v169 = a1;
  v160 = 0;
  v161[0] = 8;
  memset(&v161[1], 0, 32);
  v153 = a2;
  sub_140236130(&v174, a2);
  v3 = v174.m128i_i64[1];
  v4 = v174.m128i_i64[1] + 32 * v175.m128i_i64[0];
  *(_QWORD *)v162 = v174.m128i_i64[1];
  v167 = v174.m128i_i64[0];
  *(_QWORD *)&v162[16] = v174.m128i_i64[0];
  *(_QWORD *)&v162[24] = v4;
  v5 = 32 * v175.m128i_i64[0] - 32;
  v6 = (_QWORD *)(v174.m128i_i64[1] + 40);
  v171 = v174.m128i_i64[1];
  for ( i = (__int64 *)v174.m128i_i64[1]; i != (__int64 *)v4; i = v8 )
  {
    v8 = i + 4;
    *(_QWORD *)&v162[8] = i + 4;
    v3 = *i;
    if ( *i == -1 )
    {
      if ( (__int64 *)v4 != v8 )
      {
        v18 = v5 >> 5;
        do
        {
          v19 = *(v6 - 1);
          if ( v19 )
            sub_140001660(*v6, v19, 1);
          v6 += 4;
          --v18;
        }
        while ( v18 );
      }
      break;
    }
    v181 = (unsigned __int64 *)*i;
    v9 = i[2];
    v182 = i[1];
    *(_QWORD *)&v10 = sub_140281A70(v182, v9);
    v11 = *((__int64 **)&v10 + 1);
    v144 = (__m128i)v10;
    v172 = v10;
    if ( (_QWORD)v10 == 1 )
    {
      v12 = BYTE8(v10) & 3;
      switch ( BYTE8(v10) & 3 )
      {
        case 0:
          if ( *(_BYTE *)(*((_QWORD *)&v10 + 1) + 16LL) )
            goto LABEL_15;
          goto LABEL_21;
        case 1:
          if ( !*(_BYTE *)(*((_QWORD *)&v10 + 1) + 31LL) )
            goto LABEL_21;
          goto LABEL_15;
        case 2:
          v184 = 1;
          v14 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v3, *((_QWORD *)&v10 + 1)) + 8);
          v184 = 1;
          LOBYTE(v15) = v14((unsigned __int64)v11 >> 32);
          goto LABEL_14;
        case 3:
          v15 = HIDWORD(*((_QWORD *)&v10 + 1));
LABEL_14:
          if ( (_BYTE)v15 )
          {
LABEL_15:
            v163 = v11;
            v16 = (char)v11;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v154.m128i_i64[0] = v182;
              v154.m128i_i64[1] = v9;
              *(_QWORD *)v134 = &v154;
              *(_QWORD *)&v134[8] = sub_14169F630;
              *(_QWORD *)&v134[16] = &v163;
              *(_QWORD *)&v134[24] = sub_1416BB0B0;
              *(_QWORD *)&v177 = 2;
              *((_QWORD *)&v177 + 1) = aCodexmateLibCo_0;
              *(_QWORD *)&v178 = 51;
              v179.m128i_i64[0] = (__int64)&unk_1419E008F;
              v179.m128i_i64[1] = (__int64)v134;
              v174.m128i_i64[0] = 0;
              v174.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
              v175 = (__m128i)0x33uLL;
              *(_QWORD *)&v176 = aSrcCoreRelayCo_0;
              *((_QWORD *)&v176 + 1) = 41;
              *((_QWORD *)&v178 + 1) = 0x2EE00000001LL;
              sub_1414D53A0(&v185, &v174);
              v16 = (char)v163;
              v11 = v163;
            }
            v17 = v16 & 3;
            v3 = (unsigned int)(v17 - 2);
            if ( (unsigned int)v3 >= 2 && v17 )
            {
LABEL_23:
              v174.m128i_i64[1] = (__int64)v11 - 1;
              v174.m128i_i8[0] = 3;
              v184 = 0;
              sub_1416BCB00(&v174.m128i_u64[1]);
              break;
            }
          }
          else
          {
LABEL_21:
            if ( (unsigned int)(v12 - 2) >= 2 && ((unsigned __int8)v11 & 3) != 0 )
              goto LABEL_23;
          }
          break;
      }
    }
    else
    {
      v13 = v161[1];
      if ( v161[1] == v160 )
      {
        v184 = 1;
        sub_14190F3B0(&v160);
      }
      *(_QWORD *)(v161[0] + 8 * v13) = v11;
      v161[1] = v13 + 1;
    }
    if ( v181 )
      sub_140001660(v182, v181, 1);
    v5 -= 32LL;
    v6 += 4;
  }
  if ( v167 )
    sub_140001660(v171, 32 * v167, 8);
  v20 = sub_14167F170(v3);
  v25 = v20;
  if ( *(_BYTE *)(v20 + 16) == 1 )
  {
    v26 = *(_QWORD *)v20;
    v27 = *(_QWORD *)(v25 + 8);
  }
  else
  {
    v26 = sub_141696260(v22, v21, v23, v24);
    *(_QWORD *)v25 = v26;
    *(_QWORD *)(v25 + 8) = v27;
    *(_BYTE *)(v25 + 16) = 1;
  }
  *(_QWORD *)v25 = v26 + 1;
  v145 = xmmword_1419D6520;
  v144 = _mm_loadu_si128((const __m128i *)&off_1419D6510);
  v146 = v26;
  v147 = v27;
  sub_1401B7010(&v174, v153);
  v28 = v174.m128i_i64[1] + 32 * v175.m128i_i64[0];
  v128 = v174.m128i_i64[1];
  v143 = v174;
  v130 = v174.m128i_i64[0];
  v131 = v28;
  v29 = 32 * v175.m128i_i64[0] - 32;
  v30 = (_QWORD *)(v174.m128i_i64[1] + 40);
  v31 = &v174;
  v32 = (__int64 *)v174.m128i_i64[1];
  v142 = v28;
  while ( 1 )
  {
    if ( v32 == (__int64 *)v28 )
      goto LABEL_152;
    v167 = (__int64)(v32 + 4);
    v129 = v32 + 4;
    if ( *v32 == -1 )
    {
      if ( v28 != v167 )
      {
        v68 = v29 >> 5;
        do
        {
          v69 = *(v30 - 1);
          if ( v69 )
            sub_140001660(*v30, v69, 1);
          v30 += 4;
          --v68;
        }
        while ( v68 );
      }
LABEL_152:
      if ( v143.m128i_i64[0] )
        sub_140001660(v143.m128i_i64[1], 32 * v143.m128i_i64[0], 8);
      v55 = v160;
      v139 = _mm_loadu_si128((const __m128i *)v161);
      v140 = *(_OWORD *)&v161[2];
      *(_QWORD *)v141 = v161[4];
      v70 = v144.m128i_i64[1];
      if ( v144.m128i_i64[1] )
      {
        v71 = *((_QWORD *)&v145 + 1);
        if ( *((_QWORD *)&v145 + 1) )
        {
          v72 = v144.m128i_i64[0];
          v73 = (const __m128i *)(v144.m128i_i64[0] + 16);
          _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v144.m128i_i64[0]));
          do
          {
            if ( !(_WORD)_R12D )
            {
              do
              {
                si128 = _mm_load_si128(v73);
                v72 -= 512;
                ++v73;
                _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
              }
              while ( !_R12D );
            }
            __asm { tzcnt   ecx, r12d }
            v77 = v72 - (unsigned int)(32 * _ECX);
            v78 = *(_QWORD *)(v77 - 32);
            if ( v78 )
              sub_140001660(*(_QWORD *)(v77 - 24), v78, 1);
            --v71;
            _R12D &= _R12D - 1;
          }
          while ( v71 );
        }
        v79 = 32 * v70;
        v80 = 33 * v70 + 49;
        if ( v80 )
          sub_140001660(v144.m128i_i64[0] - v79 - 32, v80, 16);
      }
      goto LABEL_170;
    }
    v171 = *v32;
    v33 = v32[2];
    v182 = v32[1];
    v168 = v33;
    sub_141695A00(v31, v182, v33);
    if ( v174.m128i_i32[0] == 2 )
    {
      if ( (v174.m128i_i8[8] & 3u) - 2 >= 2 && (v174.m128i_i8[8] & 3) != 0 )
      {
        --v174.m128i_i64[1];
        v174.m128i_i8[0] = 3;
        sub_1416BCB00(&v174.m128i_u64[1]);
      }
      goto LABEL_117;
    }
    sub_140231840((__int64)v31, v182, v168);
    if ( BYTE8(v180) != 0xFF )
      break;
    if ( !v183 )
    {
      v55 = v174.m128i_i64[1];
      v35 = v174.m128i_i64[0];
      v139 = v175;
      v140 = v176;
      *(_OWORD *)v141 = v177;
      *(_OWORD *)&v141[16] = v178;
      *(__m128i *)&v141[32] = _mm_loadu_si128(&v179);
      v56 = v171;
      if ( v171 )
        goto LABEL_131;
      goto LABEL_132;
    }
    v159 = v179;
    v158 = v178;
    v37 = _mm_loadu_si128(&v174);
    v157 = v177;
    v156 = v176;
    v155 = v175;
    v154 = v37;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v148 = v182;
      v149 = v168;
      v163 = &v148;
      v164 = sub_14169F630;
      v165 = &v154;
      v166 = sub_14104A7D0;
      *(_QWORD *)&v162[48] = 2;
      *(_QWORD *)&v162[56] = aCodexmateLibCo_0;
      *(_QWORD *)&v162[64] = 51;
      *(_QWORD *)&v162[80] = &unk_1419E004A;
      *(_QWORD *)&v162[88] = &v163;
      *(_QWORD *)v162 = 0;
      *(_QWORD *)&v162[8] = aCodexmateLibCo_0;
      *(_OWORD *)&v162[16] = 0x33u;
      *(_QWORD *)&v162[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v162[40] = 41;
      *(_QWORD *)&v162[72] = 0x2FF00000001LL;
      sub_1414D53A0(&v185, v162);
    }
    sub_1401954F0(&v154);
LABEL_117:
    if ( v171 )
      sub_140001660(v182, v171, 1);
    v29 -= 32LL;
    v30 += 4;
    v32 = (__int64 *)v167;
  }
  v138 = v180;
  v137 = v179;
  v136 = v178;
  v34 = _mm_loadu_si128(&v174);
  v135 = v177;
  *(_OWORD *)&v134[32] = v176;
  *(__m128i *)&v134[16] = v175;
  *(__m128i *)v134 = v34;
  sub_140251C90((__int64)&v154, (__int64)v134);
  v35 = v154.m128i_i64[0];
  if ( v154.m128i_i64[0] != -1 )
  {
    if ( !v183 )
    {
      v55 = v154.m128i_i64[1];
      v139 = v155;
      v140 = v156;
      *(_OWORD *)v141 = v157;
      *(_OWORD *)&v141[16] = v158;
      *(__m128i *)&v141[32] = _mm_loadu_si128(&v159);
      goto LABEL_130;
    }
    *(__m128i *)&v162[80] = v159;
    *(_OWORD *)&v162[64] = v158;
    v36 = _mm_loadu_si128(&v154);
    *(_OWORD *)&v162[48] = v157;
    *(_OWORD *)&v162[32] = v156;
    *(__m128i *)&v162[16] = v155;
    *(__m128i *)v162 = v36;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v148 = v182;
      v149 = v168;
      v163 = &v148;
      v164 = sub_14169F630;
      v165 = (__m128i *)v162;
      v166 = sub_14104A7D0;
      *(_QWORD *)&v177 = 2;
      *((_QWORD *)&v177 + 1) = aCodexmateLibCo_0;
      *(_QWORD *)&v178 = 51;
      v179.m128i_i64[0] = (__int64)&unk_1419E0008;
      v179.m128i_i64[1] = (__int64)&v163;
      v174.m128i_i64[0] = 0;
      v174.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
      v175 = (__m128i)0x33uLL;
      *(_QWORD *)&v176 = aSrcCoreRelayCo_0;
      *((_QWORD *)&v176 + 1) = 41;
      *((_QWORD *)&v178 + 1) = 0x30A00000001LL;
      sub_1414D53A0(&v185, v31);
    }
    sub_1401954F0(v162);
    sub_1401923E0(v134);
    goto LABEL_117;
  }
  v38 = v155.m128i_i64[0];
  v148 = v155.m128i_i64[0];
  v149 = v155.m128i_i64[0];
  v150 = v154.m128i_i64[1];
  v133 = v155.m128i_i64[0] + 104 * v155.m128i_i64[1];
  v151 = v133;
  v170 = 0;
  v173 = v29;
  while ( 1 )
  {
    v39 = v38;
    if ( v38 == v133 )
      goto LABEL_104;
    v38 += 104;
    v149 = v39 + 104;
    v40 = *(_QWORD *)v39;
    v159 = *(__m128i *)(v39 + 88);
    v158 = *(_OWORD *)(v39 + 72);
    v157 = *(_OWORD *)(v39 + 56);
    v156 = *(_OWORD *)(v39 + 40);
    v155 = *(__m128i *)(v39 + 24);
    v154 = _mm_loadu_si128((const __m128i *)(v39 + 8));
    if ( v40 == -1 )
    {
LABEL_104:
      sub_1403F9C40(&v148);
      v28 = v142;
      if ( (v170 & 1) != 0 )
      {
        sub_141695A00(v31, v182, v168);
        if ( v174.m128i_i32[0] == 2 )
        {
          v53 = v174.m128i_i64[1];
          v163 = (__int64 *)v174.m128i_i64[1];
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v154.m128i_i64[0] = v182;
            v154.m128i_i64[1] = v168;
            *(_QWORD *)v162 = &v154;
            *(_QWORD *)&v162[8] = sub_14169F630;
            *(_QWORD *)&v162[16] = &v163;
            *(_QWORD *)&v162[24] = sub_1416BB0B0;
            *(_QWORD *)&v177 = 2;
            *((_QWORD *)&v177 + 1) = aCodexmateLibCo_0;
            *(_QWORD *)&v178 = 51;
            v179.m128i_i64[0] = (__int64)&unk_1419DFF80;
            v179.m128i_i64[1] = (__int64)v162;
            v174.m128i_i64[0] = 0;
            v174.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
            v175 = (__m128i)0x33uLL;
            *(_QWORD *)&v176 = aSrcCoreRelayCo_0;
            *((_QWORD *)&v176 + 1) = 41;
            *((_QWORD *)&v178 + 1) = 0x33F00000001LL;
            sub_1414D53A0(&v185, v31);
            v53 = (__int64)v163;
          }
          if ( (unsigned int)(v53 & 3) - 2 >= 2 && (v53 & 3) != 0 )
          {
            v174.m128i_i64[1] = v53 - 1;
            v174.m128i_i8[0] = 3;
            sub_1416BCB00(&v174.m128i_u64[1]);
          }
        }
        else if ( (BYTE12(v178) & 0x10) == 0 && ((v179.m128i_i32[0] & 0x20000000) == 0 || (WORD6(v178) & 0x400) == 0) )
        {
          v54 = v161[2] + *((_QWORD *)&v177 + 1);
          if ( __CFADD__(v161[2], *((_QWORD *)&v177 + 1)) )
            v54 = -1;
          v161[2] = v54;
          ++v161[4];
        }
      }
      sub_1401923E0(v134);
      goto LABEL_117;
    }
    *(_QWORD *)v162 = v40;
    v41 = &v162[8];
    *(__m128i *)&v162[88] = v159;
    *(_OWORD *)&v162[72] = v158;
    v42 = _mm_load_si128(&v154);
    *(_OWORD *)&v162[56] = v157;
    *(_OWORD *)&v162[40] = v156;
    *(__m128i *)&v162[24] = v155;
    *(__m128i *)&v162[8] = v42;
    if ( !v183 )
      break;
    if ( *(_QWORD *)&v162[48] == -1 )
    {
      LOBYTE(v41) = 1;
      v170 = (int)v41;
      if ( !v40 )
        goto LABEL_100;
      goto LABEL_99;
    }
    v43 = *(_QWORD *)&v162[56];
    v44 = *(_QWORD *)&v162[64];
    sub_140282430(v31);
    if ( (_QWORD)v176 == -1 )
    {
      v55 = v174.m128i_i64[0];
      v35 = 2;
      v29 = v173;
      v28 = v142;
      if ( v40 )
        goto LABEL_120;
      goto LABEL_121;
    }
    if ( (_DWORD)v176 != 2 )
    {
      if ( v174.m128i_i64[0] )
      {
        sub_140001660(v174.m128i_i64[1], v174.m128i_i64[0], 1);
        v29 = v173;
        if ( !v40 )
          goto LABEL_100;
LABEL_99:
        sub_140001660(*(_QWORD *)&v162[8], v40, 1);
        goto LABEL_100;
      }
LABEL_98:
      v29 = v173;
      if ( !v40 )
        goto LABEL_100;
      goto LABEL_99;
    }
    sub_1402357E0(v31, v153, *(__int64 *)&v162[8], *(__int64 *)&v162[16], v43, v44);
    v45 = v174.m128i_i32[0];
    v172 = v174.m128i_i64[0];
    if ( v174.m128i_i64[0] == -1 )
    {
      LOBYTE(v45) = 1;
      v170 = v45;
      v29 = v173;
      if ( v40 )
        goto LABEL_99;
      goto LABEL_100;
    }
    v181 = (unsigned __int64 *)v174.m128i_i64[1];
    v46 = v175.m128i_i64[0];
    sub_140230FD0(v31, v43, v44);
    v47 = v31;
    if ( (unsigned __int8)sub_1403A6F90(&v144, v31) )
    {
      if ( v172 )
      {
        sub_140001660(v181, v172, 1);
        goto LABEL_98;
      }
      v29 = v173;
      if ( v40 )
        goto LABEL_99;
LABEL_100:
      v52 = *(_QWORD *)&v162[48];
      if ( *(_QWORD *)&v162[48] == -1 )
        goto LABEL_82;
LABEL_80:
      if ( v52 )
        sub_140001660(*(_QWORD *)&v162[56], v52, 1);
      goto LABEL_82;
    }
    sub_141695A00(v31, v181, v46);
    if ( v174.m128i_i32[0] == 2 )
    {
      v48 = v174.m128i_i64[1];
      v152 = v174.m128i_i64[1];
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v132[0] = v181;
        v132[1] = v46;
        v163 = v132;
        v164 = sub_14169F630;
        v165 = (__m128i *)&v152;
        v166 = sub_1416BB0B0;
        *(_QWORD *)&v177 = 2;
        *((_QWORD *)&v177 + 1) = aCodexmateLibCo_0;
        *(_QWORD *)&v178 = 51;
        v179.m128i_i64[0] = (__int64)&unk_1419DFFC0;
        v179.m128i_i64[1] = (__int64)&v163;
        v174.m128i_i64[0] = 0;
        v174.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
        v175 = (__m128i)0x33uLL;
        *(_QWORD *)&v176 = aSrcCoreRelayCo_0;
        *((_QWORD *)&v176 + 1) = 41;
        *((_QWORD *)&v178 + 1) = 0x32F00000001LL;
        sub_1414D53A0(&v185, v31);
        v48 = v152;
      }
      if ( (unsigned int)(v48 & 3) - 2 >= 2 && (v48 & 3) != 0 )
      {
        v174.m128i_i64[1] = v48 - 1;
        v174.m128i_i8[0] = 3;
        sub_1416BCB00(&v174.m128i_u64[1]);
      }
    }
    else if ( (BYTE12(v178) & 0x10) == 0 && ((v179.m128i_i32[0] & 0x20000000) == 0 || (WORD6(v178) & 0x400) == 0) )
    {
      v49 = *((_QWORD *)&v177 + 1);
      v50 = *((_QWORD *)&v177 + 1) + v161[2];
      if ( __CFADD__(*((_QWORD *)&v177 + 1), v161[2]) )
        v50 = -1;
      v161[2] = v50;
      v51 = v161[1];
      if ( v161[1] == v160 )
        sub_14190F3B0(&v160);
      *(_QWORD *)(v161[0] + 8 * v51) = v49;
      v161[1] = v51 + 1;
      ++v161[3];
    }
    if ( v172 )
      sub_140001660(v181, v172, 1);
    v31 = v47;
    if ( v40 )
      sub_140001660(*(_QWORD *)&v162[8], v40, 1);
    v52 = *(_QWORD *)&v162[48];
    v29 = v173;
    if ( *(_QWORD *)&v162[48] != -1 )
      goto LABEL_80;
LABEL_82:
    if ( *(_QWORD *)&v162[24] )
      sub_140001660(*(_QWORD *)&v162[32], *(_QWORD *)&v162[24], 1);
    if ( *(_QWORD *)&v162[80] != -1 && *(_QWORD *)&v162[80] )
      sub_140001660(*(_QWORD *)&v162[88], *(_QWORD *)&v162[80], 1);
  }
  sub_140232AD0((__int64)v31, (__int64)v162);
  v35 = v174.m128i_i64[0];
  if ( v174.m128i_i64[0] == -1 )
    goto LABEL_98;
  v55 = v174.m128i_i64[1];
  v139 = v175;
  v140 = v176;
  *(_OWORD *)v141 = v177;
  *(_OWORD *)&v141[16] = v178;
  *(__m128i *)&v141[32] = _mm_loadu_si128(&v179);
  v29 = v173;
  v28 = v142;
  if ( !v40 )
    goto LABEL_121;
LABEL_120:
  sub_140001660(*(_QWORD *)&v162[8], v40, 1);
LABEL_121:
  if ( *(_QWORD *)&v162[48] != -1 && *(_QWORD *)&v162[48] )
    sub_140001660(*(_QWORD *)&v162[56], *(_QWORD *)&v162[48], 1);
  if ( *(_QWORD *)&v162[24] )
    sub_140001660(*(_QWORD *)&v162[32], *(_QWORD *)&v162[24], 1);
  if ( *(_QWORD *)&v162[80] != -1 && *(_QWORD *)&v162[80] )
    sub_140001660(*(_QWORD *)&v162[88], *(_QWORD *)&v162[80], 1);
  sub_1403F9C40(&v148);
LABEL_130:
  sub_1401923E0(v134);
  v56 = v171;
  if ( v171 )
LABEL_131:
    sub_140001660(v182, v56, 1);
LABEL_132:
  if ( v28 != v167 )
  {
    v57 = v29 >> 5;
    do
    {
      v58 = *(v30 - 1);
      if ( v58 )
        sub_140001660(*v30, v58, 1);
      v30 += 4;
      --v57;
    }
    while ( v57 );
  }
  if ( v143.m128i_i64[0] )
    sub_140001660(v143.m128i_i64[1], 32 * v143.m128i_i64[0], 8);
  v59 = v144.m128i_i64[1];
  if ( v144.m128i_i64[1] )
  {
    v60 = *((_QWORD *)&v145 + 1);
    if ( *((_QWORD *)&v145 + 1) )
    {
      v61 = v144.m128i_i64[0];
      v62 = (const __m128i *)(v144.m128i_i64[0] + 16);
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v144.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v64 = _mm_load_si128(v62);
            v61 -= 512;
            ++v62;
            _R13D = _mm_movemask_epi8(v64) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   ecx, r13d }
        v66 = v61 - (unsigned int)(32 * _ECX);
        v67 = *(_QWORD *)(v66 - 32);
        if ( v67 )
          sub_140001660(*(_QWORD *)(v66 - 24), v67, 1);
        --v60;
        _R13D &= _R13D - 1;
      }
      while ( v60 );
    }
    v81 = 32 * v59;
    v82 = 33 * v59 + 49;
    if ( v82 )
      sub_140001660(v144.m128i_i64[0] - v81 - 32, v82, 16);
  }
  if ( v160 )
    sub_140001660(v161[0], 8 * v160, 8);
  if ( v35 != -1 )
  {
    v127 = *(_QWORD *)v141;
    v126 = v140;
    v125 = v139;
    v83 = v169;
    v169[11] = *(_QWORD *)&v141[40];
    *(_OWORD *)(v83 + 9) = *(_OWORD *)&v141[24];
    *(_OWORD *)(v83 + 7) = *(_OWORD *)&v141[8];
    v83[6] = v127;
    v84 = v125;
    *((_OWORD *)v83 + 2) = v126;
    *((__m128i *)v83 + 1) = v84;
    *v83 = v35;
    v83[1] = v55;
    return v169;
  }
LABEL_170:
  *(__m128i *)&v134[8] = _mm_load_si128(&v139);
  *(_OWORD *)&v134[24] = v140;
  *(_QWORD *)&v134[40] = *(_QWORD *)v141;
  *(_QWORD *)v134 = v55;
  sub_141412660(&v174, *(_QWORD *)(v153 + 8), *(_QWORD *)(v153 + 16));
  if ( !v174.m128i_i8[0] )
  {
    v89 = *(_QWORD *)&v134[16];
    v90 = 8LL * *(_QWORD *)&v134[16];
    v91 = 0x7FFFFFFFFFFFFFF8LL;
    LOBYTE(v91) = *(_QWORD *)&v134[16] >> 61 != 0
               || (unsigned __int64)(8LL * *(_QWORD *)&v134[16]) > 0x7FFFFFFFFFFFFFF8LL;
    if ( (_BYTE)v91 )
    {
      v92 = 0;
      goto LABEL_182;
    }
    v93 = v175.m128i_i64[0];
    v94 = *(const __m128i **)&v134[8];
    v95 = *(_QWORD *)&v134[24];
    if ( v90 )
    {
      nullsub_1(v91);
      v92 = 8;
      v96 = sub_140001650(v90, 8);
      if ( !v96 )
LABEL_182:
        sub_141938D2B(v92, v90);
      v97 = v96;
      v98 = v89;
      if ( v89 )
        goto LABEL_186;
    }
    else
    {
      v97 = 8;
      v98 = 0;
      if ( *(_QWORD *)&v134[16] )
      {
LABEL_186:
        v182 = v98;
        sub_1418F44E0((__m128i *)v97, v94, v90);
        v174.m128i_i64[0] = (__int64)&v185;
        v181 = (unsigned __int64 *)v97;
        if ( v89 == 1 )
        {
LABEL_187:
          v101 = __CFADD__(v95, 0x10000000);
          v99 = v95 + 0x10000000;
          if ( v101 )
            v99 = -1;
          v97 = (__int64)v181;
          v101 = __CFADD__(*v181, v99);
          v100 = *v181 + v99;
          if ( v101 )
            v100 = -1;
          if ( v89 == 1 )
          {
            v98 = v182;
            goto LABEL_204;
          }
          v101 = __CFADD__(v181[1], v100);
          v100 += v181[1];
          if ( v101 )
            v100 = -1;
          v98 = v182;
          if ( v89 == 2 )
            goto LABEL_204;
          v101 = __CFADD__(v181[2], v100);
          v100 += v181[2];
          if ( v101 )
            v100 = -1;
          if ( v89 == 3 )
          {
LABEL_204:
            if ( v98 )
              sub_140001660(v97, 8 * v98, 8);
            v102 = v93 + 0xFFFFF;
            if ( v93 >= 0xFFFFFFFFFFF00001uLL )
              v102 = -1;
            v103 = v102 >> 20;
            v104 = v100 + 0xFFFFF;
            if ( v100 >= 0xFFFFFFFFFFF00001uLL )
              v104 = -1;
            v144.m128i_i64[0] = v103;
            v105 = v104 >> 20;
            v139.m128i_i64[0] = v105;
            v154.m128i_i64[0] = *(_QWORD *)&v134[16];
            v106 = *(_QWORD *)&v134[24] + 0xFFFFFLL;
            if ( *(_QWORD *)&v134[24] >= 0xFFFFFFFFFFF00001uLL )
              v106 = -1;
            *(_QWORD *)v162 = v106 >> 20;
            v174.m128i_i64[0] = (__int64)&v144;
            v174.m128i_i64[1] = (__int64)sub_1416BCB10;
            v175.m128i_i64[0] = (__int64)&v139;
            v175.m128i_i64[1] = (__int64)sub_1416BCB10;
            *(_QWORD *)&v176 = &v154;
            *((_QWORD *)&v176 + 1) = sub_1416BCB10;
            *(_QWORD *)&v177 = v162;
            *((_QWORD *)&v177 + 1) = sub_1416BCB10;
            *(_QWORD *)&v178 = &v134[32];
            *((_QWORD *)&v178 + 1) = sub_1416BCB10;
            v179.m128i_i64[0] = (__int64)&v134[40];
            v179.m128i_i64[1] = (__int64)sub_1416BCB10;
            *(_QWORD *)&v180 = &unk_1419E0428;
            *((_QWORD *)&v180 + 1) = sub_1416BCB10;
            sub_1416ABFD0(v122, &unk_1419E0430, &v174);
            sub_14019B500((unsigned int)aRouterTransiti_0, 17, (unsigned int)aCapacityPrefli, 18, (__int64)v122);
            if ( v93 >= v100 )
            {
              *v169 = -1;
              v55 = *(_QWORD *)v134;
              if ( !*(_QWORD *)v134 )
                return v169;
LABEL_177:
              v86 = *(_QWORD *)&v134[8];
              v87 = 8 * v55;
            }
            else
            {
              v154.m128i_i64[0] = v105;
              *(_QWORD *)v162 = v103;
              v174.m128i_i64[0] = (__int64)&v154;
              v174.m128i_i64[1] = (__int64)sub_1416BCB10;
              v175.m128i_i64[0] = (__int64)v162;
              v175.m128i_i64[1] = (__int64)sub_1416BCB10;
              sub_1416ABFD0(&v123, &unk_1419E04CC, &v174);
              v107 = v169;
              v169[3] = v124;
              *(__m128i *)(v107 + 1) = _mm_loadu_si128(&v123);
              *v107 = 10;
              if ( !*(_QWORD *)v134 )
                return v169;
              v86 = *(_QWORD *)&v134[8];
              v87 = 8LL * *(_QWORD *)v134;
            }
            sub_140001660(v86, v87, 8);
            return v169;
          }
          v101 = __CFADD__(v181[3], v100);
          v100 += v181[3];
LABEL_195:
          if ( v101 )
            v100 = -1;
          goto LABEL_204;
        }
        v108 = v181;
        if ( v89 >= 0x15 )
        {
          sub_140EA2770(v181, v89, &v174);
          goto LABEL_187;
        }
        if ( (v89 & 1) != 0 )
        {
          v110 = v181 + 1;
        }
        else
        {
          v109 = v181[1];
          if ( *v181 < v109 )
          {
            v181[1] = *v181;
            *v108 = v109;
          }
          v110 = v108 + 2;
        }
        if ( v90 == 16 )
          goto LABEL_187;
        v111 = &v181[v89];
        v112 = v110 + 1;
        v113 = v181;
        while ( 1 )
        {
          v115 = *(v110 - 1);
          v116 = *v110;
          if ( v115 < *v110 )
            break;
          v117 = *v110;
          v118 = v110[1];
          if ( *v110 < v118 )
            goto LABEL_244;
LABEL_234:
          v110 += 2;
          v112 += 2;
          if ( v110 == v111 )
            goto LABEL_187;
        }
        v119 = v110;
        while ( 1 )
        {
          v120 = v119 - 1;
          *v119 = v115;
          if ( v119 - 1 == v113 )
            break;
          v115 = *(v119 - 2);
          --v119;
          if ( v115 >= v116 )
            goto LABEL_243;
        }
        v120 = v113;
LABEL_243:
        *v120 = v116;
        v117 = *v110;
        v118 = v110[1];
        if ( *v110 >= v118 )
          goto LABEL_234;
LABEL_244:
        v121 = v112;
        while ( 1 )
        {
          v114 = v121 - 1;
          *v121 = v117;
          if ( v121 - 1 == v113 )
            break;
          v117 = *(v121 - 2);
          --v121;
          if ( v117 >= v118 )
            goto LABEL_233;
        }
        v114 = v113;
LABEL_233:
        *v114 = v118;
        goto LABEL_234;
      }
    }
    v101 = __CFADD__(v95, 0x10000000);
    v100 = v95 + 0x10000000;
    goto LABEL_195;
  }
  v85 = v174.m128i_i64[1];
  v154.m128i_i64[0] = v174.m128i_i64[1];
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)v162 = &v154;
    *(_QWORD *)&v162[8] = sub_1416BB0B0;
    *(_QWORD *)&v177 = 2;
    *((_QWORD *)&v177 + 1) = aCodexmateLibCo_0;
    *(_QWORD *)&v178 = 51;
    v179.m128i_i64[0] = (__int64)&unk_1419E05AF;
    v179.m128i_i64[1] = (__int64)v162;
    v174.m128i_i64[0] = 0;
    v174.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
    v175 = (__m128i)0x33uLL;
    *(_QWORD *)&v176 = aSrcCoreRelayCo_0;
    *((_QWORD *)&v176 + 1) = 41;
    *((_QWORD *)&v178 + 1) = 0x2B500000001LL;
    sub_1414D53A0(&v185, &v174);
    v85 = v154.m128i_i64[0];
  }
  *v169 = -1;
  if ( (unsigned int)(v85 & 3) - 2 >= 2 && (v85 & 3) != 0 )
  {
    v174.m128i_i64[1] = v85 - 1;
    v174.m128i_i8[0] = 3;
    sub_1416BCB00(&v174.m128i_u64[1]);
  }
  if ( v55 )
    goto LABEL_177;
  return v169;
}
