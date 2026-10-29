// win 1.2.7 | module src/core/relay/quota.rs | ea 0x140b581f0 | name sub_140B581F0
// win 1.2.7 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140B581F0(__m128i *a1, __int64 a2, __int64 a3)
{
  double v3; // xmm0_8
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rdx
  _BYTE *v13; // r10
  __int64 v14; // r9
  _BYTE *v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // r12
  const char *v23; // rbx
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rdi
  _BYTE *v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // r13
  __int128 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // r13
  __int32 v41; // edi
  char result; // al
  __int16 v43; // si
  __int16 v44; // r15
  __int32 v45; // r14d
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int128 v51; // xmm0
  __int128 v52; // xmm2
  __int128 v53; // xmm3
  __int64 v54; // kr18_8
  __int128 v55; // xmm0
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  _BYTE *v61; // r9
  char v62; // al
  _BYTE *v63; // r8
  __int64 v64; // r9
  _BYTE *v65; // r8
  __int64 v66; // r9
  _BYTE *v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r14
  _BYTE *v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  _BYTE *v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // rbx
  void *v79; // r15
  __int64 v80; // r12
  int v81; // eax
  __int64 v82; // r13
  __int64 v83; // rcx
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  bool v88; // si
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rdx
  char *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdi
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int128 v102; // xmm0
  __int64 v103; // rdx
  __int64 v104; // r14
  __int64 v105; // rbx
  __int64 v106; // r12
  const char *v107; // r13
  unsigned __int128 v108; // kr190_16
  __int64 v109; // rax
  __int32 v110; // ebx
  __int16 v111; // si
  __int16 v112; // di
  __int32 v113; // r15d
  int v114; // eax
  __int64 v115; // r14
  char **v116; // r15
  __int64 *v117; // rax
  char **v118; // r12
  char **v119; // r15
  __int64 v120; // rcx
  __int32 v121; // edi
  __int64 *v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rsi
  __int64 v126; // rax
  __int64 *v127; // rax
  __int64 v128; // rsi
  int v129; // r9d
  __int64 v130; // rdi
  __int64 v131; // rdx
  char *v132; // rax
  __int64 v133; // rax
  __int32 v134; // esi
  __int8 v135; // bl
  unsigned __int128 v136; // kr180_16
  int v137; // eax
  __int64 v138; // rdx
  _QWORD *v139; // rax
  __int64 v140; // rdx
  _BYTE *v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // rdx
  __int64 v146; // rdx
  __int32 v147; // esi
  __int8 v148; // bl
  unsigned __int128 v149; // kr1B0_16
  int v150; // eax
  __int32 v151; // esi
  __int8 v152; // bl
  unsigned __int128 v153; // kr1C0_16
  int v154; // eax
  __int32 v155; // esi
  __int8 v156; // bl
  unsigned __int128 v157; // kr1D0_16
  int v158; // eax
  __int32 v159; // edi
  __int8 v160; // si
  unsigned __int128 v161; // kr1E0_16
  int v162; // eax
  __int64 v163; // rsi
  __int64 v164; // rbx
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rbx
  __int64 v168; // r14
  void *v169; // rax
  __int64 v170; // rax
  __int64 v171; // rdi
  __int64 v172; // r15
  char v173; // r12
  void *v174; // rsi
  __int64 v175; // rax
  __int64 v176; // rcx
  __int64 v177; // rax
  __int64 v178; // r13
  unsigned __int8 *v179; // rax
  int v180; // ecx
  __int64 v181; // rax
  __int64 v182; // rdx
  char v183; // r14
  unsigned __int8 *v184; // rax
  int v185; // ecx
  __int64 v186; // rax
  __int64 v187; // rdx
  char v188; // al
  void *v189; // r13
  __int64 v190; // r14
  __int64 v191; // rsi
  __int64 v192; // rax
  __int64 v193; // rcx
  __int64 v194; // rdi
  __int64 v195; // rax
  unsigned __int8 v196; // bl
  __int64 v197; // rax
  __int64 v198; // rsi
  __int64 v199; // rdi
  __int64 v200; // rax
  __int64 v201; // rdi
  __int64 v202; // rbx
  void *v203; // rax
  __int64 v204; // rax
  __int64 v205; // rcx
  __int64 v206; // rbx
  void *v207; // rax
  __int64 v208; // rsi
  __int64 v209; // rbx
  __int64 *v210; // rdi
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rcx
  double v214; // xmm6_8
  __int64 v215; // rax
  __int64 v216; // rbx
  __int64 v217; // r14
  void *v218; // rax
  __int128 v219; // rdi
  __int64 v220; // rax
  __int64 v221; // rcx
  __int64 v222; // rbx
  __int64 v223; // rax
  __int64 v224; // rcx
  __int32 v225; // edi
  __int64 v226; // rax
  __int64 v227; // rcx
  __int64 v228; // rax
  __int128 v229; // xmm0
  __int64 v230; // rdx
  __int64 v231; // rdx
  void *v232; // rax
  __int64 v233; // rax
  bool v234; // zf
  void *v235; // r9
  __int64 v236; // rcx
  __int64 v237; // rbx
  __int64 v238; // rdx
  __int64 v239; // [rsp+38h] [rbp-48h]
  __int64 v240; // [rsp+38h] [rbp-48h]
  __m128i v241[8]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v242; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v243; // [rsp+D8h] [rbp+58h]
  __int128 v244; // [rsp+E8h] [rbp+68h]
  __int128 v245; // [rsp+F8h] [rbp+78h]
  __int128 v246; // [rsp+108h] [rbp+88h]
  __int128 v247; // [rsp+118h] [rbp+98h]
  __int128 v248; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v249; // [rsp+138h] [rbp+B8h]
  __int128 v250; // [rsp+148h] [rbp+C8h]
  __int128 v251; // [rsp+158h] [rbp+D8h]
  __int128 v252; // [rsp+168h] [rbp+E8h]
  __int64 v253; // [rsp+178h] [rbp+F8h]
  __int128 v254; // [rsp+180h] [rbp+100h] BYREF
  __int128 v255; // [rsp+190h] [rbp+110h]
  __int64 v256; // [rsp+1A0h] [rbp+120h]
  __int64 v257; // [rsp+1A8h] [rbp+128h]
  __int64 v258; // [rsp+1B0h] [rbp+130h]
  _BYTE *v259; // [rsp+1B8h] [rbp+138h]
  __int64 v260; // [rsp+1C8h] [rbp+148h]
  _BYTE *v261; // [rsp+1D0h] [rbp+150h]
  __int64 v262; // [rsp+1D8h] [rbp+158h]
  __int64 v263; // [rsp+1E0h] [rbp+160h]
  __int64 v264; // [rsp+1E8h] [rbp+168h]
  __int64 v265; // [rsp+1F0h] [rbp+170h]
  __int64 v266; // [rsp+1F8h] [rbp+178h]
  __int64 v267; // [rsp+200h] [rbp+180h]
  __int64 v268; // [rsp+208h] [rbp+188h]
  __int64 v269; // [rsp+210h] [rbp+190h]
  __int64 v270; // [rsp+218h] [rbp+198h]
  __int64 v271; // [rsp+220h] [rbp+1A0h]
  __int64 v272; // [rsp+228h] [rbp+1A8h]
  __int64 v273; // [rsp+230h] [rbp+1B0h]
  __int64 v274; // [rsp+238h] [rbp+1B8h]
  __int64 v275; // [rsp+240h] [rbp+1C0h]
  __int64 v276; // [rsp+248h] [rbp+1C8h]
  __int64 v277; // [rsp+250h] [rbp+1D0h]
  __int64 v278; // [rsp+258h] [rbp+1D8h]
  _BYTE *v279; // [rsp+260h] [rbp+1E0h]
  __int64 v280; // [rsp+268h] [rbp+1E8h]
  __int64 v281; // [rsp+270h] [rbp+1F0h]
  __m128i *v282; // [rsp+278h] [rbp+1F8h]
  double v283; // [rsp+280h] [rbp+200h] BYREF
  __int64 (__fastcall *v284)(); // [rsp+288h] [rbp+208h]
  _DWORD v285[2]; // [rsp+290h] [rbp+210h]
  __int64 v286; // [rsp+298h] [rbp+218h] BYREF
  unsigned __int128 v287; // [rsp+2A0h] [rbp+220h]
  __int64 v288; // [rsp+2B0h] [rbp+230h]
  __int64 v289; // [rsp+2B8h] [rbp+238h]
  _BYTE *v290; // [rsp+2C0h] [rbp+240h]
  __int128 v291; // [rsp+2C8h] [rbp+248h] BYREF
  __int64 v292; // [rsp+2D8h] [rbp+258h]
  __int64 v293; // [rsp+2E0h] [rbp+260h]
  __int64 v294; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v295; // [rsp+2F0h] [rbp+270h]
  __int64 v296; // [rsp+2F8h] [rbp+278h]
  __m256i v297; // [rsp+300h] [rbp+280h] BYREF
  __int128 v298; // [rsp+320h] [rbp+2A0h]
  __int64 v299; // [rsp+330h] [rbp+2B0h]
  _BYTE *v300; // [rsp+340h] [rbp+2C0h]
  char v301; // [rsp+34Fh] [rbp+2CFh] BYREF
  __int128 v302; // [rsp+350h] [rbp+2D0h]
  __int64 v303; // [rsp+360h] [rbp+2E0h]
  _BYTE *v304; // [rsp+368h] [rbp+2E8h]
  __int64 v305; // [rsp+370h] [rbp+2F0h]
  __int64 v306; // [rsp+378h] [rbp+2F8h]

  v306 = -2;
  v4 = a3;
  v282 = a1;
  v5 = *(unsigned __int8 *)(a2 + 306);
  v305 = a2;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a2 + 304) = 0;
      v6 = *(_QWORD *)(a2 + 296);
      *(_QWORD *)(a2 + 112) = v6;
      sub_140DA5C80(a2 + 120, *(_QWORD *)(v6 + 80), *(_QWORD *)(v6 + 88));
      v7 = *(_QWORD *)(v305 + 112);
      if ( !*(_QWORD *)(v305 + 136) )
      {
        sub_140DBC1F0(
          (unsigned int)v241,
          v7,
          (unsigned int)aUnsupported_1,
          11,
          (__int64)&unk_141A2BEEE,
          17,
          (__int64)&unk_141A2BEEE,
          17);
        goto LABEL_422;
      }
      sub_140DA5DE0(&v242, *(_QWORD *)(v7 + 152), *(_QWORD *)(v7 + 160));
      if ( (_DWORD)v242 == -1 )
      {
        v304 = *((_BYTE **)&v242 + 1);
        v47 = *(_QWORD *)(v305 + 112);
        v303 = v243;
        sub_140DBC1F0(
          (unsigned int)v241,
          v47,
          (unsigned int)aUnsupported_1,
          11,
          (__int64)aEHeaders,
          21,
          v243,
          *((__int64 *)&v243 + 1));
        if ( v304 )
          sub_140001660(v303, v304, 1);
        goto LABEL_422;
      }
      v8 = v305;
      *(_OWORD *)(v305 + 80) = v247;
      *(_OWORD *)(v8 + 64) = v246;
      v9 = v242;
      v10 = v243;
      v11 = v244;
      *(_OWORD *)(v8 + 48) = v245;
      *(_OWORD *)(v8 + 32) = v11;
      *(_OWORD *)(v8 + 16) = v10;
      *(_OWORD *)v8 = v9;
      sub_140FED540(&v297, &unk_1421E05D0, 1000000001, *(unsigned __int8 *)(*(_QWORD *)(v8 + 112) + 253LL));
      if ( v297.m256i_i64[0] != -1 )
      {
        v304 = (_BYTE *)v297.m256i_i64[0];
        v12 = *(_QWORD *)(v305 + 112);
        v303 = v297.m256i_i64[1];
        sub_140DBC1F0(
          (unsigned int)v241,
          v12,
          (unsigned int)aUnsupported_1,
          11,
          (__int64)aE_1,
          12,
          v297.m256i_i64[1],
          v297.m256i_i64[2]);
        if ( v304 )
          sub_140001660(v303, v304, 1);
LABEL_421:
        sub_1400331B0(v305);
LABEL_422:
        v25 = v305;
        v231 = *(_QWORD *)(v305 + 120);
        if ( v231 )
          sub_140001660(*(_QWORD *)(v305 + 128), v231, 1);
        sub_1418F44E0(v282, v241, 0x88u);
        result = 1;
        goto LABEL_425;
      }
      v48 = v305;
      *(_QWORD *)(v305 + 144) = v297.m256i_i64[1];
      sub_140EF5AF0(&v248, *(_QWORD *)(*(_QWORD *)(v48 + 112) + 56LL), *(_QWORD *)(*(_QWORD *)(v48 + 112) + 64LL));
      if ( (_QWORD)v248 == -1 )
      {
        v304 = *((_BYTE **)&v248 + 1);
        v74 = *(_QWORD *)(v305 + 112);
        v303 = v249;
        sub_140DBC1F0(
          (unsigned int)v241,
          v74,
          (unsigned int)aUnsupported_1,
          11,
          (__int64)aE_1,
          12,
          v249,
          *((__int64 *)&v249 + 1));
        v75 = v304;
        v76 = v305;
        if ( !v304 )
          goto LABEL_419;
        v77 = v303;
        goto LABEL_418;
      }
      v49 = v305;
      v50 = v305 + 152;
      v51 = v248;
      v52 = v250;
      v53 = v251;
      *(_OWORD *)(v305 + 168) = v249;
      *(_OWORD *)(v49 + 152) = v51;
      *(_QWORD *)(v49 + 232) = v253;
      *(_OWORD *)(v49 + 216) = v252;
      *(_OWORD *)(v49 + 200) = v53;
      *(_OWORD *)(v49 + 184) = v52;
      *(_OWORD *)(v49 + 96) = *(_OWORD *)(v49 + 160);
      sub_140DBBC30(&v254, v50);
      a2 = v305;
      v15 = (_BYTE *)(v305 + 144);
      v54 = v50;
      *(_QWORD *)(v305 + 344) = v256;
      v55 = v254;
      *(_OWORD *)(a2 + 328) = v255;
      *(_OWORD *)(a2 + 312) = v55;
      v56 = *(_OWORD *)(a2 + 96);
      v38 = *(_QWORD *)(a2 + 128);
      v39 = *(_QWORD *)(a2 + 136);
      v303 = a2 + 352;
      *(_OWORD *)(a2 + 352) = v56;
      *(_QWORD *)(a2 + 368) = v38;
      *(_QWORD *)(a2 + 376) = v39;
      *(_QWORD *)(a2 + 384) = v15;
      *(_QWORD *)(a2 + 392) = a2;
      v3 = *(double *)&v254;
      v57 = v255;
      *(_OWORD *)(a2 + 400) = v254;
      *(_OWORD *)(a2 + 416) = v57;
      *(_QWORD *)(a2 + 432) = v256;
      *((_QWORD *)&v36 + 1) = a2 + 440;
      *(_BYTE *)(a2 + 440) = 0;
      v40 = a2;
      switch ( *(_BYTE *)(a2 + 432) )
      {
        case 0:
          goto LABEL_29;
        case 1:
          goto LABEL_234;
        case 2:
          goto LABEL_231;
        case 3:
          goto LABEL_232;
        case 4:
          goto LABEL_220;
        case 5:
          goto LABEL_244;
        case 6:
          goto LABEL_254;
        case 7:
          goto LABEL_233;
        case 8:
          goto LABEL_256;
        case 9:
          goto LABEL_230;
        case 0xA:
          goto LABEL_255;
        default:
          v133 = sub_141658F30(v54);
          if ( (unsigned __int8)sub_1409EA700(v133) )
          {
            sub_140DBB130(
              (unsigned int)v241,
              *(_QWORD *)(v305 + 112),
              (unsigned int)aXiaomiMimo,
              11,
              (__int64)aXiaomiMimoApiK,
              63);
            goto LABEL_416;
          }
          v303 = v4;
          v21 = v305;
          v17 = *(_QWORD *)(v305 + 96);
          v18 = *(_QWORD *)(v305 + 104);
          v19 = *(_QWORD *)(v305 + 128);
          v20 = *(_QWORD *)(v305 + 136);
          v14 = v305 + 312;
          *(_QWORD *)(v305 + 312) = v15;
          *(_QWORD *)(v21 + 320) = v17;
          *(_QWORD *)(v21 + 328) = v18;
          *(_QWORD *)(v21 + 336) = v19;
          *(_QWORD *)(v21 + 344) = v20;
          *(_QWORD *)(v21 + 352) = v21;
          v13 = (_BYTE *)(v21 + 1152);
          *(_BYTE *)(v21 + 1152) = 0;
          break;
      }
LABEL_9:
      v304 = v13;
      v261 = v13;
      *((_QWORD *)&v302 + 1) = v14;
      v260 = v14;
      sub_140EF6150((unsigned int)&v297, v17, v18, (unsigned int)&unk_141A2BF60, 16);
      v22 = v297.m256i_i64[1];
      v24 = v297.m256i_i64[3];
      v23 = (const char *)v297.m256i_i64[2];
      if ( v297.m256i_i8[0] )
      {
        v25 = v305;
        v26 = 2;
LABEL_115:
        *v304 = 1;
        v92 = -1;
        goto LABEL_116;
      }
      a2 = v305;
      *(_QWORD *)(v305 + 360) = v297.m256i_i64[1];
      *(_QWORD *)(a2 + 368) = v23;
      *(_QWORD *)(a2 + 376) = v24;
      *(_QWORD *)(a2 + 384) = v15;
      *(_QWORD *)(a2 + 392) = v23;
      *(_QWORD *)(a2 + 400) = v24;
      *(_QWORD *)(a2 + 408) = v19;
      *(_QWORD *)(a2 + 416) = v20;
      *(_QWORD *)(a2 + 424) = v21;
      *(_BYTE *)(a2 + 432) = 0;
      v4 = v303;
LABEL_19:
      v303 = a2 + 384;
      sub_140B608B0(&v297, a2 + 384, v4, v14);
      v41 = v297.m256i_i32[0];
      if ( v297.m256i_i64[0] == 2 )
      {
        *v304 = 3;
        v25 = v305;
LABEL_21:
        v282->m128i_i64[0] = -1;
        result = 4;
        goto LABEL_425;
      }
      v303 = v4;
      v43 = v297.m256i_i16[4];
      v44 = v297.m256i_i16[5];
      v45 = v297.m256i_i32[3];
      v23 = (const char *)v297.m256i_i64[3];
      v22 = v297.m256i_i64[2];
      v24 = v298;
      v46 = *(unsigned __int8 *)(v305 + 432);
      if ( v46 == 4 )
      {
        if ( *(_BYTE *)(v305 + 1144) == 3 )
        {
          sub_1407A90D0(v305 + 720);
        }
        else if ( !*(_BYTE *)(v305 + 1144) )
        {
          sub_1407AC640(v305 + 584);
        }
      }
      else if ( v46 == 3 )
      {
        sub_1407AC3B0(*(_QWORD *)(v305 + 440), *(_QWORD *)(v305 + 448));
      }
      if ( v41 == 1 )
      {
        v26 = 2;
        if ( v43 )
        {
          if ( v43 != 1 )
            v26 = 0;
        }
        else if ( v44 == 401 || v44 == 403 )
        {
          LOWORD(v294) = v44;
          *(_QWORD *)&v291 = &v294;
          *((_QWORD *)&v291 + 1) = sub_1416BB1E0;
          sub_1416ABFD0(&v297, &unk_141A2BFA1, &v291);
          v23 = (const char *)v297.m256i_i64[1];
          v22 = v297.m256i_i64[0];
          v24 = v297.m256i_i64[2];
          v26 = 0;
        }
        else if ( v44 == 404 )
        {
          v26 = 1;
        }
        else
        {
          LOWORD(v294) = v44;
          *(_QWORD *)&v291 = &v294;
          *((_QWORD *)&v291 + 1) = sub_1416BB1E0;
          sub_140BA0AC0(&v297, &unk_141A2A834, &v291);
          v23 = (const char *)v297.m256i_i64[1];
          v22 = v297.m256i_i64[0];
          v24 = v297.m256i_i64[2];
        }
        goto LABEL_113;
      }
      LOWORD(v286) = v43;
      WORD1(v286) = v44;
      HIDWORD(v286) = v45;
      *(_QWORD *)&v287 = v22;
      *((_QWORD *)&v287 + 1) = v23;
      v288 = v24;
      v23 = (const char *)&v286;
      v86 = sub_1416419F0(aData_7, 4, &v286);
      if ( v86 )
        v23 = (const char *)v86;
      v87 = sub_1416419F0(aObject_1, 6, v23);
      v88 = 1;
      if ( v87 && *(_BYTE *)v87 == 3 && *(_QWORD *)(v87 + 24) == 11 )
        v88 = (**(_QWORD **)(v87 + 16) ^ 0x73755F6E656B6F74LL
             | *(_QWORD *)(*(_QWORD *)(v87 + 16) + 3LL) ^ 0x65676173755F6E65LL) != 0;
      v89 = sub_1416419F0(aTotalAvailable, 15, v23);
      sub_140DBAF90(&v291, v89);
      LOBYTE(v90) = (_QWORD)v291 == -1;
      if ( ((unsigned __int8)v90 & v88) != 0 )
      {
        v26 = 1;
LABEL_112:
        v22 = 42;
        sub_14002F9D0(&v286);
        v24 = 42;
LABEL_113:
        v25 = v305;
        v95 = *(_QWORD *)(v305 + 360);
        if ( v95 )
          sub_140001660(*(_QWORD *)(v305 + 368), v95, 1);
        goto LABEL_115;
      }
      if ( (_QWORD)v291 == -1 )
      {
        v91 = sub_1416419F0(aTotalGranted, 13, v23);
        sub_140DBAF90(&v297, v91);
      }
      else
      {
        v297.m256i_i64[2] = v292;
        *(_OWORD *)v297.m256i_i8 = v291;
      }
      if ( v297.m256i_i64[0] == -1 )
      {
        nullsub_1(v90);
        v94 = (char *)sub_140001650(42, 1);
        if ( !v94 )
          sub_141938D2B(1, 42);
        v23 = v94;
        qmemcpy(v94, "NewAPI token usage missing total_available", 42);
        v26 = 0;
        goto LABEL_112;
      }
      v300 = (_BYTE *)v297.m256i_i64[1];
      *(_QWORD *)&v302 = v297.m256i_i64[0];
      sub_140DBB3D0(&v297, v297.m256i_i64[1], v297.m256i_i64[2]);
      v26 = v297.m256i_i64[1];
      v92 = v297.m256i_i64[0];
      v22 = v297.m256i_i64[2];
      if ( (_QWORD)v302 )
        sub_140001660(v300, v302, 1);
      sub_14002F9D0(&v286);
      v25 = v305;
      v93 = *(_QWORD *)(v305 + 360);
      if ( v93 )
        sub_140001660(*(_QWORD *)(v305 + 368), v93, 1);
      *v304 = 1;
      if ( v92 == -2 )
        goto LABEL_21;
      v23 = aNewapi;
      v24 = 6;
LABEL_116:
      *(_BYTE *)(v25 + 305) = 1;
      *(_QWORD *)(v25 + 240) = v92;
      *(_QWORD *)(v25 + 248) = v26;
      *(_QWORD *)(v25 + 256) = v22;
      *(_QWORD *)(v25 + 264) = v23;
      *(_QWORD *)(v25 + 272) = v24;
      *(_QWORD *)(v25 + 280) = aNewapiTokenUsa_0;
      *(_QWORD *)(v25 + 288) = 18;
      v96 = *((_QWORD *)&v302 + 1);
      sub_140A3A950(*((__int64 *)&v302 + 1));
      v35 = v305;
      if ( *(_QWORD *)(v305 + 240) != -1 )
      {
        v299 = *(_QWORD *)(v305 + 288);
        v97 = *(_OWORD *)(v305 + 240);
        v98 = *(_OWORD *)(v305 + 256);
        v298 = *(_OWORD *)(v305 + 272);
        *(_OWORD *)&v297.m256i_u64[2] = v98;
        *(_OWORD *)v297.m256i_i8 = v97;
        sub_140D73790(v241, &v297, *(_QWORD *)(v305 + 112));
LABEL_118:
        v99 = v305;
        *(_BYTE *)(v305 + 304) = 0;
        if ( *(_QWORD *)(v99 + 240) == -1 )
          *(_BYTE *)(v99 + 305) = 0;
        *(_BYTE *)(v99 + 305) = 0;
LABEL_416:
        v76 = v305;
        v75 = *(_BYTE **)(v305 + 152);
        if ( !v75 )
          goto LABEL_419;
        v77 = *(_QWORD *)(v305 + 160);
LABEL_418:
        sub_140001660(v77, v75, 1);
LABEL_419:
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v76 + 144)) )
          sub_141242F50(v305 + 144);
        goto LABEL_421;
      }
      v100 = *(_QWORD *)(v305 + 248);
      if ( !v100 )
      {
        v101 = *(_QWORD *)(v305 + 112);
        v304 = *(_BYTE **)(v305 + 256);
        v239 = *(_QWORD *)(v305 + 272);
        v303 = *(_QWORD *)(v305 + 264);
        sub_140DBC1F0((unsigned int)v241, v101, (unsigned int)aNewapi, 6, (__int64)aNewapiTokenUsa_0, 18, v303, v239);
        if ( v304 )
          sub_140001660(v303, v304, 1);
        goto LABEL_118;
      }
      *(_BYTE *)(v305 + 304) = 1;
      if ( (_DWORD)v100 == 1 )
      {
        *(_QWORD *)(v35 + 312) = -1;
      }
      else
      {
        v102 = *(_OWORD *)(v35 + 256);
        *(_QWORD *)(v96 + 16) = *(_QWORD *)(v35 + 272);
        *(_OWORD *)v96 = v102;
      }
      v31 = *(_QWORD *)(v35 + 96);
      v32 = *(_QWORD *)(v35 + 104);
      v33 = *(_QWORD *)(v35 + 128);
      v34 = *(_QWORD *)(v35 + 136);
      v29 = v35 + 144;
      v28 = v35 + 336;
      *(_QWORD *)(v35 + 336) = v35 + 144;
      *(_QWORD *)(v35 + 344) = v31;
      *(_QWORD *)(v35 + 352) = v32;
      *(_QWORD *)(v35 + 360) = v33;
      *(_QWORD *)(v35 + 368) = v34;
      *(_QWORD *)(v35 + 376) = v35;
      v27 = (_BYTE *)(v35 + 1176);
      *(_BYTE *)(v35 + 1176) = 0;
LABEL_128:
      v304 = v27;
      v259 = v27;
      v258 = v28;
      sub_140EF68B0((unsigned int)&v297, v31, v32, (unsigned int)&unk_141A2C0AF, 9, 0);
      v104 = v297.m256i_i64[3];
      v103 = v297.m256i_i64[2];
      v105 = 2;
      *((_QWORD *)&v302 + 1) = v28;
      if ( v297.m256i_i8[0] )
      {
        v108 = *(_OWORD *)&v297.m256i_u64[1];
        v107 = (const char *)(v108 >> 64);
        v106 = v108;
LABEL_197:
        *v304 = 1;
        v130 = -1;
LABEL_198:
        sub_140A3A950(*((__int64 *)&v302 + 1));
        if ( v130 != -1 )
        {
          v297.m256i_i64[0] = v130;
          v297.m256i_i64[1] = v105;
          v297.m256i_i64[2] = v106;
          v297.m256i_i64[3] = (__int64)v107;
          *(_QWORD *)&v298 = v104;
          *((_QWORD *)&v298 + 1) = aSub2apiV1Usage;
          v299 = 17;
          sub_140D73790(v241, &v297, *(_QWORD *)(v305 + 112));
          goto LABEL_206;
        }
        v139 = (_QWORD *)v305;
        if ( v105 == 1 )
        {
          if ( *(_QWORD *)(v305 + 312) == -1 )
          {
            sub_140DBA8F0(v241, *(_QWORD *)(v305 + 112));
LABEL_206:
            v144 = v305;
            v145 = *(_QWORD *)(v305 + 312);
            if ( v145 != -1 && *(_BYTE *)(v305 + 304) && v145 )
              sub_140001660(*(_QWORD *)(v305 + 320), v145, 1);
            *(_BYTE *)(v144 + 304) = 0;
            if ( *(_QWORD *)(v144 + 240) == -1 )
              *(_BYTE *)(v144 + 305) = 0;
            *(_BYTE *)(v144 + 305) = 0;
            v146 = *(_QWORD *)(v144 + 152);
            if ( v146 )
              sub_140001660(*(_QWORD *)(v144 + 160), v146, 1);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v144 + 144)) )
              sub_141242F50(v305 + 144);
            goto LABEL_421;
          }
          v304 = *(_BYTE **)(v305 + 312);
          *(_BYTE *)(v305 + 304) = 0;
          v140 = v139[14];
          v240 = v139[41];
          v303 = v139[40];
          sub_140DBC1F0((unsigned int)v241, v140, (unsigned int)aNewapi, 6, (__int64)aNewapiTokenUsa_0, 18, v303, v240);
          v141 = v304;
          if ( !v304 )
            goto LABEL_206;
          v142 = v303;
        }
        else
        {
          v304 = (_BYTE *)v106;
          v143 = *(_QWORD *)(v305 + 112);
          v303 = (__int64)v107;
          sub_140DBC1F0(
            (unsigned int)v241,
            v143,
            (unsigned int)aSub2api,
            7,
            (__int64)aSub2apiV1Usage,
            17,
            (__int64)v107,
            v104);
          v141 = v304;
          v142 = v303;
          if ( !v304 )
            goto LABEL_206;
        }
        sub_140001660(v142, v141, 1);
        goto LABEL_206;
      }
      v109 = v305;
      *(_QWORD *)(v305 + 384) = v297.m256i_i64[1];
      *(_QWORD *)(v109 + 392) = v103;
      *(_QWORD *)(v109 + 400) = v104;
      *(_QWORD *)(v109 + 408) = v29;
      *(_QWORD *)(v109 + 416) = v103;
      *(_QWORD *)(v109 + 424) = v104;
      *(_QWORD *)(v109 + 432) = v33;
      a2 = v109;
      *(_QWORD *)(v109 + 440) = v34;
      *(_QWORD *)(v109 + 448) = v35;
      *(_BYTE *)(v109 + 456) = 0;
      v4 = v303;
LABEL_131:
      v303 = a2 + 408;
      sub_140B608B0(&v297, a2 + 408, v4, v27);
      v110 = v297.m256i_i32[0];
      if ( v297.m256i_i64[0] == 2 )
      {
        *v304 = 3;
        v25 = v305;
        goto LABEL_133;
      }
      v111 = v297.m256i_i16[4];
      v112 = v297.m256i_i16[5];
      v113 = v297.m256i_i32[3];
      v107 = (const char *)v297.m256i_i64[3];
      v106 = v297.m256i_i64[2];
      v104 = v298;
      v114 = *(unsigned __int8 *)(v305 + 456);
      if ( v114 == 4 )
      {
        if ( *(_BYTE *)(v305 + 1168) == 3 )
        {
          sub_1407A90D0(v305 + 744);
        }
        else if ( !*(_BYTE *)(v305 + 1168) )
        {
          sub_1407AC640(v305 + 608);
        }
      }
      else if ( v114 == 3 )
      {
        sub_1407AC3B0(*(_QWORD *)(v305 + 464), *(_QWORD *)(v305 + 472));
      }
      if ( v110 == 1 )
      {
        v105 = 2;
        if ( v111 )
        {
          if ( v111 != 1 )
            v105 = 0;
        }
        else if ( v112 == 401 || v112 == 403 )
        {
          LOWORD(v294) = v112;
          *(_QWORD *)&v291 = &v294;
          *((_QWORD *)&v291 + 1) = sub_1416BB1E0;
          sub_1416ABFD0(&v297, &unk_141A2C1F8, &v291);
          v107 = (const char *)v297.m256i_i64[1];
          v106 = v297.m256i_i64[0];
          v104 = v297.m256i_i64[2];
          v105 = 0;
        }
        else if ( v112 == 404 )
        {
          v105 = 1;
        }
        else
        {
          LOWORD(v294) = v112;
          *(_QWORD *)&v291 = &v294;
          *((_QWORD *)&v291 + 1) = sub_1416BB1E0;
          sub_140BA0AC0(&v297, &unk_141A2A834, &v291);
          v107 = (const char *)v297.m256i_i64[1];
          v106 = v297.m256i_i64[0];
          v104 = v297.m256i_i64[2];
        }
LABEL_195:
        v138 = *(_QWORD *)(v305 + 384);
        if ( v138 )
          sub_140001660(*(_QWORD *)(v305 + 392), v138, 1);
        goto LABEL_197;
      }
      LOWORD(v286) = v111;
      WORD1(v286) = v112;
      HIDWORD(v286) = v113;
      *(_QWORD *)&v287 = v106;
      *((_QWORD *)&v287 + 1) = v107;
      v288 = v104;
      if ( !sub_1416419F0(aMode_3, 4, &v286)
        && !sub_1416419F0(aRemaining, 9, &v286)
        && !sub_1416419F0(aQuota, 5, &v286)
        && !sub_1416419F0("usage", 5, &v286) )
      {
        v105 = 1;
LABEL_179:
        v106 = 31;
        sub_14002F9D0(&v286);
        v104 = 31;
        goto LABEL_195;
      }
      v115 = 0;
      while ( 1 )
      {
        v116 = (&off_141A2C160)[v115 + 1];
        v117 = &v286;
        if ( v116 )
        {
          v118 = (&off_141A2C160)[v115];
          v119 = &v118[2 * (_QWORD)v116];
          v117 = &v286;
          do
          {
            v117 = (__int64 *)sub_1416419F0(*v118, v118[1], v117);
            if ( !v117 )
              goto LABEL_150;
            v118 += 2;
          }
          while ( v118 != v119 );
        }
        sub_140DBAF90(&v297, v117);
        if ( v297.m256i_i64[0] != -1 )
          break;
LABEL_150:
        v115 += 2;
        if ( v115 == 10 )
        {
          v297.m256i_i64[0] = -1;
          nullsub_1(v120);
          v132 = (char *)sub_140001650(31, 1);
          if ( !v132 )
            sub_141938D2B(1, 31);
          v107 = v132;
          qmemcpy(v132, "Sub2API usage missing remaining", 31);
          v105 = 0;
          goto LABEL_179;
        }
      }
      v303 = v297.m256i_i64[1];
      *(_QWORD *)&v302 = v297.m256i_i64[0];
      v121 = v297.m256i_i32[4];
      v122 = &v286;
      v123 = sub_1416419F0("unit", 4, &v286);
      if ( !v123 || (sub_140DBAF90(&v291, v123), v124 = v291, (_QWORD)v291 == -1) )
      {
        v125 = 0;
        while ( 1 )
        {
          v126 = sub_1416419F0((&off_141A2C1B8)[v125], (&off_141A2C1B8)[v125 + 1], v122);
          v122 = (__int64 *)v126;
          if ( !v126 )
            break;
          v125 += 2;
          if ( v125 == 4 )
          {
            sub_140DBAF90(&v291, v126);
            v124 = v291;
            if ( (_QWORD)v291 != -1 )
              goto LABEL_167;
            break;
          }
        }
        v127 = &v286;
        v128 = 0;
        while ( 1 )
        {
          v127 = (__int64 *)sub_1416419F0((&off_141A2C1D8)[v128], (&off_141A2C1D8)[v128 + 1], v127);
          if ( !v127 )
            break;
          v128 += 2;
          if ( v128 == 4 )
          {
            sub_140DBAF90(&v291, v127);
            v124 = v291;
            if ( (_QWORD)v291 != -1 )
              goto LABEL_167;
            break;
          }
        }
        v124 = -1;
      }
LABEL_167:
      v129 = 0;
      v300 = (_BYTE *)v124;
      v293 = *((_QWORD *)&v291 + 1);
      if ( v124 != -1 )
        v129 = DWORD2(v291);
      sub_140DBBFF0((unsigned int)&v297, v303, v121, v129, v292);
      v105 = v297.m256i_i64[1];
      v130 = v297.m256i_i64[0];
      v106 = v297.m256i_i64[2];
      if ( (__int64)v300 > 0 )
        sub_140001660(v293, v300, 1);
      if ( (_QWORD)v302 )
        sub_140001660(v303, v302, 1);
      sub_14002F9D0(&v286);
      v25 = v305;
      v131 = *(_QWORD *)(v305 + 384);
      if ( v131 )
        sub_140001660(*(_QWORD *)(v305 + 392), v131, 1);
      *v304 = 1;
      if ( v130 != -2 )
      {
        v107 = aSub2api;
        v104 = 7;
        goto LABEL_198;
      }
LABEL_133:
      v282->m128i_i64[0] = -1;
      result = 5;
LABEL_425:
      *(_BYTE *)(v25 + 306) = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A2BF18);
    case 2LL:
      sub_141939400(&off_141A2BF18);
    case 3LL:
      *((_QWORD *)&v36 + 1) = a2 + 440;
      v37 = *(unsigned __int8 *)(a2 + 440);
      v303 = a2 + 352;
      switch ( v37 )
      {
        case 0LL:
          v15 = *(_BYTE **)(a2 + 384);
          v38 = *(_QWORD *)(a2 + 368);
          v39 = *(_QWORD *)(a2 + 376);
          v40 = *(_QWORD *)(a2 + 392);
          switch ( *(_BYTE *)(a2 + 432) )
          {
            case 0:
LABEL_29:
              v58 = a2;
              v59 = *(_QWORD *)(a2 + 352);
              v60 = *(_QWORD *)(v58 + 360);
              *(_QWORD *)&v36 = v58 + 448;
              *(_QWORD *)(v58 + 448) = v15;
              *(_QWORD *)(v58 + 456) = v59;
              *(_QWORD *)(v58 + 464) = v60;
              *(_QWORD *)(v58 + 472) = v38;
              *(_QWORD *)(v58 + 480) = v39;
              *(_QWORD *)(v58 + 488) = v40;
              v61 = (_BYTE *)(v58 + 1288);
              *(_BYTE *)(v58 + 1288) = 0;
              goto LABEL_50;
            case 1:
LABEL_234:
              v68 = a2 + 448;
              *(_QWORD *)(a2 + 448) = v15;
              *(_QWORD *)(a2 + 456) = v38;
              *(_QWORD *)(a2 + 464) = v39;
              *(_QWORD *)(a2 + 472) = v40;
              v67 = (_BYTE *)(a2 + 1248);
              *(_BYTE *)(a2 + 1248) = 0;
              goto LABEL_235;
            case 2:
LABEL_231:
              v304 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1232) = v38;
              *(_QWORD *)(a2 + 1240) = v39;
              *(_QWORD *)(a2 + 1272) = v15;
              *(_QWORD *)(a2 + 1280) = v40;
              *(_WORD *)(a2 + 1289) = 256;
              goto LABEL_41;
            case 3:
LABEL_232:
              v304 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1232) = v38;
              *(_QWORD *)(a2 + 1240) = v39;
              *(_QWORD *)(a2 + 1272) = v15;
              *(_QWORD *)(a2 + 1280) = v40;
              *(_WORD *)(a2 + 1289) = 0;
              goto LABEL_59;
            case 4:
LABEL_220:
              v73 = a2 + 448;
              *(_QWORD *)(a2 + 448) = v15;
              *(_QWORD *)(a2 + 456) = v38;
              *(_QWORD *)(a2 + 464) = v39;
              *(_QWORD *)(a2 + 472) = v40;
              v72 = (_BYTE *)(a2 + 1248);
              *(_BYTE *)(a2 + 1248) = 0;
              goto LABEL_221;
            case 5:
LABEL_244:
              v66 = a2 + 448;
              *(_QWORD *)(a2 + 448) = v15;
              *(_QWORD *)(a2 + 456) = v38;
              *(_QWORD *)(a2 + 464) = v39;
              *(_QWORD *)(a2 + 472) = v40;
              v65 = (_BYTE *)(a2 + 1248);
              *(_BYTE *)(a2 + 1248) = 0;
              goto LABEL_245;
            case 6:
LABEL_254:
              v304 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1216) = v38;
              *(_QWORD *)(a2 + 1224) = v39;
              *(_QWORD *)(a2 + 1232) = v15;
              *(_QWORD *)(a2 + 1240) = v40;
              *(_WORD *)(a2 + 1249) = 256;
              goto LABEL_44;
            case 7:
LABEL_233:
              v304 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1216) = v38;
              *(_QWORD *)(a2 + 1224) = v39;
              *(_QWORD *)(a2 + 1232) = v15;
              *(_QWORD *)(a2 + 1240) = v40;
              *(_WORD *)(a2 + 1249) = 0;
              goto LABEL_34;
            case 8:
LABEL_256:
              v64 = a2 + 448;
              *(_QWORD *)(a2 + 448) = v15;
              *(_QWORD *)(a2 + 456) = v38;
              *(_QWORD *)(a2 + 464) = v39;
              *(_QWORD *)(a2 + 472) = v40;
              v63 = (_BYTE *)(a2 + 1248);
              *(_BYTE *)(a2 + 1248) = 0;
              goto LABEL_257;
            case 9:
LABEL_230:
              v304 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1232) = v38;
              *(_QWORD *)(a2 + 1240) = v39;
              *(_QWORD *)(a2 + 1272) = v15;
              *(_QWORD *)(a2 + 1280) = v40;
              *(_WORD *)(a2 + 1288) = 256;
              goto LABEL_56;
            case 0xA:
LABEL_255:
              v304 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1232) = v38;
              *(_QWORD *)(a2 + 1240) = v39;
              *(_QWORD *)(a2 + 1272) = v15;
              *(_QWORD *)(a2 + 1280) = v40;
              *(_WORD *)(a2 + 1288) = 0;
              goto LABEL_53;
          }
        case 1LL:
          v262 = a2 + 352;
          sub_1419393E0(&off_141A2C4F0);
        case 2LL:
          v262 = a2 + 352;
          sub_141939400(&off_141A2C4F0);
        case 3LL:
          v61 = (_BYTE *)(a2 + 1288);
          *(_QWORD *)&v36 = a2 + 448;
          switch ( *(_BYTE *)(a2 + 1288) )
          {
            case 0:
              v15 = *(_BYTE **)(a2 + 448);
              v69 = (_QWORD *)a2;
              v59 = *(_QWORD *)(a2 + 456);
              v60 = v69[58];
              v38 = v69[59];
              v39 = v69[60];
              v40 = v69[61];
LABEL_50:
              v304 = v15;
              v281 = *((_QWORD *)&v36 + 1);
              v280 = v303;
              v300 = v61;
              v279 = v61;
              v278 = v36;
              sub_140EF6150((unsigned int)&v297, v59, v60, (unsigned int)"/user/balance", 13);
              v71 = v297.m256i_i64[3];
              v70 = v297.m256i_i64[2];
              v293 = v36;
              if ( v297.m256i_i8[0] )
              {
                *(_QWORD *)&v302 = v297.m256i_i64[2];
                *((_QWORD *)&v302 + 1) = v297.m256i_i64[1];
LABEL_410:
                v82 = v303;
                *v300 = 1;
                *(_QWORD *)&v36 = -1;
LABEL_411:
                v290 = *((_BYTE **)&v36 + 1);
                v289 = v82;
                sub_140A3A950(v293);
                v80 = 21;
                v79 = &unk_141A2C26B;
                v78 = 17;
                goto LABEL_412;
              }
              a2 = v305;
              *(_QWORD *)(v305 + 496) = v297.m256i_i64[1];
              *(_QWORD *)(a2 + 504) = v70;
              *(_QWORD *)(a2 + 512) = v71;
              *(_QWORD *)(a2 + 520) = v304;
              *(_QWORD *)(a2 + 528) = v70;
              *(_QWORD *)(a2 + 536) = v71;
              *(_QWORD *)(a2 + 544) = v38;
              *(_QWORD *)(a2 + 552) = v39;
              *(_QWORD *)(a2 + 560) = v40;
              *(_BYTE *)(a2 + 568) = 0;
LABEL_189:
              v304 = *((_BYTE **)&v36 + 1);
              *((_QWORD *)&v302 + 1) = a2 + 520;
              sub_140B608B0(&v297, a2 + 520, v4, v61);
              v134 = v297.m256i_i32[0];
              if ( v297.m256i_i64[0] == 2 )
              {
                *v300 = 3;
                v62 = 3;
                goto LABEL_260;
              }
              v135 = v297.m256i_i8[8];
              LODWORD(v283) = *(__int32 *)((char *)&v297.m256i_i32[2] + 1);
              *(_DWORD *)((char *)&v283 + 3) = v297.m256i_i32[3];
              v136 = *(_OWORD *)&v297.m256i_u64[2];
              v71 = v298;
              v137 = *(unsigned __int8 *)(v305 + 568);
              if ( v137 == 4 )
              {
                if ( *(_BYTE *)(v305 + 1280) == 3 )
                {
                  sub_1407A90D0(v305 + 856);
                }
                else if ( !*(_BYTE *)(v305 + 1280) )
                {
                  sub_1407AC640(v305 + 720);
                }
              }
              else if ( v137 == 3 )
              {
                sub_1407AC3B0(*(_QWORD *)(v305 + 576), *(_QWORD *)(v305 + 584));
              }
              if ( v134 == 1 )
              {
                v297.m256i_i8[0] = v135;
                *(__int32 *)((char *)v297.m256i_i32 + 1) = LODWORD(v283);
                v297.m256i_i32[1] = *(_DWORD *)((char *)&v283 + 3);
                *((_QWORD *)&v302 + 1) = v136;
                *(_QWORD *)&v302 = v136 >> 64;
                v297.m256i_i64[1] = v136;
                v297.m256i_i64[2] = *((_QWORD *)&v136 + 1);
                v297.m256i_i64[3] = v71;
                v294 = 0;
                v295 = 1;
                v296 = 0;
                v292 = 1610612768;
                *(_QWORD *)&v291 = &v294;
                *((_QWORD *)&v291 + 1) = &off_141A353B8;
                if ( (unsigned __int8)sub_140DDCB80(&v297, &v291) )
                  sub_141939040(
                    (unsigned int)aADisplayImplem_6,
                    55,
                    (unsigned int)&v301,
                    (unsigned int)&unk_141A2C928,
                    (__int64)&off_141A35470);
                *((_QWORD *)&v219 + 1) = v294;
                *(_QWORD *)&v219 = v295;
                v71 = v296;
                if ( v297.m256i_i16[0] && *((_QWORD *)&v302 + 1) )
                  sub_140001660(v302, *((_QWORD *)&v302 + 1), 1);
                goto LABEL_407;
              }
              if ( v135 == -1 )
              {
                *(_QWORD *)&v219 = v136 >> 64;
                *((_QWORD *)&v219 + 1) = v136;
                goto LABEL_407;
              }
              HIDWORD(v286) = *(_DWORD *)((char *)&v283 + 3);
              *(_DWORD *)((char *)&v286 + 1) = LODWORD(v283);
              LOBYTE(v286) = v135;
              v287 = v136;
              v288 = v71;
              v220 = sub_1416419F0(aBalanceInfos, 13, &v286);
              if ( v220 && *(_BYTE *)v220 == 4 )
              {
                if ( !*(_QWORD *)(v220 + 24) )
                {
                  nullsub_1(v221);
                  *((_QWORD *)&v219 + 1) = 34;
                  v232 = (void *)sub_140001650(34, 1);
                  if ( !v232 )
                    sub_141938D2B(1, 34);
                  *(_QWORD *)&v219 = v232;
                  qmemcpy(v232, "DeepSeek balance response is empty", 34);
                  goto LABEL_405;
                }
                v222 = *(_QWORD *)(v220 + 16);
                v223 = sub_1416419F0(aTotalBalance, 13, v222);
                sub_140DBAF90(&v297, v223);
                if ( v297.m256i_i64[0] != -1 )
                {
                  v302 = *(_OWORD *)v297.m256i_i8;
                  v225 = v297.m256i_i32[4];
                  v226 = sub_1416419F0(aCurrency, 8, v222);
                  if ( v226 )
                  {
                    if ( *(_BYTE *)v226 == 3 )
                      v227 = *(_QWORD *)(v226 + 16);
                    else
                      v227 = 0;
                    v226 = *(_QWORD *)(v226 + 24);
                  }
                  else
                  {
                    v227 = 0;
                  }
                  v234 = v227 == 0;
                  v235 = &unk_141A2C088;
                  if ( v227 )
                    LODWORD(v235) = v227;
                  v236 = 3;
                  if ( !v234 )
                    v236 = v226;
                  sub_140DBACB0((unsigned int)&v297, DWORD2(v302), v225, (_DWORD)v235, v236);
                  v36 = *(_OWORD *)v297.m256i_i8;
                  v237 = v297.m256i_i64[2];
                  if ( (_QWORD)v302 )
                    sub_140001660(*((_QWORD *)&v302 + 1), v302, 1);
                  *(_QWORD *)&v302 = v237;
                  *((_QWORD *)&v302 + 1) = *((_QWORD *)&v36 + 1);
                  sub_14002F9D0(&v286);
                  v25 = v305;
                  v238 = *(_QWORD *)(v305 + 496);
                  if ( v238 )
                    sub_140001660(*(_QWORD *)(v305 + 504), v238, 1);
                  *v300 = 1;
                  v62 = 3;
                  *((_QWORD *)&v36 + 1) = v304;
                  v82 = v303;
                  if ( (_QWORD)v36 != -2 )
                  {
                    v71 = (__int64)&unk_141A2C25A;
                    goto LABEL_411;
                  }
LABEL_261:
                  **((_BYTE **)&v36 + 1) = v62;
                  v282->m128i_i64[0] = -1;
                  result = 3;
                  goto LABEL_425;
                }
                nullsub_1(v224);
                *((_QWORD *)&v219 + 1) = 47;
                v233 = sub_140001650(47, 1);
                if ( !v233 )
                  sub_141938D2B(1, 47);
                *(_QWORD *)&v219 = v233;
                qmemcpy((void *)(v233 + 16), " response missing total_balance", 31);
                v229 = *(_OWORD *)&aNewapiTokenUsa[242];
              }
              else
              {
                nullsub_1(v221);
                *((_QWORD *)&v219 + 1) = 47;
                v228 = sub_140001650(47, 1);
                if ( !v228 )
                  sub_141938D2B(1, 47);
                *(_QWORD *)&v219 = v228;
                qmemcpy((void *)(v228 + 16), " response missing balance_infos", 31);
                v229 = *(_OWORD *)&aNewapiTokenUsa[161];
              }
              *(_OWORD *)v219 = v229;
LABEL_405:
              sub_14002F9D0(&v286);
              v71 = *((_QWORD *)&v219 + 1);
LABEL_407:
              v302 = v219;
              v230 = *(_QWORD *)(v305 + 496);
              if ( v230 )
                sub_140001660(*(_QWORD *)(v305 + 504), v230, 1);
              *((_QWORD *)&v36 + 1) = v304;
              goto LABEL_410;
            case 1:
              v277 = a2 + 440;
              v276 = v303;
              v275 = a2 + 448;
              sub_1419393E0(&off_141A2C220);
            case 2:
              v277 = a2 + 440;
              v276 = v303;
              v275 = a2 + 448;
              sub_141939400(&off_141A2C220);
            case 3:
              v300 = (_BYTE *)(a2 + 1288);
              v293 = a2 + 448;
              goto LABEL_189;
          }
        case 4LL:
          v67 = (_BYTE *)(a2 + 1248);
          v68 = a2 + 448;
          switch ( *(_BYTE *)(a2 + 1248) )
          {
            case 0:
              v15 = *(_BYTE **)(a2 + 448);
              v38 = *(_QWORD *)(a2 + 456);
              v39 = *(_QWORD *)(a2 + 464);
              v40 = *(_QWORD *)(a2 + 472);
LABEL_235:
              *((_QWORD *)&v302 + 1) = v68;
              v300 = v67;
              *(_QWORD *)(a2 + 480) = v15;
              *(_QWORD *)(a2 + 488) = aHttpsApiStepfu;
              *(_QWORD *)(a2 + 496) = 35;
              *(_QWORD *)(a2 + 504) = v38;
              *(_QWORD *)(a2 + 512) = v39;
              *(_QWORD *)(a2 + 520) = v40;
              *(_BYTE *)(a2 + 528) = 0;
              break;
            case 1:
              v274 = a2 + 440;
              v273 = v303;
              v272 = a2 + 448;
              sub_1419393E0(&off_141A2C070);
            case 2:
              v274 = a2 + 440;
              v273 = v303;
              v272 = a2 + 448;
              sub_141939400(&off_141A2C070);
            case 3:
              *((_QWORD *)&v302 + 1) = a2 + 448;
              v300 = (_BYTE *)(a2 + 1248);
              break;
          }
          v304 = *((_BYTE **)&v36 + 1);
          *(_QWORD *)&v302 = a2 + 480;
          sub_140B608B0(&v297, a2 + 480, v4, v68);
          v151 = v297.m256i_i32[0];
          if ( v297.m256i_i64[0] == 2 )
          {
            *v300 = 3;
            v62 = 4;
            goto LABEL_260;
          }
          v152 = v297.m256i_i8[8];
          LODWORD(v283) = *(__int32 *)((char *)&v297.m256i_i32[2] + 1);
          *(_DWORD *)((char *)&v283 + 3) = v297.m256i_i32[3];
          v153 = *(_OWORD *)&v297.m256i_u64[2];
          v71 = v298;
          v154 = *(unsigned __int8 *)(v305 + 528);
          if ( v154 == 4 )
          {
            if ( *(_BYTE *)(v305 + 1240) == 3 )
            {
              sub_1407A90D0(v305 + 816);
            }
            else if ( !*(_BYTE *)(v305 + 1240) )
            {
              sub_1407AC640(v305 + 680);
            }
          }
          else if ( v154 == 3 )
          {
            sub_1407AC3B0(*(_QWORD *)(v305 + 536), *(_QWORD *)(v305 + 544));
          }
          if ( v151 == 1 )
          {
            v297.m256i_i8[0] = v152;
            *(__int32 *)((char *)v297.m256i_i32 + 1) = LODWORD(v283);
            v297.m256i_i32[1] = *(_DWORD *)((char *)&v283 + 3);
            *(_QWORD *)&v302 = v153;
            v293 = v153 >> 64;
            v297.m256i_i64[1] = v153;
            v297.m256i_i64[2] = *((_QWORD *)&v153 + 1);
            v297.m256i_i64[3] = v71;
            v294 = 0;
            v295 = 1;
            v296 = 0;
            v292 = 1610612768;
            *(_QWORD *)&v291 = &v294;
            *((_QWORD *)&v291 + 1) = &off_141A353B8;
            if ( (unsigned __int8)sub_140DDCB80(&v297, &v291) )
              sub_141939040(
                (unsigned int)aADisplayImplem_6,
                55,
                (unsigned int)&v301,
                (unsigned int)&unk_141A2C928,
                (__int64)&off_141A35470);
            *((_QWORD *)&v36 + 1) = v294;
            *(_QWORD *)&v36 = v295;
            v71 = v296;
            if ( v297.m256i_i16[0] && (_QWORD)v302 )
              sub_140001660(v293, v302, 1);
          }
          else if ( v152 == -1 )
          {
            *(_QWORD *)&v36 = v153 >> 64;
            *((_QWORD *)&v36 + 1) = v153;
          }
          else
          {
            HIDWORD(v286) = *(_DWORD *)((char *)&v283 + 3);
            *(_DWORD *)((char *)&v286 + 1) = LODWORD(v283);
            LOBYTE(v286) = v152;
            v287 = v153;
            v288 = v71;
            v204 = sub_1416419F0(aBalance, 7, &v286);
            sub_140DBAF90(&v297, v204);
            if ( v297.m256i_i64[0] != -1 )
            {
              v293 = v297.m256i_i64[1];
              *(_QWORD *)&v302 = v297.m256i_i64[0];
              sub_140DBACB0((unsigned int)&v297, v297.m256i_i32[2], v297.m256i_i32[4], (unsigned int)&unk_141A2C088, 3);
              v36 = *(_OWORD *)v297.m256i_i8;
              v206 = v297.m256i_i64[2];
              if ( (_QWORD)v302 )
                sub_140001660(v293, v302, 1);
              sub_14002F9D0(&v286);
              *v300 = 1;
              v62 = 4;
              if ( (_QWORD)v36 == -2 )
              {
LABEL_260:
                v25 = v305;
                *((_QWORD *)&v36 + 1) = v304;
                goto LABEL_261;
              }
              *(_QWORD *)&v302 = v206;
              *((_QWORD *)&v302 + 1) = *((_QWORD *)&v36 + 1);
              v71 = (__int64)&unk_141A2C08B;
LABEL_362:
              *((_QWORD *)&v36 + 1) = v304;
              v80 = 20;
              v79 = &unk_141A2C09B;
              goto LABEL_363;
            }
            nullsub_1(v205);
            *((_QWORD *)&v36 + 1) = 40;
            v207 = (void *)sub_140001650(40, 1);
            if ( !v207 )
              sub_141938D2B(1, 40);
            *(_QWORD *)&v36 = v207;
            qmemcpy(v207, "StepFun account response missing balance", 40);
            sub_14002F9D0(&v286);
            v71 = 40;
          }
          v302 = v36;
          *v300 = 1;
          *(_QWORD *)&v36 = -1;
          goto LABEL_362;
        case 5LL:
          v304 = (_BYTE *)(a2 + 440);
LABEL_41:
          v300 = (_BYTE *)(a2 + 448);
          sub_140B5ED00(&v297, a2 + 448, v4);
          *(_QWORD *)&v36 = v297.m256i_i64[0];
          if ( v297.m256i_i64[0] != -2 )
            goto LABEL_69;
          v62 = 5;
          goto LABEL_260;
        case 6LL:
          v304 = (_BYTE *)(a2 + 440);
LABEL_59:
          v300 = (_BYTE *)(a2 + 448);
          sub_140B5ED00(&v297, a2 + 448, v4);
          *(_QWORD *)&v36 = v297.m256i_i64[0];
          if ( v297.m256i_i64[0] == -2 )
          {
            v62 = 6;
            goto LABEL_260;
          }
LABEL_69:
          *((_QWORD *)&v302 + 1) = v297.m256i_i64[1];
          v71 = v297.m256i_i64[3];
          *(_QWORD *)&v302 = v297.m256i_i64[2];
          v79 = *((void **)&v298 + 1);
          v78 = v298;
          v80 = v299;
          *((_QWORD *)&v36 + 1) = v304;
          v290 = v304;
          v82 = v303;
          v289 = v303;
          sub_1407A96E0((__int64)v300);
          goto LABEL_412;
        case 7LL:
          v72 = (_BYTE *)(a2 + 1248);
          v73 = a2 + 448;
          switch ( *(_BYTE *)(a2 + 1248) )
          {
            case 0:
              v15 = *(_BYTE **)(a2 + 448);
              v38 = *(_QWORD *)(a2 + 456);
              v39 = *(_QWORD *)(a2 + 464);
              v40 = *(_QWORD *)(a2 + 472);
LABEL_221:
              v293 = v73;
              v300 = v72;
              *(_QWORD *)(a2 + 480) = v15;
              *(_QWORD *)(a2 + 488) = aHttpsOpenroute;
              *(_QWORD *)(a2 + 496) = 36;
              *(_QWORD *)(a2 + 504) = v38;
              *(_QWORD *)(a2 + 512) = v39;
              *(_QWORD *)(a2 + 520) = v40;
              *(_BYTE *)(a2 + 528) = 0;
              break;
            case 1:
              v271 = a2 + 440;
              v270 = v303;
              v269 = a2 + 448;
              sub_1419393E0(&off_141A2C2A8);
            case 2:
              v271 = a2 + 440;
              v270 = v303;
              v269 = a2 + 448;
              sub_141939400(&off_141A2C2A8);
            case 3:
              v293 = a2 + 448;
              v300 = (_BYTE *)(a2 + 1248);
              break;
          }
          v304 = *((_BYTE **)&v36 + 1);
          *((_QWORD *)&v302 + 1) = a2 + 480;
          sub_140B608B0(&v297, a2 + 480, v4, v73);
          v147 = v297.m256i_i32[0];
          if ( v297.m256i_i64[0] == 2 )
          {
            *v300 = 3;
            v62 = 7;
            goto LABEL_260;
          }
          v148 = v297.m256i_i8[8];
          v285[0] = *(__int32 *)((char *)&v297.m256i_i32[2] + 1);
          *(_DWORD *)((char *)v285 + 3) = v297.m256i_i32[3];
          v149 = *(_OWORD *)&v297.m256i_u64[2];
          v71 = v298;
          v150 = *(unsigned __int8 *)(v305 + 528);
          if ( v150 == 4 )
          {
            if ( *(_BYTE *)(v305 + 1240) == 3 )
            {
              sub_1407A90D0(v305 + 816);
            }
            else if ( !*(_BYTE *)(v305 + 1240) )
            {
              sub_1407AC640(v305 + 680);
            }
          }
          else if ( v150 == 3 )
          {
            sub_1407AC3B0(*(_QWORD *)(v305 + 536), *(_QWORD *)(v305 + 544));
          }
          if ( v147 == 1 )
          {
            v297.m256i_i8[0] = v148;
            *(__int32 *)((char *)v297.m256i_i32 + 1) = v285[0];
            v297.m256i_i32[1] = *(_DWORD *)((char *)v285 + 3);
            *((_QWORD *)&v302 + 1) = v149;
            *(_OWORD *)&v297.m256i_u64[1] = v149;
            v297.m256i_i64[3] = v71;
            v294 = 0;
            v295 = 1;
            v296 = 0;
            v292 = 1610612768;
            *(_QWORD *)&v291 = &v294;
            *((_QWORD *)&v291 + 1) = &off_141A353B8;
            if ( (unsigned __int8)sub_140DDCB80(&v297, &v291) )
              sub_141939040(
                (unsigned int)aADisplayImplem_6,
                55,
                (unsigned int)&v301,
                (unsigned int)&unk_141A2C928,
                (__int64)&off_141A35470);
            v208 = v294;
            v209 = v295;
            v71 = v296;
            if ( v297.m256i_i16[0] && *((_QWORD *)&v302 + 1) )
              sub_140001660(*((_QWORD *)&v149 + 1), *((_QWORD *)&v302 + 1), 1);
            *(_QWORD *)&v302 = v209;
            *((_QWORD *)&v302 + 1) = v208;
            goto LABEL_385;
          }
          if ( v148 == -1 )
          {
            *(_QWORD *)&v302 = v149 >> 64;
            *((_QWORD *)&v302 + 1) = v149;
LABEL_385:
            *v300 = 1;
            *(_QWORD *)&v36 = -1;
            *((_QWORD *)&v36 + 1) = v304;
            v82 = v303;
LABEL_386:
            v80 = 25;
            v79 = &unk_141A2C2EB;
            v78 = 19;
            goto LABEL_412;
          }
          HIDWORD(v286) = *(_DWORD *)((char *)v285 + 3);
          *(_DWORD *)((char *)&v286 + 1) = v285[0];
          LOBYTE(v286) = v148;
          v287 = v149;
          v288 = v71;
          v210 = &v286;
          v211 = sub_1416419F0(aData_7, 4, &v286);
          if ( v211 )
            v210 = (__int64 *)v211;
          v212 = sub_1416419F0(aTotalCredits, 13, v210);
          if ( (sub_140DBAB50(v212) & 1) == 0 )
          {
            nullsub_1(v213);
            v218 = (void *)sub_140001650(49, 1);
            if ( !v218 )
              sub_141938D2B(1, 49);
            *((_QWORD *)&v302 + 1) = 49;
            qmemcpy(v218, "OpenRouter credits response missing total_credits", 49);
            *(_QWORD *)&v302 = v218;
            sub_14002F9D0(&v286);
            v71 = 49;
            goto LABEL_385;
          }
          v214 = v3;
          v215 = sub_1416419F0(aTotalUsage, 11, v210);
          if ( (sub_140DBAB50(v215) & 1) == 0 )
            v3 = 0.0;
          v283 = v214 - v3;
          *(_QWORD *)&v291 = 0;
          *((_QWORD *)&v291 + 1) = 1;
          v292 = 0;
          v297.m256i_i64[2] = 1610612768;
          v297.m256i_i64[0] = (__int64)&v291;
          v297.m256i_i64[1] = (__int64)&off_141A353B8;
          if ( (unsigned __int8)sub_1416BB8F0(&v283, &v297) )
            sub_141939040(
              (unsigned int)aADisplayImplem_6,
              55,
              (unsigned int)&v301,
              (unsigned int)&unk_141A2C928,
              (__int64)&off_141A35470);
          *(_QWORD *)&v302 = *((_QWORD *)&v291 + 1);
          *((_QWORD *)&v302 + 1) = v291;
          sub_140DBACB0((unsigned int)&v294, DWORD2(v291), v292, (unsigned int)&unk_141A2C020, 3);
          *(_QWORD *)&v36 = v294;
          v216 = v295;
          v217 = v296;
          sub_14002F9D0(&v286);
          if ( *((_QWORD *)&v302 + 1) )
            sub_140001660(v302, *((_QWORD *)&v302 + 1), 1);
          *v300 = 1;
          v62 = 7;
          *((_QWORD *)&v36 + 1) = v304;
          v82 = v303;
          if ( (_QWORD)v36 != -2 )
          {
            *(_QWORD *)&v302 = v217;
            *((_QWORD *)&v302 + 1) = v216;
            v71 = (__int64)&unk_141A2C2D8;
            goto LABEL_386;
          }
          goto LABEL_381;
        case 8LL:
          v65 = (_BYTE *)(a2 + 1248);
          v66 = a2 + 448;
          switch ( *(_BYTE *)(a2 + 1248) )
          {
            case 0:
              v15 = *(_BYTE **)(a2 + 448);
              v38 = *(_QWORD *)(a2 + 456);
              v39 = *(_QWORD *)(a2 + 464);
              v40 = *(_QWORD *)(a2 + 472);
LABEL_245:
              v293 = v66;
              v300 = v65;
              *(_QWORD *)(a2 + 480) = v15;
              *(_QWORD *)(a2 + 488) = aHttpsApiNovita;
              *(_QWORD *)(a2 + 496) = 55;
              *(_QWORD *)(a2 + 504) = v38;
              *(_QWORD *)(a2 + 512) = v39;
              *(_QWORD *)(a2 + 520) = v40;
              *(_BYTE *)(a2 + 528) = 0;
              break;
            case 1:
              v268 = a2 + 440;
              v267 = v303;
              v266 = a2 + 448;
              sub_1419393E0(&off_141A2BFF8);
            case 2:
              v268 = a2 + 440;
              v267 = v303;
              v266 = a2 + 448;
              sub_141939400(&off_141A2BFF8);
            case 3:
              v293 = a2 + 448;
              v300 = (_BYTE *)(a2 + 1248);
              break;
          }
          v304 = *((_BYTE **)&v36 + 1);
          *((_QWORD *)&v302 + 1) = a2 + 480;
          sub_140B608B0(&v297, a2 + 480, v4, v66);
          v155 = v297.m256i_i32[0];
          if ( v297.m256i_i64[0] == 2 )
          {
            *v300 = 3;
            v62 = 8;
            goto LABEL_260;
          }
          v156 = v297.m256i_i8[8];
          v285[0] = *(__int32 *)((char *)&v297.m256i_i32[2] + 1);
          *(_DWORD *)((char *)v285 + 3) = v297.m256i_i32[3];
          v157 = *(_OWORD *)&v297.m256i_u64[2];
          v71 = v298;
          v158 = *(unsigned __int8 *)(v305 + 528);
          if ( v158 == 4 )
          {
            if ( *(_BYTE *)(v305 + 1240) == 3 )
            {
              sub_1407A90D0(v305 + 816);
            }
            else if ( !*(_BYTE *)(v305 + 1240) )
            {
              sub_1407AC640(v305 + 680);
            }
          }
          else if ( v158 == 3 )
          {
            sub_1407AC3B0(*(_QWORD *)(v305 + 536), *(_QWORD *)(v305 + 544));
          }
          if ( v155 == 1 )
          {
            v297.m256i_i8[0] = v156;
            *(__int32 *)((char *)v297.m256i_i32 + 1) = v285[0];
            v297.m256i_i32[1] = *(_DWORD *)((char *)v285 + 3);
            *((_QWORD *)&v302 + 1) = v157;
            *(_OWORD *)&v297.m256i_u64[1] = v157;
            v297.m256i_i64[3] = v71;
            v294 = 0;
            v295 = 1;
            v296 = 0;
            v292 = 1610612768;
            *(_QWORD *)&v291 = &v294;
            *((_QWORD *)&v291 + 1) = &off_141A353B8;
            if ( (unsigned __int8)sub_140DDCB80(&v297, &v291) )
              sub_141939040(
                (unsigned int)aADisplayImplem_6,
                55,
                (unsigned int)&v301,
                (unsigned int)&unk_141A2C928,
                (__int64)&off_141A35470);
            v163 = v294;
            v164 = v295;
            v71 = v296;
            if ( v297.m256i_i16[0] && *((_QWORD *)&v302 + 1) )
              sub_140001660(*((_QWORD *)&v157 + 1), *((_QWORD *)&v302 + 1), 1);
            *(_QWORD *)&v302 = v164;
            *((_QWORD *)&v302 + 1) = v163;
          }
          else if ( v156 == -1 )
          {
            *(_QWORD *)&v302 = v157 >> 64;
            *((_QWORD *)&v302 + 1) = v157;
          }
          else
          {
            HIDWORD(v286) = *(_DWORD *)((char *)v285 + 3);
            *(_DWORD *)((char *)&v286 + 1) = v285[0];
            LOBYTE(v286) = v156;
            v287 = v157;
            v288 = v71;
            v165 = sub_1416419F0(aAvailablebalan, 16, &v286);
            if ( (sub_140DBAB50(v165) & 1) != 0 )
            {
              v283 = v3 / 10000.0;
              *(_QWORD *)&v291 = 0;
              *((_QWORD *)&v291 + 1) = 1;
              v292 = 0;
              v297.m256i_i64[2] = 1610612768;
              v297.m256i_i64[0] = (__int64)&v291;
              v297.m256i_i64[1] = (__int64)&off_141A353B8;
              if ( (unsigned __int8)sub_1416BB8F0(&v283, &v297) )
                sub_141939040(
                  (unsigned int)aADisplayImplem_6,
                  55,
                  (unsigned int)&v301,
                  (unsigned int)&unk_141A2C928,
                  (__int64)&off_141A35470);
              *(_QWORD *)&v302 = *((_QWORD *)&v291 + 1);
              *((_QWORD *)&v302 + 1) = v291;
              sub_140DBACB0((unsigned int)&v294, DWORD2(v291), v292, (unsigned int)&unk_141A2C020, 3);
              *(_QWORD *)&v36 = v294;
              v167 = v295;
              v168 = v296;
              sub_14002F9D0(&v286);
              if ( *((_QWORD *)&v302 + 1) )
                sub_140001660(v302, *((_QWORD *)&v302 + 1), 1);
              *v300 = 1;
              v62 = 8;
              *((_QWORD *)&v36 + 1) = v304;
              v82 = v303;
              if ( (_QWORD)v36 == -2 )
              {
LABEL_381:
                v25 = v305;
                goto LABEL_261;
              }
              *(_QWORD *)&v302 = v168;
              *((_QWORD *)&v302 + 1) = v167;
              v71 = (__int64)&unk_141A2C023;
LABEL_295:
              v80 = 22;
              v79 = &unk_141A2C032;
              v78 = 15;
              goto LABEL_412;
            }
            nullsub_1(v166);
            v169 = (void *)sub_140001650(48, 1);
            if ( !v169 )
              sub_141938D2B(1, 48);
            *((_QWORD *)&v302 + 1) = 48;
            *(_QWORD *)&v302 = v169;
            qmemcpy(v169, "Novita balance response missing availableBalance", 48);
            sub_14002F9D0(&v286);
            v71 = 48;
          }
          *v300 = 1;
          *(_QWORD *)&v36 = -1;
          *((_QWORD *)&v36 + 1) = v304;
          v82 = v303;
          goto LABEL_295;
        case 9LL:
          v304 = (_BYTE *)(a2 + 440);
LABEL_44:
          *((_QWORD *)&v302 + 1) = a2 + 448;
          sub_140B5F560(&v297, a2 + 448, v4);
          *(_QWORD *)&v36 = v297.m256i_i64[0];
          if ( v297.m256i_i64[0] == -2 )
          {
            v62 = 9;
            goto LABEL_260;
          }
          *((_QWORD *)&v302 + 1) = v297.m256i_i64[1];
          v71 = v297.m256i_i64[3];
          *(_QWORD *)&v302 = v297.m256i_i64[2];
          v79 = *((void **)&v298 + 1);
          v78 = v298;
          v80 = v299;
          *((_QWORD *)&v36 + 1) = v304;
          if ( *(_BYTE *)(v305 + 1249) != 3 )
            goto LABEL_74;
          v85 = *(unsigned __int8 *)(v305 + 496);
          v82 = v303;
          if ( v85 != 4 )
          {
            if ( v85 != 3 )
              goto LABEL_412;
            goto LABEL_68;
          }
          if ( *(_BYTE *)(v305 + 1208) == 3 )
            goto LABEL_427;
          if ( !*(_BYTE *)(v305 + 1208) )
            goto LABEL_273;
          goto LABEL_412;
        case 10LL:
          v304 = (_BYTE *)(a2 + 440);
LABEL_34:
          *((_QWORD *)&v302 + 1) = a2 + 448;
          sub_140B5F560(&v297, a2 + 448, v4);
          *(_QWORD *)&v36 = v297.m256i_i64[0];
          if ( v297.m256i_i64[0] == -2 )
          {
            v62 = 10;
            goto LABEL_260;
          }
          *((_QWORD *)&v302 + 1) = v297.m256i_i64[1];
          v71 = v297.m256i_i64[3];
          *(_QWORD *)&v302 = v297.m256i_i64[2];
          v79 = *((void **)&v298 + 1);
          v78 = v298;
          v80 = v299;
          *((_QWORD *)&v36 + 1) = v304;
          if ( *(_BYTE *)(v305 + 1249) == 3 )
          {
            v81 = *(unsigned __int8 *)(v305 + 496);
            v82 = v303;
            if ( v81 == 4 )
            {
              if ( *(_BYTE *)(v305 + 1208) == 3 )
              {
LABEL_427:
                v290 = v304;
                v289 = v303;
                sub_1407A90D0(v305 + 784);
              }
              else if ( !*(_BYTE *)(v305 + 1208) )
              {
LABEL_273:
                v290 = v304;
                v289 = v303;
                sub_1407AC640(v305 + 648);
              }
            }
            else if ( v81 == 3 )
            {
LABEL_68:
              v83 = *(_QWORD *)(v305 + 504);
              v84 = *(_QWORD *)(v305 + 512);
              v290 = v304;
              v289 = v303;
              sub_1407AC3B0(v83, v84);
            }
          }
          else
          {
LABEL_74:
            v82 = v303;
          }
          goto LABEL_412;
        case 11LL:
          v63 = (_BYTE *)(a2 + 1248);
          v64 = a2 + 448;
          switch ( *(_BYTE *)(a2 + 1248) )
          {
            case 0:
              v15 = *(_BYTE **)(a2 + 448);
              v38 = *(_QWORD *)(a2 + 456);
              v39 = *(_QWORD *)(a2 + 464);
              v40 = *(_QWORD *)(a2 + 472);
LABEL_257:
              *((_QWORD *)&v302 + 1) = v64;
              v300 = v63;
              v304 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 480) = v15;
              *(_QWORD *)(a2 + 488) = aHttpsApiKimiCo;
              *(_QWORD *)(a2 + 496) = 37;
              *(_QWORD *)(a2 + 504) = v38;
              *(_QWORD *)(a2 + 512) = v39;
              *(_QWORD *)(a2 + 520) = v40;
              *(_BYTE *)(a2 + 528) = 0;
              break;
            case 1:
              v265 = a2 + 440;
              v264 = v303;
              v263 = a2 + 448;
              sub_1419393E0(&off_141A2C460);
            case 2:
              v265 = a2 + 440;
              v264 = v303;
              v263 = a2 + 448;
              sub_141939400(&off_141A2C460);
            case 3:
              *((_QWORD *)&v302 + 1) = a2 + 448;
              v300 = (_BYTE *)(a2 + 1248);
              v304 = (_BYTE *)(a2 + 440);
              break;
          }
          *(_QWORD *)&v302 = a2 + 480;
          sub_140B608B0(&v297, a2 + 480, v4, v64);
          v159 = v297.m256i_i32[0];
          if ( v297.m256i_i64[0] == 2 )
          {
            *v300 = 3;
            v62 = 11;
            goto LABEL_260;
          }
          v160 = v297.m256i_i8[8];
          v285[0] = *(__int32 *)((char *)&v297.m256i_i32[2] + 1);
          *(_DWORD *)((char *)v285 + 3) = v297.m256i_i32[3];
          v161 = *(_OWORD *)&v297.m256i_u64[2];
          v71 = v298;
          v162 = *(unsigned __int8 *)(v305 + 528);
          if ( v162 == 4 )
          {
            if ( *(_BYTE *)(v305 + 1240) == 3 )
            {
              sub_1407A90D0(v305 + 816);
            }
            else if ( !*(_BYTE *)(v305 + 1240) )
            {
              sub_1407AC640(v305 + 680);
            }
          }
          else if ( v162 == 3 )
          {
            sub_1407AC3B0(*(_QWORD *)(v305 + 536), *(_QWORD *)(v305 + 544));
          }
          if ( v159 == 1 )
          {
            v297.m256i_i8[0] = v160;
            *(__int32 *)((char *)v297.m256i_i32 + 1) = v285[0];
            v297.m256i_i32[1] = *(_DWORD *)((char *)v285 + 3);
            *(_QWORD *)&v302 = v161;
            v293 = v161 >> 64;
            v297.m256i_i64[1] = v161;
            v297.m256i_i64[2] = *((_QWORD *)&v161 + 1);
            v297.m256i_i64[3] = v71;
            v294 = 0;
            v295 = 1;
            v296 = 0;
            v292 = 1610612768;
            *(_QWORD *)&v291 = &v294;
            *((_QWORD *)&v291 + 1) = &off_141A353B8;
            if ( (unsigned __int8)sub_140DDCB80(&v297, &v291) )
              sub_141939040(
                (unsigned int)aADisplayImplem_6,
                55,
                (unsigned int)&v301,
                (unsigned int)&unk_141A2C928,
                (__int64)&off_141A35470);
            *((_QWORD *)&v36 + 1) = v294;
            *(_QWORD *)&v36 = v295;
            v71 = v296;
            if ( v297.m256i_i16[0] && (_QWORD)v302 )
              sub_140001660(v293, v302, 1);
            goto LABEL_344;
          }
          if ( v160 == -1 )
          {
            *(_QWORD *)&v36 = v161 >> 64;
            *((_QWORD *)&v36 + 1) = v161;
          }
          else
          {
            HIDWORD(v286) = *(_DWORD *)((char *)v285 + 3);
            *(_DWORD *)((char *)&v286 + 1) = v285[0];
            LOBYTE(v286) = v160;
            v287 = v161;
            v288 = v71;
            v294 = 0;
            v295 = 8;
            v296 = 0;
            v170 = sub_1416419F0(aLimits, 6, &v286);
            if ( v170 && *(_BYTE *)v170 == 4 )
            {
              v171 = *(_QWORD *)(v170 + 16);
              v172 = v171 + 32LL * *(_QWORD *)(v170 + 24);
              v173 = 0;
              v174 = &unk_141A2C47E;
              while ( 1 )
              {
                do
                {
                  if ( (v173 & 1) != 0 || v171 == v172 )
                    goto LABEL_326;
                  v177 = sub_1416419F0(v174, 6, v171);
                  v178 = v177;
                  v171 += 32;
                  v173 = 1;
                }
                while ( !v177 );
                v179 = (unsigned __int8 *)sub_1416419F0(aLimit_0, 5, v177);
                if ( !v179 )
                  goto LABEL_314;
                v180 = *v179;
                if ( v180 == 3 )
                {
                  v181 = sub_140E91160(*((_QWORD *)v179 + 2), *((_QWORD *)v179 + 3));
                  sub_1416BAA10(&v297, v181, v182);
                  v183 = v297.m256i_i8[0] ^ 1;
                  goto LABEL_316;
                }
                if ( v180 == 2 )
                  v183 = 1;
                else
LABEL_314:
                  v183 = 0;
LABEL_316:
                v184 = (unsigned __int8 *)sub_1416419F0(aRemaining, 9, v178);
                if ( v184 )
                {
                  v185 = *v184;
                  if ( v185 == 3 )
                  {
                    v186 = sub_140E91160(*((_QWORD *)v184 + 2), *((_QWORD *)v184 + 3));
                    sub_1416BAA10(&v297, v186, v187);
                    v188 = v297.m256i_i8[0] ^ 1;
                    goto LABEL_321;
                  }
                  if ( v185 == 2 )
                  {
                    v188 = 1;
LABEL_321:
                    if ( ((unsigned __int8)v188 & (unsigned __int8)v183) == 1 )
                    {
                      sub_140DBAC00(&v297);
                      v283 = COERCE_DOUBLE(&v297);
                      v284 = sub_1400015F0;
                      sub_1416ABFD0(&v291, &unk_141A2C489, &v283);
                      v189 = v174;
                      if ( v297.m256i_i64[0] )
                        sub_140001660(v297.m256i_i64[1], v297.m256i_i64[0], 1);
                      v293 = *((_QWORD *)&v291 + 1);
                      *(_QWORD *)&v302 = v291;
                      v190 = v292;
                      v191 = v296;
                      if ( v296 == v294 )
                        sub_14190FDC0(&v294);
                      v175 = v295;
                      v176 = 3 * v191;
                      *(_QWORD *)(v295 + 8 * v176) = v302;
                      *(_QWORD *)(v175 + 8 * v176 + 8) = v293;
                      *(_QWORD *)(v175 + 8 * v176 + 16) = v190;
                      v296 = v191 + 1;
                      v174 = v189;
                    }
                  }
                }
              }
            }
LABEL_326:
            v192 = sub_1416419F0("usage", 5, &v286);
            v194 = v192;
            if ( v192
              && (v195 = sub_1416419F0(aLimit_0, 5, v192),
                  v196 = sub_140DBAB50(v195),
                  v197 = sub_1416419F0(aRemaining, 9, v194),
                  ((unsigned __int8)sub_140DBAB50(v197) & v196 & 1) != 0) )
            {
              sub_140DBAC00(&v297);
              v283 = COERCE_DOUBLE(&v297);
              v284 = sub_1400015F0;
              sub_1416ABFD0(&v291, &unk_141A2C48F, &v283);
              if ( v297.m256i_i64[0] )
                sub_140001660(v297.m256i_i64[1], v297.m256i_i64[0], 1);
              v293 = *((_QWORD *)&v291 + 1);
              *(_QWORD *)&v302 = v291;
              v198 = v292;
              v199 = v296;
              if ( v296 == v294 )
                sub_14190FDC0(&v294);
              v200 = v295;
              v193 = 3 * v199;
              *(_QWORD *)(v295 + 8 * v193) = v302;
              *(_QWORD *)(v200 + 8 * v193 + 8) = v293;
              *(_QWORD *)(v200 + 8 * v193 + 16) = v198;
              v201 = v199 + 1;
              v296 = v201;
            }
            else
            {
              v201 = v296;
            }
            if ( v201 )
            {
              sub_140D1EE10((unsigned int)&v297, v295, v201, (unsigned int)&unk_141A2C496, 3);
              v36 = *(_OWORD *)v297.m256i_i8;
              v202 = v297.m256i_i64[2];
              sub_1403FAE40(&v294);
              if ( v294 )
                sub_140001660(v295, 24 * v294, 8);
              sub_14002F9D0(&v286);
              *v300 = 1;
              v62 = 11;
              if ( (_QWORD)v36 == -2 )
                goto LABEL_260;
              *(_QWORD *)&v302 = v202;
              *((_QWORD *)&v302 + 1) = *((_QWORD *)&v36 + 1);
              v71 = (__int64)&unk_141A2C499;
LABEL_345:
              *((_QWORD *)&v36 + 1) = v304;
              v80 = 23;
              v79 = &unk_141A2C4A9;
LABEL_363:
              v78 = 16;
              v82 = v303;
LABEL_412:
              **((_BYTE **)&v36 + 1) = 1;
              sub_140A3AC80(v82);
              if ( (_QWORD)v36 == -1 )
              {
                sub_140DBC1F0(
                  (unsigned int)v241,
                  *(_QWORD *)(v305 + 112),
                  *(_QWORD *)(v305 + 312),
                  *(_QWORD *)(v305 + 320),
                  *(_QWORD *)(v305 + 328),
                  *(_QWORD *)(v305 + 336),
                  v302,
                  v71);
                if ( *((_QWORD *)&v302 + 1) )
                  sub_140001660(v302, *((_QWORD *)&v302 + 1), 1);
              }
              else
              {
                v297.m256i_i64[0] = v36;
                v297.m256i_i64[1] = *((_QWORD *)&v302 + 1);
                v297.m256i_i64[2] = v302;
                v297.m256i_i64[3] = v71;
                *(_QWORD *)&v298 = v78;
                *((_QWORD *)&v298 + 1) = v79;
                v299 = v80;
                sub_140D73790(v241, &v297, *(_QWORD *)(v305 + 112));
              }
              goto LABEL_416;
            }
            nullsub_1(v193);
            v203 = (void *)sub_140001650(46, 1);
            if ( !v203 )
              sub_141938D2B(1, 46);
            *(_QWORD *)&v36 = v203;
            qmemcpy(v203, "Kimi coding usage response missing quota tiers", 46);
            sub_1403FAE40(&v294);
            if ( v294 )
              sub_140001660(v295, 24 * v294, 8);
            *((_QWORD *)&v36 + 1) = 46;
            sub_14002F9D0(&v286);
            v71 = 46;
          }
LABEL_344:
          v302 = v36;
          *v300 = 1;
          *(_QWORD *)&v36 = -1;
          goto LABEL_345;
        case 12LL:
          v304 = (_BYTE *)(a2 + 440);
LABEL_56:
          v300 = (_BYTE *)(a2 + 448);
          sub_140B5FC10(&v297, a2 + 448, v4);
          *(_QWORD *)&v36 = v297.m256i_i64[0];
          if ( v297.m256i_i64[0] != -2 )
            goto LABEL_75;
          v62 = 12;
          goto LABEL_260;
        case 13LL:
          v304 = (_BYTE *)(a2 + 440);
LABEL_53:
          v300 = (_BYTE *)(a2 + 448);
          sub_140B5FC10(&v297, a2 + 448, v4);
          *(_QWORD *)&v36 = v297.m256i_i64[0];
          if ( v297.m256i_i64[0] == -2 )
          {
            v62 = 13;
            goto LABEL_260;
          }
LABEL_75:
          *((_QWORD *)&v302 + 1) = v297.m256i_i64[1];
          v71 = v297.m256i_i64[3];
          *(_QWORD *)&v302 = v297.m256i_i64[2];
          v79 = *((void **)&v298 + 1);
          v78 = v298;
          v80 = v299;
          *((_QWORD *)&v36 + 1) = v304;
          v290 = v304;
          v82 = v303;
          v289 = v303;
          sub_1407A9830((__int64)v300);
          goto LABEL_412;
      }
    case 4LL:
      v13 = (_BYTE *)(a2 + 1152);
      v14 = a2 + 312;
      switch ( *(_BYTE *)(a2 + 1152) )
      {
        case 0:
          v303 = a3;
          v15 = *(_BYTE **)(a2 + 312);
          v16 = (_QWORD *)a2;
          v17 = *(_QWORD *)(a2 + 320);
          v18 = v16[41];
          v19 = v16[42];
          v20 = v16[43];
          v21 = v16[44];
          goto LABEL_9;
        case 1:
          JUMPOUT(0x140B5C0D9LL);
        case 2:
          JUMPOUT(0x140B5C0A7LL);
        case 3:
          v304 = (_BYTE *)(a2 + 1152);
          *((_QWORD *)&v302 + 1) = a2 + 312;
          goto LABEL_19;
      }
    case 5LL:
      v27 = (_BYTE *)(a2 + 1176);
      v28 = a2 + 336;
      switch ( *(_BYTE *)(a2 + 1176) )
      {
        case 0:
          v303 = a3;
          v29 = *(_QWORD *)(a2 + 336);
          v30 = (_QWORD *)a2;
          v31 = *(_QWORD *)(a2 + 344);
          v32 = v30[44];
          v33 = v30[45];
          v34 = v30[46];
          v35 = v30[47];
          goto LABEL_128;
        case 1:
          v257 = a2 + 336;
          sub_1419393E0(&off_141A2C0B8);
        case 2:
          v257 = a2 + 336;
          sub_141939400(&off_141A2C0B8);
        case 3:
          v304 = (_BYTE *)(a2 + 1176);
          *((_QWORD *)&v302 + 1) = a2 + 336;
          goto LABEL_131;
      }
  }
}
