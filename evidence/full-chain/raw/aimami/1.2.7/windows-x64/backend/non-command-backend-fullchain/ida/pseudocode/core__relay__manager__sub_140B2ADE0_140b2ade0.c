// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140b2ade0 | name sub_140B2ADE0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140B2ADE0(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm7
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  const __m128i *v7; // r13
  __int64 v8; // rsi
  __int8 v9; // bl
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  __m128i v12; // xmm6
  signed __int64 v13; // rdi
  __int64 v14; // rax
  const __m128i *v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  const __m128i *v20; // r12
  _BYTE *v21; // r13
  __m128i v22; // xmm8
  __int64 v23; // rax
  __int64 v24; // r13
  __m128i *v25; // rsi
  unsigned __int64 v26; // r15
  __m128i v27; // xmm6
  _QWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rax
  unsigned __int8 v35; // r14
  __int64 v36; // r15
  __int64 v37; // r12
  __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rdx
  int v42; // ecx
  _QWORD *v43; // rdi
  __int64 v44; // r14
  char v45; // bl
  unsigned __int64 v46; // rax
  __int64 v47; // r12
  unsigned __int64 v48; // r14
  __int64 v49; // rsi
  __int64 v50; // r15
  __int64 v51; // r14
  char v52; // r12
  char v53; // r13
  int v54; // esi
  __m128i v55; // xmm6
  __int64 v56; // rax
  _QWORD *v57; // r14
  __int64 v58; // r9
  __m128i *v59; // rdx
  char v60; // cl
  __int32 v61; // edx
  int v62; // ecx
  unsigned __int32 v63; // ecx
  int v64; // ebx
  unsigned int v65; // edi
  __int64 v66; // r15
  __int64 v67; // r14
  unsigned __int64 v68; // rdi
  __m128i v69; // xmm6
  char v70; // bl
  __m128i v71; // xmm0
  _BYTE *v72; // rdx
  _BYTE *v73; // rdi
  __int64 v74; // rcx
  __int64 *v75; // r15
  __int64 v76; // rbx
  __m128i *v77; // rax
  __int64 v78; // rcx
  char v79; // al
  __int64 v80; // rbx
  __int64 v81; // rdi
  __int64 v82; // r14
  _QWORD *v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rdx
  int v86; // r14d
  unsigned int v87; // ebx
  __int64 v88; // r15
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // r14
  __int64 v92; // rcx
  __m128i v93; // xmm0
  int v94; // r13d
  unsigned int v95; // r12d
  __int64 v96; // r15
  __int64 v97; // r8
  __int64 v98; // rdx
  __m128i v99; // xmm0
  unsigned __int64 v100; // r15
  unsigned __int64 v101; // r14
  __int64 v102; // rbx
  char v103; // cl
  char result; // al
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rsi
  int v108; // r14d
  __int16 v109; // di
  __int64 v110; // rax
  __m128i *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rcx
  const __m128i *v114; // rdx
  const __m128i *v115; // rbx
  char v116; // r15
  char v117; // r13
  char v118; // r12
  char v119; // di
  _QWORD *v120; // r14
  __int64 v121; // rax
  __int64 v122; // rbx
  const __m128i *v123; // rcx
  const __m128i *v124; // r15
  __int64 v125; // rdi
  __int64 v126; // rdx
  bool v127; // zf
  __int128 v128; // xmm0
  char *v129; // rdi
  char v130; // al
  __int64 v131; // r12
  __int64 v132; // rsi
  __int64 v133; // r15
  __int64 v134; // rdi
  __int64 v135; // rbx
  __int64 v136; // rdi
  __int32 v137; // r8d
  int v138; // ecx
  unsigned __int32 v139; // ecx
  __int64 v140; // rsi
  int v141; // r8d
  unsigned int v142; // edi
  __int64 v143; // r15
  __int64 v144; // rcx
  char *v145; // r12
  char v146; // al
  int v147; // ebx
  unsigned int v148; // edi
  __int64 v149; // r15
  __int64 v150; // r12
  _QWORD *v151; // r14
  __int64 *v152; // rcx
  char *v153; // rdi
  char v154; // al
  __int64 v155; // rdi
  unsigned int v156; // eax
  int v157; // eax
  __int64 v158; // r14
  char v159; // al
  __int64 v160; // [rsp+30h] [rbp-50h] BYREF
  char v161; // [rsp+38h] [rbp-48h]
  int v162; // [rsp+39h] [rbp-47h]
  __int16 v163; // [rsp+3Dh] [rbp-43h]
  char v164; // [rsp+3Fh] [rbp-41h]
  const __m128i *v165; // [rsp+40h] [rbp-40h]
  signed __int64 v166; // [rsp+48h] [rbp-38h]
  __int64 v167; // [rsp+50h] [rbp-30h]
  __m128i v168; // [rsp+58h] [rbp-28h]
  __int128 v169; // [rsp+68h] [rbp-18h]
  __int128 v170; // [rsp+78h] [rbp-8h]
  __int128 v171; // [rsp+88h] [rbp+8h]
  __m128i v172; // [rsp+98h] [rbp+18h]
  __m128i v173; // [rsp+A8h] [rbp+28h]
  __int64 v174; // [rsp+B8h] [rbp+38h]
  __m128i v175; // [rsp+C0h] [rbp+40h]
  __m128i v176; // [rsp+D0h] [rbp+50h]
  __m128i v177; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v178; // [rsp+F0h] [rbp+70h]
  __int128 v179; // [rsp+100h] [rbp+80h]
  __int128 v180; // [rsp+110h] [rbp+90h]
  __m128i v181; // [rsp+120h] [rbp+A0h]
  __m128i v182; // [rsp+130h] [rbp+B0h]
  __int64 v183; // [rsp+140h] [rbp+C0h]
  __int64 v184; // [rsp+148h] [rbp+C8h] BYREF
  char v185; // [rsp+150h] [rbp+D0h]
  int v186; // [rsp+151h] [rbp+D1h]
  __int16 v187; // [rsp+155h] [rbp+D5h]
  char v188; // [rsp+157h] [rbp+D7h]
  __m128i v189; // [rsp+158h] [rbp+D8h]
  _QWORD *v190; // [rsp+168h] [rbp+E8h]
  __int64 v191; // [rsp+170h] [rbp+F0h]
  __int128 v192; // [rsp+178h] [rbp+F8h]
  __int64 v193; // [rsp+188h] [rbp+108h] BYREF
  __int8 v194; // [rsp+190h] [rbp+110h]
  int v195; // [rsp+191h] [rbp+111h]
  __int16 v196; // [rsp+195h] [rbp+115h]
  char v197; // [rsp+197h] [rbp+117h]
  __m128i v198; // [rsp+198h] [rbp+118h]
  signed __int64 v199; // [rsp+1A8h] [rbp+128h]
  __m128i v200; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v201; // [rsp+1C0h] [rbp+140h]
  __int128 v202; // [rsp+1D0h] [rbp+150h]
  __int128 v203; // [rsp+1E0h] [rbp+160h]
  __m128i v204; // [rsp+1F0h] [rbp+170h]
  __m128i v205; // [rsp+200h] [rbp+180h]
  __int64 v206; // [rsp+210h] [rbp+190h]
  __int64 v207; // [rsp+228h] [rbp+1A8h]
  __int64 v208; // [rsp+230h] [rbp+1B0h]
  __int64 v209; // [rsp+238h] [rbp+1B8h]
  __m128i v210; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v211; // [rsp+250h] [rbp+1D0h]
  __m128i v212; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v213; // [rsp+270h] [rbp+1F0h]
  __m128i v214; // [rsp+278h] [rbp+1F8h]
  __int64 v215; // [rsp+288h] [rbp+208h]
  __m128i v216; // [rsp+290h] [rbp+210h]
  __int128 v217; // [rsp+2A0h] [rbp+220h]
  __int128 v218; // [rsp+2B0h] [rbp+230h]
  __int128 v219; // [rsp+2C0h] [rbp+240h]
  __int128 v220; // [rsp+2D0h] [rbp+250h]
  __int128 v221; // [rsp+2E0h] [rbp+260h]
  __int64 v222; // [rsp+2F0h] [rbp+270h]
  __int64 v223; // [rsp+2F8h] [rbp+278h]
  __int128 v224; // [rsp+300h] [rbp+280h]
  __m128i v225; // [rsp+310h] [rbp+290h]
  __int64 v226; // [rsp+320h] [rbp+2A0h]
  __int64 v227; // [rsp+328h] [rbp+2A8h]
  __int64 v228; // [rsp+330h] [rbp+2B0h]
  __int64 v229; // [rsp+338h] [rbp+2B8h]
  __int64 v230; // [rsp+340h] [rbp+2C0h]
  __int64 v231; // [rsp+348h] [rbp+2C8h]
  __int64 v232; // [rsp+350h] [rbp+2D0h]
  __int64 v233; // [rsp+358h] [rbp+2D8h]
  __int64 v234; // [rsp+360h] [rbp+2E0h]
  __int64 v235; // [rsp+368h] [rbp+2E8h]
  __int64 v236; // [rsp+370h] [rbp+2F0h]
  __m128i v237; // [rsp+378h] [rbp+2F8h]
  _QWORD *v238; // [rsp+388h] [rbp+308h]
  __int16 v239; // [rsp+390h] [rbp+310h]
  __int16 v240; // [rsp+392h] [rbp+312h]
  __m128i v241; // [rsp+398h] [rbp+318h]
  __int128 v242; // [rsp+3A8h] [rbp+328h]
  __int128 v243; // [rsp+3B8h] [rbp+338h]
  int v244; // [rsp+3C8h] [rbp+348h]
  char v245; // [rsp+3CCh] [rbp+34Ch]
  char v246; // [rsp+3CDh] [rbp+34Dh]
  __m128i v247; // [rsp+3CEh] [rbp+34Eh]
  char v248; // [rsp+3DEh] [rbp+35Eh]
  char v249; // [rsp+3DFh] [rbp+35Fh]
  __m128i v250; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v251; // [rsp+3F0h] [rbp+370h]
  __int128 v252; // [rsp+400h] [rbp+380h]
  __int128 v253; // [rsp+410h] [rbp+390h]
  __m128i v254; // [rsp+420h] [rbp+3A0h]
  __m128i v255; // [rsp+430h] [rbp+3B0h]
  __int64 v256; // [rsp+440h] [rbp+3C0h]
  __int128 v257; // [rsp+448h] [rbp+3C8h] BYREF
  __int64 v258; // [rsp+458h] [rbp+3D8h]
  const __m128i *v259; // [rsp+460h] [rbp+3E0h]
  __int64 v260; // [rsp+468h] [rbp+3E8h]
  __int64 v261; // [rsp+470h] [rbp+3F0h]
  __int64 v262; // [rsp+478h] [rbp+3F8h]
  __m128i v263; // [rsp+480h] [rbp+400h] BYREF
  __int64 v264; // [rsp+490h] [rbp+410h]
  __int64 v265; // [rsp+4A0h] [rbp+420h]
  __int64 v266; // [rsp+4A8h] [rbp+428h]
  __int64 v267; // [rsp+4B0h] [rbp+430h]
  __int64 v268; // [rsp+4B8h] [rbp+438h]
  __int64 v269; // [rsp+4C0h] [rbp+440h]
  const __m128i *v270; // [rsp+4C8h] [rbp+448h]
  __int64 v271; // [rsp+4D0h] [rbp+450h]
  __int64 v272; // [rsp+4D8h] [rbp+458h]
  const __m128i *v273; // [rsp+4E0h] [rbp+460h]
  __int64 v274; // [rsp+4E8h] [rbp+468h]
  __int64 v275; // [rsp+4F0h] [rbp+470h]
  _BYTE *v276; // [rsp+4F8h] [rbp+478h]
  __m128i v277; // [rsp+500h] [rbp+480h] BYREF
  _BYTE v278[72]; // [rsp+510h] [rbp+490h] BYREF
  __int128 v279; // [rsp+558h] [rbp+4D8h]
  __m128i v280; // [rsp+568h] [rbp+4E8h] BYREF
  __m128i v281; // [rsp+578h] [rbp+4F8h] BYREF
  __int64 v282; // [rsp+588h] [rbp+508h]
  _BYTE v283[7]; // [rsp+688h] [rbp+608h]
  __int64 v284; // [rsp+690h] [rbp+610h]
  __int64 v285; // [rsp+698h] [rbp+618h]
  __m128i v286; // [rsp+6A0h] [rbp+620h] BYREF
  __m128i v287; // [rsp+6B0h] [rbp+630h] BYREF
  __int128 v288; // [rsp+6C0h] [rbp+640h]
  __int128 v289; // [rsp+6D0h] [rbp+650h]
  __int128 v290; // [rsp+6E0h] [rbp+660h] BYREF
  __m128i v291; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v292; // [rsp+700h] [rbp+680h]
  _QWORD *v293; // [rsp+708h] [rbp+688h]
  __int64 v294; // [rsp+710h] [rbp+690h]
  __int128 v295; // [rsp+718h] [rbp+698h]
  __int64 v296; // [rsp+728h] [rbp+6A8h]
  __int64 v297; // [rsp+730h] [rbp+6B0h]
  char v298; // [rsp+738h] [rbp+6B8h]
  _BYTE v299[7]; // [rsp+739h] [rbp+6B9h]
  _BYTE v300[24]; // [rsp+740h] [rbp+6C0h] BYREF
  _DWORD v301[2]; // [rsp+760h] [rbp+6E0h]
  _BYTE v302[7]; // [rsp+768h] [rbp+6E8h]
  __int64 v303; // [rsp+770h] [rbp+6F0h]
  __int64 v304; // [rsp+778h] [rbp+6F8h]
  const __m128i *v305; // [rsp+780h] [rbp+700h]
  __int64 v306; // [rsp+788h] [rbp+708h]
  __int64 v307; // [rsp+790h] [rbp+710h]
  __m128i v308; // [rsp+798h] [rbp+718h] BYREF
  __int64 v309; // [rsp+7A8h] [rbp+728h]
  __int64 v310; // [rsp+7B0h] [rbp+730h]
  _QWORD *v311; // [rsp+7B8h] [rbp+738h]
  _BYTE *v312; // [rsp+7C0h] [rbp+740h]
  __int64 v313; // [rsp+7C8h] [rbp+748h]
  __int64 v314; // [rsp+7D0h] [rbp+750h]
  _DWORD v315[2]; // [rsp+7D8h] [rbp+758h]
  _QWORD *v316; // [rsp+7E0h] [rbp+760h]
  __int64 v317; // [rsp+7E8h] [rbp+768h]
  __int64 v318; // [rsp+7F0h] [rbp+770h]
  char v319; // [rsp+7FFh] [rbp+77Fh] BYREF
  __int64 v320; // [rsp+800h] [rbp+780h]
  __int64 v321; // [rsp+808h] [rbp+788h]
  __int64 v322; // [rsp+810h] [rbp+790h]
  const __m128i *v323; // [rsp+818h] [rbp+798h]
  __int64 v324; // [rsp+820h] [rbp+7A0h]
  __int64 v325; // [rsp+828h] [rbp+7A8h]
  char v326; // [rsp+837h] [rbp+7B7h]
  __int64 v327; // [rsp+838h] [rbp+7B8h]
  char v328; // [rsp+846h] [rbp+7C6h]
  char v329; // [rsp+847h] [rbp+7C7h]
  __int64 v330; // [rsp+848h] [rbp+7C8h]

  v330 = -2;
  v4 = a1;
  v5 = *(unsigned __int8 *)(a1 + 10544);
  v327 = a1;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a1 + 10545) = 257;
      *(_BYTE *)(a1 + 10547) = 1;
      v6 = a1 + 5464;
      sub_1418F44E0((__m128i *)(a1 + 5464), (const __m128i *)(a1 + 392), 0x13D0u);
      switch ( *(_BYTE *)(v4 + 10528) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_199;
        case 2:
          goto LABEL_198;
        case 3:
          goto LABEL_9;
      }
    case 1LL:
      sub_1419393E0(&off_141A28008);
    case 2LL:
      sub_141939400(&off_141A28008);
    case 3LL:
      v6 = a1 + 5464;
      switch ( *(_BYTE *)(a1 + 10528) )
      {
        case 0:
LABEL_4:
          v7 = (const __m128i *)(v4 + 5984);
          *(_QWORD *)&v278[32] = 0;
          v277.m128i_i64[0] = (__int64)aTestRelayProvi;
          v277.m128i_i64[1] = 26;
          *(_QWORD *)v278 = aManager_1;
          *(_QWORD *)&v278[8] = 7;
          v321 = v6;
          *(_QWORD *)&v278[16] = v6;
          *(_QWORD *)&v278[24] = v4 + 5984;
          v8 = sub_1404CA940((volatile void *)(*(_QWORD *)(v4 + 5976) + 16LL));
          v323 = v7;
          if ( v8 )
            goto LABEL_5;
          sub_14190D280(&v212, &v277, v278);
          v9 = v212.m128i_i8[0];
          if ( v212.m128i_i8[0] != -1 )
            goto LABEL_18;
          v8 = v212.m128i_i64[1];
LABEL_5:
          *(_QWORD *)&v278[32] = 0;
          v277.m128i_i64[0] = (__int64)aTestRelayProvi;
          v277.m128i_i64[1] = 26;
          *(_QWORD *)v278 = aProviderid_2;
          *(_QWORD *)&v278[8] = 10;
          *(_QWORD *)&v278[16] = v321;
          *(_QWORD *)&v278[24] = v7;
          sub_14073A830(&v212, &v277);
          v9 = v212.m128i_i8[0];
          if ( v212.m128i_i8[0] != -1 )
          {
LABEL_18:
            v11 = ((unsigned __int64)((v212.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v212.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v212.m128i_u32 + 1);
            v12 = _mm_loadu_si128((const __m128i *)&v212.m128i_u64[1]);
            v13 = v214.m128i_i64[0];
LABEL_19:
            v31 = v321;
            goto LABEL_20;
          }
          v325 = v212.m128i_i64[1];
          v324 = v213;
          v10 = v214.m128i_i64[0];
          *(_QWORD *)&v278[32] = 0;
          v277.m128i_i64[0] = (__int64)aTestRelayProvi;
          v277.m128i_i64[1] = 26;
          *(_QWORD *)v278 = aModel_4;
          *(_QWORD *)&v278[8] = 5;
          *(_QWORD *)&v278[16] = v321;
          *(_QWORD *)&v278[24] = v7;
          sub_140738680(&v212, &v277);
          v9 = v212.m128i_i8[0];
          if ( v212.m128i_i8[0] != -1 )
          {
            v11 = ((unsigned __int64)((v212.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v212.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v212.m128i_u32 + 1);
            v12 = _mm_loadu_si128((const __m128i *)&v212.m128i_u64[1]);
            v13 = v214.m128i_i64[0];
            if ( v325 )
              sub_140001660(v324, v325, 1);
            goto LABEL_19;
          }
          v316 = (_QWORD *)v212.m128i_i64[1];
          v317 = v213;
          v47 = v214.m128i_i64[0];
          *(_QWORD *)&v278[32] = 0;
          v277.m128i_i64[0] = (__int64)aTestRelayProvi;
          v277.m128i_i64[1] = 26;
          *(_QWORD *)v278 = aOnevent_0;
          *(_QWORD *)&v278[8] = 7;
          *(_QWORD *)&v278[16] = v321;
          *(_QWORD *)&v278[24] = v7;
          sub_140DD6100(&v212, &v277);
          v9 = v212.m128i_i8[0];
          if ( v212.m128i_i8[0] == -1 )
          {
            v112 = v212.m128i_i64[1];
            v113 = v327;
            v114 = (const __m128i *)(v327 + 6008);
            *(_QWORD *)(v327 + 6056) = v8;
            *(_QWORD *)(v113 + 6008) = v325;
            *(_QWORD *)(v113 + 6016) = v324;
            *(_QWORD *)(v113 + 6024) = v10;
            *(_QWORD *)(v113 + 6032) = v316;
            *(_QWORD *)(v113 + 6040) = v317;
            *(_QWORD *)(v113 + 6048) = v47;
            v4 = v113;
            *(_QWORD *)(v113 + 6064) = v112;
            *(_BYTE *)(v113 + 7504) = 0;
            v115 = (const __m128i *)(v113 + 7512);
            sub_1418F44E0((__m128i *)(v113 + 7512), v114, 0x5E0u);
            v15 = v115;
            v316 = (_QWORD *)(v4 + 10520);
            *(_BYTE *)(v4 + 10520) = 0;
            v6 = v321;
LABEL_10:
            v16 = v4 + 9016;
            v259 = v15;
            sub_1418F44E0((__m128i *)(v4 + 9016), v15, 0x5E0u);
            switch ( *(_BYTE *)(v4 + 10512) )
            {
              case 0:
                goto LABEL_12;
              case 1:
                goto LABEL_201;
              case 2:
                goto LABEL_200;
              case 3:
                goto LABEL_13;
            }
          }
          v48 = (unsigned __int64)((v212.m128i_u8[7] << 16)
                                 | (unsigned int)*(unsigned __int16 *)((char *)&v212.m128i_u16[2] + 1)) << 32;
          v49 = *(unsigned int *)((char *)v212.m128i_u32 + 1);
          v12 = _mm_loadu_si128((const __m128i *)&v212.m128i_u64[1]);
          v13 = v214.m128i_i64[0];
          v31 = v321;
          if ( (unsigned __int64)v316 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v50 = v321;
            sub_140001660(v317, v316, 1);
            v31 = v50;
          }
          v11 = v48 | v49;
          if ( v325 )
          {
            v51 = v31;
            sub_140001660(v324, v325, 1);
            v31 = v51;
          }
LABEL_20:
          sub_140A3BBB0(v31);
          if ( v323->m128i_i64[0] == -1 )
          {
            v35 = 1;
            v36 = v327;
            goto LABEL_147;
          }
          v316 = (_QWORD *)(v327 + 5992);
          v32 = *(_QWORD *)(v327 + 5992);
          v324 = *(_QWORD *)(v327 + 6000);
          v325 = 0;
          v317 = v32;
          while ( v324 != v325 )
          {
            ++v325;
            v33 = v32 + 96;
            sub_14038BB80();
            v32 = v33;
          }
          v34 = v323->m128i_i64[0];
          v35 = 1;
          v36 = v327;
          if ( !v323->m128i_i64[0] )
            goto LABEL_147;
          goto LABEL_146;
        case 1:
LABEL_199:
          v321 = v6;
          sub_1419393E0(&off_141A29B80);
        case 2:
LABEL_198:
          v321 = v6;
          sub_141939400(&off_141A29B80);
        case 3:
          goto LABEL_9;
      }
  }
LABEL_9:
  v14 = *(unsigned __int8 *)(v4 + 10520);
  v15 = (const __m128i *)(v4 + 7512);
  v316 = (_QWORD *)(v4 + 10520);
  switch ( v14 )
  {
    case 0LL:
      goto LABEL_10;
    case 1LL:
      v321 = v6;
      v266 = v4 + 10520;
      v265 = v4 + 7512;
      sub_1419393E0(&off_141A27F88);
    case 2LL:
      v321 = v6;
      v266 = v4 + 10520;
      v265 = v4 + 7512;
      sub_141939400(&off_141A27F88);
    case 3LL:
      v259 = (const __m128i *)(v4 + 7512);
      v16 = v4 + 9016;
      switch ( *(_BYTE *)(v4 + 10512) )
      {
        case 0:
LABEL_12:
          v17 = *(_QWORD *)(v4 + 9064);
          *(_QWORD *)(v4 + 9080) = v17;
          *(_OWORD *)(v4 + 9088) = *(_OWORD *)v16;
          v18 = *(_QWORD *)(v16 + 16);
          *(_QWORD *)(v4 + 9104) = v18;
          v325 = *(_QWORD *)(v4 + 9040);
          v324 = *(_QWORD *)(v4 + 9048);
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
          *(_QWORD *)(v4 + 9176) = &off_141A2B6D8;
          v21 = (_BYTE *)(v4 + 10504);
          *(_BYTE *)(v4 + 10504) = 0;
          v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v4 + 9112), (__m128i)(unsigned __int64)&off_141A2B6D8);
LABEL_15:
          v317 = v16;
          v321 = v6;
          *(_QWORD *)(v4 + 9184) = v17;
          *(_QWORD *)(v4 + 9192) = v19;
          *(_QWORD *)(v4 + 9200) = v18;
          *(_BYTE *)(v4 + 10505) = 1;
          *(__m128i *)(v4 + 9208) = _mm_loadu_si128(v20);
          *(_QWORD *)(v4 + 9224) = v20[1].m128i_i64[0];
          v23 = *(_QWORD *)(v17 + 16);
          if ( *(_QWORD *)(v23 + 16) != -1 )
          {
            v272 = v324;
            v271 = v325;
            v270 = v20;
            sub_1416AC440(&v277.m128i_u64[1], v23 + 16);
            v24 = v277.m128i_i64[1];
            LOBYTE(v25) = v278[0];
            v26 = ((unsigned __int64)((v278[7] << 16) | (unsigned int)*(unsigned __int16 *)&v278[5]) << 32)
                | *(unsigned int *)&v278[1];
            v27 = _mm_loadu_si128((const __m128i *)&v278[8]);
            v28 = *(_QWORD **)&v278[24];
            v318 = *(_QWORD *)&v278[32];
            v2 = *(_OWORD *)&v278[40];
            v322 = *(_QWORD *)&v278[56];
            v313 = *(_QWORD *)&v278[64];
            LOBYTE(v320) = v279;
            v315[0] = *(_DWORD *)((char *)&v279 + 1);
            *(_DWORD *)((char *)v315 + 3) = DWORD1(v279);
            v29 = 9;
            v30 = v327;
LABEL_86:
            v85 = *(_QWORD *)(v30 + 9208);
            if ( v85 != -1 && *(_BYTE *)(v30 + 10505) == 1 && v85 )
              sub_140001660(*(_QWORD *)(v30 + 9216), v85, 1);
            *(_BYTE *)(v30 + 10505) = 0;
            *(_DWORD *)&v302[3] = *(_DWORD *)((char *)v315 + 3);
            *(_DWORD *)v302 = v315[0];
            *(_BYTE *)(v30 + 10504) = 1;
            if ( v29 != -2 )
              goto LABEL_91;
LABEL_113:
            *(_BYTE *)(v30 + 10512) = 3;
            v97 = v30;
            goto LABEL_114;
          }
          v312 = v21;
          v313 = a2;
          v272 = v324;
          v271 = v325;
          v270 = v20;
          sub_140D87CF0(&v277);
          v323 = v20;
          v29 = v277.m128i_i64[1];
          v37 = v277.m128i_i64[0];
          v26 = ((unsigned __int64)((v278[15] << 16) | (unsigned int)*(unsigned __int16 *)&v278[13]) << 32)
              | *(unsigned int *)&v278[9];
          LOBYTE(v25) = v278[8];
          v27 = _mm_loadu_si128((const __m128i *)&v278[16]);
          v38 = *(_QWORD *)&v278[40];
          v28 = *(_QWORD **)&v278[32];
          v2 = *(_OWORD *)&v278[48];
          v39 = v279;
          v301[0] = *(_DWORD *)((char *)&v279 + 9);
          *(_DWORD *)((char *)v301 + 3) = HIDWORD(v279);
          LOBYTE(v320) = BYTE8(v279);
          v322 = *(_QWORD *)&v278[64];
          if ( v277.m128i_i64[0] == -1 )
          {
            v313 = v279;
            v318 = *(_QWORD *)&v278[40];
            v315[0] = v301[0];
            *(_DWORD *)((char *)v315 + 3) = *(_DWORD *)((char *)v301 + 3);
            v30 = v327;
            v20 = v323;
            v24 = *(_QWORD *)v278;
            goto LABEL_86;
          }
          v311 = *(_QWORD **)&v278[32];
          v40 = *(_QWORD *)v278;
          sub_1418F44E0(&v212, &v280, 0x98u);
          v41 = v327;
          v318 = v327 + 9232;
          *(_QWORD *)(v327 + 9232) = v37;
          *(_QWORD *)(v41 + 9240) = v29;
          *(_QWORD *)(v41 + 9248) = v40;
          *(_BYTE *)(v41 + 9256) = (_BYTE)v25;
          *(_BYTE *)(v41 + 9263) = BYTE6(v26);
          *(_WORD *)(v41 + 9261) = WORD2(v26);
          *(_DWORD *)(v41 + 9257) = v26;
          *(__m128i *)(v41 + 9264) = v27;
          *(_QWORD *)(v41 + 9280) = v311;
          *(_QWORD *)(v41 + 9288) = v38;
          *(_OWORD *)(v41 + 9296) = v2;
          *(_QWORD *)(v41 + 9312) = v322;
          *(_QWORD *)(v41 + 9320) = v39;
          *(_BYTE *)(v41 + 9328) = v320;
          v42 = *(_DWORD *)((char *)v301 + 3);
          *(_DWORD *)(v41 + 9329) = v301[0];
          *(_DWORD *)(v41 + 9332) = v42;
          v43 = (_QWORD *)(v41 + 9336);
          sub_1418F44E0((__m128i *)(v41 + 9336), &v212, 0x98u);
          v275 = v324;
          v274 = v325;
          v273 = v323;
          sub_1416AC440(&v263, v318);
          v44 = v327;
          sub_1416AC440(&v257, v327 + 9256);
          sub_1416AC440(v300, v44 + 9280);
          sub_1416AC440(&v308, v44 + 9304);
          v45 = *(_BYTE *)(v44 + 9484);
          v46 = 2;
          if ( *(__int64 *)(v44 + 9424) < 0 )
            v46 = *(_QWORD *)(v44 + 9424) ^ 0x8000000000000000uLL;
          if ( v46 )
          {
            if ( v46 == 1 )
            {
              v322 = 0x8000000000000001uLL;
            }
            else
            {
              sub_1416AC440(&v277, v44 + 9424);
              v320 = v277.m128i_i64[1];
              v322 = v277.m128i_i64[0];
              v26 = *(_QWORD *)v278;
              v44 = v327;
            }
          }
          else
          {
            v322 = 0x8000000000000000uLL;
          }
          v311 = (_QWORD *)(v44 + 9328);
          sub_1416AC440(&v286, v44 + 9328);
          v52 = *(_BYTE *)(v44 + 9486);
          v53 = *(_BYTE *)(v44 + 9487);
          sub_1403F7A40(&v290, v44 + 9352);
          sub_1416AC440(&v212, v44 + 9376);
          v54 = *(_DWORD *)(v44 + 9480);
          v55 = _mm_loadu_si128((const __m128i *)(v44 + 9448));
          v2 = *(_OWORD *)(v44 + 9464);
          if ( *(_QWORD *)(v44 + 9400) == -1 )
          {
            v56 = -1;
          }
          else
          {
            sub_1416AC440(&v277, v44 + 9400);
            v56 = v277.m128i_i64[0];
            v210 = _mm_loadu_si128((const __m128i *)&v277.m128i_u64[1]);
          }
          v57 = v43;
          v58 = v327;
          v59 = (__m128i *)(v327 + 9488);
          v60 = *(_BYTE *)(v327 + 9485);
          *(_QWORD *)(v327 + 9504) = v264;
          *v59 = v263;
          *(_QWORD *)(v58 + 9528) = v258;
          *(_OWORD *)(v58 + 9512) = v257;
          *(_OWORD *)(v58 + 9536) = *(_OWORD *)v300;
          *(_QWORD *)(v58 + 9552) = *(_QWORD *)&v300[16];
          *(__m128i *)(v58 + 9560) = v308;
          *(_QWORD *)(v58 + 9576) = v309;
          *(_BYTE *)(v58 + 9740) = v45;
          *(_QWORD *)(v58 + 9680) = v322;
          *(_QWORD *)(v58 + 9688) = v320;
          *(_QWORD *)(v58 + 9696) = v26;
          *(_QWORD *)(v58 + 9600) = v287.m128i_i64[0];
          *(__m128i *)(v58 + 9584) = v286;
          *(_BYTE *)(v58 + 9742) = v52;
          *(_BYTE *)(v58 + 9743) = v53;
          *(_OWORD *)(v58 + 9608) = v290;
          *(_QWORD *)(v58 + 9624) = v291.m128i_i64[0];
          *(__m128i *)(v58 + 9632) = v212;
          *(_QWORD *)(v58 + 9648) = v213;
          *(_DWORD *)(v58 + 9736) = v54;
          *(__m128i *)(v58 + 9704) = v55;
          *(_OWORD *)(v58 + 9720) = v2;
          *(_QWORD *)(v58 + 9656) = v56;
          *(__m128i *)(v58 + 9664) = _mm_load_si128(&v210);
          *(_BYTE *)(v58 + 9741) = v60;
          v307 = v324;
          v306 = v325;
          v305 = v323;
          sub_141406CE0(&v277);
          v61 = (v277.m128i_i32[0] >> 13) - 1;
          v62 = 0;
          a2 = v313;
          v21 = v312;
          if ( v277.m128i_i32[0] >> 13 <= 0 )
          {
            v63 = (1 - (v277.m128i_i32[0] >> 13)) / 0x190u + 1;
            v61 += 400 * v63;
            v62 = -146097 * v63;
          }
          v4 = v327;
          *(_QWORD *)(v327 + 9744) = 1000
                                   * (v277.m128i_u32[1]
                                    + 86400LL
                                    * (((v61 / 100) >> 2)
                                     + ((1461 * v61) >> 2)
                                     + v62
                                     + (((unsigned __int32)v277.m128i_i32[0] >> 4) & 0x1FF)
                                     - v61 / 100
                                     - 719163))
                                   + v277.m128i_u32[2] / 0xF4240uLL;
          if ( *(_QWORD *)(v4 + 9208) == -1 )
            goto LABEL_61;
          *(_BYTE *)(v4 + 10505) = 0;
          v287.m128i_i64[0] = *(_QWORD *)(v4 + 9224);
          v286 = _mm_loadu_si128((const __m128i *)(v4 + 9208));
          sub_140FED300(&v277, v318);
          *(_QWORD *)&v290 = v277.m128i_i64[1];
          *((_QWORD *)&v290 + 1) = v277.m128i_i64[1];
          v291.m128i_i64[0] = v277.m128i_i64[0];
          v291.m128i_i64[1] = v277.m128i_i64[1] + 96LL * *(_QWORD *)v278;
          sub_140398930(&v277, &v290, &v286);
          if ( v277.m128i_i32[0] == 2 )
          {
            v212.m128i_i64[0] = (__int64)&v286;
            v212.m128i_i64[1] = (__int64)sub_1400015F0;
            v213 = v327 + 9192;
            v214.m128i_i64[0] = (__int64)sub_140186EE0;
            sub_1416ABFD0(&v277.m128i_u64[1], &unk_141A2A340, &v212);
            v24 = v277.m128i_i64[1];
            LOBYTE(v25) = v278[0];
            v64 = v278[7];
            v65 = *(unsigned __int16 *)&v278[5];
            v66 = *(unsigned int *)&v278[1];
            v27 = _mm_loadu_si128((const __m128i *)&v278[8]);
            v311 = *(_QWORD **)&v278[24];
            v67 = *(_QWORD *)&v278[32];
            v2 = *(_OWORD *)&v278[40];
            v322 = *(_QWORD *)&v278[56];
            v313 = *(_QWORD *)&v278[64];
            LOBYTE(v320) = v279;
            v308.m128i_i32[0] = *(_DWORD *)((char *)&v279 + 1);
            *(__int32 *)((char *)v308.m128i_i32 + 3) = DWORD1(v279);
            *(_DWORD *)v300 = v308.m128i_i32[0];
            *(_DWORD *)&v300[3] = DWORD1(v279);
            *(_DWORD *)((char *)v315 + 3) = DWORD1(v279);
            v315[0] = *(_DWORD *)v300;
            sub_140383BB0(&v290);
            v318 = v67;
            v68 = (unsigned __int64)((v64 << 16) | v65) << 32;
            if ( v286.m128i_i64[0] )
              sub_140001660(v286.m128i_i64[1], v286.m128i_i64[0], 1);
            v26 = v68 | v66;
            v29 = 10;
            v30 = v327;
            v20 = v323;
LABEL_85:
            sub_14038CFC0(v30 + 9488);
            sub_14038CFC0(v30 + 9232);
            v28 = v311;
            goto LABEL_86;
          }
          v285 = *(_QWORD *)&v278[8];
          v314 = *(_QWORD *)v278;
          v69 = _mm_loadu_si128((const __m128i *)&v278[8]);
          v322 = *(_QWORD *)&v278[24];
          v310 = *(_QWORD *)&v278[32];
          v284 = *(_QWORD *)&v278[56];
          v320 = *(_QWORD *)&v278[48];
          v70 = v279;
          v308.m128i_i32[0] = *(_DWORD *)((char *)&v279 + 1);
          *(__int32 *)((char *)v308.m128i_i32 + 3) = DWORD1(v279);
          *(_DWORD *)v300 = v308.m128i_i32[0];
          *(_DWORD *)&v300[3] = DWORD1(v279);
          sub_140383BB0(&v290);
          if ( *v311 )
            sub_140001660(*v57, *v311, 1);
          v4 = v327;
          *(_QWORD *)(v327 + 9328) = v314;
          *(__m128i *)(v4 + 9336) = v69;
          *(_BYTE *)(v4 + 9486) = v70;
          if ( (unsigned __int64)(v320 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v284, v320, 1);
          if ( v322 )
            sub_140001660(v310, v322, 1);
          if ( v286.m128i_i64[0] )
            sub_140001660(v286.m128i_i64[1], v286.m128i_i64[0], 1);
LABEL_61:
          *(_QWORD *)(v4 + 9752) = v318;
          *(__m128i *)(v4 + 9760) = v22;
          *(_BYTE *)(v4 + 10496) = 0;
LABEL_62:
          v322 = v4 + 9752;
          sub_140B54860(&v277, v4 + 9752, a2);
          if ( v277.m128i_i64[0] == -1 )
          {
            *v21 = 3;
            v30 = v327;
            goto LABEL_113;
          }
          v71 = _mm_loadu_si128(&v277);
          v289 = *(_OWORD *)&v278[32];
          v288 = *(_OWORD *)&v278[16];
          v287 = *(__m128i *)v278;
          v286 = v71;
          v307 = v324;
          v306 = v325;
          v305 = v323;
          sub_140A3A550(v322);
          v72 = *(_BYTE **)(*(_QWORD *)(v327 + 9184) + 32LL);
          v73 = v72 + 16;
          LOBYTE(v74) = 1;
          v312 = v72;
          if ( _InterlockedCompareExchange8(v72 + 16, 1, 0) )
          {
            v329 = 1;
            sub_141937480(v72 + 16);
          }
          v75 = off_1421E7210;
          if ( 2 * *off_1421E7210 )
          {
            v329 = 1;
            v156 = sub_141938160(v74);
            v76 = v156;
            LOBYTE(v76) = v156 ^ 1;
          }
          else
          {
            v76 = 0;
          }
          if ( v312[17] )
          {
            nullsub_1(v74);
            v77 = (__m128i *)sub_140001650(40, 1);
            if ( !v77 )
            {
              LODWORD(v314) = v76;
              v276 = v73;
              sub_141938D2B(1, 40);
            }
            v25 = v77;
            qmemcpy(&v77[1], "nsition lock is poisoned", 24);
            *v77 = _mm_loadu_si128((const __m128i *)&xmmword_141A2A318);
            if ( !(_BYTE)v76 )
            {
              if ( 2 * *v75 )
              {
                v329 = 1;
                if ( !(unsigned __int8)sub_141938160(v78) )
                  v312[17] = 1;
              }
            }
            v79 = *v73;
            *v73 = 0;
            if ( v79 == 2 )
            {
              v329 = 1;
              WakeByAddressSingle(v73);
            }
            v26 = (unsigned __int64)v25 >> 8;
            v24 = 40;
            v27 = (__m128i)0x28uLL;
            v80 = 10;
LABEL_74:
            if ( v287.m128i_i64[1] != -1 && v287.m128i_i64[1] )
              sub_140001660(v288, v287.m128i_i64[1], 1);
            v81 = v286.m128i_i64[1];
            v82 = v287.m128i_i64[0];
            if ( v287.m128i_i64[0] )
            {
              v83 = (_QWORD *)(v286.m128i_i64[1] + 8);
              do
              {
                v84 = *(v83 - 1);
                if ( v84 )
                  sub_140001660(*v83, v84, 1);
                v83 += 3;
                --v82;
              }
              while ( v82 );
            }
            v30 = v327;
            if ( v286.m128i_i64[0] )
              sub_140001660(v81, 24 * v286.m128i_i64[0], 8);
            v20 = v323;
            v29 = v80;
            goto LABEL_85;
          }
          LODWORD(v314) = v76;
          v276 = v73;
          v107 = *(_QWORD *)(*(_QWORD *)(v327 + 9184) + 8LL);
          LOBYTE(v74) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v107 + 16), 1, 0) )
          {
            v328 = 1;
            sub_141937480((volatile void *)(v107 + 16));
          }
          if ( 2 * *v75 )
          {
            v328 = 1;
            v157 = sub_141938160(v74);
            LOBYTE(v157) = v157 ^ 1;
            LODWORD(v322) = v157;
            v262 = v107 + 16;
            if ( !*(_BYTE *)(v107 + 17) )
              goto LABEL_121;
LABEL_187:
            v277.m128i_i64[0] = v262;
            v277.m128i_i8[8] = v322;
            sub_141939040(
              (unsigned int)aRelayStatePois,
              20,
              (unsigned int)&v277,
              (unsigned int)&off_141A2C908,
              (__int64)&off_141A2ADA8);
          }
          LODWORD(v322) = 0;
          v262 = v107 + 16;
          if ( *(_BYTE *)(v107 + 17) )
            goto LABEL_187;
LABEL_121:
          v108 = *(_DWORD *)(v107 + 384);
          sub_1403F7250(&v210, v107 + 24);
          sub_1403F1200(&v277, v107 + 48);
          v264 = *(_QWORD *)v278;
          v263 = _mm_loadu_si128(&v277);
          LOBYTE(v76) = *(_BYTE *)(v107 + 146);
          v109 = *(_WORD *)(v107 + 144);
          sub_1416AC440(&v308, v107 + 72);
          sub_1416AC440(&v290, v107 + 96);
          if ( *(_QWORD *)(v107 + 120) == -1 )
          {
            v110 = -1;
          }
          else
          {
            sub_1416AC440(&v277, v107 + 120);
            v110 = v277.m128i_i64[0];
            *(__m128i *)v300 = _mm_loadu_si128((const __m128i *)&v277.m128i_u64[1]);
          }
          v278[58] = v76;
          *(_WORD *)&v278[56] = v109;
          v277 = v308;
          *(_QWORD *)v278 = v309;
          *(_OWORD *)&v278[8] = v290;
          *(_QWORD *)&v278[24] = v291.m128i_i64[0];
          *(_QWORD *)&v278[32] = v110;
          *(__m128i *)&v278[40] = _mm_load_si128((const __m128i *)v300);
          if ( *(_BYTE *)(v107 + 389) == 1 )
          {
            v176 = _mm_loadu_si128((const __m128i *)(v107 + 390));
            v116 = 1;
          }
          else
          {
            v116 = 0;
          }
          v117 = *(_BYTE *)(v107 + 388);
          v118 = *(_BYTE *)(v107 + 406);
          sub_1403F7D40(&v257, v107 + 152);
          v119 = *(_BYTE *)(v107 + 407);
          if ( *(_QWORD *)(v107 + 176) == -1 )
          {
            v121 = -1;
          }
          else
          {
            LODWORD(v310) = v108;
            v120 = *(_QWORD **)(v107 + 320);
            sub_1416AC440(v300, v107 + 176);
            sub_1416AC440(&v308, v107 + 200);
            if ( *(_QWORD *)(v107 + 224) == -1 )
            {
              v320 = -1;
            }
            else
            {
              sub_1416AC440(&v290, v107 + 224);
              v285 = *((_QWORD *)&v290 + 1);
              v320 = v290;
              v207 = v291.m128i_i64[0];
            }
            if ( *(_QWORD *)(v107 + 248) == -1 )
            {
              v318 = -1;
            }
            else
            {
              sub_1416AC440(&v290, v107 + 248);
              v260 = *((_QWORD *)&v290 + 1);
              v318 = v290;
              v208 = v291.m128i_i64[0];
            }
            v76 = -1;
            v127 = *(_QWORD *)(v107 + 272) == -1;
            v311 = v120;
            if ( v127 )
            {
              v108 = v310;
              v313 = -1;
            }
            else
            {
              sub_1416AC440(&v290, v107 + 272);
              v108 = v310;
              v261 = *((_QWORD *)&v290 + 1);
              v313 = v290;
              v209 = v291.m128i_i64[0];
            }
            LOWORD(v310) = *(_WORD *)(v107 + 328);
            LOWORD(v284) = *(_WORD *)(v107 + 330);
            if ( *(_QWORD *)(v107 + 296) != -1 )
            {
              sub_1416AC440(&v290, v107 + 296);
              v76 = v290;
              v175 = _mm_loadu_si128((const __m128i *)((char *)&v290 + 8));
            }
            v121 = *(_QWORD *)v300;
            v290 = *(_OWORD *)&v300[8];
            v291 = _mm_loadu_si128(&v308);
            v292 = v309;
          }
          v128 = *(_OWORD *)(v107 + 352);
          v243 = *(_OWORD *)(v107 + 368);
          v242 = v128;
          v244 = v108;
          v213 = v211;
          v212 = v210;
          v215 = v264;
          v214 = v263;
          v216 = v277;
          v217 = *(_OWORD *)v278;
          v218 = *(_OWORD *)&v278[16];
          v219 = *(_OWORD *)&v278[32];
          v220 = *(_OWORD *)&v278[48];
          v245 = v117;
          v246 = v116;
          v247 = v176;
          v248 = v118;
          v222 = v258;
          v221 = v257;
          v249 = v119;
          v223 = v121;
          v226 = v292;
          v224 = v290;
          v225 = v291;
          v227 = v320;
          v228 = v285;
          v229 = v207;
          v230 = v318;
          v231 = v260;
          v232 = v208;
          v233 = v313;
          v234 = v261;
          v235 = v209;
          v236 = v76;
          v237 = v175;
          v238 = v311;
          v239 = v310;
          v240 = v284;
          v241 = _mm_loadu_si128((const __m128i *)(v107 + 336));
          v129 = (char *)(v107 + 16);
          if ( !(_BYTE)v322 )
          {
            if ( 2 * *off_1421E7210 )
            {
              v326 = 1;
              if ( !(unsigned __int8)sub_141938160(v258) )
                *(_BYTE *)(v107 + 17) = 1;
            }
          }
          v130 = *v129;
          *v129 = 0;
          if ( v130 == 2 )
          {
            v326 = 1;
            WakeByAddressSingle((PVOID)(v107 + 16));
          }
          v131 = v327;
          if ( !v213 )
            goto LABEL_176;
          v132 = v212.m128i_i64[1];
          v133 = v213 << 8;
          v134 = *(_QWORD *)(v327 + 9192);
          v135 = *(_QWORD *)(v327 + 9200);
          while ( *(_QWORD *)(v132 + 16) != v135 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v132 + 8), v134) )
          {
            v132 += 256;
            v133 -= 256;
            if ( !v133 )
              goto LABEL_176;
          }
          v136 = *(_QWORD *)(v131 + 9744);
          v326 = 1;
          sub_141406CE0(&v277);
          v137 = (v277.m128i_i32[0] >> 13) - 1;
          v138 = 0;
          if ( v277.m128i_i32[0] >> 13 <= 0 )
          {
            v139 = (1 - (v277.m128i_i32[0] >> 13)) / 0x190u + 1;
            v137 += 400 * v139;
            v138 = -146097 * v139;
          }
          v326 = 1;
          if ( !(unsigned __int8)sub_140DC1300(
                                   v132,
                                   (int)v327 + 9488,
                                   (unsigned int)&v286,
                                   v136,
                                   1000
                                 * (v277.m128i_u32[1]
                                  + 86400LL
                                  * (((v137 / 100) >> 2)
                                   + ((1461 * v137) >> 2)
                                   + v138
                                   + (((unsigned __int32)v277.m128i_i32[0] >> 4) & 0x1FF)
                                   - v137 / 100
                                   - 719163))
                                 + v277.m128i_u32[2] / 0xF4240uLL) )
          {
LABEL_176:
            v24 = v286.m128i_i64[0];
            LOBYTE(v25) = v286.m128i_i8[8];
            v147 = v286.m128i_u8[15];
            v148 = *(unsigned __int16 *)((char *)&v286.m128i_u16[6] + 1);
            v149 = *(unsigned int *)((char *)&v286.m128i_u32[2] + 1);
            v27 = _mm_load_si128(&v287);
            v150 = *((_QWORD *)&v288 + 1);
            v151 = (_QWORD *)v288;
            v2 = v289;
            v328 = 0;
            sub_1407ADB20(&v212);
            v152 = off_1421E7210;
            v26 = ((unsigned __int64)((v147 << 16) | v148) << 32) | v149;
            v153 = v312 + 16;
            v318 = v150;
            if ( (_BYTE)v314 )
              goto LABEL_178;
LABEL_177:
            if ( 2 * *v152 )
            {
              v329 = 0;
              if ( !(unsigned __int8)sub_141938160(v152) )
                v312[17] = 1;
            }
            goto LABEL_178;
          }
          v140 = *(_QWORD *)(v327 + 9184);
          sub_1418F44E0(&v277, &v212, 0x180u);
          v326 = 0;
          sub_140D98BE0(&v290, v140, &v277);
          v80 = v290;
          if ( (_QWORD)v290 != -1 )
          {
            v24 = *((_QWORD *)&v290 + 1);
            LOBYTE(v25) = v291.m128i_i8[0];
            v141 = v291.m128i_u8[7];
            v142 = *(unsigned __int16 *)((char *)&v291.m128i_u16[2] + 1);
            v143 = *(unsigned int *)((char *)v291.m128i_u32 + 1);
            v27 = _mm_loadu_si128((const __m128i *)&v291.m128i_u64[1]);
            v311 = v293;
            v318 = v294;
            v2 = v295;
            v322 = v296;
            v144 = v297;
            v315[0] = *(_DWORD *)v299;
            *(_DWORD *)((char *)v315 + 3) = *(_DWORD *)&v299[3];
            v145 = v312 + 16;
            LOBYTE(v320) = v298;
            if ( !(_BYTE)v314 )
            {
              if ( 2 * *off_1421E7210 )
              {
                LODWORD(v314) = v291.m128i_u8[7];
                v158 = v297;
                v329 = 1;
                v159 = sub_141938160(v297);
                v144 = v158;
                v141 = v314;
                if ( !v159 )
                  v312[17] = 1;
              }
            }
            v313 = v144;
            v26 = ((unsigned __int64)((v141 << 16) | v142) << 32) | v143;
            v146 = *v145;
            *v145 = 0;
            if ( v146 == 2 )
            {
              v329 = 1;
              WakeByAddressSingle(v145);
            }
            goto LABEL_74;
          }
          v24 = v286.m128i_i64[0];
          LOBYTE(v25) = v286.m128i_i8[8];
          v26 = ((unsigned __int64)((v286.m128i_u8[15] << 16)
                                  | (unsigned int)*(unsigned __int16 *)((char *)&v286.m128i_u16[6] + 1)) << 32)
              | *(unsigned int *)((char *)&v286.m128i_u32[2] + 1);
          v27 = _mm_load_si128(&v287);
          v151 = (_QWORD *)v288;
          v2 = v289;
          v153 = v312 + 16;
          v152 = off_1421E7210;
          v318 = *((_QWORD *)&v288 + 1);
          if ( !(_BYTE)v314 )
            goto LABEL_177;
LABEL_178:
          v154 = *v153;
          *v153 = 0;
          if ( v154 == 2 )
          {
            v329 = 0;
            WakeByAddressSingle(v153);
          }
          v155 = v327;
          sub_14038CFC0(v327 + 9488);
          sub_14038CFC0(v155 + 9232);
          *(_BYTE *)(v155 + 10505) = 0;
          *(_DWORD *)&v302[3] = *(_DWORD *)((char *)v315 + 3);
          *(_DWORD *)v302 = v315[0];
          *(_BYTE *)(v155 + 10504) = 1;
          v29 = -1;
          v20 = v323;
          v28 = v151;
LABEL_91:
          *(_DWORD *)&v283[3] = *(_DWORD *)&v302[3];
          *(_DWORD *)v283 = *(_DWORD *)v302;
          v304 = v324;
          v303 = v325;
          sub_140A34130(v20);
          if ( v29 == -1 )
          {
            if ( v24 == -1 )
            {
              v323 = (const __m128i *)v27.m128i_i64[0];
              v13 = _mm_shuffle_epi32(v27, 238).m128i_u64[0];
              if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v327 + 9112)) )
                goto LABEL_95;
              goto LABEL_94;
            }
            v190 = v28;
            v191 = v318;
            v192 = v2;
            v184 = v24;
            v185 = (char)v25;
            v186 = v26;
            v188 = BYTE6(v26);
            v187 = WORD2(v26);
            v189 = v27;
            v304 = v324;
            v303 = v325;
            sub_140FEB750(&v277, &v184);
            v91 = v277.m128i_i64[0];
            LOBYTE(v25) = v277.m128i_i8[8];
            v94 = v277.m128i_u8[15];
            v95 = *(unsigned __int16 *)((char *)&v277.m128i_u16[6] + 1);
            v96 = *(unsigned int *)((char *)&v277.m128i_u32[2] + 1);
            v13 = *(_QWORD *)&v278[8];
            v323 = *(const __m128i **)v278;
            v89 = *(_QWORD *)&v278[16];
            v250 = *(__m128i *)&v278[24];
            v251 = *(_OWORD *)&v278[40];
            v252 = *(_OWORD *)&v278[56];
            v253 = v279;
            v254 = v280;
            v255 = _mm_loadu_si128(&v281);
            v256 = v282;
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v327 + 9112)) )
            {
              v269 = v324;
              v268 = v325;
              sub_1409E5B50(v327 + 9112);
            }
            v97 = v327;
            *(_BYTE *)(v327 + 10513) = 0;
            v98 = *(_QWORD *)(v97 + 9088);
            if ( v98 )
            {
              sub_140001660(*(_QWORD *)(v97 + 9096), v98, 1);
              v97 = v327;
            }
            v206 = v256;
            v205 = v255;
            v204 = v254;
            v99 = _mm_load_si128(&v250);
            v203 = v253;
            v202 = v252;
            v201 = v251;
            v200 = v99;
            *(_BYTE *)(v97 + 10512) = 1;
            if ( v91 != -2 )
            {
              v26 = ((unsigned __int64)((v94 << 16) | v95) << 32) | v96;
              goto LABEL_98;
            }
LABEL_114:
            *(_BYTE *)(v97 + 10520) = 3;
            *(_BYTE *)(v97 + 10528) = 3;
            v103 = 3;
            result = 1;
            v105 = v97;
            goto LABEL_148;
          }
          v277.m128i_i64[0] = v29;
          v277.m128i_i64[1] = v24;
          v278[0] = (_BYTE)v25;
          *(_DWORD *)&v278[1] = v26;
          v278[7] = BYTE6(v26);
          *(_WORD *)&v278[5] = WORD2(v26);
          *(__m128i *)&v278[8] = v27;
          *(_QWORD *)&v278[24] = v28;
          *(_QWORD *)&v278[32] = v318;
          *(_OWORD *)&v278[40] = v2;
          *(_QWORD *)&v278[56] = v322;
          *(_QWORD *)&v278[64] = v313;
          LOBYTE(v279) = v320;
          *(_DWORD *)((char *)&v279 + 1) = *(_DWORD *)v283;
          DWORD1(v279) = *(_DWORD *)&v283[3];
          *(_QWORD *)&v290 = 0;
          *((_QWORD *)&v290 + 1) = 1;
          v291.m128i_i64[0] = 0;
          v213 = 1610612768;
          v212.m128i_i64[0] = (__int64)&v290;
          v212.m128i_i64[1] = (__int64)&off_141A353B8;
          if ( (unsigned __int8)sub_14104A7D0(&v277, &v212) )
            sub_141939040(
              (unsigned int)aADisplayImplem_6,
              55,
              (unsigned int)&v319,
              (unsigned int)&unk_141A2C928,
              (__int64)&off_141A35470);
          LOBYTE(v25) = v290;
          v86 = BYTE7(v290);
          v87 = *(unsigned __int16 *)((char *)&v290 + 5);
          v88 = *(unsigned int *)((char *)&v290 + 1);
          v323 = *((const __m128i **)&v290 + 1);
          v13 = v291.m128i_i64[0];
          v304 = v324;
          v303 = v325;
          sub_140A3D8F0(&v277);
          v26 = ((unsigned __int64)((v86 << 16) | v87) << 32) | v88;
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v327 + 9112)) )
            goto LABEL_95;
LABEL_94:
          v269 = v324;
          v268 = v325;
          sub_1409E5B50(v327 + 9112);
LABEL_95:
          v89 = v327;
          *(_BYTE *)(v327 + 10513) = 0;
          v90 = *(_QWORD *)(v89 + 9088);
          if ( v90 )
            sub_140001660(*(_QWORD *)(v89 + 9096), v90, 1);
          v206 = v256;
          v205 = v255;
          v204 = v254;
          v203 = v253;
          v202 = v252;
          v201 = v251;
          v200 = _mm_load_si128(&v250);
          *(_BYTE *)(v89 + 10512) = 1;
          v91 = -1;
LABEL_98:
          v183 = v206;
          v182 = v205;
          v181 = v204;
          v180 = v203;
          v179 = v202;
          v178 = v201;
          v177 = _mm_load_si128(&v200);
          sub_140A36640(v317);
          if ( v91 == -1 )
          {
            v100 = v26 << 8;
            v101 = v100 | (unsigned __int8)v25;
            if ( v13 < 0 )
            {
              v102 = 0;
              goto LABEL_111;
            }
            if ( v13 )
            {
              nullsub_1(v92);
              v102 = 1;
              v111 = (__m128i *)sub_140001650(v13, 1);
              if ( !v111 )
              {
LABEL_111:
                v325 = v100 | (unsigned __int8)v25;
                sub_141938D2B(v102, v13);
              }
              v11 = (unsigned __int64)v111;
              sub_1418F44E0(v111, v323, v13);
            }
            else
            {
              v11 = 1;
            }
            v106 = v321;
            if ( v101 )
            {
              v122 = v321;
              sub_140001660(v323, v101, 1);
              v106 = v122;
            }
            v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)v11);
            v35 = 1;
            v9 = 3;
            goto LABEL_141;
          }
          v174 = v183;
          v173 = v182;
          v172 = v181;
          v93 = _mm_load_si128(&v177);
          v171 = v180;
          v170 = v179;
          v169 = v178;
          v168 = v93;
          v160 = v91;
          v161 = (char)v25;
          v162 = v26;
          v164 = BYTE6(v26);
          v163 = WORD2(v26);
          v165 = v323;
          v166 = v13;
          v167 = v89;
          sub_141054310(&v277, &v160);
          v11 = ((unsigned __int64)((v277.m128i_u8[15] << 16)
                                  | (unsigned int)*(unsigned __int16 *)((char *)&v277.m128i_u16[6] + 1)) << 32)
              | *(unsigned int *)((char *)&v277.m128i_u32[2] + 1);
          v9 = v277.m128i_i8[8];
          v12 = _mm_loadu_si128((const __m128i *)v278);
          v13 = *(_QWORD *)&v278[16];
          if ( v277.m128i_i64[0] == -1 )
          {
            v35 = 0;
          }
          else
          {
            v277.m128i_i8[15] = (((unsigned __int64)((v277.m128i_u8[15] << 16)
                                                   | (unsigned int)*(unsigned __int16 *)((char *)&v277.m128i_u16[6] + 1)) << 32)
                               | *(unsigned int *)((char *)&v277.m128i_u32[2] + 1)) >> 48;
            *(__int16 *)((char *)&v277.m128i_i16[6] + 1) = WORD2(v11);
            *(__int32 *)((char *)&v277.m128i_i32[2] + 1) = v11;
            *(__m128i *)v278 = v12;
            v250.m128i_i64[0] = 0;
            v250.m128i_i64[1] = 1;
            *(_QWORD *)&v251 = 0;
            v213 = 1610612768;
            v212.m128i_i64[0] = (__int64)&v250;
            v212.m128i_i64[1] = (__int64)&off_141A353B8;
            if ( (unsigned __int8)sub_14144FD90((__int64)&v277, &v212) )
              sub_141939040(
                (unsigned int)aADisplayImplem_6,
                55,
                (unsigned int)&v319,
                (unsigned int)&unk_141A2C928,
                (__int64)&off_141A35470);
            v12 = _mm_load_si128(&v250);
            v13 = v251;
            sub_140A3BD30(&v277);
            v35 = 1;
            v9 = 3;
          }
          v106 = v321;
LABEL_141:
          *(_BYTE *)v316 = 1;
          sub_140A3BBB0(v106);
          v36 = v327;
          if ( *(_QWORD *)(v327 + 5984) != -1 )
          {
            v316 = (_QWORD *)(v327 + 5992);
            v123 = *(const __m128i **)(v327 + 5992);
            v324 = *(_QWORD *)(v327 + 6000);
            v325 = 0;
            v323 = v123;
            while ( v324 != v325 )
            {
              ++v325;
              v124 = v123 + 6;
              sub_14038BB80();
              v123 = v124;
            }
            v36 = v327;
            v34 = *(_QWORD *)(v327 + 5984);
            if ( v34 )
LABEL_146:
              sub_140001660(*v316, 96 * v34, 8);
          }
LABEL_147:
          *(_BYTE *)(v36 + 10528) = 1;
          sub_140A329E0(v321);
          v195 = v11;
          v197 = BYTE6(v11);
          v196 = WORD2(v11);
          v199 = v13;
          v194 = v9;
          v198 = v12;
          v193 = v35;
          v125 = v327;
          *(_BYTE *)(v327 + 10547) = 0;
          sub_1418F44E0(&v277, (const __m128i *)v125, 0x168u);
          *(_BYTE *)(v125 + 10546) = 0;
          v126 = *(_QWORD *)(v125 + 384);
          *(_BYTE *)(v125 + 10545) = 0;
          v213 = *(_QWORD *)(v125 + 376);
          v212 = _mm_loadu_si128((const __m128i *)(v125 + 360));
          sub_14092BC70(
            (unsigned int)&v277,
            v126,
            (unsigned int)&v193,
            (unsigned int)&v212,
            *(_DWORD *)(v125 + 10536),
            *(_DWORD *)(v125 + 10540));
          v103 = 1;
          result = 0;
          v105 = v327;
LABEL_148:
          *(_BYTE *)(v105 + 10544) = v103;
          return result;
        case 1:
LABEL_201:
          v317 = v16;
          v321 = v6;
          sub_1419393E0(&off_141A2B708);
        case 2:
LABEL_200:
          v317 = v16;
          v321 = v6;
          sub_141939400(&off_141A2B708);
        case 3:
LABEL_13:
          v21 = (_BYTE *)(v4 + 10504);
          v20 = (const __m128i *)(v4 + 9120);
          switch ( *(_BYTE *)(v4 + 10504) )
          {
            case 0:
              v17 = *(_QWORD *)(v4 + 9144);
              v19 = *(_QWORD *)(v4 + 9152);
              v18 = *(_QWORD *)(v4 + 9160);
              v22 = _mm_loadu_si128((const __m128i *)(v4 + 9168));
              goto LABEL_15;
            case 1:
              v317 = v16;
              v321 = v6;
              v267 = v4 + 9120;
              sub_1419393E0(&off_141A2AD78);
            case 2:
              v317 = v16;
              v321 = v6;
              v267 = v4 + 9120;
              sub_141939400(&off_141A2AD78);
            case 3:
              v323 = (const __m128i *)(v4 + 9120);
              v317 = v16;
              v321 = v6;
              goto LABEL_62;
          }
      }
  }
}
