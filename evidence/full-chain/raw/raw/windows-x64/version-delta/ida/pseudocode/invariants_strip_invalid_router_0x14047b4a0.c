// win 1.2.3 delta | invariants_strip_invalid_router @ 0x14047b4a0 | changelog ②关闭路由修复
// [FULL IDA decompiler 18608B]
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14047B4A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // ebx
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  int v14; // r9d
  char v15; // r11
  char v16; // si
  __int64 v17; // r10
  int v18; // esi
  int v19; // r11d
  __int64 v20; // rsi
  __m128i si128; // xmm6
  unsigned __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  int v32; // eax
  int v33; // r12d
  int v34; // ebx
  __int64 v35; // r15
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __m128i *v41; // rsi
  bool v42; // zf
  __m128i v43; // rax
  unsigned __int64 v44; // r15
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128i v47; // xmm2
  unsigned __int8 *v48; // rbx
  __int64 v49; // r12
  void *v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // r12
  char *v53; // r12
  unsigned __int64 v54; // rsi
  int v55; // r14d
  int v56; // ecx
  int v57; // r8d
  int v58; // r14d
  unsigned __int8 v59; // dl
  __m128i v60; // xmm1
  __m128i v61; // xmm2
  __int64 v62; // r14
  char v63; // r15
  char v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  char v75; // al
  __int16 v76; // dx
  __m128i v77; // xmm1
  __m128i v78; // xmm2
  __m128i v80; // [rsp+30h] [rbp-50h] BYREF
  __m128i v81; // [rsp+40h] [rbp-40h]
  __m128i v82; // [rsp+50h] [rbp-30h]
  __int128 v83; // [rsp+60h] [rbp-20h]
  __int128 v84; // [rsp+70h] [rbp-10h]
  __int128 v85; // [rsp+80h] [rbp+0h]
  __int64 v86; // [rsp+90h] [rbp+10h]
  __int128 v87; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v88; // [rsp+B0h] [rbp+30h]
  __int128 v89; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v90; // [rsp+C8h] [rbp+48h]
  __m128i v91; // [rsp+D0h] [rbp+50h]
  __int64 v92; // [rsp+E0h] [rbp+60h]
  __int64 v93; // [rsp+F0h] [rbp+70h]
  __int64 v94; // [rsp+F8h] [rbp+78h]
  __int64 v95; // [rsp+100h] [rbp+80h]
  __int64 v96; // [rsp+108h] [rbp+88h]
  __int64 v97; // [rsp+110h] [rbp+90h]
  _QWORD v98[3]; // [rsp+118h] [rbp+98h] BYREF
  __m128i v99; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v100; // [rsp+140h] [rbp+C0h]
  __int64 v101; // [rsp+148h] [rbp+C8h]
  __int64 v102; // [rsp+150h] [rbp+D0h]
  __int64 v103; // [rsp+158h] [rbp+D8h]
  __int64 v104; // [rsp+160h] [rbp+E0h]
  __int64 v105; // [rsp+168h] [rbp+E8h]
  __int64 v106; // [rsp+170h] [rbp+F0h]
  unsigned __int64 v107; // [rsp+178h] [rbp+F8h]
  __int64 v108; // [rsp+180h] [rbp+100h]
  __int64 v109; // [rsp+188h] [rbp+108h] BYREF
  __int64 v110; // [rsp+190h] [rbp+110h]
  __int64 v111; // [rsp+198h] [rbp+118h]
  __m128i v112; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v113; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v114; // [rsp+1C0h] [rbp+140h] BYREF
  int v115; // [rsp+1D8h] [rbp+158h]
  int v116; // [rsp+1DCh] [rbp+15Ch]
  int v117; // [rsp+1E0h] [rbp+160h]
  int v118; // [rsp+1E4h] [rbp+164h]
  __m128i v119; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v120; // [rsp+1F8h] [rbp+178h]
  __m128i v121; // [rsp+200h] [rbp+180h] BYREF
  __m128i v122; // [rsp+210h] [rbp+190h] BYREF
  __m128i v123; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v124; // [rsp+230h] [rbp+1B0h]
  __int128 v125; // [rsp+240h] [rbp+1C0h]
  __int128 v126; // [rsp+250h] [rbp+1D0h]
  __int64 v127; // [rsp+260h] [rbp+1E0h]
  __int64 v128; // [rsp+270h] [rbp+1F0h]
  char v129; // [rsp+27Fh] [rbp+1FFh]
  char v130; // [rsp+280h] [rbp+200h]
  char v131; // [rsp+281h] [rbp+201h]
  char v132; // [rsp+282h] [rbp+202h]
  char v133; // [rsp+283h] [rbp+203h]
  char v134; // [rsp+284h] [rbp+204h]
  char v135; // [rsp+285h] [rbp+205h]
  char v136; // [rsp+286h] [rbp+206h]
  char v137; // [rsp+287h] [rbp+207h]
  __int64 v138; // [rsp+288h] [rbp+208h]

  v138 = -2;
  v5 = a4;
  v128 = a3;
  sub_14040E250((unsigned int)v98, a3, a4, (unsigned int)aModel_1, 5);
  if ( v98[0] == -1 || (v136 = 1, sub_14149C500(&v121, v98), v121.m128i_i64[0] == -1) )
  {
    v136 = 1;
    sub_14040D450(&v99, v128, v5);
  }
  else
  {
    v99 = v121;
    v100 = v122.m128i_i64[0];
  }
  v135 = 1;
  sub_14040E250((unsigned int)&v109, v128, v5, (unsigned int)&unk_141758B54, 18);
  v101 = v109;
  if ( !a2 || v109 == -1 )
  {
    if ( v109 == -1 )
    {
      v9 = 0;
      v10 = 0;
      goto LABEL_11;
    }
    v4 = v110;
    v8 = v111;
    v9 = 0;
  }
  else
  {
    v4 = v110;
    v8 = v111;
    v137 = 1;
    v9 = sub_140413AF0(a2, v110, v111);
  }
  v137 = 1;
  v10 = sub_1404E1D70(aCodexRouterCat_0, 25, v4, v8);
LABEL_11:
  v137 = 1;
  sub_14040E250((unsigned int)&v121, v128, v5, (unsigned int)&unk_141758B7F, 15);
  if ( v121.m128i_i64[0] == -1 )
  {
    LODWORD(v4) = 0;
  }
  else
  {
    v11 = v122.m128i_i64[0];
    do
    {
      while ( 1 )
      {
        if ( !v11 )
          goto LABEL_24;
        v12 = v11;
        v13 = v121.m128i_i64[1] + v11;
        v14 = *(char *)(v121.m128i_i64[1] + v11 - 1);
        if ( v14 < 0 )
          break;
        --v11;
        if ( v14 != 47 )
          goto LABEL_23;
      }
      v15 = *(_BYTE *)(v13 - 2);
      if ( v15 >= -64 )
      {
        v17 = v13 - 2;
        v19 = v15 & 0x1F;
      }
      else
      {
        v16 = *(_BYTE *)(v13 - 3);
        if ( v16 >= -64 )
        {
          v17 = v13 - 3;
          v18 = v16 & 0xF;
        }
        else
        {
          v17 = v13 - 4;
          LODWORD(v4) = (*(_BYTE *)(v13 - 4) & 7) << 6;
          v18 = v4 | v16 & 0x3F;
        }
        v19 = (v18 << 6) | v15 & 0x3F;
      }
      v11 = v17 - v121.m128i_i64[1];
    }
    while ( ((v19 << 6) | v14 & 0x3F) == 0x2F );
LABEL_23:
    if ( v12 < 0x10 )
    {
LABEL_24:
      LODWORD(v4) = 0;
      if ( !v121.m128i_i64[0] )
        goto LABEL_30;
      goto LABEL_29;
    }
    LOBYTE(v4) = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v13 - 16)), (__m128i)xmmword_141748EF0)) == 0xFFFF;
    if ( !v121.m128i_i64[0] )
      goto LABEL_30;
LABEL_29:
    sub_140001660(v121.m128i_i64[1], v121.m128i_i64[0], 1);
  }
LABEL_30:
  v137 = 1;
  sub_14040E250((unsigned int)&v89, v128, v5, (unsigned int)&unk_141758B9E, 14);
  v133 = 1;
  v20 = v128;
  sub_14040E250((unsigned int)&v87, v128, v5, (unsigned int)&unk_141758BAC, 7);
  v115 = v4;
  v102 = v98[0];
  v104 = v98[1];
  v94 = v98[2];
  v105 = v99.m128i_i64[1];
  v103 = v99.m128i_i64[0];
  v95 = v100;
  v106 = v110;
  v93 = v111;
  v129 = sub_1404E1D70(aAimamiCodexRou, 19, v20, v5);
  v130 = sub_1404E1D70(aAimamiRelayCod, 29, v20, v5);
  v131 = sub_1404E1D70(aCodexRouterCat_0, 25, v20, v5);
  v132 = sub_1404E1D70(aCodexRouterV1_0, 16, v20, v5);
  v116 = sub_14040A3A0(v20, v5) & 0xFFFFFF;
  v112.m128i_i64[0] = 0;
  v112.m128i_i64[1] = 8;
  *(_QWORD *)&v113 = 0;
  v121.m128i_i64[0] = 0;
  v121.m128i_i64[1] = v5;
  v122.m128i_i64[0] = v20;
  v122.m128i_i64[1] = v5;
  v123.m128i_i64[0] = 0;
  v123.m128i_i64[1] = v5;
  *(_QWORD *)&v124 = 0xA0000000ALL;
  BYTE8(v124) = 1;
  LOWORD(v125) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141748EC0);
  do
  {
    while ( 1 )
    {
      v23 = v122.m128i_i64[0];
      sub_1404E06C0(&v80, &v122);
      if ( v80.m128i_i32[0] == 1 )
      {
        v25 = v121.m128i_i64[0];
        v121.m128i_i64[0] = v81.m128i_i64[0];
        v24 = v81.m128i_i64[0] - v25;
        v26 = v25 + v23;
        if ( v81.m128i_i64[0] == v25 )
          goto LABEL_45;
      }
      else
      {
        if ( BYTE1(v125) )
          goto LABEL_71;
        BYTE1(v125) = 1;
        v24 = v121.m128i_i64[1] - v121.m128i_i64[0];
        if ( ((unsigned __int8)v125 | (v121.m128i_i64[1] != v121.m128i_i64[0])) != 1 )
          goto LABEL_71;
        v26 = v122.m128i_i64[0] + v121.m128i_i64[0];
        if ( !v24 )
          goto LABEL_45;
      }
      if ( *(_BYTE *)(v26 + v24 - 1) == 10 )
      {
        if ( v24 != 1 )
        {
          if ( *(_BYTE *)(v26 + v24 - 2) == 13 )
          {
            v27 = sub_14033BC10(v26, v24 - 2);
            if ( !v24 )
              goto LABEL_32;
          }
          else
          {
            v27 = sub_14033BC10(v26, v24 - 1);
            if ( !v24 )
              goto LABEL_32;
          }
          goto LABEL_46;
        }
        v24 = 0;
      }
LABEL_45:
      v27 = sub_14033BC10(v26, v24);
      if ( !v24 )
        goto LABEL_32;
LABEL_46:
      if ( *(_BYTE *)v27 != 91 || *(_BYTE *)(v27 + v24 - 1) != 93 )
        goto LABEL_32;
      if ( v24 == 1 || *(char *)(v27 + 1) <= -65 )
        sub_1416C2F60(v27, v24, 1, v24 - 1, (__int64)&off_141782B88);
      v22 = v24 - 2;
      if ( v24 - 2 >= 0x10 )
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v27 + 1)), si128)) == 0xFFFF )
        {
          v28 = v24 - 18;
          v29 = v27 + 17;
          goto LABEL_59;
        }
      }
      else if ( v22 < 9 )
      {
        goto LABEL_32;
      }
      v22 = *(_QWORD *)(v27 + 1) ^ 0x73656C69666F7270LL;
      if ( v22 | *(unsigned __int8 *)(v27 + 9) ^ 0x2ELL )
        goto LABEL_32;
      v28 = v24 - 11;
      v29 = v27 + 10;
LABEL_59:
      v30 = sub_14033BE90(v29, v28, 34);
      v31 = v30;
      if ( v24 == 12 )
      {
        v22 = *(_QWORD *)v30 ^ 0x725F696D616D6961LL | *(_DWORD *)(v30 + 8) ^ 0x79616C65u;
        if ( !v22 )
          break;
        goto LABEL_32;
      }
      if ( v24 >= 0xD )
      {
        v22 = *(_QWORD *)v30 ^ 0x725F696D616D6961LL | *(_QWORD *)(v30 + 5) ^ 0x5F79616C65725F69LL;
        if ( !v22 )
          break;
      }
      if ( v24 == 6 )
      {
        v32 = *(_DWORD *)"aimai1" ^ *(_DWORD *)v30;
        v22 = v32 | (unsigned int)(unsigned __int16)(*(_WORD *)"i1" ^ *(_WORD *)(v31 + 4));
        if ( !(v32 | (unsigned __int16)(*(_WORD *)"i1" ^ *(_WORD *)(v31 + 4))) )
          break;
      }
      else if ( v24 == 19
             && _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)((char *)&xmmword_141753525 + 3)),
                      _mm_loadu_si128((const __m128i *)(v30 + 3))),
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)v30),
                      _mm_loadu_si128((const __m128i *)&xmmword_141753525)))) == 0xFFFF )
      {
        break;
      }
LABEL_32:
      if ( (BYTE1(v125) & 1) != 0 )
        goto LABEL_71;
    }
    v97 = v5;
    v33 = v10;
    v34 = v9;
    v35 = a1;
    v36 = v24;
    nullsub_1();
    v37 = sub_140001650(v36, 1);
    if ( !v37 )
      sub_1416C2D4B(1, v36);
    v108 = v37;
    v107 = v36;
    sub_141684120(v37, v31, v36);
    v38 = v113;
    if ( (_QWORD)v113 == v112.m128i_i64[0] )
      sub_141689AB0(&v112);
    v39 = v112.m128i_i64[1];
    v22 = 3 * v38;
    v24 = v107;
    *(_QWORD *)(v112.m128i_i64[1] + 8 * v22) = v107;
    *(_QWORD *)(v39 + 8 * v22 + 8) = v108;
    *(_QWORD *)(v39 + 8 * v22 + 16) = v24;
    *(_QWORD *)&v113 = v38 + 1;
    a1 = v35;
    v9 = v34;
    v10 = v33;
    v5 = v97;
  }
  while ( (BYTE1(v125) & 1) == 0 );
LABEL_71:
  v91 = _mm_loadu_si128(&v112);
  v92 = v113;
  v40 = sub_141470CD0(v22, v24);
  v41 = (__m128i *)v40;
  v42 = *(_BYTE *)(v40 + 16) == 1;
  v96 = a1;
  v117 = v9;
  v118 = v10;
  if ( v42 )
  {
    v43 = *(__m128i *)v40;
  }
  else
  {
    v43.m128i_i64[0] = sub_141486EF0();
    *v41 = v43;
    v41[1].m128i_i8[0] = 1;
  }
  v41->m128i_i64[0] = v43.m128i_i64[0] + 1;
  v113 = xmmword_141757120;
  v112 = _mm_loadu_si128((const __m128i *)&off_141757110);
  v114 = v43;
  v44 = v5;
  sub_1414A2990((unsigned int)&v121, v128, v5, (unsigned int)"aimami_relay_", 13);
  v86 = v127;
  v85 = v126;
  v84 = v125;
  v45 = _mm_loadu_si128(&v121);
  v46 = _mm_loadu_si128(&v122);
  v47 = _mm_loadu_si128(&v123);
  v83 = v124;
  v82 = v47;
  v81 = v46;
  v80 = v45;
  v48 = (unsigned __int8 *)(v128 + v5);
  while ( 2 )
  {
    sub_1404E2200(&v121, &v80);
    if ( v121.m128i_i32[0] == 1 )
    {
      v49 = v121.m128i_i64[1];
      nullsub_1();
      v50 = (void *)sub_140001650(13, 1);
      v51 = v128;
      if ( !v50 )
        sub_1416C2D4B(1, 13);
      qmemcpy(v50, "aimami_relay_", 13);
      v119.m128i_i64[0] = 13;
      v119.m128i_i64[1] = (__int64)v50;
      v120 = 13;
      v52 = v49 + 13;
      if ( v52 )
      {
        if ( v52 >= v44 )
        {
          if ( v52 != v44 )
          {
LABEL_139:
            v134 = 1;
            sub_1416C2F60(v51, v44, v52, v44, (__int64)&off_141759690);
          }
        }
        else if ( *(char *)(v51 + v52) <= -65 )
        {
          goto LABEL_139;
        }
      }
      v53 = (char *)(v51 + v52);
      v54 = 13;
      if ( v53 == (char *)v48 )
      {
LABEL_99:
        if ( v54 > 0xD )
        {
          v122.m128i_i64[0] = v120;
          v121 = _mm_loadu_si128(&v119);
          v134 = 0;
          sub_140474440(&v112, &v121);
        }
        else if ( v119.m128i_i64[0] )
        {
          sub_140001660(v119.m128i_i64[1], v119.m128i_i64[0], 1);
        }
        continue;
      }
      while ( 2 )
      {
        v55 = (unsigned __int8)*v53;
        if ( *v53 < 0 )
        {
          v56 = v55 & 0x1F;
          v57 = v53[1] & 0x3F;
          if ( (unsigned __int8)v55 <= 0xDFu )
          {
            v53 += 2;
            v55 = v57 | (v56 << 6);
            if ( v55 != 45 )
              goto LABEL_93;
          }
          else
          {
            v58 = (v57 << 6) | v53[2] & 0x3F;
            if ( (unsigned __int8)*v53 < 0xF0u )
            {
              v53 += 3;
              v55 = (v56 << 12) | v58;
              if ( v55 == 45 )
                goto LABEL_96;
              goto LABEL_93;
            }
            v59 = v53[3];
            v53 += 4;
            v55 = ((v56 & 7) << 18) | (v58 << 6) | v59 & 0x3F;
            if ( v55 != 45 )
              goto LABEL_93;
          }
        }
        else
        {
          ++v53;
          if ( v55 == 45 )
            goto LABEL_96;
LABEL_93:
          if ( v55 != 95 && (unsigned int)(v55 - 48) >= 0xA && (v55 & 0xFFFFFFDF) - 65 >= 0x1A )
            goto LABEL_99;
        }
LABEL_96:
        if ( v119.m128i_i64[0] == v54 )
        {
          v134 = 1;
          sub_141688D30((unsigned int)&v119, v54, 1, 1, 1);
          v50 = (void *)v119.m128i_i64[1];
        }
        *((_BYTE *)v50 + v54++) = v55;
        v120 = v54;
        if ( v53 == (char *)v48 )
          goto LABEL_99;
        continue;
      }
    }
    break;
  }
  v60 = _mm_load_si128((const __m128i *)&v113);
  v61 = _mm_load_si128(&v114);
  v80 = _mm_load_si128(&v112);
  v81 = v60;
  v82 = v61;
  v121.m128i_i64[0] = 0;
  v121.m128i_i64[1] = v44;
  v122.m128i_i64[0] = v128;
  v122.m128i_i64[1] = v44;
  v123.m128i_i64[0] = 0;
  v123.m128i_i64[1] = v44;
  *(_QWORD *)&v124 = 0xA0000000ALL;
  BYTE8(v124) = 1;
  LOWORD(v125) = 0;
  v62 = v96;
  v63 = v117;
  v64 = v118;
  while ( 2 )
  {
    v65 = v122.m128i_i64[0];
    sub_1404E06C0(&v112, &v122);
    if ( v112.m128i_i32[0] == 1 )
    {
      v66 = v121.m128i_i64[0];
      v121.m128i_i64[0] = v113;
      v67 = v113 - v66;
      v68 = v66 + v65;
      if ( (_QWORD)v113 == v66 )
      {
LABEL_117:
        v69 = sub_14033BC10(v68, v67);
        if ( v70 )
          goto LABEL_118;
        goto LABEL_104;
      }
LABEL_111:
      if ( *(_BYTE *)(v68 + v67 - 1) != 10 )
        goto LABEL_117;
      if ( v67 == 1 )
      {
        v67 = 0;
        goto LABEL_117;
      }
      if ( *(_BYTE *)(v68 + v67 - 2) != 13 )
      {
        v69 = sub_14033BC10(v68, v67 - 1);
        if ( v70 )
          goto LABEL_118;
        goto LABEL_104;
      }
      v69 = sub_14033BC10(v68, v67 - 2);
      if ( !v70 )
        goto LABEL_104;
LABEL_118:
      if ( *(_BYTE *)v69 != 91 || *(_BYTE *)(v69 + v70 - 1) != 93 )
      {
LABEL_104:
        if ( BYTE1(v125) )
          goto LABEL_135;
        continue;
      }
      if ( v70 == 1 || *(char *)(v69 + 1) <= -65 )
        sub_1416C2F60(v69, v70, 1, v70 - 1, (__int64)&off_141782B88);
      if ( (unsigned __int64)(v70 - 2) >= 0x10 )
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v69 + 1)), si128)) != 0xFFFF )
          goto LABEL_128;
        v71 = v70 - 18;
        v72 = v69 + 17;
      }
      else
      {
        if ( (unsigned __int64)(v70 - 2) < 9 )
          goto LABEL_104;
LABEL_128:
        if ( *(_QWORD *)(v69 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v69 + 9) ^ 0x2ELL )
          goto LABEL_104;
        v71 = v70 - 11;
        v72 = v69 + 10;
      }
      v73 = sub_14033BE90(v72, v71, 34);
      if ( v74 == 12 )
      {
        if ( !(*(_QWORD *)v73 ^ 0x725F696D616D6961LL | *(_DWORD *)(v73 + 8) ^ 0x79616C65u) )
          goto LABEL_134;
      }
      else if ( v74 >= 0xD && !(*(_QWORD *)v73 ^ 0x725F696D616D6961LL | *(_QWORD *)(v73 + 5) ^ 0x5F79616C65725F69LL) )
      {
LABEL_134:
        v75 = 1;
        goto LABEL_136;
      }
      goto LABEL_104;
    }
    break;
  }
  if ( !BYTE1(v125) )
  {
    BYTE1(v125) = 1;
    v67 = v121.m128i_i64[1] - v121.m128i_i64[0];
    if ( ((unsigned __int8)v125 | (v121.m128i_i64[1] != v121.m128i_i64[0])) == 1 )
    {
      v68 = v122.m128i_i64[0] + v121.m128i_i64[0];
      if ( !v67 )
        goto LABEL_117;
      goto LABEL_111;
    }
  }
LABEL_135:
  v75 = 0;
LABEL_136:
  *(_QWORD *)(v62 + 40) = v90;
  *(_OWORD *)(v62 + 24) = v89;
  *(_QWORD *)(v62 + 64) = v88;
  *(_OWORD *)(v62 + 48) = v87;
  *(_QWORD *)(v62 + 72) = v102;
  *(_QWORD *)(v62 + 80) = v104;
  *(_QWORD *)(v62 + 88) = v94;
  *(_QWORD *)(v62 + 96) = v103;
  *(_QWORD *)(v62 + 104) = v105;
  *(_QWORD *)(v62 + 112) = v95;
  *(_QWORD *)(v62 + 120) = v101;
  *(_QWORD *)(v62 + 128) = v106;
  *(_QWORD *)(v62 + 136) = v93;
  *(_BYTE *)(v62 + 192) = v63;
  *(_BYTE *)(v62 + 193) = v64;
  *(_BYTE *)(v62 + 194) = v129;
  *(_BYTE *)(v62 + 195) = v115;
  *(_BYTE *)(v62 + 196) = v130;
  *(_BYTE *)(v62 + 197) = v131;
  *(_BYTE *)(v62 + 198) = v132;
  v76 = v116;
  *(_BYTE *)(v62 + 201) = BYTE2(v116);
  *(_WORD *)(v62 + 199) = v76;
  *(_QWORD *)(v62 + 16) = v92;
  *(__m128i *)v62 = v91;
  v77 = v81;
  v78 = v82;
  *(__m128i *)(v62 + 144) = v80;
  *(__m128i *)(v62 + 160) = v77;
  *(__m128i *)(v62 + 176) = v78;
  *(_BYTE *)(v62 + 202) = v75;
  return v62;
}
