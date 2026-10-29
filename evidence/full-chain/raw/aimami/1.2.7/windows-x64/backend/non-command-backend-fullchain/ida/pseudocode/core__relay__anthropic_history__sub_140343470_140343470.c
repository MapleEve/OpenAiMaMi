// win 1.2.7 | module src/core/relay/anthropic_history.rs | ea 0x140343470 | name sub_140343470
// win 1.2.7 | module src/core/relay/anthropic_history.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140343470(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  __m128i v10; // xmm6
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  const char *v18; // rcx
  __int64 v19; // rax
  signed __int64 v20; // r14
  const __m128i *v21; // rsi
  __int64 i; // rax
  __m128i *v23; // rax
  const __m128i *v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  const char *v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  const __m128i *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  __m128i *v50; // rax
  const __m128i *v51; // rdx
  unsigned __int64 v52; // rsi
  __int64 m128i_i64; // rdx
  unsigned __int64 v54; // rsi
  const __m128i *v55; // rdx
  __m128i si128; // xmm0
  __m128i v57; // xmm1
  __int64 v58; // rcx
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  _DWORD *v61; // rax
  __int64 j; // rsi
  unsigned __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r9
  __m128i v66; // xmm0
  __m128i v67; // xmm9
  __int64 v68; // rsi
  __int64 k; // r10
  unsigned __int64 v70; // rcx
  __m128i v71; // xmm10
  __int64 v73; // rax
  int v74; // eax
  const __m128i *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  char v80; // dl
  unsigned __int64 v81; // r10
  __int64 v82; // rcx
  __m128i v83; // xmm0
  __m128i *v84; // rax
  __int64 v85; // r9
  unsigned __int64 v88; // rcx
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rbx
  const __m128i *v92; // r14
  __m128i v94; // xmm0
  __int64 v95; // rax
  __int64 v96; // rdx
  unsigned __int64 v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rdi
  const char *v100; // r14
  unsigned __int64 v101; // r13
  __int64 v102; // rax
  bool v103; // si
  _BYTE *v104; // rax
  _QWORD *v105; // r12
  const char *v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  unsigned __int64 v110; // r12
  __int64 v111; // r15
  __int128 v112; // kr30_16
  unsigned __int64 v113; // r14
  unsigned __int64 v114; // rsi
  __m128i *v115; // rsi
  unsigned __int64 *v116; // rax
  unsigned __int64 v117; // r13
  unsigned __int64 v118; // r15
  __int64 v119; // rax
  unsigned __int64 v120; // rax
  __int64 v121; // rsi
  __int64 v122; // rax
  unsigned __int64 *v123; // rcx
  __int64 result; // rax
  __int64 v125; // rbx
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // r12
  __int64 v128; // rax
  __int8 v129; // cl
  unsigned __int64 v130; // rax
  __m128i v131; // xmm0
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __m128i v135; // xmm0
  unsigned __int64 v136; // rsi
  __int64 v137; // rax
  __int64 v138; // rcx
  __m128i v139; // xmm0
  __int64 v140; // rax
  _BYTE *v141; // rcx
  __int64 v142; // rax
  _BYTE *v143; // rax
  __int64 v144; // r13
  unsigned __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // r9
  char v148; // si
  __int64 v149; // r15
  __int64 v150; // rbx
  __m128i v151; // xmm0
  __int64 v152; // rcx
  unsigned __int64 v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rdx
  __m128i v156; // xmm0
  unsigned __int64 v157; // rsi
  __m128i *v158; // rbx
  __int64 v159; // rsi
  __m128i v160; // xmm0
  _QWORD *v161; // rsi
  __int64 v162; // rdx
  __m128i v163; // xmm0
  _BYTE *v164; // rax
  __int64 v165; // rax
  __m128i v166; // xmm0
  unsigned __int64 v167; // rsi
  __int64 v168; // rax
  __int64 v169; // rcx
  __m128i v170; // xmm0
  char v171; // r15
  _QWORD *v172; // rsi
  __int64 v173; // rdx
  __int64 *v174; // rsi
  __int64 v175; // rdx
  bool v176; // zf
  unsigned __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rbx
  __int64 v180; // r12
  __m128i v181; // xmm1
  __int64 v182; // rax
  _BYTE *v183; // rdx
  __int64 v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 v187; // rbx
  __int64 v188; // rax
  __int64 v189; // rdi
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // r15
  __int64 v193; // rax
  unsigned __int64 v194; // rdx
  unsigned __int64 v195; // rsi
  const __m128i *v196; // r14
  __int64 v197; // rbx
  __int64 v198; // r15
  __m128i v199; // xmm0
  __m128i *v200; // rax
  __int64 v201; // rcx
  __int64 v202; // rsi
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rcx
  __m128i v206; // xmm1
  __int64 v207; // [rsp+20h] [rbp-60h]
  __m128i v208; // [rsp+30h] [rbp-50h] BYREF
  __m128i v209; // [rsp+40h] [rbp-40h] BYREF
  __int64 v210; // [rsp+58h] [rbp-28h]
  __int64 v211; // [rsp+60h] [rbp-20h]
  __int64 v212; // [rsp+68h] [rbp-18h]
  __int64 v213; // [rsp+70h] [rbp-10h]
  unsigned __int64 v214; // [rsp+78h] [rbp-8h]
  __int64 v215; // [rsp+80h] [rbp+0h]
  __int64 v216; // [rsp+88h] [rbp+8h]
  __m256i v217; // [rsp+90h] [rbp+10h] BYREF
  __int64 v218; // [rsp+B0h] [rbp+30h]
  __int64 v219; // [rsp+B8h] [rbp+38h]
  __m128i v220; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v221[2]; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v222; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v223; // [rsp+F8h] [rbp+78h]
  _QWORD v224[2]; // [rsp+100h] [rbp+80h] BYREF
  __int64 v225; // [rsp+110h] [rbp+90h]
  unsigned __int64 *v226; // [rsp+118h] [rbp+98h]
  __int64 v227; // [rsp+120h] [rbp+A0h]
  unsigned __int64 v228; // [rsp+128h] [rbp+A8h]
  __m128i v229; // [rsp+130h] [rbp+B0h]
  _QWORD v230[13]; // [rsp+140h] [rbp+C0h] BYREF
  char v231; // [rsp+1A8h] [rbp+128h]
  int v232; // [rsp+1A9h] [rbp+129h]
  __int16 v233; // [rsp+1ADh] [rbp+12Dh]
  char v234; // [rsp+1AFh] [rbp+12Fh]
  __m128i v235; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v236; // [rsp+1C0h] [rbp+140h]
  __int128 v237; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v238; // [rsp+1E0h] [rbp+160h]
  _QWORD v239[3]; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v240; // [rsp+208h] [rbp+188h]
  __m128i v241; // [rsp+210h] [rbp+190h] BYREF
  __int64 v242; // [rsp+220h] [rbp+1A0h]
  __int64 v243; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v244; // [rsp+238h] [rbp+1B8h]
  __int64 v245; // [rsp+240h] [rbp+1C0h]
  char v246; // [rsp+24Fh] [rbp+1CFh] BYREF
  const char *v247; // [rsp+250h] [rbp+1D0h]
  unsigned __int64 v248; // [rsp+258h] [rbp+1D8h]
  __m256i v249; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v250; // [rsp+280h] [rbp+200h] BYREF
  __int128 v251; // [rsp+290h] [rbp+210h]
  __m128i v252; // [rsp+2A0h] [rbp+220h]
  __int128 v253; // [rsp+2B0h] [rbp+230h]
  unsigned __int64 v254; // [rsp+2C0h] [rbp+240h]
  char v255; // [rsp+2C8h] [rbp+248h]
  int v256; // [rsp+2C9h] [rbp+249h]
  __int16 v257; // [rsp+2CDh] [rbp+24Dh]
  char v258; // [rsp+2CFh] [rbp+24Fh]
  __m128i *v259; // [rsp+2D0h] [rbp+250h]
  __int128 v260; // [rsp+2D8h] [rbp+258h] BYREF
  unsigned __int64 v261; // [rsp+2E8h] [rbp+268h]
  unsigned __int64 v262; // [rsp+2F0h] [rbp+270h]
  __m128i *v263; // [rsp+2F8h] [rbp+278h]
  char v264; // [rsp+306h] [rbp+286h]
  char v265; // [rsp+307h] [rbp+287h]
  unsigned __int64 v266; // [rsp+308h] [rbp+288h]
  char v267; // [rsp+310h] [rbp+290h]
  char v268; // [rsp+311h] [rbp+291h]
  char v269; // [rsp+314h] [rbp+294h]
  char v270; // [rsp+315h] [rbp+295h]
  char v271; // [rsp+316h] [rbp+296h]
  char v272; // [rsp+317h] [rbp+297h]
  __int64 v273; // [rsp+318h] [rbp+298h]

  v273 = -2;
  v1 = a1[1];
  v226 = a1;
  v2 = a1[2];
  v3 = sub_14167F170(a1);
  if ( *(_BYTE *)(v3 + 16) == 1 )
  {
    v8 = *(_QWORD *)v3;
    v9 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    v202 = v3;
    v8 = sub_141696260(v5, v4, v6, v7);
    v3 = v202;
    *(_QWORD *)v202 = v8;
    *(_QWORD *)(v202 + 8) = v9;
    *(_BYTE *)(v202 + 16) = 1;
  }
  *(_QWORD *)v3 = v8 + 1;
  v10 = _mm_loadu_si128((const __m128i *)&xmmword_1419E4880);
  v238 = v10;
  v237 = *(_OWORD *)&off_1419E4870;
  v239[0] = v8;
  v239[1] = v9;
  v225 = v2;
  v210 = 32 * v2;
  v240 = 32 * v2 + v1;
  v262 = v1;
LABEL_4:
  while ( v1 != v240 )
  {
    v11 = sub_1416419F0(
            "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensst"
            "reamdoubaoreasoning_effortnone",
            7,
            v1);
    v1 += 32LL;
    if ( v11 && *(_BYTE *)v11 == 4 )
    {
      v12 = *(_QWORD *)(v11 + 16);
      v13 = v12 + 32LL * *(_QWORD *)(v11 + 24);
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
LABEL_8:
            if ( v12 == v13 )
              goto LABEL_4;
            v14 = v12;
            v15 = sub_1416419F0(aType_4, 4, v12);
            v12 += 32;
          }
          while ( !v15 || *(_BYTE *)v15 != 3 );
          v8 = *(_QWORD *)(v15 + 16);
          v16 = *(_QWORD *)(v15 + 24);
          if ( v16 == 11 )
            break;
          if ( v16 == 8 && *(_QWORD *)v8 == 0x6573755F6C6F6F74LL )
          {
            v17 = 2;
            v18 = aId_1;
            goto LABEL_17;
          }
        }
        v8 = *(_QWORD *)v8 ^ 0x7365725F6C6F6F74LL | *(_QWORD *)(v8 + 3) ^ 0x746C757365725F6CLL;
        if ( !v8 )
        {
          v17 = 11;
          v18 = aToolUseId_0;
LABEL_17:
          v19 = sub_1416419F0(v18, v17, v14);
          if ( v19 )
          {
            if ( *(_BYTE *)v19 == 3 )
            {
              v20 = *(_QWORD *)(v19 + 24);
              if ( v20 )
              {
                v21 = *(const __m128i **)(v19 + 16);
                for ( i = 0; i != v20; ++i )
                {
                  v8 = v21->m128i_u8[i];
                  if ( (unsigned __int8)(v8 - 48) >= 0xAu
                    && (unsigned __int8)((v8 & 0xDF) - 65) >= 0x1Au
                    && (_DWORD)v8 != 95
                    && (_DWORD)v8 != 45 )
                  {
                    goto LABEL_8;
                  }
                }
                if ( v20 < 0 )
                {
                  v185 = 0;
                  goto LABEL_234;
                }
                nullsub_1(v8);
                v23 = (__m128i *)sub_140001650(v20, 1);
                if ( !v23 )
                {
                  v266 = v20;
                  v185 = 1;
LABEL_234:
                  sub_141938D2B(v185, v266);
                }
                v24 = v21;
                v25 = (__int64)v23;
                sub_1418F44E0(v23, v24, v20);
                v249.m256i_i64[0] = v20;
                v266 = v25;
                v249.m256i_i64[1] = v25;
                v249.m256i_i64[2] = v20;
                sub_1403AAB80(&v237, &v249);
              }
            }
          }
        }
      }
    }
  }
  v26 = sub_14167F170(v8);
  v31 = (_QWORD *)v26;
  if ( *(_BYTE *)(v26 + 16) == 1 )
  {
    v32 = *(_QWORD *)v26;
    v33 = v31[1];
  }
  else
  {
    v32 = sub_141696260(v28, v27, v29, v30);
    *v31 = v32;
    v31[1] = v33;
    *((_BYTE *)v31 + 16) = 1;
  }
  *v31 = v32 + 1;
  *(__m128i *)&v217.m256i_u64[2] = v10;
  *(_OWORD *)v217.m256i_i8 = *(_OWORD *)&off_1419E4870;
  v218 = v32;
  v219 = v33;
  v34 = v262;
LABEL_33:
  while ( v34 != v240 )
  {
    v35 = sub_1416419F0(
            "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensst"
            "reamdoubaoreasoning_effortnone",
            7,
            v34);
    v34 += 32LL;
    if ( v35 && *(_BYTE *)v35 == 4 )
    {
      v36 = *(_QWORD *)(v35 + 16);
      v37 = v36 + 32LL * *(_QWORD *)(v35 + 24);
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            if ( v36 == v37 )
              goto LABEL_33;
            v38 = v36;
            v39 = sub_1416419F0(aType_4, 4, v36);
            v36 += 32;
          }
          while ( !v39 || *(_BYTE *)v39 != 3 );
          v40 = *(_QWORD **)(v39 + 16);
          v41 = *(_QWORD *)(v39 + 24);
          if ( v41 == 11 )
            break;
          if ( v41 == 8 && *v40 == 0x6573755F6C6F6F74LL )
          {
            v42 = 2;
            v43 = aId_1;
            goto LABEL_46;
          }
        }
        if ( !(*v40 ^ 0x7365725F6C6F6F74LL | *(_QWORD *)((char *)v40 + 3) ^ 0x746C757365725F6CLL) )
        {
          v42 = 11;
          v43 = aToolUseId_0;
LABEL_46:
          v247 = v43;
          v263 = (__m128i *)v42;
          v44 = sub_1416419F0(v43, v42, v38);
          if ( v44 )
          {
            if ( *(_BYTE *)v44 == 3 )
            {
              v45 = *(_QWORD *)(v44 + 24);
              if ( v45 )
              {
                v46 = (unsigned __int64)v31;
                v47 = *(const __m128i **)(v44 + 16);
                v48 = 0;
                v266 = v45;
                while ( 2 )
                {
                  v49 = v47->m128i_u8[v48];
                  if ( (unsigned __int8)(v49 - 48) < 0xAu
                    || (unsigned __int8)((v49 & 0xDF) - 65) < 0x1Au
                    || (_DWORD)v49 == 95
                    || (_DWORD)v49 == 45 )
                  {
                    if ( v266 != ++v48 )
                      continue;
                    v31 = (_QWORD *)v46;
                  }
                  else
                  {
                    if ( (v266 & 0x8000000000000000uLL) != 0LL )
                    {
                      v201 = 0;
                      goto LABEL_249;
                    }
                    nullsub_1(v49);
                    v50 = (__m128i *)sub_140001650(v266, 1);
                    if ( !v50 )
                    {
                      v46 = v266;
                      v201 = 1;
LABEL_249:
                      sub_141938D2B(v201, v46);
                    }
                    v51 = v47;
                    v52 = v266;
                    v259 = v50;
                    sub_1418F44E0(v50, v51, v266);
                    *(_QWORD *)&v260 = v52;
                    *((_QWORD *)&v260 + 1) = v259;
                    v261 = v52;
                    sub_1416AC440(v230, &v260);
                    sub_1403A2F20(&v249, &v217, v230);
                    m128i_i64 = v249.m256i_i64[1];
                    if ( v249.m256i_i64[0] != -1 )
                    {
                      v229 = *(__m128i *)v249.m256i_i8;
                      v227 = v249.m256i_i64[3];
                      v212 = v249.m256i_i64[2];
                      v228 = v250;
                      v231 = 0;
                      *(_OWORD *)&v230[2] = xmmword_1419EB5C0;
                      *(__m128i *)v230 = _mm_loadu_si128((const __m128i *)&xmmword_1419EB5B0);
                      memset(&v230[4], 0, 72);
                      v54 = v266;
                      v55 = v259;
                      if ( v266 >= 0x40 )
                      {
                        v230[4] = v266 >> 6;
                        sub_14140F460(v230, v259, v266 >> 6);
                        v55 = (__m128i *)((char *)v259 + (v266 & 0x7FFFFFFFFFFFFFC0LL));
                        v54 = v266 & 0x3F;
                      }
                      sub_1418F44E0((__m128i *)&v230[5], v55, v54);
                      v231 = v54;
                      v254 = v230[12];
                      v255 = v54;
                      v256 = v232;
                      v257 = v233;
                      v258 = v234;
                      si128 = _mm_load_si128((const __m128i *)v230);
                      v57 = _mm_load_si128((const __m128i *)&v230[2]);
                      v250 = *(_OWORD *)&v230[4];
                      v253 = *(_OWORD *)&v230[10];
                      v252 = _mm_load_si128((const __m128i *)&v230[8]);
                      v251 = *(_OWORD *)&v230[6];
                      *(__m128i *)&v249.m256i_u64[2] = v57;
                      *(__m128i *)v249.m256i_i8 = si128;
                      v248 = _byteswap_uint64((v230[4] << 9) | (8 * (unsigned int)(unsigned __int8)v54));
                      *((_BYTE *)&v250 + (unsigned __int8)v54 + 8) = 0x80;
                      if ( (unsigned __int8)v54 == 63
                        || (sub_1418F4C70((char *)&v250 + (unsigned __int8)v54 + 9, 0, (unsigned __int8)v54 ^ 0x3FLL),
                            ((unsigned __int8)v54 ^ 0x38u) <= 7) )
                      {
                        sub_14140F460(&v249, (char *)&v250 + 8, 1);
                        memset(v221, 0, sizeof(v221));
                        v220 = 0;
                        v222 = 0;
                        v223 = v248;
                        sub_14140F460(&v249, &v220, 1);
                      }
                      else
                      {
                        v254 = v248;
                        sub_14140F460(&v249, (char *)&v250 + 8, 1);
                      }
                      v59 = _mm_load_si128((const __m128i *)&v249);
                      v60 = _mm_load_si128((const __m128i *)&v249.m256i_u64[2]);
                      v220 = _mm_packus_epi16(
                               _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v59, (__m128i)0LL), 27), 27),
                               _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v59, (__m128i)0LL), 27), 27));
                      v221[0] = _mm_packus_epi16(
                                  _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v60, (__m128i)0LL), 27), 27),
                                  _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v60, (__m128i)0LL), 27), 27));
                      nullsub_1(v58);
                      v61 = (_DWORD *)sub_140001650(39, 1);
                      if ( !v61 )
                        sub_141938D2B(1, 39);
                      v243 = 39;
                      v244 = (__int64)v61;
                      *(_DWORD *)((char *)v61 + 3) = 1600744801;
                      *v61 = 1634560353;
                      v245 = 7;
                      for ( j = 0; j != 16; ++j )
                      {
                        v230[0] = (char *)&v220 + j;
                        v249.m256i_i64[0] = (__int64)v230;
                        v249.m256i_i64[1] = (__int64)sub_1402863B0;
                        if ( (unsigned __int8)sub_1416B2DC0(&v243, &off_1419E98E0, &unk_1419E55B0, &v249, v207) )
                          sub_141939040(
                            (unsigned int)aWritingToStrin,
                            29,
                            (unsigned int)&v246,
                            (unsigned int)&unk_1419E6AE0,
                            (__int64)&off_1419E9930);
                      }
                      sub_1416AC440(&v241, &v243);
                      for ( v224[0] = 2; v238.m128i_i64[1]; ++v224[0] )
                      {
                        v63 = sub_140D2AC70(v239, &v241);
                        v65 = *((_QWORD *)&v237 + 1);
                        v64 = v237;
                        v66 = _mm_cvtsi32_si128(v63 >> 57);
                        v67 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v66, v66), 0), 68);
                        v248 = v241.m128i_u64[1];
                        v68 = v242;
                        for ( k = 0; ; k += 16 )
                        {
                          v70 = v65 & v63;
                          v71 = _mm_loadu_si128((const __m128i *)(v64 + v70));
                          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v71, v67));
                          if ( (_DWORD)_RAX )
                            break;
LABEL_76:
                          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v71, (__m128i)-1LL)) )
                            goto LABEL_81;
                          v63 = k + v70 + 16;
                        }
                        v214 = v70;
                        v215 = v65;
                        v216 = k;
                        while ( 1 )
                        {
                          v213 = _RAX;
                          __asm { tzcnt   eax, eax }
                          v73 = -3LL * (v65 & (v70 + _RAX));
                          if ( v68 == *(_QWORD *)(v64 + 8 * v73 - 8) )
                          {
                            v211 = v64;
                            v74 = sub_1418F4B70(v248, *(_QWORD *)(v64 + 8 * v73 - 16));
                            v64 = v211;
                            if ( !v74 )
                              break;
                          }
                          _RAX = (unsigned int)(v213 - 1);
                          LOWORD(_RAX) = v213 & (v213 - 1);
                          v70 = v214;
                          v65 = v215;
                          k = v216;
                          if ( !(_WORD)_RAX )
                            goto LABEL_76;
                        }
                        v249.m256i_i64[0] = (__int64)&v243;
                        v249.m256i_i64[1] = (__int64)sub_1400015F0;
                        v249.m256i_i64[2] = (__int64)v224;
                        v249.m256i_i64[3] = (__int64)sub_1416BCB10;
                        sub_1416ABFD0(v230, &unk_1419E9948, &v249);
                        if ( v241.m128i_i64[0] )
                          sub_140001660(v248, v241.m128i_i64[0], 1);
                        v242 = v230[2];
                        v241 = _mm_loadu_si128((const __m128i *)v230);
                      }
LABEL_81:
                      sub_1416AC440(&v249, &v241);
                      sub_1403AAB80(&v237, &v249);
                      *(__m128i *)v249.m256i_i8 = v241;
                      v249.m256i_i64[2] = v242;
                      if ( v243 )
                        sub_140001660(v244, v243, 1);
                      v230[2] = v249.m256i_i64[2];
                      *(_OWORD *)v230 = *(_OWORD *)v249.m256i_i8;
                      v75 = *(const __m128i **)v227;
                      v76 = *(_QWORD *)(v227 + 8);
                      v77 = v228 & v76;
                      _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v227
                                                                                            + (v228 & v76))));
                      if ( !(_DWORD)_R8 )
                      {
                        v85 = 16;
                        do
                        {
                          v77 = v76 & (v85 + v77);
                          _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v75 + v77)));
                          v85 += 16;
                        }
                        while ( !(_DWORD)_R8 );
                      }
                      __asm { tzcnt   r8d, r8d }
                      _R8 = v76 & (v77 + _R8);
                      v80 = v75->m128i_i8[_R8];
                      if ( v80 >= 0 )
                      {
                        _EDX = _mm_movemask_epi8(_mm_load_si128(v75));
                        __asm { tzcnt   r8d, edx }
                        v80 = v75->m128i_i8[_R8];
                      }
                      v81 = v228 >> 57;
                      v75->m128i_i8[_R8] = v228 >> 57;
                      v75[1].m128i_i8[v76 & (_R8 - 16)] = v81;
                      v82 = -3 * _R8;
                      v75[v82 - 3] = v229;
                      v75[v82 - 2].m128i_i64[0] = v212;
                      *(const __m128i *)((char *)&v75[v82 - 1] - 8) = *(const __m128i *)v230;
                      v75[v82 - 1].m128i_i64[1] = v230[2];
                      *(__m128i *)(v227 + 16) = _mm_sub_epi64(
                                                  _mm_loadu_si128((const __m128i *)(v227 + 16)),
                                                  (__m128i)_mm_shuffle_ps(
                                                             (__m128)_mm_cvtsi32_si128(v80 & 1),
                                                             (__m128)xmmword_1419D3560,
                                                             228));
                      m128i_i64 = (__int64)v75[-3 * _R8].m128i_i64;
                    }
                    sub_1416AC440(v230, m128i_i64 - 24);
                    v249.m256i_i64[3] = v230[2];
                    *(__m128i *)&v249.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v230);
                    v249.m256i_i8[0] = 3;
                    v265 = 1;
                    v263 = (__m128i *)sub_141641AF0(v247, v263, v38);
                    sub_14002F9D0(v263);
                    v83 = _mm_loadu_si128((const __m128i *)&v249);
                    v84 = v263;
                    v263[1] = _mm_loadu_si128((const __m128i *)&v249.m256i_u64[2]);
                    *v84 = v83;
                    v31 = v259->m128i_i64;
                    sub_140001660(v259, v266, 1);
                  }
                  break;
                }
              }
            }
          }
        }
      }
    }
  }
  HIDWORD(_RAX) = (unsigned __int64)sub_14036FB80(&v217) >> 32;
  v89 = *((_QWORD *)&v237 + 1);
  if ( *((_QWORD *)&v237 + 1) )
  {
    v90 = v238.m128i_i64[1];
    if ( v238.m128i_i64[1] )
    {
      v91 = v237;
      v92 = (const __m128i *)(v237 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v237));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v94 = _mm_load_si128(v92);
            v91 -= 384;
            ++v92;
            _R15D = _mm_movemask_epi8(v94) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v95 = -3 * _RAX;
        v96 = *(_QWORD *)(v91 + 8 * v95 - 24);
        if ( v96 )
          sub_140001660(*(_QWORD *)(v91 + 8 * v95 - 16), v96, 1);
        --v90;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v90 );
    }
    v97 = (24 * v89 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v98 = v97 + v89 + 17;
    if ( v98 )
      sub_140001660(v237 - v97, v98, 16);
  }
  v99 = v225;
  if ( v225 )
  {
    v100 = "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax"
           "_tokensstreamdoubaoreasoning_effortnone";
    v101 = v262;
    while ( 1 )
    {
      v102 = sub_1416419F0(v100, 4, v101);
      v103 = v102 && *(_BYTE *)v102 == 3 && *(_QWORD *)(v102 + 24) == 4 && **(_DWORD **)(v102 + 16) == 1919251317;
      v104 = (_BYTE *)sub_1416419F0(
                        "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperature"
                        "max_tokensstreamdoubaoreasoning_effortnone",
                        7,
                        v101);
      if ( v104 )
      {
        v105 = v104;
        if ( *v104 == 4 )
        {
          sub_14037B220(v104 + 8);
          if ( v103 )
            break;
        }
      }
LABEL_104:
      v101 += 32LL;
      if ( v101 == v240 )
        goto LABEL_124;
    }
    v259 = (__m128i *)(v105 + 1);
    v106 = v100;
    v107 = v105[1];
    v108 = v105[2];
    v109 = v105[3];
    v105[1] = 0;
    v105[2] = 8;
    v247 = (const char *)v105;
    v105[3] = 0;
    v230[0] = v108;
    v230[2] = v107;
    v230[1] = v108;
    v230[3] = v108 + 32 * v109;
    sub_14039A430(&v249, v230);
    v235 = _mm_loadu_si128((const __m128i *)&v249);
    __SET_PAIR__(v110, v111, *(_OWORD *)&v249.m256i_u64[2]);
    v236 = v249.m256i_i64[2];
    v112 = v250;
    v113 = 32LL * *((_QWORD *)&v250 + 1);
    v249.m256i_i64[0] = v250;
    v249.m256i_i64[2] = v249.m256i_i64[3];
    v249.m256i_i64[1] = v250;
    v249.m256i_i64[3] = v250 + 32LL * *((_QWORD *)&v250 + 1);
    if ( *((_QWORD *)&v250 + 1) > (unsigned __int64)(v235.m128i_i64[0] - v236) )
    {
      sub_14190D590((unsigned int)&v235, v111, DWORD2(v250), 8, 32);
      v111 = v236;
    }
    else if ( !*((_QWORD *)&v250 + 1) )
    {
LABEL_116:
      v236 = *((_QWORD *)&v112 + 1) + v111;
      if ( v110 )
        sub_140001660(v112, 32 * v110, 8);
      v88 = *((_QWORD *)v247 + 2);
      v263 = *((__m128i **)v247 + 3);
      v248 = v88;
      v266 = 0;
      v99 = v225;
      v100 = v106;
      while ( v263 != (__m128i *)v266 )
      {
        ++v266;
        v114 = v88 + 32;
        sub_1403880E0(v88);
        v88 = v114;
      }
      v115 = v259;
      if ( v259->m128i_i64[0] )
        sub_140001660(*((_QWORD *)v247 + 2), 32 * v259->m128i_i64[0], 8);
      v115[1].m128i_i64[0] = v236;
      *v115 = _mm_load_si128(&v235);
      goto LABEL_104;
    }
    sub_1418F44E0((__m128i *)(v235.m128i_i64[1] + 32 * v111), (const __m128i *)v112, v113);
    goto LABEL_116;
  }
LABEL_124:
  v116 = v226;
  v117 = *v226;
  *v226 = 0;
  v116[1] = 8;
  v116[2] = 0;
  v238.m128i_i64[0] = 0;
  v238.m128i_i64[1] = v99;
  *(_QWORD *)&v237 = v117;
  v118 = v262;
  *((_QWORD *)&v237 + 1) = v262;
  if ( v99 )
  {
    nullsub_1(v88);
    v119 = sub_140001650(v210, 8);
    if ( !v119 )
      sub_141938D2B(8, v210);
  }
  else
  {
    v119 = 8;
  }
  *(_QWORD *)&v260 = v99;
  *((_QWORD *)&v260 + 1) = v119;
  v261 = 0;
  v120 = 0;
  v266 = v117;
  if ( v99 )
  {
    while ( 1 )
    {
      v125 = v99;
      v126 = 0;
      if ( v120 + 1 >= v117 )
        v126 = v117;
      v127 = v120 - v126 + 1;
      v238.m128i_i64[0] = v127;
      v238.m128i_i64[1] = --v99;
      v128 = 32 * v120;
      v129 = *(_BYTE *)(v118 + v128);
      if ( v129 == -1 )
        break;
      v130 = v118 + v128;
      v217.m256i_i8[0] = v129;
      v131 = _mm_loadu_si128((const __m128i *)(v130 + 1));
      *(__m128i *)&v217.m256i_u64[2] = _mm_loadu_si128((const __m128i *)(v130 + 16));
      *(__m128i *)&v217.m256i_i8[1] = v131;
      v269 = 1;
      v132 = sub_1416419F0(
               "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperatur"
               "emax_tokensstreamdoubaoreasoning_effortnone",
               4,
               &v217);
      if ( v132
        && *(_BYTE *)v132 == 3
        && *(_QWORD *)(v132 + 24) == 9
        && !(**(_QWORD **)(v132 + 16) ^ 0x6E61747369737361LL
           | *(unsigned __int8 *)(*(_QWORD *)(v132 + 16) + 8LL) ^ 0x74LL) )
      {
        v230[0] = aId_1;
        v230[1] = 2;
        v269 = 1;
        v140 = sub_1416419F0(
                 "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tok"
                 "ensstreamdoubaoreasoning_effortnone",
                 7,
                 &v217);
        if ( v140 )
        {
          v141 = (_BYTE *)v140;
          v142 = v140 + 8;
          if ( *v141 != 4 )
            v142 = 0;
        }
        else
        {
          v142 = 0;
        }
        v249.m256i_i64[0] = 1;
        *(_OWORD *)&v249.m256i_u64[1] = (unsigned __int64)v142;
        *(_QWORD *)&v250 = 0;
        *(_QWORD *)&v251 = aToolUse;
        *((_QWORD *)&v251 + 1) = 8;
        v252.m128i_i64[0] = (__int64)v230;
        v269 = 1;
        sub_1403D25F0(&v243, &v249);
        v144 = v245;
        if ( v245 )
        {
          if ( !v99 )
            goto LABEL_177;
          v145 = 0;
          if ( v127 >= v266 )
            v145 = v266;
          v272 = 1;
          v146 = sub_1416419F0(
                   "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemper"
                   "aturemax_tokensstreamdoubaoreasoning_effortnone",
                   4,
                   v262 + 32 * (v127 - v145));
          if ( !v146 || *(_BYTE *)v146 != 3 || *(_QWORD *)(v146 + 24) != 4 || **(_DWORD **)(v146 + 16) != 1919251317 )
          {
LABEL_177:
            v220.m128i_i8[0] = -1;
            goto LABEL_178;
          }
          v177 = 0;
          if ( v127 + 1 >= v266 )
            v177 = v266;
          v178 = v127 - v177 + 1;
          v238.m128i_i64[0] = v178;
          v179 = v125 - 2;
          v238.m128i_i64[1] = v179;
          v180 = 32 * v127;
          v181 = _mm_loadu_si128((const __m128i *)(v262 + v180 + 16));
          v220 = _mm_loadu_si128((const __m128i *)(v262 + v180));
          v221[0] = v181;
          if ( v220.m128i_i8[0] == -1 )
          {
            v99 = v179;
            v127 = v178;
LABEL_178:
            v241.m128i_i64[0] = 0;
            v241.m128i_i64[1] = 8;
            v242 = 0;
            v147 = 8;
            v148 = -1;
            v149 = 0;
          }
          else
          {
            v127 = v178;
            v224[0] = aToolUseId_0;
            v224[1] = 11;
            v148 = v220.m128i_i8[0];
            v268 = v220.m128i_i8[0];
            v267 = 1;
            v182 = sub_1416419F0(
                     "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax"
                     "_tokensstreamdoubaoreasoning_effortnone",
                     7,
                     &v220);
            if ( v182 )
            {
              v183 = (_BYTE *)v182;
              v184 = v182 + 8;
              if ( *v183 != 4 )
                v184 = 0;
            }
            else
            {
              v184 = 0;
            }
            v249.m256i_i64[0] = 1;
            *(_OWORD *)&v249.m256i_u64[1] = (unsigned __int64)v184;
            *(_QWORD *)&v250 = 0;
            *(_QWORD *)&v251 = aToolResult;
            *((_QWORD *)&v251 + 1) = 11;
            v252.m128i_i64[0] = (__int64)v224;
            v268 = v148;
            v267 = 1;
            sub_1403D25F0(v230, &v249);
            v241 = _mm_loadu_si128((const __m128i *)v230);
            v149 = v230[2];
            v242 = v230[2];
            v147 = v241.m128i_i64[1];
            v99 = v179;
          }
          v271 = 1;
          v263 = (__m128i *)v244;
          v150 = v147;
          if ( (unsigned __int8)sub_140342FC0((unsigned int)&v217, v244, v144, v147, v149) )
          {
            if ( v148 != -1 )
            {
              v209 = v221[0];
              v208 = v220;
              v151 = _mm_loadu_si128((const __m128i *)&v217);
              *(__m128i *)&v249.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v217.m256i_u64[2]);
              *(__m128i *)v249.m256i_i8 = v151;
              v152 = v260;
              v153 = v261;
              if ( v261 == (_QWORD)v260 )
              {
                sub_14190F570(&v260);
                v152 = v260;
              }
              v240 = v150;
              v154 = *((_QWORD *)&v260 + 1);
              v155 = 32 * v153;
              v156 = _mm_load_si128((const __m128i *)&v249);
              *(__m128i *)(*((_QWORD *)&v260 + 1) + v155 + 16) = _mm_load_si128((const __m128i *)&v249.m256i_u64[2]);
              *(__m128i *)(v154 + v155) = v156;
              v247 = (const char *)v153;
              v157 = v153 + 1;
              v261 = v157;
              v158 = v263;
              if ( v157 == v152 )
              {
                sub_14190F570(&v260);
                v154 = *((_QWORD *)&v260 + 1);
              }
              v159 = 32 * v157;
              v160 = _mm_load_si128(&v208);
              *(__m128i *)(v154 + v159 + 16) = _mm_load_si128(&v209);
              *(__m128i *)(v154 + v159) = v160;
              v261 = (unsigned __int64)(v247 + 2);
              if ( v149 )
              {
                v161 = (_QWORD *)(v240 + 8);
                do
                {
                  v162 = *(v161 - 1);
                  if ( v162 )
                    sub_140001660(*v161, v162, 1);
                  v161 += 3;
                  --v149;
                }
                while ( v149 );
              }
              if ( v241.m128i_i64[0] )
                sub_140001660(v240, 24 * v241.m128i_i64[0], 8);
              v171 = 0;
              goto LABEL_215;
            }
          }
          else
          {
            v220.m128i_i8[0] = -1;
            if ( v148 != -1 )
            {
              LOBYTE(v230[0]) = v148;
              v163 = _mm_loadu_si128((const __m128i *)&v220.m128i_i8[1]);
              *(__m128i *)&v230[2] = _mm_loadu_si128(v221);
              *(__m128i *)((char *)v230 + 1) = v163;
              v270 = 1;
              v164 = (_BYTE *)sub_1416419F0(
                                "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertem"
                                "peraturemax_tokensstreamdoubaoreasoning_effortnone",
                                7,
                                v230);
              if ( v164 && *v164 == 4 )
              {
                v270 = 1;
                sub_14037B040(v164 + 8);
              }
              v270 = 1;
              v165 = sub_1416419F0(
                       "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturem"
                       "ax_tokensstreamdoubaoreasoning_effortnone",
                       7,
                       v230);
              if ( v165 && *(_BYTE *)v165 == 4 && *(_QWORD *)(v165 + 24) )
              {
                v166 = _mm_loadu_si128((const __m128i *)v230);
                *(__m128i *)&v249.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v230[2]);
                *(__m128i *)v249.m256i_i8 = v166;
                v167 = v261;
                if ( v261 == (_QWORD)v260 )
                  sub_14190F570(&v260);
                v168 = *((_QWORD *)&v260 + 1);
                v169 = 32 * v167;
                v170 = _mm_load_si128((const __m128i *)&v249);
                *(__m128i *)(*((_QWORD *)&v260 + 1) + v169 + 16) = _mm_load_si128((const __m128i *)&v249.m256i_u64[2]);
                *(__m128i *)(v168 + v169) = v170;
                v261 = v167 + 1;
              }
              else
              {
                v271 = 1;
                sub_14002F9D0(v230);
              }
            }
          }
          if ( v149 )
          {
            v172 = (_QWORD *)(v150 + 8);
            do
            {
              v173 = *(v172 - 1);
              if ( v173 )
                sub_140001660(*v172, v173, 1);
              v172 += 3;
              --v149;
            }
            while ( v149 );
          }
          if ( v241.m128i_i64[0] )
            sub_140001660(v150, 24 * v241.m128i_i64[0], 8);
          v171 = 1;
          if ( v220.m128i_i8[0] != -1 )
          {
            v272 = 1;
            sub_14002F9D0(&v220);
          }
          v158 = v263;
LABEL_215:
          v174 = &v158->m128i_i64[1];
          do
          {
            v175 = *(v174 - 1);
            if ( v175 )
              sub_140001660(*v174, v175, 1);
            v174 += 3;
            --v144;
          }
          while ( v144 );
          if ( v243 )
            sub_140001660(v158, 24 * v243, 8);
          v176 = v171 == 0;
          v118 = v262;
          v117 = v266;
          if ( v176 )
            goto LABEL_138;
          goto LABEL_137;
        }
      }
      else
      {
        v243 = 0;
        v244 = 8;
        v245 = 0;
      }
      v272 = 1;
      v133 = sub_1416419F0(
               "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperatur"
               "emax_tokensstreamdoubaoreasoning_effortnone",
               4,
               &v217);
      if ( v133 )
      {
        if ( *(_BYTE *)v133 == 3 && *(_QWORD *)(v133 + 24) == 4 && **(_DWORD **)(v133 + 16) == 1919251317 )
        {
          v272 = 1;
          v143 = (_BYTE *)sub_1416419F0(
                            "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertempera"
                            "turemax_tokensstreamdoubaoreasoning_effortnone",
                            7,
                            &v217);
          if ( v143 )
          {
            if ( *v143 == 4 )
            {
              v272 = 1;
              sub_14037B040(v143 + 8);
            }
          }
        }
      }
      v272 = 1;
      v134 = sub_1416419F0(
               "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_token"
               "sstreamdoubaoreasoning_effortnone",
               7,
               &v217);
      if ( v134 && *(_BYTE *)v134 == 4 && *(_QWORD *)(v134 + 24) )
      {
        v135 = _mm_loadu_si128((const __m128i *)&v217);
        *(__m128i *)&v249.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v217.m256i_u64[2]);
        *(__m128i *)v249.m256i_i8 = v135;
        v136 = v261;
        v118 = v262;
        v117 = v266;
        if ( v261 == (_QWORD)v260 )
          sub_14190F570(&v260);
        v137 = *((_QWORD *)&v260 + 1);
        v138 = 32 * v136;
        v139 = _mm_load_si128((const __m128i *)&v249);
        *(__m128i *)(*((_QWORD *)&v260 + 1) + v138 + 16) = _mm_load_si128((const __m128i *)&v249.m256i_u64[2]);
        *(__m128i *)(v137 + v138) = v139;
        v261 = v136 + 1;
        if ( !v243 )
          goto LABEL_138;
        sub_140001660(v244, 24 * v243, 8);
        v120 = v127;
        if ( !v99 )
          break;
      }
      else
      {
        v118 = v262;
        v117 = v266;
        if ( v243 )
          sub_140001660(v244, 24 * v243, 8);
LABEL_137:
        sub_14002F9D0(&v217);
LABEL_138:
        v120 = v127;
        if ( !v99 )
          break;
      }
    }
  }
  if ( v261 )
  {
    v121 = *((_QWORD *)&v260 + 1) + 32 * v261 - 32;
    v122 = sub_1416419F0(
             "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturem"
             "ax_tokensstreamdoubaoreasoning_effortnone",
             4,
             v121);
    if ( v122 )
    {
      if ( *(_BYTE *)v122 == 3
        && *(_QWORD *)(v122 + 24) == 9
        && !(**(_QWORD **)(v122 + 16) ^ 0x6E61747369737361LL
           | *(unsigned __int8 *)(*(_QWORD *)(v122 + 16) + 8LL) ^ 0x74LL) )
      {
        v186 = sub_1416419F0(
                 "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tok"
                 "ensstreamdoubaoreasoning_effortnone",
                 7,
                 v121);
        v187 = v186;
        if ( v186 )
        {
          if ( *(_BYTE *)v186 == 4 )
          {
            v188 = *(_QWORD *)(v186 + 24);
            if ( v188 )
            {
              v189 = *(_QWORD *)(v187 + 16) + 32 * v188 - 32;
              v190 = sub_1416419F0(aType_4, 4, v189);
              if ( v190 )
              {
                if ( *(_BYTE *)v190 == 3 && *(_QWORD *)(v190 + 24) == 4 && **(_DWORD **)(v190 + 16) == 1954047348 )
                {
                  v191 = sub_1416419F0(aText_3, 4, v189);
                  if ( v191 )
                  {
                    if ( *(_BYTE *)v191 == 3 )
                    {
                      v192 = *(_QWORD *)(v191 + 24);
                      v193 = sub_140E91540(*(_QWORD *)(v191 + 16), v192);
                      if ( v194 )
                      {
                        v195 = v194;
                        if ( v194 != v192 )
                        {
                          v196 = (const __m128i *)v193;
                          sub_14072C410((unsigned int)&v249, v194, 0, 1, 1);
                          v197 = v249.m256i_i64[1];
                          if ( v249.m256i_i32[0] == 1 )
                            sub_141938D2B(v249.m256i_i64[1], v249.m256i_i64[2]);
                          v198 = v249.m256i_i64[2];
                          sub_1418F44E0((__m128i *)v249.m256i_i64[2], v196, v195);
                          v249.m256i_i64[1] = v197;
                          v249.m256i_i64[2] = v198;
                          v249.m256i_i64[3] = v195;
                          v249.m256i_i8[0] = 3;
                          v264 = 1;
                          v263 = (__m128i *)sub_141641AF0(aText_3, 4, v189);
                          sub_14002F9D0(v263);
                          v199 = _mm_loadu_si128((const __m128i *)&v249);
                          v200 = v263;
                          v263[1] = _mm_loadu_si128((const __m128i *)&v249.m256i_u64[2]);
                          *v200 = v199;
                        }
                      }
                      else
                      {
                        v203 = *(_QWORD *)(v187 + 24);
                        if ( v203 )
                        {
                          v204 = v203 - 1;
                          *(_QWORD *)(v187 + 24) = v204;
                          v205 = *(_QWORD *)(v187 + 16);
                          v204 *= 32;
                          v206 = _mm_loadu_si128((const __m128i *)(v205 + v204 + 16));
                          *(__m128i *)v249.m256i_i8 = _mm_loadu_si128((const __m128i *)(v205 + v204));
                          *(__m128i *)&v249.m256i_u64[2] = v206;
                          if ( v249.m256i_i8[0] != -1 )
                            sub_14002F9D0(&v249);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  sub_14037B620(&v260);
  v123 = v226;
  v226[2] = v261;
  *(_OWORD *)v123 = v260;
  result = sub_1401861A0(&v237);
  if ( v266 )
    return sub_140001660(v262, 32 * v266, 8);
  return result;
}
