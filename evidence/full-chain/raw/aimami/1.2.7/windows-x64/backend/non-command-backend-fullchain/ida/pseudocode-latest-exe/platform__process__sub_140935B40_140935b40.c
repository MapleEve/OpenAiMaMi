// win 1.2.7 latest-exe | module src/platform/process.rs | ea 0x140935b40 | successor of pre-update 0x140ec23e0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
double __fastcall sub_140935B40(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r13
  __int128 v13; // xmm0
  __int64 *v14; // r14
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  char v17; // al
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // rdx
  __int64 v22; // rsi
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdx
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // r15
  unsigned int v38; // esi
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // ebx
  int v43; // r14d
  __int64 v44; // rsi
  _QWORD *v45; // rdi
  __int64 v46; // rdx
  int v47; // eax
  int v48; // edx
  unsigned __int64 v49; // rsi
  int v50; // edx
  unsigned __int64 v51; // rax
  unsigned int v52; // edx
  bool v53; // cf
  __int64 v54; // r15
  __int128 v55; // kr10_16
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rbx
  __int64 v60; // r14
  __int64 v61; // rdx
  int v62; // eax
  int v63; // edx
  unsigned int v64; // edx
  __int64 i; // r12
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r15
  unsigned __int64 v70; // rax
  unsigned int v71; // edx
  unsigned __int128 v72; // kr20_16
  __int64 v73; // r15
  __int64 v74; // r12
  _QWORD *v75; // r13
  __int64 v76; // rdx
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rbx
  __int64 v84; // r14
  _QWORD *v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rcx
  _QWORD *v88; // rdi
  __int64 v89; // rdx
  double result; // xmm0_8
  _OWORD v91[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v92; // [rsp+58h] [rbp-28h] BYREF
  __int64 v93; // [rsp+68h] [rbp-18h]
  unsigned __int128 v94; // [rsp+70h] [rbp-10h] BYREF
  __int64 v95; // [rsp+80h] [rbp+0h]
  char v96; // [rsp+88h] [rbp+8h]
  __int64 v97; // [rsp+90h] [rbp+10h] BYREF
  __int128 v98; // [rsp+98h] [rbp+18h] BYREF
  __int64 v99; // [rsp+A8h] [rbp+28h]
  __int128 v100; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v101; // [rsp+C0h] [rbp+40h]
  __int128 v102; // [rsp+D0h] [rbp+50h]
  __int64 v103; // [rsp+E0h] [rbp+60h]
  unsigned __int128 v104; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v105; // [rsp+100h] [rbp+80h]
  __int128 v106; // [rsp+110h] [rbp+90h]
  __int64 v107; // [rsp+120h] [rbp+A0h]
  __int64 v108; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v109; // [rsp+138h] [rbp+B8h]
  unsigned __int128 v110; // [rsp+140h] [rbp+C0h]
  __int128 v111; // [rsp+150h] [rbp+D0h]
  __int128 v112; // [rsp+160h] [rbp+E0h]
  __int64 v113; // [rsp+170h] [rbp+F0h]
  unsigned int v114; // [rsp+184h] [rbp+104h]
  __int64 v115; // [rsp+188h] [rbp+108h]
  __int64 v116; // [rsp+190h] [rbp+110h]
  __int128 v117; // [rsp+198h] [rbp+118h]
  __int64 v118; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v119; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v120; // [rsp+1C0h] [rbp+140h]
  _BYTE v121[96]; // [rsp+1C8h] [rbp+148h] BYREF
  int v122; // [rsp+274h] [rbp+1F4h]
  __int64 v123; // [rsp+280h] [rbp+200h] BYREF
  __int64 v124; // [rsp+288h] [rbp+208h]
  __int64 v125; // [rsp+290h] [rbp+210h]
  __int64 v126; // [rsp+298h] [rbp+218h]
  _BYTE v127[96]; // [rsp+2A0h] [rbp+220h] BYREF
  unsigned __int128 v128; // [rsp+300h] [rbp+280h] BYREF
  __int128 v129; // [rsp+310h] [rbp+290h]
  __int128 v130; // [rsp+320h] [rbp+2A0h]
  __int64 v131; // [rsp+330h] [rbp+2B0h]
  __int64 v132; // [rsp+340h] [rbp+2C0h]
  __int64 v133; // [rsp+348h] [rbp+2C8h]
  __int64 v134; // [rsp+350h] [rbp+2D0h]
  __int128 v135; // [rsp+358h] [rbp+2D8h]
  char v136; // [rsp+36Ch] [rbp+2ECh]
  char v137; // [rsp+36Dh] [rbp+2EDh] BYREF
  char v138; // [rsp+36Eh] [rbp+2EEh]
  char v139; // [rsp+36Fh] [rbp+2EFh]
  __int64 v140; // [rsp+370h] [rbp+2F0h]

  v140 = -2;
  LOBYTE(v134) = a4;
  v126 = a1;
  if ( (sub_140D6E640(aChatgpt, 7) & 1) == 0 || (sub_140D6EC10((__int64)v121, v9), *(_QWORD *)v121 == -1) )
  {
LABEL_8:
    v12 = -1;
    goto LABEL_9;
  }
  v135 = *(_OWORD *)v121;
  v6 = *(_QWORD *)&v121[16];
  if ( !(unsigned __int8)sub_140991C90(*(_QWORD *)&v121[8], *(_QWORD *)&v121[16]) )
  {
    v10 = *((_QWORD *)&v135 + 1);
    v9 = v135;
    if ( (_QWORD)v135 )
      *(double *)&v13 = sub_140001660(*((_QWORD *)&v135 + 1), v135, 1);
    goto LABEL_8;
  }
  v5 = *(_QWORD *)&v121[24];
  v12 = v135;
  if ( *(_QWORD *)off_14223FF10 >= 3u )
  {
    *(_QWORD *)&v128 = *((_QWORD *)&v135 + 1);
    *((_QWORD *)&v128 + 1) = v6;
    *(_QWORD *)v127 = &v128;
    *(_QWORD *)&v127[8] = sub_1416CE600;
    *(_QWORD *)&v121[48] = 3;
    *(_QWORD *)&v121[56] = aCodexmateLibPl_1;
    *(_QWORD *)&v121[64] = 32;
    *(_QWORD *)&v121[80] = &unk_141A5D73C;
    *(_QWORD *)&v121[88] = v127;
    *(_QWORD *)v121 = 0;
    *(_QWORD *)&v121[8] = aCodexmateLibPl_1;
    *(_OWORD *)&v121[16] = 0x20u;
    *(_QWORD *)&v121[32] = aSrcPlatformPro_0;
    *(_QWORD *)&v121[40] = 23;
    *(_QWORD *)&v121[72] = 0xB0200000001LL;
    v117 = v135;
    sub_141503E20(&v137, v121);
  }
LABEL_9:
  LOBYTE(v10) = 1;
  if ( _InterlockedCompareExchange8(&byte_1422392D0, 1, 0) )
  {
    *((_QWORD *)&v117 + 1) = *((_QWORD *)&v135 + 1);
    *(_QWORD *)&v117 = v12;
    sub_141969A30(&byte_1422392D0);
  }
  v14 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    *((_QWORD *)&v117 + 1) = *((_QWORD *)&v135 + 1);
    *(_QWORD *)&v117 = v12;
    v16 = sub_14196A710(v10, v9, v11);
    v15 = v16;
    LOBYTE(v15) = v16 ^ 1;
    if ( byte_1422392D1 )
    {
LABEL_13:
      if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        *(double *)&v13 = sub_140001660(*((_QWORD *)&v135 + 1), v12, 1);
      if ( (_BYTE)v15 )
        goto LABEL_23;
LABEL_22:
      if ( 2 * *v14 && !(unsigned __int8)sub_14196A710(v10, v9, v11) )
        byte_1422392D1 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    v15 = 0;
    if ( byte_1422392D1 )
      goto LABEL_13;
  }
  v9 = qword_1422392D8;
  if ( qword_1422392D8 != -1 && qword_1422392D8 )
    *(double *)&v13 = sub_140001660(qword_1422392E0, qword_1422392D8, 1);
  qword_1422392D8 = v12;
  qword_1422392E0 = *((_QWORD *)&v135 + 1);
  qword_1422392E8 = v6;
  qword_1422392F0 = v5;
  if ( !(_BYTE)v15 )
    goto LABEL_22;
LABEL_23:
  v17 = byte_1422392D0;
  byte_1422392D0 = 0;
  if ( v17 != 2 )
  {
    if ( (_BYTE)v134 )
      goto LABEL_25;
LABEL_42:
    if ( (unsigned int)sub_140D6E640(aChatgpt, 7) == 1 || (unsigned int)sub_140D6E640(aCodex_2, 5) == 1 )
    {
      *(_QWORD *)&v135 = a2;
      DWORD2(v135) = a3;
      v123 = 0;
      v124 = 8;
      v125 = 0;
      v91[0] = *(_OWORD *)&off_141A5D228;
      *(_QWORD *)&v13 = aCodex_2;
      v91[1] = *(_OWORD *)&off_141A5D238;
      v32 = 0;
      v12 = (__int64)v121;
      do
      {
        while ( 1 )
        {
          v33 = v32 + 1;
          v34 = v32;
          v35 = *((_QWORD *)&v91[v34] + 1);
          v108 = *(_QWORD *)&v91[v34];
          v109 = v35;
          if ( (unsigned int)sub_140D6E640(v108, v35) == 1 )
          {
            *(_QWORD *)v127 = &v108;
            *(_QWORD *)&v127[8] = sub_140191200;
            sub_1416DAFA0(v121, &unk_141A5D2B0, v127);
            v119 = *(_OWORD *)v121;
            v120 = *(_QWORD *)&v121[16];
            sub_1416B94E0(v121, aTaskkill_0, 8);
            v122 = 0x8000000;
            v36 = *((_QWORD *)&v119 + 1);
            v37 = v120;
            sub_1416B93C0(v121, &unk_141A5D2B7, 3);
            sub_1416B93C0(v121, v36, v37);
            sub_1416BCB60(&v128, v121);
            if ( (_QWORD)v128 == -1 )
            {
              v118 = *((_QWORD *)&v128 + 1);
              *(_QWORD *)v127 = &v119;
              *(_QWORD *)&v127[8] = sub_1400015F0;
              *(_QWORD *)&v127[16] = &v118;
              *(_QWORD *)&v127[24] = sub_1416EA080;
              sub_1416DAFA0(&v92, &unk_141A59968, v127);
              *(_OWORD *)v127 = v92;
              *(_QWORD *)&v127[16] = v93;
              if ( (unsigned int)(v118 & 3) - 2 >= 2 && (v118 & 3) != 0 )
              {
                v97 = v118 - 1;
                v96 = 3;
                sub_1416EBAD0(&v97);
              }
              v102 = *(_OWORD *)&v127[32];
              v104 = *(_OWORD *)v127;
              v105 = *(_OWORD *)&v127[16];
              v106 = *(_OWORD *)&v127[32];
              v107 = *(_QWORD *)&v127[48];
              v131 = *(_QWORD *)&v127[48];
              v130 = *(_OWORD *)&v127[32];
              v129 = *(_OWORD *)&v127[16];
              v128 = *(_OWORD *)v127;
              sub_1400358E0(v121);
              if ( (_QWORD)v119 )
                sub_140001660(*((_QWORD *)&v119 + 1), v119, 1);
              goto LABEL_70;
            }
            v103 = v131;
            *(_QWORD *)&v13 = v128;
            v104 = v128;
            v105 = v129;
            v106 = v130;
            v107 = v131;
            v113 = v131;
            v112 = v130;
            v111 = v129;
            v110 = v128;
            sub_1400358E0(v121);
            v38 = v113;
            if ( (_DWORD)v113 && (unsigned int)sub_140D6E640(v108, v109) == 1 )
            {
              sub_140A05D70(v121, v38);
              *(_QWORD *)&v127[16] = *(_QWORD *)&v121[16];
              *(_OWORD *)v127 = *(_OWORD *)v121;
              *(_QWORD *)v121 = &v119;
              *(_QWORD *)&v121[8] = sub_1400015F0;
              *(_QWORD *)&v121[16] = v127;
              *(_QWORD *)&v121[24] = sub_1400015F0;
              sub_1416DAFA0(&v98, &unk_141A5D2BA, v121);
              if ( *(_QWORD *)v127 )
                sub_140001660(*(_QWORD *)&v127[8], *(_QWORD *)v127, 1);
              v39 = v125;
              if ( v125 == v123 )
                sub_141939F90(&v123);
              v40 = v124;
              v41 = 3 * v39;
              *(_QWORD *)(v124 + 8 * v41 + 16) = v99;
              *(_QWORD *)&v13 = v98;
              *(_OWORD *)(v40 + 8 * v41) = v98;
              v125 = v39 + 1;
            }
            if ( (_QWORD)v110 )
              *(double *)&v13 = sub_140001660(*((_QWORD *)&v110 + 1), v110, 1);
            if ( *((_QWORD *)&v111 + 1) )
              *(double *)&v13 = sub_140001660(v112, *((_QWORD *)&v111 + 1), 1);
            if ( (_QWORD)v119 )
              break;
          }
          v32 = v33;
          if ( v33 == 2 )
            goto LABEL_61;
        }
        *(double *)&v13 = sub_140001660(*((_QWORD *)&v119 + 1), v119, 1);
        v32 = v33;
      }
      while ( v33 != 2 );
LABEL_61:
      if ( v125 )
      {
        sub_1406C5480((unsigned int)v121, v124, v125, (unsigned int)&unk_141A57CB2, 3);
        *(_QWORD *)&v127[16] = *(_QWORD *)&v121[16];
        *(_OWORD *)v127 = *(_OWORD *)v121;
        *(_QWORD *)v121 = v127;
        *(_QWORD *)&v121[8] = sub_1400015F0;
        sub_1416DAFA0(&v94, &unk_141A5D291, v121);
        if ( *(_QWORD *)v127 )
          sub_140001660(*(_QWORD *)&v127[8], *(_QWORD *)v127, 1);
        v128 = v94;
        *(_QWORD *)&v129 = v95;
LABEL_70:
        v42 = DWORD2(v135);
        v43 = v135;
        v44 = v125;
        if ( v125 )
        {
          v45 = (_QWORD *)(v124 + 8);
          do
          {
            v46 = *(v45 - 1);
            if ( v46 )
              sub_140001660(*v45, v46, 1);
            v45 += 3;
            --v44;
          }
          while ( v44 );
        }
        if ( v123 )
          sub_140001660(v124, 24 * v123, 8);
        *(_QWORD *)v127 = 10;
        *(_QWORD *)&v13 = v128;
        *(_OWORD *)&v127[8] = v128;
        *(_OWORD *)&v127[24] = v129;
        *(_OWORD *)&v127[40] = v130;
        *(_QWORD *)&v127[56] = v131;
        if ( *(_QWORD *)off_14223FF10 > 1u )
        {
          *(_QWORD *)&v100 = v127;
          *((_QWORD *)&v100 + 1) = sub_140D76130;
          *(_QWORD *)&v121[48] = 2;
          *(_QWORD *)&v121[56] = aCodexmateLibPl_1;
          *(_QWORD *)&v121[64] = 32;
          *(_QWORD *)&v121[80] = &unk_141A5B215;
          *(_QWORD *)&v121[88] = &v100;
          *(_QWORD *)v121 = 0;
          *(_QWORD *)&v121[8] = aCodexmateLibPl_1;
          *(_OWORD *)&v121[16] = 0x20u;
          *(_QWORD *)&v121[32] = aSrcPlatformPro_0;
          *(_QWORD *)&v121[40] = 23;
          *(_QWORD *)&v121[72] = 0x66400000001LL;
          sub_141503E20(&v137, v121);
        }
        sub_140906570(v127);
        goto LABEL_83;
      }
      if ( v123 )
        *(double *)&v13 = sub_140001660(v124, 24 * v123, 8);
      v42 = DWORD2(v135);
      v43 = v135;
LABEL_83:
      v47 = ((__int64 (*)(void))sub_1416AEBD0)();
      v49 = sub_1416D0210(v47, v48, v43, v42, (__int64)&off_141A5E140);
      DWORD2(v135) = v50;
      v15 = (unsigned __int64)v121;
      while ( 1 )
      {
        v51 = ((__int64 (*)(void))sub_1416AEBD0)();
        v53 = v51 < v49;
        if ( v51 == v49 )
          v53 = v52 < DWORD2(v135);
        if ( !v53 )
          break;
        sub_140989CB0(v121);
        if ( *(_DWORD *)v121 == -1 )
        {
          v54 = *(_QWORD *)&v121[8];
          v55 = *(_OWORD *)&v121[16];
          if ( *(_QWORD *)&v121[24] )
          {
            v12 = 32LL * *(_QWORD *)&v121[24];
            v56 = 0;
            do
            {
              v57 = *(_QWORD *)(v55 + v56 + 8);
              if ( v57 )
                *(double *)&v13 = sub_140001660(*(_QWORD *)(v55 + v56 + 16), v57, 1);
              v56 += 32;
            }
            while ( v12 != v56 );
          }
          if ( v54 )
            *(double *)&v13 = sub_140001660(v55, 32 * v54, 8);
          if ( !*((_QWORD *)&v55 + 1) )
            goto LABEL_112;
        }
        else
        {
          *(_OWORD *)v127 = *(_OWORD *)v121;
          *(_OWORD *)&v127[80] = *(_OWORD *)&v121[80];
          *(_QWORD *)&v13 = *(_QWORD *)&v121[64];
          *(_OWORD *)&v127[64] = *(_OWORD *)&v121[64];
          *(_OWORD *)&v127[48] = *(_OWORD *)&v121[48];
          *(_OWORD *)&v127[32] = *(_OWORD *)&v121[32];
          *(_OWORD *)&v127[16] = *(_OWORD *)&v121[16];
          if ( *(_QWORD *)v121 == -1 )
          {
            if ( v127[8] )
              goto LABEL_112;
          }
          else
          {
            sub_140906570(v127);
          }
        }
        sub_1416C57D0(0, 100000000);
      }
      sub_140989CB0(v121);
      if ( *(_DWORD *)v121 == -1 )
      {
        v58 = *(_QWORD *)&v121[8];
        v15 = *(_QWORD *)&v121[16];
        if ( *(_QWORD *)&v121[24] )
        {
          v59 = 32LL * *(_QWORD *)&v121[24];
          v60 = 0;
          do
          {
            v61 = *(_QWORD *)(v15 + v60 + 8);
            if ( v61 )
              *(double *)&v13 = sub_140001660(*(_QWORD *)(v15 + v60 + 16), v61, 1);
            v60 += 32;
          }
          while ( v59 != v60 );
        }
        if ( v58 )
          *(double *)&v13 = sub_140001660(v15, 32 * v58, 8);
      }
      else
      {
        *(_OWORD *)v127 = *(_OWORD *)v121;
        *(_OWORD *)&v127[80] = *(_OWORD *)&v121[80];
        *(_QWORD *)&v13 = *(_QWORD *)&v121[64];
        *(_OWORD *)&v127[64] = *(_OWORD *)&v121[64];
        *(_OWORD *)&v127[48] = *(_OWORD *)&v121[48];
        *(_OWORD *)&v127[32] = *(_OWORD *)&v121[32];
        *(_OWORD *)&v127[16] = *(_OWORD *)&v121[16];
        if ( *(_QWORD *)v121 != -1 )
          sub_140906570(v127);
      }
    }
LABEL_112:
    if ( !(_BYTE)v134 )
    {
      sub_14098EE20(v126, a5);
      goto LABEL_169;
    }
    v62 = sub_1416AEBD0(v31, a5);
    *(_QWORD *)&v135 = sub_1416D0210(v62, v63, 3, 0, (__int64)&off_141A5E3A8);
    v114 = v64;
    for ( i = -1; ; i = v72 )
    {
      v116 = i;
      v115 = v12;
      v138 = 1;
      sub_140988C10(v121);
      v66 = *(_QWORD *)v121;
      if ( *(_QWORD *)v121 != -1 )
      {
        v13 = *(_OWORD *)&v121[32];
        v77 = *(_OWORD *)&v121[48];
        v78 = *(_OWORD *)&v121[64];
        *(_OWORD *)&v127[80] = *(_OWORD *)&v121[80];
        *(_OWORD *)&v127[64] = *(_OWORD *)&v121[64];
        *(_OWORD *)&v127[48] = *(_OWORD *)&v121[48];
        *(_OWORD *)&v127[32] = *(_OWORD *)&v121[32];
        *(_QWORD *)&v127[8] = *(_QWORD *)&v121[8];
        *(_OWORD *)&v127[16] = *(_OWORD *)&v121[16];
        v100 = *(_OWORD *)&v127[8];
        v101 = *(_QWORD *)&v121[24];
        v79 = v126;
        *(_OWORD *)(v126 + 80) = *(_OWORD *)&v121[80];
        *(_OWORD *)(v79 + 64) = v78;
        *(_OWORD *)(v79 + 48) = v77;
        *(_OWORD *)(v79 + 32) = v13;
        *(_QWORD *)(v79 + 24) = v101;
        *(_QWORD *)&v13 = v100;
        *(_OWORD *)(v79 + 8) = v100;
        *(_QWORD *)v79 = v66;
LABEL_138:
        if ( (unsigned __int64)(i - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_169;
        v80 = 1;
        v81 = v12;
        v82 = i;
        goto LABEL_162;
      }
      *(_QWORD *)&v128 = *(_QWORD *)&v121[16];
      *((_QWORD *)&v128 + 1) = *(_QWORD *)&v121[16];
      *(_QWORD *)&v129 = *(_QWORD *)&v121[8];
      *((_QWORD *)&v129 + 1) = *(_QWORD *)&v121[16] + 32LL * *(_QWORD *)&v121[24];
      v116 = i;
      v115 = v12;
      v138 = 1;
      sub_1401B62C0(&v127[8], &v128);
      v69 = *(_QWORD *)&v127[24];
      *(_QWORD *)&v13 = *(_QWORD *)&v127[8];
      v110 = *(_OWORD *)&v127[8];
      *(_QWORD *)&v111 = *(_QWORD *)&v127[24];
      if ( !*(_QWORD *)&v127[24] )
      {
        *(_QWORD *)v126 = -1;
        if ( (_QWORD)v110 )
          *(double *)&v13 = sub_140001660(*((_QWORD *)&v110 + 1), 32 * v110, 8);
        goto LABEL_138;
      }
      v133 = i;
      v132 = v12;
      v139 = 1;
      v70 = sub_1416AEBD0(v68, v67);
      if ( v70 == (_QWORD)v135 )
      {
        if ( v71 >= v114 )
          goto LABEL_140;
      }
      else if ( v70 >= (unsigned __int64)v135 )
      {
LABEL_140:
        v22 = *((_QWORD *)&v110 + 1);
        v133 = i;
        v132 = v12;
        v139 = 1;
        sub_1402270A0((unsigned __int64 *)&v100, *((__int64 *)&v110 + 1), *((_QWORD *)&v110 + 1) + 32 * v69);
        v134 = v12;
        *((_QWORD *)&v135 + 1) = i;
        v83 = *((_QWORD *)&v100 + 1);
        v84 = v101;
        v136 = 1;
        sub_1406C5480((unsigned int)v121, DWORD2(v100), v101, (unsigned int)&unk_141A57CB2, 3);
        *(_QWORD *)&v105 = *(_QWORD *)&v121[16];
        v104 = *(_OWORD *)v121;
        if ( *((_QWORD *)&v135 + 1) == -1 )
        {
          *(_QWORD *)&v128 = 0;
          *((_QWORD *)&v128 + 1) = 1;
          *(_QWORD *)&v129 = 0;
        }
        else
        {
          *(_QWORD *)&v121[8] = v134;
          *(_QWORD *)&v121[16] = v15;
          *(_QWORD *)v121 = *((_QWORD *)&v135 + 1);
          *(_QWORD *)&v128 = v121;
          *((_QWORD *)&v128 + 1) = sub_1400015F0;
          sub_1416DAFA0(v127, &unk_141A59AB9, &v128);
          if ( *(_QWORD *)v121 )
            sub_140001660(*(_QWORD *)&v121[8], *(_QWORD *)v121, 1);
          v128 = *(_OWORD *)v127;
          *(_QWORD *)&v129 = *(_QWORD *)&v127[16];
        }
        *(_QWORD *)v121 = &v104;
        *(_QWORD *)&v121[8] = sub_1400015F0;
        *(_QWORD *)&v121[16] = &v128;
        *(_QWORD *)&v121[24] = sub_1400015F0;
        sub_1416DAFA0(v127, &unk_141A5E3C0, v121);
        if ( (_QWORD)v128 )
          sub_140001660(*((_QWORD *)&v128 + 1), v128, 1);
        if ( (_QWORD)v104 )
          sub_140001660(*((_QWORD *)&v104 + 1), v104, 1);
        if ( v84 )
        {
          v85 = (_QWORD *)(v83 + 8);
          do
          {
            v86 = *(v85 - 1);
            if ( v86 )
              sub_140001660(*v85, v86, 1);
            v85 += 3;
            --v84;
          }
          while ( v84 );
        }
        if ( (_QWORD)v100 )
          sub_140001660(v83, 24 * v100, 8);
        v87 = v126;
        *(_QWORD *)(v126 + 24) = *(_QWORD *)&v127[16];
        *(_QWORD *)&v13 = *(_QWORD *)v127;
        *(_OWORD *)(v87 + 8) = *(_OWORD *)v127;
        *(_QWORD *)v87 = 10;
        v88 = (_QWORD *)(v22 + 16);
        do
        {
          v89 = *(v88 - 1);
          if ( v89 )
            *(double *)&v13 = sub_140001660(*v88, v89, 1);
          v88 += 4;
          --v69;
        }
        while ( v69 );
        v28 = v110;
        if ( !(_QWORD)v110 )
          goto LABEL_169;
        goto LABEL_161;
      }
      v133 = i;
      v132 = v12;
      v139 = 1;
      sub_14098A180(v127, *((_QWORD *)&v110 + 1), v69, a5);
      if ( *(_QWORD *)v127 == -1 )
      {
        v72 = __PAIR128__(v12, -1);
        if ( (unsigned __int64)(i - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_124;
      }
      else
      {
        v134 = v12;
        *((_QWORD *)&v135 + 1) = i;
        *(_QWORD *)&v121[88] = *(_QWORD *)&v127[88];
        *(_OWORD *)&v121[72] = *(_OWORD *)&v127[72];
        *(_OWORD *)&v121[56] = *(_OWORD *)&v127[56];
        *(_OWORD *)&v121[40] = *(_OWORD *)&v127[40];
        *(_OWORD *)&v121[24] = *(_OWORD *)&v127[24];
        *(_OWORD *)&v121[8] = *(_OWORD *)&v127[8];
        *(_QWORD *)v121 = *(_QWORD *)v127;
        *(_QWORD *)&v128 = 0;
        *((_QWORD *)&v128 + 1) = 1;
        *(_QWORD *)&v129 = 0;
        *(_QWORD *)&v127[16] = 1610612768;
        *(_QWORD *)v127 = &v128;
        *(_QWORD *)&v127[8] = &off_141A66E10;
        if ( (unsigned __int8)sub_140D76130(v121, v127) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_5,
            55,
            (unsigned int)&v137,
            (unsigned int)&unk_141A5A890,
            (__int64)&off_141A66EC8);
        v72 = v128;
        v15 = v129;
        i = *((_QWORD *)&v135 + 1);
        v133 = *((_QWORD *)&v135 + 1);
        v12 = v134;
        v132 = v134;
        v139 = 1;
        sub_140906570(v121);
        if ( (unsigned __int64)(i - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_124:
          sub_140001660(v12, i, 1);
      }
      v132 = v72 >> 64;
      v133 = v72;
      v139 = 1;
      sub_1416C57D0(0, 300000000);
      v73 = *((_QWORD *)&v110 + 1);
      v74 = v111;
      if ( (_QWORD)v111 )
      {
        v75 = (_QWORD *)(*((_QWORD *)&v110 + 1) + 16LL);
        do
        {
          v76 = *(v75 - 1);
          if ( v76 )
            sub_140001660(*v75, v76, 1);
          v75 += 4;
          --v74;
        }
        while ( v74 );
      }
      if ( (_QWORD)v110 )
        sub_140001660(v73, 32 * v110, 8);
      v12 = v72 >> 64;
    }
  }
  WakeByAddressSingle(&byte_1422392D0);
  if ( !(_BYTE)v134 )
    goto LABEL_42;
LABEL_25:
  sub_14098CCF0(v121);
  v18 = *(_QWORD *)v121;
  *(_OWORD *)v127 = *(_OWORD *)&v121[8];
  *(_QWORD *)&v127[16] = *(_QWORD *)&v121[24];
  if ( *(_QWORD *)v121 != -1 )
  {
    v13 = *(_OWORD *)&v121[32];
    v19 = *(_OWORD *)&v121[48];
    v20 = *(_OWORD *)&v121[64];
    v21 = v126;
    *(_OWORD *)(v126 + 80) = *(_OWORD *)&v121[80];
    *(_OWORD *)(v21 + 64) = v20;
    *(_OWORD *)(v21 + 48) = v19;
    *(_OWORD *)(v21 + 32) = v13;
    *(_QWORD *)(v21 + 24) = *(_QWORD *)&v127[16];
    *(_QWORD *)&v13 = *(_QWORD *)v127;
    *(_OWORD *)(v21 + 8) = *(_OWORD *)v127;
    *(_QWORD *)v21 = v18;
    goto LABEL_169;
  }
  *(_QWORD *)&v13 = *(_QWORD *)v127;
  v128 = *(_OWORD *)v127;
  v15 = *(_QWORD *)&v127[16];
  *(_QWORD *)&v129 = *(_QWORD *)&v127[16];
  v22 = *(_QWORD *)&v127[8];
  sub_140226B30(v127, *(_QWORD *)&v127[8], *(_QWORD *)&v127[8] + 32LL * *(_QWORD *)&v127[16]);
  sub_14098C7D0(v121, v127);
  if ( *(_DWORD *)v121 == -1 )
  {
    if ( v15 )
    {
      v29 = (_QWORD *)(v22 + 8);
      do
      {
        v30 = *(v29 - 1);
        if ( v30 )
          *(double *)&v13 = sub_140001660(*v29, v30, 1);
        v29 += 4;
        --v15;
      }
      while ( v15 );
    }
    if ( (_QWORD)v128 )
      *(double *)&v13 = sub_140001660(v22, 32 * v128, 8);
    goto LABEL_42;
  }
  v23 = (_OWORD *)v126;
  *(_OWORD *)(v126 + 80) = *(_OWORD *)&v121[80];
  v23[4] = *(_OWORD *)&v121[64];
  v13 = *(_OWORD *)v121;
  v24 = *(_OWORD *)&v121[16];
  v25 = *(_OWORD *)&v121[32];
  v23[3] = *(_OWORD *)&v121[48];
  v23[2] = v25;
  v23[1] = v24;
  *v23 = v13;
  if ( v15 )
  {
    v26 = (_QWORD *)(v22 + 8);
    do
    {
      v27 = *(v26 - 1);
      if ( v27 )
        *(double *)&v13 = sub_140001660(*v26, v27, 1);
      v26 += 4;
      --v15;
    }
    while ( v15 );
  }
  v28 = v128;
  if ( (_QWORD)v128 )
  {
LABEL_161:
    v82 = 32 * v28;
    v80 = 8;
    v81 = v22;
LABEL_162:
    *(double *)&v13 = sub_140001660(v81, v82, v80);
  }
LABEL_169:
  *(_QWORD *)&result = v13;
  return result;
}
