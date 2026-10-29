// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x14046cf10 | name sub_14046CF10
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14046CF10(const __m128i *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __m128i *v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  __m128i *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  const __m128i *v14; // r9
  __int64 v15; // rdi
  _BYTE *v16; // rax
  _BYTE *v17; // rcx
  __int64 v18; // r13
  const __m128i *v19; // r12
  _BYTE *v20; // r8
  volatile signed __int64 **v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int8 *v23; // rax
  int v24; // ebx
  const __m128i *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // r15
  char result; // al
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  char v32; // r14
  __int64 v33; // r15
  __m128i v34; // xmm0
  __int64 v35; // rax
  const __m128i *v36; // rdx
  unsigned __int64 v37; // rsi
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  volatile signed __int64 **v41; // rdi
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rdi
  __int128 v48; // kr10_16
  unsigned __int16 v49; // r15
  __int64 v50; // r14
  _QWORD *v51; // r12
  const __m128i *v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // r13
  __int64 v55; // r12
  char v56; // al
  char v57; // r14
  char v58; // r14
  __int64 v59; // rdx
  __int64 v60; // rcx
  const __m128i *v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _BYTE *v68; // r14
  __int16 v69; // ax
  __int16 v70; // dx
  __int16 v71; // bx
  __m128i *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __m128i v75; // xmm0
  const __m128i *v76; // r15
  char *v77; // rbx
  __m128i v78; // xmm0
  int v79; // ebx
  __m128i v80; // xmm6
  __int64 v81; // r15
  __int64 v82; // rbx
  const __m128i *v83; // r15
  __int64 v84; // r14
  volatile signed __int64 **v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __m128i v89; // rax
  __int64 v90; // rax
  unsigned __int8 v91; // cl
  __m128i *v92; // rcx
  const __m128i *v93; // rdx
  const __m128i *v94; // r8
  __int64 v95; // r9
  __int64 v96; // r10
  char *v97; // r15
  __int64 v98; // rax
  const __m128i *v99; // r14
  char v100; // al
  __m128i v101; // xmm0
  __int64 v102; // r9
  const __m128i *v103; // rsi
  __int64 v104; // rax
  __int64 v105; // r15
  __int64 v106; // r12
  __int64 v107; // rsi
  __int64 v108; // rdx
  void (__fastcall *v109)(unsigned __int64 *, __int64, __int64); // rax
  void (__fastcall *v110)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v111; // rcx
  _WORD *v112; // rax
  __int64 v113; // rcx
  unsigned __int16 v114; // cx
  int v115; // eax
  __int8 *v116; // rdx
  __int64 v117; // rax
  const __m128i *v118; // rcx
  __int64 v119; // rax
  const __m128i *v120; // r15
  __int64 v121; // r12
  char v122; // al
  __int64 v123; // rcx
  unsigned __int64 v124; // rbx
  __m128i v125; // xmm0
  __int64 v126; // rax
  __m128i v127; // xmm6
  __int64 v128; // rax
  __int64 v129; // rdx
  const __m128i *v130; // r8
  __m128i *v131; // rcx
  __int64 v132; // r14
  __int64 *v133; // r15
  __m128i *v134; // r14
  __int64 v135; // r14
  __int128 v136; // xmm1
  __int128 v137; // xmm2
  __int128 v138; // xmm3
  __m128i v139; // xmm1
  __m128i v140; // xmm2
  __m128i v141; // xmm3
  const __m128i *v142; // r12
  const __m128i *v143; // rbx
  __int64 v144; // r12
  char v145; // al
  char *v146; // rcx
  char v147; // al
  __int64 *v148; // r14
  __m128i *v149; // rbx
  const __m128i *v150; // r15
  __int64 v151; // r15
  const __m128i *v152; // r14
  __m128i *v153; // rcx
  __int64 v154; // r9
  __int64 v155; // r10
  unsigned __int128 v156; // kr2F0_16
  __int64 v157; // rdx
  __int64 v158; // rax
  unsigned __int64 v159; // r15
  __m128i *v160; // r12
  __int64 v161; // rbx
  __int64 *v162; // rcx
  __int64 v163; // r14
  __int64 *v164; // rbx
  __m128i *v165; // r12
  const __m128i *v166; // r14
  __m128i v167; // xmm0
  __int64 v168; // rcx
  unsigned __int64 v169; // r15
  __int64 v170; // r14
  __int64 v171; // rdx
  unsigned __int8 *v172; // rbx
  __m128i *v173; // rbx
  const __m128i *v174; // rsi
  __m128i v175; // xmm1
  __int64 v176; // rdx
  __m128i *v177; // rbx
  volatile signed __int64 *v178; // rax
  __int64 v179; // rax
  volatile signed __int64 **v180; // rbx
  _BYTE *v181; // r13
  __int64 v182; // r14
  __int64 v183; // rcx
  __m128i *v184; // rax
  volatile signed __int64 *v185; // rbx
  __int64 v186; // r8
  __int64 v187; // rt0
  char v188; // of
  __m128i *v189; // rdi
  __m128i *v190; // r14
  __int64 v191; // r14
  __int64 v192; // r12
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // r15
  __m128i v197; // xmm0
  __int128 v198; // xmm1
  __int128 v199; // xmm2
  __m128i *v200; // rdi
  __m128i *v201; // r13
  __int64 v202; // rcx
  char v203; // al
  __int64 v204; // rax
  __int64 v205; // rcx
  int v206; // r8d
  __int64 v207; // rdx
  __int64 v208; // r9
  __int64 v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rax
  const __m128i *v212; // rdx
  const __m128i *v213; // rdi
  __int64 v214; // rbx
  __m128i v215; // xmm1
  __m128i v216; // xmm0
  __m128i v217; // xmm0
  __m128i v218; // xmm0
  __int64 v219; // rdx
  unsigned __int64 v220; // rcx
  __int64 v221; // rax
  __int64 v222; // rdi
  __int64 v223; // rdi
  __int64 v224; // rdx
  __int64 v225; // rdi
  char v226; // al
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // rax
  __int64 v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rdi
  unsigned __int64 v233; // rcx
  __int64 v234; // rax
  __int64 v235; // r13
  signed __int64 v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // rax
  __int64 v240; // rbx
  int v241; // edx
  int v242; // eax
  int v243; // edx
  _OWORD *v244; // rax
  __int128 v245; // xmm1
  __int128 v246; // xmm2
  __int128 v247; // xmm3
  __int128 v248; // xmm4
  __int128 v249; // xmm5
  __m128i v250; // xmm6
  _DWORD *v251; // rbx
  __int64 v252; // rcx
  __m128i *v253; // rax
  __m128i v254; // xmm0
  __m128i v255; // xmm0
  __int64 v256; // rax
  __m128i *v257; // rcx
  const __m128i *v258; // rdx
  const __m128i *v259; // r15
  __int64 v260; // rax
  const __m128i *v261; // r9
  __int64 v262; // r14
  __int64 v263; // rdx
  const __m128i *v264; // r15
  __int64 v265; // rax
  const __m128i *v266; // r14
  __int64 v267; // rdx
  __int64 v268; // rax
  unsigned __int64 v269; // r14
  __int64 v270; // rax
  const __m128i *v271; // r15
  __int64 v272; // rdx
  __int128 v273; // xmm1
  __int128 v274; // xmm2
  __int128 v275; // xmm3
  __int64 v276; // rax
  unsigned __int64 v277; // rdx
  __m128i v278; // xmm1
  __int128 v279; // xmm1
  __int128 v280; // xmm2
  __int128 v281; // xmm3
  __int64 v282; // rcx
  __int64 v283; // r8
  _QWORD *v284; // r10
  __m128i *v285; // r12
  const __m128i *v286; // rdx
  __int64 v287; // r9
  __int64 v288; // r11
  char *v289; // r14
  __m128i v290; // xmm0
  __int64 v291; // rax
  __int128 v292; // xmm1
  __int128 v293; // xmm2
  __int128 v294; // xmm3
  __int128 v295; // kr240_16
  __int64 v296; // r12
  __int64 *v297; // rdx
  __int64 v298; // r8
  __int64 v299; // rax
  __int64 v300; // rdx
  bool v301; // zf
  __int64 v302; // rdx
  __int64 v303; // rcx
  volatile signed __int64 *v304; // rax
  char v305; // r15
  __int64 v306; // r12
  __int64 v307; // rax
  unsigned __int64 v308; // r14
  __int16 v309; // r15
  __int64 v310; // rdx
  __int64 v311; // rax
  __int64 v312; // rcx
  __m128i v313; // xmm0
  __int128 v314; // xmm1
  __int128 v315; // xmm2
  __m128i si128; // xmm0
  __int128 v317; // xmm1
  __int128 v318; // xmm2
  __m128i v319; // xmm1
  __m128i v320[72]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v321[72]; // [rsp+4A8h] [rbp+428h] BYREF
  __m128i v322[72]; // [rsp+928h] [rbp+8A8h] BYREF
  __m128i v323[72]; // [rsp+DA8h] [rbp+D28h] BYREF
  __m128i v324[72]; // [rsp+1228h] [rbp+11A8h] BYREF
  __m128i v325[72]; // [rsp+16A8h] [rbp+1628h] BYREF
  __m128i v326[60]; // [rsp+1B28h] [rbp+1AA8h] BYREF
  __m128i v327[14]; // [rsp+1EE8h] [rbp+1E68h] BYREF
  __m128i v328[14]; // [rsp+1FD0h] [rbp+1F50h] BYREF
  __m128i v329[72]; // [rsp+20B0h] [rbp+2030h] BYREF
  __m128i v330[8]; // [rsp+2533h] [rbp+24B3h] BYREF
  __m128i v331; // [rsp+25C0h] [rbp+2540h] BYREF
  __int64 v332; // [rsp+25D0h] [rbp+2550h]
  __m128i v333[8]; // [rsp+2A44h] [rbp+29C4h] BYREF
  __m128i v334[8]; // [rsp+2AD1h] [rbp+2A51h] BYREF
  __m128i v335[8]; // [rsp+2B5Eh] [rbp+2ADEh] BYREF
  __m128i v336[8]; // [rsp+2BEBh] [rbp+2B6Bh] BYREF
  __m128i v337[13]; // [rsp+2C78h] [rbp+2BF8h] BYREF
  __m128i v338[13]; // [rsp+2D48h] [rbp+2CC8h] BYREF
  __m128i v339[8]; // [rsp+2E18h] [rbp+2D98h] BYREF
  __m128i v340; // [rsp+2EA0h] [rbp+2E20h] BYREF
  __int64 v341; // [rsp+2EB0h] [rbp+2E30h]
  __m128i v342; // [rsp+3320h] [rbp+32A0h] BYREF
  __int64 v343; // [rsp+3330h] [rbp+32B0h]
  __m128i v344[8]; // [rsp+38A3h] [rbp+3823h] BYREF
  __m128i v345[4]; // [rsp+3930h] [rbp+38B0h] BYREF
  __int64 v346; // [rsp+3970h] [rbp+38F0h]
  __m128i v347[8]; // [rsp+3978h] [rbp+38F8h] BYREF
  _BYTE v348[104]; // [rsp+3A00h] [rbp+3980h] BYREF
  __m128i v349; // [rsp+3A68h] [rbp+39E8h]
  __m128i v350; // [rsp+3A78h] [rbp+39F8h]
  char *v351; // [rsp+3A88h] [rbp+3A08h]
  __m128i v352[18]; // [rsp+3A90h] [rbp+3A10h] BYREF
  char v353; // [rsp+3BB0h] [rbp+3B30h]
  char v354; // [rsp+3BB1h] [rbp+3B31h]
  __m128i v355[19]; // [rsp+3E50h] [rbp+3DD0h] BYREF
  __int64 v356; // [rsp+3F80h] [rbp+3F00h]
  __m128i v357; // [rsp+55E0h] [rbp+5560h] BYREF
  __int128 v358; // [rsp+55F0h] [rbp+5570h]
  __int128 v359; // [rsp+5600h] [rbp+5580h]
  __m128i v360; // [rsp+5610h] [rbp+5590h]
  __int128 v361; // [rsp+5620h] [rbp+55A0h]
  __int128 v362; // [rsp+5630h] [rbp+55B0h]
  __m128i v363; // [rsp+5640h] [rbp+55C0h]
  __m128i v364; // [rsp+5650h] [rbp+55D0h]
  __m128i v365; // [rsp+5B60h] [rbp+5AE0h] BYREF
  __m128i v366; // [rsp+5B70h] [rbp+5AF0h] BYREF
  __int128 v367; // [rsp+5B80h] [rbp+5B00h]
  __int128 v368; // [rsp+5B90h] [rbp+5B10h]
  __int64 *v369; // [rsp+5BA0h] [rbp+5B20h]
  __int64 *v370; // [rsp+5BA8h] [rbp+5B28h]
  const __m128i *v371; // [rsp+5BB0h] [rbp+5B30h]
  const __m128i *v372; // [rsp+5BB8h] [rbp+5B38h]
  const __m128i *v373; // [rsp+5BC0h] [rbp+5B40h]
  __int64 v374; // [rsp+5BC8h] [rbp+5B48h]
  __int64 v375; // [rsp+5BD0h] [rbp+5B50h]
  __int64 v376; // [rsp+5BD8h] [rbp+5B58h]
  __int64 v377; // [rsp+5BE0h] [rbp+5B60h]
  __int64 v378; // [rsp+5BE8h] [rbp+5B68h]
  __m128i v379[9]; // [rsp+5BF0h] [rbp+5B70h] BYREF
  __int64 v380; // [rsp+5C80h] [rbp+5C00h]
  __m128i v381[50]; // [rsp+5C88h] [rbp+5C08h] BYREF
  __m128i v382[12]; // [rsp+5FB0h] [rbp+5F30h] BYREF
  __m128i v383[4]; // [rsp+6078h] [rbp+5FF8h] BYREF
  __int64 v384; // [rsp+60B8h] [rbp+6038h]
  __int16 v385; // [rsp+60C0h] [rbp+6040h]
  char v386; // [rsp+60C2h] [rbp+6042h]
  __int32 v387; // [rsp+60C3h] [rbp+6043h]
  __int8 v388; // [rsp+60C7h] [rbp+6047h]
  __m128i v389; // [rsp+6150h] [rbp+60D0h]
  __int128 v390; // [rsp+6160h] [rbp+60E0h]
  __int128 v391; // [rsp+6170h] [rbp+60F0h]
  __m128i v392; // [rsp+6180h] [rbp+6100h]
  __int128 v393; // [rsp+6190h] [rbp+6110h]
  __int128 v394; // [rsp+61A0h] [rbp+6120h]
  __m128i v395; // [rsp+61B0h] [rbp+6130h]
  __m128i v396; // [rsp+61C0h] [rbp+6140h] BYREF
  __m128i v397; // [rsp+61D0h] [rbp+6150h] BYREF
  __m128i v398; // [rsp+61E0h] [rbp+6160h]
  __m128i v399; // [rsp+61F0h] [rbp+6170h]
  __m128i v400; // [rsp+6200h] [rbp+6180h]
  __int64 v401; // [rsp+6210h] [rbp+6190h]
  __m128i v402; // [rsp+6220h] [rbp+61A0h] BYREF
  __m128i v403; // [rsp+6230h] [rbp+61B0h]
  __m128i v404; // [rsp+6240h] [rbp+61C0h]
  __m128i v405; // [rsp+6250h] [rbp+61D0h]
  __int64 v406; // [rsp+6260h] [rbp+61E0h]
  __m128i v407; // [rsp+6270h] [rbp+61F0h] BYREF
  __m128i v408; // [rsp+6280h] [rbp+6200h]
  __m128i v409; // [rsp+6290h] [rbp+6210h]
  __m128i v410; // [rsp+62A0h] [rbp+6220h]
  __int64 v411; // [rsp+62B0h] [rbp+6230h]
  __int128 v412; // [rsp+62C0h] [rbp+6240h]
  __int128 v413; // [rsp+62D0h] [rbp+6250h]
  __int128 v414; // [rsp+62E0h] [rbp+6260h]
  __int128 v415; // [rsp+62F0h] [rbp+6270h]
  __int64 v416; // [rsp+6300h] [rbp+6280h]
  __m128i v417; // [rsp+6310h] [rbp+6290h]
  __m128i v418; // [rsp+6320h] [rbp+62A0h]
  __m128i v419; // [rsp+6330h] [rbp+62B0h]
  __m128i v420; // [rsp+6340h] [rbp+62C0h]
  __int64 v421; // [rsp+6350h] [rbp+62D0h]
  __m128i v422; // [rsp+6360h] [rbp+62E0h] BYREF
  __m128i v423; // [rsp+6370h] [rbp+62F0h]
  __m128i v424; // [rsp+6380h] [rbp+6300h]
  __m128i v425; // [rsp+6390h] [rbp+6310h]
  __int64 v426; // [rsp+63A0h] [rbp+6320h]
  __m128i v427; // [rsp+63B0h] [rbp+6330h] BYREF
  __m128i v428; // [rsp+63C0h] [rbp+6340h]
  __m128i v429; // [rsp+63D0h] [rbp+6350h]
  __m128i v430; // [rsp+63E0h] [rbp+6360h]
  __int64 v431; // [rsp+63F0h] [rbp+6370h]
  __m128i v432; // [rsp+6400h] [rbp+6380h] BYREF
  __m128i v433; // [rsp+6410h] [rbp+6390h]
  __int64 v434; // [rsp+6420h] [rbp+63A0h]
  __m128i v435; // [rsp+64F0h] [rbp+6470h] BYREF
  __m128i v436; // [rsp+6500h] [rbp+6480h]
  __int64 v437; // [rsp+6510h] [rbp+6490h]
  volatile signed __int64 **v438; // [rsp+6530h] [rbp+64B0h]
  const __m128i *v439; // [rsp+6538h] [rbp+64B8h]
  _BYTE *v440; // [rsp+6540h] [rbp+64C0h]
  const __m128i *v441; // [rsp+6548h] [rbp+64C8h]
  _BYTE *v442; // [rsp+6550h] [rbp+64D0h]
  __m128i *v443; // [rsp+6558h] [rbp+64D8h]
  __m128i *v444; // [rsp+6560h] [rbp+64E0h]
  const __m128i *v445; // [rsp+6568h] [rbp+64E8h]
  volatile signed __int64 **v446; // [rsp+6570h] [rbp+64F0h]
  const __m128i *v447; // [rsp+6578h] [rbp+64F8h]
  _BYTE *v448; // [rsp+6580h] [rbp+6500h]
  const __m128i *v449; // [rsp+6588h] [rbp+6508h]
  _BYTE *v450; // [rsp+6590h] [rbp+6510h]
  __m128i *v451; // [rsp+6598h] [rbp+6518h]
  __m128i *v452; // [rsp+65A0h] [rbp+6520h]
  const __m128i *v453; // [rsp+65A8h] [rbp+6528h]
  _BYTE *v454; // [rsp+65B0h] [rbp+6530h]
  const __m128i *v455; // [rsp+65B8h] [rbp+6538h]
  unsigned __int64 v456; // [rsp+65C0h] [rbp+6540h]
  const __m128i *v457; // [rsp+65C8h] [rbp+6548h]
  volatile signed __int64 **v458; // [rsp+65D0h] [rbp+6550h]
  const __m128i *v459; // [rsp+65D8h] [rbp+6558h]
  _BYTE *v460; // [rsp+65E0h] [rbp+6560h]
  const __m128i *v461; // [rsp+65E8h] [rbp+6568h]
  _BYTE *v462; // [rsp+65F0h] [rbp+6570h]
  __m128i *v463; // [rsp+65F8h] [rbp+6578h]
  __m128i *v464; // [rsp+6600h] [rbp+6580h]
  const __m128i *v465; // [rsp+6608h] [rbp+6588h]
  volatile signed __int64 **v466; // [rsp+6610h] [rbp+6590h]
  const __m128i *v467; // [rsp+6618h] [rbp+6598h]
  _BYTE *v468; // [rsp+6620h] [rbp+65A0h]
  const __m128i *v469; // [rsp+6628h] [rbp+65A8h]
  _BYTE *v470; // [rsp+6630h] [rbp+65B0h]
  __m128i *v471; // [rsp+6638h] [rbp+65B8h]
  __m128i *v472; // [rsp+6640h] [rbp+65C0h]
  __int64 v473; // [rsp+6648h] [rbp+65C8h]
  const __m128i *v474; // [rsp+6650h] [rbp+65D0h]
  const __m128i *v475; // [rsp+6658h] [rbp+65D8h]
  __int8 *v476; // [rsp+6660h] [rbp+65E0h]
  const __m128i *v477; // [rsp+6668h] [rbp+65E8h]
  volatile signed __int64 **v478; // [rsp+6670h] [rbp+65F0h]
  const __m128i *v479; // [rsp+6678h] [rbp+65F8h]
  _BYTE *v480; // [rsp+6680h] [rbp+6600h]
  const __m128i *v481; // [rsp+6688h] [rbp+6608h]
  _BYTE *v482; // [rsp+6690h] [rbp+6610h]
  __m128i *v483; // [rsp+6698h] [rbp+6618h]
  __m128i *v484; // [rsp+66A0h] [rbp+6620h]
  __int64 v485; // [rsp+66A8h] [rbp+6628h]
  const __m128i *v486; // [rsp+66B0h] [rbp+6630h]
  const __m128i *v487; // [rsp+66B8h] [rbp+6638h]
  _BYTE *v488; // [rsp+66C0h] [rbp+6640h]
  const __m128i *v489; // [rsp+66C8h] [rbp+6648h]
  _BYTE *v490; // [rsp+66D0h] [rbp+6650h]
  __m128i *v491; // [rsp+66D8h] [rbp+6658h]
  __m128i *v492; // [rsp+66E0h] [rbp+6660h]
  __m128i *v493; // [rsp+66E8h] [rbp+6668h]
  __int64 v494; // [rsp+66F8h] [rbp+6678h]
  __int64 v495; // [rsp+6700h] [rbp+6680h]
  const __m128i *v496; // [rsp+6718h] [rbp+6698h]
  __int64 v497; // [rsp+6720h] [rbp+66A0h]
  __int64 v498; // [rsp+6728h] [rbp+66A8h]
  __m128i *v499; // [rsp+6730h] [rbp+66B0h]
  _BYTE *v500; // [rsp+6738h] [rbp+66B8h]
  __m128i *v501; // [rsp+6750h] [rbp+66D0h]
  __m128i *v502; // [rsp+6758h] [rbp+66D8h]
  __m128i *v503; // [rsp+6770h] [rbp+66F0h]
  __m128i *v504; // [rsp+6778h] [rbp+66F8h]
  __m128i *v505; // [rsp+6780h] [rbp+6700h]
  __m128i *v506; // [rsp+6788h] [rbp+6708h]
  const __m128i *v507; // [rsp+6790h] [rbp+6710h]
  const __m128i *v508; // [rsp+6798h] [rbp+6718h]
  _BYTE *v509; // [rsp+67A0h] [rbp+6720h]
  __int64 v510; // [rsp+67A8h] [rbp+6728h]
  const __m128i *v511; // [rsp+67B0h] [rbp+6730h]
  _BYTE *v512; // [rsp+67B8h] [rbp+6738h]
  const __m128i *v513; // [rsp+67C0h] [rbp+6740h]
  _BYTE *v514; // [rsp+67C8h] [rbp+6748h]
  __int64 v515; // [rsp+67D0h] [rbp+6750h]
  __int64 v516; // [rsp+67D8h] [rbp+6758h]
  const __m128i *v517; // [rsp+67E0h] [rbp+6760h]
  _BYTE *v518; // [rsp+67E8h] [rbp+6768h]
  const __m128i *v519; // [rsp+67F0h] [rbp+6770h]
  _BYTE *v520; // [rsp+67F8h] [rbp+6778h]
  __int64 v521; // [rsp+6800h] [rbp+6780h]
  __int64 v522; // [rsp+6808h] [rbp+6788h]
  __int64 v523; // [rsp+6810h] [rbp+6790h]
  const __m128i *v524; // [rsp+6818h] [rbp+6798h]
  _BYTE *v525; // [rsp+6820h] [rbp+67A0h]
  const __m128i *v526; // [rsp+6828h] [rbp+67A8h]
  _BYTE *v527; // [rsp+6830h] [rbp+67B0h]
  __int64 v528; // [rsp+6838h] [rbp+67B8h]
  __int64 v529; // [rsp+6840h] [rbp+67C0h]
  unsigned __int64 v530; // [rsp+6848h] [rbp+67C8h]
  __int64 v531; // [rsp+6850h] [rbp+67D0h]
  __int64 v532; // [rsp+6858h] [rbp+67D8h]
  const __m128i *v533; // [rsp+6860h] [rbp+67E0h]
  _BYTE *v534; // [rsp+6868h] [rbp+67E8h]
  const __m128i *v535; // [rsp+6870h] [rbp+67F0h]
  _BYTE *v536; // [rsp+6878h] [rbp+67F8h]
  __int64 v537; // [rsp+6880h] [rbp+6800h]
  __int64 v538; // [rsp+6888h] [rbp+6808h]
  _BYTE *v539; // [rsp+6890h] [rbp+6810h]
  __int64 v540; // [rsp+6898h] [rbp+6818h]
  unsigned __int64 v541; // [rsp+68A0h] [rbp+6820h]
  const __m128i *v542; // [rsp+68A8h] [rbp+6828h]
  volatile signed __int64 **v543; // [rsp+68B0h] [rbp+6830h]
  const __m128i *v544; // [rsp+68B8h] [rbp+6838h]
  _BYTE *v545; // [rsp+68C0h] [rbp+6840h]
  const __m128i *v546; // [rsp+68C8h] [rbp+6848h]
  _BYTE *v547; // [rsp+68D0h] [rbp+6850h]
  const __m128i *v548; // [rsp+68D8h] [rbp+6858h]
  volatile signed __int64 **v549; // [rsp+68E0h] [rbp+6860h]
  const __m128i *v550; // [rsp+68E8h] [rbp+6868h]
  _BYTE *v551; // [rsp+68F0h] [rbp+6870h]
  const __m128i *v552; // [rsp+68F8h] [rbp+6878h]
  _BYTE *v553; // [rsp+6900h] [rbp+6880h]
  __int64 v554; // [rsp+6908h] [rbp+6888h]
  __m128i *v555; // [rsp+6910h] [rbp+6890h]
  __int64 v556; // [rsp+6918h] [rbp+6898h]
  __int64 *v557; // [rsp+6920h] [rbp+68A0h]
  __int64 v558; // [rsp+6928h] [rbp+68A8h]
  volatile signed __int64 **v559; // [rsp+6930h] [rbp+68B0h]
  const __m128i *v560; // [rsp+6938h] [rbp+68B8h]
  _BYTE *v561; // [rsp+6940h] [rbp+68C0h]
  const __m128i *v562; // [rsp+6948h] [rbp+68C8h]
  _BYTE *v563; // [rsp+6950h] [rbp+68D0h]
  const __m128i *v564; // [rsp+6958h] [rbp+68D8h]
  volatile signed __int64 **v565; // [rsp+6960h] [rbp+68E0h]
  const __m128i *v566; // [rsp+6968h] [rbp+68E8h]
  _BYTE *v567; // [rsp+6970h] [rbp+68F0h]
  const __m128i *v568; // [rsp+6978h] [rbp+68F8h]
  _BYTE *v569; // [rsp+6980h] [rbp+6900h]
  __int64 v570; // [rsp+6988h] [rbp+6908h]
  __m128i *v571; // [rsp+6990h] [rbp+6910h]
  const __m128i *v572; // [rsp+6998h] [rbp+6918h]
  volatile signed __int64 **v573; // [rsp+69A0h] [rbp+6920h]
  const __m128i *v574; // [rsp+69A8h] [rbp+6928h]
  _BYTE *v575; // [rsp+69B0h] [rbp+6930h]
  const __m128i *v576; // [rsp+69B8h] [rbp+6938h]
  _BYTE *v577; // [rsp+69C0h] [rbp+6940h]
  __m128i *v578; // [rsp+69C8h] [rbp+6948h]
  __m128i *v579; // [rsp+69D0h] [rbp+6950h]
  __int64 v580; // [rsp+69D8h] [rbp+6958h]
  __int64 v581; // [rsp+69E0h] [rbp+6960h]
  const __m128i *v582; // [rsp+69E8h] [rbp+6968h]
  _BYTE *v583; // [rsp+69F0h] [rbp+6970h]
  const __m128i *v584; // [rsp+69F8h] [rbp+6978h]
  _BYTE *v585; // [rsp+6A00h] [rbp+6980h]
  volatile signed __int64 **v586; // [rsp+6A08h] [rbp+6988h]
  const __m128i *v587; // [rsp+6A10h] [rbp+6990h]
  _BYTE *v588; // [rsp+6A18h] [rbp+6998h]
  const __m128i *v589; // [rsp+6A20h] [rbp+69A0h]
  _BYTE *v590; // [rsp+6A28h] [rbp+69A8h]
  __m128i *v591; // [rsp+6A30h] [rbp+69B0h]
  __m128i *v592; // [rsp+6A38h] [rbp+69B8h]
  volatile signed __int64 **v593; // [rsp+6A40h] [rbp+69C0h]
  const __m128i *v594; // [rsp+6A48h] [rbp+69C8h]
  _BYTE *v595; // [rsp+6A50h] [rbp+69D0h]
  const __m128i *v596; // [rsp+6A58h] [rbp+69D8h]
  _BYTE *v597; // [rsp+6A60h] [rbp+69E0h]
  __m128i *v598; // [rsp+6A68h] [rbp+69E8h]
  __m128i *v599; // [rsp+6A70h] [rbp+69F0h]
  const __m128i *v600; // [rsp+6A78h] [rbp+69F8h]
  __int64 v601; // [rsp+6A80h] [rbp+6A00h]
  __int64 v602; // [rsp+6A88h] [rbp+6A08h]
  const __m128i *v603; // [rsp+6A90h] [rbp+6A10h]
  _BYTE *v604; // [rsp+6A98h] [rbp+6A18h]
  const __m128i *v605; // [rsp+6AA0h] [rbp+6A20h]
  _BYTE *v606; // [rsp+6AA8h] [rbp+6A28h]
  const __m128i *v607; // [rsp+6AB0h] [rbp+6A30h]
  volatile signed __int64 **v608; // [rsp+6AB8h] [rbp+6A38h]
  const __m128i *v609; // [rsp+6AC0h] [rbp+6A40h]
  _BYTE *v610; // [rsp+6AC8h] [rbp+6A48h]
  const __m128i *v611; // [rsp+6AD0h] [rbp+6A50h]
  _BYTE *v612; // [rsp+6AD8h] [rbp+6A58h]
  __m128i *v613; // [rsp+6AE0h] [rbp+6A60h]
  __m128i *v614; // [rsp+6AE8h] [rbp+6A68h]
  __int64 v615; // [rsp+6AF0h] [rbp+6A70h]
  const __m128i *v616; // [rsp+6AF8h] [rbp+6A78h]
  const __m128i *v617; // [rsp+6B00h] [rbp+6A80h]
  volatile signed __int64 **v618; // [rsp+6B08h] [rbp+6A88h]
  const __m128i *v619; // [rsp+6B10h] [rbp+6A90h]
  _BYTE *v620; // [rsp+6B18h] [rbp+6A98h]
  const __m128i *v621; // [rsp+6B20h] [rbp+6AA0h]
  _BYTE *v622; // [rsp+6B28h] [rbp+6AA8h]
  __m128i *v623; // [rsp+6B30h] [rbp+6AB0h]
  __m128i *v624; // [rsp+6B38h] [rbp+6AB8h]
  __int64 v625; // [rsp+6B40h] [rbp+6AC0h]
  const __m128i *v626; // [rsp+6B48h] [rbp+6AC8h]
  __int64 v627; // [rsp+6B50h] [rbp+6AD0h]
  const __m128i *v628; // [rsp+6B58h] [rbp+6AD8h]
  unsigned __int64 v629; // [rsp+6B60h] [rbp+6AE0h]
  __int64 v630; // [rsp+6B68h] [rbp+6AE8h]
  __int64 v631; // [rsp+6B70h] [rbp+6AF0h]
  const __m128i *v632; // [rsp+6B78h] [rbp+6AF8h]
  _BYTE *v633; // [rsp+6B80h] [rbp+6B00h]
  const __m128i *v634; // [rsp+6B88h] [rbp+6B08h]
  _BYTE *v635; // [rsp+6B90h] [rbp+6B10h]
  __int64 v636; // [rsp+6B98h] [rbp+6B18h]
  __m128i *v637; // [rsp+6BA0h] [rbp+6B20h]
  const __m128i *v638; // [rsp+6BA8h] [rbp+6B28h]
  unsigned __int64 v639; // [rsp+6BB0h] [rbp+6B30h]
  const __m128i *v640; // [rsp+6BB8h] [rbp+6B38h]
  volatile signed __int64 **v641; // [rsp+6BC0h] [rbp+6B40h]
  const __m128i *v642; // [rsp+6BC8h] [rbp+6B48h]
  _BYTE *v643; // [rsp+6BD0h] [rbp+6B50h]
  const __m128i *v644; // [rsp+6BD8h] [rbp+6B58h]
  _BYTE *v645; // [rsp+6BE0h] [rbp+6B60h]
  __m128i *v646; // [rsp+6BE8h] [rbp+6B68h]
  __m128i *v647; // [rsp+6BF0h] [rbp+6B70h]
  __int64 v648; // [rsp+6BF8h] [rbp+6B78h]
  const __m128i *v649; // [rsp+6C00h] [rbp+6B80h]
  volatile signed __int64 **v650; // [rsp+6C08h] [rbp+6B88h]
  const __m128i *v651; // [rsp+6C10h] [rbp+6B90h]
  _BYTE *v652; // [rsp+6C18h] [rbp+6B98h]
  const __m128i *v653; // [rsp+6C20h] [rbp+6BA0h]
  _BYTE *v654; // [rsp+6C28h] [rbp+6BA8h]
  __int64 v655; // [rsp+6C30h] [rbp+6BB0h]
  __m128i *v656; // [rsp+6C38h] [rbp+6BB8h]
  const __m128i *v657; // [rsp+6C40h] [rbp+6BC0h]
  __m128i *v658; // [rsp+6C48h] [rbp+6BC8h]
  __int64 v659; // [rsp+6C50h] [rbp+6BD0h]
  const __m128i *v660; // [rsp+6C58h] [rbp+6BD8h]
  volatile signed __int64 **v661; // [rsp+6C60h] [rbp+6BE0h]
  const __m128i *v662; // [rsp+6C68h] [rbp+6BE8h]
  _BYTE *v663; // [rsp+6C70h] [rbp+6BF0h]
  const __m128i *v664; // [rsp+6C78h] [rbp+6BF8h]
  _BYTE *v665; // [rsp+6C80h] [rbp+6C00h]
  __int64 v666; // [rsp+6C88h] [rbp+6C08h]
  __m128i *v667; // [rsp+6C90h] [rbp+6C10h]
  int v668; // [rsp+6C98h] [rbp+6C18h]
  int v669; // [rsp+6C9Ch] [rbp+6C1Ch]
  __m128i *v670; // [rsp+6CA0h] [rbp+6C20h]
  __m128i *v671; // [rsp+6CA8h] [rbp+6C28h]
  const __m128i *v672; // [rsp+6CB0h] [rbp+6C30h]
  volatile signed __int64 **v673; // [rsp+6CB8h] [rbp+6C38h]
  const __m128i *v674; // [rsp+6CC0h] [rbp+6C40h]
  _BYTE *v675; // [rsp+6CC8h] [rbp+6C48h]
  const __m128i *v676; // [rsp+6CD0h] [rbp+6C50h]
  _BYTE *v677; // [rsp+6CD8h] [rbp+6C58h]
  __m128i *v678; // [rsp+6CE0h] [rbp+6C60h]
  __m128i *v679; // [rsp+6CE8h] [rbp+6C68h]
  char *v680; // [rsp+6CF0h] [rbp+6C70h]
  const __m128i *v681; // [rsp+6CF8h] [rbp+6C78h]
  unsigned __int64 v682; // [rsp+6D00h] [rbp+6C80h]
  const __m128i *v683; // [rsp+6D08h] [rbp+6C88h]
  volatile signed __int64 **v684; // [rsp+6D10h] [rbp+6C90h]
  const __m128i *v685; // [rsp+6D18h] [rbp+6C98h]
  _BYTE *v686; // [rsp+6D20h] [rbp+6CA0h]
  const __m128i *v687; // [rsp+6D28h] [rbp+6CA8h]
  _BYTE *v688; // [rsp+6D30h] [rbp+6CB0h]
  __m128i *v689; // [rsp+6D38h] [rbp+6CB8h]
  __m128i *v690; // [rsp+6D40h] [rbp+6CC0h]
  const __m128i *v691; // [rsp+6D48h] [rbp+6CC8h]
  volatile signed __int64 **v692; // [rsp+6D50h] [rbp+6CD0h]
  const __m128i *v693; // [rsp+6D58h] [rbp+6CD8h]
  _BYTE *v694; // [rsp+6D60h] [rbp+6CE0h]
  const __m128i *v695; // [rsp+6D68h] [rbp+6CE8h]
  _BYTE *v696; // [rsp+6D70h] [rbp+6CF0h]
  __m128i *v697; // [rsp+6D78h] [rbp+6CF8h]
  __m128i *v698; // [rsp+6D80h] [rbp+6D00h]
  int v699; // [rsp+6D8Ch] [rbp+6D0Ch]
  int v700; // [rsp+6D90h] [rbp+6D10h]
  int v701; // [rsp+6D94h] [rbp+6D14h]
  volatile signed __int64 **v702; // [rsp+6D98h] [rbp+6D18h]
  const __m128i *v703; // [rsp+6DA0h] [rbp+6D20h]
  _BYTE *v704; // [rsp+6DA8h] [rbp+6D28h]
  const __m128i *v705; // [rsp+6DB0h] [rbp+6D30h]
  _BYTE *v706; // [rsp+6DB8h] [rbp+6D38h]
  __int64 v707; // [rsp+6DC0h] [rbp+6D40h]
  __m128i *v708; // [rsp+6DC8h] [rbp+6D48h]
  __int64 v709; // [rsp+6DD0h] [rbp+6D50h]
  __m128i *v710; // [rsp+6DD8h] [rbp+6D58h]
  __int64 v711; // [rsp+6DE0h] [rbp+6D60h]
  __m128i *v712; // [rsp+6DE8h] [rbp+6D68h]
  __m128i *v713; // [rsp+6DF0h] [rbp+6D70h]
  const __m128i *v714; // [rsp+6DF8h] [rbp+6D78h]
  char *v715; // [rsp+6E00h] [rbp+6D80h]
  const __m128i *v716; // [rsp+6E08h] [rbp+6D88h]
  _BYTE *v717; // [rsp+6E10h] [rbp+6D90h]
  const __m128i *v718; // [rsp+6E18h] [rbp+6D98h]
  unsigned __int64 v719; // [rsp+6E20h] [rbp+6DA0h]
  const __m128i *v720; // [rsp+6E28h] [rbp+6DA8h]
  volatile signed __int64 **v721; // [rsp+6E30h] [rbp+6DB0h]
  const __m128i *v722; // [rsp+6E38h] [rbp+6DB8h]
  _BYTE *v723; // [rsp+6E40h] [rbp+6DC0h]
  const __m128i *v724; // [rsp+6E48h] [rbp+6DC8h]
  _BYTE *v725; // [rsp+6E50h] [rbp+6DD0h]
  __m128i *v726; // [rsp+6E58h] [rbp+6DD8h]
  __m128i *v727; // [rsp+6E60h] [rbp+6DE0h]
  __m128i *v728; // [rsp+6E68h] [rbp+6DE8h]
  __m128i *v729; // [rsp+6E70h] [rbp+6DF0h]
  const __m128i *v730; // [rsp+6E78h] [rbp+6DF8h]
  volatile signed __int64 **v731; // [rsp+6E80h] [rbp+6E00h]
  char *v732; // [rsp+6E88h] [rbp+6E08h]
  const __m128i *v733; // [rsp+6E90h] [rbp+6E10h]
  __int64 v734; // [rsp+6E98h] [rbp+6E18h]
  __int64 v735; // [rsp+6EA0h] [rbp+6E20h]
  char *v736; // [rsp+6EA8h] [rbp+6E28h]
  __int64 v737; // [rsp+6EB0h] [rbp+6E30h]
  const __m128i *v738; // [rsp+6EB8h] [rbp+6E38h]
  char v739; // [rsp+6EC7h] [rbp+6E47h] BYREF
  _BYTE *v740; // [rsp+6EC8h] [rbp+6E48h]
  unsigned __int64 v741; // [rsp+6ED0h] [rbp+6E50h]
  _QWORD *v742; // [rsp+6ED8h] [rbp+6E58h]
  __int64 v743; // [rsp+6EE0h] [rbp+6E60h]
  _QWORD *v744; // [rsp+6EE8h] [rbp+6E68h]
  __int64 v745; // [rsp+6EF0h] [rbp+6E70h]
  __int64 v746; // [rsp+6EF8h] [rbp+6E78h]
  __int64 v747; // [rsp+6F00h] [rbp+6E80h]
  const __m128i *v748; // [rsp+6F08h] [rbp+6E88h]
  __int64 v749; // [rsp+6F10h] [rbp+6E90h]
  __int64 *v750; // [rsp+6F18h] [rbp+6E98h]
  char *v751; // [rsp+6F20h] [rbp+6EA0h]
  __m128i *v752; // [rsp+6F28h] [rbp+6EA8h]
  __int64 v753; // [rsp+6F30h] [rbp+6EB0h]
  const __m128i *v754; // [rsp+6F38h] [rbp+6EB8h]
  __int64 v755; // [rsp+6F40h] [rbp+6EC0h]
  const __m128i *v756; // [rsp+6F48h] [rbp+6EC8h]
  unsigned __int64 v757; // [rsp+6F50h] [rbp+6ED0h]
  __int64 *v758; // [rsp+6F58h] [rbp+6ED8h]
  __m128i *v759; // [rsp+6F60h] [rbp+6EE0h]
  const __m128i *v760; // [rsp+6F68h] [rbp+6EE8h]
  volatile signed __int64 **v761; // [rsp+6F70h] [rbp+6EF0h]
  const __m128i *v762; // [rsp+6F78h] [rbp+6EF8h]
  _BYTE *v763; // [rsp+6F80h] [rbp+6F00h]
  __m128i *v764; // [rsp+6F88h] [rbp+6F08h]
  _BYTE *v765; // [rsp+6F90h] [rbp+6F10h]
  __m128i *v766; // [rsp+6F98h] [rbp+6F18h]
  __int64 v767; // [rsp+6FA0h] [rbp+6F20h]
  __int64 v768; // [rsp+6FA8h] [rbp+6F28h]

  v768 = -2;
  v8 = a3;
  v9 = a2;
  v10 = (__m128i *)a1;
  v11 = *(unsigned __int8 *)(a2 + 476);
  v767 = a2;
  switch ( v11 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 472) = 0;
      *(_QWORD *)(a2 + 465) = 0;
      *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 456);
      v12 = sub_140DC0240();
      v13 = v767;
      *(_BYTE *)(v767 + 464) = v12;
      sub_140DC0A80(v348, *(_QWORD *)(v13 + 272), v12);
      v5 = *(_QWORD *)&v348[8];
      v14 = *(const __m128i **)&v348[24];
      v6 = *(__m128i **)&v348[16];
      if ( v348[0] )
      {
        v15 = -1;
        v16 = *(_BYTE **)&v348[8];
        v17 = *(_BYTE **)&v348[16];
        v18 = v767;
        goto LABEL_196;
      }
      v759 = v10;
      *(_BYTE *)(v767 + 475) = 0;
      v365.m128i_i64[0] = v5;
      v365.m128i_i64[1] = (__int64)v6;
      v366.m128i_i64[0] = (__int64)v14;
      v710 = v6;
      v709 = v5;
      sub_14119DFC0(v348, &v365);
      v766 = v6;
      v6 = *(__m128i **)v348;
      if ( *(_QWORD *)v348 == -1 )
      {
        v764 = (__m128i *)v5;
        sub_1418F44E0(&v365, (const __m128i *)&v348[8], 0x88u);
        v342.m128i_i64[0] = (__int64)&v365;
        v342.m128i_i64[1] = (__int64)sub_14119C700;
        sub_1416ABFD0(&v357, &unk_1419F13D8, &v342);
        v710 = v766;
        v709 = (__int64)v764;
        sub_140409740(&v365);
        v763 = (_BYTE *)v357.m128i_i64[1];
        v765 = (_BYTE *)v357.m128i_i64[0];
        v14 = (const __m128i *)v358;
        v15 = -1;
        v18 = v767;
        v10 = v759;
        goto LABEL_195;
      }
      v33 = *(_QWORD *)&v348[24];
      sub_1418F44E0(&v365, (const __m128i *)&v348[32], 0xC0u);
      v34 = _mm_loadu_si128((const __m128i *)&v348[8]);
      v9 = v767;
      *(_BYTE *)(v767 + 466) = 1;
      *(_QWORD *)v9 = v6;
      *(__m128i *)(v9 + 8) = v34;
      *(_QWORD *)(v9 + 24) = v33;
      sub_1418F44E0((__m128i *)(v9 + 32), &v365, 0xC0u);
      v7 = (__int64)v766;
      v10 = v759;
      if ( *(_BYTE *)(v9 + 464) == 2 )
        goto LABEL_18;
      v86 = *(_QWORD *)(v9 + 272);
      v87 = *(_QWORD *)(v86 + 32);
      v88 = *(_QWORD *)(v86 + 40);
      v735 = (__int64)v766;
      v734 = v5;
      v89.m128i_i64[0] = sub_140E91160(v87, v88);
      v340 = v89;
      if ( !v89.m128i_i64[1] )
      {
        v735 = v7;
        v734 = v5;
        sub_14047E490(v348);
        v763 = *(_BYTE **)&v348[8];
        v765 = *(_BYTE **)v348;
        v14 = *(const __m128i **)&v348[16];
        v18 = v767;
        goto LABEL_193;
      }
      v342.m128i_i64[0] = (__int64)&v340;
      v342.m128i_i64[1] = (__int64)sub_140186EE0;
      v735 = v7;
      v734 = v5;
      sub_1416ABFD0(&v357, &unk_1419F1960, &v342);
      v764 = (__m128i *)v5;
      v761 = (volatile signed __int64 **)v357.m128i_i64[1];
      v762 = (const __m128i *)v357.m128i_i64[0];
      if ( !(_QWORD)v358 )
        goto LABEL_76;
      v90 = 0;
      break;
    case 1LL:
      sub_1419393E0(&off_1419F19D8);
    case 2LL:
      sub_141939400(&off_1419F19D8);
    case 3LL:
      v763 = (_BYTE *)(a2 + 11160);
      v29 = *(unsigned __int8 *)(a2 + 11160);
      v762 = (const __m128i *)(a2 + 480);
      switch ( v29 )
      {
        case 0LL:
          goto LABEL_19;
        case 1LL:
          v657 = v762;
          sub_1419393E0(&off_1419F0FB0);
        case 2LL:
          JUMPOUT(0x14046FFF7LL);
        case 3LL:
          v765 = (_BYTE *)(a2 + 11153);
          v31 = *(unsigned __int8 *)(a2 + 11153);
          v760 = (const __m128i *)(a2 + 704);
          switch ( v31 )
          {
            case 0LL:
              v759 = (__m128i *)a1;
              v32 = *(_BYTE *)(a2 + 11152);
              goto LABEL_20;
            case 1LL:
              v509 = v763;
              v508 = v762;
              v507 = v760;
              sub_1419393E0(&off_1419F0FC8);
            case 2LL:
              v509 = v763;
              v508 = v762;
              v507 = v760;
              sub_141939400(&off_1419F0FC8);
            case 3LL:
              v680 = (char *)(a2 + 1899);
              v85 = (volatile signed __int64 **)(a2 + 1224);
              switch ( *(_BYTE *)(a2 + 1899) )
              {
                case 0:
                  v759 = (__m128i *)a1;
                  v37 = a3;
                  v32 = *(_BYTE *)(a2 + 1898);
                  v45 = *(_QWORD *)(a2 + 1224);
                  v41 = (volatile signed __int64 **)(a2 + 1224);
                  break;
                case 1:
                  v514 = v763;
                  v513 = v762;
                  v512 = v765;
                  v511 = v760;
                  v510 = a2 + 1224;
                  sub_1419393E0(&off_1419F1B00);
                case 2:
                  v514 = v763;
                  v513 = v762;
                  v512 = v765;
                  v511 = v760;
                  v510 = a2 + 1224;
                  sub_141939400(&off_1419F1B00);
                case 3:
                  v751 = (char *)(a2 + 1944);
                  v76 = (const __m128i *)(a2 + 1920);
                  switch ( *(_BYTE *)(a2 + 1944) )
                  {
                    case 0:
                      v761 = (volatile signed __int64 **)(a2 + 1224);
                      v77 = (char *)(a2 + 1944);
                      goto LABEL_49;
                    case 1:
                      v585 = v763;
                      v584 = v762;
                      v583 = v765;
                      v582 = v760;
                      v581 = a2 + 1224;
                      v580 = a2 + 1920;
                      sub_1419393E0(&off_1419F0B40);
                    case 2:
                      v585 = v763;
                      v584 = v762;
                      v583 = v765;
                      v582 = v760;
                      v581 = a2 + 1224;
                      v580 = a2 + 1920;
                      sub_141939400(&off_1419F0B40);
                    case 3:
                      v756 = (const __m128i *)(a2 + 1920);
                      v761 = (volatile signed __int64 **)(a2 + 1224);
                      v77 = (char *)(a2 + 1944);
                      goto LABEL_52;
                    case 4:
                      v116 = (__int8 *)(a2 + 2104);
                      v117 = *(unsigned __int8 *)(v9 + 2104);
                      v754 = (const __m128i *)(v9 + 2000);
                      switch ( v117 )
                      {
                        case 0LL:
                          v118 = v754;
                          break;
                        case 1LL:
                          v606 = v763;
                          v605 = v762;
                          v604 = v765;
                          v603 = v760;
                          v602 = v9 + 1224;
                          v601 = v9 + 1920;
                          JUMPOUT(0x1404704D3LL);
                        case 2LL:
                          v606 = v763;
                          v605 = v762;
                          v604 = v765;
                          v603 = v760;
                          v602 = v9 + 1224;
                          v601 = v9 + 1920;
                          v600 = v754;
                          sub_141939400(&off_1419F15C8);
                        case 3LL:
                          v757 = v9 + 2104;
                          v752 = (__m128i *)(v9 + 2096);
                          v128 = *(unsigned __int8 *)(v9 + 2096);
                          v753 = v9 + 2032;
                          switch ( v128 )
                          {
                            case 0LL:
                              v129 = *(_QWORD *)(v9 + 2032);
                              v130 = *(const __m128i **)(v9 + 2040);
                              v131 = v752;
                              v132 = v753;
                              goto LABEL_294;
                            case 1LL:
                              v635 = v763;
                              v634 = v762;
                              v633 = v765;
                              v632 = v760;
                              v631 = v9 + 1224;
                              v630 = v9 + 1920;
                              v629 = v757;
                              v628 = v754;
                              v627 = v753;
                              sub_1419393E0(&off_1419F15B0);
                            case 2LL:
                              v635 = v763;
                              v634 = v762;
                              v633 = v765;
                              v632 = v760;
                              v631 = v9 + 1224;
                              v630 = v9 + 1920;
                              v629 = v757;
                              v628 = v754;
                              v627 = v753;
                              sub_141939400(&off_1419F15B0);
                            case 3LL:
                              v756 = (const __m128i *)(v9 + 1920);
                              v761 = (volatile signed __int64 **)(v9 + 1224);
                              v157 = *(_QWORD *)(v9 + 2088);
                              goto LABEL_296;
                          }
                      }
                      goto LABEL_292;
                  }
                case 4:
                  v97 = (char *)(a2 + 2600);
                  v98 = *(unsigned __int8 *)(a2 + 2600);
                  v99 = (const __m128i *)(a2 + 1904);
                  v761 = (volatile signed __int64 **)(a2 + 1224);
                  switch ( v98 )
                  {
                    case 0LL:
                      v736 = (char *)(a2 + 2600);
                      v759 = (__m128i *)(a2 + 1904);
                      v757 = *(_QWORD *)(a2 + 1952);
                      goto LABEL_337;
                    case 1LL:
                      v520 = v763;
                      v519 = v762;
                      v518 = v765;
                      v517 = v760;
                      v516 = a2 + 1224;
                      v515 = a2 + 1904;
                      sub_1419393E0(&off_1419F0F20);
                    case 2LL:
                      v520 = v763;
                      v519 = v762;
                      v518 = v765;
                      v517 = v760;
                      v516 = a2 + 1224;
                      v515 = a2 + 1904;
                      sub_141939400(&off_1419F0F20);
                    case 3LL:
                      v759 = (__m128i *)(a2 + 1904);
                      goto LABEL_101;
                    case 4LL:
                      v758 = (__int64 *)(a2 + 2649);
                      v123 = a2 + 2608;
                      if ( *(_BYTE *)(a2 + 2649) )
                      {
                        if ( *(_BYTE *)(a2 + 2649) == 1 )
                        {
                          v563 = v763;
                          v562 = v762;
                          v561 = v765;
                          v560 = v760;
                          v559 = v761;
                          v558 = a2 + 1904;
                          v557 = v758;
                          v556 = a2 + 2608;
                          sub_1419393E0(&off_1419F1098);
                        }
                        v563 = v763;
                        v562 = v762;
                        v561 = v765;
                        v560 = v760;
                        v559 = v761;
                        v558 = a2 + 1904;
                        v557 = v758;
                        v556 = a2 + 2608;
                        sub_141939400(&off_1419F1098);
                      }
                      v124 = *(unsigned __int8 *)(a2 + 2648);
                      goto LABEL_105;
                    case 5LL:
                      v759 = (__m128i *)(a2 + 1904);
                      goto LABEL_98;
                    case 6LL:
                      v736 = (char *)(a2 + 2600);
                      v757 = a2 + 11144;
                      v119 = *(unsigned __int8 *)(a2 + 11144);
                      v120 = (const __m128i *)(a2 + 2608);
                      v759 = (__m128i *)(a2 + 1904);
                      switch ( v119 )
                      {
                        case 0LL:
                          goto LABEL_115;
                        case 1LL:
                          v527 = v763;
                          v526 = v762;
                          v525 = v765;
                          v524 = v760;
                          v523 = a2 + 1224;
                          v522 = a2 + 1904;
                          v521 = a2 + 2608;
                          sub_1419393E0(&off_1419F08B8);
                        case 2LL:
                          v527 = v763;
                          v526 = v762;
                          v525 = v765;
                          v524 = v760;
                          v523 = a2 + 1224;
                          JUMPOUT(0x140470532LL);
                        case 3LL:
                          v740 = (_BYTE *)(a2 + 11136);
                          v142 = (const __m128i *)(a2 + 4008);
                          switch ( *(_BYTE *)(a2 + 11136) )
                          {
                            case 0:
                              goto LABEL_116;
                            case 1:
                              v536 = v763;
                              v535 = v762;
                              v534 = v765;
                              v533 = v760;
                              v532 = a2 + 1224;
                              v531 = a2 + 1904;
                              v530 = v757;
                              v529 = a2 + 2608;
                              v528 = a2 + 4008;
                              sub_1419393E0(&off_1419F1058);
                            case 2:
                              v536 = v763;
                              v535 = v762;
                              v534 = v765;
                              v533 = v760;
                              v532 = a2 + 1224;
                              v531 = a2 + 1904;
                              v530 = v757;
                              v529 = a2 + 2608;
                              v528 = a2 + 4008;
                              sub_141939400(&off_1419F1058);
                            case 3:
                              v732 = (char *)(a2 + 6808);
                              v143 = (const __m128i *)(a2 + 5408);
                              switch ( *(_BYTE *)(a2 + 6808) )
                              {
                                case 0:
                                  goto LABEL_117;
                                case 1:
                                  v547 = v763;
                                  v546 = v762;
                                  v545 = v765;
                                  v544 = v760;
                                  v543 = v761;
                                  v542 = v759;
                                  v541 = v757;
                                  v540 = a2 + 2608;
                                  v539 = v740;
                                  v538 = a2 + 4008;
                                  v537 = a2 + 5408;
                                  sub_1419393E0(&off_1419F1070);
                                case 2:
                                  v547 = v763;
                                  v546 = v762;
                                  v545 = v765;
                                  v544 = v760;
                                  v543 = v761;
                                  v542 = v759;
                                  v541 = v757;
                                  v540 = a2 + 2608;
                                  v539 = v740;
                                  v538 = a2 + 4008;
                                  v537 = a2 + 5408;
                                  sub_141939400(&off_1419F1070);
                                case 3:
                                  v733 = (const __m128i *)(a2 + 5408);
                                  v738 = (const __m128i *)(a2 + 4008);
                                  v748 = (const __m128i *)(a2 + 2608);
                                  goto LABEL_118;
                                case 4:
                                  v733 = (const __m128i *)(a2 + 5408);
                                  v738 = (const __m128i *)(a2 + 4008);
                                  v748 = (const __m128i *)(a2 + 2608);
                                  v97 = (char *)(a2 + 2600);
                                  goto LABEL_132;
                              }
                          }
                          goto LABEL_116;
                      }
                  }
              }
              goto LABEL_22;
          }
      }
      goto LABEL_19;
    case 4LL:
      v19 = a1;
      v20 = (_BYTE *)(a2 + 488);
      v21 = *(volatile signed __int64 ***)(a2 + 488);
      if ( v21 != (volatile signed __int64 **)-1LL )
      {
        v763 = *(_BYTE **)(a2 + 488);
        v22 = v8;
        goto LABEL_216;
      }
      v52 = *(const __m128i **)(a2 + 528);
      goto LABEL_221;
    case 5LL:
      goto LABEL_6;
  }
  do
  {
    v91 = *(_BYTE *)(v357.m128i_i64[1] + v90);
    if ( v91 > 0x1Fu )
    {
      if ( v91 == 127 )
        goto LABEL_67;
    }
    else if ( v91 != 9 )
    {
LABEL_67:
      v357.m128i_i64[0] = (__int64)&v739;
      v357.m128i_i64[1] = (__int64)sub_14164E700;
      sub_1416ABFD0(&v365, &unk_1419F1414, &v357);
      v763 = (_BYTE *)v365.m128i_i64[1];
      v765 = (_BYTE *)v365.m128i_i64[0];
      v14 = (const __m128i *)v366.m128i_i64[0];
      v18 = v767;
      v5 = (__int64)v764;
      v7 = (__int64)v766;
      if ( v762 )
      {
        v103 = (const __m128i *)v366.m128i_i64[0];
        sub_140001660(v761, v762, 1);
        v14 = v103;
      }
      v10 = v759;
LABEL_193:
      v15 = -1;
      if ( *(_BYTE *)(v18 + 466) )
      {
        v173 = v10;
        v174 = v14;
        v710 = (__m128i *)v7;
        v709 = v5;
        sub_140407F80(v18);
        v18 = v767;
        v14 = v174;
        v10 = v173;
      }
LABEL_195:
      *(_BYTE *)(v18 + 466) = 0;
      v16 = v765;
      v17 = v763;
LABEL_196:
      *(_BYTE *)(v18 + 475) = 0;
      v10->m128i_i64[0] = v15;
      v10->m128i_i64[1] = (__int64)v16;
      v10[1].m128i_i64[0] = (__int64)v17;
      v10[1].m128i_i64[1] = (__int64)v14;
      v175 = v433;
      v10[2] = _mm_load_si128(&v432);
      v10[3] = v175;
      v10[4].m128i_i64[0] = v434;
      v10[4].m128i_i64[1] = v5;
      v10[5].m128i_i16[0] = 0;
      v10[5].m128i_i64[1] = v7;
      v10[6].m128i_i8[0] = (char)v6;
      result = 1;
      goto LABEL_197;
    }
    ++v90;
  }
  while ( (_QWORD)v358 != v90 );
LABEL_76:
  sub_141653430(v348);
  v348[32] = 0;
  v101 = _mm_loadu_si128((const __m128i *)v348);
  v366 = *(__m128i *)&v348[16];
  v365 = v101;
  *(_QWORD *)&v367 = *(_QWORD *)&v348[32];
  v763 = (_BYTE *)v101.m128i_i64[1];
  v102 = *(_QWORD *)&v348[16];
  v105 = v366.m128i_i64[1];
  v331.m128i_i32[0] = *(_DWORD *)((char *)&v367 + 1);
  *(__int32 *)((char *)v331.m128i_i32 + 3) = DWORD1(v367);
  v106 = v767;
  if ( v762 )
  {
    v107 = *(_QWORD *)&v348[16];
    sub_140001660(v761, v762, 1);
    v102 = v107;
    v10 = v759;
  }
  *(_QWORD *)v348 = v101.m128i_i64[0];
  *(_QWORD *)&v348[8] = v763;
  *(_QWORD *)&v348[16] = v102;
  *(_QWORD *)&v348[24] = v105;
  v348[32] = 0;
  *(_DWORD *)&v348[33] = v331.m128i_i32[0];
  *(_DWORD *)&v348[36] = *(__int32 *)((char *)v331.m128i_i32 + 3);
  v358 = xmmword_1419F1980;
  v357 = _mm_loadu_si128((const __m128i *)&xmmword_1419F1970);
  v7 = (__int64)v766;
  v735 = (__int64)v766;
  v734 = (__int64)v764;
  v108 = v106;
  v5 = (__int64)v764;
  sub_140CA88C0(&v365, v108, &v357, v348);
  if ( (_BYTE)v367 != 2 )
  {
    v109 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v365.m128i_i64[0] + 32);
    v735 = v7;
    v734 = v5;
    v109(&v366.m128i_u64[1], v365.m128i_i64[1], v366.m128i_i64[0]);
  }
  v358 = xmmword_1419F19A0;
  v357 = _mm_loadu_si128((const __m128i *)&xmmword_1419F1990);
  *(_QWORD *)v348 = off_1419F2198;
  *(_QWORD *)&v348[8] = aAimamiTypemami;
  *(_OWORD *)&v348[16] = 0xFu;
  v348[32] = 0;
  v735 = v7;
  v734 = v5;
  sub_140CA88C0(&v365, v767, &v357, v348);
  if ( (_BYTE)v367 != 2 )
  {
    v110 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v365.m128i_i64[0] + 32);
    v735 = v7;
    v734 = v5;
    v110(&v366.m128i_u64[1], v365.m128i_i64[1], v366.m128i_i64[0]);
  }
  v9 = v767;
LABEL_18:
  *(_BYTE *)(v9 + 466) = 0;
  v762 = (const __m128i *)(v9 + 480);
  sub_1418F44E0((__m128i *)(v9 + 480), (const __m128i *)v9, 0xE0u);
  v763 = (_BYTE *)(v9 + 11160);
  *(_BYTE *)(v9 + 11160) = 0;
LABEL_19:
  v759 = v10;
  v760 = (const __m128i *)(v9 + 704);
  sub_1418F44E0((__m128i *)(v9 + 704), v762, 0xE0u);
  *(_QWORD *)(v9 + 928) = 2;
  *(_WORD *)(v9 + 11152) = 0;
  v765 = (_BYTE *)(v9 + 11153);
  v32 = 0;
LABEL_20:
  v766 = (__m128i *)v7;
  v35 = *(_QWORD *)(v9 + 704);
  v36 = (const __m128i *)(v9 + 712);
  if ( v35 == -1 )
  {
    v741 = v8;
    v764 = (__m128i *)v5;
    sub_1418F44E0((__m128i *)(v9 + 1008), v36, 0x88u);
    *(_QWORD *)(v9 + 1000) = -1;
    v47 = *(_QWORD *)(v9 + 1008);
    v53 = (_QWORD *)v9;
    v54 = *(_QWORD *)(v9 + 1016);
    v743 = v53[128];
    v755 = v53[129];
    v749 = v53[130];
    v744 = (_QWORD *)v53[131];
    v742 = (_QWORD *)v53[132];
    v750 = (__int64 *)v53[133];
    v758 = (__int64 *)v53[134];
    v752 = (__m128i *)v53[135];
    v754 = (const __m128i *)v53[136];
    v756 = (const __m128i *)v53[137];
    v745 = v53[138];
    v747 = v53[139];
    v753 = v53[140];
    v746 = v53[141];
    v751 = (char *)v53[142];
    v55 = 2;
    v10 = v759;
    goto LABEL_207;
  }
  v37 = v8;
  *(_QWORD *)(v9 + 1000) = v35;
  sub_1418F44E0((__m128i *)(v9 + 1008), v36, 0x88u);
  v38 = *(_OWORD *)(v9 + 864);
  v39 = *(_OWORD *)(v9 + 880);
  v40 = *(_OWORD *)(v9 + 896);
  *(_OWORD *)(v9 + 1144) = *(_OWORD *)(v9 + 848);
  *(_OWORD *)(v9 + 1160) = v38;
  *(_OWORD *)(v9 + 1176) = v39;
  *(_OWORD *)(v9 + 1192) = v40;
  *(_OWORD *)(v9 + 1208) = *(_OWORD *)(v9 + 912);
  sub_1418F44E0((__m128i *)&v348[8], (const __m128i *)(v9 + 1000), 0xE0u);
  sub_1418F44E0(v327, (const __m128i *)v348, 0xE8u);
  v41 = (volatile signed __int64 **)(v9 + 1224);
  *(_QWORD *)(v9 + 1224) = 0;
  sub_1418F44E0((__m128i *)(v9 + 1232), v327, 0xE8u);
  v42 = *(_OWORD *)(v9 + 944);
  v43 = *(_OWORD *)(v9 + 960);
  v44 = *(_OWORD *)(v9 + 976);
  *(_OWORD *)(v9 + 1464) = *(_OWORD *)(v9 + 928);
  *(_OWORD *)(v9 + 1480) = v42;
  *(_OWORD *)(v9 + 1496) = v43;
  *(_OWORD *)(v9 + 1512) = v44;
  *(_QWORD *)(v9 + 1528) = *(_QWORD *)(v9 + 992);
  *(_BYTE *)(v9 + 1898) = v32;
  v680 = (char *)(v9 + 1899);
  *(_BYTE *)(v9 + 1899) = 0;
  v45 = 0;
LABEL_22:
  *(_BYTE *)(v9 + 1902) = 1;
  sub_1418F44E0((__m128i *)(v9 + 1536), (const __m128i *)(v9 + 1240), 0xE0u);
  *(_OWORD *)(v9 + 1760) = *(_OWORD *)(v9 + 1464);
  *(_OWORD *)(v9 + 1776) = *(_OWORD *)(v9 + 1480);
  *(_OWORD *)(v9 + 1792) = *(_OWORD *)(v9 + 1496);
  *(__m128i *)(v9 + 1808) = _mm_loadu_si128((const __m128i *)(v9 + 1512));
  *(_QWORD *)(v9 + 1824) = *(_QWORD *)(v9 + 1528);
  *(_BYTE *)(v9 + 1900) = v32;
  *(_BYTE *)(v9 + 1901) = 1;
  v46 = *(_QWORD *)(v9 + 1232);
  *(_QWORD *)(v9 + 1904) = v45;
  *(_QWORD *)(v9 + 1912) = v46;
  v656 = v766;
  v655 = v5;
  v654 = v763;
  v653 = v762;
  v652 = v765;
  v651 = v760;
  v761 = v41;
  v650 = v41;
  sub_140477AA0(v348, v9 + 1536);
  v47 = *(_QWORD *)v348;
  v48 = *(_OWORD *)&v348[16];
  v741 = v37;
  v764 = (__m128i *)v5;
  if ( *(_QWORD *)v348 != -1 )
  {
    v755 = *(_QWORD *)&v348[24];
    v743 = *(_QWORD *)&v348[16];
    v744 = *(_QWORD **)&v348[40];
    v749 = *(_QWORD *)&v348[32];
    v750 = *(__int64 **)&v348[56];
    v742 = *(_QWORD **)&v348[48];
    v752 = *(__m128i **)&v348[72];
    v758 = *(__int64 **)&v348[64];
    v756 = *(const __m128i **)&v348[88];
    v754 = *(const __m128i **)&v348[80];
    v745 = *(_QWORD *)&v348[96];
    v753 = v349.m128i_i64[1];
    v747 = v349.m128i_i64[0];
    v746 = v350.m128i_i64[0];
    v49 = *(_WORD *)&v348[8];
    v50 = *(_QWORD *)&v348[8] >> 16;
    v751 = (char *)v350.m128i_i64[1];
    v51 = (_QWORD *)v767;
    v10 = v759;
LABEL_201:
    v177 = v764;
    if ( v51[238] )
    {
      v178 = *(volatile signed __int64 **)(v767 + 1912);
      if ( v178 )
      {
        if ( !_InterlockedDecrement64(v178) )
        {
          v599 = v766;
          v598 = v177;
          v597 = v763;
          v596 = v762;
          v595 = v765;
          v594 = v760;
          v593 = v761;
          sub_1412D9AC0(v767 + 1912);
        }
      }
    }
    v179 = v767;
    *(_BYTE *)(v767 + 1901) = 0;
    v592 = v766;
    v591 = v177;
    v590 = v763;
    v589 = v762;
    v588 = v765;
    v587 = v760;
    v180 = v761;
    v586 = v761;
    sub_140407F80(v179 + 1536);
    v55 = 2;
    v181 = (_BYTE *)v767;
LABEL_206:
    v181[1902] = 0;
    sub_1418F44E0(v324, v323, 0x480u);
    v417 = _mm_load_si128(&v407);
    v418 = v408;
    v419 = v409;
    v420 = v410;
    v421 = v411;
    sub_1418F44E0(v336, v335, 0x8Du);
    v181[1899] = 1;
    v492 = v766;
    v491 = v764;
    v490 = v763;
    v489 = v762;
    v488 = v765;
    v487 = v760;
    sub_140406F20(v180);
    v54 = (v50 << 16) | v49;
LABEL_207:
    sub_1418F44E0(v320, v324, 0x480u);
    v427 = v417;
    v428 = v418;
    v429 = v419;
    v430 = v420;
    v431 = v421;
    v6 = v330;
    sub_1418F44E0(v330, v336, 0x8Du);
    *v765 = 1;
    *v763 = 1;
    sub_1418F44E0(v325, v320, 0x480u);
    v422 = _mm_load_si128(&v427);
    v423 = v428;
    v424 = v429;
    v425 = v430;
    v426 = v431;
    sub_1418F44E0(v344, v330, 0x8Du);
    if ( (_DWORD)v55 == 2 )
    {
      *(_QWORD *)v348 = v47;
      *(_QWORD *)&v348[8] = v54;
      *(_QWORD *)&v348[16] = v743;
      *(_QWORD *)&v348[24] = v755;
      *(_QWORD *)&v348[32] = v749;
      *(_QWORD *)&v348[40] = v744;
      *(_QWORD *)&v348[48] = v742;
      *(_QWORD *)&v348[56] = v750;
      *(_QWORD *)&v348[64] = v758;
      *(_QWORD *)&v348[72] = v752;
      *(_QWORD *)&v348[80] = v754;
      *(_QWORD *)&v348[88] = v756;
      *(_QWORD *)&v348[96] = v745;
      v349.m128i_i64[0] = v747;
      v349.m128i_i64[1] = v753;
      v350.m128i_i64[0] = v746;
      v350.m128i_i64[1] = (__int64)v751;
      v357.m128i_i64[0] = (__int64)v348;
      v357.m128i_i64[1] = (__int64)sub_14119C700;
      sub_1416ABFD0(&v365, &unk_1419F13F5, &v357);
      v7 = (__int64)v766;
      v735 = (__int64)v766;
      v5 = (__int64)v764;
      v734 = (__int64)v764;
      sub_140409740(v348);
      v763 = (_BYTE *)v365.m128i_i64[1];
      v765 = (_BYTE *)v365.m128i_i64[0];
      v14 = (const __m128i *)v366.m128i_i64[0];
      v18 = v767;
      goto LABEL_193;
    }
    v759 = v10;
    sub_1418F44E0((__m128i *)&v379[0].m128i_u64[1], v325, 0x480u);
    v384 = v426;
    v383[0] = _mm_load_si128(&v422);
    v383[1] = v423;
    v383[2] = v424;
    v383[3] = v425;
    v365.m128i_i64[0] = v55;
    v365.m128i_i64[1] = v47;
    v366.m128i_i64[0] = v54;
    v366.m128i_i64[1] = v743;
    *(_QWORD *)&v367 = v755;
    *((_QWORD *)&v367 + 1) = v749;
    *(_QWORD *)&v368 = v744;
    *((_QWORD *)&v368 + 1) = v742;
    v369 = v750;
    v370 = v758;
    v371 = v752;
    v372 = v754;
    v373 = v756;
    v374 = v745;
    v375 = v747;
    v376 = v753;
    v377 = v746;
    v378 = (__int64)v751;
    v379[0].m128i_i64[0] = v711;
    v385 = 0;
    v386 = 1;
    v388 = v344[0].m128i_i8[4];
    v387 = v344[0].m128i_i32[0];
    v182 = v767;
    sub_1418F44E0((__m128i *)(v767 + 280), (const __m128i *)&v344[0].m128i_u8[5], 0x88u);
    *(_BYTE *)(v182 + 474) = 0;
    sub_1418F44E0((__m128i *)&v348[24], &v365, 0x568u);
    *(_QWORD *)v348 = 1;
    *(_QWORD *)&v348[8] = 1;
    *(_QWORD *)&v348[16] = 1;
    v356 = 0;
    nullsub_1(v183);
    v184 = (__m128i *)sub_140001650(1416, 8);
    if ( !v184 )
      sub_141938D11(8, 1416);
    v185 = (volatile signed __int64 *)v184;
    v22 = v741;
    sub_1418F44E0(v184, (const __m128i *)v348, 0x588u);
    v187 = _InterlockedIncrement64(v185);
    if ( (v187 < 0) ^ v188 | (v187 == 0) )
      goto LABEL_198;
    *(_BYTE *)(v182 + 473) = 1;
    *(_QWORD *)(v182 + 224) = -1;
    *(_QWORD *)(v182 + 264) = v185;
    *(_BYTE *)(v182 + 472) = 1;
    v329[0].m128i_i64[0] = (__int64)v185;
    v189 = v766;
    v502 = v766;
    v190 = v764;
    v501 = v764;
    sub_1414FE5D0(v348, 128, v186);
    *(_QWORD *)&v348[40] = 128;
    v502 = v189;
    v501 = v190;
    v191 = sub_1408F03C0(v348);
    v192 = v767;
    *(_BYTE *)(v767 + 471) = 1;
    v331.m128i_i64[0] = v191;
    *(_BYTE *)(v192 + 470) = 1;
    *(_QWORD *)(v192 + 416) = v193;
    *(_QWORD *)v348 = 1;
    *(_QWORD *)&v348[8] = 1;
    *(_QWORD *)&v348[48] = 0;
    *(_QWORD *)&v348[56] = -2;
    nullsub_1(v194);
    v195 = sub_140001650(80, 8);
    if ( !v195 )
      sub_141938D11(8, 80);
    v196 = v195;
    *(_OWORD *)(v195 + 64) = *(_OWORD *)&v348[64];
    v197 = _mm_loadu_si128((const __m128i *)v348);
    v198 = *(_OWORD *)&v348[16];
    v199 = *(_OWORD *)&v348[32];
    *(_OWORD *)(v195 + 48) = *(_OWORD *)&v348[48];
    *(_OWORD *)(v195 + 32) = v199;
    *(_OWORD *)(v195 + 16) = v198;
    *(__m128i *)v195 = v197;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v195) <= 0 )
LABEL_198:
      BUG();
    *(_BYTE *)(v192 + 469) = 1;
    v340.m128i_i64[0] = v195;
    *(_BYTE *)(v192 + 465) = 1;
    *(_QWORD *)(v192 + 480) = v195;
    v200 = v766;
    v506 = v766;
    v201 = v764;
    v505 = v764;
    sub_140DC11A0(v192 + 424);
    v202 = v767;
    *(_BYTE *)(v767 + 468) = 1;
    v203 = *(_BYTE *)(v202 + 464);
    *(_WORD *)(v202 + 471) = 0;
    *(_BYTE *)(v202 + 469) = 0;
    v353 = v203;
    *(_QWORD *)&v348[16] = v185;
    *(_QWORD *)&v348[24] = v191;
    *(_QWORD *)v348 = 1;
    *(_QWORD *)&v348[8] = v196;
    v354 = 0;
    v659 = (__int64)v200;
    v658 = v201;
    v204 = sub_1409B7A40(v348, &off_1419F19F0);
    v6 = v201;
    v7 = (__int64)v200;
    v205 = v767;
    *(_QWORD *)(v767 + 448) = v204;
    v206 = *(unsigned __int8 *)(v205 + 464);
    v207 = *(_QWORD *)(v205 + 272);
    v208 = *(_QWORD *)(v205 + 432);
    v209 = *(_QWORD *)(v205 + 440);
    v504 = v200;
    v503 = v201;
    sub_140DBD530((unsigned int)v348, v207, v206, v208, v209);
    v4 = *(_QWORD *)&v348[8];
    v210 = *(_QWORD *)&v348[24];
    a1 = *(const __m128i **)&v348[16];
    v19 = v759;
    if ( v348[0] )
    {
      v762 = *(const __m128i **)&v348[24];
      v763 = *(_BYTE **)&v348[16];
      v66 = v767;
      v10 = v759;
      goto LABEL_240;
    }
    v9 = v767;
    v211 = v767 + 224;
    *(_BYTE *)(v767 + 467) = 0;
    v20 = (_BYTE *)(v9 + 488);
    v763 = (_BYTE *)0x8000000000000000LL;
    *(_QWORD *)(v9 + 488) = 0x8000000000000000uLL;
    *(_QWORD *)(v9 + 496) = v4;
    *(_QWORD *)(v9 + 504) = a1;
    *(_QWORD *)(v9 + 512) = v210;
    *(_QWORD *)(v9 + 528) = v211;
LABEL_216:
    v212 = *(const __m128i **)(v9 + 528);
    v765 = v20;
    v500 = v20;
    v499 = v6;
    v498 = v7;
    v760 = (const __m128i *)v4;
    v497 = v4;
    v761 = (volatile signed __int64 **)a1;
    v496 = a1;
    v213 = v212;
    sub_140944B60(v348, v212, v22);
    v214 = *(_QWORD *)v348;
    v18 = v767;
    if ( *(_QWORD *)v348 != -2 )
    {
      if ( *(_DWORD *)v348 == -1 )
      {
        v766 = (__m128i *)v7;
        v764 = v6;
        *(_QWORD *)(v767 + 488) = -1;
        v759 = (__m128i *)(v18 + 496);
        v762 = v213;
        if ( v213->m128i_i64[0] != -1 )
          sub_14040C610(v762);
        v52 = v762;
        v762->m128i_i64[0] = (__int64)v763;
        v215 = v759[1];
        *(const __m128i *)((char *)v52 + 8) = _mm_loadu_si128(v759);
        *(__m128i *)((char *)v52 + 24) = v215;
        v6 = v764;
        v7 = (__int64)v766;
        a1 = v760;
        v21 = v761;
        v20 = v765;
        v8 = v22;
LABEL_221:
        v765 = v20;
        v500 = v20;
        v499 = v6;
        v498 = v7;
        v760 = a1;
        v497 = (__int64)a1;
        v761 = v21;
        v496 = (const __m128i *)v21;
        sub_140944540(v348, v52, v8);
        v214 = *(_QWORD *)v348;
        v10 = (__m128i *)v19;
        if ( *(_QWORD *)v348 != -2 )
        {
          if ( *(_DWORD *)v348 == -1 )
          {
            v214 = -1;
            v18 = v767;
            goto LABEL_229;
          }
          v364 = v350;
          v363 = v349;
          v362 = *(_OWORD *)&v348[88];
          v361 = *(_OWORD *)&v348[72];
          v217 = _mm_loadu_si128((const __m128i *)&v348[8]);
          v360 = *(__m128i *)&v348[56];
          v359 = *(_OWORD *)&v348[40];
          v358 = *(_OWORD *)&v348[24];
          v357 = v217;
        }
        v18 = v767;
        if ( *(_DWORD *)v348 != -2 )
        {
LABEL_229:
          v396 = v364;
          v395 = v363;
          v394 = v362;
          v393 = v361;
          v218 = _mm_load_si128(&v357);
          v392 = v360;
          v391 = v359;
          v390 = v358;
          v389 = v218;
          v219 = *(_QWORD *)v765;
          if ( *(_QWORD *)v765 == -1 )
            goto LABEL_238;
          v220 = 5;
          if ( v219 < 0 )
            v220 = v219 ^ 0x8000000000000000uLL;
          if ( v220 >= 4 )
          {
            v221 = 488;
            if ( v220 == 4 )
            {
              v219 = *(_QWORD *)(v18 + 496);
              v221 = 496;
              if ( (unsigned __int64)v219 > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_238;
            }
          }
          else
          {
            v219 = *(_QWORD *)(v18 + 496);
            v221 = 496;
          }
          if ( v219 )
            sub_140001660(*(_QWORD *)(v18 + v221 + 8), v219, 1);
LABEL_238:
          v764 = v6;
          v766 = (__m128i *)v7;
          if ( (_DWORD)v214 != -1 )
          {
            *(_QWORD *)v348 = v214;
            *(__m128i *)&v348[8] = v389;
            *(_OWORD *)&v348[24] = v390;
            *(_OWORD *)&v348[40] = v391;
            *(__m128i *)&v348[56] = v392;
            *(_OWORD *)&v348[72] = v393;
            *(_OWORD *)&v348[88] = v394;
            v349 = v395;
            v350 = _mm_load_si128(&v396);
            sub_1414FDA60(v18 + 448);
            v342.m128i_i64[0] = (__int64)v348;
            v342.m128i_i64[1] = (__int64)sub_14119C700;
            sub_1416ABFD0(&v357, &unk_1419F1A08, &v342);
            v763 = (_BYTE *)v357.m128i_i64[1];
            v4 = v357.m128i_i64[0];
            v762 = (const __m128i *)v358;
            v731 = v761;
            v730 = v760;
            v7 = (__int64)v766;
            v729 = v766;
            v6 = v764;
            v728 = v764;
            sub_140409740(v348);
            v66 = v767;
LABEL_240:
            *(_BYTE *)(v66 + 467) = 0;
            v222 = *(_QWORD *)(v66 + 448);
            v659 = v7;
            v658 = v6;
            if ( (unsigned __int8)sub_1414FCFD0(v222) )
            {
              v659 = v7;
              v658 = v6;
              sub_1414FD8E0(v222);
            }
            v765 = (_BYTE *)v4;
            v766 = (__m128i *)v7;
            v764 = v6;
            v223 = v767;
            v224 = *(_QWORD *)(v767 + 424);
            if ( v224 )
              sub_140001660(*(_QWORD *)(v767 + 432), v224, 1);
            *(_BYTE *)(v223 + 468) = 0;
            if ( *(_BYTE *)(v223 + 465) )
            {
              v225 = *(_QWORD *)(v767 + 480);
              if ( v225 )
              {
                v761 = (volatile signed __int64 **)(v767 + 480);
                v226 = _InterlockedOr64((volatile signed __int64 *)(v225 + 48), 4u);
                if ( (v226 & 0xA) == 8 )
                {
                  LOBYTE(v6) = v226;
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v225 + 16) + 16LL))(*(_QWORD *)(v225 + 24));
                  v226 = (char)v6;
                }
                if ( (v226 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v225 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  LOBYTE(v6) = v226;
                  sub_1414FE850(v225 + 32);
                  v226 = (char)v6;
                }
                if ( (v226 & 2) != 0 )
                {
                  v227 = *(_QWORD *)(v225 + 56);
                  v228 = *(_QWORD *)(v225 + 64);
                  *(_QWORD *)(v225 + 56) = -2;
                  if ( (unsigned __int64)(v227 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v228, v227, 1);
                }
                if ( *v761 && !_InterlockedDecrement64(*v761) )
                {
                  v713 = v766;
                  v712 = v764;
                  sub_1409E3B60();
                }
              }
            }
            v229 = v767;
            *(_BYTE *)(v767 + 465) = 0;
            *(_BYTE *)(v229 + 469) = 0;
            v761 = (volatile signed __int64 **)(v229 + 416);
            sub_140947B30();
            if ( !_InterlockedDecrement64(*v761) )
            {
              v671 = v766;
              v670 = v764;
              sub_1409E44B0();
            }
            v230 = v767;
            *(_WORD *)(v767 + 470) = 0;
            *(_BYTE *)(v230 + 472) = 0;
            v761 = (volatile signed __int64 **)(v230 + 224);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v230 + 264)) )
              sub_1409E4200(v767 + 264);
            v231 = (__int64)*v761;
            v232 = v767;
            v5 = (__int64)v764;
            v7 = (__int64)v766;
            if ( *v761 == (volatile signed __int64 *)-1LL )
              goto LABEL_269;
            v233 = 5;
            if ( v231 < 0 )
              v233 = v231 ^ 0x8000000000000000uLL;
            if ( v233 >= 4 )
            {
              v234 = 224;
              if ( v233 == 4 )
              {
                v231 = *(_QWORD *)(v767 + 232);
                v234 = 232;
                if ( (unsigned __int64)v231 > 0xFFFFFFFFFFFFFFFDuLL )
                {
LABEL_269:
                  *(_BYTE *)(v232 + 473) = 0;
                  v495 = v7;
                  v494 = v5;
                  sub_140402000(v232 + 280);
                  v18 = v767;
                  *(_BYTE *)(v767 + 474) = 0;
                  v14 = v762;
                  goto LABEL_193;
                }
              }
            }
            else
            {
              v231 = *(_QWORD *)(v767 + 232);
              v234 = 232;
            }
            if ( v231 )
              sub_140001660(*(_QWORD *)(v767 + v234 + 8), v231, 1);
            goto LABEL_269;
          }
          LOBYTE(v6) = 2;
          if ( *(_BYTE *)(v18 + 464) == 2 )
          {
LABEL_271:
            *(_BYTE *)(v18 + 473) = 0;
            v762 = *(const __m128i **)(v18 + 224);
            v434 = *(_QWORD *)(v18 + 264);
            v433 = *(__m128i *)(v18 + 248);
            v432 = _mm_loadu_si128((const __m128i *)(v18 + 232));
            v7 = *(_QWORD *)(v18 + 416);
            v15 = *(_QWORD *)(v18 + 424);
            v765 = *(_BYTE **)(v18 + 432);
            v763 = *(_BYTE **)(v18 + 440);
            *(_BYTE *)(v18 + 470) = 0;
            v5 = *(_QWORD *)(v18 + 448);
            *(_WORD *)(v18 + 467) = 0;
            if ( *(_BYTE *)(v18 + 465) )
            {
              v235 = *(_QWORD *)(v767 + 480);
              if ( v235 )
              {
                v761 = (volatile signed __int64 **)(v767 + 480);
                v236 = _InterlockedOr64((volatile signed __int64 *)(v235 + 48), 4u);
                v760 = (const __m128i *)v236;
                if ( (v236 & 0xA) == 8 )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v235 + 16) + 16LL))(*(_QWORD *)(v235 + 24));
                  LOBYTE(v236) = (_BYTE)v760;
                }
                if ( (v236 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v235 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  sub_1414FE850(v235 + 32);
                  LOBYTE(v236) = (_BYTE)v760;
                }
                if ( (v236 & 2) != 0 )
                {
                  v237 = *(_QWORD *)(v235 + 56);
                  v238 = *(_QWORD *)(v235 + 64);
                  *(_QWORD *)(v235 + 56) = -2;
                  if ( (unsigned __int64)(v237 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v238, v237, 1);
                }
                if ( *v761 && !_InterlockedDecrement64(*v761) )
                {
                  v713 = v766;
                  v712 = v764;
                  sub_1409E3B60();
                }
              }
            }
            v239 = v767;
            *(_BYTE *)(v767 + 465) = 0;
            *(_DWORD *)(v239 + 469) = 0;
            *(_BYTE *)(v239 + 473) = 0;
            v495 = (__int64)v766;
            v494 = (__int64)v764;
            sub_140402000(v239 + 280);
            v18 = v767;
            *(_BYTE *)(v767 + 474) = 0;
            v14 = v762;
            goto LABEL_195;
          }
          *(_BYTE *)(v18 + 465) = 0;
          v240 = *(_QWORD *)(v18 + 480);
          v342.m128i_i64[0] = v240;
          *(_QWORD *)v348 = sub_141514620();
          *(_DWORD *)&v348[8] = v241;
          v242 = sub_141514600(v348, 15, 0);
          if ( v243 == -1 )
            sub_141513BD0(v348, 0, 0xFFFFFFFFLL);
          else
            sub_141513CC0((unsigned int)v348, v242, v243, 0, (__int64)&off_1419F1A30);
          v9 = v767;
          v244 = (_OWORD *)(v767 + 480);
          v363 = _mm_loadu_si128((const __m128i *)&v348[96]);
          v245 = *(_OWORD *)&v348[80];
          v362 = *(_OWORD *)&v348[80];
          v246 = *(_OWORD *)&v348[64];
          v361 = *(_OWORD *)&v348[64];
          v247 = *(_OWORD *)v348;
          v248 = *(_OWORD *)&v348[16];
          v249 = *(_OWORD *)&v348[32];
          v250 = _mm_loadu_si128((const __m128i *)&v348[48]);
          v360 = v250;
          v359 = *(_OWORD *)&v348[32];
          v358 = *(_OWORD *)&v348[16];
          v357 = *(__m128i *)v348;
          *(__m128i *)(v767 + 576) = v363;
          v244[5] = v245;
          v244[4] = v246;
          v244[3] = v250;
          v244[2] = v249;
          v244[1] = v248;
          *v244 = v247;
          *(_QWORD *)(v9 + 592) = v240;
LABEL_6:
          v765 = (_BYTE *)(v9 + 480);
          v23 = (unsigned __int8 *)sub_141512160(a1, a2, a3, a4);
          v24 = v23[72];
          if ( v23[72] )
          {
            if ( v24 == 2 )
            {
LABEL_8:
              v25 = (const __m128i *)(v767 + 592);
              sub_14092FA70(v348, v767 + 592, v8);
              v27 = *(_QWORD *)v348;
              if ( *(_QWORD *)v348 == -3 )
              {
                LOBYTE(v26) = v24 & 1 | ((_BYTE)v24 == 2);
                if ( (unsigned __int8)sub_14151B400(v26, v765, v8) )
                {
                  v10->m128i_i64[0] = -2;
                  result = 5;
                  v18 = v767;
                  goto LABEL_197;
                }
                v30 = v25->m128i_i64[0];
                if ( !v25->m128i_i64[0] )
                {
LABEL_37:
                  v731 = v761;
                  v61 = v760;
                  v730 = v760;
                  v729 = v766;
                  v728 = v764;
                  sub_14040CAE0(v765);
                  if ( v27 == -2 )
                  {
                    nullsub_1(v62);
                    v27 = 31;
                    v65 = sub_140001650(31, 1);
                    v18 = v767;
                    if ( !v65 )
                    {
                      v731 = v761;
                      v730 = v61;
                      v729 = v766;
                      v728 = v764;
                      sub_141938D2B(1, 31);
                    }
                    *(_OWORD *)(v65 + 15) = *(__int128 *)((char *)&xmmword_1419F1A48 + 15);
                    v763 = (_BYTE *)v65;
                    *(__m128i *)v65 = _mm_loadu_si128((const __m128i *)&xmmword_1419F1A48);
                    v64 = 31;
                  }
                  else
                  {
                    v18 = v767;
                    if ( v27 != -3 )
                    {
                      if ( v27 == -1 )
                      {
                        LOBYTE(v6) = *(_BYTE *)(v767 + 464);
                        goto LABEL_271;
                      }
LABEL_45:
                      v765 = (_BYTE *)v27;
                      sub_1414FDA60(v18 + 448);
                      v66 = v767;
                      v6 = v764;
                      v7 = (__int64)v766;
                      v4 = (__int64)v765;
                      goto LABEL_240;
                    }
                    nullsub_1(v62);
                    v27 = 22;
                    v63 = sub_140001650(22, 1);
                    if ( !v63 )
                    {
                      v731 = v761;
                      v730 = v61;
                      v729 = v766;
                      v728 = v764;
                      sub_141938D2B(1, 22);
                    }
                    *(__m128i *)v63 = _mm_loadu_si128(&xmmword_1419F1A67);
                    v763 = (_BYTE *)v63;
                    *(_QWORD *)(v63 + 14) = 0xB697E685B6E8A88AuLL;
                    v64 = 22;
                  }
                  v762 = (const __m128i *)v64;
                  goto LABEL_45;
                }
              }
              else
              {
                v763 = *(_BYTE **)&v348[8];
                v762 = *(const __m128i **)&v348[16];
                v30 = v25->m128i_i64[0];
                if ( !v25->m128i_i64[0] )
                  goto LABEL_37;
              }
              v759 = (__m128i *)v25;
              v56 = _InterlockedOr64((volatile signed __int64 *)(v30 + 48), 4u);
              if ( (v56 & 0xA) == 8 )
              {
                v57 = v56;
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v30 + 16) + 16LL))(*(_QWORD *)(v30 + 24));
                v56 = v57;
              }
              if ( (v56 & 3) == 1 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v30 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                v58 = v56;
                sub_1414FE850(v30 + 32);
                v56 = v58;
              }
              if ( (v56 & 2) != 0 )
              {
                v59 = *(_QWORD *)(v30 + 56);
                v60 = *(_QWORD *)(v30 + 64);
                *(_QWORD *)(v30 + 56) = -2;
                if ( (unsigned __int64)(v59 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                  sub_140001660(v60, v59, 1);
              }
              if ( v759->m128i_i64[0] && !_InterlockedDecrement64((volatile signed __int64 *)v759->m128i_i64[0]) )
                sub_1409E3B60();
              goto LABEL_37;
            }
            v172 = v23;
            sub_14169B890(v23, sub_140BE2F50);
            v23 = v172;
            v172[72] = 0;
          }
          LOBYTE(v24) = sub_141515930(v23[68], v23[69]);
          goto LABEL_8;
        }
LABEL_226:
        v10->m128i_i64[0] = -2;
        result = 4;
        goto LABEL_197;
      }
      v364 = v350;
      v363 = v349;
      v362 = *(_OWORD *)&v348[88];
      v361 = *(_OWORD *)&v348[72];
      v216 = _mm_loadu_si128((const __m128i *)&v348[8]);
      v360 = *(__m128i *)&v348[56];
      v359 = *(_OWORD *)&v348[40];
      v358 = *(_OWORD *)&v348[24];
      v357 = v216;
    }
    v8 = v22;
    v10 = (__m128i *)v19;
    if ( *(_DWORD *)v348 != -2 )
      goto LABEL_229;
    goto LABEL_226;
  }
  v67 = v767;
  *(_QWORD *)(v767 + 1832) = *(_QWORD *)&v348[8];
  *(_OWORD *)(v67 + 1840) = v48;
  v68 = (_BYTE *)(v67 + 1632);
  v708 = v766;
  v707 = v5;
  v706 = v763;
  v705 = v762;
  v704 = v765;
  v703 = v760;
  v702 = v761;
  v69 = sub_14164DB70(v67 + 1632);
  v10 = v759;
  v8 = v741;
  if ( v69 == 1 )
  {
    v71 = v70;
    *(_QWORD *)&v348[8] = 0x8000000000000003uLL;
    *(_QWORD *)v348 = 12;
    v72 = v766;
    goto LABEL_48;
  }
  v51 = (_QWORD *)v767;
  v72 = v766;
  if ( *v68 != 2 )
  {
LABEL_69:
    v755 = *(_QWORD *)&v348[24];
    v743 = *(_QWORD *)&v348[16];
    v744 = *(_QWORD **)&v348[40];
    v749 = *(_QWORD *)&v348[32];
    v750 = *(__int64 **)&v348[56];
    v742 = *(_QWORD **)&v348[48];
    v92 = *(__m128i **)&v348[72];
    v758 = *(__int64 **)&v348[64];
    v94 = *(const __m128i **)&v348[88];
    v93 = *(const __m128i **)&v348[80];
    v745 = *(_QWORD *)&v348[96];
    v95 = v349.m128i_i64[1];
    v747 = v349.m128i_i64[0];
    v96 = v350.m128i_i64[1];
    v746 = v350.m128i_i64[0];
    v47 = 12;
    v50 = 0x800000000000LL;
    v49 = 3;
    goto LABEL_199;
  }
  v111 = *(_QWORD *)(v767 + 1640);
  v112 = *(_WORD **)(v111 + 8);
  v113 = *(_QWORD *)(v111 + 16);
  if ( v113 == 2 )
  {
    v115 = (unsigned __int16)__ROL2__(*v112, 8) - 30579;
    v71 = 80;
  }
  else
  {
    if ( v113 != 3 )
      goto LABEL_69;
    v114 = __ROL2__(*v112, 8);
    if ( v114 == 30579 )
      v115 = *((unsigned __int8 *)v112 + 2) - 115;
    else
      v115 = 2 * (v114 >= 0x7773u) - 1;
    v71 = 443;
  }
  *(_QWORD *)&v348[8] = 0x8000000000000003uLL;
  *(_QWORD *)v348 = 12;
  if ( v115 )
    goto LABEL_69;
LABEL_48:
  v708 = v72;
  v707 = (__int64)v764;
  v706 = v763;
  v705 = v762;
  v704 = v765;
  v703 = v760;
  v702 = v761;
  sub_140409740(v348);
  v73 = v767 + 1832;
  v74 = v767 + 1896;
  *(_WORD *)(v767 + 1896) = v71;
  *(_QWORD *)v348 = v73;
  *(_QWORD *)&v348[8] = sub_1400015F0;
  *(_QWORD *)&v348[16] = v74;
  *(_QWORD *)&v348[24] = sub_1416BB1E0;
  v708 = v766;
  v707 = (__int64)v764;
  v706 = v763;
  v705 = v762;
  v704 = v765;
  v703 = v760;
  v702 = v761;
  sub_1416ABFD0(&v365, &unk_1419F1AF8, v348);
  v332 = v366.m128i_i64[0];
  v75 = v365;
  v331 = v365;
  v9 = v767;
  v76 = (const __m128i *)(v767 + 1920);
  *(_QWORD *)(v767 + 1936) = v366.m128i_i64[0];
  *(__m128i *)(v9 + 1920) = v75;
  v77 = (char *)(v9 + 1944);
  *(_BYTE *)(v9 + 1944) = 0;
LABEL_49:
  *(_WORD *)(v9 + 1945) = 0;
  v341 = v76[1].m128i_i64[0];
  v756 = v76;
  v340 = _mm_loadu_si128(v76);
  sub_141516A70(v348, &v340);
  if ( v340.m128i_i64[0] )
    sub_140001660(v340.m128i_i64[1], v340.m128i_i64[0], 1);
  v78 = _mm_loadu_si128((const __m128i *)v348);
  v366 = *(__m128i *)&v348[16];
  v365 = v78;
  v9 = v767;
  *(_OWORD *)(v767 + 1968) = *(_OWORD *)&v348[16];
  *(__m128i *)(v9 + 1952) = v78;
LABEL_52:
  v758 = (__int64 *)(v9 + 1952);
  sub_141517230(v348, v9 + 1952, v8, a4);
  v5 = *(unsigned int *)v348;
  if ( *(_DWORD *)v348 == -1 )
  {
    v100 = 3;
LABEL_323:
    *v77 = v100;
    v147 = 3;
    v18 = v767;
    v146 = v680;
    goto LABEL_324;
  }
  v751 = v77;
  v79 = *(_DWORD *)&v348[4];
  v759 = *(__m128i **)&v348[8];
  v755 = *(_QWORD *)&v348[24];
  v80 = _mm_loadu_si128((const __m128i *)&v348[16]);
  v81 = *(_QWORD *)&v348[32];
  if ( *(_WORD *)v758 == 0xFFFF )
  {
    v679 = v766;
    v678 = v764;
    v677 = v763;
    v676 = v762;
    v675 = v765;
    v674 = v760;
    v673 = v761;
    v672 = v756;
    sub_140942610(v767 + 1960);
  }
  if ( (_DWORD)v5 == 2 )
  {
    v82 = 2;
    v83 = v759;
    v84 = v767;
    goto LABEL_331;
  }
  v104 = v767;
  *(_WORD *)(v767 + 1945) = 1;
  *(_QWORD *)(v104 + 1952) = 0;
  LODWORD(v758) = v5;
  *(_DWORD *)(v104 + 1960) = v5;
  *(_DWORD *)(v104 + 1964) = v79;
  *(_QWORD *)(v104 + 1968) = v759;
  *(__m128i *)(v104 + 1976) = v80;
  *(_QWORD *)(v104 + 1992) = v81;
  while ( 1 )
  {
    v251 = (_DWORD *)(v104 + 1960);
    v699 = (int)v758;
    v616 = v759;
    v615 = v755;
    v614 = v766;
    v613 = v764;
    v612 = v763;
    v611 = v762;
    v610 = v765;
    v609 = v760;
    v608 = v761;
    v76 = v756;
    v607 = v756;
    sub_141517780(&v357, v104 + 1960);
    if ( v357.m128i_i16[0] == 2 )
      break;
    v253 = (__m128i *)v767;
    v118 = (const __m128i *)(v767 + 2000);
    v254 = v357;
    *(_OWORD *)(v767 + 2016) = v358;
    v253[125] = v254;
    v116 = &v253[131].m128i_i8[8];
    v253[131].m128i_i8[8] = 0;
    v85 = v761;
LABEL_292:
    v255 = _mm_loadu_si128(v118);
    v366 = v118[1];
    v365 = v255;
    v669 = (int)v758;
    v486 = v759;
    v485 = v755;
    v484 = v766;
    v483 = v764;
    v482 = v763;
    v481 = v762;
    v480 = v765;
    v479 = v760;
    v478 = v85;
    v477 = v76;
    v757 = (unsigned __int64)v116;
    v476 = v116;
    v754 = v118;
    v475 = v118;
    sub_141522790(v348, &v365);
    v130 = *(const __m128i **)&v348[8];
    v129 = *(_QWORD *)v348;
    if ( *(_QWORD *)v348 == -1 )
    {
      v756 = v76;
      v761 = v85;
      goto LABEL_304;
    }
    v256 = v767;
    v132 = v767 + 2032;
    *(_OWORD *)(v767 + 2032) = *(_OWORD *)v348;
    v131 = (__m128i *)(v256 + 2096);
    *(_BYTE *)(v256 + 2096) = 0;
LABEL_294:
    v701 = (int)v758;
    v649 = v759;
    v648 = v755;
    v647 = v766;
    v646 = v764;
    v645 = v763;
    v644 = v762;
    v643 = v765;
    v642 = v760;
    v641 = v85;
    v756 = v76;
    v640 = v76;
    v639 = v757;
    v638 = v754;
    v752 = v131;
    v637 = v131;
    v636 = v132;
    sub_14150FF60(v348, v129, v130);
    v130 = *(const __m128i **)&v348[8];
    if ( *(_QWORD *)v348 == 2 )
      goto LABEL_302;
    v753 = v132;
    v761 = v85;
    v343 = *(_QWORD *)&v348[32];
    v342 = *(__m128i *)&v348[16];
    v257 = (__m128i *)v767;
    v157 = v767 + 2048;
    *(_OWORD *)(v767 + 2048) = *(_OWORD *)v348;
    v257[129] = _mm_load_si128(&v342);
    v257[130].m128i_i64[0] = v343;
    v257[130].m128i_i64[1] = v157;
LABEL_296:
    sub_1415140A0(v348, v157, v8);
    if ( v348[9] == 0xFF )
    {
      v752->m128i_i8[0] = 3;
LABEL_322:
      *(_BYTE *)v757 = 3;
      v100 = 4;
      v77 = v751;
      goto LABEL_323;
    }
    v258 = *(const __m128i **)v348;
    if ( v348[9] == 2 )
      goto LABEL_301;
    if ( *(_QWORD *)(v767 + 2072) == -1 )
      sub_141939020(&off_141A3FBD8);
    if ( (sub_141522770(v767 + 2072, *(_QWORD *)v348) & 1) != 0 || v258 )
    {
LABEL_301:
      v638 = v754;
      v636 = v753;
      v701 = (int)v758;
      v649 = v759;
      v648 = v755;
      v647 = v766;
      v646 = v764;
      v645 = v763;
      v644 = v762;
      v643 = v765;
      v642 = v760;
      v85 = v761;
      v641 = v761;
      v640 = v756;
      v639 = v757;
      v637 = v752;
      v259 = v258;
      sub_14040DD10(v767 + 2048);
      v130 = v259;
LABEL_302:
      v761 = v85;
      v752->m128i_i8[0] = 1;
LABEL_304:
      *(_BYTE *)v757 = 1;
      goto LABEL_305;
    }
    v82 = *(_QWORD *)(v767 + 2048);
    v130 = *(const __m128i **)(v767 + 2056);
    v5 = *(_QWORD *)(v767 + 2064);
    v9 = *(_QWORD *)(v767 + 2072);
    v749 = *(_QWORD *)(v767 + 2080);
    *(_BYTE *)(v767 + 2096) = 1;
    v261 = v756;
    if ( v82 == -1 )
      goto LABEL_322;
    *(_BYTE *)v757 = 1;
    if ( v82 != 2 )
    {
      v262 = v767;
      if ( *(_DWORD *)(v767 + 1960) )
      {
        v263 = *(_QWORD *)(v767 + 1984);
        if ( v263 )
        {
          v264 = v130;
          sub_140001660(*(_QWORD *)(v767 + 1968), 32 * v263, 4);
          v130 = v264;
          v261 = v756;
        }
      }
      v265 = *(_QWORD *)(v262 + 1952);
      if ( v265 && (unsigned int)(v265 & 3) - 2 >= 2 && (v265 & 3) != 0 )
      {
        v266 = v130;
        *(_QWORD *)&v348[8] = v265 - 1;
        v348[0] = 3;
        v700 = (int)v758;
        v626 = v759;
        v625 = v755;
        v624 = v766;
        v623 = v764;
        v622 = v763;
        v621 = v762;
        v620 = v765;
        v619 = v760;
        v618 = v761;
        v617 = v261;
        sub_1416BCB00(&v348[8]);
        v130 = v266;
      }
      v83 = v130;
      v84 = v767;
      *(_BYTE *)(v767 + 1945) = 0;
      goto LABEL_331;
    }
LABEL_305:
    v260 = *(_QWORD *)(v767 + 1952);
    if ( v260 )
    {
      v757 = (unsigned __int64)v130;
      if ( (unsigned int)(v260 & 3) - 2 >= 2 && (v260 & 3) != 0 )
      {
        *(_QWORD *)&v348[8] = v260 - 1;
        v348[0] = 3;
        sub_1416BCB00(&v348[8]);
      }
      v130 = (const __m128i *)v757;
    }
    v104 = v767;
    *(_BYTE *)(v767 + 1945) = 1;
    *(_QWORD *)(v104 + 1952) = v130;
  }
  v84 = v767;
  if ( *v251 )
  {
    v267 = *(_QWORD *)(v767 + 1984);
    if ( v267 )
      sub_140001660(*(_QWORD *)(v767 + 1968), 32 * v267, 4);
  }
  *(_BYTE *)(v84 + 1945) = 0;
  v268 = *(_QWORD *)(v84 + 1952);
  if ( !v268 )
  {
    v668 = (int)v758;
    v474 = v759;
    v473 = v755;
    v472 = v766;
    v471 = v764;
    v470 = v763;
    v469 = v762;
    v468 = v765;
    v467 = v760;
    v466 = v761;
    v465 = v76;
    LOBYTE(v252) = 20;
    v268 = sub_1416793A0(v252, aCouldNotResolv, 32);
    v84 = v767;
  }
  v83 = (const __m128i *)v268;
  *(_BYTE *)(v84 + 1945) = 0;
  v82 = 2;
LABEL_331:
  *(_BYTE *)(v84 + 1946) = 0;
  *(_BYTE *)(v84 + 1944) = 1;
  v708 = v766;
  v707 = (__int64)v764;
  v706 = v763;
  v705 = v762;
  v704 = v765;
  v703 = v760;
  v702 = v761;
  sub_140404AC0(v756);
  v269 = (unsigned __int64)v83;
  v92 = (__m128i *)v749;
  if ( v82 == 2 )
  {
LABEL_335:
    v741 = v8;
    v49 = v269;
    v50 = v269 >> 16;
    v47 = 5;
    v51 = (_QWORD *)v767;
LABEL_199:
    v751 = (char *)v96;
    v753 = v95;
    v756 = v94;
    v754 = v93;
    v752 = v92;
    v176 = v51[229];
    if ( v176 )
      sub_140001660(v51[230], v176, 1);
    goto LABEL_201;
  }
  v270 = v767;
  v271 = (const __m128i *)(v767 + 1856);
  *(_QWORD *)(v767 + 1856) = v82;
  *(_QWORD *)(v270 + 1864) = v269;
  *(_QWORD *)(v270 + 1872) = v5;
  *(_QWORD *)(v270 + 1880) = v9;
  *(_QWORD *)(v270 + 1888) = v92;
  v9 = v270;
  if ( *(_BYTE *)(v270 + 1900) == 1 )
  {
    v759 = (__m128i *)v271;
    LOBYTE(v93) = 1;
    v272 = sub_14150FE20(v271, v93);
    v9 = v767;
    v271 = v759;
    if ( v272 )
    {
      v708 = v766;
      v707 = (__int64)v764;
      v706 = v763;
      v705 = v762;
      v704 = v765;
      v703 = v760;
      v702 = v761;
      v269 = v272;
      sub_14040DD10(v759);
      goto LABEL_335;
    }
  }
  *(_BYTE *)(v9 + 1902) = 0;
  sub_1418F44E0(v328, (const __m128i *)(v9 + 1536), 0xE0u);
  v273 = *(_OWORD *)(v9 + 1776);
  v274 = *(_OWORD *)(v9 + 1792);
  v275 = *(_OWORD *)(v9 + 1808);
  v412 = *(_OWORD *)(v9 + 1760);
  v413 = v273;
  v414 = v274;
  v415 = v275;
  v416 = *(_QWORD *)(v9 + 1824);
  *(_BYTE *)(v9 + 1901) = 0;
  v759 = (__m128i *)(v9 + 1904);
  v276 = *(_QWORD *)(v9 + 1904);
  v277 = *(_QWORD *)(v9 + 1912);
  v278 = v271[1];
  *(__m128i *)(v9 + 1904) = *v271;
  *(__m128i *)(v9 + 1920) = v278;
  *(_QWORD *)(v9 + 1936) = v271[2].m128i_i64[0];
  *(_QWORD *)(v9 + 1944) = v276;
  v757 = v277;
  *(_QWORD *)(v9 + 1952) = v277;
  sub_1418F44E0((__m128i *)(v9 + 1960), v328, 0xE0u);
  v279 = v413;
  v280 = v414;
  v281 = v415;
  *(_OWORD *)(v9 + 2184) = v412;
  *(_OWORD *)(v9 + 2200) = v279;
  *(_OWORD *)(v9 + 2216) = v280;
  *(_OWORD *)(v9 + 2232) = v281;
  *(_QWORD *)(v9 + 2248) = v416;
  v736 = (char *)(v9 + 2600);
  *(_BYTE *)(v9 + 2600) = 0;
LABEL_337:
  *(_BYTE *)(v9 + 2601) = 0;
  v282 = *(_QWORD *)(v9 + 1960);
  v737 = *(_QWORD *)(v9 + 1968);
  v741 = *(_QWORD *)(v9 + 1976);
  v283 = *(_QWORD *)(v9 + 1984);
  v755 = *(_QWORD *)(v9 + 1992);
  v749 = *(_QWORD *)(v9 + 2000);
  v284 = *(_QWORD **)(v9 + 2008);
  v742 = *(_QWORD **)(v9 + 2016);
  v124 = *(_QWORD *)(v9 + 2024);
  v758 = *(__int64 **)(v9 + 2032);
  v285 = *(__m128i **)(v9 + 2040);
  v286 = *(const __m128i **)(v9 + 2048);
  v756 = *(const __m128i **)(v9 + 2056);
  v287 = *(_QWORD *)(v9 + 2064);
  v747 = *(_QWORD *)(v9 + 2072);
  v288 = *(_QWORD *)(v9 + 2080);
  v746 = *(_QWORD *)(v9 + 2088);
  v289 = *(char **)(v9 + 2096);
  *(_BYTE *)(v9 + 2603) = 1;
  v437 = v759[2].m128i_i64[0];
  v290 = *v759;
  v436 = v759[1];
  v435 = v290;
  *(_QWORD *)(v9 + 2320) = *(_QWORD *)(v9 + 2248);
  *(_OWORD *)(v9 + 2304) = *(_OWORD *)(v9 + 2232);
  *(_OWORD *)(v9 + 2288) = *(_OWORD *)(v9 + 2216);
  *(_OWORD *)(v9 + 2272) = *(_OWORD *)(v9 + 2200);
  *(__m128i *)(v9 + 2256) = _mm_loadu_si128((const __m128i *)(v9 + 2184));
  *(_BYTE *)(v9 + 2602) = 1;
  v291 = *(_QWORD *)(v9 + 1944);
  *(_QWORD *)(v9 + 2328) = v291;
  *(_QWORD *)(v9 + 2336) = v757;
  if ( v282 == -1 )
  {
    v751 = v289;
    v753 = v288;
    v745 = v287;
    v754 = v286;
    v752 = v285;
    v750 = (__int64 *)v124;
    v744 = v284;
    v743 = v283;
    LOBYTE(v124) = v741;
    v757 = v741 >> 8;
    v152 = v759;
    v297 = v758;
    v151 = v737;
    v296 = (__int64)v764;
    v298 = v755;
LABEL_347:
    if ( v291 )
    {
      if ( *(_BYTE *)(v767 + 2602) )
      {
        v303 = v767 + 2336;
        v304 = *(volatile signed __int64 **)(v767 + 2336);
        if ( v304 )
        {
          if ( !_InterlockedDecrement64(v304) )
          {
            v667 = v766;
            v666 = v296;
            v665 = v763;
            v664 = v762;
            v663 = v765;
            v662 = v760;
            v661 = v761;
            v660 = v152;
            v737 = v151;
            v305 = v124;
            v124 = (unsigned __int64)v297;
            v9 = v296;
            v306 = v298;
            sub_1412D9AC0(v303);
            v298 = v306;
            v296 = v9;
            v297 = (__int64 *)v124;
            LOBYTE(v124) = v305;
            v151 = v737;
          }
        }
      }
    }
    v758 = v297;
    v755 = v298;
    v307 = v767;
    *(_BYTE *)(v767 + 2602) = 0;
    if ( *(_BYTE *)(v307 + 2603) )
    {
      v555 = v766;
      v554 = v296;
      v553 = v763;
      v552 = v762;
      v551 = v765;
      v550 = v760;
      v549 = v761;
      v548 = v152;
      sub_14040DD10(&v435);
    }
    v741 = v8;
    v764 = (__m128i *)v296;
    *(_BYTE *)(v767 + 2603) = 0;
    v55 = 2;
LABEL_355:
    v711 = v9;
    v47 = v151;
    sub_1418F44E0(v323, v322, 0x480u);
    v407 = _mm_load_si128(&v402);
    v408 = v403;
    v409 = v404;
    v410 = v405;
    v411 = v406;
    sub_1418F44E0(v335, v333, 0x8Du);
    *v736 = 1;
    v444 = v766;
    v443 = v764;
    v442 = v763;
    v441 = v762;
    v440 = v765;
    v439 = v760;
    v438 = v761;
    sub_140405090(v152);
    v308 = v757 & 0xFFFFFFFFFFFF00LL;
    v309 = (_WORD)v757 << 8;
    v181 = (_BYTE *)v767;
    v310 = *(_QWORD *)(v767 + 1832);
    if ( v310 )
      sub_140001660(*(_QWORD *)(v767 + 1840), v310, 1);
    v49 = (unsigned __int8)v124 | v309;
    v50 = v308 >> 8;
    v181[1901] = 0;
    v180 = v761;
    goto LABEL_206;
  }
  *(_QWORD *)(v9 + 2344) = v282;
  *(_QWORD *)(v9 + 2352) = v737;
  *(_QWORD *)(v9 + 2360) = v741;
  *(_QWORD *)(v9 + 2368) = v283;
  *(_QWORD *)(v9 + 2376) = v755;
  *(_QWORD *)(v9 + 2384) = v749;
  *(_QWORD *)(v9 + 2392) = v284;
  *(_QWORD *)(v9 + 2400) = v742;
  *(_QWORD *)(v9 + 2408) = v124;
  *(_QWORD *)(v9 + 2416) = v758;
  *(_QWORD *)(v9 + 2424) = v285;
  *(_QWORD *)(v9 + 2432) = v286;
  *(_QWORD *)(v9 + 2440) = v756;
  *(_QWORD *)(v9 + 2448) = v287;
  *(_QWORD *)(v9 + 2456) = v747;
  *(_QWORD *)(v9 + 2464) = v288;
  *(_QWORD *)(v9 + 2472) = v746;
  *(_QWORD *)(v9 + 2480) = v289;
  v292 = *(_OWORD *)(v9 + 2120);
  v293 = *(_OWORD *)(v9 + 2136);
  v294 = *(_OWORD *)(v9 + 2152);
  *(_OWORD *)(v9 + 2488) = *(_OWORD *)(v9 + 2104);
  *(_OWORD *)(v9 + 2504) = v292;
  *(_OWORD *)(v9 + 2520) = v293;
  *(_OWORD *)(v9 + 2536) = v294;
  *(__m128i *)(v9 + 2552) = _mm_loadu_si128((const __m128i *)(v9 + 2168));
  v579 = v766;
  v578 = v764;
  v577 = v763;
  v576 = v762;
  v575 = v765;
  v574 = v760;
  v573 = v761;
  v152 = v759;
  v572 = v759;
  sub_140477AA0(v348, v9 + 2344);
  v124 = *(_QWORD *)&v348[8];
  v151 = *(_QWORD *)v348;
  v295 = *(_OWORD *)&v348[16];
  if ( *(_QWORD *)v348 != -1 )
  {
    v755 = *(_QWORD *)&v348[24];
    v743 = *(_QWORD *)&v348[16];
    v744 = *(_QWORD **)&v348[40];
    v749 = *(_QWORD *)&v348[32];
    v750 = *(__int64 **)&v348[56];
    v742 = *(_QWORD **)&v348[48];
    v752 = *(__m128i **)&v348[72];
    v758 = *(__int64 **)&v348[64];
    v756 = *(const __m128i **)&v348[88];
    v754 = *(const __m128i **)&v348[80];
    v745 = *(_QWORD *)&v348[96];
    v753 = v349.m128i_i64[1];
    v747 = v349.m128i_i64[0];
    v746 = v350.m128i_i64[0];
    v757 = *(_QWORD *)&v348[8] >> 8;
    v751 = (char *)v350.m128i_i64[1];
    v9 = v767;
    v296 = (__int64)v764;
    goto LABEL_346;
  }
  v299 = v767;
  v300 = v767 + 2440;
  *(_BYTE *)(v767 + 2601) = 1;
  *(_QWORD *)(v299 + 2568) = v124;
  *(_OWORD *)(v299 + 2576) = v295;
  v698 = v766;
  v697 = v764;
  v696 = v763;
  v695 = v762;
  v694 = v765;
  v693 = v760;
  v692 = v761;
  v691 = v152;
  sub_14119E2A0(v348, v300);
  v151 = *(_QWORD *)v348;
  v124 = v348[8];
  if ( *(_QWORD *)v348 != -1 )
  {
    v757 = ((unsigned __int64)((v348[15] << 16) | (unsigned int)*(unsigned __int16 *)&v348[13]) << 32)
         | *(unsigned int *)&v348[9];
    v755 = *(_QWORD *)&v348[24];
    v743 = *(_QWORD *)&v348[16];
    v744 = *(_QWORD **)&v348[40];
    v126 = *(_QWORD *)&v348[32];
    v750 = *(__int64 **)&v348[56];
    v742 = *(_QWORD **)&v348[48];
    v153 = *(__m128i **)&v348[72];
    v758 = *(__int64 **)&v348[64];
    v156 = *(_OWORD *)&v348[80];
    v745 = *(_QWORD *)&v348[96];
    v154 = v349.m128i_i64[1];
    v747 = v349.m128i_i64[0];
    v155 = v350.m128i_i64[1];
    v746 = v350.m128i_i64[0];
    v9 = v767;
    v152 = v759;
    goto LABEL_343;
  }
  v9 = v767;
  v311 = v767 + 2568;
  if ( *(_DWORD *)(v767 + 2328) != 1 )
  {
    *(_BYTE *)(v767 + 2603) = 0;
    *(_QWORD *)&v348[32] = v437;
    *(__m128i *)&v348[16] = v436;
    *(__m128i *)v348 = v435;
    *(_BYTE *)(v9 + 2601) = 0;
    *(_OWORD *)&v348[40] = *(_OWORD *)v311;
    *(_QWORD *)&v348[56] = *(_QWORD *)(v311 + 16);
    si128 = _mm_load_si128((const __m128i *)v348);
    v317 = *(_OWORD *)&v348[16];
    v365 = si128;
    v366 = *(__m128i *)&v348[16];
    v318 = *(_OWORD *)&v348[32];
    v367 = *(_OWORD *)&v348[32];
    v368 = *(_OWORD *)&v348[48];
    *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v348[48];
    *(_OWORD *)(v9 + 2640) = v318;
    *(_OWORD *)(v9 + 2624) = v317;
    *(__m128i *)(v9 + 2608) = si128;
    *(_QWORD *)(v9 + 2672) = 0;
    *(_BYTE *)(v9 + 3824) = v124;
    *(_BYTE *)(v9 + 3825) = 0;
    v97 = v736;
LABEL_98:
    v758 = (__int64 *)(v9 + 2608);
    sub_14045F400(v348, v9 + 2608, v8);
    v121 = *(_QWORD *)v348;
    if ( *(_QWORD *)v348 == -2 )
    {
      v122 = 5;
      goto LABEL_121;
    }
    goto LABEL_110;
  }
  *(_BYTE *)(v767 + 2602) = 0;
  v312 = *(_QWORD *)(v9 + 2336);
  *(_QWORD *)(v9 + 2592) = v312;
  v97 = v736;
  a2 = (__int64)v764;
  if ( v312 )
  {
    *(_BYTE *)(v9 + 2603) = 0;
    *(_QWORD *)&v348[32] = v437;
    *(__m128i *)&v348[16] = v436;
    *(__m128i *)v348 = v435;
    *(_BYTE *)(v9 + 2601) = 0;
    *(_OWORD *)&v348[40] = *(_OWORD *)v311;
    *(_QWORD *)&v348[56] = *(_QWORD *)(v311 + 16);
    v313 = _mm_load_si128((const __m128i *)v348);
    v314 = *(_OWORD *)&v348[16];
    v365 = v313;
    v366 = *(__m128i *)&v348[16];
    v315 = *(_OWORD *)&v348[32];
    v367 = *(_OWORD *)&v348[32];
    v368 = *(_OWORD *)&v348[48];
    *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v348[48];
    *(_OWORD *)(v9 + 2640) = v315;
    *(_OWORD *)(v9 + 2624) = v314;
    *(__m128i *)(v9 + 2608) = v313;
    *(_QWORD *)(v9 + 2672) = v312;
    *(_BYTE *)(v9 + 3824) = v124;
    *(_BYTE *)(v9 + 3825) = 0;
LABEL_101:
    v758 = (__int64 *)(v9 + 2608);
    sub_14045F400(v348, v9 + 2608, v8);
    v121 = *(_QWORD *)v348;
    if ( *(_QWORD *)v348 == -2 )
    {
      v122 = 3;
      goto LABEL_121;
    }
LABEL_110:
    v736 = v97;
    v127 = _mm_loadu_si128((const __m128i *)&v348[8]);
    v743 = *(_QWORD *)&v348[24];
    v749 = *(_QWORD *)&v348[40];
    v755 = *(_QWORD *)&v348[32];
    v124 = *(_QWORD *)&v348[56];
    v744 = *(_QWORD **)&v348[48];
    v133 = *(__int64 **)&v348[72];
    v750 = *(__int64 **)&v348[64];
    v754 = *(const __m128i **)&v348[88];
    v752 = *(__m128i **)&v348[80];
    v756 = *(const __m128i **)&v348[96];
    v747 = v349.m128i_i64[1];
    v745 = v349.m128i_i64[0];
    v746 = v350.m128i_i64[1];
    v753 = v350.m128i_i64[0];
    v751 = v351;
    sub_1418F44E0(v326, v352, 0x3C0u);
    v134 = v766;
    v698 = v766;
    v697 = v764;
    v696 = v763;
    v695 = v762;
    v694 = v765;
    v693 = v760;
    v692 = v761;
    v691 = v759;
    sub_140405670((__int64)v758);
    v9 = v767;
    v126 = v749;
    v758 = v133;
    v97 = v736;
  }
  else
  {
    *(_BYTE *)(v9 + 2603) = 0;
    v123 = v9 + 2608;
    v319 = v436;
    *(__m128i *)(v9 + 2608) = v435;
    *(__m128i *)(v9 + 2624) = v319;
    *(_QWORD *)(v9 + 2640) = v437;
    *(_BYTE *)(v9 + 2648) = v124;
    v758 = (__int64 *)(v9 + 2649);
    *(_BYTE *)(v9 + 2649) = 0;
    v99 = v759;
LABEL_105:
    v759 = (__m128i *)v99;
    *(_QWORD *)&v348[32] = *(_QWORD *)(v123 + 32);
    v125 = _mm_loadu_si128((const __m128i *)v123);
    *(_OWORD *)&v348[16] = *(_OWORD *)(v123 + 16);
    *(__m128i *)v348 = v125;
    v764 = (__m128i *)a2;
    if ( (v124 & 1) != 0 )
    {
      v755 = v123;
      v126 = sub_14040DD10(v348);
      v127 = _mm_load_si128((const __m128i *)&xmmword_1419EE6D0);
      v121 = -1;
      v9 = v767;
    }
    else
    {
      v127 = _mm_load_si128((const __m128i *)v348);
      v743 = *(_QWORD *)(v9 + 2624);
      v755 = *(_QWORD *)(v9 + 2632);
      v121 = 2;
      v126 = *(_QWORD *)&v348[32];
    }
    v134 = v766;
    *(_BYTE *)v758 = 1;
  }
  v766 = v134;
  v736 = v97;
  if ( (_DWORD)v121 == -1 )
  {
    v742 = (_QWORD *)v124;
    v124 = _mm_shuffle_epi32(v127, 238).m128i_u64[0];
    v757 = v124 >> 8;
    v151 = v127.m128i_i64[0];
    v152 = v759;
    v153 = v752;
    v154 = v753;
    v155 = (__int64)v751;
    v156 = __PAIR128__((unsigned __int64)v756, (unsigned __int64)v754);
LABEL_343:
    v749 = v126;
    v301 = *(_BYTE *)(v9 + 2601) == 0;
    v296 = (__int64)v764;
    v752 = v153;
    v756 = (const __m128i *)(v156 >> 64);
    v754 = (const __m128i *)v156;
    v753 = v154;
    v751 = (char *)v155;
    if ( !v301 )
    {
      v302 = *(_QWORD *)(v9 + 2568);
      if ( v302 )
        sub_140001660(*(_QWORD *)(v9 + 2576), v302, 1);
    }
LABEL_346:
    *(_BYTE *)(v9 + 2601) = 0;
    v571 = v766;
    v570 = v296;
    v569 = v763;
    v568 = v762;
    v567 = v765;
    v566 = v760;
    v565 = v761;
    v564 = v152;
    sub_140407F80(v9 + 2344);
    v291 = *(_QWORD *)(v767 + 2328);
    v298 = v755;
    v297 = v758;
    goto LABEL_347;
  }
  v135 = v126;
  v120 = (const __m128i *)(v9 + 2608);
  sub_1418F44E0((__m128i *)(v9 + 2608), (const __m128i *)(v9 + 2344), 0xE0u);
  *(_QWORD *)(v9 + 2832) = v121;
  *(__m128i *)(v9 + 2840) = v127;
  *(_QWORD *)(v9 + 2856) = v743;
  *(_QWORD *)(v9 + 2864) = v755;
  *(_QWORD *)(v9 + 2872) = v135;
  *(_QWORD *)(v9 + 2880) = v744;
  *(_QWORD *)(v9 + 2888) = v124;
  *(_QWORD *)(v9 + 2896) = v750;
  *(_QWORD *)(v9 + 2904) = v758;
  *(_QWORD *)(v9 + 2912) = v752;
  *(_QWORD *)(v9 + 2920) = v754;
  *(_QWORD *)(v9 + 2928) = v756;
  *(_QWORD *)(v9 + 2936) = v745;
  *(_QWORD *)(v9 + 2944) = v747;
  *(_QWORD *)(v9 + 2952) = v753;
  *(_QWORD *)(v9 + 2960) = v746;
  *(_QWORD *)(v9 + 2968) = v751;
  sub_1418F44E0((__m128i *)(v9 + 2976), v326, 0x3C0u);
  v136 = *(_OWORD *)(v9 + 2272);
  v137 = *(_OWORD *)(v9 + 2288);
  v138 = *(_OWORD *)(v9 + 2304);
  *(_OWORD *)(v9 + 3936) = *(_OWORD *)(v9 + 2256);
  *(_OWORD *)(v9 + 3952) = v136;
  *(_OWORD *)(v9 + 3968) = v137;
  *(_OWORD *)(v9 + 3984) = v138;
  *(_QWORD *)(v9 + 4000) = *(_QWORD *)(v9 + 2320);
  v757 = v9 + 11144;
  *(_BYTE *)(v9 + 11144) = 0;
LABEL_115:
  sub_1418F44E0(&v365, v120, 0xE0u);
  sub_1418F44E0((__m128i *)v348, (const __m128i *)(v9 + 2832), 0x450u);
  v139 = *(__m128i *)(v9 + 3952);
  v140 = *(__m128i *)(v9 + 3968);
  v141 = *(__m128i *)(v9 + 3984);
  v379[5] = _mm_loadu_si128((const __m128i *)(v9 + 3936));
  v379[6] = v139;
  v379[7] = v140;
  v379[8] = v141;
  v380 = *(_QWORD *)(v9 + 4000);
  sub_1418F44E0(v355, &v365, 0x128u);
  v142 = (const __m128i *)(v9 + 4008);
  sub_1418F44E0((__m128i *)(v9 + 4008), (const __m128i *)v348, 0x1BD8u);
  v740 = (_BYTE *)(v9 + 11136);
  *(_BYTE *)(v9 + 11136) = 0;
LABEL_116:
  sub_1418F44E0(&v365, v142, 0x450u);
  sub_1418F44E0(v382, (const __m128i *)(v9 + 5112), 0x128u);
  sub_1418F44E0(&v342, &v365, 0x578u);
  v143 = (const __m128i *)(v9 + 5408);
  sub_1418F44E0((__m128i *)(v9 + 5408), &v342, 0x578u);
  v732 = (char *)(v9 + 6808);
  *(_BYTE *)(v9 + 6808) = 0;
LABEL_117:
  v738 = v142;
  v748 = v120;
  v733 = v143;
  sub_1418F44E0(v381, v143, 0x450u);
  sub_1418F44E0(&v365, (const __m128i *)(v9 + 6512), 0x128u);
  sub_1418F44E0(&v357, &v365, 0x578u);
  sub_1418F44E0((__m128i *)(v9 + 6816), &v357, 0x578u);
LABEL_118:
  v493 = (__m128i *)(v9 + 6816);
  sub_1409457A0(&v365, v9 + 6816, v8);
  v97 = v736;
  v144 = v365.m128i_i64[0];
  if ( v365.m128i_i64[0] != -2 )
  {
    v737 = v365.m128i_i64[1];
    v743 = v366.m128i_i64[1];
    v741 = v366.m128i_i64[0];
    v749 = *((_QWORD *)&v367 + 1);
    v755 = v367;
    v742 = *((_QWORD **)&v368 + 1);
    v744 = (_QWORD *)v368;
    v148 = v369;
    v758 = v370;
    v752 = (__m128i *)v371;
    v754 = v372;
    v756 = v373;
    v745 = v374;
    v747 = v375;
    v753 = v376;
    v746 = v377;
    v751 = (char *)v378;
    v9 = v379[0].m128i_i64[0];
    sub_1418F44E0(&v331, (const __m128i *)&v379[0].m128i_u64[1], 0x480u);
    sub_1418F44E0(v338, v383, 0xD0u);
    v149 = v493;
    v150 = v748;
    if ( v493->m128i_i32[0] != -1 )
    {
      sub_140407F80(v493);
      if ( *(_DWORD *)(v767 + 7112) == 2 )
      {
        v727 = v766;
        v726 = v764;
        v725 = v763;
        v724 = v762;
        v723 = v765;
        v722 = v760;
        v721 = v761;
        v720 = v759;
        v719 = v757;
        v150 = v748;
        v718 = v748;
        v717 = v740;
        v716 = v738;
        v715 = v732;
        v714 = v733;
        sub_14040DD10(v767 + 7120);
      }
      else
      {
        sub_14040DD10(v767 + 7112);
        v727 = v766;
        v726 = v764;
        v725 = v763;
        v724 = v762;
        v723 = v765;
        v722 = v760;
        v721 = v761;
        v720 = v759;
        v719 = v757;
        v150 = v748;
        v718 = v748;
        v717 = v740;
        v716 = v738;
        v715 = v732;
        v714 = v733;
        sub_14040E7E0(v767 + 7152);
      }
    }
    if ( (_DWORD)v144 == -1 )
    {
      v165 = (__m128i *)v767;
      *(_QWORD *)(v767 + 8336) = v737;
      v165[521].m128i_i64[1] = v741;
      v165[522].m128i_i64[0] = v743;
      v165[522].m128i_i64[1] = v755;
      v165[523].m128i_i64[0] = v749;
      v165[523].m128i_i64[1] = (__int64)v744;
      v165[524].m128i_i64[0] = (__int64)v742;
      v165[524].m128i_i64[1] = (__int64)v148;
      v165[525].m128i_i64[0] = (__int64)v758;
      v165[525].m128i_i64[1] = (__int64)v752;
      v165[526].m128i_i64[0] = (__int64)v754;
      v165[526].m128i_i64[1] = (__int64)v756;
      v165[527].m128i_i64[0] = v745;
      v165[527].m128i_i64[1] = v747;
      v165[528].m128i_i64[0] = v753;
      v165[528].m128i_i64[1] = v746;
      v165[529].m128i_i64[0] = (__int64)v751;
      v165[529].m128i_i64[1] = v9;
      v164 = v148;
      sub_1418F44E0(v165 + 530, &v331, 0x480u);
      v165[520].m128i_i64[1] = -1;
      sub_1418F44E0(&v340, &v331, 0x480u);
      v55 = 2;
    }
    else
    {
      v158 = v9;
      v9 = v767;
      *(_QWORD *)(v767 + 8328) = v144;
      *(_QWORD *)(v9 + 8336) = v737;
      v159 = v741;
      *(_QWORD *)(v9 + 8344) = v741;
      v160 = v149;
      v161 = v743;
      *(_QWORD *)(v9 + 8352) = v743;
      v162 = v148;
      v163 = v755;
      *(_QWORD *)(v9 + 8360) = v755;
      *(_QWORD *)(v9 + 8368) = v749;
      *(_QWORD *)(v9 + 8376) = v744;
      *(_QWORD *)(v9 + 8384) = v742;
      v750 = v162;
      *(_QWORD *)(v9 + 8392) = v162;
      *(_QWORD *)(v9 + 8400) = v758;
      *(_QWORD *)(v9 + 8408) = v752;
      *(_QWORD *)(v9 + 8416) = v754;
      *(_QWORD *)(v9 + 8424) = v756;
      *(_QWORD *)(v9 + 8432) = v745;
      *(_QWORD *)(v9 + 8440) = v747;
      *(_QWORD *)(v9 + 8448) = v753;
      *(_QWORD *)(v9 + 8456) = v746;
      *(_QWORD *)(v9 + 8464) = v751;
      v711 = v158;
      *(_QWORD *)(v9 + 8472) = v158;
      sub_1418F44E0((__m128i *)(v9 + 8480), &v331, 0x480u);
      sub_1418F44E0((__m128i *)(v9 + 9632), v338, 0xD0u);
      sub_1418F44E0(v160, (const __m128i *)(v9 + 8328), 0x5E8u);
      v55 = *(_QWORD *)(v9 + 6816);
      if ( v55 == 2 )
      {
        *(_QWORD *)(v9 + 9840) = v737;
        *(_QWORD *)(v9 + 9848) = v159;
        *(_QWORD *)(v9 + 9856) = v161;
        *(_QWORD *)(v9 + 9864) = v163;
        *(_QWORD *)(v9 + 9872) = v749;
        *(_QWORD *)(v9 + 9880) = v744;
        *(_QWORD *)(v9 + 9888) = v742;
        *(_QWORD *)(v9 + 9896) = v750;
        *(_QWORD *)(v9 + 9904) = v758;
        *(_QWORD *)(v9 + 9912) = v752;
        *(_QWORD *)(v9 + 9920) = v754;
        *(_QWORD *)(v9 + 9928) = v756;
        *(_QWORD *)(v9 + 9936) = v745;
        *(_QWORD *)(v9 + 9944) = v747;
        *(_QWORD *)(v9 + 9952) = v753;
        *(_QWORD *)(v9 + 9960) = v746;
        *(_QWORD *)(v9 + 9968) = v751;
        *(_QWORD *)(v9 + 9976) = v711;
        sub_1418F44E0((__m128i *)(v9 + 9984), &v331, 0x480u);
        v97 = v736;
LABEL_132:
        v750 = (__int64 *)(v9 + 9840);
        sub_14092DD70(&v365, v9 + 9840, v8);
        v55 = v365.m128i_i64[0];
        if ( v365.m128i_i64[0] == -1 )
        {
          v145 = 4;
          goto LABEL_120;
        }
        v736 = v97;
        v737 = v365.m128i_i64[1];
        v743 = v366.m128i_i64[1];
        v741 = v366.m128i_i64[0];
        v749 = *((_QWORD *)&v367 + 1);
        v755 = v367;
        v742 = *((_QWORD **)&v368 + 1);
        v744 = (_QWORD *)v368;
        v164 = v369;
        v758 = v370;
        v752 = (__m128i *)v371;
        v754 = v372;
        v756 = v373;
        v745 = v374;
        v747 = v375;
        v753 = v376;
        v746 = v377;
        v751 = (char *)v378;
        v9 = v379[0].m128i_i64[0];
        sub_1418F44E0(&v340, (const __m128i *)&v379[0].m128i_u64[1], 0x480u);
        sub_1418F44E0(v337, v383, 0xD0u);
        if ( *(_DWORD *)v750 == -1 )
        {
          v150 = v748;
        }
        else
        {
          v727 = v766;
          v726 = v764;
          v725 = v763;
          v724 = v762;
          v723 = v765;
          v722 = v760;
          v721 = v761;
          v720 = v759;
          v719 = v757;
          v150 = v748;
          v718 = v748;
          v717 = v740;
          v716 = v738;
          v715 = v732;
          v714 = v733;
          sub_1404027B0(v750);
        }
      }
      else
      {
        sub_1418F44E0(&v340, &v331, 0x480u);
        sub_1418F44E0(v337, v338, 0xD0u);
        v164 = v750;
        v150 = v748;
        v9 = v711;
      }
    }
    v750 = v164;
    sub_1418F44E0(v321, &v340, 0x480u);
    sub_1418F44E0(v345, v337, 0xD0u);
    *v732 = 1;
    v464 = v766;
    v463 = v764;
    v462 = v763;
    v461 = v762;
    v460 = v765;
    v459 = v760;
    v458 = v761;
    v166 = v759;
    v457 = v759;
    v456 = v757;
    v455 = v150;
    v454 = v740;
    v453 = v738;
    sub_1404054D0(v733);
    sub_1418F44E0(v329, v321, 0x480u);
    v124 = v741;
    if ( (_DWORD)v55 != 2 )
    {
      v401 = v346;
      v167 = _mm_loadu_si128(v345);
      v400 = v345[3];
      v399 = v345[2];
      v398 = v345[1];
      v397 = v167;
      sub_1418F44E0(v339, v347, 0x88u);
    }
    sub_1418F44E0((__m128i *)&v334[0].m128i_u8[5], v339, 0x88u);
    *v740 = 1;
    v690 = v766;
    v689 = v764;
    v688 = v763;
    v687 = v762;
    v686 = v765;
    v685 = v760;
    v684 = v761;
    v683 = v166;
    v682 = v757;
    v681 = v150;
    sub_1404053F0(v738);
    if ( (_DWORD)v55 == 2 )
    {
      v711 = v9;
      v748 = v150;
      v9 = v745;
      if ( v737 == -1 )
      {
        v737 = v741;
        v169 = v743;
        v743 = v755;
        v124 = v169;
        v755 = v749;
        v749 = (__int64)v744;
        v744 = v742;
        v742 = v750;
        v750 = v758;
        v758 = (__int64 *)v752;
        v752 = (__m128i *)v754;
        v754 = v756;
        v756 = (const __m128i *)v745;
        v745 = v747;
        v747 = v753;
        v753 = v746;
        v746 = (__int64)v751;
        v9 = v711;
        v751 = (char *)v711;
        v166 = v759;
        v150 = v748;
      }
      else
      {
        v365.m128i_i64[0] = v737;
        v365.m128i_i64[1] = v741;
        v366.m128i_i64[0] = v743;
        v366.m128i_i64[1] = v755;
        *(_QWORD *)&v367 = v749;
        *((_QWORD *)&v367 + 1) = v744;
        *(_QWORD *)&v368 = v742;
        *((_QWORD *)&v368 + 1) = v750;
        v369 = v758;
        v370 = (__int64 *)v752;
        v371 = v754;
        v372 = v756;
        v373 = (const __m128i *)v745;
        v374 = v747;
        v375 = v753;
        v376 = v746;
        v377 = (__int64)v751;
        v378 = v711;
        sub_1418F44E0(v379, v329, 0x480u);
        v342.m128i_i64[0] = 0;
        v342.m128i_i64[1] = 1;
        v343 = 0;
        *(_QWORD *)&v358 = 1610612768;
        v357.m128i_i64[0] = (__int64)&v342;
        v357.m128i_i64[1] = (__int64)&off_141A05538;
        if ( (unsigned __int8)sub_140DC2E50(&v365, &v357) )
          sub_141939040(
            (unsigned int)aADisplayImplem_1,
            55,
            (unsigned int)&v739,
            (unsigned int)&unk_1419F2138,
            (__int64)&off_141A055F0);
        v341 = v343;
        v340 = _mm_loadu_si128(&v342);
        LOBYTE(v168) = 41;
        v124 = sub_141156620(v168, &v340);
        v690 = v766;
        v689 = v764;
        v688 = v763;
        v687 = v762;
        v686 = v765;
        v685 = v760;
        v684 = v761;
        v166 = v759;
        v683 = v759;
        v682 = v757;
        v150 = v748;
        v681 = v748;
        if ( v365.m128i_i32[0] == -1 )
          sub_140409740(&v365.m128i_i64[1]);
        else
          sub_1404027B0(&v365);
        v737 = 5;
      }
    }
    else
    {
      sub_1418F44E0(v322, v329, 0x480u);
      v402 = _mm_load_si128(&v397);
      v403 = v398;
      v404 = v399;
      v405 = v400;
      v406 = v401;
      sub_1418F44E0(v333, v334, 0x8Du);
    }
    *(_BYTE *)v757 = 1;
    v452 = v766;
    v451 = v764;
    v450 = v763;
    v449 = v762;
    v448 = v765;
    v447 = v760;
    v446 = v761;
    v445 = v166;
    sub_140404910(v150);
    v757 = v124 >> 8;
    v170 = v767;
    v151 = v737;
    if ( *(_BYTE *)(v767 + 2601) )
    {
      v171 = *(_QWORD *)(v767 + 2568);
      if ( v171 )
        sub_140001660(*(_QWORD *)(v767 + 2576), v171, 1);
    }
    v741 = v8;
    *(_WORD *)(v170 + 2601) = 0;
    *(_BYTE *)(v170 + 2603) = 0;
    v152 = v759;
    goto LABEL_355;
  }
  v145 = 3;
LABEL_120:
  *v732 = v145;
  *v740 = 3;
  *(_BYTE *)v757 = 3;
  v122 = 6;
LABEL_121:
  v146 = v680;
  *v97 = v122;
  v147 = 4;
  v18 = v767;
LABEL_324:
  *v146 = v147;
  *v765 = 3;
  *v763 = 3;
  v10->m128i_i64[0] = -2;
  result = 3;
LABEL_197:
  *(_BYTE *)(v18 + 476) = result;
  return result;
}
