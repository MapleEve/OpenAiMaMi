// win 1.2.7 | module src/core/repository.rs | ea 0x1401d7a10 | name sub_1401D7A10
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401D7A10(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // xmm11_8
  __m128 v4; // xmm12
  __int64 v7; // rsi
  void *v8; // rdi
  __int64 v9; // rax
  __m128i si128; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rsi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __m128i v18; // xmm0
  __int64 v19; // rsi
  __int64 v20; // rdi
  const __m128i *v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm6
  __m128i v24; // xmm7
  _QWORD *v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 v30; // r14
  unsigned __int64 v31; // r8
  __int64 v32; // rbx
  unsigned __int64 v33; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm9
  const __m128i *i; // rdx
  unsigned __int64 v38; // rax
  __m128i v39; // xmm10
  __int64 v41; // r13
  unsigned __int64 v42; // r15
  int v43; // eax
  bool v44; // zf
  __int64 v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // r14
  _QWORD *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rsi
  __m128i *v51; // rbx
  __m128i *v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdi
  int v55; // esi
  __int64 v56; // rdi
  __m128i v57; // xmm0
  __int64 v58; // r15
  __int64 v59; // rax
  _QWORD *v60; // rsi
  __int64 v61; // rdi
  _QWORD *v62; // rdi
  __int64 v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rbx
  unsigned __int64 v66; // rax
  __m128i v68; // xmm0
  __m128i v69; // xmm9
  unsigned __int64 j; // rdx
  unsigned __int64 v71; // rax
  __m128i v72; // xmm10
  unsigned __int64 v74; // r12
  int v75; // eax
  unsigned __int64 v76; // rbx
  __int64 v77; // rdx
  _QWORD *v78; // rsi
  __int64 v79; // r15
  _QWORD *v80; // r15
  __int64 v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rbx
  unsigned __int64 v84; // rdi
  __m128i v85; // xmm0
  __m128i v86; // xmm9
  signed __int64 k; // rcx
  unsigned __int64 v88; // rdi
  __m128i v90; // xmm10
  unsigned __int64 v92; // r13
  unsigned __int64 v93; // rdi
  __int64 v94; // rdx
  int v95; // esi
  __int64 v96; // r8
  __int64 v97; // rdx
  char v98; // dl
  __int64 v99; // xmm0_8
  __int64 v100; // r8
  char v101; // cl
  __int64 v102; // rcx
  __int64 v103; // r9
  __int64 v104; // r12
  __int64 v105; // r14
  __int64 v106; // rsi
  __int64 v107; // r13
  __int64 v108; // rdi
  __int64 v109; // rbx
  __int64 v110; // r15
  unsigned int v111; // ebx
  __int64 v112; // rdi
  unsigned int v113; // eax
  __int64 v114; // rax
  _DWORD *v115; // rdi
  __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rdi
  _BYTE *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rdi
  _BYTE *v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rdi
  _BYTE *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // r12
  __int64 v129; // rdi
  __int64 v130; // rbx
  int v131; // edx
  int v132; // ecx
  unsigned int v133; // ecx
  signed __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // r12
  __int64 v137; // rdi
  __int64 v138; // rbx
  int v139; // edx
  int v140; // ecx
  unsigned int v141; // ecx
  signed __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rdx
  unsigned int v146; // eax
  unsigned int v147; // edx
  __int64 v148; // r12
  __int64 v149; // rdi
  __int64 v150; // rbx
  int v151; // edx
  int v152; // ecx
  unsigned int v153; // ecx
  signed __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  char v160; // al
  char v161; // cl
  char v162; // cl
  char v163; // cl
  char v164; // dl
  char v165; // cl
  char v166; // dl
  char v167; // dl
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rax
  __int64 v171; // rax
  __int32 v172; // edx
  __int64 v173; // rax
  __int64 v174; // rsi
  __int64 v175; // rdi
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rbx
  __int128 v182; // rax
  __m128 v183; // xmm1
  int v184; // esi
  __int64 v185; // rdi
  __int64 v186; // rdi
  unsigned __int64 n; // rdx
  __int64 v189; // r8
  __int64 v190; // r13
  __int64 v191; // rbx
  __int64 v192; // rsi
  __int64 v193; // r15
  __int64 v194; // r12
  unsigned __int64 v195; // rax
  __m128i v196; // xmm10
  int v198; // eax
  unsigned __int64 v199; // rax
  __m128i v200; // xmm0
  __m128i v201; // xmm9
  __int64 v202; // r14
  __int64 v203; // rdi
  __int64 v204; // rsi
  __int64 v205; // r15
  __int64 v206; // r9
  __int64 v207; // r14
  __int64 v208; // r12
  char v209; // di
  unsigned int v210; // ebx
  __int64 v211; // rax
  __int64 v212; // rcx
  __int64 v213; // rsi
  __int64 v214; // r14
  __int64 v215; // rdi
  char v216; // bl
  __int64 v217; // rax
  unsigned int v218; // r15d
  __int64 v219; // r12
  __int64 v220; // rdx
  __int64 v221; // r8
  __int64 v222; // rsi
  __int64 v223; // r11
  __int64 v224; // rcx
  unsigned int v225; // r10d
  double v226; // xmm0_8
  char v227; // bl
  __int128 v228; // rax
  bool v229; // cc
  int v230; // ecx
  __int64 v231; // r12
  __int64 v232; // rdi
  char v233; // bl
  __int64 v234; // rsi
  __int64 v235; // r14
  unsigned int v236; // edx
  int v237; // edx
  int v238; // ecx
  unsigned int v239; // ecx
  __int64 v240; // rax
  __int64 *v241; // rdx
  signed __int64 v242; // rcx
  __int64 v243; // rdx
  __int64 v244; // rax
  __int64 v245; // rdx
  __int64 v246; // r8
  __int64 v247; // rdx
  char v248; // r8
  __m128i *v249; // r15
  char v250; // r8
  int v251; // edx
  __int64 v252; // rax
  __m128i v254; // xmm0
  __int64 v255; // rsi
  __int64 v256; // rdi
  const __m128i *v257; // rbx
  __m128i v259; // xmm0
  __int64 v260; // rax
  __int64 v261; // rdx
  unsigned __int64 v262; // rax
  __int64 v263; // r15
  __int64 v264; // rsi
  __int64 v265; // rdi
  __int64 v266; // rbx
  __m128i *v267; // rax
  __m128i v268; // xmm0
  __m128i v269; // xmm1
  __m128i v270; // xmm2
  __int64 v271; // rsi
  _QWORD *v272; // rdi
  __int64 v273; // rdx
  __int64 v274; // rdx
  __int64 v275; // rsi
  _QWORD *v276; // rdi
  __int64 v277; // rdx
  __int64 v278; // rdx
  __int64 v279; // rsi
  _QWORD *v280; // rdi
  __int64 v281; // rdx
  __int64 v282; // rdx
  __int64 v283; // rax
  __int64 v284; // rsi
  __int64 v285; // rdi
  __int64 v286; // rbx
  __int64 v287; // rsi
  __int64 v288; // rax
  __m128i v289; // xmm0
  __m128i v290; // xmm1
  __m128i v291; // xmm2
  __int64 v292; // rsi
  __int64 v293; // rdi
  const __m128i *v294; // rax
  _QWORD *v295; // rbx
  __m128i v296; // xmm0
  __int64 v297; // rdi
  char v298; // bl
  __int64 v299; // rax
  __int64 v300; // rsi
  __m128i *v301; // rax
  __m128i v302; // xmm0
  __m128i v303; // xmm1
  __m128i v304; // xmm2
  __int64 v305; // r15
  __m128i *v306; // r14
  __int64 v307; // rdx
  __m128i v308; // xmm0
  _QWORD *v309; // rsi
  __m128i *v310; // rcx
  __m128i v311; // xmm0
  __m128i v312; // xmm1
  __m128i v313; // xmm2
  _QWORD *v314; // rcx
  __int128 v315; // xmm0
  _QWORD *v316; // rsi
  __m128i *v317; // rsi
  __int64 v318; // rsi
  __m128i v319; // xmm0
  __int128 v320; // xmm1
  __m128i v321; // xmm2
  const __m128i *v322; // rbx
  unsigned __int64 v323; // rdi
  __int64 v324; // rdx
  __int64 v325; // rsi
  __int64 v326; // r15
  unsigned __int64 v327; // rax
  __m128i v328; // xmm8
  __int64 v330; // r12
  unsigned __int64 v332; // rbx
  int v333; // eax
  __int64 ii; // rdx
  unsigned __int64 v335; // rax
  unsigned __int64 v336; // rdi
  char v337; // r12
  __int64 v338; // rsi
  unsigned __int64 v339; // rax
  signed __int64 v341; // rdx
  __int64 v342; // rdi
  __m128i v343; // xmm0
  __m128i v344; // xmm7
  unsigned __int64 jj; // r9
  unsigned __int64 v346; // rax
  __m128i v347; // xmm8
  __int64 v349; // r8
  __int64 v350; // r15
  __int64 v351; // rsi
  int v352; // eax
  int v353; // eax
  __int64 v354; // r13
  __m128i v355; // kr50_16
  __m128i v356; // xmm0
  __m128i v357; // xmm7
  BOOL v358; // eax
  char v359; // si
  __int64 v360; // rdi
  __int64 v361; // r14
  __int64 v362; // rbx
  __int64 v363; // rdx
  __int64 v364; // rbx
  __int64 v365; // rax
  __int64 v366; // rdi
  __int64 v367; // r14
  __int64 v368; // rsi
  __int64 v369; // rax
  unsigned __int8 v370; // cl
  __int64 v371; // rsi
  __m128i v372; // xmm0
  __m128i v373; // xmm1
  __int64 m; // r15
  __m128i v376[12]; // [rsp+30h] [rbp-50h] BYREF
  int v377; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v378; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v379; // [rsp+108h] [rbp+88h]
  __int64 v380; // [rsp+118h] [rbp+98h]
  _BYTE v381[104]; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v382[3]; // [rsp+1B8h] [rbp+138h] BYREF
  __m128i v383[26]; // [rsp+1E8h] [rbp+168h] BYREF
  __m128i v384[16]; // [rsp+388h] [rbp+308h] BYREF
  __int64 v385; // [rsp+488h] [rbp+408h]
  __int128 v386; // [rsp+490h] [rbp+410h]
  __int128 v387; // [rsp+4A0h] [rbp+420h]
  __int64 v388; // [rsp+4B0h] [rbp+430h]
  __int128 v389; // [rsp+4B8h] [rbp+438h]
  __int64 v390; // [rsp+4C8h] [rbp+448h]
  _QWORD v391[2]; // [rsp+4D0h] [rbp+450h] BYREF
  unsigned __int64 v392; // [rsp+4E0h] [rbp+460h]
  char v393[56]; // [rsp+4E8h] [rbp+468h] BYREF
  __int64 v394; // [rsp+520h] [rbp+4A0h]
  __int64 v395; // [rsp+528h] [rbp+4A8h]
  __int64 v396[17]; // [rsp+538h] [rbp+4B8h] BYREF
  __m128i v397; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v398; // [rsp+5D0h] [rbp+550h]
  __m128i v399; // [rsp+5E0h] [rbp+560h]
  __int128 v400; // [rsp+5F0h] [rbp+570h]
  __int128 v401; // [rsp+600h] [rbp+580h]
  __int128 v402; // [rsp+610h] [rbp+590h]
  __m128i v403; // [rsp+620h] [rbp+5A0h]
  __int64 v404; // [rsp+630h] [rbp+5B0h]
  _BYTE v405[104]; // [rsp+640h] [rbp+5C0h] BYREF
  __m128i v406; // [rsp+6A8h] [rbp+628h] BYREF
  __m128i v407; // [rsp+6B8h] [rbp+638h]
  char v408; // [rsp+6C8h] [rbp+648h]
  __m128i v409; // [rsp+6D0h] [rbp+650h]
  __int64 v410; // [rsp+6E0h] [rbp+660h]
  unsigned __int64 v411; // [rsp+6E8h] [rbp+668h]
  __int64 v412; // [rsp+6F0h] [rbp+670h]
  char v413; // [rsp+6F8h] [rbp+678h]
  __int64 v414; // [rsp+AB8h] [rbp+A38h]
  __int64 v415; // [rsp+AC0h] [rbp+A40h]
  __int64 v416; // [rsp+AC8h] [rbp+A48h]
  __m128i v417; // [rsp+AD0h] [rbp+A50h]
  __int128 v418; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 v419; // [rsp+AF0h] [rbp+A70h]
  __int128 v420; // [rsp+B00h] [rbp+A80h]
  __int128 v421; // [rsp+B10h] [rbp+A90h]
  __int128 v422; // [rsp+B20h] [rbp+AA0h]
  __int64 v423; // [rsp+B30h] [rbp+AB0h]
  __m128i v424; // [rsp+B40h] [rbp+AC0h] BYREF
  __int128 v425; // [rsp+B50h] [rbp+AD0h]
  __int128 v426; // [rsp+B60h] [rbp+AE0h] BYREF
  __int64 v427; // [rsp+B70h] [rbp+AF0h]
  __m128i *v428; // [rsp+B78h] [rbp+AF8h]
  __m128i v429; // [rsp+B80h] [rbp+B00h] BYREF
  __int128 v430; // [rsp+B90h] [rbp+B10h] BYREF
  __int128 v431; // [rsp+BA0h] [rbp+B20h]
  __m128i v432; // [rsp+BB0h] [rbp+B30h] BYREF
  __int128 v433; // [rsp+BC0h] [rbp+B40h]
  __int64 v434; // [rsp+BD0h] [rbp+B50h]
  __int64 v435; // [rsp+BD8h] [rbp+B58h] BYREF
  _QWORD *v436; // [rsp+BE0h] [rbp+B60h]
  __int64 v437; // [rsp+BE8h] [rbp+B68h]
  __int64 v438; // [rsp+BF0h] [rbp+B70h]
  int v439; // [rsp+BF8h] [rbp+B78h]
  __m128i v440; // [rsp+C00h] [rbp+B80h] BYREF
  __m128i v441; // [rsp+C10h] [rbp+B90h]
  __int64 v442; // [rsp+C20h] [rbp+BA0h]
  int v443; // [rsp+C34h] [rbp+BB4h]
  __m128i *v444; // [rsp+C38h] [rbp+BB8h]
  __m128i v445; // [rsp+C40h] [rbp+BC0h] BYREF
  __int128 v446; // [rsp+C50h] [rbp+BD0h]
  __int64 v447; // [rsp+C60h] [rbp+BE0h]
  _QWORD *v448; // [rsp+C70h] [rbp+BF0h]
  _QWORD *v449; // [rsp+C78h] [rbp+BF8h]
  __m128i v450; // [rsp+C80h] [rbp+C00h] BYREF
  __int128 v451; // [rsp+C90h] [rbp+C10h]
  __int128 v452; // [rsp+CA0h] [rbp+C20h] BYREF
  _BYTE v453[24]; // [rsp+CB0h] [rbp+C30h] BYREF
  __int64 v454; // [rsp+CC8h] [rbp+C48h]
  char **v455; // [rsp+CD0h] [rbp+C50h] BYREF
  __m128i v456; // [rsp+CE0h] [rbp+C60h] BYREF
  __m128i v457; // [rsp+CF0h] [rbp+C70h]
  __m128i v458; // [rsp+D00h] [rbp+C80h]
  __m128i v459; // [rsp+D10h] [rbp+C90h]
  __m128i v460; // [rsp+D20h] [rbp+CA0h]
  __m128i v461; // [rsp+D30h] [rbp+CB0h] BYREF
  _QWORD *v462; // [rsp+D40h] [rbp+CC0h]
  char v463; // [rsp+D4Fh] [rbp+CCFh] BYREF
  HANDLE hObject; // [rsp+D50h] [rbp+CD0h] BYREF
  __int64 v465; // [rsp+D58h] [rbp+CD8h]
  unsigned __int64 v466; // [rsp+D60h] [rbp+CE0h]
  const __m128i *v467; // [rsp+D68h] [rbp+CE8h]
  __int64 v468; // [rsp+D70h] [rbp+CF0h]
  signed __int64 v469; // [rsp+D78h] [rbp+CF8h]
  __int64 v470; // [rsp+D80h] [rbp+D00h]
  __int64 v471; // [rsp+D88h] [rbp+D08h]
  unsigned __int64 v472; // [rsp+D90h] [rbp+D10h]
  __int64 v473; // [rsp+D98h] [rbp+D18h]
  char v474; // [rsp+DA3h] [rbp+D23h]
  char v475; // [rsp+DA4h] [rbp+D24h]
  char v476; // [rsp+DA5h] [rbp+D25h]
  char v477; // [rsp+DA6h] [rbp+D26h]
  char v478; // [rsp+DA7h] [rbp+D27h]
  __int64 v479; // [rsp+DA8h] [rbp+D28h]
  char v480; // [rsp+DB5h] [rbp+D35h]
  char v481; // [rsp+DB6h] [rbp+D36h]
  char v482; // [rsp+DB7h] [rbp+D37h]
  __int64 v483; // [rsp+DB8h] [rbp+D38h]

  v483 = -2;
  v479 = a3;
  sub_1416828D0(
    (unsigned int)&v456,
    a2[33],
    a2[34],
    (unsigned int)".account-domain.lockaccount state.account-transition.lockaccount transition",
    20);
  v468 = v456.m128i_i64[1];
  sub_140FE2210(
    (__int64)v405,
    v456.m128i_i32[2],
    v457.m128i_i32[0],
    (__int64)"account state.account-transition.lockaccount transition",
    13);
  v465 = a1;
  v7 = *(_QWORD *)v405;
  if ( *(_QWORD *)v405 != -1 )
  {
    *(_OWORD *)&v381[64] = *(_OWORD *)&v405[80];
    *(_OWORD *)&v381[48] = *(_OWORD *)&v405[64];
    *(_OWORD *)&v381[32] = *(_OWORD *)&v405[48];
    *(_OWORD *)&v381[16] = *(_OWORD *)&v405[32];
    *(__m128i *)v381 = _mm_loadu_si128((const __m128i *)&v405[16]);
  }
  v8 = *(void **)&v405[8];
  if ( v456.m128i_i64[0] )
    sub_140001660(v468, v456.m128i_i64[0], 1);
  if ( (_DWORD)v7 != -1 )
  {
    v9 = v465;
    *(_OWORD *)(v465 + 80) = *(_OWORD *)&v381[64];
    si128 = _mm_load_si128((const __m128i *)v381);
    v11 = *(_OWORD *)&v381[16];
    v12 = *(_OWORD *)&v381[32];
    *(_OWORD *)(v9 + 64) = *(_OWORD *)&v381[48];
    *(_OWORD *)(v9 + 48) = v12;
    *(_OWORD *)(v9 + 32) = v11;
    *(__m128i *)(v9 + 16) = si128;
    *(_QWORD *)v9 = v7;
    *(_QWORD *)(v9 + 8) = v8;
    return v9;
  }
  hObject = v8;
  sub_1401DECD0(v405, a2[37], a2[38]);
  v13 = v465;
  v14 = *(_QWORD *)v405;
  *(_OWORD *)v381 = *(_OWORD *)&v405[8];
  *(_OWORD *)&v381[16] = *(_OWORD *)&v405[24];
  *(_OWORD *)&v381[32] = *(_OWORD *)&v405[40];
  *(_OWORD *)&v381[48] = *(_OWORD *)&v405[56];
  *(_OWORD *)&v381[64] = *(_OWORD *)&v405[72];
  *(_QWORD *)&v381[80] = *(_QWORD *)&v405[88];
  if ( *(_QWORD *)v405 != -1 )
  {
    *(_QWORD *)(v465 + 88) = *(_QWORD *)&v381[80];
    *(_OWORD *)(v13 + 72) = *(_OWORD *)&v381[64];
    v15 = _mm_load_si128((const __m128i *)v381);
    v16 = *(_OWORD *)&v381[16];
    v17 = *(_OWORD *)&v381[32];
    *(_OWORD *)(v13 + 56) = *(_OWORD *)&v381[48];
    *(_OWORD *)(v13 + 40) = v17;
    *(_OWORD *)(v13 + 24) = v16;
    *(__m128i *)(v13 + 8) = v15;
    *(_QWORD *)v13 = v14;
LABEL_465:
    v283 = sub_141412E80(&hObject);
    if ( v283 && (unsigned int)(v283 & 3) - 2 >= 2 && (v283 & 3) != 0 )
    {
      *(_QWORD *)&v405[8] = v283 - 1;
      v405[0] = 3;
      sub_1416BCB00(&v405[8]);
    }
    goto LABEL_559;
  }
  v434 = *(_QWORD *)&v381[80];
  v433 = *(_OWORD *)&v381[64];
  v18 = _mm_load_si128((const __m128i *)v381);
  v432 = *(__m128i *)&v381[48];
  v431 = *(_OWORD *)&v381[32];
  v430 = *(_OWORD *)&v381[16];
  v429 = v18;
  v19 = v18.m128i_i64[1];
  v20 = 424LL * *(_QWORD *)&v381[16];
  v21 = (const __m128i *)sub_1402928C0(0);
  if ( !v21 )
    sub_141937FD0(&off_141A229A8);
  v22 = _mm_loadu_si128(v21);
  ++v21->m128i_i64[0];
  v23 = _mm_loadu_si128((const __m128i *)&xmmword_141A52790);
  *(__m128i *)&v405[16] = v23;
  v24 = _mm_loadu_si128((const __m128i *)&off_141A52780);
  *(__m128i *)v405 = v24;
  *(__m128i *)&v405[32] = v22;
  *(_QWORD *)v381 = v19;
  *(_QWORD *)&v381[8] = v19 + v20;
  *(_QWORD *)&v381[16] = a2;
  sub_140391EF0(v405, v381);
  v424 = _mm_load_si128((const __m128i *)v405);
  v425 = *(_OWORD *)&v405[16];
  v426 = *(_OWORD *)&v405[32];
  v25 = *(_QWORD **)(v479 + 880);
  v26 = *(_QWORD *)(v479 + 888);
  v448 = a2;
  if ( !v26 )
  {
    v46 = 0;
    v45 = v479;
    goto LABEL_31;
  }
  v27 = &v25[48 * v26];
  v473 = *((_QWORD *)&v425 + 1);
  v28 = v424.m128i_i64[1];
  __SET_PAIR__(v469, v29, *(_OWORD *)&v424);
  v471 = v424.m128i_i64[0];
  do
  {
    if ( *((_DWORD *)v25 + 40) != 2 )
    {
      v30 = v25[22];
      if ( v30 == -1 )
        goto LABEL_12;
      v468 = v25[23];
      if ( !v473 )
        goto LABEL_27;
      v31 = v25[28];
      v32 = v25[24];
      v470 = v25[27];
      v472 = v31;
      v33 = sub_140D2CC10(&v426, v470, v31);
      _RCX = v33 >> 57;
      v35 = _mm_cvtsi32_si128(v33 >> 57);
      v36 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v35, v35), 0), 68);
      for ( i = nullptr; ; ++i )
      {
        v38 = v28 & v33;
        v39 = _mm_loadu_si128((const __m128i *)(v29 + v38));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v39, v36));
        if ( _R12D )
          break;
LABEL_23:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v39, (__m128i)-1LL));
        v29 = v471;
        if ( (_DWORD)_RCX )
          goto LABEL_27;
        v33 = (unsigned __int64)i[1].m128i_u64 + v38;
      }
      v466 = v38;
      v467 = i;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r12d }
        _RCX = -(__int64)(v28 & (v38 + _RCX));
        v41 = v471;
        if ( v472 == *(_QWORD *)(v471 + 48 * _RCX - 32) )
        {
          v42 = v471 + 48 * _RCX;
          if ( !(unsigned int)sub_1418F4B70(v470, *(_QWORD *)(v42 - 40)) )
            break;
        }
        v43 = _R12D - 1;
        LOWORD(v43) = _R12D & (_R12D - 1);
        v44 = (_WORD)v43 == 0;
        _R12D = v43;
        v38 = v466;
        v28 = v469;
        i = v467;
        if ( v44 )
          goto LABEL_23;
      }
      v29 = v41;
      v28 = v469;
      if ( *(_QWORD *)(v42 - 8) != v32 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v42 - 16), v468) )
      {
LABEL_27:
        if ( v30 )
          sub_140001660(v468, v30, 1);
LABEL_12:
        v25[20] = 2;
      }
    }
    v25 += 48;
  }
  while ( v25 != v27 );
  v45 = v479;
  v25 = *(_QWORD **)(v479 + 880);
  v46 = *(_QWORD *)(v479 + 888);
LABEL_31:
  v47 = (_QWORD *)(v45 + 872);
  v48 = v25 - 48;
  v49 = 384 * v46;
  while ( v49 )
  {
    v49 -= 384;
    v44 = *((_BYTE *)v48 + 753) == 0;
    v48 += 48;
    if ( !v44 )
    {
      sub_140286DE0(v405);
      v50 = *(_QWORD *)v405;
      sub_1418F44E0((__m128i *)v381, (const __m128i *)&v405[8], 0x178u);
      v51 = (__m128i *)(v479 + 152);
      if ( *(_DWORD *)(v479 + 152) == 2 )
        goto LABEL_38;
      goto LABEL_37;
    }
  }
  v50 = 2;
  v51 = (__m128i *)(v479 + 152);
  if ( *(_DWORD *)(v479 + 152) == 2 )
    goto LABEL_38;
LABEL_37:
  sub_140034430(v51);
LABEL_38:
  v52 = (__m128i *)v479;
  *(_QWORD *)(v479 + 152) = v50;
  sub_1418F44E0(v52 + 10, (const __m128i *)v381, 0x178u);
  v53 = v448[69];
  v54 = v448[70];
  sub_14021B0F0(&v377, v53, v54);
  v415 = v53;
  v416 = v54;
  if ( v377 == -1 )
  {
    v57 = _mm_loadu_si128(&v378);
    v446 = v379;
    v55 = v380;
    v447 = v380;
    v445 = v57;
    v56 = *((_QWORD *)&v379 + 1);
  }
  else
  {
    LODWORD(v447) = 3;
    v445.m128i_i64[0] = 0;
    v445.m128i_i64[1] = 8;
    v446 = 0;
    sub_1401954F0(&v377);
    v55 = 3;
    v56 = 0;
  }
  v449 = v47;
  v428 = v51;
  sub_1403F2D20(&v435, &v445);
  v439 = v55;
  v438 = v56;
  v467 = *((const __m128i **)&v425 + 1);
  v468 = v424.m128i_i64[1];
  v58 = v424.m128i_i64[0];
  v59 = *(_QWORD *)(v479 + 848);
  v473 = v424.m128i_i64[0];
  if ( v59 )
  {
    v60 = *(_QWORD **)(v479 + 840);
    v61 = 192 * v59;
    if ( v467 )
    {
      v62 = &v60[(unsigned __int64)v61 / 8];
      do
      {
        if ( *((_DWORD *)v60 + 24) != 2 )
        {
          v63 = v60[14];
          if ( v63 == -1 )
          {
LABEL_44:
            v60[12] = 2;
            *v60 = 0;
          }
          else
          {
            v64 = v60[19];
            v65 = v60[20];
            v472 = v60[15];
            v470 = v60[16];
            v471 = v64;
            v66 = sub_140D2CC10(&v426, v64, v65);
            _RCX = v66 >> 57;
            v68 = _mm_cvtsi32_si128(v66 >> 57);
            v69 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v68, v68), 0), 68);
            for ( j = 0; ; j += 16LL )
            {
              v71 = v468 & v66;
              v72 = _mm_loadu_si128((const __m128i *)(v58 + v71));
              _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v72, v69));
              if ( _R13D )
                break;
LABEL_54:
              _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v72, (__m128i)-1LL));
              v58 = v473;
              if ( (_DWORD)_RCX )
                goto LABEL_58;
              v66 = j + v71 + 16;
            }
            v469 = v71;
            v466 = j;
            while ( 1 )
            {
              __asm { tzcnt   ecx, r13d }
              _RCX = -(__int64)(v468 & (v71 + _RCX));
              v58 = v473;
              if ( v65 == *(_QWORD *)(v473 + 48 * _RCX - 32) )
              {
                v74 = v473 + 48 * _RCX;
                if ( !(unsigned int)sub_1418F4B70(v471, *(_QWORD *)(v74 - 40)) )
                  break;
              }
              v75 = _R13D - 1;
              LOWORD(v75) = _R13D & (_R13D - 1);
              v44 = (_WORD)v75 == 0;
              _R13D = v75;
              v71 = v469;
              j = v466;
              if ( v44 )
                goto LABEL_54;
            }
            if ( *(_QWORD *)(v74 - 8) != v470 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v74 - 16), v472) )
            {
LABEL_58:
              if ( v63 )
                sub_140001660(v472, v63, 1);
              goto LABEL_44;
            }
          }
        }
        v60 += 24;
      }
      while ( v60 != v62 );
    }
    else
    {
      v76 = 0;
      do
      {
        if ( LODWORD(v60[v76 / 8 + 12]) != 2 )
        {
          v77 = v60[v76 / 8 + 14];
          if ( v77 != -1 && v77 )
            sub_140001660(v60[v76 / 8 + 15], v77, 1);
          v60[v76 / 8 + 12] = 2;
          v60[v76 / 8] = 0;
        }
        v76 += 192LL;
      }
      while ( v61 != v76 );
    }
  }
  if ( v437 )
  {
    v78 = v436;
    v79 = 192 * v437;
    if ( v467 )
    {
      v80 = &v436[(unsigned __int64)v79 / 8];
      do
      {
        if ( *((_DWORD *)v78 + 24) != 2 )
        {
          v81 = v78[14];
          if ( v81 == -1 )
          {
LABEL_70:
            v78[12] = 2;
            *v78 = 0;
          }
          else
          {
            v82 = v78[19];
            v83 = v78[20];
            v472 = v78[15];
            v470 = v78[16];
            v471 = v82;
            v84 = sub_140D2CC10(&v426, v82, v83);
            v85 = _mm_cvtsi32_si128(v84 >> 57);
            v86 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v85, v85), 0), 68);
            for ( k = 0; ; k += 16LL )
            {
              v88 = v468 & v84;
              HIDWORD(_RAX) = HIDWORD(v473);
              v90 = _mm_loadu_si128((const __m128i *)(v473 + v88));
              _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v90, v86));
              if ( _R12D )
                break;
LABEL_80:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v90, (__m128i)-1LL)) )
                goto LABEL_84;
              v84 = k + v88 + 16;
            }
            v469 = k;
            while ( 1 )
            {
              __asm { tzcnt   eax, r12d }
              if ( v83 == *(_QWORD *)(v473 - 48 * (v468 & (v88 + _RAX)) - 32) )
              {
                v92 = v473 - 48 * (v468 & (v88 + _RAX));
                if ( !(unsigned int)sub_1418F4B70(v471, *(_QWORD *)(v92 - 40)) )
                  break;
              }
              _RAX = (unsigned int)(_R12D - 1);
              LOWORD(_RAX) = _R12D & (_R12D - 1);
              _R12D = _RAX;
              k = v469;
              if ( !(_WORD)_RAX )
                goto LABEL_80;
            }
            if ( *(_QWORD *)(v92 - 8) != v470 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v92 - 16), v472) )
            {
LABEL_84:
              if ( v81 )
                sub_140001660(v472, v81, 1);
              goto LABEL_70;
            }
          }
        }
        v78 += 24;
      }
      while ( v78 != v80 );
    }
    else
    {
      v93 = 0;
      do
      {
        if ( LODWORD(v78[v93 / 8 + 12]) != 2 )
        {
          v94 = v78[v93 / 8 + 14];
          if ( v94 != -1 && v94 )
            sub_140001660(v78[v93 / 8 + 15], v94, 1);
          v78[v93 / 8 + 12] = 2;
          v78[v93 / 8] = 0;
        }
        v93 += 192LL;
      }
      while ( v79 != v93 );
    }
  }
  v95 = v434;
  v469 = *((_QWORD *)&v433 + 1);
  if ( *((_QWORD *)&v430 + 1) == -1 )
    v456.m128i_i64[0] = -1;
  else
    sub_1416AC440(&v456, (char *)&v430 + 8);
  sub_1403F21D0(v381, &v429);
  if ( (_BYTE)v433 != 2 )
  {
    *(__m128i *)v453 = _mm_load_si128(&v432);
    v450.m128i_i32[0] = *(_DWORD *)((char *)&v433 + 1);
    *(__int32 *)((char *)v450.m128i_i32 + 3) = DWORD1(v433);
  }
  *(_QWORD *)&v405[72] = v469;
  *(__m128i *)&v405[24] = v456;
  *(_QWORD *)&v405[40] = v457.m128i_i64[0];
  *(_OWORD *)v405 = *(_OWORD *)v381;
  *(_QWORD *)&v405[16] = *(_QWORD *)&v381[16];
  *(__m128i *)&v405[48] = _mm_load_si128((const __m128i *)v453);
  v405[64] = v433;
  v96 = *(unsigned int *)((char *)v450.m128i_u32 + 3);
  *(_DWORD *)&v405[65] = v450.m128i_i32[0];
  *(_DWORD *)&v405[68] = *(__int32 *)((char *)v450.m128i_i32 + 3);
  v405[84] = BYTE4(v434);
  if ( *(_DWORD *)(v479 + 824) > v95 )
    v95 = *(_DWORD *)(v479 + 824);
  v97 = 4;
  if ( v95 >= 5 )
    v97 = (unsigned int)v95;
  *(_DWORD *)&v405[80] = v97;
  if ( (_BYTE)v433 == 2 )
  {
    v98 = *(_BYTE *)(v479 + 808);
    if ( v98 == 2 )
    {
      v99 = 0xA0000000FLL;
      v98 = 0;
      v100 = 0;
    }
    else
    {
      v100 = *(_QWORD *)(v479 + 792);
      v99 = *(_QWORD *)(v479 + 800);
      *(_DWORD *)&v453[3] = *(_DWORD *)(v479 + 812);
      *(_DWORD *)v453 = *(_DWORD *)(v479 + 809);
    }
    *(_QWORD *)&v405[48] = v100;
    *(_QWORD *)&v405[56] = v99;
    v405[64] = v98;
    v97 = *(unsigned int *)v453;
    v96 = *(unsigned int *)&v453[3];
    *(_DWORD *)&v405[68] = *(_DWORD *)&v453[3];
    *(_DWORD *)&v405[65] = *(_DWORD *)v453;
  }
  if ( BYTE4(v434) == 2 )
  {
    v101 = 1;
    if ( (unsigned __int8)*(_DWORD *)(v479 + 828) != 2 )
      v101 = *(_DWORD *)(v479 + 828);
    v405[84] = v101;
  }
  v462 = (_QWORD *)(v479 + 832);
  v102 = v479 + 744;
  v444 = (__m128i *)(v479 + 744);
  v103 = *(_QWORD *)&v405[8];
  v104 = *(_QWORD *)&v405[8] + 424LL * *(_QWORD *)&v405[16];
  v105 = *(_QWORD *)(v479 + 752);
  v470 = *(_QWORD *)(v479 + 760);
  v106 = 424 * v470;
  v473 = 0;
  v471 = v104;
  while ( 2 )
  {
    if ( v103 == v104 )
      goto LABEL_254;
    v107 = v103;
    if ( !v470 )
      goto LABEL_254;
LABEL_117:
    v468 = v107 + 424;
    v108 = *(_QWORD *)(v107 + 200);
    v109 = *(_QWORD *)(v107 + 208);
    v110 = 0;
LABEL_119:
    if ( *(_QWORD *)(v105 + v110 + 208) == v109 && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v105 + v110 + 200), v108) )
    {
      v111 = *(unsigned __int8 *)(v105 + v110 + 418);
      if ( (_BYTE)v111 != 0xFF && *(_BYTE *)(v105 + v110) )
      {
        v112 = *(_QWORD *)(v105 + v110 + 8);
        v113 = sub_1402C0B10(*(_QWORD *)(v105 + v110 + 296), *(_QWORD *)(v105 + v110 + 304));
        v114 = sub_14020E290(v107, v113, v111, v112);
        LOBYTE(v114) = (v473 | v114) & 1;
        goto LABEL_133;
      }
      if ( *(_BYTE *)(v107 + 418) == 0xFF )
      {
        v115 = *(_DWORD **)(v105 + v110 + 296);
        v116 = *(_QWORD *)(v105 + v110 + 304);
        sub_140E91160(v115, v116);
        if ( v117 )
        {
          if ( (v116 != 7 || *v115 ^ 0x6E6B6E75 | *(_DWORD *)((char *)v115 + 3) ^ 0x6E776F6E)
            && (*(_QWORD *)(v107 + 304) != v116 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v107 + 296), v115)) )
          {
            sub_1416AC440(v381, v105 + v110 + 288);
            v118 = *(_QWORD *)(v107 + 288);
            if ( v118 )
              sub_140001660(*(_QWORD *)(v107 + 296), v118, 1);
            v114 = *(_QWORD *)&v381[16];
            *(_QWORD *)(v107 + 304) = *(_QWORD *)&v381[16];
            *(__m128i *)(v107 + 288) = _mm_loadu_si128((const __m128i *)v381);
            LOBYTE(v114) = 1;
LABEL_133:
            v473 = v114;
          }
        }
      }
      if ( *(_QWORD *)(v105 + v110 + 336) != -1
        && (*(_QWORD *)(v107 + 336) == -1
         || *(_QWORD *)(v107 + 352) != *(_QWORD *)(v105 + v110 + 352)
         || (unsigned int)sub_1418F4B70(*(_QWORD *)(v107 + 344), *(_QWORD *)(v105 + v110 + 344))) )
      {
        sub_1416AC440(v381, v105 + v110 + 336);
        v119 = *(_QWORD *)v381;
        v120 = &v381[8];
        v456 = *(__m128i *)&v381[8];
        v121 = *(_QWORD *)(v107 + 336);
        if ( v121 != -1 && v121 )
          v120 = (_BYTE *)sub_140001660(*(_QWORD *)(v107 + 344), v121, 1);
        *(_QWORD *)(v107 + 336) = v119;
        *(__m128i *)(v107 + 344) = _mm_load_si128(&v456);
        LOBYTE(v120) = 1;
        v473 = (__int64)v120;
      }
      if ( *(_QWORD *)(v105 + v110 + 360) != -1
        && (*(_QWORD *)(v107 + 360) == -1
         || *(_QWORD *)(v107 + 376) != *(_QWORD *)(v105 + v110 + 376)
         || (unsigned int)sub_1418F4B70(*(_QWORD *)(v107 + 368), *(_QWORD *)(v105 + v110 + 368))) )
      {
        sub_1416AC440(v381, v105 + v110 + 360);
        v122 = *(_QWORD *)v381;
        v123 = &v381[8];
        v456 = *(__m128i *)&v381[8];
        v124 = *(_QWORD *)(v107 + 360);
        if ( v124 != -1 && v124 )
          v123 = (_BYTE *)sub_140001660(*(_QWORD *)(v107 + 368), v124, 1);
        *(_QWORD *)(v107 + 360) = v122;
        *(__m128i *)(v107 + 368) = _mm_load_si128(&v456);
        LOBYTE(v123) = 1;
        v473 = (__int64)v123;
      }
      if ( *(_QWORD *)(v107 + 384) == -1 && *(_QWORD *)(v105 + v110 + 384) != -1 )
      {
        sub_1416AC440(v381, v105 + v110 + 384);
        v125 = *(_QWORD *)v381;
        v126 = &v381[8];
        v456 = *(__m128i *)&v381[8];
        v127 = *(_QWORD *)(v107 + 384);
        if ( v127 != -1 && v127 )
          v126 = (_BYTE *)sub_140001660(*(_QWORD *)(v107 + 392), v127, 1);
        *(_QWORD *)(v107 + 384) = v125;
        *(__m128i *)(v107 + 392) = _mm_load_si128(&v456);
        LOBYTE(v126) = 1;
        v473 = (__int64)v126;
      }
      if ( *(_QWORD *)(v107 + 64)
        || *(_BYTE *)(v105 + v110 + 64)
        || *(_BYTE *)(v107 + 419) != 0xFF
        || *(_BYTE *)(v105 + v110 + 419) != 0xFF
        || *(_BYTE *)(v107 + 48) )
      {
        LODWORD(v472) = 0;
        if ( *(_DWORD *)(v105 + v110 + 32) == 1 )
          goto LABEL_162;
        goto LABEL_167;
      }
      LODWORD(v472) = *(_BYTE *)(v105 + v110 + 48) ^ 1;
      if ( *(_DWORD *)(v105 + v110 + 32) != 1 )
        goto LABEL_167;
LABEL_162:
      v128 = *(_QWORD *)(v105 + v110 + 40);
      v129 = *(_QWORD *)(v107 + 32);
      v130 = *(_QWORD *)(v107 + 40);
      sub_141406CE0(v381);
      v131 = (*(int *)v381 >> 13) - 1;
      v132 = 0;
      if ( *(int *)v381 >> 13 <= 0 )
      {
        v133 = (1 - (*(int *)v381 >> 13)) / 0x190u + 1;
        v131 += 400 * v133;
        v132 = -146097 * v133;
      }
      v134 = *(unsigned int *)&v381[8] / 0xF4240uLL
           + 1000
           * (*(unsigned int *)&v381[4]
            + 86400LL
            * (((v131 / 100) >> 2) + ((1461 * v131) >> 2) + v132 + ((*(_DWORD *)v381 >> 4) & 0x1FF) - v131 / 100 - 719163))
           + 1000;
      v135 = 1000 * v128;
      v96 = 0x2540BE3FFLL;
      if ( (unsigned __int64)(v128 - 1) >= 0x2540BE3FFLL )
        v135 = v128;
      if ( v135 > v134 )
        goto LABEL_167;
      if ( !v129 )
        goto LABEL_184;
      v96 = v130 - 1;
      v145 = 1000 * v130;
      if ( (unsigned __int64)(v130 - 1) >= 0x2540BE3FFLL )
        v145 = v130;
      if ( v135 <= v145 && v145 <= v134 )
      {
LABEL_167:
        if ( *(_DWORD *)(v105 + v110 + 48) != 1 )
          goto LABEL_185;
      }
      else
      {
LABEL_184:
        *(__m128i *)(v107 + 32) = _mm_loadu_si128((const __m128i *)(v105 + v110 + 32));
        LOBYTE(v134) = 1;
        v473 = v134;
        if ( *(_DWORD *)(v105 + v110 + 48) != 1 )
          goto LABEL_185;
      }
      v136 = *(_QWORD *)(v105 + v110 + 56);
      v137 = *(_QWORD *)(v107 + 48);
      v138 = *(_QWORD *)(v107 + 56);
      sub_141406CE0(v381);
      v139 = (*(int *)v381 >> 13) - 1;
      v140 = 0;
      if ( *(int *)v381 >> 13 <= 0 )
      {
        v141 = (1 - (*(int *)v381 >> 13)) / 0x190u + 1;
        v139 += 400 * v141;
        v140 = -146097 * v141;
      }
      v142 = *(unsigned int *)&v381[8] / 0xF4240uLL
           + 1000
           * (*(unsigned int *)&v381[4]
            + 86400LL
            * (((v139 / 100) >> 2) + ((1461 * v139) >> 2) + v140 + ((*(_DWORD *)v381 >> 4) & 0x1FF) - v139 / 100 - 719163))
           + 1000;
      v143 = 1000 * v136;
      v96 = 0x2540BE3FFLL;
      if ( (unsigned __int64)(v136 - 1) >= 0x2540BE3FFLL )
        v143 = v136;
      if ( v143 <= v142 )
      {
        if ( !v137 )
          goto LABEL_178;
        v96 = v138 - 1;
        v144 = 1000 * v138;
        if ( (unsigned __int64)(v138 - 1) >= 0x2540BE3FFLL )
          v144 = v138;
        if ( v143 > v144 || v144 > v142 )
        {
LABEL_178:
          *(__m128i *)(v107 + 48) = _mm_loadu_si128((const __m128i *)(v105 + v110 + 48));
          LOBYTE(v142) = 1;
          v473 = v142;
        }
      }
LABEL_185:
      v146 = 0x2010100u >> (8 * (*(_BYTE *)(v107 + 419) + 1));
      v147 = 0x2010100u >> (8 * (*(_BYTE *)(v105 + v110 + 419) + 1));
      if ( (_BYTE)v147 == (_BYTE)v146 )
      {
        if ( !*(_BYTE *)(v105 + v110 + 64) )
          goto LABEL_197;
        v148 = *(_QWORD *)(v105 + v110 + 72);
        v149 = *(_QWORD *)(v107 + 64);
        v150 = *(_QWORD *)(v107 + 72);
        sub_141406CE0(v381);
        v151 = (*(int *)v381 >> 13) - 1;
        v152 = 0;
        if ( *(int *)v381 >> 13 <= 0 )
        {
          v153 = (1 - (*(int *)v381 >> 13)) / 0x190u + 1;
          v151 += 400 * v153;
          v152 = -146097 * v153;
        }
        v154 = *(unsigned int *)&v381[8] / 0xF4240uLL
             + 1000
             * (*(unsigned int *)&v381[4]
              + 86400LL
              * (((v151 / 100) >> 2)
               + ((1461 * v151) >> 2)
               + v152
               + ((*(_DWORD *)v381 >> 4) & 0x1FF)
               - v151 / 100
               - 719163))
             + 1000;
        v155 = 1000 * v148;
        v96 = 0x2540BE3FFLL;
        if ( (unsigned __int64)(v148 - 1) >= 0x2540BE3FFLL )
          v155 = v148;
        if ( v155 > v154 )
          goto LABEL_197;
        if ( v149 )
        {
          v96 = v150 - 1;
          v156 = 1000 * v150;
          if ( (unsigned __int64)(v150 - 1) >= 0x2540BE3FFLL )
            v156 = v150;
          if ( v155 <= v156 && v156 <= v154 )
          {
LABEL_197:
            if ( (_BYTE)v472 )
            {
              v157 = *(unsigned __int8 *)(v105 + v110 + 416);
              v104 = v471;
              v103 = v107 + 424;
              if ( (_BYTE)v157 != 2 && *(_BYTE *)(v107 + 416) != (_BYTE)v157 )
              {
                *(_BYTE *)(v107 + 416) = v157;
                LOBYTE(v157) = 1;
                v473 = v157;
              }
              if ( *(_QWORD *)(v105 + v110 + 16) )
              {
                v158 = *(_QWORD *)(v105 + v110 + 24);
                if ( *(_DWORD *)(v107 + 16) != 1 || *(_QWORD *)(v107 + 24) != v158 )
                {
                  *(_QWORD *)(v107 + 16) = 1;
                  *(_QWORD *)(v107 + 24) = v158;
                  LOBYTE(v158) = 1;
                  v473 = v158;
                }
              }
              v159 = *(unsigned __int8 *)(v105 + v110 + 417);
              if ( (_BYTE)v159 != 2 && *(_BYTE *)(v107 + 417) != (_BYTE)v159 )
              {
                *(_BYTE *)(v107 + 417) = v159;
                goto LABEL_233;
              }
            }
            else
            {
              v104 = v471;
              v103 = v107 + 424;
            }
            goto LABEL_234;
          }
        }
      }
      else if ( (unsigned __int8)v147 <= (unsigned __int8)v146 )
      {
        goto LABEL_197;
      }
      v160 = *(_BYTE *)(v107 + 416);
      v161 = *(_BYTE *)(v105 + v110 + 416);
      if ( v160 == 2 )
      {
        v104 = v471;
        v103 = v107 + 424;
        if ( v161 != 2 )
        {
LABEL_232:
          *(_BYTE *)(v107 + 416) = v161;
          *(_OWORD *)(v107 + 16) = *(_OWORD *)(v105 + v110 + 16);
          *(_BYTE *)(v107 + 417) = *(_BYTE *)(v105 + v110 + 417);
          v159 = *(unsigned __int8 *)(v105 + v110 + 419);
          *(_BYTE *)(v107 + 419) = v159;
          *(__m128i *)(v107 + 64) = _mm_loadu_si128((const __m128i *)(v105 + v110 + 64));
LABEL_233:
          LOBYTE(v159) = 1;
          v473 = v159;
LABEL_234:
          v168 = *(_QWORD *)(v105 + v110 + 80);
          v169 = *(_QWORD *)(v105 + v110 + 88);
          if ( *(_BYTE *)(v107 + 80) )
          {
            v96 = *(_QWORD *)(v107 + 88);
            v170 = v96;
            if ( v169 > v96 )
              v170 = *(_QWORD *)(v105 + v110 + 88);
            if ( !v168 || v96 >= v169 )
            {
LABEL_242:
              v97 = *(_QWORD *)(v105 + v110 + 96);
              v102 = *(_QWORD *)(v105 + v110 + 104);
              if ( *(_DWORD *)(v107 + 96) == 1 )
              {
                v96 = *(_QWORD *)(v107 + 104);
                v171 = v96;
                if ( v102 > v96 )
                  v171 = *(_QWORD *)(v105 + v110 + 104);
                if ( v97 && v96 < v102 )
                {
LABEL_112:
                  *(_QWORD *)(v107 + 96) = 1;
                  *(_QWORD *)(v107 + 104) = v171;
                  LOBYTE(v171) = 1;
                  v473 = v171;
                  continue;
                }
              }
              else
              {
                v171 = *(_QWORD *)(v105 + v110 + 104);
                if ( v97 )
                  goto LABEL_112;
              }
              continue;
            }
          }
          else
          {
            v170 = *(_QWORD *)(v105 + v110 + 88);
            if ( !v168 )
              goto LABEL_242;
          }
          *(_QWORD *)(v107 + 80) = 1;
          *(_QWORD *)(v107 + 88) = v170;
          LOBYTE(v170) = 1;
          v473 = v170;
          goto LABEL_242;
        }
      }
      else
      {
        v104 = v471;
        v103 = v107 + 424;
        if ( v160 != v161 )
          goto LABEL_232;
      }
      v162 = *(_BYTE *)(v105 + v110 + 16);
      if ( *(_DWORD *)(v107 + 16) == 1 )
      {
        if ( !v162 || *(_QWORD *)(v107 + 24) != *(_QWORD *)(v105 + v110 + 24) )
          goto LABEL_231;
LABEL_219:
        v163 = *(_BYTE *)(v107 + 417);
        v164 = *(_BYTE *)(v105 + v110 + 417);
        if ( v163 == 2 )
        {
          if ( v164 == 2 )
          {
LABEL_223:
            v165 = *(_BYTE *)(v107 + 419);
            v166 = *(_BYTE *)(v105 + v110 + 419);
            if ( v165 == -1 )
            {
              if ( v166 == -1 )
              {
LABEL_227:
                v167 = *(_BYTE *)(v105 + v110 + 64);
                if ( *(_DWORD *)(v107 + 64) != 1 )
                {
                  v161 = *(_BYTE *)(v107 + 416);
                  if ( !v167 )
                    goto LABEL_234;
                  goto LABEL_232;
                }
                if ( v167 )
                {
                  v161 = *(_BYTE *)(v107 + 416);
                  if ( *(_QWORD *)(v107 + 72) == *(_QWORD *)(v105 + v110 + 72) )
                    goto LABEL_234;
                  goto LABEL_232;
                }
              }
            }
            else if ( v165 == v166 )
            {
              goto LABEL_227;
            }
          }
        }
        else if ( v163 == v164 )
        {
          goto LABEL_223;
        }
      }
      else if ( !v162 )
      {
        goto LABEL_219;
      }
LABEL_231:
      v161 = *(_BYTE *)(v107 + 416);
      goto LABEL_232;
    }
    break;
  }
  v110 += 424;
  if ( v106 != v110 )
    goto LABEL_119;
  v107 = v468;
  if ( v468 != v104 )
    goto LABEL_117;
LABEL_254:
  if ( (v473 & 1) != 0 )
  {
    v456.m128i_i32[0] = sub_141683E80(v102, v97, v96);
    v456.m128i_i32[1] = v172;
    sub_141683E30(v381, &v456, 3577643008LL, 27111902);
    if ( v381[0] )
      v173 = 0;
    else
      v173 = *(_QWORD *)&v381[8];
    if ( v469 > v173 )
      v173 = v469;
    v102 = *(_QWORD *)(v479 + 816);
    if ( v102 > v173 )
      v173 = *(_QWORD *)(v479 + 816);
    *(_QWORD *)&v405[72] = v173;
  }
  v423 = *(_QWORD *)&v405[80];
  v422 = *(_OWORD *)&v405[64];
  v421 = *(_OWORD *)&v405[48];
  v420 = *(_OWORD *)&v405[32];
  v419 = *(_OWORD *)&v405[16];
  v418 = *(_OWORD *)v405;
  v174 = *(_QWORD *)&v405[8];
  v175 = *(_QWORD *)&v405[16];
  v176 = sub_14167F170(v102);
  v181 = v176;
  if ( *(_BYTE *)(v176 + 16) == 1 )
  {
    v182 = *(_OWORD *)v176;
  }
  else
  {
    *(_QWORD *)&v182 = sub_141696260(v178, v177, v179, v180);
    *(_OWORD *)v181 = v182;
    *(_BYTE *)(v181 + 16) = 1;
  }
  *(_QWORD *)v181 = v182 + 1;
  *(_OWORD *)&v405[16] = xmmword_1419D6520;
  *(_OWORD *)v405 = *(_OWORD *)&off_1419D6510;
  *(_OWORD *)&v405[32] = v182;
  if ( v175 )
  {
    LOBYTE(v180) = 1;
    sub_141930360(v405, v175, &v405[32], v180);
    for ( m = 0; m != v175; ++m )
    {
      sub_1416AC440(v381, v174 + 424 * m + 192);
      sub_1403AAB80(v405, v381);
    }
  }
  v183 = *(__m128 *)&v405[16];
  *(_OWORD *)&v381[32] = *(_OWORD *)&v405[32];
  *(_OWORD *)&v381[16] = *(_OWORD *)&v405[16];
  *(_OWORD *)v381 = *(_OWORD *)v405;
  v184 = v439;
  v185 = v438;
  sub_1403F2D20(v405, &v435);
  v427 = v185;
  v457.m128i_i64[1] = v185;
  v456 = *(__m128i *)v405;
  v186 = *(_QWORD *)&v405[16];
  v457.m128i_i64[0] = *(_QWORD *)&v405[16];
  if ( *(_DWORD *)(v479 + 864) > v184 )
    v184 = *(_DWORD *)(v479 + 864);
  if ( v184 < 2 )
    v184 = 1;
  v458.m128i_i32[0] = v184;
  sub_14037C790(&v456, v381);
  LOBYTE(v470) = v457.m128i_i64[0] != v186;
  v190 = *(_QWORD *)(v479 + 840);
  v468 = v190 + 192LL * *(_QWORD *)(v479 + 848);
LABEL_271:
  v191 = *(_QWORD *)&v381[24];
  v193 = *(_QWORD *)&v381[8];
  v192 = *(_QWORD *)v381;
  while ( v190 != v468 )
  {
    if ( v191 )
    {
      v199 = sub_140D2AC70(&v381[32], v190 + 144);
      _RCX = v199 >> 57;
      v200 = _mm_cvtsi32_si128(v199 >> 57);
      v201 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v200, v200), 0), 68);
      v202 = *(_QWORD *)(v190 + 152);
      v203 = *(_QWORD *)(v190 + 160);
      for ( n = 0; ; n += 16LL )
      {
        v194 = v193;
        v195 = v193 & v199;
        v196 = _mm_loadu_si128((const __m128i *)(v192 + v195));
        _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v196, v201));
        if ( _R15D )
          break;
LABEL_277:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v196, (__m128i)-1LL));
        v193 = v194;
        if ( (_DWORD)_RCX )
          goto LABEL_282;
        v199 = n + v195 + 16;
      }
      v473 = v195;
      v472 = n;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r15d }
        _RCX = -(__int64)(v194 & (v195 + _RCX));
        if ( v203 == *(_QWORD *)(v192 + 24 * _RCX - 8)
          && !(unsigned int)sub_1418F4B70(v202, *(_QWORD *)(v192 + 24 * _RCX - 16)) )
        {
          break;
        }
        v198 = _R15D - 1;
        LOWORD(v198) = _R15D & (_R15D - 1);
        v44 = (_WORD)v198 == 0;
        _R15D = v198;
        v195 = v473;
        n = v472;
        if ( v44 )
          goto LABEL_277;
      }
      v473 = v190 + 192;
      if ( v457.m128i_i64[0] )
      {
        v204 = 192 * v457.m128i_i64[0];
        v205 = v456.m128i_i64[1] + 112;
        while ( *(_QWORD *)(v205 + 48) != v203 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v205 + 40), v202) )
        {
          v205 += 192;
          v204 -= 192;
          if ( !v204 )
            goto LABEL_295;
        }
        sub_1416AC440(&v450, v205 + 32);
        v207 = *(_QWORD *)(v205 - 96);
        if ( v207 != 2 )
        {
          v201.m128i_i64[0] = *(_QWORD *)(v205 - 72);
          LODWORD(v466) = *(_DWORD *)(v205 - 64);
          v196.m128i_i64[0] = *(_QWORD *)(v205 - 80);
          v467 = *(const __m128i **)(v205 - 88);
        }
        v471 = *(_QWORD *)(v205 - 56);
        if ( v471 != 2 )
        {
          v3 = *(_QWORD *)(v205 - 32);
          v443 = *(_DWORD *)(v205 - 24);
          v4 = (__m128)*(unsigned __int64 *)(v205 - 40);
          v414 = *(_QWORD *)(v205 - 48);
        }
        v208 = *(_QWORD *)(v205 + 64);
        v209 = *(_BYTE *)(v205 + 72);
        v210 = *(_DWORD *)(v205 + 56);
        v211 = *(unsigned int *)(v205 + 60);
        LODWORD(v469) = *(_DWORD *)(v205 + 60);
        v472 = *(_QWORD *)(v205 - 16);
        if ( v472 != 2 )
        {
          LOBYTE(v204) = *(_BYTE *)(v205 + 24);
          if ( *(_QWORD *)v205 == -1 )
          {
            v206 = -1;
          }
          else
          {
            sub_1416AC440(v453, v205);
            v206 = *(_QWORD *)v453;
            v417 = _mm_loadu_si128((const __m128i *)&v453[8]);
          }
          v211 = *(_QWORD *)(v205 - 8);
        }
        v223 = *(_QWORD *)(v205 - 112);
        v224 = *(_QWORD *)(v205 - 104);
        v410 = v451;
        v409 = v450;
        v412 = v208;
        v413 = v209;
        *(_QWORD *)&v405[16] = v207;
        *(_QWORD *)&v405[24] = v467;
        *(_QWORD *)&v405[32] = v196.m128i_i64[0];
        *(_QWORD *)&v405[40] = v201.m128i_i64[0];
        *(_DWORD *)&v405[48] = v466;
        *(_QWORD *)&v405[56] = v471;
        *(_QWORD *)&v405[64] = v414;
        _mm_storel_ps((double *)&v405[72], v4);
        *(_QWORD *)&v405[80] = v3;
        *(_DWORD *)&v405[88] = v443;
        v225 = v210;
        v411 = __PAIR64__(v469, v210);
        *((_QWORD *)&v228 + 1) = v472;
        *(_QWORD *)&v405[96] = v472;
        v406.m128i_i64[0] = v211;
        v406.m128i_i64[1] = v206;
        v226 = *(double *)v417.m128i_i64;
        v407 = v417;
        v408 = v204;
        v227 = v223;
        *(_QWORD *)v405 = v223;
        *(_QWORD *)&v405[8] = v224;
        *(_QWORD *)&v228 = *(_QWORD *)(v190 + 176);
        v229 = (__int64)v228 <= v208;
        if ( (_QWORD)v228 == v208 )
        {
          v230 = *(unsigned __int8 *)(v190 + 184);
          if ( v209 == (_BYTE)v230 )
          {
            *((_QWORD *)&v228 + 1) = *(_QWORD *)(v190 + 16);
            if ( *((_QWORD *)&v228 + 1) == 2 )
            {
              v231 = v206;
              if ( (_DWORD)v207 != 2 )
                goto LABEL_317;
            }
            else
            {
              v231 = v206;
              if ( (_DWORD)v207 == 2 )
                goto LABEL_317;
              v226 = *(double *)(v190 + 40);
              if ( v226 != *(double *)(v205 - 72) || *(_DWORD *)(v190 + 48) != *(_DWORD *)(v205 - 64) )
                goto LABEL_317;
              v248 = *(_BYTE *)(v205 - 80);
              if ( *(_DWORD *)(v190 + 32) == 1 )
              {
                if ( !v248 || *(_DWORD *)(v190 + 36) != *(_DWORD *)(v205 - 76) )
                  goto LABEL_317;
              }
              else if ( v248 )
              {
                goto LABEL_317;
              }
              if ( DWORD2(v228) == 1 )
              {
                if ( (v207 & 1) == 0 )
                  goto LABEL_317;
                *((_QWORD *)&v228 + 1) = *(_QWORD *)(v190 + 24);
                if ( *((_QWORD *)&v228 + 1) != *(_QWORD *)(v205 - 88) )
                  goto LABEL_317;
              }
              else if ( (v207 & 1) != 0 )
              {
                goto LABEL_317;
              }
            }
            *((_QWORD *)&v228 + 1) = *(_QWORD *)(v190 + 56);
            if ( *((_QWORD *)&v228 + 1) == 2 )
            {
              if ( (_DWORD)v471 != 2 )
                goto LABEL_317;
            }
            else
            {
              if ( (_DWORD)v471 == 2 )
                goto LABEL_317;
              v226 = *(double *)(v190 + 80);
              if ( v226 != *(double *)(v205 - 32) || *(_DWORD *)(v190 + 88) != *(_DWORD *)(v205 - 24) )
                goto LABEL_317;
              v250 = *(_BYTE *)(v205 - 40);
              if ( *(_DWORD *)(v190 + 72) == 1 )
              {
                if ( !v250 || *(_DWORD *)(v190 + 76) != *(_DWORD *)(v205 - 36) )
                  goto LABEL_317;
              }
              else if ( v250 )
              {
                goto LABEL_317;
              }
              if ( DWORD2(v228) == 1 )
              {
                if ( (v471 & 1) == 0 )
                  goto LABEL_317;
                *((_QWORD *)&v228 + 1) = *(_QWORD *)(v190 + 64);
                if ( *((_QWORD *)&v228 + 1) != *(_QWORD *)(v205 - 48) )
                  goto LABEL_317;
              }
              else if ( (v471 & 1) != 0 )
              {
                goto LABEL_317;
              }
            }
            v236 = *(_DWORD *)(v190 + 168);
            if ( (v225 & v236) != 0 )
            {
              *((_QWORD *)&v228 + 1) = (unsigned int)v469;
              if ( *(_DWORD *)(v190 + 172) != (_DWORD)v469 )
                goto LABEL_317;
            }
            else
            {
              *((_QWORD *)&v228 + 1) = v225 | v236;
              if ( DWORD2(v228) )
                goto LABEL_317;
            }
          }
          else
          {
            v231 = v206;
            if ( v209 )
              goto LABEL_322;
            v44 = (_BYTE)v230 == 0;
            LOBYTE(v230) = 1;
            if ( v44 )
              goto LABEL_322;
LABEL_317:
            v412 = *(_QWORD *)(v190 + 176);
            v413 = v230;
            *(_QWORD *)&v228 = *(_QWORD *)(v190 + 16);
            if ( (_QWORD)v228 != 2 )
            {
              v226 = *(double *)(v190 + 40);
              v230 = *(_DWORD *)(v190 + 48);
              v183 = (__m128)*(unsigned __int64 *)(v190 + 32);
              *((_QWORD *)&v228 + 1) = *(_QWORD *)(v190 + 24);
            }
            *(_OWORD *)&v405[16] = v228;
            _mm_storel_ps((double *)&v405[32], v183);
            *(double *)&v405[40] = v226;
            *(_DWORD *)&v405[48] = v230;
            if ( *(_QWORD *)(v190 + 56) != 2 )
            {
              v226 = *(double *)(v190 + 80);
              v230 = *(_DWORD *)(v190 + 88);
              v183 = (__m128)*(unsigned __int64 *)(v190 + 72);
              *((_QWORD *)&v228 + 1) = *(_QWORD *)(v190 + 64);
            }
            *(_QWORD *)&v405[56] = *(_QWORD *)(v190 + 56);
            *(_QWORD *)&v405[64] = *((_QWORD *)&v228 + 1);
            _mm_storel_ps((double *)&v405[72], v183);
            *(double *)&v405[80] = v226;
            *(_DWORD *)&v405[88] = v230;
            v411 = *(_QWORD *)(v190 + 168);
          }
        }
        else
        {
          v231 = v206;
          if ( !v229 )
          {
            v230 = *(unsigned __int8 *)(v190 + 184);
            goto LABEL_317;
          }
        }
LABEL_322:
        v232 = *(_QWORD *)(v190 + 96);
        if ( v232 != 2 )
        {
          if ( (_DWORD)v472 == 2 )
            goto LABEL_324;
          sub_141406CE0(v453);
          v237 = (*(int *)v453 >> 13) - 1;
          v238 = 0;
          if ( *(int *)v453 >> 13 <= 0 )
          {
            v239 = (1 - (*(int *)v453 >> 13)) / 0x190u + 1;
            v237 += 400 * v239;
            v238 = -146097 * v239;
          }
          v240 = 1000
               * (*(unsigned int *)&v453[4]
                + 86400LL
                * (((v237 / 100) >> 2)
                 + ((1461 * v237) >> 2)
                 + v238
                 + ((*(_DWORD *)v453 >> 4) & 0x1FF)
                 - v237 / 100
                 - 719163));
          v241 = (__int64 *)(v190 + 176);
          if ( *(_BYTE *)v190 )
            v241 = (__int64 *)(v190 + 8);
          v242 = v240 + *(unsigned int *)&v453[8] / 0xF4240uLL + 1000;
          v243 = *v241;
          v244 = 1000 * v243;
          if ( (unsigned __int64)(v243 - 1) >= 0x2540BE3FFLL )
            v244 = v243;
          if ( v244 <= v242 )
          {
            v245 = v205 + 176;
            if ( v227 )
              v245 = v205 + 8;
            v246 = *(_QWORD *)(v245 - 112);
            v247 = 1000 * v246;
            if ( (unsigned __int64)(v246 - 1) >= 0x2540BE3FFLL )
              v247 = v246;
            if ( v247 > v242 || v244 >= v247 )
            {
LABEL_324:
              v233 = *(_BYTE *)(v190 + 136);
              if ( *(_QWORD *)(v190 + 112) == -1 )
              {
                v234 = -1;
                v235 = *(_QWORD *)(v190 + 104);
                if ( (_DWORD)v472 == 2 )
                  goto LABEL_359;
              }
              else
              {
                sub_1416AC440(v453, v190 + 112);
                v234 = *(_QWORD *)v453;
                v450 = *(__m128i *)&v453[8];
                v235 = *(_QWORD *)(v190 + 104);
                if ( (_DWORD)v472 == 2 )
                  goto LABEL_359;
              }
              if ( v231 != -1 && v231 )
                sub_140001660(v407.m128i_i64[0], v231, 1);
LABEL_359:
              *(_QWORD *)&v405[96] = v232;
              v406.m128i_i64[0] = v235;
              v406.m128i_i64[1] = v234;
              v407 = v450;
              v408 = v233;
              *(_OWORD *)v405 = *(_OWORD *)v190;
            }
          }
        }
        v249 = (__m128i *)(v205 - 112);
        sub_1418F44E0(v376, (const __m128i *)v405, 0xC0u);
        if ( (unsigned __int8)sub_140288B80(v249, v376) )
        {
          sub_140194F00((__int64)v376);
          v190 = v473;
          goto LABEL_271;
        }
        sub_140194F00((__int64)v249);
        sub_1418F44E0(v249, v376, 0xC0u);
      }
      else
      {
LABEL_295:
        sub_1416AC440(&v450, v190 + 144);
        v213 = *(_QWORD *)(v190 + 16);
        if ( v213 != 2 )
        {
          v201.m128i_i64[0] = *(_QWORD *)(v190 + 40);
          LODWORD(v470) = *(_DWORD *)(v190 + 48);
          v196.m128i_i64[0] = *(_QWORD *)(v190 + 32);
          v471 = *(_QWORD *)(v190 + 24);
        }
        v214 = *(_QWORD *)(v190 + 56);
        if ( v214 != 2 )
        {
          v3 = *(_QWORD *)(v190 + 80);
          LODWORD(v469) = *(_DWORD *)(v190 + 88);
          v4 = (__m128)*(unsigned __int64 *)(v190 + 72);
          v466 = *(_QWORD *)(v190 + 64);
        }
        v215 = *(_QWORD *)(v190 + 176);
        v216 = *(_BYTE *)(v190 + 184);
        v217 = *(unsigned int *)(v190 + 168);
        LODWORD(v472) = *(_DWORD *)(v190 + 168);
        v218 = *(_DWORD *)(v190 + 172);
        v219 = *(_QWORD *)(v190 + 96);
        if ( v219 != 2 )
        {
          LOBYTE(v467) = *(_BYTE *)(v190 + 136);
          if ( *(_QWORD *)(v190 + 112) == -1 )
          {
            v217 = -1;
          }
          else
          {
            sub_1416AC440(v453, v190 + 112);
            v217 = *(_QWORD *)v453;
            v417 = _mm_loadu_si128((const __m128i *)&v453[8]);
          }
          v212 = *(_QWORD *)(v190 + 104);
        }
        v220 = *(_QWORD *)v190;
        v221 = *(_QWORD *)(v190 + 8);
        v410 = v451;
        v409 = v450;
        v412 = v215;
        v413 = v216;
        *(_QWORD *)&v405[16] = v213;
        *(_QWORD *)&v405[24] = v471;
        *(_QWORD *)&v405[32] = v196.m128i_i64[0];
        *(_QWORD *)&v405[40] = v201.m128i_i64[0];
        *(_DWORD *)&v405[48] = v470;
        *(_QWORD *)&v405[56] = v214;
        *(_QWORD *)&v405[64] = v466;
        _mm_storel_ps((double *)&v405[72], v4);
        *(_QWORD *)&v405[80] = v3;
        *(_DWORD *)&v405[88] = v469;
        v411 = __PAIR64__(v218, v472);
        *(_QWORD *)&v405[96] = v219;
        v406.m128i_i64[0] = v212;
        v406.m128i_i64[1] = v217;
        v407 = v417;
        v408 = (char)v467;
        *(_QWORD *)v405 = v220;
        *(_QWORD *)&v405[8] = v221;
        v222 = v457.m128i_i64[0];
        if ( v457.m128i_i64[0] == v456.m128i_i64[0] )
          sub_14190F960(&v456);
        sub_1418F44E0((__m128i *)(v456.m128i_i64[1] + 192 * v222), (const __m128i *)v405, 0xC0u);
        v457.m128i_i64[0] = v222 + 1;
      }
      LOBYTE(v470) = 1;
      v190 = v473;
      goto LABEL_271;
    }
LABEL_282:
    v190 += 192;
  }
  if ( (v470 & 1) != 0 )
  {
    *(_DWORD *)v453 = sub_141683E80(_RCX, n, v189);
    *(_DWORD *)&v453[4] = v251;
    sub_141683E30(v405, v453, 3577643008LL, 27111902);
    if ( v405[0] )
      v252 = 0;
    else
      v252 = *(_QWORD *)&v405[8];
    if ( v427 > v252 )
      v252 = v427;
    if ( *(_QWORD *)(v479 + 856) > v252 )
      v252 = *(_QWORD *)(v479 + 856);
    v457.m128i_i64[1] = v252;
    *(_QWORD *)v405 = &v463;
    if ( v457.m128i_i64[0] >= 2uLL )
    {
      if ( v457.m128i_i64[0] >= 0x15uLL )
        sub_14065B7B0(v456.m128i_i64[1], v457.m128i_i64[0], v405);
      else
        sub_140DFFB60(v456.m128i_i64[1], v457.m128i_i64[0], 1, v405);
    }
    v193 = *(_QWORD *)&v381[8];
  }
  HIDWORD(_RAX) = v458.m128i_i32[1];
  v442 = v458.m128i_i64[0];
  v254 = _mm_load_si128(&v456);
  v441 = v457;
  v440 = v254;
  if ( v193 )
  {
    v255 = *(_QWORD *)&v381[24];
    if ( *(_QWORD *)&v381[24] )
    {
      v256 = *(_QWORD *)v381;
      v257 = (const __m128i *)(*(_QWORD *)v381 + 16LL);
      _R14D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v381));
      do
      {
        if ( !(_WORD)_R14D )
        {
          do
          {
            v259 = _mm_load_si128(v257);
            v256 -= 384;
            ++v257;
            _R14D = _mm_movemask_epi8(v259) ^ 0xFFFF;
          }
          while ( !_R14D );
        }
        __asm { tzcnt   eax, r14d }
        v260 = -3 * _RAX;
        v261 = *(_QWORD *)(v256 + 8 * v260 - 24);
        if ( v261 )
          sub_140001660(*(_QWORD *)(v256 + 8 * v260 - 16), v261, 1);
        --v255;
        _RAX = _R14D & (unsigned int)(_R14D - 1);
        _R14D &= _R14D - 1;
      }
      while ( v255 );
    }
    v262 = (24 * v193 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v263 = v262 + v193 + 17;
    if ( v263 )
      sub_140001660(*(_QWORD *)v381 - v262, v263, 16);
  }
  if ( (_DWORD)v423 != (_DWORD)v434 || *((_QWORD *)&v422 + 1) != *((_QWORD *)&v433 + 1) )
    goto LABEL_429;
  if ( *((_QWORD *)&v419 + 1) == -1 )
  {
    if ( *((_QWORD *)&v430 + 1) == -1 )
      goto LABEL_414;
LABEL_429:
    sub_1401CF760(v405, v448, (__int64)&v418, 0);
    if ( *(_DWORD *)v405 == -1 )
      goto LABEL_469;
    v267 = (__m128i *)v465;
    *(_OWORD *)(v465 + 80) = *(_OWORD *)&v405[80];
    v267[4] = *(__m128i *)&v405[64];
    v268 = _mm_loadu_si128((const __m128i *)v405);
    v269 = *(__m128i *)&v405[16];
    v270 = *(__m128i *)&v405[32];
    v267[3] = *(__m128i *)&v405[48];
    v267[2] = v270;
    v267[1] = v269;
    *v267 = v268;
LABEL_431:
    v271 = v441.m128i_i64[0];
    if ( v441.m128i_i64[0] )
    {
      v272 = (_QWORD *)(v440.m128i_i64[1] + 152);
      do
      {
        v273 = *(v272 - 1);
        if ( v273 )
          sub_140001660(*v272, v273, 1);
        if ( *((_DWORD *)v272 - 14) != 2 )
        {
          v274 = *(v272 - 5);
          if ( v274 != -1 )
          {
            if ( v274 )
              sub_140001660(*(v272 - 4), v274, 1);
          }
        }
        v272 += 24;
        --v271;
      }
      while ( v271 );
    }
    if ( v440.m128i_i64[0] )
      sub_140001660(v440.m128i_i64[1], 192 * v440.m128i_i64[0], 8);
    sub_140033D80(&v418);
    v275 = v437;
    if ( v437 )
    {
      v276 = v436 + 19;
      do
      {
        v277 = *(v276 - 1);
        if ( v277 )
          sub_140001660(*v276, v277, 1);
        if ( *((_DWORD *)v276 - 14) != 2 )
        {
          v278 = *(v276 - 5);
          if ( v278 != -1 )
          {
            if ( v278 )
              sub_140001660(*(v276 - 4), v278, 1);
          }
        }
        v276 += 24;
        --v275;
      }
      while ( v275 );
    }
    if ( v435 )
      sub_140001660(v436, 192 * v435, 8);
    v279 = v446;
    if ( (_QWORD)v446 )
    {
      v280 = (_QWORD *)(v445.m128i_i64[1] + 152);
      do
      {
        v281 = *(v280 - 1);
        if ( v281 )
          sub_140001660(*v280, v281, 1);
        if ( *((_DWORD *)v280 - 14) != 2 )
        {
          v282 = *(v280 - 5);
          if ( v282 != -1 )
          {
            if ( v282 )
              sub_140001660(*(v280 - 4), v282, 1);
          }
        }
        v280 += 24;
        --v279;
      }
      while ( v279 );
    }
    if ( v445.m128i_i64[0] )
      sub_140001660(v445.m128i_i64[1], 192 * v445.m128i_i64[0], 8);
    sub_14036FB80(&v424);
    sub_140033D80(&v429);
    v13 = v465;
    goto LABEL_465;
  }
  if ( *((_QWORD *)&v430 + 1) == -1
    || *((_QWORD *)&v420 + 1) != *((_QWORD *)&v431 + 1)
    || (unsigned int)sub_1418F4B70(v420, v431) )
  {
    goto LABEL_429;
  }
LABEL_414:
  v264 = v419;
  if ( (_QWORD)v419 != (_QWORD)v430 )
    goto LABEL_429;
  if ( (_QWORD)v419 )
  {
    v265 = v429.m128i_i64[1];
    v266 = *((_QWORD *)&v418 + 1);
    while ( (unsigned __int8)sub_140291750(v266, v265) )
    {
      v265 += 424;
      v266 += 424;
      if ( !--v264 )
        goto LABEL_419;
    }
    goto LABEL_429;
  }
LABEL_419:
  if ( (_BYTE)v422 == 2 )
  {
    if ( (_BYTE)v433 != 2 )
      goto LABEL_429;
  }
  else if ( (_BYTE)v433 == 2 || (_BYTE)v422 != (_BYTE)v433 || v421 != *(_OWORD *)&v432 )
  {
    goto LABEL_429;
  }
  if ( BYTE4(v423) == 2 )
  {
    if ( BYTE4(v434) != 2 )
      goto LABEL_429;
  }
  else if ( BYTE4(v423) != BYTE4(v434) )
  {
    goto LABEL_429;
  }
LABEL_469:
  if ( (_DWORD)v442 != (_DWORD)v447
    || v441.m128i_i64[1] != *((_QWORD *)&v446 + 1)
    || (v284 = v441.m128i_i64[0], v441.m128i_i64[0] != (_QWORD)v446) )
  {
LABEL_477:
    sub_14021B430(v381);
    if ( *(_DWORD *)v381 == -1 )
      goto LABEL_482;
    *(_OWORD *)&v405[80] = *(_OWORD *)&v381[80];
    *(_OWORD *)&v405[64] = *(_OWORD *)&v381[64];
    *(_OWORD *)&v405[48] = *(_OWORD *)&v381[48];
    *(_OWORD *)&v405[32] = *(_OWORD *)&v381[32];
    *(_OWORD *)&v405[16] = *(_OWORD *)&v381[16];
    *(_OWORD *)v405 = *(_OWORD *)v381;
    v287 = v465;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v450.m128i_i64[0] = (__int64)v405;
      v450.m128i_i64[1] = (__int64)sub_14104A7D0;
      *(_QWORD *)v453 = aCodexmateLibCo_21;
      *(_QWORD *)&v453[8] = 31;
      *(_QWORD *)&v453[16] = aCodexmateLibCo_21;
      v454 = 31;
      v455 = &off_1419D9EA8;
      sub_140BAD520(&unk_1419D9E71, &v450, 2, v453);
    }
    v288 = *(_QWORD *)v405;
    v456 = *(__m128i *)&v405[8];
    v457 = *(__m128i *)&v405[24];
    v458 = *(__m128i *)&v405[40];
    v459 = *(__m128i *)&v405[56];
    v460 = *(__m128i *)&v405[72];
    v461.m128i_i64[0] = *(_QWORD *)&v405[88];
    if ( *(_QWORD *)v405 == -1 )
      goto LABEL_482;
    *(_QWORD *)(v287 + 88) = v461.m128i_i64[0];
    *(__m128i *)(v287 + 72) = v460;
    v289 = v456;
    v290 = v457;
    v291 = v458;
    *(__m128i *)(v287 + 56) = v459;
    *(__m128i *)(v287 + 40) = v291;
    *(__m128i *)(v287 + 24) = v290;
    *(__m128i *)(v287 + 8) = v289;
    *(_QWORD *)v287 = v288;
    goto LABEL_431;
  }
  if ( v441.m128i_i64[0] )
  {
    v285 = v445.m128i_i64[1];
    v286 = v440.m128i_i64[1];
    while ( (unsigned __int8)sub_140288B80(v286, v285) )
    {
      v285 += 192;
      v286 += 192;
      if ( !--v284 )
        goto LABEL_482;
    }
    goto LABEL_477;
  }
LABEL_482:
  v292 = *(_QWORD *)(v479 + 880);
  v293 = *(_QWORD *)(v479 + 888);
  v294 = (const __m128i *)sub_1402928C0(0);
  v295 = v448;
  if ( !v294 )
    sub_141937FD0(&off_141A229A8);
  v296 = _mm_loadu_si128(v294);
  ++v294->m128i_i64[0];
  *(__m128i *)&v405[16] = v23;
  *(__m128i *)v405 = v24;
  *(__m128i *)&v405[32] = v296;
  *(_QWORD *)v381 = v292;
  *(_QWORD *)&v381[8] = v292 + 384 * v293;
  *(_QWORD *)&v381[16] = v462;
  sub_140393230(v405, v381);
  v450 = _mm_load_si128((const __m128i *)v405);
  v451 = *(_OWORD *)&v405[16];
  v452 = *(_OWORD *)&v405[32];
  v297 = v479 + 1000;
  if ( *(_QWORD *)(v479 + 1000) == -1 )
  {
    v397.m128i_i64[0] = -1;
  }
  else
  {
    sub_1416AC440(v381, v479 + 1000);
    v298 = *(_BYTE *)(v479 + 1112);
    if ( *(_QWORD *)(v479 + 1024) == -1 )
    {
      v299 = -1;
    }
    else
    {
      sub_1416AC440(v405, v479 + 1024);
      v299 = *(_QWORD *)v405;
      v456 = _mm_loadu_si128((const __m128i *)&v405[8]);
    }
    v400 = *(_OWORD *)(v479 + 1048);
    v401 = *(_OWORD *)(v479 + 1064);
    v402 = *(_OWORD *)(v479 + 1080);
    *(_QWORD *)&v398 = *(_QWORD *)&v381[16];
    v397 = *(__m128i *)v381;
    v399 = v456;
    *((_QWORD *)&v398 + 1) = v299;
    v403 = _mm_loadu_si128((const __m128i *)(v479 + 1096));
    LOBYTE(v404) = v298;
    v295 = v448;
  }
  v478 = 1;
  sub_1401CE0B0(v405, v295);
  v300 = *(_QWORD *)v405;
  v456 = *(__m128i *)&v405[8];
  v457 = *(__m128i *)&v405[24];
  v458 = *(__m128i *)&v405[40];
  v459 = *(__m128i *)&v405[56];
  v460 = *(__m128i *)&v405[72];
  v461 = *(__m128i *)&v405[88];
  if ( *(_QWORD *)v405 == 2 )
  {
    v301 = (__m128i *)v465;
    *(__m128i *)(v465 + 80) = v461;
    v301[4] = v460;
    v302 = _mm_load_si128(&v456);
    v303 = v457;
    v304 = v458;
    v301[3] = v459;
    v301[2] = v304;
    v301[1] = v303;
    *v301 = v302;
    sub_140020ED0(v397.m128i_i64);
    sub_140370A60(&v450);
    goto LABEL_431;
  }
  sub_1418F44E0(v382, &v406, 0x408u);
  *(__m128i *)&v381[8] = v456;
  *(__m128i *)&v381[24] = v457;
  *(__m128i *)&v381[40] = v458;
  *(__m128i *)&v381[56] = v459;
  *(__m128i *)&v381[72] = v460;
  *(__m128i *)&v381[88] = _mm_load_si128(&v461);
  *(_QWORD *)v381 = v300;
  v477 = 1;
  v476 = 1;
  v475 = 1;
  v474 = 1;
  sub_140E15800(v453, *((_QWORD *)&v386 + 1), *((_QWORD *)&v386 + 1) + 192 * v387);
  v305 = v479;
  v306 = (__m128i *)(v479 + 568);
  sub_140034360(v479 + 568);
  sub_1418F44E0(v306, v384, 0xB0u);
  v307 = *(_QWORD *)(v305 + 536);
  if ( v307 )
    sub_140001660(*(_QWORD *)(v305 + 544), v307, 1);
  v308 = v383[24];
  *(__m128i *)(v305 + 552) = v383[25];
  *(__m128i *)(v305 + 536) = v308;
  sub_140033D80(v444);
  v309 = v449;
  v310 = v444;
  v444[5].m128i_i64[0] = v385;
  v310[4] = v384[15];
  v311 = v384[11];
  v312 = v384[12];
  v313 = v384[13];
  v310[3] = v384[14];
  v310[2] = v313;
  v310[1] = v312;
  *v310 = v311;
  sub_1403FB6B0(v462);
  v314 = v462;
  if ( *v462 )
  {
    sub_140001660(*(_QWORD *)(v479 + 840), 192LL * *v462, 8);
    v314 = v462;
  }
  v314[4] = v388;
  v315 = v386;
  *((_OWORD *)v314 + 1) = v387;
  *(_OWORD *)v314 = v315;
  sub_1403FB8C0(v309);
  v316 = v449;
  if ( *v449 )
    sub_140001660(*(_QWORD *)(v479 + 880), 384LL * *v449, 8);
  v316[2] = v390;
  *(_OWORD *)v316 = v389;
  v317 = v428;
  if ( v428->m128i_i32[0] != 2 )
    sub_140034430(v428);
  sub_1418F44E0(v317, v383, 0x180u);
  v318 = v479;
  *(_QWORD *)(v479 + 1120) = v396[15];
  sub_140020ED0((__int64 *)v297);
  *(_QWORD *)(v297 + 112) = v404;
  *(__m128i *)(v297 + 96) = v403;
  *(_OWORD *)(v297 + 80) = v402;
  *(_OWORD *)(v297 + 64) = v401;
  v319 = _mm_load_si128(&v397);
  v320 = v398;
  v321 = v399;
  *(_OWORD *)(v297 + 48) = v400;
  *(__m128i *)(v297 + 32) = v321;
  *(_OWORD *)(v297 + 16) = v320;
  *(__m128i *)v297 = v319;
  v322 = (const __m128i *)v391[1];
  v323 = v392;
  v324 = *(_QWORD *)(v318 + 912);
  if ( v392 > *(_QWORD *)(v318 + 896) - v324 )
  {
    v482 = 0;
    v481 = 0;
    v480 = 0;
    sub_14190D590(v479 + 896, v324, v392, 8, 48);
    v325 = v479;
    v324 = *(_QWORD *)(v479 + 912);
LABEL_501:
    sub_1418F44E0((__m128i *)(*(_QWORD *)(v325 + 904) + 48 * v324), v322, 48 * v323);
    v324 = *(_QWORD *)(v325 + 912);
  }
  else
  {
    v325 = v479;
    if ( v392 )
      goto LABEL_501;
  }
  v467 = v322;
  *(_QWORD *)(v325 + 912) = v323 + v324;
  v392 = 0;
  if ( !*((_QWORD *)&v451 + 1) )
    goto LABEL_547;
  v326 = *(_QWORD *)(v479 + 880);
  v468 = v326 + 384LL * *(_QWORD *)(v479 + 888);
LABEL_521:
  while ( 2 )
  {
    if ( v326 != v468 )
    {
      v354 = v326;
      v326 += 384;
      if ( !*((_QWORD *)&v451 + 1) )
        continue;
      v473 = v326;
      v482 = 0;
      v481 = 0;
      v480 = 0;
      v335 = sub_140D2AC70(&v452, v354 + 208);
      _RCX = v335 >> 57;
      v355 = v450;
      v356 = _mm_cvtsi32_si128(v335 >> 57);
      v357 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v356, v356), 0), 68);
      for ( ii = 0; ; ii += 16 )
      {
        v327 = v355.m128i_i64[1] & v335;
        v328 = _mm_loadu_si128((const __m128i *)(v355.m128i_i64[0] + v327));
        _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v328, v357));
        if ( _R14D )
          break;
LABEL_509:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v328, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
        {
          v326 = v473;
          goto LABEL_521;
        }
        v335 = ii + v327 + 16;
      }
      v330 = *(_QWORD *)(v354 + 224);
      v472 = v327;
      v470 = ii;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r14d }
        _RCX = -(__int64)(v355.m128i_i64[1] & (v327 + _RCX));
        if ( v330 == *(_QWORD *)(v355.m128i_i64[0] + 88 * _RCX - 72) )
        {
          v332 = v355.m128i_i64[0] + 88 * _RCX;
          if ( !(unsigned int)sub_1418F4B70(*(_QWORD *)(v354 + 216), *(_QWORD *)(v332 - 80)) )
            break;
        }
        v333 = _R14D - 1;
        LOWORD(v333) = _R14D & (_R14D - 1);
        v44 = (_WORD)v333 == 0;
        _R14D = v333;
        v327 = v472;
        ii = v470;
        if ( v44 )
          goto LABEL_509;
      }
      v336 = *(_QWORD *)(v332 - 16);
      v337 = 1;
      if ( v454 )
      {
        v338 = *(_QWORD *)(v332 - 8);
        v482 = 0;
        v481 = 0;
        v480 = 0;
        v339 = sub_140D2AC70(&v455, v354 + 208);
        v472 = v336;
        _RCX = v339 >> 57;
        v341 = *(_QWORD *)&v453[8];
        v342 = *(_QWORD *)v453;
        v343 = _mm_cvtsi32_si128(v339 >> 57);
        v344 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v343, v343), 0), 68);
        for ( jj = 0; ; jj += 16LL )
        {
          v346 = v341 & v339;
          v347 = _mm_loadu_si128((const __m128i *)(v342 + v346));
          _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v347, v344));
          if ( _R14D )
            break;
LABEL_518:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v347, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
          {
            LOBYTE(v358) = 1;
            v326 = v354 + 384;
            if ( !v472 )
              goto LABEL_528;
            goto LABEL_525;
          }
          v339 = jj + v346 + 16;
        }
        v349 = *(_QWORD *)(v354 + 224);
        v471 = v346;
        v469 = v341;
        v466 = jj;
        v470 = v338;
        while ( 1 )
        {
          __asm { tzcnt   ecx, r14d }
          _RCX = -(__int64)(v341 & (v346 + _RCX));
          if ( v349 == *(_QWORD *)(v342 + 40 * _RCX - 24) )
          {
            v350 = v342 + 40 * _RCX;
            v351 = v349;
            v352 = sub_1418F4B70(*(_QWORD *)(v354 + 216), *(_QWORD *)(v350 - 32));
            v349 = v351;
            if ( !v352 )
              break;
          }
          v353 = _R14D - 1;
          LOWORD(v353) = _R14D & (_R14D - 1);
          v44 = (_WORD)v353 == 0;
          _R14D = v353;
          v346 = v471;
          v341 = v469;
          jj = v466;
          v338 = v470;
          if ( v44 )
            goto LABEL_518;
        }
        v337 = *(_BYTE *)(v350 - 16) ^ 1;
        v358 = v470 >= *(_QWORD *)(v350 - 8);
        v326 = v354 + 384;
        if ( !v472 )
          goto LABEL_528;
        goto LABEL_525;
      }
      LOBYTE(v358) = 1;
      v326 = v354 + 384;
      if ( v336 )
      {
LABEL_525:
        if ( ((v358 | (unsigned __int8)v337) & 1) == 0 )
          continue;
      }
      else
      {
LABEL_528:
        if ( !v337 )
          continue;
      }
      v359 = *(_BYTE *)(v332 - 24);
      if ( *(_QWORD *)(v332 - 48) == -1 )
      {
        v360 = -1;
      }
      else
      {
        v482 = 0;
        v481 = 0;
        v480 = 0;
        sub_1416AC440(v405, v332 - 48);
        v360 = *(_QWORD *)v405;
        v456 = _mm_loadu_si128((const __m128i *)&v405[8]);
        v326 = v354 + 384;
      }
      v361 = *(_QWORD *)(v332 - 64);
      v362 = *(_QWORD *)(v332 - 56);
      *(__m128i *)v405 = v456;
      if ( *(_DWORD *)(v354 + 160) != 2 )
      {
        v363 = *(_QWORD *)(v354 + 176);
        if ( v363 != -1 )
        {
          if ( v363 )
            sub_140001660(*(_QWORD *)(v354 + 184), v363, 1);
        }
      }
      *(_QWORD *)(v354 + 160) = v361;
      *(_QWORD *)(v354 + 168) = v362;
      *(_QWORD *)(v354 + 176) = v360;
      *(__m128i *)(v354 + 184) = _mm_load_si128((const __m128i *)v405);
      *(_BYTE *)(v354 + 200) = v359;
      continue;
    }
    break;
  }
  if ( v428->m128i_i32[0] != 2 )
  {
    v364 = v479 + 360;
    v482 = 0;
    v481 = 0;
    v480 = 0;
    v365 = sub_140189CF0(&v450, v479 + 360);
    v366 = v365;
    if ( v365 )
    {
      v367 = *(_QWORD *)(v365 + 48);
      v368 = *(_QWORD *)(v365 + 56);
      v482 = 0;
      v481 = 0;
      v480 = 0;
      v369 = sub_140189BD0(v453, v364);
      if ( v369 )
      {
        v370 = *(_BYTE *)v369;
        if ( v367 )
        {
          if ( ((v368 < *(_QWORD *)(v369 + 8)) & v370) != 0 )
            goto LABEL_547;
        }
        else if ( v370 )
        {
          goto LABEL_547;
        }
      }
      v482 = 0;
      v481 = 0;
      v480 = 0;
      sub_140287A40(v405, v366);
      v458 = *(__m128i *)&v405[32];
      v457 = *(__m128i *)&v405[16];
      v456 = *(__m128i *)v405;
      v371 = v479;
      sub_140020EA0(v479 + 312);
      v372 = _mm_load_si128(&v456);
      v373 = v457;
      *(__m128i *)(v371 + 344) = v458;
      *(__m128i *)(v371 + 328) = v373;
      *(__m128i *)(v371 + 312) = v372;
    }
  }
LABEL_547:
  *(_QWORD *)v465 = -1;
  v477 = 0;
  v476 = 0;
  v475 = 0;
  v474 = 0;
  sub_140370050(v453);
  sub_140033F90(v381);
  sub_1403FAF90(v391);
  if ( v391[0] )
    sub_140001660(v467, 48LL * v391[0], 8);
  sub_140033ED0(v393);
  if ( v394 != -1 && v394 )
    sub_140001660(v395, v394, 1);
  sub_140020ED0(v396);
  sub_140370A60(&v450);
  sub_1403FB6B0(&v440);
  if ( v440.m128i_i64[0] )
    sub_140001660(v440.m128i_i64[1], 192 * v440.m128i_i64[0], 8);
  sub_140033D80(&v418);
  sub_1403FB6B0(&v435);
  if ( v435 )
    sub_140001660(v436, 192 * v435, 8);
  sub_1403FB6B0(&v445);
  if ( v445.m128i_i64[0] )
    sub_140001660(v445.m128i_i64[1], 192 * v445.m128i_i64[0], 8);
  sub_14036FB80(&v424);
  sub_140033D80(&v429);
  v13 = v465;
  sub_141057160(&hObject);
LABEL_559:
  CloseHandle(hObject);
  return v13;
}
