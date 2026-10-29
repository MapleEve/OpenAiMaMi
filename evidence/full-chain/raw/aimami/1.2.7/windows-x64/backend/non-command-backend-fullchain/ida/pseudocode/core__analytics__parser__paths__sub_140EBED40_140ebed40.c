// win 1.2.7 | module src/core/analytics/parser/paths.rs | ea 0x140ebed40 | name sub_140EBED40
// win 1.2.7 | module src/core/analytics/parser/paths.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140EBED40(__m128i *a1, const __m128i *a2, unsigned __int64 a3, __int64 a4)
{
  __m128i *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v7; // r12
  __int64 v9; // rax
  unsigned __int8 *v10; // r13
  __int64 v11; // rax
  __m128i *v12; // rax
  char v13; // r15
  unsigned __int64 v14; // rcx
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __int64 v21; // rcx
  __m128i si128; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  char v26; // dl
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int8 *v29; // r14
  unsigned __int64 v30; // rdi
  unsigned __int8 v31; // al
  __int64 v32; // rcx
  _BYTE *v33; // rax
  __m128i *v34; // rcx
  __int64 v35; // r14
  __m128i v36; // xmm0
  unsigned __int8 *v37; // rax
  __m128i v38; // xmm0
  _BYTE *v39; // r14
  _BYTE *v40; // rdx
  unsigned __int8 *v41; // rax
  __int8 v42; // r14
  __m128i v43; // xmm0
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 v48; // rax
  _BYTE *v49; // r13
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __m128i v53; // xmm0
  __int64 v54; // r13
  __m128i v55; // xmm0
  unsigned __int64 v56; // rdx
  unsigned __int8 *v57; // rcx
  const __m128i *v58; // rdi
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r14
  const __m128i *v61; // r15
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r15
  char v64; // al
  __int64 v65; // rax
  char v66; // si
  char v67; // al
  unsigned __int64 v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rbx
  __int8 v72; // r12
  __m128i v73; // xmm0
  unsigned __int64 v74; // rdx
  __m128i v75; // xmm0
  unsigned __int64 v77[3]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v78; // [rsp+48h] [rbp-38h] BYREF
  __m128i v79; // [rsp+58h] [rbp-28h] BYREF
  __m128i v80; // [rsp+68h] [rbp-18h] BYREF
  __int64 v81; // [rsp+78h] [rbp-8h]
  __m128i v82; // [rsp+80h] [rbp+0h] BYREF
  __m128i v83; // [rsp+90h] [rbp+10h]
  _BYTE *v84; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int64 v85; // [rsp+A8h] [rbp+28h]
  __int64 v86; // [rsp+B0h] [rbp+30h]
  __int64 v87; // [rsp+B8h] [rbp+38h]
  __m128i v88; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v89; // [rsp+D0h] [rbp+50h]
  __int64 v90; // [rsp+E8h] [rbp+68h]
  __m128i v91; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v92; // [rsp+100h] [rbp+80h] BYREF
  __m128i v93; // [rsp+110h] [rbp+90h] BYREF
  __m128i v94; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE *v95; // [rsp+130h] [rbp+B0h]
  __int64 v96; // [rsp+138h] [rbp+B8h]
  __int64 v97; // [rsp+140h] [rbp+C0h]
  __int64 v98; // [rsp+148h] [rbp+C8h]
  __int16 v99; // [rsp+150h] [rbp+D0h]
  __int16 v100; // [rsp+158h] [rbp+D8h]
  unsigned __int8 *v101; // [rsp+168h] [rbp+E8h]
  __int64 v102; // [rsp+170h] [rbp+F0h]
  __int64 v103; // [rsp+178h] [rbp+F8h]
  unsigned __int8 *v104; // [rsp+180h] [rbp+100h]
  unsigned __int64 v105; // [rsp+188h] [rbp+108h]
  unsigned __int8 *v106; // [rsp+190h] [rbp+110h]
  __int64 v107; // [rsp+198h] [rbp+118h]
  unsigned int v108; // [rsp+1A0h] [rbp+120h]
  char v109; // [rsp+1A5h] [rbp+125h]
  char v110; // [rsp+1A6h] [rbp+126h]
  char v111; // [rsp+1A7h] [rbp+127h]
  __int64 v112; // [rsp+1A8h] [rbp+128h]

  v112 = -2;
  v4 = a1;
  LOBYTE(v5) = a3 - 1;
  if ( a3 - 32769 <= 0xFFFFFFFFFFFF7FFFuLL )
    goto LABEL_2;
  v7 = a3;
  if ( a3 <= 0xF )
  {
    v5 = 0;
    while ( a2->m128i_i8[v5] )
    {
      if ( a3 == ++v5 )
        goto LABEL_10;
    }
LABEL_2:
    v4->m128i_i64[0] = -1;
    return v5;
  }
  v5 = sub_1416B3CF0(0, a2, a3);
  if ( v5 == 1 )
    goto LABEL_2;
LABEL_10:
  if ( (!a4 || !*(_BYTE *)(a4 + 24)) && a2->m128i_i8[0] != 92 )
  {
    if ( v7 < 2
      || (a2->m128i_i16[0] != 12079
       || v7 != 2
       && (a1 = (__m128i *)(a2->m128i_u16[0] ^ 0x2F2Fu), !(a2->m128i_i16[0] ^ 0x2F2F | a2->m128i_u8[2] ^ 0x2F)))
      && ((unsigned __int8)((a2->m128i_i8[0] & 0xDF) - 65) >= 0x1Au || a2->m128i_i8[1] != 58) )
    {
      nullsub_1(a1);
      v12 = (__m128i *)sub_140001650(v7, 1);
      if ( v12 )
      {
        v10 = (unsigned __int8 *)v12;
        sub_1418F44E0(v12, a2, v7);
        v13 = 0;
        goto LABEL_35;
      }
LABEL_168:
      sub_141938D2B(1, v7);
    }
  }
  nullsub_1(a1);
  v9 = sub_140001650(v7, 1);
  if ( !v9 )
    goto LABEL_168;
  v10 = (unsigned __int8 *)v9;
  if ( v7 < 8 )
  {
    v11 = 0;
    goto LABEL_31;
  }
  if ( v7 < 0x20 )
  {
    v11 = 0;
LABEL_28:
    v21 = v11;
    v11 = (unsigned __int16)v7 & 0xFFF8;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1419E4510);
    v23 = _mm_load_si128((const __m128i *)&xmmword_1419E4520);
    do
    {
      v24 = _mm_loadl_epi64((const __m128i *)((char *)a2 + v21));
      v25 = _mm_cmpeq_epi8(v24, si128);
      *(_QWORD *)&v10[v21] = _mm_or_si128(_mm_and_si128(v25, v23), _mm_andnot_si128(v25, v24)).m128i_u64[0];
      v21 += 8;
    }
    while ( v11 != v21 );
    v13 = 1;
    if ( v7 == v11 )
      goto LABEL_35;
    goto LABEL_31;
  }
  v11 = (unsigned __int16)v7 & 0xFFE0;
  v14 = 0;
  v15 = _mm_load_si128((const __m128i *)&xmmword_1419E44F0);
  v16 = _mm_load_si128((const __m128i *)&xmmword_1419E4500);
  do
  {
    v17 = _mm_loadu_si128(&a2[v14 / 0x10]);
    v18 = _mm_loadu_si128(&a2[v14 / 0x10 + 1]);
    v19 = _mm_cmpeq_epi8(v17, v15);
    v20 = _mm_cmpeq_epi8(v18, v15);
    *(__m128i *)&v10[v14] = _mm_or_si128(_mm_and_si128(v19, v16), _mm_andnot_si128(v19, v17));
    *(__m128i *)&v10[v14 + 16] = _mm_or_si128(_mm_and_si128(v20, v16), _mm_andnot_si128(v20, v18));
    v14 += 32LL;
  }
  while ( v11 != v14 );
  v13 = 1;
  if ( v7 == v11 )
    goto LABEL_35;
  if ( (v7 & 0x18) != 0 )
    goto LABEL_28;
  do
  {
LABEL_31:
    v26 = a2->m128i_i8[v11];
    if ( v26 == 92 )
      v26 = 47;
    v10[v11++] = v26;
  }
  while ( v7 != v11 );
  v13 = 1;
LABEL_35:
  if ( v7 < 4 )
  {
    LODWORD(v27) = 0;
    v28 = v7;
    v29 = v10;
    v30 = v7;
    goto LABEL_37;
  }
  if ( *(_DWORD *)v10 != 792669999 )
  {
    LODWORD(v27) = 0;
    v28 = v7;
    v29 = v10;
    v30 = v7;
    goto LABEL_43;
  }
  v30 = v7 - 4;
  v39 = v10 + 4;
  if ( v7 - 4 <= 4 )
  {
    if ( v7 != 8 )
    {
      if ( v7 < 6 )
        goto LABEL_127;
      goto LABEL_118;
    }
  }
  else if ( (char)v10[8] <= -65 )
  {
LABEL_118:
    if ( (unsigned __int8)((*v39 & 0xDF) - 65) < 0x1Au && v30 >= 3 && v10[5] == 58 )
    {
      v64 = v10[6];
      if ( v64 <= -65 )
      {
        v104 = v10;
        v105 = v7;
        v110 = 1;
        sub_141938F40((_DWORD)v10 + 4, v7 - 4, 2, v7 - 4, (__int64)&off_141A593B0);
      }
      if ( v64 == 47 )
      {
        sub_14072C410((unsigned int)&v93, v7 - 4, 0, 1, 1);
        v107 = v93.m128i_i64[1];
        if ( v93.m128i_i8[0] )
        {
          v104 = v10;
          v105 = v7;
          v110 = 1;
          sub_141938D2B(v107, v94.m128i_i64[0]);
        }
        v29 = (unsigned __int8 *)v94.m128i_i64[0];
        sub_1418F44E0((__m128i *)v94.m128i_i64[0], (const __m128i *)(v10 + 4), v7 - 4);
        v28 = v107;
        goto LABEL_125;
      }
    }
LABEL_127:
    v4->m128i_i64[0] = -1;
    goto LABEL_137;
  }
  if ( (*v39 | (unsigned __int8)(32 * ((unsigned __int8)(*v39 - 65) < 0x1Au))) != 117
    || (v10[5] | (unsigned __int8)(32 * ((unsigned __int8)(v10[5] - 65) < 0x1Au))) != 110
    || (v10[6] | (unsigned __int8)(32 * ((unsigned __int8)(v10[6] - 65) < 0x1Au))) != 99
    || (v10[7] | (unsigned __int8)(32 * ((unsigned __int8)(v10[7] - 65) < 0x1Au))) != 47 )
  {
    goto LABEL_118;
  }
  v105 = v7;
  v104 = v10;
  if ( v30 >= 5 && (char)v10[8] < -64 )
  {
    v110 = 1;
    sub_141938F40((_DWORD)v10 + 4, v7 - 4, 4, v7 - 4, (__int64)&off_141A59390);
  }
  v91.m128i_i64[0] = (__int64)(v10 + 8);
  v91.m128i_i64[1] = v7 - 8;
  v82.m128i_i64[0] = (__int64)&v91;
  v82.m128i_i64[1] = (__int64)sub_140186EE0;
  v110 = 1;
  sub_1416ABFD0(&v93, &unk_141A593A8, &v82);
  v29 = (unsigned __int8 *)v93.m128i_i64[1];
  v28 = v93.m128i_i64[0];
  v30 = v94.m128i_i64[0];
  v7 = v105;
  v10 = v104;
LABEL_125:
  LOBYTE(v27) = 1;
  if ( v30 >= 4 )
  {
LABEL_43:
    if ( *(_DWORD *)v29 == 791555887 )
      goto LABEL_96;
    goto LABEL_44;
  }
LABEL_37:
  if ( v30 < 2 )
  {
    if ( !v30 )
    {
      v30 = 0;
      goto LABEL_70;
    }
    v30 = 1;
    if ( *v29 != 47 )
    {
LABEL_70:
      if ( a4 )
      {
        v104 = v10;
        v105 = v7;
        v41 = v29;
        v42 = *(_BYTE *)(a4 + 24);
        v108 = v27;
        v111 = v27;
        v107 = v28;
        v102 = v28;
        v106 = v41;
        v101 = v41;
        sub_1403F1200(&v93, a4);
        v89.m128i_i8[8] = v42;
        v88 = _mm_loadu_si128(&v93);
        v89.m128i_i64[0] = v94.m128i_i64[0];
        v35 = (__int64)v106;
        goto LABEL_72;
      }
LABEL_96:
      v4->m128i_i64[0] = -1;
      if ( !v28 )
        goto LABEL_136;
LABEL_135:
      v66 = v27;
      sub_140001660(v29, v28, 1);
      LOBYTE(v27) = v66;
      goto LABEL_136;
    }
    goto LABEL_57;
  }
LABEL_44:
  v31 = *v29;
  v32 = *v29;
  LOBYTE(v32) = (v32 & 0xDF) - 65;
  if ( (unsigned __int8)v32 >= 0x1Au || v29[1] != 58 )
  {
    if ( *(_WORD *)v29 != 12079 )
    {
      if ( v31 != 47 )
        goto LABEL_70;
LABEL_57:
      --v30;
      v37 = v29;
      v35 = (__int64)(v29 + 1);
      v106 = v37;
      if ( !v13 )
      {
        v104 = v10;
        v105 = v7;
        v108 = v27;
        v111 = v27;
        v107 = v28;
        v102 = v28;
        v101 = v37;
        sub_140EBEC60((__int64)&v88, 0, (__int64)&off_141A593D0, 2);
        goto LABEL_72;
      }
      if ( a4 && *(_BYTE *)(a4 + 24) == 1 )
      {
        v104 = v10;
        v105 = v7;
        v108 = v27;
        v111 = v27;
        v107 = v28;
        v102 = v28;
        v101 = v106;
        sub_1403F1200(&v82, a4);
        v94.m128i_i8[8] = 1;
        v93 = _mm_loadu_si128(&v82);
        v94.m128i_i64[0] = v83.m128i_i64[0];
        sub_1403B4710(&v93, 1);
        v38 = _mm_load_si128(&v93);
        v89 = _mm_load_si128(&v94);
        v88 = v38;
        goto LABEL_72;
      }
      v4->m128i_i64[0] = -1;
      v29 = v106;
      if ( v28 )
        goto LABEL_135;
LABEL_136:
      LOBYTE(v5) = v7 != 0;
      if ( ((unsigned __int8)v27 & (v7 != 0)) == 0 )
        return v5;
LABEL_137:
      v57 = v10;
      v56 = v7;
      goto LABEL_138;
    }
    v107 = v28;
    v40 = v29 + 2;
    if ( v30 != 2 && *v40 == 47 )
    {
      v28 = v107;
      if ( v31 != 47 )
        goto LABEL_70;
      goto LABEL_57;
    }
    v104 = v10;
    v105 = v7;
    v94.m128i_i64[0] = v30 - 2;
    v94.m128i_i64[1] = (__int64)(v29 + 2);
    v95 = (_BYTE *)(v30 - 2);
    v96 = 0;
    v97 = v30 - 2;
    v98 = 0x2F0000002FLL;
    LOBYTE(v99) = 1;
    v100 = 1;
    v93 = (__m128i)2uLL;
    v108 = v27;
    v111 = v27;
    v102 = v107;
    v106 = v29;
    v101 = v29;
    v58 = (const __m128i *)sub_140EC6E40(&v93.m128i_u64[1], v40);
    v60 = v59;
    v10 = v104;
    v28 = v107;
    v27 = v108;
    if ( v58 )
    {
      if ( v93.m128i_i64[0] == 1 )
      {
        v93.m128i_i64[0] = 0;
        if ( HIBYTE(v100)
          || (HIBYTE(v100) = 1,
              v7 = v94.m128i_i64[0] - v93.m128i_i64[1],
              ((unsigned __int8)v100 | (v94.m128i_i64[0] != v93.m128i_i64[1])) != 1) )
        {
          v61 = nullptr;
        }
        else
        {
          v61 = (const __m128i *)(v94.m128i_i64[1] + v93.m128i_i64[1]);
        }
      }
      else
      {
        if ( !v93.m128i_i64[0] )
          goto LABEL_145;
        --v93.m128i_i64[0];
        v111 = v108;
        v102 = v107;
        v101 = v106;
        v61 = (const __m128i *)sub_140EC6E40(&v93.m128i_u64[1], v107);
        v7 = v62;
        v10 = v104;
        v28 = v107;
        v27 = v108;
      }
      if ( v61 )
      {
        v82.m128i_i64[0] = (__int64)v58;
        v82.m128i_i64[1] = v60;
        v83.m128i_i64[0] = (__int64)v61;
        v83.m128i_i64[1] = v7;
        v91.m128i_i64[0] = (__int64)&v82;
        v91.m128i_i64[1] = (__int64)&v84;
        v67 = sub_140EB9C00(&v91, v28, v27);
        LOBYTE(v27) = v108;
        v28 = v107;
        if ( !v67 )
        {
          v111 = v108;
          v102 = v107;
          v101 = v106;
          sub_140C1E7A0(v77, v58, v60);
          v103 = v77[1];
          v68 = v77[2];
          sub_140C1E7A0((unsigned __int64 *)&v80, v61, v7);
          v82.m128i_i64[0] = (__int64)aPath_13;
          v82.m128i_i64[1] = 4;
          v83.m128i_i64[0] = (__int64)&unk_141A593C8;
          v83.m128i_i64[1] = 3;
          v84 = (_BYTE *)v103;
          v85 = v68;
          v90 = v80.m128i_i64[1];
          v86 = v80.m128i_i64[1];
          v87 = v81;
          sub_140EBEC60((__int64)&v91, 1, (__int64)&v82, 4);
          v35 = 1;
          v30 = v93.m128i_i64[0];
          if ( v93.m128i_i64[0] )
          {
            if ( v93.m128i_i64[0] == 1 )
            {
              if ( HIBYTE(v100) )
              {
                v70 = 0;
                v71 = v103;
              }
              else
              {
                v30 = v94.m128i_i64[0] - v93.m128i_i64[1];
                v71 = v103;
                if ( ((unsigned __int8)v100 | (v94.m128i_i64[0] != v93.m128i_i64[1])) == 1 )
                  v70 = v94.m128i_i64[1] + v93.m128i_i64[1];
                else
                  v70 = 0;
              }
            }
            else
            {
              --v93.m128i_i64[0];
              v70 = sub_140EC6E40(&v93.m128i_u64[1], v69);
              v30 = v74;
              v71 = v103;
            }
            if ( v70 )
              v35 = v70;
            else
              v30 = 0;
          }
          else
          {
            v71 = v103;
          }
          v75 = _mm_loadu_si128(&v91);
          v89 = _mm_loadu_si128(&v92);
          v88 = v75;
          if ( v80.m128i_i64[0] )
            sub_140001660(v90, v80.m128i_i64[0], 1);
          if ( v77[0] )
            sub_140001660(v71, v77[0], 1);
          goto LABEL_72;
        }
      }
    }
LABEL_145:
    v4->m128i_i64[0] = -1;
    v7 = v105;
    v29 = v106;
    if ( v28 )
      goto LABEL_135;
    goto LABEL_136;
  }
  v108 = v27;
  v107 = v28;
  nullsub_1(v32);
  v33 = (_BYTE *)sub_140001650(1, 1);
  v105 = v7;
  v104 = v10;
  if ( !v33 )
  {
    v111 = v108;
    v102 = v107;
    v101 = v29;
    sub_141938D2B(1, 1);
  }
  v106 = v29;
  *v33 = *v29 | (32 * ((unsigned __int8)(*v29 - 65) < 0x1Au));
  v93.m128i_i64[0] = (__int64)aPath_13;
  v93.m128i_i64[1] = 4;
  v94.m128i_i64[0] = (__int64)"drive";
  v94.m128i_i64[1] = 5;
  v90 = (__int64)v33;
  v95 = v33;
  v96 = 1;
  nullsub_1("drive");
  v103 = sub_140001650(24, 8);
  if ( !v103 )
    sub_141938D11(8, 24);
  sub_140F8ADE0(&v82, &v93, 3);
  v34 = (__m128i *)v103;
  *(_QWORD *)(v103 + 16) = v83.m128i_i64[0];
  *v34 = _mm_loadu_si128(&v82);
  v79.m128i_i8[8] = 1;
  v78.m128i_i64[0] = 1;
  v78.m128i_i64[1] = (__int64)v34;
  v79.m128i_i64[0] = 1;
  v35 = (__int64)(v106 + 2);
  if ( v30 < 3 )
  {
    v63 = 0;
    v7 = v105;
    v10 = v104;
  }
  else
  {
    v7 = v105;
    v10 = v104;
    if ( *(char *)v35 <= -65 )
    {
      v109 = 1;
      sub_141938F40((_DWORD)v106, v30, 2, v30, (__int64)&off_141A593F8);
    }
    if ( *(_BYTE *)v35 == 47 )
    {
      if ( v30 != 3 && (char)v106[3] <= -65 )
        sub_141938F40((_DWORD)v106, v30, 3, v30, (__int64)&off_141A59428);
      v30 -= 3LL;
      v35 = (__int64)(v106 + 3);
      v36 = _mm_loadu_si128(&v78);
      v89 = _mm_loadu_si128(&v79);
      v88 = v36;
      goto LABEL_54;
    }
    v63 = v30 - 2;
  }
  if ( !a4
    || !*(_QWORD *)(a4 + 16)
    || (v65 = *(_QWORD *)(a4 + 8), *(_QWORD *)(v65 + 16) != *(_QWORD *)(v103 + 16))
    || (unsigned int)sub_1418F4B70(*(_QWORD *)(v65 + 8), *(_QWORD *)(v103 + 8)) )
  {
    v4->m128i_i64[0] = -1;
    sub_140025530(&v78);
    sub_140001660(v90, 1, 1);
LABEL_134:
    v28 = v107;
    v29 = v106;
    LOBYTE(v27) = v108;
    if ( v107 )
      goto LABEL_135;
    goto LABEL_136;
  }
  v72 = *(_BYTE *)(a4 + 24);
  v109 = 1;
  sub_1403F1200(&v82, a4);
  v94.m128i_i8[8] = v72;
  v93 = _mm_loadu_si128(&v82);
  v94.m128i_i64[0] = v83.m128i_i64[0];
  if ( v30 >= 3 && *(char *)v35 <= -65 )
    sub_141938F40((_DWORD)v106, v30, 2, v30, (__int64)&off_141A59410);
  v73 = _mm_load_si128(&v93);
  v89 = v94;
  v88 = v73;
  sub_140025530(&v78);
  v30 = v63;
LABEL_54:
  sub_140001660(v90, 1, 1);
LABEL_72:
  v43 = _mm_load_si128(&v88);
  v92 = v89;
  v91 = v43;
  v93.m128i_i64[0] = 0;
  v93.m128i_i64[1] = v30;
  v94.m128i_i64[0] = v35;
  v94.m128i_i64[1] = v30;
  v95 = nullptr;
  v96 = v30;
  v97 = 0x2F0000002FLL;
  LOBYTE(v98) = 1;
  v99 = 1;
  v44 = 0;
  while ( (v44 & 1) == 0 )
  {
    v47 = v94.m128i_i64[0];
    sub_140F9C6A0(&v82, &v94);
    if ( v82.m128i_i32[0] == 1 )
    {
      v48 = v82.m128i_i64[1] - v93.m128i_i64[0];
      v49 = (_BYTE *)(v93.m128i_i64[0] + v47);
      v93.m128i_i64[0] = v83.m128i_i64[0];
      if ( !v48 )
        goto LABEL_88;
      goto LABEL_81;
    }
    if ( HIBYTE(v99) )
      break;
    HIBYTE(v99) = 1;
    v48 = v93.m128i_i64[1] - v93.m128i_i64[0];
    if ( ((unsigned __int8)v99 | (v93.m128i_i64[1] != v93.m128i_i64[0])) != 1 )
      break;
    v49 = (_BYTE *)(v94.m128i_i64[0] + v93.m128i_i64[0]);
    if ( v48 )
    {
LABEL_81:
      if ( v48 == 1 )
      {
        if ( *v49 == 46 )
          goto LABEL_88;
LABEL_89:
        if ( (unsigned __int64)(v92.m128i_i64[0] - 1024) < 0xFFFFFFFFFFFFFC01uLL )
        {
          v4->m128i_i64[0] = -1;
          sub_140025530(&v91);
          v7 = v105;
          v10 = v104;
          goto LABEL_134;
        }
        v53 = _mm_loadu_si128((const __m128i *)(v91.m128i_i64[1] + 24 * v92.m128i_i64[0] - 16));
        v82.m128i_i64[0] = (__int64)aPathComponent;
        v82.m128i_i64[1] = 14;
        v83 = v53;
        v84 = v49;
        v85 = v48;
        sub_140F8ADE0(&v80, &v82, 3);
        v54 = v92.m128i_i64[0];
        if ( v92.m128i_i64[0] == v91.m128i_i64[0] )
          sub_14190FDC0(&v91);
        v45 = v91.m128i_i64[1];
        v46 = 3 * v54;
        *(_QWORD *)(v91.m128i_i64[1] + 8 * v46 + 16) = v81;
        *(__m128i *)(v45 + 8 * v46) = _mm_loadu_si128(&v80);
        v92.m128i_i64[0] = v54 + 1;
        v44 = HIBYTE(v99);
      }
      else
      {
        if ( v48 != 2 || *(_WORD *)v49 != 11822 )
          goto LABEL_89;
        v50 = v92.m128i_i64[0];
        if ( v92.m128i_i64[0] <= 1uLL )
          goto LABEL_88;
        --v92.m128i_i64[0];
        v51 = 3 * (v50 - 1);
        v52 = *(_QWORD *)(v91.m128i_i64[1] + 8 * v51);
        if ( (unsigned __int64)(v52 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_88;
        sub_140001660(*(_QWORD *)(v91.m128i_i64[1] + 8 * v51 + 8), v52, 1);
        v44 = HIBYTE(v99);
      }
    }
    else
    {
LABEL_88:
      v44 = HIBYTE(v99);
    }
  }
  v55 = _mm_load_si128(&v91);
  v4[1] = _mm_load_si128(&v92);
  *v4 = v55;
  if ( v107 )
    sub_140001660(v106, v107, 1);
  v56 = v105;
  LOBYTE(v5) = v108 ^ 1 | (v105 == 0);
  v57 = v104;
  if ( !(_BYTE)v5 )
LABEL_138:
    LOBYTE(v5) = sub_140001660(v57, v56, 1);
  return v5;
}
