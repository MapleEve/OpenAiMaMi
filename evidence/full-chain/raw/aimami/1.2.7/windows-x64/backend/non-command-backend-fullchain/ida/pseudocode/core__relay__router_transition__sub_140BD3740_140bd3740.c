// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bd3740 | name sub_140BD3740
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140BD3740(
        __int128 *a1,
        __int128 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int128 a5,
        __int64 *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int128 v13; // kr00_16
  __int128 v14; // kr10_16
  __int128 v15; // kr20_16
  __int128 v16; // kr30_16
  __int64 v18; // rdx
  int v19; // ebx
  char v20; // al
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // ebx
  char *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // esi
  char v36; // bl
  unsigned __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // r14
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rsi
  unsigned __int64 v51; // rax
  unsigned int v52; // edx
  int v53; // ebx
  bool v54; // cl
  bool v55; // dl
  int v56; // edx
  bool v57; // cl
  bool v58; // dl
  int v59; // edx
  _QWORD *v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // r14
  _QWORD *v64; // rsi
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  unsigned __int8 v71; // al
  _OWORD *v72; // rax
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  char v76; // al
  __int64 v77; // rax
  unsigned int v78; // edx
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm2
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm2
  unsigned __int8 v85; // al
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  int v89; // eax
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm2
  unsigned __int8 v93; // al
  __int64 v94; // rax
  __int64 v95; // rcx
  __int128 v96; // krC0_16
  int v97; // edx
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  unsigned __int8 v101; // al
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm2
  __int64 v105; // rdx
  int v106; // r9d
  __int64 v107; // rbx
  __int64 v108; // rdi
  _OWORD *v109; // rsi
  __int64 v110; // r15
  char v111; // r14
  __int128 v112; // xmm0
  __int128 v113; // xmm1
  __int128 v114; // xmm2
  __int128 *v115; // rcx
  unsigned __int8 v116; // al
  unsigned __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  unsigned __int64 v120; // r14
  int v121; // edi
  __int64 v122; // rax
  unsigned int v123; // edx
  __int64 (__fastcall *v124)(unsigned __int64); // rax
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rbx
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rcx
  __int128 v131; // xmm0
  __int128 v132; // xmm1
  __int128 v133; // xmm2
  __int128 *v134; // rax
  __int64 v135; // rax
  unsigned int v136; // edx
  __int128 v137; // [rsp+48h] [rbp-38h] BYREF
  __int64 v138; // [rsp+58h] [rbp-28h] BYREF
  __int128 v139; // [rsp+60h] [rbp-20h]
  __int64 v140; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int128 v141; // [rsp+78h] [rbp-8h]
  __int64 v142; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int128 v143; // [rsp+90h] [rbp+10h]
  unsigned __int64 v144; // [rsp+A0h] [rbp+20h]
  __int64 v145; // [rsp+A8h] [rbp+28h] BYREF
  int v146; // [rsp+B0h] [rbp+30h]
  __int64 v147; // [rsp+B8h] [rbp+38h]
  __int64 v148; // [rsp+C0h] [rbp+40h]
  __int64 v149; // [rsp+C8h] [rbp+48h]
  __int64 v150; // [rsp+D0h] [rbp+50h]
  __int64 v151; // [rsp+D8h] [rbp+58h]
  unsigned __int128 v152; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v153; // [rsp+F0h] [rbp+70h]
  __int128 v154; // [rsp+100h] [rbp+80h]
  __int128 v155; // [rsp+110h] [rbp+90h]
  __int128 v156; // [rsp+120h] [rbp+A0h]
  __int128 v157; // [rsp+130h] [rbp+B0h]
  __int128 v158; // [rsp+140h] [rbp+C0h]
  __int128 v159; // [rsp+150h] [rbp+D0h]
  __int128 v160; // [rsp+160h] [rbp+E0h]
  __int64 v161; // [rsp+170h] [rbp+F0h]
  __int64 v162; // [rsp+178h] [rbp+F8h]
  __int64 v163; // [rsp+180h] [rbp+100h]
  _QWORD v164[3]; // [rsp+188h] [rbp+108h] BYREF
  _QWORD v165[3]; // [rsp+1A0h] [rbp+120h] BYREF
  _QWORD v166[3]; // [rsp+1B8h] [rbp+138h] BYREF
  _BYTE v167[96]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v168; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v169; // [rsp+240h] [rbp+1C0h]
  unsigned __int64 v170; // [rsp+248h] [rbp+1C8h]
  __int128 v171; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 *v172; // [rsp+260h] [rbp+1E0h]
  int v173; // [rsp+26Ch] [rbp+1ECh]
  __int64 v174; // [rsp+270h] [rbp+1F0h] BYREF
  int v175; // [rsp+278h] [rbp+1F8h]
  __int64 v176; // [rsp+280h] [rbp+200h] BYREF
  __int64 v177; // [rsp+288h] [rbp+208h]
  __int64 v178; // [rsp+290h] [rbp+210h]
  int v179; // [rsp+298h] [rbp+218h] BYREF
  char v180; // [rsp+29Ch] [rbp+21Ch] BYREF
  unsigned __int128 v181; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v182; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v183; // [rsp+2C0h] [rbp+240h]
  __int128 v184; // [rsp+2D0h] [rbp+250h]
  __int128 v185; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v186; // [rsp+2F0h] [rbp+270h]
  __int128 v187; // [rsp+300h] [rbp+280h] BYREF
  __int128 v188; // [rsp+310h] [rbp+290h] BYREF
  __int64 v189; // [rsp+320h] [rbp+2A0h]
  __m256i v190; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v191; // [rsp+350h] [rbp+2D0h]
  __int128 v192; // [rsp+360h] [rbp+2E0h]
  _BYTE v193[112]; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v194; // [rsp+3E0h] [rbp+360h]
  __int128 v195; // [rsp+3F0h] [rbp+370h]
  __int128 v196; // [rsp+400h] [rbp+380h]
  __int128 v197; // [rsp+410h] [rbp+390h]
  __int128 v198; // [rsp+420h] [rbp+3A0h]
  __m256i v199; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v200; // [rsp+450h] [rbp+3D0h]
  __int128 v201; // [rsp+460h] [rbp+3E0h]
  __int64 v202; // [rsp+478h] [rbp+3F8h]
  unsigned __int128 v203; // [rsp+480h] [rbp+400h] BYREF
  _BYTE v204[48]; // [rsp+490h] [rbp+410h]
  __int128 v205; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v206; // [rsp+4D0h] [rbp+450h]
  __int128 *v207; // [rsp+4E0h] [rbp+460h]
  char v208; // [rsp+4EEh] [rbp+46Eh] BYREF
  unsigned __int8 v209; // [rsp+4EFh] [rbp+46Fh]
  _BYTE v210[48]; // [rsp+4F0h] [rbp+470h] BYREF
  _BYTE v211[48]; // [rsp+520h] [rbp+4A0h]
  char v212; // [rsp+557h] [rbp+4D7h]
  __int64 v213; // [rsp+558h] [rbp+4D8h]
  char v214; // [rsp+563h] [rbp+4E3h]
  char v215; // [rsp+564h] [rbp+4E4h]
  char v216; // [rsp+565h] [rbp+4E5h]
  unsigned __int8 v217; // [rsp+566h] [rbp+4E6h] BYREF
  char v218; // [rsp+567h] [rbp+4E7h]
  __int64 v219; // [rsp+568h] [rbp+4E8h]
  char v220; // [rsp+575h] [rbp+4F5h]
  char v221; // [rsp+576h] [rbp+4F6h]
  char v222; // [rsp+577h] [rbp+4F7h]
  char v223; // [rsp+578h] [rbp+4F8h]
  char v224; // [rsp+579h] [rbp+4F9h]
  char v225; // [rsp+57Ah] [rbp+4FAh]
  char v226; // [rsp+57Bh] [rbp+4FBh] BYREF
  char v227; // [rsp+57Ch] [rbp+4FCh]
  char v228; // [rsp+57Dh] [rbp+4FDh]
  unsigned __int8 v229; // [rsp+57Eh] [rbp+4FEh] BYREF
  unsigned __int8 v230; // [rsp+57Fh] [rbp+4FFh] BYREF
  __int64 v231; // [rsp+580h] [rbp+500h]

  v231 = -2;
  v230 = a3;
  v217 = a4;
  v187 = a5;
  sub_1410257E0(v193);
  v13 = *(_OWORD *)&v193[32];
  v203 = *(_OWORD *)&v193[48];
  *(_OWORD *)v204 = *(_OWORD *)&v193[64];
  if ( *(_QWORD *)v193 != -1 )
  {
    *(_OWORD *)&v211[32] = *(_OWORD *)&v193[80];
    *(_QWORD *)&v210[16] = *(_QWORD *)&v193[16];
    *(_OWORD *)&v210[24] = *(_OWORD *)&v193[24];
    *(_QWORD *)&v210[40] = *(_QWORD *)&v193[40];
    *(_OWORD *)v211 = v203;
    *(_OWORD *)&v211[16] = *(_OWORD *)v204;
    *(_OWORD *)v210 = *(_OWORD *)v193;
LABEL_3:
    a1[5] = *(_OWORD *)&v211[32];
    a1[4] = *(_OWORD *)&v211[16];
    v14 = *(_OWORD *)v210;
    v15 = *(_OWORD *)&v210[16];
    v16 = *(_OWORD *)&v210[32];
    a1[3] = *(_OWORD *)v211;
    a1[2] = v16;
    a1[1] = v15;
    *a1 = v14;
LABEL_4:
    *((_WORD *)a1 + 48) = 0;
    return a1;
  }
  if ( *(_QWORD *)&v193[8] != -1 )
  {
    if ( *(_QWORD *)&v193[8] )
      sub_140001660(*(_QWORD *)&v193[16], *(_QWORD *)&v193[8], 1);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v13 + 1), v13, 1);
  }
  sub_14023D790((__int64)v193, (__int64)a2);
  if ( *(_DWORD *)v193 == -1 )
  {
    sub_140EFE1A0(v210);
    if ( *(_QWORD *)v210 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v211[32] = *(_OWORD *)&v193[80];
    *(_OWORD *)&v211[16] = *(_OWORD *)&v193[64];
    *(_OWORD *)v211 = *(_OWORD *)&v193[48];
    *(_OWORD *)&v210[32] = *(_OWORD *)&v193[32];
    *(_OWORD *)&v210[16] = *(_OWORD *)&v193[16];
    *(_OWORD *)v210 = *(_OWORD *)v193;
    if ( *(_QWORD *)v193 != -1 )
      goto LABEL_3;
  }
  sub_141568C20(&v137);
  *(_QWORD *)v193 = &v217;
  *(_QWORD *)&v193[8] = sub_140C9DE00;
  *(_QWORD *)&v193[16] = &v187;
  *(_QWORD *)&v193[24] = sub_140186EE0;
  sub_1416ABFD0(&v142, &unk_141A39F10, v193);
  LOBYTE(v181) = v230;
  v219 = v143;
  v203 = v143;
  *(_QWORD *)v193 = &v181;
  *(_QWORD *)&v193[8] = sub_140C98D50;
  *(_QWORD *)&v193[16] = &v203;
  *(_QWORD *)&v193[24] = sub_140186EE0;
  sub_1416ABFD0(v210, &unk_141A39D2E, v193);
  sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_0, 5, (__int64)v210);
  if ( v142 )
    sub_140001660(v219, v142, 1);
  if ( !v217 )
  {
    sub_140267190((__int64 *)v210, (__int64)a2, 0);
    if ( *(_DWORD *)v210 != -1 )
    {
      *(_OWORD *)&v193[80] = *(_OWORD *)&v211[32];
      *(_OWORD *)&v193[64] = *(_OWORD *)&v211[16];
      *(_OWORD *)&v193[48] = *(_OWORD *)v211;
      *(_OWORD *)&v193[32] = *(_OWORD *)&v210[32];
      *(_OWORD *)&v193[16] = *(_OWORD *)&v210[16];
      *(_OWORD *)v193 = *(_OWORD *)v210;
      *(_QWORD *)&v181 = 0;
      *((_QWORD *)&v181 + 1) = 1;
      *(_QWORD *)&v182 = 0;
      *(_QWORD *)v204 = 1610612768;
      *(_QWORD *)&v203 = &v181;
      *((_QWORD *)&v203 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v193, &v203) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v226,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v213 = *((_QWORD *)&v181 + 1);
      v219 = v181;
      sub_140C75030(a2, (__int128 *)v230);
      if ( v219 )
        sub_140001660(v213, v219, 1);
      *(_QWORD *)&v203 = &v187;
      *((_QWORD *)&v203 + 1) = sub_140186EE0;
      *(_QWORD *)v204 = v193;
      *(_QWORD *)&v204[8] = sub_14104A7D0;
      sub_1416ABFD0(&v152, &unk_141A39F29, &v203);
      v199.m256i_i8[0] = v230;
      v219 = *((_QWORD *)&v152 + 1);
      *(_OWORD *)v167 = __PAIR128__(v153, *((unsigned __int64 *)&v152 + 1));
      *(_QWORD *)&v203 = &v199;
      *((_QWORD *)&v203 + 1) = sub_140C98D50;
      *(_QWORD *)v204 = v167;
      *(_QWORD *)&v204[8] = sub_140186EE0;
      sub_1416ABFD0(&v181, &unk_141A39D2E, &v203);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)&v181);
      if ( (_QWORD)v152 )
        sub_140001660(v219, v152, 1);
      a1[5] = *(_OWORD *)&v193[80];
      a1[4] = *(_OWORD *)&v193[64];
      v65 = *(_OWORD *)v193;
      v66 = *(_OWORD *)&v193[16];
      v67 = *(_OWORD *)&v193[32];
      a1[3] = *(_OWORD *)&v193[48];
      a1[2] = v67;
      a1[1] = v66;
      *a1 = v65;
      goto LABEL_4;
    }
  }
  v209 = a4;
  v147 = 2LL * (a4 ^ 1u) + 3;
  v148 = *a6;
  v162 = a6[1];
  v18 = a6[2];
  v149 = v18;
  v150 = a6[3];
  v151 = *(_QWORD *)(a7 + 24);
  v19 = -1;
  v20 = 1;
  v21 = 0;
  v172 = a1;
  v207 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (v21 & 1) != 0 || (unsigned __int8)v20 > 3u )
      {
        nullsub_1(v21);
        v72 = (_OWORD *)sub_140001650(109, 1);
        if ( !v72 )
          sub_141938D2B(1, 109);
        *(_OWORD *)((char *)v72 + 93) = *(__int128 *)((char *)&xmmword_141A39F8C + 13);
        v72[5] = xmmword_141A39F8C;
        v72[4] = xmmword_141A39F7C;
        v72[3] = xmmword_141A39F6C;
        v72[2] = xmmword_141A39F5C;
        qmemcpy(v72, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
        *(_QWORD *)&v193[8] = 109;
        *(_QWORD *)&v193[16] = v72;
        *(_QWORD *)&v193[24] = 109;
        *(_QWORD *)v193 = 10;
        *(_QWORD *)&v203 = 0;
        *((_QWORD *)&v203 + 1) = 1;
        *(_QWORD *)v204 = 0;
        *(_QWORD *)&v210[16] = 1610612768;
        *(_QWORD *)v210 = &v203;
        *(_QWORD *)&v210[8] = &off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v193, v210) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v226,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v213 = *((_QWORD *)&v203 + 1);
        v219 = v203;
        sub_140C75030(a2, (__int128 *)v230);
        if ( v219 )
          sub_140001660(v213, v219, 1);
        *(_QWORD *)&v203 = 0;
        *((_QWORD *)&v203 + 1) = 1;
        *(_QWORD *)v204 = 0;
        *(_QWORD *)&v210[16] = 1610612768;
        *(_QWORD *)v210 = &v203;
        *(_QWORD *)&v210[8] = &off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v193, v210) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v226,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        *(_QWORD *)&v182 = *(_QWORD *)v204;
        v181 = v203;
        sub_140BBE8E0(v230, (int)aRetryExhausted, 15, &v181);
        a1[5] = *(_OWORD *)&v193[80];
        a1[4] = *(_OWORD *)&v193[64];
        v73 = *(_OWORD *)v193;
        v74 = *(_OWORD *)&v193[16];
        v75 = *(_OWORD *)&v193[32];
        a1[3] = *(_OWORD *)&v193[48];
        a1[2] = v75;
        a1[1] = v74;
        *a1 = v73;
        *((_WORD *)a1 + 48) = 772;
        return a1;
      }
      LODWORD(v219) = v19;
      LOBYTE(v18) = v20 == 3;
      LODWORD(v213) = v18;
      v22 = (unsigned __int8)(v20 + 1);
      if ( v20 == 3 )
        v22 = 3;
      v173 = v22;
      v229 = v20;
      sub_140C75030(a2, (__int128 *)v230);
      v145 = sub_14167FC00(v24, v23, v25, v26);
      v146 = v27;
      sub_140EC0AC0((unsigned int)v193, v147, 0, v209, 0);
      *(_DWORD *)((char *)&v203 + 3) = *(_DWORD *)&v193[12];
      LODWORD(v203) = *(_DWORD *)&v193[9];
      *(_DWORD *)((char *)&v181 + 3) = *(_DWORD *)&v193[20];
      LODWORD(v181) = *(_DWORD *)&v193[17];
      *(_DWORD *)((char *)&v152 + 3) = *(_DWORD *)&v193[28];
      LODWORD(v152) = *(_DWORD *)&v193[25];
      *(_DWORD *)v167 = *(_DWORD *)&v193[33];
      *(_DWORD *)&v167[3] = *(_DWORD *)&v193[36];
      *(__int32 *)((char *)v199.m256i_i32 + 3) = *(_DWORD *)&v193[44];
      v199.m256i_i32[0] = *(_DWORD *)&v193[41];
      *(__int32 *)((char *)v190.m256i_i32 + 3) = *(_DWORD *)&v193[52];
      v190.m256i_i32[0] = *(_DWORD *)&v193[49];
      *(_DWORD *)((char *)&v158 + 3) = *(_DWORD *)&v193[60];
      LODWORD(v158) = *(_DWORD *)&v193[57];
      if ( *(_QWORD *)v193 != -1 )
      {
        LODWORD(v174) = *(_DWORD *)&v193[65];
        *(_DWORD *)((char *)&v174 + 3) = *(_DWORD *)&v193[68];
        *(_QWORD *)&v211[40] = *(_QWORD *)&v193[88];
        *(_OWORD *)&v211[24] = *(_OWORD *)&v193[72];
        *(_DWORD *)&v210[9] = v203;
        *(_DWORD *)&v210[12] = *(_DWORD *)((char *)&v203 + 3);
        LODWORD(v188) = v181;
        *(_DWORD *)((char *)&v188 + 3) = *(_DWORD *)((char *)&v181 + 3);
        *(_DWORD *)((char *)v164 + 3) = *(_DWORD *)((char *)&v152 + 3);
        LODWORD(v164[0]) = v152;
        *(_DWORD *)((char *)&v168 + 3) = *(_DWORD *)&v167[3];
        LODWORD(v168) = *(_DWORD *)v167;
        *(_DWORD *)((char *)v165 + 3) = *(__int32 *)((char *)v199.m256i_i32 + 3);
        LODWORD(v165[0]) = v199.m256i_i32[0];
        *(_DWORD *)((char *)v166 + 3) = *(__int32 *)((char *)v190.m256i_i32 + 3);
        LODWORD(v166[0]) = v190.m256i_i32[0];
        *(_DWORD *)((char *)&v176 + 3) = *(_DWORD *)((char *)&v158 + 3);
        LODWORD(v176) = v158;
        *(_QWORD *)v210 = *(_QWORD *)v193;
        v210[8] = v193[8];
        v210[16] = v193[16];
        *(_DWORD *)&v210[20] = *(_DWORD *)((char *)&v181 + 3);
        *(_DWORD *)&v210[17] = v188;
        v210[24] = v193[24];
        *(_DWORD *)&v210[28] = *(_DWORD *)((char *)v164 + 3);
        *(_DWORD *)&v210[25] = v152;
        v210[32] = v193[32];
        *(_DWORD *)&v210[36] = *(_DWORD *)((char *)&v168 + 3);
        *(_DWORD *)&v210[33] = *(_DWORD *)v167;
        v210[40] = v193[40];
        *(_DWORD *)&v210[44] = *(_DWORD *)((char *)v165 + 3);
        *(_DWORD *)&v210[41] = v199.m256i_i32[0];
        v211[0] = v193[48];
        *(_DWORD *)&v211[4] = *(_DWORD *)((char *)v166 + 3);
        *(_DWORD *)&v211[1] = v190.m256i_i32[0];
        v211[8] = v193[56];
        *(_DWORD *)&v211[12] = *(_DWORD *)((char *)&v176 + 3);
        *(_DWORD *)&v211[9] = v158;
        v211[16] = v193[64];
        *(_DWORD *)&v211[20] = *(_DWORD *)&v193[68];
        *(_DWORD *)&v211[17] = v174;
        *(_QWORD *)&v203 = 0;
        *((_QWORD *)&v203 + 1) = 1;
        *(_QWORD *)v204 = 0;
        *(_QWORD *)&v193[16] = 1610612768;
        *(_QWORD *)v193 = &v203;
        *(_QWORD *)&v193[8] = &off_141A3FE88;
        v76 = sub_14104A7D0(v210, v193);
        a1 = v172;
        if ( v76 )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v226,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v213 = *((_QWORD *)&v203 + 1);
        v219 = v203;
        sub_140C75030(v207, (__int128 *)v230);
        if ( v219 )
          sub_140001660(v213, v219, 1);
        v77 = sub_14167FD50(&v145);
        v181 = 0x3E8 * (unsigned __int128)(unsigned __int64)v77 + v78 / 0xF4240uLL;
        *(_QWORD *)v193 = &v229;
        *(_QWORD *)&v193[8] = sub_1416B9630;
        *(_QWORD *)&v193[16] = &v181;
        *(_QWORD *)&v193[24] = sub_1416B95D0;
        *(_QWORD *)&v193[32] = v210;
        *(_QWORD *)&v193[40] = sub_14104A7D0;
        sub_1416ABFD0(&v203, &unk_141A3A247, v193);
        sub_140BBE8E0(v230, (int)aStopFailed, 11, &v203);
        a1[5] = *(_OWORD *)&v211[32];
        a1[4] = *(_OWORD *)&v211[16];
        v79 = *(_OWORD *)v210;
        v80 = *(_OWORD *)&v210[16];
        v81 = *(_OWORD *)&v210[32];
        a1[3] = *(_OWORD *)v211;
        a1[2] = v81;
        a1[1] = v80;
        *a1 = v79;
        v71 = v229;
        *((_BYTE *)a1 + 96) = 1;
        goto LABEL_118;
      }
      LODWORD(v188) = v203;
      *(_DWORD *)((char *)&v188 + 3) = *(_DWORD *)((char *)&v203 + 3);
      LODWORD(v164[0]) = v181;
      *(_DWORD *)((char *)v164 + 3) = *(_DWORD *)((char *)&v181 + 3);
      LODWORD(v168) = v152;
      *(_DWORD *)((char *)&v168 + 3) = *(_DWORD *)((char *)&v152 + 3);
      LODWORD(v165[0]) = *(_DWORD *)v167;
      *(_DWORD *)((char *)v165 + 3) = *(_DWORD *)&v167[3];
      *(_DWORD *)((char *)v166 + 3) = *(__int32 *)((char *)v199.m256i_i32 + 3);
      LODWORD(v166[0]) = v199.m256i_i32[0];
      *(_DWORD *)((char *)&v176 + 3) = *(__int32 *)((char *)v190.m256i_i32 + 3);
      LODWORD(v176) = v190.m256i_i32[0];
      LODWORD(v174) = v158;
      *(_DWORD *)((char *)&v174 + 3) = *(_DWORD *)((char *)&v158 + 3);
      DWORD1(v158) = *(_DWORD *)((char *)&v203 + 3);
      *(_DWORD *)((char *)&v158 + 1) = v188;
      HIDWORD(v158) = *(_DWORD *)((char *)&v181 + 3);
      *(_DWORD *)((char *)&v158 + 9) = v164[0];
      DWORD1(v159) = *(_DWORD *)((char *)&v152 + 3);
      *(_DWORD *)((char *)&v159 + 1) = v168;
      HIDWORD(v159) = *(_DWORD *)&v167[3];
      *(_DWORD *)((char *)&v159 + 9) = v165[0];
      DWORD1(v160) = *(_DWORD *)((char *)v166 + 3);
      *(_DWORD *)((char *)&v160 + 1) = v199.m256i_i32[0];
      HIDWORD(v160) = *(_DWORD *)((char *)&v176 + 3);
      *(_DWORD *)((char *)&v160 + 9) = v190.m256i_i32[0];
      HIDWORD(v161) = *(_DWORD *)((char *)&v174 + 3);
      *(_DWORD *)((char *)&v161 + 1) = v174;
      v208 = v193[56];
      LOBYTE(v158) = v193[8];
      BYTE8(v158) = v193[16];
      LOBYTE(v159) = v193[24];
      BYTE8(v159) = v193[32];
      LOBYTE(v160) = v193[40];
      BYTE8(v160) = v193[48];
      LOBYTE(v161) = v193[56];
      v225 = 1;
      v28 = sub_14167FD50(&v145);
      a1 = v172;
      a2 = v207;
      *(_OWORD *)v210 = 0x3E8 * (unsigned __int128)(unsigned __int64)v28 + v29 / 0xF4240uLL;
      *(_QWORD *)v193 = &v229;
      *(_QWORD *)&v193[8] = sub_1416B9630;
      *(_QWORD *)&v193[16] = v210;
      *(_QWORD *)&v193[24] = sub_1416B95D0;
      *(_QWORD *)&v193[32] = &v208;
      *(_QWORD *)&v193[40] = sub_1416BCC50;
      v225 = 1;
      sub_1416ABFD0(&v140, &unk_141A39FC6, v193);
      LOBYTE(v181) = v230;
      v202 = v141;
      v203 = v141;
      *(_QWORD *)v193 = &v181;
      *(_QWORD *)&v193[8] = sub_140C98D50;
      *(_QWORD *)&v193[16] = &v203;
      *(_QWORD *)&v193[24] = sub_140186EE0;
      sub_1416ABFD0(v210, &unk_141A39D2E, v193);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v210);
      if ( v140 )
        sub_140001660(v202, v140, 1);
      v225 = 1;
      sub_140C75030(a2, (__int128 *)v230);
      v30 = v229;
      if ( !*(_BYTE *)(v148 + 382) || (v225 = 1, sub_1402452F0((__m128i *)v193, v162), *(_QWORD *)v193 == -1) )
      {
        v31 = "NativeOff compensation re-entryRouterOn rollbackauth-mode toggle";
        if ( (_BYTE)v30 == 1 )
          v31 = "NativeOff compensationNativeOff compensation re-entryRouterOn rollbackauth-mode toggle";
        v225 = 1;
        sub_14019F190((__int128 *)v193, v162, v149, v150, (__int128 *)v31, 9LL * ((_BYTE)v30 != 1) + 22, 0);
        v203 = *(_OWORD *)&v193[8];
        *(_OWORD *)v204 = *(_OWORD *)&v193[24];
        *(_OWORD *)&v204[16] = *(_OWORD *)&v193[40];
        *(_QWORD *)&v204[32] = *(_QWORD *)&v193[56];
        if ( *(_QWORD *)v193 == -1 )
        {
          v181 = v203;
          v182 = *(_OWORD *)v204;
          v183 = *(_OWORD *)&v204[16];
          *(_QWORD *)&v184 = *(_QWORD *)&v204[32];
          sub_1403F1200(&v203, (char *)&v182 + 8);
          *(_QWORD *)&v193[48] = v184;
          *(_OWORD *)&v193[32] = v183;
          *(_OWORD *)&v193[16] = v182;
          *(_OWORD *)v193 = v181;
          *(_QWORD *)&v193[72] = *(_QWORD *)v204;
          *(_OWORD *)&v193[56] = v203;
          *(_OWORD *)v210 = v181;
          *(_OWORD *)&v210[16] = v182;
          *(_OWORD *)&v210[32] = v183;
          *(_OWORD *)v211 = *(_OWORD *)&v193[48];
          *(_OWORD *)&v211[16] = *(_OWORD *)&v193[64];
          *(_QWORD *)&v167[88] = *(_QWORD *)v204;
          *(_OWORD *)&v167[72] = *(_OWORD *)&v211[8];
          *(_QWORD *)&v167[64] = v184;
          *(_OWORD *)&v167[48] = v183;
          *(_OWORD *)&v167[32] = v182;
          *(_OWORD *)&v167[16] = v181;
          *(_OWORD *)v167 = 0xFFFFFFFFFFFFFFFFuLL;
        }
        else
        {
          *(_OWORD *)&v211[24] = *(_OWORD *)&v193[80];
          *(_OWORD *)&v211[8] = *(_OWORD *)&v193[64];
          *(_QWORD *)v211 = *(_QWORD *)&v204[32];
          *(_OWORD *)v210 = v203;
          *(_OWORD *)&v210[16] = *(_OWORD *)v204;
          *(_OWORD *)&v210[32] = *(_OWORD *)&v204[16];
          *(_QWORD *)v167 = *(_QWORD *)v193;
          *(_QWORD *)&v167[88] = *(_QWORD *)&v193[88];
          *(_OWORD *)&v167[72] = *(_OWORD *)&v211[16];
          *(_OWORD *)&v167[56] = __PAIR128__(*(unsigned __int64 *)&v193[64], *(unsigned __int64 *)&v204[32]);
          *(_OWORD *)&v167[40] = *(_OWORD *)&v204[16];
          *(_OWORD *)&v167[24] = *(_OWORD *)v204;
          *(_OWORD *)&v167[8] = v203;
        }
      }
      else
      {
        *(_OWORD *)&v167[80] = *(_OWORD *)&v193[80];
        *(_OWORD *)&v167[64] = *(_OWORD *)&v193[64];
        *(_OWORD *)&v167[48] = *(_OWORD *)&v193[48];
        *(_QWORD *)v167 = *(_QWORD *)v193;
        *(_OWORD *)&v167[8] = *(_OWORD *)&v193[8];
        *(_OWORD *)&v167[24] = *(_OWORD *)&v193[24];
        *(_QWORD *)&v167[40] = *(_QWORD *)&v193[40];
      }
      *(_QWORD *)&v193[48] = v161;
      *(_OWORD *)&v193[32] = v160;
      *(_OWORD *)&v193[16] = v159;
      *(_OWORD *)v193 = v158;
      v222 = 1;
      sub_140EC14F0(&v152, v193);
      *(_OWORD *)&v193[80] = *(_OWORD *)&v167[80];
      *(_OWORD *)&v193[64] = *(_OWORD *)&v167[64];
      *(_OWORD *)&v193[48] = *(_OWORD *)&v167[48];
      *(_OWORD *)&v193[32] = *(_OWORD *)&v167[32];
      *(_OWORD *)&v193[16] = *(_OWORD *)&v167[16];
      *(_OWORD *)v193 = *(_OWORD *)v167;
      v198 = v157;
      v197 = v156;
      v196 = v155;
      v195 = v154;
      v194 = v153;
      *(_OWORD *)&v193[96] = v152;
      if ( *(_QWORD *)v167 == -1 )
        break;
      v163 = *(_QWORD *)v193;
      if ( *(_QWORD *)&v193[96] != -1 )
      {
        v186 = *(_OWORD *)&v167[80];
        v185 = *(_OWORD *)&v167[64];
        v184 = *(_OWORD *)&v167[48];
        v183 = *(_OWORD *)&v167[32];
        v182 = *(_OWORD *)&v167[16];
        v181 = *(_OWORD *)v167;
        v206 = v157;
        v205 = v156;
        *(_OWORD *)&v204[32] = v155;
        *(_OWORD *)&v204[16] = v154;
        *(_OWORD *)v204 = v153;
        v203 = v152;
        *(_QWORD *)v210 = &v181;
        *(_QWORD *)&v210[8] = sub_14104A7D0;
        *(_QWORD *)&v210[16] = &v203;
        *(_QWORD *)&v210[24] = sub_14104A7D0;
        sub_1416ABFD0(&v188, &unk_141A3A21C, v210);
        *(_OWORD *)&v210[8] = v188;
        *(_QWORD *)&v210[24] = v189;
        *(_QWORD *)v210 = 10;
        v190.m256i_i64[0] = 0;
        *(_OWORD *)&v190.m256i_u64[1] = 1u;
        v199.m256i_i64[2] = 1610612768;
        v199.m256i_i64[0] = (__int64)&v190;
        v199.m256i_i64[1] = (__int64)&off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v210, &v199) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v226,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v213 = v190.m256i_i64[1];
        v219 = v190.m256i_i64[0];
        sub_140C75030(a2, (__int128 *)v230);
        if ( v219 )
          sub_140001660(v213, v219, 1);
        v199.m256i_i64[0] = (__int64)&v229;
        v199.m256i_i64[1] = (__int64)sub_1416B9630;
        v199.m256i_i64[2] = (__int64)v210;
        v199.m256i_i64[3] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v190, &unk_141A3A180, &v199);
        sub_140BBE8E0(v230, (int)aReconcileFaile, 16, &v190);
        a1[5] = *(_OWORD *)&v211[32];
        a1[4] = *(_OWORD *)&v211[16];
        v82 = *(_OWORD *)v210;
        v83 = *(_OWORD *)&v210[16];
        v84 = *(_OWORD *)&v210[32];
        a1[3] = *(_OWORD *)v211;
        a1[2] = v84;
        a1[1] = v83;
        *a1 = v82;
        v85 = v229;
        *((_BYTE *)a1 + 96) = 2;
        *((_BYTE *)a1 + 97) = v85;
        sub_140BAC840(&v203);
        sub_140BAC840(&v181);
        return a1;
      }
      v206 = *(_OWORD *)&v167[80];
      v205 = *(_OWORD *)&v167[64];
      *(_OWORD *)&v204[32] = *(_OWORD *)&v167[48];
      *(_OWORD *)&v204[16] = *(_OWORD *)&v167[32];
      *(_OWORD *)v204 = *(_OWORD *)&v167[16];
      v203 = *(_OWORD *)v167;
      v35 = *(_DWORD *)&v193[104];
      v36 = v193[108];
      v37 = sub_14167FC00(*(_QWORD *)v167, v32, v33, v34);
      if ( v217 )
        goto LABEL_102;
      if ( v35 )
      {
        if ( v229 > 2u )
          goto LABEL_102;
      }
      else if ( v229 > 2u || !v36 )
      {
        goto LABEL_102;
      }
      if ( (_DWORD)v219 == -1 )
      {
        v170 = sub_1416A1240(v37, v38, 12, 0, (__int64)&off_141A3EA90);
        LODWORD(v219) = v56;
      }
      else
      {
        v54 = v38 < (unsigned int)v219;
        v55 = v37 < v170;
        if ( v37 == v170 )
          v55 = v54;
        if ( !v55 )
        {
LABEL_102:
          *(_QWORD *)&v181 = 0;
          *((_QWORD *)&v181 + 1) = 1;
          *(_QWORD *)&v182 = 0;
          *(_QWORD *)&v210[16] = 1610612768;
          *(_QWORD *)v210 = &v181;
          *(_QWORD *)&v210[8] = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(&v203, v210) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v226,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v213 = *((_QWORD *)&v181 + 1);
          v219 = v181;
          sub_140C75030(a2, (__int128 *)v230);
          if ( v219 )
            sub_140001660(v213, v219, 1);
          *(_QWORD *)v210 = &v229;
          *(_QWORD *)&v210[8] = sub_1416B9630;
          *(_QWORD *)&v210[16] = &v203;
          *(_QWORD *)&v210[24] = sub_14104A7D0;
          sub_1416ABFD0(&v199, &unk_141A3A180, v210);
          LOBYTE(v188) = v230;
          v219 = v199.m256i_i64[1];
          *(_OWORD *)v190.m256i_i8 = *(_OWORD *)&v199.m256i_u64[1];
          *(_QWORD *)v210 = &v188;
          *(_QWORD *)&v210[8] = sub_140C98D50;
          *(_QWORD *)&v210[16] = &v190;
          *(_QWORD *)&v210[24] = sub_140186EE0;
          sub_1416ABFD0(&v181, &unk_141A39D2E, v210);
          sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileFaile, 16, (__int64)&v181);
          if ( v199.m256i_i64[0] )
            sub_140001660(v219, v199.m256i_i64[0], 1);
          a1[5] = v206;
          a1[4] = v205;
          v68 = v203;
          v69 = *(_OWORD *)v204;
          v70 = *(_OWORD *)&v204[16];
          a1[3] = *(_OWORD *)&v204[32];
          a1[2] = v70;
          a1[1] = v69;
          *a1 = v68;
          v71 = v229;
          *((_BYTE *)a1 + 96) = 2;
LABEL_118:
          *((_BYTE *)a1 + 97) = v71;
          return a1;
        }
      }
      *(_QWORD *)&v181 = 0;
      *((_QWORD *)&v181 + 1) = 1;
      *(_QWORD *)&v182 = 0;
      *(_QWORD *)&v210[16] = 1610612768;
      *(_QWORD *)v210 = &v181;
      *(_QWORD *)&v210[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(&v203, v210) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v226,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v199.m256i_i64[2] = v182;
      *(_OWORD *)v199.m256i_i8 = v181;
      v19 = v219;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v181 = &v230;
        *((_QWORD *)&v181 + 1) = sub_140C98D50;
        *(_QWORD *)&v182 = &v229;
        *((_QWORD *)&v182 + 1) = sub_1416B9630;
        *(_QWORD *)&v183 = &v199;
        *((_QWORD *)&v183 + 1) = sub_1400015F0;
        *(_QWORD *)v211 = 2;
        *(_QWORD *)&v211[8] = aCodexmateLibCo_31;
        *(_QWORD *)&v211[16] = 45;
        *(_QWORD *)&v211[32] = &unk_141A3A1B1;
        *(_QWORD *)&v211[40] = &v181;
        *(_QWORD *)v210 = 0;
        *(_QWORD *)&v210[8] = aCodexmateLibCo_31;
        *(_OWORD *)&v210[16] = 0x2Du;
        *(_QWORD *)&v210[32] = aSrcCoreRelayRo_0;
        *(_QWORD *)&v210[40] = 35;
        *(_QWORD *)&v211[24] = 0x12E00000001LL;
        sub_1414D53A0(&v226, v210);
      }
      sub_140C75030(a2, (__int128 *)v230);
      *(_QWORD *)v210 = &v229;
      *(_QWORD *)&v210[8] = sub_1416B9630;
      *(_QWORD *)&v210[16] = &v199;
      *(_QWORD *)&v210[24] = sub_1400015F0;
      sub_1416ABFD0(&v138, &unk_141A3A180, v210);
      LOBYTE(v188) = v230;
      v202 = v139;
      *(_OWORD *)v190.m256i_i8 = v139;
      *(_QWORD *)v210 = &v188;
      *(_QWORD *)&v210[8] = sub_140C98D50;
      *(_QWORD *)&v210[16] = &v190;
      *(_QWORD *)&v210[24] = sub_140186EE0;
      sub_1416ABFD0(&v181, &unk_141A39D2E, v210);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)&v181);
      if ( v138 )
        sub_140001660(v202, v138, 1);
      if ( v199.m256i_i64[0] )
        sub_140001660(v199.m256i_i64[1], v199.m256i_i64[0], 1);
      sub_140BAC840(&v203);
      v20 = v173;
      v21 = (unsigned int)v213;
    }
    if ( *(_QWORD *)&v193[96] != -1 )
    {
      v163 = *(_QWORD *)v193;
      *(_OWORD *)&v211[32] = v157;
      *(_OWORD *)&v211[16] = v156;
      *(_OWORD *)v211 = v155;
      *(_OWORD *)&v210[32] = v154;
      *(_OWORD *)&v210[16] = v153;
      *(_OWORD *)v210 = v152;
      *(_QWORD *)&v181 = 0;
      *((_QWORD *)&v181 + 1) = 1;
      *(_QWORD *)&v182 = 0;
      *(_QWORD *)v204 = 1610612768;
      *(_QWORD *)&v203 = &v181;
      *((_QWORD *)&v203 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v210, &v203) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v226,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v213 = *((_QWORD *)&v181 + 1);
      v219 = v181;
      sub_140C75030(a2, (__int128 *)v230);
      if ( v219 )
        sub_140001660(v213, v219, 1);
      *(_QWORD *)&v203 = &v229;
      *((_QWORD *)&v203 + 1) = sub_1416B9630;
      *(_QWORD *)v204 = v210;
      *(_QWORD *)&v204[8] = sub_14104A7D0;
      sub_1416ABFD0(&v181, &unk_141A3A180, &v203);
      sub_140BBE8E0(v230, (int)aSettleFailed, 13, &v181);
      a1[5] = *(_OWORD *)&v211[32];
      a1[4] = *(_OWORD *)&v211[16];
      v90 = *(_OWORD *)v210;
      v91 = *(_OWORD *)&v210[16];
      v92 = *(_OWORD *)&v210[32];
      a1[3] = *(_OWORD *)v211;
      a1[2] = v92;
      a1[1] = v91;
      *a1 = v90;
      v93 = v229;
      *((_BYTE *)a1 + 96) = 3;
      *((_BYTE *)a1 + 97) = v93;
      sub_140BAD350(&v193[8]);
      sub_1403FAE40(&v193[72]);
      v94 = *(_QWORD *)&v193[72];
      if ( *(_QWORD *)&v193[72] )
      {
        v95 = *(_QWORD *)&v193[80];
        goto LABEL_148;
      }
      return a1;
    }
    *(_QWORD *)&v186 = *(_QWORD *)&v167[88];
    v185 = *(_OWORD *)&v167[72];
    v184 = *(_OWORD *)&v167[56];
    v183 = *(_OWORD *)&v167[40];
    v182 = *(_OWORD *)&v167[24];
    v181 = *(_OWORD *)&v167[8];
    v179 = *(_DWORD *)&v193[104];
    v180 = v193[108];
    v216 = 1;
    v215 = 1;
    sub_140D8FC20((unsigned int)&v176, v151, a8, 0, (*(_DWORD *)&v193[104] == 0) & (v193[108] ^ 1));
    v43 = v178;
    if ( !v178 )
    {
      if ( (v179 || (v180 & 1) != 0) && *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v193 = &v230;
        *(_QWORD *)&v193[8] = sub_140C98D50;
        *(_QWORD *)&v193[16] = &v229;
        *(_QWORD *)&v193[24] = sub_1416B9630;
        *(_QWORD *)&v193[32] = &v179;
        *(_QWORD *)&v193[40] = sub_1416BBD00;
        *(_QWORD *)&v193[48] = &v180;
        *(_QWORD *)&v193[56] = sub_1416BCC50;
        *(_QWORD *)v210 = aCodexmateLibCo_31;
        *(_QWORD *)&v210[8] = 45;
        *(_QWORD *)&v210[16] = aCodexmateLibCo_31;
        *(_QWORD *)&v210[24] = 45;
        *(_QWORD *)&v210[32] = &off_141A3A078;
        v221 = 1;
        v220 = 1;
        sub_140BAD520(&unk_141A3A000, v193, 2, v210);
      }
      *(_QWORD *)&v206 = v186;
      v205 = v185;
      *(_OWORD *)&v204[32] = v184;
      *(_OWORD *)&v204[16] = v183;
      *(_OWORD *)v204 = v182;
      v203 = v181;
      LOBYTE(v30) = v230;
      v96 = v187;
      v171 = v187;
      v228 = 1;
      v227 = 1;
      v174 = sub_14167FC00(v40, v39, v41, v42);
      v175 = v97;
      v228 = 1;
      v227 = 1;
      sub_1410255B0((unsigned int)v193, (_DWORD)v207, v30, v96, *((__int64 *)&v96 + 1));
      if ( *(_DWORD *)v193 == -1 )
      {
        v199.m256i_i64[0] = (__int64)&v203;
        *(_OWORD *)&v199.m256i_u64[1] = v137;
        v106 = *(unsigned __int8 *)(a10 + 382);
        v228 = 1;
        v227 = 1;
        sub_140D883F0((unsigned int)v210, a9, (unsigned int)&v203, v106, (__int64)&v199.m256i_i64[1]);
        if ( *(_QWORD *)v210 == -1 )
        {
          v228 = 1;
          v227 = 1;
          v117 = sub_1401BD880(*(_QWORD *)&v210[8]);
          v120 = v117;
          if ( v117 )
          {
            v144 = v117;
            v121 = v117 & 3;
            switch ( v117 & 3 )
            {
              case 0uLL:
                LOBYTE(v117) = *(_BYTE *)(v117 + 16);
                break;
              case 1uLL:
                LOBYTE(v117) = *(_BYTE *)(v117 + 31);
                break;
              case 2uLL:
                v218 = 1;
                v124 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v119, v118) + 8);
                v218 = 1;
                LOBYTE(v117) = v124(HIDWORD(v120));
                break;
              case 3uLL:
                v117 >>= 32;
                break;
            }
            v210[0] = v117;
            *(_QWORD *)v193 = v210;
            *(_QWORD *)&v193[8] = sub_140C9E0F0;
            v218 = 1;
            sub_1416ABFD0(v166, &unk_141A39D4C, v193);
            v218 = 1;
            sub_140BBE8E0(v30, (int)aCommitSyncUnco, 23, v166);
            v125 = *((_QWORD *)v207 + 97);
            v126 = *((_QWORD *)v207 + 98);
            v218 = 1;
            sub_1410237A0(
              v125,
              v126,
              v30,
              (unsigned int)&unk_141A6FF17,
              23,
              v171,
              *((__int64 *)&v171 + 1),
              (__int64)&unk_141A702FA,
              28);
            v189 = v206;
            v188 = v205;
            sub_141026E80(v193);
            v199.m256i_i64[0] = 0;
            *(_OWORD *)&v199.m256i_u64[1] = 1u;
            *(_QWORD *)&v210[16] = 1610612768;
            *(_QWORD *)v210 = &v199;
            *(_QWORD *)&v210[8] = &off_141A3FE88;
            if ( (unsigned __int8)sub_14104A7D0(v193, v210) )
              sub_141939040(
                (unsigned int)aADisplayImplem_7,
                55,
                (unsigned int)&v226,
                (unsigned int)&unk_141A3BB68,
                (__int64)&off_141A3FF40);
            v207 = (__int128 *)v199.m256i_i64[1];
            v219 = v199.m256i_i64[0];
            v127 = v199.m256i_i64[2];
            v128 = v189;
            if ( v189 == (_QWORD)v188 )
              sub_14190FDC0(&v188);
            v129 = *((_QWORD *)&v188 + 1);
            v130 = 3 * v128;
            *(_QWORD *)(*((_QWORD *)&v188 + 1) + 8 * v130) = v219;
            *(_QWORD *)(v129 + 8 * v130 + 8) = v207;
            *(_QWORD *)(v129 + 8 * v130 + 16) = v127;
            v189 = v128 + 1;
            sub_140BAC840(v193);
            *(_OWORD *)v190.m256i_i8 = v203;
            *(_OWORD *)&v190.m256i_u64[2] = *(_OWORD *)v204;
            v191 = *(_OWORD *)&v204[16];
            v192 = *(_OWORD *)&v204[32];
            v109 = *((_OWORD **)&v188 + 1);
            v107 = v188;
            v110 = v189;
            if ( (unsigned int)(v121 - 2) >= 2 && (v120 & 3) != 0 )
            {
              *(_QWORD *)&v193[8] = v120 - 1;
              v193[0] = 3;
              v228 = 0;
              v227 = 0;
              sub_1416BCB00(&v193[8]);
            }
            v108 = 2;
            goto LABEL_180;
          }
          if ( (_QWORD)v206 )
          {
            v228 = 1;
            v227 = 1;
            sub_140D1EE10((unsigned int)v193, DWORD2(v205), v206, (unsigned int)&unk_141A39BD6, 3);
            v213 = *(_QWORD *)&v193[8];
            v219 = *(_QWORD *)v193;
            sub_141026C20(
              (unsigned int)v210,
              (_DWORD)v207,
              v30,
              v171,
              *((__int64 *)&v171 + 1),
              *(__int64 *)&v193[8],
              *(__int64 *)&v193[16]);
            if ( *(_DWORD *)v210 != -1 )
            {
              *(_OWORD *)&v193[80] = *(_OWORD *)&v211[32];
              *(_OWORD *)&v193[64] = *(_OWORD *)&v211[16];
              *(_OWORD *)&v193[48] = *(_OWORD *)v211;
              *(_OWORD *)&v193[32] = *(_OWORD *)&v210[32];
              *(_OWORD *)&v193[16] = *(_OWORD *)&v210[16];
              *(_OWORD *)v193 = *(_OWORD *)v210;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v190.m256i_i64[0] = (__int64)v193;
                v190.m256i_i64[1] = (__int64)sub_14104A7D0;
                v199.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
                v199.m256i_i64[1] = 45;
                v199.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
                v199.m256i_i64[3] = 45;
                *(_QWORD *)&v200 = &off_141A39EC0;
                sub_140BAD520(&unk_141A39E7E, &v190, 2, &v199);
              }
              sub_140BAC840(v193);
            }
            if ( v219 )
              sub_140001660(v213, v219, 1);
            v228 = 1;
            v227 = 1;
            v122 = sub_14167FD50(&v174);
            *(_OWORD *)v210 = 0x3E8 * (unsigned __int128)(unsigned __int64)v122 + v123 / 0xF4240uLL;
            v199.m256i_i64[0] = v206;
            *(_QWORD *)v193 = &v171;
            *(_QWORD *)&v193[8] = sub_140186EE0;
            *(_QWORD *)&v193[16] = v210;
            *(_QWORD *)&v193[24] = sub_1416B95D0;
            *(_QWORD *)&v193[32] = &v199;
            *(_QWORD *)&v193[40] = sub_1416BCB10;
            v228 = 1;
            v227 = 1;
            sub_1416ABFD0(v165, &unk_141A39ED8, v193);
            v228 = 1;
            v227 = 1;
            sub_140BBE8E0(v30, (int)aDegraded, 8, v165);
            v192 = *(_OWORD *)&v204[32];
            v191 = *(_OWORD *)&v204[16];
            *(_OWORD *)&v190.m256i_u64[2] = *(_OWORD *)v204;
            *(_OWORD *)v190.m256i_i8 = v203;
            v109 = *((_OWORD **)&v205 + 1);
            v107 = v205;
            v108 = 1;
            v110 = v206;
            goto LABEL_180;
          }
          v228 = 1;
          v227 = 1;
          sub_141022500(v210, v207, v30);
          if ( *(_DWORD *)v210 == -1 )
          {
            v228 = 1;
            v227 = 1;
            v135 = sub_14167FD50(&v174);
            *(_OWORD *)v210 = 0x3E8 * (unsigned __int128)(unsigned __int64)v135 + v136 / 0xF4240uLL;
            *(_QWORD *)v193 = &v171;
            *(_QWORD *)&v193[8] = sub_140186EE0;
            *(_QWORD *)&v193[16] = v210;
            *(_QWORD *)&v193[24] = sub_1416B95D0;
            v228 = 1;
            v227 = 1;
            sub_1416ABFD0(v164, &unk_141A39E59, v193);
            v228 = 1;
            v227 = 1;
            sub_140BBE8E0(v30, (int)aStable, 6, v164);
            v109 = *((_OWORD **)&v203 + 1);
            v107 = v203;
            v110 = *(_QWORD *)v204;
            v190 = *(__m256i *)&v204[8];
            *(_QWORD *)&v191 = *(_QWORD *)&v204[40];
            sub_140025530(&v205);
            v108 = 0;
            goto LABEL_180;
          }
          *(_OWORD *)&v193[80] = *(_OWORD *)&v211[32];
          *(_OWORD *)&v193[64] = *(_OWORD *)&v211[16];
          *(_OWORD *)&v193[48] = *(_OWORD *)v211;
          *(_OWORD *)&v193[32] = *(_OWORD *)&v210[32];
          *(_OWORD *)&v193[16] = *(_OWORD *)&v210[16];
          *(_OWORD *)v193 = *(_OWORD *)v210;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v190.m256i_i64[0] = (__int64)v193;
            v190.m256i_i64[1] = (__int64)sub_14104A7D0;
            v199.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
            v199.m256i_i64[1] = 45;
            v199.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
            v199.m256i_i64[3] = 45;
            *(_QWORD *)&v200 = &off_141A39DD8;
            v212 = 1;
            sub_140BAD520(&unk_141A39D6B, &v190, 2, &v199);
          }
          v201 = *(_OWORD *)&v204[32];
          v200 = *(_OWORD *)&v204[16];
          *(_OWORD *)&v199.m256i_u64[2] = *(_OWORD *)v204;
          *(_OWORD *)v199.m256i_i8 = v203;
          v219 = sub_140C23890(24);
          v190.m256i_i64[0] = (__int64)v193;
          v190.m256i_i64[1] = (__int64)sub_14104A7D0;
          sub_1416ABFD0(&v168, &unk_141A39E1D, &v190);
          v109 = (_OWORD *)v219;
          *(_QWORD *)(v219 + 16) = v169;
          *v109 = v168;
          v190 = v199;
          v191 = v200;
          v192 = v201;
          v228 = 0;
          v227 = 1;
          sub_140BAC840(v193);
          v107 = 1;
          v111 = 0;
          v110 = 1;
          v108 = 1;
LABEL_154:
          sub_1403FAE40(&v205);
          if ( (_QWORD)v205 )
            sub_140001660(*((_QWORD *)&v205 + 1), 24 * v205, 8);
          if ( v111 )
          {
            v112 = *(_OWORD *)v190.m256i_i8;
            v113 = *(_OWORD *)&v190.m256i_u64[2];
            v114 = v191;
            v115 = v172;
            v172[5] = v192;
            v115[4] = v114;
            v115[3] = v113;
            v115[2] = v112;
            v116 = v229;
            *(_QWORD *)v115 = v108;
            *((_QWORD *)v115 + 1) = v107;
            *((_QWORD *)v115 + 2) = v109;
            *((_QWORD *)v115 + 3) = v110;
            a1 = v115;
            *((_BYTE *)v115 + 96) = 5;
            *((_BYTE *)v115 + 97) = v116;
LABEL_181:
            sub_1403FAC20(&v176);
            if ( !v176 )
              return a1;
            v95 = v177;
            v105 = 32 * v176;
            goto LABEL_183;
          }
LABEL_180:
          v131 = *(_OWORD *)v190.m256i_i8;
          v132 = *(_OWORD *)&v190.m256i_u64[2];
          v133 = v191;
          v134 = v172;
          *(__int128 *)((char *)v172 + 88) = v192;
          *(__int128 *)((char *)v134 + 72) = v133;
          *(__int128 *)((char *)v134 + 56) = v132;
          *(__int128 *)((char *)v134 + 40) = v131;
          *((_QWORD *)v134 + 1) = v108;
          *((_QWORD *)v134 + 2) = v107;
          *((_QWORD *)v134 + 3) = v109;
          *((_QWORD *)v134 + 4) = v110;
          a1 = v134;
          *(_QWORD *)v134 = -1;
          goto LABEL_181;
        }
      }
      else
      {
        *(_OWORD *)&v211[32] = *(_OWORD *)&v193[80];
        *(_OWORD *)&v211[16] = *(_OWORD *)&v193[64];
        *(_OWORD *)v211 = *(_OWORD *)&v193[48];
        *(_OWORD *)&v210[32] = *(_OWORD *)&v193[32];
        *(_OWORD *)&v210[16] = *(_OWORD *)&v193[16];
        *(_OWORD *)v210 = *(_OWORD *)v193;
      }
      *(_OWORD *)&v193[80] = *(_OWORD *)&v211[32];
      *(_OWORD *)&v193[64] = *(_OWORD *)&v211[16];
      *(_OWORD *)&v193[48] = *(_OWORD *)v211;
      *(_OWORD *)&v193[32] = *(_OWORD *)&v210[32];
      *(_OWORD *)&v193[16] = *(_OWORD *)&v210[16];
      *(_OWORD *)v193 = *(_OWORD *)v210;
      v190.m256i_i64[0] = 0;
      *(_OWORD *)&v190.m256i_u64[1] = 1u;
      v199.m256i_i64[2] = 1610612768;
      v199.m256i_i64[0] = (__int64)&v190;
      v199.m256i_i64[1] = (__int64)&off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v193, &v199) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v226,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v213 = v190.m256i_i64[1];
      v219 = v190.m256i_i64[0];
      sub_140C75030(v207, (__int128 *)v30);
      if ( v219 )
        sub_140001660(v213, v219, 1);
      v199.m256i_i64[0] = (__int64)&v171;
      v199.m256i_i64[1] = (__int64)sub_140186EE0;
      v199.m256i_i64[2] = (__int64)v193;
      v199.m256i_i64[3] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(&v188, &unk_141A39F29, &v199);
      sub_140BBE8E0(v30, (int)aCommitFailed, 13, &v188);
      v107 = *(_QWORD *)&v193[8];
      v108 = *(_QWORD *)v193;
      v110 = *(_QWORD *)&v193[24];
      v109 = *(_OWORD **)&v193[16];
      v190 = *(__m256i *)&v193[32];
      v191 = *(_OWORD *)&v193[64];
      v192 = *(_OWORD *)&v193[80];
      sub_140BAD350(&v203);
      v111 = 1;
      goto LABEL_154;
    }
    v221 = 1;
    v220 = 1;
    v202 = v177;
    sub_1403EBE40(v210, v177, v177 + 32 * v178);
    v44 = *(_QWORD *)&v210[8];
    v45 = *(_QWORD *)&v210[16];
    sub_140D1EE10((unsigned int)v193, *(_DWORD *)&v210[8], *(_DWORD *)&v210[16], (unsigned int)&unk_141A39BD6, 3);
    v190.m256i_i64[2] = *(_QWORD *)&v193[16];
    *(_OWORD *)v190.m256i_i8 = *(_OWORD *)v193;
    if ( v45 )
    {
      v50 = (_QWORD *)(v44 + 8);
      do
      {
        v46 = *(v50 - 1);
        if ( v46 )
          sub_140001660(*v50, v46, 1);
        v50 += 3;
        --v45;
      }
      while ( v45 );
    }
    if ( *(_QWORD *)v210 )
      sub_140001660(v44, 24LL * *(_QWORD *)v210, 8);
    v224 = 1;
    v223 = 1;
    v51 = sub_14167FC00(v47, v46, v48, v49);
    v53 = v219;
    if ( v217 )
    {
      v199.m256i_i64[2] = *(_QWORD *)&v167[88];
      *(_OWORD *)v199.m256i_i8 = *(_OWORD *)&v167[72];
      *(_QWORD *)v193 = &v190;
      *(_QWORD *)&v193[8] = sub_1400015F0;
      v214 = 1;
      sub_1416ABFD0(&v203, &unk_141A3A0DE, v193);
      v214 = 1;
      sub_1401F4600(&v199, &v203);
      *(_OWORD *)v211 = *(_OWORD *)&v167[56];
      *(_OWORD *)&v210[32] = *(_OWORD *)&v167[40];
      *(_OWORD *)&v210[16] = *(_OWORD *)&v167[24];
      *(_OWORD *)v210 = *(_OWORD *)&v167[8];
      *(_OWORD *)&v211[16] = *(_OWORD *)v199.m256i_i8;
      *(_QWORD *)&v211[32] = v199.m256i_i64[2];
      v214 = 0;
      sub_140BC0A40((__int64)v193, (__int64)v207, v230, v187, *((__int64 *)&v187 + 1), (__int128 *)v210, a9, a10, &v137);
      if ( v193[0] )
      {
        a1[5] = *(_OWORD *)&v193[88];
        a1[4] = *(_OWORD *)&v193[72];
        v98 = *(_OWORD *)&v193[8];
        v99 = *(_OWORD *)&v193[24];
        v100 = *(_OWORD *)&v193[40];
        a1[3] = *(_OWORD *)&v193[56];
        a1[2] = v100;
        a1[1] = v99;
        *a1 = v98;
        v101 = v229;
        *((_BYTE *)a1 + 96) = 5;
        *((_BYTE *)a1 + 97) = v101;
      }
      else
      {
        *(__int128 *)((char *)a1 + 88) = *(_OWORD *)&v193[88];
        *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v193[72];
        v102 = *(_OWORD *)&v193[8];
        v103 = *(_OWORD *)&v193[24];
        v104 = *(_OWORD *)&v193[40];
        *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v193[56];
        *(__int128 *)((char *)a1 + 40) = v104;
        *(__int128 *)((char *)a1 + 24) = v103;
        *(__int128 *)((char *)a1 + 8) = v102;
        *(_QWORD *)a1 = -1;
      }
      LODWORD(v219) = 0;
      goto LABEL_141;
    }
    if ( v179 )
    {
      if ( v229 > 2u )
        break;
    }
    else if ( v229 > 2u || (v180 & 1) == 0 )
    {
      break;
    }
    if ( (_DWORD)v219 == -1 )
    {
      v224 = 1;
      v223 = 1;
      v170 = sub_1416A1240(v51, v52, 12, 0, (__int64)&off_141A3EA90);
      v53 = v59;
      if ( *(_QWORD *)off_1421E6EC0 < 2u )
        goto LABEL_79;
LABEL_78:
      *(_QWORD *)v210 = &v230;
      *(_QWORD *)&v210[8] = sub_140C98D50;
      *(_QWORD *)&v210[16] = &v229;
      *(_QWORD *)&v210[24] = sub_1416B9630;
      *(_QWORD *)&v210[32] = &v190;
      *(_QWORD *)&v210[40] = sub_1400015F0;
      *(_QWORD *)&v193[48] = 2;
      *(_QWORD *)&v193[56] = aCodexmateLibCo_31;
      *(_QWORD *)&v193[64] = 45;
      *(_QWORD *)&v193[80] = &unk_141A3A11B;
      *(_QWORD *)&v193[88] = v210;
      *(_QWORD *)v193 = 0;
      *(_QWORD *)&v193[8] = aCodexmateLibCo_31;
      *(_OWORD *)&v193[16] = 0x2Du;
      *(_QWORD *)&v193[32] = aSrcCoreRelayRo_0;
      *(_QWORD *)&v193[40] = 35;
      *(_QWORD *)&v193[72] = 0x17D00000001LL;
      v224 = 1;
      v223 = 1;
      sub_1414D53A0(&v226, v193);
      goto LABEL_79;
    }
    v57 = v52 < (unsigned int)v219;
    v58 = v51 < v170;
    if ( v51 == v170 )
      v58 = v57;
    if ( !v58 )
      break;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      goto LABEL_78;
LABEL_79:
    v224 = 1;
    v223 = 1;
    sub_140C75030(v207, (__int128 *)v230);
    if ( v190.m256i_i64[0] )
      sub_140001660(v190.m256i_i64[1], v190.m256i_i64[0], 1);
    v60 = (_QWORD *)(v202 + 8);
    do
    {
      v61 = *(v60 - 1);
      if ( v61 )
        sub_140001660(*v60, v61, 1);
      v60 += 4;
      --v43;
    }
    while ( v43 );
    LODWORD(v219) = v53;
    if ( v176 )
      sub_140001660(v202, 32 * v176, 8);
    sub_140BAD350(&v181);
    v62 = *((_QWORD *)&v185 + 1);
    v63 = v186;
    a2 = v207;
    if ( (_QWORD)v186 )
    {
      v64 = (_QWORD *)(*((_QWORD *)&v185 + 1) + 8LL);
      do
      {
        v18 = *(v64 - 1);
        if ( v18 )
          sub_140001660(*v64, v18, 1);
        v64 += 3;
        --v63;
      }
      while ( v63 );
    }
    if ( (_QWORD)v185 )
      sub_140001660(v62, 24 * v185, 8);
    v20 = v173;
    v19 = v219;
    v21 = (unsigned int)v213;
  }
  *(_QWORD *)v193 = &v230;
  *(_QWORD *)&v193[8] = sub_140C98D50;
  *(_QWORD *)&v193[16] = &v190;
  *(_QWORD *)&v193[24] = sub_1400015F0;
  v224 = 1;
  v223 = 1;
  sub_1416ABFD0(&v199, &unk_141A3A090, v193);
  *(_OWORD *)&v193[8] = *(_OWORD *)v199.m256i_i8;
  *(_QWORD *)&v193[24] = v199.m256i_i64[2];
  *(_QWORD *)v193 = 10;
  sub_140C9CF30(v210, v193);
  v219 = *(_QWORD *)&v210[8];
  sub_140C75030(v207, (__int128 *)v230);
  if ( *(_QWORD *)v210 )
    sub_140001660(v219, *(_QWORD *)v210, 1);
  *(_QWORD *)&v188 = v43;
  *(_QWORD *)v210 = &v229;
  *(_QWORD *)&v210[8] = sub_1416B9630;
  *(_QWORD *)&v210[16] = &v188;
  *(_QWORD *)&v210[24] = sub_1416BCB10;
  sub_1416ABFD0(&v203, &unk_141A3A0B1, v210);
  sub_140BBE8E0(v230, (int)aPostconditionF, 20, &v203);
  a1[5] = *(_OWORD *)&v193[80];
  a1[4] = *(_OWORD *)&v193[64];
  v86 = *(_OWORD *)v193;
  v87 = *(_OWORD *)&v193[16];
  v88 = *(_OWORD *)&v193[32];
  a1[3] = *(_OWORD *)&v193[48];
  a1[2] = v88;
  a1[1] = v87;
  *a1 = v86;
  v89 = v229;
  *((_BYTE *)a1 + 96) = 4;
  *((_BYTE *)a1 + 97) = v89;
  LOBYTE(v89) = 1;
  LODWORD(v219) = v89;
LABEL_141:
  if ( v190.m256i_i64[0] )
    sub_140001660(v190.m256i_i64[1], v190.m256i_i64[0], 1);
  sub_1403FAC20(&v176);
  if ( v176 )
    sub_140001660(v202, 32 * v176, 8);
  if ( (_BYTE)v219 )
  {
    sub_140BAD350(&v181);
    sub_1403FAE40(&v185);
    v94 = v185;
    if ( (_QWORD)v185 )
    {
      v95 = *((_QWORD *)&v185 + 1);
LABEL_148:
      v105 = 24 * v94;
LABEL_183:
      sub_140001660(v95, v105, 8);
    }
  }
  return a1;
}
