// win 1.2.7 latest-exe | module src/core/voice/llm.rs | ea 0x140754b30 | successor of pre-update 0x140351060 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_140754B30(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  char v17; // r9
  char v18; // r10
  char v19; // r11
  __int64 v20; // rdx
  int v21; // r10d
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
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
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r14
  _DWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rcx
  _DWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _DWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  _DWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // r15
  __int128 *v72; // r15
  __int128 v73; // xmm0
  __int64 v74; // rcx
  __int128 v75; // xmm0
  __int64 v76; // rdx
  __int64 v77; // rcx
  void *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  void *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r13
  __int64 v85; // r14
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // eax
  _OWORD *v89; // rax
  void *v90; // rax
  int v91; // eax
  int v92; // eax
  __int64 v93; // rax
  int v94; // eax
  void *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rdx
  _DWORD *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int128 v102; // xmm0
  __int64 v103; // rdx
  __int128 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  _QWORD *v107; // rdi
  __int64 v108; // r14
  __int128 v109; // xmm0
  void *v110; // rax
  _QWORD *v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rax
  _BYTE v114[24]; // [rsp+58h] [rbp-28h] BYREF
  __m256i v115; // [rsp+70h] [rbp-10h] BYREF
  __int128 v116; // [rsp+90h] [rbp+10h]
  __int128 v117; // [rsp+A0h] [rbp+20h]
  __int128 v118; // [rsp+B0h] [rbp+30h]
  __int128 v119; // [rsp+C0h] [rbp+40h]
  __int64 v120; // [rsp+D0h] [rbp+50h]
  _WORD v121[9]; // [rsp+D8h] [rbp+58h]
  _BYTE v122[54]; // [rsp+EAh] [rbp+6Ah] BYREF
  __m256i v123; // [rsp+410h] [rbp+390h] BYREF
  __int128 v124; // [rsp+430h] [rbp+3B0h]
  __int128 v125; // [rsp+440h] [rbp+3C0h]
  __int128 v126; // [rsp+450h] [rbp+3D0h]
  __int128 v127; // [rsp+460h] [rbp+3E0h]
  __int64 v128; // [rsp+470h] [rbp+3F0h]
  __int16 v129; // [rsp+478h] [rbp+3F8h]
  __int128 v130; // [rsp+47Ah] [rbp+3FAh]
  __int128 v131; // [rsp+48Ah] [rbp+40Ah]
  __int128 v132; // [rsp+49Ah] [rbp+41Ah]
  _OWORD v133[25]; // [rsp+4AAh] [rbp+42Ah]
  char v134; // [rsp+640h] [rbp+5C0h]
  __int64 v135; // [rsp+7A0h] [rbp+720h]
  int v136; // [rsp+7A8h] [rbp+728h]
  _QWORD v137[2]; // [rsp+7B0h] [rbp+730h] BYREF
  _BYTE v138[320]; // [rsp+7C0h] [rbp+740h] BYREF
  char v139[8]; // [rsp+908h] [rbp+888h] BYREF
  __int128 v140; // [rsp+910h] [rbp+890h] BYREF
  __int64 v141; // [rsp+920h] [rbp+8A0h]
  _QWORD v142[3]; // [rsp+928h] [rbp+8A8h] BYREF
  __int128 v143; // [rsp+940h] [rbp+8C0h]
  __int64 v144; // [rsp+950h] [rbp+8D0h]
  __int64 v145; // [rsp+958h] [rbp+8D8h] BYREF
  __int64 v146; // [rsp+960h] [rbp+8E0h]
  __int64 v147; // [rsp+968h] [rbp+8E8h]
  __int128 v148; // [rsp+970h] [rbp+8F0h] BYREF
  __int64 v149; // [rsp+980h] [rbp+900h]
  __int128 v150; // [rsp+990h] [rbp+910h] BYREF
  __int128 v151; // [rsp+9A0h] [rbp+920h]
  __int128 v152; // [rsp+9B0h] [rbp+930h]
  _BYTE v153[22]; // [rsp+9C0h] [rbp+940h]
  __int64 v154; // [rsp+9D8h] [rbp+958h] BYREF
  __int128 v155; // [rsp+9E0h] [rbp+960h] BYREF
  __int128 v156; // [rsp+9F0h] [rbp+970h]
  __int128 v157; // [rsp+A00h] [rbp+980h]
  __int128 v158; // [rsp+A10h] [rbp+990h]
  __int64 v159; // [rsp+A20h] [rbp+9A0h]
  __int128 v160; // [rsp+A30h] [rbp+9B0h] BYREF
  __int64 v161; // [rsp+A40h] [rbp+9C0h]
  __int128 v162; // [rsp+A50h] [rbp+9D0h] BYREF
  __int64 v163; // [rsp+A60h] [rbp+9E0h]
  _DWORD *v164; // [rsp+A68h] [rbp+9E8h]
  __int64 v165; // [rsp+A70h] [rbp+9F0h]
  char v166; // [rsp+A79h] [rbp+9F9h]
  char v167; // [rsp+A7Ah] [rbp+9FAh]
  char v168; // [rsp+A7Bh] [rbp+9FBh]
  char v169; // [rsp+A7Ch] [rbp+9FCh]
  char v170; // [rsp+A7Dh] [rbp+9FDh]
  char v171; // [rsp+A7Eh] [rbp+9FEh]
  char v172; // [rsp+A7Fh] [rbp+9FFh]
  __int64 v173; // [rsp+A80h] [rbp+A00h]

  v173 = -2;
  v6 = a2;
  if ( (unsigned __int8)sub_14070BF00(a2) )
  {
    v10 = v6[1];
    v11 = v6[2];
    sub_1407542A0(&v123, v10, v11);
    if ( v123.m256i_i64[2] != 6
      || *(_DWORD *)v123.m256i_i64[1] ^ 0x75616C63 | *(unsigned __int16 *)(v123.m256i_i64[1] + 4) ^ 0x6564 )
    {
      if ( v123.m256i_i64[0] )
        sub_140001660(v123.m256i_i64[1], v123.m256i_i64[0], 1);
      v12 = v6[10];
      v13 = v6[11];
      while ( 1 )
      {
        v14 = v13;
        if ( !v13 )
          break;
        v15 = v12 + v13;
        v16 = *(char *)(v12 + v14 - 1);
        if ( v16 >= 0 )
        {
          v13 = v14 - 1;
          if ( v16 != 47 )
            break;
        }
        else
        {
          v17 = *(_BYTE *)(v15 - 2);
          if ( v17 >= -64 )
          {
            v20 = v15 - 2;
            v22 = v17 & 0x1F;
          }
          else
          {
            v18 = *(_BYTE *)(v15 - 3);
            if ( v18 >= -64 )
            {
              v20 = v15 - 3;
              v21 = v18 & 0xF;
            }
            else
            {
              v19 = *(_BYTE *)(v15 - 4);
              v20 = v15 - 4;
              v21 = ((v19 & 7) << 6) | v18 & 0x3F;
            }
            v22 = (v21 << 6) | v17 & 0x3F;
          }
          v13 = v20 - v12;
          if ( ((v22 << 6) | v16 & 0x3F) != 0x2F )
            break;
        }
      }
      v115.m256i_i64[0] = v6[10];
      v115.m256i_i64[1] = v14;
      v123.m256i_i64[0] = (__int64)&v115;
      v123.m256i_i64[1] = (__int64)sub_140191200;
      sub_1416DAFA0(v142, &unk_141A38249, &v123);
      sub_1407542A0(&v145, v10, v11);
      *(_QWORD *)&v160 = 0;
      v161 = 0;
      nullsub_1(v24, v23);
      v25 = sub_140001650(5, 1);
      if ( !v25 )
        sub_14196B2DB(1, 5);
      *(_BYTE *)(v25 + 4) = 108;
      *(_DWORD *)v25 = 1701080941;
      *(_QWORD *)v138 = 5;
      *(_QWORD *)&v138[8] = v25;
      *(_QWORD *)&v138[16] = 5;
      v26 = sub_1408FEA60(v6[7], v6[8]);
      v29 = v27;
      if ( v27 < 0 )
      {
        v30 = 0;
        goto LABEL_20;
      }
      if ( v27 )
      {
        v165 = (__int64)v6;
        v33 = a4;
        v34 = a1;
        v35 = a3;
        v36 = v26;
        nullsub_1(v28, v27);
        v30 = 1;
        v37 = sub_140001650(v29, 1);
        if ( !v37 )
        {
LABEL_20:
          v169 = 1;
          sub_14196B2DB(v30, v29);
        }
        v38 = v37;
        sub_1419234B0(v37, v36, v29);
        a3 = v35;
        a1 = v34;
        a4 = v33;
        v6 = (_QWORD *)v165;
      }
      else
      {
        v38 = 1;
      }
      v123.m256i_i8[0] = 3;
      v123.m256i_i64[1] = v29;
      v123.m256i_i64[2] = v38;
      v123.m256i_i64[3] = v29;
      v169 = 0;
      sub_140A68320(&v115, &v160, v138, &v123);
      if ( v115.m256i_i8[0] != -1 )
        sub_1406C0ED0(&v115);
      nullsub_1(v40, v39);
      v41 = (_QWORD *)sub_140001650(8, 1);
      if ( !v41 )
        sub_14196B2DB(1, 8);
      *v41 = 0x736567617373656DLL;
      *(_QWORD *)&v162 = 8;
      *((_QWORD *)&v162 + 1) = v41;
      v163 = 8;
      nullsub_1(0x736567617373656DLL, v42);
      v43 = sub_140001650(64, 8);
      if ( !v43 )
      {
        v170 = 1;
        sub_14196B2C1(8, 64);
      }
      v46 = v43;
      *(_QWORD *)&v155 = 0;
      *(_QWORD *)&v156 = 0;
      nullsub_1(v45, v44);
      v47 = (_DWORD *)sub_140001650(4, 1);
      v165 = v46;
      if ( !v47 )
        sub_14196B2DB(1, 4);
      *v47 = 1701605234;
      *(_QWORD *)v138 = 4;
      *(_QWORD *)&v138[8] = v47;
      *(_QWORD *)&v138[16] = 4;
      nullsub_1(v49, v48);
      v50 = sub_140001650(6, 1);
      v164 = (_DWORD *)v50;
      if ( !v50 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v50 + 4) = 28005;
      *(_DWORD *)v50 = 1953724787;
      v123.m256i_i8[0] = 3;
      v123.m256i_i64[1] = 6;
      v123.m256i_i64[2] = v50;
      v123.m256i_i64[3] = 6;
      sub_140A68320(&v115, &v155, v138, &v123);
      if ( v115.m256i_i8[0] != -1 )
        sub_1406C0ED0(&v115);
      nullsub_1(v52, v51);
      v53 = (_DWORD *)sub_140001650(7, 1);
      if ( !v53 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v53 + 3) = 1953391988;
      *v53 = 1953394531;
      *(_QWORD *)v138 = 7;
      *(_QWORD *)&v138[8] = v53;
      *(_QWORD *)&v138[16] = 7;
      nullsub_1(v55, v54);
      v56 = sub_140001650(222, 1);
      v164 = (_DWORD *)v56;
      if ( !v56 )
        sub_14196B2DB(1, 222);
      v57 = v56;
      sub_1419234B0(v56, asc_141A38297, 222);
      v123.m256i_i8[0] = 3;
      v123.m256i_i64[1] = 222;
      v123.m256i_i64[2] = v57;
      v123.m256i_i64[3] = 222;
      sub_140A68320(&v115, &v155, v138, &v123);
      if ( v115.m256i_i8[0] != -1 )
        sub_1406C0ED0(&v115);
      *(_OWORD *)&v138[8] = v155;
      *(_QWORD *)&v138[24] = v156;
      v138[0] = 5;
      *(_QWORD *)&v150 = 0;
      *(_QWORD *)&v151 = 0;
      nullsub_1(v59, v58);
      v60 = (_DWORD *)sub_140001650(4, 1);
      if ( !v60 )
        sub_14196B2DB(1, 4);
      *v60 = 1701605234;
      *(_QWORD *)&v155 = 4;
      *((_QWORD *)&v155 + 1) = v60;
      *(_QWORD *)&v156 = 4;
      nullsub_1(v62, v61);
      v63 = (_DWORD *)sub_140001650(4, 1);
      v164 = v63;
      if ( !v63 )
        sub_14196B2DB(1, 4);
      *v63 = 1919251317;
      v123.m256i_i8[0] = 3;
      v123.m256i_i64[1] = 4;
      v123.m256i_i64[2] = (__int64)v63;
      v123.m256i_i64[3] = 4;
      sub_140A68320(&v115, &v150, &v155, &v123);
      if ( v115.m256i_i8[0] != -1 )
        sub_1406C0ED0(&v115);
      nullsub_1(v65, v64);
      v66 = (_DWORD *)sub_140001650(7, 1);
      if ( !v66 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v66 + 3) = 1953391988;
      *v66 = 1953394531;
      *(_QWORD *)&v155 = 7;
      *((_QWORD *)&v155 + 1) = v66;
      *(_QWORD *)&v156 = 7;
      if ( a4 < 0 )
      {
        v69 = 0;
        goto LABEL_50;
      }
      if ( a4 )
      {
        nullsub_1(v68, v67);
        v69 = 1;
        v70 = sub_140001650(a4, 1);
        if ( !v70 )
        {
LABEL_50:
          v168 = 1;
          sub_14196B2DB(v69, a4);
        }
        v71 = v70;
        sub_1419234B0(v70, a3, a4);
      }
      else
      {
        v71 = 1;
      }
      v123.m256i_i8[0] = 3;
      v123.m256i_i64[1] = a4;
      v123.m256i_i64[2] = v71;
      v123.m256i_i64[3] = a4;
      v168 = 0;
      v72 = &v155;
      sub_140A68320(&v115, &v150, &v155, &v123);
      if ( v115.m256i_i8[0] != -1 )
        sub_1406C0ED0(&v115);
      *(_OWORD *)((char *)&v123.m256i_u32[1] + 3) = v150;
      *(__int64 *)((char *)&v123.m256i_i64[2] + 7) = v151;
      v73 = *(_OWORD *)v138;
      v74 = v165;
      *(_OWORD *)(v165 + 16) = *(_OWORD *)&v138[16];
      *(_OWORD *)v74 = v73;
      *(_BYTE *)(v74 + 32) = 5;
      v75 = *(_OWORD *)v123.m256i_i8;
      *(_OWORD *)(v74 + 48) = *(_OWORD *)((char *)&v123.m256i_u64[1] + 7);
      *(_OWORD *)(v74 + 33) = v75;
      v123.m256i_i64[1] = 2;
      v123.m256i_i64[2] = v74;
      v123.m256i_i64[3] = 2;
      v123.m256i_i8[0] = 4;
      v170 = 0;
      sub_140A68320(&v115, &v160, &v162, &v123);
      if ( v115.m256i_i8[0] != -1 )
        sub_1406C0ED0(&v115);
      nullsub_1(v77, v76);
      v78 = (void *)sub_140001650(11, 1);
      if ( !v78 )
        sub_14196B2DB(1, 11);
      qmemcpy(v78, "temperature", 11);
      *(_QWORD *)v138 = 11;
      *(_QWORD *)&v138[8] = v78;
      *(_QWORD *)&v138[16] = 11;
      v172 = 1;
      sub_14166CB50((__int64)&v123, 0.3);
      if ( v123.m256i_i8[0] == -1 )
      {
        v115.m256i_i64[0] = v123.m256i_i64[1];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_6,
          43,
          (unsigned int)&v115,
          (unsigned int)&off_141A3B8C8,
          (__int64)&off_141A404C0);
      }
      v115 = v123;
      v172 = 0;
      sub_140A68320(&v123, &v160, v138, &v115);
      if ( v123.m256i_i8[0] != -1 )
        sub_1406C0ED0(&v123);
      nullsub_1(v80, v79);
      v81 = (void *)sub_140001650(10, 1);
      if ( !v81 )
        sub_14196B2DB(1, 10);
      qmemcpy(v81, "max_tokens", 10);
      *(_QWORD *)v138 = 10;
      *(_QWORD *)&v138[8] = v81;
      *(_QWORD *)&v138[16] = 10;
      v123.m256i_i8[0] = 2;
      v123.m256i_i64[1] = 0;
      v123.m256i_i64[2] = 2048;
      sub_140A68320(&v115, &v160, v138, &v123);
      if ( v115.m256i_i8[0] != -1 )
        sub_1406C0ED0(&v115);
      v140 = v160;
      v141 = v161;
      v139[0] = 5;
      v84 = v146;
      v85 = v147;
      switch ( v147 )
      {
        case 4LL:
          if ( *(_DWORD *)v146 == 1768778091 )
            goto LABEL_90;
          break;
        case 5LL:
          v88 = *(_DWORD *)v146 ^ 0x7069687A;
          if ( !(v88 | *(unsigned __int8 *)(v146 + 4) ^ 0x75) )
          {
            nullsub_1(v88 | *(unsigned __int8 *)(v146 + 4) ^ 0x75u, v82);
            v89 = (_OWORD *)sub_140001650(16, 1);
            if ( !v89 )
              sub_14196B2DB(1, 16);
            *v89 = xmmword_141A3838B;
            *(_QWORD *)v138 = 16;
            *(_QWORD *)&v138[8] = v89;
            *(_QWORD *)&v138[16] = 16;
            v171 = 1;
            sub_140B72ED0((__int64)&v123, (__int64 *)&off_141A383A0);
            if ( v123.m256i_i8[0] == -1 )
            {
              v115.m256i_i64[0] = v123.m256i_i64[1];
              sub_14196B5F0(
                (unsigned int)aCalledResultUn_6,
                43,
                (unsigned int)&v115,
                (unsigned int)&off_141A3B8C8,
                (__int64)&off_141A404D8);
            }
            v115 = v123;
            v171 = 0;
            sub_140A68320(&v123, &v140, v138, &v115);
            if ( v123.m256i_i8[0] != -1 )
              sub_1406C0ED0(&v123);
          }
          break;
        case 6LL:
          v91 = *(_DWORD *)v146 ^ 0x62756F64;
          v83 = v91 | *(unsigned __int16 *)(v146 + 4) ^ 0x6F61u;
          if ( !(v91 | *(unsigned __int16 *)(v146 + 4) ^ 0x6F61) )
            goto LABEL_90;
          v92 = *(_DWORD *)v146 ^ 0x616C6C6F;
          if ( !(v92 | *(unsigned __int16 *)(v146 + 4) ^ 0x616D) )
          {
            nullsub_1(v92 | *(unsigned __int16 *)(v146 + 4) ^ 0x616Du, v82);
            v93 = sub_140001650(5, 1);
            if ( !v93 )
              sub_14196B2DB(1, 5);
            *(_BYTE *)(v93 + 4) = 107;
            *(_DWORD *)v93 = 1852401780;
            *(_QWORD *)v138 = 5;
            *(_QWORD *)&v138[8] = v93;
            *(_QWORD *)&v138[16] = 5;
            v123.m256i_i16[0] = 1;
            sub_140A68320(&v115, &v140, v138, &v123);
            if ( v115.m256i_i8[0] != -1 )
              goto LABEL_96;
          }
          break;
        case 7LL:
          v94 = *(_DWORD *)v146 ^ 0x6C696162;
          if ( !(v94 | *(_DWORD *)(v146 + 3) ^ 0x6E61696C) )
          {
            nullsub_1(v94 | *(_DWORD *)(v146 + 3) ^ 0x6E61696Cu, v82);
            v95 = (void *)sub_140001650(15, 1);
            if ( !v95 )
              sub_14196B2DB(1, 15);
            qmemcpy(v95, "enable_thinking", 15);
            *(_QWORD *)v138 = 15;
            *(_QWORD *)&v138[8] = v95;
            *(_QWORD *)&v138[16] = 15;
            v123.m256i_i16[0] = 1;
            sub_140A68320(&v115, &v140, v138, &v123);
            if ( v115.m256i_i8[0] != -1 )
              goto LABEL_96;
          }
          break;
        case 8LL:
          if ( *(_QWORD *)v146 == 0x6B65657370656564LL )
          {
LABEL_90:
            nullsub_1(v83, v82);
            v96 = (_QWORD *)sub_140001650(8, 1);
            if ( !v96 )
              sub_14196B2DB(1, 8);
            *v96 = 0x676E696B6E696874LL;
            *(_QWORD *)&v150 = 8;
            *((_QWORD *)&v150 + 1) = v96;
            *(_QWORD *)&v151 = 8;
            *(_QWORD *)&v155 = 0;
            *(_QWORD *)&v156 = 0;
            nullsub_1(0x676E696B6E696874LL, v97);
            v98 = (_DWORD *)sub_140001650(4, 1);
            if ( !v98 )
              sub_14196B2DB(1, 4);
            *v98 = 1701869940;
            *(_QWORD *)v138 = 4;
            *(_QWORD *)&v138[8] = v98;
            *(_QWORD *)&v138[16] = 4;
            nullsub_1(v100, v99);
            v165 = sub_140001650(8, 1);
            if ( !v165 )
              sub_14196B2DB(1, 8);
            v101 = v165;
            *(_QWORD *)v165 = 0x64656C6261736964LL;
            v123.m256i_i8[0] = 3;
            v123.m256i_i64[1] = 8;
            v123.m256i_i64[2] = v101;
            v123.m256i_i64[3] = 8;
            sub_140A68320(&v115, &v155, v138, &v123);
            if ( v115.m256i_i8[0] != -1 )
              sub_1406C0ED0(&v115);
            *(_OWORD *)&v123.m256i_u64[1] = v155;
            v123.m256i_i64[3] = v156;
            v123.m256i_i8[0] = 5;
            v167 = 0;
            sub_140A68320(&v115, &v140, &v150, &v123);
            if ( v115.m256i_i8[0] != -1 )
              goto LABEL_96;
          }
          break;
        case 9LL:
          v86 = *(_QWORD *)v146 ^ 0x6378616D696E696DLL;
          v87 = *(unsigned __int8 *)(v146 + 8) ^ 0x6ELL;
          goto LABEL_76;
        case 11LL:
          v86 = *(_QWORD *)v146 ^ 0x6978616D696E696DLL;
          v87 = *(_QWORD *)(v146 + 3) ^ 0x6C746E6978616D69LL;
LABEL_76:
          if ( !(v86 | v87) )
          {
            nullsub_1(0, v82);
            v90 = (void *)sub_140001650(15, 1);
            if ( !v90 )
              sub_14196B2DB(1, 15);
            qmemcpy(v90, "reasoning_split", 15);
            *(_QWORD *)v138 = 15;
            *(_QWORD *)&v138[8] = v90;
            *(_QWORD *)&v138[16] = 15;
            v123.m256i_i16[0] = 257;
            sub_140A68320(&v115, &v140, v138, &v123);
            if ( v115.m256i_i8[0] != -1 )
LABEL_96:
              sub_1406C0ED0(&v115);
          }
          break;
        default:
          break;
      }
      sub_141283D00(&v123);
      v135 = 30;
      v136 = 0;
      sub_1419234B0(&v115, &v123, 928);
      sub_141282DC0(v138, &v115);
      if ( *(_DWORD *)&v138[16] == -2 )
      {
        *(_QWORD *)&v162 = *(_QWORD *)v138;
        v115.m256i_i64[0] = (__int64)&v162;
        v115.m256i_i64[1] = (__int64)sub_141246C00;
        sub_1416DAFA0(&v123, &unk_141A38E7D, &v115);
        sub_14028DCE0(v162);
        v102 = *(_OWORD *)v123.m256i_i8;
        v150 = *(_OWORD *)v123.m256i_i8;
        *(_QWORD *)&v151 = v123.m256i_i64[2];
        *(_QWORD *)(a1 + 24) = v123.m256i_i64[2];
        *(_OWORD *)(a1 + 8) = v102;
        *(_QWORD *)a1 = 1;
LABEL_142:
        sub_1406C0ED0(v139);
        if ( v145 )
          sub_140001660(v146, v145, 1);
        if ( v142[0] )
          sub_140001660(v142[1], v142[0], 1);
        return a1;
      }
      v148 = *(_OWORD *)v138;
      v149 = *(_QWORD *)&v138[16];
      memset(&v115, 2, 24);
      sub_140B6A370(&v123, &v148, &v115, v142);
      sub_1406600F0(
        (unsigned int)&v115,
        (unsigned int)&v123,
        (unsigned int)aContentType,
        12,
        (__int64)"application/json",
        16,
        0);
      sub_140661300(v138, &v115, v139);
      if ( v85 != 6
        || *(_DWORD *)v84 ^ 0x616C6C6F | *(unsigned __int16 *)(v84 + 4) ^ 0x616D
        || (sub_1408FEA60(v6[4], v6[5]), v103) )
      {
        sub_1419234B0(&v123, v138, 328);
        *(_QWORD *)&v104 = sub_1408FEA60(v6[4], v6[5]);
        v155 = v104;
        v115.m256i_i64[0] = (__int64)&v155;
        v115.m256i_i64[1] = (__int64)sub_140191200;
        v166 = 1;
        sub_1416DAFA0(v114, &unk_141A376E0, &v115);
        v166 = 0;
        sub_140660410((unsigned int)&v115, (unsigned int)&v123, (unsigned int)aAuthorization, 13, (__int64)v114, 0);
        sub_1419234B0(v138, &v115, 328);
      }
      sub_1419234B0(&v123, v138, 328);
      sub_141271350(&v115, &v123);
      if ( v115.m256i_i64[0] == -1 )
      {
        v154 = v115.m256i_i64[1];
        v137[0] = &v154;
        v137[1] = sub_141246C00;
        sub_1416DAFA0(&v123, &unk_141A3B1CA, v137);
        sub_14028DCE0(v154);
        v109 = *(_OWORD *)v123.m256i_i8;
        v160 = *(_OWORD *)v123.m256i_i8;
        v161 = v123.m256i_i64[2];
        *(_QWORD *)(a1 + 24) = v123.m256i_i64[2];
        *(_OWORD *)(a1 + 8) = v109;
      }
      else
      {
        v163 = v115.m256i_i64[3];
        v162 = *(_OWORD *)&v115.m256i_u64[1];
        v155 = v116;
        v156 = v117;
        v157 = v118;
        v158 = v119;
        v159 = v120;
        v150 = *(_OWORD *)&v121[1];
        v151 = *(_OWORD *)v122;
        v152 = *(_OWORD *)&v122[16];
        *(_OWORD *)v153 = *(_OWORD *)&v122[32];
        *(_QWORD *)&v153[14] = *(_QWORD *)&v122[46];
        v143 = *(_OWORD *)&v115.m256i_u64[1];
        v144 = v115.m256i_i64[3];
        if ( (unsigned __int16)(v121[0] - 200) >= 0x64u )
        {
          LOWORD(v160) = v121[0];
          v123.m256i_i64[0] = v115.m256i_i64[0];
          *(_OWORD *)&v123.m256i_u64[1] = v143;
          v123.m256i_i64[3] = v144;
          v124 = v155;
          v125 = v156;
          v126 = v157;
          v127 = v158;
          v128 = v159;
          v129 = v121[0];
          v130 = v150;
          v131 = v151;
          v132 = v152;
          v133[0] = *(_OWORD *)v153;
          *(_QWORD *)((char *)v133 + 14) = *(_QWORD *)&v153[14];
          sub_141276970(&v115, &v123);
          if ( v115.m256i_i64[0] == -1 )
          {
            *(_QWORD *)&v162 = 0;
            *((_QWORD *)&v162 + 1) = 1;
            v163 = 0;
            sub_14028DCE0(v115.m256i_i64[1]);
          }
          else
          {
            v163 = v115.m256i_i64[2];
            v162 = *(_OWORD *)v115.m256i_i8;
          }
          v123.m256i_i64[0] = (__int64)&v160;
          v123.m256i_i64[1] = (__int64)sub_141680990;
          v123.m256i_i64[2] = (__int64)&v162;
          v123.m256i_i64[3] = (__int64)sub_1400015F0;
          sub_1416DAFA0(&v115, &unk_141A383ED, &v123);
          *(_QWORD *)(a1 + 24) = v115.m256i_i64[2];
          *(_OWORD *)(a1 + 8) = *(_OWORD *)v115.m256i_i8;
          *(_QWORD *)a1 = 1;
          if ( (_QWORD)v162 )
            sub_140001660(*((_QWORD *)&v162 + 1), v162, 1);
          goto LABEL_140;
        }
        *(_OWORD *)&v115.m256i_u64[1] = v143;
        v115.m256i_i64[3] = v144;
        v116 = v155;
        v117 = v156;
        v118 = v157;
        v119 = v158;
        v120 = v159;
        *(_OWORD *)&v121[1] = v150;
        *(_OWORD *)v122 = v151;
        *(_OWORD *)&v122[16] = v152;
        *(_OWORD *)&v122[32] = *(_OWORD *)v153;
        *(_QWORD *)&v122[46] = *(_QWORD *)&v153[14];
        sub_1419234B0(&v123, &v115, 136);
        v134 = 0;
        sub_140C485F0(&v162, &v123, *(_QWORD *)&v122[14], *(unsigned int *)&v122[22]);
        v107 = *((_QWORD **)&v162 + 1);
        v108 = v162;
        if ( (_QWORD)v162 == -1 )
        {
          if ( !*((_QWORD *)&v162 + 1) )
          {
            v123.m256i_i16[0] = 5;
            LOBYTE(v105) = 1;
            v107 = (_QWORD *)sub_1403FB7F0(&v123, v105);
          }
        }
        else
        {
          v72 = (__int128 *)v163;
        }
        v165 = *(_QWORD *)&v122[30];
        if ( *(_QWORD *)&v122[30] )
        {
          v164 = *(_DWORD **)&v122[38];
          if ( **(_QWORD **)&v122[38] )
            (**(void (__fastcall ***)(__int64))&v122[38])(v165);
          v105 = *((_QWORD *)v164 + 1);
          if ( v105 )
            sub_140001660(v165, v105, *((_QWORD *)v164 + 2));
        }
        if ( *(_QWORD *)&v122[46] && !_InterlockedDecrement64(*(volatile signed __int64 **)&v122[46]) )
          sub_141258290(&v122[46]);
        if ( v108 != -1 )
        {
          *(_QWORD *)&v160 = v108;
          *((_QWORD *)&v160 + 1) = v107;
          v161 = (__int64)v72;
          if ( !v72 || *v107 == -1 )
          {
            nullsub_1(v106, v105);
            v110 = (void *)sub_140001650(27, 1);
            if ( !v110 )
              sub_14196B2DB(1, 27);
            qmemcpy(v110, "LLM returned empty response", 27);
            *(_QWORD *)(a1 + 8) = 27;
            *(_QWORD *)(a1 + 16) = v110;
            *(_QWORD *)(a1 + 24) = 27;
            *(_QWORD *)a1 = 1;
            if ( !v72 )
              goto LABEL_130;
          }
          else
          {
            sub_1416DB410(&v123, v107);
            v115.m256i_i64[2] = v123.m256i_i64[2];
            *(_OWORD *)v115.m256i_i8 = *(_OWORD *)v123.m256i_i8;
            sub_140751840(v123.m256i_i64, &v115);
            *(_QWORD *)(a1 + 24) = v123.m256i_i64[2];
            *(_OWORD *)(a1 + 8) = *(_OWORD *)v123.m256i_i8;
            *(_QWORD *)a1 = 0;
          }
          v111 = v107 + 1;
          do
          {
            v112 = *(v111 - 1);
            if ( v112 > 0 )
              sub_140001660(*v111, v112, 1);
            v111 += 3;
            v72 = (__int128 *)((char *)v72 - 1);
          }
          while ( v72 );
LABEL_130:
          if ( v108 )
            sub_140001660(v107, 24 * v108, 8);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)v148) )
            sub_141258290(&v148);
          goto LABEL_142;
        }
        *(_QWORD *)&v162 = v107;
        v115.m256i_i64[0] = (__int64)&v162;
        v115.m256i_i64[1] = (__int64)sub_141246C00;
        sub_1416DAFA0(&v123, &unk_141A3B192, &v115);
        sub_14028DCE0(v162);
        v113 = v123.m256i_i64[2];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v123.m256i_i8;
        *(_QWORD *)(a1 + 24) = v113;
      }
      *(_QWORD *)a1 = 1;
LABEL_140:
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v148) )
        sub_141258290(&v148);
      goto LABEL_142;
    }
    if ( v123.m256i_i64[0] )
      sub_140001660(v123.m256i_i64[1], v123.m256i_i64[0], 1);
    sub_14074EF30(a1, v6, a3, a4);
  }
  else
  {
    nullsub_1(v9, v8);
    v31 = (void *)sub_140001650(24, 1);
    if ( !v31 )
      sub_14196B2DB(1, 24);
    qmemcpy(v31, "LLM config is incomplete", 24);
    *(_QWORD *)(a1 + 8) = 24;
    *(_QWORD *)(a1 + 16) = v31;
    *(_QWORD *)(a1 + 24) = 24;
    *(_QWORD *)a1 = 1;
  }
  return a1;
}
