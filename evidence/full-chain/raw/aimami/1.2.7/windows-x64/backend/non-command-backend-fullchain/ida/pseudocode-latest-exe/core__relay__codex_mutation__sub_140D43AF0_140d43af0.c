// win 1.2.7 latest-exe | module src/core/relay/codex_mutation.rs | ea 0x140d43af0 | successor of pre-update 0x140c4dea0 | session <审计会话>
// match evidence: {"verdict": "CONFIRMED_STR_CAND"}
__int64 __fastcall sub_140D43AF0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rsi
  char v8; // al
  volatile void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rax
  void *v20; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r13
  char v24; // al
  __int64 v25; // rax
  int v26; // edx
  unsigned __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  void *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // r12
  volatile signed __int8 *v36; // rdx
  char *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rsi
  __int64 v40; // rbx
  __int64 v41; // r15
  __int64 v42; // r13
  char *v43; // r12
  volatile void *v44; // rcx
  volatile signed __int8 *v45; // rax
  int v46; // ebx
  char v47; // al
  char *v48; // rsi
  void *v49; // rax
  char v50; // al
  char *v51; // rdi
  char v52; // al
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // rsi
  char *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rbx
  __int64 v62; // r15
  char v63; // al
  __int128 v64; // kr50_16
  unsigned __int64 v65; // r15
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rsi
  unsigned __int128 v69; // kr00_16
  volatile signed __int8 *v70; // rsi
  int v71; // eax
  const char *v72; // r14
  __int64 v73; // rsi
  char v74; // al
  volatile signed __int8 *v75; // rdi
  char v76; // al
  __int128 v77; // krC0_16
  __int64 v78; // rsi
  int v79; // r14d
  __int64 v80; // r15
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  PVOID v88; // rcx
  char v89; // al
  char v90; // al
  int v91; // esi
  int v92; // esi
  __int64 v94; // [rsp+28h] [rbp-58h]
  _BYTE v95[136]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v96[82]; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD v97[22]; // [rsp+358h] [rbp+2D8h] BYREF
  __int64 v98; // [rsp+408h] [rbp+388h]
  __int64 v99; // [rsp+410h] [rbp+390h]
  __int64 v100[22]; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v101; // [rsp+520h] [rbp+4A0h]
  __int64 v102; // [rsp+528h] [rbp+4A8h]
  __int128 v103; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v104; // [rsp+570h] [rbp+4F0h]
  const char *v105; // [rsp+7F8h] [rbp+778h] BYREF
  _BYTE v106[88]; // [rsp+800h] [rbp+780h]
  __int64 v107; // [rsp+858h] [rbp+7D8h]
  char v108[48]; // [rsp+860h] [rbp+7E0h] BYREF
  _QWORD v109[28]; // [rsp+890h] [rbp+810h] BYREF
  __int64 v110; // [rsp+970h] [rbp+8F0h]
  __int64 v111; // [rsp+A10h] [rbp+990h]
  __int64 v112; // [rsp+A18h] [rbp+998h]
  char v113[176]; // [rsp+A30h] [rbp+9B0h] BYREF
  char v114[88]; // [rsp+AE0h] [rbp+A60h] BYREF
  char v115[40]; // [rsp+B38h] [rbp+AB8h] BYREF
  __int128 v116; // [rsp+B60h] [rbp+AE0h]
  __int64 v117; // [rsp+B70h] [rbp+AF0h]
  char v118[24]; // [rsp+B78h] [rbp+AF8h] BYREF
  char v119[56]; // [rsp+B90h] [rbp+B10h] BYREF
  __int64 v120; // [rsp+BC8h] [rbp+B48h]
  __int64 v121; // [rsp+BD0h] [rbp+B50h]
  char v122[136]; // [rsp+BE0h] [rbp+B60h] BYREF
  _BYTE v123[24]; // [rsp+C68h] [rbp+BE8h] BYREF
  __int128 v124; // [rsp+C80h] [rbp+C00h] BYREF
  __int128 v125; // [rsp+C90h] [rbp+C10h]
  __int128 v126; // [rsp+CA0h] [rbp+C20h]
  __int128 v127; // [rsp+CB0h] [rbp+C30h]
  __int128 v128; // [rsp+CC0h] [rbp+C40h]
  __int64 v129; // [rsp+CD0h] [rbp+C50h]
  __int128 v130; // [rsp+EF8h] [rbp+E78h]
  __int64 v131; // [rsp+F08h] [rbp+E88h]
  _QWORD v132[6]; // [rsp+F10h] [rbp+E90h] BYREF
  __int128 v133; // [rsp+F40h] [rbp+EC0h]
  __int128 v134; // [rsp+F50h] [rbp+ED0h]
  __int128 v135; // [rsp+F60h] [rbp+EE0h]
  __int64 v136; // [rsp+F70h] [rbp+EF0h]
  char v137[72]; // [rsp+F78h] [rbp+EF8h] BYREF
  __int64 v138; // [rsp+FC0h] [rbp+F40h]
  __int64 v139; // [rsp+FC8h] [rbp+F48h]
  __int64 v140; // [rsp+FD0h] [rbp+F50h]
  _BYTE v141[24]; // [rsp+1000h] [rbp+F80h] BYREF
  _BYTE v142[72]; // [rsp+1018h] [rbp+F98h]
  __int64 v143; // [rsp+1060h] [rbp+FE0h]
  _BYTE v144[496]; // [rsp+1068h] [rbp+FE8h] BYREF
  __int64 v145; // [rsp+1258h] [rbp+11D8h]
  __int64 v146; // [rsp+12E0h] [rbp+1260h]
  void *v147; // [rsp+12E8h] [rbp+1268h]
  __int64 v148; // [rsp+12F0h] [rbp+1270h]
  __int64 v149; // [rsp+12F8h] [rbp+1278h]
  __int64 v150; // [rsp+1300h] [rbp+1280h]
  __int64 v151; // [rsp+1310h] [rbp+1290h]
  __int64 v152; // [rsp+1318h] [rbp+1298h]
  HANDLE hObject[2]; // [rsp+1470h] [rbp+13F0h] BYREF
  __int128 v154; // [rsp+1480h] [rbp+1400h]
  __int128 v155; // [rsp+1490h] [rbp+1410h]
  __int128 v156; // [rsp+14A0h] [rbp+1420h]
  __int128 v157; // [rsp+14B0h] [rbp+1430h]
  __int64 v158; // [rsp+14C0h] [rbp+1440h]
  __int128 v159; // [rsp+14D0h] [rbp+1450h]
  __int128 v160; // [rsp+14E0h] [rbp+1460h]
  __int128 v161; // [rsp+14F0h] [rbp+1470h]
  __int64 v162; // [rsp+1500h] [rbp+1480h]
  __int128 v163; // [rsp+1510h] [rbp+1490h]
  __int128 v164; // [rsp+1520h] [rbp+14A0h]
  __int128 v165; // [rsp+1530h] [rbp+14B0h]
  __int64 v166; // [rsp+1540h] [rbp+14C0h]
  __int64 v167; // [rsp+1550h] [rbp+14D0h]
  __int64 v168; // [rsp+1558h] [rbp+14D8h]
  __int128 v169; // [rsp+1560h] [rbp+14E0h] BYREF
  __int128 v170; // [rsp+1570h] [rbp+14F0h]
  __int128 v171; // [rsp+1580h] [rbp+1500h]
  __int64 v172; // [rsp+1590h] [rbp+1510h]
  _QWORD *v173; // [rsp+1598h] [rbp+1518h]
  _QWORD v174[2]; // [rsp+15A0h] [rbp+1520h] BYREF
  __int64 v175; // [rsp+15B0h] [rbp+1530h] BYREF
  __int64 v176; // [rsp+15B8h] [rbp+1538h]
  __int64 v177; // [rsp+15C0h] [rbp+1540h]
  __int64 v178; // [rsp+15C8h] [rbp+1548h]
  __int64 v179; // [rsp+15D0h] [rbp+1550h]
  HANDLE v180; // [rsp+15D8h] [rbp+1558h] BYREF
  __int64 v181; // [rsp+15E0h] [rbp+1560h]
  __int64 v182; // [rsp+15E8h] [rbp+1568h]
  __int64 v183; // [rsp+15F0h] [rbp+1570h]
  char *v184; // [rsp+15F8h] [rbp+1578h]
  char v185; // [rsp+1607h] [rbp+1587h] BYREF
  __int64 v186; // [rsp+1608h] [rbp+1588h]
  __int128 v187; // [rsp+1610h] [rbp+1590h]
  __int128 v188; // [rsp+1620h] [rbp+15A0h]
  __int128 v189; // [rsp+1630h] [rbp+15B0h]
  __int64 v190; // [rsp+1640h] [rbp+15C0h]
  __int64 v191; // [rsp+1648h] [rbp+15C8h]
  __int64 v192; // [rsp+1650h] [rbp+15D0h]
  __int64 v193; // [rsp+1658h] [rbp+15D8h]
  __int64 v194; // [rsp+1660h] [rbp+15E0h]
  __int64 v195; // [rsp+1668h] [rbp+15E8h]
  __int64 v196; // [rsp+1670h] [rbp+15F0h]
  unsigned __int64 v197; // [rsp+1678h] [rbp+15F8h]
  __int64 v198; // [rsp+1680h] [rbp+1600h]
  __int64 v199; // [rsp+1688h] [rbp+1608h]
  __int64 v200; // [rsp+1690h] [rbp+1610h]
  __int128 v201; // [rsp+1698h] [rbp+1618h]
  __int64 v202; // [rsp+16A8h] [rbp+1628h]
  PVOID v203; // [rsp+16B0h] [rbp+1630h]
  __int64 v204; // [rsp+16B8h] [rbp+1638h]
  PVOID Address; // [rsp+16C0h] [rbp+1640h]
  volatile signed __int8 *v206; // [rsp+16C8h] [rbp+1648h]
  __int64 v207; // [rsp+16D0h] [rbp+1650h]
  __int64 v208; // [rsp+16D8h] [rbp+1658h]
  unsigned __int8 v209; // [rsp+16E6h] [rbp+1666h]
  char v210; // [rsp+16E7h] [rbp+1667h]
  char v211; // [rsp+16E8h] [rbp+1668h]
  char v212; // [rsp+16E9h] [rbp+1669h]
  char v213; // [rsp+16EAh] [rbp+166Ah]
  char v214; // [rsp+16EBh] [rbp+166Bh]
  char v215; // [rsp+16ECh] [rbp+166Ch]
  char v216; // [rsp+16EDh] [rbp+166Dh]
  char v217; // [rsp+16EEh] [rbp+166Eh]
  char v218; // [rsp+16EFh] [rbp+166Fh]
  __int64 v219; // [rsp+16F0h] [rbp+1670h]

  v219 = -2;
  v181 = a1;
  v174[0] = a3;
  v174[1] = a4;
  v97[0] = -1;
  v100[0] = -1;
  v167 = a2[1];
  v173 = a2;
  v168 = a2[2];
  v7 = -1;
  v204 = v168;
  while ( 1 )
  {
    v199 = v4;
    v198 = v7;
    v8 = sub_1404B5D10(v174, 1, 0);
    if ( v8 == 2 || (v8 & 1) != 0 )
      break;
    v9 = (volatile void *)(*(_QWORD *)(*(_QWORD *)(v181 + 136) + 5016LL) + 16LL);
    v199 = v4;
    v198 = v7;
    v10 = sub_140506FA0(v9);
    v11 = v10;
    if ( !v10 )
    {
      v105 = aCodexmateLibCo;
      *(_QWORD *)v106 = 61;
      *(_QWORD *)v141 = &v105;
      *(_QWORD *)&v141[8] = sub_140191200;
      v199 = v4;
      v198 = v7;
      sub_14196B850(&unk_141A2A620, v141, &off_141A2A6A8);
    }
    v199 = v4;
    v198 = v7;
    sub_140874350(v141, v10);
    v15 = *(char **)&v141[8];
    v203 = *(PVOID *)v141;
    v196 = v4;
    v191 = v7;
    if ( *(_QWORD *)v141 != -1 )
    {
      v16 = *(_QWORD *)&v141[16];
      v17 = *(_QWORD *)&v142[8];
      v6 = *(_QWORD *)v142;
      v124 = *(_OWORD *)&v142[16];
      v125 = *(_OWORD *)&v142[32];
      v126 = *(_OWORD *)&v142[48];
      *(_QWORD *)&v127 = *(_QWORD *)&v142[64];
      v5 = *(_QWORD *)&v141[8];
      v18 = v178;
      goto LABEL_7;
    }
    v194 = v6;
    if ( v141[16] == 2 )
    {
      v21 = v204;
      v22 = v202;
      v23 = v200;
LABEL_16:
      v200 = v23;
      v202 = v22;
      v204 = v21;
      v17 = v186;
      v16 = v193;
      v6 = v194;
LABEL_92:
      v193 = v16;
      v186 = v17;
      v53 = v7 - 1;
      v54 = v7;
      v7 = -1;
      if ( v53 <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v4, v54, 1);
    }
    else
    {
      if ( (v141[16] & 1) == 0 )
      {
        if ( 2 * *off_142240260 )
        {
          v199 = v4;
          v198 = v7;
          if ( !(unsigned __int8)sub_14196A710(v13, v12, v14) )
            v15[1] = 1;
        }
      }
      v24 = *v15;
      *v15 = 0;
      if ( v24 == 2 )
      {
        v199 = v4;
        v198 = v7;
        WakeByAddressSingle(v15);
      }
      v199 = v4;
      v198 = v7;
      v25 = sub_1416AEBD0(v13, v12);
      v199 = v4;
      v198 = v7;
      sub_14070CFE0((unsigned int)v141, (unsigned int)v97, v167, v168, v25, v26);
      v203 = *(PVOID *)&v141[8];
      v27 = *(_QWORD *)&v141[16];
      v28 = *(_QWORD *)&v142[8];
      v22 = *(_QWORD *)v142;
      v29 = *(_QWORD *)&v142[16];
      v163 = *(_OWORD *)&v142[24];
      v164 = *(_OWORD *)&v142[40];
      v165 = *(_OWORD *)&v142[56];
      v166 = v143;
      if ( *(_QWORD *)v141 == -2 )
      {
        v124 = v163;
        v125 = v164;
        v126 = v165;
        *(_QWORD *)&v127 = v166;
        v17 = *(_QWORD *)&v142[16];
        v18 = v178;
        goto LABEL_91;
      }
      v183 = *(_QWORD *)v141;
      sub_1419234B0(v95, v144, 136);
      if ( (_DWORD)v183 == -1 )
      {
        v21 = v204;
        v22 = v202;
        v23 = v200;
        v4 = v196;
        v7 = v191;
        goto LABEL_16;
      }
      v132[0] = v183;
      v132[1] = v203;
      v132[2] = v27;
      v132[3] = v22;
      v132[4] = v28;
      v132[5] = v29;
      v136 = v166;
      v135 = v165;
      v134 = v164;
      v133 = v163;
      sub_1419234B0(v137, v95, 136);
      v211 = 1;
      sub_140874350(v141, v11);
      v17 = v186;
      v23 = *(_QWORD *)v141;
      v27 = *(_QWORD *)&v141[8];
      if ( *(_QWORD *)v141 == -1 )
      {
        v23 = -1;
        if ( v141[16] != 2 )
        {
          v210 = v141[16];
          v203 = *(PVOID *)&v141[8];
          v218 = 1;
          v217 = 1;
          if ( (unsigned __int8)sub_1404B5E00(v174) == 2 )
            goto LABEL_81;
          v218 = 1;
          v217 = 1;
          runtime_display_state_get_snapshot(v141);
          if ( *(_DWORD *)v141 == -1 )
          {
            v209 = 3;
          }
          else
          {
            v209 = v144[489];
            v39 = v146;
            Address = v147;
            v40 = v148;
            v41 = v149;
            v208 = v150;
            v42 = v151;
            v182 = v152;
            sub_140CB8D40(v141);
            if ( v40 )
            {
              v43 = (char *)Address;
              do
              {
                sub_1401AF3C0(v43);
                v43 += 384;
                --v40;
              }
              while ( v40 );
            }
            if ( v39 )
              sub_140001660(Address, 384 * v39, 8);
            v17 = v186;
            if ( v41 != -1 )
            {
              if ( v41 )
                sub_140001660(v208, v41, 1);
              if ( (unsigned __int64)(v42 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v182, v42, 1);
            }
          }
          v44 = (volatile void *)(*(_QWORD *)(*(_QWORD *)(v181 + 136) + 5016LL) + 16LL);
          v218 = 1;
          v217 = 1;
          v45 = (volatile signed __int8 *)sub_140505D20(v44);
          v36 = v45;
          if ( !v45 )
          {
            v105 = aStdSyncPoisonM;
            *(_QWORD *)v106 = 76;
            *(_QWORD *)v141 = &v105;
            *(_QWORD *)&v141[8] = sub_140191200;
            v218 = 1;
            v217 = 1;
            sub_14196B850(&unk_141A2A620, v141, &off_141A2A6A8);
          }
          LOBYTE(v37) = 1;
          v23 = -1;
          if ( _InterlockedCompareExchange8(v45, 1, 0) )
          {
LABEL_81:
            v22 = v193;
            v28 = v194;
            v27 = v5;
LABEL_82:
            v51 = (char *)v203;
            if ( (v210 & 1) == 0 )
            {
              if ( 2 * *off_142240260 )
              {
                v211 = 1;
                if ( !(unsigned __int8)sub_14196A710(v37, v36, v38) )
                  v51[1] = 1;
              }
            }
            v52 = *v51;
            *v51 = 0;
            if ( v52 == 2 )
            {
              v211 = 1;
              WakeByAddressSingle(v51);
            }
            goto LABEL_86;
          }
          if ( 2 * *off_142240260 )
          {
            v218 = 1;
            v217 = 1;
            v70 = v45;
            v71 = sub_14196A710(v37, v45, v38);
            v36 = v70;
            v46 = v71;
            LOBYTE(v46) = v71 ^ 1;
          }
          else
          {
            v46 = 0;
          }
          v47 = *((_BYTE *)v36 + 1);
          *(_QWORD *)&v141[8] = v36;
          v141[16] = v46;
          *(_QWORD *)v141 = v47 != 0;
          if ( v47 )
          {
            v48 = (char *)v36;
            nullsub_1(v47 != 0, v36);
            v49 = (void *)sub_140001650(35, 1);
            if ( !v49 )
              sub_14196B2DB(1, 35);
            qmemcpy(v49, "Account repository lock is poisoned", 35);
            v193 = (__int64)v49;
            v37 = v48;
            if ( !(_BYTE)v46 )
            {
              if ( 2 * *off_142240260 )
              {
                v218 = 1;
                v217 = 1;
                v74 = sub_14196A710(v48, v36, v38);
                v37 = v48;
                if ( !v74 )
                  v48[1] = 1;
              }
            }
            v50 = *v37;
            *v37 = 0;
            v5 = 35;
            v23 = 10;
            if ( v50 == 2 )
            {
              v218 = 1;
              v217 = 1;
              WakeByAddressSingle(v37);
            }
            v194 = 35;
            goto LABEL_81;
          }
          LODWORD(v182) = v46;
          v55 = *((_QWORD *)v36 + 34);
          Address = (PVOID)v36;
          v56 = *((_QWORD *)v36 + 35);
          v214 = 1;
          v213 = 1;
          v212 = 1;
          v57 = v56;
          sub_140C9FE30(v141, v55);
          v23 = *(_QWORD *)v141;
          v21 = *(_QWORD *)&v141[8];
          v22 = *(_QWORD *)&v141[16];
          if ( *(_QWORD *)v141 != -1 )
          {
            v38 = *(_QWORD *)&v142[8];
            v28 = *(_QWORD *)v142;
            v187 = *(_OWORD *)&v142[16];
            v188 = *(_OWORD *)&v142[32];
            v189 = *(_OWORD *)&v142[48];
            v190 = *(_QWORD *)&v142[64];
            v36 = (volatile signed __int8 *)(*(_QWORD *)&v141[8] >> 8);
            goto LABEL_96;
          }
          if ( (v141[8] & 1) != 0 )
          {
            v207 = v55;
            v58 = (char *)Address + 8;
            v180 = *(HANDLE *)&v141[16];
            v59 = v195;
            v60 = v179;
            if ( (_DWORD)v183 == 2 )
              goto LABEL_100;
            v64 = v133;
            sub_140D12540(v141, *((_QWORD *)Address + 38), *((_QWORD *)Address + 39));
            v23 = *(_QWORD *)v141;
            v124 = *(_OWORD *)&v141[8];
            v125 = *(_OWORD *)v142;
            v126 = *(_OWORD *)&v142[16];
            v127 = *(_OWORD *)&v142[32];
            v128 = *(_OWORD *)&v142[48];
            v129 = *(_QWORD *)&v142[64];
            if ( *(_QWORD *)v141 != -1 )
            {
              *(_QWORD *)&v106[80] = v129;
              *(_OWORD *)&v106[64] = v128;
              *(_OWORD *)&v106[48] = v127;
              *(_OWORD *)&v106[32] = v126;
              *(_OWORD *)&v106[16] = v125;
              *(_OWORD *)v106 = v124;
              v59 = *((_QWORD *)&v124 + 1);
              v65 = v124;
              v66 = *((_QWORD *)&v125 + 1);
              v60 = v125;
              v169 = v126;
              v170 = v127;
              v171 = v128;
              v172 = v129;
              goto LABEL_116;
            }
            v158 = v129;
            v157 = v128;
            v156 = v127;
            v155 = v126;
            v154 = v125;
            *(_OWORD *)hObject = v124;
            sub_140944210((__int64)&v105, (__int64)v58, (__int64)hObject, v64, *((__int64 *)&v64 + 1));
            sub_140037470(&v124);
            v23 = (__int64)v105;
            v59 = *(_QWORD *)&v106[8];
            v65 = *(_QWORD *)v106;
            v66 = *(_QWORD *)&v106[24];
            v60 = *(_QWORD *)&v106[16];
            v169 = *(_OWORD *)&v106[32];
            v170 = *(_OWORD *)&v106[48];
            v171 = *(_OWORD *)&v106[64];
            v172 = *(_QWORD *)&v106[80];
            if ( v105 != (const char *)-1LL )
            {
LABEL_116:
              v190 = v172;
              v189 = v171;
              v188 = v170;
              v187 = v169;
              v206 = (volatile signed __int8 *)(v65 >> 8);
              v208 = -2;
              *((_QWORD *)&v201 + 1) = v66;
              v21 = (unsigned int)v65;
              v179 = v60;
              *(_QWORD *)&v201 = v60;
              v195 = v59;
              v68 = v59;
              goto LABEL_176;
            }
            if ( *(_QWORD *)v106 == -1 )
            {
LABEL_100:
              v184 = v58;
              v179 = v60;
              v195 = v59;
              hObject[0] = nullptr;
              v192 = -1;
              v61 = 0;
            }
            else
            {
              v176 = *(_QWORD *)&v106[8];
              v69 = *(_OWORD *)v106;
              v195 = v69 >> 64;
              v177 = v69;
              v179 = *(_QWORD *)&v106[16];
              sub_140C977B0(v141);
              v23 = *(_QWORD *)v141;
              if ( *(_QWORD *)v141 != -1 )
              {
                v201 = *(_OWORD *)v142;
                v187 = *(_OWORD *)&v142[16];
                v188 = *(_OWORD *)&v142[32];
                v189 = *(_OWORD *)&v142[48];
                v190 = *(_QWORD *)&v142[64];
                v206 = (volatile signed __int8 *)(*(_QWORD *)&v141[8] >> 8);
                v208 = -2;
                v21 = *(unsigned int *)&v141[8];
                v68 = *(_QWORD *)&v141[16];
                goto LABEL_174;
              }
              v184 = v58;
              v192 = v65;
              v208 = -1;
              if ( *(_QWORD *)&v141[8] != 1 )
              {
                v68 = v202;
                v23 = v200;
                v21 = v204;
                v65 = v192;
                goto LABEL_174;
              }
              hObject[0] = HANDLE_FLAG_INHERIT;
              hObject[1] = *(HANDLE *)&v141[16];
              v61 = 1;
            }
            sub_140C9CC90(v141, v207, v57);
            v23 = *(_QWORD *)v141;
            v21 = *(_QWORD *)&v141[8];
            v62 = *(_QWORD *)&v141[16];
            if ( *(_QWORD *)v141 != -1 )
            {
              v201 = *(_OWORD *)v142;
              v187 = *(_OWORD *)&v142[16];
              v188 = *(_OWORD *)&v142[32];
              v189 = *(_OWORD *)&v142[48];
              v190 = *(_QWORD *)&v142[64];
              v206 = (volatile signed __int8 *)(*(_QWORD *)&v141[8] >> 8);
              v208 = -2;
              goto LABEL_171;
            }
            v208 = -1;
            if ( *(_QWORD *)&v141[8] != 1 )
            {
              v21 = v204;
              v62 = v202;
              v23 = v200;
              goto LABEL_171;
            }
            v175 = *(_QWORD *)&v141[16];
            sub_140C9CEA0(v141, v207, v57);
            v23 = *(_QWORD *)v141;
            v21 = *(_QWORD *)&v141[8];
            v62 = *(_QWORD *)&v141[16];
            if ( *(_QWORD *)v141 != -1 )
            {
              v201 = *(_OWORD *)v142;
              v187 = *(_OWORD *)&v142[16];
              v188 = *(_OWORD *)&v142[32];
              v189 = *(_OWORD *)&v142[48];
              v190 = *(_QWORD *)&v142[64];
              v206 = (volatile signed __int8 *)(*(_QWORD *)&v141[8] >> 8);
              v67 = -2;
              goto LABEL_170;
            }
            v67 = -1;
            if ( *(_QWORD *)&v141[8] != 1 )
            {
              v21 = v204;
              v62 = v202;
              v23 = v200;
              goto LABEL_170;
            }
            *(_QWORD *)&v169 = *(_QWORD *)&v141[16];
            sub_14070E4B0(v141, v132);
            v21 = v141[8];
            if ( *(_QWORD *)v141 != -1 )
            {
              v23 = *(_QWORD *)v141;
              v206 = (volatile signed __int8 *)(((unsigned __int64)((v141[15] << 16)
                                                                  | (unsigned int)*(unsigned __int16 *)&v141[13]) << 32)
                                              | *(unsigned int *)&v141[9]);
              v207 = *(_QWORD *)&v141[16];
              v201 = *(_OWORD *)v142;
              v187 = *(_OWORD *)&v142[16];
              v188 = *(_OWORD *)&v142[32];
              v189 = *(_OWORD *)&v142[48];
              v190 = *(_QWORD *)&v142[64];
              v208 = -2;
              goto LABEL_169;
            }
            v208 = -1;
            if ( v141[8] != 1 )
              goto LABEL_168;
            if ( (_DWORD)v183 == 2 )
              goto LABEL_133;
            sub_140D12540(v141, *((_QWORD *)Address + 38), *((_QWORD *)Address + 39));
            v21 = *(_QWORD *)&v141[8];
            v207 = *(_QWORD *)&v141[16];
            v124 = *(_OWORD *)&v142[16];
            v125 = *(_OWORD *)&v142[32];
            v126 = *(_OWORD *)&v142[48];
            *(_QWORD *)&v127 = *(_QWORD *)&v142[64];
            if ( *(_QWORD *)v141 != -1 )
            {
              v23 = *(_QWORD *)v141;
              v206 = (volatile signed __int8 *)(*(_QWORD *)&v141[8] >> 8);
              v190 = v127;
              v189 = v126;
              v188 = v125;
              v187 = v124;
              v208 = -2;
              v201 = *(_OWORD *)v142;
              goto LABEL_169;
            }
            v105 = *(const char **)&v141[8];
            *(_QWORD *)v106 = v207;
            *(_OWORD *)&v106[8] = *(_OWORD *)v142;
            *(_QWORD *)&v106[72] = v127;
            *(_OWORD *)&v106[56] = v126;
            *(_OWORD *)&v106[40] = v125;
            *(_OWORD *)&v106[24] = v124;
            v77 = v133;
            sub_140944210((__int64)v141, (__int64)v184, (__int64)&v105, v133, *((__int64 *)&v133 + 1));
            v197 = *(_QWORD *)&v141[8];
            v207 = *(_QWORD *)&v141[16];
            v78 = *(_QWORD *)v142;
            if ( *(_QWORD *)v141 != -1 )
            {
              v23 = *(_QWORD *)v141;
              *((_QWORD *)&v201 + 1) = *(_QWORD *)&v142[8];
              v187 = *(_OWORD *)&v142[16];
              v188 = *(_OWORD *)&v142[32];
              v189 = *(_OWORD *)&v142[48];
              v190 = *(_QWORD *)&v142[64];
              v206 = (volatile signed __int8 *)(v197 >> 8);
              v208 = -2;
              v204 = (unsigned int)v197;
              goto LABEL_202;
            }
            v208 = -1;
            if ( v192 == -1 || !(unsigned __int8)sub_140222930(v207, *(_QWORD *)v142, v195, v179) )
            {
              v78 = v201;
              v23 = v200;
LABEL_199:
              if ( v197 )
                sub_140001660(v207, v197, 1);
              v207 = v202;
LABEL_202:
              sub_140037470(&v105);
              v21 = v204;
              *(_QWORD *)&v201 = v78;
              goto LABEL_169;
            }
            sub_14094B100(
              (unsigned int)v141,
              v207,
              v78,
              *((_QWORD *)Address + 42),
              *((_QWORD *)Address + 43),
              v77,
              *((__int64 *)&v77 + 1));
            v82 = *(_QWORD *)v141;
            if ( *(_QWORD *)v141 != -1
              || (v138 == -1 ? (v83 = 0) : (v83 = v139),
                  sub_140D1D410(
                    (unsigned int)v141,
                    (_DWORD)v184,
                    (unsigned int)&v105,
                    (unsigned int)v132,
                    v83,
                    v140,
                    v207,
                    v78),
                  v82 = *(_QWORD *)v141,
                  *(_QWORD *)v141 != -1) )
            {
              v23 = v82;
              v202 = *(_QWORD *)&v141[16];
              v204 = *(_QWORD *)&v141[8];
              v206 = (volatile signed __int8 *)(*(_QWORD *)&v141[8] >> 8);
              *((_QWORD *)&v201 + 1) = *(_QWORD *)&v142[8];
              v78 = *(_QWORD *)v142;
              v187 = *(_OWORD *)&v142[16];
              v188 = *(_OWORD *)&v142[32];
              v189 = *(_OWORD *)&v142[48];
              v190 = *(_QWORD *)&v142[64];
              v208 = -2;
              goto LABEL_199;
            }
            if ( v197 )
              sub_140001660(v207, v197, 1);
            sub_140037470(&v105);
LABEL_133:
            sub_140D01760(v141, v184);
            v72 = *(const char **)v141;
            v23 = *(_QWORD *)&v141[8];
            v21 = *(_QWORD *)&v141[16];
            v73 = *(_QWORD *)&v142[8];
            v207 = *(_QWORD *)v142;
            v197 = *(_QWORD *)&v142[16];
            v124 = *(_OWORD *)&v142[24];
            v125 = *(_OWORD *)&v142[40];
            v126 = *(_OWORD *)&v142[56];
            *(_QWORD *)&v127 = v143;
            if ( *(_QWORD *)v141 == 2 )
            {
              v206 = (volatile signed __int8 *)(*(_QWORD *)&v141[16] >> 8);
              v187 = v124;
              v188 = v125;
              v189 = v126;
              v190 = v127;
              v208 = -2;
              *((_QWORD *)&v201 + 1) = v197;
              *(_QWORD *)&v201 = *(_QWORD *)&v142[8];
              goto LABEL_169;
            }
            sub_1419234B0(v108, v144, 1032);
            *(_QWORD *)v106 = v23;
            *(_QWORD *)&v106[8] = v21;
            *(_QWORD *)&v106[16] = v207;
            *(_QWORD *)&v106[24] = v73;
            *(_QWORD *)&v106[32] = v197;
            v107 = v127;
            *(_OWORD *)&v106[72] = v126;
            *(_OWORD *)&v106[56] = v125;
            *(_OWORD *)&v106[40] = v124;
            v105 = v72;
            sub_14070E4B0(v141, v132);
            if ( *(_QWORD *)v141 != -1 )
            {
              v206 = (volatile signed __int8 *)(((unsigned __int64)((v141[15] << 16)
                                                                  | (unsigned int)*(unsigned __int16 *)&v141[13]) << 32)
                                              | *(unsigned int *)&v141[9]);
              v202 = *(_QWORD *)&v141[16];
              v201 = *(_OWORD *)v142;
              v187 = *(_OWORD *)&v142[16];
              v188 = *(_OWORD *)&v142[32];
              v189 = *(_OWORD *)&v142[48];
              v190 = *(_QWORD *)&v142[64];
              v208 = -2;
              v204 = v141[8];
              v200 = *(_QWORD *)v141;
              goto LABEL_167;
            }
            v208 = -1;
            if ( v141[8] != 1 )
              goto LABEL_167;
            v79 = v109[0];
            if ( v109[0] == 2 )
            {
              if ( (_DWORD)v183 == 2 )
                goto LABEL_148;
LABEL_167:
              sub_140CB7E20(&v105);
LABEL_168:
              v21 = v204;
              v207 = v202;
              v23 = v200;
LABEL_169:
              sub_1401AF000(&v169);
              v62 = v207;
              v67 = v208;
LABEL_170:
              v208 = v67;
              sub_1401AF000(&v175);
              v61 = (__int64)hObject[0];
LABEL_171:
              v68 = v62;
              if ( v61 )
              {
                sub_140CAF5C0(&hObject[1]);
                CloseHandle(hObject[1]);
              }
              v65 = v192;
              if ( v192 != -1 )
              {
LABEL_174:
                if ( v65 )
                  sub_140001660(v195, v65, 1);
              }
LABEL_176:
              sub_140CAF5C0(&v180);
              CloseHandle(v180);
            }
            else
            {
              if ( (_DWORD)v183 == 2
                || v110 != *((_QWORD *)&v133 + 1)
                || (unsigned int)sub_141923B40(v109[27], v133, v110) )
              {
                goto LABEL_167;
              }
LABEL_148:
              sub_140D24350(v141, v184, &v105, v209);
              v131 = v117;
              v130 = v116;
              v208 = *(_QWORD *)v141;
              v23 = *(_QWORD *)&v141[8];
              v21 = *(_QWORD *)&v141[16];
              v201 = *(_OWORD *)&v142[8];
              v80 = *(_QWORD *)v142;
              v187 = *(_OWORD *)&v142[24];
              v188 = *(_OWORD *)&v142[40];
              v189 = *(_OWORD *)&v142[56];
              v190 = v143;
              sub_1419234B0(&v124, v144, 632);
              sub_1419234B0(v96, &v124, 656);
              if ( v111 )
              {
                sub_140001660(v112, v111, 1);
                v79 = v109[0];
              }
              sub_140037940(v113);
              sub_1400375C0(&v105);
              sub_140037470(v114);
              sub_1400376C0(v115);
              if ( v79 != 2 )
                sub_140037CD0(v109);
              sub_140029260(v118);
              sub_140037500(v119);
              if ( v120 != -1 && v120 )
                sub_140001660(v121, v120, 1);
              sub_140026250(v122);
              sub_1401AF000(&v169);
              sub_1401AF000(&v175);
              v81 = v192;
              v177 = v192;
              v176 = v195;
              sub_140CB38B0(hObject);
              if ( (unsigned __int64)(v81 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v195, v192, 1);
              v214 = 1;
              v213 = 1;
              v212 = 1;
              sub_1401AF000(&v180);
              v206 = (volatile signed __int8 *)(v21 >> 8);
              v68 = v80;
            }
            v84 = v208;
            v22 = v68;
            if ( v208 == -2 )
            {
              v38 = *((_QWORD *)&v201 + 1);
              v28 = v201;
              v36 = v206;
LABEL_96:
              v37 = (char *)Address;
              v27 = ((_QWORD)v36 << 8) | (unsigned __int8)v21;
              v162 = v190;
              v161 = v189;
              v160 = v188;
              v159 = v187;
              v124 = v187;
              v125 = v188;
              v126 = v189;
              *(_QWORD *)&v127 = v190;
              v200 = v23;
              v202 = v22;
              v204 = v21;
              *((_QWORD *)&v201 + 1) = v38;
              v17 = v38;
              *(_QWORD *)&v201 = v28;
              if ( (_BYTE)v182 )
              {
LABEL_106:
                v206 = v36;
                v63 = *v37;
                *v37 = 0;
                if ( v63 == 2 )
                {
                  v218 = 1;
                  v217 = 1;
                  WakeByAddressSingle(v37);
                }
                goto LABEL_82;
              }
LABEL_105:
              if ( 2 * *off_142240260 )
              {
                v75 = v36;
                v218 = 1;
                v217 = 1;
                v76 = sub_14196A710(v37, v36, v38);
                v37 = (char *)Address;
                v36 = v75;
                if ( !v76 )
                  *((_BYTE *)Address + 1) = 1;
              }
              goto LABEL_106;
            }
            v162 = v190;
            v161 = v189;
            v160 = v188;
            v159 = v187;
            sub_1419234B0(&v103, v96, 656);
            if ( v84 != -1 )
            {
              *(_QWORD *)v141 = v84;
              *(_QWORD *)&v141[8] = v23;
              *(_QWORD *)&v141[16] = ((_QWORD)v206 << 8) | (unsigned __int8)v21;
              *(_QWORD *)v142 = v68;
              *(_OWORD *)&v142[8] = v201;
              v143 = v162;
              *(_OWORD *)&v142[56] = v161;
              *(_OWORD *)&v142[40] = v160;
              *(_OWORD *)&v142[24] = v159;
              sub_1419234B0(v144, &v103, 656);
              v149 = -1;
              if ( !(_BYTE)v182 )
              {
                if ( 2 * *off_142240260 )
                {
                  v216 = 1;
                  v215 = 1;
                  if ( !(unsigned __int8)sub_14196A710(v86, v85, v87) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v88 = Address;
              v89 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v89 == 2 )
              {
                v216 = 1;
                v215 = 1;
                WakeByAddressSingle(Address);
              }
              if ( (v210 & 1) == 0 )
              {
                if ( 2 * *off_142240260 )
                {
                  v216 = 0;
                  v215 = 1;
                  if ( !(unsigned __int8)sub_14196A710(v88, v85, v87) )
                    *((_BYTE *)v203 + 1) = 1;
                }
              }
              v90 = *(_BYTE *)v203;
              *(_BYTE *)v203 = 0;
              if ( v90 == 2 )
              {
                v216 = 0;
                v215 = 1;
                WakeByAddressSingle(v203);
              }
              v216 = 0;
              v215 = 1;
              if ( (unsigned __int8)sub_1404B5E00(v174) != 2 )
              {
                v216 = 0;
                v215 = 1;
                runtime_display_state_update_and_emit(v181, (__int64)v141, (__int64)aAuth_1, 4, 0, v94);
                v216 = 0;
                v215 = 0;
                sub_14070DB00(v97, v132);
                LOBYTE(v124) = v145 != -1;
                v105 = (const char *)&v124;
                *(_QWORD *)v106 = sub_1416EBC20;
                v216 = 0;
                v215 = 0;
                sub_1416DAFA0(v123, &unk_141A96C71, &v105);
                v216 = 0;
                v215 = 0;
                sub_1406C9730((unsigned int)aAccounts_2, 8, (unsigned int)aExternalAuthSy, 20, (__int64)v123);
                sub_140CB8F20(v141);
                v4 = v196;
                v7 = v191;
                goto LABEL_16;
              }
              sub_140CB8F20(v141);
              v204 = v21;
              v202 = v68;
              v200 = v23;
              v22 = v193;
              v28 = v194;
              v27 = v5;
              v23 = -1;
              v17 = v186;
              goto LABEL_86;
            }
            v200 = v23;
            v202 = v68;
            v204 = v21;
            v22 = v193;
            v28 = v194;
            v27 = v5;
            v23 = -1;
          }
          else
          {
            v23 = -1;
            v22 = v193;
            v28 = v194;
            v27 = v5;
          }
          v17 = v186;
          v36 = v206;
          v37 = (char *)Address;
          if ( (_BYTE)v182 )
            goto LABEL_106;
          goto LABEL_105;
        }
        v22 = v193;
        v28 = v194;
        v27 = v5;
      }
      else
      {
        v22 = *(_QWORD *)&v141[16];
        v17 = *(_QWORD *)&v142[8];
        v28 = *(_QWORD *)v142;
        v124 = *(_OWORD *)&v142[16];
        v125 = *(_OWORD *)&v142[32];
        v126 = *(_OWORD *)&v142[48];
        *(_QWORD *)&v127 = *(_QWORD *)&v142[64];
      }
LABEL_86:
      v203 = (PVOID)v23;
      if ( v138 != -1 && v138 )
        sub_140001660(v139, v138, 1);
      v18 = v178;
      if ( (_DWORD)v183 != 2 )
        sub_140037800(v132);
LABEL_91:
      v5 = v27;
      v16 = v22;
      v6 = v28;
      v4 = v196;
      v7 = v191;
      if ( v203 == (PVOID)-1LL )
        goto LABEL_92;
LABEL_7:
      v105 = (const char *)v203;
      *(_QWORD *)v106 = v5;
      v193 = v16;
      *(_QWORD *)&v106[8] = v16;
      *(_QWORD *)&v106[16] = v6;
      *(_QWORD *)&v106[24] = v17;
      *(_QWORD *)&v106[80] = v127;
      *(_OWORD *)&v106[64] = v126;
      *(_OWORD *)&v106[48] = v125;
      *(_OWORD *)&v106[32] = v124;
      v19 = (__int64)v203 - 2;
      if ( (unsigned __int64)v203 < 2 )
        v19 = 2;
      v186 = v17;
      switch ( v19 )
      {
        case 0LL:
          v96[0] = v5;
          switch ( v5 & 3 )
          {
            case 0uLL:
              LOBYTE(v31) = *(_BYTE *)(v5 + 16);
              break;
            case 1uLL:
              LOBYTE(v31) = *(_BYTE *)(v5 + 31);
              break;
            case 2uLL:
              v33 = sub_1416E2EE0(2, v203);
              LOBYTE(v31) = (*(__int64 (__fastcall **)(unsigned __int64))(v33 + 8))(HIDWORD(v5));
              break;
            case 3uLL:
              v31 = HIDWORD(v5);
              break;
          }
          LOBYTE(v132[0]) = v31;
          *(_QWORD *)&v103 = v132;
          *((_QWORD *)&v103 + 1) = sub_140D850A0;
          sub_1416DAFA0(v141, &unk_141A96CBE, &v103);
          v103 = *(_OWORD *)v141;
          v104 = *(_QWORD *)&v141[16];
          if ( (v5 & 3) - 2 >= 2 && (v5 & 3) != 0 )
          {
            *(_QWORD *)&v141[8] = v5 - 1;
            v141[0] = 3;
            sub_1416EBAD0(&v141[8]);
          }
          v30 = v104;
          v7 = v191;
          if ( v191 == -1 )
            goto LABEL_44;
          goto LABEL_42;
        case 1LL:
          nullsub_1(2, v203);
          v20 = (void *)sub_140001650(12, 1);
          if ( !v20 )
            sub_14196B2DB(1, 12);
          qmemcpy(v20, "invalid_json", 12);
LABEL_25:
          *(_QWORD *)&v103 = 12;
          *((_QWORD *)&v103 + 1) = v20;
          v104 = 12;
          v30 = 12;
          if ( v7 != -1 )
            goto LABEL_42;
LABEL_44:
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v96[0] = &v103;
            v96[1] = sub_1400015F0;
            *(_QWORD *)&v142[24] = 2;
            *(_QWORD *)&v142[32] = aCodexmateLibCo_47;
            *(_QWORD *)&v142[40] = 41;
            *(_QWORD *)&v142[56] = &unk_141A96CC4;
            *(_QWORD *)&v142[64] = v96;
            *(_QWORD *)v141 = 0;
            *(_QWORD *)&v141[8] = aCodexmateLibCo_47;
            *(_QWORD *)&v141[16] = 41;
            *(_QWORD *)v142 = 0;
            *(_QWORD *)&v142[8] = aSrcCommandsAcc_0;
            *(_QWORD *)&v142[16] = 32;
            *(_QWORD *)&v142[48] = 0x3500000001LL;
            sub_141503E20(&v185, v141);
            v30 = v104;
          }
          v35 = *((_QWORD *)&v103 + 1);
          v7 = v103;
          if ( (unsigned __int64)(v191 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v196, v191, 1);
          v178 = v30;
          v4 = v35;
          if ( v203 != (PVOID)2 )
            goto LABEL_49;
          break;
        case 7LL:
          nullsub_1(2, v203);
          v20 = (void *)sub_140001650(12, 1);
          if ( !v20 )
            sub_14196B2DB(1, 12);
          qmemcpy(v20, "invalid_auth", 12);
          goto LABEL_25;
        default:
          nullsub_1(2, v203);
          v32 = (void *)sub_140001650(11, 1);
          if ( !v32 )
            sub_14196B2DB(1, 11);
          qmemcpy(v32, "sync_failed", 11);
          *(_QWORD *)&v103 = 11;
          *((_QWORD *)&v103 + 1) = v32;
          v104 = 11;
          v30 = 11;
          if ( v7 == -1 )
            goto LABEL_44;
LABEL_42:
          if ( v18 != v30 )
            goto LABEL_44;
          v34 = *((_QWORD *)&v103 + 1);
          if ( (unsigned int)sub_141923B40(v196, *((_QWORD *)&v103 + 1), v18) )
            goto LABEL_44;
          if ( (_QWORD)v103 )
            sub_140001660(v34, v103, 1);
          v4 = v196;
          if ( v203 != (PVOID)2 )
          {
LABEL_49:
            v199 = v4;
            v198 = v7;
            sub_140CB96B0(&v105);
          }
          break;
      }
    }
  }
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v4, v7, 1);
  v91 = v97[0];
  if ( v97[0] != -1 )
  {
    if ( v98 != -1 && v98 )
      sub_140001660(v99, v98, 1);
    if ( v91 != 2 )
      sub_140037800(v97);
  }
  v92 = v100[0];
  if ( v100[0] != -1 )
  {
    if ( v101 != -1 && v101 )
      sub_140001660(v102, v101, 1);
    if ( v92 != 2 )
      sub_140037800(v100);
  }
  sub_1404D70A0(v174);
  if ( *v173 )
    sub_140001660(v173[1], *v173, 1);
  return sub_140CB76C0(v181);
}
