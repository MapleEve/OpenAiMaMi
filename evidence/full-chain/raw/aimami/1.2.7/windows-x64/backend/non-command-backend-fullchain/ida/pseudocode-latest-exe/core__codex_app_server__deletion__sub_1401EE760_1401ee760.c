// win 1.2.7 latest-exe | module src/core/codex_app_server/deletion.rs | ea 0x1401ee760 | successor of pre-update 0x14100c440 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_1401EE760(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 *v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __int128 v11; // xmm2
  __m128i v12; // xmm1
  _DWORD *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  char *v19; // r15
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // r9
  unsigned __int64 v24; // r13
  int v25; // eax
  __int64 v26; // r8
  bool v27; // bl
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i v37; // xmm6
  __m128i v38; // xmm7
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // r15
  __m128i si128; // xmm8
  __m128i v49; // xmm9
  __m128i v50; // xmm10
  __m128i v51; // xmm11
  __int64 v52; // rax
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  const __m128i *i; // rdx
  unsigned __int64 v65; // rax
  __m128i v67; // kr00_16
  __m128i v68; // xmm0
  __m128i v69; // xmm13
  __int64 v70; // r14
  __int64 v71; // r12
  __m128i v72; // xmm14
  int v74; // eax
  bool v75; // zf
  __int64 v76; // r14
  __int64 v77; // r15
  __int64 v78; // rcx
  __int64 v79; // rbx
  unsigned __int64 v80; // rdx
  _QWORD *v81; // rax
  __m128i v82; // xmm0
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // eax
  int v89; // edx
  __int64 v90; // rax
  __int64 v91; // rdx
  const __m128i *v92; // rax
  const __m128i *v93; // rdx
  __int8 v94; // r15
  __m128i v95; // xmm0
  __int64 v96; // rbx
  __m128i v97; // xmm1
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  char v102; // al
  __int64 v103; // r15
  const __m128i *v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rbx
  int v108; // r15d
  char *v109; // r14
  int v110; // r12d
  __m128i v111; // xmm1
  __m128i v112; // xmm1
  __m128i v113; // xmm0
  __m128i v114; // xmm1
  char v115; // al
  int v116; // r8d
  __int64 v117; // r15
  __int64 v118; // r14
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r12
  __int64 v122; // rax
  __int64 v123; // r14
  __int64 v124; // rbx
  const __m128i *v125; // r12
  const __m128i *v126; // r15
  __int64 v127; // rbx
  __int64 v128; // r13
  __int64 v129; // r12
  __int64 v130; // rax
  __int64 v131; // r15
  __int64 v132; // r13
  __int64 v133; // rax
  __int64 v134; // rcx
  unsigned __int128 v135; // rax
  __int64 v136; // rbx
  __int64 v137; // r12
  _QWORD *v138; // r13
  __int64 v139; // rdx
  bool v140; // bl
  __int64 v141; // r13
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // r12
  __int64 v146; // r14
  __int64 v147; // rax
  __int64 v148; // r15
  __int64 v149; // r14
  __int64 v150; // rax
  __int64 v151; // rcx
  __m128i v152; // xmm0
  __m128i v153; // xmm1
  unsigned __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rax
  const __m128i *v158; // r12
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rdx
  const __m128i *v164; // rcx
  const __m128i *v165; // rbx
  __int64 v166; // rdx
  unsigned __int64 v167; // r14
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rdx
  unsigned __int64 v172; // r15
  __int64 v173; // rdx
  const __m128i *v174; // r8
  __m128i v175; // xmm6
  __m128i v176; // xmm7
  __m128i v177; // xmm8
  __m128i v178; // xmm9
  __int64 v179; // rax
  __m128i v180; // xmm12
  int v183; // eax
  __int64 j; // r8
  unsigned __int64 v185; // rax
  __int64 v186; // rax
  unsigned __int64 v187; // rcx
  _QWORD *v188; // rdi
  __m128i v189; // kr50_16
  __m128i v190; // xmm0
  __m128i v191; // xmm11
  __int64 v192; // r14
  __int64 v193; // rbx
  __m128i v194; // xmm0
  __int64 v196; // rdi
  __int64 v197; // rbx
  __int64 v198; // r14
  const __m128i *v199; // r15
  __m128i v201; // xmm0
  __int64 v202; // rax
  __int64 v203; // rdx
  __int64 v204; // rdi
  __int64 v205; // rdi
  __int64 v206; // rbx
  __int64 v207; // r14
  const __m128i *v208; // r15
  __m128i v210; // xmm0
  __int64 v211; // rax
  __int64 v212; // rdx
  unsigned __int64 v213; // rax
  __int64 v214; // rdi
  __m128i v215; // xmm0
  __m128i v216; // xmm1
  __int64 v217; // rax
  bool v218; // cf
  const __m128i *v219; // r15
  __int64 v220; // rcx
  __int64 v221; // rax
  __m128i v222; // xmm0
  __m128i v223; // xmm1
  __int64 v224; // rdx
  char v225; // al
  unsigned __int64 v226; // r14
  const __m128i *v227; // r15
  __int64 v228; // rbx
  unsigned __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // [rsp+40h] [rbp-40h] BYREF
  __m256i v232; // [rsp+48h] [rbp-38h] BYREF
  __int128 v233; // [rsp+68h] [rbp-18h]
  __int128 v234; // [rsp+78h] [rbp-8h]
  __int128 v235; // [rsp+88h] [rbp+8h]
  __m128i v236[2]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v237; // [rsp+B8h] [rbp+38h]
  __int128 v238; // [rsp+C8h] [rbp+48h]
  __int128 v239; // [rsp+D8h] [rbp+58h]
  __int64 v240; // [rsp+E8h] [rbp+68h]
  __int64 v241; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v242; // [rsp+F8h] [rbp+78h]
  __m128i v243; // [rsp+108h] [rbp+88h]
  __int128 v244; // [rsp+118h] [rbp+98h]
  __int128 v245; // [rsp+128h] [rbp+A8h]
  __int128 v246; // [rsp+138h] [rbp+B8h]
  __m128i v247; // [rsp+148h] [rbp+C8h]
  __m128i v248; // [rsp+158h] [rbp+D8h]
  __int128 v249; // [rsp+168h] [rbp+E8h]
  __int128 v250; // [rsp+178h] [rbp+F8h]
  __int128 v251; // [rsp+188h] [rbp+108h]
  __int64 v252; // [rsp+198h] [rbp+118h]
  __int64 v253[2]; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v254; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v255; // [rsp+1C0h] [rbp+140h]
  __int64 v256; // [rsp+1D0h] [rbp+150h]
  __int64 v257; // [rsp+1D8h] [rbp+158h]
  __int64 v258; // [rsp+1E8h] [rbp+168h]
  __int64 v259; // [rsp+1F0h] [rbp+170h]
  __int64 v260; // [rsp+1F8h] [rbp+178h] BYREF
  __int128 v261; // [rsp+200h] [rbp+180h]
  __m128i v262; // [rsp+210h] [rbp+190h] BYREF
  __m128i v263; // [rsp+220h] [rbp+1A0h]
  _QWORD v264[2]; // [rsp+230h] [rbp+1B0h] BYREF
  __m256i v265; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v266; // [rsp+260h] [rbp+1E0h]
  __int64 v267; // [rsp+268h] [rbp+1E8h]
  __int64 v268; // [rsp+270h] [rbp+1F0h]
  __int64 v269; // [rsp+278h] [rbp+1F8h]
  _BYTE v270[31]; // [rsp+280h] [rbp+200h] BYREF
  __m256i v271; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v272; // [rsp+2C0h] [rbp+240h]
  __int64 v273; // [rsp+2C8h] [rbp+248h]
  _BYTE v274[24]; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 (__fastcall *v275)(); // [rsp+2F0h] [rbp+270h]
  const __m128i *v276; // [rsp+2F8h] [rbp+278h]
  unsigned __int64 v277; // [rsp+300h] [rbp+280h]
  __m128i v278; // [rsp+338h] [rbp+2B8h] BYREF
  __int128 v279; // [rsp+348h] [rbp+2C8h] BYREF
  __int128 v280; // [rsp+358h] [rbp+2D8h]
  __int64 v281; // [rsp+368h] [rbp+2E8h]
  __m128i v282; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v283; // [rsp+380h] [rbp+300h]
  __int64 v284; // [rsp+388h] [rbp+308h]
  _BYTE v285[87]; // [rsp+390h] [rbp+310h] BYREF
  const __m128i *v286; // [rsp+3E8h] [rbp+368h] BYREF
  __int64 v287; // [rsp+3F0h] [rbp+370h]
  const __m128i *v288; // [rsp+3F8h] [rbp+378h]
  unsigned __int64 v289; // [rsp+400h] [rbp+380h]
  __int64 v290; // [rsp+408h] [rbp+388h]
  __m256i v291; // [rsp+410h] [rbp+390h] BYREF
  __int64 v292; // [rsp+430h] [rbp+3B0h]
  __int64 v293; // [rsp+438h] [rbp+3B8h]
  _BYTE v294[96]; // [rsp+440h] [rbp+3C0h] BYREF
  unsigned __int64 v295; // [rsp+4B0h] [rbp+430h]
  __int64 v296; // [rsp+4B8h] [rbp+438h]
  unsigned __int64 v297; // [rsp+4C0h] [rbp+440h]
  __int64 v298; // [rsp+4C8h] [rbp+448h]
  char v299; // [rsp+4D5h] [rbp+455h]
  char v300; // [rsp+4D6h] [rbp+456h]
  char v301; // [rsp+4D7h] [rbp+457h] BYREF
  const __m128i *v302; // [rsp+4D8h] [rbp+458h]
  char v303; // [rsp+4E7h] [rbp+467h]
  __int64 m128i_i64; // [rsp+4E8h] [rbp+468h]
  char v305; // [rsp+4F5h] [rbp+475h]
  char v306; // [rsp+4F6h] [rbp+476h]
  char v307; // [rsp+4F7h] [rbp+477h]
  __int64 v308; // [rsp+4F8h] [rbp+478h]

  v308 = -2;
  if ( !a4 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 8;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v8 = &v231;
  sub_140932A70(&v231);
  if ( v231 != 2 )
  {
    v252 = v240;
    v251 = v239;
    v250 = v238;
    v249 = v237;
    v248 = v236[1];
    v12 = _mm_loadu_si128((const __m128i *)&v232.m256i_u64[2]);
    v242 = *(_OWORD *)v232.m256i_i8;
    v243 = v12;
    v244 = v233;
    v245 = v234;
    v246 = v235;
    v247 = _mm_loadu_si128(v236);
    v241 = v231;
    *(_QWORD *)v294 = 0;
    *(_QWORD *)&v294[8] = v238;
    *(_OWORD *)&v294[16] = __PAIR128__(v238, *((unsigned __int64 *)&v237 + 1));
    *(_QWORD *)&v294[32] = *((_QWORD *)&v237 + 1);
    *(_QWORD *)&v294[40] = *((_QWORD *)&v237 + 1) + v238;
    *(_QWORD *)&v294[48] = 0;
    *(_WORD *)&v294[56] = 1;
    v13 = (_DWORD *)sub_1401D3FB0(v294);
    LOBYTE(v15) = v13 == nullptr;
    if ( v13 == nullptr || v14 < 7 )
      goto LABEL_7;
    v15 = *v13 ^ 0x616D6961u;
    if ( (unsigned int)v15 | *(_DWORD *)((char *)v13 + 3) ^ 0x2F696D61 )
      goto LABEL_7;
    *(_QWORD *)v294 = 0;
    *(_QWORD *)&v294[8] = v14 - 7;
    v19 = (char *)v13 + 7;
    *(_QWORD *)&v294[16] = (char *)v13 + 7;
    *(_QWORD *)&v294[24] = v14 - 7;
    *(_QWORD *)&v294[32] = 0;
    *(_QWORD *)&v294[40] = v14 - 7;
    *(_QWORD *)&v294[48] = 0x2B0000002BLL;
    v294[56] = 1;
    *(_WORD *)&v294[64] = 1;
    sub_140223420(v274, &v294[16]);
    if ( *(_DWORD *)v274 == 1 )
    {
      v8 = (__int64 *)(*(_QWORD *)&v274[8] - *(_QWORD *)v294);
      v20 = (__int64)&v19[*(_QWORD *)v294];
    }
    else if ( v294[65]
           || (v8 = (__int64 *)(*(_QWORD *)&v294[8] - *(_QWORD *)v294),
               (v294[64] | (*(_QWORD *)&v294[8] != *(_QWORD *)v294)) != 1) )
    {
      v20 = 0;
    }
    else
    {
      v20 = *(_QWORD *)&v294[16] + *(_QWORD *)v294;
    }
    v21 = 1;
    if ( v20 )
      v21 = v20;
    else
      v8 = nullptr;
    *(_QWORD *)v294 = v21;
    *(_QWORD *)&v294[8] = v8;
    *(_QWORD *)&v294[16] = 0;
    *(_QWORD *)&v294[24] = v8;
    v294[40] = 1;
    *(_QWORD *)&v294[32] = 0x2D0000002DLL;
    sub_140223420(v274, v294);
    if ( *(_DWORD *)v274 == 1 )
    {
      v22 = v21 + *(_QWORD *)&v274[16];
      v4 = (unsigned __int64)v8 - *(_QWORD *)&v274[16];
      v8 = *(__int64 **)&v274[8];
    }
    else
    {
      v22 = 0;
    }
    v285[0] = 0;
    *(_OWORD *)v294 = (unsigned __int64)v285;
    *(_QWORD *)&v294[16] = v8;
    *(_QWORD *)&v294[24] = v21;
    *(_OWORD *)&v294[32] = (unsigned __int64)v8;
    *(_QWORD *)&v294[48] = v8;
    *(_QWORD *)&v294[56] = 0x2E0000002ELL;
    v294[64] = 1;
    *(_WORD *)&v294[72] = 1;
    sub_140206890(v274, v294);
    if ( v285[0] == 1 )
    {
      v14 = *(_QWORD *)v274;
      if ( *(_QWORD *)v274 )
        sub_140001660(*(_QWORD *)&v274[8], 8LL * *(_QWORD *)v274, 8);
      goto LABEL_7;
    }
    v14 = *(_QWORD *)v274;
    if ( *(_QWORD *)v274 == -1 )
      goto LABEL_7;
    v15 = *(_QWORD *)&v274[8];
    if ( *(_QWORD *)&v274[16] != 3 )
    {
LABEL_31:
      v27 = 0;
      if ( !*(_QWORD *)v274 )
        goto LABEL_34;
      goto LABEL_32;
    }
    v23 = **(_QWORD **)&v274[8];
    v24 = *(_QWORD *)(*(_QWORD *)&v274[8] + 8LL);
    if ( v22 )
    {
      if ( v4 < 6 )
        goto LABEL_31;
      v25 = *(_DWORD *)v22 ^ 0x68706C61;
      v26 = v25 | *(unsigned __int16 *)(v22 + 4) ^ 0x2E61u;
      if ( v25 | *(unsigned __int16 *)(v22 + 4) ^ 0x2E61 )
        goto LABEL_31;
      v297 = **(_QWORD **)&v274[8];
      m128i_i64 = *(_QWORD *)&v274[8];
      v302 = *(const __m128i **)v274;
      v295 = *(_QWORD *)(*(_QWORD *)&v274[8] + 16LL);
      *(_QWORD *)v294 = 0;
      *(_QWORD *)&v294[8] = v4 - 6;
      *(_QWORD *)&v294[16] = v22 + 6;
      *(_QWORD *)&v294[24] = v4 - 6;
      *(_QWORD *)&v294[32] = 0;
      *(_QWORD *)&v294[40] = v4 - 6;
      *(_QWORD *)&v294[48] = 0x2E0000002ELL;
      v294[56] = 1;
      *(_WORD *)&v294[64] = 1;
      sub_14077C6C0(v274, v294, v26, v23);
      if ( *(_QWORD *)v274 != -1 )
      {
        v15 = *(_QWORD *)&v274[8];
        v27 = 0;
        v217 = m128i_i64;
        if ( v24 == 155 )
        {
          v295 |= v297;
          if ( !v295 )
          {
            if ( *(_QWORD *)&v274[16] == 2 )
            {
              v218 = **(_QWORD **)&v274[8] < 9u;
              if ( **(_QWORD **)&v274[8] == 9 )
                v218 = *(_QWORD *)(*(_QWORD *)&v274[8] + 8LL) < 2u;
              v27 = !v218;
            }
            else
            {
              v27 = 0;
            }
          }
        }
        if ( *(_QWORD *)v274 )
        {
          sub_140001660(*(_QWORD *)&v274[8], 8LL * *(_QWORD *)v274, 8);
          v217 = m128i_i64;
        }
        v14 = (unsigned __int64)v302;
        if ( v302 )
        {
          v28 = 8LL * (_QWORD)v302;
          v15 = v217;
          goto LABEL_33;
        }
LABEL_34:
        if ( v27 )
        {
          v278.m128i_i64[0] = 0;
          v278.m128i_i64[1] = 8;
          v279 = 0;
          v280 = 8u;
          v29 = sub_1416AE140(v15);
          v34 = v29;
          if ( *(_BYTE *)(v29 + 16) == 1 )
          {
            v35 = *(_QWORD *)v29;
            v36 = *(_QWORD *)(v34 + 8);
          }
          else
          {
            v35 = sub_1416C5230(v31, v30, v32, v33);
            *(_QWORD *)v34 = v35;
            *(_QWORD *)(v34 + 8) = v36;
            *(_BYTE *)(v34 + 16) = 1;
          }
          *(_QWORD *)v34 = v35 + 1;
          v37 = _mm_loadu_si128((const __m128i *)&xmmword_141A058A0);
          v255 = v37;
          v38 = _mm_loadu_si128((const __m128i *)&off_141A05890);
          v254 = v38;
          v256 = v35;
          v257 = v36;
          v39 = sub_1416AE140(v35 + 1);
          v44 = v39;
          if ( *(_BYTE *)(v39 + 16) == 1 )
          {
            v45 = *(_QWORD *)v39;
            v46 = *(_QWORD *)(v44 + 8);
          }
          else
          {
            v45 = sub_1416C5230(v41, v40, v42, v43);
            *(_QWORD *)v44 = v45;
            *(_QWORD *)(v44 + 8) = v46;
            *(_BYTE *)(v44 + 16) = 1;
          }
          *(_QWORD *)v44 = v45 + 1;
          v263 = v37;
          v262 = v38;
          v264[0] = v45;
          v264[1] = v46;
          v47 = a3 + 24 * a4;
          si128 = _mm_load_si128((const __m128i *)&xmmword_141A04650);
          v49 = _mm_cvtsi32_si128(0x3Au);
          v50 = _mm_load_si128((const __m128i *)&xmmword_141A04660);
          v51 = _mm_load_si128((const __m128i *)&xmmword_141A04670);
          v298 = 3 * a4;
          v289 = 0;
          v295 = v47;
          while ( 1 )
          {
            v56 = a3;
            if ( a3 == v47 )
              break;
            v57 = sub_1408FEA60(*(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
            sub_141597C30(v274, v57, v58);
            a3 += 24;
            if ( *(_DWORD *)v274 == -1 )
            {
              *(_OWORD *)v271.m256i_i8 = *(_OWORD *)&v274[4];
              *(_QWORD *)v285 = 0;
              *(_QWORD *)&v285[8] = 1;
              *(_QWORD *)&v285[16] = 0;
              *(_QWORD *)&v294[16] = 1610612768;
              *(_QWORD *)v294 = v285;
              *(_QWORD *)&v294[8] = &off_141A08790;
              if ( (unsigned __int8)sub_1415989F0(&v271, v294) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_3,
                  55,
                  (unsigned int)&v301,
                  (unsigned int)&unk_141A07F80,
                  (__int64)&off_141A0A758);
              v283 = *(_QWORD *)&v285[16];
              v282 = _mm_loadu_si128((const __m128i *)v285);
              v307 = 1;
              sub_1416DB410(v294, &v282);
              v307 = 1;
              v63 = sub_140871180((__int64)&v254, v294);
              if ( (_BYTE)v63 )
                goto LABEL_48;
              if ( v263.m128i_i64[1] )
              {
                v307 = 1;
                v65 = sub_1406CECD0(v264, &v282);
                _RCX = v65 >> 57;
                v67 = v262;
                v68 = _mm_cvtsi32_si128(v65 >> 57);
                v69 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v68, v68), 0), 68);
                v70 = v282.m128i_i64[1];
                v71 = v283;
                for ( i = nullptr; ; ++i )
                {
                  v63 = v67.m128i_i64[1] & v65;
                  v72 = _mm_loadu_si128((const __m128i *)(v67.m128i_i64[0] + v63));
                  _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v72, v69));
                  if ( _R13D )
                    break;
LABEL_57:
                  _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v72, (__m128i)-1LL));
                  if ( (_DWORD)_RCX )
                    goto LABEL_59;
                  v65 = (unsigned __int64)i[1].m128i_u64 + v63;
                }
                m128i_i64 = v63;
                v302 = i;
                while ( 1 )
                {
                  __asm { tzcnt   ecx, r13d }
                  _RCX = -(__int64)(v67.m128i_i64[1] & (v63 + _RCX));
                  if ( v71 == *(_QWORD *)(v67.m128i_i64[0] + 24 * _RCX - 8)
                    && !(unsigned int)sub_141923B40(v70, *(_QWORD *)(v67.m128i_i64[0] + 24 * _RCX - 16), v71) )
                  {
                    break;
                  }
                  v74 = _R13D - 1;
                  LOWORD(v74) = _R13D & (_R13D - 1);
                  v75 = (_WORD)v74 == 0;
                  _R13D = v74;
                  v63 = m128i_i64;
                  i = v302;
                  if ( v75 )
                    goto LABEL_57;
                }
LABEL_48:
                v47 = v295;
                if ( v282.m128i_i64[0] )
                  sub_140001660(v282.m128i_i64[1], v282.m128i_i64[0], 1);
              }
              else
              {
LABEL_59:
                if ( (v289 & 1) != 0 )
                {
                  v76 = 8;
                  LOBYTE(v63) = 8;
                  v298 = v63;
                  v292 = 1;
                  v268 = 0;
                  v296 = 0;
LABEL_117:
                  v125 = nullptr;
                  v126 = nullptr;
                  goto LABEL_118;
                }
                v77 = v283;
                v269 = v282.m128i_i64[1];
                v253[0] = v282.m128i_i64[1];
                v253[1] = v283;
                v297 = v247.m128i_u64[1];
                v302 = (const __m128i *)v248.m128i_i64[1];
                v78 = v248.m128i_i64[0];
                v247.m128i_i64[1] = 0;
                v248 = (__m128i)8uLL;
                v296 = v78;
                m128i_i64 = 0;
                while ( v302 != (const __m128i *)m128i_i64 )
                {
                  ++m128i_i64;
                  v79 = v78 + 32;
                  sub_1401AB4D0(v78, i);
                  v78 = v79;
                }
                v80 = v297;
                if ( v297 )
                  sub_140001660(v296, 32 * v297, 8);
                v265.m256i_i64[0] = 0;
                v265.m256i_i64[2] = 0;
                nullsub_1(v78, v80);
                v81 = (_QWORD *)sub_140001650(8, 1);
                if ( !v81 )
                  sub_14196B2DB(1, 8);
                *v81 = 0x6449646165726874LL;
                v291.m256i_i64[0] = 8;
                v291.m256i_i64[1] = (__int64)v81;
                v291.m256i_i64[2] = 8;
                v303 = 1;
                sub_140B72ED0((__int64)v294, v253);
                if ( v294[0] == 0xFF )
                {
                  *(_QWORD *)v285 = *(_QWORD *)&v294[8];
                  sub_14196B5F0(
                    (unsigned int)aCalledResultUn_0,
                    43,
                    (unsigned int)v285,
                    (unsigned int)&off_141A07E80,
                    (__int64)&off_141A08E68);
                }
                v82 = _mm_loadu_si128((const __m128i *)v294);
                *(__m128i *)&v285[16] = _mm_loadu_si128((const __m128i *)&v294[16]);
                *(__m128i *)v285 = v82;
                v303 = 0;
                sub_140A68320(v294, &v265, &v291, v285);
                if ( v294[0] != 0xFF )
                  sub_1401AB4D0(v294, v83);
                v271.m256i_i64[3] = v265.m256i_i64[2];
                *(__m128i *)&v271.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v265);
                v271.m256i_i8[0] = 5;
                v307 = 1;
                v84 = sub_140931890(
                        (unsigned int)v274,
                        (unsigned int)&v241,
                        (unsigned int)aThreadDelete,
                        13,
                        (__int64)&v271,
                        120,
                        0);
                v258 = *(_QWORD *)v274;
                if ( *(_QWORD *)v274 != -2 )
                {
                  LOBYTE(v84) = 6;
                  v298 = v84;
                  if ( *(_QWORD *)v274 != -1 )
                  {
                    v108 = 13;
                    v109 = "rpc_transport";
                    v110 = 0;
LABEL_115:
                    v305 = 0;
                    sub_140930870(v294, v274, aThreadDelete, 13);
                    v271.m256i_i64[0] = 0;
                    *(_OWORD *)&v271.m256i_u64[1] = 1u;
                    *(_QWORD *)&v285[16] = 1610612768;
                    *(_QWORD *)v285 = &v271;
                    *(_QWORD *)&v285[8] = &off_141A08790;
                    if ( (unsigned __int8)sub_140D76130(v294, v285) )
                      sub_14196B5F0(
                        (unsigned int)aADisplayImplem_3,
                        55,
                        (unsigned int)&v301,
                        (unsigned int)&unk_141A07F80,
                        (__int64)&off_141A0A758);
                    v292 = v271.m256i_i64[1];
                    v296 = v271.m256i_i64[0];
                    v124 = v271.m256i_i64[2];
                    sub_1401AF970(v294);
                    sub_1401F3630((_DWORD)v109, v108, v298, v110, m128i_i64, v292, v124);
                    v268 = v124;
                    v76 = 8;
                    goto LABEL_117;
                  }
                  if ( *(_QWORD *)&v274[8] != 1 )
                  {
                    m128i_i64 = *(_QWORD *)&v274[16];
                    v108 = 12;
                    v109 = "rpc_rejectedrpc_transport";
                    v110 = 0;
                    goto LABEL_115;
                  }
                  v110 = 1;
                  v108 = 12;
                  if ( *(_QWORD *)&v274[16] != -32600 )
                  {
                    m128i_i64 = *(_QWORD *)&v274[16];
                    if ( *(_QWORD *)&v274[16] == -32601 )
                    {
                      LOBYTE(v84) = 5;
                      v298 = v84;
                    }
                    v109 = "rpc_rejectedrpc_transport";
                    goto LABEL_115;
                  }
                  v167 = v277;
                  v305 = 1;
                  v302 = v276;
                  if ( (unsigned __int8)sub_1402366A0(
                                          "already has an active writerforked history still references itthread is not pe"
                                          "rsisted and cannot be deleted:",
                                          28,
                                          v276,
                                          v277) )
                  {
                    m128i_i64 = -32600;
                    v298 = 0;
                    v109 = "rpc_rejectedrpc_transport";
                    goto LABEL_115;
                  }
                  m128i_i64 = -32600;
                  if ( v167 <= 0x22 )
                  {
                    if ( v167 == 34 )
                    {
                      v169 = sub_141923B40(
                               "forked history still references itthread is not persisted and cannot be deleted:",
                               v302,
                               34);
                      if ( (_DWORD)v169 )
                      {
                        v169 = (unsigned int)_mm_movemask_epi8(
                                               _mm_and_si128(
                                                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(v302[1].m128i_u8[0]), v49),
                                                 _mm_cmpeq_epi8(_mm_loadu_si128(v302), si128)));
                        if ( (_DWORD)v169 == 0xFFFF )
                        {
                          LOBYTE(v169) = 2;
                        }
                        else
                        {
                          v169 = (unsigned int)_mm_movemask_epi8(
                                                 _mm_and_si128(
                                                   _mm_cmpeq_epi8(_mm_loadu_si128(v302), v51),
                                                   _mm_cmpeq_epi8(
                                                     _mm_loadu_si128((const __m128i *)((char *)&v302->m128i_u64[1] + 7)),
                                                     v50)));
                          LOBYTE(v169) = (4 * ((_DWORD)v169 != 0xFFFF)) | 2;
                        }
                      }
                      else
                      {
                        LODWORD(v169) = 1;
                      }
LABEL_185:
                      v298 = v169;
                    }
                    else if ( v167 >= 0x11 )
                    {
                      goto LABEL_177;
                    }
                  }
                  else
                  {
                    v305 = 1;
                    sub_1416E1760(
                      (unsigned int)v294,
                      (_DWORD)v302,
                      v167,
                      (unsigned int)"forked history still references itthread is not persisted and cannot be deleted:",
                      34);
                    v305 = 1;
                    v168 = sub_140236AD0(v285, v294);
                    if ( v285[0] )
                    {
                      v109 = "rpc_rejectedrpc_transport";
                      LOBYTE(v168) = 1;
                      v298 = v168;
                      goto LABEL_115;
                    }
LABEL_177:
                    v170 = (unsigned int)_mm_movemask_epi8(
                                           _mm_and_si128(
                                             _mm_cmpeq_epi8(_mm_cvtsi32_si128(v302[1].m128i_u8[0]), v49),
                                             _mm_cmpeq_epi8(_mm_loadu_si128(v302), si128)));
                    if ( (_DWORD)v170 == 0xFFFF )
                      goto LABEL_182;
                    if ( v167 < 0x1F )
                      goto LABEL_186;
                    v170 = (unsigned int)_mm_movemask_epi8(
                                           _mm_and_si128(
                                             _mm_cmpeq_epi8(_mm_loadu_si128(v302), v51),
                                             _mm_cmpeq_epi8(
                                               _mm_loadu_si128((const __m128i *)((char *)&v302->m128i_u64[1] + 7)),
                                               v50)));
                    if ( (_DWORD)v170 == 0xFFFF )
                    {
LABEL_182:
                      v109 = "rpc_rejectedrpc_transport";
                      LOBYTE(v170) = 2;
                      v298 = v170;
                      goto LABEL_115;
                    }
                    if ( v167 >= 0x2E )
                    {
                      v169 = 3
                           * (unsigned int)((unsigned int)sub_141923B40(
                                                            "thread is not persisted and cannot be deleted:",
                                                            v302,
                                                            46) != 0)
                           + 3;
                      goto LABEL_185;
                    }
                  }
LABEL_186:
                  v109 = "rpc_rejectedrpc_transport";
                  goto LABEL_115;
                }
                v281 = v247.m128i_i64[1];
                v86 = v248.m128i_i64[1];
                v87 = v248.m128i_i64[0];
                v247.m128i_i64[1] = 0;
                v248 = (__m128i)8uLL;
                v259 = 32 * v86;
                v297 = v87 + 32 * v86;
                v290 = v87;
                v267 = v87;
                v88 = sub_1416AEBD0(v87, v85);
                v267 = v290;
                sub_1416D0210(v88, v89, 5, 0, (__int64)&off_141A08E90);
                v284 = v77;
                v286 = nullptr;
                v287 = 8;
                v288 = nullptr;
                v266 = v290;
                v300 = 1;
                v90 = sub_140AA0D00(&off_141A05870);
                *(__m128i *)&v271.m256i_u64[2] = v37;
                *(__m128i *)v271.m256i_i8 = v38;
                v272 = v90;
                v273 = v91;
                v92 = (const __m128i *)v290;
                m128i_i64 = v290;
                v93 = (const __m128i *)v297;
                if ( v290 == v297 )
                  goto LABEL_75;
LABEL_72:
                v94 = v92->m128i_i8[0];
                m128i_i64 = (__int64)v92[2].m128i_i64;
                if ( v94 != -1 )
                {
                  v95 = _mm_loadu_si128((const __m128i *)&v92->m128i_i8[1]);
                  *(__m128i *)&v285[15] = _mm_loadu_si128(v92 + 1);
                  *(__m128i *)v285 = v95;
                  v302 = v92 + 2;
                  goto LABEL_80;
                }
                v93 = v92 + 2;
                while ( 1 )
                {
LABEL_75:
                  v302 = v93;
                  v293 = m128i_i64;
                  v306 = 1;
                  sub_140930CD0((__int128 *)v294);
                  v96 = *(_QWORD *)v294;
                  v94 = v294[8];
                  v97 = _mm_loadu_si128((const __m128i *)&v294[24]);
                  *(_OWORD *)v270 = *(_OWORD *)&v294[9];
                  *(__m128i *)&v270[15] = v97;
                  if ( *(_QWORD *)v294 != -1 )
                  {
                    *(_QWORD *)&v285[79] = *(_QWORD *)&v294[88];
                    v111 = _mm_loadu_si128((const __m128i *)&v294[56]);
                    *(_OWORD *)&v285[63] = *(_OWORD *)&v294[72];
                    *(__m128i *)&v285[47] = v111;
                    *(_OWORD *)&v285[31] = *(_OWORD *)&v294[40];
                    *(_OWORD *)v285 = *(_OWORD *)v270;
                    *(__m128i *)&v285[15] = _mm_loadu_si128((const __m128i *)&v270[15]);
                    goto LABEL_109;
                  }
                  v291.m256i_i8[0] = v294[8];
                  *(_OWORD *)&v291.m256i_u64[2] = *(_OWORD *)&v270[15];
                  *(__m128i *)&v291.m256i_i8[1] = _mm_load_si128((const __m128i *)v270);
                  if ( sub_1416724D0(aId_0, 2, &v291) )
                  {
                    if ( sub_1416724D0(aMethod_0, 6, &v291) )
                    {
                      sub_140930F60(v294, &v241, &v291);
                      v96 = *(_QWORD *)v294;
                      if ( *(_QWORD *)v294 != -1 )
                      {
                        v94 = v294[8];
                        v112 = _mm_loadu_si128((const __m128i *)&v294[25]);
                        *(_OWORD *)v285 = *(_OWORD *)&v294[9];
                        *(__m128i *)&v285[16] = v112;
                        *(_OWORD *)&v285[32] = *(_OWORD *)&v294[41];
                        *(_OWORD *)&v285[48] = *(_OWORD *)&v294[57];
                        *(__m128i *)&v285[64] = _mm_loadu_si128((const __m128i *)&v294[73]);
                        *(_QWORD *)&v285[79] = *(_QWORD *)&v294[88];
                        v293 = m128i_i64;
                        v306 = 1;
                        sub_1401AB4D0(&v291, v98);
LABEL_109:
                        *(_QWORD *)v294 = v96;
                        v294[8] = v94;
                        *(_QWORD *)&v294[88] = *(_QWORD *)&v285[79];
                        *(_OWORD *)&v294[73] = *(_OWORD *)&v285[64];
                        v113 = _mm_load_si128((const __m128i *)v285);
                        v114 = _mm_load_si128((const __m128i *)&v285[16]);
                        *(_OWORD *)&v294[57] = *(_OWORD *)&v285[48];
                        *(_OWORD *)&v294[41] = *(_OWORD *)&v285[32];
                        *(__m128i *)&v294[25] = v114;
                        *(__m128i *)&v294[9] = v113;
                        *(_QWORD *)v270 = 0;
                        *(_QWORD *)&v270[8] = 1;
                        *(_QWORD *)&v270[16] = 0;
                        v291.m256i_i64[2] = 1610612768;
                        v291.m256i_i64[0] = (__int64)v270;
                        v291.m256i_i64[1] = (__int64)&off_141A08790;
                        v115 = sub_140D76130(v294, &v291);
                        v117 = v284;
                        if ( v115 )
                          sub_14196B5F0(
                            (unsigned int)aADisplayImplem_3,
                            55,
                            (unsigned int)&v301,
                            (unsigned int)&unk_141A07F80,
                            (__int64)&off_141A0A758);
                        v296 = *(_QWORD *)v270;
                        v118 = *(_QWORD *)&v270[16];
                        v292 = *(_QWORD *)&v270[8];
                        LOBYTE(v116) = 7;
                        sub_1401F3630(
                          (unsigned int)aNotifications,
                          13,
                          v116,
                          0,
                          (__int64)aThreadDeleted,
                          *(__int64 *)&v270[8],
                          *(__int64 *)&v270[16]);
                        if ( v117 < 0 )
                        {
                          v121 = 0;
                        }
                        else
                        {
                          v268 = v118;
                          if ( !v117 )
                          {
                            v123 = 1;
                            goto LABEL_151;
                          }
                          nullsub_1(v120, v119);
                          v121 = 1;
                          v122 = sub_140001650(v117, 1);
                          if ( v122 )
                          {
                            v123 = v122;
                            sub_1419234B0(v122, v269, v117);
LABEL_151:
                            v291.m256i_i64[0] = v117;
                            v291.m256i_i64[1] = v123;
                            v291.m256i_i64[2] = v117;
                            if ( (unsigned __int8)sub_140871180((__int64)&v271, &v291) )
                            {
                              v125 = v288;
                            }
                            else
                            {
                              if ( v117 )
                              {
                                nullsub_1(v156, v155);
                                v157 = sub_140001650(v117, 1);
                                if ( !v157 )
                                  sub_14196B2DB(1, v117);
                                v298 = v157;
                                sub_1419234B0(v157, v269, v117);
                              }
                              else
                              {
                                v298 = 1;
                              }
                              v158 = v288;
                              if ( v288 == v286 )
                                sub_141939F90(&v286);
                              v159 = v287;
                              v160 = 3LL * (_QWORD)v158;
                              v161 = v284;
                              *(_QWORD *)(v287 + 8 * v160) = v284;
                              *(_QWORD *)(v159 + 8 * v160 + 8) = v298;
                              *(_QWORD *)(v159 + 8 * v160 + 16) = v161;
                              v125 = (const __m128i *)&v158->m128i_i8[1];
                              v288 = v125;
                            }
                            v126 = v286;
                            v76 = v287;
                            v293 = m128i_i64;
                            v306 = 0;
                            v162 = sub_1401AF970(v294);
                            LOBYTE(v162) = 7;
                            v298 = v162;
                            goto LABEL_161;
                          }
                        }
                        sub_14196B2DB(v121, v117);
                      }
                    }
                  }
                  *(__m128i *)&v285[15] = _mm_loadu_si128((const __m128i *)&v291.m256i_u64[2]);
                  *(_OWORD *)v285 = *(_OWORD *)&v291.m256i_i8[1];
LABEL_80:
                  *(_OWORD *)&v265.m256i_u64[2] = *(_OWORD *)&v285[15];
                  *(__m128i *)&v265.m256i_i8[1] = _mm_load_si128((const __m128i *)v285);
                  v265.m256i_i8[0] = v94;
                  v99 = sub_1416724D0(aMethod_0, 6, &v265);
                  if ( !v99 )
                    goto LABEL_85;
                  if ( *(_BYTE *)v99 != 3 )
                    goto LABEL_85;
                  if ( *(_QWORD *)(v99 + 24) != 14 )
                    goto LABEL_85;
                  v100 = 0x646574656C65642FLL;
                  if ( **(_QWORD **)(v99 + 16) ^ 0x642F646165726874LL
                     | *(_QWORD *)(*(_QWORD *)(v99 + 16) + 6LL) ^ 0x646574656C65642FLL )
                  {
                    goto LABEL_85;
                  }
                  if ( sub_1416724D0(aId_0, 2, &v265) )
                    goto LABEL_85;
                  v101 = sub_14166BC00(&v265, aParamsThreadid, 16);
                  if ( !v101 )
                    goto LABEL_85;
                  if ( *(_BYTE *)v101 != 3 )
                    goto LABEL_85;
                  sub_141597C30(v294, *(_QWORD *)(v101 + 16), *(_QWORD *)(v101 + 24));
                  if ( *(_DWORD *)v294 != -1 )
                    goto LABEL_85;
                  *(__m128i *)v270 = _mm_loadu_si128((const __m128i *)&v294[4]);
                  *(_QWORD *)v285 = 0;
                  *(_QWORD *)&v285[8] = 1;
                  *(_QWORD *)&v285[16] = 0;
                  *(_QWORD *)&v294[16] = 1610612768;
                  *(_QWORD *)v294 = v285;
                  *(_QWORD *)&v294[8] = &off_141A08790;
                  v102 = sub_1415989F0(v270, v294);
                  v103 = v284;
                  if ( v102 )
                    sub_14196B5F0(
                      (unsigned int)aADisplayImplem_3,
                      55,
                      (unsigned int)&v301,
                      (unsigned int)&unk_141A07F80,
                      (__int64)&off_141A0A758);
                  v291.m256i_i64[2] = *(_QWORD *)&v285[16];
                  *(__m128i *)v291.m256i_i8 = _mm_loadu_si128((const __m128i *)v285);
                  sub_1416DB410(v294, &v291);
                  if ( !(unsigned __int8)sub_140871180((__int64)&v271, v294) )
                  {
                    sub_1416DB410(v294, &v291);
                    v104 = v288;
                    if ( v288 == v286 )
                      sub_141939F90(&v286);
                    v105 = v287;
                    v106 = 3LL * (_QWORD)v104;
                    *(_QWORD *)(v287 + 8 * v106 + 16) = *(_QWORD *)&v294[16];
                    *(__m128i *)(v105 + 8 * v106) = _mm_loadu_si128((const __m128i *)v294);
                    v288 = (const __m128i *)&v104->m128i_i8[1];
                  }
                  if ( v291.m256i_i64[2] == v103 )
                  {
                    v107 = v291.m256i_i64[1];
                    if ( !(unsigned int)sub_141923B40(v291.m256i_i64[1], v269, v103) )
                      break;
                  }
                  v100 = v291.m256i_i64[0];
                  if ( v291.m256i_i64[0] )
                    sub_140001660(v291.m256i_i64[1], v291.m256i_i64[0], 1);
LABEL_85:
                  v293 = m128i_i64;
                  v306 = 1;
                  sub_1401AB4D0(&v265, v100);
                  v92 = v302;
                  v93 = (const __m128i *)v297;
                  if ( v302 != (const __m128i *)v297 )
                    goto LABEL_72;
                }
                v126 = v286;
                v76 = v287;
                v125 = v288;
                v171 = v291.m256i_i64[0];
                if ( v291.m256i_i64[0] )
                  sub_140001660(v107, v291.m256i_i64[0], 1);
                v293 = m128i_i64;
                v306 = 0;
                v296 = -1;
                sub_1401AB4D0(&v265, v171);
LABEL_161:
                v266 = m128i_i64;
                v300 = 0;
                sub_140190060(&v271);
                v164 = v302;
                v297 = (v297 - (unsigned __int64)v302) >> 5;
                m128i_i64 = 0;
                while ( v297 != m128i_i64 )
                {
                  ++m128i_i64;
                  v165 = v164 + 2;
                  sub_1401AB4D0(v164, v163);
                  v164 = v165;
                }
                v166 = v281;
                if ( v281 )
                  sub_140001660(v290, 32 * v281, 8);
                v307 = 1;
                sub_1401AB4D0(&v274[8], v166);
LABEL_118:
                v127 = v76 + 24LL * (_QWORD)v125;
                *(_QWORD *)v294 = v76;
                *(_QWORD *)&v294[8] = v76;
                v297 = (unsigned __int64)v126;
                *(_QWORD *)&v294[16] = v126;
                *(_QWORD *)&v294[24] = v127;
                v128 = v76;
                if ( v76 != v127 )
                {
                  while ( 1 )
                  {
                    v129 = v128 + 24;
                    *(_QWORD *)&v294[8] = v128 + 24;
                    v130 = *(_QWORD *)v128;
                    *(__m128i *)v271.m256i_i8 = _mm_loadu_si128((const __m128i *)(v128 + 8));
                    if ( v130 == -1 )
                    {
                      v128 += 24;
                      goto LABEL_130;
                    }
                    m128i_i64 = v130;
                    *(_QWORD *)v285 = v130;
                    *(__m128i *)&v285[8] = _mm_load_si128((const __m128i *)&v271);
                    v299 = 1;
                    sub_1416DB410(v274, v285);
                    v299 = 1;
                    if ( !(unsigned __int8)sub_140871180((__int64)&v262, v274) )
                      break;
                    if ( m128i_i64 )
                    {
                      sub_140001660(*(_QWORD *)&v285[8], m128i_i64, 1);
                      v128 += 24;
                      if ( v129 == v127 )
                        goto LABEL_130;
                    }
                    else
                    {
LABEL_127:
                      v128 = v129;
                      if ( v129 == v127 )
                        goto LABEL_130;
                    }
                  }
                  v302 = *(const __m128i **)&v285[8];
                  v131 = *(_QWORD *)&v285[16];
                  v132 = v279;
                  if ( (_QWORD)v279 == v278.m128i_i64[0] )
                    sub_141939F90(&v278);
                  v133 = v278.m128i_i64[1];
                  v134 = 3 * v132;
                  *(_QWORD *)(v278.m128i_i64[1] + 8 * v134) = m128i_i64;
                  *(_QWORD *)(v133 + 8 * v134 + 8) = v302;
                  *(_QWORD *)(v133 + 8 * v134 + 16) = v131;
                  *(_QWORD *)&v279 = v132 + 1;
                  goto LABEL_127;
                }
LABEL_130:
                v135 = 0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(v127 - v128);
                v75 = v127 == v128;
                v136 = v296;
                if ( !v75 )
                {
                  v137 = *((_QWORD *)&v135 + 1) >> 4;
                  v138 = (_QWORD *)(v128 + 8);
                  do
                  {
                    v139 = *(v138 - 1);
                    if ( v139 )
                      sub_140001660(*v138, v139, 1);
                    v138 += 3;
                    --v137;
                  }
                  while ( v137 );
                }
                if ( v297 )
                  sub_140001660(v76, 24 * v297, 8);
                if ( v136 == -1 )
                {
                  if ( v282.m128i_i64[0] )
                    sub_140001660(v282.m128i_i64[1], v282.m128i_i64[0], 1);
                  v47 = v295;
                }
                else
                {
                  *(_QWORD *)v285 = v136;
                  *(_QWORD *)&v285[8] = v292;
                  *(_QWORD *)&v285[16] = v268;
                  v140 = (unsigned __int8)(v298 - 5) < 3u;
                  v302 = (const __m128i *)v282.m128i_i64[1];
                  m128i_i64 = v282.m128i_i64[0];
                  v141 = v283;
                  v142 = 8 * (unsigned int)(unsigned __int8)v298;
                  if ( v268 )
                  {
                    v143 = *(__int64 *)((char *)&off_141A0ACD8 + v142);
                    v144 = *(_QWORD *)((char *)&unk_141A0AD20 + v142);
                    v271.m256i_i64[0] = v143;
                    v271.m256i_i64[1] = v144;
                    *(_QWORD *)v274 = &v271;
                    *(_QWORD *)&v274[8] = sub_140191200;
                    *(_QWORD *)&v274[16] = v285;
                    v275 = sub_1400015F0;
                    sub_1416DAFA0(&v260, &unk_141A05E03, v274);
                  }
                  else
                  {
                    v145 = *(__int64 *)((char *)&off_141A0ACD8 + v142);
                    v146 = *(_QWORD *)((char *)&unk_141A0AD20 + v142);
                    nullsub_1(&unk_141A0AD20, 0);
                    v147 = sub_140001650(v146, 1);
                    if ( !v147 )
                      sub_14196B2DB(1, v146);
                    v148 = v147;
                    sub_1419234B0(v147, v145, v146);
                    v260 = v146;
                    *(_QWORD *)&v261 = v148;
                    *((_QWORD *)&v261 + 1) = v146;
                  }
                  *(_QWORD *)v294 = m128i_i64;
                  *(_QWORD *)&v294[8] = v302;
                  *(_QWORD *)&v294[16] = v141;
                  *(_QWORD *)&v294[24] = v260;
                  *(_OWORD *)&v294[32] = v261;
                  v149 = *((_QWORD *)&v280 + 1);
                  if ( *((_QWORD *)&v280 + 1) == *((_QWORD *)&v279 + 1) )
                    sub_1419396D0((char *)&v279 + 8);
                  v150 = v280;
                  v151 = 48 * v149;
                  v152 = _mm_loadu_si128((const __m128i *)v294);
                  v153 = _mm_loadu_si128((const __m128i *)&v294[16]);
                  *(_OWORD *)(v280 + v151 + 32) = *(_OWORD *)&v294[32];
                  *(__m128i *)(v150 + v151 + 16) = v153;
                  *(__m128i *)(v150 + v151) = v152;
                  *((_QWORD *)&v280 + 1) = v149 + 1;
                  v47 = v295;
                  if ( *(_QWORD *)v285 )
                    sub_140001660(*(_QWORD *)&v285[8], *(_QWORD *)v285, 1);
                  v154 = v289;
                  LOBYTE(v154) = v140 | v289;
                  v289 = v154;
                }
              }
            }
            else
            {
              sub_1416DB410(v285, v56);
              nullsub_1(v60, v59);
              v61 = sub_140001650(97, 1);
              if ( !v61 )
                sub_14196B2DB(1, 97);
              *(_OWORD *)(v61 + 80) = xmmword_141A05B5F;
              *(_OWORD *)(v61 + 64) = xmmword_141A05B4F;
              *(_OWORD *)(v61 + 48) = xmmword_141A05B3F;
              *(_OWORD *)(v61 + 32) = xmmword_141A05B2F;
              *(_OWORD *)(v61 + 16) = xmmword_141A05B1F;
              *(_OWORD *)v61 = xmmword_141A05B0F;
              *(_BYTE *)(v61 + 96) = -126;
              *(_OWORD *)v294 = *(_OWORD *)v285;
              *(_QWORD *)&v294[16] = *(_QWORD *)&v285[16];
              *(_QWORD *)&v294[24] = 97;
              *(_QWORD *)&v294[32] = v61;
              *(_QWORD *)&v294[40] = 97;
              v62 = *((_QWORD *)&v280 + 1);
              if ( *((_QWORD *)&v280 + 1) == *((_QWORD *)&v279 + 1) )
                sub_1419396D0((char *)&v279 + 8);
              v52 = v280;
              v53 = 48 * v62;
              v54 = _mm_load_si128((const __m128i *)v294);
              v55 = _mm_load_si128((const __m128i *)&v294[16]);
              *(_OWORD *)(v280 + v53 + 32) = *(_OWORD *)&v294[32];
              *(__m128i *)(v52 + v53 + 16) = v55;
              *(__m128i *)(v52 + v53) = v54;
              *((_QWORD *)&v280 + 1) = v62 + 1;
            }
          }
          v289 = *((_QWORD *)&v280 + 1);
          if ( !*((_QWORD *)&v280 + 1) )
            goto LABEL_208;
          v172 = 1 - v289;
          v173 = 48 * v289 - 48;
          v298 = v280;
          v174 = (const __m128i *)(v280 + 48);
          m128i_i64 = 0;
          v175 = _mm_load_si128((const __m128i *)&xmmword_141A046A0);
          v176 = _mm_load_si128((const __m128i *)&xmmword_141A046B0);
          v177 = _mm_load_si128((const __m128i *)&xmmword_141A04680);
          v178 = _mm_load_si128((const __m128i *)&xmmword_141A04690);
          while ( 1 )
          {
            v302 = v174;
            v297 = v173;
            if ( !v263.m128i_i64[1] )
              goto LABEL_207;
            v188 = (_QWORD *)(v298 + 48 * m128i_i64);
            v185 = sub_1406CECD0(v264, v188);
            v295 = v172;
            v189 = v262;
            v190 = _mm_cvtsi32_si128(v185 >> 57);
            v191 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v190, v190), 0), 68);
            v192 = v188[1];
            v193 = v188[2];
            for ( j = 0; ; j += 16 )
            {
              v179 = v189.m128i_i64[1] & v185;
              v180 = _mm_loadu_si128((const __m128i *)(v189.m128i_i64[0] + v179));
              _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v180, v191));
              if ( _R15D )
                break;
LABEL_197:
              _RDX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v180, (__m128i)-1LL));
              v172 = v295;
              if ( (_DWORD)_RDX )
                goto LABEL_207;
              v185 = j + v179 + 16;
            }
            v292 = v179;
            v296 = j;
            while ( 1 )
            {
              __asm { tzcnt   edx, r15d }
              _RDX = -(v189.m128i_i64[1] & (v179 + _RDX));
              if ( v193 == *(_QWORD *)(v189.m128i_i64[0] + 24 * _RDX - 8)
                && !(unsigned int)sub_141923B40(v192, *(_QWORD *)(v189.m128i_i64[0] + 24 * _RDX - 16), v193) )
              {
                break;
              }
              v183 = _R15D - 1;
              LOWORD(v183) = _R15D & (_R15D - 1);
              v75 = (_WORD)v183 == 0;
              _R15D = v183;
              v179 = v292;
              j = v296;
              if ( v75 )
                goto LABEL_197;
            }
            v186 = v188[4];
            v187 = v188[5];
            v172 = v295;
            if ( v187 >= 0x1A )
            {
              if ( _mm_movemask_epi8(
                     _mm_and_si128(
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v186), v178),
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v186 + 10)), v177))) == 0xFFFF )
                goto LABEL_207;
            }
            else if ( v187 != 25 )
            {
              goto LABEL_247;
            }
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v186), v176),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v186 + 9)), v175))) != 0xFFFF )
            {
LABEL_247:
              sub_140031C30(v188);
              if ( m128i_i64 + 1 < v289 )
              {
                v219 = v302;
                do
                {
                  v302 = v219;
                  v225 = sub_1408457C0(&v262, v219);
                  v226 = v295;
                  v227 = v302;
                  if ( v225 )
                  {
                    v228 = v302[2].m128i_i64[0];
                    v229 = v302[2].m128i_u64[1];
                    if ( v229 >= 0x1A )
                    {
                      if ( _mm_movemask_epi8(
                             _mm_and_si128(
                               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v228), v178),
                               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v228 + 10)), v177))) == 0xFFFF )
                        goto LABEL_249;
                    }
                    else if ( v229 != 25 )
                    {
                      goto LABEL_257;
                    }
                    if ( _mm_movemask_epi8(
                           _mm_and_si128(
                             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v228), v176),
                             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v228 + 9)), v175))) != 0xFFFF )
                    {
LABEL_257:
                      if ( v302->m128i_i64[0] )
                        sub_140001660(v302->m128i_i64[1], v302->m128i_i64[0], 1);
                      v230 = v227[1].m128i_i64[1];
                      if ( v230 )
                        sub_140001660(v228, v230, 1);
                      goto LABEL_250;
                    }
                  }
LABEL_249:
                  v220 = m128i_i64;
                  v221 = 48 * m128i_i64;
                  v222 = _mm_loadu_si128(v302);
                  v223 = _mm_loadu_si128(v302 + 1);
                  v224 = v298;
                  *(__m128i *)(v298 + v221 + 32) = v302[2];
                  *(__m128i *)(v224 + v221 + 16) = v223;
                  *(__m128i *)(v224 + v221) = v222;
                  m128i_i64 = v220 + 1;
LABEL_250:
                  v297 -= 48LL;
                  v219 = v227 + 3;
                  v295 = v226 + 1;
                }
                while ( v226 != -1 );
              }
              *((_QWORD *)&v280 + 1) = m128i_i64;
LABEL_208:
              v194 = _mm_loadu_si128(&v278);
              *(_OWORD *)&v294[32] = v280;
              HIDWORD(_RAX) = HIDWORD(v280);
              *(_OWORD *)&v294[16] = v279;
              *(__m128i *)v294 = v194;
              v196 = v262.m128i_i64[1];
              if ( v262.m128i_i64[1] )
              {
                v197 = v263.m128i_i64[1];
                if ( v263.m128i_i64[1] )
                {
                  v198 = v262.m128i_i64[0];
                  v199 = (const __m128i *)(v262.m128i_i64[0] + 16);
                  _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v262.m128i_i64[0]));
                  do
                  {
                    if ( !(_WORD)_R12D )
                    {
                      do
                      {
                        v201 = _mm_load_si128(v199);
                        v198 -= 384;
                        ++v199;
                        _R12D = _mm_movemask_epi8(v201) ^ 0xFFFF;
                      }
                      while ( !_R12D );
                    }
                    __asm { tzcnt   eax, r12d }
                    v202 = -3LL * _RAX;
                    v203 = *(_QWORD *)(v198 + 8 * v202 - 24);
                    if ( v203 )
                      sub_140001660(*(_QWORD *)(v198 + 8 * v202 - 16), v203, 1);
                    --v197;
                    _RAX = _R12D & (unsigned int)(_R12D - 1);
                    _R12D &= _R12D - 1;
                  }
                  while ( v197 );
                }
                _RAX = (24 * v196 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                v204 = _RAX + v196 + 17;
                if ( v204 )
                  sub_140001660(v262.m128i_i64[0] - _RAX, v204, 16);
              }
              v205 = v254.m128i_i64[1];
              if ( v254.m128i_i64[1] )
              {
                v206 = v255.m128i_i64[1];
                if ( v255.m128i_i64[1] )
                {
                  v207 = v254.m128i_i64[0];
                  v208 = (const __m128i *)(v254.m128i_i64[0] + 16);
                  _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v254.m128i_i64[0]));
                  do
                  {
                    if ( !(_WORD)_R12D )
                    {
                      do
                      {
                        v210 = _mm_load_si128(v208);
                        v207 -= 384;
                        ++v208;
                        _R12D = _mm_movemask_epi8(v210) ^ 0xFFFF;
                      }
                      while ( !_R12D );
                    }
                    __asm { tzcnt   eax, r12d }
                    v211 = -3LL * _RAX;
                    v212 = *(_QWORD *)(v207 + 8 * v211 - 24);
                    if ( v212 )
                      sub_140001660(*(_QWORD *)(v207 + 8 * v211 - 16), v212, 1);
                    --v206;
                    _RAX = _R12D & (unsigned int)(_R12D - 1);
                    _R12D &= _R12D - 1;
                  }
                  while ( v206 );
                }
                v213 = (24 * v205 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                v214 = v213 + v205 + 17;
                if ( v214 )
                  sub_140001660(v254.m128i_i64[0] - v213, v214, 16);
              }
              v215 = _mm_load_si128((const __m128i *)v294);
              v216 = _mm_load_si128((const __m128i *)&v294[16]);
              *(_OWORD *)(a1 + 40) = *(_OWORD *)&v294[32];
              *(__m128i *)(a1 + 24) = v216;
              *(__m128i *)(a1 + 8) = v215;
              *(_QWORD *)a1 = -1;
              goto LABEL_9;
            }
LABEL_207:
            ++v172;
            v173 = v297 - 48;
            v174 = v302 + 3;
            if ( ++m128i_i64 == v289 )
              goto LABEL_208;
          }
        }
LABEL_7:
        nullsub_1(v15, v14);
        v16 = sub_140001650(147, 1);
        if ( !v16 )
          sub_14196B2DB(1, 147);
        v17 = v16;
        sub_1419234B0(v16, aSessionDeleteU, 147);
        *(_QWORD *)a1 = 10;
        *(_QWORD *)(a1 + 8) = 147;
        *(_QWORD *)(a1 + 16) = v17;
        *(_QWORD *)(a1 + 24) = 147;
LABEL_9:
        sub_1401AE7A0(&v241);
        return a1;
      }
      v27 = 0;
      v14 = (unsigned __int64)v302;
      v15 = m128i_i64;
      if ( !v302 )
        goto LABEL_34;
    }
    else
    {
      v27 = v23 != 0 || v24 >= 0x9B;
      if ( !*(_QWORD *)v274 )
        goto LABEL_34;
    }
LABEL_32:
    v28 = 8 * v14;
LABEL_33:
    sub_140001660(v15, v28, 8);
    goto LABEL_34;
  }
  *(__m128i *)&v294[80] = v236[0];
  *(_OWORD *)&v294[64] = v235;
  *(_OWORD *)&v294[48] = v234;
  *(_OWORD *)&v294[32] = v233;
  *(__m256i *)v294 = v232;
  *(_QWORD *)v285 = v294;
  *(_QWORD *)&v285[8] = sub_140D76130;
  sub_1416DAFA0(v274, &unk_141A077D0, v285);
  *(_OWORD *)&v232.m256i_u64[1] = *(_OWORD *)v274;
  v232.m256i_i64[3] = *(_QWORD *)&v274[16];
  sub_1401AF970(v294);
  v232.m256i_i64[0] = 10;
  *(__m128i *)(a1 + 80) = v236[0];
  *(_OWORD *)(a1 + 64) = v235;
  v9 = _mm_loadu_si128((const __m128i *)&v232);
  v10 = _mm_loadu_si128((const __m128i *)&v232.m256i_u64[2]);
  v11 = v233;
  *(_OWORD *)(a1 + 48) = v234;
  *(_OWORD *)(a1 + 32) = v11;
  *(__m128i *)(a1 + 16) = v10;
  *(__m128i *)a1 = v9;
  return a1;
}
