// addr=0x140797210
// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::fix_thread_poisoned_instructions | cross-platform string-signature match (name<->function consistent)
// NOTE: raw ida_hexrays.decompile() text fetched via py_eval in 6x20000-char slices (decompile tool truncated preview at "[142738 chars total]" with include_addresses=true default;
// full raw pseudocode without /*0xNNNN*/ address annotations is 110371 chars / 3038 lines, reassembled here verified byte-exact against py_eval-reported len(str(cf)))
// refs:
//   0x14076d370  sub_14076D370
//   0x14041f680  sub_14041F680
//   0x14178fc9e  unk_14178FC9E
//   0x14149c0f0  sub_14149C0F0
//   0x1407605b0  sub_1407605B0
//   0x140762620  sub_140762620
//   0x141473fa0  sub_141473FA0
//   0x14178bde1  unk_14178BDE1
//   0x14178bdf9  unk_14178BDF9
//   0x140001660  sub_140001660

// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::fix_thread_poisoned_instructions | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall fix_thread_poisoned_instructions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  char v11; // al
  __int64 v12; // r8
  void *v13; // rdx
  void (__fastcall *v15)(_BYTE *, __int64); // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  _OWORD *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rbx
  _BYTE *v28; // r15
  __int64 v29; // rax
  __int128 v30; // xmm0
  __m128i v31; // xmm1
  __int128 v32; // xmm2
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // ebx
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rsi
  __m128i *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rsi
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // r15
  __int128 v53; // rax
  __m128i si128; // xmm0
  __m128i v55; // xmm1
  char v56; // bl
  __m128i *v57; // r14
  __int64 v58; // rax
  __int128 v59; // xmm0
  __m128i v60; // xmm1
  __int128 v61; // xmm2
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  _OWORD *v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  _QWORD *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rsi
  __m128i *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __m128i v90; // xmm0
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rcx
  _QWORD *v95; // rsi
  void *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rcx
  _QWORD *v100; // rsi
  _OWORD *v101; // rax
  __m128i v102; // xmm0
  __int64 v103; // rcx
  __int64 v104; // rdx
  __m128i v105; // xmm0
  __m128i v106; // xmm1
  __int128 v107; // xmm2
  __int64 v108; // rbx
  __int64 v109; // rcx
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  __int64 v112; // rcx
  __int64 v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  _QWORD *v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rcx
  __m128i *v121; // rdx
  __m128i v122; // xmm0
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  _QWORD *v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  _QWORD *v131; // rsi
  _OWORD *v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rsi
  _DWORD *v135; // rax
  __m128i v136; // xmm0
  __int64 v137; // rax
  __int64 v138; // rdx
  __int128 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rsi
  __m128i *v142; // r13
  __int64 v143; // r15
  __m128i *v144; // rsi
  __int64 v145; // r14
  __int64 v146; // rbx
  __int64 v147; // rax
  __int64 v148; // r12
  __int8 v149; // al
  __int64 v150; // r15
  __int64 v151; // r12
  __int64 v152; // rax
  __int64 v153; // rcx
  _QWORD *v154; // rsi
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rcx
  _OWORD *v159; // rax
  __m128i v160; // xmm0
  __int64 v161; // rcx
  __int64 v162; // rdx
  __int64 v163; // rcx
  int v164; // edx
  int v165; // ecx
  unsigned int v166; // ecx
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // rax
  __m128i v172; // xmm0
  __m128i v173; // xmm1
  __int128 v174; // xmm2
  _DWORD *v175; // rax
  __m128i v176; // xmm0
  __int64 v177; // rbx
  __int64 v178; // r14
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __m128i *v182; // r13
  __int64 v183; // r14
  _BYTE *v184; // rsi
  __int64 v185; // r15
  __int64 v186; // rbx
  __int64 v187; // rax
  __int64 v188; // r12
  __int8 v189; // al
  __int64 v190; // r12
  __int64 v191; // r14
  __int64 v192; // rbx
  __int64 v193; // rax
  __int64 v194; // rsi
  __int64 v195; // rax
  __int64 v196; // rcx
  __m128i v197; // xmm0
  __m128i v198; // xmm1
  __int64 v199; // rsi
  __int64 v200; // rax
  __int64 v201; // rcx
  __m128i v202; // xmm0
  __m128i v203; // xmm1
  __int64 v204; // rax
  __int64 v205; // rcx
  _QWORD *v206; // rsi
  __m128i *v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rax
  __int64 v210; // rcx
  _QWORD *v211; // rsi
  __int64 v212; // rax
  __m128i v213; // xmm0
  __int64 v214; // rcx
  __int64 v215; // rax
  __int64 v216; // rcx
  _QWORD *v217; // rsi
  __int64 v218; // rax
  __int64 v219; // rcx
  __int64 v220; // rax
  __int64 v221; // rcx
  _QWORD *v222; // rsi
  _QWORD *v223; // rax
  __m128i v224; // xmm0
  __int64 v225; // rcx
  __m128i v226; // xmm1
  __int64 v227; // rcx
  __int64 v228; // rdi
  __int64 v229; // rax
  __int64 v230; // rcx
  _QWORD *v231; // rsi
  __int64 v232; // rax
  __int64 v233; // rcx
  __int64 v234; // rax
  int v235; // edx
  __int64 v236; // rax
  __int64 v237; // r15
  __int64 v238; // r13
  __int64 v239; // rax
  __int64 v240; // rax
  unsigned __int64 v241; // rbx
  __int64 v242; // rdx
  __int64 v243; // r8
  char *v244; // rdi
  __int64 v245; // rdx
  char v246; // al
  int v247; // r14d
  __int16 v248; // r12
  char *v249; // rax
  char *v250; // r8
  char *v251; // r8
  char *v252; // rcx
  char v253; // r9
  char *v254; // r8
  char v255; // si
  __int64 v256; // rdx
  unsigned __int64 v257; // rdx
  __int64 v258; // rdi
  __int64 v259; // rdx
  __int64 v260; // rax
  __int64 v261; // rdx
  const char *v262; // rax
  __int64 v263; // rcx
  __int64 v264; // rdx
  __int64 v265; // rax
  __int64 v266; // rdx
  __int64 v267; // rdi
  __int64 v268; // rcx
  __int64 v269; // rax
  __int64 v270; // rcx
  _QWORD *v271; // rsi
  __int64 v272; // rax
  __int64 v273; // rcx
  __int64 v274; // rdi
  _QWORD *v275; // rsi
  __m128i *v276; // rdx
  __m128i v277; // xmm0
  __int64 v278; // rcx
  __int64 v279; // rcx
  __int64 v280; // rax
  __int64 v281; // rcx
  _QWORD *v282; // rsi
  __m128i *v283; // rax
  __m128i *v284; // rdx
  __m128i v285; // xmm0
  __int64 v286; // rcx
  __int64 v287; // rcx
  __int32 v288; // ebx
  int v289; // r14d
  __m128i v290; // xmm0
  __m128i *v291; // rax
  __int64 v292; // rax
  __int64 v293; // rdx
  __int64 v294; // r13
  __int64 v295; // rsi
  __int64 v296; // rax
  __int64 v297; // rcx
  __m128i **v298; // r12
  __int64 v299; // r13
  __m128i **v300; // rax
  __int64 v301; // r14
  __int64 v302; // rcx
  __int64 v303; // rax
  __m128i *v304; // rdx
  __m128i v305; // xmm0
  __int64 v306; // rax
  __int64 v307; // rcx
  __int64 v308; // rax
  _BYTE *v309; // rax
  _BYTE *v310; // rdx
  bool v311; // zf
  __int64 v312; // rcx
  __int64 v313; // rax
  __int64 v314; // r8
  unsigned __int64 *v315; // rax
  unsigned __int64 v316; // r8
  unsigned __int64 v317; // rdx
  unsigned __int64 v318; // rcx
  unsigned __int64 v319; // r9
  unsigned __int64 v320; // rbx
  __int64 v321; // r8
  __int64 v322; // r11
  unsigned __int64 v323; // r10
  unsigned __int64 v324; // rdx
  __int64 v325; // rcx
  unsigned __int8 *v326; // rbx
  __int64 v327; // r15
  __int64 v328; // rbx
  __int64 v329; // rsi
  int v330; // ebx
  unsigned int v331; // eax
  __int64 v332; // rcx
  __int64 v333; // rdx
  __int64 v334; // r8
  unsigned __int8 *v335; // rax
  __m128i v336; // xmm1
  __int64 v337; // rax
  const char *v338; // rcx
  __int64 v339; // rdx
  __m128i *v340; // rdx
  __m128i v341; // xmm0
  __int64 v342; // rcx
  __int64 v343; // rdx
  __m128i *v344; // rax
  __int64 v345; // rcx
  __int64 v346; // rax
  __int64 v347; // rcx
  __m128i *v348; // rdx
  __m128i v349; // xmm0
  __int64 v350; // rcx
  __int64 v351; // rax
  __int64 v352; // rcx
  _QWORD *v353; // rdi
  __int64 v354; // rax
  __int64 v355; // rcx
  __m128i *v356; // rdx
  __m128i v357; // xmm0
  __int64 v358; // rcx
  __m128i *v359; // rcx
  __int64 v360; // rcx
  void *v361; // rax
  __m128i *v362; // rdx
  _QWORD *v363; // rcx
  __int64 v364; // rcx
  __m128i *v365; // rax
  __int64 v366; // rcx
  __m128i *v367; // rdx
  __m128i v368; // xmm0
  __int64 v369; // rcx
  __int64 v370; // rcx
  __int64 v371; // rax
  __int64 v372; // rcx
  __m128i *v373; // rdx
  __m128i v374; // xmm0
  __int64 v375; // rcx
  __int64 v376; // [rsp+30h] [rbp-50h]
  __m256i v377; // [rsp+80h] [rbp+0h] BYREF
  __int64 v378; // [rsp+A0h] [rbp+20h]
  __int64 v379; // [rsp+A8h] [rbp+28h]
  __m128i v380; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v381; // [rsp+2E8h] [rbp+268h]
  _BYTE v382[80]; // [rsp+2F0h] [rbp+270h] BYREF
  __m128i v383[33]; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v384; // [rsp+550h] [rbp+4D0h]
  char v385[632]; // [rsp+7B0h] [rbp+730h] BYREF
  _QWORD v386[2]; // [rsp+A28h] [rbp+9A8h] BYREF
  __int64 v387; // [rsp+A38h] [rbp+9B8h]
  __m128i v388; // [rsp+A40h] [rbp+9C0h] BYREF
  unsigned __int128 v389; // [rsp+A50h] [rbp+9D0h]
  __int128 v390; // [rsp+A60h] [rbp+9E0h] BYREF
  __int128 v391; // [rsp+A70h] [rbp+9F0h] BYREF
  __int64 v392; // [rsp+A80h] [rbp+A00h] BYREF
  __int64 v393; // [rsp+C98h] [rbp+C18h] BYREF
  __int64 v394; // [rsp+CA0h] [rbp+C20h]
  __int64 v395; // [rsp+CA8h] [rbp+C28h]
  _BYTE v396[48]; // [rsp+CB0h] [rbp+C30h] BYREF
  __int128 v397; // [rsp+CE0h] [rbp+C60h]
  __int128 v398; // [rsp+CF0h] [rbp+C70h]
  __m128i v399; // [rsp+D00h] [rbp+C80h]
  __int64 v400; // [rsp+F28h] [rbp+EA8h] BYREF
  __int64 v401; // [rsp+F30h] [rbp+EB0h] BYREF
  __int64 v402; // [rsp+F38h] [rbp+EB8h]
  __m128i v403; // [rsp+F40h] [rbp+EC0h] BYREF
  __int64 v404; // [rsp+F50h] [rbp+ED0h]
  __m128i v405; // [rsp+F58h] [rbp+ED8h] BYREF
  __int64 v406; // [rsp+F68h] [rbp+EE8h]
  __m128i v407; // [rsp+F70h] [rbp+EF0h] BYREF
  __int128 v408; // [rsp+F80h] [rbp+F00h]
  __int64 v409; // [rsp+F90h] [rbp+F10h]
  __int64 v410; // [rsp+F98h] [rbp+F18h]
  __int64 v411; // [rsp+FA0h] [rbp+F20h]
  _QWORD *v412; // [rsp+FA8h] [rbp+F28h]
  __int64 v413; // [rsp+FB0h] [rbp+F30h]
  __m128i v414; // [rsp+FB8h] [rbp+F38h] BYREF
  __int64 v415; // [rsp+FC8h] [rbp+F48h]
  __m128i v416; // [rsp+FD0h] [rbp+F50h] BYREF
  __int64 v417; // [rsp+FE0h] [rbp+F60h]
  __int64 v418; // [rsp+FF0h] [rbp+F70h] BYREF
  __int64 v419; // [rsp+FF8h] [rbp+F78h]
  __int64 v420; // [rsp+1000h] [rbp+F80h]
  __m256i v421; // [rsp+1008h] [rbp+F88h] BYREF
  __int64 v422; // [rsp+1028h] [rbp+FA8h]
  __m256i v423; // [rsp+1030h] [rbp+FB0h] BYREF
  __int128 v424; // [rsp+1050h] [rbp+FD0h]
  __m128i v425; // [rsp+1060h] [rbp+FE0h] BYREF
  __int64 v426; // [rsp+1070h] [rbp+FF0h]
  __m128i v427; // [rsp+1080h] [rbp+1000h] BYREF
  __int64 v428; // [rsp+1090h] [rbp+1010h]
  __int64 v429; // [rsp+1098h] [rbp+1018h]
  __int64 m128i_i64; // [rsp+10A0h] [rbp+1020h]
  __int64 v431; // [rsp+10A8h] [rbp+1028h]
  char v432; // [rsp+10B7h] [rbp+1037h]
  __int64 v433; // [rsp+10B8h] [rbp+1038h]
  __int128 v434; // [rsp+10C0h] [rbp+1040h]
  unsigned __int8 *v435; // [rsp+10D0h] [rbp+1050h]
  __m128i *v436; // [rsp+10D8h] [rbp+1058h]
  char v437; // [rsp+10E2h] [rbp+1062h]
  char v438; // [rsp+10E3h] [rbp+1063h]
  char v439; // [rsp+10E4h] [rbp+1064h]
  char v440; // [rsp+10E5h] [rbp+1065h]
  char v441; // [rsp+10E6h] [rbp+1066h]
  char v442; // [rsp+10E7h] [rbp+1067h]
  __m128i *v443; // [rsp+10E8h] [rbp+1068h]
  _QWORD *v444; // [rsp+10F0h] [rbp+1070h]
  __int64 v445; // [rsp+10F8h] [rbp+1078h]

  v445 = -2;
  v444 = (_QWORD *)a1;
  v386[0] = a4;
  v386[1] = a5;
  v11 = sub_14076D370(a4, a5);
  if ( !a8 && (v11 & 1) != 0 )
  {
    *(_QWORD *)v396 = v386;
    *(_QWORD *)&v396[8] = sub_14041F680;
    v13 = &unk_14178FC9E;
LABEL_54:
    sub_14149C0F0(v382, v13, v396);
    v36 = (__int64)v444;
    *v444 = 10;
    *(__m128i *)(v36 + 8) = _mm_loadu_si128((const __m128i *)v382);
    *(_QWORD *)(v36 + 24) = *(_QWORD *)&v382[16];
    return v36;
  }
  switch ( a5 )
  {
    case 12LL:
      if ( *(_QWORD *)a4 ^ 0x735F6769666E6F63LL | *(unsigned int *)(a4 + 8) ^ 0x656C6174LL )
        goto LABEL_53;
      sub_1407605B0((_DWORD)v444, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80), a3, a6, *(_QWORD *)(a7 + 40));
      return (__int64)v444;
    case 14LL:
      if ( !(*(_QWORD *)a4 ^ 0x746E695F68747561LL | *(_QWORD *)(a4 + 6) ^ 0x797469726765746ELL) )
      {
        sub_140762620(v444, a2, v12, a6);
        return (__int64)v444;
      }
      if ( *(_QWORD *)a4 ^ 0x6C61756469736572LL | *(_QWORD *)(a4 + 6) ^ 0x65686361635F6C61LL )
        goto LABEL_53;
      sub_141473FA0((unsigned int)v382, *(_QWORD *)(a2 + 776), *(_QWORD *)(a2 + 784), (unsigned int)&unk_14178BDE1, 24);
      v443 = *(__m128i **)&v382[8];
      sub_141473FA0((unsigned int)v396, *(_DWORD *)&v382[8], *(_DWORD *)&v382[16], (unsigned int)&unk_14178BDF9, 22);
      if ( *(_QWORD *)v382 )
        sub_140001660(v443, *(_QWORD *)v382, 1);
      v34 = *(_QWORD *)&v396[16];
      v443 = *(__m128i **)&v396[8];
      sub_141486710(v382, *(_QWORD *)&v396[8], *(_QWORD *)&v396[16]);
      if ( *(_DWORD *)v382 == 2 )
      {
        sub_1401DD260(*(_QWORD *)&v382[8]);
      }
      else
      {
        v91 = sub_141485EF0(v443, v34);
        if ( v91 )
        {
          v92 = (__int64)v444;
          *v444 = 2;
          *(_QWORD *)(v92 + 8) = v91;
          goto LABEL_109;
        }
      }
      nullsub_1(v35);
      v93 = sub_140001650(24, 8);
      if ( !v93 )
        sub_1416C2D31(8, 24);
      v95 = (_QWORD *)v93;
      nullsub_1(v94);
      v96 = (void *)sub_140001650(14, 1);
      if ( !v96 )
      {
        v444 = v95;
        sub_1416C2D4B(1, 14);
      }
      qmemcpy(v96, "residual_cache", 14);
      *v95 = 14;
      v95[1] = v96;
      v95[2] = 14;
      v377.m256i_i64[0] = 1;
      v377.m256i_i64[1] = (__int64)v95;
      v377.m256i_i64[2] = 1;
      v388.m128i_i64[0] = 0;
      v388.m128i_i64[1] = 8;
      *(_QWORD *)&v389 = 0;
      nullsub_1(v97);
      v98 = sub_140001650(24, 8);
      if ( !v98 )
        sub_1416C2D31(8, 24);
      v100 = (_QWORD *)v98;
      nullsub_1(v99);
      v101 = (_OWORD *)sub_140001650(27, 1);
      if ( !v101 )
      {
        v444 = v100;
        sub_1416C2D4B(1, 27);
      }
      *(_OWORD *)((char *)v101 + 11) = *(__int128 *)((char *)&xmmword_14178BE1D + 11);
      *v101 = xmmword_14178BE1D;
      *v100 = 27;
      v100[1] = v101;
      v100[2] = 27;
      *(_QWORD *)&v382[16] = v377.m256i_i64[2];
      v102 = _mm_loadu_si128((const __m128i *)&v377);
      *(__m128i *)v382 = v102;
      *(_QWORD *)&v382[40] = v389;
      *(__m128i *)&v382[24] = _mm_loadu_si128(&v388);
      v103 = (__int64)v444;
      *(_OWORD *)(v444 + 5) = *(_OWORD *)&v382[32];
      *(_OWORD *)(v103 + 24) = *(_OWORD *)&v382[16];
      *(__m128i *)(v103 + 8) = v102;
      *(_QWORD *)(v103 + 56) = 1;
      *(_QWORD *)(v103 + 64) = v100;
      *(_QWORD *)(v103 + 72) = 1;
      *(_QWORD *)v103 = -1;
LABEL_109:
      v104 = *(_QWORD *)v396;
      if ( !*(_QWORD *)v396 )
        return (__int64)v444;
      goto LABEL_242;
    case 17LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(a4 + 16)), (__m128i)xmmword_1416C6BB0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1417866F0))) == 0xFFFF )
      {
        sub_141473FA0(
          (unsigned int)&v407,
          *(_QWORD *)(a2 + 776),
          *(_QWORD *)(a2 + 784),
          (unsigned int)&unk_14178BDE1,
          24);
        v37 = v408;
        v443 = (__m128i *)v407.m128i_i64[1];
        sub_141473FA0((unsigned int)&v377, v407.m128i_i32[2], v408, (unsigned int)&unk_14178C424, 12);
        v38 = v377.m256i_i64[2];
        v436 = (__m128i *)v377.m256i_i64[1];
        sub_141486710(v382, v377.m256i_i64[1], v377.m256i_i64[2]);
        if ( *(_DWORD *)v382 == 2 )
        {
          sub_1401DD260(*(_QWORD *)&v382[8]);
          nullsub_1(v39);
          v40 = sub_140001650(24, 8);
          if ( !v40 )
            sub_1416C2D31(8, 24);
          v42 = (_QWORD *)v40;
          nullsub_1(v41);
          v43 = (__m128i *)sub_140001650(17, 1);
          if ( !v43 )
          {
            v444 = v42;
            sub_1416C2D4B(1, 17);
          }
          *v43 = _mm_loadu_si128((const __m128i *)aResidualManife);
          v43[1].m128i_i8[0] = 116;
          *v42 = 17;
          v42[1] = v43;
          v42[2] = 17;
          v388.m128i_i64[0] = 1;
          v388.m128i_i64[1] = (__int64)v42;
          *(_QWORD *)&v389 = 1;
          *(_QWORD *)v396 = 0;
          *(_QWORD *)&v396[8] = 8;
          *(_QWORD *)&v396[16] = 0;
          nullsub_1(v44);
          v45 = sub_140001650(24, 8);
          if ( !v45 )
            sub_1416C2D31(8, 24);
          v47 = (_QWORD *)v45;
          nullsub_1(v46);
          v48 = sub_140001650(33, 1);
          if ( !v48 )
          {
            v444 = v47;
            sub_1416C2D4B(1, 33);
          }
          *(_OWORD *)(v48 + 16) = xmmword_14178C451;
          *(_OWORD *)v48 = xmmword_14178C441;
          *(_BYTE *)(v48 + 32) = -122;
          *v47 = 33;
          v47[1] = v48;
          v47[2] = 33;
          *(_QWORD *)&v382[16] = v389;
          v49 = _mm_loadu_si128(&v388);
          *(__m128i *)v382 = v49;
          *(_QWORD *)&v382[40] = *(_QWORD *)&v396[16];
          *(__m128i *)&v382[24] = _mm_loadu_si128((const __m128i *)v396);
          v50 = (__int64)v444;
          *(_OWORD *)(v444 + 5) = *(_OWORD *)&v382[32];
          *(_OWORD *)(v50 + 24) = *(_OWORD *)&v382[16];
          *(__m128i *)(v50 + 8) = v49;
          *(_QWORD *)(v50 + 56) = 1;
          *(_QWORD *)(v50 + 64) = v47;
          *(_QWORD *)(v50 + 72) = 1;
          *(_QWORD *)v50 = -1;
        }
        else
        {
          sub_141473FA0((unsigned int)&v388, (_DWORD)v443, v37, (unsigned int)aHistory, 7);
          v382[0] = 1;
          v71 = v389;
          *(_QWORD *)&v434 = v388.m128i_i64[1];
          v72 = sub_14147B9A0(v382, v388.m128i_i64[1], v389);
          if ( v72 )
          {
            v73 = (__int64)v444;
            *v444 = 2;
            *(_QWORD *)(v73 + 8) = v72;
          }
          else
          {
            sub_140FFA6E0(v382);
            v164 = (*(int *)v382 >> 13) - 1;
            v165 = 0;
            if ( *(int *)v382 >> 13 <= 0 )
            {
              v166 = (1 - (*(int *)v382 >> 13)) / 0x190u + 1;
              v164 += 400 * v166;
              v165 = -146097 * v166;
            }
            v421.m256i_i64[0] = 1000
                              * (*(unsigned int *)&v382[4]
                               + 86400LL
                               * (((v164 / 100) >> 2)
                                + ((1461 * v164) >> 2)
                                + v165
                                + ((*(_DWORD *)v382 >> 4) & 0x1FF)
                                - v164 / 100
                                - 719163))
                              + *(unsigned int *)&v382[8] / 0xF4240uLL;
            *(_QWORD *)v382 = &v421;
            *(_QWORD *)&v382[8] = sub_1414AC5F0;
            sub_14149C0F0(&v425, &unk_14178C462, v382);
            sub_14033DC20(v396, v434, v71, &v425);
            *((_QWORD *)&v434 + 1) = *(_QWORD *)&v396[8];
            v167 = sub_141486540(v436, v38, *(_QWORD *)&v396[8], *(_QWORD *)&v396[16]);
            if ( v167 )
            {
              v169 = (__int64)v444;
              *v444 = 2;
              *(_QWORD *)(v169 + 8) = v167;
            }
            else
            {
              nullsub_1(v168);
              v204 = sub_140001650(24, 8);
              if ( !v204 )
                sub_1416C2D31(8, 24);
              v206 = (_QWORD *)v204;
              nullsub_1(v205);
              v207 = (__m128i *)sub_140001650(17, 1);
              if ( !v207 )
              {
                v444 = v206;
                sub_1416C2D4B(1, 17);
              }
              *v207 = _mm_loadu_si128((const __m128i *)aResidualManife);
              v207[1].m128i_i8[0] = 116;
              *v206 = 17;
              v206[1] = v207;
              v206[2] = 17;
              v416.m128i_i64[0] = 1;
              v416.m128i_i64[1] = (__int64)v206;
              v417 = 1;
              v423.m256i_i64[0] = 0;
              *(_OWORD *)&v423.m256i_u64[1] = 8u;
              nullsub_1(v208);
              v209 = sub_140001650(24, 8);
              if ( !v209 )
                sub_1416C2D31(8, 24);
              v211 = (_QWORD *)v209;
              nullsub_1(v210);
              v212 = sub_140001650(39, 1);
              if ( !v212 )
              {
                v444 = v211;
                sub_1416C2D4B(1, 39);
              }
              *(_OWORD *)(v212 + 16) = xmmword_14178C483;
              *(_OWORD *)v212 = xmmword_14178C473;
              *(_QWORD *)(v212 + 31) = 0x79726F7473696820LL;
              *v211 = 39;
              v211[1] = v212;
              v211[2] = 39;
              *(_QWORD *)&v382[16] = v417;
              v213 = _mm_loadu_si128(&v416);
              *(__m128i *)v382 = v213;
              *(_QWORD *)&v382[40] = v423.m256i_i64[2];
              *(__m128i *)&v382[24] = _mm_loadu_si128((const __m128i *)&v423);
              v214 = (__int64)v444;
              *(_OWORD *)(v444 + 5) = *(_OWORD *)&v382[32];
              *(_OWORD *)(v214 + 24) = *(_OWORD *)&v382[16];
              *(__m128i *)(v214 + 8) = v213;
              *(_QWORD *)(v214 + 56) = 1;
              *(_QWORD *)(v214 + 64) = v211;
              *(_QWORD *)(v214 + 72) = 1;
              *(_QWORD *)v214 = -1;
            }
            if ( *(_QWORD *)v396 )
              sub_140001660(*((_QWORD *)&v434 + 1), *(_QWORD *)v396, 1);
          }
          if ( v388.m128i_i64[0] )
            sub_140001660(v434, v388.m128i_i64[0], 1);
        }
        if ( v377.m256i_i64[0] )
          sub_140001660(v436, v377.m256i_i64[0], 1);
        v104 = v407.m128i_i64[0];
        if ( v407.m128i_i64[0] )
LABEL_242:
          sub_140001660(v443, v104, 1);
        return (__int64)v444;
      }
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(a4 + 16)), (__m128i)xmmword_1416C6430),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786700))) != 0xFFFF )
        goto LABEL_53;
      sub_140763CB0((_DWORD)v444, *(_QWORD *)(a2 + 776), *(_QWORD *)(a2 + 784), a3, a6, *(_QWORD *)(a7 + 40));
      return (__int64)v444;
    case 18LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a4 + 16)), (__m128i)xmmword_1417866A0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786690))) == 0xFFFF )
      {
        sub_140764B20(v444, a2, a6, *(_QWORD *)(a7 + 40));
        return (__int64)v444;
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a4 + 16)), (__m128i)xmmword_1417866C0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1417866B0))) != 0xFFFF )
          goto LABEL_53;
        sub_1407646C0((_DWORD)v444, a2, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16), a6, *(_QWORD *)(a7 + 40));
        return (__int64)v444;
      }
    case 19LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786560),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 3)), (__m128i)xmmword_141786550))) == 0xFFFF )
      {
        _u7b__u7b_closure_u7d__u7d__13(v444, a2, a3, a6);
        return (__int64)v444;
      }
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786580),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 3)), (__m128i)xmmword_141786570))) != 0xFFFF )
        goto LABEL_53;
      v26 = *(_QWORD *)(a2 + 8);
      v27 = *(_QWORD *)(a2 + 16);
      sub_141473FA0((unsigned int)&v416, v26, v27, (unsigned int)&unk_141789397, 6);
      v433 = v26;
      v431 = v27;
      sub_1407130B0(&v423, v26, v27);
      if ( *(_QWORD *)(a2 + 960) == -1 )
      {
        sub_140713CC0(&v407, v433, v431);
      }
      else
      {
        sub_14032C610(&v407, a2 + 960);
        BYTE8(v408) = *(_BYTE *)(a2 + 984);
      }
      v108 = v417;
      v429 = v407.m128i_i64[1];
      v435 = (unsigned __int8 *)v416.m128i_i64[1];
      if ( (unsigned __int8)sub_1414734E0(v407.m128i_i64[1], v408, v416.m128i_i64[1], v417) )
      {
        v412 = (_QWORD *)v423.m256i_i64[0];
        if ( v423.m256i_i64[0] != -1 )
        {
          v387 = v423.m256i_i64[1];
          sub_141473290(&v388, v423.m256i_i64[1], v423.m256i_i64[2]);
          sub_141473290(v396, v435, v108);
          if ( v388.m128i_i64[1] == *(_QWORD *)&v396[8]
            && BYTE8(v391) == BYTE8(v397)
            && BYTE9(v391) == 2
            && BYTE9(v397) == 2
            && (unsigned __int8)v389 < 3u == v396[16] < 3u
            && !(unsigned int)sub_1416847B0(v388.m128i_i64[0], *(_QWORD *)v396, v388.m128i_i64[1]) )
          {
            goto LABEL_127;
          }
          v110 = _mm_loadu_si128((const __m128i *)v396);
          v111 = _mm_loadu_si128((const __m128i *)&v396[16]);
          *(_OWORD *)&v382[48] = v397;
          *(_OWORD *)&v382[32] = *(_OWORD *)&v396[32];
          *(__m128i *)&v382[16] = v111;
          *(__m128i *)v382 = v110;
          if ( (unsigned __int8)sub_140467AB0(&v388, v382) )
          {
LABEL_127:
            sub_1407635A0(&v405, v433, v431);
            if ( v406 )
            {
              v113 = v406;
              sub_141473FA0(
                (unsigned int)&v377,
                *(_QWORD *)(a2 + 776),
                *(_QWORD *)(a2 + 784),
                (unsigned int)&unk_14178CF90,
                16);
              v382[0] = 1;
              v402 = v377.m256i_i64[2];
              m128i_i64 = v377.m256i_i64[1];
              v114 = sub_14147B9A0(v382, v377.m256i_i64[1], v377.m256i_i64[2]);
              if ( !v114 )
              {
                *(_DWORD *)v396 = sub_141475580();
                *(_DWORD *)&v396[4] = v235;
                sub_141475530(v382, v396, 3577643008LL, 27111902);
                v394 = 0;
                v236 = 0;
                if ( !v382[0] )
                  v236 = *(_QWORD *)&v382[8];
                v237 = v405.m128i_i64[1];
                v414.m128i_i64[0] = v236;
                v411 = v405.m128i_i64[1] + 32 * v113;
                v395 = v405.m128i_i64[1];
                while ( v237 != v411 )
                {
                  v422 = v237 + 32;
                  *(_QWORD *)&v396[8] = 3;
                  *(_OWORD *)&v396[16] = 1u;
                  *(_QWORD *)&v396[32] = aWal_1;
                  *(_QWORD *)&v396[40] = 4;
                  *(_QWORD *)&v397 = aShm_0;
                  *((_QWORD *)&v397 + 1) = 4;
                  v238 = 0;
LABEL_265:
                  v239 = v238;
LABEL_267:
                  if ( v239 != 3 )
                  {
                    v238 = v239 + 1;
                    *(_QWORD *)v396 = v239 + 1;
                    v240 = 16 * v239;
                    v241 = *(_QWORD *)&v396[v240 + 24];
                    v242 = *(_QWORD *)(v237 + 8);
                    v243 = *(_QWORD *)(v237 + 16);
                    if ( !v241 )
                    {
                      sub_1414734D0(&v388, v242, v243);
                      goto LABEL_306;
                    }
                    v244 = *(char **)&v396[v240 + 16];
                    sub_14149BB70(v382, v242, v243);
                    v245 = *(_QWORD *)&v382[16];
                    v246 = 1;
                    v247 = 0;
                    if ( *(_QWORD *)&v382[16] >= 3u
                      && (*(_BYTE *)(*(_QWORD *)&v382[8] + *(_QWORD *)&v382[16] - 2LL) & 0xF0) == 0xA0
                      && *(_BYTE *)(*(_QWORD *)&v382[8] + *(_QWORD *)&v382[16] - 3LL) == 0xED )
                    {
                      v247 = ((*(_BYTE *)(*(_QWORD *)&v382[8] + *(_QWORD *)&v382[16] - 2LL) & 0xF) << 16)
                           | ((*(_BYTE *)(*(_QWORD *)&v382[8] + *(_QWORD *)&v382[16] - 1LL) & 0x3F) << 10);
                      v246 = 0;
                    }
                    if ( v241 >= 3 && *v244 == -19 )
                    {
                      v248 = (unsigned __int8)v244[1];
                      if ( !(((v244[1] & 0xF0) != 0xB0) | (unsigned __int8)v246) )
                      {
                        v255 = v244[2];
                        if ( *(_QWORD *)&v382[16] >= 3u )
                        {
                          v245 = *(_QWORD *)&v382[16] - 3LL;
                          *(_QWORD *)&v382[16] -= 3LL;
                        }
                        if ( v241 + 1 > *(_QWORD *)v382 - v245 )
                          sub_141688D30((unsigned int)v382, v245, v241 + 1, 1, 1);
                        sub_14149A2C0(v382, (v255 & 0x3F | v247 | (v248 << 6) & 0x3C0u) + 0x10000);
                        v256 = *(_QWORD *)&v382[16];
                        if ( v241 - 3 > *(_QWORD *)v382 - *(_QWORD *)&v382[16] )
                        {
                          sub_141688D30((unsigned int)v382, *(_DWORD *)&v382[16], v241 - 3, 1, 1);
                          v256 = *(_QWORD *)&v382[16];
LABEL_299:
                          sub_141684120(*(_QWORD *)&v382[8] + v256, v244 + 3, v241 - 3);
                          v256 = *(_QWORD *)&v382[16];
                        }
                        else if ( v241 != 3 )
                        {
                          goto LABEL_299;
                        }
                        v257 = v241 - 3 + v256;
                        goto LABEL_305;
                      }
                    }
                    if ( !v382[24] )
                      goto LABEL_302;
                    v249 = &v244[v241];
                    v250 = v244;
                    while ( 1 )
                    {
                      v252 = v250 + 1;
                      v253 = *v250;
                      if ( *v250 < 0 )
                      {
                        if ( (unsigned __int8)v253 < 0xE0u )
                        {
                          v251 = v250 + 2;
                          if ( v252 != v249 )
                            v252 = v251;
                        }
                        else if ( v253 == -19 )
                        {
                          if ( v252 == v249 || v250 + 2 == v249 )
                            goto LABEL_302;
                          if ( (unsigned __int8)v250[1] > 0x9Fu )
                          {
                            v382[24] = 0;
LABEL_302:
                            if ( v241 > *(_QWORD *)v382 - *(_QWORD *)&v382[16] )
                            {
                              sub_141688D30((unsigned int)v382, *(_DWORD *)&v382[16], v241, 1, 1);
                              v245 = *(_QWORD *)&v382[16];
                            }
                            sub_141684120(*(_QWORD *)&v382[8] + v245, v244, v241);
                            v257 = v241 + *(_QWORD *)&v382[16];
LABEL_305:
                            *(_QWORD *)&v382[16] = v257;
                            v388 = _mm_loadu_si128((const __m128i *)v382);
                            v389 = __PAIR128__(*(unsigned __int64 *)&v382[24], v257);
LABEL_306:
                            v258 = v389;
                            v443 = (__m128i *)v388.m128i_i64[1];
                            sub_141486710(v382, v388.m128i_i64[1], v389);
                            if ( *(_DWORD *)v382 == 2 )
                            {
                              if ( (v382[8] & 3u) - 2 >= 2 && (v382[8] & 3) != 0 )
                              {
                                *((_QWORD *)&v434 + 1) = *(_QWORD *)&v382[8] - 1LL;
                                v436 = *(__m128i **)(*(_QWORD *)&v382[8] - 1LL);
                                *(_QWORD *)&v434 = *(_QWORD *)(*(_QWORD *)&v382[8] + 7LL);
                                if ( *(_QWORD *)v434 )
                                  (*(void (__fastcall **)(__m128i *))v434)(v436);
                                v259 = *(_QWORD *)(v434 + 8);
                                if ( v259 )
                                  sub_140001660(v436, v259, *(_QWORD *)(v434 + 16));
                                sub_140001660(*((_QWORD *)&v434 + 1), 24, 8);
                              }
                              if ( v388.m128i_i64[0] )
                                sub_140001660(v443, v388.m128i_i64[0], 1);
                              v239 = v238;
                              goto LABEL_267;
                            }
                            v260 = sub_1414742C0(v443, v258);
                            if ( v260 )
                            {
                              sub_1414A3C90(v382, v260, v261);
                              v262 = *(const char **)&v382[8];
                              if ( v382[0] )
                                v262 = aStateSqlite_0;
                              v263 = *(_QWORD *)&v382[16];
                              if ( v382[0] )
                                v263 = 12;
                            }
                            else
                            {
                              v263 = 12;
                              v262 = aStateSqlite_0;
                            }
                            v421.m256i_i64[0] = (__int64)v262;
                            v421.m256i_i64[1] = v263;
                            *(_QWORD *)v382 = &v414;
                            *(_QWORD *)&v382[8] = sub_1414AC520;
                            *(_QWORD *)&v382[16] = &v421;
                            *(_QWORD *)&v382[24] = sub_14041F680;
                            sub_14149C0F0(&v425, &unk_14178EF14, v382);
                            sub_14033DC20(v382, m128i_i64, v402, &v425);
                            v436 = *(__m128i **)&v382[8];
                            if ( sub_141486360(v443, v258, *(_QWORD *)&v382[8], *(_QWORD *)&v382[16]) )
                            {
                              if ( (unsigned int)(v264 & 3) - 2 >= 2 && (v264 & 3) != 0 )
                              {
                                v413 = v264 - 1;
                                v434 = *(_OWORD *)(v264 - 1);
                                if ( **((_QWORD **)&v434 + 1) )
LABEL_333:
                                  (**((void (__fastcall ***)(_QWORD))&v434 + 1))(v434);
LABEL_334:
                                v266 = *(_QWORD *)(*((_QWORD *)&v434 + 1) + 8LL);
                                if ( v266 )
                                  sub_140001660(v434, v266, *(_QWORD *)(*((_QWORD *)&v434 + 1) + 16LL));
                                sub_140001660(v413, 24, 8);
                              }
                            }
                            else
                            {
                              v265 = sub_141485EF0(v443, v258);
                              if ( v265 )
                              {
                                if ( (unsigned int)(v265 & 3) - 2 >= 2 && (v265 & 3) != 0 )
                                {
                                  v413 = v265 - 1;
                                  v434 = *(_OWORD *)(v265 - 1);
                                  if ( **((_QWORD **)&v434 + 1) )
                                    goto LABEL_333;
                                  goto LABEL_334;
                                }
                              }
                              else
                              {
                                v394 += v241 == 0;
                              }
                            }
                            if ( *(_QWORD *)v382 )
                              sub_140001660(v436, *(_QWORD *)v382, 1);
                            if ( v388.m128i_i64[0] )
                              sub_140001660(v443, v388.m128i_i64[0], 1);
                            goto LABEL_265;
                          }
                          v252 = v250 + 3;
                        }
                        else
                        {
                          v254 = v250 + 2;
                          if ( v252 == v249 )
                            v254 = v252;
                          v252 = &v254[v254 != v249];
                          if ( (unsigned __int8)v253 >= 0xF0u )
                            v252 += v252 != v249;
                        }
                      }
                      v250 = v252;
                      if ( v252 == v249 )
                        goto LABEL_302;
                    }
                  }
                  v237 = v422;
                }
                v418 = v394;
                sub_1407635A0(&v427, v433, v431);
                v267 = v428;
                if ( v428 )
                {
                  sub_1403118F0(&v414, v427.m128i_i64[1], v427.m128i_i64[1] + 32 * v428);
                  v421.m256i_i64[0] = 0;
                  *(_OWORD *)&v421.m256i_u64[1] = 8u;
                  nullsub_1(v268);
                  v269 = sub_140001650(24, 8);
                  if ( !v269 )
                    sub_1416C2D31(8, 24);
                  v271 = (_QWORD *)v269;
                  nullsub_1(v270);
                  v272 = sub_140001650(19, 1);
                  if ( !v272 )
                  {
                    v444 = v271;
                    sub_1416C2D4B(1, 19);
                  }
                  *(__m128i *)v272 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
                  *(_DWORD *)(v272 + 15) = 1852795252;
                  *v271 = 19;
                  v271[1] = v272;
                  v271[2] = 19;
                  v425.m128i_i64[0] = 1;
                  v425.m128i_i64[1] = (__int64)v271;
                  v426 = 1;
                  nullsub_1(v273);
                  v443 = (__m128i *)sub_140001650(24, 8);
                  if ( !v443 )
                    sub_1416C2D31(8, 24);
                  v380.m128i_i64[0] = v267;
                  v274 = v414.m128i_i64[1];
                  sub_140440300((unsigned int)v382, v414.m128i_i32[2], v415, (unsigned int)&unk_141789F28, 2);
                  *(_QWORD *)&v396[16] = *(_QWORD *)&v382[16];
                  *(__m128i *)v396 = _mm_loadu_si128((const __m128i *)v382);
                  *(_QWORD *)v382 = &v380;
                  *(_QWORD *)&v382[8] = sub_1414AC520;
                  *(_QWORD *)&v382[16] = v396;
                  *(_QWORD *)&v382[24] = sub_1400015F0;
                  sub_14149C0F0(&v388, &unk_14178D015, v382);
                  v275 = v412;
                  v436 = (__m128i *)v274;
                  if ( *(_QWORD *)v396 )
                    sub_140001660(*(_QWORD *)&v396[8], *(_QWORD *)v396, 1);
                  v276 = v443;
                  v443[1].m128i_i64[0] = v389;
                  *v276 = v388;
                  v277 = _mm_loadu_si128((const __m128i *)&v421);
                  *(__m128i *)v382 = v277;
                  *(_QWORD *)&v382[16] = v421.m256i_i64[2];
                  *(__m128i *)&v382[24] = _mm_loadu_si128(&v425);
                  *(_QWORD *)&v382[40] = v426;
                  v278 = (__int64)v444;
                  *(_OWORD *)(v444 + 5) = *(_OWORD *)&v382[32];
                  *(_OWORD *)(v278 + 24) = *(_OWORD *)&v382[16];
                  *(__m128i *)(v278 + 8) = v277;
                  *(_QWORD *)(v278 + 56) = 1;
                  *(_QWORD *)(v278 + 64) = v276;
                  *(_QWORD *)(v278 + 72) = 1;
                  *(_QWORD *)v278 = -1;
                  sub_140334760(&v414);
                  if ( v414.m128i_i64[0] )
                    sub_140001660(v436, 24 * v414.m128i_i64[0], 8);
                }
                else
                {
                  v443 = (__m128i *)sub_1407198C0();
                  nullsub_1(v345);
                  v346 = sub_140001650(19, 1);
                  if ( !v346 )
                    sub_1416C2D4B(1, 19);
                  *(__m128i *)v346 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
                  *(_DWORD *)(v346 + 15) = 1852795252;
                  v347 = (__int64)v443;
                  v443->m128i_i64[0] = 19;
                  *(_QWORD *)(v347 + 8) = v346;
                  *(_QWORD *)(v347 + 16) = 19;
                  v425.m128i_i64[0] = 1;
                  v425.m128i_i64[1] = v347;
                  v426 = 1;
                  v388.m128i_i64[0] = 0;
                  v388.m128i_i64[1] = 8;
                  *(_QWORD *)&v389 = 0;
                  v443 = (__m128i *)sub_1407198C0();
                  *(_QWORD *)v382 = &v418;
                  *(_QWORD *)&v382[8] = sub_1414AC520;
                  sub_14149C0F0(v396, &unk_14178CFBE, v382);
                  v348 = v443;
                  v443[1].m128i_i64[0] = *(_QWORD *)&v396[16];
                  *v348 = *(__m128i *)v396;
                  v349 = _mm_loadu_si128(&v425);
                  *(__m128i *)v382 = v349;
                  *(_QWORD *)&v382[16] = v426;
                  *(__m128i *)&v382[24] = _mm_loadu_si128(&v388);
                  *(_QWORD *)&v382[40] = v389;
                  v350 = (__int64)v444;
                  *(_OWORD *)(v444 + 5) = *(_OWORD *)&v382[32];
                  *(_OWORD *)(v350 + 24) = *(_OWORD *)&v382[16];
                  *(__m128i *)(v350 + 8) = v349;
                  *(_QWORD *)(v350 + 56) = 1;
                  *(_QWORD *)(v350 + 64) = v348;
                  *(_QWORD *)(v350 + 72) = 1;
                  *(_QWORD *)v350 = -1;
                  v275 = v412;
                }
                sub_140334B70(&v427);
                if ( v427.m128i_i64[0] )
                  sub_140001660(v427.m128i_i64[1], 32 * v427.m128i_i64[0], 8);
                if ( v377.m256i_i64[0] )
                  sub_140001660(m128i_i64, v377.m256i_i64[0], 1);
                sub_140334B70(&v405);
                if ( v405.m128i_i64[0] )
                  sub_140001660(v395, 32 * v405.m128i_i64[0], 8);
                if ( v407.m128i_i64[0] )
                  sub_140001660(v429, v407.m128i_i64[0], 1);
                if ( v275 )
                {
                  v163 = v387;
                  v162 = (__int64)v275;
                  goto LABEL_174;
                }
LABEL_175:
                if ( v416.m128i_i64[0] )
                  sub_140001660(v435, v416.m128i_i64[0], 1);
                return (__int64)v444;
              }
              v421.m256i_i64[0] = v114;
              v425.m128i_i64[0] = 0;
              v425.m128i_i64[1] = 8;
              v426 = 0;
              nullsub_1(v115);
              v116 = sub_140001650(24, 8);
              if ( !v116 )
                sub_1416C2D31(8, 24);
              v118 = (_QWORD *)v116;
              nullsub_1(v117);
              v119 = sub_140001650(19, 1);
              if ( !v119 )
              {
                v444 = v118;
                sub_1416C2D4B(1, 19);
              }
              *(__m128i *)v119 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
              *(_DWORD *)(v119 + 15) = 1852795252;
              *v118 = 19;
              v118[1] = v119;
              v118[2] = 19;
              v388.m128i_i64[0] = 1;
              v388.m128i_i64[1] = (__int64)v118;
              *(_QWORD *)&v389 = 1;
              nullsub_1(v120);
              v443 = (__m128i *)sub_140001650(24, 8);
              if ( !v443 )
                sub_1416C2D31(8, 24);
              *(_QWORD *)v382 = &v421;
              *(_QWORD *)&v382[8] = sub_141490720;
              sub_14149C0F0(v396, &unk_14178CFA0, v382);
              v121 = v443;
              v443[1].m128i_i64[0] = *(_QWORD *)&v396[16];
              *v121 = *(__m128i *)v396;
              v122 = _mm_loadu_si128(&v425);
              *(__m128i *)v382 = v122;
              *(_QWORD *)&v382[16] = v426;
              *(__m128i *)&v382[24] = _mm_loadu_si128(&v388);
              *(_QWORD *)&v382[40] = v389;
              v123 = (__int64)v444;
              *(_OWORD *)(v444 + 5) = *(_OWORD *)&v382[32];
              *(_OWORD *)(v123 + 24) = *(_OWORD *)&v382[16];
              *(__m128i *)(v123 + 8) = v122;
              *(_QWORD *)(v123 + 56) = 1;
              *(_QWORD *)(v123 + 64) = v121;
              *(_QWORD *)(v123 + 72) = 1;
              *(_QWORD *)v123 = -1;
              sub_1401DD260(v421.m256i_i64[0]);
              if ( v377.m256i_i64[0] )
                sub_140001660(m128i_i64, v377.m256i_i64[0], 1);
            }
            else
            {
              nullsub_1(v112);
              v215 = sub_140001650(24, 8);
              if ( !v215 )
                sub_1416C2D31(8, 24);
              v217 = (_QWORD *)v215;
              nullsub_1(v216);
              v218 = sub_140001650(19, 1);
              if ( !v218 )
              {
                v444 = v217;
                sub_1416C2D4B(1, 19);
              }
              *(__m128i *)v218 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
              *(_DWORD *)(v218 + 15) = 1852795252;
              *v217 = 19;
              v217[1] = v218;
              v217[2] = 19;
              v388.m128i_i64[0] = 1;
              v388.m128i_i64[1] = (__int64)v217;
              *(_QWORD *)&v389 = 1;
              *(_QWORD *)v396 = 0;
              *(_QWORD *)&v396[8] = 8;
              *(_QWORD *)&v396[16] = 0;
              nullsub_1(v219);
              v220 = sub_140001650(24, 8);
              if ( !v220 )
                sub_1416C2D31(8, 24);
              v222 = (_QWORD *)v220;
              nullsub_1(v221);
              v223 = (_QWORD *)sub_140001650(15, 1);
              if ( !v223 )
              {
                v444 = v222;
                sub_1416C2D4B(1, 15);
              }
              *(_QWORD *)((char *)v223 + 7) = 0x9995E78BAEE693BAuLL;
              *v223 = 0xBAE5A797E6A097E6uLL;
              *v222 = 15;
              v222[1] = v223;
              v222[2] = 15;
              *(_QWORD *)&v382[16] = v389;
              v224 = _mm_loadu_si128(&v388);
              *(__m128i *)v382 = v224;
              *(__m128i *)&v382[24] = _mm_loadu_si128((const __m128i *)v396);
              *(_QWORD *)&v382[40] = *(_QWORD *)&v396[16];
              v225 = (__int64)v444;
              *(_OWORD *)(v444 + 5) = *(_OWORD *)&v382[32];
              *(_OWORD *)(v225 + 24) = *(_OWORD *)&v382[16];
              *(__m128i *)(v225 + 8) = v224;
              *(_QWORD *)(v225 + 56) = 1;
              *(_QWORD *)(v225 + 64) = v222;
              *(_QWORD *)(v225 + 72) = 1;
              *(_QWORD *)v225 = -1;
            }
            sub_140334B70(&v405);
            if ( v405.m128i_i64[0] )
              sub_140001660(v405.m128i_i64[1], 32 * v405.m128i_i64[0], 8);
LABEL_169:
            if ( v407.m128i_i64[0] )
              sub_140001660(v429, v407.m128i_i64[0], 1);
            v162 = v423.m256i_i64[0];
            if ( v423.m256i_i64[0] != -1 && v423.m256i_i64[0] )
            {
              v163 = v423.m256i_i64[1];
LABEL_174:
              sub_140001660(v163, v162, 1);
              goto LABEL_175;
            }
            goto LABEL_175;
          }
        }
        v388.m128i_i64[0] = 0;
        v388.m128i_i64[1] = 8;
        *(_QWORD *)&v389 = 0;
        nullsub_1(v109);
        v152 = sub_140001650(24, 8);
        if ( !v152 )
          sub_1416C2D31(8, 24);
        v154 = (_QWORD *)v152;
        nullsub_1(v153);
        v155 = sub_140001650(19, 1);
        if ( !v155 )
        {
          v444 = v154;
          sub_1416C2D4B(1, 19);
        }
        *(__m128i *)v155 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
        *(_DWORD *)(v155 + 15) = 1852795252;
        *v154 = 19;
        v154[1] = v155;
        v154[2] = 19;
        *(_QWORD *)v396 = 1;
        *(_QWORD *)&v396[8] = v154;
        *(_QWORD *)&v396[16] = 1;
        nullsub_1(v156);
        v157 = sub_140001650(24, 8);
        if ( !v157 )
          sub_1416C2D31(8, 24);
        v131 = (_QWORD *)v157;
        nullsub_1(v158);
        v159 = (_OWORD *)sub_140001650(108, 1);
        if ( !v159 )
        {
          v444 = v131;
          sub_1416C2D4B(1, 108);
        }
        *(_OWORD *)((char *)v159 + 92) = *(__int128 *)((char *)&xmmword_14178D10B + 12);
        v159[5] = xmmword_14178D10B;
        v159[4] = xmmword_14178D0FB;
        v159[3] = xmmword_14178D0EB;
        v159[2] = xmmword_14178D0DB;
        v159[1] = xmmword_14178D0CB;
        *v159 = xmmword_14178D0BB;
        *v131 = 108;
        v131[1] = v159;
        v131[2] = 108;
      }
      else
      {
        nullsub_1(v109);
        v124 = sub_140001650(24, 8);
        if ( !v124 )
          sub_1416C2D31(8, 24);
        v126 = (_QWORD *)v124;
        nullsub_1(v125);
        v127 = sub_140001650(19, 1);
        if ( !v127 )
        {
          v444 = v126;
          sub_1416C2D4B(1, 19);
        }
        *(__m128i *)v127 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
        *(_DWORD *)(v127 + 15) = 1852795252;
        *v126 = 19;
        v126[1] = v127;
        v126[2] = 19;
        v388.m128i_i64[0] = 1;
        v388.m128i_i64[1] = (__int64)v126;
        *(_QWORD *)&v389 = 1;
        *(_QWORD *)v396 = 0;
        *(_QWORD *)&v396[8] = 8;
        *(_QWORD *)&v396[16] = 0;
        nullsub_1(v128);
        v129 = sub_140001650(24, 8);
        if ( !v129 )
          sub_1416C2D31(8, 24);
        v131 = (_QWORD *)v129;
        nullsub_1(v130);
        v132 = (_OWORD *)sub_140001650(45, 1);
        if ( !v132 )
        {
          v444 = v131;
          sub_1416C2D4B(1, 45);
        }
        *(_OWORD *)((char *)v132 + 29) = *(__int128 *)((char *)&xmmword_14178CF73 + 13);
        v132[1] = xmmword_14178CF73;
        *v132 = xmmword_14178CF63;
        *v131 = 45;
        v131[1] = v132;
        v131[2] = 45;
      }
      *(_QWORD *)&v382[16] = v389;
      v160 = _mm_loadu_si128(&v388);
      *(__m128i *)v382 = v160;
      *(_QWORD *)&v382[40] = *(_QWORD *)&v396[16];
      *(__m128i *)&v382[24] = _mm_loadu_si128((const __m128i *)v396);
      v161 = (__int64)v444;
      *(_OWORD *)(v444 + 5) = *(_OWORD *)&v382[32];
      *(_OWORD *)(v161 + 24) = *(_OWORD *)&v382[16];
      *(__m128i *)(v161 + 8) = v160;
      *(_QWORD *)(v161 + 56) = 1;
      *(_QWORD *)(v161 + 64) = v131;
      *(_QWORD *)(v161 + 72) = 1;
      *(_QWORD *)v161 = -1;
      goto LABEL_169;
    case 20LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1417866E0),
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(a4 + 16)), (__m128i)xmmword_1417866D0))) != 0xFFFF )
        goto LABEL_53;
      sub_14076B250((_DWORD)v444, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80), a3, a6, *(_QWORD *)(a7 + 40));
      return (__int64)v444;
    case 21LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1417865C0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 5)), (__m128i)xmmword_1417865B0))) != 0xFFFF )
        goto LABEL_53;
      sub_14076D1E0((_DWORD)v444, a2, *(unsigned __int8 *)(a3 + 292), a6, *(_QWORD *)(a7 + 40));
      return (__int64)v444;
    case 22LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1417865E0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 6)), (__m128i)xmmword_1417865D0))) == 0xFFFF )
      {
        fix_takeover_backup_orphan(v444, a2, *(unsigned __int8 *)(a3 + 292), a6);
        return (__int64)v444;
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786600),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 6)), (__m128i)xmmword_1417865F0))) != 0xFFFF )
          goto LABEL_53;
        sub_14077A2B0(v444, a2, v12, a6);
        return (__int64)v444;
      }
    case 23LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786620),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_141786610))) == 0xFFFF )
      {
        sub_14077E260((_DWORD)v444, a2, a3, a6, *(_QWORD *)(a7 + 40));
        return (__int64)v444;
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786640),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_141786630))) == 0xFFFF )
      {
        sub_140783940(v444, a2, v12, a6);
        return (__int64)v444;
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786660),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_141786650))) == 0xFFFF )
      {
        sub_140781D30(v444, a2, *(unsigned __int8 *)(a3 + 292), a6);
        return (__int64)v444;
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786680),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_141786670))) != 0xFFFF )
        {
LABEL_53:
          *(_QWORD *)v396 = v386;
          *(_QWORD *)&v396[8] = sub_14041F680;
          v13 = &unk_14178FCDA;
          goto LABEL_54;
        }
        fix_project_state_integrity(v444, a2, v12, a6);
        return (__int64)v444;
      }
    case 24LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1417864E0),
               _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(a4 + 16)), (__m128i)xmmword_1417864D0))) != 0xFFFF )
        goto LABEL_53;
      sub_140712830(v382);
      if ( *(_QWORD *)&v382[16] )
      {
        sub_140334B70(v382);
        if ( *(_QWORD *)v382 )
          sub_140001660(*(_QWORD *)&v382[8], 32LL * *(_QWORD *)v382, 8);
        v51 = *(_QWORD *)(a3 + 8);
        v52 = v51 + 232LL * *(_QWORD *)(a3 + 16);
        *(_QWORD *)&v53 = sub_1407BF4A0(&off_141786738);
        *(_OWORD *)v382 = off_141786750;
        *(_OWORD *)&v382[16] = *(&off_141786750 + 1);
        *(_OWORD *)&v382[32] = v53;
        sub_140999720(v382, v51, v52);
        si128 = _mm_load_si128((const __m128i *)v382);
        v55 = _mm_load_si128((const __m128i *)&v382[16]);
        v424 = *(_OWORD *)&v382[32];
        *(__m128i *)&v423.m256i_u64[2] = v55;
        *(__m128i *)v423.m256i_i8 = si128;
        v56 = *(_BYTE *)(a3 + 292);
        v57 = &v407;
        sub_1407883E0((unsigned int)&v407, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80), (unsigned int)&v423, v56);
        collect_diagnostic_main_threads((__int64)v382);
        v58 = *(_QWORD *)v382;
        *(_OWORD *)v396 = *(_OWORD *)&v382[8];
        *(_QWORD *)&v396[16] = *(_QWORD *)&v382[24];
        if ( *(_QWORD *)v382 == -1 )
        {
          v427 = _mm_load_si128((const __m128i *)v396);
          v428 = *(_QWORD *)&v396[16];
          v137 = sub_1407BF4A0(&off_141786738);
          LOBYTE(v434) = v56;
          v377 = off_141786750;
          v378 = v137;
          v379 = v138;
          *(_QWORD *)&v139 = sub_1407BF4A0(&off_141786738);
          v389 = *(&off_141786750 + 1);
          v388 = (__m128i)off_141786750;
          v390 = v139;
          v141 = v427.m128i_i64[1] + 112 * v428;
          *((_QWORD *)&v434 + 1) = v427.m128i_i64[1];
          v443 = (__m128i *)v427.m128i_i64[1];
          while ( 1 )
          {
            v142 = v443;
            if ( v443 == (__m128i *)v141 )
              break;
            v443 += 7;
            if ( v142[5].m128i_i64[0] != -1 )
            {
              v143 = v142[6].m128i_i64[0];
              if ( v143 < 0 )
              {
                v146 = 0;
LABEL_162:
                sub_1416C2D4B(v146, v143);
              }
              if ( v143 )
              {
                v436 = (__m128i *)v141;
                v144 = v57;
                v145 = v142[5].m128i_i64[1];
                nullsub_1(v140);
                v146 = 1;
                v147 = sub_140001650(v143, 1);
                if ( !v147 )
                  goto LABEL_162;
                v148 = v147;
                sub_141684120(v147, v145, v143);
                v57 = v144;
                v141 = (__int64)v436;
              }
              else
              {
                v148 = 1;
              }
              v149 = v142[6].m128i_i8[8];
              *(_QWORD *)v382 = v143;
              *(_QWORD *)&v382[8] = v148;
              *(_QWORD *)&v382[16] = v143;
              v382[24] = v149;
              if ( !(unsigned __int8)sub_140474DC0(&v377, v382) )
              {
                v150 = v142[5].m128i_i64[1];
                v151 = v142[6].m128i_i64[0];
                sub_141486710(v382, v150, v151);
                if ( *(_DWORD *)v382 == 2 )
                {
                  sub_1401DD260(*(_QWORD *)&v382[8]);
                }
                else
                {
                  sub_140443170((unsigned int)v382, v150, v151, (unsigned int)aOpenai_0, 6, (__int64)v57);
                  if ( *(_DWORD *)v382 == -1 )
                  {
                    if ( v382[8] )
                    {
                      sub_14149C500(v382, &v142[2]);
                      sub_140474440(&v388, v382);
                    }
                  }
                  else
                  {
                    sub_1406CDA20(v382);
                  }
                }
              }
            }
          }
          check_rollout_orphan_providers(v382, a2, &v423, (unsigned __int8)v434);
          if ( *(_QWORD *)&v382[40] == 2 && **(_WORD **)&v382[32] == 27503 )
          {
            nullsub_1(v279);
            v443 = (__m128i *)sub_140001650(24, 8);
            if ( !v443 )
              sub_1416C2D31(8, 24);
            nullsub_1(v364);
            v365 = (__m128i *)sub_140001650(24, 1);
            if ( !v365 )
              sub_1416C2D4B(1, 24);
            *v365 = _mm_loadu_si128((const __m128i *)aRolloutOrphanP);
            v365[1].m128i_i64[0] = 0x7372656469766F72LL;
            v366 = (__int64)v443;
            v443->m128i_i64[0] = 24;
            *(_QWORD *)(v366 + 8) = v365;
            *(_QWORD *)(v366 + 16) = 24;
            v421.m256i_i64[0] = 1;
            v421.m256i_i64[1] = v366;
            v421.m256i_i64[2] = 1;
            v425.m128i_i64[0] = 0;
            v425.m128i_i64[1] = 8;
            v426 = 0;
            nullsub_1(v366);
            v443 = (__m128i *)sub_140001650(24, 8);
            if ( !v443 )
              sub_1416C2D31(8, 24);
            v405.m128i_i64[0] = *((_QWORD *)&v389 + 1);
            *(_QWORD *)v396 = &v405;
            *(_QWORD *)&v396[8] = sub_1414AC520;
            sub_14149C0F0(&v416, &unk_14178E549, v396);
            v367 = v443;
            v443[1].m128i_i64[0] = v417;
            *v367 = v416;
            v368 = _mm_loadu_si128((const __m128i *)&v421);
            *(__m128i *)v396 = v368;
            *(_QWORD *)&v396[16] = v421.m256i_i64[2];
            *(__m128i *)&v396[24] = _mm_loadu_si128(&v425);
            *(_QWORD *)&v396[40] = v426;
            v369 = (__int64)v444;
            *(_OWORD *)(v444 + 5) = *(_OWORD *)&v396[32];
            *(_OWORD *)(v369 + 24) = *(_OWORD *)&v396[16];
            *(__m128i *)(v369 + 8) = v368;
            *(_QWORD *)(v369 + 56) = 1;
            *(_QWORD *)(v369 + 64) = v367;
            *(_QWORD *)(v369 + 72) = 1;
            *(_QWORD *)v369 = -1;
            sub_1406CE150(v382);
            sub_14067FFB0(&v388);
            sub_14067FEC0(&v377);
            sub_140335260(&v427);
            if ( v427.m128i_i64[0] )
              sub_140001660(*((_QWORD *)&v434 + 1), 112 * v427.m128i_i64[0], 8);
          }
          else
          {
            v421.m256i_i64[0] = 0;
            *(_OWORD *)&v421.m256i_u64[1] = 8u;
            nullsub_1(v279);
            v280 = sub_140001650(24, 8);
            if ( !v280 )
              sub_1416C2D31(8, 24);
            v282 = (_QWORD *)v280;
            nullsub_1(v281);
            v283 = (__m128i *)sub_140001650(24, 1);
            if ( !v283 )
            {
              v444 = v282;
              sub_1416C2D4B(1, 24);
            }
            *v283 = _mm_loadu_si128((const __m128i *)aRolloutOrphanP);
            v283[1].m128i_i64[0] = 0x7372656469766F72LL;
            *v282 = 24;
            v282[1] = v283;
            v282[2] = 24;
            v425.m128i_i64[0] = 1;
            v425.m128i_i64[1] = (__int64)v282;
            v426 = 1;
            nullsub_1(0x7372656469766F72LL);
            v443 = (__m128i *)sub_140001650(24, 8);
            if ( !v443 )
              sub_1416C2D31(8, 24);
            *(_QWORD *)v396 = &v382[48];
            *(_QWORD *)&v396[8] = sub_1400015F0;
            sub_14149C0F0(&v414, &unk_14178E586, v396);
            v284 = v443;
            v443[1].m128i_i64[0] = v415;
            *v284 = v414;
            v285 = _mm_loadu_si128((const __m128i *)&v421);
            *(__m128i *)v396 = v285;
            *(_QWORD *)&v396[16] = v421.m256i_i64[2];
            *(__m128i *)&v396[24] = _mm_loadu_si128(&v425);
            *(_QWORD *)&v396[40] = v426;
            v286 = (__int64)v444;
            *(_OWORD *)(v444 + 5) = *(_OWORD *)&v396[32];
            *(_OWORD *)(v286 + 24) = *(_OWORD *)&v396[16];
            *(__m128i *)(v286 + 8) = v285;
            *(_QWORD *)(v286 + 56) = 1;
            *(_QWORD *)(v286 + 64) = v284;
            *(_QWORD *)(v286 + 72) = 1;
            *(_QWORD *)v286 = -1;
            sub_1406CE150(v382);
            sub_14067FFB0(&v388);
            sub_14067FEC0(&v377);
            sub_140335260(&v427);
            if ( v427.m128i_i64[0] )
              sub_140001660(*((_QWORD *)&v434 + 1), 112 * v427.m128i_i64[0], 8);
          }
        }
        else
        {
          v59 = *(_OWORD *)&v382[32];
          v60 = _mm_loadu_si128((const __m128i *)&v382[48]);
          v61 = *(_OWORD *)&v382[64];
          v62 = (__int64)v444;
          *((__m128i *)v444 + 5) = v383[0];
          *(_OWORD *)(v62 + 64) = v61;
          *(__m128i *)(v62 + 48) = v60;
          *(_OWORD *)(v62 + 32) = v59;
          *(_QWORD *)(v62 + 24) = *(_QWORD *)&v396[16];
          *(__m128i *)(v62 + 8) = _mm_load_si128((const __m128i *)v396);
          *(_QWORD *)v62 = v58;
        }
        sub_14067FFB0(&v407);
        sub_14067FFB0(&v423);
        return (__int64)v444;
      }
      sub_140334B70(v382);
      if ( *(_QWORD *)v382 )
        sub_140001660(*(_QWORD *)&v382[8], 32LL * *(_QWORD *)v382, 8);
      nullsub_1(v83);
      v84 = sub_140001650(24, 8);
      if ( !v84 )
        goto LABEL_525;
      v86 = (_QWORD *)v84;
      nullsub_1(v85);
      v87 = (__m128i *)sub_140001650(24, 1);
      if ( !v87 )
      {
        v444 = v86;
        sub_1416C2D4B(1, 24);
      }
      *v87 = _mm_loadu_si128((const __m128i *)aRolloutOrphanP);
      v87[1].m128i_i64[0] = 0x7372656469766F72LL;
      *v86 = 24;
      v86[1] = v87;
      v86[2] = 24;
      v388.m128i_i64[0] = 1;
      v388.m128i_i64[1] = (__int64)v86;
      *(_QWORD *)&v389 = 1;
      *(_QWORD *)v396 = 0;
      *(_QWORD *)&v396[8] = 8;
      *(_QWORD *)&v396[16] = 0;
      nullsub_1(0x7372656469766F72LL);
      v88 = sub_140001650(24, 8);
      if ( !v88 )
        sub_1416C2D31(8, 24);
      v24 = (_QWORD *)v88;
      nullsub_1(v89);
      v82 = sub_140001650(33, 1);
      if ( !v82 )
      {
        v444 = v24;
        sub_1416C2D4B(1, 33);
      }
      goto LABEL_100;
    case 26LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1417865A0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 10)), (__m128i)xmmword_141786590))) != 0xFFFF )
        goto LABEL_53;
      sub_14078A3B0(v444, a2, *(unsigned __int8 *)(a3 + 292), a6);
      return (__int64)v444;
    case 27LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786540),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 11)), (__m128i)xmmword_141786530))) != 0xFFFF )
        goto LABEL_53;
      fix_thread_provider_consistency((__int64)v444, a2, *(unsigned __int8 *)(a3 + 292));
      return (__int64)v444;
    case 28LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786500),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 12)), (__m128i)xmmword_1417864F0))) != 0xFFFF )
        goto LABEL_53;
      sub_140712830(v382);
      if ( !*(_QWORD *)&v382[16] )
      {
        sub_140334B70(v382);
        if ( *(_QWORD *)v382 )
          sub_140001660(*(_QWORD *)&v382[8], 32LL * *(_QWORD *)v382, 8);
        nullsub_1(v74);
        v75 = sub_140001650(24, 8);
        if ( v75 )
        {
          v77 = (_QWORD *)v75;
          nullsub_1(v76);
          v78 = sub_140001650(28, 1);
          if ( !v78 )
          {
            v444 = v77;
            sub_1416C2D4B(1, 28);
          }
          *(_OWORD *)(v78 + 12) = *(__int128 *)((char *)&xmmword_14178D8E7 + 12);
          *(__m128i *)v78 = _mm_loadu_si128((const __m128i *)&xmmword_14178D8E7);
          *v77 = 28;
          v77[1] = v78;
          v77[2] = 28;
          v388.m128i_i64[0] = 1;
          v388.m128i_i64[1] = (__int64)v77;
          *(_QWORD *)&v389 = 1;
          *(_QWORD *)v396 = 0;
          *(_QWORD *)&v396[8] = 8;
          *(_QWORD *)&v396[16] = 0;
          nullsub_1(v79);
          v80 = sub_140001650(24, 8);
          if ( !v80 )
            sub_1416C2D31(8, 24);
          v24 = (_QWORD *)v80;
          nullsub_1(v81);
          v82 = sub_140001650(33, 1);
          if ( !v82 )
          {
            v444 = v24;
            sub_1416C2D4B(1, 33);
          }
LABEL_100:
          *(_OWORD *)(v82 + 16) = xmmword_14178CD9E;
          *(_OWORD *)v82 = xmmword_14178CD8E;
          *(_BYTE *)(v82 + 32) = -115;
          *v24 = 33;
          v24[1] = v82;
          v24[2] = 33;
LABEL_101:
          *(_QWORD *)&v382[16] = v389;
          v90 = _mm_loadu_si128(&v388);
          *(__m128i *)v382 = v90;
          *(_QWORD *)&v382[40] = *(_QWORD *)&v396[16];
          *(__m128i *)&v382[24] = _mm_loadu_si128((const __m128i *)v396);
          v36 = (__int64)v444;
          *(_OWORD *)(v444 + 5) = *(_OWORD *)&v382[32];
          *(_OWORD *)(v36 + 24) = *(_OWORD *)&v382[16];
          *(__m128i *)(v36 + 8) = v90;
          *(_QWORD *)(v36 + 56) = 1;
          *(_QWORD *)(v36 + 64) = v24;
          *(_QWORD *)(v36 + 72) = 1;
          *(_QWORD *)v36 = -1;
          return v36;
        }
        goto LABEL_525;
      }
      sub_140334B70(v382);
      if ( *(_QWORD *)v382 )
        sub_140001660(*(_QWORD *)&v382[8], 32LL * *(_QWORD *)v382, 8);
      v28 = v382;
      collect_diagnostic_main_threads((__int64)v382);
      v29 = *(_QWORD *)v382;
      *(_OWORD *)v396 = *(_OWORD *)&v382[8];
      *(_QWORD *)&v396[16] = *(_QWORD *)&v382[24];
      if ( *(_QWORD *)v382 != -1 )
      {
        v30 = *(_OWORD *)&v382[32];
        v31 = _mm_loadu_si128((const __m128i *)&v382[48]);
        v32 = *(_OWORD *)&v382[64];
        v33 = (__int64)v444;
        *((__m128i *)v444 + 5) = v383[0];
        *(_OWORD *)(v33 + 64) = v32;
        *(__m128i *)(v33 + 48) = v31;
        *(_OWORD *)(v33 + 32) = v30;
        *(_QWORD *)(v33 + 24) = *(_QWORD *)&v396[16];
        *(__m128i *)(v33 + 8) = _mm_load_si128((const __m128i *)v396);
        *(_QWORD *)v33 = v29;
        return (__int64)v444;
      }
      v403 = _mm_load_si128((const __m128i *)v396);
      v404 = *(_QWORD *)&v396[16];
      sub_1404A69E0(&v407, a2);
      v134 = v407.m128i_i64[0];
      if ( v407.m128i_i64[0] == -1 )
      {
        v377.m256i_i64[0] = 0;
        v377.m256i_i64[2] = 0;
        nullsub_1(v133);
        v175 = (_DWORD *)sub_140001650(4, 1);
        if ( !v175 )
          sub_1416C2D4B(1, 4);
        *v175 = 1954047348;
        v388.m128i_i64[0] = 4;
        v388.m128i_i64[1] = (__int64)v175;
        *(_QWORD *)&v389 = 4;
        v441 = 1;
        sub_140B56640(v382, &off_14178BE98);
        if ( v382[0] == 0xFF )
        {
          *(_QWORD *)v396 = *(_QWORD *)&v382[8];
          sub_1416C3060(
            (unsigned int)aCalledResultUn_10,
            43,
            (unsigned int)v396,
            (unsigned int)&off_141789020,
            (__int64)&off_14178BEA8);
        }
        v176 = _mm_loadu_si128((const __m128i *)v382);
        *(__m128i *)&v396[16] = _mm_loadu_si128((const __m128i *)&v382[16]);
        *(__m128i *)v396 = v176;
        v441 = 0;
        sub_140307860(v382, &v377, &v388, v396);
        if ( v382[0] != 0xFF )
          sub_1400104F0(v382);
        *(_OWORD *)&v382[7] = *(_OWORD *)v377.m256i_i8;
        *(_QWORD *)&v382[23] = v377.m256i_i64[2];
        *(_OWORD *)v396 = *(_OWORD *)v382;
        *(_OWORD *)&v396[15] = *(_OWORD *)&v377.m256i_u64[1];
      }
      else
      {
        v436 = (__m128i *)v407.m128i_i64[1];
        v443 = (__m128i *)v407.m128i_i64[0];
        v377.m256i_i64[0] = 0;
        v377.m256i_i64[2] = 0;
        nullsub_1(v133);
        v135 = (_DWORD *)sub_140001650(4, 1);
        if ( !v135 )
          sub_1416C2D4B(1, 4);
        *v135 = 1954047348;
        v388.m128i_i64[0] = 4;
        v388.m128i_i64[1] = (__int64)v135;
        *(_QWORD *)&v389 = 4;
        v440 = 1;
        sub_140B56520(v382, &v407);
        if ( v382[0] == 0xFF )
        {
          *(_QWORD *)v396 = *(_QWORD *)&v382[8];
          sub_1416C3060(
            (unsigned int)aCalledResultUn_10,
            43,
            (unsigned int)v396,
            (unsigned int)&off_141789020,
            (__int64)&off_14178BEC0);
        }
        v136 = _mm_loadu_si128((const __m128i *)v382);
        *(__m128i *)&v396[16] = _mm_loadu_si128((const __m128i *)&v382[16]);
        *(__m128i *)v396 = v136;
        v440 = 0;
        sub_140307860(v382, &v377, &v388, v396);
        if ( v382[0] != 0xFF )
          sub_1400104F0(v382);
        *(_QWORD *)&v382[23] = v377.m256i_i64[2];
        *(_OWORD *)&v382[7] = *(_OWORD *)v377.m256i_i8;
        *(_OWORD *)v396 = *(_OWORD *)v382;
        *(_OWORD *)&v396[15] = *(_OWORD *)&v377.m256i_u64[1];
        if ( v443 )
          sub_140001660(v436, v443, 1);
      }
      v421.m256i_i8[0] = 5;
      *(__m128i *)&v421.m256i_i8[1] = _mm_load_si128((const __m128i *)v396);
      *(_OWORD *)&v421.m256i_u64[2] = *(_OWORD *)&v396[15];
      v177 = *(_QWORD *)(a2 + 776);
      v178 = *(_QWORD *)(a2 + 784);
      sub_141473FA0((unsigned int)&v425, v177, v178, (unsigned int)&unk_14178F1E1, 26);
      *((_QWORD *)&v434 + 1) = v178;
      *(_QWORD *)&v434 = v177;
      v179 = sub_1407BF4A0(&off_141786738);
      v408 = *(&off_141786750 + 1);
      v407 = _mm_loadu_si128((const __m128i *)&off_141786750);
      v409 = v179;
      v410 = v180;
      v401 = 0;
      v418 = 0;
      v419 = 8;
      v420 = 0;
      v181 = v403.m128i_i64[1];
      v443 = (__m128i *)v403.m128i_i64[1];
      v436 = (__m128i *)(v403.m128i_i64[1] + 112 * v404);
      while ( 1 )
      {
        v182 = v443;
        if ( v443 == v436 )
          break;
        v443 += 7;
        if ( v182[5].m128i_i64[0] != -1 )
        {
          v183 = v182[6].m128i_i64[0];
          if ( v183 < 0 )
          {
            v186 = 0;
LABEL_229:
            sub_1416C2D4B(v186, v183);
          }
          if ( v183 )
          {
            v422 = v134;
            v184 = v28;
            v185 = v182[5].m128i_i64[1];
            nullsub_1(v181);
            v186 = 1;
            v187 = sub_140001650(v183, 1);
            if ( !v187 )
              goto LABEL_229;
            v188 = v187;
            sub_141684120(v187, v185, v183);
            v28 = v184;
            v134 = v422;
          }
          else
          {
            v188 = 1;
          }
          v189 = v182[6].m128i_i8[8];
          *(_QWORD *)v382 = v183;
          *(_QWORD *)&v382[8] = v188;
          *(_QWORD *)&v382[16] = v183;
          v382[24] = v189;
          if ( !(unsigned __int8)sub_140474DC0(&v407, v28) )
          {
            v190 = v182[5].m128i_i64[1];
            v191 = v182[6].m128i_i64[0];
            sub_141486710(v28, v190, v191);
            if ( *(_DWORD *)v382 == 2 )
            {
              sub_1401DD260(*(_QWORD *)&v382[8]);
            }
            else
            {
              find_first_session_meta_line(v28);
              if ( *(_DWORD *)v382 == -1 )
              {
                if ( *(_QWORD *)&v382[8] != -1 )
                {
                  v435 = *(unsigned __int8 **)&v382[8];
                  v433 = *(_QWORD *)&v382[24];
                  v429 = *(_QWORD *)&v382[16];
                  if ( !(unsigned __int8)sub_14078EA80(*(_QWORD *)&v382[16], *(_QWORD *)&v382[24]) )
                    goto LABEL_210;
                  v382[0] = 1;
                  v192 = v425.m128i_i64[1];
                  v431 = v426;
                  v193 = sub_14147B9A0(v28, v425.m128i_i64[1], v426);
                  v422 = v134;
                  if ( v193
                    || (m128i_i64 = (__int64)v182[2].m128i_i64,
                        *(_QWORD *)v382 = v182 + 2,
                        *(_QWORD *)&v382[8] = sub_1400015F0,
                        sub_14149C0F0(v396, &unk_141788D7E, v28),
                        sub_14033DC20(v28, v192, v431, v396),
                        (v193 = sub_140690520(v28, v429, v433)) != 0) )
                  {
                    v388.m128i_i64[0] = v193;
                    if ( *(_QWORD *)off_141EC8D80 >= 2u )
                    {
                      *(_QWORD *)v396 = v182 + 2;
                      *(_QWORD *)&v396[8] = sub_1400015F0;
                      *(_QWORD *)&v396[16] = &v388;
                      *(_QWORD *)&v396[24] = sub_141490720;
                      *(_QWORD *)v382 = aCodexmateLibCo_29;
                      *(_QWORD *)&v382[8] = 44;
                      *(_QWORD *)&v382[16] = aCodexmateLibCo_29;
                      *(_QWORD *)&v382[24] = 44;
                      *(_QWORD *)&v382[32] = &off_14178F240;
                      sub_140985BA0(&unk_14178F1FB, v396, 2, v28);
                    }
                    sub_14149C500(v28, &v182[2]);
                    v194 = v420;
                    if ( v420 == v418 )
                      sub_141689AB0(&v418);
                    v195 = v419;
                    v196 = 3 * v194;
                    *(_QWORD *)(v419 + 8 * v196 + 16) = *(_QWORD *)&v382[16];
                    *(__m128i *)(v195 + 8 * v196) = _mm_loadu_si128((const __m128i *)v382);
                    v420 = v194 + 1;
                    sub_1401DD260(v388.m128i_i64[0]);
                    v134 = v422;
                    goto LABEL_210;
                  }
                  sub_140790450(v396, v429, v433, &v421);
                  if ( *(_DWORD *)v396 == -1 )
                  {
                    v431 = *(_QWORD *)&v396[8];
                    v376 = v433;
                    v433 = *(_QWORD *)&v396[16];
                    sub_1404B9880(
                      (unsigned int)v396,
                      v190,
                      v191,
                      *(_DWORD *)&v396[16],
                      *(__int64 *)&v396[24],
                      v429,
                      v376);
                    if ( *(_DWORD *)v396 == -1 )
                    {
                      ++v401;
                    }
                    else
                    {
                      v383[0] = v399;
                      *(_OWORD *)&v382[64] = v398;
                      v202 = _mm_loadu_si128((const __m128i *)v396);
                      v203 = _mm_loadu_si128((const __m128i *)&v396[16]);
                      *(_OWORD *)&v382[48] = v397;
                      *(_OWORD *)&v382[32] = *(_OWORD *)&v396[32];
                      *(__m128i *)&v382[16] = v203;
                      *(__m128i *)v382 = v202;
                      if ( *(_QWORD *)off_141EC8D80 >= 2u )
                      {
                        v377.m256i_i64[0] = m128i_i64;
                        v377.m256i_i64[1] = (__int64)sub_1400015F0;
                        v377.m256i_i64[2] = (__int64)v28;
                        v377.m256i_i64[3] = (__int64)sub_140B036A0;
                        v388.m128i_i64[0] = (__int64)aCodexmateLibCo_29;
                        v388.m128i_i64[1] = 44;
                        *(_QWORD *)&v389 = aCodexmateLibCo_29;
                        *((_QWORD *)&v389 + 1) = 44;
                        *(_QWORD *)&v390 = &off_14178F290;
                        sub_140985BA0(&unk_14178F258, &v377, 2, &v388);
                      }
                      sub_14149C500(&v388, m128i_i64);
                      sub_1403B1EC0(&v418, &v388);
                      sub_1406CDA20(v28);
                    }
                    if ( v431 )
                      sub_140001660(v433, v431, 1);
                    if ( v435 )
                      sub_140001660(v429, v435, 1);
                    v134 = v422;
                  }
                  else
                  {
                    v383[0] = v399;
                    *(_OWORD *)&v382[64] = v398;
                    v197 = _mm_loadu_si128((const __m128i *)v396);
                    v198 = _mm_loadu_si128((const __m128i *)&v396[16]);
                    *(_OWORD *)&v382[48] = v397;
                    *(_OWORD *)&v382[32] = *(_OWORD *)&v396[32];
                    *(__m128i *)&v382[16] = v198;
                    *(__m128i *)v382 = v197;
                    if ( *(_QWORD *)off_141EC8D80 >= 2u )
                    {
                      v377.m256i_i64[0] = m128i_i64;
                      v377.m256i_i64[1] = (__int64)sub_1400015F0;
                      v377.m256i_i64[2] = (__int64)v28;
                      v377.m256i_i64[3] = (__int64)sub_140B036A0;
                      v388.m128i_i64[0] = (__int64)aCodexmateLibCo_29;
                      v388.m128i_i64[1] = 44;
                      *(_QWORD *)&v389 = aCodexmateLibCo_29;
                      *((_QWORD *)&v389 + 1) = 44;
                      *(_QWORD *)&v390 = &off_14178F2E0;
                      sub_140985BA0(&unk_14178F2A8, &v377, 2, &v388);
                    }
                    sub_14149C500(&v388, m128i_i64);
                    v199 = v420;
                    if ( v420 == v418 )
                      sub_141689AB0(&v418);
                    v200 = v419;
                    v201 = 3 * v199;
                    *(_QWORD *)(v419 + 8 * v201 + 16) = v389;
                    *(__m128i *)(v200 + 8 * v201) = _mm_loadu_si128(&v388);
                    v420 = v199 + 1;
                    sub_1406CDA20(v28);
                    v134 = v422;
LABEL_210:
                    if ( v435 )
                      sub_140001660(v429, v435, 1);
                  }
                }
              }
              else
              {
                sub_1406CDA20(v28);
              }
            }
          }
        }
      }
      sub_141473FA0((unsigned int)&v416, v434, DWORD2(v434), (unsigned int)&unk_14178BDE1, 24);
      nullsub_1(v287);
      v443 = (__m128i *)sub_140001650(32, 8);
      if ( !v443 )
        sub_1416C2D31(8, 32);
      v288 = v416.m128i_i32[2];
      v289 = v417;
      sub_141473FA0((unsigned int)v382, v416.m128i_i32[2], v417, (unsigned int)&unk_14178C424, 12);
      v290 = _mm_loadu_si128((const __m128i *)v382);
      v291 = v443;
      v443[1] = _mm_loadu_si128((const __m128i *)&v382[16]);
      *v291 = v290;
      v427.m128i_i64[0] = 1;
      v427.m128i_i64[1] = (__int64)v291;
      v428 = 1;
      v442 = 1;
      sub_141473FA0((unsigned int)v382, v288, v289, (unsigned int)aHistory, 7);
      v442 = 1;
      sub_140690660(v396, v382);
      if ( *(_DWORD *)v396 == 2 )
      {
LABEL_376:
        v442 = 1;
        sub_1401DD260(*(_QWORD *)&v396[8]);
        goto LABEL_377;
      }
      sub_141684120(v385, v396, 624);
      *(_QWORD *)v382 = 0;
      v384 = 0;
      while ( 1 )
      {
        sub_1407BC170(&v377, v382);
        if ( !v377.m256i_i64[0] )
          break;
        sub_141684120(&v388, &v377, 600);
        sub_14147B870(&v423, &v388);
        v438 = 1;
        v443 = (__m128i *)v423.m256i_i64[1];
        v292 = sub_141474250(v423.m256i_i64[1], v423.m256i_i64[2]);
        if ( v292
          && (v438 = 1, sub_1414A3C90(&v414, v292, v293), v414.m128i_i32[0] != 1)
          && v415 == 4
          && *(_DWORD *)v414.m128i_i64[1] == 1852797802 )
        {
          v294 = v134;
          v436 = (__m128i *)v423.m256i_i64[0];
          v295 = v428;
          if ( v428 == v427.m128i_i64[0] )
            sub_1416890A0(&v427);
          v296 = v427.m128i_i64[1];
          v297 = 32 * v295;
          *(_QWORD *)(v427.m128i_i64[1] + v297) = v436;
          *(_QWORD *)(v296 + v297 + 8) = v443;
          *(__m128i *)(v296 + v297 + 16) = _mm_loadu_si128((const __m128i *)&v423.m256i_u64[2]);
          v428 = v295 + 1;
          v134 = v294;
          if ( !_InterlockedDecrement64((volatile signed __int64 *)v388.m128i_i64[0]) )
          {
LABEL_361:
            sub_140F8A980(&v388);
            continue;
          }
        }
        else
        {
          if ( v423.m256i_i64[0] )
            sub_140001660(v443, v423.m256i_i64[0], 1);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)v388.m128i_i64[0]) )
            goto LABEL_361;
        }
      }
      sub_14043C3D0(v382);
      if ( *(_QWORD *)v396 == 2 )
        goto LABEL_376;
LABEL_377:
      v298 = (__m128i **)v427.m128i_i64[1];
      v299 = v427.m128i_i64[1] + 32 * v428;
      v377.m256i_i64[0] = v427.m128i_i64[1];
      v377.m256i_i64[1] = v427.m128i_i64[1];
      v377.m256i_i64[2] = v427.m128i_i64[0];
      v377.m256i_i64[3] = v299;
      v429 = 0;
LABEL_378:
      v300 = v298;
      while ( v300 != (__m128i **)v299 )
      {
        v298 = v300 + 4;
        v377.m256i_i64[1] = (__int64)(v300 + 4);
        if ( *v300 == (__m128i *)-1LL )
          break;
        v443 = *v300;
        v301 = (__int64)v300[2];
        v436 = v300[1];
        sub_14148D130(v382, v436, v301);
        v302 = *(_QWORD *)&v382[8];
        if ( *(_QWORD *)v382 == -1 )
        {
          sub_1401DD260(*(_QWORD *)&v382[8]);
        }
        else
        {
          v434 = *(_OWORD *)v382;
          v303 = *(_QWORD *)&v382[16];
          *(_OWORD *)v382 = *(_OWORD *)&v382[8];
          *(_OWORD *)&v382[16] = 0;
          *(_QWORD *)&v382[32] = v302;
          *(_QWORD *)&v382[40] = v303;
          sub_1408A6200(v396, v382);
          if ( v396[0] != 0xFF )
          {
            v422 = v134;
            v305 = _mm_loadu_si128((const __m128i *)v396);
            v389 = (unsigned __int128)_mm_loadu_si128((const __m128i *)&v396[16]);
            v388 = v305;
            v306 = sub_141433D50(aEntries_1, 7, &v388);
            if ( v306 && *(_BYTE *)v306 == 4 )
            {
              v307 = *(_QWORD *)(v306 + 16);
              v308 = 32LL * *(_QWORD *)(v306 + 24);
              v411 = v307;
              v402 = v307 + v308;
              m128i_i64 = 0;
LABEL_391:
              v309 = (_BYTE *)v411;
              while ( v309 != (_BYTE *)v402 )
              {
                v310 = v309 + 32;
                v311 = *v309 == 5;
                v309 += 32;
                if ( v311 )
                {
                  v411 = (__int64)v310;
                  v312 = *((_QWORD *)v310 - 3);
                  if ( v312 )
                  {
                    v310 = *(_BYTE **)(v411 - 16);
                    v313 = *(_QWORD *)(v411 - 8);
                    v314 = 1;
                  }
                  else
                  {
                    v313 = 0;
                    v314 = 0;
                  }
                  *(_OWORD *)v396 = (unsigned __int64)v314;
                  *(_QWORD *)&v396[16] = v312;
                  *(_QWORD *)&v396[24] = v310;
                  *(_OWORD *)&v396[32] = (unsigned __int64)v314;
                  *(_QWORD *)&v397 = v312;
                  *((_QWORD *)&v397 + 1) = v310;
                  while ( 2 )
                  {
                    if ( !v313 )
                      goto LABEL_391;
                    *(_QWORD *)&v398 = v313 - 1;
                    v315 = (unsigned __int64 *)sub_1406B1170(v396);
                    if ( !v315 )
                      sub_1416C3040(&off_1417898B0);
                    v316 = *v315;
                    v317 = v315[1];
                    v318 = v315[2];
                    v319 = *(unsigned __int16 *)(*v315 + 626);
                    if ( v318 >= v319 )
                    {
                      do
                      {
                        v320 = *(_QWORD *)(v316 + 352);
                        if ( !v320 )
                          sub_1416C3040(&off_1417883C8);
                        ++v317;
                        v318 = *(unsigned __int16 *)(v316 + 624);
                        v316 = *(_QWORD *)(v316 + 352);
                      }
                      while ( (unsigned __int16)v318 >= *(_WORD *)(v320 + 626) );
                    }
                    else
                    {
                      v320 = *v315;
                    }
                    if ( v317 )
                    {
                      v321 = v320 + 8 * v318 + 640;
                      if ( (v317 & 7) != 0 )
                      {
                        v322 = 0;
                        do
                        {
                          v319 = *(_QWORD *)v321;
                          v321 = *(_QWORD *)v321 + 632LL;
                          ++v322;
                        }
                        while ( (v317 & 7) != v322 );
                        v323 = v317 - v322;
                      }
                      else
                      {
                        v323 = v317;
                      }
                      if ( v317 >= 8 )
                      {
                        do
                        {
                          v319 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v321 + 632LL) + 632LL)
                                                                                           + 632LL)
                                                                               + 632LL)
                                                                   + 632LL)
                                                       + 632LL)
                                           + 632LL);
                          v321 = v319 + 632;
                          v323 -= 8LL;
                        }
                        while ( v323 );
                      }
                      v324 = 0;
                    }
                    else
                    {
                      v324 = v318 + 1;
                      v319 = v320;
                    }
                    *v315 = v319;
                    v315[1] = 0;
                    v315[2] = v324;
                    v325 = 32 * v318;
                    if ( *(_BYTE *)(v320 + v325) == 3 )
                    {
                      v326 = (unsigned __int8 *)(v325 + v320);
                      v327 = *((_QWORD *)v326 + 2);
                      v435 = v326;
                      v328 = *((_QWORD *)v326 + 3);
                      if ( (unsigned __int8)sub_14078EA80(v327, v328) )
                      {
                        sub_140388B60((unsigned int)v382, v328, 0, 1, 1);
                        v433 = *(_QWORD *)&v382[8];
                        if ( *(_DWORD *)v382 == 1 )
                          sub_1416C2D4B(v433, *(_QWORD *)&v382[16]);
                        v329 = *(_QWORD *)&v382[16];
                        if ( v328 )
                          sub_141684120(*(_QWORD *)&v382[16], v327, v328);
                        v431 = v329;
                        sub_140790450(v382, v329, v328, &v421);
                        v330 = *(_DWORD *)v382;
                        if ( *(_QWORD *)v382 == -1 )
                        {
                          *(__int64 *)((char *)&v423.m256i_i64[2] + 7) = *(_QWORD *)&v382[24];
                          *(_OWORD *)((char *)&v423.m256i_u32[1] + 3) = *(_OWORD *)&v382[8];
                          v331 = *v435;
                          if ( v331 >= 3 )
                          {
                            if ( v331 == 3 )
                            {
                              v333 = *((_QWORD *)v435 + 1);
                              if ( v333 )
                              {
                                v332 = *((_QWORD *)v435 + 2);
                                v334 = 1;
LABEL_428:
                                sub_140001660(v332, v333, v334);
                              }
                            }
                            else if ( v331 == 4 )
                            {
                              v412 = v435 + 8;
                              sub_1403348B0();
                              if ( *v412 )
                              {
                                v332 = *((_QWORD *)v435 + 2);
                                v333 = 32LL * *v412;
                                v334 = 8;
                                goto LABEL_428;
                              }
                            }
                            else
                            {
                              sub_1403212D0(v435 + 8);
                            }
                          }
                          v335 = v435;
                          *v435 = 3;
                          v336 = _mm_loadu_si128((const __m128i *)((char *)&v423.m256i_u64[1] + 7));
                          *(__m128i *)(v335 + 1) = _mm_loadu_si128((const __m128i *)&v423);
                          *((__m128i *)v335 + 1) = v336;
                          ++m128i_i64;
                        }
                        if ( v433 )
                          sub_140001660(v431, v433, 1);
                        if ( v330 != -1 )
                          sub_1406CDA20(v382);
                      }
                    }
                    v313 = v398;
                    continue;
                  }
                }
              }
              if ( m128i_i64 )
              {
                sub_1406CF290(&v423, &v388);
                v435 = (unsigned __int8 *)v423.m256i_i64[1];
                v433 = v423.m256i_i64[0];
                if ( v423.m256i_i64[0] == -1 )
                {
                  sub_1406C99A0(-1, v435);
                }
                else
                {
                  v337 = sub_1408726C0((__int64)v436, v301, (__int64)v435, v423.m256i_u64[2]);
                  if ( v337 )
                  {
                    v400 = v337;
                    if ( *(_QWORD *)off_141EC8D80 >= 2u )
                    {
                      v414.m128i_i64[0] = (__int64)v436;
                      v414.m128i_i64[1] = v301;
                      *(_QWORD *)v396 = &v414;
                      *(_QWORD *)&v396[8] = sub_14148F3A0;
                      *(_QWORD *)&v396[16] = &v400;
                      *(_QWORD *)&v396[24] = sub_141490720;
                      *(_QWORD *)v382 = aCodexmateLibCo_29;
                      *(_QWORD *)&v382[8] = 44;
                      *(_QWORD *)&v382[16] = aCodexmateLibCo_29;
                      *(_QWORD *)&v382[24] = 44;
                      *(_QWORD *)&v382[32] = &off_14178F798;
                      sub_140985BA0(&unk_14178F75E, v396, 2, v382);
                      v337 = v400;
                    }
                    sub_1401DD260(v337);
                  }
                  else
                  {
                    v429 += m128i_i64;
                  }
                  if ( v433 )
                    sub_140001660(v435, v433, 1);
                }
              }
            }
            sub_1400104F0(&v388);
            v134 = v422;
            if ( (_QWORD)v434 )
              sub_140001660(*((_QWORD *)&v434 + 1), v434, 1);
            v304 = v443;
            if ( v443 )
            {
LABEL_387:
              sub_140001660(v436, v304, 1);
              goto LABEL_378;
            }
            goto LABEL_378;
          }
          sub_1406C9CF0(v396);
          if ( (_QWORD)v434 )
            sub_140001660(*((_QWORD *)&v434 + 1), v434, 1);
        }
        v300 = v298;
        v304 = v443;
        if ( v443 )
          goto LABEL_387;
      }
      v442 = 0;
      sub_140001000(&v377);
      if ( v416.m128i_i64[0] )
        sub_140001660(v416.m128i_i64[1], v416.m128i_i64[0], 1);
      v393 = v429;
      sub_14078EC40(v382, a2);
      v338 = asc_14178F340;
      if ( v134 == -1 )
        v338 = (const char *)&unk_14178F2F8;
      v339 = 42;
      if ( v134 == -1 )
        v339 = 72;
      v416.m128i_i64[0] = (__int64)v338;
      v416.m128i_i64[1] = v339;
      if ( v420 )
      {
        v414.m128i_i64[0] = v420;
        sub_140440300((unsigned int)v396, v419, v420, (unsigned int)&unk_141789BA4, 3);
        *(_QWORD *)&v389 = *(_QWORD *)&v396[16];
        v388 = _mm_loadu_si128((const __m128i *)v396);
        *(_QWORD *)v396 = &v414;
        *(_QWORD *)&v396[8] = sub_1414AC520;
        *(_QWORD *)&v396[16] = &v388;
        *(_QWORD *)&v396[24] = sub_1400015F0;
        sub_14149C0F0(&v377, &unk_14178F36A, v396);
        if ( v388.m128i_i64[0] )
          sub_140001660(v388.m128i_i64[1], v388.m128i_i64[0], 1);
        *(__m128i *)v423.m256i_i8 = _mm_loadu_si128((const __m128i *)&v377);
        v423.m256i_i64[2] = v377.m256i_i64[2];
      }
      else
      {
        v423.m256i_i64[0] = 0;
        *(_OWORD *)&v423.m256i_u64[1] = 1u;
      }
      if ( *(_QWORD *)&v382[40] == 2 && **(_WORD **)&v382[32] == 27503 )
      {
        nullsub_1(v338);
        v443 = (__m128i *)sub_140001650(24, 8);
        if ( !v443 )
          sub_1416C2D31(8, 24);
        nullsub_1(v370);
        v371 = sub_140001650(28, 1);
        if ( !v371 )
          sub_1416C2D4B(1, 28);
        *(_OWORD *)(v371 + 12) = *(__int128 *)((char *)&xmmword_14178D8E7 + 12);
        *(__m128i *)v371 = _mm_loadu_si128((const __m128i *)&xmmword_14178D8E7);
        v372 = (__int64)v443;
        v443->m128i_i64[0] = 28;
        *(_QWORD *)(v372 + 8) = v371;
        *(_QWORD *)(v372 + 16) = 28;
        v377.m256i_i64[0] = 1;
        v377.m256i_i64[1] = v372;
        v377.m256i_i64[2] = 1;
        v388.m128i_i64[0] = 0;
        v388.m128i_i64[1] = 8;
        *(_QWORD *)&v389 = 0;
        nullsub_1(v372);
        v443 = (__m128i *)sub_140001650(24, 8);
        if ( !v443 )
          sub_1416C2D31(8, 24);
        *(_QWORD *)v396 = &v401;
        *(_QWORD *)&v396[8] = sub_1414AC520;
        *(_QWORD *)&v396[16] = &v416;
        *(_QWORD *)&v396[24] = sub_14041F680;
        *(_QWORD *)&v396[32] = &v393;
        *(_QWORD *)&v396[40] = sub_1414AC520;
        *(_QWORD *)&v397 = &v423;
        *((_QWORD *)&v397 + 1) = sub_1400015F0;
        sub_14149C0F0(&v405, &unk_14178F38B, v396);
        v373 = v443;
        v443[1].m128i_i64[0] = v406;
        *v373 = v405;
        v374 = _mm_loadu_si128((const __m128i *)&v377);
        *(__m128i *)v396 = v374;
        *(_QWORD *)&v396[16] = v377.m256i_i64[2];
        *(_QWORD *)&v396[40] = v389;
        *(__m128i *)&v396[24] = _mm_loadu_si128(&v388);
        v375 = (__int64)v444;
        *(_OWORD *)(v444 + 5) = *(_OWORD *)&v396[32];
        *(_OWORD *)(v375 + 24) = *(_OWORD *)&v396[16];
        *(__m128i *)(v375 + 8) = v374;
        *(_QWORD *)(v375 + 56) = 1;
        *(_QWORD *)(v375 + 64) = v373;
        *(_QWORD *)(v375 + 72) = 1;
        *(_QWORD *)v375 = -1;
        if ( v423.m256i_i64[0] )
          sub_140001660(v423.m256i_i64[1], v423.m256i_i64[0], 1);
        sub_1406CE150(v382);
        sub_140334760(&v418);
        if ( v418 )
          sub_140001660(v419, 24 * v418, 8);
        sub_14067FEC0(&v407);
        if ( v425.m128i_i64[0] )
          sub_140001660(v425.m128i_i64[1], v425.m128i_i64[0], 1);
        sub_1400104F0(&v421);
        sub_140335260(&v403);
        if ( v403.m128i_i64[0] )
          sub_140001660(v403.m128i_i64[1], 112 * v403.m128i_i64[0], 8);
      }
      else
      {
        v377.m256i_i64[0] = 0;
        *(_OWORD *)&v377.m256i_u64[1] = 8u;
        nullsub_1(v338);
        v351 = sub_140001650(24, 8);
        if ( !v351 )
          sub_1416C2D31(8, 24);
        v353 = (_QWORD *)v351;
        nullsub_1(v352);
        v354 = sub_140001650(28, 1);
        if ( !v354 )
        {
          v444 = v353;
          sub_1416C2D4B(1, 28);
        }
        *(_OWORD *)(v354 + 12) = *(__int128 *)((char *)&xmmword_14178D8E7 + 12);
        *(__m128i *)v354 = _mm_loadu_si128((const __m128i *)&xmmword_14178D8E7);
        *v353 = 28;
        v353[1] = v354;
        v353[2] = 28;
        v388.m128i_i64[0] = 1;
        v388.m128i_i64[1] = (__int64)v353;
        *(_QWORD *)&v389 = 1;
        nullsub_1(v355);
        v443 = (__m128i *)sub_140001650(24, 8);
        if ( !v443 )
          sub_1416C2D31(8, 24);
        *(_QWORD *)v396 = &v401;
        *(_QWORD *)&v396[8] = sub_1414AC520;
        *(_QWORD *)&v396[16] = &v393;
        *(_QWORD *)&v396[24] = sub_1414AC520;
        *(_QWORD *)&v396[32] = &v382[48];
        *(_QWORD *)&v396[40] = sub_1400015F0;
        *(_QWORD *)&v397 = &v423;
        *((_QWORD *)&v397 + 1) = sub_1400015F0;
        sub_14149C0F0(&v380, &unk_14178F429, v396);
        v356 = v443;
        v443[1].m128i_i64[0] = v381;
        *v356 = v380;
        v357 = _mm_loadu_si128((const __m128i *)&v377);
        *(__m128i *)v396 = v357;
        *(_QWORD *)&v396[16] = v377.m256i_i64[2];
        *(_QWORD *)&v396[40] = v389;
        *(__m128i *)&v396[24] = _mm_loadu_si128(&v388);
        v358 = (__int64)v444;
        *(_OWORD *)(v444 + 5) = *(_OWORD *)&v396[32];
        *(_OWORD *)(v358 + 24) = *(_OWORD *)&v396[16];
        *(__m128i *)(v358 + 8) = v357;
        *(_QWORD *)(v358 + 56) = 1;
        *(_QWORD *)(v358 + 64) = v356;
        *(_QWORD *)(v358 + 72) = 1;
        *(_QWORD *)v358 = -1;
        if ( v423.m256i_i64[0] )
          sub_140001660(v423.m256i_i64[1], v423.m256i_i64[0], 1);
        sub_1406CE150(v382);
        sub_140334760(&v418);
        if ( v418 )
          sub_140001660(v419, 24 * v418, 8);
        sub_14067FEC0(&v407);
        if ( v425.m128i_i64[0] )
          sub_140001660(v425.m128i_i64[1], v425.m128i_i64[0], 1);
        sub_1400104F0(&v421);
        sub_140335260(&v403);
        if ( v403.m128i_i64[0] )
        {
          sub_140001660(v403.m128i_i64[1], 112 * v403.m128i_i64[0], 8);
          return (__int64)v444;
        }
      }
      return (__int64)v444;
    case 32LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141786520),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 16)), (__m128i)xmmword_141786510))) != 0xFFFF )
        goto LABEL_53;
      if ( !*(_BYTE *)(a3 + 292) )
      {
        nullsub_1(a7);
        v63 = sub_140001650(24, 8);
        if ( v63 )
        {
          v65 = (_QWORD *)v63;
          nullsub_1(v64);
          v66 = sub_140001650(32, 1);
          if ( !v66 )
          {
            v444 = v65;
            sub_1416C2D4B(1, 32);
          }
          *(_OWORD *)(v66 + 16) = xmmword_14178D8D7;
          *(__m128i *)v66 = _mm_loadu_si128((const __m128i *)&xmmword_14178D8C7);
          *v65 = 32;
          v65[1] = v66;
          v65[2] = 32;
          v388.m128i_i64[0] = 1;
          v388.m128i_i64[1] = (__int64)v65;
          *(_QWORD *)&v389 = 1;
          *(_QWORD *)v396 = 0;
          *(_QWORD *)&v396[8] = 8;
          *(_QWORD *)&v396[16] = 0;
          nullsub_1(v67);
          v68 = sub_140001650(24, 8);
          if ( !v68 )
            sub_1416C2D31(8, 24);
          v24 = (_QWORD *)v68;
          nullsub_1(v69);
          v70 = (_OWORD *)sub_140001650(60, 1);
          if ( !v70 )
          {
            v444 = v24;
            sub_1416C2D4B(1, 60);
          }
          *(_OWORD *)((char *)v70 + 44) = *(__int128 *)((char *)&xmmword_14178F7E1 + 12);
          v70[2] = xmmword_14178F7E1;
          v70[1] = xmmword_14178F7D1;
          *v70 = xmmword_14178F7C1;
          *v24 = 60;
          v24[1] = v70;
          v24[2] = 60;
          goto LABEL_101;
        }
        goto LABEL_525;
      }
      v15 = *(void (__fastcall **)(_BYTE *, __int64))(a7 + 40);
      sub_1404C0AB0(v382, a2);
      if ( !(*(_QWORD *)&v382[64] | *(_QWORD *)&v382[16]) )
      {
        sub_140334760(v382);
        if ( *(_QWORD *)v382 )
          sub_140001660(*(_QWORD *)&v382[8], 24LL * *(_QWORD *)v382, 8);
        sub_140334760(&v382[24]);
        if ( *(_QWORD *)&v382[24] )
          sub_140001660(*(_QWORD *)&v382[32], 24LL * *(_QWORD *)&v382[24], 8);
        nullsub_1(v16);
        v17 = sub_140001650(24, 8);
        if ( v17 )
        {
          v19 = (_QWORD *)v17;
          nullsub_1(v18);
          v20 = sub_140001650(32, 1);
          if ( !v20 )
          {
            v444 = v19;
            sub_1416C2D4B(1, 32);
          }
          *(_OWORD *)(v20 + 16) = xmmword_14178D8D7;
          *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)&xmmword_14178D8C7);
          *v19 = 32;
          v19[1] = v20;
          v19[2] = 32;
          v388.m128i_i64[0] = 1;
          v388.m128i_i64[1] = (__int64)v19;
          *(_QWORD *)&v389 = 1;
          *(_QWORD *)v396 = 0;
          *(_QWORD *)&v396[8] = 8;
          *(_QWORD *)&v396[16] = 0;
          nullsub_1(v21);
          v22 = sub_140001650(24, 8);
          if ( !v22 )
            sub_1416C2D31(8, 24);
          v24 = (_QWORD *)v22;
          nullsub_1(v23);
          v25 = (_OWORD *)sub_140001650(58, 1);
          if ( !v25 )
          {
            v444 = v24;
            sub_1416C2D4B(1, 58);
          }
          *(_OWORD *)((char *)v25 + 42) = *(__int128 *)((char *)&xmmword_14178F8B3 + 10);
          v25[2] = xmmword_14178F8B3;
          v25[1] = xmmword_14178F8A3;
          *v25 = xmmword_14178F893;
          *v24 = 58;
          v24[1] = v25;
          v24[2] = 58;
          goto LABEL_101;
        }
LABEL_525:
        sub_1416C2D31(8, 24);
      }
      sub_140334760(v382);
      if ( *(_QWORD *)v382 )
        sub_140001660(*(_QWORD *)&v382[8], 24LL * *(_QWORD *)v382, 8);
      sub_140334760(&v382[24]);
      if ( *(_QWORD *)&v382[24] )
        sub_140001660(*(_QWORD *)&v382[32], 24LL * *(_QWORD *)&v382[24], 8);
      v15(v382, a6);
      if ( *(_DWORD *)v382 != -1 )
      {
        v36 = (__int64)v444;
        *((__m128i *)v444 + 5) = v383[0];
        *(_OWORD *)(v36 + 64) = *(_OWORD *)&v382[64];
        v105 = _mm_loadu_si128((const __m128i *)v382);
        v106 = _mm_loadu_si128((const __m128i *)&v382[16]);
        v107 = *(_OWORD *)&v382[32];
        *(_OWORD *)(v36 + 48) = *(_OWORD *)&v382[48];
        *(_OWORD *)(v36 + 32) = v107;
        *(__m128i *)(v36 + 16) = v106;
        *(__m128i *)v36 = v105;
        return v36;
      }
      converge_router_thread_models_to_catalog(v382, a2);
      v171 = *(_QWORD *)v382;
      *(_OWORD *)v396 = *(_OWORD *)&v382[8];
      *(_OWORD *)&v396[16] = *(_OWORD *)&v382[24];
      *(_OWORD *)&v396[32] = *(_OWORD *)&v382[40];
      v397 = *(_OWORD *)&v382[56];
      *(_QWORD *)&v398 = *(_QWORD *)&v382[72];
      if ( *(_QWORD *)v382 != -1 )
      {
        v36 = (__int64)v444;
        *((__m128i *)v444 + 5) = v383[0];
        *(_QWORD *)(v36 + 72) = v398;
        v172 = _mm_load_si128((const __m128i *)v396);
        v173 = _mm_load_si128((const __m128i *)&v396[16]);
        v174 = *(_OWORD *)&v396[32];
        *(_OWORD *)(v36 + 56) = v397;
        *(_OWORD *)(v36 + 40) = v174;
        *(__m128i *)(v36 + 24) = v173;
        *(__m128i *)(v36 + 8) = v172;
        *(_QWORD *)v36 = v171;
        return v36;
      }
      v226 = _mm_load_si128((const __m128i *)&v396[16]);
      v388 = _mm_load_si128((const __m128i *)v396);
      v389 = (unsigned __int128)v226;
      v390 = *(_OWORD *)&v396[32];
      v391 = v397;
      v392 = v398;
      LOBYTE(v170) = 1;
      sub_14078FD60(v382, a2, v170);
      if ( *(_QWORD *)&v382[40] == 2 && (v228 = *(_QWORD *)&v382[32], **(_WORD **)&v382[32] == 27503) )
      {
        v439 = 1;
        v443 = (__m128i *)sub_1407198C0();
        *(_QWORD *)v396 = (char *)&v390 + 8;
        *(_QWORD *)&v396[8] = sub_1414AC520;
        *(_QWORD *)&v396[16] = &v391;
        *(_QWORD *)&v396[24] = sub_1414AC520;
        sub_14149C0F0(&v421, &unk_14178F83A, v396);
        v359 = v443;
        v443[1].m128i_i64[0] = v421.m256i_i64[2];
        *v359 = _mm_loadu_si128((const __m128i *)&v421);
        v423.m256i_i64[0] = 1;
        v423.m256i_i64[1] = (__int64)v359;
        v423.m256i_i64[2] = 1;
        if ( v392 )
        {
          sub_140440300((unsigned int)v396, v388.m128i_i32[2], v389, (unsigned int)&unk_14178CCCE, 3);
          v377.m256i_i64[2] = *(_QWORD *)&v396[16];
          *(__m128i *)v377.m256i_i8 = _mm_loadu_si128((const __m128i *)v396);
          *(_QWORD *)v396 = &v392;
          *(_QWORD *)&v396[8] = sub_1414AC520;
          *(_QWORD *)&v396[16] = &v377;
          *(_QWORD *)&v396[24] = sub_1400015F0;
          sub_14149C0F0(&v425, &unk_14178F870, v396);
          if ( v377.m256i_i64[0] )
            sub_140001660(v377.m256i_i64[1], v377.m256i_i64[0], 1);
          sub_1403B1EC0(&v423, &v425);
        }
        v443 = (__m128i *)sub_1407198C0();
        nullsub_1(v360);
        v361 = (void *)sub_140001650(32, 1);
        if ( !v361 )
          sub_1416C2D4B(1, 32);
        qmemcpy(v361, "thread_model_catalog_consistency", 32);
        v362 = v443;
        v443->m128i_i64[0] = 32;
        v362->m128i_i64[1] = (__int64)v361;
        v362[1].m128i_i64[0] = 32;
        v363 = v444;
        *(__m128i *)(v444 + 7) = _mm_loadu_si128((const __m128i *)&v423);
        v363[9] = v423.m256i_i64[2];
        v363[1] = 1;
        v363[2] = v362;
        v363[3] = 1;
        v363[4] = 0;
        v363[5] = 8;
        v363[6] = 0;
        *v363 = -1;
        if ( *(_QWORD *)v382 )
          sub_140001660(*(_QWORD *)&v382[8], *(_QWORD *)v382, 1);
        if ( *(_QWORD *)&v382[24] )
          sub_140001660(v228, *(_QWORD *)&v382[24], 1);
        if ( *(_QWORD *)&v382[48] )
          sub_140001660(*(_QWORD *)&v382[56], *(_QWORD *)&v382[48], 1);
        v343 = *(_QWORD *)&v382[72];
        if ( (unsigned __int64)(*(_QWORD *)&v382[72] - 1LL) >= 0xFFFFFFFFFFFFFFFEuLL )
          goto LABEL_467;
        v344 = v383;
      }
      else
      {
        v416.m128i_i64[0] = 0;
        v416.m128i_i64[1] = 8;
        v417 = 0;
        nullsub_1(v227);
        v229 = sub_140001650(24, 8);
        if ( !v229 )
        {
          v437 = 1;
          sub_1416C2D31(8, 24);
        }
        v231 = (_QWORD *)v229;
        nullsub_1(v230);
        v232 = sub_140001650(32, 1);
        if ( !v232 )
        {
          v444 = v231;
          sub_1416C2D4B(1, 32);
        }
        *(_OWORD *)(v232 + 16) = xmmword_14178D8D7;
        *(__m128i *)v232 = _mm_loadu_si128((const __m128i *)&xmmword_14178D8C7);
        *v231 = 32;
        v231[1] = v232;
        v231[2] = 32;
        v423.m256i_i64[0] = 1;
        v423.m256i_i64[1] = (__int64)v231;
        v423.m256i_i64[2] = 1;
        nullsub_1(v233);
        v234 = sub_140001650(24, 8);
        if ( !v234 )
        {
          v432 = 1;
          sub_1416C2D31(8, 24);
        }
        v443 = (__m128i *)v234;
        if ( *(_QWORD *)&v382[72] == -1 )
        {
          v377.m256i_i64[2] = *(_QWORD *)&v382[64];
          *(__m128i *)v377.m256i_i8 = _mm_loadu_si128((const __m128i *)&v382[48]);
        }
        else
        {
          v377.m256i_i64[0] = *(_QWORD *)&v382[72];
          *(__m128i *)&v377.m256i_u64[1] = _mm_loadu_si128(v383);
          if ( *(_QWORD *)&v382[48] )
            sub_140001660(*(_QWORD *)&v382[56], *(_QWORD *)&v382[48], 1);
        }
        *(_QWORD *)v396 = (char *)&v390 + 8;
        *(_QWORD *)&v396[8] = sub_1414AC520;
        *(_QWORD *)&v396[16] = &v377;
        *(_QWORD *)&v396[24] = sub_1400015F0;
        sub_14149C0F0(&v407, &unk_14178F7FD, v396);
        if ( v377.m256i_i64[0] )
          sub_140001660(v377.m256i_i64[1], v377.m256i_i64[0], 1);
        v340 = v443;
        v443[1].m128i_i64[0] = v408;
        *v340 = v407;
        v341 = _mm_loadu_si128(&v416);
        *(__m128i *)v396 = v341;
        *(_QWORD *)&v396[16] = v417;
        *(_QWORD *)&v396[40] = v423.m256i_i64[2];
        *(__m128i *)&v396[24] = _mm_loadu_si128((const __m128i *)&v423);
        v342 = (__int64)v444;
        *(_OWORD *)(v444 + 5) = *(_OWORD *)&v396[32];
        *(_OWORD *)(v342 + 24) = *(_OWORD *)&v396[16];
        *(__m128i *)(v342 + 8) = v341;
        *(_QWORD *)(v342 + 56) = 1;
        *(_QWORD *)(v342 + 64) = v340;
        *(_QWORD *)(v342 + 72) = 1;
        *(_QWORD *)v342 = -1;
        if ( *(_QWORD *)v382 )
          sub_140001660(*(_QWORD *)&v382[8], *(_QWORD *)v382, 1);
        v343 = *(_QWORD *)&v382[24];
        if ( !*(_QWORD *)&v382[24] )
          goto LABEL_467;
        v344 = (__m128i *)&v382[32];
      }
      sub_140001660(v344->m128i_i64[0], v343, 1);
LABEL_467:
      sub_140334760(&v388);
      if ( v388.m128i_i64[0] )
        sub_140001660(v388.m128i_i64[1], 24 * v388.m128i_i64[0], 8);
      return (__int64)v444;
    default:
      goto LABEL_53;
  }
}
