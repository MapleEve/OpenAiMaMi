// win 1.2.7 latest-exe | module src/core/relay/codex_project_state.rs | ea 0x1409f3150 | successor of pre-update 0x140f67a80 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_1409F3150(__int64 a1, __int64 a2)
{
  __int8 v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  int v14; // eax
  char v15; // cl
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 j; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r14
  __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 i; // rax
  __int64 v43; // rdx
  __int64 *v44; // rax
  __int64 *v45; // rsi
  __int64 *v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // r14
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int32 v57; // r13d
  __int64 v58; // r14
  _QWORD *v59; // rax
  __int64 v60; // rdi
  _QWORD *v61; // rbx
  __int64 v62; // rdx
  _OWORD *v63; // rax
  __int128 v64; // xmm0
  __int64 v65; // rcx
  char v66; // si
  __int64 v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // r14
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rcx
  int v76; // edi
  __m128 v77; // xmm6
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  __m128 *v84; // rdi
  __int64 v85; // r15
  __int64 v86; // r13
  __int64 v87; // r14
  unsigned __int64 v88; // r8
  unsigned __int64 v89; // r12
  __int64 v90; // r12
  int v91; // eax
  char v92; // cl
  unsigned __int64 v93; // rax
  __m128 v94; // xmm0
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r12
  __int64 k; // rdi
  __int64 v102; // r15
  __int64 v103; // rdx
  _QWORD *v104; // rax
  void *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  void *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  void *v114; // rax
  __int64 v115; // r9
  unsigned __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // rcx
  __int64 v119; // r14
  __int64 v120; // r12
  __int64 v121; // rbx
  __int64 v122; // rdx
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rdi
  __int64 v127; // rdx
  _QWORD *v128; // rdi
  __int64 v129; // rdx
  _QWORD *v130; // r14
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 m; // rax
  __int64 v135; // rdx
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v141; // rax
  _QWORD *v142; // rcx
  __int64 v143; // rdi
  __int64 v144; // rcx
  __int128 v145; // xmm1
  _QWORD *v146; // rdi
  __int64 v147; // rdx
  __int128 v148; // rdi
  _QWORD *v149; // rbx
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 n; // rax
  __int64 v154; // rdx
  __int128 v155; // [rsp+30h] [rbp-50h]
  __int128 v156; // [rsp+48h] [rbp-38h] BYREF
  __int64 v157; // [rsp+58h] [rbp-28h]
  __int64 v158; // [rsp+60h] [rbp-20h] BYREF
  _OWORD *v159; // [rsp+68h] [rbp-18h]
  __int64 v160; // [rsp+70h] [rbp-10h]
  __int64 v161; // [rsp+78h] [rbp-8h] BYREF
  __int64 v162; // [rsp+80h] [rbp+0h]
  __int64 v163; // [rsp+88h] [rbp+8h]
  __int64 v164; // [rsp+98h] [rbp+18h] BYREF
  __int128 v165; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v166; // [rsp+B0h] [rbp+30h]
  __int64 *v167; // [rsp+B8h] [rbp+38h]
  __int64 v168; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v169; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v170; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v171; // [rsp+E8h] [rbp+68h]
  __m256i v172; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v173; // [rsp+110h] [rbp+90h]
  __int128 v174; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v175; // [rsp+130h] [rbp+B0h]
  __int128 v176; // [rsp+140h] [rbp+C0h]
  __int64 v177; // [rsp+150h] [rbp+D0h]
  unsigned __int8 v178; // [rsp+158h] [rbp+D8h]
  _BYTE v179[7]; // [rsp+159h] [rbp+D9h]
  __int128 v180; // [rsp+160h] [rbp+E0h]
  __int64 v181; // [rsp+170h] [rbp+F0h]
  __int64 v182; // [rsp+178h] [rbp+F8h] BYREF
  __int128 v183; // [rsp+180h] [rbp+100h]
  __int64 v184; // [rsp+190h] [rbp+110h]
  __int64 v185; // [rsp+198h] [rbp+118h]
  char v186; // [rsp+1A7h] [rbp+127h] BYREF
  __int64 v187; // [rsp+1A8h] [rbp+128h]
  __int128 v188; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v189; // [rsp+1C0h] [rbp+140h]
  __m256i v190; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v191; // [rsp+1F0h] [rbp+170h]
  __int128 v192; // [rsp+200h] [rbp+180h]
  _BYTE v193[24]; // [rsp+218h] [rbp+198h] BYREF
  __int128 v194; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v195; // [rsp+240h] [rbp+1C0h]
  __int64 v196; // [rsp+248h] [rbp+1C8h]
  __int128 v197; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v198; // [rsp+260h] [rbp+1E0h]
  __int64 v199; // [rsp+270h] [rbp+1F0h]
  __int64 v200; // [rsp+278h] [rbp+1F8h]
  __int64 v201; // [rsp+280h] [rbp+200h]
  __int64 v202; // [rsp+288h] [rbp+208h]
  __int128 v203; // [rsp+290h] [rbp+210h] BYREF
  __int64 v204; // [rsp+2A0h] [rbp+220h]
  __int64 (__fastcall **v205)(); // [rsp+2A8h] [rbp+228h]
  __m256i v206; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v207; // [rsp+2D0h] [rbp+250h]
  _BYTE v208[31]; // [rsp+2E0h] [rbp+260h]
  __int64 v209; // [rsp+300h] [rbp+280h]
  __int64 v210; // [rsp+308h] [rbp+288h]
  __int128 v211; // [rsp+310h] [rbp+290h] BYREF
  _BYTE v212[48]; // [rsp+320h] [rbp+2A0h]
  __int64 v213; // [rsp+350h] [rbp+2D0h]
  __int64 v214; // [rsp+358h] [rbp+2D8h]
  _BYTE v215[96]; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v216; // [rsp+3C0h] [rbp+340h]
  unsigned __int8 v217; // [rsp+3C8h] [rbp+348h]
  _DWORD v218[3]; // [rsp+3C9h] [rbp+349h]
  char v219; // [rsp+3D8h] [rbp+358h]
  char v220; // [rsp+3D9h] [rbp+359h]
  char v221; // [rsp+3DAh] [rbp+35Ah]
  char v222; // [rsp+3DBh] [rbp+35Bh]
  char v223; // [rsp+3DCh] [rbp+35Ch]
  char v224; // [rsp+3DDh] [rbp+35Dh]
  char v225; // [rsp+3DEh] [rbp+35Eh]
  char v226; // [rsp+3DFh] [rbp+35Fh]
  char v227; // [rsp+3E0h] [rbp+360h]
  char v228; // [rsp+3E1h] [rbp+361h]
  char v229; // [rsp+3E2h] [rbp+362h]
  char v230; // [rsp+3E3h] [rbp+363h]
  char v231; // [rsp+3E4h] [rbp+364h]
  char v232; // [rsp+3E5h] [rbp+365h]
  char v233; // [rsp+3E6h] [rbp+366h]
  char v234; // [rsp+3E7h] [rbp+367h]
  char v235; // [rsp+3E8h] [rbp+368h]
  char v236; // [rsp+3E9h] [rbp+369h]
  char v237; // [rsp+3EAh] [rbp+36Ah]
  char v238; // [rsp+3EBh] [rbp+36Bh]
  char v239; // [rsp+3ECh] [rbp+36Ch]
  char v240; // [rsp+3EDh] [rbp+36Dh]
  char v241; // [rsp+3EEh] [rbp+36Eh]
  char v242; // [rsp+3EFh] [rbp+36Fh]
  char v243; // [rsp+3F0h] [rbp+370h]
  char v244; // [rsp+3F1h] [rbp+371h]
  char v245; // [rsp+3F2h] [rbp+372h]
  char v246; // [rsp+3F3h] [rbp+373h]
  char v247; // [rsp+3F4h] [rbp+374h]
  char v248; // [rsp+3F5h] [rbp+375h]
  char v249; // [rsp+3F6h] [rbp+376h]
  char v250; // [rsp+3F7h] [rbp+377h]
  __int64 v251; // [rsp+3F8h] [rbp+378h]

  v251 = -2;
  v209 = a1;
  sub_1416B18A0((unsigned int)&v161, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (unsigned int)&unk_141A64B6B, 24);
  v200 = v162;
  v201 = v163;
  sub_1416CC1A0(v215, v162, v163);
  v196 = a2;
  if ( *(_QWORD *)v215 == -1 )
  {
    if ( (v215[8] & 3u) - 2 >= 2 && (v215[8] & 3) != 0 )
    {
      v172.m256i_i64[1] = *(_QWORD *)&v215[8] - 1LL;
      v172.m256i_i8[0] = 3;
      sub_1416EBAD0(&v172.m256i_u64[1]);
    }
    goto LABEL_28;
  }
  v213 = *(_QWORD *)v215;
  *(_OWORD *)v215 = *(_OWORD *)&v215[8];
  *(_OWORD *)&v215[16] = 0;
  v210 = *(_QWORD *)v215;
  *(_OWORD *)&v215[32] = *(_OWORD *)v215;
  sub_140D8B500(&v172, (__int128 *)v215);
  v3 = v172.m256i_i8[0];
  if ( v172.m256i_i8[0] == -1 )
  {
    sub_140032F30(&v172.m256i_u64[1]);
    if ( v213 )
      sub_140001660(v210, v213, 1);
    goto LABEL_28;
  }
  v206 = v172;
  if ( v172.m256i_i8[0] == 5 )
  {
    *(_QWORD *)v212 = v206.m256i_i64[3];
    v211 = *(_OWORD *)&v206.m256i_u64[1];
  }
  if ( v213 )
    sub_140001660(v210, v213, 1);
  if ( v3 != 5 )
  {
    sub_140032FF0(&v206);
LABEL_28:
    *(_QWORD *)&v188 = 0;
    v189 = 0;
LABEL_29:
    *(_QWORD *)&v180 = 0;
    v181 = 0;
    goto LABEL_30;
  }
  v188 = v211;
  v189 = *(_QWORD *)v212;
  v4 = v211;
  if ( !(_QWORD)v211 )
    goto LABEL_29;
  v210 = *((_QWORD *)&v188 + 1);
LABEL_10:
  v5 = v4 + 360;
  v6 = *(unsigned __int16 *)(v4 + 626);
  v213 = v4;
  v7 = (_QWORD *)(v4 - 8);
  v214 = v6;
  v8 = 3LL * (unsigned int)(8 * v6);
  v9 = -1;
  do
  {
    if ( !v8 )
    {
      v9 = v214;
LABEL_20:
      if ( !v210 )
        goto LABEL_29;
      --v210;
      v4 = *(_QWORD *)(v213 + 8 * v9 + 632);
      goto LABEL_10;
    }
    v10 = v5 + 24;
    v11 = *(_QWORD *)(v5 + 16);
    v12 = v11 - 22;
    if ( v11 >= 0x16 )
      v11 = 22;
    v13 = -(__int64)v12;
    v14 = sub_141923B40(aProjectlessThr, *(_QWORD *)(v5 + 8), v11);
    if ( v14 )
      v13 = v14;
    v15 = (v13 > 0) - (v13 < 0);
    v7 += 4;
    ++v9;
    v8 -= 24;
    v5 = v10;
  }
  while ( v15 == 1 );
  if ( v15 )
    goto LABEL_20;
  if ( *((_BYTE *)v7 - 24) != 4 )
    goto LABEL_29;
  v32 = *(v7 - 1);
  v33 = v32 + 32LL * *v7;
  v246 = 1;
  sub_140865610(v215, v32, v33);
  v181 = *(_QWORD *)&v215[16];
  v180 = *(_OWORD *)v215;
LABEL_30:
  v16 = v196;
  v240 = 1;
  sub_1409EE930((__int64)v215, v196);
  if ( *(_QWORD *)v215 == -1 )
  {
    v22 = v180;
    v18 = 0;
    goto LABEL_90;
  }
  v213 = *(_QWORD *)v215;
  v17 = *(_QWORD *)&v215[16];
  v210 = *(_QWORD *)&v215[8];
  sub_1409016A0(v215, *(_QWORD *)&v215[8], *(_QWORD *)&v215[16], 32770);
  if ( v217 == 0xFF )
  {
    *(_OWORD *)&v212[32] = *(_OWORD *)&v215[48];
    *(_OWORD *)&v212[16] = *(_OWORD *)&v215[32];
    *(_OWORD *)v212 = *(_OWORD *)&v215[16];
    v211 = *(_OWORD *)v215;
    *(_QWORD *)v193 = &v211;
    *(_QWORD *)&v193[8] = sub_14142D4D0;
    sub_1416DAFA0(&v190, &unk_141A5A380, v193);
    v18 = v190.m256i_i64[0];
    LOBYTE(v19) = v190.m256i_i8[8];
    *(_QWORD *)v193 = *(__int64 *)((char *)&v190.m256i_i64[1] + 1);
    *(_QWORD *)&v193[7] = v190.m256i_i64[2];
    sub_140904700(&v211);
    *(_QWORD *)&v197 = *(_QWORD *)v193;
    *(_QWORD *)((char *)&v197 + 7) = *(_QWORD *)&v193[7];
    *(_QWORD *)&v203 = v197;
    *(_QWORD *)((char *)&v203 + 7) = *(_QWORD *)&v193[7];
    v206.m256i_i64[0] = v203;
    *(__int64 *)((char *)v206.m256i_i64 + 7) = *(_QWORD *)&v193[7];
    v23 = 10;
    goto LABEL_40;
  }
  *(_QWORD *)&v197 = *(_QWORD *)&v215[17];
  *(_QWORD *)((char *)&v197 + 7) = *(_QWORD *)&v215[24];
  v173 = *(_OWORD *)&v215[32];
  v174 = *(_OWORD *)&v215[48];
  v175 = *(_OWORD *)&v215[64];
  v176 = *(_OWORD *)&v215[80];
  *(_DWORD *)v179 = v218[0];
  *(_DWORD *)&v179[3] = *(_DWORD *)((char *)v218 + 3);
  *(_QWORD *)((char *)&v203 + 7) = *(_QWORD *)&v215[24];
  *(_QWORD *)&v203 = v197;
  v172.m256i_i8[16] = v215[16];
  v172.m256i_i64[3] = *(_QWORD *)((char *)&v203 + 7);
  *(__int64 *)((char *)&v172.m256i_i64[2] + 1) = v197;
  *(_OWORD *)v172.m256i_i8 = *(_OWORD *)v215;
  v177 = v216;
  v178 = v217;
  sub_141431450(&v211, &v172, 0, 500000000);
  if ( (_QWORD)v211 == -1 )
  {
    sub_1409EF610((__int64)&v211, (__int64)&v172);
    if ( (_QWORD)v211 == -1 )
    {
      v34 = *((_QWORD *)&v211 + 1);
      *(_QWORD *)&v197 = *(_QWORD *)&v212[1];
      *(_QWORD *)((char *)&v197 + 7) = *(_QWORD *)&v212[8];
      *(_QWORD *)&v203 = v197;
      *(_QWORD *)((char *)&v203 + 7) = *(_QWORD *)&v212[8];
      v169 = *((_QWORD *)&v211 + 1);
      LOBYTE(v170) = v212[0];
      *(_QWORD *)((char *)&v170 + 1) = v203;
      *((_QWORD *)&v170 + 1) = *(_QWORD *)&v212[8];
      v35 = v170;
      v171 = v180;
      sub_1409EFBB0((unsigned int)&v211, (unsigned int)&v172, DWORD2(v211), v170, v180, *((__int64 *)&v180 + 1));
      if ( (_QWORD)v211 == -1 )
      {
        v36 = *((_QWORD *)&v211 + 1);
        *(_QWORD *)&v197 = *(_QWORD *)&v212[1];
        *(_QWORD *)((char *)&v197 + 7) = *(_QWORD *)&v212[8];
        *(_QWORD *)&v203 = v197;
        *(_QWORD *)((char *)&v203 + 7) = *(_QWORD *)&v212[8];
        v182 = *((_QWORD *)&v211 + 1);
        LOBYTE(v183) = v212[0];
        *(_QWORD *)((char *)&v183 + 1) = v203;
        *((_QWORD *)&v183 + 1) = *(_QWORD *)&v212[8];
        v19 = *(_QWORD *)&v212[8];
        if ( *(_QWORD *)&v212[8] )
        {
          v37 = v178;
          v38 = *(__int64 *)((char *)&off_141A672A8 + v37 * 8);
          v39 = qword_141A672C0[v37];
          v241 = 1;
          sub_141431530(v215, &v172, v38, v39);
          if ( *(_QWORD *)v215 == -1 )
          {
            v214 = v34;
            v168 = 0;
            v44 = (__int64 *)v183;
            v45 = (__int64 *)(v183 + 48 * v19);
            *(_QWORD *)&v165 = v183;
            *((_QWORD *)&v165 + 1) = v183;
            v166 = v36;
            v167 = v45;
            v18 = 0;
            while ( v44 != v45 )
            {
              v46 = v44 + 6;
              *((_QWORD *)&v165 + 1) = v44 + 6;
              v47 = *v44;
              v199 = v44[5];
              v198 = *(_OWORD *)(v44 + 3);
              v197 = *(_OWORD *)(v44 + 1);
              if ( v47 == -1 )
                break;
              *(_QWORD *)v193 = v47;
              v195 = v199;
              v194 = v198;
              *(_OWORD *)&v193[8] = v197;
              *(_QWORD *)&v203 = &v194;
              *((_QWORD *)&v203 + 1) = &off_141A62D10;
              v204 = (__int64)v193;
              v205 = &off_141A62D10;
              sub_140901E00(
                (unsigned int)&v190,
                (unsigned int)&v172,
                (unsigned int)aUpdateThreadsS_11,
                68,
                (__int64)&v203,
                2);
              if ( v190.m256i_i64[0] != -1 )
              {
                *(_OWORD *)&v212[32] = v192;
                *(_OWORD *)&v212[16] = v191;
                *(_OWORD *)v212 = *(_OWORD *)&v190.m256i_u64[2];
                v211 = *(_OWORD *)v190.m256i_i8;
                sub_14092F760(v215, &v211);
                v18 = *(_QWORD *)&v215[8];
                v23 = *(_QWORD *)v215;
                LOBYTE(v19) = v215[16];
                v206 = *(__m256i *)&v215[17];
                v207 = *(_OWORD *)&v215[49];
                *(_OWORD *)v208 = *(_OWORD *)&v215[65];
                *(_OWORD *)&v208[15] = *(_OWORD *)&v215[80];
                sub_140031C30(v193);
                sub_1401A5D80(&v165);
                v241 = 0;
                sub_140904470(&v172);
                v34 = v214;
                goto LABEL_60;
              }
              v18 += v190.m256i_i64[1];
              v168 = v18;
              if ( *(_QWORD *)v193 )
                sub_140001660(*(_QWORD *)&v193[8], *(_QWORD *)v193, 1);
              if ( (_QWORD)v194 )
                sub_140001660(*((_QWORD *)&v194 + 1), v194, 1);
              v44 = v46;
            }
            sub_1401A5D80(&v165);
            v243 = 0;
            sub_14092F940(&v190, &v172);
            v16 = v196;
            v34 = v214;
            if ( v190.m256i_i64[0] != -1 )
            {
              *(_OWORD *)&v212[32] = v192;
              *(_OWORD *)&v212[16] = v191;
              *(_OWORD *)v212 = *(_OWORD *)&v190.m256i_u64[2];
              v211 = *(_OWORD *)v190.m256i_i8;
              v243 = 0;
              sub_14092F7F0(v215, &v211);
              v18 = *(_QWORD *)&v215[8];
              v23 = *(_QWORD *)v215;
              LOBYTE(v19) = v215[16];
              v206 = *(__m256i *)&v215[17];
              v207 = *(_OWORD *)&v215[49];
              *(_OWORD *)v208 = *(_OWORD *)&v215[65];
              *(_OWORD *)&v208[15] = *(_OWORD *)&v215[80];
              goto LABEL_60;
            }
            if ( v18 )
            {
              v243 = 0;
              sub_141431530(&v211, &v172, aPragmaWalCheck_1, 28);
              if ( (_QWORD)v211 != -1 )
              {
                *(_OWORD *)&v215[48] = *(_OWORD *)&v212[32];
                *(_OWORD *)&v215[32] = *(_OWORD *)&v212[16];
                *(_OWORD *)&v215[16] = *(_OWORD *)v212;
                *(_OWORD *)v215 = v211;
                if ( *(_QWORD *)off_14223FF10 >= 2u )
                {
                  *(_QWORD *)v193 = v215;
                  *(_QWORD *)&v193[8] = sub_14142D4D0;
                  v190.m256i_i64[0] = (__int64)aCodexmateLibCo_38;
                  v190.m256i_i64[1] = 47;
                  v190.m256i_i64[2] = (__int64)aCodexmateLibCo_38;
                  v190.m256i_i64[3] = 47;
                  *(_QWORD *)&v191 = &off_141A64F00;
                  sub_140AF72B0(&unk_141A64EB3, v193, 2, &v190);
                }
                v243 = 0;
                sub_140904700(v215);
              }
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                v190.m256i_i64[0] = v210;
                v190.m256i_i64[1] = v17;
                *(_QWORD *)&v211 = &v168;
                *((_QWORD *)&v211 + 1) = sub_1416EBAE0;
                *(_QWORD *)v212 = &v190;
                *(_QWORD *)&v212[8] = sub_1416CE600;
                *(_QWORD *)v215 = aCodexmateLibCo_38;
                *(_QWORD *)&v215[8] = 47;
                *(_QWORD *)&v215[16] = aCodexmateLibCo_38;
                *(_QWORD *)&v215[24] = 47;
                *(_QWORD *)&v215[32] = &off_141A64F78;
                v243 = 0;
                sub_140AF72B0(&unk_141A64F18, &v211, 2, v215);
                v18 = v168;
              }
            }
            else
            {
              v18 = 0;
            }
            sub_140A94B00(&v169);
            sub_140903740(&v172);
            v22 = v171;
            if ( v213 )
              sub_140001660(v210, v213, 1);
            goto LABEL_90;
          }
          *(_OWORD *)&v212[32] = *(_OWORD *)&v215[48];
          *(_OWORD *)&v212[17] = *(_OWORD *)&v215[33];
          *(_OWORD *)&v212[1] = *(_OWORD *)&v215[17];
          v211 = *(_OWORD *)v215;
          v212[0] = v215[16];
          v241 = 1;
          sub_14092F6D0(v215, &v211);
          v18 = *(_QWORD *)&v215[8];
          v23 = *(_QWORD *)v215;
          LOBYTE(v19) = v215[16];
          v206 = *(__m256i *)&v215[17];
          v207 = *(_OWORD *)&v215[49];
          *(_OWORD *)v208 = *(_OWORD *)&v215[65];
          *(_OWORD *)&v208[15] = *(_OWORD *)&v215[80];
        }
        else
        {
          v23 = -1;
          v18 = 0;
        }
        sub_140029260(&v182);
      }
      else
      {
        *(_OWORD *)&v215[48] = *(_OWORD *)&v212[32];
        *(_OWORD *)&v215[32] = *(_OWORD *)&v212[16];
        *(_OWORD *)&v215[16] = *(_OWORD *)v212;
        *(_OWORD *)v215 = v211;
        *(_QWORD *)v193 = v215;
        *(_QWORD *)&v193[8] = sub_14142D4D0;
        sub_1416DAFA0(&v190, &unk_141A5A3B2, v193);
        v18 = v190.m256i_i64[0];
        LOBYTE(v19) = v190.m256i_i8[8];
        *(_QWORD *)v193 = *(__int64 *)((char *)&v190.m256i_i64[1] + 1);
        *(_QWORD *)&v193[7] = v190.m256i_i64[2];
        sub_140904700(v215);
        *(_QWORD *)&v197 = *(_QWORD *)v193;
        *(_QWORD *)((char *)&v197 + 7) = *(_QWORD *)&v193[7];
        *(_QWORD *)&v203 = v197;
        *(_QWORD *)((char *)&v203 + 7) = *(_QWORD *)&v193[7];
        v206.m256i_i64[0] = v203;
        *(__int64 *)((char *)v206.m256i_i64 + 7) = *(_QWORD *)&v193[7];
        v23 = 10;
      }
LABEL_60:
      if ( v34 )
      {
        v40 = *((_QWORD *)&v170 + 1);
        *(_QWORD *)&v215[8] = 0;
        *(_QWORD *)&v215[16] = v34;
        *(_QWORD *)&v215[24] = v35;
        *(_QWORD *)&v215[40] = 0;
        *(_QWORD *)&v215[48] = v34;
        *(_QWORD *)&v215[56] = v35;
        v41 = 1;
      }
      else
      {
        v41 = 0;
        v40 = 0;
      }
      v16 = v196;
      *(_QWORD *)v215 = v41;
      *(_QWORD *)&v215[32] = v41;
      *(_QWORD *)&v215[64] = v40;
      sub_140A6FD50(&v211, v215);
      for ( i = v211; (_QWORD)v211; i = v211 )
      {
        v43 = *(_QWORD *)(i + 24LL * *(_QWORD *)v212 + 8);
        if ( v43 )
          sub_140001660(*(_QWORD *)(i + 24LL * *(_QWORD *)v212 + 16), v43, 1);
        sub_140A6FD50(&v211, v215);
      }
      goto LABEL_39;
    }
    *(_OWORD *)&v215[48] = *(_OWORD *)&v212[32];
    *(_OWORD *)&v215[32] = *(_OWORD *)&v212[16];
    *(_OWORD *)&v215[16] = *(_OWORD *)v212;
    *(_OWORD *)v215 = v211;
    *(_QWORD *)v193 = v215;
    *(_QWORD *)&v193[8] = sub_14142D4D0;
    sub_1416DAFA0(&v190, &unk_141A5A39A, v193);
    v18 = v190.m256i_i64[0];
    LOBYTE(v19) = v190.m256i_i8[8];
    *(_QWORD *)v193 = *(__int64 *)((char *)&v190.m256i_i64[1] + 1);
    *(_QWORD *)&v193[7] = v190.m256i_i64[2];
    sub_140904700(v215);
    *(_QWORD *)&v197 = *(_QWORD *)v193;
    *(_QWORD *)((char *)&v197 + 7) = *(_QWORD *)&v193[7];
    *(_QWORD *)&v203 = v197;
    *(_QWORD *)((char *)&v203 + 7) = *(_QWORD *)&v193[7];
    v20 = v203;
    v21 = *(_QWORD *)&v193[7];
  }
  else
  {
    *(_OWORD *)&v215[48] = *(_OWORD *)&v212[32];
    *(_OWORD *)&v215[32] = *(_OWORD *)&v212[16];
    *(_OWORD *)&v215[16] = *(_OWORD *)v212;
    *(_OWORD *)v215 = v211;
    *(_QWORD *)v193 = v215;
    *(_QWORD *)&v193[8] = sub_14142D4D0;
    sub_1416DAFA0(&v190, &unk_141A5A429, v193);
    v18 = v190.m256i_i64[0];
    LOBYTE(v19) = v190.m256i_i8[8];
    *(_QWORD *)v193 = *(__int64 *)((char *)&v190.m256i_i64[1] + 1);
    *(_QWORD *)&v193[7] = v190.m256i_i64[2];
    sub_140904700(v215);
    v20 = *(_QWORD *)v193;
    v21 = *(_QWORD *)&v193[7];
  }
  v206.m256i_i64[0] = v20;
  *(__int64 *)((char *)v206.m256i_i64 + 7) = v21;
  v23 = 10;
LABEL_39:
  sub_140903740(&v172);
LABEL_40:
  if ( v213 )
    sub_140001660(v210, v213, 1);
  v22 = v180;
  if ( v23 != -1 )
  {
    v24 = v209;
    *(_OWORD *)(v209 + 88) = *(_OWORD *)&v208[15];
    v25 = *(_OWORD *)v206.m256i_i8;
    v26 = *(_OWORD *)&v206.m256i_u64[2];
    v27 = v207;
    *(_OWORD *)(v24 + 73) = *(_OWORD *)v208;
    *(_OWORD *)(v24 + 57) = v27;
    *(_OWORD *)(v24 + 41) = v26;
    *(_OWORD *)(v24 + 25) = v25;
    *(_QWORD *)(v24 + 8) = v23;
    *(_QWORD *)(v24 + 16) = v18;
    *(_BYTE *)(v24 + 24) = v19;
    *(_QWORD *)v24 = -1;
    if ( v22 )
    {
      v28 = v181;
      *(_QWORD *)&v215[8] = 0;
      *(_QWORD *)&v215[16] = v22;
      *(_QWORD *)&v215[24] = *((_QWORD *)&v180 + 1);
      *(_QWORD *)&v215[40] = 0;
      *(_QWORD *)&v215[48] = v22;
      *(_QWORD *)&v215[56] = *((_QWORD *)&v180 + 1);
      v29 = 1;
    }
    else
    {
      v29 = 0;
      v28 = 0;
    }
    *(_QWORD *)v215 = v29;
    *(_QWORD *)&v215[32] = v29;
    *(_QWORD *)&v215[64] = v28;
    v246 = 1;
    sub_140A6FD50(&v172, v215);
    for ( j = v172.m256i_i64[0]; v172.m256i_i64[0]; j = v172.m256i_i64[0] )
    {
      v31 = *(_QWORD *)(j + 24 * v172.m256i_i64[2] + 8);
      if ( v31 )
        sub_140001660(*(_QWORD *)(j + 24 * v172.m256i_i64[2] + 16), v31, 1);
      v246 = 1;
      sub_140A6FD50(&v172, v215);
    }
    goto LABEL_229;
  }
LABEL_90:
  v164 = v18;
  v240 = 1;
  v210 = *((_QWORD *)&v180 + 1);
  sub_1409F13E0(&v172, v16, v22);
  v213 = v18;
  v226 = 1;
  v225 = 1;
  v224 = 1;
  string_array_from_map((unsigned int)v215, v188, DWORD2(v188), (unsigned int)aElectronSavedW, 30);
  v226 = 1;
  v225 = 1;
  v224 = 0;
  sub_1409EE3E0(&v182, v215, &v172);
  v48 = *((_QWORD *)&v183 + 1);
  if ( !*((_QWORD *)&v183 + 1) )
  {
    v54 = *((_QWORD *)&v175 + 1);
    v245 = 1;
    v244 = 1;
    sub_1409EE930((__int64)v215, v16);
    if ( v213 )
    {
      v206.m256i_i64[0] = (__int64)&v164;
      v206.m256i_i64[1] = (__int64)sub_1416EBAE0;
      sub_1416DAFA0(&v158, &unk_141A6502D, &v206);
    }
    else
    {
      nullsub_1(v56, v55);
      v63 = (_OWORD *)sub_140001650(89, 1);
      if ( !v63 )
        sub_14196B2DB(1, 89);
      *(_OWORD *)((char *)v63 + 73) = *(__int128 *)((char *)&xmmword_141A65014 + 9);
      v63[4] = xmmword_141A65014;
      v63[3] = xmmword_141A65004;
      v63[2] = xmmword_141A64FF4;
      v63[1] = xmmword_141A64FE4;
      *v63 = xmmword_141A64FD4;
      v158 = 89;
      v159 = v63;
      v160 = 89;
    }
    v64 = *(_OWORD *)v215;
    v65 = v209;
    *(_OWORD *)(v209 + 72) = *(_OWORD *)&v215[16];
    *(_OWORD *)(v65 + 56) = v64;
    *(_QWORD *)v65 = v158;
    *(_QWORD *)(v65 + 8) = v159;
    *(_QWORD *)(v65 + 16) = v160;
    *(_QWORD *)(v65 + 24) = -1;
    *(_QWORD *)(v65 + 88) = 0;
    *(_QWORD *)(v65 + 96) = v54;
    *(_QWORD *)(v65 + 104) = v213;
    *(_BYTE *)(v65 + 112) = 0;
    v60 = v183;
    goto LABEL_111;
  }
  v171 = v22;
  v49 = *(_QWORD *)(v16 + 776);
  v50 = *(_QWORD *)(v16 + 784);
  v245 = 1;
  v244 = 1;
  sub_1416C49D0(v215, v200, v201);
  if ( *(_DWORD *)v215 != 2 )
  {
    v245 = 1;
    v244 = 1;
    sub_1416B18A0((unsigned int)&v190, v49, v50, (unsigned int)&unk_141A64BA5, 21);
    v215[0] = 1;
    v57 = v190.m256i_i32[4];
    v214 = v190.m256i_i64[1];
    v58 = sub_1416B9760(v215, v190.m256i_i64[1], v190.m256i_i64[2]);
    if ( !v58 )
    {
      sub_1414331D0(&v169);
      v206.m256i_i32[2] = v170;
      v206.m256i_i64[0] = v169;
      sub_141433020(&v197, &v206, 0);
      v76 = v197;
      v77 = (__m128)*(unsigned __int64 *)((char *)&v197 + 4);
      *(_QWORD *)&v211 = 0;
      *((_QWORD *)&v211 + 1) = 1;
      *(_QWORD *)v212 = 0;
      v206.m256i_i64[2] = 1610612768;
      v206.m256i_i64[0] = (__int64)&v211;
      v206.m256i_i64[1] = (__int64)&off_141A55F58;
      if ( (unsigned __int8)sub_141434370((char *)&v170 + 4, &v206) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_4,
          55,
          (unsigned int)&v186,
          (unsigned int)&unk_141A52978,
          (__int64)&off_141A56010);
      *(_QWORD *)&v215[16] = *(_QWORD *)v212;
      *(_OWORD *)v215 = v211;
      *(_DWORD *)&v215[84] = v76;
      *(_DWORD *)&v215[72] = 1;
      _mm_storel_ps((double *)&v215[76], v77);
      *(_DWORD *)&v215[24] = 0;
      *(_QWORD *)&v215[32] = aYMDHMS_0;
      *(_QWORD *)&v215[40] = 13;
      *(_OWORD *)&v215[48] = 8u;
      v215[64] = 0;
      sub_141597890(&v206);
      v197 = *(_OWORD *)v206.m256i_i8;
      v206.m256i_i64[0] = (__int64)v215;
      v206.m256i_i64[1] = (__int64)sub_1408FA270;
      v206.m256i_i64[2] = (__int64)&v197;
      v206.m256i_i64[3] = (__int64)sub_1402230B0;
      sub_1416DAFA0(v193, &unk_141A64BBA, &v206);
      v202 = *(_QWORD *)&v193[8];
      sub_1416B18A0((unsigned int)&v211, v214, v57, *(_DWORD *)&v193[8], *(__int64 *)&v193[16]);
      if ( *(_QWORD *)v193 )
        sub_140001660(v202, *(_QWORD *)v193, 1);
      v185 = *((_QWORD *)&v211 + 1);
      if ( sub_1416C4610(v200, v201) != 1 )
      {
        v187 = v211;
        v203 = *(_OWORD *)v212;
        if ( *(_QWORD *)v215 != -1 && *(_QWORD *)v215 )
          sub_140001660(*(_QWORD *)&v215[8], *(_QWORD *)v215, 1);
        if ( v190.m256i_i64[0] )
          sub_140001660(v214, v190.m256i_i64[0], 1);
        goto LABEL_96;
      }
      v58 = v78;
      if ( (_QWORD)v211 )
        sub_140001660(v185, v211, 1);
      if ( *(_QWORD *)v215 != -1 && *(_QWORD *)v215 )
        sub_140001660(*(_QWORD *)&v215[8], *(_QWORD *)v215, 1);
    }
    if ( v190.m256i_i64[0] )
      sub_140001660(v214, v190.m256i_i64[0], 1);
    v165 = v203;
    v59 = (_QWORD *)v209;
    *(_OWORD *)(v209 + 32) = v203;
    v59[1] = 2;
    v59[2] = v58;
    *v59 = -1;
    v60 = v183;
    v61 = (_QWORD *)(v183 + 8);
    do
    {
      v62 = *(v61 - 1);
      if ( v62 )
        sub_140001660(*v61, v62, 1);
      v61 += 3;
      --v48;
    }
    while ( v48 );
LABEL_111:
    if ( v182 )
      sub_140001660(v60, 24 * v182, 8);
    v66 = 1;
    sub_140A94590((char *)&v174 + 8);
    v67 = *((_QWORD *)&v173 + 1);
    v68 = v173;
    if ( *((_QWORD *)&v173 + 1) )
      goto LABEL_215;
    goto LABEL_219;
  }
  if ( (v215[8] & 3u) - 2 >= 2 && (v215[8] & 3) != 0 )
  {
    --*(_QWORD *)&v215[8];
    v215[0] = 3;
    v245 = 1;
    v244 = 1;
    sub_1416EBAD0(&v215[8]);
  }
  v187 = -1;
LABEL_96:
  v155 = v203;
  v239 = 1;
  v238 = 1;
  v237 = 1;
  string_array_from_map((unsigned int)&v206, v188, DWORD2(v188), (unsigned int)aProjectOrder, 13);
  v223 = 1;
  sub_14022C070(v215, &v182);
  v223 = 0;
  sub_1409EE3E0(&v165, &v206, v215);
  v236 = 1;
  v235 = 1;
  v234 = 1;
  v233 = 1;
  string_array_from_map((unsigned int)&v190, v188, DWORD2(v188), (unsigned int)aActiveWorkspac, 22);
  v51 = v183 + 24 * v48;
  v232 = 1;
  v200 = v183;
  sub_140865970(&v211, v183, v51);
  *(_QWORD *)v215 = v190.m256i_i64[1];
  *(_QWORD *)&v215[8] = v190.m256i_i64[1];
  *(_QWORD *)&v215[16] = v190.m256i_i64[0];
  *(_QWORD *)&v215[24] = v190.m256i_i64[1] + 24 * v190.m256i_i64[2];
  *(_QWORD *)&v215[32] = &v211;
  sub_1401B5A40(&v206, v215);
  v184 = v51;
  if ( v206.m256i_i64[2] )
  {
    v204 = v206.m256i_i64[2];
    v203 = *(_OWORD *)v206.m256i_i8;
    if ( (_QWORD)v211 )
    {
      v52 = *(_QWORD *)v212;
      *(_QWORD *)&v215[8] = 0;
      *(_OWORD *)&v215[16] = v211;
      *(_QWORD *)&v215[40] = 0;
      *(_OWORD *)&v215[48] = v211;
      v53 = 1;
    }
    else
    {
      v53 = 0;
      v52 = 0;
    }
    *(_QWORD *)v215 = v53;
    *(_QWORD *)&v215[32] = v53;
    *(_QWORD *)&v215[64] = v52;
    do
    {
      v232 = 0;
      sub_140A72F10(&v206, v215);
    }
    while ( v206.m256i_i64[0] );
  }
  else
  {
    sub_1416DB410(v215, v200);
    v71 = *(_QWORD *)v215;
    if ( *(_QWORD *)v215 == -1 )
    {
      v74 = 8;
      v75 = 0;
    }
    else
    {
      v72 = *(_QWORD *)&v215[8];
      v73 = *(_QWORD *)&v215[16];
      nullsub_1(v70, v69);
      v74 = sub_140001650(24, 8);
      if ( !v74 )
      {
        v196 = v72;
        v209 = v71;
        sub_14196B2DB(8, 24);
      }
      *(_QWORD *)v74 = v71;
      *(_QWORD *)(v74 + 8) = v72;
      *(_QWORD *)(v74 + 16) = v73;
      v75 = 1;
    }
    *(_QWORD *)&v203 = v75;
    *((_QWORD *)&v203 + 1) = v74;
    v204 = v75;
    if ( v206.m256i_i64[0] )
      sub_140001660(v206.m256i_i64[1], 24 * v206.m256i_i64[0], 8);
    if ( (_QWORD)v211 )
    {
      v79 = *(_QWORD *)v212;
      *(_QWORD *)&v215[8] = 0;
      *(_OWORD *)&v215[16] = v211;
      *(_QWORD *)&v215[40] = 0;
      *(_OWORD *)&v215[48] = v211;
      v80 = 1;
    }
    else
    {
      v80 = 0;
      v79 = 0;
    }
    *(_QWORD *)v215 = v80;
    *(_QWORD *)&v215[32] = v80;
    *(_QWORD *)&v215[64] = v79;
    do
    {
      v232 = 0;
      sub_140A72F10(&v206, v215);
    }
    while ( v206.m256i_i64[0] );
  }
  v81 = v188;
  if ( !(_QWORD)v188 )
    goto LABEL_161;
  v214 = *((_QWORD *)&v188 + 1);
LABEL_146:
  v82 = v81 + 360;
  v83 = *(unsigned __int16 *)(v81 + 626);
  v201 = v81;
  v84 = (__m128 *)(v81 - 16);
  v202 = v83;
  v85 = 3LL * (unsigned int)(8 * v83);
  v86 = -1;
  do
  {
    if ( !v85 )
    {
      v86 = v202;
LABEL_156:
      if ( !v214 )
        goto LABEL_161;
      --v214;
      v81 = *(_QWORD *)(v201 + 8 * v86 + 632);
      goto LABEL_146;
    }
    v87 = v82 + 24;
    v88 = *(_QWORD *)(v82 + 16);
    v89 = v88 - 27;
    if ( v88 >= 0x1B )
      v88 = 27;
    v90 = -(__int64)v89;
    v91 = sub_141923B40(&unk_141A5A490, *(_QWORD *)(v82 + 8), v88);
    if ( v91 )
      v90 = v91;
    v92 = (v90 > 0) - (v90 < 0);
    v84 += 2;
    ++v86;
    v85 -= 24;
    v82 = v87;
  }
  while ( v92 == 1 );
  if ( v92 )
    goto LABEL_156;
  if ( v84[-1].m128_i8[0] == 5 )
  {
    v93 = v84[-1].m128_u64[1];
    if ( v93 )
    {
      v94 = *v84;
      v95 = 1;
    }
    else
    {
      v94 = 0;
      v95 = 0;
    }
    *(_OWORD *)v215 = (unsigned __int64)v95;
    *(_QWORD *)&v215[16] = v93;
    _mm_storel_ps((double *)&v215[24], v94);
    *(_OWORD *)&v215[32] = (unsigned __int64)v95;
    *(_QWORD *)&v215[48] = v93;
    *(__m128 *)&v215[56] = v94;
    v231 = 1;
    v230 = 1;
    v229 = 1;
    v228 = 1;
    v227 = 1;
    sub_140A23BB0(&v206, v215);
    v197 = *(_OWORD *)v206.m256i_i8;
    *(_QWORD *)&v198 = v206.m256i_i64[2];
  }
  else
  {
LABEL_161:
    *(_QWORD *)&v197 = 0;
    *(_QWORD *)&v198 = 0;
  }
  v96 = *((_QWORD *)&v174 + 1);
  if ( *((_QWORD *)&v174 + 1) )
    v96 = *((_QWORD *)&v175 + 1);
  *(_OWORD *)v215 = *((_QWORD *)&v174 + 1) != 0;
  *(_OWORD *)&v215[16] = __PAIR128__(v175, *((unsigned __int64 *)&v174 + 1));
  *(_OWORD *)&v215[32] = *(_OWORD *)v215;
  *(_OWORD *)&v215[48] = __PAIR128__(v175, *((unsigned __int64 *)&v174 + 1));
  *(_QWORD *)&v215[64] = v96;
  while ( 1 )
  {
    sub_140A6F5A0(&v190, v215);
    if ( !v190.m256i_i64[0] )
      break;
    v97 = *(_QWORD *)(v190.m256i_i64[0] + 24 * v190.m256i_i64[2] + 8);
    *(_OWORD *)v206.m256i_i8 = *(_OWORD *)(v190.m256i_i64[0] + 24 * v190.m256i_i64[2] + 16);
    *(_QWORD *)&v207 = *(_QWORD *)(v190.m256i_i64[0] + 24 * v190.m256i_i64[2] + 288);
    *(_OWORD *)&v206.m256i_u64[2] = *(_OWORD *)(v190.m256i_i64[0] + 24 * v190.m256i_i64[2] + 272);
    *(_QWORD *)&v212[16] = v207;
    *(_OWORD *)v212 = *(_OWORD *)&v206.m256i_u64[2];
    v211 = *(_OWORD *)v206.m256i_i8;
    if ( v97 == -1 )
      break;
    *(_QWORD *)v193 = v97;
    *(_OWORD *)&v193[8] = v211;
    v190.m256i_i64[2] = *(_QWORD *)&v212[16];
    *(_OWORD *)v190.m256i_i8 = *(_OWORD *)v212;
    sub_140A64A80(&v206, &v197, v193, &v190);
    if ( v206.m256i_i64[0] != -1 && v206.m256i_i64[0] )
      sub_140001660(v206.m256i_i64[1], v206.m256i_i64[0], 1);
  }
  v250 = 1;
  v249 = 1;
  v248 = 1;
  v247 = 1;
  sub_140A6F5A0(&v206, v215);
  v100 = v184;
  for ( k = v206.m256i_i64[0]; v206.m256i_i64[0]; k = v206.m256i_i64[0] )
  {
    v102 = 3 * v206.m256i_i64[2];
    v103 = *(_QWORD *)(k + 24 * v206.m256i_i64[2] + 8);
    if ( v103 )
      sub_140001660(*(_QWORD *)(k + 24 * v206.m256i_i64[2] + 16), v103, 1);
    v104 = (_QWORD *)(k + 8 * v102 + 272);
    if ( *v104 )
      sub_140001660(*(_QWORD *)(k + 8 * v102 + 280), *v104, 1);
    v250 = 1;
    v249 = 1;
    v248 = 1;
    v247 = 1;
    sub_140A6F5A0(&v206, v215);
  }
  nullsub_1(v99, v98);
  v105 = (void *)sub_140001650(30, 1);
  if ( !v105 )
  {
    v250 = 1;
    v249 = 1;
    v248 = 1;
    v247 = 1;
    sub_14196B2DB(1, 30);
  }
  qmemcpy(v105, "electron-saved-workspace-roots", 30);
  *(_QWORD *)&v211 = 30;
  *((_QWORD *)&v211 + 1) = v105;
  *(_QWORD *)v212 = 30;
  v222 = 1;
  sub_1402278E0(&v206, v200, v100);
  *(_QWORD *)&v215[24] = v206.m256i_i64[2];
  *(_OWORD *)&v215[8] = *(_OWORD *)v206.m256i_i8;
  v215[0] = 4;
  v222 = 0;
  sub_140A68320(&v206, &v188, &v211, v215);
  if ( v206.m256i_i8[0] != -1 )
  {
    v250 = 1;
    v249 = 1;
    v248 = 1;
    v247 = 1;
    sub_140032FF0(&v206);
  }
  nullsub_1(v107, v106);
  v108 = (void *)sub_140001650(13, 1);
  if ( !v108 )
  {
    v250 = 1;
    v249 = 1;
    v248 = 1;
    v247 = 1;
    sub_14196B2DB(1, 13);
  }
  qmemcpy(v108, "project-order", 13);
  *(_QWORD *)&v211 = 13;
  *((_QWORD *)&v211 + 1) = v108;
  *(_QWORD *)v212 = 13;
  *(_QWORD *)v215 = *((_QWORD *)&v165 + 1);
  *(_QWORD *)&v215[8] = *((_QWORD *)&v165 + 1);
  *(_QWORD *)&v215[16] = v165;
  *(_QWORD *)&v215[24] = *((_QWORD *)&v165 + 1) + 24 * v166;
  v221 = 1;
  sub_140227A80((unsigned __int64 *)&v206, v215);
  *(_OWORD *)&v215[8] = *(_OWORD *)v206.m256i_i8;
  *(_QWORD *)&v215[24] = v206.m256i_i64[2];
  v215[0] = 4;
  v221 = 0;
  sub_140A68320(&v206, &v188, &v211, v215);
  if ( v206.m256i_i8[0] != -1 )
  {
    v250 = 1;
    v249 = 1;
    v248 = 0;
    v247 = 1;
    sub_140032FF0(&v206);
  }
  nullsub_1(v110, v109);
  v111 = sub_140001650(22, 1);
  if ( !v111 )
  {
    v250 = 1;
    v249 = 1;
    v248 = 0;
    v247 = 1;
    sub_14196B2DB(1, 22);
  }
  *(_OWORD *)v111 = *(_OWORD *)aActiveWorkspac;
  *(_QWORD *)(v111 + 14) = 0x73746F6F722D6563LL;
  *(_QWORD *)&v211 = 22;
  *((_QWORD *)&v211 + 1) = v111;
  *(_QWORD *)v212 = 22;
  *(_QWORD *)v215 = *((_QWORD *)&v203 + 1);
  *(_QWORD *)&v215[8] = *((_QWORD *)&v203 + 1);
  *(_QWORD *)&v215[16] = v203;
  *(_QWORD *)&v215[24] = *((_QWORD *)&v203 + 1) + 24 * v204;
  v220 = 1;
  sub_140227A80((unsigned __int64 *)&v206, v215);
  *(_OWORD *)&v215[8] = *(_OWORD *)v206.m256i_i8;
  *(_QWORD *)&v215[24] = v206.m256i_i64[2];
  v215[0] = 4;
  v220 = 0;
  sub_140A68320(&v206, &v188, &v211, v215);
  if ( v206.m256i_i8[0] != -1 )
  {
    v250 = 1;
    v249 = 0;
    v248 = 0;
    v247 = 1;
    sub_140032FF0(&v206);
  }
  nullsub_1(v113, v112);
  v114 = (void *)sub_140001650(27, 1);
  if ( !v114 )
  {
    v250 = 1;
    v249 = 0;
    v248 = 0;
    v247 = 1;
    sub_14196B2DB(1, 27);
  }
  qmemcpy(v114, "thread-workspace-root-hints", 27);
  v190.m256i_i64[0] = 27;
  v190.m256i_i64[1] = (__int64)v114;
  v190.m256i_i64[2] = 27;
  v116 = 0;
  v117 = v197;
  if ( (_QWORD)v197 )
    v117 = v198;
  LOBYTE(v116) = (_QWORD)v197 != 0;
  *(_OWORD *)v215 = v116;
  *(_OWORD *)&v215[16] = v197;
  *(_OWORD *)&v215[32] = v116;
  *(_OWORD *)&v215[48] = v197;
  *(_QWORD *)&v215[64] = v117;
  v219 = 1;
  LOBYTE(v115) = (_QWORD)v197 != 0;
  sub_140A24550(&v211, v215, v117, v115);
  v206.m256i_i64[3] = *(_QWORD *)v212;
  *(_OWORD *)&v206.m256i_u64[1] = v211;
  v206.m256i_i8[0] = 5;
  v219 = 0;
  sub_140A68320(v215, &v188, &v190, &v206);
  if ( v215[0] != 0xFF )
  {
    v250 = 1;
    v249 = 0;
    v248 = 0;
    v247 = 1;
    sub_140032FF0(v215);
  }
  *(_QWORD *)&v215[24] = v189;
  *(_OWORD *)&v215[8] = v188;
  v215[0] = 5;
  sub_1409080F0(&v206, v215);
  v118 = v206.m256i_i64[1];
  if ( v206.m256i_i64[0] == -1 )
  {
    v124 = (_QWORD *)v209;
    *(_QWORD *)(v209 + 8) = 3;
    v124[2] = v118;
    *v124 = -1;
    v250 = 0;
    v249 = 0;
    v248 = 0;
    v247 = 1;
    sub_140032FF0(v215);
    goto LABEL_206;
  }
  v201 = v206.m256i_i64[1];
  v214 = v206.m256i_i64[0];
  v119 = v206.m256i_i64[2];
  v242 = 1;
  sub_140032FF0(v215);
  v120 = v162;
  v121 = v163;
  v242 = 1;
  if ( (sub_1407C8880(v162, v163, v201, v119) & 1) != 0 )
  {
    v123 = (_QWORD *)v209;
    *(_QWORD *)(v209 + 8) = 2;
    v123[2] = v122;
LABEL_203:
    *v123 = -1;
    v127 = v214;
LABEL_204:
    if ( v127 )
      sub_140001660(v201, v127, 1);
LABEL_206:
    v231 = 0;
    v230 = 0;
    v229 = 0;
    v228 = 0;
    v227 = 1;
    sub_140A94590(&v197);
    if ( (unsigned __int64)(v187 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v185, v187, 1);
    v128 = (_QWORD *)(v200 + 8);
    do
    {
      v129 = *(v128 - 1);
      if ( v129 )
        sub_140001660(*v128, v129, 1);
      v128 += 3;
      --v48;
    }
    while ( v48 );
    if ( v182 )
      sub_140001660(v200, 24 * v182, 8);
    v66 = 0;
    v67 = *((_QWORD *)&v173 + 1);
    v68 = v173;
    if ( *((_QWORD *)&v173 + 1) )
    {
LABEL_215:
      v130 = (_QWORD *)(v68 + 8);
      do
      {
        v131 = *(v130 - 1);
        if ( v131 )
          sub_140001660(*v130, v131, 1);
        v130 += 3;
        --v67;
      }
      while ( v67 );
    }
LABEL_219:
    if ( v172.m256i_i64[3] )
      sub_140001660(v68, 24 * v172.m256i_i64[3], 8);
    if ( (_QWORD)v180 )
    {
      v132 = v181;
      *(_QWORD *)&v215[8] = 0;
      *(_QWORD *)&v215[16] = v180;
      *(_QWORD *)&v215[24] = v210;
      *(_QWORD *)&v215[40] = 0;
      *(_QWORD *)&v215[48] = v180;
      *(_QWORD *)&v215[56] = v210;
      v133 = 1;
    }
    else
    {
      v133 = 0;
      v132 = 0;
    }
    *(_QWORD *)v215 = v133;
    *(_QWORD *)&v215[32] = v133;
    *(_QWORD *)&v215[64] = v132;
    v246 = v66;
    sub_140A6FD50(&v172, v215);
    for ( m = v172.m256i_i64[0]; v172.m256i_i64[0]; m = v172.m256i_i64[0] )
    {
      v135 = *(_QWORD *)(m + 24 * v172.m256i_i64[2] + 8);
      if ( v135 )
        sub_140001660(*(_QWORD *)(m + 24 * v172.m256i_i64[2] + 16), v135, 1);
      v246 = v66;
      sub_140A6FD50(&v172, v215);
    }
    if ( !v66 )
    {
LABEL_233:
      v138 = v161;
      if ( v161 )
      {
        v139 = v162;
LABEL_235:
        sub_140001660(v139, v138, 1);
        return v209;
      }
      return v209;
    }
LABEL_229:
    if ( (_QWORD)v188 )
    {
      v136 = v189;
      *(_QWORD *)&v215[8] = 0;
      *(_OWORD *)&v215[16] = v188;
      *(_QWORD *)&v215[40] = 0;
      *(_OWORD *)&v215[48] = v188;
      v137 = 1;
    }
    else
    {
      v137 = 0;
      v136 = 0;
    }
    *(_QWORD *)v215 = v137;
    *(_QWORD *)&v215[32] = v137;
    *(_QWORD *)&v215[64] = v136;
    sub_140A17C60(v215);
    goto LABEL_233;
  }
  v242 = 1;
  sub_1407B9160(v122);
  v242 = 1;
  sub_1416CC450(v215, v120, v121);
  v125 = *(_QWORD *)&v215[8];
  if ( *(_QWORD *)v215 == -1 )
  {
    v123 = (_QWORD *)v209;
    *(_QWORD *)(v209 + 8) = 2;
    v123[2] = v125;
    goto LABEL_203;
  }
  v184 = *(_QWORD *)&v215[8];
  v202 = *(_QWORD *)v215;
  *(_OWORD *)v215 = *(_OWORD *)&v215[8];
  *(_OWORD *)&v215[16] = 0;
  vendor_json_parse_str_with_trailing_check(&v206, (__int128 *)v215);
  if ( v206.m256i_i8[0] == -1 )
  {
    v141 = v206.m256i_i64[1];
    v142 = (_QWORD *)v209;
    *(_QWORD *)(v209 + 8) = 3;
    v142[2] = v141;
    *v142 = -1;
    v127 = v214;
    if ( v202 )
    {
      v143 = v214;
      sub_140001660(v184, v202, 1);
      v127 = v143;
    }
    goto LABEL_204;
  }
  v211 = *(_OWORD *)v206.m256i_i8;
  *(_OWORD *)v212 = *(_OWORD *)&v206.m256i_u64[2];
  sub_140032FF0(&v211);
  if ( v202 )
    sub_140001660(v184, v202, 1);
  v126 = v198;
  sub_1409EE930((__int64)&v206, v196);
  v190.m256i_i64[0] = v48;
  *(_QWORD *)&v211 = v198;
  if ( v213 )
  {
    *(_QWORD *)v215 = &v164;
    *(_QWORD *)&v215[8] = sub_1416EBAE0;
    *(_QWORD *)&v215[16] = &v190;
    *(_QWORD *)&v215[24] = sub_1416EBAE0;
    *(_QWORD *)&v215[32] = &v211;
    *(_QWORD *)&v215[40] = sub_1416EBAE0;
    sub_1416DAFA0(&v156, &unk_141A650EF, v215);
  }
  else
  {
    *(_QWORD *)v215 = &v190;
    *(_QWORD *)&v215[8] = sub_1416EBAE0;
    *(_QWORD *)&v215[16] = &v211;
    *(_QWORD *)&v215[24] = sub_1416EBAE0;
    sub_1416DAFA0(&v156, &unk_141A650B7, v215);
  }
  v144 = v209;
  *(_OWORD *)(v209 + 40) = v155;
  v145 = *(_OWORD *)&v206.m256i_u64[2];
  *(_OWORD *)(v144 + 56) = *(_OWORD *)v206.m256i_i8;
  *(_OWORD *)(v144 + 72) = v145;
  *(_OWORD *)v144 = v156;
  *(_QWORD *)(v144 + 16) = v157;
  *(_QWORD *)(v144 + 24) = v187;
  *(_QWORD *)(v144 + 32) = v185;
  *(_QWORD *)(v144 + 88) = v48;
  *(_QWORD *)(v144 + 96) = v126;
  *(_QWORD *)(v144 + 104) = v213;
  *(_BYTE *)(v144 + 112) = 1;
  if ( v214 )
    sub_140001660(v201, v214, 1);
  v231 = 0;
  v230 = 0;
  v229 = 0;
  v228 = 0;
  v227 = 0;
  sub_140A94590(&v197);
  v146 = (_QWORD *)(v200 + 8);
  do
  {
    v147 = *(v146 - 1);
    if ( v147 )
      sub_140001660(*v146, v147, 1);
    v146 += 3;
    --v48;
  }
  while ( v48 );
  if ( v182 )
    sub_140001660(v200, 24 * v182, 8);
  v148 = v173;
  if ( *((_QWORD *)&v173 + 1) )
  {
    v149 = (_QWORD *)(v173 + 8);
    do
    {
      v150 = *(v149 - 1);
      if ( v150 )
        sub_140001660(*v149, v150, 1);
      v149 += 3;
      --*((_QWORD *)&v148 + 1);
    }
    while ( *((_QWORD *)&v148 + 1) );
  }
  if ( v172.m256i_i64[3] )
    sub_140001660(v148, 24 * v172.m256i_i64[3], 8);
  if ( v171 )
  {
    v151 = v181;
    *(_QWORD *)&v215[8] = 0;
    *(_QWORD *)&v215[16] = v171;
    *(_QWORD *)&v215[24] = v210;
    *(_QWORD *)&v215[40] = 0;
    *(_QWORD *)&v215[48] = v171;
    *(_QWORD *)&v215[56] = v210;
    v152 = 1;
  }
  else
  {
    v152 = 0;
    v151 = 0;
  }
  *(_QWORD *)v215 = v152;
  *(_QWORD *)&v215[32] = v152;
  *(_QWORD *)&v215[64] = v151;
  v246 = 0;
  sub_140A6FD50(&v172, v215);
  for ( n = v172.m256i_i64[0]; v172.m256i_i64[0]; n = v172.m256i_i64[0] )
  {
    v154 = *(_QWORD *)(n + 24 * v172.m256i_i64[2] + 8);
    if ( v154 )
      sub_140001660(*(_QWORD *)(n + 24 * v172.m256i_i64[2] + 16), v154, 1);
    v246 = 0;
    sub_140A6FD50(&v172, v215);
  }
  v138 = v161;
  if ( v161 )
  {
    v139 = v120;
    goto LABEL_235;
  }
  return v209;
}
