// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_1406ECE30(
        __int128 *a1,
        void *a2,
        __int64 a3,
        char a4,
        __int128 a5,
        __int64 *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int8 v10; // bl
  __int128 *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edx
  __m256i *p_FileHandle; // rbx
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rcx
  char v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  int v27; // edx
  __m256i *v28; // r13
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int32 v33; // edi
  __int8 v34; // si
  unsigned __int64 v35; // rax
  unsigned int v36; // edx
  bool v37; // zf
  bool v38; // al
  __int64 v39; // r12
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rbx
  unsigned __int64 v46; // rax
  unsigned int v47; // edx
  bool v48; // al
  char v49; // di
  __int64 v50; // rdi
  _QWORD *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdi
  _QWORD *v55; // rbx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int128 v59; // xmm3
  _OWORD *v60; // rax
  __int64 v61; // rax
  unsigned int v62; // edx
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm2
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int64 v70; // rdi
  __int64 v71; // rsi
  _QWORD *v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r9
  char v76; // al
  __int128 *v77; // rdi
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  char v81; // di
  bool v82; // r15
  __int64 v83; // rdi
  _QWORD *v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int128 *v89; // rax
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm2
  __int64 v93; // rsi
  _QWORD *v94; // rbx
  __int64 v95; // rdx
  __int128 *v96; // rax
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm2
  __int64 v100; // rsi
  __int64 v101; // rax
  unsigned int v102; // edx
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  __int128 v105; // xmm2
  __int128 v106; // xmm3
  __int128 v107; // xmm4
  __int64 v108; // rax
  unsigned int v109; // edx
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  __int128 v112; // xmm2
  __int128 v113; // xmm3
  __int128 v114; // xmm4
  __int128 *v115; // rcx
  _QWORD *v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // rax
  unsigned int v119; // edx
  __int128 v120; // xmm0
  __int128 v121; // xmm1
  __int128 v122; // xmm2
  __m512i v123; // [rsp+40h] [rbp-40h] BYREF
  __int128 v124; // [rsp+80h] [rbp+0h]
  __int128 v125; // [rsp+90h] [rbp+10h]
  __int128 v126; // [rsp+A0h] [rbp+20h]
  __int128 v127; // [rsp+B0h] [rbp+30h]
  __int128 v128; // [rsp+C0h] [rbp+40h]
  __int64 v129; // [rsp+D0h] [rbp+50h]
  __m256i v130; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v131; // [rsp+100h] [rbp+80h]
  __int128 v132; // [rsp+110h] [rbp+90h]
  __int128 v133; // [rsp+120h] [rbp+A0h]
  __int128 v134; // [rsp+130h] [rbp+B0h]
  __int64 v135; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v136; // [rsp+148h] [rbp+C8h]
  __int64 v137; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v138; // [rsp+160h] [rbp+E0h]
  __int64 v139; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v140; // [rsp+178h] [rbp+F8h]
  __int64 v141; // [rsp+188h] [rbp+108h] BYREF
  int v142; // [rsp+190h] [rbp+110h]
  __int128 v143; // [rsp+198h] [rbp+118h] BYREF
  __int64 v144; // [rsp+1A8h] [rbp+128h]
  __int64 v145; // [rsp+1B0h] [rbp+130h]
  __int64 v146; // [rsp+1B8h] [rbp+138h]
  _BYTE v147[96]; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v148; // [rsp+220h] [rbp+1A0h] BYREF
  int v149; // [rsp+228h] [rbp+1A8h]
  _BYTE *v150; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 (__fastcall *v151)(_QWORD, _QWORD); // [rsp+238h] [rbp+1B8h]
  __int64 v152; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v153; // [rsp+248h] [rbp+1C8h]
  __int64 v154; // [rsp+250h] [rbp+1D0h]
  unsigned __int64 v155; // [rsp+258h] [rbp+1D8h]
  __int64 v156; // [rsp+260h] [rbp+1E0h]
  __int128 v157; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v158; // [rsp+278h] [rbp+1F8h]
  __int128 v159; // [rsp+280h] [rbp+200h] BYREF
  __int128 v160; // [rsp+290h] [rbp+210h]
  __int128 v161; // [rsp+2A0h] [rbp+220h]
  __int128 v162; // [rsp+2B0h] [rbp+230h]
  __int128 v163; // [rsp+2C0h] [rbp+240h]
  __int128 v164; // [rsp+2D0h] [rbp+250h]
  __int128 v165; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v166; // [rsp+2F0h] [rbp+270h]
  __m256i v167; // [rsp+300h] [rbp+280h] BYREF
  __int128 v168; // [rsp+320h] [rbp+2A0h]
  __int128 v169; // [rsp+330h] [rbp+2B0h]
  __int128 v170; // [rsp+340h] [rbp+2C0h]
  __int128 v171; // [rsp+350h] [rbp+2D0h]
  unsigned __int128 v172; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v173; // [rsp+370h] [rbp+2F0h]
  unsigned int v174; // [rsp+37Ch] [rbp+2FCh]
  __m256i v175; // [rsp+380h] [rbp+300h] BYREF
  __int128 v176; // [rsp+3A0h] [rbp+320h]
  __int128 v177; // [rsp+3B0h] [rbp+330h]
  __int128 v178; // [rsp+3C0h] [rbp+340h]
  __int128 v179; // [rsp+3D0h] [rbp+350h]
  __int128 v180; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v181; // [rsp+3F0h] [rbp+370h]
  __int32 v182; // [rsp+3F8h] [rbp+378h] BYREF
  __int8 v183; // [rsp+3FCh] [rbp+37Ch] BYREF
  __int128 *v184; // [rsp+400h] [rbp+380h]
  __int64 v185; // [rsp+408h] [rbp+388h]
  __m512i v186; // [rsp+410h] [rbp+390h] BYREF
  __int128 v187; // [rsp+450h] [rbp+3D0h]
  __int128 v188; // [rsp+460h] [rbp+3E0h]
  _BYTE v189[80]; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v190; // [rsp+4C0h] [rbp+440h]
  __m256i v191; // [rsp+4D0h] [rbp+450h]
  __int128 v192; // [rsp+4F0h] [rbp+470h]
  __int128 v193; // [rsp+500h] [rbp+480h]
  __int128 v194; // [rsp+510h] [rbp+490h]
  __int128 v195; // [rsp+520h] [rbp+4A0h]
  __m256i FileHandle; // [rsp+530h] [rbp+4B0h] BYREF
  __int128 v197; // [rsp+550h] [rbp+4D0h]
  __int128 v198; // [rsp+560h] [rbp+4E0h]
  __int128 v199; // [rsp+570h] [rbp+4F0h]
  __int128 v200; // [rsp+580h] [rbp+500h]
  unsigned __int8 v201; // [rsp+59Dh] [rbp+51Dh] BYREF
  _BYTE v202[2]; // [rsp+59Eh] [rbp+51Eh] BYREF
  __m256i v203; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v204; // [rsp+5C0h] [rbp+540h]
  _BYTE v205[48]; // [rsp+5D0h] [rbp+550h]
  __int64 v206; // [rsp+600h] [rbp+580h]
  char v207; // [rsp+60Fh] [rbp+58Fh] BYREF
  void *Buf; // [rsp+610h] [rbp+590h]
  char v209; // [rsp+61Fh] [rbp+59Fh]
  __int64 v210; // [rsp+620h] [rbp+5A0h]
  char v211; // [rsp+62Ah] [rbp+5AAh]
  char v212; // [rsp+62Bh] [rbp+5ABh]
  char v213; // [rsp+62Ch] [rbp+5ACh]
  char v214; // [rsp+62Dh] [rbp+5ADh] BYREF
  char v215; // [rsp+62Eh] [rbp+5AEh] BYREF
  unsigned __int8 v216; // [rsp+62Fh] [rbp+5AFh] BYREF
  __int64 v217; // [rsp+630h] [rbp+5B0h]

  v217 = -2;
  v10 = a3;
  Buf = a2;
  v11 = a1;
  v216 = a3;
  v207 = a4;
  v143 = a5;
  v148 = sub_141471910(a1, a2, a3);
  v149 = v12;
  v15 = sub_141471910(v13, v12, v14);
  v155 = sub_141491390(v15, v16, 12, 0, (__int64)&off_1417874D0);
  v174 = v17;
  *(_QWORD *)v189 = &v207;
  *(_QWORD *)&v189[8] = sub_1407B87B0;
  *(_QWORD *)&v189[16] = &v143;
  *(_QWORD *)&v189[24] = sub_14041F680;
  sub_14149C0F0(&v139, &unk_1417874E8, v189);
  v186.m512i_i8[0] = v10;
  v210 = v140;
  *(_OWORD *)FileHandle.m256i_i8 = v140;
  *(_QWORD *)v189 = &v186;
  *(_QWORD *)&v189[8] = sub_1407B2DA0;
  p_FileHandle = &FileHandle;
  *(_QWORD *)&v189[16] = &FileHandle;
  *(_QWORD *)&v189[24] = sub_14041F680;
  sub_14149C0F0(&v203, &unk_141787489, v189);
  sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStart_1, 5, (__int64)&v203);
  LODWORD(v19) = v139;
  if ( v139 )
    sub_140001660(v210, v139, 1);
  v185 = *a6;
  v144 = a6[1];
  v145 = a6[2];
  v146 = *(_QWORD *)(a7 + 24);
  v20 = 1;
  v21 = 0;
  v184 = v11;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (v21 & 1) != 0 || (unsigned __int8)v20 > 3u )
      {
        nullsub_1(v21);
        v60 = (_OWORD *)sub_140001650(109, 1);
        if ( !v60 )
          sub_1416C2D4B(1, 109);
        *(_OWORD *)((char *)v60 + 93) = *(__int128 *)((char *)&xmmword_141787551 + 13);
        v60[5] = xmmword_141787551;
        v60[4] = xmmword_141787541;
        v60[3] = xmmword_141787531;
        v60[2] = xmmword_141787521;
        qmemcpy(v60, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
        v186.m512i_i64[1] = 109;
        v186.m512i_i64[2] = (__int64)v60;
        v186.m512i_i64[3] = 109;
        v186.m512i_i64[0] = 10;
        v203.m256i_i64[0] = 0;
        *(_OWORD *)&v203.m256i_u64[1] = 1u;
        *(_QWORD *)&v189[16] = 1610612768;
        *(_QWORD *)v189 = &v203;
        *(_QWORD *)&v189[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v186, v189) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = v203.m256i_i64[1];
        v210 = v203.m256i_i64[0];
        write((int)&FileHandle, Buf, v216);
        if ( FileHandle.m256i_i32[0] != -1 )
        {
          *(_OWORD *)&v205[32] = v200;
          *(_OWORD *)&v205[16] = v199;
          *(_OWORD *)v205 = v198;
          v204 = v197;
          v203 = FileHandle;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v175.m256i_i64[0] = (__int64)&v203;
            v175.m256i_i64[1] = (__int64)sub_140B036A0;
            *(_QWORD *)v189 = 0;
            *(_QWORD *)&v189[8] = aCodexmateLibCo_27;
            *(_OWORD *)&v189[16] = 0x2Du;
            *(_QWORD *)&v189[32] = aSrcCoreRelayRo_1;
            *(_QWORD *)&v189[40] = 35;
            *(_QWORD *)&v189[48] = 2;
            *(_QWORD *)&v189[56] = aCodexmateLibCo_27;
            *(_QWORD *)&v189[64] = 45;
            *(_QWORD *)&v189[72] = 0x15F00000001LL;
            *(_QWORD *)&v190 = &unk_14178FCF6;
            *((_QWORD *)&v190 + 1) = &v175;
            sub_1412C36A0(&v215, v189);
          }
          sub_1406CDA20(&v203);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v203.m256i_i64[0] = 0;
        *(_OWORD *)&v203.m256i_u64[1] = 1u;
        *(_QWORD *)&v189[16] = 1610612768;
        *(_QWORD *)v189 = &v203;
        *(_QWORD *)&v189[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v186, v189) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        Buf = (void *)v203.m256i_i64[0];
        v175.m256i_i8[0] = v216;
        v210 = v203.m256i_i64[1];
        *(_OWORD *)FileHandle.m256i_i8 = *(_OWORD *)&v203.m256i_u64[1];
        *(_QWORD *)v189 = &v175;
        *(_QWORD *)&v189[8] = sub_1407B2DA0;
        *(_QWORD *)&v189[16] = &FileHandle;
        *(_QWORD *)&v189[24] = sub_14041F680;
        sub_14149C0F0(&v203, &unk_141787489, v189);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aRetryExhausted, 15, (__int64)&v203);
        if ( Buf )
          sub_140001660(v210, Buf, 1);
        goto LABEL_115;
      }
      LOBYTE(v19) = v20 == 3;
      LODWORD(v210) = v19;
      v22 = v20 + 1;
      if ( v20 == 3 )
        v22 = 3;
      v214 = v20;
      write((int)p_FileHandle, Buf, v216);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        *(_OWORD *)&v205[32] = v200;
        *(_OWORD *)&v205[16] = v199;
        *(_OWORD *)v205 = v198;
        v204 = v197;
        v203 = FileHandle;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v186.m512i_i64[0] = (__int64)&v203;
          v186.m512i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v189 = 0;
          *(_QWORD *)&v189[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v189[16] = 0x2Du;
          *(_QWORD *)&v189[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v189[40] = 35;
          *(_QWORD *)&v189[48] = 2;
          *(_QWORD *)&v189[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v189[64] = 45;
          *(_QWORD *)&v189[72] = 0x15F00000001LL;
          *(_QWORD *)&v190 = &unk_14178FCF6;
          *((_QWORD *)&v190 + 1) = &v186;
          sub_1412C36A0(&v215, v189);
        }
        sub_1406CDA20(&v203);
      }
      v141 = sub_141471910(v24, v23, v25);
      v142 = v27;
      if ( !v207 )
      {
        acquire_with_policy((unsigned int)&v123, 5, 0, 0, 0);
        if ( v123.m512i_i32[0] == -1 )
          goto LABEL_16;
LABEL_106:
        v188 = v125;
        v187 = v124;
        v186 = v123;
        v203.m256i_i64[0] = 0;
        *(_OWORD *)&v203.m256i_u64[1] = 1u;
        *(_QWORD *)&v189[16] = 1610612768;
        *(_QWORD *)v189 = &v203;
        *(_QWORD *)&v189[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v186, v189) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = v203.m256i_i64[1];
        v210 = v203.m256i_i64[0];
        write((int)&FileHandle, Buf, v216);
        if ( FileHandle.m256i_i32[0] != -1 )
        {
          *(_OWORD *)&v205[32] = v200;
          *(_OWORD *)&v205[16] = v199;
          *(_OWORD *)v205 = v198;
          v204 = v197;
          v203 = FileHandle;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v175.m256i_i64[0] = (__int64)&v203;
            v175.m256i_i64[1] = (__int64)sub_140B036A0;
            *(_QWORD *)v189 = 0;
            *(_QWORD *)&v189[8] = aCodexmateLibCo_27;
            *(_OWORD *)&v189[16] = 0x2Du;
            *(_QWORD *)&v189[32] = aSrcCoreRelayRo_1;
            *(_QWORD *)&v189[40] = 35;
            *(_QWORD *)&v189[48] = 2;
            *(_QWORD *)&v189[56] = aCodexmateLibCo_27;
            *(_QWORD *)&v189[64] = 45;
            *(_QWORD *)&v189[72] = 0x15F00000001LL;
            *(_QWORD *)&v190 = &unk_14178FCF6;
            *((_QWORD *)&v190 + 1) = &v175;
            sub_1412C36A0(&v215, v189);
          }
          sub_1406CDA20(&v203);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v61 = sub_141471AC0(&v141);
        *(_OWORD *)v203.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v61 + v62 / 0xF4240uLL;
        *(_QWORD *)v189 = &v214;
        *(_QWORD *)&v189[8] = sub_1414A9660;
        *(_QWORD *)&v189[16] = &v203;
        *(_QWORD *)&v189[24] = sub_1414A9600;
        *(_QWORD *)&v189[32] = &v186;
        *(_QWORD *)&v189[40] = sub_140B036A0;
        sub_14149C0F0(&FileHandle, &unk_1417878F4, v189);
        v167.m256i_i8[0] = v216;
        Buf = (void *)FileHandle.m256i_i64[1];
        *(_OWORD *)v175.m256i_i8 = *(_OWORD *)&FileHandle.m256i_u64[1];
        *(_QWORD *)v189 = &v167;
        *(_QWORD *)&v189[8] = sub_1407B2DA0;
        *(_QWORD *)&v189[16] = &v175;
        *(_QWORD *)&v189[24] = sub_14041F680;
        sub_14149C0F0(&v203, &unk_141787489, v189);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopFailed, 11, (__int64)&v203);
        if ( FileHandle.m256i_i64[0] )
          sub_140001660(Buf, FileHandle.m256i_i64[0], 1);
LABEL_115:
        v11[5] = v188;
        v11[4] = v187;
        v56 = *(_OWORD *)v186.m512i_i8;
        v57 = *(_OWORD *)&v186.m512i_u64[2];
        v58 = *(_OWORD *)&v186.m512i_u64[4];
        v59 = *(_OWORD *)&v186.m512i_u64[6];
LABEL_116:
        v11[3] = v59;
        v11[2] = v58;
        v11[1] = v57;
        *v11 = v56;
        return v11;
      }
      LOBYTE(v26) = 1;
      acquire_with_policy((unsigned int)&v123, 3, 0, v26, 0);
      if ( v123.m512i_i32[0] != -1 )
        goto LABEL_106;
LABEL_16:
      v28 = p_FileHandle;
      v129 = v123.m512i_i64[7];
      v128 = *(_OWORD *)&v123.m512i_u64[5];
      v127 = *(_OWORD *)&v123.m512i_u64[3];
      v126 = *(_OWORD *)&v123.m512i_u64[1];
      v202[0] = v123.m512i_i8[56];
      v212 = 1;
      v29 = sub_141471AC0(&v141);
      *(_OWORD *)v203.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v29 + v30 / 0xF4240uLL;
      *(_QWORD *)v189 = &v214;
      *(_QWORD *)&v189[8] = sub_1414A9660;
      *(_QWORD *)&v189[16] = &v203;
      *(_QWORD *)&v189[24] = sub_1414A9600;
      *(_QWORD *)&v189[32] = v202;
      *(_QWORD *)&v189[40] = sub_1414AC660;
      v212 = 1;
      sub_14149C0F0(&v137, &unk_141787591, v189);
      v186.m512i_i8[0] = v216;
      v206 = v138;
      *(_OWORD *)FileHandle.m256i_i8 = v138;
      *(_QWORD *)v189 = &v186;
      *(_QWORD *)&v189[8] = sub_1407B2DA0;
      *(_QWORD *)&v189[16] = p_FileHandle;
      *(_QWORD *)&v189[24] = sub_14041F680;
      sub_14149C0F0(&v203, &unk_141787489, v189);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopComplete, 13, (__int64)&v203);
      if ( v137 )
        sub_140001660(v206, v137, 1);
      v212 = 1;
      write((int)p_FileHandle, Buf, v216);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        *(_OWORD *)&v205[32] = v200;
        *(_OWORD *)&v205[16] = v199;
        *(_OWORD *)v205 = v198;
        v204 = v197;
        v203 = FileHandle;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v186.m512i_i64[0] = (__int64)&v203;
          v186.m512i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v189 = 0;
          *(_QWORD *)&v189[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v189[16] = 0x2Du;
          *(_QWORD *)&v189[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v189[40] = 35;
          *(_QWORD *)&v189[48] = 2;
          *(_QWORD *)&v189[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v189[64] = 45;
          *(_QWORD *)&v189[72] = 0x15F00000001LL;
          *(_QWORD *)&v190 = &unk_14178FCF6;
          *((_QWORD *)&v190 + 1) = &v186;
          sub_1412C36A0(&v215, v189);
        }
        v212 = 1;
        sub_1406CDA20(&v203);
      }
      v212 = 1;
      reconcile_router_on((__int128 *)v189, v144, v185);
      FileHandle = *(__m256i *)&v189[8];
      v197 = *(_OWORD *)&v189[40];
      *(_QWORD *)&v198 = *(_QWORD *)&v189[56];
      if ( *(_QWORD *)v189 == -1 )
      {
        *(__m256i *)v186.m512i_i8 = FileHandle;
        *(_OWORD *)&v186.m512i_u64[4] = v197;
        v186.m512i_i64[6] = v198;
        sub_14032C050(p_FileHandle, &v186.m512i_u64[3]);
        *(_QWORD *)&v189[48] = v186.m512i_i64[6];
        *(_OWORD *)&v189[32] = *(_OWORD *)&v186.m512i_u64[4];
        *(_OWORD *)&v189[16] = *(_OWORD *)&v186.m512i_u64[2];
        *(_OWORD *)v189 = *(_OWORD *)v186.m512i_i8;
        *(_QWORD *)&v189[72] = FileHandle.m256i_i64[2];
        *(_OWORD *)&v189[56] = *(_OWORD *)FileHandle.m256i_i8;
        v203 = *(__m256i *)v186.m512i_i8;
        v204 = *(_OWORD *)&v186.m512i_u64[4];
        *(_OWORD *)v205 = *(_OWORD *)&v189[48];
        *(_OWORD *)&v205[16] = *(_OWORD *)&v189[64];
        *(_QWORD *)&v147[88] = FileHandle.m256i_i64[2];
        *(_OWORD *)&v147[72] = *(_OWORD *)&v205[8];
        *(_QWORD *)&v147[64] = v186.m512i_i64[6];
        *(_OWORD *)&v147[48] = *(_OWORD *)&v186.m512i_u64[4];
        *(_OWORD *)&v147[32] = *(_OWORD *)&v186.m512i_u64[2];
        *(_OWORD *)&v147[16] = *(_OWORD *)v186.m512i_i8;
        *(_OWORD *)v147 = 0xFFFFFFFFFFFFFFFFuLL;
      }
      else
      {
        *(_OWORD *)&v205[24] = v190;
        *(_OWORD *)&v205[8] = *(_OWORD *)&v189[64];
        *(_QWORD *)v205 = v198;
        v203 = FileHandle;
        v204 = v197;
        *(_QWORD *)v147 = *(_QWORD *)v189;
        *(_QWORD *)&v147[88] = *((_QWORD *)&v190 + 1);
        *(_OWORD *)&v147[72] = *(_OWORD *)&v205[16];
        *(_OWORD *)&v147[56] = __PAIR128__(*(unsigned __int64 *)&v189[64], v198);
        *(_OWORD *)&v147[40] = v197;
        *(__m256i *)&v147[8] = FileHandle;
      }
      *(_QWORD *)&v189[48] = v129;
      *(_OWORD *)&v189[32] = v128;
      *(_OWORD *)&v189[16] = v127;
      *(_OWORD *)v189 = v126;
      v209 = 1;
      sub_140387CC0(&v130, v189);
      v190 = *(_OWORD *)&v147[80];
      *(_OWORD *)&v189[64] = *(_OWORD *)&v147[64];
      *(_OWORD *)&v189[48] = *(_OWORD *)&v147[48];
      *(_OWORD *)&v189[32] = *(_OWORD *)&v147[32];
      *(_OWORD *)&v189[16] = *(_OWORD *)&v147[16];
      *(_OWORD *)v189 = *(_OWORD *)v147;
      v195 = v134;
      v194 = v133;
      v193 = v132;
      v192 = v131;
      v191 = v130;
      if ( *(_QWORD *)v147 == -1 )
        break;
      v156 = *(_QWORD *)v189;
      if ( v191.m256i_i64[0] != -1 )
      {
        v164 = *(_OWORD *)&v147[80];
        v163 = *(_OWORD *)&v147[64];
        v162 = *(_OWORD *)&v147[48];
        v161 = *(_OWORD *)&v147[32];
        v160 = *(_OWORD *)&v147[16];
        v159 = *(_OWORD *)v147;
        v171 = v134;
        v170 = v133;
        v169 = v132;
        v168 = v131;
        v167 = v130;
        v203.m256i_i64[0] = (__int64)&v159;
        v203.m256i_i64[1] = (__int64)sub_140B036A0;
        v203.m256i_i64[2] = (__int64)&v167;
        v203.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v157, &unk_1417878C9, &v203);
        *(_OWORD *)&v175.m256i_u64[1] = v157;
        v175.m256i_i64[3] = v158;
        v175.m256i_i64[0] = 10;
        FileHandle.m256i_i64[0] = 0;
        *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
        v203.m256i_i64[2] = 1610612768;
        v203.m256i_i64[0] = (__int64)p_FileHandle;
        v203.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v175, &v203) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = FileHandle.m256i_i64[1];
        v210 = FileHandle.m256i_i64[0];
        write((int)&v186, Buf, v216);
        if ( v186.m512i_i32[0] != -1 )
        {
          v200 = v188;
          v199 = v187;
          v198 = *(_OWORD *)&v186.m512i_u64[6];
          v197 = *(_OWORD *)&v186.m512i_u64[4];
          FileHandle = *(__m256i *)v186.m512i_i8;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v172 = p_FileHandle;
            *((_QWORD *)&v172 + 1) = sub_140B036A0;
            v203.m256i_i64[0] = 0;
            v203.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v203.m256i_u64[2] = 0x2Du;
            *(_QWORD *)&v204 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v204 + 1) = 35;
            *(_QWORD *)v205 = 2;
            *(_QWORD *)&v205[8] = aCodexmateLibCo_27;
            *(_QWORD *)&v205[16] = 45;
            *(_QWORD *)&v205[24] = 0x15F00000001LL;
            *(_QWORD *)&v205[32] = &unk_14178FCF6;
            *(_QWORD *)&v205[40] = &v172;
            sub_1412C36A0(&v215, &v203);
          }
          sub_1406CDA20(&FileHandle);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v203.m256i_i64[0] = (__int64)&v214;
        v203.m256i_i64[1] = (__int64)sub_1414A9660;
        v203.m256i_i64[2] = (__int64)&v175;
        v203.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v186, &unk_1417876C6, &v203);
        LOBYTE(v180) = v216;
        Buf = (void *)v186.m512i_i64[1];
        v172 = *(_OWORD *)&v186.m512i_u64[1];
        v203.m256i_i64[0] = (__int64)&v180;
        v203.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v203.m256i_i64[2] = (__int64)&v172;
        v203.m256i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&FileHandle, &unk_141787489, &v203);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
        if ( v186.m512i_i64[0] )
          sub_140001660(Buf, v186.m512i_i64[0], 1);
        v11[5] = v179;
        v11[4] = v178;
        v64 = *(_OWORD *)v175.m256i_i8;
        v65 = *(_OWORD *)&v175.m256i_u64[2];
        v66 = v176;
        v11[3] = v177;
        v11[2] = v66;
        v11[1] = v65;
        *v11 = v64;
        sub_1406CDA20(&v167);
        sub_1406CDA20(&v159);
        return v11;
      }
      v179 = *(_OWORD *)&v147[80];
      v178 = *(_OWORD *)&v147[64];
      v177 = *(_OWORD *)&v147[48];
      v176 = *(_OWORD *)&v147[32];
      v175 = *(__m256i *)v147;
      v33 = v191.m256i_i32[2];
      v34 = v191.m256i_i8[12];
      v35 = sub_141471910(*(_QWORD *)v147, v31, v32);
      v37 = v35 == v155;
      v38 = v35 < v155;
      if ( v37 )
        v38 = v36 < v174;
      if ( v207 )
      {
LABEL_84:
        FileHandle.m256i_i64[0] = 0;
        *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
        v203.m256i_i64[2] = 1610612768;
        v203.m256i_i64[0] = (__int64)p_FileHandle;
        v203.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v175, &v203) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = FileHandle.m256i_i64[1];
        v210 = FileHandle.m256i_i64[0];
        write((int)&v186, Buf, v216);
        if ( v186.m512i_i32[0] != -1 )
        {
          v200 = v188;
          v199 = v187;
          v198 = *(_OWORD *)&v186.m512i_u64[6];
          v197 = *(_OWORD *)&v186.m512i_u64[4];
          FileHandle = *(__m256i *)v186.m512i_i8;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v167.m256i_i64[0] = (__int64)p_FileHandle;
            v167.m256i_i64[1] = (__int64)sub_140B036A0;
            v203.m256i_i64[0] = 0;
            v203.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v203.m256i_u64[2] = 0x2Du;
            *(_QWORD *)&v204 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v204 + 1) = 35;
            *(_QWORD *)v205 = 2;
            *(_QWORD *)&v205[8] = aCodexmateLibCo_27;
            *(_QWORD *)&v205[16] = 45;
            *(_QWORD *)&v205[24] = 0x15F00000001LL;
            *(_QWORD *)&v205[32] = &unk_14178FCF6;
            *(_QWORD *)&v205[40] = &v167;
            sub_1412C36A0(&v215, &v203);
          }
          sub_1406CDA20(&FileHandle);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v203.m256i_i64[0] = (__int64)&v214;
        v203.m256i_i64[1] = (__int64)sub_1414A9660;
        v203.m256i_i64[2] = (__int64)&v175;
        v203.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v186, &unk_1417876C6, &v203);
        LOBYTE(v159) = v216;
        Buf = (void *)v186.m512i_i64[1];
        *(_OWORD *)v167.m256i_i8 = *(_OWORD *)&v186.m512i_u64[1];
        v203.m256i_i64[0] = (__int64)&v159;
        v203.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v203.m256i_i64[2] = (__int64)&v167;
        v203.m256i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&FileHandle, &unk_141787489, &v203);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
        if ( v186.m512i_i64[0] )
          sub_140001660(Buf, v186.m512i_i64[0], 1);
        v11[5] = v179;
        v11[4] = v178;
        v56 = *(_OWORD *)v175.m256i_i8;
        v57 = *(_OWORD *)&v175.m256i_u64[2];
        v58 = v176;
        v59 = v177;
        goto LABEL_116;
      }
      if ( v33 )
      {
        if ( !v38 || (unsigned __int8)v214 >= 3u )
          goto LABEL_84;
      }
      else if ( (v38 & (unsigned __int8)v34 & ((unsigned __int8)v214 < 3u)) == 0 )
      {
        goto LABEL_84;
      }
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v203.m256i_i64[2] = 1610612768;
      v203.m256i_i64[0] = (__int64)p_FileHandle;
      v203.m256i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v175, &v203) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v215,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v167.m256i_i64[2] = FileHandle.m256i_i64[2];
      *(_OWORD *)v167.m256i_i8 = *(_OWORD *)FileHandle.m256i_i8;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        FileHandle.m256i_i64[0] = (__int64)&v216;
        FileHandle.m256i_i64[1] = (__int64)sub_1407B2DA0;
        FileHandle.m256i_i64[2] = (__int64)&v214;
        FileHandle.m256i_i64[3] = (__int64)sub_1414A9660;
        *(_QWORD *)&v197 = &v167;
        *((_QWORD *)&v197 + 1) = sub_1400015F0;
        v203.m256i_i64[0] = 0;
        v203.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
        *(_OWORD *)&v203.m256i_u64[2] = 0x2Du;
        *(_QWORD *)&v204 = aSrcCoreRelayRo_1;
        *((_QWORD *)&v204 + 1) = 35;
        *(_QWORD *)v205 = 2;
        *(_QWORD *)&v205[8] = aCodexmateLibCo_27;
        *(_QWORD *)&v205[16] = 45;
        *(_QWORD *)&v205[24] = 0xA800000001LL;
        *(_QWORD *)&v205[32] = &unk_14178785E;
        *(_QWORD *)&v205[40] = p_FileHandle;
        sub_1412C36A0(&v215, &v203);
      }
      write((int)&v186, Buf, v216);
      if ( v186.m512i_i32[0] != -1 )
      {
        v200 = v188;
        v199 = v187;
        v198 = *(_OWORD *)&v186.m512i_u64[6];
        v197 = *(_OWORD *)&v186.m512i_u64[4];
        FileHandle = *(__m256i *)v186.m512i_i8;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v159 = p_FileHandle;
          *((_QWORD *)&v159 + 1) = sub_140B036A0;
          v203.m256i_i64[0] = 0;
          v203.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v203.m256i_u64[2] = 0x2Du;
          *(_QWORD *)&v204 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v204 + 1) = 35;
          *(_QWORD *)v205 = 2;
          *(_QWORD *)&v205[8] = aCodexmateLibCo_27;
          *(_QWORD *)&v205[16] = 45;
          *(_QWORD *)&v205[24] = 0x15F00000001LL;
          *(_QWORD *)&v205[32] = &unk_14178FCF6;
          *(_QWORD *)&v205[40] = &v159;
          sub_1412C36A0(&v215, &v203);
        }
        sub_1406CDA20(p_FileHandle);
      }
      v203.m256i_i64[0] = (__int64)&v214;
      v203.m256i_i64[1] = (__int64)sub_1414A9660;
      v203.m256i_i64[2] = (__int64)&v167;
      v203.m256i_i64[3] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v135, &unk_1417876C6, &v203);
      LOBYTE(v159) = v216;
      v206 = v136;
      *(_OWORD *)v186.m512i_i8 = v136;
      v203.m256i_i64[0] = (__int64)&v159;
      v203.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v203.m256i_i64[2] = (__int64)&v186;
      v203.m256i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(p_FileHandle, &unk_141787489, &v203);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileRetry, 15, (__int64)p_FileHandle);
      if ( v135 )
        sub_140001660(v206, v135, 1);
      if ( v167.m256i_i64[0] )
        sub_140001660(v167.m256i_i64[1], v167.m256i_i64[0], 1);
      sub_1406CDA20(&v175);
      v20 = v22;
      v21 = (unsigned int)v210;
    }
    if ( v191.m256i_i64[0] != -1 )
    {
      v156 = *(_QWORD *)v189;
      v179 = v134;
      v178 = v133;
      v177 = v132;
      v176 = v131;
      v175 = v130;
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v203.m256i_i64[2] = 1610612768;
      v203.m256i_i64[0] = (__int64)p_FileHandle;
      v203.m256i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v175, &v203) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v215,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v206 = FileHandle.m256i_i64[1];
      v210 = FileHandle.m256i_i64[0];
      write((int)&v186, Buf, v216);
      if ( v186.m512i_i32[0] != -1 )
      {
        v200 = v188;
        v199 = v187;
        v198 = *(_OWORD *)&v186.m512i_u64[6];
        v197 = *(_OWORD *)&v186.m512i_u64[4];
        FileHandle = *(__m256i *)v186.m512i_i8;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v167.m256i_i64[0] = (__int64)p_FileHandle;
          v167.m256i_i64[1] = (__int64)sub_140B036A0;
          v203.m256i_i64[0] = 0;
          v203.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v203.m256i_u64[2] = 0x2Du;
          *(_QWORD *)&v204 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v204 + 1) = 35;
          *(_QWORD *)v205 = 2;
          *(_QWORD *)&v205[8] = aCodexmateLibCo_27;
          *(_QWORD *)&v205[16] = 45;
          *(_QWORD *)&v205[24] = 0x15F00000001LL;
          *(_QWORD *)&v205[32] = &unk_14178FCF6;
          *(_QWORD *)&v205[40] = &v167;
          sub_1412C36A0(&v215, &v203);
        }
        sub_1406CDA20(&FileHandle);
      }
      if ( v210 )
        sub_140001660(v206, v210, 1);
      v203.m256i_i64[0] = (__int64)&v214;
      v203.m256i_i64[1] = (__int64)sub_1414A9660;
      v203.m256i_i64[2] = (__int64)&v175;
      v203.m256i_i64[3] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v186, &unk_1417876C6, &v203);
      LOBYTE(v159) = v216;
      Buf = (void *)v186.m512i_i64[1];
      *(_OWORD *)v167.m256i_i8 = *(_OWORD *)&v186.m512i_u64[1];
      v203.m256i_i64[0] = (__int64)&v159;
      v203.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v203.m256i_i64[2] = (__int64)&v167;
      v203.m256i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&FileHandle, &unk_141787489, &v203);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aSettleFailed, 13, (__int64)&FileHandle);
      if ( v186.m512i_i64[0] )
        sub_140001660(Buf, v186.m512i_i64[0], 1);
      v11[5] = v179;
      v11[4] = v178;
      v67 = *(_OWORD *)v175.m256i_i8;
      v68 = *(_OWORD *)&v175.m256i_u64[2];
      v69 = v176;
      v11[3] = v177;
      v11[2] = v69;
      v11[1] = v68;
      *v11 = v67;
      sub_1406CE2E0(&v189[8]);
      v70 = *((_QWORD *)&v190 + 1);
      v71 = v190;
      if ( *((_QWORD *)&v190 + 1) )
      {
        v72 = (_QWORD *)(v190 + 8);
        do
        {
          v73 = *(v72 - 1);
          if ( v73 )
            sub_140001660(*v72, v73, 1);
          v72 += 3;
          --v70;
        }
        while ( v70 );
      }
      v74 = *(_QWORD *)&v189[72];
      if ( !*(_QWORD *)&v189[72] )
        return v11;
      goto LABEL_170;
    }
    *(_QWORD *)&v171 = *(_QWORD *)&v147[88];
    v170 = *(_OWORD *)&v147[72];
    v169 = *(_OWORD *)&v147[56];
    v168 = *(_OWORD *)&v147[40];
    v167 = *(__m256i *)&v147[8];
    v182 = v191.m256i_i32[2];
    v183 = v191.m256i_i8[12];
    v202[1] = 1;
    sub_140852800((unsigned int)&v152, v146, a8, 0, (v191.m256i_i32[2] == 0) & (v191.m256i_i8[12] ^ 1));
    v39 = v154;
    if ( !v154 )
    {
      if ( (v182 || (v183 & 1) != 0) && *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)v189 = &v216;
        *(_QWORD *)&v189[8] = sub_1407B2DA0;
        *(_QWORD *)&v189[16] = &v214;
        *(_QWORD *)&v189[24] = sub_1414A9660;
        *(_QWORD *)&v189[32] = &v182;
        *(_QWORD *)&v189[40] = sub_1414AB780;
        *(_QWORD *)&v189[48] = &v183;
        *(_QWORD *)&v189[56] = sub_1414AC660;
        v203.m256i_i64[0] = (__int64)aCodexmateLibCo_27;
        v203.m256i_i64[1] = 45;
        v203.m256i_i64[2] = (__int64)aCodexmateLibCo_27;
        v203.m256i_i64[3] = 45;
        *(_QWORD *)&v204 = &off_141787640;
        v213 = 1;
        sub_140985BA0(&unk_1417875CB, v189, 2, &v203);
      }
      v75 = *(unsigned __int8 *)(a10 + 293);
      v213 = 1;
      sub_14084BFF0(&v175, a9, &v167, v75);
      if ( v175.m256i_i32[0] != -1 )
      {
        v188 = v179;
        v187 = v178;
        *(_OWORD *)&v186.m512i_u64[6] = v177;
        *(_OWORD *)&v186.m512i_u64[4] = v176;
        *(__m256i *)v186.m512i_i8 = v175;
        *(_QWORD *)v189 = &v216;
        *(_QWORD *)&v189[8] = sub_1407B2DA0;
        *(_QWORD *)&v189[16] = &v186;
        *(_QWORD *)&v189[24] = sub_140B036A0;
        sub_14149C0F0(&v157, &unk_141787685, v189);
        *(_OWORD *)&FileHandle.m256i_u64[1] = v157;
        FileHandle.m256i_i64[3] = v158;
        FileHandle.m256i_i64[0] = 10;
        v203.m256i_i64[0] = 0;
        *(_OWORD *)&v203.m256i_u64[1] = 1u;
        *(_QWORD *)&v189[16] = 1610612768;
        *(_QWORD *)v189 = &v203;
        *(_QWORD *)&v189[8] = &off_141790AA0;
        v76 = sub_140B036A0(&FileHandle, v189);
        v77 = v184;
        if ( v76 )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = v203.m256i_i64[1];
        v210 = v203.m256i_i64[0];
        write((int)&v203, Buf, v216);
        if ( v203.m256i_i32[0] != -1 )
        {
          v190 = *(_OWORD *)&v205[32];
          *(_OWORD *)&v189[64] = *(_OWORD *)&v205[16];
          *(_OWORD *)&v189[48] = *(_OWORD *)v205;
          *(_OWORD *)&v189[32] = v204;
          *(__m256i *)v189 = v203;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v172 = v189;
            *((_QWORD *)&v172 + 1) = sub_140B036A0;
            *(_QWORD *)&v159 = aCodexmateLibCo_27;
            *((_QWORD *)&v159 + 1) = 45;
            *(_QWORD *)&v160 = aCodexmateLibCo_27;
            *((_QWORD *)&v160 + 1) = 45;
            *(_QWORD *)&v161 = &off_14178FD30;
            sub_140985BA0(&unk_14178FCF6, &v172, 2, &v159);
          }
          sub_1406CDA20(v189);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        *(_QWORD *)v189 = &v214;
        *(_QWORD *)&v189[8] = sub_1414A9660;
        *(_QWORD *)&v189[16] = &FileHandle;
        *(_QWORD *)&v189[24] = sub_140B036A0;
        sub_14149C0F0(&v159, &unk_1417876C6, v189);
        LOBYTE(v180) = v216;
        Buf = *((void **)&v159 + 1);
        v172 = __PAIR128__(v160, *((unsigned __int64 *)&v159 + 1));
        *(_QWORD *)v189 = &v180;
        *(_QWORD *)&v189[8] = sub_1407B2DA0;
        *(_QWORD *)&v189[16] = &v172;
        *(_QWORD *)&v189[24] = sub_14041F680;
        sub_14149C0F0(&v203, &unk_141787489, v189);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v203);
        if ( (_QWORD)v159 )
          sub_140001660(Buf, v159, 1);
        v77[5] = v200;
        v77[4] = v199;
        v78 = *(_OWORD *)FileHandle.m256i_i8;
        v79 = *(_OWORD *)&FileHandle.m256i_u64[2];
        v80 = v197;
        v77[3] = v198;
        v77[2] = v80;
        v77[1] = v79;
        *v77 = v78;
        v213 = 1;
        sub_1406CDA20(&v186);
        v81 = 1;
        v206 = v153;
        v82 = 1;
        goto LABEL_159;
      }
      v100 = v171;
      if ( (_QWORD)v171 )
      {
        v213 = 1;
        sub_140440300((unsigned int)v189, DWORD2(v170), v171, (unsigned int)&unk_1417876F9, 3);
        v206 = *(_QWORD *)&v189[8];
        v210 = *(_QWORD *)v189;
        sub_1407A0A20(Buf, v216, *(__int128 *)&v189[8]);
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v213 = 1;
        v101 = sub_141471AC0(&v148);
        *(_OWORD *)FileHandle.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v101 + v102 / 0xF4240uLL;
        v186.m512i_i64[0] = v100;
        *(_QWORD *)v189 = &v214;
        *(_QWORD *)&v189[8] = sub_1414A9660;
        *(_QWORD *)&v189[16] = p_FileHandle;
        *(_QWORD *)&v189[24] = sub_1414A9600;
        *(_QWORD *)&v189[32] = &v186;
        *(_QWORD *)&v189[40] = sub_1414AC520;
        v213 = 1;
        sub_14149C0F0(&v203, &unk_141787704, v189);
        v213 = 1;
        sub_1406DB090(v216, aDegraded, 8, &v203);
        v103 = *(_OWORD *)v167.m256i_i8;
        v104 = *(_OWORD *)&v167.m256i_u64[2];
        v105 = v168;
        v106 = v169;
        *(_OWORD *)&v189[48] = v169;
        *(_OWORD *)&v189[32] = v168;
        *(__m256i *)v189 = v167;
        v107 = v170;
        *(_OWORD *)&v189[64] = v170;
        *(_QWORD *)&v190 = v171;
        v11 = v184;
        *((_QWORD *)v184 + 11) = v171;
        *(__int128 *)((char *)v11 + 72) = v107;
        *(__int128 *)((char *)v11 + 56) = v106;
        *(__int128 *)((char *)v11 + 40) = v105;
        *(__int128 *)((char *)v11 + 24) = v104;
        *(__int128 *)((char *)v11 + 8) = v103;
      }
      else
      {
        v213 = 1;
        sub_140ADF0F0(Buf);
        v213 = 1;
        v118 = sub_141471AC0(&v148);
        *(_OWORD *)FileHandle.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v118 + v119 / 0xF4240uLL;
        *(_QWORD *)v189 = &v214;
        *(_QWORD *)&v189[8] = sub_1414A9660;
        *(_QWORD *)&v189[16] = p_FileHandle;
        *(_QWORD *)&v189[24] = sub_1414A9600;
        v213 = 1;
        sub_14149C0F0(&v203, &unk_1417876DA, v189);
        v213 = 1;
        sub_1406DB090(v216, aStable, 6, &v203);
        v120 = *(_OWORD *)v167.m256i_i8;
        v121 = *(_OWORD *)&v167.m256i_u64[2];
        v122 = v168;
        v11 = v184;
        v184[4] = v169;
        v11[3] = v122;
        v11[2] = v121;
        v11[1] = v120;
        *((_QWORD *)v11 + 1) = 2;
      }
      *(_QWORD *)v11 = -1;
      if ( v152 )
        sub_140001660(v153, 32 * v152, 8);
      if ( v100 )
        return v11;
LABEL_164:
      v71 = *((_QWORD *)&v170 + 1);
      v83 = v171;
      if ( (_QWORD)v171 )
      {
        v84 = (_QWORD *)(*((_QWORD *)&v170 + 1) + 8LL);
        do
        {
          v85 = *(v84 - 1);
          if ( v85 )
            sub_140001660(*v84, v85, 1);
          v84 += 3;
          --v83;
        }
        while ( v83 );
      }
      v74 = v170;
      if ( !(_QWORD)v170 )
        return v11;
LABEL_170:
      sub_140001660(v71, 24 * v74, 8);
      return v11;
    }
    v213 = 1;
    v206 = v153;
    sub_140328B20(&v203, v153, v153 + 32 * v154);
    v40 = v203.m256i_i64[2];
    v41 = v203.m256i_i64[1];
    sub_140440300((unsigned int)v189, v203.m256i_i32[2], v203.m256i_i32[4], (unsigned int)&unk_1417876F9, 3);
    v166 = *(_QWORD *)&v189[16];
    v165 = *(_OWORD *)v189;
    if ( v40 )
    {
      v45 = (_QWORD *)(v41 + 8);
      do
      {
        v42 = *(v45 - 1);
        if ( v42 )
          sub_140001660(*v45, v42, 1);
        v45 += 3;
        --v40;
      }
      while ( v40 );
    }
    if ( v203.m256i_i64[0] )
      sub_140001660(v41, 24 * v203.m256i_i64[0], 8);
    v211 = 1;
    v46 = sub_141471910(v43, v42, v44);
    v37 = v46 == v155;
    v48 = v46 < v155;
    if ( v37 )
      v48 = v47 < v174;
    v49 = v207;
    if ( v207 )
      break;
    if ( v182 )
    {
      if ( !v48 || (unsigned __int8)v214 >= 3u )
        goto LABEL_188;
    }
    else if ( (v48 & (unsigned __int8)v183 & ((unsigned __int8)v214 < 3u)) == 0 )
    {
LABEL_188:
      *(_QWORD *)v189 = &v216;
      *(_QWORD *)&v189[8] = sub_1407B2DA0;
      *(_QWORD *)&v189[16] = &v165;
      *(_QWORD *)&v189[24] = sub_1400015F0;
      v211 = 1;
      sub_14149C0F0(&v175, &unk_14178772E, v189);
      *(_OWORD *)&FileHandle.m256i_u64[1] = *(_OWORD *)v175.m256i_i8;
      FileHandle.m256i_i64[3] = v175.m256i_i64[2];
      FileHandle.m256i_i64[0] = 10;
      v203.m256i_i64[0] = 0;
      *(_OWORD *)&v203.m256i_u64[1] = 1u;
      *(_QWORD *)&v189[16] = 1610612768;
      *(_QWORD *)v189 = &v203;
      *(_QWORD *)&v189[8] = &off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&FileHandle, v189) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v215,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v185 = v203.m256i_i64[1];
      v210 = v203.m256i_i64[0];
      write((int)&v203, Buf, v216);
      if ( v203.m256i_i32[0] != -1 )
      {
        v190 = *(_OWORD *)&v205[32];
        *(_OWORD *)&v189[64] = *(_OWORD *)&v205[16];
        *(_OWORD *)&v189[48] = *(_OWORD *)v205;
        *(_OWORD *)&v189[32] = v204;
        *(__m256i *)v189 = v203;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v159 = v189;
          *((_QWORD *)&v159 + 1) = sub_140B036A0;
          v186.m512i_i64[0] = (__int64)aCodexmateLibCo_27;
          v186.m512i_i64[1] = 45;
          v186.m512i_i64[2] = (__int64)aCodexmateLibCo_27;
          v186.m512i_i64[3] = 45;
          v186.m512i_i64[4] = (__int64)&off_14178FD30;
          sub_140985BA0(&unk_14178FCF6, &v159, 2, &v186);
        }
        sub_1406CDA20(v189);
      }
      if ( v210 )
        sub_140001660(v185, v210, 1);
      v203.m256i_i64[0] = v39;
      *(_QWORD *)v189 = &v214;
      *(_QWORD *)&v189[8] = sub_1414A9660;
      *(_QWORD *)&v189[16] = &v203;
      *(_QWORD *)&v189[24] = sub_1414AC520;
      sub_14149C0F0(&v186, &unk_14178774F, v189);
      LOBYTE(v157) = v216;
      Buf = (void *)v186.m512i_i64[1];
      v159 = *(_OWORD *)&v186.m512i_u64[1];
      *(_QWORD *)v189 = &v157;
      *(_QWORD *)&v189[8] = sub_1407B2DA0;
      *(_QWORD *)&v189[16] = &v159;
      *(_QWORD *)&v189[24] = sub_14041F680;
      sub_14149C0F0(&v203, &unk_141787489, v189);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aPostconditionF, 20, (__int64)&v203);
      if ( v186.m512i_i64[0] )
        sub_140001660(Buf, v186.m512i_i64[0], 1);
      v96 = v184;
      v184[5] = v200;
      v96[4] = v199;
      v97 = *(_OWORD *)FileHandle.m256i_i8;
      v98 = *(_OWORD *)&FileHandle.m256i_u64[2];
      v99 = v197;
      v96[3] = v198;
      v96[2] = v99;
      v96[1] = v98;
      *v96 = v97;
      v82 = 1;
      goto LABEL_213;
    }
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v203.m256i_i64[0] = (__int64)&v216;
      v203.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v203.m256i_i64[2] = (__int64)&v214;
      v203.m256i_i64[3] = (__int64)sub_1414A9660;
      *(_QWORD *)&v204 = &v165;
      *((_QWORD *)&v204 + 1) = sub_1400015F0;
      *(_QWORD *)v189 = 0;
      *(_QWORD *)&v189[8] = aCodexmateLibCo_27;
      *(_OWORD *)&v189[16] = 0x2Du;
      *(_QWORD *)&v189[32] = aSrcCoreRelayRo_1;
      *(_QWORD *)&v189[40] = 35;
      *(_QWORD *)&v189[48] = 2;
      *(_QWORD *)&v189[56] = aCodexmateLibCo_27;
      *(_QWORD *)&v189[64] = 45;
      *(_QWORD *)&v189[72] = 0x10B00000001LL;
      *(_QWORD *)&v190 = &unk_1417877DC;
      *((_QWORD *)&v190 + 1) = &v203;
      v211 = 1;
      sub_1412C36A0(&v215, v189);
    }
    v211 = 1;
    write((int)v28, Buf, v216);
    if ( FileHandle.m256i_i32[0] != -1 )
    {
      *(_OWORD *)&v205[32] = v200;
      *(_OWORD *)&v205[16] = v199;
      *(_OWORD *)v205 = v198;
      v204 = v197;
      v203 = FileHandle;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v186.m512i_i64[0] = (__int64)&v203;
        v186.m512i_i64[1] = (__int64)sub_140B036A0;
        *(_QWORD *)v189 = 0;
        *(_QWORD *)&v189[8] = aCodexmateLibCo_27;
        *(_OWORD *)&v189[16] = 0x2Du;
        *(_QWORD *)&v189[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v189[40] = 35;
        *(_QWORD *)&v189[48] = 2;
        *(_QWORD *)&v189[56] = aCodexmateLibCo_27;
        *(_QWORD *)&v189[64] = 45;
        *(_QWORD *)&v189[72] = 0x15F00000001LL;
        *(_QWORD *)&v190 = &unk_14178FCF6;
        *((_QWORD *)&v190 + 1) = &v186;
        sub_1412C36A0(&v215, v189);
      }
      v211 = 1;
      sub_1406CDA20(&v203);
    }
    v50 = v206;
    if ( (_QWORD)v165 )
      sub_140001660(*((_QWORD *)&v165 + 1), v165, 1);
    v51 = (_QWORD *)(v50 + 8);
    do
    {
      v52 = *(v51 - 1);
      if ( v52 )
        sub_140001660(*v51, v52, 1);
      v51 += 4;
      --v39;
    }
    while ( v39 );
    if ( v152 )
      sub_140001660(v50, 32 * v152, 8);
    sub_1406CE2E0(&v167);
    v53 = *((_QWORD *)&v170 + 1);
    v54 = v171;
    v11 = v184;
    if ( (_QWORD)v171 )
    {
      v55 = (_QWORD *)(*((_QWORD *)&v170 + 1) + 8LL);
      do
      {
        v19 = *(v55 - 1);
        if ( v19 )
          sub_140001660(*v55, v19, 1);
        v55 += 3;
        --v54;
      }
      while ( v54 );
    }
    if ( (_QWORD)v170 )
      sub_140001660(v53, 24 * v170, 8);
    v20 = v22;
    p_FileHandle = v28;
    v21 = (unsigned int)v210;
  }
  v181 = *(_QWORD *)&v147[88];
  v180 = *(_OWORD *)&v147[72];
  *(_QWORD *)v189 = &v165;
  *(_QWORD *)&v189[8] = sub_1400015F0;
  sub_14149C0F0(&v172, &unk_14178777C, v189);
  v86 = v181;
  if ( v181 == (_QWORD)v180 )
    sub_141689AB0(&v180);
  v87 = *((_QWORD *)&v180 + 1);
  v88 = 3 * v86;
  *(_QWORD *)(*((_QWORD *)&v180 + 1) + 8 * v88 + 16) = v173;
  *(_OWORD *)(v87 + 8 * v88) = v172;
  v181 = v86 + 1;
  sub_14084BFF0(&v175, a9, &v147[8], *(unsigned __int8 *)(a10 + 293));
  v82 = v175.m256i_i64[0] != -1;
  if ( v175.m256i_i64[0] == -1 )
  {
    sub_140440300((unsigned int)v189, DWORD2(v180), v181, (unsigned int)&unk_1417876F9, 3);
    v185 = *(_QWORD *)&v189[8];
    v210 = *(_QWORD *)v189;
    write((int)&v203, Buf, v216);
    if ( v203.m256i_i32[0] != -1 )
    {
      v190 = *(_OWORD *)&v205[32];
      *(_OWORD *)&v189[64] = *(_OWORD *)&v205[16];
      *(_OWORD *)&v189[48] = *(_OWORD *)v205;
      *(_OWORD *)&v189[32] = v204;
      *(__m256i *)v189 = v203;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v186.m512i_i64[0] = (__int64)v189;
        v186.m512i_i64[1] = (__int64)sub_140B036A0;
        FileHandle.m256i_i64[0] = (__int64)aCodexmateLibCo_27;
        FileHandle.m256i_i64[1] = 45;
        FileHandle.m256i_i64[2] = (__int64)aCodexmateLibCo_27;
        FileHandle.m256i_i64[3] = 45;
        *(_QWORD *)&v197 = &off_14178FD30;
        sub_140985BA0(&unk_14178FCF6, &v186, 2, &FileHandle);
      }
      sub_1406CDA20(v189);
    }
    if ( v210 )
      sub_140001660(v185, v210, 1);
    v108 = sub_141471AC0(&v148);
    *(_OWORD *)v203.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v108 + v109 / 0xF4240uLL;
    v186.m512i_i64[0] = v181;
    *(_QWORD *)v189 = &v214;
    *(_QWORD *)&v189[8] = sub_1414A9660;
    *(_QWORD *)&v189[16] = &v203;
    *(_QWORD *)&v189[24] = sub_1414A9600;
    *(_QWORD *)&v189[32] = &v186;
    *(_QWORD *)&v189[40] = sub_1414AC520;
    sub_14149C0F0(&FileHandle, &unk_141787704, v189);
    v175.m256i_i8[0] = v216;
    Buf = (void *)FileHandle.m256i_i64[1];
    *(_OWORD *)v186.m512i_i8 = *(_OWORD *)&FileHandle.m256i_u64[1];
    *(_QWORD *)v189 = &v175;
    *(_QWORD *)&v189[8] = sub_1407B2DA0;
    *(_QWORD *)&v189[16] = &v186;
    *(_QWORD *)&v189[24] = sub_14041F680;
    sub_14149C0F0(&v203, &unk_141787489, v189);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aDegraded, 8, (__int64)&v203);
    if ( FileHandle.m256i_i64[0] )
      sub_140001660(Buf, FileHandle.m256i_i64[0], 1);
    v110 = *(_OWORD *)v167.m256i_i8;
    v111 = *(_OWORD *)&v167.m256i_u64[2];
    v112 = v168;
    v113 = v169;
    *(_OWORD *)&v189[48] = v169;
    *(_OWORD *)&v189[32] = v168;
    *(__m256i *)v189 = v167;
    v114 = v180;
    *(_OWORD *)&v189[64] = v180;
    *(_QWORD *)&v190 = v181;
    v115 = v184;
    *((_QWORD *)v184 + 11) = v181;
    *(__int128 *)((char *)v115 + 72) = v114;
    *(__int128 *)((char *)v115 + 56) = v113;
    *(__int128 *)((char *)v115 + 40) = v112;
    *(__int128 *)((char *)v115 + 24) = v111;
    *(__int128 *)((char *)v115 + 8) = v110;
    *(_QWORD *)v115 = -1;
  }
  else
  {
    v188 = v179;
    v187 = v178;
    *(_OWORD *)&v186.m512i_u64[6] = v177;
    *(_OWORD *)&v186.m512i_u64[4] = v176;
    *(__m256i *)v186.m512i_i8 = v175;
    *(_QWORD *)v189 = &v216;
    *(_QWORD *)&v189[8] = sub_1407B2DA0;
    *(_QWORD *)&v189[16] = &v186;
    *(_QWORD *)&v189[24] = sub_140B036A0;
    sub_14149C0F0(&v157, &unk_1417877B9, v189);
    *(_OWORD *)&FileHandle.m256i_u64[1] = v157;
    FileHandle.m256i_i64[3] = v158;
    FileHandle.m256i_i64[0] = 10;
    v203.m256i_i64[0] = 0;
    *(_OWORD *)&v203.m256i_u64[1] = 1u;
    *(_QWORD *)&v189[16] = 1610612768;
    *(_QWORD *)v189 = &v203;
    *(_QWORD *)&v189[8] = &off_141790AA0;
    if ( (unsigned __int8)sub_140B036A0(&FileHandle, v189) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v215,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v185 = v203.m256i_i64[1];
    v210 = v203.m256i_i64[0];
    write((int)&v203, Buf, v216);
    if ( v203.m256i_i32[0] != -1 )
    {
      v190 = *(_OWORD *)&v205[32];
      *(_OWORD *)&v189[64] = *(_OWORD *)&v205[16];
      *(_OWORD *)&v189[48] = *(_OWORD *)v205;
      *(_OWORD *)&v189[32] = v204;
      *(__m256i *)v189 = v203;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v150 = v189;
        v151 = sub_140B036A0;
        *(_QWORD *)&v159 = aCodexmateLibCo_27;
        *((_QWORD *)&v159 + 1) = 45;
        *(_QWORD *)&v160 = aCodexmateLibCo_27;
        *((_QWORD *)&v160 + 1) = 45;
        *(_QWORD *)&v161 = &off_14178FD30;
        sub_140985BA0(&unk_14178FCF6, &v150, 2, &v159);
      }
      sub_1406CDA20(v189);
    }
    if ( v210 )
      sub_140001660(v185, v210, 1);
    *(_QWORD *)v189 = &v214;
    *(_QWORD *)&v189[8] = sub_1414A9660;
    *(_QWORD *)&v189[16] = &FileHandle;
    *(_QWORD *)&v189[24] = sub_140B036A0;
    sub_14149C0F0(&v159, &unk_1417876C6, v189);
    v201 = v216;
    Buf = *((void **)&v159 + 1);
    v150 = *((_BYTE **)&v159 + 1);
    v151 = (__int64 (__fastcall *)(_QWORD, _QWORD))v160;
    *(_QWORD *)v189 = &v201;
    *(_QWORD *)&v189[8] = sub_1407B2DA0;
    *(_QWORD *)&v189[16] = &v150;
    *(_QWORD *)&v189[24] = sub_14041F680;
    sub_14149C0F0(&v203, &unk_141787489, v189);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v203);
    if ( (_QWORD)v159 )
      sub_140001660(Buf, v159, 1);
    v89 = v184;
    v184[5] = v200;
    v89[4] = v199;
    v90 = *(_OWORD *)FileHandle.m256i_i8;
    v91 = *(_OWORD *)&FileHandle.m256i_u64[2];
    v92 = v197;
    v89[3] = v198;
    v89[2] = v92;
    v89[1] = v91;
    *v89 = v90;
    sub_1406CDA20(&v186);
    v93 = v181;
    if ( v181 )
    {
      v94 = (_QWORD *)(*((_QWORD *)&v180 + 1) + 8LL);
      do
      {
        v95 = *(v94 - 1);
        if ( v95 )
          sub_140001660(*v94, v95, 1);
        v94 += 3;
        --v93;
      }
      while ( v93 );
    }
    if ( (_QWORD)v180 )
      sub_140001660(*((_QWORD *)&v180 + 1), 24 * v180, 8);
  }
LABEL_213:
  if ( (_QWORD)v165 )
    sub_140001660(*((_QWORD *)&v165 + 1), v165, 1);
  v81 = v49 ^ 1;
  v116 = (_QWORD *)(v206 + 8);
  do
  {
    v117 = *(v116 - 1);
    if ( v117 )
      sub_140001660(*v116, v117, 1);
    v116 += 4;
    --v39;
  }
  while ( v39 );
LABEL_159:
  if ( v152 )
    sub_140001660(v206, 32 * v152, 8);
  if ( v82 )
    sub_1406CE2E0(&v167);
  v11 = v184;
  if ( v81 )
    goto LABEL_164;
  return v11;
}
