// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x1409e6290 | name sub_1409E6290
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_1409E6290(unsigned __int8 **a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v5; // r12
  unsigned __int8 *v6; // r15
  unsigned __int8 *v7; // rax
  char v8; // di
  char result; // al
  unsigned int v10; // ecx
  char v11; // al
  int v12; // r14d
  unsigned __int8 v13; // dl
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BYTE *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int128 v21; // xmm4
  __int128 v22; // xmm5
  __int128 v23; // xmm6
  _OWORD *v24; // rax
  _BYTE *v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  const __m128i *v29; // r8
  _QWORD *v30; // rbx
  _QWORD *v31; // rbx
  unsigned __int8 *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // r12
  __int64 v37; // r15
  __m128i *v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // rcx
  __m128i *v42; // rax
  __int64 v43; // rcx
  __m128i *v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  __int64 v47; // r12
  __int64 v48; // r15
  __m128i *v49; // rax
  _QWORD *v50; // rbx
  __int128 v51; // xmm0
  unsigned __int8 *v52; // rcx
  _BYTE *v53; // rcx
  unsigned __int8 *v54; // rcx
  unsigned __int8 *v55; // rdx
  __int64 v56; // r15
  __int128 v57; // xmm1
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  bool v60; // zf
  __int64 v61; // rax
  _OWORD *v62; // rdx
  __int64 v63; // r15
  __int128 v64; // xmm1
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  bool v67; // zf
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // r8
  char v74; // al
  __int64 v75; // rcx
  _QWORD *v76; // rcx
  _OWORD *v77; // rcx
  unsigned __int8 *v78; // rdi
  __int128 v79; // [rsp+50h] [rbp-30h]
  __int128 v80; // [rsp+60h] [rbp-20h]
  __int128 v81; // [rsp+70h] [rbp-10h]
  __int128 v82; // [rsp+80h] [rbp+0h]
  __int128 v83; // [rsp+90h] [rbp+10h]
  __int128 v84; // [rsp+A0h] [rbp+20h]
  __int128 v85; // [rsp+C0h] [rbp+40h]
  _QWORD v86[2]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v87; // [rsp+E0h] [rbp+60h]
  __m256i v88; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v89; // [rsp+110h] [rbp+90h]
  __int128 v90; // [rsp+120h] [rbp+A0h]
  __int128 v91; // [rsp+130h] [rbp+B0h]
  __int128 v92; // [rsp+140h] [rbp+C0h]
  __int128 v93; // [rsp+150h] [rbp+D0h]
  __int128 v94; // [rsp+160h] [rbp+E0h]
  _QWORD v95[3]; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v96; // [rsp+188h] [rbp+108h] BYREF
  __int64 v97; // [rsp+198h] [rbp+118h]
  _BYTE *v98; // [rsp+1A0h] [rbp+120h]
  _OWORD *v99; // [rsp+1A8h] [rbp+128h]
  unsigned __int8 *v100; // [rsp+1B0h] [rbp+130h]
  unsigned __int8 *v101; // [rsp+1B8h] [rbp+138h]
  __int128 v102; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v103; // [rsp+1D0h] [rbp+150h]
  unsigned __int8 *v104; // [rsp+1D8h] [rbp+158h]
  _BYTE v105[120]; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v106; // [rsp+258h] [rbp+1D8h]
  __m256i v107; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v108; // [rsp+290h] [rbp+210h]
  __int128 v109; // [rsp+2A0h] [rbp+220h]
  __int128 v110; // [rsp+2B0h] [rbp+230h]
  __int128 v111; // [rsp+2C0h] [rbp+240h]
  __int128 v112; // [rsp+2D0h] [rbp+250h]
  __int128 v113; // [rsp+2E0h] [rbp+260h]
  __int64 *v114; // [rsp+2F0h] [rbp+270h]
  _BYTE *v115; // [rsp+2F8h] [rbp+278h]
  __int64 v116; // [rsp+300h] [rbp+280h] BYREF
  const __m128i *v117; // [rsp+308h] [rbp+288h]
  __int64 v118; // [rsp+310h] [rbp+290h]
  _QWORD *v119; // [rsp+318h] [rbp+298h]
  unsigned __int8 *v120; // [rsp+320h] [rbp+2A0h]
  _OWORD *v121; // [rsp+328h] [rbp+2A8h]
  __int128 v122; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v123; // [rsp+340h] [rbp+2C0h]
  char v124; // [rsp+357h] [rbp+2D7h] BYREF
  _QWORD *v125; // [rsp+358h] [rbp+2D8h]
  __int64 *v126; // [rsp+360h] [rbp+2E0h]
  _QWORD *v127; // [rsp+368h] [rbp+2E8h]
  const __m128i *v128; // [rsp+370h] [rbp+2F0h]
  unsigned __int8 *v129; // [rsp+378h] [rbp+2F8h]
  char v130; // [rsp+386h] [rbp+306h]
  char v131; // [rsp+387h] [rbp+307h]
  __int64 v132; // [rsp+388h] [rbp+308h]
  __m256i v133; // 0:^30.32

  v132 = -2;
  v5 = *a1;
  v6 = a1[1];
  v7 = (unsigned __int8 *)sub_141512160(a1, a2, a3, a4);
  if ( v7[72] )
  {
    if ( v7[72] != 1 )
      goto LABEL_3;
    v78 = v7;
    sub_14169B890(v7, sub_140BE2F50);
    v7 = v78;
    v78[72] = 0;
  }
  if ( (unsigned __int8)sub_141515930(v7[68], v7[69]) )
  {
LABEL_3:
    v8 = sub_141500390(2);
    v121 = v6 + 16;
    v98 = v6 + 24;
    v104 = v6 + 200;
    v119 = v6 + 176;
    v99 = v6 + 144;
    v126 = (__int64 *)(v6 + 232);
    v125 = v6 + 240;
    v115 = v6 + 304;
    v100 = v6 + 312;
    v114 = (__int64 *)(v6 + 256);
    v120 = v6 + 264;
    result = 2;
    v10 = 0;
    v129 = v6;
    while ( 1 )
    {
      if ( v10 > 1 )
        return result;
      v12 = v10 + 1;
      v13 = *v5;
      if ( (((_BYTE)v10 + v8) & 1) == 0 )
        break;
      if ( (v13 & 2) != 0 )
        goto LABEL_14;
LABEL_17:
      switch ( v6[168] )
      {
        case 0u:
          goto LABEL_120;
        case 1u:
          sub_1419393E0(&off_141A25E00);
        case 2u:
          sub_141939400(&off_141A25E00);
        case 3u:
          switch ( v6[192] )
          {
            case 0u:
              v15 = *v119;
              goto LABEL_121;
            case 1u:
              sub_1419393E0(&off_141A26300);
            case 2u:
              sub_141939400(&off_141A26300);
            case 3u:
              v15 = *((_QWORD *)v6 + 23);
              goto LABEL_122;
          }
        case 4u:
          switch ( v6[225] )
          {
            case 0u:
              v26 = *((_QWORD *)v6 + 27);
              v27 = *((_QWORD *)v6 + 25);
              v28 = *((_QWORD *)v6 + 26);
              goto LABEL_38;
            case 1u:
              sub_1419393E0(&off_141A26738);
            case 2u:
              sub_141939400(&off_141A26738);
            case 3u:
              v29 = *((const __m128i **)v6 + 32);
              v30 = *((_QWORD **)v6 + 37);
              if ( v29 == (const __m128i *)-1LL )
                goto LABEL_70;
              goto LABEL_65;
            case 4u:
              v31 = *((_QWORD **)v6 + 34);
              v128 = *((const __m128i **)v6 + 29);
              if ( v128 == (const __m128i *)-1LL )
                goto LABEL_87;
              goto LABEL_82;
          }
      }
      while ( 1 )
      {
LABEL_120:
        v15 = *((_QWORD *)v6 + 16);
        *((_QWORD *)v6 + 22) = v15;
        v6[192] = 0;
LABEL_121:
        *((_QWORD *)v6 + 23) = v15;
LABEL_122:
        sub_14092A960(&v96, v15, a2);
        v75 = v96;
        v6 = v129;
        v129[192] = 2 * ((_QWORD)v96 == -2) + 1;
        v74 = 3;
        if ( v75 == -2 )
          goto LABEL_116;
        v76 = v99;
        *v99 = v96;
        v76[2] = v97;
        if ( *v76 == -1 )
          goto LABEL_135;
        v77 = v119;
        v119[2] = v97;
        *v77 = v96;
        v26 = *((_QWORD *)v6 + 17);
        v27 = *((_QWORD *)v6 + 23);
        v28 = *((_QWORD *)v6 + 24);
        *((_QWORD *)v6 + 25) = v27;
        *((_QWORD *)v6 + 26) = v28;
        *((_QWORD *)v6 + 27) = v26;
        v6[225] = 0;
LABEL_38:
        v6[224] = 0;
        sub_140DC0880(v126, v27, v28);
        v32 = v129;
        v129[224] = 1;
        if ( *(_BYTE *)(v26 + 96) == 1 )
        {
          *(_QWORD *)&v102 = 0;
          v103 = 0;
          nullsub_1(v32);
          v33 = (_QWORD *)sub_140001650(8, 1);
          if ( !v33 )
            sub_141938D2B(1, 8);
          *v33 = 0x64695F746E657665LL;
          v95[0] = 8;
          v127 = v33;
          v95[1] = v33;
          v95[2] = 8;
          v86[0] = aAudio_0;
          v86[1] = 5;
          sub_140DC11A0(&v122);
          *(_QWORD *)v105 = v86;
          *(_QWORD *)&v105[8] = sub_140186EE0;
          *(_QWORD *)&v105[16] = &v122;
          *(_QWORD *)&v105[24] = sub_1400015F0;
          sub_1416ABFD0(&v116, &unk_141A4E41A, v105);
          v127 = (_QWORD *)v26;
          if ( (_QWORD)v122 )
            sub_140001660(*((_QWORD *)&v122 + 1), v122, 1);
          v128 = v117;
          v35 = v118;
          if ( v118 < 0 )
          {
            v37 = 0;
LABEL_126:
            v131 = 1;
            sub_141938D2B(v37, v35);
          }
          v101 = v5;
          v36 = 1;
          if ( v118 )
          {
            nullsub_1(v34);
            v37 = 1;
            v38 = (__m128i *)sub_140001650(v35, 1);
            if ( !v38 )
              goto LABEL_126;
            v36 = (__int64)v38;
            sub_1418F44E0(v38, v128, v35);
          }
          v107.m256i_i8[0] = 3;
          v107.m256i_i64[1] = v35;
          v107.m256i_i64[2] = v36;
          v107.m256i_i64[3] = v35;
          v131 = 0;
          sub_140E72AA0(v105, &v102, v95, &v107);
          if ( v105[0] != 0xFF )
            sub_14002F9D0(v105);
          if ( v116 )
            sub_140001660(v128, v116, 1);
          nullsub_1(v39);
          v40 = (_DWORD *)sub_140001650(4, 1);
          if ( !v40 )
            sub_141938D2B(1, 4);
          *v40 = 1701869940;
          *(_QWORD *)&v122 = 4;
          *((_QWORD *)&v122 + 1) = v40;
          v123 = 4;
          nullsub_1(v41);
          v42 = (__m128i *)sub_140001650(25, 1);
          v128 = v42;
          if ( !v42 )
            sub_141938D2B(1, 25);
          qmemcpy(v42, "input_audio_buffer.append", 25);
          v105[0] = 3;
          *(_QWORD *)&v105[8] = 25;
          *(_QWORD *)&v105[16] = v42;
          *(_QWORD *)&v105[24] = 25;
          sub_140E72AA0(&v107, &v102, &v122, v105);
          if ( v107.m256i_i8[0] != -1 )
            sub_14002F9D0(&v107);
          nullsub_1(v43);
          v44 = (__m128i *)sub_140001650(5, 1);
          if ( !v44 )
            sub_141938D2B(1, 5);
          v44->m128i_i8[4] = 111;
          v44->m128i_i32[0] = 1768191329;
          v116 = 5;
          v128 = v44;
          v117 = v44;
          v118 = 5;
          sub_1401A4690(&v122, &unk_141A265F3, *((_QWORD *)v129 + 30), *((_QWORD *)v129 + 31));
          v128 = *((const __m128i **)&v122 + 1);
          v46 = v123;
          if ( v123 < 0 )
          {
            v48 = 0;
LABEL_128:
            v130 = 1;
            sub_141938D2B(v48, v46);
          }
          v47 = 1;
          if ( v123 )
          {
            nullsub_1(v45);
            v48 = 1;
            v49 = (__m128i *)sub_140001650(v46, 1);
            if ( !v49 )
              goto LABEL_128;
            v47 = (__int64)v49;
            sub_1418F44E0(v49, v128, v46);
          }
          v105[0] = 3;
          *(_QWORD *)&v105[8] = v46;
          *(_QWORD *)&v105[16] = v47;
          *(_QWORD *)&v105[24] = v46;
          v130 = 0;
          sub_140E72AA0(&v107, &v102, &v116, v105);
          v5 = v101;
          v50 = v127;
          if ( v107.m256i_i8[0] != -1 )
            sub_14002F9D0(&v107);
          if ( (_QWORD)v122 )
            sub_140001660(v128, v122, 1);
          v51 = v102;
          v52 = v100;
          *((_QWORD *)v100 + 2) = v103;
          *(_OWORD *)v52 = v51;
          v53 = v115;
          *v115 = 5;
          v107.m256i_i64[0] = 0;
          *(_OWORD *)&v107.m256i_u64[1] = 1u;
          *(_QWORD *)&v105[16] = 1610612768;
          *(_QWORD *)v105 = &v107;
          *(_QWORD *)&v105[8] = &off_141A272D0;
          if ( (unsigned __int8)sub_141642FA0(v53, v105) )
            sub_141939040(
              (unsigned int)aADisplayImplem_5,
              55,
              (unsigned int)&v124,
              (unsigned int)&unk_141A26D10,
              (__int64)&off_141A27388);
          v30 = v50 + 3;
          v123 = v107.m256i_i64[2];
          v122 = *(_OWORD *)v107.m256i_i8;
          v54 = v129;
          v29 = (const __m128i *)0x8000000000000000LL;
          *((_QWORD *)v129 + 32) = 0x8000000000000000uLL;
          v55 = v120;
          *((_QWORD *)v120 + 2) = v123;
          *(_OWORD *)v55 = v122;
          *((_QWORD *)v54 + 37) = v30;
LABEL_65:
          v128 = v29;
          sub_140944B60(v105, v30, a2);
          v127 = v30;
          v56 = *(_QWORD *)v105;
          if ( *(_QWORD *)v105 != -2 )
          {
            if ( *(_DWORD *)v105 != -1 )
              goto LABEL_73;
            *v114 = -1;
            if ( *v30 != -1 )
              sub_14040C610(v127);
            v30 = v127;
            *v127 = v128;
            v57 = *((_OWORD *)v120 + 1);
            *(_OWORD *)(v30 + 1) = *(_OWORD *)v120;
            *(_OWORD *)(v30 + 3) = v57;
LABEL_70:
            sub_140944540(v105, v30, a2);
            v56 = *(_QWORD *)v105;
            if ( *(_QWORD *)v105 != -2 )
            {
              if ( *(_DWORD *)v105 == -1 )
              {
                v56 = -1;
                goto LABEL_76;
              }
LABEL_73:
              v113 = v106;
              v112 = *(_OWORD *)&v105[104];
              v111 = *(_OWORD *)&v105[88];
              v110 = *(_OWORD *)&v105[72];
              v109 = *(_OWORD *)&v105[56];
              v108 = *(_OWORD *)&v105[40];
              v107 = *(__m256i *)&v105[8];
            }
          }
          if ( (_DWORD)v56 == -2 )
          {
            v6 = v129;
            v129[225] = 3;
            goto LABEL_115;
          }
LABEL_76:
          v84 = v113;
          v83 = v112;
          v82 = v111;
          v81 = v110;
          v80 = v109;
          v79 = v108;
          v133 = v107;
          v58 = *v114;
          if ( *v114 != -1 )
          {
            v59 = v58 ^ 0x8000000000000000uLL;
            if ( v58 >= 0 )
              v59 = 5;
            v60 = v59 == 4;
            if ( v59 >= 4 )
            {
              v61 = 256;
              if ( !v60 )
                goto LABEL_106;
              v58 = *(_QWORD *)v120;
              v61 = 264;
              if ( *(_QWORD *)v120 <= 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_106;
            }
            else
            {
              v58 = *(_QWORD *)v120;
              v61 = 264;
LABEL_106:
              if ( v58 )
                sub_140001660(*(_QWORD *)&v129[v61 + 8], v58, 1);
            }
          }
          v69 = -1;
          if ( (_DWORD)v56 != -1 )
          {
            *(_QWORD *)v105 = v56;
            v106 = v84;
            *(_OWORD *)&v105[104] = v83;
            *(_OWORD *)&v105[88] = v82;
            *(_OWORD *)&v105[72] = v81;
            *(_OWORD *)&v105[56] = v80;
            *(_OWORD *)&v105[40] = v79;
            *(__m256i *)&v105[8] = v133;
            v116 = (__int64)v105;
            v117 = (const __m128i *)sub_14119C700;
            sub_1416ABFD0(&v107, &unk_141A26010, &v116);
            sub_140994490(v105, v72, v73);
            v69 = v107.m256i_i64[0];
            v87 = *(_OWORD *)&v107.m256i_u64[1];
          }
          sub_14002F9D0(v115);
          goto LABEL_111;
        }
        v32[224] = 0;
        v123 = v126[2];
        v122 = *(_OWORD *)v126;
        v31 = (_QWORD *)(v26 + 24);
        *((_QWORD *)v32 + 29) = 0x8000000000000001uLL;
        v62 = v125;
        v125[2] = v123;
        *v62 = v122;
        *((_QWORD *)v32 + 34) = v31;
        v128 = (const __m128i *)0x8000000000000001LL;
LABEL_82:
        sub_140944B60(v105, v31, a2);
        v63 = *(_QWORD *)v105;
        if ( *(_QWORD *)v105 != -2 )
        {
          if ( *(_DWORD *)v105 != -1 )
            goto LABEL_90;
          *v126 = -1;
          v60 = *v31 == -1;
          v127 = v31;
          if ( !v60 )
            sub_14040C610(v127);
          v31 = v127;
          *v127 = v128;
          v64 = *((_OWORD *)v125 + 1);
          *(_OWORD *)(v31 + 1) = *(_OWORD *)v125;
          *(_OWORD *)(v31 + 3) = v64;
LABEL_87:
          sub_140944540(v105, v31, a2);
          v63 = *(_QWORD *)v105;
          if ( *(_QWORD *)v105 != -2 )
          {
            if ( *(_DWORD *)v105 == -1 )
            {
              v63 = -1;
              goto LABEL_93;
            }
LABEL_90:
            v113 = v106;
            v112 = *(_OWORD *)&v105[104];
            v111 = *(_OWORD *)&v105[88];
            v110 = *(_OWORD *)&v105[72];
            v109 = *(_OWORD *)&v105[56];
            v108 = *(_OWORD *)&v105[40];
            v107 = *(__m256i *)&v105[8];
          }
        }
        if ( (_DWORD)v63 == -2 )
          break;
LABEL_93:
        v94 = v113;
        v93 = v112;
        v92 = v111;
        v91 = v110;
        v90 = v109;
        v89 = v108;
        v88 = v107;
        v65 = *v126;
        if ( *v126 != -1 )
        {
          v66 = v65 ^ 0x8000000000000000uLL;
          if ( v65 >= 0 )
            v66 = 5;
          v67 = v66 == 4;
          if ( v66 < 4 )
          {
            v65 = *v125;
            v68 = 240;
LABEL_100:
            if ( v65 )
              sub_140001660(*(_QWORD *)&v129[v68 + 8], v65, 1);
            goto LABEL_102;
          }
          v68 = 232;
          if ( !v67 )
            goto LABEL_100;
          v65 = *v125;
          v68 = 240;
          if ( *v125 <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_100;
        }
LABEL_102:
        v69 = -1;
        if ( (_DWORD)v63 != -1 )
        {
          *(_QWORD *)v105 = v63;
          v106 = v94;
          *(_OWORD *)&v105[104] = v93;
          *(_OWORD *)&v105[88] = v92;
          *(_OWORD *)&v105[72] = v91;
          *(_OWORD *)&v105[56] = v90;
          *(_OWORD *)&v105[40] = v89;
          *(__m256i *)&v105[8] = v88;
          v116 = (__int64)v105;
          v117 = (const __m128i *)sub_14119C700;
          sub_1416ABFD0(&v107, &unk_141A26031, &v116);
          sub_140994490(v105, v70, v71);
          v69 = v107.m256i_i64[0];
          v87 = *(_OWORD *)&v107.m256i_u64[1];
        }
LABEL_111:
        v6 = v129;
        if ( v129[224] && *v126 )
          sub_140001660(*v125, *v126, 1);
        v6[224] = 0;
        v85 = v87;
        v6[225] = 1;
        if ( v69 == -2 )
          goto LABEL_115;
        sub_140992180(v104);
        if ( v69 != -1 )
        {
          v88.m256i_i64[0] = v69;
          *(_OWORD *)&v88.m256i_u64[1] = v85;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v107.m256i_i64[0] = (__int64)&v88;
            v107.m256i_i64[1] = (__int64)sub_1400015F0;
            *(_QWORD *)v105 = aCodexmateLibCo_6;
            *(_QWORD *)&v105[8] = 35;
            *(_QWORD *)&v105[16] = aCodexmateLibCo_6;
            *(_QWORD *)&v105[24] = 35;
            *(_QWORD *)&v105[32] = &off_141A25E30;
            sub_140BAD520(&unk_141A25E18, &v107, 2, v105);
            v69 = v88.m256i_i64[0];
          }
          v6 = v129;
          if ( v69 )
            sub_140001660(v88.m256i_i64[1], v69, 1);
          if ( *v119 )
            sub_140001660(*((_QWORD *)v6 + 23), 2LL * *v119, 2);
LABEL_135:
          v6[168] = 1;
          *v5 |= 2u;
          return 1;
        }
        v6 = v129;
        if ( *v119 )
          sub_140001660(*((_QWORD *)v129 + 23), 2LL * *v119, 2);
      }
      v6 = v129;
      v129[225] = 4;
LABEL_115:
      v74 = 4;
LABEL_116:
      v6[168] = v74;
LABEL_8:
      result = -1;
      v10 = v12;
    }
    if ( (v13 & 1) == 0 )
      goto LABEL_21;
LABEL_14:
    if ( v10 )
      return result;
    v14 = *v5;
    v12 = 2;
    if ( (v8 & 1) != 0 )
    {
      if ( (v14 & 1) == 0 )
      {
LABEL_21:
        switch ( v6[8] )
        {
          case 0u:
            goto LABEL_28;
          case 1u:
            sub_1419393E0(&off_141A25DD0);
          case 2u:
            sub_141939400(&off_141A25DD0);
          case 3u:
            v16 = *a2;
            switch ( v6[25] )
            {
              case 0u:
                goto LABEL_29;
              case 1u:
                sub_1419393E0(&off_141A269A0);
              case 2u:
                sub_141939400(&off_141A269A0);
              case 3u:
                v17 = *(_BYTE **)v121;
                if ( !**(_BYTE **)v121 )
                  goto LABEL_30;
                v6[25] = 1;
                if ( (unsigned __int8)sub_14092BB20(*(_QWORD *)v6) )
                {
                  v129[8] = 1;
                  *v5 |= 1u;
                  return 0;
                }
                sub_1415141D0(v105, 0, 50000000, &off_141A25DE8);
                v93 = *(_OWORD *)&v105[96];
                v18 = *(_OWORD *)&v105[80];
                v92 = *(_OWORD *)&v105[80];
                v19 = *(_OWORD *)&v105[64];
                v91 = *(_OWORD *)&v105[64];
                v20 = *(_OWORD *)v105;
                v21 = *(_OWORD *)&v105[16];
                v22 = *(_OWORD *)&v105[32];
                v23 = *(_OWORD *)&v105[48];
                v90 = *(_OWORD *)&v105[48];
                v89 = *(_OWORD *)&v105[32];
                v88 = *(__m256i *)v105;
                v24 = v121;
                v121[6] = *(_OWORD *)&v105[96];
                v24[5] = v18;
                v24[4] = v19;
                v24[3] = v23;
                v24[2] = v22;
                v24[1] = v21;
                *v24 = v20;
LABEL_26:
                if ( (unsigned __int8)sub_141514440(v121, a2) )
                {
                  v11 = 4;
                  v6 = v129;
                }
                else
                {
                  sub_1408ED810(v121);
                  v6 = v129;
LABEL_28:
                  v6[25] = 0;
                  v16 = *a2;
LABEL_29:
                  v25 = v98;
                  *v98 = 0;
                  *(_QWORD *)v121 = v25;
                  v17 = v25;
LABEL_30:
                  *v17 = 1;
                  sub_141514360(v16, &off_141A26120);
                  v6 = v129;
                  v129[25] = 3;
                  v11 = 3;
                }
                v6[8] = v11;
                break;
            }
            break;
          case 4u:
            goto LABEL_26;
        }
        goto LABEL_8;
      }
      return result;
    }
    if ( (v14 & 2) != 0 )
      return result;
    goto LABEL_17;
  }
  sub_1415159E0(a2);
  return -1;
}
