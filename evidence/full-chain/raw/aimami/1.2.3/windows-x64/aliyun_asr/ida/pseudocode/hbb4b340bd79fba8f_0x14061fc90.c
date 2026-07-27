// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x14061fc90
// name: hbb4b340bd79fba8f
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::voice::aliyun_asr::AliyunAsrSession::connect::_$u7b$$u7b$closure$u7d$$u7d$::hbb4b340bd79fba8f | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall hbb4b340bd79fba8f(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int128 v4; // rcx
  __int64 v5; // r12
  char *v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  volatile signed __int64 *v15; // rax
  __int64 v16; // r13
  _BYTE *v17; // r8
  volatile signed __int64 **v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // rbx
  volatile signed __int64 **v22; // r14
  char result; // al
  __int64 v24; // rax
  volatile signed __int64 *v25; // rdi
  __int64 v26; // rax
  char v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __m128i v34; // xmm0
  unsigned __int64 v35; // rsi
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int64 v39; // rdi
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  __int64 v43; // r15
  __int64 v44; // rax
  __int128 v45; // kr00_16
  unsigned __int64 v46; // r15
  __int64 v47; // r14
  volatile signed __int64 **v48; // rdx
  char v49; // al
  char v50; // r14
  char v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 *v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _BYTE *v62; // r14
  __int16 v63; // ax
  __int16 v64; // dx
  __int16 v65; // bx
  char *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int128 v69; // xmm0
  const __m128i *v70; // r15
  char *v71; // r14
  __m128i v72; // xmm0
  int v73; // edx
  int v74; // ebx
  __m128i v75; // xmm6
  __int64 v76; // r15
  __int64 v77; // rbx
  char *v78; // r14
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __m128i v83; // rax
  __int64 v84; // rax
  unsigned __int8 v85; // cl
  const __m128i *v86; // rdx
  __int64 v87; // rcx
  char *v88; // r14
  __int64 v89; // rax
  char v90; // al
  __m128i v91; // xmm0
  __int64 v92; // rbx
  __int64 v93; // rcx
  __int64 v94; // r12
  char *v95; // rbx
  __int64 v96; // rdx
  void (__fastcall *v97)(_QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v98)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v99; // rcx
  _WORD *v100; // rax
  __int64 v101; // rcx
  unsigned __int16 v102; // cx
  int v103; // eax
  _BYTE *v104; // r12
  __int64 v105; // rdx
  __int8 *v106; // r13
  __int64 v107; // r15
  __int64 v108; // rbx
  char v109; // al
  __m128i *v110; // rcx
  int v111; // eax
  const __m128i *v112; // rdx
  unsigned __int64 v113; // rbx
  __m128i v114; // xmm0
  __int64 v115; // rax
  __m128i si128; // xmm6
  __int64 v117; // rax
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // r8
  _BYTE *v120; // r13
  __int64 v121; // rcx
  unsigned __int128 v122; // kr200_16
  __int64 v123; // r14
  __int128 v124; // xmm1
  __int128 v125; // xmm2
  __int128 v126; // xmm3
  __int128 v127; // xmm1
  __int128 v128; // xmm2
  __int128 v129; // xmm3
  __int64 v130; // r12
  __int64 v131; // rbx
  __int64 v132; // r12
  char v133; // al
  char *v134; // rcx
  char v135; // al
  __int64 v136; // r15
  const __m128i *v137; // r14
  const __m128i *v138; // rbx
  const __m128i *v139; // r13
  unsigned __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // r12
  unsigned __int128 v143; // kr2E0_16
  __int64 v144; // rdx
  const __m128i *v145; // rax
  __int64 v146; // r15
  const __m128i *v147; // rbx
  const __m128i *v148; // r14
  const __m128i *v149; // r13
  bool v150; // zf
  _QWORD *v151; // r12
  char *v152; // r14
  __int64 v153; // r13
  __m128i v154; // xmm0
  const __m128i *v155; // r13
  __int64 v156; // rcx
  char *v157; // r13
  __int64 v158; // r14
  __int64 v159; // rdx
  __int64 v160; // r13
  __int64 v161; // rbx
  volatile signed __int64 *v162; // rax
  __int64 v163; // rax
  __int64 v164; // rbx
  _BYTE *v165; // r13
  __int64 v166; // r14
  __int64 v167; // rcx
  __int64 v168; // rax
  volatile signed __int64 *v169; // rbx
  __int64 v170; // rt0
  char v171; // of
  __int64 v172; // r14
  __int64 v173; // rdi
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // r15
  __m128i v178; // xmm0
  __int128 v179; // xmm1
  __int128 v180; // xmm2
  char *v181; // r13
  __int64 v182; // rcx
  char v183; // al
  __int64 v184; // rax
  __int64 v185; // rcx
  int v186; // r8d
  __int64 v187; // rdx
  __int64 v188; // r9
  __int64 v189; // rax
  __int64 v190; // rax
  volatile signed __int64 **v191; // rdx
  volatile signed __int64 **v192; // rdi
  unsigned __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // rbx
  __m128i v196; // xmm1
  __m128i v197; // xmm0
  __m128i v198; // xmm0
  __m128i v199; // xmm0
  __int64 v200; // rdx
  __int64 v201; // rax
  __int64 v202; // rdi
  __int64 v203; // rdi
  __int64 v204; // rdx
  __int64 v205; // rdi
  char v206; // al
  char v207; // r14
  char v208; // r14
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 *v211; // rcx
  __int64 v212; // rax
  volatile signed __int64 **v213; // rcx
  __int64 v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rdi
  unsigned __int64 v217; // rcx
  __int64 v218; // rax
  __int128 v219; // xmm1
  __int64 v220; // r13
  signed __int64 v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 *v224; // rcx
  __int64 v225; // rax
  __int64 v226; // rbx
  int v227; // edx
  int v228; // eax
  int v229; // edx
  _OWORD *v230; // rax
  __int128 v231; // xmm1
  __int128 v232; // xmm2
  __int128 v233; // xmm3
  __int128 v234; // xmm4
  __int128 v235; // xmm5
  __m128i v236; // xmm6
  __int64 v237; // rdx
  _DWORD *v238; // rbx
  __int64 v239; // rcx
  __m128i *v240; // rax
  __m128i v241; // xmm0
  __m128i v242; // xmm0
  __int64 v243; // rax
  __m128i *v244; // rcx
  unsigned __int64 v245; // rdx
  __int64 v246; // rdx
  __int64 v247; // rax
  __int64 v248; // r14
  __int128 v249; // xmm1
  __int128 v250; // xmm2
  __int128 v251; // xmm3
  __int64 v252; // rax
  __int64 v253; // rdx
  __int128 v254; // xmm1
  __int128 v255; // xmm1
  __int128 v256; // xmm2
  __int128 v257; // xmm3
  __int64 v258; // rcx
  __int64 v259; // r9
  const __m128i *v260; // r11
  const __m128i *v261; // r15
  const __m128i *v262; // r14
  const __m128i *v263; // rdx
  const __m128i *v264; // r8
  const __m128i *v265; // r10
  __int128 v266; // xmm0
  __int64 v267; // rax
  __int128 v268; // xmm1
  __int128 v269; // xmm2
  __int128 v270; // xmm3
  __int128 v271; // kr210_16
  const __m128i *v272; // rdx
  __int64 v273; // r8
  __int64 v274; // rax
  __int64 v275; // rdx
  __int64 v276; // rdx
  __int64 v277; // rcx
  volatile signed __int64 *v278; // rax
  __int64 v279; // r15
  __int64 v280; // r12
  __int64 v281; // rax
  unsigned __int64 v282; // r14
  __int16 v283; // r15
  __int64 v284; // rdx
  __int64 v285; // rax
  __int64 v286; // rcx
  __m128i v287; // xmm0
  __int128 v288; // xmm1
  __int128 v289; // xmm2
  __int64 v290; // r14
  __int64 v291; // rdx
  __m128i v292; // xmm0
  __int128 v293; // xmm1
  __int128 v294; // xmm2
  __int128 v295; // xmm1
  _BYTE v296[1152]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v297[1152]; // [rsp+4A8h] [rbp+428h] BYREF
  _BYTE v298[1152]; // [rsp+928h] [rbp+8A8h] BYREF
  _BYTE v299[1152]; // [rsp+DA8h] [rbp+D28h] BYREF
  _BYTE v300[1152]; // [rsp+1228h] [rbp+11A8h] BYREF
  _BYTE v301[1152]; // [rsp+16A8h] [rbp+1628h] BYREF
  _BYTE v302[960]; // [rsp+1B28h] [rbp+1AA8h] BYREF
  _BYTE v303[232]; // [rsp+1EE8h] [rbp+1E68h] BYREF
  _BYTE v304[224]; // [rsp+1FD0h] [rbp+1F50h] BYREF
  _QWORD v305[144]; // [rsp+20B0h] [rbp+2030h] BYREF
  _BYTE v306[141]; // [rsp+2533h] [rbp+24B3h] BYREF
  __int128 v307; // [rsp+25C0h] [rbp+2540h] BYREF
  __int64 v308; // [rsp+25D0h] [rbp+2550h]
  _BYTE v309[141]; // [rsp+2A44h] [rbp+29C4h] BYREF
  char v310; // [rsp+2AD1h] [rbp+2A51h] BYREF
  char v311; // [rsp+2AD6h] [rbp+2A56h] BYREF
  _BYTE v312[141]; // [rsp+2B5Eh] [rbp+2ADEh] BYREF
  _BYTE v313[141]; // [rsp+2BEBh] [rbp+2B6Bh] BYREF
  _BYTE v314[208]; // [rsp+2C78h] [rbp+2BF8h] BYREF
  _BYTE v315[208]; // [rsp+2D48h] [rbp+2CC8h] BYREF
  _BYTE v316[136]; // [rsp+2E18h] [rbp+2D98h] BYREF
  __m128i v317; // [rsp+2EA0h] [rbp+2E20h] BYREF
  __int64 v318; // [rsp+2EB0h] [rbp+2E30h]
  __m128i v319; // [rsp+3320h] [rbp+32A0h] BYREF
  __int64 v320; // [rsp+3330h] [rbp+32B0h]
  int v321; // [rsp+38A3h] [rbp+3823h] BYREF
  char v322; // [rsp+38A7h] [rbp+3827h]
  char v323; // [rsp+38A8h] [rbp+3828h] BYREF
  __m128i v324[4]; // [rsp+3930h] [rbp+38B0h] BYREF
  __int64 v325; // [rsp+3970h] [rbp+38F0h]
  char v326; // [rsp+3978h] [rbp+38F8h] BYREF
  _BYTE v327[104]; // [rsp+3A00h] [rbp+3980h] BYREF
  __m128i v328; // [rsp+3A68h] [rbp+39E8h]
  __m128i v329; // [rsp+3A78h] [rbp+39F8h]
  const __m128i *v330; // [rsp+3A88h] [rbp+3A08h]
  _BYTE v331[960]; // [rsp+3A90h] [rbp+3A10h] BYREF
  char v332; // [rsp+3E50h] [rbp+3DD0h] BYREF
  __int64 v333; // [rsp+3F80h] [rbp+3F00h]
  __m128i v334; // [rsp+55E0h] [rbp+5560h] BYREF
  __int128 v335; // [rsp+55F0h] [rbp+5570h]
  __int128 v336; // [rsp+5600h] [rbp+5580h]
  __m128i v337; // [rsp+5610h] [rbp+5590h]
  __int128 v338; // [rsp+5620h] [rbp+55A0h]
  __int128 v339; // [rsp+5630h] [rbp+55B0h]
  __m128i v340; // [rsp+5640h] [rbp+55C0h]
  __m128i v341; // [rsp+5650h] [rbp+55D0h]
  __m256i v342; // [rsp+5B60h] [rbp+5AE0h] BYREF
  __int128 v343; // [rsp+5B80h] [rbp+5B00h]
  __int128 v344; // [rsp+5B90h] [rbp+5B10h]
  const __m128i *v345; // [rsp+5BA0h] [rbp+5B20h]
  const __m128i *v346; // [rsp+5BA8h] [rbp+5B28h]
  const __m128i *v347; // [rsp+5BB0h] [rbp+5B30h]
  const __m128i *v348; // [rsp+5BB8h] [rbp+5B38h]
  const __m128i *v349; // [rsp+5BC0h] [rbp+5B40h]
  const __m128i *v350; // [rsp+5BC8h] [rbp+5B48h]
  const __m128i *v351; // [rsp+5BD0h] [rbp+5B50h]
  const __m128i *v352; // [rsp+5BD8h] [rbp+5B58h] BYREF
  const __m128i *v353; // [rsp+5BE0h] [rbp+5B60h]
  __int64 v354; // [rsp+5BE8h] [rbp+5B68h]
  __int64 v355; // [rsp+5BF0h] [rbp+5B70h] BYREF
  _BYTE v356[72]; // [rsp+5BF8h] [rbp+5B78h] BYREF
  __m128i v357; // [rsp+5C40h] [rbp+5BC0h]
  __int128 v358; // [rsp+5C50h] [rbp+5BD0h]
  __int128 v359; // [rsp+5C60h] [rbp+5BE0h]
  __int128 v360; // [rsp+5C70h] [rbp+5BF0h]
  __int64 v361; // [rsp+5C80h] [rbp+5C00h]
  char v362; // [rsp+5C88h] [rbp+5C08h] BYREF
  char v363; // [rsp+5FB0h] [rbp+5F30h] BYREF
  __int64 v364; // [rsp+6038h] [rbp+5FB8h] BYREF
  _OWORD v365[4]; // [rsp+6078h] [rbp+5FF8h] BYREF
  __int64 v366; // [rsp+60B8h] [rbp+6038h]
  __int16 v367; // [rsp+60C0h] [rbp+6040h]
  char v368; // [rsp+60C2h] [rbp+6042h]
  int v369; // [rsp+60C3h] [rbp+6043h]
  char v370; // [rsp+60C7h] [rbp+6047h]
  __m128i v371; // [rsp+6150h] [rbp+60D0h]
  __int128 v372; // [rsp+6160h] [rbp+60E0h]
  __int128 v373; // [rsp+6170h] [rbp+60F0h]
  __m128i v374; // [rsp+6180h] [rbp+6100h]
  __int128 v375; // [rsp+6190h] [rbp+6110h]
  __int128 v376; // [rsp+61A0h] [rbp+6120h]
  __m128i v377; // [rsp+61B0h] [rbp+6130h]
  __m128i v378; // [rsp+61C0h] [rbp+6140h] BYREF
  __m128i v379; // [rsp+61D0h] [rbp+6150h] BYREF
  __m128i v380; // [rsp+61E0h] [rbp+6160h]
  __m128i v381; // [rsp+61F0h] [rbp+6170h]
  __m128i v382; // [rsp+6200h] [rbp+6180h]
  __int64 v383; // [rsp+6210h] [rbp+6190h]
  __m128i v384; // [rsp+6220h] [rbp+61A0h] BYREF
  __m128i v385; // [rsp+6230h] [rbp+61B0h]
  __m128i v386; // [rsp+6240h] [rbp+61C0h]
  __m128i v387; // [rsp+6250h] [rbp+61D0h]
  __int64 v388; // [rsp+6260h] [rbp+61E0h]
  __m128i v389; // [rsp+6270h] [rbp+61F0h] BYREF
  __m128i v390; // [rsp+6280h] [rbp+6200h]
  __m128i v391; // [rsp+6290h] [rbp+6210h]
  __m128i v392; // [rsp+62A0h] [rbp+6220h]
  __int64 v393; // [rsp+62B0h] [rbp+6230h]
  __int128 v394; // [rsp+62C0h] [rbp+6240h]
  __int128 v395; // [rsp+62D0h] [rbp+6250h]
  __int128 v396; // [rsp+62E0h] [rbp+6260h]
  __int128 v397; // [rsp+62F0h] [rbp+6270h]
  __int64 v398; // [rsp+6300h] [rbp+6280h]
  __m128i v399; // [rsp+6310h] [rbp+6290h]
  __m128i v400; // [rsp+6320h] [rbp+62A0h]
  __m128i v401; // [rsp+6330h] [rbp+62B0h]
  __m128i v402; // [rsp+6340h] [rbp+62C0h]
  __int64 v403; // [rsp+6350h] [rbp+62D0h]
  __m128i v404; // [rsp+6360h] [rbp+62E0h] BYREF
  __m128i v405; // [rsp+6370h] [rbp+62F0h]
  __m128i v406; // [rsp+6380h] [rbp+6300h]
  __m128i v407; // [rsp+6390h] [rbp+6310h]
  __int64 v408; // [rsp+63A0h] [rbp+6320h]
  __m128i v409; // [rsp+63B0h] [rbp+6330h] BYREF
  __m128i v410; // [rsp+63C0h] [rbp+6340h]
  __m128i v411; // [rsp+63D0h] [rbp+6350h]
  __m128i v412; // [rsp+63E0h] [rbp+6360h]
  __int64 v413; // [rsp+63F0h] [rbp+6370h]
  __m128i v414; // [rsp+6400h] [rbp+6380h] BYREF
  __int128 v415; // [rsp+6410h] [rbp+6390h]
  __int64 v416; // [rsp+6420h] [rbp+63A0h]
  __int128 v417; // [rsp+64F0h] [rbp+6470h] BYREF
  __int128 v418; // [rsp+6500h] [rbp+6480h]
  __int64 v419; // [rsp+6510h] [rbp+6490h]
  __int64 v420; // [rsp+6528h] [rbp+64A8h]
  char *v421; // [rsp+6530h] [rbp+64B0h]
  __int64 v422; // [rsp+6538h] [rbp+64B8h]
  volatile signed __int64 **v423; // [rsp+6540h] [rbp+64C0h]
  volatile signed __int64 *v424; // [rsp+6548h] [rbp+64C8h]
  volatile signed __int64 **v425; // [rsp+6550h] [rbp+64D0h]
  _BYTE *v426; // [rsp+6558h] [rbp+64D8h]
  __int64 v427; // [rsp+6560h] [rbp+64E0h]
  char *v428; // [rsp+6568h] [rbp+64E8h]
  __int64 v429; // [rsp+6570h] [rbp+64F0h]
  __int64 v430; // [rsp+6578h] [rbp+64F8h]
  volatile signed __int64 **v431; // [rsp+6580h] [rbp+6500h]
  volatile signed __int64 *v432; // [rsp+6588h] [rbp+6508h]
  volatile signed __int64 **v433; // [rsp+6590h] [rbp+6510h]
  _BYTE *v434; // [rsp+6598h] [rbp+6518h]
  __int64 v435; // [rsp+65A0h] [rbp+6520h]
  char *v436; // [rsp+65A8h] [rbp+6528h]
  __int64 v437; // [rsp+65B0h] [rbp+6530h]
  _BYTE *v438; // [rsp+65B8h] [rbp+6538h]
  __int64 v439; // [rsp+65C0h] [rbp+6540h]
  unsigned __int64 v440; // [rsp+65C8h] [rbp+6548h]
  __int64 v441; // [rsp+65D0h] [rbp+6550h]
  __int64 v442; // [rsp+65D8h] [rbp+6558h]
  volatile signed __int64 **v443; // [rsp+65E0h] [rbp+6560h]
  volatile signed __int64 *v444; // [rsp+65E8h] [rbp+6568h]
  volatile signed __int64 **v445; // [rsp+65F0h] [rbp+6570h]
  _BYTE *v446; // [rsp+65F8h] [rbp+6578h]
  __int64 v447; // [rsp+6600h] [rbp+6580h]
  char *v448; // [rsp+6608h] [rbp+6588h]
  const __m128i *v449; // [rsp+6610h] [rbp+6590h]
  __int64 v450; // [rsp+6618h] [rbp+6598h]
  volatile signed __int64 **v451; // [rsp+6620h] [rbp+65A0h]
  volatile signed __int64 *v452; // [rsp+6628h] [rbp+65A8h]
  volatile signed __int64 **v453; // [rsp+6630h] [rbp+65B0h]
  _BYTE *v454; // [rsp+6638h] [rbp+65B8h]
  __int64 v455; // [rsp+6640h] [rbp+65C0h]
  char *v456; // [rsp+6648h] [rbp+65C8h]
  __int64 v457; // [rsp+6650h] [rbp+65D0h]
  const __m128i *v458; // [rsp+6658h] [rbp+65D8h]
  __int64 v459; // [rsp+6660h] [rbp+65E0h]
  __int8 *v460; // [rsp+6668h] [rbp+65E8h]
  const __m128i *v461; // [rsp+6670h] [rbp+65F0h]
  __int64 v462; // [rsp+6678h] [rbp+65F8h]
  volatile signed __int64 **v463; // [rsp+6680h] [rbp+6600h]
  volatile signed __int64 *v464; // [rsp+6688h] [rbp+6608h]
  volatile signed __int64 **v465; // [rsp+6690h] [rbp+6610h]
  _BYTE *v466; // [rsp+6698h] [rbp+6618h]
  __int64 v467; // [rsp+66A0h] [rbp+6620h]
  char *v468; // [rsp+66A8h] [rbp+6628h]
  __int64 v469; // [rsp+66B0h] [rbp+6630h]
  const __m128i *v470; // [rsp+66B8h] [rbp+6638h]
  volatile signed __int64 **v471; // [rsp+66C0h] [rbp+6640h]
  volatile signed __int64 *v472; // [rsp+66C8h] [rbp+6648h]
  volatile signed __int64 **v473; // [rsp+66D0h] [rbp+6650h]
  _BYTE *v474; // [rsp+66D8h] [rbp+6658h]
  __int64 v475; // [rsp+66E0h] [rbp+6660h]
  char *v476; // [rsp+66E8h] [rbp+6668h]
  __int64 v477; // [rsp+66F8h] [rbp+6678h]
  char *v478; // [rsp+6700h] [rbp+6680h]
  volatile signed __int64 **v479; // [rsp+6718h] [rbp+6698h]
  __int64 v480; // [rsp+6720h] [rbp+66A0h]
  char *v481; // [rsp+6728h] [rbp+66A8h]
  __int64 v482; // [rsp+6730h] [rbp+66B0h]
  _BYTE *v483; // [rsp+6738h] [rbp+66B8h]
  __int64 v484; // [rsp+6760h] [rbp+66E0h]
  char *v485; // [rsp+6768h] [rbp+66E8h]
  __int64 v486; // [rsp+6770h] [rbp+66F0h]
  char *v487; // [rsp+6778h] [rbp+66F8h]
  volatile signed __int64 **v488; // [rsp+6780h] [rbp+6700h]
  volatile signed __int64 **v489; // [rsp+6788h] [rbp+6708h]
  _BYTE *v490; // [rsp+6790h] [rbp+6710h]
  __int64 v491; // [rsp+6798h] [rbp+6718h]
  volatile signed __int64 **v492; // [rsp+67A0h] [rbp+6720h]
  volatile signed __int64 *v493; // [rsp+67A8h] [rbp+6728h]
  volatile signed __int64 **v494; // [rsp+67B0h] [rbp+6730h]
  _BYTE *v495; // [rsp+67B8h] [rbp+6738h]
  __int64 v496; // [rsp+67C0h] [rbp+6740h]
  __int64 v497; // [rsp+67C8h] [rbp+6748h]
  volatile signed __int64 **v498; // [rsp+67D0h] [rbp+6750h]
  volatile signed __int64 *v499; // [rsp+67D8h] [rbp+6758h]
  volatile signed __int64 **v500; // [rsp+67E0h] [rbp+6760h]
  _BYTE *v501; // [rsp+67E8h] [rbp+6768h]
  __int64 v502; // [rsp+67F0h] [rbp+6770h]
  __int64 v503; // [rsp+67F8h] [rbp+6778h]
  __int64 v504; // [rsp+6800h] [rbp+6780h]
  volatile signed __int64 **v505; // [rsp+6808h] [rbp+6788h]
  volatile signed __int64 *v506; // [rsp+6810h] [rbp+6790h]
  volatile signed __int64 **v507; // [rsp+6818h] [rbp+6798h]
  _BYTE *v508; // [rsp+6820h] [rbp+67A0h]
  __int64 v509; // [rsp+6828h] [rbp+67A8h]
  __int64 v510; // [rsp+6830h] [rbp+67B0h]
  unsigned __int64 v511; // [rsp+6838h] [rbp+67B8h]
  __int64 v512; // [rsp+6840h] [rbp+67C0h]
  __int64 v513; // [rsp+6848h] [rbp+67C8h]
  volatile signed __int64 **v514; // [rsp+6850h] [rbp+67D0h]
  volatile signed __int64 *v515; // [rsp+6858h] [rbp+67D8h]
  volatile signed __int64 **v516; // [rsp+6860h] [rbp+67E0h]
  _BYTE *v517; // [rsp+6868h] [rbp+67E8h]
  __int64 v518; // [rsp+6870h] [rbp+67F0h]
  __int64 v519; // [rsp+6878h] [rbp+67F8h]
  _BYTE *v520; // [rsp+6880h] [rbp+6800h]
  __int64 v521; // [rsp+6888h] [rbp+6808h]
  unsigned __int64 v522; // [rsp+6890h] [rbp+6810h]
  __int64 v523; // [rsp+6898h] [rbp+6818h]
  __int64 v524; // [rsp+68A0h] [rbp+6820h]
  volatile signed __int64 **v525; // [rsp+68A8h] [rbp+6828h]
  volatile signed __int64 *v526; // [rsp+68B0h] [rbp+6830h]
  volatile signed __int64 **v527; // [rsp+68B8h] [rbp+6838h]
  _BYTE *v528; // [rsp+68C0h] [rbp+6840h]
  __int64 v529; // [rsp+68C8h] [rbp+6848h]
  __int64 v530; // [rsp+68D0h] [rbp+6850h]
  volatile signed __int64 **v531; // [rsp+68D8h] [rbp+6858h]
  volatile signed __int64 *v532; // [rsp+68E0h] [rbp+6860h]
  volatile signed __int64 **v533; // [rsp+68E8h] [rbp+6868h]
  _BYTE *v534; // [rsp+68F0h] [rbp+6870h]
  __int64 v535; // [rsp+68F8h] [rbp+6878h]
  char *v536; // [rsp+6900h] [rbp+6880h]
  __int64 v537; // [rsp+6908h] [rbp+6888h]
  __int64 v538; // [rsp+6910h] [rbp+6890h]
  __int64 v539; // [rsp+6918h] [rbp+6898h]
  __int64 v540; // [rsp+6920h] [rbp+68A0h]
  volatile signed __int64 **v541; // [rsp+6928h] [rbp+68A8h]
  volatile signed __int64 *v542; // [rsp+6930h] [rbp+68B0h]
  volatile signed __int64 **v543; // [rsp+6938h] [rbp+68B8h]
  _BYTE *v544; // [rsp+6940h] [rbp+68C0h]
  __int64 v545; // [rsp+6948h] [rbp+68C8h]
  __int64 v546; // [rsp+6950h] [rbp+68D0h]
  volatile signed __int64 **v547; // [rsp+6958h] [rbp+68D8h]
  volatile signed __int64 *v548; // [rsp+6960h] [rbp+68E0h]
  volatile signed __int64 **v549; // [rsp+6968h] [rbp+68E8h]
  _BYTE *v550; // [rsp+6970h] [rbp+68F0h]
  __int64 v551; // [rsp+6978h] [rbp+68F8h]
  char *v552; // [rsp+6980h] [rbp+6900h]
  __int64 v553; // [rsp+6988h] [rbp+6908h]
  __int64 v554; // [rsp+6990h] [rbp+6910h]
  volatile signed __int64 **v555; // [rsp+6998h] [rbp+6918h]
  volatile signed __int64 *v556; // [rsp+69A0h] [rbp+6920h]
  volatile signed __int64 **v557; // [rsp+69A8h] [rbp+6928h]
  _BYTE *v558; // [rsp+69B0h] [rbp+6930h]
  __int64 v559; // [rsp+69B8h] [rbp+6938h]
  char *v560; // [rsp+69C0h] [rbp+6940h]
  __int64 v561; // [rsp+69C8h] [rbp+6948h]
  __int64 v562; // [rsp+69D0h] [rbp+6950h]
  volatile signed __int64 **v563; // [rsp+69D8h] [rbp+6958h]
  volatile signed __int64 *v564; // [rsp+69E0h] [rbp+6960h]
  volatile signed __int64 **v565; // [rsp+69E8h] [rbp+6968h]
  _BYTE *v566; // [rsp+69F0h] [rbp+6970h]
  __int64 v567; // [rsp+69F8h] [rbp+6978h]
  volatile signed __int64 **v568; // [rsp+6A00h] [rbp+6980h]
  volatile signed __int64 *v569; // [rsp+6A08h] [rbp+6988h]
  volatile signed __int64 **v570; // [rsp+6A10h] [rbp+6990h]
  _BYTE *v571; // [rsp+6A18h] [rbp+6998h]
  __int64 v572; // [rsp+6A20h] [rbp+69A0h]
  char *v573; // [rsp+6A28h] [rbp+69A8h]
  __int64 v574; // [rsp+6A30h] [rbp+69B0h]
  volatile signed __int64 **v575; // [rsp+6A38h] [rbp+69B8h]
  volatile signed __int64 *v576; // [rsp+6A40h] [rbp+69C0h]
  volatile signed __int64 **v577; // [rsp+6A48h] [rbp+69C8h]
  _BYTE *v578; // [rsp+6A50h] [rbp+69D0h]
  __int64 v579; // [rsp+6A58h] [rbp+69D8h]
  char *v580; // [rsp+6A60h] [rbp+69E0h]
  __int64 v581; // [rsp+6A68h] [rbp+69E8h]
  __int64 v582; // [rsp+6A70h] [rbp+69F0h]
  __int64 v583; // [rsp+6A78h] [rbp+69F8h]
  volatile signed __int64 **v584; // [rsp+6A80h] [rbp+6A00h]
  volatile signed __int64 *v585; // [rsp+6A88h] [rbp+6A08h]
  volatile signed __int64 **v586; // [rsp+6A90h] [rbp+6A10h]
  _BYTE *v587; // [rsp+6A98h] [rbp+6A18h]
  __int64 v588; // [rsp+6AA0h] [rbp+6A20h]
  __int64 v589; // [rsp+6AA8h] [rbp+6A28h]
  volatile signed __int64 **v590; // [rsp+6AB0h] [rbp+6A30h]
  volatile signed __int64 *v591; // [rsp+6AB8h] [rbp+6A38h]
  volatile signed __int64 **v592; // [rsp+6AC0h] [rbp+6A40h]
  _BYTE *v593; // [rsp+6AC8h] [rbp+6A48h]
  __int64 v594; // [rsp+6AD0h] [rbp+6A50h]
  char *v595; // [rsp+6AD8h] [rbp+6A58h]
  __int64 v596; // [rsp+6AE0h] [rbp+6A60h]
  const __m128i *v597; // [rsp+6AE8h] [rbp+6A68h]
  __int64 v598; // [rsp+6AF0h] [rbp+6A70h]
  __int64 v599; // [rsp+6AF8h] [rbp+6A78h]
  volatile signed __int64 **v600; // [rsp+6B00h] [rbp+6A80h]
  volatile signed __int64 *v601; // [rsp+6B08h] [rbp+6A88h]
  volatile signed __int64 **v602; // [rsp+6B10h] [rbp+6A90h]
  _BYTE *v603; // [rsp+6B18h] [rbp+6A98h]
  __int64 v604; // [rsp+6B20h] [rbp+6AA0h]
  char *v605; // [rsp+6B28h] [rbp+6AA8h]
  __int64 v606; // [rsp+6B30h] [rbp+6AB0h]
  const __m128i *v607; // [rsp+6B38h] [rbp+6AB8h]
  __int64 v608; // [rsp+6B40h] [rbp+6AC0h]
  const __m128i *v609; // [rsp+6B48h] [rbp+6AC8h]
  __int64 v610; // [rsp+6B50h] [rbp+6AD0h]
  __int64 v611; // [rsp+6B58h] [rbp+6AD8h]
  __int64 v612; // [rsp+6B60h] [rbp+6AE0h]
  volatile signed __int64 **v613; // [rsp+6B68h] [rbp+6AE8h]
  volatile signed __int64 *v614; // [rsp+6B70h] [rbp+6AF0h]
  volatile signed __int64 **v615; // [rsp+6B78h] [rbp+6AF8h]
  _BYTE *v616; // [rsp+6B80h] [rbp+6B00h]
  __int64 v617; // [rsp+6B88h] [rbp+6B08h]
  _BYTE *v618; // [rsp+6B90h] [rbp+6B10h]
  const __m128i *v619; // [rsp+6B98h] [rbp+6B18h]
  _BYTE *v620; // [rsp+6BA0h] [rbp+6B20h]
  __int64 v621; // [rsp+6BA8h] [rbp+6B28h]
  __int64 v622; // [rsp+6BB0h] [rbp+6B30h]
  volatile signed __int64 **v623; // [rsp+6BB8h] [rbp+6B38h]
  volatile signed __int64 *v624; // [rsp+6BC0h] [rbp+6B40h]
  volatile signed __int64 **v625; // [rsp+6BC8h] [rbp+6B48h]
  _BYTE *v626; // [rsp+6BD0h] [rbp+6B50h]
  __int64 v627; // [rsp+6BD8h] [rbp+6B58h]
  char *v628; // [rsp+6BE0h] [rbp+6B60h]
  __int64 v629; // [rsp+6BE8h] [rbp+6B68h]
  const __m128i *v630; // [rsp+6BF0h] [rbp+6B70h]
  __int64 v631; // [rsp+6BF8h] [rbp+6B78h]
  volatile signed __int64 **v632; // [rsp+6C00h] [rbp+6B80h]
  volatile signed __int64 *v633; // [rsp+6C08h] [rbp+6B88h]
  volatile signed __int64 **v634; // [rsp+6C10h] [rbp+6B90h]
  _BYTE *v635; // [rsp+6C18h] [rbp+6B98h]
  __int64 v636; // [rsp+6C20h] [rbp+6BA0h]
  char *v637; // [rsp+6C28h] [rbp+6BA8h]
  volatile signed __int64 **v638; // [rsp+6C30h] [rbp+6BB0h]
  __int64 v639; // [rsp+6C38h] [rbp+6BB8h]
  char *v640; // [rsp+6C40h] [rbp+6BC0h]
  __int64 v641; // [rsp+6C48h] [rbp+6BC8h]
  __int64 v642; // [rsp+6C50h] [rbp+6BD0h]
  volatile signed __int64 **v643; // [rsp+6C58h] [rbp+6BD8h]
  volatile signed __int64 *v644; // [rsp+6C60h] [rbp+6BE0h]
  volatile signed __int64 **v645; // [rsp+6C68h] [rbp+6BE8h]
  _BYTE *v646; // [rsp+6C70h] [rbp+6BF0h]
  __int64 v647; // [rsp+6C78h] [rbp+6BF8h]
  char *v648; // [rsp+6C80h] [rbp+6C00h]
  int v649; // [rsp+6C88h] [rbp+6C08h]
  int v650; // [rsp+6C8Ch] [rbp+6C0Ch]
  __int64 v651; // [rsp+6C90h] [rbp+6C10h]
  char *v652; // [rsp+6C98h] [rbp+6C18h]
  __int64 v653; // [rsp+6CA0h] [rbp+6C20h]
  __int64 v654; // [rsp+6CA8h] [rbp+6C28h]
  volatile signed __int64 **v655; // [rsp+6CB0h] [rbp+6C30h]
  volatile signed __int64 *v656; // [rsp+6CB8h] [rbp+6C38h]
  volatile signed __int64 **v657; // [rsp+6CC0h] [rbp+6C40h]
  _BYTE *v658; // [rsp+6CC8h] [rbp+6C48h]
  __int64 v659; // [rsp+6CD0h] [rbp+6C50h]
  char *v660; // [rsp+6CD8h] [rbp+6C58h]
  char *v661; // [rsp+6CE0h] [rbp+6C60h]
  __int64 v662; // [rsp+6CE8h] [rbp+6C68h]
  unsigned __int64 v663; // [rsp+6CF0h] [rbp+6C70h]
  __int64 v664; // [rsp+6CF8h] [rbp+6C78h]
  __int64 v665; // [rsp+6D00h] [rbp+6C80h]
  volatile signed __int64 **v666; // [rsp+6D08h] [rbp+6C88h]
  volatile signed __int64 *v667; // [rsp+6D10h] [rbp+6C90h]
  volatile signed __int64 **v668; // [rsp+6D18h] [rbp+6C98h]
  _BYTE *v669; // [rsp+6D20h] [rbp+6CA0h]
  __int64 v670; // [rsp+6D28h] [rbp+6CA8h]
  char *v671; // [rsp+6D30h] [rbp+6CB0h]
  __int64 v672; // [rsp+6D38h] [rbp+6CB8h]
  __int64 v673; // [rsp+6D40h] [rbp+6CC0h]
  volatile signed __int64 **v674; // [rsp+6D48h] [rbp+6CC8h]
  volatile signed __int64 *v675; // [rsp+6D50h] [rbp+6CD0h]
  volatile signed __int64 **v676; // [rsp+6D58h] [rbp+6CD8h]
  _BYTE *v677; // [rsp+6D60h] [rbp+6CE0h]
  __int64 v678; // [rsp+6D68h] [rbp+6CE8h]
  char *v679; // [rsp+6D70h] [rbp+6CF0h]
  int v680; // [rsp+6D7Ch] [rbp+6CFCh]
  int v681; // [rsp+6D80h] [rbp+6D00h]
  int v682; // [rsp+6D84h] [rbp+6D04h]
  __int64 v683; // [rsp+6D88h] [rbp+6D08h]
  volatile signed __int64 **v684; // [rsp+6D90h] [rbp+6D10h]
  volatile signed __int64 *v685; // [rsp+6D98h] [rbp+6D18h]
  volatile signed __int64 **v686; // [rsp+6DA0h] [rbp+6D20h]
  _BYTE *v687; // [rsp+6DA8h] [rbp+6D28h]
  __int64 v688; // [rsp+6DB0h] [rbp+6D30h]
  char *v689; // [rsp+6DB8h] [rbp+6D38h]
  __int64 v690; // [rsp+6DC0h] [rbp+6D40h]
  char *v691; // [rsp+6DC8h] [rbp+6D48h]
  __int64 v692; // [rsp+6DD0h] [rbp+6D50h]
  char *v693; // [rsp+6DD8h] [rbp+6D58h]
  __int64 v694; // [rsp+6DE0h] [rbp+6D60h]
  char *v695; // [rsp+6DE8h] [rbp+6D68h]
  __int64 v696; // [rsp+6DF0h] [rbp+6D70h]
  _BYTE *v697; // [rsp+6DF8h] [rbp+6D78h]
  __int64 v698; // [rsp+6E00h] [rbp+6D80h]
  unsigned __int64 v699; // [rsp+6E08h] [rbp+6D88h]
  __int64 v700; // [rsp+6E10h] [rbp+6D90h]
  __int64 v701; // [rsp+6E18h] [rbp+6D98h]
  volatile signed __int64 **v702; // [rsp+6E20h] [rbp+6DA0h]
  volatile signed __int64 *v703; // [rsp+6E28h] [rbp+6DA8h]
  volatile signed __int64 **v704; // [rsp+6E30h] [rbp+6DB0h]
  _BYTE *v705; // [rsp+6E38h] [rbp+6DB8h]
  __int64 v706; // [rsp+6E40h] [rbp+6DC0h]
  char *v707; // [rsp+6E48h] [rbp+6DC8h]
  _QWORD *v708; // [rsp+6E50h] [rbp+6DD0h]
  __int64 v709; // [rsp+6E58h] [rbp+6DD8h]
  char *v710; // [rsp+6E60h] [rbp+6DE0h]
  __int64 v711; // [rsp+6E68h] [rbp+6DE8h]
  volatile signed __int64 **v712; // [rsp+6E70h] [rbp+6DF0h]
  char *v713; // [rsp+6E78h] [rbp+6DF8h]
  __int64 v714; // [rsp+6E80h] [rbp+6E00h]
  __int64 v715; // [rsp+6E88h] [rbp+6E08h]
  char *v716; // [rsp+6E90h] [rbp+6E10h]
  __int64 v717; // [rsp+6E98h] [rbp+6E18h]
  char *v718; // [rsp+6EA0h] [rbp+6E20h]
  char v719; // [rsp+6EAFh] [rbp+6E2Fh] BYREF
  _BYTE *v720; // [rsp+6EB0h] [rbp+6E30h]
  const __m128i *v721; // [rsp+6EB8h] [rbp+6E38h]
  const __m128i *v722; // [rsp+6EC0h] [rbp+6E40h]
  const __m128i *v723; // [rsp+6EC8h] [rbp+6E48h]
  const __m128i *v724; // [rsp+6ED0h] [rbp+6E50h]
  __int64 v725; // [rsp+6ED8h] [rbp+6E58h]
  const __m128i *v726; // [rsp+6EE0h] [rbp+6E60h]
  __int64 v727; // [rsp+6EE8h] [rbp+6E68h]
  const __m128i *v728; // [rsp+6EF0h] [rbp+6E70h]
  unsigned __int64 v729; // [rsp+6EF8h] [rbp+6E78h]
  const __m128i *v730; // [rsp+6F00h] [rbp+6E80h]
  const __m128i *v731; // [rsp+6F08h] [rbp+6E88h]
  __int64 v732; // [rsp+6F10h] [rbp+6E90h]
  const __m128i *v733; // [rsp+6F18h] [rbp+6E98h]
  __int64 v734; // [rsp+6F20h] [rbp+6EA0h]
  const __m128i *v735; // [rsp+6F28h] [rbp+6EA8h]
  __int64 v736; // [rsp+6F30h] [rbp+6EB0h]
  __int64 v737; // [rsp+6F38h] [rbp+6EB8h]
  const __m128i *v738; // [rsp+6F40h] [rbp+6EC0h]
  unsigned __int64 v739; // [rsp+6F48h] [rbp+6EC8h]
  const __m128i *v740; // [rsp+6F50h] [rbp+6ED0h]
  __int64 v741; // [rsp+6F58h] [rbp+6ED8h]
  volatile signed __int64 **v742; // [rsp+6F60h] [rbp+6EE0h]
  volatile signed __int64 *v743; // [rsp+6F68h] [rbp+6EE8h]
  __int64 v744; // [rsp+6F70h] [rbp+6EF0h]
  _BYTE *v745; // [rsp+6F78h] [rbp+6EF8h]
  volatile signed __int64 **v746; // [rsp+6F80h] [rbp+6F00h]
  char *v747; // [rsp+6F88h] [rbp+6F08h]
  __int64 v748; // [rsp+6F90h] [rbp+6F10h]
  __int64 v749; // [rsp+6F98h] [rbp+6F18h]

  *(_QWORD *)&v4 = a1;
  v749 = -2;
  v8 = a3;
  v9 = a2;
  v10 = v4;
  v11 = *(unsigned __int8 *)(a2 + 476);
  v748 = a2;
  switch ( v11 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 472) = 0;
      *(_QWORD *)(a2 + 465) = 0;
      *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 456);
      v12 = sub_140AEBC50();
      v13 = v748;
      *(_BYTE *)(v748 + 464) = v12;
      endpoint_for_protocol(v327, *(_QWORD *)(v13 + 272), v12);
      v5 = *(_QWORD *)&v327[8];
      v4 = *(_OWORD *)&v327[16];
      if ( v327[0] )
      {
        v14 = -1;
        v15 = *(volatile signed __int64 **)&v327[8];
        v16 = v748;
        goto LABEL_267;
      }
      *(_BYTE *)(v748 + 475) = 0;
      v342.m256i_i64[0] = v5;
      *(_OWORD *)&v342.m256i_u64[1] = v4;
      v747 = (char *)v4;
      v691 = (char *)v4;
      v690 = v5;
      sub_140F919E0(v327, &v342);
      v6 = *(char **)v327;
      if ( *(_QWORD *)v327 == -1 )
      {
        v744 = v5;
        sub_141684120(&v342, &v327[8], 136);
        v319.m128i_i64[0] = (__int64)&v342;
        v319.m128i_i64[1] = (__int64)sub_140F8DAB0;
        sub_14149C0F0(&v334, &unk_141767600, &v319);
        v691 = v747;
        v690 = v744;
        sub_1405E1460((__int64)&v342);
        v745 = (_BYTE *)v334.m128i_i64[1];
        v743 = (volatile signed __int64 *)v334.m128i_i64[0];
        *((_QWORD *)&v4 + 1) = v335;
        v14 = -1;
        goto LABEL_203;
      }
      v7 = *(_QWORD *)&v327[24];
      sub_141684120(&v342, &v327[32], 192);
      v34 = _mm_loadu_si128((const __m128i *)&v327[8]);
      v9 = v748;
      *(_BYTE *)(v748 + 466) = 1;
      *(_QWORD *)v9 = v6;
      *(__m128i *)(v9 + 8) = v34;
      *(_QWORD *)(v9 + 24) = v7;
      sub_141684120(v9 + 32, &v342, 192);
      if ( *(_BYTE *)(v9 + 464) == 2 )
        goto LABEL_21;
      v80 = *(_QWORD *)(v9 + 272);
      v81 = *(_QWORD *)(v80 + 32);
      v82 = *(_QWORD *)(v80 + 40);
      v6 = v747;
      v716 = v747;
      v715 = v5;
      v83.m128i_i64[0] = sub_14033BC10(v81, v82);
      v317 = v83;
      if ( !v83.m128i_i64[1] )
      {
        v716 = v6;
        v715 = v5;
        sub_1406787B0(v327);
        v745 = *(_BYTE **)&v327[8];
        v743 = *(volatile signed __int64 **)v327;
        *((_QWORD *)&v4 + 1) = *(_QWORD *)&v327[16];
        goto LABEL_200;
      }
      v319.m128i_i64[0] = (__int64)&v317;
      v319.m128i_i64[1] = (__int64)sub_14041F680;
      v716 = v6;
      v715 = v5;
      sub_14149C0F0(&v334, &unk_141767CE0, &v319);
      v744 = v5;
      v741 = v334.m128i_i64[1];
      v746 = (volatile signed __int64 **)v334.m128i_i64[0];
      if ( !(_QWORD)v335 )
        goto LABEL_76;
      v84 = 0;
      break;
    case 1LL:
      sub_1416C3400(&off_141767D38, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_141767D38, a2, a3, a4);
    case 3LL:
      v745 = (_BYTE *)(a2 + 11160);
      v24 = *(unsigned __int8 *)(a2 + 11160);
      v746 = (volatile signed __int64 **)(a2 + 480);
      switch ( v24 )
      {
        case 0LL:
          goto LABEL_22;
        case 1LL:
          v638 = v746;
          sub_1416C3400(&off_141767168, a2, a3, a4);
        case 2LL:
          JUMPOUT(0x140622BC6LL);
        case 3LL:
          v743 = (volatile signed __int64 *)(a2 + 11153);
          v26 = *(unsigned __int8 *)(a2 + 11153);
          v742 = (volatile signed __int64 **)(a2 + 704);
          switch ( v26 )
          {
            case 0LL:
              v27 = *(_BYTE *)(a2 + 11152);
              v28 = *(_QWORD *)(a2 + 704);
              v29 = a2 + 712;
              if ( v28 == -1 )
                goto LABEL_18;
              goto LABEL_23;
            case 1LL:
              v490 = v745;
              v489 = v746;
              v488 = v742;
              sub_1416C3400(&off_141767180, a2, a3, a4);
            case 2LL:
              v490 = v745;
              v489 = v746;
              v488 = v742;
              sub_1416C3420(&off_141767180, a2, a3, a4);
            case 3LL:
              v661 = (char *)(a2 + 1899);
              v79 = a2 + 1224;
              switch ( *(_BYTE *)(a2 + 1899) )
              {
                case 0:
                  v740 = (const __m128i *)v4;
                  v35 = a3;
                  v27 = *(_BYTE *)(a2 + 1898);
                  v43 = *(_QWORD *)(a2 + 1224);
                  v39 = a2 + 1224;
                  break;
                case 1:
                  v495 = v745;
                  v494 = v746;
                  v493 = v743;
                  v492 = v742;
                  v491 = a2 + 1224;
                  sub_1416C3400(&off_141767E78, a2, a3, a4);
                case 2:
                  v495 = v745;
                  v494 = v746;
                  v493 = v743;
                  v492 = v742;
                  v491 = a2 + 1224;
                  sub_1416C3420(&off_141767E78, a2, a3, a4);
                case 3:
                  v71 = (char *)(a2 + 1944);
                  v70 = (const __m128i *)(a2 + 1920);
                  switch ( *(_BYTE *)(a2 + 1944) )
                  {
                    case 0:
                      v741 = a2 + 1224;
                      goto LABEL_49;
                    case 1:
                      v566 = v745;
                      v565 = v746;
                      v564 = v743;
                      v563 = v742;
                      v562 = a2 + 1224;
                      v561 = a2 + 1920;
                      sub_1416C3400(&off_141766DF8, a2, a3, a4);
                    case 2:
                      v566 = v745;
                      v565 = v746;
                      v564 = v743;
                      v563 = v742;
                      v562 = a2 + 1224;
                      v561 = a2 + 1920;
                      sub_1416C3420(&off_141766DF8, a2, a3, a4);
                    case 3:
                      v740 = (const __m128i *)(a2 + 1920);
                      v741 = a2 + 1224;
                      goto LABEL_52;
                    case 4:
                      v104 = (_BYTE *)(a2 + 2104);
                      v105 = a2 + 2000;
                      switch ( *(_BYTE *)(v9 + 2104) )
                      {
                        case 0:
                          v106 = (__int8 *)(v9 + 2104);
                          break;
                        case 1:
                          v587 = v745;
                          v586 = v746;
                          v585 = v743;
                          v584 = v742;
                          v583 = v9 + 1224;
                          JUMPOUT(0x1406230A2LL);
                        case 2:
                          v587 = v745;
                          v586 = v746;
                          v585 = v743;
                          v584 = v742;
                          v583 = v9 + 1224;
                          v582 = v9 + 1920;
                          v581 = v9 + 2000;
                          sub_1416C3420(&off_141767A90, v105, a3, a4);
                        case 3:
                          v733 = (const __m128i *)(v9 + 2000);
                          v739 = v9 + 2096;
                          v117 = *(unsigned __int8 *)(v9 + 2096);
                          v732 = v9 + 2032;
                          switch ( v117 )
                          {
                            case 0LL:
                              v118 = *(_QWORD *)(v9 + 2032);
                              v119 = *(_QWORD *)(v9 + 2040);
                              v120 = (_BYTE *)v739;
                              v121 = v732;
                              v122 = __PAIR128__(v119, v118);
                              goto LABEL_296;
                            case 1LL:
                              v616 = v745;
                              v615 = v746;
                              v614 = v743;
                              v613 = v742;
                              v612 = v9 + 1224;
                              v611 = v9 + 1920;
                              v610 = v9 + 2104;
                              v609 = v733;
                              v608 = v732;
                              sub_1416C3400(&off_141767A78, v105, a3, a4);
                            case 2LL:
                              v616 = v745;
                              v615 = v746;
                              v614 = v743;
                              v613 = v742;
                              v612 = v9 + 1224;
                              v611 = v9 + 1920;
                              v610 = v9 + 2104;
                              v609 = v733;
                              v608 = v732;
                              sub_1416C3420(&off_141767A78, v105, a3, a4);
                            case 3LL:
                              v734 = v9 + 2104;
                              v740 = (const __m128i *)(v9 + 1920);
                              v741 = v9 + 1224;
                              v144 = *(_QWORD *)(v9 + 2088);
                              goto LABEL_299;
                          }
                      }
                      goto LABEL_294;
                  }
                case 4:
                  v88 = (char *)(a2 + 2600);
                  v89 = *(unsigned __int8 *)(a2 + 2600);
                  v737 = a2 + 1904;
                  v741 = a2 + 1224;
                  switch ( v89 )
                  {
                    case 0LL:
                      v718 = (char *)(a2 + 2600);
                      v740 = *(const __m128i **)(a2 + 1952);
                      v5 = a2 + 1904;
                      goto LABEL_331;
                    case 1LL:
                      v501 = v745;
                      v500 = v746;
                      v499 = v743;
                      v498 = v742;
                      v497 = a2 + 1224;
                      v496 = v737;
                      sub_1416C3400(&off_1417670D8, a2, a3, a4);
                    case 2LL:
                      v501 = v745;
                      v500 = v746;
                      v499 = v743;
                      v498 = v742;
                      v497 = a2 + 1224;
                      v496 = v737;
                      sub_1416C3420(&off_1417670D8, a2, a3, a4);
                    case 3LL:
                      goto LABEL_100;
                    case 4LL:
                      v718 = (char *)(a2 + 2600);
                      v110 = (__m128i *)(a2 + 2649);
                      v111 = *(unsigned __int8 *)(a2 + 2649);
                      v112 = (const __m128i *)(a2 + 2608);
                      if ( *(_BYTE *)(v9 + 2649) )
                      {
                        if ( v111 == 1 )
                        {
                          v544 = v745;
                          v543 = v746;
                          v542 = v743;
                          v541 = v742;
                          v540 = v741;
                          v539 = v737;
                          v538 = v9 + 2649;
                          v537 = v9 + 2608;
                          sub_1416C3400(&off_1417673B8, v112, a3, a4);
                        }
                        v544 = v745;
                        v543 = v746;
                        v542 = v743;
                        v541 = v742;
                        v540 = v741;
                        v539 = v737;
                        v538 = v9 + 2649;
                        v537 = v9 + 2608;
                        sub_1416C3420(&off_1417673B8, v112, a3, a4);
                      }
                      LOBYTE(v113) = *(_BYTE *)(v9 + 2648);
                      goto LABEL_104;
                    case 5LL:
                      goto LABEL_98;
                    case 6LL:
                      v739 = a2 + 11144;
                      v107 = a2 + 2608;
                      switch ( *(_BYTE *)(a2 + 11144) )
                      {
                        case 0:
                          v718 = (char *)(a2 + 2600);
                          goto LABEL_114;
                        case 1:
                          v508 = v745;
                          v507 = v746;
                          v506 = v743;
                          v505 = v742;
                          v504 = a2 + 1224;
                          v503 = v737;
                          v502 = a2 + 2608;
                          sub_1416C3400(&off_141766CD0, a2, a3, a4);
                        case 2:
                          v508 = v745;
                          v507 = v746;
                          v506 = v743;
                          v505 = v742;
                          v504 = a2 + 1224;
                          JUMPOUT(0x140623108LL);
                        case 3:
                          v720 = (_BYTE *)(a2 + 11136);
                          v130 = a2 + 4008;
                          switch ( *(_BYTE *)(a2 + 11136) )
                          {
                            case 0:
                              v718 = (char *)(a2 + 2600);
                              break;
                            case 1:
                              v517 = v745;
                              v516 = v746;
                              v515 = v743;
                              v514 = v742;
                              v513 = a2 + 1224;
                              v512 = v737;
                              v511 = v739;
                              v510 = a2 + 2608;
                              v509 = a2 + 4008;
                              sub_1416C3400(&off_141767210, a2, a3, a4);
                            case 2:
                              v517 = v745;
                              v516 = v746;
                              v515 = v743;
                              v514 = v742;
                              v513 = a2 + 1224;
                              v512 = v737;
                              v511 = v739;
                              v510 = a2 + 2608;
                              v509 = a2 + 4008;
                              sub_1416C3420(&off_141767210, a2, a3, a4);
                            case 3:
                              v713 = (char *)(a2 + 6808);
                              v131 = a2 + 5408;
                              switch ( *(_BYTE *)(a2 + 6808) )
                              {
                                case 0:
                                  v718 = (char *)(a2 + 2600);
                                  goto LABEL_116;
                                case 1:
                                  v528 = v745;
                                  v527 = v746;
                                  v526 = v743;
                                  v525 = v742;
                                  v524 = v741;
                                  v523 = v737;
                                  v522 = v739;
                                  v521 = a2 + 2608;
                                  v520 = v720;
                                  v519 = a2 + 4008;
                                  v518 = a2 + 5408;
                                  sub_1416C3400(&off_141767228, a2, a3, a4);
                                case 2:
                                  v528 = v745;
                                  v527 = v746;
                                  v526 = v743;
                                  v525 = v742;
                                  v524 = v741;
                                  v523 = v737;
                                  v522 = v739;
                                  v521 = a2 + 2608;
                                  v520 = v720;
                                  v519 = a2 + 4008;
                                  v518 = a2 + 5408;
                                  sub_1416C3420(&off_141767228, a2, a3, a4);
                                case 3:
                                  v714 = a2 + 5408;
                                  v717 = a2 + 4008;
                                  v727 = a2 + 2608;
                                  goto LABEL_117;
                                case 4:
                                  v714 = a2 + 5408;
                                  v717 = a2 + 4008;
                                  v727 = a2 + 2608;
                                  goto LABEL_132;
                              }
                          }
                          goto LABEL_115;
                      }
                  }
              }
              goto LABEL_24;
          }
      }
      goto LABEL_22;
    case 4LL:
      v740 = (const __m128i *)v4;
      v17 = (_BYTE *)(a2 + 488);
      v18 = *(volatile signed __int64 ***)(a2 + 488);
      if ( v18 != (volatile signed __int64 **)-1LL )
      {
        v743 = *(volatile signed __int64 **)(a2 + 488);
        v19 = v8;
        goto LABEL_211;
      }
      v48 = *(volatile signed __int64 ***)(a2 + 528);
      goto LABEL_216;
    case 5LL:
      goto LABEL_6;
  }
  do
  {
    v85 = *(_BYTE *)(v334.m128i_i64[1] + v84);
    if ( v85 > 0x1Fu )
    {
      if ( v85 == 127 )
        goto LABEL_67;
    }
    else if ( v85 != 9 )
    {
LABEL_67:
      v334.m128i_i64[0] = (__int64)&v719;
      v334.m128i_i64[1] = (__int64)sub_141444540;
      sub_14149C0F0(&v342, &unk_14176763C, &v334);
      v745 = (_BYTE *)v342.m256i_i64[1];
      v743 = (volatile signed __int64 *)v342.m256i_i64[0];
      *((_QWORD *)&v4 + 1) = v342.m256i_i64[2];
      v16 = v748;
      v5 = v744;
      v6 = v747;
      if ( !v746 )
        goto LABEL_201;
      sub_140001660(v741, v746, 1);
      v14 = -1;
      if ( *(_BYTE *)(v16 + 466) )
        goto LABEL_202;
      goto LABEL_266;
    }
    ++v84;
  }
  while ( (_QWORD)v335 != v84 );
LABEL_76:
  sub_1414464F0(v327, v334.m128i_i64[1], v335);
  v327[32] = 0;
  v91 = _mm_loadu_si128((const __m128i *)v327);
  *(_OWORD *)&v342.m256i_u64[2] = *(_OWORD *)&v327[16];
  *(__m128i *)v342.m256i_i8 = v91;
  *(_QWORD *)&v343 = *(_QWORD *)&v327[32];
  v745 = (_BYTE *)v91.m128i_i64[1];
  v92 = *(_QWORD *)&v327[16];
  v7 = v342.m256i_i64[3];
  LODWORD(v307) = *(_DWORD *)((char *)&v343 + 1);
  *(_DWORD *)((char *)&v307 + 3) = DWORD1(v343);
  v94 = v748;
  if ( v746 )
    sub_140001660(v741, v746, 1);
  *(_QWORD *)v327 = v91.m128i_i64[0];
  *(_QWORD *)&v327[8] = v745;
  *(_QWORD *)&v327[16] = v92;
  *(_QWORD *)&v327[24] = v7;
  v327[32] = 0;
  *(_DWORD *)&v327[33] = v307;
  *(_DWORD *)&v327[36] = *(_DWORD *)((char *)&v307 + 3);
  v335 = xmmword_141767D00;
  v334 = _mm_loadu_si128((const __m128i *)&xmmword_141767CF0);
  v95 = v747;
  v716 = v747;
  v715 = v744;
  v96 = v94;
  v5 = v744;
  sub_1406C1420(&v342, v96, &v334, v327);
  if ( (_BYTE)v343 != 2 )
  {
    v97 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v342.m256i_i64[0] + 32);
    v716 = v95;
    v715 = v5;
    v97(&v342.m256i_u64[3], v342.m256i_i64[1], v342.m256i_i64[2]);
  }
  v335 = xmmword_1417646A8;
  v334 = _mm_loadu_si128((const __m128i *)&xmmword_141764698);
  *(_QWORD *)v327 = off_14177A978;
  *(_QWORD *)&v327[8] = aAimamiTypemami;
  *(_OWORD *)&v327[16] = 0xFu;
  v327[32] = 0;
  v716 = v95;
  v715 = v5;
  sub_1406C1420(&v342, v748, &v334, v327);
  if ( (_BYTE)v343 != 2 )
  {
    v98 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v342.m256i_i64[0] + 32);
    v716 = v95;
    v715 = v5;
    v98(&v342.m256i_u64[3], v342.m256i_i64[1], v342.m256i_i64[2]);
  }
  v9 = v748;
LABEL_21:
  *(_BYTE *)(v9 + 466) = 0;
  v746 = (volatile signed __int64 **)(v9 + 480);
  sub_141684120(v9 + 480, v9, 224);
  v745 = (_BYTE *)(v9 + 11160);
  *(_BYTE *)(v9 + 11160) = 0;
LABEL_22:
  v742 = (volatile signed __int64 **)(v9 + 704);
  sub_141684120(v9 + 704, v746, 224);
  *(_QWORD *)(v9 + 928) = 2;
  *(_WORD *)(v9 + 11152) = 0;
  v743 = (volatile signed __int64 *)(v9 + 11153);
  v27 = 0;
  v28 = *(_QWORD *)(v9 + 704);
  v29 = v9 + 712;
  if ( v28 == -1 )
  {
LABEL_18:
    v729 = v8;
    v744 = v5;
    sub_141684120(v9 + 1008, v29, 136);
    *(_QWORD *)(v9 + 1000) = -1;
    v30 = *(_QWORD *)(v9 + 1008);
    v31 = (_QWORD *)v9;
    v32 = *(_QWORD *)(v9 + 1016);
    v734 = v31[128];
    v736 = v31[129];
    v725 = v31[130];
    v732 = v31[131];
    v721 = (const __m128i *)v31[132];
    v726 = (const __m128i *)v31[133];
    v728 = (const __m128i *)v31[134];
    v724 = (const __m128i *)v31[135];
    v722 = (const __m128i *)v31[136];
    v730 = (const __m128i *)v31[137];
    v723 = (const __m128i *)v31[138];
    v738 = (const __m128i *)v31[139];
    v731 = (const __m128i *)v31[140];
    v733 = (const __m128i *)v31[141];
    v735 = (const __m128i *)v31[142];
    v33 = 2;
    goto LABEL_198;
  }
LABEL_23:
  v740 = (const __m128i *)v10;
  v35 = v8;
  *(_QWORD *)(v9 + 1000) = v28;
  sub_141684120(v9 + 1008, v29, 136);
  v36 = *(_OWORD *)(v9 + 864);
  v37 = *(_OWORD *)(v9 + 880);
  v38 = *(_OWORD *)(v9 + 896);
  *(_OWORD *)(v9 + 1144) = *(_OWORD *)(v9 + 848);
  *(_OWORD *)(v9 + 1160) = v36;
  *(_OWORD *)(v9 + 1176) = v37;
  *(_OWORD *)(v9 + 1192) = v38;
  *(_OWORD *)(v9 + 1208) = *(_OWORD *)(v9 + 912);
  sub_141684120(&v327[8], v9 + 1000, 224);
  sub_141684120(v303, v327, 232);
  v39 = v9 + 1224;
  *(_QWORD *)(v9 + 1224) = 0;
  sub_141684120(v9 + 1232, v303, 232);
  v40 = *(_OWORD *)(v9 + 944);
  v41 = *(_OWORD *)(v9 + 960);
  v42 = *(_OWORD *)(v9 + 976);
  *(_OWORD *)(v9 + 1464) = *(_OWORD *)(v9 + 928);
  *(_OWORD *)(v9 + 1480) = v40;
  *(_OWORD *)(v9 + 1496) = v41;
  *(_OWORD *)(v9 + 1512) = v42;
  *(_QWORD *)(v9 + 1528) = *(_QWORD *)(v9 + 992);
  *(_BYTE *)(v9 + 1898) = v27;
  v661 = (char *)(v9 + 1899);
  *(_BYTE *)(v9 + 1899) = 0;
  v43 = 0;
LABEL_24:
  *(_BYTE *)(v9 + 1902) = 1;
  sub_141684120(v9 + 1536, v9 + 1240, 224);
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
  v637 = v747;
  v636 = v5;
  v635 = v745;
  v634 = v746;
  v633 = v743;
  v632 = v742;
  v741 = v39;
  v631 = v39;
  sub_140656580(v327, v9 + 1536);
  v30 = *(_QWORD *)v327;
  v45 = *(_OWORD *)&v327[16];
  v729 = v35;
  v744 = v5;
  if ( *(_QWORD *)v327 != -1 )
  {
    v736 = *(_QWORD *)&v327[24];
    v734 = *(_QWORD *)&v327[16];
    v732 = *(_QWORD *)&v327[40];
    v725 = *(_QWORD *)&v327[32];
    v726 = *(const __m128i **)&v327[56];
    v721 = *(const __m128i **)&v327[48];
    v724 = *(const __m128i **)&v327[72];
    v9 = *(_QWORD *)&v327[64];
    v730 = *(const __m128i **)&v327[88];
    v722 = *(const __m128i **)&v327[80];
    v723 = *(const __m128i **)&v327[96];
    v731 = (const __m128i *)v328.m128i_i64[1];
    v738 = (const __m128i *)v328.m128i_i64[0];
    v733 = (const __m128i *)v329.m128i_i64[0];
    LOWORD(v46) = *(_WORD *)&v327[8];
    v47 = *(_QWORD *)&v327[8] >> 16;
    v735 = (const __m128i *)v329.m128i_i64[1];
    v5 = v748;
    v10 = (__int64)v740;
LABEL_192:
    v161 = v744;
    if ( *(_QWORD *)(v5 + 1904) )
    {
      v162 = *(volatile signed __int64 **)(v748 + 1912);
      if ( v162 )
      {
        if ( !_InterlockedDecrement64(v162) )
        {
          v580 = v747;
          v579 = v161;
          v578 = v745;
          v577 = v746;
          v576 = v743;
          v575 = v742;
          v574 = v741;
          sub_1410D21C0(v748 + 1912);
        }
      }
    }
    v728 = (const __m128i *)v9;
    v163 = v748;
    *(_BYTE *)(v748 + 1901) = 0;
    v573 = v747;
    v572 = v161;
    v571 = v745;
    v570 = v746;
    v569 = v743;
    v568 = v742;
    v164 = v741;
    v567 = v741;
    sub_1405E15C0(v163 + 1536);
    v33 = 2;
    v165 = (_BYTE *)v748;
    goto LABEL_197;
  }
  v61 = v748;
  *(_QWORD *)(v748 + 1832) = *(_QWORD *)&v327[8];
  *(_OWORD *)(v61 + 1840) = v45;
  v62 = (_BYTE *)(v61 + 1632);
  v689 = v747;
  v688 = v5;
  v687 = v745;
  v686 = v746;
  v685 = v743;
  v684 = v742;
  v683 = v741;
  v63 = sub_141443A30(v61 + 1632);
  v10 = (__int64)v740;
  v8 = v729;
  if ( v63 == 1 )
  {
    v65 = v64;
    *(_QWORD *)&v327[8] = 0x8000000000000003uLL;
    *(_QWORD *)v327 = 12;
    v66 = v747;
    goto LABEL_48;
  }
  v5 = v748;
  v66 = v747;
  if ( *v62 != 2 )
  {
LABEL_69:
    v736 = *(_QWORD *)&v327[24];
    v734 = *(_QWORD *)&v327[16];
    v732 = *(_QWORD *)&v327[40];
    v725 = *(_QWORD *)&v327[32];
    v726 = *(const __m128i **)&v327[56];
    v721 = *(const __m128i **)&v327[48];
    v724 = *(const __m128i **)&v327[72];
    v9 = *(_QWORD *)&v327[64];
    v730 = *(const __m128i **)&v327[88];
    v722 = *(const __m128i **)&v327[80];
    v723 = *(const __m128i **)&v327[96];
    v731 = (const __m128i *)v328.m128i_i64[1];
    v738 = (const __m128i *)v328.m128i_i64[0];
    v86 = (const __m128i *)v329.m128i_i64[1];
    v87 = v329.m128i_i64[0];
    v30 = 12;
    v47 = 0x800000000000LL;
    LOWORD(v46) = 3;
    goto LABEL_289;
  }
  v99 = *(_QWORD *)(v748 + 1640);
  v100 = *(_WORD **)(v99 + 8);
  v101 = *(_QWORD *)(v99 + 16);
  if ( v101 == 2 )
  {
    v103 = (unsigned __int16)__ROL2__(*v100, 8) - 30579;
    v65 = 80;
  }
  else
  {
    if ( v101 != 3 )
      goto LABEL_69;
    v102 = __ROL2__(*v100, 8);
    if ( v102 == 30579 )
      v103 = *((unsigned __int8 *)v100 + 2) - 115;
    else
      v103 = 2 * (v102 >= 0x7773u) - 1;
    v65 = 443;
  }
  *(_QWORD *)&v327[8] = 0x8000000000000003uLL;
  *(_QWORD *)v327 = 12;
  if ( v103 )
    goto LABEL_69;
LABEL_48:
  v689 = v66;
  v688 = v744;
  v687 = v745;
  v686 = v746;
  v685 = v743;
  v684 = v742;
  v683 = v741;
  sub_1405E1460((__int64)v327);
  v67 = v748 + 1832;
  v68 = v748 + 1896;
  *(_WORD *)(v748 + 1896) = v65;
  *(_QWORD *)v327 = v67;
  *(_QWORD *)&v327[8] = sub_1400015F0;
  *(_QWORD *)&v327[16] = v68;
  *(_QWORD *)&v327[24] = sub_1414AAE30;
  v689 = v747;
  v688 = v744;
  v687 = v745;
  v686 = v746;
  v685 = v743;
  v684 = v742;
  v683 = v741;
  sub_14149C0F0(&v342, &unk_141767E70, v327);
  v308 = v342.m256i_i64[2];
  v69 = *(_OWORD *)v342.m256i_i8;
  v307 = *(_OWORD *)v342.m256i_i8;
  v9 = v748;
  v70 = (const __m128i *)(v748 + 1920);
  *(_QWORD *)(v748 + 1936) = v342.m256i_i64[2];
  *(_OWORD *)(v9 + 1920) = v69;
  v71 = (char *)(v9 + 1944);
  *(_BYTE *)(v9 + 1944) = 0;
LABEL_49:
  *(_WORD *)(v9 + 1945) = 0;
  v318 = v70[1].m128i_i64[0];
  v740 = v70;
  v317 = _mm_loadu_si128(v70);
  sub_1413083B0(v327, &v317);
  if ( v317.m128i_i64[0] )
    sub_140001660(v317.m128i_i64[1], v317.m128i_i64[0], 1);
  v72 = _mm_loadu_si128((const __m128i *)v327);
  *(_OWORD *)&v342.m256i_u64[2] = *(_OWORD *)&v327[16];
  *(__m128i *)v342.m256i_i8 = v72;
  v9 = v748;
  *(_OWORD *)(v748 + 1968) = *(_OWORD *)&v327[16];
  *(__m128i *)(v9 + 1952) = v72;
LABEL_52:
  v735 = (const __m128i *)(v9 + 1952);
  sub_1412E76A0(v327, v9 + 1952, v8);
  v73 = *(_DWORD *)v327;
  if ( *(_DWORD *)v327 == -1 )
  {
    v90 = 3;
    goto LABEL_328;
  }
  v74 = *(_DWORD *)&v327[4];
  v738 = *(const __m128i **)&v327[8];
  v736 = *(_QWORD *)&v327[24];
  v75 = _mm_loadu_si128((const __m128i *)&v327[16]);
  v76 = *(_QWORD *)&v327[32];
  if ( v735->m128i_i16[0] == -1 )
  {
    v660 = v747;
    v659 = v744;
    v658 = v745;
    v657 = v746;
    v656 = v743;
    v655 = v742;
    v654 = v741;
    v653 = (__int64)v740;
    v5 = *(unsigned int *)v327;
    sub_140B03640(v748 + 1960);
    v73 = v5;
  }
  if ( v73 == 2 )
  {
    v77 = 2;
    v46 = (unsigned __int64)v738;
    v9 = v748;
    v78 = v747;
    goto LABEL_321;
  }
  v93 = v748;
  *(_WORD *)(v748 + 1945) = 1;
  *(_QWORD *)(v93 + 1952) = 0;
  *(_DWORD *)(v93 + 1960) = v73;
  *(_DWORD *)(v93 + 1964) = v74;
  *(_QWORD *)(v93 + 1968) = v738;
  *(__m128i *)(v93 + 1976) = v75;
  *(_QWORD *)(v93 + 1992) = v76;
  while ( 1 )
  {
    v238 = (_DWORD *)(v93 + 1960);
    LODWORD(v104) = v73;
    v680 = v73;
    v597 = v738;
    v596 = v736;
    v595 = v747;
    v594 = v744;
    v593 = v745;
    v592 = v746;
    v591 = v743;
    v590 = v742;
    v589 = v741;
    v70 = v740;
    v588 = (__int64)v740;
    sub_1412E7B60(&v334, v93 + 1960);
    if ( v334.m128i_i16[0] == 2 )
      break;
    v240 = (__m128i *)v748;
    v105 = v748 + 2000;
    v241 = v334;
    *(_OWORD *)(v748 + 2016) = v335;
    v240[125] = v241;
    v106 = &v240[131].m128i_i8[8];
    v240[131].m128i_i8[8] = 0;
    v79 = v741;
LABEL_294:
    v242 = _mm_loadu_si128((const __m128i *)v105);
    *(_OWORD *)&v342.m256i_u64[2] = *(_OWORD *)(v105 + 16);
    *(__m128i *)v342.m256i_i8 = v242;
    LODWORD(v735) = (_DWORD)v104;
    v650 = (int)v104;
    v470 = v738;
    v469 = v736;
    v468 = v747;
    v467 = v744;
    v466 = v745;
    v465 = v746;
    v464 = v743;
    v463 = v742;
    v462 = v79;
    v461 = v70;
    v460 = v106;
    v733 = (const __m128i *)v105;
    v459 = v105;
    sub_1413128B0(v327, &v342);
    v104 = v106;
    v122 = *(_OWORD *)v327;
    if ( *(_QWORD *)v327 == -1 )
    {
      v740 = v70;
      v739 = *(_QWORD *)&v327[8];
      goto LABEL_308;
    }
    v243 = v748;
    v121 = v748 + 2032;
    *(_OWORD *)(v748 + 2032) = *(_OWORD *)v327;
    v120 = (_BYTE *)(v243 + 2096);
    *(_BYTE *)(v243 + 2096) = 0;
LABEL_296:
    v682 = (int)v735;
    v630 = v738;
    v629 = v736;
    v628 = v747;
    v627 = v744;
    v626 = v745;
    v625 = v746;
    v624 = v743;
    v623 = v742;
    v622 = v79;
    v621 = (__int64)v70;
    v620 = v104;
    v619 = v733;
    v618 = v120;
    v732 = v121;
    v617 = v121;
    sub_1412EB920(v327, v122, *((_QWORD *)&v122 + 1));
    if ( *(_QWORD *)v327 == 2 )
    {
      v739 = *(_QWORD *)&v327[8];
      goto LABEL_307;
    }
    v739 = (unsigned __int64)v120;
    v734 = (__int64)v104;
    v740 = v70;
    v741 = v79;
    v320 = *(_QWORD *)&v327[32];
    v319 = *(__m128i *)&v327[16];
    v244 = (__m128i *)v748;
    v144 = v748 + 2048;
    *(_OWORD *)(v748 + 2048) = *(_OWORD *)v327;
    v244[129] = _mm_load_si128(&v319);
    v244[130].m128i_i64[0] = v320;
    v244[130].m128i_i64[1] = v144;
LABEL_299:
    sub_1412F0FB0(v327, v144, v8);
    if ( v327[9] == 0xFF )
    {
      *(_BYTE *)v739 = 3;
      v104 = (_BYTE *)v734;
LABEL_327:
      *v104 = 3;
      v90 = 4;
LABEL_328:
      *v71 = v90;
      v135 = 3;
      v16 = v748;
      v134 = v661;
LABEL_329:
      *v134 = v135;
      *(_BYTE *)v743 = 3;
      *v745 = 3;
      *(_QWORD *)v10 = -2;
      result = 3;
      goto LABEL_268;
    }
    v245 = *(_QWORD *)v327;
    v104 = (_BYTE *)v734;
    v120 = (_BYTE *)v739;
    if ( v327[9] == 2 )
      goto LABEL_306;
    if ( *(_QWORD *)(v748 + 2072) == -1 )
      sub_1416C3040(&off_141782F58);
    if ( (sub_141312890(v748 + 2072, *(_QWORD *)v327) & 1) != 0 )
    {
      v104 = (_BYTE *)v734;
      v120 = (_BYTE *)v739;
LABEL_306:
      v739 = v245;
      v619 = v733;
      v617 = v732;
      v682 = (int)v735;
      v630 = v738;
      v629 = v736;
      v628 = v747;
      v627 = v744;
      v626 = v745;
      v625 = v746;
      v624 = v743;
      v623 = v742;
      v79 = v741;
      v622 = v741;
      v70 = v740;
      v621 = (__int64)v740;
      v620 = v104;
      v618 = v120;
      sub_1405E7F40(v748 + 2048);
LABEL_307:
      v740 = v70;
      *v120 = 1;
LABEL_308:
      v741 = v79;
      *v104 = 1;
      if ( !*(_QWORD *)(v748 + 1952) )
        goto LABEL_310;
LABEL_309:
      sub_140018650(v748 + 1952);
      goto LABEL_310;
    }
    v104 = (_BYTE *)v734;
    v120 = (_BYTE *)v739;
    if ( v245 )
      goto LABEL_306;
    v77 = *(_QWORD *)(v748 + 2048);
    v46 = *(_QWORD *)(v748 + 2056);
    v730 = *(const __m128i **)(v748 + 2064);
    v724 = *(const __m128i **)(v748 + 2072);
    v731 = *(const __m128i **)(v748 + 2080);
    *(_BYTE *)(v748 + 2096) = 1;
    if ( v77 == -1 )
      goto LABEL_327;
    *v104 = 1;
    if ( v77 != 2 )
    {
      v290 = v748;
      v5 = (__int64)v731;
      if ( *(_DWORD *)(v748 + 1960) )
      {
        v291 = *(_QWORD *)(v748 + 1984);
        if ( v291 )
          sub_140001660(*(_QWORD *)(v748 + 1968), 32 * v291, 4);
      }
      v150 = *(_QWORD *)(v290 + 1952) == 0;
      v78 = v747;
      if ( !v150 )
      {
        v681 = (int)v735;
        v607 = v738;
        v606 = v736;
        v605 = v747;
        v604 = v744;
        v603 = v745;
        v602 = v746;
        v601 = v743;
        v600 = v742;
        v599 = v741;
        v598 = (__int64)v740;
        sub_140018650(v748 + 1952);
      }
      v9 = v748;
      *(_BYTE *)(v748 + 1945) = 0;
      goto LABEL_321;
    }
    v739 = v46;
    if ( *(_QWORD *)(v748 + 1952) )
      goto LABEL_309;
LABEL_310:
    v93 = v748;
    *(_BYTE *)(v748 + 1945) = 1;
    *(_QWORD *)(v93 + 1952) = v739;
    v73 = (int)v735;
  }
  v9 = v748;
  if ( *v238 )
  {
    v246 = *(_QWORD *)(v748 + 1984);
    if ( v246 )
      sub_140001660(*(_QWORD *)(v748 + 1968), 32 * v246, 4);
  }
  *(_BYTE *)(v9 + 1945) = 0;
  v247 = *(_QWORD *)(v9 + 1952);
  v78 = v747;
  if ( !v247 )
  {
    v649 = (int)v104;
    v458 = v738;
    v457 = v736;
    v456 = v747;
    v455 = v744;
    v454 = v745;
    v453 = v746;
    v452 = v743;
    v451 = v742;
    v450 = v741;
    v449 = v70;
    LOBYTE(v239) = 20;
    v247 = sub_14146B840(v239, aCouldNotResolv, 32);
    v9 = v748;
  }
  v46 = v247;
  *(_BYTE *)(v9 + 1945) = 0;
  v77 = 2;
  v5 = (__int64)v731;
LABEL_321:
  *(_BYTE *)(v9 + 1946) = 0;
  *(_BYTE *)(v9 + 1944) = 1;
  v747 = v78;
  v689 = v78;
  v688 = v744;
  v687 = v745;
  v686 = v746;
  v685 = v743;
  v684 = v742;
  v683 = v741;
  sub_1405B1E40(v740);
  if ( v77 == 2 )
  {
LABEL_325:
    v729 = v8;
    v47 = v46 >> 16;
    v30 = 5;
    v5 = v748;
LABEL_289:
    v735 = v86;
    v733 = (const __m128i *)v87;
    v237 = *(_QWORD *)(v5 + 1832);
    if ( v237 )
      sub_140001660(*(_QWORD *)(v5 + 1840), v237, 1);
    goto LABEL_192;
  }
  v9 = v748;
  v248 = v748 + 1856;
  *(_QWORD *)(v748 + 1856) = v77;
  *(_QWORD *)(v9 + 1864) = v46;
  *(_QWORD *)(v9 + 1872) = v730;
  *(_QWORD *)(v9 + 1880) = v724;
  *(_QWORD *)(v9 + 1888) = v5;
  if ( *(_BYTE *)(v9 + 1900) == 1 )
  {
    v740 = (const __m128i *)v248;
    LOBYTE(v86) = 1;
    v46 = sub_1412EB5D0(v248, v86);
    v9 = v748;
    v248 = (__int64)v740;
    if ( v46 )
    {
      v689 = v747;
      v688 = v744;
      v687 = v745;
      v686 = v746;
      v685 = v743;
      v684 = v742;
      v683 = v741;
      sub_1405E7F40((__int64)v740);
      goto LABEL_325;
    }
  }
  *(_BYTE *)(v9 + 1902) = 0;
  sub_141684120(v304, v9 + 1536, 224);
  v249 = *(_OWORD *)(v9 + 1776);
  v250 = *(_OWORD *)(v9 + 1792);
  v251 = *(_OWORD *)(v9 + 1808);
  v394 = *(_OWORD *)(v9 + 1760);
  v395 = v249;
  v396 = v250;
  v397 = v251;
  v398 = *(_QWORD *)(v9 + 1824);
  *(_BYTE *)(v9 + 1901) = 0;
  v5 = v9 + 1904;
  v252 = *(_QWORD *)(v9 + 1904);
  v253 = *(_QWORD *)(v9 + 1912);
  v254 = *(_OWORD *)(v248 + 16);
  *(_OWORD *)(v9 + 1904) = *(_OWORD *)v248;
  *(_OWORD *)(v9 + 1920) = v254;
  *(_QWORD *)(v9 + 1936) = *(_QWORD *)(v248 + 32);
  *(_QWORD *)(v9 + 1944) = v252;
  v740 = (const __m128i *)v253;
  *(_QWORD *)(v9 + 1952) = v253;
  sub_141684120(v9 + 1960, v304, 224);
  v255 = v395;
  v256 = v396;
  v257 = v397;
  *(_OWORD *)(v9 + 2184) = v394;
  *(_OWORD *)(v9 + 2200) = v255;
  *(_OWORD *)(v9 + 2216) = v256;
  *(_OWORD *)(v9 + 2232) = v257;
  *(_QWORD *)(v9 + 2248) = v398;
  v718 = (char *)(v9 + 2600);
  *(_BYTE *)(v9 + 2600) = 0;
LABEL_331:
  *(_BYTE *)(v9 + 2601) = 0;
  v258 = *(_QWORD *)(v9 + 1960);
  v708 = *(_QWORD **)(v9 + 1968);
  v729 = *(_QWORD *)(v9 + 1976);
  v734 = *(_QWORD *)(v9 + 1984);
  v736 = *(_QWORD *)(v9 + 1992);
  v259 = *(_QWORD *)(v9 + 2000);
  v732 = *(_QWORD *)(v9 + 2008);
  v260 = *(_DWORD **)(v9 + 2016);
  v261 = *(const __m128i **)(v9 + 2024);
  v262 = *(const __m128i **)(v9 + 2032);
  v724 = *(const __m128i **)(v9 + 2040);
  v263 = *(const __m128i **)(v9 + 2048);
  v730 = *(const __m128i **)(v9 + 2056);
  v264 = *(const __m128i **)(v9 + 2064);
  v738 = *(const __m128i **)(v9 + 2072);
  v731 = *(const __m128i **)(v9 + 2080);
  v265 = *(const __m128i **)(v9 + 2088);
  v735 = *(const __m128i **)(v9 + 2096);
  *(_BYTE *)(v9 + 2603) = 1;
  v419 = *(_QWORD *)(v5 + 32);
  v266 = *(_OWORD *)v5;
  v418 = *(_OWORD *)(v5 + 16);
  v417 = v266;
  *(_QWORD *)(v9 + 2320) = *(_QWORD *)(v9 + 2248);
  *(_OWORD *)(v9 + 2304) = *(_OWORD *)(v9 + 2232);
  *(_OWORD *)(v9 + 2288) = *(_OWORD *)(v9 + 2216);
  *(_OWORD *)(v9 + 2272) = *(_OWORD *)(v9 + 2200);
  *(__m128i *)(v9 + 2256) = _mm_loadu_si128((const __m128i *)(v9 + 2184));
  *(_BYTE *)(v9 + 2602) = 1;
  v267 = *(_QWORD *)(v9 + 1944);
  *(_QWORD *)(v9 + 2328) = v267;
  *(_QWORD *)(v9 + 2336) = v740;
  v737 = v5;
  if ( v258 == -1 )
  {
    v733 = v265;
    v723 = v264;
    v722 = v263;
    v728 = v262;
    v726 = v261;
    v721 = (const __m128i *)v260;
    v725 = v259;
    v113 = v729;
    v739 = v729 >> 8;
    v88 = v747;
    v272 = v738;
    v142 = v744;
    v136 = (__int64)v708;
    v273 = v736;
    goto LABEL_342;
  }
  *(_QWORD *)(v9 + 2344) = v258;
  *(_QWORD *)(v9 + 2352) = v708;
  *(_QWORD *)(v9 + 2360) = v729;
  *(_QWORD *)(v9 + 2368) = v734;
  *(_QWORD *)(v9 + 2376) = v736;
  *(_QWORD *)(v9 + 2384) = v259;
  *(_QWORD *)(v9 + 2392) = v732;
  *(_QWORD *)(v9 + 2400) = v260;
  *(_QWORD *)(v9 + 2408) = v261;
  *(_QWORD *)(v9 + 2416) = v262;
  *(_QWORD *)(v9 + 2424) = v724;
  *(_QWORD *)(v9 + 2432) = v263;
  *(_QWORD *)(v9 + 2440) = v730;
  *(_QWORD *)(v9 + 2448) = v264;
  *(_QWORD *)(v9 + 2456) = v738;
  *(_QWORD *)(v9 + 2464) = v731;
  *(_QWORD *)(v9 + 2472) = v265;
  *(_QWORD *)(v9 + 2480) = v735;
  v268 = *(_OWORD *)(v9 + 2120);
  v269 = *(_OWORD *)(v9 + 2136);
  v270 = *(_OWORD *)(v9 + 2152);
  *(_OWORD *)(v9 + 2488) = *(_OWORD *)(v9 + 2104);
  *(_OWORD *)(v9 + 2504) = v268;
  *(_OWORD *)(v9 + 2520) = v269;
  *(_OWORD *)(v9 + 2536) = v270;
  *(__m128i *)(v9 + 2552) = _mm_loadu_si128((const __m128i *)(v9 + 2168));
  v88 = v747;
  v560 = v747;
  v559 = v744;
  v558 = v745;
  v557 = v746;
  v556 = v743;
  v555 = v742;
  v554 = v741;
  v553 = v5;
  sub_140656580(v327, v9 + 2344);
  v113 = *(_QWORD *)&v327[8];
  v271 = *(_OWORD *)&v327[16];
  if ( *(_QWORD *)v327 != -1 )
  {
    v136 = *(_QWORD *)v327;
    v736 = *(_QWORD *)&v327[24];
    v734 = *(_QWORD *)&v327[16];
    v732 = *(_QWORD *)&v327[40];
    v725 = *(_QWORD *)&v327[32];
    v726 = *(const __m128i **)&v327[56];
    v721 = *(const __m128i **)&v327[48];
    v724 = *(const __m128i **)&v327[72];
    v728 = *(const __m128i **)&v327[64];
    v730 = *(const __m128i **)&v327[88];
    v722 = *(const __m128i **)&v327[80];
    v723 = *(const __m128i **)&v327[96];
    v731 = (const __m128i *)v328.m128i_i64[1];
    v738 = (const __m128i *)v328.m128i_i64[0];
    v733 = (const __m128i *)v329.m128i_i64[0];
    v739 = *(_QWORD *)&v327[8] >> 8;
    v735 = (const __m128i *)v329.m128i_i64[1];
    v9 = v748;
    v142 = v744;
    goto LABEL_341;
  }
  v274 = v748;
  v275 = v748 + 2440;
  *(_BYTE *)(v748 + 2601) = 1;
  *(_QWORD *)(v274 + 2568) = v113;
  *(_OWORD *)(v274 + 2576) = v271;
  v679 = v88;
  v678 = v744;
  v677 = v745;
  v676 = v746;
  v675 = v743;
  v674 = v742;
  v673 = v741;
  v672 = v5;
  sub_140F91CC0(v327, v275);
  v113 = v327[8];
  if ( *(_QWORD *)v327 == -1 )
  {
    v9 = v748;
    v285 = v748 + 2568;
    v7 = v744;
    if ( *(_DWORD *)(v748 + 2328) == 1 )
    {
      *(_BYTE *)(v748 + 2602) = 0;
      v286 = *(_QWORD *)(v9 + 2336);
      *(_QWORD *)(v9 + 2592) = v286;
      if ( !v286 )
      {
        *(_BYTE *)(v9 + 2603) = 0;
        v112 = (const __m128i *)(v9 + 2608);
        v295 = v418;
        *(_OWORD *)(v9 + 2608) = v417;
        *(_OWORD *)(v9 + 2624) = v295;
        *(_QWORD *)(v9 + 2640) = v419;
        *(_BYTE *)(v9 + 2648) = v113;
        v110 = (__m128i *)(v9 + 2649);
        *(_BYTE *)(v9 + 2649) = 0;
LABEL_104:
        *(_QWORD *)&v327[32] = v112[2].m128i_i64[0];
        v114 = _mm_loadu_si128(v112);
        *(__m128i *)&v327[16] = v112[1];
        *(__m128i *)v327 = v114;
        if ( (v113 & 1) != 0 )
        {
          v738 = v112;
          v740 = v110;
          v747 = v88;
          v744 = v7;
          v115 = sub_1405E7F40((__int64)v327);
          si128 = _mm_load_si128((const __m128i *)&xmmword_141763EF0);
          v108 = -1;
          v9 = v748;
          v7 = v744;
          v88 = v747;
          v110 = (__m128i *)v740;
        }
        else
        {
          si128 = _mm_load_si128((const __m128i *)v327);
          v734 = *(_QWORD *)(v9 + 2624);
          v736 = *(_QWORD *)(v9 + 2632);
          v108 = 2;
          v115 = *(_QWORD *)&v327[32];
        }
        v110->m128i_i8[0] = 1;
LABEL_112:
        v738 = v112;
        if ( (_DWORD)v108 == -1 )
        {
          v731 = (const __m128i *)v5;
          v113 = _mm_shuffle_epi32(si128, 238).m128i_u64[0];
          v140 = v113 >> 8;
          v141 = si128.m128i_i64[0];
          v142 = v7;
          v143 = __PAIR128__((unsigned __int64)v735, (unsigned __int64)v733);
          goto LABEL_337;
        }
        v747 = v88;
        v744 = v7;
        v123 = v115;
        v107 = v9 + 2608;
        sub_141684120(v9 + 2608, v9 + 2344, 224);
        *(_QWORD *)(v9 + 2832) = v108;
        *(__m128i *)(v9 + 2840) = si128;
        *(_QWORD *)(v9 + 2856) = v734;
        *(_QWORD *)(v9 + 2864) = v736;
        *(_QWORD *)(v9 + 2872) = v123;
        *(_QWORD *)(v9 + 2880) = v732;
        *(_QWORD *)(v9 + 2888) = v721;
        *(_QWORD *)(v9 + 2896) = v726;
        *(_QWORD *)(v9 + 2904) = v728;
        *(_QWORD *)(v9 + 2912) = v724;
        *(_QWORD *)(v9 + 2920) = v722;
        *(_QWORD *)(v9 + 2928) = v730;
        *(_QWORD *)(v9 + 2936) = v723;
        *(_QWORD *)(v9 + 2944) = v738;
        *(_QWORD *)(v9 + 2952) = v5;
        *(_QWORD *)(v9 + 2960) = v733;
        *(_QWORD *)(v9 + 2968) = v735;
        sub_141684120(v9 + 2976, v302, 960);
        v124 = *(_OWORD *)(v9 + 2272);
        v125 = *(_OWORD *)(v9 + 2288);
        v126 = *(_OWORD *)(v9 + 2304);
        *(_OWORD *)(v9 + 3936) = *(_OWORD *)(v9 + 2256);
        *(_OWORD *)(v9 + 3952) = v124;
        *(_OWORD *)(v9 + 3968) = v125;
        *(_OWORD *)(v9 + 3984) = v126;
        *(_QWORD *)(v9 + 4000) = *(_QWORD *)(v9 + 2320);
        v739 = v9 + 11144;
        *(_BYTE *)(v9 + 11144) = 0;
LABEL_114:
        sub_141684120(&v342, v107, 224);
        sub_141684120(v327, v9 + 2832, 1104);
        v127 = *(_OWORD *)(v9 + 3952);
        v128 = *(_OWORD *)(v9 + 3968);
        v129 = *(_OWORD *)(v9 + 3984);
        v357 = _mm_loadu_si128((const __m128i *)(v9 + 3936));
        v358 = v127;
        v359 = v128;
        v360 = v129;
        v361 = *(_QWORD *)(v9 + 4000);
        sub_141684120(&v332, &v342, 296);
        v130 = v9 + 4008;
        sub_141684120(v9 + 4008, v327, 7128);
        v720 = (_BYTE *)(v9 + 11136);
        *(_BYTE *)(v9 + 11136) = 0;
LABEL_115:
        sub_141684120(&v342, v130, 1104);
        sub_141684120(&v363, v9 + 5112, 296);
        sub_141684120(&v319, &v342, 1400);
        v131 = v9 + 5408;
        sub_141684120(v9 + 5408, &v319, 1400);
        v713 = (char *)(v9 + 6808);
        *(_BYTE *)(v9 + 6808) = 0;
LABEL_116:
        v717 = v130;
        v727 = v107;
        v714 = v131;
        sub_141684120(&v362, v131, 1104);
        sub_141684120(&v342, v9 + 6512, 296);
        sub_141684120(&v334, &v342, 1400);
        sub_141684120(v9 + 6816, &v334, 1400);
        v88 = v718;
LABEL_117:
        v728 = (const __m128i *)(v9 + 6816);
        sub_1405829E0(&v342, v9 + 6816, v8);
        v132 = v342.m256i_i64[0];
        if ( v342.m256i_i64[0] == -2 )
        {
          v133 = 3;
LABEL_119:
          *v713 = v133;
          *v720 = 3;
          *(_BYTE *)v739 = 3;
          v109 = 6;
          goto LABEL_120;
        }
        v718 = v88;
        v136 = v342.m256i_i64[1];
        v734 = v342.m256i_i64[3];
        v729 = v342.m256i_u64[2];
        v725 = *((_QWORD *)&v343 + 1);
        v736 = v343;
        v137 = *((_DWORD **)&v344 + 1);
        v732 = v344;
        v726 = v345;
        v138 = v346;
        v139 = v347;
        v722 = v348;
        v730 = v349;
        v723 = v350;
        v738 = v351;
        v731 = v352;
        v733 = v353;
        v735 = (const __m128i *)v354;
        v740 = (const __m128i *)v355;
        sub_141684120(&v307, v356, 1152);
        sub_141684120(v315, v365, 208);
        if ( v728->m128i_i32[0] != -1 )
        {
          sub_1405E15C0(v728);
          if ( *(_DWORD *)(v748 + 7112) == 2 )
          {
            v707 = v747;
            v706 = v744;
            v705 = v745;
            v704 = v746;
            v703 = v743;
            v702 = v742;
            v701 = v741;
            v700 = v737;
            v699 = v739;
            v698 = v727;
            v697 = v720;
            v696 = v717;
            v695 = v713;
            v694 = v714;
            sub_1405E7F40(v748 + 7120);
          }
          else
          {
            sub_1405E7F40(v748 + 7112);
            v707 = v747;
            v706 = v744;
            v705 = v745;
            v704 = v746;
            v703 = v743;
            v702 = v742;
            v701 = v741;
            v700 = v737;
            v699 = v739;
            v698 = v727;
            v697 = v720;
            v696 = v717;
            v695 = v713;
            v694 = v714;
            sub_1405E8300(v748 + 7152);
          }
        }
        v724 = v139;
        if ( (_DWORD)v132 == -1 )
        {
          v151 = (_QWORD *)v748;
          *(_QWORD *)(v748 + 8336) = v136;
          v151[1043] = v729;
          v151[1044] = v734;
          v151[1045] = v736;
          v151[1046] = v725;
          v151[1047] = v732;
          v721 = (const __m128i *)v137;
          v151[1048] = v137;
          v151[1049] = v726;
          v728 = v138;
          v151[1050] = v138;
          v151[1051] = v139;
          v151[1052] = v722;
          v151[1053] = v730;
          v151[1054] = v723;
          v151[1055] = v738;
          v151[1056] = v731;
          v151[1057] = v733;
          v151[1058] = v735;
          v151[1059] = v740;
          sub_141684120(v151 + 1060, &v307, 1152);
          v151[1041] = -1;
          sub_141684120(&v317, &v307, 1152);
          v33 = 2;
        }
        else
        {
          v145 = v139;
          v9 = v748;
          *(_QWORD *)(v748 + 8328) = v132;
          *(_QWORD *)(v9 + 8336) = v136;
          *(_QWORD *)(v9 + 8344) = v729;
          *(_QWORD *)(v9 + 8352) = v734;
          *(_QWORD *)(v9 + 8360) = v736;
          *(_QWORD *)(v9 + 8368) = v725;
          *(_QWORD *)(v9 + 8376) = v732;
          *(_QWORD *)(v9 + 8384) = v137;
          *(_QWORD *)(v9 + 8392) = v726;
          *(_QWORD *)(v9 + 8400) = v138;
          *(_QWORD *)(v9 + 8408) = v145;
          *(_QWORD *)(v9 + 8416) = v722;
          *(_QWORD *)(v9 + 8424) = v730;
          *(_QWORD *)(v9 + 8432) = v723;
          *(_QWORD *)(v9 + 8440) = v738;
          *(_QWORD *)(v9 + 8448) = v731;
          *(_QWORD *)(v9 + 8456) = v733;
          *(_QWORD *)(v9 + 8464) = v735;
          v708 = (_QWORD *)v136;
          v146 = (__int64)v740;
          *(_QWORD *)(v9 + 8472) = v740;
          sub_141684120(v9 + 8480, &v307, 1152);
          sub_141684120(v9 + 9632, v315, 208);
          sub_141684120(v728, v9 + 8328, 1512);
          v33 = *(_QWORD *)(v9 + 6816);
          if ( v33 != 2 )
          {
            v728 = v138;
            v721 = (const __m128i *)v137;
            sub_141684120(&v317, &v307, 1152);
            sub_141684120(v314, v315, 208);
            v152 = v747;
            v136 = (__int64)v708;
            goto LABEL_138;
          }
          *(_QWORD *)(v9 + 9840) = v708;
          *(_QWORD *)(v9 + 9848) = v729;
          *(_QWORD *)(v9 + 9856) = v734;
          *(_QWORD *)(v9 + 9864) = v736;
          *(_QWORD *)(v9 + 9872) = v725;
          *(_QWORD *)(v9 + 9880) = v732;
          *(_QWORD *)(v9 + 9888) = v137;
          *(_QWORD *)(v9 + 9896) = v726;
          *(_QWORD *)(v9 + 9904) = v138;
          *(_QWORD *)(v9 + 9912) = v724;
          *(_QWORD *)(v9 + 9920) = v722;
          *(_QWORD *)(v9 + 9928) = v730;
          *(_QWORD *)(v9 + 9936) = v723;
          *(_QWORD *)(v9 + 9944) = v738;
          *(_QWORD *)(v9 + 9952) = v731;
          *(_QWORD *)(v9 + 9960) = v733;
          *(_QWORD *)(v9 + 9968) = v735;
          *(_QWORD *)(v9 + 9976) = v146;
          sub_141684120(v9 + 9984, &v307, 1152);
          v88 = v718;
LABEL_132:
          v708 = (_QWORD *)(v9 + 9840);
          sub_14057B210(&v342, v9 + 9840, v8);
          v33 = v342.m256i_i64[0];
          if ( v342.m256i_i64[0] == -1 )
          {
            v133 = 4;
            goto LABEL_119;
          }
          v718 = v88;
          v136 = v342.m256i_i64[1];
          v734 = v342.m256i_i64[3];
          v729 = v342.m256i_u64[2];
          v725 = *((_QWORD *)&v343 + 1);
          v736 = v343;
          v147 = *((_DWORD **)&v344 + 1);
          v732 = v344;
          v148 = v345;
          v149 = v346;
          v724 = v347;
          v722 = v348;
          v730 = v349;
          v723 = v350;
          v738 = v351;
          v731 = v352;
          v733 = v353;
          v735 = (const __m128i *)v354;
          v740 = (const __m128i *)v355;
          sub_141684120(&v317, v356, 1152);
          sub_141684120(v314, v365, 208);
          v150 = *(_DWORD *)v708 == -1;
          v721 = (const __m128i *)v147;
          v726 = v148;
          v728 = v149;
          if ( !v150 )
          {
            sub_1405AFF20(v708);
            sub_1405AF460(v748 + 9960);
            sub_14052DF40((__int64 *)(v748 + 11080));
          }
        }
        v152 = v747;
LABEL_138:
        sub_141684120(v297, &v317, 1152);
        sub_141684120(v324, v314, 208);
        *v713 = 1;
        v448 = v152;
        v447 = v744;
        v446 = v745;
        v445 = v746;
        v444 = v743;
        v443 = v742;
        v442 = v741;
        v153 = v737;
        v441 = v737;
        v440 = v739;
        v439 = v727;
        v438 = v720;
        v437 = v717;
        sub_1405BE490(v714);
        sub_141684120(v305, v297, 1152);
        v113 = v729;
        if ( (_DWORD)v33 != 2 )
        {
          v383 = v325;
          v154 = _mm_loadu_si128(v324);
          v382 = v324[3];
          v381 = v324[2];
          v380 = v324[1];
          v379 = v154;
          sub_141684120(v316, &v326, 136);
        }
        sub_141684120(&v311, v316, 136);
        *v720 = 1;
        v671 = v152;
        v670 = v744;
        v669 = v745;
        v668 = v746;
        v667 = v743;
        v666 = v742;
        v665 = v741;
        v664 = v153;
        v663 = v739;
        v662 = v727;
        sub_1405BE3B0(v717);
        if ( (_DWORD)v33 == 2 )
        {
          v747 = v152;
          v113 = v734;
          v155 = v723;
          if ( v136 == -1 )
          {
            v136 = v729;
            v734 = v736;
            v736 = v725;
            v723 = v738;
            v738 = v731;
            v725 = v732;
            v732 = (__int64)v721;
            v721 = v726;
            v726 = v728;
            v728 = v724;
            v724 = v722;
            v722 = v730;
            v730 = v155;
            v731 = v733;
            v733 = v735;
            v735 = v740;
            v152 = v747;
          }
          else
          {
            v342.m256i_i64[0] = v136;
            v342.m256i_i64[1] = v729;
            v342.m256i_i64[2] = v734;
            v342.m256i_i64[3] = v736;
            *(_QWORD *)&v343 = v725;
            *((_QWORD *)&v343 + 1) = v732;
            *(_QWORD *)&v344 = v721;
            *((_QWORD *)&v344 + 1) = v726;
            v345 = v728;
            v346 = v724;
            v347 = v722;
            v348 = v730;
            v349 = v723;
            v350 = v738;
            v351 = v731;
            v352 = v733;
            v353 = v735;
            v354 = (__int64)v740;
            sub_141684120(&v355, v305, 1152);
            v319.m128i_i64[0] = 0;
            v319.m128i_i64[1] = 1;
            v320 = 0;
            *(_QWORD *)&v335 = 1610612768;
            v334.m128i_i64[0] = (__int64)&v319;
            v334.m128i_i64[1] = (__int64)&off_14177D5F8;
            if ( (unsigned __int8)sub_1406B2DD0(&v342, &v334) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_4,
                55,
                (unsigned int)&v719,
                (unsigned int)&unk_141769668,
                (__int64)&off_14177D6B0);
            v318 = v320;
            v317 = _mm_loadu_si128(&v319);
            LOBYTE(v156) = 40;
            v113 = sub_1413127D0(v156, &v317);
            if ( v342.m256i_i32[0] == -1 )
            {
              v152 = v747;
              v671 = v747;
              v670 = v744;
              v669 = v745;
              v668 = v746;
              v667 = v743;
              v666 = v742;
              v665 = v741;
              v664 = v737;
              v663 = v739;
              v662 = v727;
              sub_1405E1460((__int64)&v342.m256i_i64[1]);
            }
            else
            {
              sub_1405AFF20(&v342);
              sub_1405AF460((__int64)&v352);
              sub_14052DF40(&v364);
              v152 = v747;
            }
            v136 = 5;
          }
        }
        else
        {
          sub_141684120(v298, v305, 1152);
          v384 = _mm_load_si128(&v379);
          v385 = v380;
          v386 = v381;
          v387 = v382;
          v388 = v383;
          sub_141684120(v309, &v310, 141);
        }
        *(_BYTE *)v739 = 1;
        v157 = v152;
        v436 = v152;
        v435 = v744;
        v434 = v745;
        v433 = v746;
        v432 = v743;
        v431 = v742;
        v430 = v741;
        v429 = v737;
        sub_1405B1D50(v727);
        v739 = v113 >> 8;
        v158 = v748;
        if ( *(_BYTE *)(v748 + 2601) )
        {
          v159 = *(_QWORD *)(v748 + 2568);
          if ( v159 )
            sub_140001660(*(_QWORD *)(v748 + 2576), v159, 1);
        }
        v729 = v8;
        *(_WORD *)(v158 + 2601) = 0;
        *(_BYTE *)(v158 + 2603) = 0;
        v88 = v157;
        v160 = v737;
        goto LABEL_350;
      }
      *(_BYTE *)(v9 + 2603) = 0;
      *(_QWORD *)&v327[32] = v419;
      *(_OWORD *)&v327[16] = v418;
      *(_OWORD *)v327 = v417;
      *(_BYTE *)(v9 + 2601) = 0;
      *(_OWORD *)&v327[40] = *(_OWORD *)v285;
      *(_QWORD *)&v327[56] = *(_QWORD *)(v285 + 16);
      v287 = _mm_load_si128((const __m128i *)v327);
      v288 = *(_OWORD *)&v327[16];
      *(__m128i *)v342.m256i_i8 = v287;
      *(_OWORD *)&v342.m256i_u64[2] = *(_OWORD *)&v327[16];
      v289 = *(_OWORD *)&v327[32];
      v343 = *(_OWORD *)&v327[32];
      v344 = *(_OWORD *)&v327[48];
      *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v327[48];
      *(_OWORD *)(v9 + 2640) = v289;
      *(_OWORD *)(v9 + 2624) = v288;
      *(__m128i *)(v9 + 2608) = v287;
      *(_QWORD *)(v9 + 2672) = v286;
      *(_BYTE *)(v9 + 3824) = v113;
      *(_BYTE *)(v9 + 3825) = 0;
      v88 = v718;
LABEL_100:
      v740 = (const __m128i *)(v9 + 2608);
      sub_14061CB80(v327, v9 + 2608, v8);
      v108 = *(_QWORD *)v327;
      if ( *(_QWORD *)v327 == -2 )
      {
        v109 = 3;
        goto LABEL_120;
      }
    }
    else
    {
      *(_BYTE *)(v748 + 2603) = 0;
      *(_QWORD *)&v327[32] = v419;
      *(_OWORD *)&v327[16] = v418;
      *(_OWORD *)v327 = v417;
      *(_BYTE *)(v9 + 2601) = 0;
      *(_OWORD *)&v327[40] = *(_OWORD *)v285;
      *(_QWORD *)&v327[56] = *(_QWORD *)(v285 + 16);
      v292 = _mm_load_si128((const __m128i *)v327);
      v293 = *(_OWORD *)&v327[16];
      *(__m128i *)v342.m256i_i8 = v292;
      *(_OWORD *)&v342.m256i_u64[2] = *(_OWORD *)&v327[16];
      v294 = *(_OWORD *)&v327[32];
      v343 = *(_OWORD *)&v327[32];
      v344 = *(_OWORD *)&v327[48];
      *(_OWORD *)(v9 + 2656) = *(_OWORD *)&v327[48];
      *(_OWORD *)(v9 + 2640) = v294;
      *(_OWORD *)(v9 + 2624) = v293;
      *(__m128i *)(v9 + 2608) = v292;
      *(_QWORD *)(v9 + 2672) = 0;
      *(_BYTE *)(v9 + 3824) = v113;
      *(_BYTE *)(v9 + 3825) = 0;
      v88 = v718;
LABEL_98:
      v740 = (const __m128i *)(v9 + 2608);
      sub_14061CB80(v327, v9 + 2608, v8);
      v108 = *(_QWORD *)v327;
      if ( *(_QWORD *)v327 == -2 )
      {
        v109 = 5;
LABEL_120:
        v134 = v661;
        *v88 = v109;
        v135 = 4;
        v16 = v748;
        goto LABEL_329;
      }
    }
    v718 = v88;
    si128 = _mm_loadu_si128((const __m128i *)&v327[8]);
    v734 = *(_QWORD *)&v327[24];
    v725 = *(_QWORD *)&v327[40];
    v736 = *(_QWORD *)&v327[32];
    v721 = *(const __m128i **)&v327[56];
    v732 = *(_QWORD *)&v327[48];
    v728 = *(const __m128i **)&v327[72];
    v726 = *(const __m128i **)&v327[64];
    v722 = *(const __m128i **)&v327[88];
    v724 = *(const __m128i **)&v327[80];
    v730 = *(const __m128i **)&v327[96];
    v738 = (const __m128i *)v328.m128i_i64[1];
    v723 = (const __m128i *)v328.m128i_i64[0];
    v733 = (const __m128i *)v329.m128i_i64[1];
    v5 = v329.m128i_i64[0];
    v735 = v330;
    sub_141684120(v302, v331, 960);
    v88 = v747;
    v679 = v747;
    v7 = v744;
    v678 = v744;
    v677 = v745;
    v676 = v746;
    v675 = v743;
    v674 = v742;
    v673 = v741;
    v672 = v737;
    sub_1405BE930((__int64)v740);
    v9 = v748;
    v115 = v725;
    v112 = v738;
    goto LABEL_112;
  }
  v141 = *(_QWORD *)v327;
  v140 = ((unsigned __int64)((v327[15] << 16) | (unsigned int)*(unsigned __int16 *)&v327[13]) << 32)
       | *(unsigned int *)&v327[9];
  v736 = *(_QWORD *)&v327[24];
  v734 = *(_QWORD *)&v327[16];
  v732 = *(_QWORD *)&v327[40];
  v115 = *(_QWORD *)&v327[32];
  v726 = *(const __m128i **)&v327[56];
  v721 = *(const __m128i **)&v327[48];
  v724 = *(const __m128i **)&v327[72];
  v728 = *(const __m128i **)&v327[64];
  v730 = *(const __m128i **)&v327[88];
  v722 = *(const __m128i **)&v327[80];
  v723 = *(const __m128i **)&v327[96];
  v731 = (const __m128i *)v328.m128i_i64[1];
  v738 = (const __m128i *)v328.m128i_i64[0];
  v143 = (unsigned __int128)v329;
  v9 = v748;
  v142 = v744;
LABEL_337:
  v725 = v115;
  v150 = *(_BYTE *)(v9 + 2601) == 0;
  v735 = (const __m128i *)(v143 >> 64);
  v733 = (const __m128i *)v143;
  v739 = v140;
  if ( v150 )
  {
    v136 = v141;
  }
  else
  {
    v276 = *(_QWORD *)(v9 + 2568);
    v136 = v141;
    if ( v276 )
      sub_140001660(*(_QWORD *)(v9 + 2576), v276, 1);
  }
LABEL_341:
  *(_BYTE *)(v9 + 2601) = 0;
  v552 = v88;
  v551 = v142;
  v550 = v745;
  v549 = v746;
  v548 = v743;
  v547 = v742;
  v546 = v741;
  v545 = v737;
  sub_1405E15C0(v9 + 2344);
  v267 = *(_QWORD *)(v748 + 2328);
  v273 = v736;
  v272 = v738;
LABEL_342:
  v160 = v737;
  if ( v267 )
  {
    if ( *(_BYTE *)(v748 + 2602) )
    {
      v277 = v748 + 2336;
      v278 = *(volatile signed __int64 **)(v748 + 2336);
      if ( v278 )
      {
        if ( !_InterlockedDecrement64(v278) )
        {
          v648 = v88;
          v647 = v142;
          v646 = v745;
          v645 = v746;
          v644 = v743;
          v643 = v742;
          v642 = v741;
          v641 = v160;
          v729 = v113;
          v113 = (unsigned __int64)v272;
          v708 = (_QWORD *)v136;
          v279 = v142;
          v280 = v273;
          sub_1410D21C0(v277);
          v273 = v280;
          v142 = v279;
          v136 = (__int64)v708;
          v272 = (const __m128i *)v113;
          LOBYTE(v113) = v729;
        }
      }
    }
  }
  v738 = v272;
  v736 = v273;
  v281 = v748;
  *(_BYTE *)(v748 + 2602) = 0;
  if ( *(_BYTE *)(v281 + 2603) )
  {
    v536 = v88;
    v535 = v142;
    v534 = v745;
    v533 = v746;
    v532 = v743;
    v531 = v742;
    v530 = v741;
    v529 = v160;
    sub_1405E7F40((__int64)&v417);
  }
  v729 = v8;
  v744 = v142;
  *(_BYTE *)(v748 + 2603) = 0;
  v33 = 2;
LABEL_350:
  v30 = v136;
  sub_141684120(v299, v298, 1152);
  v389 = _mm_load_si128(&v384);
  v390 = v385;
  v391 = v386;
  v392 = v387;
  v393 = v388;
  sub_141684120(v312, v309, 141);
  *v718 = 1;
  v747 = v88;
  v428 = v88;
  v427 = v744;
  v426 = v745;
  v425 = v746;
  v424 = v743;
  v423 = v742;
  v422 = v741;
  sub_1405BE050(v160);
  v282 = v739 & 0xFFFFFFFFFFFF00LL;
  v283 = (_WORD)v739 << 8;
  v165 = (_BYTE *)v748;
  v284 = *(_QWORD *)(v748 + 1832);
  if ( v284 )
    sub_140001660(*(_QWORD *)(v748 + 1840), v284, 1);
  LOWORD(v46) = (unsigned __int8)v113 | v283;
  v47 = v282 >> 8;
  v165[1901] = 0;
  v164 = v741;
LABEL_197:
  v165[1902] = 0;
  sub_141684120(v300, v299, 1152);
  v399 = _mm_load_si128(&v389);
  v400 = v390;
  v401 = v391;
  v402 = v392;
  v403 = v393;
  sub_141684120(v313, v312, 141);
  v165[1899] = 1;
  v476 = v747;
  v475 = v744;
  v474 = v745;
  v473 = v746;
  v472 = v743;
  v471 = v742;
  sub_1405DB640(v164);
  v32 = (v47 << 16) | (unsigned __int16)v46;
  v7 = (__int64)v740;
LABEL_198:
  sub_141684120(v296, v300, 1152);
  v409 = v399;
  v410 = v400;
  v411 = v401;
  v412 = v402;
  v413 = v403;
  sub_141684120(v306, v313, 141);
  *(_BYTE *)v743 = 1;
  *v745 = 1;
  sub_141684120(v301, v296, 1152);
  v404 = _mm_load_si128(&v409);
  v405 = v410;
  v406 = v411;
  v407 = v412;
  v408 = v413;
  sub_141684120(&v321, v306, 141);
  if ( (_DWORD)v33 != 2 )
  {
    v740 = (const __m128i *)v10;
    sub_141684120(v356, v301, 1152);
    v366 = v408;
    v365[0] = _mm_load_si128(&v404);
    v365[1] = v405;
    v365[2] = v406;
    v365[3] = v407;
    v342.m256i_i64[0] = v33;
    v342.m256i_i64[1] = v30;
    v342.m256i_i64[2] = v32;
    v342.m256i_i64[3] = v734;
    *(_QWORD *)&v343 = v736;
    *((_QWORD *)&v343 + 1) = v725;
    *(_QWORD *)&v344 = v732;
    *((_QWORD *)&v344 + 1) = v721;
    v345 = v726;
    v346 = v728;
    v347 = v724;
    v348 = v722;
    v349 = v730;
    v350 = v723;
    v351 = v738;
    v352 = v731;
    v353 = v733;
    v354 = (__int64)v735;
    v355 = v7;
    v367 = 0;
    v368 = 1;
    v370 = v322;
    v369 = v321;
    v166 = v748;
    sub_141684120(v748 + 280, &v323, 136);
    *(_BYTE *)(v166 + 474) = 0;
    sub_141684120(&v327[24], &v342, 1384);
    *(_QWORD *)v327 = 1;
    *(_QWORD *)&v327[8] = 1;
    *(_QWORD *)&v327[16] = 1;
    v333 = 0;
    nullsub_1(v167);
    v168 = sub_140001650(1416, 8);
    if ( !v168 )
      sub_1416C2D31(8, 1416);
    v169 = (volatile signed __int64 *)v168;
    sub_141684120(v168, v327, 1416);
    v170 = _InterlockedIncrement64(v169);
    v19 = v729;
    if ( (v170 < 0) ^ v171 | (v170 == 0) )
      goto LABEL_291;
    *(_BYTE *)(v166 + 473) = 1;
    *(_QWORD *)(v166 + 224) = -1;
    *(_QWORD *)(v166 + 264) = v169;
    *(_BYTE *)(v166 + 472) = 1;
    v305[0] = v169;
    v421 = v747;
    v5 = v744;
    v420 = v744;
    v172 = sub_1407DCA30(128, &off_141767D50);
    v173 = v748;
    *(_BYTE *)(v748 + 471) = 1;
    *(_QWORD *)&v307 = v172;
    *(_BYTE *)(v173 + 470) = 1;
    *(_QWORD *)(v173 + 416) = v174;
    *(_QWORD *)v327 = 1;
    *(_QWORD *)&v327[8] = 1;
    *(_QWORD *)&v327[48] = 0;
    *(_QWORD *)&v327[56] = -2;
    nullsub_1(v175);
    v176 = sub_140001650(80, 8);
    if ( !v176 )
      sub_1416C2D31(8, 80);
    v177 = v176;
    *(_OWORD *)(v176 + 64) = *(_OWORD *)&v327[64];
    v178 = _mm_loadu_si128((const __m128i *)v327);
    v179 = *(_OWORD *)&v327[16];
    v180 = *(_OWORD *)&v327[32];
    *(_OWORD *)(v176 + 48) = *(_OWORD *)&v327[48];
    *(_OWORD *)(v176 + 32) = v180;
    *(_OWORD *)(v176 + 16) = v179;
    *(__m128i *)v176 = v178;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v176) <= 0 )
LABEL_291:
      BUG();
    *(_BYTE *)(v173 + 469) = 1;
    v317.m128i_i64[0] = v176;
    *(_BYTE *)(v173 + 465) = 1;
    *(_QWORD *)(v173 + 480) = v176;
    v181 = v747;
    v487 = v747;
    v486 = v5;
    sub_140AECBC0(v173 + 424);
    v182 = v748;
    *(_BYTE *)(v748 + 468) = 1;
    v183 = *(_BYTE *)(v182 + 464);
    *(_WORD *)(v182 + 471) = 0;
    *(_BYTE *)(v182 + 469) = 0;
    v331[288] = v183;
    *(_QWORD *)&v327[16] = v169;
    *(_QWORD *)&v327[24] = v172;
    *(_QWORD *)v327 = 1;
    *(_QWORD *)&v327[8] = v177;
    v331[289] = 0;
    v640 = v181;
    v639 = v5;
    v184 = sub_14054ECC0(v327, &off_141767D68);
    v6 = v181;
    v185 = v748;
    *(_QWORD *)(v748 + 448) = v184;
    v186 = *(unsigned __int8 *)(v185 + 464);
    v187 = *(_QWORD *)(v185 + 272);
    v188 = *(_QWORD *)(v185 + 432);
    v189 = *(_QWORD *)(v185 + 440);
    v485 = v181;
    v484 = v5;
    start_message((unsigned int)v327, v187, v186, v188, v189);
    v7 = *(_QWORD *)&v327[8];
    v4 = *(_OWORD *)&v327[16];
    if ( v327[0] )
    {
      v743 = *(volatile signed __int64 **)&v327[8];
      v745 = *(_BYTE **)&v327[16];
      goto LABEL_235;
    }
    v9 = v748;
    v190 = v748 + 224;
    *(_BYTE *)(v748 + 467) = 0;
    v743 = (volatile signed __int64 *)0x8000000000000000LL;
    *(_QWORD *)(v9 + 488) = 0x8000000000000000uLL;
    *(_QWORD *)(v9 + 496) = v7;
    *(_OWORD *)(v9 + 504) = v4;
    v17 = (_BYTE *)(v9 + 488);
    *(_QWORD *)(v9 + 528) = v190;
LABEL_211:
    v191 = *(volatile signed __int64 ***)(v9 + 528);
    v745 = v17;
    v483 = v17;
    v482 = v5;
    v481 = v6;
    v480 = v7;
    v746 = (volatile signed __int64 **)v4;
    v479 = (volatile signed __int64 **)v4;
    v192 = v191;
    sub_1406B7100(v327, v191, v19);
    v195 = *(_QWORD *)v327;
    v16 = v748;
    if ( *(_QWORD *)v327 != -2 )
    {
      if ( *(_DWORD *)v327 == -1 )
      {
        v741 = v7;
        v747 = v6;
        v744 = v5;
        *(_QWORD *)(v748 + 488) = -1;
        v738 = (const __m128i *)(v16 + 496);
        v742 = v192;
        if ( *v192 != (volatile signed __int64 *)-1LL )
          sub_14052DEF0(v742);
        v48 = v742;
        *v742 = v743;
        v196 = v738[1];
        *(__m128i *)(v48 + 1) = _mm_loadu_si128(v738);
        *(__m128i *)(v48 + 3) = v196;
        v5 = v744;
        v6 = v747;
        v7 = v741;
        v18 = v746;
        v17 = v745;
        v8 = v19;
LABEL_216:
        v745 = v17;
        v483 = v17;
        v482 = v5;
        v481 = v6;
        v480 = v7;
        v746 = v18;
        v479 = v18;
        sub_1406B6DC0(v327, v48, v8);
        v195 = *(_QWORD *)v327;
        v10 = (__int64)v740;
        if ( *(_QWORD *)v327 != -2 )
        {
          if ( *(_DWORD *)v327 == -1 )
          {
            v195 = -1;
            v16 = v748;
            goto LABEL_224;
          }
          v341 = v329;
          v340 = v328;
          v339 = *(_OWORD *)&v327[88];
          v338 = *(_OWORD *)&v327[72];
          v198 = _mm_loadu_si128((const __m128i *)&v327[8]);
          v337 = *(__m128i *)&v327[56];
          v336 = *(_OWORD *)&v327[40];
          v335 = *(_OWORD *)&v327[24];
          v334 = v198;
        }
        v16 = v748;
        if ( *(_DWORD *)v327 != -2 )
        {
LABEL_224:
          v378 = v341;
          v377 = v340;
          v376 = v339;
          v375 = v338;
          v199 = _mm_load_si128(&v334);
          v374 = v337;
          v373 = v336;
          v372 = v335;
          v371 = v199;
          v200 = *(_QWORD *)v745;
          if ( *(_QWORD *)v745 == -1 )
            goto LABEL_233;
          v193 = 5;
          if ( v200 < 0 )
            v193 = v200 ^ 0x8000000000000000uLL;
          if ( v193 >= 4 )
          {
            v201 = 488;
            if ( v193 == 4 )
            {
              v200 = *(_QWORD *)(v16 + 496);
              v201 = 496;
              if ( (unsigned __int64)v200 > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_233;
            }
          }
          else
          {
            v200 = *(_QWORD *)(v16 + 496);
            v201 = 496;
          }
          if ( v200 )
            sub_140001660(*(_QWORD *)(v16 + v201 + 8), v200, 1);
LABEL_233:
          v747 = v6;
          v744 = v5;
          if ( (_DWORD)v195 != -1 )
          {
            v741 = v7;
            *(_QWORD *)v327 = v195;
            *(__m128i *)&v327[8] = v371;
            *(_OWORD *)&v327[24] = v372;
            *(_OWORD *)&v327[40] = v373;
            *(__m128i *)&v327[56] = v374;
            *(_OWORD *)&v327[72] = v375;
            *(_OWORD *)&v327[88] = v376;
            v328 = v377;
            v329 = _mm_load_si128(&v378);
            sub_1412E75E0(v16 + 448);
            v319.m128i_i64[0] = (__int64)v327;
            v319.m128i_i64[1] = (__int64)sub_140F8DAB0;
            sub_14149C0F0(&v334, &unk_141767D80, &v319);
            v745 = (_BYTE *)v334.m128i_i64[1];
            v743 = (volatile signed __int64 *)v334.m128i_i64[0];
            *((_QWORD *)&v4 + 1) = v335;
            v712 = v746;
            v711 = v741;
            v6 = v747;
            v710 = v747;
            v5 = v744;
            v709 = v744;
            sub_1405E1460((__int64)v327);
            v740 = (const __m128i *)v10;
LABEL_235:
            v60 = v748;
LABEL_236:
            *(_BYTE *)(v60 + 467) = 0;
            v202 = *(_QWORD *)(v60 + 448);
            v640 = v6;
            v639 = v5;
            if ( (unsigned __int8)sub_1412F2A80(v202) )
            {
              v640 = v6;
              v639 = v5;
              sub_1412E7580(v202);
            }
            v747 = v6;
            v744 = v5;
            v203 = v748;
            v204 = *(_QWORD *)(v748 + 424);
            if ( v204 )
              sub_140001660(*(_QWORD *)(v748 + 432), v204, 1);
            *(_BYTE *)(v203 + 468) = 0;
            v10 = (__int64)v740;
            if ( *(_BYTE *)(v203 + 465) )
            {
              v205 = *(_QWORD *)(v748 + 480);
              if ( v205 )
              {
                v746 = (volatile signed __int64 **)(v748 + 480);
                v206 = _InterlockedOr64((volatile signed __int64 *)(v205 + 48), 4u);
                if ( (v206 & 0xA) == 8 )
                {
                  v207 = v206;
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v205 + 16) + 16LL))(*(_QWORD *)(v205 + 24));
                  v206 = v207;
                }
                if ( (v206 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v205 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  v208 = v206;
                  sub_1412F0A10(v205 + 32);
                  v206 = v208;
                }
                if ( (v206 & 2) != 0 )
                {
                  v209 = *(_QWORD *)(v205 + 56);
                  v210 = *(_QWORD *)(v205 + 64);
                  *(_QWORD *)(v205 + 56) = -2;
                  if ( (unsigned __int64)(v209 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v210, v209, 1);
                }
                v211 = (__int64 *)v746;
                if ( *v746 && !_InterlockedDecrement64(*v746) )
                {
                  v693 = v747;
                  v692 = v744;
                  sub_140573FA0(v211);
                }
              }
            }
            v212 = v748;
            *(_BYTE *)(v748 + 465) = 0;
            *(_BYTE *)(v212 + 469) = 0;
            v746 = (volatile signed __int64 **)(v212 + 416);
            sub_140893210(v212 + 416);
            v213 = v746;
            if ( !_InterlockedDecrement64(*v746) )
            {
              v652 = v747;
              v651 = v744;
              sub_140574470(v213);
            }
            v214 = v748;
            *(_WORD *)(v748 + 470) = 0;
            *(_BYTE *)(v214 + 472) = 0;
            v746 = (volatile signed __int64 **)(v214 + 224);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v214 + 264)) )
              sub_1405740A0(v748 + 264);
            v215 = (__int64)*v746;
            v216 = v748;
            v5 = v744;
            v6 = v747;
            if ( *v746 != (volatile signed __int64 *)-1LL )
            {
              v217 = 5;
              if ( v215 < 0 )
                v217 = v215 ^ 0x8000000000000000uLL;
              if ( v217 >= 4 )
              {
                v218 = 224;
                if ( v217 == 4 )
                {
                  v215 = *(_QWORD *)(v748 + 232);
                  v218 = 232;
                  if ( (unsigned __int64)v215 > 0xFFFFFFFFFFFFFFFDuLL )
                    goto LABEL_265;
                }
              }
              else
              {
                v215 = *(_QWORD *)(v748 + 232);
                v218 = 232;
              }
              if ( v215 )
                sub_140001660(*(_QWORD *)(v748 + v218 + 8), v215, 1);
            }
LABEL_265:
            *(_BYTE *)(v216 + 473) = 0;
            v478 = v6;
            v477 = v5;
            sub_1405AE6D0(v216 + 280);
            v16 = v748;
            *(_BYTE *)(v748 + 474) = 0;
            v14 = -1;
            if ( *(_BYTE *)(v16 + 466) )
              goto LABEL_202;
            goto LABEL_266;
          }
          LOBYTE(v6) = 2;
          if ( *(_BYTE *)(v16 + 464) == 2 )
          {
LABEL_270:
            *(_BYTE *)(v16 + 473) = 0;
            *((_QWORD *)&v4 + 1) = *(_QWORD *)(v16 + 224);
            v416 = *(_QWORD *)(v16 + 264);
            v415 = *(_OWORD *)(v16 + 248);
            v414 = _mm_loadu_si128((const __m128i *)(v16 + 232));
            v7 = *(_QWORD *)(v16 + 416);
            v14 = *(_QWORD *)(v16 + 424);
            v743 = *(volatile signed __int64 **)(v16 + 432);
            v745 = *(_BYTE **)(v16 + 440);
            *(_BYTE *)(v16 + 470) = 0;
            v5 = *(_QWORD *)(v16 + 448);
            *(_WORD *)(v16 + 467) = 0;
            if ( *(_BYTE *)(v16 + 465) )
            {
              v220 = *(_QWORD *)(v748 + 480);
              if ( v220 )
              {
                v746 = (volatile signed __int64 **)(v748 + 480);
                v221 = _InterlockedOr64((volatile signed __int64 *)(v220 + 48), 4u);
                v741 = v221;
                if ( (v221 & 0xA) == 8 )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v220 + 16) + 16LL))(*(_QWORD *)(v220 + 24));
                  LOBYTE(v221) = v741;
                }
                if ( (v221 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v220 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  sub_1412F0A10(v220 + 32);
                  LOBYTE(v221) = v741;
                }
                if ( (v221 & 2) != 0 )
                {
                  v222 = *(_QWORD *)(v220 + 56);
                  v223 = *(_QWORD *)(v220 + 64);
                  *(_QWORD *)(v220 + 56) = -2;
                  if ( (unsigned __int64)(v222 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v223, v222, 1);
                }
                v224 = (__int64 *)v746;
                if ( *v746 && !_InterlockedDecrement64(*v746) )
                {
                  v693 = v747;
                  v692 = v744;
                  sub_140573FA0(v224);
                }
              }
            }
            v225 = v748;
            *(_BYTE *)(v748 + 465) = 0;
            *(_DWORD *)(v225 + 469) = 0;
            *(_BYTE *)(v225 + 473) = 0;
            v478 = v747;
            v477 = v744;
            sub_1405AE6D0(v225 + 280);
            v16 = v748;
            *(_BYTE *)(v748 + 474) = 0;
            goto LABEL_266;
          }
          v741 = v7;
          *(_BYTE *)(v16 + 465) = 0;
          v226 = *(_QWORD *)(v16 + 480);
          v319.m128i_i64[0] = v226;
          *(_QWORD *)v327 = sub_141302E80(v193, v200, v194);
          *(_DWORD *)&v327[8] = v227;
          v228 = sub_141302E60(v327, 15, 0);
          if ( v229 == -1 )
            sub_1412F0A30(v327, 0, 0xFFFFFFFFLL);
          else
            sub_1412F0B20((unsigned int)v327, v228, v229, 0, (__int64)&off_141767DA8);
          v9 = v748;
          v230 = (_OWORD *)(v748 + 480);
          v340 = _mm_loadu_si128((const __m128i *)&v327[96]);
          v231 = *(_OWORD *)&v327[80];
          v339 = *(_OWORD *)&v327[80];
          v232 = *(_OWORD *)&v327[64];
          v338 = *(_OWORD *)&v327[64];
          v233 = *(_OWORD *)v327;
          v234 = *(_OWORD *)&v327[16];
          v235 = *(_OWORD *)&v327[32];
          v236 = _mm_loadu_si128((const __m128i *)&v327[48]);
          v337 = v236;
          v336 = *(_OWORD *)&v327[32];
          v335 = *(_OWORD *)&v327[16];
          v334 = *(__m128i *)v327;
          *(__m128i *)(v748 + 576) = v340;
          v230[5] = v231;
          v230[4] = v232;
          v230[3] = v236;
          v230[2] = v235;
          v230[1] = v234;
          *v230 = v233;
          *(_QWORD *)(v9 + 592) = v226;
LABEL_6:
          v743 = (volatile signed __int64 *)(v9 + 480);
          v20 = (unsigned __int8 *)sub_1412F09C0();
          *((_QWORD *)&v4 + 1) = v20[72];
          if ( DWORD2(v4) != 1 )
          {
            if ( DWORD2(v4) == 2 )
              goto LABEL_10;
            v21 = v20;
            sub_14148BBF0(v20, sub_140B82FF0);
            v20 = v21;
            v21[72] = 1;
          }
          *((_QWORD *)&v4 + 1) = (unsigned int)sub_1412F0A20(v20[68], v20[69]);
LABEL_10:
          v22 = (volatile signed __int64 **)(v748 + 592);
          sub_1408918E0(v327, v748 + 592, v8);
          v7 = *(_QWORD *)v327;
          if ( *(_QWORD *)v327 == -3 )
          {
            LOBYTE(v4) = BYTE8(v4) & 1 | (BYTE8(v4) == 2);
            if ( (unsigned __int8)sub_141309ED0(v4, v743, v8) )
            {
              *(_QWORD *)v10 = -2;
              result = 5;
              v16 = v748;
              goto LABEL_268;
            }
            v25 = *v22;
            if ( !*v22 )
            {
LABEL_38:
              v712 = v746;
              v55 = v741;
              v711 = v741;
              v710 = v747;
              v709 = v744;
              sub_1405E6D10(v743);
              if ( v7 == -2 )
              {
                nullsub_1(v56);
                v57 = 31;
                v59 = sub_140001650(31, 1);
                v16 = v748;
                if ( !v59 )
                {
                  v712 = v746;
                  v711 = v55;
                  v710 = v747;
                  v709 = v744;
                  sub_1416C2D4B(1, 31);
                }
                *(_OWORD *)(v59 + 15) = *(__int128 *)((char *)&xmmword_141767DC0 + 15);
                v745 = (_BYTE *)v59;
                *(__m128i *)v59 = _mm_loadu_si128((const __m128i *)&xmmword_141767DC0);
                *((_QWORD *)&v4 + 1) = 31;
              }
              else
              {
                v57 = v7;
                v16 = v748;
                if ( v7 == -3 )
                {
                  nullsub_1(v56);
                  v57 = 22;
                  v58 = sub_140001650(22, 1);
                  if ( !v58 )
                  {
                    v712 = v746;
                    v711 = v55;
                    v710 = v747;
                    v709 = v744;
                    sub_1416C2D4B(1, 22);
                  }
                  *(__m128i *)v58 = _mm_loadu_si128((const __m128i *)&xmmword_141767DDF);
                  v745 = (_BYTE *)v58;
                  *(_QWORD *)(v58 + 14) = 0xB697E685B6E8A88AuLL;
                  *((_QWORD *)&v4 + 1) = 22;
                }
                else if ( v7 == -1 )
                {
                  LOBYTE(v6) = *(_BYTE *)(v748 + 464);
                  goto LABEL_270;
                }
              }
              v740 = (const __m128i *)v10;
              v743 = (volatile signed __int64 *)v57;
              sub_1412E75E0(v16 + 448);
              v60 = v748;
              v5 = v744;
              v6 = v747;
              goto LABEL_236;
            }
          }
          else
          {
            v745 = *(_BYTE **)&v327[8];
            *((_QWORD *)&v4 + 1) = *(_QWORD *)&v327[16];
            v25 = *v22;
            if ( !*v22 )
              goto LABEL_38;
          }
          v742 = v22;
          v49 = _InterlockedOr64(v25 + 6, 4u);
          if ( (v49 & 0xA) == 8 )
          {
            v50 = v49;
            (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v25 + 2) + 16LL))(*((_QWORD *)v25 + 3));
            v49 = v50;
          }
          if ( (v49 & 3) == 1 )
          {
            _InterlockedAnd64(v25 + 6, 0xFFFFFFFFFFFFFFFEuLL);
            v51 = v49;
            sub_1412F0A10(v25 + 4);
            v49 = v51;
          }
          if ( (v49 & 2) != 0 )
          {
            v52 = *((_QWORD *)v25 + 7);
            v53 = *((_QWORD *)v25 + 8);
            *((_QWORD *)v25 + 7) = -2;
            if ( (unsigned __int64)(v52 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
              sub_140001660(v53, v52, 1);
          }
          v54 = (__int64 *)v742;
          if ( *v742 && !_InterlockedDecrement64(*v742) )
            sub_140573FA0(v54);
          goto LABEL_38;
        }
LABEL_221:
        *(_QWORD *)v10 = -2;
        result = 4;
        goto LABEL_268;
      }
      v341 = v329;
      v340 = v328;
      v339 = *(_OWORD *)&v327[88];
      v338 = *(_OWORD *)&v327[72];
      v197 = _mm_loadu_si128((const __m128i *)&v327[8]);
      v337 = *(__m128i *)&v327[56];
      v336 = *(_OWORD *)&v327[40];
      v335 = *(_OWORD *)&v327[24];
      v334 = v197;
    }
    v8 = v19;
    v10 = (__int64)v740;
    if ( *(_DWORD *)v327 != -2 )
      goto LABEL_224;
    goto LABEL_221;
  }
  *(_QWORD *)v327 = v30;
  *(_QWORD *)&v327[8] = v32;
  *(_QWORD *)&v327[16] = v734;
  *(_QWORD *)&v327[24] = v736;
  *(_QWORD *)&v327[32] = v725;
  *(_QWORD *)&v327[40] = v732;
  *(_QWORD *)&v327[48] = v721;
  *(_QWORD *)&v327[56] = v726;
  *(_QWORD *)&v327[64] = v728;
  *(_QWORD *)&v327[72] = v724;
  *(_QWORD *)&v327[80] = v722;
  *(_QWORD *)&v327[88] = v730;
  *(_QWORD *)&v327[96] = v723;
  v328.m128i_i64[0] = (__int64)v738;
  v328.m128i_i64[1] = (__int64)v731;
  v329.m128i_i64[0] = (__int64)v733;
  v329.m128i_i64[1] = (__int64)v735;
  v334.m128i_i64[0] = (__int64)v327;
  v334.m128i_i64[1] = (__int64)sub_140F8DAB0;
  sub_14149C0F0(&v342, &unk_14176761D, &v334);
  v6 = v747;
  v716 = v747;
  v5 = v744;
  v715 = v744;
  sub_1405E1460((__int64)v327);
  v745 = (_BYTE *)v342.m256i_i64[1];
  v743 = (volatile signed __int64 *)v342.m256i_i64[0];
  *((_QWORD *)&v4 + 1) = v342.m256i_i64[2];
LABEL_200:
  v16 = v748;
LABEL_201:
  v14 = -1;
  if ( !*(_BYTE *)(v16 + 466) )
    goto LABEL_266;
LABEL_202:
  v691 = v6;
  v690 = v5;
  sub_1405E15C0(v16);
LABEL_203:
  v16 = v748;
LABEL_266:
  *(_BYTE *)(v16 + 466) = 0;
  v15 = v743;
  *(_QWORD *)&v4 = v745;
LABEL_267:
  *(_BYTE *)(v16 + 475) = 0;
  *(_QWORD *)v10 = v14;
  *(_QWORD *)(v10 + 8) = v15;
  *(_OWORD *)(v10 + 16) = v4;
  v219 = v415;
  *(__m128i *)(v10 + 32) = _mm_load_si128(&v414);
  *(_OWORD *)(v10 + 48) = v219;
  *(_QWORD *)(v10 + 64) = v416;
  *(_QWORD *)(v10 + 72) = v5;
  *(_WORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 88) = v7;
  *(_BYTE *)(v10 + 96) = (_BYTE)v6;
  result = 1;
LABEL_268:
  *(_BYTE *)(v16 + 476) = result;
  return result;
}