// win 1.2.7 | module src/core/relay/codex_thread_visibility_model_fallback.rs | ea 0x140c90350 | name sub_140C90350
// win 1.2.7 | module src/core/relay/codex_thread_visibility_model_fallback.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140C90350(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __m128i si128; // xmm0
  __int64 v10; // rsi
  __int64 v11; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 i; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm7
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 j; // rdx
  unsigned __int64 v25; // rsi
  __m128i v26; // xmm8
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  const __m128i *ii; // r14
  __int64 v35; // r13
  __int64 v36; // r15
  unsigned __int64 v37; // rsi
  __int64 v39; // rdx
  __int64 *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  _QWORD *v43; // rbx
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  _QWORD *v47; // rax
  unsigned __int64 v48; // rax
  __m128i v49; // xmm9
  int v52; // eax
  bool v53; // zf
  __int64 k; // rdx
  unsigned __int64 v55; // rax
  __int64 *v56; // rdi
  __m128i v57; // kr00_16
  __m128i v58; // xmm0
  __m128i v59; // xmm8
  __int64 v60; // rbx
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  __int64 v63; // rdi
  __int64 v64; // r15
  __int64 v65; // rbx
  __int64 *v66; // rsi
  char v67; // al
  char v68; // al
  __int64 v69; // rbx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __m128i v72; // xmm0
  __int64 v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rsi
  unsigned __int8 v76; // dl
  __int64 v77; // rsi
  int v78; // r15d
  unsigned int v79; // edi
  __int64 v80; // rbx
  unsigned __int64 v81; // rax
  __int64 v82; // r8
  __int64 v83; // rsi
  __int64 v84; // rcx
  __m128i v85; // xmm0
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r15
  __int64 v89; // rsi
  __m128i *v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rbx
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  int v95; // edi
  unsigned int v96; // esi
  __int64 v97; // rbx
  __m128i v98; // xmm0
  unsigned __int8 v99; // r15
  int v100; // edi
  unsigned int v101; // esi
  __int64 v102; // rbx
  __m128i v103; // xmm0
  char v104; // bl
  __int64 v105; // rax
  const __m128i *v106; // rdi
  __m128i v107; // xmm0
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  unsigned __int64 v111; // rsi
  unsigned __int64 v112; // rsi
  unsigned __int64 v113; // rsi
  __int64 v114; // rdx
  __int64 v115; // r15
  __int64 v116; // r12
  __int64 v117; // rbx
  unsigned __int64 v118; // rdi
  __m128i v119; // xmm0
  int v120; // edi
  __int64 v121; // rsi
  unsigned __int128 v122; // kr10_16
  __int64 v123; // rax
  const __m128i *v124; // rdi
  unsigned __int64 v125; // rbx
  __int64 v126; // r15
  __m128i v127; // xmm0
  int v128; // r15d
  unsigned int v129; // esi
  __int64 v130; // rdi
  __int64 v131; // r12
  int v132; // r15d
  unsigned int v133; // edi
  __int64 v134; // rbx
  __int64 v135; // rdi
  unsigned int v136; // ebx
  unsigned int v137; // eax
  __int64 v138; // rdx
  __m128i v139; // xmm0
  __m128i v140; // xmm0
  __m128i v141; // xmm0
  __m128i v142; // xmm0
  char v143; // si
  __int64 v144; // rcx
  _QWORD *v145; // rsi
  unsigned __int64 v146; // rsi
  __int64 v147; // rdx
  __int64 v148; // r15
  __int64 v149; // rdi
  unsigned __int64 v150; // rax
  __int64 v152; // r12
  __m128i v153; // xmm0
  __m128i v154; // xmm7
  __int64 v155; // rsi
  __int64 v156; // r13
  _QWORD *m; // rdx
  __int64 v158; // rax
  __m128i v159; // xmm8
  unsigned int v160; // eax
  unsigned int v161; // eax
  __int64 v162; // rsi
  __int64 v163; // rax
  __int64 v164; // rcx
  __m128i v165; // xmm0
  __int128 v166; // xmm1
  __int128 v167; // xmm2
  __int64 v168; // rcx
  _BYTE *v169; // rax
  __int64 v170; // r15
  __int64 v171; // rdi
  unsigned __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  unsigned __int64 v175; // rsi
  char v176; // bl
  _QWORD *v177; // rdi
  __int64 v178; // rdx
  __int64 v179; // r12
  const __m128i *v180; // rsi
  __int64 n; // r13
  __int64 v182; // rax
  _OWORD *v183; // rcx
  __m128i v184; // xmm0
  __int128 v185; // xmm1
  __int128 v186; // xmm2
  __m128i v188; // xmm0
  __int64 v190; // rdi
  __int64 v191; // rsi
  __int64 v192; // rbx
  const __m128i *v193; // r14
  __m128i v195; // xmm0
  __int64 v196; // rax
  __int64 v197; // rdx
  unsigned __int64 v198; // rax
  __int64 v199; // rdi
  __int64 v200; // rdi
  _QWORD *v201; // rsi
  __int64 v202; // rdx
  __int64 v203; // rdx
  __int64 v204; // rdx
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // rsi
  __int64 v209; // rdx
  _QWORD *v210; // rdi
  __int64 v211; // rsi
  __int64 v212; // rdx
  char v213; // al
  __int64 v214; // rbx
  __int64 v215; // rcx
  _QWORD *v216; // rdi
  __int64 v217; // rbx
  const __m128i *v218; // r12
  const __m128i *v219; // rsi
  unsigned __int64 v220; // r13
  __int64 v221; // rbx
  __int64 v222; // rax
  __int64 v223; // rcx
  _QWORD *v224; // rsi
  __int64 v225; // rdx
  __int64 v226; // rsi
  _QWORD *v227; // rdi
  __int64 v228; // r12
  __int64 v229; // rbx
  unsigned __int64 v230; // r13
  __int64 jj; // rsi
  __int64 v232; // rsi
  __int64 v233; // rsi
  __int64 v234; // r12
  __m128i v235; // xmm0
  __int128 v236; // xmm1
  __int128 v237; // xmm2
  _OWORD *v238; // rax
  _QWORD *v239; // rsi
  __int64 v240; // rdx
  __int64 v241; // rdx
  __int64 v242; // rdx
  __int64 v243; // rdi
  __int64 v244; // rsi
  __int64 v245; // rbx
  const __m128i *v246; // r14
  __m128i v248; // xmm0
  __int64 v249; // rax
  __int64 v250; // rdx
  unsigned __int64 v251; // rax
  __int64 v252; // rdi
  __int64 v253; // rdi
  _QWORD *v254; // rbx
  __int64 v255; // rdx
  __int64 v256; // rdx
  __int64 v257; // rdx
  __int64 v259; // rax
  _QWORD *v260; // rdi
  __int64 v261; // r12
  const __m128i *v262; // rsi
  __int64 mm; // r13
  __int64 v264; // rsi
  __int64 v265; // rax
  __int64 v266; // rdx
  __int64 v267; // r12
  const __m128i *v268; // rsi
  __int64 kk; // r13
  __int64 v270; // rax
  __int64 v271; // rdi
  _BYTE v272[24]; // [rsp+48h] [rbp-38h] BYREF
  __m128i v273; // [rsp+60h] [rbp-20h] BYREF
  __int128 v274; // [rsp+70h] [rbp-10h]
  __int128 v275; // [rsp+80h] [rbp+0h]
  _OWORD v276[5]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v277; // [rsp+E0h] [rbp+60h]
  const __m128i *v278; // [rsp+E8h] [rbp+68h]
  __int64 v279; // [rsp+F0h] [rbp+70h]
  __int64 v280; // [rsp+F8h] [rbp+78h]
  _QWORD v281[2]; // [rsp+100h] [rbp+80h] BYREF
  _QWORD *v282; // [rsp+110h] [rbp+90h]
  __int64 v283; // [rsp+118h] [rbp+98h]
  __int64 v284; // [rsp+120h] [rbp+A0h] BYREF
  char v285; // [rsp+128h] [rbp+A8h]
  unsigned int v286; // [rsp+129h] [rbp+A9h]
  unsigned __int16 v287; // [rsp+12Dh] [rbp+ADh]
  unsigned __int8 v288; // [rsp+12Fh] [rbp+AFh]
  __int64 v289; // [rsp+130h] [rbp+B0h]
  __int64 v290; // [rsp+138h] [rbp+B8h]
  __int64 v291; // [rsp+140h] [rbp+C0h]
  __int64 v292; // [rsp+148h] [rbp+C8h]
  __int64 v293; // [rsp+150h] [rbp+D0h]
  __int64 v294; // [rsp+158h] [rbp+D8h]
  __int64 v295; // [rsp+160h] [rbp+E0h]
  __int64 v296; // [rsp+168h] [rbp+E8h]
  __m128i v297; // [rsp+170h] [rbp+F0h]
  __int128 v298; // [rsp+180h] [rbp+100h]
  _BYTE v299[24]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v300; // [rsp+1A8h] [rbp+128h]
  __int128 v301; // [rsp+1B8h] [rbp+138h]
  __int128 v302; // [rsp+1C8h] [rbp+148h]
  __int64 v303; // [rsp+1D8h] [rbp+158h]
  __int64 v304; // [rsp+1E0h] [rbp+160h]
  __int64 v305; // [rsp+1E8h] [rbp+168h]
  __m128i v306; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v307; // [rsp+200h] [rbp+180h]
  __int128 v308; // [rsp+210h] [rbp+190h]
  __m128i v309; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v310; // [rsp+230h] [rbp+1B0h]
  _QWORD v311[2]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v312; // [rsp+250h] [rbp+1D0h]
  __int64 v313; // [rsp+258h] [rbp+1D8h]
  __int64 v314; // [rsp+260h] [rbp+1E0h]
  __int64 v315; // [rsp+268h] [rbp+1E8h]
  __int64 v316; // [rsp+270h] [rbp+1F0h]
  __int64 v317; // [rsp+278h] [rbp+1F8h]
  __m128i v318; // [rsp+280h] [rbp+200h] BYREF
  __int128 v319; // [rsp+290h] [rbp+210h]
  __int128 v320; // [rsp+2A0h] [rbp+220h]
  __int128 v321; // [rsp+2B0h] [rbp+230h]
  __int128 v322; // [rsp+2C0h] [rbp+240h]
  __int128 v323; // [rsp+2D0h] [rbp+250h]
  __int128 v324; // [rsp+2E0h] [rbp+260h]
  __int64 v325; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v326; // [rsp+2F8h] [rbp+278h]
  _QWORD v327[2]; // [rsp+300h] [rbp+280h] BYREF
  __m128i v328; // [rsp+310h] [rbp+290h] BYREF
  __int128 v329; // [rsp+320h] [rbp+2A0h] BYREF
  __m128i v330; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v331; // [rsp+340h] [rbp+2C0h]
  __m128i v332; // [rsp+350h] [rbp+2D0h]
  __int128 v333; // [rsp+360h] [rbp+2E0h]
  __int128 v334; // [rsp+370h] [rbp+2F0h]
  _BYTE v335[40]; // [rsp+380h] [rbp+300h] BYREF
  _BYTE v336[24]; // [rsp+3A8h] [rbp+328h]
  __int128 v337; // [rsp+3C0h] [rbp+340h]
  __int64 v338; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v339; // [rsp+3D8h] [rbp+358h]
  __int64 v340; // [rsp+3E0h] [rbp+360h]
  __int64 v341; // [rsp+3E8h] [rbp+368h]
  __int64 v342; // [rsp+3F0h] [rbp+370h]
  __m128i *v343; // [rsp+3F8h] [rbp+378h]
  __int128 v344; // [rsp+400h] [rbp+380h]
  __m256i v345; // [rsp+410h] [rbp+390h] BYREF
  __int128 v346; // [rsp+430h] [rbp+3B0h]
  __int128 v347; // [rsp+440h] [rbp+3C0h]
  __int64 v348; // [rsp+450h] [rbp+3D0h]
  _OWORD *v349; // [rsp+460h] [rbp+3E0h]
  __int64 v350; // [rsp+468h] [rbp+3E8h]
  __int64 *v351; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v352; // [rsp+478h] [rbp+3F8h]
  __int64 v353; // [rsp+480h] [rbp+400h]
  __int64 (__fastcall *v354)(_QWORD, _QWORD); // [rsp+488h] [rbp+408h]
  __int64 v355; // [rsp+490h] [rbp+410h]
  __int64 v356; // [rsp+498h] [rbp+418h]
  const __m128i *v357; // [rsp+4A0h] [rbp+420h]
  __int64 v358; // [rsp+4A8h] [rbp+428h]
  __int64 v359; // [rsp+4B0h] [rbp+430h]
  unsigned __int64 v360; // [rsp+4B8h] [rbp+438h]
  __int64 v361; // [rsp+4C0h] [rbp+440h]
  __int64 v362; // [rsp+4C8h] [rbp+448h]
  __m512i v363; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v364; // [rsp+510h] [rbp+490h]
  __int128 v365; // [rsp+520h] [rbp+4A0h]
  __int128 v366; // [rsp+530h] [rbp+4B0h]
  __int128 v367; // [rsp+540h] [rbp+4C0h]
  __int128 v368; // [rsp+550h] [rbp+4D0h]
  __int64 *v369; // [rsp+568h] [rbp+4E8h]
  __int64 v370; // [rsp+570h] [rbp+4F0h]
  __int64 v371; // [rsp+578h] [rbp+4F8h]
  _BYTE v372[80]; // [rsp+580h] [rbp+500h] BYREF
  __int128 v373; // [rsp+5D0h] [rbp+550h]
  _QWORD *v374; // [rsp+5E8h] [rbp+568h]
  unsigned __int64 v375; // [rsp+5F0h] [rbp+570h]
  __int64 v376; // [rsp+5F8h] [rbp+578h]
  _BYTE v377[112]; // [rsp+600h] [rbp+580h] BYREF
  __int128 v378; // [rsp+670h] [rbp+5F0h]
  __int128 v379; // [rsp+680h] [rbp+600h]
  __int64 v380; // [rsp+690h] [rbp+610h]
  __int64 v381; // [rsp+698h] [rbp+618h]
  __int64 v382; // [rsp+6A0h] [rbp+620h]
  char v383; // [rsp+6AFh] [rbp+62Fh]
  __int64 v384; // [rsp+6B0h] [rbp+630h]
  __int64 v385; // [rsp+6B8h] [rbp+638h]
  char v386; // [rsp+6C2h] [rbp+642h]
  char v387; // [rsp+6C3h] [rbp+643h]
  char v388; // [rsp+6C4h] [rbp+644h]
  char v389; // [rsp+6C5h] [rbp+645h]
  char v390; // [rsp+6C6h] [rbp+646h]
  char v391; // [rsp+6C7h] [rbp+647h] BYREF
  __int64 v392; // [rsp+6C8h] [rbp+648h]

  v392 = -2;
  v4 = *(_QWORD *)(a2 + 776);
  v5 = *(_QWORD *)(a2 + 784);
  sub_140C8F8A0(v377, v4, v5);
  v6 = *(_QWORD *)v377;
  *(_OWORD *)v363.m512i_i8 = *(_OWORD *)&v377[8];
  *(_OWORD *)&v363.m512i_u64[2] = *(_OWORD *)&v377[24];
  v349 = (_OWORD *)a1;
  if ( *(_QWORD *)v377 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v377[88];
    v7 = *(_OWORD *)&v377[40];
    v8 = *(_OWORD *)&v377[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v377[72];
    *(_OWORD *)(a1 + 56) = v8;
    *(_OWORD *)(a1 + 40) = v7;
    si128 = _mm_load_si128((const __m128i *)&v363);
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v363.m512i_u64[2];
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = v6;
    return v349;
  }
  v298 = *(_OWORD *)&v363.m512i_u64[2];
  v297 = _mm_load_si128((const __m128i *)&v363);
  v10 = v363.m512i_i64[2];
  if ( !v363.m512i_i64[2] )
  {
    v13 = v349;
    *(_OWORD *)((char *)v349 + 24) = 0;
    *(_OWORD *)((char *)v13 + 8) = 0;
    *(_QWORD *)v13 = -1;
    v14 = v297.m128i_i64[1];
LABEL_394:
    if ( !v297.m128i_i64[0] )
      return v349;
    v205 = 80 * v297.m128i_i64[0];
    v206 = v14;
LABEL_396:
    sub_140001660(v206, v205, 8);
    return v349;
  }
  sub_14023B860(v377, a2);
  if ( *(_QWORD *)v377 == -2 )
  {
    v323 = *(_OWORD *)&v377[88];
    v322 = *(_OWORD *)&v377[72];
    v321 = *(_OWORD *)&v377[56];
    v320 = *(_OWORD *)&v377[40];
    v319 = *(_OWORD *)&v377[24];
    v318 = _mm_loadu_si128((const __m128i *)&v377[8]);
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)v372 = &v318;
      *(_QWORD *)&v372[8] = sub_14104A7D0;
      v363.m512i_i64[6] = 2;
      v363.m512i_i64[7] = (__int64)aCodexmateLibCo_35;
      *(_QWORD *)&v364 = 67;
      *(_QWORD *)&v365 = &unk_141A3F732;
      *((_QWORD *)&v365 + 1) = v372;
      v363.m512i_i64[0] = 0;
      v363.m512i_i64[1] = (__int64)aCodexmateLibCo_35;
      *(_OWORD *)&v363.m512i_u64[2] = 0x43u;
      v363.m512i_i64[4] = (__int64)aSrcCoreRelayCo_1;
      v363.m512i_i64[5] = 56;
      *((_QWORD *)&v364 + 1) = 0xCD00000001LL;
      sub_1414D53A0(&v391, &v363);
    }
    v12 = v349;
    *(_OWORD *)((char *)v349 + 24) = 0;
    *(_OWORD *)((char *)v12 + 8) = 0;
    *(_QWORD *)v12 = -1;
    sub_140BAC840(&v318);
LABEL_385:
    v14 = v297.m128i_i64[1];
    v253 = v298;
    if ( (_QWORD)v298 )
    {
      v254 = (_QWORD *)(v297.m128i_i64[1] + 56);
      do
      {
        v255 = *(v254 - 7);
        if ( v255 )
          sub_140001660(*(v254 - 6), v255, 1);
        v256 = *(v254 - 4);
        if ( v256 )
          sub_140001660(*(v254 - 3), v256, 1);
        v257 = *(v254 - 1);
        if ( v257 )
          sub_140001660(*v254, v257, 1);
        v254 += 10;
        --v253;
      }
      while ( v253 );
    }
    goto LABEL_394;
  }
  v381 = a2;
  v291 = v5;
  v290 = v4;
  v276[4] = v378;
  v276[3] = *(_OWORD *)&v377[96];
  v276[2] = *(_OWORD *)&v377[80];
  v276[1] = *(_OWORD *)&v377[64];
  v276[0] = *(_OWORD *)&v377[48];
  v275 = *(_OWORD *)&v377[32];
  v274 = *(_OWORD *)&v377[16];
  v273 = _mm_loadu_si128((const __m128i *)v377);
  v329 = 0;
  v328 = 0;
  v338 = 0;
  v339 = 8;
  v340 = 0;
  v15 = v297.m128i_i64[1];
  v384 = v297.m128i_i64[1] + 80 * v10;
  v385 = 0;
LABEL_10:
  for ( i = v15; i != v384; i += 80 )
  {
    v15 = i + 80;
    if ( !*(_QWORD *)&v276[0] )
    {
LABEL_24:
      v11 = v385 + 1;
      v385 = v11;
      v328.m128i_i64[1] = v11;
      if ( *(_QWORD *)off_1421E6EC0 >= 3u )
      {
        v363.m512i_i64[0] = i;
        v363.m512i_i64[1] = (__int64)sub_1400015F0;
        v363.m512i_i64[2] = i + 24;
        v363.m512i_i64[3] = (__int64)sub_1400015F0;
        *(_QWORD *)&v377[48] = 3;
        *(_QWORD *)&v377[56] = aCodexmateLibCo_35;
        *(_QWORD *)&v377[64] = 67;
        *(_QWORD *)&v377[80] = &unk_141A3F63F;
        *(_QWORD *)&v377[88] = &v363;
        *(_QWORD *)v377 = 0;
        *(_QWORD *)&v377[8] = aCodexmateLibCo_35;
        *(_OWORD *)&v377[16] = 0x43u;
        *(_QWORD *)&v377[32] = aSrcCoreRelayCo_1;
        *(_QWORD *)&v377[40] = 56;
        *(_QWORD *)&v377[72] = 0xDB00000001LL;
        sub_1414D53A0(&v391, v377);
      }
      goto LABEL_10;
    }
    v17 = sub_140D2AC70((char *)v276 + 8, i + 24);
    _RAX = v17 >> 57;
    v19 = v275;
    v20 = _mm_cvtsi32_si128(v17 >> 57);
    v21 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v20, v20), 0), 68);
    v22 = *(_QWORD *)(i + 32);
    v23 = *(_QWORD *)(i + 40);
    for ( j = 0; ; j += 16 )
    {
      v25 = v19 & v17;
      v26 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)&v274 + 1) + v25));
      _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v26, v21));
      if ( _R12D )
        break;
LABEL_20:
      _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v26, (__m128i)-1LL));
      v15 = i + 80;
      if ( (_DWORD)_RAX )
        goto LABEL_24;
      v17 = j + v25 + 16;
    }
    v374 = (_QWORD *)v19;
    v350 = j;
    while ( 1 )
    {
      __asm { tzcnt   eax, r12d }
      v28 = -3LL * (v19 & (v25 + _RAX));
      if ( v23 == *(_QWORD *)(*((_QWORD *)&v274 + 1) + 8 * v28 - 8)
        && !(unsigned int)sub_1418F4B70(v22, *(_QWORD *)(*((_QWORD *)&v274 + 1) + 8 * v28 - 16)) )
      {
        break;
      }
      _RAX = (unsigned int)(_R12D - 1);
      LOWORD(_RAX) = _R12D & (_R12D - 1);
      _R12D = _RAX;
      v19 = (unsigned __int64)v374;
      j = v350;
      if ( !(_WORD)_RAX )
        goto LABEL_20;
    }
    v29 = v340;
    if ( v340 == v338 )
      sub_14190F3B0(&v338);
    *(_QWORD *)(v339 + 8 * v29) = i;
    v340 = v29 + 1;
  }
  v30 = sub_14167F170(v11);
  v31 = v30;
  if ( *(_BYTE *)(v30 + 16) == 1 )
  {
    v32 = *(_QWORD *)v30;
    v33 = *(_QWORD *)(v31 + 8);
  }
  else
  {
    v32 = sub_141696260();
    *(_QWORD *)v31 = v32;
    *(_QWORD *)(v31 + 8) = v33;
    *(_BYTE *)(v31 + 16) = 1;
  }
  *(_QWORD *)v31 = v32 + 1;
  v310 = xmmword_141A39750;
  v309 = _mm_loadu_si128((const __m128i *)&off_141A39740);
  v311[0] = v32;
  v311[1] = v33;
  sub_1401B7010(v377);
  ii = *(const __m128i **)&v377[8];
  v35 = *(_QWORD *)&v377[8] + 32LL * *(_QWORD *)&v377[16];
  v277 = *(_QWORD *)&v377[8];
  v350 = *(_QWORD *)v377;
  v279 = *(_QWORD *)v377;
  v280 = v35;
  v36 = v35 - 32;
  v312 = *(_QWORD *)&v377[8];
LABEL_29:
  v37 = v36 - (_QWORD)ii;
  _RBX = (unsigned __int64)&ii[2].m128i_u64[1];
  while ( 1 )
  {
    if ( ii == (const __m128i *)v35 )
      goto LABEL_232;
    v40 = (__int64 *)ii;
    ii += 2;
    v278 = ii;
    if ( *v40 == -1 )
      break;
    v384 = *v40;
    v41 = v40[2];
    v385 = v40[1];
    sub_141695A00(v377, v385, v41);
    if ( *(_DWORD *)v377 != 2 )
    {
      v42 = v340;
      if ( !v340 )
        goto LABEL_224;
      v43 = (_QWORD *)v339;
      sub_1402399D0(v377, v385, v41);
      if ( v377[104] != 0xFF )
      {
        v324 = *(_OWORD *)&v377[96];
        v323 = *(_OWORD *)&v377[80];
        v322 = *(_OWORD *)&v377[64];
        v44 = _mm_loadu_si128((const __m128i *)v377);
        v321 = *(_OWORD *)&v377[48];
        v320 = *(_OWORD *)&v377[32];
        v319 = *(_OWORD *)&v377[16];
        v318 = v44;
        sub_140230510(v372, &v318);
        if ( *(_DWORD *)v372 != -1 )
        {
          v365 = v373;
          v364 = *(_OWORD *)&v372[64];
          v45 = _mm_loadu_si128((const __m128i *)v372);
          *(_OWORD *)&v363.m512i_u64[6] = *(_OWORD *)&v372[48];
          *(_OWORD *)&v363.m512i_u64[4] = *(_OWORD *)&v372[32];
          *(_OWORD *)&v363.m512i_u64[2] = *(_OWORD *)&v372[16];
          *(__m128i *)v363.m512i_i8 = v45;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            sub_140230350(v335, v385, v41);
            *(_QWORD *)v299 = v335;
            *(_QWORD *)&v299[8] = sub_1400015F0;
            *(_QWORD *)&v299[16] = &v363;
            *(_QWORD *)&v300 = sub_14104A7D0;
            *(_QWORD *)&v377[48] = 2;
            *(_QWORD *)&v377[56] = aCodexmateLibCo_35;
            *(_QWORD *)&v377[64] = 67;
            *(_QWORD *)&v377[80] = &unk_141A3F570;
            *(_QWORD *)&v377[88] = v299;
            *(_QWORD *)v377 = 0;
            *(_QWORD *)&v377[8] = aCodexmateLibCo_35;
            *(_OWORD *)&v377[16] = 0x43u;
            *(_QWORD *)&v377[32] = aSrcCoreRelayCo_1;
            *(_QWORD *)&v377[40] = 56;
            *(_QWORD *)&v377[72] = 0x13400000001LL;
            sub_1414D53A0(&v391, v377);
            if ( *(_QWORD *)v335 )
              sub_140001660(*(_QWORD *)&v335[8], *(_QWORD *)v335, 1);
          }
          ++*((_QWORD *)&v329 + 1);
          sub_140BAC840(&v363);
          goto LABEL_223;
        }
        if ( !v372[8] )
        {
LABEL_223:
          sub_140BA9BF0(&v318);
          goto LABEL_224;
        }
        v47 = v43;
        v282 = &v43[v42];
        v292 = v36;
        while ( 1 )
        {
LABEL_58:
          if ( v47 == v282 )
          {
            sub_14023D8C0(&v318, aModelRestore_0, 13);
            sub_140BA9BF0(&v318);
            goto LABEL_224;
          }
          v56 = (__int64 *)*v47;
          v374 = v47 + 1;
          v369 = v56;
          if ( !*((_QWORD *)&v310 + 1) )
            break;
          v55 = sub_140D2AC70(v311, v56);
          v57 = v309;
          v58 = _mm_cvtsi32_si128(v55 >> 57);
          v59 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v58, v58), 0), 68);
          _RCX = v56[1];
          v381 = _RCX;
          v60 = v56[2];
          for ( k = 0; ; k += 16 )
          {
            v48 = v57.m128i_i64[1] & v55;
            v49 = _mm_loadu_si128((const __m128i *)(v57.m128i_i64[0] + v48));
            _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v49, v59));
            if ( _R12D )
              break;
LABEL_55:
            _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v49, (__m128i)-1LL));
            if ( (_DWORD)_RCX )
              goto LABEL_61;
            v55 = k + v48 + 16;
          }
          v360 = v48;
          v370 = k;
          while ( 1 )
          {
            __asm { tzcnt   ecx, r12d }
            _RCX = -(__int64)(v57.m128i_i64[1] & (v48 + _RCX));
            if ( v60 == *(_QWORD *)(v57.m128i_i64[0] + 24 * _RCX - 8)
              && !(unsigned int)sub_1418F4B70(v381, *(_QWORD *)(v57.m128i_i64[0] + 24 * _RCX - 16)) )
            {
              break;
            }
            v52 = _R12D - 1;
            LOWORD(v52) = _R12D & (_R12D - 1);
            v53 = (_WORD)v52 == 0;
            _R12D = v52;
            v48 = v360;
            k = v370;
            if ( v53 )
              goto LABEL_55;
          }
          v47 = v374;
        }
        v381 = v56[1];
        v60 = v56[2];
LABEL_61:
        sub_140C1AEF0(v377, &v318, aSelectCoalesce, 149);
        v363 = *(__m512i *)&v377[8];
        if ( *(_DWORD *)v377 == 1 )
        {
          v61 = _mm_load_si128((const __m128i *)&v363);
          v302 = *(_OWORD *)&v363.m512i_u64[6];
          v301 = *(_OWORD *)&v363.m512i_u64[4];
          v300 = *(_OWORD *)&v363.m512i_u64[2];
          *(__m128i *)&v299[8] = v61;
          *(_QWORD *)v299 = -1;
LABEL_80:
          if ( *(_QWORD *)&v299[8] == 0x8000000000000009uLL )
          {
            sub_140BAA960(&v299[8]);
          }
          else
          {
            v72 = _mm_loadu_si128((const __m128i *)&v299[8]);
            *(_OWORD *)&v363.m512i_u64[6] = v302;
            *(_OWORD *)&v363.m512i_u64[4] = v301;
            *(_OWORD *)&v363.m512i_u64[2] = v300;
            *(__m128i *)v363.m512i_i8 = v72;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              *(_QWORD *)v372 = v369;
              *(_QWORD *)&v372[8] = sub_1400015F0;
              *(_QWORD *)&v372[16] = &v363;
              *(_QWORD *)&v372[24] = sub_141404740;
              *(_QWORD *)&v377[48] = 2;
              *(_QWORD *)&v377[56] = aCodexmateLibCo_35;
              *(_QWORD *)&v377[64] = 67;
              *(_QWORD *)&v377[80] = &unk_141A3F531;
              *(_QWORD *)&v377[88] = v372;
              *(_QWORD *)v377 = 0;
              *(_QWORD *)&v377[8] = aCodexmateLibCo_35;
              *(_OWORD *)&v377[16] = 0x43u;
              *(_QWORD *)&v377[32] = aSrcCoreRelayCo_1;
              *(_QWORD *)&v377[40] = 56;
              *(_QWORD *)&v377[72] = 0x15700000001LL;
              sub_1414D53A0(&v391, v377);
            }
            ++*((_QWORD *)&v329 + 1);
            sub_140BAA960(&v363);
          }
          v47 = v374;
          goto LABEL_58;
        }
        v62 = _mm_load_si128((const __m128i *)&v363);
        *(_OWORD *)&v372[48] = *(_OWORD *)&v363.m512i_u64[6];
        *(_OWORD *)&v372[32] = *(_OWORD *)&v363.m512i_u64[4];
        *(_OWORD *)&v372[16] = *(_OWORD *)&v363.m512i_u64[2];
        *(__m128i *)v372 = v62;
        *(_QWORD *)v377 = v381;
        *(_QWORD *)&v377[8] = v60;
        sub_140E92640(v299, v372, v377);
        sub_140BAAAF0(v372);
        v381 = *(_QWORD *)v299;
        if ( *(_QWORD *)v299 == -1 )
          goto LABEL_80;
        v360 = *(_QWORD *)&v299[8];
        v63 = *(_QWORD *)&v299[16];
        v357 = *((const __m128i **)&v300 + 1);
        v355 = v300;
        v370 = *((_QWORD *)&v301 + 1);
        v380 = v301;
        v64 = *((_QWORD *)&v302 + 1);
        v371 = v302;
        v361 = v303;
        v341 = v304;
        v65 = v305;
        v66 = v369;
        if ( (*(_QWORD *)&v299[16] != v369[8] || (unsigned int)sub_1418F4B70(v360, v369[7]))
          && (v63 != v66[5] || (unsigned int)sub_1418F4B70(v360, v66[4]))
          || (v67 = sub_140237AF0(v357, v380), v66 = v369, !v67)
          || (v68 = sub_140291D70(aSubagent_0, 10, v341, v65), v66 = v369, v68) )
        {
          *(_QWORD *)&v329 = v329 + 1;
          sub_1416AC440(v377, v66);
          sub_1403AAB80(&v309, v377);
          v69 = v382;
          v70 = v356;
          goto LABEL_71;
        }
        sub_140E91160(v371, v64);
        if ( v73 )
        {
          v74 = v369[1];
          v75 = v369[2];
          v293 = v369[4];
          v314 = v369[5];
          v283 = v369[7];
          v294 = v369[8];
          v281[0] = v74;
          v281[1] = v75;
          sub_140282430(v377);
          if ( *(_QWORD *)&v377[32] == -1 )
          {
            v77 = *(_QWORD *)v377;
            *(_QWORD *)v372 = *(_QWORD *)v377;
            v363.m512i_i64[0] = 0;
            *(_OWORD *)&v363.m512i_u64[1] = 1u;
            *(_QWORD *)&v377[16] = 1610612768;
            *(_QWORD *)v377 = &v363;
            *(_QWORD *)&v377[8] = &off_141A3FE88;
            if ( (unsigned __int8)sub_1416BB0B0(v372, v377) )
              sub_141939040(
                (unsigned int)aADisplayImplem_7,
                55,
                (unsigned int)&v391,
                (unsigned int)&unk_141A3BB68,
                (__int64)&off_141A3FF40);
            v380 = v363.m512i_i64[0];
            v76 = v363.m512i_u8[8];
            v78 = v363.m512i_u8[15];
            v79 = *(unsigned __int16 *)((char *)&v363.m512i_u16[6] + 1);
            v80 = *(unsigned int *)((char *)&v363.m512i_u32[2] + 1);
            v362 = v363.m512i_i64[2];
            if ( (unsigned int)(v77 & 3) - 2 >= 2 && (v77 & 3) != 0 )
            {
              LOBYTE(v375) = v363.m512i_i8[8];
              *(_QWORD *)&v377[8] = v77 - 1;
              v377[0] = 3;
              sub_1416BCB00(&v377[8]);
              v76 = v375;
            }
            v81 = ((unsigned __int64)((v78 << 16) | v79) << 32) | v80;
            goto LABEL_135;
          }
          v313 = v64;
          if ( *(_DWORD *)&v377[32] != 2 )
          {
            v76 = v377[0];
            if ( *(_QWORD *)v377 )
            {
              sub_140001660(*(_QWORD *)&v377[8], *(_QWORD *)v377, 1);
              goto LABEL_109;
            }
          }
          if ( *(_DWORD *)&v377[32] == 2 )
          {
            v82 = -1;
            v69 = v382;
            v83 = v356;
            v81 = v375;
          }
          else
          {
LABEL_109:
            v92 = v313;
            sub_14023B160((unsigned int)v377, v371, v313, v74, v75);
            if ( *(_QWORD *)v377 == -1 )
            {
              v373 = *(_OWORD *)&v377[88];
              *(_OWORD *)&v372[64] = *(_OWORD *)&v377[72];
              v98 = _mm_loadu_si128((const __m128i *)&v377[8]);
              *(_OWORD *)&v372[48] = *(_OWORD *)&v377[56];
              *(_OWORD *)&v372[32] = *(_OWORD *)&v377[40];
              *(_OWORD *)&v372[16] = *(_OWORD *)&v377[24];
              *(__m128i *)v372 = v98;
              v351 = nullptr;
              v352 = 1;
              v353 = 0;
              v345.m256i_i64[2] = 1610612768;
              v345.m256i_i64[0] = (__int64)&v351;
              v345.m256i_i64[1] = (__int64)&off_141A3FE88;
              if ( (unsigned __int8)sub_14104A7D0(v372, &v345) )
                sub_141939040(
                  (unsigned int)aADisplayImplem_7,
                  55,
                  (unsigned int)&v391,
                  (unsigned int)&unk_141A3BB68,
                  (__int64)&off_141A3FF40);
              v380 = (__int64)v351;
              v99 = v352;
              v100 = HIBYTE(v352);
              v101 = *(unsigned __int16 *)((char *)&v352 + 5);
              v102 = *(unsigned int *)((char *)&v352 + 1);
              v362 = v353;
              sub_140BAC840(&v377[8]);
              v76 = v99;
              v81 = ((unsigned __int64)((v100 << 16) | v101) << 32) | v102;
LABEL_135:
              v375 = v81;
              v91 = (v81 << 8) | v76;
              v69 = v382;
              v70 = v356;
              v109 = v362;
              goto LABEL_136;
            }
            v368 = v379;
            v367 = v378;
            v366 = *(_OWORD *)&v377[96];
            v93 = _mm_loadu_si128((const __m128i *)&v377[32]);
            v365 = *(_OWORD *)&v377[80];
            v364 = *(_OWORD *)&v377[64];
            *(_OWORD *)&v363.m512i_u64[6] = *(_OWORD *)&v377[48];
            *(__m128i *)&v363.m512i_u64[4] = v93;
            v342 = *(_QWORD *)&v377[8];
            v363.m512i_i8[16] = v377[16];
            v363.m512i_i8[23] = v377[23];
            *(__int16 *)((char *)&v363.m512i_i16[10] + 1) = *(_WORD *)&v377[21];
            *(__int32 *)((char *)&v363.m512i_i32[4] + 1) = *(_DWORD *)&v377[17];
            v363.m512i_i64[3] = *(_QWORD *)&v377[24];
            v376 = *(_QWORD *)v377;
            *(_OWORD *)v363.m512i_i8 = *(_OWORD *)v377;
            v389 = 0;
            sub_140232D30(v372, &v363, v371, v92);
            if ( *(_DWORD *)v372 != -1 )
            {
              *(_OWORD *)&v377[80] = v373;
              *(_OWORD *)&v377[64] = *(_OWORD *)&v372[64];
              v94 = _mm_loadu_si128((const __m128i *)v372);
              *(_OWORD *)&v377[48] = *(_OWORD *)&v372[48];
              *(_OWORD *)&v377[32] = *(_OWORD *)&v372[32];
              *(_OWORD *)&v377[16] = *(_OWORD *)&v372[16];
              *(__m128i *)v377 = v94;
              v325 = 0;
              v326 = 1;
              v327[0] = 0;
              v353 = 1610612768;
              v351 = &v325;
              v352 = (__int64)&off_141A3FE88;
              if ( (unsigned __int8)sub_14104A7D0(v377, &v351) )
                sub_141939040(
                  (unsigned int)aADisplayImplem_7,
                  55,
                  (unsigned int)&v391,
                  (unsigned int)&unk_141A3BB68,
                  (__int64)&off_141A3FF40);
              v380 = v325;
              LOBYTE(v375) = v326;
              v95 = HIBYTE(v326);
              v96 = *(unsigned __int16 *)((char *)&v326 + 5);
              v97 = *(unsigned int *)((char *)&v326 + 1);
              v362 = v327[0];
              v389 = 0;
              sub_140BAC840(v372);
              v81 = ((unsigned __int64)((v95 << 16) | v96) << 32) | v97;
LABEL_127:
              v110 = v376;
              if ( !v376 )
                goto LABEL_129;
              goto LABEL_128;
            }
            v348 = *(_QWORD *)&v372[72];
            v347 = *(_OWORD *)&v372[56];
            v346 = *(_OWORD *)&v372[40];
            v103 = _mm_loadu_si128((const __m128i *)&v372[8]);
            *(_OWORD *)&v345.m256i_u64[2] = *(_OWORD *)&v372[24];
            *(__m128i *)v345.m256i_i8 = v103;
            v104 = sub_1401F3F40(&v345);
            sub_140196250(&v345);
            if ( !v104 )
            {
              *(_QWORD *)v377 = v281;
              *(_QWORD *)&v377[8] = sub_140186EE0;
              v389 = 0;
              sub_1416ABFD0(&v284, &unk_141A3F7B5, v377);
              v380 = v284;
              LOBYTE(v375) = v285;
              v81 = ((unsigned __int64)((v288 << 16) | (unsigned int)v287) << 32) | v286;
              v362 = v289;
              goto LABEL_127;
            }
            *(_QWORD *)v377 = v342;
            *(_QWORD *)&v377[8] = v363.m512i_i64[2];
            *(_OWORD *)&v377[16] = 0;
            *(_QWORD *)&v377[32] = v342;
            v83 = v363.m512i_i64[2];
            *(_QWORD *)&v377[40] = v363.m512i_i64[2];
            v387 = 1;
            sub_14062D280(v372, v377);
            if ( v372[0] == 0xFF )
            {
              v387 = 1;
              sub_140C166E0(v377, *(_QWORD *)&v372[8]);
              v380 = *(_QWORD *)v377;
              LOBYTE(v375) = v377[8];
              v118 = ((unsigned __int64)((v377[15] << 16) | (unsigned int)*(unsigned __int16 *)&v377[13]) << 32)
                   | *(unsigned int *)&v377[9];
              v362 = *(_QWORD *)&v377[16];
              goto LABEL_167;
            }
            v345 = *(__m256i *)v372;
            v105 = sub_141642800(&v345, aPayloadModelPr, 23);
            if ( v105 )
            {
              v106 = v357;
              if ( *(_BYTE *)v105 == 3 )
              {
                v380 = *(_QWORD *)(v105 + 24);
                v106 = *(const __m128i **)(v105 + 16);
              }
            }
            else
            {
              v106 = v357;
            }
            sub_14072C410((unsigned int)v377, v380, 0, 1, 1);
            v358 = *(_QWORD *)&v377[8];
            if ( *(_DWORD *)v377 == 1 )
              sub_141938D2B(v358, *(_QWORD *)&v377[16]);
            v343 = *(__m128i **)&v377[16];
            if ( v380 )
              sub_1418F44E0(v343, v106, v380);
            v123 = sub_141642800(&v345, aPayloadModelRe_0, 31);
            if ( v123 )
            {
              v124 = *(const __m128i **)(v123 + 16);
              if ( *(_BYTE *)v123 != 3 )
                v124 = (const __m128i *)aMedium_0;
              v125 = *(_QWORD *)(v123 + 24);
              if ( *(_BYTE *)v123 != 3 )
                v125 = 6;
            }
            else
            {
              v125 = 6;
              v124 = (const __m128i *)aMedium_0;
            }
            sub_14072C410((unsigned int)v377, v125, 0, 1, 1);
            v359 = *(_QWORD *)&v377[8];
            if ( *(_DWORD *)v377 == 1 )
              sub_141938D2B(v359, *(_QWORD *)&v377[16]);
            v126 = *(_QWORD *)&v377[16];
            if ( v125 )
              sub_1418F44E0(*(__m128i **)&v377[16], v124, v125);
            v317 = v126;
            sub_140231E90((unsigned int)v372, v342, v83, (_DWORD)v343, v380, v293, v314, v126, v125);
            if ( *(_DWORD *)v372 != -1 )
            {
              *(_OWORD *)&v377[80] = v373;
              *(_OWORD *)&v377[64] = *(_OWORD *)&v372[64];
              v127 = _mm_loadu_si128((const __m128i *)v372);
              *(_OWORD *)&v377[48] = *(_OWORD *)&v372[48];
              *(_OWORD *)&v377[32] = *(_OWORD *)&v372[32];
              *(_OWORD *)&v377[16] = *(_OWORD *)&v372[16];
              *(__m128i *)v377 = v127;
              sub_140C16750(&v351, v377);
              v380 = (__int64)v351;
              LOBYTE(v375) = v352;
              v128 = HIBYTE(v352);
              v129 = *(unsigned __int16 *)((char *)&v352 + 5);
              v130 = *(unsigned int *)((char *)&v352 + 1);
              v362 = v353;
              if ( v359 )
                sub_140001660(v317, v359, 1);
              if ( v358 )
                sub_140001660(v343, v358, 1);
              v387 = 1;
              sub_14002F9D0(&v345);
              v118 = ((unsigned __int64)((v128 << 16) | v129) << 32) | v130;
LABEL_167:
              v110 = v376;
              v81 = v118;
              if ( !v376 )
              {
LABEL_129:
                if ( v363.m512i_i64[6] )
                {
                  v112 = v81;
                  sub_140001660(v363.m512i_i64[7], v363.m512i_i64[6], 1);
                  v81 = v112;
                }
                if ( (_QWORD)v366 != -1 && (_QWORD)v366 )
                {
                  v113 = v81;
                  sub_140001660(*((_QWORD *)&v366 + 1), v366, 1);
                  v81 = v113;
                }
                v76 = v375;
                goto LABEL_135;
              }
LABEL_128:
              v111 = v81;
              sub_140001660(v342, v110, 1);
              v81 = v111;
              goto LABEL_129;
            }
            v316 = *(_QWORD *)&v372[8];
            v295 = *(_QWORD *)&v372[24];
            v315 = *(_QWORD *)&v372[16];
            sub_141681D30(v377, v371, v313);
            v380 = *(_QWORD *)&v377[8];
            v131 = *(_QWORD *)v377;
            LOBYTE(v375) = v377[16];
            v132 = v377[23];
            v133 = *(unsigned __int16 *)&v377[21];
            v134 = *(unsigned int *)&v377[17];
            v362 = *(_QWORD *)&v377[24];
            if ( v359 )
              sub_140001660(v317, v359, 1);
            if ( v358 )
              sub_140001660(v343, v358, 1);
            v387 = 0;
            sub_14002F9D0(&v345);
            if ( v363.m512i_i64[6] )
              sub_140001660(v363.m512i_i64[7], v363.m512i_i64[6], 1);
            if ( (__int64)v366 > 0 )
              sub_140001660(*((_QWORD *)&v366 + 1), v366, 1);
            v81 = ((unsigned __int64)((v132 << 16) | v133) << 32) | v134;
            v69 = v376;
            v382 = v376;
            v296 = v342;
            v356 = v83;
            v82 = v131;
            v76 = v375;
            if ( v131 == -2 )
              goto LABEL_135;
          }
          *(_QWORD *)&v335[32] = v69;
          *(_QWORD *)v336 = v296;
          *(_QWORD *)&v336[8] = v83;
          *(_QWORD *)&v336[16] = v316;
          *(_QWORD *)&v337 = v315;
          *((_QWORD *)&v337 + 1) = v295;
          *(_DWORD *)&v335[17] = v81;
          v335[23] = BYTE6(v81);
          v375 = v81;
          *(_WORD *)&v335[21] = WORD2(v81);
          *(_QWORD *)&v335[24] = v362;
          *(_QWORD *)v335 = v82;
          *(_QWORD *)&v335[8] = v380;
          v335[16] = v76;
          v376 = v82;
          if ( v82 != -1 )
          {
            *(_QWORD *)v377 = v296;
            *(_QWORD *)&v377[8] = v83;
            *(_OWORD *)&v377[16] = 0;
            *(_QWORD *)&v377[32] = v296;
            v70 = v83;
            *(_QWORD *)&v377[40] = v83;
            sub_14062D280(&v363, v377);
            if ( v363.m512i_i8[0] == -1 )
            {
              *(_QWORD *)v377 = v363.m512i_i64[1];
              nullsub_1(v84);
              v108 = sub_140001650(30, 1);
              if ( !v108 )
                sub_141938D2B(1, 30);
              v91 = v108;
              *(_OWORD *)(v108 + 14) = *(__int128 *)((char *)&xmmword_141A3B8EB + 14);
              *(__m128i *)v108 = _mm_loadu_si128((const __m128i *)&xmmword_141A3B8EB);
              sub_14002F910(v377);
              v382 = 30;
              v380 = 30;
              goto LABEL_125;
            }
            *(_DWORD *)&v372[4] = v363.m512i_i32[1];
            *(_DWORD *)&v372[1] = *(__int32 *)((char *)v363.m512i_i32 + 1);
            v85 = _mm_loadu_si128((const __m128i *)&v363.m512i_u64[1]);
            v372[0] = v363.m512i_i8[0];
            *(__m128i *)&v372[8] = v85;
            *(_QWORD *)&v372[24] = v363.m512i_i64[3];
            v86 = sub_141642800(v372, aPayloadModel_0, 14);
            if ( v86 )
            {
              if ( *(_BYTE *)v86 == 3 )
              {
                v88 = *(_QWORD *)(v86 + 16);
                v89 = *(_QWORD *)(v86 + 24);
                if ( (v89 != v314 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v86 + 16), v293))
                  && (v89 != v294 || (unsigned int)sub_1418F4B70(v88, v283)) )
                {
                  nullsub_1(v87);
                  v90 = (__m128i *)sub_140001650(36, 1);
                  if ( !v90 )
                    sub_141938D2B(1, 36);
                  v91 = (__int64)v90;
                  qmemcpy(&v90[1], "anged after fallback", 20);
                  *v90 = _mm_loadu_si128((const __m128i *)&xmmword_141A3F791);
                  v382 = 36;
                  v380 = 36;
LABEL_122:
                  sub_14002F9D0(v372);
LABEL_125:
                  sub_1401961F0(v335);
                  v109 = v382;
LABEL_136:
                  v114 = v380;
                  *(_QWORD *)v372 = v380;
                  *(_QWORD *)&v372[8] = v91;
                  *(_QWORD *)&v372[16] = v109;
                  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                  {
                    v363.m512i_i64[0] = (__int64)v369;
                    v363.m512i_i64[1] = (__int64)sub_1400015F0;
                    v363.m512i_i64[2] = (__int64)v372;
                    v363.m512i_i64[3] = (__int64)sub_1400015F0;
                    *(_QWORD *)&v377[48] = 2;
                    *(_QWORD *)&v377[56] = aCodexmateLibCo_35;
                    *(_QWORD *)&v377[64] = 67;
                    *(_QWORD *)&v377[80] = &unk_141A3F4E8;
                    *(_QWORD *)&v377[88] = &v363;
                    *(_QWORD *)v377 = 0;
                    *(_QWORD *)&v377[8] = aCodexmateLibCo_35;
                    *(_OWORD *)&v377[16] = 0x43u;
                    *(_QWORD *)&v377[32] = aSrcCoreRelayCo_1;
                    *(_QWORD *)&v377[40] = 56;
                    *(_QWORD *)&v377[72] = 0x17500000001LL;
                    sub_1414D53A0(&v391, v377);
                    v114 = *(_QWORD *)v372;
                  }
                  ++*((_QWORD *)&v329 + 1);
                  if ( v114 )
                    sub_140001660(*(_QWORD *)&v372[8], v114, 1);
LABEL_71:
                  v71 = v370;
                  if ( v361 )
                    sub_140001660(v341, v361, 1);
                  v36 = v292;
                  if ( v71 )
                    sub_140001660(v371, v71, 1);
                  if ( v355 )
                    sub_140001660(v357, v355, 1);
                  if ( v381 )
                    sub_140001660(v360, v381, 1);
                  v382 = v69;
                  v356 = v70;
                  v47 = v374;
                  goto LABEL_58;
                }
              }
            }
            sub_14023D390((unsigned int)&v363, v371, v313, v315, v295, v296, v70);
            if ( v363.m512i_i32[0] != -1 )
            {
              *(_OWORD *)&v377[80] = v365;
              *(_OWORD *)&v377[64] = v364;
              v107 = _mm_loadu_si128((const __m128i *)&v363);
              *(_OWORD *)&v377[48] = *(_OWORD *)&v363.m512i_u64[6];
              *(_OWORD *)&v377[32] = *(_OWORD *)&v363.m512i_u64[4];
              *(_OWORD *)&v377[16] = *(_OWORD *)&v363.m512i_u64[2];
              *(__m128i *)v377 = v107;
              v351 = (__int64 *)v377;
              v352 = (__int64)sub_14104A7D0;
              sub_1416ABFD0(&v345, &unk_141A3B909, &v351);
              sub_140BAC840(v377);
              v91 = v345.m256i_i64[1];
              v380 = v345.m256i_i64[0];
              v382 = v345.m256i_i64[2];
              goto LABEL_122;
            }
            sub_14002F9D0(v372);
            v83 = v70;
          }
          v116 = v83;
          v115 = v69;
          v306 = _mm_loadu_si128((const __m128i *)&v335[32]);
          v307 = *(_OWORD *)&v336[8];
          v308 = v337;
          v334 = v337;
          v333 = *(_OWORD *)&v336[8];
          v332 = v306;
          v330.m128i_i64[0] = v376;
          v330.m128i_i64[1] = v380;
          *(_QWORD *)&v331 = *(_QWORD *)&v335[16];
          *((_QWORD *)&v331 + 1) = v362;
        }
        else
        {
          v330.m128i_i64[0] = -1;
          v376 = -1;
          v115 = v382;
          v116 = v356;
        }
        v325 = (__int64)v369;
        v326 = (__int64)&off_141A3F368;
        v327[0] = v369 + 3;
        v327[1] = &off_141A3F368;
        sub_140C1AEF0(v377, &v318, aUpdateThreadsS_3, 43);
        if ( *(_DWORD *)v377 == 1 )
        {
          v117 = *(_QWORD *)&v377[8];
          v344 = *(_OWORD *)&v377[16];
          v306 = _mm_loadu_si128((const __m128i *)&v377[32]);
          v307 = *(_OWORD *)&v377[48];
          *(_QWORD *)&v308 = *(_QWORD *)&v377[64];
          goto LABEL_192;
        }
        v119 = _mm_loadu_si128((const __m128i *)&v377[8]);
        *(_OWORD *)&v372[48] = *(_OWORD *)&v377[56];
        *(_OWORD *)&v372[32] = *(_OWORD *)&v377[40];
        *(_OWORD *)&v372[16] = *(_OWORD *)&v377[24];
        *(__m128i *)v372 = v119;
        v120 = sub_1417A9630(*(_QWORD *)&v377[64]);
        v345.m256i_i64[0] = (__int64)&v325;
        if ( !v120 )
        {
          v121 = 1;
          goto LABEL_182;
        }
        sub_140E91D00(&v363, v372, &v345, 1);
        v117 = v363.m512i_i64[0];
        if ( v363.m512i_i64[0] == -1
          && ((v345.m256i_i64[0] = (__int64)v327, v121 = 2, v120 == 1)
           || (sub_140E91D00(&v363, v372, &v345, 2), v117 = v363.m512i_i64[0], v363.m512i_i64[0] == -1)) )
        {
LABEL_182:
          if ( (_DWORD)v121 == v120 )
          {
            v382 = *(_QWORD *)v372;
            v135 = *(_QWORD *)&v372[56];
            v136 = sub_1417AA120(*(_QWORD *)&v372[56]);
            v137 = sub_1417AB3F0(v135);
            if ( v136 == 100 )
            {
              v117 = 0x8000000000000008uLL;
            }
            else if ( v136 == 101 )
            {
              if ( v137 )
              {
                if ( *(_QWORD *)v382 >= 0x7FFFFFFFFFFFFFFFuLL )
                  sub_141938FA0(&off_141A3C2C0);
                v138 = v382;
                ++*(_QWORD *)v382;
                sub_141404710(&v363, *(_QWORD *)(v138 + 16), v137);
                --*(_QWORD *)v382;
                v117 = v363.m512i_i64[0];
                if ( v363.m512i_i64[0] == -1 )
                  sub_141939040(
                    (unsigned int)aCalledResultUn_14,
                    46,
                    (unsigned int)&v391,
                    (unsigned int)&unk_141A3BBA8,
                    (__int64)&off_141A3BD00);
                goto LABEL_220;
              }
              if ( *(_QWORD *)v382 >= 0x7FFFFFFFFFFFFFFFuLL )
                sub_141938FA0(&off_141A3BCE8);
              v145 = (_QWORD *)v382;
              ++*(_QWORD *)v382;
              *(_QWORD *)&v344 = sub_1417A3A00(v145[2]);
              --*v145;
              v117 = -1;
            }
            else
            {
              if ( *(_QWORD *)v382 >= 0x7FFFFFFFFFFFFFFFuLL )
                sub_141938FA0(&off_141A3C2C0);
              v144 = v382;
              ++*(_QWORD *)v382;
              sub_141404710(&v363, *(_QWORD *)(v144 + 16), v136);
              --*(_QWORD *)v382;
              v117 = v363.m512i_i64[0];
              if ( v363.m512i_i64[0] == -1 )
                sub_141939040(
                  (unsigned int)aCalledResultUn_14,
                  46,
                  (unsigned int)&v391,
                  (unsigned int)&unk_141A3BBA8,
                  (__int64)&off_141A3BD18);
LABEL_220:
              v344 = *(_OWORD *)&v363.m512i_u64[1];
              v306 = _mm_loadu_si128((const __m128i *)&v363.m512i_u64[3]);
              v307 = *(_OWORD *)&v363.m512i_u64[5];
              *(_QWORD *)&v308 = v363.m512i_i64[7];
            }
LABEL_191:
            sub_140BAAAF0(v372);
LABEL_192:
            if ( v117 == -1 )
            {
              ++v328.m128i_i64[0];
              v386 = 1;
              sub_1416AC440(v377, v369);
              v386 = 1;
              sub_1403AAB80(&v309, v377);
              if ( v376 != -1 )
                goto LABEL_205;
            }
            else
            {
              *(_QWORD *)v335 = v117;
              *(_OWORD *)&v335[8] = v344;
              *(_QWORD *)&v336[16] = v308;
              v140 = _mm_load_si128(&v306);
              *(_OWORD *)v336 = v307;
              *(__m128i *)&v335[24] = v140;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v363.m512i_i64[0] = (__int64)v369;
                v363.m512i_i64[1] = (__int64)sub_1400015F0;
                v363.m512i_i64[2] = (__int64)v335;
                v363.m512i_i64[3] = (__int64)sub_141404740;
                *(_QWORD *)v377 = aCodexmateLibCo_35;
                *(_QWORD *)&v377[8] = 67;
                *(_QWORD *)&v377[16] = aCodexmateLibCo_35;
                *(_QWORD *)&v377[24] = 67;
                *(_QWORD *)&v377[32] = &off_141A3F428;
                v383 = 1;
                sub_140BAD520(&unk_141A3F3B3, &v363, 2, v377);
              }
              ++*((_QWORD *)&v329 + 1);
              if ( v376 == -1 )
              {
                v143 = 1;
              }
              else
              {
                *(_OWORD *)&v372[64] = v334;
                v141 = _mm_loadu_si128(&v330);
                *(_OWORD *)&v372[48] = v333;
                *(__m128i *)&v372[32] = v332;
                *(_OWORD *)&v372[16] = v331;
                *(__m128i *)v372 = v141;
                sub_1402555D0(&v363, v372, 1);
                if ( v363.m512i_i32[0] != -1 )
                {
                  *(_OWORD *)&v377[80] = v365;
                  *(_OWORD *)&v377[64] = v364;
                  v142 = _mm_loadu_si128((const __m128i *)&v363);
                  *(_OWORD *)&v377[48] = *(_OWORD *)&v363.m512i_u64[6];
                  *(_OWORD *)&v377[32] = *(_OWORD *)&v363.m512i_u64[4];
                  *(_OWORD *)&v377[16] = *(_OWORD *)&v363.m512i_u64[2];
                  *(__m128i *)v377 = v142;
                  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                  {
                    v351 = v369;
                    v352 = (__int64)sub_1400015F0;
                    v353 = (__int64)v377;
                    v354 = sub_14104A7D0;
                    v345.m256i_i64[0] = (__int64)aCodexmateLibCo_35;
                    v345.m256i_i64[1] = 67;
                    v345.m256i_i64[2] = (__int64)aCodexmateLibCo_35;
                    v345.m256i_i64[3] = 67;
                    *(_QWORD *)&v346 = &off_141A3F4D0;
                    sub_140BAD520(&unk_141A3F483, &v351, 2, &v345);
                  }
                  sub_140BAC840(v377);
                }
                sub_1401961F0(v372);
                v143 = 0;
              }
              v386 = v143;
              sub_140BAA960(v335);
              if ( ((unsigned __int8)v143 & (v376 != -1)) != 0 )
LABEL_205:
                sub_1401961F0(&v330);
            }
            if ( v361 )
              sub_140001660(v341, v361, 1);
            if ( v370 )
              sub_140001660(v371, v370, 1);
            if ( v355 )
              sub_140001660(v357, v355, 1);
            if ( v381 )
              sub_140001660(v360, v381, 1);
            v382 = v115;
            v356 = v116;
            v36 = v292;
            v47 = v374;
            goto LABEL_58;
          }
          *((_QWORD *)&v344 + 1) = v120;
          v117 = 0x8000000000000013uLL;
        }
        else
        {
          v122 = *(_OWORD *)&v363.m512i_u64[1];
          *((_QWORD *)&v344 + 1) = v122 >> 64;
          v121 = v122;
          *(__m128i *)v335 = _mm_loadu_si128((const __m128i *)&v363.m512i_u64[3]);
          *(_OWORD *)&v335[16] = *(_OWORD *)&v363.m512i_u64[5];
          *(_QWORD *)&v335[32] = v363.m512i_i64[7];
        }
        *(_QWORD *)&v308 = *(_QWORD *)&v335[32];
        v139 = _mm_load_si128((const __m128i *)v335);
        v307 = *(_OWORD *)&v335[16];
        v306 = v139;
        *(_QWORD *)&v344 = v121;
        goto LABEL_191;
      }
      v323 = *(_OWORD *)&v377[80];
      v322 = *(_OWORD *)&v377[64];
      v46 = _mm_loadu_si128((const __m128i *)v377);
      v321 = *(_OWORD *)&v377[48];
      v320 = *(_OWORD *)&v377[32];
      v319 = *(_OWORD *)&v377[16];
      v318 = v46;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        sub_140230350(v299, v385, v41);
        *(_QWORD *)v372 = v299;
        *(_QWORD *)&v372[8] = sub_1400015F0;
        *(_QWORD *)&v372[16] = &v318;
        *(_QWORD *)&v372[24] = sub_14104A7D0;
        v363.m512i_i64[6] = 2;
        v363.m512i_i64[7] = (__int64)aCodexmateLibCo_35;
        *(_QWORD *)&v364 = 67;
        *(_QWORD *)&v365 = &unk_141A3F5A7;
        *((_QWORD *)&v365 + 1) = v372;
        v363.m512i_i64[0] = 0;
        v363.m512i_i64[1] = (__int64)aCodexmateLibCo_35;
        *(_OWORD *)&v363.m512i_u64[2] = 0x43u;
        v363.m512i_i64[4] = (__int64)aSrcCoreRelayCo_1;
        v363.m512i_i64[5] = 56;
        *((_QWORD *)&v364 + 1) = 0x12900000001LL;
        sub_1414D53A0(&v391, &v363);
        if ( *(_QWORD *)v299 )
          sub_140001660(*(_QWORD *)&v299[8], *(_QWORD *)v299, 1);
      }
      ++*((_QWORD *)&v329 + 1);
      sub_140BAC840(&v318);
LABEL_224:
      v39 = v384;
      if ( v384 )
LABEL_225:
        sub_140001660(v385, v39, 1);
      goto LABEL_29;
    }
    if ( (v377[8] & 3u) - 2 >= 2 && (v377[8] & 3) != 0 )
    {
      --*(_QWORD *)&v377[8];
      v377[0] = 3;
      sub_1416BCB00(&v377[8]);
    }
    v37 -= 32LL;
    _RBX += 32LL;
    v39 = v384;
    if ( v384 )
      goto LABEL_225;
  }
  if ( (const __m128i *)v35 != ii )
  {
    v146 = v37 >> 5;
    do
    {
      v147 = *(_QWORD *)(_RBX - 8);
      if ( v147 )
        sub_140001660(*(_QWORD *)_RBX, v147, 1);
      _RBX += 32LL;
      --v146;
    }
    while ( v146 );
  }
LABEL_232:
  if ( v350 )
    sub_140001660(v312, 32 * v350, 8);
  *(_QWORD *)v335 = 0;
  *(_QWORD *)&v335[8] = 8;
  *(_QWORD *)&v335[16] = 0;
  v148 = v297.m128i_i64[1];
  v350 = v298;
  v384 = v297.m128i_i64[1] + 80 * v298;
  v312 = v297.m128i_i64[1];
  if ( v297.m128i_i64[1] != v384 )
  {
    do
    {
      while ( 1 )
      {
        v149 = v148 + 80;
        if ( *((_QWORD *)&v310 + 1) )
          break;
LABEL_246:
        v161 = *(_DWORD *)(v148 + 72) + 1;
        if ( *(_DWORD *)(v148 + 72) == -1 )
          v161 = -1;
        v330.m128i_i32[0] = v161;
        if ( v161 <= 9 )
        {
          v388 = 1;
          sub_1416AC440(v299, v148);
          sub_1416AC440(v372, v148 + 24);
          sub_1416AC440(&v318, v148 + 48);
          v363.m512i_i64[2] = *(_QWORD *)&v299[16];
          *(_OWORD *)v363.m512i_i8 = *(_OWORD *)v299;
          v363.m512i_i64[5] = *(_QWORD *)&v372[16];
          *(_OWORD *)&v363.m512i_u64[3] = *(_OWORD *)v372;
          *(_QWORD *)&v364 = v319;
          *(__m128i *)&v363.m512i_u64[6] = v318;
          *(_QWORD *)&v377[16] = *(_QWORD *)&v299[16];
          *(_OWORD *)v377 = *(_OWORD *)v299;
          *(_QWORD *)&v377[40] = *(_QWORD *)&v372[16];
          *(_OWORD *)&v377[24] = *(_OWORD *)v372;
          *(_QWORD *)&v377[64] = v319;
          *(__m128i *)&v377[48] = v318;
          *(_DWORD *)&v377[72] = v330.m128i_i32[0];
          v162 = *(_QWORD *)&v335[16];
          if ( *(_QWORD *)&v335[16] == *(_QWORD *)v335 )
            sub_14190F6C0(v335);
          v163 = *(_QWORD *)&v335[8];
          v164 = 80 * v162;
          *(_OWORD *)(*(_QWORD *)&v335[8] + v164 + 64) = *(_OWORD *)&v377[64];
          v165 = _mm_load_si128((const __m128i *)v377);
          v166 = *(_OWORD *)&v377[16];
          v167 = *(_OWORD *)&v377[32];
          *(_OWORD *)(v163 + v164 + 48) = *(_OWORD *)&v377[48];
          *(_OWORD *)(v163 + v164 + 32) = v167;
          *(_OWORD *)(v163 + v164 + 16) = v166;
          *(__m128i *)(v163 + v164) = v165;
          *(_QWORD *)&v335[16] = v162 + 1;
          v148 += 80;
          if ( v149 == v384 )
            goto LABEL_256;
        }
        else
        {
          if ( *(_QWORD *)off_1421E6EC0 >= 3u )
          {
            v363.m512i_i64[0] = v148;
            v363.m512i_i64[1] = (__int64)sub_1400015F0;
            v363.m512i_i64[2] = (__int64)&v330;
            v363.m512i_i64[3] = (__int64)sub_1416BBD00;
            *(_QWORD *)&v377[48] = 3;
            *(_QWORD *)&v377[56] = aCodexmateLibCo_35;
            *(_QWORD *)&v377[64] = 67;
            *(_QWORD *)&v377[80] = &unk_141A3F68F;
            *(_QWORD *)&v377[88] = &v363;
            *(_QWORD *)v377 = 0;
            *(_QWORD *)&v377[8] = aCodexmateLibCo_35;
            *(_OWORD *)&v377[16] = 0x43u;
            *(_QWORD *)&v377[32] = aSrcCoreRelayCo_1;
            *(_QWORD *)&v377[40] = 56;
            *(_QWORD *)&v377[72] = 0xF500000001LL;
            v388 = 1;
            sub_1414D53A0(&v391, v377);
          }
          v148 += 80;
          if ( v149 == v384 )
            goto LABEL_256;
        }
      }
      v388 = 1;
      v150 = sub_140D2AC70(v311, v148);
      _RCX = v150 >> 57;
      v152 = v309.m128i_i64[1];
      ii = (const __m128i *)v309.m128i_i64[0];
      v153 = _mm_cvtsi32_si128(v150 >> 57);
      v154 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v153, v153), 0), 68);
      v155 = *(_QWORD *)(v148 + 8);
      v156 = *(_QWORD *)(v148 + 16);
      for ( m = nullptr; ; m += 2 )
      {
        v158 = v152 & v150;
        v159 = _mm_loadu_si128((const __m128i *)((char *)ii + v158));
        _RBX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v159, v154));
        if ( (_DWORD)_RBX )
          break;
LABEL_244:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v159, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_246;
        v150 = (unsigned __int64)m + v158 + 16;
      }
      v385 = v158;
      v374 = m;
      while ( 1 )
      {
        __asm { tzcnt   ecx, ebx }
        _RCX = -(__int64)(v152 & (v158 + _RCX));
        if ( v156 == ii->m128i_i64[3 * _RCX - 1] && !(unsigned int)sub_1418F4B70(v155, ii[-1].m128i_i64[3 * _RCX]) )
          break;
        v160 = _RBX - 1;
        LOWORD(v160) = _RBX & (_RBX - 1);
        v53 = (_WORD)v160 == 0;
        _RBX = v160;
        v158 = v385;
        m = v374;
        if ( v53 )
          goto LABEL_244;
      }
      v148 += 80;
    }
    while ( v149 != v384 );
  }
LABEL_256:
  v388 = 1;
  sub_1416828D0((unsigned int)v299, v290, v291, (unsigned int)&unk_141A3F614, 25);
  if ( !*(_QWORD *)&v335[16] )
  {
    v171 = *(_QWORD *)&v299[8];
    v390 = 1;
    v172 = sub_141695140(*(_QWORD *)&v299[8], *(_QWORD *)&v299[16]);
    HIDWORD(v175) = HIDWORD(v172);
    v176 = 1;
    if ( v172 )
    {
      *(_QWORD *)v372 = v172;
      switch ( v172 & 3 )
      {
        case 0uLL:
          LOBYTE(v175) = *(_BYTE *)(v172 + 16);
          break;
        case 1uLL:
          LOBYTE(v175) = *(_BYTE *)(v172 + 31);
          break;
        case 2uLL:
          v182 = sub_1416B3F10(v174, v173);
          LOBYTE(v175) = (*(__int64 (__fastcall **)(_QWORD))(v182 + 8))(HIDWORD(v175));
          break;
        case 3uLL:
          v175 = HIDWORD(v172);
          break;
      }
      if ( (_BYTE)v175 )
      {
        v318.m128i_i64[0] = (__int64)asc_141A3F6D3;
        v318.m128i_i64[1] = 12;
        v363.m512i_i64[0] = (__int64)&v318;
        v363.m512i_i64[1] = (__int64)sub_140186EE0;
        sub_1416ABFD0(&v377[8], &unk_141A3F293, &v363);
        *(_QWORD *)v377 = 10;
        v183 = v349;
        v349[5] = *(_OWORD *)&v377[80];
        v184 = _mm_loadu_si128((const __m128i *)&v377[16]);
        v185 = *(_OWORD *)&v377[32];
        v186 = *(_OWORD *)&v377[48];
        v183[4] = *(_OWORD *)&v377[64];
        v183[3] = v186;
        v183[2] = v185;
        v183[1] = v184;
        *v183 = *(_OWORD *)v377;
        v390 = 1;
        sub_140032B80(v372);
        if ( *(_QWORD *)v299 )
          sub_140001660(v171, *(_QWORD *)v299, 1);
        HIDWORD(_RAX) = (unsigned __int64)sub_140623C20(v335) >> 32;
        goto LABEL_372;
      }
      v390 = 1;
      sub_140032B80(v372);
    }
    goto LABEL_276;
  }
  *(_QWORD *)&v372[16] = *(_QWORD *)&v335[16];
  *(__m128i *)v372 = _mm_loadu_si128((const __m128i *)v335);
  *(_DWORD *)&v372[24] = 1;
  nullsub_1(v168);
  v169 = (_BYTE *)sub_140001650(128, 1);
  if ( !v169 )
    sub_141938D2B(1, 128);
  v318.m128i_i64[0] = 128;
  v318.m128i_i64[1] = (__int64)v169;
  *(_QWORD *)v377 = &v318;
  *(_QWORD *)&v377[8] = asc_141A39010;
  *(_QWORD *)&v377[16] = 2;
  *(_QWORD *)&v377[24] = 1;
  v377[32] = 0;
  *v169 = 123;
  *(_QWORD *)&v319 = 1;
  v345.m256i_i16[0] = 256;
  v345.m256i_i64[1] = (__int64)v377;
  sub_140BFA250(&v345, &unk_141A3A95D, 7, &v372[24]);
  v170 = *(_QWORD *)&v372[16];
  v381 = *(_QWORD *)&v372[8];
  if ( v345.m256i_i8[0] )
  {
LABEL_355:
    v232 = sub_141934E70();
    if ( v318.m128i_i64[0] )
      sub_140001660(v318.m128i_i64[1], v318.m128i_i64[0], 1);
    goto LABEL_357;
  }
  v385 = v345.m256i_i64[1];
  v177 = *(_QWORD **)v345.m256i_i64[1];
  if ( v345.m256i_i8[1] == 1 )
    sub_1403B45A0(v177, asc_141A3ABD1, 1);
  else
    sub_1403B45A0(*(_QWORD *)v345.m256i_i64[1], asc_141A3ABD5, 2);
  v179 = *(_QWORD *)(v385 + 24);
  if ( v179 )
  {
    v180 = *(const __m128i **)(v385 + 8);
    _RBX = *(_QWORD *)(v385 + 16);
    ii = (const __m128i *)v177[2];
    for ( n = 0; n != v179; ++n )
    {
      if ( _RBX > *v177 - (_QWORD)ii )
      {
        sub_14190D590((_DWORD)v177, (_DWORD)ii, _RBX, 1, 1);
        ii = (const __m128i *)v177[2];
      }
      else if ( !_RBX )
      {
        goto LABEL_306;
      }
      sub_1418F44E0((__m128i *)((char *)ii + v177[1]), v180, _RBX);
LABEL_306:
      ii = (const __m128i *)((char *)ii + _RBX);
      v177[2] = ii;
    }
  }
  sub_140BAD6C0(v385, v178, &unk_141A3A964, 7);
  v207 = v385;
  v208 = *(_QWORD *)v385;
  v209 = *(_QWORD *)(*(_QWORD *)v385 + 16LL);
  if ( (unsigned __int64)(**(_QWORD **)v385 - v209) <= 1 )
  {
    sub_14190D590(v208, v209, 2, 1, 1);
    v209 = *(_QWORD *)(v208 + 16);
    v207 = v385;
  }
  *(_WORD *)(*(_QWORD *)(v208 + 8) + v209) = 8250;
  *(_QWORD *)(v208 + 16) = v209 + 2;
  v210 = *(_QWORD **)v207;
  v211 = *(_QWORD *)(v207 + 24);
  *(_QWORD *)(v207 + 24) = v211 + 1;
  *(_BYTE *)(v207 + 32) = 0;
  v212 = v210[2];
  if ( *v210 == v212 )
  {
    sub_14190D590((_DWORD)v210, v212, 1, 1, 1);
    v212 = v210[2];
    v207 = v385;
  }
  *(_BYTE *)(v210[1] + v212) = 91;
  v210[2] = v212 + 1;
  if ( !v170 )
  {
    *(_QWORD *)(v207 + 24) = v211;
    goto LABEL_399;
  }
  v374 = (_QWORD *)(v381 + 80 * v170);
  v213 = 1;
  v384 = v381;
  while ( 2 )
  {
    v216 = *(_QWORD **)v207;
    if ( (v213 & 1) != 0 )
    {
      v217 = v216[2];
      if ( *v216 == v217 )
      {
        sub_14190D590((_DWORD)v216, v217, 1, 1, 1);
        v217 = v216[2];
        v207 = v385;
      }
      *(_BYTE *)(v216[1] + v217) = 10;
      _RBX = v217 + 1;
      v216[2] = _RBX;
      v218 = *(const __m128i **)(v207 + 24);
      if ( !v218 )
        goto LABEL_329;
    }
    else
    {
      v221 = v216[2];
      if ( (unsigned __int64)(*v216 - v221) <= 1 )
      {
        sub_14190D590((_DWORD)v216, v221, 2, 1, 1);
        v221 = v216[2];
        v207 = v385;
      }
      *(_WORD *)(v216[1] + v221) = 2604;
      _RBX = v221 + 2;
      v216[2] = _RBX;
      v218 = *(const __m128i **)(v207 + 24);
      if ( !v218 )
      {
LABEL_329:
        v222 = 1;
        v223 = v207;
        goto LABEL_337;
      }
    }
    v219 = *(const __m128i **)(v207 + 8);
    v220 = *(_QWORD *)(v207 + 16);
    for ( ii = nullptr; ii != v218; ii = (const __m128i *)((char *)ii + 1) )
    {
      if ( v220 > *v216 - _RBX )
      {
        sub_14190D590((_DWORD)v216, _RBX, v220, 1, 1);
        _RBX = v216[2];
LABEL_331:
        sub_1418F44E0((__m128i *)(_RBX + v216[1]), v219, v220);
        goto LABEL_332;
      }
      if ( v220 )
        goto LABEL_331;
LABEL_332:
      _RBX += v220;
      v216[2] = _RBX;
    }
    v223 = v385;
    v222 = *(_QWORD *)(v385 + 24) + 1LL;
LABEL_337:
    v224 = *(_QWORD **)v223;
    *(_QWORD *)(v223 + 24) = v222;
    *(_BYTE *)(v223 + 32) = 0;
    v225 = v224[2];
    if ( *v224 == v225 )
    {
      sub_14190D590((_DWORD)v224, v225, 1, 1, 1);
      v225 = v224[2];
      v223 = v385;
    }
    *(_BYTE *)(v224[1] + v225) = 123;
    v224[2] = v225 + 1;
    v330.m128i_i16[0] = 256;
    v330.m128i_i64[1] = v223;
    sub_140BF62F0(&v330, aThreadId_1, 9, v384);
    if ( v330.m128i_i8[0] )
      goto LABEL_355;
    sub_140BF62F0(&v330, aOriginalModel_0, 14, v384 + 24);
    if ( v330.m128i_i8[0] )
      goto LABEL_355;
    sub_140BF62F0(&v330, aFallbackModel_0, 14, v384 + 48);
    if ( v330.m128i_i8[0] )
      goto LABEL_355;
    sub_140BFA250(&v330, aAttempts_0, 8, v384 + 72);
    if ( !v330.m128i_i8[0] && v330.m128i_i8[1] )
    {
      v226 = v330.m128i_i64[1];
      v227 = *(_QWORD **)v330.m128i_i64[1];
      v228 = *(_QWORD *)(v330.m128i_i64[1] + 24) - 1LL;
      *(_QWORD *)(v330.m128i_i64[1] + 24) = v228;
      if ( *(_BYTE *)(v226 + 32) )
      {
        v229 = v227[2];
        if ( *v227 == v229 )
        {
          sub_14190D590((_DWORD)v227, v229, 1, 1, 1);
          v229 = v227[2];
        }
        *(_BYTE *)(v227[1] + v229) = 10;
        v214 = v229 + 1;
        v227[2] = v214;
        if ( v228 )
        {
          ii = *(const __m128i **)(v226 + 8);
          v230 = *(_QWORD *)(v226 + 16);
          for ( jj = 0; jj != v228; ++jj )
          {
            if ( v230 > *v227 - v214 )
            {
              sub_14190D590((_DWORD)v227, v214, v230, 1, 1);
              v214 = v227[2];
            }
            else if ( !v230 )
            {
              goto LABEL_351;
            }
            sub_1418F44E0((__m128i *)(v214 + v227[1]), ii, v230);
LABEL_351:
            v214 += v230;
            v227[2] = v214;
          }
        }
      }
      else
      {
        v214 = v227[2];
      }
      if ( *v227 == v214 )
      {
        sub_14190D590((_DWORD)v227, v214, 1, 1, 1);
        v214 = v227[2];
      }
      *(_BYTE *)(v227[1] + v214) = 125;
      _RBX = v214 + 1;
      v227[2] = _RBX;
    }
    v215 = v384 + 80;
    v207 = v385;
    *(_BYTE *)(v385 + 32) = 1;
    v213 = 0;
    v384 = v215;
    if ( (_QWORD *)v215 != v374 )
      continue;
    break;
  }
  v210 = *(_QWORD **)v207;
  v267 = *(_QWORD *)(v207 + 24) - 1LL;
  *(_QWORD *)(v207 + 24) = v267;
  sub_1403B45A0(v210, asc_141A3ABD1, 1);
  if ( v267 )
  {
    v268 = *(const __m128i **)(v385 + 8);
    _RBX = *(_QWORD *)(v385 + 16);
    ii = (const __m128i *)v210[2];
    for ( kk = 0; kk != v267; ++kk )
    {
      if ( _RBX > *v210 - (_QWORD)ii )
      {
        sub_14190D590((_DWORD)v210, (_DWORD)ii, _RBX, 1, 1);
        ii = (const __m128i *)v210[2];
      }
      else if ( !_RBX )
      {
        goto LABEL_422;
      }
      sub_1418F44E0((__m128i *)((char *)ii + v210[1]), v268, _RBX);
LABEL_422:
      ii = (const __m128i *)((char *)ii + _RBX);
      v210[2] = ii;
    }
  }
LABEL_399:
  sub_1403B45A0(v210, asc_141A3ABD7, 1);
  v259 = v385;
  *(_BYTE *)(v385 + 32) = 1;
  v260 = *(_QWORD **)v259;
  v261 = *(_QWORD *)(v259 + 24) - 1LL;
  *(_QWORD *)(v259 + 24) = v261;
  sub_1403B45A0(v260, asc_141A3ABD1, 1);
  if ( v261 )
  {
    v262 = *(const __m128i **)(v385 + 8);
    _RBX = *(_QWORD *)(v385 + 16);
    ii = (const __m128i *)v260[2];
    for ( mm = 0; mm != v261; ++mm )
    {
      if ( _RBX > *v260 - (_QWORD)ii )
      {
        sub_14190D590((_DWORD)v260, (_DWORD)ii, _RBX, 1, 1);
        ii = (const __m128i *)v260[2];
      }
      else if ( !_RBX )
      {
        goto LABEL_402;
      }
      sub_1418F44E0((__m128i *)((char *)ii + v260[1]), v262, _RBX);
LABEL_402:
      ii = (const __m128i *)((char *)ii + _RBX);
      v260[2] = ii;
    }
  }
  sub_1403B45A0(v260, asc_141A3ABD2, 1);
  v232 = v318.m128i_i64[1];
  if ( v318.m128i_i64[0] == -1 )
  {
LABEL_357:
    v345.m256i_i64[0] = v232;
    v330.m128i_i64[0] = (__int64)asc_141A3B8B8;
    v330.m128i_i64[1] = 12;
    v318.m128i_i64[0] = (__int64)&v330;
    v318.m128i_i64[1] = (__int64)sub_140186EE0;
    sub_1416ABFD0(&v377[8], &unk_141A3F293, &v318);
    sub_14002F910(&v345);
    v233 = *(_QWORD *)&v377[8];
    ii = *(const __m128i **)&v377[24];
    _RBX = *(_QWORD *)&v377[16];
    *(_OWORD *)v363.m512i_i8 = *(_OWORD *)&v377[32];
    *(_OWORD *)&v363.m512i_u64[2] = *(_OWORD *)&v377[48];
    *(_OWORD *)&v363.m512i_u64[4] = *(_OWORD *)&v377[64];
    *(__m128i *)&v363.m512i_u64[6] = _mm_loadu_si128((const __m128i *)&v377[80]);
LABEL_358:
    v234 = 10;
LABEL_359:
    v235 = _mm_load_si128((const __m128i *)&v363);
    v236 = *(_OWORD *)&v363.m512i_u64[2];
    v237 = *(_OWORD *)&v363.m512i_u64[4];
    v238 = v349;
    v349[5] = *(_OWORD *)&v363.m512i_u64[6];
    v238[4] = v237;
    v238[3] = v236;
    v238[2] = v235;
    *(_QWORD *)v238 = v234;
    *((_QWORD *)v238 + 1) = v233;
    *((_QWORD *)v238 + 2) = _RBX;
    *((_QWORD *)v238 + 3) = ii;
    if ( v170 )
    {
      v239 = (_QWORD *)(v381 + 56);
      do
      {
        v240 = *(v239 - 7);
        if ( v240 )
          sub_140001660(*(v239 - 6), v240, 1);
        v241 = *(v239 - 4);
        if ( v241 )
          sub_140001660(*(v239 - 3), v241, 1);
        v242 = *(v239 - 1);
        if ( v242 )
          sub_140001660(*v239, v242, 1);
        v239 += 10;
        --v170;
      }
      while ( v170 );
    }
    HIDWORD(_RAX) = *(_DWORD *)&v372[4];
    if ( *(_QWORD *)v372 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v381, 80LL * *(_QWORD *)v372, 8) >> 32;
    if ( *(_QWORD *)v299 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(*(_QWORD *)&v299[8], *(_QWORD *)v299, 1) >> 32;
LABEL_372:
    v243 = v309.m128i_i64[1];
    if ( v309.m128i_i64[1] )
    {
      v244 = *((_QWORD *)&v310 + 1);
      if ( *((_QWORD *)&v310 + 1) )
      {
        v245 = v309.m128i_i64[0];
        v246 = (const __m128i *)(v309.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v309.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v248 = _mm_load_si128(v246);
              v245 -= 384;
              ++v246;
              _R15D = _mm_movemask_epi8(v248) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v249 = -3 * _RAX;
          v250 = *(_QWORD *)(v245 + 8 * v249 - 24);
          if ( v250 )
            sub_140001660(*(_QWORD *)(v245 + 8 * v249 - 16), v250, 1);
          --v244;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v244 );
      }
      v251 = (24 * v243 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v252 = v251 + v243 + 17;
      if ( v252 )
        sub_140001660(v309.m128i_i64[0] - v251, v252, 16);
    }
    if ( v338 )
      sub_140001660(v339, 8 * v338, 8);
    sub_1401962C0(&v273);
    goto LABEL_385;
  }
  v384 = v318.m128i_i64[1];
  v385 = v318.m128i_i64[0];
  v264 = v319;
  if ( (unsigned __int64)v319 > 0x800000 )
  {
    v330.m128i_i64[0] = (__int64)asc_141A3F62D;
    v330.m128i_i64[1] = 18;
    v318.m128i_i64[0] = (__int64)&v330;
    v318.m128i_i64[1] = (__int64)sub_140186EE0;
    sub_1416ABFD0(&v377[8], &unk_141A3F293, &v318);
    v233 = *(_QWORD *)&v377[8];
    ii = *(const __m128i **)&v377[24];
    _RBX = *(_QWORD *)&v377[16];
    *(_OWORD *)v363.m512i_i8 = *(_OWORD *)&v377[32];
    *(_OWORD *)&v363.m512i_u64[2] = *(_OWORD *)&v377[48];
    *(_OWORD *)&v363.m512i_u64[4] = *(_OWORD *)&v377[64];
    *(__m128i *)&v363.m512i_u64[6] = _mm_loadu_si128((const __m128i *)&v377[80]);
    v234 = 10;
    if ( v385 )
      sub_140001660(v384, v385, 1);
    goto LABEL_359;
  }
  sub_1416828D0((unsigned int)&v318, v290, v291, (unsigned int)&unk_141A3F614, 25);
  v374 = (_QWORD *)v318.m128i_i64[1];
  v265 = sub_140222E10(v318.m128i_i64[1], v319, v384, v264);
  v233 = v266;
  if ( v265 == 1 )
  {
    v306.m128i_i64[0] = v266;
    v345.m256i_i64[0] = (__int64)asc_141A3B8DF;
    v345.m256i_i64[1] = 12;
    v330.m128i_i64[0] = (__int64)&v345;
    v330.m128i_i64[1] = (__int64)sub_140186EE0;
    sub_1416ABFD0(&v377[8], &unk_141A3F293, &v330);
    if ( (unsigned int)(v233 & 3) - 2 >= 2 && (v233 & 3) != 0 )
    {
      v330.m128i_i64[1] = v233 - 1;
      v330.m128i_i8[0] = 3;
      sub_1416BCB00(&v330.m128i_u64[1]);
    }
    v233 = *(_QWORD *)&v377[8];
    ii = *(const __m128i **)&v377[24];
    _RBX = *(_QWORD *)&v377[16];
    *(_OWORD *)v363.m512i_i8 = *(_OWORD *)&v377[32];
    *(_OWORD *)&v363.m512i_u64[2] = *(_OWORD *)&v377[48];
    *(_OWORD *)&v363.m512i_u64[4] = *(_OWORD *)&v377[64];
    *(__m128i *)&v363.m512i_u64[6] = _mm_loadu_si128((const __m128i *)&v377[80]);
    if ( v385 )
      sub_140001660(v384, v385, 1);
    if ( v318.m128i_i64[0] )
      sub_140001660(v374, v318.m128i_i64[0], 1);
    goto LABEL_358;
  }
  v270 = sub_1401BD880(v266);
  v271 = v270;
  if ( v270 )
  {
    v306.m128i_i64[0] = v270;
    v345.m256i_i64[0] = (__int64)asc_141A3B8C4;
    v345.m256i_i64[1] = 27;
    v330.m128i_i64[0] = (__int64)&v345;
    v330.m128i_i64[1] = (__int64)sub_140186EE0;
    sub_1416ABFD0(&v377[8], &unk_141A3F293, &v330);
    if ( (unsigned int)(v271 & 3) - 2 >= 2 && (v271 & 3) != 0 )
    {
      v330.m128i_i64[1] = v271 - 1;
      v330.m128i_i8[0] = 3;
      sub_1416BCB00(&v330.m128i_u64[1]);
    }
    v233 = *(_QWORD *)&v377[8];
    ii = *(const __m128i **)&v377[24];
    _RBX = *(_QWORD *)&v377[16];
    *(_OWORD *)v363.m512i_i8 = *(_OWORD *)&v377[32];
    *(_OWORD *)&v363.m512i_u64[2] = *(_OWORD *)&v377[48];
    *(_OWORD *)&v363.m512i_u64[4] = *(_OWORD *)&v377[64];
    *(__m128i *)&v363.m512i_u64[6] = _mm_loadu_si128((const __m128i *)&v377[80]);
    v234 = 10;
  }
  else
  {
    v234 = -1;
  }
  if ( v385 )
    sub_140001660(v384, v385, 1);
  if ( v318.m128i_i64[0] )
    sub_140001660(v374, v318.m128i_i64[0], 1);
  if ( v271 )
    goto LABEL_359;
  sub_1403FC370(v372);
  if ( *(_QWORD *)v372 )
    sub_140001660(v381, 80LL * *(_QWORD *)v372, 8);
  v176 = 0;
LABEL_276:
  *(_QWORD *)v377 = &v328;
  *(_QWORD *)&v377[8] = sub_1416BCB10;
  *(_QWORD *)&v377[16] = &v328.m128i_i64[1];
  *(_QWORD *)&v377[24] = sub_1416BCB10;
  *(_QWORD *)&v377[32] = &v329;
  *(_QWORD *)&v377[40] = sub_1416BCB10;
  *(_QWORD *)&v377[48] = (char *)&v329 + 8;
  *(_QWORD *)&v377[56] = sub_1416BCB10;
  v390 = v176;
  sub_1416ABFD0(v272, &unk_141A3F6DF, v377);
  v390 = v176;
  sub_14019B500((unsigned int)aRelayModelRest, 19, (unsigned int)aDone_3, 4, (__int64)v272);
  v188 = _mm_load_si128(&v328);
  _RAX = (unsigned __int64)v349;
  *(_OWORD *)((char *)v349 + 24) = v329;
  *(__m128i *)(_RAX + 8) = v188;
  *(_QWORD *)_RAX = -1;
  if ( *(_QWORD *)v299 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(*(_QWORD *)&v299[8], *(_QWORD *)v299, 1) >> 32;
  if ( v176 )
  {
    sub_1403FC370(v335);
    HIDWORD(_RAX) = *(_DWORD *)&v335[4];
    if ( *(_QWORD *)v335 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(*(_QWORD *)&v335[8], 80LL * *(_QWORD *)v335, 8) >> 32;
  }
  v190 = v309.m128i_i64[1];
  if ( v309.m128i_i64[1] )
  {
    v191 = *((_QWORD *)&v310 + 1);
    if ( *((_QWORD *)&v310 + 1) )
    {
      v192 = v309.m128i_i64[0];
      v193 = (const __m128i *)(v309.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v309.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v195 = _mm_load_si128(v193);
            v192 -= 384;
            ++v193;
            _R15D = _mm_movemask_epi8(v195) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v196 = -3LL * _RAX;
        v197 = *(_QWORD *)(v192 + 8 * v196 - 24);
        if ( v197 )
          sub_140001660(*(_QWORD *)(v192 + 8 * v196 - 16), v197, 1);
        --v191;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v191 );
    }
    v198 = (24 * v190 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v199 = v198 + v190 + 17;
    if ( v199 )
      sub_140001660(v309.m128i_i64[0] - v198, v199, 16);
  }
  if ( v338 )
    sub_140001660(v339, 8 * v338, 8);
  sub_1401962C0(&v273);
  v200 = v312;
  if ( v350 )
  {
    v201 = (_QWORD *)(v312 + 56);
    do
    {
      v202 = *(v201 - 7);
      if ( v202 )
        sub_140001660(*(v201 - 6), v202, 1);
      v203 = *(v201 - 4);
      if ( v203 )
        sub_140001660(*(v201 - 3), v203, 1);
      v204 = *(v201 - 1);
      if ( v204 )
        sub_140001660(*v201, v204, 1);
      v201 += 10;
      --v350;
    }
    while ( v350 );
  }
  if ( v297.m128i_i64[0] )
  {
    v205 = 80 * v297.m128i_i64[0];
    v206 = v200;
    goto LABEL_396;
  }
  return v349;
}
