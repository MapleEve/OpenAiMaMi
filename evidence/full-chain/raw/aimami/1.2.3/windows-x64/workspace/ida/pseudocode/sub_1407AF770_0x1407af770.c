// module: codexmate_lib/core/voice/workspace
// addr: 0x1407af770
// name: sub_1407AF770
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407AF770(__int64 a1, __int64 a2, _QWORD *a3)
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
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i si128; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  char *v26; // rsi
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // r14
  __int64 *v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // r13
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int128 v51; // kr30_16
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // r15
  bool v56; // zf
  unsigned __int64 v57; // rdi
  __int64 v58; // r13
  __int64 v59; // rsi
  __int64 v60; // rdi
  unsigned __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // r15
  int v64; // edx
  __int64 v65; // rax
  __m128i v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rbx
  const __m128i *v73; // r14
  __m128i v75; // xmm0
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rcx
  PVOID v82; // rcx
  char v83; // al
  __int64 v84; // rdx
  __int64 v85; // r8
  __m128i v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm2
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rbx
  const __m128i *v93; // r14
  __m128i v95; // xmm0
  __int64 v96; // rax
  __int64 v97; // rdx
  unsigned __int64 v98; // rax
  __int64 v99; // rdi
  __int64 v100; // rdx
  __int64 v101; // rcx
  char v102; // al
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rsi
  _BYTE v107[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v108[16]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v109; // [rsp+50h] [rbp-30h] BYREF
  __int128 v110; // [rsp+60h] [rbp-20h]
  __int128 v111; // [rsp+70h] [rbp-10h]
  __int128 v112; // [rsp+80h] [rbp+0h]
  __int64 v113; // [rsp+90h] [rbp+10h] BYREF
  __int128 v114; // [rsp+98h] [rbp+18h]
  __int128 v115; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v116; // [rsp+B8h] [rbp+38h]
  __int128 v117; // [rsp+C8h] [rbp+48h]
  __int128 v118; // [rsp+D8h] [rbp+58h]
  __m128i v119; // [rsp+E8h] [rbp+68h]
  __int128 v120; // [rsp+F8h] [rbp+78h]
  __int128 v121; // [rsp+108h] [rbp+88h]
  __int64 v122; // [rsp+118h] [rbp+98h]
  _QWORD v123[2]; // [rsp+120h] [rbp+A0h] BYREF
  __int64 *v124; // [rsp+130h] [rbp+B0h] BYREF
  __int64 *v125; // [rsp+138h] [rbp+B8h]
  __int64 v126; // [rsp+140h] [rbp+C0h]
  __int64 *v127; // [rsp+148h] [rbp+C8h]
  __int64 *v128; // [rsp+150h] [rbp+D0h]
  __int64 v129; // [rsp+158h] [rbp+D8h]
  __int64 v130; // [rsp+160h] [rbp+E0h]
  __int64 v131; // [rsp+168h] [rbp+E8h]
  __int64 v132; // [rsp+170h] [rbp+F0h]
  __int64 v133; // [rsp+178h] [rbp+F8h]
  __int64 v134; // [rsp+180h] [rbp+100h]
  __int64 v135; // [rsp+188h] [rbp+108h]
  __m128i v136; // [rsp+190h] [rbp+110h] BYREF
  __int128 v137; // [rsp+1A0h] [rbp+120h]
  __int64 v138; // [rsp+1B0h] [rbp+130h]
  __int64 v139; // [rsp+1B8h] [rbp+138h]
  __int64 v140; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v141; // [rsp+1C8h] [rbp+148h]
  char *v142; // [rsp+1D8h] [rbp+158h]
  __int64 v143; // [rsp+1E0h] [rbp+160h]
  __int64 v144; // [rsp+1E8h] [rbp+168h]
  __int64 v145; // [rsp+1F0h] [rbp+170h]
  __int64 v146; // [rsp+1F8h] [rbp+178h]
  _BYTE v147[80]; // [rsp+200h] [rbp+180h] BYREF
  __m128i v148; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v149; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v150; // [rsp+268h] [rbp+1E8h]
  _QWORD *v151; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v152; // [rsp+280h] [rbp+200h]
  unsigned __int64 v153; // [rsp+288h] [rbp+208h]
  __int64 v154; // [rsp+290h] [rbp+210h] BYREF
  __int64 v155; // [rsp+298h] [rbp+218h]
  unsigned __int64 v156; // [rsp+2A0h] [rbp+220h]
  unsigned __int64 v157; // [rsp+2A8h] [rbp+228h]
  __int64 v158; // [rsp+2B0h] [rbp+230h]
  __int64 v159; // [rsp+2B8h] [rbp+238h]
  _BYTE v160[136]; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v161; // [rsp+348h] [rbp+2C8h]
  __int64 v162; // [rsp+350h] [rbp+2D0h]
  char v163; // [rsp+358h] [rbp+2D8h]
  __int64 v164; // [rsp+360h] [rbp+2E0h]
  __int64 v165; // [rsp+368h] [rbp+2E8h]
  __int64 v166; // [rsp+370h] [rbp+2F0h]
  _QWORD *v167; // [rsp+378h] [rbp+2F8h]
  __int64 v168; // [rsp+380h] [rbp+300h]
  PVOID Address; // [rsp+388h] [rbp+308h]
  _QWORD *v170; // [rsp+390h] [rbp+310h]
  char v171; // [rsp+39Fh] [rbp+31Fh] BYREF
  __int64 v172; // [rsp+3A0h] [rbp+320h]
  char v173; // [rsp+3AFh] [rbp+32Fh]
  char v174; // [rsp+3B0h] [rbp+330h]
  char v175; // [rsp+3B1h] [rbp+331h]
  char v176; // [rsp+3B2h] [rbp+332h]
  char v177; // [rsp+3B3h] [rbp+333h]
  char v178; // [rsp+3B4h] [rbp+334h]
  char v179; // [rsp+3B5h] [rbp+335h]
  char v180; // [rsp+3B6h] [rbp+336h]
  char v181; // [rsp+3B7h] [rbp+337h]
  char v182; // [rsp+3B8h] [rbp+338h]
  char v183; // [rsp+3B9h] [rbp+339h]
  char v184; // [rsp+3BAh] [rbp+33Ah]
  char v185; // [rsp+3BBh] [rbp+33Bh]
  char v186; // [rsp+3BCh] [rbp+33Ch]
  char v187; // [rsp+3BDh] [rbp+33Dh]
  char v188; // [rsp+3BEh] [rbp+33Eh]
  char v189; // [rsp+3BFh] [rbp+33Fh]
  __int64 v190; // [rsp+3C0h] [rbp+340h]

  v190 = -2;
  v167 = a3;
  v188 = 1;
  v187 = 1;
  v186 = 1;
  sub_1407B1010(v160);
  v5 = *(_OWORD *)v160;
  v6 = v160[16];
  if ( *(_QWORD *)v160 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v160[80];
    v7 = _mm_loadu_si128((const __m128i *)&v160[17]);
    v8 = *(_OWORD *)&v160[33];
    v9 = *(_OWORD *)&v160[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v160[65];
    *(_OWORD *)(a1 + 57) = v9;
    *(_OWORD *)(a1 + 41) = v8;
    *(__m128i *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 24) = v6;
    *(_QWORD *)a1 = -1;
    v10 = v167;
    v11 = v167[3];
    if ( (unsigned __int64)(v11 - 1) >= 0xFFFFFFFFFFFFFFFEuLL )
      goto LABEL_4;
    goto LABEL_3;
  }
  v182 = v160[16];
  Address = *(PVOID *)&v160[8];
  v181 = 1;
  v180 = 1;
  v179 = 1;
  read_workspace_file((__int64)v160, a2);
  *(_OWORD *)v147 = *(_OWORD *)&v160[8];
  *(_OWORD *)&v147[16] = *(_OWORD *)&v160[24];
  *(_OWORD *)&v147[32] = *(_OWORD *)&v160[40];
  *(_OWORD *)&v147[48] = *(_OWORD *)&v160[56];
  *(_OWORD *)&v147[64] = *(_OWORD *)&v160[72];
  v148 = *(__m128i *)&v160[88];
  if ( *(_QWORD *)v160 == -1 )
  {
    *(__m128i *)(a1 + 88) = v148;
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v147[64];
    si128 = _mm_load_si128((const __m128i *)v147);
    v24 = *(_OWORD *)&v147[16];
    v25 = *(_OWORD *)&v147[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v147[48];
    *(_OWORD *)(a1 + 40) = v25;
    *(_OWORD *)(a1 + 24) = v24;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = -1;
    v26 = (char *)Address;
    if ( (v182 & 1) == 0 )
    {
      if ( 2 * *off_141EC90B8 )
      {
        v188 = 1;
        v187 = 1;
        v186 = 1;
        if ( !(unsigned __int8)sub_1416C2250(v19, v18) )
          v26[1] = 1;
      }
    }
    v27 = *v26;
    *v26 = 0;
    if ( v27 == 2 )
    {
      v188 = 1;
      v187 = 1;
      v186 = 1;
      WakeByAddressSingle(v26);
    }
    v10 = v167;
    v11 = v167[3];
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
        if ( v17 != -1 && v17 )
          sub_140001660(*v14, v17, 1);
        v14 += 9;
        --v13;
      }
      while ( v13 );
    }
    if ( *v10 )
      sub_140001660(v167[1], 72LL * *v10, 8);
    return a1;
  }
  v122 = v161;
  v121 = *(_OWORD *)&v160[120];
  v120 = *(_OWORD *)&v160[104];
  v114 = *(_OWORD *)v147;
  v115 = *(_OWORD *)&v147[16];
  v116 = *(_OWORD *)&v147[32];
  v117 = *(_OWORD *)&v147[48];
  v118 = *(_OWORD *)&v147[64];
  v119 = _mm_load_si128(&v148);
  v113 = *(_QWORD *)v160;
  v185 = 1;
  v184 = 1;
  v183 = 1;
  *(_DWORD *)v147 = sub_141475580();
  *(_DWORD *)&v147[4] = v20;
  v185 = 1;
  v184 = 1;
  v183 = 1;
  sub_141475530(v160, v147, 3577643008LL, 27111902);
  if ( v160[0] )
    v144 = 0;
  else
    v144 = *(_QWORD *)&v160[8];
  v185 = 1;
  v184 = 1;
  v183 = 1;
  v28 = sub_141470CD0(v22, v21);
  if ( *(_BYTE *)(v28 + 16) == 1 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(_QWORD *)(v28 + 8);
  }
  else
  {
    v185 = 1;
    v184 = 1;
    v183 = 1;
    v106 = v28;
    v29 = sub_141486EF0();
    v28 = v106;
    *(_QWORD *)v106 = v29;
    *(_QWORD *)(v106 + 8) = v30;
    *(_BYTE *)(v106 + 16) = 1;
  }
  *(_QWORD *)v28 = v29 + 1;
  v137 = *(&off_141786750 + 1);
  v136 = _mm_loadu_si128((const __m128i *)&off_141786750);
  v138 = v29;
  v139 = v30;
  v154 = 0;
  v155 = 8;
  v156 = 0;
  v31 = v167;
  v178 = 1;
  v177 = 1;
  v176 = 1;
  sub_1407AAF00(&v149, v167 + 3);
  v175 = 1;
  v174 = 1;
  sub_1407AAF00(&v140, v31 + 6);
  v129 = a2;
  v143 = a1;
  v32 = *v31;
  v33 = (__int64 *)v31[1];
  v34 = &v33[9 * v31[2]];
  v124 = v33;
  v125 = v33;
  v126 = v32;
  v128 = v34;
  v127 = v34;
  v142 = (char *)(v31 + 9);
  while ( 1 )
  {
    v35 = v33;
    if ( v33 == v128 )
      break;
    v33 += 9;
    v125 = v35 + 9;
    v36 = *v35;
    v112 = *(_OWORD *)(v35 + 7);
    v111 = *(_OWORD *)(v35 + 5);
    v110 = *(_OWORD *)(v35 + 3);
    v109 = *(__m128i *)(v35 + 1);
    if ( v36 == -1 )
      break;
    *(_QWORD *)v147 = v36;
    v37 = _mm_load_si128(&v109);
    *(_OWORD *)&v147[56] = v112;
    *(_OWORD *)&v147[40] = v111;
    *(_OWORD *)&v147[24] = v110;
    *(__m128i *)&v147[8] = v37;
    v38 = sub_14033BC10(v37.m128i_i64[0], v37.m128i_i64[1]);
    v172 = v39;
    v40 = v38;
    v41 = *(_QWORD *)&v147[32];
    v42 = sub_14033BC10(*(_QWORD *)&v147[32], *(_QWORD *)&v147[40]);
    v164 = v43;
    if ( v172 && v164 && (v44 = v42, sub_14149A6B0(v107, v40, v172), !(unsigned __int8)sub_140474440(&v136, v107)) )
    {
      sub_141356270(v108);
      v151 = nullptr;
      v152 = 1;
      v153 = 0;
      *(_QWORD *)&v160[16] = 1610612768;
      *(_QWORD *)v160 = &v151;
      *(_QWORD *)&v160[8] = &off_141790AA0;
      if ( (unsigned __int8)sub_141356790(v108, v160) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v171,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v170 = v151;
      v168 = v152;
      if ( v153 <= 8 )
      {
        if ( v153 != 8 )
LABEL_137:
          sub_1416C2F60(v152, v153, 0, 8, (__int64)&off_141790518);
      }
      else if ( *(char *)(v152 + 8) <= -65 )
      {
        goto LABEL_137;
      }
      v123[0] = v152;
      v123[1] = 8;
      v151 = v123;
      v152 = (__int64)sub_14041F680;
      sub_14149C0F0(v160, &unk_141790478, &v151);
      if ( v170 )
        sub_140001660(v168, v170, 1);
      v168 = *(_QWORD *)&v160[8];
      v170 = *(_QWORD **)v160;
      if ( v172 < 0 )
      {
        v104 = 0;
        goto LABEL_124;
      }
      v130 = *(_QWORD *)&v160[16];
      nullsub_1(v172);
      v46 = sub_140001650(v172, 1);
      if ( !v46 )
      {
        v165 = v172;
        v104 = 1;
LABEL_124:
        sub_1416C2D4B(v104, v165);
      }
      v165 = v46;
      sub_141684120(v46, v40, v172);
      v48 = v164;
      if ( v164 < 0 )
      {
        v105 = 0;
        goto LABEL_126;
      }
      nullsub_1(v47);
      v49 = sub_140001650(v48, 1);
      if ( !v49 )
      {
        v166 = v48;
        v105 = 1;
LABEL_126:
        sub_1416C2D4B(v105, v166);
      }
      v166 = v49;
      sub_141684120(v49, v44, v48);
      v173 = *v142;
      v50 = -1;
      v51 = __PAIR128__(v157, -1);
      if ( v149 != -1 )
      {
        sub_14149C500(v160, &v149);
        v145 = *(_QWORD *)&v160[8];
        v50 = *(_QWORD *)v160;
        v132 = *(_QWORD *)&v160[16];
      }
      v158 = v50;
      if ( v140 != -1 )
      {
        sub_14149C500(v160, &v140);
        v51 = *(_OWORD *)v160;
        v133 = *(_QWORD *)&v160[16];
      }
      v157 = v51 >> 64;
      v159 = v51;
      v52 = -1;
      v131 = *(_QWORD *)&v147[48];
      if ( *(_QWORD *)&v147[48] != -1 )
      {
        v54 = sub_14033BC10(*(_QWORD *)&v147[56], *(_QWORD *)&v147[64]);
        if ( v54 )
        {
          v55 = v53;
          v56 = v53 == 0;
          v52 = -1;
          if ( !v56 )
          {
            sub_140388B60((unsigned int)v160, v55, 0, 1, 1);
            v146 = *(_QWORD *)&v160[8];
            if ( v160[0] )
              sub_1416C2D4B(v146, *(_QWORD *)&v160[16]);
            v134 = *(_QWORD *)&v160[16];
            sub_141684120(*(_QWORD *)&v160[16], v54, v55);
            v135 = v55;
            v52 = v146;
          }
        }
        else
        {
          v52 = -1;
        }
      }
      *(_QWORD *)v160 = v170;
      *(_QWORD *)&v160[8] = v168;
      *(_QWORD *)&v160[16] = v130;
      *(_QWORD *)&v160[24] = v172;
      *(_QWORD *)&v160[32] = v165;
      *(_QWORD *)&v160[40] = v172;
      *(_QWORD *)&v160[48] = v164;
      *(_QWORD *)&v160[56] = v166;
      *(_QWORD *)&v160[64] = v164;
      v163 = v173;
      *(_QWORD *)&v160[72] = v158;
      *(_QWORD *)&v160[80] = v145;
      *(_QWORD *)&v160[88] = v132;
      *(_QWORD *)&v160[96] = v159;
      *(_QWORD *)&v160[104] = v157;
      *(_QWORD *)&v160[112] = v133;
      *(_QWORD *)&v160[120] = v52;
      *(_QWORD *)&v160[128] = v134;
      v161 = v135;
      v162 = v144;
      v57 = v156;
      if ( v156 == v154 )
        sub_141689490(&v154);
      sub_141684120(v155 + 160 * v57, v160, 160);
      v156 = v57 + 1;
      if ( v36 )
        sub_140001660(v37.m128i_i64[0], v36, 1);
      if ( *(_QWORD *)&v147[24] )
        sub_140001660(v41, *(_QWORD *)&v147[24], 1);
      v45 = v131;
      if ( v131 != -1 )
      {
LABEL_42:
        if ( v45 )
          sub_140001660(*(_QWORD *)&v147[56], v45, 1);
      }
    }
    else
    {
      if ( v36 )
        sub_140001660(v37.m128i_i64[0], v36, 1);
      if ( *(_QWORD *)&v147[24] )
        sub_140001660(v41, *(_QWORD *)&v147[24], 1);
      v45 = *(_QWORD *)&v147[48];
      if ( *(_QWORD *)&v147[48] != -1 )
        goto LABEL_42;
    }
  }
  v189 = 1;
  sub_140333530(&v124);
  v58 = v129;
  v189 = 1;
  sub_1402B0040(&v115, v142, &v149);
  v59 = v154;
  v60 = v155;
  v61 = v156;
  v62 = 160 * v156;
  *(_QWORD *)v160 = v155;
  *(_QWORD *)&v160[16] = v154;
  *(_QWORD *)&v160[8] = v155;
  *(_QWORD *)&v160[24] = v155 + 160 * v156;
  v63 = v116;
  if ( v156 > (_QWORD)v115 - (_QWORD)v116 )
  {
    sub_141688D30((unsigned int)&v115, v116, v156, 8, 160);
    v63 = v116;
LABEL_75:
    sub_141684120(*((_QWORD *)&v115 + 1) + 160 * v63, v60, v62);
  }
  else if ( v156 )
  {
    goto LABEL_75;
  }
  *(_QWORD *)&v116 = v61 + v63;
  if ( v59 )
    sub_140001660(v60, 160 * v59, 8);
  LODWORD(v122) = 1;
  v189 = 0;
  *(_DWORD *)v147 = sub_141475580();
  *(_DWORD *)&v147[4] = v64;
  v189 = 0;
  sub_141475530(v160, v147, 3577643008LL, 27111902);
  if ( v160[0] )
    v65 = 0;
  else
    v65 = *(_QWORD *)&v160[8];
  *((_QWORD *)&v121 + 1) = v65;
  v189 = 0;
  sub_1407A0EE0(&v113);
  v189 = 0;
  HIDWORD(_RAX) = (unsigned __int64)serialize_2(v160, v58, (__int64)&v113) >> 32;
  if ( *(_DWORD *)v160 == -1 )
  {
    v84 = *(_QWORD *)(v58 + 712);
    v85 = *(_QWORD *)(v58 + 720);
    v189 = 0;
    HIDWORD(_RAX) = (unsigned __int64)sub_1407A0CC0(v160, v84, v85, &v113) >> 32;
    a1 = v143;
    *(_OWORD *)(v143 + 112) = *(_OWORD *)&v160[112];
    *(_OWORD *)(a1 + 96) = *(_OWORD *)&v160[96];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v160[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v160[64];
    v87 = _mm_loadu_si128((const __m128i *)v160);
    v88 = *(_OWORD *)&v160[16];
    v89 = *(_OWORD *)&v160[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v160[48];
    *(_OWORD *)(a1 + 32) = v89;
    *(_OWORD *)(a1 + 16) = v88;
    *(__m128i *)a1 = v87;
    if ( v140 != -1 && v140 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v141, v140, 1) >> 32;
    if ( v149 != -1 && v149 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v150, v149, 1) >> 32;
    v90 = v136.m128i_i64[1];
    if ( v136.m128i_i64[1] )
    {
      v91 = *((_QWORD *)&v137 + 1);
      if ( *((_QWORD *)&v137 + 1) )
      {
        v92 = v136.m128i_i64[0];
        v93 = (const __m128i *)(v136.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v136.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v95 = _mm_load_si128(v93);
              v92 -= 384;
              ++v93;
              _R15D = _mm_movemask_epi8(v95) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v96 = -3 * _RAX;
          v97 = *(_QWORD *)(v92 + 8 * v96 - 24);
          if ( v97 )
            sub_140001660(*(_QWORD *)(v92 + 8 * v96 - 16), v97, 1);
          --v91;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v91 );
      }
      v98 = (24 * v90 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v99 = v98 + v90 + 17;
      if ( v99 )
        sub_140001660(v136.m128i_i64[0] - v98, v99, 16);
    }
    v181 = 0;
    v180 = 0;
    v179 = 0;
    sub_1406CE470((__int64)&v113);
    if ( (v182 & 1) == 0 )
    {
      if ( 2 * *off_141EC90B8 )
      {
        v188 = 0;
        v187 = 0;
        v186 = 0;
        if ( !(unsigned __int8)sub_1416C2250(v101, v100) )
          *((_BYTE *)Address + 1) = 1;
      }
    }
    v82 = Address;
    v102 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v102 == 2 )
    {
LABEL_121:
      v188 = 0;
      v187 = 0;
      v186 = 0;
      WakeByAddressSingle(v82);
    }
  }
  else
  {
    a1 = v143;
    *(_OWORD *)(v143 + 88) = *(_OWORD *)&v160[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v160[64];
    v67 = _mm_loadu_si128((const __m128i *)v160);
    v68 = *(_OWORD *)&v160[16];
    v69 = *(_OWORD *)&v160[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v160[48];
    *(_OWORD *)(a1 + 40) = v69;
    *(_OWORD *)(a1 + 24) = v68;
    *(__m128i *)(a1 + 8) = v67;
    *(_QWORD *)a1 = -1;
    if ( v140 != -1 && v140 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v141, v140, 1) >> 32;
    if ( v149 != -1 && v149 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v150, v149, 1) >> 32;
    v70 = v136.m128i_i64[1];
    if ( v136.m128i_i64[1] )
    {
      v71 = *((_QWORD *)&v137 + 1);
      if ( *((_QWORD *)&v137 + 1) )
      {
        v72 = v136.m128i_i64[0];
        v73 = (const __m128i *)(v136.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v136.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v75 = _mm_load_si128(v73);
              v72 -= 384;
              ++v73;
              _R15D = _mm_movemask_epi8(v75) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v76 = -3 * _RAX;
          v77 = *(_QWORD *)(v72 + 8 * v76 - 24);
          if ( v77 )
            sub_140001660(*(_QWORD *)(v72 + 8 * v76 - 16), v77, 1);
          --v71;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v71 );
      }
      v78 = (24 * v70 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v79 = v78 + v70 + 17;
      if ( v79 )
        sub_140001660(v136.m128i_i64[0] - v78, v79, 16);
    }
    v181 = 0;
    v180 = 0;
    v179 = 0;
    sub_1406CE470((__int64)&v113);
    if ( (v182 & 1) == 0 )
    {
      if ( 2 * *off_141EC90B8 )
      {
        v188 = 0;
        v187 = 0;
        v186 = 0;
        if ( !(unsigned __int8)sub_1416C2250(v81, v80) )
          *((_BYTE *)Address + 1) = 1;
      }
    }
    v82 = Address;
    v83 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v83 == 2 )
      goto LABEL_121;
  }
  return a1;
}