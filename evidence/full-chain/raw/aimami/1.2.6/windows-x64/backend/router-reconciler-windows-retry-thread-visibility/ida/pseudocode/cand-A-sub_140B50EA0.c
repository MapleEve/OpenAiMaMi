__int64 __fastcall sub_140B50EA0(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int128 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13)
{
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _OWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int128 v36; // kr00_16
  __int128 v37; // kr10_16
  __int128 v38; // xmm0
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int32 v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rbx
  _QWORD *v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rbx
  _OWORD *v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // edx
  __int64 v80; // rcx
  int v81; // r14d
  int v82; // edx
  int v83; // r12d
  __int64 v84; // rax
  char v85; // r15
  __int64 v86; // r15
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int128 v93; // xmm1
  __int128 v94; // xmm2
  __int128 v95; // xmm3
  _OWORD *v96; // rax
  __int64 v97; // r13
  __int64 v98; // rax
  __int64 v99; // rcx
  int v100; // ecx
  __int64 v101; // rcx
  int v102; // r14d
  int v103; // edx
  int v104; // r12d
  __int128 *v105; // rax
  __int64 v106; // rbx
  __int64 v107; // r15
  int v108; // ecx
  __int64 v109; // rcx
  __int128 v110; // kr30_16
  __int128 v111; // kr40_16
  __int128 v112; // xmm0
  __int64 v113; // rdi
  _QWORD *v114; // rbx
  __int64 v115; // rdx
  __int64 v116; // rdi
  _QWORD *v117; // rbx
  __int64 v118; // rdx
  int v120; // r14d
  int v121; // edx
  int v122; // r12d
  int v123; // ecx
  int v124; // ecx
  __int64 v125; // rcx
  void (__fastcall *v126)(__int64, const char *, __int64); // rax
  __int64 v127; // r14
  unsigned int v128; // edx
  unsigned int v129; // r15d
  int v130; // ecx
  __int64 v131; // rcx
  __int128 v132; // xmm0
  __int128 v133; // xmm1
  __int128 v134; // xmm2
  __int128 v135; // xmm3
  __int64 v136; // rcx
  int v137; // ebx
  int v138; // edx
  int v139; // r14d
  int v140; // ecx
  int v141; // ecx
  __int64 v142; // [rsp+20h] [rbp-60h]
  __int64 v143; // [rsp+20h] [rbp-60h]
  __int64 v144; // [rsp+20h] [rbp-60h]
  __int64 v145; // [rsp+20h] [rbp-60h]
  __int64 v146; // [rsp+20h] [rbp-60h]
  _BYTE v147[24]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v148[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v149[24]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v150[24]; // [rsp+78h] [rbp-8h] BYREF
  _BYTE v151[24]; // [rsp+90h] [rbp+10h] BYREF
  _BYTE v152[24]; // [rsp+A8h] [rbp+28h] BYREF
  _BYTE v153[24]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v154[24]; // [rsp+D8h] [rbp+58h] BYREF
  _BYTE v155[24]; // [rsp+F0h] [rbp+70h] BYREF
  _BYTE v156[24]; // [rsp+108h] [rbp+88h] BYREF
  _BYTE v157[24]; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE v158[24]; // [rsp+138h] [rbp+B8h] BYREF
  _BYTE v159[24]; // [rsp+150h] [rbp+D0h] BYREF
  _BYTE v160[24]; // [rsp+168h] [rbp+E8h] BYREF
  _BYTE v161[24]; // [rsp+180h] [rbp+100h] BYREF
  __int128 v162; // [rsp+198h] [rbp+118h] BYREF
  __int64 v163; // [rsp+1A8h] [rbp+128h]
  __int128 v164; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v165; // [rsp+1C0h] [rbp+140h]
  __int128 v166; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v167; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v168; // [rsp+1E8h] [rbp+168h]
  __int128 v169; // [rsp+1F0h] [rbp+170h] BYREF
  const char *v170; // [rsp+200h] [rbp+180h]
  _QWORD v171[3]; // [rsp+208h] [rbp+188h] BYREF
  __m256i v172; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v173; // [rsp+240h] [rbp+1C0h]
  __int128 v174; // [rsp+250h] [rbp+1D0h]
  __int128 v175; // [rsp+260h] [rbp+1E0h]
  __int128 v176; // [rsp+270h] [rbp+1F0h]
  _QWORD v177[2]; // [rsp+288h] [rbp+208h] BYREF
  _QWORD *v178; // [rsp+298h] [rbp+218h] BYREF
  __int64 (__fastcall *v179)(); // [rsp+2A0h] [rbp+220h]
  _BYTE *v180; // [rsp+2A8h] [rbp+228h]
  __int64 (__fastcall *v181)(_QWORD, _QWORD); // [rsp+2B0h] [rbp+230h]
  __m256i v182; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 v183; // [rsp+2D8h] [rbp+258h]
  __int128 v184; // [rsp+2E8h] [rbp+268h]
  __int128 v185; // [rsp+2F8h] [rbp+278h]
  __int128 v186; // [rsp+308h] [rbp+288h]
  __int32 v187; // [rsp+31Ch] [rbp+29Ch]
  __int128 v188; // [rsp+320h] [rbp+2A0h] BYREF
  const char *v189; // [rsp+330h] [rbp+2B0h]
  __int64 v190; // [rsp+338h] [rbp+2B8h]
  char **v191; // [rsp+340h] [rbp+2C0h]
  _BYTE v192[104]; // [rsp+350h] [rbp+2D0h] BYREF
  char v193; // [rsp+3F0h] [rbp+370h] BYREF
  char v194; // [rsp+410h] [rbp+390h] BYREF
  char v195; // [rsp+418h] [rbp+398h] BYREF
  _BYTE v196[112]; // [rsp+480h] [rbp+400h] BYREF
  __int64 v197; // [rsp+4F0h] [rbp+470h]
  _BYTE v198[112]; // [rsp+500h] [rbp+480h] BYREF
  __int64 v199; // [rsp+570h] [rbp+4F0h] BYREF
  __m256i v200; // [rsp+630h] [rbp+5B0h] BYREF
  __int128 v201; // [rsp+650h] [rbp+5D0h]
  __int128 v202; // [rsp+660h] [rbp+5E0h]
  __int128 v203; // [rsp+670h] [rbp+5F0h]
  __int128 v204; // [rsp+680h] [rbp+600h]
  __int128 v205; // [rsp+698h] [rbp+618h] BYREF
  __int64 v206; // [rsp+6A8h] [rbp+628h]
  __int128 v207; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v208; // [rsp+6C0h] [rbp+640h]
  __int64 v209; // [rsp+6C8h] [rbp+648h]
  _OWORD *v210; // [rsp+6D0h] [rbp+650h]
  char v211; // [rsp+6DEh] [rbp+65Eh]
  char v212; // [rsp+6DFh] [rbp+65Fh]
  __int64 v213; // [rsp+6E0h] [rbp+660h]

  v213 = -2;
  v166 = a7;
  nullsub_1(a1, a2, a3, a4, v142);
  v17 = sub_140001650(24, 8);
  if ( !v17 )
    sub_14176E531(8, 24);
  v209 = v17;
  *(_QWORD *)v192 = &v166;
  *(_QWORD *)&v192[8] = sub_1402DDC10;
  sub_141543AF0(&v164, &unk_141862B60, v192);
  v20 = v165;
  v21 = (_OWORD *)v209;
  *(_QWORD *)(v209 + 16) = v165;
  *v21 = v164;
  *(_QWORD *)&v207 = 1;
  *((_QWORD *)&v207 + 1) = v21;
  v208 = 1;
  *(_QWORD *)&v205 = 0;
  *((_QWORD *)&v205 + 1) = 8;
  v206 = 0;
  if ( a9 )
  {
    sub_140B3DD80(v192);
    if ( *(_QWORD *)v192 != -1 )
    {
      *(_OWORD *)&v198[80] = *(_OWORD *)&v192[80];
      *(_OWORD *)&v198[64] = *(_OWORD *)&v192[64];
      *(_OWORD *)&v198[48] = *(_OWORD *)&v192[48];
      *(_OWORD *)&v198[32] = *(_OWORD *)&v192[32];
      *(_OWORD *)v198 = *(_OWORD *)v192;
      *(_OWORD *)&v198[16] = *(_OWORD *)&v192[16];
      goto LABEL_17;
    }
    *(_QWORD *)v196 = *(_QWORD *)&v192[16];
    *(_QWORD *)&v196[8] = *(_QWORD *)&v192[16];
    *(_QWORD *)&v196[16] = *(_QWORD *)&v192[8];
    *(_QWORD *)&v196[24] = *(_QWORD *)&v192[16] + 32LL * *(_QWORD *)&v192[24];
    sub_14004BC00(&v200, v196);
    sub_140B3D580(v198, &v200);
    if ( *(_DWORD *)v198 != -1 )
    {
LABEL_17:
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v198[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v198[64];
      v36 = *(_OWORD *)v198;
      v37 = *(_OWORD *)&v198[16];
      v38 = *(_OWORD *)&v198[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v198[48];
      *(_OWORD *)(a1 + 32) = v38;
      *(_OWORD *)(a1 + 16) = v37;
      *(_OWORD *)a1 = v36;
      v34 = v206;
      if ( !v206 )
      {
LABEL_131:
        if ( (_QWORD)v205 )
          sub_140001660(*((_QWORD *)&v205 + 1), 24 * v205, 8);
        v116 = v208;
        if ( v208 )
        {
          v117 = (_QWORD *)(*((_QWORD *)&v207 + 1) + 8LL);
          do
          {
            v118 = *(v117 - 1);
            if ( v118 )
              sub_140001660(*v117, v118, 1);
            v117 += 3;
            --v116;
          }
          while ( v116 );
        }
        if ( (_QWORD)v207 )
          sub_140001660(*((_QWORD *)&v207 + 1), 24 * v207, 8);
        return a1;
      }
LABEL_18:
      v39 = (_QWORD *)(*((_QWORD *)&v205 + 1) + 8LL);
      do
      {
        v40 = *(v39 - 1);
        if ( v40 )
          sub_140001660(*v39, v40, 1);
        v39 += 3;
        --v34;
      }
      while ( v34 );
      goto LABEL_131;
    }
    if ( a10 )
      (*(void (__fastcall **)(__int64, const char *, __int64))(a11 + 32))(a10, aWritingConfig, 14);
    v209 = sub_141518E10(v35);
    v187 = v41;
    *(_QWORD *)&v192[16] = a3;
    *(_QWORD *)&v192[24] = a4;
    *(_OWORD *)&v192[32] = __PAIR128__(a6, a5);
    *(_QWORD *)v192 = 0;
    *(_WORD *)&v192[64] = 0;
    *(_OWORD *)&v192[48] = 8u;
    sub_140342D60(&v182, a2, v192, 0);
    if ( v182.m256i_i32[0] != -1 )
    {
      *(_OWORD *)&v196[80] = v186;
      *(_OWORD *)&v196[64] = v185;
      *(_OWORD *)&v196[48] = v184;
      *(_OWORD *)&v196[32] = v183;
      *(__m256i *)v196 = v182;
      v171[0] = aNativeOffConfi;
      v171[1] = 22;
      if ( (unsigned __int8)sub_140B50A60(v196) )
      {
        sub_140B4F910(v198, v196);
        *(_QWORD *)v192 = v171;
        *(_QWORD *)&v192[8] = sub_1402DDC10;
        *(_QWORD *)&v192[16] = v198;
        *(_QWORD *)&v192[24] = sub_1400015F0;
        sub_141543AF0(&v169, &unk_14185AE5B, v192);
        if ( *(_QWORD *)v198 )
          sub_140001660(*(_QWORD *)&v198[8], *(_QWORD *)v198, 1);
        sub_140AA6250((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe, 19, (__int64)&v169);
        sub_140AFAD30(v198);
        v210 = *(_OWORD **)v198;
        if ( *(_QWORD *)v198 == -1 )
        {
          v200.m256i_i32[0] = *(_DWORD *)&v198[8];
          *(_QWORD *)v192 = v171;
          *(_QWORD *)&v192[8] = sub_1402DDC10;
          *(_QWORD *)&v192[16] = &v200;
          *(_QWORD *)&v192[24] = sub_141553180;
          sub_141543AF0(&v178, &unk_14185AE93, v192);
          sub_140AA6250((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe_0, 32, (__int64)&v178);
          sub_14046E850(&v198[16]);
          if ( *(_QWORD *)&v198[16] )
            sub_140001660(*(_QWORD *)&v198[24], 24LL * *(_QWORD *)&v198[16], 8);
        }
        else
        {
          *(_OWORD *)&v192[80] = *(_OWORD *)&v198[80];
          *(_OWORD *)&v192[64] = *(_OWORD *)&v198[64];
          *(_OWORD *)&v192[48] = *(_OWORD *)&v198[48];
          *(_OWORD *)&v192[32] = *(_OWORD *)&v198[32];
          *(_OWORD *)&v192[16] = *(_OWORD *)&v198[16];
          *(_OWORD *)v192 = *(_OWORD *)v198;
          if ( *(_QWORD *)off_141FB9E30 >= 2u )
          {
            v172.m256i_i64[0] = (__int64)v171;
            v172.m256i_i64[1] = (__int64)sub_1402DDC10;
            v172.m256i_i64[2] = (__int64)v192;
            v172.m256i_i64[3] = (__int64)sub_1405060F0;
            v200.m256i_i64[0] = (__int64)aCodexmateLibCo_7;
            v200.m256i_i64[1] = 45;
            v200.m256i_i64[2] = (__int64)aCodexmateLibCo_7;
            v200.m256i_i64[3] = 45;
            *(_QWORD *)&v201 = &off_14185AF40;
            sub_1406E71E0(&unk_14185AEC5, &v172, 2, &v200);
          }
          sub_140A9E920(v192);
        }
        sub_14152EE30(0, 700000000);
        *(_QWORD *)&v192[16] = a3;
        *(_QWORD *)&v192[24] = a4;
        *(_OWORD *)&v192[32] = __PAIR128__(a6, a5);
        *(_QWORD *)v192 = 0;
        *(_WORD *)&v192[64] = 0;
        *(_OWORD *)&v192[48] = 8u;
        sub_140342D60(&v182, a2, v192, 0);
        if ( v182.m256i_i32[0] == -1 )
        {
          v46 = -1;
        }
        else
        {
          *(_OWORD *)&v192[80] = v186;
          *(_OWORD *)&v192[64] = v185;
          *(_OWORD *)&v192[48] = v184;
          *(_OWORD *)&v192[32] = v183;
          *(__m256i *)v192 = v182;
          if ( (unsigned __int8)sub_140B50A60(v192) )
          {
            sub_140B4F910(&v172, v196);
            sub_140B4F910(&v200, v192);
            *(_QWORD *)v198 = v171;
            *(_QWORD *)&v198[8] = sub_1402DDC10;
            *(_QWORD *)&v198[16] = &v172;
            *(_QWORD *)&v198[24] = sub_1400015F0;
            *(_QWORD *)&v198[32] = &v200;
            *(_QWORD *)&v198[40] = sub_1400015F0;
            sub_141543AF0(&v188, &unk_14185BBF0, v198);
            if ( v200.m256i_i64[0] )
              sub_140001660(v200.m256i_i64[1], v200.m256i_i64[0], 1);
            if ( v172.m256i_i64[0] )
              sub_140001660(v172.m256i_i64[1], v172.m256i_i64[0], 1);
            *(_OWORD *)v200.m256i_i8 = v188;
            v200.m256i_i64[2] = (__int64)v189;
            v46 = 10;
            sub_140A9E920(v192);
          }
          else
          {
            v46 = *(_QWORD *)v192;
            *(_OWORD *)v200.m256i_i8 = *(_OWORD *)&v182.m256i_u64[1];
            v200.m256i_i64[2] = v182.m256i_i64[3];
            *(_OWORD *)v198 = v183;
            *(_OWORD *)&v198[16] = v184;
            *(_OWORD *)&v198[32] = v185;
            *(_OWORD *)&v198[48] = v186;
          }
          v182.m256i_i64[0] = v46;
          *(_OWORD *)&v182.m256i_u64[1] = *(_OWORD *)v200.m256i_i8;
          v182.m256i_i64[3] = v200.m256i_i64[2];
          v183 = *(_OWORD *)v198;
          v184 = *(_OWORD *)&v198[16];
          v185 = *(_OWORD *)&v198[32];
          v186 = *(_OWORD *)&v198[48];
        }
        sub_140A9E920(v196);
      }
      else
      {
        v46 = v182.m256i_i64[0];
      }
      if ( v46 != -1 )
      {
        v176 = v186;
        v175 = v185;
        v174 = v184;
        v173 = v183;
        v172 = v182;
        v47 = off_141FB9E30;
        if ( *(_QWORD *)off_141FB9E30 >= 2u )
        {
          *(_QWORD *)v198 = &v172;
          *(_QWORD *)&v198[8] = sub_1405060F0;
          *(_QWORD *)v192 = aCodexmateLibCo_7;
          *(_QWORD *)&v192[8] = 45;
          *(_QWORD *)&v192[16] = aCodexmateLibCo_7;
          *(_QWORD *)&v192[24] = 45;
          *(_QWORD *)&v192[32] = &off_141862D10;
          sub_1406E71E0(&unk_141862C9E, v198, 2, v192);
        }
        *(_OWORD *)&v192[32] = 8u;
        *(_OWORD *)&v192[48] = 8u;
        *(_QWORD *)v192 = 0;
        *(_WORD *)&v192[80] = 0;
        *(_OWORD *)&v192[64] = 8u;
        *(_QWORD *)&v192[16] = 0;
        v48 = sub_140539CD0(a2);
        if ( v48 )
        {
          v200.m256i_i64[0] = 2;
          v200.m256i_i64[1] = v48;
        }
        else
        {
          sub_140962F50((unsigned int)&v200, a2[9], a2[10], (unsigned int)&unk_1418114BA, 23, (__int64)v192);
          if ( v200.m256i_i64[0] == -1 )
          {
LABEL_93:
            nullsub_1(v70, v69, v71, v72, v143);
            v74 = (_OWORD *)sub_140001650(58, 1);
            if ( !v74 )
              sub_14176E54B(1, 58);
            *(_OWORD *)((char *)v74 + 42) = *(__int128 *)((char *)&xmmword_141862D6D + 10);
            v74[2] = xmmword_141862D6D;
            v74[1] = xmmword_141862D5D;
            v210 = v74;
            *v74 = xmmword_141862D4D;
            v75 = v208;
            if ( v208 == (_QWORD)v207 )
              sub_14172D430(&v207);
            v76 = *((_QWORD *)&v207 + 1);
            v77 = 3 * v75;
            *(_QWORD *)(*((_QWORD *)&v207 + 1) + 8 * v77) = 58;
            *(_QWORD *)(v76 + 8 * v77 + 8) = v210;
            *(_QWORD *)(v76 + 8 * v77 + 16) = 58;
            v208 = v75 + 1;
            sub_140A9E920(&v172);
            goto LABEL_97;
          }
        }
        *(_OWORD *)&v196[80] = v204;
        *(_OWORD *)&v196[64] = v203;
        *(_OWORD *)&v196[48] = v202;
        *(_OWORD *)&v196[32] = v201;
        *(__m256i *)v196 = v200;
        v177[0] = aNativeOffConfi_0;
        v177[1] = 37;
        if ( (unsigned __int8)sub_140B50A60(v196) )
        {
          sub_140B4F910(v198, v196);
          *(_QWORD *)v192 = v177;
          *(_QWORD *)&v192[8] = sub_1402DDC10;
          *(_QWORD *)&v192[16] = v198;
          *(_QWORD *)&v192[24] = sub_1400015F0;
          sub_141543AF0(v147, &unk_14185AE5B, v192);
          if ( *(_QWORD *)v198 )
            sub_140001660(*(_QWORD *)&v198[8], *(_QWORD *)v198, 1);
          sub_140AA6250((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe, 19, (__int64)v147);
          sub_140AFAD30(v198);
          v210 = *(_OWORD **)v198;
          if ( *(_QWORD *)v198 == -1 )
          {
            LODWORD(v188) = *(_DWORD *)&v198[8];
            *(_QWORD *)v192 = v177;
            *(_QWORD *)&v192[8] = sub_1402DDC10;
            *(_QWORD *)&v192[16] = &v188;
            *(_QWORD *)&v192[24] = sub_141553180;
            sub_141543AF0(v171, &unk_14185AE93, v192);
            sub_140AA6250((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe_0, 32, (__int64)v171);
            sub_14046E850(&v198[16]);
            if ( *(_QWORD *)&v198[16] )
              sub_140001660(*(_QWORD *)&v198[24], 24LL * *(_QWORD *)&v198[16], 8);
          }
          else
          {
            *(_OWORD *)&v192[80] = *(_OWORD *)&v198[80];
            *(_OWORD *)&v192[64] = *(_OWORD *)&v198[64];
            *(_OWORD *)&v192[48] = *(_OWORD *)&v198[48];
            *(_OWORD *)&v192[32] = *(_OWORD *)&v198[32];
            *(_OWORD *)&v192[16] = *(_OWORD *)&v198[16];
            *(_OWORD *)v192 = *(_OWORD *)v198;
            if ( *v47 >= 2u )
            {
              v178 = v177;
              v179 = sub_1402DDC10;
              v180 = v192;
              v181 = sub_1405060F0;
              *(_QWORD *)&v188 = aCodexmateLibCo_7;
              *((_QWORD *)&v188 + 1) = 45;
              v189 = aCodexmateLibCo_7;
              v190 = 45;
              v191 = &off_14185AF40;
              sub_1406E71E0(&unk_14185AEC5, &v178, 2, &v188);
            }
            sub_140A9E920(v192);
          }
          sub_14152EE30(0, 700000000);
          sub_14054A4D0(&v200, a2);
          if ( v200.m256i_i32[0] == -1 )
          {
            v73 = -1;
          }
          else
          {
            *(_OWORD *)&v192[80] = v204;
            *(_OWORD *)&v192[64] = v203;
            *(_OWORD *)&v192[48] = v202;
            *(_OWORD *)&v192[32] = v201;
            *(__m256i *)v192 = v200;
            if ( (unsigned __int8)sub_140B50A60(v192) )
            {
              sub_140B4F910(&v178, v196);
              sub_140B4F910(&v188, v192);
              *(_QWORD *)v198 = v177;
              *(_QWORD *)&v198[8] = sub_1402DDC10;
              *(_QWORD *)&v198[16] = &v178;
              *(_QWORD *)&v198[24] = sub_1400015F0;
              *(_QWORD *)&v198[32] = &v188;
              *(_QWORD *)&v198[40] = sub_1400015F0;
              sub_141543AF0(&v169, &unk_14185BBF0, v198);
              if ( (_QWORD)v188 )
                sub_140001660(*((_QWORD *)&v188 + 1), v188, 1);
              if ( v178 )
                sub_140001660(v179, v178, 1);
              v188 = v169;
              v189 = v170;
              v73 = 10;
              sub_140A9E920(v192);
            }
            else
            {
              v73 = *(_QWORD *)v192;
              v188 = *(_OWORD *)&v200.m256i_u64[1];
              v189 = (const char *)v200.m256i_i64[3];
              *(_OWORD *)v198 = v201;
              *(_OWORD *)&v198[16] = v202;
              *(_OWORD *)&v198[32] = v203;
              *(_OWORD *)&v198[48] = v204;
            }
            v200.m256i_i64[0] = v73;
            *(_OWORD *)&v200.m256i_u64[1] = v188;
            v200.m256i_i64[3] = (__int64)v189;
            v201 = *(_OWORD *)v198;
            v202 = *(_OWORD *)&v198[16];
            v203 = *(_OWORD *)&v198[32];
            v204 = *(_OWORD *)&v198[48];
          }
          sub_140A9E920(v196);
        }
        else
        {
          v73 = v200.m256i_i64[0];
        }
        if ( v73 != -1 )
        {
          *(_OWORD *)&v192[80] = v204;
          *(_OWORD *)&v192[64] = v203;
          *(_OWORD *)&v192[48] = v202;
          *(_OWORD *)&v192[32] = v201;
          *(__m256i *)v192 = v200;
          *(_QWORD *)v198 = &v172;
          *(_QWORD *)&v198[8] = sub_1405060F0;
          *(_QWORD *)&v198[16] = v192;
          *(_QWORD *)&v198[24] = sub_1405060F0;
          sub_141543AF0(v196, &unk_14185C534, v198);
          *(_OWORD *)v198 = *(_OWORD *)v196;
          *(_QWORD *)&v198[16] = *(_QWORD *)&v196[16];
          sub_140A9E920(v192);
          *(_QWORD *)(a1 + 24) = *(_QWORD *)&v198[16];
          *(_OWORD *)(a1 + 8) = *(_OWORD *)v198;
          *(_QWORD *)a1 = 10;
          sub_140A9E920(&v172);
          goto LABEL_126;
        }
        goto LABEL_93;
      }
    }
    nullsub_1(v43, v42, v44, v45, v143);
    v49 = sub_140001650(22, 1);
    if ( !v49 )
      sub_14176E54B(1, 22);
    *(_OWORD *)v49 = xmmword_141862D87;
    v210 = (_OWORD *)v49;
    *(_QWORD *)(v49 + 14) = 0x6769666E6F6320B1LL;
    v50 = v208;
    if ( v208 == (_QWORD)v207 )
      sub_14172D430(&v207);
    v51 = *((_QWORD *)&v207 + 1);
    v52 = 3 * v50;
    *(_QWORD *)(*((_QWORD *)&v207 + 1) + 8 * v52) = 22;
    *(_QWORD *)(v51 + 8 * v52 + 8) = v210;
    *(_QWORD *)(v51 + 8 * v52 + 16) = 22;
    v208 = v50 + 1;
    sub_14151B4E0((unsigned int)v196, a2[97], a2[98], (unsigned int)aCodexRouterCat, 25);
    v210 = *(_OWORD **)&v196[8];
    sub_14152E0B0(v192, *(_QWORD *)&v196[8], *(_QWORD *)&v196[16]);
    if ( *(_DWORD *)v192 == 2 )
    {
      *(_QWORD *)&v198[8] = *(_QWORD *)&v192[8];
      *(_QWORD *)v198 = 2;
    }
    else
    {
      *(_OWORD *)v198 = *(_OWORD *)v192;
      *(_QWORD *)&v198[80] = *(_QWORD *)&v192[80];
      *(_OWORD *)&v198[64] = *(_OWORD *)&v192[64];
      *(_OWORD *)&v198[48] = *(_OWORD *)&v192[48];
      *(_OWORD *)&v198[32] = *(_OWORD *)&v192[32];
      *(_OWORD *)&v198[16] = *(_OWORD *)&v192[16];
      if ( *(_QWORD *)v192 != 2 )
      {
        v64 = *(_QWORD *)v196;
        if ( *(_QWORD *)v196 )
          sub_140001660(v210, *(_QWORD *)v196, 1);
        nullsub_1(v53, v64, v54, v55, v145);
        v65 = sub_140001650(102, 1);
        if ( !v65 )
          sub_14176E54B(1, 102);
        *(_OWORD *)(v65 + 80) = xmmword_141862E04;
        *(_OWORD *)(v65 + 64) = xmmword_141862DF4;
        *(_OWORD *)(v65 + 48) = xmmword_141862DE4;
        *(_OWORD *)(v65 + 32) = xmmword_141862DD4;
        *(_OWORD *)(v65 + 16) = xmmword_141862DC4;
        *(_OWORD *)v65 = xmmword_141862DB4;
        v210 = (_OWORD *)v65;
        *(_QWORD *)(v65 + 94) = 0xB096E6B49BE6969BuLL;
        v66 = v206;
        if ( v206 == (_QWORD)v205 )
          sub_14172D430(&v205);
        v67 = *((_QWORD *)&v205 + 1);
        v68 = 3 * v66;
        *(_QWORD *)(*((_QWORD *)&v205 + 1) + 8 * v68) = 102;
        *(_QWORD *)(v67 + 8 * v68 + 8) = v210;
        *(_QWORD *)(v67 + 8 * v68 + 16) = 102;
        v206 = v66 + 1;
LABEL_97:
        LOBYTE(v188) = 1;
        v182.m256i_i64[0] = (__int64)aConfigSync;
        v182.m256i_i64[1] = 11;
        v172.m256i_i64[0] = v209;
        v172.m256i_i32[2] = v187;
        v78 = sub_141518FC0(&v172);
        *(_OWORD *)v200.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v78 + v79 / 0xF4240uLL;
        *(_QWORD *)v196 = aRouterEnabledF;
        *(_QWORD *)&v196[8] = 20;
        *(_QWORD *)v192 = &v188;
        *(_QWORD *)&v192[8] = sub_140B63790;
        *(_QWORD *)&v192[16] = &v182;
        *(_QWORD *)&v192[24] = sub_1402DDC10;
        *(_QWORD *)&v192[32] = &v200;
        *(_QWORD *)&v192[40] = sub_141551000;
        *(_QWORD *)&v192[48] = v196;
        *(_QWORD *)&v192[56] = sub_1402DDC10;
        sub_141543AF0(v198, &unk_14185A9F8, v192);
        sub_140AA6250((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPhaseTiming, 12, (__int64)v198);
        v81 = sub_141518E10(v80);
        v83 = v82;
        sub_140BF6AA0(v192, a2);
        v84 = *(_QWORD *)v192;
        v85 = v192[8];
        if ( *(_QWORD *)v192 != -1 )
        {
          *(_QWORD *)&v198[79] = *(_QWORD *)&v192[88];
          *(_OWORD *)&v198[64] = *(_OWORD *)&v192[73];
          *(_OWORD *)&v198[48] = *(_OWORD *)&v192[57];
          *(_OWORD *)&v198[32] = *(_OWORD *)&v192[41];
          *(_OWORD *)&v198[16] = *(_OWORD *)&v192[25];
          *(_OWORD *)v198 = *(_OWORD *)&v192[9];
          if ( (_BYTE)a8 )
          {
LABEL_99:
            *(_QWORD *)v192 = v84;
            v192[8] = v85;
            *(_OWORD *)&v192[9] = *(_OWORD *)v198;
            *(_OWORD *)&v192[25] = *(_OWORD *)&v198[16];
            *(_OWORD *)&v192[41] = *(_OWORD *)&v198[32];
            *(_OWORD *)&v192[57] = *(_OWORD *)&v198[48];
            *(_OWORD *)&v192[73] = *(_OWORD *)&v198[64];
            *(_QWORD *)&v192[88] = *(_QWORD *)&v198[79];
            *(_QWORD *)v196 = v192;
            *(_QWORD *)&v196[8] = sub_1405060F0;
            sub_141543AF0(&v167, &unk_141862E69, v196);
            v86 = v206;
            if ( v206 == (_QWORD)v205 )
              sub_14172D430(&v205);
            v87 = *((_QWORD *)&v205 + 1);
            v88 = 3 * v86;
            *(_QWORD *)(*((_QWORD *)&v205 + 1) + 8 * v88 + 16) = v168;
            *(_OWORD *)(v87 + 8 * v88) = v167;
            v206 = v86 + 1;
            LOBYTE(v169) = 0;
            sub_140A9E920(v192);
            goto LABEL_113;
          }
LABEL_105:
          *(_QWORD *)a1 = v84;
          *(_BYTE *)(a1 + 8) = v85;
          v93 = *(_OWORD *)&v198[16];
          v94 = *(_OWORD *)&v198[32];
          v95 = *(_OWORD *)&v198[48];
          *(_OWORD *)(a1 + 9) = *(_OWORD *)v198;
          *(_OWORD *)(a1 + 25) = v93;
          *(_OWORD *)(a1 + 41) = v94;
          *(_OWORD *)(a1 + 57) = v95;
          *(_OWORD *)(a1 + 73) = *(_OWORD *)&v198[64];
          *(_QWORD *)(a1 + 88) = *(_QWORD *)&v198[79];
          goto LABEL_126;
        }
        if ( (unsigned __int8)sub_140BF25B0(a2) )
        {
          sub_140BF8F60(v192, a2);
          v84 = *(_QWORD *)v192;
          v90 = v192[8];
          if ( *(_QWORD *)v192 != -1 )
          {
            *(_QWORD *)&v198[79] = *(_QWORD *)&v192[88];
            *(_OWORD *)&v198[64] = *(_OWORD *)&v192[73];
            *(_OWORD *)&v198[48] = *(_OWORD *)&v192[57];
            *(_OWORD *)&v198[32] = *(_OWORD *)&v192[41];
            *(_OWORD *)&v198[16] = *(_OWORD *)&v192[25];
            *(_OWORD *)v198 = *(_OWORD *)&v192[9];
            v85 = v192[8];
            if ( (_BYTE)a8 )
              goto LABEL_99;
            goto LABEL_105;
          }
          v85 |= v192[8];
        }
        if ( (v85 & 1) != 0 )
        {
          nullsub_1(v90, v89, v91, v92, v146);
          v96 = (_OWORD *)sub_140001650(59, 1);
          if ( !v96 )
            sub_14176E54B(1, 59);
          *(_OWORD *)((char *)v96 + 43) = *(__int128 *)((char *)&xmmword_141862E4E + 11);
          v96[2] = xmmword_141862E4E;
          v96[1] = xmmword_141862E3E;
          v209 = (__int64)v96;
          *v96 = xmmword_141862E2E;
          v97 = v208;
          if ( v208 == (_QWORD)v207 )
            sub_14172D430(&v207);
          v98 = *((_QWORD *)&v207 + 1);
          v99 = 3 * v97;
          *(_QWORD *)(*((_QWORD *)&v207 + 1) + 8 * v99) = 59;
          *(_QWORD *)(v98 + 8 * v99 + 8) = v209;
          *(_QWORD *)(v98 + 8 * v99 + 16) = 59;
          v208 = v97 + 1;
        }
        LOBYTE(v169) = v85;
LABEL_113:
        *(_QWORD *)v192 = &v169;
        *(_QWORD *)&v192[8] = sub_141554060;
        sub_141543AF0(v154, &unk_141862EB1, v192);
        LOBYTE(v100) = 1;
        sub_140AA8570(v100, (unsigned int)aAuthCleanup, 12, v81, v83, (__int64)v154);
        v102 = sub_141518E10(v101);
        v104 = v103;
        LOBYTE(v178) = sub_14056B030(a2);
        *(_QWORD *)&v188 = 0;
        v182.m256i_i64[0] = 0;
        if ( (_BYTE)v178 )
        {
          sub_140573DE0(v192, a2);
          if ( *(_DWORD *)v192 == 1 )
          {
            v105 = (__int128 *)&v192[8];
            if ( !(_BYTE)a8 )
              goto LABEL_153;
            *(_OWORD *)&v198[80] = *(_OWORD *)&v192[88];
            *(_OWORD *)&v198[64] = *(_OWORD *)&v192[72];
            *(_OWORD *)&v198[48] = *(_OWORD *)&v192[56];
            *(_OWORD *)&v198[32] = *(_OWORD *)&v192[40];
            *(_OWORD *)&v198[16] = *(_OWORD *)&v192[24];
            *(_OWORD *)v198 = *(_OWORD *)&v192[8];
            *(_QWORD *)v196 = v198;
            *(_QWORD *)&v196[8] = sub_1405060F0;
            sub_141543AF0(v159, &unk_141862F70, v196);
            sub_140542B50(&v205, v159);
            sub_140A9E920(v198);
          }
          else
          {
            v106 = *(_QWORD *)&v192[24];
            v107 = *(_QWORD *)&v192[48];
            if ( *(_QWORD *)&v192[96] )
            {
              sub_140A9F870(
                (unsigned int)v198,
                *(_DWORD *)&v192[88],
                *(_DWORD *)&v192[96],
                (unsigned int)&unk_14185AB4E,
                3);
              *(_QWORD *)&v196[16] = *(_QWORD *)&v198[16];
              *(_OWORD *)v196 = *(_OWORD *)v198;
              *(_QWORD *)v198 = v196;
              *(_QWORD *)&v198[8] = sub_1400015F0;
              sub_141543AF0(v161, &unk_141862EC8, v198);
              if ( *(_QWORD *)v196 )
                sub_140001660(*(_QWORD *)&v196[8], *(_QWORD *)v196, 1);
              sub_140542B50(&v205, v161);
            }
            *(_QWORD *)&v188 = v106;
            v182.m256i_i64[0] = v107;
            *(_QWORD *)v198 = &v188;
            *(_QWORD *)&v198[8] = sub_141553F20;
            *(_QWORD *)&v198[16] = &v182;
            *(_QWORD *)&v198[24] = sub_141553F20;
            sub_141543AF0(v160, &unk_141862F41, v198);
            sub_140542B50(&v207, v160);
            sub_140521FB0(&v192[8]);
          }
        }
        *(_QWORD *)v192 = &v178;
        *(_QWORD *)&v192[8] = sub_141554060;
        *(_QWORD *)&v192[16] = &v188;
        *(_QWORD *)&v192[24] = sub_141553F20;
        *(_QWORD *)&v192[32] = &v182;
        *(_QWORD *)&v192[40] = sub_141553F20;
        sub_141543AF0(v153, &unk_141862FBC, v192);
        LOBYTE(v108) = 1;
        sub_140AA8570(v108, (unsigned int)aTakeoverRestor, 16, v102, v104, (__int64)v153);
        sub_140B3DD80(v192);
        if ( *(_QWORD *)v192 != -1 )
        {
          *(_OWORD *)&v198[80] = *(_OWORD *)&v192[80];
          *(_OWORD *)&v198[64] = *(_OWORD *)&v192[64];
          *(_OWORD *)&v198[48] = *(_OWORD *)&v192[48];
          *(_OWORD *)&v198[32] = *(_OWORD *)&v192[32];
          *(_OWORD *)v198 = *(_OWORD *)v192;
          *(_OWORD *)&v198[16] = *(_OWORD *)&v192[16];
LABEL_125:
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v198[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v198[64];
          v110 = *(_OWORD *)v198;
          v111 = *(_OWORD *)&v198[16];
          v112 = *(_OWORD *)&v198[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v198[48];
          *(_OWORD *)(a1 + 32) = v112;
          *(_OWORD *)(a1 + 16) = v111;
          *(_OWORD *)a1 = v110;
          goto LABEL_126;
        }
        *(_QWORD *)v196 = *(_QWORD *)&v192[16];
        *(_QWORD *)&v196[8] = *(_QWORD *)&v192[16];
        *(_QWORD *)&v196[16] = *(_QWORD *)&v192[8];
        *(_QWORD *)&v196[24] = *(_QWORD *)&v192[16] + 32LL * *(_QWORD *)&v192[24];
        sub_14004BC00(&v200, v196);
        sub_140B3D580(v198, &v200);
        if ( *(_DWORD *)v198 != -1 )
          goto LABEL_125;
        v120 = sub_141518E10(v109);
        v122 = v121;
        sub_140C14AB0(v198, a2);
        if ( *(_DWORD *)v198 == -1 )
        {
          *(_QWORD *)&v196[32] = *(_QWORD *)&v198[40];
          *(_OWORD *)&v196[16] = *(_OWORD *)&v198[24];
          *(_OWORD *)v196 = *(_OWORD *)&v198[8];
          *(_QWORD *)v192 = v196;
          *(_QWORD *)&v192[8] = sub_141553F20;
          *(_QWORD *)&v192[16] = &v196[8];
          *(_QWORD *)&v192[24] = sub_141553F20;
          *(_QWORD *)&v192[32] = &v196[16];
          *(_QWORD *)&v192[40] = sub_141553F20;
          *(_QWORD *)&v192[48] = &v196[24];
          *(_QWORD *)&v192[56] = sub_141553F20;
          *(_QWORD *)&v192[64] = &v196[32];
          *(_QWORD *)&v192[72] = sub_141553F20;
          sub_141543AF0(v152, &unk_141863002, v192);
          LOBYTE(v124) = 1;
          sub_140AA8570(v124, (unsigned int)aNoAccountModel_0, 24, v120, v122, (__int64)v152);
          if ( *(_QWORD *)v196 )
          {
            *(_QWORD *)v192 = v196;
            *(_QWORD *)&v192[8] = sub_141553F20;
            sub_141543AF0(v158, &unk_141863075, v192);
            sub_140542B50(&v207, v158);
          }
        }
        else
        {
          if ( !(_BYTE)a8 )
          {
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v198[80];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v198[64];
            v132 = *(_OWORD *)v198;
            v133 = *(_OWORD *)&v198[16];
            v134 = *(_OWORD *)&v198[32];
            v135 = *(_OWORD *)&v198[48];
            goto LABEL_166;
          }
          *(_OWORD *)&v192[80] = *(_OWORD *)&v198[80];
          *(_OWORD *)&v192[64] = *(_OWORD *)&v198[64];
          *(_OWORD *)&v192[48] = *(_OWORD *)&v198[48];
          *(_OWORD *)&v192[32] = *(_OWORD *)&v198[32];
          *(_OWORD *)&v192[16] = *(_OWORD *)&v198[16];
          *(_OWORD *)v192 = *(_OWORD *)v198;
          *(_QWORD *)v196 = v192;
          *(_QWORD *)&v196[8] = sub_1405060F0;
          sub_141543AF0(v151, &unk_14185BBA9, v196);
          LOBYTE(v123) = 1;
          sub_140AA8570(v123, (unsigned int)aNoAccountModel_0, 24, v120, v122, (__int64)v151);
          *(_QWORD *)v196 = v192;
          *(_QWORD *)&v196[8] = sub_1405060F0;
          sub_141543AF0(v157, &unk_1418630B1, v196);
          sub_140542B50(&v205, v157);
          sub_140A9E920(v192);
        }
        sub_1405619B0(&v172, a2);
        v125 = a10;
        if ( a10 )
        {
          v126 = *(void (__fastcall **)(__int64, const char *, __int64))(a11 + 32);
          v212 = 1;
          v126(a10, aReconcilingThr, 19);
        }
        v212 = 1;
        v127 = sub_141518E10(v125);
        v129 = v128;
        *(_QWORD *)&v192[16] = v172.m256i_i64[2];
        *(_OWORD *)v192 = *(_OWORD *)v172.m256i_i8;
        *(_QWORD *)&v192[24] = aOpenai_0;
        *(_QWORD *)&v192[32] = 6;
        *(_WORD *)&v192[40] = 257;
        v212 = 0;
        sub_140C0F880((unsigned int)v198, (_DWORD)a2, (unsigned int)v192, a12);
        if ( *(_DWORD *)v198 != 2 )
        {
          sub_14172B820(v192, v198, 296);
          LOBYTE(v136) = 1;
          sub_140B4F590(v136, v127, v129, v192, a13);
          sub_140B4FD60(&v200, aNativeoff, 9, v192);
          *(_QWORD *)v196 = v200.m256i_i64[1];
          *(_QWORD *)&v196[8] = v200.m256i_i64[1];
          *(_QWORD *)&v196[16] = v200.m256i_i64[0];
          *(_QWORD *)&v196[24] = v200.m256i_i64[1] + 24 * v200.m256i_i64[2];
          sub_14045B820(&v207, v196);
          sub_140B502B0(&v205, aNativeoff, 9, v192);
          sub_1405229D0(v198);
LABEL_155:
          v212 = 0;
          v137 = sub_141518E10(v131);
          v139 = v138;
          v212 = 0;
          sub_1405E0390(v192, a2);
          sub_1405D7C20(v198, v192);
          if ( *(_QWORD *)v198 == -1 )
          {
            *(_QWORD *)v198 = &v193;
            *(_QWORD *)&v198[8] = sub_141553F20;
            *(_QWORD *)&v198[16] = &v194;
            *(_QWORD *)&v198[24] = sub_141553F20;
            *(_QWORD *)&v198[32] = &v195;
            *(_QWORD *)&v198[40] = sub_141553F20;
            sub_141543AF0(v148, &unk_14185AC8B, v198);
            LOBYTE(v141) = 1;
            sub_140AA8570(v141, (unsigned int)aProjectState, 13, v137, v139, (__int64)v148);
LABEL_170:
            *(_QWORD *)&v198[16] = v208;
            *(_OWORD *)v198 = v207;
            *(_QWORD *)&v198[40] = v206;
            *(_OWORD *)&v198[24] = v205;
            *(_OWORD *)(a1 + 8) = v207;
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v198[32];
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v198[16];
            *(_BYTE *)(a1 + 56) = 1;
            *(_QWORD *)a1 = -1;
            sub_14049F2D0(v192);
            return a1;
          }
          if ( *(_QWORD *)v198 )
            sub_140001660(*(_QWORD *)&v198[8], *(_QWORD *)v198, 1);
          sub_1405D7DD0(v196, a2);
          if ( *(_QWORD *)v196 != -1 )
          {
            v199 = v197;
            *(_OWORD *)&v198[96] = *(_OWORD *)&v196[96];
            *(_OWORD *)&v198[80] = *(_OWORD *)&v196[80];
            *(_OWORD *)&v198[64] = *(_OWORD *)&v196[64];
            *(_OWORD *)&v198[48] = *(_OWORD *)&v196[48];
            *(_OWORD *)&v198[32] = *(_OWORD *)&v196[32];
            *(_OWORD *)&v198[16] = *(_OWORD *)&v196[16];
            *(_OWORD *)v198 = *(_OWORD *)v196;
            v200.m256i_i64[0] = (__int64)&v199;
            v200.m256i_i64[1] = (__int64)sub_141554060;
            v200.m256i_i64[2] = (__int64)&v198[88];
            v200.m256i_i64[3] = (__int64)sub_141553F20;
            *(_QWORD *)&v201 = &v198[96];
            *((_QWORD *)&v201 + 1) = sub_141553F20;
            *(_QWORD *)&v202 = &v198[104];
            *((_QWORD *)&v202 + 1) = sub_141553F20;
            v211 = 1;
            sub_141543AF0(v149, &unk_1418631D4, &v200);
            v211 = 1;
            LOBYTE(v140) = 1;
            sub_140AA8570(v140, (unsigned int)aProjectState, 13, v137, v139, (__int64)v149);
            v200.m256i_i64[2] = *(_QWORD *)&v198[16];
            *(_OWORD *)v200.m256i_i8 = *(_OWORD *)v198;
            v211 = 0;
            sub_140542B50(&v207, &v200);
            if ( *(_QWORD *)&v198[24] != -1 && *(_QWORD *)&v198[24] )
              sub_140001660(*(_QWORD *)&v198[32], *(_QWORD *)&v198[24], 1);
            if ( *(_QWORD *)&v198[56] != -1 && *(_QWORD *)&v198[56] )
              sub_140001660(*(_QWORD *)&v198[64], *(_QWORD *)&v198[56], 1);
            goto LABEL_170;
          }
          if ( (_BYTE)a8 )
          {
            *(_OWORD *)&v198[80] = *(_OWORD *)&v196[88];
            *(_OWORD *)&v198[64] = *(_OWORD *)&v196[72];
            *(_OWORD *)&v198[48] = *(_OWORD *)&v196[56];
            *(_OWORD *)&v198[32] = *(_OWORD *)&v196[40];
            *(_OWORD *)&v198[16] = *(_OWORD *)&v196[24];
            *(_OWORD *)v198 = *(_OWORD *)&v196[8];
            v200.m256i_i64[0] = (__int64)v198;
            v200.m256i_i64[1] = (__int64)sub_1405060F0;
            sub_141543AF0(v155, &unk_141863204, &v200);
            sub_140542B50(&v205, v155);
            sub_140A9E920(v198);
            goto LABEL_170;
          }
          *(_OWORD *)&v198[80] = *(_OWORD *)&v196[88];
          *(_OWORD *)&v198[64] = *(_OWORD *)&v196[72];
          *(_OWORD *)&v198[48] = *(_OWORD *)&v196[56];
          *(_OWORD *)&v198[32] = *(_OWORD *)&v196[40];
          *(_OWORD *)&v198[16] = *(_OWORD *)&v196[24];
          *(_OWORD *)v198 = *(_OWORD *)&v196[8];
          v200.m256i_i64[0] = (__int64)v198;
          v200.m256i_i64[1] = (__int64)sub_1405060F0;
          sub_141543AF0(&v162, &unk_14186323D, &v200);
          *(_QWORD *)(a1 + 24) = v163;
          *(_OWORD *)(a1 + 8) = v162;
          *(_QWORD *)a1 = 10;
          sub_140A9E920(v198);
          sub_14049F2D0(v192);
LABEL_126:
          v113 = v206;
          if ( v206 )
          {
            v114 = (_QWORD *)(*((_QWORD *)&v205 + 1) + 8LL);
            do
            {
              v115 = *(v114 - 1);
              if ( v115 )
                sub_140001660(*v114, v115, 1);
              v114 += 3;
              --v113;
            }
            while ( v113 );
          }
          goto LABEL_131;
        }
        v105 = (__int128 *)&v198[8];
        if ( (_BYTE)a8 )
        {
          *(_OWORD *)&v192[80] = *(_OWORD *)&v198[88];
          *(_OWORD *)&v192[64] = *(_OWORD *)&v198[72];
          *(_OWORD *)&v192[48] = *(_OWORD *)&v198[56];
          *(_OWORD *)&v192[32] = *(_OWORD *)&v198[40];
          *(_OWORD *)&v192[16] = *(_OWORD *)&v198[24];
          *(_OWORD *)v192 = *(_OWORD *)&v198[8];
          *(_QWORD *)v196 = v192;
          *(_QWORD *)&v196[8] = sub_1405060F0;
          sub_141543AF0(v150, &unk_14185BBA9, v196);
          LOBYTE(v130) = 1;
          sub_140AA8570(v130, (unsigned int)aThreadReconcil, 16, v127, v129, (__int64)v150);
          if ( *(_QWORD *)off_141FB9E30 >= 2u )
          {
            v200.m256i_i64[0] = (__int64)v192;
            v200.m256i_i64[1] = (__int64)sub_1405060F0;
            *(_QWORD *)v196 = aCodexmateLibCo_7;
            *(_QWORD *)&v196[8] = 45;
            *(_QWORD *)&v196[16] = aCodexmateLibCo_7;
            *(_QWORD *)&v196[24] = 45;
            *(_QWORD *)&v196[32] = &off_141863180;
            sub_1406E71E0(&unk_14186311E, &v200, 2, v196);
          }
          *(_QWORD *)v196 = v192;
          *(_QWORD *)&v196[8] = sub_1405060F0;
          sub_141543AF0(v156, &unk_141863198, v196);
          sub_140542B50(&v205, v156);
          v212 = 0;
          sub_140A9E920(v192);
          goto LABEL_155;
        }
LABEL_153:
        *(_OWORD *)(a1 + 80) = v105[5];
        *(_OWORD *)(a1 + 64) = v105[4];
        v132 = *v105;
        v133 = v105[1];
        v134 = v105[2];
        v135 = v105[3];
LABEL_166:
        *(_OWORD *)(a1 + 48) = v135;
        *(_OWORD *)(a1 + 32) = v134;
        *(_OWORD *)(a1 + 16) = v133;
        *(_OWORD *)a1 = v132;
        goto LABEL_126;
      }
    }
    sub_1400478E0(&v198[8]);
    v59 = *(_QWORD *)v196;
    if ( *(_QWORD *)v196 )
      sub_140001660(v210, *(_QWORD *)v196, 1);
    nullsub_1(v56, v59, v57, v58, v145);
    v60 = sub_140001650(23, 1);
    if ( !v60 )
      sub_14176E54B(1, 23);
    *(_OWORD *)v60 = xmmword_141862D9D;
    v210 = (_OWORD *)v60;
    *(_QWORD *)(v60 + 15) = 0x676F6C6174616320LL;
    v61 = v208;
    if ( v208 == (_QWORD)v207 )
      sub_14172D430(&v207);
    v62 = *((_QWORD *)&v207 + 1);
    v63 = 3 * v61;
    *(_QWORD *)(*((_QWORD *)&v207 + 1) + 8 * v63) = 23;
    *(_QWORD *)(v62 + 8 * v63 + 8) = v210;
    *(_QWORD *)(v62 + 8 * v63 + 16) = 23;
    v208 = v61 + 1;
    goto LABEL_97;
  }
  nullsub_1(v20, v21, v18, v19, v143);
  if ( !(_BYTE)a8 )
  {
    v33 = (void *)sub_140001650(70, 1);
    if ( !v33 )
      sub_14176E54B(1, 70);
    qmemcpy(v33, "NativeOff strict reconciliation requires a verified Codex quiet window", 70);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 70;
    *(_QWORD *)(a1 + 16) = v33;
    *(_QWORD *)(a1 + 24) = 70;
    v34 = v206;
    if ( !v206 )
      goto LABEL_131;
    goto LABEL_18;
  }
  v22 = sub_140001650(84, 1);
  if ( !v22 )
    sub_14176E54B(1, 84);
  *(_OWORD *)(v22 + 64) = xmmword_141862BCC;
  *(_OWORD *)(v22 + 48) = xmmword_141862BBC;
  *(_OWORD *)(v22 + 32) = xmmword_141862BAC;
  *(_OWORD *)(v22 + 16) = xmmword_141862B9C;
  *(_OWORD *)v22 = xmmword_141862B8C;
  v209 = v22;
  *(_DWORD *)(v22 + 80) = -1517951591;
  v25 = v208;
  if ( v208 == (_QWORD)v207 )
    sub_14172D430(&v207);
  v26 = *((_QWORD *)&v207 + 1);
  v27 = 3 * v25;
  *(_QWORD *)(*((_QWORD *)&v207 + 1) + 8 * v27) = 84;
  v28 = v209;
  *(_QWORD *)(v26 + 8 * v27 + 8) = v209;
  *(_QWORD *)(v26 + 8 * v27 + 16) = 84;
  v208 = v25 + 1;
  nullsub_1(3 * v25, v28, v23, v24, v144);
  v29 = sub_140001650(98, 1);
  if ( !v29 )
    sub_14176E54B(1, 98);
  *(_OWORD *)(v29 + 80) = xmmword_141862C30;
  *(_OWORD *)(v29 + 64) = xmmword_141862C20;
  *(_OWORD *)(v29 + 48) = xmmword_141862C10;
  *(_OWORD *)(v29 + 32) = xmmword_141862C00;
  *(_OWORD *)(v29 + 16) = xmmword_141862BF0;
  *(_OWORD *)v29 = xmmword_141862BE0;
  v209 = v29;
  *(_WORD *)(v29 + 96) = -32384;
  v30 = v206;
  if ( v206 == (_QWORD)v205 )
    sub_14172D430(&v205);
  v31 = *((_QWORD *)&v205 + 1);
  v32 = 3 * v30;
  *(_QWORD *)(*((_QWORD *)&v205 + 1) + 8 * v32) = 98;
  *(_QWORD *)(v31 + 8 * v32 + 8) = v209;
  *(_QWORD *)(v31 + 8 * v32 + 16) = 98;
  v206 = v30 + 1;
  *(_QWORD *)&v192[16] = v208;
  *(_OWORD *)v192 = v207;
  *(_QWORD *)&v192[40] = v30 + 1;
  *(_OWORD *)&v192[24] = v205;
  *(_OWORD *)(a1 + 8) = v207;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v192[32];
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v192[16];
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)a1 = -1;
  return a1;
}
