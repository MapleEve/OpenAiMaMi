// module: codexmate_lib/core/relay/translator
// addr: 0x140a239b0
// name: sub_140A239B0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A239B0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int8 *v8; // r14
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r15
  _DWORD *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int128 v32; // kr00_16
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // r14
  __int64 v45; // rcx
  __int64 v46; // rbx
  _DWORD *v47; // rax
  __int64 v48; // rcx
  _DWORD *v49; // rax
  __int64 v50; // rcx
  _DWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rcx
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r12
  __int64 v63; // r13
  __m256i *v64; // r14
  __m128i v65; // xmm7
  __m128i v66; // xmm8
  __int64 v67; // rdi
  __m256i *v68; // r15
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r12
  __int64 v72; // rdx
  void *v73; // rbx
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  __int64 *v81; // r12
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // rax
  int v86; // edx
  bool v87; // zf
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rcx
  int v90; // edx
  __int64 v91; // r13
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rbx
  const char *v95; // r12
  __int64 v96; // rcx
  __m128i v97; // xmm0
  _QWORD *v98; // rdi
  __int64 v99; // r14
  __int64 v100; // rax
  __int64 v101; // r14
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdx
  _DWORD *v105; // rax
  __int64 v106; // rcx
  _QWORD *v107; // rax
  __int64 v108; // rcx
  _WORD *v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // r14
  __int64 v113; // rax
  __int64 v114; // rcx
  _DWORD *v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rbx
  __int64 v118; // r15
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __m128i v122; // xmm0
  __m128i v123; // xmm1
  __int64 v124; // rbx
  __int64 v125; // r12
  __int64 v126; // rax
  __m128i v127; // xmm0
  __int64 v128; // rax
  _DWORD *v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  _DWORD *v133; // rax
  __m128i v134; // xmm0
  __int64 v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rcx
  __m128i v138; // xmm0
  __int64 v139; // rcx
  __int64 v140; // rsi
  __int64 v141; // rax
  char v142; // r14
  __int64 v143; // rcx
  __int64 v144; // rdi
  _DWORD *v145; // rax
  __int64 v146; // rcx
  _DWORD *v147; // rax
  __int64 v148; // rcx
  _DWORD *v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rcx
  _BYTE *v153; // rbx
  _DWORD *v154; // rax
  __int64 v155; // rcx
  void *v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rbx
  void *v159; // rax
  __int64 v160; // r14
  __int64 v161; // rax
  __int64 v162; // rcx
  _DWORD *v163; // rax
  __int64 v164; // rcx
  __int64 v165; // r14
  __int64 v166; // rax
  __int64 v167; // rbx
  __int64 v168; // rcx
  __m128i v169; // xmm0
  __int64 v170; // rdi
  __int64 v171; // rax
  __int64 v172; // rcx
  __m128i v173; // xmm0
  __int64 v174; // rax
  __int64 v175; // rdi
  __int64 v176; // rbx
  __int64 v177; // rcx
  __int64 v178; // r14
  __int64 v179; // r15
  _DWORD *v180; // rax
  __m128i v181; // xmm0
  __int64 v182; // rcx
  _DWORD *v183; // rax
  __m128i v184; // xmm0
  __int64 v185; // [rsp+50h] [rbp-30h] BYREF
  __int64 v186; // [rsp+58h] [rbp-28h]
  __int64 v187; // [rsp+60h] [rbp-20h]
  __int64 v188; // [rsp+68h] [rbp-18h]
  __int8 v189; // [rsp+70h] [rbp-10h] BYREF
  __int64 v190; // [rsp+71h] [rbp-Fh]
  int v191; // [rsp+79h] [rbp-7h]
  __int16 v192; // [rsp+7Dh] [rbp-3h]
  __int8 v193; // [rsp+7Fh] [rbp-1h]
  __m128i si128; // [rsp+80h] [rbp+0h]
  __m128i v195; // [rsp+90h] [rbp+10h] BYREF
  __int64 v196; // [rsp+A0h] [rbp+20h]
  int v197; // [rsp+ACh] [rbp+2Ch]
  __int64 v198; // [rsp+B0h] [rbp+30h]
  _QWORD *v199; // [rsp+B8h] [rbp+38h]
  char v200; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v201; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v202; // [rsp+D0h] [rbp+50h]
  __int64 v203; // [rsp+D8h] [rbp+58h]
  __int64 v204; // [rsp+E0h] [rbp+60h]
  _BYTE *v205; // [rsp+E8h] [rbp+68h]
  _BYTE v206[31]; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v207; // [rsp+110h] [rbp+90h] BYREF
  _DWORD *v208; // [rsp+118h] [rbp+98h]
  __int64 v209; // [rsp+120h] [rbp+A0h]
  __int64 v210; // [rsp+128h] [rbp+A8h]
  __m256i v211; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v212; // [rsp+150h] [rbp+D0h]
  char v213; // [rsp+15Bh] [rbp+DBh]
  char v214; // [rsp+15Ch] [rbp+DCh]
  char v215; // [rsp+15Dh] [rbp+DDh]
  char v216; // [rsp+15Eh] [rbp+DEh]
  char v217; // [rsp+15Fh] [rbp+DFh]
  unsigned __int128 v218; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v219; // [rsp+170h] [rbp+F0h]
  __int64 v220; // [rsp+188h] [rbp+108h]
  __m256i v221; // [rsp+190h] [rbp+110h] BYREF
  const char *v222; // [rsp+1B0h] [rbp+130h]
  __int64 v223; // [rsp+1B8h] [rbp+138h]
  char v224; // [rsp+1C3h] [rbp+143h]
  char v225; // [rsp+1C4h] [rbp+144h]
  char v226; // [rsp+1C5h] [rbp+145h]
  char v227; // [rsp+1C6h] [rbp+146h]
  char v228; // [rsp+1C7h] [rbp+147h]
  __int64 v229; // [rsp+1C8h] [rbp+148h]

  v229 = -2;
  v6 = 4;
  v7 = sub_141433D50(aRole_4, 4, a1);
  v8 = (unsigned __int8 *)&unk_1417A3EF7;
  if ( v7 && *(_BYTE *)v7 == 3 )
  {
    v8 = *(unsigned __int8 **)(v7 + 16);
    v6 = *(_QWORD *)(v7 + 24);
  }
  v9 = sub_141433D50(aContent_6, 7, a1);
  if ( !v9 )
  {
    v221.m256i_i8[0] = 0;
    si128 = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
    v189 = 0;
    v190 = *(__int64 *)((char *)v221.m256i_i64 + 1);
    v191 = *(__int32 *)((char *)&v221.m256i_i32[2] + 1);
    v192 = *(__int16 *)((char *)&v221.m256i_i16[6] + 1);
    v193 = v221.m256i_i8[15];
    if ( v6 != 4 )
      goto LABEL_23;
LABEL_8:
    if ( *(_DWORD *)v8 != 1819242356 )
    {
LABEL_29:
      sub_1409EAAF0((__int64)&v207, (unsigned __int8 *)&v189);
      *(_QWORD *)v206 = 0;
      *(_QWORD *)&v206[16] = 0;
      nullsub_1(v17);
      v18 = (_DWORD *)sub_140001650(4, 1);
      if ( !v18 )
        sub_1416C2D4B(1, 4);
      *v18 = 1701605234;
      *(_QWORD *)&v218 = 4;
      *((_QWORD *)&v218 + 1) = v18;
      v219.m128i_i64[0] = 4;
      nullsub_1(v19);
      v20 = (_DWORD *)sub_140001650(4, 1);
      v220 = (__int64)v20;
      if ( !v20 )
        sub_1416C2D4B(1, 4);
      *v20 = 1919251317;
      v221.m256i_i8[0] = 3;
      v221.m256i_i64[1] = 4;
      v221.m256i_i64[2] = (__int64)v20;
      v221.m256i_i64[3] = 4;
      sub_140307860(&v211, v206, &v218, &v221);
      if ( v211.m256i_i8[0] != -1 )
        sub_1400104F0(&v211);
      nullsub_1(v21);
      v22 = (_DWORD *)sub_140001650(7, 1);
      if ( !v22 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v22 + 3) = 1953391988;
      *v22 = 1953394531;
      *(_QWORD *)&v218 = 7;
      *((_QWORD *)&v218 + 1) = v22;
      v219.m128i_i64[0] = 7;
      v24 = v209;
      if ( v209 < 0 )
      {
        v25 = 0;
        goto LABEL_36;
      }
      v26 = v208;
      if ( v209 )
      {
        nullsub_1(v23);
        v25 = 1;
        v27 = sub_140001650(v24, 1);
        if ( !v27 )
        {
LABEL_36:
          v217 = 1;
          sub_1416C2D4B(v25, v24);
        }
        v28 = v27;
        sub_141684120(v27, v26, v24);
      }
      else
      {
        v28 = 1;
      }
      v221.m256i_i8[0] = 3;
      v221.m256i_i64[1] = v24;
      v221.m256i_i64[2] = v28;
      v221.m256i_i64[3] = v24;
      v217 = 0;
      sub_140307860(&v211, v206, &v218, &v221);
      if ( v211.m256i_i8[0] != -1 )
        sub_1400104F0(&v211);
      *(__m128i *)&v221.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v206);
      v221.m256i_i64[3] = *(_QWORD *)&v206[16];
      v221.m256i_i8[0] = 5;
      v34 = a2[2];
      if ( v34 == *a2 )
        sub_1416890A0(a2);
      v35 = a2[1];
      v36 = 32 * v34;
      v37 = _mm_loadu_si128((const __m128i *)&v221);
      *(__m128i *)(v35 + v36 + 16) = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
      *(__m128i *)(v35 + v36) = v37;
      a2[2] = v34 + 1;
      v38 = v207;
      if ( !v207 )
        return sub_1400104F0(&v189);
      v39 = 1;
      v40 = (__int64)v26;
LABEL_54:
      sub_140001660(v40, v38, v39);
      return sub_1400104F0(&v189);
    }
    v11 = sub_141433D50(aToolCallId, 12, a1);
    v13 = &unk_1417A7B30;
    if ( v11 )
    {
      v14 = 12;
      if ( *(_BYTE *)v11 == 3 )
      {
        v14 = *(_QWORD *)(v11 + 24);
        if ( v14 < 0 )
        {
          v15 = 0;
          goto LABEL_13;
        }
        if ( !v14 )
        {
          v210 = 1;
          v142 = 1;
          v220 = 0;
          goto LABEL_188;
        }
        v13 = *(void **)(v11 + 16);
      }
    }
    else
    {
      v14 = 12;
    }
    nullsub_1(v12);
    v15 = 1;
    v141 = sub_140001650(v14, 1);
    if ( !v141 )
LABEL_13:
      sub_1416C2D4B(v15, v14);
    v210 = v141;
    v220 = v14;
    sub_141684120(v141, v13, v14);
    v142 = 0;
LABEL_188:
    sub_1409EAAF0((__int64)&v218, (unsigned __int8 *)&v189);
    v144 = v219.m128i_i64[0];
    if ( v219.m128i_i64[0] )
    {
      v204 = *((_QWORD *)&v218 + 1);
      v212 = v218;
    }
    else
    {
      if ( v189 )
      {
        v211.m256i_i64[0] = 0;
        *(_OWORD *)&v211.m256i_u64[1] = 1u;
        v221.m256i_i64[2] = 1610612768;
        v221.m256i_i64[0] = (__int64)&v211;
        v221.m256i_i64[1] = (__int64)&off_1417A9B00;
        if ( (unsigned __int8)sub_14142EA10(&v189, &v221) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_3,
            55,
            (unsigned int)&v200,
            (unsigned int)&unk_1417A5580,
            (__int64)&off_1417A9BB8);
        v204 = v211.m256i_i64[1];
        v212 = v211.m256i_i64[0];
        v144 = v211.m256i_i64[2];
      }
      else
      {
        v204 = 1;
        v144 = 0;
        v212 = 0;
      }
      if ( (_QWORD)v218 )
        sub_140001660(*((_QWORD *)&v218 + 1), v218, 1);
    }
    v195.m128i_i64[0] = 0;
    v196 = 0;
    nullsub_1(v143);
    v145 = (_DWORD *)sub_140001650(4, 1);
    if ( !v145 )
      sub_1416C2D4B(1, 4);
    *v145 = 1701605234;
    *(_QWORD *)&v218 = 4;
    *((_QWORD *)&v218 + 1) = v145;
    v219.m128i_i64[0] = 4;
    nullsub_1(v146);
    v147 = (_DWORD *)sub_140001650(4, 1);
    v205 = v147;
    if ( !v147 )
      sub_1416C2D4B(1, 4);
    *v147 = 1919251317;
    v221.m256i_i8[0] = 3;
    v221.m256i_i64[1] = 4;
    v221.m256i_i64[2] = (__int64)v147;
    v221.m256i_i64[3] = 4;
    sub_140307860(&v211, &v195, &v218, &v221);
    if ( v211.m256i_i8[0] != -1 )
      sub_1400104F0(&v211);
    nullsub_1(v148);
    v149 = (_DWORD *)sub_140001650(7, 1);
    if ( !v149 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v149 + 3) = 1953391988;
    *v149 = 1953394531;
    v207 = 7;
    v208 = v149;
    v209 = 7;
    nullsub_1(v150);
    v151 = sub_140001650(32, 8);
    if ( !v151 )
    {
      v224 = 1;
      sub_1416C2D31(8, 32);
    }
    v153 = (_BYTE *)v151;
    *(_QWORD *)v206 = 0;
    *(_QWORD *)&v206[16] = 0;
    nullsub_1(v152);
    v154 = (_DWORD *)sub_140001650(4, 1);
    v205 = v153;
    if ( !v154 )
      sub_1416C2D4B(1, 4);
    *v154 = 1701869940;
    *(_QWORD *)&v218 = 4;
    *((_QWORD *)&v218 + 1) = v154;
    v219.m128i_i64[0] = 4;
    nullsub_1(v155);
    v156 = (void *)sub_140001650(11, 1);
    v198 = (__int64)v156;
    if ( !v156 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v156, "tool_result", 11);
    v221.m256i_i8[0] = 3;
    v221.m256i_i64[1] = 11;
    v221.m256i_i64[2] = (__int64)v156;
    v221.m256i_i64[3] = 11;
    sub_140307860(&v211, v206, &v218, &v221);
    if ( v211.m256i_i8[0] != -1 )
      sub_1400104F0(&v211);
    nullsub_1(v157);
    v158 = 1;
    v159 = (void *)sub_140001650(11, 1);
    if ( !v159 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v159, "tool_use_id", 11);
    *(_QWORD *)&v218 = 11;
    *((_QWORD *)&v218 + 1) = v159;
    v219.m128i_i64[0] = 11;
    v87 = v142 == 0;
    v160 = v220;
    if ( v87 )
    {
      nullsub_1(0x6573755F6C6F6F74LL);
      v161 = sub_140001650(v160, 1);
      if ( !v161 )
      {
        v216 = 1;
        sub_1416C2D4B(1, v160);
      }
      v158 = v161;
      sub_141684120(v161, v210, v160);
    }
    v221.m256i_i8[0] = 3;
    v221.m256i_i64[1] = v160;
    v221.m256i_i64[2] = v158;
    v221.m256i_i64[3] = v160;
    v216 = 0;
    sub_140307860(&v211, v206, &v218, &v221);
    if ( v211.m256i_i8[0] != -1 )
      sub_1400104F0(&v211);
    nullsub_1(v162);
    v163 = (_DWORD *)sub_140001650(7, 1);
    if ( !v163 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v163 + 3) = 1953391988;
    *v163 = 1953394531;
    *(_QWORD *)&v218 = 7;
    *((_QWORD *)&v218 + 1) = v163;
    v219.m128i_i64[0] = 7;
    if ( v144 < 0 )
    {
      v165 = 0;
      goto LABEL_222;
    }
    if ( v144 )
    {
      nullsub_1(v164);
      v165 = 1;
      v166 = sub_140001650(v144, 1);
      if ( !v166 )
      {
LABEL_222:
        v215 = 1;
        sub_1416C2D4B(v165, v144);
      }
      v167 = v166;
      sub_141684120(v166, v204, v144);
    }
    else
    {
      v167 = 1;
    }
    v221.m256i_i8[0] = 3;
    v221.m256i_i64[1] = v144;
    v221.m256i_i64[2] = v167;
    v221.m256i_i64[3] = v144;
    v215 = 0;
    sub_140307860(&v211, v206, &v218, &v221);
    if ( v211.m256i_i8[0] != -1 )
      sub_1400104F0(&v211);
    *(_OWORD *)((char *)&v221.m256i_u32[1] + 3) = *(_OWORD *)v206;
    *(__int64 *)((char *)&v221.m256i_i64[2] + 7) = *(_QWORD *)&v206[16];
    v168 = (__int64)v205;
    *v205 = 5;
    v169 = _mm_loadu_si128((const __m128i *)&v221);
    *(_OWORD *)(v168 + 16) = *(_OWORD *)((char *)&v221.m256i_u64[1] + 7);
    *(__m128i *)(v168 + 1) = v169;
    v221.m256i_i64[1] = 1;
    v221.m256i_i64[2] = v168;
    v221.m256i_i64[3] = 1;
    v221.m256i_i8[0] = 4;
    v224 = 0;
    sub_140307860(&v211, &v195, &v207, &v221);
    if ( v211.m256i_i8[0] != -1 )
      sub_1400104F0(&v211);
    *(__m128i *)&v221.m256i_u64[1] = _mm_loadu_si128(&v195);
    v221.m256i_i64[3] = v196;
    v221.m256i_i8[0] = 5;
    v170 = a2[2];
    if ( v170 == *a2 )
      sub_1416890A0(a2);
    v171 = a2[1];
    v172 = 32 * v170;
    v173 = _mm_loadu_si128((const __m128i *)&v221);
    *(__m128i *)(v171 + v172 + 16) = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
    *(__m128i *)(v171 + v172) = v173;
    a2[2] = v170 + 1;
    v43 = v220;
    if ( v212 )
      sub_140001660(v204, v212, 1);
    if ( !v43 )
      return sub_1400104F0(&v189);
    v39 = 1;
    v40 = v210;
LABEL_237:
    v38 = v43;
    goto LABEL_54;
  }
  switch ( *(_BYTE *)v9 )
  {
    case 0:
      v221.m256i_i8[0] = 0;
      break;
    case 1:
    case 2:
      v10 = *(_OWORD *)v9;
      *(__m128i *)&v221.m256i_u64[2] = _mm_loadu_si128((const __m128i *)(v9 + 16));
      *(_OWORD *)v221.m256i_i8 = v10;
      break;
    case 3:
      sub_14149C500(&v221.m256i_u64[1], v9 + 8);
      v221.m256i_i8[0] = 3;
      break;
    case 4:
      sub_1402CE260(&v221.m256i_u64[1], *(_QWORD *)(v9 + 16), *(_QWORD *)(v9 + 24));
      v221.m256i_i8[0] = 4;
      break;
    case 5:
      if ( *(_QWORD *)(v9 + 24) )
      {
        v16 = *(_QWORD *)(v9 + 8);
        if ( !v16 )
          sub_1416C3040(&off_141747358);
        sub_1402CCD80(&v221.m256i_u64[1], v16, *(_QWORD *)(v9 + 16));
      }
      else
      {
        v221.m256i_i64[1] = 0;
        v221.m256i_i64[3] = 0;
      }
      v221.m256i_i8[0] = 5;
      break;
  }
  si128 = _mm_load_si128((const __m128i *)&v221.m256i_u64[2]);
  v189 = v221.m256i_i8[0];
  v190 = *(__int64 *)((char *)v221.m256i_i64 + 1);
  v191 = *(__int32 *)((char *)&v221.m256i_i32[2] + 1);
  v192 = *(__int16 *)((char *)&v221.m256i_i16[6] + 1);
  v193 = v221.m256i_i8[15];
  v221.m256i_i8[0] = 0;
  sub_1400104F0(&v221);
  if ( v6 == 4 )
    goto LABEL_8;
LABEL_23:
  if ( v6 == 9 )
  {
    if ( !(*(_QWORD *)v8 ^ 0x65706F6C65766564LL | v8[8] ^ 0x72LL) )
      goto LABEL_40;
    if ( *(_QWORD *)v8 ^ 0x6E61747369737361LL | v8[8] ^ 0x74LL )
      goto LABEL_29;
    v201 = 0;
    v202 = 8;
    v203 = 0;
    sub_1409EAAF0((__int64)&v185, (unsigned __int8 *)&v189);
    v46 = v187;
    if ( v187 )
    {
      *(_QWORD *)v206 = 0;
      *(_QWORD *)&v206[16] = 0;
      nullsub_1(v45);
      v47 = (_DWORD *)sub_140001650(4, 1);
      if ( !v47 )
        sub_1416C2D4B(1, 4);
      *v47 = 1701869940;
      *(_QWORD *)&v218 = 4;
      *((_QWORD *)&v218 + 1) = v47;
      v219.m128i_i64[0] = 4;
      nullsub_1(v48);
      v49 = (_DWORD *)sub_140001650(4, 1);
      v220 = (__int64)v49;
      if ( !v49 )
        sub_1416C2D4B(1, 4);
      *v49 = 1954047348;
      v221.m256i_i8[0] = 3;
      v221.m256i_i64[1] = 4;
      v221.m256i_i64[2] = (__int64)v49;
      v221.m256i_i64[3] = 4;
      sub_140307860(&v211, v206, &v218, &v221);
      if ( v211.m256i_i8[0] != -1 )
        sub_1400104F0(&v211);
      nullsub_1(v50);
      v51 = (_DWORD *)sub_140001650(4, 1);
      if ( !v51 )
        sub_1416C2D4B(1, 4);
      *v51 = 1954047348;
      *(_QWORD *)&v218 = 4;
      *((_QWORD *)&v218 + 1) = v51;
      v219.m128i_i64[0] = 4;
      v53 = v186;
      nullsub_1(v52);
      v54 = sub_140001650(v46, 1);
      v220 = v54;
      if ( !v54 )
        sub_1416C2D4B(1, v46);
      v55 = v54;
      sub_141684120(v54, v53, v46);
      v221.m256i_i8[0] = 3;
      v221.m256i_i64[1] = v46;
      v221.m256i_i64[2] = v55;
      v221.m256i_i64[3] = v46;
      sub_140307860(&v211, v206, &v218, &v221);
      if ( v211.m256i_i8[0] != -1 )
        sub_1400104F0(&v211);
      *(__m128i *)&v221.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v206);
      v221.m256i_i64[3] = *(_QWORD *)&v206[16];
      v221.m256i_i8[0] = 5;
      v56 = v203;
      if ( v203 == v201 )
        sub_1416890A0(&v201);
      v57 = v202;
      v58 = 32 * v56;
      v59 = _mm_loadu_si128((const __m128i *)&v221);
      *(__m128i *)(v202 + v58 + 16) = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
      *(__m128i *)(v57 + v58) = v59;
      v203 = v56 + 1;
    }
    v60 = sub_141433D50(aToolCalls, 10, a1);
    if ( !v60 || *(_BYTE *)v60 != 4 )
    {
LABEL_162:
      if ( v203 == 1
        && (v128 = sub_141433D50(aType_8, 4, v202)) != 0
        && *(_BYTE *)v128 == 3
        && *(_QWORD *)(v128 + 24) == 4
        && **(_DWORD **)(v128 + 16) == 1954047348 )
      {
        if ( !v203 )
          sub_1416C30E3(0, 0, &off_1417A8568);
        v174 = sub_141433D50(aText_10, 4, v202);
        v175 = 1;
        if ( v174 && *(_BYTE *)v174 == 3 )
        {
          v175 = *(_QWORD *)(v174 + 16);
          v176 = *(_QWORD *)(v174 + 24);
        }
        else
        {
          v176 = 0;
        }
        sub_140388B60((unsigned int)&v221, v176, 0, 1, 1);
        v178 = v221.m256i_i64[1];
        if ( v221.m256i_i32[0] == 1 )
          sub_1416C2D4B(v221.m256i_i64[1], v221.m256i_i64[2]);
        v179 = v221.m256i_i64[2];
        if ( v176 )
          sub_141684120(v221.m256i_i64[2], v175, v176);
        v220 = v178;
        v207 = v178;
        v210 = v179;
        v208 = (_DWORD *)v179;
        v209 = v176;
        *(_QWORD *)v206 = 0;
        *(_QWORD *)&v206[16] = 0;
        nullsub_1(v177);
        v180 = (_DWORD *)sub_140001650(4, 1);
        if ( !v180 )
          sub_1416C2D4B(1, 4);
        *v180 = 1701605234;
        *(_QWORD *)&v218 = 4;
        *((_QWORD *)&v218 + 1) = v180;
        v219.m128i_i64[0] = 4;
        v227 = 1;
        sub_140B56640(&v221, &off_1417A4ED8);
        if ( v221.m256i_i8[0] == -1 )
        {
          v211.m256i_i64[0] = v221.m256i_i64[1];
          sub_1416C3060(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v211,
            (unsigned int)&off_1417A5560,
            (__int64)&off_1417A8580);
        }
        v181 = _mm_loadu_si128((const __m128i *)&v221);
        *(__m128i *)&v211.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
        *(__m128i *)v211.m256i_i8 = v181;
        v227 = 0;
        sub_140307860(&v221, v206, &v218, &v211);
        if ( v221.m256i_i8[0] != -1 )
          sub_1400104F0(&v221);
        nullsub_1(v182);
        v183 = (_DWORD *)sub_140001650(7, 1);
        if ( !v183 )
          sub_1416C2D4B(1, 7);
        *(_DWORD *)((char *)v183 + 3) = 1953391988;
        *v183 = 1953394531;
        *(_QWORD *)&v218 = 7;
        *((_QWORD *)&v218 + 1) = v183;
        v219.m128i_i64[0] = 7;
        v226 = 1;
        sub_140B56520(&v221, &v207);
        if ( v221.m256i_i8[0] == -1 )
        {
          v211.m256i_i64[0] = v221.m256i_i64[1];
          sub_1416C3060(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v211,
            (unsigned int)&off_1417A5560,
            (__int64)&off_1417A8580);
        }
        v184 = _mm_loadu_si128((const __m128i *)&v221);
        *(__m128i *)&v211.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
        *(__m128i *)v211.m256i_i8 = v184;
        v226 = 0;
        sub_140307860(&v221, v206, &v218, &v211);
        if ( v221.m256i_i8[0] != -1 )
          sub_1400104F0(&v221);
        *(__m128i *)&v221.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v206);
        v221.m256i_i64[3] = *(_QWORD *)&v206[16];
        v221.m256i_i8[0] = 5;
        sub_1409CF090(a2, (__int128 *)v221.m256i_i8);
        if ( v220 )
          sub_140001660(v210, v220, 1);
      }
      else
      {
        *(_QWORD *)v206 = 0;
        *(_QWORD *)&v206[16] = 0;
        nullsub_1(v61);
        v129 = (_DWORD *)sub_140001650(4, 1);
        if ( !v129 )
          sub_1416C2D4B(1, 4);
        *v129 = 1701605234;
        *(_QWORD *)&v218 = 4;
        *((_QWORD *)&v218 + 1) = v129;
        v219.m128i_i64[0] = 4;
        nullsub_1(v130);
        v131 = sub_140001650(9, 1);
        v220 = v131;
        if ( !v131 )
          sub_1416C2D4B(1, 9);
        *(_QWORD *)v131 = 0x6E61747369737361LL;
        *(_BYTE *)(v131 + 8) = 116;
        v221.m256i_i8[0] = 3;
        v221.m256i_i64[1] = 9;
        v221.m256i_i64[2] = v131;
        v221.m256i_i64[3] = 9;
        sub_140307860(&v211, v206, &v218, &v221);
        if ( v211.m256i_i8[0] != -1 )
          sub_1400104F0(&v211);
        nullsub_1(v132);
        v133 = (_DWORD *)sub_140001650(7, 1);
        if ( !v133 )
          sub_1416C2D4B(1, 7);
        *(_DWORD *)((char *)v133 + 3) = 1953391988;
        *v133 = 1953394531;
        *(_QWORD *)&v218 = 7;
        *((_QWORD *)&v218 + 1) = v133;
        v219.m128i_i64[0] = 7;
        v225 = 1;
        sub_140467C90(&v221, &v201);
        if ( v221.m256i_i8[0] == -1 )
        {
          v211.m256i_i64[0] = v221.m256i_i64[1];
          sub_1416C3060(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v211,
            (unsigned int)&off_1417A5560,
            (__int64)&off_1417A8598);
        }
        v134 = _mm_loadu_si128((const __m128i *)&v221);
        *(__m128i *)&v211.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
        *(__m128i *)v211.m256i_i8 = v134;
        v225 = 0;
        sub_140307860(&v221, v206, &v218, &v211);
        if ( v221.m256i_i8[0] != -1 )
          sub_1400104F0(&v221);
        *(__m128i *)&v221.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v206);
        v221.m256i_i64[3] = *(_QWORD *)&v206[16];
        v221.m256i_i8[0] = 5;
        v135 = a2[2];
        if ( v135 == *a2 )
          sub_1416890A0(a2);
        v136 = a2[1];
        v137 = 32 * v135;
        v138 = _mm_loadu_si128((const __m128i *)&v221);
        *(__m128i *)(v136 + v137 + 16) = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
        *(__m128i *)(v136 + v137) = v138;
        a2[2] = v135 + 1;
      }
      if ( v185 )
        sub_140001660(v186, v185, 1);
      v139 = v202;
      v210 = v203;
      v220 = 0;
      v212 = v202;
      while ( v210 != v220 )
      {
        ++v220;
        v140 = v139 + 32;
        sub_1402C3260();
        v139 = v140;
      }
      if ( !v201 )
        return sub_1400104F0(&v189);
      v40 = v202;
      v38 = 32 * v201;
      v39 = 8;
      goto LABEL_54;
    }
    v62 = *(_QWORD *)(v60 + 16);
    v63 = v62 + 32LL * *(_QWORD *)(v60 + 24);
    v64 = &v211;
    v65 = _mm_load_si128((const __m128i *)&xmmword_1417A2D70);
    v66 = _mm_cvtsi32_si128(0x7765u);
    while ( 1 )
    {
      if ( v62 == v63 )
        goto LABEL_162;
      v67 = v63;
      v68 = v64;
      v210 = v62;
      v69 = sub_141433D50(aId_6, 2, v62);
      v71 = 13;
      v72 = v220;
      if ( !v69 )
        break;
      v73 = &unk_1417A844B;
      if ( *(_BYTE *)v69 != 3 )
        goto LABEL_79;
      v71 = *(_QWORD *)(v69 + 24);
      if ( v71 < 0 )
      {
        v74 = 0;
        goto LABEL_199;
      }
      if ( v71 )
      {
        v73 = *(void **)(v69 + 16);
LABEL_79:
        nullsub_1(v70);
        v74 = 1;
        v75 = sub_140001650(v71, 1);
        if ( !v75 )
        {
          v72 = v71;
LABEL_199:
          sub_1416C2D4B(v74, v72);
        }
        v220 = v75;
        v205 = (_BYTE *)v71;
        sub_141684120(v75, v73, v71);
        LODWORD(v204) = 0;
        goto LABEL_81;
      }
      v220 = 1;
      LODWORD(v204) = 1;
      v205 = nullptr;
LABEL_81:
      v76 = v210;
      v77 = sub_141433D50(aFunction_0, 8, v210);
      v78 = v77;
      v64 = v68;
      if ( v77 )
      {
        v79 = sub_141433D50(aName_7, 4, v77);
        v80 = 4;
        v212 = 4;
        if ( v79 )
        {
          v81 = (__int64 *)"tool";
          if ( *(_BYTE *)v79 == 3 )
          {
            v81 = *(__int64 **)(v79 + 16);
            v82 = *(_QWORD *)(v79 + 24);
            if ( v82 == 18 )
            {
              if ( _mm_movemask_epi8(
                     _mm_and_si128(
                       _mm_cmpeq_epi8(_mm_cvtsi32_si128(*((unsigned __int16 *)v81 + 8)), v66),
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v81), v65))) != 0xFFFF )
              {
                v85 = _byteswap_uint64(*v81);
                v80 = 0x7765625F73656172LL;
                if ( v85 != 0x7765625F73656172LL
                  || (v85 = _byteswap_uint64(*(__int64 *)((char *)v81 + 3)),
                      v86 = 0,
                      v80 = 0x5F7365617263685FLL,
                      v85 != 0x5F7365617263685FLL) )
                {
                  v86 = 2 * (v80 >= v85) - 1;
                }
                v87 = v86 == 0;
                v212 = 8LL * (v86 != 0) + 10;
                goto LABEL_107;
              }
LABEL_100:
              v212 = 10;
              v81 = &qword_1417A61E9;
              goto LABEL_109;
            }
            v212 = v82;
            if ( v82 == 10 )
            {
              v83 = *v81 ^ 0x726165735F626577LL;
              v84 = *((unsigned __int16 *)v81 + 4) ^ 0x6863LL;
              v212 = 10;
              v80 = v83 | v84;
              if ( !v80 )
                goto LABEL_100;
            }
            else
            {
              if ( v82 > 0xA )
              {
                v88 = _byteswap_uint64(*v81);
                v89 = 0x7765625F73656172LL;
                if ( v88 != 0x7765625F73656172LL
                  || (v88 = _byteswap_uint64(*(__int64 *)((char *)v81 + 3)),
                      v90 = 0,
                      v89 = 0x5F7365617263685FLL,
                      v88 != 0x5F7365617263685FLL) )
                {
                  v90 = 2 * (v89 >= v88) - 1;
                }
                v87 = v90 == 0;
                v80 = v212;
                if ( !v90 )
                  v80 = 10;
                v212 = v80;
LABEL_107:
                if ( v87 )
                  v81 = &qword_1417A61E9;
                goto LABEL_109;
              }
              if ( !v212 )
              {
                v198 = 1;
                v197 = 1;
                v212 = 0;
                goto LABEL_111;
              }
            }
          }
        }
        else
        {
          v81 = (__int64 *)"tool";
        }
LABEL_109:
        nullsub_1(v80);
        v91 = v212;
        v92 = sub_140001650(v212, 1);
        if ( !v92 )
          sub_1416C2D4B(1, v91);
        v198 = v92;
        sub_141684120(v92, v81, v91);
        v197 = 0;
        v63 = v67;
LABEL_111:
        v93 = sub_141433D50(aArguments_1, 9, v78);
        v94 = 2;
        if ( v93 )
        {
          v95 = asc_1417A4EB5;
          if ( *(_BYTE *)v93 == 3 )
          {
            v95 = *(const char **)(v93 + 16);
            v94 = *(_QWORD *)(v93 + 24);
          }
        }
        else
        {
          v95 = asc_1417A4EB5;
        }
        v221.m256i_i64[0] = (__int64)v95;
        v221.m256i_i64[1] = v94;
        *(_OWORD *)&v221.m256i_u64[2] = 0;
        v222 = v95;
        v223 = v94;
        sub_1408A6200(v68, &v221);
        if ( v211.m256i_i8[0] == -1 )
        {
          v98 = (_QWORD *)v211.m256i_i64[1];
          v221.m256i_i64[0] = v211.m256i_i64[1];
          if ( v94 < 0 )
          {
            v99 = 0;
            goto LABEL_239;
          }
          if ( v94 )
          {
            nullsub_1(v96);
            v99 = 1;
            v100 = sub_140001650(v94, 1);
            if ( !v100 )
            {
              v188 = v94;
LABEL_239:
              sub_1416C2D4B(v99, v188);
            }
            v101 = v100;
            sub_141684120(v100, v95, v94);
            v102 = v101;
            v64 = v68;
          }
          else
          {
            v102 = 1;
          }
          *((_QWORD *)&v218 + 1) = v94;
          v188 = v102;
          v219.m128i_i64[0] = v102;
          v219.m128i_i64[1] = v94;
          LOBYTE(v218) = 3;
          v103 = *v98;
          v87 = *v98 == 1;
          v199 = v98;
          if ( v87 )
          {
            sub_140018650(v98 + 1);
          }
          else if ( !v103 )
          {
            v104 = v199[2];
            if ( v104 )
              sub_140001660(v199[1], v104, 1);
          }
          sub_140001660(v199, 40, 8);
        }
        else
        {
          v97 = _mm_loadu_si128((const __m128i *)&v211);
          v219 = _mm_loadu_si128((const __m128i *)&v211.m256i_u64[2]);
          v218 = (unsigned __int128)v97;
        }
        v195.m128i_i64[0] = 0;
        v196 = 0;
        nullsub_1(v96);
        v105 = (_DWORD *)sub_140001650(4, 1);
        if ( !v105 )
          sub_1416C2D4B(1, 4);
        *v105 = 1701869940;
        v207 = 4;
        v208 = v105;
        v209 = 4;
        nullsub_1(v106);
        v107 = (_QWORD *)sub_140001650(8, 1);
        v199 = v107;
        if ( !v107 )
          sub_1416C2D4B(1, 8);
        *v107 = 0x6573755F6C6F6F74LL;
        v221.m256i_i8[0] = 3;
        v221.m256i_i64[1] = 8;
        v221.m256i_i64[2] = (__int64)v107;
        v221.m256i_i64[3] = 8;
        sub_140307860(v64, &v195, &v207, &v221);
        if ( v211.m256i_i8[0] != -1 )
          sub_1400104F0(v64);
        nullsub_1(v108);
        v109 = (_WORD *)sub_140001650(2, 1);
        if ( !v109 )
          sub_1416C2D4B(1, 2);
        *v109 = 25705;
        v207 = 2;
        v208 = v109;
        v209 = 2;
        v111 = 1;
        v112 = (__int64)v205;
        if ( !(_BYTE)v204 )
        {
          nullsub_1(v110);
          v113 = sub_140001650(v112, 1);
          if ( !v113 )
          {
            v214 = 1;
            sub_1416C2D4B(1, v112);
          }
          v111 = v113;
          sub_141684120(v113, v220, v112);
        }
        v221.m256i_i8[0] = 3;
        v221.m256i_i64[1] = v112;
        v221.m256i_i64[2] = v111;
        v221.m256i_i64[3] = v112;
        v214 = 0;
        v64 = v68;
        sub_140307860(v68, &v195, &v207, &v221);
        if ( v211.m256i_i8[0] != -1 )
          sub_1400104F0(v68);
        nullsub_1(v114);
        v115 = (_DWORD *)sub_140001650(4, 1);
        if ( !v115 )
          sub_1416C2D4B(1, 4);
        *v115 = 1701667182;
        v207 = 4;
        v208 = v115;
        v209 = 4;
        v117 = 1;
        v118 = v212;
        if ( !(_BYTE)v197 )
        {
          nullsub_1(v116);
          v119 = sub_140001650(v118, 1);
          if ( !v119 )
          {
            v213 = 1;
            sub_1416C2D4B(1, v118);
          }
          v117 = v119;
          sub_141684120(v119, v198, v118);
        }
        v221.m256i_i8[0] = 3;
        v221.m256i_i64[1] = v118;
        v221.m256i_i64[2] = v117;
        v221.m256i_i64[3] = v118;
        v213 = 0;
        sub_140307860(v64, &v195, &v207, &v221);
        if ( v211.m256i_i8[0] != -1 )
          sub_1400104F0(v64);
        nullsub_1(v120);
        v121 = sub_140001650(5, 1);
        if ( !v121 )
          sub_1416C2D4B(1, 5);
        *(_BYTE *)(v121 + 4) = 116;
        *(_DWORD *)v121 = 1970302569;
        v207 = 5;
        v208 = (_DWORD *)v121;
        v209 = 5;
        v228 = 1;
        sub_140B842D0(&v221, &v218);
        if ( v221.m256i_i8[0] == -1 )
        {
          v211.m256i_i64[0] = v221.m256i_i64[1];
          sub_1416C3060(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v211,
            (unsigned int)&off_1417A5560,
            (__int64)&off_1417A8528);
        }
        v122 = _mm_loadu_si128((const __m128i *)&v221);
        *(__m128i *)&v211.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
        *(__m128i *)v211.m256i_i8 = v122;
        v228 = 0;
        sub_140307860(&v221, &v195, &v207, v64);
        if ( v221.m256i_i8[0] != -1 )
          sub_1400104F0(&v221);
        *(__m128i *)v221.m256i_i8 = v195;
        v221.m256i_i64[2] = v196;
        *(_QWORD *)&v206[23] = v196;
        *(__m128i *)&v206[7] = v195;
        v123 = _mm_loadu_si128((const __m128i *)&v206[15]);
        *(__m128i *)v211.m256i_i8 = _mm_loadu_si128((const __m128i *)v206);
        *(__m128i *)((char *)&v211.m256i_u64[1] + 7) = v123;
        sub_1400104F0(&v218);
        if ( v212 )
          sub_140001660(v198, v212, 1);
        if ( v205 )
          sub_140001660(v220, v205, 1);
        v221.m256i_i8[0] = 5;
        *(_OWORD *)&v221.m256i_u64[2] = *(_OWORD *)((char *)&v211.m256i_u64[1] + 7);
        *(_OWORD *)&v221.m256i_i8[1] = *(_OWORD *)v211.m256i_i8;
        v124 = v203;
        v125 = v210;
        if ( v203 == v201 )
          sub_1416890A0(&v201);
        v126 = v202;
        v61 = 32 * v124;
        v127 = _mm_loadu_si128((const __m128i *)&v221);
        *(__m128i *)(v202 + v61 + 16) = _mm_loadu_si128((const __m128i *)&v221.m256i_u64[2]);
        *(__m128i *)(v126 + v61) = v127;
        v203 = v124 + 1;
        v62 = v125 + 32;
      }
      else
      {
        if ( v205 )
          sub_140001660(v220, v205, 1);
        v62 = v76 + 32;
      }
    }
    v73 = &unk_1417A844B;
    goto LABEL_79;
  }
  if ( v6 != 6 || *(_DWORD *)v8 ^ 0x74737973 | *((unsigned __int16 *)v8 + 2) ^ 0x6D65 )
    goto LABEL_29;
LABEL_40:
  sub_1409EAAF0((__int64)v206, (unsigned __int8 *)&v189);
  v29 = *a3;
  v30 = a3[1];
  v31 = a3[2];
  *a3 = -1;
  if ( v29 == -1 )
  {
    v42 = *(_QWORD *)&v206[8];
    v43 = *(_QWORD *)v206;
    v44 = *(_QWORD *)&v206[16];
LABEL_158:
    if ( v44 )
    {
      *a3 = v43;
      a3[1] = v42;
      a3[2] = v44;
      return sub_1400104F0(&v189);
    }
    if ( !v43 )
      return sub_1400104F0(&v189);
    v39 = 1;
    v40 = v42;
    goto LABEL_237;
  }
  if ( !v31 )
  {
    v42 = *(_QWORD *)&v206[8];
    v43 = *(_QWORD *)v206;
    v44 = *(_QWORD *)&v206[16];
    if ( v29 )
      sub_140001660(v30, v29, 1);
    goto LABEL_158;
  }
  if ( *(_QWORD *)&v206[16] )
  {
    v218 = __PAIR128__(v30, v29);
    v219.m128i_i64[0] = v31;
    v221.m256i_i64[0] = (__int64)&v218;
    v221.m256i_i64[1] = (__int64)sub_1400015F0;
    v221.m256i_i64[2] = (__int64)v206;
    v221.m256i_i64[3] = (__int64)sub_1400015F0;
    sub_14149C0F0(&v211, &unk_1417A85B0, &v221);
    v32 = *(_OWORD *)v211.m256i_i8;
    v33 = v211.m256i_i64[2];
    if ( (_QWORD)v218 )
      sub_140001660(*((_QWORD *)&v218 + 1), v218, 1);
    if ( v33 )
    {
      *(_OWORD *)a3 = v32;
      a3[2] = v33;
    }
    else if ( (_QWORD)v32 )
    {
      sub_140001660(*((_QWORD *)&v32 + 1), v32, 1);
    }
  }
  else
  {
    *a3 = v29;
    a3[1] = v30;
    a3[2] = v31;
  }
  v38 = *(_QWORD *)v206;
  if ( *(_QWORD *)v206 )
  {
    v40 = *(_QWORD *)&v206[8];
    v39 = 1;
    goto LABEL_54;
  }
  return sub_1400104F0(&v189);
}