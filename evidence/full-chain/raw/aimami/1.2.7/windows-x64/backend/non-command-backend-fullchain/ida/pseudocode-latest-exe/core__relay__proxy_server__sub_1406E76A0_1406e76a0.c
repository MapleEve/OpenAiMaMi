// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406e76a0 | successor of pre-update 0x140d41250 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
char __fastcall sub_1406E76A0(_OWORD *a1, __int128 *a2, __int64 a3)
{
  __int128 *v3; // r14
  _OWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int128 v8; // xmm0
  _QWORD *v9; // r15
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm3
  _QWORD *v13; // r15
  char *v14; // rdx
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // edx
  __int128 *v20; // r14
  __int64 v21; // rbx
  _QWORD *v22; // r15
  __int64 v23; // rdi
  __int128 *v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rdi
  char *v27; // rdi
  _OWORD *v28; // rsi
  __int64 v29; // r12
  __int128 *v30; // rbx
  __int64 v31; // r13
  __int64 v32; // r14
  char v33; // al
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  char result; // al
  __int64 v38; // rdx
  __int64 v39; // rdi
  _QWORD *v40; // rsi
  __int128 *v41; // r15
  _OWORD *v42; // rax
  __int64 v43; // rax
  __int128 *v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  int v47; // edx
  __int64 v48; // rbx
  __int128 *v49; // rdi
  _QWORD *v50; // r15
  _OWORD *v51; // rsi
  __int128 *v52; // rdx
  char *v53; // r15
  char v54; // al
  __int64 v55; // rdi
  _OWORD *v56; // rdx
  char v57; // r15
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdi
  __int64 v61; // rsi
  char v62; // r15
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdi
  __int64 v66; // rsi
  char v67; // r15
  __int64 v68; // rdi
  _OWORD *v69; // rdx
  char v70; // r15
  __int128 v71; // xmm1
  __int128 v72; // xmm2
  __int128 v73; // xmm3
  __int128 *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // r8
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm2
  __int128 v82; // xmm3
  char v83; // al
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  __int128 v87; // xmm3
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm3
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm2
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm3
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm2
  __int64 v100; // rdx
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  __int128 v103; // xmm2
  unsigned __int64 v104; // rdx
  bool v105; // cf
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int128 v108; // xmm0
  __int128 v109; // xmm1
  __int128 v110; // xmm2
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // r14
  __int64 v114; // r15
  volatile signed __int8 **v115; // rbx
  int v116; // edx
  int v117; // ecx
  unsigned int v118; // ecx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // r8
  _OWORD *v123; // rax
  __int128 v124; // xmm0
  __int128 v125; // xmm1
  __int128 v126; // xmm2
  __int128 *v127; // rax
  __int128 v128; // xmm0
  __int128 v129; // xmm1
  __int128 v130; // xmm2
  __int128 v131; // xmm0
  __int128 v132; // xmm1
  __int128 v133; // xmm2
  __int128 v134; // xmm3
  __int128 v135; // xmm4
  __int128 v136; // xmm5
  __int128 v137; // xmm6
  __int128 *v138; // rsi
  __int64 v139; // rbx
  __int64 v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // rax
  _BYTE *v143; // [rsp+40h] [rbp-40h] BYREF
  __int128 v144; // [rsp+48h] [rbp-38h]
  __int128 v145; // [rsp+58h] [rbp-28h]
  __int128 v146; // [rsp+68h] [rbp-18h]
  __int128 v147; // [rsp+78h] [rbp-8h]
  __int128 v148; // [rsp+88h] [rbp+8h]
  __int128 v149; // [rsp+98h] [rbp+18h]
  __int128 v150; // [rsp+A8h] [rbp+28h]
  __int128 v151; // [rsp+B8h] [rbp+38h]
  __int128 v152; // [rsp+140h] [rbp+C0h]
  __int128 v153; // [rsp+150h] [rbp+D0h]
  __int128 v154; // [rsp+160h] [rbp+E0h]
  __int128 v155; // [rsp+170h] [rbp+F0h]
  __int128 v156; // [rsp+180h] [rbp+100h]
  __int128 v157; // [rsp+190h] [rbp+110h]
  __int128 v158; // [rsp+1A0h] [rbp+120h]
  __int128 v159; // [rsp+1B0h] [rbp+130h]
  __int128 v160; // [rsp+1C0h] [rbp+140h]
  _OWORD v161[5]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v162; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v163; // [rsp+230h] [rbp+1B0h]
  __int128 v164; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v165; // [rsp+250h] [rbp+1D0h]
  __int128 v166; // [rsp+260h] [rbp+1E0h]
  __int128 v167; // [rsp+270h] [rbp+1F0h]
  __int128 v168; // [rsp+280h] [rbp+200h]
  __int128 v169; // [rsp+290h] [rbp+210h]
  __int128 v170; // [rsp+2A0h] [rbp+220h]
  __int128 v171; // [rsp+2B0h] [rbp+230h]
  __int128 v172; // [rsp+2C0h] [rbp+240h]
  __int128 v173; // [rsp+2D0h] [rbp+250h]
  __int128 v174; // [rsp+2E0h] [rbp+260h]
  __int128 v175; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v176; // [rsp+300h] [rbp+280h]
  __int128 v177; // [rsp+310h] [rbp+290h]
  __int128 v178; // [rsp+320h] [rbp+2A0h]
  __int128 v179; // [rsp+330h] [rbp+2B0h]
  __int128 v180; // [rsp+340h] [rbp+2C0h]
  __int128 v181; // [rsp+350h] [rbp+2D0h]
  __int128 v182; // [rsp+360h] [rbp+2E0h]
  __int128 v183; // [rsp+370h] [rbp+2F0h]
  __int128 v184; // [rsp+380h] [rbp+300h]
  __int128 v185; // [rsp+390h] [rbp+310h]
  __int128 v186; // [rsp+3A0h] [rbp+320h]
  __int128 v187; // [rsp+3B0h] [rbp+330h]
  __int128 v188; // [rsp+3C0h] [rbp+340h]
  __int128 v189; // [rsp+3D0h] [rbp+350h]
  __int64 v190; // [rsp+3E0h] [rbp+360h]
  _BYTE v191[128]; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v192; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v193; // [rsp+480h] [rbp+400h]
  __int128 v194; // [rsp+490h] [rbp+410h]
  __int128 v195; // [rsp+4A0h] [rbp+420h]
  __int128 v196; // [rsp+4B0h] [rbp+430h]
  __int128 v197; // [rsp+4C0h] [rbp+440h]
  __int128 v198; // [rsp+4D0h] [rbp+450h]
  __int128 v199; // [rsp+4E0h] [rbp+460h]
  char v200; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v201; // [rsp+4F8h] [rbp+478h]
  __int64 v202; // [rsp+508h] [rbp+488h]
  __int128 v203; // [rsp+510h] [rbp+490h] BYREF
  __int128 v204; // [rsp+520h] [rbp+4A0h]
  __int64 v205; // [rsp+530h] [rbp+4B0h]
  __int128 v206; // [rsp+540h] [rbp+4C0h]
  _BYTE v207[128]; // [rsp+550h] [rbp+4D0h] BYREF
  _BYTE v208[136]; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v209; // [rsp+658h] [rbp+5D8h]
  _QWORD *v210; // [rsp+7A0h] [rbp+720h]
  __int64 v211; // [rsp+7A8h] [rbp+728h]
  __int128 *v212; // [rsp+7B0h] [rbp+730h]
  _QWORD *v213; // [rsp+7B8h] [rbp+738h]
  __int128 *v214; // [rsp+7C0h] [rbp+740h]
  __int128 *v215; // [rsp+7C8h] [rbp+748h]
  _OWORD *v216; // [rsp+7D0h] [rbp+750h]
  char *v217; // [rsp+7D8h] [rbp+758h]
  _QWORD *v218; // [rsp+7E0h] [rbp+760h]
  _QWORD *v219; // [rsp+7E8h] [rbp+768h]
  _BYTE v220[128]; // [rsp+7F0h] [rbp+770h] BYREF
  _QWORD *v221; // [rsp+878h] [rbp+7F8h]
  _QWORD *v222; // [rsp+880h] [rbp+800h]
  __int64 v223; // [rsp+888h] [rbp+808h]
  char v224; // [rsp+897h] [rbp+817h] BYREF
  char *v225; // [rsp+898h] [rbp+818h]
  __int128 *v226; // [rsp+8A0h] [rbp+820h]
  _OWORD *v227; // [rsp+8A8h] [rbp+828h]
  char *v228; // [rsp+8B0h] [rbp+830h]
  _QWORD *v229; // [rsp+8B8h] [rbp+838h]
  char *v230; // [rsp+8C0h] [rbp+840h]
  __int128 *v231; // [rsp+8C8h] [rbp+848h]
  _QWORD *v232; // [rsp+8D0h] [rbp+850h]
  _OWORD *v233; // [rsp+8D8h] [rbp+858h]
  char v234; // [rsp+8E7h] [rbp+867h]
  __int64 v235; // [rsp+8E8h] [rbp+868h]

  v235 = -2;
  v223 = a3;
  v3 = a2;
  v4 = a1;
  v5 = *((unsigned __int8 *)a2 + 1872);
  v231 = a2;
  switch ( v5 )
  {
    case 0LL:
      v6 = *((_QWORD *)a2 + 5);
      v7 = *((_QWORD *)a2 + 6);
      *((_BYTE *)a2 + 1873) = 1;
      v205 = *((_QWORD *)a2 + 4);
      v8 = *a2;
      v204 = a2[1];
      v203 = v8;
      v9 = (_QWORD *)a2 + 7;
      sub_140733D70((char *)a2 + 56, v6);
      v3 = v231;
      if ( !*((_QWORD *)v231 + 9) )
      {
        v232 = v9;
        *(_QWORD *)v220 = aCodex;
        *(_QWORD *)&v220[8] = 5;
        v143 = v220;
        *(_QWORD *)&v144 = sub_140191200;
        sub_1416DAFA0(v208, &unk_141A39C78, &v143);
        v233 = *(_OWORD **)v208;
        LOWORD(v19) = 502;
        v230 = *(char **)&v208[8];
        sub_1407360F0((unsigned int)v191, v19, *(_DWORD *)&v208[8], *(_DWORD *)&v208[16], (__int64)aProxyUpstream, 14);
        if ( v233 )
          sub_140001660(v230, v233, 1);
        v20 = v231;
        v21 = *((_QWORD *)v231 + 9);
        v22 = v232;
        if ( v21 )
        {
          v23 = *((_QWORD *)v231 + 8);
          do
          {
            sub_1401B16C0(v23);
            v23 += 256;
            --v21;
          }
          while ( v21 );
        }
        if ( *v22 )
          sub_140001660(*((_QWORD *)v20 + 8), *v22 << 8, 8);
        sub_1406C0ED0((char *)&v203 + 8);
        goto LABEL_37;
      }
      v219 = v4;
      *(_QWORD *)&v208[56] = v9[2];
      *(_OWORD *)&v208[40] = *(_OWORD *)v9;
      *((_BYTE *)v231 + 1873) = 0;
      *(_QWORD *)&v208[32] = v205;
      v10 = v203;
      v11 = v204;
      v157 = v203;
      v158 = v204;
      v160 = *(_OWORD *)&v208[48];
      v12 = *(_OWORD *)&v208[32];
      v159 = *(_OWORD *)&v208[32];
      v13 = v3 + 5;
      v3[8] = *(_OWORD *)&v208[48];
      v3[7] = v12;
      v3[6] = v11;
      v3[5] = v10;
      *((_QWORD *)v3 + 18) = v6;
      *((_QWORD *)v3 + 19) = v7;
      v14 = (char *)v3 + 824;
      *((_BYTE *)v3 + 824) = 0;
LABEL_6:
      v225 = v14;
      *((_QWORD *)v3 + 20) = v6;
      *(__int128 *)((char *)v3 + 168) = *(__int128 *)((char *)v3 + 120);
      v15 = *((_QWORD *)v3 + 17);
      *((_QWORD *)v3 + 23) = v15;
      *((_QWORD *)v3 + 24) = v7;
      v16 = *((_OWORD *)v13 + 1);
      *(__int128 *)((char *)v3 + 200) = *(_OWORD *)v13;
      *(__int128 *)((char *)v3 + 216) = v16;
      *((_QWORD *)v3 + 29) = v13[4];
      if ( !v15 )
      {
        v222 = v13;
        LOWORD(v14) = 502;
        sub_1407360F0((unsigned int)v207, (_DWORD)v14, (unsigned int)aNoCandidatePro, 31, (__int64)aProxyUpstream, 14);
        goto LABEL_113;
      }
      *((_QWORD *)v3 + 30) = -1;
      *((_QWORD *)v3 + 46) = v15;
      v17 = *((_QWORD *)v3 + 22);
      v18 = v17 + (v15 << 8);
      *((_QWORD *)v3 + 47) = v17;
      *((_QWORD *)v3 + 48) = v18;
      *((_QWORD *)v3 + 49) = 0;
      break;
    case 1LL:
      sub_14196B990(&off_141A39CA0);
    case 2LL:
      sub_14196B9B0(&off_141A39CA0);
    case 3LL:
      v219 = a1;
      v14 = (char *)a2 + 824;
      v13 = v3 + 5;
      switch ( *((_BYTE *)v3 + 824) )
      {
        case 0:
          v6 = *((_QWORD *)v3 + 18);
          v7 = *((_QWORD *)v3 + 19);
          goto LABEL_6;
        case 1:
          v212 = v3 + 5;
          sub_14196B990(&off_141A39D20);
        case 2:
          v212 = v3 + 5;
          sub_14196B9B0(&off_141A39D20);
        case 3:
          v225 = (char *)v3 + 824;
          v27 = (char *)v3 + 888;
          v28 = v3 + 52;
          switch ( *((_BYTE *)v3 + 888) )
          {
            case 0:
              v29 = *((_QWORD *)v3 + 104);
              v30 = *((__int128 **)v3 + 105);
              v31 = *((_QWORD *)v3 + 106);
              v32 = *((_QWORD *)v3 + 107);
              goto LABEL_41;
            case 1:
              v215 = v3 + 5;
              v214 = v3 + 52;
              sub_14196B990(&off_141A39A50);
            case 2:
              v215 = v3 + 5;
              v214 = v3 + 52;
              sub_14196B9B0(&off_141A39A50);
            case 3:
              v230 = (char *)v3 + 888;
              v233 = v3 + 52;
              v232 = v3 + 5;
              goto LABEL_85;
            case 4:
              v230 = (char *)v3 + 888;
              v232 = v3 + 5;
              goto LABEL_75;
            case 5:
              v230 = (char *)v3 + 888;
              v232 = v3 + 5;
              goto LABEL_70;
            case 6:
              v230 = (char *)v3 + 888;
              v233 = v3 + 52;
              v232 = v3 + 5;
              goto LABEL_89;
          }
        case 4:
          v225 = (char *)v3 + 824;
          v232 = v3 + 5;
          goto LABEL_109;
        case 5:
          v225 = (char *)v3 + 824;
          v232 = v3 + 5;
          goto LABEL_19;
      }
  }
  while ( 1 )
  {
    if ( v17 == v18 )
    {
      if ( *((_QWORD *)v3 + 30) == -1 )
      {
        v222 = v13;
        LOWORD(v14) = 502;
        sub_1407360F0((unsigned int)v220, (_DWORD)v14, (unsigned int)aAllRelayProvid, 66, (__int64)aProxyUpstream, 14);
      }
      else
      {
        *(_QWORD *)v220 = *((_QWORD *)v3 + 30);
        v71 = *(__int128 *)((char *)v3 + 264);
        v72 = *(__int128 *)((char *)v3 + 280);
        v73 = *(__int128 *)((char *)v3 + 296);
        *(_OWORD *)&v220[8] = *(__int128 *)((char *)v3 + 248);
        *(_OWORD *)&v220[24] = v71;
        *(_OWORD *)&v220[40] = v72;
        *(_OWORD *)&v220[56] = v73;
        *(_OWORD *)&v220[72] = *(__int128 *)((char *)v3 + 312);
        *(_OWORD *)&v220[88] = *(__int128 *)((char *)v3 + 328);
        *(_OWORD *)&v220[104] = *(__int128 *)((char *)v3 + 344);
        *(_QWORD *)&v220[120] = *((_QWORD *)v3 + 45);
      }
      v232 = v13;
      *(_OWORD *)&v208[112] = *(_OWORD *)&v220[112];
      *(_OWORD *)&v208[96] = *(_OWORD *)&v220[96];
      *(_OWORD *)&v208[80] = *(_OWORD *)&v220[80];
      *(_OWORD *)&v208[64] = *(_OWORD *)&v220[64];
      *(_OWORD *)&v208[48] = *(_OWORD *)&v220[48];
      *(_OWORD *)&v208[32] = *(_OWORD *)&v220[32];
      *(_OWORD *)&v208[16] = *(_OWORD *)&v220[16];
      *(_OWORD *)v208 = *(_OWORD *)v220;
      v3 = v231;
      sub_1419234B0(v231 + 52, v208, 464);
      *((_BYTE *)v3 + 1296) = 0;
LABEL_19:
      v233 = v3 + 52;
      sub_1406EA060(v220, v3 + 52, v223);
      if ( *(_DWORD *)v220 == -1 )
      {
        v33 = 5;
        goto LABEL_123;
      }
      *(_OWORD *)&v207[112] = *(_OWORD *)&v220[112];
      *(_OWORD *)&v207[96] = *(_OWORD *)&v220[96];
      *(_OWORD *)&v207[80] = *(_OWORD *)&v220[80];
      *(_OWORD *)&v207[64] = *(_OWORD *)&v220[64];
      *(_OWORD *)&v207[48] = *(_OWORD *)&v220[48];
      *(_OWORD *)&v207[32] = *(_OWORD *)&v220[32];
      *(_OWORD *)&v207[16] = *(_OWORD *)&v220[16];
      *(_OWORD *)v207 = *(_OWORD *)v220;
      v13 = v232;
      v222 = v232;
      sub_1406BA120(v233);
      v213 = v13;
      sub_1406C0ED0(v231 + 13);
      v24 = v231;
      v25 = *((_QWORD *)v231 + 23);
      if ( v25 )
      {
        v26 = *((_QWORD *)v231 + 22);
        do
        {
          sub_1401B16C0(v26);
          v26 += 256;
          --v25;
        }
        while ( v25 );
      }
      goto LABEL_116;
    }
    *((_QWORD *)v3 + 47) = v17 + 256;
    v38 = *((_QWORD *)v3 + 20);
    v39 = *((_QWORD *)v3 + 49) + 1LL;
    *((_QWORD *)v3 + 49) = v39;
    v210 = v13;
    sub_140734DE0(&v143, v38);
    if ( v143 == (_BYTE *)-1LL )
    {
      *(_OWORD *)&v207[112] = v151;
      *(_OWORD *)&v207[96] = v150;
      *(_OWORD *)&v207[80] = v149;
      *(_OWORD *)&v207[64] = v148;
      *(_OWORD *)&v207[48] = v147;
      *(_OWORD *)&v207[32] = v146;
      *(_OWORD *)&v207[16] = v145;
      *(_OWORD *)v207 = v144;
      v74 = v231;
      if ( *((_DWORD *)v231 + 60) == -1 )
      {
LABEL_113:
        v213 = v13;
        sub_1406C0ED0(v231 + 13);
        v24 = v231;
        v139 = *((_QWORD *)v231 + 23);
        if ( v139 )
        {
          v140 = *((_QWORD *)v231 + 22);
          do
          {
            sub_1401B16C0(v140);
            v140 += 256;
            --v139;
          }
          while ( v139 );
        }
LABEL_116:
        v141 = *((_QWORD *)v24 + 21);
        if ( v141 )
          sub_140001660(*((_QWORD *)v24 + 22), v141 << 8, 8);
        v142 = *(_QWORD *)v207;
        v183 = *(_OWORD *)&v207[8];
        v184 = *(_OWORD *)&v207[24];
        v185 = *(_OWORD *)&v207[40];
        v186 = *(_OWORD *)&v207[56];
        v187 = *(_OWORD *)&v207[72];
        v188 = *(_OWORD *)&v207[88];
        v189 = *(_OWORD *)&v207[104];
        v190 = *(_QWORD *)&v207[120];
        *v225 = 1;
        if ( v142 == -1 )
          goto LABEL_124;
        *(_QWORD *)v191 = v142;
        *(_OWORD *)&v191[8] = v183;
        *(_OWORD *)&v191[24] = v184;
        *(_OWORD *)&v191[40] = v185;
        *(_OWORD *)&v191[56] = v186;
        *(_OWORD *)&v191[72] = v187;
        *(_OWORD *)&v191[88] = v188;
        *(_OWORD *)&v191[104] = v189;
        *(_QWORD *)&v191[120] = v190;
        sub_1406BA280(v13);
        v4 = v219;
LABEL_37:
        v24 = v231;
        *((_BYTE *)v231 + 1873) = 0;
        v4[7] = *(_OWORD *)&v191[112];
        v4[6] = *(_OWORD *)&v191[96];
        v4[5] = *(_OWORD *)&v191[80];
        v4[4] = *(_OWORD *)&v191[64];
        v34 = *(_OWORD *)v191;
        v35 = *(_OWORD *)&v191[16];
        v36 = *(_OWORD *)&v191[32];
        v4[3] = *(_OWORD *)&v191[48];
        v4[2] = v36;
        v4[1] = v35;
        *v4 = v34;
        result = 1;
        goto LABEL_125;
      }
LABEL_112:
      v222 = v13;
      sub_14051B240(v74 + 15);
      goto LABEL_113;
    }
    v40 = v13;
    v41 = v231;
    v30 = v231 + 25;
    sub_1419234B0(v231 + 25, &v143, 256);
    *((_QWORD *)v41 + 82) = v30;
    *((_QWORD *)v41 + 83) = v39;
    v29 = *((_QWORD *)v41 + 20);
    v31 = *((_QWORD *)v41 + 24);
    v32 = (__int64)v41 + 200;
    v42 = v41 + 52;
    *((_QWORD *)v41 + 104) = v29;
    *((_QWORD *)v41 + 105) = v30;
    *((_QWORD *)v41 + 106) = v31;
    *((_QWORD *)v41 + 107) = (char *)v41 + 200;
    v27 = (char *)v41 + 888;
    *((_BYTE *)v41 + 888) = 0;
    v13 = v40;
    v28 = v42;
LABEL_41:
    v43 = 8LL * (*((_BYTE *)v30 + 254) != 2) + 12;
    v44 = &xmmword_141A39A3C;
    if ( *((_BYTE *)v30 + 254) == 2 )
      v44 = (__int128 *)&unk_141A39A30;
    v45 = *((_QWORD *)v30 + 7);
    v46 = *((_QWORD *)v30 + 8);
    v218 = v13;
    v217 = v27;
    v216 = v28;
    sub_140992E20((unsigned int)&v200, v45, v46, (_DWORD)v44, v43, 0);
    v232 = v13;
    v230 = v27;
    if ( v200 )
    {
      v233 = v28;
      v226 = (__int128 *)v201;
      LOWORD(v47) = 400;
      v211 = *((_QWORD *)&v201 + 1);
      sub_1407360F0((unsigned int)v208, v47, DWORD2(v201), v202, (__int64)aProxyUpstream, 14);
      *(_OWORD *)&v220[112] = *(_OWORD *)&v208[112];
      *(_OWORD *)&v220[96] = *(_OWORD *)&v208[96];
      *(_OWORD *)&v220[80] = *(_OWORD *)&v208[80];
      *(_OWORD *)&v220[64] = *(_OWORD *)&v208[64];
      *(_OWORD *)&v220[48] = *(_OWORD *)&v208[48];
      *(_OWORD *)&v220[32] = *(_OWORD *)&v208[32];
      *(_OWORD *)&v220[16] = *(_OWORD *)&v208[16];
      *(_OWORD *)v220 = *(_OWORD *)v208;
      if ( v226 )
        sub_140001660(v211, v226, 1);
      v48 = 5;
      v49 = v231;
      v50 = v232;
      v51 = v233;
      goto LABEL_94;
    }
    v52 = v231;
    *((_QWORD *)v231 + 110) = v202;
    v52[54] = v201;
    v53 = (char *)(v32 + 8);
    v54 = *((_BYTE *)v30 + 254);
    if ( *(_DWORD *)v32 == 1 )
      break;
    if ( v54 == 2 )
    {
      v58 = *((_QWORD *)v30 + 13);
      v59 = *((_QWORD *)v30 + 14);
      v229 = v232;
      v228 = v27;
      v227 = v28;
      sub_1408B2800(&v164, v32 + 8, v58, v59);
      v233 = v28;
      v60 = *((_QWORD *)v231 + 109);
      v61 = *((_QWORD *)v231 + 110);
      v62 = *v53;
      switch ( v62 )
      {
        case 0:
          break;
        case 1:
          v208[1] = *(_BYTE *)(v32 + 9);
          break;
        case 2:
          *(_OWORD *)&v208[8] = *(_OWORD *)(v32 + 16);
          break;
        case 3:
          sub_1416DB410(&v208[8], v32 + 16);
          break;
        case 4:
          sub_1401C07A0(&v208[8], *(_QWORD *)(v32 + 24), *(_QWORD *)(v32 + 32));
          break;
        case 5:
          sub_140A96800(&v208[8], v32 + 16);
          break;
      }
      v208[0] = v62;
      v88 = v164;
      v89 = v165;
      v179 = v164;
      v180 = v165;
      v182 = *(_OWORD *)&v208[16];
      v90 = *(_OWORD *)v208;
      v181 = *(_OWORD *)v208;
      v3 = v231;
      v231[63] = *(_OWORD *)&v208[16];
      v3[62] = v90;
      v3[61] = v89;
      v3[60] = v88;
      v91 = v175;
      v92 = v176;
      v93 = v177;
      v3[59] = v178;
      v3[58] = v93;
      v3[57] = v92;
      v3[56] = v91;
      *((_QWORD *)v3 + 128) = v60;
      *((_QWORD *)v3 + 129) = v61;
      *((_QWORD *)v3 + 133) = v29;
      *((_QWORD *)v3 + 134) = v30;
      *((_QWORD *)v3 + 135) = v31;
      *(_WORD *)((char *)v3 + 1093) = 0;
LABEL_85:
      v226 = v3 + 56;
      sub_1406D6060((__int64 *)v208, v3 + 56, v223);
      v48 = *(_QWORD *)v208;
      if ( *(_QWORD *)v208 == -1 )
      {
        v83 = 3;
        goto LABEL_122;
      }
      goto LABEL_90;
    }
    v68 = *((_QWORD *)v231 + 109);
    v69 = *((_OWORD **)v231 + 110);
    v70 = *v53;
    switch ( v70 )
    {
      case 0:
        break;
      case 1:
        v208[1] = *(_BYTE *)(v32 + 9);
        break;
      case 2:
        *(_OWORD *)&v208[8] = *(_OWORD *)(v32 + 16);
        break;
      case 3:
        v229 = v232;
        v228 = v230;
        v227 = v28;
        v233 = v69;
        sub_1416DB410(&v208[8], v32 + 16);
        v69 = v233;
        break;
      case 4:
        v233 = *((_OWORD **)v231 + 110);
        v77 = *(_QWORD *)(v32 + 24);
        v78 = *(_QWORD *)(v32 + 32);
        v229 = v232;
        v228 = v230;
        v227 = v28;
        sub_1401C07A0(&v208[8], v77, v78);
        v69 = v233;
        break;
      case 5:
        v229 = v232;
        v228 = v230;
        v227 = v28;
        v233 = v69;
        sub_140A96800(&v208[8], v32 + 16);
        v69 = v233;
        break;
    }
    v208[0] = v70;
    v84 = *(_OWORD *)&v208[16];
    v155 = *(_OWORD *)&v208[16];
    v85 = *(_OWORD *)v208;
    v154 = *(_OWORD *)v208;
    v86 = v152;
    v87 = v153;
    v3 = v231;
    v231[60] = v156;
    v3[59] = v84;
    v3[58] = v85;
    v3[57] = v87;
    v3[56] = v86;
    *((_QWORD *)v3 + 122) = v68;
    *((_QWORD *)v3 + 123) = v69;
    *((_QWORD *)v3 + 127) = v29;
    *((_QWORD *)v3 + 128) = v30;
    *((_QWORD *)v3 + 129) = v31;
    *((_BYTE *)v3 + 1041) = 0;
LABEL_75:
    v233 = v28;
    v226 = v3 + 56;
    sub_1406DA510((__int64)v208, (__int64)(v3 + 56), v223);
    v48 = *(_QWORD *)v208;
    if ( *(_QWORD *)v208 == -1 )
    {
      v83 = 4;
      goto LABEL_122;
    }
LABEL_71:
    *(_OWORD *)&v220[112] = *(_OWORD *)&v208[120];
    *(_OWORD *)&v220[96] = *(_OWORD *)&v208[104];
    *(_OWORD *)&v220[80] = *(_OWORD *)&v208[88];
    *(_OWORD *)&v220[64] = *(_OWORD *)&v208[72];
    *(_OWORD *)&v220[48] = *(_OWORD *)&v208[56];
    *(_OWORD *)&v220[32] = *(_OWORD *)&v208[40];
    *(_OWORD *)&v220[16] = *(_OWORD *)&v208[24];
    *(_OWORD *)v220 = *(_OWORD *)&v208[8];
    v206 = v209;
    v229 = v232;
    v228 = v230;
    v51 = v233;
    v227 = v233;
    sub_1406B9A00(v226);
LABEL_91:
    v49 = v231;
    v100 = *((_QWORD *)v231 + 108);
    if ( v100 )
      sub_140001660(*((_QWORD *)v231 + 109), v100, 1);
    v50 = v232;
LABEL_94:
    v173 = *(_OWORD *)&v220[112];
    v172 = *(_OWORD *)&v220[96];
    v171 = *(_OWORD *)&v220[80];
    v170 = *(_OWORD *)&v220[64];
    v169 = *(_OWORD *)&v220[48];
    v168 = *(_OWORD *)&v220[32];
    v167 = *(_OWORD *)&v220[16];
    v166 = *(_OWORD *)v220;
    v174 = v206;
    *((_BYTE *)v49 + 888) = 1;
    *((_QWORD *)v49 + 84) = v48;
    *(__int128 *)((char *)v49 + 792) = v173;
    *(__int128 *)((char *)v49 + 776) = v172;
    *(__int128 *)((char *)v49 + 760) = v171;
    *(__int128 *)((char *)v49 + 744) = v170;
    v101 = v166;
    v102 = v167;
    v103 = v168;
    *(__int128 *)((char *)v49 + 728) = v169;
    *(__int128 *)((char *)v49 + 712) = v103;
    *(__int128 *)((char *)v49 + 696) = v102;
    *(__int128 *)((char *)v49 + 680) = v101;
    *(__int128 *)((char *)v49 + 808) = v174;
    v221 = v50;
    sub_1406B93B0(v51);
    v3 = v231;
    v104 = *((_QWORD *)v231 + 84);
    v105 = v104 < 3;
    v106 = v104 - 3;
    v107 = 1;
    if ( !v105 )
      v107 = v106;
    v232 = v50;
    if ( v107 != 1 )
    {
      v127 = (__int128 *)((char *)v231 + 680);
      if ( v107 )
      {
        v131 = *v127;
        v132 = *(__int128 *)((char *)v231 + 696);
        v133 = *(__int128 *)((char *)v231 + 712);
        v134 = *(__int128 *)((char *)v231 + 728);
        v135 = *(__int128 *)((char *)v231 + 744);
        v136 = *(__int128 *)((char *)v231 + 760);
        v137 = *(__int128 *)((char *)v231 + 776);
        v51[7] = *(__int128 *)((char *)v231 + 792);
        v51[6] = v137;
        v51[5] = v136;
        v51[4] = v135;
        v51[3] = v134;
        v51[2] = v133;
        v51[1] = v132;
        *v51 = v131;
        *((_BYTE *)v3 + 1296) = 0;
LABEL_109:
        v233 = v3 + 52;
        sub_1406EA060(v208, v3 + 52, v223);
        if ( *(_DWORD *)v208 == -1 )
        {
          v33 = 4;
          goto LABEL_123;
        }
        *(_OWORD *)&v207[112] = *(_OWORD *)&v208[112];
        *(_OWORD *)&v207[96] = *(_OWORD *)&v208[96];
        *(_OWORD *)&v207[80] = *(_OWORD *)&v208[80];
        *(_OWORD *)&v207[64] = *(_OWORD *)&v208[64];
        *(_OWORD *)&v207[48] = *(_OWORD *)&v208[48];
        *(_OWORD *)&v207[32] = *(_OWORD *)&v208[32];
        *(_OWORD *)&v207[16] = *(_OWORD *)&v208[16];
        *(_OWORD *)v207 = *(_OWORD *)v208;
        v13 = v232;
        v221 = v232;
        sub_1406BA120(v233);
      }
      else
      {
        *(_OWORD *)&v208[112] = *(__int128 *)((char *)v231 + 792);
        *(_OWORD *)&v208[96] = *(__int128 *)((char *)v231 + 776);
        *(_OWORD *)&v208[80] = *(__int128 *)((char *)v231 + 760);
        *(_OWORD *)&v208[64] = *(__int128 *)((char *)v231 + 744);
        v128 = *v127;
        v129 = *(__int128 *)((char *)v231 + 696);
        v130 = *(__int128 *)((char *)v231 + 712);
        *(_OWORD *)&v208[48] = *(__int128 *)((char *)v231 + 728);
        *(_OWORD *)&v208[32] = v130;
        *(_OWORD *)&v208[16] = v129;
        *(_OWORD *)v208 = v128;
        sub_1408D8560(
          *((_QWORD *)v231 + 20) + 8LL,
          *(_QWORD *)(*((_QWORD *)v231 + 82) + 8LL),
          *(_QWORD *)(*((_QWORD *)v231 + 82) + 16LL));
        *(_OWORD *)&v207[112] = *(_OWORD *)&v208[112];
        *(_OWORD *)&v207[96] = *(_OWORD *)&v208[96];
        *(_OWORD *)&v207[80] = *(_OWORD *)&v208[80];
        *(_OWORD *)&v207[64] = *(_OWORD *)&v208[64];
        *(_OWORD *)&v207[48] = *(_OWORD *)&v208[48];
        *(_OWORD *)&v207[32] = *(_OWORD *)&v208[32];
        *(_OWORD *)&v207[16] = *(_OWORD *)&v208[16];
        *(_OWORD *)v207 = *(_OWORD *)v208;
        v13 = v232;
      }
      v138 = v231;
      sub_140292FD0(v231 + 25);
      v74 = v138;
      if ( *((_DWORD *)v138 + 60) == -1 )
        goto LABEL_113;
      goto LABEL_112;
    }
    *(_OWORD *)&v208[112] = v231[49];
    *(_OWORD *)&v208[96] = v231[48];
    *(_OWORD *)&v208[80] = v231[47];
    *(_OWORD *)&v208[64] = v231[46];
    v108 = v231[42];
    v109 = v231[43];
    v110 = v231[44];
    *(_OWORD *)&v208[48] = v231[45];
    *(_OWORD *)&v208[32] = v110;
    *(_OWORD *)&v208[16] = v109;
    *(_OWORD *)v208 = v108;
    *(_QWORD *)&v176 = *((_QWORD *)v231 + 102);
    v175 = v231[50];
    v111 = *((_QWORD *)v231 + 20);
    v112 = *((_QWORD *)v231 + 82);
    v113 = *(_QWORD *)(v112 + 8);
    v114 = *(_QWORD *)(v112 + 16);
    v234 = 1;
    sub_1414331D0(v220);
    v115 = (volatile signed __int8 **)(v111 + 8);
    v116 = (*(int *)v220 >> 13) - 1;
    v117 = 0;
    if ( *(int *)v220 >> 13 <= 0 )
    {
      v118 = (1 - (*(int *)v220 >> 13)) / 0x190u + 1;
      v116 += 400 * v118;
      v117 = -146097 * v118;
    }
    v234 = 1;
    *(_QWORD *)&v161[0] = sub_1408D80C0(
                            v115,
                            v113,
                            v114,
                            1000
                          * (*(unsigned int *)&v220[4]
                           + 86400LL
                           * (((v116 / 100) >> 2)
                            + ((1461 * v116) >> 2)
                            + v117
                            + ((*(_DWORD *)v220 >> 4) & 0x1FF)
                            - v116 / 100
                            - 719163))
                          + *(unsigned int *)&v220[8] / 0xF4240uLL);
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v192 = *((_QWORD *)v231 + 82);
      *((_QWORD *)&v192 + 1) = sub_1400015F0;
      *(_QWORD *)&v193 = (char *)v231 + 664;
      *((_QWORD *)&v193 + 1) = sub_1416EBAE0;
      *(_QWORD *)&v194 = v231 + 23;
      *((_QWORD *)&v194 + 1) = sub_1416EBAE0;
      *(_QWORD *)&v195 = v161;
      *((_QWORD *)&v195 + 1) = sub_1416EBBB0;
      *(_QWORD *)&v196 = &v175;
      *((_QWORD *)&v196 + 1) = sub_1400015F0;
      *(_QWORD *)&v220[48] = 2;
      *(_QWORD *)&v220[56] = aCodexmateLibCo_5;
      *(_QWORD *)&v220[64] = 40;
      *(_QWORD *)&v220[80] = &unk_141A39D38;
      *(_QWORD *)&v220[88] = &v192;
      *(_QWORD *)v220 = 0;
      *(_QWORD *)&v220[8] = aCodexmateLibCo_5;
      *(_OWORD *)&v220[16] = 0x28u;
      *(_QWORD *)&v220[32] = aSrcCoreRelayPr_0;
      *(_QWORD *)&v220[40] = 30;
      *(_QWORD *)&v220[72] = 0x5C700000001LL;
      v234 = 1;
      sub_141503E20(&v224, v220);
    }
    v119 = *((_QWORD *)v231 + 20);
    v120 = *((_QWORD *)v231 + 82);
    v121 = *(_QWORD *)(v120 + 8);
    v122 = *(_QWORD *)(v120 + 16);
    v234 = 1;
    sub_140734A00(v119, v121, v122, DWORD2(v175), v176);
    v233 = v231 + 15;
    if ( *((_DWORD *)v231 + 60) != -1 )
      sub_14051B240(v233);
    v123 = v233;
    v233[7] = *(_OWORD *)&v208[112];
    v123[6] = *(_OWORD *)&v208[96];
    v123[5] = *(_OWORD *)&v208[80];
    v123[4] = *(_OWORD *)&v208[64];
    v124 = *(_OWORD *)v208;
    v125 = *(_OWORD *)&v208[16];
    v126 = *(_OWORD *)&v208[32];
    v123[3] = *(_OWORD *)&v208[48];
    v123[2] = v126;
    v123[1] = v125;
    *v123 = v124;
    if ( (_QWORD)v175 )
      sub_140001660(*((_QWORD *)&v175 + 1), v175, 1);
    v3 = v231;
    sub_140292FD0(v231 + 25);
    v17 = *((_QWORD *)v3 + 47);
    v18 = *((_QWORD *)v3 + 48);
    v13 = v232;
  }
  if ( v54 == 2 )
  {
    v55 = *((_QWORD *)v231 + 109);
    v56 = *((_OWORD **)v231 + 110);
    v57 = *v53;
    switch ( v57 )
    {
      case 0:
        break;
      case 1:
        v208[1] = *(_BYTE *)(v32 + 9);
        break;
      case 2:
        *(_OWORD *)&v208[8] = *(_OWORD *)(v32 + 16);
        break;
      case 3:
        v229 = v232;
        v228 = v230;
        v227 = v28;
        v233 = v56;
        sub_1416DB410(&v208[8], v32 + 16);
        v56 = v233;
        break;
      case 4:
        v233 = *((_OWORD **)v231 + 110);
        v75 = *(_QWORD *)(v32 + 24);
        v76 = *(_QWORD *)(v32 + 32);
        v229 = v232;
        v228 = v230;
        v227 = v28;
        sub_1401C07A0(&v208[8], v75, v76);
        v56 = v233;
        break;
      case 5:
        v229 = v232;
        v228 = v230;
        v227 = v28;
        v233 = v56;
        sub_140A96800(&v208[8], v32 + 16);
        v56 = v233;
        break;
    }
    v208[0] = v57;
    v79 = *(_OWORD *)&v208[16];
    v161[3] = *(_OWORD *)&v208[16];
    v80 = *(_OWORD *)v208;
    v161[2] = *(_OWORD *)v208;
    v81 = v161[0];
    v82 = v161[1];
    v3 = v231;
    v231[60] = v161[4];
    v3[59] = v79;
    v3[58] = v80;
    v3[57] = v82;
    v3[56] = v81;
    *((_QWORD *)v3 + 122) = v55;
    *((_QWORD *)v3 + 123) = v56;
    *((_QWORD *)v3 + 127) = v29;
    *((_QWORD *)v3 + 128) = v30;
    *((_QWORD *)v3 + 129) = v31;
    *((_BYTE *)v3 + 1041) = 0;
LABEL_70:
    v233 = v28;
    v226 = v3 + 56;
    sub_1406DA510((__int64)v208, (__int64)(v3 + 56), v223);
    v48 = *(_QWORD *)v208;
    if ( *(_QWORD *)v208 == -1 )
    {
      v83 = 5;
      goto LABEL_122;
    }
    goto LABEL_71;
  }
  v63 = *((_QWORD *)v30 + 13);
  v64 = *((_QWORD *)v30 + 14);
  v229 = v232;
  v228 = v27;
  v227 = v28;
  sub_1408B0A60(&v162, v32 + 8, v63, v64);
  v233 = v28;
  v65 = *((_QWORD *)v231 + 109);
  v66 = *((_QWORD *)v231 + 110);
  v67 = *v53;
  switch ( v67 )
  {
    case 0:
      break;
    case 1:
      v208[1] = *(_BYTE *)(v32 + 9);
      break;
    case 2:
      *(_OWORD *)&v208[8] = *(_OWORD *)(v32 + 16);
      break;
    case 3:
      sub_1416DB410(&v208[8], v32 + 16);
      break;
    case 4:
      sub_1401C07A0(&v208[8], *(_QWORD *)(v32 + 24), *(_QWORD *)(v32 + 32));
      break;
    case 5:
      sub_140A96800(&v208[8], v32 + 16);
      break;
  }
  v208[0] = v67;
  v94 = v162;
  v95 = v163;
  v196 = v162;
  v197 = v163;
  v199 = *(_OWORD *)&v208[16];
  v96 = *(_OWORD *)v208;
  v198 = *(_OWORD *)v208;
  v3 = v231;
  v231[63] = *(_OWORD *)&v208[16];
  v3[62] = v96;
  v3[61] = v95;
  v3[60] = v94;
  v97 = v192;
  v98 = v193;
  v99 = v194;
  v3[59] = v195;
  v3[58] = v99;
  v3[57] = v98;
  v3[56] = v97;
  *((_QWORD *)v3 + 128) = v65;
  *((_QWORD *)v3 + 129) = v66;
  *((_QWORD *)v3 + 133) = v29;
  *((_QWORD *)v3 + 134) = v30;
  *((_QWORD *)v3 + 135) = v31;
  *(_WORD *)((char *)v3 + 1093) = 256;
LABEL_89:
  v226 = v3 + 56;
  sub_1406D6060((__int64 *)v208, v3 + 56, v223);
  v48 = *(_QWORD *)v208;
  if ( *(_QWORD *)v208 != -1 )
  {
LABEL_90:
    *(_OWORD *)&v220[112] = *(_OWORD *)&v208[120];
    *(_OWORD *)&v220[96] = *(_OWORD *)&v208[104];
    *(_OWORD *)&v220[80] = *(_OWORD *)&v208[88];
    *(_OWORD *)&v220[64] = *(_OWORD *)&v208[72];
    *(_OWORD *)&v220[48] = *(_OWORD *)&v208[56];
    *(_OWORD *)&v220[32] = *(_OWORD *)&v208[40];
    *(_OWORD *)&v220[16] = *(_OWORD *)&v208[24];
    *(_OWORD *)v220 = *(_OWORD *)&v208[8];
    v206 = v209;
    v229 = v232;
    v228 = v230;
    v51 = v233;
    v227 = v233;
    sub_1406B9480(v226);
    goto LABEL_91;
  }
  v83 = 6;
LABEL_122:
  *v230 = v83;
  v33 = 3;
LABEL_123:
  *v225 = v33;
  v24 = v231;
LABEL_124:
  *v219 = -1;
  result = 3;
LABEL_125:
  *((_BYTE *)v24 + 1872) = result;
  return result;
}
