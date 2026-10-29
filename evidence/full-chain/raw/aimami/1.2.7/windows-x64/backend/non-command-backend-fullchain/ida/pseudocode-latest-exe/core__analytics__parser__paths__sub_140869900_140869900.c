// win 1.2.7 latest-exe | module src/core/analytics/parser/paths.rs | ea 0x140869900 | successor of pre-update 0x140ebed40 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__m128i *__fastcall sub_140869900(__m128i *a1, unsigned __int16 *a2, unsigned __int64 a3, __int64 a4)
{
  __m128i *v4; // rsi
  unsigned __int64 v7; // r12
  unsigned __int16 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  const char *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // r15
  unsigned __int64 v16; // rcx
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm3
  __m128i v21; // xmm4
  __m128i v22; // xmm5
  __int64 v23; // rcx
  __m128i si128; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __int64 v28; // r8
  __int64 v29; // r14
  const char *v30; // rcx
  unsigned __int64 v31; // rdi
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rax
  _BYTE *v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // r13
  char v39; // al
  __int64 v40; // r14
  __int64 v41; // rbx
  __int8 v42; // r15
  __int64 v43; // r12
  _BYTE *v44; // rcx
  _BYTE *v45; // r14
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // rcx
  const char *v49; // r13
  __int64 v50; // rax
  const char *v51; // r13
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __m128i v55; // xmm0
  __int64 v56; // r13
  __m128i v57; // xmm0
  unsigned __int64 v58; // rdx
  const char *v59; // rcx
  const char *v60; // rdx
  __int64 v61; // r12
  __int64 v62; // rdi
  __int64 v63; // r14
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // r8
  char v68; // al
  const char *v69; // r14
  char v70; // al
  char v71; // di
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  _QWORD v77[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v78[3]; // [rsp+48h] [rbp-38h] BYREF
  char v79; // [rsp+60h] [rbp-20h]
  __m128i v80; // [rsp+68h] [rbp-18h] BYREF
  __int64 v81; // [rsp+78h] [rbp-8h]
  __m128i v82; // [rsp+80h] [rbp+0h] BYREF
  __m128i v83; // [rsp+90h] [rbp+10h]
  const char *v84; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v85; // [rsp+A8h] [rbp+28h]
  __int64 v86; // [rsp+B0h] [rbp+30h]
  __int64 v87; // [rsp+B8h] [rbp+38h]
  _DWORD v88[2]; // [rsp+C0h] [rbp+40h]
  __int64 v89; // [rsp+C8h] [rbp+48h]
  __m128i v90; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v91; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v92; // [rsp+F0h] [rbp+70h] BYREF
  const char *v93; // [rsp+100h] [rbp+80h] BYREF
  __int64 v94; // [rsp+108h] [rbp+88h] BYREF
  _BYTE *v95; // [rsp+110h] [rbp+90h]
  __int64 v96; // [rsp+118h] [rbp+98h]
  __int64 v97; // [rsp+120h] [rbp+A0h]
  __int64 v98; // [rsp+128h] [rbp+A8h]
  __int16 v99; // [rsp+130h] [rbp+B0h]
  __int16 v100; // [rsp+138h] [rbp+B8h]
  const char *v101; // [rsp+148h] [rbp+C8h]
  __int64 v102; // [rsp+150h] [rbp+D0h]
  const char *v103; // [rsp+158h] [rbp+D8h]
  unsigned __int64 v104; // [rsp+160h] [rbp+E0h]
  __int64 v105; // [rsp+168h] [rbp+E8h]
  __int64 v106; // [rsp+170h] [rbp+F0h]
  const char *v107; // [rsp+178h] [rbp+F8h]
  unsigned int v108; // [rsp+180h] [rbp+100h]
  char v109; // [rsp+185h] [rbp+105h]
  char v110; // [rsp+186h] [rbp+106h]
  char v111; // [rsp+187h] [rbp+107h]
  __int64 v112; // [rsp+188h] [rbp+108h]

  v112 = -2;
  v4 = a1;
  if ( a3 - 32769 <= 0xFFFFFFFFFFFF7FFFuLL )
    goto LABEL_2;
  v7 = a3;
  v8 = a2;
  if ( a3 <= 0xF )
  {
    v9 = 0;
    while ( *((_BYTE *)a2 + v9) )
    {
      if ( a3 == ++v9 )
        goto LABEL_10;
    }
LABEL_2:
    v4->m128i_i64[0] = -1;
    return v4;
  }
  if ( sub_1416E2CC0(0, a2) == 1 )
    goto LABEL_2;
LABEL_10:
  if ( (!a4 || !*(_BYTE *)(a4 + 24)) && *(_BYTE *)v8 != 92 )
  {
    if ( v7 < 2
      || (*v8 != 12079
       || v7 != 2
       && (a1 = (__m128i *)(*v8 ^ 0x2F2Fu),
           a2 = (unsigned __int16 *)(*((unsigned __int8 *)v8 + 2) ^ 0x2Fu),
           LOWORD(a2) = *v8 ^ 0x2F2F | *((unsigned __int8 *)v8 + 2) ^ 0x2F,
           !(_WORD)a2))
      && ((unsigned __int8)((*(_BYTE *)v8 & 0xDF) - 65) >= 0x1Au || *((_BYTE *)v8 + 1) != 58) )
    {
      nullsub_1(a1, a2);
      v14 = sub_140001650(v7, 1);
      if ( v14 )
      {
        v12 = (const char *)v14;
        sub_1419234B0(v14, v8, v7);
        v15 = 0;
        goto LABEL_35;
      }
LABEL_170:
      sub_14196B2DB(1, v7);
    }
  }
  nullsub_1(a1, a2);
  v10 = sub_140001650(v7, 1);
  if ( !v10 )
    goto LABEL_170;
  v12 = (const char *)v10;
  if ( v7 < 8 )
  {
    v13 = 0;
    goto LABEL_31;
  }
  if ( v7 < 0x20 )
  {
    v13 = 0;
LABEL_28:
    v23 = v13;
    v13 = (unsigned __int16)v7 & 0xFFF8;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A504C0);
    v25 = _mm_load_si128((const __m128i *)&xmmword_141A34F30);
    do
    {
      v26 = _mm_loadl_epi64((const __m128i *)((char *)v8 + v23));
      v27 = _mm_cmpeq_epi8(v26, si128);
      *(_QWORD *)&v12[v23] = _mm_or_si128(_mm_and_si128(v27, v25), _mm_andnot_si128(v27, v26)).m128i_u64[0];
      v23 += 8;
    }
    while ( v13 != v23 );
    v15 = 1;
    if ( v7 == v13 )
      goto LABEL_35;
    goto LABEL_31;
  }
  v13 = (unsigned __int16)v7 & 0xFFE0;
  v16 = 0;
  v17 = _mm_load_si128((const __m128i *)&xmmword_141A504B0);
  v18 = _mm_load_si128((const __m128i *)&xmmword_141A34F10);
  do
  {
    v19 = _mm_loadu_si128((const __m128i *)&v8[v16 / 2]);
    v20 = _mm_loadu_si128((const __m128i *)&v8[v16 / 2 + 8]);
    v21 = _mm_cmpeq_epi8(v19, v17);
    v22 = _mm_cmpeq_epi8(v20, v17);
    *(__m128i *)&v12[v16] = _mm_or_si128(_mm_and_si128(v21, v18), _mm_andnot_si128(v21, v19));
    *(__m128i *)&v12[v16 + 16] = _mm_or_si128(_mm_and_si128(v22, v18), _mm_andnot_si128(v22, v20));
    v16 += 32LL;
  }
  while ( v13 != v16 );
  v15 = 1;
  if ( v7 == v13 )
    goto LABEL_35;
  if ( (v7 & 0x18) != 0 )
    goto LABEL_28;
  do
  {
LABEL_31:
    v11 = *((unsigned __int8 *)v8 + v13);
    if ( (_BYTE)v11 == 92 )
      v11 = 47;
    v12[v13++] = v11;
  }
  while ( v7 != v13 );
  v15 = 1;
LABEL_35:
  if ( v7 < 4 )
  {
    LODWORD(v28) = 0;
    v29 = v7;
    v30 = v12;
    v31 = v7;
    goto LABEL_37;
  }
  if ( *(_DWORD *)v12 != 792669999 )
  {
    LODWORD(v28) = 0;
    v29 = v7;
    v30 = v12;
    v31 = v7;
    goto LABEL_43;
  }
  v31 = v7 - 4;
  v44 = v12 + 4;
  if ( v7 - 4 <= 4 )
  {
    if ( v7 != 8 )
    {
      if ( v7 < 6 )
        goto LABEL_132;
      goto LABEL_123;
    }
  }
  else if ( v12[8] <= -65 )
  {
LABEL_123:
    if ( (unsigned __int8)((*v44 & 0xDF) - 65) < 0x1Au && v31 >= 3 && v12[5] == 58 )
    {
      v68 = v12[6];
      if ( v68 <= -65 )
      {
        v103 = v12;
        v104 = v7;
        v110 = 1;
        sub_14196B4F0((_DWORD)v44, v7 - 4, 2, v7 - 4, (__int64)&off_141A52D08);
      }
      if ( v68 == 47 )
      {
        sub_1401E7560((unsigned int)&v92, v7 - 4, 0, 1, 1);
        v106 = v92.m128i_i64[1];
        if ( v92.m128i_i8[0] )
        {
          v103 = v12;
          v104 = v7;
          v110 = 1;
          sub_14196B2DB(v106, v93);
        }
        v69 = v93;
        sub_1419234B0(v93, v12 + 4, v7 - 4);
        v30 = v69;
        v29 = v106;
        goto LABEL_130;
      }
    }
LABEL_132:
    v4->m128i_i64[0] = -1;
    goto LABEL_150;
  }
  if ( (*v44 | (unsigned __int8)(32 * ((unsigned __int8)(*v44 - 65) < 0x1Au))) != 117
    || (v12[5] | (unsigned __int8)(32 * ((unsigned __int8)(v12[5] - 65) < 0x1Au))) != 110
    || (v12[6] | (unsigned __int8)(32 * ((unsigned __int8)(v12[6] - 65) < 0x1Au))) != 99
    || (v12[7] | (unsigned __int8)(32 * ((unsigned __int8)(v12[7] - 65) < 0x1Au))) != 47 )
  {
    goto LABEL_123;
  }
  v104 = v7;
  v103 = v12;
  if ( v31 >= 5 && v12[8] < -64 )
  {
    v110 = 1;
    sub_14196B4F0((_DWORD)v44, v7 - 4, 4, v7 - 4, (__int64)&off_141A52CE8);
  }
  v90.m128i_i64[0] = (__int64)(v12 + 8);
  v90.m128i_i64[1] = v7 - 8;
  v82.m128i_i64[0] = (__int64)&v90;
  v82.m128i_i64[1] = (__int64)sub_140191200;
  v110 = 1;
  sub_1416DAFA0(&v92, &unk_141A52D00, &v82);
  v30 = (const char *)v92.m128i_i64[1];
  v29 = v92.m128i_i64[0];
  v31 = (unsigned __int64)v93;
  v7 = v104;
  v12 = v103;
LABEL_130:
  LOBYTE(v28) = 1;
  if ( v31 >= 4 )
  {
LABEL_43:
    if ( *(_DWORD *)v30 == 791555887 )
      goto LABEL_96;
    goto LABEL_44;
  }
LABEL_37:
  if ( v31 < 2 )
  {
    if ( v31 )
    {
      v107 = v30;
      v31 = 1;
      if ( *v30 != 47 )
      {
LABEL_67:
        v30 = v107;
        if ( a4 )
        {
LABEL_68:
          v103 = v12;
          v104 = v7;
          v42 = *(_BYTE *)(a4 + 24);
          v108 = v28;
          v111 = v28;
          v106 = v29;
          v102 = v29;
          v101 = v30;
          v40 = (__int64)v30;
          sub_14022C070(&v92, a4);
          v38 = (_QWORD *)v92.m128i_i64[1];
          v43 = v92.m128i_i64[0];
          v41 = (__int64)v93;
          v107 = (const char *)v40;
          goto LABEL_71;
        }
        goto LABEL_96;
      }
      goto LABEL_57;
    }
    v31 = 0;
    if ( a4 )
      goto LABEL_68;
LABEL_96:
    v4->m128i_i64[0] = -1;
    goto LABEL_147;
  }
LABEL_44:
  v11 = (__int64)v30;
  v32 = *v30;
  v33 = *(unsigned __int8 *)v30;
  LOBYTE(v33) = (v33 & 0xDF) - 65;
  v107 = (const char *)v11;
  if ( (unsigned __int8)v33 >= 0x1Au || *(_BYTE *)(v11 + 1) != 58 )
  {
    if ( __ROL2__(*(_WORD *)v11, 8) != 12079 )
    {
      if ( v32 != 47 )
        goto LABEL_67;
LABEL_57:
      v106 = v29;
      --v31;
      v30 = v107;
      v40 = (__int64)(v107 + 1);
      if ( !v15 )
      {
        v108 = v28;
        v103 = v12;
        v104 = v7;
        nullsub_1(v107, v11);
        v105 = sub_140001650(24, 8);
        if ( !v105 )
        {
          v111 = v108;
          v102 = v106;
          v101 = v107;
          sub_14196B2C1(8, 24);
        }
        sub_14082F330(&v92, &off_141A52D28, 2);
        v38 = (_QWORD *)v105;
        *(_QWORD *)(v105 + 16) = v93;
        *(__m128i *)v38 = _mm_loadu_si128(&v92);
        v41 = 1;
        v42 = 0;
        v43 = 1;
        goto LABEL_71;
      }
      if ( a4 && *(_BYTE *)(a4 + 24) == 1 )
      {
        v103 = v12;
        v104 = v7;
        v108 = v28;
        v111 = v28;
        v102 = v106;
        v101 = v107;
        sub_14022C070(&v82, a4);
        LOBYTE(v94) = 1;
        v92 = _mm_loadu_si128(&v82);
        v93 = (const char *)v83.m128i_i64[0];
        sub_1401E77B0(&v92, 1);
        v38 = (_QWORD *)v92.m128i_i64[1];
        v43 = v92.m128i_i64[0];
        v41 = (__int64)v93;
        v42 = v94;
        v88[0] = *(_DWORD *)((char *)&v94 + 1);
        *(_DWORD *)((char *)v88 + 3) = HIDWORD(v94);
        goto LABEL_71;
      }
      v4->m128i_i64[0] = -1;
      v29 = v106;
LABEL_147:
      if ( v29 )
      {
        v71 = v28;
        sub_140001660(v30, v29, 1);
        LOBYTE(v28) = v71;
      }
      if ( ((unsigned __int8)v28 & (v7 != 0)) == 0 )
        return v4;
LABEL_150:
      v59 = v12;
      v58 = v7;
      goto LABEL_151;
    }
    v106 = v29;
    v45 = (_BYTE *)(v11 + 2);
    if ( v31 != 2 && *v45 == 47 )
    {
      v29 = v106;
      if ( v32 != 47 )
        goto LABEL_67;
      goto LABEL_57;
    }
    v103 = v12;
    v104 = v7;
    v93 = (const char *)(v31 - 2);
    v94 = v11 + 2;
    v95 = (_BYTE *)(v31 - 2);
    v96 = 0;
    v97 = v31 - 2;
    v98 = 0x2F0000002FLL;
    LOBYTE(v99) = 1;
    v100 = 1;
    v92 = (__m128i)2uLL;
    v108 = v28;
    v111 = v28;
    v102 = v106;
    v101 = v107;
    sub_1408FD7D0(&v82, &v94);
    if ( v82.m128i_i32[0] == 1 )
    {
      v61 = v83.m128i_i64[0];
      v62 = v82.m128i_i64[1] - v92.m128i_i64[1];
      v63 = (__int64)&v45[v92.m128i_i64[1]];
      v92.m128i_i64[1] = v83.m128i_i64[0];
      v28 = v108;
      v64 = v92.m128i_i64[0];
      if ( v92.m128i_i64[0] != 1 )
        goto LABEL_107;
    }
    else
    {
      v28 = v108;
      if ( HIBYTE(v100) )
        goto LABEL_146;
      HIBYTE(v100) = 1;
      v61 = v92.m128i_i64[1];
      v62 = (__int64)&v93[-v92.m128i_i64[1]];
      if ( ((unsigned __int8)v100 | (v93 != (const char *)v92.m128i_i64[1])) != 1 )
        goto LABEL_146;
      v63 = v92.m128i_i64[1] + v94;
      v64 = v92.m128i_i64[0];
      if ( v92.m128i_i64[0] != 1 )
      {
LABEL_107:
        if ( v64 )
        {
          v92.m128i_i64[0] = v64 - 1;
          v111 = v28;
          v102 = v106;
          v101 = v107;
          v65 = sub_140875E40(&v92.m128i_u64[1]);
          v12 = v60;
          v28 = v108;
          goto LABEL_144;
        }
LABEL_146:
        v4->m128i_i64[0] = -1;
        v7 = v104;
        v12 = v103;
        v29 = v106;
        v30 = v107;
        goto LABEL_147;
      }
    }
    v92.m128i_i64[0] = 0;
    if ( HIBYTE(v100) || (HIBYTE(v100) = 1, v12 = v93, !(_BYTE)v100) && v93 == (const char *)v61 )
    {
      v65 = 0;
    }
    else
    {
      v12 = &v93[-v61];
      v65 = v94 + v61;
    }
LABEL_144:
    if ( v65 )
    {
      v82.m128i_i64[0] = v63;
      v82.m128i_i64[1] = v62;
      v83.m128i_i64[0] = v65;
      v83.m128i_i64[1] = (__int64)v12;
      v90.m128i_i64[0] = (__int64)&v82;
      v90.m128i_i64[1] = (__int64)&v84;
      v70 = sub_1408640C0(&v90, v60, v28);
      LOBYTE(v28) = v108;
      if ( !v70 )
      {
        v111 = v108;
        v102 = v106;
        v101 = v107;
        sub_140873F20(v77, v63, v62);
        v105 = v77[1];
        v72 = v77[2];
        sub_140873F20(&v80, v65, v12);
        v73 = v80.m128i_i64[1];
        v82.m128i_i64[0] = (__int64)aPath_7;
        v82.m128i_i64[1] = 4;
        v83.m128i_i64[0] = (__int64)&unk_141A52D20;
        v83.m128i_i64[1] = 3;
        v84 = (const char *)v105;
        v85 = v72;
        v89 = v80.m128i_i64[1];
        v86 = v80.m128i_i64[1];
        v87 = v81;
        LOBYTE(v73) = 1;
        sub_140869820(&v90, v73, &v82, 4);
        v40 = 1;
        v31 = v92.m128i_i64[0];
        if ( v92.m128i_i64[0] )
        {
          if ( v92.m128i_i64[0] == 1 )
          {
            if ( HIBYTE(v100)
              || (v31 = (unsigned __int64)&v93[-v92.m128i_i64[1]],
                  ((unsigned __int8)v100 | (v93 != (const char *)v92.m128i_i64[1])) != 1) )
            {
              v74 = 0;
            }
            else
            {
              v74 = v94 + v92.m128i_i64[1];
            }
          }
          else
          {
            --v92.m128i_i64[0];
            v74 = sub_140875E40(&v92.m128i_u64[1]);
            v31 = v76;
          }
          v75 = v105;
          if ( v74 )
            v40 = v74;
          else
            v31 = 0;
        }
        else
        {
          v75 = v105;
        }
        v38 = (_QWORD *)v90.m128i_i64[1];
        v43 = v90.m128i_i64[0];
        v41 = v91.m128i_i64[0];
        v42 = v91.m128i_i8[8];
        v88[0] = *(__int32 *)((char *)&v91.m128i_i32[2] + 1);
        *(_DWORD *)((char *)v88 + 3) = v91.m128i_i32[3];
        if ( v80.m128i_i64[0] )
        {
          sub_140001660(v89, v80.m128i_i64[0], 1);
          v75 = v105;
        }
        if ( v77[0] )
          sub_140001660(v75, v77[0], 1);
        goto LABEL_71;
      }
    }
    goto LABEL_146;
  }
  v108 = v28;
  nullsub_1(v33, v11);
  v34 = sub_140001650(1, 1);
  v104 = v7;
  v103 = v12;
  if ( !v34 )
  {
    v111 = v108;
    v102 = v29;
    v101 = v107;
    sub_14196B2DB(1, 1);
  }
  v35 = (_BYTE *)v34;
  v106 = v29;
  v36 = *(unsigned __int8 *)v107;
  v37 = (unsigned int)(v36 - 65);
  LOBYTE(v37) = v36 | (32 * ((unsigned __int8)(v36 - 65) < 0x1Au));
  *v35 = v37;
  v92.m128i_i64[0] = (__int64)aPath_7;
  v92.m128i_i64[1] = 4;
  v93 = "drive";
  v94 = 5;
  v89 = (__int64)v35;
  v95 = v35;
  v96 = 1;
  nullsub_1(v37, v35);
  v105 = sub_140001650(24, 8);
  if ( !v105 )
    sub_14196B2C1(8, 24);
  sub_14082F330(&v82, &v92, 3);
  v38 = (_QWORD *)v105;
  *(_QWORD *)(v105 + 16) = v83.m128i_i64[0];
  *(__m128i *)v38 = _mm_loadu_si128(&v82);
  v79 = 1;
  v78[0] = 1;
  v78[1] = v38;
  v78[2] = 1;
  v7 = v104;
  v29 = v106;
  if ( v31 < 3 )
    goto LABEL_179;
  v39 = v107[2];
  if ( v39 <= -65 )
  {
    v109 = 1;
    sub_14196B4F0((_DWORD)v107, v31, 2, v31, (__int64)&off_141A52D50);
  }
  if ( v39 == 47 )
  {
    if ( v31 != 3 && v107[3] <= -65 )
      sub_14196B4F0((_DWORD)v107, v31, 3, v31, (__int64)&off_141A52D80);
    v31 -= 3LL;
    v40 = (__int64)(v107 + 3);
    v41 = 1;
    v42 = 1;
    v43 = 1;
  }
  else
  {
LABEL_179:
    if ( !a4
      || !*(_QWORD *)(a4 + 16)
      || (v66 = *(_QWORD *)(a4 + 8), v67 = *(_QWORD *)(v66 + 16), v67 != v38[2])
      || (unsigned int)sub_141923B40(*(_QWORD *)(v66 + 8), v38[1], v67) )
    {
      v4->m128i_i64[0] = -1;
      if ( *v38 )
        sub_140001660(v38[1], *v38, 1);
      sub_140001660(v38, 24, 8);
      sub_140001660(v89, 1, 1);
      v12 = v103;
LABEL_117:
      v30 = v107;
      LOBYTE(v28) = v108;
      goto LABEL_147;
    }
    v42 = *(_BYTE *)(a4 + 24);
    v109 = 1;
    sub_14022C070(&v82, a4);
    LOBYTE(v94) = v42;
    v92 = _mm_loadu_si128(&v82);
    v93 = (const char *)v83.m128i_i64[0];
    if ( v31 >= 3 && v107[2] <= -65 )
      sub_14196B4F0((_DWORD)v107, v31, 2, v31, (__int64)&off_141A52D68);
    v31 -= 2LL;
    v40 = (__int64)(v107 + 2);
    v38 = (_QWORD *)v92.m128i_i64[1];
    v43 = v92.m128i_i64[0];
    v41 = (__int64)v93;
    sub_1400290B0(v78);
  }
  sub_140001660(v89, 1, 1);
LABEL_71:
  v90.m128i_i64[0] = v43;
  v90.m128i_i64[1] = (__int64)v38;
  v91.m128i_i64[0] = v41;
  v91.m128i_i8[8] = v42;
  *(__int32 *)((char *)&v91.m128i_i32[2] + 1) = v88[0];
  v91.m128i_i32[3] = *(_DWORD *)((char *)v88 + 3);
  v92.m128i_i64[0] = 0;
  v92.m128i_i64[1] = v31;
  v93 = (const char *)v40;
  v94 = v31;
  v95 = nullptr;
  v96 = v31;
  v97 = 0x2F0000002FLL;
  LOBYTE(v98) = 1;
  v99 = 1;
  v46 = 0;
  while ( (v46 & 1) == 0 )
  {
    v49 = v93;
    sub_1408FD7D0(&v82, &v93);
    if ( v82.m128i_i32[0] == 1 )
    {
      v50 = v82.m128i_i64[1] - v92.m128i_i64[0];
      v51 = &v49[v92.m128i_i64[0]];
      v92.m128i_i64[0] = v83.m128i_i64[0];
      if ( !v50 )
        goto LABEL_87;
      goto LABEL_80;
    }
    if ( HIBYTE(v99) )
      break;
    HIBYTE(v99) = 1;
    v50 = v92.m128i_i64[1] - v92.m128i_i64[0];
    if ( ((unsigned __int8)v99 | (v92.m128i_i64[1] != v92.m128i_i64[0])) != 1 )
      break;
    v51 = &v93[v92.m128i_i64[0]];
    if ( v50 )
    {
LABEL_80:
      if ( v50 == 1 )
      {
        if ( *v51 == 46 )
          goto LABEL_87;
LABEL_88:
        if ( (unsigned __int64)(v91.m128i_i64[0] - 1024) < 0xFFFFFFFFFFFFFC01uLL )
        {
          v4->m128i_i64[0] = -1;
          sub_1400290B0(&v90);
          v7 = v104;
          v12 = v103;
          v29 = v106;
          goto LABEL_117;
        }
        v55 = _mm_loadu_si128((const __m128i *)(v90.m128i_i64[1] + 24 * v91.m128i_i64[0] - 16));
        v82.m128i_i64[0] = (__int64)aPathComponent;
        v82.m128i_i64[1] = 14;
        v83 = v55;
        v84 = v51;
        v85 = v50;
        sub_14082F330(&v80, &v82, 3);
        v56 = v91.m128i_i64[0];
        if ( v91.m128i_i64[0] == v90.m128i_i64[0] )
          sub_141939F90(&v90);
        v47 = v90.m128i_i64[1];
        v48 = 3 * v56;
        *(_QWORD *)(v90.m128i_i64[1] + 8 * v48 + 16) = v81;
        *(__m128i *)(v47 + 8 * v48) = _mm_loadu_si128(&v80);
        v91.m128i_i64[0] = v56 + 1;
        v46 = HIBYTE(v99);
      }
      else
      {
        if ( v50 != 2 || *(_WORD *)v51 != 11822 )
          goto LABEL_88;
        v52 = v91.m128i_i64[0];
        if ( v91.m128i_i64[0] <= 1uLL )
          goto LABEL_87;
        --v91.m128i_i64[0];
        v53 = 3 * (v52 - 1);
        v54 = *(_QWORD *)(v90.m128i_i64[1] + 8 * v53);
        if ( (unsigned __int64)(v54 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_87;
        sub_140001660(*(_QWORD *)(v90.m128i_i64[1] + 8 * v53 + 8), v54, 1);
        v46 = HIBYTE(v99);
      }
    }
    else
    {
LABEL_87:
      v46 = HIBYTE(v99);
    }
  }
  v57 = _mm_loadu_si128(&v90);
  v4[1] = _mm_loadu_si128(&v91);
  *v4 = v57;
  if ( v106 )
    sub_140001660(v107, v106, 1);
  v58 = v104;
  v59 = v103;
  if ( !((unsigned __int8)v108 ^ 1 | (v104 == 0)) )
LABEL_151:
    sub_140001660(v59, v58, 1);
  return v4;
}
