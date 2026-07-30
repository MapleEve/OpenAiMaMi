// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog30load_offi @ 0x140a35fd0
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog30load_offi | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140A35FD0(__int64 a1, int a2, int a3)
{
  __int32 v3; // r13d
  __int32 v4; // r15d
  __int64 v6; // rdi
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r15
  __int8 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r13
  __int32 v18; // ebx
  __int32 v19; // ecx
  __int64 *v20; // rbx
  int v21; // eax
  char v22; // al
  char v23; // al
  __int64 v24; // rdi
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int8 *v35; // rax
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int128 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdx
  __int64 v44; // r12
  __int64 v45; // rcx
  __int64 v46; // r11
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r12
  __int64 v53; // r14
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 result; // rax
  __m128i v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  char v61; // cl
  char v62; // al
  __int32 v63; // r13d
  __int64 v64; // r15
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rbx
  __int64 v68; // r12
  __int64 v69; // rdi
  __int64 v70; // rcx
  __int8 v71; // al
  __m128i v72; // xmm0
  __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // r13
  __int64 v77; // r12
  __int32 v78; // esi
  __int64 v79; // r15
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // rax
  char v84; // al
  unsigned __int64 v85; // r14
  __int64 v86; // rax
  __int64 v87; // rcx
  __m128i v88; // xmm0
  __int64 v89; // rdi
  __int64 v90; // rdi
  __int64 v92; // rdi
  __int64 v93; // rbx
  __int64 v94; // r14
  const __m128i *v95; // r15
  __m128i si128; // xmm0
  __int64 v98; // rax
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // rdi
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rbx
  __int64 v105; // r14
  _QWORD v106[2]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int8 v107; // [rsp+38h] [rbp-48h]
  char v108; // [rsp+60h] [rbp-20h]
  char v109; // [rsp+61h] [rbp-1Fh]
  _QWORD v110[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v111; // [rsp+80h] [rbp+0h] BYREF
  __int64 v112; // [rsp+88h] [rbp+8h]
  __int64 v113; // [rsp+90h] [rbp+10h]
  __int64 v114; // [rsp+A0h] [rbp+20h]
  __int64 v115; // [rsp+A8h] [rbp+28h]
  __m128i v116; // [rsp+B0h] [rbp+30h]
  __int64 v117; // [rsp+C0h] [rbp+40h]
  __m128i v118; // [rsp+D0h] [rbp+50h]
  __int64 v119; // [rsp+E0h] [rbp+60h]
  __int64 v120; // [rsp+E8h] [rbp+68h]
  __int64 v121; // [rsp+F0h] [rbp+70h]
  __int64 v122; // [rsp+F8h] [rbp+78h]
  _OWORD v123[2]; // [rsp+100h] [rbp+80h] BYREF
  _BYTE v124[31]; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v125; // [rsp+140h] [rbp+C0h]
  __int64 v126; // [rsp+150h] [rbp+D0h]
  __m128i v127; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v128; // [rsp+170h] [rbp+F0h]
  __int32 v129; // [rsp+184h] [rbp+104h]
  __int64 v130; // [rsp+188h] [rbp+108h]
  __m256i v131; // [rsp+190h] [rbp+110h] BYREF
  __int64 v132; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v133; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v134; // [rsp+1C8h] [rbp+148h]
  __int64 v135; // [rsp+1D0h] [rbp+150h]
  __int64 v136; // [rsp+1D8h] [rbp+158h]
  __int128 v137; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v138; // [rsp+1F0h] [rbp+170h]
  __m256i v139; // [rsp+200h] [rbp+180h]
  __int64 v140; // [rsp+220h] [rbp+1A0h]
  __int16 v141; // [rsp+228h] [rbp+1A8h]
  int v142; // [rsp+22Ah] [rbp+1AAh]
  unsigned __int16 v143; // [rsp+22Eh] [rbp+1AEh]
  __int64 v144; // [rsp+230h] [rbp+1B0h]
  __m128i v145; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v146; // [rsp+248h] [rbp+1C8h]
  __int64 v147; // [rsp+250h] [rbp+1D0h]
  __int64 v148; // [rsp+258h] [rbp+1D8h]
  __int64 v149; // [rsp+260h] [rbp+1E0h]
  const char *v150; // [rsp+268h] [rbp+1E8h]
  __int128 v151; // [rsp+270h] [rbp+1F0h] BYREF
  __m256i v152; // [rsp+280h] [rbp+200h]
  __int64 v153; // [rsp+2A0h] [rbp+220h]
  const char *v154; // [rsp+2A8h] [rbp+228h]
  __int64 v155; // [rsp+2B0h] [rbp+230h]
  __int64 v156; // [rsp+2B8h] [rbp+238h]
  char *v157; // [rsp+2C0h] [rbp+240h]
  __int64 v158; // [rsp+2C8h] [rbp+248h]
  __int64 v159; // [rsp+2D0h] [rbp+250h]
  __int64 v160; // [rsp+2D8h] [rbp+258h]
  __int64 v161; // [rsp+2E0h] [rbp+260h]
  unsigned __int32 v162; // [rsp+2ECh] [rbp+26Ch]
  __int64 v163; // [rsp+2F0h] [rbp+270h]
  __int64 v164; // [rsp+2F8h] [rbp+278h]
  __int64 v165; // [rsp+300h] [rbp+280h]
  char v166; // [rsp+30Ah] [rbp+28Ah]
  char v167; // [rsp+30Bh] [rbp+28Bh]
  char v168; // [rsp+30Ch] [rbp+28Ch]
  char v169; // [rsp+30Dh] [rbp+28Dh]
  char v170; // [rsp+30Eh] [rbp+28Eh]
  char v171; // [rsp+30Fh] [rbp+28Fh] BYREF
  __int64 v172; // [rsp+310h] [rbp+290h]

  v172 = -2;
  v6 = (__int64)&v111;
  sub_1414E1440((unsigned int)&v111, a2, a3, (unsigned int)&unk_141813AF9, 17);
  sub_1414FA5D0(&v131, v112, v113);
  if ( v131.m256i_i64[0] == -1 )
  {
    v9 = v131.m256i_i64[1];
    *(_QWORD *)v124 = v131.m256i_i64[1];
    if ( *(_QWORD *)off_141F53DF0 >= 2u )
    {
      *(_QWORD *)&v137 = &v111;
      *((_QWORD *)&v137 + 1) = sub_1414FC7B0;
      *(_QWORD *)&v138 = v124;
      *((_QWORD *)&v138 + 1) = sub_1414FDBC0;
      *(_QWORD *)&v151 = 0;
      *((_QWORD *)&v151 + 1) = aCodexmateLibCo_27;
      *(_OWORD *)v152.m256i_i8 = 0x29u;
      v152.m256i_i64[2] = (__int64)aSrcCoreRelayCo_13;
      v152.m256i_i64[3] = 31;
      v153 = 2;
      v154 = aCodexmateLibCo_27;
      v155 = 41;
      v156 = 0x3DF00000001LL;
      v157 = (char *)&unk_141813B6B;
      v158 = (__int64)&v137;
      sub_141330DD0(&v171, &v151);
      v9 = *(_QWORD *)v124;
    }
    LOBYTE(v123[0]) = -1;
    sub_14049AA50(v9);
  }
  else
  {
    v165 = v131.m256i_i64[0];
    v151 = *(_OWORD *)&v131.m256i_u64[1];
    *(_OWORD *)v152.m256i_i8 = 0;
    v163 = v131.m256i_i64[1];
    *(_OWORD *)&v152.m256i_u64[2] = *(_OWORD *)&v131.m256i_u64[1];
    sub_1406D7E40(&v137, &v151);
    if ( (_BYTE)v137 != 0xFF )
    {
      v7 = _mm_loadu_si128((const __m128i *)&v137);
      v123[1] = v138;
      v123[0] = v7;
      v8 = v165;
      if ( !v165 )
        goto LABEL_17;
LABEL_16:
      sub_140001660(v163, v8, 1);
      goto LABEL_17;
    }
    v10 = *((__int64 **)&v137 + 1);
    *(_QWORD *)v124 = *((_QWORD *)&v137 + 1);
    if ( *(_QWORD *)off_141F53DF0 >= 2u )
    {
      *(_QWORD *)&v123[0] = v124;
      *((_QWORD *)&v123[0] + 1) = sub_14149BB80;
      *(_QWORD *)&v151 = 0;
      *((_QWORD *)&v151 + 1) = aCodexmateLibCo_27;
      *(_OWORD *)v152.m256i_i8 = 0x29u;
      v152.m256i_i64[2] = (__int64)aSrcCoreRelayCo_13;
      v152.m256i_i64[3] = 31;
      v153 = 2;
      v154 = aCodexmateLibCo_27;
      v155 = 41;
      v156 = 0x3D800000001LL;
      v157 = (char *)&unk_141813B0A;
      v158 = (__int64)v123;
      sub_141330DD0(&v171, &v151);
      v10 = *(__int64 **)v124;
    }
    LOBYTE(v123[0]) = -1;
    v11 = *v10;
    v12 = *v10 == 1;
    v164 = (__int64)v10;
    if ( v12 )
    {
      sub_14049AA50(v10[1]);
    }
    else if ( !v11 )
    {
      v13 = *(_QWORD *)(v164 + 16);
      if ( v13 )
        sub_140001660(*(_QWORD *)(v164 + 8), v13, 1);
    }
    sub_140001660(v164, 40, 8);
    v8 = v165;
    if ( v165 )
      goto LABEL_16;
  }
LABEL_17:
  sub_140A14F00(&v151);
  v135 = v151;
  if ( (_QWORD)v151 != -1 )
  {
    v14 = v152.m256i_i64[0];
    v15 = v152.m256i_i8[8];
    v164 = *((_QWORD *)&v151 + 1);
    sub_1414F3BB0(&v151, *((_QWORD *)&v151 + 1), v152.m256i_i64[0]);
    if ( (_DWORD)v151 == 2 )
    {
      sub_14049AA50(*((_QWORD *)&v151 + 1));
      v16 = 0;
      v6 = 0;
      v17 = 0;
    }
    else
    {
      v17 = v153;
      v150 = v154;
      v6 = 1;
      v16 = 1;
    }
    if ( dword_141F4D590 )
    {
      v160 = v164;
      v159 = v16;
      sub_14170CCDC(&byte_141F4D520);
    }
    if ( _InterlockedCompareExchange8(&byte_141F4D520, 1, 0) )
    {
      v160 = v164;
      v159 = v16;
      sub_141732680(&byte_141F4D520);
    }
    v20 = off_141F54128;
    if ( 2 * *off_141F54128 )
    {
      v160 = v164;
      v159 = v16;
      v21 = sub_141733320();
      LOBYTE(v21) = v21 ^ 1;
      if ( byte_141F4D521 )
      {
LABEL_29:
        if ( !(_BYTE)v21 )
        {
          if ( 2 * *v20 )
          {
            v160 = v164;
            v159 = v16;
            if ( !(unsigned __int8)sub_141733320() )
              byte_141F4D521 = 1;
          }
        }
        v22 = byte_141F4D520;
        byte_141F4D520 = 0;
        if ( v22 == 2 )
        {
          v160 = v164;
          v159 = v16;
          WakeByAddressSingle(&byte_141F4D520);
        }
        v160 = v164;
        v159 = v16;
        sub_140A34430(&v151);
        v160 = v164;
        v159 = v16;
        sub_140A2B420(&v137);
        *(__m128i *)&v152.m256i_u64[1] = _mm_loadu_si128((const __m128i *)((char *)&v137 + 8));
        v152.m256i_i64[0] = v137;
        goto LABEL_79;
      }
    }
    else
    {
      v21 = 0;
      if ( byte_141F4D521 )
        goto LABEL_29;
    }
    v149 = v16;
    LODWORD(v146) = v21;
    if ( (_DWORD)qword_141F4D528 == 2 )
    {
LABEL_54:
      if ( v14 < 0 )
      {
        v24 = 0;
        goto LABEL_56;
      }
      if ( v14 )
      {
        v25 = v6;
        nullsub_1();
        v24 = 1;
        v26 = sub_140001650(v14, 1);
        if ( !v26 )
LABEL_56:
          sub_141733E1B(v24, v14);
        v147 = v26;
        sub_1416F15C0(v26, v164, v14);
        v6 = v25;
        v20 = off_141F54128;
        v27 = (__int64)v150;
        if ( (_DWORD)qword_141F4D528 == 2 )
          goto LABEL_70;
      }
      else
      {
        v147 = 1;
        v27 = (__int64)v150;
        if ( (_DWORD)qword_141F4D528 == 2 )
        {
LABEL_70:
          qword_141F4D528 = v16;
          qword_141F4D530 = v27;
          qword_141F4D538 = v14;
          qword_141F4D540 = v147;
          qword_141F4D548 = v14;
          byte_141F4D550 = v15;
          dword_141F4D558 = v6;
          qword_141F4D55C = v17;
          *(_QWORD *)&xmmword_141F4D568 = -1;
          LODWORD(xmmword_141F4D580) = 0;
          goto LABEL_71;
        }
      }
      if ( qword_141F4D538 )
      {
        sub_140001660(qword_141F4D540, qword_141F4D538, 1);
        v27 = (__int64)v150;
      }
      if ( (_QWORD)xmmword_141F4D568 != -1 )
      {
        v162 = v6;
        v144 = v17;
        LOBYTE(v148) = v15;
        v161 = v14;
        v28 = *((_QWORD *)&xmmword_141F4D568 + 1);
        v163 = qword_141F4D578;
        v165 = 0;
        v136 = *((_QWORD *)&xmmword_141F4D568 + 1);
        while ( v163 != v165 )
        {
          ++v165;
          v29 = v28 + 32;
          sub_140291680();
          v28 = v29;
        }
        v16 = v149;
        v14 = v161;
        v15 = v148;
        v17 = v144;
        v6 = v162;
        v27 = (__int64)v150;
        if ( (_QWORD)xmmword_141F4D568 )
        {
          sub_140001660(*((_QWORD *)&xmmword_141F4D568 + 1), 32 * xmmword_141F4D568, 8);
          v27 = (__int64)v150;
        }
      }
      goto LABEL_70;
    }
    sub_1414E0730(&v151, qword_141F4D540, qword_141F4D548);
    sub_1414E0730(v106, v164, v14);
    if ( *((_QWORD *)&v151 + 1) == v106[1]
      && (_BYTE)v154 == v108
      && BYTE1(v154) == 2
      && v109 == 2
      && v152.m256i_i8[0] < 3u == v107 < 3u
      && !(unsigned int)sub_1416F1C50(v151, v106[0], *((_QWORD *)&v151 + 1)) )
    {
      v16 = v149;
      if ( dword_141F4D558 == 1 )
        goto LABEL_44;
    }
    else
    {
      v23 = sub_140398250(&v151, v106);
      v16 = v149;
      if ( !v23 )
        goto LABEL_54;
      if ( dword_141F4D558 == 1 )
      {
LABEL_44:
        if ( ((qword_141F4D55C == v17) & (unsigned __int8)v6) == 0 )
          goto LABEL_54;
LABEL_48:
        if ( ((unsigned int)v16 & (unsigned int)qword_141F4D528) != 0 )
        {
          if ( (const char *)qword_141F4D530 != v150 )
            goto LABEL_54;
        }
        else if ( v16 | qword_141F4D528 )
        {
          goto LABEL_54;
        }
        if ( (_QWORD)xmmword_141F4D568 != -1 || (_DWORD)xmmword_141F4D580 != 0 )
        {
          if ( (_QWORD)xmmword_141F4D568 != -1 )
          {
            *(__m128i *)v131.m256i_i8 = _mm_loadu_si128((const __m128i *)&xmmword_141F4D580);
            goto LABEL_73;
          }
LABEL_72:
          sub_140A2B420(&v151);
          qword_141F4D578 = v152.m256i_i64[0];
          xmmword_141F4D568 = v151;
          *(__m128i *)v131.m256i_i8 = _mm_loadu_si128((const __m128i *)&xmmword_141F4D580);
          if ( (_QWORD)v151 == -1 )
          {
            v30 = -1;
LABEL_75:
            v151 = *(_OWORD *)v131.m256i_i8;
            v152.m256i_i64[0] = v30;
            *(__m128i *)&v152.m256i_u64[1] = _mm_load_si128((const __m128i *)&v137);
            v16 = v149;
            if ( !(_BYTE)v146 )
            {
              if ( 2 * *v20 )
              {
                v160 = v164;
                v159 = v149;
                if ( !(unsigned __int8)sub_141733320() )
                  byte_141F4D521 = 1;
              }
            }
            v31 = byte_141F4D520;
            byte_141F4D520 = 0;
            if ( v31 == 2 )
            {
              v160 = v164;
              v159 = v16;
              WakeByAddressSingle(&byte_141F4D520);
            }
LABEL_79:
            v18 = v151;
            v3 = DWORD1(v151);
            LODWORD(v150) = DWORD2(v151);
            v4 = HIDWORD(v151);
            v127 = *(__m128i *)v152.m256i_i8;
            v128 = v152.m256i_i64[2];
            v149 = v16;
            if ( LOBYTE(v123[0]) != 0xFF )
              goto LABEL_80;
LABEL_21:
            v125.m128i_i64[0] = -1;
            v19 = 0;
            goto LABEL_101;
          }
LABEL_73:
          sub_14029ABD0(&v151, *((_QWORD *)&xmmword_141F4D568 + 1), qword_141F4D578);
          v30 = v151;
          v137 = (__int128)_mm_loadu_si128((const __m128i *)((char *)&v151 + 8));
          goto LABEL_75;
        }
LABEL_71:
        sub_140A34430(&v151);
        xmmword_141F4D580 = (__int128)_mm_loadu_si128((const __m128i *)&v151);
        goto LABEL_72;
      }
    }
    if ( (_BYTE)v6 )
      goto LABEL_54;
    goto LABEL_48;
  }
  v127.m128i_i64[0] = -1;
  v18 = 0;
  v149 = 2;
  if ( LOBYTE(v123[0]) == 0xFF )
    goto LABEL_21;
LABEL_80:
  v168 = 1;
  v32 = sub_14149A8D0(aModels_3, 6, v123);
  if ( v32 && *(_BYTE *)v32 == 4 )
  {
    v33 = *(_QWORD *)(v32 + 16);
    v34 = *(_QWORD *)(v32 + 24);
    v168 = 1;
    sub_14029ABD0(&v151, v33, v34);
    if ( v152.m256i_i64[0] )
    {
      v126 = v152.m256i_i64[0];
      v125 = _mm_loadu_si128((const __m128i *)&v151);
    }
    else
    {
      v125.m128i_i64[0] = -1;
      if ( (_QWORD)v151 )
        sub_140001660(*((_QWORD *)&v151 + 1), 32 * v151, 8);
    }
  }
  else
  {
    v125.m128i_i64[0] = -1;
  }
  v170 = 1;
  v35 = (unsigned __int8 *)sub_14149A8D0(aClientVersion_0, 14, v123);
  v19 = 0;
  if ( !v35 )
  {
LABEL_101:
    v145.m128i_i32[0] = v19;
    *(_QWORD *)&v39 = v127.m128i_i64[0];
    if ( v127.m128i_i64[0] != -1 )
      goto LABEL_89;
    goto LABEL_102;
  }
  v36 = *v35;
  if ( v36 == 4 )
  {
    if ( *((_QWORD *)v35 + 3) >= 3u )
    {
      v40 = *((_QWORD *)v35 + 2);
      if ( *(_BYTE *)v40 == 2 && !*(_QWORD *)(v40 + 8) )
      {
        v41 = *(_QWORD *)(v40 + 16);
        if ( !HIDWORD(v41) && *(_BYTE *)(v40 + 32) == 2 && !*(_QWORD *)(v40 + 40) )
        {
          v42 = *(_QWORD *)(v40 + 48);
          if ( !HIDWORD(v42) && *(_BYTE *)(v40 + 64) == 2 && !*(_QWORD *)(v40 + 72) )
          {
            v43 = *(_QWORD *)(v40 + 80);
            if ( !HIDWORD(v43) )
            {
              *(__int64 *)((char *)v145.m128i_i64 + 4) = __PAIR64__(v42, v41);
              v145.m128i_i32[3] = v43;
              v19 = 1;
            }
          }
        }
      }
    }
    goto LABEL_101;
  }
  if ( v36 != 3 )
    goto LABEL_101;
  v37 = *((_QWORD *)v35 + 2);
  v38 = *((_QWORD *)v35 + 3);
  v170 = 1;
  sub_140A38500(&v145, v37, v38);
  *(_QWORD *)&v39 = v127.m128i_i64[0];
  if ( v127.m128i_i64[0] != -1 )
  {
LABEL_89:
    v146 = v128;
    goto LABEL_103;
  }
LABEL_102:
  v146 = 0;
LABEL_103:
  v44 = v125.m128i_i64[0];
  v45 = 0;
  v46 = v126;
  if ( v125.m128i_i64[0] != -1 )
    v45 = v126;
  v147 = v45;
  v47 = v125.m128i_i64[1];
  *((_QWORD *)&v39 + 1) = v127.m128i_i64[1];
  if ( (v145.m128i_i8[0] & (v125.m128i_i64[0] != -1 && (_QWORD)v39 != -1 && v18 != 0)) != 0 )
  {
    if ( v145.m128i_i32[1] == v3 && v145.m128i_i64[1] == __PAIR64__(v4, (unsigned int)v150) )
    {
      v119 = v126;
      v118 = v125;
      v117 = v128;
      v116 = _mm_load_si128(&v127);
      v167 = 1;
      v48 = sub_1414DE170(v128, v127.m128i_i64[1]);
      if ( *(_BYTE *)(v48 + 16) == 1 )
      {
        v49 = *(_QWORD *)v48;
        v50 = *(_QWORD *)(v48 + 8);
      }
      else
      {
        v167 = 1;
        v6 = v48;
        v49 = sub_1414F4390();
        v48 = v6;
        *(_QWORD *)v6 = v49;
        *(_QWORD *)(v6 + 8) = v50;
        *(_BYTE *)(v6 + 16) = 1;
      }
      *(_QWORD *)v48 = v49 + 1;
      v138 = xmmword_14180F3D0;
      v137 = (__int128)_mm_loadu_si128((const __m128i *)&off_14180F3C0);
      v139.m256i_i64[0] = v49;
      v139.m256i_i64[1] = v50;
      v51 = v119;
      v52 = v117;
      v53 = v117 + v119;
      if ( (unsigned __int64)(v117 + v119) >> 58 )
      {
        v54 = 0;
        goto LABEL_112;
      }
      v129 = v18;
      v162 = v3;
      if ( v53 )
      {
        v63 = v4;
        v64 = v119;
        v6 = 32 * v53;
        nullsub_1();
        v54 = 8;
        v65 = sub_140001650(32 * v53, 8);
        if ( !v65 )
        {
LABEL_112:
          v166 = 1;
          sub_141733E1B(v54, v6);
        }
        v51 = v64;
        v4 = v63;
        v3 = v162;
      }
      else
      {
        v65 = 8;
      }
      v132 = v53;
      v133 = v65;
      v134 = 0;
      v114 = 32 * v51;
      v66 = v118.m128i_i64[1] + 32 * v51;
      v67 = v116.m128i_i64[1];
      v68 = v116.m128i_i64[1] + 32 * v52;
      *(_QWORD *)&v151 = v118.m128i_i64[1];
      *((_QWORD *)&v151 + 1) = v118.m128i_i64[1];
      v152.m256i_i64[0] = v118.m128i_i64[0];
      v152.m256i_i64[1] = v66;
      v152.m256i_i64[2] = v116.m128i_i64[1];
      v152.m256i_i64[3] = v116.m128i_i64[1];
      v130 = v116.m128i_i64[0];
      v153 = v116.m128i_i64[0];
      v154 = (const char *)v68;
      v144 = v118.m128i_i64[0];
      v136 = 32 * v118.m128i_i64[0];
      v122 = v116.m128i_i64[1];
      v69 = v118.m128i_i64[1];
      v115 = v118.m128i_i64[1];
      v161 = v118.m128i_i64[1];
      if ( v118.m128i_i64[1] )
        goto LABEL_144;
LABEL_154:
      while ( v67 != v68 )
      {
        v74 = v67 + 32;
        v152.m256i_i64[3] = v67 + 32;
        v71 = *(_BYTE *)v67;
        *(_OWORD *)&v124[15] = *(_OWORD *)(v67 + 16);
        *(_OWORD *)v124 = *(_OWORD *)(v67 + 1);
        if ( v71 == -1 )
          goto LABEL_172;
        v67 += 32;
        v161 = 0;
        while ( 1 )
        {
          v131.m256i_i8[0] = v71;
          *(_OWORD *)&v131.m256i_u64[2] = *(_OWORD *)&v124[15];
          *(__m128i *)&v131.m256i_i8[1] = _mm_load_si128((const __m128i *)v124);
          v169 = 1;
          v75 = sub_14149A8D0(aSlug_3, 4, &v131);
          if ( !v75 || *(_BYTE *)v75 != 3 )
            goto LABEL_143;
          v76 = *(_QWORD *)(v75 + 24);
          if ( v76 < 0 )
          {
            v80 = 0;
            goto LABEL_170;
          }
          v120 = v66;
          if ( v76 )
          {
            v163 = v68;
            v77 = a1;
            v78 = v4;
            v79 = *(_QWORD *)(v75 + 16);
            nullsub_1();
            v80 = 1;
            v81 = sub_140001650(v76, 1);
            if ( !v81 )
            {
              v121 = v76;
LABEL_170:
              v169 = 1;
              sub_141733E1B(v80, v121);
            }
            v82 = v81;
            sub_1416F15C0(v81, v79, v76);
            v83 = v82;
            v4 = v78;
            a1 = v77;
            v68 = v163;
            v66 = v120;
          }
          else
          {
            v83 = 1;
          }
          v110[0] = v76;
          v121 = v83;
          v110[1] = v83;
          v110[2] = v76;
          v169 = 1;
          v84 = sub_1402E1680(&v137, v110);
          v3 = v162;
          if ( !v84 )
          {
            v85 = v134;
            if ( v134 == v132 )
              sub_141709510(&v132);
            v86 = v133;
            v87 = 32 * v85;
            v88 = _mm_loadu_si128((const __m128i *)&v131);
            *(_OWORD *)(v133 + v87 + 16) = *(_OWORD *)&v131.m256i_u64[2];
            *(__m128i *)(v86 + v87) = v88;
            v134 = v85 + 1;
            v66 = v120;
            if ( !v161 )
              goto LABEL_154;
          }
          else
          {
LABEL_143:
            sub_14003DCD0(&v131);
            if ( !v161 )
              goto LABEL_154;
          }
LABEL_144:
          if ( v69 == v66 )
            break;
          v70 = v69 + 32;
          *((_QWORD *)&v151 + 1) = v69 + 32;
          v71 = *(_BYTE *)v69;
          if ( *(_BYTE *)v69 == 0xFF )
            goto LABEL_148;
          v72 = _mm_loadu_si128((const __m128i *)(v69 + 1));
          *(_OWORD *)&v124[15] = *(_OWORD *)(v69 + 16);
          *(__m128i *)v124 = v72;
          v69 += 32;
        }
        v70 = v66;
LABEL_148:
        v163 = (unsigned __int64)(v66 - v70) >> 5;
        v148 = v70;
        v165 = 0;
        while ( v163 != v165 )
        {
          ++v165;
          v73 = v70 + 32;
          sub_140291680();
          v70 = v73;
        }
        if ( v144 )
          sub_140001660(v161, v136, 8);
        *(_QWORD *)&v151 = 0;
        v69 = v148;
      }
      v74 = v68;
LABEL_172:
      v163 = (unsigned __int64)(v68 - v74) >> 5;
      v165 = 0;
      v161 = v74;
      while ( v163 != v165 )
      {
        ++v165;
        v89 = v74 + 32;
        sub_140291680();
        v74 = v89;
      }
      if ( v130 )
        sub_140001660(v122, 32 * v130, 8);
      v90 = v133;
      *(_QWORD *)&v151 = &v171;
      if ( v134 >= 2 )
      {
        if ( v134 >= 0x15 )
        {
          sub_140632BA0(v133, v134, &v151);
          v3 = v162;
        }
        else
        {
          v104 = v133 + 32 * v134;
          v105 = v133 + 32;
          v3 = v162;
          do
          {
            sub_140055660(v90, v105);
            v105 += 32;
          }
          while ( v105 != v104 );
        }
      }
      v44 = v132;
      v47 = v133;
      HIDWORD(_RAX) = HIDWORD(v134);
      v163 = v134;
      v92 = *((_QWORD *)&v137 + 1);
      if ( *((_QWORD *)&v137 + 1) )
      {
        v161 = v133;
        LODWORD(v165) = v4;
        v93 = *((_QWORD *)&v138 + 1);
        if ( *((_QWORD *)&v138 + 1) )
        {
          v94 = v137;
          v95 = (const __m128i *)(v137 + 16);
          _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v137));
          do
          {
            if ( !(_WORD)_R13D )
            {
              do
              {
                si128 = _mm_load_si128(v95);
                v94 -= 384;
                ++v95;
                _R13D = _mm_movemask_epi8(si128) ^ 0xFFFF;
              }
              while ( !_R13D );
            }
            __asm { tzcnt   eax, r13d }
            v98 = -3 * _RAX;
            v99 = *(_QWORD *)(v94 + 8 * v98 - 24);
            if ( v99 )
              sub_140001660(*(_QWORD *)(v94 + 8 * v98 - 16), v99, 1);
            --v93;
            _RAX = _R13D & (unsigned int)(_R13D - 1);
            _R13D &= _R13D - 1;
          }
          while ( v93 );
        }
        v100 = (24 * v92 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v101 = v100 + v92;
        v12 = v101 == -17;
        v102 = v101 + 17;
        v4 = v165;
        v3 = v162;
        v47 = v161;
        if ( !v12 )
          sub_140001660(v137 - v100, v102, 16);
      }
      v61 = 1;
      v62 = 0;
      v18 = v129;
      v46 = v163;
      goto LABEL_189;
    }
    v151 = v39;
    v152.m256i_i64[0] = v128;
LABEL_117:
    v163 = v126;
    v148 = v125.m128i_i64[0];
    v165 = 0;
    v161 = v125.m128i_i64[1];
    v55 = v125.m128i_i64[1];
    while ( v163 != v165 )
    {
      ++v165;
      v56 = v55 + 32;
      sub_140291680();
      v55 = v56;
    }
    if ( v148 )
      sub_140001660(v161, 32 * v148, 8);
    goto LABEL_122;
  }
  if ( (_QWORD)v39 == -1 )
  {
    if ( v125.m128i_i64[0] == -1 )
    {
      v62 = 4;
      v47 = 8;
      v44 = 0;
      v46 = 0;
      v61 = 0;
    }
    else
    {
      v61 = v145.m128i_i8[0]
          & (v18 != 0)
          & (v145.m128i_i32[1] == v3)
          & (v145.m128i_i32[2] == (_DWORD)v150 && v145.m128i_i32[3] == v4);
      v62 = v61 ^ 3;
    }
LABEL_189:
    *(_QWORD *)&v151 = v44;
    *((_QWORD *)&v151 + 1) = v47;
    *(_QWORD *)&v138 = v46;
    *(_QWORD *)&v137 = v44;
    *((_QWORD *)&v137 + 1) = v47;
    HIBYTE(v141) = v62;
    *((_QWORD *)&v138 + 1) = __PAIR64__(v3, v18);
    v139.m256i_i64[0] = __PAIR64__(v4, (unsigned int)v150);
    *(__m128i *)&v139.m256i_u64[1] = _mm_loadu_si128(&v145);
    v139.m256i_i64[3] = v146;
    v140 = v147;
    LOBYTE(v141) = v61;
    v103 = *(_QWORD *)off_141F53DF0;
    switch ( v62 )
    {
      case 0:
        if ( v103 >= 3 )
        {
          *(_QWORD *)&v151 = 0;
          *((_QWORD *)&v151 + 1) = aCodexmateLibCo_27;
          *(_OWORD *)v152.m256i_i8 = 0x29u;
          v152.m256i_i64[2] = (__int64)aSrcCoreRelayCo_13;
          v152.m256i_i64[3] = 31;
          v153 = 3;
          v154 = aCodexmateLibCo_27;
          v155 = 41;
          v156 = 0x3F000000001LL;
          v157 = "[AiMaMi][catalog] merged account model cache with the matching ChatGPT bundled catalog[AiMaMi][catalog]"
                 " using the current ChatGPT bundled official model catalog[AiMaMi][catalog] bundled model command unavai"
                 "lable; using version-matched account model cache[AiMaMi][catalog] current ChatGPT bundled catalog unava"
                 "ilable; account model cache is not verified current[AiMaMi][catalog] no usable official model source; r"
                 "elay-only catalog will be generatedYou are Codex, a coding agent based on MiniMax-M3. You and the user "
                 "share the same workspace and collaborate to achieve the user's goals.bytesYou are MiMo, an AI assistant"
                 " developed by Xiaomi. Today's date: {date} {week}. Your knowledge cutoff date is December 2024.bundled+"
                 "matching-account-cachebundledmatching-account-cache";
          v158 = 173;
          sub_141330DD0(&v171, &v151);
        }
        break;
      case 1:
        BUG();
      case 2:
        if ( v103 >= 2 )
        {
          *(_QWORD *)&v151 = 0;
          *((_QWORD *)&v151 + 1) = aCodexmateLibCo_27;
          *(_OWORD *)v152.m256i_i8 = 0x29u;
          v152.m256i_i64[2] = (__int64)aSrcCoreRelayCo_13;
          v152.m256i_i64[3] = 31;
          v153 = 2;
          v154 = aCodexmateLibCo_27;
          v155 = 41;
          v156 = 0x3F600000001LL;
          v157 = "[AiMaMi][catalog] bundled model command unavailable; using version-matched account model cache[AiMaMi][catalog] current ChatGPT bundled catalog unavailable; account model cache is not verified current[AiMaMi][catalog] no usable official model source; relay-only catalog will be generatedYou are Codex, a coding agent based on MiniMax-M3. You and the user share the same workspace and collaborate to achieve the user's goals.bytesYou are MiMo, an AI assistant developed by Xiaomi. Today's date: {date} {week}. Your knowledge cutoff date is December 2024.bundled+matching-account-cachebundledmatching-account-cache";
          v158 = 189;
          sub_141330DD0(&v171, &v151);
        }
        break;
      case 3:
        if ( v103 >= 2 )
        {
          *(_QWORD *)&v151 = 0;
          *((_QWORD *)&v151 + 1) = aCodexmateLibCo_27;
          *(_OWORD *)v152.m256i_i8 = 0x29u;
          v152.m256i_i64[2] = (__int64)aSrcCoreRelayCo_13;
          v152.m256i_i64[3] = 31;
          v153 = 2;
          v154 = aCodexmateLibCo_27;
          v155 = 41;
          v156 = 0x3F900000001LL;
          v157 = "[AiMaMi][catalog] current ChatGPT bundled catalog unavailable; account model cache is not verified current[AiMaMi][catalog] no usable official model source; relay-only catalog will be generatedYou are Codex, a coding agent based on MiniMax-M3. You and the user share the same workspace and collaborate to achieve the user's goals.bytesYou are MiMo, an AI assistant developed by Xiaomi. Today's date: {date} {week}. Your knowledge cutoff date is December 2024.bundled+matching-account-cachebundledmatching-account-cache";
          v158 = 213;
          sub_141330DD0(&v171, &v151);
        }
        break;
      case 4:
        if ( v103 >= 2 )
        {
          *(_QWORD *)&v151 = 0;
          *((_QWORD *)&v151 + 1) = aCodexmateLibCo_27;
          *(_OWORD *)v152.m256i_i8 = 0x29u;
          v152.m256i_i64[2] = (__int64)aSrcCoreRelayCo_13;
          v152.m256i_i64[3] = 31;
          v153 = 2;
          v154 = aCodexmateLibCo_27;
          v155 = 41;
          v156 = 0x3FC00000001LL;
          v157 = "[AiMaMi][catalog] no usable official model source; relay-only catalog will be generatedYou are Codex, a coding agent based on MiniMax-M3. You and the user share the same workspace and collaborate to achieve the user's goals.bytesYou are MiMo, an AI assistant developed by Xiaomi. Today's date: {date} {week}. Your knowledge cutoff date is December 2024.bundled+matching-account-cachebundledmatching-account-cache";
          v158 = 175;
          sub_141330DD0(&v171, &v151);
        }
        break;
    }
    goto LABEL_124;
  }
  v151 = v39;
  v152.m256i_i64[0] = v128;
  if ( v125.m128i_i64[0] != -1 )
    goto LABEL_117;
LABEL_122:
  *(_QWORD *)&v138 = v152.m256i_i64[0];
  v137 = v151;
  *((_QWORD *)&v138 + 1) = __PAIR64__(v3, v18);
  v139.m256i_i64[0] = __PAIR64__(v4, (unsigned int)v150);
  *(__m128i *)&v139.m256i_u64[1] = _mm_loadu_si128(&v145);
  v139.m256i_i64[3] = v146;
  v140 = v147;
  v141 = 257;
  if ( *(_QWORD *)off_141F53DF0 > 2u )
  {
    *(_QWORD *)&v151 = 0;
    *((_QWORD *)&v151 + 1) = aCodexmateLibCo_27;
    *(_OWORD *)v152.m256i_i8 = 0x29u;
    v152.m256i_i64[2] = (__int64)aSrcCoreRelayCo_13;
    v152.m256i_i64[3] = 31;
    v153 = 3;
    v154 = aCodexmateLibCo_27;
    v155 = 41;
    v156 = 0x3F400000001LL;
    v157 = "[AiMaMi][catalog] using the current ChatGPT bundled official model catalog[AiMaMi][catalog] bundled model command unavailable; using version-matched account model cache[AiMaMi][catalog] current ChatGPT bundled catalog unavailable; account model cache is not verified current[AiMaMi][catalog] no usable official model source; relay-only catalog will be generatedYou are Codex, a coding agent based on MiniMax-M3. You and the user share the same workspace and collaborate to achieve the user's goals.bytesYou are MiMo, an AI assistant developed by Xiaomi. Today's date: {date} {week}. Your knowledge cutoff date is December 2024.bundled+matching-account-cachebundledmatching-account-cache";
    v158 = 149;
    sub_141330DD0(&v171, &v151);
  }
LABEL_124:
  *(_QWORD *)(a1 + 64) = v140;
  *(_WORD *)(a1 + 72) = v141;
  *(_DWORD *)(a1 + 74) = v142;
  result = v143;
  *(_WORD *)(a1 + 78) = v143;
  v58 = _mm_load_si128((const __m128i *)&v137);
  v59 = v138;
  v60 = *(_OWORD *)v139.m256i_i8;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v139.m256i_u64[2];
  *(_OWORD *)(a1 + 32) = v60;
  *(_OWORD *)(a1 + 16) = v59;
  *(__m128i *)a1 = v58;
  if ( v135 && (_DWORD)v149 != 2 )
    result = sub_140001660(v164, v135, 1);
  if ( LOBYTE(v123[0]) != 0xFF )
    result = sub_14003DCD0(v123);
  if ( v111 )
    return sub_140001660(v112, v111, 1);
  return result;
}
