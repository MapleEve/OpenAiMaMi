// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140ea31a0 | successor of pre-update 0x140d88820 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.942, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int128 *__fastcall sub_140EA31A0(__int128 *a1, _QWORD *a2, char a3, unsigned __int8 a4, __int128 a5)
{
  __int128 *v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rbx
  char *v12; // r14
  unsigned int v13; // r15d
  void *v14; // rax
  char v15; // cl
  __int128 v17; // kr00_16
  char v18; // dl
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  int v22; // edx
  unsigned __int8 v23; // r14
  void *v24; // rcx
  __int64 v25; // r15
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  char v32; // al
  unsigned __int8 v33; // r12
  __int64 v34; // r14
  __int64 v35; // r15
  unsigned __int8 v36; // cl
  __int64 v37; // r15
  __int64 v38; // r12
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int64 v42; // r12
  __int64 v43; // r15
  __int64 v44; // r13
  __int64 v45; // rcx
  char v46; // al
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int64 v50; // rax
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  __int64 (__fastcall *v54)(); // r12
  __int64 v55; // r9
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int64 v59; // rax
  char v60; // r14
  unsigned __int8 v61; // di
  __int64 v62; // rdi
  __int64 v63; // r13
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // r15
  unsigned int v67; // edi
  __int128 v68; // kr20_16
  int v69; // edx
  int v70; // r14d
  char v71; // cl
  __int64 v72; // rax
  __int64 v73; // r13
  char v74; // al
  char v75; // cl
  PVOID v76; // rcx
  char v77; // al
  PVOID v78; // rcx
  char v79; // al
  void *v80; // rdi
  void *v81; // rdi
  char v82; // cl
  __int64 v83; // [rsp+50h] [rbp-30h] BYREF
  __int128 v84; // [rsp+58h] [rbp-28h]
  __int128 v85; // [rsp+68h] [rbp-18h]
  __int128 v86; // [rsp+78h] [rbp-8h]
  __int128 v87; // [rsp+88h] [rbp+8h]
  __int128 v88; // [rsp+98h] [rbp+18h]
  __int128 v89; // [rsp+A8h] [rbp+28h]
  char v90[672]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v91; // [rsp+358h] [rbp+2D8h]
  __int64 v92; // [rsp+360h] [rbp+2E0h]
  _BYTE v93[24]; // [rsp+430h] [rbp+3B0h] BYREF
  _BYTE v94[24]; // [rsp+448h] [rbp+3C8h] BYREF
  _BYTE v95[24]; // [rsp+460h] [rbp+3E0h] BYREF
  _QWORD v96[45]; // [rsp+478h] [rbp+3F8h] BYREF
  char v97; // [rsp+5E4h] [rbp+564h]
  unsigned __int8 v98; // [rsp+5F6h] [rbp+576h]
  _BYTE v99[24]; // [rsp+5F8h] [rbp+578h] BYREF
  __int64 v100; // [rsp+610h] [rbp+590h] BYREF
  _OWORD v101[10]; // [rsp+618h] [rbp+598h] BYREF
  __int64 v102; // [rsp+6B8h] [rbp+638h]
  __int128 v103; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v104; // [rsp+6D0h] [rbp+650h]
  __int128 v105; // [rsp+6D8h] [rbp+658h] BYREF
  __int64 v106; // [rsp+6E8h] [rbp+668h]
  __int128 v107; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v108; // [rsp+700h] [rbp+680h]
  __int128 v109; // [rsp+708h] [rbp+688h] BYREF
  __int64 v110; // [rsp+718h] [rbp+698h]
  __int128 v111; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v112; // [rsp+730h] [rbp+6B0h]
  __int128 v113; // [rsp+738h] [rbp+6B8h] BYREF
  __int64 v114; // [rsp+748h] [rbp+6C8h]
  _BYTE v115[104]; // [rsp+750h] [rbp+6D0h] BYREF
  _BYTE v116[280]; // [rsp+7B8h] [rbp+738h] BYREF
  __int128 v117; // [rsp+8D0h] [rbp+850h]
  _BYTE *v118; // [rsp+8E0h] [rbp+860h]
  __int128 v119; // [rsp+8E8h] [rbp+868h]
  _BYTE *v120; // [rsp+8F8h] [rbp+878h]
  __int128 v121; // [rsp+B30h] [rbp+AB0h] BYREF
  _BYTE *v122; // [rsp+B40h] [rbp+AC0h]
  __int64 (__fastcall *v123)(_QWORD, _QWORD); // [rsp+B48h] [rbp+AC8h]
  __int64 v124; // [rsp+BE0h] [rbp+B60h] BYREF
  __int128 v125; // [rsp+BE8h] [rbp+B68h]
  __int128 v126; // [rsp+BF8h] [rbp+B78h] BYREF
  __int128 v127; // [rsp+C08h] [rbp+B88h]
  __int128 v128; // [rsp+C18h] [rbp+B98h]
  __int128 v129; // [rsp+C28h] [rbp+BA8h]
  __int128 v130; // [rsp+C38h] [rbp+BB8h]
  __int128 v131; // [rsp+C48h] [rbp+BC8h]
  __int64 v132; // [rsp+C58h] [rbp+BD8h]
  _BYTE v133[104]; // [rsp+C60h] [rbp+BE0h] BYREF
  __int128 v134; // [rsp+CC8h] [rbp+C48h]
  __int128 v135; // [rsp+CD8h] [rbp+C58h]
  __int128 v136; // [rsp+CE8h] [rbp+C68h]
  __int128 v137; // [rsp+CF8h] [rbp+C78h]
  __int64 v138; // [rsp+D08h] [rbp+C88h]
  __int128 v139; // [rsp+DE0h] [rbp+D60h] BYREF
  __int128 v140; // [rsp+DF0h] [rbp+D70h] BYREF
  __int64 v141; // [rsp+E00h] [rbp+D80h]
  __int128 *v142; // [rsp+E08h] [rbp+D88h] BYREF
  __int128 v143; // [rsp+E10h] [rbp+D90h] BYREF
  __int128 v144; // [rsp+E20h] [rbp+DA0h]
  __int128 v145; // [rsp+E30h] [rbp+DB0h]
  __int128 v146; // [rsp+E40h] [rbp+DC0h]
  __int128 v147; // [rsp+E50h] [rbp+DD0h]
  __int128 v148; // [rsp+E60h] [rbp+DE0h]
  __int64 v149; // [rsp+E70h] [rbp+DF0h]
  __int64 v150; // [rsp+E78h] [rbp+DF8h]
  PVOID v151; // [rsp+E80h] [rbp+E00h]
  PVOID Address; // [rsp+E88h] [rbp+E08h]
  __int128 v153; // [rsp+E90h] [rbp+E10h] BYREF
  _BYTE *v154; // [rsp+EA0h] [rbp+E20h]
  __int64 (__fastcall *v155)(_QWORD, _QWORD); // [rsp+EA8h] [rbp+E28h]
  __int128 v156; // [rsp+EB0h] [rbp+E30h] BYREF
  __int64 v157; // [rsp+EC0h] [rbp+E40h]
  unsigned int v158; // [rsp+EC8h] [rbp+E48h]
  int v159; // [rsp+ECCh] [rbp+E4Ch]
  __int64 v160; // [rsp+ED0h] [rbp+E50h]
  unsigned __int8 v161; // [rsp+EDAh] [rbp+E5Ah] BYREF
  unsigned __int8 v162; // [rsp+EDBh] [rbp+E5Bh] BYREF
  int v163; // [rsp+EDCh] [rbp+E5Ch]
  __int64 v164; // [rsp+EE0h] [rbp+E60h]
  unsigned __int8 v165; // [rsp+EEAh] [rbp+E6Ah] BYREF
  unsigned __int8 v166; // [rsp+EEBh] [rbp+E6Bh]
  char v167; // [rsp+EECh] [rbp+E6Ch]
  unsigned __int8 v168; // [rsp+EEDh] [rbp+E6Dh]
  char v169; // [rsp+EEEh] [rbp+E6Eh] BYREF
  unsigned __int8 v170; // [rsp+EEFh] [rbp+E6Fh] BYREF
  __int64 v171; // [rsp+EF0h] [rbp+E70h]

  v171 = -2;
  v6 = a1;
  v169 = a3;
  v165 = a4;
  v139 = a5;
  v7 = a2[2];
  if ( *(_QWORD *)(v7 + 16) != -1 )
  {
    sub_1416DB410(&v115[8], v7 + 16);
    *(_QWORD *)v115 = 9;
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v115[80];
    v8 = *(_OWORD *)&v115[16];
    v9 = *(_OWORD *)&v115[32];
    v10 = *(_OWORD *)&v115[48];
    *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v115[64];
    *(__int128 *)((char *)v6 + 56) = v10;
    *(__int128 *)((char *)v6 + 40) = v9;
    *(__int128 *)((char *)v6 + 24) = v8;
    *(__int128 *)((char *)v6 + 8) = *(_OWORD *)v115;
LABEL_13:
    *(_QWORD *)v6 = -1;
    return v6;
  }
  v11 = a2[4];
  v12 = (char *)(v11 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v11 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v11 + 16));
  if ( 2 * *off_142240260 )
  {
    v13 = sub_14196A710();
    LOBYTE(v13) = v13 ^ 1;
    if ( *(_BYTE *)(v11 + 17) )
      goto LABEL_7;
  }
  else
  {
    v13 = 0;
    if ( *(_BYTE *)(v11 + 17) )
    {
LABEL_7:
      nullsub_1(a1, v7);
      v14 = (void *)sub_140001650(40, 1);
      if ( !v14 )
      {
        v158 = v13;
        Address = (PVOID)(v11 + 16);
        sub_14196B2DB(1, 40);
      }
      qmemcpy(v14, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v13 )
      {
        if ( 2 * *off_142240260 )
        {
          v81 = v14;
          v82 = sub_14196A710();
          v14 = v81;
          if ( !v82 )
            *(_BYTE *)(v11 + 17) = 1;
        }
      }
      v15 = *v12;
      *v12 = 0;
      if ( v15 == 2 )
      {
        v80 = v14;
        WakeByAddressSingle((PVOID)(v11 + 16));
        v14 = v80;
      }
      *((_QWORD *)v6 + 1) = 10;
      *((_QWORD *)v6 + 2) = 40;
      *((_QWORD *)v6 + 3) = v14;
      *((_QWORD *)v6 + 4) = 40;
      goto LABEL_13;
    }
  }
  v158 = v13;
  Address = (PVOID)(v11 + 16);
  sub_1408741F0(v115, a2 + 5, aSwitchingTheCo, 26);
  v17 = *(_OWORD *)v115;
  v18 = v115[16];
  if ( *(_QWORD *)v115 != -1 )
  {
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v115[80];
    v19 = *(_OWORD *)&v115[17];
    v20 = *(_OWORD *)&v115[33];
    v21 = *(_OWORD *)&v115[49];
    *(__int128 *)((char *)v6 + 73) = *(_OWORD *)&v115[65];
    *(__int128 *)((char *)v6 + 57) = v21;
    *(__int128 *)((char *)v6 + 41) = v20;
    *(__int128 *)((char *)v6 + 25) = v19;
    *(__int128 *)((char *)v6 + 8) = v17;
    *((_BYTE *)v6 + 24) = v18;
    *(_QWORD *)v6 = -1;
LABEL_148:
    if ( !(_BYTE)v158 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710() )
      *(_BYTE *)(v11 + 17) = 1;
    v78 = Address;
    v79 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v79 == 2 )
      WakeByAddressSingle(v78);
    return v6;
  }
  v166 = v115[16];
  v151 = *(PVOID *)&v115[8];
  v170 = v169 ^ 1;
  v160 = sub_1416AEBD0();
  v163 = v22;
  v23 = v170;
  *(_QWORD *)v115 = &v169;
  *(_QWORD *)&v115[8] = sub_1416EBC20;
  *(_QWORD *)&v115[16] = &v165;
  *(_QWORD *)&v115[24] = sub_1416EBC20;
  sub_1416DAFA0(&v124, &unk_141A9FBF1, v115);
  v24 = &unk_141A9B99C;
  if ( v23 )
    v24 = &unk_141A9B9A4;
  v96[0] = v24;
  v96[1] = v23 | 8LL;
  v164 = v125;
  *(_OWORD *)v133 = v125;
  *(_QWORD *)v115 = v96;
  *(_QWORD *)&v115[8] = sub_140191200;
  *(_QWORD *)&v115[16] = v133;
  *(_QWORD *)&v115[24] = sub_140191200;
  sub_1416DAFA0(&v83, &unk_141A9B450, v115);
  sub_1406C9730((unsigned int)aRouterToggle_0, 13, (unsigned int)aStart_2, 5, (__int64)&v83);
  if ( v124 )
    sub_140001660(v164, v124, 1);
  sub_140E9E6E0(v115, a2);
  v25 = *(_QWORD *)v115;
  *(_OWORD *)v133 = *(_OWORD *)&v115[8];
  *(_OWORD *)&v133[16] = *(_OWORD *)&v115[24];
  *(_OWORD *)&v133[32] = *(_OWORD *)&v115[40];
  *(_OWORD *)&v133[48] = *(_OWORD *)&v115[56];
  *(_OWORD *)&v133[64] = *(_OWORD *)&v115[72];
  *(_OWORD *)&v133[80] = *(_OWORD *)&v115[88];
  if ( *(_QWORD *)v115 == -1 )
  {
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v133[80];
    *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v133[64];
    v29 = *(_OWORD *)v133;
    v30 = *(_OWORD *)&v133[16];
    v31 = *(_OWORD *)&v133[32];
    *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v133[48];
    *(__int128 *)((char *)v6 + 40) = v31;
    *(__int128 *)((char *)v6 + 24) = v30;
    *(__int128 *)((char *)v6 + 8) = v29;
    *(_QWORD *)v6 = -1;
    goto LABEL_144;
  }
  sub_1419234B0(v90, v116, 888);
  v84 = *(_OWORD *)v133;
  v85 = *(_OWORD *)&v133[16];
  v86 = *(_OWORD *)&v133[32];
  v87 = *(_OWORD *)&v133[48];
  v88 = *(_OWORD *)&v133[64];
  v89 = *(_OWORD *)&v133[80];
  v83 = v25;
  sub_140EB7850(v96, a2);
  v168 = v165;
  if ( v165 == 1 )
  {
    v26 = sub_140D6E640(aChatgpt, 7);
    LOBYTE(v27) = 1;
    LODWORD(v164) = v27;
    if ( v26 != 1 )
    {
      v28 = sub_140D6E640(aCodex_2, 5);
      LOBYTE(v28) = v28 == 1;
      LODWORD(v164) = v28;
    }
  }
  else
  {
    LODWORD(v164) = 0;
  }
  v32 = v169;
  if ( v97 == v169 )
  {
    v33 = v170;
    v34 = a2[3];
    sub_140EAD220((unsigned int)&v140, v34, (unsigned int)&v83, v170, 0);
    sub_140EB7850(v115, a2);
    v35 = *a2;
    sub_140EADE50(v133, *a2, v34, v115);
    sub_140292E20(v115);
    if ( *(_QWORD *)v133 == -1 )
    {
      sub_140EADA10(&v156, v91, v92, v96);
    }
    else
    {
      v157 = *(_QWORD *)&v133[16];
      v156 = *(_OWORD *)v133;
    }
    LOBYTE(v159) = v33;
    v44 = v141;
    if ( !v141 && (_QWORD)v156 == -1 )
    {
      v35 += 16;
      sub_1407D66C0(v115, v35);
      v45 = *(_QWORD *)v115;
      v46 = v115[8];
      if ( *(_QWORD *)v115 != -1 )
      {
        *((_QWORD *)v6 + 12) = *(_QWORD *)&v115[88];
        *(__int128 *)((char *)v6 + 81) = *(_OWORD *)&v115[73];
        v47 = *(_OWORD *)&v115[9];
        v48 = *(_OWORD *)&v115[25];
        v49 = *(_OWORD *)&v115[41];
        *(__int128 *)((char *)v6 + 65) = *(_OWORD *)&v115[57];
        *(__int128 *)((char *)v6 + 49) = v49;
        *(__int128 *)((char *)v6 + 33) = v48;
        *(__int128 *)((char *)v6 + 17) = v47;
        *((_QWORD *)v6 + 1) = v45;
        *((_BYTE *)v6 + 16) = v46;
        *(_QWORD *)v6 = -1;
LABEL_89:
        if ( (_QWORD)v156 != -1 && (_QWORD)v156 )
          sub_140001660(*((_QWORD *)&v156 + 1), v156, 1);
        v62 = *((_QWORD *)&v140 + 1);
        if ( v44 )
        {
          v63 = 32 * v44;
          v64 = 0;
          do
          {
            v65 = *(_QWORD *)(v62 + v64);
            if ( v65 )
              sub_140001660(*(_QWORD *)(v62 + v64 + 8), v65, 1);
            v64 += 32;
          }
          while ( v63 != v64 );
        }
        if ( (_QWORD)v140 )
          sub_140001660(v62, 32 * v140, 8);
        goto LABEL_143;
      }
      if ( (v115[8] & 1) == 0 )
      {
        sub_140DD96B0(v170, v160, v163, (unsigned int)&unk_141A9FF00, 33);
        sub_140E9EEE0(v115, a2);
        v61 = 0;
        if ( v169 )
          v61 = v98;
        sub_1419234B0(v6, v115, 384);
        *((_QWORD *)v6 + 48) = 0;
        *((_QWORD *)v6 + 49) = 8;
        *((_QWORD *)v6 + 50) = 0;
        *((_QWORD *)v6 + 51) = -1;
        *((_BYTE *)v6 + 432) = v61;
        goto LABEL_89;
      }
    }
    LOBYTE(v35) = v170;
    sub_140ED3DE0(v133, *((_QWORD *)&v140 + 1), v44);
    *(_QWORD *)v115 = v133;
    v54 = sub_1400015F0;
    *(_QWORD *)&v115[8] = sub_1400015F0;
    *(_QWORD *)&v115[16] = &v156;
    *(_QWORD *)&v115[24] = sub_140EDA660;
    sub_1416DAFA0(v99, &unk_141A9FF21, v115);
    if ( *(_QWORD *)v133 )
      sub_140001660(*(_QWORD *)&v133[8], *(_QWORD *)v133, 1);
    sub_140DD9590((unsigned int)v35, aSameTargetReco, 21, v99);
    sub_140EB20D0((unsigned int)v133, (_DWORD)a2, (unsigned int)aSameTargetRout, 25, 0);
    if ( *(_DWORD *)v133 != -1 )
    {
      *(_OWORD *)&v115[80] = *(_OWORD *)&v133[80];
      *(_OWORD *)&v115[64] = *(_OWORD *)&v133[64];
      *(_OWORD *)&v115[48] = *(_OWORD *)&v133[48];
      *(_OWORD *)&v115[32] = *(_OWORD *)&v133[32];
      *(_OWORD *)&v115[16] = *(_OWORD *)&v133[16];
      *(_OWORD *)v115 = *(_OWORD *)v133;
      if ( (unsigned __int8)sub_140EA59A0(v34, &v83, (unsigned __int8)v159) )
      {
        sub_140EA5910(&v121, a2);
        if ( (_QWORD)v121 == -1 )
        {
          sub_140EADA10(&v121, v91, v92, v96);
          LOBYTE(v55) = (_QWORD)v121 == -1;
          if ( (_QWORD)v121 != -1 && (_QWORD)v121 )
          {
            v67 = v55;
            sub_140001660(*((_QWORD *)&v121 + 1), v121, 1);
            v55 = v67;
          }
          goto LABEL_63;
        }
        if ( (_QWORD)v121 )
          sub_140001660(*((_QWORD *)&v121 + 1), v121, 1);
      }
      v55 = 0;
LABEL_63:
      sub_140EBCA50(&v121, v168, (unsigned int)v164, v55);
      sub_140ED3AE0(&v143, &v121);
      *(_QWORD *)&v121 = &v143;
      *((_QWORD *)&v121 + 1) = sub_1400015F0;
      v122 = v115;
      v123 = sub_140D76130;
      sub_1416DAFA0(&v113, &unk_141A9FFA4, &v121);
      *((_QWORD *)v6 + 4) = v114;
      v6[1] = v113;
      *((_QWORD *)v6 + 1) = 10;
      *(_QWORD *)v6 = -1;
      if ( (_QWORD)v143 )
        sub_140001660(*((_QWORD *)&v143 + 1), v143, 1);
      sub_140D8A3A0(v115);
      goto LABEL_89;
    }
    v154 = *(_BYTE **)&v133[88];
    v153 = *(_OWORD *)&v133[72];
    sub_140D8A7D0(&v133[8]);
    if ( v169 )
    {
      if ( (((unsigned __int8)sub_140980290() ^ 1) & v168) == 1 )
      {
LABEL_80:
        sub_140ED3BB0(&v121);
        v59 = v121;
LABEL_82:
        v164 = v59;
        v133[0] = v59 != -1;
        LOBYTE(v54) = v170;
        *(_QWORD *)v115 = v133;
        *(_QWORD *)&v115[8] = sub_1416EBC20;
        v167 = 1;
        sub_1416DAFA0(v95, &unk_141A9FF6D, v115);
        v167 = 1;
        sub_140DD9840((_DWORD)v54, (unsigned int)aTotal_4, 5, v160, v163, (__int64)v95);
        v167 = 1;
        sub_140E9EEE0(v133, a2);
        if ( v169 == 1 )
        {
          v160 = *((_QWORD *)&v121 + 1);
          sub_140EB7850(v115, a2);
          v60 = v116[278];
          sub_140292E20(v115);
        }
        else
        {
          v60 = 0;
        }
        v118 = v154;
        v117 = v153;
        sub_1419234B0(v115, v133, 384);
        v119 = v121;
        v120 = v122;
        sub_1419234B0(v6, v115, 432);
        *((_BYTE *)v6 + 432) = v60;
        goto LABEL_89;
      }
    }
    else if ( v168 && (((unsigned __int8)sub_140980290() ^ 1) & (unsigned __int8)v164) == 1 )
    {
      goto LABEL_80;
    }
    *(_QWORD *)&v121 = -1;
    v59 = -1;
    goto LABEL_82;
  }
  v36 = 0;
  v159 = v98;
  if ( v169 )
    v36 = v98;
  v162 = v36;
  v37 = v139;
  if ( (_QWORD)v139 )
  {
    v38 = *((_QWORD *)&v139 + 1);
    sub_140E9C7C0(v115, aPreparing, 9);
    *(_OWORD *)&v133[48] = *(_OWORD *)&v115[48];
    *(_OWORD *)&v133[32] = *(_OWORD *)&v115[32];
    *(_OWORD *)&v133[16] = *(_OWORD *)&v115[16];
    *(_OWORD *)v133 = *(_OWORD *)v115;
    (*(void (__fastcall **)(__int64, _BYTE *))(v38 + 40))(v37, v133);
    v32 = v169;
  }
  if ( v32 )
  {
    sub_1401DFE20(v115, v96);
    sub_1401E01F0(&v100, v115, &v83);
    if ( (_DWORD)v100 == -2 || (sub_1419234B0(v115, &v100, 176), sub_140E98F30(&v100, a2, v115), v100 == -2) )
    {
      sub_140E992D0((unsigned int)v115, v170, v160, v163, (__int64)v101);
      *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v115[80];
      *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v115[64];
      v39 = *(_OWORD *)v115;
      v40 = *(_OWORD *)&v115[16];
      v41 = *(_OWORD *)&v115[32];
      *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v115[48];
      *(__int128 *)((char *)v6 + 40) = v41;
      *(__int128 *)((char *)v6 + 24) = v40;
      *(__int128 *)((char *)v6 + 8) = v39;
      *(_QWORD *)v6 = -1;
LABEL_143:
      sub_140292E20(v96);
      sub_140038710(&v83);
LABEL_144:
      if ( (v166 & 1) == 0 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710() )
        *((_BYTE *)v151 + 1) = 1;
      v76 = v151;
      v77 = *(_BYTE *)v151;
      *(_BYTE *)v151 = 0;
      if ( v77 == 2 )
        WakeByAddressSingle(v76);
      goto LABEL_148;
    }
    v138 = v102;
    v137 = v101[9];
    v136 = v101[8];
    v135 = v101[7];
    v134 = v101[6];
    *(_OWORD *)&v133[8] = v101[0];
    *(_OWORD *)&v133[24] = v101[1];
    *(_OWORD *)&v133[40] = v101[2];
    *(_OWORD *)&v133[56] = v101[3];
    *(_OWORD *)&v133[72] = v101[4];
    *(_OWORD *)&v133[88] = v101[5];
    *(_QWORD *)v133 = v100;
    if ( *(_QWORD *)off_14223FF10 > 2u )
    {
      *(_QWORD *)&v156 = *((_QWORD *)&v134 + 1);
      *(_QWORD *)&v153 = v136;
      LOBYTE(v140) = v138;
      *(_QWORD *)v115 = &v156;
      *(_QWORD *)&v115[8] = sub_1416EBAE0;
      *(_QWORD *)&v115[16] = &v153;
      *(_QWORD *)&v115[24] = sub_1416EBAE0;
      *(_QWORD *)&v115[32] = &v140;
      *(_QWORD *)&v115[40] = sub_1416EBC20;
      *(_QWORD *)&v143 = aCodexmateLibCo_50;
      *((_QWORD *)&v143 + 1) = 35;
      *(_QWORD *)&v144 = aCodexmateLibCo_50;
      *((_QWORD *)&v144 + 1) = 35;
      *(_QWORD *)&v145 = &off_141A9FC58;
      sub_140AF72B0(&unk_141A9FC11, v115, 3, &v143);
    }
    sub_1419234B0(&v121, v133, 176);
  }
  else
  {
    *(_QWORD *)&v121 = -2;
  }
  v142 = &v139;
  v42 = *((_QWORD *)&v139 + 1);
  v43 = v139;
  v140 = v139;
  if ( (_QWORD)v139 )
  {
    sub_140E9C7C0(v115, aStoppingCodex, 14);
    (*(void (__fastcall **)(__int64, _BYTE *))(v42 + 40))(v43, v115);
  }
  v161 = v170;
  *(_QWORD *)v115 = &v142;
  *(_QWORD *)&v115[8] = &v121;
  *(_QWORD *)&v115[16] = a2;
  *(_QWORD *)&v115[24] = &v83;
  *(_QWORD *)&v115[32] = v96;
  *(_QWORD *)&v115[40] = &v140;
  *(_QWORD *)&v115[48] = &v170;
  *(_QWORD *)v133 = a2;
  *(_QWORD *)&v133[8] = &v83;
  *(_QWORD *)&v133[16] = &v161;
  sub_140DBC3E0(
    (unsigned int)&v126,
    (unsigned int)&v83,
    v170,
    (unsigned int)&v83,
    0,
    0,
    (__int64)v115,
    (__int64)v133,
    (__int64)a2,
    (__int64)&v162);
  if ( (_DWORD)v126 != -1 )
  {
    if ( (_BYTE)v132 )
    {
      if ( v169 )
      {
        *(_QWORD *)&v115[96] = v132;
        *(_OWORD *)&v115[80] = v131;
        *(_OWORD *)&v115[64] = v130;
        *(_OWORD *)&v115[48] = v129;
        *(_OWORD *)&v115[32] = v128;
        *(_OWORD *)&v115[16] = v127;
        *(_OWORD *)v115 = v126;
        *(_QWORD *)&v143 = v115;
        *((_QWORD *)&v143 + 1) = sub_140EDAE40;
        sub_1416DAFA0(v133, &unk_141A9FD81, &v143);
        v156 = *(_OWORD *)v133;
        v157 = *(_QWORD *)&v133[16];
        sub_140EA90C0(
          (unsigned int)&v143,
          (_DWORD)a2,
          (unsigned int)&v83,
          *(_DWORD *)&v133[8],
          *(__int64 *)&v133[16],
          (__int64)v96,
          v159);
        if ( (_DWORD)v143 == -1 )
        {
          if ( *((_QWORD *)&v143 + 1) == -1 )
          {
            sub_140DD96B0(v170, v160, v163, (unsigned int)&unk_141A9FDA4, 40);
            if ( v168 && (((unsigned __int8)sub_140980290() ^ 1) & (unsigned __int8)v164) == 1 )
              sub_140ED3BB0(v133);
            else
              *(_QWORD *)v133 = -1;
            sub_140ED3AE0(&v153, v133);
            *(_QWORD *)v133 = &v156;
            *(_QWORD *)&v133[8] = sub_1400015F0;
            *(_QWORD *)&v133[16] = &v153;
            *(_QWORD *)&v133[24] = sub_1400015F0;
            sub_1416DAFA0(&v111, &unk_141A9FD7E, v133);
            *((_QWORD *)v6 + 4) = v112;
            v6[1] = v111;
            *((_QWORD *)v6 + 1) = 10;
            *(_QWORD *)v6 = -1;
            if ( (_QWORD)v153 )
              sub_140001660(*((_QWORD *)&v153 + 1), v153, 1);
          }
          else
          {
            v68 = v144;
            sub_140DD96B0(v170, v160, v163, (unsigned int)&unk_141A9FDCC, 45);
            sub_1406C5480((unsigned int)v133, v68, DWORD2(v68), (unsigned int)&unk_141A9B28E, 3);
            v154 = *(_BYTE **)&v133[16];
            v153 = *(_OWORD *)v133;
            *(_QWORD *)v133 = &v156;
            *(_QWORD *)&v133[8] = sub_1400015F0;
            *(_QWORD *)&v133[16] = &v153;
            *(_QWORD *)&v133[24] = sub_1400015F0;
            sub_1416DAFA0(&v109, &unk_141A9FDF9, v133);
            if ( (_QWORD)v153 )
              sub_140001660(*((_QWORD *)&v153 + 1), v153, 1);
            *((_QWORD *)v6 + 4) = v110;
            v6[1] = v109;
            *((_QWORD *)v6 + 1) = 10;
            *(_QWORD *)v6 = -1;
            sub_1400290B0((char *)&v143 + 8);
          }
        }
        else
        {
          *(_OWORD *)&v133[80] = v148;
          *(_OWORD *)&v133[64] = v147;
          *(_OWORD *)&v133[48] = v146;
          *(_OWORD *)&v133[32] = v145;
          *(_OWORD *)&v133[16] = v144;
          *(_OWORD *)v133 = v143;
          sub_140DD96B0(v170, v160, v163, (unsigned int)&unk_141A9FEB2, 27);
          *(_QWORD *)&v153 = &v156;
          *((_QWORD *)&v153 + 1) = sub_1400015F0;
          v154 = v133;
          v155 = sub_140D76130;
          sub_1416DAFA0(&v107, &unk_141A9FECD, &v153);
          *((_QWORD *)v6 + 4) = v108;
          v6[1] = v107;
          *((_QWORD *)v6 + 1) = 10;
          *(_QWORD *)v6 = -1;
          sub_140D8A3A0(v133);
        }
        if ( (_QWORD)v156 )
          sub_140001660(*((_QWORD *)&v156 + 1), v156, 1);
      }
      else
      {
        *(_QWORD *)&v115[96] = v132;
        *(_OWORD *)&v115[80] = v131;
        *(_OWORD *)&v115[64] = v130;
        *(_OWORD *)&v115[48] = v129;
        *(_OWORD *)&v115[32] = v128;
        *(_OWORD *)&v115[16] = v127;
        *(_OWORD *)v115 = v126;
        *(_QWORD *)&v143 = v115;
        *((_QWORD *)&v143 + 1) = sub_140EDAE40;
        sub_1416DAFA0(v133, &unk_141A9FCD0, &v143);
        v156 = *(_OWORD *)v133;
        v157 = *(_QWORD *)&v133[16];
        if ( v97 == 1 && (unsigned __int8)sub_140EA59A0(a2[3], &v83, 0)
          || (sub_140EA8770((unsigned int)&v143, (_DWORD)a2, (unsigned int)&v83, DWORD2(v156), v157, (__int64)v96),
              (_DWORD)v143 == -1) )
        {
          sub_140DD96B0(v170, v160, v163, (unsigned int)&unk_141A9FD51, 45);
          if ( v168 && (((unsigned __int8)sub_140980290() ^ 1) & (unsigned __int8)v164) == 1 )
            sub_140ED3BB0(v133);
          else
            *(_QWORD *)v133 = -1;
          sub_140ED3AE0(&v143, v133);
          *(_QWORD *)v133 = &v156;
          *(_QWORD *)&v133[8] = sub_1400015F0;
          *(_QWORD *)&v133[16] = &v143;
          *(_QWORD *)&v133[24] = sub_1400015F0;
          sub_1416DAFA0(&v103, &unk_141A9FD7E, v133);
          *((_QWORD *)v6 + 4) = v104;
          v6[1] = v103;
          *((_QWORD *)v6 + 1) = 10;
          *(_QWORD *)v6 = -1;
          if ( (_QWORD)v143 )
            sub_140001660(*((_QWORD *)&v143 + 1), v143, 1);
        }
        else
        {
          *(_OWORD *)&v133[80] = v148;
          *(_OWORD *)&v133[64] = v147;
          *(_OWORD *)&v133[48] = v146;
          *(_OWORD *)&v133[32] = v145;
          *(_OWORD *)&v133[16] = v144;
          *(_OWORD *)v133 = v143;
          sub_140DD96B0(v170, v160, v163, (unsigned int)&unk_141A9FCF4, 33);
          *(_QWORD *)&v153 = &v156;
          *((_QWORD *)&v153 + 1) = sub_1400015F0;
          v154 = v133;
          v155 = sub_140D76130;
          sub_1416DAFA0(&v105, &unk_141A9FD15, &v153);
          *((_QWORD *)v6 + 4) = v106;
          v6[1] = v105;
          *((_QWORD *)v6 + 1) = 10;
          *(_QWORD *)v6 = -1;
          sub_140D8A3A0(v133);
        }
        if ( (_QWORD)v156 )
          sub_140001660(*((_QWORD *)&v156 + 1), v156, 1);
      }
      sub_140D8A3A0(v115);
      goto LABEL_141;
    }
    *(__int128 *)((char *)v6 + 88) = v131;
    *(__int128 *)((char *)v6 + 72) = v130;
    v56 = v126;
    v57 = v127;
    v58 = v128;
    *(__int128 *)((char *)v6 + 56) = v129;
    *(__int128 *)((char *)v6 + 40) = v58;
    *(__int128 *)((char *)v6 + 24) = v57;
    *(__int128 *)((char *)v6 + 8) = v56;
LABEL_70:
    *(_QWORD *)v6 = -1;
LABEL_141:
    if ( (_DWORD)v121 != -2 )
      sub_140D8A630(&v121);
    goto LABEL_143;
  }
  sub_140EB8E30(v115, (char *)&v126 + 8);
  v50 = *(_QWORD *)v115;
  *(_OWORD *)v133 = *(_OWORD *)&v115[8];
  *(_OWORD *)&v133[16] = *(_OWORD *)&v115[24];
  *(_OWORD *)&v133[32] = *(_OWORD *)&v115[40];
  *(_OWORD *)&v133[48] = *(_OWORD *)&v115[56];
  *(_OWORD *)&v133[64] = *(_OWORD *)&v115[72];
  *(_QWORD *)&v133[80] = *(_QWORD *)&v115[88];
  if ( *(_QWORD *)v115 != -1 )
  {
    *((_QWORD *)v6 + 12) = *(_QWORD *)&v133[80];
    v6[5] = *(_OWORD *)&v133[64];
    v51 = *(_OWORD *)v133;
    v52 = *(_OWORD *)&v133[16];
    v53 = *(_OWORD *)&v133[32];
    v6[4] = *(_OWORD *)&v133[48];
    v6[3] = v53;
    v6[2] = v52;
    v6[1] = v51;
    *((_QWORD *)v6 + 1) = v50;
    goto LABEL_70;
  }
  v146 = *(_OWORD *)&v133[48];
  v145 = *(_OWORD *)&v133[32];
  v144 = *(_OWORD *)&v133[16];
  v143 = *(_OWORD *)v133;
  v154 = *(_BYTE **)&v133[80];
  v153 = *(_OWORD *)&v133[64];
  v66 = 0;
  if ( (v133[0] & 1) == 0 )
    v66 = DWORD2(v146);
  v159 = v66;
  if ( !v169 )
  {
    if ( !v168 || ((unsigned __int8)v164 & ((unsigned __int8)sub_140980290() ^ 1)) != 1 )
      goto LABEL_125;
LABEL_122:
    sub_140E994D0(v142, aLaunchingCodex, 15);
    LODWORD(v11) = sub_1416AEBD0();
    v70 = v69;
    if ( v169 )
    {
      v71 = (sub_140980290() ^ 1) & v168;
      v72 = -1;
      if ( v71 != 1 )
        goto LABEL_131;
    }
    else
    {
      v75 = (sub_140980290() ^ 1) & v164;
      v72 = -1;
      if ( v75 != 1 )
        goto LABEL_131;
    }
    sub_140ED3BB0(v115);
    v72 = *(_QWORD *)v115;
LABEL_131:
    v164 = v72;
    LOBYTE(v156) = v72 != -1;
    LOBYTE(v66) = v170;
    *(_QWORD *)v133 = &v156;
    *(_QWORD *)&v133[8] = sub_1416EBC20;
    sub_1416DAFA0(v94, &unk_141A9FC8C, v133);
    sub_140DD9840(v66, (unsigned int)aLaunchCodex, 12, v11, v70, (__int64)v94);
    v66 = *(_QWORD *)&v115[8];
    v42 = *(_QWORD *)&v115[16];
    v74 = 1;
    v73 = v164;
    if ( v164 != -1 )
      goto LABEL_132;
    goto LABEL_125;
  }
  if ( (((unsigned __int8)sub_140980290() ^ 1) & v168) != 0 )
    goto LABEL_122;
LABEL_125:
  v150 = -1;
  v149 = v66;
  sub_140E994D0(v142, aDone_4, 4);
  v73 = -1;
  v74 = 0;
LABEL_132:
  LOBYTE(v11) = v170;
  LOBYTE(v156) = v74;
  *(_QWORD *)v133 = v154;
  *(_QWORD *)v115 = &v156;
  *(_QWORD *)&v115[8] = sub_1416EBC20;
  *(_QWORD *)&v115[16] = v133;
  *(_QWORD *)&v115[24] = sub_1416EBAE0;
  v150 = v73;
  v149 = v66;
  sub_1416DAFA0(v93, &unk_141A9FCA5, v115);
  v150 = v73;
  v149 = v66;
  sub_140DD9840(v11, (unsigned int)aTotal_4, 5, v160, v163, (__int64)v93);
  v150 = v73;
  v149 = v66;
  sub_140E9EEE0(v133, a2);
  v118 = v154;
  v117 = v153;
  sub_1419234B0(v115, v133, 384);
  sub_1419234B0(v6, v115, 408);
  *((_QWORD *)v6 + 51) = v73;
  *((_QWORD *)v6 + 52) = v66;
  *((_QWORD *)v6 + 53) = v42;
  *((_BYTE *)v6 + 432) = v159;
  sub_140D8A7D0(&v143);
  if ( (_DWORD)v121 != -2 )
    sub_140D8A630(&v121);
  sub_140292E20(v96);
  sub_140038710(&v83);
  sub_14002B980(v151, v166);
  sub_14002B980(Address, v158);
  return v6;
}
