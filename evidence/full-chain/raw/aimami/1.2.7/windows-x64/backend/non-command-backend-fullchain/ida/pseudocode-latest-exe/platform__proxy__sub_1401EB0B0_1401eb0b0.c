// win 1.2.7 latest-exe | module src/platform/proxy.rs | ea 0x1401eb0b0 | successor of pre-update 0x1410071a0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_1401EB0B0(__int64 a1)
{
  __int64 *v2; // rdi
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  const char *v5; // rbx
  __int64 v6; // rsi
  __int64 *v7; // r14
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rbx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __m128i *v16; // rcx
  __int64 v17; // r14
  __int64 *v18; // r15
  __m128i *v19; // r12
  __int64 v20; // rsi
  const char *v21; // rax
  const char *v22; // rdi
  char *v23; // rsi
  _DWORD *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  __int64 *v28; // r15
  __int64 v29; // r14
  __int64 *v30; // rdi
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r8d
  const char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  const char *v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rsi
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 *v48; // r15
  __m128i v49; // kr00_16
  __int64 v50; // rbx
  __int64 v51; // r14
  unsigned __int64 v53; // r14
  __int64 v54; // rbx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rsi
  __int64 *v60; // r12
  __int64 v61; // rsi
  __int64 v62; // rsi
  const char *v63; // rax
  const char *v64; // rbx
  char *v65; // rsi
  __int64 v66; // r13
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rsi
  unsigned __int64 v70; // rbx
  __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 *v76; // rsi
  __int64 v77; // rsi
  const char *v78; // rdx
  __int64 *v79; // r14
  __m128i v80; // kr20_16
  __int64 v81; // rbx
  __int64 v82; // r15
  __int64 v83; // rsi
  char v84; // di
  unsigned __int64 v85; // r13
  char v86; // al
  __int64 v87; // rcx
  unsigned int v88; // r8d
  unsigned int v89; // r12d
  unsigned int v90; // ecx
  unsigned int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  const char *v94; // rsi
  __int64 v95; // r14
  __int64 v96; // rdi
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rdi
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rsi
  const char *v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rdi
  unsigned __int64 v110; // rax
  __int64 v111; // r8
  __int64 v112; // rcx
  __m128i si128; // xmm0
  __m128i v114; // xmm1
  __m128i v115; // xmm2
  __m128i v116; // xmm3
  __m128i v117; // xmm4
  __m128i v118; // xmm5
  __m128i v119; // xmm6
  unsigned __int64 v120; // rcx
  __m128i v121; // xmm0
  __m128i v122; // xmm1
  __m128i v123; // xmm2
  __m128i v124; // xmm3
  __m128i v125; // xmm4
  __int64 v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rbx
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // r15
  unsigned __int8 *v135; // r15
  __int64 **v136; // r13
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  unsigned __int64 v140; // r12
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // r12
  bool v144; // zf
  unsigned __int64 v145; // rcx
  unsigned __int64 v146; // rdx
  unsigned __int64 v147; // r9
  char *v148; // rax
  unsigned int v149; // r8d
  int v150; // r10d
  int v151; // esi
  int v152; // r8d
  unsigned __int8 v153; // r11
  __int64 v154; // r11
  bool v155; // cf
  __int64 v156; // r10
  unsigned int v157; // r10d
  char v158; // r10
  __int64 v159; // r10
  __int64 v160; // rax
  __int64 v161; // rdx
  __int128 v162; // rax
  __int64 v163; // rsi
  __int64 v164; // rdi
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 **v167; // rbx
  unsigned __int8 *v168; // r13
  __int64 v169; // r15
  __int64 v170; // rax
  __int64 v171; // r14
  __int64 v172; // rsi
  __int64 *v173; // [rsp+28h] [rbp-58h] BYREF
  __m128i v174; // [rsp+30h] [rbp-50h] BYREF
  __m128i v175; // [rsp+40h] [rbp-40h] BYREF
  __m128i v176; // [rsp+50h] [rbp-30h] BYREF
  char v177; // [rsp+60h] [rbp-20h]
  __int16 v178; // [rsp+68h] [rbp-18h]
  __int64 v179; // [rsp+3C8h] [rbp+348h] BYREF
  __int64 v180; // [rsp+3D0h] [rbp+350h]
  __int64 v181; // [rsp+3D8h] [rbp+358h]
  __m128i v182; // [rsp+3E0h] [rbp+360h] BYREF
  const char *v183; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v184; // [rsp+3F8h] [rbp+378h]
  const char *v185; // [rsp+400h] [rbp+380h]
  __int64 v186; // [rsp+408h] [rbp+388h]
  __int64 v187; // [rsp+410h] [rbp+390h]
  __int64 v188; // [rsp+418h] [rbp+398h]
  const char *v189; // [rsp+420h] [rbp+3A0h]
  __int64 v190; // [rsp+428h] [rbp+3A8h]
  const char *v191; // [rsp+430h] [rbp+3B0h]
  __int64 v192; // [rsp+438h] [rbp+3B8h]
  const char *v193; // [rsp+440h] [rbp+3C0h]
  __int64 v194; // [rsp+448h] [rbp+3C8h]
  const char *v195; // [rsp+450h] [rbp+3D0h]
  __int64 v196; // [rsp+458h] [rbp+3D8h]
  const char *v197; // [rsp+460h] [rbp+3E0h]
  __int64 v198; // [rsp+468h] [rbp+3E8h]
  int v199; // [rsp+48Ch] [rbp+40Ch]
  __int64 v200; // [rsp+770h] [rbp+6F0h]
  int v201; // [rsp+778h] [rbp+6F8h]
  __int64 v202; // [rsp+788h] [rbp+708h]
  __int64 v203; // [rsp+790h] [rbp+710h]
  __int64 v204; // [rsp+798h] [rbp+718h] BYREF
  __int64 v205; // [rsp+7A0h] [rbp+720h]
  __int64 v206; // [rsp+7A8h] [rbp+728h]
  __int64 v207; // [rsp+7B0h] [rbp+730h] BYREF
  __m128i v208; // [rsp+7B8h] [rbp+738h] BYREF
  __m128i v209; // [rsp+7C8h] [rbp+748h]
  __m128i v210; // [rsp+7D8h] [rbp+758h]
  __int64 v211; // [rsp+860h] [rbp+7E0h]
  const char *v212; // [rsp+868h] [rbp+7E8h]
  __int64 v213; // [rsp+870h] [rbp+7F0h]
  const char *v214; // [rsp+878h] [rbp+7F8h]
  __int64 v215; // [rsp+880h] [rbp+800h] BYREF
  __int64 v216; // [rsp+888h] [rbp+808h]
  __int64 v217; // [rsp+890h] [rbp+810h]
  __m128i *v218; // [rsp+898h] [rbp+818h]
  _BYTE v219[24]; // [rsp+8A0h] [rbp+820h] BYREF
  __m128i v220; // [rsp+8B8h] [rbp+838h]
  __m128i v221; // [rsp+8C8h] [rbp+848h]
  __int64 v222; // [rsp+8D8h] [rbp+858h]
  __int128 v223; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v224; // [rsp+8F0h] [rbp+870h]
  __int64 v225; // [rsp+900h] [rbp+880h]
  __int128 v226; // [rsp+908h] [rbp+888h]
  __int64 v227; // [rsp+918h] [rbp+898h]
  char v228; // [rsp+926h] [rbp+8A6h]
  char v229; // [rsp+927h] [rbp+8A7h]
  __int64 v230; // [rsp+928h] [rbp+8A8h]

  v230 = -2;
  v215 = 0;
  v216 = 8;
  v217 = 0;
  v229 = 1;
  sub_1416B94E0(&v182, aReg, 3);
  v199 = 0x8000000;
  sub_1416B93C0(&v182, aQuery_0, 5);
  sub_1416B93C0(&v182, aHkcuSoftwareMi, 64);
  sub_1416B93C0(&v182, aV_1, 2);
  sub_1416B93C0(&v182, aProxyenable, 11);
  sub_1416BCB60(&v173, &v182);
  v2 = v173;
  v225 = a1;
  if ( v173 == (__int64 *)-1LL )
  {
    if ( (v174.m128i_i8[0] & 3u) - 2 >= 2 && (v174.m128i_i8[0] & 3) != 0 )
    {
      v208.m128i_i64[0] = v174.m128i_i64[0] - 1;
      LOBYTE(v207) = 3;
      sub_1416EBAD0(&v208);
    }
    v229 = 1;
    sub_1401AB9C0(&v182);
    goto LABEL_26;
  }
  v3 = _mm_loadu_si128(&v174);
  v4 = _mm_loadu_si128(&v175);
  v221 = _mm_loadu_si128(&v176);
  v220 = v4;
  *(__m128i *)&v219[8] = v3;
  *(_QWORD *)v219 = v173;
  sub_1401AB9C0(&v182);
  if ( v221.m128i_i32[2] )
    goto LABEL_21;
  v5 = *(const char **)&v219[8];
  sub_1416D8D10(&v179, *(_QWORD *)&v219[8], *(_QWORD *)&v219[16]);
  *(_QWORD *)&v226 = v179;
  v6 = v181;
  v227 = v180;
  if ( !(unsigned __int8)sub_1402366A0(a0x1, 3, v180, v181)
    && !(unsigned __int8)sub_1402366A0(a0x00000001, 10, v227, v6) )
  {
LABEL_19:
    if ( (__int64)v226 > 0 )
      sub_140001660(v227, v226, 1);
LABEL_21:
    if ( v2 )
      sub_140001660(*(_QWORD *)&v219[8], v2, 1);
    v10 = v220.m128i_i64[0];
    if ( v220.m128i_i64[0] )
    {
      v11 = v220.m128i_i64[1];
      goto LABEL_25;
    }
    goto LABEL_26;
  }
  sub_1416B94E0(&v182, aReg, 3);
  v199 = 0x8000000;
  sub_1416B93C0(&v182, aQuery_0, 5);
  sub_1416B93C0(&v182, aHkcuSoftwareMi, 64);
  sub_1416B93C0(&v182, aV_1, 2);
  sub_1416B93C0(&v182, aProxyserver, 11);
  sub_1416BCB60(&v173, &v182);
  v7 = v173;
  if ( v173 == (__int64 *)-1LL )
  {
    a1 = v225;
    if ( (v174.m128i_i8[0] & 3u) - 2 >= 2 && (v174.m128i_i8[0] & 3) != 0 )
    {
      *((_QWORD *)&v223 + 1) = v174.m128i_i64[0] - 1;
      LOBYTE(v223) = 3;
      sub_1416EBAD0((char *)&v223 + 8);
    }
    sub_1401AB9C0(&v182);
    goto LABEL_19;
  }
  v8 = _mm_loadu_si128(&v174);
  v9 = _mm_loadu_si128(&v175);
  v210 = _mm_loadu_si128(&v176);
  v209 = v9;
  v208 = v8;
  v207 = (__int64)v173;
  sub_1401AB9C0(&v182);
  if ( v210.m128i_i32[2] )
  {
    if ( v7 )
      sub_140001660(v208.m128i_i64[0], v7, 1);
    a1 = v225;
    if ( v209.m128i_i64[0] )
      sub_140001660(v209.m128i_i64[1], v209.m128i_i64[0], 1);
    goto LABEL_19;
  }
  v213 = v208.m128i_i64[0];
  sub_1416D8D10(&v204, v208.m128i_i64[0], v208.m128i_i64[1]);
  v212 = v5;
  *((_QWORD *)&v226 + 1) = v204;
  v173 = nullptr;
  v174.m128i_i64[0] = v206;
  v60 = &v174.m128i_i64[1];
  v222 = v205;
  v174.m128i_i64[1] = v205;
  v175 = (__m128i)(unsigned __int64)v206;
  v176.m128i_i64[0] = v206;
  v176.m128i_i64[1] = 0xA0000000ALL;
  v177 = 1;
  v178 = 0;
  do
  {
    v61 = -1;
    if ( HIBYTE(v178) )
    {
      v66 = v226;
      goto LABEL_167;
    }
    v62 = v174.m128i_i64[1];
    sub_140223420(&v182, &v174.m128i_u64[1]);
    if ( v182.m128i_i32[0] == 1 )
    {
      v63 = (const char *)v173;
      v173 = (__int64 *)v183;
      v64 = (const char *)(v183 - v63);
      v65 = (char *)&v63[v62];
      if ( v183 == v63 )
        continue;
LABEL_139:
      if ( v64[(_QWORD)v65 - 1] == 10 )
      {
        if ( v64 == (const char *)1 )
        {
          v64 = nullptr;
        }
        else if ( v64[(_QWORD)v65 - 2] == 13 )
        {
          v64 -= 2;
        }
        else
        {
          --v64;
        }
      }
      continue;
    }
    if ( HIBYTE(v178)
      || (HIBYTE(v178) = 1,
          v64 = (const char *)(v174.m128i_i64[0] - (_QWORD)v173),
          ((unsigned __int8)v178 | (v174.m128i_i64[0] != (_QWORD)v173)) != 1) )
    {
      v66 = v226;
      v61 = -1;
      goto LABEL_167;
    }
    v65 = (char *)v173 + v174.m128i_i64[1];
    if ( v64 )
      goto LABEL_139;
  }
  while ( !(unsigned __int8)sub_1402366A0(aProxyserver, 11, v65, v64) );
  sub_1416E1760((unsigned int)&v182, (_DWORD)v65, (_DWORD)v64, (unsigned int)&unk_141A0771B, 6);
  v194 = 0;
  v195 = v64;
  LOWORD(v196) = 1;
  sub_140236AD0(&v223, &v182);
  if ( !(_BYTE)v223 )
  {
    v66 = v226;
    v61 = -1;
    goto LABEL_167;
  }
  v194 = v224;
  v66 = v226;
  v61 = -1;
  if ( BYTE1(v196) )
    goto LABEL_167;
  v67 = v190;
  sub_140236AD0(&v223, &v182);
  if ( (_DWORD)v223 == 1 )
  {
    v68 = *((_QWORD *)&v223 + 1) - v194;
    v69 = v194 + v67;
    v66 = v226;
    goto LABEL_262;
  }
  v66 = v226;
  if ( BYTE1(v196) )
    goto LABEL_267;
  if ( (_BYTE)v196 != 1 )
  {
    v106 = v194;
    v107 = v195;
    if ( v195 != (const char *)v194 )
      goto LABEL_261;
LABEL_267:
    v61 = -1;
    goto LABEL_167;
  }
  v106 = v194;
  v107 = v195;
LABEL_261:
  v68 = (__int64)&v107[-v106];
  v69 = v190 + v106;
LABEL_262:
  v128 = sub_1408FEA60(v69, v68);
  if ( !v128 )
    goto LABEL_267;
  v60 = (__int64 *)v129;
  v61 = -1;
  if ( v129 )
  {
    if ( v129 < 0 )
    {
      v131 = 0;
      goto LABEL_266;
    }
    v132 = v128;
    nullsub_1(v130, v129);
    v131 = 1;
    v133 = sub_140001650(v60, 1);
    if ( !v133 )
LABEL_266:
      sub_14196B2DB(v131, v60);
    v214 = (const char *)v133;
    sub_1419234B0(v133, v132, v60);
    v61 = (__int64)v60;
  }
LABEL_167:
  if ( *((__int64 *)&v226 + 1) > 0 )
    sub_140001660(v222, *((_QWORD *)&v226 + 1), 1);
  if ( v7 )
    sub_140001660(v213, v7, 1);
  if ( v209.m128i_i64[0] )
    sub_140001660(v209.m128i_i64[1], v209.m128i_i64[0], 1);
  a1 = v225;
  if ( v66 > 0 )
    sub_140001660(v227, v66, 1);
  if ( v2 )
    sub_140001660(v212, v2, 1);
  if ( v220.m128i_i64[0] )
    sub_140001660(v220.m128i_i64[1], v220.m128i_i64[0], 1);
  if ( v61 != -1 )
  {
    v227 = v61;
    sub_1401EAA20((__int64)&v173, (__int64)v214, (__int64)v60);
    v79 = v173;
    v80 = v174;
    v81 = 24 * v174.m128i_i64[1];
    v182.m128i_i64[0] = v174.m128i_i64[0];
    v183 = (const char *)v173;
    v182.m128i_i64[1] = v174.m128i_i64[0];
    v184 = v174.m128i_i64[0] + 24 * v174.m128i_i64[1];
    if ( v174.m128i_i64[1] )
    {
      sub_141939070((unsigned int)&v215, 0, v174.m128i_i32[2], 8, 24);
      v134 = v217;
      sub_1419234B0(v216 + 24 * v217, v80.m128i_i64[0], v81);
      v217 = v80.m128i_i64[1] + v134;
      if ( v79 )
LABEL_182:
        sub_140001660(v80.m128i_i64[0], 24LL * (_QWORD)v79, 8);
    }
    else
    {
      v217 = 0;
      if ( v173 )
        goto LABEL_182;
    }
    v10 = v227;
    a1 = v225;
    if ( v227 )
    {
      v11 = (__int64)v214;
LABEL_25:
      sub_140001660(v11, v10, 1);
    }
  }
LABEL_26:
  v229 = 1;
  sub_1416B94E0(&v182, aReg, 3);
  v199 = 0x8000000;
  sub_1416B93C0(&v182, aQuery_0, 5);
  sub_1416B93C0(&v182, aHkcuSoftwareMi, 64);
  sub_1416B93C0(&v182, aV_1, 2);
  sub_1416B93C0(&v182, aAutoconfigurl, 13);
  sub_1416BCB60(&v173, &v182);
  v12 = v173;
  if ( v173 == (__int64 *)-1LL )
  {
    if ( (v174.m128i_i8[0] & 3u) - 2 >= 2 && (v174.m128i_i8[0] & 3) != 0 )
    {
      *(_QWORD *)&v219[8] = v174.m128i_i64[0] - 1;
      v219[0] = 3;
      sub_1416EBAD0(&v219[8]);
    }
    v229 = 1;
    sub_1401AB9C0(&v182);
    goto LABEL_70;
  }
  v13 = _mm_loadu_si128(&v174);
  v14 = _mm_loadu_si128(&v175);
  v210 = _mm_loadu_si128(&v176);
  v209 = v14;
  v208 = v13;
  v207 = (__int64)v173;
  sub_1401AB9C0(&v182);
  if ( v210.m128i_i32[2] )
  {
    if ( v12 )
      sub_140001660(v208.m128i_i64[0], v12, 1);
    v15 = v209.m128i_i64[0];
    a1 = v225;
    if ( v209.m128i_i64[0] )
    {
      v16 = (__m128i *)v209.m128i_i64[1];
      goto LABEL_69;
    }
    goto LABEL_70;
  }
  v17 = v208.m128i_i64[0];
  sub_1416D8D10(&v223, v208.m128i_i64[0], v208.m128i_i64[1]);
  v226 = v223;
  v173 = nullptr;
  v174.m128i_i64[0] = v224;
  v18 = &v174.m128i_i64[1];
  v174.m128i_i64[1] = *((_QWORD *)&v223 + 1);
  v175 = (__m128i)(unsigned __int64)v224;
  v176.m128i_i64[0] = v224;
  v176.m128i_i64[1] = 0xA0000000ALL;
  v177 = 1;
  v178 = 0;
  v19 = &v182;
  while ( 2 )
  {
    v227 = -1;
    if ( HIBYTE(v178) )
      goto LABEL_53;
    v20 = v174.m128i_i64[1];
    sub_140223420(&v182, &v174.m128i_u64[1]);
    if ( v182.m128i_i32[0] == 1 )
    {
      v21 = (const char *)v173;
      v173 = (__int64 *)v183;
      v22 = (const char *)(v183 - v21);
      v23 = (char *)&v21[v20];
      if ( v183 == v21 )
        goto LABEL_50;
LABEL_44:
      if ( v22[(_QWORD)v23 - 1] == 10 )
      {
        if ( v22 == (const char *)1 )
        {
          v22 = nullptr;
        }
        else if ( v22[(_QWORD)v23 - 2] == 13 )
        {
          v22 -= 2;
        }
        else
        {
          --v22;
        }
      }
    }
    else
    {
      if ( HIBYTE(v178) )
        goto LABEL_53;
      HIBYTE(v178) = 1;
      v22 = (const char *)(v174.m128i_i64[0] - (_QWORD)v173);
      if ( ((unsigned __int8)v178 | (v174.m128i_i64[0] != (_QWORD)v173)) != 1 )
        goto LABEL_53;
      v23 = (char *)v173 + v174.m128i_i64[1];
      if ( v22 )
        goto LABEL_44;
    }
LABEL_50:
    if ( !(unsigned __int8)sub_1402366A0(aAutoconfigurl, 13, v23, v22) )
      continue;
    break;
  }
  sub_1416E1760((unsigned int)&v182, (_DWORD)v23, (_DWORD)v22, (unsigned int)&unk_141A0771B, 6);
  v194 = 0;
  v195 = v22;
  LOWORD(v196) = 1;
  sub_140236AD0(v219, &v182);
  if ( v219[0] )
  {
    v194 = *(_QWORD *)&v219[16];
    if ( !BYTE1(v196) )
    {
      v72 = v190;
      sub_140236AD0(v219, &v182);
      if ( *(_DWORD *)v219 == 1 )
      {
        v73 = *(_QWORD *)&v219[8] - v194;
        v74 = v194 + v72;
      }
      else
      {
        if ( BYTE1(v196) )
          goto LABEL_53;
        if ( (_BYTE)v196 == 1 )
        {
          v77 = v194;
          v78 = v195;
        }
        else
        {
          v77 = v194;
          v78 = v195;
          if ( v195 == (const char *)v194 )
            goto LABEL_53;
        }
        v73 = (__int64)&v78[-v77];
        v74 = v190 + v77;
      }
      v100 = sub_1408FEA60(v74, v73);
      if ( v100 )
      {
        v18 = (__int64 *)v101;
        if ( v101 )
        {
          if ( v101 < 0 )
          {
            v103 = 0;
            goto LABEL_228;
          }
          v104 = v100;
          nullsub_1(v102, v101);
          v103 = 1;
          v105 = sub_140001650(v18, 1);
          if ( !v105 )
LABEL_228:
            sub_14196B2DB(v103, v18);
          v19 = (__m128i *)v105;
          sub_1419234B0(v105, v104, v18);
          v227 = (__int64)v18;
        }
      }
    }
  }
LABEL_53:
  if ( (__int64)v226 > 0 )
    sub_140001660(*((_QWORD *)&v226 + 1), v226, 1);
  if ( v12 )
    sub_140001660(v17, v12, 1);
  if ( v209.m128i_i64[0] )
    sub_140001660(v209.m128i_i64[1], v209.m128i_i64[0], 1);
  a1 = v225;
  if ( v227 == -1 )
    goto LABEL_70;
  v24 = (_DWORD *)sub_1408FEA60(v19, v18);
  if ( v25 < 7 )
  {
LABEL_61:
    v173 = nullptr;
    v174 = (__m128i)8uLL;
    v26 = 8;
    v27 = 0;
    v28 = nullptr;
    goto LABEL_62;
  }
  v53 = (unsigned __int64)v24;
  v54 = v25;
  v55 = *v24 ^ 0x656C6966;
  v56 = v55 | *(_DWORD *)(v53 + 3) ^ 0x2F2F3A65u;
  if ( !(v55 | *(_DWORD *)(v53 + 3) ^ 0x2F2F3A65) )
  {
    v70 = v25 - 7;
    v218 = v19;
    if ( (__int64)(v25 - 7) < 0 )
    {
      v71 = 0;
      goto LABEL_152;
    }
    if ( v25 == 7 )
    {
      v75 = 1;
    }
    else
    {
      nullsub_1(v56, v25);
      v71 = 1;
      v75 = sub_140001650(v70, 1);
      if ( !v75 )
LABEL_152:
        sub_14196B2DB(v71, v70);
    }
    v53 += 7LL;
    v173 = (__int64 *)v70;
    v174 = (__m128i)(unsigned __int64)v75;
    v82 = 0;
    v83 = 0;
    if ( !v70 )
    {
LABEL_206:
      sub_1416D8D10(&v182, v174.m128i_i64[0], v82);
      if ( v182.m128i_i64[0] != -1 )
      {
        *(_QWORD *)&v219[16] = v183;
        *(__m128i *)v219 = _mm_loadu_si128(&v182);
LABEL_236:
        if ( v173 )
          sub_140001660(v174.m128i_i64[0], v173, 1);
        sub_14077AD00(&v182, v219);
        v58 = v182.m128i_i64[1];
        v59 = v182.m128i_i64[0];
        if ( v182.m128i_i64[0] == -1 )
        {
          v57 = v182.m128i_i64[1];
          v58 = (v182.m128i_i8[8] & 3u) - 2;
          if ( (unsigned int)v58 >= 2 && (v182.m128i_i8[8] & 3) != 0 )
          {
            v174.m128i_i64[0] = v182.m128i_i64[1] - 1;
            LOBYTE(v173) = 3;
            sub_1416EBAD0(&v174);
          }
        }
        else
        {
          v53 = (unsigned __int64)v183;
        }
        goto LABEL_240;
      }
      v94 = v183;
      if ( (__int64)v183 < 0 )
      {
        v53 = 0;
        goto LABEL_210;
      }
      if ( v183 )
      {
        v97 = v182.m128i_i64[1];
        nullsub_1(v93, v92);
        v53 = 1;
        v98 = sub_140001650(v94, 1);
        if ( !v98 )
LABEL_210:
          sub_14196B2DB(v53, v94);
        v99 = v98;
        sub_1419234B0(v98, v97, v94);
      }
      else
      {
        v99 = 1;
      }
      *(_QWORD *)v219 = v94;
      *(_QWORD *)&v219[8] = v99;
      *(_QWORD *)&v219[16] = v94;
      goto LABEL_236;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v84 = *(_BYTE *)(v53 + v83);
        if ( v84 != 37 || v83 + 2 >= v70 )
          goto LABEL_196;
        v85 = v83 + 3;
        v86 = *(_BYTE *)(v53 + v83 + 1);
        if ( v86 < -64 || v85 != v70 && *(char *)(v53 + v85) <= -65 )
          sub_14196B4F0(v53, v70, v83 + 1, v85, (__int64)&off_141A08D38);
        v87 = v53 + v83 + 1;
        v25 = v86 == 43;
        v88 = *(unsigned __int8 *)(v87 + v25);
        v89 = v88 - 48;
        if ( v88 >= 0x3A )
          v89 = ((v88 - 65) & 0xFFFFFFDF) + 10;
        if ( v89 > 0xF )
          goto LABEL_196;
        if ( v86 != 43 )
          break;
LABEL_203:
        if ( (__int64 *)v82 == v173 )
          sub_14196B1D0(&v173, v25);
        *(_BYTE *)(v174.m128i_i64[0] + v82++) = v89;
        v174.m128i_i64[1] = v82;
        v83 += 3;
        if ( v85 >= v70 )
          goto LABEL_206;
      }
      v90 = *(unsigned __int8 *)(v87 + v25 + 1);
      v25 = ((v90 - 65) & 0xFFFFFFDF) + 10;
      v91 = v90 - 48;
      if ( v90 >= 0x3A )
        v91 = ((v90 - 65) & 0xFFFFFFDF) + 10;
      if ( v91 <= 0xF )
      {
        LOBYTE(v89) = (16 * v89) | v91;
        goto LABEL_203;
      }
LABEL_196:
      if ( (__int64 *)v82 == v173 )
        sub_14196B1D0(&v173, v25);
      *(_BYTE *)(v174.m128i_i64[0] + v82++) = v84;
      v174.m128i_i64[1] = v82;
      if ( ++v83 >= v70 )
        goto LABEL_206;
    }
  }
  if ( *(_DWORD *)v53 ^ 0x70747468 | *(_DWORD *)(v53 + 3) ^ 0x2F2F3A70
    && (v25 == 7 || *(_QWORD *)v53 != 0x2F2F3A7370747468LL) )
  {
    goto LABEL_61;
  }
  v218 = v19;
  sub_141283D00(&v182);
  v200 = 2;
  v201 = 0;
  sub_1419234B0(&v173, &v182, 928);
  sub_141282DC0(v219, &v173);
  if ( *(_DWORD *)&v219[16] == -2 )
  {
    sub_1401AA930(*(_QWORD *)v219);
    v59 = -1;
    goto LABEL_240;
  }
  v223 = *(_OWORD *)v219;
  v224 = *(_QWORD *)&v219[16];
  *(_QWORD *)&v219[16] = 0x101010101010101LL;
  *(__m128i *)v219 = _mm_load_si128((const __m128i *)&xmmword_141A04620);
  sub_140B6A570((unsigned int)&v182, (unsigned int)&v223, (unsigned int)v219, v53, v54);
  sub_141271350(&v173, &v182);
  v76 = v173;
  if ( v173 == (__int64 *)-1LL )
  {
    sub_1401AA930(v174.m128i_i64[0]);
LABEL_216:
    v59 = -1;
    goto LABEL_217;
  }
  sub_1419234B0(&v208, &v174, 168);
  v207 = (__int64)v76;
  sub_141276970(&v182, &v207);
  v58 = v182.m128i_i64[1];
  v59 = v182.m128i_i64[0];
  if ( v182.m128i_i64[0] == -1 )
  {
    sub_1401AA930(v182.m128i_i64[1]);
    goto LABEL_216;
  }
  v53 = (unsigned __int64)v183;
LABEL_217:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v223) )
  {
    v96 = v58;
    sub_141258290(&v223);
    v58 = v96;
  }
LABEL_240:
  v19 = v218;
  if ( v59 == -1 )
    goto LABEL_61;
  v222 = v58;
  v211 = v59;
  if ( v53 )
  {
    nullsub_1(v58, v57);
    v108 = sub_140001650(v53, 1);
    if ( !v108 )
      sub_14196B2DB(1, v53);
    v109 = v108;
    sub_1419234B0(v108, v222, v53);
    if ( v53 < 8 )
    {
      v110 = 0;
      v111 = v109;
      goto LABEL_350;
    }
    if ( v53 < 0x20 )
    {
      v110 = 0;
      v111 = v109;
      goto LABEL_255;
    }
    v110 = v53 & 0xFFFFFFFFFFFFFFE0uLL;
    v112 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A04630);
    v114 = _mm_load_si128((const __m128i *)&xmmword_141A045B0);
    v115 = _mm_load_si128((const __m128i *)&xmmword_141A045C0);
    v111 = v109;
    do
    {
      v116 = _mm_loadu_si128((const __m128i *)(v109 + v112));
      v117 = _mm_loadu_si128((const __m128i *)(v109 + v112 + 16));
      v118 = _mm_add_epi8(v116, si128);
      v119 = _mm_add_epi8(v117, si128);
      *(__m128i *)(v109 + v112) = _mm_xor_si128(
                                    _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v118, v114), v118), v115),
                                    v116);
      *(__m128i *)(v109 + v112 + 16) = _mm_xor_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v119, v114), v119), v115),
                                         v117);
      v112 += 32;
    }
    while ( v110 != v112 );
    if ( v53 != v110 )
    {
      if ( (v53 & 0x18) != 0 )
      {
LABEL_255:
        v120 = v110;
        v110 = v53 & 0xFFFFFFFFFFFFFFF8uLL;
        v121 = _mm_load_si128((const __m128i *)&xmmword_141A04640);
        v122 = _mm_load_si128((const __m128i *)&xmmword_141A045E0);
        v123 = _mm_load_si128((const __m128i *)&xmmword_141A045F0);
        do
        {
          v124 = _mm_loadl_epi64((const __m128i *)(v111 + v120));
          v125 = _mm_add_epi8(v124, v121);
          *(_QWORD *)(v111 + v120) = _mm_xor_si128(
                                       _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v125, v122), v125), v123),
                                       v124).m128i_u64[0];
          v120 += 8LL;
        }
        while ( v110 != v120 );
        goto LABEL_349;
      }
      do
      {
LABEL_350:
        *(_BYTE *)(v111 + v110) ^= 32 * ((unsigned __int8)(*(_BYTE *)(v111 + v110) - 97) < 0x1Au);
        ++v110;
LABEL_349:
        ;
      }
      while ( v53 != v110 );
    }
  }
  else
  {
    v111 = 1;
  }
  *(_QWORD *)v219 = 0;
  *(_QWORD *)&v219[8] = 8;
  *(_QWORD *)&v219[16] = 0;
  v182.m128i_i64[0] = 0;
  v182.m128i_i64[1] = 4;
  v183 = aSocks5_0;
  v184 = 7;
  v185 = aSocks5_1;
  v186 = 6;
  v187 = (__int64)aSocks;
  v188 = 6;
  v189 = aSocks5_1;
  v190 = 6;
  v191 = aHttps_1;
  v192 = 6;
  v193 = "http";
  v194 = 4;
  v195 = aProxy_1;
  v196 = 6;
  v197 = "http";
  v198 = 4;
  v135 = (unsigned __int8 *)(v222 + v53);
  v136 = &v173;
  v137 = 0;
  *((_QWORD *)&v226 + 1) = v53;
  v213 = v111;
  while ( 2 )
  {
    v138 = v137 + 1;
    v182.m128i_i64[0] = v137 + 1;
    v139 = 4 * v137;
    v212 = (&v183)[v139];
    if ( !v212 )
      break;
    v203 = v138;
    *(_QWORD *)&v226 = (&v183)[v139 + 1];
    v214 = (&v185)[v139];
    v202 = *(__int64 *)((char *)&v186 + v139 * 8);
    v140 = 0;
LABEL_280:
    if ( v140 )
    {
      if ( v53 <= v140 )
      {
        if ( v53 != v140 )
        {
LABEL_346:
          v228 = 1;
          sub_14196B4F0(v213, v53, v140, v53, (__int64)&off_141A08D70);
        }
      }
      else if ( *(char *)(v213 + v140) < -64 )
      {
        goto LABEL_346;
      }
    }
    v228 = 1;
    sub_1416E1760((_DWORD)v136, v213 + v140, v53 - v140, (_DWORD)v212, v226);
    v228 = 1;
    sub_140236AD0(&v207, v136);
    if ( (_DWORD)v207 == 1 )
    {
      v143 = v226 + v140;
      v144 = v208.m128i_i64[0] + v143 == 0;
      v140 = v208.m128i_i64[0] + v143;
      v53 = *((_QWORD *)&v226 + 1);
      if ( !v144 )
      {
        if ( *((_QWORD *)&v226 + 1) <= v140 )
        {
          if ( *((_QWORD *)&v226 + 1) != v140 )
          {
LABEL_347:
            v228 = 1;
            sub_14196B4F0(v222, DWORD2(v226), v140, DWORD2(v226), (__int64)&off_141A08D88);
          }
        }
        else if ( *(char *)(v222 + v140) < -64 )
        {
          goto LABEL_347;
        }
      }
      v145 = v140 + v222;
      v146 = *((_QWORD *)&v226 + 1) - v140;
      if ( *((_QWORD *)&v226 + 1) == v140 )
      {
LABEL_325:
        v146 = 0;
        goto LABEL_326;
      }
      v147 = 0;
      v148 = (char *)(v140 + v222);
      while ( 1 )
      {
        v149 = (unsigned __int8)*v148;
        if ( *v148 < 0 )
        {
          v150 = v149 & 0x1F;
          v151 = v148[1] & 0x3F;
          if ( (unsigned __int8)v149 <= 0xDFu )
          {
            v148 += 2;
            v149 = v151 | (v150 << 6);
            if ( v149 > 0x3B )
              goto LABEL_304;
          }
          else
          {
            v152 = (v151 << 6) | v148[2] & 0x3F;
            if ( (unsigned __int8)*v148 < 0xF0u )
            {
              v148 += 3;
              v149 = (v150 << 12) | v152;
              if ( v149 > 0x3B )
                goto LABEL_304;
            }
            else
            {
              v153 = v148[3];
              v148 += 4;
              v149 = ((v150 & 7) << 18) | (v152 << 6) | v153 & 0x3F;
              if ( v149 > 0x3B )
                goto LABEL_304;
            }
          }
        }
        else
        {
          ++v148;
          if ( v149 > 0x3B )
            goto LABEL_304;
        }
        v154 = 0x800008500000000LL;
        if ( _bittest64(&v154, v149) )
          goto LABEL_321;
LABEL_304:
        if ( v149 - 9 < 5 )
          goto LABEL_321;
        if ( v149 < 0x85 )
        {
          v155 = v149 < 0x80;
          v156 = 2;
LABEL_319:
          v159 = v156 - v155;
          goto LABEL_320;
        }
        v157 = v149 >> 8;
        if ( v149 >> 8 > 0x1F )
        {
          if ( v157 == 32 )
          {
            v158 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v149) >> 1;
          }
          else
          {
            if ( v157 != 48 )
              goto LABEL_317;
            v158 = v149 == 12288;
          }
        }
        else if ( v157 )
        {
          if ( v157 != 22 )
            goto LABEL_317;
          v158 = v149 == 5760;
        }
        else
        {
          v158 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v149);
        }
        if ( (v158 & 1) != 0 )
          goto LABEL_321;
LABEL_317:
        v159 = 2;
        if ( v149 >= 0x800 )
        {
          v155 = v149 < 0x10000;
          v156 = 4;
          goto LABEL_319;
        }
LABEL_320:
        v147 += v159;
        if ( v148 == (char *)v135 )
        {
LABEL_321:
          if ( !v147 )
            goto LABEL_325;
          if ( v147 >= v146 )
          {
            if ( v147 == v146 )
              goto LABEL_326;
LABEL_348:
            v228 = 1;
            sub_14196B4F0(v145, v146, 0, v147, (__int64)&off_141A08DA0);
          }
          if ( *(char *)(v145 + v147) <= -65 )
            goto LABEL_348;
          v146 = v147;
LABEL_326:
          v160 = sub_1408FEA60(v145, v146);
          if ( v161 )
          {
            v204 = (__int64)v214;
            v205 = v202;
            *(_QWORD *)&v162 = sub_1408FEA60(v160, v161);
            if ( (_QWORD)v162 )
            {
              v163 = *((_QWORD *)&v162 + 1);
              if ( *((_QWORD *)&v162 + 1) )
              {
                v223 = v162;
                v228 = 1;
                v164 = v162;
                if ( (unsigned __int8)sub_1402366A0(&unk_141A08528, 3, v162, *((_QWORD *)&v162 + 1)) )
                {
                  if ( v163 < 0 )
                  {
                    v169 = 0;
                  }
                  else
                  {
                    v167 = v136;
                    v168 = v135;
                    nullsub_1(v166, v165);
                    v169 = 1;
                    v170 = sub_140001650(v163, 1);
                    if ( v170 )
                    {
                      v171 = v170;
                      sub_1419234B0(v170, v164, v163);
                      v207 = v163;
                      v208.m128i_i64[0] = v171;
                      v208.m128i_i64[1] = v163;
                      v135 = v168;
                      v136 = v167;
                      goto LABEL_336;
                    }
                  }
                  v228 = 1;
                  sub_14196B2DB(v169, v163);
                }
                v173 = &v204;
                v174.m128i_i64[0] = (__int64)sub_140191200;
                v174.m128i_i64[1] = (__int64)&v223;
                v175.m128i_i64[0] = (__int64)sub_140191200;
                v228 = 1;
                sub_1416DAFA0(&v207, &unk_141A08E2F, v136);
LABEL_336:
                v172 = *(_QWORD *)&v219[16];
                if ( *(_QWORD *)&v219[16] == *(_QWORD *)v219 )
                  sub_141939F90(v219);
                v141 = *(_QWORD *)&v219[8];
                v142 = 3 * v172;
                *(_QWORD *)(*(_QWORD *)&v219[8] + 8 * v142 + 16) = v208.m128i_i64[1];
                *(__m128i *)(v141 + 8 * v142) = _mm_loadu_si128((const __m128i *)&v207);
                *(_QWORD *)&v219[16] = v172 + 1;
                v53 = *((_QWORD *)&v226 + 1);
              }
            }
          }
          goto LABEL_280;
        }
      }
    }
    v137 = v203;
    v53 = *((_QWORD *)&v226 + 1);
    if ( v203 != 4 )
      continue;
    break;
  }
  v183 = *(const char **)&v219[16];
  v182 = _mm_loadu_si128((const __m128i *)v219);
  v228 = 0;
  sub_1401EDCC0(&v173, &v182);
  if ( *((_QWORD *)&v226 + 1) )
    sub_140001660(v213, *((_QWORD *)&v226 + 1), 1);
  v19 = v218;
  if ( v211 )
    sub_140001660(v222, v211, 1);
  v28 = v173;
  v27 = v174.m128i_u64[1];
  v26 = v174.m128i_i64[0];
LABEL_62:
  v182.m128i_i64[0] = v26;
  v183 = (const char *)v28;
  v182.m128i_i64[1] = v26;
  v184 = v26 + 24 * v27;
  v29 = v217;
  if ( v27 > v215 - v217 )
  {
    v218 = v19;
    sub_141939070((unsigned int)&v215, v217, v27, 8, 24);
    v29 = v217;
    v19 = v218;
LABEL_64:
    sub_1419234B0(v216 + 24 * v29, v26, 24 * v27);
  }
  else if ( v27 )
  {
    goto LABEL_64;
  }
  v217 = v27 + v29;
  if ( v28 )
    sub_140001660(v26, 24LL * (_QWORD)v28, 8);
  v15 = v227;
  a1 = v225;
  if ( v227 )
  {
    v16 = v19;
LABEL_69:
    sub_140001660(v16, v15, 1);
  }
LABEL_70:
  v229 = 1;
  sub_1416B94E0(&v182, aNetsh, 5);
  v199 = 0x8000000;
  sub_1416B93C0(&v182, aWinhttp, 7);
  sub_1416B93C0(&v182, aShow, 4);
  sub_1416B93C0(&v182, aProxy_2, 5);
  sub_1416BCB60(&v173, &v182);
  v30 = v173;
  if ( v173 == (__int64 *)-1LL )
  {
    if ( (v174.m128i_i8[0] & 3u) - 2 >= 2 && (v174.m128i_i8[0] & 3) != 0 )
    {
      *(_QWORD *)&v219[8] = v174.m128i_i64[0] - 1;
      v219[0] = 3;
      sub_1416EBAD0(&v219[8]);
    }
    v229 = 1;
    sub_1401AB9C0(&v182);
    goto LABEL_123;
  }
  v31 = _mm_loadu_si128(&v174);
  v32 = _mm_loadu_si128(&v175);
  v210 = _mm_loadu_si128(&v176);
  v209 = v32;
  v208 = v31;
  v207 = (__int64)v173;
  sub_1401AB9C0(&v182);
  if ( v210.m128i_i32[2] )
  {
    if ( v30 )
      sub_140001660(v208.m128i_i64[0], v30, 1);
    v33 = v209.m128i_i64[0];
    if ( v209.m128i_i64[0] )
    {
      v34 = v209.m128i_i64[1];
      goto LABEL_122;
    }
    goto LABEL_123;
  }
  *(_QWORD *)&v226 = v208.m128i_i64[0];
  sub_1416D8D10(&v223, v208.m128i_i64[0], v208.m128i_i64[1]);
  v182.m128i_i64[0] = 0;
  v182.m128i_i64[1] = v224;
  v227 = *((_QWORD *)&v223 + 1);
  v183 = *((const char **)&v223 + 1);
  v184 = v224;
  v185 = nullptr;
  v186 = v224;
  v187 = 0xA0000000ALL;
  LOBYTE(v188) = 1;
  LOWORD(v189) = 0;
  while ( 2 )
  {
    v36 = v183;
    sub_140223420(&v173, &v183);
    if ( (_DWORD)v173 == 1 )
    {
      v37 = v182.m128i_i64[0];
      v182.m128i_i64[0] = v174.m128i_i64[1];
      v38 = v174.m128i_i64[1] - v37;
      v39 = &v36[v37];
      if ( v174.m128i_i64[1] == v37 )
        goto LABEL_96;
LABEL_90:
      if ( v39[v38 - 1] != 10 )
        goto LABEL_96;
      if ( v38 == 1 )
      {
        v38 = 0;
        goto LABEL_96;
      }
      if ( v39[v38 - 2] == 13 )
      {
        v40 = sub_1408FEA60(v39, v38 - 2);
        if ( v41 >= 0xC )
          goto LABEL_97;
      }
      else
      {
        v40 = sub_1408FEA60(v39, v38 - 1);
        if ( v41 >= 0xC )
          goto LABEL_97;
      }
LABEL_83:
      if ( BYTE1(v189) == 1 )
        goto LABEL_107;
      continue;
    }
    break;
  }
  if ( BYTE1(v189)
    || (BYTE1(v189) = 1,
        v38 = v182.m128i_i64[1] - v182.m128i_i64[0],
        ((unsigned __int8)v189 | (v182.m128i_i64[1] != v182.m128i_i64[0])) != 1) )
  {
LABEL_107:
    v47 = -1;
    goto LABEL_108;
  }
  v39 = &v183[v182.m128i_i64[0]];
  if ( v38 )
    goto LABEL_90;
LABEL_96:
  v40 = sub_1408FEA60(v39, v38);
  if ( v41 < 0xC )
    goto LABEL_83;
LABEL_97:
  if ( *(_QWORD *)v40 ^ 0x65532079786F7250LL | *(unsigned int *)(v40 + 8) ^ 0x72657672LL )
    goto LABEL_83;
  v42 = v40;
  v173 = (__int64 *)v40;
  v174 = (__m128i)v41;
  v43 = v41;
  v175.m128i_i64[0] = v41;
  v176.m128i_i8[0] = 1;
  v175.m128i_i64[1] = 0x3A0000003ALL;
  sub_140223420(v219, &v173);
  if ( !v219[0] )
    goto LABEL_83;
  v44 = sub_1408FEA60(*(_QWORD *)&v219[16] + v42, v43 - *(_QWORD *)&v219[16]);
  if ( !v44 )
    goto LABEL_83;
  v47 = v45;
  if ( !v45 )
    goto LABEL_83;
  if ( v45 == 6 )
  {
    v46 = _byteswap_ulong(*(_DWORD *)v44);
    v45 = 678326126;
    if ( (_DWORD)v46 != 678326126
      || (v46 = (unsigned __int16)__ROL2__(*(_WORD *)(v44 + 4), 8), v45 = 25897, v35 = 0, (unsigned __int16)v46 != 25897) )
    {
      v35 = 2 * ((unsigned int)v46 >= (unsigned int)v45) - 1;
    }
    if ( v35 )
      goto LABEL_258;
    goto LABEL_83;
  }
  if ( v45 < 0 )
  {
    v95 = 0;
    goto LABEL_214;
  }
LABEL_258:
  v126 = v44;
  nullsub_1(v46, v45);
  v95 = 1;
  v127 = sub_140001650(v47, 1);
  if ( !v127 )
LABEL_214:
    sub_14196B2DB(v95, v47);
  *((_QWORD *)&v226 + 1) = v127;
  sub_1419234B0(v127, v126, v47);
LABEL_108:
  a1 = v225;
  if ( (__int64)v223 > 0 )
    sub_140001660(v227, v223, 1);
  if ( v30 )
    sub_140001660(v226, v30, 1);
  if ( v209.m128i_i64[0] )
    sub_140001660(v209.m128i_i64[1], v209.m128i_i64[0], 1);
  if ( v47 != -1 )
  {
    v227 = v47;
    sub_1401EAA20((__int64)&v173, *((__int64 *)&v226 + 1), v47);
    v48 = v173;
    v49 = v174;
    v50 = 24 * v174.m128i_i64[1];
    v182.m128i_i64[0] = v174.m128i_i64[0];
    v183 = (const char *)v173;
    v182.m128i_i64[1] = v174.m128i_i64[0];
    v184 = v174.m128i_i64[0] + 24 * v174.m128i_i64[1];
    v51 = v217;
    if ( v174.m128i_i64[1] > (unsigned __int64)(v215 - v217) )
    {
      sub_141939070((unsigned int)&v215, v217, v174.m128i_i32[2], 8, 24);
      v51 = v217;
LABEL_117:
      sub_1419234B0(v216 + 24 * v51, v49.m128i_i64[0], v50);
    }
    else if ( v174.m128i_i64[1] )
    {
      goto LABEL_117;
    }
    v217 = v49.m128i_i64[1] + v51;
    if ( v48 )
      sub_140001660(v49.m128i_i64[0], 24LL * (_QWORD)v48, 8);
    v33 = v227;
    a1 = v225;
    if ( v227 )
    {
      v34 = *((_QWORD *)&v226 + 1);
LABEL_122:
      sub_140001660(v34, v33, 1);
    }
  }
LABEL_123:
  v229 = 0;
  sub_1401EDCC0(a1, &v215);
  return a1;
}
