// win 1.2.7 | module src/core/repository/usage_refresh.rs | ea 0x140220210 | name sub_140220210
// win 1.2.7 | module src/core/repository/usage_refresh.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140220210(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rsi
  char v6; // bl
  __int64 v7; // rax
  unsigned __int32 v8; // r15d
  __int32 v9; // r9d
  int v10; // r10d
  unsigned __int32 v11; // eax
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int8 *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rdi
  char v24; // bl
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rbx
  _QWORD *v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // r14
  __m256i *v37; // r15
  __m256i *v38; // r12
  __int64 v39; // rbx
  char v40; // di
  char *v41; // rcx
  int v42; // edx
  __int64 v43; // r14
  __int64 v44; // rbx
  __int64 v45; // rdx
  unsigned __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 *v50; // rdi
  __int64 *i; // rcx
  _QWORD *v52; // r9
  _QWORD *v53; // rdi
  __int64 v54; // r14
  char v55; // di
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  signed __int64 v59; // r13
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rsi
  unsigned __int64 v64; // r15
  __int64 v65; // r13
  __int64 v66; // rbx
  __int64 v67; // r12
  __int64 v68; // r14
  __int64 v69; // rdx
  _QWORD *v70; // r12
  __int64 v71; // rdx
  __int64 v72; // rdx
  unsigned __int64 v73; // rdi
  __int64 v74; // r13
  char v75; // r14
  __int64 v76; // rdx
  void *v77; // rax
  void *v78; // r13
  __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // r14
  unsigned __int64 v83; // rax
  char v84; // di
  __int64 v85; // r9
  __int64 v86; // rbx
  __int64 v87; // rdx
  bool v88; // cf
  __int64 v89; // rax
  __int64 v90; // r13
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rdx
  char v94; // di
  unsigned __int64 v95; // r14
  char v96; // al
  __int64 v97; // rdx
  int v98; // eax
  unsigned __int64 v99; // r14
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdi
  unsigned __int64 v105; // rax
  __int64 v106; // rdx
  int v107; // edx
  __int64 v108; // r13
  unsigned __int64 v109; // rax
  __int64 v110; // rdi
  __int64 v111; // rbx
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // r12
  char v115; // bl
  __int64 v116; // r13
  __int64 v117; // rdi
  int v118; // edx
  int v119; // ecx
  unsigned int v120; // ecx
  __int64 v121; // rdi
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rcx
  bool v125; // zf
  __int64 v126; // r14
  __int64 v127; // rsi
  __int64 v128; // rdi
  _QWORD *v129; // rbx
  __int64 v130; // rdx
  __int64 result; // rax
  __int64 v132; // rdx
  _QWORD *v133; // rcx
  int v134; // edx
  int v135; // edx
  __int64 v136; // rax
  int v137; // r9d
  _QWORD *v138; // rsi
  __int64 v139; // rdx
  _BYTE v140[104]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v141; // [rsp+C8h] [rbp+48h]
  __int64 v142; // [rsp+D0h] [rbp+50h]
  __int128 v143; // [rsp+D8h] [rbp+58h]
  __int128 v144; // [rsp+E8h] [rbp+68h]
  __int128 v145; // [rsp+F8h] [rbp+78h]
  __int64 v146; // [rsp+108h] [rbp+88h]
  __int128 v147; // [rsp+1E0h] [rbp+160h]
  __int128 v148; // [rsp+1F0h] [rbp+170h]
  __int64 v149; // [rsp+200h] [rbp+180h] BYREF
  __int128 v150; // [rsp+208h] [rbp+188h]
  char v151; // [rsp+218h] [rbp+198h]
  __m256i v152; // [rsp+220h] [rbp+1A0h] BYREF
  __m256i v153; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v154; // [rsp+268h] [rbp+1E8h] BYREF
  __int128 v155; // [rsp+270h] [rbp+1F0h]
  char v156; // [rsp+280h] [rbp+200h]
  _QWORD *v157; // [rsp+288h] [rbp+208h]
  __int64 v158; // [rsp+290h] [rbp+210h]
  __int64 v159; // [rsp+298h] [rbp+218h]
  __int64 *v160; // [rsp+2A0h] [rbp+220h]
  __m256i *v161; // [rsp+2A8h] [rbp+228h]
  __m256i *v162; // [rsp+2B0h] [rbp+230h]
  char *v163; // [rsp+2B8h] [rbp+238h]
  __int64 v164; // [rsp+2C0h] [rbp+240h]
  __int64 v165; // [rsp+2C8h] [rbp+248h]
  __int64 v166; // [rsp+2D0h] [rbp+250h]
  __int64 v167; // [rsp+2D8h] [rbp+258h]
  __int128 v168; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v169; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v170; // [rsp+300h] [rbp+280h]
  __int128 v171; // [rsp+310h] [rbp+290h]
  __int128 v172; // [rsp+320h] [rbp+2A0h]
  __int128 v173; // [rsp+330h] [rbp+2B0h]
  __int64 v174; // [rsp+340h] [rbp+2C0h]
  char v175; // [rsp+348h] [rbp+2C8h]
  __m256i v176; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v177; // [rsp+370h] [rbp+2F0h]
  __int128 v178; // [rsp+380h] [rbp+300h]
  __int128 v179; // [rsp+390h] [rbp+310h]
  __int128 v180; // [rsp+3A0h] [rbp+320h]
  __int64 v181; // [rsp+3B0h] [rbp+330h]
  __int64 v182; // [rsp+3B8h] [rbp+338h]
  __int64 v183; // [rsp+3C0h] [rbp+340h]
  __int64 v184; // [rsp+3C8h] [rbp+348h]
  __int64 v185; // [rsp+3D0h] [rbp+350h]
  char v186; // [rsp+3D8h] [rbp+358h]
  __int128 v187; // [rsp+3E0h] [rbp+360h]
  __int64 v188; // [rsp+3F0h] [rbp+370h]
  int v189; // [rsp+3F8h] [rbp+378h]
  __int64 v190; // [rsp+400h] [rbp+380h]
  char v191; // [rsp+408h] [rbp+388h]
  __int64 *v192; // [rsp+4D8h] [rbp+458h] BYREF
  __m256i *v193; // [rsp+4E0h] [rbp+460h]
  __m256i *v194; // [rsp+4E8h] [rbp+468h]
  char *v195; // [rsp+4F0h] [rbp+470h]
  __int64 v196; // [rsp+4F8h] [rbp+478h] BYREF
  __int64 v197; // [rsp+500h] [rbp+480h]
  __int64 v198; // [rsp+508h] [rbp+488h]
  int v199; // [rsp+514h] [rbp+494h] BYREF
  int v200; // [rsp+518h] [rbp+498h]
  int v201; // [rsp+51Ch] [rbp+49Ch]
  __int128 v202; // [rsp+520h] [rbp+4A0h]
  __int64 v203; // [rsp+530h] [rbp+4B0h]
  _DWORD v204[2]; // [rsp+538h] [rbp+4B8h] BYREF
  __int64 v205; // [rsp+540h] [rbp+4C0h]
  __int64 v206; // [rsp+548h] [rbp+4C8h]
  __int64 v207; // [rsp+550h] [rbp+4D0h]
  __int64 v208; // [rsp+558h] [rbp+4D8h]
  __int64 v209; // [rsp+560h] [rbp+4E0h]
  unsigned __int64 v210; // [rsp+568h] [rbp+4E8h]
  __int64 v211; // [rsp+570h] [rbp+4F0h]
  __int64 v212; // [rsp+578h] [rbp+4F8h] BYREF
  __int64 v213; // [rsp+580h] [rbp+500h]
  __int64 v214; // [rsp+588h] [rbp+508h]
  __int128 v215; // [rsp+590h] [rbp+510h] BYREF
  __int64 v216; // [rsp+5A0h] [rbp+520h]
  __int64 v217; // [rsp+5A8h] [rbp+528h]
  __int64 v218; // [rsp+5B0h] [rbp+530h]
  __int64 v219; // [rsp+5B8h] [rbp+538h]
  __int64 v220; // [rsp+5C0h] [rbp+540h]
  __int64 v221; // [rsp+5C8h] [rbp+548h]
  __int128 v222; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v223; // [rsp+5E0h] [rbp+560h]
  __int128 v224; // [rsp+5F0h] [rbp+570h]
  __int128 v225; // [rsp+600h] [rbp+580h]
  __int128 v226; // [rsp+610h] [rbp+590h]
  __int128 v227; // [rsp+620h] [rbp+5A0h]
  __int64 v228; // [rsp+630h] [rbp+5B0h]
  __int64 v229; // [rsp+640h] [rbp+5C0h] BYREF
  _QWORD *v230; // [rsp+648h] [rbp+5C8h]
  unsigned __int64 v231; // [rsp+650h] [rbp+5D0h]
  __int64 v232; // [rsp+658h] [rbp+5D8h]
  __int64 v233; // [rsp+660h] [rbp+5E0h]
  int v234; // [rsp+66Ch] [rbp+5ECh]
  int v235; // [rsp+670h] [rbp+5F0h]
  int v236; // [rsp+674h] [rbp+5F4h]
  unsigned __int64 v237; // [rsp+678h] [rbp+5F8h]
  __int64 v238; // [rsp+680h] [rbp+600h]
  __int64 v239; // [rsp+688h] [rbp+608h]
  __int64 v240; // [rsp+690h] [rbp+610h]
  __int64 *v241; // [rsp+698h] [rbp+618h]
  unsigned __int64 v242; // [rsp+6A0h] [rbp+620h]
  __int64 v243; // [rsp+6A8h] [rbp+628h]
  __int128 v244; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v245; // [rsp+6C0h] [rbp+640h]
  __int64 v246; // [rsp+6C8h] [rbp+648h]
  char v247; // [rsp+6D7h] [rbp+657h]
  __int64 v248; // [rsp+6D8h] [rbp+658h]
  _QWORD *v249; // [rsp+6E0h] [rbp+660h]
  char v250; // [rsp+6EDh] [rbp+66Dh] BYREF
  char v251; // [rsp+6EEh] [rbp+66Eh] BYREF
  char v252; // [rsp+6EFh] [rbp+66Fh]
  __int64 v253; // [rsp+6F0h] [rbp+670h]

  v253 = -2;
  v164 = a3;
  v165 = a2;
  v5 = a1;
  v250 = a4;
  v6 = *(_BYTE *)(a1 + 136);
  if ( *(_QWORD *)(a1 + 112) == -1 )
  {
    v7 = -1;
  }
  else
  {
    sub_1416AC440(&v176, a1 + 112);
    v7 = v176.m256i_i64[0];
    *(_OWORD *)v140 = *(_OWORD *)&v176.m256i_u64[1];
  }
  v156 = v6;
  v154 = v7;
  v155 = *(_OWORD *)v140;
  sub_1416AB9B0(&v176, *(_QWORD *)(v5 + 624), *(_QWORD *)(v5 + 632));
  v153 = v176;
  sub_1416AB9B0(&v176, *(_QWORD *)(v5 + 600), *(_QWORD *)(v5 + 608));
  v152 = v176;
  v192 = &v154;
  v193 = &v152;
  v194 = &v153;
  v195 = &v250;
  LOBYTE(v4) = v250;
  sub_141406CE0(&v176);
  v8 = v176.m256i_i32[0];
  v9 = (v176.m256i_i32[0] >> 13) - 1;
  v10 = 0;
  if ( v176.m256i_i32[0] >> 13 <= 0 )
  {
    v11 = (1 - (v176.m256i_i32[0] >> 13)) / 0x190u + 1;
    v9 += 400 * v11;
    v10 = -146097 * v11;
  }
  v12 = *(_QWORD *)(v5 + 888);
  LODWORD(v242) = v9;
  LODWORD(v246) = v10;
  if ( (unsigned __int8)v4 | (v12 == 0) )
  {
    v13 = v12;
  }
  else
  {
    v14 = *(_QWORD *)(v5 + 880);
    v15 = v12 & 3;
    if ( (unsigned __int64)(v12 - 1) >= 3 )
    {
      v17 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
      v18 = (unsigned __int8 *)(v14 + 1521);
      v16 = 0;
      v13 = 0;
      do
      {
        v13 += *(v18 - 1152) + *(v18 - 768) + *(v18 - 384) + *v18;
        v16 += 4;
        v18 += 1536;
      }
      while ( v17 != v16 );
      if ( !v15 )
        goto LABEL_15;
    }
    else
    {
      v16 = 0;
      v13 = 0;
    }
    v19 = 384 * v16 + v14 + 369;
    v20 = 3LL * (unsigned int)((_DWORD)v15 << 7);
    v21 = 0;
    do
    {
      v13 += *(unsigned __int8 *)(v19 + v21);
      v21 += 384;
    }
    while ( v20 != v21 );
  }
LABEL_15:
  v22 = v176.m256i_u32[1];
  v23 = v176.m256i_u32[2];
  v24 = *(_BYTE *)(v5 + 136);
  if ( *(_QWORD *)(v5 + 112) == -1 )
  {
    v25 = -1;
  }
  else
  {
    sub_1416AC440(&v176, v5 + 112);
    v25 = v176.m256i_i64[0];
    *(_OWORD *)v140 = *(_OWORD *)&v176.m256i_u64[1];
  }
  v151 = v24;
  v219 = v25;
  v149 = v25;
  v150 = *(_OWORD *)v140;
  LOBYTE(v4) = v4 ^ 1;
  sub_1402152F0(&v229, v5, v4);
  v26 = v231;
  v249 = v230;
  sub_1403CA3A0(&v212, v230, &v230[37 * v231]);
  v27 = (unsigned __int64)(1374389535LL * (int)v242) >> 63;
  v28 = (unsigned int)(((int)v242 / 100) >> 2);
  v29 = 1000
      * (v22 + 86400LL * (int)(v28 + ((1461 * (int)v242) >> 2) + v246 + ((v8 >> 4) & 0x1FF) - (int)v242 / 100 - 719163));
  v30 = v29 + ((unsigned __int64)(1125899907 * v23) >> 50);
  v199 = v13;
  v31 = (unsigned int)(v13 - v26);
  v200 = 0;
  v201 = v13 - v26;
  v202 = 0;
  v203 = 0;
  if ( v26 )
  {
    v210 = v29 + ((unsigned __int64)(1125899907 * v23) >> 50);
    v160 = v192;
    v161 = v193;
    v162 = v194;
    v163 = v195;
    v233 = 0;
    v236 = 0;
    v234 = 0;
    v235 = 0;
    v32 = v249;
    v208 = v5;
    while ( 1 )
    {
      if ( !v26 )
      {
        v121 = v213;
        v122 = v214;
        sub_140216CE0(v5, v213, v214, v30);
        v123 = *(_QWORD *)(v5 + 880) - 384LL;
        v124 = 384LL * *(_QWORD *)(v5 + 888);
        while ( v124 )
        {
          v124 -= 384;
          v125 = *(_BYTE *)(v123 + 753) == 1;
          v123 += 384;
          if ( v125 )
          {
            sub_140286DE0(&v176);
            v126 = v176.m256i_i64[0];
            sub_1418F44E0(v140, &v176.m256i_u64[1], 376);
            if ( *(_DWORD *)(v5 + 152) == 2 )
              goto LABEL_221;
            goto LABEL_220;
          }
        }
        v126 = 2;
        if ( *(_DWORD *)(v5 + 152) == 2 )
          goto LABEL_221;
LABEL_220:
        sub_140034430(v5 + 152);
LABEL_221:
        *(_QWORD *)(v5 + 152) = v126;
        sub_1418F44E0(v5 + 160, v140, 376);
        *(_DWORD *)v140 = sub_141683E80();
        *(_DWORD *)&v140[4] = v134;
        sub_141683E30(&v176, v140, 3577643008LL, 27111902);
        if ( v176.m256i_i8[0] )
          v136 = 0;
        else
          v136 = v176.m256i_i64[1];
        v137 = v210;
        *(_QWORD *)(v5 + 1120) = v136;
        v176.m256i_i64[0] = -1;
        LOBYTE(v135) = 1;
        sub_14020F1D0(v5, v135, (unsigned int)&v176, v137, (__int64)&v199);
        if ( v122 )
        {
          v138 = (_QWORD *)(v121 + 8);
          do
          {
            v139 = *(v138 - 1);
            if ( v139 )
              sub_140001660(*v138, v139, 1);
            v138 += 3;
            --v122;
          }
          while ( v122 );
        }
        if ( v212 )
          sub_140001660(v121, 24 * v212, 8);
        sub_1403FB570(&v229);
        result = v229;
        if ( v229 )
        {
          v133 = v230;
          v132 = 296 * v229;
LABEL_233:
          result = sub_140001660(v133, v132, 8);
        }
        goto LABEL_234;
      }
      v33 = 5;
      if ( v26 < 5 )
        v33 = v26;
      v242 = v31;
      if ( v26 == 1 )
      {
        nullsub_1(v28);
        v34 = sub_140001650(184, 8);
        if ( !v34 )
          sub_141938D11(8, 184);
        v246 = v33;
        v218 = 1;
        v240 = v34;
        sub_14028DA20(&v176, v32 + 14);
        v35 = v32[11];
        v249 = v32;
        v36 = v32[12];
        v37 = v161;
        v38 = v162;
        v39 = (__int64)v160;
        sub_1402C30A0(
          (unsigned int)&v215,
          v35,
          v36,
          (unsigned int)&v176,
          (__int64)v160,
          v161->m256i_i64[1],
          v161->m256i_i64[2],
          v162->m256i_i64[1],
          v162->m256i_i64[2],
          0);
        sub_140216100(
          (__int64)&v168,
          v35,
          v36,
          (__int64)&v176,
          (__int64 *)&v215,
          v39,
          v37->m256i_i64[1],
          v37->m256i_i64[2],
          v38->m256i_i64[1],
          v38->m256i_i64[2],
          1u);
        v228 = v174;
        v227 = v173;
        v226 = v172;
        v225 = v171;
        v224 = v170;
        v223 = v169;
        v222 = v168;
        v40 = v175;
        v41 = aAllUsageactive;
        if ( !*v163 )
          v41 = &aAllUsageactive[9];
        sub_140210F20(v41, 3LL * (*v163 == 0) + 9, &v215);
        v32 = v249;
        v5 = v208;
        v204[0] = sub_141683E80();
        v204[1] = v42;
        sub_141683E30(&v244, v204, 3577643008LL, 27111902);
        v43 = 0;
        v44 = 0;
        if ( !(_BYTE)v244 )
          v44 = *((_QWORD *)&v244 + 1);
        if ( *((_QWORD *)&v179 + 1) != -1 )
        {
          if ( sub_1402C2FB0(v180, *((_QWORD *)&v180 + 1)) == 1 )
          {
            v35 = v44 + v45;
            v43 = 1;
          }
          else
          {
            v43 = 0;
          }
        }
        v49 = v215;
        sub_140ED79A0(&v169, &v176);
        LOBYTE(v237) = v40;
        if ( v49 >= 0 )
          LOBYTE(v49) = 4;
        BYTE8(v170) = v49;
        *(_QWORD *)&v168 = v43;
        *((_QWORD *)&v168 + 1) = v35;
        *(_OWORD *)v140 = v222;
        *(_OWORD *)&v140[16] = v223;
        *(_OWORD *)&v140[32] = v224;
        *(_OWORD *)&v140[48] = v225;
        *(_OWORD *)&v140[64] = v226;
        *(_OWORD *)&v140[80] = v227;
        *(_QWORD *)&v140[96] = v228;
        v146 = v216;
        v145 = v215;
        v144 = v170;
        v143 = v169;
        v141 = v43;
        v142 = v35;
        if ( v176.m256i_i64[0] != -1 && v176.m256i_i64[0] )
          sub_140001660(v176.m256i_i64[1], v176.m256i_i64[0], 1);
        v47 = v240;
        v26 = v218;
        v33 = v246;
        if ( v176.m256i_i64[3] != -1 && v176.m256i_i64[3] )
          sub_140001660(v177, v176.m256i_i64[3], 1);
        if ( (_QWORD)v178 != -1 && (_QWORD)v178 )
          sub_140001660(*((_QWORD *)&v178 + 1), v178, 1);
        if ( *((_QWORD *)&v179 + 1) != -1 && *((_QWORD *)&v179 + 1) )
          sub_140001660(v180, *((_QWORD *)&v179 + 1), 1);
        if ( v181 != -1 && v181 )
          sub_140001660(v182, v181, 1);
        if ( v184 != -1 && v184 )
          sub_140001660(v185, v184, 1);
        if ( (_QWORD)v187 != -1 && (_QWORD)v187 )
          sub_140001660(*((_QWORD *)&v187 + 1), v187, 1);
        sub_1418F44E0(v47, v140, 176);
        *(_BYTE *)(v47 + 176) = v237;
        v196 = 1;
        v197 = v47;
        v198 = 1;
        v48 = 1;
        v238 = 1;
      }
      else
      {
        v176.m256i_i64[0] = (__int64)&v192;
        v176.m256i_i64[1] = (__int64)v32;
        v176.m256i_i64[2] = v33;
        sub_140EA06D0(&v196, &v176, &off_1419D52D8, v30);
        v238 = v196;
        v47 = v197;
        v48 = v198;
      }
      v157 = &v32[37 * v33];
      v218 = v26 - v33;
      v217 = v47 + 184 * v48;
      v240 = v47;
      v50 = (__int64 *)v47;
      v31 = v242;
LABEL_59:
      for ( i = v50; ; i = v241 )
      {
        v52 = v32;
        v53 = v157;
        if ( v32 == v157 || i == (__int64 *)v217 )
          goto LABEL_203;
        v54 = *i;
        if ( *i == 2 )
          break;
        v241 = i + 23;
        v55 = *((_BYTE *)i + 176);
        v173 = *(_OWORD *)(i + 11);
        v172 = *(_OWORD *)(i + 9);
        v56 = *(_OWORD *)(i + 1);
        v57 = *(_OWORD *)(i + 3);
        v58 = *(_OWORD *)(i + 5);
        v171 = *(_OWORD *)(i + 7);
        v170 = v58;
        v169 = v57;
        v168 = v56;
        v59 = i[19];
        v60 = i[20];
        v147 = *(_OWORD *)(i + 13);
        v61 = i[15];
        v232 = i[16];
        v148 = *(_OWORD *)(i + 17);
        *(_QWORD *)v140 = v54;
        *(_OWORD *)&v140[88] = v173;
        *(_OWORD *)&v140[72] = v172;
        *(_OWORD *)&v140[56] = v171;
        *(_OWORD *)&v140[40] = v58;
        *(_OWORD *)&v140[24] = v57;
        *(_OWORD *)&v140[8] = v56;
        v205 = v60;
        if ( v59 >= (__int64)0x8000000000000002uLL )
        {
          v31 = (unsigned int)(v31 + 1);
          v201 = v31;
        }
        else
        {
          v200 = ++v235;
        }
        v46 = v32[36];
        v237 = *(_QWORD *)(v5 + 888);
        v242 = v46;
        v246 = v59;
        if ( v46 < v237 )
        {
          v249 = v32;
          v243 = v54;
          v62 = v5;
          v63 = v61;
          v64 = v31;
          v65 = v62;
          v66 = *(_QWORD *)(v62 + 880);
          v67 = 384 * v242;
          v68 = v66 + 384 * v242;
          if ( *(_DWORD *)(v68 + 160) != 2 )
          {
            v69 = *(_QWORD *)(v68 + 176);
            if ( v69 != -1 )
            {
              if ( v69 )
                sub_140001660(*(_QWORD *)(v68 + 184), v69, 1);
            }
          }
          *(_OWORD *)(v66 + v67 + 160) = v147;
          v61 = v63;
          *(_QWORD *)(v68 + 176) = v63;
          *(_QWORD *)(v68 + 184) = v232;
          *(_OWORD *)(v68 + 192) = v148;
          v31 = v64;
          v5 = v65;
          v54 = v243;
          v59 = v246;
          v52 = v249;
        }
        v70 = v52;
        v249 = v52 + 37;
        if ( (v55 & 1) != 0 )
        {
          HIDWORD(v202) = ++v234;
          ++*(_DWORD *)(v5 + 968);
          if ( v59 < (__int64)0x8000000000000002uLL )
          {
            v248 = v61;
            v243 = v54;
            if ( (v54 & 1) != 0 )
            {
              v180 = *(_OWORD *)&v140[88];
              v179 = *(_OWORD *)&v140[72];
              v178 = *(_OWORD *)&v140[56];
              v177 = *(_OWORD *)&v140[40];
              v176 = *(__m256i *)&v140[8];
              v233 = (unsigned int)(v233 + 1);
              HIDWORD(v203) = v233;
              *(_QWORD *)&v244 = 0;
              *((_QWORD *)&v244 + 1) = 1;
              v245 = 0;
              *(_QWORD *)&v223 = 1610612768;
              *(_QWORD *)&v222 = &v244;
              *((_QWORD *)&v222 + 1) = &off_1419E0B60;
              if ( (unsigned __int8)sub_14104A7D0(&v176, &v222) )
                sub_141939040(
                  (unsigned int)aADisplayImplem_53,
                  55,
                  (unsigned int)&v251,
                  (unsigned int)&unk_1419D7FE8,
                  (__int64)&off_1419E29A8);
              v216 = v245;
              v215 = v244;
              v92 = *(_QWORD *)(v5 + 920);
              if ( v92 != -1 && v92 )
                sub_140001660(*(_QWORD *)(v5 + 928), v92, 1);
              *(_QWORD *)(v5 + 936) = v216;
              *(_OWORD *)(v5 + 920) = v215;
              sub_1416AC440(&v222, v70 + 4);
              v245 = v223;
              v244 = v222;
              v93 = *(_QWORD *)(v5 + 944);
              if ( v93 != -1 && v93 )
                sub_140001660(*(_QWORD *)(v5 + 952), v93, 1);
              *(_QWORD *)(v5 + 960) = v245;
              *(_OWORD *)(v5 + 944) = v244;
              if ( v176.m256i_i64[0] == 6 )
              {
                if ( (unsigned __int8)sub_14122E510(&v176.m256i_u64[1])
                  || (v94 = 1, (unsigned __int8)sub_14122E5A0(&v176.m256i_u64[1])) )
                {
                  v94 = 2;
                }
                v95 = v70[36];
                if ( (unsigned __int8)sub_14122E510(&v176.m256i_u64[1])
                  || (v96 = sub_14122E5A0(&v176.m256i_u64[1]), v97 = -1, v96) )
                {
                  *(_QWORD *)&v244 = 0;
                  *((_QWORD *)&v244 + 1) = 1;
                  v245 = 0;
                  *(_QWORD *)&v223 = 1610612768;
                  *(_QWORD *)&v222 = &v244;
                  *((_QWORD *)&v222 + 1) = &off_1419E0B60;
                  if ( (unsigned __int8)sub_14104A7D0(&v176, &v222) )
                    sub_141939040(
                      (unsigned int)aADisplayImplem_53,
                      55,
                      (unsigned int)&v251,
                      (unsigned int)&unk_1419D7FE8,
                      (__int64)&off_1419E29A8);
                  v209 = *((_QWORD *)&v244 + 1);
                  v97 = v244;
                  v166 = v245;
                }
                if ( v95 >= *(_QWORD *)(v5 + 888) )
                {
LABEL_173:
                  v99 = v31;
                  if ( (unsigned __int64)(v97 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                    sub_140001660(v209, v97, 1);
                  goto LABEL_175;
                }
              }
              else
              {
                v95 = v70[36];
                v97 = -1;
                v94 = 1;
                if ( v95 >= *(_QWORD *)(v5 + 888) )
                  goto LABEL_173;
              }
              if ( !*(_BYTE *)(*(_QWORD *)(v5 + 880) + 384 * v95 + 369) )
                goto LABEL_173;
              v99 = v31;
              *(_BYTE *)(v5 + 1128) = v94;
              v103 = *(_QWORD *)(v5 + 976);
              if ( v103 != -1 && v103 )
              {
                v104 = v97;
                sub_140001660(*(_QWORD *)(v5 + 984), *(_QWORD *)(v5 + 976), 1);
                v97 = v104;
              }
              *(_QWORD *)(v5 + 976) = v97;
              *(_QWORD *)(v5 + 984) = v209;
              *(_QWORD *)(v5 + 992) = v166;
LABEL_175:
              v252 = 0;
              sub_1401954F0(&v176);
              v5 = v208;
LABEL_176:
              v50 = v241;
              v102 = v248;
              v32 = v249;
              if ( v242 >= v237 )
              {
LABEL_177:
                if ( (unsigned __int64)(v102 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                  sub_140001660(v232, v102, 1);
              }
              goto LABEL_179;
            }
            v98 = *(_DWORD *)&v140[8];
            LODWORD(v203) = ++v236;
            ++*(_DWORD *)(v5 + 972);
            if ( v98 != -1 )
            {
              v99 = v31;
              v252 = 1;
              sub_14020E620(v5, v165, v164, (_DWORD)v52, (__int64)&v140[8]);
              v100 = v70[36];
              if ( v100 >= *(_QWORD *)(v5 + 888) )
                goto LABEL_176;
              v50 = v241;
              v32 = v249;
              if ( *(_BYTE *)(*(_QWORD *)(v5 + 880) + 384 * v100 + 369) == 1 )
              {
                *(_BYTE *)(v5 + 1128) = 1;
                v101 = *(_QWORD *)(v5 + 976);
                if ( v101 != -1 && v101 )
                  sub_140001660(*(_QWORD *)(v5 + 984), v101, 1);
                *(_QWORD *)(v5 + 976) = -1;
                v102 = v248;
                if ( v242 >= v237 )
                  goto LABEL_177;
              }
              else
              {
                v102 = v248;
                if ( v242 >= v237 )
                  goto LABEL_177;
              }
LABEL_179:
              v31 = v99;
              goto LABEL_59;
            }
            v105 = v52[36];
            if ( v105 < *(_QWORD *)(v5 + 888) && *(_BYTE *)(*(_QWORD *)(v5 + 880) + 384 * v105 + 369) == 1 )
            {
              *(_BYTE *)(v5 + 1128) = 1;
              v106 = *(_QWORD *)(v5 + 976);
              if ( v106 != -1 && v106 )
                sub_140001660(*(_QWORD *)(v5 + 984), v106, 1);
              *(_QWORD *)(v5 + 976) = -1;
            }
            v99 = v31;
            v252 = 1;
            LODWORD(v222) = sub_141683E80();
            DWORD1(v222) = v107;
            v252 = 1;
            sub_141683E30(&v176, &v222, 3577643008LL, 27111902);
            if ( v176.m256i_i8[0] )
            {
              v108 = 0;
              v102 = v248;
              v109 = v70[36];
              if ( v109 >= *(_QWORD *)(v5 + 888) )
              {
LABEL_188:
                v50 = v241;
                v32 = v249;
                if ( v242 >= v237 )
                  goto LABEL_177;
                goto LABEL_179;
              }
            }
            else
            {
              v108 = v176.m256i_i64[1];
              v102 = v248;
              v109 = v70[36];
              if ( v109 >= *(_QWORD *)(v5 + 888) )
                goto LABEL_188;
            }
            v110 = *(_QWORD *)(v5 + 880);
            v111 = 384 * v109;
            *(_QWORD *)(v110 + v111 + 80) = 2;
            *(_QWORD *)(v110 + v111 + 120) = 2;
            *(_DWORD *)(v110 + v111 + 352) = 0;
            *(_BYTE *)(v110 + v111 + 370) = 1;
            *(_QWORD *)(v110 + v111 + 64) = 1;
            *(_QWORD *)(v110 + v111 + 72) = v108;
            v252 = 1;
            sub_1416AC440(&v244, v70 + 4);
            v112 = v111 + v110;
            v113 = *(_QWORD *)(v112 + 160);
            if ( v113 == 2 )
            {
              v220 = 2;
              v114 = v108;
              v115 = v247;
              v116 = v211;
              v117 = v167;
            }
            else
            {
              v115 = *(_BYTE *)(v112 + 200);
              v114 = v108;
              if ( *(_QWORD *)(v112 + 176) == -1 )
              {
                v239 = -1;
                v116 = v211;
              }
              else
              {
                sub_1416AC440(&v222, v112 + 176);
                v221 = *((_QWORD *)&v222 + 1);
                v239 = v222;
                v116 = v223;
                v113 = *(_QWORD *)(v112 + 160);
              }
              v117 = *(_QWORD *)(v112 + 168);
              v220 = v113;
            }
            sub_141406CE0(&v222);
            v118 = ((int)v222 >> 13) - 1;
            v119 = 0;
            if ( (int)v222 >> 13 <= 0 )
            {
              v120 = (1 - ((int)v222 >> 13)) / 0x190u + 1;
              v118 += 400 * v120;
              v119 = -146097 * v120;
            }
            v188 = v245;
            v187 = v244;
            v190 = v114;
            v191 = 1;
            v176.m256i_i64[2] = 2;
            *((_QWORD *)&v178 + 1) = 2;
            v189 = 0;
            v181 = v220;
            v167 = v117;
            v182 = v117;
            v183 = v239;
            v184 = v221;
            v211 = v116;
            v185 = v116;
            v247 = v115;
            v186 = v115;
            v176.m256i_i64[0] = 1;
            v176.m256i_i64[1] = 1000
                              * (DWORD1(v222)
                               + 86400LL
                               * (int)(((v118 / 100) >> 2)
                                     + ((1461 * v118) >> 2)
                                     + v119
                                     + (((unsigned int)v222 >> 4) & 0x1FF)
                                     - v118 / 100
                                     - 719163))
                              + DWORD2(v222) / 0xF4240uLL;
            v252 = 1;
            sub_14021AA50(v5 + 832, &v176, v114);
            goto LABEL_176;
          }
          v233 = (unsigned int)(v233 + 1);
          HIDWORD(v203) = v233;
          if ( (v54 & 1) != 0 )
          {
            v243 = v54;
            v248 = v61;
            *(_QWORD *)&v222 = 0;
            *((_QWORD *)&v222 + 1) = 1;
            *(_QWORD *)&v223 = 0;
            v176.m256i_i64[2] = 1610612768;
            v176.m256i_i64[0] = (__int64)&v222;
            v176.m256i_i64[1] = (__int64)&off_1419E0B60;
            if ( (unsigned __int8)sub_14104A7D0(&v140[8], &v176) )
              sub_141939040(
                (unsigned int)aADisplayImplem_53,
                55,
                (unsigned int)&v251,
                (unsigned int)&unk_1419D7FE8,
                (__int64)&off_1419E29A8);
            v245 = v223;
            v244 = v222;
            v71 = *(_QWORD *)(v5 + 920);
            if ( v71 != -1 && v71 )
              sub_140001660(*(_QWORD *)(v5 + 928), v71, 1);
            *(_QWORD *)(v5 + 936) = v245;
            *(_OWORD *)(v5 + 920) = v244;
            v252 = 1;
            sub_1416AC440(&v176, v70 + 4);
            *(_QWORD *)&v223 = v176.m256i_i64[2];
            v222 = *(_OWORD *)v176.m256i_i8;
            v72 = *(_QWORD *)(v5 + 944);
            if ( v72 != -1 && v72 )
              sub_140001660(*(_QWORD *)(v5 + 952), v72, 1);
            *(_QWORD *)(v5 + 960) = v223;
            *(_OWORD *)(v5 + 944) = v222;
            v73 = v70[36];
            v74 = -1;
            v75 = 1;
            if ( *(_DWORD *)&v140[8] == 6 )
            {
              v252 = 1;
              if ( (unsigned __int8)sub_14122E510(&v140[16]) || (v252 = 1, (unsigned __int8)sub_14122E5A0(&v140[16])) )
                v75 = 2;
              v252 = 1;
              if ( (unsigned __int8)sub_14122E510(&v140[16]) || (v252 = 1, (unsigned __int8)sub_14122E5A0(&v140[16])) )
              {
                *(_QWORD *)&v222 = 0;
                *((_QWORD *)&v222 + 1) = 1;
                *(_QWORD *)&v223 = 0;
                v176.m256i_i64[2] = 1610612768;
                v176.m256i_i64[0] = (__int64)&v222;
                v176.m256i_i64[1] = (__int64)&off_1419E0B60;
                if ( (unsigned __int8)sub_14104A7D0(&v140[8], &v176) )
                  sub_141939040(
                    (unsigned int)aADisplayImplem_53,
                    55,
                    (unsigned int)&v251,
                    (unsigned int)&unk_1419D7FE8,
                    (__int64)&off_1419E29A8);
                v207 = *((_QWORD *)&v222 + 1);
                v74 = v222;
                v159 = v223;
              }
            }
            if ( v73 < *(_QWORD *)(v5 + 888) && *(_BYTE *)(*(_QWORD *)(v5 + 880) + 384 * v73 + 369) )
            {
              *(_BYTE *)(v5 + 1128) = v75;
              v76 = *(_QWORD *)(v5 + 976);
              v32 = v249;
              if ( v76 != -1 && v76 )
                sub_140001660(*(_QWORD *)(v5 + 984), v76, 1);
              *(_QWORD *)(v5 + 976) = v74;
              *(_QWORD *)(v5 + 984) = v207;
              *(_QWORD *)(v5 + 992) = v159;
              v61 = v248;
              v54 = v243;
              goto LABEL_122;
            }
            v54 = v243;
            v32 = v249;
            if ( (unsigned __int64)(v74 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v207, v74, 1);
LABEL_121:
            v61 = v248;
LABEL_122:
            v59 = v246;
            if ( v242 < v237 )
              goto LABEL_136;
          }
          else
          {
            v32 = v249;
            if ( v242 < v237 )
              goto LABEL_136;
          }
LABEL_134:
          if ( (unsigned __int64)(v61 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
            sub_140001660(v232, v61, 1);
          goto LABEL_136;
        }
        v248 = v61;
        if ( v59 < (__int64)0x8000000000000002uLL )
        {
          nullsub_1(i);
          v77 = (void *)sub_140001650(53, 1);
          if ( !v77 )
          {
            v243 = v54;
            v252 = 1;
            sub_141938D2B(1, 53);
          }
          v78 = v77;
          qmemcpy(v77, "refreshed account snapshot has no API request context", 53);
          v79 = *(_QWORD *)(v5 + 920);
          v32 = v249;
          if ( v79 != -1 && v79 )
            sub_140001660(*(_QWORD *)(v5 + 928), v79, 1);
          *(_QWORD *)(v5 + 920) = 53;
          *(_QWORD *)(v5 + 928) = v78;
          *(_QWORD *)(v5 + 936) = 53;
          goto LABEL_121;
        }
        v80 = v52[36];
        v81 = *(_QWORD *)(v5 + 888);
        if ( v80 >= v81 )
        {
          v243 = v54;
          v252 = 1;
          sub_1419390C3(v80, v81, &off_1419D52F0);
        }
        if ( !*(_BYTE *)(*(_QWORD *)(v5 + 880) + 384 * v80 + 369) )
        {
          v61 = v248;
          v32 = v249;
          if ( v242 < v237 )
            goto LABEL_136;
          goto LABEL_134;
        }
        v243 = v54;
        v82 = v31;
        v252 = 1;
        sub_140FF08F0(&v176, &v149, 0);
        v83 = v70[36];
        v84 = BYTE8(v178);
        v85 = v206;
        if ( !BYTE8(v178) )
          v85 = *((_QWORD *)&v177 + 1);
        v86 = v158;
        if ( !BYTE8(v178) )
          v86 = v177;
        v87 = v176.m256i_i64[3];
        if ( BYTE8(v178) )
          v87 = -1;
        v88 = v83 < *(_QWORD *)(v5 + 888);
        v206 = v85;
        if ( v88 && *(_BYTE *)(*(_QWORD *)(v5 + 880) + 384 * v83 + 369) )
        {
          *(_BYTE *)(v5 + 1128) = 2 - BYTE8(v178);
          v89 = *(_QWORD *)(v5 + 976);
          if ( v89 != -1 && v89 )
          {
            v90 = v86;
            v91 = v87;
            sub_140001660(*(_QWORD *)(v5 + 984), *(_QWORD *)(v5 + 976), 1);
            v87 = v91;
            v86 = v90;
            v85 = v206;
          }
          *(_QWORD *)(v5 + 976) = v87;
          *(_QWORD *)(v5 + 984) = v86;
          *(_QWORD *)(v5 + 992) = v85;
          v59 = v246;
          v32 = v249;
        }
        else
        {
          v59 = v246;
          v32 = v249;
          if ( (unsigned __int64)(v87 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v86, v87, 1);
        }
        v158 = v86;
        v31 = v82;
        if ( v176.m256i_i64[0] )
          sub_140001660(v176.m256i_i64[1], v176.m256i_i64[0], 1);
        v54 = v243;
        if ( v84 && v176.m256i_i64[3] )
          sub_140001660(v177, v176.m256i_i64[3], 1);
        v61 = v248;
        if ( v242 >= v237 )
          goto LABEL_134;
LABEL_136:
        if ( v59 >= (__int64)0x8000000000000004uLL && v59 )
          sub_140001660(v205, v59, 1);
        if ( v54 )
          sub_1401954F0(&v140[8]);
      }
      i += 23;
LABEL_203:
      sub_14038EC30(i, 0xD37A6F4DE9BD37A7uLL * ((unsigned __int64)(v217 - (_QWORD)i) >> 3), v46, v32);
      v26 = v218;
      v32 = v53;
      if ( v238 )
      {
        sub_140001660(v240, 184 * v238, 8);
        v32 = v53;
      }
    }
  }
  v176.m256i_i64[0] = -1;
  LOBYTE(v27) = 1;
  sub_14020F1D0(v5, v27, (unsigned int)&v176, v29 + (unsigned int)v23 / 0xF4240, (__int64)&v199);
  v127 = v213;
  v128 = v214;
  if ( v214 )
  {
    v129 = (_QWORD *)(v213 + 8);
    do
    {
      v130 = *(v129 - 1);
      if ( v130 )
        sub_140001660(*v129, v130, 1);
      v129 += 3;
      --v128;
    }
    while ( v128 );
  }
  if ( v212 )
    sub_140001660(v127, 24 * v212, 8);
  sub_1403FB570(&v229);
  result = v229;
  if ( v229 )
  {
    v132 = 296 * v229;
    v133 = v249;
    goto LABEL_233;
  }
LABEL_234:
  if ( v219 != -1 && v219 )
    result = sub_140001660(v150, v219, 1);
  if ( v152.m256i_i64[0] )
    result = sub_140001660(v152.m256i_i64[1], v152.m256i_i64[0], 1);
  if ( v153.m256i_i64[0] )
    result = sub_140001660(v153.m256i_i64[1], v153.m256i_i64[0], 1);
  if ( v154 != -1 && v154 )
    return sub_140001660(v155, v154, 1);
  return result;
}
