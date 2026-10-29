// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d4d630 | name sub_140D4D630
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D4D630(__m128i *a1, __int128 *a2, _QWORD *a3)
{
  __int128 *v4; // r15
  __m128i *v5; // rsi
  __int64 v6; // rax
  __int128 v7; // xmm1
  const __m128i *v8; // r14
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v11; // rcx
  __m128i *v12; // r13
  __int64 v13; // rax
  __int64 v14; // r9
  __m128i *v15; // rax
  const __m128i *v16; // rdx
  __m128i *v17; // r14
  __int128 *v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int32 v22; // eax
  bool v23; // of
  signed __int32 v24; // eax
  int v25; // ett
  __int64 v26; // rt0
  __int64 v27; // r14
  unsigned __int32 v28; // eax
  bool v29; // of
  signed __int32 v30; // eax
  int v31; // ett
  __int64 v32; // rt0
  __int128 *v33; // rax
  __int128 *v34; // rbx
  __int128 *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  int v38; // ebx
  __int64 v39; // r14
  _BYTE *v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // r15
  __m128i *v43; // r12
  _OWORD *v44; // r14
  _QWORD *v45; // rbx
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int128 v48; // xmm3
  __int64 v49; // rdx
  __int128 *v50; // rax
  char v51; // al
  volatile signed __int64 **v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rdx
  volatile signed __int64 *v55; // rax
  __int128 *v56; // rdi
  char result; // al
  _QWORD *v58; // rbx
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  __int128 *v61; // r10
  int v62; // ecx
  __int128 *v63; // rax
  __int128 *v64; // r14
  _BYTE *v65; // rax
  __int64 *v66; // rcx
  __int64 v67; // rdx
  __int64 *v68; // r8
  __int64 *v69; // rdx
  bool v70; // zf
  __int64 *v71; // rax
  __int64 v72; // r15
  __int64 v73; // r12
  char v74; // al
  __int64 v75; // rcx
  char v76; // al
  __int64 v77; // rcx
  char v78; // al
  _BYTE *v79; // r14
  _BYTE *v80; // rax
  _BYTE *v81; // r15
  __int128 *v82; // rax
  __int128 *v83; // r13
  unsigned __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // r14
  __int128 *v88; // rbx
  __int16 v89; // r12
  _QWORD *v90; // r15
  __m128i *v91; // rdi
  __int64 v92; // rbx
  unsigned __int64 v93; // rsi
  __m128i *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __m128i *v97; // r14
  __int64 v98; // rbx
  __int64 v99; // r15
  __int128 *v100; // r12
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  __int128 v103; // xmm3
  unsigned int v104; // r15d
  volatile signed __int64 **v105; // rbx
  __int64 v106; // r9
  unsigned __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // rax
  __int16 v111; // di
  __int16 v112; // cx
  __int128 v113; // rax
  __int128 *v114; // r15
  __int64 v115; // r12
  char v116; // al
  __int128 *v117; // r9
  __int64 v118; // rdi
  volatile signed __int64 *v119; // rax
  __int128 *v120; // rbx
  __int128 v121; // xmm0
  __int128 v122; // xmm1
  __int128 v123; // xmm2
  __int128 v124; // xmm0
  volatile signed __int64 *v125; // r8
  __int128 *v126; // r12
  __int64 v127; // rax
  __int64 v128; // rbx
  __int64 v129; // r14
  __int64 v130; // rdx
  __int128 v131; // xmm6
  __int64 v132; // rax
  char v133; // of
  __int64 v134; // rdx
  __int64 v135; // rdx
  int v136; // ecx
  unsigned int v137; // ecx
  int v138; // edx
  unsigned __int8 v139; // al
  const char *v140; // r9
  __int64 v141; // rcx
  __int64 v142; // rdx
  int v143; // ebx
  __int64 v144; // rdi
  int v145; // edx
  __int128 *v146; // rax
  __int128 *v147; // r15
  _QWORD *v148; // rax
  volatile signed __int64 *v149; // rcx
  _QWORD *v150; // r14
  __int128 v151; // xmm0
  __int128 v152; // xmm1
  __int128 v153; // xmm2
  _QWORD *v154; // rdi
  __int64 *v155; // rdi
  __m128i *v156; // rbx
  int v157; // edx
  __int64 v158; // rdx
  __int128 *v159; // rbx
  __int64 v160; // rdx
  __int64 v161; // rdx
  __int128 v162; // xmm6
  __int64 v163; // rdx
  __int128 v164; // xmm6
  __int64 (__fastcall **v165)(); // rax
  __int64 v166; // rdx
  __int64 v167; // rdx
  __int64 v168; // rdx
  __int128 v169; // xmm6
  volatile signed __int64 *v170; // rax
  __int128 *v171; // r8
  volatile signed __int64 *v172; // rdi
  __int64 v173; // rt0
  volatile signed __int64 *v174; // rax
  __int64 v175; // rt0
  __int64 v176; // rdx
  __int128 *v177; // rbx
  __int64 v178; // rbx
  const __m128i *v179; // r14
  __int64 v180; // rcx
  __int64 v181; // rax
  __int16 v182; // cx
  __int64 v183; // rax
  __int128 v184; // xmm0
  __int128 v185; // xmm1
  __int128 v186; // xmm2
  int v187; // edx
  __int64 *v188; // rbx
  __m128i *v189; // r8
  __int64 v190; // rcx
  unsigned __int64 v191; // r12
  __int64 v192; // rdx
  unsigned __int8 v193; // r14
  void *v194; // rcx
  __int128 *v195; // r15
  char v196; // al
  __int64 v197; // rcx
  __int128 *v198; // r8
  __int128 v199; // xmm0
  int v200; // edx
  __int64 v201; // rsi
  _QWORD *v202; // rax
  __int64 v203; // rcx
  __int128 *v204; // r10
  __int128 *v205; // r15
  const char *v206; // rcx
  unsigned __int64 v207; // r8
  __int64 v208; // rdx
  __int64 *v209; // r12
  __int64 v210; // rax
  __int64 v211; // r8
  __int64 v212; // rsi
  __int64 v213; // r12
  void *v214; // rax
  __int128 *v215; // r12
  __int64 v216; // r13
  __int64 v217; // rsi
  _QWORD *v218; // rax
  __int64 v219; // rax
  __int64 v220; // rcx
  _DWORD *v221; // rax
  __int64 v222; // rcx
  __int64 v223; // rax
  __int64 v224; // rcx
  _DWORD *v225; // rax
  __int64 v226; // rdx
  __int128 *v227; // rax
  __int128 v228; // xmm0
  __int128 v229; // xmm0
  __int128 v230; // xmm1
  __int128 v231; // xmm2
  __int128 v232; // xmm3
  __int128 v233; // xmm4
  unsigned __int64 v234; // rax
  unsigned __int64 v235; // rcx
  unsigned __int64 v236; // rbx
  unsigned __int64 v237; // rax
  const __m128i *v238; // r14
  __int64 v239; // r8
  void (__fastcall *v240)(_BYTE *, const __m128i *, __int64); // rax
  __int128 v241; // xmm0
  _OWORD *v242; // rax
  __int128 v243; // xmm0
  __int128 v244; // xmm0
  _OWORD *v245; // rax
  __int64 v246; // rax
  __int128 v247; // xmm0
  __int64 v248; // rax
  void (__fastcall *v249)(_BYTE *, _QWORD, _QWORD); // rax
  __int128 *v250; // rdi
  __int64 v251; // rdx
  __int64 v252; // rcx
  __m128i *v253; // rax
  __m128i *v254; // rax
  __int128 *v255; // rdi
  _OWORD *v256; // rcx
  _OWORD *v257; // rdi
  __int64 v258; // rdx
  __int128 *v259; // rbx
  _QWORD *v260; // rdi
  __int128 *v261; // rcx
  _BYTE *v262; // rbx
  __int64 v263; // rdi
  __int64 v264; // rcx
  __int64 v265; // rax
  __int64 v266; // rcx
  const __m128i *v267; // r15
  _DWORD *v268; // rax
  __int64 v269; // rcx
  __int64 v270; // rbx
  unsigned __int64 v271; // r12
  __int128 *v272; // rdi
  _QWORD *v273; // rax
  __m128i *v274; // rax
  __int64 v275; // rdi
  __int64 v276; // rcx
  __int64 v277; // rdi
  _DWORD *v278; // rax
  __int64 v279; // rcx
  unsigned __int64 v280; // rbx
  __m128i *v281; // rax
  __int64 v282; // rcx
  unsigned __int16 v283; // r15
  _DWORD *v284; // rax
  __int64 v285; // rcx
  const __m128i *v286; // r14
  __int64 v287; // rbx
  unsigned __int64 v288; // r12
  __m128i *v289; // rax
  __int64 v290; // rdi
  __int64 v291; // rdi
  __int64 v292; // rax
  __int64 v293; // rbx
  __int64 v294; // r14
  __int64 v295; // rax
  __int64 v296; // rcx
  __int64 v297; // rcx
  void *v298; // rax
  bool v299; // zf
  void *v300; // r9
  __int64 v301; // rcx
  __m128i v302[8]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v303; // [rsp+F0h] [rbp+70h]
  __int128 v304; // [rsp+100h] [rbp+80h]
  __int128 v305; // [rsp+110h] [rbp+90h]
  __int128 v306; // [rsp+120h] [rbp+A0h]
  __int128 v307; // [rsp+130h] [rbp+B0h]
  __int128 v308; // [rsp+140h] [rbp+C0h]
  __int128 v309; // [rsp+150h] [rbp+D0h]
  __int128 v310; // [rsp+160h] [rbp+E0h]
  __int128 v311; // [rsp+170h] [rbp+F0h]
  __int128 v312; // [rsp+180h] [rbp+100h]
  __int128 v313; // [rsp+190h] [rbp+110h]
  __int128 v314; // [rsp+1A0h] [rbp+120h]
  __int128 v315; // [rsp+1B0h] [rbp+130h]
  __int128 v316; // [rsp+1C0h] [rbp+140h]
  __int128 v317; // [rsp+1D0h] [rbp+150h]
  __int128 v318; // [rsp+1E0h] [rbp+160h]
  __int128 v319; // [rsp+1F0h] [rbp+170h]
  __int128 v320; // [rsp+200h] [rbp+180h]
  __int128 v321; // [rsp+210h] [rbp+190h]
  __int128 v322; // [rsp+220h] [rbp+1A0h]
  __int128 v323; // [rsp+230h] [rbp+1B0h]
  __int64 v324; // [rsp+240h] [rbp+1C0h]
  _BYTE v325[88]; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v326; // [rsp+2A8h] [rbp+228h]
  __int16 v327; // [rsp+2B8h] [rbp+238h]
  int v328; // [rsp+2BAh] [rbp+23Ah]
  __int16 v329; // [rsp+2BEh] [rbp+23Eh]
  __m256i v330; // [rsp+520h] [rbp+4A0h]
  __int128 v331; // [rsp+540h] [rbp+4C0h]
  __int128 v332; // [rsp+550h] [rbp+4D0h]
  _BYTE v333[136]; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v334; // [rsp+5E8h] [rbp+568h]
  __int64 v335; // [rsp+5F8h] [rbp+578h]
  __int64 v336; // [rsp+600h] [rbp+580h]
  __int128 v337; // [rsp+608h] [rbp+588h]
  __m128i v338[99]; // [rsp+618h] [rbp+598h] BYREF
  _BYTE v339[24]; // [rsp+C50h] [rbp+BD0h] BYREF
  __int64 v340; // [rsp+C68h] [rbp+BE8h]
  __int64 v341; // [rsp+C70h] [rbp+BF0h]
  _QWORD v342[3]; // [rsp+C88h] [rbp+C08h] BYREF
  __int64 v343; // [rsp+CA0h] [rbp+C20h]
  __int128 *v344; // [rsp+CA8h] [rbp+C28h]
  __m128i *v345; // [rsp+CC0h] [rbp+C40h]
  __int64 v346; // [rsp+CC8h] [rbp+C48h]
  _BYTE v347[40]; // [rsp+CE0h] [rbp+C60h] BYREF
  __int128 v348; // [rsp+D08h] [rbp+C88h]
  __int128 v349; // [rsp+D18h] [rbp+C98h]
  __int128 v350; // [rsp+D28h] [rbp+CA8h]
  _OWORD *v351; // [rsp+D38h] [rbp+CB8h]
  _BYTE v352[90]; // [rsp+D40h] [rbp+CC0h] BYREF
  _BYTE v353[22]; // [rsp+D9Ah] [rbp+D1Ah]
  __int128 v354; // [rsp+DB8h] [rbp+D38h] BYREF
  __int64 v355; // [rsp+DC8h] [rbp+D48h]
  __m128i v356; // [rsp+DD0h] [rbp+D50h] BYREF
  __int128 v357; // [rsp+DE0h] [rbp+D60h]
  __int128 v358; // [rsp+DF0h] [rbp+D70h]
  __int128 v359; // [rsp+E00h] [rbp+D80h]
  __int128 v360; // [rsp+E10h] [rbp+D90h]
  __int128 v361; // [rsp+E20h] [rbp+DA0h]
  __int128 v362; // [rsp+E30h] [rbp+DB0h]
  _BYTE v363[24]; // [rsp+E40h] [rbp+DC0h]
  __int64 v364; // [rsp+E58h] [rbp+DD8h]
  __int64 v365; // [rsp+E60h] [rbp+DE0h]
  __int64 v366; // [rsp+E68h] [rbp+DE8h]
  _BYTE v367[104]; // [rsp+E70h] [rbp+DF0h] BYREF
  __int16 v368; // [rsp+ED8h] [rbp+E58h]
  int v369; // [rsp+EDAh] [rbp+E5Ah]
  __int16 v370; // [rsp+EDEh] [rbp+E5Eh]
  __m128i *v371; // [rsp+F30h] [rbp+EB0h]
  __int64 v372; // [rsp+F38h] [rbp+EB8h]
  __m256i v373; // [rsp+F40h] [rbp+EC0h] BYREF
  __int128 v374; // [rsp+F60h] [rbp+EE0h]
  __int128 v375; // [rsp+F70h] [rbp+EF0h]
  __int128 v376; // [rsp+F80h] [rbp+F00h]
  __int128 v377; // [rsp+F90h] [rbp+F10h]
  __int64 v378; // [rsp+FA8h] [rbp+F28h]
  __int64 v379; // [rsp+FB0h] [rbp+F30h]
  const __m128i *v380; // [rsp+FB8h] [rbp+F38h]
  __int64 v381; // [rsp+FC0h] [rbp+F40h]
  __int64 v382; // [rsp+FC8h] [rbp+F48h]
  const char *v383; // [rsp+FD0h] [rbp+F50h]
  char v384; // [rsp+FDFh] [rbp+F5Fh] BYREF
  __int64 v385; // [rsp+FE0h] [rbp+F60h] BYREF
  _DWORD *v386; // [rsp+FE8h] [rbp+F68h]
  __int64 v387; // [rsp+FF0h] [rbp+F70h]
  __int64 v388; // [rsp+FF8h] [rbp+F78h]
  char v389; // [rsp+1005h] [rbp+F85h]
  char v390; // [rsp+1006h] [rbp+F86h]
  char v391; // [rsp+1007h] [rbp+F87h]
  char v392; // [rsp+1008h] [rbp+F88h]
  char v393; // [rsp+1009h] [rbp+F89h]
  char v394; // [rsp+100Ah] [rbp+F8Ah]
  char v395; // [rsp+100Bh] [rbp+F8Bh]
  char v396; // [rsp+100Ch] [rbp+F8Ch]
  char v397; // [rsp+100Dh] [rbp+F8Dh]
  char v398; // [rsp+100Eh] [rbp+F8Eh]
  char v399; // [rsp+100Fh] [rbp+F8Fh]
  __int64 v400; // [rsp+1010h] [rbp+F90h]
  __m128i *v401; // [rsp+1018h] [rbp+F98h]
  char v402; // [rsp+1027h] [rbp+FA7h]
  char v403; // [rsp+1028h] [rbp+FA8h]
  char v404; // [rsp+1029h] [rbp+FA9h]
  char v405; // [rsp+102Ah] [rbp+FAAh]
  char v406; // [rsp+102Bh] [rbp+FABh]
  char v407; // [rsp+102Ch] [rbp+FACh]
  char v408; // [rsp+102Dh] [rbp+FADh]
  char v409; // [rsp+102Eh] [rbp+FAEh]
  char v410; // [rsp+102Fh] [rbp+FAFh]
  __int64 v411; // [rsp+1030h] [rbp+FB0h]
  char v412; // [rsp+103Dh] [rbp+FBDh]
  char v413; // [rsp+103Eh] [rbp+FBEh]
  char v414; // [rsp+103Fh] [rbp+FBFh]
  __int64 v415; // [rsp+1040h] [rbp+FC0h]
  __int128 *v416; // [rsp+1048h] [rbp+FC8h]
  char v417; // [rsp+1057h] [rbp+FD7h]
  __int64 v418; // [rsp+1058h] [rbp+FD8h]

  v418 = -2;
  v4 = a2;
  v5 = a1;
  v6 = *((unsigned __int8 *)a2 + 420);
  v416 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_DWORD *)((char *)a2 + 415) = 0;
      a2[18] = a2[23];
      a2[13] = a2[15];
      *((_BYTE *)a2 + 419) = 1;
      v7 = a2[11];
      *a2 = a2[10];
      a2[1] = v7;
      *((_BYTE *)a2 + 412) = *((_BYTE *)a2 + 421);
      *((_QWORD *)a2 + 38) = *((_QWORD *)a2 + 34);
      a2[14] = a2[16];
      v8 = *((const __m128i **)a2 + 24);
      v9 = *((_QWORD *)a2 + 25);
      *(__int128 *)((char *)a2 + 312) = *(__int128 *)((char *)a2 + 392);
      *((_QWORD *)a2 + 41) = *((_QWORD *)a2 + 35);
      if ( v8 )
      {
        v10 = v9 == 0;
        if ( v9 < 0 )
        {
LABEL_4:
          v11 = 0;
          goto LABEL_5;
        }
      }
      else
      {
        v13 = sub_1416419F0(aModel_6, 5, a2);
        v14 = 1;
        if ( !v13 )
        {
          v9 = 0;
          v4 = v416;
          goto LABEL_18;
        }
        v4 = v416;
        if ( *(_BYTE *)v13 != 3 )
          goto LABEL_17;
        v8 = *(const __m128i **)(v13 + 16);
        v9 = *(_QWORD *)(v13 + 24);
        v10 = v9 == 0;
        if ( v9 < 0 )
          goto LABEL_4;
      }
      if ( v10 )
      {
        v14 = 1;
LABEL_17:
        v9 = 0;
        goto LABEL_18;
      }
      nullsub_1(a1);
      v15 = (__m128i *)sub_140001650(v9, 1);
      v11 = 1;
      if ( !v15 )
LABEL_5:
        sub_141938D2B(v11, v9);
      v16 = v8;
      v17 = v15;
      sub_1418F44E0(v15, v16, v9);
      v14 = (__int64)v17;
LABEL_18:
      *((_QWORD *)v4 + 42) = v9;
      *((_QWORD *)v4 + 43) = v14;
      *((_QWORD *)v4 + 44) = v9;
      sub_140DABD30(
        *((_QWORD *)v4 + 36),
        *((_QWORD *)v4 + 28),
        *((_QWORD *)v4 + 29),
        v14,
        v9,
        *((_QWORD *)v4 + 37),
        *((_QWORD *)v4 + 26));
      v18 = v416;
      *((_BYTE *)v416 + 419) = 0;
      *((_BYTE *)v18 + 416) = 1;
      v19 = *v18;
      v18[3] = v18[1];
      v18[2] = v19;
      *(_WORD *)((char *)v18 + 413) = 0;
      *((_DWORD *)v18 + 102) = 0;
      v20 = *((_QWORD *)v18 + 36);
      if ( *(_BYTE *)(*((_QWORD *)v18 + 37) + 253LL) == 1 )
      {
        v21 = *(_QWORD *)(v20 + 32);
        v22 = *(_DWORD *)(v21 + 16);
        if ( v22 > 0x3FFFFFFD
          || (v25 = *(_DWORD *)(v21 + 16),
              v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 16), v22 + 1, v22),
              v23 = __OFSUB__(v25, v24),
              v25 != v24) )
        {
          sub_141937550((volatile void *)(v21 + 16));
        }
        v26 = _InterlockedIncrement64(*(volatile signed __int64 **)(v21 + 32));
        if ( (v26 < 0) ^ v23 | (v26 == 0) )
          goto LABEL_67;
        v27 = *(_QWORD *)(v21 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v21 + 16)) & 0xBFFFFFFF), 1) )
LABEL_28:
          sub_141937840(v21 + 16);
      }
      else
      {
        v21 = *(_QWORD *)(v20 + 24);
        v28 = *(_DWORD *)(v21 + 16);
        if ( v28 > 0x3FFFFFFD
          || (v31 = *(_DWORD *)(v21 + 16),
              v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 16), v28 + 1, v28),
              v29 = __OFSUB__(v31, v30),
              v31 != v30) )
        {
          sub_141937550((volatile void *)(v21 + 16));
        }
        v32 = _InterlockedIncrement64(*(volatile signed __int64 **)(v21 + 32));
        if ( (v32 < 0) ^ v29 | (v32 == 0) )
          goto LABEL_67;
        v27 = *(_QWORD *)(v21 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v21 + 16)) & 0xBFFFFFFF), 1) )
          goto LABEL_28;
      }
      v33 = v416;
      *((_QWORD *)v416 + 45) = v27;
      v34 = v33 + 4;
      sub_140DAD590(v33 + 4, *((_QWORD *)v33 + 37));
      v35 = v416;
      *((_BYTE *)v416 + 415) = 1;
      if ( *((_QWORD *)v35 + 38) )
      {
        v10 = (unsigned __int8)sub_140363360(v35 + 2) == 0;
        v35 = v416;
        if ( !v10 )
        {
          v36 = sub_140DB47F0(v34);
          v38 = v36;
          v10 = v36 == 0;
          v35 = v416;
          if ( !v10 )
          {
            if ( *((_QWORD *)v416 + 41) )
              sub_1401F9370((_DWORD)v416 + 328, (unsigned int)aTranslationErr, 17, v38, 29);
            LOWORD(v37) = 400;
            sub_140DAFCE0((unsigned int)v333, v37, v38, 29, (__int64)aProxyAnthropic, 27);
            *(_OWORD *)v363 = *(_OWORD *)&v333[112];
            v362 = *(_OWORD *)&v333[96];
            v361 = *(_OWORD *)&v333[80];
            v360 = *(_OWORD *)&v333[64];
            v359 = *(_OWORD *)&v333[48];
            v358 = *(_OWORD *)&v333[32];
            v357 = *(_OWORD *)&v333[16];
            v356 = *(__m128i *)v333;
            v39 = 5;
            v40 = v416;
            goto LABEL_55;
          }
        }
      }
      while ( 1 )
      {
        if ( *((_QWORD *)v35 + 41) )
          sub_1401F9780((__int64 *)v416 + 41, (__int64)(v416 + 2), 0);
        sub_140CAF8C0(
          (unsigned int)v333,
          *((_QWORD *)v416 + 45),
          (unsigned int)&unk_141A433A0,
          *((_QWORD *)v416 + 26),
          *((_QWORD *)v416 + 27));
        v83 = v416;
        v84 = *((_QWORD *)v416 + 18);
        v85 = 4 * v84;
        v86 = 0x7FFFFFFFFFFFFFFELL;
        LOBYTE(v86) = v84 >> 62 != 0 || 4 * v84 > 0x7FFFFFFFFFFFFFFELL;
        if ( (_BYTE)v86 )
        {
          v87 = 0;
LABEL_118:
          v407 = 1;
          sub_141938D2B(v87, v85);
        }
        v415 = *((_QWORD *)v416 + 18);
        v88 = v416 + 4;
        v89 = *((_WORD *)v416 + 76);
        v411 = 2;
        v400 = 4 * v84;
        if ( v85 )
        {
          v90 = a3;
          v91 = v5;
          v401 = *((__m128i **)v416 + 17);
          nullsub_1(v86);
          v87 = 2;
          v92 = v415;
          v93 = 4 * v415;
          v94 = (__m128i *)sub_140001650(4 * v415, 2);
          v85 = v93;
          if ( !v94 )
            goto LABEL_118;
          v411 = (__int64)v94;
          if ( v92 )
            sub_1418F44E0(v94, v401, v93);
          v5 = v91;
          a3 = v90;
          v88 = v83 + 4;
        }
        sub_1403F0BA0(v352, (char *)v83 + 88);
        sub_1403F09D0(v325, v83 + 7);
        *(_WORD *)&v367[88] = v89;
        *(_QWORD *)&v367[72] = v411;
        *(_QWORD *)&v367[80] = v415;
        *(_OWORD *)&v367[24] = *(_OWORD *)v352;
        *(_QWORD *)&v367[40] = *(_QWORD *)&v352[16];
        *(_QWORD *)&v367[64] = *(_QWORD *)&v325[16];
        *(_OWORD *)&v367[48] = *(_OWORD *)v325;
        *(_OWORD *)v367 = *v88;
        *(_QWORD *)&v367[16] = *((_QWORD *)v88 + 2);
        v407 = 0;
        sub_141259870(v325, v333, v367);
        sub_140CB5130(v333, v325, v416 + 2);
        v95 = sub_1412597A0(v333);
        v4 = v416;
        *((_QWORD *)v416 + 53) = v95;
        *((_QWORD *)v4 + 54) = v96;
LABEL_125:
        v97 = (__m128i *)((char *)v4 + 424);
        sub_14126C5E0(v333, (char *)v4 + 424, a3);
        v98 = *(_QWORD *)v333;
        if ( *(_QWORD *)v333 == -2 )
        {
          v5->m128i_i64[0] = -1;
          result = 3;
          goto LABEL_316;
        }
        v99 = *(_QWORD *)&v333[8];
        v317 = *(_OWORD *)&v333[16];
        v318 = *(_OWORD *)&v333[32];
        v319 = *(_OWORD *)&v333[48];
        v320 = *(_OWORD *)&v333[64];
        v321 = *(_OWORD *)&v333[80];
        v322 = *(_OWORD *)&v333[96];
        v323 = *(_OWORD *)&v333[112];
        v324 = *(_QWORD *)&v333[128];
        sub_140D1A820(*((_QWORD *)v416 + 53), *((_QWORD *)v416 + 54));
        if ( (_DWORD)v98 == -1 )
        {
          v415 = v99;
          *(_QWORD *)v352 = v99;
          if ( *((_QWORD *)v416 + 41) )
          {
            v413 = 1;
            v139 = sub_14122E5A0(v352);
            v140 = (const char *)&unk_141A480EF;
            if ( v139 )
              v140 = "timeout";
            v413 = 1;
            sub_1401F9370((_DWORD)v416 + 328, (unsigned int)aTransportError_0, 15, (_DWORD)v140, 3LL * (v139 ^ 1u) + 7);
          }
          v141 = *((_QWORD *)v416 + 36);
          v142 = *(unsigned __int8 *)(*((_QWORD *)v416 + 37) + 253LL);
          v413 = 1;
          sub_140DA5020(v141, v142);
          v413 = 0;
          *(_QWORD *)v367 = sub_14122E700(v415);
          *(_QWORD *)v325 = v367;
          *(_QWORD *)&v325[8] = sub_14122E940;
          sub_1416ABFD0(v333, &unk_141A48038, v325);
          v413 = 0;
          sub_140D19140(*(_QWORD *)v367);
          *(_OWORD *)v367 = *(_OWORD *)v333;
          v143 = *(_DWORD *)&v333[16];
          *(_QWORD *)&v367[16] = *(_QWORD *)&v333[16];
          v144 = *(_QWORD *)&v333[8];
          sub_140DABD30(
            *((_QWORD *)v416 + 36),
            *((_QWORD *)v416 + 28),
            *((_QWORD *)v416 + 29),
            *((_QWORD *)v416 + 43),
            *((_QWORD *)v416 + 44),
            *((_QWORD *)v416 + 37),
            *((_QWORD *)v416 + 26));
          sub_1416AC440(v325, v367);
          LOWORD(v145) = 502;
          sub_140DAFCE0((unsigned int)v333, v145, v144, v143, (__int64)aProxyUpstream, 14);
          v39 = *(_QWORD *)v333;
          v356 = *(__m128i *)&v333[8];
          v357 = *(_OWORD *)&v333[24];
          v358 = *(_OWORD *)&v333[40];
          v359 = *(_OWORD *)&v333[56];
          v360 = *(_OWORD *)&v333[72];
          v361 = *(_OWORD *)&v333[88];
          v362 = *(_OWORD *)&v333[104];
          *(_QWORD *)v363 = *(_QWORD *)&v333[120];
          *(_OWORD *)&v363[8] = *(_OWORD *)v325;
          v364 = *(_QWORD *)&v325[16];
          v40 = v416;
          if ( *(_QWORD *)v367 )
            sub_140001660(v144, *(_QWORD *)v367, 1);
          goto LABEL_217;
        }
        v100 = v416;
        v12 = (__m128i *)(v416 + 27);
        *((_BYTE *)v416 + 418) = 1;
        *((_QWORD *)v100 + 54) = v98;
        *((_QWORD *)v100 + 55) = v99;
        v101 = v318;
        v102 = v319;
        v103 = v320;
        v100[28] = v317;
        v100[29] = v101;
        v100[30] = v102;
        v100[31] = v103;
        v100[32] = v321;
        v100[33] = v322;
        v100[34] = v323;
        *((_QWORD *)v100 + 70) = v324;
        v104 = *((unsigned __int16 *)v100 + 268);
        *((_WORD *)v100 + 212) = v104;
        v105 = (volatile signed __int64 **)v100 + 41;
        if ( *((_QWORD *)v100 + 41) )
        {
          sub_140D29110(v333, aContentType, 12, v12);
          if ( v333[0] )
          {
            v107 = *((_QWORD *)v416 + 59);
            if ( *(_QWORD *)&v333[16] >= v107 )
              sub_1419390C3(*(_QWORD *)&v333[16], v107, &off_141A426F8);
            v108 = *((_QWORD *)v416 + 58);
            v109 = *(_QWORD *)(v108 + 104LL * *(_QWORD *)&v333[16] + 32);
            v106 = *(_QWORD *)(v108 + 104LL * *(_QWORD *)&v333[16] + 40);
            if ( v106 )
            {
              v110 = 0;
              while ( (unsigned __int8)(*(_BYTE *)(v109 + v110) - 32) < 0x5Fu || *(_BYTE *)(v109 + v110) == 9 )
              {
                if ( v106 == ++v110 )
                  goto LABEL_146;
              }
              v109 = 0;
            }
            else
            {
              v106 = 0;
            }
          }
          else
          {
            v109 = 0;
          }
LABEL_146:
          sub_1401F9C20((char *)v100 + 328, v104, v109, v106);
          v100 = v416;
        }
        sub_140DABD30(
          *((_QWORD *)v100 + 36),
          *((_QWORD *)v100 + 28),
          *((_QWORD *)v100 + 29),
          *((_QWORD *)v100 + 43),
          *((_QWORD *)v100 + 44),
          *((_QWORD *)v100 + 37),
          *((_QWORD *)v100 + 26));
        if ( (unsigned __int16)(v97->m128i_i16[0] - 200) <= 0x63u )
          break;
        v4 = v416;
        *((_BYTE *)v416 + 418) = 0;
        sub_1418F44E0((__m128i *)((char *)v4 + 568), v12, 0x88u);
        *((_WORD *)v4 + 528) = 1;
LABEL_69:
        v415 = (__int64)v4 + 568;
        sub_140D40480((__int64)v333, (__int64)v4 + 568, a3);
        v39 = *(_QWORD *)v333;
        if ( *(_QWORD *)v333 == -2 )
        {
          v5->m128i_i64[0] = -1;
          result = 4;
          goto LABEL_316;
        }
        v332 = *(_OWORD *)&v333[24];
        v331 = *(_OWORD *)&v333[8];
        v310 = *(_OWORD *)&v333[40];
        v311 = *(_OWORD *)&v333[56];
        v312 = *(_OWORD *)&v333[72];
        v313 = *(_OWORD *)&v333[88];
        v314 = *(_OWORD *)&v333[104];
        v315 = *(_OWORD *)&v333[120];
        v316 = v334;
        if ( *((_BYTE *)v416 + 1057) == 3 )
        {
          sub_140D11B60((__int64)(v416 + 44));
        }
        else if ( !*((_BYTE *)v416 + 1057) )
        {
          sub_140402120(v415);
          v58 = *((_QWORD **)v416 + 87);
          if ( *v58 )
            sub_140001660(v58[1], *v58, 1);
          sub_140001660(v58, 88, 8);
        }
        if ( (_DWORD)v39 != -1 )
        {
          *(_QWORD *)v333 = v39;
          *(_OWORD *)&v333[8] = v331;
          *(_OWORD *)&v333[24] = v332;
          v334 = v316;
          *(_OWORD *)&v333[120] = v315;
          *(_OWORD *)&v333[104] = v314;
          *(_OWORD *)&v333[88] = v313;
          *(_OWORD *)&v333[72] = v312;
          *(_OWORD *)&v333[56] = v311;
          *(_OWORD *)&v333[40] = v310;
          v40 = v416;
          if ( *((_QWORD *)v416 + 41) )
            sub_1401F9370((_DWORD)v416 + 328, (unsigned int)aErrorBodyRead, 15, 1, 0);
          sub_1418F44E0(&v356, (const __m128i *)&v333[8], 0x90u);
          goto LABEL_217;
        }
        *(_OWORD *)&v347[16] = v332;
        *(_OWORD *)v347 = v331;
        v59 = (_QWORD *)v416 + 41;
        if ( *((_QWORD *)v416 + 41) )
        {
          v60 = *((unsigned __int16 *)v416 + 212);
          v417 = 1;
          sub_1401F6C20((char *)v416 + 328, v60, *(_QWORD *)&v347[8], *(_QWORD *)&v347[16]);
        }
        v61 = v416;
        if ( !*((_QWORD *)v416 + 38) )
        {
LABEL_137:
          v111 = 502;
          if ( (unsigned __int16)(*((_DWORD *)v61 + 106) - 1000) >= 0xFC7Cu )
            v111 = *((_DWORD *)v61 + 106);
          if ( *((_QWORD *)v61 + 41) )
          {
            v417 = 1;
            sub_1401F9370((_DWORD)v59, (unsigned int)aHttpError_0, 10, 1, 0);
          }
          v417 = 1;
          sub_14164BEA0(v325);
          v373 = *(__m256i *)&v325[8];
          v374 = *(_OWORD *)&v325[40];
          v375 = *(_OWORD *)&v325[56];
          v376 = *(_OWORD *)&v325[72];
          v377 = v326;
          v112 = v327;
          LODWORD(v385) = v328;
          WORD2(v385) = v329;
          if ( *(_QWORD *)v325 != -1 )
          {
            v377 = v326;
            v376 = *(_OWORD *)&v325[72];
            v375 = *(_OWORD *)&v325[56];
            v374 = *(_OWORD *)&v325[40];
            v373 = *(__m256i *)&v325[8];
            LODWORD(v385) = v328;
            WORD2(v385) = v329;
            v112 = v111;
          }
          *(_QWORD *)v367 = *(_QWORD *)v325;
          *(__m256i *)&v367[8] = v373;
          *(_OWORD *)&v367[40] = v374;
          *(_OWORD *)&v367[56] = v375;
          *(_OWORD *)&v367[72] = v376;
          *(_OWORD *)&v367[88] = v377;
          v368 = v112;
          v369 = v385;
          v370 = WORD2(v385);
          *(_OWORD *)&v325[32] = xmmword_141A453B8;
          *(_OWORD *)&v325[16] = xmmword_141A453A8;
          *(_QWORD *)v325 = "application/json";
          *(_QWORD *)&v325[8] = 16;
          v417 = 1;
          sub_140CAE850((__int64)v352, (__int64)v367, (__int128 *)v325);
          *(_OWORD *)&v325[16] = *(_OWORD *)&v347[16];
          *(_OWORD *)v325 = *(_OWORD *)v347;
          v396 = 1;
          *(_QWORD *)&v113 = sub_1411C0630(v325);
          if ( *(_QWORD *)v352 == -1 )
          {
            v411 = *((_QWORD *)&v113 + 1);
            v415 = v113;
            if ( **((_QWORD **)&v113 + 1) )
              (**((void (__fastcall ***)(__int64))&v113 + 1))(v415);
            v135 = *(_QWORD *)(v411 + 8);
            if ( v135 )
              sub_140001660(v415, v135, *(_QWORD *)(v411 + 16));
            v417 = 0;
            LOWORD(v135) = 502;
            sub_140DAFCE0((unsigned int)v333, v135, (unsigned int)aBuildErrorBody, 23, (__int64)aProxyUpstream, 14);
          }
          else
          {
            *(_OWORD *)&v333[10] = *(_OWORD *)&v352[10];
            *(_OWORD *)&v333[26] = *(_OWORD *)&v352[26];
            *(_OWORD *)&v333[42] = *(_OWORD *)&v352[42];
            *(_OWORD *)&v333[58] = *(_OWORD *)&v352[58];
            *(_OWORD *)&v333[74] = *(_OWORD *)&v352[74];
            *(_OWORD *)&v333[90] = *(_OWORD *)v353;
            *(_QWORD *)&v333[104] = *(_QWORD *)&v353[14];
            *(_QWORD *)v333 = *(_QWORD *)v352;
            *(_WORD *)&v333[8] = *(_WORD *)&v352[8];
            *(_OWORD *)&v333[112] = v113;
          }
          v40 = v416;
          v136 = *((unsigned __int16 *)v416 + 212);
          if ( (unsigned __int16)(v136 - 500) < 0x64u
            || (v137 = v136 - 401, v137 <= 0x1C) && (v138 = 268435917, _bittest(&v138, v137)) )
          {
            *(_QWORD *)v367 = (char *)v416 + 424;
            *(_QWORD *)&v367[8] = sub_14164CC40;
            sub_1416ABFD0(v325, &unk_141A48981, v367);
            *(_OWORD *)&v363[8] = *(_OWORD *)v325;
            v364 = *(_QWORD *)&v325[16];
            v39 = *(_QWORD *)v333;
            v356 = *(__m128i *)&v333[8];
            v357 = *(_OWORD *)&v333[24];
            v358 = *(_OWORD *)&v333[40];
            v359 = *(_OWORD *)&v333[56];
            v360 = *(_OWORD *)&v333[72];
            v361 = *(_OWORD *)&v333[88];
            v362 = *(_OWORD *)&v333[104];
            *(_QWORD *)v363 = *(_QWORD *)&v333[120];
            v40 = v416;
          }
          else
          {
            *(_OWORD *)v363 = *(_OWORD *)&v333[112];
            v362 = *(_OWORD *)&v333[96];
            v361 = *(_OWORD *)&v333[80];
            v360 = *(_OWORD *)&v333[64];
            v359 = *(_OWORD *)&v333[48];
            v358 = *(_OWORD *)&v333[32];
            v357 = *(_OWORD *)&v333[16];
            v356 = *(__m128i *)v333;
            v39 = 5;
          }
LABEL_217:
          v40[418] = 0;
          v40[417] = 0;
LABEL_55:
          if ( v40[415] )
            sub_14029C800(v416 + 4);
          v52 = (volatile signed __int64 **)v416;
          *((_BYTE *)v416 + 415) = 0;
          if ( !_InterlockedDecrement64(v52[45]) )
            sub_141242F50((char *)v416 + 360);
          if ( *((_BYTE *)v416 + 416) )
            sub_140409B40(v416 + 2);
          v53 = v416;
          *((_BYTE *)v416 + 416) = 0;
          v54 = v53[42];
          if ( v54 )
            sub_140001660(v53[43], v54, 1);
          v55 = (volatile signed __int64 *)v53[41];
          if ( v55 && !_InterlockedDecrement64(v55) )
            sub_1409E5F10((_QWORD *)v416 + 41);
          v56 = v416;
          *((_BYTE *)v416 + 419) = 0;
          v5->m128i_i64[0] = v39;
          sub_1418F44E0((__m128i *)&v5->m128i_u64[1], &v356, 0x90u);
          result = 1;
          goto LABEL_317;
        }
        if ( *((_DWORD *)v416 + 102) < 2u )
        {
          v62 = *((unsigned __int16 *)v416 + 212);
          v417 = 1;
          if ( (unsigned __int8)sub_140DB60D0(
                                  v62,
                                  *(_DWORD *)&v347[8],
                                  *(_DWORD *)&v347[16],
                                  (int)v416 + 32,
                                  (__int64)(v416 + 4)) )
          {
            v63 = v416;
            ++*((_DWORD *)v416 + 102);
            if ( *((_QWORD *)v63 + 41) )
            {
              v417 = 1;
              sub_1401F8E60(v59, (const __m128i *)aOptionalBetaRe, 22);
            }
            goto LABEL_113;
          }
          v61 = v416;
          if ( !*((_QWORD *)v416 + 38) )
            goto LABEL_137;
        }
        if ( *((_BYTE *)v61 + 413) != 1 )
        {
          v64 = v61 + 2;
          v417 = 1;
          v65 = (_BYTE *)sub_1416419F0(aModel_6, 5, v61 + 2);
          if ( !v65 )
            v65 = off_1421E7108;
          v66 = (__int64 *)(v65 + 16);
          v67 = *((_QWORD *)v416 + 37);
          v68 = (__int64 *)(v67 + 104);
          v69 = (__int64 *)(v67 + 112);
          v70 = *v65 == 3;
          v71 = (__int64 *)(v65 + 24);
          if ( v70 )
            v68 = v66;
          v72 = *v68;
          if ( v70 )
            v69 = v71;
          v73 = *v69;
          v417 = 1;
          sub_14022DBF0(v333, v72, v73);
          v61 = v416;
          if ( v333[37] != 2 )
          {
            v417 = 1;
            v74 = sub_14022F3D0(v72, v73);
            v61 = v416;
            if ( !v74 )
            {
              v75 = *((unsigned __int16 *)v416 + 212);
              v417 = 1;
              v76 = sub_140DB69C0(v75, *(_QWORD *)&v347[8], *(_QWORD *)&v347[16]);
              v61 = v416;
              if ( v76 )
              {
                v417 = 1;
                sub_140346E60(v367, v64);
                if ( *(_QWORD *)v367 || __PAIR128__(*(unsigned __int64 *)&v367[8], 0) != *(unsigned __int64 *)&v367[16] )
                {
                  v146 = v416;
                  *((_BYTE *)v416 + 413) = 1;
                  if ( *((_QWORD *)v146 + 41) )
                  {
                    v417 = 1;
                    sub_1401F8E60(v59, (const __m128i *)aThinkingSignat, 27);
                  }
                  if ( *(_QWORD *)off_1421E6EC0 >= 3u )
                  {
                    *(_QWORD *)v325 = *((_QWORD *)v416 + 37);
                    *(_QWORD *)&v325[8] = sub_1400015F0;
                    *(_QWORD *)&v325[16] = v416 + 21;
                    *(_QWORD *)&v325[24] = sub_1400015F0;
                    *(_QWORD *)&v325[32] = v367;
                    *(_QWORD *)&v325[40] = sub_1416BCB10;
                    *(_QWORD *)&v325[48] = &v367[8];
                    *(_QWORD *)&v325[56] = sub_1416BCB10;
                    *(_QWORD *)&v325[64] = &v367[16];
                    *(_QWORD *)&v325[72] = sub_1416BCB10;
                    *(_QWORD *)&v333[48] = 3;
                    *(_QWORD *)&v333[56] = aCodexmateLibCo_8;
                    *(_QWORD *)&v333[64] = 40;
                    *(_QWORD *)&v333[80] = &unk_141A487D1;
                    *(_QWORD *)&v333[88] = v325;
                    *(_QWORD *)v333 = 0;
                    *(_QWORD *)&v333[8] = aCodexmateLibCo_8;
                    *(_OWORD *)&v333[16] = 0x28u;
                    *(_QWORD *)&v333[32] = aSrcCoreRelayPr_0;
                    *(_QWORD *)&v333[40] = 30;
                    *(_QWORD *)&v333[72] = 0x78E00000001LL;
                    v417 = 1;
                    sub_1414D53A0(&v384, v333);
                  }
                  goto LABEL_113;
                }
                v61 = v416;
              }
            }
          }
        }
        if ( !*((_QWORD *)v61 + 38) )
          goto LABEL_137;
        if ( *((_BYTE *)v61 + 414) )
          goto LABEL_137;
        v77 = *((unsigned __int16 *)v61 + 212);
        v417 = 1;
        v78 = sub_140DB04C0(v77, *(_QWORD *)&v347[8], *(_QWORD *)&v347[16]);
        v61 = v416;
        if ( !v78 )
          goto LABEL_137;
        v79 = v416 + 2;
        v417 = 1;
        v80 = (_BYTE *)sub_1416419F0(aOutputConfig_0, 13, v416 + 2);
        v81 = v80;
        if ( v80 && *v80 == 5 )
        {
          v417 = 1;
          sub_140DED130(v333, v80 + 8, aEffort_1, 6);
          if ( v333[0] != 0xFF )
          {
            v417 = 1;
            sub_140409B40(v333);
          }
          if ( !*((_QWORD *)v81 + 3) && *v79 == 5 )
          {
            v417 = 1;
            sub_140DED130(v333, (char *)v416 + 40, aOutputConfig_0, 13);
            if ( v333[0] <= 0xFDu )
            {
              v417 = 1;
              sub_140409B40(v333);
            }
          }
        }
        v82 = v416;
        *((_BYTE *)v416 + 414) = 1;
        if ( *((_QWORD *)v82 + 41) )
        {
          v417 = 1;
          sub_1401F8E60(v59, (const __m128i *)aEffortRejected, 15);
        }
        if ( *(_QWORD *)off_1421E6EC0 >= 3u )
        {
          *(_QWORD *)v325 = *((_QWORD *)v416 + 37);
          *(_QWORD *)&v325[8] = sub_1400015F0;
          *(_QWORD *)&v325[16] = v416 + 21;
          *(_QWORD *)&v325[24] = sub_1400015F0;
          *(_QWORD *)&v333[48] = 3;
          *(_QWORD *)&v333[56] = aCodexmateLibCo_8;
          *(_QWORD *)&v333[64] = 40;
          *(_QWORD *)&v333[80] = &unk_141A48874;
          *(_QWORD *)&v333[88] = v325;
          *(_QWORD *)v333 = 0;
          *(_QWORD *)&v333[8] = aCodexmateLibCo_8;
          *(_OWORD *)&v333[16] = 0x28u;
          *(_QWORD *)&v333[32] = aSrcCoreRelayPr_0;
          *(_QWORD *)&v333[40] = 30;
          *(_QWORD *)&v333[72] = 0x7A800000001LL;
          v417 = 1;
          sub_1414D53A0(&v384, v333);
        }
LABEL_113:
        (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v347 + 32LL))(
          &v347[24],
          *(_QWORD *)&v347[8],
          *(_QWORD *)&v347[16]);
        v35 = v416;
        *((_BYTE *)v416 + 418) = 0;
      }
      v114 = v416;
      if ( *((_BYTE *)v416 + 413) && *(_QWORD *)off_1421E6EC0 >= 3u )
      {
        *(_QWORD *)v325 = *((_QWORD *)v416 + 37);
        *(_QWORD *)&v325[8] = sub_1400015F0;
        *(_QWORD *)&v325[16] = v416 + 21;
        *(_QWORD *)&v325[24] = sub_1400015F0;
        *(_QWORD *)v333 = aCodexmateLibCo_8;
        *(_QWORD *)&v333[8] = 40;
        *(_QWORD *)&v333[16] = aCodexmateLibCo_8;
        *(_QWORD *)&v333[24] = 40;
        *(_QWORD *)&v333[32] = &off_141A48928;
        sub_140BAD520(&unk_141A488D9, v325, 3, v333);
        v114 = v416;
      }
      *((_BYTE *)v114 + 417) = 1;
      sub_1418F44E0(v302, v12, 0x88u);
      *((_BYTE *)v114 + 418) = 0;
      v115 = *((_QWORD *)v114 + 38);
      if ( *((_BYTE *)v114 + 412) )
      {
        if ( v115 )
        {
          v116 = sub_140DBA7A0(v114 + 2);
          v117 = v416;
          v118 = *((_QWORD *)v416 + 38);
          if ( v116 )
          {
            v119 = *((volatile signed __int64 **)v416 + 45);
            if ( _InterlockedIncrement64(v119) > 0 )
            {
              v415 = (__int64)v119;
              *(_QWORD *)v352 = v119;
              v120 = v117;
              sub_1404806C0(v367, *((_QWORD *)v117 + 26), *((_QWORD *)v117 + 27));
              *((_BYTE *)v120 + 415) = 0;
              *(_OWORD *)&v333[80] = v120[9];
              *(_OWORD *)&v333[64] = v120[8];
              v121 = v120[4];
              v122 = v120[5];
              v123 = v120[6];
              *(_OWORD *)&v333[48] = v120[7];
              *(_OWORD *)&v333[32] = v123;
              *(_OWORD *)&v333[16] = v122;
              *(_OWORD *)v333 = v121;
              *((_BYTE *)v120 + 416) = 0;
              v124 = v114[2];
              v334 = v114[3];
              *(_OWORD *)&v333[120] = v124;
              v335 = v415;
              *(_QWORD *)&v333[112] = *(_QWORD *)&v367[16];
              *(_OWORD *)&v333[96] = *(_OWORD *)v367;
              v336 = 2;
              v337 = 0;
              v125 = *((volatile signed __int64 **)v120 + 41);
              if ( !v125 || _InterlockedIncrement64(v125) > 0 )
              {
                sub_140D7A4D0(v325, v333);
                v126 = v416;
                *((_BYTE *)v416 + 417) = 0;
                v127 = *((_QWORD *)v126 + 37);
                v128 = *(_QWORD *)(v127 + 104);
                v129 = *(_QWORD *)(v127 + 112);
                v402 = 1;
                sub_140DD2C50(v333, v118);
                v130 = *((_QWORD *)v126 + 40);
                v131 = *(_OWORD *)(v130 + 32);
                v397 = 1;
                sub_14036E020(v367, v130);
                *(_OWORD *)&v367[32] = v131;
                v397 = 0;
                v132 = sub_140D7A570((unsigned int)v325, (unsigned int)v302, v128, v129, (__int64)v333, (__int64)v367);
                v415 = sub_140487B20(v132, &off_141A4A228);
                v411 = v134;
LABEL_223:
                v171 = v416;
                v172 = **((volatile signed __int64 ***)v416 + 36);
                v173 = _InterlockedIncrement64(v172);
                if ( !((v173 < 0) ^ v133 | (v173 == 0)) )
                {
                  v373.m256i_i64[0] = (__int64)v172;
                  v174 = *(volatile signed __int64 **)(*((_QWORD *)v171 + 36) + 8LL);
                  v175 = _InterlockedIncrement64(v174);
                  if ( !((v175 < 0) ^ v133 | (v175 == 0)) )
                  {
                    *(_QWORD *)v352 = v174;
                    v176 = *((_QWORD *)v171 + 37);
                    v410 = 1;
                    v177 = v171;
                    sub_1416AC440(v333, v176);
                    v178 = *((_QWORD *)v177 + 38);
                    v179 = *(const __m128i **)v352;
                    *(_QWORD *)v367 = v172;
                    *(_QWORD *)v325 = *(_QWORD *)v352;
                    nullsub_1(v180);
                    v181 = sub_140001650(24, 8);
                    if ( !v181 )
                    {
                      v401 = (__m128i *)v179;
                      sub_141938D11(8, 24);
                    }
                    *(_QWORD *)v181 = 1;
                    *(_QWORD *)(v181 + 8) = 1;
                    *(_BYTE *)(v181 + 16) = 0;
                    *(_QWORD *)&v347[16] = *(_QWORD *)&v333[16];
                    *(_OWORD *)v347 = *(_OWORD *)v333;
                    *(_QWORD *)&v350 = v415;
                    *((_QWORD *)&v350 + 1) = v411;
                    *(_QWORD *)&v347[24] = aCodexResponses;
                    *(_QWORD *)&v347[32] = 40;
                    *(_QWORD *)&v348 = v181;
                    *((_QWORD *)&v348 + 1) = v179;
                    *(_QWORD *)&v349 = v172;
                    BYTE8(v349) = v178 != 0;
                    v414 = 1;
                    sub_14164BEA0(v325);
                    v373 = *(__m256i *)&v325[8];
                    v374 = *(_OWORD *)&v325[40];
                    v375 = *(_OWORD *)&v325[56];
                    v376 = *(_OWORD *)&v325[72];
                    v377 = v326;
                    v182 = v327;
                    LODWORD(v385) = v328;
                    WORD2(v385) = v329;
                    if ( *(_QWORD *)v325 != -1 )
                    {
                      v377 = v326;
                      v376 = *(_OWORD *)&v325[72];
                      v375 = *(_OWORD *)&v325[56];
                      v374 = *(_OWORD *)&v325[40];
                      v373 = *(__m256i *)&v325[8];
                      LODWORD(v385) = v328;
                      WORD2(v385) = v329;
                      v182 = 200;
                    }
                    *(_QWORD *)v367 = *(_QWORD *)v325;
                    *(__m256i *)&v367[8] = v373;
                    *(_OWORD *)&v367[40] = v374;
                    *(_OWORD *)&v367[56] = v375;
                    *(_OWORD *)&v367[72] = v376;
                    *(_OWORD *)&v367[88] = v377;
                    v368 = v182;
                    v369 = v385;
                    v370 = WORD2(v385);
                    v374 = xmmword_141A453B8;
                    *(_OWORD *)&v373.m256i_u64[2] = xmmword_141A453A8;
                    v373.m256i_i64[0] = (__int64)aTextEventStrea;
                    v373.m256i_i64[1] = 17;
                    v414 = 1;
                    sub_140CAE850((__int64)v325, (__int64)v367, (__int128 *)v373.m256i_i8);
                    v374 = xmmword_141A48400;
                    *(_OWORD *)&v373.m256i_u64[2] = xmmword_141A483F0;
                    v373.m256i_i64[0] = (__int64)aNoCache;
                    v373.m256i_i64[1] = 8;
                    v414 = 1;
                    sub_140CAE850((__int64)v367, (__int64)v325, (__int128 *)v373.m256i_i8);
                    *(_QWORD *)v325 = aXAccelBufferin;
                    *(_QWORD *)&v325[8] = 17;
                    *(_QWORD *)&v325[16] = aNo;
                    *(_QWORD *)&v325[24] = 2;
                    v414 = 1;
                    sub_140CAEC50(v352, v367, v325);
                    if ( *(_QWORD *)v347 == -1 )
                    {
                      v409 = 1;
                      sub_141939020(&off_141A45860);
                    }
                    *(_OWORD *)&v325[72] = v350;
                    *(_OWORD *)&v325[56] = v349;
                    *(_OWORD *)&v325[40] = v348;
                    *(_OWORD *)&v325[24] = *(_OWORD *)&v347[24];
                    *(_QWORD *)v325 = *(_QWORD *)v347;
                    *(_OWORD *)&v325[8] = *(_OWORD *)&v347[8];
                    nullsub_1(&v347[24]);
                    v183 = sub_140001650(88, 8);
                    if ( !v183 )
                      sub_141938D11(8, 88);
                    *(_QWORD *)(v183 + 80) = *(_QWORD *)&v325[80];
                    *(_OWORD *)(v183 + 64) = *(_OWORD *)&v325[64];
                    v184 = *(_OWORD *)v325;
                    v185 = *(_OWORD *)&v325[16];
                    v186 = *(_OWORD *)&v325[32];
                    *(_OWORD *)(v183 + 48) = *(_OWORD *)&v325[48];
                    *(_OWORD *)(v183 + 32) = v186;
                    *(_OWORD *)(v183 + 16) = v185;
                    *(_OWORD *)v183 = v184;
                    if ( *(_QWORD *)v352 == -1 )
                    {
                      v415 = v183;
                      sub_140CE6340(v183);
                      sub_140001660(v415, 88, 8);
                      v414 = 0;
                      LOWORD(v187) = 500;
                      sub_140DAFCE0(
                        (unsigned int)v333,
                        v187,
                        (unsigned int)aBuildSseBodyFa,
                        21,
                        (__int64)aProxyUpstream,
                        14);
                    }
                    else
                    {
                      *(_OWORD *)&v333[10] = *(_OWORD *)&v352[10];
                      *(_OWORD *)&v333[26] = *(_OWORD *)&v352[26];
                      *(_OWORD *)&v333[42] = *(_OWORD *)&v352[42];
                      *(_OWORD *)&v333[58] = *(_OWORD *)&v352[58];
                      *(_OWORD *)&v333[74] = *(_OWORD *)&v352[74];
                      *(_OWORD *)&v333[90] = *(_OWORD *)v353;
                      *(_QWORD *)&v333[104] = *(_QWORD *)&v353[14];
                      *(_QWORD *)v333 = *(_QWORD *)v352;
                      *(_WORD *)&v333[8] = *(_WORD *)&v352[8];
                      *(_QWORD *)&v333[112] = v183;
                      *(_QWORD *)&v333[120] = &off_141A45908;
                    }
                    *(_OWORD *)v363 = *(_OWORD *)&v333[112];
                    v362 = *(_OWORD *)&v333[96];
                    v361 = *(_OWORD *)&v333[80];
                    v360 = *(_OWORD *)&v333[64];
                    v359 = *(_OWORD *)&v333[48];
                    v358 = *(_OWORD *)&v333[32];
                    v357 = *(_OWORD *)&v333[16];
                    v356 = *(__m128i *)v333;
                    v39 = 3;
                    goto LABEL_368;
                  }
                }
              }
            }
LABEL_67:
            BUG();
          }
          *((_BYTE *)v416 + 417) = 0;
          sub_1418F44E0((__m128i *)v333, v302, 0x88u);
          v415 = sub_1410D5D80(v333);
          v411 = v166;
          v167 = *((_QWORD *)v416 + 37) + 96LL;
          v403 = 1;
          sub_1416AC440(v352, v167);
          v404 = 1;
          sub_140DD2C50(v325, v118);
          v168 = *((_QWORD *)v416 + 40);
          v169 = *(_OWORD *)(v168 + 32);
          v398 = 1;
          sub_14036E020(v367, v168);
          *(_OWORD *)&v367[32] = v169;
          v170 = *v105;
          if ( *v105 && _InterlockedIncrement64(v170) <= 0 )
            goto LABEL_67;
          v398 = 0;
          sub_140D22330((unsigned int)v333, v415, v411, (unsigned int)v352, (__int64)v325, (__int64)v367, (__int64)v170);
          v415 = sub_140DDE460(v333);
          v165 = &off_141A505F0;
        }
        else
        {
          *((_BYTE *)v114 + 417) = 0;
          sub_1418F44E0((__m128i *)v333, v12, 0x88u);
          v415 = sub_1410D5D80(v333);
          v411 = v158;
          v159 = v416;
          v160 = *((_QWORD *)v416 + 37) + 96LL;
          v405 = 1;
          sub_1416AC440(v352, v160);
          v161 = *((_QWORD *)v159 + 39);
          v162 = *(_OWORD *)(v161 + 32);
          v406 = 1;
          sub_14036CAF0(v367, v161);
          *(_OWORD *)&v367[32] = v162;
          v163 = *((_QWORD *)v159 + 40);
          v164 = *(_OWORD *)(v163 + 32);
          v399 = 1;
          sub_14036E020(v325, v163);
          *(_OWORD *)&v325[32] = v164;
          v399 = 0;
          sub_140D220B0((unsigned int)v333, v415, v411, (unsigned int)v352, (__int64)v367, (__int64)v325);
          v415 = sub_140DDE3D0(v333);
          v165 = &off_141A505C8;
        }
        v411 = (__int64)v165;
        goto LABEL_223;
      }
      v147 = v114 + 2;
      if ( (v115 == 0) | (unsigned __int8)sub_140DBA7A0(v147) ^ 1 )
      {
        v4 = v416;
        *((_BYTE *)v416 + 417) = 0;
        sub_1418F44E0(v97, v302, 0x88u);
        *((_WORD *)v4 + 456) = 0;
LABEL_188:
        v415 = (__int64)v4 + 424;
        sub_140D40480((__int64)v333, (__int64)v4 + 424, a3);
        v39 = *(_QWORD *)v333;
        if ( *(_QWORD *)v333 == -2 )
        {
          v5->m128i_i64[0] = -1;
          result = 6;
          goto LABEL_316;
        }
        v330 = *(__m256i *)&v333[8];
        v303 = *(_OWORD *)&v333[40];
        v304 = *(_OWORD *)&v333[56];
        v305 = *(_OWORD *)&v333[72];
        v306 = *(_OWORD *)&v333[88];
        v307 = *(_OWORD *)&v333[104];
        v308 = *(_OWORD *)&v333[120];
        v309 = v334;
        if ( *((_BYTE *)v416 + 913) == 3 )
        {
          sub_140D11B60((__int64)(v416 + 35));
        }
        else if ( !*((_BYTE *)v416 + 913) )
        {
          sub_140402120(v415);
          v154 = *((_QWORD **)v416 + 69);
          if ( *v154 )
            sub_140001660(v154[1], *v154, 1);
          sub_140001660(v154, 88, 8);
        }
        if ( (_DWORD)v39 == -1 )
        {
          v373 = v330;
          v155 = (__int64 *)v416 + 41;
          if ( *((_QWORD *)v416 + 41) )
            sub_1401F8050((__int64 *)v416 + 41, v373.m256i_i64[2]);
          *(_OWORD *)v333 = *(_OWORD *)&v373.m256i_u64[1];
          *(_OWORD *)&v333[16] = 0;
          sub_14062F970(v325, v333);
          if ( v325[0] == 0xFF )
          {
            *(_QWORD *)v347 = *(_QWORD *)&v325[8];
            if ( *v155 )
              sub_1401F9370((_DWORD)v155, (unsigned int)aDecodeError, 12, (unsigned int)&unk_141A489E8, 4);
            sub_140DB14C0((__int128 *)v367, *((_QWORD *)v416 + 36));
            LOWORD(v157) = 502;
            v415 = *(_QWORD *)&v367[8];
            sub_140DAFCE0(
              (unsigned int)v333,
              v157,
              *(_DWORD *)&v367[8],
              *(_DWORD *)&v367[16],
              (__int64)aProxyUpstream,
              14);
            *(_OWORD *)v363 = *(_OWORD *)&v333[112];
            v362 = *(_OWORD *)&v333[96];
            v361 = *(_OWORD *)&v333[80];
            v360 = *(_OWORD *)&v333[64];
            v359 = *(_OWORD *)&v333[48];
            v358 = *(_OWORD *)&v333[32];
            v357 = *(_OWORD *)&v333[16];
            v356 = *(__m128i *)v333;
            if ( *(_QWORD *)v367 )
              sub_140001660(v415, *(_QWORD *)v367, 1);
            sub_14002F910(v347);
            v39 = 5;
            (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v373.m256i_i64[0] + 32))(
              &v373.m256i_u64[3],
              v373.m256i_i64[1],
              v373.m256i_i64[2]);
          }
          else
          {
            *(_OWORD *)&v352[16] = *(_OWORD *)&v325[16];
            *(_OWORD *)v352 = *(_OWORD *)v325;
            v156 = *((__m128i **)v416 + 38);
            if ( v156 )
            {
              if ( *v155 )
                sub_1401F5920(v155, (__int64)v352);
              sub_140302D50((__m128i *)v367, (__m128i *)v352, v156, *((__int64 **)v416 + 40), (__int64)&unk_1419E7C48);
            }
            else
            {
              sub_1402F5E70(v367, v352, *((_QWORD *)v416 + 39));
            }
            if ( *v155 )
            {
              v389 = 1;
              sub_1401F5C90(v155, (__int64)v352, (__int64)v367);
            }
            *(_OWORD *)&v325[16] = *(_OWORD *)&v367[16];
            *(_OWORD *)v325 = *(_OWORD *)v367;
            v389 = 0;
            sub_140DC30A0(v333, v325);
            *(_WORD *)&v333[104] = 200;
            v356 = *(__m128i *)v333;
            v357 = *(_OWORD *)&v333[16];
            v358 = *(_OWORD *)&v333[32];
            v359 = *(_OWORD *)&v333[48];
            v360 = *(_OWORD *)&v333[64];
            v361 = *(_OWORD *)&v333[80];
            *(_OWORD *)v363 = *(_OWORD *)&v333[112];
            *(_QWORD *)&v362 = *(_QWORD *)&v333[96];
            WORD4(v362) = 200;
            *(_DWORD *)((char *)&v362 + 10) = *(_DWORD *)&v333[106];
            HIWORD(v362) = *(_WORD *)&v333[110];
            sub_140409B40(v352);
            (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v373.m256i_i64[0] + 32))(
              &v373.m256i_u64[3],
              v373.m256i_i64[1],
              v373.m256i_i64[2]);
            v39 = 3;
          }
        }
        else
        {
          *(_QWORD *)v333 = v39;
          *(__m256i *)&v333[8] = v330;
          v334 = v309;
          *(_OWORD *)&v333[120] = v308;
          *(_OWORD *)&v333[104] = v307;
          *(_OWORD *)&v333[88] = v306;
          *(_OWORD *)&v333[72] = v305;
          *(_OWORD *)&v333[56] = v304;
          *(_OWORD *)&v333[40] = v303;
          if ( *((_QWORD *)v416 + 41) )
            sub_1401F9370((_DWORD)v416 + 328, (unsigned int)aBodyReadError, 15, 1, 0);
          sub_1418F44E0(&v356, (const __m128i *)&v333[8], 0x90u);
        }
LABEL_368:
        v40 = v416;
        *((_BYTE *)v416 + 417) = 0;
        goto LABEL_55;
      }
      v148 = v416;
      *((_QWORD *)v416 + 53) = v115;
      v149 = (volatile signed __int64 *)v148[45];
      if ( _InterlockedIncrement64(v149) <= 0 )
        goto LABEL_67;
      v415 = (__int64)v149;
      v385 = (__int64)v149;
      v150 = v148;
      sub_1404806C0(&v373, v148[26], v148[27]);
      *((_BYTE *)v150 + 415) = 0;
      *(_OWORD *)&v367[80] = *((_OWORD *)v150 + 9);
      *(_OWORD *)&v367[64] = *((_OWORD *)v150 + 8);
      v151 = *((_OWORD *)v150 + 4);
      v152 = *((_OWORD *)v150 + 5);
      v153 = *((_OWORD *)v150 + 6);
      *(_OWORD *)&v367[48] = *((_OWORD *)v150 + 7);
      *(_OWORD *)&v367[32] = v153;
      *(_OWORD *)&v367[16] = v152;
      *(_OWORD *)v367 = v151;
      sub_140DCDE40(v352, v147);
      v335 = v415;
      *(_OWORD *)&v333[96] = *(_OWORD *)v373.m256i_i8;
      *(_QWORD *)&v333[112] = v373.m256i_i64[2];
      *(_OWORD *)v333 = *(_OWORD *)v367;
      *(_OWORD *)&v333[16] = *(_OWORD *)&v367[16];
      *(_OWORD *)&v333[32] = *(_OWORD *)&v367[32];
      *(_OWORD *)&v333[48] = *(_OWORD *)&v367[48];
      *(_OWORD *)&v333[64] = *(_OWORD *)&v367[64];
      *(_OWORD *)&v333[80] = *(_OWORD *)&v367[80];
      v334 = *(_OWORD *)&v352[16];
      *(_OWORD *)&v333[120] = *(_OWORD *)v352;
      v336 = 2;
      v337 = 0;
      if ( *v105 )
      {
        if ( _InterlockedIncrement64(*v105) <= 0 )
          goto LABEL_67;
      }
      sub_140D7A4D0(v367, v333);
      v4 = v416;
      *((_BYTE *)v416 + 417) = 0;
      sub_1418F44E0(v338, v302, 0x88u);
      sub_1418F44E0((__m128i *)v333, (const __m128i *)v367, 0xB8u);
      sub_1418F44E0((__m128i *)v325, (const __m128i *)v333, 0x2D0u);
      sub_1418F44E0(v12, (const __m128i *)v325, 0x2D0u);
      v411 = (__int64)(v4 + 72);
      *((_BYTE *)v4 + 1152) = 0;
LABEL_7:
      *(_DWORD *)((char *)v4 + 1153) = 65792;
      sub_1418F44E0((__m128i *)v4 + 47, v12, 0xB8u);
      sub_1418F44E0((__m128i *)((char *)v4 + 936), (const __m128i *)((char *)v4 + 616), 0x88u);
      *((_QWORD *)v4 + 134) = 0;
      *((_QWORD *)v4 + 135) = 8;
      *((_QWORD *)v4 + 136) = 0;
      *((_QWORD *)v4 + 138) = 0;
      *((_QWORD *)v4 + 140) = 0;
      *((_BYTE *)v4 + 1096) = 5;
      while ( 2 )
      {
        *((_QWORD *)v4 + 141) = 0;
        *((_QWORD *)v4 + 142) = 1;
        *((_QWORD *)v4 + 143) = 0;
LABEL_238:
        *((_QWORD *)v4 + 145) = (char *)v4 + 936;
        *((_BYTE *)v4 + 1184) = 0;
LABEL_239:
        v188 = (__int64 *)v4 + 145;
        v379 = v411;
        v378 = (__int64)v12;
        sub_140D36120(v333, (char *)v4 + 1160, a3);
        if ( *(_QWORD *)v333 == 2 )
        {
          v51 = 3;
          goto LABEL_283;
        }
        v189 = *(__m128i **)&v333[8];
        v191 = *(_QWORD *)&v333[24];
        v190 = *(_QWORD *)&v333[16];
        v192 = *(_QWORD *)&v333[32];
        v415 = (__int64)v12;
        if ( *(_DWORD *)v333 != 1 )
        {
          v195 = v416;
          if ( *(_QWORD *)&v333[8] )
            goto LABEL_270;
LABEL_245:
          *(_OWORD *)v333 = v195[71];
          *(_OWORD *)&v333[16] = 0;
          v372 = v411;
          v371 = v12;
          sub_14062F970(v367, v333);
          v196 = v367[0];
          if ( v367[0] != 0xFF )
          {
            v401 = v5;
            *(_DWORD *)&v333[3] = *(_DWORD *)&v367[4];
            *(_DWORD *)v333 = *(_DWORD *)&v367[1];
            v197 = *(_QWORD *)&v367[8];
            v198 = v416;
            v44 = (__int128 *)((char *)v416 + 1272);
            v199 = *(_OWORD *)&v367[16];
            *((_BYTE *)v416 + 1153) = 1;
            *((_BYTE *)v198 + 1272) = v196;
            v200 = *(_DWORD *)&v333[3];
            *(_DWORD *)((char *)v198 + 1273) = *(_DWORD *)v333;
            *((_DWORD *)v198 + 319) = v200;
            *((_QWORD *)v198 + 160) = v197;
            *(__int128 *)((char *)v198 + 1288) = v199;
            v400 = (__int64)(v198 + 47);
            v201 = v411;
            if ( *((_QWORD *)v198 + 116) )
            {
              v382 = v411;
              v381 = (__int64)v12;
              sub_1401F5920((__int64 *)v416 + 116, (__int64)v44);
            }
            v382 = v201;
            v381 = (__int64)v12;
            v202 = (_QWORD *)sub_1416419F0(aContent_8, 7, v44);
            if ( !v202 )
              v202 = off_1421E7108;
            if ( *(_BYTE *)v202 == 4 )
            {
              v204 = v416;
              *((_QWORD *)v416 + 145) = v202 + 1;
              v205 = v204 + 67;
              v206 = (const char *)v202[2];
              v207 = v202[3];
              v208 = (__int64)&v206[32 * v207];
              v209 = (__int64 *)(v204 + 68);
              v210 = *((_QWORD *)v204 + 136);
              if ( v207 > *((_QWORD *)v204 + 134) - v210 )
              {
                v388 = (__int64)&v206[32 * v207];
                v383 = v206;
                v382 = v411;
                v381 = v415;
                sub_14190D590((_DWORD)v204 + 1072, v210, v207, 8, 32);
                v210 = *v209;
                v206 = v383;
                v208 = v388;
              }
              v211 = *((_QWORD *)v416 + 135);
              *(_QWORD *)v333 = v209;
              *(_QWORD *)&v333[8] = v210;
              *(_QWORD *)&v333[16] = v211;
              v212 = v411;
              v382 = v411;
              v213 = v415;
              v381 = v415;
              sub_1401AD960(v206, v208, v333);
              v382 = v212;
              v381 = v213;
              v214 = (void *)sub_1416419F0(aUsage_4, 5, v44);
              v215 = (__int128 *)((char *)v416 + 1096);
              if ( !v214 )
                v214 = off_1421E7108;
              v216 = v411;
              v382 = v411;
              v217 = v415;
              v381 = v415;
              sub_140280F90((char *)v416 + 1096, v214);
              v382 = v216;
              v381 = v217;
              v218 = (_QWORD *)sub_1416419F0(aStopReason_2, 11, v44);
              if ( !v218 )
                v218 = off_1421E7108;
              if ( *(_BYTE *)v218 == 3
                && v218[3] == 10
                && (v219 = v218[2],
                    v220 = *(_QWORD *)v219 ^ 0x75745F6573756170LL,
                    !(v220 | *(unsigned __int16 *)(v219 + 8) ^ 0x6E72LL)) )
              {
                *(_QWORD *)&v354 = 0;
                v355 = 0;
                nullsub_1(v220);
                v221 = (_DWORD *)sub_140001650(4, 1);
                v5 = v401;
                if ( !v221 )
                  sub_141938D2B(1, 4);
                *v221 = 1701605234;
                v385 = 4;
                v386 = v221;
                v387 = 4;
                nullsub_1(v222);
                v223 = sub_140001650(9, 1);
                v388 = v223;
                if ( !v223 )
                  sub_141938D2B(1, 9);
                *(_QWORD *)v223 = 0x6E61747369737361LL;
                *(_BYTE *)(v223 + 8) = 116;
                v333[0] = 3;
                *(_QWORD *)&v333[8] = 9;
                *(_QWORD *)&v333[16] = v223;
                *(_QWORD *)&v333[24] = 9;
                sub_140E72AA0(v367, &v354, &v385, v333);
                if ( v367[0] != 0xFF )
                  sub_140409B40(v367);
                nullsub_1(v224);
                v225 = (_DWORD *)sub_140001650(7, 1);
                if ( !v225 )
                  sub_141938D2B(1, 7);
                *(_DWORD *)((char *)v225 + 3) = 1953391988;
                *v225 = 1953394531;
                v385 = 7;
                v386 = v225;
                v387 = 7;
                v226 = *v188;
                v408 = 1;
                sub_140C0FE40(v333, v226);
                if ( v333[0] == 0xFF )
                {
                  v342[0] = *(_QWORD *)&v333[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_6,
                    43,
                    (unsigned int)v342,
                    (unsigned int)&off_141A498A8,
                    (__int64)&off_141A47888);
                }
                *(_OWORD *)&v367[16] = *(_OWORD *)&v333[16];
                *(_OWORD *)v367 = *(_OWORD *)v333;
                v408 = 0;
                sub_140E72AA0(v333, &v354, &v385, v367);
                if ( v333[0] != 0xFF )
                  sub_140409B40(v333);
                *(_OWORD *)&v373.m256i_u64[1] = v354;
                v373.m256i_i64[3] = v355;
                v227 = v416;
                *((_BYTE *)v416 + 1156) = 1;
                v373.m256i_i8[0] = 5;
                *((_BYTE *)v227 + 1153) = 0;
                v228 = *v44;
                *(_OWORD *)&v333[16] = v44[1];
                *(_OWORD *)v333 = v228;
                v366 = v411;
                v365 = v415;
                sub_140409B40(v333);
                v4 = v416;
                *((_BYTE *)v416 + 1156) = 0;
                v229 = *(_OWORD *)v373.m256i_i8;
                v230 = *(_OWORD *)&v373.m256i_u64[2];
                v231 = *(_OWORD *)v333;
                v232 = *(_OWORD *)&v333[16];
                v233 = *(_OWORD *)&v333[64];
                *(_OWORD *)v367 = *(_OWORD *)v333;
                *(_OWORD *)&v367[16] = *(_OWORD *)&v333[16];
                *(__m256i *)&v367[32] = v373;
                *(_OWORD *)&v367[64] = *(_OWORD *)&v333[64];
                *(_QWORD *)&v367[80] = *(_QWORD *)&v333[80];
                *((_QWORD *)v4 + 156) = *(_QWORD *)&v333[80];
                v4[77] = v233;
                v4[76] = v230;
                v4[75] = v229;
                v4[74] = v232;
                v4[73] = v231;
                *((_QWORD *)v4 + 157) = v400;
                *((_BYTE *)v4 + 1265) = 0;
LABEL_41:
                v401 = (__m128i *)(v4 + 73);
                sub_140D36390((__m128i *)v333, (__int64)(v4 + 73), (__int64)a3);
                v41 = *(_QWORD *)v333;
                if ( *(_QWORD *)v333 == -2 )
                {
                  v51 = 4;
LABEL_283:
                  *(_BYTE *)v411 = v51;
                  goto LABEL_315;
                }
                v42 = *(_QWORD *)&v333[8];
                v400 = *(_QWORD *)&v333[24];
                v43 = *(__m128i **)&v333[16];
                v388 = *(_QWORD *)&v333[40];
                v383 = *(const char **)&v333[32];
                v44 = *(_OWORD **)&v333[48];
                *(_OWORD *)v352 = *(_OWORD *)&v333[56];
                *(_OWORD *)&v352[16] = *(_OWORD *)&v333[72];
                *(_OWORD *)&v352[32] = *(_OWORD *)&v333[88];
                *(_OWORD *)&v352[48] = *(_OWORD *)&v333[104];
                *(_OWORD *)&v352[64] = *(_OWORD *)&v333[120];
                if ( *((_BYTE *)v416 + 1265) == 3 )
                {
                  sub_140D1A820(*((_QWORD *)v416 + 154), *((_QWORD *)v416 + 155));
                  *((_BYTE *)v416 + 1264) = 0;
                  if ( (_DWORD)v41 == -1 )
                    goto LABEL_52;
                  goto LABEL_46;
                }
                if ( !*((_BYTE *)v416 + 1265) )
                {
                  v366 = v411;
                  v365 = v415;
                  sub_140409B40(v416 + 75);
                }
                if ( (_DWORD)v41 != -1 )
                {
LABEL_46:
                  v343 = v41;
                  v351 = v44;
                  v401 = v43;
                  v380 = (const __m128i *)v42;
                  sub_140402120((char *)v416 + 936);
                  v4 = v416;
                  v45 = *((_QWORD **)v416 + 133);
                  if ( *v45 )
                    sub_140001660(v45[1], *v45, 1);
                  sub_140001660(v45, 88, 8);
                  *((_QWORD *)v4 + 117) = v343;
                  *((_QWORD *)v4 + 118) = v380;
                  *((_QWORD *)v4 + 119) = v401;
                  *((_QWORD *)v4 + 120) = v400;
                  *((_QWORD *)v4 + 121) = v383;
                  *((_QWORD *)v4 + 122) = v388;
                  *((_QWORD *)v4 + 123) = v351;
                  v46 = *(_OWORD *)&v352[16];
                  v47 = *(_OWORD *)&v352[32];
                  v48 = *(_OWORD *)&v352[48];
                  v4[62] = *(_OWORD *)v352;
                  v4[63] = v46;
                  v4[64] = v47;
                  v4[65] = v48;
                  v4[66] = *(_OWORD *)&v352[64];
                  *((_BYTE *)v4 + 1156) = 0;
                  *((_BYTE *)v4 + 1153) = 0;
                  v49 = *((_QWORD *)v4 + 141);
                  v12 = (__m128i *)v415;
                  if ( v49 )
                    sub_140001660(*((_QWORD *)v4 + 142), v49, 1);
                  continue;
                }
LABEL_52:
                v50 = v416;
                *((_BYTE *)v416 + 1156) = 0;
                v12 = (__m128i *)v415;
                if ( !*((_BYTE *)v50 + 1153) )
                {
LABEL_302:
                  v250 = v416;
                  *((_BYTE *)v416 + 1153) = 0;
                  v251 = *((_QWORD *)v250 + 141);
                  if ( !v251 )
                    goto LABEL_304;
                  goto LABEL_303;
                }
              }
              else
              {
                *((_BYTE *)v416 + 1155) = 0;
                *(_QWORD *)&v333[24] = *((_QWORD *)v205 + 2);
                *(_OWORD *)&v333[8] = *v205;
                v333[0] = 4;
                v394 = 1;
                v400 = sub_141641AF0(aContent_8, 7, v44);
                sub_140409B40(v400);
                v5 = v401;
                v241 = *(_OWORD *)v333;
                v242 = (_OWORD *)v400;
                *(_OWORD *)(v400 + 16) = *(_OWORD *)&v333[16];
                *v242 = v241;
                if ( *(_BYTE *)v215 != 5 )
                {
                  v382 = v411;
                  v381 = v415;
                  sub_141939020(&off_141A478A0);
                }
                v50 = v416;
                if ( *((_QWORD *)v416 + 140) )
                {
                  *((_BYTE *)v416 + 1154) = 0;
                  v243 = *v215;
                  *(_OWORD *)&v333[16] = v215[1];
                  *(_OWORD *)v333 = v243;
                  v395 = 1;
                  v400 = sub_141641AF0(aUsage_4, 5, v44);
                  sub_140409B40(v400);
                  v244 = *(_OWORD *)v333;
                  v245 = (_OWORD *)v400;
                  *(_OWORD *)(v400 + 16) = *(_OWORD *)&v333[16];
                  *v245 = v244;
                  v50 = v416;
                }
                *((_BYTE *)v50 + 1153) = 0;
                v43 = *((__m128i **)v50 + 159);
                v400 = *((_QWORD *)v50 + 160);
                v383 = *((const char **)v50 + 161);
                v388 = *((_QWORD *)v50 + 162);
                v42 = -1;
                v12 = (__m128i *)v415;
                if ( !*((_BYTE *)v50 + 1153) )
                  goto LABEL_302;
              }
            }
            else
            {
              nullsub_1(v203);
              v42 = 39;
              v254 = (__m128i *)sub_140001650(39, 1);
              if ( !v254 )
              {
                v382 = v411;
                v381 = v415;
                sub_141938D2B(1, 39);
              }
              v43 = v254;
              qmemcpy(v254, "Anthropic response has no content array", 39);
              LOWORD(v44) = 502;
              v388 = 16;
              v383 = aStreamTruncate;
              v400 = 39;
              v50 = v416;
              v12 = (__m128i *)v415;
              v5 = v401;
              if ( !*((_BYTE *)v416 + 1153) )
                goto LABEL_302;
            }
            v372 = v411;
            v371 = v12;
            sub_140409B40((char *)v50 + 1272);
            goto LABEL_302;
          }
          *(_QWORD *)v333 = *(_QWORD *)&v367[8];
          v372 = v411;
          v371 = v12;
          sub_14002F910(v333);
          nullsub_1(v252);
          v42 = 31;
          v253 = (__m128i *)sub_140001650(31, 1);
          if ( !v253 )
          {
            v372 = v411;
            v371 = v12;
            sub_141938D2B(1, 31);
          }
          v43 = v253;
          qmemcpy(v253, "Invalid Anthropic response JSON", 31);
          LOWORD(v44) = 502;
          v388 = 16;
          v383 = aStreamTruncate;
          v400 = 31;
          goto LABEL_302;
        }
        break;
      }
      v401 = *(__m128i **)&v333[8];
      v385 = *(_QWORD *)&v333[8];
      v193 = sub_14122E5A0(&v385);
      v194 = &unk_141A4D452;
      if ( v193 )
        v194 = &unk_141A4D46B;
      v373.m256i_i64[0] = (__int64)v194;
      v373.m256i_i64[1] = 9LL * (v193 ^ 1u) + 16;
      *(_QWORD *)v367 = &v373;
      *(_QWORD *)&v367[8] = sub_140186EE0;
      sub_1416ABFD0(v333, &unk_141A4D47B, v367);
      v388 = v373.m256i_i64[1];
      v383 = (const char *)v373.m256i_i64[0];
      v43 = *(__m128i **)&v333[8];
      v42 = *(_QWORD *)v333;
      v400 = *(_QWORD *)&v333[16];
      v379 = v411;
      v12 = (__m128i *)v415;
      v378 = v415;
      sub_140D19140(v401);
      if ( v42 == -1 )
      {
        v189 = v43;
        v195 = v416;
        v191 = (unsigned __int64)v383;
        v190 = v400;
        v192 = v388;
        if ( !v189 )
          goto LABEL_245;
LABEL_270:
        *(_QWORD *)v333 = v189;
        *(_QWORD *)&v333[8] = v190;
        *(_QWORD *)&v333[16] = v191;
        *(_QWORD *)&v333[24] = v192;
        if ( *((_QWORD *)v195 + 116) )
        {
          sub_1401F8050((__int64 *)v195 + 116, v191);
          v191 = *(_QWORD *)&v333[16];
          v195 = v416;
        }
        v234 = *((_QWORD *)v195 + 115);
        v235 = 0;
        if ( v234 <= 0x20000000 )
          v235 = 0x20000000 - v234;
        if ( v191 > v235 )
        {
          nullsub_1(v235);
          v42 = 46;
          v246 = sub_140001650(46, 1);
          v12 = (__m128i *)v415;
          if ( !v246 )
            sub_141938D2B(1, 46);
          v43 = (__m128i *)v246;
          qmemcpy((void *)(v246 + 16), "uation exceeds response budget", 30);
          v247 = xmmword_141A4A250;
        }
        else
        {
          *((_QWORD *)v195 + 115) = v191 + v234;
          v236 = *((_QWORD *)v195 + 143);
          v237 = 0;
          if ( v236 <= 0x4000000 )
            v237 = 0x4000000 - v236;
          if ( v191 <= v237 )
          {
            v238 = *(const __m128i **)&v333[8];
            v12 = (__m128i *)v415;
            if ( v191 > *((_QWORD *)v195 + 141) - v236 )
            {
              sub_14190D590((_DWORD)v195 + 1128, v236, v191, 1, 1);
              v195 = v416;
              v236 = *((_QWORD *)v416 + 143);
              v12 = (__m128i *)v415;
LABEL_280:
              sub_1418F44E0((__m128i *)(v236 + *((_QWORD *)v195 + 142)), v238, v191);
              v238 = *(const __m128i **)&v333[8];
              v239 = *(_QWORD *)&v333[16];
            }
            else
            {
              v239 = 0;
              if ( v191 )
                goto LABEL_280;
            }
            *((_QWORD *)v195 + 143) = v191 + v236;
            v240 = *(void (__fastcall **)(_BYTE *, const __m128i *, __int64))(*(_QWORD *)v333 + 32LL);
            v379 = v411;
            v378 = (__int64)v12;
            v240(&v333[24], v238, v239);
            v4 = v416;
            goto LABEL_238;
          }
          nullsub_1(0x4000000 - v236);
          v42 = 44;
          v248 = sub_140001650(44, 1);
          v12 = (__m128i *)v415;
          if ( !v248 )
            sub_141938D2B(1, 44);
          v43 = (__m128i *)v248;
          qmemcpy((void *)(v248 + 16), "esponse exceeds buffer limit", 28);
          v247 = xmmword_141A47818;
        }
        *v43 = (__m128i)v247;
        v249 = *(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v333 + 32LL);
        v379 = v411;
        v378 = (__int64)v12;
        v249(&v333[24], *(_QWORD *)&v333[8], *(_QWORD *)&v333[16]);
        LOWORD(v44) = 502;
        v388 = 16;
        v383 = aStreamTruncate;
        v400 = v42;
        goto LABEL_295;
      }
      LOWORD(v44) = 2 * v193 + 502;
LABEL_295:
      v250 = v416;
      v251 = *((_QWORD *)v416 + 141);
      if ( v251 )
LABEL_303:
        sub_140001660(*((_QWORD *)v250 + 142), v251, 1);
LABEL_304:
      if ( *((_BYTE *)v250 + 1154) )
      {
        v346 = v411;
        v345 = v12;
        sub_140409B40((char *)v416 + 1096);
      }
      v415 = (__int64)v12;
      v255 = v416;
      *((_BYTE *)v416 + 1154) = 0;
      if ( *((_BYTE *)v255 + 1155) )
      {
        v256 = *((_OWORD **)v255 + 135);
        v380 = *((const __m128i **)v255 + 136);
        v401 = nullptr;
        v351 = v256;
        while ( v380 != v401 )
        {
          v401 = (__m128i *)((char *)v401 + 1);
          v257 = v256 + 2;
          sub_1403880E0(v256);
          v256 = v257;
        }
        v255 = v416;
        v258 = *((_QWORD *)v416 + 134);
        if ( v258 )
          sub_140001660(*((_QWORD *)v416 + 135), 32 * v258, 8);
      }
      *((_BYTE *)v255 + 1155) = 0;
      sub_140402120((char *)v255 + 936);
      v259 = v416;
      v260 = *((_QWORD **)v416 + 133);
      if ( *v260 )
        sub_140001660(v260[1], *v260, 1);
      sub_140001660(v260, 88, 8);
      v261 = v259 + 47;
      v262 = (_BYTE *)v411;
      v341 = v411;
      v263 = v415;
      v340 = v415;
      sub_140D1D140(v261);
      *v262 = 1;
      if ( v42 != -2 )
      {
        sub_140D11530(v263);
        if ( v42 == -1 )
        {
          *(_QWORD *)v347 = v43;
          *(_QWORD *)&v347[8] = v400;
          *(_QWORD *)&v347[16] = v383;
          *(_QWORD *)&v347[24] = v388;
          v272 = v416;
          sub_140302D50(
            (__m128i *)v367,
            (__m128i *)v347,
            *((__m128i **)v416 + 53),
            *((__int64 **)v416 + 40),
            (__int64)(v416 + 2));
          if ( *((_QWORD *)v272 + 41) )
          {
            v412 = 1;
            sub_1401F5C90((__int64 *)v416 + 41, (__int64)v347, (__int64)v367);
          }
          v412 = 1;
          v273 = (_QWORD *)sub_1416419F0(aStatus_8, 6, v367);
          if ( !v273 )
            v273 = off_1421E7108;
          if ( *(_BYTE *)v273 == 3
            && v273[3] == 6
            && !(*(_DWORD *)v273[2] ^ 0x6C696166 | *(unsigned __int16 *)(v273[2] + 4LL) ^ 0x6465) )
          {
            v291 = *((_QWORD *)v416 + 36);
            v292 = *((_QWORD *)v416 + 37);
            v293 = *(_QWORD *)(v292 + 8);
            v294 = *(_QWORD *)(v292 + 16);
            v412 = 1;
            v295 = sub_141642800(v367, aErrorMessage_1, 14);
            if ( v295 )
            {
              if ( *(_BYTE *)v295 == 3 )
                v296 = *(_QWORD *)(v295 + 16);
              else
                v296 = 0;
              v295 = *(_QWORD *)(v295 + 24);
            }
            else
            {
              v296 = 0;
            }
            v299 = v296 == 0;
            v300 = &unk_141A489AF;
            if ( v296 )
              LODWORD(v300) = v296;
            v301 = 23;
            if ( !v299 )
              v301 = v295;
            v412 = 1;
            sub_140DAE450(v291, v293, v294, (_DWORD)v300, v301);
            *(_OWORD *)&v325[16] = *(_OWORD *)&v367[16];
            *(_OWORD *)v325 = *(_OWORD *)v367;
            v412 = 0;
            sub_140DC30A0(v333, v325);
            *(_WORD *)&v333[104] = 200;
            v356 = *(__m128i *)v333;
            v357 = *(_OWORD *)&v333[16];
            v358 = *(_OWORD *)&v333[32];
            v359 = *(_OWORD *)&v333[48];
            v360 = *(_OWORD *)&v333[64];
            v361 = *(_OWORD *)&v333[80];
            *(_OWORD *)v363 = *(_OWORD *)&v333[112];
            *(_QWORD *)&v362 = *(_QWORD *)&v333[96];
            WORD4(v362) = 200;
            *(_DWORD *)((char *)&v362 + 10) = *(_DWORD *)&v333[106];
            HIWORD(v362) = *(_WORD *)&v333[110];
            v39 = 5;
          }
          else
          {
            *(_OWORD *)&v325[16] = *(_OWORD *)&v367[16];
            *(_OWORD *)v325 = *(_OWORD *)v367;
            v412 = 0;
            sub_140DC30A0(v333, v325);
            *(_WORD *)&v333[104] = 200;
            v356 = *(__m128i *)v333;
            v357 = *(_OWORD *)&v333[16];
            v358 = *(_OWORD *)&v333[32];
            v359 = *(_OWORD *)&v333[48];
            v360 = *(_OWORD *)&v333[64];
            v361 = *(_OWORD *)&v333[80];
            *(_OWORD *)v363 = *(_OWORD *)&v333[112];
            *(_QWORD *)&v362 = *(_QWORD *)&v333[96];
            WORD4(v362) = 200;
            *(_DWORD *)((char *)&v362 + 10) = *(_DWORD *)&v333[106];
            HIWORD(v362) = *(_WORD *)&v333[110];
            v39 = 3;
          }
          sub_140409B40(v347);
        }
        else
        {
          v401 = v43;
          v380 = (const __m128i *)v42;
          if ( *((_QWORD *)v416 + 41) )
            sub_1401F9370((_DWORD)v416 + 328, (unsigned int)aContinuationEr, 18, (_DWORD)v401, v400);
          sub_140DAE450(
            *((_QWORD *)v416 + 36),
            *(_QWORD *)(*((_QWORD *)v416 + 37) + 8LL),
            *(_QWORD *)(*((_QWORD *)v416 + 37) + 16LL),
            (_DWORD)v401,
            v400);
          *(_QWORD *)v339 = 0;
          *(_QWORD *)&v339[16] = 0;
          nullsub_1(v264);
          v265 = sub_140001650(5, 1);
          v267 = (const __m128i *)v383;
          if ( !v265 )
            sub_141938D2B(1, 5);
          *(_BYTE *)(v265 + 4) = 114;
          *(_DWORD *)v265 = 1869771365;
          v342[0] = 5;
          v342[1] = v265;
          v342[2] = 5;
          *(_QWORD *)&v354 = 0;
          v355 = 0;
          nullsub_1(v266);
          v268 = (_DWORD *)sub_140001650(4, 1);
          if ( !v268 )
            sub_141938D2B(1, 4);
          *v268 = 1701869940;
          v385 = 4;
          v386 = v268;
          v387 = 4;
          if ( v388 < 0 )
          {
            v270 = 0;
            v271 = v388;
            goto LABEL_325;
          }
          if ( v388 )
          {
            nullsub_1(v269);
            v270 = 1;
            v271 = v388;
            v274 = (__m128i *)sub_140001650(v388, 1);
            if ( !v274 )
            {
LABEL_325:
              v393 = 1;
              sub_141938D2B(v270, v271);
            }
            v275 = (__int64)v274;
            sub_1418F44E0(v274, v267, v271);
          }
          else
          {
            v275 = 1;
            v271 = 0;
          }
          v333[0] = 3;
          *(_QWORD *)&v333[8] = v271;
          *(_QWORD *)&v333[16] = v275;
          *(_QWORD *)&v333[24] = v271;
          v393 = 0;
          sub_140E72AA0(v367, &v354, &v385, v333);
          if ( v367[0] != 0xFF )
            sub_140409B40(v367);
          nullsub_1(v276);
          v277 = 1;
          v278 = (_DWORD *)sub_140001650(4, 1);
          if ( !v278 )
            sub_141938D2B(1, 4);
          *v278 = 1701080931;
          v385 = 4;
          v386 = v278;
          v387 = 4;
          v280 = v388;
          if ( v388 )
          {
            nullsub_1(v279);
            v281 = (__m128i *)sub_140001650(v280, 1);
            if ( !v281 )
            {
              v392 = 1;
              sub_141938D2B(1, v280);
            }
            v277 = (__int64)v281;
            sub_1418F44E0(v281, v267, v280);
          }
          v333[0] = 3;
          *(_QWORD *)&v333[8] = v280;
          *(_QWORD *)&v333[16] = v277;
          *(_QWORD *)&v333[24] = v280;
          v392 = 0;
          sub_140E72AA0(v367, &v354, &v385, v333);
          if ( v367[0] != 0xFF )
            sub_140409B40(v367);
          v283 = (unsigned __int16)v44;
          nullsub_1(v282);
          v284 = (_DWORD *)sub_140001650(7, 1);
          if ( !v284 )
            sub_141938D2B(1, 7);
          *(_DWORD *)((char *)v284 + 3) = 1701273971;
          *v284 = 1936942445;
          v385 = 7;
          v386 = v284;
          v387 = 7;
          v286 = v401;
          if ( v400 < 0 )
          {
            v287 = 0;
            v288 = v400;
            goto LABEL_350;
          }
          if ( v400 )
          {
            nullsub_1(v285);
            v287 = 1;
            v288 = v400;
            v289 = (__m128i *)sub_140001650(v400, 1);
            if ( !v289 )
            {
LABEL_350:
              v391 = 1;
              sub_141938D2B(v287, v288);
            }
            v290 = (__int64)v289;
            sub_1418F44E0(v289, v286, v288);
          }
          else
          {
            v290 = 1;
            v288 = 0;
          }
          v333[0] = 3;
          *(_QWORD *)&v333[8] = v288;
          *(_QWORD *)&v333[16] = v290;
          *(_QWORD *)&v333[24] = v288;
          v391 = 0;
          sub_140E72AA0(v367, &v354, &v385, v333);
          if ( v367[0] != 0xFF )
            sub_140409B40(v367);
          nullsub_1(v297);
          v298 = (void *)sub_140001650(11, 1);
          if ( !v298 )
            sub_141938D2B(1, 11);
          qmemcpy(v298, "http_status", 11);
          v385 = 11;
          v386 = v298;
          v387 = 11;
          v333[0] = 2;
          *(_QWORD *)&v333[8] = 0;
          *(_QWORD *)&v333[16] = v283;
          sub_140E72AA0(v367, &v354, &v385, v333);
          if ( v367[0] != 0xFF )
            sub_140409B40(v367);
          *(_OWORD *)&v352[8] = v354;
          *(_QWORD *)&v352[24] = v355;
          v352[0] = 5;
          v390 = 0;
          sub_140E72AA0(&v373, v339, v342, v352);
          if ( v373.m256i_i8[0] != -1 )
            sub_140409B40(&v373);
          *(_OWORD *)&v333[7] = *(_OWORD *)v339;
          *(_QWORD *)&v333[23] = *(_QWORD *)&v339[16];
          *(_OWORD *)&v367[16] = *(_OWORD *)&v339[8];
          *(_OWORD *)&v367[1] = *(_OWORD *)v333;
          v367[0] = 5;
          sub_140DC30A0(v333, v367);
          *(_WORD *)&v333[104] = v283;
          v356 = *(__m128i *)v333;
          v357 = *(_OWORD *)&v333[16];
          v358 = *(_OWORD *)&v333[32];
          v359 = *(_OWORD *)&v333[48];
          v360 = *(_OWORD *)&v333[64];
          v361 = *(_OWORD *)&v333[80];
          *(_OWORD *)v363 = *(_OWORD *)&v333[112];
          *(_QWORD *)&v362 = *(_QWORD *)&v333[96];
          WORD4(v362) = v283;
          *(_DWORD *)((char *)&v362 + 10) = *(_DWORD *)&v333[106];
          HIWORD(v362) = *(_WORD *)&v333[110];
          if ( v380 )
            sub_140001660(v401, v380, 1);
          v39 = 5;
        }
        goto LABEL_368;
      }
LABEL_315:
      v5->m128i_i64[0] = -1;
      result = 5;
LABEL_316:
      v56 = v416;
LABEL_317:
      *((_BYTE *)v56 + 420) = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A48788);
    case 2LL:
      sub_141939400(&off_141A48788);
    case 3LL:
      goto LABEL_125;
    case 4LL:
      goto LABEL_69;
    case 5LL:
      v411 = (__int64)(a2 + 72);
      v12 = (__m128i *)(a2 + 27);
      switch ( *((_BYTE *)a2 + 1152) )
      {
        case 0:
          goto LABEL_7;
        case 1:
          v344 = a2 + 27;
          sub_1419393E0(&off_141A47800);
        case 2:
          v344 = a2 + 27;
          sub_141939400(&off_141A47800);
        case 3:
          goto LABEL_239;
        case 4:
          v415 = (__int64)(a2 + 27);
          goto LABEL_41;
      }
    case 6LL:
      goto LABEL_188;
  }
}
