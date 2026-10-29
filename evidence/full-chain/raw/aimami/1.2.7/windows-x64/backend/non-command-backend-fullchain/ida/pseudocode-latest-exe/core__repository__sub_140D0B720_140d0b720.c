// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d0b720 | successor of pre-update 0x1401d7a10 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.937, "str_ov": 0.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140D0B720(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // xmm11_8
  __m128 v4; // xmm12
  __int64 v6; // rsi
  void *v7; // rdi
  __int64 v8; // rax
  __m128i si128; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rsi
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __m128i v17; // xmm0
  __int64 v18; // rsi
  __int64 v19; // rdi
  const __m128i *v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm6
  __m128i v23; // xmm7
  _QWORD *v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // r14
  unsigned __int64 v28; // rdi
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // r12
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  __m128i v34; // xmm0
  __m128i v35; // xmm9
  __int64 i; // rdx
  __int64 v37; // rax
  __m128i v38; // xmm10
  __int64 v40; // r12
  __int64 v41; // r14
  __int64 v42; // r12
  __int64 v43; // rcx
  _QWORD *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // r13
  int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rdi
  _QWORD *v52; // rsi
  __int64 v53; // rax
  _QWORD *v54; // rdx
  bool v55; // zf
  __int64 v56; // rsi
  _DWORD *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rsi
  int v60; // esi
  __int64 v61; // rdi
  __m128i v62; // xmm0
  __int64 v63; // r12
  __int64 v64; // rax
  _QWORD *v65; // rsi
  __int64 v66; // rbx
  _QWORD *v67; // rbx
  __int64 v68; // r15
  __int64 v69; // rdx
  __int64 v70; // r13
  unsigned __int64 v71; // rax
  __m128i v73; // xmm0
  __m128i v74; // xmm9
  __int64 j; // rdx
  unsigned __int64 v76; // rax
  __m128i v77; // xmm10
  unsigned __int64 v79; // rdi
  int v80; // eax
  unsigned __int64 v81; // rdi
  __int64 v82; // rdx
  _QWORD *v83; // rsi
  __int64 v84; // r12
  _QWORD *v85; // r12
  __int64 v86; // r15
  __int64 v87; // rdx
  __int64 v88; // r13
  unsigned __int64 v89; // rbx
  __m128i v90; // xmm0
  __m128i v91; // xmm9
  signed __int64 k; // rcx
  unsigned __int64 v93; // rbx
  __m128i v95; // xmm10
  unsigned __int64 v97; // r14
  unsigned __int64 v98; // rdi
  __int64 v99; // rdx
  int v100; // esi
  int v101; // edx
  char v102; // dl
  __int64 v103; // xmm0_8
  __int64 v104; // r8
  char v105; // cl
  __int64 v106; // r9
  __int64 v107; // r13
  __int64 v108; // r15
  __int64 v109; // rsi
  __int64 v110; // rbx
  __int64 v111; // rdi
  __int64 v112; // r14
  __int64 v113; // r12
  unsigned int v114; // edi
  __int64 v115; // r14
  unsigned int v116; // eax
  __int64 v117; // rax
  _DWORD *v118; // rdi
  __int64 v119; // r14
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // rdi
  _BYTE *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // rdi
  _BYTE *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rdi
  _BYTE *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // r13
  __int64 v134; // rdi
  __int64 v135; // r14
  int v136; // edx
  int v137; // ecx
  unsigned int v138; // ecx
  signed __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // r13
  __int64 v142; // rdi
  __int64 v143; // r14
  int v144; // edx
  int v145; // ecx
  unsigned int v146; // ecx
  signed __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rdx
  unsigned int v151; // eax
  unsigned int v152; // edx
  __int64 v153; // r13
  __int64 v154; // rdi
  __int64 v155; // r14
  int v156; // edx
  int v157; // ecx
  unsigned int v158; // ecx
  signed __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  char v165; // al
  char v166; // cl
  char v167; // cl
  char v168; // cl
  char v169; // dl
  char v170; // cl
  char v171; // dl
  char v172; // dl
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // rax
  __int32 v181; // edx
  signed __int64 v182; // rax
  __int64 v183; // rsi
  __int64 v184; // rdi
  __int64 v185; // rax
  __int64 v186; // r9
  __int64 v187; // rbx
  __int128 v188; // rax
  __m128 v189; // xmm1
  int v190; // esi
  __int64 v191; // rdi
  __int64 v192; // rdi
  __int64 *v193; // r12
  __int64 v194; // r13
  __int64 v195; // rsi
  __int64 v196; // r15
  __int64 *n; // rbx
  unsigned __int64 v198; // rax
  __m128i v199; // xmm10
  int v202; // eax
  unsigned __int64 ii; // rdx
  unsigned __int64 v204; // rax
  __m128i v205; // xmm0
  __m128i v206; // xmm9
  __int64 v207; // rdi
  __int64 v208; // r14
  __int64 *v209; // r12
  __int64 v210; // rsi
  __int64 v211; // r13
  __int64 v212; // rdi
  __int64 v213; // r15
  char v214; // r14
  __int64 v215; // rax
  __int64 v216; // rcx
  __int64 v217; // rsi
  __int64 v218; // r15
  __int64 v219; // rdi
  char v220; // r14
  __int64 v221; // rax
  unsigned int v222; // r12d
  __int64 v223; // r13
  double v224; // rdx
  __int64 v225; // r8
  __int64 v226; // rsi
  __int64 v227; // r9
  __int64 v228; // rcx
  double v229; // xmm0_8
  char v230; // si
  __int128 v231; // rax
  int v232; // ecx
  __int64 v233; // r14
  char v234; // si
  __int64 v235; // rdi
  __int64 v236; // r15
  __int64 v237; // rdx
  int v238; // edx
  int v239; // edx
  int v240; // ecx
  unsigned int v241; // ecx
  __int64 v242; // rax
  __int64 *v243; // rdx
  signed __int64 v244; // rcx
  __int64 v245; // rdx
  __int64 v246; // rax
  __int64 v247; // rdx
  __int64 v248; // r8
  __int64 v249; // rdx
  char v250; // r8
  __int64 v251; // r13
  char v252; // r8
  int v253; // edx
  __int64 v254; // rax
  __m128i v256; // xmm0
  __int64 v257; // rsi
  __int64 v258; // rdi
  const __m128i *v259; // rbx
  __m128i v261; // xmm0
  __int64 v262; // rax
  __int64 v263; // rdx
  unsigned __int64 v264; // rax
  __int64 v265; // r15
  __int64 v266; // rsi
  __int64 v267; // rdi
  __int64 v268; // rbx
  __m128i *v269; // rax
  __m128i v270; // xmm0
  __m128i v271; // xmm1
  __m128i v272; // xmm2
  __int64 v273; // rsi
  _QWORD *v274; // rdi
  __int64 v275; // rdx
  __int64 v276; // rdx
  __int64 v277; // rdi
  __int64 v278; // rsi
  __int64 v279; // rbx
  __int64 v280; // rsi
  _QWORD *v281; // rdi
  __int64 v282; // rdx
  __int64 v283; // rdx
  __int64 v284; // rsi
  _QWORD *v285; // rdi
  __int64 v286; // rdx
  __int64 v287; // rdx
  __int64 v288; // rdi
  __int64 v289; // rsi
  __int64 v290; // rbx
  __int64 v291; // rax
  __int64 v293; // rsi
  __int64 v294; // rdi
  __int64 v295; // rbx
  __int64 v296; // rsi
  __int64 v297; // rax
  __m128i v298; // xmm0
  __m128i v299; // xmm1
  __m128i v300; // xmm2
  __int64 v301; // rsi
  __int64 v302; // rdi
  const __m128i *v303; // rax
  __m128i v304; // xmm0
  __int64 v305; // rbx
  char v306; // si
  __int64 v307; // rax
  __int64 v308; // rsi
  __m128i *v309; // rax
  __m128i v310; // xmm0
  __m128i v311; // xmm1
  __m128i v312; // xmm2
  __int64 v313; // r15
  __int64 v314; // r14
  __int64 v315; // rdx
  __int128 v316; // xmm0
  __int64 v317; // rdi
  __int128 v318; // xmm0
  __int128 v319; // xmm1
  __int128 v320; // xmm2
  _QWORD *v321; // rdi
  _OWORD *v322; // rcx
  __int128 v323; // xmm0
  __int64 v324; // rsi
  __int64 v325; // rdi
  _QWORD *v326; // rdi
  _DWORD *v327; // rsi
  __int64 v328; // rsi
  __m128i v329; // xmm0
  __int128 v330; // xmm1
  __m128i v331; // xmm2
  __int64 v332; // rbx
  unsigned __int64 v333; // rdi
  __int64 v334; // rdx
  __int64 v335; // rsi
  __int64 v336; // rcx
  unsigned __int64 v337; // rax
  __m128i v338; // xmm8
  __int64 v340; // r13
  unsigned __int64 v342; // r15
  int v343; // eax
  __int64 jj; // rdx
  unsigned __int64 v345; // rax
  unsigned __int64 v346; // r14
  char v347; // r13
  __int64 v348; // rsi
  unsigned __int64 v349; // rax
  signed __int64 v351; // rdx
  __int64 v352; // r14
  __m128i v353; // xmm0
  __m128i v354; // xmm7
  __int64 kk; // r9
  unsigned __int64 v356; // rax
  __m128i v357; // xmm8
  __int64 v359; // r8
  __int64 v360; // rdi
  __int64 v361; // rsi
  int v362; // eax
  int v363; // eax
  __int64 v364; // rbx
  __m128i v365; // kr50_16
  __m128i v366; // xmm0
  __m128i v367; // xmm7
  BOOL v368; // eax
  char v369; // si
  __int64 v370; // rdi
  __int64 v371; // r14
  __int64 v372; // r15
  __int64 v373; // rdx
  __int64 v374; // r14
  __int64 v375; // rax
  __int64 v376; // rdi
  __int64 v377; // rbx
  __int64 v378; // rsi
  __int64 v379; // rax
  unsigned __int8 v380; // cl
  __int64 v381; // rsi
  __m128i v382; // xmm0
  __m128i v383; // xmm1
  __int64 m; // r15
  _BYTE v385[192]; // [rsp+30h] [rbp-50h] BYREF
  int v386; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v387; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v388; // [rsp+108h] [rbp+88h]
  __int64 v389; // [rsp+118h] [rbp+98h]
  _BYTE v390[104]; // [rsp+150h] [rbp+D0h] BYREF
  char v391[48]; // [rsp+1B8h] [rbp+138h] BYREF
  char v392[384]; // [rsp+1E8h] [rbp+168h] BYREF
  __int128 v393; // [rsp+368h] [rbp+2E8h]
  __int128 v394; // [rsp+378h] [rbp+2F8h]
  char v395[176]; // [rsp+388h] [rbp+308h] BYREF
  __int128 v396; // [rsp+438h] [rbp+3B8h]
  __int128 v397; // [rsp+448h] [rbp+3C8h]
  __int128 v398; // [rsp+458h] [rbp+3D8h]
  __int128 v399; // [rsp+468h] [rbp+3E8h]
  __int128 v400; // [rsp+478h] [rbp+3F8h]
  __int64 v401; // [rsp+488h] [rbp+408h]
  __int128 v402; // [rsp+490h] [rbp+410h]
  __int128 v403; // [rsp+4A0h] [rbp+420h]
  __int64 v404; // [rsp+4B0h] [rbp+430h]
  __int128 v405; // [rsp+4B8h] [rbp+438h]
  __int64 v406; // [rsp+4C8h] [rbp+448h]
  _QWORD v407[2]; // [rsp+4D0h] [rbp+450h] BYREF
  unsigned __int64 v408; // [rsp+4E0h] [rbp+460h]
  char v409[56]; // [rsp+4E8h] [rbp+468h] BYREF
  __int64 v410; // [rsp+520h] [rbp+4A0h]
  __int64 v411; // [rsp+528h] [rbp+4A8h]
  char v412[120]; // [rsp+538h] [rbp+4B8h] BYREF
  __int64 v413; // [rsp+5B0h] [rbp+530h]
  __m128i v414; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v415; // [rsp+5D0h] [rbp+550h]
  __m128i v416; // [rsp+5E0h] [rbp+560h]
  __int128 v417; // [rsp+5F0h] [rbp+570h]
  __int128 v418; // [rsp+600h] [rbp+580h]
  __int128 v419; // [rsp+610h] [rbp+590h]
  __m128i v420; // [rsp+620h] [rbp+5A0h]
  __int64 v421; // [rsp+630h] [rbp+5B0h]
  _BYTE v422[104]; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v423; // [rsp+6A8h] [rbp+628h] BYREF
  __int64 v424; // [rsp+6B0h] [rbp+630h]
  __m128i v425; // [rsp+6B8h] [rbp+638h]
  char v426; // [rsp+6C8h] [rbp+648h]
  __m128i v427; // [rsp+6D0h] [rbp+650h]
  __int64 v428; // [rsp+6E0h] [rbp+660h]
  unsigned __int64 v429; // [rsp+6E8h] [rbp+668h]
  __int64 v430; // [rsp+6F0h] [rbp+670h]
  char v431; // [rsp+6F8h] [rbp+678h]
  __int64 v432; // [rsp+AB8h] [rbp+A38h]
  __int64 v433; // [rsp+AC0h] [rbp+A40h]
  __int64 v434; // [rsp+AC8h] [rbp+A48h]
  _QWORD *v435; // [rsp+AD0h] [rbp+A50h]
  __int64 v436; // [rsp+AD8h] [rbp+A58h]
  __m128i v437; // [rsp+AE0h] [rbp+A60h]
  __m128i v438; // [rsp+AF0h] [rbp+A70h] BYREF
  __int128 v439; // [rsp+B00h] [rbp+A80h]
  __int128 v440; // [rsp+B10h] [rbp+A90h] BYREF
  __int128 v441; // [rsp+B20h] [rbp+AA0h] BYREF
  __int128 v442; // [rsp+B30h] [rbp+AB0h]
  __int128 v443; // [rsp+B40h] [rbp+AC0h]
  __int128 v444; // [rsp+B50h] [rbp+AD0h]
  __int128 v445; // [rsp+B60h] [rbp+AE0h]
  __int64 v446; // [rsp+B70h] [rbp+AF0h]
  __int64 v447; // [rsp+B78h] [rbp+AF8h]
  _DWORD *v448; // [rsp+B80h] [rbp+B00h]
  __int64 v449; // [rsp+B88h] [rbp+B08h] BYREF
  _QWORD *v450; // [rsp+B90h] [rbp+B10h]
  __int64 v451; // [rsp+B98h] [rbp+B18h]
  __int64 v452; // [rsp+BA0h] [rbp+B20h]
  int v453; // [rsp+BA8h] [rbp+B28h]
  __m128i v454; // [rsp+BB0h] [rbp+B30h] BYREF
  __m128i v455; // [rsp+BC0h] [rbp+B40h]
  __int64 v456; // [rsp+BD0h] [rbp+B50h]
  __m128i v457; // [rsp+BE0h] [rbp+B60h] BYREF
  __int128 v458; // [rsp+BF0h] [rbp+B70h] BYREF
  __int128 v459; // [rsp+C00h] [rbp+B80h]
  __m128i v460; // [rsp+C10h] [rbp+B90h] BYREF
  __int128 v461; // [rsp+C20h] [rbp+BA0h]
  __int64 v462; // [rsp+C30h] [rbp+BB0h]
  int v463; // [rsp+C3Ch] [rbp+BBCh]
  _QWORD *v464; // [rsp+C40h] [rbp+BC0h]
  _QWORD *v465; // [rsp+C48h] [rbp+BC8h]
  __m128i v466; // [rsp+C50h] [rbp+BD0h] BYREF
  __int128 v467; // [rsp+C60h] [rbp+BE0h]
  __int64 v468; // [rsp+C70h] [rbp+BF0h]
  __m128i v469; // [rsp+C80h] [rbp+C00h] BYREF
  __int128 v470; // [rsp+C90h] [rbp+C10h]
  __int128 v471; // [rsp+CA0h] [rbp+C20h] BYREF
  _BYTE v472[24]; // [rsp+CB0h] [rbp+C30h] BYREF
  __int64 v473; // [rsp+CC8h] [rbp+C48h]
  char **v474; // [rsp+CD0h] [rbp+C50h] BYREF
  __m128i v475; // [rsp+CE0h] [rbp+C60h] BYREF
  __m128i v476; // [rsp+CF0h] [rbp+C70h]
  __m128i v477; // [rsp+D00h] [rbp+C80h]
  __m128i v478; // [rsp+D10h] [rbp+C90h]
  __m128i v479; // [rsp+D20h] [rbp+CA0h]
  __m128i v480; // [rsp+D30h] [rbp+CB0h] BYREF
  char v481; // [rsp+D4Fh] [rbp+CCFh] BYREF
  HANDLE hObject; // [rsp+D50h] [rbp+CD0h] BYREF
  __int64 v483; // [rsp+D58h] [rbp+CD8h]
  __int64 v484; // [rsp+D60h] [rbp+CE0h]
  __int64 v485; // [rsp+D68h] [rbp+CE8h]
  signed __int64 v486; // [rsp+D70h] [rbp+CF0h]
  __int64 v487; // [rsp+D78h] [rbp+CF8h]
  __int64 v488; // [rsp+D80h] [rbp+D00h]
  __int64 v489; // [rsp+D88h] [rbp+D08h]
  char v490; // [rsp+D97h] [rbp+D17h]
  __int64 v491; // [rsp+D98h] [rbp+D18h]
  unsigned __int64 v492; // [rsp+DA0h] [rbp+D20h]
  char v493; // [rsp+DAFh] [rbp+D2Fh]
  __int64 v494; // [rsp+DB0h] [rbp+D30h]
  __int64 v495; // [rsp+DB8h] [rbp+D38h]

  v495 = -2;
  v491 = a3;
  v483 = a1;
  sub_1416B18A0((unsigned int)&v475, a2[33], a2[34], (unsigned int)aAccountDomainL, 20);
  v487 = v475.m128i_i64[1];
  sub_140C97180((unsigned int)v422, v475.m128i_i32[2], v476.m128i_i32[0], (unsigned int)&aAccountDomainL[20], 13);
  v6 = *(_QWORD *)v422;
  if ( *(_QWORD *)v422 != -1 )
  {
    *(_OWORD *)&v390[64] = *(_OWORD *)&v422[80];
    *(_OWORD *)&v390[48] = *(_OWORD *)&v422[64];
    *(_OWORD *)&v390[32] = *(_OWORD *)&v422[48];
    *(_OWORD *)&v390[16] = *(_OWORD *)&v422[32];
    *(__m128i *)v390 = _mm_loadu_si128((const __m128i *)&v422[16]);
  }
  v7 = *(void **)&v422[8];
  if ( v475.m128i_i64[0] )
    sub_140001660(v487, v475.m128i_i64[0], 1);
  if ( (_DWORD)v6 != -1 )
  {
    v8 = v483;
    *(_OWORD *)(v483 + 80) = *(_OWORD *)&v390[64];
    si128 = _mm_load_si128((const __m128i *)v390);
    v10 = *(_OWORD *)&v390[16];
    v11 = *(_OWORD *)&v390[32];
    *(_OWORD *)(v8 + 64) = *(_OWORD *)&v390[48];
    *(_OWORD *)(v8 + 48) = v11;
    *(_OWORD *)(v8 + 32) = v10;
    *(__m128i *)(v8 + 16) = si128;
    *(_QWORD *)v8 = v6;
    v12 = v8;
    *(_QWORD *)(v8 + 8) = v7;
    return v12;
  }
  hObject = v7;
  sub_140D12540(v422, a2[37], a2[38]);
  v13 = *(_QWORD *)v422;
  *(_OWORD *)v390 = *(_OWORD *)&v422[8];
  *(_OWORD *)&v390[16] = *(_OWORD *)&v422[24];
  *(_OWORD *)&v390[32] = *(_OWORD *)&v422[40];
  *(_OWORD *)&v390[48] = *(_OWORD *)&v422[56];
  *(_OWORD *)&v390[64] = *(_OWORD *)&v422[72];
  *(_QWORD *)&v390[80] = *(_QWORD *)&v422[88];
  v12 = v483;
  if ( *(_QWORD *)v422 != -1 )
  {
    *(_QWORD *)(v483 + 88) = *(_QWORD *)&v390[80];
    *(_OWORD *)(v12 + 72) = *(_OWORD *)&v390[64];
    v14 = _mm_load_si128((const __m128i *)v390);
    v15 = *(_OWORD *)&v390[16];
    v16 = *(_OWORD *)&v390[32];
    *(_OWORD *)(v12 + 56) = *(_OWORD *)&v390[48];
    *(_OWORD *)(v12 + 40) = v16;
    *(_OWORD *)(v12 + 24) = v15;
    *(__m128i *)(v12 + 8) = v14;
    *(_QWORD *)v12 = v13;
LABEL_476:
    v291 = sub_14143F370(&hObject);
    if ( v291 && (unsigned int)(v291 & 3) - 2 >= 2 && (v291 & 3) != 0 )
    {
      *(_QWORD *)&v422[8] = v291 - 1;
      v422[0] = 3;
      sub_1416EBAD0(&v422[8]);
    }
    CloseHandle(hObject);
    return v12;
  }
  v462 = *(_QWORD *)&v390[80];
  v461 = *(_OWORD *)&v390[64];
  v17 = _mm_load_si128((const __m128i *)v390);
  v460 = *(__m128i *)&v390[48];
  v459 = *(_OWORD *)&v390[32];
  v458 = *(_OWORD *)&v390[16];
  v457 = v17;
  v18 = v17.m128i_i64[1];
  v19 = 424LL * *(_QWORD *)&v390[16];
  v20 = (const __m128i *)sub_1404D9AA0(0);
  if ( !v20 )
    sub_14196A580(&off_141A6E388);
  v21 = _mm_loadu_si128(v20);
  ++v20->m128i_i64[0];
  v22 = _mm_loadu_si128((const __m128i *)&xmmword_141A1CBA0);
  *(__m128i *)&v422[16] = v22;
  v23 = _mm_loadu_si128((const __m128i *)&off_141A1CB90);
  *(__m128i *)v422 = v23;
  *(__m128i *)&v422[32] = v21;
  *(_QWORD *)v390 = v18;
  *(_QWORD *)&v390[8] = v18 + v19;
  *(_QWORD *)&v390[16] = a2;
  sub_14085F210(v422, v390);
  v438 = _mm_load_si128((const __m128i *)v422);
  v439 = *(_OWORD *)&v422[16];
  v440 = *(_OWORD *)&v422[32];
  v24 = *(_QWORD **)(v491 + 880);
  v25 = *(_QWORD *)(v491 + 888);
  v464 = a2;
  if ( !v25 )
  {
    v50 = 0;
    v49 = v491;
    goto LABEL_31;
  }
  v26 = &v24[48 * v25];
  v494 = *((_QWORD *)&v439 + 1);
  v27 = v438.m128i_i64[1];
  __SET_PAIR__(v488, v28, *(_OWORD *)&v438);
  v489 = v438.m128i_i64[0];
  do
  {
    if ( *((_DWORD *)v24 + 40) != 2 )
    {
      v29 = v24[22];
      if ( v29 == -1 )
        goto LABEL_12;
      v487 = v24[23];
      if ( !v494 )
        goto LABEL_27;
      v30 = v24[27];
      v31 = v24[24];
      v492 = v24[28];
      v32 = sub_1406D0E00(&v440, v30, v492);
      v33 = v31;
      v34 = _mm_cvtsi32_si128(v32 >> 57);
      v35 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v34, v34), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        v37 = v27 & v32;
        v38 = _mm_loadu_si128((const __m128i *)(v28 + v37));
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v38, v35));
        if ( (_DWORD)_RCX )
          break;
LABEL_23:
        v28 = v489;
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v38, (__m128i)-1LL)) )
          goto LABEL_27;
        v32 = i + v37 + 16;
      }
      v485 = v37;
      v484 = i;
      while ( 1 )
      {
        v486 = _RCX;
        __asm { tzcnt   ecx, ecx }
        v40 = -48 * (v27 & (v37 + _RCX));
        v41 = v489;
        if ( v492 == *(_QWORD *)(v489 + v40 - 32) )
        {
          v42 = v489 + v40;
          v43 = v30;
          v44 = v26;
          v45 = v30;
          v46 = v33;
          v47 = sub_141923B40(v43, *(_QWORD *)(v42 - 40), v492);
          v33 = v46;
          v30 = v45;
          v26 = v44;
          if ( !v47 )
            break;
        }
        v48 = v486 - 1;
        LOWORD(v48) = v486 & (v486 - 1);
        _RCX = v48;
        v37 = v485;
        v27 = v488;
        i = v484;
        if ( ((unsigned __int16)v486 & (unsigned __int16)(v486 - 1)) == 0 )
          goto LABEL_23;
      }
      v28 = v41;
      v27 = v488;
      if ( *(_QWORD *)(v42 - 8) != v33 || (unsigned int)sub_141923B40(*(_QWORD *)(v42 - 16), v487, v33) )
      {
LABEL_27:
        if ( v29 )
          sub_140001660(v487, v29, 1);
LABEL_12:
        v24[20] = 2;
      }
    }
    v24 += 48;
  }
  while ( v24 != v26 );
  v49 = v491;
  v24 = *(_QWORD **)(v491 + 880);
  v50 = *(_QWORD *)(v491 + 888);
LABEL_31:
  v51 = (_QWORD *)(v49 + 872);
  v52 = v24 - 48;
  v53 = 384 * v50;
  while ( v53 )
  {
    v54 = v52 + 48;
    v53 -= 384;
    v55 = *((_BYTE *)v52 + 753) == 0;
    v52 += 48;
    if ( !v55 )
    {
      sub_140D74C80(v422, v54);
      v56 = *(_QWORD *)v422;
      sub_1419234B0(v390, &v422[8], 376);
      v57 = (_DWORD *)(v491 + 152);
      if ( *(_DWORD *)(v491 + 152) == 2 )
        goto LABEL_38;
      goto LABEL_37;
    }
  }
  v56 = 2;
  v57 = (_DWORD *)(v491 + 152);
  if ( *(_DWORD *)(v491 + 152) == 2 )
    goto LABEL_38;
LABEL_37:
  sub_140037CD0(v57);
LABEL_38:
  v58 = v491;
  *(_QWORD *)(v491 + 152) = v56;
  sub_1419234B0(v58 + 160, v390, 376);
  v59 = v464[69];
  v433 = v464[70];
  sub_140D36BB0(&v386, v59);
  v435 = v51;
  v434 = v59;
  if ( v386 == -1 )
  {
    v62 = _mm_loadu_si128(&v387);
    v467 = v388;
    v60 = v389;
    v468 = v389;
    v466 = v62;
    v61 = *((_QWORD *)&v388 + 1);
  }
  else
  {
    LODWORD(v468) = 3;
    v466.m128i_i64[0] = 0;
    v466.m128i_i64[1] = 8;
    v467 = 0;
    sub_140CB96B0(&v386);
    v60 = 3;
    v61 = 0;
  }
  v448 = v57;
  sub_14022CB80(&v449, &v466);
  v453 = v60;
  v452 = v61;
  v484 = *((_QWORD *)&v439 + 1);
  v487 = v438.m128i_i64[1];
  v63 = v438.m128i_i64[0];
  v64 = *(_QWORD *)(v491 + 848);
  v494 = v438.m128i_i64[0];
  if ( v64 )
  {
    v65 = *(_QWORD **)(v491 + 840);
    v66 = 192 * v64;
    if ( v484 )
    {
      v67 = &v65[(unsigned __int64)v66 / 8];
      do
      {
        if ( *((_DWORD *)v65 + 24) != 2 )
        {
          v68 = v65[14];
          if ( v68 == -1 )
          {
LABEL_44:
            v65[12] = 2;
            *v65 = 0;
          }
          else
          {
            v69 = v65[19];
            v70 = v65[20];
            v492 = v65[15];
            v489 = v65[16];
            v488 = v69;
            v71 = sub_1406D0E00(&v440, v69, v70);
            _RCX = v71 >> 57;
            v73 = _mm_cvtsi32_si128(v71 >> 57);
            v74 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v73, v73), 0), 68);
            for ( j = 0; ; j += 16 )
            {
              v76 = v487 & v71;
              v77 = _mm_loadu_si128((const __m128i *)(v63 + v76));
              _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v77, v74));
              if ( _R14D )
                break;
LABEL_54:
              _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v77, (__m128i)-1LL));
              v63 = v494;
              if ( (_DWORD)_RCX )
                goto LABEL_58;
              v71 = j + v76 + 16;
            }
            v486 = v76;
            v485 = j;
            while ( 1 )
            {
              __asm { tzcnt   ecx, r14d }
              _RCX = -(__int64)(v487 & (v76 + _RCX));
              v63 = v494;
              if ( v70 == *(_QWORD *)(v494 + 48 * _RCX - 32) )
              {
                v79 = v494 + 48 * _RCX;
                if ( !(unsigned int)sub_141923B40(v488, *(_QWORD *)(v79 - 40), v70) )
                  break;
              }
              v80 = _R14D - 1;
              LOWORD(v80) = _R14D & (_R14D - 1);
              v55 = (_WORD)v80 == 0;
              _R14D = v80;
              v76 = v486;
              j = v485;
              if ( v55 )
                goto LABEL_54;
            }
            if ( *(_QWORD *)(v79 - 8) != v489 || (unsigned int)sub_141923B40(*(_QWORD *)(v79 - 16), v492, v489) )
            {
LABEL_58:
              if ( v68 )
                sub_140001660(v492, v68, 1);
              goto LABEL_44;
            }
          }
        }
        v65 += 24;
      }
      while ( v65 != v67 );
    }
    else
    {
      v81 = 0;
      do
      {
        if ( LODWORD(v65[v81 / 8 + 12]) != 2 )
        {
          v82 = v65[v81 / 8 + 14];
          if ( v82 != -1 && v82 )
            sub_140001660(v65[v81 / 8 + 15], v82, 1);
          v65[v81 / 8 + 12] = 2;
          v65[v81 / 8] = 0;
        }
        v81 += 192LL;
      }
      while ( v66 != v81 );
    }
  }
  if ( v451 )
  {
    v83 = v450;
    v84 = 192 * v451;
    if ( v484 )
    {
      v85 = &v450[(unsigned __int64)v84 / 8];
      do
      {
        if ( *((_DWORD *)v83 + 24) != 2 )
        {
          v86 = v83[14];
          if ( v86 == -1 )
          {
LABEL_70:
            v83[12] = 2;
            *v83 = 0;
          }
          else
          {
            v87 = v83[19];
            v88 = v83[20];
            v492 = v83[15];
            v489 = v83[16];
            v488 = v87;
            v89 = sub_1406D0E00(&v440, v87, v88);
            v90 = _mm_cvtsi32_si128(v89 >> 57);
            v91 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v90, v90), 0), 68);
            for ( k = 0; ; k += 16LL )
            {
              v93 = v487 & v89;
              HIDWORD(_RAX) = HIDWORD(v494);
              v95 = _mm_loadu_si128((const __m128i *)(v494 + v93));
              _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v95, v91));
              if ( _EDI )
                break;
LABEL_80:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v95, (__m128i)-1LL)) )
                goto LABEL_84;
              v89 = k + v93 + 16;
            }
            v486 = k;
            while ( 1 )
            {
              __asm { tzcnt   eax, edi }
              if ( v88 == *(_QWORD *)(v494 - 48 * (v487 & (v93 + _RAX)) - 32) )
              {
                v97 = v494 - 48 * (v487 & (v93 + _RAX));
                if ( !(unsigned int)sub_141923B40(v488, *(_QWORD *)(v97 - 40), v88) )
                  break;
              }
              _RAX = (unsigned int)(_EDI - 1);
              LOWORD(_RAX) = _EDI & (_EDI - 1);
              _EDI = _RAX;
              k = v486;
              if ( !(_WORD)_RAX )
                goto LABEL_80;
            }
            if ( *(_QWORD *)(v97 - 8) != v489 || (unsigned int)sub_141923B40(*(_QWORD *)(v97 - 16), v492, v489) )
            {
LABEL_84:
              if ( v86 )
                sub_140001660(v492, v86, 1);
              goto LABEL_70;
            }
          }
        }
        v83 += 24;
      }
      while ( v83 != v85 );
    }
    else
    {
      v98 = 0;
      do
      {
        if ( LODWORD(v83[v98 / 8 + 12]) != 2 )
        {
          v99 = v83[v98 / 8 + 14];
          if ( v99 != -1 && v99 )
            sub_140001660(v83[v98 / 8 + 15], v99, 1);
          v83[v98 / 8 + 12] = 2;
          v83[v98 / 8] = 0;
        }
        v98 += 192LL;
      }
      while ( v84 != v98 );
    }
  }
  v100 = v462;
  v486 = *((_QWORD *)&v461 + 1);
  if ( *((_QWORD *)&v458 + 1) == -1 )
    v475.m128i_i64[0] = -1;
  else
    sub_1416DB410(&v475, (char *)&v458 + 8);
  sub_14022C880(v390, &v457);
  if ( (_BYTE)v461 != 2 )
  {
    *(__m128i *)v472 = _mm_load_si128(&v460);
    v469.m128i_i32[0] = *(_DWORD *)((char *)&v461 + 1);
    *(__int32 *)((char *)v469.m128i_i32 + 3) = DWORD1(v461);
  }
  *(_QWORD *)&v422[72] = v486;
  *(__m128i *)&v422[24] = v475;
  *(_QWORD *)&v422[40] = v476.m128i_i64[0];
  *(_OWORD *)v422 = *(_OWORD *)v390;
  *(_QWORD *)&v422[16] = *(_QWORD *)&v390[16];
  *(__m128i *)&v422[48] = _mm_load_si128((const __m128i *)v472);
  v422[64] = v461;
  *(_DWORD *)&v422[65] = v469.m128i_i32[0];
  *(_DWORD *)&v422[68] = *(__int32 *)((char *)v469.m128i_i32 + 3);
  v422[84] = BYTE4(v462);
  if ( *(_DWORD *)(v491 + 824) > v100 )
    v100 = *(_DWORD *)(v491 + 824);
  v101 = 4;
  if ( v100 >= 5 )
    v101 = v100;
  *(_DWORD *)&v422[80] = v101;
  if ( (_BYTE)v461 == 2 )
  {
    v102 = *(_BYTE *)(v491 + 808);
    if ( v102 == 2 )
    {
      v103 = 0xA0000000FLL;
      v102 = 0;
      v104 = 0;
    }
    else
    {
      v104 = *(_QWORD *)(v491 + 792);
      v103 = *(_QWORD *)(v491 + 800);
      *(_DWORD *)&v472[3] = *(_DWORD *)(v491 + 812);
      *(_DWORD *)v472 = *(_DWORD *)(v491 + 809);
    }
    *(_QWORD *)&v422[48] = v104;
    *(_QWORD *)&v422[56] = v103;
    v422[64] = v102;
    *(_DWORD *)&v422[68] = *(_DWORD *)&v472[3];
    *(_DWORD *)&v422[65] = *(_DWORD *)v472;
  }
  if ( BYTE4(v462) == 2 )
  {
    v105 = 1;
    if ( (unsigned __int8)*(_DWORD *)(v491 + 828) != 2 )
      v105 = *(_DWORD *)(v491 + 828);
    v422[84] = v105;
  }
  v465 = (_QWORD *)(v491 + 832);
  v436 = v491 + 744;
  v106 = *(_QWORD *)&v422[8];
  v107 = *(_QWORD *)&v422[8] + 424LL * *(_QWORD *)&v422[16];
  v108 = *(_QWORD *)(v491 + 752);
  v489 = *(_QWORD *)(v491 + 760);
  v109 = 424 * v489;
  v494 = 0;
  v488 = v107;
  while ( 2 )
  {
    if ( v106 == v107 )
      goto LABEL_254;
    v110 = v106;
    if ( !v489 )
      goto LABEL_254;
LABEL_117:
    v487 = v110 + 424;
    v111 = *(_QWORD *)(v110 + 200);
    v112 = *(_QWORD *)(v110 + 208);
    v113 = 0;
LABEL_119:
    if ( *(_QWORD *)(v108 + v113 + 208) == v112
      && !(unsigned int)sub_141923B40(*(_QWORD *)(v108 + v113 + 200), v111, v112) )
    {
      v114 = *(unsigned __int8 *)(v108 + v113 + 418);
      if ( (_BYTE)v114 != 0xFF && *(_BYTE *)(v108 + v113) )
      {
        v115 = *(_QWORD *)(v108 + v113 + 8);
        v116 = sub_140D37BC0(*(_QWORD *)(v108 + v113 + 296), *(_QWORD *)(v108 + v113 + 304));
        v117 = sub_140D29D10(v110, v116, v114, v115);
        LOBYTE(v117) = (v494 | v117) & 1;
        goto LABEL_133;
      }
      if ( *(_BYTE *)(v110 + 418) == 0xFF )
      {
        v118 = *(_DWORD **)(v108 + v113 + 296);
        v119 = *(_QWORD *)(v108 + v113 + 304);
        sub_1408FEA60(v118, v119);
        if ( v120 )
        {
          if ( (v119 != 7 || *v118 ^ 0x6E6B6E75 | *(_DWORD *)((char *)v118 + 3) ^ 0x6E776F6E)
            && (*(_QWORD *)(v110 + 304) != v119 || (unsigned int)sub_141923B40(*(_QWORD *)(v110 + 296), v118, v119)) )
          {
            sub_1416DB410(v390, v108 + v113 + 288);
            v121 = *(_QWORD *)(v110 + 288);
            if ( v121 )
              sub_140001660(*(_QWORD *)(v110 + 296), v121, 1);
            v117 = *(_QWORD *)&v390[16];
            *(_QWORD *)(v110 + 304) = *(_QWORD *)&v390[16];
            *(__m128i *)(v110 + 288) = _mm_loadu_si128((const __m128i *)v390);
            LOBYTE(v117) = 1;
LABEL_133:
            v494 = v117;
          }
        }
      }
      if ( *(_QWORD *)(v108 + v113 + 336) != -1 )
      {
        if ( *(_QWORD *)(v110 + 336) == -1
          || (v122 = *(_QWORD *)(v110 + 352), v122 != *(_QWORD *)(v108 + v113 + 352))
          || (unsigned int)sub_141923B40(*(_QWORD *)(v110 + 344), *(_QWORD *)(v108 + v113 + 344), v122) )
        {
          sub_1416DB410(v390, v108 + v113 + 336);
          v123 = *(_QWORD *)v390;
          v124 = &v390[8];
          v475 = *(__m128i *)&v390[8];
          v125 = *(_QWORD *)(v110 + 336);
          if ( v125 != -1 && v125 )
            sub_140001660(*(_QWORD *)(v110 + 344), v125, 1);
          *(_QWORD *)(v110 + 336) = v123;
          *(__m128i *)(v110 + 344) = _mm_load_si128(&v475);
          LOBYTE(v124) = 1;
          v494 = (__int64)v124;
        }
      }
      if ( *(_QWORD *)(v108 + v113 + 360) != -1 )
      {
        if ( *(_QWORD *)(v110 + 360) == -1
          || (v126 = *(_QWORD *)(v110 + 376), v126 != *(_QWORD *)(v108 + v113 + 376))
          || (unsigned int)sub_141923B40(*(_QWORD *)(v110 + 368), *(_QWORD *)(v108 + v113 + 368), v126) )
        {
          sub_1416DB410(v390, v108 + v113 + 360);
          v127 = *(_QWORD *)v390;
          v128 = &v390[8];
          v475 = *(__m128i *)&v390[8];
          v129 = *(_QWORD *)(v110 + 360);
          if ( v129 != -1 && v129 )
            sub_140001660(*(_QWORD *)(v110 + 368), v129, 1);
          *(_QWORD *)(v110 + 360) = v127;
          *(__m128i *)(v110 + 368) = _mm_load_si128(&v475);
          LOBYTE(v128) = 1;
          v494 = (__int64)v128;
        }
      }
      if ( *(_QWORD *)(v110 + 384) == -1 && *(_QWORD *)(v108 + v113 + 384) != -1 )
      {
        sub_1416DB410(v390, v108 + v113 + 384);
        v130 = *(_QWORD *)v390;
        v131 = &v390[8];
        v475 = *(__m128i *)&v390[8];
        v132 = *(_QWORD *)(v110 + 384);
        if ( v132 != -1 && v132 )
          sub_140001660(*(_QWORD *)(v110 + 392), v132, 1);
        *(_QWORD *)(v110 + 384) = v130;
        *(__m128i *)(v110 + 392) = _mm_load_si128(&v475);
        LOBYTE(v131) = 1;
        v494 = (__int64)v131;
      }
      if ( *(_QWORD *)(v110 + 64)
        || *(_BYTE *)(v108 + v113 + 64)
        || *(_BYTE *)(v110 + 419) != 0xFF
        || *(_BYTE *)(v108 + v113 + 419) != 0xFF
        || *(_BYTE *)(v110 + 48) )
      {
        LODWORD(v492) = 0;
        if ( *(_DWORD *)(v108 + v113 + 32) == 1 )
          goto LABEL_162;
        goto LABEL_167;
      }
      LODWORD(v492) = *(_BYTE *)(v108 + v113 + 48) ^ 1;
      if ( *(_DWORD *)(v108 + v113 + 32) != 1 )
        goto LABEL_167;
LABEL_162:
      v133 = *(_QWORD *)(v108 + v113 + 40);
      v134 = *(_QWORD *)(v110 + 32);
      v135 = *(_QWORD *)(v110 + 40);
      sub_1414331D0(v390);
      v136 = (*(int *)v390 >> 13) - 1;
      v137 = 0;
      if ( *(int *)v390 >> 13 <= 0 )
      {
        v138 = (1 - (*(int *)v390 >> 13)) / 0x190u + 1;
        v136 += 400 * v138;
        v137 = -146097 * v138;
      }
      v139 = *(unsigned int *)&v390[8] / 0xF4240uLL
           + 1000
           * (*(unsigned int *)&v390[4]
            + 86400LL
            * (((v136 / 100) >> 2) + ((1461 * v136) >> 2) + v137 + ((*(_DWORD *)v390 >> 4) & 0x1FF) - v136 / 100 - 719163))
           + 1000;
      v140 = 1000 * v133;
      if ( (unsigned __int64)(v133 - 1) >= 0x2540BE3FFLL )
        v140 = v133;
      if ( v140 > v139 )
        goto LABEL_167;
      if ( !v134 )
        goto LABEL_184;
      v150 = 1000 * v135;
      if ( (unsigned __int64)(v135 - 1) >= 0x2540BE3FFLL )
        v150 = v135;
      if ( v140 <= v150 && v150 <= v139 )
      {
LABEL_167:
        if ( *(_DWORD *)(v108 + v113 + 48) != 1 )
          goto LABEL_185;
      }
      else
      {
LABEL_184:
        *(__m128i *)(v110 + 32) = _mm_loadu_si128((const __m128i *)(v108 + v113 + 32));
        LOBYTE(v139) = 1;
        v494 = v139;
        if ( *(_DWORD *)(v108 + v113 + 48) != 1 )
          goto LABEL_185;
      }
      v141 = *(_QWORD *)(v108 + v113 + 56);
      v142 = *(_QWORD *)(v110 + 48);
      v143 = *(_QWORD *)(v110 + 56);
      sub_1414331D0(v390);
      v144 = (*(int *)v390 >> 13) - 1;
      v145 = 0;
      if ( *(int *)v390 >> 13 <= 0 )
      {
        v146 = (1 - (*(int *)v390 >> 13)) / 0x190u + 1;
        v144 += 400 * v146;
        v145 = -146097 * v146;
      }
      v147 = *(unsigned int *)&v390[8] / 0xF4240uLL
           + 1000
           * (*(unsigned int *)&v390[4]
            + 86400LL
            * (((v144 / 100) >> 2) + ((1461 * v144) >> 2) + v145 + ((*(_DWORD *)v390 >> 4) & 0x1FF) - v144 / 100 - 719163))
           + 1000;
      v148 = 1000 * v141;
      if ( (unsigned __int64)(v141 - 1) >= 0x2540BE3FFLL )
        v148 = v141;
      if ( v148 <= v147 )
      {
        if ( !v142 )
          goto LABEL_178;
        v149 = 1000 * v143;
        if ( (unsigned __int64)(v143 - 1) >= 0x2540BE3FFLL )
          v149 = v143;
        if ( v148 > v149 || v149 > v147 )
        {
LABEL_178:
          *(__m128i *)(v110 + 48) = _mm_loadu_si128((const __m128i *)(v108 + v113 + 48));
          LOBYTE(v147) = 1;
          v494 = v147;
        }
      }
LABEL_185:
      v151 = 0x2010100u >> (8 * (*(_BYTE *)(v110 + 419) + 1));
      v152 = 0x2010100u >> (8 * (*(_BYTE *)(v108 + v113 + 419) + 1));
      if ( (_BYTE)v152 == (_BYTE)v151 )
      {
        if ( !*(_BYTE *)(v108 + v113 + 64) )
          goto LABEL_197;
        v153 = *(_QWORD *)(v108 + v113 + 72);
        v154 = *(_QWORD *)(v110 + 64);
        v155 = *(_QWORD *)(v110 + 72);
        sub_1414331D0(v390);
        v156 = (*(int *)v390 >> 13) - 1;
        v157 = 0;
        if ( *(int *)v390 >> 13 <= 0 )
        {
          v158 = (1 - (*(int *)v390 >> 13)) / 0x190u + 1;
          v156 += 400 * v158;
          v157 = -146097 * v158;
        }
        v159 = *(unsigned int *)&v390[8] / 0xF4240uLL
             + 1000
             * (*(unsigned int *)&v390[4]
              + 86400LL
              * (((v156 / 100) >> 2)
               + ((1461 * v156) >> 2)
               + v157
               + ((*(_DWORD *)v390 >> 4) & 0x1FF)
               - v156 / 100
               - 719163))
             + 1000;
        v160 = 1000 * v153;
        if ( (unsigned __int64)(v153 - 1) >= 0x2540BE3FFLL )
          v160 = v153;
        if ( v160 > v159 )
          goto LABEL_197;
        if ( v154 )
        {
          v161 = 1000 * v155;
          if ( (unsigned __int64)(v155 - 1) >= 0x2540BE3FFLL )
            v161 = v155;
          if ( v160 <= v161 && v161 <= v159 )
          {
LABEL_197:
            if ( (_BYTE)v492 )
            {
              v162 = *(unsigned __int8 *)(v108 + v113 + 416);
              v107 = v488;
              v106 = v110 + 424;
              if ( (_BYTE)v162 != 2 && *(_BYTE *)(v110 + 416) != (_BYTE)v162 )
              {
                *(_BYTE *)(v110 + 416) = v162;
                LOBYTE(v162) = 1;
                v494 = v162;
              }
              if ( *(_QWORD *)(v108 + v113 + 16) )
              {
                v163 = *(_QWORD *)(v108 + v113 + 24);
                if ( *(_DWORD *)(v110 + 16) != 1 || *(_QWORD *)(v110 + 24) != v163 )
                {
                  *(_QWORD *)(v110 + 16) = 1;
                  *(_QWORD *)(v110 + 24) = v163;
                  LOBYTE(v163) = 1;
                  v494 = v163;
                }
              }
              v164 = *(unsigned __int8 *)(v108 + v113 + 417);
              if ( (_BYTE)v164 != 2 && *(_BYTE *)(v110 + 417) != (_BYTE)v164 )
              {
                *(_BYTE *)(v110 + 417) = v164;
                goto LABEL_233;
              }
            }
            else
            {
              v107 = v488;
              v106 = v110 + 424;
            }
            goto LABEL_234;
          }
        }
      }
      else if ( (unsigned __int8)v152 <= (unsigned __int8)v151 )
      {
        goto LABEL_197;
      }
      v165 = *(_BYTE *)(v110 + 416);
      v166 = *(_BYTE *)(v108 + v113 + 416);
      if ( v165 == 2 )
      {
        v107 = v488;
        v106 = v110 + 424;
        if ( v166 != 2 )
        {
LABEL_232:
          *(_BYTE *)(v110 + 416) = v166;
          *(_OWORD *)(v110 + 16) = *(_OWORD *)(v108 + v113 + 16);
          *(_BYTE *)(v110 + 417) = *(_BYTE *)(v108 + v113 + 417);
          v164 = *(unsigned __int8 *)(v108 + v113 + 419);
          *(_BYTE *)(v110 + 419) = v164;
          *(__m128i *)(v110 + 64) = _mm_loadu_si128((const __m128i *)(v108 + v113 + 64));
LABEL_233:
          LOBYTE(v164) = 1;
          v494 = v164;
LABEL_234:
          v173 = *(_QWORD *)(v108 + v113 + 80);
          v174 = *(_QWORD *)(v108 + v113 + 88);
          if ( *(_BYTE *)(v110 + 80) )
          {
            v175 = *(_QWORD *)(v110 + 88);
            v176 = v175;
            if ( v174 > v175 )
              v176 = *(_QWORD *)(v108 + v113 + 88);
            if ( !v173 || v175 >= v174 )
            {
LABEL_242:
              v177 = *(_QWORD *)(v108 + v113 + 96);
              v178 = *(_QWORD *)(v108 + v113 + 104);
              if ( *(_DWORD *)(v110 + 96) == 1 )
              {
                v179 = *(_QWORD *)(v110 + 104);
                v180 = v179;
                if ( v178 > v179 )
                  v180 = *(_QWORD *)(v108 + v113 + 104);
                if ( v177 && v179 < v178 )
                {
LABEL_112:
                  *(_QWORD *)(v110 + 96) = 1;
                  *(_QWORD *)(v110 + 104) = v180;
                  LOBYTE(v180) = 1;
                  v494 = v180;
                  continue;
                }
              }
              else
              {
                v180 = *(_QWORD *)(v108 + v113 + 104);
                if ( v177 )
                  goto LABEL_112;
              }
              continue;
            }
          }
          else
          {
            v176 = *(_QWORD *)(v108 + v113 + 88);
            if ( !v173 )
              goto LABEL_242;
          }
          *(_QWORD *)(v110 + 80) = 1;
          *(_QWORD *)(v110 + 88) = v176;
          LOBYTE(v176) = 1;
          v494 = v176;
          goto LABEL_242;
        }
      }
      else
      {
        v107 = v488;
        v106 = v110 + 424;
        if ( v165 != v166 )
          goto LABEL_232;
      }
      v167 = *(_BYTE *)(v108 + v113 + 16);
      if ( *(_DWORD *)(v110 + 16) == 1 )
      {
        if ( !v167 || *(_QWORD *)(v110 + 24) != *(_QWORD *)(v108 + v113 + 24) )
          goto LABEL_231;
LABEL_219:
        v168 = *(_BYTE *)(v110 + 417);
        v169 = *(_BYTE *)(v108 + v113 + 417);
        if ( v168 == 2 )
        {
          if ( v169 == 2 )
          {
LABEL_223:
            v170 = *(_BYTE *)(v110 + 419);
            v171 = *(_BYTE *)(v108 + v113 + 419);
            if ( v170 == -1 )
            {
              if ( v171 == -1 )
              {
LABEL_227:
                v172 = *(_BYTE *)(v108 + v113 + 64);
                if ( *(_DWORD *)(v110 + 64) != 1 )
                {
                  v166 = *(_BYTE *)(v110 + 416);
                  if ( !v172 )
                    goto LABEL_234;
                  goto LABEL_232;
                }
                if ( v172 )
                {
                  v166 = *(_BYTE *)(v110 + 416);
                  if ( *(_QWORD *)(v110 + 72) == *(_QWORD *)(v108 + v113 + 72) )
                    goto LABEL_234;
                  goto LABEL_232;
                }
              }
            }
            else if ( v170 == v171 )
            {
              goto LABEL_227;
            }
          }
        }
        else if ( v168 == v169 )
        {
          goto LABEL_223;
        }
      }
      else if ( !v167 )
      {
        goto LABEL_219;
      }
LABEL_231:
      v166 = *(_BYTE *)(v110 + 416);
      goto LABEL_232;
    }
    break;
  }
  v113 += 424;
  if ( v109 != v113 )
    goto LABEL_119;
  v110 = v487;
  if ( v487 != v107 )
    goto LABEL_117;
LABEL_254:
  if ( (v494 & 1) != 0 )
  {
    v475.m128i_i32[0] = sub_1416B2E50();
    v475.m128i_i32[1] = v181;
    sub_1416B2E00(v390, &v475, 3577643008LL, 27111902);
    if ( v390[0] )
      v182 = 0;
    else
      v182 = *(_QWORD *)&v390[8];
    if ( v486 > v182 )
      v182 = v486;
    if ( *(_QWORD *)(v491 + 816) > v182 )
      v182 = *(_QWORD *)(v491 + 816);
    *(_QWORD *)&v422[72] = v182;
  }
  v446 = *(_QWORD *)&v422[80];
  v445 = *(_OWORD *)&v422[64];
  v444 = *(_OWORD *)&v422[48];
  v443 = *(_OWORD *)&v422[32];
  v442 = *(_OWORD *)&v422[16];
  v441 = *(_OWORD *)v422;
  v183 = *(_QWORD *)&v422[8];
  v184 = *(_QWORD *)&v422[16];
  v185 = sub_1416AE140();
  v187 = v185;
  if ( *(_BYTE *)(v185 + 16) == 1 )
  {
    v188 = *(_OWORD *)v185;
  }
  else
  {
    *(_QWORD *)&v188 = sub_1416C5230();
    *(_OWORD *)v187 = v188;
    *(_BYTE *)(v187 + 16) = 1;
  }
  *(_QWORD *)v187 = v188 + 1;
  *(_OWORD *)&v422[16] = xmmword_141A90850;
  *(_OWORD *)v422 = *(_OWORD *)&off_141A90840;
  *(_OWORD *)&v422[32] = v188;
  if ( v184 )
  {
    LOBYTE(v186) = 1;
    sub_141962910(v422, v184, &v422[32], v186);
    for ( m = 0; m != v184; ++m )
    {
      sub_1416DB410(v390, v183 + 424 * m + 192);
      sub_140871180(v422, v390);
    }
  }
  v189 = *(__m128 *)&v422[16];
  *(_OWORD *)&v390[32] = *(_OWORD *)&v422[32];
  *(_OWORD *)&v390[16] = *(_OWORD *)&v422[16];
  *(_OWORD *)v390 = *(_OWORD *)v422;
  v190 = v453;
  v191 = v452;
  sub_14022CB80(v422, &v449);
  v447 = v191;
  v476.m128i_i64[1] = v191;
  v475 = *(__m128i *)v422;
  v192 = *(_QWORD *)&v422[16];
  v476.m128i_i64[0] = *(_QWORD *)&v422[16];
  if ( *(_DWORD *)(v491 + 864) > v190 )
    v190 = *(_DWORD *)(v491 + 864);
  if ( v190 < 2 )
    v190 = 1;
  v477.m128i_i32[0] = v190;
  sub_14019D000(&v475, v390);
  LOBYTE(v489) = v476.m128i_i64[0] != v192;
  v193 = *(__int64 **)(v491 + 840);
  v487 = (__int64)&v193[24 * *(_QWORD *)(v491 + 848)];
LABEL_272:
  v194 = *(_QWORD *)&v390[24];
  v196 = *(_QWORD *)&v390[8];
  v195 = *(_QWORD *)v390;
  for ( n = v193; n != (__int64 *)v487; n += 24 )
  {
    if ( v194 )
    {
      v204 = sub_1406CECD0(&v390[32], n + 18);
      _RCX = v204 >> 57;
      v205 = _mm_cvtsi32_si128(v204 >> 57);
      v206 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v205, v205), 0), 68);
      v207 = n[19];
      v208 = n[20];
      for ( ii = 0; ; ii += 16LL )
      {
        v198 = v196 & v204;
        v199 = _mm_loadu_si128((const __m128i *)(v195 + v198));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v199, v206));
        if ( _R12D )
          break;
LABEL_278:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v199, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_283;
        v204 = ii + v198 + 16;
      }
      v494 = v198;
      v492 = ii;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r12d }
        _RCX = -(__int64)(v196 & (v198 + _RCX));
        if ( v208 == *(_QWORD *)(v195 + 24 * _RCX - 8)
          && !(unsigned int)sub_141923B40(v207, *(_QWORD *)(v195 + 24 * _RCX - 16), v208) )
        {
          break;
        }
        v202 = _R12D - 1;
        LOWORD(v202) = _R12D & (_R12D - 1);
        v55 = (_WORD)v202 == 0;
        _R12D = v202;
        v198 = v494;
        ii = v492;
        if ( v55 )
          goto LABEL_278;
      }
      v209 = n + 24;
      if ( v476.m128i_i64[0] )
      {
        v210 = 192 * v476.m128i_i64[0];
        v211 = v475.m128i_i64[1] + 112;
        while ( *(_QWORD *)(v211 + 48) != v208 || (unsigned int)sub_141923B40(*(_QWORD *)(v211 + 40), v207, v208) )
        {
          v211 += 192;
          v210 -= 192;
          if ( !v210 )
            goto LABEL_296;
        }
        sub_1416DB410(&v469, v211 + 32);
        v212 = *(_QWORD *)(v211 - 96);
        if ( v212 != 2 )
        {
          v206.m128i_i64[0] = *(_QWORD *)(v211 - 72);
          LODWORD(v484) = *(_DWORD *)(v211 - 64);
          v199.m128i_i64[0] = *(_QWORD *)(v211 - 80);
          v432 = *(_QWORD *)(v211 - 88);
        }
        v492 = *(_QWORD *)(v211 - 56);
        if ( v492 != 2 )
        {
          v3 = *(_QWORD *)(v211 - 32);
          v463 = *(_DWORD *)(v211 - 24);
          v4 = (__m128)*(unsigned __int64 *)(v211 - 40);
          v209 = *(__int64 **)(v211 - 48);
        }
        v213 = *(_QWORD *)(v211 + 64);
        v214 = *(_BYTE *)(v211 + 72);
        LODWORD(v488) = *(_DWORD *)(v211 + 56);
        v215 = *(unsigned int *)(v211 + 60);
        LODWORD(v486) = *(_DWORD *)(v211 + 60);
        v494 = *(_QWORD *)(v211 - 16);
        if ( v494 != 2 )
        {
          LOBYTE(v210) = *(_BYTE *)(v211 + 24);
          if ( *(_QWORD *)v211 == -1 )
          {
            v485 = -1;
          }
          else
          {
            sub_1416DB410(v472, v211);
            v485 = *(_QWORD *)v472;
            v437 = _mm_loadu_si128((const __m128i *)&v472[8]);
          }
          v215 = *(_QWORD *)(v211 - 8);
        }
        v227 = *(_QWORD *)(v211 - 112);
        v228 = *(_QWORD *)(v211 - 104);
        v428 = v470;
        v427 = v469;
        v430 = v213;
        v431 = v214;
        *(_QWORD *)&v422[16] = v212;
        *(_QWORD *)&v422[24] = v432;
        *(_QWORD *)&v422[32] = v199.m128i_i64[0];
        *(_QWORD *)&v422[40] = v206.m128i_i64[0];
        *(_DWORD *)&v422[48] = v484;
        *(_QWORD *)&v422[56] = v492;
        *(_QWORD *)&v422[64] = v209;
        _mm_storel_ps((double *)&v422[72], v4);
        *(_QWORD *)&v422[80] = v3;
        *(_DWORD *)&v422[88] = v463;
        v429 = __PAIR64__(v486, v488);
        *((_QWORD *)&v231 + 1) = v494;
        *(_QWORD *)&v422[96] = v494;
        v423 = v215;
        v424 = v485;
        v229 = *(double *)v437.m128i_i64;
        v425 = v437;
        v426 = v210;
        v230 = v227;
        *(_QWORD *)v422 = v227;
        *(_QWORD *)&v422[8] = v228;
        *(_QWORD *)&v231 = n[22];
        if ( (_QWORD)v231 == v213 )
        {
          v232 = *((unsigned __int8 *)n + 184);
          v193 = n + 24;
          if ( v214 == (_BYTE)v232 )
          {
            *((_QWORD *)&v231 + 1) = n[2];
            if ( *((_QWORD *)&v231 + 1) == 2 )
            {
              if ( (_DWORD)v212 != 2 )
                goto LABEL_316;
            }
            else
            {
              if ( (_DWORD)v212 == 2 )
                goto LABEL_316;
              v229 = *((double *)n + 5);
              if ( v229 != *(double *)(v211 - 72) || *((_DWORD *)n + 12) != *(_DWORD *)(v211 - 64) )
                goto LABEL_316;
              v250 = *(_BYTE *)(v211 - 80);
              if ( *((_DWORD *)n + 8) == 1 )
              {
                if ( !v250 || *((_DWORD *)n + 9) != *(_DWORD *)(v211 - 76) )
                  goto LABEL_316;
              }
              else if ( v250 )
              {
                goto LABEL_316;
              }
              if ( DWORD2(v231) == 1 )
              {
                if ( (v212 & 1) == 0 )
                  goto LABEL_316;
                *((_QWORD *)&v231 + 1) = n[3];
                if ( *((_QWORD *)&v231 + 1) != *(_QWORD *)(v211 - 88) )
                  goto LABEL_316;
              }
              else if ( (v212 & 1) != 0 )
              {
                goto LABEL_316;
              }
            }
            *((_QWORD *)&v231 + 1) = n[7];
            if ( *((_QWORD *)&v231 + 1) == 2 )
            {
              if ( (_DWORD)v492 != 2 )
                goto LABEL_316;
            }
            else
            {
              if ( (_DWORD)v492 == 2 )
                goto LABEL_316;
              v229 = *((double *)n + 10);
              if ( v229 != *(double *)(v211 - 32) || *((_DWORD *)n + 22) != *(_DWORD *)(v211 - 24) )
                goto LABEL_316;
              v252 = *(_BYTE *)(v211 - 40);
              if ( *((_DWORD *)n + 18) == 1 )
              {
                if ( !v252 || *((_DWORD *)n + 19) != *(_DWORD *)(v211 - 36) )
                  goto LABEL_316;
              }
              else if ( v252 )
              {
                goto LABEL_316;
              }
              if ( DWORD2(v231) == 1 )
              {
                if ( (v492 & 1) == 0 )
                  goto LABEL_316;
                *((_QWORD *)&v231 + 1) = n[8];
                if ( *((_QWORD *)&v231 + 1) != *(_QWORD *)(v211 - 48) )
                  goto LABEL_316;
              }
              else if ( (v492 & 1) != 0 )
              {
                goto LABEL_316;
              }
            }
            v238 = *((_DWORD *)n + 42);
            if ( ((unsigned int)v488 & v238) != 0 )
            {
              *((_QWORD *)&v231 + 1) = (unsigned int)v486;
              if ( *((_DWORD *)n + 43) != (_DWORD)v486 )
                goto LABEL_316;
            }
            else
            {
              *((_QWORD *)&v231 + 1) = (unsigned int)v488 | v238;
              if ( DWORD2(v231) )
                goto LABEL_316;
            }
          }
          else
          {
            if ( v214 )
              goto LABEL_321;
            v55 = (_BYTE)v232 == 0;
            LOBYTE(v232) = 1;
            if ( v55 )
              goto LABEL_321;
LABEL_316:
            v430 = n[22];
            v431 = v232;
            *(_QWORD *)&v231 = n[2];
            if ( (_QWORD)v231 != 2 )
            {
              v229 = *((double *)n + 5);
              v232 = *((_DWORD *)n + 12);
              v189 = (__m128)(unsigned __int64)n[4];
              *((_QWORD *)&v231 + 1) = n[3];
            }
            *(_OWORD *)&v422[16] = v231;
            _mm_storel_ps((double *)&v422[32], v189);
            *(double *)&v422[40] = v229;
            *(_DWORD *)&v422[48] = v232;
            if ( n[7] != 2 )
            {
              v229 = *((double *)n + 10);
              v232 = *((_DWORD *)n + 22);
              v189 = (__m128)(unsigned __int64)n[9];
              *((_QWORD *)&v231 + 1) = n[8];
            }
            *(_QWORD *)&v422[56] = n[7];
            *(_QWORD *)&v422[64] = *((_QWORD *)&v231 + 1);
            _mm_storel_ps((double *)&v422[72], v189);
            *(double *)&v422[80] = v229;
            *(_DWORD *)&v422[88] = v232;
            v429 = n[21];
          }
        }
        else
        {
          v193 = n + 24;
          if ( (__int64)v231 > v213 )
          {
            v232 = *((unsigned __int8 *)n + 184);
            goto LABEL_316;
          }
        }
LABEL_321:
        v233 = n[12];
        if ( v233 != 2 )
        {
          if ( (_DWORD)v494 == 2 )
            goto LABEL_323;
          sub_1414331D0(v472);
          v239 = (*(int *)v472 >> 13) - 1;
          v240 = 0;
          if ( *(int *)v472 >> 13 <= 0 )
          {
            v241 = (1 - (*(int *)v472 >> 13)) / 0x190u + 1;
            v239 += 400 * v241;
            v240 = -146097 * v241;
          }
          v242 = 1000
               * (*(unsigned int *)&v472[4]
                + 86400LL
                * (((v239 / 100) >> 2)
                 + ((1461 * v239) >> 2)
                 + v240
                 + ((*(_DWORD *)v472 >> 4) & 0x1FF)
                 - v239 / 100
                 - 719163));
          v243 = n + 22;
          if ( *(_BYTE *)n )
            v243 = n + 1;
          v244 = v242 + *(unsigned int *)&v472[8] / 0xF4240uLL + 1000;
          v245 = *v243;
          v246 = 1000 * v245;
          if ( (unsigned __int64)(v245 - 1) >= 0x2540BE3FFLL )
            v246 = v245;
          if ( v246 <= v244 )
          {
            v247 = v211 + 176;
            if ( v230 )
              v247 = v211 + 8;
            v248 = *(_QWORD *)(v247 - 112);
            v249 = 1000 * v248;
            if ( (unsigned __int64)(v248 - 1) >= 0x2540BE3FFLL )
              v249 = v248;
            if ( v249 > v244 || v246 >= v249 )
            {
LABEL_323:
              v234 = *((_BYTE *)n + 136);
              if ( n[14] == -1 )
              {
                v235 = -1;
                v236 = n[13];
                v237 = v485;
                if ( (_DWORD)v494 == 2 )
                  goto LABEL_358;
              }
              else
              {
                sub_1416DB410(v472, n + 14);
                v235 = *(_QWORD *)v472;
                v469 = *(__m128i *)&v472[8];
                v236 = n[13];
                v237 = v485;
                if ( (_DWORD)v494 == 2 )
                  goto LABEL_358;
              }
              if ( v237 != -1 && v237 )
                sub_140001660(v425.m128i_i64[0], v237, 1);
LABEL_358:
              *(_QWORD *)&v422[96] = v233;
              v423 = v236;
              v424 = v235;
              v425 = v469;
              v426 = v234;
              *(_OWORD *)v422 = *(_OWORD *)n;
            }
          }
        }
        v251 = v211 - 112;
        sub_1419234B0(v385, v422, 192);
        if ( (unsigned __int8)sub_140D75F50(v251, v385) )
        {
          sub_140CB85B0(v385);
        }
        else
        {
          sub_140CB85B0(v251);
          sub_1419234B0(v251, v385, 192);
          LOBYTE(v489) = 1;
        }
        goto LABEL_272;
      }
LABEL_296:
      sub_1416DB410(&v469, n + 18);
      v217 = n[2];
      if ( v217 != 2 )
      {
        v206.m128i_i64[0] = n[5];
        LODWORD(v489) = *((_DWORD *)n + 12);
        v199.m128i_i64[0] = n[4];
        v488 = n[3];
      }
      v492 = (unsigned __int64)(n + 24);
      v218 = n[7];
      if ( v218 != 2 )
      {
        v3 = n[10];
        LODWORD(v486) = *((_DWORD *)n + 22);
        v4 = (__m128)(unsigned __int64)n[9];
        v485 = n[8];
      }
      v219 = n[22];
      v220 = *((_BYTE *)n + 184);
      v221 = *((unsigned int *)n + 42);
      LODWORD(v494) = *((_DWORD *)n + 42);
      v222 = *((_DWORD *)n + 43);
      v223 = n[12];
      if ( v223 != 2 )
      {
        LOBYTE(v484) = *((_BYTE *)n + 136);
        if ( n[14] == -1 )
        {
          v221 = -1;
        }
        else
        {
          sub_1416DB410(v472, n + 14);
          v221 = *(_QWORD *)v472;
          v437 = _mm_loadu_si128((const __m128i *)&v472[8]);
        }
        v216 = n[13];
      }
      v224 = *(double *)n;
      v225 = n[1];
      v428 = v470;
      v427 = v469;
      v430 = v219;
      v431 = v220;
      *(_QWORD *)&v422[16] = v217;
      *(_QWORD *)&v422[24] = v488;
      *(_QWORD *)&v422[32] = v199.m128i_i64[0];
      *(_QWORD *)&v422[40] = v206.m128i_i64[0];
      *(_DWORD *)&v422[48] = v489;
      *(_QWORD *)&v422[56] = v218;
      *(_QWORD *)&v422[64] = v485;
      _mm_storel_ps((double *)&v422[72], v4);
      *(_QWORD *)&v422[80] = v3;
      *(_DWORD *)&v422[88] = v486;
      v429 = __PAIR64__(v222, v494);
      *(_QWORD *)&v422[96] = v223;
      v423 = v216;
      v424 = v221;
      v425 = v437;
      v426 = v484;
      *(double *)v422 = v224;
      *(_QWORD *)&v422[8] = v225;
      v226 = v476.m128i_i64[0];
      if ( v476.m128i_i64[0] == v475.m128i_i64[0] )
        sub_141939BA0(&v475);
      sub_1419234B0(v475.m128i_i64[1] + 192 * v226, v422, 192);
      v476.m128i_i64[0] = v226 + 1;
      LOBYTE(v489) = 1;
      v193 = (__int64 *)v492;
      goto LABEL_272;
    }
LABEL_283:
    ;
  }
  if ( (v489 & 1) != 0 )
  {
    *(_DWORD *)v472 = sub_1416B2E50();
    *(_DWORD *)&v472[4] = v253;
    sub_1416B2E00(v422, v472, 3577643008LL, 27111902);
    if ( v422[0] )
      v254 = 0;
    else
      v254 = *(_QWORD *)&v422[8];
    if ( v447 > v254 )
      v254 = v447;
    if ( *(_QWORD *)(v491 + 856) > v254 )
      v254 = *(_QWORD *)(v491 + 856);
    v476.m128i_i64[1] = v254;
    *(_QWORD *)v422 = &v481;
    if ( v476.m128i_i64[0] >= 2uLL )
    {
      if ( v476.m128i_i64[0] >= 0x15uLL )
        sub_1401B7020(v475.m128i_i64[1], v476.m128i_i64[0], v422);
      else
        sub_140CC31B0(v475.m128i_i64[1]);
    }
    v196 = *(_QWORD *)&v390[8];
  }
  HIDWORD(_RAX) = v477.m128i_i32[1];
  v456 = v477.m128i_i64[0];
  v256 = _mm_load_si128(&v475);
  v455 = v476;
  v454 = v256;
  if ( v196 )
  {
    v257 = *(_QWORD *)&v390[24];
    if ( *(_QWORD *)&v390[24] )
    {
      v258 = *(_QWORD *)v390;
      v259 = (const __m128i *)(*(_QWORD *)v390 + 16LL);
      _R14D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v390));
      do
      {
        if ( !(_WORD)_R14D )
        {
          do
          {
            v261 = _mm_load_si128(v259);
            v258 -= 384;
            ++v259;
            _R14D = _mm_movemask_epi8(v261) ^ 0xFFFF;
          }
          while ( !_R14D );
        }
        __asm { tzcnt   eax, r14d }
        v262 = -3 * _RAX;
        v263 = *(_QWORD *)(v258 + 8 * v262 - 24);
        if ( v263 )
          sub_140001660(*(_QWORD *)(v258 + 8 * v262 - 16), v263, 1);
        --v257;
        _RAX = _R14D & (unsigned int)(_R14D - 1);
        _R14D &= _R14D - 1;
      }
      while ( v257 );
    }
    v264 = (24 * v196 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v265 = v264 + v196 + 17;
    if ( v265 )
      sub_140001660(*(_QWORD *)v390 - v264, v265, 16);
  }
  if ( (_DWORD)v446 != (_DWORD)v462 || *((_QWORD *)&v445 + 1) != *((_QWORD *)&v461 + 1) )
    goto LABEL_428;
  if ( *((_QWORD *)&v442 + 1) == -1 )
  {
    if ( *((_QWORD *)&v458 + 1) == -1 )
      goto LABEL_413;
LABEL_428:
    sub_140D02DF0(v422, v464, &v441, 0);
    if ( *(_DWORD *)v422 == -1 )
      goto LABEL_482;
    v269 = (__m128i *)v483;
    *(_OWORD *)(v483 + 80) = *(_OWORD *)&v422[80];
    v269[4] = *(__m128i *)&v422[64];
    v270 = _mm_loadu_si128((const __m128i *)v422);
    v271 = *(__m128i *)&v422[16];
    v272 = *(__m128i *)&v422[32];
    v269[3] = *(__m128i *)&v422[48];
    v269[2] = v272;
    v269[1] = v271;
    *v269 = v270;
LABEL_430:
    v273 = v455.m128i_i64[0];
    if ( v455.m128i_i64[0] )
    {
      v274 = (_QWORD *)(v454.m128i_i64[1] + 152);
      do
      {
        v275 = *(v274 - 1);
        if ( v275 )
          sub_140001660(*v274, v275, 1);
        if ( *((_DWORD *)v274 - 14) != 2 )
        {
          v276 = *(v274 - 5);
          if ( v276 > 0 )
            sub_140001660(*(v274 - 4), v276, 1);
        }
        v274 += 24;
        --v273;
      }
      while ( v273 );
    }
    if ( v454.m128i_i64[0] )
      sub_140001660(v454.m128i_i64[1], 192 * v454.m128i_i64[0], 8);
    if ( *((_QWORD *)&v442 + 1) != -1 && *((_QWORD *)&v442 + 1) )
      sub_140001660(v443, *((_QWORD *)&v442 + 1), 1);
    v277 = *((_QWORD *)&v441 + 1);
    v278 = v442;
    if ( (_QWORD)v442 )
    {
      v279 = *((_QWORD *)&v441 + 1);
      do
      {
        sub_1401AE3E0(v279);
        v279 += 424;
        --v278;
      }
      while ( v278 );
    }
    if ( (_QWORD)v441 )
      sub_140001660(v277, 424 * v441, 8);
    v280 = v451;
    if ( v451 )
    {
      v281 = v450 + 19;
      do
      {
        v282 = *(v281 - 1);
        if ( v282 )
          sub_140001660(*v281, v282, 1);
        if ( *((_DWORD *)v281 - 14) != 2 )
        {
          v283 = *(v281 - 5);
          if ( v283 > 0 )
            sub_140001660(*(v281 - 4), v283, 1);
        }
        v281 += 24;
        --v280;
      }
      while ( v280 );
    }
    if ( v449 )
      sub_140001660(v450, 192 * v449, 8);
    v284 = v467;
    if ( (_QWORD)v467 )
    {
      v285 = (_QWORD *)(v466.m128i_i64[1] + 152);
      do
      {
        v286 = *(v285 - 1);
        if ( v286 )
          sub_140001660(*v285, v286, 1);
        if ( *((_DWORD *)v285 - 14) != 2 )
        {
          v287 = *(v285 - 5);
          if ( v287 > 0 )
            sub_140001660(*(v285 - 4), v287, 1);
        }
        v285 += 24;
        --v284;
      }
      while ( v284 );
    }
    if ( v466.m128i_i64[0] )
      sub_140001660(v466.m128i_i64[1], 192 * v466.m128i_i64[0], 8);
    sub_14018EA10(&v438);
    if ( *((_QWORD *)&v458 + 1) != -1 && *((_QWORD *)&v458 + 1) )
      sub_140001660(v459, *((_QWORD *)&v458 + 1), 1);
    v288 = v457.m128i_i64[1];
    v289 = v458;
    if ( (_QWORD)v458 )
    {
      v290 = v457.m128i_i64[1];
      do
      {
        sub_1401AE3E0(v290);
        v290 += 424;
        --v289;
      }
      while ( v289 );
    }
    v12 = v483;
    if ( v457.m128i_i64[0] )
      sub_140001660(v288, 424 * v457.m128i_i64[0], 8);
    goto LABEL_476;
  }
  if ( *((_QWORD *)&v458 + 1) == -1
    || *((_QWORD *)&v443 + 1) != *((_QWORD *)&v459 + 1)
    || (unsigned int)sub_141923B40(v443, v459, *((_QWORD *)&v443 + 1)) )
  {
    goto LABEL_428;
  }
LABEL_413:
  v266 = v442;
  if ( (_QWORD)v442 != (_QWORD)v458 )
    goto LABEL_428;
  if ( (_QWORD)v442 )
  {
    v267 = v457.m128i_i64[1];
    v268 = *((_QWORD *)&v441 + 1);
    while ( (unsigned __int8)sub_140D84C40(v268, v267) )
    {
      v267 += 424;
      v268 += 424;
      if ( !--v266 )
        goto LABEL_418;
    }
    goto LABEL_428;
  }
LABEL_418:
  if ( (_BYTE)v445 == 2 )
  {
    if ( (_BYTE)v461 != 2 )
      goto LABEL_428;
  }
  else if ( (_BYTE)v461 == 2 || (_BYTE)v445 != (_BYTE)v461 || v444 != *(_OWORD *)&v460 )
  {
    goto LABEL_428;
  }
  if ( BYTE4(v446) == 2 )
  {
    if ( BYTE4(v462) != 2 )
      goto LABEL_428;
  }
  else if ( BYTE4(v446) != BYTE4(v462) )
  {
    goto LABEL_428;
  }
LABEL_482:
  if ( (_DWORD)v456 != (_DWORD)v468
    || v455.m128i_i64[1] != *((_QWORD *)&v467 + 1)
    || (v293 = v455.m128i_i64[0], v455.m128i_i64[0] != (_QWORD)v467) )
  {
LABEL_490:
    sub_140D36EF0(v390, v434, v433, &v454);
    if ( *(_DWORD *)v390 == -1 )
      goto LABEL_495;
    *(_OWORD *)&v422[80] = *(_OWORD *)&v390[80];
    *(_OWORD *)&v422[64] = *(_OWORD *)&v390[64];
    *(_OWORD *)&v422[48] = *(_OWORD *)&v390[48];
    *(_OWORD *)&v422[32] = *(_OWORD *)&v390[32];
    *(_OWORD *)&v422[16] = *(_OWORD *)&v390[16];
    *(_OWORD *)v422 = *(_OWORD *)v390;
    v296 = v483;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v469.m128i_i64[0] = (__int64)v422;
      v469.m128i_i64[1] = (__int64)sub_140D76130;
      *(_QWORD *)v472 = aCodexmateLibCo_44;
      *(_QWORD *)&v472[8] = 31;
      *(_QWORD *)&v472[16] = aCodexmateLibCo_44;
      v473 = 31;
      v474 = &off_141A94BE8;
      sub_140AF72B0(&unk_141A94BB1, &v469, 2, v472);
    }
    v297 = *(_QWORD *)v422;
    v475 = *(__m128i *)&v422[8];
    v476 = *(__m128i *)&v422[24];
    v477 = *(__m128i *)&v422[40];
    v478 = *(__m128i *)&v422[56];
    v479 = *(__m128i *)&v422[72];
    v480.m128i_i64[0] = *(_QWORD *)&v422[88];
    if ( *(_QWORD *)v422 == -1 )
      goto LABEL_495;
    *(_QWORD *)(v296 + 88) = v480.m128i_i64[0];
    *(__m128i *)(v296 + 72) = v479;
    v298 = v475;
    v299 = v476;
    v300 = v477;
    *(__m128i *)(v296 + 56) = v478;
    *(__m128i *)(v296 + 40) = v300;
    *(__m128i *)(v296 + 24) = v299;
    *(__m128i *)(v296 + 8) = v298;
    *(_QWORD *)v296 = v297;
    goto LABEL_430;
  }
  if ( v455.m128i_i64[0] )
  {
    v294 = v466.m128i_i64[1];
    v295 = v454.m128i_i64[1];
    while ( (unsigned __int8)sub_140D75F50(v295, v294) )
    {
      v294 += 192;
      v295 += 192;
      if ( !--v293 )
        goto LABEL_495;
    }
    goto LABEL_490;
  }
LABEL_495:
  v301 = *(_QWORD *)(v491 + 880);
  v302 = *(_QWORD *)(v491 + 888);
  v303 = (const __m128i *)sub_1404D9AA0(0);
  if ( !v303 )
    sub_14196A580(&off_141A6E388);
  v304 = _mm_loadu_si128(v303);
  ++v303->m128i_i64[0];
  *(__m128i *)&v422[16] = v22;
  *(__m128i *)v422 = v23;
  *(__m128i *)&v422[32] = v304;
  *(_QWORD *)v390 = v301;
  *(_QWORD *)&v390[8] = v301 + 384 * v302;
  *(_QWORD *)&v390[16] = v465;
  sub_1408606B0(v422, v390);
  v469 = _mm_load_si128((const __m128i *)v422);
  v470 = *(_OWORD *)&v422[16];
  v471 = *(_OWORD *)&v422[32];
  v305 = v491 + 1000;
  if ( *(_QWORD *)(v491 + 1000) == -1 )
  {
    v414.m128i_i64[0] = -1;
  }
  else
  {
    sub_1416DB410(v390, v491 + 1000);
    v306 = *(_BYTE *)(v491 + 1112);
    if ( *(_QWORD *)(v491 + 1024) == -1 )
    {
      v307 = -1;
    }
    else
    {
      sub_1416DB410(v422, v491 + 1024);
      v307 = *(_QWORD *)v422;
      v475 = _mm_loadu_si128((const __m128i *)&v422[8]);
    }
    v417 = *(_OWORD *)(v491 + 1048);
    v418 = *(_OWORD *)(v491 + 1064);
    v419 = *(_OWORD *)(v491 + 1080);
    *(_QWORD *)&v415 = *(_QWORD *)&v390[16];
    v414 = *(__m128i *)v390;
    v416 = v475;
    *((_QWORD *)&v415 + 1) = v307;
    v420 = _mm_loadu_si128((const __m128i *)(v491 + 1096));
    LOBYTE(v421) = v306;
  }
  v490 = 1;
  sub_140D01760(v422, v464);
  v308 = *(_QWORD *)v422;
  v475 = *(__m128i *)&v422[8];
  v476 = *(__m128i *)&v422[24];
  v477 = *(__m128i *)&v422[40];
  v478 = *(__m128i *)&v422[56];
  v479 = *(__m128i *)&v422[72];
  v480 = *(__m128i *)&v422[88];
  if ( *(_QWORD *)v422 == 2 )
  {
    v309 = (__m128i *)v483;
    *(__m128i *)(v483 + 80) = v480;
    v309[4] = v479;
    v310 = _mm_load_si128(&v475);
    v311 = v476;
    v312 = v477;
    v309[3] = v478;
    v309[2] = v312;
    v309[1] = v311;
    *v309 = v310;
    sub_140026250(&v414);
    sub_14018FF40(&v469);
    goto LABEL_430;
  }
  sub_1419234B0(v391, &v423, 1032);
  *(__m128i *)&v390[8] = v475;
  *(__m128i *)&v390[24] = v476;
  *(__m128i *)&v390[40] = v477;
  *(__m128i *)&v390[56] = v478;
  *(__m128i *)&v390[72] = v479;
  *(__m128i *)&v390[88] = _mm_load_si128(&v480);
  *(_QWORD *)v390 = v308;
  v493 = 1;
  sub_1404383D0(v472, *((_QWORD *)&v402 + 1), *((_QWORD *)&v402 + 1) + 192 * v403);
  v313 = v491;
  v314 = v491 + 568;
  sub_140037940(v491 + 568);
  sub_1419234B0(v314, v395, 176);
  v315 = *(_QWORD *)(v313 + 536);
  if ( v315 )
    sub_140001660(*(_QWORD *)(v313 + 544), v315, 1);
  v316 = v393;
  *(_OWORD *)(v313 + 552) = v394;
  *(_OWORD *)(v313 + 536) = v316;
  v317 = v436;
  sub_140037470(v436);
  *(_QWORD *)(v317 + 80) = v401;
  *(_OWORD *)(v317 + 64) = v400;
  v318 = v396;
  v319 = v397;
  v320 = v398;
  *(_OWORD *)(v317 + 48) = v399;
  *(_OWORD *)(v317 + 32) = v320;
  *(_OWORD *)(v317 + 16) = v319;
  *(_OWORD *)v317 = v318;
  v321 = v465;
  sub_140234FD0(v465);
  if ( *v321 )
    sub_140001660(*(_QWORD *)(v313 + 840), 192LL * *v321, 8);
  v322 = v465;
  v465[4] = v404;
  v323 = v402;
  v322[1] = v403;
  *v322 = v323;
  v324 = *(_QWORD *)(v313 + 888);
  if ( v324 )
  {
    v325 = *(_QWORD *)(v491 + 880);
    do
    {
      sub_1401AF3C0(v325);
      v325 += 384;
      --v324;
    }
    while ( v324 );
  }
  v326 = v435;
  if ( *v435 )
    sub_140001660(*(_QWORD *)(v491 + 880), 384LL * *v435, 8);
  v326[2] = v406;
  *(_OWORD *)v326 = v405;
  v327 = v448;
  if ( *v448 != 2 )
    sub_140037CD0(v448);
  sub_1419234B0(v327, v392, 384);
  v328 = v491;
  *(_QWORD *)(v491 + 1120) = v413;
  sub_140026250(v305);
  *(_QWORD *)(v305 + 112) = v421;
  *(__m128i *)(v305 + 96) = v420;
  *(_OWORD *)(v305 + 80) = v419;
  *(_OWORD *)(v305 + 64) = v418;
  v329 = _mm_load_si128(&v414);
  v330 = v415;
  v331 = v416;
  *(_OWORD *)(v305 + 48) = v417;
  *(__m128i *)(v305 + 32) = v331;
  *(_OWORD *)(v305 + 16) = v330;
  *(__m128i *)v305 = v329;
  v332 = v407[1];
  v333 = v408;
  v334 = *(_QWORD *)(v328 + 912);
  if ( v408 > *(_QWORD *)(v328 + 896) - v334 )
  {
    sub_141939070(v491 + 896, v334, v408, 8, 48);
    v335 = v491;
    v334 = *(_QWORD *)(v491 + 912);
LABEL_517:
    sub_1419234B0(*(_QWORD *)(v335 + 904) + 48 * v334, v332, 48 * v333);
    v334 = *(_QWORD *)(v335 + 912);
  }
  else
  {
    v335 = v491;
    if ( v408 )
      goto LABEL_517;
  }
  v484 = v332;
  *(_QWORD *)(v335 + 912) = v333 + v334;
  v408 = 0;
  if ( !*((_QWORD *)&v470 + 1) )
    goto LABEL_563;
  v336 = *(_QWORD *)(v491 + 880);
  v487 = v336 + 384LL * *(_QWORD *)(v491 + 888);
LABEL_537:
  while ( 2 )
  {
    if ( v336 != v487 )
    {
      v364 = v336;
      v336 += 384;
      if ( !*((_QWORD *)&v470 + 1) )
        continue;
      v494 = v336;
      v345 = sub_1406CECD0(&v471, v364 + 208);
      _RCX = v345 >> 57;
      v365 = v469;
      v366 = _mm_cvtsi32_si128(v345 >> 57);
      v367 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v366, v366), 0), 68);
      for ( jj = 0; ; jj += 16 )
      {
        v337 = v365.m128i_i64[1] & v345;
        v338 = _mm_loadu_si128((const __m128i *)(v365.m128i_i64[0] + v337));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v338, v367));
        if ( _R12D )
          break;
LABEL_525:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v338, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
        {
          v336 = v494;
          goto LABEL_537;
        }
        v345 = jj + v337 + 16;
      }
      v340 = *(_QWORD *)(v364 + 224);
      v492 = v337;
      v489 = jj;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r12d }
        _RCX = -(__int64)(v365.m128i_i64[1] & (v337 + _RCX));
        if ( v340 == *(_QWORD *)(v365.m128i_i64[0] + 88 * _RCX - 72) )
        {
          v342 = v365.m128i_i64[0] + 88 * _RCX;
          if ( !(unsigned int)sub_141923B40(*(_QWORD *)(v364 + 216), *(_QWORD *)(v342 - 80), v340) )
            break;
        }
        v343 = _R12D - 1;
        LOWORD(v343) = _R12D & (_R12D - 1);
        v55 = (_WORD)v343 == 0;
        _R12D = v343;
        v337 = v492;
        jj = v489;
        if ( v55 )
          goto LABEL_525;
      }
      v346 = *(_QWORD *)(v342 - 16);
      v347 = 1;
      if ( v473 )
      {
        v348 = *(_QWORD *)(v342 - 8);
        v349 = sub_1406CECD0(&v474, v364 + 208);
        v492 = v346;
        _RCX = v349 >> 57;
        v351 = *(_QWORD *)&v472[8];
        v352 = *(_QWORD *)v472;
        v353 = _mm_cvtsi32_si128(v349 >> 57);
        v354 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v353, v353), 0), 68);
        for ( kk = 0; ; kk += 16 )
        {
          v356 = v351 & v349;
          v357 = _mm_loadu_si128((const __m128i *)(v352 + v356));
          _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v357, v354));
          if ( _R12D )
            break;
LABEL_534:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v357, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
          {
            LOBYTE(v368) = 1;
            v336 = v364 + 384;
            if ( !v492 )
              goto LABEL_544;
            goto LABEL_541;
          }
          v349 = kk + v356 + 16;
        }
        v359 = *(_QWORD *)(v364 + 224);
        v488 = v356;
        v486 = v351;
        v485 = kk;
        v489 = v348;
        while ( 1 )
        {
          __asm { tzcnt   ecx, r12d }
          _RCX = -(__int64)(v351 & (v356 + _RCX));
          if ( v359 == *(_QWORD *)(v352 + 40 * _RCX - 24) )
          {
            v360 = v352 + 40 * _RCX;
            v361 = v359;
            v362 = sub_141923B40(*(_QWORD *)(v364 + 216), *(_QWORD *)(v360 - 32), v359);
            v359 = v361;
            if ( !v362 )
              break;
          }
          v363 = _R12D - 1;
          LOWORD(v363) = _R12D & (_R12D - 1);
          v55 = (_WORD)v363 == 0;
          _R12D = v363;
          v356 = v488;
          v351 = v486;
          kk = v485;
          v348 = v489;
          if ( v55 )
            goto LABEL_534;
        }
        v347 = *(_BYTE *)(v360 - 16) ^ 1;
        v368 = v489 >= *(_QWORD *)(v360 - 8);
        v336 = v364 + 384;
        if ( !v492 )
          goto LABEL_544;
        goto LABEL_541;
      }
      LOBYTE(v368) = 1;
      v336 = v364 + 384;
      if ( v346 )
      {
LABEL_541:
        if ( ((v368 | (unsigned __int8)v347) & 1) == 0 )
          continue;
      }
      else
      {
LABEL_544:
        if ( !v347 )
          continue;
      }
      v369 = *(_BYTE *)(v342 - 24);
      if ( *(_QWORD *)(v342 - 48) == -1 )
      {
        v370 = -1;
      }
      else
      {
        sub_1416DB410(v422, v342 - 48);
        v370 = *(_QWORD *)v422;
        v475 = _mm_loadu_si128((const __m128i *)&v422[8]);
      }
      v371 = *(_QWORD *)(v342 - 64);
      v372 = *(_QWORD *)(v342 - 56);
      *(__m128i *)v422 = v475;
      if ( *(_DWORD *)(v364 + 160) != 2 )
      {
        v373 = *(_QWORD *)(v364 + 176);
        if ( v373 != -1 )
        {
          if ( v373 )
            sub_140001660(*(_QWORD *)(v364 + 184), v373, 1);
        }
      }
      *(_QWORD *)(v364 + 160) = v371;
      *(_QWORD *)(v364 + 168) = v372;
      *(_QWORD *)(v364 + 176) = v370;
      *(__m128i *)(v364 + 184) = _mm_load_si128((const __m128i *)v422);
      *(_BYTE *)(v364 + 200) = v369;
      v336 = v494;
      continue;
    }
    break;
  }
  if ( *v448 != 2 )
  {
    v374 = v491 + 360;
    v375 = sub_140CB3100(&v469, v491 + 360);
    v376 = v375;
    if ( v375 )
    {
      v377 = *(_QWORD *)(v375 + 48);
      v378 = *(_QWORD *)(v375 + 56);
      v379 = sub_140CB2FE0(v472, v374);
      if ( v379 )
      {
        v380 = *(_BYTE *)v379;
        if ( v377 )
        {
          if ( ((v378 < *(_QWORD *)(v379 + 8)) & v380) != 0 )
            goto LABEL_563;
        }
        else if ( v380 )
        {
          goto LABEL_563;
        }
      }
      sub_140D758E0(v422, v376);
      v477 = *(__m128i *)&v422[32];
      v476 = *(__m128i *)&v422[16];
      v475 = *(__m128i *)v422;
      v381 = v491;
      sub_140026220(v491 + 312);
      v382 = _mm_load_si128(&v475);
      v383 = v476;
      *(__m128i *)(v381 + 344) = v477;
      *(__m128i *)(v381 + 328) = v383;
      *(__m128i *)(v381 + 312) = v382;
    }
  }
LABEL_563:
  *(_QWORD *)v483 = -1;
  v493 = 0;
  sub_14018E820(v472);
  sub_1400375C0(v390);
  sub_140234850(v407);
  if ( v407[0] )
    sub_140001660(v484, 48LL * v407[0], 8);
  sub_140037500(v409);
  if ( v410 != -1 && v410 )
    sub_140001660(v411, v410, 1);
  sub_140026250(v412);
  sub_14018FF40(&v469);
  sub_140234FD0(&v454);
  if ( v454.m128i_i64[0] )
    sub_140001660(v454.m128i_i64[1], 192 * v454.m128i_i64[0], 8);
  sub_140037470(&v441);
  sub_140234FD0(&v449);
  if ( v449 )
    sub_140001660(v450, 192 * v449, 8);
  sub_140234FD0(&v466);
  if ( v466.m128i_i64[0] )
    sub_140001660(v466.m128i_i64[1], 192 * v466.m128i_i64[0], 8);
  sub_14018EA10(&v438);
  sub_140037470(&v457);
  sub_140CAF5C0(&hObject);
  CloseHandle(hObject);
  return v483;
}
