// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x140bc8230 | successor of pre-update 0x140462860 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_140BC8230(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rsi
  __int64 v4; // rax
  volatile signed __int64 *v5; // rdx
  volatile signed __int64 *v6; // rcx
  volatile signed __int64 *v7; // rax
  __int64 i; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r12
  __int64 v11; // r9
  volatile signed __int64 *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // r8
  _OWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int16 *v26; // rax
  __int16 v27; // ax
  __int128 v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  signed __int64 v32; // rt0
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rcx
  char v39; // bl
  __int64 result; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int128 v45; // xmm0
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int128 v68; // xmm0
  __int64 v69; // rax
  __int128 v70; // xmm0
  __int64 v71; // rdx
  __int64 v72; // rcx
  unsigned int v73; // esi
  int v74; // r14d
  unsigned int v75; // eax
  __int64 v76; // r12
  unsigned int v77; // r15d
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  __int64 v90; // rcx
  _QWORD *v91; // rcx
  __int64 v92; // rdx
  volatile signed __int64 *v93; // rax
  __int128 v94; // [rsp+30h] [rbp-50h] BYREF
  __int128 v95; // [rsp+40h] [rbp-40h]
  __int64 v96; // [rsp+50h] [rbp-30h]
  __int128 v97; // [rsp+198h] [rbp+118h]
  __int128 v98; // [rsp+1A8h] [rbp+128h]
  __int128 v99; // [rsp+1B8h] [rbp+138h]
  __int64 v100; // [rsp+1C8h] [rbp+148h]
  __int64 v101; // [rsp+1D0h] [rbp+150h]
  __int64 v102; // [rsp+1D8h] [rbp+158h]
  __int64 v103; // [rsp+1E0h] [rbp+160h]
  __int64 v104; // [rsp+1E8h] [rbp+168h]
  __int128 v105; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v106; // [rsp+200h] [rbp+180h]
  __int128 v107; // [rsp+210h] [rbp+190h]
  __int128 v108; // [rsp+220h] [rbp+1A0h]
  __int64 v109; // [rsp+230h] [rbp+1B0h]
  __int16 v110; // [rsp+240h] [rbp+1C0h]
  char v111; // [rsp+242h] [rbp+1C2h]
  volatile signed __int64 *v112; // [rsp+360h] [rbp+2E0h]
  __int64 *v113; // [rsp+368h] [rbp+2E8h]
  _OWORD *v114; // [rsp+370h] [rbp+2F0h]
  __int64 v115; // [rsp+378h] [rbp+2F8h]
  _QWORD *v116; // [rsp+380h] [rbp+300h]
  __int64 v117; // [rsp+388h] [rbp+308h]
  __int64 v118; // [rsp+390h] [rbp+310h]
  __int64 v119; // [rsp+398h] [rbp+318h]
  __int64 v120; // [rsp+3A0h] [rbp+320h]
  __int64 v121; // [rsp+3A8h] [rbp+328h]
  __int64 v122; // [rsp+3B0h] [rbp+330h]
  _QWORD *v123; // [rsp+3B8h] [rbp+338h]
  __int64 v124; // [rsp+3C0h] [rbp+340h]
  _QWORD *v125; // [rsp+3C8h] [rbp+348h]
  __int64 v126; // [rsp+3D0h] [rbp+350h]
  _QWORD *v127; // [rsp+3D8h] [rbp+358h]
  __int64 v128; // [rsp+3E0h] [rbp+360h]
  __int64 v129; // [rsp+3E8h] [rbp+368h]
  __int64 v130; // [rsp+3F0h] [rbp+370h]
  _BYTE *v131; // [rsp+3F8h] [rbp+378h]
  _BYTE *v132; // [rsp+400h] [rbp+380h]
  _BYTE *v133; // [rsp+408h] [rbp+388h]
  __int128 v134; // [rsp+410h] [rbp+390h] BYREF
  __int128 v135; // [rsp+420h] [rbp+3A0h]
  __int64 v136; // [rsp+430h] [rbp+3B0h]
  __int64 v137; // [rsp+440h] [rbp+3C0h]
  __int64 v138; // [rsp+450h] [rbp+3D0h]
  __int64 v139; // [rsp+458h] [rbp+3D8h]
  volatile signed __int64 *v140; // [rsp+460h] [rbp+3E0h] BYREF
  volatile signed __int64 *v141; // [rsp+468h] [rbp+3E8h] BYREF
  volatile signed __int64 *v142; // [rsp+470h] [rbp+3F0h] BYREF
  volatile signed __int64 *v143; // [rsp+478h] [rbp+3F8h] BYREF
  __int128 v144; // [rsp+480h] [rbp+400h] BYREF
  __int128 v145; // [rsp+498h] [rbp+418h]
  _QWORD *v146; // [rsp+4A8h] [rbp+428h]
  __int64 v147; // [rsp+4B0h] [rbp+430h]
  char v148; // [rsp+4BDh] [rbp+43Dh]
  char v149; // [rsp+4BEh] [rbp+43Eh]
  char v150; // [rsp+4BFh] [rbp+43Fh]
  char v151; // [rsp+4C0h] [rbp+440h]
  char v152; // [rsp+4C1h] [rbp+441h]
  char v153; // [rsp+4C2h] [rbp+442h]
  char v154; // [rsp+4C3h] [rbp+443h]
  char v155; // [rsp+4C4h] [rbp+444h]
  char v156; // [rsp+4C5h] [rbp+445h]
  char v157; // [rsp+4C6h] [rbp+446h]
  char v158; // [rsp+4C7h] [rbp+447h]
  __int64 v159; // [rsp+4C8h] [rbp+448h]
  char v160; // [rsp+4D4h] [rbp+454h]
  char v161; // [rsp+4D5h] [rbp+455h]
  char v162; // [rsp+4D6h] [rbp+456h]
  char v163; // [rsp+4D7h] [rbp+457h]
  __int64 v164; // [rsp+4D8h] [rbp+458h]
  __int64 v165; // [rsp+4E0h] [rbp+460h]
  char v166; // [rsp+4EFh] [rbp+46Fh]
  __int64 v167; // [rsp+4F0h] [rbp+470h]

  v167 = -2;
  v3 = a2;
  v113 = a1;
  v4 = *(unsigned __int8 *)(a2 + 244);
  v164 = a2;
  switch ( v4 )
  {
    case 0LL:
      v5 = *(volatile signed __int64 **)a2;
      v6 = *(volatile signed __int64 **)(v3 + 8);
      v7 = *(volatile signed __int64 **)(v3 + 16);
      LODWORD(i) = *(unsigned __int16 *)(v3 + 240);
      v9 = *(unsigned __int16 *)(v3 + 242);
      v10 = v3 + 24;
      *(_QWORD *)(v3 + 24) = *(_QWORD *)v3;
      *(_QWORD *)(v3 + 32) = v6;
      *(_QWORD *)(v3 + 40) = v7;
      *(_WORD *)(v3 + 224) = i;
      *(_WORD *)(v3 + 226) = v9;
      v131 = (_BYTE *)(v3 + 228);
      *(_BYTE *)(v3 + 228) = 0;
LABEL_5:
      *(_DWORD *)(v3 + 232) = 0;
      *(_DWORD *)(v3 + 229) = 0;
      *(_BYTE *)(v3 + 232) = 1;
      v143 = v5;
      *(_BYTE *)(v3 + 231) = 1;
      v142 = v6;
      *(_BYTE *)(v3 + 230) = 1;
      v141 = v7;
      v137 = v10;
      sub_140BE02C0(&v105, 300, 0, 0);
      v12 = *((volatile signed __int64 **)&v105 + 1);
      v13 = v105;
      if ( (_QWORD)v105 != -1 )
      {
        v14 = v106;
        goto LABEL_53;
      }
      *(_BYTE *)(v164 + 229) = 1;
      v140 = v12;
      v130 = v10;
      LOBYTE(v11) = 1;
      sub_140BE02C0(&v105, 300, 0, v11);
      v12 = *((volatile signed __int64 **)&v105 + 1);
      v13 = v105;
      if ( (_QWORD)v105 != -1 )
      {
        v14 = v106;
        v17 = v164;
        *(_BYTE *)(v164 + 235) = 0;
        if ( *(_BYTE *)(v17 + 229) )
          goto LABEL_51;
        goto LABEL_53;
      }
      v64 = v164;
      *(_BYTE *)(v164 + 235) = 1;
      v112 = v12;
      *(_QWORD *)&v145 = v143;
      *((_QWORD *)&v145 + 1) = v142;
      *(_QWORD *)&v144 = v141;
      *(_DWORD *)(v64 + 229) = 0;
      *(_QWORD *)&v105 = 1;
      *((_QWORD *)&v105 + 1) = 1;
      *(_QWORD *)&v106 = 0;
      BYTE8(v106) = 0;
      *(_QWORD *)&v107 = v140;
      nullsub_1(v16, v15);
      v65 = sub_140001650(40, 8);
      v159 = v10;
      if ( !v65 )
        sub_14196B2C1(8, 40);
      v67 = v107;
      *(_QWORD *)(v65 + 32) = v107;
      v68 = v105;
      *(_OWORD *)(v65 + 16) = v106;
      *(_OWORD *)v65 = v68;
      *(_QWORD *)&v134 = v65;
      *(_BYTE *)(v64 + 235) = 0;
      *(_QWORD *)&v105 = 1;
      *((_QWORD *)&v105 + 1) = 1;
      *(_QWORD *)&v106 = 0;
      BYTE8(v106) = 0;
      *(_QWORD *)&v107 = v12;
      nullsub_1(v67, v66);
      v69 = sub_140001650(40, 8);
      if ( !v69 )
        sub_14196B2C1(8, 40);
      *(_QWORD *)(v69 + 32) = v107;
      v70 = v105;
      *(_OWORD *)(v69 + 16) = v106;
      *(_OWORD *)v69 = v70;
      *(_QWORD *)&v94 = v69;
      sub_1414331D0(&v105);
      v73 = v105;
      v74 = ((int)v105 >> 13) - 1;
      v2 = 0;
      if ( (int)v105 >> 13 <= 0 )
      {
        v75 = (1 - ((int)v105 >> 13)) / 0x190u + 1;
        v72 = 400 * v75;
        v74 += v72;
        v2 = -146097 * v75;
      }
      v76 = DWORD1(v105);
      v77 = DWORD2(v105);
      nullsub_1(v72, v71);
      v78 = (_QWORD *)sub_140001650(24, 8);
      if ( !v78 )
        sub_14196B2C1(8, 24);
      *v78 = 1;
      v78[1] = 1;
      v78[2] = 1000
             * (v76
              + 86400LL
              * (int)(((v74 / 100) >> 2) + v2 + ((v73 >> 4) & 0x1FF) - v74 / 100 + ((1461 * v74) >> 2) - 719163))
             + v77 / 0xF4240uLL;
      *(_BYTE *)(v164 + 234) = 1;
      v97 = v145;
      *(_QWORD *)&v98 = v144;
      *((_QWORD *)&v98 + 1) = v134;
      *(_QWORD *)&v99 = v94;
      *((_QWORD *)&v99 + 1) = v78;
      v147 = v159;
      *(_QWORD *)&v94 = sub_140C97CF0();
      v158 = 1;
      v165 = v94;
      sub_140C6A790(&v105);
      v158 = 0;
      *(_QWORD *)&v134 = sub_140C9A140(
                           v165,
                           (unsigned int)aAimamiHealth,
                           16,
                           (unsigned int)&v105,
                           (__int64)&off_141A89720);
      v157 = 1;
      v165 = v134;
      sub_140C6ABE0((__int64)&v105, v79);
      v157 = 0;
      v165 = sub_140C9A140(v165, (unsigned int)aIdeV1ChatCompl, 25, (unsigned int)&v105, (__int64)&off_141A89758);
      *(_QWORD *)&v144 = v165;
      v163 = 1;
      sub_140C6AA70((__int64)&v105, v80);
      v163 = 1;
      sub_140BF6020((__int64)&v94, &v105);
      v163 = 0;
      *((_QWORD *)&v145 + 1) = sub_140C9A140(
                                 v165,
                                 (unsigned int)aIdeV1Responses,
                                 18,
                                 (unsigned int)&v94,
                                 (__int64)&off_141A89788);
      v156 = 1;
      v165 = *((_QWORD *)&v145 + 1);
      sub_140C6A900(&v105);
      v156 = 0;
      *(_QWORD *)&v145 = sub_140C9A140(
                           v165,
                           (unsigned int)aIdeV1Messages,
                           17,
                           (unsigned int)&v105,
                           (__int64)&off_141A897B8);
      v155 = 1;
      v165 = v145;
      sub_140C6A340(&v105);
      v155 = 0;
      v138 = sub_140C9A140(v165, (unsigned int)aIdeV1Models, 15, (unsigned int)&v105, (__int64)&off_141A897E0);
      v154 = 1;
      v165 = v138;
      sub_140C6A620(&v105);
      v154 = 0;
      v139 = sub_140C9A140(v165, (unsigned int)aCodexRouterV1M, 23, (unsigned int)&v105, (__int64)&off_141A89810);
      v153 = 1;
      v165 = v139;
      sub_140C6AD50((__int64)&v105, v81);
      v153 = 0;
      v165 = sub_140C9A140(v165, (unsigned int)aCodexV1Respons, 27, (unsigned int)&v105, (__int64)&off_141A89848);
      v100 = v165;
      v162 = 1;
      sub_140C6AEC0((__int64)&v105, v82);
      v162 = 1;
      sub_140BF6020((__int64)&v94, &v105);
      v162 = 0;
      v165 = sub_140C9A140(v165, (unsigned int)aCodexRouterV1R, 26, (unsigned int)&v94, (__int64)&off_141A89880);
      v101 = v165;
      v161 = 1;
      sub_140C6B310((__int64)&v105, v83);
      v161 = 1;
      sub_140BF6020((__int64)&v94, &v105);
      v161 = 0;
      v102 = sub_140C9A140(v165, (unsigned int)aCodexRouterV1R_0, 34, (unsigned int)&v94, (__int64)&off_141A898C0);
      v152 = 1;
      v165 = v102;
      sub_140C6B1A0((__int64)&v105, v84);
      v152 = 0;
      v103 = sub_140C9A140(v165, (unsigned int)aCodexRouterV1I, 35, (unsigned int)&v105, (__int64)&off_141A89900);
      v151 = 1;
      v165 = v103;
      sub_140C6B030((__int64)&v105, v85);
      v151 = 0;
      v104 = sub_140C9A140(v165, (unsigned int)aCodexRouterV1I_0, 29, (unsigned int)&v105, (__int64)&off_141A89938);
      v150 = 1;
      v165 = v104;
      sub_140C6A4B0(&v105);
      v150 = 0;
      v86 = sub_140C9A140(v165, (unsigned int)aCodexRouterV1H, 23, (unsigned int)&v105, (__int64)&off_141A89968);
      v10 = v159;
      v147 = v159;
      v87 = sub_140BEF3F0(v86, 1, 0x20000000);
      *(_BYTE *)(v164 + 234) = 0;
      v107 = v99;
      v106 = v98;
      v105 = v97;
      v147 = v10;
      v88 = sub_140BEE710(v87, &v105);
      v3 = v164;
      *(_QWORD *)(v164 + 48) = v88;
      *(_BYTE *)(v3 + 233) = 1;
      *(_WORD *)(v3 + 218) = i;
      *(_WORD *)(v3 + 220) = v9;
      v133 = (_BYTE *)(v3 + 223);
      *(_BYTE *)(v3 + 223) = 0;
LABEL_81:
      *(_BYTE *)(v3 + 222) = 1;
      *(_QWORD *)(v3 + 120) = -1;
      v126 = v10;
      v146 = (_QWORD *)(v3 + 56);
      v125 = (_QWORD *)(v3 + 56);
      sub_140734800(&v105, (unsigned int)i, v9);
      v26 = *((__int16 **)&v105 + 1);
      v89 = v105;
      v90 = *((_QWORD *)&v105 + 1) + 2 * v106;
      v3 = v164;
      *(_QWORD *)(v164 + 56) = *((_QWORD *)&v105 + 1);
      *(_QWORD *)(v3 + 64) = v26;
      *(_OWORD *)(v3 + 72) = __PAIR128__(v90, v89);
      if ( v26 == (__int16 *)v90 )
        goto LABEL_82;
      break;
    case 1LL:
      sub_14196B990(&off_141A89108);
    case 2LL:
      sub_14196B9B0(&off_141A89108);
    case 3LL:
      v131 = (_BYTE *)(a2 + 228);
      v10 = a2 + 24;
      switch ( *(_BYTE *)(a2 + 228) )
      {
        case 0:
          v5 = *(volatile signed __int64 **)(a2 + 24);
          v6 = *(volatile signed __int64 **)(v3 + 32);
          v7 = *(volatile signed __int64 **)(v3 + 40);
          LODWORD(i) = *(unsigned __int16 *)(v3 + 224);
          v9 = *(unsigned __int16 *)(v3 + 226);
          goto LABEL_5;
        case 1:
          v115 = a2 + 24;
          sub_14196B990(&off_141A89980);
        case 2:
          v115 = a2 + 24;
          sub_14196B9B0(&off_141A89980);
        case 3:
          v133 = (_BYTE *)(a2 + 223);
          v18 = *(unsigned __int8 *)(a2 + 223);
          v146 = (_QWORD *)(a2 + 56);
          switch ( v18 )
          {
            case 0LL:
              LODWORD(i) = *(unsigned __int16 *)(a2 + 218);
              v9 = *(unsigned __int16 *)(a2 + 220);
              break;
            case 1LL:
              v117 = a2 + 24;
              v116 = v146;
              sub_14196B990(&off_141A896E0);
            case 2LL:
              v117 = a2 + 24;
              v116 = v146;
              sub_14196B9B0(&off_141A896E0);
            case 3LL:
              v19 = (_BYTE *)(a2 + 208);
              v20 = (_OWORD *)(a2 + 144);
              switch ( *(_BYTE *)(v3 + 208) )
              {
                case 0:
                  goto LABEL_34;
                case 1:
                  v124 = v3 + 24;
                  v123 = v146;
                  v122 = v3 + 144;
                  sub_14196B990(&off_141A886F8);
                case 2:
                  v124 = v3 + 24;
                  v123 = v146;
                  v122 = v3 + 144;
                  sub_14196B9B0(&off_141A886F8);
                case 3:
                  v21 = *(unsigned __int16 *)(v3 + 176);
                  *(_WORD *)(v3 + 176) = -2;
                  if ( (_WORD)v21 != 0xFFFE )
                    goto LABEL_14;
                  goto LABEL_35;
              }
          }
          goto LABEL_81;
      }
  }
  while ( 1 )
  {
    *(_QWORD *)(v3 + 64) = v26 + 1;
    v27 = *v26;
    *(_WORD *)(v3 + 216) = v27;
    *(_DWORD *)(v3 + 90) = 16777343;
    *(_WORD *)(v3 + 94) = v27;
    *(_WORD *)(v3 + 88) = 0;
    v20 = (_OWORD *)(v3 + 144);
    *(_OWORD *)(v3 + 160) = *(_OWORD *)(v3 + 104);
    *(_WORD *)(v3 + 144) = *(_WORD *)(v3 + 88);
    *(_DWORD *)(v3 + 146) = *(_DWORD *)(v3 + 90);
    *(_WORD *)(v3 + 150) = *(_WORD *)(v3 + 94);
    *(_QWORD *)(v3 + 152) = *(_QWORD *)(v3 + 96);
    v19 = (_BYTE *)(v3 + 208);
    *(_BYTE *)(v3 + 208) = 0;
LABEL_34:
    v28 = *v20;
    *(_OWORD *)(v3 + 192) = v20[1];
    *(_OWORD *)(v3 + 176) = v28;
    v21 = *(unsigned __int16 *)(v3 + 176);
    *(_WORD *)(v3 + 176) = -2;
    if ( (_WORD)v21 == 0xFFFE )
    {
LABEL_35:
      v132 = v19;
      v114 = v20;
      v159 = v10;
      sub_14196B590(aReadyPolledAft_10, 31, &off_141A8A980);
    }
LABEL_14:
    v159 = v10;
    v2 = *(_QWORD *)(v3 + 184);
    if ( (_WORD)v21 != 0xFFFF )
      break;
    i = *(_QWORD *)(v3 + 184);
LABEL_26:
    v24 = v164;
    *(_BYTE *)(v164 + 208) = 1;
    *(_QWORD *)&v144 = i;
    *(_QWORD *)&v105 = v24 + 88;
    *((_QWORD *)&v105 + 1) = sub_1416EA350;
    *(_QWORD *)&v106 = &v144;
    *((_QWORD *)&v106 + 1) = sub_1416EA080;
    sub_1416DAFA0(&v94, &unk_141A896F8, &v105);
    v134 = v94;
    *(_QWORD *)&v135 = v95;
    v25 = *(_QWORD *)(v24 + 120);
    if ( v25 != -1 && v25 )
      sub_140001660(*(_QWORD *)(v24 + 128), v25, 1);
    *(_BYTE *)(v24 + 222) = 1;
    *(_QWORD *)(v24 + 136) = v135;
    *(_OWORD *)(v24 + 120) = v134;
    v10 = v159;
    if ( (unsigned int)(v144 & 3) - 2 >= 2 && (v144 & 3) != 0 )
    {
      *((_QWORD *)&v105 + 1) = v144 - 1;
      LOBYTE(v105) = 3;
      v128 = v159;
      v127 = v146;
      sub_1416EBAD0((char *)&v105 + 8);
    }
    v3 = v164;
    v26 = *(__int16 **)(v164 + 64);
    if ( v26 == *(__int16 **)(v164 + 80) )
    {
LABEL_82:
      v91 = v146;
      v92 = v146[2];
      if ( v92 )
      {
        sub_140001660(*v146, 2 * v92, 2);
        v91 = v146;
      }
      *(_BYTE *)(v3 + 222) = 0;
      v13 = *(_QWORD *)(v3 + 120);
      v159 = v10;
      if ( v13 == -1 )
      {
        nullsub_1(v91, v92);
        v13 = 38;
        v93 = (volatile signed __int64 *)sub_140001650(38, 1);
        if ( !v93 )
        {
          v126 = v10;
          v125 = v146;
          sub_14196B2DB(1, 38);
        }
        v12 = v93;
        qmemcpy((void *)v93, "no free port available for relay proxy", 38);
        v14 = 38;
      }
      else
      {
        v12 = *(volatile signed __int64 **)(v3 + 128);
        v14 = *(_QWORD *)(v3 + 136);
      }
      *(_BYTE *)(v3 + 222) = 0;
      v22 = 2;
      goto LABEL_47;
    }
  }
  v132 = v19;
  v114 = v20;
  WORD6(v145) = *(_WORD *)(v3 + 182);
  DWORD2(v145) = *(_DWORD *)(v3 + 178);
  v144 = *(_OWORD *)(v3 + 192);
  for ( i = 0; ; i = v23 )
  {
    LOWORD(v165) = v21;
    if ( (_WORD)v21 == 2 )
    {
      if ( !i )
      {
        v129 = 0;
        LOBYTE(v21) = 20;
        i = sub_1416A8370(v21, aCouldNotResolv_3, 32);
      }
      goto LABEL_26;
    }
    LOWORD(v94) = v21;
    WORD3(v94) = WORD6(v145);
    *(_DWORD *)((char *)&v94 + 2) = DWORD2(v145);
    *((_QWORD *)&v94 + 1) = v2;
    v95 = v144;
    v129 = i;
    sub_141544180(&v105, &v94);
    v22 = v105;
    if ( (_QWORD)v105 != 2 )
      break;
    v23 = *((_QWORD *)&v105 + 1);
    if ( i )
    {
      v21 = (unsigned int)(i & 3) - 2;
      if ( (unsigned int)v21 >= 2 && (i & 3) != 0 )
      {
        *((_QWORD *)&v134 + 1) = i - 1;
        LOBYTE(v134) = 3;
        v129 = *((_QWORD *)&v105 + 1);
        sub_1416EBAD0((char *)&v134 + 8);
      }
    }
    LOWORD(v21) = 2;
  }
  if ( i && (unsigned int)(i & 3) - 2 >= 2 && (i & 3) != 0 )
  {
    *((_QWORD *)&v94 + 1) = i - 1;
    LOBYTE(v94) = 3;
    sub_1416EBAD0((char *)&v94 + 8);
  }
  v13 = *((_QWORD *)&v105 + 1);
  v14 = *((_QWORD *)&v106 + 1);
  v12 = (volatile signed __int64 *)v106;
  v2 = v107;
  *v132 = 1;
  if ( v22 != -1 )
  {
    LODWORD(i) = *(unsigned __int16 *)(v164 + 216);
    v29 = v146[2];
    if ( v29 )
      sub_140001660(*v146, 2 * v29, 2);
    v30 = v164;
    v31 = *(_QWORD *)(v164 + 120);
    if ( v31 != -1 && v31 )
      sub_140001660(*(_QWORD *)(v164 + 128), v31, 1);
    *(_BYTE *)(v30 + 222) = 0;
LABEL_47:
    *v133 = 1;
    v121 = v159;
    sub_140B6E700();
    if ( v22 == 2 )
    {
      v32 = _InterlockedDecrement64(*(volatile signed __int64 **)(v164 + 48));
      v10 = v159;
      if ( !v32 )
      {
        v147 = v159;
        sub_1411D98F0(v164 + 48);
      }
      v33 = v164;
      *(_WORD *)(v164 + 233) = 0;
      *(_BYTE *)(v33 + 235) = 0;
      if ( *(_BYTE *)(v33 + 229) )
      {
LABEL_51:
        if ( !_InterlockedDecrement64(v140) )
        {
          v137 = v10;
          sub_141258070(&v140);
        }
      }
LABEL_53:
      v34 = v164;
      *(_BYTE *)(v164 + 229) = 0;
      if ( *(_BYTE *)(v34 + 230) && !_InterlockedDecrement64(v141) )
      {
        v120 = v10;
        sub_140CA5BC0(&v141);
      }
      v35 = v164;
      *(_BYTE *)(v164 + 230) = 0;
      if ( *(_BYTE *)(v35 + 231) && !_InterlockedDecrement64(v142) )
      {
        v119 = v10;
        sub_140CA4070(&v142);
      }
      v36 = v164;
      *(_BYTE *)(v164 + 231) = 0;
      if ( *(_BYTE *)(v36 + 232) && !_InterlockedDecrement64(v143) )
      {
        v118 = v10;
        sub_140CA4600((__int64 *)&v143);
      }
      *(_BYTE *)(v164 + 232) = 0;
      v37 = 1;
    }
    else
    {
      *(_QWORD *)&v134 = v22;
      *((_QWORD *)&v134 + 1) = v13;
      *(_QWORD *)&v135 = v12;
      *((_QWORD *)&v135 + 1) = v14;
      v136 = v2;
      v41 = v164;
      *(_BYTE *)(v164 + 233) = 0;
      *(_QWORD *)&v94 = *(_QWORD *)(v41 + 48);
      v160 = 1;
      sub_141537C10(&v105, 32);
      nullsub_1(v43, v42);
      v44 = sub_140001650(56, 8);
      if ( !v44 )
      {
        v160 = 1;
        sub_14196B2C1(8, 56);
      }
      *(_QWORD *)v44 = 1;
      *(_QWORD *)(v44 + 8) = 1;
      *(_QWORD *)(v44 + 48) = v107;
      v45 = v105;
      *(_OWORD *)(v44 + 32) = v106;
      *(_OWORD *)(v44 + 16) = v45;
      v160 = 0;
      v139 = sub_140BF0020(v94, v44, (unsigned int)i);
      *(_QWORD *)&v105 = 1;
      *((_QWORD *)&v105 + 1) = 1;
      *(_QWORD *)&v108 = 0;
      BYTE8(v108) = 0;
      nullsub_1(v47, v46);
      v48 = sub_140001650(64, 8);
      if ( !v48 )
        sub_14196B2C1(8, 64);
      v51 = v105;
      v52 = v106;
      v53 = v107;
      *(_OWORD *)(v48 + 48) = v108;
      *(_OWORD *)(v48 + 32) = v53;
      *(_OWORD *)(v48 + 16) = v52;
      *(_OWORD *)v48 = v51;
      if ( _InterlockedIncrement64((volatile signed __int64 *)v48) <= 0 )
        goto LABEL_105;
      v138 = v48;
      *(_QWORD *)&v145 = v48;
      nullsub_1(v50, v49);
      v54 = sub_140001650(24, 8);
      if ( !v54 )
      {
        v149 = 1;
        v148 = 1;
        sub_14196B2C1(8, 24);
      }
      *(_QWORD *)v54 = 1;
      *(_QWORD *)(v54 + 8) = 1;
      *(_BYTE *)(v54 + 16) = 1;
      *((_QWORD *)&v145 + 1) = v54;
      if ( _InterlockedIncrement64((volatile signed __int64 *)v54) <= 0 )
LABEL_105:
        BUG();
      *(_QWORD *)&v107 = v136;
      v106 = v135;
      v105 = v134;
      *((_QWORD *)&v107 + 1) = v139;
      *((_QWORD *)&v108 + 1) = v145;
      *(_QWORD *)&v108 = v54;
      v110 = i;
      v111 = 0;
      v166 = 1;
      v55 = sub_140C696B0(&v105, &off_141A89998);
      v166 = 1;
      if ( (unsigned __int8)sub_141532BE0(v55) )
      {
        v166 = 1;
        sub_1415334F0(v55);
      }
      v56 = v138;
      *(_QWORD *)&v144 = 1;
      *((_QWORD *)&v144 + 1) = v138;
      sub_141537C10(&v94, 1);
      *(_QWORD *)&v108 = v96;
      v107 = v95;
      v106 = v94;
      *(_QWORD *)&v105 = 1;
      *((_QWORD *)&v105 + 1) = 1;
      *((_QWORD *)&v108 + 1) = 1;
      v109 = v56;
      nullsub_1(v58, v57);
      v59 = sub_140001650(72, 8);
      if ( !v59 )
        sub_14196B2C1(8, 72);
      v13 = v59;
      *(_QWORD *)(v59 + 64) = v109;
      v60 = v105;
      v61 = v106;
      v62 = v107;
      *(_OWORD *)(v59 + 48) = v108;
      *(_OWORD *)(v59 + 32) = v62;
      *(_OWORD *)(v59 + 16) = v61;
      *(_OWORD *)v59 = v60;
      v12 = *((volatile signed __int64 **)&v145 + 1);
      v14 = (unsigned __int16)i;
      v63 = v164;
      *(_WORD *)(v164 + 233) = 0;
      *(_BYTE *)(v63 + 235) = 0;
      *(_DWORD *)(v63 + 229) = 0;
      v37 = 0;
      v10 = v159;
    }
    v38 = v113;
    *v113 = v37;
    v38[1] = v13;
    v38[2] = (__int64)v12;
    v38[3] = v14;
    *v131 = 1;
    v39 = 1;
    sub_140B6E820(v10);
    goto LABEL_64;
  }
  *v133 = 3;
  *v131 = 3;
  *v113 = 2;
  v39 = 3;
LABEL_64:
  result = v164;
  *(_BYTE *)(v164 + 244) = v39;
  return result;
}
