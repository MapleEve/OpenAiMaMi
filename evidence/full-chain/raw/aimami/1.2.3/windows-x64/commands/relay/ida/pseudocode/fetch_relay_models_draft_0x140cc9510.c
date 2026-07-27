// win 1.2.1 | module src/core/relay/fetch_models.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = fetch_relay_models_draft | mapped via command-name string xref (win-native, ground-truth)
char __fastcall fetch_relay_models_draft(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rdi
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int8 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // rdx
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // r9
  _QWORD *v35; // rdi
  _QWORD *v36; // rsi
  __int64 v37; // rdx
  _BYTE *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rsi
  unsigned __int64 v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  _BYTE *v46; // r15
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rdi
  __int64 v53; // rbx
  char v54; // r9
  char v55; // r14
  _QWORD *v56; // rsi
  _QWORD *v57; // r12
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int128 v60; // xmm1
  __int128 v61; // xmm2
  __int128 v62; // xmm3
  char v63; // of
  volatile signed __int64 *v64; // rax
  __int64 v65; // rax
  char *v66; // rcx
  char *v67; // rsi
  __int64 v68; // rax
  unsigned __int8 v69; // si
  __int64 v70; // rdx
  __int64 v71; // rbx
  __int64 v72; // r8
  __int64 v73; // rax
  _QWORD *v74; // rcx
  _QWORD *v75; // r14
  __int64 v76; // rt0
  __int64 v77; // rdi
  __int64 v78; // rdx
  char v79; // cl
  char result; // al
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rax
  unsigned int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r14
  _BYTE *v89; // rsi
  _QWORD *v90; // rdi
  char *v91; // r15
  __int64 v92; // rbx
  __int64 v93; // rdx
  volatile signed __int64 *v94; // r14
  _BYTE *v95; // r15
  _QWORD *v96; // rsi
  bool v97; // of
  __int64 v98; // rax
  __int64 v99; // r14
  _BYTE *v100; // r15
  _QWORD *v101; // rsi
  char *v102; // rbx
  __int64 v103; // rdi
  __int64 v104; // rdx
  volatile signed __int64 *v105; // r14
  bool v106; // of
  __int64 v107; // rbx
  char *v108; // r12
  __int64 v109; // rt0
  _QWORD *v110; // rdi
  __int128 *v111; // rsi
  unsigned __int64 v112; // r12
  __int64 v113; // rcx
  __int64 v114; // rbx
  __int16 v115; // r14
  __int64 v116; // r13
  __int64 v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // r14
  __int64 v122; // rdi
  __int64 v123; // rbx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int128 v126; // xmm1
  __int128 v127; // xmm2
  __int128 v128; // xmm3
  int v129; // eax
  __int64 v130; // rsi
  __int64 v131; // rdi
  __int64 v132; // r15
  _QWORD *v133; // rbx
  __int8 v134; // r14
  _QWORD *v135; // rbx
  __int64 v136; // rt0
  __int128 *v137; // rsi
  unsigned __int64 v138; // r12
  __int64 v139; // rcx
  __int64 v140; // rbx
  __int16 v141; // r14
  __int64 v142; // r13
  __int64 v143; // rdi
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // r14
  __int64 v148; // rdi
  __int64 v149; // rbx
  __int64 v150; // rcx
  __int64 v151; // rdx
  __int128 v152; // xmm1
  __int128 v153; // xmm2
  __int128 v154; // xmm3
  int v155; // eax
  __int64 v156; // rsi
  __int64 v157; // r15
  _QWORD *v158; // rbx
  _QWORD *v159; // rbx
  __int64 v160; // rdx
  __int64 v161; // rdx
  _BYTE *v162; // rbx
  char v163; // al
  void *v164; // rax
  __int64 v165; // rdx
  signed __int64 v166; // rt0
  signed __int64 v167; // rt0
  __int64 v168; // rsi
  __int64 v169; // rdx
  __int64 v170; // rdx
  __int64 v171; // rdx
  __int64 v172; // rsi
  __int64 v173; // rdx
  char v174; // al
  char *v175; // rcx
  char v176; // al
  char v177; // al
  __int64 v178; // [rsp+98h] [rbp+18h] BYREF
  char v179; // [rsp+A0h] [rbp+20h]
  int v180; // [rsp+A1h] [rbp+21h]
  __int16 v181; // [rsp+A5h] [rbp+25h]
  char v182; // [rsp+A7h] [rbp+27h]
  __int64 v183; // [rsp+A8h] [rbp+28h]
  __int64 v184; // [rsp+B0h] [rbp+30h]
  __int64 v185; // [rsp+B8h] [rbp+38h]
  __int128 v186; // [rsp+C0h] [rbp+40h]
  __int128 v187; // [rsp+D0h] [rbp+50h]
  __int128 v188; // [rsp+E0h] [rbp+60h]
  __int128 v189; // [rsp+F0h] [rbp+70h]
  __int128 v190; // [rsp+100h] [rbp+80h]
  __int128 v191; // [rsp+110h] [rbp+90h]
  __int128 v192; // [rsp+120h] [rbp+A0h]
  __int128 v193; // [rsp+130h] [rbp+B0h]
  __int128 v194; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v195; // [rsp+150h] [rbp+D0h]
  __int128 v196; // [rsp+160h] [rbp+E0h]
  __int128 v197; // [rsp+170h] [rbp+F0h]
  __int128 v198; // [rsp+180h] [rbp+100h]
  __int128 v199; // [rsp+190h] [rbp+110h]
  __int128 v200; // [rsp+1A0h] [rbp+120h]
  __int64 v201; // [rsp+1B0h] [rbp+130h]
  __int128 v202; // [rsp+1C0h] [rbp+140h]
  __int64 v203; // [rsp+1D0h] [rbp+150h]
  __int64 v204; // [rsp+1D8h] [rbp+158h] BYREF
  __int8 v205; // [rsp+1E0h] [rbp+160h]
  int v206; // [rsp+1E1h] [rbp+161h]
  __int16 v207; // [rsp+1E5h] [rbp+165h]
  char v208; // [rsp+1E7h] [rbp+167h]
  __int64 v209; // [rsp+1E8h] [rbp+168h]
  __int64 v210; // [rsp+1F0h] [rbp+170h]
  __int64 v211; // [rsp+1F8h] [rbp+178h]
  __int128 v212; // [rsp+200h] [rbp+180h]
  __int64 v213; // [rsp+210h] [rbp+190h]
  __int128 v214; // [rsp+220h] [rbp+1A0h]
  __int64 v215; // [rsp+230h] [rbp+1B0h]
  __int128 v216; // [rsp+240h] [rbp+1C0h]
  __int64 v217; // [rsp+250h] [rbp+1D0h]
  __int128 v218; // [rsp+260h] [rbp+1E0h]
  __int64 v219; // [rsp+270h] [rbp+1F0h]
  unsigned __int64 v220; // [rsp+280h] [rbp+200h]
  _BYTE *v221; // [rsp+288h] [rbp+208h]
  __int128 v222; // [rsp+290h] [rbp+210h] BYREF
  __int128 v223; // [rsp+2A0h] [rbp+220h]
  __int128 v224; // [rsp+2B0h] [rbp+230h]
  __int128 v225; // [rsp+2C0h] [rbp+240h]
  __int128 v226; // [rsp+2D0h] [rbp+250h]
  __int128 v227; // [rsp+2E0h] [rbp+260h]
  __int128 v228; // [rsp+2F0h] [rbp+270h]
  __int64 v229; // [rsp+300h] [rbp+280h]
  __int128 v230; // [rsp+310h] [rbp+290h] BYREF
  __int128 v231; // [rsp+320h] [rbp+2A0h]
  __int128 v232; // [rsp+330h] [rbp+2B0h]
  __int128 v233; // [rsp+340h] [rbp+2C0h]
  __int64 v234; // [rsp+350h] [rbp+2D0h]
  __int64 v235; // [rsp+358h] [rbp+2D8h]
  __int128 v236; // [rsp+360h] [rbp+2E0h]
  __int64 v237; // [rsp+370h] [rbp+2F0h]
  __int64 v238; // [rsp+378h] [rbp+2F8h]
  __int64 v239; // [rsp+380h] [rbp+300h]
  __int64 v240; // [rsp+388h] [rbp+308h]
  __int16 v241; // [rsp+390h] [rbp+310h]
  __int128 v242; // [rsp+398h] [rbp+318h]
  __m256i v243; // [rsp+3A8h] [rbp+328h]
  __int128 v244; // [rsp+3C8h] [rbp+348h]
  __int128 v245; // [rsp+3D8h] [rbp+358h]
  __int64 v246; // [rsp+3E8h] [rbp+368h]
  char v247; // [rsp+3F0h] [rbp+370h]
  _BYTE v248[7]; // [rsp+3F1h] [rbp+371h] BYREF
  __int128 v249; // [rsp+3F8h] [rbp+378h]
  __int64 v250; // [rsp+408h] [rbp+388h]
  char v251; // [rsp+410h] [rbp+390h]
  __m256i v252; // [rsp+420h] [rbp+3A0h] BYREF
  _BYTE v253[80]; // [rsp+440h] [rbp+3C0h]
  __int128 v254; // [rsp+490h] [rbp+410h]
  __int64 v255; // [rsp+4A0h] [rbp+420h]
  __int64 v256; // [rsp+590h] [rbp+510h] BYREF
  __int128 v257; // [rsp+598h] [rbp+518h]
  __int64 v258; // [rsp+5A8h] [rbp+528h]
  __int64 v259; // [rsp+5B0h] [rbp+530h]
  unsigned __int64 v260; // [rsp+5B8h] [rbp+538h]
  _QWORD *v261; // [rsp+5C0h] [rbp+540h]
  unsigned __int64 v262; // [rsp+5C8h] [rbp+548h]
  _BYTE *v263; // [rsp+5D0h] [rbp+550h]
  __int64 v264; // [rsp+5D8h] [rbp+558h]
  _QWORD *v265; // [rsp+5E0h] [rbp+560h]
  _QWORD *v266; // [rsp+5E8h] [rbp+568h]
  unsigned __int64 v267; // [rsp+5F0h] [rbp+570h]
  _BYTE *v268; // [rsp+5F8h] [rbp+578h]
  __int64 v269; // [rsp+600h] [rbp+580h]
  _QWORD *v270; // [rsp+608h] [rbp+588h]
  _QWORD *v271; // [rsp+610h] [rbp+590h]
  unsigned __int64 v272; // [rsp+618h] [rbp+598h]
  _BYTE *v273; // [rsp+620h] [rbp+5A0h]
  __int64 v274; // [rsp+628h] [rbp+5A8h]
  char *v275; // [rsp+630h] [rbp+5B0h]
  _QWORD *v276; // [rsp+638h] [rbp+5B8h]
  _QWORD *v277; // [rsp+640h] [rbp+5C0h]
  unsigned __int64 v278; // [rsp+648h] [rbp+5C8h]
  _BYTE *v279; // [rsp+650h] [rbp+5D0h]
  __int64 v280; // [rsp+658h] [rbp+5D8h]
  char *v281; // [rsp+660h] [rbp+5E0h]
  _QWORD *v282; // [rsp+668h] [rbp+5E8h]
  _QWORD *v283; // [rsp+670h] [rbp+5F0h]
  unsigned __int64 v284; // [rsp+678h] [rbp+5F8h]
  _BYTE *v285; // [rsp+680h] [rbp+600h]
  _QWORD *v286; // [rsp+688h] [rbp+608h]
  _QWORD *v287; // [rsp+690h] [rbp+610h]
  unsigned __int64 v288; // [rsp+698h] [rbp+618h]
  _BYTE *v289; // [rsp+6A0h] [rbp+620h]
  _QWORD *v290; // [rsp+6A8h] [rbp+628h]
  _QWORD *v291; // [rsp+6B0h] [rbp+630h]
  unsigned __int64 v292; // [rsp+6B8h] [rbp+638h]
  _BYTE *v293; // [rsp+6C0h] [rbp+640h]
  unsigned __int64 v294; // [rsp+6C8h] [rbp+648h]
  _BYTE *v295; // [rsp+6D0h] [rbp+650h]
  __int128 v296; // [rsp+6D8h] [rbp+658h] BYREF
  __int64 v297; // [rsp+6E8h] [rbp+668h]
  __int128 v298; // [rsp+6F0h] [rbp+670h] BYREF
  __m256i v299; // [rsp+700h] [rbp+680h]
  __int128 v300; // [rsp+720h] [rbp+6A0h]
  __int128 v301; // [rsp+730h] [rbp+6B0h]
  __int64 v302; // [rsp+740h] [rbp+6C0h]
  __int16 v303; // [rsp+748h] [rbp+6C8h]
  _QWORD *v304; // [rsp+750h] [rbp+6D0h]
  _QWORD *v305; // [rsp+758h] [rbp+6D8h]
  unsigned __int64 v306; // [rsp+760h] [rbp+6E0h]
  _BYTE *v307; // [rsp+768h] [rbp+6E8h]
  __int64 v308; // [rsp+770h] [rbp+6F0h]
  __int128 *v309; // [rsp+778h] [rbp+6F8h]
  _DWORD v310[2]; // [rsp+780h] [rbp+700h]
  __int64 v311; // [rsp+788h] [rbp+708h]
  __int64 v312; // [rsp+790h] [rbp+710h]
  _QWORD *v313; // [rsp+798h] [rbp+718h]
  _QWORD *v314; // [rsp+7A0h] [rbp+720h]
  unsigned __int64 v315; // [rsp+7A8h] [rbp+728h]
  _BYTE *v316; // [rsp+7B0h] [rbp+730h]
  _BYTE *v317; // [rsp+7B8h] [rbp+738h]
  _BYTE v318[7]; // [rsp+7C0h] [rbp+740h]
  _BYTE v319[7]; // [rsp+7C8h] [rbp+748h]
  _BYTE v320[7]; // [rsp+7D0h] [rbp+750h]
  __int64 v321; // [rsp+7D8h] [rbp+758h]
  char *v322; // [rsp+7E0h] [rbp+760h]
  _QWORD *v323; // [rsp+7E8h] [rbp+768h]
  _QWORD *v324; // [rsp+7F0h] [rbp+770h]
  unsigned __int64 v325; // [rsp+7F8h] [rbp+778h]
  _BYTE *v326; // [rsp+800h] [rbp+780h]
  __int64 v327; // [rsp+808h] [rbp+788h]
  char *v328; // [rsp+810h] [rbp+790h]
  _QWORD *v329; // [rsp+818h] [rbp+798h]
  _QWORD *v330; // [rsp+820h] [rbp+7A0h]
  unsigned __int64 v331; // [rsp+828h] [rbp+7A8h]
  _BYTE *v332; // [rsp+830h] [rbp+7B0h]
  volatile signed __int64 **v333; // [rsp+838h] [rbp+7B8h]
  char v334; // [rsp+847h] [rbp+7C7h] BYREF
  __int64 v335; // [rsp+848h] [rbp+7C8h]
  __int64 v336; // [rsp+850h] [rbp+7D0h]
  char v337; // [rsp+85Eh] [rbp+7DEh]
  char v338; // [rsp+85Fh] [rbp+7DFh]
  __int64 v339; // [rsp+860h] [rbp+7E0h]
  __int64 v340; // [rsp+868h] [rbp+7E8h]
  char *v341; // [rsp+870h] [rbp+7F0h]
  unsigned __int64 v342; // [rsp+878h] [rbp+7F8h]
  _QWORD *v343; // [rsp+880h] [rbp+800h]
  _BYTE *v344; // [rsp+888h] [rbp+808h]
  _QWORD *v345; // [rsp+890h] [rbp+810h]
  __int64 v346; // [rsp+898h] [rbp+818h]
  __int64 v347; // [rsp+8A0h] [rbp+820h]

  v347 = -2;
  v308 = a2;
  v7 = a1;
  v8 = *(unsigned __int8 *)(a1 + 9920);
  v346 = a1;
  switch ( v8 )
  {
    case 0LL:
      *(_WORD *)(a1 + 9921) = 257;
      *(_BYTE *)(a1 + 9923) = 1;
      v9 = a1 + 5152;
      sub_141684120(a1 + 5152, a1 + 392, 4760);
      v10 = *(unsigned __int8 *)(v7 + 9904);
      switch ( *(_BYTE *)(v7 + 9904) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_96;
        case 2:
          goto LABEL_95;
        case 3:
          goto LABEL_7;
        case 4:
          goto LABEL_8;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v9 = a1 + 5152;
      switch ( *(_BYTE *)(a1 + 9904) )
      {
        case 0:
LABEL_4:
          v11 = (_QWORD *)(v7 + 5672);
          *(_QWORD *)&v253[16] = 0;
          v252.m256i_i64[0] = (__int64)aFetchRelayMode;
          v252.m256i_i64[1] = 24;
          v252.m256i_i64[2] = (__int64)aManager_1;
          v252.m256i_i64[3] = 7;
          v335 = v9;
          *(_QWORD *)v253 = v9;
          *(_QWORD *)&v253[8] = v7 + 5672;
          v12 = sub_140004B10((volatile void *)(*(_QWORD *)(v7 + 5664) + 16LL));
          if ( v12 )
            goto LABEL_5;
          sub_1416850A0(&v230, &v252, &v252.m256i_u64[2]);
          v14 = v230;
          if ( (_BYTE)v230 == 0xFF )
          {
            v12 = *((_QWORD *)&v230 + 1);
LABEL_5:
            *(_QWORD *)&v233 = 0;
            *(_QWORD *)&v230 = aFetchRelayMode;
            *((_QWORD *)&v230 + 1) = 24;
            *(_QWORD *)&v231 = aInput_4;
            *((_QWORD *)&v231 + 1) = 5;
            *(_QWORD *)&v232 = v335;
            *((_QWORD *)&v232 + 1) = v11;
            sub_140AF0290(&v252, &v230);
            v13 = v252.m256i_i64[0];
            v5 = ((unsigned __int64)((v252.m256i_u8[15] << 16)
                                   | (unsigned int)*(unsigned __int16 *)((char *)&v252.m256i_u16[6] + 1)) << 32)
               | *(unsigned int *)((char *)&v252.m256i_u32[2] + 1);
            v14 = v252.m256i_i8[8];
            v15 = v252.m256i_i64[3];
            v16 = v252.m256i_i64[2];
            v17 = *(_QWORD *)v253;
            if ( v252.m256i_i64[0] != -1 )
            {
              v199 = *(_OWORD *)&v253[56];
              v198 = *(_OWORD *)&v253[40];
              v197 = *(_OWORD *)&v253[24];
              v196 = *(_OWORD *)&v253[8];
              v18 = v346;
              v19 = v346 + 5696;
              *(_QWORD *)(v346 + 5800) = v12;
              *(_QWORD *)(v18 + 5696) = v13;
              *(_BYTE *)(v18 + 5704) = v14;
              *(_BYTE *)(v18 + 5711) = BYTE6(v5);
              *(_WORD *)(v18 + 5709) = WORD2(v5);
              *(_DWORD *)(v18 + 5705) = v5;
              v7 = v18;
              *(_QWORD *)(v18 + 5712) = v16;
              *(_QWORD *)(v18 + 5720) = v15;
              *(_QWORD *)(v18 + 5728) = v17;
              v20 = v197;
              v21 = v198;
              v22 = v199;
              *(_OWORD *)(v18 + 5736) = v196;
              *(_OWORD *)(v18 + 5752) = v20;
              *(_OWORD *)(v18 + 5768) = v21;
              *(_OWORD *)(v18 + 5784) = v22;
              *(_BYTE *)(v18 + 7088) = 0;
              v6 = v18 + 7096;
              sub_141684120(v18 + 7096, v19, 1400);
              v4 = (_BYTE *)(v7 + 9896);
              *(_BYTE *)(v7 + 9896) = 0;
              v9 = v335;
LABEL_9:
              v23 = v7 + 8496;
              sub_141684120(v7 + 8496, v6, 1400);
              v24 = *(unsigned __int8 *)(v7 + 9888);
              switch ( *(_BYTE *)(v7 + 9888) )
              {
                case 0:
                  goto LABEL_11;
                case 1:
                  goto LABEL_98;
                case 2:
                  goto LABEL_97;
                case 3:
                  goto LABEL_12;
                case 4:
                  goto LABEL_13;
              }
            }
            v345 = v11;
          }
          else
          {
            v345 = v11;
            v5 = ((unsigned __int64)((BYTE7(v230) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v230 + 5)) << 32)
               | *(unsigned int *)((char *)&v230 + 1);
            v16 = *((_QWORD *)&v230 + 1);
            v17 = *((_QWORD *)&v231 + 1);
            v15 = v231;
          }
          sub_140BF0DE0(v335);
          if ( *v345 == -1 )
          {
            v69 = 1;
            goto LABEL_78;
          }
          v343 = (_QWORD *)(v346 + 5680);
          v66 = *(char **)(v346 + 5680);
          v342 = *(_QWORD *)(v346 + 5688);
          v344 = nullptr;
          v341 = v66;
          while ( (_BYTE *)v342 != v344 )
          {
            ++v344;
            v67 = v66 + 96;
            sub_1402C7520();
            v66 = v67;
          }
          v68 = *v345;
          v69 = 1;
          if ( !*v345 )
            goto LABEL_78;
          goto LABEL_71;
        case 1:
LABEL_96:
          v335 = v9;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_95:
          v335 = v9;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
LABEL_7:
          v4 = (_BYTE *)(v7 + 9896);
          v10 = *(unsigned __int8 *)(v7 + 9896);
          v6 = v7 + 7096;
          break;
      }
      break;
  }
LABEL_8:
  switch ( v10 )
  {
    case 0LL:
      goto LABEL_9;
    case 1LL:
      v335 = v9;
      v259 = v6;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2LL:
      v335 = v9;
      v259 = v6;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3LL:
      v23 = v7 + 8496;
      switch ( *(_BYTE *)(v7 + 9888) )
      {
        case 0:
LABEL_11:
          v25 = *(_QWORD **)(v7 + 8600);
          *(_QWORD *)(v7 + 8608) = v25;
          *(_BYTE *)(v7 + 9889) = 0;
          v5 = v7 + 8616;
          v26 = *(_OWORD *)(v23 + 16);
          v27 = *(_OWORD *)(v23 + 32);
          v28 = *(_OWORD *)(v23 + 48);
          *(_OWORD *)(v7 + 8616) = *(_OWORD *)v23;
          *(_OWORD *)(v7 + 8632) = v26;
          *(_OWORD *)(v7 + 8648) = v27;
          *(_OWORD *)(v7 + 8664) = v28;
          *(_OWORD *)(v7 + 8680) = *(_OWORD *)(v23 + 64);
          *(_OWORD *)(v7 + 8696) = *(_OWORD *)(v23 + 80);
          *(_QWORD *)(v7 + 8712) = *(_QWORD *)(v23 + 96);
          *(_QWORD *)(v7 + 8720) = v25;
          v344 = (_BYTE *)(v7 + 9880);
          *(_BYTE *)(v7 + 9880) = 0;
LABEL_15:
          *(_QWORD *)(v7 + 8824) = *(_QWORD *)(v5 + 96);
          *(_OWORD *)(v7 + 8808) = *(_OWORD *)(v5 + 80);
          *(_OWORD *)(v7 + 8792) = *(_OWORD *)(v5 + 64);
          v29 = *(_OWORD *)v5;
          v30 = *(_OWORD *)(v5 + 16);
          v31 = *(_OWORD *)(v5 + 32);
          *(_OWORD *)(v7 + 8776) = *(_OWORD *)(v5 + 48);
          *(_OWORD *)(v7 + 8760) = v31;
          *(_OWORD *)(v7 + 8744) = v30;
          *(_OWORD *)(v7 + 8728) = v29;
          v252.m256i_i64[2] = *(_QWORD *)(v7 + 8656);
          *(_OWORD *)v252.m256i_i8 = *(_OWORD *)(v7 + 8640);
          v32 = *(_QWORD *)(v7 + 8792);
          v33 = *(_QWORD *)(v7 + 8776) == -1;
          v335 = v9;
          v317 = v4;
          v311 = v6;
          v312 = v23;
          if ( v33 )
            v34 = 0;
          else
            v34 = *(_QWORD *)(v7 + 8784);
          v295 = v344;
          v342 = v5;
          v294 = v5;
          v345 = (_QWORD *)(v7 + 8832);
          sub_14084AD00((__int64 *)(v7 + 8832), v25, &v252, v34, v32);
          sub_140A49CF0(&v252, *(_QWORD *)(v346 + 8736), *(_QWORD *)(v346 + 8744));
          v216 = *(_OWORD *)&v252.m256i_u64[1];
          v217 = v252.m256i_i64[3];
          if ( v252.m256i_i8[0] )
          {
            v215 = v217;
            v214 = v216;
            v35 = (_QWORD *)v346;
            v5 = v342;
            if ( *v345 )
              sub_140001660(*(_QWORD *)(v346 + 8840), *v345, 1);
            v36 = v35 + 1091;
            v37 = v35[1097];
            v38 = v344;
            if ( v37 != -1 && v37 )
              sub_140001660(v35[1098], v37, 1);
            if ( *v36 )
              sub_140001660(v35[1092], *v36, 1);
            v39 = v35[1100];
            v40 = 9;
            if ( (unsigned __int64)(v39 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
LABEL_27:
              sub_140001660(v35[1101], v39, 1);
LABEL_28:
            v219 = v215;
            v218 = v214;
            *v38 = 1;
            sub_140BE8520(v5);
            if ( v40 == -1 )
            {
              v195 = v219;
              v194 = v218;
              sub_140AC9370(&v252, &v194);
              v41 = v252.m256i_u64[1];
              v70 = v252.m256i_i64[0];
              v17 = v252.m256i_i64[3];
              v42 = v252.m256i_i64[2];
              v43 = *(_QWORD *)v253;
              v190 = *(_OWORD *)&v253[8];
              v191 = *(_OWORD *)&v253[24];
              v192 = *(_OWORD *)&v253[40];
              v193 = *(_OWORD *)&v253[56];
              v71 = v346;
              *(_BYTE *)(v346 + 9889) = 0;
              *(_BYTE *)(v71 + 9888) = 1;
              if ( v70 == -2 )
                goto LABEL_226;
              v45 = v41 >> 8;
              if ( v70 != -1 )
              {
                v189 = v193;
                v188 = v192;
                v187 = v191;
                v186 = v190;
                v178 = v70;
                v179 = v41;
                v180 = v41 >> 8;
                v182 = v41 >> 8 >> 48;
                v181 = HIDWORD(v41) >> 8;
                v183 = v42;
                v184 = v17;
                v185 = v43;
                sub_140B03E90(&v252, &v178);
                v5 = ((unsigned __int64)((v252.m256i_u8[15] << 16)
                                       | (unsigned int)*(unsigned __int16 *)((char *)&v252.m256i_u16[6] + 1)) << 32)
                   | *(unsigned int *)((char *)&v252.m256i_u32[2] + 1);
                v14 = v252.m256i_i8[8];
                v15 = v252.m256i_i64[3];
                v16 = v252.m256i_i64[2];
                v17 = *(_QWORD *)v253;
                if ( v252.m256i_i64[0] == -1 )
                {
                  v69 = 0;
                }
                else
                {
                  v252.m256i_i8[15] = (((unsigned __int64)((v252.m256i_u8[15] << 16)
                                                         | (unsigned int)*(unsigned __int16 *)((char *)&v252.m256i_u16[6]
                                                                                             + 1)) << 32)
                                     | *(unsigned int *)((char *)&v252.m256i_u32[2] + 1)) >> 48;
                  *(__int16 *)((char *)&v252.m256i_i16[6] + 1) = WORD2(v5);
                  *(__int32 *)((char *)&v252.m256i_i32[2] + 1) = v5;
                  *(_QWORD *)&v222 = 0;
                  *((_QWORD *)&v222 + 1) = 1;
                  *(_QWORD *)&v223 = 0;
                  *(_QWORD *)&v231 = 1610612768;
                  *(_QWORD *)&v230 = &v222;
                  *((_QWORD *)&v230 + 1) = &off_1417C41C0;
                  if ( (unsigned __int8)sub_141230630(&v252, &v230, v72) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v334,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v15 = *((_QWORD *)&v222 + 1);
                  v16 = v222;
                  v17 = v223;
                  sub_140BF0F60(&v252);
                  v69 = 1;
                  v14 = 3;
                }
                goto LABEL_65;
              }
            }
            else
            {
              v252.m256i_i64[0] = v40;
              *(_OWORD *)&v252.m256i_u64[1] = v218;
              v252.m256i_i64[3] = v219;
              *(_QWORD *)&v222 = 0;
              *((_QWORD *)&v222 + 1) = 1;
              *(_QWORD *)&v223 = 0;
              *(_QWORD *)&v231 = 1610612768;
              *(_QWORD *)&v230 = &v222;
              *((_QWORD *)&v230 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_140B036A0(&v252, &v230) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v334,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v42 = *((_QWORD *)&v222 + 1);
              v41 = v222;
              v17 = v223;
              sub_140BF2F60(&v252);
              v44 = v346;
              *(_BYTE *)(v346 + 9889) = 0;
              *(_BYTE *)(v44 + 9888) = 1;
              v45 = v41 >> 8;
            }
            v46 = (_BYTE *)((v45 << 8) | (unsigned __int8)v41);
            if ( v17 < 0 )
            {
              v47 = 0;
              goto LABEL_33;
            }
            if ( v17 )
            {
              nullsub_1(v43);
              v47 = 1;
              v73 = sub_140001650(v17, 1);
              if ( !v73 )
              {
LABEL_33:
                v344 = v46;
                v342 = v42;
                sub_1416C2D4B(v47, v17);
              }
              v15 = v73;
              sub_141684120(v73, v42, v17);
              if ( !v46 )
                goto LABEL_64;
            }
            else
            {
              v15 = 1;
              if ( !v46 )
                goto LABEL_64;
            }
            sub_140001660(v42, v46, 1);
LABEL_64:
            v69 = 1;
            v14 = 3;
            v16 = v17;
LABEL_65:
            *v317 = 1;
            sub_140BF0DE0(v335);
            if ( *(_QWORD *)(v346 + 5672) != -1 )
            {
              v343 = (_QWORD *)(v346 + 5680);
              v74 = *(_QWORD **)(v346 + 5680);
              v342 = *(_QWORD *)(v346 + 5688);
              v344 = nullptr;
              v345 = v74;
              while ( (_BYTE *)v342 != v344 )
              {
                ++v344;
                v75 = v74 + 12;
                sub_1402C7520();
                v74 = v75;
              }
              v68 = *(_QWORD *)(v346 + 5672);
              if ( v68 )
LABEL_71:
                sub_140001660(*v343, 96 * v68, 8);
            }
LABEL_78:
            *(_BYTE *)(v346 + 9904) = 1;
            sub_140BE5CD0(v335);
            v206 = v5;
            v208 = BYTE6(v5);
            v207 = WORD2(v5);
            v210 = v15;
            v211 = v17;
            v205 = v14;
            v209 = v16;
            v204 = v69;
            v77 = v346;
            *(_BYTE *)(v346 + 9923) = 0;
            sub_141684120(&v252, v77, 360);
            *(_BYTE *)(v77 + 9922) = 0;
            v78 = *(_QWORD *)(v77 + 384);
            *(_BYTE *)(v77 + 9921) = 0;
            *(_QWORD *)&v231 = *(_QWORD *)(v77 + 376);
            v230 = *(_OWORD *)(v77 + 360);
            sub_14047E370(
              (unsigned int)&v252,
              v78,
              (unsigned int)&v204,
              (unsigned int)&v230,
              *(_DWORD *)(v77 + 9912),
              *(_DWORD *)(v77 + 9916));
            v79 = 1;
            result = 0;
            v71 = v346;
            goto LABEL_227;
          }
          v7 = v346;
          *(_OWORD *)(v346 + 8856) = v216;
          v48 = v217;
          *(_QWORD *)(v7 + 8872) = v217;
          v49 = *(_QWORD *)(v7 + 8864);
          v50 = *(_QWORD *)(v7 + 8840);
          v51 = *(_QWORD *)(v7 + 8848);
          v52 = 0;
          v53 = 1;
          if ( *(_QWORD *)(v7 + 8800) != -1 )
            v53 = *(_QWORD *)(v7 + 8808);
          v54 = *(_BYTE *)(v7 + 8825);
          if ( *(_QWORD *)(v7 + 8800) != -1 )
            v52 = *(_QWORD *)(v7 + 8816);
          v55 = *(_BYTE *)(v7 + 8824);
          *(_QWORD *)(v7 + 8992) = v49;
          *(_QWORD *)(v7 + 9000) = v48;
          *(_QWORD *)(v7 + 9008) = v50;
          *(_QWORD *)(v7 + 9016) = v51;
          *(_QWORD *)(v7 + 9024) = v53;
          *(_QWORD *)(v7 + 9032) = v52;
          v56 = (_QWORD *)(v7 + 9089);
          *(_BYTE *)(v7 + 9089) = 0;
          *(_BYTE *)(v7 + 9090) = v54;
          *(_BYTE *)(v7 + 9091) = v55;
          v57 = (_QWORD *)(v7 + 8880);
          v5 = v342;
LABEL_39:
          *(_QWORD *)(v7 + 8976) = v49;
          *(_QWORD *)(v7 + 8984) = v48;
          *(_BYTE *)(v7 + 9088) = v54;
          v58 = v7 + 9040;
          v38 = v344;
          v293 = v344;
          v292 = v5;
          v291 = v56;
          v290 = v57;
          sub_14075F8E0(v58);
          v289 = v38;
          v288 = v5;
          v287 = v56;
          v286 = v57;
          sub_14075FB50(&v252, v53, v52);
          v212 = *(_OWORD *)&v252.m256i_u64[1];
          v213 = v252.m256i_i64[3];
          if ( v252.m256i_i64[0] == -1 )
          {
            v257 = v212;
            v258 = v213;
            v256 = 1;
            goto LABEL_204;
          }
          v233 = *(_OWORD *)&v253[48];
          v232 = *(_OWORD *)&v253[32];
          v231 = *(_OWORD *)&v253[16];
          v230 = *(_OWORD *)v253;
          v59 = v346;
          *(_QWORD *)(v346 + 8880) = v252.m256i_i64[0];
          *(_OWORD *)(v59 + 8888) = v212;
          *(_QWORD *)(v59 + 8904) = v213;
          v60 = v231;
          v61 = v232;
          v62 = v233;
          *(_OWORD *)(v59 + 8912) = v230;
          *(_OWORD *)(v59 + 8928) = v60;
          *(_OWORD *)(v59 + 8944) = v61;
          *(_OWORD *)(v59 + 8960) = v62;
          if ( v55 )
          {
            v63 = 0;
            if ( dword_141EC25B0 )
            {
              v307 = v38;
              v306 = v5;
              v305 = v56;
              v304 = v57;
              sub_141698535(&qword_141EC25A8);
            }
            v64 = (volatile signed __int64 *)qword_141EC25A8;
          }
          else
          {
            v63 = 0;
            if ( dword_141EC25A0 )
            {
              v307 = v38;
              v306 = v5;
              v305 = v56;
              v304 = v57;
              sub_1416984EC(&qword_141EC2598);
            }
            v64 = (volatile signed __int64 *)qword_141EC2598;
          }
          v76 = _InterlockedIncrement64(v64);
          if ( (v76 < 0) ^ v63 | (v76 == 0) )
LABEL_109:
            BUG();
          v7 = v346;
          *(_QWORD *)(v346 + 9064) = v64;
          *(_QWORD *)(v7 + 9072) = 0x200000000LL;
          *(_BYTE *)(v7 + 9080) = 0;
          break;
        case 1:
LABEL_98:
          v312 = v23;
          v311 = v6;
          v317 = v4;
          v335 = v9;
          sub_1416C3400(&off_1417BAF20, a2, a3, a4);
        case 2:
LABEL_97:
          v312 = v23;
          v311 = v6;
          v317 = v4;
          v335 = v9;
          sub_1416C3420(&off_1417BAF20, a2, a3, a4);
        case 3:
LABEL_12:
          v344 = (_BYTE *)(v7 + 9880);
          v24 = *(unsigned __int8 *)(v7 + 9880);
          v5 = v7 + 8616;
LABEL_13:
          switch ( v24 )
          {
            case 0LL:
              v25 = *(_QWORD **)(v7 + 8720);
              goto LABEL_15;
            case 1LL:
              v312 = v23;
              v311 = v6;
              v317 = v4;
              v335 = v9;
              v260 = v5;
              sub_1416C3400(&off_1417BA850, a2, a3, a4);
            case 2LL:
              v312 = v23;
              v311 = v6;
              v317 = v4;
              v335 = v9;
              v260 = v5;
              sub_1416C3420(&off_1417BA850, a2, a3, a4);
            case 3LL:
              v56 = (_QWORD *)(v7 + 9089);
              v65 = *(unsigned __int8 *)(v7 + 9089);
              v345 = (_QWORD *)(v7 + 8880);
              v335 = v9;
              v317 = v4;
              v311 = v6;
              v312 = v23;
              switch ( v65 )
              {
                case 0LL:
                  v49 = *(_QWORD *)(v7 + 8992);
                  v48 = *(_QWORD *)(v7 + 9000);
                  v54 = *(_BYTE *)(v7 + 9090);
                  v53 = *(_QWORD *)(v7 + 9024);
                  v52 = *(_QWORD *)(v7 + 9032);
                  v55 = *(_BYTE *)(v7 + 9091);
                  v57 = (_QWORD *)(v7 + 8880);
                  break;
                case 1LL:
                  v263 = v344;
                  v262 = v5;
                  v261 = v345;
                  sub_1416C3400(&off_1417BB540, a2, a3, a4);
                case 2LL:
                  v263 = v344;
                  v262 = v5;
                  v261 = v345;
                  sub_1416C3420(&off_1417BB540, a2, a3, a4);
                case 3LL:
                  v343 = (_QWORD *)(v7 + 9089);
                  v341 = (char *)(v7 + 9168);
                  v81 = *(unsigned __int8 *)(v7 + 9168);
                  v340 = v7 + 9096;
                  switch ( v81 )
                  {
                    case 0LL:
                      v333 = *(volatile signed __int64 ***)(v7 + 9096);
                      v82 = *(_QWORD *)(v7 + 9104);
                      v83 = *(_QWORD *)(v7 + 9112);
                      v336 = *(_QWORD *)(v7 + 9120);
                      v339 = *(_QWORD *)(v7 + 9128);
                      v309 = *(__int128 **)(v7 + 9136);
                      v57 = (_QWORD *)(v7 + 8880);
                      goto LABEL_116;
                    case 1LL:
                      v273 = v344;
                      v272 = v5;
                      v271 = v343;
                      v270 = v345;
                      v269 = v340;
                      sub_1416C3400(&off_1417BB5B8, a2, a3, a4);
                    case 2LL:
                      v273 = v344;
                      v272 = v5;
                      v271 = v343;
                      v270 = v345;
                      v269 = v340;
                      sub_1416C3420(&off_1417BB5B8, a2, a3, a4);
                    case 3LL:
                      v342 = v5;
                      goto LABEL_132;
                    case 4LL:
                      v342 = v5;
                      goto LABEL_140;
                  }
                case 4LL:
                  v343 = (_QWORD *)(v7 + 9089);
                  v341 = (char *)(v7 + 9168);
                  v84 = *(unsigned __int8 *)(v7 + 9168);
                  v340 = v7 + 9096;
                  switch ( v84 )
                  {
                    case 0LL:
                      v333 = *(volatile signed __int64 ***)(v7 + 9096);
                      v82 = *(_QWORD *)(v7 + 9104);
                      v83 = *(_QWORD *)(v7 + 9112);
                      v336 = *(_QWORD *)(v7 + 9120);
                      v339 = *(_QWORD *)(v7 + 9128);
                      v309 = *(__int128 **)(v7 + 9136);
                      v57 = (_QWORD *)(v7 + 8880);
                      goto LABEL_119;
                    case 1LL:
                      v268 = v344;
                      v267 = v5;
                      v266 = v343;
                      v265 = v345;
                      v264 = v340;
                      sub_1416C3400(&off_1417BB578, a2, a3, a4);
                    case 2LL:
                      v268 = v344;
                      v267 = v5;
                      v266 = v343;
                      v265 = v345;
                      v264 = v340;
                      sub_1416C3420(&off_1417BB578, a2, a3, a4);
                    case 3LL:
                      v342 = v5;
                      goto LABEL_155;
                    case 4LL:
                      v342 = v5;
                      goto LABEL_163;
                  }
              }
              goto LABEL_39;
          }
      }
      break;
  }
  while ( 1 )
  {
    v85 = *(_DWORD *)(v7 + 9072);
    if ( v85 > *(_DWORD *)(v7 + 9076) )
    {
LABEL_194:
      v345 = v57;
      v343 = v56;
      v342 = v5;
      nullsub_1(v59);
      v164 = (void *)sub_140001650(21, 1);
      if ( !v164 )
        sub_1416C2D4B(1, 21);
      qmemcpy(v164, "all retries exhausted", 21);
      *(_QWORD *)&v257 = 21;
      *((_QWORD *)&v257 + 1) = v164;
      v258 = 21;
      v256 = 1;
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v7 + 9064)) )
        sub_141018B80(v346 + 9064);
      sub_14034FA40(v345);
      v71 = v346;
      v165 = *(_QWORD *)(v346 + 9040);
      v5 = v342;
      v38 = v344;
      v57 = v345;
      if ( !v165 )
      {
LABEL_206:
        v168 = v256;
        v202 = v257;
        v203 = v258;
        *(_BYTE *)v343 = 1;
        if ( v168 == 2 )
          goto LABEL_225;
        v201 = v203;
        v200 = v202;
        v221 = v38;
        v220 = v5;
        sub_140BEDCA0(v57);
        v215 = v203;
        v214 = v202;
        v35 = (_QWORD *)v346;
        v169 = *(_QWORD *)(v346 + 8856);
        if ( v169 )
          sub_140001660(*(_QWORD *)(v346 + 8864), v169, 1);
        v170 = v35[1104];
        if ( v170 )
          sub_140001660(v35[1105], v170, 1);
        v171 = v35[1097];
        if ( v171 != -1 && v171 )
          sub_140001660(v35[1098], v171, 1);
        v172 = v168 - 1;
        v173 = v35[1091];
        if ( v173 )
          sub_140001660(v35[1092], v173, 1);
        v40 = v172 | 0xA;
        v39 = v35[1100];
        if ( (unsigned __int64)(v39 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
          goto LABEL_27;
        goto LABEL_28;
      }
LABEL_205:
      sub_140001660(*(_QWORD *)(v71 + 9048), v165, 1);
      goto LABEL_206;
    }
    if ( v85 >= *(_DWORD *)(v7 + 9076) )
      *(_BYTE *)(v7 + 9080) = 1;
    else
      *(_DWORD *)(v7 + 9072) = v85 + 1;
    v343 = v56;
    *(_DWORD *)(v7 + 9084) = v85;
    v340 = v7 + 9096;
    v33 = *(_BYTE *)(v7 + 9088) == 2;
    v341 = (char *)(v7 + 9168);
    v82 = *(_QWORD *)(v7 + 8976);
    v83 = *(_QWORD *)(v7 + 8984);
    v86 = *(_QWORD *)(v7 + 9048);
    v87 = *(_QWORD *)(v7 + 9056);
    *(_QWORD *)(v7 + 9096) = v7 + 9064;
    *(_QWORD *)(v7 + 9104) = v82;
    *(_QWORD *)(v7 + 9112) = v83;
    v336 = v86;
    *(_QWORD *)(v7 + 9120) = v86;
    v339 = v87;
    *(_QWORD *)(v7 + 9128) = v87;
    *(_QWORD *)(v7 + 9136) = v57;
    *(_BYTE *)(v7 + 9168) = 0;
    v333 = (volatile signed __int64 **)(v7 + 9064);
    if ( !v33 )
    {
      v309 = (__int128 *)v57;
LABEL_119:
      v99 = v7 + 9144;
      v100 = v344;
      v285 = v344;
      v284 = v5;
      v101 = v343;
      v283 = v343;
      v282 = v57;
      v102 = v341;
      v281 = v341;
      v103 = v340;
      v280 = v340;
      sub_140A49320(v99, v82, v83, (unsigned int)"/v1/models", 10);
      v342 = v5;
      v345 = v57;
      v104 = v99;
      v105 = *v333;
      v326 = v100;
      v325 = v5;
      v324 = v101;
      v323 = v57;
      v322 = v102;
      v321 = v103;
      sub_141060E10(&v298, v104);
      v106 = __OFSUB__((_QWORD)v298, -1);
      if ( (_QWORD)v298 == -1 )
      {
        *((_QWORD *)&v230 + 1) = *((_QWORD *)&v298 + 1);
        *(_QWORD *)&v230 = 2;
        v136 = _InterlockedIncrement64(v105);
        if ( (v136 < 0) ^ v106 | (v136 == 0) )
          goto LABEL_109;
      }
      else
      {
        v236 = 0;
        memset(v248, 0, sizeof(v248));
        v242 = v298;
        v243 = v299;
        v244 = v300;
        v245 = v301;
        v246 = v302;
        *((_QWORD *)&v232 + 1) = 0;
        v234 = 0;
        v235 = 8;
        v237 = 8;
        v238 = 0;
        v239 = 2;
        v240 = 0;
        v241 = 0;
        v247 = 1;
        v249 = 0;
        v250 = 0;
        v251 = 2;
        *(_QWORD *)&v230 = 0;
        if ( _InterlockedIncrement64(v105) <= 0 )
          goto LABEL_109;
      }
      v326 = v100;
      v325 = v5;
      v324 = v101;
      v323 = v345;
      v322 = v102;
      v321 = v103;
      sub_14103BE90(&v252, v105, &v230);
      v326 = v100;
      v325 = v5;
      v324 = v101;
      v323 = v345;
      v322 = v102;
      v321 = v103;
      sub_1406C6260(&v230, &v252, v336, v339);
      v137 = v309;
      v138 = *((_QWORD *)v309 + 10);
      v139 = 0x7FFFFFFFFFFFFFFELL;
      LOBYTE(v139) = v138 >> 62 != 0 || 4 * v138 > 0x7FFFFFFFFFFFFFFELL;
      if ( (_BYTE)v139 )
      {
        v140 = 0;
LABEL_149:
        v338 = 1;
        sub_1416C2D4B(v140, 4 * v138);
      }
      v141 = *((_WORD *)v309 + 44);
      v142 = 2;
      if ( 4 * v138 )
      {
        v143 = *((_QWORD *)v309 + 9);
        nullsub_1(v139);
        v140 = 2;
        v144 = sub_140001650(4 * v138, 2);
        if ( !v144 )
          goto LABEL_149;
        v142 = v144;
        if ( v138 )
          sub_141684120(v144, v143, 4 * v138);
      }
      v339 = v142;
      v336 = v138;
      v333 = (volatile signed __int64 **)(4 * v138);
      sub_14032BA10(&v296, (char *)v137 + 24);
      sub_14032B840(&v252, v137 + 3);
      v303 = v141;
      *((_QWORD *)&v301 + 1) = v339;
      v302 = v336;
      *(_OWORD *)&v299.m256i_u64[1] = v296;
      v299.m256i_i64[3] = v297;
      *(_QWORD *)&v301 = v252.m256i_i64[2];
      v300 = *(_OWORD *)v252.m256i_i8;
      v298 = *v137;
      v299.m256i_i64[0] = *((_QWORD *)v137 + 2);
      v338 = 0;
      sub_14103C250(&v252, &v230, &v298);
      v326 = v344;
      v325 = v342;
      v324 = v343;
      v323 = v345;
      v322 = v341;
      v321 = v340;
      v145 = sub_14103C180(&v252);
      v7 = v346;
      *(_QWORD *)(v346 + 9176) = v145;
      *(_QWORD *)(v7 + 9184) = v146;
LABEL_155:
      v147 = v7 + 9176;
      sub_14104DCF0(&v252, v7 + 9176, v308);
      v148 = v252.m256i_i64[0];
      if ( v252.m256i_i64[0] == -2 )
      {
        v177 = 3;
      }
      else
      {
        v149 = v252.m256i_i64[1];
        v222 = *(_OWORD *)&v252.m256i_u64[2];
        v223 = *(_OWORD *)v253;
        v224 = *(_OWORD *)&v253[16];
        v225 = *(_OWORD *)&v253[32];
        v226 = *(_OWORD *)&v253[48];
        v227 = *(_OWORD *)&v253[64];
        v228 = v254;
        v229 = v255;
        v150 = *(_QWORD *)(v346 + 9176);
        v151 = *(_QWORD *)(v346 + 9184);
        v326 = v344;
        v325 = v342;
        v324 = v343;
        v323 = v345;
        v322 = v341;
        v321 = v340;
        sub_140BF25D0(v150, v151);
        if ( (_DWORD)v148 == -1 )
        {
          *(_QWORD *)&v298 = v149;
          *(_QWORD *)&v230 = &v298;
          *((_QWORD *)&v230 + 1) = sub_141031F10;
          sub_14149C0F0(&v252, &unk_1417BA1BA, &v230);
          v326 = v344;
          v5 = v342;
          v325 = v342;
          v56 = v343;
          v324 = v343;
          v323 = v345;
          v322 = v341;
          v321 = v340;
          sub_140528900(v298);
          v336 = v252.m256i_i64[1];
          v339 = v252.m256i_i64[0];
          v131 = v252.m256i_i64[2];
          v157 = v346;
          goto LABEL_170;
        }
        v7 = v346;
        *(_QWORD *)(v346 + 9176) = v148;
        *(_QWORD *)(v7 + 9184) = v149;
        *(_OWORD *)(v7 + 9192) = v222;
        v152 = v224;
        v153 = v225;
        v154 = v226;
        *(_OWORD *)(v7 + 9208) = v223;
        *(_OWORD *)(v7 + 9224) = v152;
        *(_OWORD *)(v7 + 9240) = v153;
        *(_OWORD *)(v7 + 9256) = v154;
        *(_OWORD *)(v7 + 9272) = v227;
        *(_OWORD *)(v7 + 9288) = v228;
        *(_QWORD *)(v7 + 9304) = v229;
        v155 = *(_DWORD *)(v7 + 9280);
        v298 = *(_OWORD *)(v7 + 9152);
        if ( (unsigned __int16)(v155 - 200) >= 0x64u )
        {
          v339 = v147;
          LOWORD(v296) = v155;
          v252.m256i_i64[0] = (__int64)&v296;
          v252.m256i_i64[1] = (__int64)sub_1414AAE30;
          v252.m256i_i64[2] = (__int64)&v298;
          v252.m256i_i64[3] = (__int64)sub_14041F680;
          sub_14149C0F0(&v230, &unk_14178B594, &v252);
          v156 = v230;
          v7 = v346;
          v147 = v339;
          if ( (_QWORD)v230 != -1 )
          {
            v336 = *((_QWORD *)&v230 + 1);
            v131 = v231;
            sub_140BA5F10(v339);
            v157 = v346;
            v158 = *(_QWORD **)(v346 + 9304);
            if ( *v158 )
              sub_140001660(v158[1], *v158, 1);
            v339 = v156;
            sub_140001660(v158, 88, 8);
            v5 = v342;
            v56 = v343;
LABEL_170:
            v57 = v345;
            v160 = *(_QWORD *)(v157 + 9144);
            v134 = -1;
            if ( !v160 )
              goto LABEL_188;
LABEL_180:
            sub_140001660(*(_QWORD *)(v157 + 9152), v160, 1);
            goto LABEL_188;
          }
        }
        sub_141684120(v7 + 9312, v147, 136);
        *(_BYTE *)(v7 + 9872) = 0;
LABEL_163:
        v333 = (volatile signed __int64 **)(v7 + 9312);
        sub_140BF3A10(&v252, v7 + 9312, v308);
        v134 = v252.m256i_i8[0];
        if ( v252.m256i_i8[0] != -2 )
        {
          *(_DWORD *)&v319[3] = v252.m256i_i32[1];
          *(_DWORD *)v319 = *(__int32 *)((char *)v252.m256i_i32 + 1);
          v339 = v252.m256i_i64[1];
          v131 = v252.m256i_i64[3];
          v336 = v252.m256i_i64[2];
          if ( *(_BYTE *)(v346 + 9872) == 3 )
          {
            sub_140BE80E0(v346 + 9448);
          }
          else if ( !*(_BYTE *)(v346 + 9872) )
          {
            sub_140BA5F10(v333);
            v159 = *(_QWORD **)(v346 + 9440);
            if ( *v159 )
              sub_140001660(v159[1], *v159, 1);
            sub_140001660(v159, 88, 8);
          }
          if ( v134 == -1 )
          {
            *(_QWORD *)&v298 = v339;
            *(_QWORD *)&v230 = &v298;
            *((_QWORD *)&v230 + 1) = sub_141031F10;
            sub_14149C0F0(&v252, &unk_1417BA1CD, &v230);
            sub_140528900(v298);
            v336 = v252.m256i_i64[1];
            v339 = v252.m256i_i64[0];
            v131 = v252.m256i_i64[2];
          }
          else
          {
            *(_DWORD *)&v318[3] = *(_DWORD *)&v319[3];
            *(_DWORD *)v318 = *(_DWORD *)v319;
          }
          v157 = v346;
          v160 = *(_QWORD *)(v346 + 9144);
          v5 = v342;
          v56 = v343;
          v57 = v345;
          if ( v160 )
            goto LABEL_180;
          goto LABEL_188;
        }
        v177 = 4;
      }
      v71 = v346;
      v175 = (char *)v343;
      *v341 = v177;
      v176 = 4;
      goto LABEL_224;
    }
    v309 = (__int128 *)v57;
LABEL_116:
    v88 = v7 + 9144;
    v89 = v344;
    v279 = v344;
    v278 = v5;
    v90 = v343;
    v277 = v343;
    v276 = v57;
    v91 = v341;
    v275 = v341;
    v92 = v340;
    v274 = v340;
    sub_140A49320(v88, v82, v83, (unsigned int)"/v1/models", 10);
    v342 = v5;
    v345 = v57;
    v93 = v88;
    v94 = *v333;
    v332 = v89;
    v331 = v5;
    v330 = v90;
    v329 = v57;
    v328 = v91;
    v327 = v92;
    sub_141060E10(&v298, v93);
    v95 = v89;
    v96 = v90;
    v97 = __OFSUB__((_QWORD)v298, -1);
    if ( (_QWORD)v298 == -1 )
    {
      *((_QWORD *)&v230 + 1) = *((_QWORD *)&v298 + 1);
      v98 = 2;
    }
    else
    {
      v236 = 0;
      memset(v248, 0, sizeof(v248));
      v242 = v298;
      v243 = v299;
      v244 = v300;
      v245 = v301;
      v246 = v302;
      *((_QWORD *)&v232 + 1) = 0;
      v234 = 0;
      v235 = 8;
      v237 = 8;
      v238 = 0;
      v239 = 2;
      v240 = 0;
      v241 = 0;
      v247 = 1;
      v249 = 0;
      v250 = 0;
      v251 = 2;
      v97 = 0;
      v98 = 0;
    }
    v107 = v340;
    v108 = v341;
    *(_QWORD *)&v230 = v98;
    v109 = _InterlockedIncrement64(v94);
    if ( (v109 < 0) ^ v97 | (v109 == 0) )
      goto LABEL_109;
    v332 = v95;
    v331 = v5;
    v330 = v90;
    v110 = v345;
    v329 = v345;
    v328 = v108;
    v327 = v107;
    sub_14103BE90(&v252, v94, &v230);
    v332 = v95;
    v331 = v5;
    v330 = v96;
    v329 = v110;
    v328 = v108;
    v327 = v107;
    sub_1406C6D60((unsigned int)&v230, (unsigned int)&v252, (unsigned int)aXApiKey_2, 9, v336, v339);
    v332 = v95;
    v331 = v5;
    v330 = v96;
    v329 = v110;
    v328 = v108;
    v327 = v107;
    sub_1406C6D60(
      (unsigned int)&v252,
      (unsigned int)&v230,
      (unsigned int)aAnthropicVersi_1,
      17,
      (__int64)a20230601_0,
      10);
    v111 = v309;
    v112 = *((_QWORD *)v309 + 10);
    v113 = 0x7FFFFFFFFFFFFFFELL;
    LOBYTE(v113) = v112 >> 62 != 0 || 4 * v112 > 0x7FFFFFFFFFFFFFFELL;
    if ( (_BYTE)v113 )
    {
      v114 = 0;
LABEL_126:
      v337 = 1;
      sub_1416C2D4B(v114, 4 * v112);
    }
    v115 = *((_WORD *)v309 + 44);
    v116 = 2;
    if ( 4 * v112 )
    {
      v117 = *((_QWORD *)v309 + 9);
      nullsub_1(v113);
      v114 = 2;
      v118 = sub_140001650(4 * v112, 2);
      if ( !v118 )
        goto LABEL_126;
      v116 = v118;
      if ( v112 )
        sub_141684120(v118, v117, 4 * v112);
    }
    v339 = v116;
    v336 = v112;
    v333 = (volatile signed __int64 **)(4 * v112);
    sub_14032BA10(&v296, (char *)v111 + 24);
    sub_14032B840(&v230, v111 + 3);
    v303 = v115;
    *((_QWORD *)&v301 + 1) = v339;
    v302 = v336;
    *(_OWORD *)&v299.m256i_u64[1] = v296;
    v299.m256i_i64[3] = v297;
    *(_QWORD *)&v301 = v231;
    v300 = v230;
    v298 = *v111;
    v299.m256i_i64[0] = *((_QWORD *)v111 + 2);
    v337 = 0;
    sub_14103C250(&v230, &v252, &v298);
    v332 = v344;
    v331 = v342;
    v330 = v343;
    v329 = v345;
    v328 = v341;
    v327 = v340;
    v119 = sub_14103C180(&v230);
    v7 = v346;
    *(_QWORD *)(v346 + 9176) = v119;
    *(_QWORD *)(v7 + 9184) = v120;
LABEL_132:
    v121 = v7 + 9176;
    sub_14104DCF0(&v252, v7 + 9176, v308);
    v122 = v252.m256i_i64[0];
    if ( v252.m256i_i64[0] == -2 )
      break;
    v123 = v252.m256i_i64[1];
    v222 = *(_OWORD *)&v252.m256i_u64[2];
    v223 = *(_OWORD *)v253;
    v224 = *(_OWORD *)&v253[16];
    v225 = *(_OWORD *)&v253[32];
    v226 = *(_OWORD *)&v253[48];
    v227 = *(_OWORD *)&v253[64];
    v228 = v254;
    v229 = v255;
    v124 = *(_QWORD *)(v346 + 9176);
    v125 = *(_QWORD *)(v346 + 9184);
    v332 = v344;
    v331 = v342;
    v330 = v343;
    v329 = v345;
    v328 = v341;
    v327 = v340;
    sub_140BF25D0(v124, v125);
    if ( (_DWORD)v122 == -1 )
    {
      *(_QWORD *)&v298 = v123;
      *(_QWORD *)&v230 = &v298;
      *((_QWORD *)&v230 + 1) = sub_141031F10;
      sub_14149C0F0(&v252, &unk_1417BA1BA, &v230);
      v332 = v344;
      v5 = v342;
      v331 = v342;
      v56 = v343;
      v330 = v343;
      v57 = v345;
      v329 = v345;
      v328 = v341;
      v327 = v340;
      sub_140528900(v298);
      v336 = v252.m256i_i64[1];
      v339 = v252.m256i_i64[0];
      v131 = v252.m256i_i64[2];
      v132 = v346;
      goto LABEL_173;
    }
    v7 = v346;
    *(_QWORD *)(v346 + 9176) = v122;
    *(_QWORD *)(v7 + 9184) = v123;
    *(_OWORD *)(v7 + 9192) = v222;
    v126 = v224;
    v127 = v225;
    v128 = v226;
    *(_OWORD *)(v7 + 9208) = v223;
    *(_OWORD *)(v7 + 9224) = v126;
    *(_OWORD *)(v7 + 9240) = v127;
    *(_OWORD *)(v7 + 9256) = v128;
    *(_OWORD *)(v7 + 9272) = v227;
    *(_OWORD *)(v7 + 9288) = v228;
    *(_QWORD *)(v7 + 9304) = v229;
    v129 = *(_DWORD *)(v7 + 9280);
    v298 = *(_OWORD *)(v7 + 9152);
    if ( (unsigned __int16)(v129 - 200) >= 0x64u )
    {
      v339 = v121;
      LOWORD(v296) = v129;
      v252.m256i_i64[0] = (__int64)&v296;
      v252.m256i_i64[1] = (__int64)sub_1414AAE30;
      v252.m256i_i64[2] = (__int64)&v298;
      v252.m256i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&v230, &unk_14178B594, &v252);
      v130 = v230;
      v7 = v346;
      v121 = v339;
      if ( (_QWORD)v230 != -1 )
      {
        v336 = *((_QWORD *)&v230 + 1);
        v131 = v231;
        sub_140BA5F10(v339);
        v132 = v346;
        v133 = *(_QWORD **)(v346 + 9304);
        if ( *v133 )
          sub_140001660(v133[1], *v133, 1);
        v339 = v130;
        sub_140001660(v133, 88, 8);
        v5 = v342;
        v56 = v343;
        v57 = v345;
LABEL_173:
        v161 = *(_QWORD *)(v132 + 9144);
        v134 = -1;
        if ( v161 )
          goto LABEL_187;
        goto LABEL_188;
      }
    }
    sub_141684120(v7 + 9312, v121, 136);
    *(_BYTE *)(v7 + 9872) = 0;
LABEL_140:
    v333 = (volatile signed __int64 **)(v7 + 9312);
    sub_140BF3A10(&v252, v7 + 9312, v308);
    v134 = v252.m256i_i8[0];
    if ( v252.m256i_i8[0] == -2 )
    {
      v174 = 4;
      goto LABEL_220;
    }
    *(_DWORD *)&v319[3] = v252.m256i_i32[1];
    *(_DWORD *)v319 = *(__int32 *)((char *)v252.m256i_i32 + 1);
    v339 = v252.m256i_i64[1];
    v131 = v252.m256i_i64[3];
    v336 = v252.m256i_i64[2];
    if ( *(_BYTE *)(v346 + 9872) == 3 )
    {
      sub_140BE80E0(v346 + 9448);
    }
    else if ( !*(_BYTE *)(v346 + 9872) )
    {
      sub_140BA5F10(v333);
      v135 = *(_QWORD **)(v346 + 9440);
      if ( *v135 )
        sub_140001660(v135[1], *v135, 1);
      sub_140001660(v135, 88, 8);
    }
    if ( v134 == -1 )
    {
      *(_QWORD *)&v298 = v339;
      *(_QWORD *)&v230 = &v298;
      *((_QWORD *)&v230 + 1) = sub_141031F10;
      sub_14149C0F0(&v252, &unk_1417BA1CD, &v230);
      sub_140528900(v298);
      v336 = v252.m256i_i64[1];
      v339 = v252.m256i_i64[0];
      v131 = v252.m256i_i64[2];
    }
    else
    {
      *(_DWORD *)&v318[3] = *(_DWORD *)&v319[3];
      *(_DWORD *)v318 = *(_DWORD *)v319;
    }
    v132 = v346;
    v161 = *(_QWORD *)(v346 + 9144);
    v5 = v342;
    v56 = v343;
    v57 = v345;
    if ( v161 )
LABEL_187:
      sub_140001660(*(_QWORD *)(v132 + 9152), v161, 1);
LABEL_188:
    *(_DWORD *)&v320[3] = *(_DWORD *)&v318[3];
    *(_DWORD *)v320 = *(_DWORD *)v318;
    *v341 = 1;
    v310[0] = *(_DWORD *)v320;
    *(_DWORD *)((char *)v310 + 3) = *(_DWORD *)&v320[3];
    v162 = v344;
    v316 = v344;
    v315 = v5;
    v314 = v56;
    v313 = v57;
    sub_140BEDDE0(v340);
    v344 = v162;
    v342 = v5;
    v343 = v56;
    v345 = v57;
    if ( v134 != -1 )
    {
      v252.m256i_i8[0] = v134;
      *(__int32 *)((char *)v252.m256i_i32 + 1) = v310[0];
      v252.m256i_i32[1] = *(_DWORD *)((char *)v310 + 3);
      v252.m256i_i64[1] = v339;
      v252.m256i_i64[2] = v336;
      v252.m256i_i64[3] = v131;
      sub_14075F760(&v256, &v252);
      v316 = v344;
      v5 = v342;
      v315 = v342;
      v56 = v343;
      v314 = v343;
      v57 = v345;
      v313 = v345;
      sub_1400104F0(&v252);
      v167 = _InterlockedDecrement64(*(volatile signed __int64 **)(v346 + 9064));
      v38 = v344;
      if ( v167 )
      {
LABEL_203:
        v289 = v38;
        v288 = v5;
        v287 = v56;
        v286 = v57;
        sub_14034FA40(v57);
LABEL_204:
        v343 = v56;
        v71 = v346;
        v165 = *(_QWORD *)(v346 + 9040);
        if ( !v165 )
          goto LABEL_206;
        goto LABEL_205;
      }
LABEL_202:
      v307 = v38;
      v306 = v5;
      v305 = v56;
      v304 = v57;
      sub_141018B80(v346 + 9064);
      goto LABEL_203;
    }
    v7 = v346;
    if ( *(_DWORD *)(v346 + 9084) >= 2u
      || (v163 = is_transient_error(v336, v131), v7 = v346, v5 = v342, v56 = v343, v57 = v345, !v163) )
    {
      *(_QWORD *)&v257 = v339;
      *((_QWORD *)&v257 + 1) = v336;
      v258 = v131;
      v256 = 1;
      v166 = _InterlockedDecrement64(*(volatile signed __int64 **)(v7 + 9064));
      v38 = v344;
      if ( v166 )
        goto LABEL_203;
      goto LABEL_202;
    }
    if ( v339 )
      sub_140001660(v336, v339, 1);
    if ( (*(_BYTE *)(v7 + 9080) & 1) != 0 )
      goto LABEL_194;
  }
  v174 = 3;
LABEL_220:
  v71 = v346;
  v175 = (char *)v343;
  *v341 = v174;
  v176 = 3;
LABEL_224:
  *v175 = v176;
LABEL_225:
  *(_BYTE *)(v71 + 9880) = 3;
  *(_BYTE *)(v71 + 9888) = 3;
LABEL_226:
  *(_BYTE *)(v71 + 9896) = 3;
  *(_BYTE *)(v71 + 9904) = 3;
  v79 = 3;
  result = 1;
LABEL_227:
  *(_BYTE *)(v71 + 9920) = v79;
  return result;
}
