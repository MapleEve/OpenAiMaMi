// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_1406F79D0(
        __int128 *a1,
        void *a2,
        __int64 a3,
        char a4,
        __int128 a5,
        __int64 *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned __int8 *a10)
{
  __int8 v10; // bl
  __int128 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rcx
  char v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  int v26; // edx
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int32 v31; // edi
  __int8 v32; // si
  unsigned __int64 v33; // rax
  unsigned int v34; // edx
  bool v35; // zf
  bool v36; // al
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // r15
  unsigned __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // r15
  bool v47; // al
  char v48; // r12
  _QWORD *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rdi
  _QWORD *v53; // r15
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int128 v57; // xmm3
  _OWORD *v58; // rax
  __int64 v59; // rax
  unsigned int v60; // edx
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  __int64 v68; // rdi
  __int64 v69; // rsi
  _QWORD *v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // r9
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  char v77; // r12
  bool v78; // r13
  __int64 v79; // rdi
  _QWORD *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rcx
  char v85; // al
  __int128 *v86; // r15
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm2
  __int64 v90; // rdi
  _QWORD *v91; // rbx
  __int64 v92; // rdx
  char v93; // al
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm2
  __int64 v97; // rsi
  __int64 v98; // rax
  unsigned int v99; // edx
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  __int128 v103; // xmm3
  __int128 v104; // xmm4
  __int64 v105; // rax
  unsigned int v106; // edx
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  __int128 v109; // xmm2
  __int128 v110; // xmm3
  __int128 v111; // xmm4
  _QWORD *v112; // rdi
  __int64 v113; // rdx
  __int64 v114; // rax
  unsigned int v115; // edx
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm2
  __m512i v119; // [rsp+40h] [rbp-40h] BYREF
  __int128 v120; // [rsp+80h] [rbp+0h]
  __int128 v121; // [rsp+90h] [rbp+10h]
  __int128 v122; // [rsp+A0h] [rbp+20h]
  __int128 v123; // [rsp+B0h] [rbp+30h]
  __int128 v124; // [rsp+C0h] [rbp+40h]
  __int64 v125; // [rsp+D0h] [rbp+50h]
  __m256i v126; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v127; // [rsp+100h] [rbp+80h]
  __int128 v128; // [rsp+110h] [rbp+90h]
  __int128 v129; // [rsp+120h] [rbp+A0h]
  __int128 v130; // [rsp+130h] [rbp+B0h]
  __int64 v131; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v132; // [rsp+148h] [rbp+C8h]
  __int64 v133; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v134; // [rsp+160h] [rbp+E0h]
  __int64 v135; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v136; // [rsp+178h] [rbp+F8h]
  __int64 v137; // [rsp+188h] [rbp+108h] BYREF
  int v138; // [rsp+190h] [rbp+110h]
  __int128 v139; // [rsp+198h] [rbp+118h] BYREF
  __int64 v140; // [rsp+1A8h] [rbp+128h]
  _BYTE *v141; // [rsp+1B0h] [rbp+130h]
  __int64 v142; // [rsp+1B8h] [rbp+138h]
  __int64 v143; // [rsp+1C0h] [rbp+140h]
  __int64 v144; // [rsp+1C8h] [rbp+148h]
  __int64 v145; // [rsp+1D0h] [rbp+150h] BYREF
  int v146; // [rsp+1D8h] [rbp+158h]
  _BYTE v147[96]; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v148; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v149; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v150; // [rsp+258h] [rbp+1D8h]
  __int64 v151; // [rsp+260h] [rbp+1E0h]
  unsigned __int64 v152; // [rsp+268h] [rbp+1E8h]
  __int64 v153; // [rsp+270h] [rbp+1F0h]
  __int128 v154; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v155; // [rsp+288h] [rbp+208h]
  __m256i v156; // [rsp+290h] [rbp+210h] BYREF
  __int128 v157; // [rsp+2B0h] [rbp+230h]
  __int128 v158; // [rsp+2C0h] [rbp+240h]
  __int128 v159; // [rsp+2D0h] [rbp+250h]
  __int128 v160; // [rsp+2E0h] [rbp+260h]
  __int128 v161; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v162; // [rsp+300h] [rbp+280h]
  __m256i v163; // [rsp+310h] [rbp+290h] BYREF
  __int128 v164; // [rsp+330h] [rbp+2B0h]
  __int128 v165; // [rsp+340h] [rbp+2C0h]
  __int128 v166; // [rsp+350h] [rbp+2D0h]
  __int128 v167; // [rsp+360h] [rbp+2E0h]
  __int128 v168; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v169; // [rsp+388h] [rbp+308h]
  unsigned int v170; // [rsp+394h] [rbp+314h]
  __int128 *v171; // [rsp+398h] [rbp+318h]
  __m256i v172; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v173; // [rsp+3C0h] [rbp+340h]
  __int128 v174; // [rsp+3D0h] [rbp+350h]
  __int128 v175; // [rsp+3E0h] [rbp+360h]
  __int128 v176; // [rsp+3F0h] [rbp+370h]
  __int128 v177; // [rsp+400h] [rbp+380h] BYREF
  __int64 v178; // [rsp+410h] [rbp+390h]
  __int32 v179; // [rsp+418h] [rbp+398h] BYREF
  __int8 v180; // [rsp+41Ch] [rbp+39Ch] BYREF
  __m512i v181; // [rsp+420h] [rbp+3A0h] BYREF
  __int128 v182; // [rsp+460h] [rbp+3E0h]
  __int128 v183; // [rsp+470h] [rbp+3F0h]
  __int64 v184; // [rsp+488h] [rbp+408h]
  _BYTE v185[96]; // [rsp+490h] [rbp+410h] BYREF
  __m256i v186; // [rsp+4F0h] [rbp+470h]
  __int128 v187; // [rsp+510h] [rbp+490h]
  __int128 v188; // [rsp+520h] [rbp+4A0h]
  __int128 v189; // [rsp+530h] [rbp+4B0h]
  __int128 v190; // [rsp+540h] [rbp+4C0h]
  unsigned __int8 v191; // [rsp+55Eh] [rbp+4DEh] BYREF
  __int8 v192; // [rsp+55Fh] [rbp+4DFh] BYREF
  __m256i FileHandle; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v194; // [rsp+580h] [rbp+500h]
  __int128 v195; // [rsp+590h] [rbp+510h]
  __int128 v196; // [rsp+5A0h] [rbp+520h]
  __int128 v197; // [rsp+5B0h] [rbp+530h]
  char v198; // [rsp+5CFh] [rbp+54Fh]
  __m256i v199; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v200; // [rsp+5F0h] [rbp+570h]
  _BYTE v201[48]; // [rsp+600h] [rbp+580h]
  __int64 v202; // [rsp+630h] [rbp+5B0h]
  char v203; // [rsp+63Fh] [rbp+5BFh] BYREF
  void *Buf; // [rsp+640h] [rbp+5C0h]
  char v205; // [rsp+64Fh] [rbp+5CFh]
  __int64 v206; // [rsp+650h] [rbp+5D0h]
  char v207; // [rsp+65Ah] [rbp+5DAh]
  char v208; // [rsp+65Bh] [rbp+5DBh]
  char v209; // [rsp+65Ch] [rbp+5DCh]
  char v210; // [rsp+65Dh] [rbp+5DDh] BYREF
  char v211; // [rsp+65Eh] [rbp+5DEh] BYREF
  unsigned __int8 v212; // [rsp+65Fh] [rbp+5DFh] BYREF
  __int64 v213; // [rsp+660h] [rbp+5E0h]

  v213 = -2;
  v10 = a3;
  Buf = a2;
  v11 = a1;
  v212 = a3;
  v203 = a4;
  v139 = a5;
  v145 = sub_141471910(a1, a2, a3);
  v146 = v12;
  v15 = sub_141471910(v13, v12, v14);
  v152 = sub_141491390(v15, v16, 12, 0, (__int64)&off_1417874D0);
  v170 = v17;
  *(_QWORD *)v185 = &v203;
  *(_QWORD *)&v185[8] = sub_1407B87B0;
  *(_QWORD *)&v185[16] = &v139;
  *(_QWORD *)&v185[24] = sub_14041F680;
  sub_14149C0F0(&v135, &unk_1417874E8, v185);
  v181.m512i_i8[0] = v10;
  v206 = v136;
  *(_OWORD *)FileHandle.m256i_i8 = v136;
  *(_QWORD *)v185 = &v181;
  *(_QWORD *)&v185[8] = sub_1407B2DA0;
  *(_QWORD *)&v185[16] = &FileHandle;
  *(_QWORD *)&v185[24] = sub_14041F680;
  sub_14149C0F0(&v199, &unk_141787489, v185);
  sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStart_1, 5, (__int64)&v199);
  v18 = v135;
  if ( v135 )
    sub_140001660(v206, v135, 1);
  v140 = *a6;
  v141 = (_BYTE *)a6[1];
  v184 = a6[2];
  v142 = a6[3];
  v143 = a6[4];
  v144 = *(_QWORD *)(a7 + 24);
  v19 = 1;
  v20 = 0;
  v171 = v11;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (v20 & 1) != 0 || (unsigned __int8)v19 > 3u )
      {
        nullsub_1(v20);
        v58 = (_OWORD *)sub_140001650(109, 1);
        if ( !v58 )
          sub_1416C2D4B(1, 109);
        *(_OWORD *)((char *)v58 + 93) = *(__int128 *)((char *)&xmmword_141787551 + 13);
        v58[5] = xmmword_141787551;
        v58[4] = xmmword_141787541;
        v58[3] = xmmword_141787531;
        v58[2] = xmmword_141787521;
        qmemcpy(v58, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
        v181.m512i_i64[1] = 109;
        v181.m512i_i64[2] = (__int64)v58;
        v181.m512i_i64[3] = 109;
        v181.m512i_i64[0] = 10;
        v199.m256i_i64[0] = 0;
        *(_OWORD *)&v199.m256i_u64[1] = 1u;
        *(_QWORD *)&v185[16] = 1610612768;
        *(_QWORD *)v185 = &v199;
        *(_QWORD *)&v185[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v181, v185) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v211,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v202 = v199.m256i_i64[1];
        v206 = v199.m256i_i64[0];
        write((int)&FileHandle, Buf, v212);
        if ( FileHandle.m256i_i32[0] != -1 )
        {
          *(_OWORD *)&v201[32] = v197;
          *(_OWORD *)&v201[16] = v196;
          *(_OWORD *)v201 = v195;
          v200 = v194;
          v199 = FileHandle;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v172.m256i_i64[0] = (__int64)&v199;
            v172.m256i_i64[1] = (__int64)sub_140B036A0;
            *(_QWORD *)v185 = 0;
            *(_QWORD *)&v185[8] = aCodexmateLibCo_27;
            *(_OWORD *)&v185[16] = 0x2Du;
            *(_QWORD *)&v185[32] = aSrcCoreRelayRo_1;
            *(_QWORD *)&v185[40] = 35;
            *(_QWORD *)&v185[48] = 2;
            *(_QWORD *)&v185[56] = aCodexmateLibCo_27;
            *(_QWORD *)&v185[64] = 45;
            *(_QWORD *)&v185[72] = 0x15F00000001LL;
            *(_QWORD *)&v185[80] = &unk_14178FCF6;
            *(_QWORD *)&v185[88] = &v172;
            sub_1412C36A0(&v211, v185);
          }
          sub_1406CDA20(&v199);
        }
        if ( v206 )
          sub_140001660(v202, v206, 1);
        v199.m256i_i64[0] = 0;
        *(_OWORD *)&v199.m256i_u64[1] = 1u;
        *(_QWORD *)&v185[16] = 1610612768;
        *(_QWORD *)v185 = &v199;
        *(_QWORD *)&v185[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v181, v185) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v211,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        Buf = (void *)v199.m256i_i64[0];
        v172.m256i_i8[0] = v212;
        v206 = v199.m256i_i64[1];
        *(_OWORD *)FileHandle.m256i_i8 = *(_OWORD *)&v199.m256i_u64[1];
        *(_QWORD *)v185 = &v172;
        *(_QWORD *)&v185[8] = sub_1407B2DA0;
        *(_QWORD *)&v185[16] = &FileHandle;
        *(_QWORD *)&v185[24] = sub_14041F680;
        sub_14149C0F0(&v199, &unk_141787489, v185);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aRetryExhausted, 15, (__int64)&v199);
        if ( Buf )
          sub_140001660(v206, Buf, 1);
        goto LABEL_118;
      }
      LOBYTE(v18) = v19 == 3;
      v206 = v18;
      v21 = v19 + 1;
      if ( v19 == 3 )
        v21 = 3;
      v210 = v19;
      write((int)&FileHandle, Buf, v212);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        *(_OWORD *)&v201[32] = v197;
        *(_OWORD *)&v201[16] = v196;
        *(_OWORD *)v201 = v195;
        v200 = v194;
        v199 = FileHandle;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v181.m512i_i64[0] = (__int64)&v199;
          v181.m512i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v185 = 0;
          *(_QWORD *)&v185[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v185[16] = 0x2Du;
          *(_QWORD *)&v185[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v185[40] = 35;
          *(_QWORD *)&v185[48] = 2;
          *(_QWORD *)&v185[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v185[64] = 45;
          *(_QWORD *)&v185[72] = 0x15F00000001LL;
          *(_QWORD *)&v185[80] = &unk_14178FCF6;
          *(_QWORD *)&v185[88] = &v181;
          sub_1412C36A0(&v211, v185);
        }
        sub_1406CDA20(&v199);
      }
      v137 = sub_141471910(v23, v22, v24);
      v138 = v26;
      if ( !v203 )
      {
        acquire_with_policy((unsigned int)&v119, 5, 0, 0, 0);
        if ( v119.m512i_i32[0] == -1 )
          goto LABEL_16;
LABEL_109:
        v183 = v121;
        v182 = v120;
        v181 = v119;
        v199.m256i_i64[0] = 0;
        *(_OWORD *)&v199.m256i_u64[1] = 1u;
        *(_QWORD *)&v185[16] = 1610612768;
        *(_QWORD *)v185 = &v199;
        *(_QWORD *)&v185[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v181, v185) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v211,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v202 = v199.m256i_i64[1];
        v206 = v199.m256i_i64[0];
        write((int)&FileHandle, Buf, v212);
        if ( FileHandle.m256i_i32[0] != -1 )
        {
          *(_OWORD *)&v201[32] = v197;
          *(_OWORD *)&v201[16] = v196;
          *(_OWORD *)v201 = v195;
          v200 = v194;
          v199 = FileHandle;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v172.m256i_i64[0] = (__int64)&v199;
            v172.m256i_i64[1] = (__int64)sub_140B036A0;
            *(_QWORD *)v185 = 0;
            *(_QWORD *)&v185[8] = aCodexmateLibCo_27;
            *(_OWORD *)&v185[16] = 0x2Du;
            *(_QWORD *)&v185[32] = aSrcCoreRelayRo_1;
            *(_QWORD *)&v185[40] = 35;
            *(_QWORD *)&v185[48] = 2;
            *(_QWORD *)&v185[56] = aCodexmateLibCo_27;
            *(_QWORD *)&v185[64] = 45;
            *(_QWORD *)&v185[72] = 0x15F00000001LL;
            *(_QWORD *)&v185[80] = &unk_14178FCF6;
            *(_QWORD *)&v185[88] = &v172;
            sub_1412C36A0(&v211, v185);
          }
          sub_1406CDA20(&v199);
        }
        if ( v206 )
          sub_140001660(v202, v206, 1);
        v59 = sub_141471AC0(&v137);
        *(_OWORD *)v199.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v59 + v60 / 0xF4240uLL;
        *(_QWORD *)v185 = &v210;
        *(_QWORD *)&v185[8] = sub_1414A9660;
        *(_QWORD *)&v185[16] = &v199;
        *(_QWORD *)&v185[24] = sub_1414A9600;
        *(_QWORD *)&v185[32] = &v181;
        *(_QWORD *)&v185[40] = sub_140B036A0;
        sub_14149C0F0(&FileHandle, &unk_1417878F4, v185);
        v163.m256i_i8[0] = v212;
        Buf = (void *)FileHandle.m256i_i64[1];
        *(_OWORD *)v172.m256i_i8 = *(_OWORD *)&FileHandle.m256i_u64[1];
        *(_QWORD *)v185 = &v163;
        *(_QWORD *)&v185[8] = sub_1407B2DA0;
        *(_QWORD *)&v185[16] = &v172;
        *(_QWORD *)&v185[24] = sub_14041F680;
        sub_14149C0F0(&v199, &unk_141787489, v185);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopFailed, 11, (__int64)&v199);
        if ( FileHandle.m256i_i64[0] )
          sub_140001660(Buf, FileHandle.m256i_i64[0], 1);
LABEL_118:
        v11[5] = v183;
        v11[4] = v182;
        v54 = *(_OWORD *)v181.m512i_i8;
        v55 = *(_OWORD *)&v181.m512i_u64[2];
        v56 = *(_OWORD *)&v181.m512i_u64[4];
        v57 = *(_OWORD *)&v181.m512i_u64[6];
LABEL_119:
        v11[3] = v57;
        v11[2] = v56;
        v11[1] = v55;
        *v11 = v54;
        return v11;
      }
      LOBYTE(v25) = 1;
      acquire_with_policy((unsigned int)&v119, 3, 0, v25, 0);
      if ( v119.m512i_i32[0] != -1 )
        goto LABEL_109;
LABEL_16:
      v125 = v119.m512i_i64[7];
      v124 = *(_OWORD *)&v119.m512i_u64[5];
      v123 = *(_OWORD *)&v119.m512i_u64[3];
      v122 = *(_OWORD *)&v119.m512i_u64[1];
      v192 = v119.m512i_i8[56];
      v208 = 1;
      v27 = sub_141471AC0(&v137);
      *(_OWORD *)v199.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v27 + v28 / 0xF4240uLL;
      *(_QWORD *)v185 = &v210;
      *(_QWORD *)&v185[8] = sub_1414A9660;
      *(_QWORD *)&v185[16] = &v199;
      *(_QWORD *)&v185[24] = sub_1414A9600;
      *(_QWORD *)&v185[32] = &v192;
      *(_QWORD *)&v185[40] = sub_1414AC660;
      v208 = 1;
      sub_14149C0F0(&v133, &unk_141787591, v185);
      v181.m512i_i8[0] = v212;
      v202 = v134;
      *(_OWORD *)FileHandle.m256i_i8 = v134;
      *(_QWORD *)v185 = &v181;
      *(_QWORD *)&v185[8] = sub_1407B2DA0;
      *(_QWORD *)&v185[16] = &FileHandle;
      *(_QWORD *)&v185[24] = sub_14041F680;
      sub_14149C0F0(&v199, &unk_141787489, v185);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopComplete, 13, (__int64)&v199);
      if ( v133 )
        sub_140001660(v202, v133, 1);
      v208 = 1;
      write((int)&FileHandle, Buf, v212);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        *(_OWORD *)&v201[32] = v197;
        *(_OWORD *)&v201[16] = v196;
        *(_OWORD *)v201 = v195;
        v200 = v194;
        v199 = FileHandle;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v181.m512i_i64[0] = (__int64)&v199;
          v181.m512i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v185 = 0;
          *(_QWORD *)&v185[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v185[16] = 0x2Du;
          *(_QWORD *)&v185[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v185[40] = 35;
          *(_QWORD *)&v185[48] = 2;
          *(_QWORD *)&v185[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v185[64] = 45;
          *(_QWORD *)&v185[72] = 0x15F00000001LL;
          *(_QWORD *)&v185[80] = &unk_14178FCF6;
          *(_QWORD *)&v185[88] = &v181;
          sub_1412C36A0(&v211, v185);
        }
        v208 = 1;
        sub_1406CDA20(&v199);
      }
      v172.m256i_i64[0] = v140;
      if ( *v141 || (v208 = 1, sub_140495B10(v185, v184), *(_QWORD *)v185 == -1) )
      {
        v208 = 1;
        reconcile_router_on((__int128 *)v185, v184, v142);
        FileHandle = *(__m256i *)&v185[8];
        v194 = *(_OWORD *)&v185[40];
        *(_QWORD *)&v195 = *(_QWORD *)&v185[56];
        if ( *(_QWORD *)v185 == -1 )
        {
          *(__m256i *)v181.m512i_i8 = FileHandle;
          *(_OWORD *)&v181.m512i_u64[4] = v194;
          v181.m512i_i64[6] = v195;
          sub_14032C050(&FileHandle, &v181.m512i_u64[3]);
          *(_QWORD *)&v185[48] = v181.m512i_i64[6];
          *(_OWORD *)&v185[32] = *(_OWORD *)&v181.m512i_u64[4];
          *(_OWORD *)&v185[16] = *(_OWORD *)&v181.m512i_u64[2];
          *(_OWORD *)v185 = *(_OWORD *)v181.m512i_i8;
          *(_QWORD *)&v185[72] = FileHandle.m256i_i64[2];
          *(_OWORD *)&v185[56] = *(_OWORD *)FileHandle.m256i_i8;
          v199 = *(__m256i *)v181.m512i_i8;
          v200 = *(_OWORD *)&v181.m512i_u64[4];
          *(_OWORD *)v201 = *(_OWORD *)&v185[48];
          *(_OWORD *)&v201[16] = *(_OWORD *)&v185[64];
          *(_QWORD *)&v147[88] = FileHandle.m256i_i64[2];
          *(_OWORD *)&v147[72] = *(_OWORD *)&v201[8];
          *(_QWORD *)&v147[64] = v181.m512i_i64[6];
          *(_OWORD *)&v147[48] = *(_OWORD *)&v181.m512i_u64[4];
          *(_OWORD *)&v147[32] = *(_OWORD *)&v181.m512i_u64[2];
          *(_OWORD *)&v147[16] = *(_OWORD *)v181.m512i_i8;
          *(_OWORD *)v147 = 0xFFFFFFFFFFFFFFFFuLL;
        }
        else
        {
          *(_OWORD *)&v201[24] = *(_OWORD *)&v185[80];
          *(_OWORD *)&v201[8] = *(_OWORD *)&v185[64];
          *(_QWORD *)v201 = v195;
          v199 = FileHandle;
          v200 = v194;
          *(_QWORD *)v147 = *(_QWORD *)v185;
          *(_QWORD *)&v147[88] = *(_QWORD *)&v185[88];
          *(_OWORD *)&v147[72] = *(_OWORD *)&v201[16];
          *(_OWORD *)&v147[56] = __PAIR128__(*(unsigned __int64 *)&v185[64], v195);
          *(_OWORD *)&v147[40] = v194;
          *(__m256i *)&v147[8] = FileHandle;
        }
      }
      else
      {
        *(_QWORD *)&v147[88] = *(_QWORD *)&v185[88];
        *(_OWORD *)&v147[73] = *(_OWORD *)&v185[73];
        *(_OWORD *)&v147[57] = *(_OWORD *)&v185[57];
        *(_OWORD *)&v147[41] = *(_OWORD *)&v185[41];
        *(_OWORD *)&v147[25] = *(_OWORD *)&v185[25];
        *(_OWORD *)&v147[9] = *(_OWORD *)&v185[9];
        *(_QWORD *)v147 = *(_QWORD *)v185;
        v147[8] = v185[8];
      }
      *(_QWORD *)&v185[48] = v125;
      *(_OWORD *)&v185[32] = v124;
      *(_OWORD *)&v185[16] = v123;
      *(_OWORD *)v185 = v122;
      v205 = 1;
      sub_140387CC0(&v126, v185);
      *(_OWORD *)&v185[80] = *(_OWORD *)&v147[80];
      *(_OWORD *)&v185[64] = *(_OWORD *)&v147[64];
      *(_OWORD *)&v185[48] = *(_OWORD *)&v147[48];
      *(_OWORD *)&v185[32] = *(_OWORD *)&v147[32];
      *(_OWORD *)&v185[16] = *(_OWORD *)&v147[16];
      *(_OWORD *)v185 = *(_OWORD *)v147;
      v190 = v130;
      v189 = v129;
      v188 = v128;
      v187 = v127;
      v186 = v126;
      if ( *(_QWORD *)v147 == -1 )
        break;
      v153 = *(_QWORD *)v185;
      if ( v186.m256i_i64[0] != -1 )
      {
        v160 = *(_OWORD *)&v147[80];
        v159 = *(_OWORD *)&v147[64];
        v158 = *(_OWORD *)&v147[48];
        v157 = *(_OWORD *)&v147[32];
        v156 = *(__m256i *)v147;
        v167 = v130;
        v166 = v129;
        v165 = v128;
        v164 = v127;
        v163 = v126;
        v199.m256i_i64[0] = (__int64)&v156;
        v199.m256i_i64[1] = (__int64)sub_140B036A0;
        v199.m256i_i64[2] = (__int64)&v163;
        v199.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v154, &unk_1417878C9, &v199);
        *(_OWORD *)&v172.m256i_u64[1] = v154;
        v172.m256i_i64[3] = v155;
        v172.m256i_i64[0] = 10;
        FileHandle.m256i_i64[0] = 0;
        *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
        v199.m256i_i64[2] = 1610612768;
        v199.m256i_i64[0] = (__int64)&FileHandle;
        v199.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v172, &v199) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v211,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v202 = FileHandle.m256i_i64[1];
        v206 = FileHandle.m256i_i64[0];
        write((int)&v181, Buf, v212);
        if ( v181.m512i_i32[0] != -1 )
        {
          v197 = v183;
          v196 = v182;
          v195 = *(_OWORD *)&v181.m512i_u64[6];
          v194 = *(_OWORD *)&v181.m512i_u64[4];
          FileHandle = *(__m256i *)v181.m512i_i8;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v168 = &FileHandle;
            *((_QWORD *)&v168 + 1) = sub_140B036A0;
            v199.m256i_i64[0] = 0;
            v199.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v199.m256i_u64[2] = 0x2Du;
            *(_QWORD *)&v200 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v200 + 1) = 35;
            *(_QWORD *)v201 = 2;
            *(_QWORD *)&v201[8] = aCodexmateLibCo_27;
            *(_QWORD *)&v201[16] = 45;
            *(_QWORD *)&v201[24] = 0x15F00000001LL;
            *(_QWORD *)&v201[32] = &unk_14178FCF6;
            *(_QWORD *)&v201[40] = &v168;
            sub_1412C36A0(&v211, &v199);
          }
          sub_1406CDA20(&FileHandle);
        }
        if ( v206 )
          sub_140001660(v202, v206, 1);
        v199.m256i_i64[0] = (__int64)&v210;
        v199.m256i_i64[1] = (__int64)sub_1414A9660;
        v199.m256i_i64[2] = (__int64)&v172;
        v199.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v181, &unk_1417876C6, &v199);
        LOBYTE(v177) = v212;
        Buf = (void *)v181.m512i_i64[1];
        v168 = *(_OWORD *)&v181.m512i_u64[1];
        v199.m256i_i64[0] = (__int64)&v177;
        v199.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v199.m256i_i64[2] = (__int64)&v168;
        v199.m256i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&FileHandle, &unk_141787489, &v199);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
        if ( v181.m512i_i64[0] )
          sub_140001660(Buf, v181.m512i_i64[0], 1);
        v11[5] = v176;
        v11[4] = v175;
        v62 = *(_OWORD *)v172.m256i_i8;
        v63 = *(_OWORD *)&v172.m256i_u64[2];
        v64 = v173;
        v11[3] = v174;
        v11[2] = v64;
        v11[1] = v63;
        *v11 = v62;
        sub_1406CDA20(&v163);
        sub_1406CDA20(&v156);
        return v11;
      }
      v176 = *(_OWORD *)&v147[80];
      v175 = *(_OWORD *)&v147[64];
      v174 = *(_OWORD *)&v147[48];
      v173 = *(_OWORD *)&v147[32];
      v172 = *(__m256i *)v147;
      v31 = v186.m256i_i32[2];
      v32 = v186.m256i_i8[12];
      v33 = sub_141471910(*(_QWORD *)v147, v29, v30);
      v35 = v33 == v152;
      v36 = v33 < v152;
      if ( v35 )
        v36 = v34 < v170;
      if ( v203 )
      {
LABEL_87:
        FileHandle.m256i_i64[0] = 0;
        *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
        v199.m256i_i64[2] = 1610612768;
        v199.m256i_i64[0] = (__int64)&FileHandle;
        v199.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v172, &v199) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v211,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v202 = FileHandle.m256i_i64[1];
        v206 = FileHandle.m256i_i64[0];
        write((int)&v181, Buf, v212);
        if ( v181.m512i_i32[0] != -1 )
        {
          v197 = v183;
          v196 = v182;
          v195 = *(_OWORD *)&v181.m512i_u64[6];
          v194 = *(_OWORD *)&v181.m512i_u64[4];
          FileHandle = *(__m256i *)v181.m512i_i8;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v163.m256i_i64[0] = (__int64)&FileHandle;
            v163.m256i_i64[1] = (__int64)sub_140B036A0;
            v199.m256i_i64[0] = 0;
            v199.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v199.m256i_u64[2] = 0x2Du;
            *(_QWORD *)&v200 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v200 + 1) = 35;
            *(_QWORD *)v201 = 2;
            *(_QWORD *)&v201[8] = aCodexmateLibCo_27;
            *(_QWORD *)&v201[16] = 45;
            *(_QWORD *)&v201[24] = 0x15F00000001LL;
            *(_QWORD *)&v201[32] = &unk_14178FCF6;
            *(_QWORD *)&v201[40] = &v163;
            sub_1412C36A0(&v211, &v199);
          }
          sub_1406CDA20(&FileHandle);
        }
        if ( v206 )
          sub_140001660(v202, v206, 1);
        v199.m256i_i64[0] = (__int64)&v210;
        v199.m256i_i64[1] = (__int64)sub_1414A9660;
        v199.m256i_i64[2] = (__int64)&v172;
        v199.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v181, &unk_1417876C6, &v199);
        v156.m256i_i8[0] = v212;
        Buf = (void *)v181.m512i_i64[1];
        *(_OWORD *)v163.m256i_i8 = *(_OWORD *)&v181.m512i_u64[1];
        v199.m256i_i64[0] = (__int64)&v156;
        v199.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v199.m256i_i64[2] = (__int64)&v163;
        v199.m256i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&FileHandle, &unk_141787489, &v199);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
        if ( v181.m512i_i64[0] )
          sub_140001660(Buf, v181.m512i_i64[0], 1);
        v11[5] = v176;
        v11[4] = v175;
        v54 = *(_OWORD *)v172.m256i_i8;
        v55 = *(_OWORD *)&v172.m256i_u64[2];
        v56 = v173;
        v57 = v174;
        goto LABEL_119;
      }
      if ( v31 )
      {
        if ( !v36 || (unsigned __int8)v210 >= 3u )
          goto LABEL_87;
      }
      else if ( (v36 & (unsigned __int8)v32 & ((unsigned __int8)v210 < 3u)) == 0 )
      {
        goto LABEL_87;
      }
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v199.m256i_i64[2] = 1610612768;
      v199.m256i_i64[0] = (__int64)&FileHandle;
      v199.m256i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v172, &v199) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v211,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v163.m256i_i64[2] = FileHandle.m256i_i64[2];
      *(_OWORD *)v163.m256i_i8 = *(_OWORD *)FileHandle.m256i_i8;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        FileHandle.m256i_i64[0] = (__int64)&v212;
        FileHandle.m256i_i64[1] = (__int64)sub_1407B2DA0;
        FileHandle.m256i_i64[2] = (__int64)&v210;
        FileHandle.m256i_i64[3] = (__int64)sub_1414A9660;
        *(_QWORD *)&v194 = &v163;
        *((_QWORD *)&v194 + 1) = sub_1400015F0;
        v199.m256i_i64[0] = 0;
        v199.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
        *(_OWORD *)&v199.m256i_u64[2] = 0x2Du;
        *(_QWORD *)&v200 = aSrcCoreRelayRo_1;
        *((_QWORD *)&v200 + 1) = 35;
        *(_QWORD *)v201 = 2;
        *(_QWORD *)&v201[8] = aCodexmateLibCo_27;
        *(_QWORD *)&v201[16] = 45;
        *(_QWORD *)&v201[24] = 0xA800000001LL;
        *(_QWORD *)&v201[32] = &unk_14178785E;
        *(_QWORD *)&v201[40] = &FileHandle;
        sub_1412C36A0(&v211, &v199);
      }
      write((int)&v181, Buf, v212);
      if ( v181.m512i_i32[0] != -1 )
      {
        v197 = v183;
        v196 = v182;
        v195 = *(_OWORD *)&v181.m512i_u64[6];
        v194 = *(_OWORD *)&v181.m512i_u64[4];
        FileHandle = *(__m256i *)v181.m512i_i8;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v156.m256i_i64[0] = (__int64)&FileHandle;
          v156.m256i_i64[1] = (__int64)sub_140B036A0;
          v199.m256i_i64[0] = 0;
          v199.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v199.m256i_u64[2] = 0x2Du;
          *(_QWORD *)&v200 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v200 + 1) = 35;
          *(_QWORD *)v201 = 2;
          *(_QWORD *)&v201[8] = aCodexmateLibCo_27;
          *(_QWORD *)&v201[16] = 45;
          *(_QWORD *)&v201[24] = 0x15F00000001LL;
          *(_QWORD *)&v201[32] = &unk_14178FCF6;
          *(_QWORD *)&v201[40] = &v156;
          sub_1412C36A0(&v211, &v199);
        }
        sub_1406CDA20(&FileHandle);
      }
      v199.m256i_i64[0] = (__int64)&v210;
      v199.m256i_i64[1] = (__int64)sub_1414A9660;
      v199.m256i_i64[2] = (__int64)&v163;
      v199.m256i_i64[3] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v131, &unk_1417876C6, &v199);
      v156.m256i_i8[0] = v212;
      v202 = v132;
      *(_OWORD *)v181.m512i_i8 = v132;
      v199.m256i_i64[0] = (__int64)&v156;
      v199.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v199.m256i_i64[2] = (__int64)&v181;
      v199.m256i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&FileHandle, &unk_141787489, &v199);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileRetry, 15, (__int64)&FileHandle);
      if ( v131 )
        sub_140001660(v202, v131, 1);
      if ( v163.m256i_i64[0] )
        sub_140001660(v163.m256i_i64[1], v163.m256i_i64[0], 1);
      sub_1406CDA20(&v172);
      v19 = v21;
      v20 = v206;
    }
    if ( v186.m256i_i64[0] != -1 )
    {
      v153 = *(_QWORD *)v185;
      v176 = v130;
      v175 = v129;
      v174 = v128;
      v173 = v127;
      v172 = v126;
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v199.m256i_i64[2] = 1610612768;
      v199.m256i_i64[0] = (__int64)&FileHandle;
      v199.m256i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v172, &v199) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v211,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v202 = FileHandle.m256i_i64[1];
      v206 = FileHandle.m256i_i64[0];
      write((int)&v181, Buf, v212);
      if ( v181.m512i_i32[0] != -1 )
      {
        v197 = v183;
        v196 = v182;
        v195 = *(_OWORD *)&v181.m512i_u64[6];
        v194 = *(_OWORD *)&v181.m512i_u64[4];
        FileHandle = *(__m256i *)v181.m512i_i8;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v163.m256i_i64[0] = (__int64)&FileHandle;
          v163.m256i_i64[1] = (__int64)sub_140B036A0;
          v199.m256i_i64[0] = 0;
          v199.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v199.m256i_u64[2] = 0x2Du;
          *(_QWORD *)&v200 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v200 + 1) = 35;
          *(_QWORD *)v201 = 2;
          *(_QWORD *)&v201[8] = aCodexmateLibCo_27;
          *(_QWORD *)&v201[16] = 45;
          *(_QWORD *)&v201[24] = 0x15F00000001LL;
          *(_QWORD *)&v201[32] = &unk_14178FCF6;
          *(_QWORD *)&v201[40] = &v163;
          sub_1412C36A0(&v211, &v199);
        }
        sub_1406CDA20(&FileHandle);
      }
      if ( v206 )
        sub_140001660(v202, v206, 1);
      v199.m256i_i64[0] = (__int64)&v210;
      v199.m256i_i64[1] = (__int64)sub_1414A9660;
      v199.m256i_i64[2] = (__int64)&v172;
      v199.m256i_i64[3] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v181, &unk_1417876C6, &v199);
      v156.m256i_i8[0] = v212;
      Buf = (void *)v181.m512i_i64[1];
      *(_OWORD *)v163.m256i_i8 = *(_OWORD *)&v181.m512i_u64[1];
      v199.m256i_i64[0] = (__int64)&v156;
      v199.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v199.m256i_i64[2] = (__int64)&v163;
      v199.m256i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&FileHandle, &unk_141787489, &v199);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aSettleFailed, 13, (__int64)&FileHandle);
      if ( v181.m512i_i64[0] )
        sub_140001660(Buf, v181.m512i_i64[0], 1);
      v11[5] = v176;
      v11[4] = v175;
      v65 = *(_OWORD *)v172.m256i_i8;
      v66 = *(_OWORD *)&v172.m256i_u64[2];
      v67 = v173;
      v11[3] = v174;
      v11[2] = v67;
      v11[1] = v66;
      *v11 = v65;
      sub_1406CE2E0(&v185[8]);
      v68 = *(_QWORD *)&v185[88];
      v69 = *(_QWORD *)&v185[80];
      if ( *(_QWORD *)&v185[88] )
      {
        v70 = (_QWORD *)(*(_QWORD *)&v185[80] + 8LL);
        do
        {
          v71 = *(v70 - 1);
          if ( v71 )
            sub_140001660(*v70, v71, 1);
          v70 += 3;
          --v68;
        }
        while ( v68 );
      }
      v72 = *(_QWORD *)&v185[72];
      if ( !*(_QWORD *)&v185[72] )
        return v11;
      goto LABEL_173;
    }
    *(_QWORD *)&v167 = *(_QWORD *)&v147[88];
    v166 = *(_OWORD *)&v147[72];
    v165 = *(_OWORD *)&v147[56];
    v164 = *(_OWORD *)&v147[40];
    v163 = *(__m256i *)&v147[8];
    v179 = v186.m256i_i32[2];
    v180 = v186.m256i_i8[12];
    v198 = 1;
    sub_140852800((unsigned int)&v149, v144, a8, 0, (v186.m256i_i32[2] == 0) & (v186.m256i_i8[12] ^ 1));
    v37 = v151;
    if ( !v151 )
    {
      if ( (v179 || (v180 & 1) != 0) && *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)v185 = &v212;
        *(_QWORD *)&v185[8] = sub_1407B2DA0;
        *(_QWORD *)&v185[16] = &v210;
        *(_QWORD *)&v185[24] = sub_1414A9660;
        *(_QWORD *)&v185[32] = &v179;
        *(_QWORD *)&v185[40] = sub_1414AB780;
        *(_QWORD *)&v185[48] = &v180;
        *(_QWORD *)&v185[56] = sub_1414AC660;
        v199.m256i_i64[0] = (__int64)aCodexmateLibCo_27;
        v199.m256i_i64[1] = 45;
        v199.m256i_i64[2] = (__int64)aCodexmateLibCo_27;
        v199.m256i_i64[3] = 45;
        *(_QWORD *)&v200 = &off_141787640;
        v209 = 1;
        sub_140985BA0(&unk_1417875CB, v185, 2, &v199);
      }
      v73 = *a10;
      v209 = 1;
      sub_14084BFF0(&v172, a9, &v163, v73);
      if ( v172.m256i_i32[0] != -1 )
      {
        v183 = v176;
        v182 = v175;
        *(_OWORD *)&v181.m512i_u64[6] = v174;
        *(_OWORD *)&v181.m512i_u64[4] = v173;
        *(__m256i *)v181.m512i_i8 = v172;
        *(_QWORD *)v185 = &v212;
        *(_QWORD *)&v185[8] = sub_1407B2DA0;
        *(_QWORD *)&v185[16] = &v181;
        *(_QWORD *)&v185[24] = sub_140B036A0;
        sub_14149C0F0(&v154, &unk_141787685, v185);
        *(_OWORD *)&FileHandle.m256i_u64[1] = v154;
        FileHandle.m256i_i64[3] = v155;
        FileHandle.m256i_i64[0] = 10;
        v199.m256i_i64[0] = 0;
        *(_OWORD *)&v199.m256i_u64[1] = 1u;
        *(_QWORD *)&v185[16] = 1610612768;
        *(_QWORD *)v185 = &v199;
        *(_QWORD *)&v185[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&FileHandle, v185) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v211,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v202 = v199.m256i_i64[1];
        v206 = v199.m256i_i64[0];
        write((int)&v199, Buf, v212);
        if ( v199.m256i_i32[0] != -1 )
        {
          *(_OWORD *)&v185[80] = *(_OWORD *)&v201[32];
          *(_OWORD *)&v185[64] = *(_OWORD *)&v201[16];
          *(_OWORD *)&v185[48] = *(_OWORD *)v201;
          *(_OWORD *)&v185[32] = v200;
          *(__m256i *)v185 = v199;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v168 = v185;
            *((_QWORD *)&v168 + 1) = sub_140B036A0;
            v156.m256i_i64[0] = (__int64)aCodexmateLibCo_27;
            v156.m256i_i64[1] = 45;
            v156.m256i_i64[2] = (__int64)aCodexmateLibCo_27;
            v156.m256i_i64[3] = 45;
            *(_QWORD *)&v157 = &off_14178FD30;
            sub_140985BA0(&unk_14178FCF6, &v168, 2, &v156);
          }
          sub_1406CDA20(v185);
        }
        if ( v206 )
          sub_140001660(v202, v206, 1);
        *(_QWORD *)v185 = &v210;
        *(_QWORD *)&v185[8] = sub_1414A9660;
        *(_QWORD *)&v185[16] = &FileHandle;
        *(_QWORD *)&v185[24] = sub_140B036A0;
        sub_14149C0F0(&v156, &unk_1417876C6, v185);
        LOBYTE(v177) = v212;
        Buf = (void *)v156.m256i_i64[1];
        v168 = *(_OWORD *)&v156.m256i_u64[1];
        *(_QWORD *)v185 = &v177;
        *(_QWORD *)&v185[8] = sub_1407B2DA0;
        *(_QWORD *)&v185[16] = &v168;
        *(_QWORD *)&v185[24] = sub_14041F680;
        sub_14149C0F0(&v199, &unk_141787489, v185);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v199);
        if ( v156.m256i_i64[0] )
          sub_140001660(Buf, v156.m256i_i64[0], 1);
        v11[5] = v197;
        v11[4] = v196;
        v74 = *(_OWORD *)FileHandle.m256i_i8;
        v75 = *(_OWORD *)&FileHandle.m256i_u64[2];
        v76 = v194;
        v11[3] = v195;
        v11[2] = v76;
        v11[1] = v75;
        *v11 = v74;
        v209 = 1;
        sub_1406CDA20(&v181);
        v77 = 1;
        v202 = v150;
        v78 = 1;
        goto LABEL_162;
      }
      v97 = v167;
      if ( (_QWORD)v167 )
      {
        v209 = 1;
        sub_140440300((unsigned int)v185, DWORD2(v166), v167, (unsigned int)&unk_1417876F9, 3);
        v202 = *(_QWORD *)&v185[8];
        v206 = *(_QWORD *)v185;
        sub_1407A0A20(Buf, v212, *(__int128 *)&v185[8]);
        if ( v206 )
          sub_140001660(v202, v206, 1);
        v209 = 1;
        v98 = sub_141471AC0(&v145);
        *(_OWORD *)FileHandle.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v98 + v99 / 0xF4240uLL;
        v181.m512i_i64[0] = v97;
        *(_QWORD *)v185 = &v210;
        *(_QWORD *)&v185[8] = sub_1414A9660;
        *(_QWORD *)&v185[16] = &FileHandle;
        *(_QWORD *)&v185[24] = sub_1414A9600;
        *(_QWORD *)&v185[32] = &v181;
        *(_QWORD *)&v185[40] = sub_1414AC520;
        v209 = 1;
        sub_14149C0F0(&v199, &unk_141787704, v185);
        v209 = 1;
        sub_1406DB090(v212, aDegraded, 8, &v199);
        v100 = *(_OWORD *)v163.m256i_i8;
        v101 = *(_OWORD *)&v163.m256i_u64[2];
        v102 = v164;
        v103 = v165;
        *(_OWORD *)&v185[48] = v165;
        *(_OWORD *)&v185[32] = v164;
        *(__m256i *)v185 = v163;
        v104 = v166;
        *(_OWORD *)&v185[64] = v166;
        *(_QWORD *)&v185[80] = v167;
        *((_QWORD *)v11 + 11) = v167;
        *(__int128 *)((char *)v11 + 72) = v104;
        *(__int128 *)((char *)v11 + 56) = v103;
        *(__int128 *)((char *)v11 + 40) = v102;
        *(__int128 *)((char *)v11 + 24) = v101;
        *(__int128 *)((char *)v11 + 8) = v100;
      }
      else
      {
        v209 = 1;
        sub_140ADF0F0(Buf);
        v209 = 1;
        v114 = sub_141471AC0(&v145);
        *(_OWORD *)FileHandle.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v114 + v115 / 0xF4240uLL;
        *(_QWORD *)v185 = &v210;
        *(_QWORD *)&v185[8] = sub_1414A9660;
        *(_QWORD *)&v185[16] = &FileHandle;
        *(_QWORD *)&v185[24] = sub_1414A9600;
        v209 = 1;
        sub_14149C0F0(&v199, &unk_1417876DA, v185);
        v209 = 1;
        sub_1406DB090(v212, aStable, 6, &v199);
        v116 = *(_OWORD *)v163.m256i_i8;
        v117 = *(_OWORD *)&v163.m256i_u64[2];
        v118 = v164;
        v11[4] = v165;
        v11[3] = v118;
        v11[2] = v117;
        v11[1] = v116;
        *((_QWORD *)v11 + 1) = 2;
      }
      *(_QWORD *)v11 = -1;
      if ( v149 )
        sub_140001660(v150, 32 * v149, 8);
      if ( v97 )
        return v11;
LABEL_167:
      v69 = *((_QWORD *)&v166 + 1);
      v79 = v167;
      if ( (_QWORD)v167 )
      {
        v80 = (_QWORD *)(*((_QWORD *)&v166 + 1) + 8LL);
        do
        {
          v81 = *(v80 - 1);
          if ( v81 )
            sub_140001660(*v80, v81, 1);
          v80 += 3;
          --v79;
        }
        while ( v79 );
      }
      v72 = v166;
      if ( !(_QWORD)v166 )
        return v11;
LABEL_173:
      sub_140001660(v69, 24 * v72, 8);
      return v11;
    }
    v209 = 1;
    v202 = v150;
    sub_140328B20(&v199, v150, v150 + 32 * v151);
    v38 = v199.m256i_i64[2];
    v39 = v199.m256i_i64[1];
    sub_140440300((unsigned int)v185, v199.m256i_i32[2], v199.m256i_i32[4], (unsigned int)&unk_1417876F9, 3);
    v162 = *(_QWORD *)&v185[16];
    v161 = *(_OWORD *)v185;
    if ( v38 )
    {
      v43 = (_QWORD *)(v39 + 8);
      do
      {
        v40 = *(v43 - 1);
        if ( v40 )
          sub_140001660(*v43, v40, 1);
        v43 += 3;
        --v38;
      }
      while ( v38 );
    }
    if ( v199.m256i_i64[0] )
      sub_140001660(v39, 24 * v199.m256i_i64[0], 8);
    v207 = 1;
    v44 = sub_141471910(v41, v40, v42);
    v46 = v202;
    v35 = v44 == v152;
    v47 = v44 < v152;
    if ( v35 )
      v47 = v45 < v170;
    v48 = v203;
    if ( v203 )
      break;
    if ( v179 )
    {
      if ( !v47 || (unsigned __int8)v210 >= 3u )
        goto LABEL_191;
    }
    else if ( (v47 & (unsigned __int8)v180 & ((unsigned __int8)v210 < 3u)) == 0 )
    {
LABEL_191:
      *(_QWORD *)v185 = &v212;
      *(_QWORD *)&v185[8] = sub_1407B2DA0;
      *(_QWORD *)&v185[16] = &v161;
      *(_QWORD *)&v185[24] = sub_1400015F0;
      v207 = 1;
      sub_14149C0F0(&v172, &unk_14178772E, v185);
      *(_OWORD *)&FileHandle.m256i_u64[1] = *(_OWORD *)v172.m256i_i8;
      FileHandle.m256i_i64[3] = v172.m256i_i64[2];
      FileHandle.m256i_i64[0] = 10;
      v199.m256i_i64[0] = 0;
      *(_OWORD *)&v199.m256i_u64[1] = 1u;
      *(_QWORD *)&v185[16] = 1610612768;
      *(_QWORD *)v185 = &v199;
      *(_QWORD *)&v185[8] = &off_141790AA0;
      v93 = sub_140B036A0(&FileHandle, v185);
      v11 = v171;
      if ( v93 )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v211,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v184 = v199.m256i_i64[1];
      v206 = v199.m256i_i64[0];
      write((int)&v199, Buf, v212);
      if ( v199.m256i_i32[0] != -1 )
      {
        *(_OWORD *)&v185[80] = *(_OWORD *)&v201[32];
        *(_OWORD *)&v185[64] = *(_OWORD *)&v201[16];
        *(_OWORD *)&v185[48] = *(_OWORD *)v201;
        *(_OWORD *)&v185[32] = v200;
        *(__m256i *)v185 = v199;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v156.m256i_i64[0] = (__int64)v185;
          v156.m256i_i64[1] = (__int64)sub_140B036A0;
          v181.m512i_i64[0] = (__int64)aCodexmateLibCo_27;
          v181.m512i_i64[1] = 45;
          v181.m512i_i64[2] = (__int64)aCodexmateLibCo_27;
          v181.m512i_i64[3] = 45;
          v181.m512i_i64[4] = (__int64)&off_14178FD30;
          sub_140985BA0(&unk_14178FCF6, &v156, 2, &v181);
        }
        sub_1406CDA20(v185);
      }
      if ( v206 )
        sub_140001660(v184, v206, 1);
      v199.m256i_i64[0] = v37;
      *(_QWORD *)v185 = &v210;
      *(_QWORD *)&v185[8] = sub_1414A9660;
      *(_QWORD *)&v185[16] = &v199;
      *(_QWORD *)&v185[24] = sub_1414AC520;
      sub_14149C0F0(&v181, &unk_14178774F, v185);
      LOBYTE(v154) = v212;
      Buf = (void *)v181.m512i_i64[1];
      *(_OWORD *)v156.m256i_i8 = *(_OWORD *)&v181.m512i_u64[1];
      *(_QWORD *)v185 = &v154;
      *(_QWORD *)&v185[8] = sub_1407B2DA0;
      *(_QWORD *)&v185[16] = &v156;
      *(_QWORD *)&v185[24] = sub_14041F680;
      sub_14149C0F0(&v199, &unk_141787489, v185);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aPostconditionF, 20, (__int64)&v199);
      if ( v181.m512i_i64[0] )
        sub_140001660(Buf, v181.m512i_i64[0], 1);
      v11[5] = v197;
      v11[4] = v196;
      v94 = *(_OWORD *)FileHandle.m256i_i8;
      v95 = *(_OWORD *)&FileHandle.m256i_u64[2];
      v96 = v194;
      v11[3] = v195;
      v11[2] = v96;
      v11[1] = v95;
      *v11 = v94;
      v78 = 1;
      goto LABEL_216;
    }
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v199.m256i_i64[0] = (__int64)&v212;
      v199.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v199.m256i_i64[2] = (__int64)&v210;
      v199.m256i_i64[3] = (__int64)sub_1414A9660;
      *(_QWORD *)&v200 = &v161;
      *((_QWORD *)&v200 + 1) = sub_1400015F0;
      *(_QWORD *)v185 = 0;
      *(_QWORD *)&v185[8] = aCodexmateLibCo_27;
      *(_OWORD *)&v185[16] = 0x2Du;
      *(_QWORD *)&v185[32] = aSrcCoreRelayRo_1;
      *(_QWORD *)&v185[40] = 35;
      *(_QWORD *)&v185[48] = 2;
      *(_QWORD *)&v185[56] = aCodexmateLibCo_27;
      *(_QWORD *)&v185[64] = 45;
      *(_QWORD *)&v185[72] = 0x10B00000001LL;
      *(_QWORD *)&v185[80] = &unk_1417877DC;
      *(_QWORD *)&v185[88] = &v199;
      v207 = 1;
      sub_1412C36A0(&v211, v185);
    }
    v207 = 1;
    write((int)&FileHandle, Buf, v212);
    if ( FileHandle.m256i_i32[0] != -1 )
    {
      *(_OWORD *)&v201[32] = v197;
      *(_OWORD *)&v201[16] = v196;
      *(_OWORD *)v201 = v195;
      v200 = v194;
      v199 = FileHandle;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v181.m512i_i64[0] = (__int64)&v199;
        v181.m512i_i64[1] = (__int64)sub_140B036A0;
        *(_QWORD *)v185 = 0;
        *(_QWORD *)&v185[8] = aCodexmateLibCo_27;
        *(_OWORD *)&v185[16] = 0x2Du;
        *(_QWORD *)&v185[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v185[40] = 35;
        *(_QWORD *)&v185[48] = 2;
        *(_QWORD *)&v185[56] = aCodexmateLibCo_27;
        *(_QWORD *)&v185[64] = 45;
        *(_QWORD *)&v185[72] = 0x15F00000001LL;
        *(_QWORD *)&v185[80] = &unk_14178FCF6;
        *(_QWORD *)&v185[88] = &v181;
        sub_1412C36A0(&v211, v185);
      }
      v207 = 1;
      sub_1406CDA20(&v199);
    }
    if ( (_QWORD)v161 )
      sub_140001660(*((_QWORD *)&v161 + 1), v161, 1);
    v49 = (_QWORD *)(v46 + 8);
    do
    {
      v50 = *(v49 - 1);
      if ( v50 )
        sub_140001660(*v49, v50, 1);
      v49 += 4;
      --v37;
    }
    while ( v37 );
    if ( v149 )
      sub_140001660(v46, 32 * v149, 8);
    sub_1406CE2E0(&v163);
    v51 = *((_QWORD *)&v166 + 1);
    v52 = v167;
    if ( (_QWORD)v167 )
    {
      v53 = (_QWORD *)(*((_QWORD *)&v166 + 1) + 8LL);
      do
      {
        v18 = *(v53 - 1);
        if ( v18 )
          sub_140001660(*v53, v18, 1);
        v53 += 3;
        --v52;
      }
      while ( v52 );
    }
    if ( (_QWORD)v166 )
      sub_140001660(v51, 24 * v166, 8);
    v19 = v21;
    v11 = v171;
    v20 = v206;
  }
  v178 = *(_QWORD *)&v147[88];
  v177 = *(_OWORD *)&v147[72];
  *(_QWORD *)v185 = &v161;
  *(_QWORD *)&v185[8] = sub_1400015F0;
  sub_14149C0F0(&v168, &unk_14178777C, v185);
  v82 = v178;
  if ( v178 == (_QWORD)v177 )
    sub_141689AB0(&v177);
  v83 = *((_QWORD *)&v177 + 1);
  v84 = 3 * v82;
  *(_QWORD *)(*((_QWORD *)&v177 + 1) + 8 * v84 + 16) = v169;
  *(_OWORD *)(v83 + 8 * v84) = v168;
  v178 = v82 + 1;
  sub_14084BFF0(&v172, a9, &v147[8], *a10);
  v78 = v172.m256i_i64[0] != -1;
  if ( v172.m256i_i64[0] == -1 )
  {
    sub_140440300((unsigned int)v185, DWORD2(v177), v178, (unsigned int)&unk_1417876F9, 3);
    v184 = *(_QWORD *)&v185[8];
    v206 = *(_QWORD *)v185;
    write((int)&v199, Buf, v212);
    if ( v199.m256i_i32[0] != -1 )
    {
      *(_OWORD *)&v185[80] = *(_OWORD *)&v201[32];
      *(_OWORD *)&v185[64] = *(_OWORD *)&v201[16];
      *(_OWORD *)&v185[48] = *(_OWORD *)v201;
      *(_OWORD *)&v185[32] = v200;
      *(__m256i *)v185 = v199;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v181.m512i_i64[0] = (__int64)v185;
        v181.m512i_i64[1] = (__int64)sub_140B036A0;
        FileHandle.m256i_i64[0] = (__int64)aCodexmateLibCo_27;
        FileHandle.m256i_i64[1] = 45;
        FileHandle.m256i_i64[2] = (__int64)aCodexmateLibCo_27;
        FileHandle.m256i_i64[3] = 45;
        *(_QWORD *)&v194 = &off_14178FD30;
        sub_140985BA0(&unk_14178FCF6, &v181, 2, &FileHandle);
      }
      sub_1406CDA20(v185);
    }
    if ( v206 )
      sub_140001660(v184, v206, 1);
    v105 = sub_141471AC0(&v145);
    *(_OWORD *)v199.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v105 + v106 / 0xF4240uLL;
    v181.m512i_i64[0] = v178;
    *(_QWORD *)v185 = &v210;
    *(_QWORD *)&v185[8] = sub_1414A9660;
    *(_QWORD *)&v185[16] = &v199;
    *(_QWORD *)&v185[24] = sub_1414A9600;
    *(_QWORD *)&v185[32] = &v181;
    *(_QWORD *)&v185[40] = sub_1414AC520;
    sub_14149C0F0(&FileHandle, &unk_141787704, v185);
    v172.m256i_i8[0] = v212;
    Buf = (void *)FileHandle.m256i_i64[1];
    *(_OWORD *)v181.m512i_i8 = *(_OWORD *)&FileHandle.m256i_u64[1];
    *(_QWORD *)v185 = &v172;
    *(_QWORD *)&v185[8] = sub_1407B2DA0;
    *(_QWORD *)&v185[16] = &v181;
    *(_QWORD *)&v185[24] = sub_14041F680;
    sub_14149C0F0(&v199, &unk_141787489, v185);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aDegraded, 8, (__int64)&v199);
    v11 = v171;
    if ( FileHandle.m256i_i64[0] )
      sub_140001660(Buf, FileHandle.m256i_i64[0], 1);
    v107 = *(_OWORD *)v163.m256i_i8;
    v108 = *(_OWORD *)&v163.m256i_u64[2];
    v109 = v164;
    v110 = v165;
    *(_OWORD *)&v185[48] = v165;
    *(_OWORD *)&v185[32] = v164;
    *(__m256i *)v185 = v163;
    v111 = v177;
    *(_OWORD *)&v185[64] = v177;
    *(_QWORD *)&v185[80] = v178;
    *((_QWORD *)v11 + 11) = v178;
    *(__int128 *)((char *)v11 + 72) = v111;
    *(__int128 *)((char *)v11 + 56) = v110;
    *(__int128 *)((char *)v11 + 40) = v109;
    *(__int128 *)((char *)v11 + 24) = v108;
    *(__int128 *)((char *)v11 + 8) = v107;
    *(_QWORD *)v11 = -1;
  }
  else
  {
    v183 = v176;
    v182 = v175;
    *(_OWORD *)&v181.m512i_u64[6] = v174;
    *(_OWORD *)&v181.m512i_u64[4] = v173;
    *(__m256i *)v181.m512i_i8 = v172;
    *(_QWORD *)v185 = &v212;
    *(_QWORD *)&v185[8] = sub_1407B2DA0;
    *(_QWORD *)&v185[16] = &v181;
    *(_QWORD *)&v185[24] = sub_140B036A0;
    sub_14149C0F0(&v154, &unk_1417877B9, v185);
    *(_OWORD *)&FileHandle.m256i_u64[1] = v154;
    FileHandle.m256i_i64[3] = v155;
    FileHandle.m256i_i64[0] = 10;
    v199.m256i_i64[0] = 0;
    *(_OWORD *)&v199.m256i_u64[1] = 1u;
    *(_QWORD *)&v185[16] = 1610612768;
    *(_QWORD *)v185 = &v199;
    *(_QWORD *)&v185[8] = &off_141790AA0;
    v85 = sub_140B036A0(&FileHandle, v185);
    v86 = v171;
    if ( v85 )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v211,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v184 = v199.m256i_i64[1];
    v206 = v199.m256i_i64[0];
    write((int)&v199, Buf, v212);
    if ( v199.m256i_i32[0] != -1 )
    {
      *(_OWORD *)&v185[80] = *(_OWORD *)&v201[32];
      *(_OWORD *)&v185[64] = *(_OWORD *)&v201[16];
      *(_OWORD *)&v185[48] = *(_OWORD *)v201;
      *(_OWORD *)&v185[32] = v200;
      *(__m256i *)v185 = v199;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)&v148 = v185;
        *((_QWORD *)&v148 + 1) = sub_140B036A0;
        v156.m256i_i64[0] = (__int64)aCodexmateLibCo_27;
        v156.m256i_i64[1] = 45;
        v156.m256i_i64[2] = (__int64)aCodexmateLibCo_27;
        v156.m256i_i64[3] = 45;
        *(_QWORD *)&v157 = &off_14178FD30;
        sub_140985BA0(&unk_14178FCF6, &v148, 2, &v156);
      }
      sub_1406CDA20(v185);
    }
    if ( v206 )
      sub_140001660(v184, v206, 1);
    *(_QWORD *)v185 = &v210;
    *(_QWORD *)&v185[8] = sub_1414A9660;
    *(_QWORD *)&v185[16] = &FileHandle;
    *(_QWORD *)&v185[24] = sub_140B036A0;
    sub_14149C0F0(&v156, &unk_1417876C6, v185);
    v191 = v212;
    Buf = (void *)v156.m256i_i64[1];
    v148 = *(_OWORD *)&v156.m256i_u64[1];
    *(_QWORD *)v185 = &v191;
    *(_QWORD *)&v185[8] = sub_1407B2DA0;
    *(_QWORD *)&v185[16] = &v148;
    *(_QWORD *)&v185[24] = sub_14041F680;
    sub_14149C0F0(&v199, &unk_141787489, v185);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v199);
    if ( v156.m256i_i64[0] )
      sub_140001660(Buf, v156.m256i_i64[0], 1);
    v86[5] = v197;
    v86[4] = v196;
    v87 = *(_OWORD *)FileHandle.m256i_i8;
    v88 = *(_OWORD *)&FileHandle.m256i_u64[2];
    v89 = v194;
    v86[3] = v195;
    v86[2] = v89;
    v86[1] = v88;
    *v86 = v87;
    sub_1406CDA20(&v181);
    v90 = v178;
    if ( v178 )
    {
      v91 = (_QWORD *)(*((_QWORD *)&v177 + 1) + 8LL);
      do
      {
        v92 = *(v91 - 1);
        if ( v92 )
          sub_140001660(*v91, v92, 1);
        v91 += 3;
        --v90;
      }
      while ( v90 );
    }
    v11 = v171;
    if ( (_QWORD)v177 )
      sub_140001660(*((_QWORD *)&v177 + 1), 24 * v177, 8);
  }
LABEL_216:
  if ( (_QWORD)v161 )
    sub_140001660(*((_QWORD *)&v161 + 1), v161, 1);
  v77 = v48 ^ 1;
  v112 = (_QWORD *)(v202 + 8);
  do
  {
    v113 = *(v112 - 1);
    if ( v113 )
      sub_140001660(*v112, v113, 1);
    v112 += 4;
    --v37;
  }
  while ( v37 );
LABEL_162:
  if ( v149 )
    sub_140001660(v202, 32 * v149, 8);
  if ( v78 )
    sub_1406CE2E0(&v163);
  if ( v77 )
    goto LABEL_167;
  return v11;
}
