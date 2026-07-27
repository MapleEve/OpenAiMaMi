// module: codexmate_lib/core/repository
// addr: 0x1403c29c0
// name: sub_1403C29C0
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1403C29C0(_OWORD *a1, __int64 a2, __int64 a3, void *a4, char a5)
{
  unsigned int v5; // r15d
  int v6; // esi
  int v7; // r14d
  unsigned int v8; // eax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rdi
  char v12; // bl
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  _BYTE *v27; // rdx
  unsigned int v28; // ecx
  int v29; // r8d
  unsigned int v30; // r9d
  unsigned int v31; // r10d
  unsigned int v32; // r11d
  unsigned int v33; // r15d
  unsigned int v34; // r12d
  int v35; // edi
  bool v36; // r14
  bool v37; // r13
  char v38; // di
  unsigned int v39; // r14d
  unsigned int v40; // r14d
  __int64 v41; // rdi
  unsigned int v42; // r14d
  unsigned int v43; // r14d
  unsigned __int64 v44; // rax
  _QWORD *v45; // rbx
  _QWORD *v46; // r15
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // r8
  char v50; // r9
  __int64 v51; // r10
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdx
  _OWORD *v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rsi
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdi
  _QWORD *v65; // r14
  __int64 v66; // r13
  __int64 v67; // r15
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned int v71; // r12d
  char v72; // al
  __int64 v73; // rsi
  __int64 v74; // rcx
  char v75; // al
  __int64 v76; // rdi
  _OWORD *v77; // rcx
  _OWORD *v78; // rcx
  char v79; // bl
  unsigned __int64 v80; // rsi
  char v81; // al
  __int64 v82; // rdx
  char v83; // si
  int v84; // eax
  int v85; // edx
  _QWORD *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // rdi
  int v90; // edx
  __int64 v91; // rbx
  char v92; // si
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdi
  unsigned __int64 v97; // rdx
  __int64 v98; // rdi
  __int64 v99; // r14
  __int64 v100; // rdi
  __int64 v101; // rsi
  int v102; // edx
  int v103; // ecx
  unsigned int v104; // ecx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  int v109; // edx
  __int64 v110; // rax
  __int64 v111; // rsi
  __int64 v112; // r14
  __int64 v113; // rcx
  unsigned __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rdi
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  int v122; // edx
  __int64 v123; // rax
  __int128 v124; // xmm0
  __int128 v125; // xmm1
  _OWORD *v126; // rax
  _QWORD *v127; // rdi
  __int64 v128; // rdx
  __int64 result; // rax
  __int64 v130; // rdi
  __int128 v131; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v132; // [rsp+40h] [rbp-40h]
  _OWORD v133[6]; // [rsp+128h] [rbp+A8h]
  __int128 v134; // [rsp+1A0h] [rbp+120h]
  __int128 v135; // [rsp+1B0h] [rbp+130h]
  __int128 v136; // [rsp+1C0h] [rbp+140h]
  __int128 v137; // [rsp+1D0h] [rbp+150h]
  __int64 v138; // [rsp+1E0h] [rbp+160h]
  __int64 v139; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v140; // [rsp+1F8h] [rbp+178h]
  __int64 v141; // [rsp+200h] [rbp+180h]
  __int64 v142; // [rsp+208h] [rbp+188h] BYREF
  _QWORD *v143; // [rsp+210h] [rbp+190h]
  __int64 v144; // [rsp+218h] [rbp+198h]
  _OWORD v145[2]; // [rsp+220h] [rbp+1A0h] BYREF
  _OWORD v146[2]; // [rsp+240h] [rbp+1C0h] BYREF
  void *v147; // [rsp+260h] [rbp+1E0h]
  __int64 v148; // [rsp+268h] [rbp+1E8h]
  __int64 v149; // [rsp+270h] [rbp+1F0h]
  unsigned __int64 v150; // [rsp+278h] [rbp+1F8h]
  _QWORD *v151; // [rsp+280h] [rbp+200h]
  __int64 v152; // [rsp+288h] [rbp+208h]
  _BYTE v153[48]; // [rsp+290h] [rbp+210h] BYREF
  char *v154; // [rsp+2C0h] [rbp+240h]
  int v155; // [rsp+2D8h] [rbp+258h]
  __int64 v156; // [rsp+2E8h] [rbp+268h]
  __int64 v157; // [rsp+2F0h] [rbp+270h]
  __int64 v158; // [rsp+300h] [rbp+280h]
  __int64 v159; // [rsp+308h] [rbp+288h]
  __int64 v160; // [rsp+318h] [rbp+298h]
  __int64 v161; // [rsp+320h] [rbp+2A0h]
  __int64 v162; // [rsp+330h] [rbp+2B0h]
  __int64 v163; // [rsp+338h] [rbp+2B8h]
  __int64 v164; // [rsp+348h] [rbp+2C8h]
  __int64 v165; // [rsp+350h] [rbp+2D0h]
  _DWORD v166[22]; // [rsp+390h] [rbp+310h] BYREF
  char v167; // [rsp+3E8h] [rbp+368h]
  unsigned __int64 v168; // [rsp+3F0h] [rbp+370h]
  char v169; // [rsp+3F8h] [rbp+378h]
  _QWORD *v170; // [rsp+400h] [rbp+380h] BYREF
  _QWORD *v171; // [rsp+408h] [rbp+388h]
  __int64 v172; // [rsp+410h] [rbp+390h]
  _QWORD *v173; // [rsp+418h] [rbp+398h]
  __int64 v174; // [rsp+420h] [rbp+3A0h] BYREF
  __int128 v175; // [rsp+428h] [rbp+3A8h]
  char v176; // [rsp+438h] [rbp+3B8h]
  __int128 v177; // [rsp+440h] [rbp+3C0h] BYREF
  __int128 v178; // [rsp+450h] [rbp+3D0h]
  __int128 v179; // [rsp+460h] [rbp+3E0h]
  __int128 v180; // [rsp+470h] [rbp+3F0h]
  __int128 v181; // [rsp+480h] [rbp+400h]
  __int128 v182; // [rsp+490h] [rbp+410h]
  __int64 v183; // [rsp+4A0h] [rbp+420h]
  __int64 v184; // [rsp+4A8h] [rbp+428h]
  char v185; // [rsp+4B0h] [rbp+430h]
  __int128 v186; // [rsp+4B8h] [rbp+438h]
  __int64 v187; // [rsp+4C8h] [rbp+448h]
  __int64 v188; // [rsp+4D0h] [rbp+450h]
  char v189; // [rsp+4D8h] [rbp+458h]
  _QWORD *v190; // [rsp+4E8h] [rbp+468h]
  _QWORD *v191; // [rsp+4F0h] [rbp+470h]
  __int64 v192; // [rsp+4F8h] [rbp+478h]
  _OWORD *v193; // [rsp+500h] [rbp+480h]
  __int64 v194; // [rsp+508h] [rbp+488h]
  __int64 v195; // [rsp+510h] [rbp+490h]
  int v196; // [rsp+51Ch] [rbp+49Ch] BYREF
  int v197; // [rsp+520h] [rbp+4A0h]
  int v198; // [rsp+524h] [rbp+4A4h]
  __int128 v199; // [rsp+528h] [rbp+4A8h]
  unsigned __int64 v200; // [rsp+538h] [rbp+4B8h]
  __int64 v201; // [rsp+540h] [rbp+4C0h]
  __int128 v202; // [rsp+548h] [rbp+4C8h] BYREF
  __int64 v203; // [rsp+558h] [rbp+4D8h]
  __int64 v204; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v205; // [rsp+568h] [rbp+4E8h]
  __int64 v206; // [rsp+570h] [rbp+4F0h]
  volatile signed __int64 *v207; // [rsp+578h] [rbp+4F8h] BYREF
  __int128 v208; // [rsp+580h] [rbp+500h] BYREF
  __int64 v209; // [rsp+590h] [rbp+510h]
  __int64 v210; // [rsp+5A0h] [rbp+520h]
  _QWORD *v211; // [rsp+5A8h] [rbp+528h]
  char v212; // [rsp+5B5h] [rbp+535h] BYREF
  char v213; // [rsp+5B6h] [rbp+536h] BYREF
  char v214; // [rsp+5B7h] [rbp+537h]
  _QWORD *v215; // [rsp+5B8h] [rbp+538h]
  __int64 v216; // [rsp+5C0h] [rbp+540h]
  char v217; // [rsp+5CCh] [rbp+54Ch]
  char v218; // [rsp+5CDh] [rbp+54Dh] BYREF
  char v219; // [rsp+5CEh] [rbp+54Eh]
  char v220; // [rsp+5CFh] [rbp+54Fh]
  __int64 v221; // [rsp+5D0h] [rbp+550h]

  v221 = -2;
  v147 = a4;
  v148 = a3;
  v216 = a2;
  v193 = a1;
  v213 = a5;
  sub_140FFA6E0(v153);
  v5 = *(_DWORD *)v153;
  v6 = (*(int *)v153 >> 13) - 1;
  v7 = 0;
  if ( *(int *)v153 >> 13 <= 0 )
  {
    v8 = (1 - (*(int *)v153 >> 13)) / 0x190u + 1;
    v6 += 400 * v8;
    v7 = -146097 * v8;
  }
  v9 = *(unsigned int *)&v153[4];
  v10 = *(unsigned int *)&v153[8];
  v212 = 1;
  v11 = v216 + 112;
  v12 = *(_BYTE *)(v216 + 136);
  if ( *(_QWORD *)(v216 + 112) == -1 )
  {
    v13 = -1;
  }
  else
  {
    sub_14149C500(v153, v216 + 112);
    v13 = *(_QWORD *)v153;
    v131 = *(_OWORD *)&v153[8];
  }
  v176 = v12;
  v174 = v13;
  v175 = v131;
  LODWORD(v210) = *(_DWORD *)(v216 + 824);
  sub_1403C0330(&v204, v216, 0);
  v14 = 1000
      * (v9 + 86400LL * (int)(((v6 / 100) >> 2) + ((1461 * v6) >> 2) + v7 + ((v5 >> 4) & 0x1FF) - v6 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v10) >> 50);
  if ( v206 )
  {
    v15 = (_QWORD *)v216;
    sub_14149BB70(v153, *(_QWORD *)(v216 + 560), *(_QWORD *)(v216 + 568));
    v146[1] = *(_OWORD *)&v153[16];
    v146[0] = *(_OWORD *)v153;
    sub_14149BB70(v153, v15[67], v15[68]);
    v145[1] = *(_OWORD *)&v153[16];
    v145[0] = *(_OWORD *)v153;
    nullsub_1(v16);
    v17 = sub_140001650(40, 8);
    if ( !v17 )
      sub_1416C2D31(8, 40);
    v150 = v14;
    *(_QWORD *)v17 = 1;
    *(_QWORD *)(v17 + 8) = 1;
    *(_OWORD *)(v17 + 16) = 0;
    *(_DWORD *)(v17 + 32) = 0;
    v207 = (volatile signed __int64 *)v17;
    *(_QWORD *)v153 = &v204;
    *(_QWORD *)&v153[8] = &v212;
    *(_QWORD *)&v153[16] = &v174;
    *(_QWORD *)&v153[24] = v146;
    *(_QWORD *)&v153[32] = v145;
    *(_QWORD *)&v153[40] = &v207;
    v154 = &v213;
    sub_1408C2710(&v142, v153, &off_141750878);
    v18 = v144;
    v19 = 368 * v144;
    v215 = v143;
    *(_QWORD *)v153 = v143;
    v211 = &v143[46 * v144];
    *(_QWORD *)&v153[8] = v211;
    *(_QWORD *)&v153[16] = v15 + 101;
    v217 = 1;
    sub_140311C40(&v139, v153);
    v219 = 1;
    v22 = sub_141470CD0(v21, v20);
    v23 = *(_BYTE *)(v22 + 16) == 1;
    v152 = v11;
    if ( v23 )
    {
      v24 = *(_QWORD *)v22;
      v25 = *(_QWORD *)(v22 + 8);
    }
    else
    {
      v219 = 1;
      v130 = v22;
      v24 = sub_141486EF0();
      v22 = v130;
      *(_QWORD *)v130 = v24;
      *(_QWORD *)(v130 + 8) = v25;
      *(_BYTE *)(v130 + 16) = 1;
    }
    *(_QWORD *)v22 = v24 + 1;
    *(_OWORD *)&v153[16] = *(&off_14174C6F0 + 1);
    *(_OWORD *)v153 = off_14174C6F0;
    *(_QWORD *)&v153[32] = v24;
    *(_QWORD *)&v153[40] = v25;
    *(_QWORD *)&v131 = v215;
    *((_QWORD *)&v131 + 1) = &v215[(unsigned __int64)v19 / 8];
    v132 = v15 + 101;
    sub_1409928F0(&v131, v153);
    v134 = *(_OWORD *)v153;
    v135 = *(_OWORD *)&v153[16];
    v136 = *(_OWORD *)&v153[32];
    v26 = v210 - v18;
    if ( v18 )
    {
      v27 = v215 + 45;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      do
      {
        v35 = v26;
        v36 = *((_DWORD *)v27 - 32) != 2;
        v37 = *(v27 - 112) < 2u;
        if ( v37 && v36 )
          v26 = v29;
        ++v26;
        if ( v37 && v36 )
        {
          v29 = v26;
          v26 = v35;
        }
        if ( *((_QWORD *)v27 - 45) )
        {
          v38 = *(v27 - 136);
          v39 = v28;
          if ( v38 )
            v39 = v31;
          v40 = v39 + 1;
          if ( v38 )
            v31 = v40;
          else
            v28 = v40;
          ++v30;
        }
        if ( *v27 == 1 )
        {
          v41 = *((_QWORD *)v27 - 13);
          v42 = v34;
          if ( v41 == -1 )
            v42 = v33;
          v43 = v42 + 1;
          if ( v41 != -1 )
            v34 = v43;
          ++v32;
          if ( (_DWORD)v41 == -1 )
            v33 = v43;
        }
        v27 += 368;
        --v18;
      }
      while ( v18 );
      v196 = v210;
      v197 = v29;
      v198 = v26;
      *(_QWORD *)&v199 = __PAIR64__(v28, v30);
      *((_QWORD *)&v199 + 1) = __PAIR64__(v32, v31);
      v200 = __PAIR64__(v34, v33);
      v44 = 0;
      v15 = (_QWORD *)v216;
      v45 = v215;
      v46 = &v215[(unsigned __int64)v19 / 8];
      do
      {
        v47 = v45[v44 / 8 + 29];
        if ( v47 != 2 )
        {
          v48 = v45[v44 / 8 + 44];
          if ( v48 < v15[103] )
          {
            v49 = v15[102];
            v50 = v45[v44 / 8 + 31];
            v51 = v45[v44 / 8 + 30];
            v52 = 352 * v48;
            *(_QWORD *)(v49 + v52 + 160) = v47;
            *(_QWORD *)(v49 + v52 + 168) = v51;
            *(_BYTE *)(v49 + v52 + 176) = v50;
          }
        }
        v44 += 368LL;
      }
      while ( v19 != v44 );
    }
    else
    {
      v196 = v210;
      v197 = 0;
      v198 = v210 - v18;
      v199 = 0;
      v200 = 0;
      v46 = v211;
      v45 = v215;
    }
    v170 = v45;
    v171 = v45;
    v172 = v142;
    v173 = v46;
    v190 = v15 + 107;
    v191 = v15 + 110;
    v151 = v15 + 96;
    v210 = 0;
LABEL_42:
    while ( v45 != v46 )
    {
      v60 = *v45;
      sub_141684120(&v131, v45 + 1, 360);
      if ( v60 == 2 )
      {
        v46 = v45 + 46;
        break;
      }
      v215 = v45 + 46;
      *(_QWORD *)v153 = v60;
      sub_141684120(&v153[8], &v131, 360);
      v61 = v205;
      v62 = v168;
      v63 = v205 - 296;
      v64 = 0;
      while ( -296 * v206 != v64 )
      {
        v64 -= 296;
        v65 = (_QWORD *)(v63 + 296);
        v23 = *(_QWORD *)(v63 + 584) == v168;
        v63 += 296;
        if ( v23 )
        {
          v171 = v215;
          v66 = v65[5];
          v67 = v65[6];
          v220 = 1;
          v71 = sub_1403BA970((_DWORD)v15, v168, v66, v67, (__int64)v153);
          v72 = v169;
          if ( v169 )
            ++*(_DWORD *)(v216 + 904);
          v73 = v61 - v64 - 264;
          LOBYTE(v71) = v210 | v71;
          v74 = v71;
          LOBYTE(v74) = v71 & 1;
          v210 = v74;
          if ( v166[0] != -1 )
          {
            v182 = v133[5];
            v181 = v133[4];
            v180 = v133[3];
            v179 = v133[2];
            v178 = v133[1];
            v177 = v133[0];
            *(_QWORD *)&v208 = 0;
            *((_QWORD *)&v208 + 1) = 1;
            v209 = 0;
            v203 = 1610612768;
            *(_QWORD *)&v202 = &v208;
            *((_QWORD *)&v202 + 1) = &off_141754110;
            v75 = sub_140B036A0(&v177, &v202);
            v76 = v216;
            if ( v75 )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_1,
                55,
                (unsigned int)&v218,
                (unsigned int)&unk_14174DE40,
                (__int64)&off_1417541C8);
            v138 = v209;
            v137 = v208;
            if ( (__int64)*v190 > 0 )
              sub_140001660(*(_QWORD *)(v216 + 864), *v190, 1);
            v77 = v190;
            v190[2] = v138;
            *v77 = v137;
            sub_14149C500(&v202, v73);
            v209 = v203;
            v208 = v202;
            if ( (__int64)*v191 > 0 )
              sub_140001660(*(_QWORD *)(v76 + 888), *v191, 1);
            v78 = v191;
            v191[2] = v209;
            *v78 = v208;
            if ( (_QWORD)v177 == 6 )
            {
              if ( (unsigned __int8)sub_141031770((char *)&v177 + 8)
                || (v79 = 1, (unsigned __int8)sub_141031800((char *)&v177 + 8)) )
              {
                v79 = 2;
              }
              v80 = v168;
              if ( (unsigned __int8)sub_141031770((char *)&v177 + 8)
                || (v81 = sub_141031800((char *)&v177 + 8), v82 = -1, v81) )
              {
                *(_QWORD *)&v208 = 0;
                *((_QWORD *)&v208 + 1) = 1;
                v209 = 0;
                v203 = 1610612768;
                *(_QWORD *)&v202 = &v208;
                *((_QWORD *)&v202 + 1) = &off_141754110;
                if ( (unsigned __int8)sub_140B036A0(&v177, &v202) )
                  sub_1416C3060(
                    (unsigned int)aADisplayImplem_1,
                    55,
                    (unsigned int)&v218,
                    (unsigned int)&unk_14174DE40,
                    (__int64)&off_1417541C8);
                v192 = *((_QWORD *)&v208 + 1);
                v82 = v208;
                v149 = v209;
              }
              if ( v80 >= *(_QWORD *)(v76 + 824) )
              {
LABEL_82:
                if ( v82 > 0 )
                  sub_140001660(v192, v82, 1);
                goto LABEL_84;
              }
            }
            else
            {
              v82 = -1;
              v79 = 1;
              v80 = v168;
              if ( v168 >= *(_QWORD *)(v76 + 824) )
                goto LABEL_82;
            }
            if ( !*(_BYTE *)(*(_QWORD *)(v76 + 816) + 352 * v80 + 337) )
              goto LABEL_82;
            *(_BYTE *)(v76 + 1064) = v79;
            if ( *(__int64 *)(v76 + 912) > 0 )
            {
              v88 = v82;
              sub_140001660(*(_QWORD *)(v76 + 920), *(_QWORD *)(v76 + 912), 1);
              v82 = v88;
            }
            *(_QWORD *)(v76 + 912) = v82;
            *(_QWORD *)(v76 + 920) = v192;
            *(_QWORD *)(v76 + 928) = v149;
LABEL_84:
            v220 = 0;
            sub_14034ED40(&v177);
LABEL_85:
            v15 = (_QWORD *)v216;
            goto LABEL_86;
          }
          if ( v166[2] == -1 )
          {
            if ( v72 )
            {
              v89 = v216;
              ++*(_DWORD *)(v216 + 908);
              if ( v62 < *(_QWORD *)(v89 + 824) )
              {
                v74 = 352 * v62;
                if ( *(_BYTE *)(*(_QWORD *)(v89 + 816) + 352 * v62 + 337) == 1 )
                {
                  *(_BYTE *)(v89 + 1064) = 1;
                  v68 = *(_QWORD *)(v89 + 912);
                  if ( v68 > 0 )
                    sub_140001660(*(_QWORD *)(v89 + 920), v68, 1);
                  *(_QWORD *)(v89 + 912) = -1;
                }
              }
              v220 = 1;
              LODWORD(v202) = sub_141475580(v74, v68, v69, v70);
              DWORD1(v202) = v90;
              v220 = 1;
              sub_141475530(&v177, &v202, 3577643008LL, 27111902);
              if ( (_BYTE)v177 )
                v91 = 0;
              else
                v91 = *((_QWORD *)&v177 + 1);
              v97 = *(_QWORD *)(v216 + 824);
              if ( v168 >= v97 )
              {
                v220 = 1;
                sub_1416C30E3(v168, v97, &off_141750890);
              }
              v98 = *(_QWORD *)(v216 + 816);
              v99 = 352 * v168;
              *(_QWORD *)(v98 + v99 + 80) = 2;
              *(_QWORD *)(v98 + v99 + 120) = 2;
              *(_BYTE *)(v98 + v99 + 338) = 1;
              *(_QWORD *)(v98 + v99 + 64) = 1;
              *(_QWORD *)(v98 + v99 + 72) = v91;
              v220 = 1;
              sub_14149C500(&v202, v73);
              v100 = v99 + v98;
              v101 = *(_QWORD *)(v100 + 160);
              if ( v101 != 2 )
              {
                v214 = *(_BYTE *)(v100 + 176);
                v194 = *(_QWORD *)(v100 + 168);
              }
              sub_140FFA6E0(&v208);
              v102 = ((int)v208 >> 13) - 1;
              v103 = 0;
              if ( (int)v208 >> 13 <= 0 )
              {
                v104 = (1 - ((int)v208 >> 13)) / 0x190u + 1;
                v102 += 400 * v104;
                v103 = -146097 * v104;
              }
              v187 = v203;
              v186 = v202;
              v188 = v91;
              v189 = 1;
              *(_QWORD *)&v178 = 2;
              *((_QWORD *)&v180 + 1) = 2;
              v183 = v101;
              v184 = v194;
              v185 = v214;
              *(_QWORD *)&v177 = 1;
              *((_QWORD *)&v177 + 1) = 1000
                                     * (DWORD1(v208)
                                      + 86400LL
                                      * (int)(((v102 / 100) >> 2)
                                            + ((1461 * v102) >> 2)
                                            + v103
                                            + (((unsigned int)v208 >> 4) & 0x1FF)
                                            - v102 / 100
                                            - 719163))
                                     + DWORD2(v208) / 0xF4240uLL;
              v220 = 1;
              sub_1403C6C20(v151, &v177, v91);
              goto LABEL_85;
            }
            v15 = (_QWORD *)v216;
            if ( v62 < *(_QWORD *)(v216 + 824) && *(_BYTE *)(*(_QWORD *)(v216 + 816) + 352 * v62 + 337) == 1 )
            {
              v220 = 1;
              sub_1409D7870(&v177, v152, 0);
              v92 = BYTE8(v180);
              v93 = v201;
              if ( !BYTE8(v180) )
                v93 = v179;
              v201 = v93;
              v94 = *((_QWORD *)&v178 + 1);
              v95 = v195;
              if ( !BYTE8(v180) )
                v95 = *((_QWORD *)&v179 + 1);
              v195 = v95;
              if ( BYTE8(v180) )
                v94 = -1;
              v15 = (_QWORD *)v216;
              if ( v62 < *(_QWORD *)(v216 + 824) && *(_BYTE *)(*(_QWORD *)(v216 + 816) + 352 * v62 + 337) )
              {
                *(_BYTE *)(v216 + 1064) = 2 - BYTE8(v180);
                v46 = v211;
                v45 = v215;
                if ( (__int64)v15[114] > 0 )
                {
                  v96 = v94;
                  sub_140001660(v15[115], v15[114], 1);
                  v94 = v96;
                }
                v15[114] = v94;
                v15[115] = v201;
                v15[116] = v195;
              }
              else
              {
                v46 = v211;
                v45 = v215;
                if ( v94 > 0 )
                  sub_140001660(v201, v94, 1);
              }
              if ( (_QWORD)v177 )
                sub_140001660(*((_QWORD *)&v177 + 1), v177, 1);
              if ( v92 && *((_QWORD *)&v178 + 1) )
                sub_140001660(v179, *((_QWORD *)&v178 + 1), 1);
            }
            else
            {
LABEL_86:
              v46 = v211;
              v45 = v215;
            }
          }
          else
          {
            v181 = *(_OWORD *)((char *)&v133[4] + 8);
            v180 = *(_OWORD *)((char *)&v133[3] + 8);
            v179 = *(_OWORD *)((char *)&v133[2] + 8);
            v178 = *(_OWORD *)((char *)&v133[1] + 8);
            v177 = *(_OWORD *)((char *)v133 + 8);
            v83 = v167;
            v84 = *(_DWORD *)((char *)&v133[5] + 9);
            v85 = HIDWORD(v133[5]);
            v86 = (_QWORD *)v216;
            ++*(_DWORD *)(v216 + 908);
            DWORD1(v182) = v85;
            *(_DWORD *)((char *)&v182 + 1) = v84;
            LOBYTE(v182) = v83;
            v220 = 1;
            sub_1403B99E0(v86, v148, v147, v65, (__int64)&v177);
            if ( v83 != 8 )
            {
              v220 = 1;
              LOBYTE(v71) = (sub_1403C22C0(v216, v62, v66, v67) | v71) & 1;
              v210 = v71;
            }
            v15 = (_QWORD *)v216;
            if ( v62 >= *(_QWORD *)(v216 + 824) )
              goto LABEL_86;
            v46 = v211;
            if ( *(_BYTE *)(*(_QWORD *)(v216 + 816) + 352 * v62 + 337) == 1 )
            {
              *(_BYTE *)(v216 + 1064) = 1;
              v87 = v15[114];
              v45 = v215;
              if ( v87 > 0 )
                sub_140001660(v15[115], v87, 1);
              v15[114] = -1;
            }
            else
            {
              v45 = v215;
            }
          }
          if ( v155 == 2 )
            goto LABEL_42;
LABEL_88:
          if ( v156 )
            sub_140001660(v157, v156, 1);
          if ( v158 )
            sub_140001660(v159, v158, 1);
          if ( v160 > 0 )
            sub_140001660(v161, v160, 1);
          if ( v162 > 0 )
            sub_140001660(v163, v162, 1);
          if ( v164 > 0 )
            sub_140001660(v165, v164, 1);
          goto LABEL_42;
        }
      }
      if ( v166[0] != -1 )
        sub_14034ED40(v166);
      v45 = v215;
      if ( v155 != 2 )
        goto LABEL_88;
    }
    v171 = v46;
    sub_140332C60(&v170);
    if ( (v210 & 1) != 0 )
    {
      LODWORD(v131) = sub_141475580(v106, v105, v107, v108);
      DWORD1(v131) = v109;
      sub_141475530(v153, &v131, 3577643008LL, 27111902);
      if ( v153[0] )
        v110 = 0;
      else
        v110 = *(_QWORD *)&v153[8];
      v15[94] = v110;
    }
    v111 = v140;
    v112 = v141;
    sub_1403C1960(v15, v140, v141);
    v113 = v15[102];
    v114 = v15[103];
    *(_QWORD *)v153 = &v218;
    if ( v114 >= 2 )
    {
      if ( v114 >= 0x15 )
        sub_140B59540(v113, v114, v153);
      else
        sub_140556B80(v113, v114, 1, v153);
    }
    v115 = v15[102] - 352LL;
    v116 = 352LL * v15[103];
    while ( v116 )
    {
      v116 -= 352;
      v23 = *(_BYTE *)(v115 + 689) == 1;
      v115 += 352;
      if ( v23 )
      {
        sub_14041FEF0(v153);
        v117 = *(_QWORD *)v153;
        sub_141684120(&v131, &v153[8], 344);
        if ( *((_DWORD *)v15 + 38) == 2 )
          goto LABEL_148;
        goto LABEL_147;
      }
    }
    v117 = 2;
    if ( *((_DWORD *)v15 + 38) == 2 )
      goto LABEL_148;
LABEL_147:
    sub_14034EA30(v15 + 19);
LABEL_148:
    v15[19] = v117;
    sub_141684120(v15 + 20, &v131, 344);
    LODWORD(v131) = sub_141475580(v119, v118, v120, v121);
    DWORD1(v131) = v122;
    sub_141475530(v153, &v131, 3577643008LL, 27111902);
    if ( v153[0] )
      v123 = 0;
    else
      v123 = *(_QWORD *)&v153[8];
    v15[132] = v123;
    *(_QWORD *)v153 = -1;
    sub_1403BA4B0((_DWORD)v15, 0, (unsigned int)v153, v150, (__int64)&v196);
    v124 = v134;
    v125 = v135;
    v126 = v193;
    v193[2] = v136;
    v126[1] = v125;
    *v126 = v124;
    if ( v112 )
    {
      v127 = (_QWORD *)(v111 + 8);
      do
      {
        v128 = *(v127 - 1);
        if ( v128 )
          sub_140001660(*v127, v128, 1);
        v127 += 3;
        --v112;
      }
      while ( v112 );
    }
    if ( v139 )
      sub_140001660(v111, 24 * v139, 8);
    if ( !_InterlockedDecrement64(v207) )
      sub_1405762F0(&v207);
    if ( *(_QWORD *)&v145[0] )
      sub_140001660(*((_QWORD *)&v145[0] + 1), *(_QWORD *)&v145[0], 1);
    if ( *(_QWORD *)&v146[0] )
      sub_140001660(*((_QWORD *)&v146[0] + 1), *(_QWORD *)&v146[0], 1);
    sub_1402C8DF0(v205, v206);
  }
  else
  {
    *(_QWORD *)v153 = (unsigned int)v210;
    *(_DWORD *)&v153[8] = v210;
    memset(&v153[12], 0, 24);
    *(_QWORD *)&v131 = -1;
    sub_1403BA4B0(v216, 0, (unsigned int)&v131, v14, (__int64)v153);
    v55 = sub_141470CD0(v54, v53);
    v56 = v55;
    if ( *(_BYTE *)(v55 + 16) == 1 )
    {
      v57 = *(_QWORD *)v55;
      v58 = *(_QWORD *)(v56 + 8);
    }
    else
    {
      v57 = sub_141486EF0();
      *(_QWORD *)v56 = v57;
      *(_QWORD *)(v56 + 8) = v58;
      *(_BYTE *)(v56 + 16) = 1;
    }
    *(_QWORD *)v56 = v57 + 1;
    v59 = v193;
    v193[1] = *(&off_14174C6F0 + 1);
    *v59 = off_14174C6F0;
    *((_QWORD *)v59 + 4) = v57;
    *((_QWORD *)v59 + 5) = v58;
    sub_1402C8DF0(v205, v206);
  }
  result = v204;
  if ( v204 )
    result = sub_140001660(v205, 296 * v204, 8);
  if ( v174 > 0 )
    return sub_140001660(v175, v174, 1);
  return result;
}