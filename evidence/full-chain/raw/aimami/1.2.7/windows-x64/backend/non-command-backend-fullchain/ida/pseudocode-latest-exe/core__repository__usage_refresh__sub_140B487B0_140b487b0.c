// win 1.2.7 latest-exe | module src/core/repository/usage_refresh.rs | ea 0x140b487b0 | successor of pre-update 0x140220210 | session <审计会话>
// match evidence: {}
// win 1.2.7����exe | ģ��: src/core/repository/usage_refresh.rs
// ����: panic-Location ���� xref (win-native ��ֵ)
double __fastcall sub_140B487B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // xmm6_8
  __m128 v5; // xmm7
  __int64 v6; // xmm8_8
  __m128 v7; // xmm9
  __m128 v8; // xmm10
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int32 v13; // r14d
  __int32 v14; // r15d
  unsigned __int32 v15; // eax
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // r13
  unsigned __int8 *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // r13
  char v29; // si
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rbx
  unsigned __int128 v33; // rax
  _BYTE *v34; // r9
  __int64 v35; // r12
  double result; // xmm0_8
  unsigned __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rdi
  char v41; // bl
  __int64 v42; // rsi
  __int64 v43; // rdx
  bool v44; // zf
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rbx
  __m256i *v52; // rdi
  __m256i *v53; // r15
  __int64 v54; // rsi
  char v55; // bl
  char *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // edx
  __int64 v61; // rdi
  __int64 v62; // r15
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // r14
  __int64 v66; // rbx
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdi
  unsigned __int64 v71; // r9
  char v72; // bl
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  signed __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // r13
  unsigned __int64 v80; // r8
  __int64 v81; // r12
  __int64 v82; // r14
  __int64 v83; // r13
  __int64 v84; // r15
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // r14
  signed __int64 v89; // rbx
  __int64 v90; // rdx
  _OWORD *v91; // rcx
  __int64 v92; // rdx
  _OWORD *v93; // rcx
  unsigned __int64 v94; // rbx
  __int64 v95; // r12
  char v96; // di
  _QWORD *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // r15
  void *v100; // rax
  void *v101; // r12
  __int64 v102; // rdx
  __int64 v103; // rax
  unsigned __int64 v104; // rcx
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // rax
  __int8 v107; // bl
  __int64 v108; // rsi
  __int64 v109; // rdx
  _QWORD *v110; // rdi
  bool v111; // cf
  __int64 v112; // rax
  __int64 v113; // r12
  __int64 v114; // rsi
  unsigned __int64 v115; // r14
  unsigned __int64 v116; // r14
  __int64 v117; // rsi
  __int64 v118; // rdx
  _OWORD *v119; // rcx
  __int64 v120; // rdx
  _OWORD *v121; // rcx
  char v122; // bl
  unsigned __int64 v123; // rdi
  char v124; // al
  __int64 v125; // rdx
  __int64 v126; // r15
  int v127; // eax
  __int64 v128; // rcx
  unsigned __int64 v129; // rax
  __int64 v130; // rsi
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // r15
  unsigned __int64 v134; // r14
  __int64 v135; // rdi
  __int64 v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rsi
  unsigned __int64 v139; // rax
  __int64 v140; // rsi
  __int64 v141; // rax
  __int32 v142; // edx
  __int64 v143; // r15
  unsigned __int64 v144; // rax
  __int64 v145; // rdi
  __int64 v146; // rsi
  __int64 v147; // rdi
  __int64 v148; // rax
  char v149; // bl
  __int64 v150; // rsi
  __int64 v151; // rdi
  __int32 v152; // edx
  int v153; // ecx
  unsigned __int32 v154; // ecx
  __int64 v155; // rsi
  unsigned __int64 v156; // rbx
  __int64 v157; // rdx
  signed __int64 v158; // rsi
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r13
  __int64 v162; // rcx
  __int64 v163; // rdi
  __int64 v164; // rsi
  __int64 v165; // rax
  unsigned __int64 v166; // r14
  __int64 v167; // rsi
  __int64 v168; // rdi
  _QWORD *v169; // rbx
  __int64 v170; // rdx
  __int64 v171; // rdx
  unsigned __int64 v172; // rcx
  __int64 v173; // r14
  __int64 v174; // rsi
  unsigned __int64 v175; // r13
  __int64 v176; // r15
  __int64 v177; // r14
  __int64 v178; // r12
  unsigned __int64 v179; // rdi
  __int64 v180; // rbx
  __int128 v181; // xmm0
  __int32 v182; // edx
  int v183; // edx
  __int64 v184; // rax
  int v185; // r9d
  int v186; // ecx
  __int64 v187; // rsi
  __int64 v188; // rdi
  _QWORD *v189; // rbx
  __int64 v190; // rdx
  unsigned __int64 v191; // rsi
  unsigned __int64 v192; // rbx
  unsigned __int64 v193; // rdi
  __int64 v194; // rdx
  __int64 v195; // rdx
  __int64 v196; // rdx
  __int128 v197; // [rsp+60h] [rbp-20h]
  __int128 v198; // [rsp+70h] [rbp-10h]
  __int64 v199; // [rsp+80h] [rbp+0h] BYREF
  __int128 v200; // [rsp+88h] [rbp+8h]
  char v201; // [rsp+98h] [rbp+18h]
  _BYTE v202[104]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v203; // [rsp+108h] [rbp+88h]
  __int64 v204; // [rsp+110h] [rbp+90h]
  __int128 v205; // [rsp+118h] [rbp+98h]
  __int128 v206; // [rsp+128h] [rbp+A8h]
  __int128 v207; // [rsp+138h] [rbp+B8h]
  __int64 v208; // [rsp+148h] [rbp+C8h]
  __m256i v209; // [rsp+150h] [rbp+D0h] BYREF
  __m256i v210; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v211; // [rsp+198h] [rbp+118h] BYREF
  __int128 v212; // [rsp+1A0h] [rbp+120h]
  char v213; // [rsp+1B0h] [rbp+130h]
  __int64 v214; // [rsp+1B8h] [rbp+138h]
  __int64 v215; // [rsp+1C0h] [rbp+140h]
  __int64 v216; // [rsp+1C8h] [rbp+148h]
  __int64 *v217; // [rsp+1D0h] [rbp+150h]
  __m256i *v218; // [rsp+1D8h] [rbp+158h]
  __m256i *v219; // [rsp+1E0h] [rbp+160h]
  char *v220; // [rsp+1E8h] [rbp+168h]
  __int64 v221; // [rsp+1F0h] [rbp+170h]
  __int64 v222; // [rsp+1F8h] [rbp+178h]
  __int64 v223; // [rsp+200h] [rbp+180h]
  __int64 v224; // [rsp+208h] [rbp+188h]
  __int64 v225; // [rsp+210h] [rbp+190h]
  __int64 *v226; // [rsp+218h] [rbp+198h] BYREF
  __m256i *v227; // [rsp+220h] [rbp+1A0h]
  __m256i *v228; // [rsp+228h] [rbp+1A8h]
  char *v229; // [rsp+230h] [rbp+1B0h]
  __int64 v230; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v231; // [rsp+240h] [rbp+1C0h]
  __int64 v232; // [rsp+248h] [rbp+1C8h]
  int v233; // [rsp+254h] [rbp+1D4h] BYREF
  int v234; // [rsp+258h] [rbp+1D8h]
  int v235; // [rsp+25Ch] [rbp+1DCh]
  __int128 v236; // [rsp+260h] [rbp+1E0h]
  __int64 v237; // [rsp+270h] [rbp+1F0h]
  unsigned __int64 v238; // [rsp+278h] [rbp+1F8h]
  unsigned __int64 v239; // [rsp+280h] [rbp+200h]
  __int64 v240; // [rsp+288h] [rbp+208h]
  __int64 v241; // [rsp+290h] [rbp+210h]
  __int64 v242; // [rsp+298h] [rbp+218h]
  __int64 v243; // [rsp+2A0h] [rbp+220h]
  __int64 v244; // [rsp+2A8h] [rbp+228h]
  __int64 v245; // [rsp+2B0h] [rbp+230h]
  __int64 v246; // [rsp+2B8h] [rbp+238h] BYREF
  unsigned __int64 v247; // [rsp+2C0h] [rbp+240h]
  unsigned __int64 v248; // [rsp+2C8h] [rbp+248h]
  __int128 v249; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v250; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v251; // [rsp+2F0h] [rbp+270h]
  __int64 v252; // [rsp+2F8h] [rbp+278h]
  __int64 v253; // [rsp+300h] [rbp+280h]
  __int64 v254; // [rsp+308h] [rbp+288h]
  __int64 v255; // [rsp+310h] [rbp+290h]
  __int64 v256; // [rsp+318h] [rbp+298h]
  __m256i v257; // [rsp+320h] [rbp+2A0h] BYREF
  __int128 v258; // [rsp+340h] [rbp+2C0h]
  __int128 v259; // [rsp+350h] [rbp+2D0h]
  __int128 v260; // [rsp+360h] [rbp+2E0h]
  __int128 v261; // [rsp+370h] [rbp+2F0h]
  __int64 v262; // [rsp+380h] [rbp+300h]
  char v263; // [rsp+388h] [rbp+308h]
  __int64 v264; // [rsp+398h] [rbp+318h]
  __int64 v265; // [rsp+3A0h] [rbp+320h]
  __int64 v266; // [rsp+3A8h] [rbp+328h]
  unsigned __int64 v267; // [rsp+3B0h] [rbp+330h]
  __int64 v268; // [rsp+3B8h] [rbp+338h]
  __int64 v269; // [rsp+3C0h] [rbp+340h]
  __int64 v270; // [rsp+3C8h] [rbp+348h]
  _BYTE *v271; // [rsp+3D0h] [rbp+350h]
  __int64 v272; // [rsp+3D8h] [rbp+358h]
  __m256i v273; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v274; // [rsp+400h] [rbp+380h]
  __m256i v275; // [rsp+410h] [rbp+390h]
  __int128 v276; // [rsp+430h] [rbp+3B0h]
  __int128 v277; // [rsp+440h] [rbp+3C0h]
  __int128 v278; // [rsp+450h] [rbp+3D0h]
  __int128 v279; // [rsp+460h] [rbp+3E0h]
  _BYTE v280[24]; // [rsp+470h] [rbp+3F0h]
  int v281; // [rsp+488h] [rbp+408h]
  __int64 v282; // [rsp+490h] [rbp+410h]
  char v283; // [rsp+498h] [rbp+418h]
  int v284; // [rsp+4ACh] [rbp+42Ch]
  __int64 v285; // [rsp+4B0h] [rbp+430h]
  __int64 v286; // [rsp+4B8h] [rbp+438h]
  __m256i v287; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v288; // [rsp+4E0h] [rbp+460h]
  __int128 v289; // [rsp+4F0h] [rbp+470h]
  __int128 v290; // [rsp+500h] [rbp+480h]
  __int128 v291; // [rsp+510h] [rbp+490h]
  __int64 v292; // [rsp+520h] [rbp+4A0h]
  __int128 v293; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v294; // [rsp+540h] [rbp+4C0h]
  __int64 v295; // [rsp+548h] [rbp+4C8h]
  __int64 v296; // [rsp+550h] [rbp+4D0h]
  _QWORD *v297; // [rsp+558h] [rbp+4D8h]
  _QWORD *v298; // [rsp+560h] [rbp+4E0h]
  __int64 v299; // [rsp+568h] [rbp+4E8h]
  __int64 v300; // [rsp+570h] [rbp+4F0h]
  __int64 v301; // [rsp+578h] [rbp+4F8h]
  __int64 v302; // [rsp+580h] [rbp+500h]
  __int64 v303; // [rsp+588h] [rbp+508h]
  __int128 v304; // [rsp+590h] [rbp+510h] BYREF
  __int64 v305; // [rsp+5A0h] [rbp+520h]
  char v306; // [rsp+5AFh] [rbp+52Fh]
  __int64 v307; // [rsp+5B0h] [rbp+530h]
  __int64 v308; // [rsp+5B8h] [rbp+538h]
  __int64 v309; // [rsp+5C0h] [rbp+540h]
  signed __int64 v310; // [rsp+5C8h] [rbp+548h]
  unsigned __int64 v311; // [rsp+5D0h] [rbp+550h]
  char v312; // [rsp+5DFh] [rbp+55Fh] BYREF
  unsigned __int64 v313; // [rsp+5E0h] [rbp+560h]
  __int64 v314; // [rsp+5E8h] [rbp+568h]
  char v315; // [rsp+5F6h] [rbp+576h] BYREF
  char v316; // [rsp+5F7h] [rbp+577h]
  __int64 v317; // [rsp+5F8h] [rbp+578h]

  v317 = -2;
  v221 = a3;
  v222 = a2;
  v312 = a4;
  v9 = a1 + 112;
  v10 = *(unsigned __int8 *)(a1 + 136);
  v314 = a1;
  if ( *(_QWORD *)(a1 + 112) == -1 )
  {
    v11 = -1;
  }
  else
  {
    sub_1416DB410(&v273, v9);
    v11 = v273.m256i_i64[0];
    *(_OWORD *)v202 = *(_OWORD *)&v273.m256i_u64[1];
  }
  v213 = v10;
  v211 = v11;
  v212 = *(_OWORD *)v202;
  v12 = v314;
  sub_1416DA980(&v273, *(_QWORD *)(v314 + 624), *(_QWORD *)(v314 + 632));
  v210 = v273;
  sub_1416DA980(&v273, *(_QWORD *)(v12 + 600), *(_QWORD *)(v12 + 608));
  v209 = v273;
  v226 = &v211;
  v227 = &v209;
  v228 = &v210;
  v229 = &v312;
  LOBYTE(v10) = v312;
  sub_1414331D0(&v273);
  v13 = v273.m256i_i32[0];
  v14 = (v273.m256i_i32[0] >> 13) - 1;
  if ( v273.m256i_i32[0] >> 13 <= 0 )
  {
    v15 = (1 - (v273.m256i_i32[0] >> 13)) / 0x190u + 1;
    v14 += 400 * v15;
    LODWORD(v313) = -146097 * v15;
  }
  else
  {
    LODWORD(v313) = 0;
  }
  v16 = *(_QWORD *)(v314 + 888);
  if ( (unsigned __int8)v10 | (v16 == 0) )
  {
    v17 = v9;
    v18 = *(_QWORD *)(v314 + 888);
  }
  else
  {
    v19 = *(_QWORD *)(v314 + 880);
    v20 = *(_QWORD *)(v314 + 888) & 3LL;
    if ( (unsigned __int64)(v16 - 1) >= 3 )
    {
      v22 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      v23 = (unsigned __int8 *)(v19 + 1521);
      v21 = 0;
      LODWORD(v18) = 0;
      do
      {
        LODWORD(v18) = v18 + *(v23 - 1152) + *(v23 - 768) + *(v23 - 384) + *v23;
        v21 += 4;
        v23 += 1536;
      }
      while ( v22 != v21 );
      v17 = v9;
      if ( !v20 )
        goto LABEL_16;
    }
    else
    {
      v17 = v9;
      v21 = 0;
      LODWORD(v18) = 0;
    }
    v24 = 384 * v21 + v19 + 369;
    v25 = 3LL * (unsigned int)((_DWORD)v20 << 7);
    v26 = 0;
    do
    {
      LODWORD(v18) = *(unsigned __int8 *)(v24 + v26) + (_DWORD)v18;
      v26 += 384;
    }
    while ( v25 != v26 );
  }
LABEL_16:
  v27 = v273.m256i_u32[1];
  v28 = v273.m256i_u32[2];
  v29 = *(_BYTE *)(v314 + 136);
  if ( *(_QWORD *)(v314 + 112) == -1 )
  {
    v30 = -1;
  }
  else
  {
    sub_1416DB410(&v273, v17);
    v30 = v273.m256i_i64[0];
    *(_OWORD *)v202 = *(_OWORD *)&v273.m256i_u64[1];
  }
  v201 = v29;
  v255 = v30;
  v199 = v30;
  v200 = *(_OWORD *)v202;
  LOBYTE(v10) = v10 ^ 1;
  sub_140D30D30(&v246, v314, v10);
  v31 = v248;
  v239 = v248;
  v238 = v247;
  v32 = v247;
  sub_140201A30(&v250, v247, v247 + 296 * v248);
  *((_QWORD *)&v33 + 1) = (unsigned __int64)(1374389535LL * v14) >> 63;
  *(_QWORD *)&v33 = 1000
                  * (v27
                   + 86400LL
                   * (int)(((v14 / 100) >> 2) + ((1461 * v14) >> 2) + v313 + ((v13 >> 4) & 0x1FF) - v14 / 100 - 719163));
  v34 = (_BYTE *)(v33 + ((unsigned __int64)(1125899907 * v28) >> 50));
  v233 = v18;
  v35 = (unsigned int)(v18 - v31);
  v234 = 0;
  v235 = v35;
  result = 0.0;
  v236 = 0;
  v237 = 0;
  if ( v31 )
  {
    v37 = v31;
    v268 = v35;
    v244 = v33 + ((unsigned __int64)(1125899907 * v28) >> 50);
    v217 = v226;
    v218 = v227;
    v219 = v228;
    v220 = v229;
    v297 = (_QWORD *)(v314 + 920);
    v38 = v314 + 944;
    v298 = (_QWORD *)(v314 + 944);
    v223 = v314 + 832;
    v295 = 0;
    v284 = 0;
    LODWORD(v269) = 0;
    LODWORD(v270) = 0;
    v39 = v32;
    while ( 1 )
    {
      if ( !v37 )
      {
        sub_140D32700(v314, v251, v252, v34);
        v161 = *(_QWORD *)(v314 + 880);
        v162 = 0;
        while ( 384LL * *(_QWORD *)(v314 + 888) != v162 )
        {
          v163 = v162 + 384;
          v44 = *(_BYTE *)(v161 + v162 + 369) == 1;
          v162 += 384;
          if ( v44 )
          {
            sub_1416DB410(&v287, v163 + v161 - 176);
            sub_1416DB410(&v257, v163 + v161 - 152);
            sub_1416DB410(v202, v163 + v161 - 128);
            v164 = -1;
            if ( *(_QWORD *)(v161 + v163 - 104) != -1 )
            {
              sub_1416DB410(&v273, v163 + v161 - 104);
              v303 = v273.m256i_i64[1];
              v313 = v273.m256i_i64[0];
              v285 = v273.m256i_i64[2];
              if ( *(_QWORD *)(v161 + v163 - 80) != -1 )
                goto LABEL_236;
LABEL_285:
              v310 = -1;
              if ( *(_QWORD *)(v161 + v163 - 56) == -1 )
                goto LABEL_286;
LABEL_237:
              sub_1416DB410(&v273, v163 + v161 - 56);
              v162 = v273.m256i_i64[1];
              v165 = v273.m256i_i64[0];
              v164 = v273.m256i_i64[2];
              v39 = *(_QWORD *)(v161 + v163 - 304);
              if ( v39 == 2 )
                goto LABEL_238;
LABEL_287:
              v4 = *(_QWORD *)(v161 + v163 - 280);
              LODWORD(v271) = *(_DWORD *)(v161 + v163 - 272);
              v5 = (__m128)*(unsigned __int64 *)(v161 + v163 - 288);
              v253 = *(_QWORD *)(v161 + v163 - 296);
              v37 = *(_QWORD *)(v161 + v163 - 264);
              if ( v37 == 2 )
                goto LABEL_288;
LABEL_239:
              v6 = *(_QWORD *)(v161 + v163 - 240);
              LODWORD(v272) = *(_DWORD *)(v161 + v163 - 232);
              v8 = (__m128)*(unsigned __int64 *)(v161 + v163 - 248);
              v296 = *(_QWORD *)(v161 + v163 - 256);
              goto LABEL_288;
            }
            v313 = -1;
            if ( *(_QWORD *)(v161 + v163 - 80) == -1 )
              goto LABEL_285;
LABEL_236:
            sub_1416DB410(&v273, v163 + v161 - 80);
            v298 = (_QWORD *)v273.m256i_i64[1];
            v164 = v273.m256i_i64[0];
            v300 = v273.m256i_i64[2];
            v310 = v273.m256i_i64[0];
            if ( *(_QWORD *)(v161 + v163 - 56) != -1 )
              goto LABEL_237;
LABEL_286:
            v165 = -1;
            v39 = *(_QWORD *)(v161 + v163 - 304);
            if ( v39 != 2 )
              goto LABEL_287;
LABEL_238:
            v37 = *(_QWORD *)(v161 + v163 - 264);
            if ( v37 != 2 )
              goto LABEL_239;
LABEL_288:
            LOBYTE(v309) = *(_BYTE *)(v161 + v163 - 8);
            v173 = *(_QWORD *)(v161 + v163 - 384);
            v265 = *(_QWORD *)(v161 + v163 - 376);
            v267 = *(_QWORD *)(v161 + v163 - 368);
            v269 = *(_QWORD *)(v161 + v163 - 360);
            v270 = *(_QWORD *)(v161 + v163 - 352);
            v299 = *(_QWORD *)(v161 + v163 - 344);
            v266 = *(_QWORD *)(v161 + v163 - 24);
            v295 = *(_QWORD *)(v161 + v163 - 336);
            v308 = *(_QWORD *)(v161 + v163 - 328);
            v297 = *(_QWORD **)(v161 + v163 - 320);
            v302 = *(_QWORD *)(v161 + v163 - 312);
            v7 = (__m128)*(unsigned __int64 *)(v161 + v163 - 16);
            LODWORD(v307) = *(_DWORD *)(v161 + v163 - 32);
            v159 = *(unsigned int *)(v161 + v163 - 28);
            LODWORD(v268) = *(_DWORD *)(v161 + v163 - 28);
            v32 = *(_QWORD *)(v161 + v163 - 224);
            v311 = v165;
            v301 = v162;
            v264 = v164;
            if ( v32 != 2 )
            {
              LOBYTE(v254) = *(_BYTE *)(v161 + v163 - 184);
              if ( *(_QWORD *)(v161 + v163 - 208) == -1 )
              {
                v162 = -1;
              }
              else
              {
                sub_1416DB410(&v273, v163 + v161 - 208);
                v162 = v273.m256i_i64[0];
                v249 = *(_OWORD *)&v273.m256i_u64[1];
              }
              v159 = *(_QWORD *)(v161 + v163 - 216);
            }
            *(__int64 *)((char *)&v273.m256i_i64[2] + 7) = v287.m256i_i64[2];
            *(_OWORD *)((char *)&v273.m256i_u32[1] + 3) = *(_OWORD *)v287.m256i_i8;
            v304 = *(_OWORD *)v257.m256i_i8;
            v305 = v257.m256i_i64[2];
            v293 = *(_OWORD *)v202;
            v294 = *(_QWORD *)&v202[16];
            v160 = v303;
            v174 = v314;
            if ( *(_DWORD *)(v314 + 152) == 2 )
            {
LABEL_251:
              *(_QWORD *)(v174 + 152) = v173;
              *(_QWORD *)(v174 + 160) = v265;
              *(_QWORD *)(v174 + 168) = v267;
              *(_QWORD *)(v174 + 176) = v269;
              *(_QWORD *)(v174 + 184) = v270;
              *(_QWORD *)(v174 + 192) = v299;
              *(_QWORD *)(v174 + 200) = v295;
              *(_QWORD *)(v174 + 208) = v308;
              *(_QWORD *)(v174 + 216) = v297;
              *(_QWORD *)(v174 + 224) = v302;
              *(_QWORD *)(v174 + 232) = v39;
              *(_QWORD *)(v174 + 240) = v253;
              _mm_storel_ps((double *)(v174 + 248), v5);
              *(_QWORD *)(v174 + 256) = v4;
              *(_DWORD *)(v174 + 264) = (_DWORD)v271;
              *(_QWORD *)(v174 + 272) = v37;
              *(_QWORD *)(v174 + 280) = v296;
              _mm_storel_ps((double *)(v174 + 288), v8);
              *(_QWORD *)(v174 + 296) = v6;
              *(_DWORD *)(v174 + 304) = v272;
              *(_QWORD *)(v174 + 312) = v32;
              *(_QWORD *)(v174 + 320) = v159;
              *(_QWORD *)(v174 + 328) = v162;
              *(_OWORD *)(v174 + 336) = v249;
              *(_BYTE *)(v174 + 352) = v254;
              v181 = *(_OWORD *)v273.m256i_i8;
              *(_OWORD *)(v174 + 368) = *(_OWORD *)((char *)&v273.m256i_u64[1] + 7);
              *(_OWORD *)(v174 + 353) = v181;
              *(_QWORD *)(v174 + 400) = v305;
              *(_OWORD *)(v174 + 384) = v304;
              *(_QWORD *)(v174 + 424) = v294;
              result = *(double *)&v293;
              *(_OWORD *)(v174 + 408) = v293;
              *(_QWORD *)(v174 + 432) = v313;
              *(_QWORD *)(v174 + 440) = v160;
              *(_QWORD *)(v174 + 448) = v285;
              *(_QWORD *)(v174 + 456) = v310;
              *(_QWORD *)(v174 + 464) = v298;
              *(_QWORD *)(v174 + 472) = v300;
              *(_QWORD *)(v174 + 480) = v311;
              *(_QWORD *)(v174 + 488) = v301;
              *(_QWORD *)(v174 + 496) = v264;
              *(_DWORD *)(v174 + 504) = v307;
              *(_DWORD *)(v174 + 508) = v268;
              *(_QWORD *)(v174 + 512) = v266;
              _mm_storel_ps((double *)(v174 + 520), v7);
              *(_BYTE *)(v174 + 528) = v309;
              v257.m256i_i32[0] = sub_1416B2E50(v162, v159, v160);
              v257.m256i_i32[1] = v182;
              sub_1416B2E00(v202, &v257, 3577643008LL, 27111902);
              if ( v202[0] )
                v184 = 0;
              else
                v184 = *(_QWORD *)&v202[8];
              v185 = v244;
              v186 = v314;
              *(_QWORD *)(v314 + 1120) = v184;
              *(_QWORD *)v202 = -1;
              LOBYTE(v183) = 1;
              sub_140D2AC50(v186, v183, (unsigned int)v202, v185, (__int64)&v233);
              v187 = v251;
              v188 = v252;
              if ( v252 )
              {
                v189 = (_QWORD *)(v251 + 8);
                do
                {
                  v190 = *(v189 - 1);
                  if ( v190 )
                    result = sub_140001660(*v189, v190, 1);
                  v189 += 3;
                  --v188;
                }
                while ( v188 );
              }
              if ( v250 )
                result = sub_140001660(v187, 24 * v250, 8);
              v191 = v247;
              v192 = v248;
              if ( v248 )
              {
                v193 = v247 + 112;
                do
                {
                  v194 = *(_QWORD *)(v193 - 80);
                  if ( v194 )
                    result = sub_140001660(*(_QWORD *)(v193 - 72), v194, 1);
                  v195 = *(_QWORD *)(v193 - 56);
                  if ( v195 )
                    result = sub_140001660(*(_QWORD *)(v193 - 48), v195, 1);
                  v196 = *(_QWORD *)(v193 - 32);
                  if ( v196 )
                    result = sub_140001660(*(_QWORD *)(v193 - 24), v196, 1);
                  sub_1401AF090(v193);
                  v193 += 296LL;
                  --v192;
                }
                while ( v192 );
              }
              if ( v246 )
              {
                v171 = 296 * v246;
                v172 = v191;
LABEL_272:
                result = sub_140001660(v172, v171, 8);
              }
              goto LABEL_273;
            }
LABEL_250:
            v303 = v162;
            v175 = v37;
            v176 = v173;
            v177 = v39;
            v178 = v159;
            v179 = v32;
            v180 = v160;
            sub_140037CD0(v174 + 152);
            v160 = v180;
            v32 = v179;
            v159 = v178;
            v39 = v177;
            v173 = v176;
            v37 = v175;
            v162 = v303;
            goto LABEL_251;
          }
        }
        v173 = 2;
        v174 = v314;
        if ( *(_DWORD *)(v314 + 152) == 2 )
          goto LABEL_251;
        goto LABEL_250;
      }
      v40 = 5;
      if ( v37 < 5 )
        v40 = v37;
      if ( v37 != 1 )
      {
        v273.m256i_i64[0] = (__int64)&v226;
        v273.m256i_i64[1] = v39;
        v273.m256i_i64[2] = v40;
        sub_1404316B0(&v230, &v273, &off_141A6E938, v34);
        v296 = v230;
        v45 = v231;
        v46 = v232;
        goto LABEL_74;
      }
      nullsub_1(v38, *((_QWORD *)&v33 + 1));
      v300 = sub_140001650(184, 8);
      if ( !v300 )
        sub_14196B2C1(8, 184);
      if ( *(_QWORD *)(v39 + 112) == -1 )
      {
        *(_QWORD *)&v293 = -1;
        if ( *(_QWORD *)(v39 + 136) != -1 )
        {
LABEL_28:
          sub_1416DB410(&v257, v39 + 136);
          v240 = v257.m256i_i64[1];
          v310 = v257.m256i_i64[0];
          v214 = v257.m256i_i64[2];
          v41 = *(_BYTE *)(v39 + 280);
          if ( *(_QWORD *)(v39 + 160) != -1 )
            goto LABEL_29;
          goto LABEL_35;
        }
      }
      else
      {
        sub_1416DB410(&v293, v39 + 112);
        if ( *(_QWORD *)(v39 + 136) != -1 )
          goto LABEL_28;
      }
      v310 = -1;
      v41 = *(_BYTE *)(v39 + 280);
      if ( *(_QWORD *)(v39 + 160) != -1 )
      {
LABEL_29:
        sub_1416DB410(&v304, v39 + 160);
        v42 = -1;
        v43 = -1;
        if ( *(_QWORD *)(v39 + 184) == -1 )
          goto LABEL_30;
        goto LABEL_36;
      }
LABEL_35:
      *(_QWORD *)&v304 = -1;
      v42 = -1;
      v43 = -1;
      if ( *(_QWORD *)(v39 + 184) == -1 )
      {
LABEL_30:
        v44 = *(_QWORD *)(v39 + 208) == -1;
        v313 = -1;
        if ( v44 )
          goto LABEL_38;
LABEL_37:
        sub_1416DB410(&v287, v39 + 208);
        v242 = v287.m256i_i64[1];
        v42 = v287.m256i_i64[0];
        v216 = v287.m256i_i64[2];
        v43 = v313;
        goto LABEL_38;
      }
LABEL_36:
      sub_1416DB410(&v287, v39 + 184);
      v241 = v287.m256i_i64[1];
      v43 = v287.m256i_i64[0];
      v215 = v287.m256i_i64[2];
      v44 = *(_QWORD *)(v39 + 208) == -1;
      v313 = v287.m256i_i64[0];
      if ( !v44 )
        goto LABEL_37;
LABEL_38:
      v311 = v40;
      v47 = -1;
      v48 = -1;
      if ( *(_QWORD *)(v39 + 232) != -1 )
      {
        v301 = v42;
        sub_1416DB410(&v287, v39 + 232);
        v48 = v287.m256i_i64[0];
        v249 = *(_OWORD *)&v287.m256i_u64[1];
        v43 = v313;
        v42 = v301;
      }
      v257.m256i_i64[2] = v305;
      *(_OWORD *)v257.m256i_i8 = v304;
      v257.m256i_i64[3] = v43;
      *(_QWORD *)&v258 = v241;
      *((_QWORD *)&v258 + 1) = v215;
      *(_QWORD *)&v259 = v42;
      *((_QWORD *)&v259 + 1) = v242;
      *(_QWORD *)&v260 = v216;
      *((_QWORD *)&v260 + 1) = v48;
      v261 = v249;
      if ( *(_QWORD *)(v39 + 256) != -1 )
      {
        sub_1416DB410(&v287, v39 + 256);
        v47 = v287.m256i_i64[0];
        v304 = *(_OWORD *)&v287.m256i_u64[1];
      }
      v285 = 1;
      v273.m256i_i64[2] = v294;
      *(_OWORD *)v273.m256i_i8 = v293;
      v273.m256i_i64[3] = v310;
      *(_QWORD *)&v274 = v240;
      *((_QWORD *)&v274 + 1) = v214;
      LOBYTE(v281) = v41;
      v279 = v261;
      v278 = v260;
      v277 = v259;
      v276 = v258;
      v275 = v257;
      *(_QWORD *)v280 = v47;
      *(_OWORD *)&v280[8] = v304;
      v49 = v39;
      v50 = *(_QWORD *)(v39 + 88);
      v313 = v49;
      v51 = *(_QWORD *)(v49 + 96);
      v52 = v218;
      v53 = v219;
      v54 = (__int64)v217;
      sub_140EBD950(
        (unsigned int)&v293,
        v50,
        v51,
        (unsigned int)&v273,
        (__int64)v217,
        v218->m256i_i64[1],
        v218->m256i_i64[2],
        v219->m256i_i64[1],
        v219->m256i_i64[2],
        0);
      sub_140D31B20(
        (unsigned int)&v257,
        v50,
        v51,
        (unsigned int)&v273,
        (__int64)&v293,
        v54,
        v52->m256i_i64[1],
        v52->m256i_i64[2],
        v53->m256i_i64[1],
        v53->m256i_i64[2],
        1);
      v292 = v262;
      v291 = v261;
      v290 = v260;
      v289 = v259;
      v288 = v258;
      v287 = v257;
      v55 = v263;
      v56 = aAllUsageactive;
      if ( !*v220 )
        v56 = &aAllUsageactive[9];
      sub_140D2C9A0(v56, 3LL * (*v220 == 0) + 9, &v293);
      LODWORD(v249) = sub_1416B2E50(v58, v57, v59);
      DWORD1(v249) = v60;
      sub_1416B2E00(&v304, &v249, 3577643008LL, 27111902);
      v61 = 0;
      v62 = 0;
      if ( !(_BYTE)v304 )
        v62 = *((_QWORD *)&v304 + 1);
      if ( v275.m256i_i64[3] != -1 )
      {
        if ( sub_140EBD860(v276) == 1 )
        {
          v50 = v62 + v63;
          v61 = 1;
        }
        else
        {
          v61 = 0;
        }
      }
      v64 = v293;
      sub_14071C080(&v257.m256i_u64[2], &v273);
      if ( v64 >= 0 )
        LOBYTE(v64) = 4;
      BYTE8(v258) = v64;
      v257.m256i_i64[0] = v61;
      v257.m256i_i64[1] = v50;
      *(__m256i *)v202 = v287;
      *(_OWORD *)&v202[32] = v288;
      *(_OWORD *)&v202[48] = v289;
      *(_OWORD *)&v202[64] = v290;
      *(_OWORD *)&v202[80] = v291;
      *(_QWORD *)&v202[96] = v292;
      v208 = v294;
      v207 = v293;
      v206 = v258;
      v205 = *(_OWORD *)&v257.m256i_u64[2];
      v203 = v61;
      v204 = v50;
      if ( v273.m256i_i64[0] != -1 && v273.m256i_i64[0] )
        sub_140001660(v273.m256i_i64[1], v273.m256i_i64[0], 1);
      v37 = v285;
      v39 = v313;
      v40 = v311;
      if ( v273.m256i_i64[3] != -1 && v273.m256i_i64[3] )
        sub_140001660(v274, v273.m256i_i64[3], 1);
      if ( v275.m256i_i64[0] != -1 && v275.m256i_i64[0] )
        sub_140001660(v275.m256i_i64[1], v275.m256i_i64[0], 1);
      if ( v275.m256i_i64[3] != -1 && v275.m256i_i64[3] )
        sub_140001660(v276, v275.m256i_i64[3], 1);
      if ( (_QWORD)v277 != -1 && (_QWORD)v277 )
        sub_140001660(*((_QWORD *)&v277 + 1), v277, 1);
      if ( *((_QWORD *)&v278 + 1) != -1 && *((_QWORD *)&v278 + 1) )
        sub_140001660(v279, *((_QWORD *)&v278 + 1), 1);
      if ( *(_QWORD *)v280 != -1 && *(_QWORD *)v280 )
        sub_140001660(*(_QWORD *)&v280[8], *(_QWORD *)v280, 1);
      v45 = v300;
      sub_1419234B0(v300, v202, 176);
      *(_BYTE *)(v45 + 176) = v55;
      v230 = 1;
      v231 = v45;
      v232 = 1;
      v46 = 1;
      v296 = 1;
LABEL_74:
      v65 = v39 + 296 * v40;
      v285 = v37 - v40;
      v265 = v45 + 184 * v46;
      v66 = v265 - 184;
      v300 = v45;
      v67 = v45;
      v303 = v265 - 184;
      v307 = v65;
LABEL_75:
      v267 = v67 + 184;
      v68 = v66 - v67;
      v32 = v67;
      while ( 1 )
      {
        if ( v39 == v65 || v32 == v265 )
          goto LABEL_220;
        v69 = v32 + 184;
        v70 = *(_QWORD *)v32;
        if ( *(_QWORD *)v32 == 2 )
          break;
        v264 = v68;
        v71 = v32;
        v72 = *(_BYTE *)(v32 + 176);
        v261 = *(_OWORD *)(v71 + 88);
        v260 = *(_OWORD *)(v71 + 72);
        v73 = *(_OWORD *)(v71 + 8);
        v74 = *(_OWORD *)(v71 + 24);
        v75 = *(_OWORD *)(v71 + 40);
        v259 = *(_OWORD *)(v71 + 56);
        v258 = v75;
        *(_OWORD *)&v257.m256i_u64[2] = v74;
        *(_OWORD *)v257.m256i_i8 = v73;
        v76 = *(_QWORD *)(v71 + 152);
        v77 = *(_QWORD *)(v71 + 160);
        v197 = *(_OWORD *)(v71 + 104);
        v78 = *(_QWORD *)(v71 + 120);
        v79 = *(_QWORD *)(v71 + 128);
        v198 = *(_OWORD *)(v71 + 136);
        *(_QWORD *)v202 = v70;
        v34 = &v202[8];
        *(_OWORD *)&v202[88] = v261;
        *(_OWORD *)&v202[72] = v260;
        *(_OWORD *)&v202[56] = v259;
        *(_OWORD *)&v202[40] = v75;
        *(_OWORD *)&v202[24] = v74;
        *(_OWORD *)&v202[8] = v73;
        v310 = v76;
        v301 = v69;
        v266 = v77;
        if ( v76 >= (__int64)0x8000000000000002uLL )
        {
          v268 = (unsigned int)(v268 + 1);
          v235 = v268;
        }
        else
        {
          LODWORD(v270) = v270 + 1;
          v234 = v270;
        }
        v80 = *(_QWORD *)(v39 + 288);
        v311 = *(_QWORD *)(v314 + 888);
        v313 = v80;
        if ( v80 < v311 )
        {
          v299 = v39;
          v81 = v70;
          v82 = v79;
          v83 = v78;
          v84 = *(_QWORD *)(v314 + 880);
          v85 = 384 * v313;
          v86 = v84 + 384 * v313;
          if ( *(_DWORD *)(v86 + 160) != 2 )
          {
            v87 = *(_QWORD *)(v86 + 176);
            if ( v87 != -1 )
            {
              if ( v87 )
                sub_140001660(*(_QWORD *)(v86 + 184), v87, 1);
            }
          }
          *(_OWORD *)(v84 + v85 + 160) = v197;
          v78 = v83;
          *(_QWORD *)(v86 + 176) = v83;
          v79 = v82;
          *(_QWORD *)(v86 + 184) = v82;
          *(_OWORD *)(v86 + 192) = v198;
          v70 = v81;
          v39 = v299;
        }
        v88 = v39 + 296;
        if ( (v72 & 1) != 0 )
        {
          LODWORD(v269) = v269 + 1;
          HIDWORD(v236) = v269;
          ++*(_DWORD *)(v314 + 968);
          v89 = v310;
          if ( v310 < (__int64)0x8000000000000002uLL )
          {
            v309 = v78;
            v308 = v79;
            v302 = v70;
            if ( (v70 & 1) != 0 )
            {
              v276 = *(_OWORD *)&v202[88];
              v275 = *(__m256i *)&v202[56];
              v274 = *(_OWORD *)&v202[40];
              v273 = *(__m256i *)&v202[8];
              v117 = (unsigned int)(v295 + 1);
              HIDWORD(v237) = v295 + 1;
              *(_QWORD *)&v304 = 0;
              *((_QWORD *)&v304 + 1) = 1;
              v305 = 0;
              v287.m256i_i64[2] = 1610612768;
              v287.m256i_i64[0] = (__int64)&v304;
              v287.m256i_i64[1] = (__int64)&off_141A82658;
              if ( (unsigned __int8)sub_140D76130(&v273, &v287) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_7,
                  55,
                  (unsigned int)&v315,
                  (unsigned int)&unk_141A6FA88,
                  (__int64)&off_141A82710);
              v294 = v305;
              v293 = v304;
              v118 = *v297;
              if ( *v297 != -1 && v118 )
                sub_140001660(*(_QWORD *)(v314 + 928), v118, 1);
              v119 = v297;
              v297[2] = v294;
              *v119 = v293;
              sub_1416DB410(&v287, v39 + 32);
              v305 = v287.m256i_i64[2];
              v304 = *(_OWORD *)v287.m256i_i8;
              v120 = *v298;
              if ( *v298 != -1 && v120 )
                sub_140001660(*(_QWORD *)(v314 + 952), v120, 1);
              v121 = v298;
              v298[2] = v305;
              *v121 = v304;
              v295 = v117;
              if ( v273.m256i_i64[0] == 6 )
              {
                if ( (unsigned __int8)sub_1412467D0(&v273.m256i_u64[1])
                  || (v122 = 1, (unsigned __int8)sub_141246860(&v273.m256i_u64[1])) )
                {
                  v122 = 2;
                }
                v123 = *(_QWORD *)(v39 + 288);
                if ( (unsigned __int8)sub_1412467D0(&v273.m256i_u64[1])
                  || (v124 = sub_141246860(&v273.m256i_u64[1]), v125 = -1, v124) )
                {
                  *(_QWORD *)&v304 = 0;
                  *((_QWORD *)&v304 + 1) = 1;
                  v305 = 0;
                  v287.m256i_i64[2] = 1610612768;
                  v287.m256i_i64[0] = (__int64)&v304;
                  v287.m256i_i64[1] = (__int64)&off_141A82658;
                  if ( (unsigned __int8)sub_140D76130(&v273, &v287) )
                    sub_14196B5F0(
                      (unsigned int)aADisplayImplem_7,
                      55,
                      (unsigned int)&v315,
                      (unsigned int)&unk_141A6FA88,
                      (__int64)&off_141A82710);
                  v243 = *((_QWORD *)&v304 + 1);
                  v125 = v304;
                  v224 = v305;
                }
                v126 = v314;
                if ( v123 >= *(_QWORD *)(v314 + 888) )
                {
LABEL_189:
                  if ( (unsigned __int64)(v125 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                    sub_140001660(v243, v125, 1);
                  goto LABEL_191;
                }
              }
              else
              {
                v123 = *(_QWORD *)(v39 + 288);
                v125 = -1;
                v122 = 1;
                v126 = v314;
                if ( v123 >= *(_QWORD *)(v314 + 888) )
                  goto LABEL_189;
              }
              if ( !*(_BYTE *)(*(_QWORD *)(v126 + 880) + 384 * v123 + 369) )
                goto LABEL_189;
              *(_BYTE *)(v126 + 1128) = v122;
              v137 = *(_QWORD *)(v126 + 976);
              if ( v137 != -1 && v137 )
              {
                v138 = v125;
                sub_140001660(*(_QWORD *)(v126 + 984), *(_QWORD *)(v126 + 976), 1);
                v125 = v138;
              }
              *(_QWORD *)(v126 + 976) = v125;
              *(_QWORD *)(v126 + 984) = v243;
              *(_QWORD *)(v126 + 992) = v224;
LABEL_191:
              v316 = 0;
              sub_140AF57C0(&v273);
LABEL_192:
              v39 += 296;
              v133 = v307;
              v136 = v309;
              goto LABEL_193;
            }
            v127 = *(_DWORD *)&v202[8];
            LODWORD(v237) = ++v284;
            v128 = v314;
            ++*(_DWORD *)(v314 + 972);
            if ( v127 == -1 )
            {
              v139 = *(_QWORD *)(v39 + 288);
              if ( v139 < *(_QWORD *)(v128 + 888) )
              {
                v140 = v128;
                v128 = *(_QWORD *)(v128 + 880);
                if ( *(_BYTE *)(v128 + 384 * v139 + 369) == 1 )
                {
                  v141 = v140;
                  *(_BYTE *)(v140 + 1128) = 1;
                  v78 = *(_QWORD *)(v140 + 976);
                  if ( v78 != -1 && v78 )
                  {
                    sub_140001660(*(_QWORD *)(v140 + 984), v78, 1);
                    v141 = v140;
                  }
                  *(_QWORD *)(v141 + 976) = -1;
                }
              }
              v316 = 1;
              v287.m256i_i32[0] = sub_1416B2E50(v128, v78, v80);
              v287.m256i_i32[1] = v142;
              v316 = 1;
              sub_1416B2E00(&v273, &v287, 3577643008LL, 27111902);
              if ( v273.m256i_i8[0] )
                v143 = 0;
              else
                v143 = v273.m256i_i64[1];
              v136 = v309;
              v144 = *(_QWORD *)(v39 + 288);
              if ( v144 < *(_QWORD *)(v314 + 888) )
              {
                v145 = *(_QWORD *)(v314 + 880);
                v146 = 384 * v144;
                *(_QWORD *)(v145 + v146 + 80) = 2;
                *(_QWORD *)(v145 + v146 + 120) = 2;
                *(_DWORD *)(v145 + v146 + 352) = 0;
                *(_BYTE *)(v145 + v146 + 370) = 1;
                *(_QWORD *)(v145 + v146 + 64) = 1;
                *(_QWORD *)(v145 + v146 + 72) = v143;
                v316 = 1;
                sub_1416DB410(&v304, v39 + 32);
                v147 = v146 + v145;
                v148 = *(_QWORD *)(v147 + 160);
                if ( v148 == 2 )
                {
                  v299 = 2;
                  v149 = v306;
                  v150 = v245;
                  v151 = v225;
                }
                else
                {
                  v149 = *(_BYTE *)(v147 + 200);
                  if ( *(_QWORD *)(v147 + 176) == -1 )
                  {
                    v286 = -1;
                    v150 = v245;
                  }
                  else
                  {
                    sub_1416DB410(&v287, v147 + 176);
                    v256 = v287.m256i_i64[1];
                    v286 = v287.m256i_i64[0];
                    v150 = v287.m256i_i64[2];
                    v148 = *(_QWORD *)(v147 + 160);
                  }
                  v151 = *(_QWORD *)(v147 + 168);
                  v299 = v148;
                }
                sub_1414331D0(&v287);
                v152 = (v287.m256i_i32[0] >> 13) - 1;
                v153 = 0;
                if ( v287.m256i_i32[0] >> 13 <= 0 )
                {
                  v154 = (1 - (v287.m256i_i32[0] >> 13)) / 0x190u + 1;
                  v152 += 400 * v154;
                  v153 = -146097 * v154;
                }
                *(_QWORD *)&v280[16] = v305;
                *(_OWORD *)v280 = v304;
                v282 = v143;
                v283 = 1;
                v273.m256i_i64[2] = 2;
                v275.m256i_i64[1] = 2;
                v281 = 0;
                *(_QWORD *)&v277 = v299;
                v225 = v151;
                *((_QWORD *)&v277 + 1) = v151;
                *(_QWORD *)&v278 = v286;
                *((_QWORD *)&v278 + 1) = v256;
                v245 = v150;
                *(_QWORD *)&v279 = v150;
                v306 = v149;
                BYTE8(v279) = v149;
                v273.m256i_i64[0] = 1;
                v273.m256i_i64[1] = 1000
                                  * (v287.m256i_u32[1]
                                   + 86400LL
                                   * (((v152 / 100) >> 2)
                                    + ((1461 * v152) >> 2)
                                    + v153
                                    + (((unsigned __int32)v287.m256i_i32[0] >> 4) & 0x1FF)
                                    - v152 / 100
                                    - 719163))
                                  + v287.m256i_u32[2] / 0xF4240uLL;
                v316 = 1;
                sub_140D36570(v223, &v273, v143);
                goto LABEL_192;
              }
              v39 += 296;
              v133 = v307;
LABEL_193:
              v131 = v308;
            }
            else
            {
              v316 = 1;
              sub_140D2A0A0(v128, v222, v221, v39, (__int64)&v202[8]);
              v129 = *(_QWORD *)(v39 + 288);
              v130 = v314;
              if ( v129 >= *(_QWORD *)(v314 + 888) )
                goto LABEL_192;
              v39 += 296;
              v131 = v308;
              if ( *(_BYTE *)(*(_QWORD *)(v314 + 880) + 384 * v129 + 369) == 1 )
              {
                *(_BYTE *)(v314 + 1128) = 1;
                v132 = *(_QWORD *)(v130 + 976);
                v133 = v307;
                v66 = v303;
                v134 = v311;
                if ( v132 != -1 && v132 )
                {
                  v135 = v131;
                  sub_140001660(*(_QWORD *)(v130 + 984), v132, 1);
                  v131 = v135;
                }
                *(_QWORD *)(v130 + 976) = -1;
                v136 = v309;
                if ( v313 < v134 )
                  goto LABEL_197;
LABEL_195:
                if ( (unsigned __int64)(v136 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                  sub_140001660(v131, v136, 1);
LABEL_197:
                v67 = v301;
                v65 = v133;
                goto LABEL_75;
              }
              v133 = v307;
              v136 = v309;
            }
            v66 = v303;
            if ( v313 >= v311 )
              goto LABEL_195;
            goto LABEL_197;
          }
          v295 = (unsigned int)(v295 + 1);
          HIDWORD(v237) = v295;
          if ( (v70 & 1) == 0 )
          {
            v39 += 296;
            v99 = v307;
            goto LABEL_135;
          }
          v302 = v70;
          v308 = v79;
          v309 = v78;
          v287.m256i_i64[0] = 0;
          *(_OWORD *)&v287.m256i_u64[1] = 1u;
          v273.m256i_i64[2] = 1610612768;
          v273.m256i_i64[0] = (__int64)&v287;
          v273.m256i_i64[1] = (__int64)&off_141A82658;
          if ( (unsigned __int8)sub_140D76130(&v202[8], &v273) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v315,
              (unsigned int)&unk_141A6FA88,
              (__int64)&off_141A82710);
          v305 = v287.m256i_i64[2];
          v304 = *(_OWORD *)v287.m256i_i8;
          v90 = *v297;
          if ( *v297 != -1 && v90 )
            sub_140001660(*(_QWORD *)(v314 + 928), v90, 1);
          v91 = v297;
          v297[2] = v305;
          *v91 = v304;
          v316 = 1;
          sub_1416DB410(&v273, v39 + 32);
          v287.m256i_i64[2] = v273.m256i_i64[2];
          *(_OWORD *)v287.m256i_i8 = *(_OWORD *)v273.m256i_i8;
          v92 = *v298;
          if ( *v298 != -1 && v92 )
            sub_140001660(*(_QWORD *)(v314 + 952), v92, 1);
          v93 = v298;
          v298[2] = v287.m256i_i64[2];
          *v93 = *(_OWORD *)v287.m256i_i8;
          v94 = *(_QWORD *)(v39 + 288);
          v95 = -1;
          v96 = 1;
          if ( *(_DWORD *)&v202[8] == 6 )
          {
            v316 = 1;
            if ( (unsigned __int8)sub_1412467D0(&v202[16]) || (v316 = 1, (unsigned __int8)sub_141246860(&v202[16])) )
              v96 = 2;
            v316 = 1;
            if ( (unsigned __int8)sub_1412467D0(&v202[16]) || (v316 = 1, (unsigned __int8)sub_141246860(&v202[16])) )
            {
              v287.m256i_i64[0] = 0;
              *(_OWORD *)&v287.m256i_u64[1] = 1u;
              v273.m256i_i64[2] = 1610612768;
              v273.m256i_i64[0] = (__int64)&v287;
              v273.m256i_i64[1] = (__int64)&off_141A82658;
              if ( (unsigned __int8)sub_140D76130(&v202[8], &v273) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_7,
                  55,
                  (unsigned int)&v315,
                  (unsigned int)&unk_141A6FA88,
                  (__int64)&off_141A82710);
              v272 = v287.m256i_i64[1];
              v95 = v287.m256i_i64[0];
              v254 = v287.m256i_i64[2];
            }
          }
          v79 = v308;
          v97 = (_QWORD *)v314;
          if ( v94 < *(_QWORD *)(v314 + 888) && *(_BYTE *)(*(_QWORD *)(v314 + 880) + 384 * v94 + 369) )
          {
            *(_BYTE *)(v314 + 1128) = v96;
            v98 = v97[122];
            if ( v98 != -1 && v98 )
              sub_140001660(v97[123], v98, 1);
            v97[122] = v95;
            v97[123] = v272;
            v97[124] = v254;
            v39 = v88;
            v99 = v307;
            v78 = v309;
            v70 = v302;
          }
          else
          {
            v70 = v302;
            if ( (unsigned __int64)(v95 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v272, v95, 1);
            v39 = v88;
            v99 = v307;
            v78 = v309;
          }
          v89 = v310;
          if ( v313 >= v311 )
            goto LABEL_150;
        }
        else
        {
          v309 = v78;
          v89 = v310;
          if ( v310 < (__int64)0x8000000000000002uLL )
          {
            nullsub_1(v69, v78);
            v100 = (void *)sub_140001650(53, 1);
            if ( !v100 )
            {
              v302 = v70;
              v308 = v79;
              v316 = 1;
              sub_14196B2DB(1, 53);
            }
            v101 = v100;
            qmemcpy(v100, "refreshed account snapshot has no API request context", 53);
            v102 = *v297;
            if ( *v297 != -1 && v102 )
              sub_140001660(*(_QWORD *)(v314 + 928), v102, 1);
            v103 = v314;
            *(_QWORD *)(v314 + 920) = 53;
            *(_QWORD *)(v103 + 928) = v101;
            *(_QWORD *)(v103 + 936) = 53;
LABEL_133:
            v39 = v88;
            v99 = v307;
            v78 = v309;
LABEL_135:
            if ( v313 < v311 )
              goto LABEL_152;
LABEL_150:
            if ( (unsigned __int64)(v78 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
              sub_140001660(v79, v78, 1);
            goto LABEL_152;
          }
          v104 = *(_QWORD *)(v39 + 288);
          v105 = *(_QWORD *)(v314 + 888);
          if ( v104 >= v105 )
          {
            v302 = v70;
            v308 = v79;
            v316 = 1;
            sub_14196B673(v104, v105, &off_141A6E950);
          }
          if ( !*(_BYTE *)(*(_QWORD *)(v314 + 880) + 384 * v104 + 369) )
            goto LABEL_133;
          v302 = v70;
          v308 = v79;
          v316 = 1;
          sub_140712730(&v273, &v199, 0);
          v106 = *(_QWORD *)(v39 + 288);
          v107 = v275.m256i_i8[8];
          v34 = v271;
          if ( !v275.m256i_i8[8] )
            v34 = *((_BYTE **)&v274 + 1);
          v108 = v253;
          if ( !v275.m256i_i8[8] )
            v108 = v274;
          v109 = v273.m256i_i64[3];
          if ( v275.m256i_i8[8] )
            v109 = -1;
          v110 = (_QWORD *)v314;
          v111 = v106 < *(_QWORD *)(v314 + 888);
          v271 = v34;
          if ( v111 && *(_BYTE *)(*(_QWORD *)(v314 + 880) + 384 * v106 + 369) )
          {
            *(_BYTE *)(v314 + 1128) = 2 - v275.m256i_i8[8];
            v112 = v110[122];
            v39 += 296;
            v79 = v308;
            if ( v112 != -1 && v112 )
            {
              v113 = v108;
              v114 = v109;
              sub_140001660(v110[123], v110[122], 1);
              v109 = v114;
              v108 = v113;
              v34 = v271;
              v39 = v88;
            }
            v110[122] = v109;
            v110[123] = v108;
            v110[124] = v34;
          }
          else
          {
            v39 += 296;
            v79 = v308;
            if ( (unsigned __int64)(v109 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v108, v109, 1);
          }
          v253 = v108;
          v99 = v307;
          v70 = v302;
          v115 = v311;
          if ( v273.m256i_i64[0] )
            sub_140001660(v273.m256i_i64[1], v273.m256i_i64[0], 1);
          if ( v107 && v273.m256i_i64[3] )
            sub_140001660(v274, v273.m256i_i64[3], 1);
          v78 = v309;
          v89 = v310;
          if ( v313 >= v115 )
            goto LABEL_150;
        }
LABEL_152:
        v116 = v301;
        if ( v89 >= (__int64)0x8000000000000004uLL && v89 )
          sub_140001660(v266, v89, 1);
        if ( v70 )
          sub_140AF57C0(&v202[8]);
        v267 += 184LL;
        v68 = v264 - 184;
        v32 = v116;
        v65 = v99;
      }
      v32 += 184LL;
LABEL_220:
      v38 = 0x1642C8590B21642DLL;
      v33 = 0x1642C8590B21642DLL * (unsigned __int128)((v265 - v32) >> 3);
      v37 = v285;
      if ( v265 != v32 )
      {
        v32 += 344LL;
        v155 = 1LL - (*((_QWORD *)&v33 + 1) >> 1);
        do
        {
          v313 = v32;
          v310 = v155;
          if ( *(_QWORD *)(v32 - 344) )
            sub_1401AF970(v313 - 336);
          v156 = v313;
          v157 = *(_QWORD *)(v313 - 192);
          if ( v157 > 0 )
            sub_140001660(*(_QWORD *)(v313 - 184), v157, 1);
          *((_QWORD *)&v33 + 1) = *(_QWORD *)(v156 - 224);
          v158 = v310;
          if ( *((__int64 *)&v33 + 1) > 0 )
            sub_140001660(*(_QWORD *)(v156 - 216), *((_QWORD *)&v33 + 1), 1);
          v32 = v156 + 184;
          v155 = v158 + 1;
        }
        while ( v155 != 1 );
      }
      v39 = v65;
      if ( v296 )
      {
        sub_140001660(v300, 184 * v296, 8);
        v39 = v65;
      }
    }
  }
  v273.m256i_i64[0] = -1;
  BYTE8(v33) = 1;
  sub_140D2AC50(v314, DWORD2(v33), (unsigned int)&v273, v33 + (unsigned int)v28 / 0xF4240, (__int64)&v233);
  v166 = v32;
  v167 = v251;
  v168 = v252;
  if ( v252 )
  {
    v169 = (_QWORD *)(v251 + 8);
    do
    {
      v170 = *(v169 - 1);
      if ( v170 )
        result = sub_140001660(*v169, v170, 1);
      v169 += 3;
      --v168;
    }
    while ( v168 );
  }
  if ( v250 )
    result = sub_140001660(v167, 24 * v250, 8);
  if ( v246 )
  {
    v171 = 296 * v246;
    v172 = v166;
    goto LABEL_272;
  }
LABEL_273:
  if ( v255 != -1 && v255 )
    result = sub_140001660(v200, v255, 1);
  if ( v209.m256i_i64[0] )
    result = sub_140001660(v209.m256i_i64[1], v209.m256i_i64[0], 1);
  if ( v210.m256i_i64[0] )
    result = sub_140001660(v210.m256i_i64[1], v210.m256i_i64[0], 1);
  if ( v211 != -1 && v211 )
    return sub_140001660(v212, v211, 1);
  return result;
}
