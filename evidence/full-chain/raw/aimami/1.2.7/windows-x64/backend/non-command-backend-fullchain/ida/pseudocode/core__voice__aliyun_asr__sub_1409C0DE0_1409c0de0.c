// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x1409c0de0 | name sub_1409C0DE0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_1409C0DE0(__int64 a1, __int64 a2, unsigned __int64 a3, signed __int64 a4)
{
  __int128 v4; // rcx
  __int64 v5; // r12
  char *v6; // r14
  volatile signed __int64 **v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  volatile signed __int64 **v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  volatile signed __int64 *v15; // rax
  __int64 v16; // r13
  __int64 v17; // r8
  volatile signed __int64 **v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int8 *v20; // rax
  volatile signed __int64 **v21; // r14
  __int64 v22; // r15
  char result; // al
  __int64 v24; // rax
  volatile signed __int64 *v25; // rdi
  __int64 v26; // rax
  char v27; // r14
  __int64 v28; // rax
  const __m128i *v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __m128i v34; // xmm0
  unsigned __int64 v35; // rsi
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  volatile signed __int64 **v39; // rdi
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  __int64 v43; // r15
  __int64 v44; // rax
  __int128 v45; // kr00_16
  unsigned __int16 v46; // r15
  __int64 v47; // r14
  _QWORD *v48; // r12
  __int64 *v49; // rdx
  char v50; // al
  char v51; // r14
  char v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _BYTE *v61; // r14
  __int16 v62; // ax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int16 v65; // bx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int128 v68; // xmm0
  const __m128i *v69; // r15
  char *v70; // rbx
  __m128i v71; // xmm0
  int v72; // ebx
  __m128i v73; // xmm6
  __int64 v74; // r15
  __int64 v75; // rbx
  volatile signed __int64 **v76; // r15
  __int64 v77; // r14
  volatile signed __int64 **v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __m128i v84; // rax
  __int64 v85; // rax
  unsigned __int8 v86; // cl
  char *v87; // rdx
  const __m128i *v88; // rcx
  _BYTE *v89; // r8
  __int64 v90; // r9
  volatile signed __int64 **v91; // r10
  char *v92; // r14
  __int64 v93; // rax
  char v94; // al
  __m128i v95; // xmm0
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // r12
  char *v99; // rbx
  __int64 v100; // rdx
  void (__fastcall *v101)(unsigned __int64 *, __int64, __int64); // rax
  void (__fastcall *v102)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v103; // rcx
  _WORD *v104; // rax
  __int64 v105; // rcx
  unsigned __int16 v106; // cx
  int v107; // eax
  __int8 *v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rcx
  const __m128i *v111; // r15
  __int64 v112; // rbx
  char v113; // al
  volatile signed __int64 **v114; // rcx
  __int64 v115; // r8
  unsigned __int64 v116; // rbx
  __m128i v117; // xmm0
  __int64 v118; // rax
  __m128i v119; // xmm6
  __int64 v120; // rax
  __int64 v121; // rdx
  volatile signed __int64 **v122; // r8
  _BYTE *v123; // rcx
  volatile signed __int64 **v124; // r14
  __int64 v125; // r12
  __int64 v126; // r15
  __int64 v127; // r14
  __int128 v128; // xmm1
  __int128 v129; // xmm2
  __int128 v130; // xmm3
  __m128i v131; // xmm1
  __m128i v132; // xmm2
  __m128i v133; // xmm3
  const __m128i *v134; // r12
  const __m128i *v135; // rbx
  __int64 v136; // r12
  char v137; // al
  char *v138; // rcx
  char v139; // al
  __m128i *v140; // r14
  __m128i *v141; // rbx
  __int64 v142; // r13
  const __m128i *v143; // r15
  __int64 v144; // r15
  _BYTE *v145; // r8
  __int64 v146; // r9
  volatile signed __int64 **v147; // r10
  unsigned __int128 v148; // kr280_16
  __int64 v149; // rdx
  __m128i *v150; // r12
  __int64 v151; // rbx
  unsigned __int64 v152; // r15
  __m128i *v153; // rax
  const __m128i *v154; // r14
  __m128i *v155; // rbx
  __int64 v156; // r12
  char *v157; // r14
  __m128i v158; // xmm0
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // r8
  const __m128i *v162; // r15
  __m128i *v163; // r8
  char *v164; // r13
  __int64 v165; // r14
  __int64 v166; // rdx
  unsigned __int8 *v167; // rbx
  __int64 v168; // rbx
  volatile signed __int64 *v169; // rax
  __int64 v170; // rax
  volatile signed __int64 **v171; // rbx
  _BYTE *v172; // r13
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // rbx
  __int64 v176; // rcx
  __m128i *v177; // rax
  volatile signed __int64 *v178; // r14
  __int64 v179; // r8
  __int64 v180; // rt0
  char v181; // of
  char *v182; // rbx
  volatile signed __int64 *v183; // rbx
  __int64 v184; // r15
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rax
  __int64 v188; // r14
  __m128i v189; // xmm0
  __int128 v190; // xmm1
  __int128 v191; // xmm2
  char *v192; // r13
  volatile signed __int64 **v193; // rdi
  __int64 v194; // rcx
  char v195; // al
  __int64 v196; // rax
  __int64 v197; // rcx
  int v198; // r8d
  __int64 v199; // rdx
  __int64 v200; // r9
  __int64 v201; // rax
  __int64 v202; // rax
  __m128i *v203; // rdx
  __m128i *v204; // rdi
  __int64 v205; // rbx
  __m128i v206; // xmm1
  __m128i v207; // xmm0
  __m128i v208; // xmm0
  __m128i v209; // xmm0
  __int64 v210; // rdx
  unsigned __int64 v211; // rcx
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // r8
  __int64 v215; // rdi
  __int64 v216; // rdi
  __int64 v217; // rdx
  __int64 v218; // rdi
  char v219; // al
  char v220; // r14
  char v221; // r14
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rdx
  __int64 v227; // rdi
  unsigned __int64 v228; // rcx
  __int64 v229; // rax
  __int128 v230; // xmm1
  __int64 v231; // r13
  signed __int64 v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // rax
  __int64 v236; // rbx
  int v237; // edx
  int v238; // eax
  int v239; // edx
  _OWORD *v240; // rax
  __int128 v241; // xmm1
  __int128 v242; // xmm2
  __int128 v243; // xmm3
  __int128 v244; // xmm4
  __int128 v245; // xmm5
  __m128i v246; // xmm6
  __int64 v247; // rdx
  _DWORD *v248; // rbx
  __int64 v249; // rcx
  __m128i *v250; // rax
  __m128i v251; // xmm0
  __m128i v252; // xmm0
  __int64 v253; // rax
  __m128i *v254; // rcx
  volatile signed __int64 **v255; // rdx
  volatile signed __int64 **v256; // r15
  __int64 v257; // rax
  const __m128i *v258; // r9
  __int64 v259; // r14
  __int64 v260; // rdx
  volatile signed __int64 **v261; // r15
  __int64 v262; // rax
  volatile signed __int64 **v263; // r14
  __int64 v264; // rdx
  __int64 v265; // rax
  unsigned __int64 v266; // r14
  __int64 v267; // rax
  volatile signed __int64 **v268; // r15
  __int64 v269; // rdx
  __int128 v270; // xmm1
  __int128 v271; // xmm2
  __int128 v272; // xmm3
  __int64 v273; // rax
  volatile signed __int64 **v274; // rdx
  __int128 v275; // xmm1
  __int128 v276; // xmm1
  __int128 v277; // xmm2
  __int128 v278; // xmm3
  __int64 v279; // rcx
  const __m128i *v280; // r9
  __m128i *v281; // r11
  __int64 v282; // rbx
  __int64 v283; // r14
  char *v284; // rdx
  _BYTE *v285; // r8
  volatile signed __int64 **v286; // r10
  __int128 v287; // xmm0
  __int64 v288; // rax
  __int128 v289; // xmm1
  __int128 v290; // xmm2
  __int128 v291; // xmm3
  __int128 v292; // kr1F0_16
  __int64 v293; // r12
  __m128i *v294; // rdx
  const __m128i *v295; // r8
  __int64 v296; // rax
  __int64 v297; // rdx
  bool v298; // zf
  __int64 v299; // rdx
  __int64 v300; // rcx
  volatile signed __int64 *v301; // rax
  __int64 v302; // r15
  const __m128i *v303; // r12
  __int64 v304; // rax
  unsigned __int64 v305; // r14
  __int16 v306; // r15
  __int64 v307; // rdx
  __int64 v308; // rax
  __int64 v309; // rcx
  __m128i si128; // xmm0
  __int128 v311; // xmm1
  __int128 v312; // xmm2
  __m128i v313; // xmm0
  __int128 v314; // xmm1
  __int128 v315; // xmm2
  __int128 v316; // xmm1
  __m128i v317[72]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v318[72]; // [rsp+4A8h] [rbp+428h] BYREF
  __m128i v319[72]; // [rsp+928h] [rbp+8A8h] BYREF
  __m128i v320[72]; // [rsp+DA8h] [rbp+D28h] BYREF
  __m128i v321[72]; // [rsp+1228h] [rbp+11A8h] BYREF
  __m128i v322[72]; // [rsp+16A8h] [rbp+1628h] BYREF
  __m128i v323[60]; // [rsp+1B28h] [rbp+1AA8h] BYREF
  __m128i v324[14]; // [rsp+1EE8h] [rbp+1E68h] BYREF
  __m128i v325[72]; // [rsp+1FD0h] [rbp+1F50h] BYREF
  __m128i v326[14]; // [rsp+2450h] [rbp+23D0h] BYREF
  __m128i v327[8]; // [rsp+2533h] [rbp+24B3h] BYREF
  __m128i v328; // [rsp+25C0h] [rbp+2540h] BYREF
  __int64 v329; // [rsp+25D0h] [rbp+2550h]
  __m128i v330[8]; // [rsp+2A44h] [rbp+29C4h] BYREF
  __m128i v331[8]; // [rsp+2AD1h] [rbp+2A51h] BYREF
  __m128i v332[8]; // [rsp+2B5Eh] [rbp+2ADEh] BYREF
  __m128i v333[8]; // [rsp+2BEBh] [rbp+2B6Bh] BYREF
  __m128i v334[13]; // [rsp+2C78h] [rbp+2BF8h] BYREF
  __m128i v335[13]; // [rsp+2D48h] [rbp+2CC8h] BYREF
  __m128i v336[8]; // [rsp+2E18h] [rbp+2D98h] BYREF
  __m128i v337; // [rsp+2EA0h] [rbp+2E20h] BYREF
  __int64 v338; // [rsp+2EB0h] [rbp+2E30h]
  __m128i v339; // [rsp+3320h] [rbp+32A0h] BYREF
  __int64 v340; // [rsp+3330h] [rbp+32B0h]
  __m128i v341[8]; // [rsp+38A3h] [rbp+3823h] BYREF
  __m128i v342[4]; // [rsp+3930h] [rbp+38B0h] BYREF
  __int64 v343; // [rsp+3970h] [rbp+38F0h]
  __m128i v344[8]; // [rsp+3978h] [rbp+38F8h] BYREF
  _BYTE v345[104]; // [rsp+3A00h] [rbp+3980h] BYREF
  __m128i v346; // [rsp+3A68h] [rbp+39E8h]
  __m128i v347; // [rsp+3A78h] [rbp+39F8h]
  volatile signed __int64 **v348; // [rsp+3A88h] [rbp+3A08h]
  __m128i v349[18]; // [rsp+3A90h] [rbp+3A10h] BYREF
  char v350; // [rsp+3BB0h] [rbp+3B30h]
  char v351; // [rsp+3BB1h] [rbp+3B31h]
  __m128i v352[19]; // [rsp+3E50h] [rbp+3DD0h] BYREF
  __int64 v353; // [rsp+3F80h] [rbp+3F00h]
  __m128i v354; // [rsp+55E0h] [rbp+5560h] BYREF
  __int128 v355; // [rsp+55F0h] [rbp+5570h]
  __int128 v356; // [rsp+5600h] [rbp+5580h]
  __m128i v357; // [rsp+5610h] [rbp+5590h]
  __int128 v358; // [rsp+5620h] [rbp+55A0h]
  __int128 v359; // [rsp+5630h] [rbp+55B0h]
  __m128i v360; // [rsp+5640h] [rbp+55C0h]
  __m128i v361; // [rsp+5650h] [rbp+55D0h]
  __m256i v362; // [rsp+5B60h] [rbp+5AE0h] BYREF
  __int128 v363; // [rsp+5B80h] [rbp+5B00h]
  __int128 v364; // [rsp+5B90h] [rbp+5B10h]
  _BYTE v365[24]; // [rsp+5BA0h] [rbp+5B20h]
  const __m128i *v366; // [rsp+5BB8h] [rbp+5B38h]
  char *v367; // [rsp+5BC0h] [rbp+5B40h]
  _BYTE *v368; // [rsp+5BC8h] [rbp+5B48h]
  _BYTE *v369; // [rsp+5BD0h] [rbp+5B50h]
  __int64 v370; // [rsp+5BD8h] [rbp+5B58h]
  volatile signed __int64 **v371; // [rsp+5BE0h] [rbp+5B60h]
  volatile signed __int64 **v372; // [rsp+5BE8h] [rbp+5B68h]
  __m128i v373[9]; // [rsp+5BF0h] [rbp+5B70h] BYREF
  __int64 v374; // [rsp+5C80h] [rbp+5C00h]
  __m128i v375[50]; // [rsp+5C88h] [rbp+5C08h] BYREF
  __m128i v376[12]; // [rsp+5FB0h] [rbp+5F30h] BYREF
  __m128i v377[4]; // [rsp+6078h] [rbp+5FF8h] BYREF
  __int64 v378; // [rsp+60B8h] [rbp+6038h]
  __int16 v379; // [rsp+60C0h] [rbp+6040h]
  char v380; // [rsp+60C2h] [rbp+6042h]
  __int32 v381; // [rsp+60C3h] [rbp+6043h]
  __int8 v382; // [rsp+60C7h] [rbp+6047h]
  __m128i v383; // [rsp+6150h] [rbp+60D0h]
  __int128 v384; // [rsp+6160h] [rbp+60E0h]
  __int128 v385; // [rsp+6170h] [rbp+60F0h]
  __m128i v386; // [rsp+6180h] [rbp+6100h]
  __int128 v387; // [rsp+6190h] [rbp+6110h]
  __int128 v388; // [rsp+61A0h] [rbp+6120h]
  __m128i v389; // [rsp+61B0h] [rbp+6130h]
  __m128i v390; // [rsp+61C0h] [rbp+6140h] BYREF
  __m128i v391; // [rsp+61D0h] [rbp+6150h] BYREF
  __m128i v392; // [rsp+61E0h] [rbp+6160h]
  __m128i v393; // [rsp+61F0h] [rbp+6170h]
  __m128i v394; // [rsp+6200h] [rbp+6180h]
  __int64 v395; // [rsp+6210h] [rbp+6190h]
  __m128i v396; // [rsp+6220h] [rbp+61A0h] BYREF
  __m128i v397; // [rsp+6230h] [rbp+61B0h]
  __m128i v398; // [rsp+6240h] [rbp+61C0h]
  __m128i v399; // [rsp+6250h] [rbp+61D0h]
  __int64 v400; // [rsp+6260h] [rbp+61E0h]
  __m128i v401; // [rsp+6270h] [rbp+61F0h] BYREF
  __m128i v402; // [rsp+6280h] [rbp+6200h]
  __m128i v403; // [rsp+6290h] [rbp+6210h]
  __m128i v404; // [rsp+62A0h] [rbp+6220h]
  __int64 v405; // [rsp+62B0h] [rbp+6230h]
  __int128 v406; // [rsp+62C0h] [rbp+6240h]
  __int128 v407; // [rsp+62D0h] [rbp+6250h]
  __int128 v408; // [rsp+62E0h] [rbp+6260h]
  __int128 v409; // [rsp+62F0h] [rbp+6270h]
  __int64 v410; // [rsp+6300h] [rbp+6280h]
  __m128i v411; // [rsp+6310h] [rbp+6290h]
  __m128i v412; // [rsp+6320h] [rbp+62A0h]
  __m128i v413; // [rsp+6330h] [rbp+62B0h]
  __m128i v414; // [rsp+6340h] [rbp+62C0h]
  __int64 v415; // [rsp+6350h] [rbp+62D0h]
  __m128i v416; // [rsp+6360h] [rbp+62E0h] BYREF
  __m128i v417; // [rsp+6370h] [rbp+62F0h]
  __m128i v418; // [rsp+6380h] [rbp+6300h]
  __m128i v419; // [rsp+6390h] [rbp+6310h]
  __int64 v420; // [rsp+63A0h] [rbp+6320h]
  __m128i v421; // [rsp+63B0h] [rbp+6330h] BYREF
  __m128i v422; // [rsp+63C0h] [rbp+6340h]
  __m128i v423; // [rsp+63D0h] [rbp+6350h]
  __m128i v424; // [rsp+63E0h] [rbp+6360h]
  __int64 v425; // [rsp+63F0h] [rbp+6370h]
  __m128i v426; // [rsp+6400h] [rbp+6380h] BYREF
  __int128 v427; // [rsp+6410h] [rbp+6390h]
  volatile signed __int64 *v428; // [rsp+6420h] [rbp+63A0h]
  __int128 v429; // [rsp+64F0h] [rbp+6470h] BYREF
  __int128 v430; // [rsp+6500h] [rbp+6480h]
  __int64 v431; // [rsp+6510h] [rbp+6490h]
  volatile signed __int64 **v432; // [rsp+6528h] [rbp+64A8h]
  signed __int64 v433; // [rsp+6530h] [rbp+64B0h]
  _BYTE *v434; // [rsp+6538h] [rbp+64B8h]
  __m128i v435; // [rsp+6540h] [rbp+64C0h]
  __int64 v436; // [rsp+6550h] [rbp+64D0h]
  char *v437; // [rsp+6558h] [rbp+64D8h]
  __int64 v438; // [rsp+6560h] [rbp+64E0h]
  volatile signed __int64 **v439; // [rsp+6568h] [rbp+64E8h]
  signed __int64 v440; // [rsp+6570h] [rbp+64F0h]
  _BYTE *v441; // [rsp+6578h] [rbp+64F8h]
  __m128i v442; // [rsp+6580h] [rbp+6500h]
  __int64 v443; // [rsp+6590h] [rbp+6510h]
  char *v444; // [rsp+6598h] [rbp+6518h]
  const __m128i *v445; // [rsp+65A0h] [rbp+6520h]
  _BYTE *v446; // [rsp+65A8h] [rbp+6528h]
  const __m128i *v447; // [rsp+65B0h] [rbp+6530h]
  unsigned __int64 v448; // [rsp+65B8h] [rbp+6538h]
  __int64 v449; // [rsp+65C0h] [rbp+6540h]
  volatile signed __int64 **v450; // [rsp+65C8h] [rbp+6548h]
  signed __int64 v451; // [rsp+65D0h] [rbp+6550h]
  _BYTE *v452; // [rsp+65D8h] [rbp+6558h]
  __m128i v453; // [rsp+65E0h] [rbp+6560h]
  __int64 v454; // [rsp+65F0h] [rbp+6570h]
  char *v455; // [rsp+65F8h] [rbp+6578h]
  const __m128i *v456; // [rsp+6600h] [rbp+6580h]
  volatile signed __int64 **v457; // [rsp+6608h] [rbp+6588h]
  signed __int64 v458; // [rsp+6610h] [rbp+6590h]
  _BYTE *v459; // [rsp+6618h] [rbp+6598h]
  __m128i v460; // [rsp+6620h] [rbp+65A0h]
  __int64 v461; // [rsp+6630h] [rbp+65B0h]
  char *v462; // [rsp+6638h] [rbp+65B8h]
  __int64 *v463; // [rsp+6640h] [rbp+65C0h]
  volatile signed __int64 **v464; // [rsp+6648h] [rbp+65C8h]
  __int64 v465; // [rsp+6650h] [rbp+65D0h]
  __int8 *v466; // [rsp+6658h] [rbp+65D8h]
  const __m128i *v467; // [rsp+6660h] [rbp+65E0h]
  volatile signed __int64 **v468; // [rsp+6668h] [rbp+65E8h]
  signed __int64 v469; // [rsp+6670h] [rbp+65F0h]
  _BYTE *v470; // [rsp+6678h] [rbp+65F8h]
  __m128i v471; // [rsp+6680h] [rbp+6600h]
  __int64 v472; // [rsp+6690h] [rbp+6610h]
  char *v473; // [rsp+6698h] [rbp+6618h]
  __int64 *v474; // [rsp+66A0h] [rbp+6620h]
  volatile signed __int64 **v475; // [rsp+66A8h] [rbp+6628h]
  signed __int64 v476; // [rsp+66B0h] [rbp+6630h]
  _BYTE *v477; // [rsp+66B8h] [rbp+6638h]
  __m128i v478; // [rsp+66C0h] [rbp+6640h]
  __int64 v479; // [rsp+66D0h] [rbp+6650h]
  char *v480; // [rsp+66D8h] [rbp+6658h]
  __m128i *v481; // [rsp+66E0h] [rbp+6660h]
  __int64 v482; // [rsp+66F0h] [rbp+6670h]
  char *v483; // [rsp+66F8h] [rbp+6678h]
  signed __int64 v484; // [rsp+6710h] [rbp+6690h]
  volatile signed __int64 **v485; // [rsp+6718h] [rbp+6698h]
  char *v486; // [rsp+6720h] [rbp+66A0h]
  __int64 v487; // [rsp+6728h] [rbp+66A8h]
  volatile signed __int64 **v488; // [rsp+6730h] [rbp+66B0h]
  __int64 v489; // [rsp+6738h] [rbp+66B8h]
  volatile signed __int64 *v490; // [rsp+6750h] [rbp+66D0h]
  __int64 v491; // [rsp+6758h] [rbp+66D8h]
  char *v492; // [rsp+6760h] [rbp+66E0h]
  volatile signed __int64 **v493; // [rsp+6780h] [rbp+6700h]
  __int64 v494; // [rsp+6788h] [rbp+6708h]
  char *v495; // [rsp+6790h] [rbp+6710h]
  _BYTE *v496; // [rsp+6798h] [rbp+6718h]
  __int64 v497; // [rsp+67A0h] [rbp+6720h]
  char *v498; // [rsp+67A8h] [rbp+6728h]
  signed __int64 v499; // [rsp+67B0h] [rbp+6730h]
  __m128i v500; // [rsp+67B8h] [rbp+6738h]
  __int64 v501; // [rsp+67C8h] [rbp+6748h]
  signed __int64 v502; // [rsp+67D0h] [rbp+6750h]
  _BYTE *v503; // [rsp+67D8h] [rbp+6758h]
  __m128i v504; // [rsp+67E0h] [rbp+6760h]
  __int64 v505; // [rsp+67F0h] [rbp+6770h]
  __int64 v506; // [rsp+67F8h] [rbp+6778h]
  signed __int64 v507; // [rsp+6800h] [rbp+6780h]
  _BYTE *v508; // [rsp+6808h] [rbp+6788h]
  __m128i v509; // [rsp+6810h] [rbp+6790h]
  __int64 v510; // [rsp+6820h] [rbp+67A0h]
  __int64 v511; // [rsp+6828h] [rbp+67A8h]
  __int64 v512; // [rsp+6830h] [rbp+67B0h]
  signed __int64 v513; // [rsp+6838h] [rbp+67B8h]
  _BYTE *v514; // [rsp+6840h] [rbp+67C0h]
  __m128i v515; // [rsp+6848h] [rbp+67C8h]
  __int64 v516; // [rsp+6858h] [rbp+67D8h]
  __int64 v517; // [rsp+6860h] [rbp+67E0h]
  unsigned __int64 v518; // [rsp+6868h] [rbp+67E8h]
  __int64 v519; // [rsp+6870h] [rbp+67F0h]
  __int64 v520; // [rsp+6878h] [rbp+67F8h]
  signed __int64 v521; // [rsp+6880h] [rbp+6800h]
  _BYTE *v522; // [rsp+6888h] [rbp+6808h]
  __m128i v523; // [rsp+6890h] [rbp+6810h]
  __int64 v524; // [rsp+68A0h] [rbp+6820h]
  __int64 v525; // [rsp+68A8h] [rbp+6828h]
  _BYTE *v526; // [rsp+68B0h] [rbp+6830h]
  __int64 v527; // [rsp+68B8h] [rbp+6838h]
  unsigned __int64 v528; // [rsp+68C0h] [rbp+6840h]
  __int64 v529; // [rsp+68C8h] [rbp+6848h]
  volatile signed __int64 **v530; // [rsp+68D0h] [rbp+6850h]
  signed __int64 v531; // [rsp+68D8h] [rbp+6858h]
  _BYTE *v532; // [rsp+68E0h] [rbp+6860h]
  __m128i v533; // [rsp+68E8h] [rbp+6868h]
  __int64 v534; // [rsp+68F8h] [rbp+6878h]
  volatile signed __int64 **v535; // [rsp+6900h] [rbp+6880h]
  signed __int64 v536; // [rsp+6908h] [rbp+6888h]
  _BYTE *v537; // [rsp+6910h] [rbp+6890h]
  __m128i v538; // [rsp+6918h] [rbp+6898h]
  __int64 v539; // [rsp+6928h] [rbp+68A8h]
  char *v540; // [rsp+6930h] [rbp+68B0h]
  __int64 v541; // [rsp+6938h] [rbp+68B8h]
  __int64 v542; // [rsp+6940h] [rbp+68C0h]
  __int64 v543; // [rsp+6948h] [rbp+68C8h]
  volatile signed __int64 **v544; // [rsp+6950h] [rbp+68D0h]
  signed __int64 v545; // [rsp+6958h] [rbp+68D8h]
  _BYTE *v546; // [rsp+6960h] [rbp+68E0h]
  __m128i v547; // [rsp+6968h] [rbp+68E8h]
  __int64 v548; // [rsp+6978h] [rbp+68F8h]
  volatile signed __int64 **v549; // [rsp+6980h] [rbp+6900h]
  signed __int64 v550; // [rsp+6988h] [rbp+6908h]
  _BYTE *v551; // [rsp+6990h] [rbp+6910h]
  __m128i v552; // [rsp+6998h] [rbp+6918h]
  __int64 v553; // [rsp+69A8h] [rbp+6928h]
  char *v554; // [rsp+69B0h] [rbp+6930h]
  __int64 v555; // [rsp+69B8h] [rbp+6938h]
  volatile signed __int64 **v556; // [rsp+69C0h] [rbp+6940h]
  signed __int64 v557; // [rsp+69C8h] [rbp+6948h]
  _BYTE *v558; // [rsp+69D0h] [rbp+6950h]
  __m128i v559; // [rsp+69D8h] [rbp+6958h]
  __int64 v560; // [rsp+69E8h] [rbp+6968h]
  char *v561; // [rsp+69F0h] [rbp+6970h]
  __int64 v562; // [rsp+69F8h] [rbp+6978h]
  __int64 v563; // [rsp+6A00h] [rbp+6980h]
  signed __int64 v564; // [rsp+6A08h] [rbp+6988h]
  _BYTE *v565; // [rsp+6A10h] [rbp+6990h]
  __m128i v566; // [rsp+6A18h] [rbp+6998h]
  volatile signed __int64 **v567; // [rsp+6A28h] [rbp+69A8h]
  signed __int64 v568; // [rsp+6A30h] [rbp+69B0h]
  _BYTE *v569; // [rsp+6A38h] [rbp+69B8h]
  __m128i v570; // [rsp+6A40h] [rbp+69C0h]
  __int64 v571; // [rsp+6A50h] [rbp+69D0h]
  char *v572; // [rsp+6A58h] [rbp+69D8h]
  volatile signed __int64 **v573; // [rsp+6A60h] [rbp+69E0h]
  signed __int64 v574; // [rsp+6A68h] [rbp+69E8h]
  _BYTE *v575; // [rsp+6A70h] [rbp+69F0h]
  __m128i v576; // [rsp+6A78h] [rbp+69F8h]
  __int64 v577; // [rsp+6A88h] [rbp+6A08h]
  char *v578; // [rsp+6A90h] [rbp+6A10h]
  __int64 v579; // [rsp+6A98h] [rbp+6A18h]
  __int64 v580; // [rsp+6AA0h] [rbp+6A20h]
  __int64 v581; // [rsp+6AA8h] [rbp+6A28h]
  signed __int64 v582; // [rsp+6AB0h] [rbp+6A30h]
  _BYTE *v583; // [rsp+6AB8h] [rbp+6A38h]
  __m128i v584; // [rsp+6AC0h] [rbp+6A40h]
  const __m128i *v585; // [rsp+6AD0h] [rbp+6A50h]
  volatile signed __int64 **v586; // [rsp+6AD8h] [rbp+6A58h]
  signed __int64 v587; // [rsp+6AE0h] [rbp+6A60h]
  _BYTE *v588; // [rsp+6AE8h] [rbp+6A68h]
  __m128i v589; // [rsp+6AF0h] [rbp+6A70h]
  __int64 v590; // [rsp+6B00h] [rbp+6A80h]
  char *v591; // [rsp+6B08h] [rbp+6A88h]
  __int64 *v592; // [rsp+6B10h] [rbp+6A90h]
  volatile signed __int64 **v593; // [rsp+6B18h] [rbp+6A98h]
  const __m128i *v594; // [rsp+6B20h] [rbp+6AA0h]
  volatile signed __int64 **v595; // [rsp+6B28h] [rbp+6AA8h]
  signed __int64 v596; // [rsp+6B30h] [rbp+6AB0h]
  _BYTE *v597; // [rsp+6B38h] [rbp+6AB8h]
  __m128i v598; // [rsp+6B40h] [rbp+6AC0h]
  __int64 v599; // [rsp+6B50h] [rbp+6AD0h]
  char *v600; // [rsp+6B58h] [rbp+6AD8h]
  __int64 *v601; // [rsp+6B60h] [rbp+6AE0h]
  volatile signed __int64 **v602; // [rsp+6B68h] [rbp+6AE8h]
  volatile signed __int64 **v603; // [rsp+6B70h] [rbp+6AF0h]
  __int64 v604; // [rsp+6B78h] [rbp+6AF8h]
  unsigned __int64 v605; // [rsp+6B80h] [rbp+6B00h]
  __int64 v606; // [rsp+6B88h] [rbp+6B08h]
  __int64 v607; // [rsp+6B90h] [rbp+6B10h]
  signed __int64 v608; // [rsp+6B98h] [rbp+6B18h]
  _BYTE *v609; // [rsp+6BA0h] [rbp+6B20h]
  __m128i v610; // [rsp+6BA8h] [rbp+6B28h]
  volatile signed __int64 **v611; // [rsp+6BB8h] [rbp+6B38h]
  _BYTE *v612; // [rsp+6BC0h] [rbp+6B40h]
  __int64 v613; // [rsp+6BC8h] [rbp+6B48h]
  unsigned __int64 v614; // [rsp+6BD0h] [rbp+6B50h]
  const __m128i *v615; // [rsp+6BD8h] [rbp+6B58h]
  volatile signed __int64 **v616; // [rsp+6BE0h] [rbp+6B60h]
  signed __int64 v617; // [rsp+6BE8h] [rbp+6B68h]
  _BYTE *v618; // [rsp+6BF0h] [rbp+6B70h]
  __m128i v619; // [rsp+6BF8h] [rbp+6B78h]
  __int64 v620; // [rsp+6C08h] [rbp+6B88h]
  char *v621; // [rsp+6C10h] [rbp+6B90h]
  __int64 *v622; // [rsp+6C18h] [rbp+6B98h]
  volatile signed __int64 **v623; // [rsp+6C20h] [rbp+6BA0h]
  volatile signed __int64 **v624; // [rsp+6C28h] [rbp+6BA8h]
  signed __int64 v625; // [rsp+6C30h] [rbp+6BB0h]
  _BYTE *v626; // [rsp+6C38h] [rbp+6BB8h]
  __m128i v627; // [rsp+6C40h] [rbp+6BC0h]
  __int64 v628; // [rsp+6C50h] [rbp+6BD0h]
  char *v629; // [rsp+6C58h] [rbp+6BD8h]
  __int64 v630; // [rsp+6C60h] [rbp+6BE0h]
  volatile signed __int64 **v631; // [rsp+6C68h] [rbp+6BE8h]
  __int64 v632; // [rsp+6C70h] [rbp+6BF0h]
  char *v633; // [rsp+6C78h] [rbp+6BF8h]
  __int64 v634; // [rsp+6C80h] [rbp+6C00h]
  volatile signed __int64 **v635; // [rsp+6C88h] [rbp+6C08h]
  signed __int64 v636; // [rsp+6C90h] [rbp+6C10h]
  _BYTE *v637; // [rsp+6C98h] [rbp+6C18h]
  __m128i v638; // [rsp+6CA0h] [rbp+6C20h]
  __int64 v639; // [rsp+6CB0h] [rbp+6C30h]
  char *v640; // [rsp+6CB8h] [rbp+6C38h]
  int v641; // [rsp+6CC0h] [rbp+6C40h]
  int v642; // [rsp+6CC4h] [rbp+6C44h]
  _BYTE *v643; // [rsp+6CC8h] [rbp+6C48h]
  __int64 v644; // [rsp+6CD0h] [rbp+6C50h]
  char *v645; // [rsp+6CD8h] [rbp+6C58h]
  const __m128i *v646; // [rsp+6CE0h] [rbp+6C60h]
  volatile signed __int64 **v647; // [rsp+6CE8h] [rbp+6C68h]
  signed __int64 v648; // [rsp+6CF0h] [rbp+6C70h]
  _BYTE *v649; // [rsp+6CF8h] [rbp+6C78h]
  __m128i v650; // [rsp+6D00h] [rbp+6C80h]
  __int64 v651; // [rsp+6D10h] [rbp+6C90h]
  char *v652; // [rsp+6D18h] [rbp+6C98h]
  char *v653; // [rsp+6D20h] [rbp+6CA0h]
  const __m128i *v654; // [rsp+6D28h] [rbp+6CA8h]
  unsigned __int64 v655; // [rsp+6D30h] [rbp+6CB0h]
  __int64 v656; // [rsp+6D38h] [rbp+6CB8h]
  volatile signed __int64 **v657; // [rsp+6D40h] [rbp+6CC0h]
  signed __int64 v658; // [rsp+6D48h] [rbp+6CC8h]
  _BYTE *v659; // [rsp+6D50h] [rbp+6CD0h]
  __m128i v660; // [rsp+6D58h] [rbp+6CD8h]
  __int64 v661; // [rsp+6D68h] [rbp+6CE8h]
  char *v662; // [rsp+6D70h] [rbp+6CF0h]
  __int64 v663; // [rsp+6D78h] [rbp+6CF8h]
  volatile signed __int64 **v664; // [rsp+6D80h] [rbp+6D00h]
  signed __int64 v665; // [rsp+6D88h] [rbp+6D08h]
  _BYTE *v666; // [rsp+6D90h] [rbp+6D10h]
  __m128i v667; // [rsp+6D98h] [rbp+6D18h]
  __int64 v668; // [rsp+6DA8h] [rbp+6D28h]
  char *v669; // [rsp+6DB0h] [rbp+6D30h]
  int v670; // [rsp+6DBCh] [rbp+6D3Ch]
  int v671; // [rsp+6DC0h] [rbp+6D40h]
  int v672; // [rsp+6DC4h] [rbp+6D44h]
  volatile signed __int64 **v673; // [rsp+6DC8h] [rbp+6D48h]
  signed __int64 v674; // [rsp+6DD0h] [rbp+6D50h]
  _BYTE *v675; // [rsp+6DD8h] [rbp+6D58h]
  __m128i v676; // [rsp+6DE0h] [rbp+6D60h]
  __int64 v677; // [rsp+6DF0h] [rbp+6D70h]
  char *v678; // [rsp+6DF8h] [rbp+6D78h]
  __int64 v679; // [rsp+6E00h] [rbp+6D80h]
  char *v680; // [rsp+6E08h] [rbp+6D88h]
  _BYTE *v681; // [rsp+6E10h] [rbp+6D90h]
  __int64 v682; // [rsp+6E18h] [rbp+6D98h]
  char *v683; // [rsp+6E20h] [rbp+6DA0h]
  const __m128i *v684; // [rsp+6E28h] [rbp+6DA8h]
  char *v685; // [rsp+6E30h] [rbp+6DB0h]
  const __m128i *v686; // [rsp+6E38h] [rbp+6DB8h]
  _BYTE *v687; // [rsp+6E40h] [rbp+6DC0h]
  const __m128i *v688; // [rsp+6E48h] [rbp+6DC8h]
  unsigned __int64 v689; // [rsp+6E50h] [rbp+6DD0h]
  __int64 v690; // [rsp+6E58h] [rbp+6DD8h]
  volatile signed __int64 **v691; // [rsp+6E60h] [rbp+6DE0h]
  signed __int64 v692; // [rsp+6E68h] [rbp+6DE8h]
  _BYTE *v693; // [rsp+6E70h] [rbp+6DF0h]
  __m128i v694; // [rsp+6E78h] [rbp+6DF8h]
  __int64 v695; // [rsp+6E88h] [rbp+6E08h]
  char *v696; // [rsp+6E90h] [rbp+6E10h]
  _BYTE *v697; // [rsp+6E98h] [rbp+6E18h]
  __int64 v698; // [rsp+6EA0h] [rbp+6E20h]
  char *v699; // [rsp+6EA8h] [rbp+6E28h]
  volatile signed __int64 **v700; // [rsp+6EB0h] [rbp+6E30h]
  signed __int64 v701; // [rsp+6EB8h] [rbp+6E38h]
  __int64 v702; // [rsp+6EC0h] [rbp+6E40h]
  char *v703; // [rsp+6EC8h] [rbp+6E48h]
  const __m128i *v704; // [rsp+6ED0h] [rbp+6E50h]
  __int64 v705; // [rsp+6ED8h] [rbp+6E58h]
  char *v706; // [rsp+6EE0h] [rbp+6E60h]
  const __m128i *v707; // [rsp+6EE8h] [rbp+6E68h]
  char *v708; // [rsp+6EF0h] [rbp+6E70h]
  char v709; // [rsp+6EFFh] [rbp+6E7Fh] BYREF
  _BYTE *v710; // [rsp+6F00h] [rbp+6E80h]
  __int128 v711; // [rsp+6F08h] [rbp+6E88h]
  _BYTE *v712; // [rsp+6F18h] [rbp+6E98h]
  volatile signed __int64 **v713; // [rsp+6F20h] [rbp+6EA0h]
  const __m128i *v714; // [rsp+6F28h] [rbp+6EA8h]
  const __m128i *v715; // [rsp+6F30h] [rbp+6EB0h]
  unsigned __int64 v716; // [rsp+6F38h] [rbp+6EB8h]
  const __m128i *v717; // [rsp+6F40h] [rbp+6EC0h]
  const __m128i *v718; // [rsp+6F48h] [rbp+6EC8h]
  __m128i *v719; // [rsp+6F50h] [rbp+6ED0h]
  char *v720; // [rsp+6F58h] [rbp+6ED8h]
  _BYTE *v721; // [rsp+6F60h] [rbp+6EE0h]
  volatile signed __int64 **v722; // [rsp+6F68h] [rbp+6EE8h]
  __int64 v723; // [rsp+6F70h] [rbp+6EF0h]
  const __m128i *v724; // [rsp+6F78h] [rbp+6EF8h]
  __m128i *v725; // [rsp+6F80h] [rbp+6F00h]
  const __m128i *v726; // [rsp+6F88h] [rbp+6F08h]
  __int64 v727; // [rsp+6F90h] [rbp+6F10h]
  unsigned __int64 v728; // [rsp+6F98h] [rbp+6F18h]
  volatile signed __int64 **v729; // [rsp+6FA0h] [rbp+6F20h]
  signed __int64 v730; // [rsp+6FA8h] [rbp+6F28h]
  volatile signed __int64 **v731; // [rsp+6FB0h] [rbp+6F30h]
  __m128i v732; // [rsp+6FB8h] [rbp+6F38h]
  __int64 v733; // [rsp+6FC8h] [rbp+6F48h]
  _BYTE *v734; // [rsp+6FD0h] [rbp+6F50h]
  char *v735; // [rsp+6FD8h] [rbp+6F58h]
  __int64 v736; // [rsp+6FE0h] [rbp+6F60h]
  __int64 v737; // [rsp+6FE8h] [rbp+6F68h]

  *(_QWORD *)&v4 = a1;
  v737 = -2;
  v8 = a3;
  v9 = a2;
  v10 = (volatile signed __int64 **)v4;
  v11 = *(unsigned __int8 *)(a2 + 476);
  v736 = a2;
  switch ( v11 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 472) = 0;
      *(_QWORD *)(a2 + 465) = 0;
      *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 456);
      v12 = sub_140DC0240();
      v13 = v736;
      *(_BYTE *)(v736 + 464) = v12;
      sub_140DC0A80(v345, *(_QWORD *)(v13 + 272), v12);
      v5 = *(_QWORD *)&v345[8];
      v4 = *(_OWORD *)&v345[16];
      if ( v345[0] )
      {
        v14 = -1;
        v15 = *(volatile signed __int64 **)&v345[8];
        v16 = v736;
        goto LABEL_267;
      }
      *(_BYTE *)(v736 + 475) = 0;
      v362.m256i_i64[0] = v5;
      *(_OWORD *)&v362.m256i_u64[1] = v4;
      v735 = (char *)v4;
      v680 = (char *)v4;
      v679 = v5;
      sub_14119DFC0(v345, &v362);
      v6 = *(char **)v345;
      if ( *(_QWORD *)v345 == -1 )
      {
        v733 = v5;
        sub_1418F44E0((__m128i *)&v362, (const __m128i *)&v345[8], 0x88u);
        v339.m128i_i64[0] = (__int64)&v362;
        v339.m128i_i64[1] = (__int64)sub_14119C700;
        sub_1416ABFD0(&v354, &unk_141A26053, &v339);
        v680 = v735;
        v679 = v733;
        sub_140994490(&v362, v79, v80);
        v732 = v354;
        *((_QWORD *)&v4 + 1) = v355;
        v14 = -1;
        goto LABEL_204;
      }
      v7 = *(volatile signed __int64 ***)&v345[24];
      sub_1418F44E0((__m128i *)&v362, (const __m128i *)&v345[32], 0xC0u);
      v34 = _mm_loadu_si128((const __m128i *)&v345[8]);
      v9 = v736;
      *(_BYTE *)(v736 + 466) = 1;
      *(_QWORD *)v9 = v6;
      *(__m128i *)(v9 + 8) = v34;
      *(_QWORD *)(v9 + 24) = v7;
      sub_1418F44E0((__m128i *)(v9 + 32), (const __m128i *)&v362, 0xC0u);
      if ( *(_BYTE *)(v9 + 464) == 2 )
        goto LABEL_19;
      v81 = *(_QWORD *)(v9 + 272);
      v82 = *(_QWORD *)(v81 + 32);
      v83 = *(_QWORD *)(v81 + 40);
      v6 = v735;
      v706 = v735;
      v705 = v5;
      v84.m128i_i64[0] = sub_140E91160(v82, v83);
      v337 = v84;
      if ( !v84.m128i_i64[1] )
      {
        v706 = v6;
        v705 = v5;
        sub_1409E8530(v345);
        v732 = *(__m128i *)v345;
        *((_QWORD *)&v4 + 1) = *(_QWORD *)&v345[16];
        goto LABEL_201;
      }
      v339.m128i_i64[0] = (__int64)&v337;
      v339.m128i_i64[1] = (__int64)sub_140186EE0;
      v706 = v6;
      v705 = v5;
      sub_1416ABFD0(&v354, &unk_141A267B8, &v339);
      v733 = v5;
      v731 = (volatile signed __int64 **)v354.m128i_i64[1];
      v734 = (_BYTE *)v354.m128i_i64[0];
      if ( !(_QWORD)v355 )
        goto LABEL_74;
      v85 = 0;
      break;
    case 1LL:
      sub_1419393E0(&off_141A26830);
    case 2LL:
      sub_141939400(&off_141A26830);
    case 3LL:
      v732.m128i_i64[1] = a2 + 11160;
      v24 = *(unsigned __int8 *)(a2 + 11160);
      v732.m128i_i64[0] = a2 + 480;
      switch ( v24 )
      {
        case 0LL:
          goto LABEL_20;
        case 1LL:
          v630 = v732.m128i_i64[0];
          sub_1419393E0(&off_141A25B38);
        case 2LL:
          JUMPOUT(0x1409C3E98LL);
        case 3LL:
          v734 = (_BYTE *)(a2 + 11153);
          v26 = *(unsigned __int8 *)(a2 + 11153);
          v730 = a2 + 704;
          switch ( v26 )
          {
            case 0LL:
              v27 = *(_BYTE *)(a2 + 11152);
              v28 = *(_QWORD *)(a2 + 704);
              v29 = (const __m128i *)(a2 + 712);
              if ( v28 == -1 )
                goto LABEL_16;
              goto LABEL_21;
            case 1LL:
              v500 = v732;
              v499 = v730;
              sub_1419393E0(&off_141A25B50);
            case 2LL:
              v500 = v732;
              v499 = v730;
              sub_141939400(&off_141A25B50);
            case 3LL:
              v653 = (char *)(a2 + 1899);
              v78 = (volatile signed __int64 **)(a2 + 1224);
              switch ( *(_BYTE *)(a2 + 1899) )
              {
                case 0:
                  v729 = (volatile signed __int64 **)v4;
                  v35 = a3;
                  v27 = *(_BYTE *)(a2 + 1898);
                  v43 = *(_QWORD *)(a2 + 1224);
                  v39 = (volatile signed __int64 **)(a2 + 1224);
                  break;
                case 1:
                  v504 = v732;
                  v503 = v734;
                  v502 = v730;
                  v501 = a2 + 1224;
                  sub_1419393E0(&off_141A26958);
                case 2:
                  v504 = v732;
                  v503 = v734;
                  v502 = v730;
                  v501 = a2 + 1224;
                  sub_141939400(&off_141A26958);
                case 3:
                  v720 = (char *)(a2 + 1944);
                  v69 = (const __m128i *)(a2 + 1920);
                  switch ( *(_BYTE *)(a2 + 1944) )
                  {
                    case 0:
                      v731 = (volatile signed __int64 **)(a2 + 1224);
                      v70 = (char *)(a2 + 1944);
                      goto LABEL_47;
                    case 1:
                      v566 = v732;
                      v565 = v734;
                      v564 = v730;
                      v563 = a2 + 1224;
                      v562 = a2 + 1920;
                      sub_1419393E0(&off_141A25898);
                    case 2:
                      v566 = v732;
                      v565 = v734;
                      v564 = v730;
                      v563 = a2 + 1224;
                      v562 = a2 + 1920;
                      sub_141939400(&off_141A25898);
                    case 3:
                      v724 = (const __m128i *)(a2 + 1920);
                      v731 = (volatile signed __int64 **)(a2 + 1224);
                      v70 = (char *)(a2 + 1944);
                      goto LABEL_50;
                    case 4:
                      v108 = (__int8 *)(a2 + 2104);
                      v109 = *(unsigned __int8 *)(v9 + 2104);
                      v723 = v9 + 2000;
                      switch ( v109 )
                      {
                        case 0LL:
                          v110 = v723;
                          break;
                        case 1LL:
                          v584 = v732;
                          v583 = v734;
                          v582 = v730;
                          v581 = v9 + 1224;
                          v580 = v9 + 1920;
                          JUMPOUT(0x1409C43ACLL);
                        case 2LL:
                          v584 = v732;
                          v583 = v734;
                          v582 = v730;
                          v581 = v9 + 1224;
                          v580 = v9 + 1920;
                          v579 = v723;
                          sub_141939400(&off_141A26260);
                        case 3LL:
                          v728 = v9 + 2104;
                          v721 = (_BYTE *)(v9 + 2096);
                          v120 = *(unsigned __int8 *)(v9 + 2096);
                          v722 = (volatile signed __int64 **)(v9 + 2032);
                          switch ( v120 )
                          {
                            case 0LL:
                              v121 = *(_QWORD *)(v9 + 2032);
                              v122 = *(volatile signed __int64 ***)(v9 + 2040);
                              v123 = v721;
                              v124 = v722;
                              goto LABEL_296;
                            case 1LL:
                              v610 = v732;
                              v609 = v734;
                              v608 = v730;
                              v607 = v9 + 1224;
                              v606 = v9 + 1920;
                              v605 = v728;
                              v604 = v723;
                              v603 = v722;
                              sub_1419393E0(&off_141A26248);
                            case 2LL:
                              v610 = v732;
                              v609 = v734;
                              v608 = v730;
                              v607 = v9 + 1224;
                              v606 = v9 + 1920;
                              v605 = v728;
                              v604 = v723;
                              v603 = v722;
                              sub_141939400(&off_141A26248);
                            case 3LL:
                              v724 = (const __m128i *)(v9 + 1920);
                              v731 = (volatile signed __int64 **)(v9 + 1224);
                              v149 = *(_QWORD *)(v9 + 2088);
                              goto LABEL_298;
                          }
                      }
                      goto LABEL_294;
                  }
                case 4:
                  v92 = (char *)(a2 + 2600);
                  v93 = *(unsigned __int8 *)(a2 + 2600);
                  v727 = a2 + 1904;
                  v731 = (volatile signed __int64 **)(a2 + 1224);
                  switch ( v93 )
                  {
                    case 0LL:
                      v708 = (char *)(a2 + 2600);
                      v729 = *(volatile signed __int64 ***)(a2 + 1952);
                      v5 = a2 + 1904;
                      goto LABEL_339;
                    case 1LL:
                      v509 = v732;
                      v508 = v734;
                      v507 = v730;
                      v506 = a2 + 1224;
                      v505 = v727;
                      sub_1419393E0(&off_141A25AA8);
                    case 2LL:
                      v509 = v732;
                      v508 = v734;
                      v507 = v730;
                      v506 = a2 + 1224;
                      v505 = v727;
                      sub_141939400(&off_141A25AA8);
                    case 3LL:
                      goto LABEL_98;
                    case 4LL:
                      v708 = (char *)(a2 + 2600);
                      v114 = (volatile signed __int64 **)(a2 + 2649);
                      v115 = a2 + 2608;
                      if ( *(_BYTE *)(a2 + 2649) )
                      {
                        if ( *(_BYTE *)(a2 + 2649) == 1 )
                        {
                          v547 = v732;
                          v546 = v734;
                          v545 = v730;
                          v544 = v731;
                          v543 = v727;
                          v542 = a2 + 2649;
                          v541 = a2 + 2608;
                          sub_1419393E0(&off_141A25CA0);
                        }
                        v547 = v732;
                        v546 = v734;
                        v545 = v730;
                        v544 = v731;
                        v543 = v727;
                        v542 = a2 + 2649;
                        v541 = a2 + 2608;
                        sub_141939400(&off_141A25CA0);
                      }
                      LOBYTE(v116) = *(_BYTE *)(a2 + 2648);
                      goto LABEL_102;
                    case 5LL:
                      goto LABEL_96;
                    case 6LL:
                      v728 = a2 + 11144;
                      v111 = (const __m128i *)(a2 + 2608);
                      switch ( *(_BYTE *)(a2 + 11144) )
                      {
                        case 0:
                          v708 = (char *)(a2 + 2600);
                          goto LABEL_112;
                        case 1:
                          v515 = v732;
                          v514 = v734;
                          v513 = v730;
                          v512 = a2 + 1224;
                          v511 = v727;
                          v510 = a2 + 2608;
                          sub_1419393E0(&off_141A25810);
                        case 2:
                          v515 = v732;
                          v514 = v734;
                          v513 = v730;
                          v512 = a2 + 1224;
                          JUMPOUT(0x1409C4412LL);
                        case 3:
                          v710 = (_BYTE *)(a2 + 11136);
                          v134 = (const __m128i *)(a2 + 4008);
                          switch ( *(_BYTE *)(a2 + 11136) )
                          {
                            case 0:
                              v708 = (char *)(a2 + 2600);
                              break;
                            case 1:
                              v523 = v732;
                              v522 = v734;
                              v521 = v730;
                              v520 = a2 + 1224;
                              v519 = v727;
                              v518 = v728;
                              v517 = a2 + 2608;
                              v516 = a2 + 4008;
                              sub_1419393E0(&off_141A25BE0);
                            case 2:
                              v523 = v732;
                              v522 = v734;
                              v521 = v730;
                              v520 = a2 + 1224;
                              v519 = v727;
                              v518 = v728;
                              v517 = a2 + 2608;
                              v516 = a2 + 4008;
                              sub_141939400(&off_141A25BE0);
                            case 3:
                              v703 = (char *)(a2 + 6808);
                              v135 = (const __m128i *)(a2 + 5408);
                              switch ( *(_BYTE *)(a2 + 6808) )
                              {
                                case 0:
                                  v708 = (char *)(a2 + 2600);
                                  goto LABEL_114;
                                case 1:
                                  v533 = v732;
                                  v532 = v734;
                                  v531 = v730;
                                  v530 = v731;
                                  v529 = v727;
                                  v528 = v728;
                                  v527 = a2 + 2608;
                                  v526 = v710;
                                  v525 = a2 + 4008;
                                  v524 = a2 + 5408;
                                  sub_1419393E0(&off_141A25BF8);
                                case 2:
                                  v533 = v732;
                                  v532 = v734;
                                  v531 = v730;
                                  v530 = v731;
                                  v529 = v727;
                                  v528 = v728;
                                  v527 = a2 + 2608;
                                  v526 = v710;
                                  v525 = a2 + 4008;
                                  v524 = a2 + 5408;
                                  sub_141939400(&off_141A25BF8);
                                case 3:
                                  v704 = (const __m128i *)(a2 + 5408);
                                  v707 = (const __m128i *)(a2 + 4008);
                                  v717 = (const __m128i *)(a2 + 2608);
                                  goto LABEL_115;
                                case 4:
                                  v704 = (const __m128i *)(a2 + 5408);
                                  v707 = (const __m128i *)(a2 + 4008);
                                  v717 = (const __m128i *)(a2 + 2608);
                                  goto LABEL_130;
                              }
                          }
                          goto LABEL_113;
                      }
                  }
              }
              goto LABEL_22;
          }
      }
      goto LABEL_20;
    case 4LL:
      v729 = (volatile signed __int64 **)v4;
      v17 = a2 + 488;
      v18 = *(volatile signed __int64 ***)(a2 + 488);
      if ( v18 != (volatile signed __int64 **)-1LL )
      {
        v732.m128i_i64[0] = *(_QWORD *)(a2 + 488);
        v19 = v8;
        goto LABEL_212;
      }
      v49 = *(__int64 **)(a2 + 528);
      goto LABEL_217;
    case 5LL:
      goto LABEL_6;
  }
  do
  {
    v86 = *(_BYTE *)(v354.m128i_i64[1] + v85);
    if ( v86 > 0x1Fu )
    {
      if ( v86 == 127 )
        goto LABEL_65;
    }
    else if ( v86 != 9 )
    {
LABEL_65:
      v354.m128i_i64[0] = (__int64)&v709;
      v354.m128i_i64[1] = (__int64)sub_14164E700;
      sub_1416ABFD0(&v362, &unk_141A2608F, &v354);
      v732 = *(__m128i *)v362.m256i_i8;
      *((_QWORD *)&v4 + 1) = v362.m256i_i64[2];
      v16 = v736;
      v5 = v733;
      v6 = v735;
      if ( !v734 )
        goto LABEL_202;
      sub_140001660(v731, v734, 1);
      v14 = -1;
      if ( *(_BYTE *)(v16 + 466) )
        goto LABEL_203;
      goto LABEL_266;
    }
    ++v85;
  }
  while ( (_QWORD)v355 != v85 );
LABEL_74:
  sub_141653430(v345);
  v345[32] = 0;
  v95 = _mm_loadu_si128((const __m128i *)v345);
  *(_OWORD *)&v362.m256i_u64[2] = *(_OWORD *)&v345[16];
  *(__m128i *)v362.m256i_i8 = v95;
  *(_QWORD *)&v363 = *(_QWORD *)&v345[32];
  v732.m128i_i64[1] = v95.m128i_i64[1];
  v96 = *(_QWORD *)&v345[16];
  v7 = (volatile signed __int64 **)v362.m256i_i64[3];
  v328.m128i_i32[0] = *(_DWORD *)((char *)&v363 + 1);
  *(__int32 *)((char *)v328.m128i_i32 + 3) = DWORD1(v363);
  v98 = v736;
  if ( v734 )
    sub_140001660(v731, v734, 1);
  *(_QWORD *)v345 = v95.m128i_i64[0];
  *(_QWORD *)&v345[8] = v732.m128i_i64[1];
  *(_QWORD *)&v345[16] = v96;
  *(_QWORD *)&v345[24] = v7;
  v345[32] = 0;
  *(_DWORD *)&v345[33] = v328.m128i_i32[0];
  *(_DWORD *)&v345[36] = *(__int32 *)((char *)v328.m128i_i32 + 3);
  v355 = xmmword_141A267D8;
  v354 = _mm_loadu_si128((const __m128i *)&xmmword_141A267C8);
  v99 = v735;
  v706 = v735;
  v705 = v733;
  v100 = v98;
  v5 = v733;
  sub_140CA88C0(&v362, v100, &v354, v345);
  if ( (_BYTE)v363 != 2 )
  {
    v101 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v362.m256i_i64[0] + 32);
    v706 = v99;
    v705 = v5;
    v101(&v362.m256i_u64[3], v362.m256i_i64[1], v362.m256i_i64[2]);
  }
  v355 = xmmword_141A267F8;
  v354 = _mm_loadu_si128((const __m128i *)&xmmword_141A267E8);
  *(_QWORD *)v345 = off_141A26D50;
  *(_QWORD *)&v345[8] = aAimamiTypemami_0;
  *(_OWORD *)&v345[16] = 0xFu;
  v345[32] = 0;
  v706 = v99;
  v705 = v5;
  sub_140CA88C0(&v362, v736, &v354, v345);
  if ( (_BYTE)v363 != 2 )
  {
    v102 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v362.m256i_i64[0] + 32);
    v706 = v99;
    v705 = v5;
    v102(&v362.m256i_u64[3], v362.m256i_i64[1], v362.m256i_i64[2]);
  }
  v9 = v736;
LABEL_19:
  *(_BYTE *)(v9 + 466) = 0;
  v732.m128i_i64[0] = v9 + 480;
  sub_1418F44E0((__m128i *)(v9 + 480), (const __m128i *)v9, 0xE0u);
  v732.m128i_i64[1] = v9 + 11160;
  *(_BYTE *)(v9 + 11160) = 0;
LABEL_20:
  v730 = v9 + 704;
  sub_1418F44E0((__m128i *)(v9 + 704), (const __m128i *)v732.m128i_i64[0], 0xE0u);
  *(_QWORD *)(v9 + 928) = 2;
  *(_WORD *)(v9 + 11152) = 0;
  v734 = (_BYTE *)(v9 + 11153);
  v27 = 0;
  v28 = *(_QWORD *)(v9 + 704);
  v29 = (const __m128i *)(v9 + 712);
  if ( v28 == -1 )
  {
LABEL_16:
    v716 = v8;
    v733 = v5;
    sub_1418F44E0((__m128i *)(v9 + 1008), v29, 0x88u);
    *(_QWORD *)(v9 + 1000) = -1;
    v30 = *(_QWORD *)(v9 + 1008);
    v31 = v9;
    v32 = *(_QWORD *)(v9 + 1016);
    v718 = *(const __m128i **)(v31 + 1024);
    v726 = *(const __m128i **)(v31 + 1032);
    v715 = *(const __m128i **)(v31 + 1040);
    v714 = *(const __m128i **)(v31 + 1048);
    v719 = *(__m128i **)(v31 + 1056);
    v725 = *(__m128i **)(v31 + 1064);
    v711 = *(_OWORD *)(v31 + 1072);
    v724 = *(const __m128i **)(v31 + 1088);
    v720 = *(char **)(v31 + 1096);
    v721 = *(_BYTE **)(v31 + 1104);
    v712 = *(_BYTE **)(v31 + 1112);
    v723 = *(_QWORD *)(v31 + 1120);
    v713 = *(volatile signed __int64 ***)(v31 + 1128);
    v722 = *(volatile signed __int64 ***)(v31 + 1136);
    v33 = 2;
    goto LABEL_199;
  }
LABEL_21:
  v729 = v10;
  v35 = v8;
  *(_QWORD *)(v9 + 1000) = v28;
  sub_1418F44E0((__m128i *)(v9 + 1008), v29, 0x88u);
  v36 = *(_OWORD *)(v9 + 864);
  v37 = *(_OWORD *)(v9 + 880);
  v38 = *(_OWORD *)(v9 + 896);
  *(_OWORD *)(v9 + 1144) = *(_OWORD *)(v9 + 848);
  *(_OWORD *)(v9 + 1160) = v36;
  *(_OWORD *)(v9 + 1176) = v37;
  *(_OWORD *)(v9 + 1192) = v38;
  *(_OWORD *)(v9 + 1208) = *(_OWORD *)(v9 + 912);
  sub_1418F44E0((__m128i *)&v345[8], (const __m128i *)(v9 + 1000), 0xE0u);
  sub_1418F44E0(v324, (const __m128i *)v345, 0xE8u);
  v39 = (volatile signed __int64 **)(v9 + 1224);
  *(_QWORD *)(v9 + 1224) = 0;
  sub_1418F44E0((__m128i *)(v9 + 1232), v324, 0xE8u);
  v40 = *(_OWORD *)(v9 + 944);
  v41 = *(_OWORD *)(v9 + 960);
  v42 = *(_OWORD *)(v9 + 976);
  *(_OWORD *)(v9 + 1464) = *(_OWORD *)(v9 + 928);
  *(_OWORD *)(v9 + 1480) = v40;
  *(_OWORD *)(v9 + 1496) = v41;
  *(_OWORD *)(v9 + 1512) = v42;
  *(_QWORD *)(v9 + 1528) = *(_QWORD *)(v9 + 992);
  *(_BYTE *)(v9 + 1898) = v27;
  v653 = (char *)(v9 + 1899);
  *(_BYTE *)(v9 + 1899) = 0;
  v43 = 0;
LABEL_22:
  *(_BYTE *)(v9 + 1902) = 1;
  sub_1418F44E0((__m128i *)(v9 + 1536), (const __m128i *)(v9 + 1240), 0xE0u);
  *(_OWORD *)(v9 + 1760) = *(_OWORD *)(v9 + 1464);
  *(_OWORD *)(v9 + 1776) = *(_OWORD *)(v9 + 1480);
  *(_OWORD *)(v9 + 1792) = *(_OWORD *)(v9 + 1496);
  *(__m128i *)(v9 + 1808) = _mm_loadu_si128((const __m128i *)(v9 + 1512));
  *(_QWORD *)(v9 + 1824) = *(_QWORD *)(v9 + 1528);
  *(_BYTE *)(v9 + 1900) = v27;
  *(_BYTE *)(v9 + 1901) = 1;
  v44 = *(_QWORD *)(v9 + 1232);
  *(_QWORD *)(v9 + 1904) = v43;
  *(_QWORD *)(v9 + 1912) = v44;
  v629 = v735;
  v628 = v5;
  v627 = v732;
  v626 = v734;
  v625 = v730;
  v731 = v39;
  v624 = v39;
  sub_1409CC7B0(v345, v9 + 1536);
  v30 = *(_QWORD *)v345;
  v45 = *(_OWORD *)&v345[16];
  v716 = v35;
  v733 = v5;
  if ( *(_QWORD *)v345 != -1 )
  {
    v726 = *(const __m128i **)&v345[24];
    v718 = *(const __m128i **)&v345[16];
    v714 = *(const __m128i **)&v345[40];
    v715 = *(const __m128i **)&v345[32];
    v725 = *(__m128i **)&v345[56];
    v719 = *(__m128i **)&v345[48];
    v9 = *(_QWORD *)&v345[72];
    *(_QWORD *)&v711 = *(_QWORD *)&v345[64];
    v720 = *(char **)&v345[88];
    v724 = *(const __m128i **)&v345[80];
    v721 = *(_BYTE **)&v345[96];
    v723 = v346.m128i_i64[1];
    v712 = (_BYTE *)v346.m128i_i64[0];
    v713 = (volatile signed __int64 **)v347.m128i_i64[0];
    v46 = *(_WORD *)&v345[8];
    v47 = *(_QWORD *)&v345[8] >> 16;
    v722 = (volatile signed __int64 **)v347.m128i_i64[1];
    v48 = (_QWORD *)v736;
    v10 = v729;
LABEL_193:
    v168 = v733;
    if ( v48[238] )
    {
      v169 = *(volatile signed __int64 **)(v736 + 1912);
      if ( v169 )
      {
        if ( !_InterlockedDecrement64(v169) )
        {
          v578 = v735;
          v577 = v168;
          v576 = v732;
          v575 = v734;
          v574 = v730;
          v573 = v731;
          sub_1412D9AC0(v736 + 1912);
        }
      }
    }
    *((_QWORD *)&v711 + 1) = v9;
    v170 = v736;
    *(_BYTE *)(v736 + 1901) = 0;
    v572 = v735;
    v571 = v168;
    v570 = v732;
    v569 = v734;
    v568 = v730;
    v171 = v731;
    v567 = v731;
    sub_1407AA9D0(v170 + 1536);
    v33 = 2;
    v172 = (_BYTE *)v736;
    goto LABEL_198;
  }
  v60 = v736;
  *(_QWORD *)(v736 + 1832) = *(_QWORD *)&v345[8];
  *(_OWORD *)(v60 + 1840) = v45;
  v61 = (_BYTE *)(v60 + 1632);
  v678 = v735;
  v677 = v5;
  v676 = v732;
  v675 = v734;
  v674 = v730;
  v673 = v731;
  v62 = sub_14164DB70(v60 + 1632);
  v10 = v729;
  v8 = v716;
  if ( v62 == 1 )
  {
    v65 = v63;
    *(_QWORD *)&v345[8] = 0x8000000000000003uLL;
    *(_QWORD *)v345 = 12;
    goto LABEL_46;
  }
  v48 = (_QWORD *)v736;
  if ( *v61 != 2 )
  {
LABEL_67:
    v726 = *(const __m128i **)&v345[24];
    v718 = *(const __m128i **)&v345[16];
    v714 = *(const __m128i **)&v345[40];
    v715 = *(const __m128i **)&v345[32];
    v725 = *(__m128i **)&v345[56];
    v719 = *(__m128i **)&v345[48];
    v9 = *(_QWORD *)&v345[72];
    *(_QWORD *)&v711 = *(_QWORD *)&v345[64];
    v87 = *(char **)&v345[88];
    v88 = *(const __m128i **)&v345[80];
    v89 = *(_BYTE **)&v345[96];
    v90 = v346.m128i_i64[1];
    v712 = (_BYTE *)v346.m128i_i64[0];
    v91 = (volatile signed __int64 **)v347.m128i_i64[1];
    v713 = (volatile signed __int64 **)v347.m128i_i64[0];
    v30 = 12;
    v47 = 0x800000000000LL;
    v46 = 3;
    goto LABEL_289;
  }
  v103 = *(_QWORD *)(v736 + 1640);
  v104 = *(_WORD **)(v103 + 8);
  v105 = *(_QWORD *)(v103 + 16);
  if ( v105 == 2 )
  {
    v107 = (unsigned __int16)__ROL2__(*v104, 8) - 30579;
    v65 = 80;
  }
  else
  {
    if ( v105 != 3 )
      goto LABEL_67;
    v106 = __ROL2__(*v104, 8);
    if ( v106 == 30579 )
      v107 = *((unsigned __int8 *)v104 + 2) - 115;
    else
      v107 = 2 * (v106 >= 0x7773u) - 1;
    v65 = 443;
  }
  *(_QWORD *)&v345[8] = 0x8000000000000003uLL;
  *(_QWORD *)v345 = 12;
  if ( v107 )
    goto LABEL_67;
LABEL_46:
  v678 = v735;
  v677 = v733;
  v676 = v732;
  v675 = v734;
  v674 = v730;
  v673 = v731;
  sub_140994490(v345, v63, v64);
  v66 = v736 + 1832;
  v67 = v736 + 1896;
  *(_WORD *)(v736 + 1896) = v65;
  *(_QWORD *)v345 = v66;
  *(_QWORD *)&v345[8] = sub_1400015F0;
  *(_QWORD *)&v345[16] = v67;
  *(_QWORD *)&v345[24] = sub_1416BB1E0;
  v678 = v735;
  v677 = v733;
  v676 = v732;
  v675 = v734;
  v674 = v730;
  v673 = v731;
  sub_1416ABFD0(&v362, &unk_141A26950, v345);
  v329 = v362.m256i_i64[2];
  v68 = *(_OWORD *)v362.m256i_i8;
  v328 = *(__m128i *)v362.m256i_i8;
  v9 = v736;
  v69 = (const __m128i *)(v736 + 1920);
  *(_QWORD *)(v736 + 1936) = v362.m256i_i64[2];
  *(_OWORD *)(v9 + 1920) = v68;
  v70 = (char *)(v9 + 1944);
  *(_BYTE *)(v9 + 1944) = 0;
LABEL_47:
  *(_WORD *)(v9 + 1945) = 0;
  v338 = v69[1].m128i_i64[0];
  v724 = v69;
  v337 = _mm_loadu_si128(v69);
  sub_141516A70(v345, &v337);
  if ( v337.m128i_i64[0] )
    sub_140001660(v337.m128i_i64[1], v337.m128i_i64[0], 1);
  v71 = _mm_loadu_si128((const __m128i *)v345);
  *(_OWORD *)&v362.m256i_u64[2] = *(_OWORD *)&v345[16];
  *(__m128i *)v362.m256i_i8 = v71;
  v9 = v736;
  *(_OWORD *)(v736 + 1968) = *(_OWORD *)&v345[16];
  *(__m128i *)(v9 + 1952) = v71;
LABEL_50:
  v726 = (const __m128i *)(v9 + 1952);
  sub_141517230(v345, v9 + 1952, v8, a4);
  v5 = *(unsigned int *)v345;
  if ( *(_DWORD *)v345 == -1 )
  {
    v94 = 3;
    goto LABEL_325;
  }
  v720 = v70;
  v72 = *(_DWORD *)&v345[4];
  v729 = *(volatile signed __int64 ***)&v345[8];
  v725 = *(__m128i **)&v345[24];
  v73 = _mm_loadu_si128((const __m128i *)&v345[16]);
  v74 = *(_QWORD *)&v345[32];
  if ( v726->m128i_i16[0] == -1 )
  {
    v652 = v735;
    v651 = v733;
    v650 = v732;
    v649 = v734;
    v648 = v730;
    v647 = v731;
    v646 = v724;
    sub_140942610(v736 + 1960);
  }
  if ( (_DWORD)v5 == 2 )
  {
    v75 = 2;
    v76 = v729;
    v77 = v736;
    goto LABEL_333;
  }
  v97 = v736;
  *(_WORD *)(v736 + 1945) = 1;
  *(_QWORD *)(v97 + 1952) = 0;
  LODWORD(v726) = v5;
  *(_DWORD *)(v97 + 1960) = v5;
  *(_DWORD *)(v97 + 1964) = v72;
  *(_QWORD *)(v97 + 1968) = v729;
  *(__m128i *)(v97 + 1976) = v73;
  *(_QWORD *)(v97 + 1992) = v74;
  while ( 1 )
  {
    v248 = (_DWORD *)(v97 + 1960);
    v670 = (int)v726;
    v593 = v729;
    v592 = (__int64 *)v725;
    v591 = v735;
    v590 = v733;
    v589 = v732;
    v588 = v734;
    v587 = v730;
    v586 = v731;
    v69 = v724;
    v585 = v724;
    sub_141517780(&v354, v97 + 1960);
    if ( v354.m128i_i16[0] == 2 )
      break;
    v250 = (__m128i *)v736;
    v110 = v736 + 2000;
    v251 = v354;
    *(_OWORD *)(v736 + 2016) = v355;
    v250[125] = v251;
    v108 = &v250[131].m128i_i8[8];
    v250[131].m128i_i8[8] = 0;
    v78 = v731;
LABEL_294:
    v252 = _mm_loadu_si128((const __m128i *)v110);
    *(_OWORD *)&v362.m256i_u64[2] = *(_OWORD *)(v110 + 16);
    *(__m128i *)v362.m256i_i8 = v252;
    v642 = (int)v726;
    v475 = v729;
    v474 = (__int64 *)v725;
    v473 = v735;
    v472 = v733;
    v471 = v732;
    v470 = v734;
    v469 = v730;
    v468 = v78;
    v467 = v69;
    v728 = (unsigned __int64)v108;
    v466 = v108;
    v723 = v110;
    v465 = v110;
    sub_141522790(v345, &v362);
    v122 = *(volatile signed __int64 ***)&v345[8];
    v121 = *(_QWORD *)v345;
    if ( *(_QWORD *)v345 == -1 )
    {
      v724 = v69;
      v731 = v78;
      goto LABEL_306;
    }
    v253 = v736;
    v124 = (volatile signed __int64 **)(v736 + 2032);
    *(_OWORD *)(v736 + 2032) = *(_OWORD *)v345;
    v123 = (_BYTE *)(v253 + 2096);
    *(_BYTE *)(v253 + 2096) = 0;
LABEL_296:
    v672 = (int)v726;
    v623 = v729;
    v622 = (__int64 *)v725;
    v621 = v735;
    v620 = v733;
    v619 = v732;
    v618 = v734;
    v617 = v730;
    v616 = v78;
    v724 = v69;
    v615 = v69;
    v614 = v728;
    v613 = v723;
    v721 = v123;
    v612 = v123;
    v611 = v124;
    sub_14150FF60(v345, v121, v122);
    v122 = *(volatile signed __int64 ***)&v345[8];
    if ( *(_QWORD *)v345 == 2 )
      goto LABEL_304;
    v722 = v124;
    v731 = v78;
    v340 = *(_QWORD *)&v345[32];
    v339 = *(__m128i *)&v345[16];
    v254 = (__m128i *)v736;
    v149 = v736 + 2048;
    *(_OWORD *)(v736 + 2048) = *(_OWORD *)v345;
    v254[129] = _mm_load_si128(&v339);
    v254[130].m128i_i64[0] = v340;
    v254[130].m128i_i64[1] = v149;
LABEL_298:
    sub_1415140A0(v345, v149, v8);
    if ( v345[9] == 0xFF )
    {
      *v721 = 3;
LABEL_324:
      *(_BYTE *)v728 = 3;
      v94 = 4;
      v70 = v720;
LABEL_325:
      *v70 = v94;
      v139 = 3;
      v16 = v736;
      v138 = v653;
LABEL_326:
      *v138 = v139;
      *v734 = 3;
      *(_BYTE *)v732.m128i_i64[1] = 3;
      *v10 = (volatile signed __int64 *)-2LL;
      result = 3;
      goto LABEL_268;
    }
    v255 = *(volatile signed __int64 ***)v345;
    if ( v345[9] == 2 )
      goto LABEL_303;
    if ( *(_QWORD *)(v736 + 2072) == -1 )
      sub_141939020(&off_141A3FBD8);
    if ( (sub_141522770(v736 + 2072, *(_QWORD *)v345) & 1) != 0 || v255 )
    {
LABEL_303:
      v613 = v723;
      v611 = v722;
      v672 = (int)v726;
      v623 = v729;
      v622 = (__int64 *)v725;
      v621 = v735;
      v620 = v733;
      v619 = v732;
      v618 = v734;
      v617 = v730;
      v78 = v731;
      v616 = v731;
      v615 = v724;
      v614 = v728;
      v612 = v721;
      v256 = v255;
      sub_140996180(v736 + 2048);
      v122 = v256;
LABEL_304:
      v731 = v78;
      *v721 = 1;
LABEL_306:
      *(_BYTE *)v728 = 1;
      goto LABEL_307;
    }
    v75 = *(_QWORD *)(v736 + 2048);
    v122 = *(volatile signed __int64 ***)(v736 + 2056);
    v5 = *(_QWORD *)(v736 + 2064);
    v9 = *(_QWORD *)(v736 + 2072);
    v718 = *(const __m128i **)(v736 + 2080);
    *(_BYTE *)(v736 + 2096) = 1;
    v258 = v724;
    if ( v75 == -1 )
      goto LABEL_324;
    *(_BYTE *)v728 = 1;
    if ( v75 != 2 )
    {
      v259 = v736;
      if ( *(_DWORD *)(v736 + 1960) )
      {
        v260 = *(_QWORD *)(v736 + 1984);
        if ( v260 )
        {
          v261 = v122;
          sub_140001660(*(_QWORD *)(v736 + 1968), 32 * v260, 4);
          v122 = v261;
          v258 = v724;
        }
      }
      v262 = *(_QWORD *)(v259 + 1952);
      if ( v262 && (unsigned int)(v262 & 3) - 2 >= 2 && (v262 & 3) != 0 )
      {
        v263 = v122;
        *(_QWORD *)&v345[8] = v262 - 1;
        v345[0] = 3;
        v671 = (int)v726;
        v602 = v729;
        v601 = (__int64 *)v725;
        v600 = v735;
        v599 = v733;
        v598 = v732;
        v597 = v734;
        v596 = v730;
        v595 = v731;
        v594 = v258;
        sub_1416BCB00(&v345[8]);
        v122 = v263;
      }
      v76 = v122;
      v77 = v736;
      *(_BYTE *)(v736 + 1945) = 0;
      goto LABEL_333;
    }
LABEL_307:
    v257 = *(_QWORD *)(v736 + 1952);
    if ( v257 )
    {
      v728 = (unsigned __int64)v122;
      if ( (unsigned int)(v257 & 3) - 2 >= 2 && (v257 & 3) != 0 )
      {
        *(_QWORD *)&v345[8] = v257 - 1;
        v345[0] = 3;
        sub_1416BCB00(&v345[8]);
      }
      v122 = (volatile signed __int64 **)v728;
    }
    v97 = v736;
    *(_BYTE *)(v736 + 1945) = 1;
    *(_QWORD *)(v97 + 1952) = v122;
  }
  v77 = v736;
  if ( *v248 )
  {
    v264 = *(_QWORD *)(v736 + 1984);
    if ( v264 )
      sub_140001660(*(_QWORD *)(v736 + 1968), 32 * v264, 4);
  }
  *(_BYTE *)(v77 + 1945) = 0;
  v265 = *(_QWORD *)(v77 + 1952);
  if ( !v265 )
  {
    v641 = (int)v726;
    v464 = v729;
    v463 = (__int64 *)v725;
    v462 = v735;
    v461 = v733;
    v460 = v732;
    v459 = v734;
    v458 = v730;
    v457 = v731;
    v456 = v69;
    LOBYTE(v249) = 20;
    v265 = sub_1416793A0(v249, aCouldNotResolv_0, 32);
    v77 = v736;
  }
  v76 = (volatile signed __int64 **)v265;
  *(_BYTE *)(v77 + 1945) = 0;
  v75 = 2;
LABEL_333:
  *(_BYTE *)(v77 + 1946) = 0;
  *(_BYTE *)(v77 + 1944) = 1;
  v678 = v735;
  v677 = v733;
  v676 = v732;
  v675 = v734;
  v674 = v730;
  v673 = v731;
  sub_140965400(v724);
  v266 = (unsigned __int64)v76;
  v88 = v718;
  if ( v75 == 2 )
  {
LABEL_337:
    v716 = v8;
    v46 = v266;
    v47 = v266 >> 16;
    v30 = 5;
    v48 = (_QWORD *)v736;
LABEL_289:
    v722 = v91;
    v723 = v90;
    v721 = v89;
    v720 = v87;
    v724 = v88;
    v247 = v48[229];
    if ( v247 )
      sub_140001660(v48[230], v247, 1);
    goto LABEL_193;
  }
  v267 = v736;
  v268 = (volatile signed __int64 **)(v736 + 1856);
  *(_QWORD *)(v736 + 1856) = v75;
  *(_QWORD *)(v267 + 1864) = v266;
  *(_QWORD *)(v267 + 1872) = v5;
  *(_QWORD *)(v267 + 1880) = v9;
  *(_QWORD *)(v267 + 1888) = v88;
  v9 = v267;
  if ( *(_BYTE *)(v267 + 1900) == 1 )
  {
    v729 = v268;
    LOBYTE(v87) = 1;
    v269 = sub_14150FE20(v268, v87);
    v9 = v736;
    v268 = v729;
    if ( v269 )
    {
      v678 = v735;
      v677 = v733;
      v676 = v732;
      v675 = v734;
      v674 = v730;
      v673 = v731;
      v266 = v269;
      sub_140996180((__int64)v729);
      goto LABEL_337;
    }
  }
  *(_BYTE *)(v9 + 1902) = 0;
  sub_1418F44E0(v326, (const __m128i *)(v9 + 1536), 0xE0u);
  v270 = *(_OWORD *)(v9 + 1776);
  v271 = *(_OWORD *)(v9 + 1792);
  v272 = *(_OWORD *)(v9 + 1808);
  v406 = *(_OWORD *)(v9 + 1760);
  v407 = v270;
  v408 = v271;
  v409 = v272;
  v410 = *(_QWORD *)(v9 + 1824);
  *(_BYTE *)(v9 + 1901) = 0;
  v5 = v9 + 1904;
  v273 = *(_QWORD *)(v9 + 1904);
  v274 = *(volatile signed __int64 ***)(v9 + 1912);
  v275 = *((_OWORD *)v268 + 1);
  *(_OWORD *)(v9 + 1904) = *(_OWORD *)v268;
  *(_OWORD *)(v9 + 1920) = v275;
  *(_QWORD *)(v9 + 1936) = v268[4];
  *(_QWORD *)(v9 + 1944) = v273;
  v729 = v274;
  *(_QWORD *)(v9 + 1952) = v274;
  sub_1418F44E0((__m128i *)(v9 + 1960), v326, 0xE0u);
  v276 = v407;
  v277 = v408;
  v278 = v409;
  *(_OWORD *)(v9 + 2184) = v406;
  *(_OWORD *)(v9 + 2200) = v276;
  *(_OWORD *)(v9 + 2216) = v277;
  *(_OWORD *)(v9 + 2232) = v278;
  *(_QWORD *)(v9 + 2248) = v410;
  v708 = (char *)(v9 + 2600);
  *(_BYTE *)(v9 + 2600) = 0;
LABEL_339:
  *(_BYTE *)(v9 + 2601) = 0;
  v279 = *(_QWORD *)(v9 + 1960);
  v702 = *(_QWORD *)(v9 + 1968);
  v716 = *(_QWORD *)(v9 + 1976);
  v718 = *(const __m128i **)(v9 + 1984);
  v726 = *(const __m128i **)(v9 + 1992);
  v280 = *(const __m128i **)(v9 + 2000);
  v714 = *(const __m128i **)(v9 + 2008);
  v281 = *(__m128i **)(v9 + 2016);
  v725 = *(__m128i **)(v9 + 2024);
  v282 = *(_QWORD *)(v9 + 2032);
  v283 = *(_QWORD *)(v9 + 2040);
  v724 = *(const __m128i **)(v9 + 2048);
  v284 = *(char **)(v9 + 2056);
  v721 = *(_BYTE **)(v9 + 2064);
  v285 = *(_BYTE **)(v9 + 2072);
  v723 = *(_QWORD *)(v9 + 2080);
  v286 = *(volatile signed __int64 ***)(v9 + 2088);
  v722 = *(volatile signed __int64 ***)(v9 + 2096);
  *(_BYTE *)(v9 + 2603) = 1;
  v431 = *(_QWORD *)(v5 + 32);
  v287 = *(_OWORD *)v5;
  v430 = *(_OWORD *)(v5 + 16);
  v429 = v287;
  *(_QWORD *)(v9 + 2320) = *(_QWORD *)(v9 + 2248);
  *(_OWORD *)(v9 + 2304) = *(_OWORD *)(v9 + 2232);
  *(_OWORD *)(v9 + 2288) = *(_OWORD *)(v9 + 2216);
  *(_OWORD *)(v9 + 2272) = *(_OWORD *)(v9 + 2200);
  *(__m128i *)(v9 + 2256) = _mm_loadu_si128((const __m128i *)(v9 + 2184));
  *(_BYTE *)(v9 + 2602) = 1;
  v288 = *(_QWORD *)(v9 + 1944);
  *(_QWORD *)(v9 + 2328) = v288;
  *(_QWORD *)(v9 + 2336) = v729;
  v727 = v5;
  if ( v279 == -1 )
  {
    v713 = v286;
    v712 = v285;
    v720 = v284;
    *((_QWORD *)&v711 + 1) = v283;
    *(_QWORD *)&v711 = v282;
    v719 = v281;
    v715 = v280;
    v116 = v716;
    v728 = v716 >> 8;
    v92 = v735;
    v294 = v725;
    v144 = v702;
    v293 = v733;
    v295 = v726;
LABEL_349:
    v142 = v727;
    if ( v288 )
    {
      if ( *(_BYTE *)(v736 + 2602) )
      {
        v300 = v736 + 2336;
        v301 = *(volatile signed __int64 **)(v736 + 2336);
        if ( v301 )
        {
          if ( !_InterlockedDecrement64(v301) )
          {
            v640 = v92;
            v639 = v293;
            v638 = v732;
            v637 = v734;
            v636 = v730;
            v635 = v731;
            v634 = v142;
            v702 = v144;
            v716 = v116;
            v116 = (unsigned __int64)v294;
            v302 = v293;
            v303 = v295;
            sub_1412D9AC0(v300);
            v295 = v303;
            v293 = v302;
            v294 = (__m128i *)v116;
            LOBYTE(v116) = v716;
            v144 = v702;
          }
        }
      }
    }
    v725 = v294;
    v726 = v295;
    v304 = v736;
    *(_BYTE *)(v736 + 2602) = 0;
    if ( *(_BYTE *)(v304 + 2603) )
    {
      v540 = v92;
      v539 = v293;
      v538 = v732;
      v537 = v734;
      v536 = v730;
      v535 = v731;
      v534 = v142;
      sub_140996180((__int64)&v429);
    }
    v716 = v8;
    v733 = v293;
    *(_BYTE *)(v736 + 2603) = 0;
    v33 = 2;
    goto LABEL_357;
  }
  *(_QWORD *)(v9 + 2344) = v279;
  *(_QWORD *)(v9 + 2352) = v702;
  *(_QWORD *)(v9 + 2360) = v716;
  *(_QWORD *)(v9 + 2368) = v718;
  *(_QWORD *)(v9 + 2376) = v726;
  *(_QWORD *)(v9 + 2384) = v280;
  *(_QWORD *)(v9 + 2392) = v714;
  *(_QWORD *)(v9 + 2400) = v281;
  *(_QWORD *)(v9 + 2408) = v725;
  *(_QWORD *)(v9 + 2416) = v282;
  *(_QWORD *)(v9 + 2424) = v283;
  *(_QWORD *)(v9 + 2432) = v724;
  *(_QWORD *)(v9 + 2440) = v284;
  *(_QWORD *)(v9 + 2448) = v721;
  *(_QWORD *)(v9 + 2456) = v285;
  *(_QWORD *)(v9 + 2464) = v723;
  *(_QWORD *)(v9 + 2472) = v286;
  *(_QWORD *)(v9 + 2480) = v722;
  v289 = *(_OWORD *)(v9 + 2120);
  v290 = *(_OWORD *)(v9 + 2136);
  v291 = *(_OWORD *)(v9 + 2152);
  *(_OWORD *)(v9 + 2488) = *(_OWORD *)(v9 + 2104);
  *(_OWORD *)(v9 + 2504) = v289;
  *(_OWORD *)(v9 + 2520) = v290;
  *(_OWORD *)(v9 + 2536) = v291;
  *(__m128i *)(v9 + 2552) = _mm_loadu_si128((const __m128i *)(v9 + 2168));
  v92 = v735;
  v561 = v735;
  v560 = v733;
  v559 = v732;
  v558 = v734;
  v557 = v730;
  v556 = v731;
  v555 = v5;
  sub_1409CC7B0(v345, v9 + 2344);
  v116 = *(_QWORD *)&v345[8];
  v144 = *(_QWORD *)v345;
  v292 = *(_OWORD *)&v345[16];
  if ( *(_QWORD *)v345 != -1 )
  {
    v726 = *(const __m128i **)&v345[24];
    v718 = *(const __m128i **)&v345[16];
    v714 = *(const __m128i **)&v345[40];
    v715 = *(const __m128i **)&v345[32];
    v725 = *(__m128i **)&v345[56];
    v719 = *(__m128i **)&v345[48];
    v711 = *(_OWORD *)&v345[64];
    v720 = *(char **)&v345[88];
    v724 = *(const __m128i **)&v345[80];
    v721 = *(_BYTE **)&v345[96];
    v723 = v346.m128i_i64[1];
    v712 = (_BYTE *)v346.m128i_i64[0];
    v713 = (volatile signed __int64 **)v347.m128i_i64[0];
    v728 = *(_QWORD *)&v345[8] >> 8;
    v722 = (volatile signed __int64 **)v347.m128i_i64[1];
    v9 = v736;
    v293 = v733;
    goto LABEL_348;
  }
  v296 = v736;
  v297 = v736 + 2440;
  *(_BYTE *)(v736 + 2601) = 1;
  *(_QWORD *)(v296 + 2568) = v116;
  *(_OWORD *)(v296 + 2576) = v292;
  v669 = v92;
  v668 = v733;
  v667 = v732;
  v666 = v734;
  v665 = v730;
  v664 = v731;
  v663 = v5;
  sub_14119E2A0(v345, v297);
  v144 = *(_QWORD *)v345;
  v116 = v345[8];
  if ( *(_QWORD *)v345 != -1 )
  {
    v728 = ((unsigned __int64)((v345[15] << 16) | (unsigned int)*(unsigned __int16 *)&v345[13]) << 32)
         | *(unsigned int *)&v345[9];
    v726 = *(const __m128i **)&v345[24];
    v718 = *(const __m128i **)&v345[16];
    v714 = *(const __m128i **)&v345[40];
    v118 = *(_QWORD *)&v345[32];
    v725 = *(__m128i **)&v345[56];
    v719 = *(__m128i **)&v345[48];
    v711 = *(_OWORD *)&v345[64];
    v148 = *(_OWORD *)&v345[80];
    v145 = *(_BYTE **)&v345[96];
    v146 = v346.m128i_i64[1];
    v712 = (_BYTE *)v346.m128i_i64[0];
    v147 = (volatile signed __int64 **)v347.m128i_i64[1];
    v713 = (volatile signed __int64 **)v347.m128i_i64[0];
    v9 = v736;
    goto LABEL_345;
  }
  v9 = v736;
  v308 = v736 + 2568;
  a2 = v733;
  if ( *(_DWORD *)(v736 + 2328) == 1 )
  {
    *(_BYTE *)(v736 + 2602) = 0;
    v309 = *(_QWORD *)(v9 + 2336);
    *(_QWORD *)(v9 + 2592) = v309;
    if ( v309 )
    {
      *(_BYTE *)(v9 + 2603) = 0;
      *(_QWORD *)&v345[32] = v431;
      *(_OWORD *)&v345[16] = v430;
      *(_OWORD *)v345 = v429;
      *(_BYTE *)(v9 + 2601) = 0;
      *(_OWORD *)&v345[40] = *(_OWORD *)v308;
      *(_QWORD *)&v345[56] = *(_QWORD *)(v308 + 16);
      si128 = _mm_load_si128((const __m128i *)v345);
      v311 = *(_OWORD *)&v345[16];
      *(__m128i *)v362.m256i_i8 = si128;
      *(_OWORD *)&v362.m256i_u64[2] = *(_OWORD *)&v345[16];
      v312 = *(_OWORD *)&v345[32];
      v363 = *(_OWORD *)&v345[32];
      v364 = *(_OWORD *)&v345[48];
      *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v345[48];
      *(_OWORD *)(v9 + 2640) = v312;
      *(_OWORD *)(v9 + 2624) = v311;
      *(__m128i *)(v9 + 2608) = si128;
      *(_QWORD *)(v9 + 2672) = v309;
      *(_BYTE *)(v9 + 3824) = v116;
      *(_BYTE *)(v9 + 3825) = 0;
      v92 = v708;
LABEL_98:
      v729 = (volatile signed __int64 **)(v9 + 2608);
      sub_1409B8340(v345, v9 + 2608, v8);
      v112 = *(_QWORD *)v345;
      if ( *(_QWORD *)v345 == -2 )
      {
        v113 = 3;
        goto LABEL_118;
      }
      goto LABEL_107;
    }
    *(_BYTE *)(v9 + 2603) = 0;
    v115 = v9 + 2608;
    v316 = v430;
    *(_OWORD *)(v9 + 2608) = v429;
    *(_OWORD *)(v9 + 2624) = v316;
    *(_QWORD *)(v9 + 2640) = v431;
    *(_BYTE *)(v9 + 2648) = v116;
    v114 = (volatile signed __int64 **)(v9 + 2649);
    *(_BYTE *)(v9 + 2649) = 0;
LABEL_102:
    *(_QWORD *)&v345[32] = *(_QWORD *)(v115 + 32);
    v117 = _mm_loadu_si128((const __m128i *)v115);
    *(_OWORD *)&v345[16] = *(_OWORD *)(v115 + 16);
    *(__m128i *)v345 = v117;
    v733 = a2;
    if ( (v116 & 1) != 0 )
    {
      v725 = (__m128i *)v115;
      v729 = v114;
      v735 = v92;
      v118 = sub_140996180((__int64)v345);
      v119 = _mm_load_si128((const __m128i *)&xmmword_1419EE6D0);
      v112 = -1;
      v9 = v736;
      v92 = v735;
      v114 = v729;
    }
    else
    {
      v119 = _mm_load_si128((const __m128i *)v345);
      v718 = *(const __m128i **)(v9 + 2624);
      v726 = *(const __m128i **)(v9 + 2632);
      v112 = 2;
      v118 = *(_QWORD *)&v345[32];
    }
    *(_BYTE *)v114 = 1;
  }
  else
  {
    *(_BYTE *)(v736 + 2603) = 0;
    *(_QWORD *)&v345[32] = v431;
    *(_OWORD *)&v345[16] = v430;
    *(_OWORD *)v345 = v429;
    *(_BYTE *)(v9 + 2601) = 0;
    *(_OWORD *)&v345[40] = *(_OWORD *)v308;
    *(_QWORD *)&v345[56] = *(_QWORD *)(v308 + 16);
    v313 = _mm_load_si128((const __m128i *)v345);
    v314 = *(_OWORD *)&v345[16];
    *(__m128i *)v362.m256i_i8 = v313;
    *(_OWORD *)&v362.m256i_u64[2] = *(_OWORD *)&v345[16];
    v315 = *(_OWORD *)&v345[32];
    v363 = *(_OWORD *)&v345[32];
    v364 = *(_OWORD *)&v345[48];
    *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v345[48];
    *(_OWORD *)(v9 + 2640) = v315;
    *(_OWORD *)(v9 + 2624) = v314;
    *(__m128i *)(v9 + 2608) = v313;
    *(_QWORD *)(v9 + 2672) = 0;
    *(_BYTE *)(v9 + 3824) = v116;
    *(_BYTE *)(v9 + 3825) = 0;
    v92 = v708;
LABEL_96:
    v729 = (volatile signed __int64 **)(v9 + 2608);
    sub_1409B8340(v345, v9 + 2608, v8);
    v112 = *(_QWORD *)v345;
    if ( *(_QWORD *)v345 == -2 )
    {
      v113 = 5;
LABEL_118:
      v138 = v653;
      *v92 = v113;
      v139 = 4;
      v16 = v736;
      goto LABEL_326;
    }
LABEL_107:
    v708 = v92;
    v119 = _mm_loadu_si128((const __m128i *)&v345[8]);
    v718 = *(const __m128i **)&v345[24];
    v715 = *(const __m128i **)&v345[40];
    v726 = *(const __m128i **)&v345[32];
    v719 = *(__m128i **)&v345[56];
    v714 = *(const __m128i **)&v345[48];
    v126 = *(_QWORD *)&v345[72];
    v125 = *(_QWORD *)&v345[64];
    v724 = *(const __m128i **)&v345[88];
    *((_QWORD *)&v711 + 1) = *(_QWORD *)&v345[80];
    v720 = *(char **)&v345[96];
    v712 = (_BYTE *)v346.m128i_i64[1];
    v721 = (_BYTE *)v346.m128i_i64[0];
    v713 = (volatile signed __int64 **)v347.m128i_i64[1];
    v723 = v347.m128i_i64[0];
    v722 = v348;
    sub_1418F44E0(v323, v349, 0x3C0u);
    v92 = v735;
    v669 = v735;
    v668 = v733;
    v667 = v732;
    v666 = v734;
    v665 = v730;
    v664 = v731;
    v663 = v727;
    sub_140974540((__int64)v729);
    v9 = v736;
    v118 = (__int64)v715;
    a2 = v125;
    v5 = v126;
  }
  v725 = (__m128i *)a2;
  if ( (_DWORD)v112 == -1 )
  {
    *(_QWORD *)&v711 = v5;
    v116 = _mm_shuffle_epi32(v119, 238).m128i_u64[0];
    v728 = v116 >> 8;
    v144 = v119.m128i_i64[0];
    v145 = v721;
    v146 = v723;
    v147 = v722;
    v148 = __PAIR128__((unsigned __int64)v720, (unsigned __int64)v724);
LABEL_345:
    v293 = v733;
    v715 = (const __m128i *)v118;
    v298 = *(_BYTE *)(v9 + 2601) == 0;
    v720 = (char *)(v148 >> 64);
    v724 = (const __m128i *)v148;
    v721 = v145;
    v723 = v146;
    v722 = v147;
    if ( !v298 )
    {
      v299 = *(_QWORD *)(v9 + 2568);
      if ( v299 )
        sub_140001660(*(_QWORD *)(v9 + 2576), v299, 1);
    }
LABEL_348:
    *(_BYTE *)(v9 + 2601) = 0;
    v554 = v92;
    v553 = v293;
    v552 = v732;
    v551 = v734;
    v550 = v730;
    v549 = v731;
    v548 = v727;
    sub_1407AA9D0(v9 + 2344);
    v288 = *(_QWORD *)(v736 + 2328);
    v295 = v726;
    v294 = v725;
    goto LABEL_349;
  }
  v735 = v92;
  v127 = v118;
  v111 = (const __m128i *)(v9 + 2608);
  sub_1418F44E0((__m128i *)(v9 + 2608), (const __m128i *)(v9 + 2344), 0xE0u);
  *(_QWORD *)(v9 + 2832) = v112;
  *(__m128i *)(v9 + 2840) = v119;
  *(_QWORD *)(v9 + 2856) = v718;
  *(_QWORD *)(v9 + 2864) = v726;
  *(_QWORD *)(v9 + 2872) = v127;
  *(_QWORD *)(v9 + 2880) = v714;
  *(_QWORD *)(v9 + 2888) = v719;
  *(_QWORD *)(v9 + 2896) = v725;
  *(_QWORD *)(v9 + 2904) = v5;
  *(_QWORD *)(v9 + 2912) = *((_QWORD *)&v711 + 1);
  *(_QWORD *)(v9 + 2920) = v724;
  *(_QWORD *)(v9 + 2928) = v720;
  *(_QWORD *)(v9 + 2936) = v721;
  *(_QWORD *)(v9 + 2944) = v712;
  *(_QWORD *)(v9 + 2952) = v723;
  *(_QWORD *)(v9 + 2960) = v713;
  *(_QWORD *)(v9 + 2968) = v722;
  sub_1418F44E0((__m128i *)(v9 + 2976), v323, 0x3C0u);
  v128 = *(_OWORD *)(v9 + 2272);
  v129 = *(_OWORD *)(v9 + 2288);
  v130 = *(_OWORD *)(v9 + 2304);
  *(_OWORD *)(v9 + 3936) = *(_OWORD *)(v9 + 2256);
  *(_OWORD *)(v9 + 3952) = v128;
  *(_OWORD *)(v9 + 3968) = v129;
  *(_OWORD *)(v9 + 3984) = v130;
  *(_QWORD *)(v9 + 4000) = *(_QWORD *)(v9 + 2320);
  v728 = v9 + 11144;
  *(_BYTE *)(v9 + 11144) = 0;
LABEL_112:
  sub_1418F44E0((__m128i *)&v362, v111, 0xE0u);
  sub_1418F44E0((__m128i *)v345, (const __m128i *)(v9 + 2832), 0x450u);
  v131 = *(__m128i *)(v9 + 3952);
  v132 = *(__m128i *)(v9 + 3968);
  v133 = *(__m128i *)(v9 + 3984);
  v373[5] = _mm_loadu_si128((const __m128i *)(v9 + 3936));
  v373[6] = v131;
  v373[7] = v132;
  v373[8] = v133;
  v374 = *(_QWORD *)(v9 + 4000);
  sub_1418F44E0(v352, (const __m128i *)&v362, 0x128u);
  v134 = (const __m128i *)(v9 + 4008);
  sub_1418F44E0((__m128i *)(v9 + 4008), (const __m128i *)v345, 0x1BD8u);
  v710 = (_BYTE *)(v9 + 11136);
  *(_BYTE *)(v9 + 11136) = 0;
LABEL_113:
  sub_1418F44E0((__m128i *)&v362, v134, 0x450u);
  sub_1418F44E0(v376, (const __m128i *)(v9 + 5112), 0x128u);
  sub_1418F44E0(&v339, (const __m128i *)&v362, 0x578u);
  v135 = (const __m128i *)(v9 + 5408);
  sub_1418F44E0((__m128i *)(v9 + 5408), &v339, 0x578u);
  v703 = (char *)(v9 + 6808);
  *(_BYTE *)(v9 + 6808) = 0;
LABEL_114:
  v707 = v134;
  v717 = v111;
  v704 = v135;
  sub_1418F44E0(v375, v135, 0x450u);
  sub_1418F44E0((__m128i *)&v362, (const __m128i *)(v9 + 6512), 0x128u);
  sub_1418F44E0(&v354, (const __m128i *)&v362, 0x578u);
  sub_1418F44E0((__m128i *)(v9 + 6816), &v354, 0x578u);
  v92 = v708;
LABEL_115:
  v481 = (__m128i *)(v9 + 6816);
  sub_1409457A0(&v362, v9 + 6816, v8);
  v136 = v362.m256i_i64[0];
  if ( v362.m256i_i64[0] == -2 )
  {
    v137 = 3;
LABEL_117:
    *v703 = v137;
    *v710 = 3;
    *(_BYTE *)v728 = 3;
    v113 = 6;
    goto LABEL_118;
  }
  v708 = v92;
  v702 = v362.m256i_i64[1];
  v718 = (const __m128i *)v362.m256i_i64[3];
  v716 = v362.m256i_u64[2];
  v715 = *((const __m128i **)&v363 + 1);
  v726 = (const __m128i *)v363;
  v140 = *((__m128i **)&v364 + 1);
  v714 = (const __m128i *)v364;
  v725 = *(__m128i **)v365;
  v711 = *(_OWORD *)&v365[8];
  v724 = v366;
  v720 = v367;
  v721 = v368;
  v712 = v369;
  v723 = v370;
  v713 = v371;
  v722 = v372;
  v729 = (volatile signed __int64 **)v373[0].m128i_i64[0];
  sub_1418F44E0(&v328, (const __m128i *)&v373[0].m128i_u64[1], 0x480u);
  sub_1418F44E0(v335, v377, 0xD0u);
  v141 = v481;
  v142 = v727;
  v143 = v717;
  if ( v481->m128i_i32[0] != -1 )
  {
    sub_1407AA9D0((__int64)v481);
    if ( *(_DWORD *)(v736 + 7112) == 2 )
    {
      v696 = v735;
      v695 = v733;
      v694 = v732;
      v693 = v734;
      v692 = v730;
      v691 = v731;
      v142 = v727;
      v690 = v727;
      v689 = v728;
      v143 = v717;
      v688 = v717;
      v687 = v710;
      v686 = v707;
      v685 = v703;
      v684 = v704;
      sub_140996180(v736 + 7120);
    }
    else
    {
      sub_140996180(v736 + 7112);
      v696 = v735;
      v695 = v733;
      v694 = v732;
      v693 = v734;
      v692 = v730;
      v691 = v731;
      v142 = v727;
      v690 = v727;
      v689 = v728;
      v143 = v717;
      v688 = v717;
      v687 = v710;
      v686 = v707;
      v685 = v703;
      v684 = v704;
      sub_140996700(v736 + 7152);
    }
  }
  if ( (_DWORD)v136 == -1 )
  {
    v156 = v736;
    *(_QWORD *)(v736 + 8336) = v702;
    *(_QWORD *)(v156 + 8344) = v716;
    *(_QWORD *)(v156 + 8352) = v718;
    *(_QWORD *)(v156 + 8360) = v726;
    *(_QWORD *)(v156 + 8368) = v715;
    *(_QWORD *)(v156 + 8376) = v714;
    *(_QWORD *)(v156 + 8384) = v140;
    *(_QWORD *)(v156 + 8392) = v725;
    *(_OWORD *)(v156 + 8400) = v711;
    *(_QWORD *)(v156 + 8416) = v724;
    *(_QWORD *)(v156 + 8424) = v720;
    *(_QWORD *)(v156 + 8432) = v721;
    *(_QWORD *)(v156 + 8440) = v712;
    *(_QWORD *)(v156 + 8448) = v723;
    *(_QWORD *)(v156 + 8456) = v713;
    *(_QWORD *)(v156 + 8464) = v722;
    *(_QWORD *)(v156 + 8472) = v729;
    v155 = v140;
    sub_1418F44E0((__m128i *)(v156 + 8480), &v328, 0x480u);
    *(_QWORD *)(v156 + 8328) = -1;
    sub_1418F44E0(&v337, &v328, 0x480u);
    v33 = 2;
  }
  else
  {
    v9 = v736;
    *(_QWORD *)(v736 + 8328) = v136;
    v150 = v141;
    v151 = v702;
    *(_QWORD *)(v9 + 8336) = v702;
    v152 = v716;
    *(_QWORD *)(v9 + 8344) = v716;
    *(_QWORD *)(v9 + 8352) = v718;
    v153 = v140;
    v154 = v726;
    *(_QWORD *)(v9 + 8360) = v726;
    *(_QWORD *)(v9 + 8368) = v715;
    *(_QWORD *)(v9 + 8376) = v714;
    v719 = v153;
    *(_QWORD *)(v9 + 8384) = v153;
    *(_QWORD *)(v9 + 8392) = v725;
    *(_OWORD *)(v9 + 8400) = v711;
    *(_QWORD *)(v9 + 8416) = v724;
    *(_QWORD *)(v9 + 8424) = v720;
    *(_QWORD *)(v9 + 8432) = v721;
    *(_QWORD *)(v9 + 8440) = v712;
    *(_QWORD *)(v9 + 8448) = v723;
    *(_QWORD *)(v9 + 8456) = v713;
    *(_QWORD *)(v9 + 8464) = v722;
    *(_QWORD *)(v9 + 8472) = v729;
    sub_1418F44E0((__m128i *)(v9 + 8480), &v328, 0x480u);
    sub_1418F44E0((__m128i *)(v9 + 9632), v335, 0xD0u);
    sub_1418F44E0(v150, (const __m128i *)(v9 + 8328), 0x5E8u);
    v33 = *(_QWORD *)(v9 + 6816);
    if ( v33 == 2 )
    {
      *(_QWORD *)(v9 + 9840) = v151;
      *(_QWORD *)(v9 + 9848) = v152;
      *(_QWORD *)(v9 + 9856) = v718;
      *(_QWORD *)(v9 + 9864) = v154;
      *(_QWORD *)(v9 + 9872) = v715;
      *(_QWORD *)(v9 + 9880) = v714;
      *(_QWORD *)(v9 + 9888) = v719;
      *(_QWORD *)(v9 + 9896) = v725;
      *(_OWORD *)(v9 + 9904) = v711;
      *(_QWORD *)(v9 + 9920) = v724;
      *(_QWORD *)(v9 + 9928) = v720;
      *(_QWORD *)(v9 + 9936) = v721;
      *(_QWORD *)(v9 + 9944) = v712;
      *(_QWORD *)(v9 + 9952) = v723;
      *(_QWORD *)(v9 + 9960) = v713;
      *(_QWORD *)(v9 + 9968) = v722;
      *(_QWORD *)(v9 + 9976) = v729;
      sub_1418F44E0((__m128i *)(v9 + 9984), &v328, 0x480u);
      v92 = v708;
LABEL_130:
      v719 = (__m128i *)(v9 + 9840);
      sub_14092DD70(&v362, v9 + 9840, v8);
      v33 = v362.m256i_i64[0];
      if ( v362.m256i_i64[0] == -1 )
      {
        v137 = 4;
        goto LABEL_117;
      }
      v708 = v92;
      v702 = v362.m256i_i64[1];
      v718 = (const __m128i *)v362.m256i_i64[3];
      v716 = v362.m256i_u64[2];
      v715 = *((const __m128i **)&v363 + 1);
      v726 = (const __m128i *)v363;
      v155 = *((__m128i **)&v364 + 1);
      v714 = (const __m128i *)v364;
      v725 = *(__m128i **)v365;
      v711 = *(_OWORD *)&v365[8];
      v724 = v366;
      v720 = v367;
      v721 = v368;
      v712 = v369;
      v723 = v370;
      v713 = v371;
      v722 = v372;
      v729 = (volatile signed __int64 **)v373[0].m128i_i64[0];
      sub_1418F44E0(&v337, (const __m128i *)&v373[0].m128i_u64[1], 0x480u);
      sub_1418F44E0(v334, v377, 0xD0u);
      if ( v719->m128i_i32[0] != -1 )
      {
        v696 = v735;
        v695 = v733;
        v694 = v732;
        v693 = v734;
        v692 = v730;
        v691 = v731;
        v142 = v727;
        v690 = v727;
        v689 = v728;
        v143 = v717;
        v688 = v717;
        v687 = v710;
        v686 = v707;
        v685 = v703;
        v684 = v704;
        sub_140963690(v719);
        goto LABEL_144;
      }
      v142 = v727;
    }
    else
    {
      sub_1418F44E0(&v337, &v328, 0x480u);
      sub_1418F44E0(v334, v335, 0xD0u);
      v142 = v727;
      v155 = v719;
    }
    v143 = v717;
  }
LABEL_144:
  v719 = v155;
  sub_1418F44E0(v318, &v337, 0x480u);
  sub_1418F44E0(v342, v334, 0xD0u);
  *v703 = 1;
  v157 = v735;
  v455 = v735;
  v454 = v733;
  v453 = v732;
  v452 = v734;
  v451 = v730;
  v450 = v731;
  v449 = v142;
  v448 = v728;
  v447 = v143;
  v446 = v710;
  v445 = v707;
  sub_140965D60(v704);
  sub_1418F44E0(v325, v318, 0x480u);
  v116 = v716;
  if ( (_DWORD)v33 != 2 )
  {
    v395 = v343;
    v158 = _mm_loadu_si128(v342);
    v394 = v342[3];
    v393 = v342[2];
    v392 = v342[1];
    v391 = v158;
    sub_1418F44E0(v336, v344, 0x88u);
  }
  sub_1418F44E0((__m128i *)&v331[0].m128i_u8[5], v336, 0x88u);
  *v710 = 1;
  v662 = v157;
  v661 = v733;
  v660 = v732;
  v659 = v734;
  v658 = v730;
  v657 = v731;
  v656 = v142;
  v655 = v728;
  v654 = v143;
  sub_140965C80(v707);
  if ( (_DWORD)v33 == 2 )
  {
    v717 = v143;
    v727 = v142;
    if ( v702 == -1 )
    {
      v702 = v716;
      v162 = v718;
      v718 = v726;
      v163 = v725;
      v725 = (__m128i *)v711;
      v164 = v721;
      v721 = v712;
      v116 = (unsigned __int64)v162;
      v726 = v715;
      v715 = v714;
      v714 = v719;
      v719 = v163;
      *(_QWORD *)&v711 = *((_QWORD *)&v711 + 1);
      *((_QWORD *)&v711 + 1) = v724;
      v724 = (const __m128i *)v720;
      v720 = v164;
      v712 = (_BYTE *)v723;
      v723 = (__int64)v713;
      v713 = v722;
      v722 = v729;
      v157 = v735;
      v142 = v727;
      v143 = v717;
    }
    else
    {
      v362.m256i_i64[0] = v702;
      v362.m256i_i64[1] = v716;
      v362.m256i_i64[2] = (__int64)v718;
      v362.m256i_i64[3] = (__int64)v726;
      *(_QWORD *)&v363 = v715;
      *((_QWORD *)&v363 + 1) = v714;
      *(_QWORD *)&v364 = v719;
      *((_QWORD *)&v364 + 1) = v725;
      *(_OWORD *)v365 = v711;
      *(_QWORD *)&v365[16] = v724;
      v366 = (const __m128i *)v720;
      v367 = v721;
      v368 = v712;
      v369 = (_BYTE *)v723;
      v370 = (__int64)v713;
      v371 = v722;
      v372 = v729;
      sub_1418F44E0(v373, v325, 0x480u);
      v339.m128i_i64[0] = 0;
      v339.m128i_i64[1] = 1;
      v340 = 0;
      *(_QWORD *)&v355 = 1610612768;
      v354.m128i_i64[0] = (__int64)&v339;
      v354.m128i_i64[1] = (__int64)&off_141A272D0;
      if ( (unsigned __int8)sub_140DC2E50(&v362, &v354) )
        sub_141939040(
          (unsigned int)aADisplayImplem_5,
          55,
          (unsigned int)&v709,
          (unsigned int)&unk_141A26D10,
          (__int64)&off_141A27388);
      v338 = v340;
      v337 = _mm_loadu_si128(&v339);
      LOBYTE(v159) = 41;
      v116 = sub_141156620(v159, &v337);
      v157 = v735;
      v662 = v735;
      v661 = v733;
      v660 = v732;
      v659 = v734;
      v658 = v730;
      v657 = v731;
      v142 = v727;
      v656 = v727;
      v655 = v728;
      v143 = v717;
      v654 = v717;
      if ( v362.m256i_i32[0] == -1 )
        sub_140994490(&v362.m256i_u64[1], v160, v161);
      else
        sub_140963690(&v362);
      v702 = 5;
    }
  }
  else
  {
    sub_1418F44E0(v319, v325, 0x480u);
    v396 = _mm_load_si128(&v391);
    v397 = v392;
    v398 = v393;
    v399 = v394;
    v400 = v395;
    sub_1418F44E0(v330, v331, 0x8Du);
  }
  *(_BYTE *)v728 = 1;
  v444 = v157;
  v443 = v733;
  v442 = v732;
  v441 = v734;
  v440 = v730;
  v439 = v731;
  v438 = v142;
  sub_140965310(v143);
  v728 = v116 >> 8;
  v165 = v736;
  v144 = v702;
  if ( *(_BYTE *)(v736 + 2601) )
  {
    v166 = *(_QWORD *)(v736 + 2568);
    if ( v166 )
      sub_140001660(*(_QWORD *)(v736 + 2576), v166, 1);
  }
  v716 = v8;
  *(_WORD *)(v165 + 2601) = 0;
  *(_BYTE *)(v165 + 2603) = 0;
  v92 = v735;
LABEL_357:
  v30 = v144;
  sub_1418F44E0(v320, v319, 0x480u);
  v401 = _mm_load_si128(&v396);
  v402 = v397;
  v403 = v398;
  v404 = v399;
  v405 = v400;
  sub_1418F44E0(v332, v330, 0x8Du);
  *v708 = 1;
  v735 = v92;
  v437 = v92;
  v436 = v733;
  v435 = v732;
  v434 = v734;
  v433 = v730;
  v432 = v731;
  sub_140965920(v142);
  v305 = v728 & 0xFFFFFFFFFFFF00LL;
  v306 = (_WORD)v728 << 8;
  v172 = (_BYTE *)v736;
  v307 = *(_QWORD *)(v736 + 1832);
  if ( v307 )
    sub_140001660(*(_QWORD *)(v736 + 1840), v307, 1);
  v46 = (unsigned __int8)v116 | v306;
  v47 = v305 >> 8;
  v172[1901] = 0;
  v171 = v731;
LABEL_198:
  v172[1902] = 0;
  sub_1418F44E0(v321, v320, 0x480u);
  v411 = _mm_load_si128(&v401);
  v412 = v402;
  v413 = v403;
  v414 = v404;
  v415 = v405;
  sub_1418F44E0(v333, v332, 0x8Du);
  v172[1899] = 1;
  v480 = v735;
  v479 = v733;
  v478 = v732;
  v477 = v734;
  v476 = v730;
  sub_140992D70(v171);
  v32 = (v47 << 16) | v46;
  v7 = v729;
LABEL_199:
  sub_1418F44E0(v317, v321, 0x480u);
  v421 = v411;
  v422 = v412;
  v423 = v413;
  v424 = v414;
  v425 = v415;
  sub_1418F44E0(v327, v333, 0x8Du);
  *v734 = 1;
  *(_BYTE *)v732.m128i_i64[1] = 1;
  sub_1418F44E0(v322, v317, 0x480u);
  v416 = _mm_load_si128(&v421);
  v417 = v422;
  v418 = v423;
  v419 = v424;
  v420 = v425;
  sub_1418F44E0(v341, v327, 0x8Du);
  if ( (_DWORD)v33 != 2 )
  {
    v729 = v10;
    sub_1418F44E0((__m128i *)&v373[0].m128i_u64[1], v322, 0x480u);
    v378 = v420;
    v377[0] = _mm_load_si128(&v416);
    v377[1] = v417;
    v377[2] = v418;
    v377[3] = v419;
    v362.m256i_i64[0] = v33;
    v362.m256i_i64[1] = v30;
    v362.m256i_i64[2] = v32;
    v362.m256i_i64[3] = (__int64)v718;
    *(_QWORD *)&v363 = v726;
    *((_QWORD *)&v363 + 1) = v715;
    *(_QWORD *)&v364 = v714;
    *((_QWORD *)&v364 + 1) = v719;
    *(_QWORD *)v365 = v725;
    *(_OWORD *)&v365[8] = v711;
    v366 = v724;
    v367 = v720;
    v368 = v721;
    v369 = v712;
    v370 = v723;
    v371 = v713;
    v372 = v722;
    v373[0].m128i_i64[0] = (__int64)v7;
    v379 = 0;
    v380 = 1;
    v382 = v341[0].m128i_i8[4];
    v381 = v341[0].m128i_i32[0];
    v175 = v736;
    sub_1418F44E0((__m128i *)(v736 + 280), (const __m128i *)&v341[0].m128i_u8[5], 0x88u);
    *(_BYTE *)(v175 + 474) = 0;
    sub_1418F44E0((__m128i *)&v345[24], (const __m128i *)&v362, 0x568u);
    *(_QWORD *)v345 = 1;
    *(_QWORD *)&v345[8] = 1;
    *(_QWORD *)&v345[16] = 1;
    v353 = 0;
    nullsub_1(v176);
    v177 = (__m128i *)sub_140001650(1416, 8);
    if ( !v177 )
      sub_141938D11(8, 1416);
    v178 = (volatile signed __int64 *)v177;
    sub_1418F44E0(v177, (const __m128i *)v345, 0x588u);
    v180 = _InterlockedIncrement64(v178);
    v19 = v716;
    if ( (v180 < 0) ^ v181 | (v180 == 0) )
      goto LABEL_291;
    *(_BYTE *)(v175 + 473) = 1;
    *(_QWORD *)(v175 + 224) = -1;
    *(_QWORD *)(v175 + 264) = v178;
    *(_BYTE *)(v175 + 472) = 1;
    v325[0].m128i_i64[0] = (__int64)v178;
    v182 = v735;
    v492 = v735;
    v5 = v733;
    v491 = v733;
    v490 = v178;
    sub_1414FE5D0(v345, 128, v179);
    *(_QWORD *)&v345[40] = 128;
    v492 = v182;
    v491 = v5;
    v490 = v178;
    v183 = sub_1408F03C0((__int128 *)v345);
    v734 = v178;
    v184 = v736;
    *(_BYTE *)(v736 + 471) = 1;
    v328.m128i_i64[0] = (__int64)v183;
    *(_BYTE *)(v184 + 470) = 1;
    *(_QWORD *)(v184 + 416) = v185;
    *(_QWORD *)v345 = 1;
    *(_QWORD *)&v345[8] = 1;
    *(_QWORD *)&v345[48] = 0;
    *(_QWORD *)&v345[56] = -2;
    nullsub_1(v186);
    v187 = sub_140001650(80, 8);
    if ( !v187 )
      sub_141938D11(8, 80);
    v188 = v187;
    *(_OWORD *)(v187 + 64) = *(_OWORD *)&v345[64];
    v189 = _mm_loadu_si128((const __m128i *)v345);
    v190 = *(_OWORD *)&v345[16];
    v191 = *(_OWORD *)&v345[32];
    *(_OWORD *)(v187 + 48) = *(_OWORD *)&v345[48];
    *(_OWORD *)(v187 + 32) = v191;
    *(_OWORD *)(v187 + 16) = v190;
    *(__m128i *)v187 = v189;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v187) <= 0 )
LABEL_291:
      BUG();
    *(_BYTE *)(v184 + 469) = 1;
    v337.m128i_i64[0] = v187;
    *(_BYTE *)(v184 + 465) = 1;
    *(_QWORD *)(v184 + 480) = v187;
    v192 = v735;
    v498 = v735;
    v497 = v5;
    v193 = (volatile signed __int64 **)v734;
    v496 = v734;
    sub_140DC11A0(v184 + 424);
    v194 = v736;
    *(_BYTE *)(v736 + 468) = 1;
    v195 = *(_BYTE *)(v194 + 464);
    *(_WORD *)(v194 + 471) = 0;
    *(_BYTE *)(v194 + 469) = 0;
    v350 = v195;
    *(_QWORD *)&v345[16] = v193;
    *(_QWORD *)&v345[24] = v183;
    *(_QWORD *)v345 = 1;
    *(_QWORD *)&v345[8] = v188;
    v351 = 0;
    v633 = v192;
    v632 = v5;
    v631 = v193;
    v196 = sub_1409B7A40(v345, &off_141A26848);
    v6 = v192;
    v7 = v193;
    v197 = v736;
    *(_QWORD *)(v736 + 448) = v196;
    v198 = *(unsigned __int8 *)(v197 + 464);
    v199 = *(_QWORD *)(v197 + 272);
    v200 = *(_QWORD *)(v197 + 432);
    v201 = *(_QWORD *)(v197 + 440);
    v495 = v192;
    v494 = v5;
    v493 = v193;
    sub_140DBD530((unsigned int)v345, v199, v198, v200, v201);
    *(_QWORD *)&v4 = *(_QWORD *)&v345[8];
    *((_QWORD *)&v4 + 1) = *(_QWORD *)&v345[24];
    a4 = *(_QWORD *)&v345[16];
    if ( v345[0] )
    {
      v732 = *(__m128i *)&v345[8];
      v59 = v736;
      v10 = v729;
      goto LABEL_236;
    }
    v9 = v736;
    v202 = v736 + 224;
    *(_BYTE *)(v736 + 467) = 0;
    v17 = v9 + 488;
    v732.m128i_i64[0] = 0x8000000000000000uLL;
    *(_QWORD *)(v9 + 488) = 0x8000000000000000uLL;
    *(_QWORD *)(v9 + 496) = v4;
    *(_OWORD *)(v9 + 504) = __PAIR128__(*((unsigned __int64 *)&v4 + 1), a4);
    *(_QWORD *)(v9 + 528) = v202;
LABEL_212:
    v203 = *(__m128i **)(v9 + 528);
    v732.m128i_i64[1] = v17;
    v489 = v17;
    v488 = v7;
    v487 = v5;
    v486 = v6;
    v731 = (volatile signed __int64 **)v4;
    v485 = (volatile signed __int64 **)v4;
    v730 = a4;
    v484 = a4;
    v204 = v203;
    sub_140944B60(v345, v203, v19);
    v205 = *(_QWORD *)v345;
    v16 = v736;
    if ( *(_QWORD *)v345 != -2 )
    {
      if ( *(_DWORD *)v345 == -1 )
      {
        v734 = v7;
        v735 = v6;
        v733 = v5;
        *(_QWORD *)(v736 + 488) = -1;
        v726 = (const __m128i *)(v16 + 496);
        v725 = v204;
        if ( v204->m128i_i64[0] != -1 )
          sub_14040C610(v725);
        v49 = (__int64 *)v725;
        v725->m128i_i64[0] = v732.m128i_i64[0];
        v206 = v726[1];
        *(__m128i *)(v49 + 1) = _mm_loadu_si128(v726);
        *(__m128i *)(v49 + 3) = v206;
        v5 = v733;
        v6 = v735;
        v7 = (volatile signed __int64 **)v734;
        v18 = v731;
        *(_QWORD *)&v4 = v730;
        v17 = v732.m128i_i64[1];
        v8 = v19;
LABEL_217:
        v732.m128i_i64[1] = v17;
        v489 = v17;
        v488 = v7;
        v487 = v5;
        v486 = v6;
        v731 = v18;
        v485 = v18;
        v730 = v4;
        v484 = v4;
        sub_140944540(v345, v49, v8);
        v205 = *(_QWORD *)v345;
        v10 = v729;
        if ( *(_QWORD *)v345 != -2 )
        {
          if ( *(_DWORD *)v345 == -1 )
          {
            v205 = -1;
            v16 = v736;
            goto LABEL_225;
          }
          v361 = v347;
          v360 = v346;
          v359 = *(_OWORD *)&v345[88];
          v358 = *(_OWORD *)&v345[72];
          v208 = _mm_loadu_si128((const __m128i *)&v345[8]);
          v357 = *(__m128i *)&v345[56];
          v356 = *(_OWORD *)&v345[40];
          v355 = *(_OWORD *)&v345[24];
          v354 = v208;
        }
        v16 = v736;
        if ( *(_DWORD *)v345 != -2 )
        {
LABEL_225:
          v390 = v361;
          v389 = v360;
          v388 = v359;
          v387 = v358;
          v209 = _mm_load_si128(&v354);
          v386 = v357;
          v385 = v356;
          v384 = v355;
          v383 = v209;
          v210 = *(_QWORD *)v732.m128i_i64[1];
          if ( *(_QWORD *)v732.m128i_i64[1] == -1 )
            goto LABEL_234;
          v211 = 5;
          if ( v210 < 0 )
            v211 = v210 ^ 0x8000000000000000uLL;
          if ( v211 >= 4 )
          {
            v212 = 488;
            if ( v211 == 4 )
            {
              v210 = *(_QWORD *)(v16 + 496);
              v212 = 496;
              if ( (unsigned __int64)v210 > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_234;
            }
          }
          else
          {
            v210 = *(_QWORD *)(v16 + 496);
            v212 = 496;
          }
          if ( v210 )
            sub_140001660(*(_QWORD *)(v16 + v212 + 8), v210, 1);
LABEL_234:
          v735 = v6;
          v733 = v5;
          v734 = v7;
          if ( (_DWORD)v205 != -1 )
          {
            *(_QWORD *)v345 = v205;
            *(__m128i *)&v345[8] = v383;
            *(_OWORD *)&v345[24] = v384;
            *(_OWORD *)&v345[40] = v385;
            *(__m128i *)&v345[56] = v386;
            *(_OWORD *)&v345[72] = v387;
            *(_OWORD *)&v345[88] = v388;
            v346 = v389;
            v347 = _mm_load_si128(&v390);
            sub_1414FDA60(v16 + 448);
            v339.m128i_i64[0] = (__int64)v345;
            v339.m128i_i64[1] = (__int64)sub_14119C700;
            sub_1416ABFD0(&v354, &unk_141A26860, &v339);
            v732 = v354;
            *((_QWORD *)&v4 + 1) = v355;
            v701 = v730;
            v700 = v731;
            v6 = v735;
            v699 = v735;
            v5 = v733;
            v698 = v733;
            v7 = (volatile signed __int64 **)v734;
            v697 = v734;
            sub_140994490(v345, v213, v214);
            v59 = v736;
LABEL_236:
            *(_BYTE *)(v59 + 467) = 0;
            v215 = *(_QWORD *)(v59 + 448);
            v633 = v6;
            v632 = v5;
            v631 = v7;
            if ( (unsigned __int8)sub_1414FCFD0(v215) )
            {
              v633 = v6;
              v632 = v5;
              v631 = v7;
              sub_1414FD8E0(v215);
            }
            v734 = v7;
            v735 = v6;
            v733 = v5;
            v216 = v736;
            v217 = *(_QWORD *)(v736 + 424);
            if ( v217 )
              sub_140001660(*(_QWORD *)(v736 + 432), v217, 1);
            *(_BYTE *)(v216 + 468) = 0;
            if ( *(_BYTE *)(v216 + 465) )
            {
              v218 = *(_QWORD *)(v736 + 480);
              if ( v218 )
              {
                v731 = (volatile signed __int64 **)(v736 + 480);
                v219 = _InterlockedOr64((volatile signed __int64 *)(v218 + 48), 4u);
                if ( (v219 & 0xA) == 8 )
                {
                  v220 = v219;
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v218 + 16) + 16LL))(*(_QWORD *)(v218 + 24));
                  v219 = v220;
                }
                if ( (v219 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v218 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  v221 = v219;
                  sub_1414FE850(v218 + 32);
                  v219 = v221;
                }
                if ( (v219 & 2) != 0 )
                {
                  v222 = *(_QWORD *)(v218 + 56);
                  v223 = *(_QWORD *)(v218 + 64);
                  *(_QWORD *)(v218 + 56) = -2;
                  if ( (unsigned __int64)(v222 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v223, v222, 1);
                }
                if ( *v731 && !_InterlockedDecrement64(*v731) )
                {
                  v683 = v735;
                  v682 = v733;
                  v681 = v734;
                  sub_1409E3B60();
                }
              }
            }
            v224 = v736;
            *(_BYTE *)(v736 + 465) = 0;
            *(_BYTE *)(v224 + 469) = 0;
            v731 = (volatile signed __int64 **)(v224 + 416);
            sub_140947B30();
            if ( !_InterlockedDecrement64(*v731) )
            {
              v645 = v735;
              v644 = v733;
              v643 = v734;
              sub_1409E44B0();
            }
            v225 = v736;
            *(_WORD *)(v736 + 470) = 0;
            *(_BYTE *)(v225 + 472) = 0;
            v734 = (_BYTE *)(v225 + 224);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v225 + 264)) )
              sub_1409E4200(v736 + 264);
            v226 = *(_QWORD *)v734;
            v227 = v736;
            v5 = v733;
            v6 = v735;
            if ( *(_QWORD *)v734 != -1 )
            {
              v228 = 5;
              if ( v226 < 0 )
                v228 = v226 ^ 0x8000000000000000uLL;
              if ( v228 >= 4 )
              {
                v229 = 224;
                if ( v228 == 4 )
                {
                  v226 = *(_QWORD *)(v736 + 232);
                  v229 = 232;
                  if ( (unsigned __int64)v226 > 0xFFFFFFFFFFFFFFFDuLL )
                    goto LABEL_265;
                }
              }
              else
              {
                v226 = *(_QWORD *)(v736 + 232);
                v229 = 232;
              }
              if ( v226 )
                sub_140001660(*(_QWORD *)(v736 + v229 + 8), v226, 1);
            }
LABEL_265:
            *(_BYTE *)(v227 + 473) = 0;
            v483 = v6;
            v482 = v5;
            sub_1409632E0(v227 + 280);
            v16 = v736;
            *(_BYTE *)(v736 + 474) = 0;
            v14 = -1;
            if ( *(_BYTE *)(v16 + 466) )
              goto LABEL_203;
            goto LABEL_266;
          }
          LOBYTE(v6) = 2;
          if ( *(_BYTE *)(v16 + 464) == 2 )
          {
LABEL_270:
            *(_BYTE *)(v16 + 473) = 0;
            *((_QWORD *)&v4 + 1) = *(_QWORD *)(v16 + 224);
            v428 = *(volatile signed __int64 **)(v16 + 264);
            v427 = *(_OWORD *)(v16 + 248);
            v426 = _mm_loadu_si128((const __m128i *)(v16 + 232));
            v7 = *(volatile signed __int64 ***)(v16 + 416);
            v14 = *(_QWORD *)(v16 + 424);
            v732 = *(__m128i *)(v16 + 432);
            *(_BYTE *)(v16 + 470) = 0;
            v5 = *(_QWORD *)(v16 + 448);
            *(_WORD *)(v16 + 467) = 0;
            if ( *(_BYTE *)(v16 + 465) )
            {
              v231 = *(_QWORD *)(v736 + 480);
              if ( v231 )
              {
                v731 = (volatile signed __int64 **)(v736 + 480);
                v232 = _InterlockedOr64((volatile signed __int64 *)(v231 + 48), 4u);
                v730 = v232;
                if ( (v232 & 0xA) == 8 )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v231 + 16) + 16LL))(*(_QWORD *)(v231 + 24));
                  LOBYTE(v232) = v730;
                }
                if ( (v232 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v231 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  sub_1414FE850(v231 + 32);
                  LOBYTE(v232) = v730;
                }
                if ( (v232 & 2) != 0 )
                {
                  v233 = *(_QWORD *)(v231 + 56);
                  v234 = *(_QWORD *)(v231 + 64);
                  *(_QWORD *)(v231 + 56) = -2;
                  if ( (unsigned __int64)(v233 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v234, v233, 1);
                }
                if ( *v731 && !_InterlockedDecrement64(*v731) )
                {
                  v683 = v735;
                  v682 = v733;
                  v681 = v734;
                  sub_1409E3B60();
                }
              }
            }
            v235 = v736;
            *(_BYTE *)(v736 + 465) = 0;
            *(_DWORD *)(v235 + 469) = 0;
            *(_BYTE *)(v235 + 473) = 0;
            v483 = v735;
            v482 = v733;
            sub_1409632E0(v235 + 280);
            v16 = v736;
            *(_BYTE *)(v736 + 474) = 0;
            goto LABEL_266;
          }
          *(_BYTE *)(v16 + 465) = 0;
          v236 = *(_QWORD *)(v16 + 480);
          v339.m128i_i64[0] = v236;
          *(_QWORD *)v345 = sub_141514620();
          *(_DWORD *)&v345[8] = v237;
          v238 = sub_141514600(v345, 15, 0);
          if ( v239 == -1 )
            sub_141513BD0(v345, 0, 0xFFFFFFFFLL);
          else
            sub_141513CC0((unsigned int)v345, v238, v239, 0, (__int64)&off_141A26888);
          v9 = v736;
          v240 = (_OWORD *)(v736 + 480);
          v360 = _mm_loadu_si128((const __m128i *)&v345[96]);
          v241 = *(_OWORD *)&v345[80];
          v359 = *(_OWORD *)&v345[80];
          v242 = *(_OWORD *)&v345[64];
          v358 = *(_OWORD *)&v345[64];
          v243 = *(_OWORD *)v345;
          v244 = *(_OWORD *)&v345[16];
          v245 = *(_OWORD *)&v345[32];
          v246 = _mm_loadu_si128((const __m128i *)&v345[48]);
          v357 = v246;
          v356 = *(_OWORD *)&v345[32];
          v355 = *(_OWORD *)&v345[16];
          v354 = *(__m128i *)v345;
          *(__m128i *)(v736 + 576) = v360;
          v240[5] = v241;
          v240[4] = v242;
          v240[3] = v246;
          v240[2] = v245;
          v240[1] = v244;
          *v240 = v243;
          *(_QWORD *)(v9 + 592) = v236;
LABEL_6:
          v732.m128i_i64[0] = v9 + 480;
          v20 = (unsigned __int8 *)sub_141512160(v4, a2, a3, a4);
          *((_QWORD *)&v4 + 1) = v20[72];
          if ( v20[72] )
          {
            if ( DWORD2(v4) == 2 )
            {
LABEL_8:
              v21 = (volatile signed __int64 **)(v736 + 592);
              sub_14092FA70(v345, v736 + 592, v8);
              v22 = *(_QWORD *)v345;
              if ( *(_QWORD *)v345 == -3 )
              {
                LOBYTE(v4) = BYTE8(v4) & 1 | (BYTE8(v4) == 2);
                if ( (unsigned __int8)sub_14151B400(v4, v732.m128i_i64[0], v8) )
                {
                  *v10 = (volatile signed __int64 *)-2LL;
                  result = 5;
                  v16 = v736;
                  goto LABEL_268;
                }
                v25 = *v21;
                if ( !*v21 )
                {
LABEL_36:
                  v701 = v730;
                  v700 = v731;
                  v699 = v735;
                  v698 = v733;
                  v697 = v734;
                  sub_1408ED810(v732.m128i_i64[0]);
                  if ( v22 == -2 )
                  {
                    nullsub_1(v55);
                    v56 = 31;
                    v58 = sub_140001650(31, 1);
                    v16 = v736;
                    if ( !v58 )
                    {
                      v701 = v730;
                      v700 = v731;
                      v699 = v735;
                      v698 = v733;
                      v697 = v734;
                      sub_141938D2B(1, 31);
                    }
                    *(_OWORD *)(v58 + 15) = *(__int128 *)((char *)&xmmword_141A268A0 + 15);
                    v732.m128i_i64[1] = v58;
                    *(__m128i *)v58 = _mm_loadu_si128((const __m128i *)&xmmword_141A268A0);
                    *((_QWORD *)&v4 + 1) = 31;
                  }
                  else
                  {
                    v56 = v22;
                    v16 = v736;
                    if ( v22 == -3 )
                    {
                      nullsub_1(v55);
                      v56 = 22;
                      v57 = sub_140001650(22, 1);
                      if ( !v57 )
                      {
                        v701 = v730;
                        v700 = v731;
                        v699 = v735;
                        v698 = v733;
                        v697 = v734;
                        sub_141938D2B(1, 22);
                      }
                      *(__m128i *)v57 = _mm_loadu_si128(&xmmword_141A268BF);
                      v732.m128i_i64[1] = v57;
                      *(_QWORD *)(v57 + 14) = 0xB697E685B6E8A88AuLL;
                      *((_QWORD *)&v4 + 1) = 22;
                    }
                    else if ( v22 == -1 )
                    {
                      LOBYTE(v6) = *(_BYTE *)(v736 + 464);
                      goto LABEL_270;
                    }
                  }
                  v732.m128i_i64[0] = v56;
                  sub_1414FDA60(v16 + 448);
                  v59 = v736;
                  v5 = v733;
                  v6 = v735;
                  v7 = (volatile signed __int64 **)v734;
                  goto LABEL_236;
                }
              }
              else
              {
                v732.m128i_i64[1] = *(_QWORD *)&v345[8];
                *((_QWORD *)&v4 + 1) = *(_QWORD *)&v345[16];
                v25 = *v21;
                if ( !*v21 )
                  goto LABEL_36;
              }
              v729 = v21;
              v50 = _InterlockedOr64(v25 + 6, 4u);
              if ( (v50 & 0xA) == 8 )
              {
                v51 = v50;
                (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v25 + 2) + 16LL))(*((_QWORD *)v25 + 3));
                v50 = v51;
              }
              if ( (v50 & 3) == 1 )
              {
                _InterlockedAnd64(v25 + 6, 0xFFFFFFFFFFFFFFFEuLL);
                v52 = v50;
                sub_1414FE850(v25 + 4);
                v50 = v52;
              }
              if ( (v50 & 2) != 0 )
              {
                v53 = *((_QWORD *)v25 + 7);
                v54 = *((_QWORD *)v25 + 8);
                *((_QWORD *)v25 + 7) = -2;
                if ( (unsigned __int64)(v53 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                  sub_140001660(v54, v53, 1);
              }
              if ( *v729 && !_InterlockedDecrement64(*v729) )
                sub_1409E3B60();
              goto LABEL_36;
            }
            v167 = v20;
            sub_14169B890(v20, sub_140BE2F50);
            v20 = v167;
            v167[72] = 0;
          }
          *((_QWORD *)&v4 + 1) = (unsigned int)sub_141515930(v20[68], v20[69]);
          goto LABEL_8;
        }
LABEL_222:
        *v10 = (volatile signed __int64 *)-2LL;
        result = 4;
        goto LABEL_268;
      }
      v361 = v347;
      v360 = v346;
      v359 = *(_OWORD *)&v345[88];
      v358 = *(_OWORD *)&v345[72];
      v207 = _mm_loadu_si128((const __m128i *)&v345[8]);
      v357 = *(__m128i *)&v345[56];
      v356 = *(_OWORD *)&v345[40];
      v355 = *(_OWORD *)&v345[24];
      v354 = v207;
    }
    v8 = v19;
    v10 = v729;
    if ( *(_DWORD *)v345 != -2 )
      goto LABEL_225;
    goto LABEL_222;
  }
  *(_QWORD *)v345 = v30;
  *(_QWORD *)&v345[8] = v32;
  *(_QWORD *)&v345[16] = v718;
  *(_QWORD *)&v345[24] = v726;
  *(_QWORD *)&v345[32] = v715;
  *(_QWORD *)&v345[40] = v714;
  *(_QWORD *)&v345[48] = v719;
  *(_QWORD *)&v345[56] = v725;
  *(_OWORD *)&v345[64] = v711;
  *(_QWORD *)&v345[80] = v724;
  *(_QWORD *)&v345[88] = v720;
  *(_QWORD *)&v345[96] = v721;
  v346.m128i_i64[0] = (__int64)v712;
  v346.m128i_i64[1] = v723;
  v347.m128i_i64[0] = (__int64)v713;
  v347.m128i_i64[1] = (__int64)v722;
  v354.m128i_i64[0] = (__int64)v345;
  v354.m128i_i64[1] = (__int64)sub_14119C700;
  sub_1416ABFD0(&v362, &unk_141A26070, &v354);
  v6 = v735;
  v706 = v735;
  v5 = v733;
  v705 = v733;
  sub_140994490(v345, v173, v174);
  v732 = *(__m128i *)v362.m256i_i8;
  *((_QWORD *)&v4 + 1) = v362.m256i_i64[2];
LABEL_201:
  v16 = v736;
LABEL_202:
  v14 = -1;
  if ( !*(_BYTE *)(v16 + 466) )
    goto LABEL_266;
LABEL_203:
  v680 = v6;
  v679 = v5;
  sub_1407AA9D0(v16);
LABEL_204:
  v16 = v736;
LABEL_266:
  *(_BYTE *)(v16 + 466) = 0;
  *(_QWORD *)&v4 = v732.m128i_i64[1];
  v15 = (volatile signed __int64 *)v732.m128i_i64[0];
LABEL_267:
  *(_BYTE *)(v16 + 475) = 0;
  *v10 = (volatile signed __int64 *)v14;
  v10[1] = v15;
  *((_OWORD *)v10 + 1) = v4;
  v230 = v427;
  *((__m128i *)v10 + 2) = _mm_load_si128(&v426);
  *((_OWORD *)v10 + 3) = v230;
  v10[8] = v428;
  v10[9] = (volatile signed __int64 *)v5;
  *((_WORD *)v10 + 40) = 0;
  v10[11] = (volatile signed __int64 *)v7;
  *((_BYTE *)v10 + 96) = (_BYTE)v6;
  result = 1;
LABEL_268:
  *(_BYTE *)(v16 + 476) = result;
  return result;
}
