// win 1.2.7 | module src/core/relay/codex_project_state.rs | ea 0x140f67a80 | name sub_140F67A80
// win 1.2.7 | module src/core/relay/codex_project_state.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_140F67A80(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r15
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdi
  int v13; // eax
  char v14; // cl
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r14
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 j; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 i; // rax
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 *v43; // rsi
  __int64 *v44; // r14
  __int64 v45; // rcx
  unsigned __int64 v46; // r15
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // r12
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int32 v58; // r14d
  __int64 v59; // rdi
  __int64 v60; // rsi
  _QWORD *v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rdx
  _OWORD *v64; // rax
  __int128 v65; // xmm0
  char v66; // bl
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rbx
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rcx
  __int32 v75; // ebx
  __m128 v76; // xmm6
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __m128 *v81; // r12
  __int64 v82; // rbx
  __int64 v83; // r13
  __int64 v84; // rdi
  __int64 v85; // r14
  int v86; // eax
  char v87; // cl
  unsigned __int64 v88; // rax
  __m128 v89; // xmm0
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rcx
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // r8
  __int128 v96; // kr40_16
  __int64 v97; // rcx
  __int64 v98; // r12
  __int64 k; // rbx
  __int64 v100; // r14
  __int64 v101; // rdx
  _QWORD *v102; // rax
  void *v103; // rax
  __int64 v104; // rcx
  void *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rcx
  void *v109; // rax
  __int64 v110; // r9
  unsigned __int64 v111; // rdx
  _BYTE *v112; // r8
  __int64 v113; // rcx
  __int64 v114; // rdi
  __int64 v115; // r14
  __int64 v116; // rsi
  unsigned __int64 v117; // rdx
  __int64 *v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rcx
  _BYTE *v121; // rdi
  __int64 v122; // rbx
  __int64 v123; // rax
  _QWORD *v124; // rsi
  __int64 v125; // rdx
  _QWORD *v126; // r14
  __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 m; // rax
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int128 v137; // xmm1
  _QWORD *v138; // rsi
  __int64 v139; // rdx
  __int64 v140; // rdi
  __int64 v141; // rsi
  _QWORD *v142; // rbx
  __int64 v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 n; // rax
  __int64 v147; // rdx
  __int128 v148; // [rsp+30h] [rbp-50h]
  __int128 v149; // [rsp+48h] [rbp-38h] BYREF
  __int64 v150; // [rsp+58h] [rbp-28h]
  __int64 v151; // [rsp+60h] [rbp-20h] BYREF
  _OWORD *v152; // [rsp+68h] [rbp-18h]
  __int64 v153; // [rsp+70h] [rbp-10h]
  __int64 v154; // [rsp+78h] [rbp-8h] BYREF
  __int64 v155; // [rsp+80h] [rbp+0h]
  __int64 v156; // [rsp+88h] [rbp+8h]
  __int64 v157; // [rsp+98h] [rbp+18h] BYREF
  __int64 v158; // [rsp+A0h] [rbp+20h]
  __int64 v159; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v160; // [rsp+B0h] [rbp+30h]
  __int64 v161; // [rsp+B8h] [rbp+38h]
  __int128 v162; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v163; // [rsp+D0h] [rbp+50h]
  __int64 *v164; // [rsp+D8h] [rbp+58h]
  __m256i v165; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v166; // [rsp+100h] [rbp+80h]
  __int128 v167; // [rsp+110h] [rbp+90h] BYREF
  __int128 v168; // [rsp+120h] [rbp+A0h]
  __int128 v169; // [rsp+130h] [rbp+B0h]
  __int64 v170; // [rsp+140h] [rbp+C0h]
  unsigned __int8 v171; // [rsp+148h] [rbp+C8h]
  _BYTE v172[7]; // [rsp+149h] [rbp+C9h]
  __int64 v173; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v174; // [rsp+158h] [rbp+D8h]
  __int64 v175; // [rsp+160h] [rbp+E0h]
  __int64 v176; // [rsp+168h] [rbp+E8h] BYREF
  __int128 v177; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v178; // [rsp+180h] [rbp+100h] BYREF
  __int128 v179; // [rsp+188h] [rbp+108h]
  __int64 v180; // [rsp+198h] [rbp+118h]
  __m256i v181; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v182; // [rsp+1C0h] [rbp+140h]
  __m256i v183; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v184; // [rsp+1F0h] [rbp+170h]
  __int128 v185; // [rsp+200h] [rbp+180h]
  __int128 v186; // [rsp+210h] [rbp+190h] BYREF
  __int64 v187; // [rsp+220h] [rbp+1A0h]
  _BYTE v188[40]; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v189; // [rsp+258h] [rbp+1D8h]
  __int64 *v190; // [rsp+260h] [rbp+1E0h]
  __int64 v191; // [rsp+268h] [rbp+1E8h]
  __int128 v192; // [rsp+270h] [rbp+1F0h] BYREF
  _BYTE *v193; // [rsp+280h] [rbp+200h]
  __int64 (__fastcall **v194)(); // [rsp+288h] [rbp+208h]
  __m256i v195; // [rsp+290h] [rbp+210h] BYREF
  __int128 v196; // [rsp+2B0h] [rbp+230h]
  _OWORD v197[2]; // [rsp+2C0h] [rbp+240h]
  __int64 v198; // [rsp+2E0h] [rbp+260h]
  __int64 v199; // [rsp+2E8h] [rbp+268h]
  __int128 v200; // [rsp+2F0h] [rbp+270h] BYREF
  _BYTE v201[48]; // [rsp+300h] [rbp+280h]
  __int64 v202; // [rsp+330h] [rbp+2B0h]
  __int64 v203; // [rsp+338h] [rbp+2B8h]
  _BYTE v204[96]; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v205; // [rsp+3A0h] [rbp+320h]
  unsigned __int8 v206; // [rsp+3A8h] [rbp+328h]
  _BYTE v207[7]; // [rsp+3A9h] [rbp+329h]
  __int128 v208; // [rsp+3B0h] [rbp+330h]
  char v209; // [rsp+3C5h] [rbp+345h]
  char v210; // [rsp+3C6h] [rbp+346h]
  char v211; // [rsp+3C7h] [rbp+347h]
  char v212; // [rsp+3C8h] [rbp+348h]
  char v213; // [rsp+3C9h] [rbp+349h]
  char v214; // [rsp+3CAh] [rbp+34Ah]
  char v215; // [rsp+3CBh] [rbp+34Bh]
  char v216; // [rsp+3CCh] [rbp+34Ch] BYREF
  char v217; // [rsp+3CDh] [rbp+34Dh]
  char v218; // [rsp+3CEh] [rbp+34Eh]
  char v219; // [rsp+3CFh] [rbp+34Fh]
  char v220; // [rsp+3D0h] [rbp+350h]
  char v221; // [rsp+3D1h] [rbp+351h]
  char v222; // [rsp+3D2h] [rbp+352h]
  char v223; // [rsp+3D3h] [rbp+353h]
  char v224; // [rsp+3D4h] [rbp+354h]
  char v225; // [rsp+3D5h] [rbp+355h]
  char v226; // [rsp+3D6h] [rbp+356h]
  char v227; // [rsp+3D7h] [rbp+357h]
  char v228; // [rsp+3D8h] [rbp+358h]
  char v229; // [rsp+3D9h] [rbp+359h]
  char v230; // [rsp+3DAh] [rbp+35Ah]
  char v231; // [rsp+3DBh] [rbp+35Bh]
  char v232; // [rsp+3DCh] [rbp+35Ch]
  char v233; // [rsp+3DDh] [rbp+35Dh]
  char v234; // [rsp+3DEh] [rbp+35Eh]
  char v235; // [rsp+3DFh] [rbp+35Fh]
  char v236; // [rsp+3E0h] [rbp+360h]
  char v237; // [rsp+3E1h] [rbp+361h]
  char v238; // [rsp+3E2h] [rbp+362h]
  char v239; // [rsp+3E3h] [rbp+363h]
  char v240; // [rsp+3E4h] [rbp+364h]
  char v241; // [rsp+3E5h] [rbp+365h]
  char v242; // [rsp+3E6h] [rbp+366h]
  char v243; // [rsp+3E7h] [rbp+367h]
  __int64 v244; // [rsp+3E8h] [rbp+368h]

  v244 = -2;
  sub_1416828D0((unsigned int)&v154, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (unsigned int)&unk_141A62C16, 24);
  v5 = v155;
  *((_QWORD *)&v208 + 1) = v156;
  sub_14169D1D0(v204, v155, v156);
  v158 = a2;
  *(_QWORD *)&v208 = v5;
  if ( *(_QWORD *)v204 == -1 )
  {
    if ( (v204[8] & 3u) - 2 >= 2 && (v204[8] & 3) != 0 )
    {
      v165.m256i_i64[1] = *(_QWORD *)&v204[8] - 1LL;
      v165.m256i_i8[0] = 3;
      sub_1416BCB00(&v165.m256i_u64[1]);
    }
    goto LABEL_26;
  }
  v199 = *(_QWORD *)v204;
  *(_OWORD *)v204 = *(_OWORD *)&v204[8];
  *(_OWORD *)&v204[16] = 0;
  v203 = *(_QWORD *)v204;
  *(_OWORD *)&v204[32] = *(_OWORD *)v204;
  sub_14062D280(&v165, v204);
  LOBYTE(v2) = v165.m256i_i8[0];
  if ( v165.m256i_i8[0] == -1 )
  {
    sub_14002F910(&v165.m256i_u64[1]);
    if ( v199 )
      sub_140001660(v203, v199, 1);
    goto LABEL_26;
  }
  v195 = v165;
  if ( v165.m256i_i8[0] == 5 )
  {
    *(_QWORD *)v201 = v195.m256i_i64[3];
    v200 = *(_OWORD *)&v195.m256i_u64[1];
  }
  if ( v199 )
    sub_140001660(v203, v199, 1);
  if ( (_BYTE)v2 != 5 )
  {
    sub_14002F9D0(&v195);
LABEL_26:
    *(_QWORD *)&v186 = 0;
    v187 = 0;
LABEL_27:
    v173 = 0;
    v175 = 0;
    goto LABEL_28;
  }
  v186 = v200;
  v187 = *(_QWORD *)v201;
  v6 = v200;
  if ( !(_QWORD)v200 )
    goto LABEL_27;
  v190 = a1;
  v203 = *((_QWORD *)&v186 + 1);
LABEL_10:
  v7 = v6 + 360;
  v8 = *(unsigned __int16 *)(v6 + 626);
  v199 = v6;
  v9 = (_QWORD *)(v6 - 8);
  v202 = v8;
  v10 = 3LL * (unsigned int)(8 * v8);
  v11 = -1;
  do
  {
    if ( !v10 )
    {
      v11 = v202;
      a1 = v190;
LABEL_18:
      if ( !v203 )
        goto LABEL_27;
      --v203;
      v6 = *(_QWORD *)(v199 + 8 * v11 + 632);
      goto LABEL_10;
    }
    v2 = v7 + 24;
    v12 = 22LL - *(_QWORD *)(v7 + 16);
    v13 = sub_1418F4B70(aProjectlessThr, *(_QWORD *)(v7 + 8));
    if ( v13 )
      v12 = v13;
    v14 = (v12 > 0) - (v12 < 0);
    v9 += 4;
    ++v11;
    v10 -= 24;
    v7 = v2;
  }
  while ( v14 == 1 );
  a1 = v190;
  if ( v14 )
    goto LABEL_18;
  if ( *((_BYTE *)v9 - 24) != 4 )
    goto LABEL_27;
  v29 = *(v9 - 1);
  v30 = v29 + 32LL * *v9;
  v238 = 1;
  sub_140EBA4C0(&v173, v29, v30);
LABEL_28:
  v233 = 1;
  v15 = v158;
  sub_140F63010((__int64)v204, v158);
  if ( *(_QWORD *)v204 == -1 )
  {
    v20 = v173;
    v17 = 0;
    goto LABEL_88;
  }
  v199 = *(_QWORD *)v204;
  v16 = *(_QWORD *)&v204[16];
  v202 = *(_QWORD *)&v204[8];
  sub_140E940E0(v204, *(_QWORD *)&v204[8], *(_QWORD *)&v204[16], 32770);
  if ( v206 == 0xFF )
  {
    *(_OWORD *)&v201[32] = *(_OWORD *)&v204[48];
    *(_OWORD *)&v201[16] = *(_OWORD *)&v204[32];
    *(_OWORD *)v201 = *(_OWORD *)&v204[16];
    v200 = *(_OWORD *)v204;
    *(_QWORD *)v188 = &v200;
    *(_QWORD *)&v188[8] = sub_141404740;
    sub_1416ABFD0(&v183, &unk_141A58270, v188);
    v17 = v183.m256i_i64[0];
    LOBYTE(v2) = v183.m256i_i8[8];
    *(_QWORD *)v188 = *(__int64 *)((char *)&v183.m256i_i64[1] + 1);
    *(_QWORD *)&v188[7] = v183.m256i_i64[2];
    sub_140E96F40(&v200);
    v181.m256i_i64[0] = *(_QWORD *)v188;
    *(__int64 *)((char *)v181.m256i_i64 + 7) = *(_QWORD *)&v188[7];
    *(_QWORD *)&v192 = v181.m256i_i64[0];
    *(_QWORD *)((char *)&v192 + 7) = *(_QWORD *)&v188[7];
    v195.m256i_i64[0] = v192;
    *(__int64 *)((char *)v195.m256i_i64 + 7) = *(_QWORD *)&v188[7];
    v21 = 10;
    goto LABEL_38;
  }
  v181.m256i_i64[0] = *(_QWORD *)&v204[17];
  *(__int64 *)((char *)v181.m256i_i64 + 7) = *(_QWORD *)&v204[24];
  v166 = *(_OWORD *)&v204[32];
  v167 = *(_OWORD *)&v204[48];
  v168 = *(_OWORD *)&v204[64];
  v169 = *(_OWORD *)&v204[80];
  *(_DWORD *)v172 = *(_DWORD *)v207;
  *(_DWORD *)&v172[3] = *(_DWORD *)&v207[3];
  *(_QWORD *)((char *)&v192 + 7) = *(_QWORD *)&v204[24];
  *(_QWORD *)&v192 = v181.m256i_i64[0];
  v165.m256i_i8[16] = v204[16];
  v165.m256i_i64[3] = *(_QWORD *)((char *)&v192 + 7);
  *(__int64 *)((char *)&v165.m256i_i64[2] + 1) = v181.m256i_i64[0];
  *(_OWORD *)v165.m256i_i8 = *(_OWORD *)v204;
  v170 = v205;
  v171 = v206;
  sub_141403910(&v200, &v165, 0, 500000000);
  if ( (_QWORD)v200 == -1 )
  {
    sub_140F63D10((__int64)&v200, (__int64)&v165);
    if ( (_QWORD)v200 == -1 )
    {
      v31 = *((_QWORD *)&v200 + 1);
      v181.m256i_i64[0] = *(_QWORD *)&v201[1];
      *(__int64 *)((char *)v181.m256i_i64 + 7) = *(_QWORD *)&v201[8];
      *(_QWORD *)&v192 = v181.m256i_i64[0];
      *(_QWORD *)((char *)&v192 + 7) = *(_QWORD *)&v201[8];
      v178 = *((_QWORD *)&v200 + 1);
      LOBYTE(v179) = v201[0];
      *(_QWORD *)((char *)&v179 + 1) = v192;
      *((_QWORD *)&v179 + 1) = *(_QWORD *)&v201[8];
      v32 = v173;
      v191 = v179;
      sub_140F643B0((__int64)&v200, (unsigned __int64)&v165, *((unsigned __int64 *)&v200 + 1), v179, v173, v174);
      v198 = v31;
      if ( (_QWORD)v200 == -1 )
      {
        v160 = v32;
        v33 = *((_QWORD *)&v200 + 1);
        v181.m256i_i64[0] = *(_QWORD *)&v201[1];
        *(__int64 *)((char *)v181.m256i_i64 + 7) = *(_QWORD *)&v201[8];
        *(_QWORD *)&v192 = v181.m256i_i64[0];
        *(_QWORD *)((char *)&v192 + 7) = *(_QWORD *)&v201[8];
        v176 = *((_QWORD *)&v200 + 1);
        LOBYTE(v177) = v201[0];
        *(_QWORD *)((char *)&v177 + 1) = v192;
        *((_QWORD *)&v177 + 1) = *(_QWORD *)&v201[8];
        v34 = *(_QWORD *)&v201[8];
        if ( *(_QWORD *)&v201[8] )
        {
          v35 = v171;
          v36 = *(__int64 *)((char *)&off_141A65F90 + v35 * 8);
          v37 = qword_141A65FA8[v35];
          v234 = 1;
          sub_1414039F0(v204, &v165, v36, v37);
          if ( *(_QWORD *)v204 == -1 )
          {
            v159 = 0;
            v42 = (__int64 *)v177;
            v43 = (__int64 *)(v177 + 48 * v34);
            *(_QWORD *)&v162 = v177;
            *((_QWORD *)&v162 + 1) = v177;
            v163 = v33;
            v164 = v43;
            v203 = 0;
            while ( v42 != v43 )
            {
              v44 = v42 + 6;
              *((_QWORD *)&v162 + 1) = v42 + 6;
              v45 = *v42;
              v182 = v42[5];
              v181 = *(__m256i *)(v42 + 1);
              if ( v45 == -1 )
                break;
              *(_QWORD *)v188 = v45;
              v189 = v182;
              *(__m256i *)&v188[8] = v181;
              *(_QWORD *)&v192 = &v188[24];
              *((_QWORD *)&v192 + 1) = &off_141A608B0;
              v193 = v188;
              v194 = &off_141A608B0;
              sub_140E94840(
                (unsigned int)&v183,
                (unsigned int)&v165,
                (unsigned int)aUpdateThreadsS_12,
                68,
                (__int64)&v192,
                2);
              if ( v183.m256i_i64[0] != -1 )
              {
                *(_OWORD *)&v201[32] = v185;
                *(_OWORD *)&v201[16] = v184;
                *(_OWORD *)v201 = *(_OWORD *)&v183.m256i_u64[2];
                v200 = *(_OWORD *)v183.m256i_i8;
                sub_140EBCA00(v204, &v200);
                v17 = *(_QWORD *)&v204[8];
                v21 = *(_QWORD *)v204;
                LOBYTE(v2) = v204[16];
                v195 = *(__m256i *)&v204[17];
                v196 = *(_OWORD *)&v204[49];
                v197[0] = *(_OWORD *)&v204[65];
                *(_OWORD *)((char *)v197 + 15) = *(_OWORD *)&v204[80];
                sub_14002EA10(v188);
                v239 = 1;
                sub_1403F9540(&v162);
                v234 = 0;
                sub_140E96CB0(&v165);
                goto LABEL_58;
              }
              v203 += v183.m256i_i64[1];
              v159 = v203;
              if ( *(_QWORD *)v188 )
                sub_140001660(*(_QWORD *)&v188[8], *(_QWORD *)v188, 1);
              if ( *(_QWORD *)&v188[24] )
                sub_140001660(*(_QWORD *)&v188[32], *(_QWORD *)&v188[24], 1);
              v42 = v44;
            }
            v239 = 1;
            sub_1403F9540(&v162);
            v20 = v160;
            v239 = 0;
            sub_140EBD5C0(&v183, &v165);
            if ( v183.m256i_i64[0] != -1 )
            {
              *(_OWORD *)&v201[32] = v185;
              *(_OWORD *)&v201[16] = v184;
              *(_OWORD *)v201 = *(_OWORD *)&v183.m256i_u64[2];
              v200 = *(_OWORD *)v183.m256i_i8;
              v239 = 0;
              sub_140EBCA90(v204, &v200);
              v17 = *(_QWORD *)&v204[8];
              v21 = *(_QWORD *)v204;
              LOBYTE(v2) = v204[16];
              v195 = *(__m256i *)&v204[17];
              v196 = *(_OWORD *)&v204[49];
              v197[0] = *(_OWORD *)&v204[65];
              *(_OWORD *)((char *)v197 + 15) = *(_OWORD *)&v204[80];
              goto LABEL_58;
            }
            if ( v203 )
            {
              v239 = 0;
              sub_1414039F0(&v200, &v165, aPragmaWalCheck_1, 28);
              if ( (_QWORD)v200 != -1 )
              {
                *(_OWORD *)&v204[48] = *(_OWORD *)&v201[32];
                *(_OWORD *)&v204[32] = *(_OWORD *)&v201[16];
                *(_OWORD *)&v204[16] = *(_OWORD *)v201;
                *(_OWORD *)v204 = v200;
                if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                {
                  *(_QWORD *)v188 = v204;
                  *(_QWORD *)&v188[8] = sub_141404740;
                  v183.m256i_i64[0] = (__int64)aCodexmateLibCo_45;
                  v183.m256i_i64[1] = 47;
                  v183.m256i_i64[2] = (__int64)aCodexmateLibCo_45;
                  v183.m256i_i64[3] = 47;
                  *(_QWORD *)&v184 = &off_141A63008;
                  sub_140BAD520(&unk_141A62FBB, v188, 2, &v183);
                }
                v239 = 0;
                sub_140E96F40(v204);
              }
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v183.m256i_i64[0] = v202;
                v183.m256i_i64[1] = v16;
                *(_QWORD *)&v200 = &v159;
                *((_QWORD *)&v200 + 1) = sub_1416BCB10;
                *(_QWORD *)v201 = &v183;
                *(_QWORD *)&v201[8] = sub_14169F630;
                *(_QWORD *)v204 = aCodexmateLibCo_45;
                *(_QWORD *)&v204[8] = 47;
                *(_QWORD *)&v204[16] = aCodexmateLibCo_45;
                *(_QWORD *)&v204[24] = 47;
                *(_QWORD *)&v204[32] = &off_141A63080;
                v239 = 0;
                sub_140BAD520(&unk_141A63020, &v200, 2, v204);
                v203 = v159;
              }
            }
            else
            {
              v203 = 0;
            }
            sub_140E8AC80(&v178);
            v17 = v203;
            sub_140E963A0(&v165);
            if ( v199 )
              sub_140001660(v202, v199, 1);
            goto LABEL_88;
          }
          *(_OWORD *)&v201[32] = *(_OWORD *)&v204[48];
          *(_OWORD *)&v201[17] = *(_OWORD *)&v204[33];
          *(_OWORD *)&v201[1] = *(_OWORD *)&v204[17];
          v200 = *(_OWORD *)v204;
          v201[0] = v204[16];
          v234 = 1;
          sub_140EBC970(v204, &v200);
          v17 = *(_QWORD *)&v204[8];
          v21 = *(_QWORD *)v204;
          LOBYTE(v2) = v204[16];
          v195 = *(__m256i *)&v204[17];
          v196 = *(_OWORD *)&v204[49];
          v197[0] = *(_OWORD *)&v204[65];
          *(_OWORD *)((char *)v197 + 15) = *(_OWORD *)&v204[80];
        }
        else
        {
          v21 = -1;
          v17 = 0;
        }
        sub_140025A00(&v176);
      }
      else
      {
        *(_OWORD *)&v204[48] = *(_OWORD *)&v201[32];
        *(_OWORD *)&v204[32] = *(_OWORD *)&v201[16];
        *(_OWORD *)&v204[16] = *(_OWORD *)v201;
        *(_OWORD *)v204 = v200;
        *(_QWORD *)v188 = v204;
        *(_QWORD *)&v188[8] = sub_141404740;
        sub_1416ABFD0(&v183, &unk_141A582A2, v188);
        v17 = v183.m256i_i64[0];
        LOBYTE(v2) = v183.m256i_i8[8];
        *(_QWORD *)v188 = *(__int64 *)((char *)&v183.m256i_i64[1] + 1);
        *(_QWORD *)&v188[7] = v183.m256i_i64[2];
        sub_140E96F40(v204);
        v181.m256i_i64[0] = *(_QWORD *)v188;
        *(__int64 *)((char *)v181.m256i_i64 + 7) = *(_QWORD *)&v188[7];
        *(_QWORD *)&v192 = v181.m256i_i64[0];
        *(_QWORD *)((char *)&v192 + 7) = *(_QWORD *)&v188[7];
        v195.m256i_i64[0] = v192;
        *(__int64 *)((char *)v195.m256i_i64 + 7) = *(_QWORD *)&v188[7];
        v21 = 10;
      }
LABEL_58:
      if ( v198 )
      {
        v38 = *((_QWORD *)&v179 + 1);
        *(_QWORD *)&v204[8] = 0;
        *(_QWORD *)&v204[16] = v198;
        *(_QWORD *)&v204[24] = v191;
        *(_QWORD *)&v204[40] = 0;
        *(_QWORD *)&v204[48] = v198;
        *(_QWORD *)&v204[56] = v191;
        v39 = 1;
      }
      else
      {
        v39 = 0;
        v38 = 0;
      }
      *(_QWORD *)v204 = v39;
      *(_QWORD *)&v204[32] = v39;
      *(_QWORD *)&v204[64] = v38;
      sub_140E828B0(&v200, v204);
      for ( i = v200; (_QWORD)v200; i = v200 )
      {
        v41 = *(_QWORD *)(i + 24LL * *(_QWORD *)v201 + 8);
        if ( v41 )
          sub_140001660(*(_QWORD *)(i + 24LL * *(_QWORD *)v201 + 16), v41, 1);
        sub_140E828B0(&v200, v204);
      }
      goto LABEL_37;
    }
    *(_OWORD *)&v204[48] = *(_OWORD *)&v201[32];
    *(_OWORD *)&v204[32] = *(_OWORD *)&v201[16];
    *(_OWORD *)&v204[16] = *(_OWORD *)v201;
    *(_OWORD *)v204 = v200;
    *(_QWORD *)v188 = v204;
    *(_QWORD *)&v188[8] = sub_141404740;
    sub_1416ABFD0(&v183, &unk_141A5828A, v188);
    v17 = v183.m256i_i64[0];
    LOBYTE(v2) = v183.m256i_i8[8];
    *(_QWORD *)v188 = *(__int64 *)((char *)&v183.m256i_i64[1] + 1);
    *(_QWORD *)&v188[7] = v183.m256i_i64[2];
    sub_140E96F40(v204);
    v181.m256i_i64[0] = *(_QWORD *)v188;
    *(__int64 *)((char *)v181.m256i_i64 + 7) = *(_QWORD *)&v188[7];
    *(_QWORD *)&v192 = v181.m256i_i64[0];
    *(_QWORD *)((char *)&v192 + 7) = *(_QWORD *)&v188[7];
    v18 = v192;
    v19 = *(_QWORD *)&v188[7];
  }
  else
  {
    *(_OWORD *)&v204[48] = *(_OWORD *)&v201[32];
    *(_OWORD *)&v204[32] = *(_OWORD *)&v201[16];
    *(_OWORD *)&v204[16] = *(_OWORD *)v201;
    *(_OWORD *)v204 = v200;
    *(_QWORD *)v188 = v204;
    *(_QWORD *)&v188[8] = sub_141404740;
    sub_1416ABFD0(&v183, &unk_141A58319, v188);
    v17 = v183.m256i_i64[0];
    LOBYTE(v2) = v183.m256i_i8[8];
    *(_QWORD *)v188 = *(__int64 *)((char *)&v183.m256i_i64[1] + 1);
    *(_QWORD *)&v188[7] = v183.m256i_i64[2];
    sub_140E96F40(v204);
    v18 = *(_QWORD *)v188;
    v19 = *(_QWORD *)&v188[7];
  }
  v195.m256i_i64[0] = v18;
  *(__int64 *)((char *)v195.m256i_i64 + 7) = v19;
  v21 = 10;
LABEL_37:
  sub_140E963A0(&v165);
LABEL_38:
  if ( v199 )
    sub_140001660(v202, v199, 1);
  v20 = v173;
  if ( v21 != -1 )
  {
    *(_OWORD *)(a1 + 11) = *(_OWORD *)((char *)v197 + 15);
    v22 = *(_OWORD *)v195.m256i_i8;
    v23 = *(_OWORD *)&v195.m256i_u64[2];
    v24 = v196;
    *(_OWORD *)((char *)a1 + 73) = v197[0];
    *(_OWORD *)((char *)a1 + 57) = v24;
    *(_OWORD *)((char *)a1 + 41) = v23;
    *(_OWORD *)((char *)a1 + 25) = v22;
    a1[1] = v21;
    a1[2] = v17;
    *((_BYTE *)a1 + 24) = v2;
    *a1 = -1;
    if ( v20 )
    {
      v25 = v175;
      *(_QWORD *)&v204[8] = 0;
      *(_QWORD *)&v204[16] = v20;
      *(_QWORD *)&v204[24] = v174;
      *(_QWORD *)&v204[40] = 0;
      *(_QWORD *)&v204[48] = v20;
      *(_QWORD *)&v204[56] = v174;
      v26 = 1;
    }
    else
    {
      v26 = 0;
      v25 = 0;
    }
    *(_QWORD *)v204 = v26;
    *(_QWORD *)&v204[32] = v26;
    *(_QWORD *)&v204[64] = v25;
    v238 = 1;
    sub_140E828B0(&v165, v204);
    for ( j = v165.m256i_i64[0]; v165.m256i_i64[0]; j = v165.m256i_i64[0] )
    {
      v28 = *(_QWORD *)(j + 24 * v165.m256i_i64[2] + 8);
      if ( v28 )
        sub_140001660(*(_QWORD *)(j + 24 * v165.m256i_i64[2] + 16), v28, 1);
      v238 = 1;
      sub_140E828B0(&v165, v204);
    }
    goto LABEL_226;
  }
LABEL_88:
  v157 = v17;
  v233 = 1;
  v199 = v174;
  sub_140F65BE0((__int64)&v165, v15, v20, v174);
  v203 = v17;
  v219 = 1;
  v218 = 1;
  v217 = 1;
  sub_140F64000(v204, v186, *((__int64 *)&v186 + 1), (const __m128i *)&xmmword_141A58336, 0x1Eu);
  v219 = 1;
  v218 = 1;
  v217 = 0;
  sub_140F62AC0((__int64)&v178, (__int64 *)v204, v165.m256i_i64);
  v46 = *((_QWORD *)&v179 + 1);
  if ( !*((_QWORD *)&v179 + 1) )
  {
    v55 = *((_QWORD *)&v168 + 1);
    v237 = 1;
    v236 = 1;
    sub_140F63010((__int64)v204, v15);
    v57 = v203;
    if ( v203 )
    {
      v195.m256i_i64[0] = (__int64)&v157;
      v195.m256i_i64[1] = (__int64)sub_1416BCB10;
      sub_1416ABFD0(&v151, &unk_141A63151, &v195);
      v57 = v203;
    }
    else
    {
      nullsub_1(v56);
      v64 = (_OWORD *)sub_140001650(89, 1);
      if ( !v64 )
        sub_141938D2B(1, 89);
      *(_OWORD *)((char *)v64 + 73) = *(__int128 *)((char *)&xmmword_141A63138 + 9);
      v64[4] = xmmword_141A63138;
      v64[3] = xmmword_141A63128;
      v64[2] = xmmword_141A63118;
      v64[1] = xmmword_141A63108;
      *v64 = xmmword_141A630F8;
      v151 = 89;
      v152 = v64;
      v153 = 89;
    }
    v65 = *(_OWORD *)v204;
    *(_OWORD *)(a1 + 9) = *(_OWORD *)&v204[16];
    *(_OWORD *)(a1 + 7) = v65;
    *a1 = v151;
    a1[1] = (__int64)v152;
    a1[2] = v153;
    a1[3] = -1;
    a1[11] = 0;
    a1[12] = v55;
    a1[13] = v57;
    *((_BYTE *)a1 + 112) = 0;
    v60 = v179;
LABEL_116:
    if ( v178 )
      sub_140001660(v60, 24 * v178, 8);
    v66 = 1;
    sub_140DF2C10((__int64 *)&v167 + 1);
    v67 = *((_QWORD *)&v166 + 1);
    v68 = v166;
    if ( *((_QWORD *)&v166 + 1) )
      goto LABEL_212;
    goto LABEL_216;
  }
  v160 = v20;
  v47 = *(_QWORD *)(v15 + 776);
  v48 = *(_QWORD *)(v15 + 784);
  v237 = 1;
  v236 = 1;
  v49 = v208;
  sub_141695A00(v204, v208, *((_QWORD *)&v208 + 1));
  if ( *(_DWORD *)v204 == 2 )
  {
    if ( (v204[8] & 3u) - 2 >= 2 && (v204[8] & 3) != 0 )
    {
      --*(_QWORD *)&v204[8];
      v204[0] = 3;
      v237 = 1;
      v236 = 1;
      sub_1416BCB00(&v204[8]);
    }
    v191 = -1;
    goto LABEL_94;
  }
  v237 = 1;
  v236 = 1;
  sub_1416828D0((unsigned int)&v183, v47, v48, (unsigned int)&unk_141A62C50, 21);
  v204[0] = 1;
  v58 = v183.m256i_i32[4];
  v202 = v183.m256i_i64[1];
  v59 = sub_14168A790(v204, v183.m256i_i64[1], v183.m256i_i64[2]);
  if ( v59 )
  {
LABEL_100:
    if ( v183.m256i_i64[0] )
      sub_140001660(v202, v183.m256i_i64[0], 1);
    v162 = v192;
    *((_OWORD *)a1 + 2) = v192;
    a1[1] = 2;
    a1[2] = v59;
    *a1 = -1;
    v60 = v179;
    v61 = (_QWORD *)(v179 + 8);
    do
    {
      v62 = *(v61 - 1);
      if ( v62 )
        sub_140001660(*v61, v62, 1);
      v61 += 3;
      --v46;
    }
    while ( v46 );
    goto LABEL_116;
  }
  sub_141406CE0(&v176);
  v195.m256i_i32[2] = v177;
  v195.m256i_i64[0] = v176;
  sub_141406B30(&v181, &v195, 0);
  v75 = v181.m256i_i32[0];
  v76 = (__m128)*(unsigned __int64 *)((char *)v181.m256i_u64 + 4);
  *(_QWORD *)&v200 = 0;
  *((_QWORD *)&v200 + 1) = 1;
  *(_QWORD *)v201 = 0;
  v195.m256i_i64[2] = 1610612768;
  v195.m256i_i64[0] = (__int64)&v200;
  v195.m256i_i64[1] = (__int64)&off_1419E0B60;
  if ( (unsigned __int8)sub_141407E80((char *)&v177 + 4, &v195) )
    sub_141939040(
      (unsigned int)aADisplayImplem_53,
      55,
      (unsigned int)&v216,
      (unsigned int)&unk_1419D7FE8,
      (__int64)&off_1419E29A8);
  *(_QWORD *)&v204[16] = *(_QWORD *)v201;
  *(_OWORD *)v204 = v200;
  *(_DWORD *)&v204[84] = v75;
  *(_DWORD *)&v204[72] = 1;
  _mm_storel_ps((double *)&v204[76], v76);
  *(_DWORD *)&v204[24] = 0;
  *(_QWORD *)&v204[32] = aYMDHMS_1;
  *(_QWORD *)&v204[40] = 13;
  *(_OWORD *)&v204[48] = 8u;
  v204[64] = 0;
  sub_141568C20(&v195);
  *(_OWORD *)v181.m256i_i8 = *(_OWORD *)v195.m256i_i8;
  v195.m256i_i64[0] = (__int64)v204;
  v195.m256i_i64[1] = (__int64)sub_14028A2D0;
  v195.m256i_i64[2] = (__int64)&v181;
  v195.m256i_i64[3] = (__int64)sub_14028A180;
  sub_1416ABFD0(v188, &unk_141A62C72, &v195);
  v198 = *(_QWORD *)&v188[8];
  sub_1416828D0((unsigned int)&v200, v202, v58, *(_DWORD *)&v188[8], *(__int64 *)&v188[16]);
  if ( *(_QWORD *)v188 )
    sub_140001660(v198, *(_QWORD *)v188, 1);
  v180 = *((_QWORD *)&v200 + 1);
  if ( sub_141695640(v49, *((_QWORD *)&v208 + 1), *((_QWORD *)&v200 + 1), *(_QWORD *)v201) == 1 )
  {
    v59 = v77;
    if ( (_QWORD)v200 )
      sub_140001660(v180, v200, 1);
    if ( *(_QWORD *)v204 != -1 && *(_QWORD *)v204 )
      sub_140001660(*(_QWORD *)&v204[8], *(_QWORD *)v204, 1);
    goto LABEL_100;
  }
  v191 = v200;
  v192 = *(_OWORD *)v201;
  if ( *(_QWORD *)v204 != -1 && *(_QWORD *)v204 )
    sub_140001660(*(_QWORD *)&v204[8], *(_QWORD *)v204, 1);
  if ( v183.m256i_i64[0] )
    sub_140001660(v202, v183.m256i_i64[0], 1);
LABEL_94:
  v148 = v192;
  v232 = 1;
  v231 = 1;
  v230 = 1;
  sub_140F64000(&v195, v186, *((__int64 *)&v186 + 1), (const __m128i *)aProjectOrder, 0xDu);
  v215 = 1;
  sub_1403F1200(v204, &v178);
  v215 = 0;
  sub_140F62AC0((__int64)&v176, v195.m256i_i64, (__int64 *)v204);
  v228 = 1;
  v227 = 1;
  v226 = 1;
  v225 = 1;
  sub_140F64000(&v183, v186, *((__int64 *)&v186 + 1), (const __m128i *)aActiveWorkspac, 0x16u);
  v50 = v179;
  nullsub_1(v51);
  *(_QWORD *)&v208 = 16 * v46;
  v52 = sub_140001650(16 * v46, 8);
  if ( !v52 )
  {
    v229 = 1;
    sub_141938D2B(8, v208);
  }
  if ( v46 == 1 )
  {
    v54 = 0;
  }
  else
  {
    v63 = v50 + 40;
    v53 = v52 + 24;
    v54 = 0;
    do
    {
      *(_OWORD *)(v53 - 24) = *(_OWORD *)(v63 - 32);
      *(_OWORD *)(v53 - 8) = *(_OWORD *)(v63 - 8);
      v54 += 2;
      v63 += 48;
      v53 += 32;
    }
    while ( (v46 & 0x7FFFFFFFFFFFFFELL) != v54 );
    if ( (v46 & 1) == 0 )
      goto LABEL_110;
  }
  *(_OWORD *)(v52 + 16 * v54) = *(_OWORD *)(v50 + 24 * v54 + 8);
LABEL_110:
  *((_QWORD *)&v208 + 1) = v52;
  if ( v46 != 1 )
  {
    if ( v46 >= 0x15 )
    {
      v214 = 1;
      sub_14065D6C0(*((_QWORD *)&v208 + 1), v46, &v216);
    }
    else
    {
      sub_140E01BE0(*((_QWORD *)&v208 + 1), v46, 1, &v216);
    }
  }
  *(_QWORD *)v204 = *((_QWORD *)&v208 + 1);
  *(_QWORD *)&v204[8] = *((_QWORD *)&v208 + 1);
  *(_QWORD *)&v204[16] = v46;
  *(_QWORD *)&v204[24] = v208 + *((_QWORD *)&v208 + 1);
  v214 = 0;
  sub_140DEEE30(&v200, v204, v53);
  *(_QWORD *)v204 = v183.m256i_i64[1];
  *(_QWORD *)&v204[8] = v183.m256i_i64[1];
  *(_QWORD *)&v204[16] = v183.m256i_i64[0];
  *(_QWORD *)&v204[24] = v183.m256i_i64[1] + 24 * v183.m256i_i64[2];
  *(_QWORD *)&v204[32] = &v200;
  sub_140390A10(&v195, v204);
  v202 = v50;
  v190 = a1;
  if ( v195.m256i_i64[2] )
  {
    v163 = v195.m256i_i64[2];
    v162 = *(_OWORD *)v195.m256i_i8;
    v229 = 0;
    sub_140E8C2F0(&v200);
  }
  else
  {
    sub_1416AC440(v204, v50);
    v70 = *(_QWORD *)v204;
    if ( *(_QWORD *)v204 == -1 )
    {
      v73 = 8;
      v74 = 0;
    }
    else
    {
      v71 = *(_QWORD *)&v204[8];
      v72 = *(_QWORD *)&v204[16];
      nullsub_1(v69);
      v73 = sub_140001650(24, 8);
      if ( !v73 )
      {
        *(_QWORD *)&v208 = v71;
        *((_QWORD *)&v208 + 1) = v70;
        sub_141938D2B(8, 24);
      }
      *(_QWORD *)v73 = v70;
      *(_QWORD *)(v73 + 8) = v71;
      *(_QWORD *)(v73 + 16) = v72;
      v74 = 1;
    }
    *(_QWORD *)&v162 = v74;
    *((_QWORD *)&v162 + 1) = v73;
    v163 = v74;
    if ( v195.m256i_i64[0] )
      sub_140001660(v195.m256i_i64[1], 24 * v195.m256i_i64[0], 8);
    v229 = 0;
    sub_140E8C2F0(&v200);
  }
  v78 = v186;
  if ( !(_QWORD)v186 )
    goto LABEL_156;
  *(_QWORD *)&v208 = *((_QWORD *)&v186 + 1);
LABEL_143:
  v79 = v78 + 360;
  v80 = *(unsigned __int16 *)(v78 + 626);
  *((_QWORD *)&v208 + 1) = v78;
  v81 = (__m128 *)(v78 - 16);
  v198 = v80;
  v82 = 3LL * (unsigned int)(8 * v80);
  v83 = -1;
  do
  {
    if ( !v82 )
    {
      v83 = v198;
LABEL_151:
      if ( !(_QWORD)v208 )
        goto LABEL_156;
      *(_QWORD *)&v208 = v208 - 1;
      v78 = *(_QWORD *)(*((_QWORD *)&v208 + 1) + 8 * v83 + 632);
      goto LABEL_143;
    }
    v84 = v79 + 24;
    v85 = 27LL - *(_QWORD *)(v79 + 16);
    v86 = sub_1418F4B70(&xmmword_141A58380, *(_QWORD *)(v79 + 8));
    if ( v86 )
      v85 = v86;
    v87 = (v85 > 0) - (v85 < 0);
    v81 += 2;
    ++v83;
    v82 -= 24;
    v79 = v84;
  }
  while ( v87 == 1 );
  if ( v87 )
    goto LABEL_151;
  if ( v81[-1].m128_i8[0] == 5 )
  {
    v88 = v81[-1].m128_u64[1];
    if ( v88 )
    {
      v89 = *v81;
      v90 = 1;
    }
    else
    {
      v89 = 0;
      v90 = 0;
    }
    *(_OWORD *)v204 = (unsigned __int64)v90;
    *(_QWORD *)&v204[16] = v88;
    _mm_storel_ps((double *)&v204[24], v89);
    *(_OWORD *)&v204[32] = (unsigned __int64)v90;
    *(_QWORD *)&v204[48] = v88;
    *(__m128 *)&v204[56] = v89;
    v224 = 1;
    v223 = 1;
    v222 = 1;
    v221 = 1;
    v220 = 1;
    sub_140E16580(&v195, v204);
    v192 = *(_OWORD *)v195.m256i_i8;
    v193 = (_BYTE *)v195.m256i_i64[2];
  }
  else
  {
LABEL_156:
    *(_QWORD *)&v192 = 0;
    v193 = nullptr;
  }
  v91 = *((_QWORD *)&v167 + 1);
  if ( *((_QWORD *)&v167 + 1) )
    v91 = *((_QWORD *)&v168 + 1);
  *(_OWORD *)v204 = *((_QWORD *)&v167 + 1) != 0;
  *(_OWORD *)&v204[16] = __PAIR128__(v168, *((unsigned __int64 *)&v167 + 1));
  *(_OWORD *)&v204[32] = *(_OWORD *)v204;
  *(_OWORD *)&v204[48] = __PAIR128__(v168, *((unsigned __int64 *)&v167 + 1));
  *(_QWORD *)&v204[64] = v91;
  while ( 1 )
  {
    sub_140E81D20(&v195, v204);
    if ( !v195.m256i_i64[0] )
      break;
    v92 = *(_QWORD *)(v195.m256i_i64[0] + 24 * v195.m256i_i64[2] + 8);
    if ( v92 == -1 )
      break;
    *((_QWORD *)&v208 + 1) = *(_QWORD *)(v195.m256i_i64[0] + 24 * v195.m256i_i64[2] + 272);
    *(_QWORD *)&v208 = *(_QWORD *)(v195.m256i_i64[0] + 24 * v195.m256i_i64[2] + 280);
    v93 = *(_QWORD *)(v195.m256i_i64[0] + 24 * v195.m256i_i64[2] + 288);
    v181.m256i_i64[0] = v92;
    *(_OWORD *)&v181.m256i_u64[1] = *(_OWORD *)(v195.m256i_i64[0] + 24 * v195.m256i_i64[2] + 16);
    v213 = 0;
    sub_140E6EF30(&v200, (__int64 *)&v192, &v181);
    if ( (_QWORD)v200 == -1 )
    {
      v94 = *((_QWORD *)&v200 + 1);
      v95 = 3LL * *(_QWORD *)&v201[8];
      v96 = *(_OWORD *)(*((_QWORD *)&v200 + 1) + 24LL * *(_QWORD *)&v201[8] + 272);
      *(_QWORD *)(*((_QWORD *)&v200 + 1) + 8 * v95 + 272) = *((_QWORD *)&v208 + 1);
      *(_QWORD *)(v94 + 8 * v95 + 280) = v208;
      *(_QWORD *)(v94 + 8 * v95 + 288) = v93;
      if ( (unsigned __int64)(v96 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(*((_QWORD *)&v96 + 1), v96, 1);
    }
    else
    {
      *(_QWORD *)&v197[0] = *(_QWORD *)&v201[32];
      v196 = *(_OWORD *)&v201[16];
      *(_OWORD *)&v195.m256i_u64[2] = *(_OWORD *)v201;
      *(_OWORD *)v195.m256i_i8 = v200;
      *(_QWORD *)v188 = *((_QWORD *)&v208 + 1);
      *(_QWORD *)&v188[8] = v208;
      *(_QWORD *)&v188[16] = v93;
      v213 = 1;
      sub_140E62D00(&v183, &v195, v188);
    }
  }
  v243 = 1;
  v242 = 1;
  v241 = 1;
  v240 = 1;
  sub_140E81D20(&v195, v204);
  v98 = v158;
  for ( k = v195.m256i_i64[0]; v195.m256i_i64[0]; k = v195.m256i_i64[0] )
  {
    v100 = 3 * v195.m256i_i64[2];
    v101 = *(_QWORD *)(k + 24 * v195.m256i_i64[2] + 8);
    if ( v101 )
      sub_140001660(*(_QWORD *)(k + 24 * v195.m256i_i64[2] + 16), v101, 1);
    v102 = (_QWORD *)(k + 8 * v100 + 272);
    if ( *v102 )
      sub_140001660(*(_QWORD *)(k + 8 * v100 + 280), *v102, 1);
    v243 = 1;
    v242 = 1;
    v241 = 1;
    v240 = 1;
    sub_140E81D20(&v195, v204);
  }
  nullsub_1(v97);
  v103 = (void *)sub_140001650(30, 1);
  if ( !v103 )
  {
    v243 = 1;
    v242 = 1;
    v241 = 1;
    v240 = 1;
    sub_141938D2B(1, 30);
  }
  qmemcpy(v103, "electron-saved-workspace-roots", 30);
  *(_QWORD *)&v200 = 30;
  *((_QWORD *)&v200 + 1) = v103;
  *(_QWORD *)v201 = 30;
  v212 = 1;
  sub_1403ECCD0(&v195, v202, v202 + 24 * v46);
  *(_QWORD *)&v204[24] = v195.m256i_i64[2];
  *(_OWORD *)&v204[8] = *(_OWORD *)v195.m256i_i8;
  v204[0] = 4;
  v212 = 0;
  sub_140E72AA0(&v195, &v186, &v200, v204);
  if ( v195.m256i_i8[0] != -1 )
  {
    v243 = 1;
    v242 = 1;
    v241 = 1;
    v240 = 1;
    sub_14002F9D0(&v195);
  }
  nullsub_1(v104);
  v105 = (void *)sub_140001650(13, 1);
  if ( !v105 )
  {
    v243 = 1;
    v242 = 1;
    v241 = 1;
    v240 = 1;
    sub_141938D2B(1, 13);
  }
  qmemcpy(v105, "project-order", 13);
  *(_QWORD *)&v200 = 13;
  *((_QWORD *)&v200 + 1) = v105;
  *(_QWORD *)v201 = 13;
  *(_QWORD *)v204 = v177;
  *(_QWORD *)&v204[8] = v177;
  *(_QWORD *)&v204[16] = v176;
  *(_QWORD *)&v204[24] = v177 + 24LL * *((_QWORD *)&v177 + 1);
  v211 = 1;
  sub_1403ECE70((unsigned __int64 *)&v195, v204);
  *(_OWORD *)&v204[8] = *(_OWORD *)v195.m256i_i8;
  *(_QWORD *)&v204[24] = v195.m256i_i64[2];
  v204[0] = 4;
  v211 = 0;
  sub_140E72AA0(&v195, &v186, &v200, v204);
  if ( v195.m256i_i8[0] != -1 )
  {
    v243 = 1;
    v242 = 1;
    v241 = 0;
    v240 = 1;
    sub_14002F9D0(&v195);
  }
  nullsub_1(v106);
  v107 = sub_140001650(22, 1);
  if ( !v107 )
  {
    v243 = 1;
    v242 = 1;
    v241 = 0;
    v240 = 1;
    sub_141938D2B(1, 22);
  }
  *(_OWORD *)v107 = *(_OWORD *)aActiveWorkspac;
  *(_QWORD *)(v107 + 14) = 0x73746F6F722D6563LL;
  *(_QWORD *)&v200 = 22;
  *((_QWORD *)&v200 + 1) = v107;
  *(_QWORD *)v201 = 22;
  *(_QWORD *)v204 = *((_QWORD *)&v162 + 1);
  *(_QWORD *)&v204[8] = *((_QWORD *)&v162 + 1);
  *(_QWORD *)&v204[16] = v162;
  *(_QWORD *)&v204[24] = *((_QWORD *)&v162 + 1) + 24 * v163;
  v210 = 1;
  sub_1403ECE70((unsigned __int64 *)&v195, v204);
  *(_OWORD *)&v204[8] = *(_OWORD *)v195.m256i_i8;
  *(_QWORD *)&v204[24] = v195.m256i_i64[2];
  v204[0] = 4;
  v210 = 0;
  sub_140E72AA0(&v195, &v186, &v200, v204);
  if ( v195.m256i_i8[0] != -1 )
  {
    v243 = 1;
    v242 = 0;
    v241 = 0;
    v240 = 1;
    sub_14002F9D0(&v195);
  }
  nullsub_1(v108);
  v109 = (void *)sub_140001650(27, 1);
  if ( !v109 )
  {
    v243 = 1;
    v242 = 0;
    v241 = 0;
    v240 = 1;
    sub_141938D2B(1, 27);
  }
  qmemcpy(v109, "thread-workspace-root-hints", 27);
  v183.m256i_i64[0] = 27;
  v183.m256i_i64[1] = (__int64)v109;
  v183.m256i_i64[2] = 27;
  v111 = 0;
  v112 = (_BYTE *)v192;
  if ( (_QWORD)v192 )
    v112 = v193;
  LOBYTE(v111) = (_QWORD)v192 != 0;
  *(_OWORD *)v204 = v111;
  *(_OWORD *)&v204[16] = v192;
  *(_OWORD *)&v204[32] = v111;
  *(_OWORD *)&v204[48] = v192;
  *(_QWORD *)&v204[64] = v112;
  v209 = 1;
  LOBYTE(v110) = (_QWORD)v192 != 0;
  sub_140E16F20(&v200, v204, v112, v110);
  v195.m256i_i64[3] = *(_QWORD *)v201;
  *(_OWORD *)&v195.m256i_u64[1] = v200;
  v195.m256i_i8[0] = 5;
  v209 = 0;
  sub_140E72AA0(v204, &v186, &v183, &v195);
  if ( v204[0] != 0xFF )
  {
    v243 = 1;
    v242 = 0;
    v241 = 0;
    v240 = 1;
    sub_14002F9D0(v204);
  }
  *(_QWORD *)&v204[24] = v187;
  *(_OWORD *)&v204[8] = v186;
  v204[0] = 5;
  sub_140E99260(&v195, v204);
  v113 = v195.m256i_i64[1];
  if ( v195.m256i_i64[0] == -1 )
  {
    v118 = v190;
    v190[1] = 3;
    v118[2] = v113;
    a1 = v118;
    *v118 = -1;
    v243 = 0;
    v242 = 0;
    v241 = 0;
    v240 = 1;
    sub_14002F9D0(v204);
    v119 = v202;
    goto LABEL_203;
  }
  v208 = *(_OWORD *)v195.m256i_i8;
  v114 = v195.m256i_i64[2];
  v235 = 1;
  sub_14002F9D0(v204);
  v115 = v155;
  v116 = v156;
  v235 = 1;
  if ( (sub_140222E10(v155, v156, *((_QWORD *)&v208 + 1), v114) & 1) != 0 )
  {
    a1 = v190;
    v190[1] = 2;
    a1[2] = v117;
    *a1 = -1;
    goto LABEL_201;
  }
  v235 = 1;
  sub_1401BD710(v117, v117);
  v235 = 1;
  sub_14169D480(v204, v115, v116);
  v120 = *(_QWORD *)&v204[8];
  if ( *(_QWORD *)v204 == -1 )
  {
    a1 = v190;
    v190[1] = 2;
    a1[2] = v120;
    *a1 = -1;
LABEL_201:
    v119 = v202;
    if ( (_QWORD)v208 )
      sub_140001660(*((_QWORD *)&v208 + 1), v208, 1);
LABEL_203:
    v224 = 0;
    v223 = 0;
    v222 = 0;
    v221 = 0;
    v220 = 1;
    sub_140DF2C10((__int64 *)&v192);
    if ( (unsigned __int64)(v191 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v180, v191, 1);
    v124 = (_QWORD *)(v119 + 8);
    do
    {
      v125 = *(v124 - 1);
      if ( v125 )
        sub_140001660(*v124, v125, 1);
      v124 += 3;
      --v46;
    }
    while ( v46 );
    if ( v178 )
      sub_140001660(v119, 24 * v178, 8);
    v66 = 0;
    v67 = *((_QWORD *)&v166 + 1);
    v68 = v166;
    if ( *((_QWORD *)&v166 + 1) )
    {
LABEL_212:
      v126 = (_QWORD *)(v68 + 8);
      do
      {
        v127 = *(v126 - 1);
        if ( v127 )
          sub_140001660(*v126, v127, 1);
        v126 += 3;
        --v67;
      }
      while ( v67 );
    }
LABEL_216:
    if ( v165.m256i_i64[3] )
      sub_140001660(v68, 24 * v165.m256i_i64[3], 8);
    if ( v173 )
    {
      v128 = v175;
      *(_QWORD *)&v204[8] = 0;
      *(_QWORD *)&v204[16] = v173;
      *(_QWORD *)&v204[24] = v199;
      *(_QWORD *)&v204[40] = 0;
      *(_QWORD *)&v204[48] = v173;
      *(_QWORD *)&v204[56] = v199;
      v129 = 1;
    }
    else
    {
      v129 = 0;
      v128 = 0;
    }
    *(_QWORD *)v204 = v129;
    *(_QWORD *)&v204[32] = v129;
    *(_QWORD *)&v204[64] = v128;
    v238 = v66;
    sub_140E828B0(&v165, v204);
    for ( m = v165.m256i_i64[0]; v165.m256i_i64[0]; m = v165.m256i_i64[0] )
    {
      v131 = *(_QWORD *)(m + 24 * v165.m256i_i64[2] + 8);
      if ( v131 )
        sub_140001660(*(_QWORD *)(m + 24 * v165.m256i_i64[2] + 16), v131, 1);
      v238 = v66;
      sub_140E828B0(&v165, v204);
    }
    if ( !v66 )
    {
LABEL_230:
      v134 = v154;
      if ( v154 )
      {
        v135 = v155;
LABEL_232:
        sub_140001660(v135, v134, 1);
        return a1;
      }
      return a1;
    }
LABEL_226:
    if ( (_QWORD)v186 )
    {
      v132 = v187;
      *(_QWORD *)&v204[8] = 0;
      *(_OWORD *)&v204[16] = v186;
      *(_QWORD *)&v204[40] = 0;
      *(_OWORD *)&v204[48] = v186;
      v133 = 1;
    }
    else
    {
      v133 = 0;
      v132 = 0;
    }
    *(_QWORD *)v204 = v133;
    *(_QWORD *)&v204[32] = v133;
    *(_QWORD *)&v204[64] = v132;
    sub_140DF2FD0(v204);
    goto LABEL_230;
  }
  v161 = *(_QWORD *)&v204[8];
  v198 = *(_QWORD *)v204;
  *(_OWORD *)v204 = *(_OWORD *)&v204[8];
  *(_OWORD *)&v204[16] = 0;
  sub_14062F970(&v195, v204);
  if ( v195.m256i_i8[0] == -1 )
  {
    v123 = v195.m256i_i64[1];
    a1 = v190;
    v190[1] = 3;
    a1[2] = v123;
    *a1 = -1;
    if ( v198 )
      sub_140001660(v161, v198, 1);
    goto LABEL_201;
  }
  v200 = *(_OWORD *)v195.m256i_i8;
  *(_OWORD *)v201 = *(_OWORD *)&v195.m256i_u64[2];
  sub_14002F9D0(&v200);
  if ( v198 )
    sub_140001660(v161, v198, 1);
  v121 = v193;
  sub_140F63010((__int64)&v195, v98);
  v122 = v202;
  v183.m256i_i64[0] = v46;
  *(_QWORD *)&v200 = v193;
  if ( v203 )
  {
    *(_QWORD *)v204 = &v157;
    *(_QWORD *)&v204[8] = sub_1416BCB10;
    *(_QWORD *)&v204[16] = &v183;
    *(_QWORD *)&v204[24] = sub_1416BCB10;
    *(_QWORD *)&v204[32] = &v200;
    *(_QWORD *)&v204[40] = sub_1416BCB10;
    sub_1416ABFD0(&v149, &unk_141A63213, v204);
  }
  else
  {
    *(_QWORD *)v204 = &v183;
    *(_QWORD *)&v204[8] = sub_1416BCB10;
    *(_QWORD *)&v204[16] = &v200;
    *(_QWORD *)&v204[24] = sub_1416BCB10;
    sub_1416ABFD0(&v149, &unk_141A631DB, v204);
  }
  a1 = v190;
  *(_OWORD *)(v190 + 5) = v148;
  v137 = *(_OWORD *)&v195.m256i_u64[2];
  *(_OWORD *)(a1 + 7) = *(_OWORD *)v195.m256i_i8;
  *(_OWORD *)(a1 + 9) = v137;
  *(_OWORD *)a1 = v149;
  a1[2] = v150;
  a1[3] = v191;
  a1[4] = v180;
  a1[11] = v46;
  a1[12] = (__int64)v121;
  a1[13] = v203;
  *((_BYTE *)a1 + 112) = 1;
  if ( (_QWORD)v208 )
    sub_140001660(*((_QWORD *)&v208 + 1), v208, 1);
  v224 = 0;
  v223 = 0;
  v222 = 0;
  v221 = 0;
  v220 = 0;
  sub_140DF2C10((__int64 *)&v192);
  v138 = (_QWORD *)(v122 + 8);
  do
  {
    v139 = *(v138 - 1);
    if ( v139 )
      sub_140001660(*v138, v139, 1);
    v138 += 3;
    --v46;
  }
  while ( v46 );
  if ( v178 )
    sub_140001660(v122, 24 * v178, 8);
  v140 = *((_QWORD *)&v166 + 1);
  v141 = v166;
  if ( *((_QWORD *)&v166 + 1) )
  {
    v142 = (_QWORD *)(v166 + 8);
    do
    {
      v143 = *(v142 - 1);
      if ( v143 )
        sub_140001660(*v142, v143, 1);
      v142 += 3;
      --v140;
    }
    while ( v140 );
  }
  if ( v165.m256i_i64[3] )
    sub_140001660(v141, 24 * v165.m256i_i64[3], 8);
  if ( v160 )
  {
    v144 = v175;
    *(_QWORD *)&v204[8] = 0;
    *(_QWORD *)&v204[16] = v160;
    *(_QWORD *)&v204[24] = v199;
    *(_QWORD *)&v204[40] = 0;
    *(_QWORD *)&v204[48] = v160;
    *(_QWORD *)&v204[56] = v199;
    v145 = 1;
  }
  else
  {
    v145 = 0;
    v144 = 0;
  }
  *(_QWORD *)v204 = v145;
  *(_QWORD *)&v204[32] = v145;
  *(_QWORD *)&v204[64] = v144;
  v238 = 0;
  sub_140E828B0(&v165, v204);
  for ( n = v165.m256i_i64[0]; v165.m256i_i64[0]; n = v165.m256i_i64[0] )
  {
    v147 = *(_QWORD *)(n + 24 * v165.m256i_i64[2] + 8);
    if ( v147 )
      sub_140001660(*(_QWORD *)(n + 24 * v165.m256i_i64[2] + 16), v147, 1);
    v238 = 0;
    sub_140E828B0(&v165, v204);
  }
  v134 = v154;
  if ( v154 )
  {
    v135 = v115;
    goto LABEL_232;
  }
  return a1;
}
