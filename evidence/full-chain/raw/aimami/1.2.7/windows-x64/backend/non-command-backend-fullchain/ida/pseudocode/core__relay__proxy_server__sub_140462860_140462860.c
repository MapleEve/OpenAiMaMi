// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140462860 | name sub_140462860
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140462860(__int64 *a1, __int64 a2)
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
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE *v18; // r8
  _OWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int16 *v25; // rax
  __int16 v26; // ax
  __int128 v27; // xmm0
  __int64 v28; // rcx
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
  __int64 v42; // rcx
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rax
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rcx
  __int128 v64; // xmm0
  __int64 v65; // rax
  __int128 v66; // xmm0
  __int64 v67; // rcx
  unsigned int v68; // esi
  int v69; // r14d
  unsigned int v70; // eax
  __int64 v71; // r12
  unsigned int v72; // r15d
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  volatile signed __int64 *v80; // rax
  __int128 v81; // [rsp+28h] [rbp-58h]
  __int128 v82; // [rsp+38h] [rbp-48h]
  __int128 v83; // [rsp+48h] [rbp-38h]
  __int64 v84; // [rsp+58h] [rbp-28h]
  __int64 v85; // [rsp+60h] [rbp-20h]
  __int64 v86; // [rsp+68h] [rbp-18h]
  __int64 v87; // [rsp+70h] [rbp-10h]
  __int64 v88; // [rsp+78h] [rbp-8h]
  __int128 v89; // [rsp+80h] [rbp+0h] BYREF
  __int128 v90; // [rsp+90h] [rbp+10h]
  __int128 v91; // [rsp+A0h] [rbp+20h]
  __int128 v92; // [rsp+B0h] [rbp+30h]
  __int64 v93; // [rsp+C0h] [rbp+40h]
  __int16 v94; // [rsp+D0h] [rbp+50h]
  char v95; // [rsp+D2h] [rbp+52h]
  volatile signed __int64 *v96; // [rsp+1E8h] [rbp+168h]
  __int64 *v97; // [rsp+1F0h] [rbp+170h]
  _OWORD *v98; // [rsp+1F8h] [rbp+178h]
  __int64 v99; // [rsp+200h] [rbp+180h]
  _QWORD *v100; // [rsp+208h] [rbp+188h]
  __int64 v101; // [rsp+210h] [rbp+190h]
  __int64 v102; // [rsp+218h] [rbp+198h]
  __int64 v103; // [rsp+220h] [rbp+1A0h]
  __int64 v104; // [rsp+228h] [rbp+1A8h]
  __int64 v105; // [rsp+230h] [rbp+1B0h]
  __int64 v106; // [rsp+238h] [rbp+1B8h]
  _QWORD *v107; // [rsp+240h] [rbp+1C0h]
  __int64 v108; // [rsp+248h] [rbp+1C8h]
  _QWORD *v109; // [rsp+250h] [rbp+1D0h]
  __int64 v110; // [rsp+258h] [rbp+1D8h]
  _QWORD *v111; // [rsp+260h] [rbp+1E0h]
  __int64 v112; // [rsp+268h] [rbp+1E8h]
  __int64 v113; // [rsp+270h] [rbp+1F0h]
  __int64 v114; // [rsp+278h] [rbp+1F8h]
  _BYTE *v115; // [rsp+280h] [rbp+200h]
  _BYTE *v116; // [rsp+288h] [rbp+208h]
  _BYTE *v117; // [rsp+290h] [rbp+210h]
  __int128 v118; // [rsp+298h] [rbp+218h] BYREF
  __int128 v119; // [rsp+2A8h] [rbp+228h]
  __int64 v120; // [rsp+2B8h] [rbp+238h]
  __int128 v121; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v122; // [rsp+2D0h] [rbp+250h]
  __int64 v123; // [rsp+2E0h] [rbp+260h]
  __int64 v124; // [rsp+2F0h] [rbp+270h]
  __int64 v125; // [rsp+300h] [rbp+280h]
  __int64 v126; // [rsp+308h] [rbp+288h]
  volatile signed __int64 *v127; // [rsp+310h] [rbp+290h] BYREF
  volatile signed __int64 *v128; // [rsp+318h] [rbp+298h] BYREF
  volatile signed __int64 *v129; // [rsp+320h] [rbp+2A0h] BYREF
  volatile signed __int64 *v130; // [rsp+328h] [rbp+2A8h] BYREF
  __int128 v131; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v132; // [rsp+348h] [rbp+2C8h]
  _QWORD *v133; // [rsp+358h] [rbp+2D8h]
  __int64 v134; // [rsp+360h] [rbp+2E0h]
  char v135; // [rsp+36Ah] [rbp+2EAh]
  char v136; // [rsp+36Bh] [rbp+2EBh]
  char v137; // [rsp+36Ch] [rbp+2ECh]
  char v138; // [rsp+36Dh] [rbp+2EDh]
  char v139; // [rsp+36Eh] [rbp+2EEh]
  char v140; // [rsp+36Fh] [rbp+2EFh]
  char v141; // [rsp+370h] [rbp+2F0h]
  char v142; // [rsp+371h] [rbp+2F1h]
  char v143; // [rsp+372h] [rbp+2F2h]
  char v144; // [rsp+373h] [rbp+2F3h]
  char v145; // [rsp+374h] [rbp+2F4h]
  char v146; // [rsp+375h] [rbp+2F5h]
  char v147; // [rsp+376h] [rbp+2F6h]
  char v148; // [rsp+377h] [rbp+2F7h]
  __int64 v149; // [rsp+378h] [rbp+2F8h]
  char v150; // [rsp+387h] [rbp+307h]
  __int64 v151; // [rsp+388h] [rbp+308h]
  __int64 v152; // [rsp+390h] [rbp+310h]
  char v153; // [rsp+39Fh] [rbp+31Fh]
  __int64 v154; // [rsp+3A0h] [rbp+320h]

  v154 = -2;
  v3 = a2;
  v97 = a1;
  v4 = *(unsigned __int8 *)(a2 + 244);
  v151 = a2;
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
      v115 = (_BYTE *)(v3 + 228);
      *(_BYTE *)(v3 + 228) = 0;
LABEL_5:
      *(_DWORD *)(v3 + 232) = 0;
      *(_DWORD *)(v3 + 229) = 0;
      *(_BYTE *)(v3 + 232) = 1;
      v130 = v5;
      *(_BYTE *)(v3 + 231) = 1;
      v129 = v6;
      *(_BYTE *)(v3 + 230) = 1;
      v128 = v7;
      v124 = v10;
      sub_141011400(&v89, 300, 0, 0);
      v12 = *((volatile signed __int64 **)&v89 + 1);
      v13 = v89;
      if ( (_QWORD)v89 != -1 )
      {
        v14 = v90;
        goto LABEL_53;
      }
      *(_BYTE *)(v151 + 229) = 1;
      v127 = v12;
      v114 = v10;
      LOBYTE(v11) = 1;
      sub_141011400(&v89, 300, 0, v11);
      v12 = *((volatile signed __int64 **)&v89 + 1);
      v13 = v89;
      if ( (_QWORD)v89 != -1 )
      {
        v14 = v90;
        v16 = v151;
        *(_BYTE *)(v151 + 235) = 0;
        if ( *(_BYTE *)(v16 + 229) )
          goto LABEL_51;
        goto LABEL_53;
      }
      v61 = v151;
      *(_BYTE *)(v151 + 235) = 1;
      v96 = v12;
      *(_QWORD *)&v132 = v130;
      *((_QWORD *)&v132 + 1) = v129;
      *(_QWORD *)&v131 = v128;
      *(_DWORD *)(v61 + 229) = 0;
      *(_QWORD *)&v89 = 1;
      *((_QWORD *)&v89 + 1) = 1;
      *(_QWORD *)&v90 = 0;
      BYTE8(v90) = 0;
      *(_QWORD *)&v91 = v127;
      nullsub_1(v15);
      v62 = sub_140001650(40, 8);
      v149 = v10;
      if ( !v62 )
        sub_141938D11(8, 40);
      v63 = v91;
      *(_QWORD *)(v62 + 32) = v91;
      v64 = v89;
      *(_OWORD *)(v62 + 16) = v90;
      *(_OWORD *)v62 = v64;
      *(_QWORD *)&v121 = v62;
      *(_BYTE *)(v61 + 235) = 0;
      *(_QWORD *)&v89 = 1;
      *((_QWORD *)&v89 + 1) = 1;
      *(_QWORD *)&v90 = 0;
      BYTE8(v90) = 0;
      *(_QWORD *)&v91 = v12;
      nullsub_1(v63);
      v65 = sub_140001650(40, 8);
      if ( !v65 )
        sub_141938D11(8, 40);
      *(_QWORD *)(v65 + 32) = v91;
      v66 = v89;
      *(_OWORD *)(v65 + 16) = v90;
      *(_OWORD *)v65 = v66;
      *(_QWORD *)&v118 = v65;
      sub_141406CE0(&v89);
      v68 = v89;
      v69 = ((int)v89 >> 13) - 1;
      v2 = 0;
      if ( (int)v89 >> 13 <= 0 )
      {
        v70 = (1 - ((int)v89 >> 13)) / 0x190u + 1;
        v67 = 400 * v70;
        v69 += v67;
        v2 = -146097 * v70;
      }
      v71 = DWORD1(v89);
      v72 = DWORD2(v89);
      nullsub_1(v67);
      v73 = (_QWORD *)sub_140001650(24, 8);
      if ( !v73 )
        sub_141938D11(8, 24);
      *v73 = 1;
      v73[1] = 1;
      v73[2] = 1000
             * (v71
              + 86400LL
              * (int)(((v69 / 100) >> 2) + v2 + ((v68 >> 4) & 0x1FF) - v69 / 100 + ((1461 * v69) >> 2) - 719163))
             + v72 / 0xF4240uLL;
      *(_BYTE *)(v151 + 234) = 1;
      v81 = v132;
      *(_QWORD *)&v82 = v131;
      *((_QWORD *)&v82 + 1) = v121;
      *(_QWORD *)&v83 = v118;
      *((_QWORD *)&v83 + 1) = v73;
      v134 = v149;
      *(_QWORD *)&v118 = sub_140D7AD70();
      v148 = 1;
      v152 = v118;
      sub_140D21210(&v89);
      v148 = 0;
      *(_QWORD *)&v121 = sub_140D7D400(
                           v152,
                           (unsigned int)aAimamiHealth,
                           16,
                           (unsigned int)&v89,
                           (__int64)&off_1419F1B88);
      v147 = 1;
      v152 = v121;
      sub_140D21660(&v89);
      v147 = 0;
      *(_QWORD *)&v131 = sub_140D7D400(
                           v152,
                           (unsigned int)aIdeV1ChatCompl,
                           25,
                           (unsigned int)&v89,
                           (__int64)&off_1419F1BC0);
      v146 = 1;
      v152 = v131;
      sub_140D214F0(&v89);
      v146 = 0;
      *((_QWORD *)&v132 + 1) = sub_140D7D400(
                                 v152,
                                 (unsigned int)aIdeV1Responses,
                                 18,
                                 (unsigned int)&v89,
                                 (__int64)&off_1419F1BF0);
      v145 = 1;
      v152 = *((_QWORD *)&v132 + 1);
      sub_140D21380(&v89);
      v145 = 0;
      *(_QWORD *)&v132 = sub_140D7D400(
                           v152,
                           (unsigned int)aIdeV1Messages,
                           17,
                           (unsigned int)&v89,
                           (__int64)&off_1419F1C20);
      v144 = 1;
      v152 = v132;
      sub_140D20DC0(&v89);
      v144 = 0;
      v125 = sub_140D7D400(v152, (unsigned int)aIdeV1Models, 15, (unsigned int)&v89, (__int64)&off_1419F1C48);
      v143 = 1;
      v152 = v125;
      sub_140D210A0(&v89);
      v143 = 0;
      v126 = sub_140D7D400(v152, (unsigned int)aCodexRouterV1M, 23, (unsigned int)&v89, (__int64)&off_1419F1C78);
      v142 = 1;
      v152 = v126;
      sub_140D217D0(&v89);
      v142 = 0;
      v84 = sub_140D7D400(v152, (unsigned int)aCodexV1Respons, 27, (unsigned int)&v89, (__int64)&off_1419F1CB0);
      v141 = 1;
      v152 = v84;
      sub_140D21940(&v89);
      v141 = 0;
      v85 = sub_140D7D400(v152, (unsigned int)aCodexRouterV1R, 26, (unsigned int)&v89, (__int64)&off_1419F1CE8);
      v140 = 1;
      v152 = v85;
      sub_140D21D90(&v89);
      v140 = 0;
      v86 = sub_140D7D400(v152, (unsigned int)aCodexRouterV1R_0, 34, (unsigned int)&v89, (__int64)&off_1419F1D28);
      v139 = 1;
      v152 = v86;
      sub_140D21C20(&v89);
      v139 = 0;
      v87 = sub_140D7D400(v152, (unsigned int)aCodexRouterV1I, 35, (unsigned int)&v89, (__int64)&off_1419F1D68);
      v138 = 1;
      v152 = v87;
      sub_140D21AB0(&v89);
      v138 = 0;
      v88 = sub_140D7D400(v152, (unsigned int)aCodexRouterV1I_0, 29, (unsigned int)&v89, (__int64)&off_1419F1DA0);
      v137 = 1;
      v152 = v88;
      sub_140D20F30(&v89);
      v137 = 0;
      v74 = sub_140D7D400(v152, (unsigned int)aCodexRouterV1H, 23, (unsigned int)&v89, (__int64)&off_1419F1DD0);
      v10 = v149;
      v134 = v149;
      v75 = sub_140CA9DF0(v74, 1, 0x20000000);
      *(_BYTE *)(v151 + 234) = 0;
      v91 = v83;
      v90 = v82;
      v89 = v81;
      v134 = v10;
      v76 = sub_140CA9490(v75, &v89);
      v3 = v151;
      *(_QWORD *)(v151 + 48) = v76;
      *(_BYTE *)(v3 + 233) = 1;
      *(_WORD *)(v3 + 218) = i;
      *(_WORD *)(v3 + 220) = v9;
      v117 = (_BYTE *)(v3 + 223);
      *(_BYTE *)(v3 + 223) = 0;
LABEL_81:
      *(_BYTE *)(v3 + 222) = 1;
      *(_QWORD *)(v3 + 120) = -1;
      v110 = v10;
      v133 = (_QWORD *)(v3 + 56);
      v109 = (_QWORD *)(v3 + 56);
      sub_140DAD390(&v89, (unsigned int)i, v9);
      v25 = *((__int16 **)&v89 + 1);
      v77 = v89;
      v78 = *((_QWORD *)&v89 + 1) + 2 * v90;
      v3 = v151;
      *(_QWORD *)(v151 + 56) = *((_QWORD *)&v89 + 1);
      *(_QWORD *)(v3 + 64) = v25;
      *(_OWORD *)(v3 + 72) = __PAIR128__(v78, v77);
      if ( v25 == (__int16 *)v78 )
        goto LABEL_82;
      break;
    case 1LL:
      sub_1419393E0(&off_1419F1648);
    case 2LL:
      sub_141939400(&off_1419F1648);
    case 3LL:
      v115 = (_BYTE *)(a2 + 228);
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
          v99 = a2 + 24;
          sub_1419393E0(&off_1419F1DE8);
        case 2:
          v99 = a2 + 24;
          sub_141939400(&off_1419F1DE8);
        case 3:
          v117 = (_BYTE *)(a2 + 223);
          v17 = *(unsigned __int8 *)(a2 + 223);
          v133 = (_QWORD *)(a2 + 56);
          switch ( v17 )
          {
            case 0LL:
              LODWORD(i) = *(unsigned __int16 *)(a2 + 218);
              v9 = *(unsigned __int16 *)(a2 + 220);
              break;
            case 1LL:
              v101 = a2 + 24;
              v100 = v133;
              sub_1419393E0(&off_1419F1B48);
            case 2LL:
              v101 = a2 + 24;
              v100 = v133;
              sub_141939400(&off_1419F1B48);
            case 3LL:
              v18 = (_BYTE *)(a2 + 208);
              v19 = (_OWORD *)(a2 + 144);
              switch ( *(_BYTE *)(v3 + 208) )
              {
                case 0:
                  goto LABEL_34;
                case 1:
                  v108 = v3 + 24;
                  v107 = v133;
                  v106 = v3 + 144;
                  sub_1419393E0(&off_1419F0BC8);
                case 2:
                  v108 = v3 + 24;
                  v107 = v133;
                  v106 = v3 + 144;
                  sub_141939400(&off_1419F0BC8);
                case 3:
                  v20 = *(unsigned __int16 *)(v3 + 176);
                  *(_WORD *)(v3 + 176) = -2;
                  if ( (_WORD)v20 != 0xFFFE )
                    goto LABEL_14;
                  goto LABEL_35;
              }
          }
          goto LABEL_81;
      }
  }
  while ( 1 )
  {
    *(_QWORD *)(v3 + 64) = v25 + 1;
    v26 = *v25;
    *(_WORD *)(v3 + 216) = v26;
    *(_DWORD *)(v3 + 90) = 16777343;
    *(_WORD *)(v3 + 94) = v26;
    *(_WORD *)(v3 + 88) = 0;
    v19 = (_OWORD *)(v3 + 144);
    *(_OWORD *)(v3 + 160) = *(_OWORD *)(v3 + 104);
    *(_WORD *)(v3 + 144) = *(_WORD *)(v3 + 88);
    *(_DWORD *)(v3 + 146) = *(_DWORD *)(v3 + 90);
    *(_WORD *)(v3 + 150) = *(_WORD *)(v3 + 94);
    *(_QWORD *)(v3 + 152) = *(_QWORD *)(v3 + 96);
    v18 = (_BYTE *)(v3 + 208);
    *(_BYTE *)(v3 + 208) = 0;
LABEL_34:
    v27 = *v19;
    *(_OWORD *)(v3 + 192) = v19[1];
    *(_OWORD *)(v3 + 176) = v27;
    v20 = *(unsigned __int16 *)(v3 + 176);
    *(_WORD *)(v3 + 176) = -2;
    if ( (_WORD)v20 == 0xFFFE )
    {
LABEL_35:
      v116 = v18;
      v98 = v19;
      v149 = v10;
      sub_141938FE0(aReadyPolledAft, 31, &off_141A059F0);
    }
LABEL_14:
    v149 = v10;
    v2 = *(_QWORD *)(v3 + 184);
    if ( (_WORD)v20 != 0xFFFF )
      break;
    i = *(_QWORD *)(v3 + 184);
LABEL_26:
    v23 = v151;
    *(_BYTE *)(v151 + 208) = 1;
    *(_QWORD *)&v131 = i;
    *(_QWORD *)&v89 = v23 + 88;
    *((_QWORD *)&v89 + 1) = sub_1416BB380;
    *(_QWORD *)&v90 = &v131;
    *((_QWORD *)&v90 + 1) = sub_1416BB0B0;
    sub_1416ABFD0(&v118, &unk_1419F1B60, &v89);
    v121 = v118;
    *(_QWORD *)&v122 = v119;
    v24 = *(_QWORD *)(v23 + 120);
    if ( v24 != -1 && v24 )
      sub_140001660(*(_QWORD *)(v23 + 128), v24, 1);
    *(_BYTE *)(v23 + 222) = 1;
    *(_QWORD *)(v23 + 136) = v122;
    *(_OWORD *)(v23 + 120) = v121;
    v10 = v149;
    if ( (unsigned int)(v131 & 3) - 2 >= 2 && (v131 & 3) != 0 )
    {
      *((_QWORD *)&v89 + 1) = v131 - 1;
      LOBYTE(v89) = 3;
      v112 = v149;
      v111 = v133;
      sub_1416BCB00((char *)&v89 + 8);
    }
    v3 = v151;
    v25 = *(__int16 **)(v151 + 64);
    if ( v25 == *(__int16 **)(v151 + 80) )
    {
LABEL_82:
      v28 = (__int64)v133;
      v79 = v133[2];
      if ( v79 )
      {
        sub_140001660(*v133, 2 * v79, 2);
        v28 = (__int64)v133;
      }
      *(_BYTE *)(v3 + 222) = 0;
      v13 = *(_QWORD *)(v3 + 120);
      v149 = v10;
      if ( v13 == -1 )
      {
        nullsub_1(v28);
        v13 = 38;
        v80 = (volatile signed __int64 *)sub_140001650(38, 1);
        if ( !v80 )
        {
          v110 = v10;
          v109 = v133;
          sub_141938D2B(1, 38);
        }
        v12 = v80;
        qmemcpy((void *)v80, "no free port available for relay proxy", 38);
        v14 = 38;
        v28 = (__int64)v133;
      }
      else
      {
        v12 = *(volatile signed __int64 **)(v3 + 128);
        v14 = *(_QWORD *)(v3 + 136);
      }
      *(_BYTE *)(v3 + 222) = 0;
      v21 = 2;
      goto LABEL_47;
    }
  }
  v116 = v18;
  v98 = v19;
  WORD6(v132) = *(_WORD *)(v3 + 182);
  DWORD2(v132) = *(_DWORD *)(v3 + 178);
  v131 = *(_OWORD *)(v3 + 192);
  for ( i = 0; ; i = v22 )
  {
    LOWORD(v152) = v20;
    if ( (_WORD)v20 == 2 )
    {
      if ( !i )
      {
        v113 = 0;
        LOBYTE(v20) = 20;
        i = sub_1416793A0(v20, aCouldNotResolv, 32);
      }
      goto LABEL_26;
    }
    LOWORD(v118) = v20;
    WORD3(v118) = WORD6(v132);
    *(_DWORD *)((char *)&v118 + 2) = DWORD2(v132);
    *((_QWORD *)&v118 + 1) = v2;
    v119 = v131;
    v113 = i;
    sub_14150E5E0(&v89, &v118);
    v21 = v89;
    if ( (_QWORD)v89 != 2 )
      break;
    v22 = *((_QWORD *)&v89 + 1);
    if ( i )
    {
      v20 = (unsigned int)(i & 3) - 2;
      if ( (unsigned int)v20 >= 2 && (i & 3) != 0 )
      {
        *((_QWORD *)&v121 + 1) = i - 1;
        LOBYTE(v121) = 3;
        v113 = *((_QWORD *)&v89 + 1);
        sub_1416BCB00((char *)&v121 + 8);
      }
    }
    LOWORD(v20) = 2;
  }
  if ( i && (unsigned int)(i & 3) - 2 >= 2 && (i & 3) != 0 )
  {
    *((_QWORD *)&v118 + 1) = i - 1;
    LOBYTE(v118) = 3;
    sub_1416BCB00((char *)&v118 + 8);
  }
  v13 = *((_QWORD *)&v89 + 1);
  v14 = *((_QWORD *)&v90 + 1);
  v12 = (volatile signed __int64 *)v90;
  v2 = v91;
  *v116 = 1;
  if ( v21 != -1 )
  {
    LODWORD(i) = *(unsigned __int16 *)(v151 + 216);
    v28 = (__int64)v133;
    v29 = v133[2];
    if ( v29 )
    {
      sub_140001660(*v133, 2 * v29, 2);
      v28 = (__int64)v133;
    }
    v30 = v151;
    v31 = *(_QWORD *)(v151 + 120);
    if ( v31 != -1 && v31 )
    {
      sub_140001660(*(_QWORD *)(v151 + 128), v31, 1);
      v28 = (__int64)v133;
    }
    *(_BYTE *)(v30 + 222) = 0;
LABEL_47:
    *v117 = 1;
    v105 = v149;
    sub_1404071A0(v28);
    if ( v21 == 2 )
    {
      v32 = _InterlockedDecrement64(*(volatile signed __int64 **)(v151 + 48));
      v10 = v149;
      if ( !v32 )
      {
        v134 = v149;
        sub_1411B2910(v151 + 48);
      }
      v33 = v151;
      *(_WORD *)(v151 + 233) = 0;
      *(_BYTE *)(v33 + 235) = 0;
      if ( *(_BYTE *)(v33 + 229) )
      {
LABEL_51:
        if ( !_InterlockedDecrement64(v127) )
        {
          v124 = v10;
          sub_141242F50(&v127);
        }
      }
LABEL_53:
      v34 = v151;
      *(_BYTE *)(v151 + 229) = 0;
      if ( *(_BYTE *)(v34 + 230) && !_InterlockedDecrement64(v128) )
      {
        v104 = v10;
        sub_1409E5ED0(&v128);
      }
      v35 = v151;
      *(_BYTE *)(v151 + 230) = 0;
      if ( *(_BYTE *)(v35 + 231) && !_InterlockedDecrement64(v129) )
      {
        v103 = v10;
        sub_1409E4860(&v129);
      }
      v36 = v151;
      *(_BYTE *)(v151 + 231) = 0;
      if ( *(_BYTE *)(v36 + 232) && !_InterlockedDecrement64(v130) )
      {
        v102 = v10;
        sub_1409E4DF0(&v130);
      }
      *(_BYTE *)(v151 + 232) = 0;
      v37 = 1;
    }
    else
    {
      *(_QWORD *)&v121 = v21;
      *((_QWORD *)&v121 + 1) = v13;
      *(_QWORD *)&v122 = v12;
      *((_QWORD *)&v122 + 1) = v14;
      v123 = v2;
      v41 = v151;
      *(_BYTE *)(v151 + 233) = 0;
      *(_QWORD *)&v118 = *(_QWORD *)(v41 + 48);
      v150 = 1;
      sub_1414FE5D0(&v89, 32, &off_141A49CF0);
      nullsub_1(v42);
      v43 = sub_140001650(56, 8);
      if ( !v43 )
      {
        v150 = 1;
        sub_141938D11(8, 56);
      }
      *(_QWORD *)v43 = 1;
      *(_QWORD *)(v43 + 8) = 1;
      *(_QWORD *)(v43 + 48) = v91;
      v44 = v89;
      *(_OWORD *)(v43 + 32) = v90;
      *(_OWORD *)(v43 + 16) = v44;
      v150 = 0;
      v126 = sub_140CAA6D0(v118, v43, (unsigned int)i);
      *(_QWORD *)&v89 = 1;
      *((_QWORD *)&v89 + 1) = 1;
      *(_QWORD *)&v92 = 0;
      BYTE8(v92) = 0;
      nullsub_1(v45);
      v46 = sub_140001650(64, 8);
      if ( !v46 )
        sub_141938D11(8, 64);
      v48 = v89;
      v49 = v90;
      v50 = v91;
      *(_OWORD *)(v46 + 48) = v92;
      *(_OWORD *)(v46 + 32) = v50;
      *(_OWORD *)(v46 + 16) = v49;
      *(_OWORD *)v46 = v48;
      if ( _InterlockedIncrement64((volatile signed __int64 *)v46) <= 0 )
        goto LABEL_105;
      v125 = v46;
      *(_QWORD *)&v132 = v46;
      nullsub_1(v47);
      v51 = sub_140001650(24, 8);
      if ( !v51 )
      {
        v136 = 1;
        v135 = 1;
        sub_141938D11(8, 24);
      }
      *(_QWORD *)v51 = 1;
      *(_QWORD *)(v51 + 8) = 1;
      *(_BYTE *)(v51 + 16) = 1;
      *((_QWORD *)&v132 + 1) = v51;
      if ( _InterlockedIncrement64((volatile signed __int64 *)v51) <= 0 )
LABEL_105:
        BUG();
      *(_QWORD *)&v91 = v123;
      v90 = v122;
      v89 = v121;
      *((_QWORD *)&v91 + 1) = v126;
      *((_QWORD *)&v92 + 1) = v132;
      *(_QWORD *)&v92 = v51;
      v94 = i;
      v95 = 0;
      v153 = 1;
      v52 = sub_1409B7140(&v89, &off_1419F1E00);
      v153 = 1;
      if ( (unsigned __int8)sub_1414FCFD0(v52) )
      {
        v153 = 1;
        sub_1414FD8E0(v52);
      }
      v54 = v125;
      *(_QWORD *)&v131 = 1;
      *((_QWORD *)&v131 + 1) = v125;
      sub_1414FE5D0(&v118, 1, v53);
      *(_QWORD *)&v92 = v120;
      v91 = v119;
      v90 = v118;
      *(_QWORD *)&v89 = 1;
      *((_QWORD *)&v89 + 1) = 1;
      *((_QWORD *)&v92 + 1) = 1;
      v93 = v54;
      nullsub_1(v55);
      v56 = sub_140001650(72, 8);
      if ( !v56 )
        sub_141938D11(8, 72);
      v13 = v56;
      *(_QWORD *)(v56 + 64) = v93;
      v57 = v89;
      v58 = v90;
      v59 = v91;
      *(_OWORD *)(v56 + 48) = v92;
      *(_OWORD *)(v56 + 32) = v59;
      *(_OWORD *)(v56 + 16) = v58;
      *(_OWORD *)v56 = v57;
      v12 = *((volatile signed __int64 **)&v132 + 1);
      v14 = (unsigned __int16)i;
      v60 = v151;
      *(_WORD *)(v151 + 233) = 0;
      *(_BYTE *)(v60 + 235) = 0;
      *(_DWORD *)(v60 + 229) = 0;
      v37 = 0;
      v10 = v149;
    }
    v38 = v97;
    *v97 = v37;
    v38[1] = v13;
    v38[2] = (__int64)v12;
    v38[3] = v14;
    *v115 = 1;
    v39 = 1;
    sub_1404072C0(v10);
    goto LABEL_64;
  }
  *v117 = 3;
  *v115 = 3;
  *v97 = 2;
  v39 = 3;
LABEL_64:
  result = v151;
  *(_BYTE *)(v151 + 244) = v39;
  return result;
}
