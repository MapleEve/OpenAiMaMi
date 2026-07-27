// module: codexmate_lib/core/relay/manager
// addr: 0x140cd00d0
// name: sub_140CD00D0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140CD00D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i v4; // xmm6
  __int128 v5; // xmm7
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  char v11; // bl
  __int64 v12; // r15
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm6
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r14
  _QWORD *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r8
  const __m128i *v23; // r10
  __int64 v24; // rax
  __int64 v25; // rax
  const __m128i *v26; // rdi
  __int64 v27; // r12
  __m128i *v28; // rsi
  unsigned __int64 v29; // rbx
  __m128i v30; // xmm6
  __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  unsigned __int8 v38; // r14
  __int64 v39; // r15
  __int64 v40; // r14
  __int128 v41; // xmm2
  char v42; // r9
  int v43; // ecx
  __int16 v44; // r8
  char v45; // r10
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  char v48; // dl
  __int64 v49; // rdi
  __int128 v50; // xmm3
  __int128 v51; // xmm4
  int v52; // ecx
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int128 v55; // xmm3
  int v56; // r14d
  unsigned int v57; // edi
  __int64 v58; // rbx
  __int64 v59; // r15
  unsigned __int64 v60; // rdi
  __int64 v61; // r12
  unsigned __int64 v62; // r14
  __int64 v63; // rdi
  __int64 v64; // r15
  __int64 v65; // r14
  char v66; // bl
  __int64 v67; // rdx
  __m128i v68; // xmm0
  __int64 v69; // rdx
  _BYTE *v70; // rdi
  __int64 v71; // rcx
  __int64 *v72; // r14
  __int64 v73; // rbx
  __m128i *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  char v77; // al
  __int64 v78; // r13
  __int64 v79; // rsi
  __int64 v80; // rdi
  int v81; // r13d
  __int64 v82; // rdx
  __int64 v83; // r12
  __int64 v84; // rax
  __int64 v85; // rcx
  char v86; // r14
  char v87; // r15
  __int64 v88; // r12
  __int64 v89; // rax
  __int64 v90; // rdx
  PVOID v91; // rcx
  char v92; // al
  __int64 v93; // r15
  __int64 v94; // rsi
  __int64 v95; // r14
  __int64 v96; // rdi
  __int64 v97; // rbx
  int v98; // ebx
  int v99; // edi
  int v100; // edx
  int v101; // ecx
  unsigned int v102; // ecx
  _QWORD *v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // rcx
  int v106; // r13d
  unsigned int v107; // edi
  __int64 v108; // rbx
  char *v109; // r15
  char v110; // al
  __int64 v111; // rdi
  __int64 v112; // r13
  _QWORD *v113; // r15
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  int v117; // r14d
  unsigned int v118; // edi
  __int64 v119; // rbx
  __int64 v120; // rdi
  __int64 v121; // rdx
  __m128i v122; // xmm0
  __int64 v123; // r14
  __m128i v124; // xmm0
  __int64 v125; // rcx
  __m128i v126; // xmm0
  __int64 v127; // r8
  __int64 *v128; // rdi
  int v129; // r12d
  unsigned int v130; // r15d
  __int64 v131; // rbx
  __int64 v132; // rdx
  __m128i v133; // xmm0
  char v134; // cl
  char result; // al
  unsigned __int64 v136; // r14
  __int64 v137; // xmm0_8
  __int64 v138; // rbx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rbx
  const __m128i *v142; // rcx
  const __m128i *v143; // r15
  __int64 v144; // rdi
  __int64 v145; // rdx
  int v146; // r14d
  unsigned int v147; // edi
  __int64 v148; // rbx
  char *v149; // r15
  char v150; // al
  unsigned int v151; // eax
  int v152; // eax
  __int64 v153; // [rsp+30h] [rbp-50h] BYREF
  char v154; // [rsp+38h] [rbp-48h]
  int v155; // [rsp+39h] [rbp-47h]
  __int16 v156; // [rsp+3Dh] [rbp-43h]
  char v157; // [rsp+3Fh] [rbp-41h]
  __m128i v158; // [rsp+40h] [rbp-40h]
  __int64 v159; // [rsp+50h] [rbp-30h]
  __m128i v160; // [rsp+58h] [rbp-28h]
  __int128 v161; // [rsp+68h] [rbp-18h]
  __int128 v162; // [rsp+78h] [rbp-8h]
  __int128 v163; // [rsp+88h] [rbp+8h]
  __m128i v164; // [rsp+98h] [rbp+18h]
  __m128i v165; // [rsp+A8h] [rbp+28h]
  __int64 v166; // [rsp+B8h] [rbp+38h]
  __m128i v167; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v168; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v169; // [rsp+E0h] [rbp+60h]
  __int128 v170; // [rsp+F0h] [rbp+70h]
  __int128 v171; // [rsp+100h] [rbp+80h]
  __m128i v172; // [rsp+110h] [rbp+90h]
  __m128i v173; // [rsp+120h] [rbp+A0h]
  __int64 v174; // [rsp+130h] [rbp+B0h]
  __int64 v175; // [rsp+140h] [rbp+C0h] BYREF
  char v176; // [rsp+148h] [rbp+C8h]
  int v177; // [rsp+149h] [rbp+C9h]
  __int16 v178; // [rsp+14Dh] [rbp+CDh]
  char v179; // [rsp+14Fh] [rbp+CFh]
  __m128i v180; // [rsp+150h] [rbp+D0h]
  __int64 v181; // [rsp+160h] [rbp+E0h]
  __int64 v182; // [rsp+168h] [rbp+E8h]
  __int128 v183; // [rsp+170h] [rbp+F0h]
  __m128i v184; // [rsp+180h] [rbp+100h] BYREF
  __int64 v185; // [rsp+190h] [rbp+110h]
  __int64 v186; // [rsp+198h] [rbp+118h] BYREF
  char v187; // [rsp+1A0h] [rbp+120h]
  int v188; // [rsp+1A1h] [rbp+121h]
  __int16 v189; // [rsp+1A5h] [rbp+125h]
  char v190; // [rsp+1A7h] [rbp+127h]
  __m128i v191; // [rsp+1A8h] [rbp+128h]
  __int64 v192; // [rsp+1B8h] [rbp+138h]
  __m128i v193; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v194; // [rsp+1D0h] [rbp+150h]
  __int128 v195; // [rsp+1E0h] [rbp+160h]
  __int128 v196; // [rsp+1F0h] [rbp+170h]
  __m128i v197; // [rsp+200h] [rbp+180h]
  __m128i v198; // [rsp+210h] [rbp+190h]
  __int64 v199; // [rsp+220h] [rbp+1A0h]
  __m128i v200; // [rsp+230h] [rbp+1B0h]
  __int64 v201; // [rsp+240h] [rbp+1C0h]
  __int64 v202; // [rsp+260h] [rbp+1E0h]
  __int64 v203; // [rsp+268h] [rbp+1E8h]
  __m128i v204; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v205; // [rsp+280h] [rbp+200h]
  __int128 v206; // [rsp+290h] [rbp+210h]
  __int128 v207; // [rsp+2A0h] [rbp+220h]
  __m128i v208; // [rsp+2B0h] [rbp+230h]
  __m128i v209; // [rsp+2C0h] [rbp+240h]
  __int64 v210; // [rsp+2D0h] [rbp+250h]
  __int64 v211; // [rsp+2D8h] [rbp+258h]
  __int64 v212; // [rsp+2E0h] [rbp+260h]
  __int64 v213; // [rsp+2E8h] [rbp+268h]
  __m128i v214; // [rsp+2F0h] [rbp+270h] BYREF
  __m256i v215; // [rsp+300h] [rbp+280h] BYREF
  __m256i v216; // [rsp+320h] [rbp+2A0h]
  __int128 v217; // [rsp+340h] [rbp+2C0h]
  __int128 v218; // [rsp+350h] [rbp+2D0h]
  __m128i v219; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v220; // [rsp+370h] [rbp+2F0h]
  __int128 v221; // [rsp+378h] [rbp+2F8h]
  __m128i v222; // [rsp+388h] [rbp+308h]
  __int64 v223; // [rsp+398h] [rbp+318h]
  __int64 v224; // [rsp+3A0h] [rbp+320h]
  __int64 v225; // [rsp+3A8h] [rbp+328h]
  __int64 v226; // [rsp+3B0h] [rbp+330h]
  __int64 v227; // [rsp+3B8h] [rbp+338h]
  __int64 v228; // [rsp+3C0h] [rbp+340h]
  __int64 v229; // [rsp+3C8h] [rbp+348h]
  __int64 v230; // [rsp+3D0h] [rbp+350h]
  __int64 v231; // [rsp+3D8h] [rbp+358h]
  __int64 v232; // [rsp+3E0h] [rbp+360h]
  __int64 v233; // [rsp+3E8h] [rbp+368h]
  __m128i v234; // [rsp+3F0h] [rbp+370h]
  __int64 v235; // [rsp+400h] [rbp+380h]
  __int32 v236; // [rsp+408h] [rbp+388h]
  int v237; // [rsp+410h] [rbp+390h]
  char v238; // [rsp+414h] [rbp+394h]
  char v239; // [rsp+415h] [rbp+395h]
  __int64 v240; // [rsp+420h] [rbp+3A0h]
  __int64 v241; // [rsp+428h] [rbp+3A8h]
  __int64 *v242; // [rsp+430h] [rbp+3B0h]
  __int64 v243; // [rsp+438h] [rbp+3B8h]
  __int64 v244; // [rsp+440h] [rbp+3C0h]
  _BYTE *v245; // [rsp+448h] [rbp+3C8h]
  _BYTE v246[104]; // [rsp+450h] [rbp+3D0h] BYREF
  __m128i v247; // [rsp+4B8h] [rbp+438h]
  __m256i v248[2]; // [rsp+4C8h] [rbp+448h] BYREF
  __int128 v249; // [rsp+508h] [rbp+488h]
  __int128 v250; // [rsp+518h] [rbp+498h]
  __m128i v251; // [rsp+528h] [rbp+4A8h]
  _BYTE v252[24]; // [rsp+5C0h] [rbp+540h] BYREF
  _BYTE v253[7]; // [rsp+5E0h] [rbp+560h]
  const __m128i *v254; // [rsp+5E8h] [rbp+568h]
  __int64 v255; // [rsp+5F0h] [rbp+570h]
  __int64 v256; // [rsp+5F8h] [rbp+578h]
  __m128i v257; // [rsp+600h] [rbp+580h] BYREF
  __m128i v258; // [rsp+610h] [rbp+590h] BYREF
  __int128 v259; // [rsp+620h] [rbp+5A0h]
  __int128 v260; // [rsp+630h] [rbp+5B0h]
  __int128 v261; // [rsp+640h] [rbp+5C0h] BYREF
  __m128i v262; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v263; // [rsp+660h] [rbp+5E0h]
  __int64 v264; // [rsp+668h] [rbp+5E8h]
  __int64 v265; // [rsp+670h] [rbp+5F0h]
  __int128 v266; // [rsp+678h] [rbp+5F8h]
  void *v267; // [rsp+688h] [rbp+608h]
  __int64 v268; // [rsp+690h] [rbp+610h]
  char v269; // [rsp+698h] [rbp+618h]
  _DWORD v270[3]; // [rsp+699h] [rbp+619h]
  __int64 *v271; // [rsp+6A8h] [rbp+628h]
  __int64 v272; // [rsp+6B0h] [rbp+630h]
  __int64 v273; // [rsp+6B8h] [rbp+638h]
  __m128i v274; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v275; // [rsp+6D0h] [rbp+650h]
  __int64 v276; // [rsp+6D8h] [rbp+658h]
  __int64 v277; // [rsp+6E0h] [rbp+660h]
  __int64 v278; // [rsp+6E8h] [rbp+668h]
  __int64 v279; // [rsp+6F0h] [rbp+670h]
  _BYTE v280[7]; // [rsp+6F8h] [rbp+678h]
  __int64 v281; // [rsp+700h] [rbp+680h]
  _DWORD v282[2]; // [rsp+70Ch] [rbp+68Ch]
  int v283; // [rsp+714h] [rbp+694h]
  PVOID Address; // [rsp+718h] [rbp+698h]
  __int64 v285; // [rsp+720h] [rbp+6A0h]
  _QWORD *v286; // [rsp+728h] [rbp+6A8h]
  __int64 v287; // [rsp+730h] [rbp+6B0h]
  __int64 v288; // [rsp+738h] [rbp+6B8h]
  char v289; // [rsp+747h] [rbp+6C7h] BYREF
  __int64 v290; // [rsp+748h] [rbp+6C8h]
  const __m128i *v291; // [rsp+750h] [rbp+6D0h]
  char v292; // [rsp+75Fh] [rbp+6DFh]
  __int64 v293; // [rsp+760h] [rbp+6E0h]
  __int64 v294; // [rsp+768h] [rbp+6E8h]
  __int64 v295; // [rsp+770h] [rbp+6F0h]
  __int64 v296; // [rsp+778h] [rbp+6F8h]
  char v297; // [rsp+786h] [rbp+706h]
  char v298; // [rsp+787h] [rbp+707h]
  __int64 v299; // [rsp+788h] [rbp+708h]

  v299 = -2;
  v7 = a1;
  v8 = *(unsigned __int8 *)(a1 + 11072);
  v296 = a1;
  switch ( v8 )
  {
    case 0LL:
      *(_WORD *)(a1 + 11073) = 257;
      *(_BYTE *)(a1 + 11075) = 1;
      v9 = a1 + 5728;
      sub_141684120(a1 + 5728, a1 + 392, 5336);
      switch ( *(_BYTE *)(v7 + 11056) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_186;
        case 2:
          goto LABEL_185;
        case 3:
          goto LABEL_9;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v9 = a1 + 5728;
      switch ( *(_BYTE *)(a1 + 11056) )
      {
        case 0:
LABEL_4:
          *(_QWORD *)&v246[48] = 0;
          *(_QWORD *)v246 = aTestRelayProvi;
          *(_QWORD *)&v246[8] = 26;
          *(_QWORD *)&v246[16] = aManager_1;
          *(_QWORD *)&v246[24] = 7;
          v293 = v9;
          *(_QWORD *)&v246[32] = v9;
          *(_QWORD *)&v246[40] = v7 + 6248;
          v10 = sub_140004B10((volatile void *)(*(_QWORD *)(v7 + 6240) + 16LL));
          v291 = (const __m128i *)(v7 + 6248);
          if ( v10 )
            goto LABEL_5;
          sub_1416850A0(&v214, v246, &v246[16]);
          v11 = v214.m128i_i8[0];
          if ( v214.m128i_i8[0] != -1 )
            goto LABEL_18;
          v10 = v214.m128i_i64[1];
LABEL_5:
          *(_QWORD *)&v246[48] = 0;
          *(_QWORD *)v246 = aTestRelayProvi;
          *(_QWORD *)&v246[8] = 26;
          *(_QWORD *)&v246[16] = aProviderid_1;
          *(_QWORD *)&v246[24] = 10;
          *(_QWORD *)&v246[32] = v293;
          *(_QWORD *)&v246[40] = v7 + 6248;
          sub_1409757B0(&v214, v246);
          v11 = v214.m128i_i8[0];
          if ( v214.m128i_i8[0] != -1 )
          {
LABEL_18:
            v13 = ((unsigned __int64)((v214.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v214.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v214.m128i_u32 + 1);
            v14 = _mm_loadu_si128((const __m128i *)&v214.m128i_u64[1]);
            v15 = v215.m256i_i64[1];
LABEL_19:
            v34 = v293;
            goto LABEL_20;
          }
          v295 = v214.m128i_i64[1];
          v12 = v215.m256i_i64[1];
          v294 = v215.m256i_i64[0];
          *(_QWORD *)&v246[48] = 0;
          *(_QWORD *)v246 = aTestRelayProvi;
          *(_QWORD *)&v246[8] = 26;
          *(_QWORD *)&v246[16] = aModel_8;
          *(_QWORD *)&v246[24] = 5;
          *(_QWORD *)&v246[32] = v293;
          *(_QWORD *)&v246[40] = v7 + 6248;
          sub_140973410(&v214, v246);
          v11 = v214.m128i_i8[0];
          if ( v214.m128i_i8[0] != -1 )
          {
            v13 = ((unsigned __int64)((v214.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v214.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v214.m128i_u32 + 1);
            v14 = _mm_loadu_si128((const __m128i *)&v214.m128i_u64[1]);
            v15 = v215.m256i_i64[1];
            if ( v295 )
              sub_140001660(v294, v295, 1);
            goto LABEL_19;
          }
          v286 = (_QWORD *)v214.m128i_i64[1];
          v61 = v215.m256i_i64[1];
          v288 = v215.m256i_i64[0];
          *(_QWORD *)&v246[48] = 0;
          *(_QWORD *)v246 = aTestRelayProvi;
          *(_QWORD *)&v246[8] = 26;
          *(_QWORD *)&v246[16] = aOnevent_0;
          *(_QWORD *)&v246[24] = 7;
          *(_QWORD *)&v246[32] = v293;
          *(_QWORD *)&v246[40] = v7 + 6248;
          sub_1409795C0(&v214, v246);
          v11 = v214.m128i_i8[0];
          if ( v214.m128i_i8[0] == -1 )
          {
            v89 = v214.m128i_i64[1];
            v7 = v296;
            v90 = v296 + 6272;
            *(_QWORD *)(v296 + 6320) = v10;
            *(_QWORD *)(v7 + 6272) = v295;
            *(_QWORD *)(v7 + 6280) = v294;
            *(_QWORD *)(v7 + 6288) = v12;
            *(_QWORD *)(v7 + 6296) = v286;
            *(_QWORD *)(v7 + 6304) = v288;
            *(_QWORD *)(v7 + 6312) = v61;
            *(_QWORD *)(v7 + 6328) = v89;
            *(_BYTE *)(v7 + 7856) = 0;
            v18 = v7 + 7864;
            sub_141684120(v7 + 7864, v90, 1592);
            v286 = (_QWORD *)(v7 + 11048);
            *(_BYTE *)(v7 + 11048) = 0;
            v9 = v293;
LABEL_10:
            v19 = v7 + 9456;
            sub_141684120(v7 + 9456, v18, 1592);
            switch ( *(_BYTE *)(v7 + 11040) )
            {
              case 0:
                goto LABEL_12;
              case 1:
                goto LABEL_188;
              case 2:
                goto LABEL_187;
              case 3:
                goto LABEL_13;
            }
          }
          v62 = (unsigned __int64)((v214.m128i_u8[7] << 16)
                                 | (unsigned int)*(unsigned __int16 *)((char *)&v214.m128i_u16[2] + 1)) << 32;
          v63 = *(unsigned int *)((char *)v214.m128i_u32 + 1);
          v14 = _mm_loadu_si128((const __m128i *)&v214.m128i_u64[1]);
          v15 = v215.m256i_i64[1];
          v34 = v293;
          if ( (unsigned __int64)v286 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v64 = v293;
            sub_140001660(v288, v286, 1);
            v34 = v64;
          }
          v13 = v62 | v63;
          if ( v295 )
          {
            v65 = v34;
            sub_140001660(v294, v295, 1);
            v34 = v65;
          }
LABEL_20:
          sub_140BF0DE0(v34);
          if ( v291->m128i_i64[0] == -1 )
          {
            v38 = 1;
            v39 = v296;
            goto LABEL_160;
          }
          v286 = (_QWORD *)(v296 + 6256);
          v35 = *(_QWORD *)(v296 + 6256);
          v294 = *(_QWORD *)(v296 + 6264);
          v295 = 0;
          v288 = v35;
          while ( v294 != v295 )
          {
            ++v295;
            v36 = v35 + 96;
            sub_1402C7520();
            v35 = v36;
          }
          v37 = v291->m128i_i64[0];
          v38 = 1;
          v39 = v296;
          if ( !v291->m128i_i64[0] )
            goto LABEL_160;
          goto LABEL_159;
        case 1:
LABEL_186:
          v293 = v9;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_185:
          v293 = v9;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_9;
      }
  }
LABEL_9:
  v16 = v7 + 11048;
  v17 = *(unsigned __int8 *)(v7 + 11048);
  v18 = v7 + 7864;
  v286 = (_QWORD *)(v7 + 11048);
  switch ( v17 )
  {
    case 0LL:
      goto LABEL_10;
    case 1LL:
      v293 = v9;
      v241 = v7 + 11048;
      v240 = v7 + 7864;
      sub_1416C3400(&off_1417B7B80, v16, a3, a4);
    case 2LL:
      v293 = v9;
      v241 = v7 + 11048;
      v240 = v7 + 7864;
      sub_1416C3420(&off_1417B7B80, v16, a3, a4);
    case 3LL:
      v19 = v7 + 9456;
      switch ( *(_BYTE *)(v7 + 11040) )
      {
        case 0:
LABEL_12:
          v20 = *(_QWORD **)(v7 + 9504);
          *(_QWORD *)(v7 + 9520) = v20;
          *(_OWORD *)(v7 + 9528) = *(_OWORD *)v19;
          v21 = *(_QWORD *)(v19 + 16);
          *(_QWORD *)(v7 + 9544) = v21;
          v295 = *(_QWORD *)(v7 + 9480);
          v294 = *(_QWORD *)(v7 + 9488);
          *(_QWORD *)(v7 + 9552) = *(_QWORD *)(v7 + 9512);
          v22 = *(_QWORD *)(v7 + 9536);
          *(_BYTE *)(v7 + 11041) = 0;
          v23 = (const __m128i *)(v7 + 9560);
          *(_OWORD *)(v7 + 9560) = *(_OWORD *)(v7 + 9480);
          *(_QWORD *)(v7 + 9576) = *(_QWORD *)(v7 + 9496);
          *(_QWORD *)(v7 + 9584) = v20;
          *(_QWORD *)(v7 + 9592) = v22;
          *(_QWORD *)(v7 + 9600) = v21;
          *(_QWORD *)(v7 + 9608) = v7 + 9552;
          *(_QWORD *)(v7 + 9616) = &off_1417BB000;
          *(_BYTE *)(v7 + 11032) = 0;
          v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v7 + 9552), (__m128i)(unsigned __int64)&off_1417BB000);
LABEL_15:
          v288 = v19;
          v278 = v18;
          v293 = v9;
          *(_QWORD *)(v7 + 9624) = v20;
          *(_QWORD *)(v7 + 9632) = v22;
          *(_QWORD *)(v7 + 9640) = v21;
          *(_BYTE *)(v7 + 11033) = 1;
          *(__m128i *)(v7 + 9648) = _mm_loadu_si128(v23);
          *(_QWORD *)(v7 + 9664) = v23[1].m128i_i64[0];
          v25 = v20[2];
          v26 = v23;
          if ( *(_QWORD *)(v25 + 16) != -1 )
          {
            v256 = v294;
            v255 = v295;
            v254 = v23;
            sub_14149C500(&v246[8], v25 + 16);
            v27 = *(_QWORD *)&v246[8];
            LOBYTE(v28) = v246[16];
            v29 = ((unsigned __int64)((v246[23] << 16) | (unsigned int)*(unsigned __int16 *)&v246[21]) << 32)
                | *(unsigned int *)&v246[17];
            v30 = _mm_loadu_si128((const __m128i *)&v246[24]);
            v31 = *(_QWORD *)&v246[40];
            v290 = *(_QWORD *)&v246[48];
            v5 = *(_OWORD *)&v246[56];
            Address = *(PVOID *)&v246[72];
            v287 = *(_QWORD *)&v246[80];
            LOBYTE(v285) = v246[88];
            v282[0] = *(_DWORD *)&v246[89];
            *(_DWORD *)((char *)v282 + 3) = *(_DWORD *)&v246[92];
            v32 = 9;
            v33 = v296;
LABEL_115:
            v115 = *(_QWORD *)(v33 + 9648);
            if ( v115 != -1 && *(_BYTE *)(v33 + 11033) == 1 && v115 )
              sub_140001660(*(_QWORD *)(v33 + 9656), v115, 1);
            goto LABEL_119;
          }
          v256 = v294;
          v255 = v295;
          v254 = v23;
          sub_14084BAA0(v246, v20, v22, v21);
          v7 = v296;
          v40 = v296 + 9632;
          if ( *(_QWORD *)v246 == -1 )
          {
            *(_QWORD *)&v261 = v296 + 9632;
            *((_QWORD *)&v261 + 1) = sub_14041F680;
            v256 = v294;
            v255 = v295;
            v254 = v26;
            sub_14149C0F0(&v214.m128i_u64[1], &unk_1417B9DE8, &v261);
            v27 = v214.m128i_i64[1];
            LOBYTE(v28) = v215.m256i_i8[0];
            v29 = ((unsigned __int64)((v215.m256i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v215.m256i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v215.m256i_u32 + 1);
            v30 = _mm_loadu_si128((const __m128i *)&v215.m256i_u64[1]);
            v31 = v215.m256i_i64[3];
            v290 = v216.m256i_i64[0];
            v5 = *(_OWORD *)&v216.m256i_u64[1];
            Address = (PVOID)v216.m256i_i64[3];
            v287 = v217;
            LOBYTE(v285) = BYTE8(v217);
            v257.m128i_i32[0] = *(_DWORD *)((char *)&v217 + 9);
            *(__int32 *)((char *)v257.m128i_i32 + 3) = HIDWORD(v217);
            *(_DWORD *)&v280[3] = HIDWORD(v217);
            *(_DWORD *)v280 = v257.m128i_i32[0];
            *(_DWORD *)((char *)v282 + 3) = *(_DWORD *)&v280[3];
            v282[0] = v257.m128i_i32[0];
            v32 = 8;
            v33 = v296;
            goto LABEL_115;
          }
          v291 = v26;
          v41 = *(_OWORD *)&v246[8];
          v42 = v246[24];
          v43 = *(_DWORD *)&v246[25];
          v44 = *(_WORD *)&v246[29];
          v45 = v246[31];
          v46 = *(_OWORD *)&v246[48];
          v47 = *(_OWORD *)&v246[80];
          v48 = v246[96];
          v257.m128i_i32[0] = *(_DWORD *)&v246[97];
          *(__int32 *)((char *)v257.m128i_i32 + 3) = *(_DWORD *)&v246[100];
          v219 = v251;
          v218 = v250;
          v217 = v249;
          v216 = v248[1];
          v215 = v248[0];
          v214 = v247;
          v49 = v296 + 9672;
          v50 = *(_OWORD *)&v246[32];
          v51 = *(_OWORD *)&v246[64];
          *(_DWORD *)&v280[3] = *(_DWORD *)&v246[100];
          *(_DWORD *)v280 = v257.m128i_i32[0];
          *(_QWORD *)(v296 + 9672) = *(_QWORD *)v246;
          *(_OWORD *)(v7 + 9680) = v41;
          *(_BYTE *)(v7 + 9696) = v42;
          *(_BYTE *)(v7 + 9703) = v45;
          *(_WORD *)(v7 + 9701) = v44;
          *(_DWORD *)(v7 + 9697) = v43;
          *(_OWORD *)(v7 + 9704) = v50;
          *(_OWORD *)(v7 + 9720) = v46;
          *(_OWORD *)(v7 + 9736) = v51;
          *(_OWORD *)(v7 + 9752) = v47;
          *(_BYTE *)(v7 + 9768) = v48;
          v52 = *(_DWORD *)&v280[3];
          *(_DWORD *)(v7 + 9769) = *(_DWORD *)v280;
          *(_DWORD *)(v7 + 9772) = v52;
          v53 = *(_OWORD *)v215.m256i_i8;
          v54 = *(_OWORD *)&v215.m256i_u64[2];
          v55 = *(_OWORD *)v216.m256i_i8;
          *(__m128i *)(v7 + 9776) = v214;
          *(_OWORD *)(v7 + 9792) = v53;
          *(_OWORD *)(v7 + 9808) = v54;
          *(_OWORD *)(v7 + 9824) = v55;
          *(_OWORD *)(v7 + 9840) = *(_OWORD *)&v216.m256i_u64[2];
          *(_OWORD *)(v7 + 9856) = v217;
          *(_OWORD *)(v7 + 9872) = v218;
          *(__m128i *)(v7 + 9888) = _mm_load_si128(&v219);
          if ( *(_QWORD *)(v7 + 9648) == -1 )
            goto LABEL_49;
          *(_BYTE *)(v7 + 11033) = 0;
          v258.m128i_i64[0] = *(_QWORD *)(v7 + 9664);
          v257 = _mm_loadu_si128((const __m128i *)(v7 + 9648));
          sub_140AC8E60(v246, v7 + 9672);
          *(_QWORD *)&v261 = *(_QWORD *)&v246[8];
          *((_QWORD *)&v261 + 1) = *(_QWORD *)&v246[8];
          v262.m128i_i64[0] = *(_QWORD *)v246;
          v262.m128i_i64[1] = *(_QWORD *)&v246[8] + 96LL * *(_QWORD *)&v246[16];
          sub_1402D8C00(v246, &v261, &v257);
          if ( *(_DWORD *)v246 == 2 )
          {
            v214.m128i_i64[0] = (__int64)&v257;
            v214.m128i_i64[1] = (__int64)sub_1400015F0;
            v215.m256i_i64[0] = v40;
            v215.m256i_i64[1] = (__int64)sub_14041F680;
            sub_14149C0F0(&v246[8], &unk_1417B9E05, &v214);
            v27 = *(_QWORD *)&v246[8];
            LOBYTE(v28) = v246[16];
            v56 = v246[23];
            v57 = *(unsigned __int16 *)&v246[21];
            v58 = *(unsigned int *)&v246[17];
            v30 = _mm_loadu_si128((const __m128i *)&v246[24]);
            v31 = *(_QWORD *)&v246[40];
            v59 = *(_QWORD *)&v246[48];
            v5 = *(_OWORD *)&v246[56];
            Address = *(PVOID *)&v246[72];
            v287 = *(_QWORD *)&v246[80];
            LOBYTE(v285) = v246[88];
            v274.m128i_i32[0] = *(_DWORD *)&v246[89];
            *(__int32 *)((char *)v274.m128i_i32 + 3) = *(_DWORD *)&v246[92];
            *(_DWORD *)v252 = v274.m128i_i32[0];
            *(_DWORD *)&v252[3] = *(_DWORD *)&v246[92];
            *(_DWORD *)((char *)v282 + 3) = *(_DWORD *)&v246[92];
            v282[0] = *(_DWORD *)v252;
            sub_1402BB160(&v261);
            v290 = v59;
            v60 = (unsigned __int64)((v56 << 16) | v57) << 32;
            if ( v257.m128i_i64[0] )
              sub_140001660(v257.m128i_i64[1], v257.m128i_i64[0], 1);
            v29 = v60 | v58;
            v32 = 10;
            v33 = v296;
LABEL_114:
            sub_140018960(v33 + 9672);
            v26 = v291;
            goto LABEL_115;
          }
          v279 = *(_QWORD *)&v246[24];
          v287 = *(_QWORD *)&v246[16];
          v5 = *(_OWORD *)&v246[24];
          v290 = *(_QWORD *)&v246[40];
          v285 = *(_QWORD *)&v246[48];
          v281 = *(_QWORD *)&v246[72];
          Address = *(PVOID *)&v246[64];
          v66 = v246[88];
          v274.m128i_i32[0] = *(_DWORD *)&v246[89];
          *(__int32 *)((char *)v274.m128i_i32 + 3) = *(_DWORD *)&v246[92];
          *(_DWORD *)v252 = v274.m128i_i32[0];
          *(_DWORD *)&v252[3] = *(_DWORD *)&v246[92];
          sub_1402BB160(&v261);
          v7 = v296;
          v67 = *(_QWORD *)(v296 + 9768);
          if ( v67 )
            sub_140001660(*(_QWORD *)(v296 + 9776), v67, 1);
          *(_QWORD *)(v7 + 9768) = v287;
          *(_OWORD *)(v7 + 9776) = v5;
          *(_BYTE *)(v7 + 9902) = v66;
          if ( (char *)Address - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            sub_140001660(v281, Address, 1);
          if ( v290 )
            sub_140001660(v285, v290, 1);
          if ( v257.m128i_i64[0] )
            sub_140001660(v257.m128i_i64[1], v257.m128i_i64[0], 1);
LABEL_49:
          *(__m128i *)(v7 + 10896) = v4;
          *(_QWORD *)(v7 + 11016) = v49;
          *(_BYTE *)(v7 + 11026) = 0;
LABEL_50:
          v290 = v7 + 9904;
          sub_140CF8FE0(v246, v7 + 9904, a2);
          if ( *(_QWORD *)v246 == -1 )
          {
            v78 = v296;
            *(_BYTE *)(v296 + 11032) = 3;
            *(_BYTE *)(v78 + 11040) = 3;
            goto LABEL_143;
          }
          v68 = _mm_loadu_si128((const __m128i *)v246);
          v260 = *(_OWORD *)&v246[48];
          v259 = *(_OWORD *)&v246[32];
          v258 = *(__m128i *)&v246[16];
          v257 = v68;
          v273 = v294;
          v272 = v295;
          v271 = (__int64 *)v291;
          sub_140BEE1A0(v290);
          v69 = *(_QWORD *)(*(_QWORD *)(v296 + 9624) + 32LL);
          v70 = (_BYTE *)(v69 + 16);
          LOBYTE(v71) = 1;
          v281 = v69;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v69 + 16), 1, 0) )
          {
            v298 = 1;
            sub_1416C15B0((volatile void *)(v69 + 16));
          }
          v72 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v298 = 1;
            v151 = sub_1416C2250(v71, v69);
            v73 = v151;
            LOBYTE(v73) = v151 ^ 1;
          }
          else
          {
            v73 = 0;
          }
          if ( *(_BYTE *)(v281 + 17) )
          {
            nullsub_1(v71);
            v74 = (__m128i *)sub_140001650(40, 1);
            if ( !v74 )
            {
              v283 = v73;
              v245 = v70;
              sub_1416C2D4B(1, 40);
            }
            v28 = v74;
            qmemcpy(&v74[1], "nsition lock is poisoned", 24);
            *v74 = _mm_loadu_si128((const __m128i *)&xmmword_1417B9E2C);
            if ( !(_BYTE)v73 )
            {
              if ( 2 * *v72 )
              {
                v298 = 1;
                if ( !(unsigned __int8)sub_1416C2250(v76, v75) )
                  *(_BYTE *)(v281 + 17) = 1;
              }
            }
            v77 = *v70;
            *v70 = 0;
            if ( v77 == 2 )
            {
              v298 = 1;
              WakeByAddressSingle(v70);
            }
            v29 = (unsigned __int64)v28 >> 8;
            v27 = 40;
            v30 = (__m128i)0x28uLL;
            v32 = 10;
LABEL_104:
            if ( v258.m128i_i64[1] != -1 && v258.m128i_i64[1] )
              sub_140001660(v259, v258.m128i_i64[1], 1);
            v111 = v257.m128i_i64[1];
            v112 = v258.m128i_i64[0];
            if ( v258.m128i_i64[0] )
            {
              v113 = (_QWORD *)(v257.m128i_i64[1] + 8);
              do
              {
                v114 = *(v113 - 1);
                if ( v114 )
                  sub_140001660(*v113, v114, 1);
                v113 += 3;
                --v112;
              }
              while ( v112 );
            }
            v33 = v296;
            v31 = v279;
            if ( v257.m128i_i64[0] )
              sub_140001660(v111, 24 * v257.m128i_i64[0], 8);
            goto LABEL_114;
          }
          v283 = v73;
          v245 = v70;
          v79 = *(_QWORD *)(*(_QWORD *)(v296 + 9624) + 8LL);
          v80 = v79 + 16;
          LOBYTE(v71) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v79 + 16), 1, 0) )
            sub_1416C15B0((volatile void *)(v79 + 16));
          if ( !(2 * *v72) )
          {
            LODWORD(v290) = 0;
            Address = (PVOID)(v79 + 16);
            if ( !*(_BYTE *)(v79 + 17) )
              goto LABEL_67;
LABEL_174:
            *(_QWORD *)v246 = Address;
            v246[8] = v290;
            sub_1416C3060(
              (unsigned int)aRelayStatePois,
              20,
              (unsigned int)v246,
              (unsigned int)&off_1417BC160,
              (__int64)&off_1417BA820);
          }
          v152 = sub_1416C2250(v71, v69);
          LOBYTE(v152) = v152 ^ 1;
          LODWORD(v290) = v152;
          Address = (PVOID)(v79 + 16);
          if ( *(_BYTE *)(v79 + 17) )
            goto LABEL_174;
LABEL_67:
          v81 = *(_DWORD *)(v79 + 312);
          sub_140331240(&v184);
          sub_14032C050(v246, v79 + 48);
          v201 = *(_QWORD *)&v246[16];
          v200 = _mm_loadu_si128((const __m128i *)v246);
          LOBYTE(v73) = *(_BYTE *)(v79 + 146);
          LOWORD(v80) = *(_WORD *)(v79 + 144);
          sub_14149C500(&v274, v79 + 72);
          sub_14149C500(&v261, v79 + 96);
          v83 = -1;
          v84 = -1;
          if ( *(_QWORD *)(v79 + 120) != -1 )
          {
            sub_14149C500(v246, v79 + 120);
            v84 = *(_QWORD *)v246;
            *(__m128i *)v252 = _mm_loadu_si128((const __m128i *)&v246[8]);
          }
          v246[74] = v73;
          *(_WORD *)&v246[72] = v80;
          *(__m128i *)v246 = v274;
          *(_QWORD *)&v246[16] = v275;
          *(_OWORD *)&v246[24] = v261;
          v85 = v262.m128i_i64[0];
          *(_QWORD *)&v246[40] = v262.m128i_i64[0];
          *(_QWORD *)&v246[48] = v84;
          *(__m128i *)&v246[56] = _mm_load_si128((const __m128i *)v252);
          v86 = *(_BYTE *)(v79 + 316);
          v87 = *(_BYTE *)(v79 + 317);
          if ( *(_QWORD *)(v79 + 152) != -1 )
          {
            v88 = *(_QWORD *)(v79 + 296);
            sub_14149C500(v252, v79 + 152);
            sub_14149C500(&v274, v79 + 176);
            if ( *(_QWORD *)(v79 + 200) == -1 )
            {
              v287 = -1;
            }
            else
            {
              sub_14149C500(&v261, v79 + 200);
              v211 = *((_QWORD *)&v261 + 1);
              v287 = v261;
              v202 = v262.m128i_i64[0];
            }
            if ( *(_QWORD *)(v79 + 224) == -1 )
            {
              v285 = -1;
            }
            else
            {
              sub_14149C500(&v261, v79 + 224);
              v212 = *((_QWORD *)&v261 + 1);
              v285 = v261;
              v203 = v262.m128i_i64[0];
            }
            v80 = -1;
            if ( *(_QWORD *)(v79 + 248) == -1 )
            {
              v279 = -1;
            }
            else
            {
              sub_14149C500(&v261, v79 + 248);
              v213 = *((_QWORD *)&v261 + 1);
              v279 = v261;
              v73 = v262.m128i_i64[0];
            }
            v4.m128i_i64[0] = *(_QWORD *)(v79 + 304);
            if ( *(_QWORD *)(v79 + 272) != -1 )
            {
              sub_14149C500(&v261, v79 + 272);
              v80 = v261;
              v167 = _mm_loadu_si128((const __m128i *)((char *)&v261 + 8));
            }
            v85 = v88;
            v83 = *(_QWORD *)v252;
            v261 = *(_OWORD *)&v252[8];
            v262 = _mm_loadu_si128(&v274);
            v263 = v275;
          }
          v237 = v81;
          v215.m256i_i64[0] = v185;
          v214 = v184;
          v215.m256i_i64[3] = v201;
          *(__m128i *)&v215.m256i_u64[1] = v200;
          v216 = *(__m256i *)v246;
          v217 = *(_OWORD *)&v246[32];
          v218 = *(_OWORD *)&v246[48];
          v219 = *(__m128i *)&v246[64];
          v238 = v86;
          v239 = v87;
          v220 = v83;
          v223 = v263;
          v221 = v261;
          v222 = v262;
          v224 = v287;
          v225 = v211;
          v226 = v202;
          v227 = v285;
          v228 = v212;
          v229 = v203;
          v230 = v279;
          v231 = v213;
          v232 = v73;
          v233 = v80;
          v234 = _mm_load_si128(&v167);
          v235 = v85;
          v236 = v4.m128i_i32[0];
          if ( !(_BYTE)v290 )
          {
            if ( 2 * *off_141EC90B8 )
            {
              v297 = 1;
              if ( !(unsigned __int8)sub_1416C2250(v85, v82) )
                *(_BYTE *)(v79 + 17) = 1;
            }
          }
          v91 = Address;
          v92 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v92 == 2 )
          {
            v297 = 1;
            WakeByAddressSingle(v91);
          }
          v93 = v296;
          if ( v215.m256i_i64[0] )
          {
            v94 = v214.m128i_i64[1];
            v95 = 232 * v215.m256i_i64[0];
            v96 = *(_QWORD *)(v296 + 9632);
            v97 = *(_QWORD *)(v296 + 9640);
            while ( *(_QWORD *)(v94 + 16) != v97 || (unsigned int)sub_1416847B0(*(_QWORD *)(v94 + 8), v96, v97) )
            {
              v94 += 232;
              v95 -= 232;
              if ( !v95 )
                goto LABEL_99;
            }
            v98 = BYTE8(v260);
            v99 = v260;
            if ( v258.m128i_i64[1] == -1 )
            {
              *(_QWORD *)v246 = -1;
            }
            else
            {
              v297 = 1;
              sub_14149C500(v246, &v258.m128i_u64[1]);
            }
            v292 = 1;
            sub_140FFA6E0(&v261);
            v100 = ((int)v261 >> 13) - 1;
            v101 = 0;
            if ( (int)v261 >> 13 <= 0 )
            {
              v102 = (1 - ((int)v261 >> 13)) / 0x190u + 1;
              v100 += 400 * v102;
              v101 = -146097 * v102;
            }
            v292 = 0;
            sub_140872DE0(
              v94,
              v98,
              v99,
              (unsigned int)v246,
              1000
            * (DWORD1(v261)
             + 86400LL
             * (int)(((v100 / 100) >> 2)
                   + ((1461 * v100) >> 2)
                   + v101
                   + (((unsigned int)v261 >> 4) & 0x1FF)
                   - v100 / 100
                   - 719163))
            + DWORD2(v261) / 0xF4240uLL);
            v93 = v296;
          }
LABEL_99:
          v103 = *(_QWORD **)(v93 + 9624);
          sub_141684120(v246, &v214, 296);
          v297 = 0;
          sub_1408582D0((__int64)&v261, v103, (__int64)v246);
          v32 = v261;
          if ( (_QWORD)v261 != -1 )
          {
            v27 = *((_QWORD *)&v261 + 1);
            LOBYTE(v28) = v262.m128i_i8[0];
            v106 = v262.m128i_u8[7];
            v107 = *(unsigned __int16 *)((char *)&v262.m128i_u16[2] + 1);
            v108 = *(unsigned int *)((char *)v262.m128i_u32 + 1);
            v30 = _mm_loadu_si128((const __m128i *)&v262.m128i_u64[1]);
            v279 = v264;
            v290 = v265;
            v5 = v266;
            LOBYTE(v285) = v269;
            v282[0] = v270[0];
            *(_DWORD *)((char *)v282 + 3) = *(_DWORD *)((char *)v270 + 3);
            v109 = (char *)(v281 + 16);
            Address = v267;
            v287 = v268;
            if ( !(_BYTE)v283 )
            {
              if ( 2 * *off_141EC90B8 )
              {
                v298 = 1;
                if ( !(unsigned __int8)sub_1416C2250(v267, v268) )
                  *(_BYTE *)(v281 + 17) = 1;
              }
            }
            v29 = ((unsigned __int64)((v106 << 16) | v107) << 32) | v108;
            v110 = *v109;
            *v109 = 0;
            if ( v110 == 2 )
            {
              v298 = 1;
              WakeByAddressSingle(v109);
            }
            goto LABEL_104;
          }
          v27 = v257.m128i_i64[0];
          LOBYTE(v28) = v257.m128i_i8[8];
          v146 = v257.m128i_u8[15];
          v147 = *(unsigned __int16 *)((char *)&v257.m128i_u16[6] + 1);
          v148 = *(unsigned int *)((char *)&v257.m128i_u32[2] + 1);
          v30 = _mm_load_si128(&v258);
          v290 = *((_QWORD *)&v259 + 1);
          v31 = v259;
          v5 = v260;
          v149 = (char *)(v281 + 16);
          if ( !(_BYTE)v283 )
          {
            if ( 2 * *off_141EC90B8 )
            {
              v298 = 0;
              if ( !(unsigned __int8)sub_1416C2250(v105, v104) )
                *(_BYTE *)(v281 + 17) = 1;
            }
          }
          v150 = *v149;
          *v149 = 0;
          if ( v150 == 2 )
          {
            v298 = 0;
            WakeByAddressSingle(v149);
          }
          v29 = ((unsigned __int64)((v146 << 16) | v147) << 32) | v148;
          v33 = v296;
          sub_140018960(v296 + 9672);
          v32 = -1;
          v26 = v291;
LABEL_119:
          *(_BYTE *)(v33 + 11033) = 0;
          *(_DWORD *)&v253[3] = *(_DWORD *)((char *)v282 + 3);
          *(_DWORD *)v253 = v282[0];
          *(_BYTE *)(v33 + 11032) = 1;
          if ( v26[92].m128i_i8[0] == 3 )
          {
            v291 = v26;
            sub_140BEE1A0((__int64)&v26[21].m128i_i64[1]);
            v128 = (__int64 *)v291;
            sub_140018960(&v291[7]);
            *((_BYTE *)v128 + 1473) = 0;
            v33 = v296;
            if ( (_DWORD)v32 != -1 )
            {
LABEL_125:
              *(_QWORD *)v246 = v32;
              *(_QWORD *)&v246[8] = v27;
              v246[16] = (_BYTE)v28;
              *(_DWORD *)&v246[17] = v29;
              v246[23] = BYTE6(v29);
              *(_WORD *)&v246[21] = WORD2(v29);
              *(__m128i *)&v246[24] = v30;
              *(_QWORD *)&v246[40] = v31;
              *(_QWORD *)&v246[48] = v290;
              *(_OWORD *)&v246[56] = v5;
              *(_QWORD *)&v246[72] = Address;
              *(_QWORD *)&v246[80] = v287;
              v246[88] = v285;
              *(_DWORD *)&v246[89] = *(_DWORD *)v253;
              *(_DWORD *)&v246[92] = *(_DWORD *)&v253[3];
              *(_QWORD *)&v261 = 0;
              *((_QWORD *)&v261 + 1) = 1;
              v262.m128i_i64[0] = 0;
              v215.m256i_i64[0] = 1610612768;
              v214.m128i_i64[0] = (__int64)&v261;
              v214.m128i_i64[1] = (__int64)&off_1417C41C0;
              if ( (unsigned __int8)sub_140B036A0(v246, &v214) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v289,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              LOBYTE(v28) = v261;
              v117 = BYTE7(v261);
              v118 = *(unsigned __int16 *)((char *)&v261 + 5);
              v119 = *(unsigned int *)((char *)&v261 + 1);
              v30 = _mm_loadu_si128((const __m128i *)((char *)&v261 + 8));
              v277 = v294;
              v276 = v295;
              sub_140BF2F60(v246);
              v29 = ((unsigned __int64)((v117 << 16) | v118) << 32) | v119;
              v33 = v296;
              goto LABEL_127;
            }
          }
          else
          {
            if ( !v26[92].m128i_i8[0] )
            {
              v116 = v26->m128i_i64[0];
              if ( v26->m128i_i64[0] != -1 )
              {
                if ( v116 )
                  sub_140001660(v26->m128i_i64[1], v116, 1);
              }
            }
            if ( (_DWORD)v32 != -1 )
              goto LABEL_125;
          }
          if ( v27 != -1 )
          {
            v181 = v31;
            v182 = v290;
            v183 = v5;
            v175 = v27;
            v176 = (char)v28;
            v177 = v29;
            v179 = BYTE6(v29);
            v178 = WORD2(v29);
            v180 = v30;
            v277 = v294;
            v276 = v295;
            sub_140ACE590(v246, &v175);
            v123 = *(_QWORD *)v246;
            LOBYTE(v28) = v246[8];
            v129 = v246[15];
            v130 = *(unsigned __int16 *)&v246[13];
            v131 = *(unsigned int *)&v246[9];
            v30 = _mm_loadu_si128((const __m128i *)&v246[16]);
            v120 = *(_QWORD *)&v246[32];
            v204 = *(__m128i *)&v246[40];
            v205 = *(_OWORD *)&v246[56];
            v206 = *(_OWORD *)&v246[72];
            v207 = *(_OWORD *)&v246[88];
            v208 = v247;
            v209 = _mm_loadu_si128((const __m128i *)v248);
            v210 = v248[0].m256i_i64[2];
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v296 + 9552)) )
            {
              v244 = v294;
              v243 = v295;
              sub_1405760F0((_QWORD *)(v296 + 9552));
            }
            v78 = v296;
            *(_BYTE *)(v296 + 11041) = 0;
            v132 = *(_QWORD *)(v78 + 9528);
            if ( v132 )
              sub_140001660(*(_QWORD *)(v78 + 9536), v132, 1);
            v199 = v210;
            v198 = v209;
            v197 = v208;
            v133 = _mm_load_si128(&v204);
            v196 = v207;
            v195 = v206;
            v194 = v205;
            v193 = v133;
            *(_BYTE *)(v78 + 11040) = 1;
            if ( v123 != -2 )
            {
              v29 = ((unsigned __int64)((v129 << 16) | v130) << 32) | v131;
              goto LABEL_132;
            }
LABEL_143:
            *(_BYTE *)(v78 + 11048) = 3;
            *(_BYTE *)(v78 + 11056) = 3;
            v134 = 3;
            result = 1;
            goto LABEL_161;
          }
LABEL_127:
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v33 + 9552)) )
          {
            v244 = v294;
            v243 = v295;
            sub_1405760F0((_QWORD *)(v296 + 9552));
          }
          v120 = v296;
          *(_BYTE *)(v296 + 11041) = 0;
          v121 = *(_QWORD *)(v120 + 9528);
          if ( v121 )
            sub_140001660(*(_QWORD *)(v120 + 9536), v121, 1);
          v199 = v210;
          v198 = v209;
          v197 = v208;
          v122 = _mm_load_si128(&v204);
          v196 = v207;
          v195 = v206;
          v194 = v205;
          v193 = v122;
          *(_BYTE *)(v120 + 11040) = 1;
          v123 = -1;
LABEL_132:
          v174 = v199;
          v173 = v198;
          v172 = v197;
          v124 = _mm_load_si128(&v193);
          v171 = v196;
          v170 = v195;
          v169 = v194;
          v168 = v124;
          sub_140BEA480(v288);
          if ( v123 != -1 )
          {
            v166 = v174;
            v165 = v173;
            v164 = v172;
            v126 = _mm_load_si128(&v168);
            v163 = v171;
            v162 = v170;
            v161 = v169;
            v160 = v126;
            v153 = v123;
            v154 = (char)v28;
            v155 = v29;
            v157 = BYTE6(v29);
            v156 = WORD2(v29);
            v158 = v30;
            v159 = v120;
            sub_140B0CD30(v246, &v153);
            v13 = ((unsigned __int64)((v246[15] << 16) | (unsigned int)*(unsigned __int16 *)&v246[13]) << 32)
                | *(unsigned int *)&v246[9];
            v11 = v246[8];
            v14 = _mm_loadu_si128((const __m128i *)&v246[16]);
            v15 = *(_QWORD *)&v246[32];
            if ( *(_QWORD *)v246 == -1 )
            {
              v38 = 0;
            }
            else
            {
              v246[15] = (((unsigned __int64)((v246[15] << 16) | (unsigned int)*(unsigned __int16 *)&v246[13]) << 32)
                        | *(unsigned int *)&v246[9]) >> 48;
              *(_WORD *)&v246[13] = WORD2(v13);
              *(_DWORD *)&v246[9] = v13;
              *(__m128i *)&v246[16] = v14;
              v204.m128i_i64[0] = 0;
              v204.m128i_i64[1] = 1;
              *(_QWORD *)&v205 = 0;
              v215.m256i_i64[0] = 1610612768;
              v214.m128i_i64[0] = (__int64)&v204;
              v214.m128i_i64[1] = (__int64)&off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(v246, &v214, v127) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v289,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v14 = _mm_load_si128(&v204);
              v15 = v205;
              sub_140BF0F60(v246);
              v38 = 1;
              v11 = 3;
            }
            v139 = v293;
            goto LABEL_154;
          }
          v136 = (v29 << 8) | (unsigned __int8)v28;
          v137 = _mm_shuffle_epi32(v30, 238).m128i_u64[0];
          v15 = v137;
          if ( v137 < 0 )
          {
            v138 = 0;
            goto LABEL_146;
          }
          if ( !v137 )
          {
            v13 = 1;
            v139 = v293;
            if ( !v136 )
              goto LABEL_153;
            goto LABEL_152;
          }
          nullsub_1(v125);
          v138 = 1;
          v140 = sub_140001650(v137, 1);
          if ( !v140 )
          {
LABEL_146:
            v294 = v30.m128i_i64[0];
            v295 = v136;
            sub_1416C2D4B(v138, v137);
          }
          v13 = v140;
          sub_141684120(v140, v30.m128i_i64[0], v137);
          v139 = v293;
          if ( v136 )
          {
LABEL_152:
            v141 = v139;
            sub_140001660(v30.m128i_i64[0], v136, 1);
            v139 = v141;
          }
LABEL_153:
          v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)v13);
          v38 = 1;
          v11 = 3;
LABEL_154:
          *(_BYTE *)v286 = 1;
          sub_140BF0DE0(v139);
          v39 = v296;
          if ( *(_QWORD *)(v296 + 6248) != -1 )
          {
            v286 = (_QWORD *)(v296 + 6256);
            v142 = *(const __m128i **)(v296 + 6256);
            v294 = *(_QWORD *)(v296 + 6264);
            v295 = 0;
            v291 = v142;
            while ( v294 != v295 )
            {
              ++v295;
              v143 = v142 + 6;
              sub_1402C7520();
              v142 = v143;
            }
            v39 = v296;
            v37 = *(_QWORD *)(v296 + 6248);
            if ( v37 )
LABEL_159:
              sub_140001660(*v286, 96 * v37, 8);
          }
LABEL_160:
          *(_BYTE *)(v39 + 11056) = 1;
          sub_140BE65B0(v293);
          v188 = v13;
          v190 = BYTE6(v13);
          v189 = WORD2(v13);
          v192 = v15;
          v187 = v11;
          v191 = v14;
          v186 = v38;
          v144 = v296;
          *(_BYTE *)(v296 + 11075) = 0;
          sub_141684120(v246, v144, 360);
          *(_BYTE *)(v144 + 11074) = 0;
          v145 = *(_QWORD *)(v144 + 384);
          *(_BYTE *)(v144 + 11073) = 0;
          v215.m256i_i64[0] = *(_QWORD *)(v144 + 376);
          v214 = _mm_loadu_si128((const __m128i *)(v144 + 360));
          sub_14047E370(
            (unsigned int)v246,
            v145,
            (unsigned int)&v186,
            (unsigned int)&v214,
            *(_DWORD *)(v144 + 11064),
            *(_DWORD *)(v144 + 11068));
          v134 = 1;
          result = 0;
          v78 = v296;
LABEL_161:
          *(_BYTE *)(v78 + 11072) = v134;
          return result;
        case 1:
LABEL_188:
          v288 = v19;
          v278 = v18;
          v293 = v9;
          sub_1416C3400(&off_1417BB030, v16, a3, a4);
        case 2:
LABEL_187:
          v288 = v19;
          v278 = v18;
          v293 = v9;
          sub_1416C3420(&off_1417BB030, v16, a3, a4);
        case 3:
LABEL_13:
          v24 = *(unsigned __int8 *)(v7 + 11032);
          v291 = (const __m128i *)(v7 + 9560);
          switch ( v24 )
          {
            case 0LL:
              v20 = *(_QWORD **)(v7 + 9584);
              v22 = *(_QWORD *)(v7 + 9592);
              v21 = *(_QWORD *)(v7 + 9600);
              v4 = _mm_loadu_si128((const __m128i *)(v7 + 9608));
              v23 = (const __m128i *)(v7 + 9560);
              goto LABEL_15;
            case 1LL:
              v288 = v19;
              v278 = v18;
              v293 = v9;
              v242 = (__int64 *)v291;
              sub_1416C3400(&off_1417BA7F0, v16, a3, a4);
            case 2LL:
              v288 = v19;
              v278 = v18;
              v293 = v9;
              v242 = (__int64 *)v291;
              sub_1416C3420(&off_1417BA7F0, v16, a3, a4);
            case 3LL:
              v288 = v19;
              v278 = v18;
              v293 = v9;
              goto LABEL_50;
          }
      }
  }
}