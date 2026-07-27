// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140CCE030(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  char v11; // r15
  _QWORD *v12; // r12
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  __m128i v15; // xmm0
  _BYTE *v16; // r15
  __int64 v17; // r12
  __int64 v18; // rdi
  _BYTE *v19; // rcx
  _BYTE *v20; // rdi
  __int64 v21; // rax
  unsigned __int8 v22; // di
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int128 v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rdi
  _QWORD *v28; // rbx
  _QWORD *v29; // rdx
  __m128i v30; // xmm6
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // r9
  __int64 v35; // rdi
  __int64 *v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rcx
  unsigned __int32 v45; // edi
  int v46; // r14d
  __int64 v47; // r12
  __int64 v48; // r15
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // rdx
  __int64 v53; // r14
  char v54; // di
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // r10
  char v58; // r11
  __m128i v59; // xmm0
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rdx
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  __int64 v65; // rdi
  _BYTE *v66; // rdx
  __int64 v67; // rcx
  __m128i v68; // xmm0
  __int64 v69; // rcx
  __m128i v70; // xmm0
  __int64 v71; // r8
  __int64 v72; // rdi
  char v73; // cl
  char result; // al
  _QWORD *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  _QWORD *v78; // rdi
  _QWORD *v79; // rcx
  _QWORD *v80; // r14
  __int64 v81; // rdi
  __int64 v82; // rdx
  _QWORD v83[4]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v84; // [rsp+50h] [rbp-30h]
  __m128i v85; // [rsp+60h] [rbp-20h]
  __m128i v86; // [rsp+70h] [rbp-10h] BYREF
  __m128i v87; // [rsp+80h] [rbp+0h]
  __m128i v88; // [rsp+90h] [rbp+10h]
  __m128i v89; // [rsp+A0h] [rbp+20h]
  __m128i v90; // [rsp+B0h] [rbp+30h]
  __m128i v91; // [rsp+C0h] [rbp+40h]
  __int64 v92; // [rsp+D0h] [rbp+50h]
  const char *v93; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v94; // [rsp+E0h] [rbp+60h]
  const char *v95; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v96; // [rsp+F0h] [rbp+70h]
  _QWORD *v97; // [rsp+F8h] [rbp+78h]
  __m128i v98[20]; // [rsp+100h] [rbp+80h] BYREF
  __m128i v99; // [rsp+240h] [rbp+1C0h] BYREF
  __m128i v100; // [rsp+250h] [rbp+1D0h]
  __m128i v101; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v102; // [rsp+270h] [rbp+1F0h]
  __m128i v103; // [rsp+280h] [rbp+200h]
  __m128i v104; // [rsp+290h] [rbp+210h]
  __m128i v105; // [rsp+2A0h] [rbp+220h]
  __m128i v106; // [rsp+2B0h] [rbp+230h]
  __int64 v107; // [rsp+2C0h] [rbp+240h]
  const char *v108; // [rsp+2C8h] [rbp+248h] BYREF
  __int64 v109; // [rsp+2D0h] [rbp+250h]
  const char *v110; // [rsp+2D8h] [rbp+258h]
  __int64 v111; // [rsp+2E0h] [rbp+260h]
  _QWORD *v112; // [rsp+2E8h] [rbp+268h]
  __m128i v113; // [rsp+2F0h] [rbp+270h]
  __m128i v114; // [rsp+300h] [rbp+280h]
  __m128i v115; // [rsp+310h] [rbp+290h]
  __m128i v116; // [rsp+320h] [rbp+2A0h]
  __m128i v117; // [rsp+330h] [rbp+2B0h]
  __m128i v118; // [rsp+340h] [rbp+2C0h]
  __int64 v119; // [rsp+350h] [rbp+2D0h]
  __int64 v120; // [rsp+358h] [rbp+2D8h] BYREF
  char v121; // [rsp+360h] [rbp+2E0h]
  int v122; // [rsp+361h] [rbp+2E1h]
  __int16 v123; // [rsp+365h] [rbp+2E5h]
  char v124; // [rsp+367h] [rbp+2E7h]
  _QWORD *v125; // [rsp+368h] [rbp+2E8h]
  __int64 v126; // [rsp+370h] [rbp+2F0h]
  _QWORD *v127; // [rsp+378h] [rbp+2F8h]
  __m128i v128; // [rsp+380h] [rbp+300h] BYREF
  __m128i v129; // [rsp+390h] [rbp+310h]
  __m128i v130; // [rsp+3A0h] [rbp+320h] BYREF
  __m128i v131; // [rsp+3B0h] [rbp+330h]
  __m128i v132; // [rsp+3C0h] [rbp+340h]
  __m128i v133; // [rsp+3D0h] [rbp+350h]
  __m128i v134; // [rsp+3E0h] [rbp+360h]
  __m128i v135; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v136; // [rsp+400h] [rbp+380h]
  __int128 v137; // [rsp+408h] [rbp+388h] BYREF
  __int64 v138; // [rsp+418h] [rbp+398h]
  __m128i v139; // [rsp+420h] [rbp+3A0h] BYREF
  __m128i v140; // [rsp+430h] [rbp+3B0h]
  __int64 v141; // [rsp+440h] [rbp+3C0h]
  __int64 v142; // [rsp+448h] [rbp+3C8h]
  __int64 v143; // [rsp+450h] [rbp+3D0h]
  _QWORD *v144; // [rsp+458h] [rbp+3D8h]
  __m128i v145; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v146; // [rsp+470h] [rbp+3F0h]
  _QWORD *v147; // [rsp+478h] [rbp+3F8h]
  _BYTE v148[24]; // [rsp+480h] [rbp+400h] BYREF
  __m128i v149; // [rsp+498h] [rbp+418h]
  __m128i v150; // [rsp+4A8h] [rbp+428h]
  __m128i v151; // [rsp+4B8h] [rbp+438h]
  __m128i v152; // [rsp+4C8h] [rbp+448h]
  __m128i v153; // [rsp+4D8h] [rbp+458h] BYREF
  __m128i v154; // [rsp+4E8h] [rbp+468h]
  _BYTE *v155; // [rsp+4F8h] [rbp+478h]
  __int64 v156; // [rsp+500h] [rbp+480h]
  __int64 v157; // [rsp+508h] [rbp+488h]
  __int64 v158; // [rsp+510h] [rbp+490h]
  _BYTE *v159; // [rsp+518h] [rbp+498h]
  _QWORD *v160; // [rsp+520h] [rbp+4A0h]
  _QWORD *v161; // [rsp+528h] [rbp+4A8h]
  char v162; // [rsp+537h] [rbp+4B7h] BYREF
  __int64 v163; // [rsp+538h] [rbp+4B8h]
  _QWORD *v164; // [rsp+540h] [rbp+4C0h]
  __int64 v165; // [rsp+548h] [rbp+4C8h]
  __int64 v166; // [rsp+550h] [rbp+4D0h]
  __int64 v167; // [rsp+558h] [rbp+4D8h]

  v167 = -2; /*0x140cce053*/
  v5 = a2; /*0x140cce05e*/
  v6 = a1; /*0x140cce061*/
  v7 = *(unsigned __int8 *)(a1 + 12848); /*0x140cce064*/
  v166 = a1; /*0x140cce079*/
  switch ( v7 ) /*0x140cce080*/
  {
    case 0LL: /*0x140cce080*/
      *(_WORD *)(a1 + 12849) = 257; /*0x140cce082*/
      *(_BYTE *)(a1 + 12851) = 1; /*0x140cce08b*/
      v8 = (_QWORD *)(a1 + 6616); /*0x140cce099*/
      sub_141684120(a1 + 6616, a1 + 392, 6224); /*0x140cce0a9*/
      switch ( *(_BYTE *)(v6 + 12832) ) /*0x140cce0c3*/
      {
        case 0: /*0x140cce0c3*/
          goto LABEL_4;
        case 1: /*0x140cce0c3*/
          goto LABEL_106;
        case 2: /*0x140cce0c3*/
          goto LABEL_105;
        case 3: /*0x140cce0c3*/
          goto LABEL_8;
      }
    case 1LL: /*0x140cce080*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140ccf46c*/
    case 2LL: /*0x140cce080*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140ccf45e*/
    case 3LL: /*0x140cce080*/
      v8 = (_QWORD *)(a1 + 6616); /*0x140cce0c5*/
      switch ( *(_BYTE *)(a1 + 12832) ) /*0x140cce0e1*/
      {
        case 0: /*0x140cce0e1*/
LABEL_4:
          v93 = aTestRelayDraft; /*0x140cce0e3*/
          v94 = 23; /*0x140cce100*/
          v95 = aManager_1; /*0x140cce10f*/
          v96 = 7; /*0x140cce113*/
          v164 = v8; /*0x140cce11b*/
          v97 = v8; /*0x140cce122*/
          v161 = (_QWORD *)(v6 + 7136); /*0x140cce126*/
          v98[0] = (__m128i)(unsigned __int64)(v6 + 7136); /*0x140cce12d*/
          v9 = sub_140004B10((volatile void *)(*(_QWORD *)(v6 + 7128) + 16LL)); /*0x140cce145*/
          if ( v9 ) /*0x140cce14b*/
            goto LABEL_5; /*0x140cce14b*/
          sub_1416850A0(&v145, &v93, &v95); /*0x140cce398*/
          v11 = v145.m128i_i8[0]; /*0x140cce39e*/
          if ( v145.m128i_i8[0] == -1 ) /*0x140cce3aa*/
          {
            v9 = v145.m128i_i64[1]; /*0x140ccf3c8*/
LABEL_5:
            v108 = aTestRelayDraft; /*0x140cce151*/
            v109 = 23; /*0x140cce163*/
            v110 = aInput_4; /*0x140cce175*/
            v111 = 5; /*0x140cce17c*/
            v112 = v164; /*0x140cce18e*/
            v113 = (__m128i)(unsigned __int64)v161; /*0x140cce19c*/
            sub_140AF0060(&v93, &v108); /*0x140cce1ae*/
            v160 = v5; /*0x140cce1b4*/
            v10 = (unsigned __int64)((HIBYTE(v94) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v94 + 5)) << 32; /*0x140cce1cc*/
            v4 = v10 | *(unsigned int *)((char *)&v94 + 1); /*0x140cce1d4*/
            v11 = v94; /*0x140cce1d7*/
            v12 = v95; /*0x140cce1dc*/
            v13 = v96; /*0x140cce1e0*/
            v14 = v97; /*0x140cce1e4*/
            if ( v93 != (const char *)-1LL ) /*0x140cce1ec*/
            {
              v154 = v98[6]; /*0x140cce1f9*/
              v153 = v98[5]; /*0x140cce207*/
              v152 = v98[4]; /*0x140cce215*/
              v15 = _mm_loadu_si128(v98); /*0x140cce21c*/
              v151 = v98[3]; /*0x140cce239*/
              v150 = v98[2]; /*0x140cce240*/
              v149 = v98[1]; /*0x140cce247*/
              *(__m128i *)&v148[8] = v15; /*0x140cce24e*/
              *(__int32 *)((char *)&v145.m128i_i32[2] + 1) = *(_DWORD *)((char *)&v94 + 1); /*0x140cce256*/
              v145.m128i_i8[15] = (v10 | *(unsigned int *)((char *)&v94 + 1)) >> 48; /*0x140cce264*/
              v4 >>= 32; /*0x140cce26a*/
              *(__int16 *)((char *)&v145.m128i_i16[6] + 1) = v4; /*0x140cce26e*/
              v147 = (_QWORD *)v96; /*0x140cce276*/
              *(_QWORD *)v148 = v97; /*0x140cce27d*/
              v145.m128i_i64[0] = (__int64)v93; /*0x140cce284*/
              v145.m128i_i8[8] = v94; /*0x140cce28b*/
              v146 = (__int64)v95; /*0x140cce292*/
              v93 = aTestRelayDraft; /*0x140cce2a4*/
              v94 = 23; /*0x140cce2a8*/
              v95 = aOnevent_0; /*0x140cce2b7*/
              v96 = 7; /*0x140cce2bb*/
              v97 = v164; /*0x140cce2ca*/
              v98[0] = (__m128i)(unsigned __int64)v161; /*0x140cce2d5*/
              sub_1409795C0(&v108, &v93); /*0x140cce2e7*/
              v11 = (char)v108; /*0x140cce2ed*/
              if ( (_BYTE)v108 == 0xFF ) /*0x140cce2f9*/
              {
                v23 = v109; /*0x140cce48c*/
                v6 = v166; /*0x140cce493*/
                v24 = v166 + 7160; /*0x140cce49a*/
                *(_QWORD *)(v166 + 7312) = v9; /*0x140cce4a1*/
                sub_141684120(v24, &v145, 152); /*0x140cce4b8*/
                *(_QWORD *)(v6 + 7320) = v23; /*0x140cce4bd*/
                *(_BYTE *)(v6 + 9040) = 0; /*0x140cce4c4*/
                v17 = v6 + 9048; /*0x140cce4cb*/
                sub_141684120(v6 + 9048, v24, 1888); /*0x140cce4de*/
                v16 = (_BYTE *)(v6 + 12824); /*0x140cce4e3*/
                *(_BYTE *)(v6 + 12824) = 0; /*0x140cce4ea*/
                v8 = v164; /*0x140cce4f1*/
                v5 = v160; /*0x140cce4f8*/
LABEL_20:
                v18 = v6 + 10936; /*0x140cce4ff*/
                sub_141684120(v6 + 10936, v17, 1888); /*0x140cce512*/
                switch ( *(_BYTE *)(v6 + 12816) ) /*0x140cce52c*/
                {
                  case 0: /*0x140cce52c*/
                    goto LABEL_21;
                  case 1: /*0x140cce52c*/
                    goto LABEL_108;
                  case 2: /*0x140cce52c*/
                    goto LABEL_107;
                  case 3: /*0x140cce52c*/
                    goto LABEL_22;
                }
              }
              v4 = ((unsigned __int64)((HIBYTE(v108) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v108 + 5)) << 32) /*0x140cce31d*/
                 | *(unsigned int *)((char *)&v108 + 1);
              v12 = (_QWORD *)v109; /*0x140cce320*/
              v13 = (__int64)v110; /*0x140cce327*/
              v14 = (_QWORD *)v111; /*0x140cce32e*/
              sub_14052E930(&v145); /*0x140cce33c*/
            }
          }
          else
          {
            v4 = ((unsigned __int64)((v145.m128i_u8[7] << 16) /*0x140cce3ce*/
                                   | (unsigned int)*(unsigned __int16 *)((char *)&v145.m128i_u16[2] + 1)) << 32)
               | *(unsigned int *)((char *)v145.m128i_u32 + 1);
            v12 = (_QWORD *)v145.m128i_i64[1]; /*0x140cce3d1*/
            v13 = v146; /*0x140cce3d8*/
            v14 = v147; /*0x140cce3df*/
          }
          sub_140BF0DE0(v164); /*0x140cce3ed*/
          if ( *v161 == -1 ) /*0x140cce3fe*/
          {
            v22 = 1; /*0x140cce484*/
            goto LABEL_96; /*0x140cce487*/
          }
          v160 = (_QWORD *)(v166 + 7144); /*0x140cce412*/
          v19 = *(_BYTE **)(v166 + 7144); /*0x140cce419*/
          v163 = *(_QWORD *)(v166 + 7152); /*0x140cce427*/
          v165 = 0; /*0x140cce42e*/
          v155 = v19; /*0x140cce439*/
          while ( v163 != v165 ) /*0x140cce44e*/
          {
            ++v165; /*0x140cce453*/
            v20 = v19 + 96; /*0x140cce45a*/
            sub_1402C7520(); /*0x140cce45e*/
            v19 = v20; /*0x140cce464*/
          }
          v21 = *v161; /*0x140cce470*/
          v22 = 1; /*0x140cce473*/
          if ( !*v161 ) /*0x140cce470*/
            goto LABEL_96; /*0x140cce479*/
          goto LABEL_95; /*0x140cce479*/
        case 1: /*0x140cce0e1*/
LABEL_106:
          v164 = v8; /*0x140ccf48c*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140ccf49a*/
        case 2: /*0x140cce0e1*/
LABEL_105:
          v164 = v8; /*0x140ccf473*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140ccf481*/
        case 3: /*0x140cce0e1*/
          goto LABEL_8;
      }
  }
LABEL_8:
  v16 = (_BYTE *)(v6 + 12824); /*0x140cce346*/
  v17 = v6 + 9048; /*0x140cce354*/
  switch ( *(_BYTE *)(v6 + 12824) ) /*0x140cce369*/
  {
    case 0: /*0x140cce369*/
      goto LABEL_20;
    case 1: /*0x140cce369*/
      v164 = v8; /*0x140ccf528*/
      v142 = v6 + 12824; /*0x140ccf52f*/
      v141 = v6 + 9048; /*0x140ccf536*/
      sub_1416C3400(&off_1417B7B80, a2, a3, a4); /*0x140ccf544*/
    case 2: /*0x140cce369*/
      v164 = v8; /*0x140ccf501*/
      v142 = v6 + 12824; /*0x140ccf508*/
      v141 = v6 + 9048; /*0x140ccf50f*/
      sub_1416C3420(&off_1417B7B80, a2, a3, a4); /*0x140ccf51d*/
    case 3: /*0x140cce369*/
      v18 = v6 + 10936; /*0x140cce36b*/
      switch ( *(_BYTE *)(v6 + 12816) ) /*0x140cce387*/
      {
        case 0: /*0x140cce387*/
LABEL_21:
          v160 = v5; /*0x140cce52e*/
          sub_141684120(&v93, v18, 152); /*0x140cce542*/
          v4 = v6 + 11112; /*0x140cce547*/
          v25 = *(_OWORD *)(v6 + 11088); /*0x140cce54e*/
          v26 = v18; /*0x140cce555*/
          v27 = v6; /*0x140cce558*/
          v28 = *(_QWORD **)(v6 + 11088); /*0x140cce55b*/
          *(_OWORD *)(v27 + 11104) = v25; /*0x140cce562*/
          *(_BYTE *)(v27 + 12817) = 0; /*0x140cce569*/
          v156 = v26; /*0x140cce580*/
          sub_141684120(v27 + 11120, v26, 152); /*0x140cce587*/
          v29 = (_QWORD *)(v27 + 11120); /*0x140cce58c*/
          *(_QWORD *)(v27 + 11272) = v28; /*0x140cce58f*/
          *(_QWORD *)(v27 + 11280) = v4; /*0x140cce596*/
          *(_QWORD *)(v27 + 11288) = &off_1417BAED8; /*0x140cce5a4*/
          v155 = (_BYTE *)(v27 + 12808); /*0x140cce5b2*/
          *(_BYTE *)(v27 + 12808) = 0; /*0x140cce5b9*/
          v30 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(unsigned __int64)&off_1417BAED8); /*0x140cce5ca*/
LABEL_24:
          *(_WORD *)(v27 + 12809) = 257; /*0x140cce61c*/
          *(_BYTE *)(v27 + 12811) = 1; /*0x140cce625*/
          v14 = (_QWORD *)(v27 + 11296); /*0x140cce62c*/
          v161 = v29; /*0x140cce63c*/
          sub_141684120(v27 + 11296, v29, 152); /*0x140cce643*/
          v146 = *(_QWORD *)(v27 + 11184); /*0x140cce64f*/
          v145 = _mm_loadu_si128((const __m128i *)(v27 + 11168)); /*0x140cce65e*/
          v32 = *(_QWORD *)(v27 + 11408); /*0x140cce666*/
          v33 = *(_QWORD *)(v27 + 11392) == -1; /*0x140cce66d*/
          v164 = v8; /*0x140cce675*/
          v159 = v16; /*0x140cce67c*/
          v157 = v17; /*0x140cce683*/
          if ( v33 ) /*0x140cce68a*/
            v34 = 0; /*0x140cce695*/
          else
            v34 = *(_QWORD *)(v27 + 11400); /*0x140cce68c*/
          v144 = v161; /*0x140cce69f*/
          sub_14084AD00((__int64 *)&v137, v28, &v145, v34, v32); /*0x140cce6bc*/
          v35 = v166; /*0x140cce6c2*/
          sub_140A49CF0(&v145, *(_QWORD *)(v166 + 11328), *(_QWORD *)(v166 + 11336)); /*0x140cce6de*/
          v36 = (__int64 *)(v35 + 11392); /*0x140cce6e4*/
          v37 = v145.m128i_i64[1]; /*0x140cce6eb*/
          v165 = v146; /*0x140cce6f9*/
          v163 = (__int64)v147; /*0x140cce707*/
          if ( v145.m128i_i8[0] ) /*0x140cce715*/
          {
            if ( (_QWORD)v137 ) /*0x140cce725*/
              sub_140001660(*((_QWORD *)&v137 + 1), v137, 1); /*0x140cce734*/
            v38 = *v36; /*0x140cce739*/
            v39 = v166; /*0x140cce740*/
            if ( *v36 != -1 && v38 ) /*0x140cce74c*/
              sub_140001660(*(_QWORD *)(v166 + 11400), v38, 1); /*0x140cce75b*/
            if ( *v14 ) /*0x140cce760*/
              sub_140001660(*(_QWORD *)(v39 + 11304), *v14, 1); /*0x140cce775*/
            v40 = *(_QWORD *)(v39 + 11320); /*0x140cce77a*/
            if ( v40 ) /*0x140cce784*/
              sub_140001660(*(_QWORD *)(v39 + 11328), v40, 1); /*0x140cce793*/
            v41 = *(_QWORD *)(v39 + 11368); /*0x140cce798*/
            if ( v41 ) /*0x140cce7a2*/
              sub_140001660(*(_QWORD *)(v39 + 11376), v41, 1); /*0x140cce7b1*/
            v42 = *(_QWORD *)(v39 + 11416); /*0x140cce7b6*/
            if ( v42 != -1 && v42 ) /*0x140cce7c6*/
              sub_140001660(*(_QWORD *)(v39 + 11424), v42, 1); /*0x140cce7d5*/
            *(_WORD *)(v39 + 12809) = 0; /*0x140cce7da*/
            *(_BYTE *)(v39 + 12811) = 0; /*0x140cce7e3*/
            v43 = 9; /*0x140cce7ea*/
            v6 = 0; /*0x140cce7ef*/
            goto LABEL_63; /*0x140cce7f1*/
          }
          v158 = v145.m128i_i64[1]; /*0x140cce7f6*/
          sub_140FFA6E0(&v145); /*0x140cce804*/
          v45 = v145.m128i_i32[0]; /*0x140cce80a*/
          v46 = (v145.m128i_i32[0] >> 13) - 1; /*0x140cce815*/
          v4 = 0; /*0x140cce819*/
          if ( v145.m128i_i32[0] >> 13 <= 0 ) /*0x140cce81e*/
          {
            v49 = (1 - (v145.m128i_i32[0] >> 13)) / 0x190u + 1; /*0x140cce86c*/
            v44 = 400 * v49; /*0x140cce86e*/
            v46 += v44; /*0x140cce874*/
            v4 = -146097 * v49; /*0x140cce877*/
            v47 = v145.m128i_u32[1]; /*0x140cce87e*/
            v48 = v145.m128i_u32[2]; /*0x140cce885*/
            if ( *v36 == -1 ) /*0x140cce890*/
              goto LABEL_50; /*0x140cce890*/
          }
          else
          {
            v47 = v145.m128i_u32[1]; /*0x140cce820*/
            v48 = v145.m128i_u32[2]; /*0x140cce827*/
            if ( *v36 == -1 ) /*0x140cce832*/
              goto LABEL_50; /*0x140cce832*/
          }
          sub_14149C500(&v145, v36); /*0x140cce89c*/
          v44 = v145.m128i_i64[0]; /*0x140cce8a2*/
          if ( v145.m128i_i64[0] != -1 ) /*0x140cce8ad*/
          {
            v50 = v145.m128i_i64[1]; /*0x140cce8af*/
            v51 = v146; /*0x140cce8b6*/
            goto LABEL_52; /*0x140cce8bd*/
          }
LABEL_50:
          nullsub_1(v44); /*0x140cce8bf*/
          v51 = 9; /*0x140cce8c4*/
          v50 = sub_140001650(9, 1); /*0x140cce8d3*/
          if ( !v50 ) /*0x140cce8db*/
            sub_1416C2D4B(1, 9); /*0x140ccf5ac*/
          *(_QWORD *)v50 = 0x5F74666172645F5FLL; /*0x140cce8eb*/
          *(_BYTE *)(v50 + 8) = 95; /*0x140cce8ee*/
          v44 = 9; /*0x140cce8f2*/
LABEL_52:
          v52 = 1000 /*0x140cce8f7*/
              * (v47
               + 86400LL
               * (int)(((1461 * v46) >> 2) + v4 + ((v45 >> 4) & 0x1FF) - v46 / 100 + ((v46 / 100) >> 2) - 719163))
              + ((unsigned __int64)(1125899907 * v48) >> 50);
          v53 = v166; /*0x140cce958*/
          *(_BYTE *)(v166 + 12811) = 0; /*0x140cce95f*/
          v54 = *(_BYTE *)(v53 + 11441); /*0x140cce967*/
          *(_WORD *)(v53 + 12809) = 0; /*0x140cce96f*/
          v55 = *(_QWORD *)(v53 + 11416); /*0x140cce979*/
          v56 = 0; /*0x140cce980*/
          v57 = 1; /*0x140cce987*/
          if ( v55 == -1 ) /*0x140cce98d*/
          {
            v55 = 0; /*0x140cce995*/
          }
          else
          {
            v57 = *(_QWORD *)(v53 + 11424); /*0x140cce98d*/
            v56 = *(_QWORD *)(v53 + 11432); /*0x140cce999*/
          }
          v58 = *(_BYTE *)(v53 + 11440); /*0x140cce9a1*/
          *(_QWORD *)(v53 + 11448) = v44; /*0x140cce9a9*/
          *(_QWORD *)(v53 + 11456) = v50; /*0x140cce9b0*/
          *(_QWORD *)(v53 + 11464) = v51; /*0x140cce9b7*/
          v6 = v53; /*0x140cce9be*/
          *(_OWORD *)(v53 + 11472) = *(_OWORD *)v14; /*0x140cce9c4*/
          *(_QWORD *)(v53 + 11488) = v14[2]; /*0x140cce9d0*/
          *(_QWORD *)(v53 + 11496) = v158; /*0x140cce9de*/
          *(_QWORD *)(v53 + 11504) = v165; /*0x140cce9ec*/
          *(_QWORD *)(v53 + 11512) = v163; /*0x140cce9fa*/
          *(_OWORD *)(v53 + 11520) = v137; /*0x140ccea08*/
          *(_QWORD *)(v53 + 11536) = v138; /*0x140ccea17*/
          *(_BYTE *)(v53 + 11676) = 0; /*0x140ccea1e*/
          *(_QWORD *)(v53 + 11560) = *(_QWORD *)(v53 + 11384); /*0x140ccea2d*/
          *(__m128i *)(v53 + 11544) = _mm_loadu_si128((const __m128i *)(v53 + 11368)); /*0x140ccea3d*/
          *(_BYTE *)(v53 + 11678) = v54; /*0x140ccea46*/
          *(_BYTE *)(v53 + 11679) = 0; /*0x140ccea4d*/
          *(_QWORD *)(v53 + 11568) = 0; /*0x140ccea55*/
          *(_QWORD *)(v53 + 11576) = 8; /*0x140ccea60*/
          *(_QWORD *)(v53 + 11584) = 0; /*0x140ccea6b*/
          *(_QWORD *)(v53 + 11592) = v55; /*0x140ccea76*/
          *(_QWORD *)(v53 + 11600) = v57; /*0x140ccea7d*/
          *(_QWORD *)(v53 + 11608) = v56; /*0x140ccea84*/
          *(_DWORD *)(v53 + 11672) = 0; /*0x140ccea8b*/
          *(_QWORD *)(v53 + 11640) = -1; /*0x140ccea96*/
          *(_QWORD *)(v53 + 11648) = 0; /*0x140cceaa1*/
          *(_QWORD *)(v53 + 11656) = v52; /*0x140cceaac*/
          *(_QWORD *)(v53 + 11664) = v52; /*0x140cceab3*/
          *(_QWORD *)(v53 + 11616) = -1; /*0x140cceaba*/
          *(_BYTE *)(v53 + 11677) = v58; /*0x140cceac5*/
          *(__m128i *)(v53 + 12672) = v30; /*0x140ccead3*/
          *(_QWORD *)(v53 + 12792) = v53 + 11448; /*0x140cceadc*/
          *(_BYTE *)(v53 + 12802) = 0; /*0x140cceae3*/
          v5 = v160; /*0x140cceaeb*/
LABEL_56:
          v158 = v6 + 11680; /*0x140cceaf2*/
          sub_140CF8FE0(&v145, v6 + 11680, v5); /*0x140cceb0a*/
          v37 = v145.m128i_i64[0]; /*0x140cceb10*/
          if ( v145.m128i_i64[0] == -1 ) /*0x140cceb1b*/
          {
            v66 = (_BYTE *)v166; /*0x140ccf162*/
            *(_BYTE *)(v166 + 12808) = 3; /*0x140ccf169*/
            v66[12816] = 3; /*0x140ccf170*/
LABEL_82:
            v66[12824] = 3; /*0x140ccf177*/
            v66[12832] = 3; /*0x140ccf17e*/
            v73 = 3; /*0x140ccf185*/
            result = 1; /*0x140ccf187*/
            goto LABEL_97; /*0x140ccf189*/
          }
          v165 = v145.m128i_i64[1]; /*0x140cceb28*/
          v163 = v146; /*0x140cceb36*/
          v14 = v147; /*0x140cceb3d*/
          v139 = *(__m128i *)v148; /*0x140cceb4b*/
          v140 = _mm_loadu_si128((const __m128i *)&v148[16]); /*0x140cceb5a*/
          sub_140BEE1A0(v158); /*0x140cceb69*/
          v59 = _mm_load_si128(&v139); /*0x140cceb6f*/
          v129 = v140; /*0x140cceb7e*/
          v128 = v59; /*0x140cceb85*/
          v60 = v166; /*0x140cceb8d*/
          sub_140018960(v166 + 11448); /*0x140cceb9b*/
          v61 = *(_QWORD *)(v60 + 11392); /*0x140cceba0*/
          if ( v61 != -1 && v61 ) /*0x140ccebb0*/
            sub_140001660(*(_QWORD *)(v60 + 11400), v61, 1); /*0x140ccebbf*/
          v62 = *(_QWORD *)(v60 + 11320); /*0x140ccebc4*/
          if ( v62 ) /*0x140ccebce*/
            sub_140001660(*(_QWORD *)(v60 + 11328), v62, 1); /*0x140ccebdd*/
          *(_WORD *)(v60 + 12809) = 0; /*0x140ccebe2*/
          *(_BYTE *)(v60 + 12811) = 0; /*0x140ccebeb*/
          v43 = -1; /*0x140ccebf2*/
          LOBYTE(v6) = 1; /*0x140ccebf9*/
LABEL_63:
          v63 = _mm_load_si128(&v128); /*0x140ccebfb*/
          v100 = v129; /*0x140ccec0a*/
          v99 = v63; /*0x140ccec11*/
          *v155 = 1; /*0x140ccec20*/
          sub_140BE83F0(v161); /*0x140ccec2a*/
          if ( !(_BYTE)v6 ) /*0x140ccec32*/
          {
            v145.m128i_i64[0] = v43; /*0x140ccedce*/
            v145.m128i_i64[1] = v37; /*0x140ccedd5*/
            v146 = v165; /*0x140ccede3*/
            v147 = (_QWORD *)v163; /*0x140ccedf1*/
            *(_QWORD *)v148 = v14; /*0x140ccedf8*/
            *(__m128i *)&v148[8] = _mm_load_si128(&v99); /*0x140ccee0e*/
            v149 = v100; /*0x140ccee16*/
            v139.m128i_i64[0] = 0; /*0x140ccee1d*/
            v139.m128i_i64[1] = 1; /*0x140ccee28*/
            v140.m128i_i64[0] = 0; /*0x140ccee33*/
            v129.m128i_i64[0] = 1610612768; /*0x140ccee3e*/
            v128.m128i_i64[0] = (__int64)&v139; /*0x140ccee50*/
            v128.m128i_i64[1] = (__int64)&off_1417C41C0; /*0x140ccee5e*/
            if ( (unsigned __int8)sub_140B036A0(&v145, &v128) ) /*0x140ccee73*/
              sub_1416C3060( /*0x140ccf41b*/
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v162,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v163 = v139.m128i_i64[1]; /*0x140ccee96*/
            v165 = v139.m128i_i64[0]; /*0x140ccee96*/
            v14 = (_QWORD *)v140.m128i_i64[0]; /*0x140ccee9d*/
            sub_140BF2F60(&v145); /*0x140cceeab*/
            goto LABEL_71; /*0x140cceeab*/
          }
          if ( v37 == -1 ) /*0x140ccec3c*/
          {
LABEL_71:
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v166 + 11112)) ) /*0x140cceebf*/
              sub_1405760F0(v166 + 11112); /*0x140cceed3*/
            v67 = v166; /*0x140cceed9*/
            *(_BYTE *)(v166 + 12817) = 0; /*0x140cceee0*/
            v101 = v130; /*0x140ccef03*/
            v102 = v131; /*0x140ccef0a*/
            v103 = v132; /*0x140ccef11*/
            v104 = v133; /*0x140ccef18*/
            v105 = v134; /*0x140ccef26*/
            v106 = _mm_load_si128(&v135); /*0x140ccef35*/
            v107 = v136; /*0x140ccef44*/
            *(_BYTE *)(v67 + 12816) = 1; /*0x140ccef4b*/
            v65 = -1; /*0x140ccef52*/
            goto LABEL_74; /*0x140ccef52*/
          }
          v64 = _mm_load_si128(&v99); /*0x140ccec42*/
          v85 = v100; /*0x140ccec51*/
          v84 = v64; /*0x140ccec55*/
          v83[0] = v37; /*0x140ccec5a*/
          v83[1] = v165; /*0x140ccec65*/
          v83[2] = v163; /*0x140ccec70*/
          v83[3] = v14; /*0x140ccec74*/
          sub_140ACE590(&v145, v83); /*0x140ccec83*/
          v165 = v145.m128i_i64[1]; /*0x140ccec97*/
          v65 = v145.m128i_i64[0]; /*0x140ccec97*/
          v163 = v146; /*0x140cceca5*/
          v14 = v147; /*0x140ccecac*/
          v6 = *(_QWORD *)v148; /*0x140ccecb3*/
          v130 = *(__m128i *)&v148[8]; /*0x140ccecc1*/
          v131 = v149; /*0x140cceccf*/
          v132 = v150; /*0x140ccecdd*/
          v133 = v151; /*0x140cceceb*/
          v134 = v152; /*0x140ccecf9*/
          v135 = _mm_loadu_si128(&v153); /*0x140cced08*/
          v136 = v154.m128i_i64[0]; /*0x140cced17*/
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v166 + 11112)) ) /*0x140cced2c*/
            sub_1405760F0(v166 + 11112); /*0x140cced40*/
          v66 = (_BYTE *)v166; /*0x140cced46*/
          *(_BYTE *)(v166 + 12817) = 0; /*0x140cced4d*/
          v101 = v130; /*0x140cced70*/
          v102 = v131; /*0x140cced77*/
          v103 = v132; /*0x140cced7e*/
          v104 = v133; /*0x140cced85*/
          v105 = v134; /*0x140cced93*/
          v106 = _mm_load_si128(&v135); /*0x140cceda2*/
          v107 = v136; /*0x140ccedb1*/
          v66[12816] = 1; /*0x140ccedb8*/
          if ( v65 == -2 ) /*0x140ccedc3*/
            goto LABEL_82; /*0x140ccedc3*/
LABEL_74:
          v92 = v107; /*0x140ccef59*/
          v91 = v106; /*0x140ccef6b*/
          v90 = v105; /*0x140ccef76*/
          v68 = _mm_load_si128(&v101); /*0x140ccef7a*/
          v89 = v104; /*0x140ccef97*/
          v88 = v103; /*0x140ccef9b*/
          v87 = v102; /*0x140ccef9f*/
          v86 = v68; /*0x140ccefa3*/
          sub_140BEA080(v156); /*0x140ccefaf*/
          if ( v65 != -1 ) /*0x140ccefb9*/
          {
            v119 = v92; /*0x140ccefc3*/
            v118 = v91; /*0x140ccefce*/
            v117 = v90; /*0x140ccefd9*/
            v70 = _mm_load_si128(&v86); /*0x140ccefe0*/
            v116 = v89; /*0x140cceff1*/
            v115 = v88; /*0x140cceff8*/
            v114 = v87; /*0x140ccefff*/
            v113 = v70; /*0x140ccf006*/
            v108 = (const char *)v65; /*0x140ccf00e*/
            v109 = v165; /*0x140ccf01c*/
            v110 = (const char *)v163; /*0x140ccf02a*/
            v111 = (__int64)v14; /*0x140ccf031*/
            v112 = (_QWORD *)v6; /*0x140ccf038*/
            sub_140B0CD30(&v93, &v108); /*0x140ccf04a*/
            v4 = ((unsigned __int64)((HIBYTE(v94) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v94 + 5)) << 32) /*0x140ccf069*/
               | *(unsigned int *)((char *)&v94 + 1);
            v11 = v94; /*0x140ccf06c*/
            v12 = v95; /*0x140ccf071*/
            v13 = v96; /*0x140ccf075*/
            v14 = v97; /*0x140ccf079*/
            if ( v93 == (const char *)-1LL ) /*0x140ccf081*/
            {
              v22 = 0; /*0x140ccf18e*/
            }
            else
            {
              HIBYTE(v94) = (((unsigned __int64)((HIBYTE(v94) << 16) /*0x140ccf095*/
                                               | (unsigned int)*(unsigned __int16 *)((char *)&v94 + 5)) << 32)
                           | *(unsigned int *)((char *)&v94 + 1)) >> 48;
              *(_WORD *)((char *)&v94 + 5) = WORD2(v4); /*0x140ccf09f*/
              *(_DWORD *)((char *)&v94 + 1) = v4; /*0x140ccf0a3*/
              v130.m128i_i64[0] = 0; /*0x140ccf0c2*/
              v130.m128i_i64[1] = 1; /*0x140ccf0cd*/
              v131.m128i_i64[0] = 0; /*0x140ccf0d8*/
              v146 = 1610612768; /*0x140ccf0e3*/
              v145.m128i_i64[0] = (__int64)&v130; /*0x140ccf0f5*/
              v145.m128i_i64[1] = (__int64)&off_1417C41C0; /*0x140ccf103*/
              if ( (unsigned __int8)sub_141230630(&v93, &v145, v71) ) /*0x140ccf115*/
                sub_1416C3060( /*0x140ccf44c*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v162,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v13 = v130.m128i_i64[1]; /*0x140ccf12a*/
              v12 = (_QWORD *)v130.m128i_i64[0]; /*0x140ccf12a*/
              v14 = (_QWORD *)v131.m128i_i64[0]; /*0x140ccf131*/
              sub_140BF0F60(&v93); /*0x140ccf13c*/
              v22 = 1; /*0x140ccf142*/
              v11 = 3; /*0x140ccf145*/
            }
            v75 = v164; /*0x140ccf190*/
            goto LABEL_90; /*0x140ccf197*/
          }
          if ( (__int64)v14 < 0 ) /*0x140ccf14d*/
          {
            v72 = 0; /*0x140ccf14f*/
            goto LABEL_80; /*0x140ccf14f*/
          }
          if ( !v14 ) /*0x140ccf199*/
          {
            v13 = 1; /*0x140ccf3d4*/
            v77 = v165; /*0x140ccf3d9*/
            v75 = v164; /*0x140ccf3e3*/
            if ( !v165 ) /*0x140ccf3ea*/
              goto LABEL_89; /*0x140ccf3ea*/
            goto LABEL_88; /*0x140ccf3ea*/
          }
          nullsub_1(v69); /*0x140ccf19f*/
          v72 = 1; /*0x140ccf1a4*/
          v76 = sub_140001650(v14, 1); /*0x140ccf1b1*/
          if ( !v76 ) /*0x140ccf1b9*/
LABEL_80:
            sub_1416C2D4B(v72, v14); /*0x140ccf151*/
          v13 = v76; /*0x140ccf1bb*/
          sub_141684120(v76, v163, v14); /*0x140ccf1cb*/
          v77 = v165; /*0x140ccf1d0*/
          v75 = v164; /*0x140ccf1da*/
          if ( v165 ) /*0x140ccf1e1*/
          {
LABEL_88:
            v78 = v75; /*0x140ccf1e3*/
            sub_140001660(v163, v77, 1); /*0x140ccf1f3*/
            v75 = v78; /*0x140ccf1f8*/
          }
LABEL_89:
          v22 = 1; /*0x140ccf1fb*/
          v11 = 3; /*0x140ccf1fe*/
          v12 = v14; /*0x140ccf201*/
LABEL_90:
          *v159 = 1; /*0x140ccf204*/
          sub_140BF0DE0(v75); /*0x140ccf20e*/
          if ( *(_QWORD *)(v166 + 7136) != -1 ) /*0x140ccf223*/
          {
            v160 = (_QWORD *)(v166 + 7144); /*0x140ccf230*/
            v79 = *(_QWORD **)(v166 + 7144); /*0x140ccf237*/
            v163 = *(_QWORD *)(v166 + 7152); /*0x140ccf245*/
            v165 = 0; /*0x140ccf24c*/
            v161 = v79; /*0x140ccf257*/
            while ( v163 != v165 ) /*0x140ccf26e*/
            {
              ++v165; /*0x140ccf273*/
              v80 = v79 + 12; /*0x140ccf27a*/
              sub_1402C7520(); /*0x140ccf27e*/
              v79 = v80; /*0x140ccf284*/
            }
            v21 = *(_QWORD *)(v166 + 7136); /*0x140ccf290*/
            if ( v21 ) /*0x140ccf29a*/
LABEL_95:
              sub_140001660(*v160, 96 * v21, 8); /*0x140ccf29c*/
          }
LABEL_96:
          *(_BYTE *)(v166 + 12832) = 1; /*0x140ccf2b9*/
          sub_140BE6230(v164); /*0x140ccf2ce*/
          v122 = v4; /*0x140ccf2d4*/
          v124 = BYTE6(v4); /*0x140ccf2e2*/
          v123 = WORD2(v4); /*0x140ccf2ec*/
          v126 = v13; /*0x140ccf2f4*/
          v127 = v14; /*0x140ccf2fb*/
          v121 = v11; /*0x140ccf306*/
          v125 = v12; /*0x140ccf30d*/
          v120 = v22; /*0x140ccf314*/
          v81 = v166; /*0x140ccf31b*/
          *(_BYTE *)(v166 + 12851) = 0; /*0x140ccf322*/
          sub_141684120(&v93, v81, 360); /*0x140ccf339*/
          *(_BYTE *)(v81 + 12850) = 0; /*0x140ccf33e*/
          v82 = *(_QWORD *)(v81 + 384); /*0x140ccf345*/
          *(_BYTE *)(v81 + 12849) = 0; /*0x140ccf34c*/
          v146 = *(_QWORD *)(v81 + 376); /*0x140ccf35a*/
          v145 = _mm_loadu_si128((const __m128i *)(v81 + 360)); /*0x140ccf369*/
          sub_14047E370( /*0x140ccf396*/
            (unsigned int)&v93,
            v82,
            (unsigned int)&v120,
            (unsigned int)&v145,
            *(_DWORD *)(v81 + 12840),
            *(_DWORD *)(v81 + 12844));
          v73 = 1; /*0x140ccf39c*/
          result = 0; /*0x140ccf39e*/
          v66 = (_BYTE *)v166; /*0x140ccf3a0*/
LABEL_97:
          v66[12848] = v73; /*0x140ccf3a7*/
          return result;
        case 1: /*0x140cce387*/
LABEL_108:
          v156 = v18; /*0x140ccf4d3*/
          v157 = v17; /*0x140ccf4da*/
          v159 = v16; /*0x140ccf4e1*/
          v164 = v8; /*0x140ccf4e8*/
          sub_1416C3400(&off_1417BAF08, a2, a3, a4); /*0x140ccf4f6*/
        case 2: /*0x140cce387*/
LABEL_107:
          v156 = v18; /*0x140ccf4a5*/
          v157 = v17; /*0x140ccf4ac*/
          v159 = v16; /*0x140ccf4b3*/
          v164 = v8; /*0x140ccf4ba*/
          sub_1416C3420(&off_1417BAF08, a2, a3, a4); /*0x140ccf4c8*/
        case 3: /*0x140cce387*/
LABEL_22:
          v155 = (_BYTE *)(v6 + 12808); /*0x140cce5d7*/
          v31 = *(unsigned __int8 *)(v6 + 12808); /*0x140cce5de*/
          v29 = (_QWORD *)(v6 + 11120); /*0x140cce5e5*/
          v156 = v18; /*0x140cce5fa*/
          switch ( v31 ) /*0x140cce601*/
          {
            case 0LL: /*0x140cce601*/
              v160 = v5; /*0x140cce603*/
              v27 = v6; /*0x140cce60a*/
              v28 = *(_QWORD **)(v6 + 11272); /*0x140cce60d*/
              v30 = _mm_loadu_si128((const __m128i *)(v27 + 11280)); /*0x140cce614*/
              goto LABEL_24; /*0x140cce614*/
            case 1LL: /*0x140cce601*/
              v157 = v17; /*0x140ccf577*/
              v159 = v16; /*0x140ccf57e*/
              v164 = v8; /*0x140ccf585*/
              v143 = v6 + 11120; /*0x140ccf58c*/
              sub_1416C3400(&off_1417BA838, v29, a3, a4); /*0x140ccf59a*/
            case 2LL: /*0x140cce601*/
              v157 = v17; /*0x140ccf54c*/
              v159 = v16; /*0x140ccf553*/
              v164 = v8; /*0x140ccf55a*/
              v143 = v6 + 11120; /*0x140ccf561*/
              sub_1416C3420(&off_1417BA838, v29, a3, a4); /*0x140ccf56f*/
            case 3LL: /*0x140cce601*/
              v161 = (_QWORD *)(v6 + 11120); /*0x140cce839*/
              v157 = v17; /*0x140cce840*/
              v159 = v16; /*0x140cce847*/
              v164 = v8; /*0x140cce84e*/
              goto LABEL_56; /*0x140cce855*/
          }
      }
  }
}