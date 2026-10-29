// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1409bb2b0 | name sub_1409BB2B0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409BB2B0(volatile signed __int64 *a1, __int64 a2)
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
  __int64 v14; // rcx
  __int64 v15; // rax
  volatile signed __int64 *v16; // rax
  _QWORD *v17; // r8
  _BYTE *v18; // r9
  _OWORD *v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  _QWORD *v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // rcx
  unsigned int v27; // esi
  int v28; // r14d
  int v29; // r13d
  unsigned int v30; // eax
  __int64 v31; // r12
  unsigned int v32; // r15d
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int16 *v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  volatile signed __int64 *v45; // rax
  volatile signed __int64 *v46; // rcx
  __int64 v47; // r12
  _BYTE *v48; // rsi
  __int64 v49; // rax
  _QWORD *v50; // rcx
  char v51; // bl
  __int64 result; // rax
  __int128 v53; // xmm0
  __int64 v54; // r13
  __int64 v55; // r12
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int16 v58; // ax
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rdx
  signed __int64 v62; // rt0
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int128 v67; // xmm0
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // r8
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rax
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  __int64 v83; // rax
  __int128 v84; // [rsp+28h] [rbp-58h]
  __int128 v85; // [rsp+38h] [rbp-48h]
  __int128 v86; // [rsp+48h] [rbp-38h]
  __int64 v87; // [rsp+88h] [rbp+8h]
  __int64 v88; // [rsp+90h] [rbp+10h]
  __int64 v89; // [rsp+98h] [rbp+18h]
  __int64 v90; // [rsp+A0h] [rbp+20h]
  __int64 v91; // [rsp+A8h] [rbp+28h]
  __int128 v92; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v93; // [rsp+C0h] [rbp+40h]
  __int128 v94; // [rsp+D0h] [rbp+50h]
  __int128 v95; // [rsp+E0h] [rbp+60h]
  __int64 v96; // [rsp+F0h] [rbp+70h]
  __int16 v97; // [rsp+100h] [rbp+80h]
  char v98; // [rsp+102h] [rbp+82h]
  volatile signed __int64 *v99; // [rsp+218h] [rbp+198h]
  volatile signed __int64 *v100; // [rsp+220h] [rbp+1A0h] BYREF
  volatile signed __int64 *v101; // [rsp+228h] [rbp+1A8h] BYREF
  volatile signed __int64 *v102; // [rsp+230h] [rbp+1B0h] BYREF
  _QWORD *v103; // [rsp+238h] [rbp+1B8h]
  _OWORD *v104; // [rsp+240h] [rbp+1C0h]
  __int64 v105; // [rsp+248h] [rbp+1C8h]
  __int64 v106; // [rsp+250h] [rbp+1D0h]
  __int64 v107; // [rsp+258h] [rbp+1D8h]
  __int64 v108; // [rsp+260h] [rbp+1E0h]
  volatile signed __int64 *v109; // [rsp+268h] [rbp+1E8h]
  volatile signed __int64 *v110; // [rsp+270h] [rbp+1F0h]
  volatile signed __int64 *v111; // [rsp+278h] [rbp+1F8h]
  __int64 v112; // [rsp+280h] [rbp+200h]
  __int64 v113; // [rsp+288h] [rbp+208h]
  _QWORD *v114; // [rsp+290h] [rbp+210h]
  __int64 v115; // [rsp+298h] [rbp+218h]
  volatile signed __int64 *v116; // [rsp+2A0h] [rbp+220h]
  volatile signed __int64 *v117; // [rsp+2A8h] [rbp+228h]
  volatile signed __int64 *v118; // [rsp+2B0h] [rbp+230h]
  _QWORD *v119; // [rsp+2B8h] [rbp+238h]
  __int64 v120; // [rsp+2C0h] [rbp+240h]
  volatile signed __int64 *v121; // [rsp+2C8h] [rbp+248h]
  volatile signed __int64 *v122; // [rsp+2D0h] [rbp+250h]
  volatile signed __int64 *v123; // [rsp+2D8h] [rbp+258h]
  _QWORD *v124; // [rsp+2E0h] [rbp+260h]
  __int64 v125; // [rsp+2E8h] [rbp+268h]
  __int64 v126; // [rsp+2F0h] [rbp+270h]
  volatile signed __int64 *v127; // [rsp+2F8h] [rbp+278h]
  volatile signed __int64 *v128; // [rsp+300h] [rbp+280h]
  volatile signed __int64 *v129; // [rsp+308h] [rbp+288h]
  __int64 v130; // [rsp+310h] [rbp+290h]
  _BYTE *v131; // [rsp+318h] [rbp+298h]
  _BYTE *v132; // [rsp+320h] [rbp+2A0h]
  _BYTE *v133; // [rsp+328h] [rbp+2A8h]
  __int128 v134; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v135; // [rsp+340h] [rbp+2C0h]
  volatile signed __int64 *v136; // [rsp+350h] [rbp+2D0h]
  __int128 v137; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v138; // [rsp+370h] [rbp+2F0h]
  __int64 v139; // [rsp+380h] [rbp+300h]
  volatile signed __int64 *v140; // [rsp+388h] [rbp+308h]
  volatile signed __int64 *v141; // [rsp+390h] [rbp+310h]
  volatile signed __int64 *v142; // [rsp+398h] [rbp+318h]
  __int64 v143; // [rsp+3A0h] [rbp+320h]
  __int64 v144; // [rsp+3C8h] [rbp+348h]
  __int64 v145; // [rsp+3D0h] [rbp+350h]
  volatile signed __int64 *v146; // [rsp+3D8h] [rbp+358h] BYREF
  __int128 v147; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v148; // [rsp+3F8h] [rbp+378h]
  volatile signed __int64 *v149; // [rsp+400h] [rbp+380h]
  _QWORD *v150; // [rsp+408h] [rbp+388h]
  volatile signed __int64 *v151; // [rsp+410h] [rbp+390h]
  volatile signed __int64 *v152; // [rsp+418h] [rbp+398h]
  volatile signed __int64 *v153; // [rsp+420h] [rbp+3A0h]
  __int64 v154; // [rsp+428h] [rbp+3A8h]
  char v155; // [rsp+432h] [rbp+3B2h]
  char v156; // [rsp+433h] [rbp+3B3h]
  char v157; // [rsp+434h] [rbp+3B4h]
  char v158; // [rsp+435h] [rbp+3B5h]
  char v159; // [rsp+436h] [rbp+3B6h]
  char v160; // [rsp+437h] [rbp+3B7h]
  char v161; // [rsp+438h] [rbp+3B8h]
  char v162; // [rsp+439h] [rbp+3B9h]
  char v163; // [rsp+43Ah] [rbp+3BAh]
  char v164; // [rsp+43Bh] [rbp+3BBh]
  char v165; // [rsp+43Ch] [rbp+3BCh]
  char v166; // [rsp+43Dh] [rbp+3BDh]
  char v167; // [rsp+43Eh] [rbp+3BEh]
  char v168; // [rsp+43Fh] [rbp+3BFh]
  __int64 v169; // [rsp+440h] [rbp+3C0h]
  volatile signed __int64 *v170; // [rsp+448h] [rbp+3C8h]
  char v171; // [rsp+457h] [rbp+3D7h]
  __int64 v172; // [rsp+458h] [rbp+3D8h]
  volatile signed __int64 *v173; // [rsp+460h] [rbp+3E0h]
  volatile signed __int64 *v174; // [rsp+468h] [rbp+3E8h]
  __int64 v175; // [rsp+470h] [rbp+3F0h]
  char v176; // [rsp+47Fh] [rbp+3FFh]
  __int64 v177; // [rsp+480h] [rbp+400h]

  v177 = -2;
  v103 = a1;
  v3 = *(unsigned __int8 *)(a2 + 244);
  v172 = a2;
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
      v131 = (_BYTE *)(a2 + 228);
      *(_BYTE *)(a2 + 228) = 0;
LABEL_5:
      *(_DWORD *)(a2 + 232) = 0;
      *(_DWORD *)(a2 + 229) = 0;
      *(_BYTE *)(a2 + 232) = 1;
      v102 = v4;
      *(_BYTE *)(a2 + 231) = 1;
      v101 = v5;
      *(_BYTE *)(a2 + 230) = 1;
      v100 = v6;
      v143 = v9;
      v173 = v6;
      v142 = v6;
      v174 = v5;
      v141 = v5;
      v140 = v4;
      sub_141011400(&v92, 300, 0, 0);
      v11 = *((volatile signed __int64 **)&v92 + 1);
      v12 = v92;
      if ( (_QWORD)v92 != -1 )
      {
        v13 = v93;
        goto LABEL_44;
      }
      *(_BYTE *)(v172 + 229) = 1;
      v146 = v11;
      v130 = v9;
      v129 = v173;
      v128 = v174;
      v127 = v4;
      LOBYTE(v10) = 1;
      sub_141011400(&v92, 300, 0, v10);
      v11 = *((volatile signed __int64 **)&v92 + 1);
      v12 = v92;
      if ( (_QWORD)v92 != -1 )
      {
        v13 = v93;
        v15 = v172;
        *(_BYTE *)(v172 + 235) = 0;
        if ( !*(_BYTE *)(v15 + 229) )
          goto LABEL_44;
        goto LABEL_42;
      }
      v20 = v172;
      *(_BYTE *)(v172 + 235) = 1;
      v99 = v11;
      v148 = (__int64)v4;
      v149 = v174;
      *(_QWORD *)&v147 = v173;
      *(_DWORD *)(v20 + 229) = 0;
      *(_QWORD *)&v92 = 1;
      *((_QWORD *)&v92 + 1) = 1;
      *(_QWORD *)&v93 = 0;
      BYTE8(v93) = 0;
      *(_QWORD *)&v94 = v146;
      nullsub_1(v14);
      v21 = sub_140001650(40, 8);
      v169 = v9;
      v170 = v4;
      if ( !v21 )
        sub_141938D11(8, 40);
      v22 = v94;
      *(_QWORD *)(v21 + 32) = v94;
      v23 = v92;
      *(_OWORD *)(v21 + 16) = v93;
      *(_OWORD *)v21 = v23;
      v175 = v21;
      *(_QWORD *)&v134 = v21;
      *(_BYTE *)(v20 + 235) = 0;
      *(_QWORD *)&v92 = 1;
      *((_QWORD *)&v92 + 1) = 1;
      *(_QWORD *)&v93 = 0;
      BYTE8(v93) = 0;
      *(_QWORD *)&v94 = v11;
      nullsub_1(v22);
      v24 = (_QWORD *)sub_140001650(40, 8);
      if ( !v24 )
        sub_141938D11(8, 40);
      v24[4] = v94;
      v25 = v92;
      *((_OWORD *)v24 + 1) = v93;
      *(_OWORD *)v24 = v25;
      v150 = v24;
      *(_QWORD *)&v137 = v24;
      sub_141406CE0(&v92);
      v27 = v92;
      v28 = ((int)v92 >> 13) - 1;
      v29 = 0;
      if ( (int)v92 >> 13 <= 0 )
      {
        v30 = (1 - ((int)v92 >> 13)) / 0x190u + 1;
        v26 = 400 * v30;
        v28 += v26;
        v29 = -146097 * v30;
      }
      v31 = DWORD1(v92);
      v32 = DWORD2(v92);
      nullsub_1(v26);
      v33 = (_QWORD *)sub_140001650(24, 8);
      if ( !v33 )
        sub_141938D11(8, 24);
      *v33 = 1;
      v33[1] = 1;
      v33[2] = 1000
             * (v31
              + 86400LL
              * (int)(((v28 / 100) >> 2) + v29 + ((v27 >> 4) & 0x1FF) - v28 / 100 + ((1461 * v28) >> 2) - 719163))
             + v32 / 0xF4240uLL;
      *(_BYTE *)(v172 + 234) = 1;
      *(_QWORD *)&v84 = v170;
      *((_QWORD *)&v84 + 1) = v174;
      *(_QWORD *)&v85 = v173;
      *((_QWORD *)&v85 + 1) = v175;
      *(_QWORD *)&v86 = v150;
      *((_QWORD *)&v86 + 1) = v33;
      v154 = v169;
      v153 = v173;
      v152 = v174;
      v151 = v170;
      *(_QWORD *)&v137 = sub_140D7AD70();
      v168 = 1;
      v175 = v137;
      sub_140D21210(&v92);
      v168 = 0;
      *(_QWORD *)&v134 = sub_140D7D400(
                           v175,
                           (unsigned int)aAimamiHealth_0,
                           16,
                           (unsigned int)&v92,
                           (__int64)&off_141A269F8);
      v167 = 1;
      v175 = v134;
      sub_140D21660(&v92);
      v167 = 0;
      *(_QWORD *)&v147 = sub_140D7D400(
                           v175,
                           (unsigned int)aIdeV1ChatCompl_0,
                           25,
                           (unsigned int)&v92,
                           (__int64)&off_141A26A30);
      v166 = 1;
      v175 = v147;
      sub_140D214F0(&v92);
      v166 = 0;
      v149 = (volatile signed __int64 *)sub_140D7D400(
                                          v175,
                                          (unsigned int)aIdeV1Responses_0,
                                          18,
                                          (unsigned int)&v92,
                                          (__int64)&off_141A26A60);
      v165 = 1;
      v175 = (__int64)v149;
      sub_140D21380(&v92);
      v165 = 0;
      v148 = sub_140D7D400(v175, (unsigned int)aIdeV1Messages_0, 17, (unsigned int)&v92, (__int64)&off_141A26A90);
      v164 = 1;
      v175 = v148;
      sub_140D20DC0(&v92);
      v164 = 0;
      v144 = sub_140D7D400(v175, (unsigned int)aIdeV1Models_0, 15, (unsigned int)&v92, (__int64)&off_141A26AB8);
      v163 = 1;
      v175 = v144;
      sub_140D210A0(&v92);
      v163 = 0;
      v145 = sub_140D7D400(v175, (unsigned int)aCodexRouterV1M_0, 23, (unsigned int)&v92, (__int64)&off_141A26AE8);
      v162 = 1;
      v175 = v145;
      sub_140D217D0(&v92);
      v162 = 0;
      v87 = sub_140D7D400(v175, (unsigned int)aCodexV1Respons_0, 27, (unsigned int)&v92, (__int64)&off_141A26B20);
      v161 = 1;
      v175 = v87;
      sub_140D21940(&v92);
      v161 = 0;
      v88 = sub_140D7D400(v175, (unsigned int)aCodexRouterV1R_1, 26, (unsigned int)&v92, (__int64)&off_141A26B58);
      v160 = 1;
      v175 = v88;
      sub_140D21D90(&v92);
      v160 = 0;
      v89 = sub_140D7D400(v175, (unsigned int)aCodexRouterV1R_2, 34, (unsigned int)&v92, (__int64)&off_141A26B98);
      v159 = 1;
      v175 = v89;
      sub_140D21C20(&v92);
      v159 = 0;
      v90 = sub_140D7D400(v175, (unsigned int)aCodexRouterV1I_1, 35, (unsigned int)&v92, (__int64)&off_141A26BD8);
      v158 = 1;
      v175 = v90;
      sub_140D21AB0(&v92);
      v158 = 0;
      v91 = sub_140D7D400(v175, (unsigned int)aCodexRouterV1I_2, 29, (unsigned int)&v92, (__int64)&off_141A26C10);
      v157 = 1;
      v175 = v91;
      sub_140D20F30(&v92);
      v157 = 0;
      v34 = sub_140D7D400(v175, (unsigned int)aCodexRouterV1H_0, 23, (unsigned int)&v92, (__int64)&off_141A26C40);
      v9 = v169;
      v154 = v169;
      v153 = v173;
      v152 = v174;
      v2 = v170;
      v151 = v170;
      v35 = sub_140CA9DF0(v34, 1, 0x20000000);
      *(_BYTE *)(v172 + 234) = 0;
      v94 = v86;
      v93 = v85;
      v92 = v84;
      v154 = v9;
      v153 = v173;
      v152 = v174;
      v151 = v2;
      v36 = sub_140CA9490(v35, &v92);
      a2 = v172;
      *(_QWORD *)(v172 + 48) = v36;
      *(_BYTE *)(a2 + 233) = 1;
      *(_WORD *)(a2 + 218) = i;
      *(_WORD *)(a2 + 220) = v8;
      v133 = (_BYTE *)(a2 + 223);
      *(_BYTE *)(a2 + 223) = 0;
      v17 = (_QWORD *)(a2 + 56);
      v16 = v174;
      a1 = v173;
LABEL_19:
      *(_BYTE *)(a2 + 222) = 1;
      *(_QWORD *)(a2 + 120) = -1;
      v120 = v9;
      v150 = v17;
      v119 = v17;
      v118 = v2;
      v174 = v16;
      v117 = v16;
      v173 = a1;
      v116 = a1;
      sub_140DAD390(&v92, (unsigned int)i, v8);
      v37 = *((__int16 **)&v92 + 1);
      v38 = v92;
      v39 = *((_QWORD *)&v92 + 1) + 2 * v93;
      v40 = v172;
      *(_QWORD *)(v172 + 56) = *((_QWORD *)&v92 + 1);
      *(_QWORD *)(v40 + 64) = v37;
      *(_OWORD *)(v40 + 72) = __PAIR128__(v39, v38);
      a2 = v40;
      if ( v37 == (__int16 *)v39 )
        goto LABEL_20;
      break;
    case 1LL:
      sub_1419393E0(&off_141A263B8);
    case 2LL:
      sub_141939400(&off_141A263B8);
    case 3LL:
      v131 = (_BYTE *)(a2 + 228);
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
          v105 = a2 + 24;
          sub_1419393E0(&off_141A26C58);
        case 2:
          v105 = a2 + 24;
          sub_141939400(&off_141A26C58);
        case 3:
          v16 = (volatile signed __int64 *)*(unsigned __int8 *)(a2 + 223);
          v17 = (_QWORD *)(a2 + 56);
          v133 = (_BYTE *)(a2 + 223);
          switch ( (unsigned __int64)v16 )
          {
            case 0uLL:
              LODWORD(i) = *(unsigned __int16 *)(a2 + 218);
              v8 = *(unsigned __int16 *)(a2 + 220);
              break;
            case 1uLL:
              v107 = a2 + 24;
              v106 = a2 + 56;
              sub_1419393E0(&off_141A269B8);
            case 2uLL:
              v107 = a2 + 24;
              v106 = a2 + 56;
              sub_141939400(&off_141A269B8);
            case 3uLL:
              v150 = (_QWORD *)(a2 + 56);
              v18 = (_BYTE *)(a2 + 208);
              v19 = (_OWORD *)(a2 + 144);
              switch ( *(_BYTE *)(a2 + 208) )
              {
                case 0:
                  goto LABEL_56;
                case 1:
                  v115 = a2 + 24;
                  v114 = v150;
                  v113 = a2 + 144;
                  sub_1419393E0(&off_141A25920);
                case 2:
                  v115 = a2 + 24;
                  v114 = v150;
                  v113 = a2 + 144;
                  sub_141939400(&off_141A25920);
                case 3:
                  v44 = *(unsigned __int16 *)(a2 + 176);
                  *(_WORD *)(a2 + 176) = -2;
                  if ( (_WORD)v44 == 0xFFFE )
                    goto LABEL_25;
                  goto LABEL_57;
              }
          }
          goto LABEL_19;
      }
  }
  while ( 1 )
  {
    *(_QWORD *)(a2 + 64) = v37 + 1;
    v58 = *v37;
    *(_WORD *)(a2 + 216) = v58;
    *(_DWORD *)(a2 + 90) = 16777343;
    *(_WORD *)(a2 + 94) = v58;
    *(_WORD *)(a2 + 88) = 0;
    v19 = (_OWORD *)(a2 + 144);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a2 + 104);
    *(_WORD *)(a2 + 144) = *(_WORD *)(a2 + 88);
    *(_DWORD *)(a2 + 146) = *(_DWORD *)(a2 + 90);
    *(_WORD *)(a2 + 150) = *(_WORD *)(a2 + 94);
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 96);
    v18 = (_BYTE *)(a2 + 208);
    *(_BYTE *)(a2 + 208) = 0;
LABEL_56:
    v53 = *v19;
    *(_OWORD *)(a2 + 192) = v19[1];
    *(_OWORD *)(a2 + 176) = v53;
    v44 = *(unsigned __int16 *)(a2 + 176);
    *(_WORD *)(a2 + 176) = -2;
    if ( (_WORD)v44 == 0xFFFE )
    {
LABEL_25:
      v132 = v18;
      v104 = v19;
      v170 = v2;
      v169 = v9;
      sub_141938FE0(aReadyPolledAft_1, 31, &off_141A27410);
    }
LABEL_57:
    v170 = v2;
    v169 = v9;
    v54 = *(_QWORD *)(a2 + 184);
    if ( (_WORD)v44 != 0xFFFF )
      break;
    i = *(_QWORD *)(a2 + 184);
LABEL_69:
    v56 = v172;
    *(_BYTE *)(v172 + 208) = 1;
    *(_QWORD *)&v147 = i;
    *(_QWORD *)&v92 = v56 + 88;
    *((_QWORD *)&v92 + 1) = sub_1416BB380;
    *(_QWORD *)&v93 = &v147;
    *((_QWORD *)&v93 + 1) = sub_1416BB0B0;
    sub_1416ABFD0(&v137, &unk_141A269D0, &v92);
    v134 = v137;
    *(_QWORD *)&v135 = v138;
    v57 = *(_QWORD *)(v56 + 120);
    if ( v57 != -1 && v57 )
      sub_140001660(*(_QWORD *)(v56 + 128), v57, 1);
    *(_BYTE *)(v56 + 222) = 1;
    *(_QWORD *)(v56 + 136) = v135;
    *(_OWORD *)(v56 + 120) = v134;
    v9 = v169;
    v2 = v170;
    if ( (unsigned int)(v147 & 3) - 2 >= 2 && (v147 & 3) != 0 )
    {
      *((_QWORD *)&v92 + 1) = v147 - 1;
      LOBYTE(v92) = 3;
      v125 = v169;
      v124 = v150;
      v123 = v170;
      v122 = v174;
      v121 = v173;
      sub_1416BCB00((char *)&v92 + 8);
    }
    a2 = v172;
    v37 = *(__int16 **)(v172 + 64);
    v39 = *(_QWORD *)(v172 + 80);
    if ( v37 == (__int16 *)v39 )
    {
LABEL_20:
      v41 = a2;
      v42 = v150[2];
      if ( v42 )
        sub_140001660(*v150, 2 * v42, 2);
      *(_BYTE *)(v41 + 222) = 0;
      v12 = *(_QWORD *)(v41 + 120);
      v169 = v9;
      v170 = v2;
      if ( v12 == -1 )
      {
        nullsub_1(v39);
        v12 = 38;
        v45 = (volatile signed __int64 *)sub_140001650(38, 1);
        if ( !v45 )
        {
          v120 = v9;
          v119 = v150;
          v118 = v2;
          v117 = v174;
          v116 = v173;
          sub_141938D2B(1, 38);
        }
        v11 = v45;
        qmemcpy((void *)v45, "no free port available for relay proxy", 38);
        v13 = 38;
        v43 = v41;
      }
      else
      {
        v43 = v41;
        v11 = *(volatile signed __int64 **)(v41 + 128);
        v13 = *(_QWORD *)(v41 + 136);
      }
      v46 = v174;
      *(_BYTE *)(v43 + 222) = 0;
      v47 = 2;
      goto LABEL_88;
    }
  }
  v132 = v18;
  v104 = v19;
  WORD2(v149) = *(_WORD *)(a2 + 182);
  LODWORD(v149) = *(_DWORD *)(a2 + 178);
  v147 = *(_OWORD *)(a2 + 192);
  for ( i = 0; ; i = v55 )
  {
    LOWORD(v175) = v44;
    if ( (_WORD)v44 == 2 )
    {
      if ( !i )
      {
        v126 = 0;
        LOBYTE(v44) = 20;
        i = sub_1416793A0(v44, aCouldNotResolv_0, 32);
      }
      goto LABEL_69;
    }
    LOWORD(v137) = v44;
    WORD3(v137) = WORD2(v149);
    *(_DWORD *)((char *)&v137 + 2) = (_DWORD)v149;
    *((_QWORD *)&v137 + 1) = v54;
    v138 = v147;
    v126 = i;
    sub_14150E5E0(&v92, &v137);
    v47 = v92;
    if ( (_QWORD)v92 != 2 )
      break;
    v55 = *((_QWORD *)&v92 + 1);
    if ( i )
    {
      v44 = (unsigned int)(i & 3) - 2;
      if ( (unsigned int)v44 >= 2 && (i & 3) != 0 )
      {
        *((_QWORD *)&v134 + 1) = i - 1;
        LOBYTE(v134) = 3;
        v126 = *((_QWORD *)&v92 + 1);
        sub_1416BCB00((char *)&v134 + 8);
      }
    }
    LOWORD(v44) = 2;
  }
  if ( i && (unsigned int)(i & 3) - 2 >= 2 && (i & 3) != 0 )
  {
    *((_QWORD *)&v137 + 1) = i - 1;
    LOBYTE(v137) = 3;
    sub_1416BCB00((char *)&v137 + 8);
  }
  v12 = *((_QWORD *)&v92 + 1);
  v13 = *((_QWORD *)&v93 + 1);
  v11 = (volatile signed __int64 *)v93;
  v2 = (volatile signed __int64 *)v94;
  *v132 = 1;
  if ( v47 != -1 )
  {
    LODWORD(i) = *(unsigned __int16 *)(v172 + 216);
    v59 = v150[2];
    if ( v59 )
      sub_140001660(*v150, 2 * v59, 2);
    v60 = v172;
    v61 = *(_QWORD *)(v172 + 120);
    if ( v61 != -1 && v61 )
      sub_140001660(*(_QWORD *)(v172 + 128), v61, 1);
    *(_BYTE *)(v60 + 222) = 0;
    v46 = v174;
LABEL_88:
    *v133 = 1;
    v112 = v169;
    v111 = v170;
    v174 = v46;
    v110 = v46;
    v109 = v173;
    sub_1404071A0((__int64)v150);
    if ( v47 != 2 )
    {
      *(_QWORD *)&v134 = v47;
      *((_QWORD *)&v134 + 1) = v12;
      *(_QWORD *)&v135 = v11;
      *((_QWORD *)&v135 + 1) = v13;
      v136 = v2;
      v64 = v172;
      *(_BYTE *)(v172 + 233) = 0;
      *(_QWORD *)&v137 = *(_QWORD *)(v64 + 48);
      v171 = 1;
      sub_1414FE5D0(&v92, 32, &off_141A49CF0);
      nullsub_1(v65);
      v66 = sub_140001650(56, 8);
      if ( !v66 )
      {
        v171 = 1;
        sub_141938D11(8, 56);
      }
      *(_QWORD *)v66 = 1;
      *(_QWORD *)(v66 + 8) = 1;
      *(_QWORD *)(v66 + 48) = v94;
      v67 = v92;
      *(_OWORD *)(v66 + 32) = v93;
      *(_OWORD *)(v66 + 16) = v67;
      v171 = 0;
      v145 = sub_140CAA6D0(v137, v66, (unsigned int)i);
      *(_QWORD *)&v92 = 1;
      *((_QWORD *)&v92 + 1) = 1;
      *(_QWORD *)&v95 = 0;
      BYTE8(v95) = 0;
      nullsub_1(v68);
      v69 = sub_140001650(64, 8);
      if ( !v69 )
        sub_141938D11(8, 64);
      v71 = v92;
      v72 = v93;
      v73 = v94;
      *(_OWORD *)(v69 + 48) = v95;
      *(_OWORD *)(v69 + 32) = v73;
      *(_OWORD *)(v69 + 16) = v72;
      *(_OWORD *)v69 = v71;
      if ( _InterlockedIncrement64((volatile signed __int64 *)v69) <= 0 )
        goto LABEL_41;
      v144 = v69;
      v148 = v69;
      nullsub_1(v70);
      v74 = sub_140001650(24, 8);
      if ( !v74 )
      {
        v156 = 1;
        v155 = 1;
        sub_141938D11(8, 24);
      }
      *(_QWORD *)v74 = 1;
      *(_QWORD *)(v74 + 8) = 1;
      *(_BYTE *)(v74 + 16) = 1;
      v149 = (volatile signed __int64 *)v74;
      if ( _InterlockedIncrement64((volatile signed __int64 *)v74) <= 0 )
LABEL_41:
        BUG();
      *(_QWORD *)&v94 = v136;
      v93 = v135;
      v92 = v134;
      *((_QWORD *)&v94 + 1) = v145;
      *((_QWORD *)&v95 + 1) = v148;
      *(_QWORD *)&v95 = v74;
      v97 = i;
      v98 = 0;
      v176 = 1;
      v75 = sub_1409B7140(&v92, &off_141A26C70);
      v176 = 1;
      if ( (unsigned __int8)sub_1414FCFD0(v75) )
      {
        v176 = 1;
        sub_1414FD8E0(v75);
      }
      v77 = v144;
      *(_QWORD *)&v147 = 1;
      *((_QWORD *)&v147 + 1) = v144;
      sub_1414FE5D0(&v137, 1, v76);
      *(_QWORD *)&v95 = v139;
      v94 = v138;
      v93 = v137;
      *(_QWORD *)&v92 = 1;
      *((_QWORD *)&v92 + 1) = 1;
      *((_QWORD *)&v95 + 1) = 1;
      v96 = v77;
      nullsub_1(v78);
      v79 = sub_140001650(72, 8);
      if ( !v79 )
        sub_141938D11(8, 72);
      v12 = v79;
      *(_QWORD *)(v79 + 64) = v96;
      v80 = v92;
      v81 = v93;
      v82 = v94;
      *(_OWORD *)(v79 + 48) = v95;
      *(_OWORD *)(v79 + 32) = v82;
      *(_OWORD *)(v79 + 16) = v81;
      *(_OWORD *)v79 = v80;
      v11 = v149;
      v13 = (unsigned __int16)i;
      v83 = v172;
      *(_WORD *)(v172 + 233) = 0;
      *(_BYTE *)(v83 + 235) = 0;
      *(_DWORD *)(v83 + 229) = 0;
      v49 = 0;
      v9 = v169;
      goto LABEL_54;
    }
    v62 = _InterlockedDecrement64(*(volatile signed __int64 **)(v172 + 48));
    v9 = v169;
    v4 = v170;
    if ( !v62 )
    {
      v154 = v169;
      v153 = v173;
      v152 = v174;
      v151 = v170;
      sub_1411B2910(v172 + 48);
    }
    v63 = v172;
    *(_WORD *)(v172 + 233) = 0;
    *(_BYTE *)(v63 + 235) = 0;
    if ( !*(_BYTE *)(v63 + 229) )
    {
LABEL_44:
      v48 = (_BYTE *)v172;
      *(_BYTE *)(v172 + 229) = 0;
      if ( v48[230] && !_InterlockedDecrement64(v173) )
        sub_1409E5ED0(&v100);
      v48[230] = 0;
      if ( v48[231] && !_InterlockedDecrement64(v174) )
        sub_1409E4860(&v101);
      v48[231] = 0;
      if ( v48[232] && !_InterlockedDecrement64(v4) )
      {
        v108 = v9;
        sub_1409E4DF0(&v102);
      }
      *(_BYTE *)(v172 + 232) = 0;
      v49 = 1;
LABEL_54:
      v50 = v103;
      *v103 = v49;
      v50[1] = v12;
      v50[2] = v11;
      v50[3] = v13;
      *v131 = 1;
      v51 = 1;
      sub_1409933C0(v9);
      goto LABEL_55;
    }
LABEL_42:
    if ( !_InterlockedDecrement64(v146) )
    {
      v143 = v9;
      v142 = v173;
      v141 = v174;
      v140 = v4;
      sub_141242F50(&v146);
    }
    goto LABEL_44;
  }
  *v133 = 3;
  *v131 = 3;
  *v103 = 2;
  v51 = 3;
LABEL_55:
  result = v172;
  *(_BYTE *)(v172 + 244) = v51;
  return result;
}
