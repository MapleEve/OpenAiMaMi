// win 1.2.7 | module src/core/sessions.rs | ea 0x1402c9920 | name sub_1402C9920
// win 1.2.7 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402C9920(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // xmm9_8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __int64 v19; // rcx
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
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  unsigned __int64 v46; // rax
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __int64 i; // r8
  unsigned __int64 v51; // rax
  __m128i v52; // xmm2
  __int64 v54; // r10
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdi
  __int64 v62; // rdx
  void *v63; // rax
  __int64 v64; // r14
  unsigned __int64 v65; // rax
  __m128i v67; // kr20_16
  __m128i v68; // xmm0
  __m128i v69; // xmm0
  __int64 j; // rcx
  unsigned __int64 v71; // rax
  __m128i v72; // xmm2
  __int64 v74; // r10
  char v75; // r14
  unsigned __int64 v76; // rax
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  __int64 k; // rcx
  unsigned __int64 v81; // rax
  __m128i v82; // xmm2
  __int64 v84; // r10
  __int64 v85; // r15
  __m128i *v86; // rax
  __m128i v87; // xmm0
  char v88; // al
  __int64 v89; // rcx
  char v90; // r15
  __int64 v91; // rcx
  __int64 v92; // r12
  __int64 v93; // r15
  __int64 v94; // r14
  __int64 v95; // r12
  __int64 v96; // rcx
  __m128i v97; // xmm0
  __m128i v98; // xmm1
  __m128i v99; // xmm2
  const char *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rdx
  __m128i v109; // xmm0
  __m128i v110; // xmm1
  __m128i v111; // xmm2
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __m128i *v117; // rdi
  __m128i v118; // rax
  int v119; // eax
  __m128i v120; // xmm0
  __m128i v121; // xmm1
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r12
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rdi
  __int128 v128; // xmm7
  __m128i v129; // xmm8
  __int64 v130; // r15
  __int64 v131; // rcx
  __int64 v132; // rdx
  unsigned __int128 v133; // kr00_16
  __m128i v134; // xmm0
  __m128i v135; // xmm0
  __m128i si128; // xmm1
  __m128i v137; // xmm0
  __m128i v138; // xmm1
  __int64 v139; // rsi
  __int64 v140; // rdi
  __int64 v141; // rbx
  const __m128i *v142; // r14
  __m128i v144; // xmm0
  __int64 v145; // rax
  __int64 v146; // rdx
  unsigned __int64 v147; // rax
  __int64 v148; // rsi
  __int64 v149; // rdi
  char **v150; // [rsp+20h] [rbp-60h]
  __int64 v151[3]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v152; // [rsp+50h] [rbp-30h]
  __int128 v153; // [rsp+60h] [rbp-20h]
  _OWORD v154[7]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v155; // [rsp+E0h] [rbp+60h]
  __int64 v156; // [rsp+F0h] [rbp+70h]
  __int128 v157; // [rsp+100h] [rbp+80h]
  __int64 v158; // [rsp+110h] [rbp+90h]
  __int128 v159; // [rsp+120h] [rbp+A0h]
  __int64 v160; // [rsp+130h] [rbp+B0h]
  __int128 v161; // [rsp+140h] [rbp+C0h]
  __int64 v162; // [rsp+150h] [rbp+D0h]
  __int128 v163; // [rsp+160h] [rbp+E0h]
  __int64 v164; // [rsp+170h] [rbp+F0h]
  __int128 v165; // [rsp+180h] [rbp+100h]
  __int64 v166; // [rsp+190h] [rbp+110h]
  unsigned __int128 v167; // [rsp+1A0h] [rbp+120h]
  __int64 v168; // [rsp+1B0h] [rbp+130h]
  __int128 v169; // [rsp+1C0h] [rbp+140h]
  __int64 v170; // [rsp+1D0h] [rbp+150h]
  __m128i v171; // [rsp+1E0h] [rbp+160h]
  __int64 v172; // [rsp+1F0h] [rbp+170h]
  __m128i v173; // [rsp+200h] [rbp+180h] BYREF
  __int64 v174; // [rsp+210h] [rbp+190h]
  __int128 v175; // [rsp+220h] [rbp+1A0h]
  __int64 v176; // [rsp+230h] [rbp+1B0h]
  __int128 v177; // [rsp+240h] [rbp+1C0h]
  __int64 v178; // [rsp+250h] [rbp+1D0h]
  __int128 v179; // [rsp+260h] [rbp+1E0h]
  __int64 v180; // [rsp+270h] [rbp+1F0h]
  __int128 v181; // [rsp+280h] [rbp+200h]
  __int64 v182; // [rsp+290h] [rbp+210h]
  __int128 v183; // [rsp+2A0h] [rbp+220h]
  __int64 v184; // [rsp+2B0h] [rbp+230h]
  __int128 v185; // [rsp+2C0h] [rbp+240h]
  __int64 v186; // [rsp+2D0h] [rbp+250h]
  unsigned __int128 v187; // [rsp+2E0h] [rbp+260h]
  __int64 v188; // [rsp+2F0h] [rbp+270h]
  __int128 v189; // [rsp+300h] [rbp+280h]
  __int64 v190; // [rsp+310h] [rbp+290h]
  __m128i v191; // [rsp+320h] [rbp+2A0h]
  __int64 v192; // [rsp+330h] [rbp+2B0h]
  __m128i v193; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v194; // [rsp+350h] [rbp+2D0h]
  __int128 v195; // [rsp+358h] [rbp+2D8h] BYREF
  __int64 v196; // [rsp+368h] [rbp+2E8h]
  __int64 v197; // [rsp+370h] [rbp+2F0h]
  __int64 v198; // [rsp+378h] [rbp+2F8h]
  __int64 v199; // [rsp+380h] [rbp+300h]
  __int64 v200; // [rsp+388h] [rbp+308h]
  __int64 v201; // [rsp+390h] [rbp+310h]
  __int64 v202; // [rsp+398h] [rbp+318h]
  __int64 v203; // [rsp+3A0h] [rbp+320h]
  __int64 v204; // [rsp+3A8h] [rbp+328h]
  __int64 v205; // [rsp+3B0h] [rbp+330h]
  __int64 v206; // [rsp+3B8h] [rbp+338h]
  __int64 v207; // [rsp+3C0h] [rbp+340h]
  __int64 v208; // [rsp+3C8h] [rbp+348h]
  __int64 v209; // [rsp+3D0h] [rbp+350h]
  __int128 v210; // [rsp+3D8h] [rbp+358h] BYREF
  __int64 v211; // [rsp+3E8h] [rbp+368h]
  __int128 v212; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v213; // [rsp+400h] [rbp+380h]
  __int128 v214; // [rsp+408h] [rbp+388h] BYREF
  __int64 v215; // [rsp+418h] [rbp+398h]
  __int128 v216; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v217; // [rsp+430h] [rbp+3B0h]
  __int128 v218; // [rsp+438h] [rbp+3B8h] BYREF
  __int64 v219; // [rsp+448h] [rbp+3C8h]
  __int64 v220; // [rsp+450h] [rbp+3D0h]
  __int64 v221; // [rsp+458h] [rbp+3D8h]
  __m128i v222; // [rsp+460h] [rbp+3E0h] BYREF
  __m128i v223; // [rsp+470h] [rbp+3F0h] BYREF
  __m512i v224; // [rsp+480h] [rbp+400h] BYREF
  __int64 v225; // [rsp+4C0h] [rbp+440h]
  __int64 v226; // [rsp+4C8h] [rbp+448h]
  __int128 v227; // [rsp+4D0h] [rbp+450h]
  __int64 v228; // [rsp+4E0h] [rbp+460h]
  __int128 v229; // [rsp+4E8h] [rbp+468h]
  __int64 v230; // [rsp+4F8h] [rbp+478h]
  __int64 v231; // [rsp+500h] [rbp+480h]
  __int64 v232; // [rsp+508h] [rbp+488h]
  __int64 v233; // [rsp+510h] [rbp+490h]
  __int128 v234; // [rsp+518h] [rbp+498h]
  __int64 v235; // [rsp+528h] [rbp+4A8h]
  __int128 v236; // [rsp+530h] [rbp+4B0h]
  __int64 v237; // [rsp+540h] [rbp+4C0h]
  __int128 v238; // [rsp+548h] [rbp+4C8h]
  __int64 v239; // [rsp+558h] [rbp+4D8h]
  __int128 v240; // [rsp+560h] [rbp+4E0h]
  __int64 v241; // [rsp+570h] [rbp+4F0h]
  unsigned __int128 v242; // [rsp+578h] [rbp+4F8h]
  __int64 v243; // [rsp+588h] [rbp+508h]
  __int128 v244; // [rsp+590h] [rbp+510h]
  __int64 v245; // [rsp+5A0h] [rbp+520h]
  __m128i v246; // [rsp+5A8h] [rbp+528h]
  __int64 v247; // [rsp+5B8h] [rbp+538h]
  __m128i v248; // [rsp+5C0h] [rbp+540h]
  __int64 v249; // [rsp+5D0h] [rbp+550h]
  __int64 v250; // [rsp+5D8h] [rbp+558h]
  int v251; // [rsp+5E0h] [rbp+560h]
  char v252; // [rsp+5E4h] [rbp+564h]
  __int128 v253; // [rsp+5F0h] [rbp+570h] BYREF
  __int64 v254; // [rsp+600h] [rbp+580h]
  __int64 v255; // [rsp+608h] [rbp+588h]
  __int64 v256; // [rsp+610h] [rbp+590h]
  __int64 v257; // [rsp+618h] [rbp+598h]
  __int64 v258; // [rsp+620h] [rbp+5A0h]
  __int64 v259; // [rsp+628h] [rbp+5A8h] BYREF
  __int128 v260; // [rsp+630h] [rbp+5B0h]
  unsigned __int128 v261; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v262; // [rsp+650h] [rbp+5D0h]
  __m256i v263; // [rsp+658h] [rbp+5D8h] BYREF
  __int128 v264; // [rsp+678h] [rbp+5F8h] BYREF
  __m128i v265; // [rsp+688h] [rbp+608h] BYREF
  __int128 v266; // [rsp+698h] [rbp+618h]
  __int128 v267; // [rsp+6A8h] [rbp+628h]
  __int128 v268; // [rsp+6B8h] [rbp+638h]
  __int64 v269; // [rsp+6C8h] [rbp+648h]
  __int64 v270; // [rsp+6D0h] [rbp+650h]
  __int64 v271; // [rsp+6D8h] [rbp+658h]
  __int64 v272; // [rsp+6E0h] [rbp+660h]
  __int64 v273; // [rsp+6E8h] [rbp+668h]
  __int64 v274; // [rsp+6F0h] [rbp+670h]
  __int64 v275; // [rsp+6F8h] [rbp+678h]
  __int64 v276; // [rsp+700h] [rbp+680h]
  __int64 v277; // [rsp+708h] [rbp+688h]
  __int64 v278; // [rsp+710h] [rbp+690h]
  __int64 v279; // [rsp+718h] [rbp+698h]
  __int64 v280; // [rsp+720h] [rbp+6A0h]
  __int64 v281; // [rsp+728h] [rbp+6A8h]
  __int64 v282; // [rsp+730h] [rbp+6B0h]
  __int64 v283; // [rsp+738h] [rbp+6B8h]
  __int64 v284; // [rsp+740h] [rbp+6C0h]
  __int64 v285; // [rsp+748h] [rbp+6C8h]
  __int64 v286; // [rsp+750h] [rbp+6D0h]
  __int64 v287; // [rsp+758h] [rbp+6D8h]
  __int64 v288; // [rsp+760h] [rbp+6E0h]
  __int64 v289; // [rsp+768h] [rbp+6E8h]
  __int64 v290; // [rsp+770h] [rbp+6F0h]
  __int64 v291; // [rsp+778h] [rbp+6F8h]
  __int64 v292; // [rsp+780h] [rbp+700h]
  __int64 v293; // [rsp+788h] [rbp+708h]
  __int64 v294; // [rsp+790h] [rbp+710h]
  __int64 v295; // [rsp+798h] [rbp+718h]
  __int64 v296; // [rsp+7A0h] [rbp+720h]
  __int64 v297; // [rsp+7A8h] [rbp+728h]
  __int64 v298; // [rsp+7B0h] [rbp+730h]
  __int64 v299; // [rsp+7B8h] [rbp+738h]
  __int64 v300; // [rsp+7C0h] [rbp+740h]
  __int64 v301; // [rsp+7C8h] [rbp+748h]
  __int64 v302; // [rsp+7D0h] [rbp+750h]
  __int64 v303; // [rsp+7D8h] [rbp+758h]
  __int64 v304; // [rsp+7E0h] [rbp+760h]
  __int64 v305; // [rsp+7E8h] [rbp+768h]
  __m128i v306; // [rsp+7F0h] [rbp+770h]
  __int64 v307; // [rsp+800h] [rbp+780h]
  __int64 v308; // [rsp+808h] [rbp+788h]
  __int64 v309; // [rsp+810h] [rbp+790h]
  __int64 v310; // [rsp+818h] [rbp+798h]
  __m128i v311; // [rsp+820h] [rbp+7A0h] BYREF
  __m128i v312; // [rsp+830h] [rbp+7B0h]
  __m128i v313; // [rsp+840h] [rbp+7C0h] BYREF
  __m128i *v314; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v315; // [rsp+858h] [rbp+7D8h] BYREF
  __m128i v316; // [rsp+860h] [rbp+7E0h] BYREF
  __m128i v317; // [rsp+870h] [rbp+7F0h] BYREF
  __m128i v318; // [rsp+880h] [rbp+800h] BYREF
  __m128i v319; // [rsp+890h] [rbp+810h] BYREF
  __int128 v320; // [rsp+8A0h] [rbp+820h]
  __int128 v321; // [rsp+8B0h] [rbp+830h]
  __int64 v322; // [rsp+8C0h] [rbp+840h]
  __int64 v323; // [rsp+8C8h] [rbp+848h]
  __int64 v324; // [rsp+8D0h] [rbp+850h]
  __int64 v325; // [rsp+8D8h] [rbp+858h]
  __int64 v326; // [rsp+8E0h] [rbp+860h]
  __int64 v327; // [rsp+8E8h] [rbp+868h]
  __int64 v328; // [rsp+8F0h] [rbp+870h]
  _BYTE v329[24]; // [rsp+8F8h] [rbp+878h] BYREF
  __int64 v330; // [rsp+910h] [rbp+890h]
  char **v331; // [rsp+918h] [rbp+898h]
  __int64 v332; // [rsp+920h] [rbp+8A0h]
  __int64 v333; // [rsp+928h] [rbp+8A8h]
  __int64 v334; // [rsp+930h] [rbp+8B0h]
  __int64 v335; // [rsp+938h] [rbp+8B8h]
  __m128i v336; // [rsp+940h] [rbp+8C0h] BYREF
  __int128 v337; // [rsp+950h] [rbp+8D0h] BYREF
  __m128i v338; // [rsp+960h] [rbp+8E0h] BYREF
  __int64 v339; // [rsp+970h] [rbp+8F0h]
  __int64 v340; // [rsp+978h] [rbp+8F8h]
  __int64 v341; // [rsp+980h] [rbp+900h]
  __int64 v342; // [rsp+988h] [rbp+908h]
  __int64 v343; // [rsp+990h] [rbp+910h]
  __int64 v344; // [rsp+998h] [rbp+918h]
  __int64 v345; // [rsp+9A0h] [rbp+920h]
  __int64 v346; // [rsp+9A8h] [rbp+928h]
  __int64 v347; // [rsp+9B0h] [rbp+930h]
  __int64 v348; // [rsp+9B8h] [rbp+938h]
  __int64 v349; // [rsp+9C0h] [rbp+940h]
  __int64 v350; // [rsp+9C8h] [rbp+948h]
  __int64 v351; // [rsp+9D0h] [rbp+950h]
  char v352; // [rsp+9DDh] [rbp+95Dh]
  char v353; // [rsp+9DEh] [rbp+95Eh]
  char v354; // [rsp+9DFh] [rbp+95Fh]
  __int64 v355; // [rsp+9E0h] [rbp+960h]
  __int64 v356; // [rsp+9E8h] [rbp+968h]
  char v357; // [rsp+9F7h] [rbp+977h]
  __int64 v358; // [rsp+9F8h] [rbp+978h]
  char v359; // [rsp+A07h] [rbp+987h] BYREF
  __int64 v360; // [rsp+A08h] [rbp+988h]

  v360 = -2;
  sub_141695A00(&v263, a2, a3);
  if ( v263.m256i_i32[0] == 2 )
  {
    v8 = v263.m256i_i8[8] & 3;
    if ( (unsigned int)(v8 - 2) >= 2 && (v263.m256i_i8[8] & 3) != 0 )
    {
      --v263.m256i_i64[1];
      v263.m256i_i8[0] = 3;
      sub_1416BCB00(&v263.m256i_u64[1]);
    }
    if ( *(_QWORD *)off_1421E6EC0 > 1u )
    {
      *(_QWORD *)&v154[0] = a2;
      *((_QWORD *)&v154[0] + 1) = a3;
      v222.m128i_i64[0] = (__int64)v154;
      v222.m128i_i64[1] = (__int64)sub_14169F630;
      v265.m128i_i64[0] = 2;
      v265.m128i_i64[1] = (__int64)aCodexmateLibCo_2;
      *(_QWORD *)&v266 = 29;
      *(_QWORD *)&v267 = &unk_1419E7C68;
      *((_QWORD *)&v267 + 1) = &v222;
      v263.m256i_i64[0] = 0;
      v263.m256i_i64[1] = (__int64)aCodexmateLibCo_2;
      *(_OWORD *)&v263.m256i_u64[2] = 0x1Du;
      *(_QWORD *)&v264 = aSrcCoreSession_5;
      *((_QWORD *)&v264 + 1) = 20;
      *((_QWORD *)&v266 + 1) = 0x1F400000001LL;
      sub_1414D53A0(&v359, &v263);
    }
    result = sub_14167F170(v8);
    if ( *(_BYTE *)(result + 16) == 1 )
    {
      v14 = *(_QWORD *)result;
      v15 = *(_QWORD *)(result + 8);
    }
    else
    {
      v149 = result;
      v14 = sub_141696260(v11, v10, v12, v13);
      result = v149;
      *(_QWORD *)v149 = v14;
      *(_QWORD *)(v149 + 8) = v15;
      *(_BYTE *)(v149 + 16) = 1;
    }
    *(_QWORD *)result = v14 + 1;
    *(_OWORD *)(a1 + 24) = xmmword_1419E4880;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 40) = v14;
    *(_QWORD *)(a1 + 48) = v15;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    return result;
  }
  *(_QWORD *)&v195 = a2;
  *((_QWORD *)&v195 + 1) = a3;
  LOBYTE(v7) = 1;
  sub_1402C8680(&v263, a2, a3, v7);
  if ( BYTE8(v268) == 0xFF )
  {
    v321 = v267;
    v320 = v266;
    v32 = _mm_loadu_si128((const __m128i *)&v263);
    v33 = _mm_loadu_si128((const __m128i *)&v263.m256i_u64[2]);
    v34 = _mm_loadu_si128((const __m128i *)&v264);
    v319 = _mm_loadu_si128(&v265);
    v318 = v34;
    v317 = v33;
    v316 = v32;
    v336.m128i_i64[0] = 0;
    v336.m128i_i64[1] = 1;
    *(_QWORD *)&v337 = 0;
    v223.m128i_i64[0] = 1610612768;
    v222.m128i_i64[0] = (__int64)&v336;
    v222.m128i_i64[1] = (__int64)&off_1419E98E0;
    if ( (unsigned __int8)sub_14104A7D0(&v316, &v222) )
      sub_141939040(
        (unsigned int)aADisplayImplem_0,
        55,
        (unsigned int)&v359,
        (unsigned int)&unk_1419E6AE0,
        (__int64)&off_1419EB798);
    v358 = v336.m128i_i64[0];
    v35 = asc_1419E7D2F;
    *(_QWORD *)&v261 = asc_1419E7D2F;
    *((_QWORD *)&v261 + 1) = 21;
    v344 = v336.m128i_i64[1];
    *(_OWORD *)v329 = __PAIR128__(v337, v336.m128i_u64[1]);
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v311.m128i_i64[0] = a2;
      v311.m128i_i64[1] = a3;
      v336.m128i_i64[0] = (__int64)&v261;
      v336.m128i_i64[1] = (__int64)sub_140186EE0;
      *(_QWORD *)&v337 = v329;
      *((_QWORD *)&v337 + 1) = sub_140186EE0;
      v338.m128i_i64[0] = (__int64)&v311;
      v338.m128i_i64[1] = (__int64)sub_14169F630;
      v224.m512i_i64[2] = 2;
      v224.m512i_i64[3] = (__int64)aCodexmateLibCo_2;
      v224.m512i_i64[4] = 29;
      v224.m512i_i64[6] = (__int64)&unk_1419E5E10;
      v224.m512i_i64[7] = (__int64)&v336;
      v222.m128i_i64[0] = 0;
      v222.m128i_i64[1] = (__int64)aCodexmateLibCo_2;
      v223 = (__m128i)0x1DuLL;
      v224.m512i_i64[0] = (__int64)aSrcCoreSession_5;
      v224.m512i_i64[1] = 20;
      v224.m512i_i64[5] = 0x1FE00000001LL;
      sub_1414D53A0(&v359, &v222);
    }
    v36 = sub_14167F170(v35);
    v41 = v36;
    if ( *(_BYTE *)(v36 + 16) == 1 )
    {
      v42 = *(_QWORD *)v36;
      v43 = *(_QWORD *)(v41 + 8);
    }
    else
    {
      v42 = sub_141696260(v38, v37, v39, v40);
      *(_QWORD *)v41 = v42;
      *(_QWORD *)(v41 + 8) = v43;
      *(_BYTE *)(v41 + 16) = 1;
    }
    *(_QWORD *)v41 = v42 + 1;
    *(_OWORD *)(a1 + 24) = xmmword_1419E4880;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 40) = v42;
    *(_QWORD *)(a1 + 48) = v43;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    if ( v358 )
      sub_140001660(v344, v358, 1);
    return sub_14029DA50(&v316);
  }
  v154[6] = v268;
  v154[5] = v267;
  v154[4] = v266;
  v16 = _mm_loadu_si128((const __m128i *)&v263);
  v17 = _mm_loadu_si128((const __m128i *)&v263.m256i_u64[2]);
  v18 = _mm_loadu_si128((const __m128i *)&v264);
  v154[3] = _mm_loadu_si128(&v265);
  v154[2] = v18;
  v154[1] = v17;
  v154[0] = v16;
  sub_1402D2F70(&v316, v154, aThreads_0, 7);
  if ( v316.m128i_i32[0] != -1 )
  {
    *(_OWORD *)&v224.m512i_u64[6] = v321;
    *(_OWORD *)&v224.m512i_u64[4] = v320;
    v20 = _mm_loadu_si128(&v316);
    v21 = _mm_loadu_si128(&v317);
    v22 = _mm_loadu_si128(&v318);
    *(__m128i *)&v224.m512i_u64[2] = _mm_loadu_si128(&v319);
    *(__m128i *)v224.m512i_i8 = v22;
    v223 = v21;
    v222 = v20;
    v336.m128i_i64[0] = 0;
    v336.m128i_i64[1] = 1;
    *(_QWORD *)&v337 = 0;
    v263.m256i_i64[2] = 1610612768;
    v263.m256i_i64[0] = (__int64)&v336;
    v263.m256i_i64[1] = (__int64)&off_1419E98E0;
    if ( (unsigned __int8)sub_14104A7D0(&v222, &v263) )
      sub_141939040(
        (unsigned int)aADisplayImplem_0,
        55,
        (unsigned int)&v359,
        (unsigned int)&unk_1419E6AE0,
        (__int64)&off_1419EB798);
    v358 = v336.m128i_i64[0];
    v23 = aThreads_4;
    *(_QWORD *)&v253 = aThreads_4;
    *((_QWORD *)&v253 + 1) = 23;
    v344 = v336.m128i_i64[1];
    v261 = __PAIR128__(v337, v336.m128i_u64[1]);
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)v329 = a2;
      *(_QWORD *)&v329[8] = a3;
      v336.m128i_i64[0] = (__int64)&v253;
      v336.m128i_i64[1] = (__int64)sub_140186EE0;
      *(_QWORD *)&v337 = &v261;
      *((_QWORD *)&v337 + 1) = sub_140186EE0;
      v338.m128i_i64[0] = (__int64)v329;
      v338.m128i_i64[1] = (__int64)sub_14169F630;
      v265.m128i_i64[0] = 2;
      v265.m128i_i64[1] = (__int64)aCodexmateLibCo_2;
      *(_QWORD *)&v266 = 29;
      *(_QWORD *)&v267 = &unk_1419E5E10;
      *((_QWORD *)&v267 + 1) = &v336;
      v263.m256i_i64[0] = 0;
      v263.m256i_i64[1] = (__int64)aCodexmateLibCo_2;
      *(_OWORD *)&v263.m256i_u64[2] = 0x1Du;
      *(_QWORD *)&v264 = aSrcCoreSession_5;
      *((_QWORD *)&v264 + 1) = 20;
      *((_QWORD *)&v266 + 1) = 0x1FE00000001LL;
      sub_1414D53A0(&v359, &v263);
    }
    v24 = sub_14167F170(v23);
    v29 = v24;
    if ( *(_BYTE *)(v24 + 16) == 1 )
    {
      v30 = *(_QWORD *)v24;
      v31 = *(_QWORD *)(v29 + 8);
    }
    else
    {
      v30 = sub_141696260(v26, v25, v27, v28);
      *(_QWORD *)v29 = v30;
      *(_QWORD *)(v29 + 8) = v31;
      *(_BYTE *)(v29 + 16) = 1;
    }
    *(_QWORD *)v29 = v30 + 1;
    *(_OWORD *)(a1 + 24) = xmmword_1419E4880;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 40) = v30;
    *(_QWORD *)(a1 + 48) = v31;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    if ( v358 )
      sub_140001660(v344, v358, 1);
    sub_14029DA50(&v222);
    return sub_14029B090(v154);
  }
  v44 = _mm_loadu_si128((const __m128i *)&v316.m128i_u64[1]);
  v45 = _mm_loadu_si128((const __m128i *)&v317.m128i_u64[1]);
  v313 = _mm_loadu_si128((const __m128i *)&v318.m128i_u64[1]);
  v312 = v45;
  v311 = v44;
  if ( !v45.m128i_i64[1] )
  {
LABEL_37:
    *(_QWORD *)v329 = aThreadsId;
    *(_QWORD *)&v329[8] = 24;
    v336 = (__m128i)1uLL;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v316.m128i_i64[0] = a2;
      v316.m128i_i64[1] = a3;
      v222.m128i_i64[0] = (__int64)v329;
      v222.m128i_i64[1] = (__int64)sub_140186EE0;
      v223.m128i_i64[0] = (__int64)&v336;
      v223.m128i_i64[1] = (__int64)sub_140186EE0;
      v224.m512i_i64[0] = (__int64)&v316;
      v224.m512i_i64[1] = (__int64)sub_14169F630;
      v265.m128i_i64[0] = 2;
      v265.m128i_i64[1] = (__int64)aCodexmateLibCo_2;
      *(_QWORD *)&v266 = 29;
      *(_QWORD *)&v267 = &unk_1419E5E10;
      *((_QWORD *)&v267 + 1) = &v222;
      v263.m256i_i64[0] = 0;
      v263.m256i_i64[1] = (__int64)aCodexmateLibCo_2;
      *(_OWORD *)&v263.m256i_u64[2] = 0x1Du;
      *(_QWORD *)&v264 = aSrcCoreSession_5;
      *((_QWORD *)&v264 + 1) = 20;
      *((_QWORD *)&v266 + 1) = 0x1FE00000001LL;
      sub_1414D53A0(&v359, &v263);
    }
    v55 = sub_14167F170(v19);
    v60 = v55;
    if ( *(_BYTE *)(v55 + 16) == 1 )
    {
      _RAX = *(_QWORD *)v55;
      v62 = *(_QWORD *)(v60 + 8);
    }
    else
    {
      _RAX = sub_141696260(v57, v56, v58, v59);
      *(_QWORD *)v60 = _RAX;
      *(_QWORD *)(v60 + 8) = v62;
      *(_BYTE *)(v60 + 16) = 1;
    }
    *(_QWORD *)v60 = _RAX + 1;
    *(_OWORD *)(a1 + 24) = xmmword_1419E4880;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 40) = _RAX;
    *(_QWORD *)(a1 + 48) = v62;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_264;
  }
  v46 = sub_140D2CC10(&v313, aId_1, 2);
  v19 = v311.m128i_i64[0];
  v48 = _mm_cvtsi32_si128(v46 >> 57);
  v49 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v48, v48), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v51 = v311.m128i_i64[1] & v46;
    v52 = _mm_loadu_si128((const __m128i *)(v311.m128i_i64[0] + v51));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v52, v49));
    if ( _R9D )
      break;
LABEL_35:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v52, (__m128i)-1LL)) )
      goto LABEL_37;
    v46 = i + v51 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v54 = -3LL * (v311.m128i_i64[1] & (v51 + _R10));
    if ( *(_QWORD *)(v311.m128i_i64[0] + 8 * v54 - 8) == 2 && **(_WORD **)(v311.m128i_i64[0] + 8 * v54 - 16) == 25705 )
      break;
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_35;
  }
  nullsub_1(v311.m128i_i64[0]);
  v63 = (void *)sub_140001650(10, 1);
  if ( !v63 )
    sub_141938D2B(1, 10);
  qmemcpy(v63, "id AS c_id", 10);
  v220 = (__int64)v63;
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aTitle_0, 5, (__int64)&unk_1419E6446, 2);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7DC2, &v316);
  if ( !v263.m256i_i64[0] )
  {
    v358 = v222.m128i_i64[1];
    v64 = v222.m128i_i64[0];
    v221 = v223.m128i_i64[0];
LABEL_47:
    v334 = v64;
    v65 = sub_140D2CC10(&v313, aRecencyAtMs, 13);
    v67 = v311;
    v68 = _mm_cvtsi32_si128(v65 >> 57);
    v69 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v68, v68), 0), 68);
    for ( j = 0; ; j += 16 )
    {
      v71 = v311.m128i_i64[1] & v65;
      v72 = _mm_loadu_si128((const __m128i *)(v311.m128i_i64[0] + v71));
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v72, v69));
      if ( _R9D )
        break;
LABEL_52:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v72, (__m128i)-1LL)) )
      {
        v75 = 0;
        goto LABEL_55;
      }
      v65 = j + v71 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r10d, r9d }
      v74 = -3LL * (v311.m128i_i64[1] & (v71 + _R10));
      if ( *(_QWORD *)(v311.m128i_i64[0] + 8 * v74 - 8) == 13 )
      {
        v75 = 1;
        if ( !(**(_QWORD **)(v311.m128i_i64[0] + 8 * v74 - 16) ^ 0x5F79636E65636572LL
             | *(_QWORD *)(*(_QWORD *)(v311.m128i_i64[0] + 8 * v74 - 16) + 5LL) ^ 0x736D5F74615F7963LL) )
          break;
      }
      _R10 = (unsigned int)(_R9D - 1);
      LOWORD(_R10) = _R9D & (_R9D - 1);
      _R9D = _R10;
      if ( !(_WORD)_R10 )
        goto LABEL_52;
    }
LABEL_55:
    v76 = sub_140D2CC10(&v313, aUpdatedAtMs, 13);
    v78 = _mm_cvtsi32_si128(v76 >> 57);
    v79 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v78, v78), 0), 68);
    for ( k = 0; ; k += 16 )
    {
      v81 = v67.m128i_i64[1] & v76;
      v82 = _mm_loadu_si128((const __m128i *)(v67.m128i_i64[0] + v81));
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v82, v79));
      if ( _R9D )
        break;
LABEL_60:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v82, (__m128i)-1LL)) )
      {
        if ( !v75 )
        {
          v64 = v334;
          goto LABEL_71;
        }
        nullsub_1(k);
        v85 = 49;
        v86 = (__m128i *)sub_140001650(49, 1);
        if ( !v86 )
        {
          v340 = v358;
          v339 = v334;
          sub_141938D2B(1, 49);
        }
        qmemcpy(&v86[1], "cency_at_ms, 0) AS REAL) / 1000.", 32);
        v87 = _mm_loadu_si128(&xmmword_1419E830C);
        goto LABEL_77;
      }
      v76 = k + v81 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r10d, r9d }
      v84 = -3LL * (v67.m128i_i64[1] & (v81 + _R10));
      if ( *(_QWORD *)(v67.m128i_i64[0] + 8 * v84 - 8) == 13
        && !(**(_QWORD **)(v67.m128i_i64[0] + 8 * v84 - 16) ^ 0x5F64657461647075LL
           | *(_QWORD *)(*(_QWORD *)(v67.m128i_i64[0] + 8 * v84 - 16) + 5LL) ^ 0x736D5F74615F6465LL) )
      {
        break;
      }
      _R10 = (unsigned int)(_R9D - 1);
      LOWORD(_R10) = _R9D & (_R9D - 1);
      _R9D = _R10;
      if ( !(_WORD)_R10 )
        goto LABEL_60;
    }
    nullsub_1(k);
    if ( v75 )
    {
      v85 = 64;
      v86 = (__m128i *)sub_140001650(64, 1);
      if ( !v86 )
      {
        v340 = v358;
        v339 = v334;
        sub_141938D2B(1, 64);
      }
      qmemcpy(&v86[1], "cency_at_ms, updated_at_ms, 0) AS REAL) / 1000.0", 48);
      *v86 = _mm_loadu_si128(&xmmword_1419E833D);
      goto LABEL_78;
    }
    v85 = 49;
    v86 = (__m128i *)sub_140001650(49, 1);
    if ( !v86 )
    {
      v340 = v358;
      v339 = v334;
      sub_141938D2B(1, 49);
    }
    qmemcpy(&v86[1], "dated_at_ms, 0) AS REAL) / 1000.", 32);
    v87 = _mm_loadu_si128(&xmmword_1419E82DB);
    goto LABEL_77;
  }
  sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v358 = v222.m128i_i64[1];
  v64 = v222.m128i_i64[0];
  v221 = v223.m128i_i64[0];
  if ( v312.m128i_i64[1] )
    goto LABEL_47;
LABEL_71:
  v340 = v358;
  v339 = v64;
  v88 = sub_140373F00(&v311, aUpdatedAt);
  v334 = v64;
  if ( v88 )
  {
    nullsub_1(v89);
    v85 = 37;
    v86 = (__m128i *)sub_140001650(37, 1);
    if ( !v86 )
    {
      v340 = v358;
      v339 = v64;
      sub_141938D2B(1, 37);
    }
    qmemcpy(&v86[1], "dated_at, 0) AS REAL)", 21);
    *v86 = _mm_loadu_si128(&xmmword_1419E82B6);
    goto LABEL_78;
  }
  v340 = v358;
  v339 = v64;
  v90 = sub_140373F00(&v311, aCreatedAtMs);
  nullsub_1(v91);
  if ( !v90 )
  {
    v85 = 3;
    v86 = (__m128i *)sub_140001650(3, 1);
    if ( !v86 )
    {
      v340 = v358;
      v339 = v64;
      sub_141938D2B(1, 3);
    }
    v86->m128i_i8[2] = 48;
    v86->m128i_i16[0] = 11824;
    goto LABEL_78;
  }
  v85 = 49;
  v86 = (__m128i *)sub_140001650(49, 1);
  if ( !v86 )
  {
    v340 = v358;
    v339 = v64;
    sub_141938D2B(1, 49);
  }
  qmemcpy(&v86[1], "eated_at_ms, 0) AS REAL) / 1000.", 32);
  v87 = _mm_loadu_si128(&xmmword_1419E8285);
LABEL_77:
  *v86 = v87;
  v86[3].m128i_i8[0] = 48;
LABEL_78:
  v263.m256i_i64[0] = v85;
  v263.m256i_i64[1] = (__int64)v86;
  v263.m256i_i64[2] = v85;
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7DD0, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v346 = v222.m128i_i64[1];
  v344 = v222.m128i_i64[0];
  v92 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aCwd, 3, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7DEA, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v347 = v222.m128i_i64[1];
  v322 = v222.m128i_i64[0];
  v196 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aArchived, 8, (__int64)a0_7, 1);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7DFF, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v349 = v222.m128i_i64[1];
  v323 = v222.m128i_i64[0];
  v197 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aAgentNickname, 14, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7E1E, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v333 = v222.m128i_i64[1];
  v324 = v222.m128i_i64[0];
  v198 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aAgentRole, 10, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7E3F, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v350 = v222.m128i_i64[1];
  v325 = v222.m128i_i64[0];
  v199 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aSource_1, 6, (__int64)&unk_1419E6446, 2);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7E58, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v345 = v222.m128i_i64[1];
  v326 = v222.m128i_i64[0];
  v200 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aRolloutPath, 12, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7E73, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v342 = v222.m128i_i64[1];
  v327 = v222.m128i_i64[0];
  v201 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aName_2, 4, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7E88, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v308 = v222.m128i_i64[1];
  v328 = v222.m128i_i64[0];
  v202 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aPreview, 7, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7E9C, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v343 = v222.m128i_i64[1];
  v258 = v222.m128i_i64[0];
  v203 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aTokensUsed, 11, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7EB7, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v341 = v222.m128i_i64[1];
  v335 = v222.m128i_i64[0];
  v204 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aModel_1, 5, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7ECB, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v309 = v222.m128i_i64[1];
  v332 = v222.m128i_i64[0];
  v205 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)"reasoning_effortnone", 16, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7ED9, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v310 = v222.m128i_i64[1];
  v355 = v222.m128i_i64[0];
  v206 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aMemoryMode, 11, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7EFD, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v255 = v222.m128i_i64[1];
  v351 = v222.m128i_i64[0];
  v207 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aHistoryMode, 12, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7F1D, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v256 = v222.m128i_i64[1];
  v356 = v222.m128i_i64[0];
  v208 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aProjectId, 10, (__int64)aNull_8, 4);
  v316.m128i_i64[0] = (__int64)&v263;
  v316.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v222, &unk_1419E7F3C, &v316);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v257 = v222.m128i_i64[1];
  v348 = v222.m128i_i64[0];
  v209 = v223.m128i_i64[0];
  sub_1402D2BC0((unsigned int)&v263, (unsigned int)&v311, (unsigned int)aGitBranch, 10, (__int64)aNull_8, 4);
  v222.m128i_i64[0] = (__int64)&v263;
  v222.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v316, &unk_1419E7F59, &v222);
  if ( v263.m256i_i64[0] )
    sub_140001660(v263.m256i_i64[1], v263.m256i_i64[0], 1);
  v263.m256i_i64[0] = 10;
  v93 = v220;
  v263.m256i_i64[1] = v220;
  v263.m256i_i64[2] = 10;
  v94 = v334;
  v263.m256i_i64[3] = v334;
  *(_QWORD *)&v264 = v358;
  *((_QWORD *)&v264 + 1) = v221;
  v265.m128i_i64[0] = v344;
  v265.m128i_i64[1] = v346;
  *(_QWORD *)&v266 = v92;
  *((_QWORD *)&v266 + 1) = v322;
  *(_QWORD *)&v267 = v347;
  *((_QWORD *)&v267 + 1) = v196;
  *(_QWORD *)&v268 = v323;
  *((_QWORD *)&v268 + 1) = v349;
  v269 = v197;
  v270 = v324;
  v271 = v333;
  v272 = v198;
  v273 = v325;
  v274 = v350;
  v275 = v199;
  v276 = v326;
  v277 = v345;
  v278 = v200;
  v279 = v327;
  v280 = v342;
  v281 = v201;
  v282 = v328;
  v283 = v308;
  v284 = v202;
  v95 = v258;
  v285 = v258;
  v286 = v343;
  v287 = v203;
  v288 = v335;
  v289 = v341;
  v290 = v204;
  v291 = v332;
  v292 = v309;
  v293 = v205;
  v294 = v355;
  v295 = v310;
  v296 = v206;
  v297 = v351;
  v298 = v255;
  v299 = v207;
  v300 = v356;
  v301 = v256;
  v302 = v208;
  v303 = v348;
  v304 = v257;
  v305 = v209;
  v307 = v317.m128i_i64[0];
  v306 = v316;
  sub_140D1EE10((unsigned int)&v222, (unsigned int)&v263, 18, (unsigned int)&unk_1419E7F6C, 2);
  *(_QWORD *)&v337 = v223.m128i_i64[0];
  v336 = _mm_loadu_si128(&v222);
  sub_140001660(v93, 10, 1);
  if ( v94 )
    sub_140001660(v358, v94, 1);
  if ( v344 )
    sub_140001660(v346, v344, 1);
  if ( v322 )
    sub_140001660(v347, v322, 1);
  if ( v323 )
    sub_140001660(v349, v323, 1);
  if ( v324 )
    sub_140001660(v333, v324, 1);
  if ( v325 )
    sub_140001660(v350, v325, 1);
  if ( v326 )
    sub_140001660(v345, v326, 1);
  if ( v327 )
    sub_140001660(v342, v327, 1);
  if ( v328 )
    sub_140001660(v308, v328, 1);
  if ( v95 )
    sub_140001660(v343, v95, 1);
  if ( v335 )
    sub_140001660(v341, v335, 1);
  if ( v332 )
    sub_140001660(v309, v332, 1);
  if ( v355 )
    sub_140001660(v310, v355, 1);
  if ( v351 )
    sub_140001660(v255, v351, 1);
  if ( v356 )
    sub_140001660(v256, v356, 1);
  if ( v348 )
    sub_140001660(v257, v348, 1);
  if ( v306.m128i_i64[0] )
    sub_140001660(v306.m128i_i64[1], v306.m128i_i64[0], 1);
  v222.m128i_i64[0] = (__int64)&v336;
  v222.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v263, &unk_1419E7CBB, &v222);
  if ( v336.m128i_i64[0] )
    sub_140001660(v336.m128i_i64[1], v336.m128i_i64[0], 1);
  v332 = v263.m256i_i64[1];
  v335 = v263.m256i_i64[0];
  sub_1402BA1E0(&v263, v154, v263.m256i_i64[1], v263.m256i_i64[2]);
  if ( v263.m256i_i32[0] == 1 )
  {
    v97 = _mm_loadu_si128((const __m128i *)&v263.m256i_u64[1]);
    v98 = _mm_loadu_si128((const __m128i *)&v263.m256i_u64[3]);
    v99 = _mm_loadu_si128((const __m128i *)((char *)&v264 + 8));
    *(__m128i *)&v224.m512i_u64[2] = _mm_loadu_si128((const __m128i *)&v265.m128i_u64[1]);
    *(__m128i *)v224.m512i_i8 = v99;
    v223 = v98;
    v222 = v97;
    *(_QWORD *)v329 = 0;
    *(_QWORD *)&v329[8] = 1;
    *(_QWORD *)&v329[16] = 0;
    *(_QWORD *)&v337 = 1610612768;
    v336.m128i_i64[0] = (__int64)v329;
    v336.m128i_i64[1] = (__int64)&off_1419E98E0;
    if ( (unsigned __int8)sub_141404740(&v222, &v336) )
      sub_141939040(
        (unsigned int)aADisplayImplem_0,
        55,
        (unsigned int)&v359,
        (unsigned int)&unk_1419E6AE0,
        (__int64)&off_1419EB798);
    v358 = *(_QWORD *)v329;
    v100 = aThreads_3;
    *(_QWORD *)&v210 = aThreads_3;
    *((_QWORD *)&v210 + 1) = 20;
    v344 = *(_QWORD *)&v329[8];
    v253 = *(_OWORD *)&v329[8];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v261 = a2;
      *((_QWORD *)&v261 + 1) = a3;
      v336.m128i_i64[0] = (__int64)&v210;
      v336.m128i_i64[1] = (__int64)sub_140186EE0;
      *(_QWORD *)&v337 = &v253;
      *((_QWORD *)&v337 + 1) = sub_140186EE0;
      v338.m128i_i64[0] = (__int64)&v261;
      v338.m128i_i64[1] = (__int64)sub_14169F630;
      *(_QWORD *)v329 = aCodexmateLibCo_2;
      *(_QWORD *)&v329[8] = 29;
      *(_QWORD *)&v329[16] = aCodexmateLibCo_2;
      v330 = 29;
      v331 = &off_1419E5E58;
      sub_140BAD520(&unk_1419E5E10, &v336, 2, v329);
    }
    v101 = sub_14167F170(v100);
    v106 = v101;
    if ( *(_BYTE *)(v101 + 16) == 1 )
    {
      v107 = *(_QWORD *)v101;
      v108 = *(_QWORD *)(v106 + 8);
    }
    else
    {
      v107 = sub_141696260(v103, v102, v104, v105);
      *(_QWORD *)v106 = v107;
      *(_QWORD *)(v106 + 8) = v108;
      *(_BYTE *)(v106 + 16) = 1;
    }
    *(_QWORD *)v106 = v107 + 1;
    *(_OWORD *)(a1 + 24) = xmmword_1419E4880;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 40) = v107;
    *(_QWORD *)(a1 + 48) = v108;
    *(_BYTE *)(a1 + 56) = 0;
    *(_QWORD *)a1 = -1;
    if ( v358 )
      sub_140001660(v344, v358, 1);
    HIDWORD(_RAX) = (unsigned __int64)sub_14029C280(&v222) >> 32;
    goto LABEL_262;
  }
  v109 = _mm_loadu_si128((const __m128i *)&v263.m256i_u64[1]);
  v110 = _mm_loadu_si128((const __m128i *)&v263.m256i_u64[3]);
  v111 = _mm_loadu_si128((const __m128i *)((char *)&v264 + 8));
  v319 = _mm_loadu_si128((const __m128i *)&v265.m128i_u64[1]);
  v318 = v111;
  v317 = v110;
  v316 = v109;
  v112 = sub_14167F170(v96);
  v117 = (__m128i *)v112;
  if ( *(_BYTE *)(v112 + 16) == 1 )
  {
    v118 = *(__m128i *)v112;
  }
  else
  {
    v118.m128i_i64[0] = sub_141696260(v114, v113, v115, v116);
    *v117 = v118;
    v117[1].m128i_i8[0] = 1;
  }
  v117->m128i_i64[0] = v118.m128i_i64[0] + 1;
  v337 = xmmword_1419E4880;
  v336 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
  v338 = v118;
  v119 = sub_1417A9630(v319.m128i_i64[1]);
  if ( v119 )
  {
    *(_OWORD *)v263.m256i_i8 = 0x8000000000000013uLL;
    v263.m256i_i64[2] = v119;
    sub_14036B8F0(v329, &v263);
    v358 = *(_QWORD *)&v329[8];
    sub_1402B4320((__int128 *)v222.m128i_i8, &v195, (__int64)aThreads_2, 26, *(__int128 **)&v329[8]);
    *(_QWORD *)(a1 + 56) = v224.m512i_i64[2];
    v120 = _mm_loadu_si128(&v222);
    v121 = _mm_loadu_si128(&v223);
    *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)&v224);
    *(__m128i *)(a1 + 24) = v121;
    *(__m128i *)(a1 + 8) = v120;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)v329 )
      sub_140001660(v358, *(_QWORD *)v329, 1);
    sub_14029C280(&v263);
    goto LABEL_261;
  }
  v314 = &v316;
  v315 = 0;
  while ( 1 )
  {
    sub_14036A6D0(&v263, &v314);
    v124 = v263.m256i_i64[0];
    if ( v263.m256i_i64[0] != -1 )
    {
      v125 = v263.m256i_i64[1];
      v127 = v263.m256i_i64[3];
      v126 = v263.m256i_i64[2];
LABEL_166:
      v128 = v264;
      v129 = _mm_loadu_si128(&v265);
      v130 = 2;
      goto LABEL_167;
    }
    if ( !v315 )
      goto LABEL_253;
    v150 = &off_1419E5EA0;
    sub_14018DB90(&v263);
    v125 = v263.m256i_i64[1];
    v124 = v263.m256i_i64[0];
    v127 = v263.m256i_i64[3];
    v126 = v263.m256i_i64[2];
    if ( v263.m256i_i64[0] != -1 )
      goto LABEL_166;
    if ( v263.m256i_i64[1] == -1 )
    {
      v126 = 1;
      v127 = 0;
      v356 = 0;
      v128 = xmmword_1419E44C0;
    }
    else
    {
      v356 = v263.m256i_i64[1];
      v128 = *(_OWORD *)&v263.m256i_u64[1];
    }
    v347 = v126;
    sub_1402D2D40(&v263, v126, v127);
    v349 = v263.m256i_i64[1];
    v355 = v263.m256i_i64[0];
    v333 = v263.m256i_i64[2];
    LODWORD(v94) = v263.m256i_i32[6];
    sub_14018E1E0(&v263, &v315, "c_id", 4, &off_1419E5EC0);
    v351 = v263.m256i_i64[1];
    v124 = v263.m256i_i64[0];
    v346 = v263.m256i_i64[3];
    v348 = v263.m256i_i64[2];
    if ( v263.m256i_i64[0] == -1 )
    {
      v150 = &off_1419E5EE0;
      sub_14018DB90(&v263);
      v131 = v263.m256i_i64[1];
      v124 = v263.m256i_i64[0];
      v123 = v263.m256i_i64[3];
      v132 = v263.m256i_i64[2];
      if ( v263.m256i_i64[0] != -1 )
      {
        v127 = v263.m256i_i64[3];
        v345 = v263.m256i_i64[2];
        v350 = v263.m256i_i64[1];
        v128 = v264;
        v129 = _mm_loadu_si128(&v265);
        if ( v351 )
          sub_140001660(v348, v351, 1);
        if ( (unsigned __int64)(v355 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
          sub_140001660(v349, v355, 1);
        v130 = 2;
        if ( v356 )
          sub_140001660(v347, v356, 1);
        goto LABEL_187;
      }
      if ( v263.m256i_i64[1] == -1 )
        v132 = 1;
      v345 = v132;
      if ( v263.m256i_i64[1] == -1 )
        v123 = 0;
      v308 = v123;
      if ( v263.m256i_i64[1] == -1 )
        v131 = 0;
      v350 = v131;
      sub_14018DE00(&v263, &v315, aCUpdatedAt, 12, &off_1419E5F08);
      v124 = v263.m256i_i64[0];
      if ( v263.m256i_i64[0] == -1 )
      {
        v3 = (v263.m256i_i8[8] & 1) != 0 ? v263.m256i_i64[2] : 0LL;
        v354 = 1;
        sub_1402B3DC0(&v259);
        v357 = 1;
        sub_1402B3DC0(v151);
        if ( v151[0] == -1 )
        {
          v343 = -1;
        }
        else
        {
          v357 = 1;
          sub_1402B3EC0(&v263, v151);
          v341 = v263.m256i_i64[1];
          v343 = v263.m256i_i64[0];
          v309 = v263.m256i_i64[2];
        }
        sub_14018DFF0(&v263, &v315, aCArchived, 10, &off_1419E5F40);
        v123 = v263.m256i_i64[1];
        v133 = *(_OWORD *)v263.m256i_i8;
        v342 = v133 >> 64;
        v124 = v133;
        if ( v263.m256i_i64[0] == -1 )
        {
          LOBYTE(v310) = v263.m256i_i64[2] != 0;
          v353 = 1;
          sub_1402B3DC0((__int64 *)&v218);
          v352 = 1;
          sub_1402B3DC0((__int64 *)&v216);
          sub_1402B3DC0((__int64 *)&v214);
          sub_1402B3DC0((__int64 *)&v212);
          sub_14018DFF0(&v263, &v315, "c_tokens_used", 13, &off_1419E5F90);
          v124 = v263.m256i_i64[2];
          v130 = v263.m256i_i64[1];
          if ( v263.m256i_i64[0] == -1 )
          {
            sub_1402B3DC0((__int64 *)&v210);
            sub_1402B3DC0((__int64 *)&v253);
            sub_1402B3DC0((__int64 *)&v261);
            sub_1402B3DC0((__int64 *)v329);
            sub_1402B3DC0(v222.m128i_i64);
            sub_1402B3DC0(v263.m256i_i64);
            LOBYTE(v123) = v310 & v342;
            v152 = v260;
            v156 = v219;
            v155 = v218;
            v158 = v217;
            v157 = v216;
            v160 = v215;
            v159 = v214;
            v162 = v213;
            v161 = v212;
            v134 = _mm_loadl_epi64((const __m128i *)&v259);
            v164 = v211;
            v163 = v210;
            v166 = v254;
            v165 = v253;
            v168 = v262;
            v167 = v261;
            v170 = *(_QWORD *)&v329[16];
            v169 = *(_OWORD *)v329;
            v172 = v223.m128i_i64[0];
            v171 = v222;
            v174 = v263.m256i_i64[2];
            v173 = _mm_loadu_si128((const __m128i *)&v263);
            v129 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v127, v134);
            v358 = v351;
            v344 = v348;
            v322 = v346;
            v323 = v343;
            v324 = v341;
            v325 = v309;
            v326 = v355;
            v327 = v349;
            v328 = v333;
            v127 = v308;
LABEL_187:
            v126 = v345;
            v125 = v350;
            goto LABEL_167;
          }
          v346 = v263.m256i_i64[0];
          v127 = v263.m256i_i64[3];
          v128 = v264;
          v129 = _mm_loadu_si128(&v265);
          if ( (_QWORD)v212 != -1 && (_QWORD)v212 )
            sub_140001660(*((_QWORD *)&v212 + 1), v212, 1);
          if ( (_QWORD)v214 != -1 && (_QWORD)v214 )
            sub_140001660(*((_QWORD *)&v214 + 1), v214, 1);
          if ( (unsigned __int64)(v355 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v349, v355, 1);
          if ( (_QWORD)v216 != -1 && (_QWORD)v216 )
            sub_140001660(*((_QWORD *)&v216 + 1), v216, 1);
          if ( (_QWORD)v218 != -1 && (_QWORD)v218 )
            sub_140001660(*((_QWORD *)&v218 + 1), v218, 1);
          if ( v356 )
            sub_140001660(v347, v356, 1);
          if ( (unsigned __int64)(v343 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v341, v343, 1);
          if ( v259 != -1 && v259 )
            sub_140001660(v260, v259, 1);
          if ( v350 )
            sub_140001660(v345, v350, 1);
          if ( v351 )
            sub_140001660(v348, v351, 1);
          v126 = v124;
          v125 = v130;
          v124 = v346;
          v130 = 2;
        }
        else
        {
          v127 = v263.m256i_i64[3];
          v346 = v263.m256i_i64[2];
          v128 = v264;
          v129 = _mm_loadu_si128(&v265);
          if ( v356 )
          {
            sub_140001660(v347, v356, 1);
            v123 = v342;
          }
          v94 = v351;
          if ( (unsigned __int64)(v343 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            sub_140001660(v341, v343, 1);
            v123 = v342;
          }
          if ( v259 != -1 && v259 )
          {
            sub_140001660(v260, v259, 1);
            v123 = v342;
          }
          if ( v350 )
          {
            sub_140001660(v345, v350, 1);
            v123 = v342;
          }
          if ( v94 )
          {
            sub_140001660(v348, v94, 1);
            v123 = v342;
          }
          v130 = 2;
          if ( (unsigned __int64)(v355 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            sub_140001660(v349, v355, 1);
            v123 = v342;
          }
          v126 = v346;
          v125 = v123;
        }
      }
      else
      {
        v346 = v263.m256i_i64[1];
        v127 = v263.m256i_i64[3];
        v333 = v263.m256i_i64[2];
        v128 = v264;
        v129 = _mm_loadu_si128(&v265);
        if ( v350 )
          sub_140001660(v345, v350, 1);
        if ( v351 )
          sub_140001660(v348, v351, 1);
        if ( (unsigned __int64)(v355 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
          sub_140001660(v349, v355, 1);
        v130 = 2;
        if ( v356 )
          sub_140001660(v347, v356, 1);
        v126 = v333;
        v125 = v346;
      }
    }
    else
    {
      v128 = v264;
      v129 = _mm_loadu_si128(&v265);
      if ( (unsigned __int64)(v355 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v349, v355, 1);
      v130 = 2;
      if ( v356 )
        sub_140001660(v347, v356, 1);
      v127 = v346;
      v126 = v348;
      v125 = v351;
    }
LABEL_167:
    v153 = v152;
    v175 = v155;
    v176 = v156;
    v177 = v157;
    v178 = v158;
    v179 = v159;
    v180 = v160;
    v181 = v161;
    v182 = v162;
    v184 = v164;
    v183 = v163;
    v185 = v165;
    v186 = v166;
    v187 = v167;
    v188 = v168;
    v189 = v169;
    v190 = v170;
    v192 = v172;
    v191 = v171;
    v194 = v174;
    v193 = _mm_load_si128(&v173);
    if ( v130 == 2 )
      break;
    if ( v130 == -1 )
    {
LABEL_253:
      sub_14029C090(&v314);
      v135 = _mm_load_si128(&v336);
      si128 = _mm_load_si128((const __m128i *)&v337);
      *(__m128i *)(a1 + 40) = _mm_load_si128(&v338);
      *(__m128i *)(a1 + 24) = si128;
      *(__m128i *)(a1 + 8) = v135;
      *(_BYTE *)(a1 + 56) = 1;
      *(_QWORD *)a1 = -1;
      sub_14029C410(&v316);
      if ( v335 )
        sub_140001660(v332, v335, 1);
      sub_140370B80(&v311);
      return sub_14029B090(v154);
    }
    v222.m128i_i64[0] = v130;
    v222.m128i_i64[1] = v124;
    v223.m128i_i64[0] = v125;
    v223.m128i_i64[1] = v126;
    v224.m512i_i64[0] = v127;
    *(_OWORD *)&v224.m512i_u64[1] = v128;
    *(__m128i *)&v224.m512i_u64[3] = v129;
    *(_OWORD *)&v224.m512i_u64[5] = v153;
    v224.m512i_i64[7] = v323;
    v225 = v324;
    v226 = v325;
    v228 = v176;
    v227 = v175;
    v230 = v178;
    v229 = v177;
    v231 = v326;
    v232 = v327;
    v233 = v328;
    v235 = v180;
    v234 = v179;
    v237 = v182;
    v236 = v181;
    v239 = v184;
    v238 = v183;
    v241 = v186;
    v240 = v185;
    v243 = v188;
    v242 = v187;
    v245 = v190;
    v244 = v189;
    v247 = v192;
    v246 = v191;
    v249 = v194;
    v248 = _mm_load_si128(&v193);
    v250 = v3;
    v251 = v94;
    v252 = v123;
    *(_QWORD *)v329 = v358;
    *(_QWORD *)&v329[8] = v344;
    *(_QWORD *)&v329[16] = v322;
    sub_1403A9A10(&v263, &v336, v329, &v222, v150);
    if ( v263.m256i_i32[0] != 2 )
      sub_14029DBD0(&v263);
  }
  v263.m256i_i64[0] = v124;
  v263.m256i_i64[1] = v125;
  v263.m256i_i64[2] = v126;
  v263.m256i_i64[3] = v127;
  v264 = v128;
  v265 = v129;
  sub_14036B8F0(v329, &v263);
  v358 = *(_QWORD *)&v329[8];
  sub_1402B4320((__int128 *)v222.m128i_i8, &v195, (__int64)aThreads_1, 23, *(__int128 **)&v329[8]);
  *(_QWORD *)(a1 + 56) = v224.m512i_i64[2];
  v137 = _mm_loadu_si128(&v222);
  v138 = _mm_loadu_si128(&v223);
  *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)&v224);
  *(__m128i *)(a1 + 24) = v138;
  *(__m128i *)(a1 + 8) = v137;
  *(_QWORD *)a1 = -1;
  if ( *(_QWORD *)v329 )
    sub_140001660(v358, *(_QWORD *)v329, 1);
  sub_14029C280(&v263);
  sub_14029C090(&v314);
LABEL_261:
  sub_140298940(&v336, v122);
  HIDWORD(_RAX) = (unsigned __int64)sub_14029C410(&v316) >> 32;
LABEL_262:
  if ( v335 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v332, v335, 1) >> 32;
LABEL_264:
  v139 = v311.m128i_i64[1];
  if ( v311.m128i_i64[1] )
  {
    v140 = v312.m128i_i64[1];
    if ( v312.m128i_i64[1] )
    {
      v141 = v311.m128i_i64[0];
      v142 = (const __m128i *)(v311.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v311.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v144 = _mm_load_si128(v142);
            v141 -= 384;
            ++v142;
            _R15D = _mm_movemask_epi8(v144) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v145 = -3 * _RAX;
        v146 = *(_QWORD *)(v141 + 8 * v145 - 24);
        if ( v146 )
          sub_140001660(*(_QWORD *)(v141 + 8 * v145 - 16), v146, 1);
        --v140;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v140 );
    }
    v147 = (24 * v139 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v148 = v147 + v139 + 17;
    if ( v148 )
      sub_140001660(v311.m128i_i64[0] - v147, v148, 16);
  }
  return sub_14029B090(v154);
}
