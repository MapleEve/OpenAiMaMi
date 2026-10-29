// win 1.2.7 latest-exe | module src/core/voice/workspace.rs | ea 0x1408eb1d0 | successor of pre-update 0x14103e2e0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.893, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1408EB1D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // kr00_16
  char v6; // dl
  __m128i v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rcx
  __m128i si128; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  char *v26; // rsi
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  const __m128i *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r12
  __m128i v37; // xmm0
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rdx
  _QWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int128 v54; // kr30_16
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdi
  __int64 v58; // r14
  bool v59; // zf
  unsigned __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned __int64 v64; // r15
  __int8 *v65; // r14
  __int64 v66; // rsi
  __int64 v67; // r13
  __int64 v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // rdi
  unsigned __int64 v71; // rbx
  __int64 v72; // r14
  int v73; // edx
  __int64 v74; // rax
  __m128i v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rbx
  const __m128i *v82; // r14
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  PVOID v92; // rcx
  char v93; // al
  __int64 v94; // rdx
  __int64 v95; // r8
  __m128i v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm2
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rbx
  const __m128i *v103; // r14
  __m128i v105; // xmm0
  __int64 v106; // rax
  __int64 v107; // rdx
  unsigned __int64 v108; // rax
  __int64 v109; // rdi
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  char v113; // al
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // r13
  __int64 v118; // rsi
  __int64 v119; // rsi
  _BYTE v120[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v121[16]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v122; // [rsp+50h] [rbp-30h] BYREF
  __int128 v123; // [rsp+60h] [rbp-20h]
  __int128 v124; // [rsp+70h] [rbp-10h]
  __int128 v125; // [rsp+80h] [rbp+0h]
  _QWORD v126[2]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v127; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v128; // [rsp+A8h] [rbp+28h]
  __int128 v129; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v130; // [rsp+C8h] [rbp+48h]
  __int128 v131; // [rsp+D8h] [rbp+58h]
  __int128 v132; // [rsp+E8h] [rbp+68h]
  __m128i v133; // [rsp+F8h] [rbp+78h]
  __int128 v134; // [rsp+108h] [rbp+88h]
  __int128 v135; // [rsp+118h] [rbp+98h]
  __int64 v136; // [rsp+128h] [rbp+A8h]
  __int64 v137; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v138; // [rsp+138h] [rbp+B8h]
  __int64 v139; // [rsp+140h] [rbp+C0h]
  __int64 v140; // [rsp+148h] [rbp+C8h]
  __int64 v141; // [rsp+150h] [rbp+D0h]
  __int64 v142; // [rsp+158h] [rbp+D8h]
  __int64 v143; // [rsp+160h] [rbp+E0h]
  __int64 v144; // [rsp+168h] [rbp+E8h]
  __int64 v145; // [rsp+170h] [rbp+F0h]
  __int64 v146; // [rsp+178h] [rbp+F8h]
  __int128 v147; // [rsp+180h] [rbp+100h] BYREF
  __int128 v148; // [rsp+190h] [rbp+110h]
  __int64 v149; // [rsp+1A0h] [rbp+120h]
  __int64 v150; // [rsp+1A8h] [rbp+128h]
  __int64 v151; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v152; // [rsp+1C0h] [rbp+140h]
  __int64 v153; // [rsp+1D0h] [rbp+150h]
  __int64 v154; // [rsp+1D8h] [rbp+158h]
  __int64 v155; // [rsp+1E0h] [rbp+160h]
  __int64 v156; // [rsp+1E8h] [rbp+168h]
  _BYTE v157[80]; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v158; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v159; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v160; // [rsp+258h] [rbp+1D8h]
  _QWORD *v161; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v162; // [rsp+270h] [rbp+1F0h]
  unsigned __int64 v163; // [rsp+278h] [rbp+1F8h]
  __int64 v164; // [rsp+280h] [rbp+200h] BYREF
  __int64 v165; // [rsp+288h] [rbp+208h]
  unsigned __int64 v166; // [rsp+290h] [rbp+210h]
  unsigned __int64 v167; // [rsp+298h] [rbp+218h]
  __int64 v168; // [rsp+2A0h] [rbp+220h]
  __int64 v169; // [rsp+2A8h] [rbp+228h]
  __int64 v170; // [rsp+2B0h] [rbp+230h]
  __int64 v171; // [rsp+2B8h] [rbp+238h]
  _BYTE v172[136]; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v173; // [rsp+348h] [rbp+2C8h]
  __int64 v174; // [rsp+350h] [rbp+2D0h]
  __int8 v175; // [rsp+358h] [rbp+2D8h]
  __int64 v176; // [rsp+368h] [rbp+2E8h]
  __int64 v177; // [rsp+370h] [rbp+2F0h]
  __int64 v178; // [rsp+378h] [rbp+2F8h]
  PVOID Address; // [rsp+380h] [rbp+300h]
  __int8 *v180; // [rsp+388h] [rbp+308h]
  __int64 v181; // [rsp+390h] [rbp+310h]
  _QWORD *v182; // [rsp+398h] [rbp+318h]
  char v183; // [rsp+3A7h] [rbp+327h] BYREF
  __int64 v184; // [rsp+3A8h] [rbp+328h]
  __int64 v185; // [rsp+3B0h] [rbp+330h]
  __int8 v186; // [rsp+3BFh] [rbp+33Fh]
  char v187; // [rsp+3C0h] [rbp+340h]
  char v188; // [rsp+3C1h] [rbp+341h]
  char v189; // [rsp+3C2h] [rbp+342h]
  char v190; // [rsp+3C3h] [rbp+343h]
  char v191; // [rsp+3C4h] [rbp+344h]
  char v192; // [rsp+3C5h] [rbp+345h]
  char v193; // [rsp+3C6h] [rbp+346h]
  char v194; // [rsp+3C7h] [rbp+347h]
  char v195; // [rsp+3C8h] [rbp+348h]
  char v196; // [rsp+3C9h] [rbp+349h]
  char v197; // [rsp+3CAh] [rbp+34Ah]
  char v198; // [rsp+3CBh] [rbp+34Bh]
  char v199; // [rsp+3CCh] [rbp+34Ch]
  char v200; // [rsp+3CDh] [rbp+34Dh]
  char v201; // [rsp+3CEh] [rbp+34Eh]
  char v202; // [rsp+3CFh] [rbp+34Fh]
  __int64 v203; // [rsp+3D0h] [rbp+350h]

  v203 = -2;
  v177 = a3;
  v201 = 1;
  v200 = 1;
  v199 = 1;
  sub_1408ECC50(v172);
  v5 = *(_OWORD *)v172;
  v6 = v172[16];
  if ( *(_QWORD *)v172 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v172[80];
    v7 = _mm_loadu_si128((const __m128i *)&v172[17]);
    v8 = *(_OWORD *)&v172[33];
    v9 = *(_OWORD *)&v172[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v172[65];
    *(_OWORD *)(a1 + 57) = v9;
    *(_OWORD *)(a1 + 41) = v8;
    *(__m128i *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 24) = v6;
    *(_QWORD *)a1 = -1;
    v10 = (_QWORD *)v177;
    v11 = *(_QWORD *)(v177 + 24);
    if ( (unsigned __int64)(v11 - 1) >= 0xFFFFFFFFFFFFFFFEuLL )
      goto LABEL_4;
    goto LABEL_3;
  }
  v195 = v172[16];
  Address = *(PVOID *)&v172[8];
  v194 = 1;
  v193 = 1;
  v192 = 1;
  sub_1408E8540(v172, a2);
  *(_OWORD *)v157 = *(_OWORD *)&v172[8];
  *(_OWORD *)&v157[16] = *(_OWORD *)&v172[24];
  *(_OWORD *)&v157[32] = *(_OWORD *)&v172[40];
  *(_OWORD *)&v157[48] = *(_OWORD *)&v172[56];
  *(_OWORD *)&v157[64] = *(_OWORD *)&v172[72];
  v158 = *(__m128i *)&v172[88];
  if ( *(_QWORD *)v172 == -1 )
  {
    *(__m128i *)(a1 + 88) = v158;
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v157[64];
    si128 = _mm_load_si128((const __m128i *)v157);
    v24 = *(_OWORD *)&v157[16];
    v25 = *(_OWORD *)&v157[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v157[48];
    *(_OWORD *)(a1 + 40) = v25;
    *(_OWORD *)(a1 + 24) = v24;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = -1;
    v26 = (char *)Address;
    if ( (v195 & 1) == 0 )
    {
      if ( 2 * *off_142240260 )
      {
        v201 = 1;
        v200 = 1;
        v199 = 1;
        if ( !(unsigned __int8)sub_14196A710(v19, v18, v20) )
          v26[1] = 1;
      }
    }
    v27 = *v26;
    *v26 = 0;
    if ( v27 == 2 )
    {
      v201 = 1;
      v200 = 1;
      v199 = 1;
      WakeByAddressSingle(v26);
    }
    v10 = (_QWORD *)v177;
    v11 = *(_QWORD *)(v177 + 24);
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_4;
LABEL_3:
    sub_140001660(v10[4], v11, 1);
LABEL_4:
    v12 = v10[6];
    if ( v12 != -1 && v12 )
      sub_140001660(v10[7], v12, 1);
    v13 = v10[2];
    if ( v13 )
    {
      v14 = (_QWORD *)(v10[1] + 56LL);
      do
      {
        v15 = *(v14 - 7);
        if ( v15 )
          sub_140001660(*(v14 - 6), v15, 1);
        v16 = *(v14 - 4);
        if ( v16 )
          sub_140001660(*(v14 - 3), v16, 1);
        v17 = *(v14 - 1);
        if ( v17 > 0 )
          sub_140001660(*v14, v17, 1);
        v14 += 9;
        --v13;
      }
      while ( v13 );
    }
    if ( *v10 )
      sub_140001660(*(_QWORD *)(v177 + 8), 72LL * *v10, 8);
    return a1;
  }
  v136 = v173;
  v135 = *(_OWORD *)&v172[120];
  v134 = *(_OWORD *)&v172[104];
  v128 = *(_OWORD *)v157;
  v129 = *(_OWORD *)&v157[16];
  v130 = *(_OWORD *)&v157[32];
  v131 = *(_OWORD *)&v157[48];
  v132 = *(_OWORD *)&v157[64];
  v133 = _mm_load_si128(&v158);
  v127 = *(_QWORD *)v172;
  v198 = 1;
  v197 = 1;
  v196 = 1;
  *(_DWORD *)v157 = sub_1416B2E50(v173, v18, v20);
  *(_DWORD *)&v157[4] = v21;
  v198 = 1;
  v197 = 1;
  v196 = 1;
  sub_1416B2E00(v172, v157, 3577643008LL, 27111902);
  if ( v172[0] )
    v181 = 0;
  else
    v181 = *(_QWORD *)&v172[8];
  v198 = 1;
  v197 = 1;
  v196 = 1;
  v28 = sub_1416AE140(v22);
  if ( *(_BYTE *)(v28 + 16) == 1 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(_QWORD *)(v28 + 8);
  }
  else
  {
    v198 = 1;
    v197 = 1;
    v196 = 1;
    v119 = v28;
    v29 = sub_1416C5230();
    v28 = v119;
    *(_QWORD *)v119 = v29;
    *(_QWORD *)(v119 + 8) = v30;
    *(_BYTE *)(v119 + 16) = 1;
  }
  *(_QWORD *)v28 = v29 + 1;
  v148 = xmmword_141A51860;
  v147 = *(_OWORD *)&off_141A51850;
  v149 = v29;
  v150 = v30;
  v164 = 0;
  v165 = 8;
  v166 = 0;
  v31 = (const __m128i *)v177;
  *(_QWORD *)&v172[16] = *(_QWORD *)(v177 + 40);
  *(__m128i *)v172 = _mm_loadu_si128((const __m128i *)(v177 + 24));
  v191 = 1;
  v190 = 1;
  v189 = 1;
  sub_1408E6D30(&v159, v172);
  *(_QWORD *)&v172[16] = v31[4].m128i_i64[0];
  *(__m128i *)v172 = _mm_loadu_si128(v31 + 3);
  v188 = 1;
  v187 = 1;
  sub_1408E6D30(&v151, v172);
  v153 = a2;
  v154 = a1;
  v32 = v31->m128i_i64[0];
  v33 = v31->m128i_i64[1];
  v34 = v33 + 72 * v31[1].m128i_i64[0];
  v137 = v33;
  v138 = v33;
  v139 = v32;
  v176 = v34;
  v140 = v34;
  v180 = &v31[4].m128i_i8[8];
  while ( 1 )
  {
    v35 = v33;
    if ( v33 == v176 )
      break;
    v33 += 72;
    v138 = v35 + 72;
    v36 = *(_QWORD *)v35;
    v125 = *(_OWORD *)(v35 + 56);
    v124 = *(_OWORD *)(v35 + 40);
    v123 = *(_OWORD *)(v35 + 24);
    v122 = *(__m128i *)(v35 + 8);
    if ( v36 == -1 )
      break;
    *(_QWORD *)v157 = v36;
    v37 = _mm_load_si128(&v122);
    *(_OWORD *)&v157[56] = v125;
    *(_OWORD *)&v157[40] = v124;
    *(_OWORD *)&v157[24] = v123;
    *(__m128i *)&v157[8] = v37;
    v38 = v37.m128i_i64[0];
    v39 = sub_1408FEA60(v37.m128i_i64[0], v37.m128i_i64[1]);
    v185 = v40;
    v41 = v39;
    v42 = *(_QWORD *)&v157[32];
    v43 = sub_1408FEA60(*(_QWORD *)&v157[32], *(_QWORD *)&v157[40]);
    v184 = v44;
    if ( v185 && v184 && (v45 = v43, sub_1416D94C0(v120, v41, v185), !(unsigned __int8)sub_140871180(&v147, v120)) )
    {
      sub_141597890(v121);
      v161 = nullptr;
      v162 = 1;
      v163 = 0;
      *(_QWORD *)&v172[16] = 1610612768;
      *(_QWORD *)v172 = &v161;
      *(_QWORD *)&v172[8] = &off_141A55F58;
      if ( (unsigned __int8)sub_1415989F0(v121, v172) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_4,
          55,
          (unsigned int)&v183,
          (unsigned int)&unk_141A52978,
          (__int64)&off_141A56010);
      v182 = v161;
      v178 = v162;
      if ( v163 <= 8 )
      {
        if ( v163 != 8 )
LABEL_149:
          sub_14196B4F0(v162, v163, 0, 8, (__int64)&off_141A55768);
      }
      else if ( *(char *)(v162 + 8) <= -65 )
      {
        goto LABEL_149;
      }
      v126[0] = v162;
      v126[1] = 8;
      v161 = v126;
      v162 = (__int64)sub_140191200;
      sub_1416DAFA0(v172, &unk_141A556C8, &v161);
      v47 = v182;
      if ( v182 )
        sub_140001660(v178, v182, 1);
      v178 = *(_QWORD *)&v172[8];
      v182 = *(_QWORD **)v172;
      if ( v185 < 0 )
      {
        v115 = 0;
        goto LABEL_129;
      }
      v141 = *(_QWORD *)&v172[16];
      nullsub_1(v185, v47);
      v48 = sub_140001650(v185, 1);
      if ( !v48 )
      {
        v170 = v185;
        v115 = 1;
LABEL_129:
        sub_14196B2DB(v115, v170);
      }
      v170 = v48;
      sub_1419234B0(v48, v41, v185);
      v51 = v184;
      if ( v184 < 0 )
      {
        v116 = 0;
        goto LABEL_131;
      }
      nullsub_1(v50, v49);
      v52 = sub_140001650(v51, 1);
      if ( !v52 )
      {
        v171 = v51;
        v116 = 1;
LABEL_131:
        sub_14196B2DB(v116, v171);
      }
      v171 = v52;
      sub_1419234B0(v52, v45, v51);
      v186 = *v180;
      v53 = -1;
      v54 = __PAIR128__(v167, -1);
      if ( v159 != -1 )
      {
        sub_1416DB410(v172, &v159);
        v155 = *(_QWORD *)&v172[8];
        v53 = *(_QWORD *)v172;
        v143 = *(_QWORD *)&v172[16];
      }
      v168 = v53;
      if ( v151 != -1 )
      {
        sub_1416DB410(v172, &v151);
        v54 = *(_OWORD *)v172;
        v144 = *(_QWORD *)&v172[16];
      }
      v167 = v54 >> 64;
      v169 = v54;
      v55 = -1;
      v142 = *(_QWORD *)&v157[48];
      if ( *(_QWORD *)&v157[48] != -1 )
      {
        v57 = sub_1408FEA60(*(_QWORD *)&v157[56], *(_QWORD *)&v157[64]);
        if ( v57 )
        {
          v58 = v56;
          v59 = v56 == 0;
          v55 = -1;
          if ( !v59 )
          {
            sub_1401E7560((unsigned int)v172, v58, 0, 1, 1);
            v156 = *(_QWORD *)&v172[8];
            if ( v172[0] )
              sub_14196B2DB(v156, *(_QWORD *)&v172[16]);
            v145 = *(_QWORD *)&v172[16];
            sub_1419234B0(*(_QWORD *)&v172[16], v57, v58);
            v146 = v58;
            v55 = v156;
          }
        }
        else
        {
          v55 = -1;
        }
      }
      *(_QWORD *)v172 = v182;
      *(_QWORD *)&v172[8] = v178;
      *(_QWORD *)&v172[16] = v141;
      *(_QWORD *)&v172[24] = v185;
      *(_QWORD *)&v172[32] = v170;
      *(_QWORD *)&v172[40] = v185;
      *(_QWORD *)&v172[48] = v184;
      *(_QWORD *)&v172[56] = v171;
      *(_QWORD *)&v172[64] = v184;
      v175 = v186;
      *(_QWORD *)&v172[72] = v168;
      *(_QWORD *)&v172[80] = v155;
      *(_QWORD *)&v172[88] = v143;
      *(_QWORD *)&v172[96] = v169;
      *(_QWORD *)&v172[104] = v167;
      *(_QWORD *)&v172[112] = v144;
      *(_QWORD *)&v172[120] = v55;
      *(_QWORD *)&v172[128] = v145;
      v173 = v146;
      v174 = v181;
      v60 = v166;
      if ( v166 == v164 )
        sub_141939F20(&v164);
      sub_1419234B0(v165 + 160 * v60, v172, 160);
      v166 = v60 + 1;
      if ( v36 )
        sub_140001660(v38, v36, 1);
      if ( *(_QWORD *)&v157[24] )
        sub_140001660(v42, *(_QWORD *)&v157[24], 1);
      v46 = v142;
      if ( v142 != -1 )
      {
LABEL_41:
        if ( v46 )
          sub_140001660(*(_QWORD *)&v157[56], v46, 1);
      }
    }
    else
    {
      if ( v36 )
        sub_140001660(v37.m128i_i64[0], v36, 1);
      if ( *(_QWORD *)&v157[24] )
        sub_140001660(v42, *(_QWORD *)&v157[24], 1);
      v46 = *(_QWORD *)&v157[48];
      if ( *(_QWORD *)&v157[48] != -1 )
        goto LABEL_41;
    }
  }
  sub_1402335D0(&v137);
  *(_QWORD *)v172 = v180;
  *(_QWORD *)&v172[8] = &v159;
  v64 = v130;
  if ( (_QWORD)v130 )
  {
    v65 = (__int8 *)(1 - v130);
    v62 = 160 * v130 - 160;
    v184 = *((_QWORD *)&v129 + 1);
    v66 = *((_QWORD *)&v129 + 1) + 160LL;
    v67 = 0;
    a1 = v154;
    while ( 1 )
    {
      v185 = v62;
      v68 = v184 + 160 * v67;
      v202 = 1;
      if ( !(unsigned __int8)sub_1401D5600(v172, v68) )
        break;
      ++v67;
      ++v65;
      v62 = v185 - 160;
      v66 += 160;
      if ( v67 == v64 )
      {
        v67 = v130;
        goto LABEL_78;
      }
    }
    sub_1401AF7F0(v68);
    if ( v67 + 1 < v64 )
    {
      do
      {
        v180 = v65;
        v176 = v67;
        v181 = v66;
        if ( (unsigned __int8)sub_1401D5600(v172, v66) )
        {
          v117 = v176;
          v118 = v181;
          sub_1419234B0(v184 + 160 * v176, v181, 160);
          v67 = v117 + 1;
        }
        else
        {
          v118 = v181;
          sub_1401AF7F0(v181);
          v67 = v176;
        }
        v185 -= 160;
        v66 = v118 + 160;
        v65 = v180 + 1;
      }
      while ( v180 != (__int8 *)-1LL );
    }
    *(_QWORD *)&v130 = v67;
  }
  else
  {
    v67 = 0;
    a1 = v154;
  }
LABEL_78:
  v69 = v164;
  v70 = v165;
  v71 = v166;
  v72 = 160 * v166;
  *(_QWORD *)v172 = v165;
  *(_QWORD *)&v172[16] = v164;
  *(_QWORD *)&v172[8] = v165;
  *(_QWORD *)&v172[24] = v165 + 160 * v166;
  if ( v166 > (__int64)v129 - v67 )
  {
    sub_141939070((unsigned int)&v129, v67, v166, 8, 160);
    v67 = v130;
LABEL_80:
    sub_1419234B0(*((_QWORD *)&v129 + 1) + 160 * v67, v70, v72);
  }
  else if ( v166 )
  {
    goto LABEL_80;
  }
  *(_QWORD *)&v130 = v71 + v67;
  if ( v69 )
    sub_140001660(v70, 160 * v69, 8);
  LODWORD(v136) = 1;
  v202 = 0;
  *(_DWORD *)v157 = sub_1416B2E50(v62, v61, v63);
  *(_DWORD *)&v157[4] = v73;
  v202 = 0;
  sub_1416B2E00(v172, v157, 3577643008LL, 27111902);
  if ( v172[0] )
    v74 = 0;
  else
    v74 = *(_QWORD *)&v172[8];
  *((_QWORD *)&v135 + 1) = v74;
  v202 = 0;
  sub_1408DCE20(&v127);
  v202 = 0;
  HIDWORD(_RAX) = (unsigned __int64)sub_1408E9DB0(v172, v153, &v127) >> 32;
  if ( *(_DWORD *)v172 == -1 )
  {
    v94 = *(_QWORD *)(v153 + 712);
    v95 = *(_QWORD *)(v153 + 720);
    v202 = 0;
    HIDWORD(_RAX) = (unsigned __int64)sub_1408DCC00(v172, v94, v95, &v127) >> 32;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)&v172[112];
    *(_OWORD *)(a1 + 96) = *(_OWORD *)&v172[96];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v172[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v172[64];
    v97 = _mm_loadu_si128((const __m128i *)v172);
    v98 = *(_OWORD *)&v172[16];
    v99 = *(_OWORD *)&v172[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v172[48];
    *(_OWORD *)(a1 + 32) = v99;
    *(_OWORD *)(a1 + 16) = v98;
    *(__m128i *)a1 = v97;
    if ( v151 != -1 && v151 )
      sub_140001660(v152, v151, 1);
    if ( v159 != -1 && v159 )
      sub_140001660(v160, v159, 1);
    v100 = *((_QWORD *)&v147 + 1);
    if ( *((_QWORD *)&v147 + 1) )
    {
      v101 = *((_QWORD *)&v148 + 1);
      if ( *((_QWORD *)&v148 + 1) )
      {
        v102 = v147;
        v103 = (const __m128i *)(v147 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v147));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v105 = _mm_load_si128(v103);
              v102 -= 384;
              ++v103;
              _R15D = _mm_movemask_epi8(v105) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v106 = -3 * _RAX;
          v107 = *(_QWORD *)(v102 + 8 * v106 - 24);
          if ( v107 )
            sub_140001660(*(_QWORD *)(v102 + 8 * v106 - 16), v107, 1);
          --v101;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v101 );
      }
      v108 = (24 * v100 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v109 = v108 + v100 + 17;
      if ( v109 )
        sub_140001660(v147 - v108, v109, 16);
    }
    v194 = 0;
    v193 = 0;
    v192 = 0;
    sub_14084D1D0(&v127);
    if ( (v195 & 1) == 0 )
    {
      if ( 2 * *off_142240260 )
      {
        v201 = 0;
        v200 = 0;
        v199 = 0;
        if ( !(unsigned __int8)sub_14196A710(v111, v110, v112) )
          *((_BYTE *)Address + 1) = 1;
      }
    }
    v92 = Address;
    v113 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v113 == 2 )
    {
LABEL_126:
      v201 = 0;
      v200 = 0;
      v199 = 0;
      WakeByAddressSingle(v92);
    }
  }
  else
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v172[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v172[64];
    v76 = _mm_loadu_si128((const __m128i *)v172);
    v77 = *(_OWORD *)&v172[16];
    v78 = *(_OWORD *)&v172[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v172[48];
    *(_OWORD *)(a1 + 40) = v78;
    *(_OWORD *)(a1 + 24) = v77;
    *(__m128i *)(a1 + 8) = v76;
    *(_QWORD *)a1 = -1;
    if ( v151 != -1 && v151 )
      sub_140001660(v152, v151, 1);
    if ( v159 != -1 && v159 )
      sub_140001660(v160, v159, 1);
    v79 = *((_QWORD *)&v147 + 1);
    if ( *((_QWORD *)&v147 + 1) )
    {
      v80 = *((_QWORD *)&v148 + 1);
      if ( *((_QWORD *)&v148 + 1) )
      {
        v81 = v147;
        v82 = (const __m128i *)(v147 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v147));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v84 = _mm_load_si128(v82);
              v81 -= 384;
              ++v82;
              _R15D = _mm_movemask_epi8(v84) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v85 = -3 * _RAX;
          v86 = *(_QWORD *)(v81 + 8 * v85 - 24);
          if ( v86 )
            sub_140001660(*(_QWORD *)(v81 + 8 * v85 - 16), v86, 1);
          --v80;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v80 );
      }
      v87 = (24 * v79 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v88 = v87 + v79 + 17;
      if ( v88 )
        sub_140001660(v147 - v87, v88, 16);
    }
    v194 = 0;
    v193 = 0;
    v192 = 0;
    sub_14084D1D0(&v127);
    if ( (v195 & 1) == 0 )
    {
      if ( 2 * *off_142240260 )
      {
        v201 = 0;
        v200 = 0;
        v199 = 0;
        if ( !(unsigned __int8)sub_14196A710(v90, v89, v91) )
          *((_BYTE *)Address + 1) = 1;
      }
    }
    v92 = Address;
    v93 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v93 == 2 )
      goto LABEL_126;
  }
  return a1;
}
