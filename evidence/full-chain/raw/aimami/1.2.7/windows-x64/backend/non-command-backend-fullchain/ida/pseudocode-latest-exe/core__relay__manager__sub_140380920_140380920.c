// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140380920 | successor of pre-update 0x140b2ade0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
char __fastcall sub_140380920(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm7
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rsi
  __int8 v9; // bl
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  __m128i v12; // xmm6
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  _QWORD *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  const __m128i *v20; // r12
  _BYTE *v21; // r15
  __m128i v22; // xmm8
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r15
  __m128i v27; // xmm6
  __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int8 v36; // r14
  __int64 v37; // r15
  __m128i v38; // kr00_16
  __int64 v39; // r14
  char v40; // bl
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // r13
  __int64 v44; // r14
  char v45; // bl
  unsigned __int64 v46; // rax
  __int64 v47; // r12
  unsigned __int64 v48; // r14
  __int64 v49; // rsi
  __int64 v50; // r15
  __int64 v51; // r14
  char v52; // r15
  char v53; // r12
  int v54; // r13d
  __m128i v55; // xmm6
  __int64 v56; // rax
  __int64 v57; // r9
  __m128i *v58; // rdx
  char v59; // cl
  __int32 v60; // edx
  int v61; // ecx
  unsigned __int32 v62; // ecx
  unsigned __int64 v63; // rdi
  __int64 v64; // r15
  char v65; // bl
  unsigned __int64 v66; // r14
  __m128i v67; // xmm6
  __int64 v68; // r15
  __int128 v69; // kr30_16
  char v70; // r12
  __int64 v71; // rcx
  __m128i v72; // xmm0
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r14
  char *v76; // rdi
  __int64 v77; // rcx
  __int64 *v78; // r15
  __int64 v79; // rax
  __m128i *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  char v84; // al
  __int64 v85; // rdi
  __int64 v86; // r14
  _QWORD *v87; // r12
  __int64 v88; // rdx
  __int64 v89; // rdx
  int v90; // r14d
  unsigned int v91; // ebx
  __int64 v92; // r15
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // r14
  __int64 v96; // rdx
  __int64 v97; // rcx
  __m128i v98; // xmm0
  int v99; // r13d
  unsigned int v100; // r12d
  __int64 v101; // r15
  __int64 v102; // r8
  __int64 v103; // rdx
  __m128i v104; // xmm0
  unsigned __int64 v105; // r15
  unsigned __int64 v106; // r14
  __int64 v107; // rbx
  char v108; // cl
  char result; // al
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r15
  __int64 v119; // rdi
  __int64 v120; // rdx
  unsigned int v121; // eax
  __int64 v122; // rsi
  int v123; // r15d
  char v124; // bl
  __int16 v125; // di
  __int64 v126; // rax
  char v127; // di
  char v128; // r13
  char v129; // r12
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // rbx
  bool v133; // zf
  __int64 v134; // r15
  __int64 v135; // rax
  __int128 v136; // xmm0
  PVOID v137; // rcx
  char v138; // al
  __int64 v139; // r12
  __int64 v140; // rsi
  __int64 v141; // r15
  __int64 v142; // rdi
  __int64 v143; // rbx
  __int64 v144; // rdi
  __int32 v145; // r8d
  int v146; // ecx
  unsigned __int32 v147; // ecx
  __int64 v148; // rsi
  __int64 v149; // rdx
  __int64 v150; // r8
  int v151; // r8d
  unsigned int v152; // edi
  __int64 v153; // r15
  __int64 v154; // rcx
  char *v155; // r12
  char v156; // al
  __int64 v157; // r14
  unsigned __int64 v158; // rcx
  char *v159; // rdi
  char v160; // al
  __int64 v161; // rdi
  int v162; // eax
  unsigned __int64 v163; // r14
  __int64 v164; // rbx
  char v165; // al
  __int64 v166; // [rsp+30h] [rbp-50h] BYREF
  char v167; // [rsp+38h] [rbp-48h]
  int v168; // [rsp+39h] [rbp-47h]
  __int16 v169; // [rsp+3Dh] [rbp-43h]
  char v170; // [rsp+3Fh] [rbp-41h]
  __int64 v171; // [rsp+40h] [rbp-40h]
  __int64 v172; // [rsp+48h] [rbp-38h]
  __int64 v173; // [rsp+50h] [rbp-30h]
  __m128i v174; // [rsp+58h] [rbp-28h]
  __int128 v175; // [rsp+68h] [rbp-18h]
  __int128 v176; // [rsp+78h] [rbp-8h]
  __int128 v177; // [rsp+88h] [rbp+8h]
  __int128 v178; // [rsp+98h] [rbp+18h]
  __m128i v179; // [rsp+A8h] [rbp+28h]
  __int64 v180; // [rsp+B8h] [rbp+38h]
  __m128i v181; // [rsp+C0h] [rbp+40h]
  __m128i v182; // [rsp+D0h] [rbp+50h]
  __m128i v183; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v184; // [rsp+F0h] [rbp+70h]
  __int128 v185; // [rsp+100h] [rbp+80h]
  __int128 v186; // [rsp+110h] [rbp+90h]
  __int128 v187; // [rsp+120h] [rbp+A0h]
  __m128i v188; // [rsp+130h] [rbp+B0h]
  __int64 v189; // [rsp+140h] [rbp+C0h]
  __int64 v190; // [rsp+148h] [rbp+C8h] BYREF
  char v191; // [rsp+150h] [rbp+D0h]
  int v192; // [rsp+151h] [rbp+D1h]
  __int16 v193; // [rsp+155h] [rbp+D5h]
  char v194; // [rsp+157h] [rbp+D7h]
  __m128i v195; // [rsp+158h] [rbp+D8h]
  __int64 v196; // [rsp+168h] [rbp+E8h]
  PVOID v197; // [rsp+170h] [rbp+F0h]
  __int128 v198; // [rsp+178h] [rbp+F8h]
  __int64 v199; // [rsp+188h] [rbp+108h] BYREF
  __int8 v200; // [rsp+190h] [rbp+110h]
  int v201; // [rsp+191h] [rbp+111h]
  __int16 v202; // [rsp+195h] [rbp+115h]
  char v203; // [rsp+197h] [rbp+117h]
  __m128i v204; // [rsp+198h] [rbp+118h]
  __int64 v205; // [rsp+1A8h] [rbp+128h]
  __m128i v206; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v207; // [rsp+1C0h] [rbp+140h]
  __int128 v208; // [rsp+1D0h] [rbp+150h]
  __int128 v209; // [rsp+1E0h] [rbp+160h]
  __int128 v210; // [rsp+1F0h] [rbp+170h]
  __m128i v211; // [rsp+200h] [rbp+180h]
  __int64 v212; // [rsp+210h] [rbp+190h]
  __int64 v213; // [rsp+230h] [rbp+1B0h]
  __int64 v214; // [rsp+238h] [rbp+1B8h]
  __int64 v215; // [rsp+240h] [rbp+1C0h]
  __int64 v216; // [rsp+248h] [rbp+1C8h]
  __m128i v217; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v218; // [rsp+260h] [rbp+1E0h]
  __m128i v219; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v220; // [rsp+280h] [rbp+200h]
  __m128i v221; // [rsp+288h] [rbp+208h]
  __int64 v222; // [rsp+298h] [rbp+218h]
  __m128i v223; // [rsp+2A0h] [rbp+220h]
  __int128 v224; // [rsp+2B0h] [rbp+230h]
  __int128 v225; // [rsp+2C0h] [rbp+240h]
  __int128 v226; // [rsp+2D0h] [rbp+250h]
  __int128 v227; // [rsp+2E0h] [rbp+260h]
  __int128 v228; // [rsp+2F0h] [rbp+270h]
  __int64 v229; // [rsp+300h] [rbp+280h]
  __int64 v230; // [rsp+308h] [rbp+288h]
  __int128 v231; // [rsp+310h] [rbp+290h]
  __m128i v232; // [rsp+320h] [rbp+2A0h]
  __int64 v233; // [rsp+330h] [rbp+2B0h]
  __int64 v234; // [rsp+338h] [rbp+2B8h]
  __int64 v235; // [rsp+340h] [rbp+2C0h]
  __int64 v236; // [rsp+348h] [rbp+2C8h]
  __int64 v237; // [rsp+350h] [rbp+2D0h]
  __int64 v238; // [rsp+358h] [rbp+2D8h]
  __int64 v239; // [rsp+360h] [rbp+2E0h]
  __int64 v240; // [rsp+368h] [rbp+2E8h]
  __int64 v241; // [rsp+370h] [rbp+2F0h]
  __int64 v242; // [rsp+378h] [rbp+2F8h]
  __int64 v243; // [rsp+380h] [rbp+300h]
  __m128i v244; // [rsp+388h] [rbp+308h]
  __int64 v245; // [rsp+398h] [rbp+318h]
  __int16 v246; // [rsp+3A0h] [rbp+320h]
  __int16 v247; // [rsp+3A2h] [rbp+322h]
  __m128i v248; // [rsp+3A8h] [rbp+328h]
  __int128 v249; // [rsp+3B8h] [rbp+338h]
  __int128 v250; // [rsp+3C8h] [rbp+348h]
  int v251; // [rsp+3D8h] [rbp+358h]
  char v252; // [rsp+3DCh] [rbp+35Ch]
  char v253; // [rsp+3DDh] [rbp+35Dh]
  __m128i v254; // [rsp+3DEh] [rbp+35Eh]
  char v255; // [rsp+3EEh] [rbp+36Eh]
  char v256; // [rsp+3EFh] [rbp+36Fh]
  __m128i v257; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v258; // [rsp+400h] [rbp+380h]
  __int128 v259; // [rsp+410h] [rbp+390h]
  __int128 v260; // [rsp+420h] [rbp+3A0h]
  __int128 v261; // [rsp+430h] [rbp+3B0h]
  __m128i v262; // [rsp+440h] [rbp+3C0h]
  __int64 v263; // [rsp+450h] [rbp+3D0h]
  __int128 v264; // [rsp+458h] [rbp+3D8h] BYREF
  __int64 v265; // [rsp+468h] [rbp+3E8h]
  __int64 v266; // [rsp+470h] [rbp+3F0h]
  __int64 v267; // [rsp+478h] [rbp+3F8h]
  __int64 v268; // [rsp+480h] [rbp+400h]
  __int64 v269; // [rsp+488h] [rbp+408h]
  __m128i v270; // [rsp+490h] [rbp+410h] BYREF
  __int64 v271; // [rsp+4A0h] [rbp+420h]
  __int64 v272; // [rsp+4A8h] [rbp+428h]
  __int64 v273; // [rsp+4B0h] [rbp+430h]
  __int64 v274; // [rsp+4B8h] [rbp+438h]
  __int64 v275; // [rsp+4C0h] [rbp+440h]
  __int64 v276; // [rsp+4C8h] [rbp+448h]
  const __m128i *v277; // [rsp+4D0h] [rbp+450h]
  __int64 v278; // [rsp+4D8h] [rbp+458h]
  __int64 v279; // [rsp+4E0h] [rbp+460h]
  const __m128i *v280; // [rsp+4E8h] [rbp+468h]
  __int64 v281; // [rsp+4F0h] [rbp+470h]
  __int64 v282; // [rsp+4F8h] [rbp+478h]
  _BYTE *v283; // [rsp+500h] [rbp+480h]
  __int64 v284; // [rsp+508h] [rbp+488h]
  __m128i v285; // [rsp+510h] [rbp+490h] BYREF
  _BYTE v286[72]; // [rsp+520h] [rbp+4A0h] BYREF
  __int128 v287; // [rsp+568h] [rbp+4E8h]
  __int128 v288; // [rsp+578h] [rbp+4F8h] BYREF
  __m128i v289; // [rsp+588h] [rbp+508h] BYREF
  __int64 v290; // [rsp+598h] [rbp+518h]
  _BYTE v291[7]; // [rsp+690h] [rbp+610h]
  __int64 v292; // [rsp+698h] [rbp+618h]
  _BYTE v293[24]; // [rsp+6A0h] [rbp+620h] BYREF
  __m128i v294; // [rsp+6C0h] [rbp+640h] BYREF
  __m128i v295; // [rsp+6D0h] [rbp+650h] BYREF
  __int128 v296; // [rsp+6E0h] [rbp+660h]
  __int128 v297; // [rsp+6F0h] [rbp+670h]
  __int128 v298; // [rsp+700h] [rbp+680h] BYREF
  __m128i v299; // [rsp+710h] [rbp+690h] BYREF
  __int64 v300; // [rsp+720h] [rbp+6A0h]
  __int64 v301; // [rsp+728h] [rbp+6A8h]
  void *v302; // [rsp+730h] [rbp+6B0h]
  __int128 v303; // [rsp+738h] [rbp+6B8h]
  __int64 v304; // [rsp+748h] [rbp+6C8h]
  unsigned __int64 v305; // [rsp+750h] [rbp+6D0h]
  unsigned __int8 v306; // [rsp+758h] [rbp+6D8h]
  _BYTE v307[7]; // [rsp+759h] [rbp+6D9h]
  __m128i v308; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v309; // [rsp+770h] [rbp+6F0h]
  _DWORD v310[2]; // [rsp+778h] [rbp+6F8h]
  _BYTE v311[7]; // [rsp+780h] [rbp+700h]
  __int64 v312; // [rsp+788h] [rbp+708h]
  __int64 v313; // [rsp+790h] [rbp+710h]
  const __m128i *v314; // [rsp+798h] [rbp+718h]
  __int64 v315; // [rsp+7A0h] [rbp+720h]
  __int64 v316; // [rsp+7A8h] [rbp+728h]
  __int64 v317; // [rsp+7B0h] [rbp+730h]
  __int64 v318; // [rsp+7B8h] [rbp+738h]
  __int64 v319; // [rsp+7C0h] [rbp+740h]
  int v320; // [rsp+7CCh] [rbp+74Ch]
  _QWORD *v321; // [rsp+7D0h] [rbp+750h]
  PVOID Address; // [rsp+7D8h] [rbp+758h]
  __int64 v323; // [rsp+7E0h] [rbp+760h]
  _BYTE v324[7]; // [rsp+7E8h] [rbp+768h]
  char v325; // [rsp+7EFh] [rbp+76Fh] BYREF
  const __m128i *v326; // [rsp+7F0h] [rbp+770h]
  __int64 v327; // [rsp+7F8h] [rbp+778h]
  __int64 v328; // [rsp+800h] [rbp+780h]
  __int64 v329; // [rsp+808h] [rbp+788h]
  __int64 v330; // [rsp+810h] [rbp+790h]
  __int64 v331; // [rsp+818h] [rbp+798h]
  char v332; // [rsp+827h] [rbp+7A7h]
  __int64 v333; // [rsp+828h] [rbp+7A8h]
  char v334; // [rsp+837h] [rbp+7B7h]
  __int64 v335; // [rsp+838h] [rbp+7B8h]

  v335 = -2;
  v4 = a1;
  v5 = *(unsigned __int8 *)(a1 + 10544);
  v333 = a1;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a1 + 10545) = 257;
      *(_BYTE *)(a1 + 10547) = 1;
      v6 = a1 + 5464;
      sub_1419234B0(a1 + 5464, a1 + 392, 5072);
      switch ( *(_BYTE *)(v4 + 10528) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_197;
        case 2:
          goto LABEL_196;
        case 3:
          goto LABEL_9;
      }
    case 1LL:
      sub_14196B990(&off_141A0BD78);
    case 2LL:
      sub_14196B9B0(&off_141A0BD78);
    case 3LL:
      v6 = a1 + 5464;
      switch ( *(_BYTE *)(a1 + 10528) )
      {
        case 0:
LABEL_4:
          v7 = v4 + 5984;
          *(_QWORD *)&v286[32] = 0;
          v285.m128i_i64[0] = (__int64)aTestRelayProvi;
          v285.m128i_i64[1] = 26;
          *(_QWORD *)v286 = aManager_0;
          *(_QWORD *)&v286[8] = 7;
          v327 = v6;
          *(_QWORD *)&v286[16] = v6;
          *(_QWORD *)&v286[24] = v4 + 5984;
          v8 = sub_1405071F0((volatile void *)(*(_QWORD *)(v4 + 5976) + 16LL));
          v330 = v4 + 5984;
          if ( v8 )
            goto LABEL_5;
          sub_14193F940(&v219, &v285, v286);
          v9 = v219.m128i_i8[0];
          if ( v219.m128i_i8[0] != -1 )
            goto LABEL_18;
          v8 = v219.m128i_i64[1];
LABEL_5:
          *(_QWORD *)&v286[32] = 0;
          v285.m128i_i64[0] = (__int64)aTestRelayProvi;
          v285.m128i_i64[1] = 26;
          *(_QWORD *)v286 = aProviderid;
          *(_QWORD *)&v286[8] = 10;
          *(_QWORD *)&v286[16] = v327;
          *(_QWORD *)&v286[24] = v7;
          sub_1401FFFF0(&v219, &v285);
          v9 = v219.m128i_i8[0];
          if ( v219.m128i_i8[0] != -1 )
          {
LABEL_18:
            v11 = ((unsigned __int64)((v219.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v219.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v219.m128i_u32 + 1);
            v12 = _mm_loadu_si128((const __m128i *)&v219.m128i_u64[1]);
            v13 = v221.m128i_i64[0];
LABEL_19:
            v31 = v327;
            goto LABEL_20;
          }
          v331 = v219.m128i_i64[1];
          v329 = v220;
          v10 = v221.m128i_i64[0];
          *(_QWORD *)&v286[32] = 0;
          v285.m128i_i64[0] = (__int64)aTestRelayProvi;
          v285.m128i_i64[1] = 26;
          *(_QWORD *)v286 = aModel;
          *(_QWORD *)&v286[8] = 5;
          *(_QWORD *)&v286[16] = v327;
          *(_QWORD *)&v286[24] = v7;
          sub_140ED5BB0(&v219, &v285);
          v9 = v219.m128i_i8[0];
          if ( v219.m128i_i8[0] != -1 )
          {
            v11 = ((unsigned __int64)((v219.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v219.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v219.m128i_u32 + 1);
            v12 = _mm_loadu_si128((const __m128i *)&v219.m128i_u64[1]);
            v13 = v221.m128i_i64[0];
            if ( v331 )
              sub_140001660(v329, v331, 1);
            goto LABEL_19;
          }
          v326 = (const __m128i *)v219.m128i_i64[1];
          v328 = v220;
          v47 = v221.m128i_i64[0];
          *(_QWORD *)&v286[32] = 0;
          v285.m128i_i64[0] = (__int64)aTestRelayProvi;
          v285.m128i_i64[1] = 26;
          *(_QWORD *)v286 = aOnevent;
          *(_QWORD *)&v286[8] = 7;
          *(_QWORD *)&v286[16] = v327;
          *(_QWORD *)&v286[24] = v7;
          sub_1404CDCE0(&v219, &v285);
          v9 = v219.m128i_i8[0];
          if ( v219.m128i_i8[0] == -1 )
          {
            v113 = v219.m128i_i64[1];
            v4 = v333;
            v114 = v333 + 6008;
            *(_QWORD *)(v333 + 6056) = v8;
            *(_QWORD *)(v4 + 6008) = v331;
            *(_QWORD *)(v4 + 6016) = v329;
            *(_QWORD *)(v4 + 6024) = v10;
            *(_QWORD *)(v4 + 6032) = v326;
            *(_QWORD *)(v4 + 6040) = v328;
            *(_QWORD *)(v4 + 6048) = v47;
            *(_QWORD *)(v4 + 6064) = v113;
            *(_BYTE *)(v4 + 7504) = 0;
            sub_1419234B0(v4 + 7512, v114, 1504);
            v15 = v4 + 7512;
            v283 = (_BYTE *)(v4 + 10520);
            *(_BYTE *)(v4 + 10520) = 0;
            v6 = v327;
LABEL_10:
            v16 = v4 + 9016;
            v266 = v15;
            sub_1419234B0(v4 + 9016, v15, 1504);
            switch ( *(_BYTE *)(v4 + 10512) )
            {
              case 0:
                goto LABEL_12;
              case 1:
                goto LABEL_199;
              case 2:
                goto LABEL_198;
              case 3:
                goto LABEL_13;
            }
          }
          v48 = (unsigned __int64)((v219.m128i_u8[7] << 16)
                                 | (unsigned int)*(unsigned __int16 *)((char *)&v219.m128i_u16[2] + 1)) << 32;
          v49 = *(unsigned int *)((char *)v219.m128i_u32 + 1);
          v12 = _mm_loadu_si128((const __m128i *)&v219.m128i_u64[1]);
          v13 = v221.m128i_i64[0];
          v31 = v327;
          if ( (unsigned __int64)&v326[-1].m128i_u64[1] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v50 = v327;
            sub_140001660(v328, v326, 1);
            v31 = v50;
          }
          v11 = v48 | v49;
          if ( v331 )
          {
            v51 = v31;
            sub_140001660(v329, v331, 1);
            v31 = v51;
          }
LABEL_20:
          sub_14028D200(v31);
          if ( *(_QWORD *)v330 == -1 )
          {
            v36 = 1;
            v37 = v333;
            goto LABEL_132;
          }
          v326 = (const __m128i *)(v333 + 5992);
          v33 = *(_QWORD *)(v333 + 5992);
          v329 = *(_QWORD *)(v333 + 6000);
          v331 = 0;
          v328 = v33;
          while ( v329 != v331 )
          {
            ++v331;
            v34 = v33 + 96;
            sub_1401AFF50(v33, v32);
            v33 = v34;
          }
          v35 = *(_QWORD *)v330;
          v36 = 1;
          v37 = v333;
          if ( !*(_QWORD *)v330 )
            goto LABEL_132;
          goto LABEL_131;
        case 1:
LABEL_197:
          v327 = v6;
          sub_14196B990(&off_141A0D8F0);
        case 2:
LABEL_196:
          v327 = v6;
          sub_14196B9B0(&off_141A0D8F0);
        case 3:
          goto LABEL_9;
      }
  }
LABEL_9:
  v14 = *(unsigned __int8 *)(v4 + 10520);
  v15 = v4 + 7512;
  v283 = (_BYTE *)(v4 + 10520);
  switch ( v14 )
  {
    case 0LL:
      goto LABEL_10;
    case 1LL:
      v327 = v6;
      v273 = v4 + 10520;
      v272 = v4 + 7512;
      sub_14196B990(&off_141A0BCF8);
    case 2LL:
      v327 = v6;
      v273 = v4 + 10520;
      v272 = v4 + 7512;
      sub_14196B9B0(&off_141A0BCF8);
    case 3LL:
      v266 = v4 + 7512;
      v16 = v4 + 9016;
      switch ( *(_BYTE *)(v4 + 10512) )
      {
        case 0:
LABEL_12:
          v17 = *(_QWORD **)(v4 + 9064);
          *(_QWORD *)(v4 + 9080) = v17;
          *(_OWORD *)(v4 + 9088) = *(_OWORD *)v16;
          v18 = *(_QWORD *)(v16 + 16);
          *(_QWORD *)(v4 + 9104) = v18;
          v331 = *(_QWORD *)(v4 + 9040);
          v329 = *(_QWORD *)(v4 + 9048);
          *(_QWORD *)(v4 + 9112) = *(_QWORD *)(v4 + 9072);
          v19 = *(_QWORD *)(v4 + 9096);
          *(_BYTE *)(v4 + 10513) = 0;
          v20 = (const __m128i *)(v4 + 9120);
          *(_OWORD *)(v4 + 9120) = *(_OWORD *)(v4 + 9040);
          *(_QWORD *)(v4 + 9136) = *(_QWORD *)(v4 + 9056);
          *(_QWORD *)(v4 + 9144) = v17;
          *(_QWORD *)(v4 + 9152) = v19;
          *(_QWORD *)(v4 + 9160) = v18;
          *(_QWORD *)(v4 + 9168) = v4 + 9112;
          *(_QWORD *)(v4 + 9176) = &off_141A0F448;
          v21 = (_BYTE *)(v4 + 10504);
          *(_BYTE *)(v4 + 10504) = 0;
          v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v4 + 9112), (__m128i)(unsigned __int64)&off_141A0F448);
LABEL_15:
          v318 = v16;
          v327 = v6;
          *(_QWORD *)(v4 + 9184) = v17;
          *(_QWORD *)(v4 + 9192) = v19;
          *(_QWORD *)(v4 + 9200) = v18;
          *(_BYTE *)(v4 + 10505) = 1;
          *(__m128i *)(v4 + 9208) = _mm_loadu_si128(v20);
          *(_QWORD *)(v4 + 9224) = v20[1].m128i_i64[0];
          v23 = v17[2];
          if ( *(_QWORD *)(v23 + 16) != -1 )
          {
            v279 = v329;
            v278 = v331;
            v277 = v20;
            sub_1416DB410(&v285.m128i_u64[1], v23 + 16);
            v24 = v285.m128i_i64[1];
            LOBYTE(v25) = v286[0];
            v26 = ((unsigned __int64)((v286[7] << 16) | (unsigned int)*(unsigned __int16 *)&v286[5]) << 32)
                | *(unsigned int *)&v286[1];
            v27 = _mm_loadu_si128((const __m128i *)&v286[8]);
            v28 = *(_QWORD *)&v286[24];
            Address = *(PVOID *)&v286[32];
            v2 = *(_OWORD *)&v286[40];
            v328 = *(_QWORD *)&v286[56];
            v29 = *(_QWORD *)&v286[64];
            LOBYTE(v319) = v287;
            *(_DWORD *)v324 = *(_DWORD *)((char *)&v287 + 1);
            *(_DWORD *)&v324[3] = DWORD1(v287);
            v330 = 9;
            v30 = v333;
LABEL_85:
            v89 = *(_QWORD *)(v30 + 9208);
            if ( v89 != -1 && *(_BYTE *)(v30 + 10505) == 1 && v89 )
              sub_140001660(*(_QWORD *)(v30 + 9216), v89, 1);
            *(_BYTE *)(v30 + 10505) = 0;
            *(_DWORD *)&v311[3] = *(_DWORD *)&v324[3];
            *(_DWORD *)v311 = *(_DWORD *)v324;
            *(_BYTE *)(v30 + 10504) = 1;
            if ( v330 != -2 )
              goto LABEL_90;
LABEL_112:
            *(_BYTE *)(v30 + 10512) = 3;
            v102 = v30;
            goto LABEL_113;
          }
          v319 = a2;
          Address = v21;
          v279 = v329;
          v278 = v331;
          v277 = v20;
          sub_140EA26A0((__int64)&v285, v17, v19, v18);
          v326 = v20;
          v38 = v285;
          v26 = ((unsigned __int64)((v286[15] << 16) | (unsigned int)*(unsigned __int16 *)&v286[13]) << 32)
              | *(unsigned int *)&v286[9];
          v24 = *(_QWORD *)v286;
          v25 = v286[8];
          v27 = _mm_loadu_si128((const __m128i *)&v286[16]);
          v39 = *(_QWORD *)&v286[40];
          v2 = *(_OWORD *)&v286[48];
          v40 = BYTE8(v287);
          v310[0] = *(_DWORD *)((char *)&v287 + 9);
          *(_DWORD *)((char *)v310 + 3) = HIDWORD(v287);
          v328 = *(_QWORD *)&v286[64];
          if ( v285.m128i_i64[0] == -1 )
          {
            v330 = v285.m128i_i64[1];
            LOBYTE(v319) = BYTE8(v287);
            Address = *(PVOID *)&v286[40];
            *(_DWORD *)v324 = v310[0];
            *(_DWORD *)&v324[3] = *(_DWORD *)((char *)v310 + 3);
            v30 = v333;
            v20 = v326;
            v28 = *(_QWORD *)&v286[32];
            v29 = v287;
            goto LABEL_85;
          }
          v321 = (_QWORD *)v287;
          v323 = *(_QWORD *)&v286[32];
          sub_1419234B0(&v219, &v288, 152);
          v41 = v333;
          v330 = v333 + 9232;
          *(__m128i *)(v333 + 9232) = v38;
          *(_QWORD *)(v41 + 9248) = v24;
          *(_BYTE *)(v41 + 9256) = v25;
          *(_BYTE *)(v41 + 9263) = BYTE6(v26);
          *(_WORD *)(v41 + 9261) = WORD2(v26);
          *(_DWORD *)(v41 + 9257) = v26;
          *(__m128i *)(v41 + 9264) = v27;
          *(_QWORD *)(v41 + 9280) = v323;
          *(_QWORD *)(v41 + 9288) = v39;
          *(_OWORD *)(v41 + 9296) = v2;
          *(_QWORD *)(v41 + 9312) = v328;
          *(_QWORD *)(v41 + 9320) = v321;
          *(_BYTE *)(v41 + 9328) = v40;
          v42 = *(_DWORD *)((char *)v310 + 3);
          *(_DWORD *)(v41 + 9329) = v310[0];
          *(_DWORD *)(v41 + 9332) = v42;
          v43 = v41 + 9336;
          sub_1419234B0(v41 + 9336, &v219, 152);
          v282 = v329;
          v281 = v331;
          v280 = v326;
          sub_1416DB410(&v270, v330);
          v44 = v333;
          sub_1416DB410(&v264, v333 + 9256);
          a2 = v319;
          sub_1416DB410(v293, v44 + 9280);
          sub_1416DB410(&v308, v44 + 9304);
          v45 = *(_BYTE *)(v44 + 9484);
          v46 = 2;
          if ( *(__int64 *)(v44 + 9424) < 0 )
            v46 = *(_QWORD *)(v44 + 9424) ^ 0x8000000000000000uLL;
          if ( v46 )
          {
            if ( v46 == 1 )
            {
              v328 = 0x8000000000000001uLL;
            }
            else
            {
              sub_1416DB410(&v285, v44 + 9424);
              v323 = v285.m128i_i64[1];
              v328 = v285.m128i_i64[0];
              v25 = *(_QWORD *)v286;
              v44 = v333;
            }
          }
          else
          {
            v328 = 0x8000000000000000uLL;
          }
          v321 = (_QWORD *)(v44 + 9328);
          sub_1416DB410(&v294, v44 + 9328);
          v52 = *(_BYTE *)(v44 + 9486);
          v53 = *(_BYTE *)(v44 + 9487);
          sub_140230EE0(&v298, v44 + 9352);
          v317 = v43;
          sub_1416DB410(&v219, v44 + 9376);
          v54 = *(_DWORD *)(v44 + 9480);
          v55 = _mm_loadu_si128((const __m128i *)(v44 + 9448));
          v2 = *(_OWORD *)(v44 + 9464);
          if ( *(_QWORD *)(v44 + 9400) == -1 )
          {
            v56 = -1;
          }
          else
          {
            sub_1416DB410(&v285, v44 + 9400);
            v56 = v285.m128i_i64[0];
            v217 = _mm_loadu_si128((const __m128i *)&v285.m128i_u64[1]);
          }
          v57 = v333;
          v58 = (__m128i *)(v333 + 9488);
          v59 = *(_BYTE *)(v333 + 9485);
          *(_QWORD *)(v333 + 9504) = v271;
          *v58 = v270;
          *(_QWORD *)(v57 + 9528) = v265;
          *(_OWORD *)(v57 + 9512) = v264;
          *(_OWORD *)(v57 + 9536) = *(_OWORD *)v293;
          *(_QWORD *)(v57 + 9552) = *(_QWORD *)&v293[16];
          *(__m128i *)(v57 + 9560) = v308;
          *(_QWORD *)(v57 + 9576) = v309;
          *(_BYTE *)(v57 + 9740) = v45;
          *(_QWORD *)(v57 + 9680) = v328;
          *(_QWORD *)(v57 + 9688) = v323;
          *(_QWORD *)(v57 + 9696) = v25;
          *(_QWORD *)(v57 + 9600) = v295.m128i_i64[0];
          *(__m128i *)(v57 + 9584) = v294;
          *(_BYTE *)(v57 + 9742) = v52;
          *(_BYTE *)(v57 + 9743) = v53;
          *(_OWORD *)(v57 + 9608) = v298;
          *(_QWORD *)(v57 + 9624) = v299.m128i_i64[0];
          *(__m128i *)(v57 + 9632) = v219;
          *(_QWORD *)(v57 + 9648) = v220;
          *(_DWORD *)(v57 + 9736) = v54;
          *(__m128i *)(v57 + 9704) = v55;
          *(_OWORD *)(v57 + 9720) = v2;
          *(_QWORD *)(v57 + 9656) = v56;
          *(__m128i *)(v57 + 9664) = _mm_load_si128(&v217);
          *(_BYTE *)(v57 + 9741) = v59;
          v316 = v329;
          v315 = v331;
          v314 = v326;
          sub_1414331D0(&v285);
          v60 = (v285.m128i_i32[0] >> 13) - 1;
          v61 = 0;
          v21 = Address;
          if ( v285.m128i_i32[0] >> 13 <= 0 )
          {
            v62 = (1 - (v285.m128i_i32[0] >> 13)) / 0x190u + 1;
            v60 += 400 * v62;
            v61 = -146097 * v62;
          }
          v4 = v333;
          *(_QWORD *)(v333 + 9744) = 1000
                                   * (v285.m128i_u32[1]
                                    + 86400LL
                                    * (((v60 / 100) >> 2)
                                     + ((1461 * v60) >> 2)
                                     + v61
                                     + (((unsigned __int32)v285.m128i_i32[0] >> 4) & 0x1FF)
                                     - v60 / 100
                                     - 719163))
                                   + v285.m128i_u32[2] / 0xF4240uLL;
          if ( *(_QWORD *)(v4 + 9208) == -1 )
            goto LABEL_62;
          *(_BYTE *)(v4 + 10505) = 0;
          v295.m128i_i64[0] = *(_QWORD *)(v4 + 9224);
          v294 = _mm_loadu_si128((const __m128i *)(v4 + 9208));
          sub_140935420(&v285, v330);
          *(_QWORD *)&v298 = v285.m128i_i64[1];
          *((_QWORD *)&v298 + 1) = v285.m128i_i64[1];
          v299.m128i_i64[0] = v285.m128i_i64[0];
          v299.m128i_i64[1] = v285.m128i_i64[1] + 96LL * *(_QWORD *)v286;
          sub_1401CFB40(&v285, &v298, &v294);
          if ( v285.m128i_i32[0] == 2 )
          {
            v219.m128i_i64[0] = (__int64)&v294;
            v219.m128i_i64[1] = (__int64)sub_1400015F0;
            v220 = v333 + 9192;
            v221.m128i_i64[0] = (__int64)sub_140191200;
            sub_1416DAFA0(&v285.m128i_u64[1], &unk_141A0E0B0, &v219);
            v24 = v285.m128i_i64[1];
            LOBYTE(v25) = v286[0];
            v63 = (unsigned __int64)((v286[7] << 16) | (unsigned int)*(unsigned __int16 *)&v286[5]) << 32;
            v64 = *(unsigned int *)&v286[1];
            v27 = _mm_loadu_si128((const __m128i *)&v286[8]);
            v323 = *(_QWORD *)&v286[24];
            Address = *(PVOID *)&v286[32];
            v2 = *(_OWORD *)&v286[40];
            v328 = *(_QWORD *)&v286[56];
            v29 = *(_QWORD *)&v286[64];
            LOBYTE(v319) = v287;
            v308.m128i_i32[0] = *(_DWORD *)((char *)&v287 + 1);
            *(__int32 *)((char *)v308.m128i_i32 + 3) = DWORD1(v287);
            *(_DWORD *)v293 = v308.m128i_i32[0];
            *(_DWORD *)&v293[3] = DWORD1(v287);
            *(_DWORD *)&v324[3] = DWORD1(v287);
            *(_DWORD *)v324 = *(_DWORD *)v293;
            sub_140233510(&v298);
            if ( v294.m128i_i64[0] )
              sub_140001660(v294.m128i_i64[1], v294.m128i_i64[0], 1);
            v26 = v63 | v64;
            v330 = 10;
            v30 = v333;
LABEL_84:
            v20 = v326;
            sub_140292FD0(v30 + 9488);
            sub_140292FD0(v30 + 9232);
            v28 = v323;
            goto LABEL_85;
          }
          v65 = v286[0];
          v66 = ((unsigned __int64)((v286[7] << 16) | (unsigned int)*(unsigned __int16 *)&v286[5]) << 32)
              | *(unsigned int *)&v286[1];
          v67 = _mm_loadu_si128((const __m128i *)&v286[8]);
          v68 = *(_QWORD *)&v286[24];
          v328 = *(_QWORD *)&v286[32];
          v69 = *(_OWORD *)&v286[48];
          v70 = v287;
          sub_140233510(&v298);
          if ( *v321 )
            sub_140001660(*(_QWORD *)v317, *v321, 1);
          v71 = v333;
          *(_BYTE *)(v333 + 9328) = v65;
          *(_DWORD *)(v71 + 9329) = v66;
          *(_BYTE *)(v71 + 9335) = BYTE6(v66);
          *(_WORD *)(v71 + 9333) = WORD2(v66);
          *(__m128i *)(v71 + 9336) = v67;
          *(_BYTE *)(v71 + 9486) = v70;
          v4 = v71;
          if ( (unsigned __int64)(v69 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(*((_QWORD *)&v69 + 1), v69, 1);
          if ( v68 )
            sub_140001660(v328, v68, 1);
          if ( v294.m128i_i64[0] )
            sub_140001660(v294.m128i_i64[1], v294.m128i_i64[0], 1);
          v21 = Address;
LABEL_62:
          *(_QWORD *)(v4 + 9752) = v330;
          *(__m128i *)(v4 + 9760) = v22;
          *(_BYTE *)(v4 + 10496) = 0;
LABEL_63:
          v330 = v4 + 9752;
          sub_1403AA2F0(&v285, (__int64 *)(v4 + 9752), a2);
          if ( v285.m128i_i64[0] == -1 )
          {
            *v21 = 3;
            v30 = v333;
            goto LABEL_112;
          }
          v72 = _mm_loadu_si128(&v285);
          v297 = *(_OWORD *)&v286[32];
          v296 = *(_OWORD *)&v286[16];
          v295 = *(__m128i *)v286;
          v294 = v72;
          v316 = v329;
          v315 = v331;
          v314 = v326;
          sub_14028B8D0(v330);
          v75 = *(_QWORD *)(*(_QWORD *)(v333 + 9184) + 32LL);
          v76 = (char *)(v75 + 16);
          LOBYTE(v77) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v75 + 16), 1, 0) )
          {
            v334 = 1;
            sub_141969A30((volatile void *)(v75 + 16));
          }
          v78 = off_142240260;
          if ( 2 * *off_142240260 )
          {
            v334 = 1;
            v121 = sub_14196A710(v77, v73, v74);
            v29 = v121;
            LOBYTE(v29) = v121 ^ 1;
            v79 = v333;
            if ( *(_BYTE *)(v75 + 17) )
              goto LABEL_68;
          }
          else
          {
            v29 = 0;
            v79 = v333;
            if ( *(_BYTE *)(v75 + 17) )
            {
LABEL_68:
              nullsub_1(v77, v73);
              v80 = (__m128i *)sub_140001650(40, 1);
              if ( !v80 )
              {
                LODWORD(v321) = v29;
                v284 = v75 + 16;
                sub_14196B2DB(1, 40);
              }
              v25 = (unsigned __int64)v80;
              qmemcpy(&v80[1], "nsition lock is poisoned", 24);
              *v80 = _mm_loadu_si128((const __m128i *)&xmmword_141A0E088);
              if ( !(_BYTE)v29 )
              {
                if ( 2 * *v78 )
                {
                  v334 = 1;
                  if ( !(unsigned __int8)sub_14196A710(v82, v81, v83) )
                    *(_BYTE *)(v75 + 17) = 1;
                }
              }
              v84 = *v76;
              *v76 = 0;
              if ( v84 == 2 )
              {
                v334 = 1;
                WakeByAddressSingle((PVOID)(v75 + 16));
              }
              v26 = v25 >> 8;
              v24 = 40;
              v27 = (__m128i)0x28uLL;
              v330 = 10;
LABEL_74:
              if ( v295.m128i_i64[1] != -1 && v295.m128i_i64[1] )
                sub_140001660(v296, v295.m128i_i64[1], 1);
              v85 = v294.m128i_i64[1];
              v86 = v295.m128i_i64[0];
              if ( v295.m128i_i64[0] )
              {
                v87 = (_QWORD *)(v294.m128i_i64[1] + 8);
                do
                {
                  v88 = *(v87 - 1);
                  if ( v88 )
                    sub_140001660(*v87, v88, 1);
                  v87 += 3;
                  --v86;
                }
                while ( v86 );
              }
              v30 = v333;
              if ( v294.m128i_i64[0] )
                sub_140001660(v85, 24 * v294.m128i_i64[0], 8);
              goto LABEL_84;
            }
          }
          LODWORD(v321) = v29;
          v284 = v75 + 16;
          v122 = *(_QWORD *)(*(_QWORD *)(v79 + 9184) + 8LL);
          LOBYTE(v77) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v122 + 16), 1, 0) )
            sub_141969A30((volatile void *)(v122 + 16));
          if ( 2 * *v78 )
          {
            v162 = sub_14196A710(v77, v73, v74);
            LOBYTE(v162) = v162 ^ 1;
            LODWORD(v328) = v162;
            Address = (PVOID)(v122 + 16);
            if ( !*(_BYTE *)(v122 + 17) )
              goto LABEL_140;
LABEL_185:
            v285.m128i_i64[0] = (__int64)Address;
            v285.m128i_i8[8] = v328;
            sub_14196B5F0(
              (unsigned int)aRelayStatePois,
              20,
              (unsigned int)&v285,
              (unsigned int)&off_141A106E8,
              (__int64)&off_141A0EB18);
          }
          LODWORD(v328) = 0;
          Address = (PVOID)(v122 + 16);
          if ( *(_BYTE *)(v122 + 17) )
            goto LABEL_185;
LABEL_140:
          v123 = *(_DWORD *)(v122 + 384);
          sub_140230D60(&v217, v122 + 24);
          sub_14022C070(&v285, v122 + 48);
          v271 = *(_QWORD *)v286;
          v270 = _mm_loadu_si128(&v285);
          v124 = *(_BYTE *)(v122 + 146);
          v125 = *(_WORD *)(v122 + 144);
          sub_1416DB410(&v308, v122 + 72);
          sub_1416DB410(&v298, v122 + 96);
          if ( *(_QWORD *)(v122 + 120) == -1 )
          {
            v126 = -1;
          }
          else
          {
            sub_1416DB410(&v285, v122 + 120);
            v126 = v285.m128i_i64[0];
            *(__m128i *)v293 = _mm_loadu_si128((const __m128i *)&v285.m128i_u64[1]);
          }
          v286[58] = v124;
          *(_WORD *)&v286[56] = v125;
          v285 = v308;
          *(_QWORD *)v286 = v309;
          *(_OWORD *)&v286[8] = v298;
          *(_QWORD *)&v286[24] = v299.m128i_i64[0];
          *(_QWORD *)&v286[32] = v126;
          *(__m128i *)&v286[40] = _mm_load_si128((const __m128i *)v293);
          if ( *(_BYTE *)(v122 + 389) == 1 )
          {
            v182 = _mm_loadu_si128((const __m128i *)(v122 + 390));
            v127 = 1;
          }
          else
          {
            v127 = 0;
          }
          v128 = *(_BYTE *)(v122 + 388);
          v129 = *(_BYTE *)(v122 + 406);
          sub_1402311B0(&v264, v122 + 152);
          v132 = *(unsigned __int8 *)(v122 + 407);
          v133 = *(_QWORD *)(v122 + 176) == -1;
          v317 = v75;
          LOBYTE(v319) = v132;
          if ( v133 )
          {
            v135 = -1;
          }
          else
          {
            v320 = v123;
            v134 = *(_QWORD *)(v122 + 320);
            sub_1416DB410(v293, v122 + 176);
            sub_1416DB410(&v308, v122 + 200);
            v330 = -1;
            if ( *(_QWORD *)(v122 + 224) == -1 )
            {
              v323 = -1;
            }
            else
            {
              sub_1416DB410(&v298, v122 + 224);
              v267 = *((_QWORD *)&v298 + 1);
              v323 = v298;
              v214 = v299.m128i_i64[0];
            }
            if ( *(_QWORD *)(v122 + 248) != -1 )
            {
              sub_1416DB410(&v298, v122 + 248);
              v268 = *((_QWORD *)&v298 + 1);
              v330 = v298;
              v215 = v299.m128i_i64[0];
            }
            v132 = -1;
            v133 = *(_QWORD *)(v122 + 272) == -1;
            v213 = v134;
            if ( v133 )
            {
              v123 = v320;
              v292 = -1;
            }
            else
            {
              sub_1416DB410(&v298, v122 + 272);
              v123 = v320;
              v269 = *((_QWORD *)&v298 + 1);
              v292 = v298;
              v216 = v299.m128i_i64[0];
            }
            LOWORD(v320) = *(_WORD *)(v122 + 328);
            LOWORD(v75) = *(_WORD *)(v122 + 330);
            if ( *(_QWORD *)(v122 + 296) != -1 )
            {
              sub_1416DB410(&v298, v122 + 296);
              v132 = v298;
              v181 = _mm_loadu_si128((const __m128i *)((char *)&v298 + 8));
            }
            v135 = *(_QWORD *)v293;
            v298 = *(_OWORD *)&v293[8];
            v299 = _mm_loadu_si128(&v308);
            v300 = v309;
          }
          v136 = *(_OWORD *)(v122 + 352);
          v250 = *(_OWORD *)(v122 + 368);
          v249 = v136;
          v251 = v123;
          v220 = v218;
          v219 = v217;
          v222 = v271;
          v221 = v270;
          v223 = v285;
          v224 = *(_OWORD *)v286;
          v225 = *(_OWORD *)&v286[16];
          v226 = *(_OWORD *)&v286[32];
          v227 = *(_OWORD *)&v286[48];
          v252 = v128;
          v253 = v127;
          v254 = v182;
          v255 = v129;
          v229 = v265;
          v228 = v264;
          v256 = v319;
          v230 = v135;
          v233 = v300;
          v231 = v298;
          v232 = v299;
          v234 = v323;
          v235 = v267;
          v236 = v214;
          v237 = v330;
          v238 = v268;
          v239 = v215;
          v240 = v292;
          v241 = v269;
          v242 = v216;
          v243 = v132;
          v244 = v181;
          v245 = v213;
          v246 = v320;
          v247 = v75;
          v248 = _mm_loadu_si128((const __m128i *)(v122 + 336));
          if ( !(_BYTE)v328 )
          {
            if ( 2 * *off_142240260 )
            {
              v332 = 1;
              if ( !(unsigned __int8)sub_14196A710((unsigned __int8)v319, v130, v131) )
                *(_BYTE *)(v122 + 17) = 1;
            }
          }
          v137 = Address;
          v138 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v138 == 2 )
          {
            v332 = 1;
            WakeByAddressSingle(v137);
          }
          v139 = v333;
          if ( !v220 )
            goto LABEL_176;
          v140 = v219.m128i_i64[1];
          v141 = v220 << 8;
          v142 = *(_QWORD *)(v333 + 9192);
          v143 = *(_QWORD *)(v333 + 9200);
          while ( *(_QWORD *)(v140 + 16) != v143 || (unsigned int)sub_141923B40(*(_QWORD *)(v140 + 8), v142, v143) )
          {
            v140 += 256;
            v141 -= 256;
            if ( !v141 )
              goto LABEL_176;
          }
          v144 = *(_QWORD *)(v139 + 9744);
          v332 = 1;
          sub_1414331D0(&v285);
          v145 = (v285.m128i_i32[0] >> 13) - 1;
          v146 = 0;
          if ( v285.m128i_i32[0] >> 13 <= 0 )
          {
            v147 = (1 - (v285.m128i_i32[0] >> 13)) / 0x190u + 1;
            v145 += 400 * v147;
            v146 = -146097 * v147;
          }
          v332 = 1;
          if ( (unsigned __int8)sub_14063CCB0(
                                  v140,
                                  (int)v333 + 9488,
                                  (unsigned int)&v294,
                                  v144,
                                  1000
                                * (v285.m128i_u32[1]
                                 + 86400LL
                                 * (((v145 / 100) >> 2)
                                  + ((1461 * v145) >> 2)
                                  + v146
                                  + (((unsigned __int32)v285.m128i_i32[0] >> 4) & 0x1FF)
                                  - v145 / 100
                                  - 719163))
                                + v285.m128i_u32[2] / 0xF4240uLL) )
          {
            v148 = *(_QWORD *)(v333 + 9184);
            sub_1419234B0(&v285, &v219, 384);
            v332 = 0;
            sub_140EB5DA0(&v298, v148, &v285);
            if ( (_QWORD)v298 != -1 )
            {
              v24 = *((_QWORD *)&v298 + 1);
              v330 = v298;
              LOBYTE(v25) = v299.m128i_i8[0];
              v151 = v299.m128i_u8[7];
              v152 = *(unsigned __int16 *)((char *)&v299.m128i_u16[2] + 1);
              v153 = *(unsigned int *)((char *)v299.m128i_u32 + 1);
              v27 = _mm_loadu_si128((const __m128i *)&v299.m128i_u64[1]);
              v323 = v301;
              Address = v302;
              v2 = v303;
              v154 = v304;
              v29 = v305;
              *(_DWORD *)v324 = *(_DWORD *)v307;
              *(_DWORD *)&v324[3] = *(_DWORD *)&v307[3];
              v155 = (char *)(v317 + 16);
              LOBYTE(v319) = v306;
              if ( !(_BYTE)v321 )
              {
                if ( 2 * *off_142240260 )
                {
                  LODWORD(v321) = v299.m128i_u8[7];
                  v163 = v305;
                  v164 = v304;
                  v334 = 1;
                  v165 = sub_14196A710(v304, v306, v299.m128i_u8[7]);
                  v154 = v164;
                  v29 = v163;
                  v151 = (int)v321;
                  if ( !v165 )
                    *(_BYTE *)(v317 + 17) = 1;
                }
              }
              v328 = v154;
              v26 = ((unsigned __int64)((v151 << 16) | v152) << 32) | v153;
              v156 = *v155;
              *v155 = 0;
              if ( v156 == 2 )
              {
                v334 = 1;
                WakeByAddressSingle(v155);
              }
              goto LABEL_74;
            }
            v24 = v294.m128i_i64[0];
            LOBYTE(v25) = v294.m128i_i8[8];
            v158 = (unsigned __int64)((v294.m128i_u8[15] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v294.m128i_u16[6] + 1)) << 32;
            v26 = v158 | *(unsigned int *)((char *)&v294.m128i_u32[2] + 1);
            v27 = _mm_load_si128(&v295);
            v29 = *((_QWORD *)&v296 + 1);
            v157 = v296;
            v2 = v297;
          }
          else
          {
LABEL_176:
            v24 = v294.m128i_i64[0];
            LOBYTE(v25) = v294.m128i_i8[8];
            v26 = ((unsigned __int64)((v294.m128i_u8[15] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v294.m128i_u16[6] + 1)) << 32)
                | *(unsigned int *)((char *)&v294.m128i_u32[2] + 1);
            v27 = _mm_load_si128(&v295);
            v29 = *((_QWORD *)&v296 + 1);
            v157 = v296;
            v2 = v297;
            sub_140292E20(&v219);
          }
          v159 = (char *)(v317 + 16);
          Address = (PVOID)v29;
          if ( !(_BYTE)v321 )
          {
            if ( 2 * *off_142240260 )
            {
              v334 = 0;
              if ( !(unsigned __int8)sub_14196A710(v158, v149, v150) )
                *(_BYTE *)(v317 + 17) = 1;
            }
          }
          v160 = *v159;
          *v159 = 0;
          if ( v160 == 2 )
          {
            v334 = 0;
            WakeByAddressSingle(v159);
          }
          v161 = v333;
          sub_140292FD0(v333 + 9488);
          sub_140292FD0(v161 + 9232);
          *(_BYTE *)(v161 + 10505) = 0;
          *(_DWORD *)&v311[3] = *(_DWORD *)&v324[3];
          *(_DWORD *)v311 = *(_DWORD *)v324;
          *(_BYTE *)(v161 + 10504) = 1;
          v330 = -1;
          v20 = v326;
          v28 = v157;
LABEL_90:
          *(_DWORD *)&v291[3] = *(_DWORD *)&v311[3];
          *(_DWORD *)v291 = *(_DWORD *)v311;
          v313 = v329;
          v312 = v331;
          sub_1402854B0(v20);
          if ( v330 == -1 )
          {
            if ( v24 == -1 )
            {
              v330 = v27.m128i_i64[0];
              v13 = _mm_shuffle_epi32(v27, 238).m128i_u64[0];
              if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v333 + 9112)) )
                goto LABEL_94;
              goto LABEL_93;
            }
            v196 = v28;
            v197 = Address;
            v198 = v2;
            v190 = v24;
            v191 = v25;
            v192 = v26;
            v194 = BYTE6(v26);
            v193 = WORD2(v26);
            v195 = v27;
            v313 = v329;
            v312 = v331;
            sub_140CF9D90(&v285, &v190);
            v95 = v285.m128i_i64[0];
            LOBYTE(v25) = v285.m128i_i8[8];
            v99 = v285.m128i_u8[15];
            v100 = *(unsigned __int16 *)((char *)&v285.m128i_u16[6] + 1);
            v101 = *(unsigned int *)((char *)&v285.m128i_u32[2] + 1);
            v13 = *(_QWORD *)&v286[8];
            v330 = *(_QWORD *)v286;
            v93 = *(_QWORD *)&v286[16];
            v257 = *(__m128i *)&v286[24];
            v258 = *(_OWORD *)&v286[40];
            v259 = *(_OWORD *)&v286[56];
            v260 = v287;
            v261 = v288;
            v262 = _mm_loadu_si128(&v289);
            v263 = v290;
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v333 + 9112)) )
            {
              v276 = v329;
              v275 = v331;
              sub_140CA5830(v333 + 9112);
            }
            v102 = v333;
            *(_BYTE *)(v333 + 10513) = 0;
            v103 = *(_QWORD *)(v102 + 9088);
            if ( v103 )
            {
              sub_140001660(*(_QWORD *)(v102 + 9096), v103, 1);
              v102 = v333;
            }
            v212 = v263;
            v211 = v262;
            v210 = v261;
            v104 = _mm_load_si128(&v257);
            v209 = v260;
            v208 = v259;
            v207 = v258;
            v206 = v104;
            *(_BYTE *)(v102 + 10512) = 1;
            if ( v95 != -2 )
            {
              v26 = ((unsigned __int64)((v99 << 16) | v100) << 32) | v101;
              goto LABEL_97;
            }
LABEL_113:
            *(_BYTE *)(v102 + 10520) = 3;
            *(_BYTE *)(v102 + 10528) = 3;
            v108 = 3;
            result = 1;
            v110 = v102;
            goto LABEL_133;
          }
          v285.m128i_i64[0] = v330;
          v285.m128i_i64[1] = v24;
          v286[0] = v25;
          *(_DWORD *)&v286[1] = v26;
          v286[7] = BYTE6(v26);
          *(_WORD *)&v286[5] = WORD2(v26);
          *(__m128i *)&v286[8] = v27;
          *(_QWORD *)&v286[24] = v28;
          *(_QWORD *)&v286[32] = Address;
          *(_OWORD *)&v286[40] = v2;
          *(_QWORD *)&v286[56] = v328;
          *(_QWORD *)&v286[64] = v29;
          LOBYTE(v287) = v319;
          *(_DWORD *)((char *)&v287 + 1) = *(_DWORD *)v291;
          DWORD1(v287) = *(_DWORD *)&v291[3];
          *(_QWORD *)&v298 = 0;
          *((_QWORD *)&v298 + 1) = 1;
          v299.m128i_i64[0] = 0;
          v220 = 1610612768;
          v219.m128i_i64[0] = (__int64)&v298;
          v219.m128i_i64[1] = (__int64)&off_141A19198;
          if ( (unsigned __int8)sub_140D76130(&v285, &v219) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_0,
              55,
              (unsigned int)&v325,
              (unsigned int)&unk_141A10708,
              (__int64)&off_141A19250);
          LOBYTE(v25) = v298;
          v90 = BYTE7(v298);
          v91 = *(unsigned __int16 *)((char *)&v298 + 5);
          v92 = *(unsigned int *)((char *)&v298 + 1);
          v330 = *((_QWORD *)&v298 + 1);
          v13 = v299.m128i_i64[0];
          v313 = v329;
          v312 = v331;
          sub_140292440(&v285);
          v26 = ((unsigned __int64)((v90 << 16) | v91) << 32) | v92;
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v333 + 9112)) )
            goto LABEL_94;
LABEL_93:
          v276 = v329;
          v275 = v331;
          sub_140CA5830(v333 + 9112);
LABEL_94:
          v93 = v333;
          *(_BYTE *)(v333 + 10513) = 0;
          v94 = *(_QWORD *)(v93 + 9088);
          if ( v94 )
            sub_140001660(*(_QWORD *)(v93 + 9096), v94, 1);
          v212 = v263;
          v211 = v262;
          v210 = v261;
          v209 = v260;
          v208 = v259;
          v207 = v258;
          v206 = _mm_load_si128(&v257);
          *(_BYTE *)(v93 + 10512) = 1;
          v95 = -1;
LABEL_97:
          v189 = v212;
          v188 = v211;
          v187 = v210;
          v186 = v209;
          v185 = v208;
          v184 = v207;
          v183 = _mm_load_si128(&v206);
          sub_1402879C0(v318);
          if ( v95 == -1 )
          {
            v105 = v26 << 8;
            v106 = v105 | (unsigned __int8)v25;
            if ( v13 < 0 )
            {
              v107 = 0;
              goto LABEL_110;
            }
            if ( v13 )
            {
              nullsub_1(v97, v96);
              v107 = 1;
              v112 = sub_140001650(v13, 1);
              if ( !v112 )
              {
LABEL_110:
                v331 = v105 | (unsigned __int8)v25;
                sub_14196B2DB(v107, v13);
              }
              v11 = v112;
              sub_1419234B0(v112, v330, v13);
            }
            else
            {
              v11 = 1;
            }
            v111 = v327;
            if ( v106 )
            {
              v115 = v327;
              sub_140001660(v330, v106, 1);
              v111 = v115;
            }
            v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)v11);
            v36 = 1;
            v9 = 3;
            goto LABEL_126;
          }
          v180 = v189;
          v179 = v188;
          v178 = v187;
          v98 = _mm_load_si128(&v183);
          v177 = v186;
          v176 = v185;
          v175 = v184;
          v174 = v98;
          v166 = v95;
          v167 = v25;
          v168 = v26;
          v170 = BYTE6(v26);
          v169 = WORD2(v26);
          v171 = v330;
          v172 = v13;
          v173 = v93;
          sub_140D7FCA0(&v285, &v166);
          v11 = ((unsigned __int64)((v285.m128i_u8[15] << 16)
                                  | (unsigned int)*(unsigned __int16 *)((char *)&v285.m128i_u16[6] + 1)) << 32)
              | *(unsigned int *)((char *)&v285.m128i_u32[2] + 1);
          v9 = v285.m128i_i8[8];
          v12 = _mm_loadu_si128((const __m128i *)v286);
          v13 = *(_QWORD *)&v286[16];
          if ( v285.m128i_i64[0] == -1 )
          {
            v36 = 0;
          }
          else
          {
            v285.m128i_i8[15] = (((unsigned __int64)((v285.m128i_u8[15] << 16)
                                                   | (unsigned int)*(unsigned __int16 *)((char *)&v285.m128i_u16[6] + 1)) << 32)
                               | *(unsigned int *)((char *)&v285.m128i_u32[2] + 1)) >> 48;
            *(__int16 *)((char *)&v285.m128i_i16[6] + 1) = WORD2(v11);
            *(__int32 *)((char *)&v285.m128i_i32[2] + 1) = v11;
            *(__m128i *)v286 = v12;
            v257.m128i_i64[0] = 0;
            v257.m128i_i64[1] = 1;
            *(_QWORD *)&v258 = 0;
            v220 = 1610612768;
            v219.m128i_i64[0] = (__int64)&v257;
            v219.m128i_i64[1] = (__int64)&off_141A19198;
            if ( (unsigned __int8)sub_141473A60(&v285, &v219) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_0,
                55,
                (unsigned int)&v325,
                (unsigned int)&unk_141A10708,
                (__int64)&off_141A19250);
            v12 = _mm_load_si128(&v257);
            v13 = v258;
            sub_14028D380(&v285);
            v36 = 1;
            v9 = 3;
          }
          v111 = v327;
LABEL_126:
          *v283 = 1;
          sub_14028D200(v111);
          v37 = v333;
          if ( *(_QWORD *)(v333 + 5984) != -1 )
          {
            v326 = (const __m128i *)(v333 + 5992);
            v117 = *(_QWORD *)(v333 + 5992);
            v329 = *(_QWORD *)(v333 + 6000);
            v331 = 0;
            v330 = v117;
            while ( v329 != v331 )
            {
              ++v331;
              v118 = v117 + 96;
              sub_1401AFF50(v117, v116);
              v117 = v118;
            }
            v37 = v333;
            v35 = *(_QWORD *)(v333 + 5984);
            if ( v35 )
LABEL_131:
              sub_140001660(v326->m128i_i64[0], 96 * v35, 8);
          }
LABEL_132:
          *(_BYTE *)(v37 + 10528) = 1;
          sub_1402834B0(v327);
          v201 = v11;
          v203 = BYTE6(v11);
          v202 = WORD2(v11);
          v205 = v13;
          v200 = v9;
          v204 = v12;
          v199 = v36;
          v119 = v333;
          *(_BYTE *)(v333 + 10547) = 0;
          sub_1419234B0(&v285, v119, 360);
          *(_BYTE *)(v119 + 10546) = 0;
          v120 = *(_QWORD *)(v119 + 384);
          *(_BYTE *)(v119 + 10545) = 0;
          v220 = *(_QWORD *)(v119 + 376);
          v219 = _mm_loadu_si128((const __m128i *)(v119 + 360));
          sub_140B39980(
            (unsigned int)&v285,
            v120,
            (unsigned int)&v199,
            (unsigned int)&v219,
            *(_DWORD *)(v119 + 10536),
            *(_DWORD *)(v119 + 10540));
          v108 = 1;
          result = 0;
          v110 = v333;
LABEL_133:
          *(_BYTE *)(v110 + 10544) = v108;
          return result;
        case 1:
LABEL_199:
          v318 = v16;
          v327 = v6;
          sub_14196B990(&off_141A0F478);
        case 2:
LABEL_198:
          v318 = v16;
          v327 = v6;
          sub_14196B9B0(&off_141A0F478);
        case 3:
LABEL_13:
          v21 = (_BYTE *)(v4 + 10504);
          v20 = (const __m128i *)(v4 + 9120);
          switch ( *(_BYTE *)(v4 + 10504) )
          {
            case 0:
              v17 = *(_QWORD **)(v4 + 9144);
              v19 = *(_QWORD *)(v4 + 9152);
              v18 = *(_QWORD *)(v4 + 9160);
              v22 = _mm_loadu_si128((const __m128i *)(v4 + 9168));
              goto LABEL_15;
            case 1:
              v318 = v16;
              v327 = v6;
              v274 = v4 + 9120;
              sub_14196B990(&off_141A0EAE8);
            case 2:
              v318 = v16;
              v327 = v6;
              v274 = v4 + 9120;
              sub_14196B9B0(&off_141A0EAE8);
            case 3:
              v326 = (const __m128i *)(v4 + 9120);
              v318 = v16;
              v327 = v6;
              goto LABEL_63;
          }
      }
  }
}
