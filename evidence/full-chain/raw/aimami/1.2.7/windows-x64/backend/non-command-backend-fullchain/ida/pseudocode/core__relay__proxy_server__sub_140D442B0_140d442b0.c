// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d442b0 | name sub_140D442B0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D442B0(__int64 a1, __int128 *a2, __int64 a3)
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
  __int64 v27; // r8
  __int64 v28; // r10
  unsigned __int128 v29; // kr00_16
  __int64 v30; // rax
  __int128 *v31; // r14
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int128 v34; // rax
  __int64 v35; // rcx
  _OWORD *v36; // rax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int64 v40; // rdx
  __int64 (__fastcall **v41)(); // r12
  char result; // al
  __int64 v43; // rcx
  bool v44; // cf
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int128 v50; // xmm0
  __int64 v51; // rbx
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // r15
  __int64 v59; // r13
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rdi
  unsigned __int64 v64; // rdi
  __int128 *v65; // rax
  __int64 v66; // rdx
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int64 (__fastcall **v70)(); // rdx
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int128 v74; // kr30_16
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 (__fastcall **v77)(); // rdx
  __int64 (__fastcall **v78)(); // rdx
  __int128 *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  signed __int64 v82; // r14
  __int64 v83; // r13
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  __int64 (__fastcall **v87)(); // rdx
  __int64 v88; // r14
  void (__fastcall *v89)(unsigned __int64 *, __int64, __int64); // rax
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm2
  __int64 (__fastcall **v93)(); // rdx
  const __m128i *v94; // r15
  __m128i *v95; // rax
  __int64 v96; // r12
  __int64 v97; // r15
  __int64 v98; // rax
  __int64 v99; // rcx
  __int128 v100; // xmm0
  _OWORD *v101; // rax
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int64 v104; // rax
  __int128 v105; // xmm0
  unsigned __int64 v106; // r14
  const __m128i *v107; // r15
  __int64 v108; // r12
  __m128i *v109; // rax
  __int64 v110; // r13
  void (__fastcall *v111)(unsigned __int64 *, __int64, __int64); // rax
  __int128 v112; // xmm0
  __int128 v113; // xmm1
  __int128 v114; // xmm2
  __int64 (__fastcall **v115)(); // rdx
  void (__fastcall *v116)(char *, _QWORD, _QWORD); // rax
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  __int128 v119; // xmm2
  _QWORD v120[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v121; // [rsp+60h] [rbp-20h] BYREF
  _BYTE *v122; // [rsp+70h] [rbp-10h]
  __int64 v123; // [rsp+78h] [rbp-8h]
  __int128 v124; // [rsp+80h] [rbp+0h] BYREF
  __int64 v125; // [rsp+90h] [rbp+10h]
  __int64 v126; // [rsp+98h] [rbp+18h]
  __int128 v127; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v128; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v129; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v130; // [rsp+C0h] [rbp+40h]
  signed __int64 v131; // [rsp+C8h] [rbp+48h]
  __m256i v132; // [rsp+D0h] [rbp+50h]
  __m512i v133; // [rsp+F0h] [rbp+70h]
  __int128 v134; // [rsp+130h] [rbp+B0h]
  __int128 *v135; // [rsp+140h] [rbp+C0h]
  __int128 v136; // [rsp+148h] [rbp+C8h]
  __int128 v137; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v138; // [rsp+168h] [rbp+E8h]
  __int64 v139; // [rsp+170h] [rbp+F0h]
  __int64 v140; // [rsp+178h] [rbp+F8h]
  __int64 v141; // [rsp+180h] [rbp+100h]
  __int64 v142; // [rsp+188h] [rbp+108h]
  _BYTE v143[31]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v144; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v145; // [rsp+1C0h] [rbp+140h]
  __int128 v146; // [rsp+1D0h] [rbp+150h]
  __int64 v147; // [rsp+1E0h] [rbp+160h]
  __int128 v148; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v149; // [rsp+200h] [rbp+180h]
  __m256i v150; // [rsp+210h] [rbp+190h] BYREF
  __m512i v151; // [rsp+230h] [rbp+1B0h]
  __int128 v152; // [rsp+270h] [rbp+1F0h]
  __int64 *v153; // [rsp+280h] [rbp+200h]
  __int64 v154; // [rsp+288h] [rbp+208h]
  __int128 *v155; // [rsp+290h] [rbp+210h]
  char v156; // [rsp+29Eh] [rbp+21Eh]
  char v157; // [rsp+29Fh] [rbp+21Fh]
  __int64 v158; // [rsp+2A0h] [rbp+220h]
  char v159; // [rsp+2ADh] [rbp+22Dh]
  char v160; // [rsp+2AEh] [rbp+22Eh]
  char v161; // [rsp+2AFh] [rbp+22Fh]
  __int64 v162; // [rsp+2B0h] [rbp+230h]

  v162 = -2;
  v4 = a2;
  v6 = *((unsigned __int8 *)a2 + 464);
  v155 = a2;
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
        v134 = a2[6];
        *(_OWORD *)&v133.m512i_u64[6] = a2[5];
        *(_OWORD *)&v133.m512i_u64[4] = a2[4];
        v11 = *a2;
        v12 = a2[1];
        v13 = a2[2];
        *(_OWORD *)&v133.m512i_u64[2] = a2[3];
        *(_OWORD *)v133.m512i_i8 = v13;
        *(_OWORD *)&v132.m256i_u64[2] = v12;
        *(_OWORD *)v132.m256i_i8 = v11;
        v14 = *((_QWORD *)a2 + 30);
        v15 = *((__int64 (__fastcall ***)())a2 + 31);
LABEL_119:
        *((_BYTE *)v4 + 467) = 0;
        *(_OWORD *)(a1 + 96) = v134;
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v133.m512i_u64[6];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v133.m512i_u64[4];
        v117 = *(_OWORD *)v132.m256i_i8;
        v118 = *(_OWORD *)&v132.m256i_u64[2];
        v119 = *(_OWORD *)v133.m512i_i8;
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v133.m512i_u64[2];
        *(_OWORD *)(a1 + 32) = v119;
        *(_OWORD *)(a1 + 16) = v118;
        *(_OWORD *)a1 = v117;
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
      v141 = v18;
      *((_QWORD *)v4 + 46) = v18;
      v140 = v19;
      *((_QWORD *)v4 + 47) = v19;
      *((_WORD *)v4 + 228) = 257;
      *((_QWORD *)v4 + 52) = 0;
      *((_QWORD *)v4 + 53) = 8;
      v4[27] = 0;
LABEL_13:
      *((_QWORD *)v4 + 56) = v17;
      v153 = v17;
      v24 = v17;
LABEL_14:
      v25 = *v24;
      v26 = *(void (__fastcall **)(__m256i *, __int64, __int64))(v24[1] + 24);
      break;
    case 1LL:
      sub_1419393E0(&off_141A482A8);
    case 2LL:
      sub_141939400(&off_141A482A8);
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
          v135 = a2 + 23;
          sub_1419393E0(&off_141A48450);
        case 2:
          v135 = a2 + 23;
          sub_141939400(&off_141A48450);
        case 3:
          v153 = (__int64 *)(a2 + 23);
          v24 = *((__int64 **)a2 + 56);
          goto LABEL_14;
      }
  }
  while ( 1 )
  {
    v26(&v150, v25, a3);
    if ( v150.m256i_i64[0] == -3 )
    {
      v31 = v155;
      v32 = *((_QWORD *)v155 + 55);
      if ( v32 < 0 )
      {
        v33 = 0;
        goto LABEL_22;
      }
      v122 = v16;
      if ( v32 )
      {
        nullsub_1(-3);
        v33 = 1;
        v52 = sub_140001650(v32, 1);
        if ( !v52 )
LABEL_22:
          sub_141938D2B(v33, v32);
      }
      else
      {
        v52 = 1;
      }
      _BitScanReverse64(&v53, (unsigned __int64)v32 >> 10);
      v54 = (v53 ^ 0xFFFFFFFFFFFFFFC0uLL) + 65;
      v55 = 7;
      if ( v54 < 7 )
        v55 = v54;
      v148 = (unsigned __int64)v52;
      *(_QWORD *)&v149 = v32;
      *((_QWORD *)&v149 + 1) = 4LL * v55 + 1;
      *((_BYTE *)v31 + 457) = 0;
      v56 = *((_QWORD *)v31 + 52);
      v57 = *((_QWORD *)v31 + 53);
      v58 = v57 + 32LL * *((_QWORD *)v31 + 54);
      *(_QWORD *)&v144 = v57;
      *((_QWORD *)&v144 + 1) = v57;
      v142 = v56;
      *(_QWORD *)&v145 = v56;
      *((_QWORD *)&v145 + 1) = v58;
      v126 = v57;
      if ( v57 == v58 )
      {
LABEL_51:
        v59 = v58;
      }
      else
      {
        while ( 1 )
        {
          v59 = v57 + 32;
          *((_QWORD *)&v144 + 1) = v57 + 32;
          v60 = *(_QWORD *)v57;
          *(_QWORD *)&v143[16] = *(_QWORD *)(v57 + 24);
          *(_OWORD *)v143 = *(_OWORD *)(v57 + 8);
          if ( !v60 )
            break;
          v150.m256i_i64[0] = v60;
          v150.m256i_i64[3] = *(_QWORD *)&v143[16];
          *(_OWORD *)&v150.m256i_u64[1] = *(_OWORD *)v143;
          v61 = *((_QWORD *)&v148 + 1);
          if ( *(_QWORD *)&v143[8] > (_QWORD)v149 - *((_QWORD *)&v148 + 1) )
          {
            LOBYTE(v27) = 1;
            sub_141654860(&v148, v150.m256i_i64[2], v27);
            v61 = *((_QWORD *)&v148 + 1);
          }
          sub_1418F44E0((__m128i *)(v148 + v61), *(const __m128i **)v143, *(unsigned __int64 *)&v143[8]);
          if ( *(_QWORD *)&v143[8] > (_QWORD)v149 - *((_QWORD *)&v148 + 1) )
          {
            *(_QWORD *)&v127 = *(_QWORD *)&v143[8];
            *((_QWORD *)&v127 + 1) = v149 - *((_QWORD *)&v148 + 1);
            sub_1419363E0(&v127);
          }
          *((_QWORD *)&v148 + 1) += *(_QWORD *)&v143[8];
          (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v150.m256i_i64[0] + 32))(
            &v150.m256i_u64[3],
            v150.m256i_i64[1],
            v150.m256i_i64[2]);
          v57 = v59;
          if ( v59 == v58 )
            goto LABEL_51;
        }
      }
      v158 = (unsigned __int64)(v58 - v59) >> 5;
      v123 = v59;
      v62 = v59 + 24;
      v154 = 0;
      v16 = v122;
      while ( v158 != v154 )
      {
        ++v154;
        v63 = v62 + 32;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v62 - 24) + 32LL))(
          v62,
          *(_QWORD *)(v62 - 16),
          *(_QWORD *)(v62 - 8));
        v62 = v63;
      }
      if ( v142 )
        sub_140001660(v126, 32 * v142, 8);
      v15 = *((__int64 (__fastcall ***)())&v148 + 1);
      v14 = v148;
      a3 = *((_QWORD *)&v149 + 1);
      if ( (BYTE8(v149) & 1) != 0 )
      {
        v64 = *((_QWORD *)&v149 + 1) >> 5;
        *(_QWORD *)v143 = (*((_QWORD *)&v149 + 1) >> 5) + v149;
        *(_QWORD *)&v143[8] = v148 - (*((_QWORD *)&v149 + 1) >> 5);
        *(_QWORD *)&v143[16] = (*((_QWORD *)&v149 + 1) >> 5) + *((_QWORD *)&v148 + 1);
        v160 = 0;
        sub_141654680(&v144, v143);
        v129 = v64;
        v15 = (__int64 (__fastcall **)())(v145 - v64);
        if ( (unsigned __int64)v145 < v64 )
        {
          v154 = v145;
          *(_QWORD *)&v127 = v145;
          v150.m256i_i64[0] = (__int64)&v129;
          v150.m256i_i64[1] = (__int64)sub_140185A90;
          v150.m256i_i64[2] = (__int64)&v127;
          v150.m256i_i64[3] = (__int64)sub_140185A90;
          sub_1419392A0(&unk_141A4EA82, &v150, &off_141A4EB10);
        }
        v41 = (__int64 (__fastcall **)())v144;
        v14 = *((_QWORD *)&v144 + 1) + v64;
        a3 = *((_QWORD *)&v145 + 1);
      }
      else
      {
        v41 = off_1421E7180;
      }
      v65 = v155;
      *((_BYTE *)v155 + 457) = 0;
      v154 = *((_QWORD *)v65 + 46);
      v158 = *((_QWORD *)v65 + 47);
      if ( *(_QWORD *)v158 )
        (*(void (__fastcall **)(__int64))v158)(v154);
      v66 = *(_QWORD *)(v158 + 8);
      if ( v66 )
        sub_140001660(v154, v66, *(_QWORD *)(v158 + 16));
      *((_BYTE *)v155 + 456) = 0;
LABEL_66:
      *v16 = 1;
      v139 = v141;
      v138 = v140;
      sub_140D13DD0(v153);
      if ( !v41 )
      {
        v4 = v155;
        *((_BYTE *)v155 + 466) = 0;
        v134 = v4[22];
        *(_OWORD *)&v133.m512i_u64[6] = v4[21];
        *(_OWORD *)&v133.m512i_u64[4] = v4[20];
        v71 = v4[16];
        v72 = v4[17];
        v73 = v4[18];
        *(_OWORD *)&v133.m512i_u64[2] = v4[19];
        *(_OWORD *)v133.m512i_i8 = v73;
        *(_OWORD *)&v132.m256i_u64[2] = v72;
        *(_OWORD *)v132.m256i_i8 = v71;
        goto LABEL_118;
      }
      *(_QWORD *)&v136 = v41;
      *((_QWORD *)&v136 + 1) = v14;
      *(_QWORD *)&v137 = v15;
      *((_QWORD *)&v137 + 1) = a3;
      v159 = 1;
      sub_1416B3AE0(&v150, v14, v15);
      if ( v150.m256i_i32[0] == 1 )
      {
        v4 = v155;
        *((_BYTE *)v155 + 466) = 0;
        v152 = v4[22];
        *(_OWORD *)&v151.m512i_u64[6] = v4[21];
        *(_OWORD *)&v151.m512i_u64[4] = v4[20];
        v67 = v4[16];
        v68 = v4[17];
        v69 = v4[18];
        *(_OWORD *)&v151.m512i_u64[2] = v4[19];
        *(_OWORD *)v151.m512i_i8 = v69;
        *(_OWORD *)&v150.m256i_u64[2] = v68;
        *(_OWORD *)v150.m256i_i8 = v67;
        v145 = v137;
        v144 = v136;
        v14 = sub_1411C0630(&v144);
        v15 = v70;
        v132 = v150;
        v133 = v151;
        v134 = v152;
LABEL_118:
        *(_WORD *)((char *)v4 + 465) = 0;
        goto LABEL_119;
      }
      v74 = *(_OWORD *)&v150.m256i_u64[1];
      v121 = *(_OWORD *)&v150.m256i_u64[1];
      LOWORD(v148) = *((_WORD *)v155 + 180);
      *(_QWORD *)&v144 = &v148;
      *((_QWORD *)&v144 + 1) = sub_1416BB1E0;
      v159 = 1;
      sub_1416ABFD0(&v150, &unk_141A482C0, &v144);
      v124 = *(_OWORD *)v150.m256i_i8;
      v125 = v150.m256i_i64[2];
      *(_OWORD *)v150.m256i_i8 = v74;
      *(_OWORD *)&v150.m256i_u64[2] = 0;
      *(_OWORD *)v151.m512i_i8 = v74;
      v161 = 1;
      sub_14062D280(&v148, &v150);
      LOBYTE(v154) = v148;
      if ( (_BYTE)v148 == 0xFF )
      {
        v150.m256i_i64[0] = (__int64)&v124;
        v150.m256i_i64[1] = (__int64)sub_1400015F0;
        v150.m256i_i64[2] = (__int64)&v121;
        v150.m256i_i64[3] = (__int64)sub_140186EE0;
        sub_1416ABFD0(&v144, &unk_141A475C9, &v150);
        v153 = *((__int64 **)&v144 + 1);
        v158 = v144;
        v76 = sub_14102B720(*((_QWORD *)&v144 + 1), v145);
        v15 = v78;
        if ( v158 )
          sub_140001660(v153, v158, 1);
        v161 = 1;
        sub_14002F910((char *)&v148 + 8);
      }
      else
      {
        v145 = v149;
        v144 = v148;
        v75 = sub_141642800(&v144, aErrorMessage_1, 14);
        if ( v75 && *(_BYTE *)v75 == 3 )
        {
          v127 = *(_OWORD *)(v75 + 16);
          v150.m256i_i64[0] = (__int64)&v124;
          v150.m256i_i64[1] = (__int64)sub_1400015F0;
          v150.m256i_i64[2] = (__int64)&v127;
          v150.m256i_i64[3] = (__int64)sub_140186EE0;
          sub_1416ABFD0(v143, &unk_141A475C9, &v150);
          v158 = *(_QWORD *)&v143[8];
          v76 = sub_14102B720(*(_QWORD *)&v143[8], *(_QWORD *)&v143[16]);
          v15 = v77;
          if ( *(_QWORD *)v143 )
            sub_140001660(v158, *(_QWORD *)v143, 1);
        }
        else
        {
          v76 = 0;
        }
        sub_140409B40(&v144);
      }
      v79 = v155 + 16;
      if ( !v76 )
      {
        *((_BYTE *)v155 + 466) = 0;
        v152 = v79[6];
        *(_OWORD *)&v151.m512i_u64[6] = v79[5];
        *(_OWORD *)&v151.m512i_u64[4] = v79[4];
        v84 = *v79;
        v85 = v79[1];
        v86 = v79[2];
        *(_OWORD *)&v151.m512i_u64[2] = v79[3];
        *(_OWORD *)v151.m512i_i8 = v86;
        *(_OWORD *)&v150.m256i_u64[2] = v85;
        *(_OWORD *)v150.m256i_i8 = v84;
        v145 = v137;
        v144 = v136;
        v14 = sub_1411C0630(&v144);
        v15 = v87;
        v132 = v150;
        v133 = v151;
        v134 = v152;
LABEL_113:
        if ( (_QWORD)v124 )
          sub_140001660(*((_QWORD *)&v124 + 1), v124, 1);
        if ( v76 )
        {
          v116 = *(void (__fastcall **)(char *, _QWORD, _QWORD))(v136 + 32);
          v139 = v141;
          v138 = v140;
          v116((char *)&v137 + 8, *((_QWORD *)&v136 + 1), v137);
        }
        v4 = v155;
        goto LABEL_118;
      }
      v120[0] = v76;
      v120[1] = v15;
      *(_OWORD *)v150.m256i_i8 = v74;
      *(_OWORD *)&v150.m256i_u64[2] = 0;
      *(_OWORD *)v151.m512i_i8 = v74;
      v161 = 1;
      sub_14062D280(&v148, &v150);
      LOBYTE(v154) = v148;
      if ( (_BYTE)v148 == 0xFF )
      {
        v150.m256i_i64[0] = (__int64)&v121;
        v150.m256i_i64[1] = (__int64)sub_140186EE0;
        v150.m256i_i64[2] = (__int64)v120;
        v150.m256i_i64[3] = (__int64)sub_140186EE0;
        sub_1416ABFD0(&v144, &unk_141A482D0, &v150);
        v153 = *((__int64 **)&v144 + 1);
        v158 = v144;
        v88 = v145;
        v156 = 1;
        sub_140CA8930(&v150, v79, &unk_141A480E1);
        if ( v151.m512i_i8[0] != 2 )
        {
          v89 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v150.m256i_i64[0] + 32);
          v156 = 1;
          v89(&v150.m256i_u64[3], v150.m256i_i64[1], v150.m256i_i64[2]);
        }
        *((_BYTE *)v155 + 466) = 0;
        v152 = v79[6];
        *(_OWORD *)&v151.m512i_u64[6] = v79[5];
        *(_OWORD *)&v151.m512i_u64[4] = v79[4];
        v90 = *v79;
        v91 = v79[1];
        v92 = v79[2];
        *(_OWORD *)&v151.m512i_u64[2] = v79[3];
        *(_OWORD *)v151.m512i_i8 = v92;
        *(_OWORD *)&v150.m256i_u64[2] = v91;
        *(_OWORD *)v150.m256i_i8 = v90;
        *(_QWORD *)&v144 = v158;
        *((_QWORD *)&v144 + 1) = v153;
        *(_QWORD *)&v145 = v88;
        v14 = sub_1411C0530(&v144);
        v15 = v93;
        v132 = v150;
        v133 = v151;
        v134 = v152;
        v161 = 1;
        sub_14002F910((char *)&v148 + 8);
        goto LABEL_113;
      }
      v145 = v149;
      v144 = v148;
      v80 = sub_141642800(&v144, aErrorMessage_1, 14);
      if ( v80 && *(_BYTE *)v80 == 3 )
      {
        v82 = *(_QWORD *)(v80 + 24);
        if ( v82 < 0 )
        {
          v83 = 0;
          goto LABEL_86;
        }
        v158 = v80;
        if ( v82 )
        {
          v94 = *(const __m128i **)(v80 + 16);
          nullsub_1(v81);
          v83 = 1;
          v95 = (__m128i *)sub_140001650(v82, 1);
          if ( !v95 )
LABEL_86:
            sub_141938D2B(v83, v82);
          v96 = (__int64)v95;
          sub_1418F44E0(v95, v94, v82);
          v97 = v158;
        }
        else
        {
          v97 = v80;
          v96 = 1;
        }
        v129 = v82;
        v130 = v96;
        v131 = v82;
        v150.m256i_i64[0] = (__int64)&v129;
        v150.m256i_i64[1] = (__int64)sub_1400015F0;
        v150.m256i_i64[2] = (__int64)v120;
        v150.m256i_i64[3] = (__int64)sub_140186EE0;
        sub_1416ABFD0(&v127, &unk_141A482D0, &v150);
        *(_OWORD *)&v143[7] = v127;
        *(_QWORD *)&v143[23] = v128;
        sub_140409B40(v97);
        v104 = v158;
        *(_BYTE *)v158 = 3;
        v105 = *(_OWORD *)v143;
        *(_OWORD *)(v104 + 16) = *(_OWORD *)&v143[15];
        *(_OWORD *)(v104 + 1) = v105;
        if ( v129 )
          sub_140001660(v130, v129, 1);
      }
      sub_140D1E970(&v150, &v144);
      if ( v150.m256i_i64[0] != -1 )
      {
        v153 = (__int64 *)v150.m256i_i64[1];
        v158 = v150.m256i_i64[0];
        v106 = v150.m256i_u64[2];
LABEL_110:
        v157 = 1;
        sub_140CA8930(&v150, v79, &unk_141A480E1);
        if ( v151.m512i_i8[0] != 2 )
        {
          v111 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v150.m256i_i64[0] + 32);
          v157 = 1;
          v111(&v150.m256i_u64[3], v150.m256i_i64[1], v150.m256i_i64[2]);
        }
        *((_BYTE *)v155 + 466) = 0;
        v152 = v79[6];
        *(_OWORD *)&v151.m512i_u64[6] = v79[5];
        *(_OWORD *)&v151.m512i_u64[4] = v79[4];
        v112 = *v79;
        v113 = v79[1];
        v114 = v79[2];
        *(_OWORD *)&v151.m512i_u64[2] = v79[3];
        *(_OWORD *)v151.m512i_i8 = v114;
        *(_OWORD *)&v150.m256i_u64[2] = v113;
        *(_OWORD *)v150.m256i_i8 = v112;
        *(_QWORD *)v143 = v158;
        *(_QWORD *)&v143[8] = v153;
        *(_QWORD *)&v143[16] = v106;
        v14 = sub_1411BFE90(v143);
        v15 = v115;
        v132 = v150;
        v133 = v151;
        v134 = v152;
        sub_140409B40(&v144);
        goto LABEL_113;
      }
      v107 = *((const __m128i **)&v136 + 1);
      v106 = v137;
      *(_QWORD *)v143 = v150.m256i_i64[1];
      if ( (__int64)v137 < 0 )
      {
        v108 = 0;
        goto LABEL_104;
      }
      if ( (_QWORD)v137 )
      {
        nullsub_1(v150.m256i_i64[0]);
        v108 = 1;
        v109 = (__m128i *)sub_140001650(v106, 1);
        if ( !v109 )
LABEL_104:
          sub_141938D2B(v108, v106);
        v110 = (__int64)v109;
        sub_1418F44E0(v109, v107, v106);
      }
      else
      {
        v110 = 1;
      }
      sub_14002F910(v143);
      v153 = (__int64 *)v110;
      v158 = v106;
      goto LABEL_110;
    }
    if ( v150.m256i_i32[0] == 3 )
      break;
    if ( v150.m256i_i32[0] == -2 )
    {
      v29 = *(_OWORD *)&v150.m256i_u64[1];
      goto LABEL_24;
    }
    v28 = v150.m256i_i64[1];
    v29 = *(_OWORD *)&v150.m256i_u64[2];
    v30 = v151.m512i_i64[0];
    v144 = *(_OWORD *)&v151.m512i_u64[1];
    v145 = *(_OWORD *)&v151.m512i_u64[3];
    v146 = *(_OWORD *)&v151.m512i_u64[5];
    v147 = v151.m512i_i64[7];
    if ( v150.m256i_i32[0] == -1 )
    {
      if ( v150.m256i_i64[1] )
      {
        v4 = v155;
        v43 = *((_QWORD *)v155 + 55);
        v44 = __CFADD__(v150.m256i_i64[3], v43);
        v45 = v150.m256i_i64[3] + v43;
        v46 = -1;
        if ( !v44 )
          v46 = v45;
        *((_QWORD *)v155 + 55) = v46;
        v142 = v28;
        v150.m256i_i64[0] = v28;
        v158 = v29;
        v154 = v29 >> 64;
        v150.m256i_i64[1] = v29;
        v150.m256i_i64[2] = *((_QWORD *)&v29 + 1);
        v150.m256i_i64[3] = v30;
        v47 = *((_QWORD *)v4 + 54);
        if ( v47 == *((_QWORD *)v4 + 52) )
          sub_14190F570(v4 + 26);
        v48 = *((_QWORD *)v4 + 53);
        v49 = 32 * v47;
        v50 = *(_OWORD *)v150.m256i_i8;
        *(_OWORD *)(v48 + v49 + 16) = *(_OWORD *)&v150.m256i_u64[2];
        *(_OWORD *)(v48 + v49) = v50;
        v51 = v47 + 1;
        *((_QWORD *)v4 + 54) = v51;
        if ( *((_QWORD *)v4 + 55) <= *((_QWORD *)v4 + 51) )
        {
          v17 = v153;
          goto LABEL_13;
        }
        v98 = *((_QWORD *)v4 + 52);
        v99 = *((_QWORD *)v4 + 53);
        *((_WORD *)v4 + 228) = 0;
        v100 = v4[23];
        v150.m256i_i64[3] = v99;
        v151.m512i_i64[0] = v98;
        v151.m512i_i64[1] = v99 + 32 * v51;
        *(_OWORD *)v150.m256i_i8 = v100;
        v150.m256i_i64[2] = v99;
        nullsub_1(v99);
        v101 = (_OWORD *)sub_140001650(48, 8);
        if ( !v101 )
          sub_141938D11(8, 48);
        v14 = (__int64)v101;
        v102 = *(_OWORD *)v150.m256i_i8;
        v103 = *(_OWORD *)&v150.m256i_u64[2];
        v101[2] = *(_OWORD *)v151.m512i_i8;
        v101[1] = v103;
        *v101 = v102;
        v15 = &off_141A459C8;
        *((_BYTE *)v4 + 457) = 0;
        if ( !*((_BYTE *)v4 + 456) )
        {
LABEL_30:
          *((_BYTE *)v4 + 456) = 0;
          v41 = nullptr;
          goto LABEL_66;
        }
LABEL_26:
        v154 = *((_QWORD *)v4 + 46);
        v158 = *((_QWORD *)v4 + 47);
        if ( *(_QWORD *)v158 )
          (*(void (__fastcall **)(__int64))v158)(v154);
        v40 = *(_QWORD *)(v158 + 8);
        v4 = v155;
        if ( v40 )
          sub_140001660(v154, v40, *(_QWORD *)(v158 + 16));
        goto LABEL_30;
      }
LABEL_24:
      v4 = v155;
      *((_BYTE *)v155 + 457) = 0;
      *(_QWORD *)&v34 = *((_QWORD *)v4 + 52);
      v35 = *((_QWORD *)v4 + 53);
      *((_QWORD *)&v34 + 1) = v35 + 32LL * *((_QWORD *)v4 + 54);
      v150.m256i_i8[24] = 0;
      v151.m512i_i64[0] = v35;
      v151.m512i_i64[1] = v35;
      *(_OWORD *)&v151.m512i_u64[2] = v34;
      v150.m256i_i64[0] = 1;
      *(_OWORD *)&v150.m256i_u64[1] = v29;
      nullsub_1(v35);
      v36 = (_OWORD *)sub_140001650(64, 8);
      if ( !v36 )
        sub_141938D11(8, 64);
      v14 = (__int64)v36;
      v37 = *(_OWORD *)v150.m256i_i8;
      v38 = *(_OWORD *)&v150.m256i_u64[2];
      v39 = *(_OWORD *)v151.m512i_i8;
      v36[3] = *(_OWORD *)&v151.m512i_u64[2];
      v36[2] = v39;
      v36[1] = v38;
      *v36 = v37;
      v15 = &off_141A45998;
      *((_BYTE *)v4 + 457) = 0;
      if ( !*((_BYTE *)v4 + 456) )
        goto LABEL_30;
      goto LABEL_26;
    }
    v151.m512i_i64[7] = v147;
    *(_OWORD *)&v151.m512i_u64[5] = v146;
    *(_OWORD *)&v151.m512i_u64[3] = v145;
    *(_OWORD *)&v151.m512i_u64[1] = v144;
    sub_14029C800(&v150);
  }
  *v16 = 3;
  *(_QWORD *)a1 = -1;
  result = 3;
  v4 = v155;
LABEL_120:
  *((_BYTE *)v4 + 464) = result;
  return result;
}
