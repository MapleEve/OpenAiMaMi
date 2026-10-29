// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x14103e2e0 | name sub_14103E2E0
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14103E2E0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int128 v6; // kr00_16
  char v7; // dl
  __m128i v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rcx
  __m128i si128; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  char *v27; // rsi
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rdi
  __int64 v37; // rax
  __int64 *v38; // r14
  __int64 *v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // r13
  __m128i v42; // xmm0
  const __m128i *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // r15
  __int64 v51; // rsi
  __m128i *v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r15
  __int64 v56; // rdi
  __m128i *v57; // rax
  __m128i *v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // rdi
  unsigned __int128 v61; // kr40_16
  __int64 v62; // rdi
  const __m128i *v63; // rax
  const __m128i *v64; // rdx
  __int64 v65; // rsi
  const __m128i *v66; // r15
  unsigned __int64 v67; // rdi
  _QWORD *v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rsi
  const __m128i *v73; // rdi
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // r14
  __int64 v76; // r15
  int v77; // edx
  __int64 v78; // rax
  __m128i v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rbx
  const __m128i *v86; // r14
  __m128i v88; // xmm0
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rcx
  PVOID v94; // rcx
  char v95; // al
  __int64 v96; // rdx
  __int64 v97; // r8
  __m128i v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm2
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rbx
  const __m128i *v105; // r14
  __m128i v107; // xmm0
  __int64 v108; // rax
  __int64 v109; // rdx
  unsigned __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rcx
  char v113; // al
  __int64 v115; // rcx
  _BYTE v116[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v117[16]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v118; // [rsp+50h] [rbp-30h] BYREF
  __int128 v119; // [rsp+60h] [rbp-20h]
  __int128 v120; // [rsp+70h] [rbp-10h]
  __int128 v121; // [rsp+80h] [rbp+0h]
  __int64 v122; // [rsp+98h] [rbp+18h] BYREF
  __int128 v123; // [rsp+A0h] [rbp+20h]
  __int128 v124; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v125; // [rsp+C0h] [rbp+40h]
  __int128 v126; // [rsp+D0h] [rbp+50h]
  __int128 v127; // [rsp+E0h] [rbp+60h]
  __m128i v128; // [rsp+F0h] [rbp+70h]
  __int128 v129; // [rsp+100h] [rbp+80h]
  __int128 v130; // [rsp+110h] [rbp+90h]
  const __m128i *v131; // [rsp+120h] [rbp+A0h]
  _QWORD v132[2]; // [rsp+128h] [rbp+A8h] BYREF
  __int64 *v133; // [rsp+138h] [rbp+B8h] BYREF
  __int64 *v134; // [rsp+140h] [rbp+C0h]
  __int64 v135; // [rsp+148h] [rbp+C8h]
  __int64 *v136; // [rsp+150h] [rbp+D0h]
  __int64 *v137; // [rsp+158h] [rbp+D8h]
  _QWORD *v138; // [rsp+160h] [rbp+E0h]
  __int64 v139; // [rsp+168h] [rbp+E8h]
  __int64 v140; // [rsp+170h] [rbp+F0h]
  __int64 v141; // [rsp+178h] [rbp+F8h]
  __m128i v142; // [rsp+180h] [rbp+100h] BYREF
  __int128 v143; // [rsp+190h] [rbp+110h]
  __int64 v144; // [rsp+1A0h] [rbp+120h]
  __int64 v145; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v146; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v147; // [rsp+1B8h] [rbp+138h]
  char *v148; // [rsp+1C8h] [rbp+148h]
  __int64 v149; // [rsp+1D0h] [rbp+150h]
  __int64 v150; // [rsp+1D8h] [rbp+158h]
  __m128i *v151; // [rsp+1E0h] [rbp+160h]
  __int64 v152; // [rsp+1E8h] [rbp+168h]
  __int64 v153; // [rsp+1F0h] [rbp+170h]
  __int64 v154; // [rsp+1F8h] [rbp+178h]
  _BYTE v155[80]; // [rsp+200h] [rbp+180h] BYREF
  __m128i v156; // [rsp+250h] [rbp+1D0h] BYREF
  unsigned __int64 v157; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v158; // [rsp+270h] [rbp+1F0h]
  _QWORD *v159; // [rsp+280h] [rbp+200h] BYREF
  __int64 v160; // [rsp+288h] [rbp+208h]
  unsigned __int64 v161; // [rsp+290h] [rbp+210h]
  __int64 v162; // [rsp+298h] [rbp+218h] BYREF
  __int64 v163; // [rsp+2A0h] [rbp+220h]
  unsigned __int64 v164; // [rsp+2A8h] [rbp+228h]
  __int64 v165; // [rsp+2B0h] [rbp+230h]
  __int128 v166; // [rsp+2B8h] [rbp+238h]
  unsigned __int64 v167; // [rsp+2C8h] [rbp+248h]
  __int64 v168; // [rsp+2D0h] [rbp+250h]
  const __m128i *v169; // [rsp+2D8h] [rbp+258h]
  _BYTE v170[136]; // [rsp+2E0h] [rbp+260h] BYREF
  const __m128i *v171; // [rsp+368h] [rbp+2E8h]
  __int64 v172; // [rsp+370h] [rbp+2F0h]
  char v173; // [rsp+378h] [rbp+2F8h]
  const __m128i *v174; // [rsp+380h] [rbp+300h]
  _QWORD *v175; // [rsp+388h] [rbp+308h]
  __int64 v176; // [rsp+390h] [rbp+310h]
  PVOID Address; // [rsp+398h] [rbp+318h]
  _QWORD *v178; // [rsp+3A0h] [rbp+320h]
  char v179; // [rsp+3AEh] [rbp+32Eh] BYREF
  char v180; // [rsp+3AFh] [rbp+32Fh]
  char v181; // [rsp+3B0h] [rbp+330h]
  char v182; // [rsp+3B1h] [rbp+331h]
  char v183; // [rsp+3B2h] [rbp+332h]
  char v184; // [rsp+3B3h] [rbp+333h]
  char v185; // [rsp+3B4h] [rbp+334h]
  char v186; // [rsp+3B5h] [rbp+335h]
  char v187; // [rsp+3B6h] [rbp+336h]
  char v188; // [rsp+3B7h] [rbp+337h]
  char v189; // [rsp+3B8h] [rbp+338h]
  char v190; // [rsp+3B9h] [rbp+339h]
  char v191; // [rsp+3BAh] [rbp+33Ah]
  char v192; // [rsp+3BBh] [rbp+33Bh]
  char v193; // [rsp+3BCh] [rbp+33Ch]
  char v194; // [rsp+3BDh] [rbp+33Dh]
  char v195; // [rsp+3BEh] [rbp+33Eh]
  char v196; // [rsp+3BFh] [rbp+33Fh]
  __int64 v197; // [rsp+3C0h] [rbp+340h]

  v197 = -2;
  v175 = a3;
  v195 = 1;
  v194 = 1;
  v193 = 1;
  sub_14103FB60(v170);
  v6 = *(_OWORD *)v170;
  v7 = v170[16];
  if ( *(_QWORD *)v170 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v170[80];
    v8 = _mm_loadu_si128((const __m128i *)&v170[17]);
    v9 = *(_OWORD *)&v170[33];
    v10 = *(_OWORD *)&v170[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v170[65];
    *(_OWORD *)(a1 + 57) = v10;
    *(_OWORD *)(a1 + 41) = v9;
    *(__m128i *)(a1 + 25) = v8;
    *(_OWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 24) = v7;
    *(_QWORD *)a1 = -1;
    v11 = v175;
    v12 = v175[3];
    if ( (unsigned __int64)(v12 - 1) >= 0xFFFFFFFFFFFFFFFEuLL )
      goto LABEL_4;
    goto LABEL_3;
  }
  v189 = v170[16];
  Address = *(PVOID *)&v170[8];
  v188 = 1;
  v187 = 1;
  v186 = 1;
  sub_14103B320((__int64)v170, a2);
  *(_OWORD *)v155 = *(_OWORD *)&v170[8];
  *(_OWORD *)&v155[16] = *(_OWORD *)&v170[24];
  *(_OWORD *)&v155[32] = *(_OWORD *)&v170[40];
  *(_OWORD *)&v155[48] = *(_OWORD *)&v170[56];
  *(_OWORD *)&v155[64] = *(_OWORD *)&v170[72];
  v156 = *(__m128i *)&v170[88];
  if ( *(_QWORD *)v170 == -1 )
  {
    *(__m128i *)(a1 + 88) = v156;
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v155[64];
    si128 = _mm_load_si128((const __m128i *)v155);
    v25 = *(_OWORD *)&v155[16];
    v26 = *(_OWORD *)&v155[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v155[48];
    *(_OWORD *)(a1 + 40) = v26;
    *(_OWORD *)(a1 + 24) = v25;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = -1;
    v27 = (char *)Address;
    if ( (v189 & 1) == 0 )
    {
      if ( 2 * *off_1421E7210 )
      {
        v195 = 1;
        v194 = 1;
        v193 = 1;
        if ( !(unsigned __int8)sub_141938160(v20) )
          v27[1] = 1;
      }
    }
    v28 = *v27;
    *v27 = 0;
    if ( v28 == 2 )
    {
      v195 = 1;
      v194 = 1;
      v193 = 1;
      WakeByAddressSingle(v27);
    }
    v11 = v175;
    v12 = v175[3];
    if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_4;
LABEL_3:
    sub_140001660(v11[4], v12, 1);
LABEL_4:
    v13 = v11[6];
    if ( v13 != -1 && v13 )
      sub_140001660(v11[7], v13, 1);
    v14 = v11[2];
    if ( v14 )
    {
      v15 = (_QWORD *)(v11[1] + 56LL);
      do
      {
        v16 = *(v15 - 7);
        if ( v16 )
          sub_140001660(*(v15 - 6), v16, 1);
        v17 = *(v15 - 4);
        if ( v17 )
          sub_140001660(*(v15 - 3), v17, 1);
        v18 = *(v15 - 1);
        if ( v18 != -1 && v18 )
          sub_140001660(*v15, v18, 1);
        v15 += 9;
        --v14;
      }
      while ( v14 );
    }
    if ( *v11 )
      sub_140001660(v175[1], 72LL * *v11, 8);
    return a1;
  }
  v131 = v171;
  v130 = *(_OWORD *)&v170[120];
  v129 = *(_OWORD *)&v170[104];
  v123 = *(_OWORD *)v155;
  v124 = *(_OWORD *)&v155[16];
  v125 = *(_OWORD *)&v155[32];
  v126 = *(_OWORD *)&v155[48];
  v127 = *(_OWORD *)&v155[64];
  v128 = _mm_load_si128(&v156);
  v122 = *(_QWORD *)v170;
  v192 = 1;
  v191 = 1;
  v190 = 1;
  *(_DWORD *)v155 = sub_141683E80(v171, v19, v21);
  *(_DWORD *)&v155[4] = v22;
  v192 = 1;
  v191 = 1;
  v190 = 1;
  sub_141683E30(v170, v155, 3577643008LL, 27111902);
  if ( v170[0] )
    v150 = 0;
  else
    v150 = *(_QWORD *)&v170[8];
  v192 = 1;
  v191 = 1;
  v190 = 1;
  v29 = sub_14167F170(v23);
  if ( *(_BYTE *)(v29 + 16) == 1 )
  {
    v34 = *(_QWORD *)v29;
    v35 = *(_QWORD *)(v29 + 8);
  }
  else
  {
    v192 = 1;
    v191 = 1;
    v190 = 1;
    v3 = v29;
    v34 = sub_141696260(v31, v30, v32, v33);
    v29 = v3;
    *(_QWORD *)v3 = v34;
    *(_QWORD *)(v3 + 8) = v35;
    *(_BYTE *)(v3 + 16) = 1;
  }
  *(_QWORD *)v29 = v34 + 1;
  v143 = *(&off_141A68A70 + 1);
  v142 = _mm_loadu_si128((const __m128i *)&off_141A68A70);
  v144 = v34;
  v145 = v35;
  v162 = 0;
  v163 = 8;
  v164 = 0;
  v36 = v175;
  v185 = 1;
  v184 = 1;
  v183 = 1;
  sub_141039B30(&v157, v175 + 3);
  v182 = 1;
  v181 = 1;
  sub_141039B30(&v146, v36 + 6);
  v138 = a2;
  v149 = a1;
  v37 = *v36;
  v38 = (__int64 *)v36[1];
  v39 = &v38[9 * v36[2]];
  v133 = v38;
  v134 = v38;
  v135 = v37;
  v137 = v39;
  v136 = v39;
  v148 = (char *)(v36 + 9);
  while ( 1 )
  {
    v40 = v38;
    if ( v38 == v137 )
      break;
    v38 += 9;
    v134 = v40 + 9;
    v41 = *v40;
    v121 = *(_OWORD *)(v40 + 7);
    v120 = *(_OWORD *)(v40 + 5);
    v119 = *(_OWORD *)(v40 + 3);
    v118 = *(__m128i *)(v40 + 1);
    if ( v41 == -1 )
      break;
    *(_QWORD *)v155 = v41;
    v42 = _mm_load_si128(&v118);
    *(_OWORD *)&v155[56] = v121;
    *(_OWORD *)&v155[40] = v120;
    *(_OWORD *)&v155[24] = v119;
    *(__m128i *)&v155[8] = v42;
    v43 = (const __m128i *)sub_140E91160(v42.m128i_i64[0], v42.m128i_i64[1]);
    v45 = v44;
    v46 = *(_QWORD *)&v155[32];
    v174 = (const __m128i *)sub_140E91160(*(_QWORD *)&v155[32], *(_QWORD *)&v155[40]);
    if ( v45
      && v47
      && (*(_QWORD *)&v166 = v47, v165 = v45,
                                  sub_1416AA4F0(v116, v43, v45),
                                  !(unsigned __int8)sub_1403AAB80(&v142, v116)) )
    {
      sub_141568C20(v117);
      v159 = nullptr;
      v160 = 1;
      v161 = 0;
      *(_QWORD *)&v170[16] = 1610612768;
      *(_QWORD *)v170 = &v159;
      *(_QWORD *)&v170[8] = &off_141A72708;
      if ( (unsigned __int8)sub_141569D80(v117, v170) )
        sub_141939040(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v179,
          (unsigned int)&unk_141A6D618,
          (__int64)&off_141A727C0);
      v178 = v159;
      v176 = v160;
      if ( v161 <= 8 )
      {
        if ( v161 != 8 )
LABEL_137:
          sub_141938F40(v160, v161, 0, 8, (__int64)&off_141A71A08);
      }
      else if ( *(char *)(v160 + 8) <= -65 )
      {
        goto LABEL_137;
      }
      v132[0] = v160;
      v132[1] = 8;
      v159 = v132;
      v160 = (__int64)sub_140186EE0;
      sub_1416ABFD0(v170, &unk_141A71968, &v159);
      if ( v178 )
        sub_140001660(v176, v178, 1);
      v176 = *(_QWORD *)&v170[8];
      v178 = *(_QWORD **)v170;
      v50 = v165;
      if ( v165 < 0 )
      {
        v115 = 0;
        goto LABEL_124;
      }
      v51 = *(_QWORD *)&v170[16];
      nullsub_1(v49);
      v52 = (__m128i *)sub_140001650(v50, 1);
      if ( !v52 )
      {
        v3 = v50;
        v115 = 1;
LABEL_124:
        sub_141938D2B(v115, v3);
      }
      v151 = v52;
      sub_1418F44E0(v52, v43, v50);
      v54 = *((_QWORD *)&v166 + 1);
      v55 = v166;
      if ( (__int64)v166 < 0 )
      {
        v56 = 0;
        goto LABEL_126;
      }
      v153 = v51;
      nullsub_1(v53);
      v56 = 1;
      v57 = (__m128i *)sub_140001650(v55, 1);
      if ( !v57 )
      {
        v54 = v55;
LABEL_126:
        sub_141938D2B(v56, v54);
      }
      v58 = v57;
      sub_1418F44E0(v57, v174, v55);
      v180 = *v148;
      v59 = -1;
      *((_QWORD *)&v166 + 1) = v58;
      v60 = v152;
      v61 = __PAIR128__(v167, -1);
      if ( v157 != -1 )
      {
        sub_1416AC440(v170, &v157);
        v154 = *(_QWORD *)&v170[8];
        v59 = *(_QWORD *)v170;
        v60 = *(_QWORD *)&v170[16];
      }
      v174 = (const __m128i *)v59;
      if ( v146 != -1 )
      {
        sub_1416AC440(v170, &v146);
        v61 = *(_OWORD *)v170;
        v140 = *(_QWORD *)&v170[16];
      }
      v168 = v61;
      v152 = v60;
      v167 = *((_QWORD *)&v61 + 1);
      v62 = -1;
      v139 = *(_QWORD *)&v155[48];
      if ( *(_QWORD *)&v155[48] == -1 )
      {
        v65 = v153;
      }
      else
      {
        v63 = (const __m128i *)sub_140E91160(*(_QWORD *)&v155[56], *(_QWORD *)&v155[64]);
        v65 = v153;
        if ( v63 )
        {
          v66 = v64;
          if ( v64 )
          {
            v169 = v63;
            sub_14072C410((unsigned int)v170, (_DWORD)v64, 0, 1, 1);
            v62 = *(_QWORD *)&v170[8];
            if ( v170[0] )
              sub_141938D2B(*(_QWORD *)&v170[8], *(_QWORD *)&v170[16]);
            v141 = *(_QWORD *)&v170[16];
            sub_1418F44E0(*(__m128i **)&v170[16], v169, (unsigned __int64)v66);
            v169 = v66;
          }
        }
      }
      *(_QWORD *)v170 = v178;
      *(_QWORD *)&v170[8] = v176;
      *(_QWORD *)&v170[16] = v65;
      *(_QWORD *)&v170[24] = v165;
      v3 = (__int64)v151;
      *(_QWORD *)&v170[32] = v151;
      *(_QWORD *)&v170[40] = v165;
      *(_OWORD *)&v170[48] = v166;
      *(_QWORD *)&v170[64] = v166;
      v173 = v180;
      *(_QWORD *)&v170[72] = v174;
      *(_QWORD *)&v170[80] = v154;
      *(_QWORD *)&v170[88] = v152;
      *(_QWORD *)&v170[96] = v168;
      *(_QWORD *)&v170[104] = v167;
      *(_QWORD *)&v170[112] = v140;
      *(_QWORD *)&v170[120] = v62;
      *(_QWORD *)&v170[128] = v141;
      v171 = v169;
      v172 = v150;
      v67 = v164;
      if ( v164 == v162 )
        sub_14190FCE0(&v162);
      sub_1418F44E0((__m128i *)(v163 + 160 * v67), (const __m128i *)v170, 0xA0u);
      v164 = v67 + 1;
      if ( v41 )
        sub_140001660(v42.m128i_i64[0], v41, 1);
      if ( *(_QWORD *)&v155[24] )
        sub_140001660(v46, *(_QWORD *)&v155[24], 1);
      v48 = v139;
      if ( v139 != -1 )
      {
LABEL_42:
        if ( v48 )
          sub_140001660(*(_QWORD *)&v155[56], v48, 1);
      }
    }
    else
    {
      if ( v41 )
        sub_140001660(v42.m128i_i64[0], v41, 1);
      if ( *(_QWORD *)&v155[24] )
        sub_140001660(v46, *(_QWORD *)&v155[24], 1);
      v48 = *(_QWORD *)&v155[48];
      if ( *(_QWORD *)&v155[48] != -1 )
        goto LABEL_42;
    }
  }
  v196 = 1;
  sub_1403F9EB0(&v133);
  v68 = v138;
  v196 = 1;
  sub_14037D5B0(&v124, v148, &v157);
  v72 = v162;
  v73 = (const __m128i *)v163;
  v74 = v164;
  v75 = 160 * v164;
  *(_QWORD *)v170 = v163;
  *(_QWORD *)&v170[16] = v162;
  *(_QWORD *)&v170[8] = v163;
  *(_QWORD *)&v170[24] = v163 + 160 * v164;
  v76 = v125;
  if ( v164 > (_QWORD)v124 - (_QWORD)v125 )
  {
    sub_14190D590((unsigned int)&v124, v125, v164, 8, 160);
    v76 = v125;
LABEL_75:
    sub_1418F44E0((__m128i *)(*((_QWORD *)&v124 + 1) + 160 * v76), v73, v75);
  }
  else if ( v164 )
  {
    goto LABEL_75;
  }
  *(_QWORD *)&v125 = v74 + v76;
  if ( v72 )
    sub_140001660(v73, 160 * v72, 8);
  LODWORD(v131) = 1;
  v196 = 0;
  *(_DWORD *)v155 = sub_141683E80(v70, v69, v71);
  *(_DWORD *)&v155[4] = v77;
  v196 = 0;
  sub_141683E30(v170, v155, 3577643008LL, 27111902);
  if ( v170[0] )
    v78 = 0;
  else
    v78 = *(_QWORD *)&v170[8];
  *((_QWORD *)&v130 + 1) = v78;
  v196 = 0;
  sub_14102FC50(&v122);
  v196 = 0;
  sub_14103CBF0(v170, v68, (__int64)&v122);
  if ( *(_DWORD *)v170 == -1 )
  {
    v96 = v68[89];
    v97 = v68[90];
    v196 = 0;
    HIDWORD(_RAX) = (unsigned __int64)sub_14102FA30(v170, v96, v97, &v122) >> 32;
    a1 = v149;
    *(_OWORD *)(v149 + 112) = *(_OWORD *)&v170[112];
    *(_OWORD *)(a1 + 96) = *(_OWORD *)&v170[96];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v170[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v170[64];
    v99 = _mm_loadu_si128((const __m128i *)v170);
    v100 = *(_OWORD *)&v170[16];
    v101 = *(_OWORD *)&v170[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v170[48];
    *(_OWORD *)(a1 + 32) = v101;
    *(_OWORD *)(a1 + 16) = v100;
    *(__m128i *)a1 = v99;
    if ( v146 != -1 && v146 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v147, v146, 1) >> 32;
    if ( v157 != -1 && v157 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v158, v157, 1) >> 32;
    v102 = v142.m128i_i64[1];
    if ( v142.m128i_i64[1] )
    {
      v103 = *((_QWORD *)&v143 + 1);
      if ( *((_QWORD *)&v143 + 1) )
      {
        v104 = v142.m128i_i64[0];
        v105 = (const __m128i *)(v142.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v142.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v107 = _mm_load_si128(v105);
              v104 -= 384;
              ++v105;
              _R15D = _mm_movemask_epi8(v107) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v108 = -3 * _RAX;
          v109 = *(_QWORD *)(v104 + 8 * v108 - 24);
          if ( v109 )
            sub_140001660(*(_QWORD *)(v104 + 8 * v108 - 16), v109, 1);
          --v103;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v103 );
      }
      v110 = (24 * v102 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v111 = v110 + v102 + 17;
      if ( v111 )
        sub_140001660(v142.m128i_i64[0] - v110, v111, 16);
    }
    v188 = 0;
    v187 = 0;
    v186 = 0;
    sub_140FA5420((__int64)&v122);
    if ( (v189 & 1) == 0 )
    {
      if ( 2 * *off_1421E7210 )
      {
        v195 = 0;
        v194 = 0;
        v193 = 0;
        if ( !(unsigned __int8)sub_141938160(v112) )
          *((_BYTE *)Address + 1) = 1;
      }
    }
    v94 = Address;
    v113 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v113 == 2 )
    {
LABEL_121:
      v195 = 0;
      v194 = 0;
      v193 = 0;
      WakeByAddressSingle(v94);
    }
  }
  else
  {
    a1 = v149;
    *(_OWORD *)(v149 + 88) = *(_OWORD *)&v170[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v170[64];
    v80 = _mm_loadu_si128((const __m128i *)v170);
    v81 = *(_OWORD *)&v170[16];
    v82 = *(_OWORD *)&v170[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v170[48];
    *(_OWORD *)(a1 + 40) = v82;
    *(_OWORD *)(a1 + 24) = v81;
    *(__m128i *)(a1 + 8) = v80;
    *(_QWORD *)a1 = -1;
    if ( v146 != -1 && v146 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v147, v146, 1) >> 32;
    if ( v157 != -1 && v157 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v158, v157, 1) >> 32;
    v83 = v142.m128i_i64[1];
    if ( v142.m128i_i64[1] )
    {
      v84 = *((_QWORD *)&v143 + 1);
      if ( *((_QWORD *)&v143 + 1) )
      {
        v85 = v142.m128i_i64[0];
        v86 = (const __m128i *)(v142.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v142.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v88 = _mm_load_si128(v86);
              v85 -= 384;
              ++v86;
              _R15D = _mm_movemask_epi8(v88) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v89 = -3 * _RAX;
          v90 = *(_QWORD *)(v85 + 8 * v89 - 24);
          if ( v90 )
            sub_140001660(*(_QWORD *)(v85 + 8 * v89 - 16), v90, 1);
          --v84;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v84 );
      }
      v91 = (24 * v83 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v92 = v91 + v83 + 17;
      if ( v92 )
        sub_140001660(v142.m128i_i64[0] - v91, v92, 16);
    }
    v188 = 0;
    v187 = 0;
    v186 = 0;
    sub_140FA5420((__int64)&v122);
    if ( (v189 & 1) == 0 )
    {
      if ( 2 * *off_1421E7210 )
      {
        v195 = 0;
        v194 = 0;
        v193 = 0;
        if ( !(unsigned __int8)sub_141938160(v93) )
          *((_BYTE *)Address + 1) = 1;
      }
    }
    v94 = Address;
    v95 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v95 == 2 )
      goto LABEL_121;
  }
  return a1;
}
