// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x14080dd30 | successor of pre-update 0x140267190 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
_QWORD *__fastcall sub_14080DD30(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  _QWORD *v6; // r13
  __int64 *i; // rax
  __int64 *v8; // rdi
  __int64 v9; // r15
  __m128i v10; // rax
  unsigned __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(unsigned __int64); // rax
  unsigned __int64 v15; // rax
  char v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  _QWORD *v29; // r15
  __int64 *j; // rax
  __int64 v31; // r8
  __m128i v32; // xmm0
  __int64 v33; // r12
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __int64 v36; // r14
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rbx
  _BYTE *v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // r14
  __int64 v45; // r12
  __int64 v46; // rdx
  __int32 v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // r14
  const __m128i *v62; // r15
  __m128i si128; // xmm0
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  unsigned __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // r14
  unsigned __int64 v78; // r15
  __int64 v79; // rbx
  __int64 v80; // r12
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r12
  unsigned __int64 v85; // r12
  bool v86; // cf
  __int64 v87; // rdx
  unsigned __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rbx
  const __m128i *v93; // r15
  __m128i v95; // xmm0
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 *v101; // rcx
  __m128i v102; // xmm0
  __m128i v104; // xmm0
  unsigned __int64 v105; // rdi
  unsigned __int64 v106; // rdi
  unsigned __int64 v107; // rbx
  __int64 v108; // rbx
  unsigned __int64 v109; // rcx
  _QWORD *v110; // rcx
  unsigned __int64 *v111; // rbx
  unsigned __int64 v112; // rax
  unsigned __int64 *v113; // rax
  unsigned __int64 *v114; // rcx
  unsigned __int64 *v115; // rdx
  unsigned __int64 *v116; // r10
  unsigned __int64 v117; // r9
  unsigned __int64 v118; // r8
  unsigned __int64 v119; // r9
  unsigned __int64 v120; // r8
  unsigned __int64 *v121; // r11
  unsigned __int64 *v122; // r10
  unsigned __int64 *v123; // r11
  _BYTE v124[24]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v125; // [rsp+48h] [rbp-38h] BYREF
  __int64 v126; // [rsp+58h] [rbp-28h]
  __m128i v127; // [rsp+60h] [rbp-20h]
  __m128i v128; // [rsp+70h] [rbp-10h]
  __int64 v129; // [rsp+80h] [rbp+0h]
  __int64 v130; // [rsp+90h] [rbp+10h]
  _QWORD *v131; // [rsp+98h] [rbp+18h]
  __int64 v132; // [rsp+A0h] [rbp+20h]
  __int64 v133; // [rsp+A8h] [rbp+28h]
  _BYTE v134[48]; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v135; // [rsp+E0h] [rbp+60h]
  __int128 v136; // [rsp+F0h] [rbp+70h]
  __m128i v137; // [rsp+100h] [rbp+80h]
  void *v138; // [rsp+110h] [rbp+90h]
  char v139; // [rsp+118h] [rbp+98h]
  _BYTE v140[7]; // [rsp+119h] [rbp+99h]
  __m128i v141; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v142; // [rsp+130h] [rbp+B0h]
  _BYTE v143[48]; // [rsp+140h] [rbp+C0h]
  __int64 v144; // [rsp+170h] [rbp+F0h]
  __int64 v145; // [rsp+178h] [rbp+F8h]
  __int64 v146; // [rsp+180h] [rbp+100h]
  __int64 v147; // [rsp+188h] [rbp+108h]
  __m128i v148; // [rsp+190h] [rbp+110h] BYREF
  __m128i v149; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v150; // [rsp+1B0h] [rbp+130h]
  __int64 v151; // [rsp+1C0h] [rbp+140h]
  __int64 v152; // [rsp+1C8h] [rbp+148h]
  __m128i v153; // [rsp+1D0h] [rbp+150h] BYREF
  _BYTE *v154; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 (__fastcall *v155)(_QWORD, _QWORD); // [rsp+1E8h] [rbp+168h]
  __int64 v156; // [rsp+1F0h] [rbp+170h]
  __int64 v157; // [rsp+1F8h] [rbp+178h]
  __int64 v158; // [rsp+200h] [rbp+180h]
  __int64 v159; // [rsp+208h] [rbp+188h]
  __int64 v160; // [rsp+210h] [rbp+190h] BYREF
  _QWORD v161[5]; // [rsp+218h] [rbp+198h] BYREF
  _BYTE v162[104]; // [rsp+240h] [rbp+1C0h] BYREF
  __m128i v163; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v164; // [rsp+2C0h] [rbp+240h]
  __m128i v165; // [rsp+2D0h] [rbp+250h]
  __int128 v166; // [rsp+2E0h] [rbp+260h]
  __m128i v167; // [rsp+2F0h] [rbp+270h]
  __m128i v168; // [rsp+300h] [rbp+280h] BYREF
  unsigned __int64 v169; // [rsp+310h] [rbp+290h]
  __int64 *v170; // [rsp+318h] [rbp+298h]
  __int64 (__fastcall *v171)(_QWORD, _QWORD); // [rsp+320h] [rbp+2A0h]
  _QWORD *v172; // [rsp+328h] [rbp+2A8h]
  __m128i *v173; // [rsp+330h] [rbp+2B0h] BYREF
  __m128i v174; // [rsp+338h] [rbp+2B8h] BYREF
  __int64 (__fastcall *v175)(_QWORD, _QWORD); // [rsp+348h] [rbp+2C8h]
  __int32 v176; // [rsp+354h] [rbp+2D4h]
  __int64 v177; // [rsp+358h] [rbp+2D8h]
  __int64 v178; // [rsp+360h] [rbp+2E0h]
  __int64 v179; // [rsp+368h] [rbp+2E8h]
  __m128i v180; // [rsp+370h] [rbp+2F0h] BYREF
  __m128i v181; // [rsp+380h] [rbp+300h]
  __m128i v182; // [rsp+390h] [rbp+310h]
  __m128i v183; // [rsp+3A0h] [rbp+320h]
  __int128 v184; // [rsp+3B0h] [rbp+330h]
  __m128i v185; // [rsp+3C0h] [rbp+340h] BYREF
  void *v186; // [rsp+3D0h] [rbp+350h]
  __int64 (*v187)(void); // [rsp+3D8h] [rbp+358h]
  unsigned __int64 *v188; // [rsp+3E8h] [rbp+368h]
  _BYTE *v189; // [rsp+3F0h] [rbp+370h]
  char v190; // [rsp+3FDh] [rbp+37Dh]
  char v191; // [rsp+3FEh] [rbp+37Eh]
  char v192; // [rsp+3FFh] [rbp+37Fh] BYREF
  __int64 v193; // [rsp+400h] [rbp+380h]

  v193 = -2;
  v190 = a3;
  v172 = a1;
  v160 = 0;
  v161[0] = 8;
  memset(&v161[1], 0, 32);
  v158 = a2;
  sub_1407DE030(&v180);
  v3 = v180.m128i_i64[1];
  v4 = v180.m128i_i64[1] + 32 * v181.m128i_i64[0];
  *(_QWORD *)v162 = v180.m128i_i64[1];
  v178 = v180.m128i_i64[0];
  *(_QWORD *)&v162[16] = v180.m128i_i64[0];
  *(_QWORD *)&v162[24] = v4;
  v5 = 32 * v181.m128i_i64[0] - 32;
  v6 = (_QWORD *)(v180.m128i_i64[1] + 40);
  v177 = v180.m128i_i64[1];
  for ( i = (__int64 *)v180.m128i_i64[1]; i != (__int64 *)v4; i = v8 )
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
    v188 = (unsigned __int64 *)*i;
    v9 = i[2];
    v189 = (_BYTE *)i[1];
    v10.m128i_i64[0] = sub_140A92B20((__int64)v189, v9);
    v11 = v10.m128i_u64[1];
    v149 = v10;
    v170 = (__int64 *)v10.m128i_i64[0];
    if ( v10.m128i_i64[0] == 1 )
    {
      v12 = v10.m128i_i8[8] & 3;
      switch ( v10.m128i_i8[8] & 3 )
      {
        case 0:
          if ( *(_BYTE *)(v10.m128i_i64[1] + 16) )
            goto LABEL_15;
          goto LABEL_21;
        case 1:
          if ( !*(_BYTE *)(v10.m128i_i64[1] + 31) )
            goto LABEL_21;
          goto LABEL_15;
        case 2:
          v191 = 1;
          v14 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v3, v10.m128i_i64[1]) + 8);
          v191 = 1;
          LOBYTE(v15) = v14(HIDWORD(v11));
          goto LABEL_14;
        case 3:
          v15 = HIDWORD(v10.m128i_i64[1]);
LABEL_14:
          if ( (_BYTE)v15 )
          {
LABEL_15:
            v173 = (__m128i *)v11;
            v16 = v11;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v163.m128i_i64[0] = (__int64)v189;
              v163.m128i_i64[1] = v9;
              *(_QWORD *)v134 = &v163;
              *(_QWORD *)&v134[8] = sub_1416CE600;
              *(_QWORD *)&v134[16] = &v173;
              *(_QWORD *)&v134[24] = sub_1416EA080;
              v183.m128i_i64[0] = 2;
              v183.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
              *(_QWORD *)&v184 = 51;
              v185.m128i_i64[0] = (__int64)&unk_141A4C41F;
              v185.m128i_i64[1] = (__int64)v134;
              v180.m128i_i64[0] = 0;
              v180.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
              v181 = (__m128i)0x33uLL;
              v182.m128i_i64[0] = (__int64)aSrcCoreRelayCo_0;
              v182.m128i_i64[1] = 41;
              *((_QWORD *)&v184 + 1) = 0x2EE00000001LL;
              sub_141503E20(&v192, &v180);
              v16 = (char)v173;
              v11 = (unsigned __int64)v173;
            }
            v17 = v16 & 3;
            v3 = (unsigned int)(v17 - 2);
            if ( (unsigned int)v3 >= 2 && v17 )
            {
LABEL_23:
              v180.m128i_i64[1] = v11 - 1;
              v180.m128i_i8[0] = 3;
              v191 = 0;
              sub_1416EBAD0(&v180.m128i_u64[1]);
              break;
            }
          }
          else
          {
LABEL_21:
            if ( (unsigned int)(v12 - 2) >= 2 && (v11 & 3) != 0 )
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
        v191 = 1;
        sub_1419395F0(&v160);
      }
      *(_QWORD *)(v161[0] + 8 * v13) = v11;
      v161[1] = v13 + 1;
    }
    if ( v188 )
      sub_140001660(v189, v188, 1);
    v5 -= 32LL;
    v6 += 4;
  }
  if ( v178 )
    sub_140001660(v177, 32 * v178, 8);
  v20 = sub_1416AE140(v3);
  v25 = v20;
  if ( *(_BYTE *)(v20 + 16) == 1 )
  {
    v26 = *(_QWORD *)v20;
    v27 = *(_QWORD *)(v25 + 8);
  }
  else
  {
    v26 = sub_1416C5230(v22, v21, v23, v24);
    *(_QWORD *)v25 = v26;
    *(_QWORD *)(v25 + 8) = v27;
    *(_BYTE *)(v25 + 16) = 1;
  }
  *(_QWORD *)v25 = v26 + 1;
  v150 = xmmword_141A46B20;
  v149 = _mm_loadu_si128((const __m128i *)&off_141A46B10);
  v151 = v26;
  v152 = v27;
  sub_140A2C460(&v180, v158);
  v130 = v180.m128i_i64[1];
  v145 = v180.m128i_i64[0];
  v132 = v180.m128i_i64[0];
  v159 = v180.m128i_i64[1] + 32 * v181.m128i_i64[0];
  v133 = v159;
  v28 = 32 * v181.m128i_i64[0] - 32;
  v29 = (_QWORD *)(v180.m128i_i64[1] + 40);
  v147 = v180.m128i_i64[1];
  for ( j = (__int64 *)v180.m128i_i64[1]; ; j = v170 )
  {
    if ( j == (__int64 *)v159 )
      goto LABEL_136;
    v170 = j + 4;
    v131 = j + 4;
    if ( *j == -1 )
    {
      if ( (__int64 *)v159 != v170 )
      {
        v56 = v28 >> 5;
        do
        {
          v57 = *(v29 - 1);
          if ( v57 )
            sub_140001660(*v29, v57, 1);
          v29 += 4;
          --v56;
        }
        while ( v56 );
      }
LABEL_136:
      if ( v145 )
        sub_140001660(v147, 32 * v145, 8);
      v58 = v160;
      v141 = _mm_loadu_si128((const __m128i *)v161);
      v142 = *(__m128i *)&v161[2];
      *(_QWORD *)v143 = v161[4];
      v59 = v149.m128i_i64[1];
      if ( v149.m128i_i64[1] )
      {
        v60 = *((_QWORD *)&v150 + 1);
        if ( *((_QWORD *)&v150 + 1) )
        {
          v61 = v149.m128i_i64[0];
          v62 = (const __m128i *)(v149.m128i_i64[0] + 16);
          _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v149.m128i_i64[0]));
          do
          {
            if ( !(_WORD)_R12D )
            {
              do
              {
                si128 = _mm_load_si128(v62);
                v61 -= 512;
                ++v62;
                _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
              }
              while ( !_R12D );
            }
            __asm { tzcnt   ecx, r12d }
            v66 = v61 - (unsigned int)(32 * _ECX);
            v67 = *(_QWORD *)(v66 - 32);
            if ( v67 )
              sub_140001660(*(_QWORD *)(v66 - 24), v67, 1);
            --v60;
            _R12D &= _R12D - 1;
          }
          while ( v60 );
        }
        v68 = 32 * v59;
        v69 = 33 * v59 + 49;
        if ( v69 )
          sub_140001660(v149.m128i_i64[0] - v68 - 32, v69, 16);
      }
      *(__m128i *)&v134[8] = _mm_load_si128(&v141);
      *(__m128i *)&v134[24] = v142;
      *(_QWORD *)&v134[40] = *(_QWORD *)v143;
      *(_QWORD *)v134 = v58;
      sub_14143EB50(&v180, *(_QWORD *)(v158 + 8), *(_QWORD *)(v158 + 16));
      if ( v180.m128i_i8[0] )
      {
        v71 = v180.m128i_i64[1];
        v163.m128i_i64[0] = v180.m128i_i64[1];
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v162 = &v163;
          *(_QWORD *)&v162[8] = sub_1416EA080;
          v183.m128i_i64[0] = 2;
          v183.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
          *(_QWORD *)&v184 = 51;
          v185.m128i_i64[0] = (__int64)&unk_141A4C950;
          v185.m128i_i64[1] = (__int64)v162;
          v180.m128i_i64[0] = 0;
          v180.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
          v181 = (__m128i)0x33uLL;
          v182.m128i_i64[0] = (__int64)aSrcCoreRelayCo_0;
          v182.m128i_i64[1] = 41;
          *((_QWORD *)&v184 + 1) = 0x2B500000001LL;
          sub_141503E20(&v192, &v180);
          v71 = v163.m128i_i64[0];
        }
        *v172 = -1;
        if ( (unsigned int)(v71 & 3) - 2 >= 2 && (v71 & 3) != 0 )
        {
          v180.m128i_i64[1] = v71 - 1;
          v180.m128i_i8[0] = 3;
          sub_1416EBAD0(&v180.m128i_u64[1]);
        }
        if ( !v58 )
          return v172;
        goto LABEL_155;
      }
      v74 = *(_QWORD *)&v134[16];
      v75 = 8LL * *(_QWORD *)&v134[16];
      v76 = 0x7FFFFFFFFFFFFFF8LL;
      LOBYTE(v76) = *(_QWORD *)&v134[16] >> 61 != 0
                 || (unsigned __int64)(8LL * *(_QWORD *)&v134[16]) > 0x7FFFFFFFFFFFFFF8LL;
      if ( (_BYTE)v76 )
      {
        v77 = 0;
        goto LABEL_159;
      }
      v78 = v181.m128i_i64[0];
      v79 = *(_QWORD *)&v134[8];
      v80 = *(_QWORD *)&v134[24];
      if ( v75 )
      {
        nullsub_1(v76, v70);
        v77 = 8;
        v81 = sub_140001650(v75, 8);
        if ( !v81 )
LABEL_159:
          sub_14196B2DB(v77, v75);
        v82 = v81;
        v83 = v74;
        if ( v74 )
          goto LABEL_163;
      }
      else
      {
        v82 = 8;
        v83 = 0;
        if ( *(_QWORD *)&v134[16] )
        {
LABEL_163:
          v189 = (_BYTE *)v83;
          v188 = (unsigned __int64 *)v82;
          sub_1419234B0(v82, v79, v75);
          v180.m128i_i64[0] = (__int64)&v192;
          if ( v74 == 1 )
          {
LABEL_164:
            v86 = __CFADD__(v80, 0x10000000);
            v84 = v80 + 0x10000000;
            if ( v86 )
              v84 = -1;
            v82 = (__int64)v188;
            v86 = __CFADD__(*v188, v84);
            v85 = *v188 + v84;
            if ( v86 )
              v85 = -1;
            if ( v74 == 1 )
            {
              v83 = (__int64)v189;
LABEL_207:
              if ( v83 )
                sub_140001660(v82, 8 * v83, 8);
              v105 = v78 + 0xFFFFF;
              if ( v78 >= 0xFFFFFFFFFFF00001uLL )
                v105 = -1;
              v106 = v105 >> 20;
              v107 = v85 + 0xFFFFF;
              if ( v85 >= 0xFFFFFFFFFFF00001uLL )
                v107 = -1;
              v149.m128i_i64[0] = v106;
              v108 = v107 >> 20;
              v141.m128i_i64[0] = v108;
              v163.m128i_i64[0] = *(_QWORD *)&v134[16];
              v109 = *(_QWORD *)&v134[24] + 0xFFFFFLL;
              if ( *(_QWORD *)&v134[24] >= 0xFFFFFFFFFFF00001uLL )
                v109 = -1;
              *(_QWORD *)v162 = v109 >> 20;
              v180.m128i_i64[0] = (__int64)&v149;
              v180.m128i_i64[1] = (__int64)sub_1416EBAE0;
              v181.m128i_i64[0] = (__int64)&v141;
              v181.m128i_i64[1] = (__int64)sub_1416EBAE0;
              v182.m128i_i64[0] = (__int64)&v163;
              v182.m128i_i64[1] = (__int64)sub_1416EBAE0;
              v183.m128i_i64[0] = (__int64)v162;
              v183.m128i_i64[1] = (__int64)sub_1416EBAE0;
              *(_QWORD *)&v184 = &v134[32];
              *((_QWORD *)&v184 + 1) = sub_1416EBAE0;
              v185.m128i_i64[0] = (__int64)&v134[40];
              v185.m128i_i64[1] = (__int64)sub_1416EBAE0;
              v186 = &unk_141A4C7B8;
              v187 = sub_1416EBAE0;
              sub_1416DAFA0(v124, &unk_141A4C7C0, &v180);
              sub_1406C9730((unsigned int)aRouterTransiti_0, 17, (unsigned int)aCapacityPrefli, 18, (__int64)v124);
              if ( v78 < v85 )
              {
                v163.m128i_i64[0] = v108;
                *(_QWORD *)v162 = v106;
                v180.m128i_i64[0] = (__int64)&v163;
                v180.m128i_i64[1] = (__int64)sub_1416EBAE0;
                v181.m128i_i64[0] = (__int64)v162;
                v181.m128i_i64[1] = (__int64)sub_1416EBAE0;
                sub_1416DAFA0(&v125, &unk_141A4C86D, &v180);
                v110 = v172;
                v172[3] = v126;
                *(__m128i *)(v110 + 1) = _mm_loadu_si128(&v125);
                *v110 = 10;
                if ( !*(_QWORD *)v134 )
                  return v172;
                v72 = *(_QWORD *)&v134[8];
                v73 = 8LL * *(_QWORD *)v134;
                goto LABEL_156;
              }
              *v172 = -1;
              v58 = *(_QWORD *)v134;
              if ( !*(_QWORD *)v134 )
                return v172;
LABEL_155:
              v72 = *(_QWORD *)&v134[8];
              v73 = 8 * v58;
LABEL_156:
              sub_140001660(v72, v73, 8);
              return v172;
            }
            v86 = __CFADD__(v188[1], v85);
            v85 += v188[1];
            if ( v86 )
              v85 = -1;
            v83 = (__int64)v189;
            if ( v74 == 2 )
              goto LABEL_207;
            v86 = __CFADD__(v188[2], v85);
            v85 += v188[2];
            if ( v86 )
              v85 = -1;
            if ( v74 == 3 )
              goto LABEL_207;
            v86 = __CFADD__(v188[3], v85);
            v85 += v188[3];
LABEL_172:
            if ( v86 )
              v85 = -1;
            goto LABEL_207;
          }
          v111 = v188;
          if ( v74 >= 0x15 )
          {
            sub_140A1C430(v188, v74, &v180);
            goto LABEL_164;
          }
          if ( (v74 & 1) != 0 )
          {
            v113 = v188 + 1;
          }
          else
          {
            v112 = v188[1];
            if ( *v188 < v112 )
            {
              v188[1] = *v188;
              *v111 = v112;
            }
            v113 = v111 + 2;
          }
          if ( v75 == 16 )
            goto LABEL_164;
          v114 = &v188[v74];
          v115 = v113 + 1;
          while ( 1 )
          {
            v117 = *(v113 - 1);
            v118 = *v113;
            if ( v117 < *v113 )
              break;
            v119 = *v113;
            v120 = v113[1];
            if ( *v113 < v120 )
              goto LABEL_244;
LABEL_234:
            v113 += 2;
            v115 += 2;
            if ( v113 == v114 )
              goto LABEL_164;
          }
          v121 = v113;
          while ( 1 )
          {
            v122 = v121 - 1;
            *v121 = v117;
            if ( v121 - 1 == v111 )
              break;
            v117 = *(v121 - 2);
            --v121;
            if ( v117 >= v118 )
              goto LABEL_243;
          }
          v122 = v111;
LABEL_243:
          *v122 = v118;
          v119 = *v113;
          v120 = v113[1];
          if ( *v113 >= v120 )
            goto LABEL_234;
LABEL_244:
          v123 = v115;
          while ( 1 )
          {
            v116 = v123 - 1;
            *v123 = v119;
            if ( v123 - 1 == v111 )
              break;
            v119 = *(v123 - 2);
            --v123;
            if ( v119 >= v120 )
              goto LABEL_233;
          }
          v116 = v111;
LABEL_233:
          *v116 = v120;
          goto LABEL_234;
        }
      }
      v86 = __CFADD__(v80, 0x10000000);
      v85 = v80 + 0x10000000;
      goto LABEL_172;
    }
    v177 = *j;
    v31 = j[2];
    v189 = (_BYTE *)j[1];
    v171 = (__int64 (__fastcall *)(_QWORD, _QWORD))v31;
    sub_1416C49D0(&v180, v189, v31);
    if ( v180.m128i_i32[0] == 2 )
    {
      if ( (v180.m128i_i8[8] & 3u) - 2 >= 2 && (v180.m128i_i8[8] & 3) != 0 )
      {
        --v180.m128i_i64[1];
        v180.m128i_i8[0] = 3;
        sub_1416EBAD0(&v180.m128i_u64[1]);
      }
      goto LABEL_117;
    }
    sub_1407D83C0((__int64)&v180, (__int64)v189, (__int64)v171, 32769);
    if ( (_BYTE)v187 != 0xFF )
      break;
    v35 = _mm_loadu_si128(&v180);
    *(__m128i *)&v162[48] = v183;
    *(__m128i *)&v162[32] = v182;
    *(__m128i *)&v162[16] = v181;
    *(__m128i *)v162 = v35;
    v154 = v162;
    v155 = sub_14142D4D0;
    sub_1416DAFA0(&v173, &unk_141A47418, &v154);
    v36 = (__int64)v173;
    v153 = _mm_loadu_si128(&v174);
    sub_1407785F0(v162);
    v163 = v153;
    if ( !v190 )
    {
      *(__m128i *)&v143[32] = v167;
      v104 = _mm_load_si128(&v163);
      *(_OWORD *)&v143[16] = v166;
      *(__m128i *)v143 = v165;
      v142 = v164;
      v141 = v104;
      v33 = 10;
      v87 = v177;
      if ( v177 )
        goto LABEL_177;
      goto LABEL_178;
    }
    *(_QWORD *)v162 = 10;
    *(_QWORD *)&v162[8] = v36;
    *(__m128i *)&v162[80] = v167;
    v37 = _mm_load_si128(&v163);
    *(_OWORD *)&v162[64] = v166;
    *(__m128i *)&v162[48] = v165;
    *(__m128i *)&v162[32] = v164;
    *(__m128i *)&v162[16] = v37;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v154 = v189;
      v155 = v171;
      v173 = (__m128i *)&v154;
      v174.m128i_i64[0] = (__int64)sub_1416CE600;
      v174.m128i_i64[1] = (__int64)v162;
      v175 = sub_140D76130;
      v183.m128i_i64[0] = 2;
      v183.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
      *(_QWORD *)&v184 = 51;
      v185.m128i_i64[0] = (__int64)&unk_141A4C3DA;
      v185.m128i_i64[1] = (__int64)&v173;
      v180.m128i_i64[0] = 0;
      v180.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
      v181 = (__m128i)0x33uLL;
      v182.m128i_i64[0] = (__int64)aSrcCoreRelayCo_0;
      v182.m128i_i64[1] = 41;
      *((_QWORD *)&v184 + 1) = 0x2FF00000001LL;
      sub_141503E20(&v192, &v180);
    }
    sub_140778C60(v162);
LABEL_117:
    if ( v177 )
      sub_140001660(v189, v177, 1);
    v28 -= 32LL;
    v29 += 4;
  }
  v153 = v181;
  v167 = v185;
  v166 = v184;
  v165 = v183;
  v164 = v182;
  *(_DWORD *)&v140[3] = HIDWORD(v187);
  *(_DWORD *)v140 = *(_DWORD *)((char *)&v187 + 1);
  v148 = v181;
  v163 = v181;
  *(__m128i *)v134 = v180;
  v137 = v185;
  v32 = _mm_load_si128(&v163);
  v136 = v184;
  v135 = v183;
  *(__m128i *)&v134[32] = v182;
  *(__m128i *)&v134[16] = v32;
  v138 = v186;
  v139 = (char)v187;
  sub_1407F8DF0((__int64)&v163, (__int64)v134);
  v33 = v163.m128i_i64[0];
  if ( v163.m128i_i64[0] != -1 )
  {
    if ( !v190 )
    {
      v36 = v163.m128i_i64[1];
      v141 = v164;
      v142 = v165;
      *(_OWORD *)v143 = v166;
      *(__m128i *)&v143[16] = v167;
      *(__m128i *)&v143[32] = _mm_loadu_si128(&v168);
      goto LABEL_176;
    }
    *(__m128i *)&v162[80] = v168;
    *(__m128i *)&v162[64] = v167;
    v34 = _mm_loadu_si128(&v163);
    *(_OWORD *)&v162[48] = v166;
    *(__m128i *)&v162[32] = v165;
    *(__m128i *)&v162[16] = v164;
    *(__m128i *)v162 = v34;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v154 = v189;
      v155 = v171;
      v173 = (__m128i *)&v154;
      v174.m128i_i64[0] = (__int64)sub_1416CE600;
      v174.m128i_i64[1] = (__int64)v162;
      v175 = sub_140D76130;
      v183.m128i_i64[0] = 2;
      v183.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
      *(_QWORD *)&v184 = 51;
      v185.m128i_i64[0] = (__int64)&unk_141A4C398;
      v185.m128i_i64[1] = (__int64)&v173;
      v180.m128i_i64[0] = 0;
      v180.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
      v181 = (__m128i)0x33uLL;
      v182.m128i_i64[0] = (__int64)aSrcCoreRelayCo_0;
      v182.m128i_i64[1] = 41;
      *((_QWORD *)&v184 + 1) = 0x30A00000001LL;
      sub_141503E20(&v192, &v180);
    }
    sub_140778C60(v162);
    sub_140777BC0(v134);
    goto LABEL_117;
  }
  v38 = v164.m128i_i64[0];
  v39 = v164.m128i_i64[0] + 104 * v164.m128i_i64[1];
  v154 = (_BYTE *)v164.m128i_i64[0];
  v155 = (__int64 (__fastcall *)(_QWORD, _QWORD))v164.m128i_i64[0];
  v144 = v163.m128i_i64[1];
  v156 = v163.m128i_i64[1];
  v157 = v39;
  v176 = 0;
  v146 = v164.m128i_i64[0];
  v179 = v39;
  v169 = v28;
  while ( 2 )
  {
    v40 = v38;
    if ( v38 == v39 )
    {
      v38 = v39;
LABEL_102:
      sub_1401B3250(v38, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v39 - v38) >> 3));
      if ( v144 )
        sub_140001660(v146, 104 * v144, 8);
      if ( (v176 & 1) != 0 )
      {
        sub_1416C49D0(&v180, v189, v171);
        if ( v180.m128i_i32[0] == 2 )
        {
          v54 = v180.m128i_i64[1];
          v173 = (__m128i *)v180.m128i_i64[1];
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v163.m128i_i64[0] = (__int64)v189;
            v163.m128i_i64[1] = (__int64)v171;
            *(_QWORD *)v162 = &v163;
            *(_QWORD *)&v162[8] = sub_1416CE600;
            *(_QWORD *)&v162[16] = &v173;
            *(_QWORD *)&v162[24] = sub_1416EA080;
            v183.m128i_i64[0] = 2;
            v183.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
            *(_QWORD *)&v184 = 51;
            v185.m128i_i64[0] = (__int64)&unk_141A4C310;
            v185.m128i_i64[1] = (__int64)v162;
            v180.m128i_i64[0] = 0;
            v180.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
            v181 = (__m128i)0x33uLL;
            v182.m128i_i64[0] = (__int64)aSrcCoreRelayCo_0;
            v182.m128i_i64[1] = 41;
            *((_QWORD *)&v184 + 1) = 0x33F00000001LL;
            sub_141503E20(&v192, &v180);
            v54 = (__int64)v173;
          }
          if ( (unsigned int)(v54 & 3) - 2 >= 2 && (v54 & 3) != 0 )
          {
            v180.m128i_i64[1] = v54 - 1;
            v180.m128i_i8[0] = 3;
            sub_1416EBAD0(&v180.m128i_u64[1]);
          }
        }
        else if ( (BYTE12(v184) & 0x10) == 0 && ((v185.m128i_i32[0] & 0x20000000) == 0 || (WORD6(v184) & 0x400) == 0) )
        {
          v55 = v161[2] + v183.m128i_i64[1];
          if ( __CFADD__(v161[2], v183.m128i_i64[1]) )
            v55 = -1;
          v161[2] = v55;
          ++v161[4];
        }
      }
      sub_140777BC0(v134);
      goto LABEL_117;
    }
    v38 += 104;
    v155 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v40 + 104);
    v41 = *(_QWORD *)v40;
    v168 = *(__m128i *)(v40 + 88);
    v167 = *(__m128i *)(v40 + 72);
    v166 = *(_OWORD *)(v40 + 56);
    v165 = *(__m128i *)(v40 + 40);
    v164 = *(__m128i *)(v40 + 24);
    v163 = _mm_loadu_si128((const __m128i *)(v40 + 8));
    if ( v41 == -1 )
    {
      v28 = v169;
      goto LABEL_102;
    }
    *(_QWORD *)v162 = v41;
    v42 = &v162[8];
    *(__m128i *)&v162[88] = v168;
    *(__m128i *)&v162[72] = v167;
    v43 = _mm_load_si128(&v163);
    *(_OWORD *)&v162[56] = v166;
    *(__m128i *)&v162[40] = v165;
    *(__m128i *)&v162[24] = v164;
    *(__m128i *)&v162[8] = v43;
    if ( v190 )
    {
      if ( *(_QWORD *)&v162[48] == -1 )
      {
        LOBYTE(v42) = 1;
        v176 = (int)v42;
        if ( v41 )
          goto LABEL_80;
        goto LABEL_81;
      }
      v44 = *(_QWORD *)&v162[56];
      v45 = *(_QWORD *)&v162[64];
      sub_140A934F0(&v180, *(_QWORD *)&v162[56], *(_QWORD *)&v162[64]);
      if ( v182.m128i_i64[0] == -1 )
      {
        v36 = v180.m128i_i64[0];
        v33 = 2;
        if ( v41 )
          goto LABEL_120;
        goto LABEL_121;
      }
      if ( v182.m128i_i32[0] != 2 )
      {
        v46 = v180.m128i_i64[0];
        if ( v180.m128i_i64[0] )
        {
          v53 = v180.m128i_i64[1];
          goto LABEL_97;
        }
      }
      if ( v182.m128i_i32[0] == 2 )
      {
        sub_1407DD730((unsigned int)&v180, v158, *(_DWORD *)&v162[8], *(_DWORD *)&v162[16], v44, v45);
        v47 = v180.m128i_i32[0];
        v178 = v180.m128i_i64[0];
        if ( v180.m128i_i64[0] == -1 )
        {
          LOBYTE(v47) = 1;
          v176 = v47;
        }
        else
        {
          v188 = (unsigned __int64 *)v180.m128i_i64[1];
          v48 = v181.m128i_i64[0];
          sub_1407D9200(&v180, v44, v45);
          if ( !(unsigned __int8)sub_14086D5C0(&v149, &v180) )
          {
            sub_1416C49D0(&v180, v188, v48);
            if ( v180.m128i_i32[0] == 2 )
            {
              v49 = v180.m128i_i64[1];
              v148.m128i_i64[0] = v180.m128i_i64[1];
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                v153.m128i_i64[0] = (__int64)v188;
                v153.m128i_i64[1] = v48;
                v173 = &v153;
                v174.m128i_i64[0] = (__int64)sub_1416CE600;
                v174.m128i_i64[1] = (__int64)&v148;
                v175 = sub_1416EA080;
                v183.m128i_i64[0] = 2;
                v183.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
                *(_QWORD *)&v184 = 51;
                v185.m128i_i64[0] = (__int64)&unk_141A4C350;
                v185.m128i_i64[1] = (__int64)&v173;
                v180.m128i_i64[0] = 0;
                v180.m128i_i64[1] = (__int64)aCodexmateLibCo_11;
                v181 = (__m128i)0x33uLL;
                v182.m128i_i64[0] = (__int64)aSrcCoreRelayCo_0;
                v182.m128i_i64[1] = 41;
                *((_QWORD *)&v184 + 1) = 0x32F00000001LL;
                sub_141503E20(&v192, &v180);
                v49 = v148.m128i_i64[0];
              }
              if ( (unsigned int)(v49 & 3) - 2 >= 2 && (v49 & 3) != 0 )
              {
                v180.m128i_i64[1] = v49 - 1;
                v180.m128i_i8[0] = 3;
                sub_1416EBAD0(&v180.m128i_u64[1]);
              }
            }
            else if ( (BYTE12(v184) & 0x10) == 0
                   && ((v185.m128i_i32[0] & 0x20000000) == 0 || (WORD6(v184) & 0x400) == 0) )
            {
              v50 = v183.m128i_i64[1];
              v51 = v183.m128i_i64[1] + v161[2];
              if ( __CFADD__(v183.m128i_i64[1], v161[2]) )
                v51 = -1;
              v161[2] = v51;
              v52 = v161[1];
              if ( v161[1] == v160 )
                sub_1419395F0(&v160);
              *(_QWORD *)(v161[0] + 8 * v52) = v50;
              v161[1] = v52 + 1;
              ++v161[3];
            }
            if ( v178 )
              sub_140001660(v188, v178, 1);
            v39 = v179;
            if ( v41 )
LABEL_80:
              sub_140001660(*(_QWORD *)&v162[8], v41, 1);
LABEL_81:
            if ( *(_QWORD *)&v162[48] != -1 && *(_QWORD *)&v162[48] )
              sub_140001660(*(_QWORD *)&v162[56], *(_QWORD *)&v162[48], 1);
            v28 = v169;
            if ( *(_QWORD *)&v162[24] )
              sub_140001660(*(_QWORD *)&v162[32], *(_QWORD *)&v162[24], 1);
            if ( *(_QWORD *)&v162[80] != -1 && *(_QWORD *)&v162[80] )
              sub_140001660(*(_QWORD *)&v162[88], *(_QWORD *)&v162[80], 1);
            continue;
          }
          v46 = v178;
          if ( v178 )
          {
            v53 = (__int64)v188;
LABEL_97:
            sub_140001660(v53, v46, 1);
          }
        }
      }
LABEL_98:
      v39 = v179;
      if ( v41 )
        goto LABEL_80;
      goto LABEL_81;
    }
    break;
  }
  sub_1407DA970(&v180, v162);
  v33 = v180.m128i_i64[0];
  if ( v180.m128i_i64[0] == -1 )
    goto LABEL_98;
  v36 = v180.m128i_i64[1];
  v141 = v181;
  v142 = v182;
  *(__m128i *)v143 = v183;
  *(_OWORD *)&v143[16] = v184;
  *(__m128i *)&v143[32] = _mm_loadu_si128(&v185);
  if ( !v41 )
    goto LABEL_121;
LABEL_120:
  sub_140001660(*(_QWORD *)&v162[8], v41, 1);
LABEL_121:
  if ( *(_QWORD *)&v162[48] != -1 && *(_QWORD *)&v162[48] )
    sub_140001660(*(_QWORD *)&v162[56], *(_QWORD *)&v162[48], 1);
  v28 = v169;
  if ( *(_QWORD *)&v162[24] )
    sub_140001660(*(_QWORD *)&v162[32], *(_QWORD *)&v162[24], 1);
  if ( *(_QWORD *)&v162[80] != -1 && *(_QWORD *)&v162[80] )
    sub_140001660(*(_QWORD *)&v162[88], *(_QWORD *)&v162[80], 1);
  sub_1401B3250(v38, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v179 - v38) >> 3));
  if ( v144 )
    sub_140001660(v146, 104 * v144, 8);
LABEL_176:
  sub_140777BC0(v134);
  v87 = v177;
  if ( v177 )
LABEL_177:
    sub_140001660(v189, v87, 1);
LABEL_178:
  if ( (__int64 *)v159 != v170 )
  {
    v88 = v28 >> 5;
    do
    {
      v89 = *(v29 - 1);
      if ( v89 )
        sub_140001660(*v29, v89, 1);
      v29 += 4;
      --v88;
    }
    while ( v88 );
  }
  if ( v145 )
    sub_140001660(v147, 32 * v145, 8);
  v90 = v149.m128i_i64[1];
  if ( v149.m128i_i64[1] )
  {
    v91 = *((_QWORD *)&v150 + 1);
    if ( *((_QWORD *)&v150 + 1) )
    {
      v92 = v149.m128i_i64[0];
      v93 = (const __m128i *)(v149.m128i_i64[0] + 16);
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v149.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v95 = _mm_load_si128(v93);
            v92 -= 512;
            ++v93;
            _R13D = _mm_movemask_epi8(v95) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   ecx, r13d }
        v97 = v92 - (unsigned int)(32 * _ECX);
        v98 = *(_QWORD *)(v97 - 32);
        if ( v98 )
          sub_140001660(*(_QWORD *)(v97 - 24), v98, 1);
        --v91;
        _R13D &= _R13D - 1;
      }
      while ( v91 );
    }
    v99 = 32 * v90;
    v100 = 33 * v90 + 49;
    if ( v100 )
      sub_140001660(v149.m128i_i64[0] - v99 - 32, v100, 16);
  }
  if ( v160 )
    sub_140001660(v161[0], 8 * v160, 8);
  v127 = v141;
  v128 = v142;
  v129 = *(_QWORD *)v143;
  v101 = v172;
  v172[11] = *(_QWORD *)&v143[40];
  *(_OWORD *)(v101 + 9) = *(_OWORD *)&v143[24];
  *(_OWORD *)(v101 + 7) = *(_OWORD *)&v143[8];
  v101[6] = v129;
  v102 = v127;
  *((__m128i *)v101 + 2) = v128;
  *((__m128i *)v101 + 1) = v102;
  *v101 = v33;
  v101[1] = v36;
  return v172;
}
