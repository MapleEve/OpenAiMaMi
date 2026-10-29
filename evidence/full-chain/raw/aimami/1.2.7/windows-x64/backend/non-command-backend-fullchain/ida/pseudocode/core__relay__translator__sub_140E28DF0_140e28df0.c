// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e28df0 | name sub_140E28DF0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E28DF0(__int64 a1, const __m128i *a2, int a3)
{
  __int64 v6; // rax
  const __m128i *v7; // rcx
  __int64 v8; // rdx
  __int16 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r13
  const __m128i *v16; // rbx
  __m128i v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rcx
  unsigned __int64 v21; // r15
  __m128i *v22; // rax
  __int64 v23; // rcx
  __m128i *v24; // rax
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  const __m128i *v31; // r13
  int v32; // edi
  const __m128i *v33; // rbx
  __int64 v34; // r14
  __m128i *v35; // rax
  __int64 v36; // r12
  __m128i *v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  int v40; // edi
  const __m128i *v41; // rbx
  __int64 v42; // r14
  __m128i *v43; // rax
  __int64 v44; // r15
  __int64 v45; // rcx
  __m128i *v46; // rax
  __int64 v47; // rcx
  __m128i *v48; // rax
  __int64 v49; // rcx
  void *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rsi
  const __m128i *v55; // r12
  int v56; // edi
  const __m128i *v57; // rbx
  __int64 v58; // r14
  __m128i *v59; // rax
  __int64 v60; // r15
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned __int64 v64; // rsi
  const __m128i *v65; // r12
  int v66; // edi
  const __m128i *v67; // rbx
  __int64 v68; // r14
  __m128i *v69; // rax
  __int64 v70; // r15
  __int64 v71; // rcx
  __m128i *v72; // rax
  unsigned __int64 v73; // rsi
  __int64 v74; // rbx
  __m128i *v75; // rax
  __int64 v76; // r15
  __int64 v77; // rcx
  __m128i *v78; // rax
  __int64 v79; // rcx
  unsigned __int64 v80; // rsi
  const __m128i *v81; // r12
  int v82; // edi
  const __m128i *v83; // rbx
  __int64 v84; // r14
  __m128i *v85; // rax
  __int64 v86; // r15
  __int64 v87; // rcx
  __m128i *v88; // rax
  __int64 v89; // rcx
  const __m128i *v90; // rsi
  __m128i *v91; // rax
  __int64 v92; // r12
  unsigned __int64 v93; // rsi
  __int64 v94; // r12
  __m128i *v95; // rax
  __int64 v96; // rcx
  __m128i *v97; // rax
  __int64 v98; // rcx
  void *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rcx
  unsigned __int64 v103; // rsi
  const __m128i *v104; // r13
  int v105; // edi
  const __m128i *v106; // rbx
  __int64 v107; // r14
  __m128i *v108; // rax
  __int64 v109; // r12
  __int64 v110; // rcx
  __m128i *v111; // rax
  __int64 v112; // rcx
  __m128i *v113; // rax
  __int64 v114; // rsi
  unsigned __int64 v115; // r12
  __int64 v116; // rbx
  __int64 v117; // rbx
  __int64 v118; // rcx
  _DWORD *v119; // rax
  __int64 v120; // rcx
  __m128i *v121; // rax
  __int64 v122; // rcx
  __m128i *v123; // rax
  __int64 v124; // rcx
  unsigned __int64 v125; // r12
  const __m128i *v126; // rsi
  int v127; // edi
  const __m128i *v128; // r14
  __int64 v129; // r13
  __m128i *v130; // rax
  __int64 v131; // rbx
  unsigned __int64 v132; // r15
  __int64 v133; // rbx
  __int64 v134; // rbx
  __int64 v135; // rcx
  _DWORD *v136; // rax
  __int64 v137; // rcx
  __m128i *v138; // rax
  __int64 v139; // rcx
  __m128i *v140; // rax
  __int64 v141; // rcx
  unsigned __int64 v142; // r15
  const __m128i *v143; // r13
  int v144; // edi
  const __m128i *v145; // rbx
  __int64 v146; // r14
  __m128i *v147; // rax
  __int64 v148; // r12
  __int64 v149; // rcx
  __m128i *v150; // rax
  __int64 v151; // rcx
  __m128i *v152; // rax
  _OWORD *v153; // rax
  _QWORD *v154; // r13
  __m128i v155; // xmm0
  __m128i *v156; // rax
  __int64 v157; // rcx
  __int128 v158; // kr30_16
  __int64 v159; // rbx
  __m128i *v160; // rax
  __int64 v161; // r15
  void *v162; // rax
  __int64 v163; // rcx
  __m128i v164; // xmm0
  __m128i *v165; // rax
  unsigned __int64 v166; // rsi
  const __m128i *v167; // r12
  int v168; // edi
  const __m128i *v169; // r15
  __int64 v170; // r14
  __m128i *v171; // rax
  __int64 v172; // rbx
  __int64 v173; // rcx
  __int64 v174; // rax
  __int64 v175; // rcx
  __m128i *v176; // rax
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rcx
  unsigned __int64 v180; // r12
  const __m128i *v181; // rsi
  int v182; // edi
  const __m128i *v183; // r14
  __int64 v184; // r13
  __m128i *v185; // rax
  __int64 v186; // rbx
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rcx
  __m128i *v190; // rax
  __int64 v191; // rcx
  __int64 v192; // rax
  __int64 v193; // rcx
  unsigned __int64 v194; // r15
  const __m128i *v195; // r13
  int v196; // edi
  const __m128i *v197; // rbx
  __int64 v198; // r14
  __m128i *v199; // rax
  __int64 v200; // r12
  __int64 v201; // rcx
  __m128i *v202; // rax
  __int64 v203; // rcx
  unsigned __int64 v204; // r12
  const __m128i *v205; // rsi
  int v206; // edi
  const __m128i *v207; // r14
  __int64 v208; // r13
  __m128i *v209; // rax
  __int64 v210; // rbx
  __m128i v211; // xmm0
  __m128i *v212; // rax
  __m128i v213; // xmm0
  __m128i *v214; // rax
  __int64 v215; // rsi
  __int64 v216; // rax
  __int64 v217; // rcx
  __m128i si128; // xmm0
  __int64 v219; // rsi
  const __m128i *v220; // rdx
  __int64 v221; // rcx
  __m128i *v222; // rax
  __int64 v223; // rcx
  unsigned __int64 v224; // r15
  const __m128i *v225; // r13
  int v226; // edi
  const __m128i *v227; // rbx
  __int64 v228; // r14
  __m128i *v229; // rax
  __int64 v230; // r12
  __int64 v231; // rcx
  __m128i *v232; // rax
  __int64 v233; // rcx
  __m128i *v234; // rax
  __int64 v235; // rbx
  __int64 v236; // rbx
  _DWORD *v237; // rax
  __int64 v238; // rcx
  __m128i *v239; // rax
  __int64 v240; // rcx
  void *v241; // rax
  __int64 v242; // rcx
  __m128i *v243; // rax
  const __m128i *v244; // rsi
  unsigned __int64 v245; // r15
  _QWORD *v246; // r13
  __int64 v247; // rsi
  __int64 v248; // rax
  __int64 v249; // rcx
  __m128i v250; // xmm0
  __int64 v251; // rcx
  __m128i *v252; // rax
  __int64 v253; // rcx
  __m128i *v254; // rax
  __int64 v255; // rbx
  __int64 *v256; // rcx
  unsigned __int64 v257; // rsi
  __int64 v259; // rbx
  __int64 v260; // rdx
  __m128i v261; // xmm0
  __m128i v262; // xmm7
  unsigned __int64 v263; // r8
  __int64 v264; // r14
  __int64 i; // r9
  unsigned __int64 v266; // rsi
  __m128i v267; // xmm8
  __int64 v269; // r13
  unsigned __int64 v270; // r15
  int v271; // eax
  unsigned __int64 v272; // rbx
  signed __int64 v273; // rsi
  const __m128i *v274; // r12
  int v275; // eax
  _DWORD *v276; // rax
  __int64 v277; // rcx
  __int64 v278; // rax
  __int64 v279; // rcx
  void *v280; // rax
  __int64 v281; // rcx
  __m128i *v282; // rax
  __m128i v283; // xmm0
  unsigned __int64 v284; // rsi
  const __m128i *v285; // r15
  __int64 v286; // rbx
  __m128i v287; // xmm0
  _QWORD *v288; // r13
  __int64 v289; // rsi
  __int64 v290; // rax
  __int64 v291; // rcx
  __m128i v292; // xmm0
  __int64 v293; // rax
  __int64 v294; // rbx
  __m128i v295; // xmm0
  _OWORD *v296; // rax
  __int64 result; // rax
  __int64 v298; // rcx
  __int64 v299; // [rsp+28h] [rbp-58h] BYREF
  __int64 v300; // [rsp+30h] [rbp-50h]
  unsigned __int64 v301; // [rsp+38h] [rbp-48h]
  __int64 v302; // [rsp+40h] [rbp-40h]
  __int64 v303; // [rsp+48h] [rbp-38h]
  __int64 v304; // [rsp+50h] [rbp-30h]
  __int64 v305; // [rsp+58h] [rbp-28h]
  __int64 v306; // [rsp+60h] [rbp-20h]
  __int64 v307; // [rsp+68h] [rbp-18h]
  signed __int64 v308; // [rsp+70h] [rbp-10h] BYREF
  const __m128i *v309; // [rsp+78h] [rbp-8h]
  __int64 v310; // [rsp+80h] [rbp+0h]
  __int64 v311; // [rsp+88h] [rbp+8h]
  __int64 v312; // [rsp+90h] [rbp+10h]
  __int64 v313; // [rsp+98h] [rbp+18h]
  const __m128i *v314; // [rsp+A0h] [rbp+20h]
  _DWORD *v315; // [rsp+A8h] [rbp+28h]
  const __m128i *v316; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v317; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v318; // [rsp+C8h] [rbp+48h]
  __int128 v319; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v320; // [rsp+E8h] [rbp+68h]
  __int128 v321; // [rsp+F8h] [rbp+78h]
  __int128 v322; // [rsp+108h] [rbp+88h]
  char v323; // [rsp+11Fh] [rbp+9Fh] BYREF
  _QWORD *v324; // [rsp+120h] [rbp+A0h]
  __m256i v325; // [rsp+128h] [rbp+A8h] BYREF
  __int128 *v326; // [rsp+148h] [rbp+C8h] BYREF
  __m128i v327; // [rsp+150h] [rbp+D0h]
  __int64 v328; // [rsp+160h] [rbp+E0h]
  __int64 v329; // [rsp+168h] [rbp+E8h]
  __m256i v330[2]; // [rsp+170h] [rbp+F0h] BYREF
  __m128i *v331; // [rsp+1B8h] [rbp+138h]
  char v332; // [rsp+1C3h] [rbp+143h]
  char v333; // [rsp+1C4h] [rbp+144h]
  char v334; // [rsp+1C5h] [rbp+145h]
  char v335; // [rsp+1C6h] [rbp+146h]
  char v336; // [rsp+1C7h] [rbp+147h]
  char v337; // [rsp+1C8h] [rbp+148h]
  char v338; // [rsp+1C9h] [rbp+149h]
  char v339; // [rsp+1CAh] [rbp+14Ah]
  char v340; // [rsp+1CBh] [rbp+14Bh]
  char v341; // [rsp+1CCh] [rbp+14Ch]
  char v342; // [rsp+1CDh] [rbp+14Dh]
  char v343; // [rsp+1CEh] [rbp+14Eh]
  char v344; // [rsp+1CFh] [rbp+14Fh]
  char v345; // [rsp+1D0h] [rbp+150h]
  char v346; // [rsp+1D1h] [rbp+151h]
  char v347; // [rsp+1D2h] [rbp+152h]
  char v348; // [rsp+1D3h] [rbp+153h]
  char v349; // [rsp+1D4h] [rbp+154h]
  char v350; // [rsp+1D5h] [rbp+155h]
  char v351; // [rsp+1D6h] [rbp+156h]
  char v352; // [rsp+1D7h] [rbp+157h]
  __m128i v353; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v354; // [rsp+1E8h] [rbp+168h]
  char v355; // [rsp+1F5h] [rbp+175h]
  char v356; // [rsp+1F6h] [rbp+176h]
  char v357; // [rsp+1F7h] [rbp+177h]
  __m128i v358; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v359; // [rsp+208h] [rbp+188h]
  __m256i v360; // [rsp+210h] [rbp+190h] BYREF
  char v361; // [rsp+236h] [rbp+1B6h]
  char v362; // [rsp+237h] [rbp+1B7h]
  __m128i *v363; // [rsp+238h] [rbp+1B8h]
  char v364; // [rsp+247h] [rbp+1C7h]
  __int64 v365; // [rsp+248h] [rbp+1C8h]

  v365 = -2;
  v6 = a1 + 320;
  v7 = *(const __m128i **)(a1 + 320);
  v8 = (__int64)v7->m128i_i64 + *(_QWORD *)(a1 + 328) + 1;
  v9 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128(v7));
  v10 = *(_QWORD *)(a1 + 344);
  v320 = *(_OWORD *)(a1 + 336);
  v319 = *(_OWORD *)(a1 + 320);
  *(_OWORD *)(a1 + 320) = *(_OWORD *)&off_1419E4870;
  *(__m128i *)(a1 + 336) = _mm_loadu_si128((const __m128i *)&xmmword_1419E4880);
  v316 = v7;
  v317.m128i_i64[0] = (__int64)v7[1].m128i_i64;
  v317.m128i_i64[1] = v8;
  LOWORD(v318) = v9;
  *((_QWORD *)&v318 + 1) = v10;
  *(_QWORD *)&v321 = v6;
  sub_1403DD0E0(&v299, &v316);
  v11 = v300;
  v12 = v301;
  v316 = (const __m128i *)&v323;
  if ( v301 >= 2 )
  {
    if ( v301 >= 0x15 )
    {
      v355 = 1;
      sub_14065D1E0(v300, v301, &v316);
    }
    else
    {
      sub_140E018A0(v300, v301);
    }
  }
  v311 = v299;
  v13 = v11 + 104 * v12;
  v302 = a1 + 368;
  v307 = a1 + 128;
  v303 = a1 + 400;
  v14 = v11;
  v306 = v11;
  v324 = (_QWORD *)a1;
  if ( v11 != v13 )
  {
    while ( 1 )
    {
      v15 = v14 + 104;
      v16 = *(const __m128i **)v14;
      if ( *(_QWORD *)v14 == -1 )
        goto LABEL_311;
      v316 = *(const __m128i **)v14;
      v322 = *(_OWORD *)(v14 + 88);
      v321 = *(_OWORD *)(v14 + 72);
      v17 = _mm_loadu_si128((const __m128i *)(v14 + 8));
      v18 = *(_OWORD *)(v14 + 24);
      v19 = *(_OWORD *)(v14 + 40);
      v320 = *(_OWORD *)(v14 + 56);
      v319 = v19;
      v318 = v18;
      v317 = v17;
      v312 = v13;
      v313 = v14 + 104;
      v314 = v16;
      if ( (_BYTE)a3 )
        break;
      v353.m128i_i64[0] = 0;
      v354 = 0;
      nullsub_1(&v317);
      v37 = (__m128i *)sub_140001650(2, 1);
      if ( !v37 )
        sub_141938D2B(1, 2);
      v37->m128i_i16[0] = 25705;
      v358.m128i_i64[0] = 2;
      v363 = v37;
      v358.m128i_i64[1] = (__int64)v37;
      v359 = 2;
      v39 = v317.m128i_u64[1];
      if ( v317.m128i_i64[1] < 0 )
      {
        v42 = 0;
LABEL_295:
        v352 = 1;
        sub_141938D2B(v42, v39);
      }
      if ( v317.m128i_i64[1] )
      {
        v331 = (__m128i *)a2;
        v40 = a3;
        v41 = (const __m128i *)v317.m128i_i64[0];
        nullsub_1(v38);
        v42 = 1;
        v43 = (__m128i *)sub_140001650(v39, 1);
        if ( !v43 )
          goto LABEL_295;
        v44 = (__int64)v43;
        sub_1418F44E0(v43, v41, v39);
        a3 = v40;
        a2 = v331;
      }
      else
      {
        v44 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v39;
      v360.m256i_i64[2] = v44;
      v360.m256i_i64[3] = v39;
      v352 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v61);
      v62 = sub_140001650(7, 1);
      if ( !v62 )
        sub_141938D2B(1, 7);
      *(_DWORD *)(v62 + 3) = 1684627308;
      *(_DWORD *)v62 = 1819042147;
      v358.m128i_i64[0] = 7;
      v363 = (__m128i *)v62;
      v358.m128i_i64[1] = v62;
      v359 = 7;
      v64 = v319;
      if ( (__int64)v319 < 0 )
      {
        v68 = 0;
LABEL_299:
        v351 = 1;
        sub_141938D2B(v68, v64);
      }
      if ( (_QWORD)v319 )
      {
        v65 = a2;
        v66 = a3;
        v67 = *((const __m128i **)&v318 + 1);
        nullsub_1(v63);
        v68 = 1;
        v69 = (__m128i *)sub_140001650(v64, 1);
        if ( !v69 )
          goto LABEL_299;
        v70 = (__int64)v69;
        sub_1418F44E0(v69, v67, v64);
        a3 = v66;
        a2 = v65;
      }
      else
      {
        v70 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v64;
      v360.m256i_i64[2] = v70;
      v360.m256i_i64[3] = v64;
      v351 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v77);
      v78 = (__m128i *)sub_140001650(4, 1);
      if ( !v78 )
        sub_141938D2B(1, 4);
      v78->m128i_i32[0] = 1701667182;
      v358.m128i_i64[0] = 4;
      v358.m128i_i64[1] = (__int64)v78;
      v359 = 4;
      v80 = *((_QWORD *)&v320 + 1);
      v363 = v78;
      if ( v320 < 0 )
      {
        v84 = 0;
LABEL_307:
        v350 = 1;
        sub_141938D2B(v84, v80);
      }
      if ( *((_QWORD *)&v320 + 1) )
      {
        v81 = a2;
        v82 = a3;
        v83 = (const __m128i *)v320;
        nullsub_1(v79);
        v84 = 1;
        v85 = (__m128i *)sub_140001650(v80, 1);
        if ( !v85 )
          goto LABEL_307;
        v86 = (__int64)v85;
        sub_1418F44E0(v85, v83, v80);
        a3 = v82;
        a2 = v81;
      }
      else
      {
        v86 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v80;
      v360.m256i_i64[2] = v86;
      v360.m256i_i64[3] = v80;
      v350 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v149);
      v150 = (__m128i *)sub_140001650(6, 1);
      if ( !v150 )
        sub_141938D2B(1, 6);
      v150->m128i_i16[2] = 29557;
      v150->m128i_i32[0] = 1952543859;
      v358.m128i_i64[0] = 6;
      v331 = v150;
      v358.m128i_i64[1] = (__int64)v150;
      v359 = 6;
      nullsub_1(v151);
      v152 = (__m128i *)sub_140001650(10, 1);
      v363 = v152;
      if ( !v152 )
        sub_141938D2B(1, 10);
      qmemcpy(v152, "incomplete", 10);
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = 10;
      v360.m256i_i64[2] = (__int64)v152;
      v360.m256i_i64[3] = 10;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      v325.m256i_i64[3] = v354;
      *(__m128i *)&v325.m256i_u64[1] = v353;
      v325.m256i_i8[0] = 5;
      if ( BYTE14(v322) )
      {
        nullsub_1(&v325.m256i_u64[1]);
        v153 = (_OWORD *)sub_140001650(16, 1);
        v154 = v324;
        if ( !v153 )
        {
          v364 = 1;
          sub_141938D2B(1, 16);
        }
        *v153 = *(_OWORD *)"custom_tool_call";
        v330[0].m256i_i8[0] = 3;
        v330[0].m256i_i64[1] = 16;
        v330[0].m256i_i64[2] = (__int64)v153;
        v330[0].m256i_i64[3] = 16;
        v347 = 1;
        v363 = (__m128i *)sub_141641AF0(aType_11, 4, &v325);
        sub_140DF44E0(v363);
        v155 = *(__m128i *)v330[0].m256i_i8;
        v156 = v363;
        v363[1] = *(__m128i *)&v330[0].m256i_u64[2];
        *v156 = v155;
        v364 = 1;
        sub_1402E34C0(v360.m256i_i64, *((const __m128i **)&v321 + 1), v322);
        v158 = *(_OWORD *)&v360.m256i_u64[1];
        v363 = (__m128i *)v360.m256i_i64[1];
        if ( v360.m256i_i64[2] < 0 )
        {
          v159 = 0;
LABEL_321:
          sub_141938D2B(v159, *((_QWORD *)&v158 + 1));
        }
        if ( v360.m256i_i64[2] )
        {
          nullsub_1(v157);
          v159 = 1;
          v160 = (__m128i *)sub_140001650(*((_QWORD *)&v158 + 1), 1);
          if ( !v160 )
            goto LABEL_321;
          v161 = (__int64)v160;
          sub_1418F44E0(v160, (const __m128i *)v158, *((unsigned __int64 *)&v158 + 1));
        }
        else
        {
          v161 = 1;
        }
        v330[0].m256i_i8[0] = 3;
        v330[0].m256i_i64[1] = *((_QWORD *)&v158 + 1);
        v330[0].m256i_i64[2] = v161;
        v330[0].m256i_i64[3] = *((_QWORD *)&v158 + 1);
        v346 = 1;
        v331 = (__m128i *)sub_141641AF0(aInput_4, 5, &v325);
        sub_140DF44E0(v331);
        v213 = *(__m128i *)v330[0].m256i_i8;
        v214 = v331;
        v331[1] = *(__m128i *)&v330[0].m256i_u64[2];
        *v214 = v213;
        if ( v360.m256i_i64[0] )
          sub_140001660(v363, v360.m256i_i64[0], 1);
      }
      else
      {
        nullsub_1(&v325.m256i_u64[1]);
        v162 = (void *)sub_140001650(13, 1);
        v154 = v324;
        if ( !v162 )
        {
          v364 = 1;
          sub_141938D2B(1, 13);
        }
        qmemcpy(v162, "function_call", 13);
        v330[0].m256i_i8[0] = 3;
        v330[0].m256i_i64[1] = 13;
        v330[0].m256i_i64[2] = (__int64)v162;
        v330[0].m256i_i64[3] = 13;
        v349 = 1;
        v363 = (__m128i *)sub_141641AF0(aType_11, 4, &v325);
        sub_140DF44E0(v363);
        v164 = *(__m128i *)v330[0].m256i_i8;
        v165 = v363;
        v363[1] = *(__m128i *)&v330[0].m256i_u64[2];
        *v165 = v164;
        v166 = v322;
        if ( (__int64)v322 < 0 )
        {
          v170 = 0;
LABEL_319:
          v364 = 1;
          sub_141938D2B(v170, v166);
        }
        if ( (_QWORD)v322 )
        {
          v167 = a2;
          v168 = a3;
          v169 = *((const __m128i **)&v321 + 1);
          nullsub_1(v163);
          v170 = 1;
          v171 = (__m128i *)sub_140001650(v166, 1);
          if ( !v171 )
            goto LABEL_319;
          v172 = (__int64)v171;
          sub_1418F44E0(v171, v169, v166);
          a3 = v168;
          a2 = v167;
        }
        else
        {
          v172 = 1;
        }
        v330[0].m256i_i8[0] = 3;
        v330[0].m256i_i64[1] = v166;
        v330[0].m256i_i64[2] = v172;
        v330[0].m256i_i64[3] = v166;
        v348 = 1;
        v363 = (__m128i *)sub_141641AF0(aArguments_0, 9, &v325);
        sub_140DF44E0(v363);
        v211 = *(__m128i *)v330[0].m256i_i8;
        v212 = v363;
        v363[1] = *(__m128i *)&v330[0].m256i_u64[2];
        *v212 = v211;
        v364 = 1;
        sub_140301120(&v325, v320, *((_QWORD *)&v320 + 1), v302);
      }
      v330[0] = v325;
      v215 = v154[18];
      if ( v215 == v154[16] )
        sub_14190F570(v307);
      v216 = v154[17];
      v217 = 32 * v215;
      si128 = _mm_load_si128((const __m128i *)v330);
      *(_OWORD *)(v216 + v217 + 16) = *(_OWORD *)&v330[0].m256i_u64[2];
      *(__m128i *)(v216 + v217) = si128;
      v154[18] = v215 + 1;
LABEL_188:
      v13 = v312;
      v219 = v313;
      v220 = v314;
      if ( v314 )
        goto LABEL_189;
LABEL_190:
      if ( (_QWORD)v318 )
        sub_140001660(*((_QWORD *)&v318 + 1), v318, 1);
      if ( *((_QWORD *)&v319 + 1) )
        sub_140001660(v320, *((_QWORD *)&v319 + 1), 1);
      if ( (_QWORD)v321 )
        sub_140001660(*((_QWORD *)&v321 + 1), v321, 1);
      v14 = v219;
      if ( v219 == v13 )
        goto LABEL_310;
    }
    if ( !BYTE14(v322) )
    {
      if ( *((_QWORD *)&v320 + 1) == 11
        && !(*(_QWORD *)v320 ^ 0x61705F796C707061LL | *(_QWORD *)(v320 + 3) ^ 0x68637461705F796CLL) )
      {
        sub_140300F30((__int64)&v308, (_QWORD *)v320, 11, *((const __m128i **)&v321 + 1), v322);
      }
      else
      {
        sub_1403101A0(&v308, *((const __m128i **)&v321 + 1), v322);
      }
      v353.m128i_i64[0] = 0;
      v354 = 0;
      nullsub_1(v45);
      v46 = (__m128i *)sub_140001650(4, 1);
      if ( !v46 )
        sub_141938D2B(1, 4);
      v46->m128i_i32[0] = 1701869940;
      v358.m128i_i64[0] = 4;
      v331 = v46;
      v358.m128i_i64[1] = (__int64)v46;
      v359 = 4;
      nullsub_1(v47);
      v48 = (__m128i *)sub_140001650(37, 1);
      v363 = v48;
      if ( !v48 )
        sub_141938D2B(1, 37);
      qmemcpy(&v48[1], "n_call_arguments.done", 21);
      *v48 = _mm_loadu_si128((const __m128i *)&xmmword_141A535E8);
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = 37;
      v360.m256i_i64[2] = (__int64)v48;
      v360.m256i_i64[3] = 37;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v49);
      v50 = (void *)sub_140001650(12, 1);
      if ( !v50 )
        sub_141938D2B(1, 12);
      qmemcpy(v50, "output_index", 12);
      v358.m128i_i64[0] = 12;
      v358.m128i_i64[1] = (__int64)v50;
      v359 = 12;
      v360.m256i_i8[0] = 2;
      v360.m256i_i64[1] = 0;
      v360.m256i_i64[2] = DWORD2(v322);
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v51);
      v52 = sub_140001650(7, 1);
      if ( !v52 )
        sub_141938D2B(1, 7);
      *(_DWORD *)(v52 + 3) = 1684627309;
      *(_DWORD *)v52 = 1835365481;
      v358.m128i_i64[0] = 7;
      v363 = (__m128i *)v52;
      v358.m128i_i64[1] = v52;
      v359 = 7;
      v54 = v317.m128i_u64[1];
      if ( v317.m128i_i64[1] < 0 )
      {
        v58 = 0;
LABEL_297:
        v345 = 1;
        sub_141938D2B(v58, v54);
      }
      if ( v317.m128i_i64[1] )
      {
        v55 = a2;
        v56 = a3;
        v57 = (const __m128i *)v317.m128i_i64[0];
        nullsub_1(v53);
        v58 = 1;
        v59 = (__m128i *)sub_140001650(v54, 1);
        if ( !v59 )
          goto LABEL_297;
        v60 = (__int64)v59;
        sub_1418F44E0(v59, v57, v54);
        a3 = v56;
        a2 = v55;
      }
      else
      {
        v60 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v54;
      v360.m256i_i64[2] = v60;
      v360.m256i_i64[3] = v54;
      v345 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v71);
      v72 = (__m128i *)sub_140001650(9, 1);
      if ( !v72 )
        sub_141938D2B(1, 9);
      v72->m128i_i64[0] = 0x746E656D75677261LL;
      v72->m128i_i8[8] = 115;
      v358.m128i_i64[0] = 9;
      v358.m128i_i64[1] = (__int64)v72;
      v359 = 9;
      v73 = v310;
      v363 = v72;
      if ( v310 < 0 )
      {
        v74 = 0;
LABEL_305:
        v344 = 1;
        sub_141938D2B(v74, v73);
      }
      v331 = (__m128i *)v309;
      if ( v310 )
      {
        nullsub_1(v72);
        v74 = 1;
        v75 = (__m128i *)sub_140001650(v73, 1);
        if ( !v75 )
          goto LABEL_305;
        v76 = (__int64)v75;
        sub_1418F44E0(v75, v331, v73);
      }
      else
      {
        v76 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v73;
      v360.m256i_i64[2] = v76;
      v360.m256i_i64[3] = v73;
      v344 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      v325.m256i_i64[3] = v354;
      *(__m128i *)&v325.m256i_u64[1] = _mm_loadu_si128(&v353);
      v325.m256i_i8[0] = 5;
      v326 = &xmmword_141A535E8;
      v327.m128i_i64[0] = 37;
      v358.m128i_i64[0] = (__int64)&v325;
      v330[0].m256i_i64[0] = (__int64)&v326;
      v330[0].m256i_i64[1] = (__int64)sub_140186EE0;
      v330[0].m256i_i64[2] = (__int64)&v358;
      v330[0].m256i_i64[3] = (__int64)sub_1404806B0;
      sub_1416ABFD0(&v360, &unk_141A548D8, v330);
      v132 = v360.m256i_u64[2];
      v363 = (__m128i *)v360.m256i_i64[1];
      v133 = a2[1].m128i_i64[0];
      if ( v360.m256i_i64[2] > (unsigned __int64)(a2->m128i_i64[0] - v133) )
      {
        sub_14190D590((_DWORD)a2, v133, v360.m256i_i32[4], 1, 1);
        v133 = a2[1].m128i_i64[0];
LABEL_118:
        sub_1418F44E0((__m128i *)(v133 + a2->m128i_i64[1]), v363, v132);
      }
      else if ( v360.m256i_i64[2] )
      {
        goto LABEL_118;
      }
      v134 = v132 + v133;
      a2[1].m128i_i64[0] = v134;
      if ( v360.m256i_i64[0] )
        sub_140001660(v363, v360.m256i_i64[0], 1);
      sub_140DF44E0(&v325);
      v353.m128i_i64[0] = 0;
      v354 = 0;
      nullsub_1(v135);
      v136 = (_DWORD *)sub_140001650(4, 1);
      if ( !v136 )
        sub_141938D2B(1, 4);
      *v136 = 1701869940;
      v358.m128i_i64[0] = 4;
      v329 = (__int64)v136;
      v358.m128i_i64[1] = (__int64)v136;
      v359 = 4;
      nullsub_1(v137);
      v138 = (__m128i *)sub_140001650(13, 1);
      v363 = v138;
      if ( !v138 )
        sub_141938D2B(1, 13);
      v315 = (_DWORD *)v134;
      qmemcpy(v138, "function_call", 13);
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = 13;
      v360.m256i_i64[2] = (__int64)v138;
      v360.m256i_i64[3] = 13;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v139);
      v140 = (__m128i *)sub_140001650(2, 1);
      if ( !v140 )
        sub_141938D2B(1, 2);
      v140->m128i_i16[0] = 25705;
      v358.m128i_i64[0] = 2;
      v363 = v140;
      v358.m128i_i64[1] = (__int64)v140;
      v359 = 2;
      v142 = v317.m128i_u64[1];
      if ( v317.m128i_i64[1] < 0 )
      {
        v146 = 0;
LABEL_315:
        v343 = 1;
        sub_141938D2B(v146, v142);
      }
      if ( v317.m128i_i64[1] )
      {
        v143 = a2;
        v144 = a3;
        v145 = (const __m128i *)v317.m128i_i64[0];
        nullsub_1(v141);
        v146 = 1;
        v147 = (__m128i *)sub_140001650(v142, 1);
        if ( !v147 )
          goto LABEL_315;
        v148 = (__int64)v147;
        sub_1418F44E0(v147, v145, v142);
        a3 = v144;
        a2 = v143;
      }
      else
      {
        v148 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v142;
      v360.m256i_i64[2] = v148;
      v360.m256i_i64[3] = v142;
      v343 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v187);
      v188 = sub_140001650(6, 1);
      if ( !v188 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v188 + 4) = 29557;
      *(_DWORD *)v188 = 1952543859;
      v358.m128i_i64[0] = 6;
      v329 = v188;
      v358.m128i_i64[1] = v188;
      v359 = 6;
      nullsub_1(v189);
      v190 = (__m128i *)sub_140001650(9, 1);
      v363 = v190;
      if ( !v190 )
        sub_141938D2B(1, 9);
      v190->m128i_i64[0] = 0x6574656C706D6F63LL;
      v190->m128i_i8[8] = 100;
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = 9;
      v360.m256i_i64[2] = (__int64)v190;
      v360.m256i_i64[3] = 9;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v191);
      v192 = sub_140001650(7, 1);
      if ( !v192 )
        sub_141938D2B(1, 7);
      *(_DWORD *)(v192 + 3) = 1684627308;
      *(_DWORD *)v192 = 1819042147;
      v358.m128i_i64[0] = 7;
      v358.m128i_i64[1] = v192;
      v359 = 7;
      v194 = v319;
      v363 = (__m128i *)v192;
      if ( (__int64)v319 < 0 )
      {
        v198 = 0;
LABEL_323:
        v342 = 1;
        sub_141938D2B(v198, v194);
      }
      if ( (_QWORD)v319 )
      {
        v195 = a2;
        v196 = a3;
        v197 = *((const __m128i **)&v318 + 1);
        nullsub_1(v193);
        v198 = 1;
        v199 = (__m128i *)sub_140001650(v194, 1);
        if ( !v199 )
          goto LABEL_323;
        v200 = (__int64)v199;
        sub_1418F44E0(v199, v197, v194);
        a3 = v196;
        a2 = v195;
      }
      else
      {
        v200 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v194;
      v360.m256i_i64[2] = v200;
      v360.m256i_i64[3] = v194;
      v342 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v221);
      v222 = (__m128i *)sub_140001650(4, 1);
      if ( !v222 )
        sub_141938D2B(1, 4);
      v222->m128i_i32[0] = 1701667182;
      v358.m128i_i64[0] = 4;
      v363 = v222;
      v358.m128i_i64[1] = (__int64)v222;
      v359 = 4;
      v224 = *((_QWORD *)&v320 + 1);
      if ( v320 < 0 )
      {
        v228 = 0;
LABEL_327:
        v341 = 1;
        sub_141938D2B(v228, v224);
      }
      if ( *((_QWORD *)&v320 + 1) )
      {
        v225 = a2;
        v226 = a3;
        v227 = (const __m128i *)v320;
        nullsub_1(v223);
        v228 = 1;
        v229 = (__m128i *)sub_140001650(v224, 1);
        if ( !v229 )
          goto LABEL_327;
        v230 = (__int64)v229;
        sub_1418F44E0(v229, v227, v224);
        a3 = v226;
        a2 = v225;
      }
      else
      {
        v230 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v224;
      v360.m256i_i64[2] = v230;
      v360.m256i_i64[3] = v224;
      v341 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v251);
      v252 = (__m128i *)sub_140001650(9, 1);
      if ( !v252 )
        sub_141938D2B(1, 9);
      v252->m128i_i64[0] = 0x746E656D75677261LL;
      v252->m128i_i8[8] = 115;
      v358.m128i_i64[0] = 9;
      v358.m128i_i64[1] = (__int64)v252;
      v359 = 9;
      v363 = v252;
      if ( v73 )
      {
        nullsub_1(v253);
        v254 = (__m128i *)sub_140001650(v73, 1);
        if ( !v254 )
        {
          v340 = 1;
          sub_141938D2B(1, v73);
        }
        v255 = (__int64)v254;
        sub_1418F44E0(v254, v331, v73);
      }
      else
      {
        v255 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v73;
      v360.m256i_i64[2] = v255;
      v360.m256i_i64[3] = v73;
      v340 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      v256 = &v325.m256i_i64[1];
      v325.m256i_i64[3] = v354;
      *(__m128i *)&v325.m256i_u64[1] = _mm_loadu_si128(&v353);
      v325.m256i_i8[0] = 5;
      if ( v324[49] )
      {
        v362 = 1;
        v257 = sub_140D2AC70(v303, (char *)&v319 + 8);
        LOBYTE(v363) = a3;
        _RAX = v257 >> 57;
        v256 = v324;
        v259 = v324[46];
        v260 = v324[47];
        v261 = _mm_cvtsi32_si128(v257 >> 57);
        v262 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v261, v261), 0), 68);
        v263 = *((_QWORD *)&v320 + 1);
        v264 = v320;
        for ( i = 0; ; i += 16 )
        {
          v266 = v260 & v257;
          v267 = _mm_loadu_si128((const __m128i *)(v259 + v266));
          _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v267, v262));
          if ( _R12D )
            break;
LABEL_253:
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v267, (__m128i)-1LL));
          if ( (_DWORD)_RAX )
          {
            a3 = (unsigned __int8)v363;
            goto LABEL_259;
          }
          v257 = i + v266 + 16;
        }
        v329 = v260;
        v304 = i;
        while ( 1 )
        {
          __asm { tzcnt   eax, r12d }
          if ( v263 == *(_QWORD *)(v259 - 48 * (v260 & (v266 + _RAX)) - 32) )
          {
            v269 = v259 - 48 * (v260 & (v266 + _RAX));
            v270 = v263;
            v271 = sub_1418F4B70(v264, *(_QWORD *)(v269 - 40));
            v263 = v270;
            if ( !v271 )
              break;
          }
          _RAX = (unsigned int)(_R12D - 1);
          LOWORD(_RAX) = _R12D & (_R12D - 1);
          _R12D = _RAX;
          v260 = v329;
          i = v304;
          if ( !(_WORD)_RAX )
            goto LABEL_253;
        }
        v272 = *(_QWORD *)(v269 - 8);
        v273 = v272 - v270;
        if ( v272 < v270 )
        {
          a3 = (unsigned __int8)v363;
          goto LABEL_259;
        }
        v274 = *(const __m128i **)(v269 - 16);
        v275 = sub_1418F4B70(v264, &v274->m128i_i8[v273]);
        a3 = (unsigned __int8)v363;
        if ( !v275 )
        {
          if ( v273 < 0 )
          {
            v298 = 0;
LABEL_331:
            v362 = 1;
            sub_141938D2B(v298, v305);
          }
          if ( v273 )
          {
            nullsub_1(v256);
            v293 = sub_140001650(v273, 1);
            if ( !v293 )
            {
              v305 = v272 - v270;
              v298 = 1;
              goto LABEL_331;
            }
          }
          else
          {
            v293 = 1;
          }
          if ( v272 != v270 )
          {
            v294 = v293;
            sub_1418F44E0((__m128i *)v293, v274, v273);
            v293 = v294;
          }
          v330[0].m256i_i64[1] = v273;
          v305 = v293;
          v330[0].m256i_i64[2] = v293;
          v330[0].m256i_i64[3] = v273;
          v330[0].m256i_i8[0] = 3;
          v339 = 1;
          v329 = sub_141641AF0(aNamespace_0, 9, &v325);
          sub_140DF44E0(v329);
          v295 = _mm_loadu_si128((const __m128i *)v330);
          v296 = (_OWORD *)v329;
          *(_OWORD *)(v329 + 16) = *(_OWORD *)&v330[0].m256i_u64[2];
          *v296 = v295;
        }
      }
LABEL_259:
      v353.m128i_i64[0] = 0;
      v354 = 0;
      nullsub_1(v256);
      v276 = (_DWORD *)sub_140001650(4, 1);
      if ( !v276 )
        sub_141938D2B(1, 4);
      *v276 = 1701869940;
      v358.m128i_i64[0] = 4;
      v329 = (__int64)v276;
      v358.m128i_i64[1] = (__int64)v276;
      v359 = 4;
      nullsub_1(v277);
      v278 = sub_140001650(25, 1);
      v363 = (__m128i *)v278;
      if ( !v278 )
        sub_141938D2B(1, 25);
      *(_OWORD *)(v278 + 9) = *(__int128 *)((char *)&xmmword_141A53568 + 9);
      *(__m128i *)v278 = _mm_loadu_si128((const __m128i *)&xmmword_141A53568);
      v330[0].m256i_i8[0] = 3;
      v330[0].m256i_i64[1] = 25;
      v330[0].m256i_i64[2] = v278;
      v330[0].m256i_i64[3] = 25;
      sub_140E72AA0(&v360, &v353, &v358, v330);
      if ( v360.m256i_i8[0] != -1 )
        sub_140DF44E0(&v360);
      nullsub_1(v279);
      v280 = (void *)sub_140001650(12, 1);
      if ( !v280 )
        sub_141938D2B(1, 12);
      qmemcpy(v280, "output_index", 12);
      v358.m128i_i64[0] = 12;
      v358.m128i_i64[1] = (__int64)v280;
      v359 = 12;
      v330[0].m256i_i8[0] = 2;
      v330[0].m256i_i64[1] = 0;
      v330[0].m256i_i64[2] = DWORD2(v322);
      sub_140E72AA0(&v360, &v353, &v358, v330);
      if ( v360.m256i_i8[0] != -1 )
        sub_140DF44E0(&v360);
      nullsub_1(v281);
      v282 = (__m128i *)sub_140001650(4, 1);
      if ( !v282 )
        sub_141938D2B(1, 4);
      v282->m128i_i32[0] = 1835365481;
      v358.m128i_i64[0] = 4;
      v363 = v282;
      v358.m128i_i64[1] = (__int64)v282;
      v359 = 4;
      v357 = 1;
      sub_140412420(v330, &v325);
      if ( v330[0].m256i_i8[0] == -1 )
      {
        v360.m256i_i64[0] = v330[0].m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_16,
          43,
          (unsigned int)&v360,
          (unsigned int)&off_141A52FE8,
          (__int64)&off_141A53618);
      }
      v283 = _mm_loadu_si128((const __m128i *)v330);
      *(_OWORD *)&v360.m256i_u64[2] = *(_OWORD *)&v330[0].m256i_u64[2];
      *(__m128i *)v360.m256i_i8 = v283;
      v357 = 0;
      sub_140E72AA0(v330, &v353, &v358, &v360);
      if ( v330[0].m256i_i8[0] != -1 )
        sub_140DF44E0(v330);
      v328 = v354;
      v327 = _mm_loadu_si128(&v353);
      LOBYTE(v326) = 5;
      v358.m128i_i64[0] = (__int64)&xmmword_141A53568;
      v358.m128i_i64[1] = 25;
      v353.m128i_i64[0] = (__int64)&v326;
      v330[0].m256i_i64[0] = (__int64)&v358;
      v330[0].m256i_i64[1] = (__int64)sub_140186EE0;
      v330[0].m256i_i64[2] = (__int64)&v353;
      v330[0].m256i_i64[3] = (__int64)sub_1404806B0;
      sub_1416ABFD0(&v360, &unk_141A548D8, v330);
      v284 = v360.m256i_u64[2];
      v285 = (const __m128i *)v360.m256i_i64[1];
      v286 = (__int64)v315;
      if ( v360.m256i_i64[2] > (unsigned __int64)(a2->m128i_i64[0] - (_QWORD)v315) )
      {
        v363 = (__m128i *)v360.m256i_i64[1];
        sub_14190D590((_DWORD)a2, (_DWORD)v315, v360.m256i_i32[4], 1, 1);
        v286 = a2[1].m128i_i64[0];
        v285 = v363;
LABEL_272:
        sub_1418F44E0((__m128i *)(v286 + a2->m128i_i64[1]), v285, v284);
      }
      else if ( v360.m256i_i64[2] )
      {
        goto LABEL_272;
      }
      a2[1].m128i_i64[0] = v284 + v286;
      if ( v360.m256i_i64[0] )
        sub_140001660(v285, v360.m256i_i64[0], 1);
      v362 = 1;
      sub_140DF44E0(&v326);
      v287 = _mm_loadu_si128((const __m128i *)&v325);
      *(_OWORD *)&v330[0].m256i_u64[2] = *(_OWORD *)&v325.m256i_u64[2];
      *(__m128i *)v330[0].m256i_i8 = v287;
      v288 = v324;
      v289 = v324[18];
      if ( v289 == v324[16] )
        sub_14190F570(v307);
      v290 = v288[17];
      v291 = 32 * v289;
      v292 = _mm_load_si128((const __m128i *)v330);
      *(_OWORD *)(v290 + v291 + 16) = *(_OWORD *)&v330[0].m256i_u64[2];
      *(__m128i *)(v290 + v291) = v292;
      v288[18] = v289 + 1;
      if ( v308 )
        sub_140001660(v331, v308, 1);
      v220 = v314;
      v13 = v312;
      v219 = v313;
      if ( !v314 )
        goto LABEL_190;
LABEL_189:
      sub_140001660(v317.m128i_i64[0], v220, 1);
      goto LABEL_190;
    }
    sub_1402E34C0(&v308, *((const __m128i **)&v321 + 1), v322);
    v21 = v310;
    if ( !v310 )
    {
LABEL_77:
      v353.m128i_i64[0] = 0;
      v354 = 0;
      nullsub_1(v20);
      v95 = (__m128i *)sub_140001650(4, 1);
      if ( !v95 )
        sub_141938D2B(1, 4);
      v95->m128i_i32[0] = 1701869940;
      v358.m128i_i64[0] = 4;
      v331 = v95;
      v358.m128i_i64[1] = (__int64)v95;
      v359 = 4;
      nullsub_1(v96);
      v97 = (__m128i *)sub_140001650(36, 1);
      v363 = v97;
      if ( !v97 )
        sub_141938D2B(1, 36);
      qmemcpy(v97, "response.custom_tool_call_input.done", 36);
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = 36;
      v360.m256i_i64[2] = (__int64)v97;
      v360.m256i_i64[3] = 36;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v98);
      v99 = (void *)sub_140001650(12, 1);
      if ( !v99 )
        sub_141938D2B(1, 12);
      qmemcpy(v99, "output_index", 12);
      v358.m128i_i64[0] = 12;
      v358.m128i_i64[1] = (__int64)v99;
      v359 = 12;
      v360.m256i_i8[0] = 2;
      v360.m256i_i64[1] = 0;
      v360.m256i_i64[2] = DWORD2(v322);
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v100);
      v101 = sub_140001650(7, 1);
      if ( !v101 )
        sub_141938D2B(1, 7);
      *(_DWORD *)(v101 + 3) = 1684627309;
      *(_DWORD *)v101 = 1835365481;
      v358.m128i_i64[0] = 7;
      v363 = (__m128i *)v101;
      v358.m128i_i64[1] = v101;
      v359 = 7;
      v103 = v317.m128i_u64[1];
      if ( v317.m128i_i64[1] < 0 )
      {
        v107 = 0;
LABEL_301:
        v337 = 1;
        sub_141938D2B(v107, v103);
      }
      if ( v317.m128i_i64[1] )
      {
        v104 = a2;
        v105 = a3;
        v106 = (const __m128i *)v317.m128i_i64[0];
        nullsub_1(v102);
        v107 = 1;
        v108 = (__m128i *)sub_140001650(v103, 1);
        if ( !v108 )
          goto LABEL_301;
        v109 = (__int64)v108;
        sub_1418F44E0(v108, v106, v103);
        a3 = v105;
        a2 = v104;
      }
      else
      {
        v109 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v103;
      v360.m256i_i64[2] = v109;
      v360.m256i_i64[3] = v103;
      v337 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v110);
      v111 = (__m128i *)sub_140001650(5, 1);
      if ( !v111 )
        sub_141938D2B(1, 5);
      v111->m128i_i8[4] = 116;
      v111->m128i_i32[0] = 1970302569;
      v358.m128i_i64[0] = 5;
      v358.m128i_i64[1] = (__int64)v111;
      v359 = 5;
      v331 = (__m128i *)v309;
      v363 = v111;
      if ( v21 )
      {
        nullsub_1(v112);
        v113 = (__m128i *)sub_140001650(v21, 1);
        if ( !v113 )
        {
          v336 = 1;
          sub_141938D2B(1, v21);
        }
        v114 = (__int64)v113;
        sub_1418F44E0(v113, v331, v21);
      }
      else
      {
        v114 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v21;
      v360.m256i_i64[2] = v114;
      v360.m256i_i64[3] = v21;
      v336 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      v325.m256i_i64[3] = v354;
      *(__m128i *)&v325.m256i_u64[1] = v353;
      v325.m256i_i8[0] = 5;
      v326 = &xmmword_141A53655;
      v327.m128i_i64[0] = 36;
      v358.m128i_i64[0] = (__int64)&v325;
      v330[0].m256i_i64[0] = (__int64)&v326;
      v330[0].m256i_i64[1] = (__int64)sub_140186EE0;
      v330[0].m256i_i64[2] = (__int64)&v358;
      v330[0].m256i_i64[3] = (__int64)sub_1404806B0;
      sub_1416ABFD0(&v360, &unk_141A548D8, v330);
      v115 = v360.m256i_u64[2];
      v363 = (__m128i *)v360.m256i_i64[1];
      v116 = a2[1].m128i_i64[0];
      if ( v360.m256i_i64[2] > (unsigned __int64)(a2->m128i_i64[0] - v116) )
      {
        sub_14190D590((_DWORD)a2, v116, v360.m256i_i32[4], 1, 1);
        v116 = a2[1].m128i_i64[0];
      }
      else if ( !v360.m256i_i64[2] )
      {
        goto LABEL_102;
      }
      sub_1418F44E0((__m128i *)(v116 + a2->m128i_i64[1]), v363, v115);
LABEL_102:
      v117 = v115 + v116;
      a2[1].m128i_i64[0] = v117;
      if ( v360.m256i_i64[0] )
        sub_140001660(v363, v360.m256i_i64[0], 1);
      sub_140DF44E0(&v325);
      v353.m128i_i64[0] = 0;
      v354 = 0;
      nullsub_1(v118);
      v119 = (_DWORD *)sub_140001650(4, 1);
      if ( !v119 )
        sub_141938D2B(1, 4);
      *v119 = 1701869940;
      v358.m128i_i64[0] = 4;
      v315 = v119;
      v358.m128i_i64[1] = (__int64)v119;
      v359 = 4;
      nullsub_1(v120);
      v121 = (__m128i *)sub_140001650(16, 1);
      v363 = v121;
      if ( !v121 )
        sub_141938D2B(1, 16);
      *v121 = *(__m128i *)"custom_tool_call";
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = 16;
      v360.m256i_i64[2] = (__int64)v121;
      v360.m256i_i64[3] = 16;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v122);
      v123 = (__m128i *)sub_140001650(2, 1);
      if ( !v123 )
        sub_141938D2B(1, 2);
      v123->m128i_i16[0] = 25705;
      v358.m128i_i64[0] = 2;
      v358.m128i_i64[1] = (__int64)v123;
      v359 = 2;
      v125 = v317.m128i_u64[1];
      v363 = v123;
      if ( v317.m128i_i64[1] < 0 )
      {
        v129 = 0;
LABEL_309:
        v335 = 1;
        sub_141938D2B(v129, v125);
      }
      v315 = (_DWORD *)v117;
      if ( v317.m128i_i64[1] )
      {
        v126 = a2;
        v127 = a3;
        v128 = (const __m128i *)v317.m128i_i64[0];
        nullsub_1(v124);
        v129 = 1;
        v130 = (__m128i *)sub_140001650(v125, 1);
        if ( !v130 )
          goto LABEL_309;
        v131 = (__int64)v130;
        sub_1418F44E0(v130, v128, v125);
        a3 = v127;
        a2 = v126;
      }
      else
      {
        v131 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v125;
      v360.m256i_i64[2] = v131;
      v360.m256i_i64[3] = v125;
      v335 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v173);
      v174 = sub_140001650(6, 1);
      if ( !v174 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v174 + 4) = 29557;
      *(_DWORD *)v174 = 1952543859;
      v358.m128i_i64[0] = 6;
      v329 = v174;
      v358.m128i_i64[1] = v174;
      v359 = 6;
      nullsub_1(v175);
      v176 = (__m128i *)sub_140001650(9, 1);
      v363 = v176;
      if ( !v176 )
        sub_141938D2B(1, 9);
      v176->m128i_i64[0] = 0x6574656C706D6F63LL;
      v176->m128i_i8[8] = 100;
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = 9;
      v360.m256i_i64[2] = (__int64)v176;
      v360.m256i_i64[3] = 9;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v177);
      v178 = sub_140001650(7, 1);
      if ( !v178 )
        sub_141938D2B(1, 7);
      *(_DWORD *)(v178 + 3) = 1684627308;
      *(_DWORD *)v178 = 1819042147;
      v358.m128i_i64[0] = 7;
      v363 = (__m128i *)v178;
      v358.m128i_i64[1] = v178;
      v359 = 7;
      v180 = v319;
      if ( (__int64)v319 < 0 )
      {
        v184 = 0;
LABEL_317:
        v334 = 1;
        sub_141938D2B(v184, v180);
      }
      if ( (_QWORD)v319 )
      {
        v181 = a2;
        v182 = a3;
        v183 = *((const __m128i **)&v318 + 1);
        nullsub_1(v179);
        v184 = 1;
        v185 = (__m128i *)sub_140001650(v180, 1);
        if ( !v185 )
          goto LABEL_317;
        v186 = (__int64)v185;
        sub_1418F44E0(v185, v183, v180);
        a3 = v182;
        a2 = v181;
      }
      else
      {
        v186 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v180;
      v360.m256i_i64[2] = v186;
      v360.m256i_i64[3] = v180;
      v334 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v201);
      v202 = (__m128i *)sub_140001650(4, 1);
      if ( !v202 )
        sub_141938D2B(1, 4);
      v202->m128i_i32[0] = 1701667182;
      v358.m128i_i64[0] = 4;
      v363 = v202;
      v358.m128i_i64[1] = (__int64)v202;
      v359 = 4;
      v204 = *((_QWORD *)&v320 + 1);
      if ( v320 < 0 )
      {
        v208 = 0;
LABEL_325:
        v333 = 1;
        sub_141938D2B(v208, v204);
      }
      if ( *((_QWORD *)&v320 + 1) )
      {
        v205 = a2;
        v206 = a3;
        v207 = (const __m128i *)v320;
        nullsub_1(v203);
        v208 = 1;
        v209 = (__m128i *)sub_140001650(v204, 1);
        if ( !v209 )
          goto LABEL_325;
        v210 = (__int64)v209;
        sub_1418F44E0(v209, v207, v204);
        a3 = v206;
        a2 = v205;
      }
      else
      {
        v210 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v204;
      v360.m256i_i64[2] = v210;
      v360.m256i_i64[3] = v204;
      v333 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      nullsub_1(v231);
      v232 = (__m128i *)sub_140001650(5, 1);
      if ( !v232 )
        sub_141938D2B(1, 5);
      v232->m128i_i8[4] = 116;
      v232->m128i_i32[0] = 1970302569;
      v358.m128i_i64[0] = 5;
      v363 = v232;
      v358.m128i_i64[1] = (__int64)v232;
      v359 = 5;
      if ( v21 )
      {
        nullsub_1(v233);
        v234 = (__m128i *)sub_140001650(v21, 1);
        if ( !v234 )
        {
          v332 = 1;
          sub_141938D2B(1, v21);
        }
        v235 = (__int64)v234;
        sub_1418F44E0(v234, v331, v21);
      }
      else
      {
        v235 = 1;
      }
      v360.m256i_i8[0] = 3;
      v360.m256i_i64[1] = v21;
      v360.m256i_i64[2] = v235;
      v360.m256i_i64[3] = v21;
      v332 = 0;
      sub_140E72AA0(&v326, &v353, &v358, &v360);
      v236 = (__int64)v315;
      if ( (_BYTE)v326 != 0xFF )
        sub_140DF44E0(&v326);
      v325.m256i_i64[3] = v354;
      *(__m128i *)&v325.m256i_u64[1] = v353;
      v325.m256i_i8[0] = 5;
      v353.m128i_i64[0] = 0;
      v354 = 0;
      nullsub_1(&v325.m256i_u64[1]);
      v237 = (_DWORD *)sub_140001650(4, 1);
      if ( !v237 )
        sub_141938D2B(1, 4);
      *v237 = 1701869940;
      v358.m128i_i64[0] = 4;
      v329 = (__int64)v237;
      v358.m128i_i64[1] = (__int64)v237;
      v359 = 4;
      nullsub_1(v238);
      v239 = (__m128i *)sub_140001650(25, 1);
      v363 = v239;
      if ( !v239 )
        sub_141938D2B(1, 25);
      qmemcpy(v239, "response.output_item.done", 25);
      v330[0].m256i_i8[0] = 3;
      v330[0].m256i_i64[1] = 25;
      v330[0].m256i_i64[2] = (__int64)v239;
      v330[0].m256i_i64[3] = 25;
      sub_140E72AA0(&v360, &v353, &v358, v330);
      if ( v360.m256i_i8[0] != -1 )
        sub_140DF44E0(&v360);
      nullsub_1(v240);
      v241 = (void *)sub_140001650(12, 1);
      if ( !v241 )
        sub_141938D2B(1, 12);
      qmemcpy(v241, "output_index", 12);
      v358.m128i_i64[0] = 12;
      v358.m128i_i64[1] = (__int64)v241;
      v359 = 12;
      v330[0].m256i_i8[0] = 2;
      v330[0].m256i_i64[1] = 0;
      v330[0].m256i_i64[2] = DWORD2(v322);
      sub_140E72AA0(&v360, &v353, &v358, v330);
      if ( v360.m256i_i8[0] != -1 )
        sub_140DF44E0(&v360);
      nullsub_1(v242);
      v243 = (__m128i *)sub_140001650(4, 1);
      if ( !v243 )
        sub_141938D2B(1, 4);
      v243->m128i_i32[0] = 1835365481;
      v358.m128i_i64[0] = 4;
      v363 = v243;
      v358.m128i_i64[1] = (__int64)v243;
      v359 = 4;
      v356 = 1;
      sub_140412420(v330, &v325);
      if ( v330[0].m256i_i8[0] == -1 )
      {
        v360.m256i_i64[0] = v330[0].m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_16,
          43,
          (unsigned int)&v360,
          (unsigned int)&off_141A52FE8,
          (__int64)&off_141A53680);
      }
      v360 = v330[0];
      v356 = 0;
      sub_140E72AA0(v330, &v353, &v358, &v360);
      if ( v330[0].m256i_i8[0] != -1 )
        sub_140DF44E0(v330);
      v328 = v354;
      v327 = v353;
      LOBYTE(v326) = 5;
      v358.m128i_i64[0] = (__int64)&xmmword_141A53568;
      v358.m128i_i64[1] = 25;
      v353.m128i_i64[0] = (__int64)&v326;
      v330[0].m256i_i64[0] = (__int64)&v358;
      v330[0].m256i_i64[1] = (__int64)sub_140186EE0;
      v330[0].m256i_i64[2] = (__int64)&v353;
      v330[0].m256i_i64[3] = (__int64)sub_1404806B0;
      sub_1416ABFD0(&v360, &unk_141A548D8, v330);
      v245 = v360.m256i_u64[2];
      v244 = (const __m128i *)v360.m256i_i64[1];
      v246 = v324;
      if ( v360.m256i_i64[2] > (unsigned __int64)(a2->m128i_i64[0] - v236) )
      {
        v363 = (__m128i *)v360.m256i_i64[1];
        sub_14190D590((_DWORD)a2, v236, v360.m256i_i32[4], 1, 1);
        v236 = a2[1].m128i_i64[0];
        v246 = v324;
        v244 = v363;
      }
      else if ( !v360.m256i_i64[2] )
      {
LABEL_230:
        a2[1].m128i_i64[0] = v245 + v236;
        if ( v360.m256i_i64[0] )
          sub_140001660(v244, v360.m256i_i64[0], 1);
        v361 = 1;
        sub_140DF44E0(&v326);
        v247 = v246[18];
        if ( v247 == v246[16] )
          sub_14190F570(v307);
        v248 = v246[17];
        v249 = 32 * v247;
        v250 = _mm_loadu_si128((const __m128i *)&v325);
        *(_OWORD *)(v248 + v249 + 16) = *(_OWORD *)&v325.m256i_u64[2];
        *(__m128i *)(v248 + v249) = v250;
        v246[18] = v247 + 1;
        if ( v308 )
          sub_140001660(v331, v308, 1);
        goto LABEL_188;
      }
      sub_1418F44E0((__m128i *)(v236 + a2->m128i_i64[1]), v244, v245);
      goto LABEL_230;
    }
    v358.m128i_i64[0] = 0;
    v359 = 0;
    nullsub_1(v20);
    v22 = (__m128i *)sub_140001650(4, 1);
    if ( !v22 )
      sub_141938D2B(1, 4);
    v22->m128i_i32[0] = 1701869940;
    v325.m256i_i64[0] = 4;
    v331 = v22;
    v325.m256i_i64[1] = (__int64)v22;
    v325.m256i_i64[2] = 4;
    nullsub_1(v23);
    v24 = (__m128i *)sub_140001650(37, 1);
    v363 = v24;
    if ( !v24 )
      sub_141938D2B(1, 37);
    qmemcpy(&v24[1], "tool_call_input.delta", 21);
    *v24 = _mm_loadu_si128((const __m128i *)&xmmword_141A53630);
    v330[0].m256i_i8[0] = 3;
    v330[0].m256i_i64[1] = 37;
    v330[0].m256i_i64[2] = (__int64)v24;
    v330[0].m256i_i64[3] = 37;
    sub_140E72AA0(&v360, &v358, &v325, v330);
    if ( v360.m256i_i8[0] != -1 )
      sub_140DF44E0(&v360);
    nullsub_1(v25);
    v26 = (void *)sub_140001650(12, 1);
    if ( !v26 )
      sub_141938D2B(1, 12);
    qmemcpy(v26, "output_index", 12);
    v325.m256i_i64[0] = 12;
    v325.m256i_i64[1] = (__int64)v26;
    v325.m256i_i64[2] = 12;
    v330[0].m256i_i8[0] = 2;
    v330[0].m256i_i64[1] = 0;
    v330[0].m256i_i64[2] = DWORD2(v322);
    sub_140E72AA0(&v360, &v358, &v325, v330);
    if ( v360.m256i_i8[0] != -1 )
      sub_140DF44E0(&v360);
    nullsub_1(v27);
    v28 = sub_140001650(7, 1);
    if ( !v28 )
      sub_141938D2B(1, 7);
    *(_DWORD *)(v28 + 3) = 1684627309;
    *(_DWORD *)v28 = 1835365481;
    v325.m256i_i64[0] = 7;
    v325.m256i_i64[1] = v28;
    v325.m256i_i64[2] = 7;
    v30 = v317.m128i_u64[1];
    v363 = (__m128i *)v28;
    if ( v317.m128i_i64[1] < 0 )
    {
      v34 = 0;
LABEL_303:
      v338 = 1;
      sub_141938D2B(v34, v30);
    }
    if ( v317.m128i_i64[1] )
    {
      v31 = a2;
      v32 = a3;
      v33 = (const __m128i *)v317.m128i_i64[0];
      nullsub_1(v29);
      v34 = 1;
      v35 = (__m128i *)sub_140001650(v30, 1);
      if ( !v35 )
        goto LABEL_303;
      v36 = (__int64)v35;
      sub_1418F44E0(v35, v33, v30);
      a3 = v32;
      a2 = v31;
    }
    else
    {
      v36 = 1;
    }
    v330[0].m256i_i8[0] = 3;
    v330[0].m256i_i64[1] = v30;
    v330[0].m256i_i64[2] = v36;
    v330[0].m256i_i64[3] = v30;
    v338 = 0;
    sub_140E72AA0(&v360, &v358, &v325, v330);
    if ( v360.m256i_i8[0] != -1 )
      sub_140DF44E0(&v360);
    nullsub_1(v87);
    v88 = (__m128i *)sub_140001650(5, 1);
    if ( !v88 )
      sub_141938D2B(1, 5);
    v88->m128i_i8[4] = 97;
    v88->m128i_i32[0] = 1953260900;
    v325.m256i_i64[0] = 5;
    v331 = v88;
    v325.m256i_i64[1] = (__int64)v88;
    v325.m256i_i64[2] = 5;
    v90 = v309;
    nullsub_1(v89);
    v91 = (__m128i *)sub_140001650(v21, 1);
    v363 = v91;
    if ( !v91 )
      sub_141938D2B(1, v21);
    v92 = (__int64)v91;
    sub_1418F44E0(v91, v90, v21);
    v330[0].m256i_i8[0] = 3;
    v330[0].m256i_i64[1] = v21;
    v330[0].m256i_i64[2] = v92;
    v330[0].m256i_i64[3] = v21;
    sub_140E72AA0(&v360, &v358, &v325, v330);
    if ( v360.m256i_i8[0] != -1 )
      sub_140DF44E0(&v360);
    v328 = v359;
    v327 = _mm_loadu_si128(&v358);
    LOBYTE(v326) = 5;
    v325.m256i_i64[0] = (__int64)&xmmword_141A53630;
    v325.m256i_i64[1] = 37;
    v358.m128i_i64[0] = (__int64)&v326;
    v330[0].m256i_i64[0] = (__int64)&v325;
    v330[0].m256i_i64[1] = (__int64)sub_140186EE0;
    v330[0].m256i_i64[2] = (__int64)&v358;
    v330[0].m256i_i64[3] = (__int64)sub_1404806B0;
    sub_1416ABFD0(&v360, &unk_141A548D8, v330);
    v93 = v360.m256i_u64[2];
    v363 = (__m128i *)v360.m256i_i64[1];
    v94 = a2[1].m128i_i64[0];
    if ( v360.m256i_i64[2] > (unsigned __int64)(a2->m128i_i64[0] - v94) )
    {
      sub_14190D590((_DWORD)a2, v94, v360.m256i_i32[4], 1, 1);
      v94 = a2[1].m128i_i64[0];
    }
    else if ( !v360.m256i_i64[2] )
    {
LABEL_74:
      a2[1].m128i_i64[0] = v93 + v94;
      if ( v360.m256i_i64[0] )
        sub_140001660(v363, v360.m256i_i64[0], 1);
      sub_140DF44E0(&v326);
      goto LABEL_77;
    }
    sub_1418F44E0((__m128i *)(v94 + a2->m128i_i64[1]), v363, v93);
    goto LABEL_74;
  }
LABEL_310:
  v15 = v13;
LABEL_311:
  sub_14038EDC0(v15, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v13 - v15) >> 3));
  result = v311;
  if ( v311 )
    return sub_140001660(v306, 104 * v311, 8);
  return result;
}
