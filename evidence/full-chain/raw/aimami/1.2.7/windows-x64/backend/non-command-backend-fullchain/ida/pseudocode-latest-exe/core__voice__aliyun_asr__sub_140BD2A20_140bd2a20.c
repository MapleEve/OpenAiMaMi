// win 1.2.7 latest-exe | module src/core/voice/aliyun_asr.rs | ea 0x140bd2a20 | successor of pre-update 0x1409c0de0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
char __fastcall sub_140BD2A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i v4; // rcx
  __int64 v5; // r12
  char *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r13
  __m128i *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  volatile signed __int64 *v15; // rax
  __int64 v16; // r13
  _BYTE *v17; // r8
  volatile signed __int64 **v18; // rax
  __int64 v19; // rsi
  unsigned __int8 *v20; // rax
  volatile signed __int64 **v21; // r14
  char result; // al
  __int64 v23; // rax
  volatile signed __int64 *v24; // rdi
  __int64 v25; // rax
  char v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r12
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int64 v38; // rdi
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int128 v41; // xmm3
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int16 v46; // r15
  __int64 v47; // r14
  _QWORD *v48; // r12
  volatile signed __int64 **v49; // rdx
  char v50; // al
  char v51; // r14
  char v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _BYTE *v63; // r14
  __int16 v64; // ax
  __int16 v65; // dx
  __int16 v66; // bx
  char *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int128 v70; // xmm0
  const __m128i *v71; // r15
  char *v72; // rbx
  __m128i v73; // xmm0
  int v74; // ebx
  __m128i v75; // xmm6
  __int64 v76; // r15
  __int64 v77; // rbx
  __int64 v78; // r15
  __int64 v79; // r14
  __int64 v80; // rbx
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
  __int64 v91; // r10
  __int64 v92; // r11
  char *v93; // r14
  __int64 v94; // rax
  char v95; // al
  __m128i v96; // xmm0
  __int64 v97; // r13
  __int64 v98; // rbx
  __int64 v99; // rax
  __int64 v100; // r12
  char *v101; // rbx
  __int64 v102; // rdx
  void (__fastcall *v103)(unsigned __int64 *, __int64, __int64); // rax
  void (__fastcall *v104)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v105; // rcx
  _WORD *v106; // rax
  __int64 v107; // rcx
  unsigned __int16 v108; // cx
  int v109; // eax
  unsigned __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // r15
  __int64 v114; // rbx
  char v115; // al
  __m128i *v116; // rcx
  __int64 v117; // r8
  unsigned __int64 v118; // rbx
  __m128i v119; // xmm0
  __int64 v120; // rax
  __m128i v121; // xmm6
  __int64 v122; // rax
  __int64 v123; // rdx
  unsigned __int64 v124; // r8
  _BYTE *v125; // rcx
  __int64 v126; // r14
  __int64 v127; // r12
  __int64 v128; // r15
  __int64 v129; // r14
  __int128 v130; // xmm1
  __int128 v131; // xmm2
  __int128 v132; // xmm3
  __int128 v133; // xmm1
  __int128 v134; // xmm2
  __int128 v135; // xmm3
  __int64 v136; // r12
  __int64 v137; // rbx
  __int64 v138; // r12
  char v139; // al
  char *v140; // rcx
  char v141; // al
  const __m128i *v142; // r14
  _DWORD *v143; // rbx
  __int64 v144; // r13
  __int64 v145; // r15
  __int64 v146; // r15
  _BYTE *v147; // r8
  __int64 v148; // r9
  unsigned __int128 v149; // kr290_16
  unsigned __int128 v150; // kr2B0_16
  __int64 v151; // rdx
  _DWORD *v152; // r12
  __int64 v153; // rbx
  __int64 v154; // r15
  const __m128i *v155; // rax
  _WORD *v156; // r14
  const __m128i *v157; // rbx
  __int64 v158; // r12
  char *v159; // r14
  __m128i v160; // xmm0
  char *v161; // r13
  __int64 v162; // rcx
  unsigned __int64 v163; // r15
  const __m128i *v164; // r8
  __int64 v165; // r14
  __int64 v166; // rdx
  unsigned __int8 *v167; // rbx
  __int64 v168; // rbx
  volatile signed __int64 *v169; // rax
  __int64 v170; // rax
  __int64 v171; // rbx
  _BYTE *v172; // r13
  __int64 v173; // r14
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // rax
  volatile signed __int64 *v177; // rbx
  __int64 v178; // rt0
  char v179; // of
  volatile signed __int64 *v180; // r14
  __int64 v181; // rdi
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // r15
  __m128i v186; // xmm0
  __int128 v187; // xmm1
  __int128 v188; // xmm2
  char *v189; // r13
  __int64 v190; // rcx
  char v191; // al
  __int64 v192; // rax
  __int64 v193; // rcx
  char v194; // r8
  __int64 v195; // rdx
  __int64 v196; // r9
  __int64 v197; // rax
  __int64 v198; // rax
  volatile signed __int64 **v199; // rdx
  volatile signed __int64 **v200; // rdi
  __int64 v201; // rbx
  __m128i v202; // xmm1
  __m128i v203; // xmm0
  __m128i v204; // xmm0
  __m128i v205; // xmm0
  __int64 v206; // rdx
  unsigned __int64 v207; // rcx
  __int64 v208; // rax
  __int64 v209; // rdi
  __int64 v210; // rdi
  __int64 v211; // rdx
  __int64 v212; // rdi
  char v213; // al
  char v214; // r14
  char v215; // r14
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rdx
  __int64 v221; // rdi
  unsigned __int64 v222; // rcx
  __int64 v223; // rax
  __m128i v224; // xmm1
  __int64 v225; // r13
  signed __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // rax
  __int64 v230; // rbx
  int v231; // edx
  int v232; // eax
  int v233; // edx
  _OWORD *v234; // rax
  __int128 v235; // xmm1
  __int128 v236; // xmm2
  __int128 v237; // xmm3
  __int128 v238; // xmm4
  __int128 v239; // xmm5
  __m128i v240; // xmm6
  _DWORD *v241; // rbx
  __int64 v242; // rcx
  __m128i *v243; // rax
  __m128i v244; // xmm0
  __m128i v245; // xmm0
  __int64 v246; // rax
  __m128i *v247; // rcx
  unsigned __int64 v248; // rdx
  unsigned __int64 v249; // r15
  __int64 v250; // rax
  const __m128i *v251; // r9
  __int64 v252; // r14
  __int64 v253; // rdx
  unsigned __int64 v254; // r15
  __int64 v255; // rax
  unsigned __int64 v256; // r14
  __int64 v257; // rdx
  __int64 v258; // rax
  unsigned __int64 v259; // r14
  __int64 v260; // rax
  __m128i *v261; // r15
  __int64 v262; // rdx
  __int128 v263; // xmm1
  __int128 v264; // xmm2
  __int128 v265; // xmm3
  __int64 v266; // rax
  __m128i *v267; // rdx
  __m128i v268; // xmm1
  __int128 v269; // xmm1
  __int128 v270; // xmm2
  __int128 v271; // xmm3
  __int64 v272; // rcx
  _WORD *v273; // r9
  const __m128i *v274; // r11
  __int64 v275; // rbx
  __int64 v276; // r14
  char *v277; // rdx
  _BYTE *v278; // r8
  __int64 v279; // r10
  __int128 v280; // xmm0
  __int64 v281; // rax
  __int128 v282; // xmm1
  __int128 v283; // xmm2
  __int128 v284; // xmm3
  __int128 v285; // kr200_16
  __int64 v286; // r12
  const __m128i *v287; // rdx
  _WORD *v288; // r8
  __int64 v289; // rax
  __int64 v290; // rdx
  bool v291; // zf
  __int64 v292; // rdx
  __int64 v293; // rcx
  volatile signed __int64 *v294; // rax
  __int64 v295; // r15
  _WORD *v296; // r12
  __int64 v297; // rax
  unsigned __int64 v298; // r14
  __int16 v299; // r15
  __int64 v300; // rdx
  __int64 v301; // rax
  __int64 v302; // rcx
  __m128i si128; // xmm0
  __int128 v304; // xmm1
  __int128 v305; // xmm2
  __m128i v306; // xmm0
  __int128 v307; // xmm1
  __int128 v308; // xmm2
  __int128 v309; // xmm1
  _BYTE v310[1152]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v311[1152]; // [rsp+4A8h] [rbp+428h] BYREF
  _BYTE v312[1152]; // [rsp+928h] [rbp+8A8h] BYREF
  _BYTE v313[1152]; // [rsp+DA8h] [rbp+D28h] BYREF
  _BYTE v314[1152]; // [rsp+1228h] [rbp+11A8h] BYREF
  _BYTE v315[1152]; // [rsp+16A8h] [rbp+1628h] BYREF
  _BYTE v316[960]; // [rsp+1B28h] [rbp+1AA8h] BYREF
  _BYTE v317[232]; // [rsp+1EE8h] [rbp+1E68h] BYREF
  _BYTE v318[224]; // [rsp+1FD0h] [rbp+1F50h] BYREF
  _QWORD v319[144]; // [rsp+20B0h] [rbp+2030h] BYREF
  _BYTE v320[141]; // [rsp+2533h] [rbp+24B3h] BYREF
  __int128 v321; // [rsp+25C0h] [rbp+2540h] BYREF
  __int64 v322; // [rsp+25D0h] [rbp+2550h]
  _BYTE v323[141]; // [rsp+2A44h] [rbp+29C4h] BYREF
  char v324[5]; // [rsp+2AD1h] [rbp+2A51h] BYREF
  char v325[136]; // [rsp+2AD6h] [rbp+2A56h] BYREF
  _BYTE v326[141]; // [rsp+2B5Eh] [rbp+2ADEh] BYREF
  _BYTE v327[141]; // [rsp+2BEBh] [rbp+2B6Bh] BYREF
  _BYTE v328[208]; // [rsp+2C78h] [rbp+2BF8h] BYREF
  _BYTE v329[208]; // [rsp+2D48h] [rbp+2CC8h] BYREF
  _BYTE v330[136]; // [rsp+2E18h] [rbp+2D98h] BYREF
  __m128i v331; // [rsp+2EA0h] [rbp+2E20h] BYREF
  __int64 v332; // [rsp+2EB0h] [rbp+2E30h]
  __m128i v333; // [rsp+3320h] [rbp+32A0h] BYREF
  __int64 v334; // [rsp+3330h] [rbp+32B0h]
  int v335; // [rsp+38A3h] [rbp+3823h] BYREF
  char v336; // [rsp+38A7h] [rbp+3827h]
  char v337[136]; // [rsp+38A8h] [rbp+3828h] BYREF
  __m128i v338[4]; // [rsp+3930h] [rbp+38B0h] BYREF
  __int64 v339; // [rsp+3970h] [rbp+38F0h]
  char v340[136]; // [rsp+3978h] [rbp+38F8h] BYREF
  _BYTE v341[104]; // [rsp+3A00h] [rbp+3980h] BYREF
  __m128i v342; // [rsp+3A68h] [rbp+39E8h]
  __m128i v343; // [rsp+3A78h] [rbp+39F8h]
  __int64 v344; // [rsp+3A88h] [rbp+3A08h]
  _BYTE v345[960]; // [rsp+3A90h] [rbp+3A10h] BYREF
  char v346[304]; // [rsp+3E50h] [rbp+3DD0h] BYREF
  __int64 v347; // [rsp+3F80h] [rbp+3F00h]
  __m128i v348; // [rsp+55E0h] [rbp+5560h] BYREF
  __int128 v349; // [rsp+55F0h] [rbp+5570h]
  __int128 v350; // [rsp+5600h] [rbp+5580h]
  __m128i v351; // [rsp+5610h] [rbp+5590h]
  __int128 v352; // [rsp+5620h] [rbp+55A0h]
  __int128 v353; // [rsp+5630h] [rbp+55B0h]
  __m128i v354; // [rsp+5640h] [rbp+55C0h]
  __m128i v355; // [rsp+5650h] [rbp+55D0h]
  __m256i v356; // [rsp+5B60h] [rbp+5AE0h] BYREF
  __int128 v357; // [rsp+5B80h] [rbp+5B00h]
  __int128 v358; // [rsp+5B90h] [rbp+5B10h]
  _BYTE v359[24]; // [rsp+5BA0h] [rbp+5B20h]
  const __m128i *v360; // [rsp+5BB8h] [rbp+5B38h]
  char *v361; // [rsp+5BC0h] [rbp+5B40h]
  _BYTE *v362; // [rsp+5BC8h] [rbp+5B48h]
  _BYTE *v363; // [rsp+5BD0h] [rbp+5B50h]
  __int64 v364; // [rsp+5BD8h] [rbp+5B58h]
  __int64 v365; // [rsp+5BE0h] [rbp+5B60h]
  _BYTE *v366; // [rsp+5BE8h] [rbp+5B68h]
  __int64 v367; // [rsp+5BF0h] [rbp+5B70h] BYREF
  _BYTE v368[72]; // [rsp+5BF8h] [rbp+5B78h] BYREF
  __m128i v369; // [rsp+5C40h] [rbp+5BC0h]
  __int128 v370; // [rsp+5C50h] [rbp+5BD0h]
  __int128 v371; // [rsp+5C60h] [rbp+5BE0h]
  __int128 v372; // [rsp+5C70h] [rbp+5BF0h]
  __int64 v373; // [rsp+5C80h] [rbp+5C00h]
  char v374[808]; // [rsp+5C88h] [rbp+5C08h] BYREF
  char v375[200]; // [rsp+5FB0h] [rbp+5F30h] BYREF
  _OWORD v376[4]; // [rsp+6078h] [rbp+5FF8h] BYREF
  __int64 v377; // [rsp+60B8h] [rbp+6038h]
  __int16 v378; // [rsp+60C0h] [rbp+6040h]
  char v379; // [rsp+60C2h] [rbp+6042h]
  int v380; // [rsp+60C3h] [rbp+6043h]
  char v381; // [rsp+60C7h] [rbp+6047h]
  __m128i v382; // [rsp+6150h] [rbp+60D0h]
  __int128 v383; // [rsp+6160h] [rbp+60E0h]
  __int128 v384; // [rsp+6170h] [rbp+60F0h]
  __m128i v385; // [rsp+6180h] [rbp+6100h]
  __int128 v386; // [rsp+6190h] [rbp+6110h]
  __int128 v387; // [rsp+61A0h] [rbp+6120h]
  __m128i v388; // [rsp+61B0h] [rbp+6130h]
  __m128i v389; // [rsp+61C0h] [rbp+6140h] BYREF
  __m128i v390; // [rsp+61D0h] [rbp+6150h] BYREF
  __m128i v391; // [rsp+61E0h] [rbp+6160h]
  __m128i v392; // [rsp+61F0h] [rbp+6170h]
  __m128i v393; // [rsp+6200h] [rbp+6180h]
  __int64 v394; // [rsp+6210h] [rbp+6190h]
  __m128i v395; // [rsp+6220h] [rbp+61A0h] BYREF
  __m128i v396; // [rsp+6230h] [rbp+61B0h]
  __m128i v397; // [rsp+6240h] [rbp+61C0h]
  __m128i v398; // [rsp+6250h] [rbp+61D0h]
  __int64 v399; // [rsp+6260h] [rbp+61E0h]
  __m128i v400; // [rsp+6270h] [rbp+61F0h] BYREF
  __m128i v401; // [rsp+6280h] [rbp+6200h]
  __m128i v402; // [rsp+6290h] [rbp+6210h]
  __m128i v403; // [rsp+62A0h] [rbp+6220h]
  __int64 v404; // [rsp+62B0h] [rbp+6230h]
  __int128 v405; // [rsp+62C0h] [rbp+6240h]
  __int128 v406; // [rsp+62D0h] [rbp+6250h]
  __int128 v407; // [rsp+62E0h] [rbp+6260h]
  __int128 v408; // [rsp+62F0h] [rbp+6270h]
  __int64 v409; // [rsp+6300h] [rbp+6280h]
  __m128i v410; // [rsp+6310h] [rbp+6290h]
  __m128i v411; // [rsp+6320h] [rbp+62A0h]
  __m128i v412; // [rsp+6330h] [rbp+62B0h]
  __m128i v413; // [rsp+6340h] [rbp+62C0h]
  __int64 v414; // [rsp+6350h] [rbp+62D0h]
  __m128i v415; // [rsp+6360h] [rbp+62E0h] BYREF
  __m128i v416; // [rsp+6370h] [rbp+62F0h]
  __m128i v417; // [rsp+6380h] [rbp+6300h]
  __m128i v418; // [rsp+6390h] [rbp+6310h]
  __int64 v419; // [rsp+63A0h] [rbp+6320h]
  __m128i v420; // [rsp+63B0h] [rbp+6330h] BYREF
  __m128i v421; // [rsp+63C0h] [rbp+6340h]
  __m128i v422; // [rsp+63D0h] [rbp+6350h]
  __m128i v423; // [rsp+63E0h] [rbp+6360h]
  __int64 v424; // [rsp+63F0h] [rbp+6370h]
  __m128i v425; // [rsp+6400h] [rbp+6380h] BYREF
  __m128i v426; // [rsp+6410h] [rbp+6390h]
  __int64 v427; // [rsp+6420h] [rbp+63A0h]
  __int128 v428; // [rsp+64F0h] [rbp+6470h] BYREF
  __int128 v429; // [rsp+6500h] [rbp+6480h]
  __int64 v430; // [rsp+6510h] [rbp+6490h]
  __int64 v431; // [rsp+6530h] [rbp+64B0h]
  char *v432; // [rsp+6538h] [rbp+64B8h]
  __int64 v433; // [rsp+6540h] [rbp+64C0h]
  volatile signed __int64 **v434; // [rsp+6548h] [rbp+64C8h]
  _BYTE *v435; // [rsp+6550h] [rbp+64D0h]
  volatile signed __int64 **v436; // [rsp+6558h] [rbp+64D8h]
  volatile signed __int64 *v437; // [rsp+6560h] [rbp+64E0h]
  __int64 v438; // [rsp+6568h] [rbp+64E8h]
  char *v439; // [rsp+6570h] [rbp+64F0h]
  __int64 v440; // [rsp+6578h] [rbp+64F8h]
  __int64 v441; // [rsp+6580h] [rbp+6500h]
  volatile signed __int64 **v442; // [rsp+6588h] [rbp+6508h]
  _BYTE *v443; // [rsp+6590h] [rbp+6510h]
  volatile signed __int64 **v444; // [rsp+6598h] [rbp+6518h]
  volatile signed __int64 *v445; // [rsp+65A0h] [rbp+6520h]
  __int64 v446; // [rsp+65A8h] [rbp+6528h]
  char *v447; // [rsp+65B0h] [rbp+6530h]
  __int64 v448; // [rsp+65B8h] [rbp+6538h]
  _BYTE *v449; // [rsp+65C0h] [rbp+6540h]
  __int64 v450; // [rsp+65C8h] [rbp+6548h]
  unsigned __int64 v451; // [rsp+65D0h] [rbp+6550h]
  __int64 v452; // [rsp+65D8h] [rbp+6558h]
  __int64 v453; // [rsp+65E0h] [rbp+6560h]
  volatile signed __int64 **v454; // [rsp+65E8h] [rbp+6568h]
  _BYTE *v455; // [rsp+65F0h] [rbp+6570h]
  volatile signed __int64 **v456; // [rsp+65F8h] [rbp+6578h]
  volatile signed __int64 *v457; // [rsp+6600h] [rbp+6580h]
  __int64 v458; // [rsp+6608h] [rbp+6588h]
  char *v459; // [rsp+6610h] [rbp+6590h]
  const __m128i *v460; // [rsp+6618h] [rbp+6598h]
  __int64 v461; // [rsp+6620h] [rbp+65A0h]
  volatile signed __int64 **v462; // [rsp+6628h] [rbp+65A8h]
  _BYTE *v463; // [rsp+6630h] [rbp+65B0h]
  volatile signed __int64 **v464; // [rsp+6638h] [rbp+65B8h]
  volatile signed __int64 *v465; // [rsp+6640h] [rbp+65C0h]
  __int64 v466; // [rsp+6648h] [rbp+65C8h]
  char *v467; // [rsp+6650h] [rbp+65D0h]
  const __m128i *v468; // [rsp+6658h] [rbp+65D8h]
  __m128i *v469; // [rsp+6660h] [rbp+65E0h]
  __int64 v470; // [rsp+6668h] [rbp+65E8h]
  unsigned __int64 v471; // [rsp+6670h] [rbp+65F0h]
  const __m128i *v472; // [rsp+6678h] [rbp+65F8h]
  __int64 v473; // [rsp+6680h] [rbp+6600h]
  volatile signed __int64 **v474; // [rsp+6688h] [rbp+6608h]
  _BYTE *v475; // [rsp+6690h] [rbp+6610h]
  volatile signed __int64 **v476; // [rsp+6698h] [rbp+6618h]
  volatile signed __int64 *v477; // [rsp+66A0h] [rbp+6620h]
  __int64 v478; // [rsp+66A8h] [rbp+6628h]
  char *v479; // [rsp+66B0h] [rbp+6630h]
  const __m128i *v480; // [rsp+66B8h] [rbp+6638h]
  __m128i *v481; // [rsp+66C0h] [rbp+6640h]
  volatile signed __int64 **v482; // [rsp+66C8h] [rbp+6648h]
  _BYTE *v483; // [rsp+66D0h] [rbp+6650h]
  volatile signed __int64 **v484; // [rsp+66D8h] [rbp+6658h]
  volatile signed __int64 *v485; // [rsp+66E0h] [rbp+6660h]
  __int64 v486; // [rsp+66E8h] [rbp+6668h]
  char *v487; // [rsp+66F0h] [rbp+6670h]
  _DWORD *v488; // [rsp+66F8h] [rbp+6678h]
  __int64 v489; // [rsp+6708h] [rbp+6688h]
  char *v490; // [rsp+6710h] [rbp+6690h]
  volatile signed __int64 **v491; // [rsp+6728h] [rbp+66A8h]
  __int64 v492; // [rsp+6730h] [rbp+66B0h]
  char *v493; // [rsp+6738h] [rbp+66B8h]
  __int64 v494; // [rsp+6740h] [rbp+66C0h]
  _BYTE *v495; // [rsp+6748h] [rbp+66C8h]
  __int64 v496; // [rsp+6770h] [rbp+66F0h]
  char *v497; // [rsp+6778h] [rbp+66F8h]
  __int64 v498; // [rsp+6780h] [rbp+6700h]
  char *v499; // [rsp+6788h] [rbp+6708h]
  volatile signed __int64 **v500; // [rsp+6790h] [rbp+6710h]
  volatile signed __int64 **v501; // [rsp+6798h] [rbp+6718h]
  volatile signed __int64 *v502; // [rsp+67A0h] [rbp+6720h]
  __int64 v503; // [rsp+67A8h] [rbp+6728h]
  volatile signed __int64 **v504; // [rsp+67B0h] [rbp+6730h]
  _BYTE *v505; // [rsp+67B8h] [rbp+6738h]
  volatile signed __int64 **v506; // [rsp+67C0h] [rbp+6740h]
  volatile signed __int64 *v507; // [rsp+67C8h] [rbp+6748h]
  __int64 v508; // [rsp+67D0h] [rbp+6750h]
  __int64 v509; // [rsp+67D8h] [rbp+6758h]
  volatile signed __int64 **v510; // [rsp+67E0h] [rbp+6760h]
  _BYTE *v511; // [rsp+67E8h] [rbp+6768h]
  volatile signed __int64 **v512; // [rsp+67F0h] [rbp+6770h]
  volatile signed __int64 *v513; // [rsp+67F8h] [rbp+6778h]
  __int64 v514; // [rsp+6800h] [rbp+6780h]
  __int64 v515; // [rsp+6808h] [rbp+6788h]
  __int64 v516; // [rsp+6810h] [rbp+6790h]
  volatile signed __int64 **v517; // [rsp+6818h] [rbp+6798h]
  _BYTE *v518; // [rsp+6820h] [rbp+67A0h]
  volatile signed __int64 **v519; // [rsp+6828h] [rbp+67A8h]
  volatile signed __int64 *v520; // [rsp+6830h] [rbp+67B0h]
  __int64 v521; // [rsp+6838h] [rbp+67B8h]
  __int64 v522; // [rsp+6840h] [rbp+67C0h]
  unsigned __int64 v523; // [rsp+6848h] [rbp+67C8h]
  __int64 v524; // [rsp+6850h] [rbp+67D0h]
  __int64 v525; // [rsp+6858h] [rbp+67D8h]
  volatile signed __int64 **v526; // [rsp+6860h] [rbp+67E0h]
  _BYTE *v527; // [rsp+6868h] [rbp+67E8h]
  volatile signed __int64 **v528; // [rsp+6870h] [rbp+67F0h]
  volatile signed __int64 *v529; // [rsp+6878h] [rbp+67F8h]
  __int64 v530; // [rsp+6880h] [rbp+6800h]
  __int64 v531; // [rsp+6888h] [rbp+6808h]
  _BYTE *v532; // [rsp+6890h] [rbp+6810h]
  __int64 v533; // [rsp+6898h] [rbp+6818h]
  unsigned __int64 v534; // [rsp+68A0h] [rbp+6820h]
  __int64 v535; // [rsp+68A8h] [rbp+6828h]
  __int64 v536; // [rsp+68B0h] [rbp+6830h]
  volatile signed __int64 **v537; // [rsp+68B8h] [rbp+6838h]
  _BYTE *v538; // [rsp+68C0h] [rbp+6840h]
  volatile signed __int64 **v539; // [rsp+68C8h] [rbp+6848h]
  volatile signed __int64 *v540; // [rsp+68D0h] [rbp+6850h]
  __int64 v541; // [rsp+68D8h] [rbp+6858h]
  __int64 v542; // [rsp+68E0h] [rbp+6860h]
  volatile signed __int64 **v543; // [rsp+68E8h] [rbp+6868h]
  _BYTE *v544; // [rsp+68F0h] [rbp+6870h]
  volatile signed __int64 **v545; // [rsp+68F8h] [rbp+6878h]
  volatile signed __int64 *v546; // [rsp+6900h] [rbp+6880h]
  __int64 v547; // [rsp+6908h] [rbp+6888h]
  char *v548; // [rsp+6910h] [rbp+6890h]
  __int64 v549; // [rsp+6918h] [rbp+6898h]
  __int64 v550; // [rsp+6920h] [rbp+68A0h]
  __int64 v551; // [rsp+6928h] [rbp+68A8h]
  __int64 v552; // [rsp+6930h] [rbp+68B0h]
  volatile signed __int64 **v553; // [rsp+6938h] [rbp+68B8h]
  _BYTE *v554; // [rsp+6940h] [rbp+68C0h]
  volatile signed __int64 **v555; // [rsp+6948h] [rbp+68C8h]
  volatile signed __int64 *v556; // [rsp+6950h] [rbp+68D0h]
  __int64 v557; // [rsp+6958h] [rbp+68D8h]
  __int64 v558; // [rsp+6960h] [rbp+68E0h]
  volatile signed __int64 **v559; // [rsp+6968h] [rbp+68E8h]
  _BYTE *v560; // [rsp+6970h] [rbp+68F0h]
  volatile signed __int64 **v561; // [rsp+6978h] [rbp+68F8h]
  volatile signed __int64 *v562; // [rsp+6980h] [rbp+6900h]
  __int64 v563; // [rsp+6988h] [rbp+6908h]
  char *v564; // [rsp+6990h] [rbp+6910h]
  __int64 v565; // [rsp+6998h] [rbp+6918h]
  __int64 v566; // [rsp+69A0h] [rbp+6920h]
  volatile signed __int64 **v567; // [rsp+69A8h] [rbp+6928h]
  _BYTE *v568; // [rsp+69B0h] [rbp+6930h]
  volatile signed __int64 **v569; // [rsp+69B8h] [rbp+6938h]
  volatile signed __int64 *v570; // [rsp+69C0h] [rbp+6940h]
  __int64 v571; // [rsp+69C8h] [rbp+6948h]
  char *v572; // [rsp+69D0h] [rbp+6950h]
  __int64 v573; // [rsp+69D8h] [rbp+6958h]
  __int64 v574; // [rsp+69E0h] [rbp+6960h]
  volatile signed __int64 **v575; // [rsp+69E8h] [rbp+6968h]
  _BYTE *v576; // [rsp+69F0h] [rbp+6970h]
  volatile signed __int64 **v577; // [rsp+69F8h] [rbp+6978h]
  volatile signed __int64 *v578; // [rsp+6A00h] [rbp+6980h]
  __int64 v579; // [rsp+6A08h] [rbp+6988h]
  volatile signed __int64 **v580; // [rsp+6A10h] [rbp+6990h]
  _BYTE *v581; // [rsp+6A18h] [rbp+6998h]
  volatile signed __int64 **v582; // [rsp+6A20h] [rbp+69A0h]
  volatile signed __int64 *v583; // [rsp+6A28h] [rbp+69A8h]
  __int64 v584; // [rsp+6A30h] [rbp+69B0h]
  char *v585; // [rsp+6A38h] [rbp+69B8h]
  __int64 v586; // [rsp+6A40h] [rbp+69C0h]
  volatile signed __int64 **v587; // [rsp+6A48h] [rbp+69C8h]
  _BYTE *v588; // [rsp+6A50h] [rbp+69D0h]
  volatile signed __int64 **v589; // [rsp+6A58h] [rbp+69D8h]
  volatile signed __int64 *v590; // [rsp+6A60h] [rbp+69E0h]
  __int64 v591; // [rsp+6A68h] [rbp+69E8h]
  char *v592; // [rsp+6A70h] [rbp+69F0h]
  __int64 v593; // [rsp+6A78h] [rbp+69F8h]
  __int64 v594; // [rsp+6A80h] [rbp+6A00h]
  __int64 v595; // [rsp+6A88h] [rbp+6A08h]
  volatile signed __int64 **v596; // [rsp+6A90h] [rbp+6A10h]
  _BYTE *v597; // [rsp+6A98h] [rbp+6A18h]
  volatile signed __int64 **v598; // [rsp+6AA0h] [rbp+6A20h]
  volatile signed __int64 *v599; // [rsp+6AA8h] [rbp+6A28h]
  const __m128i *v600; // [rsp+6AB0h] [rbp+6A30h]
  __int64 v601; // [rsp+6AB8h] [rbp+6A38h]
  volatile signed __int64 **v602; // [rsp+6AC0h] [rbp+6A40h]
  _BYTE *v603; // [rsp+6AC8h] [rbp+6A48h]
  volatile signed __int64 **v604; // [rsp+6AD0h] [rbp+6A50h]
  volatile signed __int64 *v605; // [rsp+6AD8h] [rbp+6A58h]
  __int64 v606; // [rsp+6AE0h] [rbp+6A60h]
  char *v607; // [rsp+6AE8h] [rbp+6A68h]
  const __m128i *v608; // [rsp+6AF0h] [rbp+6A70h]
  __m128i *v609; // [rsp+6AF8h] [rbp+6A78h]
  const __m128i *v610; // [rsp+6B00h] [rbp+6A80h]
  __int64 v611; // [rsp+6B08h] [rbp+6A88h]
  volatile signed __int64 **v612; // [rsp+6B10h] [rbp+6A90h]
  _BYTE *v613; // [rsp+6B18h] [rbp+6A98h]
  volatile signed __int64 **v614; // [rsp+6B20h] [rbp+6AA0h]
  volatile signed __int64 *v615; // [rsp+6B28h] [rbp+6AA8h]
  __int64 v616; // [rsp+6B30h] [rbp+6AB0h]
  char *v617; // [rsp+6B38h] [rbp+6AB8h]
  const __m128i *v618; // [rsp+6B40h] [rbp+6AC0h]
  __m128i *v619; // [rsp+6B48h] [rbp+6AC8h]
  __int64 v620; // [rsp+6B50h] [rbp+6AD0h]
  __int64 v621; // [rsp+6B58h] [rbp+6AD8h]
  unsigned __int64 v622; // [rsp+6B60h] [rbp+6AE0h]
  __int64 v623; // [rsp+6B68h] [rbp+6AE8h]
  __int64 v624; // [rsp+6B70h] [rbp+6AF0h]
  volatile signed __int64 **v625; // [rsp+6B78h] [rbp+6AF8h]
  _BYTE *v626; // [rsp+6B80h] [rbp+6B00h]
  volatile signed __int64 **v627; // [rsp+6B88h] [rbp+6B08h]
  volatile signed __int64 *v628; // [rsp+6B90h] [rbp+6B10h]
  __int64 v629; // [rsp+6B98h] [rbp+6B18h]
  _BYTE *v630; // [rsp+6BA0h] [rbp+6B20h]
  __int64 v631; // [rsp+6BA8h] [rbp+6B28h]
  unsigned __int64 v632; // [rsp+6BB0h] [rbp+6B30h]
  const __m128i *v633; // [rsp+6BB8h] [rbp+6B38h]
  __int64 v634; // [rsp+6BC0h] [rbp+6B40h]
  volatile signed __int64 **v635; // [rsp+6BC8h] [rbp+6B48h]
  _BYTE *v636; // [rsp+6BD0h] [rbp+6B50h]
  volatile signed __int64 **v637; // [rsp+6BD8h] [rbp+6B58h]
  volatile signed __int64 *v638; // [rsp+6BE0h] [rbp+6B60h]
  __int64 v639; // [rsp+6BE8h] [rbp+6B68h]
  char *v640; // [rsp+6BF0h] [rbp+6B70h]
  const __m128i *v641; // [rsp+6BF8h] [rbp+6B78h]
  __m128i *v642; // [rsp+6C00h] [rbp+6B80h]
  __int64 v643; // [rsp+6C08h] [rbp+6B88h]
  volatile signed __int64 **v644; // [rsp+6C10h] [rbp+6B90h]
  _BYTE *v645; // [rsp+6C18h] [rbp+6B98h]
  volatile signed __int64 **v646; // [rsp+6C20h] [rbp+6BA0h]
  volatile signed __int64 *v647; // [rsp+6C28h] [rbp+6BA8h]
  __int64 v648; // [rsp+6C30h] [rbp+6BB0h]
  char *v649; // [rsp+6C38h] [rbp+6BB8h]
  volatile signed __int64 **v650; // [rsp+6C40h] [rbp+6BC0h]
  __int64 v651; // [rsp+6C48h] [rbp+6BC8h]
  char *v652; // [rsp+6C50h] [rbp+6BD0h]
  __int64 v653; // [rsp+6C58h] [rbp+6BD8h]
  __int64 v654; // [rsp+6C60h] [rbp+6BE0h]
  volatile signed __int64 **v655; // [rsp+6C68h] [rbp+6BE8h]
  _BYTE *v656; // [rsp+6C70h] [rbp+6BF0h]
  volatile signed __int64 **v657; // [rsp+6C78h] [rbp+6BF8h]
  volatile signed __int64 *v658; // [rsp+6C80h] [rbp+6C00h]
  __int64 v659; // [rsp+6C88h] [rbp+6C08h]
  char *v660; // [rsp+6C90h] [rbp+6C10h]
  int v661; // [rsp+6C98h] [rbp+6C18h]
  int v662; // [rsp+6C9Ch] [rbp+6C1Ch]
  __int64 v663; // [rsp+6CA0h] [rbp+6C20h]
  char *v664; // [rsp+6CA8h] [rbp+6C28h]
  const __m128i *v665; // [rsp+6CB0h] [rbp+6C30h]
  __int64 v666; // [rsp+6CB8h] [rbp+6C38h]
  volatile signed __int64 **v667; // [rsp+6CC0h] [rbp+6C40h]
  _BYTE *v668; // [rsp+6CC8h] [rbp+6C48h]
  volatile signed __int64 **v669; // [rsp+6CD0h] [rbp+6C50h]
  volatile signed __int64 *v670; // [rsp+6CD8h] [rbp+6C58h]
  __int64 v671; // [rsp+6CE0h] [rbp+6C60h]
  char *v672; // [rsp+6CE8h] [rbp+6C68h]
  char *v673; // [rsp+6CF0h] [rbp+6C70h]
  __int64 v674; // [rsp+6CF8h] [rbp+6C78h]
  unsigned __int64 v675; // [rsp+6D00h] [rbp+6C80h]
  __int64 v676; // [rsp+6D08h] [rbp+6C88h]
  __int64 v677; // [rsp+6D10h] [rbp+6C90h]
  volatile signed __int64 **v678; // [rsp+6D18h] [rbp+6C98h]
  _BYTE *v679; // [rsp+6D20h] [rbp+6CA0h]
  volatile signed __int64 **v680; // [rsp+6D28h] [rbp+6CA8h]
  volatile signed __int64 *v681; // [rsp+6D30h] [rbp+6CB0h]
  __int64 v682; // [rsp+6D38h] [rbp+6CB8h]
  char *v683; // [rsp+6D40h] [rbp+6CC0h]
  __int64 v684; // [rsp+6D48h] [rbp+6CC8h]
  __int64 v685; // [rsp+6D50h] [rbp+6CD0h]
  volatile signed __int64 **v686; // [rsp+6D58h] [rbp+6CD8h]
  _BYTE *v687; // [rsp+6D60h] [rbp+6CE0h]
  volatile signed __int64 **v688; // [rsp+6D68h] [rbp+6CE8h]
  volatile signed __int64 *v689; // [rsp+6D70h] [rbp+6CF0h]
  __int64 v690; // [rsp+6D78h] [rbp+6CF8h]
  char *v691; // [rsp+6D80h] [rbp+6D00h]
  int v692; // [rsp+6D8Ch] [rbp+6D0Ch]
  int v693; // [rsp+6D90h] [rbp+6D10h]
  int v694; // [rsp+6D94h] [rbp+6D14h]
  __int64 v695; // [rsp+6D98h] [rbp+6D18h]
  volatile signed __int64 **v696; // [rsp+6DA0h] [rbp+6D20h]
  _BYTE *v697; // [rsp+6DA8h] [rbp+6D28h]
  volatile signed __int64 **v698; // [rsp+6DB0h] [rbp+6D30h]
  volatile signed __int64 *v699; // [rsp+6DB8h] [rbp+6D38h]
  __int64 v700; // [rsp+6DC0h] [rbp+6D40h]
  char *v701; // [rsp+6DC8h] [rbp+6D48h]
  __int64 v702; // [rsp+6DD0h] [rbp+6D50h]
  char *v703; // [rsp+6DD8h] [rbp+6D58h]
  __int64 v704; // [rsp+6DE0h] [rbp+6D60h]
  char *v705; // [rsp+6DE8h] [rbp+6D68h]
  __int64 v706; // [rsp+6DF0h] [rbp+6D70h]
  char *v707; // [rsp+6DF8h] [rbp+6D78h]
  __int64 v708; // [rsp+6E00h] [rbp+6D80h]
  _BYTE *v709; // [rsp+6E08h] [rbp+6D88h]
  __int64 v710; // [rsp+6E10h] [rbp+6D90h]
  unsigned __int64 v711; // [rsp+6E18h] [rbp+6D98h]
  __int64 v712; // [rsp+6E20h] [rbp+6DA0h]
  __int64 v713; // [rsp+6E28h] [rbp+6DA8h]
  volatile signed __int64 **v714; // [rsp+6E30h] [rbp+6DB0h]
  _BYTE *v715; // [rsp+6E38h] [rbp+6DB8h]
  volatile signed __int64 **v716; // [rsp+6E40h] [rbp+6DC0h]
  volatile signed __int64 *v717; // [rsp+6E48h] [rbp+6DC8h]
  __int64 v718; // [rsp+6E50h] [rbp+6DD0h]
  char *v719; // [rsp+6E58h] [rbp+6DD8h]
  __int64 v720; // [rsp+6E60h] [rbp+6DE0h]
  char *v721; // [rsp+6E68h] [rbp+6DE8h]
  __int64 v722; // [rsp+6E70h] [rbp+6DF0h]
  volatile signed __int64 **v723; // [rsp+6E78h] [rbp+6DF8h]
  __int64 v724; // [rsp+6E80h] [rbp+6E00h]
  char *v725; // [rsp+6E88h] [rbp+6E08h]
  __int64 v726; // [rsp+6E90h] [rbp+6E10h]
  __int64 v727; // [rsp+6E98h] [rbp+6E18h]
  char *v728; // [rsp+6EA0h] [rbp+6E20h]
  __int64 v729; // [rsp+6EA8h] [rbp+6E28h]
  char *v730; // [rsp+6EB0h] [rbp+6E30h]
  char v731; // [rsp+6EBFh] [rbp+6E3Fh] BYREF
  _BYTE *v732; // [rsp+6EC0h] [rbp+6E40h]
  __int128 v733; // [rsp+6EC8h] [rbp+6E48h]
  _BYTE *v734; // [rsp+6ED8h] [rbp+6E58h]
  const __m128i *v735; // [rsp+6EE0h] [rbp+6E60h]
  _WORD *v736; // [rsp+6EE8h] [rbp+6E68h]
  __int128 v737; // [rsp+6EF0h] [rbp+6E70h]
  __int64 v738; // [rsp+6F00h] [rbp+6E80h]
  __int64 v739; // [rsp+6F08h] [rbp+6E88h]
  char *v740; // [rsp+6F10h] [rbp+6E90h]
  const __m128i *v741; // [rsp+6F18h] [rbp+6E98h]
  _BYTE *v742; // [rsp+6F20h] [rbp+6EA0h]
  __int64 v743; // [rsp+6F28h] [rbp+6EA8h]
  __int64 v744; // [rsp+6F30h] [rbp+6EB0h]
  _WORD *v745; // [rsp+6F38h] [rbp+6EB8h]
  const __m128i *v746; // [rsp+6F40h] [rbp+6EC0h]
  const __m128i *v747; // [rsp+6F48h] [rbp+6EC8h]
  __int64 v748; // [rsp+6F50h] [rbp+6ED0h]
  unsigned __int64 v749; // [rsp+6F58h] [rbp+6ED8h]
  __m128i *v750; // [rsp+6F60h] [rbp+6EE0h]
  volatile signed __int64 **v751; // [rsp+6F68h] [rbp+6EE8h]
  __int64 v752; // [rsp+6F70h] [rbp+6EF0h]
  _BYTE *v753; // [rsp+6F78h] [rbp+6EF8h]
  __int64 v754; // [rsp+6F80h] [rbp+6F00h]
  volatile signed __int64 *v755; // [rsp+6F88h] [rbp+6F08h]
  volatile signed __int64 **v756; // [rsp+6F90h] [rbp+6F10h]
  char *v757; // [rsp+6F98h] [rbp+6F18h]
  __int64 v758; // [rsp+6FA0h] [rbp+6F20h]
  __int64 v759; // [rsp+6FA8h] [rbp+6F28h]

  v4.m128i_i64[0] = a1;
  v759 = -2;
  v8 = a3;
  v9 = a2;
  v10 = (__m128i *)v4.m128i_i64[0];
  v11 = *(unsigned __int8 *)(a2 + 476);
  v758 = a2;
  switch ( v11 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 472) = 0;
      *(_QWORD *)(a2 + 465) = 0;
      *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 456);
      v12 = sub_1408DBA10();
      v13 = v758;
      *(_BYTE *)(v758 + 464) = v12;
      sub_1408DC260(v341, *(_QWORD *)(v13 + 272), v12);
      v5 = *(_QWORD *)&v341[8];
      v4 = *(__m128i *)&v341[16];
      if ( v341[0] )
      {
        v14 = -1;
        v15 = *(volatile signed __int64 **)&v341[8];
        v16 = v758;
        goto LABEL_268;
      }
      *(_BYTE *)(v758 + 475) = 0;
      v356.m256i_i64[0] = v5;
      *(__m128i *)&v356.m256i_u64[1] = v4;
      v757 = (char *)v4.m128i_i64[0];
      v703 = (char *)v4.m128i_i64[0];
      v702 = v5;
      sub_141146320(v341, &v356);
      v6 = *(char **)v341;
      if ( *(_QWORD *)v341 == -1 )
      {
        v754 = v5;
        sub_1419234B0(&v356, &v341[8], 136);
        v333.m128i_i64[0] = (__int64)&v356;
        v333.m128i_i64[1] = (__int64)sub_1411437C0;
        sub_1416DAFA0(&v348, &unk_141A88E98, &v333);
        v703 = v757;
        v702 = v754;
        sub_140B6F750(&v356);
        v753 = (_BYTE *)v348.m128i_i64[1];
        v755 = (volatile signed __int64 *)v348.m128i_i64[0];
        v4.m128i_i64[1] = v349;
        v14 = -1;
        goto LABEL_204;
      }
      v7 = *(_QWORD *)&v341[24];
      sub_1419234B0(&v356, &v341[32], 192);
      v33 = _mm_loadu_si128((const __m128i *)&v341[8]);
      v9 = v758;
      *(_BYTE *)(v758 + 466) = 1;
      *(_QWORD *)v9 = v6;
      *(__m128i *)(v9 + 8) = v33;
      *(_QWORD *)(v9 + 24) = v7;
      sub_1419234B0(v9 + 32, &v356, 192);
      if ( *(_BYTE *)(v9 + 464) == 2 )
        goto LABEL_19;
      v81 = *(_QWORD *)(v9 + 272);
      v82 = *(_QWORD *)(v81 + 32);
      v83 = *(_QWORD *)(v81 + 40);
      v6 = v757;
      v728 = v757;
      v727 = v5;
      v84.m128i_i64[0] = sub_1408FEA60(v82, v83);
      v331 = v84;
      if ( !v84.m128i_i64[1] )
      {
        v728 = v6;
        v727 = v5;
        sub_140BE66D0(v341);
        v753 = *(_BYTE **)&v341[8];
        v755 = *(volatile signed __int64 **)v341;
        v4.m128i_i64[1] = *(_QWORD *)&v341[16];
        goto LABEL_201;
      }
      v333.m128i_i64[0] = (__int64)&v331;
      v333.m128i_i64[1] = (__int64)sub_140191200;
      v728 = v6;
      v727 = v5;
      sub_1416DAFA0(&v348, &unk_141A89410, &v333);
      v756 = (volatile signed __int64 **)v348.m128i_i64[0];
      v754 = v5;
      v752 = v348.m128i_i64[1];
      if ( !(_QWORD)v349 )
        goto LABEL_74;
      v85 = 0;
      break;
    case 1LL:
      sub_14196B990(&off_141A89488);
    case 2LL:
      sub_14196B9B0(&off_141A89488);
    case 3LL:
      v755 = (volatile signed __int64 *)(a2 + 11160);
      v23 = *(unsigned __int8 *)(a2 + 11160);
      v756 = (volatile signed __int64 **)(a2 + 480);
      switch ( v23 )
      {
        case 0LL:
          goto LABEL_20;
        case 1LL:
          v650 = v756;
          sub_14196B990(&off_141A88A38);
        case 2LL:
          JUMPOUT(0x140BD5AB8LL);
        case 3LL:
          v753 = (_BYTE *)(a2 + 11153);
          v25 = *(unsigned __int8 *)(a2 + 11153);
          v751 = (volatile signed __int64 **)(a2 + 704);
          switch ( v25 )
          {
            case 0LL:
              v26 = *(_BYTE *)(a2 + 11152);
              v27 = *(_QWORD *)(a2 + 704);
              v28 = a2 + 712;
              if ( v27 == -1 )
                goto LABEL_16;
              goto LABEL_21;
            case 1LL:
              v502 = v755;
              v501 = v756;
              v500 = v751;
              sub_14196B990(&off_141A88A50);
            case 2LL:
              v502 = v755;
              v501 = v756;
              v500 = v751;
              sub_14196B9B0(&off_141A88A50);
            case 3LL:
              v673 = (char *)(a2 + 1899);
              v80 = a2 + 1224;
              switch ( *(_BYTE *)(a2 + 1899) )
              {
                case 0:
                  v750 = (__m128i *)v4.m128i_i64[0];
                  v34 = a3;
                  v26 = *(_BYTE *)(a2 + 1898);
                  v42 = *(_QWORD *)(a2 + 1224);
                  v38 = a2 + 1224;
                  break;
                case 1:
                  v507 = v755;
                  v506 = v756;
                  v505 = v753;
                  v504 = v751;
                  v503 = a2 + 1224;
                  sub_14196B990(&off_141A895C8);
                case 2:
                  v507 = v755;
                  v506 = v756;
                  v505 = v753;
                  v504 = v751;
                  v503 = a2 + 1224;
                  sub_14196B9B0(&off_141A895C8);
                case 3:
                  v740 = (char *)(a2 + 1944);
                  v71 = (const __m128i *)(a2 + 1920);
                  switch ( *(_BYTE *)(a2 + 1944) )
                  {
                    case 0:
                      v752 = a2 + 1224;
                      v72 = (char *)(a2 + 1944);
                      goto LABEL_47;
                    case 1:
                      v578 = v755;
                      v577 = v756;
                      v576 = v753;
                      v575 = v751;
                      v574 = a2 + 1224;
                      v573 = a2 + 1920;
                      sub_14196B990(&off_141A88670);
                    case 2:
                      v578 = v755;
                      v577 = v756;
                      v576 = v753;
                      v575 = v751;
                      v574 = a2 + 1224;
                      v573 = a2 + 1920;
                      sub_14196B9B0(&off_141A88670);
                    case 3:
                      v747 = (const __m128i *)(a2 + 1920);
                      v752 = a2 + 1224;
                      v72 = (char *)(a2 + 1944);
                      goto LABEL_50;
                    case 4:
                      v110 = a2 + 2104;
                      v111 = *(unsigned __int8 *)(v9 + 2104);
                      v744 = v9 + 2000;
                      switch ( v111 )
                      {
                        case 0LL:
                          v112 = v744;
                          break;
                        case 1LL:
                          v599 = v755;
                          v598 = v756;
                          v597 = v753;
                          v596 = v751;
                          v595 = v9 + 1224;
                          v594 = v9 + 1920;
                          JUMPOUT(0x140BD5FA2LL);
                        case 2LL:
                          v599 = v755;
                          v598 = v756;
                          v597 = v753;
                          v596 = v751;
                          v595 = v9 + 1224;
                          v594 = v9 + 1920;
                          v593 = v744;
                          sub_14196B9B0(&off_141A89088);
                        case 3LL:
                          v749 = v9 + 2104;
                          v742 = (_BYTE *)(v9 + 2096);
                          v122 = *(unsigned __int8 *)(v9 + 2096);
                          v743 = v9 + 2032;
                          switch ( v122 )
                          {
                            case 0LL:
                              v123 = *(_QWORD *)(v9 + 2032);
                              v124 = *(_QWORD *)(v9 + 2040);
                              v125 = v742;
                              v126 = v743;
                              goto LABEL_297;
                            case 1LL:
                              v628 = v755;
                              v627 = v756;
                              v626 = v753;
                              v625 = v751;
                              v624 = v9 + 1224;
                              v623 = v9 + 1920;
                              v622 = v749;
                              v621 = v744;
                              v620 = v743;
                              sub_14196B990(&off_141A89070);
                            case 2LL:
                              v628 = v755;
                              v627 = v756;
                              v626 = v753;
                              v625 = v751;
                              v624 = v9 + 1224;
                              v623 = v9 + 1920;
                              v622 = v749;
                              v621 = v744;
                              v620 = v743;
                              sub_14196B9B0(&off_141A89070);
                            case 3LL:
                              v747 = (const __m128i *)(v9 + 1920);
                              v752 = v9 + 1224;
                              v151 = *(_QWORD *)(v9 + 2088);
                              goto LABEL_299;
                          }
                      }
                      goto LABEL_295;
                  }
                case 4:
                  v93 = (char *)(a2 + 2600);
                  v94 = *(unsigned __int8 *)(a2 + 2600);
                  v748 = a2 + 1904;
                  v752 = a2 + 1224;
                  switch ( v94 )
                  {
                    case 0LL:
                      v730 = (char *)(a2 + 2600);
                      v750 = *(__m128i **)(a2 + 1952);
                      v5 = a2 + 1904;
                      goto LABEL_340;
                    case 1LL:
                      v513 = v755;
                      v512 = v756;
                      v511 = v753;
                      v510 = v751;
                      v509 = a2 + 1224;
                      v508 = v748;
                      sub_14196B990(&off_141A889A8);
                    case 2LL:
                      v513 = v755;
                      v512 = v756;
                      v511 = v753;
                      v510 = v751;
                      v509 = a2 + 1224;
                      v508 = v748;
                      sub_14196B9B0(&off_141A889A8);
                    case 3LL:
                      goto LABEL_98;
                    case 4LL:
                      v730 = (char *)(a2 + 2600);
                      v116 = (__m128i *)(a2 + 2649);
                      v117 = a2 + 2608;
                      if ( *(_BYTE *)(a2 + 2649) )
                      {
                        if ( *(_BYTE *)(a2 + 2649) == 1 )
                        {
                          v556 = v755;
                          v555 = v756;
                          v554 = v753;
                          v553 = v751;
                          v552 = v752;
                          v551 = v748;
                          v550 = a2 + 2649;
                          v549 = a2 + 2608;
                          sub_14196B990(&off_141A88B10);
                        }
                        v556 = v755;
                        v555 = v756;
                        v554 = v753;
                        v553 = v751;
                        v552 = v752;
                        v551 = v748;
                        v550 = a2 + 2649;
                        v549 = a2 + 2608;
                        sub_14196B9B0(&off_141A88B10);
                      }
                      LOBYTE(v118) = *(_BYTE *)(a2 + 2648);
                      goto LABEL_102;
                    case 5LL:
                      goto LABEL_96;
                    case 6LL:
                      v749 = a2 + 11144;
                      v113 = a2 + 2608;
                      switch ( *(_BYTE *)(a2 + 11144) )
                      {
                        case 0:
                          v730 = (char *)(a2 + 2600);
                          goto LABEL_112;
                        case 1:
                          v520 = v755;
                          v519 = v756;
                          v518 = v753;
                          v517 = v751;
                          v516 = a2 + 1224;
                          v515 = v748;
                          v514 = a2 + 2608;
                          sub_14196B990(&off_141A88558);
                        case 2:
                          v520 = v755;
                          v519 = v756;
                          v518 = v753;
                          v517 = v751;
                          v516 = a2 + 1224;
                          JUMPOUT(0x140BD6008LL);
                        case 3:
                          v732 = (_BYTE *)(a2 + 11136);
                          v136 = a2 + 4008;
                          switch ( *(_BYTE *)(a2 + 11136) )
                          {
                            case 0:
                              v730 = (char *)(a2 + 2600);
                              break;
                            case 1:
                              v529 = v755;
                              v528 = v756;
                              v527 = v753;
                              v526 = v751;
                              v525 = a2 + 1224;
                              v524 = v748;
                              v523 = v749;
                              v522 = a2 + 2608;
                              v521 = a2 + 4008;
                              sub_14196B990(&off_141A88AE0);
                            case 2:
                              v529 = v755;
                              v528 = v756;
                              v527 = v753;
                              v526 = v751;
                              v525 = a2 + 1224;
                              v524 = v748;
                              v523 = v749;
                              v522 = a2 + 2608;
                              v521 = a2 + 4008;
                              sub_14196B9B0(&off_141A88AE0);
                            case 3:
                              v725 = (char *)(a2 + 6808);
                              v137 = a2 + 5408;
                              switch ( *(_BYTE *)(a2 + 6808) )
                              {
                                case 0:
                                  v730 = (char *)(a2 + 2600);
                                  goto LABEL_114;
                                case 1:
                                  v540 = v755;
                                  v539 = v756;
                                  v538 = v753;
                                  v537 = v751;
                                  v536 = v752;
                                  v535 = v748;
                                  v534 = v749;
                                  v533 = a2 + 2608;
                                  v532 = v732;
                                  v531 = a2 + 4008;
                                  v530 = a2 + 5408;
                                  sub_14196B990(&off_141A88AF8);
                                case 2:
                                  v540 = v755;
                                  v539 = v756;
                                  v538 = v753;
                                  v537 = v751;
                                  v536 = v752;
                                  v535 = v748;
                                  v534 = v749;
                                  v533 = a2 + 2608;
                                  v532 = v732;
                                  v531 = a2 + 4008;
                                  v530 = a2 + 5408;
                                  sub_14196B9B0(&off_141A88AF8);
                                case 3:
                                  v726 = a2 + 5408;
                                  v729 = a2 + 4008;
                                  v739 = a2 + 2608;
                                  goto LABEL_115;
                                case 4:
                                  v726 = a2 + 5408;
                                  v729 = a2 + 4008;
                                  v739 = a2 + 2608;
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
      v750 = (__m128i *)v4.m128i_i64[0];
      v17 = (_BYTE *)(a2 + 488);
      v18 = *(volatile signed __int64 ***)(a2 + 488);
      if ( v18 != (volatile signed __int64 **)-1LL )
      {
        v755 = *(volatile signed __int64 **)(a2 + 488);
        v19 = v8;
        goto LABEL_212;
      }
      v49 = *(volatile signed __int64 ***)(a2 + 528);
      goto LABEL_217;
    case 5LL:
      goto LABEL_6;
  }
  do
  {
    v86 = *(_BYTE *)(v348.m128i_i64[1] + v85);
    if ( v86 > 0x1Fu )
    {
      if ( v86 == 127 )
        goto LABEL_65;
    }
    else if ( v86 != 9 )
    {
LABEL_65:
      v348.m128i_i64[0] = (__int64)&v731;
      v348.m128i_i64[1] = (__int64)sub_14167F5E0;
      sub_1416DAFA0(&v356, &unk_141A88ED4, &v348);
      v753 = (_BYTE *)v356.m256i_i64[1];
      v755 = (volatile signed __int64 *)v356.m256i_i64[0];
      v4.m128i_i64[1] = v356.m256i_i64[2];
      v16 = v758;
      v5 = v754;
      v6 = v757;
      if ( !v756 )
        goto LABEL_202;
      sub_140001660(v752, v756, 1);
      v14 = -1;
      if ( *(_BYTE *)(v16 + 466) )
        goto LABEL_203;
      goto LABEL_267;
    }
    ++v85;
  }
  while ( (_QWORD)v349 != v85 );
LABEL_74:
  sub_141682400(v341, v348.m128i_i64[1]);
  v341[32] = 0;
  v96 = _mm_loadu_si128((const __m128i *)v341);
  *(_OWORD *)&v356.m256i_u64[2] = *(_OWORD *)&v341[16];
  *(__m128i *)v356.m256i_i8 = v96;
  *(_QWORD *)&v357 = *(_QWORD *)&v341[32];
  v753 = (_BYTE *)v96.m128i_i64[1];
  v97 = v96.m128i_i64[0];
  v98 = *(_QWORD *)&v341[16];
  v7 = v356.m256i_i64[3];
  LODWORD(v321) = *(_DWORD *)((char *)&v357 + 1);
  *(_DWORD *)((char *)&v321 + 3) = DWORD1(v357);
  v100 = v758;
  if ( v756 )
    sub_140001660(v752, v756, 1);
  *(_QWORD *)v341 = v97;
  *(_QWORD *)&v341[8] = v753;
  *(_QWORD *)&v341[16] = v98;
  *(_QWORD *)&v341[24] = v7;
  v341[32] = 0;
  *(_DWORD *)&v341[33] = v321;
  *(_DWORD *)&v341[36] = *(_DWORD *)((char *)&v321 + 3);
  v349 = xmmword_141A89430;
  v348 = _mm_loadu_si128((const __m128i *)&xmmword_141A89420);
  v101 = v757;
  v728 = v757;
  v727 = v754;
  v102 = v100;
  v5 = v754;
  sub_140651620(&v356, v102, &v348, v341);
  if ( (_BYTE)v357 != 2 )
  {
    v103 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v356.m256i_i64[0] + 32);
    v728 = v101;
    v727 = v5;
    v103(&v356.m256i_u64[3], v356.m256i_i64[1], v356.m256i_i64[2]);
  }
  v349 = xmmword_141A89450;
  v348 = _mm_loadu_si128((const __m128i *)&xmmword_141A89440);
  *(_QWORD *)v341 = off_141A89EC8;
  *(_QWORD *)&v341[8] = aAimamiTypemami;
  *(_OWORD *)&v341[16] = 0xFu;
  v341[32] = 0;
  v728 = v101;
  v727 = v5;
  sub_140651620(&v356, v758, &v348, v341);
  if ( (_BYTE)v357 != 2 )
  {
    v104 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v356.m256i_i64[0] + 32);
    v728 = v101;
    v727 = v5;
    v104(&v356.m256i_u64[3], v356.m256i_i64[1], v356.m256i_i64[2]);
  }
  v9 = v758;
LABEL_19:
  *(_BYTE *)(v9 + 466) = 0;
  v756 = (volatile signed __int64 **)(v9 + 480);
  sub_1419234B0(v9 + 480, v9, 224);
  v755 = (volatile signed __int64 *)(v9 + 11160);
  *(_BYTE *)(v9 + 11160) = 0;
LABEL_20:
  v751 = (volatile signed __int64 **)(v9 + 704);
  sub_1419234B0(v9 + 704, v756, 224);
  *(_QWORD *)(v9 + 928) = 2;
  *(_WORD *)(v9 + 11152) = 0;
  v753 = (_BYTE *)(v9 + 11153);
  v26 = 0;
  v27 = *(_QWORD *)(v9 + 704);
  v28 = v9 + 712;
  if ( v27 == -1 )
  {
LABEL_16:
    *(_QWORD *)&v737 = v8;
    v754 = v5;
    sub_1419234B0(v9 + 1008, v28, 136);
    *(_QWORD *)(v9 + 1000) = -1;
    v29 = *(_QWORD *)(v9 + 1008);
    v30 = v9;
    v31 = *(_QWORD *)(v9 + 1016);
    *((_QWORD *)&v737 + 1) = *(_QWORD *)(v30 + 1024);
    v745 = *(_WORD **)(v30 + 1032);
    v736 = *(_WORD **)(v30 + 1040);
    v735 = *(const __m128i **)(v30 + 1048);
    v741 = *(const __m128i **)(v30 + 1056);
    v746 = *(const __m128i **)(v30 + 1064);
    v733 = *(_OWORD *)(v30 + 1072);
    v747 = *(const __m128i **)(v30 + 1088);
    v740 = *(char **)(v30 + 1096);
    v742 = *(_BYTE **)(v30 + 1104);
    v734 = *(_BYTE **)(v30 + 1112);
    v744 = *(_QWORD *)(v30 + 1120);
    v738 = *(_QWORD *)(v30 + 1128);
    v743 = *(_QWORD *)(v30 + 1136);
    v32 = 2;
    goto LABEL_199;
  }
LABEL_21:
  v750 = v10;
  v34 = v8;
  *(_QWORD *)(v9 + 1000) = v27;
  sub_1419234B0(v9 + 1008, v28, 136);
  v35 = *(_OWORD *)(v9 + 864);
  v36 = *(_OWORD *)(v9 + 880);
  v37 = *(_OWORD *)(v9 + 896);
  *(_OWORD *)(v9 + 1144) = *(_OWORD *)(v9 + 848);
  *(_OWORD *)(v9 + 1160) = v35;
  *(_OWORD *)(v9 + 1176) = v36;
  *(_OWORD *)(v9 + 1192) = v37;
  *(_OWORD *)(v9 + 1208) = *(_OWORD *)(v9 + 912);
  sub_1419234B0(&v341[8], v9 + 1000, 224);
  sub_1419234B0(v317, v341, 232);
  v38 = v9 + 1224;
  *(_QWORD *)(v9 + 1224) = 0;
  sub_1419234B0(v9 + 1232, v317, 232);
  v39 = *(_OWORD *)(v9 + 944);
  v40 = *(_OWORD *)(v9 + 960);
  v41 = *(_OWORD *)(v9 + 976);
  *(_OWORD *)(v9 + 1464) = *(_OWORD *)(v9 + 928);
  *(_OWORD *)(v9 + 1480) = v39;
  *(_OWORD *)(v9 + 1496) = v40;
  *(_OWORD *)(v9 + 1512) = v41;
  *(_QWORD *)(v9 + 1528) = *(_QWORD *)(v9 + 992);
  *(_BYTE *)(v9 + 1898) = v26;
  v673 = (char *)(v9 + 1899);
  *(_BYTE *)(v9 + 1899) = 0;
  v42 = 0;
LABEL_22:
  *(_BYTE *)(v9 + 1902) = 1;
  sub_1419234B0(v9 + 1536, v9 + 1240, 224);
  *(_OWORD *)(v9 + 1760) = *(_OWORD *)(v9 + 1464);
  *(_OWORD *)(v9 + 1776) = *(_OWORD *)(v9 + 1480);
  *(_OWORD *)(v9 + 1792) = *(_OWORD *)(v9 + 1496);
  *(__m128i *)(v9 + 1808) = _mm_loadu_si128((const __m128i *)(v9 + 1512));
  *(_QWORD *)(v9 + 1824) = *(_QWORD *)(v9 + 1528);
  *(_BYTE *)(v9 + 1900) = v26;
  *(_BYTE *)(v9 + 1901) = 1;
  v43 = *(_QWORD *)(v9 + 1232);
  *(_QWORD *)(v9 + 1904) = v42;
  *(_QWORD *)(v9 + 1912) = v43;
  v649 = v757;
  v648 = v5;
  v647 = v755;
  v646 = v756;
  v645 = v753;
  v644 = v751;
  v752 = v38;
  v643 = v38;
  sub_140BDD3F0(v341, v9 + 1536);
  v29 = *(_QWORD *)v341;
  v45 = *(_QWORD *)&v341[24];
  v44 = *(_QWORD *)&v341[16];
  *(_QWORD *)&v737 = v34;
  v754 = v5;
  if ( *(_QWORD *)v341 != -1 )
  {
    v745 = *(_WORD **)&v341[24];
    *((_QWORD *)&v737 + 1) = *(_QWORD *)&v341[16];
    v735 = *(const __m128i **)&v341[40];
    v736 = *(_WORD **)&v341[32];
    v746 = *(const __m128i **)&v341[56];
    v741 = *(const __m128i **)&v341[48];
    v9 = *(_QWORD *)&v341[72];
    *(_QWORD *)&v733 = *(_QWORD *)&v341[64];
    v740 = *(char **)&v341[88];
    v747 = *(const __m128i **)&v341[80];
    v742 = *(_BYTE **)&v341[96];
    v744 = v342.m128i_i64[1];
    v734 = (_BYTE *)v342.m128i_i64[0];
    v738 = v343.m128i_i64[0];
    v46 = *(_WORD *)&v341[8];
    v47 = *(_QWORD *)&v341[8] >> 16;
    v743 = v343.m128i_i64[1];
    v48 = (_QWORD *)v758;
    v10 = v750;
LABEL_193:
    v168 = v754;
    if ( v48[238] )
    {
      v169 = *(volatile signed __int64 **)(v758 + 1912);
      if ( v169 )
      {
        if ( !_InterlockedDecrement64(v169) )
        {
          v592 = v757;
          v591 = v168;
          v590 = v755;
          v589 = v756;
          v588 = v753;
          v587 = v751;
          v586 = v752;
          sub_1413018E0(v758 + 1912, v44);
        }
      }
    }
    *((_QWORD *)&v733 + 1) = v9;
    v170 = v758;
    *(_BYTE *)(v758 + 1901) = 0;
    v585 = v757;
    v584 = v168;
    v583 = v755;
    v582 = v756;
    v581 = v753;
    v580 = v751;
    v171 = v752;
    v579 = v752;
    sub_1406C0020(v170 + 1536);
    v32 = 2;
    v172 = (_BYTE *)v758;
    goto LABEL_198;
  }
  v62 = v758;
  *(_QWORD *)(v758 + 1832) = *(_QWORD *)&v341[8];
  *(_QWORD *)(v62 + 1840) = v44;
  *(_QWORD *)(v62 + 1848) = v45;
  v63 = (_BYTE *)(v62 + 1632);
  v701 = v757;
  v700 = v5;
  v699 = v755;
  v698 = v756;
  v697 = v753;
  v696 = v751;
  v695 = v752;
  v64 = sub_14167EA50(v62 + 1632);
  v10 = v750;
  v8 = v737;
  if ( v64 == 1 )
  {
    v66 = v65;
    *(_QWORD *)&v341[8] = 0x8000000000000003uLL;
    *(_QWORD *)v341 = 12;
    v67 = v757;
    goto LABEL_46;
  }
  v48 = (_QWORD *)v758;
  v67 = v757;
  if ( *v63 != 2 )
  {
LABEL_67:
    v745 = *(_WORD **)&v341[24];
    *((_QWORD *)&v737 + 1) = *(_QWORD *)&v341[16];
    v735 = *(const __m128i **)&v341[40];
    v736 = *(_WORD **)&v341[32];
    v746 = *(const __m128i **)&v341[56];
    v741 = *(const __m128i **)&v341[48];
    v9 = *(_QWORD *)&v341[72];
    *(_QWORD *)&v733 = *(_QWORD *)&v341[64];
    v87 = *(char **)&v341[88];
    v88 = *(const __m128i **)&v341[80];
    v89 = *(_BYTE **)&v341[96];
    v90 = v342.m128i_i64[1];
    v734 = (_BYTE *)v342.m128i_i64[0];
    v92 = v343.m128i_i64[1];
    v91 = v343.m128i_i64[0];
    v29 = 12;
    v47 = 0x800000000000LL;
    v46 = 3;
    goto LABEL_290;
  }
  v105 = *(_QWORD *)(v758 + 1640);
  v106 = *(_WORD **)(v105 + 8);
  v107 = *(_QWORD *)(v105 + 16);
  if ( v107 == 2 )
  {
    v109 = (unsigned __int16)__ROL2__(*v106, 8) - 30579;
    v66 = 80;
  }
  else
  {
    if ( v107 != 3 )
      goto LABEL_67;
    v108 = __ROL2__(*v106, 8);
    if ( v108 == 30579 )
      v109 = *((unsigned __int8 *)v106 + 2) - 115;
    else
      v109 = 2 * (v108 >= 0x7773u) - 1;
    v66 = 443;
  }
  *(_QWORD *)&v341[8] = 0x8000000000000003uLL;
  *(_QWORD *)v341 = 12;
  if ( v109 )
    goto LABEL_67;
LABEL_46:
  v701 = v67;
  v700 = v754;
  v699 = v755;
  v698 = v756;
  v697 = v753;
  v696 = v751;
  v695 = v752;
  sub_140B6F750(v341);
  v68 = v758 + 1832;
  v69 = v758 + 1896;
  *(_WORD *)(v758 + 1896) = v66;
  *(_QWORD *)v341 = v68;
  *(_QWORD *)&v341[8] = sub_1400015F0;
  *(_QWORD *)&v341[16] = v69;
  *(_QWORD *)&v341[24] = sub_1416EA1B0;
  v701 = v757;
  v700 = v754;
  v699 = v755;
  v698 = v756;
  v697 = v753;
  v696 = v751;
  v695 = v752;
  sub_1416DAFA0(&v356, &unk_141A895C0, v341);
  v322 = v356.m256i_i64[2];
  v70 = *(_OWORD *)v356.m256i_i8;
  v321 = *(_OWORD *)v356.m256i_i8;
  v9 = v758;
  v71 = (const __m128i *)(v758 + 1920);
  *(_QWORD *)(v758 + 1936) = v356.m256i_i64[2];
  *(_OWORD *)(v9 + 1920) = v70;
  v72 = (char *)(v9 + 1944);
  *(_BYTE *)(v9 + 1944) = 0;
LABEL_47:
  *(_WORD *)(v9 + 1945) = 0;
  v332 = v71[1].m128i_i64[0];
  v747 = v71;
  v331 = _mm_loadu_si128(v71);
  sub_141542770(v341, &v331);
  if ( v331.m128i_i64[0] )
    sub_140001660(v331.m128i_i64[1], v331.m128i_i64[0], 1);
  v73 = _mm_loadu_si128((const __m128i *)v341);
  *(_OWORD *)&v356.m256i_u64[2] = *(_OWORD *)&v341[16];
  *(__m128i *)v356.m256i_i8 = v73;
  v9 = v758;
  *(_OWORD *)(v758 + 1968) = *(_OWORD *)&v341[16];
  *(__m128i *)(v9 + 1952) = v73;
LABEL_50:
  v745 = (_WORD *)(v9 + 1952);
  sub_1415458E0(v341, v9 + 1952, v8, a4);
  v5 = *(unsigned int *)v341;
  if ( *(_DWORD *)v341 == -1 )
  {
    v95 = 3;
    goto LABEL_326;
  }
  v740 = v72;
  v74 = *(_DWORD *)&v341[4];
  v750 = *(__m128i **)&v341[8];
  v746 = *(const __m128i **)&v341[24];
  v75 = _mm_loadu_si128((const __m128i *)&v341[16]);
  v76 = *(_QWORD *)&v341[32];
  if ( *v745 == 0xFFFF )
  {
    v672 = v757;
    v671 = v754;
    v670 = v755;
    v669 = v756;
    v668 = v753;
    v667 = v751;
    v666 = v752;
    v665 = v747;
    sub_140B615A0(v758 + 1960);
  }
  if ( (_DWORD)v5 == 2 )
  {
    v77 = 2;
    v78 = (__int64)v750;
    v79 = v758;
    goto LABEL_334;
  }
  v99 = v758;
  *(_WORD *)(v758 + 1945) = 1;
  *(_QWORD *)(v99 + 1952) = 0;
  LODWORD(v745) = v5;
  *(_DWORD *)(v99 + 1960) = v5;
  *(_DWORD *)(v99 + 1964) = v74;
  *(_QWORD *)(v99 + 1968) = v750;
  *(__m128i *)(v99 + 1976) = v75;
  *(_QWORD *)(v99 + 1992) = v76;
  while ( 1 )
  {
    v241 = (_DWORD *)(v99 + 1960);
    v692 = (int)v745;
    v609 = v750;
    v608 = v746;
    v607 = v757;
    v606 = v754;
    v605 = v755;
    v604 = v756;
    v603 = v753;
    v602 = v751;
    v601 = v752;
    v71 = v747;
    v600 = v747;
    sub_141545E30(&v348, v99 + 1960);
    if ( v348.m128i_i16[0] == 2 )
      break;
    v243 = (__m128i *)v758;
    v112 = v758 + 2000;
    v244 = v348;
    *(_OWORD *)(v758 + 2016) = v349;
    v243[125] = v244;
    v110 = (unsigned __int64)&v243[131].m128i_u64[1];
    v243[131].m128i_i8[8] = 0;
    v80 = v752;
LABEL_295:
    v245 = _mm_loadu_si128((const __m128i *)v112);
    *(_OWORD *)&v356.m256i_u64[2] = *(_OWORD *)(v112 + 16);
    *(__m128i *)v356.m256i_i8 = v245;
    v662 = (int)v745;
    v481 = v750;
    v480 = v746;
    v479 = v757;
    v478 = v754;
    v477 = v755;
    v476 = v756;
    v475 = v753;
    v474 = v751;
    v473 = v80;
    v472 = v71;
    v749 = v110;
    v471 = v110;
    v744 = v112;
    v470 = v112;
    sub_141551410(v341, &v356);
    v124 = *(_QWORD *)&v341[8];
    v123 = *(_QWORD *)v341;
    if ( *(_QWORD *)v341 == -1 )
    {
      v747 = v71;
      v752 = v80;
      goto LABEL_307;
    }
    v246 = v758;
    v126 = v758 + 2032;
    *(_OWORD *)(v758 + 2032) = *(_OWORD *)v341;
    v125 = (_BYTE *)(v246 + 2096);
    *(_BYTE *)(v246 + 2096) = 0;
LABEL_297:
    v694 = (int)v745;
    v642 = v750;
    v641 = v746;
    v640 = v757;
    v639 = v754;
    v638 = v755;
    v637 = v756;
    v636 = v753;
    v635 = v751;
    v634 = v80;
    v747 = v71;
    v633 = v71;
    v632 = v749;
    v631 = v744;
    v742 = v125;
    v630 = v125;
    v629 = v126;
    sub_14154A140(v341, v123, v124);
    v124 = *(_QWORD *)&v341[8];
    if ( *(_QWORD *)v341 == 2 )
      goto LABEL_305;
    v743 = v126;
    v752 = v80;
    v334 = *(_QWORD *)&v341[32];
    v333 = *(__m128i *)&v341[16];
    v247 = (__m128i *)v758;
    v151 = v758 + 2048;
    *(_OWORD *)(v758 + 2048) = *(_OWORD *)v341;
    v247[129] = _mm_load_si128(&v333);
    v247[130].m128i_i64[0] = v334;
    v247[130].m128i_i64[1] = v151;
LABEL_299:
    sub_141549510(v341, v151, v8);
    if ( v341[9] == 0xFF )
    {
      *v742 = 3;
LABEL_325:
      *(_BYTE *)v749 = 3;
      v95 = 4;
      v72 = v740;
LABEL_326:
      *v72 = v95;
      v141 = 3;
      v16 = v758;
      v140 = v673;
LABEL_327:
      *v140 = v141;
      *v753 = 3;
      *(_BYTE *)v755 = 3;
      v10->m128i_i64[0] = -2;
      result = 3;
      goto LABEL_269;
    }
    v248 = *(_QWORD *)v341;
    if ( v341[9] == 2 )
      goto LABEL_304;
    if ( *(_QWORD *)(v758 + 2072) == -1 )
      sub_14196B5D0(&off_141A4E170);
    if ( (sub_1415513F0(v758 + 2072, *(_QWORD *)v341) & 1) != 0 || v248 )
    {
LABEL_304:
      v631 = v744;
      v629 = v743;
      v694 = (int)v745;
      v642 = v750;
      v641 = v746;
      v640 = v757;
      v639 = v754;
      v638 = v755;
      v637 = v756;
      v636 = v753;
      v635 = v751;
      v80 = v752;
      v634 = v752;
      v633 = v747;
      v632 = v749;
      v630 = v742;
      v249 = v248;
      sub_140B71930(v758 + 2048);
      v124 = v249;
LABEL_305:
      v752 = v80;
      *v742 = 1;
LABEL_307:
      *(_BYTE *)v749 = 1;
      goto LABEL_308;
    }
    v77 = *(_QWORD *)(v758 + 2048);
    v124 = *(_QWORD *)(v758 + 2056);
    v5 = *(_QWORD *)(v758 + 2064);
    v9 = *(_QWORD *)(v758 + 2072);
    v738 = *(_QWORD *)(v758 + 2080);
    *(_BYTE *)(v758 + 2096) = 1;
    v251 = v747;
    if ( v77 == -1 )
      goto LABEL_325;
    *(_BYTE *)v749 = 1;
    if ( v77 != 2 )
    {
      v252 = v758;
      if ( *(_DWORD *)(v758 + 1960) )
      {
        v253 = *(_QWORD *)(v758 + 1984);
        if ( v253 )
        {
          v254 = v124;
          sub_140001660(*(_QWORD *)(v758 + 1968), 32 * v253, 4);
          v124 = v254;
          v251 = v747;
        }
      }
      v255 = *(_QWORD *)(v252 + 1952);
      if ( v255 && (unsigned int)(v255 & 3) - 2 >= 2 && (v255 & 3) != 0 )
      {
        v256 = v124;
        *(_QWORD *)&v341[8] = v255 - 1;
        v341[0] = 3;
        v693 = (int)v745;
        v619 = v750;
        v618 = v746;
        v617 = v757;
        v616 = v754;
        v615 = v755;
        v614 = v756;
        v613 = v753;
        v612 = v751;
        v611 = v752;
        v610 = v251;
        sub_1416EBAD0(&v341[8]);
        v124 = v256;
      }
      v78 = v124;
      v79 = v758;
      *(_BYTE *)(v758 + 1945) = 0;
      goto LABEL_334;
    }
LABEL_308:
    v250 = *(_QWORD *)(v758 + 1952);
    if ( v250 )
    {
      v749 = v124;
      if ( (unsigned int)(v250 & 3) - 2 >= 2 && (v250 & 3) != 0 )
      {
        *(_QWORD *)&v341[8] = v250 - 1;
        v341[0] = 3;
        sub_1416EBAD0(&v341[8]);
      }
      v124 = v749;
    }
    v99 = v758;
    *(_BYTE *)(v758 + 1945) = 1;
    *(_QWORD *)(v99 + 1952) = v124;
  }
  v79 = v758;
  if ( *v241 )
  {
    v257 = *(_QWORD *)(v758 + 1984);
    if ( v257 )
      sub_140001660(*(_QWORD *)(v758 + 1968), 32 * v257, 4);
  }
  *(_BYTE *)(v79 + 1945) = 0;
  v258 = *(_QWORD *)(v79 + 1952);
  if ( !v258 )
  {
    v661 = (int)v745;
    v469 = v750;
    v468 = v746;
    v467 = v757;
    v466 = v754;
    v465 = v755;
    v464 = v756;
    v463 = v753;
    v462 = v751;
    v461 = v752;
    v460 = v71;
    LOBYTE(v242) = 20;
    v258 = sub_1416A8370(v242, aCouldNotResolv_3, 32);
    v79 = v758;
  }
  v78 = v258;
  *(_BYTE *)(v79 + 1945) = 0;
  v77 = 2;
LABEL_334:
  *(_BYTE *)(v79 + 1946) = 0;
  *(_BYTE *)(v79 + 1944) = 1;
  v701 = v757;
  v700 = v754;
  v699 = v755;
  v698 = v756;
  v697 = v753;
  v696 = v751;
  v695 = v752;
  sub_140B6C100(v747);
  v259 = v78;
  v88 = (const __m128i *)v738;
  if ( v77 == 2 )
  {
LABEL_338:
    *(_QWORD *)&v737 = v8;
    v46 = v259;
    v47 = v259 >> 16;
    v29 = 5;
    v48 = (_QWORD *)v758;
LABEL_290:
    v743 = v92;
    v738 = v91;
    v744 = v90;
    v742 = v89;
    v740 = v87;
    v747 = v88;
    v44 = v48[229];
    if ( v44 )
      sub_140001660(v48[230], v44, 1);
    goto LABEL_193;
  }
  v260 = v758;
  v261 = (__m128i *)(v758 + 1856);
  *(_QWORD *)(v758 + 1856) = v77;
  *(_QWORD *)(v260 + 1864) = v259;
  *(_QWORD *)(v260 + 1872) = v5;
  *(_QWORD *)(v260 + 1880) = v9;
  *(_QWORD *)(v260 + 1888) = v88;
  v9 = v260;
  if ( *(_BYTE *)(v260 + 1900) == 1 )
  {
    v750 = v261;
    LOBYTE(v87) = 1;
    v262 = sub_14154A000(v261, v87);
    v9 = v758;
    v261 = v750;
    if ( v262 )
    {
      v701 = v757;
      v700 = v754;
      v699 = v755;
      v698 = v756;
      v697 = v753;
      v696 = v751;
      v695 = v752;
      v259 = v262;
      sub_140B71930(v750);
      goto LABEL_338;
    }
  }
  *(_BYTE *)(v9 + 1902) = 0;
  sub_1419234B0(v318, v9 + 1536, 224);
  v263 = *(_OWORD *)(v9 + 1776);
  v264 = *(_OWORD *)(v9 + 1792);
  v265 = *(_OWORD *)(v9 + 1808);
  v405 = *(_OWORD *)(v9 + 1760);
  v406 = v263;
  v407 = v264;
  v408 = v265;
  v409 = *(_QWORD *)(v9 + 1824);
  *(_BYTE *)(v9 + 1901) = 0;
  v5 = v9 + 1904;
  v266 = *(_QWORD *)(v9 + 1904);
  v267 = *(__m128i **)(v9 + 1912);
  v268 = v261[1];
  *(__m128i *)(v9 + 1904) = *v261;
  *(__m128i *)(v9 + 1920) = v268;
  *(_QWORD *)(v9 + 1936) = v261[2].m128i_i64[0];
  *(_QWORD *)(v9 + 1944) = v266;
  v750 = v267;
  *(_QWORD *)(v9 + 1952) = v267;
  sub_1419234B0(v9 + 1960, v318, 224);
  v269 = v406;
  v270 = v407;
  v271 = v408;
  *(_OWORD *)(v9 + 2184) = v405;
  *(_OWORD *)(v9 + 2200) = v269;
  *(_OWORD *)(v9 + 2216) = v270;
  *(_OWORD *)(v9 + 2232) = v271;
  *(_QWORD *)(v9 + 2248) = v409;
  v730 = (char *)(v9 + 2600);
  *(_BYTE *)(v9 + 2600) = 0;
LABEL_340:
  *(_BYTE *)(v9 + 2601) = 0;
  v272 = *(_QWORD *)(v9 + 1960);
  v724 = *(_QWORD *)(v9 + 1968);
  v737 = *(_OWORD *)(v9 + 1976);
  v745 = *(_WORD **)(v9 + 1992);
  v273 = *(_WORD **)(v9 + 2000);
  v735 = *(const __m128i **)(v9 + 2008);
  v274 = *(const __m128i **)(v9 + 2016);
  v746 = *(const __m128i **)(v9 + 2024);
  v275 = *(_QWORD *)(v9 + 2032);
  v276 = *(_QWORD *)(v9 + 2040);
  v747 = *(const __m128i **)(v9 + 2048);
  v277 = *(char **)(v9 + 2056);
  v742 = *(_BYTE **)(v9 + 2064);
  v278 = *(_BYTE **)(v9 + 2072);
  v744 = *(_QWORD *)(v9 + 2080);
  v279 = *(_QWORD *)(v9 + 2088);
  v743 = *(_QWORD *)(v9 + 2096);
  *(_BYTE *)(v9 + 2603) = 1;
  v430 = *(_QWORD *)(v5 + 32);
  v280 = *(_OWORD *)v5;
  v429 = *(_OWORD *)(v5 + 16);
  v428 = v280;
  *(_QWORD *)(v9 + 2320) = *(_QWORD *)(v9 + 2248);
  *(_OWORD *)(v9 + 2304) = *(_OWORD *)(v9 + 2232);
  *(_OWORD *)(v9 + 2288) = *(_OWORD *)(v9 + 2216);
  *(_OWORD *)(v9 + 2272) = *(_OWORD *)(v9 + 2200);
  *(__m128i *)(v9 + 2256) = _mm_loadu_si128((const __m128i *)(v9 + 2184));
  *(_BYTE *)(v9 + 2602) = 1;
  v281 = *(_QWORD *)(v9 + 1944);
  *(_QWORD *)(v9 + 2328) = v281;
  *(_QWORD *)(v9 + 2336) = v750;
  v748 = v5;
  if ( v272 == -1 )
  {
    v738 = v279;
    v734 = v278;
    v740 = v277;
    *((_QWORD *)&v733 + 1) = v276;
    *(_QWORD *)&v733 = v275;
    v741 = v274;
    v736 = v273;
    v118 = v737;
    v749 = (unsigned __int64)v737 >> 8;
    v93 = v757;
    v287 = v746;
    v146 = v724;
    v286 = v754;
    v288 = v745;
LABEL_350:
    v144 = v748;
    if ( v281 )
    {
      if ( *(_BYTE *)(v758 + 2602) )
      {
        v293 = v758 + 2336;
        v294 = *(volatile signed __int64 **)(v758 + 2336);
        if ( v294 )
        {
          if ( !_InterlockedDecrement64(v294) )
          {
            v660 = v93;
            v659 = v286;
            v658 = v755;
            v657 = v756;
            v656 = v753;
            v655 = v751;
            v654 = v752;
            v653 = v144;
            v724 = v146;
            *(_QWORD *)&v737 = v118;
            v118 = (unsigned __int64)v287;
            v295 = v286;
            v296 = v288;
            sub_1413018E0(v293, v287);
            v288 = v296;
            v286 = v295;
            v287 = (const __m128i *)v118;
            LOBYTE(v118) = v737;
            v146 = v724;
          }
        }
      }
    }
    v746 = v287;
    v745 = v288;
    v297 = v758;
    *(_BYTE *)(v758 + 2602) = 0;
    if ( *(_BYTE *)(v297 + 2603) )
    {
      v548 = v93;
      v547 = v286;
      v546 = v755;
      v545 = v756;
      v544 = v753;
      v543 = v751;
      v542 = v752;
      v541 = v144;
      sub_140B71930(&v428);
    }
    *(_QWORD *)&v737 = v8;
    v754 = v286;
    *(_BYTE *)(v758 + 2603) = 0;
    v32 = 2;
    goto LABEL_358;
  }
  *(_QWORD *)(v9 + 2344) = v272;
  *(_QWORD *)(v9 + 2352) = v724;
  *(_OWORD *)(v9 + 2360) = v737;
  *(_QWORD *)(v9 + 2376) = v745;
  *(_QWORD *)(v9 + 2384) = v273;
  *(_QWORD *)(v9 + 2392) = v735;
  *(_QWORD *)(v9 + 2400) = v274;
  *(_QWORD *)(v9 + 2408) = v746;
  *(_QWORD *)(v9 + 2416) = v275;
  *(_QWORD *)(v9 + 2424) = v276;
  *(_QWORD *)(v9 + 2432) = v747;
  *(_QWORD *)(v9 + 2440) = v277;
  *(_QWORD *)(v9 + 2448) = v742;
  *(_QWORD *)(v9 + 2456) = v278;
  *(_QWORD *)(v9 + 2464) = v744;
  *(_QWORD *)(v9 + 2472) = v279;
  *(_QWORD *)(v9 + 2480) = v743;
  v282 = *(_OWORD *)(v9 + 2120);
  v283 = *(_OWORD *)(v9 + 2136);
  v284 = *(_OWORD *)(v9 + 2152);
  *(_OWORD *)(v9 + 2488) = *(_OWORD *)(v9 + 2104);
  *(_OWORD *)(v9 + 2504) = v282;
  *(_OWORD *)(v9 + 2520) = v283;
  *(_OWORD *)(v9 + 2536) = v284;
  *(__m128i *)(v9 + 2552) = _mm_loadu_si128((const __m128i *)(v9 + 2168));
  v93 = v757;
  v572 = v757;
  v571 = v754;
  v570 = v755;
  v569 = v756;
  v568 = v753;
  v567 = v751;
  v566 = v752;
  v565 = v5;
  sub_140BDD3F0(v341, v9 + 2344);
  v118 = *(_QWORD *)&v341[8];
  v146 = *(_QWORD *)v341;
  v285 = *(_OWORD *)&v341[16];
  if ( *(_QWORD *)v341 != -1 )
  {
    v745 = *(_WORD **)&v341[24];
    *((_QWORD *)&v737 + 1) = *(_QWORD *)&v341[16];
    v735 = *(const __m128i **)&v341[40];
    v736 = *(_WORD **)&v341[32];
    v746 = *(const __m128i **)&v341[56];
    v741 = *(const __m128i **)&v341[48];
    v733 = *(_OWORD *)&v341[64];
    v740 = *(char **)&v341[88];
    v747 = *(const __m128i **)&v341[80];
    v742 = *(_BYTE **)&v341[96];
    v744 = v342.m128i_i64[1];
    v734 = (_BYTE *)v342.m128i_i64[0];
    v738 = v343.m128i_i64[0];
    v749 = *(_QWORD *)&v341[8] >> 8;
    v743 = v343.m128i_i64[1];
    v9 = v758;
    v286 = v754;
    goto LABEL_349;
  }
  v289 = v758;
  v290 = v758 + 2440;
  *(_BYTE *)(v758 + 2601) = 1;
  *(_QWORD *)(v289 + 2568) = v118;
  *(_OWORD *)(v289 + 2576) = v285;
  v691 = v93;
  v690 = v754;
  v689 = v755;
  v688 = v756;
  v687 = v753;
  v686 = v751;
  v685 = v752;
  v684 = v5;
  sub_141149910(v341, v290);
  v146 = *(_QWORD *)v341;
  v118 = v341[8];
  if ( *(_QWORD *)v341 != -1 )
  {
    v749 = ((unsigned __int64)((v341[15] << 16) | (unsigned int)*(unsigned __int16 *)&v341[13]) << 32)
         | *(unsigned int *)&v341[9];
    v745 = *(_WORD **)&v341[24];
    *((_QWORD *)&v737 + 1) = *(_QWORD *)&v341[16];
    v735 = *(const __m128i **)&v341[40];
    v120 = *(_QWORD *)&v341[32];
    v746 = *(const __m128i **)&v341[56];
    v741 = *(const __m128i **)&v341[48];
    v733 = *(_OWORD *)&v341[64];
    v149 = *(_OWORD *)&v341[80];
    v147 = *(_BYTE **)&v341[96];
    v148 = v342.m128i_i64[1];
    v734 = (_BYTE *)v342.m128i_i64[0];
    v150 = (unsigned __int128)v343;
    v9 = v758;
    goto LABEL_346;
  }
  v9 = v758;
  v301 = v758 + 2568;
  a2 = v754;
  if ( *(_DWORD *)(v758 + 2328) == 1 )
  {
    *(_BYTE *)(v758 + 2602) = 0;
    v302 = *(_QWORD *)(v9 + 2336);
    *(_QWORD *)(v9 + 2592) = v302;
    if ( v302 )
    {
      *(_BYTE *)(v9 + 2603) = 0;
      *(_QWORD *)&v341[32] = v430;
      *(_OWORD *)&v341[16] = v429;
      *(_OWORD *)v341 = v428;
      *(_BYTE *)(v9 + 2601) = 0;
      *(_OWORD *)&v341[40] = *(_OWORD *)v301;
      *(_QWORD *)&v341[56] = *(_QWORD *)(v301 + 16);
      si128 = _mm_load_si128((const __m128i *)v341);
      v304 = *(_OWORD *)&v341[16];
      *(__m128i *)v356.m256i_i8 = si128;
      *(_OWORD *)&v356.m256i_u64[2] = *(_OWORD *)&v341[16];
      v305 = *(_OWORD *)&v341[32];
      v357 = *(_OWORD *)&v341[32];
      v358 = *(_OWORD *)&v341[48];
      *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v341[48];
      *(_OWORD *)(v9 + 2640) = v305;
      *(_OWORD *)(v9 + 2624) = v304;
      *(__m128i *)(v9 + 2608) = si128;
      *(_QWORD *)(v9 + 2672) = v302;
      *(_BYTE *)(v9 + 3824) = v118;
      *(_BYTE *)(v9 + 3825) = 0;
      v93 = v730;
LABEL_98:
      v750 = (__m128i *)(v9 + 2608);
      sub_140BC5270(v341, v9 + 2608, v8);
      v114 = *(_QWORD *)v341;
      if ( *(_QWORD *)v341 == -2 )
      {
        v115 = 3;
        goto LABEL_118;
      }
      goto LABEL_107;
    }
    *(_BYTE *)(v9 + 2603) = 0;
    v117 = v9 + 2608;
    v309 = v429;
    *(_OWORD *)(v9 + 2608) = v428;
    *(_OWORD *)(v9 + 2624) = v309;
    *(_QWORD *)(v9 + 2640) = v430;
    *(_BYTE *)(v9 + 2648) = v118;
    v116 = (__m128i *)(v9 + 2649);
    *(_BYTE *)(v9 + 2649) = 0;
LABEL_102:
    *(_QWORD *)&v341[32] = *(_QWORD *)(v117 + 32);
    v119 = _mm_loadu_si128((const __m128i *)v117);
    *(_OWORD *)&v341[16] = *(_OWORD *)(v117 + 16);
    *(__m128i *)v341 = v119;
    v754 = a2;
    if ( (v118 & 1) != 0 )
    {
      v746 = (const __m128i *)v117;
      v750 = v116;
      v757 = v93;
      v120 = sub_140B71930(v341);
      v121 = _mm_load_si128((const __m128i *)&xmmword_141A85A30);
      v114 = -1;
      v9 = v758;
      v93 = v757;
      v116 = v750;
    }
    else
    {
      v121 = _mm_load_si128((const __m128i *)v341);
      *((_QWORD *)&v737 + 1) = *(_QWORD *)(v9 + 2624);
      v745 = *(_WORD **)(v9 + 2632);
      v114 = 2;
      v120 = *(_QWORD *)&v341[32];
    }
    v116->m128i_i8[0] = 1;
  }
  else
  {
    *(_BYTE *)(v758 + 2603) = 0;
    *(_QWORD *)&v341[32] = v430;
    *(_OWORD *)&v341[16] = v429;
    *(_OWORD *)v341 = v428;
    *(_BYTE *)(v9 + 2601) = 0;
    *(_OWORD *)&v341[40] = *(_OWORD *)v301;
    *(_QWORD *)&v341[56] = *(_QWORD *)(v301 + 16);
    v306 = _mm_load_si128((const __m128i *)v341);
    v307 = *(_OWORD *)&v341[16];
    *(__m128i *)v356.m256i_i8 = v306;
    *(_OWORD *)&v356.m256i_u64[2] = *(_OWORD *)&v341[16];
    v308 = *(_OWORD *)&v341[32];
    v357 = *(_OWORD *)&v341[32];
    v358 = *(_OWORD *)&v341[48];
    *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v341[48];
    *(_OWORD *)(v9 + 2640) = v308;
    *(_OWORD *)(v9 + 2624) = v307;
    *(__m128i *)(v9 + 2608) = v306;
    *(_QWORD *)(v9 + 2672) = 0;
    *(_BYTE *)(v9 + 3824) = v118;
    *(_BYTE *)(v9 + 3825) = 0;
    v93 = v730;
LABEL_96:
    v750 = (__m128i *)(v9 + 2608);
    sub_140BC5270(v341, v9 + 2608, v8);
    v114 = *(_QWORD *)v341;
    if ( *(_QWORD *)v341 == -2 )
    {
      v115 = 5;
LABEL_118:
      v140 = v673;
      *v93 = v115;
      v141 = 4;
      v16 = v758;
      goto LABEL_327;
    }
LABEL_107:
    v730 = v93;
    v121 = _mm_loadu_si128((const __m128i *)&v341[8]);
    *((_QWORD *)&v737 + 1) = *(_QWORD *)&v341[24];
    v736 = *(_WORD **)&v341[40];
    v745 = *(_WORD **)&v341[32];
    v741 = *(const __m128i **)&v341[56];
    v735 = *(const __m128i **)&v341[48];
    v128 = *(_QWORD *)&v341[72];
    v127 = *(_QWORD *)&v341[64];
    v747 = *(const __m128i **)&v341[88];
    *((_QWORD *)&v733 + 1) = *(_QWORD *)&v341[80];
    v740 = *(char **)&v341[96];
    v734 = (_BYTE *)v342.m128i_i64[1];
    v742 = (_BYTE *)v342.m128i_i64[0];
    v738 = v343.m128i_i64[1];
    v744 = v343.m128i_i64[0];
    v743 = v344;
    sub_1419234B0(v316, v345, 960);
    v93 = v757;
    v691 = v757;
    v690 = v754;
    v689 = v755;
    v688 = v756;
    v687 = v753;
    v686 = v751;
    v685 = v752;
    v684 = v748;
    sub_140B6CBF0(v750);
    v9 = v758;
    v120 = (__int64)v736;
    a2 = v127;
    v5 = v128;
  }
  v746 = (const __m128i *)a2;
  if ( (_DWORD)v114 == -1 )
  {
    *(_QWORD *)&v733 = v5;
    v118 = _mm_shuffle_epi32(v121, 238).m128i_u64[0];
    v749 = v118 >> 8;
    v146 = v121.m128i_i64[0];
    v147 = v742;
    v148 = v744;
    v149 = __PAIR128__((unsigned __int64)v740, (unsigned __int64)v747);
    v150 = __PAIR128__(v743, v738);
LABEL_346:
    v286 = v754;
    v736 = (_WORD *)v120;
    v291 = *(_BYTE *)(v9 + 2601) == 0;
    v740 = (char *)(v149 >> 64);
    v747 = (const __m128i *)v149;
    v742 = v147;
    v744 = v148;
    v743 = v150 >> 64;
    v738 = v150;
    if ( !v291 )
    {
      v292 = *(_QWORD *)(v9 + 2568);
      if ( v292 )
        sub_140001660(*(_QWORD *)(v9 + 2576), v292, 1);
    }
LABEL_349:
    *(_BYTE *)(v9 + 2601) = 0;
    v564 = v93;
    v563 = v286;
    v562 = v755;
    v561 = v756;
    v560 = v753;
    v559 = v751;
    v558 = v752;
    v557 = v748;
    sub_1406C0020(v9 + 2344);
    v281 = *(_QWORD *)(v758 + 2328);
    v288 = v745;
    v287 = v746;
    goto LABEL_350;
  }
  v757 = v93;
  v129 = v120;
  v113 = v9 + 2608;
  sub_1419234B0(v9 + 2608, v9 + 2344, 224);
  *(_QWORD *)(v9 + 2832) = v114;
  *(__m128i *)(v9 + 2840) = v121;
  *(_QWORD *)(v9 + 2856) = *((_QWORD *)&v737 + 1);
  *(_QWORD *)(v9 + 2864) = v745;
  *(_QWORD *)(v9 + 2872) = v129;
  *(_QWORD *)(v9 + 2880) = v735;
  *(_QWORD *)(v9 + 2888) = v741;
  *(_QWORD *)(v9 + 2896) = v746;
  *(_QWORD *)(v9 + 2904) = v5;
  *(_QWORD *)(v9 + 2912) = *((_QWORD *)&v733 + 1);
  *(_QWORD *)(v9 + 2920) = v747;
  *(_QWORD *)(v9 + 2928) = v740;
  *(_QWORD *)(v9 + 2936) = v742;
  *(_QWORD *)(v9 + 2944) = v734;
  *(_QWORD *)(v9 + 2952) = v744;
  *(_QWORD *)(v9 + 2960) = v738;
  *(_QWORD *)(v9 + 2968) = v743;
  sub_1419234B0(v9 + 2976, v316, 960);
  v130 = *(_OWORD *)(v9 + 2272);
  v131 = *(_OWORD *)(v9 + 2288);
  v132 = *(_OWORD *)(v9 + 2304);
  *(_OWORD *)(v9 + 3936) = *(_OWORD *)(v9 + 2256);
  *(_OWORD *)(v9 + 3952) = v130;
  *(_OWORD *)(v9 + 3968) = v131;
  *(_OWORD *)(v9 + 3984) = v132;
  *(_QWORD *)(v9 + 4000) = *(_QWORD *)(v9 + 2320);
  v749 = v9 + 11144;
  *(_BYTE *)(v9 + 11144) = 0;
LABEL_112:
  sub_1419234B0(&v356, v113, 224);
  sub_1419234B0(v341, v9 + 2832, 1104);
  v133 = *(_OWORD *)(v9 + 3952);
  v134 = *(_OWORD *)(v9 + 3968);
  v135 = *(_OWORD *)(v9 + 3984);
  v369 = _mm_loadu_si128((const __m128i *)(v9 + 3936));
  v370 = v133;
  v371 = v134;
  v372 = v135;
  v373 = *(_QWORD *)(v9 + 4000);
  sub_1419234B0(v346, &v356, 296);
  v136 = v9 + 4008;
  sub_1419234B0(v9 + 4008, v341, 7128);
  v732 = (_BYTE *)(v9 + 11136);
  *(_BYTE *)(v9 + 11136) = 0;
LABEL_113:
  sub_1419234B0(&v356, v136, 1104);
  sub_1419234B0(v375, v9 + 5112, 296);
  sub_1419234B0(&v333, &v356, 1400);
  v137 = v9 + 5408;
  sub_1419234B0(v9 + 5408, &v333, 1400);
  v725 = (char *)(v9 + 6808);
  *(_BYTE *)(v9 + 6808) = 0;
LABEL_114:
  v729 = v136;
  v739 = v113;
  v726 = v137;
  sub_1419234B0(v374, v137, 1104);
  sub_1419234B0(&v356, v9 + 6512, 296);
  sub_1419234B0(&v348, &v356, 1400);
  sub_1419234B0(v9 + 6816, &v348, 1400);
  v93 = v730;
LABEL_115:
  v488 = (_DWORD *)(v9 + 6816);
  sub_140B62E50(&v356, v9 + 6816, v8);
  v138 = v356.m256i_i64[0];
  if ( v356.m256i_i64[0] == -2 )
  {
    v139 = 3;
LABEL_117:
    *v725 = v139;
    *v732 = 3;
    *(_BYTE *)v749 = 3;
    v115 = 6;
    goto LABEL_118;
  }
  v730 = v93;
  v724 = v356.m256i_i64[1];
  v737 = *(_OWORD *)&v356.m256i_u64[2];
  v736 = *((_WORD **)&v357 + 1);
  v745 = (_WORD *)v357;
  v142 = *((const __m128i **)&v358 + 1);
  v735 = (const __m128i *)v358;
  v746 = *(const __m128i **)v359;
  v733 = *(_OWORD *)&v359[8];
  v747 = v360;
  v740 = v361;
  v742 = v362;
  v734 = v363;
  v744 = v364;
  v738 = v365;
  v743 = (__int64)v366;
  v750 = (__m128i *)v367;
  sub_1419234B0(&v321, v368, 1152);
  sub_1419234B0(v329, v376, 208);
  v143 = v488;
  v144 = v748;
  v145 = v739;
  if ( *v488 != -1 )
  {
    sub_1406C0020(v488);
    if ( *(_DWORD *)(v758 + 7112) == 2 )
    {
      v719 = v757;
      v718 = v754;
      v717 = v755;
      v716 = v756;
      v715 = v753;
      v714 = v751;
      v713 = v752;
      v144 = v748;
      v712 = v748;
      v711 = v749;
      v145 = v739;
      v710 = v739;
      v709 = v732;
      v708 = v729;
      v707 = v725;
      v706 = v726;
      sub_140B71930(v758 + 7120);
    }
    else
    {
      sub_140B71930(v758 + 7112);
      v719 = v757;
      v718 = v754;
      v717 = v755;
      v716 = v756;
      v715 = v753;
      v714 = v751;
      v713 = v752;
      v144 = v748;
      v712 = v748;
      v711 = v749;
      v145 = v739;
      v710 = v739;
      v709 = v732;
      v708 = v729;
      v707 = v725;
      v706 = v726;
      sub_140B71E30(v758 + 7152);
    }
  }
  if ( (_DWORD)v138 == -1 )
  {
    v158 = v758;
    *(_QWORD *)(v758 + 8336) = v724;
    *(_OWORD *)(v158 + 8344) = v737;
    *(_QWORD *)(v158 + 8360) = v745;
    *(_QWORD *)(v158 + 8368) = v736;
    *(_QWORD *)(v158 + 8376) = v735;
    *(_QWORD *)(v158 + 8384) = v142;
    *(_QWORD *)(v158 + 8392) = v746;
    *(_OWORD *)(v158 + 8400) = v733;
    *(_QWORD *)(v158 + 8416) = v747;
    *(_QWORD *)(v158 + 8424) = v740;
    *(_QWORD *)(v158 + 8432) = v742;
    *(_QWORD *)(v158 + 8440) = v734;
    *(_QWORD *)(v158 + 8448) = v744;
    *(_QWORD *)(v158 + 8456) = v738;
    *(_QWORD *)(v158 + 8464) = v743;
    *(_QWORD *)(v158 + 8472) = v750;
    v157 = v142;
    sub_1419234B0(v158 + 8480, &v321, 1152);
    *(_QWORD *)(v158 + 8328) = -1;
    sub_1419234B0(&v331, &v321, 1152);
    v32 = 2;
  }
  else
  {
    v9 = v758;
    *(_QWORD *)(v758 + 8328) = v138;
    v152 = v143;
    v153 = v724;
    *(_QWORD *)(v9 + 8336) = v724;
    v154 = v737;
    *(_OWORD *)(v9 + 8344) = v737;
    v155 = v142;
    v156 = v745;
    *(_QWORD *)(v9 + 8360) = v745;
    *(_QWORD *)(v9 + 8368) = v736;
    *(_QWORD *)(v9 + 8376) = v735;
    v741 = v155;
    *(_QWORD *)(v9 + 8384) = v155;
    *(_QWORD *)(v9 + 8392) = v746;
    *(_OWORD *)(v9 + 8400) = v733;
    *(_QWORD *)(v9 + 8416) = v747;
    *(_QWORD *)(v9 + 8424) = v740;
    *(_QWORD *)(v9 + 8432) = v742;
    *(_QWORD *)(v9 + 8440) = v734;
    *(_QWORD *)(v9 + 8448) = v744;
    *(_QWORD *)(v9 + 8456) = v738;
    *(_QWORD *)(v9 + 8464) = v743;
    *(_QWORD *)(v9 + 8472) = v750;
    sub_1419234B0(v9 + 8480, &v321, 1152);
    sub_1419234B0(v9 + 9632, v329, 208);
    sub_1419234B0(v152, v9 + 8328, 1512);
    v32 = *(_QWORD *)(v9 + 6816);
    if ( v32 == 2 )
    {
      *(_QWORD *)(v9 + 9840) = v153;
      *(_QWORD *)(v9 + 9848) = v154;
      *(_QWORD *)(v9 + 9856) = *((_QWORD *)&v737 + 1);
      *(_QWORD *)(v9 + 9864) = v156;
      *(_QWORD *)(v9 + 9872) = v736;
      *(_QWORD *)(v9 + 9880) = v735;
      *(_QWORD *)(v9 + 9888) = v741;
      *(_QWORD *)(v9 + 9896) = v746;
      *(_OWORD *)(v9 + 9904) = v733;
      *(_QWORD *)(v9 + 9920) = v747;
      *(_QWORD *)(v9 + 9928) = v740;
      *(_QWORD *)(v9 + 9936) = v742;
      *(_QWORD *)(v9 + 9944) = v734;
      *(_QWORD *)(v9 + 9952) = v744;
      *(_QWORD *)(v9 + 9960) = v738;
      *(_QWORD *)(v9 + 9968) = v743;
      *(_QWORD *)(v9 + 9976) = v750;
      sub_1419234B0(v9 + 9984, &v321, 1152);
      v93 = v730;
LABEL_130:
      v741 = (const __m128i *)(v9 + 9840);
      sub_140B4FAB0(&v356, v9 + 9840, v8);
      v32 = v356.m256i_i64[0];
      if ( v356.m256i_i64[0] == -1 )
      {
        v139 = 4;
        goto LABEL_117;
      }
      v730 = v93;
      v724 = v356.m256i_i64[1];
      v737 = *(_OWORD *)&v356.m256i_u64[2];
      v736 = *((_WORD **)&v357 + 1);
      v745 = (_WORD *)v357;
      v157 = *((const __m128i **)&v358 + 1);
      v735 = (const __m128i *)v358;
      v746 = *(const __m128i **)v359;
      v733 = *(_OWORD *)&v359[8];
      v747 = v360;
      v740 = v361;
      v742 = v362;
      v734 = v363;
      v744 = v364;
      v738 = v365;
      v743 = (__int64)v366;
      v750 = (__m128i *)v367;
      sub_1419234B0(&v331, v368, 1152);
      sub_1419234B0(v328, v376, 208);
      if ( v741->m128i_i32[0] != -1 )
      {
        v719 = v757;
        v718 = v754;
        v717 = v755;
        v716 = v756;
        v715 = v753;
        v714 = v751;
        v713 = v752;
        v144 = v748;
        v712 = v748;
        v711 = v749;
        v145 = v739;
        v710 = v739;
        v709 = v732;
        v708 = v729;
        v707 = v725;
        v706 = v726;
        ((void (*)(void))sub_140B6AFE0)();
        goto LABEL_144;
      }
      v144 = v748;
    }
    else
    {
      sub_1419234B0(&v331, &v321, 1152);
      sub_1419234B0(v328, v329, 208);
      v144 = v748;
      v157 = v741;
    }
    v145 = v739;
  }
LABEL_144:
  v741 = v157;
  sub_1419234B0(v311, &v331, 1152);
  sub_1419234B0(v338, v328, 208);
  *v725 = 1;
  v159 = v757;
  v459 = v757;
  v458 = v754;
  v457 = v755;
  v456 = v756;
  v455 = v753;
  v454 = v751;
  v453 = v752;
  v452 = v144;
  v451 = v749;
  v450 = v145;
  v449 = v732;
  v448 = v729;
  sub_140B6CA50(v726);
  sub_1419234B0(v319, v311, 1152);
  v118 = v737;
  if ( (_DWORD)v32 != 2 )
  {
    v394 = v339;
    v160 = _mm_loadu_si128(v338);
    v393 = v338[3];
    v392 = v338[2];
    v391 = v338[1];
    v390 = v160;
    sub_1419234B0(v330, v340, 136);
  }
  sub_1419234B0(v325, v330, 136);
  *v732 = 1;
  v683 = v159;
  v682 = v754;
  v681 = v755;
  v680 = v756;
  v679 = v753;
  v678 = v751;
  v677 = v752;
  v676 = v144;
  v675 = v749;
  v674 = v145;
  sub_140B6C970(v729);
  if ( (_DWORD)v32 == 2 )
  {
    v739 = v145;
    v748 = v144;
    v161 = v742;
    if ( v724 == -1 )
    {
      v163 = *((_QWORD *)&v737 + 1);
      v724 = v737;
      *((_QWORD *)&v737 + 1) = v745;
      v745 = v736;
      v164 = v746;
      v746 = (const __m128i *)v733;
      v742 = v734;
      v118 = v163;
      v736 = v735;
      v735 = v741;
      v741 = v164;
      *(_QWORD *)&v733 = *((_QWORD *)&v733 + 1);
      *((_QWORD *)&v733 + 1) = v747;
      v747 = (const __m128i *)v740;
      v740 = v161;
      v734 = (_BYTE *)v744;
      v744 = v738;
      v738 = v743;
      v743 = (__int64)v750;
      v159 = v757;
      v144 = v748;
      v145 = v739;
    }
    else
    {
      v356.m256i_i64[0] = v724;
      *(_OWORD *)&v356.m256i_u64[1] = v737;
      v356.m256i_i64[3] = (__int64)v745;
      *(_QWORD *)&v357 = v736;
      *((_QWORD *)&v357 + 1) = v735;
      *(_QWORD *)&v358 = v741;
      *((_QWORD *)&v358 + 1) = v746;
      *(_OWORD *)v359 = v733;
      *(_QWORD *)&v359[16] = v747;
      v360 = (const __m128i *)v740;
      v361 = v742;
      v362 = v734;
      v363 = (_BYTE *)v744;
      v364 = v738;
      v365 = v743;
      v366 = v750;
      sub_1419234B0(&v367, v319, 1152);
      v333.m128i_i64[0] = 0;
      v333.m128i_i64[1] = 1;
      v334 = 0;
      *(_QWORD *)&v349 = 1610612768;
      v348.m128i_i64[0] = (__int64)&v333;
      v348.m128i_i64[1] = (__int64)&off_141A8A770;
      if ( (unsigned __int8)sub_140B4FA40(&v356, &v348) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_8,
          55,
          (unsigned int)&v731,
          (unsigned int)&unk_141A89E70,
          (__int64)&off_141A8A828);
      v332 = v334;
      v331 = _mm_loadu_si128(&v333);
      LOBYTE(v162) = 41;
      v118 = sub_1411D09D0(v162, &v331);
      v159 = v757;
      v683 = v757;
      v682 = v754;
      v681 = v755;
      v680 = v756;
      v679 = v753;
      v678 = v751;
      v677 = v752;
      v144 = v748;
      v676 = v748;
      v675 = v749;
      v145 = v739;
      v674 = v739;
      if ( v356.m256i_i32[0] == -1 )
        sub_140B6F750(&v356.m256i_u64[1]);
      else
        sub_140B6AFE0(&v356);
      v724 = 5;
    }
  }
  else
  {
    sub_1419234B0(v312, v319, 1152);
    v395 = _mm_load_si128(&v390);
    v396 = v391;
    v397 = v392;
    v398 = v393;
    v399 = v394;
    sub_1419234B0(v323, v324, 141);
  }
  *(_BYTE *)v749 = 1;
  v447 = v159;
  v446 = v754;
  v445 = v755;
  v444 = v756;
  v443 = v753;
  v442 = v751;
  v441 = v752;
  v440 = v144;
  sub_140B6BF40(v145);
  v749 = v118 >> 8;
  v165 = v758;
  v146 = v724;
  if ( *(_BYTE *)(v758 + 2601) )
  {
    v166 = *(_QWORD *)(v758 + 2568);
    if ( v166 )
      sub_140001660(*(_QWORD *)(v758 + 2576), v166, 1);
  }
  *(_QWORD *)&v737 = v8;
  *(_WORD *)(v165 + 2601) = 0;
  *(_BYTE *)(v165 + 2603) = 0;
  v93 = v757;
LABEL_358:
  v29 = v146;
  sub_1419234B0(v313, v312, 1152);
  v400 = _mm_load_si128(&v395);
  v401 = v396;
  v402 = v397;
  v403 = v398;
  v404 = v399;
  sub_1419234B0(v326, v323, 141);
  *v730 = 1;
  v757 = v93;
  v439 = v93;
  v438 = v754;
  v437 = v755;
  v436 = v756;
  v435 = v753;
  v434 = v751;
  v433 = v752;
  sub_140B6C610(v144);
  v298 = v749 & 0xFFFFFFFFFFFF00LL;
  v299 = (_WORD)v749 << 8;
  v172 = (_BYTE *)v758;
  v300 = *(_QWORD *)(v758 + 1832);
  if ( v300 )
    sub_140001660(*(_QWORD *)(v758 + 1840), v300, 1);
  v46 = (unsigned __int8)v118 | v299;
  v47 = v298 >> 8;
  v172[1901] = 0;
  v171 = v752;
LABEL_198:
  v172[1902] = 0;
  sub_1419234B0(v314, v313, 1152);
  v410 = _mm_load_si128(&v400);
  v411 = v401;
  v412 = v402;
  v413 = v403;
  v414 = v404;
  sub_1419234B0(v327, v326, 141);
  v172[1899] = 1;
  v487 = v757;
  v486 = v754;
  v485 = v755;
  v484 = v756;
  v483 = v753;
  v482 = v751;
  sub_140B6E480(v171);
  v31 = (v47 << 16) | v46;
  v7 = (__int64)v750;
LABEL_199:
  sub_1419234B0(v310, v314, 1152);
  v420 = v410;
  v421 = v411;
  v422 = v412;
  v423 = v413;
  v424 = v414;
  sub_1419234B0(v320, v327, 141);
  *v753 = 1;
  *(_BYTE *)v755 = 1;
  sub_1419234B0(v315, v310, 1152);
  v415 = _mm_load_si128(&v420);
  v416 = v421;
  v417 = v422;
  v418 = v423;
  v419 = v424;
  sub_1419234B0(&v335, v320, 141);
  if ( (_DWORD)v32 != 2 )
  {
    v750 = v10;
    sub_1419234B0(v368, v315, 1152);
    v377 = v419;
    v376[0] = _mm_load_si128(&v415);
    v376[1] = v416;
    v376[2] = v417;
    v376[3] = v418;
    v356.m256i_i64[0] = v32;
    v356.m256i_i64[1] = v29;
    v356.m256i_i64[2] = v31;
    v356.m256i_i64[3] = *((_QWORD *)&v737 + 1);
    *(_QWORD *)&v357 = v745;
    *((_QWORD *)&v357 + 1) = v736;
    *(_QWORD *)&v358 = v735;
    *((_QWORD *)&v358 + 1) = v741;
    *(_QWORD *)v359 = v746;
    *(_OWORD *)&v359[8] = v733;
    v360 = v747;
    v361 = v740;
    v362 = v742;
    v363 = v734;
    v364 = v744;
    v365 = v738;
    v366 = (_BYTE *)v743;
    v367 = v7;
    v378 = 0;
    v379 = 1;
    v381 = v336;
    v380 = v335;
    v173 = v758;
    sub_1419234B0(v758 + 280, v337, 136);
    *(_BYTE *)(v173 + 474) = 0;
    *(_QWORD *)v341 = 1;
    *(_QWORD *)&v341[8] = 1;
    *(_QWORD *)&v341[16] = 1;
    sub_1419234B0(&v341[24], &v356, 1384);
    v347 = 0;
    nullsub_1(v175, v174);
    v176 = sub_140001650(1416, 8);
    if ( !v176 )
      sub_14196B2C1(8, 1416);
    v177 = (volatile signed __int64 *)v176;
    sub_1419234B0(v176, v341, 1416);
    v178 = _InterlockedIncrement64(v177);
    v19 = v737;
    if ( (v178 < 0) ^ v179 | (v178 == 0) )
      goto LABEL_292;
    *(_BYTE *)(v173 + 473) = 1;
    *(_QWORD *)(v173 + 224) = -1;
    *(_QWORD *)(v173 + 264) = v177;
    *(_BYTE *)(v173 + 472) = 1;
    v319[0] = v177;
    v432 = v757;
    v5 = v754;
    v431 = v754;
    v180 = sub_140AF8050(128, (__int64)&off_141A894A0);
    v181 = v758;
    *(_BYTE *)(v758 + 471) = 1;
    *(_QWORD *)&v321 = v180;
    *(_BYTE *)(v181 + 470) = 1;
    *(_QWORD *)(v181 + 416) = v182;
    *(_QWORD *)v341 = 1;
    *(_QWORD *)&v341[8] = 1;
    *(_QWORD *)&v341[48] = 0;
    *(_QWORD *)&v341[56] = -2;
    nullsub_1(v183, v182);
    v184 = sub_140001650(80, 8);
    if ( !v184 )
      sub_14196B2C1(8, 80);
    v185 = v184;
    *(_OWORD *)(v184 + 64) = *(_OWORD *)&v341[64];
    v186 = _mm_loadu_si128((const __m128i *)v341);
    v187 = *(_OWORD *)&v341[16];
    v188 = *(_OWORD *)&v341[32];
    *(_OWORD *)(v184 + 48) = *(_OWORD *)&v341[48];
    *(_OWORD *)(v184 + 32) = v188;
    *(_OWORD *)(v184 + 16) = v187;
    *(__m128i *)v184 = v186;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v184) <= 0 )
LABEL_292:
      BUG();
    *(_BYTE *)(v181 + 469) = 1;
    v331.m128i_i64[0] = v184;
    *(_BYTE *)(v181 + 465) = 1;
    *(_QWORD *)(v181 + 480) = v184;
    v189 = v757;
    v499 = v757;
    v498 = v5;
    sub_1408DC980(v181 + 424);
    v190 = v758;
    *(_BYTE *)(v758 + 468) = 1;
    v191 = *(_BYTE *)(v190 + 464);
    *(_WORD *)(v190 + 471) = 0;
    *(_BYTE *)(v190 + 469) = 0;
    v345[288] = v191;
    *(_QWORD *)&v341[16] = v177;
    *(_QWORD *)&v341[24] = v180;
    *(_QWORD *)v341 = 1;
    *(_QWORD *)&v341[8] = v185;
    v345[289] = 0;
    v652 = v189;
    v651 = v5;
    v192 = sub_140C69A10(v341, &off_141A894B8);
    v6 = v189;
    v193 = v758;
    *(_QWORD *)(v758 + 448) = v192;
    v194 = *(_BYTE *)(v193 + 464);
    v195 = *(_QWORD *)(v193 + 272);
    v196 = *(_QWORD *)(v193 + 432);
    v197 = *(_QWORD *)(v193 + 440);
    v497 = v189;
    v496 = v5;
    sub_1408D8D00((__int64)v341, v195, v194, v196, v197);
    v7 = *(_QWORD *)&v341[8];
    v4 = *(__m128i *)&v341[16];
    if ( v341[0] )
    {
      v755 = *(volatile signed __int64 **)&v341[8];
      v753 = *(_BYTE **)&v341[16];
      goto LABEL_236;
    }
    v9 = v758;
    v198 = v758 + 224;
    *(_BYTE *)(v758 + 467) = 0;
    v755 = (volatile signed __int64 *)0x8000000000000000LL;
    *(_QWORD *)(v9 + 488) = 0x8000000000000000uLL;
    *(_QWORD *)(v9 + 496) = v7;
    *(__m128i *)(v9 + 504) = v4;
    v17 = (_BYTE *)(v9 + 488);
    *(_QWORD *)(v9 + 528) = v198;
LABEL_212:
    v199 = *(volatile signed __int64 ***)(v9 + 528);
    v753 = v17;
    v495 = v17;
    v494 = v5;
    v493 = v6;
    v492 = v7;
    v756 = (volatile signed __int64 **)v4.m128i_i64[0];
    v491 = (volatile signed __int64 **)v4.m128i_i64[0];
    v200 = v199;
    sub_140B622E0(v341, v199, v19);
    v201 = *(_QWORD *)v341;
    v16 = v758;
    if ( *(_QWORD *)v341 != -2 )
    {
      if ( *(_DWORD *)v341 == -1 )
      {
        v752 = v7;
        v757 = v6;
        v754 = v5;
        *(_QWORD *)(v758 + 488) = -1;
        v746 = (const __m128i *)(v16 + 496);
        v751 = v200;
        if ( *v200 != (volatile signed __int64 *)-1LL )
          sub_140291900(v751);
        v49 = v751;
        *v751 = v755;
        v202 = v746[1];
        *(__m128i *)(v49 + 1) = _mm_loadu_si128(v746);
        *(__m128i *)(v49 + 3) = v202;
        v5 = v754;
        v6 = v757;
        v7 = v752;
        v18 = v756;
        v17 = v753;
        v8 = v19;
LABEL_217:
        v753 = v17;
        v495 = v17;
        v494 = v5;
        v493 = v6;
        v492 = v7;
        v756 = v18;
        v491 = v18;
        sub_140B61FB0(v341, v49, v8);
        v201 = *(_QWORD *)v341;
        v10 = v750;
        if ( *(_QWORD *)v341 != -2 )
        {
          if ( *(_DWORD *)v341 == -1 )
          {
            v201 = -1;
            v16 = v758;
            goto LABEL_225;
          }
          v355 = v343;
          v354 = v342;
          v353 = *(_OWORD *)&v341[88];
          v352 = *(_OWORD *)&v341[72];
          v204 = _mm_loadu_si128((const __m128i *)&v341[8]);
          v351 = *(__m128i *)&v341[56];
          v350 = *(_OWORD *)&v341[40];
          v349 = *(_OWORD *)&v341[24];
          v348 = v204;
        }
        v16 = v758;
        if ( *(_DWORD *)v341 != -2 )
        {
LABEL_225:
          v389 = v355;
          v388 = v354;
          v387 = v353;
          v386 = v352;
          v205 = _mm_load_si128(&v348);
          v385 = v351;
          v384 = v350;
          v383 = v349;
          v382 = v205;
          v206 = *(_QWORD *)v753;
          if ( *(_QWORD *)v753 == -1 )
            goto LABEL_234;
          v207 = 5;
          if ( v206 < 0 )
            v207 = v206 ^ 0x8000000000000000uLL;
          if ( v207 >= 4 )
          {
            v208 = 488;
            if ( v207 == 4 )
            {
              v206 = *(_QWORD *)(v16 + 496);
              v208 = 496;
              if ( (unsigned __int64)v206 > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_234;
            }
          }
          else
          {
            v206 = *(_QWORD *)(v16 + 496);
            v208 = 496;
          }
          if ( v206 )
            sub_140001660(*(_QWORD *)(v16 + v208 + 8), v206, 1);
LABEL_234:
          v757 = v6;
          v754 = v5;
          if ( (_DWORD)v201 != -1 )
          {
            v752 = v7;
            *(_QWORD *)v341 = v201;
            *(__m128i *)&v341[8] = v382;
            *(_OWORD *)&v341[24] = v383;
            *(_OWORD *)&v341[40] = v384;
            *(__m128i *)&v341[56] = v385;
            *(_OWORD *)&v341[72] = v386;
            *(_OWORD *)&v341[88] = v387;
            v342 = v388;
            v343 = _mm_load_si128(&v389);
            sub_141533670(v16 + 448);
            v333.m128i_i64[0] = (__int64)v341;
            v333.m128i_i64[1] = (__int64)sub_1411437C0;
            sub_1416DAFA0(&v348, &unk_141A894D0, &v333);
            v753 = (_BYTE *)v348.m128i_i64[1];
            v755 = (volatile signed __int64 *)v348.m128i_i64[0];
            v4.m128i_i64[1] = v349;
            v723 = v756;
            v722 = v752;
            v6 = v757;
            v721 = v757;
            v5 = v754;
            v720 = v754;
            sub_140B6F750(v341);
            v750 = v10;
LABEL_236:
            v61 = v758;
LABEL_237:
            *(_BYTE *)(v61 + 467) = 0;
            v209 = *(_QWORD *)(v61 + 448);
            v652 = v6;
            v651 = v5;
            if ( (unsigned __int8)sub_141532BE0(v209) )
            {
              v652 = v6;
              v651 = v5;
              sub_1415334F0(v209);
            }
            v757 = v6;
            v754 = v5;
            v210 = v758;
            v211 = *(_QWORD *)(v758 + 424);
            if ( v211 )
              sub_140001660(*(_QWORD *)(v758 + 432), v211, 1);
            *(_BYTE *)(v210 + 468) = 0;
            v10 = v750;
            if ( *(_BYTE *)(v210 + 465) )
            {
              v212 = *(_QWORD *)(v758 + 480);
              if ( v212 )
              {
                v756 = (volatile signed __int64 **)(v758 + 480);
                v213 = _InterlockedOr64((volatile signed __int64 *)(v212 + 48), 4u);
                if ( (v213 & 0xA) == 8 )
                {
                  v214 = v213;
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v212 + 16) + 16LL))(*(_QWORD *)(v212 + 24));
                  v213 = v214;
                }
                if ( (v213 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v212 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  v215 = v213;
                  sub_141537E90(v212 + 32);
                  v213 = v215;
                }
                if ( (v213 & 2) != 0 )
                {
                  v216 = *(_QWORD *)(v212 + 56);
                  v217 = *(_QWORD *)(v212 + 64);
                  *(_QWORD *)(v212 + 56) = -2;
                  if ( (unsigned __int64)(v216 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v217, v216, 1);
                }
                if ( *v756 && !_InterlockedDecrement64(*v756) )
                {
                  v705 = v757;
                  v704 = v754;
                  sub_140CA3370();
                }
              }
            }
            v218 = v758;
            *(_BYTE *)(v758 + 465) = 0;
            *(_BYTE *)(v218 + 469) = 0;
            v756 = (volatile signed __int64 **)(v218 + 416);
            sub_140B663A0();
            if ( !_InterlockedDecrement64(*v756) )
            {
              v664 = v757;
              v663 = v754;
              sub_140CA3CC0();
            }
            v219 = v758;
            *(_WORD *)(v758 + 470) = 0;
            *(_BYTE *)(v219 + 472) = 0;
            v756 = (volatile signed __int64 **)(v219 + 224);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v219 + 264)) )
              sub_140CA3A10(v758 + 264);
            v220 = (__int64)*v756;
            v221 = v758;
            v5 = v754;
            v6 = v757;
            if ( *v756 != (volatile signed __int64 *)-1LL )
            {
              v222 = 5;
              if ( v220 < 0 )
                v222 = v220 ^ 0x8000000000000000uLL;
              if ( v222 >= 4 )
              {
                v223 = 224;
                if ( v222 == 4 )
                {
                  v220 = *(_QWORD *)(v758 + 232);
                  v223 = 232;
                  if ( (unsigned __int64)v220 > 0xFFFFFFFFFFFFFFFDuLL )
                    goto LABEL_266;
                }
              }
              else
              {
                v220 = *(_QWORD *)(v758 + 232);
                v223 = 232;
              }
              if ( v220 )
                sub_140001660(*(_QWORD *)(v758 + v223 + 8), v220, 1);
            }
LABEL_266:
            *(_BYTE *)(v221 + 473) = 0;
            v490 = v6;
            v489 = v5;
            sub_14068B3B0(v221 + 280);
            v16 = v758;
            *(_BYTE *)(v758 + 474) = 0;
            v14 = -1;
            if ( *(_BYTE *)(v16 + 466) )
              goto LABEL_203;
            goto LABEL_267;
          }
          LOBYTE(v6) = 2;
          if ( *(_BYTE *)(v16 + 464) == 2 )
          {
LABEL_271:
            *(_BYTE *)(v16 + 473) = 0;
            v4.m128i_i64[1] = *(_QWORD *)(v16 + 224);
            v427 = *(_QWORD *)(v16 + 264);
            v426 = *(__m128i *)(v16 + 248);
            v425 = _mm_loadu_si128((const __m128i *)(v16 + 232));
            v7 = *(_QWORD *)(v16 + 416);
            v14 = *(_QWORD *)(v16 + 424);
            v755 = *(volatile signed __int64 **)(v16 + 432);
            v753 = *(_BYTE **)(v16 + 440);
            *(_BYTE *)(v16 + 470) = 0;
            v5 = *(_QWORD *)(v16 + 448);
            *(_WORD *)(v16 + 467) = 0;
            if ( *(_BYTE *)(v16 + 465) )
            {
              v225 = *(_QWORD *)(v758 + 480);
              if ( v225 )
              {
                v756 = (volatile signed __int64 **)(v758 + 480);
                v226 = _InterlockedOr64((volatile signed __int64 *)(v225 + 48), 4u);
                v752 = v226;
                if ( (v226 & 0xA) == 8 )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v225 + 16) + 16LL))(*(_QWORD *)(v225 + 24));
                  LOBYTE(v226) = v752;
                }
                if ( (v226 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v225 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  sub_141537E90(v225 + 32);
                  LOBYTE(v226) = v752;
                }
                if ( (v226 & 2) != 0 )
                {
                  v227 = *(_QWORD *)(v225 + 56);
                  v228 = *(_QWORD *)(v225 + 64);
                  *(_QWORD *)(v225 + 56) = -2;
                  if ( (unsigned __int64)(v227 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v228, v227, 1);
                }
                if ( *v756 && !_InterlockedDecrement64(*v756) )
                {
                  v705 = v757;
                  v704 = v754;
                  sub_140CA3370();
                }
              }
            }
            v229 = v758;
            *(_BYTE *)(v758 + 465) = 0;
            *(_DWORD *)(v229 + 469) = 0;
            *(_BYTE *)(v229 + 473) = 0;
            v490 = v757;
            v489 = v754;
            sub_14068B3B0(v229 + 280);
            v16 = v758;
            *(_BYTE *)(v758 + 474) = 0;
            goto LABEL_267;
          }
          v752 = v7;
          *(_BYTE *)(v16 + 465) = 0;
          v230 = *(_QWORD *)(v16 + 480);
          v333.m128i_i64[0] = v230;
          *(_QWORD *)v341 = sub_1415460F0();
          *(_DWORD *)&v341[8] = v231;
          v232 = sub_1415460D0(v341, 15, 0);
          if ( v233 == -1 )
            sub_141549040(v341, 0, 0xFFFFFFFFLL);
          else
            sub_141549130((unsigned int)v341, v232, v233, 0, (__int64)&off_141A894F8);
          v9 = v758;
          v234 = (_OWORD *)(v758 + 480);
          v354 = _mm_loadu_si128((const __m128i *)&v341[96]);
          v235 = *(_OWORD *)&v341[80];
          v353 = *(_OWORD *)&v341[80];
          v236 = *(_OWORD *)&v341[64];
          v352 = *(_OWORD *)&v341[64];
          v237 = *(_OWORD *)v341;
          v238 = *(_OWORD *)&v341[16];
          v239 = *(_OWORD *)&v341[32];
          v240 = _mm_loadu_si128((const __m128i *)&v341[48]);
          v351 = v240;
          v350 = *(_OWORD *)&v341[32];
          v349 = *(_OWORD *)&v341[16];
          v348 = *(__m128i *)v341;
          *(__m128i *)(v758 + 576) = v354;
          v234[5] = v235;
          v234[4] = v236;
          v234[3] = v240;
          v234[2] = v239;
          v234[1] = v238;
          *v234 = v237;
          *(_QWORD *)(v9 + 592) = v230;
LABEL_6:
          v755 = (volatile signed __int64 *)(v9 + 480);
          v20 = (unsigned __int8 *)sub_1415475D0(v4.m128i_i64[0], a2, a3, a4);
          v4.m128i_i64[1] = v20[72];
          if ( v20[72] )
          {
            if ( v4.m128i_i32[2] == 2 )
            {
LABEL_8:
              v21 = (volatile signed __int64 **)(v758 + 592);
              sub_140B58210(v341, v758 + 592, v8);
              v7 = *(_QWORD *)v341;
              if ( *(_QWORD *)v341 == -3 )
              {
                v4.m128i_i8[0] = v4.m128i_i8[8] & 1 | (v4.m128i_i8[8] == 2);
                if ( (unsigned __int8)sub_14152B3E0(v4.m128i_i64[0], v755, v8) )
                {
                  v10->m128i_i64[0] = -2;
                  result = 5;
                  v16 = v758;
                  goto LABEL_269;
                }
                v24 = *v21;
                if ( !*v21 )
                {
LABEL_36:
                  v723 = v756;
                  v55 = v752;
                  v722 = v752;
                  v721 = v757;
                  v720 = v754;
                  sub_140291A70(v755);
                  if ( v7 == -2 )
                  {
                    nullsub_1(v57, v56);
                    v58 = 31;
                    v60 = sub_140001650(31, 1);
                    v16 = v758;
                    if ( !v60 )
                    {
                      v723 = v756;
                      v722 = v55;
                      v721 = v757;
                      v720 = v754;
                      sub_14196B2DB(1, 31);
                    }
                    *(_OWORD *)(v60 + 15) = *(__int128 *)((char *)&xmmword_141A89510 + 15);
                    v753 = (_BYTE *)v60;
                    *(__m128i *)v60 = _mm_loadu_si128((const __m128i *)&xmmword_141A89510);
                    v4.m128i_i64[1] = 31;
                  }
                  else
                  {
                    v58 = v7;
                    v16 = v758;
                    if ( v7 == -3 )
                    {
                      nullsub_1(v57, v56);
                      v58 = 22;
                      v59 = sub_140001650(22, 1);
                      if ( !v59 )
                      {
                        v723 = v756;
                        v722 = v55;
                        v721 = v757;
                        v720 = v754;
                        sub_14196B2DB(1, 22);
                      }
                      *(__m128i *)v59 = _mm_loadu_si128(&xmmword_141A8952F);
                      v753 = (_BYTE *)v59;
                      *(_QWORD *)(v59 + 14) = 0xB697E685B6E8A88AuLL;
                      v4.m128i_i64[1] = 22;
                    }
                    else if ( v7 == -1 )
                    {
                      LOBYTE(v6) = *(_BYTE *)(v758 + 464);
                      goto LABEL_271;
                    }
                  }
                  v750 = v10;
                  v755 = (volatile signed __int64 *)v58;
                  sub_141533670(v16 + 448);
                  v61 = v758;
                  v5 = v754;
                  v6 = v757;
                  goto LABEL_237;
                }
              }
              else
              {
                v753 = *(_BYTE **)&v341[8];
                v4.m128i_i64[1] = *(_QWORD *)&v341[16];
                v24 = *v21;
                if ( !*v21 )
                  goto LABEL_36;
              }
              v751 = v21;
              v50 = _InterlockedOr64(v24 + 6, 4u);
              if ( (v50 & 0xA) == 8 )
              {
                v51 = v50;
                (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v24 + 2) + 16LL))(*((_QWORD *)v24 + 3));
                v50 = v51;
              }
              if ( (v50 & 3) == 1 )
              {
                _InterlockedAnd64(v24 + 6, 0xFFFFFFFFFFFFFFFEuLL);
                v52 = v50;
                sub_141537E90(v24 + 4);
                v50 = v52;
              }
              if ( (v50 & 2) != 0 )
              {
                v53 = *((_QWORD *)v24 + 7);
                v54 = *((_QWORD *)v24 + 8);
                *((_QWORD *)v24 + 7) = -2;
                if ( (unsigned __int64)(v53 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                  sub_140001660(v54, v53, 1);
              }
              if ( *v751 && !_InterlockedDecrement64(*v751) )
                sub_140CA3370();
              goto LABEL_36;
            }
            v167 = v20;
            sub_1416CA860(v20, sub_140A21520);
            v20 = v167;
            v167[72] = 0;
          }
          v4.m128i_i64[1] = (unsigned int)sub_141541630(v20[68], v20[69]);
          goto LABEL_8;
        }
LABEL_222:
        v10->m128i_i64[0] = -2;
        result = 4;
        goto LABEL_269;
      }
      v355 = v343;
      v354 = v342;
      v353 = *(_OWORD *)&v341[88];
      v352 = *(_OWORD *)&v341[72];
      v203 = _mm_loadu_si128((const __m128i *)&v341[8]);
      v351 = *(__m128i *)&v341[56];
      v350 = *(_OWORD *)&v341[40];
      v349 = *(_OWORD *)&v341[24];
      v348 = v203;
    }
    v8 = v19;
    v10 = v750;
    if ( *(_DWORD *)v341 != -2 )
      goto LABEL_225;
    goto LABEL_222;
  }
  *(_QWORD *)v341 = v29;
  *(_QWORD *)&v341[8] = v31;
  *(_QWORD *)&v341[16] = *((_QWORD *)&v737 + 1);
  *(_QWORD *)&v341[24] = v745;
  *(_QWORD *)&v341[32] = v736;
  *(_QWORD *)&v341[40] = v735;
  *(_QWORD *)&v341[48] = v741;
  *(_QWORD *)&v341[56] = v746;
  *(_OWORD *)&v341[64] = v733;
  *(_QWORD *)&v341[80] = v747;
  *(_QWORD *)&v341[88] = v740;
  *(_QWORD *)&v341[96] = v742;
  v342.m128i_i64[0] = (__int64)v734;
  v342.m128i_i64[1] = v744;
  v343.m128i_i64[0] = v738;
  v343.m128i_i64[1] = v743;
  v348.m128i_i64[0] = (__int64)v341;
  v348.m128i_i64[1] = (__int64)sub_1411437C0;
  sub_1416DAFA0(&v356, &unk_141A88EB5, &v348);
  v6 = v757;
  v728 = v757;
  v5 = v754;
  v727 = v754;
  sub_140B6F750(v341);
  v753 = (_BYTE *)v356.m256i_i64[1];
  v755 = (volatile signed __int64 *)v356.m256i_i64[0];
  v4.m128i_i64[1] = v356.m256i_i64[2];
LABEL_201:
  v16 = v758;
LABEL_202:
  v14 = -1;
  if ( !*(_BYTE *)(v16 + 466) )
    goto LABEL_267;
LABEL_203:
  v703 = v6;
  v702 = v5;
  sub_1406C0020(v16);
LABEL_204:
  v16 = v758;
LABEL_267:
  *(_BYTE *)(v16 + 466) = 0;
  v15 = v755;
  v4.m128i_i64[0] = (__int64)v753;
LABEL_268:
  *(_BYTE *)(v16 + 475) = 0;
  v10->m128i_i64[0] = v14;
  v10->m128i_i64[1] = (__int64)v15;
  v10[1] = v4;
  v224 = v426;
  v10[2] = _mm_load_si128(&v425);
  v10[3] = v224;
  v10[4].m128i_i64[0] = v427;
  v10[4].m128i_i64[1] = v5;
  v10[5].m128i_i16[0] = 0;
  v10[5].m128i_i64[1] = v7;
  v10[6].m128i_i8[0] = (char)v6;
  result = 1;
LABEL_269:
  *(_BYTE *)(v16 + 476) = result;
  return result;
}
