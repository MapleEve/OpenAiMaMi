// win 1.2.7 | module src/core/repository.rs | ea 0x140218b50 | name sub_140218B50
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140218B50(_OWORD *a1, __m128i *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r15d
  int v6; // esi
  int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // r13
  __int64 v10; // r12
  __int8 v11; // di
  bool v12; // zf
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  __m128i *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  _BYTE *v30; // rdx
  unsigned int v31; // ecx
  int v32; // r8d
  unsigned int v33; // r9d
  unsigned int v34; // r10d
  unsigned int v35; // r11d
  unsigned int v36; // r15d
  unsigned int v37; // r12d
  int v38; // edi
  bool v39; // bl
  bool v40; // r14
  char v41; // bl
  unsigned int v42; // edi
  unsigned int v43; // edi
  __int64 v44; // rdi
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  _OWORD *v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rdx
  bool v59; // cl
  __int64 v60; // r15
  __int64 v61; // r13
  unsigned __int64 v62; // rdi
  __int64 v63; // r14
  char v64; // r12
  __int64 v65; // rsi
  __int64 v66; // r15
  unsigned __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // r15
  __m128i *v70; // rdi
  __m128i *v71; // rsi
  __int64 v72; // rbx
  __int64 v73; // r14
  __m128i *v74; // r14
  __int64 v75; // rsi
  unsigned __int64 v76; // r15
  __int64 v77; // rax
  __int64 v78; // r13
  _QWORD *v79; // rbx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  unsigned int v84; // r12d
  char v85; // al
  __int64 v86; // rsi
  __int64 v87; // rcx
  char v88; // al
  __m128i *v89; // rdi
  __int64 v90; // rdx
  __int64 *v91; // rcx
  __int64 v92; // rdx
  __m128i *v93; // rcx
  char v94; // bl
  unsigned __int64 v95; // rsi
  char v96; // al
  __int64 v97; // rdx
  char v98; // si
  int v99; // eax
  int v100; // edx
  __int64 *v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rsi
  int v107; // edx
  __int64 v108; // r15
  char v109; // bl
  __int64 v110; // r13
  __int64 v111; // rcx
  __int64 v112; // rdx
  bool v113; // cf
  __int64 v114; // rax
  __int64 v115; // rsi
  unsigned __int64 v116; // rdx
  __int64 v117; // rbx
  __int64 v118; // rdi
  __int64 v119; // rbx
  __int64 v120; // rax
  char v121; // si
  __int64 v122; // r12
  __int64 v123; // rdi
  int v124; // edx
  int v125; // ecx
  unsigned int v126; // ecx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int32 v131; // edx
  __int64 v132; // rax
  __int64 v133; // r14
  __int64 v134; // rsi
  __int64 v135; // rcx
  unsigned __int64 v136; // rdx
  __m128i *v137; // rbx
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int32 v144; // edx
  __int64 v145; // rax
  int v146; // ecx
  int v147; // r9d
  __int128 v148; // xmm0
  __int128 v149; // xmm1
  _OWORD *v150; // rax
  _QWORD *v151; // rdi
  __int64 v152; // rdx
  __int64 v154; // rdi
  __m128i v155; // [rsp+30h] [rbp-50h] BYREF
  __int128 v156; // [rsp+40h] [rbp-40h]
  __int128 v157; // [rsp+50h] [rbp-30h]
  __int128 v158; // [rsp+60h] [rbp-20h]
  __int128 v159; // [rsp+70h] [rbp-10h]
  __int128 v160; // [rsp+80h] [rbp+0h]
  __int128 v161; // [rsp+1D0h] [rbp+150h]
  __int128 v162; // [rsp+1E0h] [rbp+160h]
  __int128 v163; // [rsp+1F0h] [rbp+170h]
  __int128 v164; // [rsp+200h] [rbp+180h]
  __int64 v165; // [rsp+210h] [rbp+190h]
  __int64 v166; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v167; // [rsp+228h] [rbp+1A8h]
  __int64 v168; // [rsp+230h] [rbp+1B0h]
  __int64 v169; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v170; // [rsp+240h] [rbp+1C0h]
  __int64 v171; // [rsp+248h] [rbp+1C8h]
  _BYTE v172[48]; // [rsp+250h] [rbp+1D0h] BYREF
  char *v173; // [rsp+280h] [rbp+200h]
  char v174; // [rsp+2B0h] [rbp+230h]
  char v175[72]; // [rsp+2B8h] [rbp+238h] BYREF
  int v176[46]; // [rsp+300h] [rbp+280h] BYREF
  int v177; // [rsp+3B8h] [rbp+338h]
  __int64 v178; // [rsp+3C8h] [rbp+348h]
  __int64 v179; // [rsp+3D0h] [rbp+350h]
  unsigned __int64 v180; // [rsp+3E8h] [rbp+368h]
  char v181; // [rsp+3F0h] [rbp+370h]
  _OWORD v182[2]; // [rsp+400h] [rbp+380h] BYREF
  _OWORD v183[2]; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v184; // [rsp+448h] [rbp+3C8h]
  __int64 v185; // [rsp+450h] [rbp+3D0h]
  __int64 v186; // [rsp+458h] [rbp+3D8h]
  __int64 v187; // [rsp+460h] [rbp+3E0h]
  __int64 v188; // [rsp+468h] [rbp+3E8h]
  __int64 v189; // [rsp+470h] [rbp+3F0h]
  __int64 v190; // [rsp+478h] [rbp+3F8h]
  __m128i *v191; // [rsp+480h] [rbp+400h]
  __m128i *v192; // [rsp+488h] [rbp+408h]
  __int64 v193; // [rsp+490h] [rbp+410h]
  __int64 v194; // [rsp+498h] [rbp+418h]
  __m128i v195; // [rsp+4A0h] [rbp+420h] BYREF
  __int128 v196; // [rsp+4B0h] [rbp+430h]
  __int128 v197; // [rsp+4C0h] [rbp+440h]
  __int128 v198; // [rsp+4D0h] [rbp+450h]
  __int128 v199; // [rsp+4E0h] [rbp+460h]
  __int128 v200; // [rsp+4F0h] [rbp+470h]
  __int64 v201; // [rsp+500h] [rbp+480h]
  __int64 v202; // [rsp+508h] [rbp+488h]
  __int64 v203; // [rsp+510h] [rbp+490h]
  __int64 v204; // [rsp+518h] [rbp+498h]
  __int64 v205; // [rsp+520h] [rbp+4A0h]
  char v206; // [rsp+528h] [rbp+4A8h]
  __int128 v207; // [rsp+530h] [rbp+4B0h]
  __int64 v208; // [rsp+540h] [rbp+4C0h]
  int v209; // [rsp+548h] [rbp+4C8h]
  __int64 v210; // [rsp+550h] [rbp+4D0h]
  char v211; // [rsp+558h] [rbp+4D8h]
  __int64 v212; // [rsp+560h] [rbp+4E0h] BYREF
  __m128i v213; // [rsp+568h] [rbp+4E8h]
  __int8 v214; // [rsp+578h] [rbp+4F8h]
  __int64 *v215; // [rsp+580h] [rbp+500h]
  __m128i *v216; // [rsp+588h] [rbp+508h]
  __int64 v217; // [rsp+590h] [rbp+510h]
  unsigned __int64 v218; // [rsp+598h] [rbp+518h]
  __int64 v219; // [rsp+5A0h] [rbp+520h]
  int v220; // [rsp+5ACh] [rbp+52Ch] BYREF
  int v221; // [rsp+5B0h] [rbp+530h]
  int v222; // [rsp+5B4h] [rbp+534h]
  __int128 v223; // [rsp+5B8h] [rbp+538h]
  unsigned __int64 v224; // [rsp+5C8h] [rbp+548h]
  _OWORD *v225; // [rsp+5D0h] [rbp+550h]
  __int64 v226; // [rsp+5D8h] [rbp+558h]
  __int64 v227; // [rsp+5E0h] [rbp+560h]
  __int64 v228; // [rsp+5E8h] [rbp+568h]
  __int64 v229; // [rsp+5F0h] [rbp+570h]
  __int64 v230; // [rsp+5F8h] [rbp+578h] BYREF
  __int64 v231; // [rsp+600h] [rbp+580h]
  __int64 v232; // [rsp+608h] [rbp+588h]
  __int64 v233; // [rsp+610h] [rbp+590h]
  volatile signed __int64 *v234; // [rsp+618h] [rbp+598h] BYREF
  __int64 v235; // [rsp+620h] [rbp+5A0h]
  __int128 v236; // [rsp+628h] [rbp+5A8h] BYREF
  __int64 v237; // [rsp+638h] [rbp+5B8h]
  __int64 v238; // [rsp+640h] [rbp+5C0h]
  __int64 v239; // [rsp+648h] [rbp+5C8h]
  __int128 v240; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v241; // [rsp+660h] [rbp+5E0h]
  __int64 v242; // [rsp+670h] [rbp+5F0h]
  char v243; // [rsp+67Dh] [rbp+5FDh] BYREF
  char v244; // [rsp+67Eh] [rbp+5FEh] BYREF
  char v245; // [rsp+67Fh] [rbp+5FFh]
  __int64 v246; // [rsp+680h] [rbp+600h]
  char v247; // [rsp+68Dh] [rbp+60Dh]
  char v248; // [rsp+68Eh] [rbp+60Eh] BYREF
  bool v249; // [rsp+68Fh] [rbp+60Fh]
  __m128i *v250; // [rsp+690h] [rbp+610h]
  char v251; // [rsp+69Eh] [rbp+61Eh]
  char v252; // [rsp+69Fh] [rbp+61Fh]
  __int64 v253; // [rsp+6A0h] [rbp+620h]

  v253 = -2;
  v188 = a4;
  v189 = a3;
  v250 = a2;
  v225 = a1;
  v244 = a5;
  sub_141406CE0(v172);
  v5 = *(_DWORD *)v172;
  v6 = (*(int *)v172 >> 13) - 1;
  v7 = 0;
  if ( *(int *)v172 >> 13 <= 0 )
  {
    v8 = (1 - (*(int *)v172 >> 13)) / 0x190u + 1;
    v6 += 400 * v8;
    v7 = -146097 * v8;
  }
  v9 = *(unsigned int *)&v172[4];
  v10 = *(unsigned int *)&v172[8];
  v243 = 1;
  v11 = v250[8].m128i_i8[8];
  v12 = v250[7].m128i_i64[0] == -1;
  v191 = v250 + 7;
  if ( v12 )
  {
    v13 = -1;
  }
  else
  {
    sub_1416AC440(v172, &v250[7]);
    v13 = *(_QWORD *)v172;
    v155 = *(__m128i *)&v172[8];
  }
  v214 = v11;
  v212 = v13;
  v213 = v155;
  LODWORD(v239) = v250[55].m128i_i32[2];
  sub_1402152F0(&v230, v250, 0);
  v14 = 1000
      * (v9 + 86400LL * (int)(((v6 / 100) >> 2) + ((1461 * v6) >> 2) + v7 + ((v5 >> 4) & 0x1FF) - v6 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v10) >> 50);
  if ( v232 )
  {
    v15 = v250;
    sub_1416AB9B0(v172, v250[39].m128i_i64[0], v250[39].m128i_i64[1]);
    v183[1] = *(_OWORD *)&v172[16];
    v183[0] = *(_OWORD *)v172;
    sub_1416AB9B0(v172, v15[37].m128i_i64[1], v15[38].m128i_i64[0]);
    v182[1] = *(_OWORD *)&v172[16];
    v182[0] = *(_OWORD *)v172;
    nullsub_1(v16);
    v17 = sub_140001650(40, 8);
    if ( !v17 )
      sub_141938D11(8, 40);
    *(_QWORD *)v17 = 1;
    *(_QWORD *)(v17 + 8) = 1;
    *(_OWORD *)(v17 + 16) = 0;
    *(_DWORD *)(v17 + 32) = 0;
    v234 = (volatile signed __int64 *)v17;
    *(_QWORD *)v172 = &v230;
    *(_QWORD *)&v172[8] = &v243;
    *(_QWORD *)&v172[16] = &v212;
    *(_QWORD *)&v172[24] = v183;
    *(_QWORD *)&v172[32] = v182;
    *(_QWORD *)&v172[40] = &v234;
    v173 = &v244;
    sub_140EA1BB0(&v169, v172, &off_1419DC788);
    v18 = &v15[54].m128i_i64[1];
    v19 = v171;
    v246 = 424 * v171;
    v20 = v170 + 424 * v171;
    v238 = v170;
    *(_QWORD *)v172 = v170;
    *(_QWORD *)&v172[8] = v20;
    *(_QWORD *)&v172[16] = v18;
    v247 = 1;
    sub_1403D1B70(&v166, v172);
    v251 = 1;
    v22 = sub_14167F170(v21);
    if ( *(_BYTE *)(v22 + 16) == 1 )
    {
      v27 = *(_QWORD *)v22;
      v28 = *(_QWORD *)(v22 + 8);
    }
    else
    {
      v251 = 1;
      v154 = v22;
      v27 = sub_141696260(v24, v23, v25, v26);
      v22 = v154;
      *(_QWORD *)v154 = v27;
      *(_QWORD *)(v154 + 8) = v28;
      *(_BYTE *)(v154 + 16) = 1;
    }
    *(_QWORD *)v22 = v27 + 1;
    *(_OWORD *)&v172[16] = xmmword_1419D6520;
    *(_OWORD *)v172 = *(_OWORD *)&off_1419D6510;
    *(_QWORD *)&v172[32] = v27;
    *(_QWORD *)&v172[40] = v28;
    v155.m128i_i64[0] = v238;
    v155.m128i_i64[1] = v20;
    *(_QWORD *)&v156 = v18;
    sub_1402A4D30(&v155, v172);
    v161 = *(_OWORD *)v172;
    v162 = *(_OWORD *)&v172[16];
    v163 = *(_OWORD *)&v172[32];
    v29 = v239 - v19;
    v242 = v20;
    v218 = v14;
    if ( v19 )
    {
      v30 = (_BYTE *)(v238 + 416);
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      do
      {
        v38 = v29;
        v39 = *((_DWORD *)v30 - 14) != 2;
        v40 = *(v30 - 16) < 2u;
        if ( v40 && v39 )
          v29 = v32;
        ++v29;
        if ( v40 && v39 )
        {
          v32 = v29;
          v29 = v38;
        }
        if ( *((_QWORD *)v30 - 39) )
        {
          v41 = *(v30 - 64);
          v42 = v31;
          if ( v41 )
            v42 = v34;
          v43 = v42 + 1;
          if ( v41 )
            v34 = v43;
          else
            v31 = v43;
          ++v33;
        }
        if ( *v30 == 1 )
        {
          v44 = *((_QWORD *)v30 - 52);
          v45 = v37;
          if ( !v44 )
            v45 = v36;
          v46 = v45 + 1;
          if ( v44 )
            v37 = v46;
          else
            v36 = v46;
          ++v35;
        }
        v30 += 424;
        --v19;
      }
      while ( v19 );
      v220 = v239;
      v221 = v32;
      v222 = v29;
      *(_QWORD *)&v223 = __PAIR64__(v31, v33);
      *((_QWORD *)&v223 + 1) = __PAIR64__(v35, v34);
      v224 = __PAIR64__(v37, v36);
      v20 = v242;
    }
    else
    {
      v220 = v239;
      v221 = 0;
      v222 = v239;
      v223 = 0;
      v224 = 0;
    }
    v57 = v238;
    v58 = v238 + v246;
    v246 += v238;
    while ( 1 )
    {
      v59 = v57 != v58;
      if ( v57 == v58 )
        break;
      v60 = v57;
      v57 += 424;
      v61 = *(_QWORD *)(v60 + 360);
      if ( v61 != 2 )
      {
        v62 = *(_QWORD *)(v60 + 408);
        if ( v62 < v250[55].m128i_i64[1] )
        {
          v249 = v59;
          v63 = v250[55].m128i_i64[0];
          v64 = *(_BYTE *)(v60 + 400);
          if ( *(_QWORD *)(v60 + 376) == -1 )
          {
            v65 = -1;
          }
          else
          {
            sub_1416AC440(v172, v60 + 376);
            v65 = *(_QWORD *)v172;
            v155 = *(__m128i *)&v172[8];
            v61 = *(_QWORD *)(v60 + 360);
          }
          v66 = *(_QWORD *)(v60 + 368);
          *(__m128i *)v172 = v155;
          v67 = v63 + 384 * v62;
          if ( *(_DWORD *)(v67 + 160) != 2 )
          {
            v68 = *(_QWORD *)(v67 + 176);
            if ( v68 != -1 )
            {
              if ( v68 )
                sub_140001660(*(_QWORD *)(v67 + 184), v68, 1);
            }
          }
          *(_QWORD *)(v67 + 160) = v61;
          *(_QWORD *)(v67 + 168) = v66;
          *(_QWORD *)(v67 + 176) = v65;
          *(_OWORD *)(v67 + 184) = *(_OWORD *)v172;
          *(_BYTE *)(v67 + 200) = v64;
          v20 = v242;
          v58 = v246;
        }
      }
    }
    v249 = 0;
    v69 = v238;
    v184 = v238;
    v185 = v238;
    v226 = v169;
    v186 = v169;
    v187 = v20;
    v70 = v250;
    v192 = v250 + 52;
    v215 = &v250[57].m128i_i64[1];
    v216 = v250 + 59;
    v233 = 0;
    v71 = &v155;
LABEL_50:
    while ( v69 != v20 )
    {
      v72 = v69 + 424;
      v73 = *(_QWORD *)v69;
      sub_1418F44E0(v71, (const __m128i *)(v69 + 8), 0x1A0u);
      if ( v73 == 2 )
        goto LABEL_152;
      v246 = v69 + 424;
      v239 = v73;
      *(_QWORD *)v172 = v73;
      v74 = v71;
      sub_1418F44E0((__m128i *)&v172[8], v71, 0x1A0u);
      v75 = v231;
      v76 = v180;
      v77 = v231 - 296;
      v78 = 0;
      do
      {
        if ( -296 * v232 == v78 )
        {
          if ( v239 )
            sub_1401954F0(&v172[8]);
          v70 = v250;
          v71 = v74;
          if ( v177 != 2 && v178 != -1 && v178 )
            sub_140001660(v179, v178, 1);
          v69 = v246;
          if ( v176[0] != 2 )
            goto LABEL_49;
          goto LABEL_50;
        }
        v78 -= 296;
        v79 = (_QWORD *)(v77 + 296);
        v12 = *(_QWORD *)(v77 + 584) == v180;
        v77 += 296;
      }
      while ( !v12 );
      v185 = v246;
      v80 = v79[5];
      v81 = v79[6];
      v252 = 1;
      v84 = sub_14020F6A0((_DWORD)v250, v180, v80, v81, (__int64)v175);
      v85 = v181;
      if ( v181 )
        ++v250[60].m128i_i32[2];
      v86 = v75 - v78 - 264;
      LOBYTE(v84) = v233 | v84;
      v87 = v84;
      LOBYTE(v87) = v84 & 1;
      v233 = v87;
      if ( (v239 & 1) != 0 )
      {
        v200 = v160;
        v199 = v159;
        v198 = v158;
        v197 = v157;
        v196 = v156;
        v195 = v155;
        *(_QWORD *)&v240 = 0;
        *((_QWORD *)&v240 + 1) = 1;
        v241 = 0;
        v237 = 1610612768;
        *(_QWORD *)&v236 = &v240;
        *((_QWORD *)&v236 + 1) = &off_1419E0B60;
        v88 = sub_14104A7D0(&v195, &v236);
        v89 = v250;
        if ( v88 )
          sub_141939040(
            (unsigned int)aADisplayImplem_53,
            55,
            (unsigned int)&v248,
            (unsigned int)&unk_1419D7FE8,
            (__int64)&off_1419E29A8);
        v165 = v241;
        v164 = v240;
        v90 = *v215;
        if ( *v215 != -1 && v90 )
          sub_140001660(v250[58].m128i_i64[0], v90, 1);
        v91 = v215;
        v215[2] = v165;
        *(_OWORD *)v91 = v164;
        sub_1416AC440(&v236, v86);
        v241 = v237;
        v240 = v236;
        v92 = v216->m128i_i64[0];
        if ( v216->m128i_i64[0] != -1 && v92 )
          sub_140001660(v89[59].m128i_i64[1], v92, 1);
        v93 = v216;
        v216[1].m128i_i64[0] = v241;
        *v93 = (__m128i)v240;
        if ( v195.m128i_i64[0] == 6 )
        {
          if ( (unsigned __int8)sub_14122E510(&v195.m128i_u64[1])
            || (v94 = 1, (unsigned __int8)sub_14122E5A0(&v195.m128i_u64[1])) )
          {
            v94 = 2;
          }
          v95 = v180;
          if ( (unsigned __int8)sub_14122E510(&v195.m128i_u64[1])
            || (v96 = sub_14122E5A0(&v195.m128i_u64[1]), v97 = -1, v96) )
          {
            *(_QWORD *)&v240 = 0;
            *((_QWORD *)&v240 + 1) = 1;
            v241 = 0;
            v237 = 1610612768;
            *(_QWORD *)&v236 = &v240;
            *((_QWORD *)&v236 + 1) = &off_1419E0B60;
            if ( (unsigned __int8)sub_14104A7D0(&v195, &v236) )
              sub_141939040(
                (unsigned int)aADisplayImplem_53,
                55,
                (unsigned int)&v248,
                (unsigned int)&unk_1419D7FE8,
                (__int64)&off_1419E29A8);
            v217 = *((_QWORD *)&v240 + 1);
            v97 = v240;
            v190 = v241;
          }
          if ( v95 >= v89[55].m128i_i64[1] )
          {
LABEL_98:
            if ( (unsigned __int64)(v97 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v217, v97, 1);
            goto LABEL_100;
          }
        }
        else
        {
          v97 = -1;
          v94 = 1;
          v95 = v180;
          if ( v180 >= v89[55].m128i_i64[1] )
            goto LABEL_98;
        }
        if ( !*(_BYTE *)(v89[55].m128i_i64[0] + 384 * v95 + 369) )
          goto LABEL_98;
        v89[70].m128i_i8[8] = v94;
        v105 = v89[61].m128i_i64[0];
        if ( v105 != -1 && v105 )
        {
          v106 = v97;
          sub_140001660(v89[61].m128i_i64[1], v89[61].m128i_i64[0], 1);
          v97 = v106;
        }
        v89[61].m128i_i64[0] = v97;
        v89[61].m128i_i64[1] = v217;
        v89[62].m128i_i64[0] = v190;
LABEL_100:
        v252 = 0;
        sub_1401954F0(&v195);
LABEL_101:
        v70 = v250;
        goto LABEL_102;
      }
      if ( *(_DWORD *)&v172[8] != -1 )
      {
        *(_QWORD *)&v200 = v160;
        v199 = v159;
        v198 = v158;
        v197 = v157;
        v196 = v156;
        v195 = v155;
        v98 = v174;
        v99 = *(_DWORD *)((char *)&v160 + 9);
        v100 = HIDWORD(v160);
        v101 = (__int64 *)v250;
        ++v250[60].m128i_i32[3];
        HIDWORD(v200) = v100;
        *(_DWORD *)((char *)&v200 + 9) = v99;
        BYTE8(v200) = v98;
        v252 = 1;
        sub_14020E620(v101, v189, v188, v79, (__int64)&v195);
        if ( v98 != 8 )
        {
          v102 = v79[5];
          v103 = v79[6];
          v252 = 1;
          LOBYTE(v84) = (sub_1402184C0(v250, v76, v102, v103) | v84) & 1;
          v233 = v84;
        }
        v70 = v250;
        if ( v76 >= v250[55].m128i_i64[1] )
          goto LABEL_102;
        v20 = v242;
        if ( *(_BYTE *)(v250[55].m128i_i64[0] + 384 * v76 + 369) == 1 )
        {
          v250[70].m128i_i8[8] = 1;
          v104 = v70[61].m128i_i64[0];
          v71 = v74;
          v69 = v246;
          if ( v104 != -1 && v104 )
            sub_140001660(v70[61].m128i_i64[1], v104, 1);
          v70[61].m128i_i64[0] = -1;
          goto LABEL_104;
        }
LABEL_103:
        v71 = v74;
        v69 = v246;
        goto LABEL_104;
      }
      v70 = v250;
      if ( v85 )
      {
        ++v250[60].m128i_i32[3];
        if ( v76 < v70[55].m128i_i64[1] )
        {
          v87 = 384 * v76;
          if ( *(_BYTE *)(v70[55].m128i_i64[0] + 384 * v76 + 369) == 1 )
          {
            v70[70].m128i_i8[8] = 1;
            v82 = v70[61].m128i_i64[0];
            if ( v82 != -1 && v82 )
              sub_140001660(v70[61].m128i_i64[1], v82, 1);
            v70[61].m128i_i64[0] = -1;
          }
        }
        v252 = 1;
        LODWORD(v236) = sub_141683E80(v87, v82, v83);
        DWORD1(v236) = v107;
        v252 = 1;
        sub_141683E30(&v195, &v236, 3577643008LL, 27111902);
        if ( v195.m128i_i8[0] )
          v108 = 0;
        else
          v108 = v195.m128i_i64[1];
        v116 = v250[55].m128i_u64[1];
        if ( v180 >= v116 )
        {
          v252 = 1;
          sub_1419390C3(v180, v116, &off_1419DC7A0);
        }
        v117 = v250[55].m128i_i64[0];
        v118 = 384 * v180;
        *(_QWORD *)(v117 + v118 + 80) = 2;
        *(_QWORD *)(v117 + v118 + 120) = 2;
        *(_DWORD *)(v117 + v118 + 352) = 0;
        *(_BYTE *)(v117 + v118 + 370) = 1;
        *(_QWORD *)(v117 + v118 + 64) = 1;
        *(_QWORD *)(v117 + v118 + 72) = v108;
        v252 = 1;
        sub_1416AC440(&v240, v86);
        v119 = v118 + v117;
        v120 = *(_QWORD *)(v119 + 160);
        if ( v120 == 2 )
        {
          v227 = 2;
          v121 = v245;
          v122 = v219;
          v123 = v193;
        }
        else
        {
          v121 = *(_BYTE *)(v119 + 200);
          if ( *(_QWORD *)(v119 + 176) == -1 )
          {
            v235 = -1;
            v122 = v219;
          }
          else
          {
            sub_1416AC440(&v236, v119 + 176);
            v228 = *((_QWORD *)&v236 + 1);
            v235 = v236;
            v122 = v237;
            v120 = *(_QWORD *)(v119 + 160);
          }
          v123 = *(_QWORD *)(v119 + 168);
          v227 = v120;
        }
        sub_141406CE0(&v236);
        v124 = ((int)v236 >> 13) - 1;
        v125 = 0;
        if ( (int)v236 >> 13 <= 0 )
        {
          v126 = (1 - ((int)v236 >> 13)) / 0x190u + 1;
          v124 += 400 * v126;
          v125 = -146097 * v126;
        }
        v208 = v241;
        v207 = v240;
        v210 = v108;
        v211 = 1;
        *(_QWORD *)&v196 = 2;
        *((_QWORD *)&v198 + 1) = 2;
        v209 = 0;
        v201 = v227;
        v193 = v123;
        v202 = v123;
        v203 = v235;
        v204 = v228;
        v219 = v122;
        v205 = v122;
        v245 = v121;
        v206 = v121;
        v195.m128i_i64[0] = 1;
        v195.m128i_i64[1] = 1000
                          * (DWORD1(v236)
                           + 86400LL
                           * (int)(((v124 / 100) >> 2)
                                 + ((1461 * v124) >> 2)
                                 + v125
                                 + (((unsigned int)v236 >> 4) & 0x1FF)
                                 - v124 / 100
                                 - 719163))
                          + DWORD2(v236) / 0xF4240uLL;
        v252 = 1;
        sub_14021AA50(v192, &v195, v108);
        goto LABEL_101;
      }
      if ( v76 >= v250[55].m128i_i64[1] || *(_BYTE *)(v250[55].m128i_i64[0] + 384 * v76 + 369) != 1 )
      {
LABEL_102:
        v20 = v242;
        goto LABEL_103;
      }
      v252 = 1;
      sub_140FF08F0(&v195, v191, 0);
      v109 = BYTE8(v198);
      v110 = v194;
      if ( !BYTE8(v198) )
        v110 = *((_QWORD *)&v197 + 1);
      v111 = v229;
      if ( !BYTE8(v198) )
        v111 = v197;
      v112 = *((_QWORD *)&v196 + 1);
      if ( BYTE8(v198) )
        v112 = -1;
      v70 = v250;
      v113 = v76 < v250[55].m128i_i64[1];
      v229 = v111;
      if ( v113 && *(_BYTE *)(v250[55].m128i_i64[0] + 384 * v76 + 369) )
      {
        v250[70].m128i_i8[8] = 2 - BYTE8(v198);
        v114 = v70[61].m128i_i64[0];
        v20 = v242;
        v69 = v246;
        if ( v114 != -1 && v114 )
        {
          v115 = v112;
          sub_140001660(v70[61].m128i_i64[1], v70[61].m128i_i64[0], 1);
          v111 = v229;
          v112 = v115;
        }
        v70[61].m128i_i64[0] = v112;
        v70[61].m128i_i64[1] = v111;
        v70[62].m128i_i64[0] = v110;
        v71 = v74;
      }
      else
      {
        v20 = v242;
        v71 = v74;
        v69 = v246;
        if ( (unsigned __int64)(v112 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v229, v112, 1);
      }
      if ( v195.m128i_i64[0] )
        sub_140001660(v195.m128i_i64[1], v195.m128i_i64[0], 1);
      v194 = v110;
      if ( v109 && *((_QWORD *)&v196 + 1) )
        sub_140001660(v197, *((_QWORD *)&v196 + 1), 1);
LABEL_104:
      if ( v177 != 2 && v178 != -1 && v178 )
        sub_140001660(v179, v178, 1);
      if ( v176[0] != 2 )
      {
LABEL_49:
        sub_140034220(v176);
        continue;
      }
    }
    v72 = v20;
LABEL_152:
    v185 = v72;
    sub_14038E920(v72, 0x21CFB2B78C13521DLL * ((unsigned __int64)(v20 - v72) >> 3));
    if ( v226 )
      sub_140001660(v238, 424 * v226, 8);
    if ( (v233 & 1) != 0 )
    {
      v155.m128i_i32[0] = sub_141683E80(v128, v127, v129);
      v155.m128i_i32[1] = v131;
      sub_141683E30(v172, &v155, 3577643008LL, 27111902);
      if ( v172[0] )
        v132 = 0;
      else
        v132 = *(_QWORD *)&v172[8];
      v70 = v250;
      v250[51].m128i_i64[0] = v132;
    }
    v133 = v167;
    v134 = v168;
    sub_140216CE0(v70, v167, v168, v130);
    v135 = v250[55].m128i_i64[0];
    v136 = v250[55].m128i_u64[1];
    *(_QWORD *)v172 = &v248;
    if ( v136 >= 2 )
    {
      if ( v136 >= 0x15 )
        sub_14065C0B0(v135, v136, v172);
      else
        sub_140E002E0(v135, v136, 1, v172);
    }
    v137 = v250;
    v138 = v250[55].m128i_i64[0] - 384;
    v139 = 384 * v250[55].m128i_i64[1];
    while ( v139 )
    {
      v139 -= 384;
      v12 = *(_BYTE *)(v138 + 753) == 1;
      v138 += 384;
      if ( v12 )
      {
        sub_140286DE0(v172);
        v140 = *(_QWORD *)v172;
        sub_1418F44E0(&v155, (const __m128i *)&v172[8], 0x178u);
        v137 = v250;
        if ( v250[9].m128i_i32[2] == 2 )
          goto LABEL_167;
        goto LABEL_166;
      }
    }
    v140 = 2;
    if ( v250[9].m128i_i32[2] == 2 )
      goto LABEL_167;
LABEL_166:
    sub_140034430(&v137[9].m128i_u64[1]);
LABEL_167:
    v137[9].m128i_i64[1] = v140;
    sub_1418F44E0(v137 + 10, &v155, 0x178u);
    v155.m128i_i32[0] = sub_141683E80(v142, v141, v143);
    v155.m128i_i32[1] = v144;
    sub_141683E30(v172, &v155, 3577643008LL, 27111902);
    if ( v172[0] )
      v145 = 0;
    else
      v145 = *(_QWORD *)&v172[8];
    v146 = (int)v250;
    v147 = v218;
    v250[70].m128i_i64[0] = v145;
    *(_QWORD *)v172 = -1;
    sub_14020F1D0(v146, 0, (unsigned int)v172, v147, (__int64)&v220);
    v148 = v161;
    v149 = v162;
    v150 = v225;
    v225[2] = v163;
    v150[1] = v149;
    *v150 = v148;
    if ( v134 )
    {
      v151 = (_QWORD *)(v133 + 8);
      do
      {
        v152 = *(v151 - 1);
        if ( v152 )
          sub_140001660(*v151, v152, 1);
        v151 += 3;
        --v134;
      }
      while ( v134 );
    }
    if ( v166 )
      sub_140001660(v133, 24 * v166, 8);
    if ( !_InterlockedDecrement64(v234) )
      sub_1409E6240(&v234);
    if ( *(_QWORD *)&v182[0] )
      sub_140001660(*((_QWORD *)&v182[0] + 1), *(_QWORD *)&v182[0], 1);
    if ( *(_QWORD *)&v183[0] )
      sub_140001660(*((_QWORD *)&v183[0] + 1), *(_QWORD *)&v183[0], 1);
    sub_1403FB570(&v230);
  }
  else
  {
    *(_QWORD *)v172 = (unsigned int)v239;
    *(_DWORD *)&v172[8] = v239;
    memset(&v172[12], 0, 24);
    v155.m128i_i64[0] = -1;
    sub_14020F1D0((_DWORD)v250, 0, (unsigned int)&v155, v14, (__int64)v172);
    v48 = sub_14167F170(v47);
    v53 = v48;
    if ( *(_BYTE *)(v48 + 16) == 1 )
    {
      v54 = *(_QWORD *)v48;
      v55 = *(_QWORD *)(v53 + 8);
    }
    else
    {
      v54 = sub_141696260(v50, v49, v51, v52);
      *(_QWORD *)v53 = v54;
      *(_QWORD *)(v53 + 8) = v55;
      *(_BYTE *)(v53 + 16) = 1;
    }
    *(_QWORD *)v53 = v54 + 1;
    v56 = v225;
    v225[1] = xmmword_1419D6520;
    *v56 = *(_OWORD *)&off_1419D6510;
    *((_QWORD *)v56 + 4) = v54;
    *((_QWORD *)v56 + 5) = v55;
    sub_1403FB570(&v230);
  }
  if ( v230 )
    sub_140001660(v231, 296 * v230, 8);
  if ( v212 != -1 && v212 )
    sub_140001660(v213.m128i_i64[0], v212, 1);
  return v225;
}
