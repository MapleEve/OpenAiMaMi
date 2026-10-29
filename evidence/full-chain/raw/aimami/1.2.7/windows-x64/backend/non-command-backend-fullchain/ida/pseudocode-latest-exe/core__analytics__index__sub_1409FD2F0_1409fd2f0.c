// win 1.2.7 latest-exe | module src/core/analytics/index.rs | ea 0x1409fd2f0 | successor of pre-update 0x140f82290 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.515, "str_ov": 0.316, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1409FD2F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __m128i v8; // xmm0
  unsigned __int64 v9; // r15
  void *v10; // rdx
  void *v11; // rdi
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  __int128 v16; // xmm5
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // r12
  int v20; // edi
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int64 v25; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  int v29; // eax
  __m128i si128; // xmm0
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // rdi
  __int64 v36; // rbx
  _QWORD *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // edx
  int v42; // ecx
  unsigned int v43; // ecx
  _QWORD *v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r12
  __int64 v48; // rbx
  __int64 v49; // rax
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  int v52; // eax
  __int64 v53; // rdi
  int v54; // r13d
  unsigned int v55; // eax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 *v60; // rcx
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  __int64 v63; // r11
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // r8
  __int64 v67; // r13
  unsigned __int128 v68; // kr40_16
  __int64 v69; // r12
  __int64 v70; // rcx
  __m128i v71; // xmm0
  char v72; // bl
  __int64 v73; // r9
  __int64 v74; // rax
  unsigned __int64 v75; // r13
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // r10
  __int64 v79; // rcx
  __int64 v80; // r11
  __int64 v81; // rdx
  __int64 v82; // r13
  __int64 v83; // r12
  __m128i v84; // xmm0
  _BYTE *v85; // rcx
  int v86; // eax
  __int64 v87; // rdi
  int v88; // ebx
  __m128i v89; // xmm0
  __int64 v90; // r13
  __m128i v91; // xmm0
  __int64 v92; // r12
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  __int64 v95; // rbx
  int v96; // eax
  __int64 v97; // rdi
  int v98; // r13d
  int v99; // r8d
  unsigned int v100; // eax
  __int64 v101; // rdx
  _QWORD *v102; // rdx
  unsigned __int64 v103; // rax
  __int64 v104; // rcx
  int v105; // edx
  int v106; // ecx
  unsigned int v107; // ecx
  int v108; // edx
  __int64 v109; // r13
  __int64 v110; // r12
  unsigned int v111; // edx
  __int64 v112; // rdx
  __int64 v113; // rax
  __int128 v114; // krC0_16
  __int64 v115; // r12
  __int64 v116; // r12
  _BYTE *v117; // rdx
  __int64 v118; // rcx
  __m128i v119; // xmm0
  __int64 v120; // rbx
  unsigned __int64 v121; // r13
  __int64 v122; // rdi
  __int64 v123; // rbx
  __int128 v124; // xmm7
  __int128 v125; // xmm8
  __int64 v126; // rdx
  __int128 *v127; // rcx
  char v128; // al
  __int64 v129; // rdx
  __int64 v130; // rcx
  __m128i v131; // krF0_16
  __m128i v132; // xmm0
  __m128i v133; // xmm0
  __int64 v134; // r13
  __m128i v135; // xmm0
  __m128i v136; // xmm0
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rax
  __m128i v141; // xmm0
  __int64 v142; // rdi
  __int64 v143; // r12
  unsigned __int64 v144; // rdi
  unsigned __int64 v145; // rbx
  __int64 i; // r13
  bool v147; // cf
  __int64 v148; // rax
  __int64 v149; // rax
  __m128i v150; // xmm0
  __m128i v151; // xmm0
  __m128i v152; // xmm0
  __m128i v153; // xmm0
  __m128i v154; // xmm0
  __int64 v155; // rdx
  __int64 v156; // rcx
  __m128i v157; // xmm0
  __int64 v158; // r13
  __int64 v159; // rax
  char *v160; // rcx
  __int64 v161; // rax
  unsigned __int64 v162; // rbx
  __int64 v163; // rdi
  __m128i v164; // xmm0
  __m128i *v165; // rax
  unsigned __int64 v166; // rdi
  __int64 v167; // rdi
  __int64 v168; // rax
  __m128i v169; // xmm0
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rax
  __int64 v173; // rdi
  __m128i v174; // xmm0
  __int64 v175; // rax
  __m128i v176; // xmm0
  __m128i *v177; // rax
  __m128i *v178; // rax
  __m128i v179; // xmm0
  __m128i v180; // xmm0
  __int64 v181; // rdx
  __int64 v182; // r12
  __m128i v183; // xmm0
  __m128i v184; // xmm0
  __m128i v185; // xmm0
  __m128i v186; // xmm0
  __m128i v187; // xmm0
  __int64 v188; // rcx
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // rax
  __m128i v192; // xmm0
  __int128 v193; // xmm0
  __int128 v194; // xmm1
  __int128 v195; // xmm2
  __int64 v196; // rax
  __int128 v197; // xmm0
  __int128 v198; // xmm1
  __int128 v199; // xmm2
  __m128i v200; // xmm0
  char v201; // al
  __m128i v202; // xmm0
  __int64 v203; // rax
  __m128i v204; // xmm0
  __int128 v205; // xmm1
  __int128 v206; // xmm2
  int v207; // eax
  __int64 v208; // rax
  __m128i v209; // xmm0
  __m128i v210; // xmm0
  __m128i v211; // xmm0
  __int128 v212; // xmm2
  __int128 v213; // xmm3
  __int64 v214; // rdi
  __int64 v215; // rbx
  __int64 *v216; // r14
  __int64 *v217; // r12
  char v218; // r13
  __int64 v219; // rax
  __m128i v220; // xmm0
  __int128 v221; // xmm1
  __int128 v222; // xmm2
  __int64 v223; // rax
  __m128i v224; // xmm0
  __int128 v225; // xmm0
  __int128 v226; // xmm1
  __int128 v227; // xmm2
  __m128i v228; // xmm0
  __int128 v229; // xmm0
  __int128 v230; // xmm1
  __int128 v231; // xmm2
  __m128i v232; // xmm0
  __m128i v233; // xmm0
  __int128 v234; // xmm1
  __int128 v235; // xmm2
  __int64 v236; // [rsp+28h] [rbp-58h]
  _QWORD v237[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v238; // [rsp+40h] [rbp-40h] BYREF
  int v239; // [rsp+48h] [rbp-38h]
  _BYTE v240[88]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v241; // [rsp+A8h] [rbp+28h]
  __int64 (__fastcall **v242)(); // [rsp+B8h] [rbp+38h]
  __m128i v243; // [rsp+250h] [rbp+1D0h] BYREF
  _BYTE v244[80]; // [rsp+260h] [rbp+1E0h]
  _QWORD *v245; // [rsp+2B0h] [rbp+230h]
  char v246[396]; // [rsp+2B8h] [rbp+238h] BYREF
  int v247; // [rsp+444h] [rbp+3C4h]
  char v248; // [rsp+449h] [rbp+3C9h]
  __m128i v249; // [rsp+450h] [rbp+3D0h]
  __int64 v250; // [rsp+460h] [rbp+3E0h]
  __int64 v251; // [rsp+468h] [rbp+3E8h]
  __int64 v252; // [rsp+470h] [rbp+3F0h]
  __int64 v253; // [rsp+478h] [rbp+3F8h]
  __int64 v254; // [rsp+480h] [rbp+400h]
  __int64 v255; // [rsp+488h] [rbp+408h]
  __int64 v256; // [rsp+490h] [rbp+410h]
  __int64 v257; // [rsp+498h] [rbp+418h]
  __int64 v258; // [rsp+4A0h] [rbp+420h]
  unsigned __int64 v259; // [rsp+4A8h] [rbp+428h]
  __int64 v260; // [rsp+4B0h] [rbp+430h]
  unsigned __int64 v261; // [rsp+4C0h] [rbp+440h]
  __int64 v262; // [rsp+4C8h] [rbp+448h]
  char v263; // [rsp+4D0h] [rbp+450h]
  __int64 v264; // [rsp+4E8h] [rbp+468h] BYREF
  __int64 v265; // [rsp+4F0h] [rbp+470h] BYREF
  void *v266; // [rsp+4F8h] [rbp+478h] BYREF
  __int64 v267; // [rsp+500h] [rbp+480h]
  __int64 v268; // [rsp+508h] [rbp+488h]
  __m128i v269; // [rsp+510h] [rbp+490h] BYREF
  __int128 v270; // [rsp+520h] [rbp+4A0h]
  _QWORD *v271; // [rsp+530h] [rbp+4B0h]
  _BYTE v272[80]; // [rsp+540h] [rbp+4C0h] BYREF
  _BYTE v273[24]; // [rsp+590h] [rbp+510h]
  __int64 v274[51]; // [rsp+5A8h] [rbp+528h] BYREF
  __m128i v275; // [rsp+740h] [rbp+6C0h] BYREF
  _OWORD v276[2]; // [rsp+750h] [rbp+6D0h] BYREF
  _OWORD v277[4]; // [rsp+770h] [rbp+6F0h] BYREF
  _QWORD *v278; // [rsp+7B0h] [rbp+730h]
  unsigned __int8 v279; // [rsp+7B8h] [rbp+738h]
  _DWORD v280[3]; // [rsp+7B9h] [rbp+739h]
  __int64 v281; // [rsp+7C8h] [rbp+748h] BYREF
  __int64 v282; // [rsp+7D0h] [rbp+750h]
  __int64 v283; // [rsp+7D8h] [rbp+758h]
  __int64 v284; // [rsp+7E0h] [rbp+760h]
  __int64 v285; // [rsp+7E8h] [rbp+768h]
  __int128 v286; // [rsp+7F0h] [rbp+770h]
  _BYTE v287[96]; // [rsp+800h] [rbp+780h] BYREF
  _QWORD *v288; // [rsp+860h] [rbp+7E0h]
  __int128 v289; // [rsp+868h] [rbp+7E8h] BYREF
  __int64 v290; // [rsp+878h] [rbp+7F8h]
  _QWORD v291[2]; // [rsp+8A0h] [rbp+820h] BYREF
  _BYTE v292[24]; // [rsp+8B0h] [rbp+830h]
  __int128 v293; // [rsp+8C8h] [rbp+848h]
  __int64 v294; // [rsp+8D8h] [rbp+858h]
  __int128 v295; // [rsp+8E0h] [rbp+860h]
  __int64 v296; // [rsp+8F0h] [rbp+870h]
  __int128 v297; // [rsp+8F8h] [rbp+878h]
  __int64 v298; // [rsp+908h] [rbp+888h]
  __int64 v299; // [rsp+910h] [rbp+890h]
  __int128 v300; // [rsp+918h] [rbp+898h]
  __int64 v301; // [rsp+928h] [rbp+8A8h]
  __int128 v302; // [rsp+930h] [rbp+8B0h]
  __int64 v303; // [rsp+940h] [rbp+8C0h]
  __int64 v304; // [rsp+958h] [rbp+8D8h]
  __int64 v305; // [rsp+970h] [rbp+8F0h]
  __int64 v306; // [rsp+990h] [rbp+910h] BYREF
  _OWORD v307[2]; // [rsp+998h] [rbp+918h]
  __int128 v308; // [rsp+9B8h] [rbp+938h]
  _OWORD v309[2]; // [rsp+9C8h] [rbp+948h]
  __int128 v310; // [rsp+9E8h] [rbp+968h]
  _BYTE v311[24]; // [rsp+9F8h] [rbp+978h] BYREF
  __int128 v312; // [rsp+A10h] [rbp+990h]
  __int128 v313; // [rsp+A20h] [rbp+9A0h]
  __m256i v314; // [rsp+A30h] [rbp+9B0h]
  _QWORD v315[4]; // [rsp+A50h] [rbp+9D0h] BYREF
  __int128 v316; // [rsp+A70h] [rbp+9F0h]
  char v317; // [rsp+A80h] [rbp+A00h] BYREF
  __m128i v318; // [rsp+A98h] [rbp+A18h] BYREF
  __int64 v319; // [rsp+AA8h] [rbp+A28h]
  _BYTE v320[96]; // [rsp+AB0h] [rbp+A30h] BYREF
  _QWORD *v321; // [rsp+B10h] [rbp+A90h]
  __m128i v322; // [rsp+B18h] [rbp+A98h]
  __int64 (__fastcall **v323)(); // [rsp+B28h] [rbp+AA8h]
  char *v324; // [rsp+B30h] [rbp+AB0h]
  void *v325; // [rsp+B38h] [rbp+AB8h]
  __m128i *v326; // [rsp+B40h] [rbp+AC0h]
  __int64 (__fastcall **v327)(); // [rsp+B48h] [rbp+AC8h]
  __m128i v328; // [rsp+CC0h] [rbp+C40h] BYREF
  __int64 v329; // [rsp+CD0h] [rbp+C50h]
  __int64 v330; // [rsp+CE0h] [rbp+C60h]
  __int64 v331; // [rsp+CE8h] [rbp+C68h] BYREF
  void (__fastcall **v332)(_QWORD); // [rsp+CF0h] [rbp+C70h]
  __int64 v333; // [rsp+CF8h] [rbp+C78h]
  __m128i v334; // [rsp+D00h] [rbp+C80h] BYREF
  __int64 v335; // [rsp+D10h] [rbp+C90h]
  __m128i v336; // [rsp+D20h] [rbp+CA0h] BYREF
  __int128 v337; // [rsp+D30h] [rbp+CB0h]
  _QWORD *v338; // [rsp+D40h] [rbp+CC0h]
  __m128i v339; // [rsp+D50h] [rbp+CD0h] BYREF
  _BYTE v340[24]; // [rsp+D60h] [rbp+CE0h] BYREF
  _BYTE v341[24]; // [rsp+D78h] [rbp+CF8h]
  unsigned __int64 v342; // [rsp+D98h] [rbp+D18h]
  __int64 v343; // [rsp+DA0h] [rbp+D20h] BYREF
  __int64 v344; // [rsp+DA8h] [rbp+D28h]
  __int64 v345; // [rsp+DB0h] [rbp+D30h]
  __int64 v346; // [rsp+DB8h] [rbp+D38h]
  __int64 v347; // [rsp+DC0h] [rbp+D40h]
  _BYTE v348[24]; // [rsp+DC8h] [rbp+D48h]
  __m128i v349; // [rsp+DE0h] [rbp+D60h] BYREF
  __int128 v350; // [rsp+DF0h] [rbp+D70h]
  __m128i v351; // [rsp+E00h] [rbp+D80h]
  __int128 v352; // [rsp+E10h] [rbp+D90h]
  __m128i v353; // [rsp+E20h] [rbp+DA0h] BYREF
  _BYTE v354[24]; // [rsp+E30h] [rbp+DB0h]
  HANDLE hObject; // [rsp+E48h] [rbp+DC8h]
  char v356; // [rsp+E57h] [rbp+DD7h] BYREF
  _BYTE v357[24]; // [rsp+E58h] [rbp+DD8h]
  __m128i v358; // [rsp+E70h] [rbp+DF0h] BYREF
  __int128 v359; // [rsp+E80h] [rbp+E00h]
  __int128 v360; // [rsp+E90h] [rbp+E10h]
  __m128i v361; // [rsp+EA0h] [rbp+E20h]
  __int64 v362; // [rsp+EB0h] [rbp+E30h]
  __int64 v363; // [rsp+EB8h] [rbp+E38h]
  __int64 v364; // [rsp+EC0h] [rbp+E40h]
  __int64 v365; // [rsp+EC8h] [rbp+E48h]
  __int128 v366; // [rsp+ED0h] [rbp+E50h]
  __int64 v367; // [rsp+EE0h] [rbp+E60h]
  __int64 v368; // [rsp+EE8h] [rbp+E68h]
  __int64 v369; // [rsp+EF0h] [rbp+E70h]
  __int64 v370; // [rsp+EF8h] [rbp+E78h]
  __m128i v371; // [rsp+F00h] [rbp+E80h] BYREF
  __int64 v372; // [rsp+F10h] [rbp+E90h]
  __int64 v373; // [rsp+F18h] [rbp+E98h]
  __m128i v374; // [rsp+F20h] [rbp+EA0h] BYREF
  _BYTE v375[96]; // [rsp+F30h] [rbp+EB0h] BYREF
  _QWORD *v376; // [rsp+F98h] [rbp+F18h]
  __int64 v377; // [rsp+FA0h] [rbp+F20h]
  __int64 v378; // [rsp+FA8h] [rbp+F28h]
  __int64 v379; // [rsp+FB0h] [rbp+F30h]
  __int64 v380; // [rsp+FB8h] [rbp+F38h]
  char v381; // [rsp+FC6h] [rbp+F46h] BYREF
  char v382; // [rsp+FC7h] [rbp+F47h]
  __int64 v383; // [rsp+FC8h] [rbp+F48h]
  __int64 v384; // [rsp+FD0h] [rbp+F50h]
  char v385; // [rsp+FDFh] [rbp+F5Fh]
  __int64 v386; // [rsp+FE0h] [rbp+F60h]
  __int64 v387; // [rsp+FE8h] [rbp+F68h]
  char v388; // [rsp+FF7h] [rbp+F77h]
  __int64 v389; // [rsp+FF8h] [rbp+F78h]
  char v390; // [rsp+1005h] [rbp+F85h]
  char v391; // [rsp+1006h] [rbp+F86h]
  char v392; // [rsp+1007h] [rbp+F87h]
  __int64 v393; // [rsp+1008h] [rbp+F88h]

  v393 = -2;
  sub_1409FC900(v287);
  if ( (_BYTE)v289 == 0xFF )
  {
    v12 = *(_OWORD *)&v287[64];
    *(_OWORD *)&v244[48] = *(_OWORD *)&v287[64];
    v13 = *(_OWORD *)v287;
    v14 = *(_OWORD *)&v287[16];
    v15 = *(_OWORD *)&v287[32];
    v16 = *(_OWORD *)&v287[48];
    *(_OWORD *)&v244[32] = *(_OWORD *)&v287[48];
    *(_OWORD *)&v244[16] = *(_OWORD *)&v287[32];
    *(_OWORD *)v244 = *(_OWORD *)&v287[16];
    v243 = *(__m128i *)v287;
    *(__m128i *)(a1 + 80) = _mm_loadu_si128((const __m128i *)&v287[80]);
    *(_OWORD *)(a1 + 64) = v12;
    *(_OWORD *)(a1 + 48) = v16;
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    return a1;
  }
  v384 = a3;
  v245 = v288;
  *(_OWORD *)&v244[64] = *(_OWORD *)&v287[80];
  *(_OWORD *)&v244[48] = *(_OWORD *)&v287[64];
  *(_OWORD *)&v244[32] = *(_OWORD *)&v287[48];
  *(_OWORD *)&v244[16] = *(_OWORD *)&v287[32];
  *(_OWORD *)v244 = *(_OWORD *)&v287[16];
  v243 = *(__m128i *)v287;
  v280[0] = *(_DWORD *)((char *)&v289 + 1);
  *(_DWORD *)((char *)v280 + 3) = DWORD1(v289);
  v278 = v288;
  v277[3] = *(_OWORD *)&v287[80];
  v277[2] = *(_OWORD *)&v287[64];
  v8 = _mm_load_si128(&v243);
  v277[1] = *(_OWORD *)&v287[48];
  v277[0] = *(_OWORD *)&v287[32];
  v276[1] = *(_OWORD *)&v287[16];
  v276[0] = v8;
  v279 = v289;
  *(_DWORD *)v287 = 0;
  *(_QWORD *)&v287[8] = 0;
  *(_DWORD *)&v287[16] = 7;
  *(_QWORD *)&v287[20] = 0x100000000LL;
  *(_QWORD *)&v287[25] = 16777217;
  sub_1416B18A0((unsigned int)&v243, *(_QWORD *)(a2 + 456), *(_QWORD *)(a2 + 464), (unsigned int)&unk_141A666ED, 17);
  hObject = (HANDLE)v243.m128i_i64[1];
  v9 = sub_1416BFE10(v287, v243.m128i_i64[1], *(_QWORD *)v244);
  v11 = v10;
  if ( v243.m128i_i64[0] )
    sub_140001660(hObject, v243.m128i_i64[0], 1);
  if ( (v9 & 1) != 0 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v11;
    goto LABEL_20;
  }
  v382 = a4;
  hObject = v11;
  v266 = v11;
  v17 = sub_14143F2E0(&v266);
  v18 = v384;
  v19 = v17;
  if ( v17 )
  {
    v243.m128i_i64[0] = v17;
    v20 = v17 & 3;
    switch ( v17 & 3 )
    {
      case 0LL:
        if ( *(_BYTE *)(v17 + 16) == 13 )
          goto LABEL_14;
        goto LABEL_18;
      case 1LL:
        if ( *(_BYTE *)(v17 + 31) != 13 )
          goto LABEL_18;
        goto LABEL_14;
      case 2LL:
        v25 = sub_1416E2EE0();
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v25 + 8))(HIDWORD(v19)) == 13 )
          goto LABEL_14;
        goto LABEL_18;
      case 3LL:
        if ( BYTE4(v17) == 13 )
        {
LABEL_14:
          *(_QWORD *)a1 = -1;
          if ( (unsigned int)(v20 - 2) >= 2 && (v19 & 3) != 0 )
          {
            *(_QWORD *)&v287[8] = v19 - 1;
            v287[0] = 3;
            sub_1416EBAD0(&v287[8]);
          }
        }
        else
        {
LABEL_18:
          *(_QWORD *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v19;
        }
        break;
    }
    goto LABEL_19;
  }
  sub_1408324F0(v287, a2);
  v21 = *(_QWORD *)v287;
  v243 = *(__m128i *)&v287[8];
  *(_QWORD *)v244 = *(_QWORD *)&v287[24];
  if ( *(_QWORD *)v287 != -1 )
  {
    v22 = *(_OWORD *)&v287[32];
    v23 = *(_OWORD *)&v287[48];
    v24 = *(_OWORD *)&v287[64];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[80];
    *(_OWORD *)(a1 + 64) = v24;
    *(_OWORD *)(a1 + 48) = v23;
    *(_OWORD *)(a1 + 32) = v22;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v244;
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v243);
    *(_QWORD *)a1 = v21;
    goto LABEL_19;
  }
  v328 = _mm_load_si128(&v243);
  v329 = *(_QWORD *)v244;
  sub_140930990(v287, v276, aInsertIntoMeta_1, 92);
  if ( *(_DWORD *)v287 == 1 )
  {
    v27 = _mm_loadu_si128((const __m128i *)&v287[8]);
    *(_OWORD *)&v320[48] = *(_OWORD *)&v287[56];
    *(_OWORD *)&v320[32] = *(_OWORD *)&v287[40];
    *(_OWORD *)&v320[16] = *(_OWORD *)&v287[24];
    *(__m128i *)v320 = v27;
  }
  else
  {
    v28 = _mm_loadu_si128((const __m128i *)&v287[8]);
    *(_OWORD *)&v244[32] = *(_OWORD *)&v287[56];
    *(_OWORD *)&v244[16] = *(_OWORD *)&v287[40];
    *(_OWORD *)v244 = *(_OWORD *)&v287[24];
    v243 = v28;
    v9 = *(_QWORD *)&v287[64];
    v29 = sub_1417D8600(*(_QWORD *)&v287[64]);
    if ( v29 )
    {
      *(_OWORD *)v320 = 0x8000000000000013uLL;
      *(_QWORD *)&v320[16] = v29;
    }
    else
    {
      sub_14092FA00(v320, v243.m128i_i64[0], v9);
    }
    sub_140904890(&v243);
  }
  if ( *(_QWORD *)v320 != -1 )
  {
    si128 = _mm_load_si128((const __m128i *)v320);
    *(_OWORD *)&v244[32] = *(_OWORD *)&v320[48];
    *(_OWORD *)&v244[16] = *(_OWORD *)&v320[32];
    *(_OWORD *)v244 = *(_OWORD *)&v320[16];
    v243 = si128;
    *(_QWORD *)v287 = &v243;
    *(_QWORD *)&v287[8] = sub_14142D4D0;
    sub_1416DAFA0(v240, &unk_141A6690F, v287);
    v31 = *(_QWORD *)v240;
    *(__m128i *)v287 = _mm_loadu_si128((const __m128i *)&v240[8]);
    sub_140904700(&v243);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[64];
    v32 = _mm_load_si128((const __m128i *)v287);
    v33 = *(_OWORD *)&v287[16];
    v34 = *(_OWORD *)&v287[32];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v287[48];
    *(_OWORD *)(a1 + 48) = v34;
    *(_OWORD *)(a1 + 32) = v33;
    *(__m128i *)(a1 + 16) = v32;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = v31;
    goto LABEL_32;
  }
  v39 = v329;
  *(_QWORD *)(v18 + 40) = v329;
  v40 = v328.m128i_i64[1];
  v267 = v328.m128i_i64[1] + (v39 << 6);
  v284 = 0;
LABEL_42:
  v346 = v40;
  if ( v40 == v267 )
  {
    if ( !(unsigned __int8)sub_1409307B0(v18) )
    {
LABEL_383:
      *(_QWORD *)a1 = -1;
      goto LABEL_32;
    }
    if ( (v284 & 1) != 0 )
    {
      nullsub_1(v190, v189);
      v191 = sub_140001650(28, 1);
      if ( !v191 )
        sub_14196B2DB(1, 28);
      *(_OWORD *)(v191 + 12) = *(__int128 *)((char *)&xmmword_141A66847 + 12);
      *(__m128i *)v191 = _mm_loadu_si128((const __m128i *)&xmmword_141A66847);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 28;
      *(_QWORD *)(a1 + 16) = v191;
      *(_QWORD *)(a1 + 24) = 28;
      goto LABEL_32;
    }
    sub_1408324F0(v287, a2);
    v196 = *(_QWORD *)v287;
    v243 = *(__m128i *)&v287[8];
    *(_QWORD *)v244 = *(_QWORD *)&v287[24];
    if ( *(_QWORD *)v287 != -1 )
    {
      v197 = *(_OWORD *)&v287[32];
      v198 = *(_OWORD *)&v287[48];
      v199 = *(_OWORD *)&v287[64];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[80];
      *(_OWORD *)(a1 + 64) = v199;
      *(_OWORD *)(a1 + 48) = v198;
      *(_OWORD *)(a1 + 32) = v197;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v244;
      *(__m128i *)(a1 + 8) = _mm_load_si128(&v243);
      *(_QWORD *)a1 = v196;
      goto LABEL_32;
    }
    v339 = _mm_load_si128(&v243);
    *(_QWORD *)v340 = *(_QWORD *)v244;
    sub_14092D870(&v349, v339.m128i_i64[1], v339.m128i_i64[1] + (*(_QWORD *)v244 << 6));
    sub_14092D870(&v358, v328.m128i_i64[1], v328.m128i_i64[1] + (v329 << 6));
    if ( (unsigned __int8)sub_1408F9840(&v349, &v358) )
    {
      sub_141431530(v287, v276, *(&off_141A672A8 + (unsigned int)v279), qword_141A672C0[v279]);
      if ( *(_QWORD *)v287 == -1 )
      {
        v391 = 1;
        sub_140930990(&v243, v276, aSelectPathFrom, 22);
        if ( v243.m128i_i32[0] == 1 )
        {
          v202 = _mm_loadu_si128((const __m128i *)&v243.m128i_u64[1]);
          *(_OWORD *)&v320[48] = *(_OWORD *)&v244[40];
          *(_OWORD *)&v320[32] = *(_OWORD *)&v244[24];
          *(_OWORD *)&v320[16] = *(_OWORD *)&v244[8];
          *(__m128i *)v320 = v202;
          v391 = 1;
          sub_140A04BA0(v287, v320);
          v203 = *(_QWORD *)v287;
          *(_OWORD *)v240 = *(_OWORD *)&v287[8];
          *(_OWORD *)&v240[16] = *(_OWORD *)&v287[24];
          *(_OWORD *)&v240[32] = *(_OWORD *)&v287[40];
          *(_OWORD *)&v240[48] = *(_OWORD *)&v287[56];
          *(_QWORD *)(a1 + 88) = *(_QWORD *)&v287[88];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v287[72];
          v204 = _mm_load_si128((const __m128i *)v240);
          v205 = *(_OWORD *)&v240[16];
          v206 = *(_OWORD *)&v240[32];
          *(__m128i *)v272 = v204;
          *(_OWORD *)&v272[16] = *(_OWORD *)&v240[16];
          *(_OWORD *)&v272[32] = *(_OWORD *)&v240[32];
          *(_OWORD *)&v272[48] = *(_OWORD *)&v240[48];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v240[48];
          *(_OWORD *)(a1 + 40) = v206;
          *(_OWORD *)(a1 + 24) = v205;
          *(__m128i *)(a1 + 8) = v204;
          *(_QWORD *)a1 = v203;
        }
        else
        {
          *(__m128i *)v272 = _mm_loadu_si128((const __m128i *)&v243.m128i_u64[1]);
          v374 = *(__m128i *)v272;
          *(_OWORD *)v375 = *(_OWORD *)&v244[8];
          *(_OWORD *)&v375[16] = *(_OWORD *)&v244[24];
          *(_OWORD *)&v375[32] = *(_OWORD *)&v244[40];
          v207 = sub_1417D8600(*(_QWORD *)&v244[48]);
          if ( v207 )
          {
            v243 = (__m128i)0x8000000000000013uLL;
            *(_QWORD *)v244 = v207;
            sub_140A04BA0(v287, &v243);
            v208 = *(_QWORD *)v287;
            *(_QWORD *)(a1 + 88) = *(_QWORD *)&v287[88];
            *(_OWORD *)(a1 + 72) = *(_OWORD *)&v287[72];
            *(_OWORD *)(a1 + 56) = *(_OWORD *)&v287[56];
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v287[40];
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v287[24];
            v209 = _mm_loadu_si128((const __m128i *)&v287[8]);
            *(_QWORD *)a1 = v208;
            *(__m128i *)(a1 + 8) = v209;
            v391 = 1;
            sub_140904890(&v374);
          }
          else
          {
            sub_14077CEB0(v320, &v374, 0);
            if ( *(_QWORD *)v320 == -1 )
            {
              v214 = *(_QWORD *)&v320[8];
              v215 = *(_QWORD *)&v320[24];
              v216 = *(__int64 **)&v320[16];
              v391 = 1;
              sub_140904890(&v374);
              v217 = &v216[3 * v215];
              *(_QWORD *)v240 = v216;
              *(_QWORD *)&v240[8] = v216;
              *(_QWORD *)&v240[16] = v214;
              *(_QWORD *)&v240[24] = v217;
              v218 = 0;
              while ( v216 != v217 )
              {
                *(_QWORD *)&v240[8] = v216 + 3;
                v219 = *v216;
                v374 = *(__m128i *)(v216 + 1);
                if ( v219 == -1 )
                  break;
                *(_QWORD *)v272 = v219;
                *(__m128i *)&v272[8] = _mm_load_si128(&v374);
                if ( !(unsigned __int8)sub_1408457C0(&v349, v272) )
                {
                  sub_140901970(v320, v276, v272);
                  if ( *(_QWORD *)v320 != -1 )
                  {
                    v228 = _mm_loadu_si128((const __m128i *)v320);
                    *(_OWORD *)&v244[32] = *(_OWORD *)&v320[48];
                    *(_OWORD *)&v244[16] = *(_OWORD *)&v320[32];
                    *(_OWORD *)v244 = *(_OWORD *)&v320[16];
                    v243 = v228;
                    sub_140A04BA0(v287, &v243);
                    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[80];
                    v229 = *(_OWORD *)&v287[16];
                    v230 = *(_OWORD *)&v287[32];
                    v231 = *(_OWORD *)&v287[48];
                    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v287[64];
                    *(_OWORD *)(a1 + 48) = v231;
                    *(_OWORD *)(a1 + 32) = v230;
                    *(_OWORD *)(a1 + 16) = v229;
                    *(_OWORD *)a1 = *(_OWORD *)v287;
                    if ( *(_QWORD *)v272 )
                      sub_140001660(*(_QWORD *)&v272[8], *(_QWORD *)v272, 1);
                    sub_1401A5C50(v240);
                    goto LABEL_419;
                  }
                  v218 = 1;
                }
                if ( *(_QWORD *)v272 )
                  sub_140001660(*(_QWORD *)&v272[8], *(_QWORD *)v272, 1);
                v216 += 3;
              }
              sub_1401A5C50(v240);
              if ( (v218 & 1) != 0 )
              {
                v391 = 1;
                sub_1409FC6A0(v287, v276);
                if ( *(_DWORD *)v287 != -1 )
                {
                  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[80];
                  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v287[64];
                  v220 = _mm_loadu_si128((const __m128i *)v287);
                  v221 = *(_OWORD *)&v287[16];
                  v222 = *(_OWORD *)&v287[32];
                  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v287[48];
                  *(_OWORD *)(a1 + 32) = v222;
                  *(_OWORD *)(a1 + 16) = v221;
                  *(__m128i *)a1 = v220;
                  goto LABEL_419;
                }
              }
              v391 = 1;
              v223 = sub_1409FC860();
              v391 = 1;
              sub_140901BD0(v320, v276, v223);
              if ( *(_QWORD *)v320 != -1 || (v391 = 1, sub_140901870(v320, v276), *(_QWORD *)v320 != -1) )
              {
                v224 = _mm_loadu_si128((const __m128i *)v320);
                *(_OWORD *)&v244[32] = *(_OWORD *)&v320[48];
                *(_OWORD *)&v244[16] = *(_OWORD *)&v320[32];
                *(_OWORD *)v244 = *(_OWORD *)&v320[16];
                v243 = v224;
                v391 = 1;
                sub_140A04BA0(v287, &v243);
                *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[80];
                v225 = *(_OWORD *)&v287[16];
                v226 = *(_OWORD *)&v287[32];
                v227 = *(_OWORD *)&v287[48];
                *(_OWORD *)(a1 + 64) = *(_OWORD *)&v287[64];
                *(_OWORD *)(a1 + 48) = v227;
                *(_OWORD *)(a1 + 32) = v226;
                *(_OWORD *)(a1 + 16) = v225;
                *(__m128i *)a1 = _mm_load_si128((const __m128i *)v287);
                goto LABEL_419;
              }
              v391 = 0;
              sub_14092F940(v320, v276);
              if ( *(_QWORD *)v320 != -1 )
              {
                v232 = _mm_loadu_si128((const __m128i *)v320);
                *(_OWORD *)&v244[32] = *(_OWORD *)&v320[48];
                *(_OWORD *)&v244[16] = *(_OWORD *)&v320[32];
                *(_OWORD *)v244 = *(_OWORD *)&v320[16];
                v243 = v232;
                v391 = 0;
                sub_140A04BA0(v287, &v243);
                *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[80];
                *(_OWORD *)(a1 + 64) = *(_OWORD *)&v287[64];
                v233 = _mm_loadu_si128((const __m128i *)v287);
                v234 = *(_OWORD *)&v287[16];
                v235 = *(_OWORD *)&v287[32];
                *(_OWORD *)(a1 + 48) = *(_OWORD *)&v287[48];
                *(_OWORD *)(a1 + 32) = v235;
                *(_OWORD *)(a1 + 16) = v234;
                *(__m128i *)a1 = v233;
                goto LABEL_420;
              }
              *(_QWORD *)a1 = -1;
              sub_140190060(&v358);
              sub_140190060(&v349);
              sub_1401A36E0(&v339);
              sub_1401A36E0(&v328);
              goto LABEL_19;
            }
            v210 = _mm_loadu_si128((const __m128i *)v320);
            *(_OWORD *)&v244[32] = *(_OWORD *)&v320[48];
            *(_OWORD *)&v244[16] = *(_OWORD *)&v320[32];
            *(_OWORD *)v244 = *(_OWORD *)&v320[16];
            v243 = v210;
            sub_140A04BA0(v287, &v243);
            v211 = _mm_load_si128((const __m128i *)&v287[16]);
            v212 = *(_OWORD *)&v287[48];
            v213 = *(_OWORD *)&v287[64];
            *(_OWORD *)(a1 + 32) = *(_OWORD *)&v287[32];
            *(_OWORD *)(a1 + 48) = v212;
            *(_OWORD *)(a1 + 64) = v213;
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[80];
            *(_OWORD *)a1 = *(_OWORD *)v287;
            *(__m128i *)(a1 + 16) = v211;
            v391 = 1;
            sub_140904890(&v374);
          }
        }
LABEL_419:
        sub_140904470(v276);
      }
      else
      {
        *(_OWORD *)&v244[32] = *(_OWORD *)&v287[48];
        *(_OWORD *)&v244[17] = *(_OWORD *)&v287[33];
        *(__m128i *)&v244[1] = _mm_loadu_si128((const __m128i *)&v287[17]);
        v243 = *(__m128i *)v287;
        v244[0] = v287[16];
        sub_140A04BA0(v287, &v243);
        v200 = _mm_loadu_si128((const __m128i *)v287);
        v201 = v287[16];
        *(_OWORD *)(a1 + 17) = *(_OWORD *)&v287[17];
        *(_OWORD *)(a1 + 33) = *(_OWORD *)&v287[33];
        *(_OWORD *)(a1 + 49) = *(_OWORD *)&v287[49];
        *(_OWORD *)(a1 + 65) = *(_OWORD *)&v287[65];
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[80];
        *(__m128i *)a1 = v200;
        *(_BYTE *)(a1 + 16) = v201;
      }
    }
    else
    {
      *(_QWORD *)(v18 + 24) = 0;
      *(_QWORD *)a1 = -1;
    }
LABEL_420:
    sub_140190060(&v358);
    sub_140190060(&v349);
    sub_1401A36E0(&v339);
    goto LABEL_32;
  }
  if ( !*(_BYTE *)(v18 + 80) )
    goto LABEL_383;
  sub_1414331D0(v287);
  v41 = (*(int *)v287 >> 13) - 1;
  v42 = 0;
  if ( *(int *)v287 >> 13 <= 0 )
  {
    v43 = (1 - (*(int *)v287 >> 13)) / 0x190u + 1;
    v41 += 400 * v43;
    v42 = -146097 * v43;
  }
  if ( 86400LL
     * (((v41 / 100) >> 2) + ((1461 * v41) >> 2) + v42 + ((*(_DWORD *)v287 >> 4) & 0x1FF) - v41 / 100 - 719163)
     + *(unsigned int *)&v287[4]
     - *(_QWORD *)(v18 + 16) >= 75 )
    goto LABEL_383;
  v44 = *(_QWORD **)(v346 + 16);
  v380 = *(_QWORD *)(v346 + 8);
  v376 = v44;
  sub_1416DA570(v287);
  if ( *(_QWORD *)v287 != -1 )
  {
    v334 = _mm_loadu_si128((const __m128i *)v287);
    v47 = *(_QWORD *)&v287[16];
    v335 = *(_QWORD *)&v287[16];
    v48 = v334.m128i_i64[1];
    goto LABEL_55;
  }
  v47 = *(_QWORD *)&v287[16];
  if ( *(__int64 *)&v287[16] < 0 )
  {
    v188 = 0;
    goto LABEL_378;
  }
  if ( !*(_QWORD *)&v287[16] )
  {
    v48 = 1;
    v330 = 1;
    goto LABEL_54;
  }
  v9 = *(_QWORD *)&v287[8];
  nullsub_1(v46, v45);
  v49 = sub_140001650(v47, 1);
  if ( !v49 )
  {
    v330 = v47;
    v188 = 1;
LABEL_378:
    sub_14196B2DB(v188, v330);
  }
  v48 = v49;
  sub_1419234B0(v49, v9, v47);
  v330 = v48;
LABEL_54:
  v334.m128i_i64[0] = v47;
  v334.m128i_i64[1] = v48;
  v335 = v47;
LABEL_55:
  sub_140930990(v240, v276, aSelectFingerpr, 73);
  v374 = *(__m128i *)&v240[8];
  *(_OWORD *)v375 = *(_OWORD *)&v240[24];
  *(_OWORD *)&v375[16] = *(_OWORD *)&v240[40];
  *(_OWORD *)&v375[32] = *(_OWORD *)&v240[56];
  if ( *(_DWORD *)v240 == 1 )
  {
    v50 = _mm_load_si128(&v374);
    *(_OWORD *)&v272[56] = *(_OWORD *)&v375[32];
    *(_OWORD *)&v272[40] = *(_OWORD *)&v375[16];
    *(_OWORD *)&v272[24] = *(_OWORD *)v375;
    *(__m128i *)&v272[8] = v50;
    *(_QWORD *)v272 = -1;
LABEL_76:
    v63 = *(_QWORD *)&v272[8];
    if ( *(_QWORD *)&v272[8] == 0x8000000000000009uLL )
    {
      sub_140AF3E70(&v272[8]);
      v69 = 2;
      goto LABEL_78;
    }
    v66 = *(_QWORD *)&v272[24];
    v64 = *(_QWORD *)&v272[16];
    v68 = *(_OWORD *)&v272[32];
    v65 = *(_QWORD *)&v272[56];
    v67 = *(_QWORD *)&v272[48];
    LOBYTE(v48) = v272[64];
    v371.m128i_i32[0] = *(_DWORD *)&v272[65];
    *(__int32 *)((char *)v371.m128i_i32 + 3) = *(_DWORD *)&v272[68];
    goto LABEL_81;
  }
  v51 = _mm_load_si128(&v374);
  v361 = *(__m128i *)&v375[32];
  v360 = *(_OWORD *)&v375[16];
  v359 = *(_OWORD *)v375;
  v358 = v51;
  v389 = v51.m128i_i64[0];
  v9 = *(_QWORD *)&v375[40];
  v52 = sub_1417D8600(*(_QWORD *)&v375[40]);
  v53 = 1;
  if ( !v52 )
  {
    v58 = 0;
    goto LABEL_71;
  }
  v54 = v52;
  if ( !v47 )
    v48 = 1;
  v55 = sub_1417D81D0(v9, 1, v48, v47, -(v47 != 0), 1);
  if ( *(_QWORD *)v389 >= 0x7FFFFFFFFFFFFFFFuLL )
    sub_14196B550(&off_141A5AC58);
  v56 = v389;
  ++*(_QWORD *)v389;
  sub_14142D4A0(v240, *(_QWORD *)(v56 + 16), v55);
  --*(_QWORD *)v389;
  v57 = *(_QWORD *)v240;
  if ( *(_QWORD *)v240 == -1 )
  {
    if ( v54 == 1 )
    {
      v353 = (__m128i)(unsigned __int64)&v358;
      sub_140A07DF0(v240, &v353);
      v18 = v384;
      v59 = *(_QWORD *)v240;
      if ( *(_QWORD *)v240 == -1 )
      {
        v60 = &v353.m128i_i64[1];
        v59 = 0x8000000000000009uLL;
        if ( v353.m128i_i64[1] )
        {
          sub_140658620(v240, &v353.m128i_u64[1], 0, &off_141A5A640);
          v48 = *(_QWORD *)&v240[24];
          if ( *(_QWORD *)v240 == -1 )
          {
            v383 = *(_QWORD *)&v240[16];
            v389 = *(_QWORD *)&v240[8];
            sub_140658620(v240, &v353.m128i_u64[1], 1, &off_141A5A658);
            v173 = *(_QWORD *)&v240[24];
            if ( *(_QWORD *)v240 == -1 )
            {
              v378 = *(_QWORD *)&v240[16];
              v387 = *(_QWORD *)&v240[8];
              sub_140658A10(v240, &v353.m128i_u64[1], 2, &off_141A5A670);
              v9 = *(_QWORD *)&v240[8];
              if ( *(_QWORD *)v240 == -1
                && (sub_140658A10(v240, &v353.m128i_u64[1], 3, &off_141A5A688),
                    v182 = *(_QWORD *)&v240[8],
                    *(_QWORD *)v240 == -1) )
              {
                sub_140658860(v240, &v353.m128i_u64[1], 4, &off_141A5A6A0);
                if ( *(_QWORD *)v240 == -1 )
                {
                  *(_QWORD *)v272 = v389;
                  *(_QWORD *)&v272[8] = v383;
                  *(_QWORD *)&v272[16] = v48;
                  *(_QWORD *)&v272[24] = v387;
                  *(_QWORD *)&v272[32] = v378;
                  *(_QWORD *)&v272[40] = v173;
                  *(_QWORD *)&v272[48] = v9;
                  *(_QWORD *)&v272[56] = v182;
                  v272[64] = v240[8];
                  v18 = v384;
                  goto LABEL_69;
                }
                *(_QWORD *)&v272[64] = *(_QWORD *)&v240[56];
                v183 = _mm_loadu_si128((const __m128i *)&v240[9]);
                *(_OWORD *)&v272[49] = *(_OWORD *)&v240[41];
                *(_OWORD *)&v272[33] = *(_OWORD *)&v240[25];
                *(__m128i *)&v272[17] = v183;
                *(_QWORD *)&v272[8] = *(_QWORD *)v240;
                v272[16] = v240[8];
              }
              else
              {
                v176 = _mm_loadu_si128((const __m128i *)&v240[16]);
                *(_OWORD *)&v272[56] = *(_OWORD *)&v240[48];
                *(_OWORD *)&v272[40] = *(_OWORD *)&v240[32];
                *(__m128i *)&v272[24] = v176;
                *(_OWORD *)&v272[8] = *(_OWORD *)v240;
              }
              *(_QWORD *)v272 = -1;
              if ( v387 )
                sub_140001660(v378, v387, 1);
            }
            else
            {
              v174 = _mm_loadu_si128((const __m128i *)&v240[32]);
              *(_OWORD *)&v272[56] = *(_OWORD *)&v240[48];
              *(__m128i *)&v272[40] = v174;
              *(_OWORD *)&v272[24] = *(_OWORD *)&v240[16];
              *(_OWORD *)&v272[8] = *(_OWORD *)v240;
              *(_QWORD *)v272 = -1;
            }
            v18 = v384;
            if ( v389 )
              sub_140001660(v383, v389, 1);
            goto LABEL_69;
          }
          v164 = _mm_loadu_si128((const __m128i *)&v240[32]);
          *(_OWORD *)&v272[56] = *(_OWORD *)&v240[48];
          *(__m128i *)&v272[40] = v164;
          *(_OWORD *)&v272[24] = *(_OWORD *)&v240[16];
          *(_OWORD *)&v272[8] = *(_OWORD *)v240;
LABEL_68:
          *(_QWORD *)v272 = -1;
LABEL_69:
          sub_1409044F0(&v353);
          goto LABEL_73;
        }
      }
      else
      {
        v60 = *(__int64 **)&v240[8];
        v374 = _mm_loadu_si128((const __m128i *)&v240[16]);
        *(_OWORD *)v375 = *(_OWORD *)&v240[32];
        *(_OWORD *)&v375[16] = *(_OWORD *)&v240[48];
      }
      *(_QWORD *)&v272[8] = v59;
      *(_QWORD *)&v272[16] = v60;
      v61 = _mm_load_si128(&v374);
      *(_OWORD *)&v272[56] = *(_OWORD *)&v375[16];
      *(_OWORD *)&v272[40] = *(_OWORD *)v375;
      *(__m128i *)&v272[24] = v61;
      goto LABEL_68;
    }
    v58 = v54;
LABEL_71:
    v57 = 0x8000000000000013uLL;
    goto LABEL_72;
  }
  v53 = *(_QWORD *)&v240[8];
  v58 = *(_QWORD *)&v240[16];
  v374 = _mm_loadu_si128((const __m128i *)&v240[24]);
  *(_OWORD *)v375 = *(_OWORD *)&v240[40];
  *(_QWORD *)&v375[16] = *(_QWORD *)&v240[56];
LABEL_72:
  *(_QWORD *)&v272[64] = *(_QWORD *)&v375[16];
  v62 = _mm_load_si128(&v374);
  *(_OWORD *)&v272[48] = *(_OWORD *)v375;
  *(__m128i *)&v272[32] = v62;
  *(_QWORD *)&v272[8] = v57;
  *(_QWORD *)&v272[16] = v53;
  *(_QWORD *)&v272[24] = v58;
  *(_QWORD *)v272 = -1;
  v18 = v384;
LABEL_73:
  sub_140904890(&v358);
  if ( *(_QWORD *)v272 == -1 )
    goto LABEL_76;
  v63 = *(_QWORD *)&v272[8];
  v377 = *(_QWORD *)&v272[24];
  v64 = *(_QWORD *)&v272[16];
  v364 = *(_QWORD *)&v272[40];
  v373 = *(_QWORD *)&v272[32];
  v65 = *(_QWORD *)&v272[56];
  v383 = *(_QWORD *)&v272[48];
  v48 = v272[64];
  v371.m128i_i32[0] = *(_DWORD *)&v272[65];
  *(__int32 *)((char *)v371.m128i_i32 + 3) = *(_DWORD *)&v272[68];
  if ( *(_QWORD *)v272 == -2 )
  {
    v66 = v377;
    v67 = v383;
    v68 = __PAIR128__(v364, v373);
LABEL_81:
    *(_QWORD *)v240 = v63;
    *(_QWORD *)&v240[8] = v64;
    v377 = v66;
    *(_QWORD *)&v240[16] = v66;
    v373 = v68;
    v364 = v68 >> 64;
    *(_QWORD *)&v240[24] = v68;
    *(_QWORD *)&v240[32] = *((_QWORD *)&v68 + 1);
    *(_QWORD *)&v240[40] = v67;
    *(_QWORD *)&v240[48] = v65;
    v240[56] = v48;
    *(_DWORD *)&v240[60] = *(__int32 *)((char *)v371.m128i_i32 + 3);
    *(_DWORD *)&v240[57] = v371.m128i_i32[0];
    v374.m128i_i64[0] = (__int64)v240;
    v374.m128i_i64[1] = (__int64)sub_14142D4D0;
    sub_1416DAFA0(v272, &unk_141A6690F, &v374);
    v65 = *(_QWORD *)&v272[8];
    v9 = *(_QWORD *)v272;
    v48 = *(_QWORD *)&v272[16];
    sub_140904700(v240);
    v75 = 10;
    v76 = v386;
    v77 = v386;
    v78 = v368;
    v79 = v368;
    v80 = v369;
    v81 = v369;
LABEL_82:
    v336 = _mm_load_si128(&v339);
    v337 = *(_OWORD *)v340;
    v338 = *(_QWORD **)&v340[16];
    *(_QWORD *)&v357[16] = v80;
    *(_QWORD *)&v357[8] = v78;
    *(_QWORD *)v357 = v76;
    v347 = v80;
    v282 = v78;
    v283 = v76;
    v386 = v77;
    v368 = v79;
    v369 = v81;
    *(_QWORD *)&v366 = v65;
    *((_QWORD *)&v366 + 1) = v48;
    v367 = v9;
    goto LABEL_126;
  }
  v386 = *(_QWORD *)v272;
  *(_OWORD *)v272 = *(_OWORD *)&v272[8];
  *(_OWORD *)&v272[16] = 0;
  v347 = v63;
  *(_QWORD *)&v272[32] = v63;
  *(_QWORD *)&v272[40] = v64;
  sub_140D8DA20(v240, v272);
  v9 = *(_QWORD *)v240;
  if ( *(_QWORD *)&v240[16] == -1 )
  {
    v389 = 3;
  }
  else
  {
    *(_QWORD *)&v375[88] = v242;
    *(__m128i *)&v375[72] = v241;
    v89 = _mm_loadu_si128((const __m128i *)&v240[24]);
    *(_OWORD *)&v375[56] = *(_OWORD *)&v240[72];
    *(_OWORD *)&v375[40] = *(_OWORD *)&v240[56];
    *(_OWORD *)&v375[24] = *(_OWORD *)&v240[40];
    *(__m128i *)&v375[8] = v89;
    v374 = *(__m128i *)v240;
    *(_QWORD *)v375 = *(_QWORD *)&v240[16];
    v358.m128i_i64[0] = v373;
    v358.m128i_i64[1] = v364;
    v359 = 0;
    *(_QWORD *)&v360 = v373;
    *((_QWORD *)&v360 + 1) = v364;
    sub_140D8D860(v240, &v358);
    v9 = *(_QWORD *)&v240[8];
    v90 = *(_QWORD *)v240;
    if ( *(_QWORD *)v240 == 2 )
    {
      sub_140908090(&v374);
      v389 = 3;
    }
    else
    {
      sub_1419234B0(&v272[16], &v240[16], 496);
      *(_OWORD *)v272 = __PAIR128__(v9, v90);
      v389 = v9;
      if ( v383 < 0 )
      {
        nullsub_1(v156, v155);
        v165 = (__m128i *)sub_140001650(24, 1);
        if ( !v165 )
          sub_14196B2DB(1, 24);
        v65 = (__int64)v165;
        *v165 = _mm_loadu_si128(&xmmword_141A58FEF);
        v165[1].m128i_i64[0] = 0x74657366666F2073LL;
        sub_1409078A0(v272);
        sub_140908090(&v374);
        v389 = 9;
        v48 = 24;
        v9 = 24;
      }
      else
      {
        if ( v65 >= 0 )
        {
          v369 = v65;
          LOBYTE(v368) = v48;
          *(_OWORD *)v311 = *(_OWORD *)&v375[80];
          v310 = *(_OWORD *)&v375[64];
          v309[1] = *(_OWORD *)&v375[48];
          v309[0] = *(_OWORD *)&v375[32];
          v308 = *(_OWORD *)&v375[16];
          v307[1] = *(_OWORD *)v375;
          v307[0] = v374;
          v65 = *(_QWORD *)&v272[24];
          v9 = *(_QWORD *)&v272[16];
          v285 = *(_QWORD *)&v272[40];
          v48 = *(_QWORD *)&v272[32];
          v286 = *(_OWORD *)&v272[48];
          v349 = _mm_loadu_si128((const __m128i *)&v272[64]);
          v350 = *(_OWORD *)v273;
          v351.m128i_i64[0] = *(_QWORD *)&v273[16];
          sub_1419234B0(v287, v274, 408);
          goto LABEL_320;
        }
        nullsub_1(v156, v155);
        v168 = sub_140001650(25, 1);
        if ( !v168 )
          sub_14196B2DB(1, 25);
        v65 = v168;
        *(_OWORD *)(v168 + 9) = *(__int128 *)((char *)&xmmword_141A59007 + 9);
        *(__m128i *)v168 = _mm_loadu_si128((const __m128i *)&xmmword_141A59007);
        sub_1409078A0(v272);
        sub_140908090(&v374);
        v389 = 9;
        v48 = 25;
        v9 = 25;
      }
    }
  }
  v90 = 2;
LABEL_320:
  if ( v377 )
    sub_140001660(v373, v377, 1);
  if ( v386 )
    sub_140001660(v347, v386, 1);
  *(_QWORD *)&v340[16] = v351.m128i_i64[0];
  v169 = _mm_load_si128(&v349);
  *(_OWORD *)v340 = v350;
  v339 = v169;
  if ( (_DWORD)v90 == 2 )
  {
    v80 = *((_QWORD *)&v286 + 1);
    v78 = v286;
    v76 = v285;
    v77 = v377;
    v79 = v373;
    v81 = v364;
    v75 = v389;
    goto LABEL_82;
  }
  v386 = v65;
  v69 = v90;
  sub_1419234B0(v320, v287, 520);
  v347 = *((_QWORD *)&v286 + 1);
  v282 = v286;
  v283 = v285;
  v18 = v383;
LABEL_78:
  v269 = v339;
  v270 = *(_OWORD *)v340;
  v271 = *(_QWORD **)&v340[16];
  sub_1419234B0(v246, v320, 520);
  *(_QWORD *)&v244[24] = v283;
  *(_QWORD *)&v244[32] = v282;
  *(_QWORD *)&v244[40] = v347;
  v245 = v271;
  v71 = _mm_load_si128(&v269);
  *(_OWORD *)&v244[64] = v270;
  *(__m128i *)&v244[48] = v71;
  v243.m128i_i64[0] = v69;
  v243.m128i_i64[1] = v389;
  *(_QWORD *)v244 = v9;
  *(_QWORD *)&v244[8] = v386;
  *(_QWORD *)&v244[16] = v48;
  v261 = v18;
  v262 = v369;
  v263 = v368;
  v72 = *(_BYTE *)(v346 + 48);
  if ( v69 == 2 )
  {
    v73 = 0;
    v74 = 0;
  }
  else
  {
    if ( (v72 & 1) != 0 )
      v18 = v259;
    v74 = 1;
    v73 = v18;
    v70 = v260;
  }
  v385 = 1;
  v383 = v73;
  sub_1407BC0F0((unsigned int)v287, v380, (_DWORD)v376, v73, v74, v70);
  v18 = v384;
  if ( *(_DWORD *)v287 == 1 )
  {
    v75 = *(_QWORD *)&v287[8];
    v366 = *(_OWORD *)&v287[24];
    v367 = *(_QWORD *)&v287[16];
    *(_QWORD *)v357 = *(_QWORD *)&v287[40];
    *(_OWORD *)&v357[8] = *(_OWORD *)&v287[48];
    v336 = _mm_loadu_si128((const __m128i *)&v287[64]);
    v337 = *(_OWORD *)&v287[80];
    v338 = v288;
    if ( v243.m128i_i32[0] != 2 )
      goto LABEL_115;
    goto LABEL_88;
  }
  LOBYTE(v378) = v72;
  v82 = *(_QWORD *)&v287[40];
  v83 = *(_QWORD *)&v287[48];
  *(_QWORD *)&v320[32] = v288;
  *(_OWORD *)&v320[16] = *(_OWORD *)&v287[80];
  *(_OWORD *)v320 = *(_OWORD *)&v287[64];
  v274[0] = v290;
  *(_OWORD *)&v273[8] = v289;
  *(_OWORD *)v272 = *(_OWORD *)&v287[16];
  v369 = *(_QWORD *)&v287[32];
  *(_OWORD *)&v272[16] = *(_OWORD *)&v287[32];
  v368 = *(_QWORD *)&v287[56];
  *(_OWORD *)&v272[32] = *(_OWORD *)&v287[48];
  *(_QWORD *)v273 = v288;
  v84 = _mm_load_si128((const __m128i *)v320);
  *(_OWORD *)&v272[64] = *(_OWORD *)&v287[80];
  *(__m128i *)&v272[48] = v84;
  if ( v382 || v243.m128i_i32[0] == 2 || v248 == 1 && !v247 )
    goto LABEL_94;
  v390 = 1;
  if ( (unsigned __int8)sub_1407C5DA0(&v243) )
    goto LABEL_94;
  if ( (v378 & 1) != 0 )
  {
    v162 = *(_QWORD *)&v273[8];
    if ( *(_QWORD *)&v273[8] == v259
      && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v272), v249)) == 0xFFFF
      && *(_QWORD *)&v273[16] == v260
      && v252 == v83 )
    {
      v386 = v251;
      if ( !(unsigned int)sub_141923B40(v82, v251, v83) )
      {
        v163 = *(_QWORD *)&v272[56];
        if ( *(_QWORD *)&v272[56] == v255 )
        {
          v387 = *(_QWORD *)&v272[48];
          v389 = v254;
          if ( !(unsigned int)sub_141923B40(*(_QWORD *)&v272[48], v254, *(_QWORD *)&v272[56]) )
          {
            v363 = *(_QWORD *)v273;
            if ( *(_QWORD *)v273 == v258 )
            {
              v379 = *(_QWORD *)&v272[72];
              v370 = v257;
              v9 = v162;
              if ( !(unsigned int)sub_141923B40(*(_QWORD *)&v272[72], v257, v363) )
                goto LABEL_304;
            }
          }
        }
      }
    }
  }
  else if ( v252 == v83 )
  {
    v166 = v261;
    v386 = v251;
    if ( !(unsigned int)sub_141923B40(v82, v251, v83) )
    {
      v9 = *(_QWORD *)&v273[8];
      v162 = v259;
      if ( *(_QWORD *)&v273[8] >= v259 && *(_QWORD *)&v273[8] >= v166 )
      {
        v163 = *(_QWORD *)&v272[56];
        if ( *(_QWORD *)&v272[56] == v255 )
        {
          v387 = *(_QWORD *)&v272[48];
          v389 = v254;
          if ( !(unsigned int)sub_141923B40(*(_QWORD *)&v272[48], v254, *(_QWORD *)&v272[56]) )
          {
            v363 = *(_QWORD *)v273;
            if ( *(_QWORD *)v273 == v258 )
            {
              v379 = *(_QWORD *)&v272[72];
              v370 = v257;
              if ( !(unsigned int)sub_141923B40(*(_QWORD *)&v272[72], v257, v363)
                && (v9 > v162 || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v272), v249)) == 0xFFFF) )
              {
LABEL_304:
                v365 = v163;
                v167 = v243.m128i_i64[0];
                if ( v243.m128i_i64[0] == 2 )
                {
                  v390 = 0;
                  sub_14196B5D0(&off_141A66928);
                }
                if ( v263 == 1
                  && v9 == v162
                  && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v272), v249)) == 0xFFFF
                  && *(_QWORD *)&v273[16] == v260
                  && !(unsigned int)sub_141923B40(v82, v386, v83)
                  && !(unsigned int)sub_141923B40(v387, v389, v365)
                  && !(unsigned int)sub_141923B40(v379, v370, v363)
                  && ((v378 & 1) != 0 || v261 >= v162) )
                {
                  v390 = 1;
                  sub_140930990(v287, v276, aUpdateFilesSet_0, 39);
                  if ( *(_DWORD *)v287 == 1 )
                  {
                    v184 = _mm_loadu_si128((const __m128i *)&v287[8]);
                    *(_OWORD *)&v375[32] = *(_OWORD *)&v287[56];
                    *(_OWORD *)&v375[16] = *(_OWORD *)&v287[40];
                    *(_OWORD *)v375 = *(_OWORD *)&v287[24];
                    v374 = v184;
                  }
                  else
                  {
                    v185 = _mm_loadu_si128((const __m128i *)&v287[8]);
                    *(_OWORD *)&v240[48] = *(_OWORD *)&v287[56];
                    *(_OWORD *)&v240[32] = *(_OWORD *)&v287[40];
                    *(_OWORD *)&v240[16] = *(_OWORD *)&v287[24];
                    *(__m128i *)v240 = v185;
                    v9 = *(_QWORD *)&v287[64];
                    sub_140A08C30(v320, &v334, v185.m128i_i64[0], *(_QWORD *)&v287[64]);
                    if ( *(_QWORD *)v320 == -1 )
                    {
                      sub_14092FA00(&v374, v185.m128i_i64[0], v9);
                    }
                    else
                    {
                      v186 = _mm_loadu_si128((const __m128i *)v320);
                      *(_OWORD *)&v375[32] = *(_OWORD *)&v320[48];
                      *(_OWORD *)&v375[16] = *(_OWORD *)&v320[32];
                      *(_OWORD *)v375 = *(_OWORD *)&v320[16];
                      v374 = v186;
                    }
                    v390 = 1;
                    sub_140904890(v240);
                  }
                  if ( v374.m128i_i64[0] == -1 )
                  {
                    v75 = -1;
                  }
                  else
                  {
                    v187 = _mm_load_si128(&v374);
                    *(_OWORD *)&v287[48] = *(_OWORD *)&v375[32];
                    *(_OWORD *)&v287[32] = *(_OWORD *)&v375[16];
                    *(_OWORD *)&v287[16] = *(_OWORD *)v375;
                    *(__m128i *)v287 = v187;
                    *(_QWORD *)v240 = v287;
                    *(_QWORD *)&v240[8] = sub_14142D4D0;
                    sub_1416DAFA0(v320, &unk_141A6690F, v240);
                    v366 = *(_OWORD *)&v320[8];
                    v367 = *(_QWORD *)v320;
                    v390 = 1;
                    sub_140904700(v287);
                    v75 = 10;
                  }
                  sub_140908090(v272);
                  v18 = v384;
                  if ( v243.m128i_i32[0] != 2 )
                  {
LABEL_115:
                    if ( v250 )
                      sub_140001660(v251, v250, 1);
                    if ( v253 )
                      sub_140001660(v254, v253, 1);
                    if ( v256 )
                      sub_140001660(v257, v256, 1);
                    sub_1409078A0(&v243);
                    v386 = v377;
                    v368 = v373;
                    v369 = v364;
                    goto LABEL_126;
                  }
LABEL_88:
                  v386 = v377;
                  v368 = v373;
                  v369 = v364;
                  goto LABEL_126;
                }
                *(_QWORD *)v287 = v167;
                sub_1419234B0(&v287[8], &v243.m128i_u64[1], 648);
                *((_QWORD *)&v310 + 1) = 0x100000001LL;
                v86 = 0;
                LODWORD(v363) = 0;
                v87 = v384;
                if ( (_QWORD)v293 )
                  goto LABEL_98;
                goto LABEL_95;
              }
            }
          }
        }
      }
    }
  }
LABEL_94:
  *(_OWORD *)&v311[8] = 0;
  *(_QWORD *)&v312 = 0;
  *((_QWORD *)&v312 + 1) = 1;
  v313 = 0;
  v314.m256i_i64[0] = 1;
  *(_OWORD *)&v314.m256i_u64[1] = 0;
  v314.m256i_i64[3] = 1;
  *(_QWORD *)v287 = 0;
  *(_QWORD *)&v287[16] = 0;
  memset(v315, 0, 24);
  *(_QWORD *)&v287[32] = 2;
  *(_QWORD *)&v287[80] = 2;
  v291[0] = 0;
  v291[1] = 1;
  *(_OWORD *)v292 = 0;
  *(_QWORD *)&v292[16] = 1;
  v293 = 0;
  v294 = 1;
  v295 = 0;
  v296 = 8;
  v297 = 0;
  v298 = 0;
  v299 = 8;
  v300 = 0;
  v301 = 8;
  v302 = 0;
  v303 = -1;
  v304 = -1;
  v305 = -1;
  v306 = 0;
  *(_QWORD *)&v310 = 0;
  *(_OWORD *)((char *)v307 + 8) = 0;
  v308 = 0;
  *(_OWORD *)((char *)v309 + 8) = 0;
  v85 = v311;
  v311[4] = 0;
  *(_DWORD *)v311 = 0;
  v316 = 0;
  v317 = 0;
  v86 = 1;
  *((_QWORD *)&v310 + 1) = 0x100000001LL;
  LOBYTE(v85) = 1;
  LODWORD(v363) = (_DWORD)v85;
  v87 = v384;
LABEL_95:
  v88 = v86;
  v388 = v86;
  sub_1409FB2A0(v320, v380, v376);
  if ( *(_QWORD *)&v292[8] )
    sub_140001660(*(_QWORD *)&v292[16], *(_QWORD *)&v292[8], 1);
  *(_QWORD *)&v293 = *(_QWORD *)&v320[16];
  *(__m128i *)&v292[8] = _mm_loadu_si128((const __m128i *)v320);
  v86 = v88;
LABEL_98:
  v281 = v87;
  LODWORD(v386) = v86;
  v388 = v86;
  sub_1407C6170((unsigned int)v320, v346, v316, (unsigned int)&v281, (__int64)&unk_141A66940);
  v75 = *(_QWORD *)v320;
  v387 = *(_QWORD *)&v320[24];
  v389 = *(_QWORD *)&v320[16];
  if ( *(_QWORD *)v320 != -1 )
  {
    *(_OWORD *)v357 = *(_OWORD *)&v320[32];
    *(_QWORD *)&v357[16] = *(_QWORD *)&v320[48];
    v336 = _mm_loadu_si128((const __m128i *)&v320[56]);
    v337 = *(_OWORD *)&v320[72];
    v338 = *(_QWORD **)&v320[88];
    v367 = *(_QWORD *)&v320[8];
    goto LABEL_100;
  }
  if ( !*(_QWORD *)&v320[8] )
  {
    v75 = -1;
    v387 = *((_QWORD *)&v366 + 1);
    v389 = v366;
    goto LABEL_100;
  }
  v331 = *(_QWORD *)&v320[8];
  v332 = (void (__fastcall **)(_QWORD))v389;
  v333 = v387;
  v75 = -1;
  if ( !*(_BYTE *)(v87 + 80) )
    goto LABEL_332;
  while ( 2 )
  {
    sub_1414331D0(v320);
    v105 = (*(int *)v320 >> 13) - 1;
    v106 = 0;
    if ( *(int *)v320 >> 13 <= 0 )
    {
      v107 = (1 - (*(int *)v320 >> 13)) / 0x190u + 1;
      v105 += 400 * v107;
      v106 = -146097 * v107;
    }
    if ( 86400LL
       * (((v105 / 100) >> 2) + ((1461 * v105) >> 2) + v106 + ((*(_DWORD *)v320 >> 4) & 0x1FF) - v105 / 100 - 719163)
       + *(unsigned int *)&v320[4]
       - *(_QWORD *)(v87 + 16) > 74 )
    {
LABEL_332:
      v387 = *((_QWORD *)&v366 + 1);
      v389 = v366;
      goto LABEL_350;
    }
    v238 = sub_1416AEBD0();
    v239 = v108;
    v109 = v333;
    v343 = 0;
    v344 = 8;
    v345 = 0;
    v370 = 8;
    v110 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        LOBYTE(v9) = 1;
        if ( sub_1416AED20(&v238) || v111 > 0x5F5E0FF || (unsigned __int64)(v333 - v109) >= 0x400000 )
        {
          LODWORD(v379) = 0;
          goto LABEL_162;
        }
        sub_1407C5E90(v320, &v331, &v281, &unk_141A66940);
        v112 = *(_QWORD *)&v320[8];
        if ( *(_QWORD *)v320 != -1 )
        {
          v387 = *(_QWORD *)&v320[24];
          v389 = *(_QWORD *)&v320[16];
          *(_OWORD *)v357 = *(_OWORD *)&v320[32];
          *(_QWORD *)&v357[16] = *(_QWORD *)&v320[48];
          v336 = _mm_loadu_si128((const __m128i *)&v320[56]);
          v337 = *(_OWORD *)&v320[72];
          v338 = *(_QWORD **)&v320[88];
          v367 = *(_QWORD *)&v320[8];
          v75 = *(_QWORD *)v320;
          goto LABEL_348;
        }
        v113 = (*(_QWORD *)&v320[8] - 0x7FFFFFFFFFFFFFFFLL) & (*(__int64 *)&v320[8] >> 63);
        if ( v113 != 1 )
          break;
        v311[1] = 1;
        LOBYTE(v112) = 11;
        sub_140A6E070(&v306, v112);
        ++*((_QWORD *)&v316 + 1);
      }
      v9 = v320[16];
      if ( v113 )
        break;
      v379 = *(_QWORD *)&v320[8];
      v365 = v110;
      v342 = v320[16]
           | ((((unsigned __int64)((v320[23] << 16) | (unsigned int)*(unsigned __int16 *)&v320[21]) << 32)
             | *(unsigned int *)&v320[17]) << 8);
      sub_14082D500(v240, v287, v342, *(_QWORD *)&v320[24], *((_QWORD *)&v316 + 1));
      v114 = *(_OWORD *)v240;
      v115 = *(_QWORD *)&v240[16];
      v9 = 144LL * *(_QWORD *)&v240[16];
      *(_QWORD *)v320 = *(_QWORD *)&v240[8];
      *(_QWORD *)&v320[8] = *(_QWORD *)&v240[8];
      *(_QWORD *)&v320[16] = *(_QWORD *)v240;
      *(_QWORD *)&v320[24] = *(_QWORD *)&v240[8] + 144LL * *(_QWORD *)&v240[16];
      if ( *(_QWORD *)&v240[16] > (unsigned __int64)(v343 - v365) )
      {
        sub_141939070((unsigned int)&v343, v365, *(_DWORD *)&v240[16], 8, 144);
        v370 = v344;
        v365 = v345;
      }
      else if ( !*(_QWORD *)&v240[16] )
      {
        goto LABEL_154;
      }
      sub_1419234B0(v370 + 144 * v365, *((_QWORD *)&v114 + 1), v9);
LABEL_154:
      v110 = v115 + v365;
      v345 = v110;
      if ( (_QWORD)v114 )
        sub_140001660(*((_QWORD *)&v114 + 1), 144 * v114, 8);
      ++*((_QWORD *)&v316 + 1);
      if ( v379 )
        sub_140001660(v342, v379, 1);
    }
    if ( v113 != 2 )
    {
      v75 = -1;
      v387 = *((_QWORD *)&v366 + 1);
      v389 = v366;
      goto LABEL_348;
    }
    LOBYTE(v9) = (v320[16] & 1) == 0;
    LOBYTE(v113) = 1;
    LODWORD(v379) = v113;
LABEL_162:
    *(_QWORD *)&v316 = v333;
    sub_1407BC0F0((unsigned int)v320, v380, (_DWORD)v376, v383, 1, *(__int64 *)&v273[16]);
    v365 = v110;
    if ( *(_DWORD *)v320 == 1 )
    {
      v75 = *(_QWORD *)&v320[8];
      v389 = *(_QWORD *)&v320[24];
      v367 = *(_QWORD *)&v320[16];
      *(_QWORD *)v357 = *(_QWORD *)&v320[40];
      v387 = *(_QWORD *)&v320[32];
      *(_OWORD *)&v357[8] = *(_OWORD *)&v320[48];
      v336 = _mm_loadu_si128((const __m128i *)&v320[64]);
      v337 = *(_OWORD *)&v320[80];
      v338 = v321;
      goto LABEL_348;
    }
    v116 = *(_QWORD *)&v320[48];
    *(_QWORD *)&v375[16] = v321;
    *(_OWORD *)v375 = *(_OWORD *)&v320[80];
    v374 = *(__m128i *)&v320[64];
    v117 = &v240[8];
    v242 = v323;
    v241 = v322;
    v118 = *(_QWORD *)&v320[40];
    *(_OWORD *)v240 = *(_OWORD *)&v320[16];
    *(_OWORD *)&v240[16] = *(_OWORD *)&v320[32];
    *(_OWORD *)&v240[32] = *(_OWORD *)&v320[48];
    *(_QWORD *)&v240[80] = v321;
    v119 = _mm_load_si128(&v374);
    *(_OWORD *)&v240[64] = *(_OWORD *)&v320[80];
    *(__m128i *)&v240[48] = v119;
    if ( *(_QWORD *)&v272[32] != *(_QWORD *)&v320[48]
      || (v342 = *(_QWORD *)&v272[24],
          (unsigned int)sub_141923B40(*(_QWORD *)&v320[40], *(_QWORD *)&v272[24], *(_QWORD *)&v320[48]))
      || (v120 = v241.m128i_i64[0], v121 = *(_QWORD *)&v273[8], v241.m128i_i64[0] < *(_QWORD *)&v273[8])
      || *(_QWORD *)&v240[56] != *(_QWORD *)&v272[56]
      || (unsigned int)sub_141923B40(*(_QWORD *)&v240[48], *(_QWORD *)&v272[48], *(_QWORD *)&v240[56])
      || *(_QWORD *)&v240[80] != *(_QWORD *)v273
      || (unsigned int)sub_141923B40(*(_QWORD *)&v240[72], *(_QWORD *)&v272[72], *(_QWORD *)&v240[80])
      || v120 == v121
      && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v240), *(__m128i *)v272)) != 0xFFFF )
    {
      nullsub_1(v118, v117);
      v170 = sub_140001650(38, 1);
      if ( !v170 )
        sub_14196B2DB(1, 38);
      *(_OWORD *)(v170 + 16) = xmmword_141A669A6;
      *(__m128i *)v170 = _mm_loadu_si128((const __m128i *)&xmmword_141A66996);
      v171 = v170;
      v172 = 0x676E696461657220LL;
      goto LABEL_335;
    }
    if ( (v378 & 1) == 0 )
      LODWORD(v120) = v316;
    sub_1407BC0F0((unsigned int)v320, v380, (_DWORD)v376, v120, 0, v236);
    if ( *(_DWORD *)v320 == 1 )
    {
      v75 = *(_QWORD *)&v320[8];
      v389 = *(_QWORD *)&v320[24];
      v367 = *(_QWORD *)&v320[16];
      *(_QWORD *)v357 = *(_QWORD *)&v320[40];
      v387 = *(_QWORD *)&v320[32];
      *(_OWORD *)&v357[8] = *(_OWORD *)&v320[48];
      v336 = _mm_loadu_si128((const __m128i *)&v320[64]);
      v337 = *(_OWORD *)&v320[80];
      v338 = v321;
      goto LABEL_347;
    }
    v268 = *(_QWORD *)&v320[56];
    v122 = *(_QWORD *)&v320[48];
    v374 = *(__m128i *)&v320[64];
    *(_OWORD *)v375 = *(_OWORD *)&v320[80];
    *(_QWORD *)&v375[16] = v321;
    *(_QWORD *)&v359 = v323;
    v358 = v322;
    v123 = *(_QWORD *)&v320[40];
    v124 = *(_OWORD *)&v320[16];
    v125 = *(_OWORD *)&v320[32];
    sub_140908090(&v311[8]);
    *(_OWORD *)&v311[8] = v124;
    v312 = v125;
    *(_QWORD *)&v313 = v122;
    *((_QWORD *)&v313 + 1) = v268;
    v127 = &v289;
    v315[0] = *(_QWORD *)&v375[16];
    *(_OWORD *)&v314.m256i_u64[2] = *(_OWORD *)v375;
    *(__m128i *)v314.m256i_i8 = v374;
    v315[3] = v359;
    *(__m128i *)&v315[1] = _mm_load_si128(&v358);
    if ( v116 != v122 || (unsigned int)sub_141923B40(v123, v342, v116) || v315[1] < v121 )
    {
LABEL_333:
      nullsub_1(v127, v126);
      v175 = sub_140001650(38, 1);
      if ( !v175 )
        sub_14196B2DB(1, 38);
      *(_OWORD *)(v175 + 16) = xmmword_141A66980;
      *(__m128i *)v175 = _mm_loadu_si128((const __m128i *)&xmmword_141A66970);
      v171 = v175;
      v172 = 0x74696D6D6F632065LL;
LABEL_335:
      v389 = v171;
      *(_QWORD *)(v171 + 30) = v172;
      v75 = 10;
      v387 = 38;
      v367 = 38;
      goto LABEL_347;
    }
    if ( v315[1] == v121 )
    {
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)&v311[8]), *(__m128i *)v272)) != 0xFFFF )
        goto LABEL_333;
    }
    else if ( (v378 & 1) != 0 )
    {
      goto LABEL_333;
    }
    v128 = v9;
    if ( !(_BYTE)v379 )
      v128 = 0;
    v317 = v128;
    v275 = _mm_loadu_si128((const __m128i *)&v334.m128i_u64[1]);
    if ( (__int64)v316 < 0 )
    {
      nullsub_1(0, v126);
      v389 = sub_140001650(26, 1);
      if ( !v389 )
        sub_14196B2DB(1, 26);
      v177 = (__m128i *)v389;
      *(_OWORD *)(v389 + 10) = *(__int128 *)((char *)&xmmword_141A5A620 + 10);
      *v177 = _mm_loadu_si128((const __m128i *)&xmmword_141A5A620);
      v137 = 26;
      v75 = 9;
      goto LABEL_344;
    }
    v265 = v316;
    if ( v316 < 0 )
    {
      nullsub_1(0, v126);
      v389 = sub_140001650(26, 1);
      if ( !v389 )
        sub_14196B2DB(1, 26);
      v178 = (__m128i *)v389;
      *(_OWORD *)(v389 + 10) = *(__int128 *)((char *)&xmmword_141A5A620 + 10);
      *v178 = _mm_loadu_si128((const __m128i *)&xmmword_141A5A620);
      v75 = 9;
      v137 = 26;
LABEL_344:
      v387 = 26;
      goto LABEL_346;
    }
    v264 = *((_QWORD *)&v316 + 1);
    sub_141431530(&v374, v276, *(&off_141A672A8 + (unsigned int)v279), qword_141A672C0[v279]);
    if ( v374.m128i_i64[0] != -1 )
    {
      v179 = _mm_loadu_si128((const __m128i *)&v375[1]);
      *(_OWORD *)&v320[48] = *(_OWORD *)&v375[32];
      *(_OWORD *)&v320[33] = *(_OWORD *)&v375[17];
      *(__m128i *)&v320[17] = v179;
      *(__m128i *)v320 = v374;
      v320[16] = v375[0];
      v358.m128i_i64[0] = (__int64)v320;
      v358.m128i_i64[1] = (__int64)sub_14142D4D0;
      sub_1416DAFA0(&v374, &unk_141A6690F, &v358);
      v389 = v374.m128i_i64[1];
      v137 = v374.m128i_i64[0];
      v387 = *(_QWORD *)v375;
      sub_140904700(v320);
      v75 = 10;
      goto LABEL_346;
    }
    if ( (v363 & 1) != 0 )
    {
      v131 = v275;
      v392 = 1;
      sub_140930990(v320, v276, aDeleteFromFile, 31);
      if ( *(_DWORD *)v320 == 1 )
      {
        v132 = _mm_loadu_si128((const __m128i *)&v320[8]);
        v352 = *(_OWORD *)&v320[56];
        v351 = *(__m128i *)&v320[40];
        v350 = *(_OWORD *)&v320[24];
        v349 = v132;
      }
      else
      {
        v133 = _mm_loadu_si128((const __m128i *)&v320[8]);
        v361 = *(__m128i *)&v320[56];
        v360 = *(_OWORD *)&v320[40];
        v359 = *(_OWORD *)&v320[24];
        v358 = v133;
        v9 = v133.m128i_i64[0];
        v134 = *(_QWORD *)&v320[64];
        sub_140A08D80(
          (unsigned int)&v374,
          v131.m128i_i32[0],
          v131.m128i_i32[2],
          v133.m128i_i32[0],
          *(__int64 *)&v320[64]);
        if ( v374.m128i_i64[0] == -1 )
        {
          sub_14092FA00(&v349, v133.m128i_i64[0], v134);
        }
        else
        {
          v135 = _mm_loadu_si128(&v374);
          v352 = *(_OWORD *)&v375[32];
          v351 = *(__m128i *)&v375[16];
          v350 = *(_OWORD *)v375;
          v349 = v135;
        }
        v392 = 1;
        sub_140904890(&v358);
      }
      if ( v349.m128i_i64[0] != -1 )
      {
        v136 = _mm_load_si128(&v349);
        *(_OWORD *)&v320[48] = v352;
        *(__m128i *)&v320[32] = v351;
        *(_OWORD *)&v320[16] = v350;
        *(__m128i *)v320 = v136;
        v358.m128i_i64[0] = (__int64)v320;
        v358.m128i_i64[1] = (__int64)sub_14142D4D0;
        sub_1416DAFA0(&v374, &unk_141A6690F, &v358);
        v389 = v374.m128i_i64[1];
        v137 = v374.m128i_i64[0];
        v387 = *(_QWORD *)v375;
        v392 = 1;
        sub_140904700(v320);
        v75 = 10;
        goto LABEL_206;
      }
    }
    nullsub_1(v130, v129);
    v138 = sub_140001650(128, 1);
    if ( !v138 )
    {
      v392 = 1;
      sub_14196B2DB(1, 128);
    }
    v374.m128i_i64[0] = 128;
    v374.m128i_i64[1] = v138;
    *(_QWORD *)v375 = 0;
    v349.m128i_i64[0] = (__int64)&v374;
    v137 = sub_140788720(&v311[8], &v349);
    if ( v137 )
    {
      if ( v374.m128i_i64[0] )
        sub_140001660(v374.m128i_i64[1], v374.m128i_i64[0], 1);
LABEL_205:
      v75 = 3;
LABEL_206:
      sub_140904470(v276);
      if ( v75 != -1 )
        goto LABEL_346;
LABEL_207:
      if ( !(_BYTE)v379 )
      {
        sub_1416C57D0(0, 8000000);
        sub_140908090(v240);
        sub_140235D80(&v343);
        v87 = v384;
        if ( v343 )
          sub_140001660(v370, 144 * v343, 8);
        LODWORD(v363) = 0;
        v75 = -1;
        if ( !*(_BYTE *)(v87 + 80) )
          goto LABEL_332;
        continue;
      }
      sub_140908090(v240);
      sub_140777280(&v343);
      v388 = v386;
      sub_1400249C0(v331, v332);
      v390 = v386;
      sub_140907830(v287);
      sub_140908090(v272);
      if ( (_BYTE)v386 )
        sub_1409022E0(&v243);
      if ( v334.m128i_i64[0] )
        sub_140001660(v334.m128i_i64[1], v334.m128i_i64[0], 1);
      v386 = v377;
      v368 = v373;
      v369 = v364;
      v18 = v384;
LABEL_41:
      v40 = v346 + 64;
      _InterlockedIncrement64((volatile signed __int64 *)(v18 + 32));
      goto LABEL_42;
    }
    break;
  }
  v137 = v374.m128i_i64[1];
  if ( v374.m128i_i64[0] == -1 )
    goto LABEL_205;
  v318 = v374;
  v319 = *(_QWORD *)v375;
  nullsub_1(*(_QWORD *)v375, v139);
  v140 = sub_140001650(128, 1);
  if ( !v140 )
    sub_14196B2DB(1, 128);
  v374.m128i_i64[0] = 128;
  v374.m128i_i64[1] = v140;
  *(_QWORD *)v375 = 0;
  v349.m128i_i64[0] = (__int64)&v374;
  v137 = sub_140788060(v287, &v349);
  if ( v137 )
  {
    if ( v374.m128i_i64[0] )
      sub_140001660(v374.m128i_i64[1], v374.m128i_i64[0], 1);
LABEL_219:
    v75 = 3;
LABEL_220:
    if ( v318.m128i_i64[0] )
      sub_140001660(v318.m128i_i64[1], v318.m128i_i64[0], 1);
    goto LABEL_206;
  }
  v137 = v374.m128i_i64[1];
  if ( v374.m128i_i64[0] == -1 )
    goto LABEL_219;
  v371 = v374;
  v372 = *(_QWORD *)v375;
  v381 = sub_1407C5B40(v287);
  sub_1409FB2A0(&v339, v380, v376);
  *(_QWORD *)v320 = &v275;
  *(_QWORD *)&v320[8] = &unk_141A62CF0;
  *(_QWORD *)&v320[16] = &v318;
  *(_QWORD *)&v320[24] = &off_141A62D10;
  *(_QWORD *)&v320[32] = &v371;
  *(_QWORD *)&v320[40] = &off_141A62D10;
  *(_QWORD *)&v320[48] = &v265;
  *(_QWORD *)&v320[56] = &unk_141A65DF8;
  *(_QWORD *)&v320[64] = &v264;
  *(_QWORD *)&v320[72] = &unk_141A65DF8;
  *(_QWORD *)&v320[80] = &v317;
  *(_QWORD *)&v320[88] = &unk_141A65E18;
  v321 = v291;
  v322.m128i_i64[0] = (__int64)&off_141A62D10;
  v322.m128i_i64[1] = (__int64)v311;
  v323 = (__int64 (__fastcall **)())&unk_141A65E18;
  v324 = &v381;
  v325 = &unk_141A65E18;
  v326 = &v339;
  v327 = &off_141A62D10;
  sub_140901E00(
    (unsigned int)&v358,
    (unsigned int)v276,
    (unsigned int)"INSERT INTO files(path,fingerprint,state,offset,ordinal,complete,thread_id,subagent,incomplete,rollout"
                  "_id)\n"
                  "         VALUES(?1,?2,?3,?4,?5,?6,?7,?8,?9,?10) ON CONFLICT(path) DO UPDATE SET\n"
                  "         fingerprint=excluded.fingerprint,state=excluded.state,offset=excluded.offset,ordinal=excluded"
                  ".ordinal,\n"
                  "         complete=excluded.complete,thread_id=excluded.thread_id,subagent=excluded.subagent,\n"
                  "         incomplete=excluded.incomplete,failed=0,rollout_id=excluded.rollout_idINSERT INTO facts(sourc"
                  "e,key,thread_id,turn_id,ts,kind,priority,data)\n"
                  "            VALUES(?1,?2,?3,?4,?5,?6,?7,?8) ON CONFLICT(source,key) DO UPDATE SET\n"
                  "            ts=excluded.ts,priority=excluded.priority,data=excluded.data\n"
                  "            WHERE excluded.priority>=facts.priority",
    471,
    (__int64)v320,
    10);
  if ( v358.m128i_i64[0] != -1 )
  {
    v141 = _mm_loadu_si128(&v358);
    *(__m128i *)&v375[32] = v361;
    *(_OWORD *)&v375[16] = v360;
    *(_OWORD *)v375 = v359;
    v374 = v141;
    v237[0] = &v374;
    v237[1] = sub_14142D4D0;
    sub_1416DAFA0(&v349, &unk_141A6690F, v237);
    v389 = v349.m128i_i64[1];
    v137 = v349.m128i_i64[0];
    v387 = v350;
    sub_140904700(&v374);
    if ( v339.m128i_i64[0] )
      sub_140001660(v339.m128i_i64[1], v339.m128i_i64[0], 1);
    if ( v371.m128i_i64[0] )
      sub_140001660(v371.m128i_i64[1], v371.m128i_i64[0], 1);
    v75 = 10;
    goto LABEL_220;
  }
  if ( v339.m128i_i64[0] )
    sub_140001660(v339.m128i_i64[1], v339.m128i_i64[0], 1);
  if ( v371.m128i_i64[0] )
    sub_140001660(v371.m128i_i64[1], v371.m128i_i64[0], 1);
  if ( v318.m128i_i64[0] )
    sub_140001660(v318.m128i_i64[1], v318.m128i_i64[0], 1);
  v392 = 1;
  sub_1414305F0(
    (unsigned int)&v374,
    (unsigned int)v277,
    (unsigned int)v276,
    (unsigned int)"INSERT INTO facts(source,key,thread_id,turn_id,ts,kind,priority,data)\n"
                  "            VALUES(?1,?2,?3,?4,?5,?6,?7,?8) ON CONFLICT(source,key) DO UPDATE SET\n"
                  "            ts=excluded.ts,priority=excluded.priority,data=excluded.data\n"
                  "            WHERE excluded.priority>=facts.priority",
    276);
  if ( !v374.m128i_i64[0] )
  {
    v153 = _mm_loadu_si128((const __m128i *)&v374.m128i_u64[1]);
    v352 = *(_OWORD *)&v375[40];
    v351 = *(__m128i *)&v375[24];
    v350 = *(_OWORD *)&v375[8];
    v349 = v153;
    v392 = 1;
    sub_140A04BA0(v320, &v349);
    v137 = *(_QWORD *)&v320[8];
    v75 = *(_QWORD *)v320;
    v387 = *(_QWORD *)&v320[24];
    v389 = *(_QWORD *)&v320[16];
    *(_OWORD *)v348 = *(_OWORD *)&v320[32];
    *(_QWORD *)&v348[16] = *(_QWORD *)&v320[48];
    *(_QWORD *)v340 = *(_QWORD *)&v320[72];
    v339 = *(__m128i *)&v320[56];
    *(_OWORD *)&v354[8] = *(_OWORD *)&v320[80];
    v371 = *(__m128i *)&v320[56];
    v372 = *(_QWORD *)&v320[72];
    *(_QWORD *)v354 = *(_QWORD *)&v320[72];
    v353 = _mm_load_si128(&v371);
    goto LABEL_206;
  }
  v372 = *(_QWORD *)&v375[48];
  v371 = *(__m128i *)&v375[32];
  v358 = v374;
  v359 = *(_OWORD *)v375;
  v360 = *(_OWORD *)&v375[16];
  v362 = *(_QWORD *)&v375[48];
  v361 = _mm_load_si128(&v371);
  v142 = v370;
  v9 = v370 + 144 * v365;
  if ( v370 != v9 )
  {
    while ( 1 )
    {
      if ( !v358.m128i_i64[1] )
        sub_14196B5D0(&off_141A66128);
      sub_1409087D0(&v374, v142 + 96);
      v137 = v374.m128i_i64[1];
      if ( v374.m128i_i64[0] == -1 )
      {
        v75 = 3;
        goto LABEL_247;
      }
      v371 = v374;
      v372 = *(_QWORD *)v375;
      *(_QWORD *)v320 = &v275;
      *(_QWORD *)&v320[8] = &unk_141A62CF0;
      *(_QWORD *)&v320[16] = v142;
      *(_QWORD *)&v320[24] = &off_141A62D10;
      *(_QWORD *)&v320[32] = v142 + 24;
      *(_QWORD *)&v320[40] = &off_141A62D10;
      *(_QWORD *)&v320[48] = v142 + 48;
      *(_QWORD *)&v320[56] = &off_141A62D10;
      *(_QWORD *)&v320[64] = v142 + 128;
      *(_QWORD *)&v320[72] = &unk_141A65DF8;
      *(_QWORD *)&v320[80] = v142 + 72;
      v143 = v142 + 144;
      *(_QWORD *)&v320[88] = &off_141A62D10;
      v321 = (_QWORD *)(v142 + 136);
      v322.m128i_i64[0] = (__int64)&unk_141A66140;
      v322.m128i_i64[1] = (__int64)&v371;
      v323 = &off_141A62D10;
      v144 = (int)sub_1417D8600(v362);
      v145 = 0;
      for ( i = 0; i != 128; i += 16 )
      {
        v349.m128i_i64[0] = (__int64)&v240[i + 2656];
        v147 = v145++ < v144;
        if ( !v147 )
          break;
        sub_1408FF7E0(&v374, &v358.m128i_u64[1], &v349, v145);
        v148 = v374.m128i_i64[0];
        if ( v374.m128i_i64[0] != -1 )
        {
          v145 = v374.m128i_u64[1];
          v144 = *(_QWORD *)v375;
          v269 = _mm_loadu_si128((const __m128i *)&v375[8]);
          v270 = *(_OWORD *)&v375[24];
          v271 = *(_QWORD **)&v375[40];
          goto LABEL_244;
        }
      }
      if ( v145 != v144 )
        break;
      sub_14092FA00(&v339, v358.m128i_i64[1], v362);
      if ( v339.m128i_i64[0] != -1 )
        goto LABEL_245;
      if ( v371.m128i_i64[0] )
        sub_140001660(v371.m128i_i64[1], v371.m128i_i64[0], 1);
      v142 = v143;
      if ( v143 == v9 )
        goto LABEL_241;
    }
    v148 = 0x8000000000000013uLL;
LABEL_244:
    v339.m128i_i64[0] = v148;
    v339.m128i_i64[1] = v145;
    *(_QWORD *)v340 = v144;
    *(_QWORD *)&v341[16] = v271;
    v151 = _mm_load_si128(&v269);
    *(_OWORD *)v341 = v270;
    *(__m128i *)&v340[8] = v151;
LABEL_245:
    v152 = _mm_loadu_si128((const __m128i *)&v340[16]);
    v352 = *(_OWORD *)&v341[8];
    v351 = v152;
    v350 = *(_OWORD *)v340;
    v349 = v339;
    sub_140A04BA0(&v374, &v349);
    v137 = v374.m128i_i64[1];
    v75 = v374.m128i_i64[0];
    v387 = *(_QWORD *)&v375[8];
    v389 = *(_QWORD *)v375;
    *(_OWORD *)v348 = *(_OWORD *)&v375[16];
    *(_QWORD *)&v348[16] = *(_QWORD *)&v375[32];
    v353 = _mm_loadu_si128((const __m128i *)&v375[40]);
    *(_OWORD *)v354 = *(_OWORD *)&v375[56];
    *(_QWORD *)&v354[16] = *(_QWORD *)&v375[72];
    if ( v371.m128i_i64[0] )
      sub_140001660(v371.m128i_i64[1], v371.m128i_i64[0], 1);
LABEL_247:
    v392 = 1;
    sub_140904600(&v358);
    goto LABEL_206;
  }
LABEL_241:
  v392 = 1;
  sub_140904600(&v358);
  v392 = 1;
  v149 = sub_1409FC860();
  v392 = 1;
  sub_140901BD0(&v358, v276, v149);
  if ( v358.m128i_i64[0] != -1 )
  {
    v150 = _mm_loadu_si128(&v358);
    *(__m128i *)&v375[32] = v361;
    *(_OWORD *)&v375[16] = v360;
    *(_OWORD *)v375 = v359;
    v374 = v150;
    v392 = 1;
    sub_140A04BA0(v320, &v374);
    v75 = *(_QWORD *)v320;
LABEL_253:
    v137 = *(_QWORD *)&v320[8];
    v387 = *(_QWORD *)&v320[24];
    v389 = *(_QWORD *)&v320[16];
    *(_OWORD *)v348 = *(_OWORD *)&v320[32];
    *(_QWORD *)&v348[16] = *(_QWORD *)&v320[48];
    v353 = _mm_loadu_si128((const __m128i *)&v320[56]);
    *(_OWORD *)v354 = *(_OWORD *)&v320[72];
    *(_QWORD *)&v354[16] = *(_QWORD *)&v320[88];
    goto LABEL_206;
  }
  v392 = 1;
  sub_1409FC6A0(v320, v276);
  if ( *(_QWORD *)v320 != -1 )
  {
    v75 = *(_QWORD *)v320;
    goto LABEL_253;
  }
  v392 = 0;
  sub_14092F940(&v358, v276);
  if ( v358.m128i_i64[0] == -1 )
    goto LABEL_207;
  v154 = _mm_loadu_si128(&v358);
  *(__m128i *)&v375[32] = v361;
  *(_OWORD *)&v375[16] = v360;
  *(_OWORD *)v375 = v359;
  v374 = v154;
  v392 = 0;
  sub_140A04BA0(v320, &v374);
  v137 = *(_QWORD *)&v320[8];
  v75 = *(_QWORD *)v320;
  v387 = *(_QWORD *)&v320[24];
  v389 = *(_QWORD *)&v320[16];
  *(_OWORD *)v348 = *(_OWORD *)&v320[32];
  *(_QWORD *)&v348[16] = *(_QWORD *)&v320[48];
  v353 = _mm_loadu_si128((const __m128i *)&v320[56]);
  *(_OWORD *)v354 = *(_OWORD *)&v320[72];
  *(_QWORD *)&v354[16] = *(_QWORD *)&v320[88];
  if ( *(_QWORD *)v320 == -1 )
    goto LABEL_207;
LABEL_346:
  v338 = *(_QWORD **)&v354[16];
  v180 = _mm_load_si128(&v353);
  v337 = *(_OWORD *)v354;
  v336 = v180;
  *(_OWORD *)&v357[8] = *(_OWORD *)&v348[8];
  *(_QWORD *)v357 = *(_QWORD *)v348;
  v367 = v137;
LABEL_347:
  sub_140908090(v240);
LABEL_348:
  sub_140235D80(&v343);
  if ( v343 )
    sub_140001660(v370, 144 * v343, 8);
LABEL_350:
  v380 = v331;
  v376 = v332;
  if ( *v332 )
    (*v332)(v380);
  v181 = v376[1];
  if ( v181 )
    sub_140001660(v380, v181, v376[2]);
LABEL_100:
  if ( (_QWORD)v312 )
    sub_140001660(*((_QWORD *)&v312 + 1), v312, 1);
  if ( *((_QWORD *)&v313 + 1) )
    sub_140001660(v314.m256i_i64[0], *((_QWORD *)&v313 + 1), 1);
  if ( v314.m256i_i64[2] )
    sub_140001660(v314.m256i_i64[3], v314.m256i_i64[2], 1);
  v390 = v386;
  sub_1409078A0(v287);
  if ( v369 )
    sub_140001660(*(_QWORD *)&v272[24], v369, 1);
  if ( v368 )
    sub_140001660(*(_QWORD *)&v272[48], v368, 1);
  v18 = v384;
  if ( *(_QWORD *)&v272[64] )
    sub_140001660(*(_QWORD *)&v272[72], *(_QWORD *)&v272[64], 1);
  if ( (_BYTE)v386 && v243.m128i_i32[0] != 2 )
  {
    *(_QWORD *)&v366 = v389;
    *((_QWORD *)&v366 + 1) = v387;
    goto LABEL_115;
  }
  v386 = v377;
  v368 = v373;
  v369 = v364;
  *(_QWORD *)&v366 = v389;
  *((_QWORD *)&v366 + 1) = v387;
LABEL_126:
  if ( v334.m128i_i64[0] )
    sub_140001660(v334.m128i_i64[1], v334.m128i_i64[0], 1);
  if ( v75 == -1 )
    goto LABEL_41;
  v243.m128i_i64[0] = v75;
  v243.m128i_i64[1] = v367;
  *(_OWORD *)v244 = v366;
  *(_OWORD *)&v244[16] = *(_OWORD *)v357;
  *(_QWORD *)&v244[32] = *(_QWORD *)&v357[16];
  *(_QWORD *)&v244[72] = v338;
  v91 = _mm_load_si128(&v336);
  *(_OWORD *)&v244[56] = v337;
  *(__m128i *)&v244[40] = v91;
  sub_1416DA570(&v358);
  v380 = v358.m128i_i64[1];
  v92 = v359;
  sub_140930990(v287, v276, aUpdateFilesSet, 39);
  if ( *(_DWORD *)v287 == 1 )
  {
    v93 = _mm_loadu_si128((const __m128i *)&v287[8]);
    *(_OWORD *)&v272[48] = *(_OWORD *)&v287[56];
    *(_OWORD *)&v272[32] = *(_OWORD *)&v287[40];
    *(_OWORD *)&v272[16] = *(_OWORD *)&v287[24];
    *(__m128i *)v272 = v93;
    goto LABEL_266;
  }
  v389 = v75;
  v94 = _mm_loadu_si128((const __m128i *)&v287[8]);
  *(_OWORD *)&v240[48] = *(_OWORD *)&v287[56];
  *(_OWORD *)&v240[32] = *(_OWORD *)&v287[40];
  *(_OWORD *)&v240[16] = *(_OWORD *)&v287[24];
  *(__m128i *)v240 = v94;
  v9 = v94.m128i_i64[0];
  v95 = *(_QWORD *)&v287[64];
  v96 = sub_1417D8600(*(_QWORD *)&v287[64]);
  v97 = 1;
  if ( !v96 )
  {
    v103 = 0x8000000000000013uLL;
    v104 = 0;
LABEL_264:
    *(_QWORD *)v272 = v103;
    *(_QWORD *)&v272[8] = v97;
    *(_QWORD *)&v272[16] = v104;
    *(_QWORD *)&v272[56] = *(_QWORD *)&v375[16];
    v157 = _mm_load_si128(&v374);
    *(_OWORD *)&v272[40] = *(_OWORD *)v375;
    *(__m128i *)&v272[24] = v157;
    v75 = v389;
    goto LABEL_265;
  }
  v98 = v96;
  v99 = v380;
  if ( !v92 )
    v99 = 1;
  v100 = sub_1417D81D0(v95, 1, v99, v92, -(v92 != 0), 1);
  if ( *(_QWORD *)v94.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
    sub_14196B550(&off_141A5AC58);
  ++*(_QWORD *)v94.m128i_i64[0];
  v101 = *(_QWORD *)(v94.m128i_i64[0] + 16);
  v376 = (_QWORD *)v94.m128i_i64[0];
  sub_14142D4A0(v320, v101, v100);
  v102 = v376;
  --*v376;
  v103 = *(_QWORD *)v320;
  if ( *(_QWORD *)v320 != -1 )
  {
    v97 = *(_QWORD *)&v320[8];
    v104 = *(_QWORD *)&v320[16];
    v374 = _mm_loadu_si128((const __m128i *)&v320[24]);
    *(_OWORD *)v375 = *(_OWORD *)&v320[40];
    *(_QWORD *)&v375[16] = *(_QWORD *)&v320[56];
    goto LABEL_264;
  }
  if ( v98 != 1 )
  {
    v104 = v98;
    v103 = 0x8000000000000013uLL;
    goto LABEL_264;
  }
  sub_14092FA00(v272, v102, v95);
  v75 = v389;
LABEL_265:
  sub_140904890(v240);
  v18 = v384;
LABEL_266:
  if ( *(_QWORD *)v272 == -1 )
  {
    if ( v358.m128i_i64[0] > 0 )
      sub_140001660(v380, v358.m128i_i64[0], 1);
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v147 = v75 < 2;
      v158 = v75 - 2;
      if ( v147 )
        v158 = 2;
      if ( v158 == 1 )
      {
        v159 = 12;
        v160 = &aSourceOrIndexI[18];
      }
      else
      {
        v159 = 11;
        v160 = &aSourceOrIndexI[30];
        if ( !v158 )
        {
          v159 = 18;
          v160 = aSourceOrIndexI;
        }
      }
      *(_QWORD *)v240 = v160;
      *(_QWORD *)&v240[8] = v159;
      *(_QWORD *)v320 = v240;
      *(_QWORD *)&v320[8] = sub_140191200;
      *(_QWORD *)&v287[48] = 2;
      *(_QWORD *)&v287[56] = aCodexmateLibCo_39;
      *(_QWORD *)&v287[64] = 37;
      *(_QWORD *)&v287[80] = &unk_141A66781;
      *(_QWORD *)&v287[88] = v320;
      *(_QWORD *)v287 = 0;
      *(_QWORD *)&v287[8] = aCodexmateLibCo_39;
      *(_OWORD *)&v287[16] = 0x25u;
      *(_QWORD *)&v287[32] = aSrcCoreAnalyti_0;
      *(_QWORD *)&v287[40] = 27;
      *(_QWORD *)&v287[72] = 0xEA00000001LL;
      sub_141503E20(&v356, v287);
    }
    v161 = sub_140906570(&v243);
    LOBYTE(v161) = 1;
    v284 = v161;
    goto LABEL_41;
  }
  v192 = _mm_load_si128((const __m128i *)v272);
  *(_OWORD *)&v320[48] = *(_OWORD *)&v272[48];
  *(_OWORD *)&v320[32] = *(_OWORD *)&v272[32];
  *(_OWORD *)&v320[16] = *(_OWORD *)&v272[16];
  *(__m128i *)v320 = v192;
  sub_140A04BA0(v287, v320);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v287[80];
  v193 = *(_OWORD *)&v287[16];
  v194 = *(_OWORD *)&v287[32];
  v195 = *(_OWORD *)&v287[48];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v287[64];
  *(_OWORD *)(a1 + 48) = v195;
  *(_OWORD *)(a1 + 32) = v194;
  *(_OWORD *)(a1 + 16) = v193;
  *(_OWORD *)a1 = *(_OWORD *)v287;
  if ( v358.m128i_i64[0] > 0 )
    sub_140001660(v380, v358.m128i_i64[0], 1);
  sub_140906570(&v243);
LABEL_32:
  v35 = v328.m128i_i64[1];
  v36 = v329;
  if ( v329 )
  {
    v37 = (_QWORD *)(v328.m128i_i64[1] + 8);
    do
    {
      v38 = *(v37 - 1);
      if ( v38 )
        sub_140001660(*v37, v38, 1);
      v37 += 8;
      --v36;
    }
    while ( v36 );
  }
  if ( v328.m128i_i64[0] )
    sub_140001660(v35, v328.m128i_i64[0] << 6, 16);
LABEL_19:
  CloseHandle(hObject);
LABEL_20:
  sub_140903740(v276);
  return a1;
}
