// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eab250 | successor of pre-update 0x140d8d9a0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.954, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int128 *__fastcall sub_140EAB250(__int128 *a1, _QWORD *a2, __int64 a3, char a4, __int128 a5)
{
  __int128 *v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v12; // r12
  char *v13; // r14
  __int64 *v14; // r15
  unsigned int v15; // r13d
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  char v20; // cl
  __int64 v22; // r8
  __int64 v23; // rax
  PVOID v24; // rcx
  __int64 v25; // rdx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // r14
  __int64 v30; // rcx
  char v31; // al
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // al
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int64 v49; // r14
  __int64 v50; // r14
  __int64 v51; // r13
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm2
  __int64 v62; // rbx
  char v63; // bl
  char v64; // al
  PVOID v65; // rcx
  char v66; // al
  char v67; // bl
  void *v68; // rdi
  void *v69; // rdi
  char v70; // cl
  _BYTE v71[384]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v72; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v73; // [rsp+1D8h] [rbp+158h]
  __int128 v74; // [rsp+1E8h] [rbp+168h]
  __int128 v75; // [rsp+1F8h] [rbp+178h]
  __int128 v76; // [rsp+208h] [rbp+188h]
  __int128 v77; // [rsp+218h] [rbp+198h]
  __int128 v78; // [rsp+228h] [rbp+1A8h]
  char v79[888]; // [rsp+238h] [rbp+1B8h] BYREF
  _BYTE v80[384]; // [rsp+5B0h] [rbp+530h] BYREF
  _BYTE v81[382]; // [rsp+730h] [rbp+6B0h] BYREF
  char v82; // [rsp+8AEh] [rbp+82Eh]
  __int64 v83; // [rsp+8B0h] [rbp+830h] BYREF
  __int128 v84; // [rsp+8B8h] [rbp+838h]
  __int128 v85; // [rsp+8C8h] [rbp+848h]
  __int128 v86; // [rsp+8D8h] [rbp+858h]
  __int128 v87; // [rsp+8E8h] [rbp+868h]
  __int128 v88; // [rsp+8F8h] [rbp+878h]
  __int128 v89; // [rsp+908h] [rbp+888h]
  __int128 v90; // [rsp+918h] [rbp+898h]
  __int128 v91; // [rsp+928h] [rbp+8A8h]
  __int128 v92; // [rsp+938h] [rbp+8B8h]
  __int128 v93; // [rsp+948h] [rbp+8C8h]
  __int64 v94; // [rsp+958h] [rbp+8D8h]
  __int128 v95; // [rsp+960h] [rbp+8E0h] BYREF
  __int128 v96; // [rsp+970h] [rbp+8F0h]
  __int128 v97; // [rsp+980h] [rbp+900h]
  __int128 v98; // [rsp+990h] [rbp+910h]
  __int128 v99; // [rsp+9A0h] [rbp+920h]
  __int128 v100; // [rsp+9B0h] [rbp+930h]
  char v101; // [rsp+ADEh] [rbp+A5Eh]
  _BYTE v102[104]; // [rsp+AE0h] [rbp+A60h] BYREF
  char v103[280]; // [rsp+B48h] [rbp+AC8h] BYREF
  __int128 v104; // [rsp+C60h] [rbp+BE0h]
  __int64 v105; // [rsp+C70h] [rbp+BF0h]
  __int128 v106; // [rsp+C78h] [rbp+BF8h]
  __int64 v107; // [rsp+C88h] [rbp+C08h]
  __int128 v108; // [rsp+EC0h] [rbp+E40h] BYREF
  __int64 v109; // [rsp+ED0h] [rbp+E50h]
  __int128 v110; // [rsp+ED8h] [rbp+E58h] BYREF
  __int64 v111; // [rsp+EE8h] [rbp+E68h]
  __int128 v112; // [rsp+EF0h] [rbp+E70h] BYREF
  __int64 v113; // [rsp+F00h] [rbp+E80h]
  __int128 v114; // [rsp+F08h] [rbp+E88h] BYREF
  __int128 v115; // [rsp+F18h] [rbp+E98h]
  __int128 v116; // [rsp+F28h] [rbp+EA8h]
  __int128 v117; // [rsp+F38h] [rbp+EB8h]
  __int128 v118; // [rsp+F48h] [rbp+EC8h]
  __int128 v119; // [rsp+F58h] [rbp+ED8h]
  __int64 v120; // [rsp+F68h] [rbp+EE8h]
  _BYTE v121[104]; // [rsp+F70h] [rbp+EF0h] BYREF
  __int128 v122; // [rsp+FD8h] [rbp+F58h]
  __int128 v123; // [rsp+FE8h] [rbp+F68h]
  __int128 v124; // [rsp+FF8h] [rbp+F78h]
  __int128 v125; // [rsp+1008h] [rbp+F88h]
  __int64 v126; // [rsp+1018h] [rbp+F98h]
  __int128 v127; // [rsp+10F0h] [rbp+1070h] BYREF
  __int128 v128; // [rsp+1100h] [rbp+1080h]
  __int128 v129; // [rsp+1110h] [rbp+1090h]
  __int128 v130; // [rsp+1120h] [rbp+10A0h]
  __int128 v131; // [rsp+1130h] [rbp+10B0h] BYREF
  __int64 v132; // [rsp+1140h] [rbp+10C0h]
  __int64 v133; // [rsp+1148h] [rbp+10C8h]
  __int128 v134; // [rsp+1150h] [rbp+10D0h] BYREF
  __int64 v135; // [rsp+1160h] [rbp+10E0h]
  __int128 *v136; // [rsp+1168h] [rbp+10E8h] BYREF
  PVOID v137; // [rsp+1170h] [rbp+10F0h]
  __int64 v138; // [rsp+1178h] [rbp+10F8h]
  __int128 v139; // [rsp+1180h] [rbp+1100h] BYREF
  __int64 v140; // [rsp+1190h] [rbp+1110h]
  PVOID Address; // [rsp+1198h] [rbp+1118h]
  int v142; // [rsp+11A4h] [rbp+1124h]
  unsigned int v143; // [rsp+11A8h] [rbp+1128h]
  char v144; // [rsp+11ACh] [rbp+112Ch] BYREF
  unsigned __int8 v145; // [rsp+11ADh] [rbp+112Dh]
  char v146; // [rsp+11AEh] [rbp+112Eh]
  char v147; // [rsp+11AFh] [rbp+112Fh] BYREF
  __int64 v148; // [rsp+11B0h] [rbp+1130h]

  v148 = -2;
  v6 = a1;
  v147 = a3;
  v131 = a5;
  v7 = a2[2];
  if ( *(_QWORD *)(v7 + 16) != -1 )
  {
    sub_1416DB410(&v102[8], v7 + 16);
    *(_QWORD *)v102 = 9;
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v102[80];
    v8 = *(_OWORD *)&v102[16];
    v9 = *(_OWORD *)&v102[32];
    v10 = *(_OWORD *)&v102[48];
    *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v102[64];
    *(__int128 *)((char *)v6 + 56) = v10;
    *(__int128 *)((char *)v6 + 40) = v9;
    *(__int128 *)((char *)v6 + 24) = v8;
    *(__int128 *)((char *)v6 + 8) = *(_OWORD *)v102;
LABEL_13:
    *(_QWORD *)v6 = -1;
    return v6;
  }
  v12 = a2[4];
  v13 = (char *)(v12 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v12 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v12 + 16));
  v14 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v15 = sub_14196A710(a1, v7, a3);
    LOBYTE(v15) = v15 ^ 1;
    if ( *(_BYTE *)(v12 + 17) )
      goto LABEL_7;
  }
  else
  {
    v15 = 0;
    if ( *(_BYTE *)(v12 + 17) )
    {
LABEL_7:
      nullsub_1(a1, v7);
      v16 = (void *)sub_140001650(40, 1);
      if ( !v16 )
      {
        v143 = v15;
        Address = (PVOID)(v12 + 16);
        sub_14196B2DB(1, 40);
      }
      qmemcpy(v16, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v15 )
      {
        v19 = 2 * *v14;
        if ( v19 )
        {
          v69 = v16;
          v70 = sub_14196A710(v19, v17, v18);
          v16 = v69;
          if ( !v70 )
            *(_BYTE *)(v12 + 17) = 1;
        }
      }
      v20 = *v13;
      *v13 = 0;
      if ( v20 == 2 )
      {
        v68 = v16;
        WakeByAddressSingle((PVOID)(v12 + 16));
        v16 = v68;
      }
      *((_QWORD *)v6 + 1) = 10;
      *((_QWORD *)v6 + 2) = 40;
      *((_QWORD *)v6 + 3) = v16;
      *((_QWORD *)v6 + 4) = 40;
      goto LABEL_13;
    }
  }
  v143 = v15;
  Address = (PVOID)(v12 + 16);
  sub_1408741F0(v102, a2 + 5, aSwitchingRoute, 29);
  v24 = *(PVOID *)&v102[8];
  v23 = *(_QWORD *)v102;
  v25 = v102[16];
  if ( *(_QWORD *)v102 == -1 )
  {
    v145 = v102[16];
    v137 = *(PVOID *)&v102[8];
    sub_140EB7850(v81, a2);
    if ( v81[364] )
    {
      v146 = 1;
      sub_140E9E6E0(v102, a2);
      v29 = *(_QWORD *)v102;
      *(_OWORD *)v121 = *(_OWORD *)&v102[8];
      *(_OWORD *)&v121[16] = *(_OWORD *)&v102[24];
      *(_OWORD *)&v121[32] = *(_OWORD *)&v102[40];
      *(_OWORD *)&v121[48] = *(_OWORD *)&v102[56];
      *(_OWORD *)&v121[64] = *(_OWORD *)&v102[72];
      *(_OWORD *)&v121[80] = *(_OWORD *)&v102[88];
      if ( *(_QWORD *)v102 != -1 )
      {
        sub_1419234B0(v79, v103, 888);
        v73 = *(_OWORD *)v121;
        v74 = *(_OWORD *)&v121[16];
        v75 = *(_OWORD *)&v121[32];
        v76 = *(_OWORD *)&v121[48];
        v77 = *(_OWORD *)&v121[64];
        v78 = *(_OWORD *)&v121[80];
        v72 = v29;
        if ( v82 == v147 )
        {
          sub_1407D66C0(v102, *a2 + 16LL);
          v30 = *(_QWORD *)v102;
          v31 = v102[8];
          if ( *(_QWORD *)v102 != -1 )
          {
            *((_QWORD *)v6 + 12) = *(_QWORD *)&v102[88];
            *(__int128 *)((char *)v6 + 81) = *(_OWORD *)&v102[73];
            v32 = *(_OWORD *)&v102[9];
            v33 = *(_OWORD *)&v102[25];
            v34 = *(_OWORD *)&v102[41];
            *(__int128 *)((char *)v6 + 65) = *(_OWORD *)&v102[57];
            *(__int128 *)((char *)v6 + 49) = v34;
            *(__int128 *)((char *)v6 + 33) = v33;
            *(__int128 *)((char *)v6 + 17) = v32;
            *((_QWORD *)v6 + 1) = v30;
            *((_BYTE *)v6 + 16) = v31;
            *(_QWORD *)v6 = -1;
LABEL_73:
            sub_140038710(&v72);
            goto LABEL_74;
          }
          if ( (v102[8] & 1) == 0 )
          {
            sub_140EAD220((unsigned int)v102, a2[3], (unsigned int)&v72, 0, 0);
            v49 = *(_QWORD *)&v102[16];
            sub_1400293E0(v102);
            if ( !v49 )
            {
              sub_140EA5910(v102, a2);
              if ( *(_QWORD *)v102 == -1 )
              {
                sub_140E9EEE0(v102, a2);
                v67 = v82;
                sub_1419234B0(v6, v102, 384);
                *((_QWORD *)v6 + 48) = 0;
                *((_QWORD *)v6 + 49) = 8;
                *((_QWORD *)v6 + 50) = 0;
                *((_QWORD *)v6 + 51) = -1;
                *((_BYTE *)v6 + 432) = v67;
                goto LABEL_73;
              }
              if ( *(_QWORD *)v102 )
                sub_140001660(*(_QWORD *)&v102[8], *(_QWORD *)v102, 1);
            }
          }
        }
        v136 = &v131;
        v50 = v131;
        if ( (_QWORD)v131 )
        {
          v51 = *((_QWORD *)&v131 + 1);
          sub_140E9C7C0(v102, aPreparing, 9);
          (*(void (__fastcall **)(__int64, _BYTE *))(v51 + 40))(v50, v102);
        }
        sub_140ED7B40(v80, v81);
        v80[382] = v147;
        sub_1401DFE20(v102, v80);
        sub_1401E01F0(v121, v102, &v72);
        v95 = *(_OWORD *)&v121[8];
        v96 = *(_OWORD *)&v121[24];
        v97 = *(_OWORD *)&v121[40];
        v98 = *(_OWORD *)&v121[56];
        v99 = *(_OWORD *)&v121[72];
        v100 = *(_OWORD *)&v121[88];
        if ( *(_QWORD *)v121 == -2 )
        {
          *(__int128 *)((char *)v6 + 88) = v100;
          *(__int128 *)((char *)v6 + 72) = v99;
          v52 = v95;
          v53 = v96;
          v54 = v97;
          *(__int128 *)((char *)v6 + 56) = v98;
          *(__int128 *)((char *)v6 + 40) = v54;
          *(__int128 *)((char *)v6 + 24) = v53;
          *(__int128 *)((char *)v6 + 8) = v52;
          *(_QWORD *)v6 = -1;
LABEL_72:
          sub_140292E20(v80);
          goto LABEL_73;
        }
        v94 = v126;
        v93 = v125;
        v92 = v124;
        v91 = v123;
        v90 = v122;
        v84 = v95;
        v85 = v96;
        v86 = v97;
        v87 = v98;
        v88 = v99;
        v89 = v100;
        v83 = *(_QWORD *)v121;
        if ( a4 )
          v142 = sub_140980290();
        else
          v142 = 0;
        sub_140E994D0(v136, aStoppingCodex, 14);
        *(_QWORD *)v102 = &v136;
        *(_QWORD *)&v102[8] = &v147;
        *(_QWORD *)&v102[16] = &v72;
        *(_QWORD *)&v102[24] = a2;
        *(_QWORD *)&v102[32] = &v83;
        sub_140DCE020(
          (unsigned int)&v114,
          (unsigned int)&v72,
          (unsigned int)&v72,
          0,
          0,
          (__int64)v102,
          a2[3],
          (__int64)&v72,
          (__int64)a2,
          (__int64)&v147);
        if ( (_DWORD)v114 != -1 )
        {
          if ( (_BYTE)v120 )
          {
            *(_QWORD *)&v102[96] = v120;
            *(_OWORD *)&v102[80] = v119;
            *(_OWORD *)&v102[64] = v118;
            *(_OWORD *)&v102[48] = v117;
            *(_OWORD *)&v102[32] = v116;
            *(_OWORD *)&v102[16] = v115;
            *(_OWORD *)v102 = v114;
            *(_QWORD *)&v95 = v102;
            *((_QWORD *)&v95 + 1) = sub_140EDAE40;
            sub_1416DAFA0(v121, &unk_141AA043E, &v95);
            v133 = *(_QWORD *)&v121[8];
            v138 = *(_QWORD *)v121;
            sub_140EA8770(
              (unsigned int)&v95,
              (_DWORD)a2,
              (unsigned int)&v72,
              *(_DWORD *)&v121[8],
              *(__int64 *)&v121[16],
              (__int64)v81);
            if ( (_DWORD)v95 != -1 )
            {
              *(_OWORD *)&v121[80] = v100;
              *(_OWORD *)&v121[64] = v99;
              *(_OWORD *)&v121[48] = v98;
              *(_OWORD *)&v121[32] = v97;
              *(_OWORD *)&v121[16] = v96;
              *(_OWORD *)v121 = v95;
              *(_QWORD *)&v127 = v102;
              *((_QWORD *)&v127 + 1) = sub_140EDAE40;
              *(_QWORD *)&v128 = v121;
              *((_QWORD *)&v128 + 1) = sub_140D76130;
              sub_1416DAFA0(&v110, &unk_141AA04B1, &v127);
              *((_QWORD *)v6 + 4) = v111;
              v6[1] = v110;
              *((_QWORD *)v6 + 1) = 10;
              *(_QWORD *)v6 = -1;
              sub_140D8A3A0(v121);
LABEL_68:
              if ( v138 )
                sub_140001660(v133, v138, 1);
              sub_140D8A3A0(v102);
              goto LABEL_71;
            }
            if ( a4 && (((unsigned __int8)sub_140980290() ^ 1) & (unsigned __int8)v142) == 1 )
            {
              sub_140ED3BB0(&v134);
              if ( (_QWORD)v134 != -1 )
              {
                *(_QWORD *)&v121[16] = v135;
                *(_OWORD *)v121 = v134;
                sub_140E9A8B0(&v127, v121);
                v139 = v127;
                v140 = v128;
                goto LABEL_66;
              }
            }
            else
            {
              *(_QWORD *)&v134 = -1;
            }
            *(_QWORD *)&v139 = 0;
            *((_QWORD *)&v139 + 1) = 1;
            v140 = 0;
LABEL_66:
            *(_QWORD *)v121 = &v139;
            *(_QWORD *)&v121[8] = sub_1400015F0;
            *(_QWORD *)&v121[16] = v102;
            *(_QWORD *)&v121[24] = sub_140EDAE40;
            sub_1416DAFA0(&v112, &unk_141AA0464, v121);
            *((_QWORD *)v6 + 4) = v113;
            v6[1] = v112;
            *((_QWORD *)v6 + 1) = 10;
            *(_QWORD *)v6 = -1;
            if ( (_QWORD)v139 )
              sub_140001660(*((_QWORD *)&v139 + 1), v139, 1);
            goto LABEL_68;
          }
          *(__int128 *)((char *)v6 + 88) = v119;
          *(__int128 *)((char *)v6 + 72) = v118;
          v59 = v114;
          v60 = v115;
          v61 = v116;
          *(__int128 *)((char *)v6 + 56) = v117;
          *(__int128 *)((char *)v6 + 40) = v61;
          *(__int128 *)((char *)v6 + 24) = v60;
          *(__int128 *)((char *)v6 + 8) = v59;
          *(_QWORD *)v6 = -1;
LABEL_71:
          sub_140D8A630(&v83);
          goto LABEL_72;
        }
        sub_140EB8E30(v102, (char *)&v114 + 8);
        v55 = *(_QWORD *)v102;
        *(_OWORD *)v121 = *(_OWORD *)&v102[8];
        *(_OWORD *)&v121[16] = *(_OWORD *)&v102[24];
        *(_OWORD *)&v121[32] = *(_OWORD *)&v102[40];
        *(_OWORD *)&v121[48] = *(_OWORD *)&v102[56];
        *(_OWORD *)&v121[64] = *(_OWORD *)&v102[72];
        *(_QWORD *)&v121[80] = *(_QWORD *)&v102[88];
        if ( *(_QWORD *)v102 != -1 )
        {
          *((_QWORD *)v6 + 12) = *(_QWORD *)&v121[80];
          v6[5] = *(_OWORD *)&v121[64];
          v56 = *(_OWORD *)v121;
          v57 = *(_OWORD *)&v121[16];
          v58 = *(_OWORD *)&v121[32];
          v6[4] = *(_OWORD *)&v121[48];
          v6[3] = v58;
          v6[2] = v57;
          v6[1] = v56;
          *((_QWORD *)v6 + 1) = v55;
          *(_QWORD *)v6 = -1;
          goto LABEL_71;
        }
        v130 = *(_OWORD *)&v121[48];
        v129 = *(_OWORD *)&v121[32];
        v128 = *(_OWORD *)&v121[16];
        v127 = *(_OWORD *)v121;
        v135 = *(_QWORD *)&v121[80];
        v134 = *(_OWORD *)&v121[64];
        if ( *(_QWORD *)&v121[80] )
        {
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            sub_1406C5480((unsigned int)v102, DWORD2(v134), *(_DWORD *)&v121[80], (unsigned int)&unk_141A9B28E, 3);
            *(_QWORD *)&v121[16] = *(_QWORD *)&v102[16];
            *(_OWORD *)v121 = *(_OWORD *)v102;
            *(_QWORD *)&v95 = v121;
            *((_QWORD *)&v95 + 1) = sub_1400015F0;
            *(_QWORD *)v102 = aCodexmateLibCo_50;
            *(_QWORD *)&v102[8] = 35;
            *(_QWORD *)&v102[16] = aCodexmateLibCo_50;
            *(_QWORD *)&v102[24] = 35;
            *(_QWORD *)&v102[32] = &off_141AA03E0;
            sub_140AF72B0(&unk_141AA038C, &v95, 2, v102);
            if ( *(_QWORD *)v121 )
              sub_140001660(*(_QWORD *)&v121[8], *(_QWORD *)v121, 1);
          }
        }
        sub_140EB7850(&v95, a2);
        v144 = v101;
        if ( v101 != v147 )
        {
          *(_QWORD *)v121 = 0;
          *(_QWORD *)&v121[8] = 1;
          *(_QWORD *)&v121[16] = 0;
          *(_QWORD *)v102 = v121;
          *(_QWORD *)&v102[8] = sub_1400015F0;
          *(_QWORD *)&v102[16] = &v147;
          *(_QWORD *)&v102[24] = sub_1416EBC20;
          *(_QWORD *)&v102[32] = &v144;
          *(_QWORD *)&v102[40] = sub_1416EBC20;
          sub_1416DAFA0(&v108, &unk_141AA03F8, v102);
          *((_QWORD *)v6 + 4) = v109;
          v6[1] = v108;
          *((_QWORD *)v6 + 1) = 10;
          *(_QWORD *)v6 = -1;
          if ( *(_QWORD *)v121 )
            sub_140001660(*(_QWORD *)&v121[8], *(_QWORD *)v121, 1);
          sub_140292E20(&v95);
          sub_1400290B0(&v134);
          sub_140D8A7D0(&v127);
          goto LABEL_71;
        }
        if ( a4
          && (((unsigned __int8)sub_140980290() ^ 1) & (unsigned __int8)v142) == 1
          && (sub_140E994D0(v136, aLaunchingCodex, 15), !(unsigned __int8)sub_140980290()) )
        {
          sub_140ED3BB0(&v139);
          v62 = v139;
          if ( (_QWORD)v139 != -1 )
            goto LABEL_63;
        }
        else
        {
          *(_QWORD *)&v139 = -1;
        }
        v132 = -1;
        v62 = -1;
        sub_140E994D0(v136, aDone_4, 4);
LABEL_63:
        v132 = v62;
        sub_140E9EEE0(v121, a2);
        v107 = v140;
        v106 = v139;
        v104 = v134;
        v105 = v135;
        sub_1419234B0(v102, v121, 384);
        v63 = v144;
        sub_1419234B0(v6, v102, 432);
        *((_BYTE *)v6 + 432) = v63;
        sub_140292E20(&v95);
        sub_140D8A7D0(&v127);
        sub_140D8A630(&v83);
        sub_140292E20(v80);
        sub_140038710(&v72);
        sub_140292E20(v81);
        sub_14002B980(v137, v145);
        sub_14002B980(Address, v143);
        return v6;
      }
      *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v121[80];
      *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v121[64];
      v41 = *(_OWORD *)v121;
      v42 = *(_OWORD *)&v121[16];
      v43 = *(_OWORD *)&v121[32];
      v44 = *(_OWORD *)&v121[48];
    }
    else
    {
      v35 = *a2 + 16LL;
      v146 = 1;
      sub_1407D66C0(v102, v35);
      v36 = *(_QWORD *)v102;
      v37 = v102[8];
      if ( *(_QWORD *)v102 != -1 )
      {
        *((_QWORD *)v6 + 12) = *(_QWORD *)&v102[88];
        *(__int128 *)((char *)v6 + 81) = *(_OWORD *)&v102[73];
        v38 = *(_OWORD *)&v102[9];
        v39 = *(_OWORD *)&v102[25];
        v40 = *(_OWORD *)&v102[41];
        *(__int128 *)((char *)v6 + 65) = *(_OWORD *)&v102[57];
        *(__int128 *)((char *)v6 + 49) = v40;
        *(__int128 *)((char *)v6 + 33) = v39;
        *(__int128 *)((char *)v6 + 17) = v38;
        *((_QWORD *)v6 + 1) = v36;
        *((_BYTE *)v6 + 16) = v37;
LABEL_29:
        *(_QWORD *)v6 = -1;
LABEL_74:
        sub_140292E20(v81);
LABEL_75:
        if ( (v145 & 1) == 0 && 2 * *v14 && !(unsigned __int8)sub_14196A710(v45, v25, v22) )
          *((_BYTE *)v137 + 1) = 1;
        v24 = v137;
        v64 = *(_BYTE *)v137;
        *(_BYTE *)v137 = 0;
        if ( v64 == 2 )
          WakeByAddressSingle(v24);
        goto LABEL_79;
      }
      if ( (v102[8] & 1) == 0 )
      {
        sub_1419234B0(v71, v81, 384);
        v71[382] = v147;
        v146 = 0;
        sub_140EB5DA0(v102, a2, v71);
        if ( *(_DWORD *)v102 == -1 )
        {
          v146 = 0;
          sub_140E9EEE0(v102, a2);
          sub_1419234B0(v6, v102, 384);
          *((_QWORD *)v6 + 48) = 0;
          *((_QWORD *)v6 + 49) = 8;
          *((_QWORD *)v6 + 50) = 0;
          *((_QWORD *)v6 + 51) = -1;
          *((_BYTE *)v6 + 432) = 0;
        }
        else
        {
          *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v102[80];
          *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v102[64];
          v46 = *(_OWORD *)v102;
          v47 = *(_OWORD *)&v102[16];
          v48 = *(_OWORD *)&v102[32];
          *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v102[48];
          *(__int128 *)((char *)v6 + 40) = v48;
          *(__int128 *)((char *)v6 + 24) = v47;
          *(__int128 *)((char *)v6 + 8) = v46;
          *(_QWORD *)v6 = -1;
        }
        goto LABEL_75;
      }
      v146 = 1;
      sub_1407D7410(v102);
      *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v102[80];
      *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v102[64];
      v41 = *(_OWORD *)v102;
      v42 = *(_OWORD *)&v102[16];
      v43 = *(_OWORD *)&v102[32];
      v44 = *(_OWORD *)&v102[48];
    }
    *(__int128 *)((char *)v6 + 56) = v44;
    *(__int128 *)((char *)v6 + 40) = v43;
    *(__int128 *)((char *)v6 + 24) = v42;
    *(__int128 *)((char *)v6 + 8) = v41;
    goto LABEL_29;
  }
  *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v102[80];
  v26 = *(_OWORD *)&v102[17];
  v27 = *(_OWORD *)&v102[33];
  v28 = *(_OWORD *)&v102[49];
  *(__int128 *)((char *)v6 + 73) = *(_OWORD *)&v102[65];
  *(__int128 *)((char *)v6 + 57) = v28;
  *(__int128 *)((char *)v6 + 41) = v27;
  *(__int128 *)((char *)v6 + 25) = v26;
  *((_QWORD *)v6 + 1) = v23;
  *((_QWORD *)v6 + 2) = v24;
  *((_BYTE *)v6 + 24) = v25;
  *(_QWORD *)v6 = -1;
LABEL_79:
  if ( !(_BYTE)v143 && 2 * *v14 && !(unsigned __int8)sub_14196A710(v24, v25, v22) )
    *(_BYTE *)(v12 + 17) = 1;
  v65 = Address;
  v66 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v66 == 2 )
    WakeByAddressSingle(v65);
  return v6;
}
