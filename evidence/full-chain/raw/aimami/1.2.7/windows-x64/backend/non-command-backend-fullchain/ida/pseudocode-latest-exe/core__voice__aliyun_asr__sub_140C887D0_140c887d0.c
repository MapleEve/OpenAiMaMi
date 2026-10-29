// win 1.2.7 latest-exe | module src/core/voice/aliyun_asr.rs | ea 0x140c887d0 | successor of pre-update 0x14046cf10 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
char __fastcall sub_140C887D0(__int64 a1, __int64 a2, __int64 a3, signed __int64 a4)
{
  __int128 v4; // rcx
  __int64 v5; // r12
  char *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r13
  volatile signed __int64 **v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r8
  volatile signed __int64 **v18; // rax
  __int64 v19; // rsi
  unsigned __int8 *v20; // rax
  volatile signed __int64 **v21; // r14
  __int64 v22; // r15
  char result; // al
  __int64 v24; // rax
  volatile signed __int64 *v25; // rdi
  __int64 v26; // rax
  char v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __m128i v34; // xmm0
  __int64 v35; // rsi
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  volatile signed __int64 **v39; // rdi
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int16 v47; // r15
  __int64 v48; // r14
  _QWORD *v49; // r12
  __int64 *v50; // rdx
  char v51; // al
  char v52; // r14
  char v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _BYTE *v63; // r14
  __int16 v64; // ax
  __int16 v65; // dx
  __int16 v66; // bx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int128 v69; // xmm0
  const __m128i *v70; // r15
  char *v71; // rbx
  __m128i v72; // xmm0
  int v73; // ebx
  __m128i v74; // xmm6
  __int64 v75; // r15
  __int64 v76; // rbx
  __int64 v77; // r15
  __int64 v78; // r14
  volatile signed __int64 **v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __m128i v83; // rax
  __int64 v84; // rax
  unsigned __int8 v85; // cl
  char *v86; // rdx
  const __m128i *v87; // rcx
  _BYTE *v88; // r8
  __int64 v89; // r9
  __int64 v90; // r10
  __int64 v91; // r11
  char *v92; // r14
  __int64 v93; // rax
  char v94; // al
  __m128i v95; // xmm0
  __int64 v96; // r13
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // r12
  char *v100; // rbx
  __int64 v101; // rdx
  void (__fastcall *v102)(unsigned __int64 *, __int64, __int64); // rax
  void (__fastcall *v103)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v104; // rcx
  _WORD *v105; // rax
  __int64 v106; // rcx
  unsigned __int16 v107; // cx
  int v108; // eax
  unsigned __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // r15
  __int64 v113; // rbx
  char v114; // al
  _BYTE *v115; // rcx
  __int64 v116; // r8
  unsigned __int64 v117; // rbx
  __m128i v118; // xmm0
  __int64 v119; // rax
  __m128i v120; // xmm6
  __int64 v121; // rax
  __int64 v122; // rdx
  unsigned __int64 v123; // r8
  _BYTE *v124; // rcx
  __int64 v125; // r14
  __int64 v126; // r12
  __int64 v127; // r15
  __int64 v128; // r14
  __int128 v129; // xmm1
  __int128 v130; // xmm2
  __int128 v131; // xmm3
  __int128 v132; // xmm1
  __int128 v133; // xmm2
  __int128 v134; // xmm3
  __int64 v135; // r12
  __int64 v136; // rbx
  __int64 v137; // r12
  char v138; // al
  char *v139; // rcx
  char v140; // al
  const __m128i *v141; // r14
  _DWORD *v142; // rbx
  __int64 v143; // r13
  __int64 v144; // r15
  __int64 v145; // r15
  _BYTE *v146; // r8
  __int64 v147; // r9
  unsigned __int128 v148; // kr260_16
  unsigned __int128 v149; // kr280_16
  __int64 v150; // rdx
  _DWORD *v151; // r12
  __int64 v152; // rbx
  __int64 v153; // r15
  const __m128i *v154; // rax
  const __m128i *v155; // r14
  const __m128i *v156; // rbx
  __int64 v157; // r12
  char *v158; // r14
  __m128i v159; // xmm0
  char *v160; // r13
  __int64 v161; // rcx
  unsigned __int64 v162; // r15
  const __m128i *v163; // r8
  __int64 v164; // r14
  __int64 v165; // rdx
  unsigned __int8 *v166; // rbx
  __int64 v167; // rbx
  volatile signed __int64 *v168; // rax
  __int64 v169; // rax
  volatile signed __int64 **v170; // rbx
  _BYTE *v171; // r13
  __int64 v172; // rbx
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rax
  volatile signed __int64 *v176; // r12
  __int64 v177; // rt0
  char v178; // of
  volatile signed __int64 *v179; // rbx
  __int64 v180; // rdi
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rax
  __int64 v184; // r14
  __m128i v185; // xmm0
  __int128 v186; // xmm1
  __int128 v187; // xmm2
  volatile signed __int64 *v188; // r13
  char *v189; // r12
  __int64 v190; // rcx
  char v191; // al
  __int64 v192; // rax
  __int64 v193; // rcx
  char v194; // r8
  __int64 v195; // rdx
  __int64 v196; // r9
  __int64 v197; // rax
  __int64 v198; // rax
  __m128i *v199; // rdx
  __m128i *v200; // rdi
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
  __int128 v224; // xmm1
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
  volatile signed __int64 **v261; // r15
  __int64 v262; // rdx
  __int128 v263; // xmm1
  __int128 v264; // xmm2
  __int128 v265; // xmm3
  __int64 v266; // rax
  volatile signed __int64 **v267; // rdx
  __int128 v268; // xmm1
  __int128 v269; // xmm1
  __int128 v270; // xmm2
  __int128 v271; // xmm3
  __int64 v272; // rcx
  const __m128i *v273; // r9
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
  __int128 v285; // kr1D0_16
  __int64 v286; // r12
  __m128i *v287; // rdx
  const __m128i *v288; // r8
  __int64 v289; // rax
  __int64 v290; // rdx
  bool v291; // zf
  __int64 v292; // rdx
  volatile signed __int64 *v293; // rax
  __int64 v294; // r15
  const __m128i *v295; // r12
  __int64 v296; // rax
  unsigned __int64 v297; // r14
  __int16 v298; // r15
  __int64 v299; // rdx
  __int64 v300; // rax
  __int64 v301; // rcx
  __m128i si128; // xmm0
  __int128 v303; // xmm1
  __int128 v304; // xmm2
  __m128i v305; // xmm0
  __int128 v306; // xmm1
  __int128 v307; // xmm2
  __int128 v308; // xmm1
  _BYTE v309[1152]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v310[1152]; // [rsp+4A8h] [rbp+428h] BYREF
  _BYTE v311[1152]; // [rsp+928h] [rbp+8A8h] BYREF
  _BYTE v312[1152]; // [rsp+DA8h] [rbp+D28h] BYREF
  _BYTE v313[1152]; // [rsp+1228h] [rbp+11A8h] BYREF
  _BYTE v314[1152]; // [rsp+16A8h] [rbp+1628h] BYREF
  _BYTE v315[960]; // [rsp+1B28h] [rbp+1AA8h] BYREF
  _BYTE v316[232]; // [rsp+1EE8h] [rbp+1E68h] BYREF
  _QWORD v317[144]; // [rsp+1FD0h] [rbp+1F50h] BYREF
  _BYTE v318[227]; // [rsp+2450h] [rbp+23D0h] BYREF
  _BYTE v319[141]; // [rsp+2533h] [rbp+24B3h] BYREF
  __int128 v320; // [rsp+25C0h] [rbp+2540h] BYREF
  __int64 v321; // [rsp+25D0h] [rbp+2550h]
  _BYTE v322[141]; // [rsp+2A44h] [rbp+29C4h] BYREF
  char v323[5]; // [rsp+2AD1h] [rbp+2A51h] BYREF
  char v324[136]; // [rsp+2AD6h] [rbp+2A56h] BYREF
  _BYTE v325[141]; // [rsp+2B5Eh] [rbp+2ADEh] BYREF
  _BYTE v326[141]; // [rsp+2BEBh] [rbp+2B6Bh] BYREF
  _BYTE v327[208]; // [rsp+2C78h] [rbp+2BF8h] BYREF
  _BYTE v328[208]; // [rsp+2D48h] [rbp+2CC8h] BYREF
  _BYTE v329[136]; // [rsp+2E18h] [rbp+2D98h] BYREF
  __m128i v330; // [rsp+2EA0h] [rbp+2E20h] BYREF
  __int64 v331; // [rsp+2EB0h] [rbp+2E30h]
  __m128i v332; // [rsp+3320h] [rbp+32A0h] BYREF
  __int64 v333; // [rsp+3330h] [rbp+32B0h]
  int v334; // [rsp+38A3h] [rbp+3823h] BYREF
  char v335; // [rsp+38A7h] [rbp+3827h]
  char v336[136]; // [rsp+38A8h] [rbp+3828h] BYREF
  __m128i v337[4]; // [rsp+3930h] [rbp+38B0h] BYREF
  __int64 v338; // [rsp+3970h] [rbp+38F0h]
  char v339[136]; // [rsp+3978h] [rbp+38F8h] BYREF
  _BYTE v340[104]; // [rsp+3A00h] [rbp+3980h] BYREF
  __m128i v341; // [rsp+3A68h] [rbp+39E8h]
  __m128i v342; // [rsp+3A78h] [rbp+39F8h]
  __int64 v343; // [rsp+3A88h] [rbp+3A08h]
  _BYTE v344[960]; // [rsp+3A90h] [rbp+3A10h] BYREF
  char v345[304]; // [rsp+3E50h] [rbp+3DD0h] BYREF
  __int64 v346; // [rsp+3F80h] [rbp+3F00h]
  __m128i v347; // [rsp+55E0h] [rbp+5560h] BYREF
  __int128 v348; // [rsp+55F0h] [rbp+5570h]
  __int128 v349; // [rsp+5600h] [rbp+5580h]
  __m128i v350; // [rsp+5610h] [rbp+5590h]
  __int128 v351; // [rsp+5620h] [rbp+55A0h]
  __int128 v352; // [rsp+5630h] [rbp+55B0h]
  __m128i v353; // [rsp+5640h] [rbp+55C0h]
  __m128i v354; // [rsp+5650h] [rbp+55D0h]
  __m256i v355; // [rsp+5B60h] [rbp+5AE0h] BYREF
  __int128 v356; // [rsp+5B80h] [rbp+5B00h]
  __int128 v357; // [rsp+5B90h] [rbp+5B10h]
  _BYTE v358[24]; // [rsp+5BA0h] [rbp+5B20h]
  const __m128i *v359; // [rsp+5BB8h] [rbp+5B38h]
  char *v360; // [rsp+5BC0h] [rbp+5B40h]
  _BYTE *v361; // [rsp+5BC8h] [rbp+5B48h]
  _BYTE *v362; // [rsp+5BD0h] [rbp+5B50h]
  __int64 v363; // [rsp+5BD8h] [rbp+5B58h]
  __int64 v364; // [rsp+5BE0h] [rbp+5B60h]
  volatile signed __int64 **v365; // [rsp+5BE8h] [rbp+5B68h]
  volatile signed __int64 **v366; // [rsp+5BF0h] [rbp+5B70h] BYREF
  _BYTE v367[72]; // [rsp+5BF8h] [rbp+5B78h] BYREF
  __m128i v368; // [rsp+5C40h] [rbp+5BC0h]
  __int128 v369; // [rsp+5C50h] [rbp+5BD0h]
  __int128 v370; // [rsp+5C60h] [rbp+5BE0h]
  __int128 v371; // [rsp+5C70h] [rbp+5BF0h]
  __int64 v372; // [rsp+5C80h] [rbp+5C00h]
  char v373[808]; // [rsp+5C88h] [rbp+5C08h] BYREF
  char v374[200]; // [rsp+5FB0h] [rbp+5F30h] BYREF
  _OWORD v375[4]; // [rsp+6078h] [rbp+5FF8h] BYREF
  __int64 v376; // [rsp+60B8h] [rbp+6038h]
  __int16 v377; // [rsp+60C0h] [rbp+6040h]
  char v378; // [rsp+60C2h] [rbp+6042h]
  int v379; // [rsp+60C3h] [rbp+6043h]
  char v380; // [rsp+60C7h] [rbp+6047h]
  __m128i v381; // [rsp+6150h] [rbp+60D0h]
  __int128 v382; // [rsp+6160h] [rbp+60E0h]
  __int128 v383; // [rsp+6170h] [rbp+60F0h]
  __m128i v384; // [rsp+6180h] [rbp+6100h]
  __int128 v385; // [rsp+6190h] [rbp+6110h]
  __int128 v386; // [rsp+61A0h] [rbp+6120h]
  __m128i v387; // [rsp+61B0h] [rbp+6130h]
  __m128i v388; // [rsp+61C0h] [rbp+6140h] BYREF
  __m128i v389; // [rsp+61D0h] [rbp+6150h] BYREF
  __m128i v390; // [rsp+61E0h] [rbp+6160h]
  __m128i v391; // [rsp+61F0h] [rbp+6170h]
  __m128i v392; // [rsp+6200h] [rbp+6180h]
  __int64 v393; // [rsp+6210h] [rbp+6190h]
  __m128i v394; // [rsp+6220h] [rbp+61A0h] BYREF
  __m128i v395; // [rsp+6230h] [rbp+61B0h]
  __m128i v396; // [rsp+6240h] [rbp+61C0h]
  __m128i v397; // [rsp+6250h] [rbp+61D0h]
  __int64 v398; // [rsp+6260h] [rbp+61E0h]
  __m128i v399; // [rsp+6270h] [rbp+61F0h] BYREF
  __m128i v400; // [rsp+6280h] [rbp+6200h]
  __m128i v401; // [rsp+6290h] [rbp+6210h]
  __m128i v402; // [rsp+62A0h] [rbp+6220h]
  __int64 v403; // [rsp+62B0h] [rbp+6230h]
  __int128 v404; // [rsp+62C0h] [rbp+6240h]
  __int128 v405; // [rsp+62D0h] [rbp+6250h]
  __int128 v406; // [rsp+62E0h] [rbp+6260h]
  __int128 v407; // [rsp+62F0h] [rbp+6270h]
  __int64 v408; // [rsp+6300h] [rbp+6280h]
  __m128i v409; // [rsp+6310h] [rbp+6290h]
  __m128i v410; // [rsp+6320h] [rbp+62A0h]
  __m128i v411; // [rsp+6330h] [rbp+62B0h]
  __m128i v412; // [rsp+6340h] [rbp+62C0h]
  __int64 v413; // [rsp+6350h] [rbp+62D0h]
  __m128i v414; // [rsp+6360h] [rbp+62E0h] BYREF
  __m128i v415; // [rsp+6370h] [rbp+62F0h]
  __m128i v416; // [rsp+6380h] [rbp+6300h]
  __m128i v417; // [rsp+6390h] [rbp+6310h]
  __int64 v418; // [rsp+63A0h] [rbp+6320h]
  __m128i v419; // [rsp+63B0h] [rbp+6330h] BYREF
  __m128i v420; // [rsp+63C0h] [rbp+6340h]
  __m128i v421; // [rsp+63D0h] [rbp+6350h]
  __m128i v422; // [rsp+63E0h] [rbp+6360h]
  __int64 v423; // [rsp+63F0h] [rbp+6370h]
  __m128i v424; // [rsp+6400h] [rbp+6380h] BYREF
  __int128 v425; // [rsp+6410h] [rbp+6390h]
  volatile signed __int64 *v426; // [rsp+6420h] [rbp+63A0h]
  __int128 v427; // [rsp+64F0h] [rbp+6470h] BYREF
  __int128 v428; // [rsp+6500h] [rbp+6480h]
  __int64 v429; // [rsp+6510h] [rbp+6490h]
  volatile signed __int64 *v430; // [rsp+6528h] [rbp+64A8h]
  __int64 v431; // [rsp+6530h] [rbp+64B0h]
  char *v432; // [rsp+6538h] [rbp+64B8h]
  volatile signed __int64 **v433; // [rsp+6540h] [rbp+64C0h]
  signed __int64 v434; // [rsp+6548h] [rbp+64C8h]
  _BYTE *v435; // [rsp+6550h] [rbp+64D0h]
  __m128i v436; // [rsp+6558h] [rbp+64D8h]
  __int64 v437; // [rsp+6568h] [rbp+64E8h]
  char *v438; // [rsp+6570h] [rbp+64F0h]
  __int64 v439; // [rsp+6578h] [rbp+64F8h]
  volatile signed __int64 **v440; // [rsp+6580h] [rbp+6500h]
  signed __int64 v441; // [rsp+6588h] [rbp+6508h]
  _BYTE *v442; // [rsp+6590h] [rbp+6510h]
  __m128i v443; // [rsp+6598h] [rbp+6518h]
  __int64 v444; // [rsp+65A8h] [rbp+6528h]
  char *v445; // [rsp+65B0h] [rbp+6530h]
  __int64 v446; // [rsp+65B8h] [rbp+6538h]
  _BYTE *v447; // [rsp+65C0h] [rbp+6540h]
  __int64 v448; // [rsp+65C8h] [rbp+6548h]
  unsigned __int64 v449; // [rsp+65D0h] [rbp+6550h]
  __int64 v450; // [rsp+65D8h] [rbp+6558h]
  volatile signed __int64 **v451; // [rsp+65E0h] [rbp+6560h]
  signed __int64 v452; // [rsp+65E8h] [rbp+6568h]
  _BYTE *v453; // [rsp+65F0h] [rbp+6570h]
  __m128i v454; // [rsp+65F8h] [rbp+6578h]
  __int64 v455; // [rsp+6608h] [rbp+6588h]
  char *v456; // [rsp+6610h] [rbp+6590h]
  const __m128i *v457; // [rsp+6618h] [rbp+6598h]
  volatile signed __int64 **v458; // [rsp+6620h] [rbp+65A0h]
  signed __int64 v459; // [rsp+6628h] [rbp+65A8h]
  _BYTE *v460; // [rsp+6630h] [rbp+65B0h]
  __m128i v461; // [rsp+6638h] [rbp+65B8h]
  __int64 v462; // [rsp+6648h] [rbp+65C8h]
  char *v463; // [rsp+6650h] [rbp+65D0h]
  __int64 *v464; // [rsp+6658h] [rbp+65D8h]
  volatile signed __int64 **v465; // [rsp+6660h] [rbp+65E0h]
  __int64 v466; // [rsp+6668h] [rbp+65E8h]
  unsigned __int64 v467; // [rsp+6670h] [rbp+65F0h]
  const __m128i *v468; // [rsp+6678h] [rbp+65F8h]
  volatile signed __int64 **v469; // [rsp+6680h] [rbp+6600h]
  signed __int64 v470; // [rsp+6688h] [rbp+6608h]
  _BYTE *v471; // [rsp+6690h] [rbp+6610h]
  __m128i v472; // [rsp+6698h] [rbp+6618h]
  __int64 v473; // [rsp+66A8h] [rbp+6628h]
  char *v474; // [rsp+66B0h] [rbp+6630h]
  __int64 *v475; // [rsp+66B8h] [rbp+6638h]
  volatile signed __int64 **v476; // [rsp+66C0h] [rbp+6640h]
  signed __int64 v477; // [rsp+66C8h] [rbp+6648h]
  _BYTE *v478; // [rsp+66D0h] [rbp+6650h]
  __m128i v479; // [rsp+66D8h] [rbp+6658h]
  __int64 v480; // [rsp+66E8h] [rbp+6668h]
  char *v481; // [rsp+66F0h] [rbp+6670h]
  _DWORD *v482; // [rsp+66F8h] [rbp+6678h]
  __int64 v483; // [rsp+6708h] [rbp+6688h]
  char *v484; // [rsp+6710h] [rbp+6690h]
  signed __int64 v485; // [rsp+6728h] [rbp+66A8h]
  volatile signed __int64 **v486; // [rsp+6730h] [rbp+66B0h]
  char *v487; // [rsp+6738h] [rbp+66B8h]
  __int64 v488; // [rsp+6740h] [rbp+66C0h]
  __int64 v489; // [rsp+6748h] [rbp+66C8h]
  __int64 v490; // [rsp+6750h] [rbp+66D0h]
  volatile signed __int64 *v491; // [rsp+6780h] [rbp+6700h]
  __int64 v492; // [rsp+6788h] [rbp+6708h]
  char *v493; // [rsp+6790h] [rbp+6710h]
  volatile signed __int64 *v494; // [rsp+6798h] [rbp+6718h]
  __int64 v495; // [rsp+67A0h] [rbp+6720h]
  char *v496; // [rsp+67A8h] [rbp+6728h]
  signed __int64 v497; // [rsp+67B0h] [rbp+6730h]
  __m128i v498; // [rsp+67B8h] [rbp+6738h]
  __int64 v499; // [rsp+67C8h] [rbp+6748h]
  signed __int64 v500; // [rsp+67D0h] [rbp+6750h]
  _BYTE *v501; // [rsp+67D8h] [rbp+6758h]
  __m128i v502; // [rsp+67E0h] [rbp+6760h]
  __int64 v503; // [rsp+67F0h] [rbp+6770h]
  __int64 v504; // [rsp+67F8h] [rbp+6778h]
  signed __int64 v505; // [rsp+6800h] [rbp+6780h]
  _BYTE *v506; // [rsp+6808h] [rbp+6788h]
  __m128i v507; // [rsp+6810h] [rbp+6790h]
  __int64 v508; // [rsp+6820h] [rbp+67A0h]
  __int64 v509; // [rsp+6828h] [rbp+67A8h]
  __int64 v510; // [rsp+6830h] [rbp+67B0h]
  signed __int64 v511; // [rsp+6838h] [rbp+67B8h]
  _BYTE *v512; // [rsp+6840h] [rbp+67C0h]
  __m128i v513; // [rsp+6848h] [rbp+67C8h]
  __int64 v514; // [rsp+6858h] [rbp+67D8h]
  __int64 v515; // [rsp+6860h] [rbp+67E0h]
  unsigned __int64 v516; // [rsp+6868h] [rbp+67E8h]
  __int64 v517; // [rsp+6870h] [rbp+67F0h]
  __int64 v518; // [rsp+6878h] [rbp+67F8h]
  signed __int64 v519; // [rsp+6880h] [rbp+6800h]
  _BYTE *v520; // [rsp+6888h] [rbp+6808h]
  __m128i v521; // [rsp+6890h] [rbp+6810h]
  __int64 v522; // [rsp+68A0h] [rbp+6820h]
  __int64 v523; // [rsp+68A8h] [rbp+6828h]
  _BYTE *v524; // [rsp+68B0h] [rbp+6830h]
  __int64 v525; // [rsp+68B8h] [rbp+6838h]
  unsigned __int64 v526; // [rsp+68C0h] [rbp+6840h]
  __int64 v527; // [rsp+68C8h] [rbp+6848h]
  volatile signed __int64 **v528; // [rsp+68D0h] [rbp+6850h]
  signed __int64 v529; // [rsp+68D8h] [rbp+6858h]
  _BYTE *v530; // [rsp+68E0h] [rbp+6860h]
  __m128i v531; // [rsp+68E8h] [rbp+6868h]
  __int64 v532; // [rsp+68F8h] [rbp+6878h]
  volatile signed __int64 **v533; // [rsp+6900h] [rbp+6880h]
  signed __int64 v534; // [rsp+6908h] [rbp+6888h]
  _BYTE *v535; // [rsp+6910h] [rbp+6890h]
  __m128i v536; // [rsp+6918h] [rbp+6898h]
  __int64 v537; // [rsp+6928h] [rbp+68A8h]
  char *v538; // [rsp+6930h] [rbp+68B0h]
  __int64 v539; // [rsp+6938h] [rbp+68B8h]
  __int64 v540; // [rsp+6940h] [rbp+68C0h]
  __int64 v541; // [rsp+6948h] [rbp+68C8h]
  volatile signed __int64 **v542; // [rsp+6950h] [rbp+68D0h]
  signed __int64 v543; // [rsp+6958h] [rbp+68D8h]
  _BYTE *v544; // [rsp+6960h] [rbp+68E0h]
  __m128i v545; // [rsp+6968h] [rbp+68E8h]
  __int64 v546; // [rsp+6978h] [rbp+68F8h]
  volatile signed __int64 **v547; // [rsp+6980h] [rbp+6900h]
  signed __int64 v548; // [rsp+6988h] [rbp+6908h]
  _BYTE *v549; // [rsp+6990h] [rbp+6910h]
  __m128i v550; // [rsp+6998h] [rbp+6918h]
  __int64 v551; // [rsp+69A8h] [rbp+6928h]
  char *v552; // [rsp+69B0h] [rbp+6930h]
  __int64 v553; // [rsp+69B8h] [rbp+6938h]
  volatile signed __int64 **v554; // [rsp+69C0h] [rbp+6940h]
  signed __int64 v555; // [rsp+69C8h] [rbp+6948h]
  _BYTE *v556; // [rsp+69D0h] [rbp+6950h]
  __m128i v557; // [rsp+69D8h] [rbp+6958h]
  __int64 v558; // [rsp+69E8h] [rbp+6968h]
  char *v559; // [rsp+69F0h] [rbp+6970h]
  __int64 v560; // [rsp+69F8h] [rbp+6978h]
  __int64 v561; // [rsp+6A00h] [rbp+6980h]
  signed __int64 v562; // [rsp+6A08h] [rbp+6988h]
  _BYTE *v563; // [rsp+6A10h] [rbp+6990h]
  __m128i v564; // [rsp+6A18h] [rbp+6998h]
  volatile signed __int64 **v565; // [rsp+6A28h] [rbp+69A8h]
  signed __int64 v566; // [rsp+6A30h] [rbp+69B0h]
  _BYTE *v567; // [rsp+6A38h] [rbp+69B8h]
  __m128i v568; // [rsp+6A40h] [rbp+69C0h]
  __int64 v569; // [rsp+6A50h] [rbp+69D0h]
  char *v570; // [rsp+6A58h] [rbp+69D8h]
  volatile signed __int64 **v571; // [rsp+6A60h] [rbp+69E0h]
  signed __int64 v572; // [rsp+6A68h] [rbp+69E8h]
  _BYTE *v573; // [rsp+6A70h] [rbp+69F0h]
  __m128i v574; // [rsp+6A78h] [rbp+69F8h]
  __int64 v575; // [rsp+6A88h] [rbp+6A08h]
  char *v576; // [rsp+6A90h] [rbp+6A10h]
  __int64 v577; // [rsp+6A98h] [rbp+6A18h]
  __int64 v578; // [rsp+6AA0h] [rbp+6A20h]
  __int64 v579; // [rsp+6AA8h] [rbp+6A28h]
  signed __int64 v580; // [rsp+6AB0h] [rbp+6A30h]
  _BYTE *v581; // [rsp+6AB8h] [rbp+6A38h]
  __m128i v582; // [rsp+6AC0h] [rbp+6A40h]
  const __m128i *v583; // [rsp+6AD0h] [rbp+6A50h]
  volatile signed __int64 **v584; // [rsp+6AD8h] [rbp+6A58h]
  signed __int64 v585; // [rsp+6AE0h] [rbp+6A60h]
  _BYTE *v586; // [rsp+6AE8h] [rbp+6A68h]
  __m128i v587; // [rsp+6AF0h] [rbp+6A70h]
  __int64 v588; // [rsp+6B00h] [rbp+6A80h]
  char *v589; // [rsp+6B08h] [rbp+6A88h]
  __int64 *v590; // [rsp+6B10h] [rbp+6A90h]
  volatile signed __int64 **v591; // [rsp+6B18h] [rbp+6A98h]
  const __m128i *v592; // [rsp+6B20h] [rbp+6AA0h]
  volatile signed __int64 **v593; // [rsp+6B28h] [rbp+6AA8h]
  signed __int64 v594; // [rsp+6B30h] [rbp+6AB0h]
  _BYTE *v595; // [rsp+6B38h] [rbp+6AB8h]
  __m128i v596; // [rsp+6B40h] [rbp+6AC0h]
  __int64 v597; // [rsp+6B50h] [rbp+6AD0h]
  char *v598; // [rsp+6B58h] [rbp+6AD8h]
  __int64 *v599; // [rsp+6B60h] [rbp+6AE0h]
  volatile signed __int64 **v600; // [rsp+6B68h] [rbp+6AE8h]
  __int64 v601; // [rsp+6B70h] [rbp+6AF0h]
  __int64 v602; // [rsp+6B78h] [rbp+6AF8h]
  unsigned __int64 v603; // [rsp+6B80h] [rbp+6B00h]
  __int64 v604; // [rsp+6B88h] [rbp+6B08h]
  __int64 v605; // [rsp+6B90h] [rbp+6B10h]
  signed __int64 v606; // [rsp+6B98h] [rbp+6B18h]
  _BYTE *v607; // [rsp+6BA0h] [rbp+6B20h]
  __m128i v608; // [rsp+6BA8h] [rbp+6B28h]
  __int64 v609; // [rsp+6BB8h] [rbp+6B38h]
  _BYTE *v610; // [rsp+6BC0h] [rbp+6B40h]
  __int64 v611; // [rsp+6BC8h] [rbp+6B48h]
  unsigned __int64 v612; // [rsp+6BD0h] [rbp+6B50h]
  const __m128i *v613; // [rsp+6BD8h] [rbp+6B58h]
  volatile signed __int64 **v614; // [rsp+6BE0h] [rbp+6B60h]
  signed __int64 v615; // [rsp+6BE8h] [rbp+6B68h]
  _BYTE *v616; // [rsp+6BF0h] [rbp+6B70h]
  __m128i v617; // [rsp+6BF8h] [rbp+6B78h]
  __int64 v618; // [rsp+6C08h] [rbp+6B88h]
  char *v619; // [rsp+6C10h] [rbp+6B90h]
  __int64 *v620; // [rsp+6C18h] [rbp+6B98h]
  volatile signed __int64 **v621; // [rsp+6C20h] [rbp+6BA0h]
  volatile signed __int64 **v622; // [rsp+6C28h] [rbp+6BA8h]
  signed __int64 v623; // [rsp+6C30h] [rbp+6BB0h]
  _BYTE *v624; // [rsp+6C38h] [rbp+6BB8h]
  __m128i v625; // [rsp+6C40h] [rbp+6BC0h]
  __int64 v626; // [rsp+6C50h] [rbp+6BD0h]
  char *v627; // [rsp+6C58h] [rbp+6BD8h]
  __int64 v628; // [rsp+6C60h] [rbp+6BE0h]
  __int64 v629; // [rsp+6C68h] [rbp+6BE8h]
  __int64 v630; // [rsp+6C70h] [rbp+6BF0h]
  char *v631; // [rsp+6C78h] [rbp+6BF8h]
  __int64 v632; // [rsp+6C80h] [rbp+6C00h]
  volatile signed __int64 **v633; // [rsp+6C88h] [rbp+6C08h]
  signed __int64 v634; // [rsp+6C90h] [rbp+6C10h]
  _BYTE *v635; // [rsp+6C98h] [rbp+6C18h]
  __m128i v636; // [rsp+6CA0h] [rbp+6C20h]
  __int64 v637; // [rsp+6CB0h] [rbp+6C30h]
  char *v638; // [rsp+6CB8h] [rbp+6C38h]
  int v639; // [rsp+6CC0h] [rbp+6C40h]
  int v640; // [rsp+6CC4h] [rbp+6C44h]
  _BYTE *v641; // [rsp+6CC8h] [rbp+6C48h]
  __int64 v642; // [rsp+6CD0h] [rbp+6C50h]
  char *v643; // [rsp+6CD8h] [rbp+6C58h]
  const __m128i *v644; // [rsp+6CE0h] [rbp+6C60h]
  volatile signed __int64 **v645; // [rsp+6CE8h] [rbp+6C68h]
  signed __int64 v646; // [rsp+6CF0h] [rbp+6C70h]
  _BYTE *v647; // [rsp+6CF8h] [rbp+6C78h]
  __m128i v648; // [rsp+6D00h] [rbp+6C80h]
  __int64 v649; // [rsp+6D10h] [rbp+6C90h]
  char *v650; // [rsp+6D18h] [rbp+6C98h]
  char *v651; // [rsp+6D20h] [rbp+6CA0h]
  __int64 v652; // [rsp+6D28h] [rbp+6CA8h]
  unsigned __int64 v653; // [rsp+6D30h] [rbp+6CB0h]
  __int64 v654; // [rsp+6D38h] [rbp+6CB8h]
  volatile signed __int64 **v655; // [rsp+6D40h] [rbp+6CC0h]
  signed __int64 v656; // [rsp+6D48h] [rbp+6CC8h]
  _BYTE *v657; // [rsp+6D50h] [rbp+6CD0h]
  __m128i v658; // [rsp+6D58h] [rbp+6CD8h]
  __int64 v659; // [rsp+6D68h] [rbp+6CE8h]
  char *v660; // [rsp+6D70h] [rbp+6CF0h]
  __int64 v661; // [rsp+6D78h] [rbp+6CF8h]
  volatile signed __int64 **v662; // [rsp+6D80h] [rbp+6D00h]
  signed __int64 v663; // [rsp+6D88h] [rbp+6D08h]
  _BYTE *v664; // [rsp+6D90h] [rbp+6D10h]
  __m128i v665; // [rsp+6D98h] [rbp+6D18h]
  __int64 v666; // [rsp+6DA8h] [rbp+6D28h]
  char *v667; // [rsp+6DB0h] [rbp+6D30h]
  int v668; // [rsp+6DBCh] [rbp+6D3Ch]
  int v669; // [rsp+6DC0h] [rbp+6D40h]
  int v670; // [rsp+6DC4h] [rbp+6D44h]
  volatile signed __int64 **v671; // [rsp+6DC8h] [rbp+6D48h]
  signed __int64 v672; // [rsp+6DD0h] [rbp+6D50h]
  _BYTE *v673; // [rsp+6DD8h] [rbp+6D58h]
  __m128i v674; // [rsp+6DE0h] [rbp+6D60h]
  __int64 v675; // [rsp+6DF0h] [rbp+6D70h]
  char *v676; // [rsp+6DF8h] [rbp+6D78h]
  __int64 v677; // [rsp+6E00h] [rbp+6D80h]
  char *v678; // [rsp+6E08h] [rbp+6D88h]
  _BYTE *v679; // [rsp+6E10h] [rbp+6D90h]
  __int64 v680; // [rsp+6E18h] [rbp+6D98h]
  char *v681; // [rsp+6E20h] [rbp+6DA0h]
  __int64 v682; // [rsp+6E28h] [rbp+6DA8h]
  char *v683; // [rsp+6E30h] [rbp+6DB0h]
  __int64 v684; // [rsp+6E38h] [rbp+6DB8h]
  _BYTE *v685; // [rsp+6E40h] [rbp+6DC0h]
  __int64 v686; // [rsp+6E48h] [rbp+6DC8h]
  unsigned __int64 v687; // [rsp+6E50h] [rbp+6DD0h]
  __int64 v688; // [rsp+6E58h] [rbp+6DD8h]
  volatile signed __int64 **v689; // [rsp+6E60h] [rbp+6DE0h]
  signed __int64 v690; // [rsp+6E68h] [rbp+6DE8h]
  _BYTE *v691; // [rsp+6E70h] [rbp+6DF0h]
  __m128i v692; // [rsp+6E78h] [rbp+6DF8h]
  __int64 v693; // [rsp+6E88h] [rbp+6E08h]
  char *v694; // [rsp+6E90h] [rbp+6E10h]
  _BYTE *v695; // [rsp+6E98h] [rbp+6E18h]
  __int64 v696; // [rsp+6EA0h] [rbp+6E20h]
  char *v697; // [rsp+6EA8h] [rbp+6E28h]
  volatile signed __int64 **v698; // [rsp+6EB0h] [rbp+6E30h]
  signed __int64 v699; // [rsp+6EB8h] [rbp+6E38h]
  __int64 v700; // [rsp+6EC0h] [rbp+6E40h]
  char *v701; // [rsp+6EC8h] [rbp+6E48h]
  __int64 v702; // [rsp+6ED0h] [rbp+6E50h]
  __int64 v703; // [rsp+6ED8h] [rbp+6E58h]
  char *v704; // [rsp+6EE0h] [rbp+6E60h]
  __int64 v705; // [rsp+6EE8h] [rbp+6E68h]
  char *v706; // [rsp+6EF0h] [rbp+6E70h]
  char v707; // [rsp+6EFFh] [rbp+6E7Fh] BYREF
  _BYTE *v708; // [rsp+6F00h] [rbp+6E80h]
  __int128 v709; // [rsp+6F08h] [rbp+6E88h]
  _BYTE *v710; // [rsp+6F18h] [rbp+6E98h]
  const __m128i *v711; // [rsp+6F20h] [rbp+6EA0h]
  const __m128i *v712; // [rsp+6F28h] [rbp+6EA8h]
  __int128 v713; // [rsp+6F30h] [rbp+6EB0h]
  __int64 v714; // [rsp+6F40h] [rbp+6EC0h]
  __int64 v715; // [rsp+6F48h] [rbp+6EC8h]
  char *v716; // [rsp+6F50h] [rbp+6ED0h]
  const __m128i *v717; // [rsp+6F58h] [rbp+6ED8h]
  _BYTE *v718; // [rsp+6F60h] [rbp+6EE0h]
  __int64 v719; // [rsp+6F68h] [rbp+6EE8h]
  __int64 v720; // [rsp+6F70h] [rbp+6EF0h]
  const __m128i *v721; // [rsp+6F78h] [rbp+6EF8h]
  __m128i *v722; // [rsp+6F80h] [rbp+6F00h]
  const __m128i *v723; // [rsp+6F88h] [rbp+6F08h]
  __int64 v724; // [rsp+6F90h] [rbp+6F10h]
  unsigned __int64 v725; // [rsp+6F98h] [rbp+6F18h]
  volatile signed __int64 **v726; // [rsp+6FA0h] [rbp+6F20h]
  signed __int64 v727; // [rsp+6FA8h] [rbp+6F28h]
  volatile signed __int64 **v728; // [rsp+6FB0h] [rbp+6F30h]
  __m128i v729; // [rsp+6FB8h] [rbp+6F38h]
  __int64 v730; // [rsp+6FC8h] [rbp+6F48h]
  _BYTE *v731; // [rsp+6FD0h] [rbp+6F50h]
  char *v732; // [rsp+6FD8h] [rbp+6F58h]
  __int64 v733; // [rsp+6FE0h] [rbp+6F60h]
  __int64 v734; // [rsp+6FE8h] [rbp+6F68h]

  *(_QWORD *)&v4 = a1;
  v734 = -2;
  v8 = a3;
  v9 = a2;
  v10 = (volatile signed __int64 **)v4;
  v11 = *(unsigned __int8 *)(a2 + 476);
  v733 = a2;
  switch ( v11 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 472) = 0;
      *(_QWORD *)(a2 + 465) = 0;
      *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 456);
      v12 = sub_1408DBA10();
      v13 = v733;
      *(_BYTE *)(v733 + 464) = v12;
      sub_1408DC260(v340, *(_QWORD *)(v13 + 272), v12);
      v5 = *(_QWORD *)&v340[8];
      v4 = *(_OWORD *)&v340[16];
      if ( v340[0] )
      {
        v14 = -1;
        v15 = *(_QWORD *)&v340[8];
        v16 = v733;
        goto LABEL_268;
      }
      *(_BYTE *)(v733 + 475) = 0;
      v355.m256i_i64[0] = v5;
      *(_OWORD *)&v355.m256i_u64[1] = v4;
      v732 = (char *)v4;
      v678 = (char *)v4;
      v677 = v5;
      sub_141146320(v340, &v355);
      v6 = *(char **)v340;
      if ( *(_QWORD *)v340 == -1 )
      {
        v730 = v5;
        sub_1419234B0(&v355, &v340[8], 136);
        v332.m128i_i64[0] = (__int64)&v355;
        v332.m128i_i64[1] = (__int64)sub_1411437C0;
        sub_1416DAFA0(&v347, &unk_141A8CF53, &v332);
        v678 = v732;
        v677 = v730;
        sub_140C40860(&v355);
        v729 = v347;
        *((_QWORD *)&v4 + 1) = v348;
        v14 = -1;
        goto LABEL_204;
      }
      v7 = *(_QWORD *)&v340[24];
      sub_1419234B0(&v355, &v340[32], 192);
      v34 = _mm_loadu_si128((const __m128i *)&v340[8]);
      v9 = v733;
      *(_BYTE *)(v733 + 466) = 1;
      *(_QWORD *)v9 = v6;
      *(__m128i *)(v9 + 8) = v34;
      *(_QWORD *)(v9 + 24) = v7;
      sub_1419234B0(v9 + 32, &v355, 192);
      if ( *(_BYTE *)(v9 + 464) == 2 )
        goto LABEL_19;
      v80 = *(_QWORD *)(v9 + 272);
      v81 = *(_QWORD *)(v80 + 32);
      v82 = *(_QWORD *)(v80 + 40);
      v6 = v732;
      v704 = v732;
      v703 = v5;
      v83.m128i_i64[0] = sub_1408FEA60(v81, v82);
      v330 = v83;
      if ( !v83.m128i_i64[1] )
      {
        v704 = v6;
        v703 = v5;
        sub_140CAA6B0(v340);
        v729 = *(__m128i *)v340;
        *((_QWORD *)&v4 + 1) = *(_QWORD *)&v340[16];
        goto LABEL_201;
      }
      v332.m128i_i64[0] = (__int64)&v330;
      v332.m128i_i64[1] = (__int64)sub_140191200;
      v704 = v6;
      v703 = v5;
      sub_1416DAFA0(&v347, &unk_141A8D6B8, &v332);
      v731 = (_BYTE *)v347.m128i_i64[0];
      v730 = v5;
      v728 = (volatile signed __int64 **)v347.m128i_i64[1];
      if ( !(_QWORD)v348 )
        goto LABEL_74;
      v84 = 0;
      break;
    case 1LL:
      sub_14196B990(&off_141A8D730);
    case 2LL:
      sub_14196B9B0(&off_141A8D730);
    case 3LL:
      v729.m128i_i64[1] = a2 + 11160;
      v24 = *(unsigned __int8 *)(a2 + 11160);
      v729.m128i_i64[0] = a2 + 480;
      switch ( v24 )
      {
        case 0LL:
          goto LABEL_20;
        case 1LL:
          v628 = v729.m128i_i64[0];
          sub_14196B990(&off_141A8CA28);
        case 2LL:
          JUMPOUT(0x140C8B874LL);
        case 3LL:
          v731 = (_BYTE *)(a2 + 11153);
          v26 = *(unsigned __int8 *)(a2 + 11153);
          v727 = a2 + 704;
          switch ( v26 )
          {
            case 0LL:
              v27 = *(_BYTE *)(a2 + 11152);
              v28 = *(_QWORD *)(a2 + 704);
              v29 = a2 + 712;
              if ( v28 == -1 )
                goto LABEL_16;
              goto LABEL_21;
            case 1LL:
              v498 = v729;
              v497 = v727;
              sub_14196B990(&off_141A8CA40);
            case 2LL:
              v498 = v729;
              v497 = v727;
              sub_14196B9B0(&off_141A8CA40);
            case 3LL:
              v651 = (char *)(a2 + 1899);
              v79 = (volatile signed __int64 **)(a2 + 1224);
              switch ( *(_BYTE *)(a2 + 1899) )
              {
                case 0:
                  v726 = (volatile signed __int64 **)v4;
                  v35 = a3;
                  v27 = *(_BYTE *)(a2 + 1898);
                  v43 = *(_QWORD *)(a2 + 1224);
                  v39 = (volatile signed __int64 **)(a2 + 1224);
                  break;
                case 1:
                  v502 = v729;
                  v501 = v731;
                  v500 = v727;
                  v499 = a2 + 1224;
                  sub_14196B990(&off_141A8D870);
                case 2:
                  v502 = v729;
                  v501 = v731;
                  v500 = v727;
                  v499 = a2 + 1224;
                  sub_14196B9B0(&off_141A8D870);
                case 3:
                  v716 = (char *)(a2 + 1944);
                  v70 = (const __m128i *)(a2 + 1920);
                  switch ( *(_BYTE *)(a2 + 1944) )
                  {
                    case 0:
                      v728 = (volatile signed __int64 **)(a2 + 1224);
                      v71 = (char *)(a2 + 1944);
                      goto LABEL_47;
                    case 1:
                      v564 = v729;
                      v563 = v731;
                      v562 = v727;
                      v561 = a2 + 1224;
                      v560 = a2 + 1920;
                      sub_14196B990(&off_141A8C7F8);
                    case 2:
                      v564 = v729;
                      v563 = v731;
                      v562 = v727;
                      v561 = a2 + 1224;
                      v560 = a2 + 1920;
                      sub_14196B9B0(&off_141A8C7F8);
                    case 3:
                      v721 = (const __m128i *)(a2 + 1920);
                      v728 = (volatile signed __int64 **)(a2 + 1224);
                      v71 = (char *)(a2 + 1944);
                      goto LABEL_50;
                    case 4:
                      v109 = a2 + 2104;
                      v110 = *(unsigned __int8 *)(v9 + 2104);
                      v720 = v9 + 2000;
                      switch ( v110 )
                      {
                        case 0LL:
                          v111 = v720;
                          break;
                        case 1LL:
                          v582 = v729;
                          v581 = v731;
                          v580 = v727;
                          v579 = v9 + 1224;
                          v578 = v9 + 1920;
                          JUMPOUT(0x140C8BD88LL);
                        case 2LL:
                          v582 = v729;
                          v581 = v731;
                          v580 = v727;
                          v579 = v9 + 1224;
                          v578 = v9 + 1920;
                          v577 = v720;
                          sub_14196B9B0(&off_141A8D1D0);
                        case 3LL:
                          v725 = v9 + 2104;
                          v718 = (_BYTE *)(v9 + 2096);
                          v121 = *(unsigned __int8 *)(v9 + 2096);
                          v719 = v9 + 2032;
                          switch ( v121 )
                          {
                            case 0LL:
                              v122 = *(_QWORD *)(v9 + 2032);
                              v123 = *(_QWORD *)(v9 + 2040);
                              v124 = v718;
                              v125 = v719;
                              goto LABEL_297;
                            case 1LL:
                              v608 = v729;
                              v607 = v731;
                              v606 = v727;
                              v605 = v9 + 1224;
                              v604 = v9 + 1920;
                              v603 = v725;
                              v602 = v720;
                              v601 = v719;
                              sub_14196B990(&off_141A8D1B8);
                            case 2LL:
                              v608 = v729;
                              v607 = v731;
                              v606 = v727;
                              v605 = v9 + 1224;
                              v604 = v9 + 1920;
                              v603 = v725;
                              v602 = v720;
                              v601 = v719;
                              sub_14196B9B0(&off_141A8D1B8);
                            case 3LL:
                              v721 = (const __m128i *)(v9 + 1920);
                              v728 = (volatile signed __int64 **)(v9 + 1224);
                              v150 = *(_QWORD *)(v9 + 2088);
                              goto LABEL_299;
                          }
                      }
                      goto LABEL_295;
                  }
                case 4:
                  v92 = (char *)(a2 + 2600);
                  v93 = *(unsigned __int8 *)(a2 + 2600);
                  v724 = a2 + 1904;
                  v728 = (volatile signed __int64 **)(a2 + 1224);
                  switch ( v93 )
                  {
                    case 0LL:
                      v706 = (char *)(a2 + 2600);
                      v726 = *(volatile signed __int64 ***)(a2 + 1952);
                      v5 = a2 + 1904;
                      goto LABEL_340;
                    case 1LL:
                      v507 = v729;
                      v506 = v731;
                      v505 = v727;
                      v504 = a2 + 1224;
                      v503 = v724;
                      sub_14196B990(&off_141A8C998);
                    case 2LL:
                      v507 = v729;
                      v506 = v731;
                      v505 = v727;
                      v504 = a2 + 1224;
                      v503 = v724;
                      sub_14196B9B0(&off_141A8C998);
                    case 3LL:
                      goto LABEL_98;
                    case 4LL:
                      v706 = (char *)(a2 + 2600);
                      v115 = (_BYTE *)(a2 + 2649);
                      v116 = a2 + 2608;
                      if ( *(_BYTE *)(a2 + 2649) )
                      {
                        if ( *(_BYTE *)(a2 + 2649) == 1 )
                        {
                          v545 = v729;
                          v544 = v731;
                          v543 = v727;
                          v542 = v728;
                          v541 = v724;
                          v540 = a2 + 2649;
                          v539 = a2 + 2608;
                          sub_14196B990(&off_141A8CBA0);
                        }
                        v545 = v729;
                        v544 = v731;
                        v543 = v727;
                        v542 = v728;
                        v541 = v724;
                        v540 = a2 + 2649;
                        v539 = a2 + 2608;
                        sub_14196B9B0(&off_141A8CBA0);
                      }
                      LOBYTE(v117) = *(_BYTE *)(a2 + 2648);
                      goto LABEL_102;
                    case 5LL:
                      goto LABEL_96;
                    case 6LL:
                      v725 = a2 + 11144;
                      v112 = a2 + 2608;
                      switch ( *(_BYTE *)(a2 + 11144) )
                      {
                        case 0:
                          v706 = (char *)(a2 + 2600);
                          goto LABEL_112;
                        case 1:
                          v513 = v729;
                          v512 = v731;
                          v511 = v727;
                          v510 = a2 + 1224;
                          v509 = v724;
                          v508 = a2 + 2608;
                          sub_14196B990(&off_141A8C6E0);
                        case 2:
                          v513 = v729;
                          v512 = v731;
                          v511 = v727;
                          v510 = a2 + 1224;
                          JUMPOUT(0x140C8BDEELL);
                        case 3:
                          v708 = (_BYTE *)(a2 + 11136);
                          v135 = a2 + 4008;
                          switch ( *(_BYTE *)(a2 + 11136) )
                          {
                            case 0:
                              v706 = (char *)(a2 + 2600);
                              break;
                            case 1:
                              v521 = v729;
                              v520 = v731;
                              v519 = v727;
                              v518 = a2 + 1224;
                              v517 = v724;
                              v516 = v725;
                              v515 = a2 + 2608;
                              v514 = a2 + 4008;
                              sub_14196B990(&off_141A8CAD0);
                            case 2:
                              v521 = v729;
                              v520 = v731;
                              v519 = v727;
                              v518 = a2 + 1224;
                              v517 = v724;
                              v516 = v725;
                              v515 = a2 + 2608;
                              v514 = a2 + 4008;
                              sub_14196B9B0(&off_141A8CAD0);
                            case 3:
                              v701 = (char *)(a2 + 6808);
                              v136 = a2 + 5408;
                              switch ( *(_BYTE *)(a2 + 6808) )
                              {
                                case 0:
                                  v706 = (char *)(a2 + 2600);
                                  goto LABEL_114;
                                case 1:
                                  v531 = v729;
                                  v530 = v731;
                                  v529 = v727;
                                  v528 = v728;
                                  v527 = v724;
                                  v526 = v725;
                                  v525 = a2 + 2608;
                                  v524 = v708;
                                  v523 = a2 + 4008;
                                  v522 = a2 + 5408;
                                  sub_14196B990(&off_141A8CAE8);
                                case 2:
                                  v531 = v729;
                                  v530 = v731;
                                  v529 = v727;
                                  v528 = v728;
                                  v527 = v724;
                                  v526 = v725;
                                  v525 = a2 + 2608;
                                  v524 = v708;
                                  v523 = a2 + 4008;
                                  v522 = a2 + 5408;
                                  sub_14196B9B0(&off_141A8CAE8);
                                case 3:
                                  v702 = a2 + 5408;
                                  v705 = a2 + 4008;
                                  v715 = a2 + 2608;
                                  goto LABEL_115;
                                case 4:
                                  v702 = a2 + 5408;
                                  v705 = a2 + 4008;
                                  v715 = a2 + 2608;
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
      v726 = (volatile signed __int64 **)v4;
      v17 = a2 + 488;
      v18 = *(volatile signed __int64 ***)(a2 + 488);
      if ( v18 != (volatile signed __int64 **)-1LL )
      {
        v729.m128i_i64[0] = *(_QWORD *)(a2 + 488);
        v19 = v8;
        goto LABEL_212;
      }
      v50 = *(__int64 **)(a2 + 528);
      goto LABEL_217;
    case 5LL:
      goto LABEL_6;
  }
  do
  {
    v85 = *(_BYTE *)(v347.m128i_i64[1] + v84);
    if ( v85 > 0x1Fu )
    {
      if ( v85 == 127 )
        goto LABEL_65;
    }
    else if ( v85 != 9 )
    {
LABEL_65:
      v347.m128i_i64[0] = (__int64)&v707;
      v347.m128i_i64[1] = (__int64)sub_14167F5E0;
      sub_1416DAFA0(&v355, &unk_141A8CF8F, &v347);
      v729 = *(__m128i *)v355.m256i_i8;
      *((_QWORD *)&v4 + 1) = v355.m256i_i64[2];
      v16 = v733;
      v5 = v730;
      v6 = v732;
      if ( !v731 )
        goto LABEL_202;
      sub_140001660(v728, v731, 1);
      v14 = -1;
      if ( *(_BYTE *)(v16 + 466) )
        goto LABEL_203;
      goto LABEL_267;
    }
    ++v84;
  }
  while ( (_QWORD)v348 != v84 );
LABEL_74:
  sub_141682400(v340, v347.m128i_i64[1]);
  v340[32] = 0;
  v95 = _mm_loadu_si128((const __m128i *)v340);
  *(_OWORD *)&v355.m256i_u64[2] = *(_OWORD *)&v340[16];
  *(__m128i *)v355.m256i_i8 = v95;
  *(_QWORD *)&v356 = *(_QWORD *)&v340[32];
  v729.m128i_i64[1] = v95.m128i_i64[1];
  v96 = v95.m128i_i64[0];
  v97 = *(_QWORD *)&v340[16];
  v7 = v355.m256i_i64[3];
  LODWORD(v320) = *(_DWORD *)((char *)&v356 + 1);
  *(_DWORD *)((char *)&v320 + 3) = DWORD1(v356);
  v99 = v733;
  if ( v731 )
    sub_140001660(v728, v731, 1);
  *(_QWORD *)v340 = v96;
  *(_QWORD *)&v340[8] = v729.m128i_i64[1];
  *(_QWORD *)&v340[16] = v97;
  *(_QWORD *)&v340[24] = v7;
  v340[32] = 0;
  *(_DWORD *)&v340[33] = v320;
  *(_DWORD *)&v340[36] = *(_DWORD *)((char *)&v320 + 3);
  v348 = xmmword_141A8D6D8;
  v347 = _mm_loadu_si128((const __m128i *)&xmmword_141A8D6C8);
  v100 = v732;
  v704 = v732;
  v703 = v730;
  v101 = v99;
  v5 = v730;
  sub_140651620(&v355, v101, &v347, v340);
  if ( (_BYTE)v356 != 2 )
  {
    v102 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v355.m256i_i64[0] + 32);
    v704 = v100;
    v703 = v5;
    v102(&v355.m256i_u64[3], v355.m256i_i64[1], v355.m256i_i64[2]);
  }
  v348 = xmmword_141A8D6F8;
  v347 = _mm_loadu_si128((const __m128i *)&xmmword_141A8D6E8);
  *(_QWORD *)v340 = off_141A8DE70;
  *(_QWORD *)&v340[8] = aAimamiTypemami_0;
  *(_OWORD *)&v340[16] = 0xFu;
  v340[32] = 0;
  v704 = v100;
  v703 = v5;
  sub_140651620(&v355, v733, &v347, v340);
  if ( (_BYTE)v356 != 2 )
  {
    v103 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v355.m256i_i64[0] + 32);
    v704 = v100;
    v703 = v5;
    v103(&v355.m256i_u64[3], v355.m256i_i64[1], v355.m256i_i64[2]);
  }
  v9 = v733;
LABEL_19:
  *(_BYTE *)(v9 + 466) = 0;
  v729.m128i_i64[0] = v9 + 480;
  sub_1419234B0(v9 + 480, v9, 224);
  v729.m128i_i64[1] = v9 + 11160;
  *(_BYTE *)(v9 + 11160) = 0;
LABEL_20:
  v727 = v9 + 704;
  sub_1419234B0(v9 + 704, v729.m128i_i64[0], 224);
  *(_QWORD *)(v9 + 928) = 2;
  *(_WORD *)(v9 + 11152) = 0;
  v731 = (_BYTE *)(v9 + 11153);
  v27 = 0;
  v28 = *(_QWORD *)(v9 + 704);
  v29 = v9 + 712;
  if ( v28 == -1 )
  {
LABEL_16:
    *(_QWORD *)&v713 = v8;
    v730 = v5;
    sub_1419234B0(v9 + 1008, v29, 136);
    *(_QWORD *)(v9 + 1000) = -1;
    v30 = *(_QWORD *)(v9 + 1008);
    v31 = v9;
    v32 = *(_QWORD *)(v9 + 1016);
    *((_QWORD *)&v713 + 1) = *(_QWORD *)(v31 + 1024);
    v723 = *(const __m128i **)(v31 + 1032);
    v712 = *(const __m128i **)(v31 + 1040);
    v711 = *(const __m128i **)(v31 + 1048);
    v717 = *(const __m128i **)(v31 + 1056);
    v722 = *(__m128i **)(v31 + 1064);
    v709 = *(_OWORD *)(v31 + 1072);
    v721 = *(const __m128i **)(v31 + 1088);
    v716 = *(char **)(v31 + 1096);
    v718 = *(_BYTE **)(v31 + 1104);
    v710 = *(_BYTE **)(v31 + 1112);
    v720 = *(_QWORD *)(v31 + 1120);
    v714 = *(_QWORD *)(v31 + 1128);
    v719 = *(_QWORD *)(v31 + 1136);
    v33 = 2;
    goto LABEL_199;
  }
LABEL_21:
  v726 = v10;
  v35 = v8;
  *(_QWORD *)(v9 + 1000) = v28;
  sub_1419234B0(v9 + 1008, v29, 136);
  v36 = *(_OWORD *)(v9 + 864);
  v37 = *(_OWORD *)(v9 + 880);
  v38 = *(_OWORD *)(v9 + 896);
  *(_OWORD *)(v9 + 1144) = *(_OWORD *)(v9 + 848);
  *(_OWORD *)(v9 + 1160) = v36;
  *(_OWORD *)(v9 + 1176) = v37;
  *(_OWORD *)(v9 + 1192) = v38;
  *(_OWORD *)(v9 + 1208) = *(_OWORD *)(v9 + 912);
  sub_1419234B0(&v340[8], v9 + 1000, 224);
  sub_1419234B0(v316, v340, 232);
  v39 = (volatile signed __int64 **)(v9 + 1224);
  *(_QWORD *)(v9 + 1224) = 0;
  sub_1419234B0(v9 + 1232, v316, 232);
  v40 = *(_OWORD *)(v9 + 944);
  v41 = *(_OWORD *)(v9 + 960);
  v42 = *(_OWORD *)(v9 + 976);
  *(_OWORD *)(v9 + 1464) = *(_OWORD *)(v9 + 928);
  *(_OWORD *)(v9 + 1480) = v40;
  *(_OWORD *)(v9 + 1496) = v41;
  *(_OWORD *)(v9 + 1512) = v42;
  *(_QWORD *)(v9 + 1528) = *(_QWORD *)(v9 + 992);
  *(_BYTE *)(v9 + 1898) = v27;
  v651 = (char *)(v9 + 1899);
  *(_BYTE *)(v9 + 1899) = 0;
  v43 = 0;
LABEL_22:
  *(_BYTE *)(v9 + 1902) = 1;
  sub_1419234B0(v9 + 1536, v9 + 1240, 224);
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
  v627 = v732;
  v626 = v5;
  v625 = v729;
  v624 = v731;
  v623 = v727;
  v728 = v39;
  v622 = v39;
  sub_140C96BE0(v340, v9 + 1536);
  v30 = *(_QWORD *)v340;
  v46 = *(_QWORD *)&v340[24];
  v45 = *(_QWORD *)&v340[16];
  *(_QWORD *)&v713 = v35;
  v730 = v5;
  if ( *(_QWORD *)v340 != -1 )
  {
    v723 = *(const __m128i **)&v340[24];
    *((_QWORD *)&v713 + 1) = *(_QWORD *)&v340[16];
    v711 = *(const __m128i **)&v340[40];
    v712 = *(const __m128i **)&v340[32];
    v722 = *(__m128i **)&v340[56];
    v717 = *(const __m128i **)&v340[48];
    v9 = *(_QWORD *)&v340[72];
    *(_QWORD *)&v709 = *(_QWORD *)&v340[64];
    v716 = *(char **)&v340[88];
    v721 = *(const __m128i **)&v340[80];
    v718 = *(_BYTE **)&v340[96];
    v720 = v341.m128i_i64[1];
    v710 = (_BYTE *)v341.m128i_i64[0];
    v714 = v342.m128i_i64[0];
    v47 = *(_WORD *)&v340[8];
    v48 = *(_QWORD *)&v340[8] >> 16;
    v719 = v342.m128i_i64[1];
    v49 = (_QWORD *)v733;
    v10 = v726;
LABEL_193:
    v167 = v730;
    if ( v49[238] )
    {
      v168 = *(volatile signed __int64 **)(v733 + 1912);
      if ( v168 )
      {
        if ( !_InterlockedDecrement64(v168) )
        {
          v576 = v732;
          v575 = v167;
          v574 = v729;
          v573 = v731;
          v572 = v727;
          v571 = v728;
          sub_1413018E0(v733 + 1912, v45);
        }
      }
    }
    *((_QWORD *)&v709 + 1) = v9;
    v169 = v733;
    *(_BYTE *)(v733 + 1901) = 0;
    v570 = v732;
    v569 = v167;
    v568 = v729;
    v567 = v731;
    v566 = v727;
    v170 = v728;
    v565 = v728;
    sub_14028DBC0(v169 + 1536);
    v33 = 2;
    v171 = (_BYTE *)v733;
    goto LABEL_198;
  }
  v62 = v733;
  *(_QWORD *)(v733 + 1832) = *(_QWORD *)&v340[8];
  *(_QWORD *)(v62 + 1840) = v45;
  *(_QWORD *)(v62 + 1848) = v46;
  v63 = (_BYTE *)(v62 + 1632);
  v676 = v732;
  v675 = v5;
  v674 = v729;
  v673 = v731;
  v672 = v727;
  v671 = v728;
  v64 = sub_14167EA50(v62 + 1632);
  v10 = v726;
  v8 = v713;
  if ( v64 == 1 )
  {
    v66 = v65;
    *(_QWORD *)&v340[8] = 0x8000000000000003uLL;
    *(_QWORD *)v340 = 12;
    goto LABEL_46;
  }
  v49 = (_QWORD *)v733;
  if ( *v63 != 2 )
  {
LABEL_67:
    v723 = *(const __m128i **)&v340[24];
    *((_QWORD *)&v713 + 1) = *(_QWORD *)&v340[16];
    v711 = *(const __m128i **)&v340[40];
    v712 = *(const __m128i **)&v340[32];
    v722 = *(__m128i **)&v340[56];
    v717 = *(const __m128i **)&v340[48];
    v9 = *(_QWORD *)&v340[72];
    *(_QWORD *)&v709 = *(_QWORD *)&v340[64];
    v86 = *(char **)&v340[88];
    v87 = *(const __m128i **)&v340[80];
    v88 = *(_BYTE **)&v340[96];
    v89 = v341.m128i_i64[1];
    v710 = (_BYTE *)v341.m128i_i64[0];
    v91 = v342.m128i_i64[1];
    v90 = v342.m128i_i64[0];
    v30 = 12;
    v48 = 0x800000000000LL;
    v47 = 3;
    goto LABEL_290;
  }
  v104 = *(_QWORD *)(v733 + 1640);
  v105 = *(_WORD **)(v104 + 8);
  v106 = *(_QWORD *)(v104 + 16);
  if ( v106 == 2 )
  {
    v108 = (unsigned __int16)__ROL2__(*v105, 8) - 30579;
    v66 = 80;
  }
  else
  {
    if ( v106 != 3 )
      goto LABEL_67;
    v107 = __ROL2__(*v105, 8);
    if ( v107 == 30579 )
      v108 = *((unsigned __int8 *)v105 + 2) - 115;
    else
      v108 = 2 * (v107 >= 0x7773u) - 1;
    v66 = 443;
  }
  *(_QWORD *)&v340[8] = 0x8000000000000003uLL;
  *(_QWORD *)v340 = 12;
  if ( v108 )
    goto LABEL_67;
LABEL_46:
  v676 = v732;
  v675 = v730;
  v674 = v729;
  v673 = v731;
  v672 = v727;
  v671 = v728;
  sub_140C40860(v340);
  v67 = v733 + 1832;
  v68 = v733 + 1896;
  *(_WORD *)(v733 + 1896) = v66;
  *(_QWORD *)v340 = v67;
  *(_QWORD *)&v340[8] = sub_1400015F0;
  *(_QWORD *)&v340[16] = v68;
  *(_QWORD *)&v340[24] = sub_1416EA1B0;
  v676 = v732;
  v675 = v730;
  v674 = v729;
  v673 = v731;
  v672 = v727;
  v671 = v728;
  sub_1416DAFA0(&v355, &unk_141A8D868, v340);
  v321 = v355.m256i_i64[2];
  v69 = *(_OWORD *)v355.m256i_i8;
  v320 = *(_OWORD *)v355.m256i_i8;
  v9 = v733;
  v70 = (const __m128i *)(v733 + 1920);
  *(_QWORD *)(v733 + 1936) = v355.m256i_i64[2];
  *(_OWORD *)(v9 + 1920) = v69;
  v71 = (char *)(v9 + 1944);
  *(_BYTE *)(v9 + 1944) = 0;
LABEL_47:
  *(_WORD *)(v9 + 1945) = 0;
  v331 = v70[1].m128i_i64[0];
  v721 = v70;
  v330 = _mm_loadu_si128(v70);
  sub_141542770(v340, &v330);
  if ( v330.m128i_i64[0] )
    sub_140001660(v330.m128i_i64[1], v330.m128i_i64[0], 1);
  v72 = _mm_loadu_si128((const __m128i *)v340);
  *(_OWORD *)&v355.m256i_u64[2] = *(_OWORD *)&v340[16];
  *(__m128i *)v355.m256i_i8 = v72;
  v9 = v733;
  *(_OWORD *)(v733 + 1968) = *(_OWORD *)&v340[16];
  *(__m128i *)(v9 + 1952) = v72;
LABEL_50:
  v723 = (const __m128i *)(v9 + 1952);
  sub_1415458E0(v340, v9 + 1952, v8, a4);
  v5 = *(unsigned int *)v340;
  if ( *(_DWORD *)v340 == -1 )
  {
    v94 = 3;
    goto LABEL_326;
  }
  v716 = v71;
  v73 = *(_DWORD *)&v340[4];
  v726 = *(volatile signed __int64 ***)&v340[8];
  v722 = *(__m128i **)&v340[24];
  v74 = _mm_loadu_si128((const __m128i *)&v340[16]);
  v75 = *(_QWORD *)&v340[32];
  if ( v723->m128i_i16[0] == -1 )
  {
    v650 = v732;
    v649 = v730;
    v648 = v729;
    v647 = v731;
    v646 = v727;
    v645 = v728;
    v644 = v721;
    sub_140B615A0(v733 + 1960);
  }
  if ( (_DWORD)v5 == 2 )
  {
    v76 = 2;
    v77 = (__int64)v726;
    v78 = v733;
    goto LABEL_334;
  }
  v98 = v733;
  *(_WORD *)(v733 + 1945) = 1;
  *(_QWORD *)(v98 + 1952) = 0;
  LODWORD(v723) = v5;
  *(_DWORD *)(v98 + 1960) = v5;
  *(_DWORD *)(v98 + 1964) = v73;
  *(_QWORD *)(v98 + 1968) = v726;
  *(__m128i *)(v98 + 1976) = v74;
  *(_QWORD *)(v98 + 1992) = v75;
  while ( 1 )
  {
    v241 = (_DWORD *)(v98 + 1960);
    v668 = (int)v723;
    v591 = v726;
    v590 = (__int64 *)v722;
    v589 = v732;
    v588 = v730;
    v587 = v729;
    v586 = v731;
    v585 = v727;
    v584 = v728;
    v70 = v721;
    v583 = v721;
    sub_141545E30(&v347, v98 + 1960);
    if ( v347.m128i_i16[0] == 2 )
      break;
    v243 = (__m128i *)v733;
    v111 = v733 + 2000;
    v244 = v347;
    *(_OWORD *)(v733 + 2016) = v348;
    v243[125] = v244;
    v109 = (unsigned __int64)&v243[131].m128i_u64[1];
    v243[131].m128i_i8[8] = 0;
    v79 = v728;
LABEL_295:
    v245 = _mm_loadu_si128((const __m128i *)v111);
    *(_OWORD *)&v355.m256i_u64[2] = *(_OWORD *)(v111 + 16);
    *(__m128i *)v355.m256i_i8 = v245;
    v640 = (int)v723;
    v476 = v726;
    v475 = (__int64 *)v722;
    v474 = v732;
    v473 = v730;
    v472 = v729;
    v471 = v731;
    v470 = v727;
    v469 = v79;
    v468 = v70;
    v725 = v109;
    v467 = v109;
    v720 = v111;
    v466 = v111;
    sub_141551410(v340, &v355);
    v123 = *(_QWORD *)&v340[8];
    v122 = *(_QWORD *)v340;
    if ( *(_QWORD *)v340 == -1 )
    {
      v721 = v70;
      v728 = v79;
      goto LABEL_307;
    }
    v246 = v733;
    v125 = v733 + 2032;
    *(_OWORD *)(v733 + 2032) = *(_OWORD *)v340;
    v124 = (_BYTE *)(v246 + 2096);
    *(_BYTE *)(v246 + 2096) = 0;
LABEL_297:
    v670 = (int)v723;
    v621 = v726;
    v620 = (__int64 *)v722;
    v619 = v732;
    v618 = v730;
    v617 = v729;
    v616 = v731;
    v615 = v727;
    v614 = v79;
    v721 = v70;
    v613 = v70;
    v612 = v725;
    v611 = v720;
    v718 = v124;
    v610 = v124;
    v609 = v125;
    sub_14154A140(v340, v122, v123);
    v123 = *(_QWORD *)&v340[8];
    if ( *(_QWORD *)v340 == 2 )
      goto LABEL_305;
    v719 = v125;
    v728 = v79;
    v333 = *(_QWORD *)&v340[32];
    v332 = *(__m128i *)&v340[16];
    v247 = (__m128i *)v733;
    v150 = v733 + 2048;
    *(_OWORD *)(v733 + 2048) = *(_OWORD *)v340;
    v247[129] = _mm_load_si128(&v332);
    v247[130].m128i_i64[0] = v333;
    v247[130].m128i_i64[1] = v150;
LABEL_299:
    sub_141549510(v340, v150, v8);
    if ( v340[9] == 0xFF )
    {
      *v718 = 3;
LABEL_325:
      *(_BYTE *)v725 = 3;
      v94 = 4;
      v71 = v716;
LABEL_326:
      *v71 = v94;
      v140 = 3;
      v16 = v733;
      v139 = v651;
LABEL_327:
      *v139 = v140;
      *v731 = 3;
      *(_BYTE *)v729.m128i_i64[1] = 3;
      *v10 = (volatile signed __int64 *)-2LL;
      result = 3;
      goto LABEL_269;
    }
    v248 = *(_QWORD *)v340;
    if ( v340[9] == 2 )
      goto LABEL_304;
    if ( *(_QWORD *)(v733 + 2072) == -1 )
      sub_14196B5D0(&off_141A4E170);
    if ( (sub_1415513F0(v733 + 2072, *(_QWORD *)v340) & 1) != 0 || v248 )
    {
LABEL_304:
      v611 = v720;
      v609 = v719;
      v670 = (int)v723;
      v621 = v726;
      v620 = (__int64 *)v722;
      v619 = v732;
      v618 = v730;
      v617 = v729;
      v616 = v731;
      v615 = v727;
      v79 = v728;
      v614 = v728;
      v613 = v721;
      v612 = v725;
      v610 = v718;
      v249 = v248;
      sub_140C42410(v733 + 2048);
      v123 = v249;
LABEL_305:
      v728 = v79;
      *v718 = 1;
LABEL_307:
      *(_BYTE *)v725 = 1;
      goto LABEL_308;
    }
    v76 = *(_QWORD *)(v733 + 2048);
    v123 = *(_QWORD *)(v733 + 2056);
    v5 = *(_QWORD *)(v733 + 2064);
    v9 = *(_QWORD *)(v733 + 2072);
    v714 = *(_QWORD *)(v733 + 2080);
    *(_BYTE *)(v733 + 2096) = 1;
    v251 = v721;
    if ( v76 == -1 )
      goto LABEL_325;
    *(_BYTE *)v725 = 1;
    if ( v76 != 2 )
    {
      v252 = v733;
      if ( *(_DWORD *)(v733 + 1960) )
      {
        v253 = *(_QWORD *)(v733 + 1984);
        if ( v253 )
        {
          v254 = v123;
          sub_140001660(*(_QWORD *)(v733 + 1968), 32 * v253, 4);
          v123 = v254;
          v251 = v721;
        }
      }
      v255 = *(_QWORD *)(v252 + 1952);
      if ( v255 && (unsigned int)(v255 & 3) - 2 >= 2 && (v255 & 3) != 0 )
      {
        v256 = v123;
        *(_QWORD *)&v340[8] = v255 - 1;
        v340[0] = 3;
        v669 = (int)v723;
        v600 = v726;
        v599 = (__int64 *)v722;
        v598 = v732;
        v597 = v730;
        v596 = v729;
        v595 = v731;
        v594 = v727;
        v593 = v728;
        v592 = v251;
        sub_1416EBAD0(&v340[8]);
        v123 = v256;
      }
      v77 = v123;
      v78 = v733;
      *(_BYTE *)(v733 + 1945) = 0;
      goto LABEL_334;
    }
LABEL_308:
    v250 = *(_QWORD *)(v733 + 1952);
    if ( v250 )
    {
      v725 = v123;
      if ( (unsigned int)(v250 & 3) - 2 >= 2 && (v250 & 3) != 0 )
      {
        *(_QWORD *)&v340[8] = v250 - 1;
        v340[0] = 3;
        sub_1416EBAD0(&v340[8]);
      }
      v123 = v725;
    }
    v98 = v733;
    *(_BYTE *)(v733 + 1945) = 1;
    *(_QWORD *)(v98 + 1952) = v123;
  }
  v78 = v733;
  if ( *v241 )
  {
    v257 = *(_QWORD *)(v733 + 1984);
    if ( v257 )
      sub_140001660(*(_QWORD *)(v733 + 1968), 32 * v257, 4);
  }
  *(_BYTE *)(v78 + 1945) = 0;
  v258 = *(_QWORD *)(v78 + 1952);
  if ( !v258 )
  {
    v639 = (int)v723;
    v465 = v726;
    v464 = (__int64 *)v722;
    v463 = v732;
    v462 = v730;
    v461 = v729;
    v460 = v731;
    v459 = v727;
    v458 = v728;
    v457 = v70;
    LOBYTE(v242) = 20;
    v258 = sub_1416A8370(v242, aCouldNotResolv, 32);
    v78 = v733;
  }
  v77 = v258;
  *(_BYTE *)(v78 + 1945) = 0;
  v76 = 2;
LABEL_334:
  *(_BYTE *)(v78 + 1946) = 0;
  *(_BYTE *)(v78 + 1944) = 1;
  v676 = v732;
  v675 = v730;
  v674 = v729;
  v673 = v731;
  v672 = v727;
  v671 = v728;
  sub_140C10CE0(v721);
  v259 = v77;
  v87 = (const __m128i *)v714;
  if ( v76 == 2 )
  {
LABEL_338:
    *(_QWORD *)&v713 = v8;
    v47 = v259;
    v48 = v259 >> 16;
    v30 = 5;
    v49 = (_QWORD *)v733;
LABEL_290:
    v719 = v91;
    v714 = v90;
    v720 = v89;
    v718 = v88;
    v716 = v86;
    v721 = v87;
    v45 = v49[229];
    if ( v45 )
      sub_140001660(v49[230], v45, 1);
    goto LABEL_193;
  }
  v260 = v733;
  v261 = (volatile signed __int64 **)(v733 + 1856);
  *(_QWORD *)(v733 + 1856) = v76;
  *(_QWORD *)(v260 + 1864) = v259;
  *(_QWORD *)(v260 + 1872) = v5;
  *(_QWORD *)(v260 + 1880) = v9;
  *(_QWORD *)(v260 + 1888) = v87;
  v9 = v260;
  if ( *(_BYTE *)(v260 + 1900) == 1 )
  {
    v726 = v261;
    LOBYTE(v86) = 1;
    v262 = sub_14154A000(v261, v86);
    v9 = v733;
    v261 = v726;
    if ( v262 )
    {
      v676 = v732;
      v675 = v730;
      v674 = v729;
      v673 = v731;
      v672 = v727;
      v671 = v728;
      v259 = v262;
      sub_140C42410(v726);
      goto LABEL_338;
    }
  }
  *(_BYTE *)(v9 + 1902) = 0;
  sub_1419234B0(v318, v9 + 1536, 224);
  v263 = *(_OWORD *)(v9 + 1776);
  v264 = *(_OWORD *)(v9 + 1792);
  v265 = *(_OWORD *)(v9 + 1808);
  v404 = *(_OWORD *)(v9 + 1760);
  v405 = v263;
  v406 = v264;
  v407 = v265;
  v408 = *(_QWORD *)(v9 + 1824);
  *(_BYTE *)(v9 + 1901) = 0;
  v5 = v9 + 1904;
  v266 = *(_QWORD *)(v9 + 1904);
  v267 = *(volatile signed __int64 ***)(v9 + 1912);
  v268 = *((_OWORD *)v261 + 1);
  *(_OWORD *)(v9 + 1904) = *(_OWORD *)v261;
  *(_OWORD *)(v9 + 1920) = v268;
  *(_QWORD *)(v9 + 1936) = v261[4];
  *(_QWORD *)(v9 + 1944) = v266;
  v726 = v267;
  *(_QWORD *)(v9 + 1952) = v267;
  sub_1419234B0(v9 + 1960, v318, 224);
  v269 = v405;
  v270 = v406;
  v271 = v407;
  *(_OWORD *)(v9 + 2184) = v404;
  *(_OWORD *)(v9 + 2200) = v269;
  *(_OWORD *)(v9 + 2216) = v270;
  *(_OWORD *)(v9 + 2232) = v271;
  *(_QWORD *)(v9 + 2248) = v408;
  v706 = (char *)(v9 + 2600);
  *(_BYTE *)(v9 + 2600) = 0;
LABEL_340:
  *(_BYTE *)(v9 + 2601) = 0;
  v272 = *(_QWORD *)(v9 + 1960);
  v700 = *(_QWORD *)(v9 + 1968);
  v713 = *(_OWORD *)(v9 + 1976);
  v723 = *(const __m128i **)(v9 + 1992);
  v273 = *(const __m128i **)(v9 + 2000);
  v711 = *(const __m128i **)(v9 + 2008);
  v274 = *(const __m128i **)(v9 + 2016);
  v722 = *(__m128i **)(v9 + 2024);
  v275 = *(_QWORD *)(v9 + 2032);
  v276 = *(_QWORD *)(v9 + 2040);
  v721 = *(const __m128i **)(v9 + 2048);
  v277 = *(char **)(v9 + 2056);
  v718 = *(_BYTE **)(v9 + 2064);
  v278 = *(_BYTE **)(v9 + 2072);
  v720 = *(_QWORD *)(v9 + 2080);
  v279 = *(_QWORD *)(v9 + 2088);
  v719 = *(_QWORD *)(v9 + 2096);
  *(_BYTE *)(v9 + 2603) = 1;
  v429 = *(_QWORD *)(v5 + 32);
  v280 = *(_OWORD *)v5;
  v428 = *(_OWORD *)(v5 + 16);
  v427 = v280;
  *(_QWORD *)(v9 + 2320) = *(_QWORD *)(v9 + 2248);
  *(_OWORD *)(v9 + 2304) = *(_OWORD *)(v9 + 2232);
  *(_OWORD *)(v9 + 2288) = *(_OWORD *)(v9 + 2216);
  *(_OWORD *)(v9 + 2272) = *(_OWORD *)(v9 + 2200);
  *(__m128i *)(v9 + 2256) = _mm_loadu_si128((const __m128i *)(v9 + 2184));
  *(_BYTE *)(v9 + 2602) = 1;
  v281 = *(_QWORD *)(v9 + 1944);
  *(_QWORD *)(v9 + 2328) = v281;
  *(_QWORD *)(v9 + 2336) = v726;
  v724 = v5;
  if ( v272 == -1 )
  {
    v714 = v279;
    v710 = v278;
    v716 = v277;
    *((_QWORD *)&v709 + 1) = v276;
    *(_QWORD *)&v709 = v275;
    v717 = v274;
    v712 = v273;
    v117 = v713;
    v725 = (unsigned __int64)v713 >> 8;
    v92 = v732;
    v287 = v722;
    v145 = v700;
    v286 = v730;
    v288 = v723;
LABEL_350:
    v143 = v724;
    if ( v281 )
    {
      if ( *(_BYTE *)(v733 + 2602) )
      {
        v293 = *(volatile signed __int64 **)(v733 + 2336);
        if ( v293 )
        {
          if ( !_InterlockedDecrement64(v293) )
          {
            v638 = v92;
            v637 = v286;
            v636 = v729;
            v635 = v731;
            v634 = v727;
            v633 = v728;
            v632 = v143;
            v700 = v145;
            *(_QWORD *)&v713 = v117;
            v117 = (unsigned __int64)v287;
            v294 = v286;
            v295 = v288;
            ((void (*)(void))sub_1413018E0)();
            v288 = v295;
            v286 = v294;
            v287 = (__m128i *)v117;
            LOBYTE(v117) = v713;
            v145 = v700;
          }
        }
      }
    }
    v722 = v287;
    v723 = v288;
    v296 = v733;
    *(_BYTE *)(v733 + 2602) = 0;
    if ( *(_BYTE *)(v296 + 2603) )
    {
      v538 = v92;
      v537 = v286;
      v536 = v729;
      v535 = v731;
      v534 = v727;
      v533 = v728;
      v532 = v143;
      sub_140C42410(&v427);
    }
    *(_QWORD *)&v713 = v8;
    v730 = v286;
    *(_BYTE *)(v733 + 2603) = 0;
    v33 = 2;
    goto LABEL_358;
  }
  *(_QWORD *)(v9 + 2344) = v272;
  *(_QWORD *)(v9 + 2352) = v700;
  *(_OWORD *)(v9 + 2360) = v713;
  *(_QWORD *)(v9 + 2376) = v723;
  *(_QWORD *)(v9 + 2384) = v273;
  *(_QWORD *)(v9 + 2392) = v711;
  *(_QWORD *)(v9 + 2400) = v274;
  *(_QWORD *)(v9 + 2408) = v722;
  *(_QWORD *)(v9 + 2416) = v275;
  *(_QWORD *)(v9 + 2424) = v276;
  *(_QWORD *)(v9 + 2432) = v721;
  *(_QWORD *)(v9 + 2440) = v277;
  *(_QWORD *)(v9 + 2448) = v718;
  *(_QWORD *)(v9 + 2456) = v278;
  *(_QWORD *)(v9 + 2464) = v720;
  *(_QWORD *)(v9 + 2472) = v279;
  *(_QWORD *)(v9 + 2480) = v719;
  v282 = *(_OWORD *)(v9 + 2120);
  v283 = *(_OWORD *)(v9 + 2136);
  v284 = *(_OWORD *)(v9 + 2152);
  *(_OWORD *)(v9 + 2488) = *(_OWORD *)(v9 + 2104);
  *(_OWORD *)(v9 + 2504) = v282;
  *(_OWORD *)(v9 + 2520) = v283;
  *(_OWORD *)(v9 + 2536) = v284;
  *(__m128i *)(v9 + 2552) = _mm_loadu_si128((const __m128i *)(v9 + 2168));
  v92 = v732;
  v559 = v732;
  v558 = v730;
  v557 = v729;
  v556 = v731;
  v555 = v727;
  v554 = v728;
  v553 = v5;
  sub_140C96BE0(v340, v9 + 2344);
  v117 = *(_QWORD *)&v340[8];
  v145 = *(_QWORD *)v340;
  v285 = *(_OWORD *)&v340[16];
  if ( *(_QWORD *)v340 != -1 )
  {
    v723 = *(const __m128i **)&v340[24];
    *((_QWORD *)&v713 + 1) = *(_QWORD *)&v340[16];
    v711 = *(const __m128i **)&v340[40];
    v712 = *(const __m128i **)&v340[32];
    v722 = *(__m128i **)&v340[56];
    v717 = *(const __m128i **)&v340[48];
    v709 = *(_OWORD *)&v340[64];
    v716 = *(char **)&v340[88];
    v721 = *(const __m128i **)&v340[80];
    v718 = *(_BYTE **)&v340[96];
    v720 = v341.m128i_i64[1];
    v710 = (_BYTE *)v341.m128i_i64[0];
    v714 = v342.m128i_i64[0];
    v725 = *(_QWORD *)&v340[8] >> 8;
    v719 = v342.m128i_i64[1];
    v9 = v733;
    v286 = v730;
    goto LABEL_349;
  }
  v289 = v733;
  v290 = v733 + 2440;
  *(_BYTE *)(v733 + 2601) = 1;
  *(_QWORD *)(v289 + 2568) = v117;
  *(_OWORD *)(v289 + 2576) = v285;
  v667 = v92;
  v666 = v730;
  v665 = v729;
  v664 = v731;
  v663 = v727;
  v662 = v728;
  v661 = v5;
  sub_141149910(v340, v290);
  v145 = *(_QWORD *)v340;
  v117 = v340[8];
  if ( *(_QWORD *)v340 != -1 )
  {
    v725 = ((unsigned __int64)((v340[15] << 16) | (unsigned int)*(unsigned __int16 *)&v340[13]) << 32)
         | *(unsigned int *)&v340[9];
    v723 = *(const __m128i **)&v340[24];
    *((_QWORD *)&v713 + 1) = *(_QWORD *)&v340[16];
    v711 = *(const __m128i **)&v340[40];
    v119 = *(_QWORD *)&v340[32];
    v722 = *(__m128i **)&v340[56];
    v717 = *(const __m128i **)&v340[48];
    v709 = *(_OWORD *)&v340[64];
    v148 = *(_OWORD *)&v340[80];
    v146 = *(_BYTE **)&v340[96];
    v147 = v341.m128i_i64[1];
    v710 = (_BYTE *)v341.m128i_i64[0];
    v149 = (unsigned __int128)v342;
    v9 = v733;
    goto LABEL_346;
  }
  v9 = v733;
  v300 = v733 + 2568;
  a2 = v730;
  if ( *(_DWORD *)(v733 + 2328) == 1 )
  {
    *(_BYTE *)(v733 + 2602) = 0;
    v301 = *(_QWORD *)(v9 + 2336);
    *(_QWORD *)(v9 + 2592) = v301;
    if ( v301 )
    {
      *(_BYTE *)(v9 + 2603) = 0;
      *(_QWORD *)&v340[32] = v429;
      *(_OWORD *)&v340[16] = v428;
      *(_OWORD *)v340 = v427;
      *(_BYTE *)(v9 + 2601) = 0;
      *(_OWORD *)&v340[40] = *(_OWORD *)v300;
      *(_QWORD *)&v340[56] = *(_QWORD *)(v300 + 16);
      si128 = _mm_load_si128((const __m128i *)v340);
      v303 = *(_OWORD *)&v340[16];
      *(__m128i *)v355.m256i_i8 = si128;
      *(_OWORD *)&v355.m256i_u64[2] = *(_OWORD *)&v340[16];
      v304 = *(_OWORD *)&v340[32];
      v356 = *(_OWORD *)&v340[32];
      v357 = *(_OWORD *)&v340[48];
      *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v340[48];
      *(_OWORD *)(v9 + 2640) = v304;
      *(_OWORD *)(v9 + 2624) = v303;
      *(__m128i *)(v9 + 2608) = si128;
      *(_QWORD *)(v9 + 2672) = v301;
      *(_BYTE *)(v9 + 3824) = v117;
      *(_BYTE *)(v9 + 3825) = 0;
      v92 = v706;
LABEL_98:
      v726 = (volatile signed __int64 **)(v9 + 2608);
      sub_140C7F970(v340, v9 + 2608, v8);
      v113 = *(_QWORD *)v340;
      if ( *(_QWORD *)v340 == -2 )
      {
        v114 = 3;
        goto LABEL_118;
      }
      goto LABEL_107;
    }
    *(_BYTE *)(v9 + 2603) = 0;
    v116 = v9 + 2608;
    v308 = v428;
    *(_OWORD *)(v9 + 2608) = v427;
    *(_OWORD *)(v9 + 2624) = v308;
    *(_QWORD *)(v9 + 2640) = v429;
    *(_BYTE *)(v9 + 2648) = v117;
    v115 = (_BYTE *)(v9 + 2649);
    *(_BYTE *)(v9 + 2649) = 0;
LABEL_102:
    *(_QWORD *)&v340[32] = *(_QWORD *)(v116 + 32);
    v118 = _mm_loadu_si128((const __m128i *)v116);
    *(_OWORD *)&v340[16] = *(_OWORD *)(v116 + 16);
    *(__m128i *)v340 = v118;
    v730 = a2;
    if ( (v117 & 1) != 0 )
    {
      v722 = (__m128i *)v116;
      v726 = (volatile signed __int64 **)v115;
      v732 = v92;
      v119 = sub_140C42410(v340);
      v120 = _mm_load_si128((const __m128i *)&xmmword_141A85A30);
      v113 = -1;
      v9 = v733;
      v92 = v732;
      v115 = v726;
    }
    else
    {
      v120 = _mm_load_si128((const __m128i *)v340);
      *((_QWORD *)&v713 + 1) = *(_QWORD *)(v9 + 2624);
      v723 = *(const __m128i **)(v9 + 2632);
      v113 = 2;
      v119 = *(_QWORD *)&v340[32];
    }
    *v115 = 1;
  }
  else
  {
    *(_BYTE *)(v733 + 2603) = 0;
    *(_QWORD *)&v340[32] = v429;
    *(_OWORD *)&v340[16] = v428;
    *(_OWORD *)v340 = v427;
    *(_BYTE *)(v9 + 2601) = 0;
    *(_OWORD *)&v340[40] = *(_OWORD *)v300;
    *(_QWORD *)&v340[56] = *(_QWORD *)(v300 + 16);
    v305 = _mm_load_si128((const __m128i *)v340);
    v306 = *(_OWORD *)&v340[16];
    *(__m128i *)v355.m256i_i8 = v305;
    *(_OWORD *)&v355.m256i_u64[2] = *(_OWORD *)&v340[16];
    v307 = *(_OWORD *)&v340[32];
    v356 = *(_OWORD *)&v340[32];
    v357 = *(_OWORD *)&v340[48];
    *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v340[48];
    *(_OWORD *)(v9 + 2640) = v307;
    *(_OWORD *)(v9 + 2624) = v306;
    *(__m128i *)(v9 + 2608) = v305;
    *(_QWORD *)(v9 + 2672) = 0;
    *(_BYTE *)(v9 + 3824) = v117;
    *(_BYTE *)(v9 + 3825) = 0;
    v92 = v706;
LABEL_96:
    v726 = (volatile signed __int64 **)(v9 + 2608);
    sub_140C7F970(v340, v9 + 2608, v8);
    v113 = *(_QWORD *)v340;
    if ( *(_QWORD *)v340 == -2 )
    {
      v114 = 5;
LABEL_118:
      v139 = v651;
      *v92 = v114;
      v140 = 4;
      v16 = v733;
      goto LABEL_327;
    }
LABEL_107:
    v706 = v92;
    v120 = _mm_loadu_si128((const __m128i *)&v340[8]);
    *((_QWORD *)&v713 + 1) = *(_QWORD *)&v340[24];
    v712 = *(const __m128i **)&v340[40];
    v723 = *(const __m128i **)&v340[32];
    v717 = *(const __m128i **)&v340[56];
    v711 = *(const __m128i **)&v340[48];
    v127 = *(_QWORD *)&v340[72];
    v126 = *(_QWORD *)&v340[64];
    v721 = *(const __m128i **)&v340[88];
    *((_QWORD *)&v709 + 1) = *(_QWORD *)&v340[80];
    v716 = *(char **)&v340[96];
    v710 = (_BYTE *)v341.m128i_i64[1];
    v718 = (_BYTE *)v341.m128i_i64[0];
    v714 = v342.m128i_i64[1];
    v720 = v342.m128i_i64[0];
    v719 = v343;
    sub_1419234B0(v315, v344, 960);
    v92 = v732;
    v667 = v732;
    v666 = v730;
    v665 = v729;
    v664 = v731;
    v663 = v727;
    v662 = v728;
    v661 = v724;
    sub_140C1FE30(v726);
    v9 = v733;
    v119 = (__int64)v712;
    a2 = v126;
    v5 = v127;
  }
  v722 = (__m128i *)a2;
  if ( (_DWORD)v113 == -1 )
  {
    *(_QWORD *)&v709 = v5;
    v117 = _mm_shuffle_epi32(v120, 238).m128i_u64[0];
    v725 = v117 >> 8;
    v145 = v120.m128i_i64[0];
    v146 = v718;
    v147 = v720;
    v148 = __PAIR128__((unsigned __int64)v716, (unsigned __int64)v721);
    v149 = __PAIR128__(v719, v714);
LABEL_346:
    v286 = v730;
    v712 = (const __m128i *)v119;
    v291 = *(_BYTE *)(v9 + 2601) == 0;
    v716 = (char *)(v148 >> 64);
    v721 = (const __m128i *)v148;
    v718 = v146;
    v720 = v147;
    v719 = v149 >> 64;
    v714 = v149;
    if ( !v291 )
    {
      v292 = *(_QWORD *)(v9 + 2568);
      if ( v292 )
        sub_140001660(*(_QWORD *)(v9 + 2576), v292, 1);
    }
LABEL_349:
    *(_BYTE *)(v9 + 2601) = 0;
    v552 = v92;
    v551 = v286;
    v550 = v729;
    v549 = v731;
    v548 = v727;
    v547 = v728;
    v546 = v724;
    sub_14028DBC0(v9 + 2344);
    v281 = *(_QWORD *)(v733 + 2328);
    v288 = v723;
    v287 = v722;
    goto LABEL_350;
  }
  v732 = v92;
  v128 = v119;
  v112 = v9 + 2608;
  sub_1419234B0(v9 + 2608, v9 + 2344, 224);
  *(_QWORD *)(v9 + 2832) = v113;
  *(__m128i *)(v9 + 2840) = v120;
  *(_QWORD *)(v9 + 2856) = *((_QWORD *)&v713 + 1);
  *(_QWORD *)(v9 + 2864) = v723;
  *(_QWORD *)(v9 + 2872) = v128;
  *(_QWORD *)(v9 + 2880) = v711;
  *(_QWORD *)(v9 + 2888) = v717;
  *(_QWORD *)(v9 + 2896) = v722;
  *(_QWORD *)(v9 + 2904) = v5;
  *(_QWORD *)(v9 + 2912) = *((_QWORD *)&v709 + 1);
  *(_QWORD *)(v9 + 2920) = v721;
  *(_QWORD *)(v9 + 2928) = v716;
  *(_QWORD *)(v9 + 2936) = v718;
  *(_QWORD *)(v9 + 2944) = v710;
  *(_QWORD *)(v9 + 2952) = v720;
  *(_QWORD *)(v9 + 2960) = v714;
  *(_QWORD *)(v9 + 2968) = v719;
  sub_1419234B0(v9 + 2976, v315, 960);
  v129 = *(_OWORD *)(v9 + 2272);
  v130 = *(_OWORD *)(v9 + 2288);
  v131 = *(_OWORD *)(v9 + 2304);
  *(_OWORD *)(v9 + 3936) = *(_OWORD *)(v9 + 2256);
  *(_OWORD *)(v9 + 3952) = v129;
  *(_OWORD *)(v9 + 3968) = v130;
  *(_OWORD *)(v9 + 3984) = v131;
  *(_QWORD *)(v9 + 4000) = *(_QWORD *)(v9 + 2320);
  v725 = v9 + 11144;
  *(_BYTE *)(v9 + 11144) = 0;
LABEL_112:
  sub_1419234B0(&v355, v112, 224);
  sub_1419234B0(v340, v9 + 2832, 1104);
  v132 = *(_OWORD *)(v9 + 3952);
  v133 = *(_OWORD *)(v9 + 3968);
  v134 = *(_OWORD *)(v9 + 3984);
  v368 = _mm_loadu_si128((const __m128i *)(v9 + 3936));
  v369 = v132;
  v370 = v133;
  v371 = v134;
  v372 = *(_QWORD *)(v9 + 4000);
  sub_1419234B0(v345, &v355, 296);
  v135 = v9 + 4008;
  sub_1419234B0(v9 + 4008, v340, 7128);
  v708 = (_BYTE *)(v9 + 11136);
  *(_BYTE *)(v9 + 11136) = 0;
LABEL_113:
  sub_1419234B0(&v355, v135, 1104);
  sub_1419234B0(v374, v9 + 5112, 296);
  sub_1419234B0(&v332, &v355, 1400);
  v136 = v9 + 5408;
  sub_1419234B0(v9 + 5408, &v332, 1400);
  v701 = (char *)(v9 + 6808);
  *(_BYTE *)(v9 + 6808) = 0;
LABEL_114:
  v705 = v135;
  v715 = v112;
  v702 = v136;
  sub_1419234B0(v373, v136, 1104);
  sub_1419234B0(&v355, v9 + 6512, 296);
  sub_1419234B0(&v347, &v355, 1400);
  sub_1419234B0(v9 + 6816, &v347, 1400);
  v92 = v706;
LABEL_115:
  v482 = (_DWORD *)(v9 + 6816);
  sub_140B62E50(&v355, v9 + 6816, v8);
  v137 = v355.m256i_i64[0];
  if ( v355.m256i_i64[0] == -2 )
  {
    v138 = 3;
LABEL_117:
    *v701 = v138;
    *v708 = 3;
    *(_BYTE *)v725 = 3;
    v114 = 6;
    goto LABEL_118;
  }
  v706 = v92;
  v700 = v355.m256i_i64[1];
  v713 = *(_OWORD *)&v355.m256i_u64[2];
  v712 = *((const __m128i **)&v356 + 1);
  v723 = (const __m128i *)v356;
  v141 = *((const __m128i **)&v357 + 1);
  v711 = (const __m128i *)v357;
  v722 = *(__m128i **)v358;
  v709 = *(_OWORD *)&v358[8];
  v721 = v359;
  v716 = v360;
  v718 = v361;
  v710 = v362;
  v720 = v363;
  v714 = v364;
  v719 = (__int64)v365;
  v726 = v366;
  sub_1419234B0(&v320, v367, 1152);
  sub_1419234B0(v328, v375, 208);
  v142 = v482;
  v143 = v724;
  v144 = v715;
  if ( *v482 != -1 )
  {
    sub_14028DBC0(v482);
    if ( *(_DWORD *)(v733 + 7112) == 2 )
    {
      v694 = v732;
      v693 = v730;
      v692 = v729;
      v691 = v731;
      v690 = v727;
      v689 = v728;
      v143 = v724;
      v688 = v724;
      v687 = v725;
      v144 = v715;
      v686 = v715;
      v685 = v708;
      v684 = v705;
      v683 = v701;
      v682 = v702;
      sub_140C42410(v733 + 7120);
    }
    else
    {
      sub_140C42410(v733 + 7112);
      v694 = v732;
      v693 = v730;
      v692 = v729;
      v691 = v731;
      v690 = v727;
      v689 = v728;
      v143 = v724;
      v688 = v724;
      v687 = v725;
      v144 = v715;
      v686 = v715;
      v685 = v708;
      v684 = v705;
      v683 = v701;
      v682 = v702;
      sub_140C0EA90(v733 + 7152);
    }
  }
  if ( (_DWORD)v137 == -1 )
  {
    v157 = v733;
    *(_QWORD *)(v733 + 8336) = v700;
    *(_OWORD *)(v157 + 8344) = v713;
    *(_QWORD *)(v157 + 8360) = v723;
    *(_QWORD *)(v157 + 8368) = v712;
    *(_QWORD *)(v157 + 8376) = v711;
    *(_QWORD *)(v157 + 8384) = v141;
    *(_QWORD *)(v157 + 8392) = v722;
    *(_OWORD *)(v157 + 8400) = v709;
    *(_QWORD *)(v157 + 8416) = v721;
    *(_QWORD *)(v157 + 8424) = v716;
    *(_QWORD *)(v157 + 8432) = v718;
    *(_QWORD *)(v157 + 8440) = v710;
    *(_QWORD *)(v157 + 8448) = v720;
    *(_QWORD *)(v157 + 8456) = v714;
    *(_QWORD *)(v157 + 8464) = v719;
    *(_QWORD *)(v157 + 8472) = v726;
    v156 = v141;
    sub_1419234B0(v157 + 8480, &v320, 1152);
    *(_QWORD *)(v157 + 8328) = -1;
    sub_1419234B0(&v330, &v320, 1152);
    v33 = 2;
  }
  else
  {
    v9 = v733;
    *(_QWORD *)(v733 + 8328) = v137;
    v151 = v142;
    v152 = v700;
    *(_QWORD *)(v9 + 8336) = v700;
    v153 = v713;
    *(_OWORD *)(v9 + 8344) = v713;
    v154 = v141;
    v155 = v723;
    *(_QWORD *)(v9 + 8360) = v723;
    *(_QWORD *)(v9 + 8368) = v712;
    *(_QWORD *)(v9 + 8376) = v711;
    v717 = v154;
    *(_QWORD *)(v9 + 8384) = v154;
    *(_QWORD *)(v9 + 8392) = v722;
    *(_OWORD *)(v9 + 8400) = v709;
    *(_QWORD *)(v9 + 8416) = v721;
    *(_QWORD *)(v9 + 8424) = v716;
    *(_QWORD *)(v9 + 8432) = v718;
    *(_QWORD *)(v9 + 8440) = v710;
    *(_QWORD *)(v9 + 8448) = v720;
    *(_QWORD *)(v9 + 8456) = v714;
    *(_QWORD *)(v9 + 8464) = v719;
    *(_QWORD *)(v9 + 8472) = v726;
    sub_1419234B0(v9 + 8480, &v320, 1152);
    sub_1419234B0(v9 + 9632, v328, 208);
    sub_1419234B0(v151, v9 + 8328, 1512);
    v33 = *(_QWORD *)(v9 + 6816);
    if ( v33 == 2 )
    {
      *(_QWORD *)(v9 + 9840) = v152;
      *(_QWORD *)(v9 + 9848) = v153;
      *(_QWORD *)(v9 + 9856) = *((_QWORD *)&v713 + 1);
      *(_QWORD *)(v9 + 9864) = v155;
      *(_QWORD *)(v9 + 9872) = v712;
      *(_QWORD *)(v9 + 9880) = v711;
      *(_QWORD *)(v9 + 9888) = v717;
      *(_QWORD *)(v9 + 9896) = v722;
      *(_OWORD *)(v9 + 9904) = v709;
      *(_QWORD *)(v9 + 9920) = v721;
      *(_QWORD *)(v9 + 9928) = v716;
      *(_QWORD *)(v9 + 9936) = v718;
      *(_QWORD *)(v9 + 9944) = v710;
      *(_QWORD *)(v9 + 9952) = v720;
      *(_QWORD *)(v9 + 9960) = v714;
      *(_QWORD *)(v9 + 9968) = v719;
      *(_QWORD *)(v9 + 9976) = v726;
      sub_1419234B0(v9 + 9984, &v320, 1152);
      v92 = v706;
LABEL_130:
      v717 = (const __m128i *)(v9 + 9840);
      sub_140B4FAB0(&v355, v9 + 9840, v8);
      v33 = v355.m256i_i64[0];
      if ( v355.m256i_i64[0] == -1 )
      {
        v138 = 4;
        goto LABEL_117;
      }
      v706 = v92;
      v700 = v355.m256i_i64[1];
      v713 = *(_OWORD *)&v355.m256i_u64[2];
      v712 = *((const __m128i **)&v356 + 1);
      v723 = (const __m128i *)v356;
      v156 = *((const __m128i **)&v357 + 1);
      v711 = (const __m128i *)v357;
      v722 = *(__m128i **)v358;
      v709 = *(_OWORD *)&v358[8];
      v721 = v359;
      v716 = v360;
      v718 = v361;
      v710 = v362;
      v720 = v363;
      v714 = v364;
      v719 = (__int64)v365;
      v726 = v366;
      sub_1419234B0(&v330, v367, 1152);
      sub_1419234B0(v327, v375, 208);
      if ( v717->m128i_i32[0] != -1 )
      {
        v694 = v732;
        v693 = v730;
        v692 = v729;
        v691 = v731;
        v690 = v727;
        v689 = v728;
        v143 = v724;
        v688 = v724;
        v687 = v725;
        v144 = v715;
        v686 = v715;
        v685 = v708;
        v684 = v705;
        v683 = v701;
        v682 = v702;
        ((void (*)(void))sub_140C0DF30)();
        goto LABEL_144;
      }
      v143 = v724;
    }
    else
    {
      sub_1419234B0(&v330, &v320, 1152);
      sub_1419234B0(v327, v328, 208);
      v143 = v724;
      v156 = v717;
    }
    v144 = v715;
  }
LABEL_144:
  v717 = v156;
  sub_1419234B0(v310, &v330, 1152);
  sub_1419234B0(v337, v327, 208);
  *v701 = 1;
  v158 = v732;
  v456 = v732;
  v455 = v730;
  v454 = v729;
  v453 = v731;
  v452 = v727;
  v451 = v728;
  v450 = v143;
  v449 = v725;
  v448 = v144;
  v447 = v708;
  v446 = v705;
  sub_140C11650(v702);
  sub_1419234B0(v317, v310, 1152);
  v117 = v713;
  if ( (_DWORD)v33 != 2 )
  {
    v393 = v338;
    v159 = _mm_loadu_si128(v337);
    v392 = v337[3];
    v391 = v337[2];
    v390 = v337[1];
    v389 = v159;
    sub_1419234B0(v329, v339, 136);
  }
  sub_1419234B0(v324, v329, 136);
  *v708 = 1;
  v660 = v158;
  v659 = v730;
  v658 = v729;
  v657 = v731;
  v656 = v727;
  v655 = v728;
  v654 = v143;
  v653 = v725;
  v652 = v144;
  sub_140C11570(v705);
  if ( (_DWORD)v33 == 2 )
  {
    v715 = v144;
    v724 = v143;
    v160 = v718;
    if ( v700 == -1 )
    {
      v162 = *((_QWORD *)&v713 + 1);
      v700 = v713;
      *((_QWORD *)&v713 + 1) = v723;
      v723 = v712;
      v163 = v722;
      v722 = (__m128i *)v709;
      v718 = v710;
      v117 = v162;
      v712 = v711;
      v711 = v717;
      v717 = v163;
      *(_QWORD *)&v709 = *((_QWORD *)&v709 + 1);
      *((_QWORD *)&v709 + 1) = v721;
      v721 = (const __m128i *)v716;
      v716 = v160;
      v710 = (_BYTE *)v720;
      v720 = v714;
      v714 = v719;
      v719 = (__int64)v726;
      v158 = v732;
      v143 = v724;
      v144 = v715;
    }
    else
    {
      v355.m256i_i64[0] = v700;
      *(_OWORD *)&v355.m256i_u64[1] = v713;
      v355.m256i_i64[3] = (__int64)v723;
      *(_QWORD *)&v356 = v712;
      *((_QWORD *)&v356 + 1) = v711;
      *(_QWORD *)&v357 = v717;
      *((_QWORD *)&v357 + 1) = v722;
      *(_OWORD *)v358 = v709;
      *(_QWORD *)&v358[16] = v721;
      v359 = (const __m128i *)v716;
      v360 = v718;
      v361 = v710;
      v362 = (_BYTE *)v720;
      v363 = v714;
      v364 = v719;
      v365 = v726;
      sub_1419234B0(&v366, v317, 1152);
      v332.m128i_i64[0] = 0;
      v332.m128i_i64[1] = 1;
      v333 = 0;
      *(_QWORD *)&v348 = 1610612768;
      v347.m128i_i64[0] = (__int64)&v332;
      v347.m128i_i64[1] = (__int64)&off_141A8F1D0;
      if ( (unsigned __int8)sub_140B4FA40(&v355, &v347) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_9,
          55,
          (unsigned int)&v707,
          (unsigned int)&unk_141A8DDA8,
          (__int64)&off_141A8F288);
      v331 = v333;
      v330 = _mm_loadu_si128(&v332);
      LOBYTE(v161) = 41;
      v117 = sub_1411D09D0(v161, &v330);
      v158 = v732;
      v660 = v732;
      v659 = v730;
      v658 = v729;
      v657 = v731;
      v656 = v727;
      v655 = v728;
      v143 = v724;
      v654 = v724;
      v653 = v725;
      v144 = v715;
      v652 = v715;
      if ( v355.m256i_i32[0] == -1 )
        sub_140C40860(&v355.m256i_u64[1]);
      else
        sub_140C0DF30(&v355);
      v700 = 5;
    }
  }
  else
  {
    sub_1419234B0(v311, v317, 1152);
    v394 = _mm_load_si128(&v389);
    v395 = v390;
    v396 = v391;
    v397 = v392;
    v398 = v393;
    sub_1419234B0(v322, v323, 141);
  }
  *(_BYTE *)v725 = 1;
  v445 = v158;
  v444 = v730;
  v443 = v729;
  v442 = v731;
  v441 = v727;
  v440 = v728;
  v439 = v143;
  sub_140C10BF0(v144);
  v725 = v117 >> 8;
  v164 = v733;
  v145 = v700;
  if ( *(_BYTE *)(v733 + 2601) )
  {
    v165 = *(_QWORD *)(v733 + 2568);
    if ( v165 )
      sub_140001660(*(_QWORD *)(v733 + 2576), v165, 1);
  }
  *(_QWORD *)&v713 = v8;
  *(_WORD *)(v164 + 2601) = 0;
  *(_BYTE *)(v164 + 2603) = 0;
  v92 = v732;
LABEL_358:
  v30 = v145;
  sub_1419234B0(v312, v311, 1152);
  v399 = _mm_load_si128(&v394);
  v400 = v395;
  v401 = v396;
  v402 = v397;
  v403 = v398;
  sub_1419234B0(v325, v322, 141);
  *v706 = 1;
  v732 = v92;
  v438 = v92;
  v437 = v730;
  v436 = v729;
  v435 = v731;
  v434 = v727;
  v433 = v728;
  sub_140C11210(v143);
  v297 = v725 & 0xFFFFFFFFFFFF00LL;
  v298 = (_WORD)v725 << 8;
  v171 = (_BYTE *)v733;
  v299 = *(_QWORD *)(v733 + 1832);
  if ( v299 )
    sub_140001660(*(_QWORD *)(v733 + 1840), v299, 1);
  v47 = (unsigned __int8)v117 | v298;
  v48 = v297 >> 8;
  v171[1901] = 0;
  v170 = v728;
LABEL_198:
  v171[1902] = 0;
  sub_1419234B0(v313, v312, 1152);
  v409 = _mm_load_si128(&v399);
  v410 = v400;
  v411 = v401;
  v412 = v402;
  v413 = v403;
  sub_1419234B0(v326, v325, 141);
  v171[1899] = 1;
  v481 = v732;
  v480 = v730;
  v479 = v729;
  v478 = v731;
  v477 = v727;
  sub_140C3E5F0(v170);
  v32 = (v48 << 16) | v47;
  v7 = (__int64)v726;
LABEL_199:
  sub_1419234B0(v309, v313, 1152);
  v419 = v409;
  v420 = v410;
  v421 = v411;
  v422 = v412;
  v423 = v413;
  sub_1419234B0(v319, v326, 141);
  *v731 = 1;
  *(_BYTE *)v729.m128i_i64[1] = 1;
  sub_1419234B0(v314, v309, 1152);
  v414 = _mm_load_si128(&v419);
  v415 = v420;
  v416 = v421;
  v417 = v422;
  v418 = v423;
  sub_1419234B0(&v334, v319, 141);
  if ( (_DWORD)v33 != 2 )
  {
    v726 = v10;
    sub_1419234B0(v367, v314, 1152);
    v376 = v418;
    v375[0] = _mm_load_si128(&v414);
    v375[1] = v415;
    v375[2] = v416;
    v375[3] = v417;
    v355.m256i_i64[0] = v33;
    v355.m256i_i64[1] = v30;
    v355.m256i_i64[2] = v32;
    v355.m256i_i64[3] = *((_QWORD *)&v713 + 1);
    *(_QWORD *)&v356 = v723;
    *((_QWORD *)&v356 + 1) = v712;
    *(_QWORD *)&v357 = v711;
    *((_QWORD *)&v357 + 1) = v717;
    *(_QWORD *)v358 = v722;
    *(_OWORD *)&v358[8] = v709;
    v359 = v721;
    v360 = v716;
    v361 = v718;
    v362 = v710;
    v363 = v720;
    v364 = v714;
    v365 = (volatile signed __int64 **)v719;
    v366 = (volatile signed __int64 **)v7;
    v377 = 0;
    v378 = 1;
    v380 = v335;
    v379 = v334;
    v172 = v733;
    sub_1419234B0(v733 + 280, v336, 136);
    *(_BYTE *)(v172 + 474) = 0;
    sub_1419234B0(&v340[24], &v355, 1384);
    *(_QWORD *)v340 = 1;
    *(_QWORD *)&v340[8] = 1;
    *(_QWORD *)&v340[16] = 1;
    v346 = 0;
    nullsub_1(v174, v173);
    v175 = sub_140001650(1416, 8);
    if ( !v175 )
      sub_14196B2C1(8, 1416);
    v176 = (volatile signed __int64 *)v175;
    sub_1419234B0(v175, v340, 1416);
    v177 = _InterlockedIncrement64(v176);
    v19 = v713;
    if ( (v177 < 0) ^ v178 | (v177 == 0) )
      goto LABEL_292;
    *(_BYTE *)(v172 + 473) = 1;
    *(_QWORD *)(v172 + 224) = -1;
    *(_QWORD *)(v172 + 264) = v176;
    *(_BYTE *)(v172 + 472) = 1;
    v317[0] = v176;
    v432 = v732;
    v7 = v730;
    v431 = v730;
    v430 = v176;
    v179 = sub_140AF8050(128, (__int64)&off_141A8D748);
    v180 = v733;
    *(_BYTE *)(v733 + 471) = 1;
    *(_QWORD *)&v320 = v179;
    *(_BYTE *)(v180 + 470) = 1;
    *(_QWORD *)(v180 + 416) = v181;
    *(_QWORD *)v340 = 1;
    *(_QWORD *)&v340[8] = 1;
    *(_QWORD *)&v340[48] = 0;
    *(_QWORD *)&v340[56] = -2;
    nullsub_1(v182, v181);
    v183 = sub_140001650(80, 8);
    if ( !v183 )
    {
      v731 = v176;
      sub_14196B2C1(8, 80);
    }
    v184 = v183;
    *(_OWORD *)(v183 + 64) = *(_OWORD *)&v340[64];
    v185 = _mm_loadu_si128((const __m128i *)v340);
    v186 = *(_OWORD *)&v340[16];
    v187 = *(_OWORD *)&v340[32];
    *(_OWORD *)(v183 + 48) = *(_OWORD *)&v340[48];
    *(_OWORD *)(v183 + 32) = v187;
    *(_OWORD *)(v183 + 16) = v186;
    *(__m128i *)v183 = v185;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v183) <= 0 )
LABEL_292:
      BUG();
    v188 = v176;
    *(_BYTE *)(v180 + 469) = 1;
    v330.m128i_i64[0] = v183;
    *(_BYTE *)(v180 + 465) = 1;
    *(_QWORD *)(v180 + 480) = v183;
    v189 = v732;
    v496 = v732;
    v495 = v7;
    v494 = v188;
    sub_1408DC980(v180 + 424);
    v190 = v733;
    *(_BYTE *)(v733 + 468) = 1;
    v191 = *(_BYTE *)(v190 + 464);
    *(_WORD *)(v190 + 471) = 0;
    *(_BYTE *)(v190 + 469) = 0;
    v344[288] = v191;
    *(_QWORD *)&v340[16] = v188;
    *(_QWORD *)&v340[24] = v179;
    *(_QWORD *)v340 = 1;
    *(_QWORD *)&v340[8] = v184;
    v344[289] = 0;
    v631 = v189;
    v630 = v7;
    v629 = (__int64)v188;
    v192 = sub_140C69A10(v340, &off_141A8D760);
    v6 = v189;
    v5 = (__int64)v188;
    v193 = v733;
    *(_QWORD *)(v733 + 448) = v192;
    v194 = *(_BYTE *)(v193 + 464);
    v195 = *(_QWORD *)(v193 + 272);
    v196 = *(_QWORD *)(v193 + 432);
    v197 = *(_QWORD *)(v193 + 440);
    v493 = v6;
    v492 = v7;
    v491 = v188;
    sub_1408D8D00((__int64)v340, v195, v194, v196, v197);
    *(_QWORD *)&v4 = *(_QWORD *)&v340[8];
    *((_QWORD *)&v4 + 1) = *(_QWORD *)&v340[24];
    a4 = *(_QWORD *)&v340[16];
    if ( v340[0] )
    {
      v729 = *(__m128i *)&v340[8];
      goto LABEL_236;
    }
    v9 = v733;
    v198 = v733 + 224;
    *(_BYTE *)(v733 + 467) = 0;
    v17 = v9 + 488;
    v729.m128i_i64[0] = 0x8000000000000000uLL;
    *(_QWORD *)(v9 + 488) = 0x8000000000000000uLL;
    *(_QWORD *)(v9 + 496) = v4;
    *(_OWORD *)(v9 + 504) = __PAIR128__(*((unsigned __int64 *)&v4 + 1), a4);
    *(_QWORD *)(v9 + 528) = v198;
LABEL_212:
    v199 = *(__m128i **)(v9 + 528);
    v729.m128i_i64[1] = v17;
    v490 = v17;
    v489 = v5;
    v488 = v7;
    v487 = v6;
    v728 = (volatile signed __int64 **)v4;
    v486 = (volatile signed __int64 **)v4;
    v727 = a4;
    v485 = a4;
    v200 = v199;
    sub_140B622E0(v340, v199, v19);
    v201 = *(_QWORD *)v340;
    v16 = v733;
    if ( *(_QWORD *)v340 != -2 )
    {
      if ( *(_DWORD *)v340 == -1 )
      {
        v731 = (_BYTE *)v5;
        v732 = v6;
        v730 = v7;
        *(_QWORD *)(v733 + 488) = -1;
        v723 = (const __m128i *)(v16 + 496);
        v722 = v200;
        if ( v200->m128i_i64[0] != -1 )
          sub_140291900(v722);
        v50 = (__int64 *)v722;
        v722->m128i_i64[0] = v729.m128i_i64[0];
        v202 = v723[1];
        *(__m128i *)(v50 + 1) = _mm_loadu_si128(v723);
        *(__m128i *)(v50 + 3) = v202;
        v7 = v730;
        v6 = v732;
        v5 = (__int64)v731;
        v18 = v728;
        *(_QWORD *)&v4 = v727;
        v17 = v729.m128i_i64[1];
        v8 = v19;
LABEL_217:
        v729.m128i_i64[1] = v17;
        v490 = v17;
        v489 = v5;
        v488 = v7;
        v487 = v6;
        v728 = v18;
        v486 = v18;
        v727 = v4;
        v485 = v4;
        sub_140B61FB0(v340, v50, v8);
        v201 = *(_QWORD *)v340;
        v10 = v726;
        if ( *(_QWORD *)v340 != -2 )
        {
          if ( *(_DWORD *)v340 == -1 )
          {
            v201 = -1;
            v16 = v733;
            goto LABEL_225;
          }
          v354 = v342;
          v353 = v341;
          v352 = *(_OWORD *)&v340[88];
          v351 = *(_OWORD *)&v340[72];
          v204 = _mm_loadu_si128((const __m128i *)&v340[8]);
          v350 = *(__m128i *)&v340[56];
          v349 = *(_OWORD *)&v340[40];
          v348 = *(_OWORD *)&v340[24];
          v347 = v204;
        }
        v16 = v733;
        if ( *(_DWORD *)v340 != -2 )
        {
LABEL_225:
          v388 = v354;
          v387 = v353;
          v386 = v352;
          v385 = v351;
          v205 = _mm_load_si128(&v347);
          v384 = v350;
          v383 = v349;
          v382 = v348;
          v381 = v205;
          v206 = *(_QWORD *)v729.m128i_i64[1];
          if ( *(_QWORD *)v729.m128i_i64[1] == -1 )
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
          v732 = v6;
          v730 = v7;
          v731 = (_BYTE *)v5;
          if ( (_DWORD)v201 != -1 )
          {
            *(_QWORD *)v340 = v201;
            *(__m128i *)&v340[8] = v381;
            *(_OWORD *)&v340[24] = v382;
            *(_OWORD *)&v340[40] = v383;
            *(__m128i *)&v340[56] = v384;
            *(_OWORD *)&v340[72] = v385;
            *(_OWORD *)&v340[88] = v386;
            v341 = v387;
            v342 = _mm_load_si128(&v388);
            sub_141533670(v16 + 448);
            v332.m128i_i64[0] = (__int64)v340;
            v332.m128i_i64[1] = (__int64)sub_1411437C0;
            sub_1416DAFA0(&v347, &unk_141A8D778, &v332);
            v729 = v347;
            *((_QWORD *)&v4 + 1) = v348;
            v699 = v727;
            v698 = v728;
            v6 = v732;
            v697 = v732;
            v7 = v730;
            v696 = v730;
            v5 = (__int64)v731;
            v695 = v731;
            sub_140C40860(v340);
            v726 = v10;
LABEL_236:
            v61 = v733;
LABEL_237:
            *(_BYTE *)(v61 + 467) = 0;
            v209 = *(_QWORD *)(v61 + 448);
            v631 = v6;
            v630 = v7;
            v629 = v5;
            if ( (unsigned __int8)sub_141532BE0(v209) )
            {
              v631 = v6;
              v630 = v7;
              v629 = v5;
              sub_1415334F0(v209);
            }
            v731 = (_BYTE *)v5;
            v732 = v6;
            v730 = v7;
            v210 = v733;
            v211 = *(_QWORD *)(v733 + 424);
            if ( v211 )
              sub_140001660(*(_QWORD *)(v733 + 432), v211, 1);
            *(_BYTE *)(v210 + 468) = 0;
            v10 = v726;
            if ( *(_BYTE *)(v210 + 465) )
            {
              v212 = *(_QWORD *)(v733 + 480);
              if ( v212 )
              {
                v728 = (volatile signed __int64 **)(v733 + 480);
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
                if ( *v728 && !_InterlockedDecrement64(*v728) )
                {
                  v681 = v732;
                  v680 = v730;
                  v679 = v731;
                  sub_140CA3370();
                }
              }
            }
            v218 = v733;
            *(_BYTE *)(v733 + 465) = 0;
            *(_BYTE *)(v218 + 469) = 0;
            v728 = (volatile signed __int64 **)(v218 + 416);
            sub_140B663A0();
            if ( !_InterlockedDecrement64(*v728) )
            {
              v643 = v732;
              v642 = v730;
              v641 = v731;
              sub_140CA3CC0();
            }
            v219 = v733;
            *(_WORD *)(v733 + 470) = 0;
            *(_BYTE *)(v219 + 472) = 0;
            v731 = (_BYTE *)(v219 + 224);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v219 + 264)) )
              sub_140CA3A10(v733 + 264);
            v220 = *(_QWORD *)v731;
            v221 = v733;
            v5 = v730;
            v6 = v732;
            if ( *(_QWORD *)v731 != -1 )
            {
              v222 = 5;
              if ( v220 < 0 )
                v222 = v220 ^ 0x8000000000000000uLL;
              if ( v222 >= 4 )
              {
                v223 = 224;
                if ( v222 == 4 )
                {
                  v220 = *(_QWORD *)(v733 + 232);
                  v223 = 232;
                  if ( (unsigned __int64)v220 > 0xFFFFFFFFFFFFFFFDuLL )
                    goto LABEL_266;
                }
              }
              else
              {
                v220 = *(_QWORD *)(v733 + 232);
                v223 = 232;
              }
              if ( v220 )
                sub_140001660(*(_QWORD *)(v733 + v223 + 8), v220, 1);
            }
LABEL_266:
            *(_BYTE *)(v221 + 473) = 0;
            v484 = v6;
            v483 = v5;
            sub_140C0DD50(v221 + 280);
            v16 = v733;
            *(_BYTE *)(v733 + 474) = 0;
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
            *((_QWORD *)&v4 + 1) = *(_QWORD *)(v16 + 224);
            v426 = *(volatile signed __int64 **)(v16 + 264);
            v425 = *(_OWORD *)(v16 + 248);
            v424 = _mm_loadu_si128((const __m128i *)(v16 + 232));
            v7 = *(_QWORD *)(v16 + 416);
            v14 = *(_QWORD *)(v16 + 424);
            v729 = *(__m128i *)(v16 + 432);
            *(_BYTE *)(v16 + 470) = 0;
            v5 = *(_QWORD *)(v16 + 448);
            *(_WORD *)(v16 + 467) = 0;
            if ( *(_BYTE *)(v16 + 465) )
            {
              v225 = *(_QWORD *)(v733 + 480);
              if ( v225 )
              {
                v728 = (volatile signed __int64 **)(v733 + 480);
                v226 = _InterlockedOr64((volatile signed __int64 *)(v225 + 48), 4u);
                v727 = v226;
                if ( (v226 & 0xA) == 8 )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v225 + 16) + 16LL))(*(_QWORD *)(v225 + 24));
                  LOBYTE(v226) = v727;
                }
                if ( (v226 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v225 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  sub_141537E90(v225 + 32);
                  LOBYTE(v226) = v727;
                }
                if ( (v226 & 2) != 0 )
                {
                  v227 = *(_QWORD *)(v225 + 56);
                  v228 = *(_QWORD *)(v225 + 64);
                  *(_QWORD *)(v225 + 56) = -2;
                  if ( (unsigned __int64)(v227 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v228, v227, 1);
                }
                if ( *v728 && !_InterlockedDecrement64(*v728) )
                {
                  v681 = v732;
                  v680 = v730;
                  v679 = v731;
                  sub_140CA3370();
                }
              }
            }
            v229 = v733;
            *(_BYTE *)(v733 + 465) = 0;
            *(_DWORD *)(v229 + 469) = 0;
            *(_BYTE *)(v229 + 473) = 0;
            v484 = v732;
            v483 = v730;
            sub_140C0DD50(v229 + 280);
            v16 = v733;
            *(_BYTE *)(v733 + 474) = 0;
            goto LABEL_267;
          }
          *(_BYTE *)(v16 + 465) = 0;
          v230 = *(_QWORD *)(v16 + 480);
          v332.m128i_i64[0] = v230;
          *(_QWORD *)v340 = sub_1415460F0();
          *(_DWORD *)&v340[8] = v231;
          v232 = sub_1415460D0(v340, 15, 0);
          if ( v233 == -1 )
            sub_141549040(v340, 0, 0xFFFFFFFFLL);
          else
            sub_141549130((unsigned int)v340, v232, v233, 0, (__int64)&off_141A8D7A0);
          v9 = v733;
          v234 = (_OWORD *)(v733 + 480);
          v353 = _mm_loadu_si128((const __m128i *)&v340[96]);
          v235 = *(_OWORD *)&v340[80];
          v352 = *(_OWORD *)&v340[80];
          v236 = *(_OWORD *)&v340[64];
          v351 = *(_OWORD *)&v340[64];
          v237 = *(_OWORD *)v340;
          v238 = *(_OWORD *)&v340[16];
          v239 = *(_OWORD *)&v340[32];
          v240 = _mm_loadu_si128((const __m128i *)&v340[48]);
          v350 = v240;
          v349 = *(_OWORD *)&v340[32];
          v348 = *(_OWORD *)&v340[16];
          v347 = *(__m128i *)v340;
          *(__m128i *)(v733 + 576) = v353;
          v234[5] = v235;
          v234[4] = v236;
          v234[3] = v240;
          v234[2] = v239;
          v234[1] = v238;
          *v234 = v237;
          *(_QWORD *)(v9 + 592) = v230;
LABEL_6:
          v729.m128i_i64[0] = v9 + 480;
          v20 = (unsigned __int8 *)sub_1415475D0(v4, a2, a3, a4);
          *((_QWORD *)&v4 + 1) = v20[72];
          if ( v20[72] )
          {
            if ( DWORD2(v4) == 2 )
            {
LABEL_8:
              v21 = (volatile signed __int64 **)(v733 + 592);
              sub_140B58210(v340, v733 + 592, v8);
              v22 = *(_QWORD *)v340;
              if ( *(_QWORD *)v340 == -3 )
              {
                LOBYTE(v4) = BYTE8(v4) & 1 | (BYTE8(v4) == 2);
                if ( (unsigned __int8)sub_14152B3E0(v4, v729.m128i_i64[0], v8) )
                {
                  *v10 = (volatile signed __int64 *)-2LL;
                  result = 5;
                  v16 = v733;
                  goto LABEL_269;
                }
                v25 = *v21;
                if ( !*v21 )
                {
LABEL_36:
                  v699 = v727;
                  v698 = v728;
                  v697 = v732;
                  v696 = v730;
                  v695 = v731;
                  sub_140C41D40(v729.m128i_i64[0]);
                  if ( v22 == -2 )
                  {
                    nullsub_1(v57, v56);
                    v58 = 31;
                    v60 = sub_140001650(31, 1);
                    v16 = v733;
                    if ( !v60 )
                    {
                      v699 = v727;
                      v698 = v728;
                      v697 = v732;
                      v696 = v730;
                      v695 = v731;
                      sub_14196B2DB(1, 31);
                    }
                    *(_OWORD *)(v60 + 15) = *(__int128 *)((char *)&xmmword_141A8D7B8 + 15);
                    v729.m128i_i64[1] = v60;
                    *(__m128i *)v60 = _mm_loadu_si128((const __m128i *)&xmmword_141A8D7B8);
                    *((_QWORD *)&v4 + 1) = 31;
                  }
                  else
                  {
                    v58 = v22;
                    v16 = v733;
                    if ( v22 == -3 )
                    {
                      nullsub_1(v57, v56);
                      v58 = 22;
                      v59 = sub_140001650(22, 1);
                      if ( !v59 )
                      {
                        v699 = v727;
                        v698 = v728;
                        v697 = v732;
                        v696 = v730;
                        v695 = v731;
                        sub_14196B2DB(1, 22);
                      }
                      *(__m128i *)v59 = _mm_loadu_si128(&xmmword_141A8D7D7);
                      v729.m128i_i64[1] = v59;
                      *(_QWORD *)(v59 + 14) = 0xB697E685B6E8A88AuLL;
                      *((_QWORD *)&v4 + 1) = 22;
                    }
                    else if ( v22 == -1 )
                    {
                      LOBYTE(v6) = *(_BYTE *)(v733 + 464);
                      goto LABEL_271;
                    }
                  }
                  v726 = v10;
                  v729.m128i_i64[0] = v58;
                  sub_141533670(v16 + 448);
                  v61 = v733;
                  v7 = v730;
                  v6 = v732;
                  v5 = (__int64)v731;
                  goto LABEL_237;
                }
              }
              else
              {
                v729.m128i_i64[1] = *(_QWORD *)&v340[8];
                *((_QWORD *)&v4 + 1) = *(_QWORD *)&v340[16];
                v25 = *v21;
                if ( !*v21 )
                  goto LABEL_36;
              }
              v726 = v21;
              v51 = _InterlockedOr64(v25 + 6, 4u);
              if ( (v51 & 0xA) == 8 )
              {
                v52 = v51;
                (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v25 + 2) + 16LL))(*((_QWORD *)v25 + 3));
                v51 = v52;
              }
              if ( (v51 & 3) == 1 )
              {
                _InterlockedAnd64(v25 + 6, 0xFFFFFFFFFFFFFFFEuLL);
                v53 = v51;
                sub_141537E90(v25 + 4);
                v51 = v53;
              }
              if ( (v51 & 2) != 0 )
              {
                v54 = *((_QWORD *)v25 + 7);
                v55 = *((_QWORD *)v25 + 8);
                *((_QWORD *)v25 + 7) = -2;
                if ( (unsigned __int64)(v54 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                  sub_140001660(v55, v54, 1);
              }
              if ( *v726 && !_InterlockedDecrement64(*v726) )
                sub_140CA3370();
              goto LABEL_36;
            }
            v166 = v20;
            sub_1416CA860(v20, sub_140A21520);
            v20 = v166;
            v166[72] = 0;
          }
          *((_QWORD *)&v4 + 1) = (unsigned int)sub_141541630(v20[68], v20[69]);
          goto LABEL_8;
        }
LABEL_222:
        *v10 = (volatile signed __int64 *)-2LL;
        result = 4;
        goto LABEL_269;
      }
      v354 = v342;
      v353 = v341;
      v352 = *(_OWORD *)&v340[88];
      v351 = *(_OWORD *)&v340[72];
      v203 = _mm_loadu_si128((const __m128i *)&v340[8]);
      v350 = *(__m128i *)&v340[56];
      v349 = *(_OWORD *)&v340[40];
      v348 = *(_OWORD *)&v340[24];
      v347 = v203;
    }
    v8 = v19;
    v10 = v726;
    if ( *(_DWORD *)v340 != -2 )
      goto LABEL_225;
    goto LABEL_222;
  }
  *(_QWORD *)v340 = v30;
  *(_QWORD *)&v340[8] = v32;
  *(_QWORD *)&v340[16] = *((_QWORD *)&v713 + 1);
  *(_QWORD *)&v340[24] = v723;
  *(_QWORD *)&v340[32] = v712;
  *(_QWORD *)&v340[40] = v711;
  *(_QWORD *)&v340[48] = v717;
  *(_QWORD *)&v340[56] = v722;
  *(_OWORD *)&v340[64] = v709;
  *(_QWORD *)&v340[80] = v721;
  *(_QWORD *)&v340[88] = v716;
  *(_QWORD *)&v340[96] = v718;
  v341.m128i_i64[0] = (__int64)v710;
  v341.m128i_i64[1] = v720;
  v342.m128i_i64[0] = v714;
  v342.m128i_i64[1] = v719;
  v347.m128i_i64[0] = (__int64)v340;
  v347.m128i_i64[1] = (__int64)sub_1411437C0;
  sub_1416DAFA0(&v355, &unk_141A8CF70, &v347);
  v6 = v732;
  v704 = v732;
  v5 = v730;
  v703 = v730;
  sub_140C40860(v340);
  v729 = *(__m128i *)v355.m256i_i8;
  *((_QWORD *)&v4 + 1) = v355.m256i_i64[2];
LABEL_201:
  v16 = v733;
LABEL_202:
  v14 = -1;
  if ( !*(_BYTE *)(v16 + 466) )
    goto LABEL_267;
LABEL_203:
  v678 = v6;
  v677 = v5;
  sub_14028DBC0(v16);
LABEL_204:
  v16 = v733;
LABEL_267:
  *(_BYTE *)(v16 + 466) = 0;
  *(_QWORD *)&v4 = v729.m128i_i64[1];
  v15 = v729.m128i_i64[0];
LABEL_268:
  *(_BYTE *)(v16 + 475) = 0;
  *v10 = (volatile signed __int64 *)v14;
  v10[1] = (volatile signed __int64 *)v15;
  *((_OWORD *)v10 + 1) = v4;
  v224 = v425;
  *((__m128i *)v10 + 2) = _mm_load_si128(&v424);
  *((_OWORD *)v10 + 3) = v224;
  v10[8] = v426;
  v10[9] = (volatile signed __int64 *)v5;
  *((_WORD *)v10 + 40) = 0;
  v10[11] = (volatile signed __int64 *)v7;
  *((_BYTE *)v10 + 96) = (_BYTE)v6;
  result = 1;
LABEL_269:
  *(_BYTE *)(v16 + 476) = result;
  return result;
}
