// module: codexmate_lib/core/relay/invariants
// addr: 0x140489f60
// name: verify_invariants_with_depth
// win 1.2.3 | = mac codexmate_lib::core::relay::invariants::verify_invariants_with_depth | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall verify_invariants_with_depth(__int64 a1, _QWORD *a2, char a3, char a4)
{
  _QWORD *v5; // r12
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  __m128i *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __m128i *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __m128i *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __m128i v30; // kr10_16
  __int64 v31; // rax
  __int64 v32; // r14
  bool v33; // cc
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rax
  __m128i *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rcx
  __m128i v51; // kr40_16
  __int64 v52; // r8
  __int32 v53; // r12d
  bool v54; // zf
  __int64 v55; // rcx
  char v56; // r14
  __m128i *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __m128i *v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r12
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r15
  __int32 v73; // r12d
  __m128i v74; // xmm0
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rsi
  _QWORD *v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rsi
  _QWORD *v87; // rdi
  __int64 v88; // rdx
  __m128i v89; // xmm0
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rcx
  __int64 v94; // r14
  __int64 v95; // rdi
  __int64 v96; // r15
  __int64 v97; // r13
  const __m128i *v98; // rbx
  __m128i si128; // xmm0
  __int64 v101; // rax
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // r14
  unsigned __int64 v105; // r14
  __int64 v106; // rsi
  _QWORD *v107; // rdi
  __int64 v108; // rdx
  __int64 v109; // r15
  __int64 v110; // rdi
  __int64 v111; // r12
  __int64 v112; // r13
  const __m128i *v113; // rbx
  __m128i v115; // xmm0
  __int64 v116; // rax
  __int64 v117; // rdx
  unsigned __int64 v118; // rax
  __int64 v119; // r15
  __int64 v120; // r15
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rdi
  __int64 v124; // rsi
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rsi
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rdi
  __int64 v132; // r13
  char v133; // al
  __int64 v134; // rcx
  __m128i *v135; // rax
  __int64 v136; // rsi
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rcx
  __m128i *v140; // rax
  __int64 v141; // rsi
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rcx
  __m128i *v145; // rax
  __int64 v146; // rsi
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rcx
  __m128i *v150; // rax
  __int64 v151; // rsi
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rdi
  __int64 v155; // rsi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rsi
  _QWORD *v159; // rdi
  __int64 v160; // rdx
  __int64 v161; // rsi
  _QWORD *v162; // rdi
  __int64 v163; // rdx
  __int64 v164; // rsi
  _QWORD *v165; // rdi
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  _DWORD *v169; // rax
  __int64 v170; // rdi
  __int64 v171; // rsi
  __int64 v172; // rax
  __int64 v173; // rcx
  _QWORD v175[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v176[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v177[2]; // [rsp+58h] [rbp-28h] BYREF
  __m128i v178; // [rsp+68h] [rbp-18h] BYREF
  __m128i v179; // [rsp+78h] [rbp-8h] BYREF
  __int64 v180; // [rsp+88h] [rbp+8h]
  __int64 v181; // [rsp+90h] [rbp+10h]
  __m128i v182; // [rsp+98h] [rbp+18h] BYREF
  __int64 v183; // [rsp+A8h] [rbp+28h]
  __m128i v184; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v185; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v186; // [rsp+D0h] [rbp+50h]
  __int128 v187; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v188; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v189; // [rsp+100h] [rbp+80h]
  __int64 v190; // [rsp+118h] [rbp+98h]
  __m128i v191[3]; // [rsp+120h] [rbp+A0h] BYREF
  char v192; // [rsp+150h] [rbp+D0h] BYREF
  char v193; // [rsp+160h] [rbp+E0h] BYREF
  char v194; // [rsp+170h] [rbp+F0h] BYREF
  unsigned __int8 v195; // [rsp+177h] [rbp+F7h] BYREF
  char v196; // [rsp+178h] [rbp+F8h] BYREF
  unsigned __int8 v197; // [rsp+179h] [rbp+F9h] BYREF
  __int64 v198; // [rsp+1A8h] [rbp+128h]
  __m128i v199; // [rsp+1B0h] [rbp+130h] BYREF
  _BYTE v200[48]; // [rsp+1C0h] [rbp+140h]
  __m128i v201; // [rsp+1F0h] [rbp+170h]
  __m128i v202; // [rsp+200h] [rbp+180h]
  __int64 v203; // [rsp+210h] [rbp+190h]
  __int64 v204; // [rsp+218h] [rbp+198h]
  __int64 v205; // [rsp+228h] [rbp+1A8h]
  __int64 v206; // [rsp+230h] [rbp+1B0h]
  __int64 v207; // [rsp+240h] [rbp+1C0h]
  __int64 v208; // [rsp+248h] [rbp+1C8h]
  _QWORD *v209; // [rsp+260h] [rbp+1E0h]
  char v210; // [rsp+26Fh] [rbp+1EFh] BYREF
  __m128i v211; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v212; // [rsp+280h] [rbp+200h]
  __m256i v213; // [rsp+290h] [rbp+210h] BYREF
  __int128 v214; // [rsp+2B0h] [rbp+230h]
  __int64 v215; // [rsp+2C8h] [rbp+248h]
  __m128i v216; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v217; // [rsp+2E0h] [rbp+260h]
  char v218; // [rsp+2F7h] [rbp+277h]
  __int128 v219; // [rsp+2F8h] [rbp+278h] BYREF
  __int64 v220; // [rsp+308h] [rbp+288h]
  __int64 v221; // [rsp+310h] [rbp+290h]
  __int64 v222; // [rsp+318h] [rbp+298h]
  __int64 v223; // [rsp+320h] [rbp+2A0h]

  v223 = -2;
  v218 = a4;
  v5 = a2;
  *(_QWORD *)&v219 = 0;
  *((_QWORD *)&v219 + 1) = 8;
  v220 = 0;
  sub_14148D130(&v184, a2[9], a2[10]);
  v7 = v184.m128i_i64[1];
  if ( v184.m128i_i64[0] == -1 )
  {
    v13 = v184.m128i_i64[1];
    if ( (unsigned __int8)sub_140476D40(v184.m128i_i64[1]) )
    {
      v213.m256i_i64[0] = v13;
      v199.m128i_i64[0] = (__int64)&v213;
      v199.m128i_i64[1] = (__int64)sub_141490720;
      sub_14149C0F0(v176, &unk_141759C0E, &v199);
      v222 = v176[0];
      v221 = v176[1];
      v14 = v176[2];
      v15 = v220;
      if ( v220 == (_QWORD)v219 )
        sub_1416890A0(&v219);
      v16 = *((_QWORD *)&v219 + 1);
      v17 = 32 * v15;
      *(_QWORD *)(*((_QWORD *)&v219 + 1) + v17) = v222;
      *(_QWORD *)(v16 + v17 + 8) = v221;
      *(_QWORD *)(v16 + v17 + 16) = v14;
      *(_BYTE *)(v16 + v17 + 24) = 0;
      v220 = v15 + 1;
      sub_140018650(&v213);
    }
    else
    {
      v199.m128i_i64[0] = v13;
      sub_140018650(&v199);
    }
    v7 = 1;
    v8 = 0;
    v198 = 0;
    v209 = v5;
    v181 = 1;
    if ( a3 )
    {
LABEL_3:
      sub_14047B4A0((__int64)&v184, (__int64)v5, v7, v8);
      if ( *((_QWORD *)&v185 + 1) != -1 && *((_QWORD *)&v186 + 1) == 6 )
      {
        v9 = *(_DWORD *)v186 ^ 0x616D6961u;
        if ( !((unsigned int)v9 | *(unsigned __int16 *)(v186 + 4) ^ 0x3169) )
        {
          nullsub_1(v9);
          v10 = (__m128i *)sub_140001650(59, 1);
          if ( !v10 )
            sub_1416C2D4B(1, 59);
          qmemcpy(&v10[1], "ot keep top-level model_provider = \"aimai1\"", 43);
          v222 = (__int64)v10;
          *v10 = _mm_loadu_si128((const __m128i *)&xmmword_141759A4A);
          v11 = v220;
          if ( v220 == (_QWORD)v219 )
            sub_1416890A0(&v219);
          v12 = *((_QWORD *)&v219 + 1);
          v9 = 32 * v11;
          *(_QWORD *)(*((_QWORD *)&v219 + 1) + v9) = 59;
          *(_QWORD *)(v12 + v9 + 8) = v222;
          *(_QWORD *)(v12 + v9 + 16) = 59;
          *(_BYTE *)(v12 + v9 + 24) = 0;
          v220 = v11 + 1;
        }
      }
      if ( v195 || v196 )
      {
        v199.m128i_i64[0] = (__int64)&v195;
        v199.m128i_i64[1] = (__int64)sub_1414AC660;
        *(_QWORD *)v200 = &v196;
        *(_QWORD *)&v200[8] = sub_1414AC660;
        sub_14149C0F0(&v216, &unk_141759A85, &v199);
        v221 = v216.m128i_i64[1];
        v222 = v216.m128i_i64[0];
        v18 = v217;
        v19 = v220;
        if ( v220 == (_QWORD)v219 )
          sub_1416890A0(&v219);
        v20 = *((_QWORD *)&v219 + 1);
        v9 = 32 * v19;
        *(_QWORD *)(*((_QWORD *)&v219 + 1) + v9) = v222;
        *(_QWORD *)(v20 + v9 + 8) = v221;
        *(_QWORD *)(v20 + v9 + 16) = v18;
        *(_BYTE *)(v20 + v9 + 24) = 0;
        v220 = v19 + 1;
        v5 = v209;
        if ( !v194 )
        {
LABEL_25:
          v215 = a1;
          if ( (unsigned __int8)sub_1404105D0(v5) )
          {
            nullsub_1(v26);
            v27 = (__m128i *)sub_140001650(39, 1);
            if ( !v27 )
              sub_1416C2D4B(1, 39);
            qmemcpy(&v27[1], "ot keep takeover backup", 23);
            *v27 = _mm_loadu_si128((const __m128i *)&xmmword_141759B19);
            v222 = (__int64)v27;
            v28 = v220;
            if ( v220 == (_QWORD)v219 )
              sub_1416890A0(&v219);
            v29 = *((_QWORD *)&v219 + 1);
            v26 = 32 * v28;
            *(_QWORD *)(*((_QWORD *)&v219 + 1) + v26) = 39;
            v25 = v222;
            *(_QWORD *)(v29 + v26 + 8) = v222;
            *(_QWORD *)(v29 + v26 + 16) = 39;
            *(_BYTE *)(v29 + v26 + 24) = 0;
            v220 = v28 + 1;
          }
          if ( v188.m128i_i64[1] == -1 )
            goto LABEL_179;
          v30 = v189;
          v211 = v189;
          v31 = sub_141470CD0(v26, v25);
          v32 = v31;
          if ( *(_BYTE *)(v31 + 16) == 1 )
          {
            ++*(_QWORD *)v31;
            v33 = v30.m128i_i64[1] <= 0xCuLL;
            if ( v30.m128i_i64[1] == 12 )
            {
LABEL_33:
              v34 = _byteswap_uint64(*(_QWORD *)v30.m128i_i64[0]);
              v35 = _byteswap_uint64(0x725F696D616D6961uLL);
              if ( v34 == v35 )
              {
                v34 = _byteswap_ulong(*(_DWORD *)(v30.m128i_i64[0] + 8));
                v35 = _byteswap_ulong(0x79616C65u);
                if ( v34 == v35 )
                  goto LABEL_176;
              }
              goto LABEL_175;
            }
          }
          else
          {
            v121 = sub_141486EF0();
            *(_QWORD *)v32 = v121;
            *(_QWORD *)(v32 + 8) = v122;
            *(_BYTE *)(v32 + 16) = 1;
            *(_QWORD *)v32 = v121 + 1;
            v33 = v30.m128i_i64[1] <= 0xCuLL;
            if ( v30.m128i_i64[1] == 12 )
              goto LABEL_33;
          }
          if ( v33 )
            goto LABEL_179;
          v34 = _byteswap_uint64(0x725F696D616D6961uLL);
          v35 = _byteswap_uint64(*(_QWORD *)v30.m128i_i64[0]);
          if ( v34 == v35 )
          {
            v34 = _byteswap_uint64(0x5F79616C65725F69uLL);
            v35 = _byteswap_uint64(*(_QWORD *)(v30.m128i_i64[0] + 5));
            if ( v34 == v35 )
              goto LABEL_176;
          }
LABEL_175:
          if ( 2 * (v34 >= v35) == 1 )
          {
LABEL_176:
            v199.m128i_i64[0] = (__int64)&v211;
            v199.m128i_i64[1] = (__int64)sub_14041F680;
            sub_14149C0F0(&v213, &unk_141759B40, &v199);
            v221 = v213.m256i_i64[1];
            v222 = v213.m256i_i64[0];
            v123 = v213.m256i_i64[2];
            v124 = v220;
            if ( v220 == (_QWORD)v219 )
              sub_1416890A0(&v219);
            v125 = *((_QWORD *)&v219 + 1);
            v126 = 32 * v124;
            *(_QWORD *)(*((_QWORD *)&v219 + 1) + v126) = v222;
            *(_QWORD *)(v125 + v126 + 8) = v221;
            *(_QWORD *)(v125 + v126 + 16) = v123;
            *(_BYTE *)(v125 + v126 + 24) = 0;
            v220 = v124 + 1;
          }
LABEL_179:
          v127 = v184.m128i_i64[1];
          v128 = v184.m128i_i64[1] + 24 * v185;
          while ( v127 != v128 )
          {
            v182.m128i_i64[0] = v127;
            v211.m128i_i64[0] = (__int64)&v182;
            v211.m128i_i64[1] = (__int64)sub_1406B5450;
            sub_14149C0F0(&v199, &unk_141759B80, &v211);
            v221 = v199.m128i_i64[1];
            v222 = v199.m128i_i64[0];
            v131 = *(_QWORD *)v200;
            v132 = v220;
            if ( v220 == (_QWORD)v219 )
              sub_1416890A0(&v219);
            v127 += 24;
            v129 = *((_QWORD *)&v219 + 1);
            v130 = 32 * v132;
            *(_QWORD *)(*((_QWORD *)&v219 + 1) + v130) = v222;
            *(_QWORD *)(v129 + v130 + 8) = v221;
            *(_QWORD *)(v129 + v130 + 16) = v131;
            *(_BYTE *)(v129 + v130 + 24) = 0;
            v220 = v132 + 1;
          }
          sub_14043ECD0(&v184);
          v71 = (__int64)v209;
          v133 = sub_1405795E0(v209);
          a1 = v215;
          if ( v133 )
          {
            nullsub_1(v134);
            v135 = (__m128i *)sub_140001650(52, 1);
            if ( !v135 )
              sub_1416C2D4B(1, 52);
            qmemcpy(&v135[1], "ot keep a legacy virtual auth marker", 36);
            *v135 = _mm_loadu_si128((const __m128i *)&xmmword_14175978B);
            v222 = (__int64)v135;
            v136 = v220;
            if ( v220 == (_QWORD)v219 )
              sub_1416890A0(&v219);
            v137 = *((_QWORD *)&v219 + 1);
            v138 = 32 * v136;
            *(_QWORD *)(*((_QWORD *)&v219 + 1) + v138) = 52;
            *(_QWORD *)(v137 + v138 + 8) = v222;
            *(_QWORD *)(v137 + v138 + 16) = 52;
            *(_BYTE *)(v137 + v138 + 24) = 1;
            v220 = v136 + 1;
          }
          if ( (unsigned __int8)sub_14048ED60(v71) == 1 )
          {
            nullsub_1(v139);
            v140 = (__m128i *)sub_140001650(50, 1);
            if ( !v140 )
              sub_1416C2D4B(1, 50);
            qmemcpy(&v140[1], "ot keep virtual unlock auth active", 34);
            *v140 = _mm_loadu_si128((const __m128i *)&xmmword_1417597BF);
            v222 = (__int64)v140;
            v141 = v220;
            if ( v220 == (_QWORD)v219 )
              sub_1416890A0(&v219);
            v142 = *((_QWORD *)&v219 + 1);
            v143 = 32 * v141;
            *(_QWORD *)(*((_QWORD *)&v219 + 1) + v143) = 50;
            *(_QWORD *)(v142 + v143 + 8) = v222;
            *(_QWORD *)(v142 + v143 + 16) = 50;
            *(_BYTE *)(v142 + v143 + 24) = 1;
            v220 = v141 + 1;
          }
          if ( (unsigned __int8)sub_14048EC40(v71) )
          {
            nullsub_1(v144);
            v145 = (__m128i *)sub_140001650(50, 1);
            if ( !v145 )
              sub_1416C2D4B(1, 50);
            qmemcpy(&v145[1], "ot keep virtual unlock auth marker", 34);
            *v145 = _mm_loadu_si128((const __m128i *)&xmmword_1417597F1);
            v222 = (__int64)v145;
            v146 = v220;
            if ( v220 == (_QWORD)v219 )
              sub_1416890A0(&v219);
            v147 = *((_QWORD *)&v219 + 1);
            v148 = 32 * v146;
            *(_QWORD *)(*((_QWORD *)&v219 + 1) + v148) = 50;
            *(_QWORD *)(v147 + v148 + 8) = v222;
            *(_QWORD *)(v147 + v148 + 16) = 50;
            *(_BYTE *)(v147 + v148 + 24) = 1;
            v220 = v146 + 1;
          }
          if ( (unsigned __int8)sub_14048E630(v71)
            && !(unsigned __int8)sub_14048EC40(v71)
            && (unsigned __int8)sub_14048ED60(v71) != 1 )
          {
            nullsub_1(v149);
            v150 = (__m128i *)sub_140001650(62, 1);
            if ( !v150 )
              sub_1416C2D4B(1, 62);
            qmemcpy(&v150[1], "ot keep an orphaned virtual unlock auth backup", 46);
            v222 = (__int64)v150;
            *v150 = _mm_loadu_si128((const __m128i *)&xmmword_141759823);
            v151 = v220;
            if ( v220 == (_QWORD)v219 )
              sub_1416890A0(&v219);
            v152 = *((_QWORD *)&v219 + 1);
            v153 = 32 * v151;
            *(_QWORD *)(*((_QWORD *)&v219 + 1) + v153) = 62;
            *(_QWORD *)(v152 + v153 + 8) = v222;
            *(_QWORD *)(v152 + v153 + 16) = 62;
            *(_BYTE *)(v152 + v153 + 24) = 1;
            v220 = v151 + 1;
          }
          if ( !v218 )
            verify_thread_provider(v71, (__int64)aOpenai, &v219);
          sub_1404A7BA0((__int64)&v184);
          if ( (_QWORD)v187 || (_QWORD)v185 )
          {
            if ( *((_QWORD *)&v186 + 1) )
            {
              sub_140440300((unsigned int)&v199, v186, DWORD2(v186), (unsigned int)&unk_141759861, 3);
              v213.m256i_i64[2] = *(_QWORD *)v200;
              *(__m128i *)v213.m256i_i8 = _mm_loadu_si128(&v199);
              v216.m128i_i64[0] = (__int64)&v213;
              v216.m128i_i64[1] = (__int64)sub_1400015F0;
              sub_14149C0F0(&v199, &unk_141759864, &v216);
              if ( v213.m256i_i64[0] )
                sub_140001660(v213.m256i_i64[1], v213.m256i_i64[0], 1);
              v216 = _mm_loadu_si128(&v199);
              v217 = *(_QWORD *)v200;
            }
            else
            {
              v216.m128i_i64[0] = 0;
              v216.m128i_i64[1] = 1;
              v217 = 0;
            }
            v211.m128i_i64[0] = v185;
            v199.m128i_i64[0] = (__int64)&v187;
            v199.m128i_i64[1] = (__int64)sub_1414AC520;
            *(_QWORD *)v200 = &v211;
            *(_QWORD *)&v200[8] = sub_1414AC520;
            *(_QWORD *)&v200[16] = &v216;
            *(_QWORD *)&v200[24] = sub_1400015F0;
            sub_14149C0F0(&v213, &unk_141759D32, &v199);
            v221 = v213.m256i_i64[1];
            v222 = v213.m256i_i64[0];
            v154 = v213.m256i_i64[2];
            v155 = v220;
            if ( v220 == (_QWORD)v219 )
              sub_1416890A0(&v219);
            v156 = *((_QWORD *)&v219 + 1);
            v157 = 32 * v155;
            *(_QWORD *)(*((_QWORD *)&v219 + 1) + v157) = v222;
            *(_QWORD *)(v156 + v157 + 8) = v221;
            *(_QWORD *)(v156 + v157 + 16) = v154;
            *(_BYTE *)(v156 + v157 + 24) = 3;
            v220 = v155 + 1;
            if ( v216.m128i_i64[0] )
              sub_140001660(v216.m128i_i64[1], v216.m128i_i64[0], 1);
            v158 = v185;
            if ( (_QWORD)v185 )
            {
              v159 = (_QWORD *)(v184.m128i_i64[1] + 8);
              do
              {
                v160 = *(v159 - 1);
                if ( v160 )
                  sub_140001660(*v159, v160, 1);
                v159 += 3;
                --v158;
              }
              while ( v158 );
            }
            if ( v184.m128i_i64[0] )
              sub_140001660(v184.m128i_i64[1], 24 * v184.m128i_i64[0], 8);
            v161 = *((_QWORD *)&v186 + 1);
            if ( *((_QWORD *)&v186 + 1) )
            {
              v162 = (_QWORD *)(v186 + 8);
              do
              {
                v163 = *(v162 - 1);
                if ( v163 )
                  sub_140001660(*v162, v163, 1);
                v162 += 3;
                --v161;
              }
              while ( v161 );
            }
          }
          else
          {
            if ( v184.m128i_i64[0] )
              sub_140001660(v184.m128i_i64[1], 24 * v184.m128i_i64[0], 8);
            v164 = *((_QWORD *)&v186 + 1);
            if ( *((_QWORD *)&v186 + 1) )
            {
              v165 = (_QWORD *)(v186 + 8);
              do
              {
                v166 = *(v165 - 1);
                if ( v166 )
                  sub_140001660(*v165, v166, 1);
                v165 += 3;
                --v164;
              }
              while ( v164 );
            }
          }
          goto LABEL_238;
        }
      }
      else if ( !v194 )
      {
        goto LABEL_25;
      }
      nullsub_1(v9);
      v21 = (__m128i *)sub_140001650(59, 1);
      if ( !v21 )
        sub_1416C2D4B(1, 59);
      qmemcpy(&v21[1], "ot keep AiMaMi top-level model_catalog_json", 43);
      v222 = (__int64)v21;
      *v21 = _mm_loadu_si128((const __m128i *)&xmmword_141759ADE);
      v22 = v220;
      if ( v220 == (_QWORD)v219 )
        sub_1416890A0(&v219);
      v23 = *((_QWORD *)&v219 + 1);
      v24 = 32 * v22;
      *(_QWORD *)(*((_QWORD *)&v219 + 1) + v24) = 59;
      *(_QWORD *)(v23 + v24 + 8) = v222;
      *(_QWORD *)(v23 + v24 + 16) = 59;
      *(_BYTE *)(v23 + v24 + 24) = 0;
      v220 = v22 + 1;
      goto LABEL_25;
    }
  }
  else
  {
    v198 = v184.m128i_i64[0];
    v8 = v185;
    v209 = v5;
    v181 = v184.m128i_i64[1];
    if ( a3 )
      goto LABEL_3;
  }
  sub_14047B4A0((__int64)&v184, (__int64)v5, v7, v8);
  if ( *((_QWORD *)&v185 + 1) == -1
    || *((_QWORD *)&v186 + 1) != 6
    || (v36 = *(_DWORD *)v186 ^ 0x616D6961u, (unsigned int)v36 | *(unsigned __int16 *)(v186 + 4) ^ 0x3169) )
  {
    v199.m128i_i64[0] = (__int64)&off_141757568;
    v199.m128i_i64[1] = (__int64)sub_14041F680;
    *(_QWORD *)v200 = (char *)&v185 + 8;
    *(_QWORD *)&v200[8] = sub_1404E01F0;
    sub_14149C0F0(v175, &unk_141759907, &v199);
    v222 = v175[0];
    v221 = v175[1];
    v37 = v175[2];
    v38 = v220;
    if ( v220 == (_QWORD)v219 )
      sub_1416890A0(&v219);
    v39 = *((_QWORD *)&v219 + 1);
    v36 = 32 * v38;
    *(_QWORD *)(*((_QWORD *)&v219 + 1) + v36) = v222;
    *(_QWORD *)(v39 + v36 + 8) = v221;
    *(_QWORD *)(v39 + v36 + 16) = v37;
    *(_BYTE *)(v39 + v36 + 24) = 0;
    v220 = v38 + 1;
  }
  if ( (v197 & v195) != 0 )
  {
    if ( v191[0].m128i_i64[1] != -1 )
      goto LABEL_46;
  }
  else
  {
    v199.m128i_i64[0] = (__int64)&v195;
    v199.m128i_i64[1] = (__int64)sub_1414AC660;
    *(_QWORD *)v200 = &v197;
    *(_QWORD *)&v200[8] = sub_1414AC660;
    sub_14149C0F0(&v179, &unk_141759948, &v199);
    v221 = v179.m128i_i64[1];
    v222 = v179.m128i_i64[0];
    v44 = v180;
    v45 = v220;
    if ( v220 == (_QWORD)v219 )
      sub_1416890A0(&v219);
    v46 = *((_QWORD *)&v219 + 1);
    v36 = 32 * v45;
    *(_QWORD *)(*((_QWORD *)&v219 + 1) + v36) = v222;
    *(_QWORD *)(v46 + v36 + 8) = v221;
    *(_QWORD *)(v46 + v36 + 16) = v44;
    *(_BYTE *)(v46 + v36 + 24) = 0;
    v220 = v45 + 1;
    if ( v191[0].m128i_i64[1] != -1 )
    {
LABEL_46:
      if ( !v194 )
      {
        sub_141473FA0((unsigned int)&v213, v5[97], v5[98], (unsigned int)aCodexRouterCat_0, 25);
        v215 = v213.m256i_i64[1];
        v216 = *(__m128i *)&v213.m256i_u64[1];
        v199.m128i_i64[0] = (__int64)&v216;
        v199.m128i_i64[1] = (__int64)sub_14148F3A0;
        *(_QWORD *)v200 = &v191[0].m128i_i64[1];
        *(_QWORD *)&v200[8] = sub_1404E01F0;
        sub_14149C0F0(&v182, &unk_14175999A, &v199);
        v221 = v182.m128i_i64[1];
        v222 = v182.m128i_i64[0];
        v40 = v183;
        v41 = v220;
        if ( v220 == (_QWORD)v219 )
          sub_1416890A0(&v219);
        v42 = *((_QWORD *)&v219 + 1);
        v43 = 32 * v41;
        *(_QWORD *)(*((_QWORD *)&v219 + 1) + v43) = v222;
        *(_QWORD *)(v42 + v43 + 8) = v221;
        *(_QWORD *)(v42 + v43 + 16) = v40;
        *(_BYTE *)(v42 + v43 + 24) = 0;
        v220 = v41 + 1;
        if ( v213.m256i_i64[0] )
          sub_140001660(v215, v213.m256i_i64[0], 1);
      }
      if ( v188.m128i_i64[1] == -1 )
        goto LABEL_65;
LABEL_60:
      v51 = v189;
      v178 = v189;
      sub_141473FA0((unsigned int)&v216, v5[97], v5[98], (unsigned int)aCodexRouterCat_0, 25);
      v222 = v216.m128i_i64[1];
      read_catalog_model_slugs(&v199, v216.m128i_i64[1], v217);
      v53 = v199.m128i_i32[0];
      if ( v199.m128i_i64[0] == -1 )
      {
        v89 = _mm_loadu_si128((const __m128i *)&v199.m128i_u64[1]);
        v214 = *(_OWORD *)&v200[24];
        *(_OWORD *)&v213.m256i_u64[2] = *(_OWORD *)&v200[8];
        *(__m128i *)v213.m256i_i8 = v89;
        LOBYTE(v52) = 1;
        _RAX = sub_14040FFF0(v51.m128i_i64[0], v51.m128i_i64[1], v52, &v213);
        if ( (_BYTE)_RAX )
        {
          v177[0] = &v178;
          v177[1] = sub_14041F680;
          sub_14149C0F0(&v211, &unk_141759A06, v177);
          v215 = v211.m128i_i64[1];
          v221 = v211.m128i_i64[0];
          v91 = v212;
          v92 = v220;
          if ( v220 == (_QWORD)v219 )
            sub_1416890A0(&v219);
          _RAX = *((_QWORD *)&v219 + 1);
          v93 = 32 * v92;
          *(_QWORD *)(*((_QWORD *)&v219 + 1) + v93) = v221;
          *(_QWORD *)(_RAX + v93 + 8) = v215;
          *(_QWORD *)(_RAX + v93 + 16) = v91;
          *(_BYTE *)(_RAX + v93 + 24) = 0;
          v220 = v92 + 1;
        }
        v94 = v213.m256i_i64[1];
        if ( v213.m256i_i64[1] )
        {
          v95 = a1;
          v96 = v213.m256i_i64[3];
          if ( v213.m256i_i64[3] )
          {
            v97 = v213.m256i_i64[0];
            v98 = (const __m128i *)(v213.m256i_i64[0] + 16);
            _ESI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v213.m256i_i64[0]));
            do
            {
              if ( !(_WORD)_ESI )
              {
                do
                {
                  si128 = _mm_load_si128(v98);
                  v97 -= 384;
                  ++v98;
                  _ESI = _mm_movemask_epi8(si128) ^ 0xFFFF;
                }
                while ( !_ESI );
              }
              __asm { tzcnt   eax, esi }
              v101 = -3 * _RAX;
              v102 = *(_QWORD *)(v97 + 8 * v101 - 24);
              if ( v102 )
                sub_140001660(*(_QWORD *)(v97 + 8 * v101 - 16), v102, 1);
              --v96;
              _RAX = _ESI & (unsigned int)(_ESI - 1);
              _ESI &= _ESI - 1;
            }
            while ( v96 );
          }
          v103 = (24 * v94 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          v104 = v103 + v94;
          v54 = v104 == -17;
          v105 = v104 + 17;
          a1 = v95;
          if ( !v54 )
            sub_140001660(v213.m256i_i64[0] - v103, v105, 16);
        }
      }
      if ( v216.m128i_i64[0] )
        sub_140001660(v222, v216.m128i_i64[0], 1);
      v54 = v53 == -1;
      v5 = v209;
      if ( !v54 )
        sub_14043E650(&v199);
      goto LABEL_65;
    }
  }
  nullsub_1(v36);
  v47 = (__m128i *)sub_140001650(46, 1);
  if ( !v47 )
    sub_1416C2D4B(1, 46);
  qmemcpy(&v47[1], "s top-level model_catalog_json", 30);
  v222 = (__int64)v47;
  *v47 = _mm_loadu_si128((const __m128i *)&xmmword_1417599D8);
  v48 = v220;
  if ( v220 == (_QWORD)v219 )
    sub_1416890A0(&v219);
  v49 = *((_QWORD *)&v219 + 1);
  v50 = 32 * v48;
  *(_QWORD *)(*((_QWORD *)&v219 + 1) + v50) = 46;
  *(_QWORD *)(v49 + v50 + 8) = v222;
  *(_QWORD *)(v49 + v50 + 16) = 46;
  *(_BYTE *)(v49 + v50 + 24) = 0;
  v220 = v48 + 1;
  if ( v188.m128i_i64[1] != -1 )
    goto LABEL_60;
LABEL_65:
  sub_14043ECD0(&v184);
  if ( (unsigned __int8)sub_14048ED60(v5) == 1 )
    goto LABEL_94;
  sub_1403C9010(&v184, v5[5], v5[6]);
  if ( v184.m128i_i64[0] == -2 )
  {
    sub_14043E650(&v184.m128i_u64[1]);
LABEL_90:
    nullsub_1(v55);
    v57 = (__m128i *)sub_140001650(71, 1);
    if ( !v57 )
      sub_1416C2D4B(1, 71);
    qmemcpy(&v57[1], "s either virtual unlock auth or usable real OAuth login", 55);
    *v57 = _mm_loadu_si128((const __m128i *)&xmmword_141759711);
    v222 = (__int64)v57;
    v58 = v220;
    if ( v220 == (_QWORD)v219 )
      sub_1416890A0(&v219);
    v59 = *((_QWORD *)&v219 + 1);
    v60 = 32 * v58;
    *(_QWORD *)(*((_QWORD *)&v219 + 1) + v60) = 71;
    *(_QWORD *)(v59 + v60 + 8) = v222;
    *(_QWORD *)(v59 + v60 + 16) = 71;
    *(_BYTE *)(v59 + v60 + 24) = 1;
    v220 = v58 + 1;
    goto LABEL_94;
  }
  sub_141684120(&v199, &v184, 176);
  v56 = sub_140494630(&v199);
  if ( v199.m128i_i64[0] != -1 && v199.m128i_i64[0] )
    sub_140001660(v199.m128i_i64[1], v199.m128i_i64[0], 1);
  if ( *(_QWORD *)&v200[8] != -1 && *(_QWORD *)&v200[8] )
    sub_140001660(*(_QWORD *)&v200[16], *(_QWORD *)&v200[8], 1);
  if ( *(_QWORD *)&v200[32] != -1 && *(_QWORD *)&v200[32] )
    sub_140001660(*(_QWORD *)&v200[40], *(_QWORD *)&v200[32], 1);
  if ( v201.m128i_i64[1] != -1 && v201.m128i_i64[1] )
    sub_140001660(v202.m128i_i64[0], v201.m128i_i64[1], 1);
  if ( v203 != -1 && v203 )
    sub_140001660(v204, v203, 1);
  if ( v205 != -1 && v205 )
    sub_140001660(v206, v205, 1);
  if ( v207 != -1 && v207 )
    sub_140001660(v208, v207, 1);
  if ( !v56 )
    goto LABEL_90;
LABEL_94:
  if ( (unsigned __int8)sub_1405795E0(v5) )
  {
    nullsub_1(v61);
    v62 = (__m128i *)sub_140001650(51, 1);
    if ( !v62 )
      sub_1416C2D4B(1, 51);
    qmemcpy(&v62[1], "t keep a legacy virtual auth marker", 35);
    *v62 = _mm_loadu_si128((const __m128i *)&xmmword_141759758);
    v222 = (__int64)v62;
    v63 = v220;
    if ( v220 == (_QWORD)v219 )
      sub_1416890A0(&v219);
    v64 = *((_QWORD *)&v219 + 1);
    v65 = 32 * v63;
    *(_QWORD *)(*((_QWORD *)&v219 + 1) + v65) = 51;
    *(_QWORD *)(v64 + v65 + 8) = v222;
    *(_QWORD *)(v64 + v65 + 16) = 51;
    *(_BYTE *)(v64 + v65 + 24) = 1;
    v220 = v63 + 1;
  }
  sub_141473FA0((unsigned int)&v213, v5[97], v5[98], (unsigned int)aCodexRouterCat_0, 25);
  v66 = v213.m256i_i64[2];
  v222 = v213.m256i_i64[1];
  sub_141486710(&v184, v213.m256i_i64[1], v213.m256i_i64[2]);
  if ( v184.m128i_i32[0] == 2 )
  {
    v199.m128i_i64[1] = v184.m128i_i64[1];
    v199.m128i_i64[0] = 2;
    goto LABEL_102;
  }
  v199 = v184;
  v202.m128i_i64[0] = v189.m128i_i64[0];
  v201 = _mm_loadu_si128(&v188);
  *(_OWORD *)&v200[32] = v187;
  *(_OWORD *)&v200[16] = v186;
  *(_OWORD *)v200 = v185;
  if ( v184.m128i_i64[0] == 2 )
  {
LABEL_102:
    sub_140018650(&v199.m128i_u64[1]);
    v216.m128i_i64[0] = v222;
    v216.m128i_i64[1] = v66;
    v199.m128i_i64[0] = (__int64)&v216;
    v199.m128i_i64[1] = (__int64)sub_14148F3A0;
    sub_14149C0F0(&v184, &unk_141759BBC, &v199);
    v215 = v184.m128i_i64[1];
    v221 = v184.m128i_i64[0];
    v67 = v185;
    v68 = v220;
    if ( v220 == (_QWORD)v219 )
      sub_1416890A0(&v219);
    v69 = *((_QWORD *)&v219 + 1);
    v70 = 32 * v68;
    *(_QWORD *)(*((_QWORD *)&v219 + 1) + v70) = v221;
    *(_QWORD *)(v69 + v70 + 8) = v215;
    *(_QWORD *)(v69 + v70 + 16) = v67;
    *(_BYTE *)(v69 + v70 + 24) = 2;
    v220 = v68 + 1;
    v71 = (__int64)v209;
    if ( v213.m256i_i64[0] )
      sub_140001660(v222, v213.m256i_i64[0], 1);
    if ( v218 )
      goto LABEL_116;
    goto LABEL_107;
  }
  HIDWORD(_RAX) = (unsigned __int64)read_catalog_model_slugs(&v199, v222, v66) >> 32;
  v73 = v199.m128i_i32[0];
  if ( v199.m128i_i64[0] != -1 )
  {
    v189 = v202;
    v188 = v201;
    v74 = _mm_loadu_si128(&v199);
    v187 = *(_OWORD *)&v200[32];
    v186 = *(_OWORD *)&v200[16];
    v185 = *(_OWORD *)v200;
    v184 = v74;
    v211.m128i_i64[0] = (__int64)&v184;
    v211.m128i_i64[1] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v216, &unk_141759BDF, &v211);
    v215 = v216.m128i_i64[1];
    v221 = v216.m128i_i64[0];
    v75 = v217;
    v76 = v220;
    if ( v220 == (_QWORD)v219 )
      sub_1416890A0(&v219);
    v77 = *((_QWORD *)&v219 + 1);
    v78 = 32 * v76;
    *(_QWORD *)(*((_QWORD *)&v219 + 1) + v78) = v221;
    *(_QWORD *)(v77 + v78 + 8) = v215;
    *(_QWORD *)(v77 + v78 + 16) = v75;
    *(_BYTE *)(v77 + v78 + 24) = 2;
    v220 = v76 + 1;
    HIDWORD(_RAX) = (unsigned __int64)sub_14043E650(&v184) >> 32;
  }
  if ( v213.m256i_i64[0] )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v222, v213.m256i_i64[0], 1) >> 32;
  if ( v73 == -1 )
  {
    v109 = *(_QWORD *)v200;
    if ( *(_QWORD *)v200 )
    {
      v110 = a1;
      v111 = *(_QWORD *)&v200[16];
      if ( *(_QWORD *)&v200[16] )
      {
        v112 = v199.m128i_i64[1];
        v113 = (const __m128i *)(v199.m128i_i64[1] + 16);
        _ESI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v199.m128i_i64[1]));
        do
        {
          if ( !(_WORD)_ESI )
          {
            do
            {
              v115 = _mm_load_si128(v113);
              v112 -= 384;
              ++v113;
              _ESI = _mm_movemask_epi8(v115) ^ 0xFFFF;
            }
            while ( !_ESI );
          }
          __asm { tzcnt   eax, esi }
          v116 = -3 * _RAX;
          v117 = *(_QWORD *)(v112 + 8 * v116 - 24);
          if ( v117 )
            sub_140001660(*(_QWORD *)(v112 + 8 * v116 - 16), v117, 1);
          --v111;
          _RAX = _ESI & (unsigned int)(_ESI - 1);
          _ESI &= _ESI - 1;
        }
        while ( v111 );
      }
      v118 = (24 * v109 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v119 = v118 + v109;
      v54 = v119 == -17;
      v120 = v119 + 17;
      a1 = v110;
      if ( !v54 )
        sub_140001660(v199.m128i_i64[1] - v118, v120, 16);
    }
  }
  v71 = (__int64)v209;
  if ( v218 )
    goto LABEL_116;
LABEL_107:
  verify_thread_provider(v71, (__int64)aAimai1, &v219);
LABEL_116:
  sub_1404C0AB0(&v184, v71);
  if ( v188.m128i_i64[0] || (_QWORD)v185 )
  {
    if ( *((_QWORD *)&v186 + 1) )
    {
      sub_140440300((unsigned int)&v199, v186, DWORD2(v186), (unsigned int)&unk_141759861, 3);
      v213.m256i_i64[2] = *(_QWORD *)v200;
      *(__m128i *)v213.m256i_i8 = _mm_loadu_si128(&v199);
      v216.m128i_i64[0] = (__int64)&v213;
      v216.m128i_i64[1] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v199, &unk_141759864, &v216);
      if ( v213.m256i_i64[0] )
        sub_140001660(v213.m256i_i64[1], v213.m256i_i64[0], 1);
      v216 = _mm_loadu_si128(&v199);
      v217 = *(_QWORD *)v200;
    }
    else
    {
      v216.m128i_i64[0] = 0;
      v216.m128i_i64[1] = 1;
      v217 = 0;
    }
    v211.m128i_i64[0] = v185;
    v199.m128i_i64[0] = (__int64)&v188;
    v199.m128i_i64[1] = (__int64)sub_1414AC520;
    *(_QWORD *)v200 = &v188.m128i_i64[1];
    *(_QWORD *)&v200[8] = sub_1414AC520;
    *(_QWORD *)&v200[16] = &v211;
    *(_QWORD *)&v200[24] = sub_1414AC520;
    *(_QWORD *)&v200[32] = &v216;
    *(_QWORD *)&v200[40] = sub_1400015F0;
    sub_14149C0F0(&v213, &unk_141759CCD, &v199);
    v221 = v213.m256i_i64[1];
    v222 = v213.m256i_i64[0];
    v79 = v213.m256i_i64[2];
    v80 = v220;
    if ( v220 == (_QWORD)v219 )
      sub_1416890A0(&v219);
    v81 = *((_QWORD *)&v219 + 1);
    v82 = 32 * v80;
    *(_QWORD *)(*((_QWORD *)&v219 + 1) + v82) = v222;
    *(_QWORD *)(v81 + v82 + 8) = v221;
    *(_QWORD *)(v81 + v82 + 16) = v79;
    *(_BYTE *)(v81 + v82 + 24) = 3;
    v220 = v80 + 1;
    if ( v216.m128i_i64[0] )
      sub_140001660(v216.m128i_i64[1], v216.m128i_i64[0], 1);
    v83 = v185;
    if ( (_QWORD)v185 )
    {
      v84 = (_QWORD *)(v184.m128i_i64[1] + 8);
      do
      {
        v85 = *(v84 - 1);
        if ( v85 )
          sub_140001660(*v84, v85, 1);
        v84 += 3;
        --v83;
      }
      while ( v83 );
    }
    if ( v184.m128i_i64[0] )
      sub_140001660(v184.m128i_i64[1], 24 * v184.m128i_i64[0], 8);
    v86 = *((_QWORD *)&v186 + 1);
    if ( *((_QWORD *)&v186 + 1) )
    {
      v87 = (_QWORD *)(v186 + 8);
      do
      {
        v88 = *(v87 - 1);
        if ( v88 )
          sub_140001660(*v87, v88, 1);
        v87 += 3;
        --v86;
      }
      while ( v86 );
    }
  }
  else
  {
    if ( v184.m128i_i64[0] )
      sub_140001660(v184.m128i_i64[1], 24 * v184.m128i_i64[0], 8);
    v106 = *((_QWORD *)&v186 + 1);
    if ( *((_QWORD *)&v186 + 1) )
    {
      v107 = (_QWORD *)(v186 + 8);
      do
      {
        v108 = *(v107 - 1);
        if ( v108 )
          sub_140001660(*v107, v108, 1);
        v107 += 3;
        --v106;
      }
      while ( v106 );
    }
  }
LABEL_238:
  if ( *((_QWORD *)&v185 + 1) )
    sub_140001660(v186, 24LL * *((_QWORD *)&v185 + 1), 8);
  sub_1404A1A50(&v184, v71);
  stability_issue(&v182, &v184);
  if ( v182.m128i_i64[0] != -1 )
  {
    v212 = v183;
    v211 = _mm_loadu_si128(&v182);
    if ( v190 == -1 )
    {
      nullsub_1(v167);
      v169 = (_DWORD *)sub_140001650(4, 1);
      if ( !v169 )
        sub_1416C2D4B(1, 4);
      *v169 = 1701736302;
      v216.m128i_i64[0] = 4;
      v216.m128i_i64[1] = (__int64)v169;
      v217 = 4;
    }
    else
    {
      v179 = _mm_loadu_si128(v191);
      v213.m256i_i64[0] = 0;
      *(_OWORD *)&v213.m256i_u64[1] = 1u;
      *(_QWORD *)v200 = 1610612768;
      v199.m128i_i64[0] = (__int64)&v213;
      v199.m128i_i64[1] = (__int64)&off_14175E8C8;
      if ( (unsigned __int8)sub_14148F3A0(&v179, &v199, v168) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_2,
          55,
          (unsigned int)&v210,
          (unsigned int)&unk_141758598,
          (__int64)&off_14175E980);
      v217 = v213.m256i_i64[2];
      v216 = _mm_loadu_si128((const __m128i *)&v213);
    }
    v199.m128i_i64[0] = (__int64)&v211;
    v199.m128i_i64[1] = (__int64)sub_1400015F0;
    *(_QWORD *)v200 = &v192;
    *(_QWORD *)&v200[8] = sub_1414AC520;
    *(_QWORD *)&v200[16] = &v193;
    *(_QWORD *)&v200[24] = sub_1414AC520;
    *(_QWORD *)&v200[32] = &v194;
    *(_QWORD *)&v200[40] = sub_1414AC520;
    v201.m128i_i64[0] = (__int64)&v196;
    v201.m128i_i64[1] = (__int64)sub_1414AC520;
    v202.m128i_i64[0] = (__int64)&v216;
    v202.m128i_i64[1] = (__int64)sub_1400015F0;
    sub_14149C0F0(&v213, &unk_1417596A8, &v199);
    if ( v216.m128i_i64[0] )
      sub_140001660(v216.m128i_i64[1], v216.m128i_i64[0], 1);
    v221 = v213.m256i_i64[1];
    v222 = v213.m256i_i64[0];
    v170 = v213.m256i_i64[2];
    v171 = v220;
    if ( v220 == (_QWORD)v219 )
      sub_1416890A0(&v219);
    v172 = *((_QWORD *)&v219 + 1);
    v173 = 32 * v171;
    *(_QWORD *)(*((_QWORD *)&v219 + 1) + v173) = v222;
    *(_QWORD *)(v172 + v173 + 8) = v221;
    *(_QWORD *)(v172 + v173 + 16) = v170;
    *(_BYTE *)(v172 + v173 + 24) = 4;
    v220 = v171 + 1;
    if ( v211.m128i_i64[0] )
      sub_140001660(v211.m128i_i64[1], v211.m128i_i64[0], 1);
  }
  sub_14043F000(&v184);
  *(_QWORD *)(a1 + 16) = v220;
  *(_OWORD *)a1 = v219;
  if ( v198 )
    sub_140001660(v181, v198, 1);
  return a1;
}