// module: codexmate_lib/core/relay/translator
// addr: 0x140a20290
// name: sub_140A20290
// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A20290(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int8 *v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm0
  int v9; // eax
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // r14
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r12
  void *v37; // r15
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  const char *v42; // r15
  __int64 v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rax
  char v46; // r15
  __int64 v47; // rax
  __int128 v48; // xmm0
  __int64 v49; // rcx
  _QWORD *v50; // r12
  __int64 v51; // r14
  _WORD *v52; // rdi
  _WORD *v53; // rax
  __int64 v54; // rax
  bool v55; // zf
  __int64 v56; // rdx
  _WORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // rcx
  _DWORD *v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  _DWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rcx
  __int128 v81; // xmm0
  __int64 v82; // rcx
  __int64 v83; // r15
  __int64 v84; // r14
  __int64 v85; // rax
  _DWORD *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r12
  __int64 v89; // rax
  __int64 v90; // r15
  __int64 v91; // rcx
  _DWORD *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rdi
  __int64 v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rcx
  __int128 v100; // xmm0
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rcx
  __int64 v104; // rdi
  __int64 v105; // r15
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // r15
  __int64 v111; // r13
  __int64 v112; // r12
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r12
  void *v117; // r13
  __int64 v118; // rbx
  __int64 v119; // r15
  __int64 v120; // rax
  __int64 v121; // rax
  __int8 v122; // bl
  __int128 v123; // xmm1
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // rbx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int128 v129; // xmm0
  __int128 v130; // xmm1
  __int64 v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rcx
  __int128 v134; // xmm0
  __int64 v136; // rax
  __int64 v137; // r14
  __m256i *v138; // rbx
  __int128 *v139; // rdi
  __int64 v140; // r12
  __int64 v141; // rcx
  __int64 v142; // r13
  _DWORD *v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  void *v147; // rax
  _QWORD *v148; // r15
  __int128 *v149; // rsi
  __int64 v150; // rdi
  __m256i *v151; // r14
  __int64 v152; // rbx
  __int64 v153; // rax
  __int64 v154; // r12
  __int64 v155; // rcx
  _DWORD *v156; // rax
  __int128 *v157; // r13
  __m256i *v158; // rdi
  __int64 v159; // rbx
  __int64 v160; // rax
  __int64 v161; // rcx
  __int128 v162; // xmm0
  __int64 v163; // r12
  __int64 v164; // rcx
  _DWORD *v165; // rax
  __int64 v166; // rcx
  _DWORD *v167; // rax
  __int64 v168; // rcx
  _DWORD *v169; // rax
  __int64 v170; // rcx
  __int64 v171; // r12
  __int64 v172; // rdi
  __int64 v173; // r14
  _DWORD *v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rcx
  __int64 v177; // rcx
  _DWORD *v178; // rax
  char v179; // al
  __int64 v180; // rdx
  __int64 v181; // rcx
  void *v182; // rax
  __int64 v183; // rdi
  __int64 v184; // rax
  __int64 v185; // rcx
  __int128 v186; // xmm0
  __int64 v187; // rsi
  _QWORD *v188; // rdi
  __int64 v189; // rdx
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rbx
  __int64 v193; // rdi
  __int64 v194; // rax
  __int64 v195; // rcx
  __int128 v196; // xmm0
  __int64 v197; // rsi
  _QWORD *v198; // rdi
  __int64 v199; // rdx
  __int128 v200; // [rsp+30h] [rbp-50h] BYREF
  __int64 v201; // [rsp+40h] [rbp-40h]
  __int64 v202; // [rsp+50h] [rbp-30h] BYREF
  __int64 v203; // [rsp+58h] [rbp-28h]
  __int64 v204; // [rsp+60h] [rbp-20h]
  __int128 v205; // [rsp+68h] [rbp-18h] BYREF
  __int64 v206; // [rsp+78h] [rbp-8h]
  __int64 v207; // [rsp+80h] [rbp+0h] BYREF
  _DWORD *v208; // [rsp+88h] [rbp+8h]
  __int64 v209; // [rsp+90h] [rbp+10h]
  __int64 v210; // [rsp+98h] [rbp+18h]
  __m256i v211; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int8 v212; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v213; // [rsp+C1h] [rbp+41h]
  int v214; // [rsp+C9h] [rbp+49h]
  __int16 v215; // [rsp+CDh] [rbp+4Dh]
  char v216; // [rsp+CFh] [rbp+4Fh]
  __int128 v217; // [rsp+D0h] [rbp+50h]
  __int64 v218; // [rsp+E0h] [rbp+60h]
  __int128 v219; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v220; // [rsp+F8h] [rbp+78h]
  char v221; // [rsp+107h] [rbp+87h] BYREF
  __int128 v222; // [rsp+108h] [rbp+88h] BYREF
  __int64 v223; // [rsp+118h] [rbp+98h]
  __int128 v224; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v225; // [rsp+130h] [rbp+B0h]
  _QWORD *v226; // [rsp+138h] [rbp+B8h]
  __m256i v227; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v228; // [rsp+168h] [rbp+E8h]
  __int64 v229; // [rsp+170h] [rbp+F0h]
  __int64 v230; // [rsp+178h] [rbp+F8h]
  __m256i v231; // [rsp+180h] [rbp+100h] BYREF
  __int128 v232; // [rsp+1A0h] [rbp+120h]
  __m256i v233; // [rsp+1B0h] [rbp+130h] BYREF
  char v234; // [rsp+1D5h] [rbp+155h]
  char v235; // [rsp+1D6h] [rbp+156h]
  char v236; // [rsp+1D7h] [rbp+157h]
  char v237; // [rsp+1D8h] [rbp+158h]
  char v238; // [rsp+1D9h] [rbp+159h]
  char v239; // [rsp+1DAh] [rbp+15Ah]
  char v240; // [rsp+1DBh] [rbp+15Bh]
  char v241; // [rsp+1DCh] [rbp+15Ch]
  char v242; // [rsp+1DDh] [rbp+15Dh]
  char v243; // [rsp+1DEh] [rbp+15Eh]
  char v244; // [rsp+1DFh] [rbp+15Fh]
  _BYTE v245[56]; // [rsp+1E0h] [rbp+160h] BYREF
  char v246; // [rsp+21Ah] [rbp+19Ah]
  char v247; // [rsp+21Bh] [rbp+19Bh]
  char v248; // [rsp+21Ch] [rbp+19Ch]
  char v249; // [rsp+21Dh] [rbp+19Dh]
  char v250; // [rsp+21Eh] [rbp+19Eh]
  char v251; // [rsp+21Fh] [rbp+19Fh]
  __int64 v252; // [rsp+220h] [rbp+1A0h]

  v252 = -2;
  v4 = 4;
  v5 = sub_141433D50(aRole_4, 4, a1);
  v6 = (unsigned __int8 *)&unk_1417A3EF7;
  if ( v5 && *(_BYTE *)v5 == 3 )
  {
    v6 = *(unsigned __int8 **)(v5 + 16);
    v4 = *(_QWORD *)(v5 + 24);
  }
  v7 = sub_141433D50(aContent_6, 7, a1);
  if ( !v7 )
  {
    v245[0] = 0;
    v217 = *(_OWORD *)&v245[16];
    v212 = 0;
    v213 = *(_QWORD *)&v245[1];
    v214 = *(_DWORD *)&v245[9];
    v215 = *(_WORD *)&v245[13];
    v216 = v245[15];
    v9 = 0;
    goto LABEL_34;
  }
  switch ( *(_BYTE *)v7 )
  {
    case 0:
      v245[0] = 0;
      break;
    case 1:
    case 2:
      v8 = *(_OWORD *)v7;
      *(_OWORD *)&v245[16] = *(_OWORD *)(v7 + 16);
      *(_OWORD *)v245 = v8;
      break;
    case 3:
      sub_14149C500(&v245[8], v7 + 8);
      v245[0] = 3;
      break;
    case 4:
      sub_1402CE260(&v245[8], *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 24));
      v245[0] = 4;
      break;
    case 5:
      if ( *(_QWORD *)(v7 + 24) )
      {
        v15 = *(_QWORD *)(v7 + 8);
        if ( !v15 )
          sub_1416C3040(&off_141747358);
        sub_1402CCD80(&v245[8], v15, *(_QWORD *)(v7 + 16));
      }
      else
      {
        *(_QWORD *)&v245[8] = 0;
        *(_QWORD *)&v245[24] = 0;
      }
      v245[0] = 5;
      break;
  }
  v217 = *(_OWORD *)&v245[16];
  v212 = v245[0];
  v213 = *(_QWORD *)&v245[1];
  v214 = *(_DWORD *)&v245[9];
  v215 = *(_WORD *)&v245[13];
  v216 = v245[15];
  v245[0] = 0;
  sub_1400104F0(v245);
  v9 = v212;
  if ( v212 == 3 )
  {
    v227.m256i_i64[0] = 0;
    v227.m256i_i64[2] = 0;
    nullsub_1(v22);
    v10 = (_DWORD *)sub_140001650(4, 1);
    if ( !v10 )
      sub_1416C2D4B(1, 4);
    *v10 = 1701605234;
    v233.m256i_i64[0] = 4;
    v233.m256i_i64[1] = (__int64)v10;
    v233.m256i_i64[2] = 4;
    if ( v4 < 0 )
    {
      v12 = 0;
      goto LABEL_11;
    }
    if ( v4 )
    {
      nullsub_1(v11);
      v12 = 1;
      v13 = sub_140001650(v4, 1);
      if ( !v13 )
      {
LABEL_11:
        v244 = 1;
        sub_1416C2D4B(v12, v4);
      }
      v14 = v13;
      sub_141684120(v13, v6, v4);
    }
    else
    {
      v14 = 1;
    }
    v245[0] = 3;
    *(_QWORD *)&v245[8] = v4;
    *(_QWORD *)&v245[16] = v14;
    *(_QWORD *)&v245[24] = v4;
    v244 = 0;
    sub_140307860(&v231, &v227, &v233, v245);
    if ( v231.m256i_i8[0] != -1 )
      sub_1400104F0(&v231);
    nullsub_1(v16);
    v17 = (_DWORD *)sub_140001650(7, 1);
    if ( !v17 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v17 + 3) = 1953391988;
    *v17 = 1953394531;
    v233.m256i_i64[0] = 7;
    v233.m256i_i64[1] = (__int64)v17;
    v233.m256i_i64[2] = 7;
    if ( v217 < 0 )
    {
      v19 = 0;
      goto LABEL_27;
    }
    if ( *((_QWORD *)&v217 + 1) )
    {
      nullsub_1(v18);
      v19 = 1;
      v20 = sub_140001650(*((_QWORD *)&v217 + 1), 1);
      if ( !v20 )
      {
LABEL_27:
        v243 = 1;
        sub_1416C2D4B(v19, *((_QWORD *)&v217 + 1));
      }
      v21 = v20;
      sub_141684120(v20, v217, *((_QWORD *)&v217 + 1));
    }
    else
    {
      v21 = 1;
    }
    v245[0] = 3;
    *(_QWORD *)&v245[8] = *((_QWORD *)&v217 + 1);
    *(_QWORD *)&v245[16] = v21;
    *(_QWORD *)&v245[24] = *((_QWORD *)&v217 + 1);
    v243 = 0;
    sub_140307860(&v231, &v227, &v233, v245);
    if ( v231.m256i_i8[0] != -1 )
      sub_1400104F0(&v231);
    *(_OWORD *)&v245[8] = *(_OWORD *)v227.m256i_i8;
    *(_QWORD *)&v245[24] = v227.m256i_i64[2];
    v245[0] = 5;
    v131 = a2[2];
    if ( v131 == *a2 )
      sub_1416890A0(a2);
    v132 = a2[1];
    v133 = 32 * v131;
    v134 = *(_OWORD *)v245;
    *(_OWORD *)(v132 + v133 + 16) = *(_OWORD *)&v245[16];
    *(_OWORD *)(v132 + v133) = v134;
    a2[2] = v131 + 1;
    return sub_1400104F0(&v212);
  }
LABEL_34:
  if ( v9 != 4 )
    goto LABEL_124;
  if ( v4 == 4 )
  {
    if ( *(_DWORD *)v6 != 1919251317 )
      goto LABEL_124;
    *(_QWORD *)&v224 = 0;
    *((_QWORD *)&v224 + 1) = 8;
    v225 = 0;
    *(_QWORD *)&v219 = 0;
    *((_QWORD *)&v219 + 1) = 8;
    v220 = 0;
    v104 = v217;
    v229 = v217 + 32LL * *((_QWORD *)&v217 + 1);
    v105 = 0x746C757365725F6CLL;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          do
          {
            v230 = v104;
            if ( v104 == v229 )
            {
              v136 = *((_QWORD *)&v219 + 1);
              v137 = *((_QWORD *)&v219 + 1) + 56 * v220;
              v207 = *((_QWORD *)&v219 + 1);
              v208 = *((_DWORD **)&v219 + 1);
              v209 = v219;
              v210 = v137;
              v138 = &v231;
              v139 = &v205;
              if ( *((_QWORD *)&v219 + 1) != v137 )
              {
                do
                {
                  v140 = v136 + 56;
                  v208 = (_DWORD *)(v136 + 56);
                  v141 = *(_QWORD *)v136;
                  v228 = *(_QWORD *)(v136 + 8);
                  v142 = *(_QWORD *)(v136 + 16);
                  v211 = *(__m256i *)(v136 + 24);
                  if ( v141 == -1 )
                    break;
                  *((_QWORD *)&v232 + 1) = v141;
                  v227 = v211;
                  *(_QWORD *)&v205 = 0;
                  v206 = 0;
                  nullsub_1(v141);
                  v143 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v143 )
                    sub_1416C2D4B(1, 4);
                  *v143 = 1701605234;
                  *(_QWORD *)&v222 = 4;
                  *((_QWORD *)&v222 + 1) = v143;
                  v223 = 4;
                  nullsub_1(v144);
                  *(_QWORD *)&v232 = sub_140001650(4, 1);
                  if ( !(_QWORD)v232 )
                    sub_1416C2D4B(1, 4);
                  v218 = v140;
                  v145 = v232;
                  *(_DWORD *)v232 = 1819242356;
                  v245[0] = 3;
                  *(_QWORD *)&v245[8] = 4;
                  *(_QWORD *)&v245[16] = v145;
                  *(_QWORD *)&v245[24] = 4;
                  sub_140307860(v138, v139, &v222, v245);
                  if ( v231.m256i_i8[0] != -1 )
                    sub_1400104F0(v138);
                  nullsub_1(v146);
                  v147 = (void *)sub_140001650(12, 1);
                  if ( !v147 )
                    sub_1416C2D4B(1, 12);
                  qmemcpy(v147, "tool_call_id", 12);
                  *(_QWORD *)&v222 = 12;
                  *((_QWORD *)&v222 + 1) = v147;
                  v223 = 12;
                  if ( v142 < 0 )
                  {
                    v152 = 0;
LABEL_238:
                    v241 = 1;
                    sub_1416C2D4B(v152, v142);
                  }
                  if ( v142 )
                  {
                    v148 = a2;
                    v149 = v139;
                    v150 = v137;
                    v151 = v138;
                    nullsub_1(0x6C61635F6C6F6F74LL);
                    v152 = 1;
                    v153 = sub_140001650(v142, 1);
                    if ( !v153 )
                      goto LABEL_238;
                    v154 = v153;
                    sub_141684120(v153, v228, v142);
                    v138 = v151;
                    v137 = v150;
                    v139 = v149;
                    a2 = v148;
                  }
                  else
                  {
                    v154 = 1;
                  }
                  v245[0] = 3;
                  *(_QWORD *)&v245[8] = v142;
                  *(_QWORD *)&v245[16] = v154;
                  *(_QWORD *)&v245[24] = v142;
                  v241 = 0;
                  sub_140307860(v138, v139, &v222, v245);
                  if ( v231.m256i_i8[0] != -1 )
                    sub_1400104F0(v138);
                  nullsub_1(v155);
                  v156 = (_DWORD *)sub_140001650(7, 1);
                  if ( !v156 )
                    sub_1416C2D4B(1, 7);
                  *(_DWORD *)((char *)v156 + 3) = 1953391988;
                  *v156 = 1953394531;
                  *(_QWORD *)&v222 = 7;
                  *((_QWORD *)&v222 + 1) = v156;
                  v223 = 7;
                  v246 = 1;
                  sub_140B842D0(v245, &v227);
                  if ( v245[0] == 0xFF )
                  {
                    v231.m256i_i64[0] = *(_QWORD *)&v245[8];
                    sub_1416C3060(
                      (unsigned int)aCalledResultUn_15,
                      43,
                      (unsigned int)&v231,
                      (unsigned int)&off_1417A5560,
                      (__int64)&off_1417A8550);
                  }
                  v231 = *(__m256i *)v245;
                  v246 = 0;
                  sub_140307860(v245, v139, &v222, v138);
                  if ( v245[0] != 0xFF )
                    sub_1400104F0(v245);
                  v157 = v139;
                  v158 = v138;
                  v233.m256i_i64[3] = v206;
                  *(_OWORD *)&v233.m256i_u64[1] = v205;
                  v233.m256i_i8[0] = 5;
                  v159 = a2[2];
                  if ( v159 == *a2 )
                    sub_1416890A0(a2);
                  v160 = a2[1];
                  v161 = 32 * v159;
                  v162 = *(_OWORD *)v233.m256i_i8;
                  *(_OWORD *)(v160 + v161 + 16) = *(_OWORD *)&v233.m256i_u64[2];
                  *(_OWORD *)(v160 + v161) = v162;
                  a2[2] = v159 + 1;
                  sub_1400104F0(&v227);
                  v163 = v218;
                  v138 = v158;
                  if ( *((_QWORD *)&v232 + 1) )
                    sub_140001660(v228, *((_QWORD *)&v232 + 1), 1);
                  v136 = v163;
                  v139 = v157;
                }
                while ( v163 != v137 );
              }
              sub_140333600(&v207);
              if ( v225 )
              {
                v227.m256i_i64[0] = 0;
                v227.m256i_i64[2] = 0;
                nullsub_1(v164);
                v165 = (_DWORD *)sub_140001650(4, 1);
                if ( !v165 )
                  sub_1416C2D4B(1, 4);
                *v165 = 1701605234;
                v233.m256i_i64[0] = 4;
                v233.m256i_i64[1] = (__int64)v165;
                v233.m256i_i64[2] = 4;
                nullsub_1(v166);
                v167 = (_DWORD *)sub_140001650(4, 1);
                *((_QWORD *)&v232 + 1) = v167;
                if ( !v167 )
                  sub_1416C2D4B(1, 4);
                *v167 = 1919251317;
                v245[0] = 3;
                *(_QWORD *)&v245[8] = 4;
                *(_QWORD *)&v245[16] = v167;
                *(_QWORD *)&v245[24] = 4;
                sub_140307860(&v231, &v227, &v233, v245);
                if ( v231.m256i_i8[0] != -1 )
                  sub_1400104F0(&v231);
                nullsub_1(v168);
                v169 = (_DWORD *)sub_140001650(7, 1);
                if ( !v169 )
                  sub_1416C2D4B(1, 7);
                *(_DWORD *)((char *)v169 + 3) = 1953391988;
                *v169 = 1953394531;
                v233.m256i_i64[0] = 7;
                *((_QWORD *)&v232 + 1) = v169;
                v233.m256i_i64[1] = (__int64)v169;
                v233.m256i_i64[2] = 7;
                sub_140440300((unsigned int)v245, DWORD2(v224), v225, (unsigned int)asc_1417A47C8, 1);
                v171 = *(_QWORD *)&v245[8];
                v172 = *(_QWORD *)&v245[16];
                *(_QWORD *)&v232 = *(_QWORD *)&v245[8];
                *((_QWORD *)&v232 + 1) = *(_QWORD *)v245;
                if ( *(__int64 *)&v245[16] < 0 )
                {
                  v173 = 0;
                  goto LABEL_236;
                }
                if ( *(_QWORD *)&v245[16] )
                {
                  nullsub_1(v170);
                  v173 = 1;
                  v191 = sub_140001650(v172, 1);
                  if ( !v191 )
                  {
LABEL_236:
                    v242 = 1;
                    sub_1416C2D4B(v173, v172);
                  }
                  v192 = v191;
                  sub_141684120(v191, v171, v172);
                }
                else
                {
                  v192 = 1;
                }
                v245[0] = 3;
                *(_QWORD *)&v245[8] = v172;
                *(_QWORD *)&v245[16] = v192;
                *(_QWORD *)&v245[24] = v172;
                v242 = 0;
                sub_140307860(&v231, &v227, &v233, v245);
                if ( v231.m256i_i8[0] != -1 )
                  sub_1400104F0(&v231);
                if ( *((_QWORD *)&v232 + 1) )
                  sub_140001660(v232, *((_QWORD *)&v232 + 1), 1);
                *(_OWORD *)&v245[8] = *(_OWORD *)v227.m256i_i8;
                *(_QWORD *)&v245[24] = v227.m256i_i64[2];
                v245[0] = 5;
                v193 = a2[2];
                if ( v193 == *a2 )
                  sub_1416890A0(a2);
                v194 = a2[1];
                v195 = 32 * v193;
                v196 = *(_OWORD *)v245;
                *(_OWORD *)(v194 + v195 + 16) = *(_OWORD *)&v245[16];
                *(_OWORD *)(v194 + v195) = v196;
                a2[2] = v193 + 1;
                v197 = v225;
                if ( v225 )
                {
                  v198 = (_QWORD *)(*((_QWORD *)&v224 + 1) + 8LL);
                  do
                  {
                    v199 = *(v198 - 1);
                    if ( v199 )
                      sub_140001660(*v198, v199, 1);
                    v198 += 3;
                    --v197;
                  }
                  while ( v197 );
                }
              }
              v190 = v224;
              if ( !(_QWORD)v224 )
                return sub_1400104F0(&v212);
              v103 = *((_QWORD *)&v224 + 1);
LABEL_268:
              v101 = 24 * v190;
              v102 = 8;
LABEL_154:
              sub_140001660(v103, v101, v102);
              return sub_1400104F0(&v212);
            }
            v106 = sub_141433D50(aType_8, 4, v104);
            v104 = v230 + 32;
          }
          while ( !v106 || *(_BYTE *)v106 != 3 );
          v107 = *(_QWORD *)(v106 + 16);
          v108 = *(_QWORD *)(v106 + 24);
          if ( v108 == 11 )
            break;
          if ( v108 == 4 && *(_DWORD *)v107 == 1954047348 )
          {
            v109 = sub_141433D50(aText_10, 4, v230);
            if ( v109 )
            {
              if ( *(_BYTE *)v109 == 3 )
              {
                v110 = *(_QWORD *)(v109 + 16);
                v111 = *(_QWORD *)(v109 + 24);
                sub_140388B60((unsigned int)v245, v111, 0, 1, 1);
                v112 = *(_QWORD *)&v245[8];
                if ( *(_DWORD *)v245 == 1 )
                  sub_1416C2D4B(*(_QWORD *)&v245[8], *(_QWORD *)&v245[16]);
                v113 = *(_QWORD *)&v245[16];
                if ( v111 )
                  sub_141684120(*(_QWORD *)&v245[16], v110, v111);
                *(_QWORD *)v245 = v112;
                *(_QWORD *)&v245[8] = v113;
                *(_QWORD *)&v245[16] = v111;
                sub_1403B1EC0(&v224, v245);
                v105 = 0x746C757365725F6CLL;
              }
            }
          }
        }
      }
      while ( *(_QWORD *)v107 ^ 0x7365725F6C6F6F74LL | v105 ^ *(_QWORD *)(v107 + 3) );
      v114 = sub_141433D50(aToolUseId, 11, v230);
      v116 = 12;
      if ( v114 )
      {
        v117 = &unk_1417A7B30;
        if ( *(_BYTE *)v114 == 3 )
        {
          v115 = *(_QWORD *)(v114 + 24);
          if ( v115 < 0 )
          {
            v119 = 0;
            goto LABEL_247;
          }
          v118 = v105;
          if ( !v115 )
          {
            *((_QWORD *)&v232 + 1) = 1;
            *(_QWORD *)&v232 = 0;
            goto LABEL_177;
          }
          v117 = *(void **)(v114 + 16);
          v116 = *(_QWORD *)(v114 + 24);
        }
      }
      else
      {
        v117 = &unk_1417A7B30;
      }
      v118 = v105;
      nullsub_1(v115);
      v119 = 1;
      v120 = sub_140001650(v116, 1);
      if ( !v120 )
      {
        *((_QWORD *)&v232 + 1) = v116;
LABEL_247:
        sub_1416C2D4B(v119, *((_QWORD *)&v232 + 1));
      }
      *((_QWORD *)&v232 + 1) = v120;
      *(_QWORD *)&v232 = v116;
      sub_141684120(v120, v117, v116);
LABEL_177:
      v248 = 1;
      v121 = sub_141433D50(aContent_6, 7, v230);
      v105 = v118;
      if ( v121 )
      {
        v122 = *(_BYTE *)v121;
        switch ( *(_BYTE *)v121 )
        {
          case 0:
            break;
          case 1:
          case 2:
            v123 = *(_OWORD *)(v121 + 16);
            *(_OWORD *)v245 = *(_OWORD *)v121;
            *(_OWORD *)&v245[16] = v123;
            v122 = v245[0];
            break;
          case 3:
            v248 = 1;
            v122 = 3;
            sub_14149C500(&v245[8], v121 + 8);
            break;
          case 4:
            v124 = *(_QWORD *)(v121 + 16);
            v125 = *(_QWORD *)(v121 + 24);
            v248 = 1;
            v122 = 4;
            sub_1402CE260(&v245[8], v124, v125);
            break;
          case 5:
            v248 = 1;
            v122 = 5;
            sub_140323EA0(&v245[8], (_QWORD *)(v121 + 8));
            break;
        }
        *(_OWORD *)((char *)&v233.m256i_u64[1] + 7) = *(_OWORD *)&v245[16];
        *(_OWORD *)v233.m256i_i8 = *(_OWORD *)&v245[1];
        *(_QWORD *)&v245[8] = 0;
        *(_OWORD *)&v245[16] = 1u;
        v245[0] = 3;
        if ( v122 != -1 )
        {
          v231.m256i_i8[0] = v122;
          *(_OWORD *)&v231.m256i_u64[2] = *(_OWORD *)((char *)&v233.m256i_u64[1] + 7);
          *(_OWORD *)&v231.m256i_i8[1] = *(_OWORD *)v233.m256i_i8;
          v248 = 1;
          sub_1400104F0(v245);
          goto LABEL_187;
        }
      }
      else
      {
        *(_QWORD *)&v245[8] = 0;
        *(_OWORD *)&v245[16] = 1u;
        v245[0] = 3;
      }
      v231 = *(__m256i *)v245;
      v122 = v245[0];
LABEL_187:
      if ( v122 == 3 )
      {
        v247 = 1;
        sub_14149C500(&v200, &v231.m256i_u64[1]);
      }
      else if ( v122 == 4 )
      {
        v247 = 1;
        sub_14031BC90((__int64)&v233, v231.m256i_i64[2], v231.m256i_i64[2] + 32 * v231.m256i_i64[3]);
        v228 = v233.m256i_i64[1];
        sub_1404408C0((unsigned int)v245, v233.m256i_i32[2], v233.m256i_i32[4], (unsigned int)asc_1417A47C8, 1);
        v201 = *(_QWORD *)&v245[16];
        v200 = *(_OWORD *)v245;
        if ( v233.m256i_i64[0] )
          sub_140001660(v228, 16 * v233.m256i_i64[0], 8);
      }
      else
      {
        v233.m256i_i64[0] = 0;
        *(_OWORD *)&v233.m256i_u64[1] = 1u;
        *(_QWORD *)&v245[16] = 1610612768;
        *(_QWORD *)v245 = &v233;
        *(_QWORD *)&v245[8] = &off_1417A9B00;
        if ( (unsigned __int8)sub_14142EA10(&v231, v245) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_3,
            55,
            (unsigned int)&v221,
            (unsigned int)&unk_1417A5580,
            (__int64)&off_1417A9BB8);
        v201 = v233.m256i_i64[2];
        v200 = *(_OWORD *)v233.m256i_i8;
      }
      *(_OWORD *)v245 = v232;
      *(_QWORD *)&v245[16] = v232;
      *(__int64 *)((char *)&v233.m256i_i64[2] + 7) = v201;
      *(_OWORD *)((char *)&v233.m256i_u32[1] + 3) = v200;
      v245[24] = 3;
      *(_OWORD *)&v245[40] = *(_OWORD *)((char *)&v233.m256i_u64[1] + 7);
      *(_OWORD *)&v245[25] = *(_OWORD *)v233.m256i_i8;
      v126 = v220;
      if ( v220 == (_QWORD)v219 )
        sub_141689B90(&v219);
      v127 = *((_QWORD *)&v219 + 1);
      v128 = 56 * v126;
      *(_QWORD *)(*((_QWORD *)&v219 + 1) + v128 + 48) = *(_QWORD *)&v245[48];
      v129 = *(_OWORD *)v245;
      v130 = *(_OWORD *)&v245[16];
      *(_OWORD *)(v127 + v128 + 32) = *(_OWORD *)&v245[32];
      *(_OWORD *)(v127 + v128 + 16) = v130;
      *(_OWORD *)(v127 + v128) = v129;
      v220 = v126 + 1;
      v248 = 0;
      sub_1400104F0(&v231);
    }
  }
  if ( v4 != 9 || (v23 = (_QWORD *)(*(_QWORD *)v6 ^ 0x6E61747369737361LL | v6[8] ^ 0x74LL)) != nullptr )
  {
LABEL_124:
    sub_1409EAE80((unsigned __int64 *)v245, &v212);
    v83 = *(_QWORD *)v245;
    v84 = 0;
    if ( *(_QWORD *)v245 == -1 )
      v83 = 0;
    v85 = 1;
    if ( *(_QWORD *)v245 != -1 )
      v85 = *(_QWORD *)&v245[8];
    v229 = v85;
    if ( *(_QWORD *)v245 != -1 )
      v84 = *(_QWORD *)&v245[16];
    v227.m256i_i64[0] = 0;
    v227.m256i_i64[2] = 0;
    nullsub_1(v82);
    v86 = (_DWORD *)sub_140001650(4, 1);
    v230 = v83;
    if ( !v86 )
      sub_1416C2D4B(1, 4);
    *v86 = 1701605234;
    v233.m256i_i64[0] = 4;
    v233.m256i_i64[1] = (__int64)v86;
    v233.m256i_i64[2] = 4;
    if ( v4 < 0 )
    {
      v88 = 0;
      goto LABEL_133;
    }
    if ( v4 )
    {
      nullsub_1(v87);
      v88 = 1;
      v89 = sub_140001650(v4, 1);
      if ( !v89 )
      {
LABEL_133:
        v235 = 1;
        sub_1416C2D4B(v88, v4);
      }
      v90 = v89;
      sub_141684120(v89, v6, v4);
    }
    else
    {
      v90 = 1;
    }
    v245[0] = 3;
    *(_QWORD *)&v245[8] = v4;
    *(_QWORD *)&v245[16] = v90;
    *(_QWORD *)&v245[24] = v4;
    v235 = 0;
    sub_140307860(&v231, &v227, &v233, v245);
    if ( v231.m256i_i8[0] != -1 )
      sub_1400104F0(&v231);
    nullsub_1(v91);
    v92 = (_DWORD *)sub_140001650(7, 1);
    if ( !v92 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v92 + 3) = 1953391988;
    *v92 = 1953394531;
    v233.m256i_i64[0] = 7;
    v233.m256i_i64[1] = (__int64)v92;
    v233.m256i_i64[2] = 7;
    if ( v84 < 0 )
    {
      v94 = 0;
      goto LABEL_143;
    }
    if ( v84 )
    {
      nullsub_1(v93);
      v94 = 1;
      v95 = sub_140001650(v84, 1);
      if ( !v95 )
      {
LABEL_143:
        v234 = 1;
        sub_1416C2D4B(v94, v84);
      }
      v96 = v95;
      sub_141684120(v95, v229, v84);
    }
    else
    {
      v96 = 1;
    }
    v245[0] = 3;
    *(_QWORD *)&v245[8] = v84;
    *(_QWORD *)&v245[16] = v96;
    *(_QWORD *)&v245[24] = v84;
    v234 = 0;
    sub_140307860(&v231, &v227, &v233, v245);
    if ( v231.m256i_i8[0] != -1 )
      sub_1400104F0(&v231);
    *(_OWORD *)&v245[8] = *(_OWORD *)v227.m256i_i8;
    *(_QWORD *)&v245[24] = v227.m256i_i64[2];
    v245[0] = 5;
    v97 = a2[2];
    if ( v97 == *a2 )
      sub_1416890A0(a2);
    v98 = a2[1];
    v99 = 32 * v97;
    v100 = *(_OWORD *)v245;
    *(_OWORD *)(v98 + v99 + 16) = *(_OWORD *)&v245[16];
    *(_OWORD *)(v98 + v99) = v100;
    a2[2] = v97 + 1;
    v101 = v230;
    if ( !v230 )
      return sub_1400104F0(&v212);
    v102 = 1;
    v103 = v229;
    goto LABEL_154;
  }
  v202 = 0;
  v203 = 8;
  v204 = 0;
  *(_QWORD *)&v224 = 0;
  *((_QWORD *)&v224 + 1) = 8;
  v225 = 0;
  v24 = v217;
  v25 = v217 + 32LL * *((_QWORD *)&v217 + 1);
  while ( v24 != v25 )
  {
    v26 = v24;
    v249 = 1;
    v27 = sub_141433D50(aType_8, 4, v24);
    v24 += 32;
    if ( v27 && *(_BYTE *)v27 == 3 )
    {
      v23 = *(_QWORD **)(v27 + 16);
      v28 = *(_QWORD *)(v27 + 24);
      if ( v28 == 8 )
      {
        if ( *v23 == 0x6573755F6C6F6F74LL )
        {
          v249 = 1;
          v34 = sub_141433D50(aId_6, 2, v26);
          v36 = 12;
          if ( v34 )
          {
            v37 = &unk_1417A7B30;
            if ( *(_BYTE *)v34 == 3 )
            {
              v36 = *(_QWORD *)(v34 + 24);
              if ( v36 < 0 )
              {
                v38 = 0;
                v180 = *((_QWORD *)&v232 + 1);
                goto LABEL_249;
              }
              if ( !v36 )
              {
                *((_QWORD *)&v232 + 1) = 1;
                LODWORD(v228) = 1;
                v229 = 0;
                goto LABEL_60;
              }
              v37 = *(void **)(v34 + 16);
            }
          }
          else
          {
            v37 = &unk_1417A7B30;
          }
          nullsub_1(v35);
          v38 = 1;
          v39 = sub_140001650(v36, 1);
          if ( !v39 )
          {
            v180 = v36;
LABEL_249:
            v249 = 1;
            sub_1416C2D4B(v38, v180);
          }
          *((_QWORD *)&v232 + 1) = v39;
          v229 = v36;
          sub_141684120(v39, v37, v36);
          LODWORD(v228) = 0;
LABEL_60:
          v40 = sub_141433D50(aName_7, 4, v26);
          v41 = 4;
          v230 = 4;
          if ( v40 )
          {
            v42 = "tool";
            if ( *(_BYTE *)v40 == 3 )
            {
              v41 = *(_QWORD *)(v40 + 24);
              if ( v41 < 0 )
              {
                v43 = 0;
                goto LABEL_272;
              }
              v230 = *(_QWORD *)(v40 + 24);
              if ( !v41 )
              {
                *(_QWORD *)&v232 = 1;
                v46 = 1;
                v230 = 0;
                goto LABEL_68;
              }
              v42 = *(const char **)(v40 + 16);
            }
          }
          else
          {
            v42 = "tool";
          }
          nullsub_1(v41);
          v43 = 1;
          v44 = v230;
          v45 = sub_140001650(v230, 1);
          if ( !v45 )
          {
            *(_QWORD *)&v232 = v44;
LABEL_272:
            sub_1416C2D4B(v43, v232);
          }
          *(_QWORD *)&v232 = v45;
          sub_141684120(v45, v42, v44);
          v46 = 0;
LABEL_68:
          v47 = sub_141433D50(aInput_2, 5, v26);
          if ( v47 )
          {
            switch ( *(_BYTE *)v47 )
            {
              case 0:
                v245[0] = 0;
                break;
              case 1:
              case 2:
                v48 = *(_OWORD *)v47;
                *(_OWORD *)&v245[16] = *(_OWORD *)(v47 + 16);
                *(_OWORD *)v245 = v48;
                break;
              case 3:
                sub_14149C500(&v245[8], v47 + 8);
                v245[0] = 3;
                break;
              case 4:
                sub_1402CE260(&v245[8], *(_QWORD *)(v47 + 16), *(_QWORD *)(v47 + 24));
                v245[0] = 4;
                break;
              case 5:
                sub_140323EA0(&v245[8], (_QWORD *)(v47 + 8));
                v245[0] = 5;
                break;
            }
            v211 = *(__m256i *)v245;
            v245[0] = 0;
            sub_1400104F0(v245);
          }
          else
          {
            v245[0] = 0;
            *(_OWORD *)&v211.m256i_u64[2] = *(_OWORD *)&v245[16];
            v211.m256i_i8[0] = 0;
            *(__int64 *)((char *)v211.m256i_i64 + 1) = *(_QWORD *)&v245[1];
            *(__int32 *)((char *)&v211.m256i_i32[2] + 1) = *(_DWORD *)&v245[9];
            *(__int16 *)((char *)&v211.m256i_i16[6] + 1) = *(_WORD *)&v245[13];
            v211.m256i_i8[15] = v245[15];
          }
          sub_140985700(v245, (__int64)&v211);
          v50 = *(_QWORD **)&v245[8];
          if ( *(_QWORD *)v245 == -1 )
          {
            *(_QWORD *)v245 = *(_QWORD *)&v245[8];
            nullsub_1(v49);
            v53 = (_WORD *)sub_140001650(2, 1);
            if ( !v53 )
              sub_1416C2D4B(1, 2);
            v52 = v53;
            *v53 = 32123;
            v54 = *v50;
            v55 = *v50 == 1;
            v226 = v50;
            if ( v55 )
            {
              sub_140018650(v50 + 1);
            }
            else if ( !v54 )
            {
              v56 = v226[2];
              if ( v56 )
                sub_140001660(v226[1], v56, 1);
            }
            sub_140001660(v226, 40, 8);
            v51 = 2;
            v218 = 2;
          }
          else
          {
            v218 = *(_QWORD *)v245;
            v51 = *(_QWORD *)&v245[16];
            v52 = *(_WORD **)&v245[8];
          }
          v226 = v52;
          *(_QWORD *)&v219 = 0;
          v220 = 0;
          nullsub_1(v49);
          v57 = (_WORD *)sub_140001650(2, 1);
          if ( !v57 )
            sub_1416C2D4B(1, 2);
          *v57 = 25705;
          v233.m256i_i64[0] = 2;
          v233.m256i_i64[1] = (__int64)v57;
          v233.m256i_i64[2] = 2;
          v59 = 1;
          if ( !(_BYTE)v228 )
          {
            nullsub_1(v58);
            v60 = v229;
            v61 = sub_140001650(v229, 1);
            if ( !v61 )
            {
              v240 = 1;
              sub_1416C2D4B(1, v60);
            }
            v59 = v61;
            sub_141684120(v61, *((_QWORD *)&v232 + 1), v60);
          }
          v245[0] = 3;
          *(_QWORD *)&v245[8] = v229;
          *(_QWORD *)&v245[16] = v59;
          *(_QWORD *)&v245[24] = v229;
          v240 = 0;
          sub_140307860(&v231, &v219, &v233, v245);
          if ( v231.m256i_i8[0] != -1 )
            sub_1400104F0(&v231);
          nullsub_1(v62);
          v63 = (_DWORD *)sub_140001650(4, 1);
          if ( !v63 )
            sub_1416C2D4B(1, 4);
          *v63 = 1701869940;
          v233.m256i_i64[0] = 4;
          v233.m256i_i64[1] = (__int64)v63;
          v233.m256i_i64[2] = 4;
          nullsub_1(v64);
          v65 = (_QWORD *)sub_140001650(8, 1);
          v228 = (__int64)v65;
          if ( !v65 )
            sub_1416C2D4B(1, 8);
          *v65 = 0x6E6F6974636E7566LL;
          v245[0] = 3;
          *(_QWORD *)&v245[8] = 8;
          *(_QWORD *)&v245[16] = v65;
          *(_QWORD *)&v245[24] = 8;
          sub_140307860(&v231, &v219, &v233, v245);
          if ( v231.m256i_i8[0] != -1 )
            sub_1400104F0(&v231);
          nullsub_1(v66);
          v67 = (_QWORD *)sub_140001650(8, 1);
          if ( !v67 )
            sub_1416C2D4B(1, 8);
          *v67 = 0x6E6F6974636E7566LL;
          *(_QWORD *)&v205 = 8;
          *((_QWORD *)&v205 + 1) = v67;
          v206 = 8;
          *(_QWORD *)&v222 = 0;
          v223 = 0;
          nullsub_1(0x6E6F6974636E7566LL);
          v68 = (_DWORD *)sub_140001650(4, 1);
          if ( !v68 )
            sub_1416C2D4B(1, 4);
          *v68 = 1701667182;
          v207 = 4;
          v208 = v68;
          v209 = 4;
          v70 = 1;
          v55 = v46 == 0;
          v71 = v230;
          if ( v55 )
          {
            nullsub_1(v69);
            v72 = sub_140001650(v71, 1);
            if ( !v72 )
            {
              v239 = 1;
              sub_1416C2D4B(1, v71);
            }
            v70 = v72;
            sub_141684120(v72, v232, v71);
          }
          v245[0] = 3;
          *(_QWORD *)&v245[8] = v71;
          *(_QWORD *)&v245[16] = v70;
          *(_QWORD *)&v245[24] = v71;
          v239 = 0;
          sub_140307860(&v231, &v222, &v207, v245);
          if ( v231.m256i_i8[0] != -1 )
            sub_1400104F0(&v231);
          nullsub_1(v73);
          v74 = sub_140001650(9, 1);
          if ( !v74 )
            sub_1416C2D4B(1, 9);
          *(_QWORD *)v74 = 0x746E656D75677261LL;
          *(_BYTE *)(v74 + 8) = 115;
          v207 = 9;
          v208 = (_DWORD *)v74;
          v209 = 9;
          if ( v51 < 0 )
          {
            v75 = 0;
LABEL_270:
            v238 = 1;
            sub_1416C2D4B(v75, v51);
          }
          if ( v51 )
          {
            nullsub_1(0x746E656D75677261LL);
            v75 = 1;
            v76 = sub_140001650(v51, 1);
            if ( !v76 )
              goto LABEL_270;
            v77 = v76;
            sub_141684120(v76, v226, v51);
          }
          else
          {
            v77 = 1;
          }
          v245[0] = 3;
          *(_QWORD *)&v245[8] = v51;
          *(_QWORD *)&v245[16] = v77;
          *(_QWORD *)&v245[24] = v51;
          v238 = 0;
          sub_140307860(&v231, &v222, &v207, v245);
          if ( v231.m256i_i8[0] != -1 )
            sub_1400104F0(&v231);
          v233.m256i_i64[3] = v223;
          *(_OWORD *)&v233.m256i_u64[1] = v222;
          v233.m256i_i8[0] = 5;
          v237 = 0;
          sub_140307860(v245, &v219, &v205, &v233);
          if ( v245[0] != 0xFF )
            sub_1400104F0(v245);
          v227.m256i_i64[3] = v220;
          *(_OWORD *)&v227.m256i_u64[1] = v219;
          v227.m256i_i8[0] = 5;
          v78 = v225;
          if ( v225 == (_QWORD)v224 )
            sub_1416890A0(&v224);
          v79 = *((_QWORD *)&v224 + 1);
          v80 = 32 * v78;
          v81 = *(_OWORD *)v227.m256i_i8;
          *(_OWORD *)(*((_QWORD *)&v224 + 1) + v80 + 16) = *(_OWORD *)&v227.m256i_u64[2];
          *(_OWORD *)(v79 + v80) = v81;
          v225 = v78 + 1;
          if ( v218 )
            sub_140001660(v226, v218, 1);
          sub_1400104F0(&v211);
          if ( v230 )
            sub_140001660(v232, v230, 1);
          if ( v229 )
            sub_140001660(*((_QWORD *)&v232 + 1), v229, 1);
        }
      }
      else if ( v28 == 4 && *(_DWORD *)v23 == 1954047348 )
      {
        v249 = 1;
        v29 = sub_141433D50(aText_10, 4, v26);
        if ( v29 )
        {
          if ( *(_BYTE *)v29 == 3 )
          {
            v30 = *(_QWORD *)(v29 + 16);
            v31 = *(_QWORD *)(v29 + 24);
            sub_140388B60((unsigned int)v245, v31, 0, 1, 1);
            v32 = *(_QWORD *)&v245[8];
            if ( *(_DWORD *)v245 == 1 )
            {
              v249 = 1;
              sub_1416C2D4B(*(_QWORD *)&v245[8], *(_QWORD *)&v245[16]);
            }
            v33 = *(_QWORD *)&v245[16];
            if ( v31 )
              sub_141684120(*(_QWORD *)&v245[16], v30, v31);
            *(_QWORD *)v245 = v32;
            *(_QWORD *)&v245[8] = v33;
            *(_QWORD *)&v245[16] = v31;
            v249 = 1;
            sub_1403B1EC0(&v202, v245);
          }
        }
      }
    }
  }
  v227.m256i_i64[0] = 0;
  v227.m256i_i64[2] = 0;
  nullsub_1(v23);
  v174 = (_DWORD *)sub_140001650(4, 1);
  if ( !v174 )
  {
    v251 = 1;
    v250 = 1;
    sub_1416C2D4B(1, 4);
  }
  *v174 = 1701605234;
  v233.m256i_i64[0] = 4;
  v233.m256i_i64[1] = (__int64)v174;
  v233.m256i_i64[2] = 4;
  nullsub_1(v175);
  v176 = sub_140001650(9, 1);
  v230 = v176;
  if ( !v176 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v176 = 0x6E61747369737361LL;
  *(_BYTE *)(v176 + 8) = 116;
  *(_QWORD *)&v245[8] = 9;
  *(_QWORD *)&v245[16] = v176;
  *(_QWORD *)&v245[24] = 9;
  v245[0] = 3;
  sub_140307860(&v231, &v227, &v233, v245);
  if ( v231.m256i_i8[0] != -1 )
  {
    v251 = 1;
    v250 = 1;
    sub_1400104F0(&v231);
  }
  nullsub_1(v177);
  v178 = (_DWORD *)sub_140001650(7, 1);
  if ( !v178 )
  {
    v251 = 1;
    v250 = 1;
    sub_1416C2D4B(1, 7);
  }
  *(_DWORD *)((char *)v178 + 3) = 1953391988;
  *v178 = 1953394531;
  v233.m256i_i64[0] = 7;
  v233.m256i_i64[1] = (__int64)v178;
  v233.m256i_i64[2] = 7;
  if ( v204 )
  {
    v236 = 1;
    sub_140440300((unsigned int)&v231, v203, v204, (unsigned int)asc_1417A47C8, 1);
    *(_QWORD *)&v245[24] = v231.m256i_i64[2];
    *(_OWORD *)&v245[8] = *(_OWORD *)v231.m256i_i8;
    v179 = 3;
  }
  else
  {
    v179 = 0;
  }
  v245[0] = v179;
  v236 = 0;
  sub_140307860(&v231, &v227, &v233, v245);
  if ( v231.m256i_i8[0] != -1 )
  {
    v251 = 1;
    v250 = 1;
    sub_1400104F0(&v231);
  }
  if ( v225 )
  {
    nullsub_1(v181);
    v182 = (void *)sub_140001650(10, 1);
    if ( !v182 )
    {
      v251 = 1;
      v250 = 1;
      sub_1416C2D4B(1, 10);
    }
    qmemcpy(v182, "tool_calls", 10);
    v233.m256i_i64[0] = 10;
    v233.m256i_i64[1] = (__int64)v182;
    v233.m256i_i64[2] = 10;
    *(_QWORD *)&v245[24] = v225;
    *(_OWORD *)&v245[8] = v224;
    v245[0] = 4;
    v251 = 0;
    v250 = 1;
    sub_140307860(&v231, &v227, &v233, v245);
    if ( v231.m256i_i8[0] != -1 )
    {
      v251 = 0;
      v250 = 1;
      sub_1400104F0(&v231);
    }
    *(_QWORD *)&v245[24] = v227.m256i_i64[2];
    *(_OWORD *)&v245[8] = *(_OWORD *)v227.m256i_i8;
    v245[0] = 5;
    v183 = a2[2];
    if ( v183 == *a2 )
      sub_1416890A0(a2);
    v184 = a2[1];
    v185 = 32 * v183;
    v186 = *(_OWORD *)v245;
    *(_OWORD *)(v184 + v185 + 16) = *(_OWORD *)&v245[16];
    *(_OWORD *)(v184 + v185) = v186;
    a2[2] = v183 + 1;
  }
  else
  {
    *(_QWORD *)&v245[24] = v227.m256i_i64[2];
    *(_OWORD *)&v245[8] = *(_OWORD *)v227.m256i_i8;
    v245[0] = 5;
    v251 = 1;
    v250 = 0;
    sub_1409CF090(a2, (__int128 *)v245);
    sub_140349B20(&v224);
  }
  v187 = v204;
  if ( v204 )
  {
    v188 = (_QWORD *)(v203 + 8);
    do
    {
      v189 = *(v188 - 1);
      if ( v189 )
        sub_140001660(*v188, v189, 1);
      v188 += 3;
      --v187;
    }
    while ( v187 );
  }
  v190 = v202;
  if ( v202 )
  {
    v103 = v203;
    goto LABEL_268;
  }
  return sub_1400104F0(&v212);
}