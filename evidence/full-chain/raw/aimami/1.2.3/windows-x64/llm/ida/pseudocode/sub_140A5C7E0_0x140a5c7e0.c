// module: codexmate_lib/core/voice/llm
// addr: 0x140a5c7e0
// name: sub_140A5C7E0
// win 1.2.1 | module src/core/voice/llm.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A5C7E0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r8d
  char v16; // r9
  char v17; // r10
  char v18; // r11
  __int64 v19; // rdx
  int v20; // r10d
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // r14
  void *v31; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r14
  _DWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  _DWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // rcx
  _DWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // r15
  __int128 *v62; // r15
  __int128 v63; // xmm0
  __int64 v64; // rcx
  __int128 v65; // xmm0
  __int64 v66; // rcx
  void *v67; // rax
  __int64 v68; // rcx
  void *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r13
  __int64 v72; // r14
  __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // eax
  _OWORD *v76; // rax
  void *v77; // rax
  int v78; // eax
  int v79; // eax
  __int64 v80; // rax
  int v81; // eax
  void *v82; // rax
  _QWORD *v83; // rax
  _DWORD *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int128 v87; // xmm0
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int128 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rdi
  __int64 v97; // r14
  __int128 v98; // xmm0
  __int64 v99; // rdx
  void *v100; // rax
  _QWORD *v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rax
  _BYTE v104[24]; // [rsp+58h] [rbp-28h] BYREF
  __m256i v105; // [rsp+70h] [rbp-10h] BYREF
  __int128 v106; // [rsp+90h] [rbp+10h]
  __int128 v107; // [rsp+A0h] [rbp+20h]
  __int128 v108; // [rsp+B0h] [rbp+30h]
  __int128 v109; // [rsp+C0h] [rbp+40h]
  __int64 v110; // [rsp+D0h] [rbp+50h]
  _WORD v111[9]; // [rsp+D8h] [rbp+58h]
  _BYTE v112[54]; // [rsp+EAh] [rbp+6Ah] BYREF
  __m256i v113; // [rsp+410h] [rbp+390h] BYREF
  __int128 v114; // [rsp+430h] [rbp+3B0h]
  __int128 v115; // [rsp+440h] [rbp+3C0h]
  __int128 v116; // [rsp+450h] [rbp+3D0h]
  __int128 v117; // [rsp+460h] [rbp+3E0h]
  __int64 v118; // [rsp+470h] [rbp+3F0h]
  __int16 v119; // [rsp+478h] [rbp+3F8h]
  __int128 v120; // [rsp+47Ah] [rbp+3FAh]
  __int128 v121; // [rsp+48Ah] [rbp+40Ah]
  __int128 v122; // [rsp+49Ah] [rbp+41Ah]
  _OWORD v123[25]; // [rsp+4AAh] [rbp+42Ah]
  char v124; // [rsp+640h] [rbp+5C0h]
  __int64 v125; // [rsp+7A0h] [rbp+720h]
  int v126; // [rsp+7A8h] [rbp+728h]
  _QWORD v127[2]; // [rsp+7B0h] [rbp+730h] BYREF
  _BYTE v128[320]; // [rsp+7C0h] [rbp+740h] BYREF
  char v129[8]; // [rsp+908h] [rbp+888h] BYREF
  __int128 v130; // [rsp+910h] [rbp+890h] BYREF
  __int64 v131; // [rsp+920h] [rbp+8A0h]
  _QWORD v132[3]; // [rsp+928h] [rbp+8A8h] BYREF
  __int128 v133; // [rsp+940h] [rbp+8C0h]
  __int64 v134; // [rsp+950h] [rbp+8D0h]
  __int64 v135; // [rsp+958h] [rbp+8D8h] BYREF
  __int64 v136; // [rsp+960h] [rbp+8E0h]
  __int64 v137; // [rsp+968h] [rbp+8E8h]
  __int128 v138; // [rsp+970h] [rbp+8F0h] BYREF
  __int64 v139; // [rsp+980h] [rbp+900h]
  __int128 v140; // [rsp+990h] [rbp+910h] BYREF
  __int128 v141; // [rsp+9A0h] [rbp+920h]
  __int128 v142; // [rsp+9B0h] [rbp+930h]
  _BYTE v143[22]; // [rsp+9C0h] [rbp+940h]
  __int64 v144; // [rsp+9D8h] [rbp+958h] BYREF
  __int128 v145; // [rsp+9E0h] [rbp+960h] BYREF
  __int128 v146; // [rsp+9F0h] [rbp+970h]
  __int128 v147; // [rsp+A00h] [rbp+980h]
  __int128 v148; // [rsp+A10h] [rbp+990h]
  __int64 v149; // [rsp+A20h] [rbp+9A0h]
  __int128 v150; // [rsp+A30h] [rbp+9B0h] BYREF
  __int64 v151; // [rsp+A40h] [rbp+9C0h]
  __int128 v152; // [rsp+A50h] [rbp+9D0h] BYREF
  __int64 v153; // [rsp+A60h] [rbp+9E0h]
  _DWORD *v154; // [rsp+A68h] [rbp+9E8h]
  __int64 v155; // [rsp+A70h] [rbp+9F0h]
  char v156; // [rsp+A78h] [rbp+9F8h]
  char v157; // [rsp+A79h] [rbp+9F9h]
  char v158; // [rsp+A7Ah] [rbp+9FAh]
  char v159; // [rsp+A7Bh] [rbp+9FBh]
  char v160; // [rsp+A7Ch] [rbp+9FCh]
  char v161; // [rsp+A7Dh] [rbp+9FDh]
  char v162; // [rsp+A7Eh] [rbp+9FEh]
  char v163; // [rsp+A7Fh] [rbp+9FFh]
  __int64 v164; // [rsp+A80h] [rbp+A00h]

  v164 = -2;
  v6 = a2;
  if ( (unsigned __int8)sub_14099C6D0(a2) )
  {
    v9 = v6[1];
    v10 = v6[2];
    sub_140A5BF50(v113.m256i_i64, v9, v10);
    if ( v113.m256i_i64[2] != 6
      || *(_DWORD *)v113.m256i_i64[1] ^ 0x75616C63 | *(unsigned __int16 *)(v113.m256i_i64[1] + 4) ^ 0x6564 )
    {
      if ( v113.m256i_i64[0] )
        sub_140001660(v113.m256i_i64[1], v113.m256i_i64[0], 1);
      v11 = v6[10];
      v12 = v6[11];
      while ( 1 )
      {
        v13 = v12;
        if ( !v12 )
          break;
        v14 = v11 + v12;
        v15 = *(char *)(v11 + v13 - 1);
        if ( v15 >= 0 )
        {
          v12 = v13 - 1;
          if ( v15 != 47 )
            break;
        }
        else
        {
          v16 = *(_BYTE *)(v14 - 2);
          if ( v16 >= -64 )
          {
            v19 = v14 - 2;
            v21 = v16 & 0x1F;
          }
          else
          {
            v17 = *(_BYTE *)(v14 - 3);
            if ( v17 >= -64 )
            {
              v19 = v14 - 3;
              v20 = v17 & 0xF;
            }
            else
            {
              v18 = *(_BYTE *)(v14 - 4);
              v19 = v14 - 4;
              v20 = ((v18 & 7) << 6) | v17 & 0x3F;
            }
            v21 = (v20 << 6) | v16 & 0x3F;
          }
          v12 = v19 - v11;
          if ( ((v21 << 6) | v15 & 0x3F) != 0x2F )
            break;
        }
      }
      v105.m256i_i64[0] = v6[10];
      v105.m256i_i64[1] = v13;
      v113.m256i_i64[0] = (__int64)&v105;
      v113.m256i_i64[1] = (__int64)sub_14041F680;
      sub_14149C0F0(v132, &unk_1417A3DB8, &v113);
      sub_140A5BF50(&v135, v9, v10);
      *(_QWORD *)&v150 = 0;
      v151 = 0;
      nullsub_1(v22);
      v23 = sub_140001650(5, 1);
      if ( !v23 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v23 + 4) = 108;
      *(_DWORD *)v23 = 1701080941;
      *(_QWORD *)v128 = 5;
      *(_QWORD *)&v128[8] = v23;
      *(_QWORD *)&v128[16] = 5;
      v24 = v6[7];
      v25 = v6[8];
      v160 = 1;
      v26 = sub_14033BC10(v24, v25);
      v29 = v27;
      if ( v27 < 0 )
      {
        v30 = 0;
        goto LABEL_20;
      }
      if ( v27 )
      {
        v155 = (__int64)v6;
        v33 = a4;
        v34 = a1;
        v35 = a3;
        v36 = v26;
        nullsub_1(v28);
        v30 = 1;
        v37 = sub_140001650(v29, 1);
        if ( !v37 )
        {
LABEL_20:
          v160 = 1;
          sub_1416C2D4B(v30, v29);
        }
        v38 = v37;
        sub_141684120(v37, v36, v29);
        a3 = v35;
        a1 = v34;
        a4 = v33;
        v6 = (_QWORD *)v155;
      }
      else
      {
        v38 = 1;
      }
      v113.m256i_i8[0] = 3;
      v113.m256i_i64[1] = v29;
      v113.m256i_i64[2] = v38;
      v113.m256i_i64[3] = v29;
      v160 = 0;
      sub_140307860(&v105, &v150, v128, &v113);
      if ( v105.m256i_i8[0] != -1 )
        sub_1400104F0(&v105);
      nullsub_1(v39);
      v40 = (_QWORD *)sub_140001650(8, 1);
      if ( !v40 )
        sub_1416C2D4B(1, 8);
      *v40 = 0x736567617373656DLL;
      *(_QWORD *)&v152 = 8;
      *((_QWORD *)&v152 + 1) = v40;
      v153 = 8;
      nullsub_1(0x736567617373656DLL);
      v41 = sub_140001650(64, 8);
      if ( !v41 )
      {
        v159 = 1;
        sub_1416C2D31(8, 64);
      }
      v43 = v41;
      *(_QWORD *)&v145 = 0;
      *(_QWORD *)&v146 = 0;
      nullsub_1(v42);
      v44 = (_DWORD *)sub_140001650(4, 1);
      v155 = v43;
      if ( !v44 )
        sub_1416C2D4B(1, 4);
      *v44 = 1701605234;
      *(_QWORD *)v128 = 4;
      *(_QWORD *)&v128[8] = v44;
      *(_QWORD *)&v128[16] = 4;
      nullsub_1(v45);
      v46 = sub_140001650(6, 1);
      v154 = (_DWORD *)v46;
      if ( !v46 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v46 + 4) = 28005;
      *(_DWORD *)v46 = 1953724787;
      v113.m256i_i8[0] = 3;
      v113.m256i_i64[1] = 6;
      v113.m256i_i64[2] = v46;
      v113.m256i_i64[3] = 6;
      sub_140307860(&v105, &v145, v128, &v113);
      if ( v105.m256i_i8[0] != -1 )
        sub_1400104F0(&v105);
      nullsub_1(v47);
      v48 = (_DWORD *)sub_140001650(7, 1);
      if ( !v48 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v48 + 3) = 1953391988;
      *v48 = 1953394531;
      *(_QWORD *)v128 = 7;
      *(_QWORD *)&v128[8] = v48;
      *(_QWORD *)&v128[16] = 7;
      nullsub_1(v49);
      v50 = sub_140001650(222, 1);
      v154 = (_DWORD *)v50;
      if ( !v50 )
        sub_1416C2D4B(1, 222);
      v51 = v50;
      sub_141684120(v50, asc_1417A3E19, 222);
      v113.m256i_i8[0] = 3;
      v113.m256i_i64[1] = 222;
      v113.m256i_i64[2] = v51;
      v113.m256i_i64[3] = 222;
      sub_140307860(&v105, &v145, v128, &v113);
      if ( v105.m256i_i8[0] != -1 )
        sub_1400104F0(&v105);
      *(_OWORD *)&v128[8] = v145;
      *(_QWORD *)&v128[24] = v146;
      v128[0] = 5;
      *(_QWORD *)&v140 = 0;
      *(_QWORD *)&v141 = 0;
      nullsub_1(v52);
      v53 = (_DWORD *)sub_140001650(4, 1);
      if ( !v53 )
        sub_1416C2D4B(1, 4);
      *v53 = 1701605234;
      *(_QWORD *)&v145 = 4;
      *((_QWORD *)&v145 + 1) = v53;
      *(_QWORD *)&v146 = 4;
      nullsub_1(v54);
      v55 = (_DWORD *)sub_140001650(4, 1);
      v154 = v55;
      if ( !v55 )
        sub_1416C2D4B(1, 4);
      *v55 = 1919251317;
      v113.m256i_i8[0] = 3;
      v113.m256i_i64[1] = 4;
      v113.m256i_i64[2] = (__int64)v55;
      v113.m256i_i64[3] = 4;
      sub_140307860(&v105, &v140, &v145, &v113);
      if ( v105.m256i_i8[0] != -1 )
        sub_1400104F0(&v105);
      nullsub_1(v56);
      v57 = (_DWORD *)sub_140001650(7, 1);
      if ( !v57 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v57 + 3) = 1953391988;
      *v57 = 1953394531;
      *(_QWORD *)&v145 = 7;
      *((_QWORD *)&v145 + 1) = v57;
      *(_QWORD *)&v146 = 7;
      if ( a4 < 0 )
      {
        v59 = 0;
        goto LABEL_50;
      }
      if ( a4 )
      {
        nullsub_1(v58);
        v59 = 1;
        v60 = sub_140001650(a4, 1);
        if ( !v60 )
        {
LABEL_50:
          v157 = 1;
          sub_1416C2D4B(v59, a4);
        }
        v61 = v60;
        sub_141684120(v60, a3, a4);
      }
      else
      {
        v61 = 1;
      }
      v113.m256i_i8[0] = 3;
      v113.m256i_i64[1] = a4;
      v113.m256i_i64[2] = v61;
      v113.m256i_i64[3] = a4;
      v157 = 0;
      v62 = &v145;
      sub_140307860(&v105, &v140, &v145, &v113);
      if ( v105.m256i_i8[0] != -1 )
        sub_1400104F0(&v105);
      *(_OWORD *)((char *)&v113.m256i_u32[1] + 3) = v140;
      *(__int64 *)((char *)&v113.m256i_i64[2] + 7) = v141;
      v63 = *(_OWORD *)v128;
      v64 = v155;
      *(_OWORD *)(v155 + 16) = *(_OWORD *)&v128[16];
      *(_OWORD *)v64 = v63;
      *(_BYTE *)(v64 + 32) = 5;
      v65 = *(_OWORD *)v113.m256i_i8;
      *(_OWORD *)(v64 + 48) = *(_OWORD *)((char *)&v113.m256i_u64[1] + 7);
      *(_OWORD *)(v64 + 33) = v65;
      v113.m256i_i64[1] = 2;
      v113.m256i_i64[2] = v64;
      v113.m256i_i64[3] = 2;
      v113.m256i_i8[0] = 4;
      v159 = 0;
      sub_140307860(&v105, &v150, &v152, &v113);
      if ( v105.m256i_i8[0] != -1 )
        sub_1400104F0(&v105);
      nullsub_1(v66);
      v67 = (void *)sub_140001650(11, 1);
      if ( !v67 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v67, "temperature", 11);
      *(_QWORD *)v128 = 11;
      *(_QWORD *)&v128[8] = v67;
      *(_QWORD *)&v128[16] = 11;
      v162 = 1;
      sub_14142F790(&v113);
      if ( v113.m256i_i8[0] == -1 )
      {
        v105.m256i_i64[0] = v113.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v105,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A94A0);
      }
      v105 = v113;
      v162 = 0;
      sub_140307860(&v113, &v150, v128, &v105);
      if ( v113.m256i_i8[0] != -1 )
        sub_1400104F0(&v113);
      nullsub_1(v68);
      v69 = (void *)sub_140001650(10, 1);
      if ( !v69 )
        sub_1416C2D4B(1, 10);
      qmemcpy(v69, "max_tokens", 10);
      *(_QWORD *)v128 = 10;
      *(_QWORD *)&v128[8] = v69;
      *(_QWORD *)&v128[16] = 10;
      v113.m256i_i8[0] = 2;
      v113.m256i_i64[1] = 0;
      v113.m256i_i64[2] = 2048;
      sub_140307860(&v105, &v150, v128, &v113);
      if ( v105.m256i_i8[0] != -1 )
        sub_1400104F0(&v105);
      v130 = v150;
      v131 = v151;
      v129[0] = 5;
      v71 = v136;
      v72 = v137;
      switch ( v137 )
      {
        case 4LL:
          if ( *(_DWORD *)v136 == 1768778091 )
            goto LABEL_90;
          break;
        case 5LL:
          v75 = *(_DWORD *)v136 ^ 0x7069687A;
          if ( !(v75 | *(unsigned __int8 *)(v136 + 4) ^ 0x75) )
          {
            nullsub_1(v75 | *(unsigned __int8 *)(v136 + 4) ^ 0x75u);
            v76 = (_OWORD *)sub_140001650(16, 1);
            if ( !v76 )
              sub_1416C2D4B(1, 16);
            *v76 = *(_OWORD *)"reasoning_effortnone";
            *(_QWORD *)v128 = 16;
            *(_QWORD *)&v128[8] = v76;
            *(_QWORD *)&v128[16] = 16;
            v161 = 1;
            sub_140B56640(&v113, &off_1417A3F30);
            if ( v113.m256i_i8[0] == -1 )
            {
              v105.m256i_i64[0] = v113.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v105,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A94B8);
            }
            v105 = v113;
            v161 = 0;
            sub_140307860(&v113, &v130, v128, &v105);
            if ( v113.m256i_i8[0] != -1 )
              sub_1400104F0(&v113);
          }
          break;
        case 6LL:
          v78 = *(_DWORD *)v136 ^ 0x62756F64;
          v70 = v78 | *(unsigned __int16 *)(v136 + 4) ^ 0x6F61u;
          if ( !(v78 | *(unsigned __int16 *)(v136 + 4) ^ 0x6F61) )
            goto LABEL_90;
          v79 = *(_DWORD *)v136 ^ 0x616C6C6F;
          if ( !(v79 | *(unsigned __int16 *)(v136 + 4) ^ 0x616D) )
          {
            nullsub_1(v79 | *(unsigned __int16 *)(v136 + 4) ^ 0x616Du);
            v80 = sub_140001650(5, 1);
            if ( !v80 )
              sub_1416C2D4B(1, 5);
            *(_BYTE *)(v80 + 4) = 107;
            *(_DWORD *)v80 = 1852401780;
            *(_QWORD *)v128 = 5;
            *(_QWORD *)&v128[8] = v80;
            *(_QWORD *)&v128[16] = 5;
            v113.m256i_i16[0] = 1;
            sub_140307860(&v105, &v130, v128, &v113);
            if ( v105.m256i_i8[0] != -1 )
              goto LABEL_96;
          }
          break;
        case 7LL:
          v81 = *(_DWORD *)v136 ^ 0x6C696162;
          if ( !(v81 | *(_DWORD *)(v136 + 3) ^ 0x6E61696C) )
          {
            nullsub_1(v81 | *(_DWORD *)(v136 + 3) ^ 0x6E61696Cu);
            v82 = (void *)sub_140001650(15, 1);
            if ( !v82 )
              sub_1416C2D4B(1, 15);
            qmemcpy(v82, "enable_thinking", 15);
            *(_QWORD *)v128 = 15;
            *(_QWORD *)&v128[8] = v82;
            *(_QWORD *)&v128[16] = 15;
            v113.m256i_i16[0] = 1;
            sub_140307860(&v105, &v130, v128, &v113);
            if ( v105.m256i_i8[0] != -1 )
              goto LABEL_96;
          }
          break;
        case 8LL:
          if ( *(_QWORD *)v136 == 0x6B65657370656564LL )
          {
LABEL_90:
            nullsub_1(v70);
            v83 = (_QWORD *)sub_140001650(8, 1);
            if ( !v83 )
              sub_1416C2D4B(1, 8);
            *v83 = 0x676E696B6E696874LL;
            *(_QWORD *)&v140 = 8;
            *((_QWORD *)&v140 + 1) = v83;
            *(_QWORD *)&v141 = 8;
            *(_QWORD *)&v145 = 0;
            *(_QWORD *)&v146 = 0;
            nullsub_1(0x676E696B6E696874LL);
            v84 = (_DWORD *)sub_140001650(4, 1);
            if ( !v84 )
              sub_1416C2D4B(1, 4);
            *v84 = 1701869940;
            *(_QWORD *)v128 = 4;
            *(_QWORD *)&v128[8] = v84;
            *(_QWORD *)&v128[16] = 4;
            nullsub_1(v85);
            v155 = sub_140001650(8, 1);
            if ( !v155 )
              sub_1416C2D4B(1, 8);
            v86 = v155;
            *(_QWORD *)v155 = 0x64656C6261736964LL;
            v113.m256i_i8[0] = 3;
            v113.m256i_i64[1] = 8;
            v113.m256i_i64[2] = v86;
            v113.m256i_i64[3] = 8;
            sub_140307860(&v105, &v145, v128, &v113);
            if ( v105.m256i_i8[0] != -1 )
              sub_1400104F0(&v105);
            *(_OWORD *)&v113.m256i_u64[1] = v145;
            v113.m256i_i64[3] = v146;
            v113.m256i_i8[0] = 5;
            v156 = 0;
            sub_140307860(&v105, &v130, &v140, &v113);
            if ( v105.m256i_i8[0] != -1 )
              goto LABEL_96;
          }
          break;
        case 9LL:
          v73 = *(_QWORD *)v136 ^ 0x6378616D696E696DLL;
          v74 = *(unsigned __int8 *)(v136 + 8) ^ 0x6ELL;
          goto LABEL_76;
        case 11LL:
          v73 = *(_QWORD *)v136 ^ 0x6978616D696E696DLL;
          v74 = *(_QWORD *)(v136 + 3) ^ 0x6C746E6978616D69LL;
LABEL_76:
          if ( !(v73 | v74) )
          {
            nullsub_1(0);
            v77 = (void *)sub_140001650(15, 1);
            if ( !v77 )
              sub_1416C2D4B(1, 15);
            qmemcpy(v77, "reasoning_split", 15);
            *(_QWORD *)v128 = 15;
            *(_QWORD *)&v128[8] = v77;
            *(_QWORD *)&v128[16] = 15;
            v113.m256i_i16[0] = 257;
            sub_140307860(&v105, &v130, v128, &v113);
            if ( v105.m256i_i8[0] != -1 )
LABEL_96:
              sub_1400104F0(&v105);
          }
          break;
        default:
          break;
      }
      sub_141069E60(&v113);
      v125 = 30;
      v126 = 0;
      sub_141684120(&v105, &v113, 928);
      sub_141068AB0(v128, &v105);
      if ( *(_DWORD *)&v128[16] == -2 )
      {
        *(_QWORD *)&v152 = *(_QWORD *)v128;
        v105.m256i_i64[0] = (__int64)&v152;
        v105.m256i_i64[1] = (__int64)sub_141031F10;
        sub_14149C0F0(&v113, &unk_1417A48B8, &v105);
        sub_140528900(v152);
        v87 = *(_OWORD *)v113.m256i_i8;
        v140 = *(_OWORD *)v113.m256i_i8;
        *(_QWORD *)&v141 = v113.m256i_i64[2];
        *(_QWORD *)(a1 + 24) = v113.m256i_i64[2];
        *(_OWORD *)(a1 + 8) = v87;
        *(_QWORD *)a1 = 1;
LABEL_143:
        sub_1400104F0(v129);
        if ( v135 )
          sub_140001660(v136, v135, 1);
        if ( v132[0] )
          sub_140001660(v132[1], v132[0], 1);
        return a1;
      }
      v138 = *(_OWORD *)v128;
      v139 = *(_QWORD *)&v128[16];
      sub_14097EE10((__int64)&v113, (__int64)&v138, byte_1417A3F68, (__int64)v132);
      sub_1406C7070(
        (unsigned int)&v105,
        (unsigned int)&v113,
        (unsigned int)aContentType,
        12,
        (__int64)&unk_1417A3F8C,
        16,
        0);
      sub_1406C8270(v128, &v105, v129);
      if ( v72 != 6
        || *(_DWORD *)v71 ^ 0x616C6C6F | *(unsigned __int16 *)(v71 + 4) ^ 0x616D
        || (v88 = v6[4], v89 = v6[5], v163 = 1, sub_14033BC10(v88, v89), v90) )
      {
        sub_141684120(&v113, v128, 328);
        v91 = v6[4];
        v92 = v6[5];
        v158 = 1;
        *(_QWORD *)&v93 = sub_14033BC10(v91, v92);
        v145 = v93;
        v105.m256i_i64[0] = (__int64)&v145;
        v105.m256i_i64[1] = (__int64)sub_14041F680;
        v158 = 1;
        sub_14149C0F0(v104, &unk_1417A3F9C, &v105);
        v158 = 0;
        sub_1406C7390((unsigned int)&v105, (unsigned int)&v113, (unsigned int)aAuthorization_2, 13, (__int64)v104, 0);
        sub_141684120(v128, &v105, 328);
      }
      sub_141684120(&v113, v128, 328);
      v163 = 0;
      sub_14103CF70(&v105, &v113);
      if ( v105.m256i_i64[0] == -1 )
      {
        v144 = v105.m256i_i64[1];
        v127[0] = &v144;
        v127[1] = sub_141031F10;
        sub_14149C0F0(&v113, &unk_1417A54D2, v127);
        v163 = 0;
        sub_140528900(v144);
        v98 = *(_OWORD *)v113.m256i_i8;
        v150 = *(_OWORD *)v113.m256i_i8;
        v151 = v113.m256i_i64[2];
        *(_QWORD *)(a1 + 24) = v113.m256i_i64[2];
        *(_OWORD *)(a1 + 8) = v98;
      }
      else
      {
        v153 = v105.m256i_i64[3];
        v152 = *(_OWORD *)&v105.m256i_u64[1];
        v145 = v106;
        v146 = v107;
        v147 = v108;
        v148 = v109;
        v149 = v110;
        v140 = *(_OWORD *)&v111[1];
        v141 = *(_OWORD *)v112;
        v142 = *(_OWORD *)&v112[16];
        *(_OWORD *)v143 = *(_OWORD *)&v112[32];
        *(_QWORD *)&v143[14] = *(_QWORD *)&v112[46];
        v133 = *(_OWORD *)&v105.m256i_u64[1];
        v134 = v105.m256i_i64[3];
        if ( (unsigned __int16)(v111[0] - 200) >= 0x64u )
        {
          LOWORD(v150) = v111[0];
          v113.m256i_i64[0] = v105.m256i_i64[0];
          *(_OWORD *)&v113.m256i_u64[1] = v133;
          v113.m256i_i64[3] = v134;
          v114 = v145;
          v115 = v146;
          v116 = v147;
          v117 = v148;
          v118 = v149;
          v119 = v111[0];
          v120 = v140;
          v121 = v141;
          v122 = v142;
          v123[0] = *(_OWORD *)v143;
          *(_QWORD *)((char *)v123 + 14) = *(_QWORD *)&v143[14];
          v163 = 0;
          sub_14101E160(&v105, &v113);
          if ( v105.m256i_i64[0] == -1 )
          {
            *(_QWORD *)&v152 = 0;
            *((_QWORD *)&v152 + 1) = 1;
            v153 = 0;
            v163 = 0;
            sub_140528900(v105.m256i_i64[1]);
          }
          else
          {
            v153 = v105.m256i_i64[2];
            v152 = *(_OWORD *)v105.m256i_i8;
          }
          v113.m256i_i64[0] = (__int64)&v150;
          v113.m256i_i64[1] = (__int64)sub_14143ED80;
          v113.m256i_i64[2] = (__int64)&v152;
          v113.m256i_i64[3] = (__int64)sub_1400015F0;
          sub_14149C0F0(&v105, &unk_1417A3FB3, &v113);
          *(_QWORD *)(a1 + 24) = v105.m256i_i64[2];
          *(_OWORD *)(a1 + 8) = *(_OWORD *)v105.m256i_i8;
          *(_QWORD *)a1 = 1;
          if ( (_QWORD)v152 )
            sub_140001660(*((_QWORD *)&v152 + 1), v152, 1);
          goto LABEL_141;
        }
        *(_OWORD *)&v105.m256i_u64[1] = v133;
        v105.m256i_i64[3] = v134;
        v106 = v145;
        v107 = v146;
        v108 = v147;
        v109 = v148;
        v110 = v149;
        *(_OWORD *)&v111[1] = v140;
        *(_OWORD *)v112 = v141;
        *(_OWORD *)&v112[16] = v142;
        *(_OWORD *)&v112[32] = *(_OWORD *)v143;
        *(_QWORD *)&v112[46] = *(_QWORD *)&v143[14];
        sub_141684120(&v113, &v105, 136);
        v124 = 0;
        sub_1406911D0(&v152, &v113, *(_QWORD *)&v112[14], *(unsigned int *)&v112[22]);
        v96 = *((_QWORD **)&v152 + 1);
        v97 = v152;
        if ( (_QWORD)v152 == -1 )
        {
          if ( !*((_QWORD *)&v152 + 1) )
          {
            v113.m256i_i16[0] = 5;
            LOBYTE(v94) = 1;
            v96 = (_QWORD *)sub_140682990(&v113, v94);
          }
        }
        else
        {
          v62 = (__int128 *)v153;
        }
        v155 = *(_QWORD *)&v112[30];
        if ( *(_QWORD *)&v112[30] )
        {
          v154 = *(_DWORD **)&v112[38];
          if ( **(_QWORD **)&v112[38] )
            (**(void (__fastcall ***)(__int64))&v112[38])(v155);
          v99 = *((_QWORD *)v154 + 1);
          if ( v99 )
            sub_140001660(v155, v99, *((_QWORD *)v154 + 2));
        }
        if ( *(_QWORD *)&v112[46] && !_InterlockedDecrement64(*(volatile signed __int64 **)&v112[46]) )
        {
          v163 = 0;
          sub_141018DA0(&v112[46]);
        }
        if ( v97 != -1 )
        {
          *(_QWORD *)&v150 = v97;
          *((_QWORD *)&v150 + 1) = v96;
          v151 = (__int64)v62;
          if ( !v62 || *v96 == -1 )
          {
            nullsub_1(v95);
            v100 = (void *)sub_140001650(27, 1);
            if ( !v100 )
              sub_1416C2D4B(1, 27);
            qmemcpy(v100, "LLM returned empty response", 27);
            *(_QWORD *)(a1 + 8) = 27;
            *(_QWORD *)(a1 + 16) = v100;
            *(_QWORD *)(a1 + 24) = 27;
            *(_QWORD *)a1 = 1;
            if ( !v62 )
              goto LABEL_131;
          }
          else
          {
            sub_14149C500(&v113, v96);
            v105.m256i_i64[2] = v113.m256i_i64[2];
            *(_OWORD *)v105.m256i_i8 = *(_OWORD *)v113.m256i_i8;
            sub_140A594E0(v113.m256i_i64, &v105);
            *(_QWORD *)(a1 + 24) = v113.m256i_i64[2];
            *(_OWORD *)(a1 + 8) = *(_OWORD *)v113.m256i_i8;
            *(_QWORD *)a1 = 0;
          }
          v101 = v96 + 1;
          do
          {
            v102 = *(v101 - 1);
            if ( v102 != -1 && v102 )
              sub_140001660(*v101, v102, 1);
            v101 += 3;
            v62 = (__int128 *)((char *)v62 - 1);
          }
          while ( v62 );
LABEL_131:
          if ( v97 )
            sub_140001660(v96, 24 * v97, 8);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)v138) )
            sub_141018DA0(&v138);
          goto LABEL_143;
        }
        *(_QWORD *)&v152 = v96;
        v105.m256i_i64[0] = (__int64)&v152;
        v105.m256i_i64[1] = (__int64)sub_141031F10;
        sub_14149C0F0(&v113, &unk_1417A549A, &v105);
        v163 = 0;
        sub_140528900(v152);
        v103 = v113.m256i_i64[2];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v113.m256i_i8;
        *(_QWORD *)(a1 + 24) = v103;
      }
      *(_QWORD *)a1 = 1;
LABEL_141:
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v138) )
        sub_141018DA0(&v138);
      goto LABEL_143;
    }
    if ( v113.m256i_i64[0] )
      sub_140001660(v113.m256i_i64[1], v113.m256i_i64[0], 1);
    sub_140A56B40(a1, v6, a3, a4);
  }
  else
  {
    nullsub_1(v8);
    v31 = (void *)sub_140001650(24, 1);
    if ( !v31 )
      sub_1416C2D4B(1, 24);
    qmemcpy(v31, "LLM config is incomplete", 24);
    *(_QWORD *)(a1 + 8) = 24;
    *(_QWORD *)(a1 + 16) = v31;
    *(_QWORD *)(a1 + 24) = 24;
    *(_QWORD *)a1 = 1;
  }
  return a1;
}