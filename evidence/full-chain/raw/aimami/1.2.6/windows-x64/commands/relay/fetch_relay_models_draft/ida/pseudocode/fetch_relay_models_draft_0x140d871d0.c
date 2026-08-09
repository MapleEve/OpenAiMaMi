// Pseudocode for fetch_relay_models_draft (EA: 0x140d871d0, size: 0x3097)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 fetch_relay_models_draft 的 handler：按入参 input（provider 草稿配置）拉取模型列表草稿；HTTP GET {base}/v1/models，支持 OpenAI 与 Anthropic（x-api-key + anthropic-version: 2023-06-01）两种鉴权头，带重试（all retries exhausted）。
// Tauri 命令 fetch_relay_models_draft 的 handler：按入参 input（provider 草稿配置）拉取模型列表草稿；HTTP GET {base}/v1/models，支持 OpenAI 与 Anthropic（x-api-key + anthropic-version: 2023-06-01）两种鉴权头，带重试（all retries exhausted）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs（内联 core\relay\fetch_models.rs / manager.rs / health_check.rs）。
char __fastcall sub_140D871D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  char v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v18; // r14
  _BYTE *v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // r9
  _QWORD *v31; // rdi
  _QWORD *v32; // rsi
  __int64 v33; // rdx
  _BYTE *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  _BYTE *v45; // r15
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdi
  __int64 v52; // rbx
  char v53; // r9
  char v54; // r14
  _QWORD *v55; // rsi
  _QWORD *v56; // r12
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int128 v62; // xmm1
  __int128 v63; // xmm2
  __int128 v64; // xmm3
  char v65; // of
  volatile signed __int64 *v66; // rax
  __int64 v67; // rax
  char *v68; // rcx
  char *v69; // rsi
  __int64 v70; // rax
  unsigned __int8 v71; // si
  __int64 v72; // rbx
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
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int128 *v114; // rsi
  unsigned __int64 v115; // r12
  __int64 v116; // rcx
  __int64 v117; // rbx
  __int16 v118; // r14
  __int64 v119; // r13
  __int64 v120; // rdi
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // r14
  __int64 v125; // rdi
  __int64 v126; // rbx
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int128 v129; // xmm1
  __int128 v130; // xmm2
  __int128 v131; // xmm3
  int v132; // eax
  __int64 v133; // rsi
  __int64 v134; // rdi
  __int64 v135; // r15
  _QWORD *v136; // rbx
  char v137; // r14
  _QWORD *v138; // rbx
  __int64 v139; // rt0
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // r9
  __int128 *v143; // rsi
  unsigned __int64 v144; // r12
  __int64 v145; // rcx
  __int64 v146; // rbx
  __int16 v147; // r14
  __int64 v148; // r13
  __int64 v149; // rdi
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // r14
  __int64 v154; // rdi
  __int64 v155; // rbx
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int128 v158; // xmm1
  __int128 v159; // xmm2
  __int128 v160; // xmm3
  int v161; // eax
  __int64 v162; // rsi
  __int64 v163; // r15
  _QWORD *v164; // rbx
  _QWORD *v165; // rbx
  __int64 v166; // rdx
  __int64 v167; // rdx
  _BYTE *v168; // rbx
  char v169; // al
  void *v170; // rax
  __int64 v171; // rdx
  signed __int64 v172; // rt0
  signed __int64 v173; // rt0
  __int64 v174; // rsi
  __int64 v175; // rdx
  __int64 v176; // rdx
  __int64 v177; // rdx
  __int64 v178; // rsi
  __int64 v179; // rdx
  char v180; // al
  char *v181; // rcx
  char v182; // al
  char v183; // al
  __int64 v184; // [rsp+20h] [rbp-60h]
  __int64 v185; // [rsp+98h] [rbp+18h] BYREF
  char v186; // [rsp+A0h] [rbp+20h]
  int v187; // [rsp+A1h] [rbp+21h]
  __int16 v188; // [rsp+A5h] [rbp+25h]
  char v189; // [rsp+A7h] [rbp+27h]
  unsigned __int64 v190; // [rsp+A8h] [rbp+28h]
  __int64 v191; // [rsp+B0h] [rbp+30h]
  __int64 v192; // [rsp+B8h] [rbp+38h]
  __int128 v193; // [rsp+C0h] [rbp+40h]
  __int128 v194; // [rsp+D0h] [rbp+50h]
  __int128 v195; // [rsp+E0h] [rbp+60h]
  __int128 v196; // [rsp+F0h] [rbp+70h]
  __int128 v197; // [rsp+100h] [rbp+80h]
  __int128 v198; // [rsp+110h] [rbp+90h]
  __int128 v199; // [rsp+120h] [rbp+A0h]
  __int128 v200; // [rsp+130h] [rbp+B0h]
  __int128 v201; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v202; // [rsp+150h] [rbp+D0h]
  __int128 v203; // [rsp+160h] [rbp+E0h]
  __int128 v204; // [rsp+170h] [rbp+F0h]
  __int128 v205; // [rsp+180h] [rbp+100h]
  __int128 v206; // [rsp+190h] [rbp+110h]
  __int128 v207; // [rsp+1A0h] [rbp+120h]
  __int64 v208; // [rsp+1B0h] [rbp+130h]
  __int128 v209; // [rsp+1C0h] [rbp+140h]
  __int64 v210; // [rsp+1D0h] [rbp+150h]
  __int64 v211; // [rsp+1D8h] [rbp+158h] BYREF
  char v212; // [rsp+1E0h] [rbp+160h]
  int v213; // [rsp+1E1h] [rbp+161h]
  __int16 v214; // [rsp+1E5h] [rbp+165h]
  char v215; // [rsp+1E7h] [rbp+167h]
  __int64 v216; // [rsp+1E8h] [rbp+168h]
  __int64 v217; // [rsp+1F0h] [rbp+170h]
  __int64 v218; // [rsp+1F8h] [rbp+178h]
  __int128 v219; // [rsp+200h] [rbp+180h]
  __int64 v220; // [rsp+210h] [rbp+190h]
  __int128 v221; // [rsp+220h] [rbp+1A0h]
  __int64 v222; // [rsp+230h] [rbp+1B0h]
  __int128 v223; // [rsp+240h] [rbp+1C0h]
  __int64 v224; // [rsp+250h] [rbp+1D0h]
  __int128 v225; // [rsp+260h] [rbp+1E0h]
  __int64 v226; // [rsp+270h] [rbp+1F0h]
  unsigned __int64 v227; // [rsp+280h] [rbp+200h]
  _BYTE *v228; // [rsp+288h] [rbp+208h]
  __int128 v229; // [rsp+290h] [rbp+210h] BYREF
  __int128 v230; // [rsp+2A0h] [rbp+220h]
  __int128 v231; // [rsp+2B0h] [rbp+230h]
  __int128 v232; // [rsp+2C0h] [rbp+240h]
  __int128 v233; // [rsp+2D0h] [rbp+250h]
  __int128 v234; // [rsp+2E0h] [rbp+260h]
  __int128 v235; // [rsp+2F0h] [rbp+270h]
  __int64 v236; // [rsp+300h] [rbp+280h]
  __int128 v237; // [rsp+310h] [rbp+290h] BYREF
  __int128 v238; // [rsp+320h] [rbp+2A0h]
  __int128 v239; // [rsp+330h] [rbp+2B0h]
  __int128 v240; // [rsp+340h] [rbp+2C0h]
  __int64 v241; // [rsp+350h] [rbp+2D0h]
  __int64 v242; // [rsp+358h] [rbp+2D8h]
  __int128 v243; // [rsp+360h] [rbp+2E0h]
  __int64 v244; // [rsp+370h] [rbp+2F0h]
  __int64 v245; // [rsp+378h] [rbp+2F8h]
  __int64 v246; // [rsp+380h] [rbp+300h]
  __int64 v247; // [rsp+388h] [rbp+308h]
  __int16 v248; // [rsp+390h] [rbp+310h]
  __int128 v249; // [rsp+392h] [rbp+312h]
  __int128 v250; // [rsp+3A2h] [rbp+322h]
  __int128 v251; // [rsp+3B2h] [rbp+332h]
  __int128 v252; // [rsp+3C2h] [rbp+342h]
  _BYTE v253[22]; // [rsp+3D2h] [rbp+352h]
  __int64 v254; // [rsp+3E8h] [rbp+368h]
  char v255; // [rsp+3F0h] [rbp+370h]
  _BYTE v256[7]; // [rsp+3F1h] [rbp+371h] BYREF
  __int128 v257; // [rsp+3F8h] [rbp+378h]
  __int64 v258; // [rsp+408h] [rbp+388h]
  char v259; // [rsp+410h] [rbp+390h]
  __int64 v260; // [rsp+420h] [rbp+3A0h] BYREF
  __int128 v261; // [rsp+428h] [rbp+3A8h]
  __int64 v262; // [rsp+438h] [rbp+3B8h]
  __int64 v263; // [rsp+440h] [rbp+3C0h]
  __int64 v264; // [rsp+448h] [rbp+3C8h]
  _QWORD *v265; // [rsp+450h] [rbp+3D0h]
  __int64 v266; // [rsp+458h] [rbp+3D8h]
  _BYTE *v267; // [rsp+460h] [rbp+3E0h]
  __int64 v268; // [rsp+468h] [rbp+3E8h]
  _QWORD *v269; // [rsp+470h] [rbp+3F0h]
  _QWORD *v270; // [rsp+478h] [rbp+3F8h]
  __int64 v271; // [rsp+480h] [rbp+400h]
  _BYTE *v272; // [rsp+488h] [rbp+408h]
  __int64 v273; // [rsp+490h] [rbp+410h]
  _QWORD *v274; // [rsp+498h] [rbp+418h]
  _QWORD *v275; // [rsp+4A0h] [rbp+420h]
  __int64 v276; // [rsp+4A8h] [rbp+428h]
  _BYTE *v277; // [rsp+4B0h] [rbp+430h]
  __int64 v278; // [rsp+4B8h] [rbp+438h]
  char *v279; // [rsp+4C0h] [rbp+440h]
  _QWORD *v280; // [rsp+4C8h] [rbp+448h]
  _QWORD *v281; // [rsp+4D0h] [rbp+450h]
  unsigned __int64 v282; // [rsp+4D8h] [rbp+458h]
  _BYTE *v283; // [rsp+4E0h] [rbp+460h]
  __int64 v284; // [rsp+4E8h] [rbp+468h]
  char *v285; // [rsp+4F0h] [rbp+470h]
  _QWORD *v286; // [rsp+4F8h] [rbp+478h]
  _QWORD *v287; // [rsp+500h] [rbp+480h]
  unsigned __int64 v288; // [rsp+508h] [rbp+488h]
  _BYTE *v289; // [rsp+510h] [rbp+490h]
  _QWORD *v290; // [rsp+518h] [rbp+498h]
  _QWORD *v291; // [rsp+520h] [rbp+4A0h]
  unsigned __int64 v292; // [rsp+528h] [rbp+4A8h]
  _BYTE *v293; // [rsp+530h] [rbp+4B0h]
  _QWORD *v294; // [rsp+538h] [rbp+4B8h]
  _QWORD *v295; // [rsp+540h] [rbp+4C0h]
  unsigned __int64 v296; // [rsp+548h] [rbp+4C8h]
  _BYTE *v297; // [rsp+550h] [rbp+4D0h]
  unsigned __int64 v298; // [rsp+558h] [rbp+4D8h]
  _BYTE *v299; // [rsp+560h] [rbp+4E0h]
  __int128 v300; // [rsp+568h] [rbp+4E8h] BYREF
  __int64 v301; // [rsp+578h] [rbp+4F8h]
  _BYTE v302[112]; // [rsp+580h] [rbp+500h] BYREF
  __int128 v303; // [rsp+5F0h] [rbp+570h]
  __int64 v304; // [rsp+600h] [rbp+580h]
  __int128 v305; // [rsp+6F0h] [rbp+670h] BYREF
  __m256i v306; // [rsp+700h] [rbp+680h]
  __int128 v307; // [rsp+720h] [rbp+6A0h]
  __int128 v308; // [rsp+730h] [rbp+6B0h]
  __int64 v309; // [rsp+740h] [rbp+6C0h]
  __int16 v310; // [rsp+748h] [rbp+6C8h]
  _QWORD *v311; // [rsp+750h] [rbp+6D0h]
  _QWORD *v312; // [rsp+758h] [rbp+6D8h]
  unsigned __int64 v313; // [rsp+760h] [rbp+6E0h]
  _BYTE *v314; // [rsp+768h] [rbp+6E8h]
  __int64 v315; // [rsp+770h] [rbp+6F0h]
  __int128 *v316; // [rsp+778h] [rbp+6F8h]
  _DWORD v317[2]; // [rsp+780h] [rbp+700h]
  __int64 v318; // [rsp+788h] [rbp+708h]
  __int64 v319; // [rsp+790h] [rbp+710h]
  _QWORD *v320; // [rsp+798h] [rbp+718h]
  _QWORD *v321; // [rsp+7A0h] [rbp+720h]
  unsigned __int64 v322; // [rsp+7A8h] [rbp+728h]
  _BYTE *v323; // [rsp+7B0h] [rbp+730h]
  _BYTE *v324; // [rsp+7B8h] [rbp+738h]
  _BYTE v325[7]; // [rsp+7C0h] [rbp+740h]
  _BYTE v326[7]; // [rsp+7C8h] [rbp+748h]
  _BYTE v327[7]; // [rsp+7D0h] [rbp+750h]
  __int64 v328; // [rsp+7D8h] [rbp+758h]
  char *v329; // [rsp+7E0h] [rbp+760h]
  _QWORD *v330; // [rsp+7E8h] [rbp+768h]
  _QWORD *v331; // [rsp+7F0h] [rbp+770h]
  unsigned __int64 v332; // [rsp+7F8h] [rbp+778h]
  _BYTE *v333; // [rsp+800h] [rbp+780h]
  __int64 v334; // [rsp+808h] [rbp+788h]
  char *v335; // [rsp+810h] [rbp+790h]
  _QWORD *v336; // [rsp+818h] [rbp+798h]
  _QWORD *v337; // [rsp+820h] [rbp+7A0h]
  unsigned __int64 v338; // [rsp+828h] [rbp+7A8h]
  _BYTE *v339; // [rsp+830h] [rbp+7B0h]
  volatile signed __int64 **v340; // [rsp+838h] [rbp+7B8h]
  char v341; // [rsp+847h] [rbp+7C7h] BYREF
  __int64 v342; // [rsp+848h] [rbp+7C8h]
  __int64 v343; // [rsp+850h] [rbp+7D0h]
  char v344; // [rsp+85Eh] [rbp+7DEh]
  char v345; // [rsp+85Fh] [rbp+7DFh]
  __int64 v346; // [rsp+860h] [rbp+7E0h]
  __int64 v347; // [rsp+868h] [rbp+7E8h]
  char *v348; // [rsp+870h] [rbp+7F0h]
  unsigned __int64 v349; // [rsp+878h] [rbp+7F8h]
  _QWORD *v350; // [rsp+880h] [rbp+800h]
  _BYTE *v351; // [rsp+888h] [rbp+808h]
  _QWORD *v352; // [rsp+890h] [rbp+810h]
  __int64 v353; // [rsp+898h] [rbp+818h]
  __int64 v354; // [rsp+8A0h] [rbp+820h]

  v354 = -2;
  v315 = a2;
  v2 = a1;
  v3 = *(unsigned __int8 *)(a1 + 9920);
  v353 = a1;
  switch ( v3 )
  {
    case 0LL:
      *(_WORD *)(a1 + 9921) = 257;
      *(_BYTE *)(a1 + 9923) = 1;
      v4 = a1 + 5152;
      sub_14172B820(a1 + 5152, a1 + 392, 4760);
      switch ( *(_BYTE *)(v2 + 9904) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_94;
        case 2:
          goto LABEL_93;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v4 = a1 + 5152;
      switch ( *(_BYTE *)(a1 + 9904) )
      {
        case 0:
LABEL_4:
          v5 = (_QWORD *)(v2 + 5672);
          *(_QWORD *)&v302[48] = 0;
          *(_QWORD *)v302 = aFetchRelayMode;
          *(_QWORD *)&v302[8] = 24;
          *(_QWORD *)&v302[16] = aManager_1;
          *(_QWORD *)&v302[24] = 7;
          v342 = v4;
          *(_QWORD *)&v302[32] = v4;
          *(_QWORD *)&v302[40] = v2 + 5672;
          v6 = sub_14002B2A0((_QWORD *)(*(_QWORD *)(v2 + 5664) + 16LL));
          if ( v6 )
            goto LABEL_5;
          sub_14172C620((__int64)&v237, (__int64)v302, (__int64)&v302[16]);
          v9 = v237;
          if ( (_BYTE)v237 == 0xFF )
          {
            v6 = *((_QWORD *)&v237 + 1);
LABEL_5:
            *(_QWORD *)&v240 = 0;
            *(_QWORD *)&v237 = aFetchRelayMode;
            *((_QWORD *)&v237 + 1) = 24;
            *(_QWORD *)&v238 = aInput_5;
            *((_QWORD *)&v238 + 1) = 5;
            *(_QWORD *)&v239 = v342;
            *((_QWORD *)&v239 + 1) = v5;
            sub_1404F71D0(v302, &v237);
            v7 = *(_QWORD *)v302;
            v8 = ((unsigned __int64)((v302[15] << 16) | (unsigned int)*(unsigned __int16 *)&v302[13]) << 32)
               | *(unsigned int *)&v302[9];
            v9 = v302[8];
            v10 = *(_QWORD *)&v302[24];
            v11 = *(_QWORD *)&v302[16];
            v12 = *(_QWORD *)&v302[32];
            if ( *(_QWORD *)v302 != -1 )
            {
              v206 = *(_OWORD *)&v302[88];
              v205 = *(_OWORD *)&v302[72];
              v204 = *(_OWORD *)&v302[56];
              v203 = *(_OWORD *)&v302[40];
              v13 = v353;
              v14 = v353 + 5696;
              *(_QWORD *)(v353 + 5800) = v6;
              *(_QWORD *)(v13 + 5696) = v7;
              *(_BYTE *)(v13 + 5704) = v9;
              *(_BYTE *)(v13 + 5711) = BYTE6(v8);
              *(_WORD *)(v13 + 5709) = WORD2(v8);
              *(_DWORD *)(v13 + 5705) = v8;
              v2 = v13;
              *(_QWORD *)(v13 + 5712) = v11;
              *(_QWORD *)(v13 + 5720) = v10;
              *(_QWORD *)(v13 + 5728) = v12;
              v15 = v204;
              v16 = v205;
              v17 = v206;
              *(_OWORD *)(v13 + 5736) = v203;
              *(_OWORD *)(v13 + 5752) = v15;
              *(_OWORD *)(v13 + 5768) = v16;
              *(_OWORD *)(v13 + 5784) = v17;
              *(_BYTE *)(v13 + 7088) = 0;
              v18 = v13 + 7096;
              sub_14172B820(v13 + 7096, v14, 1400);
              v19 = (_BYTE *)(v2 + 9896);
              *(_BYTE *)(v2 + 9896) = 0;
              v4 = v342;
LABEL_8:
              v20 = v2 + 8496;
              sub_14172B820(v2 + 8496, v18, 1400);
              switch ( *(_BYTE *)(v2 + 9888) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_96;
                case 2:
                  goto LABEL_95;
                case 3:
                  goto LABEL_11;
              }
            }
            v352 = v5;
          }
          else
          {
            v352 = v5;
            v8 = ((unsigned __int64)((BYTE7(v237) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v237 + 5)) << 32)
               | *(unsigned int *)((char *)&v237 + 1);
            v11 = *((_QWORD *)&v237 + 1);
            v12 = *((_QWORD *)&v238 + 1);
            v10 = v238;
          }
          sub_140CAB140(v342);
          if ( *v352 == -1 )
          {
            v71 = 1;
            goto LABEL_76;
          }
          v350 = (_QWORD *)(v353 + 5680);
          v68 = *(char **)(v353 + 5680);
          v349 = *(_QWORD *)(v353 + 5688);
          v351 = nullptr;
          v348 = v68;
          while ( (_BYTE *)v349 != v351 )
          {
            ++v351;
            v69 = v68 + 96;
            sub_140401FB0();
            v68 = v69;
          }
          v70 = *v352;
          v71 = 1;
          if ( !*v352 )
            goto LABEL_76;
          goto LABEL_69;
        case 1:
LABEL_94:
          v342 = v4;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_93:
          v342 = v4;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v19 = (_BYTE *)(v2 + 9896);
  v18 = v2 + 7096;
  switch ( *(_BYTE *)(v2 + 9896) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v342 = v4;
      v263 = v2 + 7096;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v342 = v4;
      v263 = v2 + 7096;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v20 = v2 + 8496;
      switch ( *(_BYTE *)(v2 + 9888) )
      {
        case 0:
LABEL_10:
          v21 = *(_QWORD *)(v2 + 8600);
          *(_QWORD *)(v2 + 8608) = v21;
          *(_BYTE *)(v2 + 9889) = 0;
          v8 = v2 + 8616;
          v22 = *(_OWORD *)(v20 + 16);
          v23 = *(_OWORD *)(v20 + 32);
          v24 = *(_OWORD *)(v20 + 48);
          *(_OWORD *)(v2 + 8616) = *(_OWORD *)v20;
          *(_OWORD *)(v2 + 8632) = v22;
          *(_OWORD *)(v2 + 8648) = v23;
          *(_OWORD *)(v2 + 8664) = v24;
          *(_OWORD *)(v2 + 8680) = *(_OWORD *)(v20 + 64);
          *(_OWORD *)(v2 + 8696) = *(_OWORD *)(v20 + 80);
          *(_QWORD *)(v2 + 8712) = *(_QWORD *)(v20 + 96);
          *(_QWORD *)(v2 + 8720) = v21;
          v351 = (_BYTE *)(v2 + 9880);
          *(_BYTE *)(v2 + 9880) = 0;
LABEL_13:
          *(_QWORD *)(v2 + 8824) = *(_QWORD *)(v8 + 96);
          *(_OWORD *)(v2 + 8808) = *(_OWORD *)(v8 + 80);
          *(_OWORD *)(v2 + 8792) = *(_OWORD *)(v8 + 64);
          v25 = *(_OWORD *)v8;
          v26 = *(_OWORD *)(v8 + 16);
          v27 = *(_OWORD *)(v8 + 32);
          *(_OWORD *)(v2 + 8776) = *(_OWORD *)(v8 + 48);
          *(_OWORD *)(v2 + 8760) = v27;
          *(_OWORD *)(v2 + 8744) = v26;
          *(_OWORD *)(v2 + 8728) = v25;
          *(_QWORD *)&v302[16] = *(_QWORD *)(v2 + 8656);
          *(_OWORD *)v302 = *(_OWORD *)(v2 + 8640);
          v28 = *(_QWORD *)(v2 + 8792);
          v29 = *(_QWORD *)(v2 + 8776) == -1;
          v342 = v4;
          v324 = v19;
          v318 = v18;
          v319 = v20;
          if ( v29 )
            LODWORD(v30) = 0;
          else
            v30 = *(_QWORD *)(v2 + 8784);
          v299 = v351;
          v349 = v8;
          v298 = v8;
          v352 = (_QWORD *)(v2 + 8832);
          sub_1409B0810(v2 + 8832, v21, (unsigned int)v302, v30, v28);
          sub_1404EA930(v302, *(_QWORD *)(v353 + 8736), *(_QWORD *)(v353 + 8744));
          v223 = *(_OWORD *)&v302[8];
          v224 = *(_QWORD *)&v302[24];
          if ( v302[0] )
          {
            v222 = v224;
            v221 = v223;
            v31 = (_QWORD *)v353;
            v8 = v349;
            if ( *v352 )
              sub_140001660(*(_QWORD *)(v353 + 8840), *v352, 1);
            v32 = v31 + 1091;
            v33 = v31[1097];
            v34 = v351;
            if ( v33 != -1 && v33 )
              sub_140001660(v31[1098], v33, 1);
            if ( *v32 )
              sub_140001660(v31[1092], *v32, 1);
            v35 = v31[1100];
            v36 = 9;
            if ( (unsigned __int64)(v35 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
LABEL_25:
              sub_140001660(v31[1101], v35, 1);
LABEL_26:
            v226 = v222;
            v225 = v221;
            *v34 = 1;
            sub_140CA2650(v8);
            if ( v36 == -1 )
            {
              v202 = v226;
              v201 = v225;
              sub_1404CBAE0(v302, &v201);
              v37 = *(_QWORD *)&v302[8];
              v39 = *(_QWORD *)v302;
              v12 = *(_QWORD *)&v302[24];
              v38 = *(_QWORD *)&v302[16];
              v40 = *(_QWORD *)&v302[32];
              v197 = *(_OWORD *)&v302[40];
              v198 = *(_OWORD *)&v302[56];
              v199 = *(_OWORD *)&v302[72];
              v200 = *(_OWORD *)&v302[88];
              v72 = v353;
              *(_BYTE *)(v353 + 9889) = 0;
              *(_BYTE *)(v72 + 9888) = 1;
              if ( v39 == -2 )
                goto LABEL_225;
              v44 = v37 >> 8;
              if ( v39 != -1 )
              {
                v196 = v200;
                v195 = v199;
                v194 = v198;
                v193 = v197;
                v185 = v39;
                v186 = v37;
                v187 = v37 >> 8;
                v189 = v37 >> 8 >> 48;
                v188 = HIDWORD(v37) >> 8;
                v190 = v38;
                v191 = v12;
                v192 = v40;
                sub_140506D10(v302, &v185);
                v8 = ((unsigned __int64)((v302[15] << 16) | (unsigned int)*(unsigned __int16 *)&v302[13]) << 32)
                   | *(unsigned int *)&v302[9];
                v9 = v302[8];
                v10 = *(_QWORD *)&v302[24];
                v11 = *(_QWORD *)&v302[16];
                v12 = *(_QWORD *)&v302[32];
                if ( *(_QWORD *)v302 == -1 )
                {
                  v71 = 0;
                }
                else
                {
                  v302[15] = (((unsigned __int64)((v302[15] << 16) | (unsigned int)*(unsigned __int16 *)&v302[13]) << 32)
                            | *(unsigned int *)&v302[9]) >> 48;
                  *(_WORD *)&v302[13] = WORD2(v8);
                  *(_DWORD *)&v302[9] = v8;
                  *(_QWORD *)&v229 = 0;
                  *((_QWORD *)&v229 + 1) = 1;
                  *(_QWORD *)&v230 = 0;
                  *(_QWORD *)&v238 = 1610612768;
                  *(_QWORD *)&v237 = &v229;
                  *((_QWORD *)&v237 + 1) = &off_141891B48;
                  if ( (unsigned __int8)sub_1412DDF00(v302, &v237) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v341,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v10 = *((_QWORD *)&v229 + 1);
                  v11 = v229;
                  v12 = v230;
                  sub_140CAB2C0(v302);
                  v71 = 1;
                  v9 = 3;
                }
                goto LABEL_63;
              }
            }
            else
            {
              *(_QWORD *)v302 = v36;
              *(_OWORD *)&v302[8] = v225;
              *(_QWORD *)&v302[24] = v226;
              *(_QWORD *)&v229 = 0;
              *((_QWORD *)&v229 + 1) = 1;
              *(_QWORD *)&v230 = 0;
              *(_QWORD *)&v238 = 1610612768;
              *(_QWORD *)&v237 = &v229;
              *((_QWORD *)&v237 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1405060F0(v302, &v237) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v341,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v38 = *((_QWORD *)&v229 + 1);
              v37 = v229;
              v12 = v230;
              sub_140CAC460(v302);
              v43 = v353;
              *(_BYTE *)(v353 + 9889) = 0;
              *(_BYTE *)(v43 + 9888) = 1;
              v44 = v37 >> 8;
            }
            v45 = (_BYTE *)((v44 << 8) | (unsigned __int8)v37);
            if ( v12 < 0 )
            {
              v46 = 0;
              goto LABEL_31;
            }
            if ( v12 )
            {
              nullsub_1(v40, v39, v41, v42, v184);
              v46 = 1;
              v73 = sub_140001650(v12, 1);
              if ( !v73 )
              {
LABEL_31:
                v351 = v45;
                v349 = v38;
                sub_14176E54B(v46, v12);
              }
              v10 = v73;
              sub_14172B820(v73, v38, v12);
              if ( !v45 )
                goto LABEL_62;
            }
            else
            {
              v10 = 1;
              if ( !v45 )
                goto LABEL_62;
            }
            sub_140001660(v38, v45, 1);
LABEL_62:
            v71 = 1;
            v9 = 3;
            v11 = v12;
LABEL_63:
            *v324 = 1;
            sub_140CAB140(v342);
            if ( *(_QWORD *)(v353 + 5672) != -1 )
            {
              v350 = (_QWORD *)(v353 + 5680);
              v74 = *(_QWORD **)(v353 + 5680);
              v349 = *(_QWORD *)(v353 + 5688);
              v351 = nullptr;
              v352 = v74;
              while ( (_BYTE *)v349 != v351 )
              {
                ++v351;
                v75 = v74 + 12;
                sub_140401FB0();
                v74 = v75;
              }
              v70 = *(_QWORD *)(v353 + 5672);
              if ( v70 )
LABEL_69:
                sub_140001660(*v350, 96 * v70, 8);
            }
LABEL_76:
            *(_BYTE *)(v353 + 9904) = 1;
            sub_140CA0000(v342);
            v213 = v8;
            v215 = BYTE6(v8);
            v214 = WORD2(v8);
            v217 = v10;
            v218 = v12;
            v212 = v9;
            v216 = v11;
            v211 = v71;
            v77 = v353;
            *(_BYTE *)(v353 + 9923) = 0;
            sub_14172B820(v302, v77, 360);
            *(_BYTE *)(v77 + 9922) = 0;
            v78 = *(_QWORD *)(v77 + 384);
            *(_BYTE *)(v77 + 9921) = 0;
            *(_QWORD *)&v238 = *(_QWORD *)(v77 + 376);
            v237 = *(_OWORD *)(v77 + 360);
            sub_140AFFC30((__int64)v302, v78, (__int64)&v211, &v237, *(_DWORD *)(v77 + 9912), *(_DWORD *)(v77 + 9916));
            v79 = 1;
            result = 0;
            v72 = v353;
            goto LABEL_226;
          }
          v2 = v353;
          *(_OWORD *)(v353 + 8856) = v223;
          v47 = v224;
          *(_QWORD *)(v2 + 8872) = v224;
          v48 = *(_QWORD *)(v2 + 8864);
          v49 = *(_QWORD *)(v2 + 8840);
          v50 = *(_QWORD *)(v2 + 8848);
          v51 = 0;
          v52 = 1;
          if ( *(_QWORD *)(v2 + 8800) != -1 )
            v52 = *(_QWORD *)(v2 + 8808);
          v53 = *(_BYTE *)(v2 + 8825);
          if ( *(_QWORD *)(v2 + 8800) != -1 )
            v51 = *(_QWORD *)(v2 + 8816);
          v54 = *(_BYTE *)(v2 + 8824);
          *(_QWORD *)(v2 + 8992) = v48;
          *(_QWORD *)(v2 + 9000) = v47;
          *(_QWORD *)(v2 + 9008) = v49;
          *(_QWORD *)(v2 + 9016) = v50;
          *(_QWORD *)(v2 + 9024) = v52;
          *(_QWORD *)(v2 + 9032) = v51;
          v55 = (_QWORD *)(v2 + 9089);
          *(_BYTE *)(v2 + 9089) = 0;
          *(_BYTE *)(v2 + 9090) = v53;
          *(_BYTE *)(v2 + 9091) = v54;
          v56 = (_QWORD *)(v2 + 8880);
          v8 = v349;
LABEL_37:
          *(_QWORD *)(v2 + 8976) = v48;
          *(_QWORD *)(v2 + 8984) = v47;
          *(_BYTE *)(v2 + 9088) = v53;
          v57 = v2 + 9040;
          v34 = v351;
          v297 = v351;
          v296 = v8;
          v295 = v55;
          v294 = v56;
          sub_1402C6DF0(v57);
          v293 = v34;
          v292 = v8;
          v291 = v55;
          v290 = v56;
          sub_1402C7060(v302, v52, v51);
          v219 = *(_OWORD *)&v302[8];
          v220 = *(_QWORD *)&v302[24];
          if ( *(_QWORD *)v302 == -1 )
          {
            v261 = v219;
            v262 = v220;
            v260 = 1;
            goto LABEL_203;
          }
          v240 = *(_OWORD *)&v302[80];
          v239 = *(_OWORD *)&v302[64];
          v238 = *(_OWORD *)&v302[48];
          v237 = *(_OWORD *)&v302[32];
          v61 = v353;
          *(_QWORD *)(v353 + 8880) = *(_QWORD *)v302;
          *(_OWORD *)(v61 + 8888) = v219;
          *(_QWORD *)(v61 + 8904) = v220;
          v62 = v238;
          v63 = v239;
          v64 = v240;
          *(_OWORD *)(v61 + 8912) = v237;
          *(_OWORD *)(v61 + 8928) = v62;
          *(_OWORD *)(v61 + 8944) = v63;
          *(_OWORD *)(v61 + 8960) = v64;
          if ( v54 )
          {
            v65 = 0;
            if ( dword_141FB3038 )
            {
              v314 = v34;
              v313 = v8;
              v312 = v55;
              v311 = v56;
              sub_14172E3DE(&qword_141FB3030);
            }
            v66 = (volatile signed __int64 *)qword_141FB3030;
          }
          else
          {
            v65 = 0;
            if ( dword_141FB3028 )
            {
              v314 = v34;
              v313 = v8;
              v312 = v55;
              v311 = v56;
              sub_14172E395(&qword_141FB3020);
            }
            v66 = (volatile signed __int64 *)qword_141FB3020;
          }
          v76 = _InterlockedIncrement64(v66);
          if ( (v76 < 0) ^ v65 | (v76 == 0) )
LABEL_108:
            BUG();
          v2 = v353;
          *(_QWORD *)(v353 + 9064) = v66;
          *(_QWORD *)(v2 + 9072) = 0x200000000LL;
          *(_BYTE *)(v2 + 9080) = 0;
          break;
        case 1:
LABEL_96:
          v319 = v20;
          v318 = v18;
          v324 = v19;
          v342 = v4;
          sub_14176EC00(&off_141888590);
        case 2:
LABEL_95:
          v319 = v20;
          v318 = v18;
          v324 = v19;
          v342 = v4;
          sub_14176EC20(&off_141888590);
        case 3:
LABEL_11:
          v351 = (_BYTE *)(v2 + 9880);
          v8 = v2 + 8616;
          switch ( *(_BYTE *)(v2 + 9880) )
          {
            case 0:
              v21 = *(_QWORD *)(v2 + 8720);
              goto LABEL_13;
            case 1:
              v319 = v20;
              v318 = v18;
              v324 = v19;
              v342 = v4;
              v264 = v2 + 8616;
              sub_14176EC00(&off_141887DB0);
            case 2:
              v319 = v20;
              v318 = v18;
              v324 = v19;
              v342 = v4;
              v264 = v2 + 8616;
              sub_14176EC20(&off_141887DB0);
            case 3:
              v55 = (_QWORD *)(v2 + 9089);
              v67 = *(unsigned __int8 *)(v2 + 9089);
              v352 = (_QWORD *)(v2 + 8880);
              v342 = v4;
              v324 = v19;
              v318 = v18;
              v319 = v20;
              switch ( v67 )
              {
                case 0LL:
                  v48 = *(_QWORD *)(v2 + 8992);
                  v47 = *(_QWORD *)(v2 + 9000);
                  v53 = *(_BYTE *)(v2 + 9090);
                  v52 = *(_QWORD *)(v2 + 9024);
                  v51 = *(_QWORD *)(v2 + 9032);
                  v54 = *(_BYTE *)(v2 + 9091);
                  v56 = (_QWORD *)(v2 + 8880);
                  break;
                case 1LL:
                  v267 = v351;
                  v266 = v2 + 8616;
                  v265 = v352;
                  sub_14176EC00(&off_141888BF8);
                case 2LL:
                  v267 = v351;
                  v266 = v2 + 8616;
                  v265 = v352;
                  sub_14176EC20(&off_141888BF8);
                case 3LL:
                  v350 = (_QWORD *)(v2 + 9089);
                  v348 = (char *)(v2 + 9168);
                  v81 = *(unsigned __int8 *)(v2 + 9168);
                  v347 = v2 + 9096;
                  switch ( v81 )
                  {
                    case 0LL:
                      v340 = *(volatile signed __int64 ***)(v2 + 9096);
                      v82 = *(_QWORD *)(v2 + 9104);
                      v83 = *(_QWORD *)(v2 + 9112);
                      v343 = *(_QWORD *)(v2 + 9120);
                      v346 = *(_QWORD *)(v2 + 9128);
                      v316 = *(__int128 **)(v2 + 9136);
                      v56 = (_QWORD *)(v2 + 8880);
                      goto LABEL_115;
                    case 1LL:
                      v277 = v351;
                      v276 = v2 + 8616;
                      v275 = v350;
                      v274 = v352;
                      JUMPOUT(0x140D886C9LL);
                    case 2LL:
                      v277 = v351;
                      v276 = v2 + 8616;
                      v275 = v350;
                      v274 = v352;
                      v273 = v347;
                      sub_14176EC20(&off_141888C70);
                    case 3LL:
                      v349 = v2 + 8616;
                      goto LABEL_131;
                    case 4LL:
                      v349 = v2 + 8616;
                      goto LABEL_139;
                  }
                case 4LL:
                  v350 = (_QWORD *)(v2 + 9089);
                  v348 = (char *)(v2 + 9168);
                  v84 = *(unsigned __int8 *)(v2 + 9168);
                  v347 = v2 + 9096;
                  switch ( v84 )
                  {
                    case 0LL:
                      v340 = *(volatile signed __int64 ***)(v2 + 9096);
                      v82 = *(_QWORD *)(v2 + 9104);
                      v83 = *(_QWORD *)(v2 + 9112);
                      v343 = *(_QWORD *)(v2 + 9120);
                      v346 = *(_QWORD *)(v2 + 9128);
                      v316 = *(__int128 **)(v2 + 9136);
                      v56 = (_QWORD *)(v2 + 8880);
                      goto LABEL_118;
                    case 1LL:
                      v272 = v351;
                      v271 = v2 + 8616;
                      v270 = v350;
                      v269 = v352;
                      v268 = v347;
                      sub_14176EC00(&off_141888C30);
                    case 2LL:
                      v272 = v351;
                      v271 = v2 + 8616;
                      v270 = v350;
                      v269 = v352;
                      v268 = v347;
                      sub_14176EC20(&off_141888C30);
                    case 3LL:
                      v349 = v2 + 8616;
                      goto LABEL_154;
                    case 4LL:
                      v349 = v2 + 8616;
                      goto LABEL_162;
                  }
              }
              goto LABEL_37;
          }
      }
      break;
  }
  while ( 1 )
  {
    v85 = *(_DWORD *)(v2 + 9072);
    if ( v85 > *(_DWORD *)(v2 + 9076) )
    {
LABEL_193:
      v352 = v56;
      v350 = v55;
      v349 = v8;
      nullsub_1(v61, v58, v59, v60, v184);
      v170 = (void *)sub_140001650(21, 1);
      if ( !v170 )
        sub_14176E54B(1, 21);
      qmemcpy(v170, "all retries exhausted", 21);
      *(_QWORD *)&v261 = 21;
      *((_QWORD *)&v261 + 1) = v170;
      v262 = 21;
      v260 = 1;
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v2 + 9064)) )
        sub_1410B0250(v353 + 9064);
      sub_140044CE0(v352);
      v72 = v353;
      v171 = *(_QWORD *)(v353 + 9040);
      v8 = v349;
      v34 = v351;
      v56 = v352;
      if ( !v171 )
      {
LABEL_205:
        v174 = v260;
        v209 = v261;
        v210 = v262;
        *(_BYTE *)v350 = 1;
        if ( v174 == 2 )
          goto LABEL_224;
        v208 = v210;
        v207 = v209;
        v228 = v34;
        v227 = v8;
        sub_140CA8110(v56);
        v222 = v210;
        v221 = v209;
        v31 = (_QWORD *)v353;
        v175 = *(_QWORD *)(v353 + 8856);
        if ( v175 )
          sub_140001660(*(_QWORD *)(v353 + 8864), v175, 1);
        v176 = v31[1104];
        if ( v176 )
          sub_140001660(v31[1105], v176, 1);
        v177 = v31[1097];
        if ( v177 != -1 && v177 )
          sub_140001660(v31[1098], v177, 1);
        v178 = v174 - 1;
        v179 = v31[1091];
        if ( v179 )
          sub_140001660(v31[1092], v179, 1);
        v36 = v178 | 0xA;
        v35 = v31[1100];
        if ( (unsigned __int64)(v35 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
          goto LABEL_25;
        goto LABEL_26;
      }
LABEL_204:
      sub_140001660(*(_QWORD *)(v72 + 9048), v171, 1);
      goto LABEL_205;
    }
    if ( v85 >= *(_DWORD *)(v2 + 9076) )
      *(_BYTE *)(v2 + 9080) = 1;
    else
      *(_DWORD *)(v2 + 9072) = v85 + 1;
    v350 = v55;
    *(_DWORD *)(v2 + 9084) = v85;
    v347 = v2 + 9096;
    v29 = *(_BYTE *)(v2 + 9088) == 2;
    v348 = (char *)(v2 + 9168);
    v82 = *(_QWORD *)(v2 + 8976);
    v83 = *(_QWORD *)(v2 + 8984);
    v86 = *(_QWORD *)(v2 + 9048);
    v87 = *(_QWORD *)(v2 + 9056);
    *(_QWORD *)(v2 + 9096) = v2 + 9064;
    *(_QWORD *)(v2 + 9104) = v82;
    *(_QWORD *)(v2 + 9112) = v83;
    v343 = v86;
    *(_QWORD *)(v2 + 9120) = v86;
    v346 = v87;
    *(_QWORD *)(v2 + 9128) = v87;
    *(_QWORD *)(v2 + 9136) = v56;
    *(_BYTE *)(v2 + 9168) = 0;
    v340 = (volatile signed __int64 **)(v2 + 9064);
    if ( !v29 )
    {
      v316 = (__int128 *)v56;
LABEL_118:
      v99 = v2 + 9144;
      v100 = v351;
      v289 = v351;
      v288 = v8;
      v101 = v350;
      v287 = v350;
      v286 = v56;
      v102 = v348;
      v285 = v348;
      v103 = v347;
      v284 = v347;
      sub_1404E9F60(v99, v82, v83, (unsigned int)"/v1/models", 10);
      v349 = v8;
      v352 = v56;
      v104 = v99;
      v105 = *v340;
      v333 = v100;
      v332 = v8;
      v331 = v101;
      v330 = v56;
      v329 = v102;
      v328 = v103;
      sub_141105420(&v305, v104);
      v106 = __OFSUB__((_QWORD)v305, -1);
      if ( (_QWORD)v305 == -1 )
      {
        *((_QWORD *)&v237 + 1) = *((_QWORD *)&v305 + 1);
        *(_QWORD *)&v237 = 2;
        v139 = _InterlockedIncrement64(v105);
        if ( (v139 < 0) ^ v106 | (v139 == 0) )
          goto LABEL_108;
      }
      else
      {
        memset(v256, 0, sizeof(v256));
        v243 = 0;
        *(_OWORD *)&v302[6] = v305;
        *(__m256i *)&v302[22] = v306;
        *(_OWORD *)&v302[54] = v307;
        *(_OWORD *)&v302[70] = v308;
        *(_QWORD *)&v302[86] = v309;
        *((_QWORD *)&v239 + 1) = 0;
        v241 = 0;
        v242 = 8;
        v244 = 8;
        v245 = 0;
        v246 = 2;
        v247 = 0;
        v248 = 0;
        v249 = *(_OWORD *)v302;
        v250 = *(_OWORD *)&v302[16];
        v251 = *(_OWORD *)((char *)&v306.m256i_u64[1] + 2);
        v252 = *(_OWORD *)&v302[48];
        *(_OWORD *)v253 = *(_OWORD *)&v302[64];
        *(_QWORD *)&v253[14] = *((_QWORD *)&v308 + 1);
        v254 = v309;
        v255 = 1;
        v257 = 0;
        v258 = 0;
        v259 = 2;
        *(_QWORD *)&v237 = 0;
        if ( _InterlockedIncrement64(v105) <= 0 )
          goto LABEL_108;
      }
      v333 = v100;
      v332 = v8;
      v331 = v101;
      v330 = v352;
      v329 = v102;
      v328 = v103;
      sub_1410BAD80(v302, v105, &v237);
      v333 = v100;
      v332 = v8;
      v331 = v101;
      v330 = v352;
      v329 = v102;
      v328 = v103;
      sub_14048A200(&v237, v302, v343, v346);
      v143 = v316;
      v144 = *((_QWORD *)v316 + 10);
      v145 = 0x7FFFFFFFFFFFFFFELL;
      LOBYTE(v145) = v144 >> 62 != 0 || 4 * v144 > 0x7FFFFFFFFFFFFFFELL;
      if ( (_BYTE)v145 )
      {
        v146 = 0;
LABEL_148:
        v345 = 1;
        sub_14176E54B(v146, 4 * v144);
      }
      v147 = *((_WORD *)v316 + 44);
      v148 = 2;
      if ( 4 * v144 )
      {
        v149 = *((_QWORD *)v316 + 9);
        nullsub_1(v145, v140, v141, v142, v184);
        v146 = 2;
        v150 = sub_140001650(4 * v144, 2);
        if ( !v150 )
          goto LABEL_148;
        v148 = v150;
        if ( v144 )
          sub_14172B820(v150, v149, 4 * v144);
      }
      v346 = v148;
      v343 = v144;
      v340 = (volatile signed __int64 **)(4 * v144);
      sub_1404652F0(&v300, (char *)v143 + 24);
      sub_140465120(v302, v143 + 3);
      v310 = v147;
      *((_QWORD *)&v308 + 1) = v346;
      v309 = v343;
      *(_OWORD *)&v306.m256i_u64[1] = v300;
      v306.m256i_i64[3] = v301;
      *(_QWORD *)&v308 = *(_QWORD *)&v302[16];
      v307 = *(_OWORD *)v302;
      v305 = *v143;
      v306.m256i_i64[0] = *((_QWORD *)v143 + 2);
      v345 = 0;
      sub_1410BB140(v302, &v237, &v305);
      v333 = v351;
      v332 = v349;
      v331 = v350;
      v330 = v352;
      v329 = v348;
      v328 = v347;
      v151 = sub_1410BB070(v302);
      v2 = v353;
      *(_QWORD *)(v353 + 9176) = v151;
      *(_QWORD *)(v2 + 9184) = v152;
LABEL_154:
      v153 = v2 + 9176;
      sub_1410CCBE0(v302, v2 + 9176, v315);
      v154 = *(_QWORD *)v302;
      if ( *(_QWORD *)v302 == -2 )
      {
        v183 = 3;
      }
      else
      {
        v155 = *(_QWORD *)&v302[8];
        v229 = *(_OWORD *)&v302[16];
        v230 = *(_OWORD *)&v302[32];
        v231 = *(_OWORD *)&v302[48];
        v232 = *(_OWORD *)&v302[64];
        v233 = *(_OWORD *)&v302[80];
        v234 = *(_OWORD *)&v302[96];
        v235 = v303;
        v236 = v304;
        v156 = *(_QWORD *)(v353 + 9176);
        v157 = *(_QWORD *)(v353 + 9184);
        v333 = v351;
        v332 = v349;
        v331 = v350;
        v330 = v352;
        v329 = v348;
        v328 = v347;
        sub_140CABAD0(v156, v157);
        if ( (_DWORD)v154 == -1 )
        {
          *(_QWORD *)&v305 = v155;
          *(_QWORD *)&v237 = &v305;
          *((_QWORD *)&v237 + 1) = sub_1410E8F50;
          sub_141543AF0(v302, &unk_14188782A, &v237);
          v333 = v351;
          v8 = v349;
          v332 = v349;
          v55 = v350;
          v331 = v350;
          v330 = v352;
          v329 = v348;
          v328 = v347;
          sub_1402E5750(v305);
          v343 = *(_QWORD *)&v302[8];
          v346 = *(_QWORD *)v302;
          v134 = *(_QWORD *)&v302[16];
          v163 = v353;
          goto LABEL_169;
        }
        v2 = v353;
        *(_QWORD *)(v353 + 9176) = v154;
        *(_QWORD *)(v2 + 9184) = v155;
        *(_OWORD *)(v2 + 9192) = v229;
        v158 = v231;
        v159 = v232;
        v160 = v233;
        *(_OWORD *)(v2 + 9208) = v230;
        *(_OWORD *)(v2 + 9224) = v158;
        *(_OWORD *)(v2 + 9240) = v159;
        *(_OWORD *)(v2 + 9256) = v160;
        *(_OWORD *)(v2 + 9272) = v234;
        *(_OWORD *)(v2 + 9288) = v235;
        *(_QWORD *)(v2 + 9304) = v236;
        v161 = *(_DWORD *)(v2 + 9280);
        v305 = *(_OWORD *)(v2 + 9152);
        if ( (unsigned __int16)(v161 - 200) >= 0x64u )
        {
          v346 = v153;
          LOWORD(v300) = v161;
          *(_QWORD *)v302 = &v300;
          *(_QWORD *)&v302[8] = sub_141552830;
          *(_QWORD *)&v302[16] = &v305;
          *(_QWORD *)&v302[24] = sub_1402DDC10;
          sub_141543AF0(&v237, &unk_1417F373F, v302);
          v162 = v237;
          v2 = v353;
          v153 = v346;
          if ( (_QWORD)v237 != -1 )
          {
            v343 = *((_QWORD *)&v237 + 1);
            v134 = v238;
            sub_1402E1AD0(v346);
            v163 = v353;
            v164 = *(_QWORD **)(v353 + 9304);
            if ( *v164 )
              sub_140001660(v164[1], *v164, 1);
            v346 = v162;
            sub_140001660(v164, 88, 8);
            v8 = v349;
            v55 = v350;
LABEL_169:
            v56 = v352;
            v166 = *(_QWORD *)(v163 + 9144);
            v137 = -1;
            if ( !v166 )
              goto LABEL_187;
LABEL_179:
            sub_140001660(*(_QWORD *)(v163 + 9152), v166, 1);
            goto LABEL_187;
          }
        }
        sub_14172B820(v2 + 9312, v153, 136);
        *(_BYTE *)(v2 + 9872) = 0;
LABEL_162:
        v340 = (volatile signed __int64 **)(v2 + 9312);
        sub_140CAD190(v302, v2 + 9312, v315);
        v137 = v302[0];
        if ( v302[0] != 0xFE )
        {
          *(_DWORD *)&v326[3] = *(_DWORD *)&v302[4];
          *(_DWORD *)v326 = *(_DWORD *)&v302[1];
          v346 = *(_QWORD *)&v302[8];
          v134 = *(_QWORD *)&v302[24];
          v343 = *(_QWORD *)&v302[16];
          if ( *(_BYTE *)(v353 + 9872) == 3 )
          {
            sub_1402E4000(v353 + 9448);
          }
          else if ( !*(_BYTE *)(v353 + 9872) )
          {
            sub_1402E1AD0(v340);
            v165 = *(_QWORD **)(v353 + 9440);
            if ( *v165 )
              sub_140001660(v165[1], *v165, 1);
            sub_140001660(v165, 88, 8);
          }
          if ( v137 == -1 )
          {
            *(_QWORD *)&v305 = v346;
            *(_QWORD *)&v237 = &v305;
            *((_QWORD *)&v237 + 1) = sub_1410E8F50;
            sub_141543AF0(v302, &unk_14188783D, &v237);
            sub_1402E5750(v305);
            v343 = *(_QWORD *)&v302[8];
            v346 = *(_QWORD *)v302;
            v134 = *(_QWORD *)&v302[16];
          }
          else
          {
            *(_DWORD *)&v325[3] = *(_DWORD *)&v326[3];
            *(_DWORD *)v325 = *(_DWORD *)v326;
          }
          v163 = v353;
          v166 = *(_QWORD *)(v353 + 9144);
          v8 = v349;
          v55 = v350;
          v56 = v352;
          if ( v166 )
            goto LABEL_179;
          goto LABEL_187;
        }
        v183 = 4;
      }
      v72 = v353;
      v181 = (char *)v350;
      *v348 = v183;
      v182 = 4;
      goto LABEL_223;
    }
    v316 = (__int128 *)v56;
LABEL_115:
    v88 = v2 + 9144;
    v89 = v351;
    v283 = v351;
    v282 = v8;
    v90 = v350;
    v281 = v350;
    v280 = v56;
    v91 = v348;
    v279 = v348;
    v92 = v347;
    v278 = v347;
    sub_1404E9F60(v88, v82, v83, (unsigned int)"/v1/models", 10);
    v349 = v8;
    v352 = v56;
    v93 = v88;
    v94 = *v340;
    v339 = v89;
    v338 = v8;
    v337 = v90;
    v336 = v56;
    v335 = v91;
    v334 = v92;
    sub_141105420(&v305, v93);
    v95 = v89;
    v96 = v90;
    v97 = __OFSUB__((_QWORD)v305, -1);
    if ( (_QWORD)v305 == -1 )
    {
      *((_QWORD *)&v237 + 1) = *((_QWORD *)&v305 + 1);
      v98 = 2;
    }
    else
    {
      memset(v256, 0, sizeof(v256));
      v243 = 0;
      *(_OWORD *)&v302[6] = v305;
      *(__m256i *)&v302[22] = v306;
      *(_OWORD *)&v302[54] = v307;
      *(_OWORD *)&v302[70] = v308;
      *(_QWORD *)&v302[86] = v309;
      *((_QWORD *)&v239 + 1) = 0;
      v241 = 0;
      v242 = 8;
      v244 = 8;
      v245 = 0;
      v246 = 2;
      v247 = 0;
      v248 = 0;
      v249 = *(_OWORD *)v302;
      v250 = *(_OWORD *)&v302[16];
      v251 = *(_OWORD *)((char *)&v306.m256i_u64[1] + 2);
      v252 = *(_OWORD *)&v302[48];
      *(_OWORD *)v253 = *(_OWORD *)&v302[64];
      *(_QWORD *)&v253[14] = *((_QWORD *)&v308 + 1);
      v254 = v309;
      v255 = 1;
      v257 = 0;
      v258 = 0;
      v259 = 2;
      v97 = 0;
      v98 = 0;
    }
    v107 = v347;
    v108 = v348;
    *(_QWORD *)&v237 = v98;
    v109 = _InterlockedIncrement64(v94);
    if ( (v109 < 0) ^ v97 | (v109 == 0) )
      goto LABEL_108;
    v339 = v95;
    v338 = v8;
    v337 = v90;
    v110 = v352;
    v336 = v352;
    v335 = v108;
    v334 = v107;
    sub_1410BAD80(v302, v94, &v237);
    v339 = v95;
    v338 = v8;
    v337 = v96;
    v336 = v110;
    v335 = v108;
    v334 = v107;
    sub_14048ACF0((unsigned int)&v237, (unsigned int)v302, (unsigned int)aXApiKey_2, 9, v343, v346);
    v339 = v95;
    v338 = v8;
    v337 = v96;
    v336 = v110;
    v335 = v108;
    v334 = v107;
    sub_14048ACF0(
      (unsigned int)v302,
      (unsigned int)&v237,
      (unsigned int)aAnthropicVersi_2,
      17,
      (__int64)a20230601_1,
      10);
    v114 = v316;
    v115 = *((_QWORD *)v316 + 10);
    v116 = 0x7FFFFFFFFFFFFFFELL;
    LOBYTE(v116) = v115 >> 62 != 0 || 4 * v115 > 0x7FFFFFFFFFFFFFFELL;
    if ( (_BYTE)v116 )
    {
      v117 = 0;
LABEL_125:
      v344 = 1;
      sub_14176E54B(v117, 4 * v115);
    }
    v118 = *((_WORD *)v316 + 44);
    v119 = 2;
    if ( 4 * v115 )
    {
      v120 = *((_QWORD *)v316 + 9);
      nullsub_1(v116, v111, v112, v113, v184);
      v117 = 2;
      v121 = sub_140001650(4 * v115, 2);
      if ( !v121 )
        goto LABEL_125;
      v119 = v121;
      if ( v115 )
        sub_14172B820(v121, v120, 4 * v115);
    }
    v346 = v119;
    v343 = v115;
    v340 = (volatile signed __int64 **)(4 * v115);
    sub_1404652F0(&v300, (char *)v114 + 24);
    sub_140465120(&v237, v114 + 3);
    v310 = v118;
    *((_QWORD *)&v308 + 1) = v346;
    v309 = v343;
    *(_OWORD *)&v306.m256i_u64[1] = v300;
    v306.m256i_i64[3] = v301;
    *(_QWORD *)&v308 = v238;
    v307 = v237;
    v305 = *v114;
    v306.m256i_i64[0] = *((_QWORD *)v114 + 2);
    v344 = 0;
    sub_1410BB140(&v237, v302, &v305);
    v339 = v351;
    v338 = v349;
    v337 = v350;
    v336 = v352;
    v335 = v348;
    v334 = v347;
    v122 = sub_1410BB070(&v237);
    v2 = v353;
    *(_QWORD *)(v353 + 9176) = v122;
    *(_QWORD *)(v2 + 9184) = v123;
LABEL_131:
    v124 = v2 + 9176;
    sub_1410CCBE0(v302, v2 + 9176, v315);
    v125 = *(_QWORD *)v302;
    if ( *(_QWORD *)v302 == -2 )
      break;
    v126 = *(_QWORD *)&v302[8];
    v229 = *(_OWORD *)&v302[16];
    v230 = *(_OWORD *)&v302[32];
    v231 = *(_OWORD *)&v302[48];
    v232 = *(_OWORD *)&v302[64];
    v233 = *(_OWORD *)&v302[80];
    v234 = *(_OWORD *)&v302[96];
    v235 = v303;
    v236 = v304;
    v127 = *(_QWORD *)(v353 + 9176);
    v128 = *(_QWORD *)(v353 + 9184);
    v339 = v351;
    v338 = v349;
    v337 = v350;
    v336 = v352;
    v335 = v348;
    v334 = v347;
    sub_140CABAD0(v127, v128);
    if ( (_DWORD)v125 == -1 )
    {
      *(_QWORD *)&v305 = v126;
      *(_QWORD *)&v237 = &v305;
      *((_QWORD *)&v237 + 1) = sub_1410E8F50;
      sub_141543AF0(v302, &unk_14188782A, &v237);
      v339 = v351;
      v8 = v349;
      v338 = v349;
      v55 = v350;
      v337 = v350;
      v56 = v352;
      v336 = v352;
      v335 = v348;
      v334 = v347;
      sub_1402E5750(v305);
      v343 = *(_QWORD *)&v302[8];
      v346 = *(_QWORD *)v302;
      v134 = *(_QWORD *)&v302[16];
      v135 = v353;
      goto LABEL_172;
    }
    v2 = v353;
    *(_QWORD *)(v353 + 9176) = v125;
    *(_QWORD *)(v2 + 9184) = v126;
    *(_OWORD *)(v2 + 9192) = v229;
    v129 = v231;
    v130 = v232;
    v131 = v233;
    *(_OWORD *)(v2 + 9208) = v230;
    *(_OWORD *)(v2 + 9224) = v129;
    *(_OWORD *)(v2 + 9240) = v130;
    *(_OWORD *)(v2 + 9256) = v131;
    *(_OWORD *)(v2 + 9272) = v234;
    *(_OWORD *)(v2 + 9288) = v235;
    *(_QWORD *)(v2 + 9304) = v236;
    v132 = *(_DWORD *)(v2 + 9280);
    v305 = *(_OWORD *)(v2 + 9152);
    if ( (unsigned __int16)(v132 - 200) >= 0x64u )
    {
      v346 = v124;
      LOWORD(v300) = v132;
      *(_QWORD *)v302 = &v300;
      *(_QWORD *)&v302[8] = sub_141552830;
      *(_QWORD *)&v302[16] = &v305;
      *(_QWORD *)&v302[24] = sub_1402DDC10;
      sub_141543AF0(&v237, &unk_1417F373F, v302);
      v133 = v237;
      v2 = v353;
      v124 = v346;
      if ( (_QWORD)v237 != -1 )
      {
        v343 = *((_QWORD *)&v237 + 1);
        v134 = v238;
        sub_1402E1AD0(v346);
        v135 = v353;
        v136 = *(_QWORD **)(v353 + 9304);
        if ( *v136 )
          sub_140001660(v136[1], *v136, 1);
        v346 = v133;
        sub_140001660(v136, 88, 8);
        v8 = v349;
        v55 = v350;
        v56 = v352;
LABEL_172:
        v167 = *(_QWORD *)(v135 + 9144);
        v137 = -1;
        if ( v167 )
          goto LABEL_186;
        goto LABEL_187;
      }
    }
    sub_14172B820(v2 + 9312, v124, 136);
    *(_BYTE *)(v2 + 9872) = 0;
LABEL_139:
    v340 = (volatile signed __int64 **)(v2 + 9312);
    sub_140CAD190(v302, v2 + 9312, v315);
    v137 = v302[0];
    if ( v302[0] == 0xFE )
    {
      v180 = 4;
      goto LABEL_219;
    }
    *(_DWORD *)&v326[3] = *(_DWORD *)&v302[4];
    *(_DWORD *)v326 = *(_DWORD *)&v302[1];
    v346 = *(_QWORD *)&v302[8];
    v134 = *(_QWORD *)&v302[24];
    v343 = *(_QWORD *)&v302[16];
    if ( *(_BYTE *)(v353 + 9872) == 3 )
    {
      sub_1402E4000(v353 + 9448);
    }
    else if ( !*(_BYTE *)(v353 + 9872) )
    {
      sub_1402E1AD0(v340);
      v138 = *(_QWORD **)(v353 + 9440);
      if ( *v138 )
        sub_140001660(v138[1], *v138, 1);
      sub_140001660(v138, 88, 8);
    }
    if ( v137 == -1 )
    {
      *(_QWORD *)&v305 = v346;
      *(_QWORD *)&v237 = &v305;
      *((_QWORD *)&v237 + 1) = sub_1410E8F50;
      sub_141543AF0(v302, &unk_14188783D, &v237);
      sub_1402E5750(v305);
      v343 = *(_QWORD *)&v302[8];
      v346 = *(_QWORD *)v302;
      v134 = *(_QWORD *)&v302[16];
    }
    else
    {
      *(_DWORD *)&v325[3] = *(_DWORD *)&v326[3];
      *(_DWORD *)v325 = *(_DWORD *)v326;
    }
    v135 = v353;
    v167 = *(_QWORD *)(v353 + 9144);
    v8 = v349;
    v55 = v350;
    v56 = v352;
    if ( v167 )
LABEL_186:
      sub_140001660(*(_QWORD *)(v135 + 9152), v167, 1);
LABEL_187:
    *(_DWORD *)&v327[3] = *(_DWORD *)&v325[3];
    *(_DWORD *)v327 = *(_DWORD *)v325;
    *v348 = 1;
    v317[0] = *(_DWORD *)v327;
    *(_DWORD *)((char *)v317 + 3) = *(_DWORD *)&v327[3];
    v168 = v351;
    v323 = v351;
    v322 = v8;
    v321 = v55;
    v320 = v56;
    sub_140CA8250(v347);
    v351 = v168;
    v349 = v8;
    v350 = v55;
    v352 = v56;
    if ( v137 != -1 )
    {
      v302[0] = v137;
      *(_DWORD *)&v302[1] = v317[0];
      *(_DWORD *)&v302[4] = *(_DWORD *)((char *)v317 + 3);
      *(_QWORD *)&v302[8] = v346;
      *(_QWORD *)&v302[16] = v343;
      *(_QWORD *)&v302[24] = v134;
      sub_1402C6C70(&v260, v302);
      v323 = v351;
      v8 = v349;
      v322 = v349;
      v55 = v350;
      v321 = v350;
      v56 = v352;
      v320 = v352;
      sub_1401FF690(v302);
      v173 = _InterlockedDecrement64(*(volatile signed __int64 **)(v353 + 9064));
      v34 = v351;
      if ( v173 )
      {
LABEL_202:
        v293 = v34;
        v292 = v8;
        v291 = v55;
        v290 = v56;
        sub_140044CE0(v56);
LABEL_203:
        v350 = v55;
        v72 = v353;
        v171 = *(_QWORD *)(v353 + 9040);
        if ( !v171 )
          goto LABEL_205;
        goto LABEL_204;
      }
LABEL_201:
      v314 = v34;
      v313 = v8;
      v312 = v55;
      v311 = v56;
      sub_1410B0250(v353 + 9064);
      goto LABEL_202;
    }
    v2 = v353;
    if ( *(_DWORD *)(v353 + 9084) >= 2u
      || (v169 = sub_1402C6F50(v343, v134), v2 = v353, v8 = v349, v55 = v350, v56 = v352, !v169) )
    {
      *(_QWORD *)&v261 = v346;
      *((_QWORD *)&v261 + 1) = v343;
      v262 = v134;
      v260 = 1;
      v172 = _InterlockedDecrement64(*(volatile signed __int64 **)(v2 + 9064));
      v34 = v351;
      if ( v172 )
        goto LABEL_202;
      goto LABEL_201;
    }
    v58 = v346;
    if ( v346 )
      sub_140001660(v343, v346, 1);
    if ( (*(_BYTE *)(v2 + 9080) & 1) != 0 )
      goto LABEL_193;
  }
  v180 = 3;
LABEL_219:
  v72 = v353;
  v181 = (char *)v350;
  *v348 = v180;
  v182 = 3;
LABEL_223:
  *v181 = v182;
LABEL_224:
  *(_BYTE *)(v72 + 9880) = 3;
  *(_BYTE *)(v72 + 9888) = 3;
LABEL_225:
  *(_BYTE *)(v72 + 9896) = 3;
  *(_BYTE *)(v72 + 9904) = 3;
  v79 = 3;
  result = 1;
LABEL_226:
  *(_BYTE *)(v72 + 9920) = v79;
  return result;
}
