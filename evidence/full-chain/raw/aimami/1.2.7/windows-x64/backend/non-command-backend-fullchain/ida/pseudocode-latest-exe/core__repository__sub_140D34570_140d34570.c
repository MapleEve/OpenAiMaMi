// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d34570 | successor of pre-update 0x140218b50 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
_OWORD *__fastcall sub_140D34570(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r14d
  int v6; // r15d
  int v7; // esi
  unsigned int v8; // eax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rdi
  char v12; // bl
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r13
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r15
  unsigned __int64 v30; // rbx
  _BYTE *v31; // r14
  __int64 v32; // r12
  unsigned __int64 v33; // rax
  int v34; // eax
  _BYTE *v35; // rdx
  unsigned int v36; // ecx
  int v37; // r8d
  unsigned int v38; // r9d
  unsigned int v39; // r10d
  unsigned int v40; // r11d
  unsigned int v41; // esi
  unsigned int v42; // ebx
  int v43; // edi
  bool v44; // r14
  bool v45; // r15
  char v46; // di
  unsigned int v47; // r14d
  unsigned int v48; // r14d
  __int64 v49; // rdi
  unsigned int v50; // r14d
  unsigned int v51; // r14d
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  _OWORD *v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  _QWORD *i; // r14
  _QWORD *v71; // r13
  __int64 v72; // r12
  unsigned __int64 v73; // rsi
  __int64 v74; // rdi
  char v75; // r15
  __int64 v76; // rbx
  __int64 v77; // r13
  __int64 v78; // rsi
  __int64 v79; // rdx
  _QWORD *v80; // r15
  _BYTE *v81; // rdi
  _QWORD *v82; // r12
  _QWORD *v83; // rdx
  _QWORD *v84; // rsi
  __int64 v85; // r15
  __int64 v86; // rsi
  unsigned __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // r13
  __int64 v90; // r15
  bool v91; // zf
  _BYTE *v92; // r14
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  unsigned int v97; // r12d
  char v98; // al
  __int64 v99; // rsi
  __int64 v100; // rcx
  char v101; // al
  __int64 v102; // rdi
  __int64 v103; // rdx
  _OWORD *v104; // rcx
  __int64 v105; // rdx
  _OWORD *v106; // rcx
  char v107; // bl
  unsigned __int64 v108; // rsi
  char v109; // al
  __int64 v110; // rdx
  char v111; // si
  int v112; // eax
  int v113; // edx
  int v114; // ecx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rdi
  int v121; // edx
  __int64 v122; // rbx
  char v123; // si
  __int64 v124; // r13
  __int64 v125; // rcx
  __int64 v126; // rdx
  bool v127; // cf
  __int64 v128; // rax
  __int64 v129; // rbx
  __int64 v130; // rdi
  unsigned __int64 v131; // rdx
  __int64 v132; // r15
  __int64 v133; // rdi
  __int64 v134; // r15
  __int64 v135; // rax
  char v136; // si
  __int64 v137; // r12
  __int64 v138; // rdi
  int v139; // edx
  int v140; // ecx
  unsigned int v141; // ecx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  int v146; // edx
  __int64 v147; // rax
  __int64 v148; // r14
  __int64 v149; // rsi
  __int64 v150; // rcx
  unsigned __int64 v151; // rdx
  __int64 v152; // rbx
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 *v155; // rdx
  __int64 v156; // rdi
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  int v160; // edx
  __int64 v161; // rax
  int v162; // ecx
  __int128 v163; // xmm0
  __int128 v164; // xmm1
  _OWORD *v165; // rax
  _QWORD *v166; // rdi
  __int64 v167; // rdx
  __int64 v168; // rdi
  __int64 v169; // rsi
  __int64 v170; // rdx
  __int64 v171; // rdx
  __int64 v172; // rdx
  __int64 v174; // rsi
  __int128 v175; // [rsp+30h] [rbp-50h] BYREF
  __int128 v176; // [rsp+40h] [rbp-40h]
  __int128 v177; // [rsp+50h] [rbp-30h]
  __int128 v178; // [rsp+60h] [rbp-20h]
  __int128 v179; // [rsp+70h] [rbp-10h]
  __int128 v180; // [rsp+80h] [rbp+0h]
  __int128 v181; // [rsp+1D0h] [rbp+150h]
  __int64 v182; // [rsp+1E0h] [rbp+160h]
  __int64 v183; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v184; // [rsp+1F8h] [rbp+178h]
  __int64 v185; // [rsp+200h] [rbp+180h]
  __int64 v186; // [rsp+208h] [rbp+188h] BYREF
  __int64 v187; // [rsp+210h] [rbp+190h]
  __int64 v188; // [rsp+218h] [rbp+198h]
  _OWORD v189[2]; // [rsp+220h] [rbp+1A0h] BYREF
  _OWORD v190[2]; // [rsp+240h] [rbp+1C0h] BYREF
  _BYTE v191[48]; // [rsp+260h] [rbp+1E0h] BYREF
  _BYTE *v192; // [rsp+290h] [rbp+210h]
  char v193; // [rsp+2C0h] [rbp+240h]
  char v194[72]; // [rsp+2C8h] [rbp+248h] BYREF
  int v195[46]; // [rsp+310h] [rbp+290h] BYREF
  int v196; // [rsp+3C8h] [rbp+348h]
  __int64 v197; // [rsp+3D8h] [rbp+358h]
  __int64 v198; // [rsp+3E0h] [rbp+360h]
  unsigned __int64 v199; // [rsp+3F8h] [rbp+378h]
  char v200; // [rsp+400h] [rbp+380h]
  __int128 v201; // [rsp+410h] [rbp+390h]
  __int128 v202; // [rsp+420h] [rbp+3A0h]
  __int128 v203; // [rsp+430h] [rbp+3B0h]
  __int64 v204; // [rsp+440h] [rbp+3C0h]
  _QWORD *v205; // [rsp+448h] [rbp+3C8h]
  __int64 v206; // [rsp+450h] [rbp+3D0h]
  _QWORD *v207; // [rsp+458h] [rbp+3D8h]
  __int64 v208; // [rsp+460h] [rbp+3E0h]
  __int64 v209; // [rsp+468h] [rbp+3E8h]
  __int64 v210; // [rsp+470h] [rbp+3F0h]
  unsigned __int64 v211; // [rsp+478h] [rbp+3F8h]
  __int64 v212; // [rsp+480h] [rbp+400h]
  __int64 v213; // [rsp+488h] [rbp+408h]
  __int64 v214; // [rsp+490h] [rbp+410h]
  __int64 v215; // [rsp+498h] [rbp+418h]
  __int64 v216; // [rsp+4A0h] [rbp+420h] BYREF
  __int128 v217; // [rsp+4A8h] [rbp+428h]
  char v218; // [rsp+4B8h] [rbp+438h]
  __int128 v219; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v220; // [rsp+4D0h] [rbp+450h]
  __int128 v221; // [rsp+4E0h] [rbp+460h]
  __int128 v222; // [rsp+4F0h] [rbp+470h]
  __int128 v223; // [rsp+500h] [rbp+480h]
  __int128 v224; // [rsp+510h] [rbp+490h]
  __int64 v225; // [rsp+520h] [rbp+4A0h]
  __int64 v226; // [rsp+528h] [rbp+4A8h]
  __int64 v227; // [rsp+530h] [rbp+4B0h]
  __int64 v228; // [rsp+538h] [rbp+4B8h]
  __int64 v229; // [rsp+540h] [rbp+4C0h]
  char v230; // [rsp+548h] [rbp+4C8h]
  __int128 v231; // [rsp+550h] [rbp+4D0h]
  __int64 v232; // [rsp+560h] [rbp+4E0h]
  int v233; // [rsp+568h] [rbp+4E8h]
  __int64 v234; // [rsp+570h] [rbp+4F0h]
  char v235; // [rsp+578h] [rbp+4F8h]
  _QWORD *v236; // [rsp+588h] [rbp+508h]
  _QWORD *v237; // [rsp+590h] [rbp+510h]
  __int64 v238; // [rsp+598h] [rbp+518h]
  __int64 v239; // [rsp+5A0h] [rbp+520h]
  __int64 v240; // [rsp+5A8h] [rbp+528h]
  int v241; // [rsp+5B4h] [rbp+534h] BYREF
  int v242; // [rsp+5B8h] [rbp+538h]
  int v243; // [rsp+5BCh] [rbp+53Ch]
  __int128 v244; // [rsp+5C0h] [rbp+540h]
  unsigned __int64 v245; // [rsp+5D0h] [rbp+550h]
  __int64 v246; // [rsp+5D8h] [rbp+558h] BYREF
  __int64 v247; // [rsp+5E0h] [rbp+560h]
  __int64 v248; // [rsp+5E8h] [rbp+568h]
  __int64 v249; // [rsp+5F0h] [rbp+570h]
  _OWORD *v250; // [rsp+5F8h] [rbp+578h]
  __int64 v251; // [rsp+600h] [rbp+580h]
  __int64 v252; // [rsp+608h] [rbp+588h]
  __int64 v253; // [rsp+610h] [rbp+590h]
  __int64 v254; // [rsp+618h] [rbp+598h]
  volatile signed __int64 *v255; // [rsp+620h] [rbp+5A0h] BYREF
  __int64 v256; // [rsp+628h] [rbp+5A8h]
  __int128 v257; // [rsp+630h] [rbp+5B0h] BYREF
  __int64 v258; // [rsp+640h] [rbp+5C0h]
  __int64 v259; // [rsp+648h] [rbp+5C8h]
  __int128 v260; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v261; // [rsp+660h] [rbp+5E0h]
  _QWORD *v262; // [rsp+670h] [rbp+5F0h]
  char v263; // [rsp+67Ch] [rbp+5FCh] BYREF
  _BYTE v264[2]; // [rsp+67Dh] [rbp+5FDh] BYREF
  char v265; // [rsp+67Fh] [rbp+5FFh]
  _QWORD *v266; // [rsp+680h] [rbp+600h]
  char v267; // [rsp+68Eh] [rbp+60Eh]
  char v268; // [rsp+68Fh] [rbp+60Fh] BYREF
  __int64 v269; // [rsp+690h] [rbp+610h]
  char v270; // [rsp+69Eh] [rbp+61Eh]
  char v271; // [rsp+69Fh] [rbp+61Fh]
  __int64 v272; // [rsp+6A0h] [rbp+620h]

  v272 = -2;
  v208 = a4;
  v209 = a3;
  v269 = a2;
  v250 = a1;
  v264[0] = a5;
  sub_1414331D0(v191);
  v5 = *(_DWORD *)v191;
  v6 = (*(int *)v191 >> 13) - 1;
  v7 = 0;
  if ( *(int *)v191 >> 13 <= 0 )
  {
    v8 = (1 - (*(int *)v191 >> 13)) / 0x190u + 1;
    v6 += 400 * v8;
    v7 = -146097 * v8;
  }
  v9 = *(unsigned int *)&v191[4];
  v10 = *(unsigned int *)&v191[8];
  v263 = 1;
  v11 = v269 + 112;
  v12 = *(_BYTE *)(v269 + 136);
  if ( *(_QWORD *)(v269 + 112) == -1 )
  {
    v13 = -1;
  }
  else
  {
    sub_1416DB410(v191, v269 + 112);
    v13 = *(_QWORD *)v191;
    v175 = *(_OWORD *)&v191[8];
  }
  v218 = v12;
  v216 = v13;
  v217 = v175;
  LODWORD(v266) = *(_DWORD *)(v269 + 888);
  sub_140D30D30(&v246, v269, 0);
  v14 = 1000
      * (v9 + 86400LL * (int)(((v6 / 100) >> 2) + ((1461 * v6) >> 2) + v7 + ((v5 >> 4) & 0x1FF) - v6 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v10) >> 50);
  if ( v248 )
  {
    v213 = v11;
    v15 = (_QWORD *)v269;
    sub_1416DA980(v191, *(_QWORD *)(v269 + 624), *(_QWORD *)(v269 + 632));
    v190[1] = *(_OWORD *)&v191[16];
    v190[0] = *(_OWORD *)v191;
    sub_1416DA980(v191, v15[75], v15[76]);
    v189[1] = *(_OWORD *)&v191[16];
    v189[0] = *(_OWORD *)v191;
    nullsub_1(v17, v16);
    v18 = sub_140001650(40, 8);
    if ( !v18 )
      sub_14196B2C1(8, 40);
    *(_QWORD *)v18 = 1;
    *(_QWORD *)(v18 + 8) = 1;
    *(_OWORD *)(v18 + 16) = 0;
    *(_DWORD *)(v18 + 32) = 0;
    v255 = (volatile signed __int64 *)v18;
    *(_QWORD *)v191 = &v246;
    *(_QWORD *)&v191[8] = &v263;
    *(_QWORD *)&v191[16] = &v216;
    *(_QWORD *)&v191[24] = v190;
    *(_QWORD *)&v191[32] = v189;
    *(_QWORD *)&v191[40] = &v255;
    v192 = v264;
    sub_140432E50(&v186, v191, &off_141A96668);
    v19 = v188;
    v20 = (_QWORD *)(v187 + 424 * v188);
    v259 = v187;
    *(_QWORD *)v191 = v187;
    *(_QWORD *)&v191[8] = v20;
    *(_QWORD *)&v191[16] = v15 + 109;
    v267 = 1;
    sub_140208900(&v183, v191);
    v270 = 1;
    v22 = sub_1416AE140(v21);
    if ( *(_BYTE *)(v22 + 16) == 1 )
    {
      v27 = *(_QWORD *)v22;
      v28 = *(_QWORD *)(v22 + 8);
    }
    else
    {
      v270 = 1;
      v174 = v22;
      v27 = sub_1416C5230(v24, v23, v25, v26);
      v22 = v174;
      *(_QWORD *)v174 = v27;
      *(_QWORD *)(v174 + 8) = v28;
      *(_BYTE *)(v174 + 16) = 1;
    }
    *(_QWORD *)v22 = v27 + 1;
    *(_OWORD *)&v191[16] = xmmword_141A90850;
    *(_OWORD *)v191 = *(_OWORD *)&off_141A90840;
    *(_QWORD *)&v191[32] = v27;
    *(_QWORD *)&v191[40] = v28;
    v262 = v20;
    v211 = v14;
    if ( v19 )
    {
      v29 = v15[110];
      v30 = v15[111];
      v31 = (_BYTE *)(v259 + 416);
      v32 = v19;
      do
      {
        if ( *v31 == 1 && !*(v31 - 416) )
        {
          v33 = *((_QWORD *)v31 - 1);
          if ( v33 < v30 )
          {
            sub_1416DB410(&v219, v29 + 384 * v33 + 208);
            if ( (_QWORD)v219 != -1 )
            {
              *(_QWORD *)&v176 = v220;
              v175 = v219;
              sub_140871180((__int64)v191, &v175);
            }
          }
        }
        v31 += 424;
        --v32;
      }
      while ( v32 );
      v203 = *(_OWORD *)&v191[32];
      v202 = *(_OWORD *)&v191[16];
      v201 = *(_OWORD *)v191;
      v34 = (_DWORD)v266 - v19;
      v35 = (_BYTE *)(v259 + 416);
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      do
      {
        v43 = v34;
        v44 = *((_DWORD *)v35 - 14) != 2;
        v45 = *(v35 - 16) < 2u;
        if ( v45 && v44 )
          v34 = v37;
        ++v34;
        if ( v45 && v44 )
        {
          v37 = v34;
          v34 = v43;
        }
        if ( *((_QWORD *)v35 - 39) )
        {
          v46 = *(v35 - 64);
          v47 = v36;
          if ( v46 )
            v47 = v39;
          v48 = v47 + 1;
          if ( v46 )
            v39 = v48;
          else
            v36 = v48;
          ++v38;
        }
        if ( *v35 == 1 )
        {
          v49 = *((_QWORD *)v35 - 52);
          v50 = v42;
          if ( !v49 )
            v50 = v41;
          v51 = v50 + 1;
          if ( v49 )
            v42 = v51;
          else
            v41 = v51;
          ++v40;
        }
        v35 += 424;
        --v19;
      }
      while ( v19 );
      v241 = (int)v266;
      v242 = v37;
      v243 = v34;
      *(_QWORD *)&v244 = __PAIR64__(v36, v38);
      *((_QWORD *)&v244 + 1) = __PAIR64__(v40, v39);
      v245 = __PAIR64__(v42, v41);
      v20 = v262;
    }
    else
    {
      v203 = *(_OWORD *)&v191[32];
      v202 = *(_OWORD *)&v191[16];
      v201 = *(_OWORD *)v191;
      v241 = (int)v266;
      v242 = 0;
      v243 = (int)v266;
      v244 = 0;
      v245 = 0;
    }
    for ( i = (_QWORD *)v259; ; i += 53 )
    {
      v264[1] = i != v20;
      if ( i == v20 )
        break;
      v71 = i;
      v72 = v71[45];
      if ( v72 != 2 )
      {
        v73 = v71[51];
        if ( v73 < *(_QWORD *)(v269 + 888) )
        {
          v74 = *(_QWORD *)(v269 + 880);
          v75 = *((_BYTE *)v71 + 400);
          if ( v71[47] == -1 )
          {
            v76 = -1;
          }
          else
          {
            sub_1416DB410(v191, v71 + 47);
            v76 = *(_QWORD *)v191;
            v175 = *(_OWORD *)&v191[8];
            v72 = v71[45];
          }
          v77 = v71[46];
          *(_OWORD *)v191 = v175;
          v78 = v74 + 384 * v73;
          if ( *(_DWORD *)(v78 + 160) != 2 )
          {
            v79 = *(_QWORD *)(v78 + 176);
            if ( v79 != -1 )
            {
              if ( v79 )
                sub_140001660(*(_QWORD *)(v78 + 184), v79, 1);
            }
          }
          *(_QWORD *)(v78 + 160) = v72;
          *(_QWORD *)(v78 + 168) = v77;
          *(_QWORD *)(v78 + 176) = v76;
          *(_OWORD *)(v78 + 184) = *(_OWORD *)v191;
          *(_BYTE *)(v78 + 200) = v75;
          v20 = v262;
        }
      }
    }
    v80 = (_QWORD *)v259;
    v204 = v259;
    v205 = (_QWORD *)v259;
    v251 = v186;
    v206 = v186;
    v207 = v20;
    v81 = &v191[8];
    v82 = (_QWORD *)v269;
    v212 = v269 + 832;
    v236 = (_QWORD *)(v269 + 920);
    v237 = (_QWORD *)(v269 + 944);
    v254 = 0;
LABEL_66:
    while ( v80 != v20 )
    {
      v83 = v80;
      v84 = v80 + 53;
      v85 = *v80;
      sub_1419234B0(&v175, v83 + 1, 416);
      if ( v85 == 2 )
        goto LABEL_168;
      v266 = v84;
      v249 = v85;
      *(_QWORD *)v191 = v85;
      sub_1419234B0(v81, &v175, 416);
      v86 = v247;
      v87 = v199;
      v88 = v247 - 296;
      v89 = 0;
      do
      {
        if ( -296 * v248 == v89 )
        {
          if ( v249 )
            sub_140CB96B0(v81);
          v20 = v262;
          if ( v196 != 2 && v197 != -1 && v197 )
            sub_140001660(v198, v197, 1);
          v80 = v266;
          if ( v195[0] != 2 )
            goto LABEL_98;
          goto LABEL_66;
        }
        v89 -= 296;
        v90 = v88 + 296;
        v91 = *(_QWORD *)(v88 + 584) == v199;
        v88 += 296;
      }
      while ( !v91 );
      v92 = v81;
      v205 = v266;
      v93 = *(_QWORD *)(v90 + 40);
      v94 = *(_QWORD *)(v90 + 48);
      v271 = 1;
      v97 = sub_140D2B120((_DWORD)v82, v199, v93, v94, (__int64)v194);
      v98 = v200;
      if ( v200 )
        ++*(_DWORD *)(v269 + 968);
      v99 = v86 - v89 - 264;
      LOBYTE(v97) = v254 | v97;
      v100 = v97;
      LOBYTE(v100) = v97 & 1;
      v254 = v100;
      if ( (v249 & 1) != 0 )
      {
        v224 = v180;
        v223 = v179;
        v222 = v178;
        v221 = v177;
        v220 = v176;
        v219 = v175;
        *(_QWORD *)&v260 = 0;
        *((_QWORD *)&v260 + 1) = 1;
        v261 = 0;
        v258 = 1610612768;
        *(_QWORD *)&v257 = &v260;
        *((_QWORD *)&v257 + 1) = &off_141A997B8;
        v101 = sub_140D76130(&v219, &v257);
        v102 = v269;
        if ( v101 )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_10,
            55,
            (unsigned int)&v268,
            (unsigned int)&unk_141A93F80,
            (__int64)&off_141A99870);
        v182 = v261;
        v181 = v260;
        v103 = *v236;
        if ( *v236 != -1 && v103 )
          sub_140001660(*(_QWORD *)(v269 + 928), v103, 1);
        v104 = v236;
        v236[2] = v182;
        *v104 = v181;
        sub_1416DB410(&v257, v99);
        v261 = v258;
        v260 = v257;
        v105 = *v237;
        if ( *v237 != -1 && v105 )
          sub_140001660(*(_QWORD *)(v102 + 952), v105, 1);
        v106 = v237;
        v237[2] = v261;
        *v106 = v260;
        if ( (_QWORD)v219 == 6 )
        {
          if ( (unsigned __int8)sub_1412467D0((char *)&v219 + 8)
            || (v107 = 1, (unsigned __int8)sub_141246860((char *)&v219 + 8)) )
          {
            v107 = 2;
          }
          v108 = v199;
          if ( (unsigned __int8)sub_1412467D0((char *)&v219 + 8)
            || (v109 = sub_141246860((char *)&v219 + 8), v110 = -1, v109) )
          {
            *(_QWORD *)&v260 = 0;
            *((_QWORD *)&v260 + 1) = 1;
            v261 = 0;
            v258 = 1610612768;
            *(_QWORD *)&v257 = &v260;
            *((_QWORD *)&v257 + 1) = &off_141A997B8;
            if ( (unsigned __int8)sub_140D76130(&v219, &v257) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_10,
                55,
                (unsigned int)&v268,
                (unsigned int)&unk_141A93F80,
                (__int64)&off_141A99870);
            v238 = *((_QWORD *)&v260 + 1);
            v110 = v260;
            v210 = v261;
          }
          if ( v108 >= *(_QWORD *)(v102 + 888) )
          {
LABEL_114:
            if ( (unsigned __int64)(v110 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v238, v110, 1);
            goto LABEL_116;
          }
        }
        else
        {
          v110 = -1;
          v107 = 1;
          v108 = v199;
          if ( v199 >= *(_QWORD *)(v102 + 888) )
            goto LABEL_114;
        }
        if ( !*(_BYTE *)(*(_QWORD *)(v102 + 880) + 384 * v108 + 369) )
          goto LABEL_114;
        *(_BYTE *)(v102 + 1128) = v107;
        v118 = *(_QWORD *)(v102 + 976);
        if ( v118 != -1 && v118 )
        {
          v119 = v110;
          sub_140001660(*(_QWORD *)(v102 + 984), *(_QWORD *)(v102 + 976), 1);
          v110 = v119;
        }
        *(_QWORD *)(v102 + 976) = v110;
        *(_QWORD *)(v102 + 984) = v238;
        *(_QWORD *)(v102 + 992) = v210;
LABEL_116:
        v271 = 0;
        sub_140CB96B0(&v219);
LABEL_117:
        v82 = (_QWORD *)v269;
        goto LABEL_118;
      }
      if ( *(_DWORD *)&v191[8] == -1 )
      {
        if ( v98 )
        {
          v120 = v269;
          ++*(_DWORD *)(v269 + 972);
          if ( v87 < *(_QWORD *)(v120 + 888) )
          {
            v100 = 384 * v87;
            if ( *(_BYTE *)(*(_QWORD *)(v120 + 880) + 384 * v87 + 369) == 1 )
            {
              *(_BYTE *)(v120 + 1128) = 1;
              v95 = *(_QWORD *)(v120 + 976);
              if ( v95 != -1 && v95 )
                sub_140001660(*(_QWORD *)(v120 + 984), v95, 1);
              *(_QWORD *)(v120 + 976) = -1;
            }
          }
          v271 = 1;
          LODWORD(v257) = sub_1416B2E50(v100, v95, v96);
          DWORD1(v257) = v121;
          v271 = 1;
          sub_1416B2E00(&v219, &v257, 3577643008LL, 27111902);
          if ( (_BYTE)v219 )
            v122 = 0;
          else
            v122 = *((_QWORD *)&v219 + 1);
          v131 = *(_QWORD *)(v269 + 888);
          if ( v199 >= v131 )
          {
            v271 = 1;
            sub_14196B673(v199, v131, &off_141A96680);
          }
          v132 = *(_QWORD *)(v269 + 880);
          v133 = 384 * v199;
          *(_QWORD *)(v132 + v133 + 80) = 2;
          *(_QWORD *)(v132 + v133 + 120) = 2;
          *(_DWORD *)(v132 + v133 + 352) = 0;
          *(_BYTE *)(v132 + v133 + 370) = 1;
          *(_QWORD *)(v132 + v133 + 64) = 1;
          *(_QWORD *)(v132 + v133 + 72) = v122;
          v271 = 1;
          sub_1416DB410(&v260, v99);
          v134 = v133 + v132;
          v135 = *(_QWORD *)(v134 + 160);
          if ( v135 == 2 )
          {
            v252 = 2;
            v136 = v265;
            v137 = v239;
            v138 = v214;
          }
          else
          {
            v136 = *(_BYTE *)(v134 + 200);
            if ( *(_QWORD *)(v134 + 176) == -1 )
            {
              v256 = -1;
              v137 = v239;
            }
            else
            {
              sub_1416DB410(&v257, v134 + 176);
              v253 = *((_QWORD *)&v257 + 1);
              v256 = v257;
              v137 = v258;
              v135 = *(_QWORD *)(v134 + 160);
            }
            v138 = *(_QWORD *)(v134 + 168);
            v252 = v135;
          }
          sub_1414331D0(&v257);
          v139 = ((int)v257 >> 13) - 1;
          v140 = 0;
          if ( (int)v257 >> 13 <= 0 )
          {
            v141 = (1 - ((int)v257 >> 13)) / 0x190u + 1;
            v139 += 400 * v141;
            v140 = -146097 * v141;
          }
          v232 = v261;
          v231 = v260;
          v234 = v122;
          v235 = 1;
          *(_QWORD *)&v220 = 2;
          *((_QWORD *)&v222 + 1) = 2;
          v233 = 0;
          v225 = v252;
          v214 = v138;
          v226 = v138;
          v227 = v256;
          v228 = v253;
          v239 = v137;
          v229 = v137;
          v265 = v136;
          v230 = v136;
          *(_QWORD *)&v219 = 1;
          *((_QWORD *)&v219 + 1) = 1000
                                 * (DWORD1(v257)
                                  + 86400LL
                                  * (int)(((v139 / 100) >> 2)
                                        + ((1461 * v139) >> 2)
                                        + v140
                                        + (((unsigned int)v257 >> 4) & 0x1FF)
                                        - v139 / 100
                                        - 719163))
                                 + DWORD2(v257) / 0xF4240uLL;
          v271 = 1;
          sub_140D36570(v212, &v219, v122);
          goto LABEL_117;
        }
        v82 = (_QWORD *)v269;
        if ( v87 < *(_QWORD *)(v269 + 888) && *(_BYTE *)(*(_QWORD *)(v269 + 880) + 384 * v87 + 369) == 1 )
        {
          v271 = 1;
          sub_140712730(&v219, v213, 0);
          v123 = BYTE8(v222);
          v124 = v215;
          if ( !BYTE8(v222) )
            v124 = *((_QWORD *)&v221 + 1);
          v125 = v240;
          if ( !BYTE8(v222) )
            v125 = v221;
          v126 = *((_QWORD *)&v220 + 1);
          if ( BYTE8(v222) )
            v126 = -1;
          v82 = (_QWORD *)v269;
          v127 = v87 < *(_QWORD *)(v269 + 888);
          v240 = v125;
          if ( v127 && *(_BYTE *)(*(_QWORD *)(v269 + 880) + 384 * v87 + 369) )
          {
            *(_BYTE *)(v269 + 1128) = 2 - BYTE8(v222);
            v128 = v82[122];
            v80 = v266;
            if ( v128 != -1 && v128 )
            {
              v129 = v125;
              v130 = v126;
              sub_140001660(v82[123], v82[122], 1);
              v125 = v129;
              v126 = v130;
            }
            v82[122] = v126;
            v82[123] = v125;
            v82[124] = v124;
            v20 = v262;
          }
          else
          {
            v20 = v262;
            v80 = v266;
            if ( (unsigned __int64)(v126 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v240, v126, 1);
          }
          if ( (_QWORD)v219 )
            sub_140001660(*((_QWORD *)&v219 + 1), v219, 1);
          v215 = v124;
          if ( v123 && *((_QWORD *)&v220 + 1) )
            sub_140001660(v221, *((_QWORD *)&v220 + 1), 1);
        }
        else
        {
LABEL_118:
          v20 = v262;
          v80 = v266;
        }
      }
      else
      {
        *(_QWORD *)&v224 = v180;
        v223 = v179;
        v222 = v178;
        v221 = v177;
        v220 = v176;
        v219 = v175;
        v111 = v193;
        v112 = *(_DWORD *)((char *)&v180 + 9);
        v113 = HIDWORD(v180);
        v114 = v269;
        ++*(_DWORD *)(v269 + 972);
        HIDWORD(v224) = v113;
        *(_DWORD *)((char *)&v224 + 9) = v112;
        BYTE8(v224) = v111;
        v271 = 1;
        sub_140D2A0A0(v114, v209, v208, v90, (__int64)&v219);
        if ( v111 != 8 )
        {
          v115 = *(_QWORD *)(v90 + 40);
          v116 = *(_QWORD *)(v90 + 48);
          v271 = 1;
          LOBYTE(v97) = (sub_140D33EE0(v269, v87, v115, v116) | v97) & 1;
          v254 = v97;
        }
        v82 = (_QWORD *)v269;
        if ( v87 >= *(_QWORD *)(v269 + 888) )
          goto LABEL_118;
        v80 = v266;
        if ( *(_BYTE *)(*(_QWORD *)(v269 + 880) + 384 * v87 + 369) == 1 )
        {
          *(_BYTE *)(v269 + 1128) = 1;
          v117 = v82[122];
          v20 = v262;
          if ( v117 != -1 && v117 )
            sub_140001660(v82[123], v117, 1);
          v82[122] = -1;
        }
        else
        {
          v20 = v262;
        }
      }
      if ( v196 != 2 && v197 != -1 && v197 )
        sub_140001660(v198, v197, 1);
      v81 = v92;
      if ( v195[0] != 2 )
      {
LABEL_98:
        sub_140037800(v195);
        continue;
      }
    }
    v84 = v20;
LABEL_168:
    v205 = v84;
    sub_1401B2EA0(v84, 0x21CFB2B78C13521DLL * ((unsigned __int64)((char *)v20 - (char *)v84) >> 3));
    if ( v251 )
      sub_140001660(v259, 424 * v251, 8);
    if ( (v254 & 1) != 0 )
    {
      LODWORD(v175) = sub_1416B2E50(v143, v142, v144);
      DWORD1(v175) = v146;
      sub_1416B2E00(v191, &v175, 3577643008LL, 27111902);
      if ( v191[0] )
        v147 = 0;
      else
        v147 = *(_QWORD *)&v191[8];
      v82 = (_QWORD *)v269;
      *(_QWORD *)(v269 + 816) = v147;
    }
    v148 = v184;
    v149 = v185;
    sub_140D32700(v82, v184, v185, v145);
    v150 = *(_QWORD *)(v269 + 880);
    v151 = *(_QWORD *)(v269 + 888);
    *(_QWORD *)v191 = &v268;
    if ( v151 >= 2 )
    {
      if ( v151 >= 0x15 )
        sub_1401B7950(v150, v151, v191);
      else
        sub_140CC3920(v150);
    }
    v152 = v269;
    v153 = *(_QWORD *)(v269 + 880) - 384LL;
    v154 = 384LL * *(_QWORD *)(v269 + 888);
    while ( v154 )
    {
      v155 = (__int64 *)(v153 + 384);
      v154 -= 384;
      v91 = *(_BYTE *)(v153 + 753) == 1;
      v153 += 384;
      if ( v91 )
      {
        sub_140D74C80((__int64)v191, v155);
        v156 = *(_QWORD *)v191;
        sub_1419234B0(&v175, &v191[8], 376);
        v152 = v269;
        if ( *(_DWORD *)(v269 + 152) == 2 )
          goto LABEL_183;
        goto LABEL_182;
      }
    }
    v156 = 2;
    if ( *(_DWORD *)(v269 + 152) == 2 )
      goto LABEL_183;
LABEL_182:
    sub_140037CD0(v152 + 152);
LABEL_183:
    *(_QWORD *)(v152 + 152) = v156;
    sub_1419234B0(v152 + 160, &v175, 376);
    LODWORD(v175) = sub_1416B2E50(v158, v157, v159);
    DWORD1(v175) = v160;
    sub_1416B2E00(v191, &v175, 3577643008LL, 27111902);
    if ( v191[0] )
      v161 = 0;
    else
      v161 = *(_QWORD *)&v191[8];
    v162 = v269;
    *(_QWORD *)(v269 + 1120) = v161;
    *(_QWORD *)v191 = -1;
    sub_140D2AC50(v162, 0, (unsigned int)v191, v211, (__int64)&v241);
    v163 = v201;
    v164 = v202;
    v165 = v250;
    v250[2] = v203;
    v165[1] = v164;
    *v165 = v163;
    if ( v149 )
    {
      v166 = (_QWORD *)(v148 + 8);
      do
      {
        v167 = *(v166 - 1);
        if ( v167 )
          sub_140001660(*v166, v167, 1);
        v166 += 3;
        --v149;
      }
      while ( v149 );
    }
    if ( v183 )
      sub_140001660(v148, 24 * v183, 8);
    if ( !_InterlockedDecrement64(v255) )
      sub_140CA5F30(&v255);
    if ( *(_QWORD *)&v189[0] )
      sub_140001660(*((_QWORD *)&v189[0] + 1), *(_QWORD *)&v189[0], 1);
    if ( *(_QWORD *)&v190[0] )
      sub_140001660(*((_QWORD *)&v190[0] + 1), *(_QWORD *)&v190[0], 1);
    v168 = v248;
    if ( v248 )
    {
      v169 = v247 + 112;
      do
      {
        v170 = *(_QWORD *)(v169 - 80);
        if ( v170 )
          sub_140001660(*(_QWORD *)(v169 - 72), v170, 1);
        v171 = *(_QWORD *)(v169 - 56);
        if ( v171 )
          sub_140001660(*(_QWORD *)(v169 - 48), v171, 1);
        v172 = *(_QWORD *)(v169 - 32);
        if ( v172 )
          sub_140001660(*(_QWORD *)(v169 - 24), v172, 1);
        sub_1401AF090(v169);
        v169 += 296;
        --v168;
      }
      while ( v168 );
    }
    if ( v246 )
    {
      v69 = v247;
      v68 = 296 * v246;
      goto LABEL_210;
    }
  }
  else
  {
    *(_QWORD *)v191 = (unsigned int)v266;
    *(_DWORD *)&v191[8] = (_DWORD)v266;
    memset(&v191[12], 0, 24);
    *(_QWORD *)&v175 = -1;
    sub_140D2AC50(v269, 0, (unsigned int)&v175, v14, (__int64)v191);
    v53 = sub_1416AE140(v52);
    v58 = v53;
    if ( *(_BYTE *)(v53 + 16) == 1 )
    {
      v59 = *(_QWORD *)v53;
      v60 = *(_QWORD *)(v58 + 8);
    }
    else
    {
      v59 = sub_1416C5230(v55, v54, v56, v57);
      *(_QWORD *)v58 = v59;
      *(_QWORD *)(v58 + 8) = v60;
      *(_BYTE *)(v58 + 16) = 1;
    }
    *(_QWORD *)v58 = v59 + 1;
    v61 = v250;
    v250[1] = xmmword_141A90850;
    *v61 = *(_OWORD *)&off_141A90840;
    *((_QWORD *)v61 + 4) = v59;
    *((_QWORD *)v61 + 5) = v60;
    v62 = v247;
    v63 = v248;
    if ( v248 )
    {
      v64 = v247 + 112;
      do
      {
        v65 = *(_QWORD *)(v64 - 80);
        if ( v65 )
          sub_140001660(*(_QWORD *)(v64 - 72), v65, 1);
        v66 = *(_QWORD *)(v64 - 56);
        if ( v66 )
          sub_140001660(*(_QWORD *)(v64 - 48), v66, 1);
        v67 = *(_QWORD *)(v64 - 32);
        if ( v67 )
          sub_140001660(*(_QWORD *)(v64 - 24), v67, 1);
        sub_1401AF090(v64);
        v64 += 296;
        --v63;
      }
      while ( v63 );
    }
    if ( v246 )
    {
      v68 = 296 * v246;
      v69 = v62;
LABEL_210:
      sub_140001660(v69, v68, 8);
    }
  }
  if ( v216 != -1 && v216 )
    sub_140001660(v217, v216, 1);
  return v250;
}
