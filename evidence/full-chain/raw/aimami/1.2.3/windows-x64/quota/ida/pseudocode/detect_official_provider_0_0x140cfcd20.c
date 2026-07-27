// module: codexmate_lib/core/relay/quota
// addr: 0x140cfcd20
// name: detect_official_provider_0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::quota::detect_official_provider | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall detect_official_provider_0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128d v4; // xmm0
  double v5; // xmm6_8
  __int64 v6; // r10
  _QWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  _OWORD *v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  char v16; // of
  __int64 v17; // rax
  __int64 v18; // rt0
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // kr00_8
  __int64 v25; // r15
  __int64 v26; // r14
  __int64 v27; // r13
  __int128 v28; // xmm1
  _BYTE *v29; // rdi
  __int64 v30; // r12
  _BYTE *v31; // r9
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int128 v40; // xmm0
  __int64 v41; // r13
  _QWORD *v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // r14
  __int64 v49; // r15
  __int128 v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  _BYTE *v54; // r11
  __int64 v55; // rdi
  __int32 v56; // esi
  __int64 v57; // r13
  char result; // al
  __int16 v59; // r13
  __int16 v60; // r15
  __int32 v61; // edi
  __int64 *v62; // rbx
  __int64 v63; // r14
  __int64 v64; // r12
  int v65; // eax
  __int32 v66; // esi
  __int16 v67; // r15
  __int16 v68; // r14
  __int32 v69; // r12d
  __int64 v70; // rdi
  __int64 v71; // r13
  __int64 v72; // rbx
  int v73; // eax
  __int64 v74; // rdx
  _BYTE *v75; // rdx
  __int64 v76; // r9
  _BYTE *v77; // rdx
  __int64 v78; // r9
  _BYTE *v79; // rdx
  __int64 v80; // r9
  __int64 v81; // rsi
  __int128 v82; // xmm0
  _BYTE *v83; // rdx
  __int64 v84; // r9
  __int64 v85; // r15
  __int64 v86; // rax
  __int64 v87; // rax
  bool v88; // si
  unsigned __int8 *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r14
  __int64 v92; // r14
  char **v93; // rsi
  unsigned __int8 *v94; // rax
  char **v95; // r12
  char **v96; // rsi
  __int64 v97; // rcx
  __int32 v98; // edi
  unsigned __int8 *v99; // rbx
  unsigned __int8 *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rsi
  unsigned __int8 *v103; // rax
  unsigned __int8 *v104; // rax
  __int64 v105; // rsi
  int v106; // r9d
  __int64 v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rdx
  void *v110; // rax
  unsigned __int8 *v111; // rax
  __int64 v112; // r14
  __int64 v113; // rdx
  __int64 *v114; // rax
  __int64 v115; // rdx
  __int128 *v116; // rbx
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  __int64 v119; // rax
  __int64 v120; // rdx
  __int128 v121; // xmm0
  __int128 v122; // xmm1
  __int32 v123; // edi
  char v124; // al
  __int8 v125; // bl
  unsigned __int128 v126; // krD0_16
  __int64 v127; // r14
  int v128; // eax
  __int32 v129; // r15d
  __int8 v130; // bl
  unsigned __int128 v131; // krE0_16
  int v132; // eax
  __int64 v133; // rdi
  __int64 v134; // rbx
  void *v135; // r15
  __int64 v136; // r12
  _BYTE *v137; // rsi
  __int64 v138; // r13
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int32 v142; // edi
  __int8 v143; // bl
  unsigned __int128 v144; // kr150_16
  int v145; // eax
  __int32 v146; // r15d
  __int8 v147; // bl
  unsigned __int128 v148; // kr160_16
  int v149; // eax
  int v150; // eax
  __int32 v151; // r15d
  __int8 v152; // di
  unsigned __int128 v153; // kr190_16
  int v154; // eax
  __int64 v155; // rdx
  __int64 v156; // rsi
  __int64 v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rsi
  unsigned __int8 *v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rsi
  _OWORD *v163; // rax
  __int64 v164; // rsi
  __int64 v165; // rax
  __int64 v166; // rdi
  __int64 v167; // r15
  char v168; // r12
  void *v169; // rsi
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rax
  __int64 v173; // r13
  double *v174; // rax
  int v175; // ecx
  __int64 v176; // rcx
  char v177; // r14
  __int64 v178; // rax
  __int64 v179; // rdx
  double *v180; // rax
  int v181; // ecx
  __int64 v182; // rcx
  double v183; // xmm1_8
  __int64 v184; // rax
  __int64 v185; // rdx
  char v186; // al
  void *v187; // r13
  __int64 v188; // r14
  __int64 v189; // rsi
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // rdi
  unsigned __int8 *v193; // rax
  unsigned __int8 v194; // bl
  unsigned __int8 *v195; // rax
  __int64 v196; // rsi
  __int64 v197; // rdi
  __int64 v198; // rax
  __int64 v199; // rdi
  __int64 v200; // rsi
  void *v201; // rax
  __int64 v202; // rsi
  unsigned __int8 *v203; // rax
  __int64 v204; // rcx
  __int64 v205; // rsi
  void *v206; // rax
  __int64 v207; // rsi
  __int64 *v208; // rdi
  __int64 v209; // rax
  unsigned __int8 *v210; // rax
  __int64 v211; // rcx
  double v212; // xmm6_8
  unsigned __int8 *v213; // rax
  __int64 v214; // rsi
  _OWORD *v215; // rax
  _OWORD *v216; // rsi
  __int64 v217; // rax
  __int64 v218; // rcx
  __int64 v219; // rbx
  unsigned __int8 *v220; // rax
  __int64 v221; // rcx
  __int64 v222; // rdi
  __int64 v223; // rax
  void *v224; // rcx
  __int64 v225; // rax
  __int128 v226; // xmm0
  __int64 v227; // rdx
  __int64 v228; // rsi
  __int64 v229; // rdx
  signed __int64 v230; // rt0
  __int64 v231; // rdx
  _OWORD *v232; // rax
  __int64 v233; // rax
  bool v234; // zf
  void *v235; // r9
  __int64 v236; // rcx
  __int64 v237; // rsi
  __int64 v238; // rdx
  __int64 v239; // [rsp+38h] [rbp-48h]
  _BYTE v240[136]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v241; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v242; // [rsp+E0h] [rbp+60h]
  __int128 v243; // [rsp+F0h] [rbp+70h]
  __int128 v244; // [rsp+100h] [rbp+80h]
  __int128 v245; // [rsp+110h] [rbp+90h]
  __int128 v246; // [rsp+120h] [rbp+A0h]
  __m128d v247; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v248; // [rsp+140h] [rbp+C0h]
  __int64 v249; // [rsp+150h] [rbp+D0h]
  __int64 v250; // [rsp+158h] [rbp+D8h]
  __int64 v251; // [rsp+160h] [rbp+E0h]
  _BYTE *v252; // [rsp+168h] [rbp+E8h]
  __int64 v253; // [rsp+178h] [rbp+F8h]
  _BYTE *v254; // [rsp+180h] [rbp+100h]
  __int64 v255; // [rsp+188h] [rbp+108h]
  __int64 v256; // [rsp+190h] [rbp+110h]
  __int64 v257; // [rsp+198h] [rbp+118h]
  __int64 v258; // [rsp+1A0h] [rbp+120h]
  __int64 v259; // [rsp+1A8h] [rbp+128h]
  __int64 v260; // [rsp+1B0h] [rbp+130h]
  __int64 v261; // [rsp+1B8h] [rbp+138h]
  __int64 v262; // [rsp+1C0h] [rbp+140h]
  __int64 v263; // [rsp+1C8h] [rbp+148h]
  __int64 v264; // [rsp+1D0h] [rbp+150h]
  __int64 v265; // [rsp+1D8h] [rbp+158h]
  __int64 v266; // [rsp+1E0h] [rbp+160h]
  __int64 v267; // [rsp+1E8h] [rbp+168h]
  __int64 v268; // [rsp+1F0h] [rbp+170h]
  __int64 v269; // [rsp+1F8h] [rbp+178h]
  __int64 v270; // [rsp+200h] [rbp+180h]
  __int64 v271; // [rsp+208h] [rbp+188h]
  _BYTE *v272; // [rsp+210h] [rbp+190h]
  __int64 v273; // [rsp+218h] [rbp+198h]
  _BYTE *v274; // [rsp+220h] [rbp+1A0h]
  double v275; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 (__fastcall *v276)(_QWORD, _QWORD); // [rsp+230h] [rbp+1B0h]
  _DWORD v277[2]; // [rsp+238h] [rbp+1B8h]
  __int64 v278; // [rsp+240h] [rbp+1C0h] BYREF
  unsigned __int128 v279; // [rsp+248h] [rbp+1C8h]
  __int64 v280; // [rsp+258h] [rbp+1D8h]
  __int128 v281; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v282; // [rsp+270h] [rbp+1F0h]
  __int64 v283; // [rsp+278h] [rbp+1F8h]
  _BYTE *v284; // [rsp+280h] [rbp+200h]
  __int64 v285; // [rsp+288h] [rbp+208h]
  __int64 v286; // [rsp+290h] [rbp+210h] BYREF
  __int64 v287; // [rsp+298h] [rbp+218h]
  __int64 v288; // [rsp+2A0h] [rbp+220h]
  __int64 v289; // [rsp+2A8h] [rbp+228h]
  __m256i v290; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v291; // [rsp+2D0h] [rbp+250h]
  __int64 v292; // [rsp+2E0h] [rbp+260h]
  _QWORD *v293; // [rsp+2E8h] [rbp+268h]
  _BYTE *v294; // [rsp+2F0h] [rbp+270h]
  char v295; // [rsp+2FFh] [rbp+27Fh] BYREF
  __int64 v296; // [rsp+300h] [rbp+280h]
  _OWORD *v297; // [rsp+308h] [rbp+288h]
  _BYTE *v298; // [rsp+310h] [rbp+290h]
  __int64 v299; // [rsp+318h] [rbp+298h]
  __int64 v300; // [rsp+320h] [rbp+2A0h]
  __int64 v301; // [rsp+328h] [rbp+2A8h]

  v301 = -2;
  v6 = a2;
  v7 = a1;
  v8 = *(unsigned __int8 *)(a2 + 241);
  v299 = a2;
  switch ( v8 )
  {
    case 0LL:
      v9 = a3;
      *(_BYTE *)(a2 + 240) = 0;
      v10 = *(_QWORD *)(a2 + 232);
      *(_QWORD *)(a2 + 112) = v10;
      sub_1404D1840(a2 + 120, *(_QWORD *)(v10 + 80), *(_QWORD *)(v10 + 88));
      v11 = *(_QWORD *)(v299 + 112);
      if ( !*(_QWORD *)(v299 + 136) )
      {
        sub_1404D33F0(
          (__int64)v240,
          v11,
          (__int64)aUnsupported_2,
          11,
          (__int64)&unk_1417BB728,
          17,
          (__int64)&unk_1417BB728,
          17);
LABEL_416:
        v57 = v299;
        v231 = *(_QWORD *)(v299 + 120);
        if ( v231 )
          sub_140001660(*(_QWORD *)(v299 + 128), v231, 1);
        sub_141684120(v7, v240, 136);
        result = 1;
        goto LABEL_419;
      }
      sub_1404D24A0(&v241, *(_QWORD *)(v11 + 152), *(_QWORD *)(v11 + 160));
      if ( (_DWORD)v241 == -1 )
      {
        v298 = *((_BYTE **)&v241 + 1);
        v74 = *(_QWORD *)(v299 + 112);
        v300 = v242;
        sub_1404D33F0(
          (__int64)v240,
          v74,
          (__int64)aUnsupported_2,
          11,
          (__int64)aEHeaders,
          21,
          v242,
          *((__int64 *)&v242 + 1));
        if ( v298 )
          sub_140001660(v300, v298, 1);
        goto LABEL_416;
      }
      v12 = (_OWORD *)v299;
      *(_OWORD *)(v299 + 80) = v246;
      v12[4] = v245;
      v13 = v241;
      v14 = v242;
      v15 = v243;
      v12[3] = v244;
      v12[2] = v15;
      v12[1] = v14;
      *v12 = v13;
      v16 = 0;
      if ( dword_141EC2510 )
        sub_141698610(&qword_141EC2508);
      v17 = qword_141EC2508;
      v18 = _InterlockedIncrement64((volatile signed __int64 *)qword_141EC2508);
      if ( (v18 < 0) ^ v16 | (v18 == 0) )
        BUG();
      v293 = v7;
      v19 = v299;
      *(_QWORD *)(v299 + 144) = v17;
      v20 = sub_14033BC10(*(_QWORD *)(*(_QWORD *)(v19 + 112) + 56LL), *(_QWORD *)(*(_QWORD *)(v19 + 112) + 64LL));
      v21 = v299;
      *(_QWORD *)(v299 + 96) = v20;
      *(_QWORD *)(v21 + 104) = v22;
      sub_14149A6B0(v21 + 152, v20, v22);
      detect_official_provider((__int64)&v247, *(_QWORD *)(v299 + 160), *(_QWORD *)(v299 + 168));
      v6 = v299;
      v23 = v299 + 144;
      v24 = v9;
      v300 = v9;
      *(_QWORD *)(v299 + 280) = v249;
      v4 = v247;
      *(_OWORD *)(v6 + 264) = v248;
      *(__m128d *)(v6 + 248) = v4;
      v25 = *(_QWORD *)(v6 + 128);
      v26 = *(_QWORD *)(v6 + 136);
      v27 = v6 + 288;
      *(_OWORD *)(v6 + 288) = *(_OWORD *)(v6 + 96);
      *(_QWORD *)(v6 + 304) = v25;
      *(_QWORD *)(v6 + 312) = v26;
      *(_QWORD *)(v6 + 320) = v23;
      *(_QWORD *)(v6 + 328) = v6;
      v4.m128d_f64[0] = v247.m128d_f64[0];
      v28 = v248;
      *(__m128d *)(v6 + 336) = v247;
      *(_OWORD *)(v6 + 352) = v28;
      *(_QWORD *)(v6 + 368) = v249;
      v29 = (_BYTE *)(v6 + 376);
      *(_BYTE *)(v6 + 376) = 0;
      v30 = v6;
      switch ( *(_BYTE *)(v6 + 368) )
      {
        case 0:
          goto LABEL_16;
        case 1:
          goto LABEL_189;
        case 2:
          goto LABEL_174;
        case 3:
          goto LABEL_178;
        case 4:
          goto LABEL_163;
        case 5:
          goto LABEL_196;
        case 6:
          goto LABEL_203;
        case 7:
          goto LABEL_182;
        case 8:
          goto LABEL_215;
        case 9:
          goto LABEL_170;
        case 0xA:
          goto LABEL_210;
        default:
          v33 = v24;
          if ( (unsigned __int8)sub_140BA2780(*(_QWORD *)(v6 + 160), *(_QWORD *)(v6 + 168), aXiaomimimoCom_0, 14) )
          {
            sub_1404D19A0(
              (unsigned int)v240,
              *(_QWORD *)(v299 + 112),
              (unsigned int)aXiaomiMimo,
              11,
              (__int64)aXiaomiMimoApiK,
              63);
            goto LABEL_411;
          }
          v6 = v299;
          v34 = *(_QWORD *)(v299 + 96);
          v35 = *(_QWORD *)(v299 + 104);
          v36 = *(_QWORD *)(v299 + 128);
          v37 = *(_QWORD *)(v299 + 136);
          v32 = v299 + 248;
          *(_QWORD *)(v299 + 248) = v23;
          *(_QWORD *)(v6 + 256) = v34;
          *(_QWORD *)(v6 + 264) = v35;
          *(_QWORD *)(v6 + 272) = v36;
          *(_QWORD *)(v6 + 280) = v37;
          *(_QWORD *)(v6 + 288) = v6;
          v31 = (_BYTE *)(v6 + 1088);
          *(_BYTE *)(v6 + 1088) = 0;
          v38 = v6;
          break;
      }
LABEL_10:
      v298 = v31;
      v254 = v31;
      v253 = v32;
      v39 = v6;
      sub_1404D10D0(v6 + 296, v34, v35, (__int64)&unk_1417BB7A0, 16);
      v296 = v32;
      v40 = *(_OWORD *)(v39 + 304);
      *(_QWORD *)(v39 + 320) = v23;
      *(_OWORD *)(v39 + 328) = v40;
      *(_QWORD *)(v39 + 344) = v36;
      *(_QWORD *)(v39 + 352) = v37;
      *(_QWORD *)(v39 + 360) = v38;
      *(_BYTE *)(v39 + 368) = 0;
      v6 = v39;
      a3 = v33;
LABEL_18:
      v300 = v6 + 320;
      v55 = a3;
      sub_140D04E20(&v290);
      v56 = v290.m256i_i32[0];
      if ( v290.m256i_i64[0] == 2 )
      {
        *v298 = 3;
        v57 = v299;
LABEL_20:
        *v293 = -1;
        result = 4;
        goto LABEL_419;
      }
      v300 = v55;
      v59 = v290.m256i_i16[4];
      v60 = v290.m256i_i16[5];
      v61 = v290.m256i_i32[3];
      v62 = (__int64 *)v290.m256i_i64[3];
      v63 = v290.m256i_i64[2];
      v64 = v291;
      v65 = *(unsigned __int8 *)(v299 + 368);
      if ( v65 == 4 )
      {
        if ( *(_BYTE *)(v299 + 1080) == 3 )
        {
          sub_140BE80E0(v299 + 656);
        }
        else if ( !*(_BYTE *)(v299 + 1080) )
        {
          sub_140BF21C0(v299 + 520);
        }
      }
      else if ( v65 == 3 )
      {
        sub_140BF25D0(*(_QWORD *)(v299 + 376), *(_QWORD *)(v299 + 384));
      }
      if ( v56 == 1 )
      {
        if ( v59 )
        {
          if ( v59 == 1 )
          {
            v85 = 0x8000000000000001uLL;
            if ( v63 )
              sub_140001660(v62, v63, 1);
          }
          else
          {
            v85 = v63;
          }
        }
        else if ( v60 == 401 || v60 == 403 )
        {
          LOWORD(v286) = v60;
          *(_QWORD *)&v281 = &v286;
          *((_QWORD *)&v281 + 1) = sub_1414AAE30;
          sub_14149C0F0(&v290, &unk_1417BB7E1, &v281);
          v62 = (__int64 *)v290.m256i_i64[1];
          v85 = v290.m256i_i64[0];
          v64 = v290.m256i_i64[2];
        }
        else if ( v60 == 404 )
        {
          v85 = 0x8000000000000000uLL;
        }
        else
        {
          v85 = 0x8000000000000001uLL;
        }
        goto LABEL_138;
      }
      LOWORD(v278) = v59;
      WORD1(v278) = v60;
      HIDWORD(v278) = v61;
      *(_QWORD *)&v279 = v63;
      *((_QWORD *)&v279 + 1) = v62;
      v280 = v64;
      v62 = &v278;
      v86 = sub_141433D50(aData_8, 4, &v278);
      if ( v86 )
        v62 = (__int64 *)v86;
      v87 = sub_141433D50(aObject_1, 6, v62);
      v88 = 1;
      if ( v87 && *(_BYTE *)v87 == 3 && *(_QWORD *)(v87 + 24) == 11 )
        v88 = (**(_QWORD **)(v87 + 16) ^ 0x73755F6E656B6F74LL
             | *(_QWORD *)(*(_QWORD *)(v87 + 16) + 3LL) ^ 0x65676173755F6E65LL) != 0;
      v89 = (unsigned __int8 *)sub_141433D50(aTotalAvailable, 15, v62);
      sub_1404D16A0((__int64)&v281, v89);
      LOBYTE(v90) = (_QWORD)v281 == -1;
      if ( ((unsigned __int8)v90 & v88) != 0 )
      {
        v85 = 0x8000000000000000uLL;
LABEL_137:
        v64 = 42;
        sub_1400104F0(&v278);
LABEL_138:
        v57 = v299;
        v115 = *(_QWORD *)(v299 + 296);
        if ( v115 )
          sub_140001660(*(_QWORD *)(v299 + 304), v115, 1);
        *v298 = 1;
        v112 = -1;
        goto LABEL_141;
      }
      if ( (_QWORD)v281 == -1 )
      {
        v111 = (unsigned __int8 *)sub_141433D50(aTotalGranted, 13, v62);
        sub_1404D16A0((__int64)&v290, v111);
      }
      else
      {
        v290.m256i_i64[2] = v282;
        *(_OWORD *)v290.m256i_i8 = v281;
      }
      if ( v290.m256i_i64[0] == -1 )
      {
        nullsub_1(v90);
        v85 = 42;
        v114 = (__int64 *)sub_140001650(42, 1);
        if ( !v114 )
          sub_1416C2D4B(1, 42);
        v62 = v114;
        qmemcpy(v114, "NewAPI token usage missing total_available", 42);
        goto LABEL_137;
      }
      v294 = (_BYTE *)v290.m256i_i64[1];
      v297 = (_OWORD *)v290.m256i_i64[0];
      sub_1404D1C40(&v290, v290.m256i_i64[1], v290.m256i_i64[2]);
      v85 = v290.m256i_i64[1];
      v112 = v290.m256i_i64[0];
      v62 = (__int64 *)v290.m256i_i64[2];
      if ( v297 )
        sub_140001660(v294, v297, 1);
      sub_1400104F0(&v278);
      v57 = v299;
      v113 = *(_QWORD *)(v299 + 296);
      if ( v113 )
        sub_140001660(*(_QWORD *)(v299 + 304), v113, 1);
      *v298 = 1;
      if ( v112 == -2 )
        goto LABEL_20;
      v64 = (__int64)aNewapi;
LABEL_141:
      *(_BYTE *)(v57 + 240) = 1;
      *(_QWORD *)(v57 + 176) = v112;
      *(_QWORD *)(v57 + 184) = v85;
      *(_QWORD *)(v57 + 192) = v62;
      *(_QWORD *)(v57 + 200) = v64;
      *(_QWORD *)(v57 + 208) = 6;
      *(_QWORD *)(v57 + 216) = aNewapiTokenUsa_0;
      *(_QWORD *)(v57 + 224) = 18;
      sub_140BEE590(v296);
      v6 = v299;
      v116 = (__int128 *)(v299 + 176);
      if ( *(_QWORD *)(v299 + 176) != -1 )
      {
        v292 = *(_QWORD *)(v299 + 224);
        v117 = *v116;
        v118 = *(_OWORD *)(v299 + 192);
        v291 = *(_OWORD *)(v299 + 208);
        *(_OWORD *)&v290.m256i_u64[2] = v118;
        *(_OWORD *)v290.m256i_i8 = v117;
        sub_14046D5F0((__int64)v240, &v290, *(_QWORD *)(v299 + 112));
LABEL_143:
        v119 = v299;
        if ( *(_QWORD *)v116 == -1 )
          *(_BYTE *)(v299 + 240) = 0;
        *(_BYTE *)(v119 + 240) = 0;
LABEL_411:
        v228 = v299;
        v229 = *(_QWORD *)(v299 + 152);
        if ( v229 )
          sub_140001660(*(_QWORD *)(v299 + 160), v229, 1);
        v230 = _InterlockedDecrement64(*(volatile signed __int64 **)(v228 + 144));
        v7 = v293;
        if ( !v230 )
          sub_141018B80(v299 + 144);
LABEL_415:
        sub_14034FA40(v299);
        goto LABEL_416;
      }
      if ( *(__int64 *)(v299 + 184) >= 0 )
      {
        v298 = *(_BYTE **)(v299 + 184);
        v120 = *(_QWORD *)(v299 + 112);
        v239 = *(_QWORD *)(v299 + 200);
        v300 = *(_QWORD *)(v299 + 192);
        sub_1404D33F0((__int64)v240, v120, (__int64)aNewapi, 6, (__int64)aNewapiTokenUsa_0, 18, v300, v239);
        if ( v298 )
          sub_140001660(v300, v298, 1);
        goto LABEL_143;
      }
      v42 = v293;
      v121 = *(_OWORD *)(v299 + 96);
      v122 = *(_OWORD *)(v299 + 128);
      v41 = v299 + 248;
      *(_QWORD *)(v299 + 248) = v299 + 144;
      *(_OWORD *)(v6 + 256) = v121;
      *(_OWORD *)(v6 + 272) = v122;
      *(_QWORD *)(v6 + 288) = v6;
      v298 = (_BYTE *)(v6 + 1088);
      *(_BYTE *)(v6 + 1088) = 0;
LABEL_13:
      v43 = *(_QWORD *)(v6 + 248);
      v44 = *(_QWORD *)(v6 + 256);
      v45 = *(_QWORD *)(v6 + 264);
      v46 = *(_QWORD *)(v6 + 272);
      v47 = *(_QWORD *)(v6 + 280);
      v48 = *(_QWORD *)(v6 + 288);
      v252 = v298;
      v251 = v41;
      v49 = v6;
      sub_1404D0E80(v6 + 296, v44, v45, (__int64)&unk_1417BB8EF, 9u);
      v296 = v41;
      v50 = *(_OWORD *)(v49 + 304);
      *(_QWORD *)(v49 + 320) = v43;
      *(_OWORD *)(v49 + 328) = v50;
      *(_QWORD *)(v49 + 344) = v46;
      *(_QWORD *)(v49 + 352) = v47;
      *(_QWORD *)(v49 + 360) = v48;
      *(_BYTE *)(v49 + 368) = 0;
      v6 = v49;
      v7 = v42;
LABEL_25:
      v300 = v6 + 320;
      sub_140D04E20(&v290);
      v66 = v290.m256i_i32[0];
      if ( v290.m256i_i64[0] == 2 )
      {
        *v298 = 3;
        v57 = v299;
        goto LABEL_27;
      }
      v293 = v7;
      v67 = v290.m256i_i16[4];
      v68 = v290.m256i_i16[5];
      v69 = v290.m256i_i32[3];
      v71 = v290.m256i_i64[3];
      v70 = v290.m256i_i64[2];
      v72 = v291;
      v73 = *(unsigned __int8 *)(v299 + 368);
      if ( v73 == 4 )
      {
        if ( *(_BYTE *)(v299 + 1080) == 3 )
        {
          sub_140BE80E0(v299 + 656);
        }
        else if ( !*(_BYTE *)(v299 + 1080) )
        {
          sub_140BF21C0(v299 + 520);
        }
      }
      else if ( v73 == 3 )
      {
        sub_140BF25D0(*(_QWORD *)(v299 + 376), *(_QWORD *)(v299 + 384));
      }
      if ( v66 == 1 )
      {
        if ( v67 )
        {
          if ( v67 == 1 )
          {
            v91 = 0x8000000000000001uLL;
            if ( v70 )
              sub_140001660(v71, v70, 1);
          }
          else
          {
            v91 = v70;
          }
        }
        else if ( v68 == 401 || v68 == 403 )
        {
          LOWORD(v286) = v68;
          *(_QWORD *)&v281 = &v286;
          *((_QWORD *)&v281 + 1) = sub_1414AAE30;
          sub_14149C0F0(&v290, &unk_1417BBA38, &v281);
          v71 = v290.m256i_i64[1];
          v91 = v290.m256i_i64[0];
          v72 = v290.m256i_i64[2];
        }
        else if ( v68 == 404 )
        {
          v91 = 0x8000000000000000uLL;
        }
        else
        {
          v91 = 0x8000000000000001uLL;
        }
LABEL_226:
        v155 = *(_QWORD *)(v299 + 296);
        if ( v155 )
          sub_140001660(*(_QWORD *)(v299 + 304), v155, 1);
        *v298 = 1;
        v107 = -1;
        v7 = v293;
        v108 = v71;
LABEL_229:
        sub_140BEE590(v296);
        if ( v107 == -1 )
        {
          v158 = *(_QWORD *)(v299 + 112);
          if ( v91 < 0 )
          {
            sub_1404D0C20(v240, v158);
          }
          else
          {
            v298 = (_BYTE *)v91;
            v300 = v108;
            sub_1404D33F0((__int64)v240, v158, (__int64)aSub2api, 7, (__int64)aSub2apiV1Usage, 17, v108, v72);
            if ( v298 )
              sub_140001660(v300, v298, 1);
          }
        }
        else
        {
          v290.m256i_i64[0] = v107;
          v290.m256i_i64[1] = v91;
          v290.m256i_i64[2] = v108;
          v290.m256i_i64[3] = v72;
          *(_QWORD *)&v291 = 7;
          *((_QWORD *)&v291 + 1) = aSub2apiV1Usage;
          v292 = 17;
          sub_14046D5F0((__int64)v240, &v290, *(_QWORD *)(v299 + 112));
        }
        v156 = v299;
        if ( *(_QWORD *)(v299 + 176) == -1 )
          *(_BYTE *)(v299 + 240) = 0;
        *(_BYTE *)(v156 + 240) = 0;
        v157 = *(_QWORD *)(v156 + 152);
        if ( v157 )
          sub_140001660(*(_QWORD *)(v156 + 160), v157, 1);
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v156 + 144)) )
          sub_141018B80(v299 + 144);
        goto LABEL_415;
      }
      LOWORD(v278) = v67;
      WORD1(v278) = v68;
      HIDWORD(v278) = v69;
      *(_QWORD *)&v279 = v70;
      *((_QWORD *)&v279 + 1) = v71;
      v280 = v72;
      if ( !sub_141433D50(aMode_4, 4, &v278)
        && !sub_141433D50(aRemaining, 9, &v278)
        && !sub_141433D50(aQuota_2, 5, &v278)
        && !sub_141433D50("usage", 5, &v278) )
      {
        v91 = 0x8000000000000000uLL;
LABEL_121:
        v72 = 31;
        sub_1400104F0(&v278);
        goto LABEL_226;
      }
      v92 = 0;
      while ( 2 )
      {
        v93 = (&off_1417BB9A0)[v92 + 1];
        v94 = (unsigned __int8 *)&v278;
        if ( v93 )
        {
          v95 = (&off_1417BB9A0)[v92];
          v96 = &v95[2 * (_QWORD)v93];
          v94 = (unsigned __int8 *)&v278;
          while ( 1 )
          {
            v94 = (unsigned __int8 *)sub_141433D50(*v95, v95[1], v94);
            if ( !v94 )
              break;
            v95 += 2;
            if ( v95 == v96 )
              goto LABEL_97;
          }
LABEL_92:
          v92 += 2;
          if ( v92 == 10 )
          {
            v290.m256i_i64[0] = -1;
            nullsub_1(v97);
            v91 = 31;
            v110 = (void *)sub_140001650(31, 1);
            if ( !v110 )
              sub_1416C2D4B(1, 31);
            v71 = (__int64)v110;
            qmemcpy(v110, "Sub2API usage missing remaining", 31);
            goto LABEL_121;
          }
          continue;
        }
        break;
      }
LABEL_97:
      sub_1404D16A0((__int64)&v290, v94);
      if ( v290.m256i_i64[0] == -1 )
        goto LABEL_92;
      v300 = v290.m256i_i64[1];
      v297 = (_OWORD *)v290.m256i_i64[0];
      v98 = v290.m256i_i32[4];
      v99 = (unsigned __int8 *)&v278;
      v100 = (unsigned __int8 *)sub_141433D50("unit", 4, &v278);
      v7 = v293;
      if ( !v100 || (sub_1404D16A0((__int64)&v281, v100), v101 = v281, (_QWORD)v281 == -1) )
      {
        v102 = 0;
        while ( 1 )
        {
          v103 = (unsigned __int8 *)sub_141433D50((&off_1417BB9F8)[v102], (&off_1417BB9F8)[v102 + 1], v99);
          v99 = v103;
          if ( !v103 )
            break;
          v102 += 2;
          if ( v102 == 4 )
          {
            sub_1404D16A0((__int64)&v281, v103);
            v101 = v281;
            if ( (_QWORD)v281 != -1 )
              goto LABEL_109;
            break;
          }
        }
        v104 = (unsigned __int8 *)&v278;
        v105 = 0;
        while ( 1 )
        {
          v104 = (unsigned __int8 *)sub_141433D50((&off_1417BBA18)[v105], (&off_1417BBA18)[v105 + 1], v104);
          if ( !v104 )
            break;
          v105 += 2;
          if ( v105 == 4 )
          {
            sub_1404D16A0((__int64)&v281, v104);
            v101 = v281;
            if ( (_QWORD)v281 != -1 )
              goto LABEL_109;
            break;
          }
        }
        v101 = -1;
      }
LABEL_109:
      v106 = 0;
      v294 = (_BYTE *)v101;
      v289 = *((_QWORD *)&v281 + 1);
      if ( v101 != -1 )
        v106 = DWORD2(v281);
      sub_1404D31F0((unsigned int)&v290, v300, v98, v106, v282);
      v91 = v290.m256i_i64[1];
      v107 = v290.m256i_i64[0];
      v108 = v290.m256i_i64[2];
      if ( (__int64)v294 > 0 )
        sub_140001660(v289, v294, 1);
      if ( v297 )
        sub_140001660(v300, v297, 1);
      sub_1400104F0(&v278);
      v57 = v299;
      v109 = *(_QWORD *)(v299 + 296);
      if ( v109 )
        sub_140001660(*(_QWORD *)(v299 + 304), v109, 1);
      *v298 = 1;
      if ( v107 != -2 )
      {
        v72 = (__int64)aSub2api;
        goto LABEL_229;
      }
LABEL_27:
      *v7 = -1;
      result = 5;
LABEL_419:
      *(_BYTE *)(v57 + 241) = result;
      return result;
    case 1LL:
      sub_1416C3400(&off_1417BB758, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417BB758, a2, a3, a4);
    case 3LL:
      v29 = (_BYTE *)(a2 + 376);
      v27 = a2 + 288;
      switch ( *(_BYTE *)(a2 + 376) )
      {
        case 0:
          v300 = a3;
          v293 = a1;
          v23 = *(_QWORD *)(a2 + 320);
          v25 = *(_QWORD *)(a2 + 304);
          v26 = *(_QWORD *)(a2 + 312);
          v30 = *(_QWORD *)(a2 + 328);
          switch ( *(_BYTE *)(a2 + 368) )
          {
            case 0:
LABEL_16:
              v51 = *(_QWORD *)(v6 + 288);
              v52 = *(_QWORD *)(v6 + 296);
              v53 = v6 + 384;
              *(_QWORD *)(v6 + 384) = v23;
              *(_QWORD *)(v6 + 392) = v51;
              *(_QWORD *)(v6 + 400) = v52;
              *(_QWORD *)(v6 + 408) = v25;
              *(_QWORD *)(v6 + 416) = v26;
              *(_QWORD *)(v6 + 424) = v30;
              v54 = (_BYTE *)(v6 + 1224);
              *(_BYTE *)(v6 + 1224) = 0;
              goto LABEL_53;
            case 1:
LABEL_189:
              v80 = v6 + 384;
              *(_QWORD *)(v6 + 384) = v23;
              *(_QWORD *)(v6 + 392) = v25;
              *(_QWORD *)(v6 + 400) = v26;
              *(_QWORD *)(v6 + 408) = v30;
              v79 = (_BYTE *)(v6 + 1184);
              *(_BYTE *)(v6 + 1184) = 0;
              goto LABEL_190;
            case 2:
LABEL_174:
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 1168) = v25;
              *(_QWORD *)(v6 + 1176) = v26;
              *(_QWORD *)(v6 + 1208) = v23;
              *(_QWORD *)(v6 + 1216) = v30;
              *(_WORD *)(v6 + 1225) = 256;
              v7 = v293;
              goto LABEL_175;
            case 3:
LABEL_178:
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 1168) = v25;
              *(_QWORD *)(v6 + 1176) = v26;
              *(_QWORD *)(v6 + 1208) = v23;
              *(_QWORD *)(v6 + 1216) = v30;
              *(_WORD *)(v6 + 1225) = 0;
              v7 = v293;
              goto LABEL_179;
            case 4:
LABEL_163:
              v84 = v6 + 384;
              *(_QWORD *)(v6 + 384) = v23;
              *(_QWORD *)(v6 + 392) = v25;
              *(_QWORD *)(v6 + 400) = v26;
              *(_QWORD *)(v6 + 408) = v30;
              v83 = (_BYTE *)(v6 + 1184);
              *(_BYTE *)(v6 + 1184) = 0;
              goto LABEL_164;
            case 5:
LABEL_196:
              v78 = v6 + 384;
              *(_QWORD *)(v6 + 384) = v23;
              *(_QWORD *)(v6 + 392) = v25;
              *(_QWORD *)(v6 + 400) = v26;
              *(_QWORD *)(v6 + 408) = v30;
              v77 = (_BYTE *)(v6 + 1184);
              *(_BYTE *)(v6 + 1184) = 0;
              goto LABEL_197;
            case 6:
LABEL_203:
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 1152) = v25;
              *(_QWORD *)(v6 + 1160) = v26;
              *(_QWORD *)(v6 + 1168) = v23;
              *(_QWORD *)(v6 + 1176) = v30;
              *(_WORD *)(v6 + 1185) = 256;
              v7 = v293;
              goto LABEL_204;
            case 7:
LABEL_182:
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 1152) = v25;
              *(_QWORD *)(v6 + 1160) = v26;
              *(_QWORD *)(v6 + 1168) = v23;
              *(_QWORD *)(v6 + 1176) = v30;
              *(_WORD *)(v6 + 1185) = 0;
              v7 = v293;
              goto LABEL_183;
            case 8:
LABEL_215:
              v76 = v6 + 384;
              *(_QWORD *)(v6 + 384) = v23;
              *(_QWORD *)(v6 + 392) = v25;
              *(_QWORD *)(v6 + 400) = v26;
              *(_QWORD *)(v6 + 408) = v30;
              v75 = (_BYTE *)(v6 + 1184);
              *(_BYTE *)(v6 + 1184) = 0;
              goto LABEL_216;
            case 9:
LABEL_170:
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 1168) = v25;
              *(_QWORD *)(v6 + 1176) = v26;
              *(_QWORD *)(v6 + 1208) = v23;
              *(_QWORD *)(v6 + 1216) = v30;
              *(_WORD *)(v6 + 1224) = 256;
              v7 = v293;
              goto LABEL_171;
            case 0xA:
LABEL_210:
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 1168) = v25;
              *(_QWORD *)(v6 + 1176) = v26;
              *(_QWORD *)(v6 + 1208) = v23;
              *(_QWORD *)(v6 + 1216) = v30;
              *(_WORD *)(v6 + 1224) = 0;
              v7 = v293;
              goto LABEL_211;
          }
        case 1:
          v255 = a2 + 288;
          sub_1416C3400(&off_1417BBD30, a2, a3, a4);
        case 2:
          v255 = a2 + 288;
          sub_1416C3420(&off_1417BBD30, a2, a3, a4);
        case 3:
          v54 = (_BYTE *)(a2 + 1224);
          v53 = a2 + 384;
          switch ( *(_BYTE *)(a2 + 1224) )
          {
            case 0:
              v300 = a3;
              v293 = a1;
              v23 = *(_QWORD *)(a2 + 384);
              v51 = *(_QWORD *)(a2 + 392);
              v52 = *(_QWORD *)(v6 + 400);
              v25 = *(_QWORD *)(v6 + 408);
              v26 = *(_QWORD *)(v6 + 416);
              v30 = *(_QWORD *)(v6 + 424);
LABEL_53:
              v274 = v29;
              v273 = v27;
              v294 = v54;
              v272 = v54;
              v289 = v53;
              v271 = v53;
              v81 = v6;
              sub_1404D10D0(v6 + 432, v51, v52, (__int64)"/user/balance", 13);
              v296 = v27;
              v298 = v29;
              v82 = *(_OWORD *)(v81 + 440);
              *(_QWORD *)(v81 + 456) = v23;
              *(_OWORD *)(v81 + 464) = v82;
              *(_QWORD *)(v81 + 480) = v25;
              *(_QWORD *)(v81 + 488) = v26;
              *(_QWORD *)(v81 + 496) = v30;
              *(_BYTE *)(v81 + 504) = 0;
              v6 = v81;
              v7 = v293;
              break;
            case 1:
              v270 = a2 + 376;
              v269 = a2 + 288;
              v268 = a2 + 384;
              sub_1416C3400(&off_1417BBA60, a2, a3, v53);
            case 2:
              v270 = a2 + 376;
              v269 = a2 + 288;
              v268 = a2 + 384;
              sub_1416C3420(&off_1417BBA60, a2, a3, v53);
            case 3:
              v294 = (_BYTE *)(a2 + 1224);
              v289 = a2 + 384;
              v296 = a2 + 288;
              v298 = (_BYTE *)(a2 + 376);
              break;
          }
          v300 = v6 + 456;
          sub_140D04E20(&v290);
          v123 = v290.m256i_i32[0];
          if ( v290.m256i_i64[0] == 2 )
          {
            *v294 = 3;
            v124 = 3;
            goto LABEL_213;
          }
          v125 = v290.m256i_i8[8];
          LODWORD(v275) = *(__int32 *)((char *)&v290.m256i_i32[2] + 1);
          *(_DWORD *)((char *)&v275 + 3) = v290.m256i_i32[3];
          v126 = *(_OWORD *)&v290.m256i_u64[2];
          v127 = v291;
          v128 = *(unsigned __int8 *)(v299 + 504);
          if ( v128 == 4 )
          {
            if ( *(_BYTE *)(v299 + 1216) == 3 )
            {
              sub_140BE80E0(v299 + 792);
            }
            else if ( !*(_BYTE *)(v299 + 1216) )
            {
              sub_140BF21C0(v299 + 656);
            }
          }
          else if ( v128 == 3 )
          {
            sub_140BF25D0(*(_QWORD *)(v299 + 512), *(_QWORD *)(v299 + 520));
          }
          v293 = v7;
          if ( v123 == 1 )
          {
            v290.m256i_i8[0] = v125;
            *(__int32 *)((char *)v290.m256i_i32 + 1) = LODWORD(v275);
            v290.m256i_i32[1] = *(_DWORD *)((char *)&v275 + 3);
            v297 = (_OWORD *)v126;
            v285 = v126 >> 64;
            v290.m256i_i64[1] = v126;
            v290.m256i_i64[2] = *((_QWORD *)&v126 + 1);
            v290.m256i_i64[3] = v127;
            v286 = 0;
            v287 = 1;
            v288 = 0;
            v282 = 1610612768;
            *(_QWORD *)&v281 = &v286;
            *((_QWORD *)&v281 + 1) = &off_1417C41C0;
            if ( (unsigned __int8)sub_1404E1AB0(&v290, &v281) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v295,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v300 = v286;
            v216 = (_OWORD *)v287;
            v127 = v288;
            if ( v290.m256i_i16[0] && v297 )
              sub_140001660(v285, v297, 1);
            goto LABEL_403;
          }
          if ( v125 == -1 )
          {
            v216 = (_OWORD *)(v126 >> 64);
            v300 = v126;
            goto LABEL_403;
          }
          HIDWORD(v278) = *(_DWORD *)((char *)&v275 + 3);
          *(_DWORD *)((char *)&v278 + 1) = LODWORD(v275);
          LOBYTE(v278) = v125;
          v279 = v126;
          v280 = v127;
          v217 = sub_141433D50(aBalanceInfos, 13, &v278);
          if ( v217 && *(_BYTE *)v217 == 4 )
          {
            if ( !*(_QWORD *)(v217 + 24) )
            {
              nullsub_1(v218);
              v300 = 34;
              v232 = (_OWORD *)sub_140001650(34, 1);
              if ( !v232 )
                sub_1416C2D4B(1, 34);
              v216 = v232;
              qmemcpy(v232, "DeepSeek balance response is empty", 34);
              goto LABEL_401;
            }
            v219 = *(_QWORD *)(v217 + 16);
            v220 = (unsigned __int8 *)sub_141433D50(aTotalBalance, 13, v219);
            sub_1404D16A0((__int64)&v290, v220);
            if ( v290.m256i_i64[0] != -1 )
            {
              v297 = (_OWORD *)v290.m256i_i64[1];
              v285 = v290.m256i_i64[0];
              v222 = v290.m256i_i64[2];
              v223 = sub_141433D50(aCurrency, 8, v219);
              if ( v223 )
              {
                if ( *(_BYTE *)v223 == 3 )
                  v224 = *(void **)(v223 + 16);
                else
                  v224 = nullptr;
                v223 = *(_QWORD *)(v223 + 24);
              }
              else
              {
                v224 = nullptr;
              }
              v234 = v224 == nullptr;
              v235 = &unk_1417BB8C8;
              if ( v224 )
                v235 = v224;
              v236 = 3;
              if ( !v234 )
                v236 = v223;
              sub_1404D13C0((__int64)&v290, (__int64)v297, v222, (__int64)v235, v236);
              v300 = v290.m256i_i64[1];
              v133 = v290.m256i_i64[0];
              v237 = v290.m256i_i64[2];
              if ( v285 )
                sub_140001660(v297, v285, 1);
              sub_1400104F0(&v278);
              v57 = v299;
              v238 = *(_QWORD *)(v299 + 432);
              if ( v238 )
                sub_140001660(*(_QWORD *)(v299 + 440), v238, 1);
              *v294 = 1;
              v124 = 3;
              if ( v133 != -2 )
              {
                v297 = (_OWORD *)v237;
                v127 = (__int64)&unk_1417BBA9A;
LABEL_406:
                v137 = v298;
                v138 = v296;
                v284 = v298;
                v283 = v296;
                sub_140BEE590(v289);
                v136 = 21;
                v135 = &unk_1417BBAAB;
                v134 = 17;
                goto LABEL_407;
              }
LABEL_220:
              *v298 = v124;
              *v7 = -1;
              result = 3;
              goto LABEL_419;
            }
            nullsub_1(v221);
            v300 = 47;
            v233 = sub_140001650(47, 1);
            if ( !v233 )
              sub_1416C2D4B(1, 47);
            v216 = (_OWORD *)v233;
            qmemcpy((void *)(v233 + 16), " response missing total_balance", 31);
            v226 = *(_OWORD *)&aNewapiTokenUsa[242];
          }
          else
          {
            nullsub_1(v218);
            v300 = 47;
            v225 = sub_140001650(47, 1);
            if ( !v225 )
              sub_1416C2D4B(1, 47);
            v216 = (_OWORD *)v225;
            qmemcpy((void *)(v225 + 16), " response missing balance_infos", 31);
            v226 = *(_OWORD *)&aNewapiTokenUsa[161];
          }
          *v216 = v226;
LABEL_401:
          sub_1400104F0(&v278);
          v127 = v300;
LABEL_403:
          v297 = v216;
          v227 = *(_QWORD *)(v299 + 432);
          if ( v227 )
            sub_140001660(*(_QWORD *)(v299 + 440), v227, 1);
          *v294 = 1;
          v133 = -1;
          goto LABEL_406;
        case 4:
          v79 = (_BYTE *)(a2 + 1184);
          v80 = v6 + 384;
          switch ( *(_BYTE *)(v6 + 1184) )
          {
            case 0:
              v300 = a3;
              v293 = a1;
              v23 = *(_QWORD *)(v6 + 384);
              v25 = *(_QWORD *)(v6 + 392);
              v26 = *(_QWORD *)(v6 + 400);
              v30 = *(_QWORD *)(v6 + 408);
LABEL_190:
              v297 = (_OWORD *)v80;
              v294 = v79;
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 416) = v23;
              *(_QWORD *)(v6 + 424) = aHttpsApiStepfu;
              *(_QWORD *)(v6 + 432) = 35;
              *(_QWORD *)(v6 + 440) = v25;
              *(_QWORD *)(v6 + 448) = v26;
              *(_QWORD *)(v6 + 456) = v30;
              *(_BYTE *)(v6 + 464) = 0;
              v7 = v293;
              break;
            case 1:
              v267 = v6 + 376;
              v266 = v6 + 288;
              v265 = v6 + 384;
              sub_1416C3400(&off_1417BB8B0, v79, a3, v80);
            case 2:
              v267 = v6 + 376;
              v266 = v6 + 288;
              v265 = v6 + 384;
              sub_1416C3420(&off_1417BB8B0, v79, a3, v80);
            case 3:
              v297 = (_OWORD *)(v6 + 384);
              v294 = (_BYTE *)(v6 + 1184);
              v296 = v6 + 288;
              v298 = (_BYTE *)(v6 + 376);
              break;
          }
          v300 = v6 + 416;
          sub_140D04E20(&v290);
          v142 = v290.m256i_i32[0];
          if ( v290.m256i_i64[0] == 2 )
          {
            *v294 = 3;
            v124 = 4;
            goto LABEL_213;
          }
          v143 = v290.m256i_i8[8];
          LODWORD(v275) = *(__int32 *)((char *)&v290.m256i_i32[2] + 1);
          *(_DWORD *)((char *)&v275 + 3) = v290.m256i_i32[3];
          v144 = *(_OWORD *)&v290.m256i_u64[2];
          v127 = v291;
          v145 = *(unsigned __int8 *)(v299 + 464);
          if ( v145 == 4 )
          {
            if ( *(_BYTE *)(v299 + 1176) == 3 )
            {
              sub_140BE80E0(v299 + 752);
            }
            else if ( !*(_BYTE *)(v299 + 1176) )
            {
              sub_140BF21C0(v299 + 616);
            }
          }
          else if ( v145 == 3 )
          {
            sub_140BF25D0(*(_QWORD *)(v299 + 472), *(_QWORD *)(v299 + 480));
          }
          v293 = v7;
          if ( v142 == 1 )
          {
            v290.m256i_i8[0] = v143;
            *(__int32 *)((char *)v290.m256i_i32 + 1) = LODWORD(v275);
            v290.m256i_i32[1] = *(_DWORD *)((char *)&v275 + 3);
            v289 = v144;
            v285 = v144 >> 64;
            v290.m256i_i64[1] = v144;
            v290.m256i_i64[2] = *((_QWORD *)&v144 + 1);
            v290.m256i_i64[3] = v127;
            v286 = 0;
            v287 = 1;
            v288 = 0;
            v282 = 1610612768;
            *(_QWORD *)&v281 = &v286;
            *((_QWORD *)&v281 + 1) = &off_1417C41C0;
            if ( (unsigned __int8)sub_1404E1AB0(&v290, &v281) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v295,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v300 = v286;
            v202 = v287;
            v127 = v288;
            if ( v290.m256i_i16[0] && v289 )
              sub_140001660(v285, v289, 1);
            goto LABEL_357;
          }
          if ( v143 == -1 )
          {
            v202 = v144 >> 64;
            v300 = v144;
LABEL_357:
            v297 = (_OWORD *)v202;
            *v294 = 1;
            v133 = -1;
            goto LABEL_358;
          }
          HIDWORD(v278) = *(_DWORD *)((char *)&v275 + 3);
          *(_DWORD *)((char *)&v278 + 1) = LODWORD(v275);
          LOBYTE(v278) = v143;
          v279 = v144;
          v280 = v127;
          v203 = (unsigned __int8 *)sub_141433D50(aBalance_1, 7, &v278);
          sub_1404D16A0((__int64)&v290, v203);
          if ( v290.m256i_i64[0] == -1 )
          {
            nullsub_1(v204);
            v300 = 40;
            v206 = (void *)sub_140001650(40, 1);
            if ( !v206 )
              sub_1416C2D4B(1, 40);
            v202 = (__int64)v206;
            qmemcpy(v206, "StepFun account response missing balance", 40);
            sub_1400104F0(&v278);
            v127 = 40;
            goto LABEL_357;
          }
          v285 = v290.m256i_i64[1];
          v289 = v290.m256i_i64[0];
          sub_1404D13C0((__int64)&v290, v290.m256i_i64[1], v290.m256i_i64[2], (__int64)&unk_1417BB8C8, 3);
          v300 = v290.m256i_i64[1];
          v133 = v290.m256i_i64[0];
          v205 = v290.m256i_i64[2];
          if ( v289 )
            sub_140001660(v285, v289, 1);
          sub_1400104F0(&v278);
          *v294 = 1;
          v124 = 4;
          if ( v133 != -2 )
          {
            v297 = (_OWORD *)v205;
            v127 = (__int64)&unk_1417BB8CB;
LABEL_358:
            v136 = 20;
            v135 = &unk_1417BB8DB;
            goto LABEL_359;
          }
          goto LABEL_213;
        case 5:
          v296 = a2 + 288;
          v298 = (_BYTE *)(a2 + 376);
LABEL_175:
          v294 = (_BYTE *)(v6 + 384);
          sub_140D03270(&v290);
          v133 = v290.m256i_i64[0];
          if ( v290.m256i_i64[0] != -2 )
            goto LABEL_177;
          v124 = 5;
          goto LABEL_213;
        case 6:
          v296 = a2 + 288;
          v298 = (_BYTE *)(a2 + 376);
LABEL_179:
          v294 = (_BYTE *)(v6 + 384);
          sub_140D03270(&v290);
          v133 = v290.m256i_i64[0];
          if ( v290.m256i_i64[0] != -2 )
          {
LABEL_177:
            v293 = v7;
            v300 = v290.m256i_i64[1];
            v127 = v290.m256i_i64[3];
            v297 = (_OWORD *)v290.m256i_i64[2];
            v135 = *((void **)&v291 + 1);
            v134 = v291;
            v136 = v292;
            v137 = v298;
            v284 = v298;
            v138 = v296;
            v283 = v296;
            sub_140BEE7D0((__int64)v294);
            goto LABEL_407;
          }
          v124 = 6;
          goto LABEL_213;
        case 7:
          v293 = a1;
          v83 = (_BYTE *)(a2 + 1184);
          v84 = v6 + 384;
          switch ( *(_BYTE *)(v6 + 1184) )
          {
            case 0:
              v300 = a3;
              v23 = *(_QWORD *)(v6 + 384);
              v25 = *(_QWORD *)(v6 + 392);
              v26 = *(_QWORD *)(v6 + 400);
              v30 = *(_QWORD *)(v6 + 408);
LABEL_164:
              v289 = v84;
              v294 = v83;
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 416) = v23;
              *(_QWORD *)(v6 + 424) = aHttpsOpenroute;
              *(_QWORD *)(v6 + 432) = 36;
              *(_QWORD *)(v6 + 440) = v25;
              *(_QWORD *)(v6 + 448) = v26;
              *(_QWORD *)(v6 + 456) = v30;
              *(_BYTE *)(v6 + 464) = 0;
              break;
            case 1:
              v264 = v6 + 376;
              v263 = v6 + 288;
              v262 = v6 + 384;
              sub_1416C3400(&off_1417BBAE8, v83, a3, v84);
            case 2:
              v264 = v6 + 376;
              v263 = v6 + 288;
              v262 = v6 + 384;
              sub_1416C3420(&off_1417BBAE8, v83, a3, v84);
            case 3:
              v289 = v6 + 384;
              v294 = (_BYTE *)(v6 + 1184);
              v296 = v6 + 288;
              v298 = (_BYTE *)(v6 + 376);
              break;
          }
          v300 = v6 + 416;
          sub_140D04E20(&v290);
          v129 = v290.m256i_i32[0];
          if ( v290.m256i_i64[0] == 2 )
          {
            *v294 = 3;
            v124 = 7;
            goto LABEL_219;
          }
          v130 = v290.m256i_i8[8];
          v277[0] = *(__int32 *)((char *)&v290.m256i_i32[2] + 1);
          *(_DWORD *)((char *)v277 + 3) = v290.m256i_i32[3];
          v131 = *(_OWORD *)&v290.m256i_u64[2];
          v127 = v291;
          v132 = *(unsigned __int8 *)(v299 + 464);
          if ( v132 == 4 )
          {
            if ( *(_BYTE *)(v299 + 1176) == 3 )
            {
              sub_140BE80E0(v299 + 752);
            }
            else if ( !*(_BYTE *)(v299 + 1176) )
            {
              sub_140BF21C0(v299 + 616);
            }
          }
          else if ( v132 == 3 )
          {
            sub_140BF25D0(*(_QWORD *)(v299 + 472), *(_QWORD *)(v299 + 480));
          }
          if ( v129 == 1 )
          {
            v290.m256i_i8[0] = v130;
            *(__int32 *)((char *)v290.m256i_i32 + 1) = v277[0];
            v290.m256i_i32[1] = *(_DWORD *)((char *)v277 + 3);
            v297 = (_OWORD *)v131;
            *(_OWORD *)&v290.m256i_u64[1] = v131;
            v290.m256i_i64[3] = v127;
            v286 = 0;
            v287 = 1;
            v288 = 0;
            v282 = 1610612768;
            *(_QWORD *)&v281 = &v286;
            *((_QWORD *)&v281 + 1) = &off_1417C41C0;
            if ( (unsigned __int8)sub_1404E1AB0(&v290, &v281) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v295,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v300 = v286;
            v207 = v287;
            v127 = v288;
            if ( v290.m256i_i16[0] && v297 )
              sub_140001660(*((_QWORD *)&v131 + 1), v297, 1);
            v297 = (_OWORD *)v207;
            goto LABEL_382;
          }
          v7 = v293;
          if ( v130 == -1 )
          {
            v297 = (_OWORD *)(v131 >> 64);
            v300 = v131;
LABEL_382:
            *v294 = 1;
            v133 = -1;
            v137 = v298;
            v138 = v296;
            goto LABEL_383;
          }
          HIDWORD(v278) = *(_DWORD *)((char *)v277 + 3);
          *(_DWORD *)((char *)&v278 + 1) = v277[0];
          LOBYTE(v278) = v130;
          v279 = v131;
          v280 = v127;
          v208 = &v278;
          v209 = sub_141433D50(aData_8, 4, &v278);
          if ( v209 )
            v208 = (__int64 *)v209;
          v210 = (unsigned __int8 *)sub_141433D50(aTotalCredits, 13, v208);
          if ( (sub_1404D1020(v210) & 1) == 0 )
          {
            nullsub_1(v211);
            v300 = 49;
            v215 = (_OWORD *)sub_140001650(49, 1);
            if ( !v215 )
              sub_1416C2D4B(1, 49);
            qmemcpy(v215, "OpenRouter credits response missing total_credits", 49);
            v297 = v215;
            sub_1400104F0(&v278);
            v127 = 49;
            goto LABEL_382;
          }
          v212 = v4.m128d_f64[0];
          v213 = (unsigned __int8 *)sub_141433D50(aTotalUsage, 11, v208);
          if ( (sub_1404D1020(v213) & 1) == 0 )
            v4.m128d_f64[0] = 0.0;
          v275 = v212 - v4.m128d_f64[0];
          *(_QWORD *)&v281 = 0;
          *((_QWORD *)&v281 + 1) = 1;
          v282 = 0;
          v290.m256i_i64[2] = 1610612768;
          v290.m256i_i64[0] = (__int64)&v281;
          v290.m256i_i64[1] = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414AB4C0(&v275, &v290) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v295,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v285 = *((_QWORD *)&v281 + 1);
          v297 = (_OWORD *)v281;
          sub_1404D13C0((__int64)&v286, *((__int64 *)&v281 + 1), v282, (__int64)&unk_1417BB860, 3);
          v133 = v286;
          v300 = v287;
          v214 = v288;
          sub_1400104F0(&v278);
          if ( v297 )
            sub_140001660(v285, v297, 1);
          *v294 = 1;
          v124 = 7;
          v138 = v296;
          if ( v133 != -2 )
          {
            v297 = (_OWORD *)v214;
            v127 = (__int64)&unk_1417BBB18;
            v137 = v298;
LABEL_383:
            v136 = 25;
            v135 = &unk_1417BBB2B;
            v134 = 19;
            goto LABEL_407;
          }
          goto LABEL_213;
        case 8:
          v293 = a1;
          v77 = (_BYTE *)(a2 + 1184);
          v78 = v6 + 384;
          switch ( *(_BYTE *)(v6 + 1184) )
          {
            case 0:
              v300 = a3;
              v23 = *(_QWORD *)(v6 + 384);
              v25 = *(_QWORD *)(v6 + 392);
              v26 = *(_QWORD *)(v6 + 400);
              v30 = *(_QWORD *)(v6 + 408);
LABEL_197:
              v289 = v78;
              v294 = v77;
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 416) = v23;
              *(_QWORD *)(v6 + 424) = aHttpsApiNovita;
              *(_QWORD *)(v6 + 432) = 55;
              *(_QWORD *)(v6 + 440) = v25;
              *(_QWORD *)(v6 + 448) = v26;
              *(_QWORD *)(v6 + 456) = v30;
              *(_BYTE *)(v6 + 464) = 0;
              break;
            case 1:
              v261 = v6 + 376;
              v260 = v6 + 288;
              v259 = v6 + 384;
              sub_1416C3400(&off_1417BB838, v77, a3, v78);
            case 2:
              v261 = v6 + 376;
              v260 = v6 + 288;
              v259 = v6 + 384;
              sub_1416C3420(&off_1417BB838, v77, a3, v78);
            case 3:
              v289 = v6 + 384;
              v294 = (_BYTE *)(v6 + 1184);
              v296 = v6 + 288;
              v298 = (_BYTE *)(v6 + 376);
              break;
          }
          v300 = v6 + 416;
          sub_140D04E20(&v290);
          v146 = v290.m256i_i32[0];
          if ( v290.m256i_i64[0] == 2 )
          {
            *v294 = 3;
            v124 = 8;
            goto LABEL_219;
          }
          v147 = v290.m256i_i8[8];
          v277[0] = *(__int32 *)((char *)&v290.m256i_i32[2] + 1);
          *(_DWORD *)((char *)v277 + 3) = v290.m256i_i32[3];
          v148 = *(_OWORD *)&v290.m256i_u64[2];
          v127 = v291;
          v149 = *(unsigned __int8 *)(v299 + 464);
          if ( v149 == 4 )
          {
            if ( *(_BYTE *)(v299 + 1176) == 3 )
            {
              sub_140BE80E0(v299 + 752);
            }
            else if ( !*(_BYTE *)(v299 + 1176) )
            {
              sub_140BF21C0(v299 + 616);
            }
          }
          else if ( v149 == 3 )
          {
            sub_140BF25D0(*(_QWORD *)(v299 + 472), *(_QWORD *)(v299 + 480));
          }
          if ( v146 == 1 )
          {
            v290.m256i_i8[0] = v147;
            *(__int32 *)((char *)v290.m256i_i32 + 1) = v277[0];
            v290.m256i_i32[1] = *(_DWORD *)((char *)v277 + 3);
            v297 = (_OWORD *)v148;
            *(_OWORD *)&v290.m256i_u64[1] = v148;
            v290.m256i_i64[3] = v127;
            v286 = 0;
            v287 = 1;
            v288 = 0;
            v282 = 1610612768;
            *(_QWORD *)&v281 = &v286;
            *((_QWORD *)&v281 + 1) = &off_1417C41C0;
            if ( (unsigned __int8)sub_1404E1AB0(&v290, &v281) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v295,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v300 = v286;
            v159 = v287;
            v127 = v288;
            if ( v290.m256i_i16[0] && v297 )
              sub_140001660(*((_QWORD *)&v148 + 1), v297, 1);
            v297 = (_OWORD *)v159;
          }
          else
          {
            v7 = v293;
            if ( v147 == -1 )
            {
              v297 = (_OWORD *)(v148 >> 64);
              v300 = v148;
            }
            else
            {
              HIDWORD(v278) = *(_DWORD *)((char *)v277 + 3);
              *(_DWORD *)((char *)&v278 + 1) = v277[0];
              LOBYTE(v278) = v147;
              v279 = v148;
              v280 = v127;
              v160 = (unsigned __int8 *)sub_141433D50(aAvailablebalan, 16, &v278);
              if ( (sub_1404D1020(v160) & 1) != 0 )
              {
                v275 = v4.m128d_f64[0] / 10000.0;
                *(_QWORD *)&v281 = 0;
                *((_QWORD *)&v281 + 1) = 1;
                v282 = 0;
                v290.m256i_i64[2] = 1610612768;
                v290.m256i_i64[0] = (__int64)&v281;
                v290.m256i_i64[1] = (__int64)&off_1417C41C0;
                if ( (unsigned __int8)sub_1414AB4C0(&v275, &v290) )
                  sub_1416C3060(
                    (unsigned int)aADisplayImplem_11,
                    55,
                    (unsigned int)&v295,
                    (unsigned int)&unk_1417BC180,
                    (__int64)&off_1417C4278);
                v285 = *((_QWORD *)&v281 + 1);
                v297 = (_OWORD *)v281;
                sub_1404D13C0((__int64)&v286, *((__int64 *)&v281 + 1), v282, (__int64)&unk_1417BB860, 3);
                v133 = v286;
                v300 = v287;
                v162 = v288;
                sub_1400104F0(&v278);
                if ( v297 )
                  sub_140001660(v285, v297, 1);
                *v294 = 1;
                v124 = 8;
                v138 = v296;
                if ( v133 == -2 )
                {
LABEL_213:
                  v57 = v299;
                  goto LABEL_220;
                }
                v297 = (_OWORD *)v162;
                v127 = (__int64)&unk_1417BB863;
                v137 = v298;
LABEL_281:
                v136 = 22;
                v135 = &unk_1417BB872;
                v134 = 15;
                goto LABEL_407;
              }
              nullsub_1(v161);
              v300 = 48;
              v163 = (_OWORD *)sub_140001650(48, 1);
              if ( !v163 )
                sub_1416C2D4B(1, 48);
              v297 = v163;
              qmemcpy(v163, "Novita balance response missing availableBalance", 48);
              sub_1400104F0(&v278);
              v127 = 48;
            }
          }
          *v294 = 1;
          v133 = -1;
          v137 = v298;
          v138 = v296;
          goto LABEL_281;
        case 9:
          v296 = a2 + 288;
          v298 = (_BYTE *)(a2 + 376);
LABEL_204:
          v300 = v6 + 384;
          sub_140D03AD0(&v290);
          v133 = v290.m256i_i64[0];
          if ( v290.m256i_i64[0] == -2 )
          {
            v124 = 9;
            goto LABEL_213;
          }
          v293 = v7;
          v300 = v290.m256i_i64[1];
          v127 = v290.m256i_i64[3];
          v297 = (_OWORD *)v290.m256i_i64[2];
          v135 = *((void **)&v291 + 1);
          v134 = v291;
          v136 = v292;
          if ( *(_BYTE *)(v299 + 1185) != 3 )
            goto LABEL_360;
          v150 = *(unsigned __int8 *)(v299 + 432);
          v137 = v298;
          v138 = v296;
          if ( v150 != 4 )
          {
            if ( v150 != 3 )
              goto LABEL_407;
            goto LABEL_188;
          }
          if ( *(_BYTE *)(v299 + 1144) == 3 )
            goto LABEL_421;
          if ( !*(_BYTE *)(v299 + 1144) )
            goto LABEL_259;
          goto LABEL_407;
        case 0xA:
          v296 = a2 + 288;
          v298 = (_BYTE *)(a2 + 376);
LABEL_183:
          v300 = v6 + 384;
          sub_140D03AD0(&v290);
          v133 = v290.m256i_i64[0];
          if ( v290.m256i_i64[0] == -2 )
          {
            v124 = 10;
            goto LABEL_213;
          }
          v293 = v7;
          v300 = v290.m256i_i64[1];
          v127 = v290.m256i_i64[3];
          v297 = (_OWORD *)v290.m256i_i64[2];
          v135 = *((void **)&v291 + 1);
          v134 = v291;
          v136 = v292;
          if ( *(_BYTE *)(v299 + 1185) != 3 )
            goto LABEL_360;
          v139 = *(unsigned __int8 *)(v299 + 432);
          v137 = v298;
          v138 = v296;
          if ( v139 == 4 )
          {
            if ( *(_BYTE *)(v299 + 1144) == 3 )
            {
LABEL_421:
              v284 = v298;
              v283 = v296;
              sub_140BE80E0(v299 + 720);
            }
            else if ( !*(_BYTE *)(v299 + 1144) )
            {
LABEL_259:
              v284 = v298;
              v283 = v296;
              sub_140BF21C0(v299 + 584);
            }
          }
          else if ( v139 == 3 )
          {
LABEL_188:
            v140 = *(_QWORD *)(v299 + 440);
            v141 = *(_QWORD *)(v299 + 448);
            v284 = v298;
            v283 = v296;
            sub_140BF25D0(v140, v141);
          }
          goto LABEL_407;
        case 0xB:
          v293 = a1;
          v75 = (_BYTE *)(a2 + 1184);
          v76 = v6 + 384;
          switch ( *(_BYTE *)(v6 + 1184) )
          {
            case 0:
              v300 = a3;
              v23 = *(_QWORD *)(v6 + 384);
              v25 = *(_QWORD *)(v6 + 392);
              v26 = *(_QWORD *)(v6 + 400);
              v30 = *(_QWORD *)(v6 + 408);
LABEL_216:
              v297 = (_OWORD *)v76;
              v294 = v75;
              v296 = v27;
              v298 = v29;
              *(_QWORD *)(v6 + 416) = v23;
              *(_QWORD *)(v6 + 424) = aHttpsApiKimiCo;
              *(_QWORD *)(v6 + 432) = 37;
              *(_QWORD *)(v6 + 440) = v25;
              *(_QWORD *)(v6 + 448) = v26;
              *(_QWORD *)(v6 + 456) = v30;
              *(_BYTE *)(v6 + 464) = 0;
              break;
            case 1:
              v258 = v6 + 376;
              v257 = v6 + 288;
              v256 = v6 + 384;
              sub_1416C3400(&off_1417BBCA0, v75, a3, v76);
            case 2:
              v258 = v6 + 376;
              v257 = v6 + 288;
              v256 = v6 + 384;
              sub_1416C3420(&off_1417BBCA0, v75, a3, v76);
            case 3:
              v297 = (_OWORD *)(v6 + 384);
              v294 = (_BYTE *)(v6 + 1184);
              v296 = v6 + 288;
              v298 = (_BYTE *)(v6 + 376);
              break;
          }
          v300 = v6 + 416;
          sub_140D04E20(&v290);
          v151 = v290.m256i_i32[0];
          if ( v290.m256i_i64[0] == 2 )
          {
            *v294 = 3;
            v124 = 11;
LABEL_219:
            v57 = v299;
            v7 = v293;
            goto LABEL_220;
          }
          v152 = v290.m256i_i8[8];
          v277[0] = *(__int32 *)((char *)&v290.m256i_i32[2] + 1);
          *(_DWORD *)((char *)v277 + 3) = v290.m256i_i32[3];
          v153 = *(_OWORD *)&v290.m256i_u64[2];
          v127 = v291;
          v154 = *(unsigned __int8 *)(v299 + 464);
          if ( v154 == 4 )
          {
            if ( *(_BYTE *)(v299 + 1176) == 3 )
            {
              sub_140BE80E0(v299 + 752);
            }
            else if ( !*(_BYTE *)(v299 + 1176) )
            {
              sub_140BF21C0(v299 + 616);
            }
          }
          else if ( v154 == 3 )
          {
            sub_140BF25D0(*(_QWORD *)(v299 + 472), *(_QWORD *)(v299 + 480));
          }
          if ( v151 == 1 )
          {
            v290.m256i_i8[0] = v152;
            *(__int32 *)((char *)v290.m256i_i32 + 1) = v277[0];
            v290.m256i_i32[1] = *(_DWORD *)((char *)v277 + 3);
            v289 = v153;
            v285 = v153 >> 64;
            v290.m256i_i64[1] = v153;
            v290.m256i_i64[2] = *((_QWORD *)&v153 + 1);
            v290.m256i_i64[3] = v127;
            v286 = 0;
            v287 = 1;
            v288 = 0;
            v282 = 1610612768;
            *(_QWORD *)&v281 = &v286;
            *((_QWORD *)&v281 + 1) = &off_1417C41C0;
            if ( (unsigned __int8)sub_1404E1AB0(&v290, &v281) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v295,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v300 = v286;
            v164 = v287;
            v127 = v288;
            if ( v290.m256i_i16[0] && v289 )
              sub_140001660(v285, v289, 1);
            goto LABEL_340;
          }
          if ( v152 == -1 )
          {
            v164 = v153 >> 64;
            v300 = v153;
          }
          else
          {
            HIDWORD(v278) = *(_DWORD *)((char *)v277 + 3);
            *(_DWORD *)((char *)&v278 + 1) = v277[0];
            LOBYTE(v278) = v152;
            v279 = v153;
            v280 = v127;
            v286 = 0;
            v287 = 8;
            v288 = 0;
            v165 = sub_141433D50(aLimits, 6, &v278);
            if ( v165 && *(_BYTE *)v165 == 4 )
            {
              v166 = *(_QWORD *)(v165 + 16);
              v167 = v166 + 32LL * *(_QWORD *)(v165 + 24);
              v168 = 0;
              v169 = &unk_1417BBCBE;
              while ( 1 )
              {
                do
                {
                  if ( (v168 & 1) != 0 || v166 == v167 )
                    goto LABEL_322;
                  v172 = sub_141433D50(v169, 6, v166);
                  v173 = v172;
                  v166 += 32;
                  v168 = 1;
                }
                while ( !v172 );
                v174 = (double *)sub_141433D50(aLimit_1, 5, v172);
                if ( v174 )
                {
                  v175 = *(unsigned __int8 *)v174;
                  if ( v175 == 3 )
                  {
                    v178 = sub_14033BC10(*((_QWORD *)v174 + 2), *((_QWORD *)v174 + 3));
                    sub_1414AA750(&v290, v178, v179);
                    v5 = *(double *)&v290.m256i_i64[1];
                    v177 = v290.m256i_i8[0] ^ 1;
                    goto LABEL_307;
                  }
                  if ( v175 == 2 )
                  {
                    v176 = *((_QWORD *)v174 + 1);
                    if ( v176 )
                    {
                      if ( (_DWORD)v176 == 1 )
                        v5 = (double)(int)*((_QWORD *)v174 + 2);
                      else
                        v5 = v174[2];
                    }
                    else
                    {
                      v4 = _mm_sub_pd(
                             (__m128d)_mm_unpacklo_ps(
                                        (__m128)*((unsigned __int64 *)v174 + 2),
                                        (__m128)0x4530000043300000uLL),
                             (__m128d)xmmword_1416C6280);
                      v5 = _mm_unpackhi_pd(v4, v4).m128d_f64[0] + v4.m128d_f64[0];
                    }
                    v177 = 1;
                    goto LABEL_307;
                  }
                }
                v177 = 0;
LABEL_307:
                v180 = (double *)sub_141433D50(aRemaining, 9, v173);
                if ( v180 )
                {
                  v181 = *(unsigned __int8 *)v180;
                  if ( v181 == 3 )
                  {
                    v184 = sub_14033BC10(*((_QWORD *)v180 + 2), *((_QWORD *)v180 + 3));
                    sub_1414AA750(&v290, v184, v185);
                    v183 = *(double *)&v290.m256i_i64[1];
                    v186 = v290.m256i_i8[0] ^ 1;
LABEL_317:
                    if ( ((unsigned __int8)v186 & (unsigned __int8)v177) == 1 )
                    {
                      sub_1404D1310(&v290, v183, v5);
                      v275 = COERCE_DOUBLE(&v290);
                      v276 = sub_1400015F0;
                      sub_14149C0F0(&v281, &unk_1417BBCC9, &v275);
                      v187 = v169;
                      if ( v290.m256i_i64[0] )
                        sub_140001660(v290.m256i_i64[1], v290.m256i_i64[0], 1);
                      v289 = *((_QWORD *)&v281 + 1);
                      v300 = v281;
                      v188 = v282;
                      v189 = v288;
                      if ( v288 == v286 )
                        sub_141689AB0(&v286);
                      v170 = v287;
                      v171 = 3 * v189;
                      *(_QWORD *)(v287 + 8 * v171) = v300;
                      *(_QWORD *)(v170 + 8 * v171 + 8) = v289;
                      *(_QWORD *)(v170 + 8 * v171 + 16) = v188;
                      v288 = v189 + 1;
                      v169 = v187;
                    }
                  }
                  else if ( v181 == 2 )
                  {
                    v182 = *((_QWORD *)v180 + 1);
                    if ( v182 )
                    {
                      if ( (_DWORD)v182 == 1 )
                        v183 = (double)(int)*((_QWORD *)v180 + 2);
                      else
                        v183 = v180[2];
                    }
                    else
                    {
                      v4 = _mm_sub_pd(
                             (__m128d)_mm_unpacklo_ps(
                                        (__m128)*((unsigned __int64 *)v180 + 2),
                                        (__m128)0x4530000043300000uLL),
                             (__m128d)xmmword_1416C6280);
                      v183 = _mm_unpackhi_pd(v4, v4).m128d_f64[0] + v4.m128d_f64[0];
                    }
                    v186 = 1;
                    goto LABEL_317;
                  }
                }
              }
            }
LABEL_322:
            v190 = sub_141433D50("usage", 5, &v278);
            v192 = v190;
            if ( v190
              && (v193 = (unsigned __int8 *)sub_141433D50(aLimit_1, 5, v190),
                  v194 = sub_1404D1020(v193),
                  v195 = (unsigned __int8 *)sub_141433D50(aRemaining, 9, v192),
                  ((unsigned __int8)sub_1404D1020(v195) & v194 & 1) != 0) )
            {
              sub_1404D1310(&v290, v4.m128d_f64[0], v4.m128d_f64[0]);
              v275 = COERCE_DOUBLE(&v290);
              v276 = sub_1400015F0;
              sub_14149C0F0(&v281, &unk_1417BBCCF, &v275);
              if ( v290.m256i_i64[0] )
                sub_140001660(v290.m256i_i64[1], v290.m256i_i64[0], 1);
              v289 = *((_QWORD *)&v281 + 1);
              v300 = v281;
              v196 = v282;
              v197 = v288;
              if ( v288 == v286 )
                sub_141689AB0(&v286);
              v198 = v287;
              v191 = 3 * v197;
              *(_QWORD *)(v287 + 8 * v191) = v300;
              *(_QWORD *)(v198 + 8 * v191 + 8) = v289;
              *(_QWORD *)(v198 + 8 * v191 + 16) = v196;
              v199 = v197 + 1;
              v288 = v199;
            }
            else
            {
              v199 = v288;
            }
            if ( v199 )
            {
              sub_140440300((unsigned int)&v290, v287, v199, (unsigned int)&unk_1417BBCD6, 3);
              v300 = v290.m256i_i64[1];
              v133 = v290.m256i_i64[0];
              v200 = v290.m256i_i64[2];
              sub_140334760(&v286);
              if ( v286 )
                sub_140001660(v287, 24 * v286, 8);
              sub_1400104F0(&v278);
              *v294 = 1;
              v124 = 11;
              if ( v133 == -2 )
                goto LABEL_219;
              v297 = (_OWORD *)v200;
              v127 = (__int64)&unk_1417BBCD9;
LABEL_341:
              v136 = 23;
              v135 = &unk_1417BBCE9;
LABEL_359:
              v134 = 16;
LABEL_360:
              v137 = v298;
              v138 = v296;
LABEL_407:
              *v137 = 1;
              sub_140BEEA10(v138);
              if ( v133 == -1 )
              {
                sub_1404D33F0(
                  (__int64)v240,
                  *(_QWORD *)(v299 + 112),
                  *(_QWORD *)(v299 + 248),
                  *(_QWORD *)(v299 + 256),
                  *(_QWORD *)(v299 + 264),
                  *(_QWORD *)(v299 + 272),
                  (__int64)v297,
                  v127);
                if ( v300 )
                  sub_140001660(v297, v300, 1);
              }
              else
              {
                v290.m256i_i64[0] = v133;
                v290.m256i_i64[1] = v300;
                v290.m256i_i64[2] = (__int64)v297;
                v290.m256i_i64[3] = v127;
                *(_QWORD *)&v291 = v134;
                *((_QWORD *)&v291 + 1) = v135;
                v292 = v136;
                sub_14046D5F0((__int64)v240, &v290, *(_QWORD *)(v299 + 112));
              }
              goto LABEL_411;
            }
            nullsub_1(v191);
            v201 = (void *)sub_140001650(46, 1);
            if ( !v201 )
              sub_1416C2D4B(1, 46);
            v164 = (__int64)v201;
            qmemcpy(v201, "Kimi coding usage response missing quota tiers", 46);
            sub_140334760(&v286);
            if ( v286 )
              sub_140001660(v287, 24 * v286, 8);
            v300 = 46;
            sub_1400104F0(&v278);
            v127 = 46;
          }
LABEL_340:
          v297 = (_OWORD *)v164;
          *v294 = 1;
          v133 = -1;
          goto LABEL_341;
        case 0xC:
          v296 = a2 + 288;
          v298 = (_BYTE *)(a2 + 376);
LABEL_171:
          v294 = (_BYTE *)(v6 + 384);
          _u7b__u7b_closure_u7d__u7d__19(&v290);
          v133 = v290.m256i_i64[0];
          if ( v290.m256i_i64[0] != -2 )
            goto LABEL_173;
          v124 = 12;
          goto LABEL_213;
        case 0xD:
          v296 = a2 + 288;
          v298 = (_BYTE *)(a2 + 376);
LABEL_211:
          v294 = (_BYTE *)(v6 + 384);
          _u7b__u7b_closure_u7d__u7d__19(&v290);
          v133 = v290.m256i_i64[0];
          if ( v290.m256i_i64[0] != -2 )
          {
LABEL_173:
            v293 = v7;
            v300 = v290.m256i_i64[1];
            v127 = v290.m256i_i64[3];
            v297 = (_OWORD *)v290.m256i_i64[2];
            v135 = *((void **)&v291 + 1);
            v134 = v291;
            v136 = v292;
            v137 = v298;
            v284 = v298;
            v138 = v296;
            v283 = v296;
            sub_140BEEB40((__int64)v294);
            goto LABEL_407;
          }
          v124 = 13;
          goto LABEL_213;
      }
    case 4LL:
      v293 = a1;
      v31 = (_BYTE *)(a2 + 1088);
      v32 = a2 + 248;
      switch ( *(_BYTE *)(a2 + 1088) )
      {
        case 0:
          v33 = a3;
          v23 = *(_QWORD *)(a2 + 248);
          v34 = *(_QWORD *)(a2 + 256);
          v35 = *(_QWORD *)(v6 + 264);
          v36 = *(_QWORD *)(v6 + 272);
          v37 = *(_QWORD *)(v6 + 280);
          v38 = *(_QWORD *)(v6 + 288);
          goto LABEL_10;
        case 1:
          JUMPOUT(0x140D009DELL);
        case 2:
          JUMPOUT(0x140D009ACLL);
        case 3:
          v298 = (_BYTE *)(a2 + 1088);
          v296 = a2 + 248;
          goto LABEL_18;
      }
    case 5LL:
      v298 = (_BYTE *)(a2 + 1088);
      v41 = a2 + 248;
      switch ( *(_BYTE *)(a2 + 1088) )
      {
        case 0:
          v300 = a3;
          v42 = a1;
          goto LABEL_13;
        case 1:
          v250 = a2 + 248;
          sub_1416C3400(&off_1417BB8F8, a2, a3, a4);
        case 2:
          v250 = a2 + 248;
          sub_1416C3420(&off_1417BB8F8, a2, a3, a4);
        case 3:
          v296 = a2 + 248;
          goto LABEL_25;
      }
  }
}