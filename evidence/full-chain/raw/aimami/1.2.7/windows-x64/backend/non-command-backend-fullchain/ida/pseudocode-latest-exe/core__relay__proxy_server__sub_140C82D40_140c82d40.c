// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x140c82d40 | successor of pre-update 0x1409bb2b0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_140C82D40(volatile signed __int64 *a1, __int64 a2)
{
  volatile signed __int64 *v2; // r13
  __int64 v3; // rax
  volatile signed __int64 *v4; // r13
  volatile signed __int64 *v5; // rax
  volatile signed __int64 *v6; // rcx
  __int64 i; // rdi
  unsigned int v8; // ebx
  __int64 v9; // r12
  __int64 v10; // r9
  volatile signed __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  volatile signed __int64 *v17; // rax
  _QWORD *v18; // r8
  _BYTE *v19; // r9
  _OWORD *v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // esi
  int v31; // r14d
  int v32; // r13d
  unsigned int v33; // eax
  __int64 v34; // r12
  unsigned int v35; // r15d
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int16 *v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  volatile signed __int64 *v55; // rax
  volatile signed __int64 *v56; // rcx
  __int64 v57; // r12
  _BYTE *v58; // rsi
  __int64 v59; // rax
  _QWORD *v60; // rcx
  char v61; // bl
  __int64 result; // rax
  __int128 v63; // xmm0
  __int64 v64; // r13
  __int64 v65; // r12
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int16 v68; // ax
  __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rdx
  signed __int64 v72; // rt0
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int128 v78; // xmm0
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm2
  __int64 v96; // rax
  __int128 v97; // [rsp+30h] [rbp-50h] BYREF
  __int128 v98; // [rsp+40h] [rbp-40h]
  __int64 v99; // [rsp+50h] [rbp-30h]
  _QWORD v100[14]; // [rsp+198h] [rbp+118h] BYREF
  __int64 v101; // [rsp+208h] [rbp+188h]
  __int64 v102; // [rsp+210h] [rbp+190h]
  __int64 v103; // [rsp+218h] [rbp+198h]
  __int128 v104; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v105; // [rsp+230h] [rbp+1B0h]
  __int128 v106; // [rsp+240h] [rbp+1C0h]
  __int128 v107; // [rsp+250h] [rbp+1D0h]
  __int64 v108; // [rsp+260h] [rbp+1E0h]
  __int16 v109; // [rsp+270h] [rbp+1F0h]
  char v110; // [rsp+272h] [rbp+1F2h]
  volatile signed __int64 *v111; // [rsp+390h] [rbp+310h]
  volatile signed __int64 *v112; // [rsp+398h] [rbp+318h] BYREF
  volatile signed __int64 *v113; // [rsp+3A0h] [rbp+320h] BYREF
  volatile signed __int64 *v114; // [rsp+3A8h] [rbp+328h] BYREF
  _QWORD *v115; // [rsp+3B0h] [rbp+330h]
  _OWORD *v116; // [rsp+3B8h] [rbp+338h]
  __int64 v117; // [rsp+3C0h] [rbp+340h]
  __int64 v118; // [rsp+3C8h] [rbp+348h]
  __int64 v119; // [rsp+3D0h] [rbp+350h]
  volatile signed __int64 *v120; // [rsp+3D8h] [rbp+358h]
  volatile signed __int64 *v121; // [rsp+3E0h] [rbp+360h]
  volatile signed __int64 *v122; // [rsp+3E8h] [rbp+368h]
  __int64 v123; // [rsp+3F0h] [rbp+370h]
  __int64 v124; // [rsp+3F8h] [rbp+378h]
  _QWORD *v125; // [rsp+400h] [rbp+380h]
  __int64 v126; // [rsp+408h] [rbp+388h]
  volatile signed __int64 *v127; // [rsp+410h] [rbp+390h]
  volatile signed __int64 *v128; // [rsp+418h] [rbp+398h]
  volatile signed __int64 *v129; // [rsp+420h] [rbp+3A0h]
  _QWORD *v130; // [rsp+428h] [rbp+3A8h]
  __int64 v131; // [rsp+430h] [rbp+3B0h]
  volatile signed __int64 *v132; // [rsp+438h] [rbp+3B8h]
  volatile signed __int64 *v133; // [rsp+440h] [rbp+3C0h]
  volatile signed __int64 *v134; // [rsp+448h] [rbp+3C8h]
  _QWORD *v135; // [rsp+450h] [rbp+3D0h]
  __int64 v136; // [rsp+458h] [rbp+3D8h]
  __int64 v137; // [rsp+460h] [rbp+3E0h]
  volatile signed __int64 *v138; // [rsp+468h] [rbp+3E8h]
  volatile signed __int64 *v139; // [rsp+470h] [rbp+3F0h]
  volatile signed __int64 *v140; // [rsp+478h] [rbp+3F8h]
  __int64 v141; // [rsp+480h] [rbp+400h]
  _BYTE *v142; // [rsp+488h] [rbp+408h]
  _BYTE *v143; // [rsp+490h] [rbp+410h]
  _BYTE *v144; // [rsp+498h] [rbp+418h]
  __int128 v145; // [rsp+4A0h] [rbp+420h] BYREF
  __int128 v146; // [rsp+4B0h] [rbp+430h]
  volatile signed __int64 *v147; // [rsp+4C0h] [rbp+440h]
  volatile signed __int64 *v148; // [rsp+4C8h] [rbp+448h]
  volatile signed __int64 *v149; // [rsp+4D0h] [rbp+450h]
  volatile signed __int64 *v150; // [rsp+4D8h] [rbp+458h]
  __int64 v151; // [rsp+4E0h] [rbp+460h]
  __int64 v152; // [rsp+508h] [rbp+488h]
  __int64 v153; // [rsp+510h] [rbp+490h]
  volatile signed __int64 *v154; // [rsp+518h] [rbp+498h] BYREF
  __int128 v155; // [rsp+520h] [rbp+4A0h] BYREF
  __int64 v156; // [rsp+538h] [rbp+4B8h]
  volatile signed __int64 *v157; // [rsp+540h] [rbp+4C0h]
  _QWORD *v158; // [rsp+548h] [rbp+4C8h]
  volatile signed __int64 *v159; // [rsp+550h] [rbp+4D0h]
  volatile signed __int64 *v160; // [rsp+558h] [rbp+4D8h]
  volatile signed __int64 *v161; // [rsp+560h] [rbp+4E0h]
  __int64 v162; // [rsp+568h] [rbp+4E8h]
  char v163; // [rsp+575h] [rbp+4F5h]
  char v164; // [rsp+576h] [rbp+4F6h]
  char v165; // [rsp+577h] [rbp+4F7h]
  char v166; // [rsp+578h] [rbp+4F8h]
  char v167; // [rsp+579h] [rbp+4F9h]
  char v168; // [rsp+57Ah] [rbp+4FAh]
  char v169; // [rsp+57Bh] [rbp+4FBh]
  char v170; // [rsp+57Ch] [rbp+4FCh]
  char v171; // [rsp+57Dh] [rbp+4FDh]
  char v172; // [rsp+57Eh] [rbp+4FEh]
  char v173; // [rsp+57Fh] [rbp+4FFh]
  volatile signed __int64 *v174; // [rsp+580h] [rbp+500h]
  __int64 v175; // [rsp+588h] [rbp+508h]
  __int64 v176; // [rsp+590h] [rbp+510h]
  char v177; // [rsp+59Ch] [rbp+51Ch]
  char v178; // [rsp+59Dh] [rbp+51Dh]
  char v179; // [rsp+59Eh] [rbp+51Eh]
  char v180; // [rsp+59Fh] [rbp+51Fh]
  volatile signed __int64 *v181; // [rsp+5A0h] [rbp+520h]
  volatile signed __int64 *v182; // [rsp+5A8h] [rbp+528h]
  __int64 v183; // [rsp+5B0h] [rbp+530h]
  char v184; // [rsp+5BFh] [rbp+53Fh]
  __int64 v185; // [rsp+5C0h] [rbp+540h]

  v185 = -2;
  v115 = a1;
  v3 = *(unsigned __int8 *)(a2 + 244);
  v176 = a2;
  switch ( v3 )
  {
    case 0LL:
      v4 = *(volatile signed __int64 **)a2;
      v5 = *(volatile signed __int64 **)(a2 + 8);
      v6 = *(volatile signed __int64 **)(a2 + 16);
      LODWORD(i) = *(unsigned __int16 *)(a2 + 240);
      v8 = *(unsigned __int16 *)(a2 + 242);
      v9 = a2 + 24;
      *(_QWORD *)(a2 + 24) = *(_QWORD *)a2;
      *(_QWORD *)(a2 + 32) = v5;
      *(_QWORD *)(a2 + 40) = v6;
      *(_WORD *)(a2 + 224) = i;
      *(_WORD *)(a2 + 226) = v8;
      v142 = (_BYTE *)(a2 + 228);
      *(_BYTE *)(a2 + 228) = 0;
LABEL_5:
      *(_DWORD *)(a2 + 232) = 0;
      *(_DWORD *)(a2 + 229) = 0;
      *(_BYTE *)(a2 + 232) = 1;
      v114 = v4;
      *(_BYTE *)(a2 + 231) = 1;
      v113 = v5;
      *(_BYTE *)(a2 + 230) = 1;
      v112 = v6;
      v151 = v9;
      v181 = v6;
      v150 = v6;
      v182 = v5;
      v149 = v5;
      v148 = v4;
      sub_140BE02C0(&v104, 300, 0, 0);
      v11 = *((volatile signed __int64 **)&v104 + 1);
      v12 = v104;
      if ( (_QWORD)v104 != -1 )
      {
        v13 = v105;
        goto LABEL_44;
      }
      *(_BYTE *)(v176 + 229) = 1;
      v154 = v11;
      v141 = v9;
      v140 = v181;
      v139 = v182;
      v138 = v4;
      LOBYTE(v10) = 1;
      sub_140BE02C0(&v104, 300, 0, v10);
      v11 = *((volatile signed __int64 **)&v104 + 1);
      v12 = v104;
      if ( (_QWORD)v104 != -1 )
      {
        v13 = v105;
        v16 = v176;
        *(_BYTE *)(v176 + 235) = 0;
        if ( !*(_BYTE *)(v16 + 229) )
          goto LABEL_44;
        goto LABEL_42;
      }
      v21 = v176;
      *(_BYTE *)(v176 + 235) = 1;
      v111 = v11;
      v156 = (__int64)v4;
      v157 = v182;
      *(_QWORD *)&v155 = v181;
      *(_DWORD *)(v21 + 229) = 0;
      *(_QWORD *)&v104 = 1;
      *((_QWORD *)&v104 + 1) = 1;
      *(_QWORD *)&v105 = 0;
      BYTE8(v105) = 0;
      *(_QWORD *)&v106 = v154;
      nullsub_1(v15, v14);
      v22 = sub_140001650(40, 8);
      v175 = v9;
      v174 = v4;
      if ( !v22 )
        sub_14196B2C1(8, 40);
      v24 = v106;
      *(_QWORD *)(v22 + 32) = v106;
      v25 = v104;
      *(_OWORD *)(v22 + 16) = v105;
      *(_OWORD *)v22 = v25;
      v183 = v22;
      *(_QWORD *)&v145 = v22;
      *(_BYTE *)(v21 + 235) = 0;
      *(_QWORD *)&v104 = 1;
      *((_QWORD *)&v104 + 1) = 1;
      *(_QWORD *)&v105 = 0;
      BYTE8(v105) = 0;
      *(_QWORD *)&v106 = v11;
      nullsub_1(v24, v23);
      v26 = sub_140001650(40, 8);
      if ( !v26 )
        sub_14196B2C1(8, 40);
      *(_QWORD *)(v26 + 32) = v106;
      v27 = v104;
      *(_OWORD *)(v26 + 16) = v105;
      *(_OWORD *)v26 = v27;
      v158 = (_QWORD *)v26;
      *(_QWORD *)&v97 = v26;
      sub_1414331D0(&v104);
      v30 = v104;
      v31 = ((int)v104 >> 13) - 1;
      v32 = 0;
      if ( (int)v104 >> 13 <= 0 )
      {
        v33 = (1 - ((int)v104 >> 13)) / 0x190u + 1;
        v29 = 400 * v33;
        v31 += v29;
        v32 = -146097 * v33;
      }
      v34 = DWORD1(v104);
      v35 = DWORD2(v104);
      nullsub_1(v29, v28);
      v36 = (_QWORD *)sub_140001650(24, 8);
      if ( !v36 )
        sub_14196B2C1(8, 24);
      *v36 = 1;
      v36[1] = 1;
      v36[2] = 1000
             * (v34
              + 86400LL
              * (int)(((v31 / 100) >> 2) + v32 + ((v30 >> 4) & 0x1FF) - v31 / 100 + ((1461 * v31) >> 2) - 719163))
             + v35 / 0xF4240uLL;
      *(_BYTE *)(v176 + 234) = 1;
      v100[0] = v174;
      v100[1] = v182;
      v100[2] = v181;
      v100[3] = v183;
      v100[4] = v158;
      v100[5] = v36;
      v162 = v175;
      v161 = v181;
      v160 = v182;
      v159 = v174;
      *(_QWORD *)&v97 = sub_140C97CF0();
      v173 = 1;
      v183 = v97;
      sub_140C6A790(&v104);
      v173 = 0;
      *(_QWORD *)&v145 = sub_140C9A140(
                           v183,
                           (unsigned int)aAimamiHealth_0,
                           16,
                           (unsigned int)&v104,
                           (__int64)&off_141A8D910);
      v172 = 1;
      v183 = v145;
      sub_140C6ABE0((__int64)&v104, v37);
      v172 = 0;
      v183 = sub_140C9A140(v183, (unsigned int)aIdeV1ChatCompl_0, 25, (unsigned int)&v104, (__int64)&off_141A8D948);
      *(_QWORD *)&v155 = v183;
      v180 = 1;
      sub_140C6AA70((__int64)&v104, v38);
      v180 = 1;
      sub_140BF6020((__int64)&v97, &v104);
      v180 = 0;
      v157 = (volatile signed __int64 *)sub_140C9A140(
                                          v183,
                                          (unsigned int)aIdeV1Responses_0,
                                          18,
                                          (unsigned int)&v97,
                                          (__int64)&off_141A8D978);
      v171 = 1;
      v183 = (__int64)v157;
      sub_140C6A900(&v104);
      v171 = 0;
      v156 = sub_140C9A140(v183, (unsigned int)aIdeV1Messages_0, 17, (unsigned int)&v104, (__int64)&off_141A8D9A8);
      v170 = 1;
      v183 = v156;
      sub_140C6A340(&v104);
      v170 = 0;
      v152 = sub_140C9A140(v183, (unsigned int)aIdeV1Models_0, 15, (unsigned int)&v104, (__int64)&off_141A8D9D0);
      v169 = 1;
      v183 = v152;
      sub_140C6A620(&v104);
      v169 = 0;
      v153 = sub_140C9A140(v183, (unsigned int)aCodexRouterV1M_0, 23, (unsigned int)&v104, (__int64)&off_141A8DA00);
      v168 = 1;
      v183 = v153;
      sub_140C6AD50((__int64)&v104, v39);
      v168 = 0;
      v183 = sub_140C9A140(v183, (unsigned int)aCodexV1Respons_0, 27, (unsigned int)&v104, (__int64)&off_141A8DA38);
      v100[12] = v183;
      v179 = 1;
      sub_140C6AEC0((__int64)&v104, v40);
      v179 = 1;
      sub_140BF6020((__int64)&v97, &v104);
      v179 = 0;
      v183 = sub_140C9A140(v183, (unsigned int)aCodexRouterV1R_1, 26, (unsigned int)&v97, (__int64)&off_141A8DA70);
      v100[13] = v183;
      v178 = 1;
      sub_140C6B310((__int64)&v104, v41);
      v178 = 1;
      sub_140BF6020((__int64)&v97, &v104);
      v178 = 0;
      v101 = sub_140C9A140(v183, (unsigned int)aCodexRouterV1R_2, 34, (unsigned int)&v97, (__int64)&off_141A8DAB0);
      v167 = 1;
      v183 = v101;
      sub_140C6B1A0((__int64)&v104, v42);
      v167 = 0;
      v102 = sub_140C9A140(v183, (unsigned int)aCodexRouterV1I_1, 35, (unsigned int)&v104, (__int64)&off_141A8DAF0);
      v166 = 1;
      v183 = v102;
      sub_140C6B030((__int64)&v104, v43);
      v166 = 0;
      v103 = sub_140C9A140(v183, (unsigned int)aCodexRouterV1I_2, 29, (unsigned int)&v104, (__int64)&off_141A8DB28);
      v165 = 1;
      v183 = v103;
      sub_140C6A4B0(&v104);
      v165 = 0;
      v44 = sub_140C9A140(v183, (unsigned int)aCodexRouterV1H_0, 23, (unsigned int)&v104, (__int64)&off_141A8DB58);
      v9 = v175;
      v162 = v175;
      v161 = v181;
      v160 = v182;
      v2 = v174;
      v159 = v174;
      v45 = sub_140BEF3F0(v44, 1, 0x20000000);
      *(_BYTE *)(v176 + 234) = 0;
      v162 = v9;
      v161 = v181;
      v160 = v182;
      v159 = v2;
      v46 = sub_140BEE710(v45, v100);
      a2 = v176;
      *(_QWORD *)(v176 + 48) = v46;
      *(_BYTE *)(a2 + 233) = 1;
      *(_WORD *)(a2 + 218) = i;
      *(_WORD *)(a2 + 220) = v8;
      v144 = (_BYTE *)(a2 + 223);
      *(_BYTE *)(a2 + 223) = 0;
      v18 = (_QWORD *)(a2 + 56);
      v17 = v182;
      a1 = v181;
LABEL_19:
      *(_BYTE *)(a2 + 222) = 1;
      *(_QWORD *)(a2 + 120) = -1;
      v131 = v9;
      v158 = v18;
      v130 = v18;
      v129 = v2;
      v182 = v17;
      v128 = v17;
      v181 = a1;
      v127 = a1;
      sub_140734800(&v104, (unsigned int)i, v8);
      v47 = *((__int16 **)&v104 + 1);
      v48 = v104;
      v49 = *((_QWORD *)&v104 + 1) + 2 * v105;
      v50 = v176;
      *(_QWORD *)(v176 + 56) = *((_QWORD *)&v104 + 1);
      *(_QWORD *)(v50 + 64) = v47;
      *(_OWORD *)(v50 + 72) = __PAIR128__(v49, v48);
      a2 = v50;
      if ( v47 == (__int16 *)v49 )
        goto LABEL_20;
      break;
    case 1LL:
      sub_14196B990(&off_141A8D328);
    case 2LL:
      sub_14196B9B0(&off_141A8D328);
    case 3LL:
      v142 = (_BYTE *)(a2 + 228);
      v9 = a2 + 24;
      switch ( *(_BYTE *)(a2 + 228) )
      {
        case 0:
          v4 = *(volatile signed __int64 **)(a2 + 24);
          v5 = *(volatile signed __int64 **)(a2 + 32);
          v6 = *(volatile signed __int64 **)(a2 + 40);
          LODWORD(i) = *(unsigned __int16 *)(a2 + 224);
          v8 = *(unsigned __int16 *)(a2 + 226);
          goto LABEL_5;
        case 1:
          v117 = a2 + 24;
          sub_14196B990(&off_141A8DB70);
        case 2:
          v117 = a2 + 24;
          sub_14196B9B0(&off_141A8DB70);
        case 3:
          v17 = (volatile signed __int64 *)*(unsigned __int8 *)(a2 + 223);
          v18 = (_QWORD *)(a2 + 56);
          v144 = (_BYTE *)(a2 + 223);
          switch ( (unsigned __int64)v17 )
          {
            case 0uLL:
              LODWORD(i) = *(unsigned __int16 *)(a2 + 218);
              v8 = *(unsigned __int16 *)(a2 + 220);
              break;
            case 1uLL:
              v119 = a2 + 24;
              v118 = a2 + 56;
              sub_14196B990(&off_141A8D8D0);
            case 2uLL:
              v119 = a2 + 24;
              v118 = a2 + 56;
              sub_14196B9B0(&off_141A8D8D0);
            case 3uLL:
              v158 = (_QWORD *)(a2 + 56);
              v19 = (_BYTE *)(a2 + 208);
              v20 = (_OWORD *)(a2 + 144);
              switch ( *(_BYTE *)(a2 + 208) )
              {
                case 0:
                  goto LABEL_56;
                case 1:
                  v126 = a2 + 24;
                  v125 = v158;
                  v124 = a2 + 144;
                  sub_14196B990(&off_141A8C880);
                case 2:
                  v126 = a2 + 24;
                  v125 = v158;
                  v124 = a2 + 144;
                  sub_14196B9B0(&off_141A8C880);
                case 3:
                  v54 = *(unsigned __int16 *)(a2 + 176);
                  *(_WORD *)(a2 + 176) = -2;
                  if ( (_WORD)v54 == 0xFFFE )
                    goto LABEL_25;
                  goto LABEL_57;
              }
          }
          goto LABEL_19;
      }
  }
  while ( 1 )
  {
    *(_QWORD *)(a2 + 64) = v47 + 1;
    v68 = *v47;
    *(_WORD *)(a2 + 216) = v68;
    *(_DWORD *)(a2 + 90) = 16777343;
    *(_WORD *)(a2 + 94) = v68;
    *(_WORD *)(a2 + 88) = 0;
    v20 = (_OWORD *)(a2 + 144);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a2 + 104);
    *(_WORD *)(a2 + 144) = *(_WORD *)(a2 + 88);
    *(_DWORD *)(a2 + 146) = *(_DWORD *)(a2 + 90);
    *(_WORD *)(a2 + 150) = *(_WORD *)(a2 + 94);
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 96);
    v19 = (_BYTE *)(a2 + 208);
    *(_BYTE *)(a2 + 208) = 0;
LABEL_56:
    v63 = *v20;
    *(_OWORD *)(a2 + 192) = v20[1];
    *(_OWORD *)(a2 + 176) = v63;
    v54 = *(unsigned __int16 *)(a2 + 176);
    *(_WORD *)(a2 + 176) = -2;
    if ( (_WORD)v54 == 0xFFFE )
    {
LABEL_25:
      v143 = v19;
      v116 = v20;
      v174 = v2;
      v175 = v9;
      sub_14196B590(aReadyPolledAft_0, 31, &off_141A8F310);
    }
LABEL_57:
    v174 = v2;
    v175 = v9;
    v64 = *(_QWORD *)(a2 + 184);
    if ( (_WORD)v54 != 0xFFFF )
      break;
    i = *(_QWORD *)(a2 + 184);
LABEL_69:
    v66 = v176;
    *(_BYTE *)(v176 + 208) = 1;
    *(_QWORD *)&v155 = i;
    *(_QWORD *)&v104 = v66 + 88;
    *((_QWORD *)&v104 + 1) = sub_1416EA350;
    *(_QWORD *)&v105 = &v155;
    *((_QWORD *)&v105 + 1) = sub_1416EA080;
    sub_1416DAFA0(&v97, &unk_141A8D8E8, &v104);
    v145 = v97;
    *(_QWORD *)&v146 = v98;
    v67 = *(_QWORD *)(v66 + 120);
    if ( v67 != -1 && v67 )
      sub_140001660(*(_QWORD *)(v66 + 128), v67, 1);
    *(_BYTE *)(v66 + 222) = 1;
    *(_QWORD *)(v66 + 136) = v146;
    *(_OWORD *)(v66 + 120) = v145;
    v9 = v175;
    v2 = v174;
    if ( (unsigned int)(v155 & 3) - 2 >= 2 && (v155 & 3) != 0 )
    {
      *((_QWORD *)&v104 + 1) = v155 - 1;
      LOBYTE(v104) = 3;
      v136 = v175;
      v135 = v158;
      v134 = v174;
      v133 = v182;
      v132 = v181;
      sub_1416EBAD0((char *)&v104 + 8);
    }
    a2 = v176;
    v47 = *(__int16 **)(v176 + 64);
    v49 = *(_QWORD *)(v176 + 80);
    if ( v47 == (__int16 *)v49 )
    {
LABEL_20:
      v51 = a2;
      v52 = v158[2];
      if ( v52 )
        sub_140001660(*v158, 2 * v52, 2);
      *(_BYTE *)(v51 + 222) = 0;
      v12 = *(_QWORD *)(v51 + 120);
      v175 = v9;
      v174 = v2;
      if ( v12 == -1 )
      {
        nullsub_1(v49, v52);
        v12 = 38;
        v55 = (volatile signed __int64 *)sub_140001650(38, 1);
        if ( !v55 )
        {
          v131 = v9;
          v130 = v158;
          v129 = v2;
          v128 = v182;
          v127 = v181;
          sub_14196B2DB(1, 38);
        }
        v11 = v55;
        qmemcpy((void *)v55, "no free port available for relay proxy", 38);
        v13 = 38;
        v53 = v51;
      }
      else
      {
        v53 = v51;
        v11 = *(volatile signed __int64 **)(v51 + 128);
        v13 = *(_QWORD *)(v51 + 136);
      }
      v56 = v182;
      *(_BYTE *)(v53 + 222) = 0;
      v57 = 2;
      goto LABEL_88;
    }
  }
  v143 = v19;
  v116 = v20;
  WORD2(v157) = *(_WORD *)(a2 + 182);
  LODWORD(v157) = *(_DWORD *)(a2 + 178);
  v155 = *(_OWORD *)(a2 + 192);
  for ( i = 0; ; i = v65 )
  {
    LOWORD(v183) = v54;
    if ( (_WORD)v54 == 2 )
    {
      if ( !i )
      {
        v137 = 0;
        LOBYTE(v54) = 20;
        i = sub_1416A8370(v54, aCouldNotResolv, 32);
      }
      goto LABEL_69;
    }
    LOWORD(v97) = v54;
    WORD3(v97) = WORD2(v157);
    *(_DWORD *)((char *)&v97 + 2) = (_DWORD)v157;
    *((_QWORD *)&v97 + 1) = v64;
    v98 = v155;
    v137 = i;
    sub_141544180(&v104, &v97);
    v57 = v104;
    if ( (_QWORD)v104 != 2 )
      break;
    v65 = *((_QWORD *)&v104 + 1);
    if ( i )
    {
      v54 = (unsigned int)(i & 3) - 2;
      if ( (unsigned int)v54 >= 2 && (i & 3) != 0 )
      {
        *((_QWORD *)&v145 + 1) = i - 1;
        LOBYTE(v145) = 3;
        v137 = *((_QWORD *)&v104 + 1);
        sub_1416EBAD0((char *)&v145 + 8);
      }
    }
    LOWORD(v54) = 2;
  }
  if ( i && (unsigned int)(i & 3) - 2 >= 2 && (i & 3) != 0 )
  {
    *((_QWORD *)&v97 + 1) = i - 1;
    LOBYTE(v97) = 3;
    sub_1416EBAD0((char *)&v97 + 8);
  }
  v12 = *((_QWORD *)&v104 + 1);
  v13 = *((_QWORD *)&v105 + 1);
  v11 = (volatile signed __int64 *)v105;
  v2 = (volatile signed __int64 *)v106;
  *v143 = 1;
  if ( v57 != -1 )
  {
    LODWORD(i) = *(unsigned __int16 *)(v176 + 216);
    v69 = v158[2];
    if ( v69 )
      sub_140001660(*v158, 2 * v69, 2);
    v70 = v176;
    v71 = *(_QWORD *)(v176 + 120);
    if ( v71 != -1 && v71 )
      sub_140001660(*(_QWORD *)(v176 + 128), v71, 1);
    *(_BYTE *)(v70 + 222) = 0;
    v56 = v182;
LABEL_88:
    *v144 = 1;
    v123 = v175;
    v122 = v174;
    v182 = v56;
    v121 = v56;
    v120 = v181;
    sub_140B6E700(v158);
    if ( v57 != 2 )
    {
      *(_QWORD *)&v145 = v57;
      *((_QWORD *)&v145 + 1) = v12;
      *(_QWORD *)&v146 = v11;
      *((_QWORD *)&v146 + 1) = v13;
      v147 = v2;
      v74 = v176;
      *(_BYTE *)(v176 + 233) = 0;
      *(_QWORD *)&v97 = *(_QWORD *)(v74 + 48);
      v177 = 1;
      sub_141537C10(&v104, 32);
      nullsub_1(v76, v75);
      v77 = sub_140001650(56, 8);
      if ( !v77 )
      {
        v177 = 1;
        sub_14196B2C1(8, 56);
      }
      *(_QWORD *)v77 = 1;
      *(_QWORD *)(v77 + 8) = 1;
      *(_QWORD *)(v77 + 48) = v106;
      v78 = v104;
      *(_OWORD *)(v77 + 32) = v105;
      *(_OWORD *)(v77 + 16) = v78;
      v177 = 0;
      v153 = sub_140BF0020(v97, v77, (unsigned int)i);
      *(_QWORD *)&v104 = 1;
      *((_QWORD *)&v104 + 1) = 1;
      *(_QWORD *)&v107 = 0;
      BYTE8(v107) = 0;
      nullsub_1(v80, v79);
      v81 = sub_140001650(64, 8);
      if ( !v81 )
        sub_14196B2C1(8, 64);
      v84 = v104;
      v85 = v105;
      v86 = v106;
      *(_OWORD *)(v81 + 48) = v107;
      *(_OWORD *)(v81 + 32) = v86;
      *(_OWORD *)(v81 + 16) = v85;
      *(_OWORD *)v81 = v84;
      if ( _InterlockedIncrement64((volatile signed __int64 *)v81) <= 0 )
        goto LABEL_41;
      v152 = v81;
      v156 = v81;
      nullsub_1(v83, v82);
      v87 = sub_140001650(24, 8);
      if ( !v87 )
      {
        v164 = 1;
        v163 = 1;
        sub_14196B2C1(8, 24);
      }
      *(_QWORD *)v87 = 1;
      *(_QWORD *)(v87 + 8) = 1;
      *(_BYTE *)(v87 + 16) = 1;
      v157 = (volatile signed __int64 *)v87;
      if ( _InterlockedIncrement64((volatile signed __int64 *)v87) <= 0 )
LABEL_41:
        BUG();
      *(_QWORD *)&v106 = v147;
      v105 = v146;
      v104 = v145;
      *((_QWORD *)&v106 + 1) = v153;
      *((_QWORD *)&v107 + 1) = v156;
      *(_QWORD *)&v107 = v87;
      v109 = i;
      v110 = 0;
      v184 = 1;
      v88 = sub_140C696B0(&v104, &off_141A8DB88);
      v184 = 1;
      if ( (unsigned __int8)sub_141532BE0(v88) )
      {
        v184 = 1;
        sub_1415334F0(v88);
      }
      v89 = v152;
      *(_QWORD *)&v155 = 1;
      *((_QWORD *)&v155 + 1) = v152;
      sub_141537C10(&v97, 1);
      *(_QWORD *)&v107 = v99;
      v106 = v98;
      v105 = v97;
      *(_QWORD *)&v104 = 1;
      *((_QWORD *)&v104 + 1) = 1;
      *((_QWORD *)&v107 + 1) = 1;
      v108 = v89;
      nullsub_1(v91, v90);
      v92 = sub_140001650(72, 8);
      if ( !v92 )
        sub_14196B2C1(8, 72);
      v12 = v92;
      *(_QWORD *)(v92 + 64) = v108;
      v93 = v104;
      v94 = v105;
      v95 = v106;
      *(_OWORD *)(v92 + 48) = v107;
      *(_OWORD *)(v92 + 32) = v95;
      *(_OWORD *)(v92 + 16) = v94;
      *(_OWORD *)v92 = v93;
      v11 = v157;
      v13 = (unsigned __int16)i;
      v96 = v176;
      *(_WORD *)(v176 + 233) = 0;
      *(_BYTE *)(v96 + 235) = 0;
      *(_DWORD *)(v96 + 229) = 0;
      v59 = 0;
      v9 = v175;
      goto LABEL_54;
    }
    v72 = _InterlockedDecrement64(*(volatile signed __int64 **)(v176 + 48));
    v9 = v175;
    v4 = v174;
    if ( !v72 )
    {
      v162 = v175;
      v161 = v181;
      v160 = v182;
      v159 = v174;
      sub_1411D98F0(v176 + 48);
    }
    v73 = v176;
    *(_WORD *)(v176 + 233) = 0;
    *(_BYTE *)(v73 + 235) = 0;
    if ( !*(_BYTE *)(v73 + 229) )
    {
LABEL_44:
      v58 = (_BYTE *)v176;
      *(_BYTE *)(v176 + 229) = 0;
      if ( v58[230] && !_InterlockedDecrement64(v181) )
        sub_140CA5BC0(&v112);
      v58[230] = 0;
      if ( v58[231] && !_InterlockedDecrement64(v182) )
        sub_140CA4070(&v113);
      v58[231] = 0;
      if ( v58[232] && !_InterlockedDecrement64(v4) )
        sub_140CA4600((__int64 *)&v114);
      v58[232] = 0;
      v59 = 1;
LABEL_54:
      v60 = v115;
      *v115 = v59;
      v60[1] = v12;
      v60[2] = v11;
      v60[3] = v13;
      *v142 = 1;
      v61 = 1;
      sub_140C3ED70(v9);
      goto LABEL_55;
    }
LABEL_42:
    if ( !_InterlockedDecrement64(v154) )
    {
      v151 = v9;
      v150 = v181;
      v149 = v182;
      v148 = v4;
      sub_141258070(&v154);
    }
    goto LABEL_44;
  }
  *v144 = 3;
  *v142 = 3;
  *v115 = 2;
  v61 = 3;
LABEL_55:
  result = v176;
  *(_BYTE *)(v176 + 244) = v61;
  return result;
}
