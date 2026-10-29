// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bc9880 | name sub_140BC9880
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BC9880(
        __int128 *a1,
        __int128 *a2,
        unsigned __int8 a3,
        char a4,
        __int128 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 *a8,
        char *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 a12,
        unsigned __int8 *a13)
{
  __int128 v15; // kr00_16
  __int64 result; // rax
  unsigned __int64 v17; // rcx
  __int128 v18; // kr20_16
  __int128 v19; // kr30_16
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  char v23; // di
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edx
  int v29; // r15d
  __int64 v30; // rax
  unsigned int v31; // edx
  __int128 *v32; // r12
  unsigned __int8 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // edx
  int v39; // ebx
  unsigned int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // r14d
  char v46; // bl
  unsigned __int64 v47; // rax
  unsigned int v48; // edx
  int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r15
  _BYTE *v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // r12
  unsigned __int64 v63; // rax
  unsigned int v64; // edx
  __int64 v65; // r14
  bool v66; // cl
  bool v67; // dl
  unsigned int v68; // edx
  bool v69; // cl
  bool v70; // dl
  unsigned int v71; // edx
  _QWORD *v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // r14
  _QWORD *v76; // r15
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm2
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  _OWORD *v83; // rax
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  char v87; // al
  __int128 *v88; // rsi
  __int64 v89; // rax
  unsigned int v90; // edx
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm2
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm2
  unsigned __int8 v97; // al
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  int v101; // eax
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm2
  unsigned __int8 v105; // al
  __int64 v106; // rcx
  __int128 v107; // krC0_16
  int v108; // edx
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm2
  unsigned __int8 v112; // al
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm2
  __int64 v116; // rdx
  int v117; // r9d
  __int64 v118; // rdi
  __int64 v119; // r14
  __int128 *v120; // r12
  __int64 v121; // r15
  char v122; // bl
  __int128 v123; // xmm0
  __int128 v124; // xmm1
  __int128 v125; // xmm2
  unsigned __int8 v126; // al
  unsigned __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  unsigned __int64 v130; // rbx
  int v131; // edi
  __int64 v132; // rax
  unsigned int v133; // edx
  __int64 (__fastcall *v134)(unsigned __int64); // rax
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // r15
  __int64 v138; // r14
  __int64 v139; // rax
  __int64 v140; // rcx
  __int128 v141; // xmm0
  __int128 v142; // xmm1
  __int128 v143; // xmm2
  __int64 v144; // rax
  unsigned int v145; // edx
  __int64 v146; // [rsp+48h] [rbp-38h]
  __int64 v147; // [rsp+58h] [rbp-28h]
  _QWORD v148[3]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v149[24]; // [rsp+78h] [rbp-8h] BYREF
  _QWORD v150[3]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v151[3]; // [rsp+A8h] [rbp+28h] BYREF
  _QWORD v152[3]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v153; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v154; // [rsp+E8h] [rbp+68h]
  __int128 v155; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v156; // [rsp+100h] [rbp+80h]
  __int128 v157; // [rsp+108h] [rbp+88h] BYREF
  __int64 v158; // [rsp+118h] [rbp+98h] BYREF
  __int128 v159; // [rsp+120h] [rbp+A0h]
  __int64 v160; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v161; // [rsp+138h] [rbp+B8h]
  __int64 v162; // [rsp+148h] [rbp+C8h] BYREF
  unsigned __int128 v163; // [rsp+150h] [rbp+D0h]
  __int64 v164; // [rsp+160h] [rbp+E0h] BYREF
  unsigned __int128 v165; // [rsp+168h] [rbp+E8h]
  __int64 v166; // [rsp+178h] [rbp+F8h] BYREF
  unsigned __int128 v167; // [rsp+180h] [rbp+100h]
  unsigned __int64 v168; // [rsp+190h] [rbp+110h]
  __int64 v169; // [rsp+198h] [rbp+118h] BYREF
  int v170; // [rsp+1A0h] [rbp+120h]
  __int64 v171; // [rsp+1A8h] [rbp+128h]
  __int64 v172; // [rsp+1B0h] [rbp+130h]
  __int64 v173; // [rsp+1B8h] [rbp+138h]
  __int64 v174; // [rsp+1C0h] [rbp+140h]
  unsigned __int8 *v175; // [rsp+1C8h] [rbp+148h]
  __int64 v176; // [rsp+1D0h] [rbp+150h]
  __int128 v177; // [rsp+1D8h] [rbp+158h]
  __int128 v178; // [rsp+1E8h] [rbp+168h]
  __int128 v179; // [rsp+1F8h] [rbp+178h]
  __int64 v180; // [rsp+208h] [rbp+188h]
  _DWORD *v181; // [rsp+210h] [rbp+190h]
  _BYTE *v182; // [rsp+218h] [rbp+198h]
  __int64 v183; // [rsp+220h] [rbp+1A0h]
  __int64 v184; // [rsp+228h] [rbp+1A8h]
  _BYTE v185[96]; // [rsp+230h] [rbp+1B0h] BYREF
  _QWORD v186[3]; // [rsp+290h] [rbp+210h] BYREF
  _QWORD v187[3]; // [rsp+2A8h] [rbp+228h] BYREF
  _QWORD v188[3]; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v189; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v190; // [rsp+2E8h] [rbp+268h]
  int v191; // [rsp+2F4h] [rbp+274h]
  __int128 *v192; // [rsp+2F8h] [rbp+278h]
  __int64 v193; // [rsp+300h] [rbp+280h]
  unsigned __int64 v194; // [rsp+308h] [rbp+288h]
  unsigned __int128 v195; // [rsp+310h] [rbp+290h] BYREF
  __int128 v196; // [rsp+320h] [rbp+2A0h] BYREF
  __int128 v197; // [rsp+330h] [rbp+2B0h]
  __int128 v198; // [rsp+340h] [rbp+2C0h]
  __int128 v199; // [rsp+350h] [rbp+2D0h]
  __int128 v200; // [rsp+360h] [rbp+2E0h]
  __int128 v201; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v202; // [rsp+380h] [rbp+300h]
  __int64 v203; // [rsp+388h] [rbp+308h] BYREF
  int v204; // [rsp+390h] [rbp+310h]
  __int64 v205; // [rsp+398h] [rbp+318h] BYREF
  __int64 v206; // [rsp+3A0h] [rbp+320h]
  __int64 v207; // [rsp+3A8h] [rbp+328h]
  __int128 v208; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v209; // [rsp+3C0h] [rbp+340h]
  int v210; // [rsp+3C8h] [rbp+348h] BYREF
  char v211; // [rsp+3CCh] [rbp+34Ch] BYREF
  __m256i v212; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v213; // [rsp+3F0h] [rbp+370h]
  __int128 v214; // [rsp+400h] [rbp+380h]
  __int128 v215; // [rsp+418h] [rbp+398h] BYREF
  unsigned int v216; // [rsp+42Ch] [rbp+3ACh]
  __m256i v217; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v218; // [rsp+450h] [rbp+3D0h]
  __int128 v219; // [rsp+460h] [rbp+3E0h]
  unsigned __int128 v220; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v221; // [rsp+480h] [rbp+400h]
  __int128 v222; // [rsp+490h] [rbp+410h]
  __int128 v223; // [rsp+4A0h] [rbp+420h]
  __int128 v224; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v225; // [rsp+4C0h] [rbp+440h]
  _BYTE v226[112]; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v227; // [rsp+540h] [rbp+4C0h]
  __int128 v228; // [rsp+550h] [rbp+4D0h]
  __int128 v229; // [rsp+560h] [rbp+4E0h]
  __int128 v230; // [rsp+570h] [rbp+4F0h]
  __int128 v231; // [rsp+580h] [rbp+500h]
  unsigned __int128 v232; // [rsp+590h] [rbp+510h] BYREF
  _BYTE v233[80]; // [rsp+5A0h] [rbp+520h] BYREF
  char v234; // [rsp+5FEh] [rbp+57Eh] BYREF
  char v235; // [rsp+5FFh] [rbp+57Fh]
  _BYTE v236[96]; // [rsp+600h] [rbp+580h] BYREF
  char v237; // [rsp+667h] [rbp+5E7h]
  __int128 *v238; // [rsp+668h] [rbp+5E8h]
  char v239; // [rsp+677h] [rbp+5F7h]
  __int64 v240; // [rsp+678h] [rbp+5F8h]
  char v241; // [rsp+685h] [rbp+605h]
  char v242; // [rsp+686h] [rbp+606h]
  char v243; // [rsp+687h] [rbp+607h] BYREF
  __int64 v244; // [rsp+688h] [rbp+608h]
  char v245; // [rsp+694h] [rbp+614h]
  char v246; // [rsp+695h] [rbp+615h]
  char v247; // [rsp+696h] [rbp+616h]
  char v248; // [rsp+697h] [rbp+617h]
  char v249; // [rsp+698h] [rbp+618h]
  char v250; // [rsp+699h] [rbp+619h]
  char v251; // [rsp+69Ah] [rbp+61Ah] BYREF
  char v252; // [rsp+69Bh] [rbp+61Bh]
  char v253; // [rsp+69Ch] [rbp+61Ch]
  char v254; // [rsp+69Dh] [rbp+61Dh]
  unsigned __int8 v255; // [rsp+69Eh] [rbp+61Eh] BYREF
  unsigned __int8 v256; // [rsp+69Fh] [rbp+61Fh] BYREF
  __int64 v257; // [rsp+6A0h] [rbp+620h]

  v257 = -2;
  v256 = a3;
  v243 = a4;
  v215 = a5;
  sub_1410257E0(v226);
  v15 = *(_OWORD *)&v226[32];
  v232 = *(_OWORD *)&v226[48];
  *(_OWORD *)v233 = *(_OWORD *)&v226[64];
  if ( *(_QWORD *)v226 != -1 )
  {
    *(_OWORD *)&v236[80] = *(_OWORD *)&v226[80];
    *(_QWORD *)&v236[16] = *(_QWORD *)&v226[16];
    *(_OWORD *)&v236[24] = *(_OWORD *)&v226[24];
    *(_QWORD *)&v236[40] = *(_QWORD *)&v226[40];
    *(_OWORD *)&v236[48] = v232;
    *(_OWORD *)&v236[64] = *(_OWORD *)v233;
    *(_OWORD *)v236 = *(_OWORD *)v226;
LABEL_3:
    a1[5] = *(_OWORD *)&v236[80];
    a1[4] = *(_OWORD *)&v236[64];
    v17 = *(_QWORD *)&v236[8];
    result = *(_QWORD *)v236;
    v18 = *(_OWORD *)&v236[16];
    v19 = *(_OWORD *)&v236[32];
    a1[3] = *(_OWORD *)&v236[48];
    a1[2] = v19;
    a1[1] = v18;
    *a1 = __PAIR128__(v17, result);
LABEL_4:
    *((_WORD *)a1 + 48) = 0;
    return result;
  }
  if ( *(_QWORD *)&v226[8] != -1 )
  {
    if ( *(_QWORD *)&v226[8] )
      sub_140001660(*(_QWORD *)&v226[16], *(_QWORD *)&v226[8], 1);
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v15 + 1), v15, 1);
  }
  sub_14023D790((__int64)v226, (__int64)a2);
  if ( *(_DWORD *)v226 == -1 )
  {
    sub_140EFE1A0(v236);
    if ( *(_QWORD *)v236 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v236[80] = *(_OWORD *)&v226[80];
    *(_OWORD *)&v236[64] = *(_OWORD *)&v226[64];
    *(_OWORD *)&v236[48] = *(_OWORD *)&v226[48];
    *(_OWORD *)&v236[32] = *(_OWORD *)&v226[32];
    *(_OWORD *)&v236[16] = *(_OWORD *)&v226[16];
    *(_OWORD *)v236 = *(_OWORD *)v226;
    if ( *(_QWORD *)v226 != -1 )
      goto LABEL_3;
  }
  sub_141568C20(&v157);
  *(_QWORD *)v226 = &v243;
  *(_QWORD *)&v226[8] = sub_140C9DE00;
  *(_QWORD *)&v226[16] = &v215;
  *(_QWORD *)&v226[24] = sub_140186EE0;
  sub_1416ABFD0(&v166, &unk_141A39F10, v226);
  LOBYTE(v220) = v256;
  v244 = v167;
  v232 = v167;
  *(_QWORD *)v226 = &v220;
  *(_QWORD *)&v226[8] = sub_140C98D50;
  *(_QWORD *)&v226[16] = &v232;
  *(_QWORD *)&v226[24] = sub_140186EE0;
  sub_1416ABFD0(v236, &unk_141A39D2E, v226);
  sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_0, 5, (__int64)v236);
  if ( v166 )
    sub_140001660(v244, v166, 1);
  if ( !v243 )
  {
    sub_140267190((__int64 *)v236, a6, a7);
    if ( *(_DWORD *)v236 != -1 )
    {
      *(_OWORD *)&v226[80] = *(_OWORD *)&v236[80];
      *(_OWORD *)&v226[64] = *(_OWORD *)&v236[64];
      *(_OWORD *)&v226[48] = *(_OWORD *)&v236[48];
      *(_OWORD *)&v226[32] = *(_OWORD *)&v236[32];
      *(_OWORD *)&v226[16] = *(_OWORD *)&v236[16];
      *(_OWORD *)v226 = *(_OWORD *)v236;
      *(_QWORD *)&v220 = 0;
      *((_QWORD *)&v220 + 1) = 1;
      *(_QWORD *)&v221 = 0;
      *(_QWORD *)v233 = 1610612768;
      *(_QWORD *)&v232 = &v220;
      *((_QWORD *)&v232 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v226, &v232) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v251,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v240 = *((_QWORD *)&v220 + 1);
      v244 = v220;
      sub_140C75030(a2, (__int128 *)v256);
      if ( v244 )
        sub_140001660(v240, v244, 1);
      *(_QWORD *)&v232 = &v215;
      *((_QWORD *)&v232 + 1) = sub_140186EE0;
      *(_QWORD *)v233 = v226;
      *(_QWORD *)&v233[8] = sub_14104A7D0;
      sub_1416ABFD0(&v164, &unk_141A39F29, &v232);
      v185[0] = v256;
      v238 = (__int128 *)v165;
      v195 = v165;
      *(_QWORD *)&v232 = v185;
      *((_QWORD *)&v232 + 1) = sub_140C98D50;
      *(_QWORD *)v233 = &v195;
      *(_QWORD *)&v233[8] = sub_140186EE0;
      sub_1416ABFD0(&v220, &unk_141A39D2E, &v232);
      result = sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)&v220);
      if ( v164 )
        result = sub_140001660(v238, v164, 1);
      a1[5] = *(_OWORD *)&v226[80];
      a1[4] = *(_OWORD *)&v226[64];
      v77 = *(_OWORD *)v226;
      v78 = *(_OWORD *)&v226[16];
      v79 = *(_OWORD *)&v226[32];
      a1[3] = *(_OWORD *)&v226[48];
      a1[2] = v79;
      a1[1] = v78;
      *a1 = v77;
      goto LABEL_4;
    }
  }
  v191 = *a8;
  v171 = 2LL * (v191 ^ 1u) + 3;
  v235 = *a9;
  v172 = *a10;
  v181 = (_DWORD *)a10[1];
  v193 = a10[2];
  v202 = a10[3];
  v183 = a10[4];
  v20 = a10[5];
  v176 = v20;
  v182 = (_BYTE *)a10[6];
  v173 = *a11;
  v174 = a11[1];
  v175 = (unsigned __int8 *)a11[2];
  v216 = -1;
  v21 = 1;
  v22 = 0;
  v192 = a1;
  v238 = a2;
  while ( (v22 & 1) == 0 && (unsigned __int8)v21 <= 3u )
  {
    LOBYTE(v20) = v21 == 3;
    LODWORD(v244) = v20;
    v23 = v21 + 1;
    if ( v21 == 3 )
      v23 = 3;
    v255 = v21;
    sub_140C75030(a2, (__int128 *)v256);
    v169 = sub_14167FC00(v25, v24, v26, v27);
    v170 = v28;
    sub_140EC0AC0((unsigned int)v226, v171, 0, v191, v235);
    *(_DWORD *)((char *)&v232 + 3) = *(_DWORD *)&v226[12];
    LODWORD(v232) = *(_DWORD *)&v226[9];
    *(_DWORD *)((char *)&v220 + 3) = *(_DWORD *)&v226[20];
    LODWORD(v220) = *(_DWORD *)&v226[17];
    *(_DWORD *)((char *)&v195 + 3) = *(_DWORD *)&v226[28];
    LODWORD(v195) = *(_DWORD *)&v226[25];
    *(_DWORD *)v185 = *(_DWORD *)&v226[33];
    *(_DWORD *)&v185[3] = *(_DWORD *)&v226[36];
    *(__int32 *)((char *)v217.m256i_i32 + 3) = *(_DWORD *)&v226[44];
    v217.m256i_i32[0] = *(_DWORD *)&v226[41];
    *(__int32 *)((char *)v212.m256i_i32 + 3) = *(_DWORD *)&v226[52];
    v212.m256i_i32[0] = *(_DWORD *)&v226[49];
    v29 = v226[56];
    *(_DWORD *)((char *)&v177 + 3) = *(_DWORD *)&v226[60];
    LODWORD(v177) = *(_DWORD *)&v226[57];
    if ( *(_QWORD *)v226 != -1 )
    {
      LODWORD(v203) = *(_DWORD *)&v226[65];
      *(_DWORD *)((char *)&v203 + 3) = *(_DWORD *)&v226[68];
      *(_QWORD *)&v236[88] = *(_QWORD *)&v226[88];
      *(_OWORD *)&v236[72] = *(_OWORD *)&v226[72];
      *(_DWORD *)&v236[9] = v232;
      *(_DWORD *)&v236[12] = *(_DWORD *)((char *)&v232 + 3);
      LODWORD(v208) = v220;
      *(_DWORD *)((char *)&v208 + 3) = *(_DWORD *)((char *)&v220 + 3);
      *(_DWORD *)((char *)v186 + 3) = *(_DWORD *)((char *)&v195 + 3);
      LODWORD(v186[0]) = v195;
      *(_DWORD *)((char *)&v189 + 3) = *(_DWORD *)&v185[3];
      LODWORD(v189) = *(_DWORD *)v185;
      *(_DWORD *)((char *)v187 + 3) = *(__int32 *)((char *)v217.m256i_i32 + 3);
      LODWORD(v187[0]) = v217.m256i_i32[0];
      *(_DWORD *)((char *)v188 + 3) = *(__int32 *)((char *)v212.m256i_i32 + 3);
      LODWORD(v188[0]) = v212.m256i_i32[0];
      *(_DWORD *)((char *)&v205 + 3) = *(_DWORD *)((char *)&v177 + 3);
      LODWORD(v205) = v177;
      *(_QWORD *)v236 = *(_QWORD *)v226;
      v236[8] = v226[8];
      v236[16] = v226[16];
      *(_DWORD *)&v236[20] = *(_DWORD *)((char *)&v220 + 3);
      *(_DWORD *)&v236[17] = v208;
      v236[24] = v226[24];
      *(_DWORD *)&v236[28] = *(_DWORD *)((char *)v186 + 3);
      *(_DWORD *)&v236[25] = v195;
      v236[32] = v226[32];
      *(_DWORD *)&v236[36] = *(_DWORD *)((char *)&v189 + 3);
      *(_DWORD *)&v236[33] = *(_DWORD *)v185;
      v236[40] = v226[40];
      *(_DWORD *)&v236[44] = *(_DWORD *)((char *)v187 + 3);
      *(_DWORD *)&v236[41] = v217.m256i_i32[0];
      v236[48] = v226[48];
      *(_DWORD *)&v236[52] = *(_DWORD *)((char *)v188 + 3);
      *(_DWORD *)&v236[49] = v212.m256i_i32[0];
      v236[56] = v226[56];
      *(_DWORD *)&v236[60] = *(_DWORD *)((char *)&v205 + 3);
      *(_DWORD *)&v236[57] = v177;
      v236[64] = v226[64];
      *(_DWORD *)&v236[68] = *(_DWORD *)&v226[68];
      *(_DWORD *)&v236[65] = v203;
      *(_QWORD *)&v232 = 0;
      *((_QWORD *)&v232 + 1) = 1;
      *(_QWORD *)v233 = 0;
      *(_QWORD *)&v226[16] = 1610612768;
      *(_QWORD *)v226 = &v232;
      *(_QWORD *)&v226[8] = &off_141A3FE88;
      v87 = sub_14104A7D0(v236, v226);
      v88 = v192;
      if ( v87 )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v251,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v240 = *((_QWORD *)&v232 + 1);
      v244 = v232;
      sub_140C75030(v238, (__int128 *)v256);
      if ( v244 )
        sub_140001660(v240, v244, 1);
      v89 = sub_14167FD50(&v169);
      v232 = 0x3E8 * (unsigned __int128)(unsigned __int64)v89 + v90 / 0xF4240uLL;
      *(_QWORD *)v226 = &v255;
      *(_QWORD *)&v226[8] = sub_1416B9630;
      *(_QWORD *)&v226[16] = &v232;
      *(_QWORD *)&v226[24] = sub_1416B95D0;
      *(_QWORD *)&v226[32] = v236;
      *(_QWORD *)&v226[40] = sub_14104A7D0;
      sub_1416ABFD0(v152, &unk_141A3A247, v226);
      sub_140BBE8E0(v256, (int)aStopFailed, 11, v152);
      v88[5] = *(_OWORD *)&v236[80];
      v88[4] = *(_OWORD *)&v236[64];
      v91 = *(_OWORD *)v236;
      v92 = *(_OWORD *)&v236[16];
      v93 = *(_OWORD *)&v236[32];
      v88[3] = *(_OWORD *)&v236[48];
      v88[2] = v93;
      v88[1] = v92;
      *v88 = v91;
      result = v255;
      *((_BYTE *)v88 + 96) = 1;
      *((_BYTE *)v88 + 97) = result;
      return result;
    }
    LODWORD(v208) = v232;
    *(_DWORD *)((char *)&v208 + 3) = *(_DWORD *)((char *)&v232 + 3);
    LODWORD(v186[0]) = v220;
    *(_DWORD *)((char *)v186 + 3) = *(_DWORD *)((char *)&v220 + 3);
    LODWORD(v189) = v195;
    *(_DWORD *)((char *)&v189 + 3) = *(_DWORD *)((char *)&v195 + 3);
    LODWORD(v187[0]) = *(_DWORD *)v185;
    *(_DWORD *)((char *)v187 + 3) = *(_DWORD *)&v185[3];
    *(_DWORD *)((char *)v188 + 3) = *(__int32 *)((char *)v217.m256i_i32 + 3);
    LODWORD(v188[0]) = v217.m256i_i32[0];
    *(_DWORD *)((char *)&v205 + 3) = *(__int32 *)((char *)v212.m256i_i32 + 3);
    LODWORD(v205) = v212.m256i_i32[0];
    LODWORD(v203) = v177;
    *(_DWORD *)((char *)&v203 + 3) = *(_DWORD *)((char *)&v177 + 3);
    DWORD1(v177) = *(_DWORD *)((char *)&v232 + 3);
    *(_DWORD *)((char *)&v177 + 1) = v208;
    HIDWORD(v177) = *(_DWORD *)((char *)&v220 + 3);
    *(_DWORD *)((char *)&v177 + 9) = v186[0];
    DWORD1(v178) = *(_DWORD *)((char *)&v195 + 3);
    *(_DWORD *)((char *)&v178 + 1) = v189;
    HIDWORD(v178) = *(_DWORD *)&v185[3];
    *(_DWORD *)((char *)&v178 + 9) = v187[0];
    DWORD1(v179) = *(_DWORD *)((char *)v188 + 3);
    *(_DWORD *)((char *)&v179 + 1) = v217.m256i_i32[0];
    HIDWORD(v179) = *(_DWORD *)((char *)&v205 + 3);
    *(_DWORD *)((char *)&v179 + 9) = v212.m256i_i32[0];
    HIDWORD(v180) = *(_DWORD *)((char *)&v203 + 3);
    *(_DWORD *)((char *)&v180 + 1) = v203;
    v234 = v226[56];
    LOBYTE(v177) = v226[8];
    BYTE8(v177) = v226[16];
    LOBYTE(v178) = v226[24];
    BYTE8(v178) = v226[32];
    LOBYTE(v179) = v226[40];
    BYTE8(v179) = v226[48];
    LOBYTE(v180) = v226[56];
    v252 = 1;
    v30 = sub_14167FD50(&v169);
    a1 = v192;
    *(_OWORD *)v236 = 0x3E8 * (unsigned __int128)(unsigned __int64)v30 + v31 / 0xF4240uLL;
    *(_QWORD *)v226 = &v255;
    *(_QWORD *)&v226[8] = sub_1416B9630;
    *(_QWORD *)&v226[16] = v236;
    *(_QWORD *)&v226[24] = sub_1416B95D0;
    *(_QWORD *)&v226[32] = &v234;
    *(_QWORD *)&v226[40] = sub_1416BCC50;
    v252 = 1;
    sub_1416ABFD0(&v162, &unk_141A39FC6, v226);
    LOBYTE(v220) = v256;
    v240 = v163;
    v232 = v163;
    *(_QWORD *)v226 = &v220;
    *(_QWORD *)&v226[8] = sub_140C98D50;
    *(_QWORD *)&v226[16] = &v232;
    *(_QWORD *)&v226[24] = sub_140186EE0;
    sub_1416ABFD0(v236, &unk_141A39D2E, v226);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v236);
    v32 = v238;
    if ( v162 )
      sub_140001660(v240, v162, 1);
    v252 = 1;
    sub_140C75030(v32, (__int128 *)v256);
    v33 = v255;
    v212.m256i_i8[0] = v29 & 1;
    v212.m256i_i8[1] = v255;
    v252 = 1;
    v39 = sub_14167FC00(v35, v34, v36, v37);
    v40 = v38;
    if ( v33 == 1 )
    {
      v217.m256i_i64[0] = v172;
      if ( *v181 == -2 )
      {
        v252 = 1;
        sub_140D946F0(
          (unsigned int)v226,
          v193,
          v202,
          v183,
          (__int64)aToggle,
          6,
          0,
          v29,
          (__int64)&v217,
          (__int64)&unk_141A3B0B0,
          v176,
          (__int64)&unk_141A3B0D8);
        goto LABEL_33;
      }
      v252 = 1;
      sub_14019F190((__int128 *)v226, v202, v193, (__int64)v181, (__int128 *)aToggle, 6, (__int64)&v217);
      v41 = *(_QWORD *)v226;
      v220 = *(_OWORD *)&v226[8];
      v221 = *(_OWORD *)&v226[24];
      v222 = *(_OWORD *)&v226[40];
      *(_QWORD *)&v223 = *(_QWORD *)&v226[56];
      if ( *(_QWORD *)v226 == -1 )
        goto LABEL_101;
    }
    else
    {
      if ( *v181 == -2 )
      {
        v252 = 1;
        sub_140D946F0((unsigned int)v226, v38, v202, v183, (__int64)&unk_141A3B10E, 13, 0, v29, 0, v146, 0, v147);
LABEL_33:
        if ( *(_DWORD *)v226 == -1 )
        {
          *(_QWORD *)&v236[88] = *(_QWORD *)&v226[80];
          *(_OWORD *)&v236[72] = *(_OWORD *)&v226[64];
          *(_QWORD *)&v236[64] = *(_QWORD *)&v226[56];
          *(_OWORD *)&v236[48] = *(_OWORD *)&v226[40];
          *(_OWORD *)&v236[32] = *(_OWORD *)&v226[24];
          *(_OWORD *)&v236[16] = *(_OWORD *)&v226[8];
          *(_QWORD *)&v236[8] = 1;
          *(_QWORD *)v236 = -1;
        }
        else
        {
          *(_OWORD *)&v236[80] = *(_OWORD *)&v226[80];
          *(_OWORD *)&v236[64] = *(_OWORD *)&v226[64];
          *(_OWORD *)&v236[48] = *(_OWORD *)&v226[48];
          *(_OWORD *)&v236[32] = *(_OWORD *)&v226[32];
          *(_OWORD *)&v236[16] = *(_OWORD *)&v226[16];
          *(_OWORD *)v236 = *(_OWORD *)v226;
          if ( *(_QWORD *)v226 != -1 )
            goto LABEL_35;
        }
        goto LABEL_40;
      }
      v252 = 1;
      sub_14019F190((__int128 *)v226, v202, v193, (__int64)v181, (__int128 *)&unk_141A3B10E, 13, 0);
      v41 = *(_QWORD *)v226;
      v220 = *(_OWORD *)&v226[8];
      v221 = *(_OWORD *)&v226[24];
      v222 = *(_OWORD *)&v226[40];
      *(_QWORD *)&v223 = *(_QWORD *)&v226[56];
      if ( *(_QWORD *)v226 == -1 )
      {
LABEL_101:
        v195 = v220;
        v196 = v221;
        v197 = v222;
        *(_QWORD *)&v198 = v223;
        sub_1403F1200(&v220, (char *)&v196 + 8);
        *(_QWORD *)&v226[48] = v198;
        *(_OWORD *)&v226[32] = v197;
        *(_OWORD *)&v226[16] = v196;
        *(_OWORD *)v226 = v195;
        *(_QWORD *)&v226[72] = v221;
        *(_OWORD *)&v226[56] = v220;
        v232 = v195;
        *(_OWORD *)v233 = v196;
        *(_OWORD *)&v233[16] = v197;
        *(_OWORD *)&v233[32] = *(_OWORD *)&v226[48];
        *(_OWORD *)&v233[48] = *(_OWORD *)&v226[64];
        *(_QWORD *)&v236[88] = v221;
        *(_OWORD *)&v236[72] = *(_OWORD *)&v233[40];
        *(_QWORD *)&v236[64] = v198;
        *(_OWORD *)&v236[48] = v197;
        *(_OWORD *)&v236[32] = v196;
        *(_OWORD *)&v236[16] = v195;
        *(_OWORD *)v236 = 0xFFFFFFFFFFFFFFFFuLL;
        goto LABEL_40;
      }
    }
    *(_OWORD *)&v233[56] = *(_OWORD *)&v226[80];
    *(_OWORD *)&v233[40] = *(_OWORD *)&v226[64];
    *(_QWORD *)&v233[32] = v223;
    v232 = v220;
    *(_OWORD *)v233 = v221;
    *(_OWORD *)&v233[16] = v222;
    *(_QWORD *)v236 = v41;
    *(_QWORD *)&v236[88] = *(_QWORD *)&v226[88];
    *(_OWORD *)&v236[72] = *(_OWORD *)&v233[48];
    *(_OWORD *)&v236[56] = __PAIR128__(*(unsigned __int64 *)&v226[64], v223);
    *(_OWORD *)&v236[40] = v222;
    *(_OWORD *)&v236[24] = v221;
    *(_OWORD *)&v236[8] = v220;
    if ( v41 != -1 )
    {
LABEL_35:
      *(_QWORD *)&v220 = v236;
      LOBYTE(v29) = *v182;
      *(_QWORD *)v226 = (char *)v212.m256i_i64 + 1;
      *(_QWORD *)&v226[8] = sub_1416B9630;
      *(_QWORD *)&v226[16] = &v212;
      *(_QWORD *)&v226[24] = sub_1416BCC50;
      *(_QWORD *)&v226[32] = &v220;
      *(_QWORD *)&v226[40] = sub_141049A00;
      sub_1416ABFD0(&v232, &unk_141A3B163, v226);
      a2 = v238;
      sub_140D229A0(v29, (unsigned int)aReconcile, 9, v39, v40, (__int64)&v232);
      goto LABEL_41;
    }
LABEL_40:
    LOBYTE(v29) = *v182;
    *(_QWORD *)&v195 = *(_QWORD *)&v236[32];
    *(_QWORD *)&v220 = *(_QWORD *)&v236[88];
    *(_QWORD *)v226 = (char *)v212.m256i_i64 + 1;
    *(_QWORD *)&v226[8] = sub_1416B9630;
    *(_QWORD *)&v226[16] = &v212;
    *(_QWORD *)&v226[24] = sub_1416BCC50;
    *(_QWORD *)&v226[32] = &v195;
    *(_QWORD *)&v226[40] = sub_1416BCB10;
    *(_QWORD *)&v226[48] = &v220;
    *(_QWORD *)&v226[56] = sub_1416BCB10;
    sub_1416ABFD0(&v232, &unk_141A3B11B, v226);
    a2 = v238;
    sub_140D229A0(v29, (unsigned int)aReconcile, 9, v39, v40, (__int64)&v232);
LABEL_41:
    *(_OWORD *)&v185[80] = *(_OWORD *)&v236[80];
    *(_OWORD *)&v185[64] = *(_OWORD *)&v236[64];
    *(_OWORD *)&v185[48] = *(_OWORD *)&v236[48];
    *(_OWORD *)&v185[32] = *(_OWORD *)&v236[32];
    *(_OWORD *)&v185[16] = *(_OWORD *)&v236[16];
    *(_OWORD *)v185 = *(_OWORD *)v236;
    *(_QWORD *)&v226[48] = v180;
    *(_OWORD *)&v226[32] = v179;
    *(_OWORD *)&v226[16] = v178;
    *(_OWORD *)v226 = v177;
    v248 = 1;
    sub_140EC14F0(&v195, v226);
    *(_OWORD *)&v226[80] = *(_OWORD *)&v185[80];
    *(_OWORD *)&v226[64] = *(_OWORD *)&v185[64];
    *(_OWORD *)&v226[48] = *(_OWORD *)&v185[48];
    *(_OWORD *)&v226[32] = *(_OWORD *)&v185[32];
    *(_OWORD *)&v226[16] = *(_OWORD *)&v185[16];
    *(_OWORD *)v226 = *(_OWORD *)v185;
    v231 = v200;
    v230 = v199;
    v229 = v198;
    v228 = v197;
    v227 = v196;
    *(_OWORD *)&v226[96] = v195;
    if ( *(_QWORD *)v185 == -1 )
    {
      if ( *(_QWORD *)&v226[96] != -1 )
      {
        v184 = *(_QWORD *)v226;
        *(_OWORD *)&v236[80] = v200;
        *(_OWORD *)&v236[64] = v199;
        *(_OWORD *)&v236[48] = v198;
        *(_OWORD *)&v236[32] = v197;
        *(_OWORD *)&v236[16] = v196;
        *(_OWORD *)v236 = v195;
        *(_QWORD *)&v220 = 0;
        *((_QWORD *)&v220 + 1) = 1;
        *(_QWORD *)&v221 = 0;
        *(_QWORD *)v233 = 1610612768;
        *(_QWORD *)&v232 = &v220;
        *((_QWORD *)&v232 + 1) = &off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v236, &v232) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v251,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v240 = *((_QWORD *)&v220 + 1);
        v244 = v220;
        sub_140C75030(a2, (__int128 *)v256);
        if ( v244 )
          sub_140001660(v240, v244, 1);
        *(_QWORD *)&v232 = &v255;
        *((_QWORD *)&v232 + 1) = sub_1416B9630;
        *(_QWORD *)v233 = v236;
        *(_QWORD *)&v233[8] = sub_14104A7D0;
        sub_1416ABFD0(v151, &unk_141A3A180, &v232);
        sub_140BBE8E0(v256, (int)aSettleFailed, 13, v151);
        a1[5] = *(_OWORD *)&v236[80];
        a1[4] = *(_OWORD *)&v236[64];
        v102 = *(_OWORD *)v236;
        v103 = *(_OWORD *)&v236[16];
        v104 = *(_OWORD *)&v236[32];
        a1[3] = *(_OWORD *)&v236[48];
        a1[2] = v104;
        a1[1] = v103;
        *a1 = v102;
        v105 = v255;
        *((_BYTE *)a1 + 96) = 3;
        *((_BYTE *)a1 + 97) = v105;
        sub_140BAD350(&v226[8]);
        sub_1403FAE40(&v226[72]);
        result = *(_QWORD *)&v226[72];
        if ( !*(_QWORD *)&v226[72] )
          return result;
        v106 = *(_QWORD *)&v226[80];
        goto LABEL_154;
      }
      *(_QWORD *)&v225 = *(_QWORD *)&v185[88];
      v224 = *(_OWORD *)&v185[72];
      v223 = *(_OWORD *)&v185[56];
      v222 = *(_OWORD *)&v185[40];
      v221 = *(_OWORD *)&v185[24];
      v220 = *(_OWORD *)&v185[8];
      v210 = *(_DWORD *)&v226[104];
      v211 = v226[108];
      v49 = *v175;
      v50 = *(_QWORD *)(v173 + 24);
      v242 = 1;
      v241 = 1;
      sub_140D8FC20((unsigned int)&v205, v50, v174, v49, (*(_DWORD *)&v226[104] == 0) & (v226[108] ^ 1));
      v54 = v207;
      v55 = v236;
      if ( !v207 )
      {
        if ( (v210 || (v211 & 1) != 0) && *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)v226 = &v256;
          *(_QWORD *)&v226[8] = sub_140C98D50;
          *(_QWORD *)&v226[16] = &v255;
          *(_QWORD *)&v226[24] = sub_1416B9630;
          *(_QWORD *)&v226[32] = &v210;
          *(_QWORD *)&v226[40] = sub_1416BBD00;
          *(_QWORD *)&v226[48] = &v211;
          *(_QWORD *)&v226[56] = sub_1416BCC50;
          *(_QWORD *)v236 = aCodexmateLibCo_31;
          *(_QWORD *)&v236[8] = 45;
          *(_QWORD *)&v236[16] = aCodexmateLibCo_31;
          *(_QWORD *)&v236[24] = 45;
          *(_QWORD *)&v236[32] = &off_141A3A078;
          v247 = 1;
          v246 = 1;
          sub_140BAD520(&unk_141A3A000, v226, 2, v236);
        }
        *(_QWORD *)&v233[64] = v225;
        *(_OWORD *)&v233[48] = v224;
        *(_OWORD *)&v233[32] = v223;
        *(_OWORD *)&v233[16] = v222;
        *(_OWORD *)v233 = v221;
        v232 = v220;
        LOBYTE(v40) = v256;
        v107 = v215;
        v201 = v215;
        v254 = 1;
        v253 = 1;
        v203 = sub_14167FC00(v55, v51, v52, v53);
        v204 = v108;
        v254 = 1;
        v253 = 1;
        sub_1410255B0((unsigned int)v226, (_DWORD)v238, v40, v107, *((__int64 *)&v107 + 1));
        if ( *(_DWORD *)v226 != -1 )
        {
          *(_OWORD *)&v236[80] = *(_OWORD *)&v226[80];
          *(_OWORD *)&v236[64] = *(_OWORD *)&v226[64];
          *(_OWORD *)&v236[48] = *(_OWORD *)&v226[48];
          *(_OWORD *)&v236[32] = *(_OWORD *)&v226[32];
          *(_OWORD *)&v236[16] = *(_OWORD *)&v226[16];
          *(_OWORD *)v236 = *(_OWORD *)v226;
          goto LABEL_156;
        }
        v217.m256i_i64[0] = (__int64)&v232;
        *(_OWORD *)&v217.m256i_u64[1] = v157;
        v117 = *a13;
        v254 = 1;
        v253 = 1;
        sub_140D883F0((unsigned int)v236, a12, (unsigned int)&v232, v117, (__int64)&v217.m256i_i64[1]);
        if ( *(_QWORD *)v236 != -1 )
        {
LABEL_156:
          *(_OWORD *)&v226[80] = *(_OWORD *)&v236[80];
          *(_OWORD *)&v226[64] = *(_OWORD *)&v236[64];
          *(_OWORD *)&v226[48] = *(_OWORD *)&v236[48];
          *(_OWORD *)&v226[32] = *(_OWORD *)&v236[32];
          *(_OWORD *)&v226[16] = *(_OWORD *)&v236[16];
          *(_OWORD *)v226 = *(_OWORD *)v236;
          v212.m256i_i64[0] = 0;
          *(_OWORD *)&v212.m256i_u64[1] = 1u;
          v217.m256i_i64[2] = 1610612768;
          v217.m256i_i64[0] = (__int64)&v212;
          v217.m256i_i64[1] = (__int64)&off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(v226, &v217) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v251,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v240 = v212.m256i_i64[1];
          v244 = v212.m256i_i64[0];
          sub_140C75030(v238, (__int128 *)v40);
          if ( v244 )
            sub_140001660(v240, v244, 1);
          v217.m256i_i64[0] = (__int64)&v201;
          v217.m256i_i64[1] = (__int64)sub_140186EE0;
          v217.m256i_i64[2] = (__int64)v226;
          v217.m256i_i64[3] = (__int64)sub_14104A7D0;
          sub_1416ABFD0(&v208, &unk_141A39F29, &v217);
          sub_140BBE8E0(v40, (int)aCommitFailed, 13, &v208);
          v119 = *(_QWORD *)&v226[8];
          v118 = *(_QWORD *)v226;
          v121 = *(_QWORD *)&v226[24];
          v120 = *(__int128 **)&v226[16];
          v212 = *(__m256i *)&v226[32];
          v213 = *(_OWORD *)&v226[64];
          v214 = *(_OWORD *)&v226[80];
          sub_140BAD350(&v232);
          v122 = 1;
          goto LABEL_160;
        }
        v254 = 1;
        v253 = 1;
        v127 = sub_1401BD880(*(_QWORD *)&v236[8]);
        v130 = v127;
        if ( v127 )
        {
          v168 = v127;
          v131 = v127 & 3;
          switch ( v127 & 3 )
          {
            case 0uLL:
              LOBYTE(v127) = *(_BYTE *)(v127 + 16);
              break;
            case 1uLL:
              LOBYTE(v127) = *(_BYTE *)(v127 + 31);
              break;
            case 2uLL:
              v245 = 1;
              v134 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v129, v128) + 8);
              v245 = 1;
              LOBYTE(v127) = v134(HIDWORD(v130));
              break;
            case 3uLL:
              v127 >>= 32;
              break;
          }
          v236[0] = v127;
          *(_QWORD *)v226 = v236;
          *(_QWORD *)&v226[8] = sub_140C9E0F0;
          v245 = 1;
          sub_1416ABFD0(v188, &unk_141A39D4C, v226);
          v245 = 1;
          sub_140BBE8E0(v40, (int)aCommitSyncUnco, 23, v188);
          v135 = *((_QWORD *)v238 + 97);
          v136 = *((_QWORD *)v238 + 98);
          v245 = 1;
          sub_1410237A0(
            v135,
            v136,
            v40,
            (unsigned int)&unk_141A6FF17,
            23,
            v201,
            *((__int64 *)&v201 + 1),
            (__int64)&unk_141A702FA,
            28);
          v209 = *(_QWORD *)&v233[64];
          v208 = *(_OWORD *)&v233[48];
          sub_141026E80(v226);
          v217.m256i_i64[0] = 0;
          *(_OWORD *)&v217.m256i_u64[1] = 1u;
          *(_QWORD *)&v236[16] = 1610612768;
          *(_QWORD *)v236 = &v217;
          *(_QWORD *)&v236[8] = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(v226, v236) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v251,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v244 = v217.m256i_i64[1];
          v238 = (__int128 *)v217.m256i_i64[0];
          v137 = v217.m256i_i64[2];
          v138 = v209;
          if ( v209 == (_QWORD)v208 )
            sub_14190FDC0(&v208);
          v139 = *((_QWORD *)&v208 + 1);
          v140 = 3 * v138;
          *(_QWORD *)(*((_QWORD *)&v208 + 1) + 8 * v140) = v238;
          *(_QWORD *)(v139 + 8 * v140 + 8) = v244;
          *(_QWORD *)(v139 + 8 * v140 + 16) = v137;
          v209 = v138 + 1;
          sub_140BAC840(v226);
          *(_OWORD *)v212.m256i_i8 = v232;
          *(_OWORD *)&v212.m256i_u64[2] = *(_OWORD *)v233;
          v213 = *(_OWORD *)&v233[16];
          v214 = *(_OWORD *)&v233[32];
          v120 = *((__int128 **)&v208 + 1);
          v119 = v208;
          v121 = v209;
          if ( (unsigned int)(v131 - 2) >= 2 && (v130 & 3) != 0 )
          {
            *(_QWORD *)&v226[8] = v130 - 1;
            v226[0] = 3;
            v254 = 0;
            v253 = 0;
            sub_1416BCB00(&v226[8]);
          }
          v118 = 2;
          goto LABEL_186;
        }
        if ( *(_QWORD *)&v233[64] )
        {
          v254 = 1;
          v253 = 1;
          sub_140D1EE10((unsigned int)v226, *(_DWORD *)&v233[56], *(_DWORD *)&v233[64], (unsigned int)&unk_141A39BD6, 3);
          v240 = *(_QWORD *)&v226[8];
          v244 = *(_QWORD *)v226;
          sub_141026C20(
            (unsigned int)v236,
            (_DWORD)v238,
            v40,
            v201,
            *((__int64 *)&v201 + 1),
            *(__int64 *)&v226[8],
            *(__int64 *)&v226[16]);
          if ( *(_DWORD *)v236 != -1 )
          {
            *(_OWORD *)&v226[80] = *(_OWORD *)&v236[80];
            *(_OWORD *)&v226[64] = *(_OWORD *)&v236[64];
            *(_OWORD *)&v226[48] = *(_OWORD *)&v236[48];
            *(_OWORD *)&v226[32] = *(_OWORD *)&v236[32];
            *(_OWORD *)&v226[16] = *(_OWORD *)&v236[16];
            *(_OWORD *)v226 = *(_OWORD *)v236;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v212.m256i_i64[0] = (__int64)v226;
              v212.m256i_i64[1] = (__int64)sub_14104A7D0;
              v217.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
              v217.m256i_i64[1] = 45;
              v217.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
              v217.m256i_i64[3] = 45;
              *(_QWORD *)&v218 = &off_141A39EC0;
              sub_140BAD520(&unk_141A39E7E, &v212, 2, &v217);
            }
            sub_140BAC840(v226);
          }
          if ( v244 )
            sub_140001660(v240, v244, 1);
          v254 = 1;
          v253 = 1;
          v132 = sub_14167FD50(&v203);
          *(_OWORD *)v236 = 0x3E8 * (unsigned __int128)(unsigned __int64)v132 + v133 / 0xF4240uLL;
          v217.m256i_i64[0] = *(_QWORD *)&v233[64];
          *(_QWORD *)v226 = &v201;
          *(_QWORD *)&v226[8] = sub_140186EE0;
          *(_QWORD *)&v226[16] = v236;
          *(_QWORD *)&v226[24] = sub_1416B95D0;
          *(_QWORD *)&v226[32] = &v217;
          *(_QWORD *)&v226[40] = sub_1416BCB10;
          v254 = 1;
          v253 = 1;
          sub_1416ABFD0(v187, &unk_141A39ED8, v226);
          v254 = 1;
          v253 = 1;
          sub_140BBE8E0(v40, (int)aDegraded, 8, v187);
          v214 = *(_OWORD *)&v233[32];
          v213 = *(_OWORD *)&v233[16];
          *(_OWORD *)&v212.m256i_u64[2] = *(_OWORD *)v233;
          *(_OWORD *)v212.m256i_i8 = v232;
          v120 = *(__int128 **)&v233[56];
          v119 = *(_QWORD *)&v233[48];
          v118 = 1;
          v121 = *(_QWORD *)&v233[64];
          goto LABEL_186;
        }
        v254 = 1;
        v253 = 1;
        sub_141022500(v236, v238, v40);
        if ( *(_DWORD *)v236 == -1 )
        {
          v254 = 1;
          v253 = 1;
          v144 = sub_14167FD50(&v203);
          *(_OWORD *)v236 = 0x3E8 * (unsigned __int128)(unsigned __int64)v144 + v145 / 0xF4240uLL;
          *(_QWORD *)v226 = &v201;
          *(_QWORD *)&v226[8] = sub_140186EE0;
          *(_QWORD *)&v226[16] = v236;
          *(_QWORD *)&v226[24] = sub_1416B95D0;
          v254 = 1;
          v253 = 1;
          sub_1416ABFD0(v186, &unk_141A39E59, v226);
          v254 = 1;
          v253 = 1;
          sub_140BBE8E0(v40, (int)aStable, 6, v186);
          v120 = *((__int128 **)&v232 + 1);
          v119 = v232;
          v121 = *(_QWORD *)v233;
          v212 = *(__m256i *)&v233[8];
          *(_QWORD *)&v213 = *(_QWORD *)&v233[40];
          sub_140025530(&v233[48]);
          v118 = 0;
          goto LABEL_186;
        }
        *(_OWORD *)&v226[80] = *(_OWORD *)&v236[80];
        *(_OWORD *)&v226[64] = *(_OWORD *)&v236[64];
        *(_OWORD *)&v226[48] = *(_OWORD *)&v236[48];
        *(_OWORD *)&v226[32] = *(_OWORD *)&v236[32];
        *(_OWORD *)&v226[16] = *(_OWORD *)&v236[16];
        *(_OWORD *)v226 = *(_OWORD *)v236;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v212.m256i_i64[0] = (__int64)v226;
          v212.m256i_i64[1] = (__int64)sub_14104A7D0;
          v217.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
          v217.m256i_i64[1] = 45;
          v217.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
          v217.m256i_i64[3] = 45;
          *(_QWORD *)&v218 = &off_141A39DD8;
          v237 = 1;
          sub_140BAD520(&unk_141A39D6B, &v212, 2, &v217);
        }
        v219 = *(_OWORD *)&v233[32];
        v218 = *(_OWORD *)&v233[16];
        *(_OWORD *)&v217.m256i_u64[2] = *(_OWORD *)v233;
        *(_OWORD *)v217.m256i_i8 = v232;
        v238 = (__int128 *)sub_140C23890(24);
        v212.m256i_i64[0] = (__int64)v226;
        v212.m256i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v189, &unk_141A39E1D, &v212);
        v120 = v238;
        *((_QWORD *)v238 + 2) = v190;
        *v120 = v189;
        v212 = v217;
        v213 = v218;
        v214 = v219;
        v254 = 0;
        v253 = 1;
        sub_140BAC840(v226);
        a1 = v192;
        v119 = 1;
        v122 = 0;
        v121 = 1;
        v118 = 1;
LABEL_160:
        sub_1403FAE40(&v233[48]);
        if ( *(_QWORD *)&v233[48] )
          sub_140001660(*(_QWORD *)&v233[56], 24LL * *(_QWORD *)&v233[48], 8);
        if ( v122 )
        {
          v123 = *(_OWORD *)v212.m256i_i8;
          v124 = *(_OWORD *)&v212.m256i_u64[2];
          v125 = v213;
          a1[5] = v214;
          a1[4] = v125;
          a1[3] = v124;
          a1[2] = v123;
          v126 = v255;
          *(_QWORD *)a1 = v118;
          *((_QWORD *)a1 + 1) = v119;
          *((_QWORD *)a1 + 2) = v120;
          *((_QWORD *)a1 + 3) = v121;
          *((_BYTE *)a1 + 96) = 5;
          *((_BYTE *)a1 + 97) = v126;
        }
        else
        {
LABEL_186:
          v141 = *(_OWORD *)v212.m256i_i8;
          v142 = *(_OWORD *)&v212.m256i_u64[2];
          v143 = v213;
          *(__int128 *)((char *)a1 + 88) = v214;
          *(__int128 *)((char *)a1 + 72) = v143;
          *(__int128 *)((char *)a1 + 56) = v142;
          *(__int128 *)((char *)a1 + 40) = v141;
          *((_QWORD *)a1 + 1) = v118;
          *((_QWORD *)a1 + 2) = v119;
          *((_QWORD *)a1 + 3) = v120;
          *((_QWORD *)a1 + 4) = v121;
          *(_QWORD *)a1 = -1;
        }
        result = sub_1403FAC20(&v205);
        if ( !v205 )
          return result;
        v106 = v206;
        v116 = 32 * v205;
        return sub_140001660(v106, v116, 8);
      }
      v247 = 1;
      v246 = 1;
      v240 = v206;
      sub_1403EBE40(v236, v206, v206 + 32 * v207);
      v56 = *(_QWORD *)&v236[8];
      v57 = *(_QWORD *)&v236[16];
      sub_140D1EE10((unsigned int)v226, *(_DWORD *)&v236[8], *(_DWORD *)&v236[16], (unsigned int)&unk_141A39BD6, 3);
      v217.m256i_i64[2] = *(_QWORD *)&v226[16];
      *(_OWORD *)v217.m256i_i8 = *(_OWORD *)v226;
      if ( v57 )
      {
        v62 = (_QWORD *)(v56 + 8);
        do
        {
          v58 = *(v62 - 1);
          if ( v58 )
            sub_140001660(*v62, v58, 1);
          v62 += 3;
          --v57;
        }
        while ( v57 );
      }
      if ( *(_QWORD *)v236 )
        sub_140001660(v56, 24LL * *(_QWORD *)v236, 8);
      v250 = 1;
      v249 = 1;
      v63 = sub_14167FC00(v59, v58, v60, v61);
      a2 = v238;
      v65 = v240;
      if ( v243 )
      {
        *(_QWORD *)v233 = *(_QWORD *)&v185[88];
        v232 = *(_OWORD *)&v185[72];
        *(_QWORD *)v226 = &v217;
        *(_QWORD *)&v226[8] = sub_1400015F0;
        v239 = 1;
        sub_1416ABFD0(v149, &unk_141A3A0DE, v226);
        v239 = 1;
        sub_1401F4600(&v232, v149);
        *(_OWORD *)&v236[48] = *(_OWORD *)&v185[56];
        *(_OWORD *)&v236[32] = *(_OWORD *)&v185[40];
        *(_OWORD *)&v236[16] = *(_OWORD *)&v185[24];
        *(_OWORD *)v236 = *(_OWORD *)&v185[8];
        *(_OWORD *)&v236[64] = v232;
        *(_QWORD *)&v236[80] = *(_QWORD *)v233;
        v239 = 0;
        sub_140BBFA40(
          (__int64)v226,
          (__int64)a2,
          v256,
          v215,
          *((__int64 *)&v215 + 1),
          (__int128 *)v236,
          a12,
          a13,
          &v157);
        if ( v226[0] )
        {
          a1[5] = *(_OWORD *)&v226[88];
          a1[4] = *(_OWORD *)&v226[72];
          v109 = *(_OWORD *)&v226[8];
          v110 = *(_OWORD *)&v226[24];
          v111 = *(_OWORD *)&v226[40];
          a1[3] = *(_OWORD *)&v226[56];
          a1[2] = v111;
          a1[1] = v110;
          *a1 = v109;
          v112 = v255;
          *((_BYTE *)a1 + 96) = 5;
          *((_BYTE *)a1 + 97) = v112;
        }
        else
        {
          *(__int128 *)((char *)a1 + 88) = *(_OWORD *)&v226[88];
          *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v226[72];
          v113 = *(_OWORD *)&v226[8];
          v114 = *(_OWORD *)&v226[24];
          v115 = *(_OWORD *)&v226[40];
          *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v226[56];
          *(__int128 *)((char *)a1 + 40) = v115;
          *(__int128 *)((char *)a1 + 24) = v114;
          *(__int128 *)((char *)a1 + 8) = v113;
          *(_QWORD *)a1 = -1;
        }
        LODWORD(v238) = 0;
        goto LABEL_147;
      }
      if ( v210 )
      {
        if ( v255 > 2u )
          goto LABEL_129;
      }
      else if ( v255 > 2u || (v211 & 1) == 0 )
      {
        goto LABEL_129;
      }
      if ( v216 == -1 )
      {
        v250 = 1;
        v249 = 1;
        v194 = sub_1416A1240(v63, v64, 12, 0, (__int64)&off_141A3EA90);
        v216 = v71;
      }
      else
      {
        v69 = v64 < v216;
        v70 = v63 < v194;
        if ( v63 == v194 )
          v70 = v69;
        if ( !v70 )
        {
LABEL_129:
          *(_QWORD *)v226 = &v256;
          *(_QWORD *)&v226[8] = sub_140C98D50;
          *(_QWORD *)&v226[16] = &v217;
          *(_QWORD *)&v226[24] = sub_1400015F0;
          v250 = 1;
          v249 = 1;
          sub_1416ABFD0(&v153, &unk_141A3A090, v226);
          *(_OWORD *)&v226[8] = v153;
          *(_QWORD *)&v226[24] = v154;
          *(_QWORD *)v226 = 10;
          sub_140C9CF30(v236, v226);
          v244 = *(_QWORD *)&v236[8];
          sub_140C75030(a2, (__int128 *)v256);
          if ( *(_QWORD *)v236 )
            sub_140001660(v244, *(_QWORD *)v236, 1);
          *(_QWORD *)&v232 = v54;
          *(_QWORD *)v236 = &v255;
          *(_QWORD *)&v236[8] = sub_1416B9630;
          *(_QWORD *)&v236[16] = &v232;
          *(_QWORD *)&v236[24] = sub_1416BCB10;
          sub_1416ABFD0(v148, &unk_141A3A0B1, v236);
          sub_140BBE8E0(v256, (int)aPostconditionF, 20, v148);
          a1[5] = *(_OWORD *)&v226[80];
          a1[4] = *(_OWORD *)&v226[64];
          v98 = *(_OWORD *)v226;
          v99 = *(_OWORD *)&v226[16];
          v100 = *(_OWORD *)&v226[32];
          a1[3] = *(_OWORD *)&v226[48];
          a1[2] = v100;
          a1[1] = v99;
          *a1 = v98;
          v101 = v255;
          *((_BYTE *)a1 + 96) = 4;
          *((_BYTE *)a1 + 97) = v101;
          LOBYTE(v101) = 1;
          LODWORD(v238) = v101;
LABEL_147:
          if ( v217.m256i_i64[0] )
            sub_140001660(v217.m256i_i64[1], v217.m256i_i64[0], 1);
          result = sub_1403FAC20(&v205);
          if ( v205 )
            result = sub_140001660(v240, 32 * v205, 8);
          if ( !(_BYTE)v238 )
            return result;
          sub_140BAD350(&v220);
          sub_1403FAE40(&v224);
          result = v224;
          if ( !(_QWORD)v224 )
            return result;
          v106 = *((_QWORD *)&v224 + 1);
LABEL_154:
          v116 = 24 * result;
          return sub_140001660(v106, v116, 8);
        }
      }
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v236 = &v256;
        *(_QWORD *)&v236[8] = sub_140C98D50;
        *(_QWORD *)&v236[16] = &v255;
        *(_QWORD *)&v236[24] = sub_1416B9630;
        *(_QWORD *)&v236[32] = &v217;
        *(_QWORD *)&v236[40] = sub_1400015F0;
        *(_QWORD *)&v226[48] = 2;
        *(_QWORD *)&v226[56] = aCodexmateLibCo_31;
        *(_QWORD *)&v226[64] = 45;
        *(_QWORD *)&v226[80] = &unk_141A3A11B;
        *(_QWORD *)&v226[88] = v236;
        *(_QWORD *)v226 = 0;
        *(_QWORD *)&v226[8] = aCodexmateLibCo_31;
        *(_OWORD *)&v226[16] = 0x2Du;
        *(_QWORD *)&v226[32] = aSrcCoreRelayRo_0;
        *(_QWORD *)&v226[40] = 35;
        *(_QWORD *)&v226[72] = 0x17D00000001LL;
        v250 = 1;
        v249 = 1;
        sub_1414D53A0(&v251, v226);
      }
      v250 = 1;
      v249 = 1;
      sub_140C75030(a2, (__int128 *)v256);
      if ( v217.m256i_i64[0] )
        sub_140001660(v217.m256i_i64[1], v217.m256i_i64[0], 1);
      v72 = (_QWORD *)(v65 + 8);
      do
      {
        v73 = *(v72 - 1);
        if ( v73 )
          sub_140001660(*v72, v73, 1);
        v72 += 4;
        --v54;
      }
      while ( v54 );
      if ( v205 )
        sub_140001660(v65, 32 * v205, 8);
      sub_140BAD350(&v220);
      v74 = *((_QWORD *)&v224 + 1);
      v75 = v225;
      if ( (_QWORD)v225 )
      {
        v76 = (_QWORD *)(*((_QWORD *)&v224 + 1) + 8LL);
        do
        {
          v20 = *(v76 - 1);
          if ( v20 )
            sub_140001660(*v76, v20, 1);
          v76 += 3;
          --v75;
        }
        while ( v75 );
      }
      if ( (_QWORD)v224 )
        sub_140001660(v74, 24 * v224, 8);
    }
    else
    {
      v184 = *(_QWORD *)v226;
      if ( *(_QWORD *)&v226[96] != -1 )
      {
        v225 = *(_OWORD *)&v185[80];
        v224 = *(_OWORD *)&v185[64];
        v223 = *(_OWORD *)&v185[48];
        v222 = *(_OWORD *)&v185[32];
        v221 = *(_OWORD *)&v185[16];
        v220 = *(_OWORD *)v185;
        *(_OWORD *)&v233[64] = v200;
        *(_OWORD *)&v233[48] = v199;
        *(_OWORD *)&v233[32] = v198;
        *(_OWORD *)&v233[16] = v197;
        *(_OWORD *)v233 = v196;
        v232 = v195;
        *(_QWORD *)v236 = &v220;
        *(_QWORD *)&v236[8] = sub_14104A7D0;
        *(_QWORD *)&v236[16] = &v232;
        *(_QWORD *)&v236[24] = sub_14104A7D0;
        sub_1416ABFD0(&v155, &unk_141A3A21C, v236);
        *(_OWORD *)&v236[8] = v155;
        *(_QWORD *)&v236[24] = v156;
        *(_QWORD *)v236 = 10;
        v212.m256i_i64[0] = 0;
        *(_OWORD *)&v212.m256i_u64[1] = 1u;
        v217.m256i_i64[2] = 1610612768;
        v217.m256i_i64[0] = (__int64)&v212;
        v217.m256i_i64[1] = (__int64)&off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v236, &v217) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v251,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v240 = v212.m256i_i64[1];
        v244 = v212.m256i_i64[0];
        sub_140C75030(a2, (__int128 *)v256);
        if ( v244 )
          sub_140001660(v240, v244, 1);
        v217.m256i_i64[0] = (__int64)&v255;
        v217.m256i_i64[1] = (__int64)sub_1416B9630;
        v217.m256i_i64[2] = (__int64)v236;
        v217.m256i_i64[3] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(v150, &unk_141A3A180, &v217);
        sub_140BBE8E0(v256, (int)aReconcileFaile, 16, v150);
        a1[5] = *(_OWORD *)&v236[80];
        a1[4] = *(_OWORD *)&v236[64];
        v94 = *(_OWORD *)v236;
        v95 = *(_OWORD *)&v236[16];
        v96 = *(_OWORD *)&v236[32];
        a1[3] = *(_OWORD *)&v236[48];
        a1[2] = v96;
        a1[1] = v95;
        *a1 = v94;
        v97 = v255;
        *((_BYTE *)a1 + 96) = 2;
        *((_BYTE *)a1 + 97) = v97;
        sub_140BAC840(&v232);
        return sub_140BAC840(&v220);
      }
      *(_OWORD *)&v233[64] = *(_OWORD *)&v185[80];
      *(_OWORD *)&v233[48] = *(_OWORD *)&v185[64];
      *(_OWORD *)&v233[32] = *(_OWORD *)&v185[48];
      *(_OWORD *)&v233[16] = *(_OWORD *)&v185[32];
      *(_OWORD *)v233 = *(_OWORD *)&v185[16];
      v232 = *(_OWORD *)v185;
      v45 = *(_DWORD *)&v226[104];
      v46 = v226[108];
      v47 = sub_14167FC00(*(_QWORD *)v185, v42, v43, v44);
      if ( v243 )
        goto LABEL_109;
      if ( v45 )
      {
        if ( v255 > 2u )
          goto LABEL_109;
      }
      else if ( v255 > 2u || !v46 )
      {
        goto LABEL_109;
      }
      if ( v216 == -1 )
      {
        v194 = sub_1416A1240(v47, v48, 12, 0, (__int64)&off_141A3EA90);
        v216 = v68;
      }
      else
      {
        v66 = v48 < v216;
        v67 = v47 < v194;
        if ( v47 == v194 )
          v67 = v66;
        if ( !v67 )
        {
LABEL_109:
          *(_QWORD *)&v220 = 0;
          *((_QWORD *)&v220 + 1) = 1;
          *(_QWORD *)&v221 = 0;
          *(_QWORD *)&v236[16] = 1610612768;
          *(_QWORD *)v236 = &v220;
          *(_QWORD *)&v236[8] = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(&v232, v236) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v251,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v240 = *((_QWORD *)&v220 + 1);
          v244 = v220;
          sub_140C75030(a2, (__int128 *)v256);
          if ( v244 )
            sub_140001660(v240, v244, 1);
          *(_QWORD *)v236 = &v255;
          *(_QWORD *)&v236[8] = sub_1416B9630;
          *(_QWORD *)&v236[16] = &v232;
          *(_QWORD *)&v236[24] = sub_14104A7D0;
          sub_1416ABFD0(&v158, &unk_141A3A180, v236);
          v212.m256i_i8[0] = v256;
          v238 = (__int128 *)v159;
          *(_OWORD *)v217.m256i_i8 = v159;
          *(_QWORD *)v236 = &v212;
          *(_QWORD *)&v236[8] = sub_140C98D50;
          *(_QWORD *)&v236[16] = &v217;
          *(_QWORD *)&v236[24] = sub_140186EE0;
          sub_1416ABFD0(&v220, &unk_141A39D2E, v236);
          sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileFaile, 16, (__int64)&v220);
          if ( v158 )
            sub_140001660(v238, v158, 1);
          a1[5] = *(_OWORD *)&v233[64];
          a1[4] = *(_OWORD *)&v233[48];
          v80 = v232;
          v81 = *(_OWORD *)v233;
          v82 = *(_OWORD *)&v233[16];
          a1[3] = *(_OWORD *)&v233[32];
          a1[2] = v82;
          a1[1] = v81;
          *a1 = v80;
          result = v255;
          *((_BYTE *)a1 + 96) = 2;
          *((_BYTE *)a1 + 97) = result;
          return result;
        }
      }
      *(_QWORD *)&v220 = 0;
      *((_QWORD *)&v220 + 1) = 1;
      *(_QWORD *)&v221 = 0;
      *(_QWORD *)&v236[16] = 1610612768;
      *(_QWORD *)v236 = &v220;
      *(_QWORD *)&v236[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(&v232, v236) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v251,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v217.m256i_i64[2] = v221;
      *(_OWORD *)v217.m256i_i8 = v220;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v220 = &v256;
        *((_QWORD *)&v220 + 1) = sub_140C98D50;
        *(_QWORD *)&v221 = &v255;
        *((_QWORD *)&v221 + 1) = sub_1416B9630;
        *(_QWORD *)&v222 = &v217;
        *((_QWORD *)&v222 + 1) = sub_1400015F0;
        *(_QWORD *)&v236[48] = 2;
        *(_QWORD *)&v236[56] = aCodexmateLibCo_31;
        *(_QWORD *)&v236[64] = 45;
        *(_QWORD *)&v236[80] = &unk_141A3A1B1;
        *(_QWORD *)&v236[88] = &v220;
        *(_QWORD *)v236 = 0;
        *(_QWORD *)&v236[8] = aCodexmateLibCo_31;
        *(_OWORD *)&v236[16] = 0x2Du;
        *(_QWORD *)&v236[32] = aSrcCoreRelayRo_0;
        *(_QWORD *)&v236[40] = 35;
        *(_QWORD *)&v236[72] = 0x12E00000001LL;
        sub_1414D53A0(&v251, v236);
      }
      sub_140C75030(a2, (__int128 *)v256);
      *(_QWORD *)v236 = &v255;
      *(_QWORD *)&v236[8] = sub_1416B9630;
      *(_QWORD *)&v236[16] = &v217;
      *(_QWORD *)&v236[24] = sub_1400015F0;
      sub_1416ABFD0(&v160, &unk_141A3A180, v236);
      LOBYTE(v208) = v256;
      v240 = v161;
      *(_OWORD *)v212.m256i_i8 = v161;
      *(_QWORD *)v236 = &v208;
      *(_QWORD *)&v236[8] = sub_140C98D50;
      *(_QWORD *)&v236[16] = &v212;
      *(_QWORD *)&v236[24] = sub_140186EE0;
      sub_1416ABFD0(&v220, &unk_141A39D2E, v236);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)&v220);
      if ( v160 )
        sub_140001660(v240, v160, 1);
      if ( v217.m256i_i64[0] )
        sub_140001660(v217.m256i_i64[1], v217.m256i_i64[0], 1);
      sub_140BAC840(&v232);
    }
    v21 = v23;
    v22 = (unsigned int)v244;
  }
  nullsub_1(v22);
  v83 = (_OWORD *)sub_140001650(109, 1);
  if ( !v83 )
    sub_141938D2B(1, 109);
  *(_OWORD *)((char *)v83 + 93) = *(__int128 *)((char *)&xmmword_141A39F8C + 13);
  v83[5] = xmmword_141A39F8C;
  v83[4] = xmmword_141A39F7C;
  v83[3] = xmmword_141A39F6C;
  v83[2] = xmmword_141A39F5C;
  qmemcpy(v83, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
  *(_QWORD *)&v226[8] = 109;
  *(_QWORD *)&v226[16] = v83;
  *(_QWORD *)&v226[24] = 109;
  *(_QWORD *)v226 = 10;
  *(_QWORD *)&v232 = 0;
  *((_QWORD *)&v232 + 1) = 1;
  *(_QWORD *)v233 = 0;
  *(_QWORD *)&v236[16] = 1610612768;
  *(_QWORD *)v236 = &v232;
  *(_QWORD *)&v236[8] = &off_141A3FE88;
  if ( (unsigned __int8)sub_14104A7D0(v226, v236) )
    sub_141939040(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v251,
      (unsigned int)&unk_141A3BB68,
      (__int64)&off_141A3FF40);
  v240 = *((_QWORD *)&v232 + 1);
  v244 = v232;
  sub_140C75030(a2, (__int128 *)v256);
  if ( v244 )
    sub_140001660(v240, v244, 1);
  *(_QWORD *)&v232 = 0;
  *((_QWORD *)&v232 + 1) = 1;
  *(_QWORD *)v233 = 0;
  *(_QWORD *)&v236[16] = 1610612768;
  *(_QWORD *)v236 = &v232;
  *(_QWORD *)&v236[8] = &off_141A3FE88;
  if ( (unsigned __int8)sub_14104A7D0(v226, v236) )
    sub_141939040(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v251,
      (unsigned int)&unk_141A3BB68,
      (__int64)&off_141A3FF40);
  *(_QWORD *)&v221 = *(_QWORD *)v233;
  v220 = v232;
  result = sub_140BBE8E0(v256, (int)aRetryExhausted, 15, &v220);
  a1[5] = *(_OWORD *)&v226[80];
  a1[4] = *(_OWORD *)&v226[64];
  v84 = *(_OWORD *)v226;
  v85 = *(_OWORD *)&v226[16];
  v86 = *(_OWORD *)&v226[32];
  a1[3] = *(_OWORD *)&v226[48];
  a1[2] = v86;
  a1[1] = v85;
  *a1 = v84;
  *((_WORD *)a1 + 48) = 772;
  return result;
}
