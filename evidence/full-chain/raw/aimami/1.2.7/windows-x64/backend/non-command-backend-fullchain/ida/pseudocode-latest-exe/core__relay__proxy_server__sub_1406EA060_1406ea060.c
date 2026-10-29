// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406ea060 | successor of pre-update 0x140d442b0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
char __fastcall sub_1406EA060(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 *v4; // r12
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rbx
  __int64 (__fastcall **v15)(); // r14
  _BYTE *v16; // r15
  __int64 *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int64 *v24; // rax
  __int64 v25; // rbx
  void (__fastcall *v26)(__m256i *, __int64, __int64); // r12
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r10
  unsigned __int128 v30; // kr00_16
  __int64 v31; // rax
  __int128 *v32; // r14
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int128 v35; // rax
  __int64 v36; // rcx
  _OWORD *v37; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int64 v41; // rdx
  __int64 (__fastcall **v42)(); // r12
  char result; // al
  __int64 v44; // rcx
  bool v45; // cf
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int128 v51; // xmm0
  __int64 v52; // rbx
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  unsigned int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // r13
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rdi
  unsigned __int64 v65; // rdi
  __int128 *v66; // rax
  __int64 v67; // rdx
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  __int64 (__fastcall **v71)(); // rdx
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm2
  __int128 v75; // kr30_16
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 (__fastcall **v78)(); // rdx
  __int64 (__fastcall **v79)(); // rdx
  __int128 *v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r14
  __int64 v85; // r13
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  __int64 (__fastcall **v89)(); // rdx
  __int64 v90; // r14
  void (__fastcall *v91)(unsigned __int64 *, __int64, __int64); // rax
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm2
  __int64 (__fastcall **v95)(); // rdx
  __int64 v96; // r15
  __int64 v97; // rax
  __int64 v98; // r12
  __int64 v99; // r15
  __int64 v100; // rax
  __int64 v101; // rcx
  __int128 v102; // xmm0
  _OWORD *v103; // rax
  __int128 v104; // xmm0
  __int128 v105; // xmm1
  __int64 v106; // rax
  __int128 v107; // xmm0
  __int64 v108; // rdx
  __int64 v109; // r14
  __int64 v110; // r15
  __int64 v111; // r12
  __int64 v112; // rax
  __int64 v113; // r13
  void (__fastcall *v114)(unsigned __int64 *, __int64, __int64); // rax
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm2
  __int64 (__fastcall **v118)(); // rdx
  void (__fastcall *v119)(char *, _QWORD, _QWORD); // rax
  __int128 v120; // xmm0
  __int128 v121; // xmm1
  __int128 v122; // xmm2
  _QWORD v123[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v124; // [rsp+60h] [rbp-20h] BYREF
  _BYTE *v125; // [rsp+70h] [rbp-10h]
  __int64 v126; // [rsp+78h] [rbp-8h]
  __int128 v127; // [rsp+80h] [rbp+0h] BYREF
  __int64 v128; // [rsp+90h] [rbp+10h]
  __int64 v129; // [rsp+98h] [rbp+18h]
  __int128 v130; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v131; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v132; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v133; // [rsp+C0h] [rbp+40h]
  __int64 v134; // [rsp+C8h] [rbp+48h]
  __m256i v135; // [rsp+D0h] [rbp+50h]
  __m512i v136; // [rsp+F0h] [rbp+70h]
  __int128 v137; // [rsp+130h] [rbp+B0h]
  __int128 *v138; // [rsp+140h] [rbp+C0h]
  __int128 v139; // [rsp+148h] [rbp+C8h]
  __int128 v140; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v141; // [rsp+168h] [rbp+E8h]
  __int64 v142; // [rsp+170h] [rbp+F0h]
  __int64 v143; // [rsp+178h] [rbp+F8h]
  __int64 v144; // [rsp+180h] [rbp+100h]
  __int64 v145; // [rsp+188h] [rbp+108h]
  _BYTE v146[31]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v147; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v148; // [rsp+1C0h] [rbp+140h]
  __int128 v149; // [rsp+1D0h] [rbp+150h]
  __int64 v150; // [rsp+1E0h] [rbp+160h]
  __int128 v151; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v152; // [rsp+200h] [rbp+180h]
  __m256i v153; // [rsp+210h] [rbp+190h] BYREF
  __m512i v154; // [rsp+230h] [rbp+1B0h]
  __int128 v155; // [rsp+270h] [rbp+1F0h]
  __int64 v156; // [rsp+280h] [rbp+200h]
  __int64 v157; // [rsp+288h] [rbp+208h]
  __int128 *v158; // [rsp+290h] [rbp+210h]
  char v159; // [rsp+29Eh] [rbp+21Eh]
  char v160; // [rsp+29Fh] [rbp+21Fh]
  __int64 v161; // [rsp+2A0h] [rbp+220h]
  char v162; // [rsp+2ADh] [rbp+22Dh]
  char v163; // [rsp+2AEh] [rbp+22Eh]
  char v164; // [rsp+2AFh] [rbp+22Fh]
  __int64 v165; // [rsp+2B0h] [rbp+230h]

  v165 = -2;
  v4 = a2;
  v6 = *((unsigned __int8 *)a2 + 464);
  v158 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)((char *)a2 + 465) = 0;
      *((_BYTE *)a2 + 467) = 1;
      v7 = a2[1];
      v8 = a2[2];
      v9 = a2[3];
      a2[8] = *a2;
      a2[9] = v7;
      a2[10] = v8;
      a2[11] = v9;
      a2[12] = a2[4];
      a2[13] = a2[5];
      a2[14] = a2[6];
      a2[15] = a2[7];
      v10 = *((_DWORD *)a2 + 58) - 200;
      *((_BYTE *)a2 + 467) = 0;
      if ( (unsigned __int16)v10 <= 0x63u )
      {
        v137 = a2[6];
        *(_OWORD *)&v136.m512i_u64[6] = a2[5];
        *(_OWORD *)&v136.m512i_u64[4] = a2[4];
        v11 = *a2;
        v12 = a2[1];
        v13 = a2[2];
        *(_OWORD *)&v136.m512i_u64[2] = a2[3];
        *(_OWORD *)v136.m512i_i8 = v13;
        *(_OWORD *)&v135.m256i_u64[2] = v12;
        *(_OWORD *)v135.m256i_i8 = v11;
        v14 = *((_QWORD *)a2 + 30);
        v15 = *((__int64 (__fastcall ***)())a2 + 31);
LABEL_119:
        *((_BYTE *)v4 + 467) = 0;
        *(_OWORD *)(a1 + 96) = v137;
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136.m512i_u64[6];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v136.m512i_u64[4];
        v120 = *(_OWORD *)v135.m256i_i8;
        v121 = *(_OWORD *)&v135.m256i_u64[2];
        v122 = *(_OWORD *)v136.m512i_i8;
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v136.m512i_u64[2];
        *(_OWORD *)(a1 + 32) = v122;
        *(_OWORD *)(a1 + 16) = v121;
        *(_OWORD *)a1 = v120;
        *(_QWORD *)(a1 + 112) = v14;
        *(_QWORD *)(a1 + 120) = v15;
        result = 1;
        goto LABEL_120;
      }
      v18 = *((_QWORD *)a2 + 30);
      v19 = *((_QWORD *)v4 + 31);
      *((_BYTE *)v4 + 466) = 1;
      v21 = v4[1];
      v22 = v4[2];
      v23 = v4[3];
      v4[16] = *v4;
      v4[17] = v21;
      v4[18] = v22;
      v4[19] = v23;
      v4[20] = v4[4];
      v4[21] = v4[5];
      v4[22] = v4[6];
      *((_BYTE *)v4 + 465) = 0;
      *((_QWORD *)v4 + 48) = v18;
      *((_QWORD *)v4 + 49) = v19;
      *((_QWORD *)v4 + 50) = 4096;
      v16 = (char *)v4 + 458;
      *((_BYTE *)v4 + 458) = 0;
      v17 = (__int64 *)(v4 + 23);
      v20 = 4096;
LABEL_7:
      *((_QWORD *)v4 + 51) = v20;
      v144 = v18;
      *((_QWORD *)v4 + 46) = v18;
      v143 = v19;
      *((_QWORD *)v4 + 47) = v19;
      *((_WORD *)v4 + 228) = 257;
      *((_QWORD *)v4 + 52) = 0;
      *((_QWORD *)v4 + 53) = 8;
      v4[27] = 0;
LABEL_13:
      *((_QWORD *)v4 + 56) = v17;
      v156 = (__int64)v17;
      v24 = v17;
LABEL_14:
      v25 = *v24;
      v26 = *(void (__fastcall **)(__m256i *, __int64, __int64))(v24[1] + 24);
      break;
    case 1LL:
      sub_14196B990(&off_141A39CB8);
    case 2LL:
      sub_14196B9B0(&off_141A39CB8);
    case 3LL:
      v16 = (char *)a2 + 458;
      v17 = (__int64 *)(a2 + 23);
      switch ( *((_BYTE *)a2 + 458) )
      {
        case 0:
          v18 = *((_QWORD *)a2 + 48);
          v19 = *((_QWORD *)v4 + 49);
          v20 = *((_QWORD *)v4 + 50);
          goto LABEL_7;
        case 1:
          v138 = a2 + 23;
          sub_14196B990(&off_141A39E48);
        case 2:
          v138 = a2 + 23;
          sub_14196B9B0(&off_141A39E48);
        case 3:
          v156 = (__int64)(a2 + 23);
          v24 = *((__int64 **)a2 + 56);
          goto LABEL_14;
      }
  }
  while ( 1 )
  {
    v26(&v153, v25, a3);
    if ( v153.m256i_i64[0] == -3 )
    {
      v32 = v158;
      v33 = *((_QWORD *)v158 + 55);
      if ( v33 < 0 )
      {
        v34 = 0;
        goto LABEL_22;
      }
      v125 = v16;
      if ( v33 )
      {
        nullsub_1(-3, v27);
        v34 = 1;
        v53 = sub_140001650(v33, 1);
        if ( !v53 )
LABEL_22:
          sub_14196B2DB(v34, v33);
      }
      else
      {
        v53 = 1;
      }
      _BitScanReverse64(&v54, (unsigned __int64)v33 >> 10);
      v55 = (v54 ^ 0xFFFFFFFFFFFFFFC0uLL) + 65;
      v56 = 7;
      if ( v55 < 7 )
        v56 = v55;
      v151 = (unsigned __int64)v53;
      *(_QWORD *)&v152 = v33;
      *((_QWORD *)&v152 + 1) = 4LL * v56 + 1;
      *((_BYTE *)v32 + 457) = 0;
      v57 = *((_QWORD *)v32 + 52);
      v58 = *((_QWORD *)v32 + 53);
      v59 = v58 + 32LL * *((_QWORD *)v32 + 54);
      *(_QWORD *)&v147 = v58;
      *((_QWORD *)&v147 + 1) = v58;
      v145 = v57;
      *(_QWORD *)&v148 = v57;
      *((_QWORD *)&v148 + 1) = v59;
      v129 = v58;
      if ( v58 == v59 )
      {
LABEL_51:
        v60 = v59;
      }
      else
      {
        while ( 1 )
        {
          v60 = v58 + 32;
          *((_QWORD *)&v147 + 1) = v58 + 32;
          v61 = *(_QWORD *)v58;
          *(_QWORD *)&v146[16] = *(_QWORD *)(v58 + 24);
          *(_OWORD *)v146 = *(_OWORD *)(v58 + 8);
          if ( !v61 )
            break;
          v153.m256i_i64[0] = v61;
          v153.m256i_i64[3] = *(_QWORD *)&v146[16];
          *(_OWORD *)&v153.m256i_u64[1] = *(_OWORD *)v146;
          v62 = *((_QWORD *)&v151 + 1);
          if ( *(_QWORD *)&v146[8] > (_QWORD)v152 - *((_QWORD *)&v151 + 1) )
          {
            LOBYTE(v28) = 1;
            sub_141683830(&v151, v153.m256i_i64[2], v28);
            v62 = *((_QWORD *)&v151 + 1);
          }
          sub_1419234B0(v151 + v62, *(_QWORD *)v146, *(_QWORD *)&v146[8]);
          if ( *(_QWORD *)&v146[8] > (_QWORD)v152 - *((_QWORD *)&v151 + 1) )
          {
            *(_QWORD *)&v130 = *(_QWORD *)&v146[8];
            *((_QWORD *)&v130 + 1) = v152 - *((_QWORD *)&v151 + 1);
            sub_141968990(&v130);
          }
          *((_QWORD *)&v151 + 1) += *(_QWORD *)&v146[8];
          (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v153.m256i_i64[0] + 32))(
            &v153.m256i_u64[3],
            v153.m256i_i64[1],
            v153.m256i_i64[2]);
          v58 = v60;
          if ( v60 == v59 )
            goto LABEL_51;
        }
      }
      v161 = (unsigned __int64)(v59 - v60) >> 5;
      v126 = v60;
      v63 = v60 + 24;
      v157 = 0;
      v16 = v125;
      while ( v161 != v157 )
      {
        ++v157;
        v64 = v63 + 32;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v63 - 24) + 32LL))(
          v63,
          *(_QWORD *)(v63 - 16),
          *(_QWORD *)(v63 - 8));
        v63 = v64;
      }
      if ( v145 )
        sub_140001660(v129, 32 * v145, 8);
      v15 = *((__int64 (__fastcall ***)())&v151 + 1);
      v14 = v151;
      a3 = *((_QWORD *)&v152 + 1);
      if ( (BYTE8(v152) & 1) != 0 )
      {
        v65 = *((_QWORD *)&v152 + 1) >> 5;
        *(_QWORD *)v146 = (*((_QWORD *)&v152 + 1) >> 5) + v152;
        *(_QWORD *)&v146[8] = v151 - (*((_QWORD *)&v152 + 1) >> 5);
        *(_QWORD *)&v146[16] = (*((_QWORD *)&v152 + 1) >> 5) + *((_QWORD *)&v151 + 1);
        v163 = 0;
        sub_141683650(&v147, v146);
        v132 = v65;
        v15 = (__int64 (__fastcall **)())(v148 - v65);
        if ( (unsigned __int64)v148 < v65 )
        {
          v157 = v148;
          *(_QWORD *)&v130 = v148;
          v153.m256i_i64[0] = (__int64)&v132;
          v153.m256i_i64[1] = (__int64)sub_14018AA80;
          v153.m256i_i64[2] = (__int64)&v130;
          v153.m256i_i64[3] = (__int64)sub_14018AA80;
          sub_14196B850(&unk_141A41113, &v153, &off_141A411A8);
        }
        v42 = (__int64 (__fastcall **)())v147;
        v14 = *((_QWORD *)&v147 + 1) + v65;
        a3 = *((_QWORD *)&v148 + 1);
      }
      else
      {
        v42 = off_1422401D0;
      }
      v66 = v158;
      *((_BYTE *)v158 + 457) = 0;
      v157 = *((_QWORD *)v66 + 46);
      v161 = *((_QWORD *)v66 + 47);
      if ( *(_QWORD *)v161 )
        (*(void (__fastcall **)(__int64))v161)(v157);
      v67 = *(_QWORD *)(v161 + 8);
      if ( v67 )
        sub_140001660(v157, v67, *(_QWORD *)(v161 + 16));
      *((_BYTE *)v158 + 456) = 0;
LABEL_66:
      *v16 = 1;
      v142 = v144;
      v141 = v143;
      sub_1406BA640(v156);
      if ( !v42 )
      {
        v4 = v158;
        *((_BYTE *)v158 + 466) = 0;
        v137 = v4[22];
        *(_OWORD *)&v136.m512i_u64[6] = v4[21];
        *(_OWORD *)&v136.m512i_u64[4] = v4[20];
        v72 = v4[16];
        v73 = v4[17];
        v74 = v4[18];
        *(_OWORD *)&v136.m512i_u64[2] = v4[19];
        *(_OWORD *)v136.m512i_i8 = v74;
        *(_OWORD *)&v135.m256i_u64[2] = v73;
        *(_OWORD *)v135.m256i_i8 = v72;
        goto LABEL_118;
      }
      *(_QWORD *)&v139 = v42;
      *((_QWORD *)&v139 + 1) = v14;
      *(_QWORD *)&v140 = v15;
      *((_QWORD *)&v140 + 1) = a3;
      v162 = 1;
      sub_1416E2AB0(&v153, v14, v15);
      if ( v153.m256i_i32[0] == 1 )
      {
        v4 = v158;
        *((_BYTE *)v158 + 466) = 0;
        v155 = v4[22];
        *(_OWORD *)&v154.m512i_u64[6] = v4[21];
        *(_OWORD *)&v154.m512i_u64[4] = v4[20];
        v68 = v4[16];
        v69 = v4[17];
        v70 = v4[18];
        *(_OWORD *)&v154.m512i_u64[2] = v4[19];
        *(_OWORD *)v154.m512i_i8 = v70;
        *(_OWORD *)&v153.m256i_u64[2] = v69;
        *(_OWORD *)v153.m256i_i8 = v68;
        v148 = v140;
        v147 = v139;
        v14 = sub_1411E71E0(&v147);
        v15 = v71;
        v135 = v153;
        v136 = v154;
        v137 = v155;
LABEL_118:
        *(_WORD *)((char *)v4 + 465) = 0;
        goto LABEL_119;
      }
      v75 = *(_OWORD *)&v153.m256i_u64[1];
      v124 = *(_OWORD *)&v153.m256i_u64[1];
      LOWORD(v151) = *((_WORD *)v158 + 180);
      *(_QWORD *)&v147 = &v151;
      *((_QWORD *)&v147 + 1) = sub_1416EA1B0;
      v162 = 1;
      sub_1416DAFA0(&v153, &unk_141A39CD0, &v147);
      v127 = *(_OWORD *)v153.m256i_i8;
      v128 = v153.m256i_i64[2];
      *(_OWORD *)v153.m256i_i8 = v75;
      *(_OWORD *)&v153.m256i_u64[2] = 0;
      *(_OWORD *)v154.m512i_i8 = v75;
      v164 = 1;
      sub_140D8B500(&v151, (__int128 *)v153.m256i_i8);
      LOBYTE(v157) = v151;
      if ( (_BYTE)v151 == 0xFF )
      {
        v153.m256i_i64[0] = (__int64)&v127;
        v153.m256i_i64[1] = (__int64)sub_1400015F0;
        v153.m256i_i64[2] = (__int64)&v124;
        v153.m256i_i64[3] = (__int64)sub_140191200;
        sub_1416DAFA0(&v147, &unk_141A3936B, &v153);
        v156 = *((_QWORD *)&v147 + 1);
        v161 = v147;
        v77 = sub_1409F85C0(*((_QWORD *)&v147 + 1), v148);
        v15 = v79;
        if ( v161 )
          sub_140001660(v156, v161, 1);
        v164 = 1;
        sub_140032F30((char *)&v151 + 8);
      }
      else
      {
        v148 = v152;
        v147 = v151;
        v76 = sub_14166BC00(&v147, aErrorMessage_0, 14);
        if ( v76 && *(_BYTE *)v76 == 3 )
        {
          v130 = *(_OWORD *)(v76 + 16);
          v153.m256i_i64[0] = (__int64)&v127;
          v153.m256i_i64[1] = (__int64)sub_1400015F0;
          v153.m256i_i64[2] = (__int64)&v130;
          v153.m256i_i64[3] = (__int64)sub_140191200;
          sub_1416DAFA0(v146, &unk_141A3936B, &v153);
          v161 = *(_QWORD *)&v146[8];
          v77 = sub_1409F85C0(*(_QWORD *)&v146[8], *(_QWORD *)&v146[16]);
          v15 = v78;
          if ( *(_QWORD *)v146 )
            sub_140001660(v161, *(_QWORD *)v146, 1);
        }
        else
        {
          v77 = 0;
        }
        sub_1406C0ED0(&v147);
      }
      v80 = v158 + 16;
      if ( !v77 )
      {
        *((_BYTE *)v158 + 466) = 0;
        v155 = v80[6];
        *(_OWORD *)&v154.m512i_u64[6] = v80[5];
        *(_OWORD *)&v154.m512i_u64[4] = v80[4];
        v86 = *v80;
        v87 = v80[1];
        v88 = v80[2];
        *(_OWORD *)&v154.m512i_u64[2] = v80[3];
        *(_OWORD *)v154.m512i_i8 = v88;
        *(_OWORD *)&v153.m256i_u64[2] = v87;
        *(_OWORD *)v153.m256i_i8 = v86;
        v148 = v140;
        v147 = v139;
        v14 = sub_1411E71E0(&v147);
        v15 = v89;
        v135 = v153;
        v136 = v154;
        v137 = v155;
LABEL_113:
        if ( (_QWORD)v127 )
          sub_140001660(*((_QWORD *)&v127 + 1), v127, 1);
        if ( v77 )
        {
          v119 = *(void (__fastcall **)(char *, _QWORD, _QWORD))(v139 + 32);
          v142 = v144;
          v141 = v143;
          v119((char *)&v140 + 8, *((_QWORD *)&v139 + 1), v140);
        }
        v4 = v158;
        goto LABEL_118;
      }
      v123[0] = v77;
      v123[1] = v15;
      *(_OWORD *)v153.m256i_i8 = v75;
      *(_OWORD *)&v153.m256i_u64[2] = 0;
      *(_OWORD *)v154.m512i_i8 = v75;
      v164 = 1;
      sub_140D8B500(&v151, (__int128 *)v153.m256i_i8);
      LOBYTE(v157) = v151;
      if ( (_BYTE)v151 == 0xFF )
      {
        v153.m256i_i64[0] = (__int64)&v124;
        v153.m256i_i64[1] = (__int64)sub_140191200;
        v153.m256i_i64[2] = (__int64)v123;
        v153.m256i_i64[3] = (__int64)sub_140191200;
        sub_1416DAFA0(&v147, &unk_141A39CE0, &v153);
        v156 = *((_QWORD *)&v147 + 1);
        v161 = v147;
        v90 = v148;
        v159 = 1;
        sub_140651690(&v153, v80);
        if ( v154.m512i_i8[0] != 2 )
        {
          v91 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v153.m256i_i64[0] + 32);
          v159 = 1;
          v91(&v153.m256i_u64[3], v153.m256i_i64[1], v153.m256i_i64[2]);
        }
        *((_BYTE *)v158 + 466) = 0;
        v155 = v80[6];
        *(_OWORD *)&v154.m512i_u64[6] = v80[5];
        *(_OWORD *)&v154.m512i_u64[4] = v80[4];
        v92 = *v80;
        v93 = v80[1];
        v94 = v80[2];
        *(_OWORD *)&v154.m512i_u64[2] = v80[3];
        *(_OWORD *)v154.m512i_i8 = v94;
        *(_OWORD *)&v153.m256i_u64[2] = v93;
        *(_OWORD *)v153.m256i_i8 = v92;
        *(_QWORD *)&v147 = v161;
        *((_QWORD *)&v147 + 1) = v156;
        *(_QWORD *)&v148 = v90;
        v14 = sub_1411E70E0(&v147);
        v15 = v95;
        v135 = v153;
        v136 = v154;
        v137 = v155;
        v164 = 1;
        sub_140032F30((char *)&v151 + 8);
        goto LABEL_113;
      }
      v148 = v152;
      v147 = v151;
      v81 = sub_14166BC00(&v147, aErrorMessage_0, 14);
      if ( v81 && *(_BYTE *)v81 == 3 )
      {
        v84 = *(_QWORD *)(v81 + 24);
        if ( v84 < 0 )
        {
          v85 = 0;
          goto LABEL_86;
        }
        v161 = v81;
        if ( v84 )
        {
          v96 = *(_QWORD *)(v81 + 16);
          nullsub_1(v83, v82);
          v85 = 1;
          v97 = sub_140001650(v84, 1);
          if ( !v97 )
LABEL_86:
            sub_14196B2DB(v85, v84);
          v98 = v97;
          sub_1419234B0(v97, v96, v84);
          v99 = v161;
        }
        else
        {
          v99 = v81;
          v98 = 1;
        }
        v132 = v84;
        v133 = v98;
        v134 = v84;
        v153.m256i_i64[0] = (__int64)&v132;
        v153.m256i_i64[1] = (__int64)sub_1400015F0;
        v153.m256i_i64[2] = (__int64)v123;
        v153.m256i_i64[3] = (__int64)sub_140191200;
        sub_1416DAFA0(&v130, &unk_141A39CE0, &v153);
        *(_OWORD *)&v146[7] = v130;
        *(_QWORD *)&v146[23] = v131;
        sub_1406C0ED0(v99);
        v106 = v161;
        *(_BYTE *)v161 = 3;
        v107 = *(_OWORD *)v146;
        *(_OWORD *)(v106 + 16) = *(_OWORD *)&v146[15];
        *(_OWORD *)(v106 + 1) = v107;
        if ( v132 )
          sub_140001660(v133, v132, 1);
      }
      sub_1406C4ED0(&v153, &v147);
      if ( v153.m256i_i64[0] != -1 )
      {
        v156 = v153.m256i_i64[1];
        v161 = v153.m256i_i64[0];
        v109 = v153.m256i_i64[2];
LABEL_110:
        v160 = 1;
        sub_140651690(&v153, v80);
        if ( v154.m512i_i8[0] != 2 )
        {
          v114 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v153.m256i_i64[0] + 32);
          v160 = 1;
          v114(&v153.m256i_u64[3], v153.m256i_i64[1], v153.m256i_i64[2]);
        }
        *((_BYTE *)v158 + 466) = 0;
        v155 = v80[6];
        *(_OWORD *)&v154.m512i_u64[6] = v80[5];
        *(_OWORD *)&v154.m512i_u64[4] = v80[4];
        v115 = *v80;
        v116 = v80[1];
        v117 = v80[2];
        *(_OWORD *)&v154.m512i_u64[2] = v80[3];
        *(_OWORD *)v154.m512i_i8 = v117;
        *(_OWORD *)&v153.m256i_u64[2] = v116;
        *(_OWORD *)v153.m256i_i8 = v115;
        *(_QWORD *)v146 = v161;
        *(_QWORD *)&v146[8] = v156;
        *(_QWORD *)&v146[16] = v109;
        v14 = sub_1411E6A40(v146);
        v15 = v118;
        v135 = v153;
        v136 = v154;
        v137 = v155;
        sub_1406C0ED0(&v147);
        goto LABEL_113;
      }
      v110 = *((_QWORD *)&v139 + 1);
      v109 = v140;
      *(_QWORD *)v146 = v153.m256i_i64[1];
      if ( (__int64)v140 < 0 )
      {
        v111 = 0;
        goto LABEL_104;
      }
      if ( (_QWORD)v140 )
      {
        nullsub_1(v153.m256i_i64[0], v108);
        v111 = 1;
        v112 = sub_140001650(v109, 1);
        if ( !v112 )
LABEL_104:
          sub_14196B2DB(v111, v109);
        v113 = v112;
        sub_1419234B0(v112, v110, v109);
      }
      else
      {
        v113 = 1;
      }
      sub_140032F30(v146);
      v156 = v113;
      v161 = v109;
      goto LABEL_110;
    }
    if ( v153.m256i_i32[0] == 3 )
      break;
    if ( v153.m256i_i32[0] == -2 )
    {
      v30 = *(_OWORD *)&v153.m256i_u64[1];
      goto LABEL_24;
    }
    v29 = v153.m256i_i64[1];
    v30 = *(_OWORD *)&v153.m256i_u64[2];
    v31 = v154.m512i_i64[0];
    v147 = *(_OWORD *)&v154.m512i_u64[1];
    v148 = *(_OWORD *)&v154.m512i_u64[3];
    v149 = *(_OWORD *)&v154.m512i_u64[5];
    v150 = v154.m512i_i64[7];
    if ( v153.m256i_i32[0] == -1 )
    {
      if ( v153.m256i_i64[1] )
      {
        v4 = v158;
        v44 = *((_QWORD *)v158 + 55);
        v45 = __CFADD__(v153.m256i_i64[3], v44);
        v46 = v153.m256i_i64[3] + v44;
        v47 = -1;
        if ( !v45 )
          v47 = v46;
        *((_QWORD *)v158 + 55) = v47;
        v145 = v29;
        v153.m256i_i64[0] = v29;
        v161 = v30;
        v157 = v30 >> 64;
        v153.m256i_i64[1] = v30;
        v153.m256i_i64[2] = *((_QWORD *)&v30 + 1);
        v153.m256i_i64[3] = v31;
        v48 = *((_QWORD *)v4 + 54);
        if ( v48 == *((_QWORD *)v4 + 52) )
          sub_1419397B0(v4 + 26);
        v49 = *((_QWORD *)v4 + 53);
        v50 = 32 * v48;
        v51 = *(_OWORD *)v153.m256i_i8;
        *(_OWORD *)(v49 + v50 + 16) = *(_OWORD *)&v153.m256i_u64[2];
        *(_OWORD *)(v49 + v50) = v51;
        v52 = v48 + 1;
        *((_QWORD *)v4 + 54) = v52;
        if ( *((_QWORD *)v4 + 55) <= *((_QWORD *)v4 + 51) )
        {
          v17 = (__int64 *)v156;
          goto LABEL_13;
        }
        v100 = *((_QWORD *)v4 + 52);
        v101 = *((_QWORD *)v4 + 53);
        *((_WORD *)v4 + 228) = 0;
        v102 = v4[23];
        v153.m256i_i64[3] = v101;
        v154.m512i_i64[0] = v100;
        v154.m512i_i64[1] = v101 + 32 * v52;
        *(_OWORD *)v153.m256i_i8 = v102;
        v153.m256i_i64[2] = v101;
        nullsub_1(v101, v47);
        v103 = (_OWORD *)sub_140001650(48, 8);
        if ( !v103 )
          sub_14196B2C1(8, 48);
        v14 = (__int64)v103;
        v104 = *(_OWORD *)v153.m256i_i8;
        v105 = *(_OWORD *)&v153.m256i_u64[2];
        v103[2] = *(_OWORD *)v154.m512i_i8;
        v103[1] = v105;
        *v103 = v104;
        v15 = &off_141A37CD8;
        *((_BYTE *)v4 + 457) = 0;
        if ( !*((_BYTE *)v4 + 456) )
        {
LABEL_30:
          *((_BYTE *)v4 + 456) = 0;
          v42 = nullptr;
          goto LABEL_66;
        }
LABEL_26:
        v157 = *((_QWORD *)v4 + 46);
        v161 = *((_QWORD *)v4 + 47);
        if ( *(_QWORD *)v161 )
          (*(void (__fastcall **)(__int64))v161)(v157);
        v41 = *(_QWORD *)(v161 + 8);
        v4 = v158;
        if ( v41 )
          sub_140001660(v157, v41, *(_QWORD *)(v161 + 16));
        goto LABEL_30;
      }
LABEL_24:
      v4 = v158;
      *((_BYTE *)v158 + 457) = 0;
      *(_QWORD *)&v35 = *((_QWORD *)v4 + 52);
      v36 = *((_QWORD *)v4 + 53);
      *((_QWORD *)&v35 + 1) = v36 + 32LL * *((_QWORD *)v4 + 54);
      v153.m256i_i8[24] = 0;
      v154.m512i_i64[0] = v36;
      v154.m512i_i64[1] = v36;
      *(_OWORD *)&v154.m512i_u64[2] = v35;
      v153.m256i_i64[0] = 1;
      *(_OWORD *)&v153.m256i_u64[1] = v30;
      nullsub_1(v36, *((_QWORD *)&v35 + 1));
      v37 = (_OWORD *)sub_140001650(64, 8);
      if ( !v37 )
        sub_14196B2C1(8, 64);
      v14 = (__int64)v37;
      v38 = *(_OWORD *)v153.m256i_i8;
      v39 = *(_OWORD *)&v153.m256i_u64[2];
      v40 = *(_OWORD *)v154.m512i_i8;
      v37[3] = *(_OWORD *)&v154.m512i_u64[2];
      v37[2] = v40;
      v37[1] = v39;
      *v37 = v38;
      v15 = &off_141A37CA8;
      *((_BYTE *)v4 + 457) = 0;
      if ( !*((_BYTE *)v4 + 456) )
        goto LABEL_30;
      goto LABEL_26;
    }
    v154.m512i_i64[7] = v150;
    *(_OWORD *)&v154.m512i_u64[5] = v149;
    *(_OWORD *)&v154.m512i_u64[3] = v148;
    *(_OWORD *)&v154.m512i_u64[1] = v147;
    sub_1400366B0(&v153);
  }
  *v16 = 3;
  *(_QWORD *)a1 = -1;
  result = 3;
  v4 = v158;
LABEL_120:
  *((_BYTE *)v4 + 464) = result;
  return result;
}
