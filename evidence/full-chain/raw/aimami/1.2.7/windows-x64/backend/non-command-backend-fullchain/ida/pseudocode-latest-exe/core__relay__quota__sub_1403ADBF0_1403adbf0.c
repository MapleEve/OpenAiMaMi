// win 1.2.7 latest-exe | module src/core/relay/quota.rs | ea 0x1403adbf0 | successor of pre-update 0x140b581f0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
char __fastcall sub_1403ADBF0(_QWORD *a1, __int64 a2, __int64 a3)
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
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rdx
  char *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rdi
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int128 v103; // xmm0
  __int64 v104; // rdx
  __int64 v105; // r14
  __int64 v106; // rbx
  __int64 v107; // r12
  const char *v108; // r13
  unsigned __int128 v109; // kr190_16
  __int64 v110; // rax
  __int32 v111; // ebx
  __int16 v112; // si
  __int16 v113; // di
  __int32 v114; // r15d
  int v115; // eax
  __int64 v116; // r14
  char **v117; // r15
  __int64 *v118; // rax
  char **v119; // r12
  char **v120; // r15
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int32 v123; // edi
  __int64 *v124; // rbx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // rax
  __int64 *v129; // rax
  __int64 v130; // rsi
  int v131; // r9d
  __int64 v132; // rdi
  __int64 v133; // rdx
  char *v134; // rax
  __int64 v135; // rax
  __int32 v136; // esi
  __int8 v137; // bl
  unsigned __int128 v138; // kr180_16
  int v139; // eax
  __int64 v140; // rdx
  _QWORD *v141; // rax
  __int64 v142; // rdx
  _BYTE *v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rsi
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int32 v149; // esi
  __int8 v150; // bl
  unsigned __int128 v151; // kr1B0_16
  int v152; // eax
  __int32 v153; // esi
  __int8 v154; // bl
  unsigned __int128 v155; // kr1C0_16
  int v156; // eax
  __int32 v157; // esi
  __int8 v158; // bl
  unsigned __int128 v159; // kr1D0_16
  int v160; // eax
  __int32 v161; // edi
  __int8 v162; // si
  unsigned __int128 v163; // kr1E0_16
  int v164; // eax
  __int64 v165; // rsi
  __int64 v166; // rbx
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rbx
  __int64 v171; // r14
  void *v172; // rax
  __int64 v173; // rax
  __int64 v174; // rdi
  __int64 v175; // r15
  char v176; // r12
  void *v177; // rsi
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rax
  __int64 v181; // r13
  unsigned __int8 *v182; // rax
  int v183; // ecx
  __int64 v184; // rax
  __int64 v185; // rdx
  char v186; // r14
  unsigned __int8 *v187; // rax
  int v188; // ecx
  __int64 v189; // rax
  __int64 v190; // rdx
  char v191; // al
  void *v192; // r13
  __int64 v193; // r14
  __int64 v194; // rsi
  __int64 v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rdi
  __int64 v199; // rax
  unsigned __int8 v200; // bl
  __int64 v201; // rax
  __int64 v202; // rsi
  __int64 v203; // rdi
  __int64 v204; // rax
  __int64 v205; // rdi
  __int64 v206; // rbx
  void *v207; // rax
  __int64 v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // rbx
  void *v212; // rax
  __int64 v213; // rsi
  __int64 v214; // rbx
  __int64 *v215; // rdi
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rdx
  __int64 v219; // rcx
  double v220; // xmm6_8
  __int64 v221; // rax
  __int64 v222; // rbx
  __int64 v223; // r14
  void *v224; // rax
  __int128 v225; // rdi
  __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // rbx
  __int64 v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int32 v233; // edi
  __int64 v234; // rax
  __int64 v235; // rcx
  __int64 v236; // rax
  __int128 v237; // xmm0
  __int64 v238; // rdx
  __int64 v239; // rdx
  void *v240; // rax
  __int64 v241; // rax
  bool v242; // zf
  void *v243; // r9
  __int64 v244; // rcx
  __int64 v245; // rbx
  __int64 v246; // rdx
  __int64 v247; // [rsp+38h] [rbp-48h]
  __int64 v248; // [rsp+38h] [rbp-48h]
  _BYTE v249[136]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v250; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v251; // [rsp+D8h] [rbp+58h]
  __int128 v252; // [rsp+E8h] [rbp+68h]
  __int128 v253; // [rsp+F8h] [rbp+78h]
  __int128 v254; // [rsp+108h] [rbp+88h]
  __int128 v255; // [rsp+118h] [rbp+98h]
  __int128 v256; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v257; // [rsp+138h] [rbp+B8h]
  __int128 v258; // [rsp+148h] [rbp+C8h]
  __int128 v259; // [rsp+158h] [rbp+D8h]
  __int128 v260; // [rsp+168h] [rbp+E8h]
  __int64 v261; // [rsp+178h] [rbp+F8h]
  __int128 v262; // [rsp+180h] [rbp+100h] BYREF
  __int128 v263; // [rsp+190h] [rbp+110h]
  __int64 v264; // [rsp+1A0h] [rbp+120h]
  __int64 v265; // [rsp+1A8h] [rbp+128h]
  __int64 v266; // [rsp+1B0h] [rbp+130h]
  _BYTE *v267; // [rsp+1B8h] [rbp+138h]
  __int64 v268; // [rsp+1C8h] [rbp+148h]
  _BYTE *v269; // [rsp+1D0h] [rbp+150h]
  __int64 v270; // [rsp+1D8h] [rbp+158h]
  __int64 v271; // [rsp+1E0h] [rbp+160h]
  __int64 v272; // [rsp+1E8h] [rbp+168h]
  __int64 v273; // [rsp+1F0h] [rbp+170h]
  __int64 v274; // [rsp+1F8h] [rbp+178h]
  __int64 v275; // [rsp+200h] [rbp+180h]
  __int64 v276; // [rsp+208h] [rbp+188h]
  __int64 v277; // [rsp+210h] [rbp+190h]
  __int64 v278; // [rsp+218h] [rbp+198h]
  __int64 v279; // [rsp+220h] [rbp+1A0h]
  __int64 v280; // [rsp+228h] [rbp+1A8h]
  __int64 v281; // [rsp+230h] [rbp+1B0h]
  __int64 v282; // [rsp+238h] [rbp+1B8h]
  __int64 v283; // [rsp+240h] [rbp+1C0h]
  __int64 v284; // [rsp+248h] [rbp+1C8h]
  __int64 v285; // [rsp+250h] [rbp+1D0h]
  __int64 v286; // [rsp+258h] [rbp+1D8h]
  _BYTE *v287; // [rsp+260h] [rbp+1E0h]
  __int64 v288; // [rsp+268h] [rbp+1E8h]
  __int64 v289; // [rsp+270h] [rbp+1F0h]
  _QWORD *v290; // [rsp+278h] [rbp+1F8h]
  double v291; // [rsp+280h] [rbp+200h] BYREF
  __int64 (__fastcall *v292)(); // [rsp+288h] [rbp+208h]
  _DWORD v293[2]; // [rsp+290h] [rbp+210h]
  __int64 v294; // [rsp+298h] [rbp+218h] BYREF
  unsigned __int128 v295; // [rsp+2A0h] [rbp+220h]
  __int64 v296; // [rsp+2B0h] [rbp+230h]
  __int64 v297; // [rsp+2B8h] [rbp+238h]
  _BYTE *v298; // [rsp+2C0h] [rbp+240h]
  __int128 v299; // [rsp+2C8h] [rbp+248h] BYREF
  __int64 v300; // [rsp+2D8h] [rbp+258h]
  __int64 v301; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v302; // [rsp+2E8h] [rbp+268h]
  __int64 v303; // [rsp+2F0h] [rbp+270h]
  __int64 v304; // [rsp+2F8h] [rbp+278h]
  __m256i v305; // [rsp+300h] [rbp+280h] BYREF
  __int128 v306; // [rsp+320h] [rbp+2A0h]
  __int64 v307; // [rsp+330h] [rbp+2B0h]
  _BYTE *v308; // [rsp+340h] [rbp+2C0h]
  char v309; // [rsp+34Fh] [rbp+2CFh] BYREF
  __int128 v310; // [rsp+350h] [rbp+2D0h]
  __int64 v311; // [rsp+360h] [rbp+2E0h]
  _BYTE *v312; // [rsp+368h] [rbp+2E8h]
  __int64 v313; // [rsp+370h] [rbp+2F0h]
  __int64 v314; // [rsp+378h] [rbp+2F8h]

  v314 = -2;
  v4 = a3;
  v290 = a1;
  v5 = *(unsigned __int8 *)(a2 + 306);
  v313 = a2;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a2 + 304) = 0;
      v6 = *(_QWORD *)(a2 + 296);
      *(_QWORD *)(a2 + 112) = v6;
      sub_1407449B0(a2 + 120, *(_QWORD *)(v6 + 80), *(_QWORD *)(v6 + 88));
      v7 = *(_QWORD *)(v313 + 112);
      if ( !*(_QWORD *)(v313 + 136) )
      {
        sub_140746570(
          (unsigned int)v249,
          v7,
          (unsigned int)aUnsupported_0,
          11,
          (__int64)&unk_141A0FCCE,
          17,
          (__int64)&unk_141A0FCCE,
          17);
        goto LABEL_422;
      }
      sub_140745610(&v250, *(_QWORD *)(v7 + 152), *(_QWORD *)(v7 + 160));
      if ( (_DWORD)v250 == -1 )
      {
        v312 = *((_BYTE **)&v250 + 1);
        v47 = *(_QWORD *)(v313 + 112);
        v311 = v251;
        sub_140746570(
          (unsigned int)v249,
          v47,
          (unsigned int)aUnsupported_0,
          11,
          (__int64)aEHeaders,
          21,
          v251,
          *((__int64 *)&v251 + 1));
        if ( v312 )
          sub_140001660(v311, v312, 1);
        goto LABEL_422;
      }
      v8 = v313;
      *(_OWORD *)(v313 + 80) = v255;
      *(_OWORD *)(v8 + 64) = v254;
      v9 = v250;
      v10 = v251;
      v11 = v252;
      *(_OWORD *)(v8 + 48) = v253;
      *(_OWORD *)(v8 + 32) = v11;
      *(_OWORD *)(v8 + 16) = v10;
      *(_OWORD *)v8 = v9;
      sub_140BDDAE0(&v305, &unk_142239360, 1000000001, *(unsigned __int8 *)(*(_QWORD *)(v8 + 112) + 253LL));
      if ( v305.m256i_i64[0] != -1 )
      {
        v312 = (_BYTE *)v305.m256i_i64[0];
        v12 = *(_QWORD *)(v313 + 112);
        v311 = v305.m256i_i64[1];
        sub_140746570(
          (unsigned int)v249,
          v12,
          (unsigned int)aUnsupported_0,
          11,
          (__int64)aE_1,
          12,
          v305.m256i_i64[1],
          v305.m256i_i64[2]);
        if ( v312 )
          sub_140001660(v311, v312, 1);
LABEL_421:
        sub_14028F5B0(v313);
LABEL_422:
        v25 = v313;
        v239 = *(_QWORD *)(v313 + 120);
        if ( v239 )
          sub_140001660(*(_QWORD *)(v313 + 128), v239, 1);
        sub_1419234B0(v290, v249, 136);
        result = 1;
        goto LABEL_425;
      }
      v48 = v313;
      *(_QWORD *)(v313 + 144) = v305.m256i_i64[1];
      sub_140991DF0(&v256, *(_QWORD *)(*(_QWORD *)(v48 + 112) + 56LL), *(_QWORD *)(*(_QWORD *)(v48 + 112) + 64LL));
      if ( (_QWORD)v256 == -1 )
      {
        v312 = *((_BYTE **)&v256 + 1);
        v74 = *(_QWORD *)(v313 + 112);
        v311 = v257;
        sub_140746570(
          (unsigned int)v249,
          v74,
          (unsigned int)aUnsupported_0,
          11,
          (__int64)aE_1,
          12,
          v257,
          *((__int64 *)&v257 + 1));
        v75 = v312;
        v76 = v313;
        if ( !v312 )
          goto LABEL_419;
        v77 = v311;
        goto LABEL_418;
      }
      v49 = v313;
      v50 = v313 + 152;
      v51 = v256;
      v52 = v258;
      v53 = v259;
      *(_OWORD *)(v313 + 168) = v257;
      *(_OWORD *)(v49 + 152) = v51;
      *(_QWORD *)(v49 + 232) = v261;
      *(_OWORD *)(v49 + 216) = v260;
      *(_OWORD *)(v49 + 200) = v53;
      *(_OWORD *)(v49 + 184) = v52;
      *(_OWORD *)(v49 + 96) = *(_OWORD *)(v49 + 160);
      sub_140745FB0(&v262, v50);
      a2 = v313;
      v15 = (_BYTE *)(v313 + 144);
      v54 = v50;
      *(_QWORD *)(v313 + 344) = v264;
      v55 = v262;
      *(_OWORD *)(a2 + 328) = v263;
      *(_OWORD *)(a2 + 312) = v55;
      v56 = *(_OWORD *)(a2 + 96);
      v38 = *(_QWORD *)(a2 + 128);
      v39 = *(_QWORD *)(a2 + 136);
      v311 = a2 + 352;
      *(_OWORD *)(a2 + 352) = v56;
      *(_QWORD *)(a2 + 368) = v38;
      *(_QWORD *)(a2 + 376) = v39;
      *(_QWORD *)(a2 + 384) = v15;
      *(_QWORD *)(a2 + 392) = a2;
      v3 = *(double *)&v262;
      v57 = v263;
      *(_OWORD *)(a2 + 400) = v262;
      *(_OWORD *)(a2 + 416) = v57;
      *(_QWORD *)(a2 + 432) = v264;
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
          v135 = sub_141687F00(v54);
          if ( (unsigned __int8)sub_140236F90(v135) )
          {
            sub_140744B10(
              (unsigned int)v249,
              *(_QWORD *)(v313 + 112),
              (unsigned int)aXiaomiMimo,
              11,
              (__int64)aXiaomiMimoApiK,
              63);
            goto LABEL_416;
          }
          v311 = v4;
          v21 = v313;
          v17 = *(_QWORD *)(v313 + 96);
          v18 = *(_QWORD *)(v313 + 104);
          v19 = *(_QWORD *)(v313 + 128);
          v20 = *(_QWORD *)(v313 + 136);
          v14 = v313 + 312;
          *(_QWORD *)(v313 + 312) = v15;
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
      v312 = v13;
      v269 = v13;
      *((_QWORD *)&v310 + 1) = v14;
      v268 = v14;
      sub_140992450((unsigned int)&v305, v17, v18, (unsigned int)&unk_141A0FD40, 16);
      v22 = v305.m256i_i64[1];
      v24 = v305.m256i_i64[3];
      v23 = (const char *)v305.m256i_i64[2];
      if ( v305.m256i_i8[0] )
      {
        v25 = v313;
        v26 = 2;
LABEL_115:
        *v312 = 1;
        v93 = -1;
        goto LABEL_116;
      }
      a2 = v313;
      *(_QWORD *)(v313 + 360) = v305.m256i_i64[1];
      *(_QWORD *)(a2 + 368) = v23;
      *(_QWORD *)(a2 + 376) = v24;
      *(_QWORD *)(a2 + 384) = v15;
      *(_QWORD *)(a2 + 392) = v23;
      *(_QWORD *)(a2 + 400) = v24;
      *(_QWORD *)(a2 + 408) = v19;
      *(_QWORD *)(a2 + 416) = v20;
      *(_QWORD *)(a2 + 424) = v21;
      *(_BYTE *)(a2 + 432) = 0;
      v4 = v311;
LABEL_19:
      v311 = a2 + 384;
      sub_1403B6030(&v305, a2 + 384, v4, v14);
      v41 = v305.m256i_i32[0];
      if ( v305.m256i_i64[0] == 2 )
      {
        *v312 = 3;
        v25 = v313;
LABEL_21:
        *v290 = -1;
        result = 4;
        goto LABEL_425;
      }
      v311 = v4;
      v43 = v305.m256i_i16[4];
      v44 = v305.m256i_i16[5];
      v45 = v305.m256i_i32[3];
      v23 = (const char *)v305.m256i_i64[3];
      v22 = v305.m256i_i64[2];
      v24 = v306;
      v46 = *(unsigned __int8 *)(v313 + 432);
      if ( v46 == 4 )
      {
        if ( *(_BYTE *)(v313 + 1144) == 3 )
        {
          sub_140285110(v313 + 720);
        }
        else if ( !*(_BYTE *)(v313 + 1144) )
        {
          sub_140290350(v313 + 584);
        }
      }
      else if ( v46 == 3 )
      {
        sub_140290050(*(_QWORD *)(v313 + 440), *(_QWORD *)(v313 + 448));
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
          LOWORD(v301) = v44;
          *(_QWORD *)&v299 = &v301;
          *((_QWORD *)&v299 + 1) = sub_1416EA1B0;
          sub_1416DAFA0(&v305, &unk_141A0FD81, &v299);
          v23 = (const char *)v305.m256i_i64[1];
          v22 = v305.m256i_i64[0];
          v24 = v305.m256i_i64[2];
          v26 = 0;
        }
        else if ( v44 == 404 )
        {
          v26 = 1;
        }
        else
        {
          LOWORD(v301) = v44;
          *(_QWORD *)&v299 = &v301;
          *((_QWORD *)&v299 + 1) = sub_1416EA1B0;
          sub_1403F7C60(&v305, &unk_141A0E5A4, &v299);
          v23 = (const char *)v305.m256i_i64[1];
          v22 = v305.m256i_i64[0];
          v24 = v305.m256i_i64[2];
        }
        goto LABEL_113;
      }
      LOWORD(v294) = v43;
      WORD1(v294) = v44;
      HIDWORD(v294) = v45;
      *(_QWORD *)&v295 = v22;
      *((_QWORD *)&v295 + 1) = v23;
      v296 = v24;
      v23 = (const char *)&v294;
      v86 = sub_1416724D0(aData_4, 4, &v294);
      if ( v86 )
        v23 = (const char *)v86;
      v87 = sub_1416724D0(aObject_0, 6, v23);
      v88 = 1;
      if ( v87 && *(_BYTE *)v87 == 3 && *(_QWORD *)(v87 + 24) == 11 )
        v88 = (**(_QWORD **)(v87 + 16) ^ 0x73755F6E656B6F74LL
             | *(_QWORD *)(*(_QWORD *)(v87 + 16) + 3LL) ^ 0x65676173755F6E65LL) != 0;
      v89 = sub_1416724D0(aTotalAvailable, 15, v23);
      sub_140744810(&v299, v89);
      LOBYTE(v91) = (_QWORD)v299 == -1;
      if ( ((unsigned __int8)v91 & v88) != 0 )
      {
        v26 = 1;
LABEL_112:
        v22 = 42;
        sub_140032FF0(&v294);
        v24 = 42;
LABEL_113:
        v25 = v313;
        v96 = *(_QWORD *)(v313 + 360);
        if ( v96 )
          sub_140001660(*(_QWORD *)(v313 + 368), v96, 1);
        goto LABEL_115;
      }
      if ( (_QWORD)v299 == -1 )
      {
        v92 = sub_1416724D0(aTotalGranted, 13, v23);
        sub_140744810(&v305, v92);
      }
      else
      {
        v305.m256i_i64[2] = v300;
        *(_OWORD *)v305.m256i_i8 = v299;
      }
      if ( v305.m256i_i64[0] == -1 )
      {
        nullsub_1(v91, v90);
        v95 = (char *)sub_140001650(42, 1);
        if ( !v95 )
          sub_14196B2DB(1, 42);
        v23 = v95;
        qmemcpy(v95, "NewAPI token usage missing total_available", 42);
        v26 = 0;
        goto LABEL_112;
      }
      v308 = (_BYTE *)v305.m256i_i64[1];
      *(_QWORD *)&v310 = v305.m256i_i64[0];
      sub_140744DB0(&v305, v305.m256i_i64[1], v305.m256i_i64[2]);
      v26 = v305.m256i_i64[1];
      v93 = v305.m256i_i64[0];
      v22 = v305.m256i_i64[2];
      if ( (_QWORD)v310 )
        sub_140001660(v308, v310, 1);
      sub_140032FF0(&v294);
      v25 = v313;
      v94 = *(_QWORD *)(v313 + 360);
      if ( v94 )
        sub_140001660(*(_QWORD *)(v313 + 368), v94, 1);
      *v312 = 1;
      if ( v93 == -2 )
        goto LABEL_21;
      v23 = aNewapi;
      v24 = 6;
LABEL_116:
      *(_BYTE *)(v25 + 305) = 1;
      *(_QWORD *)(v25 + 240) = v93;
      *(_QWORD *)(v25 + 248) = v26;
      *(_QWORD *)(v25 + 256) = v22;
      *(_QWORD *)(v25 + 264) = v23;
      *(_QWORD *)(v25 + 272) = v24;
      *(_QWORD *)(v25 + 280) = aNewapiTokenUsa_0;
      *(_QWORD *)(v25 + 288) = 18;
      v97 = *((_QWORD *)&v310 + 1);
      sub_14028BCD0(*((_QWORD *)&v310 + 1));
      v35 = v313;
      if ( *(_QWORD *)(v313 + 240) != -1 )
      {
        v307 = *(_QWORD *)(v313 + 288);
        v98 = *(_OWORD *)(v313 + 240);
        v99 = *(_OWORD *)(v313 + 256);
        v306 = *(_OWORD *)(v313 + 272);
        *(_OWORD *)&v305.m256i_u64[2] = v99;
        *(_OWORD *)v305.m256i_i8 = v98;
        sub_14070BA80(v249, &v305, *(_QWORD *)(v313 + 112));
LABEL_118:
        v100 = v313;
        *(_BYTE *)(v313 + 304) = 0;
        if ( *(_QWORD *)(v100 + 240) == -1 )
          *(_BYTE *)(v100 + 305) = 0;
        *(_BYTE *)(v100 + 305) = 0;
LABEL_416:
        v76 = v313;
        v75 = *(_BYTE **)(v313 + 152);
        if ( !v75 )
          goto LABEL_419;
        v77 = *(_QWORD *)(v313 + 160);
LABEL_418:
        sub_140001660(v77, v75, 1);
LABEL_419:
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v76 + 144)) )
          sub_141258070(v313 + 144);
        goto LABEL_421;
      }
      v101 = *(_QWORD *)(v313 + 248);
      if ( !v101 )
      {
        v102 = *(_QWORD *)(v313 + 112);
        v312 = *(_BYTE **)(v313 + 256);
        v247 = *(_QWORD *)(v313 + 272);
        v311 = *(_QWORD *)(v313 + 264);
        sub_140746570((unsigned int)v249, v102, (unsigned int)aNewapi, 6, (__int64)aNewapiTokenUsa_0, 18, v311, v247);
        if ( v312 )
          sub_140001660(v311, v312, 1);
        goto LABEL_118;
      }
      *(_BYTE *)(v313 + 304) = 1;
      if ( (_DWORD)v101 == 1 )
      {
        *(_QWORD *)(v35 + 312) = -1;
      }
      else
      {
        v103 = *(_OWORD *)(v35 + 256);
        *(_QWORD *)(v97 + 16) = *(_QWORD *)(v35 + 272);
        *(_OWORD *)v97 = v103;
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
      v312 = v27;
      v267 = v27;
      v266 = v28;
      sub_140992E20((unsigned int)&v305, v31, v32, (unsigned int)&unk_141A0FE8F, 9, 0);
      v105 = v305.m256i_i64[3];
      v104 = v305.m256i_i64[2];
      v106 = 2;
      *((_QWORD *)&v310 + 1) = v28;
      if ( v305.m256i_i8[0] )
      {
        v109 = *(_OWORD *)&v305.m256i_u64[1];
        v108 = (const char *)(v109 >> 64);
        v107 = v109;
LABEL_197:
        *v312 = 1;
        v132 = -1;
LABEL_198:
        sub_14028BCD0(*((_QWORD *)&v310 + 1));
        if ( v132 != -1 )
        {
          v305.m256i_i64[0] = v132;
          v305.m256i_i64[1] = v106;
          v305.m256i_i64[2] = v107;
          v305.m256i_i64[3] = (__int64)v108;
          *(_QWORD *)&v306 = v105;
          *((_QWORD *)&v306 + 1) = aSub2apiV1Usage;
          v307 = 17;
          sub_14070BA80(v249, &v305, *(_QWORD *)(v313 + 112));
          goto LABEL_206;
        }
        v141 = (_QWORD *)v313;
        if ( v106 == 1 )
        {
          if ( *(_QWORD *)(v313 + 312) == -1 )
          {
            sub_140744170(v249, *(_QWORD *)(v313 + 112));
LABEL_206:
            v146 = v313;
            v147 = *(_QWORD *)(v313 + 312);
            if ( v147 != -1 && *(_BYTE *)(v313 + 304) && v147 )
              sub_140001660(*(_QWORD *)(v313 + 320), v147, 1);
            *(_BYTE *)(v146 + 304) = 0;
            if ( *(_QWORD *)(v146 + 240) == -1 )
              *(_BYTE *)(v146 + 305) = 0;
            *(_BYTE *)(v146 + 305) = 0;
            v148 = *(_QWORD *)(v146 + 152);
            if ( v148 )
              sub_140001660(*(_QWORD *)(v146 + 160), v148, 1);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v146 + 144)) )
              sub_141258070(v313 + 144);
            goto LABEL_421;
          }
          v312 = *(_BYTE **)(v313 + 312);
          *(_BYTE *)(v313 + 304) = 0;
          v142 = v141[14];
          v248 = v141[41];
          v311 = v141[40];
          sub_140746570((unsigned int)v249, v142, (unsigned int)aNewapi, 6, (__int64)aNewapiTokenUsa_0, 18, v311, v248);
          v143 = v312;
          if ( !v312 )
            goto LABEL_206;
          v144 = v311;
        }
        else
        {
          v312 = (_BYTE *)v107;
          v145 = *(_QWORD *)(v313 + 112);
          v311 = (__int64)v108;
          sub_140746570(
            (unsigned int)v249,
            v145,
            (unsigned int)aSub2api,
            7,
            (__int64)aSub2apiV1Usage,
            17,
            (__int64)v108,
            v105);
          v143 = v312;
          v144 = v311;
          if ( !v312 )
            goto LABEL_206;
        }
        sub_140001660(v144, v143, 1);
        goto LABEL_206;
      }
      v110 = v313;
      *(_QWORD *)(v313 + 384) = v305.m256i_i64[1];
      *(_QWORD *)(v110 + 392) = v104;
      *(_QWORD *)(v110 + 400) = v105;
      *(_QWORD *)(v110 + 408) = v29;
      *(_QWORD *)(v110 + 416) = v104;
      *(_QWORD *)(v110 + 424) = v105;
      *(_QWORD *)(v110 + 432) = v33;
      a2 = v110;
      *(_QWORD *)(v110 + 440) = v34;
      *(_QWORD *)(v110 + 448) = v35;
      *(_BYTE *)(v110 + 456) = 0;
      v4 = v311;
LABEL_131:
      v311 = a2 + 408;
      sub_1403B6030(&v305, a2 + 408, v4, v27);
      v111 = v305.m256i_i32[0];
      if ( v305.m256i_i64[0] == 2 )
      {
        *v312 = 3;
        v25 = v313;
        goto LABEL_133;
      }
      v112 = v305.m256i_i16[4];
      v113 = v305.m256i_i16[5];
      v114 = v305.m256i_i32[3];
      v108 = (const char *)v305.m256i_i64[3];
      v107 = v305.m256i_i64[2];
      v105 = v306;
      v115 = *(unsigned __int8 *)(v313 + 456);
      if ( v115 == 4 )
      {
        if ( *(_BYTE *)(v313 + 1168) == 3 )
        {
          sub_140285110(v313 + 744);
        }
        else if ( !*(_BYTE *)(v313 + 1168) )
        {
          sub_140290350(v313 + 608);
        }
      }
      else if ( v115 == 3 )
      {
        sub_140290050(*(_QWORD *)(v313 + 464), *(_QWORD *)(v313 + 472));
      }
      if ( v111 == 1 )
      {
        v106 = 2;
        if ( v112 )
        {
          if ( v112 != 1 )
            v106 = 0;
        }
        else if ( v113 == 401 || v113 == 403 )
        {
          LOWORD(v301) = v113;
          *(_QWORD *)&v299 = &v301;
          *((_QWORD *)&v299 + 1) = sub_1416EA1B0;
          sub_1416DAFA0(&v305, &unk_141A0FFD8, &v299);
          v108 = (const char *)v305.m256i_i64[1];
          v107 = v305.m256i_i64[0];
          v105 = v305.m256i_i64[2];
          v106 = 0;
        }
        else if ( v113 == 404 )
        {
          v106 = 1;
        }
        else
        {
          LOWORD(v301) = v113;
          *(_QWORD *)&v299 = &v301;
          *((_QWORD *)&v299 + 1) = sub_1416EA1B0;
          sub_1403F7C60(&v305, &unk_141A0E5A4, &v299);
          v108 = (const char *)v305.m256i_i64[1];
          v107 = v305.m256i_i64[0];
          v105 = v305.m256i_i64[2];
        }
LABEL_195:
        v140 = *(_QWORD *)(v313 + 384);
        if ( v140 )
          sub_140001660(*(_QWORD *)(v313 + 392), v140, 1);
        goto LABEL_197;
      }
      LOWORD(v294) = v112;
      WORD1(v294) = v113;
      HIDWORD(v294) = v114;
      *(_QWORD *)&v295 = v107;
      *((_QWORD *)&v295 + 1) = v108;
      v296 = v105;
      if ( !sub_1416724D0(aMode, 4, &v294)
        && !sub_1416724D0(aRemaining, 9, &v294)
        && !sub_1416724D0(aQuota, 5, &v294)
        && !sub_1416724D0("usage", 5, &v294) )
      {
        v106 = 1;
LABEL_179:
        v107 = 31;
        sub_140032FF0(&v294);
        v105 = 31;
        goto LABEL_195;
      }
      v116 = 0;
      while ( 1 )
      {
        v117 = (&off_141A0FF40)[v116 + 1];
        v118 = &v294;
        if ( v117 )
        {
          v119 = (&off_141A0FF40)[v116];
          v120 = &v119[2 * (_QWORD)v117];
          v118 = &v294;
          do
          {
            v118 = (__int64 *)sub_1416724D0(*v119, v119[1], v118);
            if ( !v118 )
              goto LABEL_150;
            v119 += 2;
          }
          while ( v119 != v120 );
        }
        sub_140744810(&v305, v118);
        if ( v305.m256i_i64[0] != -1 )
          break;
LABEL_150:
        v116 += 2;
        if ( v116 == 10 )
        {
          v305.m256i_i64[0] = -1;
          nullsub_1(v122, v121);
          v134 = (char *)sub_140001650(31, 1);
          if ( !v134 )
            sub_14196B2DB(1, 31);
          v108 = v134;
          qmemcpy(v134, "Sub2API usage missing remaining", 31);
          v106 = 0;
          goto LABEL_179;
        }
      }
      v311 = v305.m256i_i64[1];
      *(_QWORD *)&v310 = v305.m256i_i64[0];
      v123 = v305.m256i_i32[4];
      v124 = &v294;
      v125 = sub_1416724D0("unit", 4, &v294);
      if ( !v125 || (sub_140744810(&v299, v125), v126 = v299, (_QWORD)v299 == -1) )
      {
        v127 = 0;
        while ( 1 )
        {
          v128 = sub_1416724D0((&off_141A0FF98)[v127], (&off_141A0FF98)[v127 + 1], v124);
          v124 = (__int64 *)v128;
          if ( !v128 )
            break;
          v127 += 2;
          if ( v127 == 4 )
          {
            sub_140744810(&v299, v128);
            v126 = v299;
            if ( (_QWORD)v299 != -1 )
              goto LABEL_167;
            break;
          }
        }
        v129 = &v294;
        v130 = 0;
        while ( 1 )
        {
          v129 = (__int64 *)sub_1416724D0((&off_141A0FFB8)[v130], (&off_141A0FFB8)[v130 + 1], v129);
          if ( !v129 )
            break;
          v130 += 2;
          if ( v130 == 4 )
          {
            sub_140744810(&v299, v129);
            v126 = v299;
            if ( (_QWORD)v299 != -1 )
              goto LABEL_167;
            break;
          }
        }
        v126 = -1;
      }
LABEL_167:
      v131 = 0;
      v308 = (_BYTE *)v126;
      v304 = *((_QWORD *)&v299 + 1);
      if ( v126 != -1 )
        v131 = DWORD2(v299);
      sub_140746370((unsigned int)&v305, v311, v123, v131, v300);
      v106 = v305.m256i_i64[1];
      v132 = v305.m256i_i64[0];
      v107 = v305.m256i_i64[2];
      if ( (__int64)v308 > 0 )
        sub_140001660(v304, v308, 1);
      if ( (_QWORD)v310 )
        sub_140001660(v311, v310, 1);
      sub_140032FF0(&v294);
      v25 = v313;
      v133 = *(_QWORD *)(v313 + 384);
      if ( v133 )
        sub_140001660(*(_QWORD *)(v313 + 392), v133, 1);
      *v312 = 1;
      if ( v132 != -2 )
      {
        v108 = aSub2api;
        v105 = 7;
        goto LABEL_198;
      }
LABEL_133:
      *v290 = -1;
      result = 5;
LABEL_425:
      *(_BYTE *)(v25 + 306) = result;
      return result;
    case 1LL:
      sub_14196B990(&off_141A0FCF8);
    case 2LL:
      sub_14196B9B0(&off_141A0FCF8);
    case 3LL:
      *((_QWORD *)&v36 + 1) = a2 + 440;
      v37 = *(unsigned __int8 *)(a2 + 440);
      v311 = a2 + 352;
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
              v312 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1232) = v38;
              *(_QWORD *)(a2 + 1240) = v39;
              *(_QWORD *)(a2 + 1272) = v15;
              *(_QWORD *)(a2 + 1280) = v40;
              *(_WORD *)(a2 + 1289) = 256;
              goto LABEL_41;
            case 3:
LABEL_232:
              v312 = *((_BYTE **)&v36 + 1);
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
              v312 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1216) = v38;
              *(_QWORD *)(a2 + 1224) = v39;
              *(_QWORD *)(a2 + 1232) = v15;
              *(_QWORD *)(a2 + 1240) = v40;
              *(_WORD *)(a2 + 1249) = 256;
              goto LABEL_44;
            case 7:
LABEL_233:
              v312 = *((_BYTE **)&v36 + 1);
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
              v312 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1232) = v38;
              *(_QWORD *)(a2 + 1240) = v39;
              *(_QWORD *)(a2 + 1272) = v15;
              *(_QWORD *)(a2 + 1280) = v40;
              *(_WORD *)(a2 + 1288) = 256;
              goto LABEL_56;
            case 0xA:
LABEL_255:
              v312 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 1232) = v38;
              *(_QWORD *)(a2 + 1240) = v39;
              *(_QWORD *)(a2 + 1272) = v15;
              *(_QWORD *)(a2 + 1280) = v40;
              *(_WORD *)(a2 + 1288) = 0;
              goto LABEL_53;
          }
        case 1LL:
          v270 = a2 + 352;
          sub_14196B990(&off_141A102D0);
        case 2LL:
          v270 = a2 + 352;
          sub_14196B9B0(&off_141A102D0);
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
              v312 = v15;
              v289 = *((_QWORD *)&v36 + 1);
              v288 = v311;
              v308 = v61;
              v287 = v61;
              v286 = v36;
              sub_140992450((unsigned int)&v305, v59, v60, (unsigned int)"/user/balance", 13);
              v71 = v305.m256i_i64[3];
              v70 = v305.m256i_i64[2];
              v304 = v36;
              if ( v305.m256i_i8[0] )
              {
                *(_QWORD *)&v310 = v305.m256i_i64[2];
                *((_QWORD *)&v310 + 1) = v305.m256i_i64[1];
LABEL_410:
                v82 = v311;
                *v308 = 1;
                *(_QWORD *)&v36 = -1;
LABEL_411:
                v298 = *((_BYTE **)&v36 + 1);
                v297 = v82;
                sub_14028BCD0(v304);
                v80 = 21;
                v79 = &unk_141A1004B;
                v78 = 17;
                goto LABEL_412;
              }
              a2 = v313;
              *(_QWORD *)(v313 + 496) = v305.m256i_i64[1];
              *(_QWORD *)(a2 + 504) = v70;
              *(_QWORD *)(a2 + 512) = v71;
              *(_QWORD *)(a2 + 520) = v312;
              *(_QWORD *)(a2 + 528) = v70;
              *(_QWORD *)(a2 + 536) = v71;
              *(_QWORD *)(a2 + 544) = v38;
              *(_QWORD *)(a2 + 552) = v39;
              *(_QWORD *)(a2 + 560) = v40;
              *(_BYTE *)(a2 + 568) = 0;
LABEL_189:
              v312 = *((_BYTE **)&v36 + 1);
              *((_QWORD *)&v310 + 1) = a2 + 520;
              sub_1403B6030(&v305, a2 + 520, v4, v61);
              v136 = v305.m256i_i32[0];
              if ( v305.m256i_i64[0] == 2 )
              {
                *v308 = 3;
                v62 = 3;
                goto LABEL_260;
              }
              v137 = v305.m256i_i8[8];
              LODWORD(v291) = *(__int32 *)((char *)&v305.m256i_i32[2] + 1);
              *(_DWORD *)((char *)&v291 + 3) = v305.m256i_i32[3];
              v138 = *(_OWORD *)&v305.m256i_u64[2];
              v71 = v306;
              v139 = *(unsigned __int8 *)(v313 + 568);
              if ( v139 == 4 )
              {
                if ( *(_BYTE *)(v313 + 1280) == 3 )
                {
                  sub_140285110(v313 + 856);
                }
                else if ( !*(_BYTE *)(v313 + 1280) )
                {
                  sub_140290350(v313 + 720);
                }
              }
              else if ( v139 == 3 )
              {
                sub_140290050(*(_QWORD *)(v313 + 576), *(_QWORD *)(v313 + 584));
              }
              if ( v136 == 1 )
              {
                v305.m256i_i8[0] = v137;
                *(__int32 *)((char *)v305.m256i_i32 + 1) = LODWORD(v291);
                v305.m256i_i32[1] = *(_DWORD *)((char *)&v291 + 3);
                *((_QWORD *)&v310 + 1) = v138;
                *(_QWORD *)&v310 = v138 >> 64;
                v305.m256i_i64[1] = v138;
                v305.m256i_i64[2] = *((_QWORD *)&v138 + 1);
                v305.m256i_i64[3] = v71;
                v301 = 0;
                v302 = 1;
                v303 = 0;
                v300 = 1610612768;
                *(_QWORD *)&v299 = &v301;
                *((_QWORD *)&v299 + 1) = &off_141A19198;
                if ( (unsigned __int8)sub_14076EC00(&v305, &v299) )
                  sub_14196B5F0(
                    (unsigned int)aADisplayImplem_0,
                    55,
                    (unsigned int)&v309,
                    (unsigned int)&unk_141A10708,
                    (__int64)&off_141A19250);
                *((_QWORD *)&v225 + 1) = v301;
                *(_QWORD *)&v225 = v302;
                v71 = v303;
                if ( v305.m256i_i16[0] && *((_QWORD *)&v310 + 1) )
                  sub_140001660(v310, *((_QWORD *)&v310 + 1), 1);
                goto LABEL_407;
              }
              if ( v137 == -1 )
              {
                *(_QWORD *)&v225 = v138 >> 64;
                *((_QWORD *)&v225 + 1) = v138;
                goto LABEL_407;
              }
              HIDWORD(v294) = *(_DWORD *)((char *)&v291 + 3);
              *(_DWORD *)((char *)&v294 + 1) = LODWORD(v291);
              LOBYTE(v294) = v137;
              v295 = v138;
              v296 = v71;
              v226 = sub_1416724D0(aBalanceInfos, 13, &v294);
              if ( v226 && *(_BYTE *)v226 == 4 )
              {
                if ( !*(_QWORD *)(v226 + 24) )
                {
                  nullsub_1(v228, v227);
                  *((_QWORD *)&v225 + 1) = 34;
                  v240 = (void *)sub_140001650(34, 1);
                  if ( !v240 )
                    sub_14196B2DB(1, 34);
                  *(_QWORD *)&v225 = v240;
                  qmemcpy(v240, "DeepSeek balance response is empty", 34);
                  goto LABEL_405;
                }
                v229 = *(_QWORD *)(v226 + 16);
                v230 = sub_1416724D0(aTotalBalance, 13, v229);
                sub_140744810(&v305, v230);
                if ( v305.m256i_i64[0] != -1 )
                {
                  v310 = *(_OWORD *)v305.m256i_i8;
                  v233 = v305.m256i_i32[4];
                  v234 = sub_1416724D0(aCurrency, 8, v229);
                  if ( v234 )
                  {
                    if ( *(_BYTE *)v234 == 3 )
                      v235 = *(_QWORD *)(v234 + 16);
                    else
                      v235 = 0;
                    v234 = *(_QWORD *)(v234 + 24);
                  }
                  else
                  {
                    v235 = 0;
                  }
                  v242 = v235 == 0;
                  v243 = &unk_141A0FE68;
                  if ( v235 )
                    LODWORD(v243) = v235;
                  v244 = 3;
                  if ( !v242 )
                    v244 = v234;
                  sub_140744530((unsigned int)&v305, DWORD2(v310), v233, (_DWORD)v243, v244);
                  v36 = *(_OWORD *)v305.m256i_i8;
                  v245 = v305.m256i_i64[2];
                  if ( (_QWORD)v310 )
                    sub_140001660(*((_QWORD *)&v310 + 1), v310, 1);
                  *(_QWORD *)&v310 = v245;
                  *((_QWORD *)&v310 + 1) = *((_QWORD *)&v36 + 1);
                  sub_140032FF0(&v294);
                  v25 = v313;
                  v246 = *(_QWORD *)(v313 + 496);
                  if ( v246 )
                    sub_140001660(*(_QWORD *)(v313 + 504), v246, 1);
                  *v308 = 1;
                  v62 = 3;
                  *((_QWORD *)&v36 + 1) = v312;
                  v82 = v311;
                  if ( (_QWORD)v36 != -2 )
                  {
                    v71 = (__int64)&unk_141A1003A;
                    goto LABEL_411;
                  }
LABEL_261:
                  **((_BYTE **)&v36 + 1) = v62;
                  *v290 = -1;
                  result = 3;
                  goto LABEL_425;
                }
                nullsub_1(v232, v231);
                *((_QWORD *)&v225 + 1) = 47;
                v241 = sub_140001650(47, 1);
                if ( !v241 )
                  sub_14196B2DB(1, 47);
                *(_QWORD *)&v225 = v241;
                qmemcpy((void *)(v241 + 16), " response missing total_balance", 31);
                v237 = *(_OWORD *)&aNewapiTokenUsa[242];
              }
              else
              {
                nullsub_1(v228, v227);
                *((_QWORD *)&v225 + 1) = 47;
                v236 = sub_140001650(47, 1);
                if ( !v236 )
                  sub_14196B2DB(1, 47);
                *(_QWORD *)&v225 = v236;
                qmemcpy((void *)(v236 + 16), " response missing balance_infos", 31);
                v237 = *(_OWORD *)&aNewapiTokenUsa[161];
              }
              *(_OWORD *)v225 = v237;
LABEL_405:
              sub_140032FF0(&v294);
              v71 = *((_QWORD *)&v225 + 1);
LABEL_407:
              v310 = v225;
              v238 = *(_QWORD *)(v313 + 496);
              if ( v238 )
                sub_140001660(*(_QWORD *)(v313 + 504), v238, 1);
              *((_QWORD *)&v36 + 1) = v312;
              goto LABEL_410;
            case 1:
              v285 = a2 + 440;
              v284 = v311;
              v283 = a2 + 448;
              sub_14196B990(&off_141A10000);
            case 2:
              v285 = a2 + 440;
              v284 = v311;
              v283 = a2 + 448;
              sub_14196B9B0(&off_141A10000);
            case 3:
              v308 = (_BYTE *)(a2 + 1288);
              v304 = a2 + 448;
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
              *((_QWORD *)&v310 + 1) = v68;
              v308 = v67;
              *(_QWORD *)(a2 + 480) = v15;
              *(_QWORD *)(a2 + 488) = aHttpsApiStepfu;
              *(_QWORD *)(a2 + 496) = 35;
              *(_QWORD *)(a2 + 504) = v38;
              *(_QWORD *)(a2 + 512) = v39;
              *(_QWORD *)(a2 + 520) = v40;
              *(_BYTE *)(a2 + 528) = 0;
              break;
            case 1:
              v282 = a2 + 440;
              v281 = v311;
              v280 = a2 + 448;
              sub_14196B990(&off_141A0FE50);
            case 2:
              v282 = a2 + 440;
              v281 = v311;
              v280 = a2 + 448;
              sub_14196B9B0(&off_141A0FE50);
            case 3:
              *((_QWORD *)&v310 + 1) = a2 + 448;
              v308 = (_BYTE *)(a2 + 1248);
              break;
          }
          v312 = *((_BYTE **)&v36 + 1);
          *(_QWORD *)&v310 = a2 + 480;
          sub_1403B6030(&v305, a2 + 480, v4, v68);
          v153 = v305.m256i_i32[0];
          if ( v305.m256i_i64[0] == 2 )
          {
            *v308 = 3;
            v62 = 4;
            goto LABEL_260;
          }
          v154 = v305.m256i_i8[8];
          LODWORD(v291) = *(__int32 *)((char *)&v305.m256i_i32[2] + 1);
          *(_DWORD *)((char *)&v291 + 3) = v305.m256i_i32[3];
          v155 = *(_OWORD *)&v305.m256i_u64[2];
          v71 = v306;
          v156 = *(unsigned __int8 *)(v313 + 528);
          if ( v156 == 4 )
          {
            if ( *(_BYTE *)(v313 + 1240) == 3 )
            {
              sub_140285110(v313 + 816);
            }
            else if ( !*(_BYTE *)(v313 + 1240) )
            {
              sub_140290350(v313 + 680);
            }
          }
          else if ( v156 == 3 )
          {
            sub_140290050(*(_QWORD *)(v313 + 536), *(_QWORD *)(v313 + 544));
          }
          if ( v153 == 1 )
          {
            v305.m256i_i8[0] = v154;
            *(__int32 *)((char *)v305.m256i_i32 + 1) = LODWORD(v291);
            v305.m256i_i32[1] = *(_DWORD *)((char *)&v291 + 3);
            *(_QWORD *)&v310 = v155;
            v304 = v155 >> 64;
            v305.m256i_i64[1] = v155;
            v305.m256i_i64[2] = *((_QWORD *)&v155 + 1);
            v305.m256i_i64[3] = v71;
            v301 = 0;
            v302 = 1;
            v303 = 0;
            v300 = 1610612768;
            *(_QWORD *)&v299 = &v301;
            *((_QWORD *)&v299 + 1) = &off_141A19198;
            if ( (unsigned __int8)sub_14076EC00(&v305, &v299) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_0,
                55,
                (unsigned int)&v309,
                (unsigned int)&unk_141A10708,
                (__int64)&off_141A19250);
            *((_QWORD *)&v36 + 1) = v301;
            *(_QWORD *)&v36 = v302;
            v71 = v303;
            if ( v305.m256i_i16[0] && (_QWORD)v310 )
              sub_140001660(v304, v310, 1);
          }
          else if ( v154 == -1 )
          {
            *(_QWORD *)&v36 = v155 >> 64;
            *((_QWORD *)&v36 + 1) = v155;
          }
          else
          {
            HIDWORD(v294) = *(_DWORD *)((char *)&v291 + 3);
            *(_DWORD *)((char *)&v294 + 1) = LODWORD(v291);
            LOBYTE(v294) = v154;
            v295 = v155;
            v296 = v71;
            v208 = sub_1416724D0(aBalance, 7, &v294);
            sub_140744810(&v305, v208);
            if ( v305.m256i_i64[0] != -1 )
            {
              v304 = v305.m256i_i64[1];
              *(_QWORD *)&v310 = v305.m256i_i64[0];
              sub_140744530((unsigned int)&v305, v305.m256i_i32[2], v305.m256i_i32[4], (unsigned int)&unk_141A0FE68, 3);
              v36 = *(_OWORD *)v305.m256i_i8;
              v211 = v305.m256i_i64[2];
              if ( (_QWORD)v310 )
                sub_140001660(v304, v310, 1);
              sub_140032FF0(&v294);
              *v308 = 1;
              v62 = 4;
              if ( (_QWORD)v36 == -2 )
              {
LABEL_260:
                v25 = v313;
                *((_QWORD *)&v36 + 1) = v312;
                goto LABEL_261;
              }
              *(_QWORD *)&v310 = v211;
              *((_QWORD *)&v310 + 1) = *((_QWORD *)&v36 + 1);
              v71 = (__int64)&unk_141A0FE6B;
LABEL_362:
              *((_QWORD *)&v36 + 1) = v312;
              v80 = 20;
              v79 = &unk_141A0FE7B;
              goto LABEL_363;
            }
            nullsub_1(v210, v209);
            *((_QWORD *)&v36 + 1) = 40;
            v212 = (void *)sub_140001650(40, 1);
            if ( !v212 )
              sub_14196B2DB(1, 40);
            *(_QWORD *)&v36 = v212;
            qmemcpy(v212, "StepFun account response missing balance", 40);
            sub_140032FF0(&v294);
            v71 = 40;
          }
          v310 = v36;
          *v308 = 1;
          *(_QWORD *)&v36 = -1;
          goto LABEL_362;
        case 5LL:
          v312 = (_BYTE *)(a2 + 440);
LABEL_41:
          v308 = (_BYTE *)(a2 + 448);
          sub_1403B4560(&v305, a2 + 448, v4);
          *(_QWORD *)&v36 = v305.m256i_i64[0];
          if ( v305.m256i_i64[0] != -2 )
            goto LABEL_69;
          v62 = 5;
          goto LABEL_260;
        case 6LL:
          v312 = (_BYTE *)(a2 + 440);
LABEL_59:
          v308 = (_BYTE *)(a2 + 448);
          sub_1403B4560(&v305, a2 + 448, v4);
          *(_QWORD *)&v36 = v305.m256i_i64[0];
          if ( v305.m256i_i64[0] == -2 )
          {
            v62 = 6;
            goto LABEL_260;
          }
LABEL_69:
          *((_QWORD *)&v310 + 1) = v305.m256i_i64[1];
          v71 = v305.m256i_i64[3];
          *(_QWORD *)&v310 = v305.m256i_i64[2];
          v79 = *((void **)&v306 + 1);
          v78 = v306;
          v80 = v307;
          *((_QWORD *)&v36 + 1) = v312;
          v298 = v312;
          v82 = v311;
          v297 = v311;
          sub_14028BF10(v308);
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
              v304 = v73;
              v308 = v72;
              *(_QWORD *)(a2 + 480) = v15;
              *(_QWORD *)(a2 + 488) = aHttpsOpenroute;
              *(_QWORD *)(a2 + 496) = 36;
              *(_QWORD *)(a2 + 504) = v38;
              *(_QWORD *)(a2 + 512) = v39;
              *(_QWORD *)(a2 + 520) = v40;
              *(_BYTE *)(a2 + 528) = 0;
              break;
            case 1:
              v279 = a2 + 440;
              v278 = v311;
              v277 = a2 + 448;
              sub_14196B990(&off_141A10088);
            case 2:
              v279 = a2 + 440;
              v278 = v311;
              v277 = a2 + 448;
              sub_14196B9B0(&off_141A10088);
            case 3:
              v304 = a2 + 448;
              v308 = (_BYTE *)(a2 + 1248);
              break;
          }
          v312 = *((_BYTE **)&v36 + 1);
          *((_QWORD *)&v310 + 1) = a2 + 480;
          sub_1403B6030(&v305, a2 + 480, v4, v73);
          v149 = v305.m256i_i32[0];
          if ( v305.m256i_i64[0] == 2 )
          {
            *v308 = 3;
            v62 = 7;
            goto LABEL_260;
          }
          v150 = v305.m256i_i8[8];
          v293[0] = *(__int32 *)((char *)&v305.m256i_i32[2] + 1);
          *(_DWORD *)((char *)v293 + 3) = v305.m256i_i32[3];
          v151 = *(_OWORD *)&v305.m256i_u64[2];
          v71 = v306;
          v152 = *(unsigned __int8 *)(v313 + 528);
          if ( v152 == 4 )
          {
            if ( *(_BYTE *)(v313 + 1240) == 3 )
            {
              sub_140285110(v313 + 816);
            }
            else if ( !*(_BYTE *)(v313 + 1240) )
            {
              sub_140290350(v313 + 680);
            }
          }
          else if ( v152 == 3 )
          {
            sub_140290050(*(_QWORD *)(v313 + 536), *(_QWORD *)(v313 + 544));
          }
          if ( v149 == 1 )
          {
            v305.m256i_i8[0] = v150;
            *(__int32 *)((char *)v305.m256i_i32 + 1) = v293[0];
            v305.m256i_i32[1] = *(_DWORD *)((char *)v293 + 3);
            *((_QWORD *)&v310 + 1) = v151;
            *(_OWORD *)&v305.m256i_u64[1] = v151;
            v305.m256i_i64[3] = v71;
            v301 = 0;
            v302 = 1;
            v303 = 0;
            v300 = 1610612768;
            *(_QWORD *)&v299 = &v301;
            *((_QWORD *)&v299 + 1) = &off_141A19198;
            if ( (unsigned __int8)sub_14076EC00(&v305, &v299) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_0,
                55,
                (unsigned int)&v309,
                (unsigned int)&unk_141A10708,
                (__int64)&off_141A19250);
            v213 = v301;
            v214 = v302;
            v71 = v303;
            if ( v305.m256i_i16[0] && *((_QWORD *)&v310 + 1) )
              sub_140001660(*((_QWORD *)&v151 + 1), *((_QWORD *)&v310 + 1), 1);
            *(_QWORD *)&v310 = v214;
            *((_QWORD *)&v310 + 1) = v213;
            goto LABEL_385;
          }
          if ( v150 == -1 )
          {
            *(_QWORD *)&v310 = v151 >> 64;
            *((_QWORD *)&v310 + 1) = v151;
LABEL_385:
            *v308 = 1;
            *(_QWORD *)&v36 = -1;
            *((_QWORD *)&v36 + 1) = v312;
            v82 = v311;
LABEL_386:
            v80 = 25;
            v79 = &unk_141A100CB;
            v78 = 19;
            goto LABEL_412;
          }
          HIDWORD(v294) = *(_DWORD *)((char *)v293 + 3);
          *(_DWORD *)((char *)&v294 + 1) = v293[0];
          LOBYTE(v294) = v150;
          v295 = v151;
          v296 = v71;
          v215 = &v294;
          v216 = sub_1416724D0(aData_4, 4, &v294);
          if ( v216 )
            v215 = (__int64 *)v216;
          v217 = sub_1416724D0(aTotalCredits, 13, v215);
          if ( (sub_1407443D0(v217) & 1) == 0 )
          {
            nullsub_1(v219, v218);
            v224 = (void *)sub_140001650(49, 1);
            if ( !v224 )
              sub_14196B2DB(1, 49);
            *((_QWORD *)&v310 + 1) = 49;
            qmemcpy(v224, "OpenRouter credits response missing total_credits", 49);
            *(_QWORD *)&v310 = v224;
            sub_140032FF0(&v294);
            v71 = 49;
            goto LABEL_385;
          }
          v220 = v3;
          v221 = sub_1416724D0(aTotalUsage, 11, v215);
          if ( (sub_1407443D0(v221) & 1) == 0 )
            v3 = 0.0;
          v291 = v220 - v3;
          *(_QWORD *)&v299 = 0;
          *((_QWORD *)&v299 + 1) = 1;
          v300 = 0;
          v305.m256i_i64[2] = 1610612768;
          v305.m256i_i64[0] = (__int64)&v299;
          v305.m256i_i64[1] = (__int64)&off_141A19198;
          if ( (unsigned __int8)sub_1416EA8C0(&v291, &v305) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_0,
              55,
              (unsigned int)&v309,
              (unsigned int)&unk_141A10708,
              (__int64)&off_141A19250);
          *(_QWORD *)&v310 = *((_QWORD *)&v299 + 1);
          *((_QWORD *)&v310 + 1) = v299;
          sub_140744530((unsigned int)&v301, DWORD2(v299), v300, (unsigned int)&unk_141A0FE00, 3);
          *(_QWORD *)&v36 = v301;
          v222 = v302;
          v223 = v303;
          sub_140032FF0(&v294);
          if ( *((_QWORD *)&v310 + 1) )
            sub_140001660(v310, *((_QWORD *)&v310 + 1), 1);
          *v308 = 1;
          v62 = 7;
          *((_QWORD *)&v36 + 1) = v312;
          v82 = v311;
          if ( (_QWORD)v36 != -2 )
          {
            *(_QWORD *)&v310 = v223;
            *((_QWORD *)&v310 + 1) = v222;
            v71 = (__int64)&unk_141A100B8;
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
              v304 = v66;
              v308 = v65;
              *(_QWORD *)(a2 + 480) = v15;
              *(_QWORD *)(a2 + 488) = aHttpsApiNovita;
              *(_QWORD *)(a2 + 496) = 55;
              *(_QWORD *)(a2 + 504) = v38;
              *(_QWORD *)(a2 + 512) = v39;
              *(_QWORD *)(a2 + 520) = v40;
              *(_BYTE *)(a2 + 528) = 0;
              break;
            case 1:
              v276 = a2 + 440;
              v275 = v311;
              v274 = a2 + 448;
              sub_14196B990(&off_141A0FDD8);
            case 2:
              v276 = a2 + 440;
              v275 = v311;
              v274 = a2 + 448;
              sub_14196B9B0(&off_141A0FDD8);
            case 3:
              v304 = a2 + 448;
              v308 = (_BYTE *)(a2 + 1248);
              break;
          }
          v312 = *((_BYTE **)&v36 + 1);
          *((_QWORD *)&v310 + 1) = a2 + 480;
          sub_1403B6030(&v305, a2 + 480, v4, v66);
          v157 = v305.m256i_i32[0];
          if ( v305.m256i_i64[0] == 2 )
          {
            *v308 = 3;
            v62 = 8;
            goto LABEL_260;
          }
          v158 = v305.m256i_i8[8];
          v293[0] = *(__int32 *)((char *)&v305.m256i_i32[2] + 1);
          *(_DWORD *)((char *)v293 + 3) = v305.m256i_i32[3];
          v159 = *(_OWORD *)&v305.m256i_u64[2];
          v71 = v306;
          v160 = *(unsigned __int8 *)(v313 + 528);
          if ( v160 == 4 )
          {
            if ( *(_BYTE *)(v313 + 1240) == 3 )
            {
              sub_140285110(v313 + 816);
            }
            else if ( !*(_BYTE *)(v313 + 1240) )
            {
              sub_140290350(v313 + 680);
            }
          }
          else if ( v160 == 3 )
          {
            sub_140290050(*(_QWORD *)(v313 + 536), *(_QWORD *)(v313 + 544));
          }
          if ( v157 == 1 )
          {
            v305.m256i_i8[0] = v158;
            *(__int32 *)((char *)v305.m256i_i32 + 1) = v293[0];
            v305.m256i_i32[1] = *(_DWORD *)((char *)v293 + 3);
            *((_QWORD *)&v310 + 1) = v159;
            *(_OWORD *)&v305.m256i_u64[1] = v159;
            v305.m256i_i64[3] = v71;
            v301 = 0;
            v302 = 1;
            v303 = 0;
            v300 = 1610612768;
            *(_QWORD *)&v299 = &v301;
            *((_QWORD *)&v299 + 1) = &off_141A19198;
            if ( (unsigned __int8)sub_14076EC00(&v305, &v299) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_0,
                55,
                (unsigned int)&v309,
                (unsigned int)&unk_141A10708,
                (__int64)&off_141A19250);
            v165 = v301;
            v166 = v302;
            v71 = v303;
            if ( v305.m256i_i16[0] && *((_QWORD *)&v310 + 1) )
              sub_140001660(*((_QWORD *)&v159 + 1), *((_QWORD *)&v310 + 1), 1);
            *(_QWORD *)&v310 = v166;
            *((_QWORD *)&v310 + 1) = v165;
          }
          else if ( v158 == -1 )
          {
            *(_QWORD *)&v310 = v159 >> 64;
            *((_QWORD *)&v310 + 1) = v159;
          }
          else
          {
            HIDWORD(v294) = *(_DWORD *)((char *)v293 + 3);
            *(_DWORD *)((char *)&v294 + 1) = v293[0];
            LOBYTE(v294) = v158;
            v295 = v159;
            v296 = v71;
            v167 = sub_1416724D0(aAvailablebalan, 16, &v294);
            if ( (sub_1407443D0(v167) & 1) != 0 )
            {
              v291 = v3 / 10000.0;
              *(_QWORD *)&v299 = 0;
              *((_QWORD *)&v299 + 1) = 1;
              v300 = 0;
              v305.m256i_i64[2] = 1610612768;
              v305.m256i_i64[0] = (__int64)&v299;
              v305.m256i_i64[1] = (__int64)&off_141A19198;
              if ( (unsigned __int8)sub_1416EA8C0(&v291, &v305) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_0,
                  55,
                  (unsigned int)&v309,
                  (unsigned int)&unk_141A10708,
                  (__int64)&off_141A19250);
              *(_QWORD *)&v310 = *((_QWORD *)&v299 + 1);
              *((_QWORD *)&v310 + 1) = v299;
              sub_140744530((unsigned int)&v301, DWORD2(v299), v300, (unsigned int)&unk_141A0FE00, 3);
              *(_QWORD *)&v36 = v301;
              v170 = v302;
              v171 = v303;
              sub_140032FF0(&v294);
              if ( *((_QWORD *)&v310 + 1) )
                sub_140001660(v310, *((_QWORD *)&v310 + 1), 1);
              *v308 = 1;
              v62 = 8;
              *((_QWORD *)&v36 + 1) = v312;
              v82 = v311;
              if ( (_QWORD)v36 == -2 )
              {
LABEL_381:
                v25 = v313;
                goto LABEL_261;
              }
              *(_QWORD *)&v310 = v171;
              *((_QWORD *)&v310 + 1) = v170;
              v71 = (__int64)&unk_141A0FE03;
LABEL_295:
              v80 = 22;
              v79 = &unk_141A0FE12;
              v78 = 15;
              goto LABEL_412;
            }
            nullsub_1(v169, v168);
            v172 = (void *)sub_140001650(48, 1);
            if ( !v172 )
              sub_14196B2DB(1, 48);
            *((_QWORD *)&v310 + 1) = 48;
            *(_QWORD *)&v310 = v172;
            qmemcpy(v172, "Novita balance response missing availableBalance", 48);
            sub_140032FF0(&v294);
            v71 = 48;
          }
          *v308 = 1;
          *(_QWORD *)&v36 = -1;
          *((_QWORD *)&v36 + 1) = v312;
          v82 = v311;
          goto LABEL_295;
        case 9LL:
          v312 = (_BYTE *)(a2 + 440);
LABEL_44:
          *((_QWORD *)&v310 + 1) = a2 + 448;
          sub_1403B4DC0(&v305, a2 + 448, v4);
          *(_QWORD *)&v36 = v305.m256i_i64[0];
          if ( v305.m256i_i64[0] == -2 )
          {
            v62 = 9;
            goto LABEL_260;
          }
          *((_QWORD *)&v310 + 1) = v305.m256i_i64[1];
          v71 = v305.m256i_i64[3];
          *(_QWORD *)&v310 = v305.m256i_i64[2];
          v79 = *((void **)&v306 + 1);
          v78 = v306;
          v80 = v307;
          *((_QWORD *)&v36 + 1) = v312;
          if ( *(_BYTE *)(v313 + 1249) != 3 )
            goto LABEL_74;
          v85 = *(unsigned __int8 *)(v313 + 496);
          v82 = v311;
          if ( v85 != 4 )
          {
            if ( v85 != 3 )
              goto LABEL_412;
            goto LABEL_68;
          }
          if ( *(_BYTE *)(v313 + 1208) == 3 )
            goto LABEL_427;
          if ( !*(_BYTE *)(v313 + 1208) )
            goto LABEL_273;
          goto LABEL_412;
        case 10LL:
          v312 = (_BYTE *)(a2 + 440);
LABEL_34:
          *((_QWORD *)&v310 + 1) = a2 + 448;
          sub_1403B4DC0(&v305, a2 + 448, v4);
          *(_QWORD *)&v36 = v305.m256i_i64[0];
          if ( v305.m256i_i64[0] == -2 )
          {
            v62 = 10;
            goto LABEL_260;
          }
          *((_QWORD *)&v310 + 1) = v305.m256i_i64[1];
          v71 = v305.m256i_i64[3];
          *(_QWORD *)&v310 = v305.m256i_i64[2];
          v79 = *((void **)&v306 + 1);
          v78 = v306;
          v80 = v307;
          *((_QWORD *)&v36 + 1) = v312;
          if ( *(_BYTE *)(v313 + 1249) == 3 )
          {
            v81 = *(unsigned __int8 *)(v313 + 496);
            v82 = v311;
            if ( v81 == 4 )
            {
              if ( *(_BYTE *)(v313 + 1208) == 3 )
              {
LABEL_427:
                v298 = v312;
                v297 = v311;
                sub_140285110(v313 + 784);
              }
              else if ( !*(_BYTE *)(v313 + 1208) )
              {
LABEL_273:
                v298 = v312;
                v297 = v311;
                sub_140290350(v313 + 648);
              }
            }
            else if ( v81 == 3 )
            {
LABEL_68:
              v83 = *(_QWORD *)(v313 + 504);
              v84 = *(_QWORD *)(v313 + 512);
              v298 = v312;
              v297 = v311;
              sub_140290050(v83, v84);
            }
          }
          else
          {
LABEL_74:
            v82 = v311;
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
              *((_QWORD *)&v310 + 1) = v64;
              v308 = v63;
              v312 = *((_BYTE **)&v36 + 1);
              *(_QWORD *)(a2 + 480) = v15;
              *(_QWORD *)(a2 + 488) = aHttpsApiKimiCo;
              *(_QWORD *)(a2 + 496) = 37;
              *(_QWORD *)(a2 + 504) = v38;
              *(_QWORD *)(a2 + 512) = v39;
              *(_QWORD *)(a2 + 520) = v40;
              *(_BYTE *)(a2 + 528) = 0;
              break;
            case 1:
              v273 = a2 + 440;
              v272 = v311;
              v271 = a2 + 448;
              sub_14196B990(&off_141A10240);
            case 2:
              v273 = a2 + 440;
              v272 = v311;
              v271 = a2 + 448;
              sub_14196B9B0(&off_141A10240);
            case 3:
              *((_QWORD *)&v310 + 1) = a2 + 448;
              v308 = (_BYTE *)(a2 + 1248);
              v312 = (_BYTE *)(a2 + 440);
              break;
          }
          *(_QWORD *)&v310 = a2 + 480;
          sub_1403B6030(&v305, a2 + 480, v4, v64);
          v161 = v305.m256i_i32[0];
          if ( v305.m256i_i64[0] == 2 )
          {
            *v308 = 3;
            v62 = 11;
            goto LABEL_260;
          }
          v162 = v305.m256i_i8[8];
          v293[0] = *(__int32 *)((char *)&v305.m256i_i32[2] + 1);
          *(_DWORD *)((char *)v293 + 3) = v305.m256i_i32[3];
          v163 = *(_OWORD *)&v305.m256i_u64[2];
          v71 = v306;
          v164 = *(unsigned __int8 *)(v313 + 528);
          if ( v164 == 4 )
          {
            if ( *(_BYTE *)(v313 + 1240) == 3 )
            {
              sub_140285110(v313 + 816);
            }
            else if ( !*(_BYTE *)(v313 + 1240) )
            {
              sub_140290350(v313 + 680);
            }
          }
          else if ( v164 == 3 )
          {
            sub_140290050(*(_QWORD *)(v313 + 536), *(_QWORD *)(v313 + 544));
          }
          if ( v161 == 1 )
          {
            v305.m256i_i8[0] = v162;
            *(__int32 *)((char *)v305.m256i_i32 + 1) = v293[0];
            v305.m256i_i32[1] = *(_DWORD *)((char *)v293 + 3);
            *(_QWORD *)&v310 = v163;
            v304 = v163 >> 64;
            v305.m256i_i64[1] = v163;
            v305.m256i_i64[2] = *((_QWORD *)&v163 + 1);
            v305.m256i_i64[3] = v71;
            v301 = 0;
            v302 = 1;
            v303 = 0;
            v300 = 1610612768;
            *(_QWORD *)&v299 = &v301;
            *((_QWORD *)&v299 + 1) = &off_141A19198;
            if ( (unsigned __int8)sub_14076EC00(&v305, &v299) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_0,
                55,
                (unsigned int)&v309,
                (unsigned int)&unk_141A10708,
                (__int64)&off_141A19250);
            *((_QWORD *)&v36 + 1) = v301;
            *(_QWORD *)&v36 = v302;
            v71 = v303;
            if ( v305.m256i_i16[0] && (_QWORD)v310 )
              sub_140001660(v304, v310, 1);
            goto LABEL_344;
          }
          if ( v162 == -1 )
          {
            *(_QWORD *)&v36 = v163 >> 64;
            *((_QWORD *)&v36 + 1) = v163;
          }
          else
          {
            HIDWORD(v294) = *(_DWORD *)((char *)v293 + 3);
            *(_DWORD *)((char *)&v294 + 1) = v293[0];
            LOBYTE(v294) = v162;
            v295 = v163;
            v296 = v71;
            v301 = 0;
            v302 = 8;
            v303 = 0;
            v173 = sub_1416724D0(aLimits, 6, &v294);
            if ( v173 && *(_BYTE *)v173 == 4 )
            {
              v174 = *(_QWORD *)(v173 + 16);
              v175 = v174 + 32LL * *(_QWORD *)(v173 + 24);
              v176 = 0;
              v177 = &unk_141A1025E;
              while ( 1 )
              {
                do
                {
                  if ( (v176 & 1) != 0 || v174 == v175 )
                    goto LABEL_326;
                  v180 = sub_1416724D0(v177, 6, v174);
                  v181 = v180;
                  v174 += 32;
                  v176 = 1;
                }
                while ( !v180 );
                v182 = (unsigned __int8 *)sub_1416724D0(aLimit_0, 5, v180);
                if ( !v182 )
                  goto LABEL_314;
                v183 = *v182;
                if ( v183 == 3 )
                {
                  v184 = sub_1408FEA60(*((_QWORD *)v182 + 2), *((_QWORD *)v182 + 3));
                  sub_1416E99E0(&v305, v184, v185);
                  v186 = v305.m256i_i8[0] ^ 1;
                  goto LABEL_316;
                }
                if ( v183 == 2 )
                  v186 = 1;
                else
LABEL_314:
                  v186 = 0;
LABEL_316:
                v187 = (unsigned __int8 *)sub_1416724D0(aRemaining, 9, v181);
                if ( v187 )
                {
                  v188 = *v187;
                  if ( v188 == 3 )
                  {
                    v189 = sub_1408FEA60(*((_QWORD *)v187 + 2), *((_QWORD *)v187 + 3));
                    sub_1416E99E0(&v305, v189, v190);
                    v191 = v305.m256i_i8[0] ^ 1;
                    goto LABEL_321;
                  }
                  if ( v188 == 2 )
                  {
                    v191 = 1;
LABEL_321:
                    if ( ((unsigned __int8)v191 & (unsigned __int8)v186) == 1 )
                    {
                      sub_140744480(&v305);
                      v291 = COERCE_DOUBLE(&v305);
                      v292 = sub_1400015F0;
                      sub_1416DAFA0(&v299, &unk_141A10269, &v291);
                      v192 = v177;
                      if ( v305.m256i_i64[0] )
                        sub_140001660(v305.m256i_i64[1], v305.m256i_i64[0], 1);
                      v304 = *((_QWORD *)&v299 + 1);
                      *(_QWORD *)&v310 = v299;
                      v193 = v300;
                      v194 = v303;
                      if ( v303 == v301 )
                        sub_141939F90(&v301);
                      v178 = v302;
                      v179 = 3 * v194;
                      *(_QWORD *)(v302 + 8 * v179) = v310;
                      *(_QWORD *)(v178 + 8 * v179 + 8) = v304;
                      *(_QWORD *)(v178 + 8 * v179 + 16) = v193;
                      v303 = v194 + 1;
                      v177 = v192;
                    }
                  }
                }
              }
            }
LABEL_326:
            v195 = sub_1416724D0("usage", 5, &v294);
            v198 = v195;
            if ( v195
              && (v199 = sub_1416724D0(aLimit_0, 5, v195),
                  v200 = sub_1407443D0(v199),
                  v201 = sub_1416724D0(aRemaining, 9, v198),
                  ((unsigned __int8)sub_1407443D0(v201) & v200 & 1) != 0) )
            {
              sub_140744480(&v305);
              v291 = COERCE_DOUBLE(&v305);
              v292 = sub_1400015F0;
              sub_1416DAFA0(&v299, &unk_141A1026F, &v291);
              if ( v305.m256i_i64[0] )
                sub_140001660(v305.m256i_i64[1], v305.m256i_i64[0], 1);
              v304 = *((_QWORD *)&v299 + 1);
              *(_QWORD *)&v310 = v299;
              v202 = v300;
              v203 = v303;
              if ( v303 == v301 )
                sub_141939F90(&v301);
              v204 = v302;
              v197 = 3 * v203;
              *(_QWORD *)(v302 + 8 * v197) = v310;
              v196 = v304;
              *(_QWORD *)(v204 + 8 * v197 + 8) = v304;
              *(_QWORD *)(v204 + 8 * v197 + 16) = v202;
              v205 = v203 + 1;
              v303 = v205;
            }
            else
            {
              v205 = v303;
            }
            if ( v205 )
            {
              sub_1406C5480((unsigned int)&v305, v302, v205, (unsigned int)&unk_141A10276, 3);
              v36 = *(_OWORD *)v305.m256i_i8;
              v206 = v305.m256i_i64[2];
              sub_1402346F0(&v301);
              if ( v301 )
                sub_140001660(v302, 24 * v301, 8);
              sub_140032FF0(&v294);
              *v308 = 1;
              v62 = 11;
              if ( (_QWORD)v36 == -2 )
                goto LABEL_260;
              *(_QWORD *)&v310 = v206;
              *((_QWORD *)&v310 + 1) = *((_QWORD *)&v36 + 1);
              v71 = (__int64)&unk_141A10279;
LABEL_345:
              *((_QWORD *)&v36 + 1) = v312;
              v80 = 23;
              v79 = &unk_141A10289;
LABEL_363:
              v78 = 16;
              v82 = v311;
LABEL_412:
              **((_BYTE **)&v36 + 1) = 1;
              sub_14028C150(v82);
              if ( (_QWORD)v36 == -1 )
              {
                sub_140746570(
                  (unsigned int)v249,
                  *(_QWORD *)(v313 + 112),
                  *(_QWORD *)(v313 + 312),
                  *(_QWORD *)(v313 + 320),
                  *(_QWORD *)(v313 + 328),
                  *(_QWORD *)(v313 + 336),
                  v310,
                  v71);
                if ( *((_QWORD *)&v310 + 1) )
                  sub_140001660(v310, *((_QWORD *)&v310 + 1), 1);
              }
              else
              {
                v305.m256i_i64[0] = v36;
                v305.m256i_i64[1] = *((_QWORD *)&v310 + 1);
                v305.m256i_i64[2] = v310;
                v305.m256i_i64[3] = v71;
                *(_QWORD *)&v306 = v78;
                *((_QWORD *)&v306 + 1) = v79;
                v307 = v80;
                sub_14070BA80(v249, &v305, *(_QWORD *)(v313 + 112));
              }
              goto LABEL_416;
            }
            nullsub_1(v197, v196);
            v207 = (void *)sub_140001650(46, 1);
            if ( !v207 )
              sub_14196B2DB(1, 46);
            *(_QWORD *)&v36 = v207;
            qmemcpy(v207, "Kimi coding usage response missing quota tiers", 46);
            sub_1402346F0(&v301);
            if ( v301 )
              sub_140001660(v302, 24 * v301, 8);
            *((_QWORD *)&v36 + 1) = 46;
            sub_140032FF0(&v294);
            v71 = 46;
          }
LABEL_344:
          v310 = v36;
          *v308 = 1;
          *(_QWORD *)&v36 = -1;
          goto LABEL_345;
        case 12LL:
          v312 = (_BYTE *)(a2 + 440);
LABEL_56:
          v308 = (_BYTE *)(a2 + 448);
          sub_1403B5470(&v305, a2 + 448, v4);
          *(_QWORD *)&v36 = v305.m256i_i64[0];
          if ( v305.m256i_i64[0] != -2 )
            goto LABEL_75;
          v62 = 12;
          goto LABEL_260;
        case 13LL:
          v312 = (_BYTE *)(a2 + 440);
LABEL_53:
          v308 = (_BYTE *)(a2 + 448);
          sub_1403B5470(&v305, a2 + 448, v4);
          *(_QWORD *)&v36 = v305.m256i_i64[0];
          if ( v305.m256i_i64[0] == -2 )
          {
            v62 = 13;
            goto LABEL_260;
          }
LABEL_75:
          *((_QWORD *)&v310 + 1) = v305.m256i_i64[1];
          v71 = v305.m256i_i64[3];
          *(_QWORD *)&v310 = v305.m256i_i64[2];
          v79 = *((void **)&v306 + 1);
          v78 = v306;
          v80 = v307;
          *((_QWORD *)&v36 + 1) = v312;
          v298 = v312;
          v82 = v311;
          v297 = v311;
          sub_14028C280(v308);
          goto LABEL_412;
      }
    case 4LL:
      v13 = (_BYTE *)(a2 + 1152);
      v14 = a2 + 312;
      switch ( *(_BYTE *)(a2 + 1152) )
      {
        case 0:
          v311 = a3;
          v15 = *(_BYTE **)(a2 + 312);
          v16 = (_QWORD *)a2;
          v17 = *(_QWORD *)(a2 + 320);
          v18 = v16[41];
          v19 = v16[42];
          v20 = v16[43];
          v21 = v16[44];
          goto LABEL_9;
        case 1:
          JUMPOUT(0x1403B1AD7LL);
        case 2:
          JUMPOUT(0x1403B1AA5LL);
        case 3:
          v312 = (_BYTE *)(a2 + 1152);
          *((_QWORD *)&v310 + 1) = a2 + 312;
          goto LABEL_19;
      }
    case 5LL:
      v27 = (_BYTE *)(a2 + 1176);
      v28 = a2 + 336;
      switch ( *(_BYTE *)(a2 + 1176) )
      {
        case 0:
          v311 = a3;
          v29 = *(_QWORD *)(a2 + 336);
          v30 = (_QWORD *)a2;
          v31 = *(_QWORD *)(a2 + 344);
          v32 = v30[44];
          v33 = v30[45];
          v34 = v30[46];
          v35 = v30[47];
          goto LABEL_128;
        case 1:
          v265 = a2 + 336;
          sub_14196B990(&off_141A0FE98);
        case 2:
          v265 = a2 + 336;
          sub_14196B9B0(&off_141A0FE98);
        case 3:
          v312 = (_BYTE *)(a2 + 1176);
          *((_QWORD *)&v310 + 1) = a2 + 336;
          goto LABEL_131;
      }
  }
}
