// module: codexmate_lib/core/auth
// addr: 0x1403c93c0
// name: sub_1403C93C0
// win 1.2.1 | module src/core/auth.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403C93C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rdi
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  __m128i v28; // xmm5
  __m128i si128; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  char v33; // dl
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __m128i v40; // xmm3
  __m128i v41; // xmm4
  __m128i v42; // xmm5
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __m128i v46; // xmm2
  __m128i v47; // xmm3
  char v48; // r8
  __int64 v49; // rax
  unsigned __int64 v50; // r11
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rax
  int v55; // ecx
  char v56; // dl
  char v57; // r14
  char v58; // r10
  unsigned __int64 v59; // rax
  int v60; // r14d
  int v61; // edx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r9
  __int64 v80; // rdi
  _QWORD v81[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v82; // [rsp+38h] [rbp-48h] BYREF
  __int64 v83; // [rsp+40h] [rbp-40h]
  unsigned __int64 v84; // [rsp+48h] [rbp-38h]
  __int64 v85; // [rsp+50h] [rbp-30h]
  __m128i v86; // [rsp+58h] [rbp-28h] BYREF
  __m128i v87; // [rsp+68h] [rbp-18h] BYREF
  __m128i v88; // [rsp+78h] [rbp-8h] BYREF
  __int64 v89; // [rsp+88h] [rbp+8h]
  char v90; // [rsp+90h] [rbp+10h]
  __int16 v91; // [rsp+98h] [rbp+18h]
  __m128i v92; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v93; // [rsp+B0h] [rbp+30h]
  __int64 v94; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v95; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v96; // [rsp+D0h] [rbp+50h]
  unsigned __int64 v97; // [rsp+D8h] [rbp+58h]
  unsigned __int64 v98; // [rsp+E0h] [rbp+60h]
  __int64 v99; // [rsp+E8h] [rbp+68h]
  int v100; // [rsp+F0h] [rbp+70h]
  char v101; // [rsp+F7h] [rbp+77h]
  __int64 v102; // [rsp+F8h] [rbp+78h]

  v102 = -2;
  if ( !a2 || !a3 )
  {
    v10 = sub_141470CD0(a1, a2);
    if ( *(_BYTE *)(v10 + 16) == 1 )
    {
      v11 = *(_QWORD *)v10;
      v12 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v80 = v10;
      v11 = sub_141486EF0();
      v10 = v80;
      *(_QWORD *)v80 = v11;
      *(_QWORD *)(v80 + 8) = v12;
      *(_BYTE *)(v80 + 16) = 1;
    }
    *(_QWORD *)v10 = v11 + 1;
    *(_OWORD *)(a1 + 16) = *(&off_14174C6F0 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_14174C6F0);
    *(_QWORD *)(a1 + 32) = v11;
    *(_QWORD *)(a1 + 40) = v12;
    return a1;
  }
  v86.m128i_i64[0] = 0;
  v86.m128i_i64[1] = a3;
  v87.m128i_i64[0] = a2;
  v87.m128i_i64[1] = a3;
  v88.m128i_i64[0] = 0;
  v88.m128i_i64[1] = a3;
  v89 = 0x2E0000002ELL;
  v90 = 1;
  v91 = 1;
  sub_14031B430(&v82, &v86);
  if ( v84 <= 1 )
  {
    v6 = sub_141470CD0(v5, v4);
    v7 = v6;
    if ( *(_BYTE *)(v6 + 16) == 1 )
    {
      v8 = *(_QWORD *)v6;
      v9 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v8 = sub_141486EF0();
      *(_QWORD *)v7 = v8;
      *(_QWORD *)(v7 + 8) = v9;
      *(_BYTE *)(v7 + 16) = 1;
    }
    *(_QWORD *)v7 = v8 + 1;
    *(_OWORD *)(a1 + 16) = *(&off_14174C6F0 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_14174C6F0);
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 40) = v9;
LABEL_7:
    if ( v82 )
      sub_140001660(v83, 16 * v82, 8);
    return a1;
  }
  v14 = v83;
  v15 = *(_QWORD *)(v83 + 24);
  if ( (v15 & 0x8000000000000000uLL) != 0LL )
  {
    v16 = 0;
    goto LABEL_15;
  }
  if ( !v15 )
  {
    v95 = *(_QWORD *)(v83 + 24);
    v96 = 1;
    v97 = 0;
    v21 = 0;
LABEL_53:
    v50 = v95;
    v51 = v96;
    v100 = 0;
    goto LABEL_54;
  }
  v17 = *(_QWORD *)(v83 + 16);
  nullsub_1(v5);
  v16 = 1;
  v18 = sub_140001650(v15, 1);
  if ( !v18 )
LABEL_15:
    sub_1416C2D4B(v16, v15);
  v19 = v18;
  if ( v15 < 8 )
  {
    v20 = 0;
    goto LABEL_30;
  }
  if ( v15 < 0x20 )
  {
    v20 = 0;
LABEL_27:
    v22 = v20;
    v20 = v15 & 0x7FFFFFFFFFFFFFF8LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141748D40);
    v30 = _mm_load_si128((const __m128i *)&xmmword_141748D50);
    do
    {
      v31 = _mm_loadl_epi64((const __m128i *)(v17 + v22));
      v32 = _mm_cmpeq_epi8(v31, si128);
      *(_QWORD *)(v19 + v22) = _mm_or_si128(_mm_and_si128(v32, v30), _mm_andnot_si128(v32, v31)).m128i_u64[0];
      v22 += 8;
    }
    while ( v20 != v22 );
    if ( v15 == v20 )
      goto LABEL_34;
    goto LABEL_30;
  }
  v20 = v15 & 0x7FFFFFFFFFFFFFE0LL;
  v22 = 0;
  v23 = _mm_load_si128((const __m128i *)&xmmword_141748D20);
  v24 = _mm_load_si128((const __m128i *)&xmmword_141748D30);
  do
  {
    v25 = _mm_loadu_si128((const __m128i *)(v17 + v22));
    v26 = _mm_loadu_si128((const __m128i *)(v17 + v22 + 16));
    v27 = _mm_cmpeq_epi8(v25, v23);
    v28 = _mm_cmpeq_epi8(v26, v23);
    *(__m128i *)(v19 + v22) = _mm_or_si128(_mm_and_si128(v27, v24), _mm_andnot_si128(v27, v25));
    *(__m128i *)(v19 + v22 + 16) = _mm_or_si128(_mm_and_si128(v28, v24), _mm_andnot_si128(v28, v26));
    v22 += 32;
  }
  while ( v20 != v22 );
  if ( v15 == v20 )
    goto LABEL_34;
  if ( (v15 & 0x18) != 0 )
    goto LABEL_27;
LABEL_30:
  v22 = 43;
  do
  {
    v33 = *(_BYTE *)(v17 + v20);
    if ( v33 == 45 )
      v33 = 43;
    *(_BYTE *)(v19 + v20++) = v33;
  }
  while ( v15 != v20 );
LABEL_34:
  nullsub_1(v22);
  v34 = sub_140001650(v15, 1);
  if ( !v34 )
  {
    v99 = v19;
    v98 = v15;
    sub_1416C2D4B(1, v15);
  }
  if ( v15 < 8 )
  {
    v35 = 0;
    goto LABEL_46;
  }
  if ( v15 < 0x20 )
  {
    v35 = 0;
LABEL_43:
    v43 = v35;
    v35 = v15 & 0x7FFFFFFFFFFFFFF8LL;
    v44 = _mm_load_si128((const __m128i *)&xmmword_141748D70);
    v45 = _mm_load_si128((const __m128i *)&xmmword_141748D10);
    do
    {
      v46 = _mm_loadl_epi64((const __m128i *)(v19 + v43));
      v47 = _mm_cmpeq_epi8(v46, v44);
      *(_QWORD *)(v34 + v43) = _mm_or_si128(_mm_and_si128(v47, v45), _mm_andnot_si128(v47, v46)).m128i_u64[0];
      v43 += 8;
    }
    while ( v35 != v43 );
    if ( v15 == v35 )
      goto LABEL_49;
    goto LABEL_46;
  }
  v35 = v15 & 0x7FFFFFFFFFFFFFE0LL;
  v36 = 0;
  v37 = _mm_load_si128((const __m128i *)&xmmword_141748D60);
  v38 = _mm_load_si128((const __m128i *)&xmmword_141748CF0);
  do
  {
    v39 = _mm_loadu_si128((const __m128i *)(v19 + v36));
    v40 = _mm_loadu_si128((const __m128i *)(v19 + v36 + 16));
    v41 = _mm_cmpeq_epi8(v39, v37);
    v42 = _mm_cmpeq_epi8(v40, v37);
    *(__m128i *)(v34 + v36) = _mm_or_si128(_mm_and_si128(v41, v38), _mm_andnot_si128(v41, v39));
    *(__m128i *)(v34 + v36 + 16) = _mm_or_si128(_mm_and_si128(v42, v38), _mm_andnot_si128(v42, v40));
    v36 += 32;
  }
  while ( v35 != v36 );
  if ( v15 == v35 )
    goto LABEL_49;
  if ( (v15 & 0x18) != 0 )
    goto LABEL_43;
  do
  {
LABEL_46:
    v48 = *(_BYTE *)(v19 + v35);
    if ( v48 == 95 )
      v48 = 47;
    *(_BYTE *)(v34 + v35++) = v48;
  }
  while ( v15 != v35 );
LABEL_49:
  v95 = v15;
  v96 = v34;
  v97 = v15;
  sub_140001660(v19, v15, 1);
  v21 = v97;
  if ( (v97 & 3) == 0 )
    goto LABEL_53;
  v101 = 1;
  sub_14099C1A0(&v86, asc_141750CC8, 1, 4 - (v97 & 3));
  *(_QWORD *)&v93 = v87.m128i_i64[0];
  v92 = _mm_loadu_si128(&v86);
  v86.m128i_i64[0] = (__int64)&v95;
  v86.m128i_i64[1] = (__int64)sub_1400015F0;
  v87.m128i_i64[0] = (__int64)&v92;
  v87.m128i_i64[1] = (__int64)sub_1400015F0;
  v49 = sub_14149C0F0(v81, &unk_14174F6E6, &v86);
  if ( v92.m128i_i64[0] )
    v49 = sub_140001660(v92.m128i_i64[1], v92.m128i_i64[0], 1);
  v50 = v81[0];
  v51 = v81[1];
  v21 = v81[2];
  LOBYTE(v49) = 1;
  v100 = v49;
LABEL_54:
  v52 = v21;
  while ( 1 )
  {
    v53 = v52;
    if ( !v52 )
      break;
    v54 = v51 + v52;
    v55 = *(char *)(v51 + v53 - 1);
    if ( v55 >= 0 )
    {
      v52 = v53 - 1;
      if ( v55 != 61 )
        break;
    }
    else
    {
      v56 = *(_BYTE *)(v54 - 2);
      if ( v56 >= -64 )
      {
        v59 = v54 - 2;
        v61 = v56 & 0x1F;
      }
      else
      {
        v57 = *(_BYTE *)(v54 - 3);
        if ( v57 >= -64 )
        {
          v59 = v54 - 3;
          v60 = v57 & 0xF;
        }
        else
        {
          v58 = *(_BYTE *)(v54 - 4);
          v59 = v54 - 4;
          v60 = ((v58 & 7) << 6) | v57 & 0x3F;
        }
        v61 = (v60 << 6) | v56 & 0x3F;
      }
      v52 = v59 - v51;
      if ( ((v61 << 6) | v55 & 0x3F) != 0x3D )
        break;
    }
  }
  v99 = v50;
  v98 = v51;
  sub_140443B90(&v92, &unk_141750CC9, v51, v53);
  if ( v92.m128i_i64[0] == -1 )
  {
    sub_140443B90(&v86, &unk_141750E0C, v98, v21);
    if ( v86.m128i_i64[0] == -1 )
    {
      v75 = sub_141470CD0(v65, v64);
      v76 = v75;
      if ( *(_BYTE *)(v75 + 16) == 1 )
      {
        v77 = *(_QWORD *)v75;
        v78 = *(_QWORD *)(v76 + 8);
      }
      else
      {
        v77 = sub_141486EF0();
        *(_QWORD *)v76 = v77;
        *(_QWORD *)(v76 + 8) = v78;
        *(_BYTE *)(v76 + 16) = 1;
      }
      v79 = v99;
      *(_QWORD *)v76 = v77 + 1;
      *(_OWORD *)(a1 + 16) = *(&off_14174C6F0 + 1);
      *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_14174C6F0);
      *(_QWORD *)(a1 + 32) = v77;
      *(_QWORD *)(a1 + 40) = v78;
      if ( v79 )
        sub_140001660(v98, v79, 1);
      if ( (_BYTE)v100 && v95 )
        sub_140001660(v96, v95, 1);
      goto LABEL_7;
    }
    v62 = v86.m128i_i64[1];
    v94 = v86.m128i_i64[0];
    v63 = v87.m128i_i64[0];
  }
  else
  {
    v62 = v92.m128i_i64[1];
    v94 = v92.m128i_i64[0];
    v63 = v93;
  }
  v85 = v62;
  v92.m128i_i64[0] = v62;
  v92.m128i_i64[1] = v63;
  v93 = 0;
  sub_1408A8C60(&v86, &v92);
  if ( v86.m128i_i64[0] )
  {
    v68 = _mm_loadu_si128(&v86);
    v69 = _mm_loadu_si128(&v87);
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(&v88);
    *(__m128i *)(a1 + 16) = v69;
    *(__m128i *)a1 = v68;
  }
  else
  {
    v70 = sub_141470CD0(v67, v66);
    v71 = v70;
    if ( *(_BYTE *)(v70 + 16) == 1 )
    {
      v72 = *(_QWORD *)v70;
      v73 = *(_QWORD *)(v71 + 8);
    }
    else
    {
      v72 = sub_141486EF0();
      *(_QWORD *)v71 = v72;
      *(_QWORD *)(v71 + 8) = v73;
      *(_BYTE *)(v71 + 16) = 1;
    }
    *(_QWORD *)v71 = v72 + 1;
    *(_OWORD *)(a1 + 16) = *(&off_14174C6F0 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_14174C6F0);
    *(_QWORD *)(a1 + 32) = v72;
    *(_QWORD *)(a1 + 40) = v73;
    sub_140348BE0(&v86);
  }
  v74 = v98;
  if ( v94 )
    sub_140001660(v85, v94, 1);
  if ( v99 )
    sub_140001660(v74, v99, 1);
  if ( (_BYTE)v100 && v95 )
    sub_140001660(v96, v95, 1);
  if ( v82 )
    sub_140001660(v14, 16 * v82, 8);
  return a1;
}