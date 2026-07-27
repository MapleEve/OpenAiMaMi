// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1406a3270
// name: hbb4b340bd79fba8f_0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::voice::aliyun_asr::AliyunAsrSession::connect::_$u7b$$u7b$closure$u7d$$u7d$::hbb4b340bd79fba8f | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall hbb4b340bd79fba8f_0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v4; // r12
  const __m128i *v5; // r15
  const __m128i *v6; // rdi
  __int64 v7; // r13
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdi
  _BYTE *v16; // rax
  _BYTE *v17; // rcx
  unsigned __int8 *v18; // rax
  unsigned __int8 *v19; // rbx
  volatile signed __int64 **v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r15
  char result; // al
  __int64 v24; // rax
  volatile signed __int64 *v25; // rdi
  __int64 v26; // rax
  char v27; // r14
  __int64 v28; // r15
  __m128i v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rdx
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int128 v34; // xmm3
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int64 v38; // r15
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r13
  __int128 v42; // kr10_16
  unsigned __int64 v43; // r15
  __int64 v44; // r14
  __int64 v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // r13
  char v48; // al
  char v49; // r14
  char v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r13
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  const __m128i *v59; // r14
  __int64 v60; // rax
  _BYTE *v61; // r14
  __int16 v62; // dx
  __int16 v63; // bx
  const __m128i *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __m128i v67; // xmm0
  const __m128i *v68; // rdx
  char *v69; // r14
  __m128i v70; // xmm0
  int v71; // ebx
  __m128i v72; // xmm6
  __int64 v73; // r15
  int v74; // eax
  const __m128i *v75; // rcx
  __int64 v76; // rbx
  unsigned __int64 v77; // r14
  __int64 v78; // r8
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __m128i v83; // rax
  __int64 i; // rax
  unsigned __int8 v85; // cl
  __int64 v86; // rcx
  char *v87; // r14
  __int64 v88; // rax
  const __m128i *v89; // r12
  char v90; // al
  __m128i v91; // xmm0
  __int64 v92; // rcx
  __int64 v93; // rbx
  _BYTE *v94; // rdi
  __int64 v95; // rdx
  _BYTE *v96; // r8
  __int64 v97; // r10
  __int64 v98; // r12
  __int64 v99; // r15
  void (__fastcall *v100)(_QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v101)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v102; // rcx
  _WORD *v103; // rax
  __int64 v104; // rcx
  unsigned __int16 v105; // cx
  int v106; // eax
  __int64 v107; // r8
  __int64 v108; // r9
  __int16 *v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r14
  __int64 v112; // rbx
  char v113; // al
  _BYTE *v114; // rcx
  int v115; // eax
  __int64 v116; // rdx
  unsigned __int64 v117; // r8
  __m128i v118; // xmm0
  __m128i si128; // xmm6
  const __m128i *v120; // r14
  __int64 v121; // rax
  __m128i *v122; // rcx
  __int64 v123; // r9
  __int128 v124; // kr220_16
  __int128 v125; // xmm1
  __int128 v126; // xmm2
  __int128 v127; // xmm3
  __int128 v128; // xmm1
  __int128 v129; // xmm2
  __int128 v130; // xmm3
  __int64 v131; // r15
  __int64 v132; // rbx
  __int64 v133; // r12
  char v134; // al
  char *v135; // rdx
  char v136; // al
  const __m128i *v137; // rbx
  const __m128i *v138; // r14
  const __m128i *v139; // r13
  __int64 v140; // r15
  __int64 v141; // rdx
  const __m128i *v142; // rbx
  __int64 v143; // r14
  __int64 v144; // rax
  __int64 v145; // rdx
  const __m128i *v146; // rdi
  __int64 v147; // rax
  __m128i *v148; // r15
  const __m128i *v149; // rbx
  const __m128i *v150; // r14
  const __m128i *v151; // rbx
  const __m128i *v152; // r13
  bool v153; // zf
  _QWORD *v154; // r12
  __int64 v155; // r13
  const __m128i *v156; // r14
  __m128i v157; // xmm0
  const __m128i *v158; // rcx
  const __m128i *v159; // rdx
  __int64 v160; // rax
  __int64 v161; // rcx
  const __m128i *v162; // rax
  const __m128i *v163; // rcx
  __int64 v164; // r13
  __int64 v165; // r14
  __int64 v166; // rdx
  volatile signed __int64 *v167; // rax
  __int64 v168; // rax
  _BYTE *v169; // r13
  __int64 v170; // r14
  __int64 v171; // rcx
  __int64 v172; // rax
  volatile signed __int64 *v173; // rbx
  __int64 v174; // rt0
  char v175; // of
  __int64 v176; // r14
  __int64 v177; // r13
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rax
  __int64 v181; // r15
  __m128i v182; // xmm0
  __int128 v183; // xmm1
  __int128 v184; // xmm2
  __int64 v185; // rcx
  const __m128i *v186; // r13
  __int64 v187; // rcx
  char v188; // al
  __int64 v189; // rax
  __int64 v190; // rcx
  int v191; // r8d
  __int64 v192; // rdx
  __int64 v193; // r9
  __int64 v194; // rax
  volatile signed __int64 **v195; // rdx
  __int64 v196; // r8
  __int64 v197; // rax
  unsigned __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r14
  __m128i v201; // xmm0
  __int64 v202; // rdx
  __int64 v203; // rax
  __int64 v204; // rdi
  __int64 v205; // rdi
  __int64 v206; // rdx
  __int64 v207; // rdi
  char v208; // al
  char v209; // r14
  char v210; // r14
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 *v213; // rcx
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rdi
  unsigned __int64 v219; // rcx
  __int64 v220; // rax
  __int128 v221; // xmm1
  __int64 v222; // r13
  signed __int64 v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 *v226; // rcx
  __int64 v227; // rax
  __int64 v228; // rbx
  int v229; // edx
  int v230; // eax
  int v231; // edx
  _OWORD *v232; // rax
  __int128 v233; // xmm1
  __int128 v234; // xmm2
  __int128 v235; // xmm3
  __int128 v236; // xmm4
  __int128 v237; // xmm5
  __m128i v238; // xmm6
  __int64 v239; // rdx
  _DWORD *v240; // rbx
  __m128i *v241; // rax
  __m128i v242; // xmm0
  __m128i v243; // xmm0
  __int64 v244; // rax
  __m128i *v245; // rcx
  unsigned __int64 v246; // rdx
  unsigned __int64 v247; // rcx
  int v248; // r15d
  __int64 v249; // rdx
  __int64 v250; // rbx
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rax
  __int64 v254; // r14
  __int128 v255; // xmm1
  __int128 v256; // xmm2
  __int128 v257; // xmm3
  __int64 v258; // rax
  unsigned __int64 v259; // rdx
  __int128 v260; // xmm1
  __int128 v261; // xmm1
  __int128 v262; // xmm2
  __int128 v263; // xmm3
  __int64 v264; // rcx
  __int64 v265; // r8
  unsigned __int64 v266; // r10
  __m128i *v267; // rdx
  const __m128i *v268; // r9
  const __m128i *v269; // r11
  const __m128i *v270; // r12
  __int64 v271; // r15
  __int64 v272; // r14
  __m128i v273; // xmm0
  __int64 v274; // rax
  __int128 v275; // xmm1
  __int128 v276; // xmm2
  __int128 v277; // xmm3
  __int64 v278; // r14
  __int64 v279; // r9
  __int128 v280; // kr230_16
  __int64 v281; // rax
  __int64 v282; // rdx
  __int64 v283; // rdx
  __int64 v284; // rcx
  volatile signed __int64 *v285; // rax
  __int64 v286; // rax
  unsigned __int64 v287; // r14
  __int16 v288; // r15
  __int16 v289; // bx
  __int64 v290; // rdx
  __int64 v291; // rax
  __int64 v292; // rcx
  __m128i v293; // xmm0
  __int128 v294; // xmm1
  __int128 v295; // xmm2
  __int64 v296; // rax
  __int64 v297; // rdx
  __m128i v298; // xmm0
  __int128 v299; // xmm1
  __int128 v300; // xmm2
  __m128i v301; // xmm1
  _BYTE v302[1152]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v303[1152]; // [rsp+4A8h] [rbp+428h] BYREF
  _BYTE v304[1152]; // [rsp+928h] [rbp+8A8h] BYREF
  _BYTE v305[1152]; // [rsp+DA8h] [rbp+D28h] BYREF
  _BYTE v306[1152]; // [rsp+1228h] [rbp+11A8h] BYREF
  _BYTE v307[1152]; // [rsp+16A8h] [rbp+1628h] BYREF
  _BYTE v308[960]; // [rsp+1B28h] [rbp+1AA8h] BYREF
  _BYTE v309[232]; // [rsp+1EE8h] [rbp+1E68h] BYREF
  _BYTE v310[224]; // [rsp+1FD0h] [rbp+1F50h] BYREF
  _QWORD v311[144]; // [rsp+20B0h] [rbp+2030h] BYREF
  _BYTE v312[141]; // [rsp+2533h] [rbp+24B3h] BYREF
  __m128i v313; // [rsp+25C0h] [rbp+2540h] BYREF
  __int64 v314; // [rsp+25D0h] [rbp+2550h]
  __m128i v315; // [rsp+2A40h] [rbp+29C0h] BYREF
  __int64 v316; // [rsp+2A50h] [rbp+29D0h]
  __m128i v317; // [rsp+2FC0h] [rbp+2F40h] BYREF
  __int64 v318; // [rsp+2FD0h] [rbp+2F50h]
  _BYTE v319[141]; // [rsp+3444h] [rbp+33C4h] BYREF
  char v320[5]; // [rsp+34D1h] [rbp+3451h] BYREF
  char v321[136]; // [rsp+34D6h] [rbp+3456h] BYREF
  _BYTE v322[141]; // [rsp+355Eh] [rbp+34DEh] BYREF
  _BYTE v323[141]; // [rsp+35EBh] [rbp+356Bh] BYREF
  _BYTE v324[208]; // [rsp+3678h] [rbp+35F8h] BYREF
  _BYTE v325[208]; // [rsp+3748h] [rbp+36C8h] BYREF
  _BYTE v326[139]; // [rsp+3818h] [rbp+3798h] BYREF
  int v327; // [rsp+38A3h] [rbp+3823h] BYREF
  char v328; // [rsp+38A7h] [rbp+3827h]
  char v329[136]; // [rsp+38A8h] [rbp+3828h] BYREF
  __m128i v330; // [rsp+3930h] [rbp+38B0h] BYREF
  __int128 v331; // [rsp+3940h] [rbp+38C0h]
  __int128 v332; // [rsp+3950h] [rbp+38D0h]
  __m128i v333; // [rsp+3960h] [rbp+38E0h]
  __int128 v334; // [rsp+3970h] [rbp+38F0h]
  __int128 v335; // [rsp+3980h] [rbp+3900h]
  __m128i v336; // [rsp+3990h] [rbp+3910h]
  __m128i v337[4]; // [rsp+3EB0h] [rbp+3E30h] BYREF
  __int64 v338; // [rsp+3EF0h] [rbp+3E70h]
  char v339[136]; // [rsp+3EF8h] [rbp+3E78h] BYREF
  _BYTE v340[104]; // [rsp+3F80h] [rbp+3F00h] BYREF
  __int128 v341; // [rsp+3FE8h] [rbp+3F68h]
  __m128i v342; // [rsp+3FF8h] [rbp+3F78h]
  const __m128i *v343; // [rsp+4008h] [rbp+3F88h]
  _BYTE v344[960]; // [rsp+4010h] [rbp+3F90h] BYREF
  char v345[304]; // [rsp+43D0h] [rbp+4350h] BYREF
  __int64 v346; // [rsp+4500h] [rbp+4480h]
  __m128i v347; // [rsp+5B60h] [rbp+5AE0h] BYREF
  __int128 v348; // [rsp+5B70h] [rbp+5AF0h] BYREF
  __int128 v349; // [rsp+5B80h] [rbp+5B00h]
  __int128 v350; // [rsp+5B90h] [rbp+5B10h]
  const __m128i *v351; // [rsp+5BA0h] [rbp+5B20h]
  const __m128i *v352; // [rsp+5BA8h] [rbp+5B28h]
  const __m128i *v353; // [rsp+5BB0h] [rbp+5B30h]
  const __m128i *v354; // [rsp+5BB8h] [rbp+5B38h]
  __int64 v355; // [rsp+5BC0h] [rbp+5B40h]
  __int64 v356; // [rsp+5BC8h] [rbp+5B48h]
  __int64 v357; // [rsp+5BD0h] [rbp+5B50h]
  _WORD *v358; // [rsp+5BD8h] [rbp+5B58h] BYREF
  const __m128i *v359; // [rsp+5BE0h] [rbp+5B60h]
  __int16 *v360; // [rsp+5BE8h] [rbp+5B68h]
  _WORD *v361; // [rsp+5BF0h] [rbp+5B70h] BYREF
  _BYTE v362[72]; // [rsp+5BF8h] [rbp+5B78h] BYREF
  __m128i v363; // [rsp+5C40h] [rbp+5BC0h]
  __int128 v364; // [rsp+5C50h] [rbp+5BD0h]
  __int128 v365; // [rsp+5C60h] [rbp+5BE0h]
  __int128 v366; // [rsp+5C70h] [rbp+5BF0h]
  __int64 v367; // [rsp+5C80h] [rbp+5C00h]
  char v368[808]; // [rsp+5C88h] [rbp+5C08h] BYREF
  char v369[136]; // [rsp+5FB0h] [rbp+5F30h] BYREF
  __int64 v370[8]; // [rsp+6038h] [rbp+5FB8h] BYREF
  _OWORD v371[4]; // [rsp+6078h] [rbp+5FF8h] BYREF
  __int64 v372; // [rsp+60B8h] [rbp+6038h]
  __int16 v373; // [rsp+60C0h] [rbp+6040h]
  char v374; // [rsp+60C2h] [rbp+6042h]
  int v375; // [rsp+60C3h] [rbp+6043h]
  char v376; // [rsp+60C7h] [rbp+6047h]
  __m128i v377; // [rsp+6150h] [rbp+60D0h]
  __int128 v378; // [rsp+6160h] [rbp+60E0h]
  __int128 v379; // [rsp+6170h] [rbp+60F0h]
  __int128 v380; // [rsp+6180h] [rbp+6100h]
  __int128 v381; // [rsp+6190h] [rbp+6110h]
  __int128 v382; // [rsp+61A0h] [rbp+6120h]
  __int128 v383; // [rsp+61B0h] [rbp+6130h]
  __m128i v384; // [rsp+61C0h] [rbp+6140h] BYREF
  __m128i v385; // [rsp+61D0h] [rbp+6150h] BYREF
  __m128i v386; // [rsp+61E0h] [rbp+6160h]
  __m128i v387; // [rsp+61F0h] [rbp+6170h]
  __m128i v388; // [rsp+6200h] [rbp+6180h]
  __int64 v389; // [rsp+6210h] [rbp+6190h]
  __m128i v390; // [rsp+6220h] [rbp+61A0h] BYREF
  __m128i v391; // [rsp+6230h] [rbp+61B0h]
  __m128i v392; // [rsp+6240h] [rbp+61C0h]
  __m128i v393; // [rsp+6250h] [rbp+61D0h]
  __int64 v394; // [rsp+6260h] [rbp+61E0h]
  __m128i v395; // [rsp+6270h] [rbp+61F0h] BYREF
  __m128i v396; // [rsp+6280h] [rbp+6200h]
  __m128i v397; // [rsp+6290h] [rbp+6210h]
  __m128i v398; // [rsp+62A0h] [rbp+6220h]
  __int64 v399; // [rsp+62B0h] [rbp+6230h]
  __int128 v400; // [rsp+62C0h] [rbp+6240h]
  __int128 v401; // [rsp+62D0h] [rbp+6250h]
  __int128 v402; // [rsp+62E0h] [rbp+6260h]
  __int128 v403; // [rsp+62F0h] [rbp+6270h]
  __int64 v404; // [rsp+6300h] [rbp+6280h]
  __m128i v405; // [rsp+6310h] [rbp+6290h]
  __m128i v406; // [rsp+6320h] [rbp+62A0h]
  __m128i v407; // [rsp+6330h] [rbp+62B0h]
  __m128i v408; // [rsp+6340h] [rbp+62C0h]
  __int64 v409; // [rsp+6350h] [rbp+62D0h]
  __m128i v410; // [rsp+6360h] [rbp+62E0h] BYREF
  __m128i v411; // [rsp+6370h] [rbp+62F0h]
  __m128i v412; // [rsp+6380h] [rbp+6300h]
  __m128i v413; // [rsp+6390h] [rbp+6310h]
  __int64 v414; // [rsp+63A0h] [rbp+6320h]
  __m128i v415; // [rsp+63B0h] [rbp+6330h] BYREF
  __m128i v416; // [rsp+63C0h] [rbp+6340h]
  __m128i v417; // [rsp+63D0h] [rbp+6350h]
  __m128i v418; // [rsp+63E0h] [rbp+6360h]
  __int64 v419; // [rsp+63F0h] [rbp+6370h]
  __m128i v420; // [rsp+6400h] [rbp+6380h] BYREF
  __int128 v421; // [rsp+6410h] [rbp+6390h]
  __int64 v422; // [rsp+6420h] [rbp+63A0h]
  __m128i v423; // [rsp+64F0h] [rbp+6470h] BYREF
  __m128i v424; // [rsp+6500h] [rbp+6480h]
  __int64 v425; // [rsp+6510h] [rbp+6490h]
  __int64 v426; // [rsp+6528h] [rbp+64A8h]
  const __m128i *v427; // [rsp+6530h] [rbp+64B0h]
  __int64 v428; // [rsp+6538h] [rbp+64B8h]
  volatile signed __int64 **v429; // [rsp+6540h] [rbp+64C0h]
  __int64 v430; // [rsp+6548h] [rbp+64C8h]
  volatile signed __int64 **v431; // [rsp+6550h] [rbp+64D0h]
  _BYTE *v432; // [rsp+6558h] [rbp+64D8h]
  __int64 v433; // [rsp+6560h] [rbp+64E0h]
  const __m128i *v434; // [rsp+6568h] [rbp+64E8h]
  const __m128i *v435; // [rsp+6570h] [rbp+64F0h]
  __int64 v436; // [rsp+6578h] [rbp+64F8h]
  volatile signed __int64 **v437; // [rsp+6580h] [rbp+6500h]
  __int64 v438; // [rsp+6588h] [rbp+6508h]
  volatile signed __int64 **v439; // [rsp+6590h] [rbp+6510h]
  _BYTE *v440; // [rsp+6598h] [rbp+6518h]
  __int64 v441; // [rsp+65A0h] [rbp+6520h]
  const __m128i *v442; // [rsp+65A8h] [rbp+6528h]
  __int64 v443; // [rsp+65B0h] [rbp+6530h]
  _BYTE *v444; // [rsp+65B8h] [rbp+6538h]
  __int64 v445; // [rsp+65C0h] [rbp+6540h]
  unsigned __int64 v446; // [rsp+65C8h] [rbp+6548h]
  const __m128i *v447; // [rsp+65D0h] [rbp+6550h]
  __int64 v448; // [rsp+65D8h] [rbp+6558h]
  volatile signed __int64 **v449; // [rsp+65E0h] [rbp+6560h]
  __int64 v450; // [rsp+65E8h] [rbp+6568h]
  volatile signed __int64 **v451; // [rsp+65F0h] [rbp+6570h]
  _BYTE *v452; // [rsp+65F8h] [rbp+6578h]
  __int64 v453; // [rsp+6600h] [rbp+6580h]
  const __m128i *v454; // [rsp+6608h] [rbp+6588h]
  const __m128i *v455; // [rsp+6610h] [rbp+6590h]
  __int64 v456; // [rsp+6618h] [rbp+6598h]
  volatile signed __int64 **v457; // [rsp+6620h] [rbp+65A0h]
  __int64 v458; // [rsp+6628h] [rbp+65A8h]
  volatile signed __int64 **v459; // [rsp+6630h] [rbp+65B0h]
  _BYTE *v460; // [rsp+6638h] [rbp+65B8h]
  __int64 v461; // [rsp+6640h] [rbp+65C0h]
  const __m128i *v462; // [rsp+6648h] [rbp+65C8h]
  const __m128i *v463; // [rsp+6650h] [rbp+65D0h]
  __int64 v464; // [rsp+6658h] [rbp+65D8h]
  __int64 v465; // [rsp+6660h] [rbp+65E0h]
  __int16 *v466; // [rsp+6668h] [rbp+65E8h]
  const __m128i *v467; // [rsp+6670h] [rbp+65F0h]
  __int64 v468; // [rsp+6678h] [rbp+65F8h]
  volatile signed __int64 **v469; // [rsp+6680h] [rbp+6600h]
  __int64 v470; // [rsp+6688h] [rbp+6608h]
  volatile signed __int64 **v471; // [rsp+6690h] [rbp+6610h]
  _BYTE *v472; // [rsp+6698h] [rbp+6618h]
  __int64 v473; // [rsp+66A0h] [rbp+6620h]
  const __m128i *v474; // [rsp+66A8h] [rbp+6628h]
  const __m128i *v475; // [rsp+66B0h] [rbp+6630h]
  __int64 v476; // [rsp+66B8h] [rbp+6638h]
  volatile signed __int64 **v477; // [rsp+66C0h] [rbp+6640h]
  __int64 v478; // [rsp+66C8h] [rbp+6648h]
  volatile signed __int64 **v479; // [rsp+66D0h] [rbp+6650h]
  _BYTE *v480; // [rsp+66D8h] [rbp+6658h]
  __int64 v481; // [rsp+66E0h] [rbp+6660h]
  const __m128i *v482; // [rsp+66E8h] [rbp+6668h]
  _QWORD *v483; // [rsp+66F0h] [rbp+6670h]
  __int64 v484; // [rsp+6700h] [rbp+6680h]
  const __m128i *v485; // [rsp+6708h] [rbp+6688h]
  __int64 v486; // [rsp+6740h] [rbp+66C0h]
  const __m128i *v487; // [rsp+6748h] [rbp+66C8h]
  __int64 v488; // [rsp+6750h] [rbp+66D0h]
  const __m128i *v489; // [rsp+6758h] [rbp+66D8h]
  volatile signed __int64 **v490; // [rsp+6760h] [rbp+66E0h]
  volatile signed __int64 **v491; // [rsp+6768h] [rbp+66E8h]
  _BYTE *v492; // [rsp+6770h] [rbp+66F0h]
  __int64 v493; // [rsp+6778h] [rbp+66F8h]
  volatile signed __int64 **v494; // [rsp+6780h] [rbp+6700h]
  __int64 v495; // [rsp+6788h] [rbp+6708h]
  volatile signed __int64 **v496; // [rsp+6790h] [rbp+6710h]
  _BYTE *v497; // [rsp+6798h] [rbp+6718h]
  __int64 v498; // [rsp+67A0h] [rbp+6720h]
  __int64 v499; // [rsp+67A8h] [rbp+6728h]
  volatile signed __int64 **v500; // [rsp+67B0h] [rbp+6730h]
  __int64 v501; // [rsp+67B8h] [rbp+6738h]
  volatile signed __int64 **v502; // [rsp+67C0h] [rbp+6740h]
  _BYTE *v503; // [rsp+67C8h] [rbp+6748h]
  __int64 v504; // [rsp+67D0h] [rbp+6750h]
  __int64 v505; // [rsp+67D8h] [rbp+6758h]
  __int64 v506; // [rsp+67E0h] [rbp+6760h]
  volatile signed __int64 **v507; // [rsp+67E8h] [rbp+6768h]
  __int64 v508; // [rsp+67F0h] [rbp+6770h]
  volatile signed __int64 **v509; // [rsp+67F8h] [rbp+6778h]
  _BYTE *v510; // [rsp+6800h] [rbp+6780h]
  __int64 v511; // [rsp+6808h] [rbp+6788h]
  __int64 v512; // [rsp+6810h] [rbp+6790h]
  unsigned __int64 v513; // [rsp+6818h] [rbp+6798h]
  __int64 v514; // [rsp+6820h] [rbp+67A0h]
  __int64 v515; // [rsp+6828h] [rbp+67A8h]
  volatile signed __int64 **v516; // [rsp+6830h] [rbp+67B0h]
  __int64 v517; // [rsp+6838h] [rbp+67B8h]
  volatile signed __int64 **v518; // [rsp+6840h] [rbp+67C0h]
  _BYTE *v519; // [rsp+6848h] [rbp+67C8h]
  __int64 v520; // [rsp+6850h] [rbp+67D0h]
  __int64 v521; // [rsp+6858h] [rbp+67D8h]
  _BYTE *v522; // [rsp+6860h] [rbp+67E0h]
  __int64 v523; // [rsp+6868h] [rbp+67E8h]
  unsigned __int64 v524; // [rsp+6870h] [rbp+67F0h]
  __int64 v525; // [rsp+6878h] [rbp+67F8h]
  __int64 v526; // [rsp+6880h] [rbp+6800h]
  volatile signed __int64 **v527; // [rsp+6888h] [rbp+6808h]
  __int64 v528; // [rsp+6890h] [rbp+6810h]
  volatile signed __int64 **v529; // [rsp+6898h] [rbp+6818h]
  _BYTE *v530; // [rsp+68A0h] [rbp+6820h]
  const __m128i *v531; // [rsp+68A8h] [rbp+6828h]
  __int64 v532; // [rsp+68B0h] [rbp+6830h]
  volatile signed __int64 **v533; // [rsp+68B8h] [rbp+6838h]
  __int64 v534; // [rsp+68C0h] [rbp+6840h]
  volatile signed __int64 **v535; // [rsp+68C8h] [rbp+6848h]
  _BYTE *v536; // [rsp+68D0h] [rbp+6850h]
  __int64 v537; // [rsp+68D8h] [rbp+6858h]
  const __m128i *v538; // [rsp+68E0h] [rbp+6860h]
  __int64 v539; // [rsp+68E8h] [rbp+6868h]
  __int64 v540; // [rsp+68F0h] [rbp+6870h]
  __int64 v541; // [rsp+68F8h] [rbp+6878h]
  __int64 v542; // [rsp+6900h] [rbp+6880h]
  volatile signed __int64 **v543; // [rsp+6908h] [rbp+6888h]
  __int64 v544; // [rsp+6910h] [rbp+6890h]
  volatile signed __int64 **v545; // [rsp+6918h] [rbp+6898h]
  _BYTE *v546; // [rsp+6920h] [rbp+68A0h]
  const __m128i *v547; // [rsp+6928h] [rbp+68A8h]
  __int64 v548; // [rsp+6930h] [rbp+68B0h]
  volatile signed __int64 **v549; // [rsp+6938h] [rbp+68B8h]
  __int64 v550; // [rsp+6940h] [rbp+68C0h]
  volatile signed __int64 **v551; // [rsp+6948h] [rbp+68C8h]
  _BYTE *v552; // [rsp+6950h] [rbp+68D0h]
  __int64 v553; // [rsp+6958h] [rbp+68D8h]
  const __m128i *v554; // [rsp+6960h] [rbp+68E0h]
  const __m128i *v555; // [rsp+6968h] [rbp+68E8h]
  __int64 v556; // [rsp+6970h] [rbp+68F0h]
  volatile signed __int64 **v557; // [rsp+6978h] [rbp+68F8h]
  __int64 v558; // [rsp+6980h] [rbp+6900h]
  volatile signed __int64 **v559; // [rsp+6988h] [rbp+6908h]
  _BYTE *v560; // [rsp+6990h] [rbp+6910h]
  __int64 v561; // [rsp+6998h] [rbp+6918h]
  const __m128i *v562; // [rsp+69A0h] [rbp+6920h]
  __int64 v563; // [rsp+69A8h] [rbp+6928h]
  __int64 v564; // [rsp+69B0h] [rbp+6930h]
  volatile signed __int64 **v565; // [rsp+69B8h] [rbp+6938h]
  __int64 v566; // [rsp+69C0h] [rbp+6940h]
  volatile signed __int64 **v567; // [rsp+69C8h] [rbp+6948h]
  _BYTE *v568; // [rsp+69D0h] [rbp+6950h]
  __int64 v569; // [rsp+69D8h] [rbp+6958h]
  volatile signed __int64 **v570; // [rsp+69E0h] [rbp+6960h]
  __int64 v571; // [rsp+69E8h] [rbp+6968h]
  volatile signed __int64 **v572; // [rsp+69F0h] [rbp+6970h]
  _BYTE *v573; // [rsp+69F8h] [rbp+6978h]
  __int64 v574; // [rsp+6A00h] [rbp+6980h]
  const __m128i *v575; // [rsp+6A08h] [rbp+6988h]
  __int64 v576; // [rsp+6A10h] [rbp+6990h]
  volatile signed __int64 **v577; // [rsp+6A18h] [rbp+6998h]
  __int64 v578; // [rsp+6A20h] [rbp+69A0h]
  volatile signed __int64 **v579; // [rsp+6A28h] [rbp+69A8h]
  _BYTE *v580; // [rsp+6A30h] [rbp+69B0h]
  __int64 v581; // [rsp+6A38h] [rbp+69B8h]
  const __m128i *v582; // [rsp+6A40h] [rbp+69C0h]
  __int64 v583; // [rsp+6A48h] [rbp+69C8h]
  __int64 v584; // [rsp+6A50h] [rbp+69D0h]
  __int64 v585; // [rsp+6A58h] [rbp+69D8h]
  volatile signed __int64 **v586; // [rsp+6A60h] [rbp+69E0h]
  __int64 v587; // [rsp+6A68h] [rbp+69E8h]
  volatile signed __int64 **v588; // [rsp+6A70h] [rbp+69F0h]
  _BYTE *v589; // [rsp+6A78h] [rbp+69F8h]
  const __m128i *v590; // [rsp+6A80h] [rbp+6A00h]
  __int64 v591; // [rsp+6A88h] [rbp+6A08h]
  volatile signed __int64 **v592; // [rsp+6A90h] [rbp+6A10h]
  __int64 v593; // [rsp+6A98h] [rbp+6A18h]
  volatile signed __int64 **v594; // [rsp+6AA0h] [rbp+6A20h]
  _BYTE *v595; // [rsp+6AA8h] [rbp+6A28h]
  __int64 v596; // [rsp+6AB0h] [rbp+6A30h]
  const __m128i *v597; // [rsp+6AB8h] [rbp+6A38h]
  const __m128i *v598; // [rsp+6AC0h] [rbp+6A40h]
  __int64 v599; // [rsp+6AC8h] [rbp+6A48h]
  const __m128i *v600; // [rsp+6AD0h] [rbp+6A50h]
  __int64 v601; // [rsp+6AD8h] [rbp+6A58h]
  volatile signed __int64 **v602; // [rsp+6AE0h] [rbp+6A60h]
  __int64 v603; // [rsp+6AE8h] [rbp+6A68h]
  volatile signed __int64 **v604; // [rsp+6AF0h] [rbp+6A70h]
  _BYTE *v605; // [rsp+6AF8h] [rbp+6A78h]
  __int64 v606; // [rsp+6B00h] [rbp+6A80h]
  const __m128i *v607; // [rsp+6B08h] [rbp+6A88h]
  const __m128i *v608; // [rsp+6B10h] [rbp+6A90h]
  __int64 v609; // [rsp+6B18h] [rbp+6A98h]
  __int64 v610; // [rsp+6B20h] [rbp+6AA0h]
  const __m128i *v611; // [rsp+6B28h] [rbp+6AA8h]
  __int16 *v612; // [rsp+6B30h] [rbp+6AB0h]
  const __m128i *v613; // [rsp+6B38h] [rbp+6AB8h]
  __int64 v614; // [rsp+6B40h] [rbp+6AC0h]
  volatile signed __int64 **v615; // [rsp+6B48h] [rbp+6AC8h]
  __int64 v616; // [rsp+6B50h] [rbp+6AD0h]
  volatile signed __int64 **v617; // [rsp+6B58h] [rbp+6AD8h]
  _BYTE *v618; // [rsp+6B60h] [rbp+6AE0h]
  __int64 v619; // [rsp+6B68h] [rbp+6AE8h]
  __m128i *v620; // [rsp+6B70h] [rbp+6AF0h]
  const __m128i *v621; // [rsp+6B78h] [rbp+6AF8h]
  __int16 *v622; // [rsp+6B80h] [rbp+6B00h]
  const __m128i *v623; // [rsp+6B88h] [rbp+6B08h]
  __int64 v624; // [rsp+6B90h] [rbp+6B10h]
  volatile signed __int64 **v625; // [rsp+6B98h] [rbp+6B18h]
  __int64 v626; // [rsp+6BA0h] [rbp+6B20h]
  volatile signed __int64 **v627; // [rsp+6BA8h] [rbp+6B28h]
  _BYTE *v628; // [rsp+6BB0h] [rbp+6B30h]
  __int64 v629; // [rsp+6BB8h] [rbp+6B38h]
  const __m128i *v630; // [rsp+6BC0h] [rbp+6B40h]
  const __m128i *v631; // [rsp+6BC8h] [rbp+6B48h]
  __int64 v632; // [rsp+6BD0h] [rbp+6B50h]
  __int64 v633; // [rsp+6BD8h] [rbp+6B58h]
  volatile signed __int64 **v634; // [rsp+6BE0h] [rbp+6B60h]
  __int64 v635; // [rsp+6BE8h] [rbp+6B68h]
  volatile signed __int64 **v636; // [rsp+6BF0h] [rbp+6B70h]
  _BYTE *v637; // [rsp+6BF8h] [rbp+6B78h]
  __int64 v638; // [rsp+6C00h] [rbp+6B80h]
  const __m128i *v639; // [rsp+6C08h] [rbp+6B88h]
  volatile signed __int64 **v640; // [rsp+6C10h] [rbp+6B90h]
  __int64 v641; // [rsp+6C18h] [rbp+6B98h]
  const __m128i *v642; // [rsp+6C20h] [rbp+6BA0h]
  const __m128i *v643; // [rsp+6C28h] [rbp+6BA8h]
  __int64 v644; // [rsp+6C30h] [rbp+6BB0h]
  volatile signed __int64 **v645; // [rsp+6C38h] [rbp+6BB8h]
  __int64 v646; // [rsp+6C40h] [rbp+6BC0h]
  volatile signed __int64 **v647; // [rsp+6C48h] [rbp+6BC8h]
  _BYTE *v648; // [rsp+6C50h] [rbp+6BD0h]
  __int64 v649; // [rsp+6C58h] [rbp+6BD8h]
  const __m128i *v650; // [rsp+6C60h] [rbp+6BE0h]
  int v651; // [rsp+6C68h] [rbp+6BE8h]
  int v652; // [rsp+6C6Ch] [rbp+6BECh]
  __int64 v653; // [rsp+6C70h] [rbp+6BF0h]
  const __m128i *v654; // [rsp+6C78h] [rbp+6BF8h]
  const __m128i *v655; // [rsp+6C80h] [rbp+6C00h]
  __int64 v656; // [rsp+6C88h] [rbp+6C08h]
  volatile signed __int64 **v657; // [rsp+6C90h] [rbp+6C10h]
  __int64 v658; // [rsp+6C98h] [rbp+6C18h]
  volatile signed __int64 **v659; // [rsp+6CA0h] [rbp+6C20h]
  _BYTE *v660; // [rsp+6CA8h] [rbp+6C28h]
  __int64 v661; // [rsp+6CB0h] [rbp+6C30h]
  const __m128i *v662; // [rsp+6CB8h] [rbp+6C38h]
  char *v663; // [rsp+6CC0h] [rbp+6C40h]
  __int64 v664; // [rsp+6CC8h] [rbp+6C48h]
  unsigned __int64 v665; // [rsp+6CD0h] [rbp+6C50h]
  const __m128i *v666; // [rsp+6CD8h] [rbp+6C58h]
  __int64 v667; // [rsp+6CE0h] [rbp+6C60h]
  volatile signed __int64 **v668; // [rsp+6CE8h] [rbp+6C68h]
  __int64 v669; // [rsp+6CF0h] [rbp+6C70h]
  volatile signed __int64 **v670; // [rsp+6CF8h] [rbp+6C78h]
  _BYTE *v671; // [rsp+6D00h] [rbp+6C80h]
  __int64 v672; // [rsp+6D08h] [rbp+6C88h]
  const __m128i *v673; // [rsp+6D10h] [rbp+6C90h]
  const __m128i *v674; // [rsp+6D18h] [rbp+6C98h]
  __int64 v675; // [rsp+6D20h] [rbp+6CA0h]
  volatile signed __int64 **v676; // [rsp+6D28h] [rbp+6CA8h]
  __int64 v677; // [rsp+6D30h] [rbp+6CB0h]
  volatile signed __int64 **v678; // [rsp+6D38h] [rbp+6CB8h]
  _BYTE *v679; // [rsp+6D40h] [rbp+6CC0h]
  __int64 v680; // [rsp+6D48h] [rbp+6CC8h]
  const __m128i *v681; // [rsp+6D50h] [rbp+6CD0h]
  _WORD *v682; // [rsp+6D58h] [rbp+6CD8h]
  char v683; // [rsp+6D63h] [rbp+6CE3h] BYREF
  int v684; // [rsp+6D64h] [rbp+6CE4h]
  int v685; // [rsp+6D68h] [rbp+6CE8h]
  int v686; // [rsp+6D6Ch] [rbp+6CECh]
  __int64 v687; // [rsp+6D70h] [rbp+6CF0h]
  volatile signed __int64 **v688; // [rsp+6D78h] [rbp+6CF8h]
  __int64 v689; // [rsp+6D80h] [rbp+6D00h]
  volatile signed __int64 **v690; // [rsp+6D88h] [rbp+6D08h]
  _BYTE *v691; // [rsp+6D90h] [rbp+6D10h]
  __int64 v692; // [rsp+6D98h] [rbp+6D18h]
  const __m128i *v693; // [rsp+6DA0h] [rbp+6D20h]
  __int64 v694; // [rsp+6DA8h] [rbp+6D28h]
  __int64 v695; // [rsp+6DB0h] [rbp+6D30h]
  __int64 v696; // [rsp+6DB8h] [rbp+6D38h]
  const __m128i *v697; // [rsp+6DC0h] [rbp+6D40h]
  __int64 v698; // [rsp+6DC8h] [rbp+6D48h]
  char *v699; // [rsp+6DD0h] [rbp+6D50h]
  __int64 v700; // [rsp+6DD8h] [rbp+6D58h]
  _BYTE *v701; // [rsp+6DE0h] [rbp+6D60h]
  __int64 v702; // [rsp+6DE8h] [rbp+6D68h]
  unsigned __int64 v703; // [rsp+6DF0h] [rbp+6D70h]
  const __m128i *v704; // [rsp+6DF8h] [rbp+6D78h]
  __int64 v705; // [rsp+6E00h] [rbp+6D80h]
  volatile signed __int64 **v706; // [rsp+6E08h] [rbp+6D88h]
  __int64 v707; // [rsp+6E10h] [rbp+6D90h]
  volatile signed __int64 **v708; // [rsp+6E18h] [rbp+6D98h]
  _BYTE *v709; // [rsp+6E20h] [rbp+6DA0h]
  __int64 v710; // [rsp+6E28h] [rbp+6DA8h]
  const __m128i *v711; // [rsp+6E30h] [rbp+6DB0h]
  char *v712; // [rsp+6E38h] [rbp+6DB8h]
  __int64 v713; // [rsp+6E40h] [rbp+6DC0h]
  const __m128i *v714; // [rsp+6E48h] [rbp+6DC8h]
  volatile signed __int64 **v715; // [rsp+6E50h] [rbp+6DD0h]
  __int64 v716; // [rsp+6E58h] [rbp+6DD8h]
  unsigned __int64 v717; // [rsp+6E60h] [rbp+6DE0h]
  char *v718; // [rsp+6E68h] [rbp+6DE8h]
  __int64 v719; // [rsp+6E70h] [rbp+6DF0h]
  __int64 v720; // [rsp+6E78h] [rbp+6DF8h]
  const __m128i *v721; // [rsp+6E80h] [rbp+6E00h]
  __int64 v722; // [rsp+6E88h] [rbp+6E08h]
  __int64 v723; // [rsp+6E90h] [rbp+6E10h]
  __int64 v724; // [rsp+6E98h] [rbp+6E18h]
  const __m128i *v725; // [rsp+6EA0h] [rbp+6E20h]
  _BYTE *v726; // [rsp+6EA8h] [rbp+6E28h]
  const __m128i *v727; // [rsp+6EB0h] [rbp+6E30h]
  const __m128i *v728; // [rsp+6EB8h] [rbp+6E38h]
  __m128i *v729; // [rsp+6EC0h] [rbp+6E40h]
  const __m128i *v730; // [rsp+6EC8h] [rbp+6E48h]
  const __m128i *v731; // [rsp+6ED0h] [rbp+6E50h]
  __int64 v732; // [rsp+6ED8h] [rbp+6E58h]
  __int64 v733; // [rsp+6EE0h] [rbp+6E60h]
  const __m128i *v734; // [rsp+6EE8h] [rbp+6E68h]
  __m128i *v735; // [rsp+6EF0h] [rbp+6E70h]
  const __m128i *v736; // [rsp+6EF8h] [rbp+6E78h]
  const __m128i *v737; // [rsp+6F00h] [rbp+6E80h]
  __int64 v738; // [rsp+6F08h] [rbp+6E88h]
  __int16 *v739; // [rsp+6F10h] [rbp+6E90h]
  unsigned __int64 v740; // [rsp+6F18h] [rbp+6E98h]
  const __m128i *v741; // [rsp+6F20h] [rbp+6EA0h]
  _BYTE *v742; // [rsp+6F28h] [rbp+6EA8h]
  const __m128i *v743; // [rsp+6F30h] [rbp+6EB0h]
  __int64 v744; // [rsp+6F38h] [rbp+6EB8h]
  volatile signed __int64 **v745; // [rsp+6F40h] [rbp+6EC0h]
  volatile signed __int64 **v746; // [rsp+6F48h] [rbp+6EC8h]
  __int64 v747; // [rsp+6F50h] [rbp+6ED0h]
  _BYTE *v748; // [rsp+6F58h] [rbp+6ED8h]
  __int64 v749; // [rsp+6F60h] [rbp+6EE0h]
  const __m128i *v750; // [rsp+6F68h] [rbp+6EE8h]
  __int64 v751; // [rsp+6F70h] [rbp+6EF0h]
  __int64 v752; // [rsp+6F78h] [rbp+6EF8h]

  v752 = -2;
  v6 = a3;
  v7 = a2;
  v9 = *(unsigned __int8 *)(a2 + 476);
  v751 = a2;
  switch ( v9 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 472) = 0;
      *(_QWORD *)(a2 + 465) = 0;
      *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 456);
      v10 = sub_140AEBC50();
      v11 = v751;
      *(_BYTE *)(v751 + 464) = v10;
      endpoint_for_protocol(v340, *(_QWORD *)(v11 + 272), v10);
      v12 = *(_QWORD *)&v340[8];
      v13 = *(_QWORD *)&v340[24];
      v14 = *(_QWORD *)&v340[16];
      if ( v340[0] )
      {
        v15 = -1;
        v16 = *(_BYTE **)&v340[16];
        v17 = (_BYTE *)v751;
        goto LABEL_251;
      }
      *(_BYTE *)(v751 + 475) = 0;
      v347.m128i_i64[0] = v12;
      v347.m128i_i64[1] = v14;
      *(_QWORD *)&v348 = v13;
      v695 = v14;
      v694 = v12;
      sub_140F919E0(v340, &v347);
      v750 = (const __m128i *)v14;
      v747 = v12;
      v14 = *(_QWORD *)v340;
      if ( *(_QWORD *)v340 == -1 )
      {
        sub_141684120(&v347, &v340[8], 136);
        v315.m128i_i64[0] = (__int64)&v347;
        v315.m128i_i64[1] = (__int64)sub_140F8DAB0;
        sub_14149C0F0(&v330, &unk_141781968, &v315);
        v695 = (__int64)v750;
        v694 = v747;
        sub_14068B080((__int64)&v347);
        v748 = (_BYTE *)v330.m128i_i64[1];
        v12 = v330.m128i_i64[0];
        v13 = v331;
        v15 = -1;
        goto LABEL_198;
      }
      v28 = *(_QWORD *)&v340[24];
      sub_141684120(&v347, &v340[32], 192);
      v29 = _mm_loadu_si128((const __m128i *)&v340[8]);
      v7 = v751;
      *(_BYTE *)(v751 + 466) = 1;
      *(_QWORD *)v7 = v14;
      *(__m128i *)(v7 + 8) = v29;
      *(_QWORD *)(v7 + 24) = v28;
      sub_141684120(v7 + 32, &v347, 192);
      v5 = v750;
      if ( *(_BYTE *)(v7 + 464) == 2 )
        goto LABEL_18;
      v80 = *(_QWORD *)(v7 + 272);
      v81 = *(_QWORD *)(v80 + 32);
      v82 = *(_QWORD *)(v80 + 40);
      v721 = v750;
      v14 = v747;
      v720 = v747;
      v83.m128i_i64[0] = sub_14033BC10(v81, v82);
      v317 = v83;
      if ( !v83.m128i_i64[1] )
      {
        v721 = v5;
        v720 = v14;
        sub_1406B4070(v340);
        v748 = *(_BYTE **)&v340[8];
        v12 = *(_QWORD *)v340;
        v13 = *(_QWORD *)&v340[16];
LABEL_195:
        v17 = (_BYTE *)v751;
        goto LABEL_196;
      }
      v315.m128i_i64[0] = (__int64)&v317;
      v315.m128i_i64[1] = (__int64)sub_14041F680;
      v721 = v5;
      v720 = v14;
      sub_14149C0F0(&v330, &unk_141781F80, &v315);
      v746 = (volatile signed __int64 **)v330.m128i_i64[1];
      v749 = v330.m128i_i64[0];
      if ( (_QWORD)v331 )
      {
        for ( i = 0; (_QWORD)v331 != i; ++i )
        {
          v85 = *(_BYTE *)(v330.m128i_i64[1] + i);
          if ( v85 > 0x1Fu )
          {
            if ( v85 == 127 )
              goto LABEL_65;
          }
          else if ( v85 != 9 )
          {
LABEL_65:
            v330.m128i_i64[0] = (__int64)&v683;
            v330.m128i_i64[1] = (__int64)sub_141444540;
            sub_14149C0F0(&v347, &unk_1417819A4, &v330);
            v748 = (_BYTE *)v347.m128i_i64[1];
            v12 = v347.m128i_i64[0];
            v13 = v348;
            v17 = (_BYTE *)v751;
            v14 = v747;
            v5 = v750;
            if ( v749 )
            {
              v94 = (_BYTE *)v751;
              sub_140001660(v746, v749, 1);
              v17 = v94;
              v15 = -1;
              if ( !v17[466] )
                goto LABEL_250;
LABEL_197:
              v695 = (__int64)v5;
              v694 = v14;
              sub_14068B170((__int64)v17);
LABEL_198:
              v17 = (_BYTE *)v751;
              goto LABEL_250;
            }
LABEL_196:
            v15 = -1;
            if ( !v17[466] )
              goto LABEL_250;
            goto LABEL_197;
          }
        }
      }
      sub_1414464F0(v340, v330.m128i_i64[1], v331);
      v340[32] = 0;
      v91 = _mm_loadu_si128((const __m128i *)v340);
      v348 = *(_OWORD *)&v340[16];
      v347 = v91;
      *(_QWORD *)&v349 = *(_QWORD *)&v340[32];
      v92 = v91.m128i_i64[1];
      v93 = *(_QWORD *)&v340[16];
      v96 = *((_BYTE **)&v348 + 1);
      v313.m128i_i32[0] = *(_DWORD *)((char *)&v349 + 1);
      *(__int32 *)((char *)v313.m128i_i32 + 3) = DWORD1(v349);
      v97 = v751;
      v98 = v747;
      if ( v749 )
      {
        v748 = *((_BYTE **)&v348 + 1);
        v99 = v751;
        sub_140001660(v746, v749, 1);
        v96 = v748;
        v97 = v99;
        v92 = v91.m128i_i64[1];
        v98 = v747;
      }
      *(_QWORD *)v340 = v91.m128i_i64[0];
      *(_QWORD *)&v340[8] = v92;
      *(_QWORD *)&v340[16] = v93;
      *(_QWORD *)&v340[24] = v96;
      v340[32] = 0;
      *(_DWORD *)&v340[33] = v313.m128i_i32[0];
      *(_DWORD *)&v340[36] = *(__int32 *)((char *)v313.m128i_i32 + 3);
      v331 = xmmword_141781FA0;
      v330 = _mm_loadu_si128((const __m128i *)&xmmword_141781F90);
      v5 = v750;
      v721 = v750;
      v720 = v98;
      sub_1406C1420(&v347, v97, &v330, v340);
      if ( (_BYTE)v349 != 2 )
      {
        v100 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v347.m128i_i64[0] + 32);
        v721 = v5;
        v720 = v98;
        v100((char *)&v348 + 8, v347.m128i_i64[1], v348);
      }
      v331 = xmmword_141781FC0;
      v330 = _mm_loadu_si128((const __m128i *)&xmmword_141781FB0);
      *(_QWORD *)v340 = off_14177FD60;
      *(_QWORD *)&v340[8] = aAimamiTypemami_0;
      *(_OWORD *)&v340[16] = 0xFu;
      v340[32] = 0;
      v721 = v5;
      v720 = v98;
      sub_1406C1420(&v347, v751, &v330, v340);
      if ( (_BYTE)v349 != 2 )
      {
        v101 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v347.m128i_i64[0] + 32);
        v721 = v5;
        v720 = v98;
        v101((char *)&v348 + 8, v347.m128i_i64[1], v348);
      }
      v7 = v751;
LABEL_18:
      *(_BYTE *)(v7 + 466) = 0;
      v746 = (volatile signed __int64 **)(v7 + 480);
      sub_141684120(v7 + 480, v7, 224);
      v748 = (_BYTE *)(v7 + 11160);
      *(_BYTE *)(v7 + 11160) = 0;
LABEL_19:
      v745 = (volatile signed __int64 **)(v7 + 704);
      sub_141684120(v7 + 704, v746, 224);
      *(_QWORD *)(v7 + 928) = 2;
      *(_WORD *)(v7 + 11152) = 0;
      v749 = v7 + 11153;
      v27 = 0;
LABEL_20:
      v750 = v5;
      v30 = *(_QWORD *)(v7 + 704);
      v31 = v7 + 712;
      if ( v30 == -1 )
      {
        v731 = v6;
        sub_141684120(v7 + 1008, v31, 136);
        *(_QWORD *)(v7 + 1000) = -1;
        v733 = *(_QWORD *)(v7 + 1008);
        v46 = (_QWORD *)v7;
        v47 = *(_QWORD *)(v7 + 1016);
        v735 = (__m128i *)v46[128];
        v729 = (__m128i *)v46[129];
        v6 = (const __m128i *)v46[130];
        v743 = (const __m128i *)v46[131];
        v728 = (const __m128i *)v46[132];
        v736 = (const __m128i *)v46[133];
        v727 = (const __m128i *)v46[134];
        v734 = (const __m128i *)v46[135];
        v730 = (const __m128i *)v46[136];
        v742 = (_BYTE *)v46[137];
        v723 = v46[138];
        v724 = v46[139];
        v738 = v46[140];
        v737 = (const __m128i *)v46[141];
        v739 = (__int16 *)v46[142];
        v4 = 2;
        goto LABEL_193;
      }
      *(_QWORD *)(v7 + 1000) = v30;
      sub_141684120(v7 + 1008, v31, 136);
      v32 = *(_OWORD *)(v7 + 864);
      v33 = *(_OWORD *)(v7 + 880);
      v34 = *(_OWORD *)(v7 + 896);
      *(_OWORD *)(v7 + 1144) = *(_OWORD *)(v7 + 848);
      *(_OWORD *)(v7 + 1160) = v32;
      *(_OWORD *)(v7 + 1176) = v33;
      *(_OWORD *)(v7 + 1192) = v34;
      *(_OWORD *)(v7 + 1208) = *(_OWORD *)(v7 + 912);
      sub_141684120(&v340[8], v7 + 1000, 224);
      sub_141684120(v309, v340, 232);
      v4 = v7 + 1224;
      *(_QWORD *)(v7 + 1224) = 0;
      sub_141684120(v7 + 1232, v309, 232);
      v35 = *(_OWORD *)(v7 + 944);
      v36 = *(_OWORD *)(v7 + 960);
      v37 = *(_OWORD *)(v7 + 976);
      *(_OWORD *)(v7 + 1464) = *(_OWORD *)(v7 + 928);
      *(_OWORD *)(v7 + 1480) = v35;
      *(_OWORD *)(v7 + 1496) = v36;
      *(_OWORD *)(v7 + 1512) = v37;
      *(_QWORD *)(v7 + 1528) = *(_QWORD *)(v7 + 992);
      *(_BYTE *)(v7 + 1898) = v27;
      v663 = (char *)(v7 + 1899);
      *(_BYTE *)(v7 + 1899) = 0;
      v38 = 0;
LABEL_22:
      *(_BYTE *)(v7 + 1902) = 1;
      v39 = v7 + 1536;
      sub_141684120(v7 + 1536, v7 + 1240, 224);
      *(_OWORD *)(v7 + 1760) = *(_OWORD *)(v7 + 1464);
      *(_OWORD *)(v7 + 1776) = *(_OWORD *)(v7 + 1480);
      *(_OWORD *)(v7 + 1792) = *(_OWORD *)(v7 + 1496);
      *(__m128i *)(v7 + 1808) = _mm_loadu_si128((const __m128i *)(v7 + 1512));
      *(_QWORD *)(v7 + 1824) = *(_QWORD *)(v7 + 1528);
      *(_BYTE *)(v7 + 1900) = v27;
      *(_BYTE *)(v7 + 1901) = 1;
      v40 = *(_QWORD *)(v7 + 1232);
      *(_QWORD *)(v7 + 1904) = v38;
      *(_QWORD *)(v7 + 1912) = v40;
      v639 = v750;
      v41 = v747;
      v638 = v747;
      v637 = v748;
      v636 = v746;
      v635 = v749;
      v634 = v745;
      v744 = v4;
      v633 = v4;
      sub_1406AD450(v340, v39);
      v42 = *(_OWORD *)&v340[16];
      if ( *(_QWORD *)v340 != -1 )
      {
        v733 = *(_QWORD *)v340;
        v731 = v6;
        v729 = *(__m128i **)&v340[24];
        v735 = *(__m128i **)&v340[16];
        v743 = *(const __m128i **)&v340[40];
        v6 = *(const __m128i **)&v340[32];
        v736 = *(const __m128i **)&v340[56];
        v728 = *(const __m128i **)&v340[48];
        v734 = *(const __m128i **)&v340[72];
        v727 = *(const __m128i **)&v340[64];
        v742 = *(_BYTE **)&v340[88];
        v730 = *(const __m128i **)&v340[80];
        v723 = *(_QWORD *)&v340[96];
        v738 = *((_QWORD *)&v341 + 1);
        v724 = v341;
        v737 = (const __m128i *)v342.m128i_i64[0];
        LOWORD(v43) = *(_WORD *)&v340[8];
        v44 = *(_QWORD *)&v340[8] >> 16;
        v739 = (__int16 *)v342.m128i_i64[1];
        v4 = v751;
        v45 = v744;
LABEL_187:
        if ( *(_QWORD *)(v4 + 1904) )
        {
          v167 = *(volatile signed __int64 **)(v751 + 1912);
          if ( v167 )
          {
            if ( !_InterlockedDecrement64(v167) )
            {
              v582 = v750;
              v581 = v41;
              v580 = v748;
              v579 = v746;
              v578 = v749;
              v577 = v745;
              v576 = v45;
              sub_1410D21C0(v751 + 1912);
            }
          }
        }
        v168 = v751;
        *(_BYTE *)(v751 + 1901) = 0;
        v575 = v750;
        v747 = v41;
        v574 = v41;
        v573 = v748;
        v572 = v746;
        v571 = v749;
        v570 = v745;
        v569 = v45;
        sub_14068B170(v168 + 1536);
        v4 = 2;
        v169 = (_BYTE *)v751;
LABEL_192:
        v169[1902] = 0;
        sub_141684120(v306, v305, 1152);
        v405 = _mm_load_si128(&v395);
        v406 = v396;
        v407 = v397;
        v408 = v398;
        v409 = v399;
        sub_141684120(v323, v322, 141);
        v169[1899] = 1;
        v482 = v750;
        v481 = v747;
        v480 = v748;
        v479 = v746;
        v478 = v749;
        v477 = v745;
        sub_14068AA80(v45);
        v47 = (v44 << 16) | (unsigned __int16)v43;
LABEL_193:
        sub_141684120(v302, v306, 1152);
        v415 = v405;
        v416 = v406;
        v417 = v407;
        v418 = v408;
        v419 = v409;
        sub_141684120(v312, v323, 141);
        *(_BYTE *)v749 = 1;
        *v748 = 1;
        sub_141684120(v307, v302, 1152);
        v410 = _mm_load_si128(&v415);
        v411 = v416;
        v412 = v417;
        v413 = v418;
        v414 = v419;
        sub_141684120(&v327, v312, 141);
        if ( (_DWORD)v4 == 2 )
        {
          *(_QWORD *)v340 = v733;
          *(_QWORD *)&v340[8] = v47;
          *(_QWORD *)&v340[16] = v735;
          *(_QWORD *)&v340[24] = v729;
          *(_QWORD *)&v340[32] = v6;
          *(_QWORD *)&v340[40] = v743;
          *(_QWORD *)&v340[48] = v728;
          *(_QWORD *)&v340[56] = v736;
          *(_QWORD *)&v340[64] = v727;
          *(_QWORD *)&v340[72] = v734;
          *(_QWORD *)&v340[80] = v730;
          *(_QWORD *)&v340[88] = v742;
          *(_QWORD *)&v340[96] = v723;
          *(_QWORD *)&v341 = v724;
          *((_QWORD *)&v341 + 1) = v738;
          v342.m128i_i64[0] = (__int64)v737;
          v342.m128i_i64[1] = (__int64)v739;
          v330.m128i_i64[0] = (__int64)v340;
          v330.m128i_i64[1] = (__int64)sub_140F8DAB0;
          sub_14149C0F0(&v347, &unk_141781985, &v330);
          v5 = v750;
          v721 = v750;
          v14 = v747;
          v720 = v747;
          sub_14068B080((__int64)v340);
          v748 = (_BYTE *)v347.m128i_i64[1];
          v12 = v347.m128i_i64[0];
          v13 = v348;
          goto LABEL_195;
        }
        sub_141684120(v362, v307, 1152);
        v372 = v414;
        v371[0] = _mm_load_si128(&v410);
        v371[1] = v411;
        v371[2] = v412;
        v371[3] = v413;
        v347.m128i_i64[0] = v4;
        v347.m128i_i64[1] = v733;
        *(_QWORD *)&v348 = v47;
        *((_QWORD *)&v348 + 1) = v735;
        *(_QWORD *)&v349 = v729;
        *((_QWORD *)&v349 + 1) = v6;
        *(_QWORD *)&v350 = v743;
        *((_QWORD *)&v350 + 1) = v728;
        v351 = v736;
        v352 = v727;
        v353 = v734;
        v354 = v730;
        v355 = (__int64)v742;
        v356 = v723;
        v357 = v724;
        v358 = (_WORD *)v738;
        v359 = v737;
        v360 = v739;
        v361 = v682;
        v373 = 0;
        v374 = 1;
        v376 = v328;
        v375 = v327;
        v170 = v751;
        sub_141684120(v751 + 280, &v329, 136);
        *(_BYTE *)(v170 + 474) = 0;
        sub_141684120(&v340[24], &v347, 1384);
        *(_QWORD *)v340 = 1;
        *(_QWORD *)&v340[8] = 1;
        *(_QWORD *)&v340[16] = 1;
        v346 = 0;
        nullsub_1(v171);
        v172 = sub_140001650(1416, 8);
        if ( !v172 )
          sub_1416C2D31(8, 1416);
        v173 = (volatile signed __int64 *)v172;
        sub_141684120(v172, v340, 1416);
        v174 = _InterlockedIncrement64(v173);
        v6 = v731;
        if ( (v174 < 0) ^ v175 | (v174 == 0) )
          goto LABEL_275;
        *(_BYTE *)(v170 + 473) = 1;
        *(_QWORD *)(v170 + 224) = -1;
        *(_QWORD *)(v170 + 264) = v173;
        *(_BYTE *)(v170 + 472) = 1;
        v311[0] = v173;
        v427 = v750;
        v4 = v747;
        v426 = v747;
        v176 = sub_1407DCA30(128, &off_141782010);
        v177 = v751;
        *(_BYTE *)(v751 + 471) = 1;
        v313.m128i_i64[0] = v176;
        *(_BYTE *)(v177 + 470) = 1;
        *(_QWORD *)(v177 + 416) = v178;
        *(_QWORD *)v340 = 1;
        *(_QWORD *)&v340[8] = 1;
        *(_QWORD *)&v340[48] = 0;
        *(_QWORD *)&v340[56] = -2;
        nullsub_1(v179);
        v180 = sub_140001650(80, 8);
        if ( !v180 )
          sub_1416C2D31(8, 80);
        v181 = v180;
        *(_OWORD *)(v180 + 64) = *(_OWORD *)&v340[64];
        v182 = _mm_loadu_si128((const __m128i *)v340);
        v183 = *(_OWORD *)&v340[16];
        v184 = *(_OWORD *)&v340[32];
        *(_OWORD *)(v180 + 48) = *(_OWORD *)&v340[48];
        *(_OWORD *)(v180 + 32) = v184;
        *(_OWORD *)(v180 + 16) = v183;
        *(__m128i *)v180 = v182;
        if ( _InterlockedIncrement64((volatile signed __int64 *)v180) <= 0 )
LABEL_275:
          BUG();
        *(_BYTE *)(v177 + 469) = 1;
        v317.m128i_i64[0] = v180;
        *(_BYTE *)(v177 + 465) = 1;
        *(_QWORD *)(v177 + 480) = v180;
        v185 = v177 + 424;
        v186 = v750;
        v489 = v750;
        v488 = v4;
        sub_140AECBC0(v185);
        v187 = v751;
        *(_BYTE *)(v751 + 468) = 1;
        v188 = *(_BYTE *)(v187 + 464);
        *(_WORD *)(v187 + 471) = 0;
        *(_BYTE *)(v187 + 469) = 0;
        v344[288] = v188;
        *(_QWORD *)&v340[16] = v173;
        *(_QWORD *)&v340[24] = v176;
        *(_QWORD *)v340 = 1;
        *(_QWORD *)&v340[8] = v181;
        v344[289] = 0;
        v642 = v186;
        v641 = v4;
        v189 = sub_14054ECC0(v340, &off_141782028);
        v59 = v186;
        v190 = v751;
        *(_QWORD *)(v751 + 448) = v189;
        v191 = *(unsigned __int8 *)(v190 + 464);
        v192 = *(_QWORD *)(v190 + 272);
        v193 = *(_QWORD *)(v190 + 432);
        v194 = *(_QWORD *)(v190 + 440);
        v487 = v186;
        v486 = v4;
        start_message((unsigned int)v340, v192, v191, v193, v194);
        v195 = *(volatile signed __int64 ***)&v340[8];
        v13 = *(_QWORD *)&v340[24];
        v196 = *(_QWORD *)&v340[16];
        if ( v340[0] )
        {
          v12 = *(_QWORD *)&v340[8];
          v748 = *(_BYTE **)&v340[16];
LABEL_219:
          v58 = v751;
LABEL_220:
          *(_BYTE *)(v58 + 467) = 0;
          v204 = *(_QWORD *)(v58 + 448);
          v642 = v59;
          v641 = v4;
          if ( (unsigned __int8)sub_1412F2A80(v204) )
          {
            v642 = v59;
            v641 = v4;
            sub_1412E7580(v204);
          }
          v750 = v59;
          v747 = v4;
          v205 = v751;
          v206 = *(_QWORD *)(v751 + 424);
          if ( v206 )
            sub_140001660(*(_QWORD *)(v751 + 432), v206, 1);
          *(_BYTE *)(v205 + 468) = 0;
          if ( *(_BYTE *)(v205 + 465) )
          {
            v207 = *(_QWORD *)(v751 + 480);
            if ( v207 )
            {
              v749 = v751 + 480;
              v208 = _InterlockedOr64((volatile signed __int64 *)(v207 + 48), 4u);
              if ( (v208 & 0xA) == 8 )
              {
                v209 = v208;
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v207 + 16) + 16LL))(*(_QWORD *)(v207 + 24));
                v208 = v209;
              }
              if ( (v208 & 3) == 1 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v207 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                v210 = v208;
                sub_1412F0A10(v207 + 32);
                v208 = v210;
              }
              if ( (v208 & 2) != 0 )
              {
                v211 = *(_QWORD *)(v207 + 56);
                v212 = *(_QWORD *)(v207 + 64);
                *(_QWORD *)(v207 + 56) = -2;
                if ( (unsigned __int64)(v211 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                  sub_140001660(v212, v211, 1);
              }
              v213 = (__int64 *)v749;
              if ( *(_QWORD *)v749 && !_InterlockedDecrement64(*(volatile signed __int64 **)v749) )
              {
                v697 = v750;
                v696 = v747;
                sub_140573FA0(v213);
              }
            }
          }
          v214 = v751;
          *(_BYTE *)(v751 + 465) = 0;
          *(_BYTE *)(v214 + 469) = 0;
          v749 = v214 + 416;
          sub_140893210(v214 + 416);
          v215 = v749;
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v749) )
          {
            v654 = v750;
            v653 = v747;
            sub_140574470(v215);
          }
          v216 = v751;
          *(_WORD *)(v751 + 470) = 0;
          *(_BYTE *)(v216 + 472) = 0;
          v749 = v216 + 224;
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v216 + 264)) )
            sub_1405740A0(v751 + 264);
          v217 = *(_QWORD *)v749;
          v218 = v751;
          v14 = v747;
          v5 = v750;
          if ( *(_QWORD *)v749 != -1 )
          {
            v219 = 5;
            if ( v217 < 0 )
              v219 = v217 ^ 0x8000000000000000uLL;
            if ( v219 >= 4 )
            {
              v220 = 224;
              if ( v219 == 4 )
              {
                v217 = *(_QWORD *)(v751 + 232);
                v220 = 232;
                if ( (unsigned __int64)v217 > 0xFFFFFFFFFFFFFFFDuLL )
                  goto LABEL_249;
              }
            }
            else
            {
              v217 = *(_QWORD *)(v751 + 232);
              v220 = 232;
            }
            if ( v217 )
              sub_140001660(*(_QWORD *)(v751 + v220 + 8), v217, 1);
          }
LABEL_249:
          *(_BYTE *)(v218 + 473) = 0;
          v485 = v5;
          v484 = v14;
          sub_1404FA8E0(v218 + 280);
          v17 = (_BYTE *)v751;
          *(_BYTE *)(v751 + 474) = 0;
          v15 = -1;
          if ( !v17[466] )
            goto LABEL_250;
          goto LABEL_197;
        }
        v7 = v751;
        v197 = v751 + 224;
        *(_BYTE *)(v751 + 467) = 0;
        *(_QWORD *)(v7 + 488) = 0x8000000000000000uLL;
        v746 = v195;
        *(_QWORD *)(v7 + 496) = v195;
        v744 = v196;
        *(_QWORD *)(v7 + 504) = v196;
        *(_QWORD *)(v7 + 512) = v13;
        *(_QWORD *)(v7 + 528) = v197;
LABEL_206:
        v748 = (_BYTE *)(v7 + 488);
        sub_140B96790(v340, v7 + 488, v6);
        v200 = *(_QWORD *)v340;
        if ( *(_QWORD *)v340 == -2 )
        {
          *(_QWORD *)a1 = -2;
          result = 4;
          v17 = (_BYTE *)v751;
          goto LABEL_252;
        }
        v384 = v342;
        v383 = v341;
        v382 = *(_OWORD *)&v340[88];
        v381 = *(_OWORD *)&v340[72];
        v201 = _mm_loadu_si128((const __m128i *)&v340[8]);
        v380 = *(_OWORD *)&v340[56];
        v379 = *(_OWORD *)&v340[40];
        v378 = *(_OWORD *)&v340[24];
        v377 = v201;
        v202 = *(_QWORD *)v748;
        v55 = v751;
        if ( *(_QWORD *)v748 != -1 )
        {
          v198 = 5;
          if ( v202 < 0 )
            v198 = v202 ^ 0x8000000000000000uLL;
          if ( v198 >= 4 )
          {
            v203 = 488;
            if ( v198 == 4 )
            {
              v202 = *(_QWORD *)(v751 + 496);
              v203 = 496;
              if ( (unsigned __int64)v202 > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_217;
            }
          }
          else
          {
            v202 = *(_QWORD *)(v751 + 496);
            v203 = 496;
          }
          if ( v202 )
            sub_140001660(*(_QWORD *)(v751 + v203 + 8), v202, 1);
        }
LABEL_217:
        if ( (_DWORD)v200 != -1 )
        {
          *(_QWORD *)v340 = v200;
          *(__m128i *)&v340[8] = v377;
          *(_OWORD *)&v340[24] = v378;
          *(_OWORD *)&v340[40] = v379;
          *(_OWORD *)&v340[56] = v380;
          *(_OWORD *)&v340[72] = v381;
          *(_OWORD *)&v340[88] = v382;
          v341 = v383;
          v342 = _mm_load_si128(&v384);
          sub_1412E75E0(v55 + 448);
          v315.m128i_i64[0] = (__int64)v340;
          v315.m128i_i64[1] = (__int64)sub_140F8DAB0;
          sub_14149C0F0(&v330, &unk_141782040, &v315);
          v748 = (_BYTE *)v330.m128i_i64[1];
          v12 = v330.m128i_i64[0];
          v13 = v331;
          v716 = v744;
          v715 = v746;
          v59 = v750;
          v714 = v750;
          v4 = v747;
          v713 = v747;
          sub_14068B080((__int64)v340);
          goto LABEL_219;
        }
        LOBYTE(v14) = 2;
        if ( *(_BYTE *)(v55 + 464) == 2 )
        {
LABEL_254:
          *(_BYTE *)(v55 + 473) = 0;
          v13 = *(_QWORD *)(v55 + 224);
          v422 = *(_QWORD *)(v55 + 264);
          v421 = *(_OWORD *)(v55 + 248);
          v420 = _mm_loadu_si128((const __m128i *)(v55 + 232));
          v5 = *(const __m128i **)(v55 + 416);
          v15 = *(_QWORD *)(v55 + 424);
          v749 = *(_QWORD *)(v55 + 432);
          v748 = *(_BYTE **)(v55 + 440);
          *(_BYTE *)(v55 + 470) = 0;
          v4 = *(_QWORD *)(v55 + 448);
          *(_WORD *)(v55 + 467) = 0;
          if ( *(_BYTE *)(v55 + 465) )
          {
            v222 = *(_QWORD *)(v751 + 480);
            if ( v222 )
            {
              v746 = (volatile signed __int64 **)(v751 + 480);
              v223 = _InterlockedOr64((volatile signed __int64 *)(v222 + 48), 4u);
              v744 = v223;
              if ( (v223 & 0xA) == 8 )
              {
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v222 + 16) + 16LL))(*(_QWORD *)(v222 + 24));
                LOBYTE(v223) = v744;
              }
              if ( (v223 & 3) == 1 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v222 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                sub_1412F0A10(v222 + 32);
                LOBYTE(v223) = v744;
              }
              if ( (v223 & 2) != 0 )
              {
                v224 = *(_QWORD *)(v222 + 56);
                v225 = *(_QWORD *)(v222 + 64);
                *(_QWORD *)(v222 + 56) = -2;
                if ( (unsigned __int64)(v224 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                  sub_140001660(v225, v224, 1);
              }
              v226 = (__int64 *)v746;
              if ( *v746 && !_InterlockedDecrement64(*v746) )
              {
                v697 = v750;
                v696 = v747;
                sub_140573FA0(v226);
              }
            }
          }
          v227 = v751;
          *(_BYTE *)(v751 + 465) = 0;
          *(_DWORD *)(v227 + 469) = 0;
          *(_BYTE *)(v227 + 473) = 0;
          v485 = v750;
          v484 = v747;
          sub_1404FA8E0(v227 + 280);
          v12 = v749;
          v17 = (_BYTE *)v751;
          *(_BYTE *)(v751 + 474) = 0;
LABEL_250:
          v17[466] = 0;
          v16 = v748;
LABEL_251:
          v17[475] = 0;
          *(_QWORD *)a1 = v15;
          *(_QWORD *)(a1 + 8) = v12;
          *(_QWORD *)(a1 + 16) = v16;
          *(_QWORD *)(a1 + 24) = v13;
          v221 = v421;
          *(__m128i *)(a1 + 32) = _mm_load_si128(&v420);
          *(_OWORD *)(a1 + 48) = v221;
          *(_QWORD *)(a1 + 64) = v422;
          *(_QWORD *)(a1 + 72) = v4;
          *(_WORD *)(a1 + 80) = 0;
          *(_QWORD *)(a1 + 88) = v5;
          *(_BYTE *)(a1 + 96) = v14;
          result = 1;
          goto LABEL_252;
        }
        *(_BYTE *)(v55 + 465) = 0;
        v228 = *(_QWORD *)(v55 + 480);
        v315.m128i_i64[0] = v228;
        *(_QWORD *)v340 = sub_141302E80(v198, v202, v199);
        *(_DWORD *)&v340[8] = v229;
        v230 = sub_141302E60(v340, 15, 0);
        if ( v231 == -1 )
          sub_1412F0A30(v340, 0, 0xFFFFFFFFLL);
        else
          sub_1412F0B20((unsigned int)v340, v230, v231, 0, (__int64)&off_141782068);
        v7 = v751;
        v232 = (_OWORD *)(v751 + 480);
        v336 = _mm_loadu_si128((const __m128i *)&v340[96]);
        v233 = *(_OWORD *)&v340[80];
        v335 = *(_OWORD *)&v340[80];
        v234 = *(_OWORD *)&v340[64];
        v334 = *(_OWORD *)&v340[64];
        v235 = *(_OWORD *)v340;
        v236 = *(_OWORD *)&v340[16];
        v237 = *(_OWORD *)&v340[32];
        v238 = _mm_loadu_si128((const __m128i *)&v340[48]);
        v333 = v238;
        v332 = *(_OWORD *)&v340[32];
        v331 = *(_OWORD *)&v340[16];
        v330 = *(__m128i *)v340;
        *(__m128i *)(v751 + 576) = v336;
        v232[5] = v233;
        v232[4] = v234;
        v232[3] = v238;
        v232[2] = v237;
        v232[1] = v236;
        *v232 = v235;
        *(_QWORD *)(v7 + 592) = v228;
LABEL_4:
        v749 = v7 + 480;
        v18 = (unsigned __int8 *)sub_1412F09C0();
        v13 = v18[72];
        if ( (_DWORD)v13 != 1 )
        {
          if ( (_DWORD)v13 == 2 )
            goto LABEL_8;
          v19 = v18;
          sub_14148BBF0(v18, sub_140B82FF0);
          v18 = v19;
          v19[72] = 1;
        }
        v13 = (unsigned int)sub_1412F0A20(v18[68], v18[69]);
LABEL_8:
        v20 = (volatile signed __int64 **)(v751 + 592);
        sub_1408918E0(v340, v751 + 592, v6);
        v22 = *(_QWORD *)v340;
        if ( *(_QWORD *)v340 == -3 )
        {
          LOBYTE(v21) = v13 & 1 | ((_BYTE)v13 == 2);
          if ( (unsigned __int8)sub_141309ED0(v21, v749, v6) )
          {
            *(_QWORD *)a1 = -2;
            result = 5;
            v17 = (_BYTE *)v751;
            goto LABEL_252;
          }
          v25 = *v20;
          if ( !*v20 )
          {
LABEL_36:
            v716 = v744;
            v715 = v746;
            v714 = v750;
            v713 = v747;
            sub_14052DE20(v749);
            if ( v22 == -2 )
            {
              nullsub_1(v54);
              v749 = 31;
              v57 = sub_140001650(31, 1);
              v55 = v751;
              if ( !v57 )
              {
                v716 = v744;
                v715 = v746;
                v714 = v750;
                v713 = v747;
                sub_1416C2D4B(1, 31);
              }
              *(_OWORD *)(v57 + 15) = *(__int128 *)((char *)&xmmword_141782080 + 15);
              v748 = (_BYTE *)v57;
              *(__m128i *)v57 = _mm_loadu_si128((const __m128i *)&xmmword_141782080);
              v13 = 31;
            }
            else
            {
              v55 = v751;
              if ( v22 == -3 )
              {
                nullsub_1(v54);
                v749 = 22;
                v56 = sub_140001650(22, 1);
                if ( !v56 )
                {
                  v716 = v744;
                  v715 = v746;
                  v714 = v750;
                  v713 = v747;
                  sub_1416C2D4B(1, 22);
                }
                *(__m128i *)v56 = _mm_loadu_si128((const __m128i *)&xmmword_14178209F);
                v748 = (_BYTE *)v56;
                *(_QWORD *)(v56 + 14) = 0xB697E685B6E8A88AuLL;
                v13 = 22;
              }
              else
              {
                v749 = v22;
                if ( v22 == -1 )
                {
                  LOBYTE(v14) = *(_BYTE *)(v751 + 464);
                  goto LABEL_254;
                }
              }
            }
            sub_1412E75E0(v55 + 448);
            v58 = v751;
            v4 = v747;
            v59 = v750;
            v12 = v749;
            goto LABEL_220;
          }
        }
        else
        {
          v748 = *(_BYTE **)&v340[8];
          v13 = *(_QWORD *)&v340[16];
          v25 = *v20;
          if ( !*v20 )
            goto LABEL_36;
        }
        v745 = v20;
        v48 = _InterlockedOr64(v25 + 6, 4u);
        if ( (v48 & 0xA) == 8 )
        {
          v49 = v48;
          (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v25 + 2) + 16LL))(*((_QWORD *)v25 + 3));
          v48 = v49;
        }
        if ( (v48 & 3) == 1 )
        {
          _InterlockedAnd64(v25 + 6, 0xFFFFFFFFFFFFFFFEuLL);
          v50 = v48;
          sub_1412F0A10(v25 + 4);
          v48 = v50;
        }
        if ( (v48 & 2) != 0 )
        {
          v51 = *((_QWORD *)v25 + 7);
          v52 = *((_QWORD *)v25 + 8);
          *((_QWORD *)v25 + 7) = -2;
          if ( (unsigned __int64)(v51 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
            sub_140001660(v52, v51, 1);
        }
        v53 = (__int64 *)v745;
        if ( *v745 && !_InterlockedDecrement64(*v745) )
          sub_140573FA0(v53);
        goto LABEL_36;
      }
      v60 = v751;
      *(_QWORD *)(v751 + 1832) = *(_QWORD *)&v340[8];
      *(_OWORD *)(v60 + 1840) = v42;
      v61 = (_BYTE *)(v60 + 1632);
      v693 = v750;
      v692 = v41;
      v691 = v748;
      v690 = v746;
      v689 = v749;
      v688 = v745;
      v687 = v744;
      if ( (unsigned __int16)sub_141443A30(v60 + 1632) == 1 )
      {
        v63 = v62;
        *(_QWORD *)&v340[8] = 0x8000000000000003uLL;
        *(_QWORD *)v340 = 12;
        v41 = v747;
        v64 = v750;
        goto LABEL_46;
      }
      v4 = v751;
      v41 = v747;
      v64 = v750;
      if ( *v61 != 2 )
        goto LABEL_67;
      v102 = *(_QWORD *)(v751 + 1640);
      v103 = *(_WORD **)(v102 + 8);
      v104 = *(_QWORD *)(v102 + 16);
      if ( v104 == 2 )
      {
        v106 = (unsigned __int16)__ROL2__(*v103, 8) - 30579;
        v63 = 80;
      }
      else
      {
        if ( v104 != 3 )
        {
LABEL_67:
          v731 = v6;
          v729 = *(__m128i **)&v340[24];
          v735 = *(__m128i **)&v340[16];
          v743 = *(const __m128i **)&v340[40];
          v6 = *(const __m128i **)&v340[32];
          v736 = *(const __m128i **)&v340[56];
          v728 = *(const __m128i **)&v340[48];
          v734 = *(const __m128i **)&v340[72];
          v727 = *(const __m128i **)&v340[64];
          v742 = *(_BYTE **)&v340[88];
          v730 = *(const __m128i **)&v340[80];
          v723 = *(_QWORD *)&v340[96];
          v738 = *((_QWORD *)&v341 + 1);
          v724 = v341;
          v739 = (__int16 *)v342.m128i_i64[1];
          v737 = (const __m128i *)v342.m128i_i64[0];
          v86 = 12;
          v44 = 0x800000000000LL;
          LOWORD(v43) = 3;
          goto LABEL_273;
        }
        v105 = __ROL2__(*v103, 8);
        if ( v105 == 30579 )
          v106 = *((unsigned __int8 *)v103 + 2) - 115;
        else
          v106 = 2 * (v105 >= 0x7773u) - 1;
        v63 = 443;
      }
      *(_QWORD *)&v340[8] = 0x8000000000000003uLL;
      *(_QWORD *)v340 = 12;
      if ( v106 )
        goto LABEL_67;
LABEL_46:
      v693 = v64;
      v692 = v41;
      v691 = v748;
      v690 = v746;
      v689 = v749;
      v688 = v745;
      v687 = v744;
      sub_14068B080((__int64)v340);
      v65 = v751 + 1832;
      v66 = v751 + 1896;
      *(_WORD *)(v751 + 1896) = v63;
      *(_QWORD *)v340 = v65;
      *(_QWORD *)&v340[8] = sub_1400015F0;
      *(_QWORD *)&v340[16] = v66;
      *(_QWORD *)&v340[24] = sub_1414AAE30;
      v693 = v750;
      v692 = v747;
      v691 = v748;
      v690 = v746;
      v689 = v749;
      v688 = v745;
      v687 = v744;
      sub_14149C0F0(&v347, &unk_14178173F, v340);
      v314 = v348;
      v67 = v347;
      v313 = v347;
      v7 = v751;
      v68 = (const __m128i *)(v751 + 1920);
      *(_QWORD *)(v751 + 1936) = v348;
      *(__m128i *)(v7 + 1920) = v67;
      v69 = (char *)(v7 + 1944);
      *(_BYTE *)(v7 + 1944) = 0;
LABEL_47:
      *(_WORD *)(v7 + 1945) = 0;
      v318 = v68[1].m128i_i64[0];
      v743 = v68;
      v317 = _mm_loadu_si128(v68);
      sub_1413083B0(v340, &v317);
      if ( v317.m128i_i64[0] )
        sub_140001660(v317.m128i_i64[1], v317.m128i_i64[0], 1);
      v70 = _mm_loadu_si128((const __m128i *)v340);
      v348 = *(_OWORD *)&v340[16];
      v347 = v70;
      v7 = v751;
      *(_OWORD *)(v751 + 1968) = *(_OWORD *)&v340[16];
      *(__m128i *)(v7 + 1952) = v70;
LABEL_50:
      v739 = (__int16 *)(v7 + 1952);
      sub_1412E76A0(v340, v7 + 1952, v6);
      if ( *(_DWORD *)v340 == -1 )
      {
        v90 = 3;
        goto LABEL_311;
      }
      LODWORD(v742) = *(_DWORD *)v340;
      v71 = *(_DWORD *)&v340[4];
      v738 = *(_QWORD *)&v340[8];
      v737 = *(const __m128i **)&v340[24];
      v72 = _mm_loadu_si128((const __m128i *)&v340[16]);
      v73 = *(_QWORD *)&v340[32];
      if ( *v739 == -1 )
      {
        v662 = v750;
        v661 = v747;
        v660 = v748;
        v659 = v746;
        v658 = v749;
        v657 = v745;
        v656 = v744;
        v655 = v743;
        sub_140B03640(v751 + 1960);
      }
      v74 = (int)v742;
      v75 = v743;
      if ( (_DWORD)v742 == 2 )
      {
        v76 = 2;
        v77 = v738;
        v78 = v751;
        goto LABEL_304;
      }
      v95 = v751;
      *(_WORD *)(v751 + 1945) = 1;
      *(_QWORD *)(v95 + 1952) = 0;
      *(_DWORD *)(v95 + 1960) = v74;
      *(_DWORD *)(v95 + 1964) = v71;
      *(_QWORD *)(v95 + 1968) = v738;
      *(__m128i *)(v95 + 1976) = v72;
      *(_QWORD *)(v95 + 1992) = v73;
      while ( 1 )
      {
        v240 = (_DWORD *)(v95 + 1960);
        v684 = (int)v742;
        v599 = v738;
        v598 = v737;
        v597 = v750;
        v596 = v747;
        v595 = v748;
        v594 = v746;
        v593 = v749;
        v592 = v745;
        v591 = v744;
        v5 = v75;
        v590 = v75;
        sub_1412E7B60(&v330, v95 + 1960);
        if ( v330.m128i_i16[0] == 2 )
        {
          v78 = v751;
          if ( *v240 )
          {
            v249 = *(_QWORD *)(v751 + 1984);
            if ( v249 )
            {
              v250 = v751;
              sub_140001660(*(_QWORD *)(v751 + 1968), 32 * v249, 4);
              v78 = v250;
            }
          }
          *(_BYTE *)(v78 + 1945) = 0;
          v251 = *(_QWORD *)(v78 + 1952);
          v75 = v5;
          if ( !v251 )
          {
            v651 = (int)v742;
            v464 = v738;
            v463 = v737;
            v462 = v750;
            v461 = v747;
            v460 = v748;
            v459 = v746;
            v458 = v749;
            v457 = v745;
            v456 = v744;
            v455 = v5;
            LOBYTE(v75) = 20;
            v251 = sub_14146B840(v75, aCouldNotResolv_0, 32);
            v78 = v751;
            v75 = v5;
          }
          v77 = v251;
          *(_BYTE *)(v78 + 1945) = 0;
          v76 = 2;
LABEL_304:
          *(_BYTE *)(v78 + 1946) = 0;
          *(_BYTE *)(v78 + 1944) = 1;
          v693 = v750;
          v692 = v747;
          v691 = v748;
          v690 = v746;
          v689 = v749;
          v688 = v745;
          v687 = v744;
          sub_140688AE0(v75);
          v43 = v77;
          if ( v76 == 2 )
            goto LABEL_308;
          v253 = v751;
          v254 = v751 + 1856;
          *(_QWORD *)(v751 + 1856) = v76;
          *(_QWORD *)(v253 + 1864) = v43;
          *(_QWORD *)(v253 + 1872) = v734;
          *(_QWORD *)(v253 + 1880) = v4;
          *(_QWORD *)(v253 + 1888) = v7;
          v7 = v253;
          if ( *(_BYTE *)(v253 + 1900) == 1 )
          {
            v742 = (_BYTE *)v254;
            LOBYTE(v252) = 1;
            v43 = sub_1412EB5D0(v254, v252);
            v7 = v751;
            v254 = (__int64)v742;
            if ( v43 )
            {
              v693 = v750;
              v692 = v747;
              v691 = v748;
              v690 = v746;
              v689 = v749;
              v688 = v745;
              v687 = v744;
              sub_14068F6F0((__int64)v742);
LABEL_308:
              v731 = v6;
              v44 = v43 >> 16;
              v86 = 5;
              v4 = v751;
              v41 = v747;
LABEL_273:
              v733 = v86;
              v239 = *(_QWORD *)(v4 + 1832);
              v45 = v744;
              if ( v239 )
                sub_140001660(*(_QWORD *)(v4 + 1840), v239, 1);
              goto LABEL_187;
            }
          }
          *(_BYTE *)(v7 + 1902) = 0;
          sub_141684120(v310, v7 + 1536, 224);
          v255 = *(_OWORD *)(v7 + 1776);
          v256 = *(_OWORD *)(v7 + 1792);
          v257 = *(_OWORD *)(v7 + 1808);
          v400 = *(_OWORD *)(v7 + 1760);
          v401 = v255;
          v402 = v256;
          v403 = v257;
          v404 = *(_QWORD *)(v7 + 1824);
          *(_BYTE *)(v7 + 1901) = 0;
          v741 = (const __m128i *)(v7 + 1904);
          v258 = *(_QWORD *)(v7 + 1904);
          v259 = *(_QWORD *)(v7 + 1912);
          v260 = *(_OWORD *)(v254 + 16);
          *(_OWORD *)(v7 + 1904) = *(_OWORD *)v254;
          *(_OWORD *)(v7 + 1920) = v260;
          *(_QWORD *)(v7 + 1936) = *(_QWORD *)(v254 + 32);
          *(_QWORD *)(v7 + 1944) = v258;
          v740 = v259;
          *(_QWORD *)(v7 + 1952) = v259;
          sub_141684120(v7 + 1960, v310, 224);
          v261 = v401;
          v262 = v402;
          v263 = v403;
          *(_OWORD *)(v7 + 2184) = v400;
          *(_OWORD *)(v7 + 2200) = v261;
          *(_OWORD *)(v7 + 2216) = v262;
          *(_OWORD *)(v7 + 2232) = v263;
          *(_QWORD *)(v7 + 2248) = v404;
          v712 = (char *)(v7 + 2600);
          *(_BYTE *)(v7 + 2600) = 0;
LABEL_314:
          *(_BYTE *)(v7 + 2601) = 0;
          v264 = *(_QWORD *)(v7 + 1960);
          v265 = *(_QWORD *)(v7 + 1968);
          v266 = *(_QWORD *)(v7 + 1976);
          v735 = *(__m128i **)(v7 + 1984);
          v267 = *(__m128i **)(v7 + 1992);
          v725 = *(const __m128i **)(v7 + 2000);
          v743 = *(const __m128i **)(v7 + 2008);
          v268 = *(const __m128i **)(v7 + 2016);
          v736 = *(const __m128i **)(v7 + 2024);
          v269 = *(const __m128i **)(v7 + 2032);
          v734 = *(const __m128i **)(v7 + 2040);
          v270 = *(const __m128i **)(v7 + 2048);
          v742 = *(_BYTE **)(v7 + 2056);
          v271 = *(_QWORD *)(v7 + 2064);
          v272 = *(_QWORD *)(v7 + 2072);
          v738 = *(_QWORD *)(v7 + 2080);
          v737 = *(const __m128i **)(v7 + 2088);
          v739 = *(__int16 **)(v7 + 2096);
          *(_BYTE *)(v7 + 2603) = 1;
          v425 = v741[2].m128i_i64[0];
          v273 = *v741;
          v424 = v741[1];
          v423 = v273;
          *(_QWORD *)(v7 + 2320) = *(_QWORD *)(v7 + 2248);
          *(_OWORD *)(v7 + 2304) = *(_OWORD *)(v7 + 2232);
          *(_OWORD *)(v7 + 2288) = *(_OWORD *)(v7 + 2216);
          *(_OWORD *)(v7 + 2272) = *(_OWORD *)(v7 + 2200);
          *(__m128i *)(v7 + 2256) = _mm_loadu_si128((const __m128i *)(v7 + 2184));
          *(_BYTE *)(v7 + 2602) = 1;
          v274 = *(_QWORD *)(v7 + 1944);
          *(_QWORD *)(v7 + 2328) = v274;
          *(_QWORD *)(v7 + 2336) = v740;
          if ( v264 == -1 )
          {
            v733 = v265;
            v724 = v272;
            v723 = v271;
            v730 = v270;
            v727 = v269;
            v728 = v268;
            v729 = v267;
            v717 = v266;
            v740 = v266 >> 8;
            v143 = v738;
            v89 = (const __m128i *)v739;
            v5 = v741;
            v142 = v743;
            goto LABEL_325;
          }
          *(_QWORD *)(v7 + 2344) = v264;
          *(_QWORD *)(v7 + 2352) = v265;
          *(_QWORD *)(v7 + 2360) = v266;
          *(_QWORD *)(v7 + 2368) = v735;
          *(_QWORD *)(v7 + 2376) = v267;
          *(_QWORD *)(v7 + 2384) = v725;
          *(_QWORD *)(v7 + 2392) = v743;
          *(_QWORD *)(v7 + 2400) = v268;
          *(_QWORD *)(v7 + 2408) = v736;
          *(_QWORD *)(v7 + 2416) = v269;
          *(_QWORD *)(v7 + 2424) = v734;
          *(_QWORD *)(v7 + 2432) = v270;
          *(_QWORD *)(v7 + 2440) = v742;
          *(_QWORD *)(v7 + 2448) = v271;
          *(_QWORD *)(v7 + 2456) = v272;
          *(_QWORD *)(v7 + 2464) = v738;
          *(_QWORD *)(v7 + 2472) = v737;
          *(_QWORD *)(v7 + 2480) = v739;
          v275 = *(_OWORD *)(v7 + 2120);
          v276 = *(_OWORD *)(v7 + 2136);
          v277 = *(_OWORD *)(v7 + 2152);
          *(_OWORD *)(v7 + 2488) = *(_OWORD *)(v7 + 2104);
          *(_OWORD *)(v7 + 2504) = v275;
          *(_OWORD *)(v7 + 2520) = v276;
          *(_OWORD *)(v7 + 2536) = v277;
          *(__m128i *)(v7 + 2552) = _mm_loadu_si128((const __m128i *)(v7 + 2168));
          v562 = v750;
          v278 = v747;
          v561 = v747;
          v560 = v748;
          v559 = v746;
          v558 = v749;
          v557 = v745;
          v556 = v744;
          v5 = v741;
          v555 = v741;
          sub_1406AD450(v340, v7 + 2344);
          v279 = *(_QWORD *)&v340[8];
          v280 = *(_OWORD *)&v340[16];
          if ( *(_QWORD *)v340 != -1 )
          {
            v733 = *(_QWORD *)v340;
            v729 = *(__m128i **)&v340[24];
            v735 = *(__m128i **)&v340[16];
            v142 = *(const __m128i **)&v340[40];
            v725 = *(const __m128i **)&v340[32];
            v736 = *(const __m128i **)&v340[56];
            v728 = *(const __m128i **)&v340[48];
            v734 = *(const __m128i **)&v340[72];
            v727 = *(const __m128i **)&v340[64];
            v742 = *(_BYTE **)&v340[88];
            v730 = *(const __m128i **)&v340[80];
            v723 = *(_QWORD *)&v340[96];
            v143 = *((_QWORD *)&v341 + 1);
            v724 = v341;
            v737 = (const __m128i *)v342.m128i_i64[0];
            v717 = *(_QWORD *)&v340[8];
            v740 = *(_QWORD *)&v340[8] >> 8;
            v89 = (const __m128i *)v342.m128i_i64[1];
            v7 = v751;
LABEL_324:
            *(_BYTE *)(v7 + 2601) = 0;
            v554 = v750;
            v553 = v747;
            v552 = v748;
            v551 = v746;
            v550 = v749;
            v549 = v745;
            v548 = v744;
            v547 = v5;
            sub_14068B170(v7 + 2344);
            v274 = *(_QWORD *)(v751 + 2328);
LABEL_325:
            v743 = v142;
            v155 = v747;
            if ( v274 )
            {
              if ( *(_BYTE *)(v751 + 2602) )
              {
                v284 = v751 + 2336;
                v285 = *(volatile signed __int64 **)(v751 + 2336);
                if ( v285 )
                {
                  if ( !_InterlockedDecrement64(v285) )
                  {
                    v650 = v750;
                    v649 = v155;
                    v648 = v748;
                    v647 = v746;
                    v646 = v749;
                    v645 = v745;
                    v644 = v744;
                    v643 = v5;
                    sub_1410D21C0(v284);
                  }
                }
              }
            }
            v739 = (__int16 *)v89;
            v738 = v143;
            v731 = v6;
            v286 = v751;
            *(_BYTE *)(v751 + 2602) = 0;
            if ( *(_BYTE *)(v286 + 2603) )
            {
              v538 = v750;
              v537 = v155;
              v536 = v748;
              v535 = v746;
              v534 = v749;
              v533 = v745;
              v532 = v744;
              v531 = v5;
              sub_14068F6F0((__int64)&v423);
            }
            v741 = v5;
            *(_BYTE *)(v751 + 2603) = 0;
            v4 = 2;
            v140 = (__int64)v742;
LABEL_333:
            v742 = (_BYTE *)v140;
            v6 = v725;
            sub_141684120(v305, v304, 1152);
            v395 = _mm_load_si128(&v390);
            v396 = v391;
            v397 = v392;
            v398 = v393;
            v399 = v394;
            sub_141684120(v322, v319, 141);
            *v712 = 1;
            v434 = v750;
            v747 = v155;
            v433 = v155;
            v432 = v748;
            v431 = v746;
            v430 = v749;
            v429 = v745;
            v428 = v744;
            sub_140688F60(v741);
            v287 = v740 & 0xFFFFFFFFFFFF00LL;
            v288 = (_WORD)v740 << 8;
            v289 = (unsigned __int8)v717;
            v169 = (_BYTE *)v751;
            v290 = *(_QWORD *)(v751 + 1832);
            if ( v290 )
              sub_140001660(*(_QWORD *)(v751 + 1840), v290, 1);
            LOWORD(v43) = v289 | v288;
            v44 = v287 >> 8;
            v169[1901] = 0;
            v45 = v744;
            goto LABEL_192;
          }
          v731 = v6;
          v281 = v751;
          v282 = v751 + 2440;
          *(_BYTE *)(v751 + 2601) = 1;
          *(_QWORD *)(v281 + 2568) = v279;
          *(_OWORD *)(v281 + 2576) = v280;
          v681 = v750;
          v680 = v278;
          v679 = v748;
          v678 = v746;
          v677 = v749;
          v676 = v745;
          v675 = v744;
          v674 = v5;
          sub_140F91CC0(v340, v282);
          v141 = *(_QWORD *)v340;
          v117 = v340[8];
          if ( *(_QWORD *)v340 != -1 )
          {
            v740 = ((unsigned __int64)((v340[15] << 16) | (unsigned int)*(unsigned __int16 *)&v340[13]) << 32)
                 | *(unsigned int *)&v340[9];
            v729 = *(__m128i **)&v340[24];
            v735 = *(__m128i **)&v340[16];
            v142 = *(const __m128i **)&v340[40];
            v725 = *(const __m128i **)&v340[32];
            v736 = *(const __m128i **)&v340[56];
            v728 = *(const __m128i **)&v340[48];
            v734 = *(const __m128i **)&v340[72];
            v727 = *(const __m128i **)&v340[64];
            v742 = *(_BYTE **)&v340[88];
            v730 = *(const __m128i **)&v340[80];
            v5 = *(const __m128i **)&v340[96];
            v143 = *((_QWORD *)&v341 + 1);
            v6 = (const __m128i *)v341;
            v89 = (const __m128i *)v342.m128i_i64[1];
            v737 = (const __m128i *)v342.m128i_i64[0];
            v7 = v751;
LABEL_320:
            v153 = *(_BYTE *)(v7 + 2601) == 0;
            v723 = (__int64)v5;
            v724 = (__int64)v6;
            v733 = v141;
            v717 = v117;
            if ( !v153 )
            {
              v283 = *(_QWORD *)(v7 + 2568);
              if ( v283 )
                sub_140001660(*(_QWORD *)(v7 + 2576), v283, 1);
            }
            v6 = v731;
            v5 = v741;
            goto LABEL_324;
          }
          v7 = v751;
          v291 = v751 + 2568;
          v6 = v731;
          if ( *(_DWORD *)(v751 + 2328) == 1 )
          {
            *(_BYTE *)(v751 + 2602) = 0;
            v292 = *(_QWORD *)(v7 + 2336);
            *(_QWORD *)(v7 + 2592) = v292;
            v87 = v712;
            v89 = v741;
            if ( !v292 )
            {
              *(_BYTE *)(v7 + 2603) = 0;
              v116 = v7 + 2608;
              v301 = v424;
              *(__m128i *)(v7 + 2608) = v423;
              *(__m128i *)(v7 + 2624) = v301;
              *(_QWORD *)(v7 + 2640) = v425;
              *(_BYTE *)(v7 + 2648) = v117;
              v114 = (_BYTE *)(v7 + 2649);
              *(_BYTE *)(v7 + 2649) = 0;
LABEL_103:
              *(_QWORD *)&v340[32] = *(_QWORD *)(v116 + 32);
              v118 = _mm_loadu_si128((const __m128i *)v116);
              *(_OWORD *)&v340[16] = *(_OWORD *)(v116 + 16);
              *(__m128i *)v340 = v118;
              v741 = v89;
              v731 = v6;
              v712 = v87;
              if ( (v117 & 1) != 0 )
              {
                v743 = (const __m128i *)v116;
                v742 = v114;
                sub_14068F6F0((__int64)v340);
                si128 = _mm_load_si128((const __m128i *)&xmmword_141763EF0);
                v112 = -1;
                v7 = v751;
                v120 = v750;
                v114 = v742;
              }
              else
              {
                si128 = _mm_load_si128((const __m128i *)v340);
                v735 = *(__m128i **)(v7 + 2624);
                v729 = *(__m128i **)(v7 + 2632);
                v112 = 2;
                v725 = *(const __m128i **)&v340[32];
                v120 = v750;
              }
              *v114 = 1;
LABEL_111:
              v750 = v120;
              if ( (_DWORD)v112 == -1 )
              {
                v117 = _mm_shuffle_epi32(si128, 238).m128i_u64[0];
                v740 = v117 >> 8;
                v141 = si128.m128i_i64[0];
                v142 = v743;
                v143 = v738;
                goto LABEL_320;
              }
              v111 = v7 + 2608;
              sub_141684120(v7 + 2608, v7 + 2344, 224);
              *(_QWORD *)(v7 + 2832) = v112;
              *(__m128i *)(v7 + 2840) = si128;
              *(_QWORD *)(v7 + 2856) = v735;
              *(_QWORD *)(v7 + 2864) = v729;
              *(_QWORD *)(v7 + 2872) = v725;
              *(_QWORD *)(v7 + 2880) = v743;
              *(_QWORD *)(v7 + 2888) = v728;
              *(_QWORD *)(v7 + 2896) = v736;
              *(_QWORD *)(v7 + 2904) = v727;
              *(_QWORD *)(v7 + 2912) = v734;
              *(_QWORD *)(v7 + 2920) = v730;
              *(_QWORD *)(v7 + 2928) = v742;
              *(_QWORD *)(v7 + 2936) = v5;
              *(_QWORD *)(v7 + 2944) = v6;
              *(_QWORD *)(v7 + 2952) = v738;
              *(_QWORD *)(v7 + 2960) = v737;
              *(_QWORD *)(v7 + 2968) = v89;
              sub_141684120(v7 + 2976, v308, 960);
              v125 = *(_OWORD *)(v7 + 2272);
              v126 = *(_OWORD *)(v7 + 2288);
              v127 = *(_OWORD *)(v7 + 2304);
              *(_OWORD *)(v7 + 3936) = *(_OWORD *)(v7 + 2256);
              *(_OWORD *)(v7 + 3952) = v125;
              *(_OWORD *)(v7 + 3968) = v126;
              *(_OWORD *)(v7 + 3984) = v127;
              *(_QWORD *)(v7 + 4000) = *(_QWORD *)(v7 + 2320);
              v740 = v7 + 11144;
              *(_BYTE *)(v7 + 11144) = 0;
              v6 = v731;
              v89 = v741;
LABEL_113:
              v732 = v111;
              sub_141684120(&v347, v111, 224);
              sub_141684120(v340, v7 + 2832, 1104);
              v128 = *(_OWORD *)(v7 + 3952);
              v129 = *(_OWORD *)(v7 + 3968);
              v130 = *(_OWORD *)(v7 + 3984);
              v363 = _mm_loadu_si128((const __m128i *)(v7 + 3936));
              v364 = v128;
              v365 = v129;
              v366 = v130;
              v367 = *(_QWORD *)(v7 + 4000);
              sub_141684120(&v345, &v347, 296);
              v131 = v7 + 4008;
              sub_141684120(v7 + 4008, v340, 7128);
              v726 = (_BYTE *)(v7 + 11136);
              *(_BYTE *)(v7 + 11136) = 0;
LABEL_114:
              sub_141684120(&v347, v131, 1104);
              sub_141684120(&v369, v7 + 5112, 296);
              sub_141684120(&v315, &v347, 1400);
              v132 = v7 + 5408;
              sub_141684120(v7 + 5408, &v315, 1400);
              v718 = (char *)(v7 + 6808);
              *(_BYTE *)(v7 + 6808) = 0;
LABEL_115:
              v722 = v131;
              v741 = v89;
              v719 = v132;
              sub_141684120(&v368, v132, 1104);
              sub_141684120(&v347, v7 + 6512, 296);
              sub_141684120(&v330, &v347, 1400);
              sub_141684120(v7 + 6816, &v330, 1400);
LABEL_116:
              v734 = (const __m128i *)(v7 + 6816);
              sub_1405829E0(&v347, v7 + 6816, v6);
              v87 = v712;
              v133 = v347.m128i_i64[0];
              if ( v347.m128i_i64[0] == -2 )
              {
                v134 = 3;
LABEL_118:
                *v718 = v134;
                *v726 = 3;
                *(_BYTE *)v740 = 3;
                v113 = 6;
                goto LABEL_119;
              }
              v733 = v347.m128i_i64[1];
              v735 = *((__m128i **)&v348 + 1);
              v717 = v348;
              v137 = *((const __m128i **)&v349 + 1);
              v729 = (__m128i *)v349;
              v728 = *((const __m128i **)&v350 + 1);
              v743 = (const __m128i *)v350;
              v736 = v351;
              v138 = v352;
              v139 = v353;
              v730 = v354;
              v140 = v355;
              v723 = v356;
              v724 = v357;
              v738 = (__int64)v358;
              v737 = v359;
              v739 = v360;
              v682 = v361;
              sub_141684120(&v313, v362, 1152);
              sub_141684120(v325, v371, 208);
              if ( v734->m128i_i32[0] != -1 )
              {
                sub_14068B170((__int64)v734);
                if ( *(_DWORD *)(v751 + 7112) == 2 )
                {
                  v711 = v750;
                  v710 = v747;
                  v709 = v748;
                  v708 = v746;
                  v707 = v749;
                  v706 = v745;
                  v705 = v744;
                  v704 = v741;
                  v703 = v740;
                  v702 = v732;
                  v701 = v726;
                  v700 = v722;
                  v699 = v718;
                  v698 = v719;
                  sub_14068F6F0(v751 + 7120);
                }
                else
                {
                  sub_14068F6F0(v751 + 7112);
                  v711 = v750;
                  v710 = v747;
                  v709 = v748;
                  v708 = v746;
                  v707 = v749;
                  v706 = v745;
                  v705 = v744;
                  v704 = v741;
                  v703 = v740;
                  v702 = v732;
                  v701 = v726;
                  v700 = v722;
                  v699 = v718;
                  v698 = v719;
                  sub_14068F7B0(v751 + 7152);
                }
              }
              if ( (_DWORD)v133 == -1 )
              {
                v154 = (_QWORD *)v751;
                *(_QWORD *)(v751 + 8336) = v733;
                v154[1043] = v717;
                v154[1044] = v735;
                v154[1045] = v729;
                v154[1046] = v137;
                v154[1047] = v743;
                v154[1048] = v728;
                v154[1049] = v736;
                v727 = v138;
                v154[1050] = v138;
                v734 = v139;
                v154[1051] = v139;
                v154[1052] = v730;
                v154[1053] = v140;
                v154[1054] = v723;
                v154[1055] = v724;
                v154[1056] = v738;
                v154[1057] = v737;
                v154[1058] = v739;
                v154[1059] = v682;
                sub_141684120(v154 + 1060, &v313, 1152);
                v154[1041] = -1;
                sub_141684120(&v317, &v313, 1152);
                v4 = 2;
              }
              else
              {
                v731 = v6;
                v146 = v139;
                v7 = v751;
                *(_QWORD *)(v751 + 8328) = v133;
                *(_QWORD *)(v7 + 8336) = v733;
                *(_QWORD *)(v7 + 8344) = v717;
                v147 = v140;
                *(_QWORD *)(v7 + 8352) = v735;
                v148 = v729;
                *(_QWORD *)(v7 + 8360) = v729;
                v725 = v137;
                *(_QWORD *)(v7 + 8368) = v137;
                v149 = v743;
                *(_QWORD *)(v7 + 8376) = v743;
                *(_QWORD *)(v7 + 8384) = v728;
                *(_QWORD *)(v7 + 8392) = v736;
                *(_QWORD *)(v7 + 8400) = v138;
                *(_QWORD *)(v7 + 8408) = v146;
                *(_QWORD *)(v7 + 8416) = v730;
                v742 = (_BYTE *)v147;
                *(_QWORD *)(v7 + 8424) = v147;
                *(_QWORD *)(v7 + 8432) = v723;
                *(_QWORD *)(v7 + 8440) = v724;
                *(_QWORD *)(v7 + 8448) = v738;
                *(_QWORD *)(v7 + 8456) = v737;
                *(_QWORD *)(v7 + 8464) = v739;
                *(_QWORD *)(v7 + 8472) = v682;
                sub_141684120(v7 + 8480, &v313, 1152);
                sub_141684120(v7 + 9632, v325, 208);
                sub_141684120(v734, v7 + 8328, 1512);
                v4 = *(_QWORD *)(v7 + 6816);
                if ( v4 == 2 )
                {
                  *(_QWORD *)(v7 + 9840) = v733;
                  *(_QWORD *)(v7 + 9848) = v717;
                  *(_QWORD *)(v7 + 9856) = v735;
                  *(_QWORD *)(v7 + 9864) = v148;
                  *(_QWORD *)(v7 + 9872) = v725;
                  *(_QWORD *)(v7 + 9880) = v149;
                  *(_QWORD *)(v7 + 9888) = v728;
                  *(_QWORD *)(v7 + 9896) = v736;
                  *(_QWORD *)(v7 + 9904) = v138;
                  *(_QWORD *)(v7 + 9912) = v146;
                  *(_QWORD *)(v7 + 9920) = v730;
                  *(_QWORD *)(v7 + 9928) = v742;
                  *(_QWORD *)(v7 + 9936) = v723;
                  *(_QWORD *)(v7 + 9944) = v724;
                  *(_QWORD *)(v7 + 9952) = v738;
                  *(_QWORD *)(v7 + 9960) = v737;
                  *(_QWORD *)(v7 + 9968) = v739;
                  *(_QWORD *)(v7 + 9976) = v682;
                  sub_141684120(v7 + 9984, &v313, 1152);
                  v87 = v712;
                  v6 = v731;
LABEL_130:
                  v483 = (_QWORD *)(v7 + 9840);
                  sub_14057B210(&v347, v7 + 9840, v6);
                  v4 = v347.m128i_i64[0];
                  if ( v347.m128i_i64[0] == -1 )
                  {
                    v134 = 4;
                    goto LABEL_118;
                  }
                  v712 = v87;
                  v733 = v347.m128i_i64[1];
                  v735 = *((__m128i **)&v348 + 1);
                  v717 = v348;
                  v725 = *((const __m128i **)&v349 + 1);
                  v729 = (__m128i *)v349;
                  v728 = *((const __m128i **)&v350 + 1);
                  v743 = (const __m128i *)v350;
                  v736 = v351;
                  v150 = v352;
                  v151 = v353;
                  v152 = v354;
                  v742 = (_BYTE *)v355;
                  v723 = v356;
                  v724 = v357;
                  v738 = (__int64)v358;
                  v737 = v359;
                  v739 = v360;
                  v682 = v361;
                  sub_141684120(&v317, v362, 1152);
                  sub_141684120(v324, v371, 208);
                  v153 = *(_DWORD *)v483 == -1;
                  v727 = v150;
                  v734 = v151;
                  v730 = v152;
                  if ( !v153 )
                  {
                    sub_1405AFF20(v483);
                    sub_140687EA0(v751 + 9960);
                    sub_14052DF40((__int64 *)(v751 + 11080));
                  }
                  v140 = (__int64)v742;
                  v137 = v725;
                }
                else
                {
                  v734 = v146;
                  v727 = v138;
                  sub_141684120(&v317, &v313, 1152);
                  sub_141684120(v324, v325, 208);
                  v137 = v725;
                  v6 = v731;
                  v140 = (__int64)v742;
                }
              }
              sub_141684120(v303, &v317, 1152);
              sub_141684120(v337, v324, 208);
              *v718 = 1;
              v454 = v750;
              v155 = v747;
              v453 = v747;
              v452 = v748;
              v451 = v746;
              v450 = v749;
              v449 = v745;
              v448 = v744;
              v447 = v741;
              v446 = v740;
              v445 = v732;
              v444 = v726;
              v443 = v722;
              sub_1406893A0(v719);
              sub_141684120(v311, v303, 1152);
              v156 = v737;
              if ( (_DWORD)v4 != 2 )
              {
                v389 = v338;
                v157 = _mm_loadu_si128(v337);
                v388 = v337[3];
                v387 = v337[2];
                v386 = v337[1];
                v385 = v157;
                sub_141684120(v326, &v339, 136);
              }
              sub_141684120(&v321, v326, 136);
              *v726 = 1;
              v673 = v750;
              v672 = v155;
              v671 = v748;
              v670 = v746;
              v669 = v749;
              v668 = v745;
              v667 = v744;
              v666 = v741;
              v665 = v740;
              v664 = v732;
              sub_1406892C0(v722);
              if ( (_DWORD)v4 == 2 )
              {
                v158 = v137;
                v137 = v735;
                v159 = v728;
                if ( v733 == -1 )
                {
                  v733 = v717;
                  v717 = (unsigned __int64)v735;
                  v735 = v729;
                  v162 = v158;
                  v163 = v743;
                  v164 = v723;
                  v723 = v724;
                  v743 = v737;
                  v742 = v739;
                  v729 = (__m128i *)v162;
                  v728 = v736;
                  v736 = v727;
                  v727 = v734;
                  v734 = v730;
                  v730 = (const __m128i *)v140;
                  v140 = v164;
                  v724 = v738;
                  v738 = (__int64)v737;
                  v156 = (const __m128i *)v739;
                  v739 = v682;
                  v137 = v163;
                  v155 = v747;
                }
                else
                {
                  v347.m128i_i64[0] = v733;
                  v347.m128i_i64[1] = v717;
                  *(_QWORD *)&v348 = v735;
                  *((_QWORD *)&v348 + 1) = v729;
                  *(_QWORD *)&v349 = v158;
                  *((_QWORD *)&v349 + 1) = v743;
                  *(_QWORD *)&v350 = v728;
                  *((_QWORD *)&v350 + 1) = v736;
                  v351 = v727;
                  v352 = v734;
                  v353 = v730;
                  v354 = (const __m128i *)v140;
                  v355 = v723;
                  v356 = v724;
                  v357 = v738;
                  v358 = v737;
                  v359 = (const __m128i *)v739;
                  v360 = v682;
                  sub_141684120(&v361, v311, 1152);
                  v330.m128i_i64[0] = 0;
                  v330.m128i_i64[1] = 1;
                  *(_QWORD *)&v331 = 0;
                  sub_141688D30((unsigned int)&v330, 0, 34, 1, 1);
                  v160 = v330.m128i_i64[1];
                  v161 = v331;
                  *(_OWORD *)(v330.m128i_i64[1] + v331 + 16) = xmmword_141782D95;
                  *(_OWORD *)(v160 + v161) = xmmword_141782D85;
                  *(_WORD *)(v160 + v161 + 32) = 10603;
                  v161 += 34;
                  v316 = v161;
                  v315 = _mm_loadu_si128(&v330);
                  LOBYTE(v161) = 40;
                  v717 = sub_1413127D0(v161, &v315);
                  if ( v347.m128i_i32[0] == -1 )
                  {
                    v673 = v750;
                    v155 = v747;
                    v672 = v747;
                    v671 = v748;
                    v670 = v746;
                    v669 = v749;
                    v668 = v745;
                    v667 = v744;
                    v666 = v741;
                    v665 = v740;
                    v664 = v732;
                    sub_14068B080((__int64)&v347.m128i_i64[1]);
                  }
                  else
                  {
                    v156 = (const __m128i *)&v358;
                    sub_1405AFF20(&v347);
                    sub_140687EA0((__int64)&v358);
                    sub_14052DF40(&v370);
                    v155 = v747;
                  }
                  v733 = 5;
                }
              }
              else
              {
                sub_141684120(v304, v311, 1152);
                v390 = _mm_load_si128(&v385);
                v391 = v386;
                v392 = v387;
                v393 = v388;
                v394 = v389;
                sub_141684120(v319, &v320, 141);
                v159 = v743;
              }
              v725 = v137;
              v737 = v156;
              v743 = v159;
              *(_BYTE *)v740 = 1;
              v442 = v750;
              v441 = v155;
              v440 = v748;
              v439 = v746;
              v438 = v749;
              v437 = v745;
              v436 = v744;
              v435 = v741;
              sub_140688930(v732);
              v731 = v6;
              v740 = v717 >> 8;
              v165 = v751;
              if ( *(_BYTE *)(v751 + 2601) )
              {
                v166 = *(_QWORD *)(v751 + 2568);
                if ( v166 )
                  sub_140001660(*(_QWORD *)(v751 + 2576), v166, 1);
              }
              *(_WORD *)(v165 + 2601) = 0;
              *(_BYTE *)(v165 + 2603) = 0;
              goto LABEL_333;
            }
            *(_BYTE *)(v7 + 2603) = 0;
            *(_QWORD *)&v340[32] = v425;
            *(__m128i *)&v340[16] = v424;
            *(__m128i *)v340 = v423;
            *(_BYTE *)(v7 + 2601) = 0;
            *(_OWORD *)&v340[40] = *(_OWORD *)v291;
            *(_QWORD *)&v340[56] = *(_QWORD *)(v291 + 16);
            v293 = _mm_load_si128((const __m128i *)v340);
            v294 = *(_OWORD *)&v340[16];
            v347 = v293;
            v348 = *(_OWORD *)&v340[16];
            v295 = *(_OWORD *)&v340[32];
            v349 = *(_OWORD *)&v340[32];
            v350 = *(_OWORD *)&v340[48];
            *(_OWORD *)(v7 + 2656) = *(_OWORD *)&v340[48];
            *(_OWORD *)(v7 + 2640) = v295;
            *(_OWORD *)(v7 + 2624) = v294;
            *(__m128i *)(v7 + 2608) = v293;
            *(_QWORD *)(v7 + 2672) = v292;
            *(_BYTE *)(v7 + 3824) = v117;
            *(_BYTE *)(v7 + 3825) = 0;
LABEL_99:
            v739 = (__int16 *)(v7 + 2608);
            sub_1406955B0(v340, v7 + 2608, v6);
            v112 = *(_QWORD *)v340;
            if ( *(_QWORD *)v340 == -2 )
            {
              v113 = 3;
              goto LABEL_119;
            }
          }
          else
          {
            *(_BYTE *)(v751 + 2603) = 0;
            *(_QWORD *)&v340[32] = v425;
            *(__m128i *)&v340[16] = v424;
            *(__m128i *)v340 = v423;
            *(_BYTE *)(v7 + 2601) = 0;
            *(_OWORD *)&v340[40] = *(_OWORD *)v291;
            *(_QWORD *)&v340[56] = *(_QWORD *)(v291 + 16);
            v298 = _mm_load_si128((const __m128i *)v340);
            v299 = *(_OWORD *)&v340[16];
            v347 = v298;
            v348 = *(_OWORD *)&v340[16];
            v300 = *(_OWORD *)&v340[32];
            v349 = *(_OWORD *)&v340[32];
            v350 = *(_OWORD *)&v340[48];
            *(_OWORD *)(v7 + 2656) = *(_OWORD *)&v340[48];
            *(_OWORD *)(v7 + 2640) = v300;
            *(_OWORD *)(v7 + 2624) = v299;
            *(__m128i *)(v7 + 2608) = v298;
            *(_QWORD *)(v7 + 2672) = 0;
            *(_BYTE *)(v7 + 3824) = v117;
            *(_BYTE *)(v7 + 3825) = 0;
            v87 = v712;
LABEL_96:
            v739 = (__int16 *)(v7 + 2608);
            sub_1406955B0(v340, v7 + 2608, v6);
            v112 = *(_QWORD *)v340;
            if ( *(_QWORD *)v340 == -2 )
            {
              v113 = 5;
LABEL_119:
              v135 = v663;
              *v87 = v113;
              v136 = 4;
              v17 = (_BYTE *)v751;
              goto LABEL_312;
            }
          }
          v712 = v87;
          v731 = v6;
          si128 = _mm_loadu_si128((const __m128i *)&v340[8]);
          v735 = *(__m128i **)&v340[24];
          v725 = *(const __m128i **)&v340[40];
          v729 = *(__m128i **)&v340[32];
          v728 = *(const __m128i **)&v340[56];
          v743 = *(const __m128i **)&v340[48];
          v727 = *(const __m128i **)&v340[72];
          v736 = *(const __m128i **)&v340[64];
          v730 = *(const __m128i **)&v340[88];
          v734 = *(const __m128i **)&v340[80];
          v742 = *(_BYTE **)&v340[96];
          v6 = *((const __m128i **)&v341 + 1);
          v5 = (const __m128i *)v341;
          v737 = (const __m128i *)v342.m128i_i64[1];
          v738 = v342.m128i_i64[0];
          v89 = v343;
          sub_141684120(v308, v344, 960);
          v120 = v750;
          v681 = v750;
          v680 = v747;
          v679 = v748;
          v678 = v746;
          v677 = v749;
          v676 = v745;
          v675 = v744;
          v674 = v741;
          sub_140689710((__int64)v739);
          v7 = v751;
          goto LABEL_111;
        }
        v241 = (__m128i *)v751;
        v110 = v751 + 2000;
        v242 = v330;
        *(_OWORD *)(v751 + 2016) = v331;
        v241[125] = v242;
        v109 = &v241[131].m128i_i16[4];
        v241[131].m128i_i8[8] = 0;
        v79 = v744;
        v68 = v5;
        LODWORD(v5) = (_DWORD)v742;
LABEL_278:
        v243 = _mm_loadu_si128((const __m128i *)v110);
        v348 = *(_OWORD *)(v110 + 16);
        v347 = v243;
        v652 = (int)v5;
        v476 = v738;
        v475 = v737;
        v474 = v750;
        v473 = v747;
        v472 = v748;
        v471 = v746;
        v470 = v749;
        v469 = v745;
        v468 = v79;
        v743 = v68;
        v467 = v68;
        v739 = v109;
        v466 = v109;
        v736 = (const __m128i *)v110;
        v465 = v110;
        sub_1413128B0(v340, &v347);
        v124 = *(_OWORD *)v340;
        if ( *(_QWORD *)v340 == -1 )
        {
          v740 = *(_QWORD *)&v340[8];
LABEL_291:
          LODWORD(v742) = (_DWORD)v5;
          v744 = v79;
          *(_BYTE *)v739 = 1;
          if ( !*(_QWORD *)(v751 + 1952) )
            goto LABEL_293;
LABEL_292:
          sub_140018650(v751 + 1952);
          goto LABEL_293;
        }
        v244 = v751;
        v123 = v751 + 2032;
        *(_OWORD *)(v751 + 2032) = *(_OWORD *)v340;
        v122 = (__m128i *)(v244 + 2096);
        *(_BYTE *)(v244 + 2096) = 0;
LABEL_280:
        v686 = (int)v5;
        v632 = v738;
        v631 = v737;
        v630 = v750;
        v629 = v747;
        v628 = v748;
        v627 = v746;
        v626 = v749;
        v625 = v745;
        v624 = v79;
        v623 = v743;
        v622 = v739;
        v621 = v736;
        v735 = v122;
        v620 = v122;
        v733 = v123;
        v619 = v123;
        sub_1412EB920(v340, v124, *((_QWORD *)&v124 + 1));
        if ( *(_QWORD *)v340 == 2 )
        {
          v740 = *(_QWORD *)&v340[8];
LABEL_289:
          v735->m128i_i8[0] = 1;
          goto LABEL_291;
        }
        LODWORD(v742) = (_DWORD)v5;
        v744 = v79;
        v316 = *(_QWORD *)&v340[32];
        v315 = *(__m128i *)&v340[16];
        v245 = (__m128i *)v751;
        v145 = v751 + 2048;
        *(_OWORD *)(v751 + 2048) = *(_OWORD *)v340;
        v245[129] = _mm_load_si128(&v315);
        v245[130].m128i_i64[0] = v316;
        v245[130].m128i_i64[1] = v145;
LABEL_283:
        sub_1412F0FB0(v340, v145, v6);
        if ( v340[9] == 0xFF )
          break;
        v246 = *(_QWORD *)v340;
        if ( v340[9] == 2 )
          goto LABEL_288;
        if ( *(_QWORD *)(v751 + 2072) == -1 )
          sub_1416C3040(&off_141782F58);
        if ( (sub_141312890(v751 + 2072, *(_QWORD *)v340) & 1) != 0 || v246 )
        {
LABEL_288:
          v740 = v246;
          v621 = v736;
          v619 = v733;
          LODWORD(v5) = (_DWORD)v742;
          v686 = (int)v742;
          v632 = v738;
          v631 = v737;
          v630 = v750;
          v629 = v747;
          v628 = v748;
          v627 = v746;
          v626 = v749;
          v625 = v745;
          v79 = v744;
          v624 = v744;
          v623 = v743;
          v622 = v739;
          v620 = v735;
          sub_14068F6F0(v751 + 2048);
          goto LABEL_289;
        }
        v76 = *(_QWORD *)(v751 + 2048);
        v247 = *(_QWORD *)(v751 + 2056);
        v734 = *(const __m128i **)(v751 + 2064);
        v4 = *(_QWORD *)(v751 + 2072);
        v7 = *(_QWORD *)(v751 + 2080);
        *(_BYTE *)(v751 + 2096) = 1;
        v248 = (int)v742;
        if ( v76 == -1 )
          goto LABEL_310;
        *(_BYTE *)v739 = 1;
        if ( v76 != 2 )
        {
          v77 = v247;
          v296 = v751;
          if ( *(_DWORD *)(v751 + 1960) )
          {
            v297 = *(_QWORD *)(v751 + 1984);
            if ( v297 )
            {
              sub_140001660(*(_QWORD *)(v751 + 1968), 32 * v297, 4);
              v296 = v751;
            }
          }
          if ( *(_QWORD *)(v296 + 1952) )
          {
            v685 = v248;
            v609 = v738;
            v608 = v737;
            v607 = v750;
            v606 = v747;
            v605 = v748;
            v604 = v746;
            v603 = v749;
            v602 = v745;
            v601 = v744;
            v600 = v743;
            sub_140018650(v751 + 1952);
          }
          v78 = v751;
          *(_BYTE *)(v751 + 1945) = 0;
          v75 = v743;
          goto LABEL_304;
        }
        v740 = v247;
        if ( *(_QWORD *)(v751 + 1952) )
          goto LABEL_292;
LABEL_293:
        v95 = v751;
        *(_BYTE *)(v751 + 1945) = 1;
        *(_QWORD *)(v95 + 1952) = v740;
        v75 = v743;
      }
      v735->m128i_i8[0] = 3;
LABEL_310:
      *(_BYTE *)v739 = 3;
      v90 = 4;
LABEL_311:
      *v69 = v90;
      v136 = 3;
      v17 = (_BYTE *)v751;
      v135 = v663;
LABEL_312:
      *v135 = v136;
      *(_BYTE *)v749 = 3;
      *v748 = 3;
      *(_QWORD *)a1 = -2;
      result = 3;
LABEL_252:
      v17[476] = result;
      return result;
    case 1LL:
      sub_1416C3400(&off_141781FF8, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_141781FF8, a2, a3, a4);
    case 3LL:
      v748 = (_BYTE *)(a2 + 11160);
      v24 = *(unsigned __int8 *)(a2 + 11160);
      v746 = (volatile signed __int64 **)(a2 + 480);
      switch ( v24 )
      {
        case 0LL:
          goto LABEL_19;
        case 1LL:
          v640 = v746;
          sub_1416C3400(&off_141781460, a2, a3, a4);
        case 2LL:
          JUMPOUT(0x1406A6191LL);
        case 3LL:
          v749 = a2 + 11153;
          v26 = *(unsigned __int8 *)(a2 + 11153);
          v745 = (volatile signed __int64 **)(a2 + 704);
          switch ( v26 )
          {
            case 0LL:
              v27 = *(_BYTE *)(a2 + 11152);
              goto LABEL_20;
            case 1LL:
              v492 = v748;
              v491 = v746;
              v490 = v745;
              sub_1416C3400(&off_141781478, a2, a3, a4);
            case 2LL:
              v492 = v748;
              v491 = v746;
              v490 = v745;
              sub_1416C3420(&off_141781478, a2, a3, a4);
            case 3LL:
              v663 = (char *)(a2 + 1899);
              v79 = a2 + 1224;
              switch ( *(_BYTE *)(a2 + 1899) )
              {
                case 0:
                  v27 = *(_BYTE *)(a2 + 1898);
                  v38 = *(_QWORD *)(a2 + 1224);
                  v4 = a2 + 1224;
                  break;
                case 1:
                  v497 = v748;
                  v496 = v746;
                  v495 = v749;
                  v494 = v745;
                  v493 = a2 + 1224;
                  sub_1416C3400(&off_141782130, a2, a3, a4);
                case 2:
                  v497 = v748;
                  v496 = v746;
                  v495 = v749;
                  v494 = v745;
                  v493 = a2 + 1224;
                  sub_1416C3420(&off_141782130, a2, a3, a4);
                case 3:
                  v69 = (char *)(a2 + 1944);
                  v68 = (const __m128i *)(a2 + 1920);
                  switch ( *(_BYTE *)(v7 + 1944) )
                  {
                    case 0:
                      v744 = v7 + 1224;
                      goto LABEL_47;
                    case 1:
                      v568 = v748;
                      v567 = v746;
                      v566 = v749;
                      v565 = v745;
                      v564 = v7 + 1224;
                      v563 = v7 + 1920;
                      sub_1416C3400(&off_141781078, v68, a3, a4);
                    case 2:
                      v568 = v748;
                      v567 = v746;
                      v566 = v749;
                      v565 = v745;
                      v564 = v7 + 1224;
                      v563 = v7 + 1920;
                      sub_1416C3420(&off_141781078, v68, a3, a4);
                    case 3:
                      v743 = (const __m128i *)(v7 + 1920);
                      v744 = v7 + 1224;
                      goto LABEL_50;
                    case 4:
                      v107 = v7 + 2104;
                      v108 = v7 + 2000;
                      switch ( *(_BYTE *)(v7 + 2104) )
                      {
                        case 0:
                          v109 = (__int16 *)(v7 + 2104);
                          v110 = v7 + 2000;
                          break;
                        case 1:
                          v589 = v748;
                          v588 = v746;
                          v587 = v749;
                          v586 = v745;
                          v585 = v7 + 1224;
                          JUMPOUT(0x1406A665FLL);
                        case 2:
                          v589 = v748;
                          v588 = v746;
                          v587 = v749;
                          v586 = v745;
                          v585 = v7 + 1224;
                          v584 = v7 + 1920;
                          v583 = v7 + 2000;
                          sub_1416C3420(&off_141781C48, v68, v107, v108);
                        case 3:
                          v736 = (const __m128i *)(v7 + 2000);
                          v739 = (__int16 *)(v7 + 2104);
                          v743 = (const __m128i *)(v7 + 1920);
                          v735 = (__m128i *)(v7 + 2096);
                          v121 = *(unsigned __int8 *)(v7 + 2096);
                          v733 = v7 + 2032;
                          switch ( v121 )
                          {
                            case 0LL:
                              v122 = v735;
                              v123 = v733;
                              v124 = *(_OWORD *)(v7 + 2032);
                              goto LABEL_280;
                            case 1LL:
                              v618 = v748;
                              v617 = v746;
                              v616 = v749;
                              v615 = v745;
                              v614 = v7 + 1224;
                              v613 = v743;
                              v612 = v739;
                              v611 = v736;
                              v610 = v733;
                              sub_1416C3400(&off_141781C30, v68, v107, v108);
                            case 2LL:
                              v618 = v748;
                              v617 = v746;
                              v616 = v749;
                              v615 = v745;
                              v614 = v7 + 1224;
                              v613 = v743;
                              v612 = v739;
                              v611 = v736;
                              v610 = v733;
                              sub_1416C3420(&off_141781C30, v68, v107, v108);
                            case 3LL:
                              v744 = v7 + 1224;
                              v145 = *(_QWORD *)(v7 + 2088);
                              goto LABEL_283;
                          }
                      }
                      goto LABEL_278;
                  }
                case 4:
                  v87 = (char *)(a2 + 2600);
                  v88 = *(unsigned __int8 *)(a2 + 2600);
                  v89 = (const __m128i *)(a2 + 1904);
                  v744 = a2 + 1224;
                  switch ( v88 )
                  {
                    case 0LL:
                      v712 = (char *)(a2 + 2600);
                      v740 = *(_QWORD *)(a2 + 1952);
                      v741 = (const __m128i *)(a2 + 1904);
                      goto LABEL_314;
                    case 1LL:
                      v503 = v748;
                      v502 = v746;
                      v501 = v749;
                      v500 = v745;
                      v499 = a2 + 1224;
                      v498 = a2 + 1904;
                      sub_1416C3400(&off_1417813D0, a2, a3, a4);
                    case 2LL:
                      v503 = v748;
                      v502 = v746;
                      v501 = v749;
                      v500 = v745;
                      v499 = a2 + 1224;
                      v498 = a2 + 1904;
                      sub_1416C3420(&off_1417813D0, a2, a3, a4);
                    case 3LL:
                      v741 = (const __m128i *)(a2 + 1904);
                      goto LABEL_99;
                    case 4LL:
                      v114 = (_BYTE *)(a2 + 2649);
                      v115 = *(unsigned __int8 *)(a2 + 2649);
                      v116 = a2 + 2608;
                      if ( *(_BYTE *)(v7 + 2649) )
                      {
                        if ( v115 == 1 )
                        {
                          v546 = v748;
                          v545 = v746;
                          v544 = v749;
                          v543 = v745;
                          v542 = v744;
                          v541 = v7 + 1904;
                          v540 = v7 + 2649;
                          v539 = v7 + 2608;
                          sub_1416C3400(&off_1417815E0, v116, a3, a4);
                        }
                        v546 = v748;
                        v545 = v746;
                        v544 = v749;
                        v543 = v745;
                        v542 = v744;
                        v541 = v7 + 1904;
                        v540 = v7 + 2649;
                        v539 = v7 + 2608;
                        sub_1416C3420(&off_1417815E0, v116, a3, a4);
                      }
                      LOBYTE(v117) = *(_BYTE *)(v7 + 2648);
                      goto LABEL_103;
                    case 5LL:
                      v741 = (const __m128i *)(a2 + 1904);
                      goto LABEL_96;
                    case 6LL:
                      v712 = (char *)(a2 + 2600);
                      v740 = a2 + 11144;
                      v111 = a2 + 2608;
                      switch ( *(_BYTE *)(a2 + 11144) )
                      {
                        case 0:
                          goto LABEL_113;
                        case 1:
                          v510 = v748;
                          v509 = v746;
                          v508 = v749;
                          v507 = v745;
                          v506 = a2 + 1224;
                          v505 = a2 + 1904;
                          v504 = a2 + 2608;
                          sub_1416C3400(&off_141780ED0, a2, a3, a4);
                        case 2:
                          v510 = v748;
                          v509 = v746;
                          v508 = v749;
                          v507 = v745;
                          v506 = a2 + 1224;
                          JUMPOUT(0x1406A66BELL);
                        case 3:
                          v726 = (_BYTE *)(a2 + 11136);
                          v144 = *(unsigned __int8 *)(a2 + 11136);
                          v131 = a2 + 4008;
                          v732 = a2 + 2608;
                          switch ( v144 )
                          {
                            case 0LL:
                              goto LABEL_114;
                            case 1LL:
                              v519 = v748;
                              v518 = v746;
                              v517 = v749;
                              v516 = v745;
                              v515 = a2 + 1224;
                              v514 = a2 + 1904;
                              v513 = v740;
                              v512 = a2 + 2608;
                              v511 = a2 + 4008;
                              sub_1416C3400(&off_141781508, a2, a3, a4);
                            case 2LL:
                              v519 = v748;
                              v518 = v746;
                              v517 = v749;
                              v516 = v745;
                              v515 = a2 + 1224;
                              v514 = a2 + 1904;
                              v513 = v740;
                              v512 = a2 + 2608;
                              v511 = a2 + 4008;
                              sub_1416C3420(&off_141781508, a2, a3, a4);
                            case 3LL:
                              v718 = (char *)(a2 + 6808);
                              v132 = a2 + 5408;
                              switch ( *(_BYTE *)(a2 + 6808) )
                              {
                                case 0:
                                  goto LABEL_115;
                                case 1:
                                  v530 = v748;
                                  v529 = v746;
                                  v528 = v749;
                                  v527 = v745;
                                  v526 = v744;
                                  v525 = a2 + 1904;
                                  v524 = v740;
                                  v523 = v732;
                                  v522 = v726;
                                  v521 = a2 + 4008;
                                  v520 = a2 + 5408;
                                  sub_1416C3400(&off_141781520, a2, a3, a4);
                                case 2:
                                  v530 = v748;
                                  v529 = v746;
                                  v528 = v749;
                                  v527 = v745;
                                  v526 = v744;
                                  v525 = a2 + 1904;
                                  v524 = v740;
                                  v523 = v732;
                                  v522 = v726;
                                  v521 = a2 + 4008;
                                  v520 = a2 + 5408;
                                  sub_1416C3420(&off_141781520, a2, a3, a4);
                                case 3:
                                  v719 = a2 + 5408;
                                  v722 = a2 + 4008;
                                  v741 = (const __m128i *)(a2 + 1904);
                                  goto LABEL_116;
                                case 4:
                                  v719 = a2 + 5408;
                                  v722 = a2 + 4008;
                                  v741 = (const __m128i *)(a2 + 1904);
                                  v87 = (char *)(a2 + 2600);
                                  goto LABEL_130;
                              }
                          }
                          goto LABEL_114;
                      }
                  }
              }
              goto LABEL_22;
          }
      }
      goto LABEL_19;
    case 4LL:
      goto LABEL_206;
    case 5LL:
      goto LABEL_4;
  }
}