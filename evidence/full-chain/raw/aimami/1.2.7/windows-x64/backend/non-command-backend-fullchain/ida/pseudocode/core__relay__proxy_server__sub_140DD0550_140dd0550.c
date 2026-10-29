// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140dd0550 | name sub_140DD0550
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DD0550(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // r12d
  __int64 v5; // r13
  __int64 (__fastcall **v6)(); // r14
  __int64 *v7; // rbx
  __int64 v9; // rax
  bool v10; // zf
  _QWORD *v11; // r15
  int v12; // eax
  _BYTE *v13; // rdx
  __int64 v14; // rdx
  __int64 *v15; // r12
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  char v19; // r15
  void (__fastcall *v20)(char *, __int64 (__fastcall *)(), _QWORD); // rax
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 (__fastcall *v27)(); // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  const __m128i *v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rbx
  _BYTE *v37; // r13
  __int64 v38; // rcx
  __int64 v39; // r8
  _BYTE *v40; // rdi
  __int64 v41; // r14
  unsigned __int64 v42; // rbx
  _QWORD *v43; // r12
  const __m128i *v44; // r13
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r13
  __m128i *v47; // rax
  const __m128i *v48; // rdx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // r13
  __int64 v54; // r12
  __int64 v55; // rcx
  unsigned __int64 v56; // rbx
  const __m128i *v57; // rdx
  __int64 v58; // r14
  const __m128i *v59; // r14
  unsigned __int64 v60; // rdi
  __int64 v61; // rbx
  __m128i v62; // xmm1
  __m128i v63; // xmm2
  __m128i v64; // xmm3
  __int64 v65; // rcx
  __int64 *v66; // r15
  __m128i v67; // xmm1
  __m128i v68; // xmm2
  __m128i v69; // xmm3
  __m128i v70; // xmm0
  __int64 v71; // rax
  __int64 v72; // r10
  __m128i si128; // xmm0
  __m128i v74; // xmm1
  __int64 v75; // r9
  char v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // r10
  __int64 v80; // r11
  __int64 v81; // r14
  __int64 v82; // rax
  const __m128i *v83; // rdi
  signed __int64 v84; // rbx
  int v85; // r8d
  int v86; // edx
  unsigned int v87; // edx
  __m128i v88; // kr20_16
  __int64 *v91; // rcx
  const __m128i *v92; // r8
  __m128i v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm2
  __int64 v96; // rax
  __int64 v97; // rcx
  __m128i *v98; // rdx
  __m128i v99; // xmm1
  __m128i v100; // xmm2
  __m128i v101; // xmm3
  const __m128i *v102; // r14
  __int128 v103; // [rsp+50h] [rbp-30h]
  __m128i v104; // [rsp+60h] [rbp-20h] BYREF
  __m128i v105; // [rsp+70h] [rbp-10h] BYREF
  __m128i v106; // [rsp+80h] [rbp+0h] BYREF
  __m128i v107; // [rsp+90h] [rbp+10h] BYREF
  __m128i v108; // [rsp+A0h] [rbp+20h]
  __m128i v109; // [rsp+B0h] [rbp+30h]
  __int64 v110; // [rsp+C0h] [rbp+40h]
  __m128i v111; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v112; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v113; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v114; // [rsp+100h] [rbp+80h] BYREF
  __m128i v115; // [rsp+110h] [rbp+90h]
  __m128i v116; // [rsp+120h] [rbp+A0h]
  __int64 v117; // [rsp+130h] [rbp+B0h]
  __int128 v118; // [rsp+140h] [rbp+C0h]
  __m128i v119; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v120; // [rsp+160h] [rbp+E0h]
  __m128i v121; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v122; // [rsp+180h] [rbp+100h] BYREF
  __m128i v123; // [rsp+190h] [rbp+110h]
  __m128i v124; // [rsp+1A0h] [rbp+120h]
  __int64 v125; // [rsp+1B0h] [rbp+130h]
  __int64 v126; // [rsp+1B8h] [rbp+138h] BYREF
  _BYTE v127[40]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v128; // [rsp+1E8h] [rbp+168h]
  __int128 v129; // [rsp+1F8h] [rbp+178h]
  __int128 v130; // [rsp+208h] [rbp+188h]
  __int128 v131; // [rsp+218h] [rbp+198h]
  __int128 v132; // [rsp+228h] [rbp+1A8h]
  __int128 v133; // [rsp+238h] [rbp+1B8h]
  const __m128i *v134; // [rsp+248h] [rbp+1C8h]
  char v135; // [rsp+250h] [rbp+1D0h]
  __int64 *v136; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 (__fastcall *v137)(); // [rsp+268h] [rbp+1E8h]
  __int128 v138; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v139; // [rsp+288h] [rbp+208h]
  __int128 v140; // [rsp+290h] [rbp+210h] BYREF
  __int128 v141; // [rsp+2A0h] [rbp+220h]
  const __m128i *v142; // [rsp+2B8h] [rbp+238h]
  __int64 v143; // [rsp+2C0h] [rbp+240h]
  __int64 *v144; // [rsp+2C8h] [rbp+248h]
  __int64 v145; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v146; // [rsp+2D8h] [rbp+258h]
  __int64 v147; // [rsp+2E0h] [rbp+260h]
  _BYTE *v148; // [rsp+2E8h] [rbp+268h]
  __int64 (__fastcall *v149)(); // [rsp+2F0h] [rbp+270h]
  __int64 *v150; // [rsp+2F8h] [rbp+278h]
  __int64 v151; // [rsp+300h] [rbp+280h]
  char v152; // [rsp+30Fh] [rbp+28Fh]
  _QWORD *v153; // [rsp+310h] [rbp+290h]
  char v154; // [rsp+31Dh] [rbp+29Dh]
  char v155; // [rsp+31Eh] [rbp+29Eh]
  char v156; // [rsp+31Fh] [rbp+29Fh]
  __int64 v157; // [rsp+320h] [rbp+2A0h]

  v157 = -2;
  v7 = a2;
  v9 = *a2;
  v10 = *a2 == 0;
  v150 = a2;
  if ( !v10 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v13 = (char *)a2 + 169;
      v11 = v7 + 1;
      switch ( *((_BYTE *)v7 + 169) )
      {
        case 0:
          v12 = *((unsigned __int8 *)v7 + 168);
          goto LABEL_7;
        case 1:
          sub_1419393E0(&off_141A47180);
        case 2:
          sub_141939400(&off_141A47180);
        case 3:
          v148 = (char *)v7 + 169;
          v153 = v7 + 1;
          v14 = *(_QWORD *)v7[20];
          goto LABEL_13;
      }
    }
    sub_141939280(aUnfoldMustNotB, 63, &off_141A4E710);
  }
  *a2 = 2;
  if ( a2[1] < 0 )
    sub_141939280("internal error: entered unreachable code", 40, &off_141A49BE0);
  v11 = a2 + 1;
  v12 = *((unsigned __int8 *)a2 + 152);
  *a2 = 1;
  *((_BYTE *)a2 + 168) = v12;
  v13 = (char *)a2 + 169;
  *((_BYTE *)v7 + 169) = 0;
LABEL_7:
  *((_WORD *)v7 + 85) = 257;
  *((_BYTE *)v7 + 172) = 1;
  v148 = v13;
  if ( (_BYTE)v12 == 1 && v7[4] == -2 )
  {
    v151 = -1;
    LODWORD(v149) = v12;
    if ( *((_BYTE *)v7 + 172) )
      goto LABEL_94;
LABEL_72:
    if ( !*((_BYTE *)v7 + 171) )
      goto LABEL_97;
    goto LABEL_95;
  }
  v153 = v11;
  v14 = v7[18];
  v7[19] = v14;
  v7[20] = (__int64)(v7 + 19);
LABEL_13:
  sub_140DC84A0((__int64)v127, v14, a3);
  if ( *(_QWORD *)v127 == 2 )
  {
    *v148 = 3;
LABEL_98:
    *(_QWORD *)a1 = 3;
    return a1;
  }
  if ( *(_DWORD *)v127 != 1 )
  {
    v145 = 0;
    v146 = 1;
    v147 = 0;
    v21 = v150;
    v22 = v150[4];
    v150[4] = -2;
    if ( v22 == -2 )
    {
      v151 = v21[18];
      sub_140CE5110(v151);
      sub_140001660(v151, 64, 8);
      v11 = v153;
      if ( *v153 )
        sub_140001660(v153[1], *v153, 1);
      *((_BYTE *)v21 + 169) = 1;
      v23 = *v21;
      goto LABEL_103;
    }
    *(_QWORD *)v127 = v22;
    *(_QWORD *)&v132 = v21[17];
    v131 = *(_OWORD *)(v21 + 15);
    v130 = *(_OWORD *)(v21 + 13);
    v24 = *(_OWORD *)(v21 + 5);
    v25 = *(_OWORD *)(v21 + 7);
    v26 = *(_OWORD *)(v21 + 9);
    v129 = *(_OWORD *)(v21 + 11);
    v128 = v26;
    *(_OWORD *)&v127[24] = v25;
    *(_OWORD *)&v127[8] = v24;
    if ( v21[3] )
    {
      v151 = v21[1];
      v27 = (__int64 (__fastcall *)())v153[1];
      v28 = v153[2];
      v21[1] = 0;
      v21[2] = 1;
      v21[3] = 0;
      v149 = v27;
      if ( v22 == -1 )
        sub_140E6ED30(&v140, &v127[8], v27, v28);
      else
        sub_140E1FBF0(&v140, v127, v27, v28);
      v56 = v141;
      if ( (_QWORD)v141 )
      {
        v57 = *((const __m128i **)&v140 + 1);
        v58 = v147;
        if ( (unsigned __int64)v141 > v145 - v147 )
        {
          v144 = *((__int64 **)&v140 + 1);
          sub_14190D590((unsigned int)&v145, v147, v141, 1, 1);
          v58 = v147;
          v57 = (const __m128i *)v144;
        }
        sub_1418F44E0((__m128i *)(v58 + v146), v57, v56);
        v147 = v56 + v58;
      }
      if ( (_QWORD)v140 )
        sub_140001660(*((_QWORD *)&v140 + 1), v140, 1);
      if ( v151 )
        sub_140001660(v149, v151, 1);
      v22 = *(_QWORD *)v127;
    }
    v155 = 1;
    if ( v22 == -1 )
      sub_140E6EA60(&v136, &v127[8]);
    else
      sub_140E1F980(&v136, v127);
    v59 = (const __m128i *)v137;
    v60 = v138;
    v61 = v147;
    v149 = v137;
    if ( (unsigned __int64)v138 > v145 - v147 )
    {
      v152 = 1;
      sub_14190D590((unsigned int)&v145, v147, v138, 1, 1);
      v61 = v147;
      v59 = (const __m128i *)v149;
    }
    else if ( !(_QWORD)v138 )
    {
      goto LABEL_90;
    }
    sub_1418F44E0((__m128i *)(v61 + v146), v59, v60);
LABEL_90:
    v147 = v60 + v61;
    v152 = 0;
    sub_141654790(&v140, &v145);
    v3 = *((_QWORD *)&v140 + 1);
    v6 = (__int64 (__fastcall **)())v140;
    v118 = v141;
    v7 = v150;
    v142 = (const __m128i *)v150[18];
    *(_WORD *)((char *)v150 + 171) = 0;
    v151 = v7[1];
    v143 = v7[2];
    v139 = v7[3];
    if ( v136 )
      sub_140001660(v149, v136, 1);
    sub_140D1E650((__int64 *)v127);
    LOBYTE(v4) = 1;
    v5 = -2;
    v10 = *((_BYTE *)v7 + 170) == 0;
    LODWORD(v149) = v4;
    if ( !v10 )
      goto LABEL_69;
LABEL_93:
    v11 = v153;
    if ( *((_BYTE *)v7 + 172) )
      goto LABEL_94;
    goto LABEL_72;
  }
  if ( !*(_QWORD *)&v127[8] )
  {
    v126 = *(_QWORD *)&v127[16];
    v136 = &v126;
    v137 = sub_14122E940;
    sub_1416ABFD0(v127, &unk_141A4721A, &v136);
    v140 = *(_OWORD *)v127;
    *(_QWORD *)&v141 = *(_QWORD *)&v127[16];
    LOBYTE(v29) = 41;
    v3 = sub_141156620(v29, &v140);
    v30 = v150;
    v142 = (const __m128i *)v150[18];
    *(_WORD *)((char *)v150 + 171) = 0;
    v151 = v30[1];
    v143 = v30[2];
    v139 = v30[3];
    sub_140D19140(v126);
    LOBYTE(v4) = 1;
    v5 = -2;
    v6 = nullptr;
    v7 = v150;
    v10 = *((_BYTE *)v150 + 170) == 0;
    LODWORD(v149) = v4;
    if ( !v10 )
      goto LABEL_69;
    goto LABEL_93;
  }
  v138 = *(_OWORD *)&v127[24];
  v145 = 0;
  v146 = 1;
  v147 = 0;
  v136 = *(__int64 **)&v127[8];
  v137 = *(__int64 (__fastcall **)())&v127[16];
  v156 = 1;
  sub_1416B3AE0(v127, *(_QWORD *)&v127[16], *(_QWORD *)&v127[24]);
  if ( *(_DWORD *)v127 != 1 )
  {
    v31 = *(const __m128i **)&v127[8];
    v32 = *(_QWORD *)&v127[16];
    v33 = v153[2];
    v15 = v150;
    if ( *(_QWORD *)&v127[16] > (unsigned __int64)(*v153 - v33) )
    {
      v102 = *(const __m128i **)&v127[8];
      v156 = 1;
      sub_14190D590((_DWORD)v153, v33, *(_DWORD *)&v127[16], 1, 1);
      v15 = v150;
      v34 = (unsigned __int64 *)(v150 + 3);
      v35 = v150[3];
      v31 = v102;
    }
    else
    {
      v34 = (unsigned __int64 *)(v150 + 3);
      v35 = v150[3];
      if ( !*(_QWORD *)&v127[16] )
        goto LABEL_36;
    }
    sub_1418F44E0((__m128i *)(v15[2] + v35), v31, v32);
    v35 = v15[3];
LABEL_36:
    v16 = v32 + v35;
    *v34 = v16;
    if ( v16 > 0x4000000 )
      goto LABEL_19;
    goto LABEL_37;
  }
  v15 = v150;
  v16 = v150[3];
  if ( v16 > 0x4000000 )
  {
LABEL_19:
    *(_QWORD *)&v140 = &unk_141A471C8;
    *((_QWORD *)&v140 + 1) = sub_1416BCB10;
    v156 = 1;
    sub_1416ABFD0(v127, &unk_141A471D0, &v140);
    v140 = *(_OWORD *)v127;
    *(_QWORD *)&v141 = *(_QWORD *)&v127[16];
    v156 = 1;
    LOBYTE(v17) = 41;
    v3 = sub_141156620(v17, &v140);
    v18 = v150;
    *((_BYTE *)v150 + 172) = 0;
    v142 = (const __m128i *)v18[18];
    v5 = -2;
    v19 = 1;
    v143 = 1;
    v139 = 0;
    v6 = nullptr;
    v151 = 0;
    LOBYTE(v15) = 1;
    goto LABEL_20;
  }
LABEL_37:
  v144 = v15 + 4;
  v143 = (__int64)(v15 + 5);
  v36 = 0xA0000000ALL;
  v37 = v127;
  while ( 1 )
  {
    *(_QWORD *)v127 = v15[2];
    *(_QWORD *)&v127[8] = v16;
    *(_QWORD *)&v127[16] = 0;
    *(_QWORD *)&v127[24] = v16;
    LOBYTE(v128) = 1;
    *(_QWORD *)&v127[32] = v36;
    v156 = 1;
    sub_140DD9390(&v140, v37);
    v39 = v151;
    if ( (_DWORD)v140 != 1 )
      break;
    v40 = v37;
    v41 = v36;
    v42 = *((_QWORD *)&v140 + 1);
    v43 = v153;
    if ( *((_QWORD *)&v140 + 1) )
    {
      v44 = (const __m128i *)v150[2];
      v45 = v150[3];
      if ( *((_QWORD *)&v140 + 1) >= v45 )
      {
        if ( *((_QWORD *)&v140 + 1) != v45 )
        {
LABEL_159:
          v156 = 1;
          sub_141938F40((_DWORD)v44, v45, 0, DWORD2(v140), (__int64)&off_141A47198);
        }
      }
      else if ( v44->m128i_i8[*((_QWORD *)&v140 + 1)] <= -65 )
      {
        goto LABEL_159;
      }
      if ( v140 < 0 )
      {
        v55 = 0;
        goto LABEL_66;
      }
      nullsub_1(v38);
      v47 = (__m128i *)sub_140001650(v42, 1);
      if ( !v47 )
      {
        v39 = v42;
        v55 = 1;
LABEL_66:
        v156 = 1;
        sub_141938D2B(v55, v39);
      }
      v151 = (__int64)v47;
      v48 = v44;
      v46 = v42;
      sub_1418F44E0(v47, v48, v42);
    }
    else
    {
      v46 = 0;
      v151 = 1;
    }
    v49 = v43[2];
    v50 = v46;
    v149 = (__int64 (__fastcall *)())v46;
    if ( v46 >= v49 )
      sub_1419392D0(0, v46, v49, &off_141A59A58);
    v36 = v41;
    v51 = v46 + 1;
    v52 = v43[1];
    v37 = v40;
    if ( v50 + 1 < v49 && *(char *)(v52 + v51) <= -65 )
      sub_141939280(aAssertionFaile_202, 44, &off_141A471B0);
    *(_OWORD *)&v127[16] = (unsigned __int64)v43;
    *(_QWORD *)&v127[32] = v51;
    *(_QWORD *)v127 = v52;
    *(_QWORD *)&v127[8] = v52 + v51;
    sub_1416AC360(v40);
    if ( *v144 != -2 )
    {
      if ( *v144 == -1 )
        sub_140E6ED30(v40, v143, v151, v149);
      else
        sub_140E1FBF0(v40, v144, v151, v149);
      v53 = *(_QWORD *)&v127[16];
      if ( *(_QWORD *)&v127[16] )
      {
        v142 = *(const __m128i **)&v127[8];
        v54 = v147;
        if ( *(_QWORD *)&v127[16] > (unsigned __int64)(v145 - v147) )
        {
          sub_14190D590((unsigned int)&v145, v147, *(_DWORD *)&v127[16], 1, 1);
          v54 = v147;
          v36 = v41;
        }
        sub_1418F44E0((__m128i *)(v54 + v146), v142, v53);
        v147 = v53 + v54;
      }
      if ( *(_QWORD *)v127 )
        sub_140001660(*(_QWORD *)&v127[8], *(_QWORD *)v127, 1);
      v37 = v40;
    }
    v15 = v150;
    if ( v149 )
      sub_140001660(v151, v149, 1);
    v16 = v15[3];
  }
  v91 = v150;
  v92 = (const __m128i *)v150[18];
  *(_WORD *)((char *)v150 + 171) = 0;
  *(_QWORD *)&v127[16] = v153[2];
  *(_OWORD *)v127 = *(_OWORD *)v153;
  *((_BYTE *)v91 + 170) = 0;
  v133 = *((_OWORD *)v144 + 6);
  v132 = *((_OWORD *)v144 + 5);
  v131 = *((_OWORD *)v144 + 4);
  v93 = *(__m128i *)v144;
  v94 = *((_OWORD *)v144 + 1);
  v95 = *((_OWORD *)v144 + 2);
  v130 = *((_OWORD *)v144 + 3);
  v129 = v95;
  v128 = v94;
  *(__m128i *)&v127[24] = v93;
  v134 = v92;
  v135 = 0;
  v142 = v92;
  if ( v147 )
  {
    sub_141654790(&v140, &v145);
    v3 = *((_QWORD *)&v140 + 1);
    v6 = (__int64 (__fastcall **)())v140;
    v118 = v141;
    v96 = *(_QWORD *)&v127[8];
    v5 = *(_QWORD *)&v127[24];
    v97 = *(_QWORD *)&v127[16];
    v98 = (__m128i *)&v127[32];
    v19 = 0;
  }
  else
  {
    v118 = 0;
    v96 = *(_QWORD *)&v127[8];
    v97 = *(_QWORD *)&v127[16];
    v3 = 1;
    v6 = off_141A422B8;
    v19 = 1;
    v5 = *(_QWORD *)&v127[24];
    v98 = (__m128i *)v143;
  }
  v139 = v97;
  v143 = v96;
  v151 = *(_QWORD *)v127;
  v99 = v98[1];
  v100 = v98[2];
  v101 = v98[3];
  v111 = *v98;
  v112 = v99;
  v113 = v100;
  v114 = v101;
  v115 = v98[4];
  v116 = v98[5];
  v117 = v98[6].m128i_i64[0];
  LODWORD(v15) = 0;
LABEL_20:
  v20 = (void (__fastcall *)(char *, __int64 (__fastcall *)(), _QWORD))v136[4];
  v154 = v19;
  v20((char *)&v138 + 8, v137, v138);
  if ( !v19 )
  {
    v7 = v150;
LABEL_68:
    v10 = *((_BYTE *)v7 + 170) == 0;
    LODWORD(v149) = (_DWORD)v15;
    if ( v10 )
      goto LABEL_93;
    goto LABEL_69;
  }
  v7 = v150;
  if ( !v145 )
    goto LABEL_68;
  sub_140001660(v146, v145, 1);
  v10 = *((_BYTE *)v7 + 170) == 0;
  LODWORD(v149) = (_DWORD)v15;
  if ( v10 )
    goto LABEL_93;
LABEL_69:
  v11 = v153;
  if ( v7[4] != -2 )
    sub_140D1E650(v7 + 4);
  if ( !*((_BYTE *)v7 + 172) )
    goto LABEL_72;
LABEL_94:
  v153 = v11;
  v144 = (__int64 *)v7[18];
  sub_140CE5110((__int64)v144);
  sub_140001660(v144, 64, 8);
  v7 = v150;
  v11 = v153;
  if ( !*((_BYTE *)v150 + 171) )
    goto LABEL_97;
LABEL_95:
  if ( *v11 )
    sub_140001660(v11[1], *v11, 1);
LABEL_97:
  v103 = v118;
  v104 = v111;
  v105 = _mm_load_si128(&v112);
  v106 = _mm_load_si128(&v113);
  v107 = _mm_load_si128(&v114);
  v108 = v115;
  v109 = v116;
  v110 = v117;
  *v148 = 1;
  if ( v151 == -2 )
    goto LABEL_98;
  v62 = _mm_load_si128(&v105);
  v63 = _mm_load_si128(&v106);
  v64 = _mm_load_si128(&v107);
  v119 = v104;
  v120 = v62;
  v121 = v63;
  v122 = v64;
  v123 = v108;
  v124 = v109;
  v65 = v151;
  v125 = v110;
  v23 = *v7;
  if ( v151 != -1 )
  {
    v153 = (_QWORD *)v5;
    *(_QWORD *)v127 = v6;
    *(_QWORD *)&v127[8] = v3;
    *(_OWORD *)&v127[16] = v103;
    if ( (_DWORD)v23 == 1 )
    {
      sub_140CF4600((__int64)v11);
    }
    else if ( !v23 )
    {
      sub_140D1E7E0(v11);
    }
    v66 = v150;
    *v150 = 0;
    v66[1] = v151;
    v66[2] = v143;
    v66[3] = v139;
    v66[4] = (__int64)v153;
    v67 = v120;
    v68 = _mm_load_si128(&v121);
    v69 = _mm_load_si128(&v122);
    *(__m128i *)(v66 + 5) = v119;
    *(__m128i *)(v66 + 7) = v67;
    *(__m128i *)(v66 + 9) = v68;
    *(__m128i *)(v66 + 11) = v69;
    *(__m128i *)(v66 + 13) = v123;
    *(__m128i *)(v66 + 15) = v124;
    v66[17] = v125;
    v66[18] = (__int64)v142;
    *((_BYTE *)v66 + 152) = (_BYTE)v149;
    v70 = _mm_loadu_si128((const __m128i *)v127);
    v112 = _mm_loadu_si128((const __m128i *)&v127[16]);
    v111 = v70;
    if ( v70.m128i_i64[0] )
    {
      if ( *((_BYTE *)v66 + 240) != 1 )
        goto LABEL_139;
      v71 = v112.m128i_i64[0];
      if ( !v112.m128i_i64[0] )
        goto LABEL_139;
      v65 = v111.m128i_i64[1];
      v72 = v111.m128i_i64[1] + v112.m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)&xmmword_141A42000);
      v74 = _mm_load_si128((const __m128i *)&xmmword_141A42010);
LABEL_113:
      v75 = 0;
      while ( 1 )
      {
        v76 = *(_BYTE *)(v65 + v75);
        if ( v76 == 10 )
          break;
        v77 = v65 + v75++ + 1;
        if ( v77 == v72 )
        {
          v78 = v65;
          v75 = v71;
          if ( v71 )
            goto LABEL_121;
LABEL_117:
          v79 = 0;
          if ( v75 == 22 )
            goto LABEL_126;
LABEL_118:
          if ( v76 != 10 )
            goto LABEL_139;
LABEL_130:
          if ( !v71 )
            goto LABEL_139;
          v72 = v78 + v71;
          v65 = v78;
          goto LABEL_113;
        }
      }
      v71 += ~v75;
      v78 = v65 + v75 + 1;
      if ( !v75 )
        goto LABEL_117;
LABEL_121:
      v80 = v75 - 1;
      v79 = 0;
      if ( *(_BYTE *)(v65 + v75 - 1) == 13 )
        v79 = v65;
      if ( !v79 )
        v80 = v75;
      if ( v80 != 22 )
        goto LABEL_118;
LABEL_126:
      if ( v79 )
        v65 = v79;
      v65 = _mm_movemask_epi8(
              _mm_and_si128(
                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v65 + 6)), si128),
                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v65), v74))) != 0xFFFF;
      if ( v76 == 10 && (_DWORD)v65 )
        goto LABEL_130;
      if ( (_DWORD)v65 )
        goto LABEL_139;
      v119.m128i_i64[0] = (__int64)(v66 + 25);
      v119.m128i_i64[1] = (__int64)sub_140186EE0;
      sub_1416ABFD0(v127, &unk_141A47038, &v119);
      v148 = *(_BYTE **)&v127[8];
      v153 = *(_QWORD **)v127;
      v81 = *(_QWORD *)&v127[16];
    }
    else
    {
      v104.m128i_i64[0] = (__int64)&v111.m128i_i64[1];
      *(_QWORD *)v127 = v66 + 25;
      *(_QWORD *)&v127[8] = sub_140186EE0;
      *(_QWORD *)&v127[16] = &v104;
      *(_QWORD *)&v127[24] = sub_14074E440;
      sub_1416ABFD0(&v119, &unk_141A4705D, v127);
      v148 = (_BYTE *)v119.m128i_i64[1];
      v153 = (_QWORD *)v119.m128i_i64[0];
      v81 = v120.m128i_i64[0];
    }
    v82 = v66[27];
    LOBYTE(v65) = *(_BYTE *)(v82 + 16);
    *(_BYTE *)(v82 + 16) = 1;
    if ( !(_BYTE)v65 )
    {
      v83 = (const __m128i *)v66[23];
      v84 = v66[24];
      sub_141406CE0(&v104);
      v85 = (v104.m128i_i32[0] >> 13) - 1;
      v86 = 0;
      if ( v104.m128i_i32[0] >> 13 <= 0 )
      {
        v87 = (1 - (v104.m128i_i32[0] >> 13)) / 0x190u + 1;
        v85 += 400 * v87;
        v86 = -146097 * v87;
      }
      sub_140DBC550(
        v66 + 28,
        v83,
        v84,
        1000
      * (v104.m128i_u32[1]
       + 86400LL
       * (((v85 / 100) >> 2)
        + ((1461 * v85) >> 2)
        + v86
        + (((unsigned __int32)v104.m128i_i32[0] >> 4) & 0x1FF)
        - v85 / 100
        - 719163))
      + v104.m128i_u32[2] / 0xF4240uLL);
      sub_140DAE450(v66 + 29, v66[23], v66[24], (__int64)v148, v81);
    }
    if ( v153 )
      sub_140001660(v148, v153, 1);
LABEL_139:
    v88 = v111;
    v104 = v112;
    if ( v111.m128i_i64[0] )
    {
      *(__m128i *)(a1 + 24) = v104;
      *(_QWORD *)a1 = -1;
      *(__m128i *)(a1 + 8) = v88;
    }
    else
    {
      *(_QWORD *)v127 = v111.m128i_i64[1];
      nullsub_1(v65);
      if ( !sub_140001650(8, 8) )
        sub_141938D11(8, 8);
      *(_QWORD *)v88.m128i_i64[0] = v88.m128i_i64[1];
      *(_QWORD *)a1 = -2;
      *(_QWORD *)(a1 + 8) = v88.m128i_i64[0];
      *(_QWORD *)(a1 + 16) = &off_1419D2100;
    }
    return a1;
  }
LABEL_103:
  if ( (_DWORD)v23 == 1 )
  {
    sub_140CF4600((__int64)v11);
  }
  else if ( !v23 )
  {
    sub_140D1E7E0(v11);
  }
  *v150 = 2;
  *(_QWORD *)a1 = -3;
  return a1;
}
