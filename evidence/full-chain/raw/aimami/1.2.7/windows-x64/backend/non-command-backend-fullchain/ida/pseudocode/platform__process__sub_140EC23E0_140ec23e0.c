// win 1.2.7 | module src/platform/process.rs | ea 0x140ec23e0 | name sub_140EC23E0
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140EC23E0(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 *v12; // r14
  unsigned __int64 v13; // rdi
  unsigned int v14; // eax
  char v15; // al
  _OWORD *result; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdx
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // r15
  unsigned int v42; // esi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r8
  int v46; // ebx
  int v47; // r14d
  __int64 v48; // rsi
  _QWORD *v49; // rdi
  __int64 v50; // rdx
  int v51; // eax
  int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rsi
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rax
  unsigned int v59; // edx
  bool v60; // cf
  __int64 v61; // r15
  __int128 v62; // kr10_16
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rbx
  __int64 v67; // r14
  __int64 v68; // rdx
  int v69; // eax
  int v70; // edx
  unsigned int v71; // edx
  __int64 i; // r12
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r15
  unsigned __int64 v79; // rax
  unsigned int v80; // edx
  unsigned __int128 v81; // kr20_16
  __int64 v82; // r15
  __int64 v83; // r12
  _QWORD *v84; // r13
  __int64 v85; // rdx
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rbx
  __int64 v94; // r14
  _QWORD *v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // rcx
  _QWORD *v98; // rdi
  __int64 v99; // rdx
  _OWORD v100[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v101; // [rsp+58h] [rbp-28h] BYREF
  __int64 v102; // [rsp+68h] [rbp-18h]
  unsigned __int128 v103; // [rsp+70h] [rbp-10h] BYREF
  __int64 v104; // [rsp+80h] [rbp+0h]
  char v105; // [rsp+88h] [rbp+8h]
  __int64 v106; // [rsp+90h] [rbp+10h] BYREF
  __int128 v107; // [rsp+98h] [rbp+18h] BYREF
  __int64 v108; // [rsp+A8h] [rbp+28h]
  __int128 v109; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v110; // [rsp+C0h] [rbp+40h]
  __int128 v111; // [rsp+D0h] [rbp+50h]
  __int64 v112; // [rsp+E0h] [rbp+60h]
  unsigned __int128 v113; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v114; // [rsp+100h] [rbp+80h]
  __int128 v115; // [rsp+110h] [rbp+90h]
  __int64 v116; // [rsp+120h] [rbp+A0h]
  __int64 v117; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v118; // [rsp+138h] [rbp+B8h]
  unsigned __int128 v119; // [rsp+140h] [rbp+C0h]
  __int128 v120; // [rsp+150h] [rbp+D0h]
  __int128 v121; // [rsp+160h] [rbp+E0h]
  __int64 v122; // [rsp+170h] [rbp+F0h]
  unsigned int v123; // [rsp+184h] [rbp+104h]
  __int64 v124; // [rsp+188h] [rbp+108h]
  __int64 v125; // [rsp+190h] [rbp+110h]
  __int128 v126; // [rsp+198h] [rbp+118h]
  __int64 v127; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v128; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v129; // [rsp+1C0h] [rbp+140h]
  _BYTE v130[96]; // [rsp+1C8h] [rbp+148h] BYREF
  int v131; // [rsp+274h] [rbp+1F4h]
  __int64 v132; // [rsp+280h] [rbp+200h] BYREF
  __int64 v133; // [rsp+288h] [rbp+208h]
  __int64 v134; // [rsp+290h] [rbp+210h]
  __int64 v135; // [rsp+298h] [rbp+218h]
  _BYTE v136[96]; // [rsp+2A0h] [rbp+220h] BYREF
  unsigned __int128 v137; // [rsp+300h] [rbp+280h] BYREF
  __int128 v138; // [rsp+310h] [rbp+290h]
  __int128 v139; // [rsp+320h] [rbp+2A0h]
  __int64 v140; // [rsp+330h] [rbp+2B0h]
  __int64 v141; // [rsp+340h] [rbp+2C0h]
  __int64 v142; // [rsp+348h] [rbp+2C8h]
  __int64 v143; // [rsp+350h] [rbp+2D0h]
  __int128 v144; // [rsp+358h] [rbp+2D8h]
  char v145; // [rsp+36Ch] [rbp+2ECh]
  char v146; // [rsp+36Dh] [rbp+2EDh] BYREF
  char v147; // [rsp+36Eh] [rbp+2EEh]
  char v148; // [rsp+36Fh] [rbp+2EFh]
  __int64 v149; // [rsp+370h] [rbp+2F0h]

  v149 = -2;
  LOBYTE(v143) = a4;
  v135 = a1;
  if ( (sub_141040BC0((__int64)aChatgpt, 7) & 1) == 0 || (sub_141041190(v130, v9), *(_QWORD *)v130 == -1) )
  {
LABEL_8:
    v11 = -1;
    goto LABEL_9;
  }
  v144 = *(_OWORD *)v130;
  v6 = *(_QWORD *)&v130[16];
  if ( !(unsigned __int8)sub_140EF1B70(*(_QWORD *)&v130[8], *(_QWORD *)&v130[16]) )
  {
    v10 = *((_QWORD *)&v144 + 1);
    if ( (_QWORD)v144 )
      sub_140001660(*((_QWORD *)&v144 + 1), v144, 1);
    goto LABEL_8;
  }
  v5 = *(_QWORD *)&v130[24];
  v11 = v144;
  if ( *(_QWORD *)off_1421E6EC0 >= 3u )
  {
    *(_QWORD *)&v137 = *((_QWORD *)&v144 + 1);
    *((_QWORD *)&v137 + 1) = v6;
    *(_QWORD *)v136 = &v137;
    *(_QWORD *)&v136[8] = sub_14169F630;
    *(_QWORD *)&v130[48] = 3;
    *(_QWORD *)&v130[56] = aCodexmateLibPl_2;
    *(_QWORD *)&v130[64] = 32;
    *(_QWORD *)&v130[80] = &unk_141A5AA8A;
    *(_QWORD *)&v130[88] = v136;
    *(_QWORD *)v130 = 0;
    *(_QWORD *)&v130[8] = aCodexmateLibPl_2;
    *(_OWORD *)&v130[16] = 0x20u;
    *(_QWORD *)&v130[32] = aSrcPlatformPro_1;
    *(_QWORD *)&v130[40] = 23;
    *(_QWORD *)&v130[72] = 0xAAC00000001LL;
    v126 = v144;
    sub_1414D53A0(&v146, v130);
  }
LABEL_9:
  LOBYTE(v10) = 1;
  if ( _InterlockedCompareExchange8(&byte_1421E0530, 1, 0) )
  {
    *((_QWORD *)&v126 + 1) = *((_QWORD *)&v144 + 1);
    *(_QWORD *)&v126 = v11;
    sub_141937480(&byte_1421E0530);
  }
  v12 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    *((_QWORD *)&v126 + 1) = *((_QWORD *)&v144 + 1);
    *(_QWORD *)&v126 = v11;
    v14 = sub_141938160(v10);
    v13 = v14;
    LOBYTE(v13) = v14 ^ 1;
    if ( byte_1421E0531 )
    {
LABEL_13:
      if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(*((_QWORD *)&v144 + 1), v11, 1);
      if ( (_BYTE)v13 )
        goto LABEL_23;
LABEL_22:
      if ( 2 * *v12 && !(unsigned __int8)sub_141938160(v10) )
        byte_1421E0531 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    v13 = 0;
    if ( byte_1421E0531 )
      goto LABEL_13;
  }
  if ( qword_1421E0538 != -1 && qword_1421E0538 )
    sub_140001660(qword_1421E0540, qword_1421E0538, 1);
  qword_1421E0538 = v11;
  qword_1421E0540 = *((_QWORD *)&v144 + 1);
  qword_1421E0548 = v6;
  qword_1421E0550 = v5;
  if ( !(_BYTE)v13 )
    goto LABEL_22;
LABEL_23:
  v15 = byte_1421E0530;
  byte_1421E0530 = 0;
  if ( v15 != 2 )
  {
    if ( (_BYTE)v143 )
      goto LABEL_25;
LABEL_42:
    if ( (unsigned int)sub_141040BC0((__int64)aChatgpt, 7) == 1
      || (unsigned int)sub_141040BC0((__int64)aCodex_3, 5) == 1 )
    {
      *(_QWORD *)&v144 = a2;
      DWORD2(v144) = a3;
      v132 = 0;
      v133 = 8;
      v134 = 0;
      v100[0] = *(_OWORD *)&off_141A5A5A8;
      v100[1] = *(_OWORD *)&off_141A5A5B8;
      v33 = 0;
      v11 = (__int64)v130;
      do
      {
        while ( 1 )
        {
          v34 = v33 + 1;
          v35 = v33;
          v36 = *((_QWORD *)&v100[v35] + 1);
          v117 = *(_QWORD *)&v100[v35];
          v118 = v36;
          if ( (unsigned int)sub_141040BC0(v117, v36) == 1 )
          {
            *(_QWORD *)v136 = &v117;
            *(_QWORD *)&v136[8] = sub_140186EE0;
            sub_1416ABFD0(v130, &unk_141A5A5F0, v136);
            v128 = *(_OWORD *)v130;
            v129 = *(_QWORD *)&v130[16];
            sub_14168A510(v130, aTaskkill, 8);
            v131 = 0x8000000;
            v40 = *((_QWORD *)&v128 + 1);
            v41 = v129;
            sub_14168A3F0(v130, &unk_141A5A5F7, 3);
            sub_14168A3F0(v130, v40, v41);
            sub_14168DB90(&v137, v130);
            if ( (_QWORD)v137 == -1 )
            {
              v127 = *((_QWORD *)&v137 + 1);
              *(_QWORD *)v136 = &v128;
              *(_QWORD *)&v136[8] = sub_1400015F0;
              *(_QWORD *)&v136[16] = &v127;
              *(_QWORD *)&v136[24] = sub_1416BB0B0;
              sub_1416ABFD0(&v101, &unk_141A5753A, v136);
              *(_OWORD *)v136 = v101;
              *(_QWORD *)&v136[16] = v102;
              if ( (unsigned int)(v127 & 3) - 2 >= 2 && (v127 & 3) != 0 )
              {
                v106 = v127 - 1;
                v105 = 3;
                sub_1416BCB00(&v106);
              }
              v111 = *(_OWORD *)&v136[32];
              v113 = *(_OWORD *)v136;
              v114 = *(_OWORD *)&v136[16];
              v115 = *(_OWORD *)&v136[32];
              v116 = *(_QWORD *)&v136[48];
              v140 = *(_QWORD *)&v136[48];
              v139 = *(_OWORD *)&v136[32];
              v138 = *(_OWORD *)&v136[16];
              v137 = *(_OWORD *)v136;
              sub_14029BE30(v130);
              if ( (_QWORD)v128 )
                sub_140001660(*((_QWORD *)&v128 + 1), v128, 1);
              goto LABEL_70;
            }
            v112 = v140;
            v113 = v137;
            v114 = v138;
            v115 = v139;
            v116 = v140;
            v122 = v140;
            v121 = v139;
            v120 = v138;
            v119 = v137;
            sub_14029BE30(v130);
            v42 = v122;
            if ( (_DWORD)v122 && (unsigned int)sub_141040BC0(v117, v118) == 1 )
            {
              sub_140F985D0(v130, v42);
              *(_QWORD *)&v136[16] = *(_QWORD *)&v130[16];
              *(_OWORD *)v136 = *(_OWORD *)v130;
              *(_QWORD *)v130 = &v128;
              *(_QWORD *)&v130[8] = sub_1400015F0;
              *(_QWORD *)&v130[16] = v136;
              *(_QWORD *)&v130[24] = sub_1400015F0;
              sub_1416ABFD0(&v107, &unk_141A5A5FA, v130);
              if ( *(_QWORD *)v136 )
                sub_140001660(*(_QWORD *)&v136[8], *(_QWORD *)v136, 1);
              v43 = v134;
              if ( v134 == v132 )
                sub_14190FDC0(&v132);
              v44 = v133;
              v38 = 3 * v43;
              *(_QWORD *)(v133 + 8 * v38 + 16) = v108;
              *(_OWORD *)(v44 + 8 * v38) = v107;
              v134 = v43 + 1;
            }
            if ( (_QWORD)v119 )
              sub_140001660(*((_QWORD *)&v119 + 1), v119, 1);
            if ( *((_QWORD *)&v120 + 1) )
              sub_140001660(v121, *((_QWORD *)&v120 + 1), 1);
            v37 = v128;
            if ( (_QWORD)v128 )
              break;
          }
          v33 = v34;
          if ( v34 == 2 )
            goto LABEL_61;
        }
        sub_140001660(*((_QWORD *)&v128 + 1), v128, 1);
        v33 = v34;
      }
      while ( v34 != 2 );
LABEL_61:
      v45 = v134;
      if ( v134 )
      {
        sub_140D1EE10((unsigned int)v130, v133, v134, (unsigned int)&unk_141A55FEA, 3);
        *(_QWORD *)&v136[16] = *(_QWORD *)&v130[16];
        *(_OWORD *)v136 = *(_OWORD *)v130;
        *(_QWORD *)v130 = v136;
        *(_QWORD *)&v130[8] = sub_1400015F0;
        sub_1416ABFD0(&v103, &unk_141A5A5D1, v130);
        if ( *(_QWORD *)v136 )
          sub_140001660(*(_QWORD *)&v136[8], *(_QWORD *)v136, 1);
        v137 = v103;
        *(_QWORD *)&v138 = v104;
LABEL_70:
        v46 = DWORD2(v144);
        v47 = v144;
        v48 = v134;
        if ( v134 )
        {
          v49 = (_QWORD *)(v133 + 8);
          do
          {
            v50 = *(v49 - 1);
            if ( v50 )
              sub_140001660(*v49, v50, 1);
            v49 += 3;
            --v48;
          }
          while ( v48 );
        }
        if ( v132 )
          sub_140001660(v133, 24 * v132, 8);
        *(_QWORD *)v136 = 10;
        *(_OWORD *)&v136[8] = v137;
        *(_OWORD *)&v136[24] = v138;
        *(_OWORD *)&v136[40] = v139;
        *(_QWORD *)&v136[56] = v140;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)&v109 = v136;
          *((_QWORD *)&v109 + 1) = sub_14104A7D0;
          *(_QWORD *)&v130[48] = 2;
          *(_QWORD *)&v130[56] = aCodexmateLibPl_2;
          *(_QWORD *)&v130[64] = 32;
          *(_QWORD *)&v130[80] = &unk_141A59792;
          *(_QWORD *)&v130[88] = &v109;
          *(_QWORD *)v130 = 0;
          *(_QWORD *)&v130[8] = aCodexmateLibPl_2;
          *(_OWORD *)&v130[16] = 0x20u;
          *(_QWORD *)&v130[32] = aSrcPlatformPro_1;
          *(_QWORD *)&v130[40] = 23;
          *(_QWORD *)&v130[72] = 0x60E00000001LL;
          sub_1414D53A0(&v146, v130);
        }
        sub_140E97700(v136);
        goto LABEL_83;
      }
      if ( v132 )
        sub_140001660(v133, 24 * v132, 8);
      v46 = DWORD2(v144);
      v47 = v144;
LABEL_83:
      v51 = sub_14167FC00(v38, v37, v45, v39);
      v55 = sub_1416A1240(v51, v52, v47, v46, (__int64)&off_141A5B3E8);
      DWORD2(v144) = v53;
      v13 = (unsigned __int64)v130;
      while ( 1 )
      {
        v58 = sub_14167FC00(v54, v53, v56, v57);
        v60 = v58 < v55;
        if ( v58 == v55 )
          v60 = v59 < DWORD2(v144);
        if ( !v60 )
          break;
        sub_140EE9280(v130);
        if ( *(_DWORD *)v130 == -1 )
        {
          v61 = *(_QWORD *)&v130[8];
          v62 = *(_OWORD *)&v130[16];
          if ( *(_QWORD *)&v130[24] )
          {
            v11 = 32LL * *(_QWORD *)&v130[24];
            v63 = 0;
            do
            {
              v64 = *(_QWORD *)(v62 + v63 + 8);
              if ( v64 )
                sub_140001660(*(_QWORD *)(v62 + v63 + 16), v64, 1);
              v63 += 32;
            }
            while ( v11 != v63 );
          }
          if ( v61 )
            sub_140001660(v62, 32 * v61, 8);
          if ( !*((_QWORD *)&v62 + 1) )
            goto LABEL_112;
        }
        else
        {
          *(_OWORD *)v136 = *(_OWORD *)v130;
          *(_OWORD *)&v136[80] = *(_OWORD *)&v130[80];
          *(_OWORD *)&v136[64] = *(_OWORD *)&v130[64];
          *(_OWORD *)&v136[48] = *(_OWORD *)&v130[48];
          *(_OWORD *)&v136[32] = *(_OWORD *)&v130[32];
          *(_OWORD *)&v136[16] = *(_OWORD *)&v130[16];
          if ( *(_QWORD *)v130 == -1 )
          {
            if ( v136[8] )
              goto LABEL_112;
          }
          else
          {
            sub_140E97700(v136);
          }
        }
        sub_141696800(0, 100000000);
      }
      sub_140EE9280(v130);
      if ( *(_DWORD *)v130 == -1 )
      {
        v65 = *(_QWORD *)&v130[8];
        v13 = *(_QWORD *)&v130[16];
        if ( *(_QWORD *)&v130[24] )
        {
          v66 = 32LL * *(_QWORD *)&v130[24];
          v67 = 0;
          do
          {
            v68 = *(_QWORD *)(v13 + v67 + 8);
            if ( v68 )
              sub_140001660(*(_QWORD *)(v13 + v67 + 16), v68, 1);
            v67 += 32;
          }
          while ( v66 != v67 );
        }
        if ( v65 )
          sub_140001660(v13, 32 * v65, 8);
      }
      else
      {
        *(_OWORD *)v136 = *(_OWORD *)v130;
        *(_OWORD *)&v136[80] = *(_OWORD *)&v130[80];
        *(_OWORD *)&v136[64] = *(_OWORD *)&v130[64];
        *(_OWORD *)&v136[48] = *(_OWORD *)&v130[48];
        *(_OWORD *)&v136[32] = *(_OWORD *)&v130[32];
        *(_OWORD *)&v136[16] = *(_OWORD *)&v130[16];
        if ( *(_QWORD *)v130 != -1 )
          sub_140E97700(v136);
      }
    }
LABEL_112:
    if ( !(_BYTE)v143 )
      return (_OWORD *)sub_140EEF140(v135, a5);
    v69 = sub_14167FC00(v30, a5, v31, v32);
    *(_QWORD *)&v144 = sub_1416A1240(v69, v70, 3, 0, (__int64)&off_141A5B5E0);
    v123 = v71;
    for ( i = -1; ; i = v81 )
    {
      v125 = i;
      v124 = v11;
      v147 = 1;
      sub_140EE8460((__int64)v130);
      v73 = *(_QWORD *)v130;
      if ( *(_QWORD *)v130 != -1 )
      {
        v86 = *(_OWORD *)&v130[32];
        v87 = *(_OWORD *)&v130[48];
        v88 = *(_OWORD *)&v130[64];
        *(_OWORD *)&v136[80] = *(_OWORD *)&v130[80];
        *(_OWORD *)&v136[64] = *(_OWORD *)&v130[64];
        *(_OWORD *)&v136[48] = *(_OWORD *)&v130[48];
        *(_OWORD *)&v136[32] = *(_OWORD *)&v130[32];
        *(_QWORD *)&v136[8] = *(_QWORD *)&v130[8];
        *(_OWORD *)&v136[16] = *(_OWORD *)&v130[16];
        v109 = *(_OWORD *)&v136[8];
        v110 = *(_QWORD *)&v130[24];
        v89 = v135;
        *(_OWORD *)(v135 + 80) = *(_OWORD *)&v130[80];
        *(_OWORD *)(v89 + 64) = v88;
        *(_OWORD *)(v89 + 48) = v87;
        *(_OWORD *)(v89 + 32) = v86;
        *(_QWORD *)(v89 + 24) = v110;
        *(_OWORD *)(v89 + 8) = v109;
        *(_QWORD *)v89 = v73;
LABEL_138:
        result = (_OWORD *)(i - 1);
        if ( (unsigned __int64)(i - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return result;
        v90 = 1;
        v91 = v11;
        v92 = i;
        return (_OWORD *)sub_140001660(v91, v92, v90);
      }
      *(_QWORD *)&v137 = *(_QWORD *)&v130[16];
      *((_QWORD *)&v137 + 1) = *(_QWORD *)&v130[16];
      *(_QWORD *)&v138 = *(_QWORD *)&v130[8];
      *((_QWORD *)&v138 + 1) = *(_QWORD *)&v130[16] + 32LL * *(_QWORD *)&v130[24];
      v125 = i;
      v124 = v11;
      v147 = 1;
      sub_140391650((char **)&v136[8], (char **)&v137);
      v78 = *(_QWORD *)&v136[24];
      v119 = *(_OWORD *)&v136[8];
      *(_QWORD *)&v120 = *(_QWORD *)&v136[24];
      if ( !*(_QWORD *)&v136[24] )
      {
        *(_QWORD *)v135 = -1;
        if ( (_QWORD)v119 )
          sub_140001660(*((_QWORD *)&v119 + 1), 32 * v119, 8);
        goto LABEL_138;
      }
      v142 = i;
      v141 = v11;
      v148 = 1;
      v79 = sub_14167FC00(v75, v74, v76, v77);
      if ( v79 == (_QWORD)v144 )
      {
        if ( v80 >= v123 )
          goto LABEL_140;
      }
      else if ( v79 >= (unsigned __int64)v144 )
      {
LABEL_140:
        v21 = *((_QWORD *)&v119 + 1);
        v142 = i;
        v141 = v11;
        v148 = 1;
        sub_1403EC260((unsigned __int64 *)&v109, *((__int64 *)&v119 + 1), *((_QWORD *)&v119 + 1) + 32 * v78);
        v143 = v11;
        *((_QWORD *)&v144 + 1) = i;
        v93 = *((_QWORD *)&v109 + 1);
        v94 = v110;
        v145 = 1;
        sub_140D1EE10((unsigned int)v130, DWORD2(v109), v110, (unsigned int)&unk_141A55FEA, 3);
        *(_QWORD *)&v114 = *(_QWORD *)&v130[16];
        v113 = *(_OWORD *)v130;
        if ( *((_QWORD *)&v144 + 1) == -1 )
        {
          *(_QWORD *)&v137 = 0;
          *((_QWORD *)&v137 + 1) = 1;
          *(_QWORD *)&v138 = 0;
        }
        else
        {
          *(_QWORD *)&v130[8] = v143;
          *(_QWORD *)&v130[16] = v13;
          *(_QWORD *)v130 = *((_QWORD *)&v144 + 1);
          *(_QWORD *)&v137 = v130;
          *((_QWORD *)&v137 + 1) = sub_1400015F0;
          sub_1416ABFD0(v136, &unk_141A57691, &v137);
          if ( *(_QWORD *)v130 )
            sub_140001660(*(_QWORD *)&v130[8], *(_QWORD *)v130, 1);
          v137 = *(_OWORD *)v136;
          *(_QWORD *)&v138 = *(_QWORD *)&v136[16];
        }
        *(_QWORD *)v130 = &v113;
        *(_QWORD *)&v130[8] = sub_1400015F0;
        *(_QWORD *)&v130[16] = &v137;
        *(_QWORD *)&v130[24] = sub_1400015F0;
        sub_1416ABFD0(v136, &unk_141A5B5F8, v130);
        if ( (_QWORD)v137 )
          sub_140001660(*((_QWORD *)&v137 + 1), v137, 1);
        if ( (_QWORD)v113 )
          sub_140001660(*((_QWORD *)&v113 + 1), v113, 1);
        if ( v94 )
        {
          v95 = (_QWORD *)(v93 + 8);
          do
          {
            v96 = *(v95 - 1);
            if ( v96 )
              sub_140001660(*v95, v96, 1);
            v95 += 3;
            --v94;
          }
          while ( v94 );
        }
        if ( (_QWORD)v109 )
          sub_140001660(v93, 24 * v109, 8);
        result = *(_OWORD **)&v136[16];
        v97 = v135;
        *(_QWORD *)(v135 + 24) = *(_QWORD *)&v136[16];
        *(_OWORD *)(v97 + 8) = *(_OWORD *)v136;
        *(_QWORD *)v97 = 10;
        v98 = (_QWORD *)(v21 + 16);
        do
        {
          v99 = *(v98 - 1);
          if ( v99 )
            result = (_OWORD *)sub_140001660(*v98, v99, 1);
          v98 += 4;
          --v78;
        }
        while ( v78 );
        v27 = v119;
        if ( !(_QWORD)v119 )
          return result;
        goto LABEL_161;
      }
      v142 = i;
      v141 = v11;
      v148 = 1;
      sub_140EE9750(v136, *((_QWORD *)&v119 + 1), v78, a5);
      if ( *(_QWORD *)v136 == -1 )
      {
        v81 = __PAIR128__(v11, -1);
        if ( (unsigned __int64)(i - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_124;
      }
      else
      {
        v143 = v11;
        *((_QWORD *)&v144 + 1) = i;
        *(_QWORD *)&v130[88] = *(_QWORD *)&v136[88];
        *(_OWORD *)&v130[72] = *(_OWORD *)&v136[72];
        *(_OWORD *)&v130[56] = *(_OWORD *)&v136[56];
        *(_OWORD *)&v130[40] = *(_OWORD *)&v136[40];
        *(_OWORD *)&v130[24] = *(_OWORD *)&v136[24];
        *(_OWORD *)&v130[8] = *(_OWORD *)&v136[8];
        *(_QWORD *)v130 = *(_QWORD *)v136;
        *(_QWORD *)&v137 = 0;
        *((_QWORD *)&v137 + 1) = 1;
        *(_QWORD *)&v138 = 0;
        *(_QWORD *)&v136[16] = 1610612768;
        *(_QWORD *)v136 = &v137;
        *(_QWORD *)&v136[8] = &off_141A65938;
        if ( (unsigned __int8)sub_14104A7D0(v130, v136) )
          sub_141939040(
            (unsigned int)aADisplayImplem_10,
            55,
            (unsigned int)&v146,
            (unsigned int)&unk_141A58C98,
            (__int64)&off_141A659F0);
        v81 = v137;
        v13 = v138;
        i = *((_QWORD *)&v144 + 1);
        v142 = *((_QWORD *)&v144 + 1);
        v11 = v143;
        v141 = v143;
        v148 = 1;
        sub_140E97700(v130);
        if ( (unsigned __int64)(i - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_124:
          sub_140001660(v11, i, 1);
      }
      v141 = v81 >> 64;
      v142 = v81;
      v148 = 1;
      sub_141696800(0, 300000000);
      v82 = *((_QWORD *)&v119 + 1);
      v83 = v120;
      if ( (_QWORD)v120 )
      {
        v84 = (_QWORD *)(*((_QWORD *)&v119 + 1) + 16LL);
        do
        {
          v85 = *(v84 - 1);
          if ( v85 )
            sub_140001660(*v84, v85, 1);
          v84 += 4;
          --v83;
        }
        while ( v83 );
      }
      if ( (_QWORD)v119 )
        sub_140001660(v82, 32 * v119, 8);
      v11 = v81 >> 64;
    }
  }
  WakeByAddressSingle(&byte_1421E0530);
  if ( !(_BYTE)v143 )
    goto LABEL_42;
LABEL_25:
  sub_140EED040(v130);
  result = *(_OWORD **)v130;
  *(_OWORD *)v136 = *(_OWORD *)&v130[8];
  *(_QWORD *)&v136[16] = *(_QWORD *)&v130[24];
  if ( *(_QWORD *)v130 != -1 )
  {
    v17 = *(_OWORD *)&v130[32];
    v18 = *(_OWORD *)&v130[48];
    v19 = *(_OWORD *)&v130[64];
    v20 = v135;
    *(_OWORD *)(v135 + 80) = *(_OWORD *)&v130[80];
    *(_OWORD *)(v20 + 64) = v19;
    *(_OWORD *)(v20 + 48) = v18;
    *(_OWORD *)(v20 + 32) = v17;
    *(_QWORD *)(v20 + 24) = *(_QWORD *)&v136[16];
    *(_OWORD *)(v20 + 8) = *(_OWORD *)v136;
    *(_QWORD *)v20 = result;
    return result;
  }
  v137 = *(_OWORD *)v136;
  v13 = *(_QWORD *)&v136[16];
  *(_QWORD *)&v138 = *(_QWORD *)&v136[16];
  v21 = *(_QWORD *)&v136[8];
  sub_1403EBCF0((unsigned __int64 *)v136, *(__int64 *)&v136[8], *(_QWORD *)&v136[8] + 32LL * *(_QWORD *)&v136[16]);
  sub_140EECB20(v130, v136);
  if ( *(_DWORD *)v130 == -1 )
  {
    if ( v13 )
    {
      v28 = (_QWORD *)(v21 + 8);
      do
      {
        v29 = *(v28 - 1);
        if ( v29 )
          sub_140001660(*v28, v29, 1);
        v28 += 4;
        --v13;
      }
      while ( v13 );
    }
    if ( (_QWORD)v137 )
      sub_140001660(v21, 32 * v137, 8);
    goto LABEL_42;
  }
  result = (_OWORD *)v135;
  *(_OWORD *)(v135 + 80) = *(_OWORD *)&v130[80];
  result[4] = *(_OWORD *)&v130[64];
  v22 = *(_OWORD *)v130;
  v23 = *(_OWORD *)&v130[16];
  v24 = *(_OWORD *)&v130[32];
  result[3] = *(_OWORD *)&v130[48];
  result[2] = v24;
  result[1] = v23;
  *result = v22;
  if ( v13 )
  {
    v25 = (_QWORD *)(v21 + 8);
    do
    {
      v26 = *(v25 - 1);
      if ( v26 )
        result = (_OWORD *)sub_140001660(*v25, v26, 1);
      v25 += 4;
      --v13;
    }
    while ( v13 );
  }
  v27 = v137;
  if ( (_QWORD)v137 )
  {
LABEL_161:
    v92 = 32 * v27;
    v90 = 8;
    v91 = v21;
    return (_OWORD *)sub_140001660(v91, v92, v90);
  }
  return result;
}
