// win 1.2.7 | module src/core/repository/account_reset_credits.rs | ea 0x140ed4c20 | name sub_140ED4C20
// win 1.2.7 | module src/core/repository/account_reset_credits.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140ED4C20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // rdi
  unsigned __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm3
  __m128i v34; // xmm4
  __m128i v35; // xmm5
  __m128i si128; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  char v40; // dl
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __m128i v46; // xmm2
  __m128i v47; // xmm3
  __m128i v48; // xmm4
  __m128i v49; // xmm5
  __int64 v50; // rdx
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __m128i v53; // xmm2
  __m128i v54; // xmm3
  char v55; // r8
  __int64 v56; // rax
  unsigned __int64 v57; // r11
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // rax
  int v62; // ecx
  char v63; // dl
  char v64; // r14
  char v65; // r10
  unsigned __int64 v66; // rax
  int v67; // r14d
  int v68; // edx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __m128i v73; // xmm0
  __m128i v74; // xmm1
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r9
  __int64 v93; // rdi
  _QWORD v94[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v95; // [rsp+38h] [rbp-48h] BYREF
  __int64 v96; // [rsp+40h] [rbp-40h]
  unsigned __int64 v97; // [rsp+48h] [rbp-38h]
  __int64 v98; // [rsp+50h] [rbp-30h]
  __m128i v99; // [rsp+58h] [rbp-28h] BYREF
  __m128i v100; // [rsp+68h] [rbp-18h] BYREF
  __m128i v101; // [rsp+78h] [rbp-8h] BYREF
  __int64 v102; // [rsp+88h] [rbp+8h]
  char v103; // [rsp+90h] [rbp+10h]
  __int16 v104; // [rsp+98h] [rbp+18h]
  __m128i v105; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v106; // [rsp+B0h] [rbp+30h]
  __int64 v107; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v108; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v109; // [rsp+D0h] [rbp+50h]
  unsigned __int64 v110; // [rsp+D8h] [rbp+58h]
  unsigned __int64 v111; // [rsp+E0h] [rbp+60h]
  __int64 v112; // [rsp+E8h] [rbp+68h]
  int v113; // [rsp+F0h] [rbp+70h]
  char v114; // [rsp+F7h] [rbp+77h]
  __int64 v115; // [rsp+F8h] [rbp+78h]

  v115 = -2;
  if ( !a2 || !a3 )
  {
    v13 = sub_14167F170(a1);
    if ( *(_BYTE *)(v13 + 16) == 1 )
    {
      v18 = *(_QWORD *)v13;
      v19 = *(_QWORD *)(v13 + 8);
    }
    else
    {
      v93 = v13;
      v18 = sub_141696260(v15, v14, v16, v17);
      v13 = v93;
      *(_QWORD *)v93 = v18;
      *(_QWORD *)(v93 + 8) = v19;
      *(_BYTE *)(v93 + 16) = 1;
    }
    *(_QWORD *)v13 = v18 + 1;
    *(_OWORD *)(a1 + 16) = *(&off_141A56DB0 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_141A56DB0);
    *(_QWORD *)(a1 + 32) = v18;
    *(_QWORD *)(a1 + 40) = v19;
    return a1;
  }
  v99.m128i_i64[0] = 0;
  v99.m128i_i64[1] = a3;
  v100.m128i_i64[0] = a2;
  v100.m128i_i64[1] = a3;
  v101.m128i_i64[0] = 0;
  v101.m128i_i64[1] = a3;
  v102 = 0x2E0000002ELL;
  v103 = 1;
  v104 = 1;
  sub_1403DEFC0(&v95, &v99);
  if ( v97 <= 1 )
  {
    v5 = sub_14167F170(v4);
    v10 = v5;
    if ( *(_BYTE *)(v5 + 16) == 1 )
    {
      v11 = *(_QWORD *)v5;
      v12 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v11 = sub_141696260(v7, v6, v8, v9);
      *(_QWORD *)v10 = v11;
      *(_QWORD *)(v10 + 8) = v12;
      *(_BYTE *)(v10 + 16) = 1;
    }
    *(_QWORD *)v10 = v11 + 1;
    *(_OWORD *)(a1 + 16) = *(&off_141A56DB0 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_141A56DB0);
    *(_QWORD *)(a1 + 32) = v11;
    *(_QWORD *)(a1 + 40) = v12;
LABEL_7:
    if ( v95 )
      sub_140001660(v96, 16 * v95, 8);
    return a1;
  }
  v21 = v96;
  v22 = *(_QWORD *)(v96 + 24);
  if ( (v22 & 0x8000000000000000uLL) != 0LL )
  {
    v23 = 0;
    goto LABEL_15;
  }
  if ( !v22 )
  {
    v108 = *(_QWORD *)(v96 + 24);
    v109 = 1;
    v110 = 0;
    v28 = 0;
LABEL_53:
    v57 = v108;
    v58 = v109;
    v113 = 0;
    goto LABEL_54;
  }
  v24 = *(_QWORD *)(v96 + 16);
  nullsub_1(v4);
  v23 = 1;
  v25 = sub_140001650(v22, 1);
  if ( !v25 )
LABEL_15:
    sub_141938D2B(v23, v22);
  v26 = v25;
  if ( v22 < 8 )
  {
    v27 = 0;
    goto LABEL_30;
  }
  if ( v22 < 0x20 )
  {
    v27 = 0;
LABEL_27:
    v29 = v27;
    v27 = v22 & 0x7FFFFFFFFFFFFFF8LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A55520);
    v37 = _mm_load_si128((const __m128i *)&xmmword_141A55530);
    do
    {
      v38 = _mm_loadl_epi64((const __m128i *)(v24 + v29));
      v39 = _mm_cmpeq_epi8(v38, si128);
      *(_QWORD *)(v26 + v29) = _mm_or_si128(_mm_and_si128(v39, v37), _mm_andnot_si128(v39, v38)).m128i_u64[0];
      v29 += 8;
    }
    while ( v27 != v29 );
    if ( v22 == v27 )
      goto LABEL_34;
    goto LABEL_30;
  }
  v27 = v22 & 0x7FFFFFFFFFFFFFE0LL;
  v29 = 0;
  v30 = _mm_load_si128((const __m128i *)&xmmword_141A55500);
  v31 = _mm_load_si128((const __m128i *)&xmmword_141A55510);
  do
  {
    v32 = _mm_loadu_si128((const __m128i *)(v24 + v29));
    v33 = _mm_loadu_si128((const __m128i *)(v24 + v29 + 16));
    v34 = _mm_cmpeq_epi8(v32, v30);
    v35 = _mm_cmpeq_epi8(v33, v30);
    *(__m128i *)(v26 + v29) = _mm_or_si128(_mm_and_si128(v34, v31), _mm_andnot_si128(v34, v32));
    *(__m128i *)(v26 + v29 + 16) = _mm_or_si128(_mm_and_si128(v35, v31), _mm_andnot_si128(v35, v33));
    v29 += 32;
  }
  while ( v27 != v29 );
  if ( v22 == v27 )
    goto LABEL_34;
  if ( (v22 & 0x18) != 0 )
    goto LABEL_27;
LABEL_30:
  v29 = 43;
  do
  {
    v40 = *(_BYTE *)(v24 + v27);
    if ( v40 == 45 )
      v40 = 43;
    *(_BYTE *)(v26 + v27++) = v40;
  }
  while ( v22 != v27 );
LABEL_34:
  nullsub_1(v29);
  v41 = sub_140001650(v22, 1);
  if ( !v41 )
  {
    v112 = v26;
    v111 = v22;
    sub_141938D2B(1, v22);
  }
  if ( v22 < 8 )
  {
    v42 = 0;
    goto LABEL_46;
  }
  if ( v22 < 0x20 )
  {
    v42 = 0;
LABEL_43:
    v50 = v42;
    v42 = v22 & 0x7FFFFFFFFFFFFFF8LL;
    v51 = _mm_load_si128((const __m128i *)&xmmword_141A55550);
    v52 = _mm_load_si128((const __m128i *)&xmmword_1419E4520);
    do
    {
      v53 = _mm_loadl_epi64((const __m128i *)(v26 + v50));
      v54 = _mm_cmpeq_epi8(v53, v51);
      *(_QWORD *)(v41 + v50) = _mm_or_si128(_mm_and_si128(v54, v52), _mm_andnot_si128(v54, v53)).m128i_u64[0];
      v50 += 8;
    }
    while ( v42 != v50 );
    if ( v22 == v42 )
      goto LABEL_49;
    goto LABEL_46;
  }
  v42 = v22 & 0x7FFFFFFFFFFFFFE0LL;
  v43 = 0;
  v44 = _mm_load_si128((const __m128i *)&xmmword_141A55540);
  v45 = _mm_load_si128((const __m128i *)&xmmword_1419E4500);
  do
  {
    v46 = _mm_loadu_si128((const __m128i *)(v26 + v43));
    v47 = _mm_loadu_si128((const __m128i *)(v26 + v43 + 16));
    v48 = _mm_cmpeq_epi8(v46, v44);
    v49 = _mm_cmpeq_epi8(v47, v44);
    *(__m128i *)(v41 + v43) = _mm_or_si128(_mm_and_si128(v48, v45), _mm_andnot_si128(v48, v46));
    *(__m128i *)(v41 + v43 + 16) = _mm_or_si128(_mm_and_si128(v49, v45), _mm_andnot_si128(v49, v47));
    v43 += 32;
  }
  while ( v42 != v43 );
  if ( v22 == v42 )
    goto LABEL_49;
  if ( (v22 & 0x18) != 0 )
    goto LABEL_43;
  do
  {
LABEL_46:
    v55 = *(_BYTE *)(v26 + v42);
    if ( v55 == 95 )
      v55 = 47;
    *(_BYTE *)(v41 + v42++) = v55;
  }
  while ( v22 != v42 );
LABEL_49:
  v108 = v22;
  v109 = v41;
  v110 = v22;
  sub_140001660(v26, v22, 1);
  v28 = v110;
  if ( (v110 & 3) == 0 )
    goto LABEL_53;
  v114 = 1;
  sub_140E187F0(&v99, asc_141A59D3E, 1, 4 - (v110 & 3));
  *(_QWORD *)&v106 = v100.m128i_i64[0];
  v105 = _mm_loadu_si128(&v99);
  v99.m128i_i64[0] = (__int64)&v108;
  v99.m128i_i64[1] = (__int64)sub_1400015F0;
  v100.m128i_i64[0] = (__int64)&v105;
  v100.m128i_i64[1] = (__int64)sub_1400015F0;
  v56 = sub_1416ABFD0(v94, &unk_141A59D3F, &v99);
  if ( v105.m128i_i64[0] )
    v56 = sub_140001660(v105.m128i_i64[1], v105.m128i_i64[0], 1);
  v57 = v94[0];
  v58 = v94[1];
  v28 = v94[2];
  LOBYTE(v56) = 1;
  v113 = v56;
LABEL_54:
  v59 = v28;
  while ( 1 )
  {
    v60 = v59;
    if ( !v59 )
      break;
    v61 = v58 + v59;
    v62 = *(char *)(v58 + v60 - 1);
    if ( v62 >= 0 )
    {
      v59 = v60 - 1;
      if ( v62 != 61 )
        break;
    }
    else
    {
      v63 = *(_BYTE *)(v61 - 2);
      if ( v63 >= -64 )
      {
        v66 = v61 - 2;
        v68 = v63 & 0x1F;
      }
      else
      {
        v64 = *(_BYTE *)(v61 - 3);
        if ( v64 >= -64 )
        {
          v66 = v61 - 3;
          v67 = v64 & 0xF;
        }
        else
        {
          v65 = *(_BYTE *)(v61 - 4);
          v66 = v61 - 4;
          v67 = ((v65 & 7) << 6) | v64 & 0x3F;
        }
        v68 = (v67 << 6) | v63 & 0x3F;
      }
      v59 = v66 - v58;
      if ( ((v68 << 6) | v62 & 0x3F) != 0x3D )
        break;
    }
  }
  v112 = v57;
  v111 = v58;
  sub_1401A44D0(&v105, &unk_141A59D42, v58, v60);
  if ( v105.m128i_i64[0] == -1 )
  {
    sub_1401A44D0(&v99, &unk_141A59E85, v111, v28);
    if ( v99.m128i_i64[0] == -1 )
    {
      v84 = sub_14167F170(v71);
      v89 = v84;
      if ( *(_BYTE *)(v84 + 16) == 1 )
      {
        v90 = *(_QWORD *)v84;
        v91 = *(_QWORD *)(v89 + 8);
      }
      else
      {
        v90 = sub_141696260(v86, v85, v87, v88);
        *(_QWORD *)v89 = v90;
        *(_QWORD *)(v89 + 8) = v91;
        *(_BYTE *)(v89 + 16) = 1;
      }
      v92 = v112;
      *(_QWORD *)v89 = v90 + 1;
      *(_OWORD *)(a1 + 16) = *(&off_141A56DB0 + 1);
      *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_141A56DB0);
      *(_QWORD *)(a1 + 32) = v90;
      *(_QWORD *)(a1 + 40) = v91;
      if ( v92 )
        sub_140001660(v111, v92, 1);
      if ( (_BYTE)v113 && v108 )
        sub_140001660(v109, v108, 1);
      goto LABEL_7;
    }
    v69 = v99.m128i_i64[1];
    v107 = v99.m128i_i64[0];
    v70 = v100.m128i_i64[0];
  }
  else
  {
    v69 = v105.m128i_i64[1];
    v107 = v105.m128i_i64[0];
    v70 = v106;
  }
  v98 = v69;
  v105.m128i_i64[0] = v69;
  v105.m128i_i64[1] = v70;
  v106 = 0;
  sub_14062F7E0(&v99, &v105);
  if ( v99.m128i_i64[0] )
  {
    v73 = _mm_loadu_si128(&v99);
    v74 = _mm_loadu_si128(&v100);
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(&v101);
    *(__m128i *)(a1 + 16) = v74;
    *(__m128i *)a1 = v73;
  }
  else
  {
    v75 = sub_14167F170(v72);
    v80 = v75;
    if ( *(_BYTE *)(v75 + 16) == 1 )
    {
      v81 = *(_QWORD *)v75;
      v82 = *(_QWORD *)(v80 + 8);
    }
    else
    {
      v81 = sub_141696260(v77, v76, v78, v79);
      *(_QWORD *)v80 = v81;
      *(_QWORD *)(v80 + 8) = v82;
      *(_BYTE *)(v80 + 16) = 1;
    }
    *(_QWORD *)v80 = v81 + 1;
    *(_OWORD *)(a1 + 16) = *(&off_141A56DB0 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_141A56DB0);
    *(_QWORD *)(a1 + 32) = v81;
    *(_QWORD *)(a1 + 40) = v82;
    sub_14002F910(&v99.m128i_u64[1]);
  }
  v83 = v111;
  if ( v107 )
    sub_140001660(v98, v107, 1);
  if ( v112 )
    sub_140001660(v83, v112, 1);
  if ( (_BYTE)v113 && v108 )
    sub_140001660(v109, v108, 1);
  if ( v95 )
    sub_140001660(v21, 16 * v95, 8);
  return a1;
}
