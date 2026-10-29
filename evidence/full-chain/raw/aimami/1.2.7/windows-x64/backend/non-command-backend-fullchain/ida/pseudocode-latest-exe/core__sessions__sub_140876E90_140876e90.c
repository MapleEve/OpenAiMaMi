// win 1.2.7 latest-exe | module src/core/sessions.rs | ea 0x140876e90 | successor of pre-update 0x1402c9920 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_140876E90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // xmm9_8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __int64 i; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __m128i v34; // xmm2
  const char *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  unsigned __int64 v47; // rax
  __m128i v49; // kr00_16
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  unsigned __int64 v52; // rax
  __m128i v53; // xmm2
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdi
  __int64 v63; // rdx
  void *v64; // rax
  unsigned __int64 v65; // rax
  __m128i v67; // xmm0
  __m128i v68; // xmm0
  __int64 j; // rcx
  unsigned __int64 v70; // rax
  __m128i v71; // xmm2
  __int64 v73; // r10
  unsigned __int64 v74; // rax
  __m128i v76; // xmm0
  __m128i v77; // xmm0
  __int64 ii; // rcx
  unsigned __int64 v79; // rax
  __m128i v80; // xmm2
  __int64 v82; // r10
  __int64 v83; // r15
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  __m128i v87; // xmm0
  __m128i v88; // xmm0
  __int64 k; // rcx
  unsigned __int64 v90; // rax
  __m128i v91; // xmm2
  __int64 v93; // r8
  __m128i v94; // xmm0
  unsigned __int64 v95; // rax
  __m128i v97; // xmm0
  __m128i v98; // xmm0
  __int64 m; // rcx
  unsigned __int64 v100; // rax
  __m128i v101; // xmm2
  __int64 v103; // r8
  __int64 v104; // r13
  __int64 v105; // r12
  __int64 v106; // r15
  __int64 v107; // r14
  __int64 v108; // r13
  bool v109; // zf
  __int64 v110; // rdx
  __int64 (__fastcall *v111)(); // r14
  __int64 v112; // rcx
  __m128i v113; // xmm0
  __m128i v114; // xmm1
  __m128i v115; // xmm2
  const char *v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // r9
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __m128i v128; // xmm2
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __m128i *v134; // rdi
  __m128i v135; // rax
  int v136; // eax
  __m128i v137; // xmm0
  __m128i v138; // xmm1
  __int64 v139; // r8
  __int64 v140; // r12
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rdi
  __int128 v144; // xmm7
  __m128i v145; // xmm8
  __int64 v146; // r15
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // rcx
  __int64 v150; // rdx
  unsigned __int128 v151; // kr10_16
  __m128i v152; // xmm0
  __m128i v153; // xmm0
  __m128i si128; // xmm1
  __m128i v155; // xmm0
  __m128i v156; // xmm1
  __int64 v157; // rdi
  __int64 v158; // rbx
  __int64 v159; // r14
  const __m128i *v160; // r15
  __m128i v162; // xmm0
  __int64 v163; // rax
  __int64 v164; // rdx
  unsigned __int64 v165; // rax
  __int64 v166; // rdi
  unsigned __int64 v167; // rax
  __m128i v169; // xmm0
  __m128i v170; // xmm0
  __int64 n; // rcx
  unsigned __int64 v172; // rax
  __m128i v173; // xmm2
  __int64 v175; // r9
  __int64 v176; // rdi
  _QWORD v177[3]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v178; // [rsp+50h] [rbp-30h]
  __int128 v179; // [rsp+60h] [rbp-20h]
  _OWORD v180[7]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v181; // [rsp+E0h] [rbp+60h]
  __int64 v182; // [rsp+F0h] [rbp+70h]
  __int128 v183; // [rsp+100h] [rbp+80h]
  __int64 v184; // [rsp+110h] [rbp+90h]
  __int128 v185; // [rsp+120h] [rbp+A0h]
  __int64 v186; // [rsp+130h] [rbp+B0h]
  __int128 v187; // [rsp+140h] [rbp+C0h]
  __int64 v188; // [rsp+150h] [rbp+D0h]
  __int128 v189; // [rsp+160h] [rbp+E0h]
  __int64 v190; // [rsp+170h] [rbp+F0h]
  __int128 v191; // [rsp+180h] [rbp+100h]
  __int64 v192; // [rsp+190h] [rbp+110h]
  unsigned __int128 v193; // [rsp+1A0h] [rbp+120h]
  __int64 v194; // [rsp+1B0h] [rbp+130h]
  __int128 v195; // [rsp+1C0h] [rbp+140h]
  __int64 v196; // [rsp+1D0h] [rbp+150h]
  __m128i v197; // [rsp+1E0h] [rbp+160h]
  __int64 v198; // [rsp+1F0h] [rbp+170h]
  __m128i v199; // [rsp+200h] [rbp+180h] BYREF
  __int64 v200; // [rsp+210h] [rbp+190h]
  __int128 v201; // [rsp+220h] [rbp+1A0h]
  __int64 v202; // [rsp+230h] [rbp+1B0h]
  __int128 v203; // [rsp+240h] [rbp+1C0h]
  __int64 v204; // [rsp+250h] [rbp+1D0h]
  __int128 v205; // [rsp+260h] [rbp+1E0h]
  __int64 v206; // [rsp+270h] [rbp+1F0h]
  __int128 v207; // [rsp+280h] [rbp+200h]
  __int64 v208; // [rsp+290h] [rbp+210h]
  __int128 v209; // [rsp+2A0h] [rbp+220h]
  __int64 v210; // [rsp+2B0h] [rbp+230h]
  __int128 v211; // [rsp+2C0h] [rbp+240h]
  __int64 v212; // [rsp+2D0h] [rbp+250h]
  unsigned __int128 v213; // [rsp+2E0h] [rbp+260h]
  __int64 v214; // [rsp+2F0h] [rbp+270h]
  __int128 v215; // [rsp+300h] [rbp+280h]
  __int64 v216; // [rsp+310h] [rbp+290h]
  __m128i v217; // [rsp+320h] [rbp+2A0h]
  __int64 v218; // [rsp+330h] [rbp+2B0h]
  __m128i v219; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v220; // [rsp+350h] [rbp+2D0h]
  __int64 v221; // [rsp+360h] [rbp+2E0h]
  __int64 v222; // [rsp+368h] [rbp+2E8h]
  __int64 v223; // [rsp+370h] [rbp+2F0h]
  __int64 v224; // [rsp+378h] [rbp+2F8h]
  __int64 v225; // [rsp+380h] [rbp+300h]
  __int64 v226; // [rsp+388h] [rbp+308h]
  __int64 v227; // [rsp+390h] [rbp+310h]
  __int64 v228; // [rsp+398h] [rbp+318h]
  __int64 v229; // [rsp+3A0h] [rbp+320h]
  __int64 v230; // [rsp+3A8h] [rbp+328h]
  __int64 v231; // [rsp+3B0h] [rbp+330h]
  __int64 v232; // [rsp+3B8h] [rbp+338h]
  __int64 v233; // [rsp+3C0h] [rbp+340h]
  __int64 v234; // [rsp+3C8h] [rbp+348h]
  __int64 v235; // [rsp+3D0h] [rbp+350h]
  __int64 v236; // [rsp+3D8h] [rbp+358h]
  __int128 v237; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v238; // [rsp+3F0h] [rbp+370h]
  __int128 v239; // [rsp+3F8h] [rbp+378h] BYREF
  __int64 v240; // [rsp+408h] [rbp+388h]
  __int128 v241; // [rsp+410h] [rbp+390h] BYREF
  __int64 v242; // [rsp+420h] [rbp+3A0h]
  __int128 v243; // [rsp+428h] [rbp+3A8h] BYREF
  __int64 v244; // [rsp+438h] [rbp+3B8h]
  __int128 v245; // [rsp+440h] [rbp+3C0h] BYREF
  __int64 v246; // [rsp+450h] [rbp+3D0h]
  __int64 v247; // [rsp+458h] [rbp+3D8h]
  __m128i v248; // [rsp+460h] [rbp+3E0h] BYREF
  __m128i v249; // [rsp+470h] [rbp+3F0h] BYREF
  __m512i v250; // [rsp+480h] [rbp+400h] BYREF
  __int64 v251; // [rsp+4C0h] [rbp+440h]
  __int64 v252; // [rsp+4C8h] [rbp+448h]
  __int128 v253; // [rsp+4D0h] [rbp+450h]
  __int64 v254; // [rsp+4E0h] [rbp+460h]
  __int128 v255; // [rsp+4E8h] [rbp+468h]
  __int64 v256; // [rsp+4F8h] [rbp+478h]
  __int64 v257; // [rsp+500h] [rbp+480h]
  __int64 v258; // [rsp+508h] [rbp+488h]
  __int64 v259; // [rsp+510h] [rbp+490h]
  __int128 v260; // [rsp+518h] [rbp+498h]
  __int64 v261; // [rsp+528h] [rbp+4A8h]
  __int128 v262; // [rsp+530h] [rbp+4B0h]
  __int64 v263; // [rsp+540h] [rbp+4C0h]
  __int128 v264; // [rsp+548h] [rbp+4C8h]
  __int64 v265; // [rsp+558h] [rbp+4D8h]
  __int128 v266; // [rsp+560h] [rbp+4E0h]
  __int64 v267; // [rsp+570h] [rbp+4F0h]
  unsigned __int128 v268; // [rsp+578h] [rbp+4F8h]
  __int64 v269; // [rsp+588h] [rbp+508h]
  __int128 v270; // [rsp+590h] [rbp+510h]
  __int64 v271; // [rsp+5A0h] [rbp+520h]
  __m128i v272; // [rsp+5A8h] [rbp+528h]
  __int64 v273; // [rsp+5B8h] [rbp+538h]
  __m128i v274; // [rsp+5C0h] [rbp+540h]
  __int64 v275; // [rsp+5D0h] [rbp+550h]
  __int64 v276; // [rsp+5D8h] [rbp+558h]
  int v277; // [rsp+5E0h] [rbp+560h]
  char v278; // [rsp+5E4h] [rbp+564h]
  __int128 v279; // [rsp+5F0h] [rbp+570h] BYREF
  __int64 v280; // [rsp+600h] [rbp+580h]
  __int64 v281; // [rsp+608h] [rbp+588h]
  __int64 v282; // [rsp+610h] [rbp+590h]
  __int64 v283; // [rsp+618h] [rbp+598h]
  __int64 v284; // [rsp+620h] [rbp+5A0h]
  __int64 v285; // [rsp+628h] [rbp+5A8h]
  __int64 v286; // [rsp+630h] [rbp+5B0h] BYREF
  __int128 v287; // [rsp+638h] [rbp+5B8h]
  unsigned __int128 v288; // [rsp+648h] [rbp+5C8h] BYREF
  __int64 v289; // [rsp+658h] [rbp+5D8h]
  __m128i v290; // [rsp+660h] [rbp+5E0h] BYREF
  __m128i v291; // [rsp+670h] [rbp+5F0h]
  __m128i v292; // [rsp+680h] [rbp+600h] BYREF
  __m256i v293; // [rsp+698h] [rbp+618h] BYREF
  __int128 v294; // [rsp+6B8h] [rbp+638h] BYREF
  __m128i v295; // [rsp+6C8h] [rbp+648h] BYREF
  __int128 v296; // [rsp+6D8h] [rbp+658h]
  __int128 v297; // [rsp+6E8h] [rbp+668h]
  __int128 v298; // [rsp+6F8h] [rbp+678h]
  __int64 v299; // [rsp+708h] [rbp+688h]
  __int64 v300; // [rsp+710h] [rbp+690h]
  __int64 v301; // [rsp+718h] [rbp+698h]
  __int64 v302; // [rsp+720h] [rbp+6A0h]
  __int64 v303; // [rsp+728h] [rbp+6A8h]
  __int64 v304; // [rsp+730h] [rbp+6B0h]
  __int64 v305; // [rsp+738h] [rbp+6B8h]
  __int64 v306; // [rsp+740h] [rbp+6C0h]
  __int64 v307; // [rsp+748h] [rbp+6C8h]
  __int64 v308; // [rsp+750h] [rbp+6D0h]
  __int64 v309; // [rsp+758h] [rbp+6D8h]
  __int64 v310; // [rsp+760h] [rbp+6E0h]
  __int64 v311; // [rsp+768h] [rbp+6E8h]
  __int64 v312; // [rsp+770h] [rbp+6F0h]
  __int64 v313; // [rsp+778h] [rbp+6F8h]
  __int64 v314; // [rsp+780h] [rbp+700h]
  __int64 v315; // [rsp+788h] [rbp+708h]
  __int64 v316; // [rsp+790h] [rbp+710h]
  __int64 v317; // [rsp+798h] [rbp+718h]
  __int64 v318; // [rsp+7A0h] [rbp+720h]
  __int64 v319; // [rsp+7A8h] [rbp+728h]
  __int64 v320; // [rsp+7B0h] [rbp+730h]
  __int64 v321; // [rsp+7B8h] [rbp+738h]
  __int64 v322; // [rsp+7C0h] [rbp+740h]
  __int64 v323; // [rsp+7C8h] [rbp+748h]
  __int64 v324; // [rsp+7D0h] [rbp+750h]
  __int64 v325; // [rsp+7D8h] [rbp+758h]
  __int64 v326; // [rsp+7E0h] [rbp+760h]
  __int64 v327; // [rsp+7E8h] [rbp+768h]
  __int64 v328; // [rsp+7F0h] [rbp+770h]
  __int64 v329; // [rsp+7F8h] [rbp+778h]
  __int64 v330; // [rsp+800h] [rbp+780h]
  __int64 v331; // [rsp+808h] [rbp+788h]
  __int64 v332; // [rsp+810h] [rbp+790h]
  __int64 v333; // [rsp+818h] [rbp+798h]
  __int64 v334; // [rsp+820h] [rbp+7A0h]
  __int64 v335; // [rsp+828h] [rbp+7A8h]
  __m128i v336; // [rsp+830h] [rbp+7B0h]
  __int64 v337; // [rsp+840h] [rbp+7C0h]
  __int64 v338; // [rsp+848h] [rbp+7C8h]
  __int64 v339; // [rsp+850h] [rbp+7D0h]
  __int64 v340; // [rsp+858h] [rbp+7D8h]
  __m128i *v341; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v342; // [rsp+868h] [rbp+7E8h] BYREF
  __m128i v343; // [rsp+870h] [rbp+7F0h] BYREF
  __m128i v344; // [rsp+880h] [rbp+800h] BYREF
  __m128i v345; // [rsp+890h] [rbp+810h] BYREF
  __m128i v346; // [rsp+8A0h] [rbp+820h] BYREF
  __int128 v347; // [rsp+8B0h] [rbp+830h]
  __int128 v348; // [rsp+8C0h] [rbp+840h]
  __int64 v349; // [rsp+8D8h] [rbp+858h]
  __int64 v350; // [rsp+8E0h] [rbp+860h]
  __int64 v351; // [rsp+8E8h] [rbp+868h]
  __int64 v352; // [rsp+8F0h] [rbp+870h]
  __int64 v353; // [rsp+8F8h] [rbp+878h]
  __int64 v354; // [rsp+900h] [rbp+880h]
  __int64 v355; // [rsp+908h] [rbp+888h]
  _BYTE v356[24]; // [rsp+910h] [rbp+890h] BYREF
  __int64 v357; // [rsp+928h] [rbp+8A8h]
  char **v358; // [rsp+930h] [rbp+8B0h]
  __int64 v359; // [rsp+938h] [rbp+8B8h]
  __int64 v360; // [rsp+940h] [rbp+8C0h]
  __int64 v361; // [rsp+948h] [rbp+8C8h]
  __m128i v362; // [rsp+950h] [rbp+8D0h] BYREF
  __int128 v363; // [rsp+960h] [rbp+8E0h] BYREF
  __m128i v364; // [rsp+970h] [rbp+8F0h] BYREF
  __int64 v365; // [rsp+988h] [rbp+908h]
  __int64 v366; // [rsp+990h] [rbp+910h]
  __int64 v367; // [rsp+998h] [rbp+918h]
  __int64 v368; // [rsp+9A0h] [rbp+920h]
  __int64 v369; // [rsp+9A8h] [rbp+928h]
  __int128 v370; // [rsp+9B0h] [rbp+930h]
  __int64 v371; // [rsp+9C0h] [rbp+940h]
  __int64 v372; // [rsp+9C8h] [rbp+948h]
  __int64 v373; // [rsp+9D0h] [rbp+950h]
  __int64 v374; // [rsp+9D8h] [rbp+958h]
  char v375; // [rsp+9E5h] [rbp+965h]
  char v376; // [rsp+9E6h] [rbp+966h]
  char v377; // [rsp+9E7h] [rbp+967h]
  __int64 v378; // [rsp+9E8h] [rbp+968h]
  __int64 v379; // [rsp+9F0h] [rbp+970h]
  __int64 v380; // [rsp+9F8h] [rbp+978h]
  char v381; // [rsp+A06h] [rbp+986h]
  char v382; // [rsp+A07h] [rbp+987h] BYREF
  __int64 v383; // [rsp+A08h] [rbp+988h]

  v383 = -2;
  sub_1416C49D0(&v293, a2, a3);
  if ( v293.m256i_i32[0] == 2 )
  {
    v8 = v293.m256i_i8[8] & 3;
    if ( (unsigned int)(v8 - 2) >= 2 && (v293.m256i_i8[8] & 3) != 0 )
    {
      --v293.m256i_i64[1];
      v293.m256i_i8[0] = 3;
      sub_1416EBAD0(&v293.m256i_u64[1]);
    }
    if ( *(_QWORD *)off_14223FF10 > 1u )
    {
      *(_QWORD *)&v180[0] = a2;
      *((_QWORD *)&v180[0] + 1) = a3;
      v248.m128i_i64[0] = (__int64)v180;
      v248.m128i_i64[1] = (__int64)sub_1416CE600;
      v295.m128i_i64[0] = 2;
      v295.m128i_i64[1] = (__int64)aCodexmateLibCo_12;
      *(_QWORD *)&v296 = 29;
      *(_QWORD *)&v297 = &unk_141A532D0;
      *((_QWORD *)&v297 + 1) = &v248;
      v293.m256i_i64[0] = 0;
      v293.m256i_i64[1] = (__int64)aCodexmateLibCo_12;
      *(_OWORD *)&v293.m256i_u64[2] = 0x1Du;
      *(_QWORD *)&v294 = aSrcCoreSession_6;
      *((_QWORD *)&v294 + 1) = 20;
      *((_QWORD *)&v296 + 1) = 0x1F400000001LL;
      sub_141503E20(&v382, &v293);
    }
    v9 = sub_1416AE140(v8);
    if ( *(_BYTE *)(v9 + 16) == 1 )
    {
      v14 = *(_QWORD *)v9;
      v15 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v176 = v9;
      v14 = sub_1416C5230(v11, v10, v12, v13);
      v9 = v176;
      *(_QWORD *)v176 = v14;
      *(_QWORD *)(v176 + 8) = v15;
      *(_BYTE *)(v176 + 16) = 1;
    }
    *(_QWORD *)v9 = v14 + 1;
    *(_OWORD *)(a1 + 24) = xmmword_141A51860;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 40) = v14;
    *(_QWORD *)(a1 + 48) = v15;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v221 = a2;
  v222 = a3;
  LOBYTE(v7) = 1;
  sub_140876430(&v293, a2, a3, v7);
  if ( BYTE8(v298) == 0xFF )
  {
    v348 = v297;
    v347 = v296;
    v32 = _mm_loadu_si128((const __m128i *)&v293);
    v33 = _mm_loadu_si128((const __m128i *)&v293.m256i_u64[2]);
    v34 = _mm_loadu_si128((const __m128i *)&v294);
    v346 = _mm_loadu_si128(&v295);
    v345 = v34;
    v344 = v33;
    v343 = v32;
    v362.m128i_i64[0] = 0;
    v362.m128i_i64[1] = 1;
    *(_QWORD *)&v363 = 0;
    v249.m128i_i64[0] = 1610612768;
    v248.m128i_i64[0] = (__int64)&v362;
    v248.m128i_i64[1] = (__int64)&off_141A55F58;
    if ( (unsigned __int8)sub_140D76130(&v343, &v248) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_4,
        55,
        (unsigned int)&v382,
        (unsigned int)&unk_141A52978,
        (__int64)&off_141A56010);
    v378 = v362.m128i_i64[0];
    v35 = asc_141A53397;
    *(_QWORD *)&v288 = asc_141A53397;
    *((_QWORD *)&v288 + 1) = 21;
    v368 = v362.m128i_i64[1];
    *(_OWORD *)v356 = __PAIR128__(v363, v362.m128i_u64[1]);
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v290.m128i_i64[0] = a2;
      v290.m128i_i64[1] = a3;
      v362.m128i_i64[0] = (__int64)&v288;
      v362.m128i_i64[1] = (__int64)sub_140191200;
      *(_QWORD *)&v363 = v356;
      *((_QWORD *)&v363 + 1) = sub_140191200;
      v364.m128i_i64[0] = (__int64)&v290;
      v364.m128i_i64[1] = (__int64)sub_1416CE600;
      v250.m512i_i64[2] = 2;
      v250.m512i_i64[3] = (__int64)aCodexmateLibCo_12;
      v250.m512i_i64[4] = 29;
      v250.m512i_i64[6] = (__int64)&unk_141A51DBD;
      v250.m512i_i64[7] = (__int64)&v362;
      v248.m128i_i64[0] = 0;
      v248.m128i_i64[1] = (__int64)aCodexmateLibCo_12;
      v249 = (__m128i)0x1DuLL;
      v250.m512i_i64[0] = (__int64)aSrcCoreSession_6;
      v250.m512i_i64[1] = 20;
      v250.m512i_i64[5] = 0x1FE00000001LL;
      sub_141503E20(&v382, &v248);
    }
    v36 = sub_1416AE140(v35);
    v41 = v36;
    if ( *(_BYTE *)(v36 + 16) == 1 )
    {
      v42 = *(_QWORD *)v36;
      v43 = *(_QWORD *)(v41 + 8);
    }
    else
    {
      v42 = sub_1416C5230(v38, v37, v39, v40);
      *(_QWORD *)v41 = v42;
      *(_QWORD *)(v41 + 8) = v43;
      *(_BYTE *)(v41 + 16) = 1;
    }
    *(_QWORD *)v41 = v42 + 1;
    *(_OWORD *)(a1 + 24) = xmmword_141A51860;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 40) = v42;
    *(_QWORD *)(a1 + 48) = v43;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    if ( v378 )
      sub_140001660(v368, v378, 1);
    sub_14084C890(&v343);
    return a1;
  }
  v180[6] = v298;
  v180[5] = v297;
  v180[4] = v296;
  v16 = _mm_loadu_si128((const __m128i *)&v293);
  v17 = _mm_loadu_si128((const __m128i *)&v293.m256i_u64[2]);
  v18 = _mm_loadu_si128((const __m128i *)&v294);
  v180[3] = _mm_loadu_si128(&v295);
  v180[2] = v18;
  v180[1] = v17;
  v180[0] = v16;
  sub_14087FE50((__int64)&v343, (__int64)v180, (__int64)aThreads_0, 7);
  if ( v343.m128i_i32[0] != -1 )
  {
    *(_OWORD *)&v250.m512i_u64[6] = v348;
    *(_OWORD *)&v250.m512i_u64[4] = v347;
    v20 = _mm_loadu_si128(&v343);
    v21 = _mm_loadu_si128(&v344);
    v22 = _mm_loadu_si128(&v345);
    *(__m128i *)&v250.m512i_u64[2] = _mm_loadu_si128(&v346);
    *(__m128i *)v250.m512i_i8 = v22;
    v249 = v21;
    v248 = v20;
    v362.m128i_i64[0] = 0;
    v362.m128i_i64[1] = 1;
    *(_QWORD *)&v363 = 0;
    v293.m256i_i64[2] = 1610612768;
    v293.m256i_i64[0] = (__int64)&v362;
    v293.m256i_i64[1] = (__int64)&off_141A55F58;
    if ( (unsigned __int8)sub_140D76130(&v248, &v293) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_4,
        55,
        (unsigned int)&v382,
        (unsigned int)&unk_141A52978,
        (__int64)&off_141A56010);
    v378 = v362.m128i_i64[0];
    v23 = aThreads_4;
    *(_QWORD *)&v279 = aThreads_4;
    *((_QWORD *)&v279 + 1) = 23;
    v368 = v362.m128i_i64[1];
    v288 = __PAIR128__(v363, v362.m128i_u64[1]);
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)v356 = a2;
      *(_QWORD *)&v356[8] = a3;
      v362.m128i_i64[0] = (__int64)&v279;
      v362.m128i_i64[1] = (__int64)sub_140191200;
      *(_QWORD *)&v363 = &v288;
      *((_QWORD *)&v363 + 1) = sub_140191200;
      v364.m128i_i64[0] = (__int64)v356;
      v364.m128i_i64[1] = (__int64)sub_1416CE600;
      v295.m128i_i64[0] = 2;
      v295.m128i_i64[1] = (__int64)aCodexmateLibCo_12;
      *(_QWORD *)&v296 = 29;
      *(_QWORD *)&v297 = &unk_141A51DBD;
      *((_QWORD *)&v297 + 1) = &v362;
      v293.m256i_i64[0] = 0;
      v293.m256i_i64[1] = (__int64)aCodexmateLibCo_12;
      *(_OWORD *)&v293.m256i_u64[2] = 0x1Du;
      *(_QWORD *)&v294 = aSrcCoreSession_6;
      *((_QWORD *)&v294 + 1) = 20;
      *((_QWORD *)&v296 + 1) = 0x1FE00000001LL;
      sub_141503E20(&v382, &v293);
    }
    v24 = sub_1416AE140(v23);
    v29 = v24;
    if ( *(_BYTE *)(v24 + 16) == 1 )
    {
      v30 = *(_QWORD *)v24;
      v31 = *(_QWORD *)(v29 + 8);
    }
    else
    {
      v30 = sub_1416C5230(v26, v25, v27, v28);
      *(_QWORD *)v29 = v30;
      *(_QWORD *)(v29 + 8) = v31;
      *(_BYTE *)(v29 + 16) = 1;
    }
    *(_QWORD *)v29 = v30 + 1;
    *(_OWORD *)(a1 + 24) = xmmword_141A51860;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 40) = v30;
    *(_QWORD *)(a1 + 48) = v31;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    if ( v378 )
      sub_140001660(v368, v378, 1);
    sub_14084C890(&v248);
    goto LABEL_20;
  }
  v45 = _mm_loadu_si128((const __m128i *)&v343.m128i_u64[1]);
  v46 = _mm_loadu_si128((const __m128i *)&v344.m128i_u64[1]);
  v292 = _mm_loadu_si128((const __m128i *)&v345.m128i_u64[1]);
  v291 = v46;
  v290 = v45;
  if ( !v46.m128i_i64[1] )
  {
LABEL_38:
    *(_QWORD *)v356 = aThreadsId;
    *(_QWORD *)&v356[8] = 24;
    v362 = (__m128i)1uLL;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v343.m128i_i64[0] = a2;
      v343.m128i_i64[1] = a3;
      v248.m128i_i64[0] = (__int64)v356;
      v248.m128i_i64[1] = (__int64)sub_140191200;
      v249.m128i_i64[0] = (__int64)&v362;
      v249.m128i_i64[1] = (__int64)sub_140191200;
      v250.m512i_i64[0] = (__int64)&v343;
      v250.m512i_i64[1] = (__int64)sub_1416CE600;
      v295.m128i_i64[0] = 2;
      v295.m128i_i64[1] = (__int64)aCodexmateLibCo_12;
      *(_QWORD *)&v296 = 29;
      *(_QWORD *)&v297 = &unk_141A51DBD;
      *((_QWORD *)&v297 + 1) = &v248;
      v293.m256i_i64[0] = 0;
      v293.m256i_i64[1] = (__int64)aCodexmateLibCo_12;
      *(_OWORD *)&v293.m256i_u64[2] = 0x1Du;
      *(_QWORD *)&v294 = aSrcCoreSession_6;
      *((_QWORD *)&v294 + 1) = 20;
      *((_QWORD *)&v296 + 1) = 0x1FE00000001LL;
      sub_141503E20(&v382, &v293);
    }
    v56 = sub_1416AE140(i);
    v61 = v56;
    if ( *(_BYTE *)(v56 + 16) == 1 )
    {
      _RAX = *(_QWORD *)v56;
      v63 = *(_QWORD *)(v61 + 8);
    }
    else
    {
      _RAX = sub_1416C5230(v58, v57, v59, v60);
      *(_QWORD *)v61 = _RAX;
      *(_QWORD *)(v61 + 8) = v63;
      *(_BYTE *)(v61 + 16) = 1;
    }
    *(_QWORD *)v61 = _RAX + 1;
    *(_OWORD *)(a1 + 24) = xmmword_141A51860;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 40) = _RAX;
    *(_QWORD *)(a1 + 48) = v63;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_267;
  }
  v47 = sub_1406D0E00(&v292, aId_5, 2);
  v49 = v290;
  v50 = _mm_cvtsi32_si128(v47 >> 57);
  v51 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v50, v50), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v52 = v290.m128i_i64[1] & v47;
    v53 = _mm_loadu_si128((const __m128i *)(v290.m128i_i64[0] + v52));
    _RDX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v53, v51));
    if ( (_DWORD)_RDX )
      break;
LABEL_36:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v53, (__m128i)-1LL)) )
      goto LABEL_38;
    v47 = i + v52 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r8d, edx }
    v55 = -3LL * (v290.m128i_i64[1] & (v52 + _R8));
    if ( *(_QWORD *)(v290.m128i_i64[0] + 8 * v55 - 8) == 2 && **(_WORD **)(v290.m128i_i64[0] + 8 * v55 - 16) == 25705 )
      break;
    _R8 = (unsigned int)(_RDX - 1);
    LOWORD(_R8) = _RDX & (_RDX - 1);
    _RDX = (unsigned int)_R8;
    if ( !(_WORD)_R8 )
      goto LABEL_36;
  }
  nullsub_1(i, _RDX);
  v64 = (void *)sub_140001650(10, 1);
  if ( !v64 )
    sub_14196B2DB(1, 10);
  qmemcpy(v64, "id AS c_id", 10);
  v247 = (__int64)v64;
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aTitle_4, 5, (__int64)asc_141A52499, 2);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A5342A, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  *(_QWORD *)&v370 = v248.m128i_i64[1];
  v284 = v248.m128i_i64[0];
  v223 = v249.m128i_i64[0];
  v65 = sub_1406D0E00(&v292, aRecencyAtMs, 13);
  v67 = _mm_cvtsi32_si128(v65 >> 57);
  v68 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v67, v67), 0), 68);
  for ( j = 0; ; j += 16 )
  {
    v70 = v49.m128i_i64[1] & v65;
    v71 = _mm_loadu_si128((const __m128i *)(v49.m128i_i64[0] + v70));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v71, v68));
    if ( _R9D )
      break;
LABEL_51:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v71, (__m128i)-1LL)) )
    {
      v85 = sub_1406D0E00(&v292, aUpdatedAtMs, 13);
      v87 = _mm_cvtsi32_si128(v85 >> 57);
      v88 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v87, v87), 0), 68);
      for ( k = 0; ; k += 16 )
      {
        v90 = v49.m128i_i64[1] & v85;
        v91 = _mm_loadu_si128((const __m128i *)(v49.m128i_i64[0] + v90));
        _RDX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v91, v88));
        if ( (_DWORD)_RDX )
          break;
LABEL_67:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v91, (__m128i)-1LL)) )
        {
          v95 = sub_1406D0E00(&v292, aUpdatedAt, 10);
          v97 = _mm_cvtsi32_si128(v95 >> 57);
          v98 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v97, v97), 0), 68);
          for ( m = 0; ; m += 16 )
          {
            v100 = v49.m128i_i64[1] & v95;
            v101 = _mm_loadu_si128((const __m128i *)(v49.m128i_i64[0] + v100));
            _RDX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v101, v98));
            if ( (_DWORD)_RDX )
              break;
LABEL_79:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v101, (__m128i)-1LL)) )
            {
              v167 = sub_1406D0E00(&v292, aCreatedAtMs, 13);
              v169 = _mm_cvtsi32_si128(v167 >> 57);
              v170 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v169, v169), 0), 68);
              for ( n = 0; ; n += 16 )
              {
                v172 = v49.m128i_i64[1] & v167;
                v173 = _mm_loadu_si128((const __m128i *)(v49.m128i_i64[0] + v172));
                _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v173, v170));
                if ( _R8D )
                  break;
LABEL_282:
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v173, (__m128i)-1LL)) )
                {
                  nullsub_1(n, 0x5F64657461657263LL);
                  v83 = 3;
                  v84 = sub_140001650(3, 1);
                  if ( !v84 )
                    sub_14196B2DB(1, 3);
                  *(_BYTE *)(v84 + 2) = 48;
                  *(_WORD *)v84 = 11824;
                  goto LABEL_83;
                }
                v167 = n + v172 + 16;
              }
              while ( 1 )
              {
                __asm { tzcnt   r9d, r8d }
                v175 = -3LL * (v49.m128i_i64[1] & (v172 + _R9));
                if ( *(_QWORD *)(v49.m128i_i64[0] + 8 * v175 - 8) == 13
                  && !(**(_QWORD **)(v49.m128i_i64[0] + 8 * v175 - 16) ^ 0x5F64657461657263LL
                     | *(_QWORD *)(*(_QWORD *)(v49.m128i_i64[0] + 8 * v175 - 16) + 5LL) ^ 0x736D5F74615F6465LL) )
                {
                  break;
                }
                _R9 = (unsigned int)(_R8D - 1);
                LOWORD(_R9) = _R8D & (_R8D - 1);
                _R8D = _R9;
                if ( !(_WORD)_R9 )
                  goto LABEL_282;
              }
              nullsub_1(n, 0x5F64657461657263LL);
              v83 = 49;
              v84 = sub_140001650(49, 1);
              if ( !v84 )
                sub_14196B2DB(1, 49);
              qmemcpy((void *)(v84 + 16), "eated_at_ms, 0) AS REAL) / 1000.", 32);
              v94 = _mm_loadu_si128((const __m128i *)&xmmword_141A538E9);
              goto LABEL_71;
            }
            v95 = m + v100 + 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   r8d, edx }
            v103 = -3LL * (v49.m128i_i64[1] & (v100 + _R8));
            if ( *(_QWORD *)(v49.m128i_i64[0] + 8 * v103 - 8) == 10
              && !(**(_QWORD **)(v49.m128i_i64[0] + 8 * v103 - 16) ^ 0x5F64657461647075LL
                 | *(unsigned __int16 *)(*(_QWORD *)(v49.m128i_i64[0] + 8 * v103 - 16) + 8LL) ^ 0x7461LL) )
            {
              break;
            }
            _R8 = (unsigned int)(_RDX - 1);
            LOWORD(_R8) = _RDX & (_RDX - 1);
            _RDX = (unsigned int)_R8;
            if ( !(_WORD)_R8 )
              goto LABEL_79;
          }
          nullsub_1(m, _RDX);
          v83 = 37;
          v84 = sub_140001650(37, 1);
          if ( !v84 )
            sub_14196B2DB(1, 37);
          qmemcpy((void *)(v84 + 16), "dated_at, 0) AS REAL)", 21);
          *(__m128i *)v84 = _mm_loadu_si128((const __m128i *)&xmmword_141A5391A);
          goto LABEL_83;
        }
        v85 = k + v90 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r8d, edx }
        v93 = -3LL * (v49.m128i_i64[1] & (v90 + _R8));
        if ( *(_QWORD *)(v49.m128i_i64[0] + 8 * v93 - 8) == 13
          && !(**(_QWORD **)(v49.m128i_i64[0] + 8 * v93 - 16) ^ 0x5F64657461647075LL
             | *(_QWORD *)(*(_QWORD *)(v49.m128i_i64[0] + 8 * v93 - 16) + 5LL) ^ 0x736D5F74615F6465LL) )
        {
          break;
        }
        _R8 = (unsigned int)(_RDX - 1);
        LOWORD(_R8) = _RDX & (_RDX - 1);
        _RDX = (unsigned int)_R8;
        if ( !(_WORD)_R8 )
          goto LABEL_67;
      }
      nullsub_1(k, _RDX);
      v83 = 49;
      v84 = sub_140001650(49, 1);
      if ( !v84 )
        sub_14196B2DB(1, 49);
      qmemcpy((void *)(v84 + 16), "dated_at_ms, 0) AS REAL) / 1000.0", 33);
      *(__m128i *)v84 = _mm_loadu_si128((const __m128i *)&xmmword_141A5393F);
      goto LABEL_83;
    }
    v65 = j + v70 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v73 = -3LL * (v49.m128i_i64[1] & (v70 + _R10));
    if ( *(_QWORD *)(v49.m128i_i64[0] + 8 * v73 - 8) == 13
      && !(**(_QWORD **)(v49.m128i_i64[0] + 8 * v73 - 16) ^ 0x5F79636E65636572LL
         | *(_QWORD *)(*(_QWORD *)(v49.m128i_i64[0] + 8 * v73 - 16) + 5LL) ^ 0x736D5F74615F7963LL) )
    {
      break;
    }
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_51;
  }
  v74 = sub_1406D0E00(&v292, aUpdatedAtMs, 13);
  v76 = _mm_cvtsi32_si128(v74 >> 57);
  v77 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v76, v76), 0), 68);
  for ( ii = 0; ; ii += 16 )
  {
    v79 = v49.m128i_i64[1] & v74;
    v80 = _mm_loadu_si128((const __m128i *)(v49.m128i_i64[0] + v79));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v80, v77));
    if ( _R9D )
      break;
LABEL_58:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v80, (__m128i)-1LL)) )
    {
      nullsub_1(ii, 0x5F64657461647075LL);
      v83 = 49;
      v84 = sub_140001650(49, 1);
      if ( !v84 )
        sub_14196B2DB(1, 49);
      qmemcpy((void *)(v84 + 16), "cency_at_ms, 0) AS REAL) / 1000.", 32);
      v94 = _mm_loadu_si128((const __m128i *)&xmmword_141A53970);
LABEL_71:
      *(__m128i *)v84 = v94;
      *(_BYTE *)(v84 + 48) = 48;
      goto LABEL_83;
    }
    v74 = ii + v79 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v82 = -3LL * (v49.m128i_i64[1] & (v79 + _R10));
    if ( *(_QWORD *)(v49.m128i_i64[0] + 8 * v82 - 8) == 13
      && !(**(_QWORD **)(v49.m128i_i64[0] + 8 * v82 - 16) ^ 0x5F64657461647075LL
         | *(_QWORD *)(*(_QWORD *)(v49.m128i_i64[0] + 8 * v82 - 16) + 5LL) ^ 0x736D5F74615F6465LL) )
    {
      break;
    }
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_58;
  }
  nullsub_1(ii, 0x5F64657461647075LL);
  v83 = 64;
  v84 = sub_140001650(64, 1);
  if ( !v84 )
    sub_14196B2DB(1, 64);
  qmemcpy((void *)(v84 + 16), "cency_at_ms, updated_at_ms, 0) AS REAL) / 1000.0", 48);
  *(__m128i *)v84 = _mm_loadu_si128((const __m128i *)&xmmword_141A539A1);
LABEL_83:
  v293.m256i_i64[0] = v83;
  v293.m256i_i64[1] = v84;
  v293.m256i_i64[2] = v83;
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A53438, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  *((_QWORD *)&v370 + 1) = v248.m128i_i64[1];
  v378 = v248.m128i_i64[0];
  v104 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aCwd_1, 3, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A53452, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v371 = v248.m128i_i64[1];
  v368 = v248.m128i_i64[0];
  v224 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aArchived, 8, (__int64)a0_9, 1);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A53467, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v372 = v248.m128i_i64[1];
  v349 = v248.m128i_i64[0];
  v225 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aAgentNickname, 14, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A53486, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v360 = v248.m128i_i64[1];
  v350 = v248.m128i_i64[0];
  v226 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aAgentRole, 10, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A534A7, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v373 = v248.m128i_i64[1];
  v351 = v248.m128i_i64[0];
  v227 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aSource_3, 6, (__int64)asc_141A52499, 2);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A534BA, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v369 = v248.m128i_i64[1];
  v352 = v248.m128i_i64[0];
  v228 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aRolloutPath, 12, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A534D5, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v366 = v248.m128i_i64[1];
  v353 = v248.m128i_i64[0];
  v229 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aName_6, 4, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A534EA, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v338 = v248.m128i_i64[1];
  v354 = v248.m128i_i64[0];
  v230 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aPreview, 7, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A534FE, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v367 = v248.m128i_i64[1];
  v285 = v248.m128i_i64[0];
  v231 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aTokensUsed, 11, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A53519, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v365 = v248.m128i_i64[1];
  v355 = v248.m128i_i64[0];
  v232 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aModel_2, 5, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A5352D, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v339 = v248.m128i_i64[1];
  v361 = v248.m128i_i64[0];
  v233 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aReasoningEffor_1, 16, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A5353B, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v340 = v248.m128i_i64[1];
  v359 = v248.m128i_i64[0];
  v234 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aMemoryMode, 11, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A5355F, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v281 = v248.m128i_i64[1];
  v379 = v248.m128i_i64[0];
  v235 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aHistoryMode, 12, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A5357F, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v282 = v248.m128i_i64[1];
  v374 = v248.m128i_i64[0];
  v236 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aProjectId, 10, (__int64)aNull_8, 4);
  v343.m128i_i64[0] = (__int64)&v293;
  v343.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v248, &unk_141A5359E, &v343);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v283 = v248.m128i_i64[1];
  v380 = v248.m128i_i64[0];
  v105 = v249.m128i_i64[0];
  sub_14087FAA0((unsigned int)&v293, (unsigned int)&v290, (unsigned int)aGitBranch, 10, (__int64)aNull_8, 4);
  v248.m128i_i64[0] = (__int64)&v293;
  v248.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v343, &unk_141A535BB, &v248);
  if ( v293.m256i_i64[0] )
    sub_140001660(v293.m256i_i64[1], v293.m256i_i64[0], 1);
  v293.m256i_i64[0] = 10;
  v106 = v247;
  v293.m256i_i64[1] = v247;
  v293.m256i_i64[2] = 10;
  v107 = v284;
  v293.m256i_i64[3] = v284;
  *(_QWORD *)&v294 = v370;
  *((_QWORD *)&v294 + 1) = v223;
  v295.m128i_i64[0] = v378;
  v295.m128i_i64[1] = *((_QWORD *)&v370 + 1);
  *(_QWORD *)&v296 = v104;
  *((_QWORD *)&v296 + 1) = v368;
  *(_QWORD *)&v297 = v371;
  *((_QWORD *)&v297 + 1) = v224;
  *(_QWORD *)&v298 = v349;
  *((_QWORD *)&v298 + 1) = v372;
  v299 = v225;
  v300 = v350;
  v301 = v360;
  v302 = v226;
  v303 = v351;
  v304 = v373;
  v305 = v227;
  v306 = v352;
  v307 = v369;
  v308 = v228;
  v309 = v353;
  v310 = v366;
  v311 = v229;
  v312 = v354;
  v313 = v338;
  v314 = v230;
  v108 = v285;
  v315 = v285;
  v316 = v367;
  v317 = v231;
  v318 = v355;
  v319 = v365;
  v320 = v232;
  v321 = v361;
  v322 = v339;
  v323 = v233;
  v324 = v359;
  v325 = v340;
  v326 = v234;
  v327 = v379;
  v328 = v281;
  v329 = v235;
  v330 = v374;
  v331 = v282;
  v332 = v236;
  v333 = v380;
  v334 = v283;
  v335 = v105;
  v337 = v344.m128i_i64[0];
  v336 = v343;
  sub_1406C5480((unsigned int)&v248, (unsigned int)&v293, 18, (unsigned int)", ", 2);
  *(_QWORD *)&v363 = v249.m128i_i64[0];
  v362 = _mm_loadu_si128(&v248);
  sub_140001660(v106, 10, 1);
  v109 = v107 == 0;
  v110 = v107;
  v111 = sub_1400015F0;
  if ( !v109 )
    sub_140001660(v370, v110, 1);
  if ( v378 )
    sub_140001660(*((_QWORD *)&v370 + 1), v378, 1);
  if ( v368 )
    sub_140001660(v371, v368, 1);
  if ( v349 )
    sub_140001660(v372, v349, 1);
  if ( v350 )
    sub_140001660(v360, v350, 1);
  if ( v351 )
    sub_140001660(v373, v351, 1);
  if ( v352 )
    sub_140001660(v369, v352, 1);
  if ( v353 )
    sub_140001660(v366, v353, 1);
  if ( v354 )
    sub_140001660(v338, v354, 1);
  if ( v108 )
    sub_140001660(v367, v108, 1);
  if ( v355 )
    sub_140001660(v365, v355, 1);
  if ( v361 )
    sub_140001660(v339, v361, 1);
  if ( v359 )
    sub_140001660(v340, v359, 1);
  if ( v379 )
    sub_140001660(v281, v379, 1);
  if ( v374 )
    sub_140001660(v282, v374, 1);
  if ( v380 )
    sub_140001660(v283, v380, 1);
  if ( v336.m128i_i64[0] )
    sub_140001660(v336.m128i_i64[1], v336.m128i_i64[0], 1);
  v248.m128i_i64[0] = (__int64)&v362;
  v248.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v293, &unk_141A53323, &v248);
  if ( v362.m128i_i64[0] )
    sub_140001660(v362.m128i_i64[1], v362.m128i_i64[0], 1);
  v359 = v293.m256i_i64[1];
  v361 = v293.m256i_i64[0];
  sub_14086B1B0(&v293, v180, v293.m256i_i64[1], v293.m256i_i64[2]);
  if ( v293.m256i_i32[0] == 1 )
  {
    v113 = _mm_loadu_si128((const __m128i *)&v293.m256i_u64[1]);
    v114 = _mm_loadu_si128((const __m128i *)&v293.m256i_u64[3]);
    v115 = _mm_loadu_si128((const __m128i *)((char *)&v294 + 8));
    *(__m128i *)&v250.m512i_u64[2] = _mm_loadu_si128((const __m128i *)&v295.m128i_u64[1]);
    *(__m128i *)v250.m512i_i8 = v115;
    v249 = v114;
    v248 = v113;
    *(_QWORD *)v356 = 0;
    *(_QWORD *)&v356[8] = 1;
    *(_QWORD *)&v356[16] = 0;
    *(_QWORD *)&v363 = 1610612768;
    v362.m128i_i64[0] = (__int64)v356;
    v362.m128i_i64[1] = (__int64)&off_141A55F58;
    if ( (unsigned __int8)sub_14142D4D0(&v248, &v362) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_4,
        55,
        (unsigned int)&v382,
        (unsigned int)&unk_141A52978,
        (__int64)&off_141A56010);
    v378 = *(_QWORD *)v356;
    v116 = aThreads_3;
    *(_QWORD *)&v237 = aThreads_3;
    *((_QWORD *)&v237 + 1) = 20;
    v368 = *(_QWORD *)&v356[8];
    v279 = *(_OWORD *)&v356[8];
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v288 = a2;
      *((_QWORD *)&v288 + 1) = a3;
      v362.m128i_i64[0] = (__int64)&v237;
      v362.m128i_i64[1] = (__int64)sub_140191200;
      *(_QWORD *)&v363 = &v279;
      *((_QWORD *)&v363 + 1) = sub_140191200;
      v364.m128i_i64[0] = (__int64)&v288;
      v364.m128i_i64[1] = (__int64)sub_1416CE600;
      *(_QWORD *)v356 = aCodexmateLibCo_12;
      *(_QWORD *)&v356[8] = 29;
      *(_QWORD *)&v356[16] = aCodexmateLibCo_12;
      v357 = 29;
      v358 = &off_141A51E00;
      sub_140AF72B0(&unk_141A51DBD, &v362, 2, v356);
    }
    v117 = sub_1416AE140(v116);
    v122 = v117;
    if ( *(_BYTE *)(v117 + 16) == 1 )
    {
      v123 = *(_QWORD *)v117;
      v124 = *(_QWORD *)(v122 + 8);
    }
    else
    {
      v123 = sub_1416C5230(v119, v118, v120, v121);
      *(_QWORD *)v122 = v123;
      *(_QWORD *)(v122 + 8) = v124;
      *(_BYTE *)(v122 + 16) = 1;
    }
    v125 = v378;
    *(_QWORD *)v122 = v123 + 1;
    *(_OWORD *)(a1 + 24) = xmmword_141A51860;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 40) = v123;
    *(_QWORD *)(a1 + 48) = v124;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    if ( v125 )
      sub_140001660(v368, v125, 1);
    HIDWORD(_RAX) = (unsigned __int64)sub_14084BC90(&v248) >> 32;
    goto LABEL_265;
  }
  v126 = _mm_loadu_si128((const __m128i *)&v293.m256i_u64[1]);
  v127 = _mm_loadu_si128((const __m128i *)&v293.m256i_u64[3]);
  v128 = _mm_loadu_si128((const __m128i *)((char *)&v294 + 8));
  v346 = _mm_loadu_si128((const __m128i *)&v295.m128i_u64[1]);
  v345 = v128;
  v344 = v127;
  v343 = v126;
  v129 = sub_1416AE140(v112);
  v134 = (__m128i *)v129;
  if ( *(_BYTE *)(v129 + 16) == 1 )
  {
    v135 = *(__m128i *)v129;
  }
  else
  {
    v135.m128i_i64[0] = sub_1416C5230(v131, v130, v132, v133);
    *v134 = v135;
    v134[1].m128i_i8[0] = 1;
  }
  v134->m128i_i64[0] = v135.m128i_i64[0] + 1;
  v363 = xmmword_141A51860;
  v362 = _mm_loadu_si128((const __m128i *)&off_141A51850);
  v364 = v135;
  v136 = sub_1417D8600(v346.m128i_i64[1]);
  if ( v136 )
  {
    *(_OWORD *)v293.m256i_i8 = 0x8000000000000013uLL;
    v293.m256i_i64[2] = v136;
    sub_1408F9B30(v356, &v293);
    v378 = *(_QWORD *)&v356[8];
    sub_140866E90((__int128 *)v248.m128i_i8);
    *(_QWORD *)(a1 + 56) = v250.m512i_i64[2];
    v137 = _mm_loadu_si128(&v248);
    v138 = _mm_loadu_si128(&v249);
    *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)&v250);
    *(__m128i *)(a1 + 24) = v138;
    *(__m128i *)(a1 + 8) = v137;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)v356 )
      sub_140001660(v378, *(_QWORD *)v356, 1);
    sub_14084BC90(&v293);
    goto LABEL_264;
  }
  v341 = &v343;
  v342 = 0;
  while ( 1 )
  {
    sub_1408F94D0(&v293, &v341);
    v140 = v293.m256i_i64[0];
    if ( v293.m256i_i64[0] != -1 )
    {
      v141 = v293.m256i_i64[1];
      v143 = v293.m256i_i64[3];
      v142 = v293.m256i_i64[2];
LABEL_171:
      v144 = v294;
      v145 = _mm_loadu_si128(&v295);
      v146 = 2;
      goto LABEL_172;
    }
    if ( !v342 )
      goto LABEL_258;
    sub_140657B30(&v293, &v342, &unk_141A51E40, 8, &off_141A51E48);
    v141 = v293.m256i_i64[1];
    v140 = v293.m256i_i64[0];
    v143 = v293.m256i_i64[3];
    v142 = v293.m256i_i64[2];
    if ( v293.m256i_i64[0] != -1 )
      goto LABEL_171;
    if ( v293.m256i_i64[1] == -1 )
    {
      v142 = 1;
      v143 = 0;
      v380 = 0;
      v144 = xmmword_141A04730;
    }
    else
    {
      v380 = v293.m256i_i64[1];
      v144 = *(_OWORD *)&v293.m256i_u64[1];
    }
    v371 = v142;
    sub_14087FC20(&v293, v142, v143);
    v372 = v293.m256i_i64[1];
    v379 = v293.m256i_i64[0];
    v360 = v293.m256i_i64[2];
    LODWORD(v111) = v293.m256i_i32[6];
    sub_140658180(&v293, &v342, "c_id", 4, &off_141A51E68);
    v374 = v293.m256i_i64[1];
    v140 = v293.m256i_i64[0];
    v370 = *(_OWORD *)&v293.m256i_u64[2];
    if ( v293.m256i_i64[0] == -1 )
    {
      sub_140657B30(&v293, &v342, "c_title", 7, &off_141A51E88);
      v149 = v293.m256i_i64[1];
      v140 = v293.m256i_i64[0];
      v139 = v293.m256i_i64[3];
      v150 = v293.m256i_i64[2];
      if ( v293.m256i_i64[0] != -1 )
      {
        v143 = v293.m256i_i64[3];
        v369 = v293.m256i_i64[2];
        v373 = v293.m256i_i64[1];
        v144 = v294;
        v145 = _mm_loadu_si128(&v295);
        if ( v374 )
          sub_140001660(v370, v374, 1);
        if ( (unsigned __int64)(v379 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
          sub_140001660(v372, v379, 1);
        v146 = 2;
        if ( v380 )
          sub_140001660(v371, v380, 1);
        goto LABEL_192;
      }
      if ( v293.m256i_i64[1] == -1 )
        v150 = 1;
      v369 = v150;
      if ( v293.m256i_i64[1] == -1 )
        v139 = 0;
      v338 = v139;
      if ( v293.m256i_i64[1] == -1 )
        v149 = 0;
      v373 = v149;
      sub_140657DA0(&v293, &v342, aCUpdatedAt, 12, &off_141A51EB0);
      v140 = v293.m256i_i64[0];
      if ( v293.m256i_i64[0] == -1 )
      {
        v3 = (v293.m256i_i8[8] & 1) != 0 ? v293.m256i_i64[2] : 0LL;
        v377 = 1;
        sub_140866AD0(&v286, &v342, aCCwd, 5);
        v381 = 1;
        sub_140866AD0(v177, &v342, aCRolloutPath, 14);
        if ( v177[0] == -1 )
        {
          v367 = -1;
        }
        else
        {
          v381 = 1;
          sub_140866BD0(&v293, v177);
          v365 = v293.m256i_i64[1];
          v367 = v293.m256i_i64[0];
          v339 = v293.m256i_i64[2];
        }
        sub_140657F90(&v293, &v342, aCArchived, 10, &off_141A51EE8);
        v139 = v293.m256i_i64[1];
        v151 = *(_OWORD *)v293.m256i_i8;
        v366 = v151 >> 64;
        v140 = v151;
        if ( v293.m256i_i64[0] == -1 )
        {
          LOBYTE(v340) = v293.m256i_i64[2] != 0;
          v376 = 1;
          sub_140866AD0(&v245, &v342, "c_agent_nicknamec_agent_rolec_namec_previewc_tokens_used", 16);
          v375 = 1;
          sub_140866AD0(&v243, &v342, "c_agent_rolec_namec_previewc_tokens_used", 12);
          sub_140866AD0(&v241, &v342, "c_namec_previewc_tokens_used", 6);
          sub_140866AD0(&v239, &v342, "c_previewc_tokens_used", 9);
          sub_140657F90(&v293, &v342, "c_tokens_used", 13, &off_141A51F38);
          v140 = v293.m256i_i64[2];
          v146 = v293.m256i_i64[1];
          if ( v293.m256i_i64[0] == -1 )
          {
            sub_140866AD0(&v237, &v342, aCModel, 7);
            sub_140866AD0(&v279, &v342, aCReasoningEffo, 18);
            sub_140866AD0(&v288, &v342, aCMemoryMode, 13);
            sub_140866AD0(v356, &v342, aCHistoryMode, 14);
            sub_140866AD0(&v248, &v342, aCProjectId, 12);
            sub_140866AD0(&v293, &v342, aCGitBranch, 12);
            LOBYTE(v139) = v340 & v366;
            v178 = v287;
            v182 = v246;
            v181 = v245;
            v184 = v244;
            v183 = v243;
            v186 = v242;
            v185 = v241;
            v188 = v240;
            v187 = v239;
            v152 = _mm_loadl_epi64((const __m128i *)&v286);
            v190 = v238;
            v189 = v237;
            v192 = v280;
            v191 = v279;
            v194 = v289;
            v193 = v288;
            v196 = *(_QWORD *)&v356[16];
            v195 = *(_OWORD *)v356;
            v198 = v249.m128i_i64[0];
            v197 = v248;
            v200 = v293.m256i_i64[2];
            v199 = _mm_loadu_si128((const __m128i *)&v293);
            v145 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v143, v152);
            v378 = v374;
            v349 = *((_QWORD *)&v370 + 1);
            v368 = v370;
            v350 = v367;
            v351 = v365;
            v352 = v339;
            v353 = v379;
            v354 = v372;
            v355 = v360;
            v143 = v338;
LABEL_192:
            v142 = v369;
            v141 = v373;
            goto LABEL_172;
          }
          *((_QWORD *)&v370 + 1) = v293.m256i_i64[0];
          v143 = v293.m256i_i64[3];
          v144 = v294;
          v145 = _mm_loadu_si128(&v295);
          if ( (_QWORD)v239 != -1 && (_QWORD)v239 )
            sub_140001660(*((_QWORD *)&v239 + 1), v239, 1);
          if ( (_QWORD)v241 != -1 && (_QWORD)v241 )
            sub_140001660(*((_QWORD *)&v241 + 1), v241, 1);
          if ( (unsigned __int64)(v379 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v372, v379, 1);
          if ( (_QWORD)v243 != -1 && (_QWORD)v243 )
            sub_140001660(*((_QWORD *)&v243 + 1), v243, 1);
          if ( (_QWORD)v245 != -1 && (_QWORD)v245 )
            sub_140001660(*((_QWORD *)&v245 + 1), v245, 1);
          if ( v380 )
            sub_140001660(v371, v380, 1);
          if ( (unsigned __int64)(v367 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v365, v367, 1);
          if ( v286 != -1 && v286 )
            sub_140001660(v287, v286, 1);
          if ( v373 )
            sub_140001660(v369, v373, 1);
          if ( v374 )
            sub_140001660(v370, v374, 1);
          v142 = v140;
          v141 = v146;
          v140 = *((_QWORD *)&v370 + 1);
          v146 = 2;
        }
        else
        {
          v143 = v293.m256i_i64[3];
          *((_QWORD *)&v370 + 1) = v293.m256i_i64[2];
          v144 = v294;
          v145 = _mm_loadu_si128(&v295);
          if ( v380 )
          {
            sub_140001660(v371, v380, 1);
            v139 = v366;
          }
          v111 = (__int64 (__fastcall *)())v374;
          if ( (unsigned __int64)(v367 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            sub_140001660(v365, v367, 1);
            v139 = v366;
          }
          if ( v286 != -1 && v286 )
          {
            sub_140001660(v287, v286, 1);
            v139 = v366;
          }
          if ( v373 )
          {
            sub_140001660(v369, v373, 1);
            v139 = v366;
          }
          if ( v111 )
          {
            sub_140001660(v370, v111, 1);
            v139 = v366;
          }
          v146 = 2;
          if ( (unsigned __int64)(v379 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            sub_140001660(v372, v379, 1);
            v139 = v366;
          }
          v142 = *((_QWORD *)&v370 + 1);
          v141 = v139;
        }
      }
      else
      {
        *((_QWORD *)&v370 + 1) = v293.m256i_i64[1];
        v143 = v293.m256i_i64[3];
        v360 = v293.m256i_i64[2];
        v144 = v294;
        v145 = _mm_loadu_si128(&v295);
        if ( v373 )
          sub_140001660(v369, v373, 1);
        if ( v374 )
          sub_140001660(v370, v374, 1);
        if ( (unsigned __int64)(v379 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
          sub_140001660(v372, v379, 1);
        v146 = 2;
        if ( v380 )
          sub_140001660(v371, v380, 1);
        v142 = v360;
        v141 = *((_QWORD *)&v370 + 1);
      }
    }
    else
    {
      v144 = v294;
      v145 = _mm_loadu_si128(&v295);
      if ( (unsigned __int64)(v379 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v372, v379, 1);
      v146 = 2;
      if ( v380 )
        sub_140001660(v371, v380, 1);
      v143 = *((_QWORD *)&v370 + 1);
      v142 = v370;
      v141 = v374;
    }
LABEL_172:
    v179 = v178;
    v201 = v181;
    v202 = v182;
    v203 = v183;
    v204 = v184;
    v205 = v185;
    v206 = v186;
    v207 = v187;
    v208 = v188;
    v210 = v190;
    v209 = v189;
    v211 = v191;
    v212 = v192;
    v213 = v193;
    v214 = v194;
    v215 = v195;
    v216 = v196;
    v218 = v198;
    v217 = v197;
    v220 = v200;
    v219 = _mm_load_si128(&v199);
    if ( v146 == 2 )
      break;
    if ( v146 == -1 )
    {
LABEL_258:
      sub_14084BB80(&v341);
      v153 = _mm_load_si128(&v362);
      si128 = _mm_load_si128((const __m128i *)&v363);
      *(__m128i *)(a1 + 40) = _mm_load_si128(&v364);
      *(__m128i *)(a1 + 24) = si128;
      *(__m128i *)(a1 + 8) = v153;
      *(_BYTE *)(a1 + 56) = 1;
      *(_QWORD *)a1 = -1;
      sub_14084BE20(&v343);
      if ( v361 )
        sub_140001660(v359, v361, 1);
      sub_140190060(&v290);
      goto LABEL_20;
    }
    v248.m128i_i64[0] = v146;
    v248.m128i_i64[1] = v140;
    v249.m128i_i64[0] = v141;
    v249.m128i_i64[1] = v142;
    v250.m512i_i64[0] = v143;
    *(_OWORD *)&v250.m512i_u64[1] = v144;
    *(__m128i *)&v250.m512i_u64[3] = v145;
    *(_OWORD *)&v250.m512i_u64[5] = v179;
    v250.m512i_i64[7] = v350;
    v251 = v351;
    v252 = v352;
    v254 = v202;
    v253 = v201;
    v256 = v204;
    v255 = v203;
    v257 = v353;
    v258 = v354;
    v259 = v355;
    v261 = v206;
    v260 = v205;
    v263 = v208;
    v262 = v207;
    v265 = v210;
    v264 = v209;
    v267 = v212;
    v266 = v211;
    v269 = v214;
    v268 = v213;
    v271 = v216;
    v270 = v215;
    v273 = v218;
    v272 = v217;
    v275 = v220;
    v274 = _mm_load_si128(&v219);
    v276 = v3;
    v277 = (int)v111;
    v278 = v139;
    *(_QWORD *)v356 = v378;
    *(_QWORD *)&v356[8] = v368;
    *(_QWORD *)&v356[16] = v349;
    sub_140870A60(&v293, (__int64)&v362, v356, (__int64)&v248);
    if ( v293.m256i_i32[0] != 2 )
      sub_140038430(&v293, v147, v148);
  }
  v293.m256i_i64[0] = v140;
  v293.m256i_i64[1] = v141;
  v293.m256i_i64[2] = v142;
  v293.m256i_i64[3] = v143;
  v294 = v144;
  v295 = v145;
  sub_1408F9B30(v356, &v293);
  v378 = *(_QWORD *)&v356[8];
  sub_140866E90((__int128 *)v248.m128i_i8);
  *(_QWORD *)(a1 + 56) = v250.m512i_i64[2];
  v155 = _mm_loadu_si128(&v248);
  v156 = _mm_loadu_si128(&v249);
  *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)&v250);
  *(__m128i *)(a1 + 24) = v156;
  *(__m128i *)(a1 + 8) = v155;
  *(_QWORD *)a1 = -1;
  if ( *(_QWORD *)v356 )
    sub_140001660(v378, *(_QWORD *)v356, 1);
  sub_14084BC90(&v293);
  sub_14084BB80(&v341);
LABEL_264:
  sub_14018FA70(&v362);
  HIDWORD(_RAX) = (unsigned __int64)sub_14084BE20(&v343) >> 32;
LABEL_265:
  if ( v361 )
    sub_140001660(v359, v361, 1);
LABEL_267:
  v157 = v290.m128i_i64[1];
  if ( v290.m128i_i64[1] )
  {
    v158 = v291.m128i_i64[1];
    if ( v291.m128i_i64[1] )
    {
      v159 = v290.m128i_i64[0];
      v160 = (const __m128i *)(v290.m128i_i64[0] + 16);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v290.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v162 = _mm_load_si128(v160);
            v159 -= 384;
            ++v160;
            _R12D = _mm_movemask_epi8(v162) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v163 = -3 * _RAX;
        v164 = *(_QWORD *)(v159 + 8 * v163 - 24);
        if ( v164 )
          sub_140001660(*(_QWORD *)(v159 + 8 * v163 - 16), v164, 1);
        --v158;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v158 );
    }
    v165 = (24 * v157 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v166 = v165 + v157 + 17;
    if ( v166 )
      sub_140001660(v290.m128i_i64[0] - v165, v166, 16);
  }
LABEL_20:
  sub_14084B510(v180);
  return a1;
}
