// module: codexmate_lib/core/voice/runtime
// addr: 0x14088e070
// name: sub_14088E070
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14088E070(char **a1, _QWORD *a2)
{
  unsigned __int8 *v2; // r13
  unsigned __int8 *v3; // rax
  int v4; // ecx
  unsigned __int8 *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r9
  __int8 *v8; // rbx
  char result; // al
  unsigned int v10; // ecx
  char v11; // al
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rdx
  char v15; // cl
  __int64 *v16; // r14
  __int64 v17; // rcx
  _BYTE *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm5
  __int128 v24; // xmm6
  _OWORD *v25; // rax
  _BYTE *v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // r12
  unsigned __int64 v32; // r15
  __int64 v33; // r12
  unsigned __int8 *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 (__fastcall *v37)(); // r15
  __int64 v38; // r12
  __int64 v39; // r14
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rcx
  _DWORD *v43; // rax
  __int64 v44; // rcx
  void *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // r12
  __int64 v51; // r14
  __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // r12
  __int128 v55; // xmm0
  unsigned __int8 *v56; // rcx
  _BYTE *v57; // rcx
  unsigned __int8 *v58; // rcx
  unsigned __int8 *v59; // rdx
  __int64 v60; // r14
  __int128 v61; // xmm1
  _OWORD *v62; // rdx
  __int64 v63; // r14
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  __int64 v71; // rdx
  unsigned __int64 v72; // rax
  bool v73; // zf
  __int64 v74; // rax
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  __int64 v81; // rdx
  unsigned __int64 v82; // rax
  bool v83; // zf
  __int64 v84; // rax
  __int64 v85; // r12
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  char v89; // al
  _BYTE *v90; // rax
  int v91; // ecx
  __int8 v92; // r12
  __int8 v93; // r13
  _BYTE *v94; // r12
  __int8 v95; // cl
  __int8 *v96; // r15
  __int64 v97; // rbx
  __int64 v98; // r12
  __int64 v99; // rdi
  __int64 v100; // r13
  __int64 v101; // r14
  __int64 *v102; // rax
  __int64 *v103; // rcx
  __int128 v104; // [rsp+50h] [rbp-30h]
  __int128 v105; // [rsp+60h] [rbp-20h]
  __int128 v106; // [rsp+70h] [rbp-10h]
  __int128 v107; // [rsp+80h] [rbp+0h]
  __int128 v108; // [rsp+90h] [rbp+10h]
  __int128 v109; // [rsp+A0h] [rbp+20h]
  __int128 v110; // [rsp+C0h] [rbp+40h]
  _QWORD v111[2]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v112; // [rsp+E0h] [rbp+60h]
  __int128 v113; // [rsp+F0h] [rbp+70h]
  _QWORD v114[3]; // [rsp+108h] [rbp+88h] BYREF
  _BYTE *v115; // [rsp+120h] [rbp+A0h]
  __int64 *v116; // [rsp+128h] [rbp+A8h]
  _OWORD *v117; // [rsp+130h] [rbp+B0h]
  unsigned __int8 *v118; // [rsp+138h] [rbp+B8h]
  __m256i v119; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v120; // [rsp+160h] [rbp+E0h]
  __int128 v121; // [rsp+170h] [rbp+F0h]
  __int128 v122; // [rsp+180h] [rbp+100h]
  __int128 v123; // [rsp+190h] [rbp+110h]
  __int128 v124; // [rsp+1A0h] [rbp+120h]
  __int128 v125; // [rsp+1B0h] [rbp+130h]
  __int128 v126; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v127; // [rsp+1D0h] [rbp+150h]
  unsigned __int8 *v128; // [rsp+1D8h] [rbp+158h]
  __m256i v129; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v130; // [rsp+200h] [rbp+180h]
  __int128 v131; // [rsp+210h] [rbp+190h]
  __int128 v132; // [rsp+220h] [rbp+1A0h]
  __int128 v133; // [rsp+230h] [rbp+1B0h]
  __int128 v134; // [rsp+240h] [rbp+1C0h]
  __m256i v135; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v136; // [rsp+290h] [rbp+210h]
  __int128 v137; // [rsp+2A0h] [rbp+220h]
  __int128 v138; // [rsp+2B0h] [rbp+230h]
  __int128 v139; // [rsp+2C0h] [rbp+240h]
  __int128 v140; // [rsp+2D0h] [rbp+250h]
  __int128 v141; // [rsp+2E0h] [rbp+260h]
  char *v142; // [rsp+2F8h] [rbp+278h]
  __int64 *v143; // [rsp+300h] [rbp+280h]
  _BYTE *v144; // [rsp+308h] [rbp+288h]
  __int64 v145; // [rsp+310h] [rbp+290h] BYREF
  __int64 (__fastcall *v146)(); // [rsp+318h] [rbp+298h]
  __int64 v147; // [rsp+320h] [rbp+2A0h]
  __int64 *v148; // [rsp+328h] [rbp+2A8h]
  unsigned __int8 *v149; // [rsp+330h] [rbp+2B0h]
  _OWORD *v150; // [rsp+338h] [rbp+2B8h]
  char v151; // [rsp+347h] [rbp+2C7h] BYREF
  _QWORD *v152; // [rsp+348h] [rbp+2C8h]
  __int128 v153; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v154; // [rsp+360h] [rbp+2E0h]
  __int64 *v155; // [rsp+368h] [rbp+2E8h]
  _QWORD *v156; // [rsp+370h] [rbp+2F0h]
  __int128 v157; // [rsp+378h] [rbp+2F8h]
  char v158; // [rsp+38Eh] [rbp+30Eh]
  char v159; // [rsp+38Fh] [rbp+30Fh]
  unsigned __int8 *v160; // [rsp+390h] [rbp+310h]
  __int64 v161; // [rsp+398h] [rbp+318h]
  __m256i v162; // 0:^30.32

  v161 = -2;
  v156 = a2;
  v142 = *a1;
  v2 = (unsigned __int8 *)a1[1];
  v3 = (unsigned __int8 *)sub_1412F09C0();
  v4 = v3[72];
  if ( v4 == 1 )
  {
LABEL_4:
    if ( !(unsigned __int8)sub_1412F0A20(v3[68], v3[69]) )
    {
      sub_1412F1400(v156);
      return -1;
    }
    goto LABEL_5;
  }
  if ( v4 != 2 )
  {
    v5 = v3;
    sub_14148BBF0(v3, sub_140B82FF0);
    v3 = v5;
    v5[72] = 1;
    goto LABEL_4;
  }
LABEL_5:
  v6 = (unsigned int)sub_1412F0180(2);
  v150 = v2 + 16;
  v115 = v2 + 24;
  v128 = v2 + 200;
  v148 = (__int64 *)(v2 + 176);
  v8 = &v129.m256i_i8[1];
  v116 = (__int64 *)(v2 + 144);
  v117 = v2 + 152;
  v155 = (__int64 *)(v2 + 232);
  v152 = v2 + 240;
  v144 = v2 + 304;
  v118 = v2 + 312;
  v143 = (__int64 *)(v2 + 256);
  v149 = v2 + 264;
  result = 2;
  v10 = 0;
  v160 = v2;
  while ( 1 )
  {
    if ( v10 > 1 )
      return result;
    v12 = v10 + 1;
    v13 = v10 + (unsigned int)v6;
    v14 = (unsigned __int8)*v142;
    if ( (((_BYTE)v10 + (_BYTE)v6) & 1) != 0 )
    {
      if ( (v14 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (v14 & 1) == 0 )
    {
      goto LABEL_21;
    }
    if ( v10 )
      return result;
    v15 = *v142;
    v12 = 2;
    if ( (v6 & 1) == 0 )
      break;
    if ( (v15 & 1) != 0 )
      return result;
LABEL_21:
    switch ( v2[8] )
    {
      case 0u:
        goto LABEL_28;
      case 1u:
        sub_1416C3400(&off_141794EB0, v14, v13, v7);
      case 2u:
        sub_1416C3420(&off_141794EB0, v14, v13, v7);
      case 3u:
        v17 = *v156;
        switch ( v2[25] )
        {
          case 0u:
            goto LABEL_29;
          case 1u:
            sub_1416C3400(&off_141795DF8, v14, v13, v7);
          case 2u:
            sub_1416C3420(&off_141795DF8, v14, v13, v7);
          case 3u:
            v18 = *(_BYTE **)v150;
            if ( !**(_BYTE **)v150 )
              goto LABEL_30;
            v2[25] = 1;
            if ( (unsigned __int8)sub_14025D060(*(_QWORD *)v2) )
            {
              v160[8] = 1;
              *v142 |= 1u;
              return 0;
            }
            sub_1412F1530(&v129, 0, 50000000, &off_141794EC8);
            v124 = v134;
            v19 = v133;
            v123 = v133;
            v20 = v132;
            v122 = v132;
            v21 = *(_OWORD *)v129.m256i_i8;
            v22 = *(_OWORD *)&v129.m256i_u64[2];
            v23 = v130;
            v24 = v131;
            v121 = v131;
            v120 = v130;
            v119 = v129;
            v25 = v150;
            v150[6] = v134;
            v25[5] = v19;
            v25[4] = v20;
            v25[3] = v24;
            v25[2] = v23;
            v25[1] = v22;
            *v25 = v21;
LABEL_26:
            if ( (unsigned __int8)sub_1412F1D10(v150, v156) )
            {
              v11 = 4;
              v2 = v160;
            }
            else
            {
              sub_1405E6D10(v150);
              v2 = v160;
LABEL_28:
              v2[25] = 0;
              v17 = *v156;
LABEL_29:
              v26 = v115;
              *v115 = 0;
              *(_QWORD *)v150 = v26;
              v18 = v26;
LABEL_30:
              *v18 = 1;
              sub_1412F7930(v17, &off_141795230);
              v2 = v160;
              v160[25] = 3;
              v11 = 3;
            }
            v2[8] = v11;
            break;
        }
        break;
      case 4u:
        goto LABEL_26;
    }
LABEL_8:
    result = -1;
    v10 = v12;
  }
  if ( (v15 & 2) != 0 )
    return result;
LABEL_17:
  switch ( v2[168] )
  {
    case 0u:
      break;
    case 1u:
      sub_1416C3400(&off_141794EE0, v14, v13, v7);
    case 2u:
      sub_1416C3420(&off_141794EE0, v14, v13, v7);
    case 3u:
      switch ( v2[192] )
      {
        case 0u:
          v16 = (__int64 *)*v148;
          goto LABEL_126;
        case 1u:
          sub_1416C3400(&off_141795490, v14, v13, v7);
        case 2u:
          sub_1416C3420(&off_141795490, v14, v13, v7);
        case 3u:
          v16 = *((__int64 **)v2 + 23);
          goto LABEL_127;
      }
    case 4u:
      switch ( v2[225] )
      {
        case 0u:
          v27 = *((_QWORD *)v2 + 27);
          v28 = *((_QWORD *)v2 + 25);
          v29 = *((_QWORD *)v2 + 26);
          goto LABEL_38;
        case 1u:
          sub_1416C3400(&off_1417959D8, v14, v13, v7);
        case 2u:
          sub_1416C3420(&off_1417959D8, v14, v13, v7);
        case 3u:
          v30 = *((_QWORD *)v2 + 32);
          v31 = *((_QWORD *)v2 + 37);
          if ( v30 == -1 )
            goto LABEL_70;
          goto LABEL_65;
        case 4u:
          v32 = *((_QWORD *)v2 + 29);
          v33 = *((_QWORD *)v2 + 34);
          if ( v32 == -1 )
            goto LABEL_79;
          goto LABEL_74;
      }
  }
  while ( 2 )
  {
    v16 = *((__int64 **)v2 + 16);
    *((_QWORD *)v2 + 22) = v16;
    v2[192] = 0;
LABEL_126:
    *((_QWORD *)v2 + 23) = v16;
LABEL_127:
    v90 = (_BYTE *)sub_1412F09C0();
    v91 = (unsigned __int8)v90[72];
    if ( v91 == 1 )
    {
LABEL_130:
      v92 = v90[68];
      v93 = v90[69];
      v95 = v93;
      if ( v92 == 1 )
      {
        if ( !v93 )
        {
          sub_1412F1400(v156);
          v129.m256i_i8[2] = 0;
          v129.m256i_i16[0] = 0;
          sub_1412F1CA0(v8);
          v2 = v160;
          v160[192] = 3;
          v2[168] = 3;
          goto LABEL_8;
        }
        v95 = v93 - 1;
      }
      v90[69] = v95;
      v129.m256i_i8[2] = 0;
      v129.m256i_i16[0] = 0;
      sub_1412F1CA0(v8);
    }
    else
    {
      v92 = 0;
      v93 = 0;
      if ( v91 != 2 )
      {
        v94 = v90;
        sub_14148BBF0(v90, sub_140B82FF0);
        v90 = v94;
        v94[72] = 1;
        goto LABEL_130;
      }
    }
    v96 = v8;
    v97 = v6;
    v119.m256i_i8[0] = v92;
    v119.m256i_i8[1] = v93;
    v98 = *v16;
    v99 = *v16 + 416;
    v100 = *v16 + 128;
    sub_1406AE4C0(&v129, v99, v100);
    v101 = v129.m256i_i64[0];
    if ( v129.m256i_i64[0] == -1 )
    {
      if ( !(unsigned __int8)sub_1412E7D50(v98 + 448) )
        sub_1416C32A0(aAssertionFaile_20, 48, &off_141795C48);
      goto LABEL_145;
    }
    *(_QWORD *)&v157 = v129.m256i_i64[0];
    if ( v129.m256i_i64[0] != -2 )
    {
      *((_QWORD *)&v157 + 1) = v129.m256i_i64[1];
      sub_1412E7CE0((volatile void *)(v98 + 448));
      v119.m256i_i8[0] = 0;
      v113 = *(_OWORD *)(v96 + 7);
      v101 = v157;
      goto LABEL_146;
    }
    sub_1412E6F50(v98 + 256, *v156);
    sub_1406AE4C0(&v129, v99, v100);
    v101 = v129.m256i_i64[0];
    if ( v129.m256i_i64[0] == -1 )
    {
      if ( !(unsigned __int8)sub_1412E7D50(v98 + 448) )
        sub_1416C32A0(aAssertionFaile_20, 48, &off_141795C30);
LABEL_145:
      v119.m256i_i8[0] = 0;
      goto LABEL_146;
    }
    if ( v129.m256i_i64[0] != -2 )
    {
      v157 = *(_OWORD *)v129.m256i_i8;
      sub_1412E7CE0((volatile void *)(v98 + 448));
      v6 = v97;
      v119.m256i_i8[0] = 0;
      v8 = v96;
      v113 = *(_OWORD *)(v96 + 7);
      v101 = v157;
      goto LABEL_147;
    }
    v101 = -2;
    if ( *(_BYTE *)(v98 + 440) != 1 )
    {
LABEL_146:
      v6 = v97;
      v8 = v96;
      goto LABEL_147;
    }
    v6 = v97;
    v8 = v96;
    if ( (unsigned __int8)sub_1412E7D50(v98 + 448) )
    {
      v119.m256i_i8[0] = 0;
      v101 = -1;
    }
LABEL_147:
    sub_1412F1CA0(&v119);
    v2 = v160;
    v160[192] = 2 * (v101 == -2) + 1;
    v89 = 3;
    if ( v101 == -2 )
      goto LABEL_121;
    v102 = v116;
    *v116 = v101;
    *v117 = v113;
    if ( v101 == -1 )
      goto LABEL_164;
    v103 = v148;
    v148[2] = v102[2];
    *v103 = *v102;
    v103[1] = v102[1];
    v27 = *((_QWORD *)v2 + 17);
    v28 = *((_QWORD *)v2 + 23);
    v29 = *((_QWORD *)v2 + 24);
    *((_QWORD *)v2 + 25) = v28;
    *((_QWORD *)v2 + 26) = v29;
    *((_QWORD *)v2 + 27) = v27;
    v2[225] = 0;
LABEL_38:
    v2[224] = 0;
    sub_140AEC2A0(v155, v28, v29);
    v34 = v160;
    v160[224] = 1;
    if ( *(_BYTE *)(v27 + 96) == 1 )
    {
      *(_QWORD *)&v126 = 0;
      v127 = 0;
      nullsub_1(v34);
      v35 = (_QWORD *)sub_140001650(8, 1);
      if ( !v35 )
        sub_1416C2D4B(1, 8);
      *v35 = 0x64695F746E657665LL;
      v114[0] = 8;
      *(_QWORD *)&v157 = v35;
      v114[1] = v35;
      v114[2] = 8;
      v111[0] = aAudio_0;
      v111[1] = 5;
      sub_140AECBC0(&v153);
      v129.m256i_i64[0] = (__int64)v111;
      v129.m256i_i64[1] = (__int64)sub_14041F680;
      v129.m256i_i64[2] = (__int64)&v153;
      v129.m256i_i64[3] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v145, &unk_1417B0AAF, &v129);
      *(_QWORD *)&v157 = v27;
      if ( (_QWORD)v153 )
        sub_140001660(*((_QWORD *)&v153 + 1), v153, 1);
      v37 = v146;
      v38 = v147;
      *((_QWORD *)&v157 + 1) = v146;
      if ( v147 < 0 )
      {
        v40 = 0;
LABEL_155:
        v159 = 1;
        sub_1416C2D4B(v40, v38);
      }
      v39 = 1;
      if ( v147 )
      {
        nullsub_1(v36);
        v40 = 1;
        v41 = sub_140001650(v38, 1);
        if ( !v41 )
          goto LABEL_155;
        v39 = v41;
        sub_141684120(v41, v37, v38);
      }
      v135.m256i_i8[0] = 3;
      v135.m256i_i64[1] = v38;
      v135.m256i_i64[2] = v39;
      v135.m256i_i64[3] = v38;
      v159 = 0;
      sub_140307860(&v129, &v126, v114, &v135);
      if ( v129.m256i_i8[0] != -1 )
        sub_1400104F0(&v129);
      if ( v145 )
        sub_140001660(*((_QWORD *)&v157 + 1), v145, 1);
      nullsub_1(v42);
      v43 = (_DWORD *)sub_140001650(4, 1);
      if ( !v43 )
        sub_1416C2D4B(1, 4);
      *v43 = 1701869940;
      *(_QWORD *)&v153 = 4;
      *((_QWORD *)&v153 + 1) = v43;
      v154 = 4;
      nullsub_1(v44);
      v45 = (void *)sub_140001650(25, 1);
      *((_QWORD *)&v157 + 1) = v45;
      if ( !v45 )
        sub_1416C2D4B(1, 25);
      qmemcpy(v45, "input_audio_buffer.append", 25);
      v129.m256i_i8[0] = 3;
      v129.m256i_i64[1] = 25;
      v129.m256i_i64[2] = (__int64)v45;
      v129.m256i_i64[3] = 25;
      sub_140307860(&v135, &v126, &v153, &v129);
      if ( v135.m256i_i8[0] != -1 )
        sub_1400104F0(&v135);
      nullsub_1(v46);
      v47 = sub_140001650(5, 1);
      if ( !v47 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v47 + 4) = 111;
      *(_DWORD *)v47 = 1768191329;
      v145 = 5;
      *((_QWORD *)&v157 + 1) = v47;
      v146 = (__int64 (__fastcall *)())v47;
      v147 = 5;
      sub_140443D50(&v153, &unk_14179588E, *((_QWORD *)v160 + 30), *((_QWORD *)v160 + 31));
      v49 = *((_QWORD *)&v153 + 1);
      v50 = v154;
      *((_QWORD *)&v157 + 1) = *((_QWORD *)&v153 + 1);
      if ( v154 < 0 )
      {
        v52 = 0;
LABEL_157:
        v158 = 1;
        sub_1416C2D4B(v52, v50);
      }
      v51 = 1;
      if ( v154 )
      {
        nullsub_1(v48);
        v52 = 1;
        v53 = sub_140001650(v50, 1);
        if ( !v53 )
          goto LABEL_157;
        v51 = v53;
        sub_141684120(v53, v49, v50);
      }
      v129.m256i_i8[0] = 3;
      v129.m256i_i64[1] = v50;
      v129.m256i_i64[2] = v51;
      v129.m256i_i64[3] = v50;
      v158 = 0;
      sub_140307860(&v135, &v126, &v145, &v129);
      v54 = v157;
      if ( v135.m256i_i8[0] != -1 )
        sub_1400104F0(&v135);
      if ( (_QWORD)v153 )
        sub_140001660(*((_QWORD *)&v157 + 1), v153, 1);
      v55 = v126;
      v56 = v118;
      *((_QWORD *)v118 + 2) = v127;
      *(_OWORD *)v56 = v55;
      v57 = v144;
      *v144 = 5;
      v135.m256i_i64[0] = 0;
      *(_OWORD *)&v135.m256i_u64[1] = 1u;
      v129.m256i_i64[2] = 1610612768;
      v129.m256i_i64[0] = (__int64)&v135;
      v129.m256i_i64[1] = (__int64)&off_141799500;
      if ( (unsigned __int8)sub_14142EA10(v57, &v129) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v151,
          (unsigned int)&unk_141796270,
          (__int64)&off_1417995B8);
      v31 = v54 + 24;
      v154 = v135.m256i_i64[2];
      v153 = *(_OWORD *)v135.m256i_i8;
      v58 = v160;
      v30 = 0x8000000000000000uLL;
      *((_QWORD *)v160 + 32) = 0x8000000000000000uLL;
      v59 = v149;
      *((_QWORD *)v149 + 2) = v154;
      *(_OWORD *)v59 = v153;
      *((_QWORD *)v58 + 37) = v31;
LABEL_65:
      *((_QWORD *)&v157 + 1) = v30;
      sub_1406B7100(&v129, v31, v156);
      *(_QWORD *)&v157 = v31;
      v60 = v129.m256i_i64[0];
      if ( v129.m256i_i64[0] != -2 )
      {
        if ( v129.m256i_i32[0] == -1 )
        {
          *v143 = -1;
          if ( *(_QWORD *)v31 != -1 )
            sub_14052DEF0(v157);
          v31 = v157;
          *(_QWORD *)v157 = *((_QWORD *)&v157 + 1);
          v61 = *((_OWORD *)v149 + 1);
          *(_OWORD *)(v31 + 8) = *(_OWORD *)v149;
          *(_OWORD *)(v31 + 24) = v61;
LABEL_70:
          sub_1406B6DC0(&v129, v31, v156);
          v60 = v129.m256i_i64[0];
          v2 = v160;
          if ( v129.m256i_i64[0] != -2 )
          {
            if ( v129.m256i_i32[0] == -1 )
            {
              v60 = -1;
              goto LABEL_97;
            }
            v141 = *(_OWORD *)(v8 + 119);
            v140 = *(_OWORD *)(v8 + 103);
            v139 = *(_OWORD *)(v8 + 87);
            v138 = *(_OWORD *)(v8 + 71);
            v78 = *(_OWORD *)(v8 + 7);
            v79 = *(_OWORD *)(v8 + 23);
            v80 = *(_OWORD *)(v8 + 39);
            v137 = *(_OWORD *)(v8 + 55);
            v136 = v80;
            *(_OWORD *)&v135.m256i_u64[2] = v79;
            *(_OWORD *)v135.m256i_i8 = v78;
            if ( v129.m256i_i32[0] != -2 )
            {
LABEL_97:
              v109 = v141;
              v108 = v140;
              v107 = v139;
              v106 = v138;
              v105 = v137;
              v104 = v136;
              v162 = v135;
              v81 = *v143;
              if ( *v143 != -1 )
              {
                v82 = v81 ^ 0x8000000000000000uLL;
                if ( v81 >= 0 )
                  v82 = 5;
                v83 = v82 == 4;
                if ( v82 >= 4 )
                {
                  v84 = 256;
                  if ( !v83 )
                    goto LABEL_110;
                  v81 = *(_QWORD *)v149;
                  v84 = 264;
                  if ( *(_QWORD *)v149 <= 0xFFFFFFFFFFFFFFFDuLL )
                    goto LABEL_110;
                }
                else
                {
                  v81 = *(_QWORD *)v149;
                  v84 = 264;
LABEL_110:
                  if ( v81 )
                    sub_140001660(*(_QWORD *)&v2[v84 + 8], v81, 1);
                }
              }
              v85 = -1;
              if ( (_DWORD)v60 != -1 )
              {
                v129.m256i_i64[0] = v60;
                *(_OWORD *)(v8 + 119) = v109;
                *(_OWORD *)(v8 + 103) = v108;
                *(_OWORD *)(v8 + 87) = v107;
                *(_OWORD *)(v8 + 71) = v106;
                *(_OWORD *)(v8 + 55) = v105;
                *(_OWORD *)(v8 + 39) = v104;
                *(__m256i *)(v8 + 7) = v162;
                v145 = (__int64)&v129;
                v146 = sub_140F8DAB0;
                sub_14149C0F0(&v135, &unk_141795120, &v145);
                sub_1407D8CA0(&v129);
                v85 = v135.m256i_i64[0];
                v112 = *(_OWORD *)&v135.m256i_u64[1];
              }
              sub_1400104F0(v144);
LABEL_115:
              v2 = v160;
              goto LABEL_116;
            }
LABEL_95:
            v2[225] = 3;
LABEL_120:
            v89 = 4;
LABEL_121:
            v2[168] = v89;
            goto LABEL_8;
          }
LABEL_94:
          if ( (_DWORD)v60 == -2 )
            goto LABEL_95;
          goto LABEL_97;
        }
        v141 = *(_OWORD *)(v8 + 119);
        v140 = *(_OWORD *)(v8 + 103);
        v139 = *(_OWORD *)(v8 + 87);
        v138 = *(_OWORD *)(v8 + 71);
        v75 = *(_OWORD *)(v8 + 7);
        v76 = *(_OWORD *)(v8 + 23);
        v77 = *(_OWORD *)(v8 + 39);
        v137 = *(_OWORD *)(v8 + 55);
        v136 = v77;
        *(_OWORD *)&v135.m256i_u64[2] = v76;
        *(_OWORD *)v135.m256i_i8 = v75;
      }
      v2 = v160;
      goto LABEL_94;
    }
    v34[224] = 0;
    v154 = v155[2];
    v153 = *(_OWORD *)v155;
    v33 = v27 + 24;
    v32 = 0x8000000000000001uLL;
    *((_QWORD *)v34 + 29) = 0x8000000000000001uLL;
    v62 = v152;
    v152[2] = v154;
    *v62 = v153;
    *((_QWORD *)v34 + 34) = v33;
LABEL_74:
    sub_1406B7100(&v129, v33, v156);
    v63 = v129.m256i_i64[0];
    if ( v129.m256i_i64[0] == -2 )
      goto LABEL_86;
    if ( v129.m256i_i32[0] != -1 )
    {
      v141 = *(_OWORD *)(v8 + 119);
      v140 = *(_OWORD *)(v8 + 103);
      v139 = *(_OWORD *)(v8 + 87);
      v138 = *(_OWORD *)(v8 + 71);
      v68 = *(_OWORD *)(v8 + 7);
      v69 = *(_OWORD *)(v8 + 23);
      v70 = *(_OWORD *)(v8 + 39);
      v137 = *(_OWORD *)(v8 + 55);
      v136 = v70;
      *(_OWORD *)&v135.m256i_u64[2] = v69;
      *(_OWORD *)v135.m256i_i8 = v68;
LABEL_86:
      v2 = v160;
      if ( v129.m256i_i32[0] == -2 )
      {
LABEL_84:
        v2[225] = 4;
        goto LABEL_120;
      }
      goto LABEL_87;
    }
    *((_QWORD *)&v157 + 1) = v32;
    *v155 = -1;
    v73 = *(_QWORD *)v33 == -1;
    *(_QWORD *)&v157 = v33;
    if ( !v73 )
      sub_14052DEF0(v157);
    v33 = v157;
    *(_QWORD *)v157 = *((_QWORD *)&v157 + 1);
    v64 = *((_OWORD *)v152 + 1);
    *(_OWORD *)(v33 + 8) = *(_OWORD *)v152;
    *(_OWORD *)(v33 + 24) = v64;
LABEL_79:
    sub_1406B6DC0(&v129, v33, v156);
    v63 = v129.m256i_i64[0];
    v2 = v160;
    if ( v129.m256i_i64[0] != -2 )
    {
      if ( v129.m256i_i32[0] == -1 )
      {
        v63 = -1;
        goto LABEL_87;
      }
      v141 = *(_OWORD *)(v8 + 119);
      v140 = *(_OWORD *)(v8 + 103);
      v139 = *(_OWORD *)(v8 + 87);
      v138 = *(_OWORD *)(v8 + 71);
      v65 = *(_OWORD *)(v8 + 7);
      v66 = *(_OWORD *)(v8 + 23);
      v67 = *(_OWORD *)(v8 + 39);
      v137 = *(_OWORD *)(v8 + 55);
      v136 = v67;
      *(_OWORD *)&v135.m256i_u64[2] = v66;
      *(_OWORD *)v135.m256i_i8 = v65;
    }
    if ( v129.m256i_i32[0] == -2 )
      goto LABEL_84;
LABEL_87:
    v125 = v141;
    v124 = v140;
    v123 = v139;
    v122 = v138;
    v121 = v137;
    v120 = v136;
    v119 = v135;
    v71 = *v155;
    if ( *v155 != -1 )
    {
      v72 = v71 ^ 0x8000000000000000uLL;
      if ( v71 >= 0 )
        v72 = 5;
      v73 = v72 == 4;
      if ( v72 >= 4 )
      {
        v74 = 232;
        if ( !v73 )
          goto LABEL_104;
        v71 = *v152;
        v74 = 240;
        if ( *v152 <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_104;
      }
      else
      {
        v71 = *v152;
        v74 = 240;
LABEL_104:
        if ( v71 )
          sub_140001660(*(_QWORD *)&v2[v74 + 8], v71, 1);
      }
    }
    v85 = -1;
    if ( (_DWORD)v63 != -1 )
    {
      v129.m256i_i64[0] = v63;
      *(_OWORD *)(v8 + 119) = v125;
      *(_OWORD *)(v8 + 103) = v124;
      *(_OWORD *)(v8 + 87) = v123;
      *(_OWORD *)(v8 + 71) = v122;
      v86 = *(_OWORD *)v119.m256i_i8;
      v87 = *(_OWORD *)&v119.m256i_u64[2];
      v88 = v120;
      *(_OWORD *)(v8 + 55) = v121;
      *(_OWORD *)(v8 + 39) = v88;
      *(_OWORD *)(v8 + 23) = v87;
      *(_OWORD *)(v8 + 7) = v86;
      v145 = (__int64)&v129;
      v146 = sub_140F8DAB0;
      sub_14149C0F0(&v135, &unk_141795141, &v145);
      sub_1407D8CA0(&v129);
      v85 = v135.m256i_i64[0];
      v112 = *(_OWORD *)&v135.m256i_u64[1];
      goto LABEL_115;
    }
LABEL_116:
    if ( v2[224] && *v155 )
      sub_140001660(*v152, *v155, 1);
    v2[224] = 0;
    v110 = v112;
    v2[225] = 1;
    if ( v85 == -2 )
      goto LABEL_120;
    sub_1407D8020(v128);
    if ( v85 == -1 )
    {
      v2 = v160;
      if ( *v148 )
        sub_140001660(*((_QWORD *)v160 + 23), 2 * *v148, 2);
      continue;
    }
    break;
  }
  v119.m256i_i64[0] = v85;
  *(_OWORD *)&v119.m256i_u64[1] = v110;
  if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    v135.m256i_i64[0] = (__int64)&v119;
    v135.m256i_i64[1] = (__int64)sub_1400015F0;
    v129.m256i_i64[0] = (__int64)aCodexmateLibCo_6;
    v129.m256i_i64[1] = 35;
    v129.m256i_i64[2] = (__int64)aCodexmateLibCo_6;
    v129.m256i_i64[3] = 35;
    *(_QWORD *)&v130 = &off_141794F10;
    sub_140985BA0(&unk_141794EF8, &v135, 2, &v129);
    v85 = v119.m256i_i64[0];
  }
  v2 = v160;
  if ( v85 )
    sub_140001660(v119.m256i_i64[1], v85, 1);
  if ( *v148 )
    sub_140001660(*((_QWORD *)v2 + 23), 2 * *v148, 2);
LABEL_164:
  v2[168] = 1;
  *v142 |= 2u;
  return 1;
}