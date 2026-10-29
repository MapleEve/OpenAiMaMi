// win 1.2.7 | module src/core/relay/config_takeover.rs | ea 0x140efe660 | name sub_140EFE660
// win 1.2.7 | module src/core/relay/config_takeover.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EFE660(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __m128i v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdi
  __m128i v12; // xmm6
  __int64 v13; // r15
  __m128i v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r12
  __m128i si128; // xmm0
  __int64 v22; // rbx
  unsigned __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rbx
  __m128i v30; // xmm6
  __m128i *v31; // r14
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // r15
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r12d
  __int32 v41; // edx
  unsigned __int128 v42; // kr40_16
  unsigned __int8 v43; // bl
  bool v44; // cf
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r12d
  int v51; // r13d
  __int32 v52; // edx
  unsigned __int128 v53; // kr50_16
  unsigned __int8 v54; // r14
  __int64 v55; // r15
  __m128i *v56; // rbx
  char v57; // al
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  char v64; // al
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r14
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // [rsp+30h] [rbp-50h] BYREF
  __m128i v71; // [rsp+38h] [rbp-48h]
  __int64 v72; // [rsp+48h] [rbp-38h] BYREF
  __m128i v73; // [rsp+50h] [rbp-30h]
  unsigned __int128 v74; // [rsp+60h] [rbp-20h] BYREF
  __int64 v75; // [rsp+70h] [rbp-10h] BYREF
  __int64 v76; // [rsp+78h] [rbp-8h]
  __int64 v77; // [rsp+80h] [rbp+0h]
  const __m128i *v78; // [rsp+90h] [rbp+10h]
  __int64 v79; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v80; // [rsp+A0h] [rbp+20h]
  __int64 v81; // [rsp+A8h] [rbp+28h]
  __m128i v82; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v83; // [rsp+C0h] [rbp+40h]
  __m128i v84; // [rsp+D0h] [rbp+50h]
  __int64 v85; // [rsp+E0h] [rbp+60h]
  __int128 v86; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v87; // [rsp+F8h] [rbp+78h]
  __m256i v88; // [rsp+100h] [rbp+80h] BYREF
  __m128i v89; // [rsp+120h] [rbp+A0h]
  __int128 v90; // [rsp+130h] [rbp+B0h]
  __m128i v91; // [rsp+140h] [rbp+C0h]
  __int64 v92; // [rsp+150h] [rbp+D0h]
  __m256i v93; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v94; // [rsp+180h] [rbp+100h]
  __int64 v95; // [rsp+190h] [rbp+110h]
  const char *v96; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v97; // [rsp+1A8h] [rbp+128h]
  __int64 v98; // [rsp+1B0h] [rbp+130h]
  __int64 v99; // [rsp+1B8h] [rbp+138h]
  const __m128i *v100; // [rsp+1C0h] [rbp+140h]
  __m128i *v101; // [rsp+1C8h] [rbp+148h]
  __int64 v102; // [rsp+1D0h] [rbp+150h]
  __m128i *v103; // [rsp+1D8h] [rbp+158h]
  __int64 v104; // [rsp+1E0h] [rbp+160h]
  __int128 v105; // [rsp+1E8h] [rbp+168h] BYREF
  __m128i v106; // [rsp+1F8h] [rbp+178h] BYREF
  __m512i v107; // [rsp+208h] [rbp+188h] BYREF
  __int64 v108; // [rsp+248h] [rbp+1C8h]
  __int64 v109; // [rsp+250h] [rbp+1D0h]
  __int128 v110; // [rsp+258h] [rbp+1D8h]
  __int64 v111; // [rsp+268h] [rbp+1E8h]

  v111 = -2;
  result = sub_140EFE1A0(&v105);
  if ( (_DWORD)v105 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v107.m512i_u64[6];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v107.m512i_u64[4];
    v5 = v105;
    v6 = v106;
    v7 = *(_OWORD *)v107.m512i_i8;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v107.m512i_u64[2];
    *(_OWORD *)(a1 + 32) = v7;
    *(__m128i *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
    return result;
  }
  *(_QWORD *)&v86 = 0;
  *((_QWORD *)&v86 + 1) = 8;
  v87 = 0;
  v8 = *(_QWORD *)(a2 + 776);
  *(_QWORD *)&v110 = *(_QWORD *)(a2 + 784);
  sub_1416828D0((unsigned int)&v75, v8, v110, (unsigned int)aRouterTakeover, 27);
  v9 = v77;
  v96 = aRouterTakeover;
  v97 = 27;
  v102 = v76;
  sub_140EF8C50((__int64)&v105, v76, v77, (__int64)aRouterTakeover, 27);
  v10 = *((_QWORD *)&v105 + 1);
  v11 = v105;
  v12 = _mm_loadu_si128(&v106);
  if ( (_QWORD)v105 != -1 )
  {
    v13 = v107.m512i_i64[0];
    v82 = *(__m128i *)&v107.m512i_u64[1];
    v83 = *(_OWORD *)&v107.m512i_u64[3];
    v84 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
    v85 = v107.m512i_i64[7];
    goto LABEL_5;
  }
  if ( *((_QWORD *)&v105 + 1) == -1 )
    goto LABEL_31;
  v99 = v8;
  v109 = *((_QWORD *)&v105 + 1);
  v103 = (__m128i *)v12.m128i_i64[0];
  v101 = (__m128i *)_mm_shuffle_epi32(v12, 238).m128i_u64[0];
  sub_140EA2A30(&v105);
  v20 = *((_QWORD *)&v105 + 1);
  v11 = v105;
  v12 = _mm_loadu_si128(&v106);
  v13 = v107.m512i_i64[0];
  v93 = *(__m256i *)&v107.m512i_u64[1];
  v94 = *(__m128i *)&v107.m512i_u64[5];
  v95 = v107.m512i_i64[7];
  if ( (_QWORD)v105 != -1 )
  {
    v85 = v95;
    si128 = _mm_load_si128((const __m128i *)&v93);
    v84 = v94;
    v83 = *(_OWORD *)&v93.m256i_u64[2];
    v82 = si128;
LABEL_18:
    v22 = v109;
    goto LABEL_22;
  }
  v88.m256i_i64[0] = *((_QWORD *)&v105 + 1);
  *(__m128i *)&v88.m256i_u64[1] = v12;
  v88.m256i_i64[3] = v107.m512i_i64[0];
  v89 = _mm_load_si128((const __m128i *)&v93);
  v90 = *(_OWORD *)&v93.m256i_u64[2];
  v91 = v94;
  v92 = v95;
  v22 = v109;
  if ( *((_QWORD *)&v105 + 1) != -1 )
  {
    sub_14062A720(&v88);
    v11 = -1;
    v20 = -1;
    goto LABEL_22;
  }
  v36 = sub_141682A00(v102, v9);
  v40 = v36;
  if ( !v36 )
  {
    v88.m256i_i64[0] = (__int64)&v96;
    v88.m256i_i64[1] = (__int64)sub_140186EE0;
    sub_1416ABFD0((char *)&v105 + 8, &unk_141A56EA2, &v88);
    goto LABEL_61;
  }
  v13 = v37;
  v88.m256i_i32[0] = sub_141683E80(v38, v37, v39);
  v88.m256i_i32[1] = v41;
  sub_141683E30(&v105, &v88, 3577643008LL, 27111902);
  v42 = *((unsigned __int64 *)&v105 + 1) * (unsigned __int128)0x3E8uLL + v106.m128i_u32[0] / 0xF4240uLL;
  v43 = 0;
  if ( (_BYTE)v105 )
    v42 = 0u;
  v74 = v42;
  while ( 1 )
  {
    LOBYTE(v79) = v43;
    *(_QWORD *)&v105 = &v96;
    *((_QWORD *)&v105 + 1) = sub_140186EE0;
    v106.m128i_i64[0] = (__int64)&v74;
    v106.m128i_i64[1] = (__int64)sub_1416B95D0;
    v107.m512i_i64[0] = (__int64)&v79;
    v107.m512i_i64[1] = (__int64)sub_1416B9630;
    sub_1416ABFD0(&v93, &unk_141A56F8A, &v105);
    *((_QWORD *)&v110 + 1) = v93.m256i_i64[1];
    sub_1416828D0((unsigned int)&v88, v40, v13, v93.m256i_i32[2], v93.m256i_i64[2]);
    if ( v93.m256i_i64[0] )
      sub_140001660(*((_QWORD *)&v110 + 1), v93.m256i_i64[0], 1);
    *((_QWORD *)&v110 + 1) = v88.m256i_i64[0];
    v45 = v88.m256i_i64[2];
    v108 = v88.m256i_i64[1];
    sub_141695A00(&v105, v88.m256i_i64[1], v88.m256i_i64[2]);
    if ( (_DWORD)v105 != 2 )
    {
      if ( *((_QWORD *)&v110 + 1) )
        sub_140001660(v108, *((_QWORD *)&v110 + 1), 1);
      goto LABEL_45;
    }
    if ( (BYTE8(v105) & 3u) - 2 >= 2 && (BYTE8(v105) & 3) != 0 )
    {
      --*((_QWORD *)&v105 + 1);
      LOBYTE(v105) = 3;
      sub_1416BCB00((char *)&v105 + 8);
    }
    if ( *((_QWORD *)&v110 + 1) != -1 )
      break;
LABEL_45:
    v44 = v43++ < 0x63u;
    if ( !v44 )
    {
      v88.m256i_i64[0] = (__int64)&v96;
      v88.m256i_i64[1] = (__int64)sub_140186EE0;
      sub_1416ABFD0((char *)&v105 + 8, &unk_141A56EBD, &v88);
LABEL_61:
      v20 = *((_QWORD *)&v105 + 1);
      v12 = _mm_loadu_si128(&v106);
      v13 = v107.m512i_i64[0];
      v82 = *(__m128i *)&v107.m512i_u64[1];
      v83 = *(_OWORD *)&v107.m512i_u64[3];
      v84 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
      v85 = v107.m512i_i64[7];
      v11 = 10;
      goto LABEL_18;
    }
  }
  v56 = v101;
  v57 = sub_140222E10(v108, v45, v103, v101);
  v59 = v58;
  if ( (v57 & 1) != 0 || (v59 = sub_1401BD880(v58)) != 0 )
  {
    sub_140EBB980((__int64)&v105, (__int64)&v96, v59);
    goto LABEL_79;
  }
  sub_14169D480(&v88, v108, v45);
  v104 = v88.m256i_i64[0];
  if ( v88.m256i_i64[0] == -1 )
  {
    sub_140EBBA40((__int64)&v105, (__int64)&v96, v88.m256i_i64[1]);
LABEL_79:
    v20 = *((_QWORD *)&v105 + 1);
    v11 = v105;
    v12 = v106;
    v13 = v107.m512i_i64[0];
    v82 = *(__m128i *)&v107.m512i_u64[1];
    v83 = *(_OWORD *)&v107.m512i_u64[3];
    v84 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
    v85 = v107.m512i_i64[7];
    v22 = v109;
    v60 = *((_QWORD *)&v110 + 1);
    goto LABEL_80;
  }
  v98 = v88.m256i_i64[1];
  if ( (__m128i *)v88.m256i_i64[2] == v56 && !(unsigned int)sub_1418F4B70(v88.m256i_i64[1], v103) )
  {
    sub_14169D480(&v88, v102, v9);
    v100 = (const __m128i *)v88.m256i_i64[0];
    if ( v88.m256i_i64[0] == -1 )
    {
      sub_140EBBB00((__int64)&v105, (__int64)&v96, v88.m256i_i64[1]);
      v20 = *((_QWORD *)&v105 + 1);
      v11 = v105;
      v12 = v106;
      v13 = v107.m512i_i64[0];
      v82 = *(__m128i *)&v107.m512i_u64[1];
      v83 = *(_OWORD *)&v107.m512i_u64[3];
      v84 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
      v85 = v107.m512i_i64[7];
      goto LABEL_107;
    }
    v81 = v88.m256i_i64[1];
    if ( (__m128i *)v88.m256i_i64[2] == v101 && !(unsigned int)sub_1418F4B70(v81, v103) )
    {
      v68 = sub_141695140(v102, v9);
      if ( !v68 )
      {
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v79 = v102;
          v80 = v9;
          v93.m256i_i64[0] = v108;
          v93.m256i_i64[1] = v45;
          v88.m256i_i64[0] = (__int64)&v79;
          v88.m256i_i64[1] = (__int64)sub_14169F630;
          v88.m256i_i64[2] = (__int64)&v93;
          v88.m256i_i64[3] = (__int64)sub_14169F630;
          *(_QWORD *)&v105 = aCodexmateLibCo_39;
          *((_QWORD *)&v105 + 1) = 43;
          v106.m128i_i64[0] = (__int64)aCodexmateLibCo_39;
          v106.m128i_i64[1] = 43;
          v107.m512i_i64[0] = (__int64)&off_141A56188;
          sub_140BAD520(&unk_141A5611C, &v88, 2, &v105);
        }
        sub_1416AB5A0(&v88, v108, v45);
        v23 = v88.m256i_u64[2];
        v78 = (const __m128i *)v88.m256i_i64[1];
        sub_14072C410((unsigned int)&v105, v88.m256i_i32[4], 0, 1, 1);
        v20 = *((_QWORD *)&v105 + 1);
        if ( (_BYTE)v105 )
          sub_141938D2B(*((_QWORD *)&v105 + 1), v106.m128i_i64[0]);
        v101 = (__m128i *)v106.m128i_i64[0];
        if ( v23 )
          sub_1418F44E0(v101, v78, v23);
        if ( v100 )
          sub_140001660(v81, v100, 1);
        if ( v104 )
          sub_140001660(v98, v104, 1);
        if ( *((_QWORD *)&v110 + 1) )
          sub_140001660(v108, *((_QWORD *)&v110 + 1), 1);
        if ( v109 )
          sub_140001660(v103, v109, 1);
        if ( v88.m256i_i64[0] > 0 )
          sub_140001660(v78, v88.m256i_i64[0], 1);
        goto LABEL_27;
      }
      sub_140EBBBC0((__int64)&v105, (__int64)&v96, v68);
      v20 = *((_QWORD *)&v105 + 1);
      v11 = v105;
      v12 = v106;
      v13 = v107.m512i_i64[0];
      v82 = *(__m128i *)&v107.m512i_u64[1];
      v83 = *(_OWORD *)&v107.m512i_u64[3];
      v84 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
      v85 = v107.m512i_i64[7];
      if ( !v100 )
        goto LABEL_107;
    }
    else
    {
      *(_QWORD *)&v105 = &v96;
      *((_QWORD *)&v105 + 1) = sub_140186EE0;
      sub_1416ABFD0(&v70, &unk_141A561CB, &v105);
      v20 = v70;
      v11 = 10;
      v12 = v71;
      if ( !v100 )
        goto LABEL_107;
    }
    sub_140001660(v81, v100, 1);
    goto LABEL_107;
  }
  *(_QWORD *)&v105 = &v96;
  *((_QWORD *)&v105 + 1) = sub_140186EE0;
  sub_1416ABFD0(&v72, &unk_141A561FF, &v105);
  v20 = v72;
  v11 = 10;
  v12 = v73;
LABEL_107:
  v22 = v109;
  v60 = *((_QWORD *)&v110 + 1);
  if ( v104 )
  {
    v67 = *((_QWORD *)&v110 + 1);
    sub_140001660(v98, v104, 1);
    v60 = v67;
  }
LABEL_80:
  if ( v60 )
    sub_140001660(v108, v60, 1);
LABEL_22:
  if ( v22 )
    sub_140001660(v103, v22, 1);
  if ( v11 != -1 )
  {
    v10 = v20;
LABEL_5:
    *(_QWORD *)(a1 + 88) = v85;
    v14 = v82;
    v15 = v83;
    *(__m128i *)(a1 + 72) = v84;
    *(_OWORD *)(a1 + 56) = v15;
    *(__m128i *)(a1 + 40) = v14;
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = v10;
    *(__m128i *)(a1 + 16) = v12;
    *(_QWORD *)(a1 + 32) = v13;
    v16 = v75;
    if ( !v75 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v101 = (__m128i *)v12.m128i_i64[0];
  v23 = _mm_shuffle_epi32(v12, 238).m128i_u64[0];
LABEL_27:
  LODWORD(v8) = v99;
  if ( v20 != -1 )
  {
    *((_QWORD *)&v110 + 1) = v20;
    v24 = v87;
    if ( v87 == (_QWORD)v86 )
      sub_14190FDC0(&v86);
    v25 = *((_QWORD *)&v86 + 1);
    v26 = 3 * v24;
    *(_QWORD *)(*((_QWORD *)&v86 + 1) + 8 * v26) = *((_QWORD *)&v110 + 1);
    *(_QWORD *)(v25 + 8 * v26 + 8) = v101;
    *(_QWORD *)(v25 + 8 * v26 + 16) = v23;
    v87 = v24 + 1;
  }
LABEL_31:
  if ( v75 )
    sub_140001660(v102, v75, 1);
  sub_1416828D0((unsigned int)&v82, v8, v110, (unsigned int)aCodexRouterTop, 34);
  v27 = v83;
  v96 = aCodexRouterTop;
  v97 = 34;
  v102 = v82.m128i_i64[1];
  sub_140EF8C50((__int64)&v105, v82.m128i_i64[1], v83, (__int64)aCodexRouterTop, 34);
  v28 = *((_QWORD *)&v105 + 1);
  v29 = v105;
  v30 = _mm_loadu_si128(&v106);
  if ( (_QWORD)v105 != -1 )
  {
    v31 = (__m128i *)v107.m512i_i64[0];
    v88 = *(__m256i *)&v107.m512i_u64[1];
    v89 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
    *(_QWORD *)&v90 = v107.m512i_i64[7];
    goto LABEL_35;
  }
  if ( *((_QWORD *)&v105 + 1) == -1 )
  {
    v34 = -1;
    goto LABEL_90;
  }
  v108 = *((_QWORD *)&v105 + 1);
  v109 = v30.m128i_i64[0];
  v103 = (__m128i *)_mm_shuffle_epi32(v30, 238).m128i_u64[0];
  sub_140EA28E0(&v105);
  v34 = *((_QWORD *)&v105 + 1);
  v29 = v105;
  v30 = _mm_loadu_si128(&v106);
  v31 = (__m128i *)v107.m512i_i64[0];
  if ( (_QWORD)v105 != -1 )
  {
    *(_QWORD *)&v90 = v107.m512i_i64[7];
    v35 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[1]);
    v89 = *(__m128i *)&v107.m512i_u64[5];
    *(_OWORD *)&v88.m256i_u64[2] = *(_OWORD *)&v107.m512i_u64[3];
    *(__m128i *)v88.m256i_i8 = v35;
    goto LABEL_85;
  }
  v93.m256i_i64[0] = *((_QWORD *)&v105 + 1);
  *(__m128i *)&v93.m256i_u64[1] = v30;
  v93.m256i_i64[3] = v107.m512i_i64[0];
  if ( *((_QWORD *)&v105 + 1) != -1 )
  {
    *(_QWORD *)&v110 = *((_QWORD *)&v105 + 1);
    *((_QWORD *)&v110 + 1) = v30.m128i_i64[0];
    sub_1403FAE40(&v93);
    if ( (_QWORD)v110 )
      sub_140001660(*((_QWORD *)&v110 + 1), 24 * v110, 8);
    v29 = -1;
    v34 = -1;
    goto LABEL_85;
  }
  v46 = sub_141682A00(v102, v27);
  v50 = v46;
  if ( !v46 )
  {
    v93.m256i_i64[0] = (__int64)&v96;
    v93.m256i_i64[1] = (__int64)sub_140186EE0;
    sub_1416ABFD0((char *)&v105 + 8, &unk_141A56EA2, &v93);
LABEL_84:
    v34 = *((_QWORD *)&v105 + 1);
    v30 = _mm_loadu_si128(&v106);
    v31 = (__m128i *)v107.m512i_i64[0];
    v88 = *(__m256i *)&v107.m512i_u64[1];
    v89 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
    *(_QWORD *)&v90 = v107.m512i_i64[7];
    v29 = 10;
    goto LABEL_85;
  }
  v51 = v47;
  v93.m256i_i32[0] = sub_141683E80(v48, v47, v49);
  v93.m256i_i32[1] = v52;
  sub_141683E30(&v105, &v93, 3577643008LL, 27111902);
  v53 = *((unsigned __int64 *)&v105 + 1) * (unsigned __int128)0x3E8uLL + v106.m128i_u32[0] / 0xF4240uLL;
  v54 = 0;
  if ( (_BYTE)v105 )
    v53 = 0u;
  v74 = v53;
  while ( 2 )
  {
    LOBYTE(v79) = v54;
    *(_QWORD *)&v105 = &v96;
    *((_QWORD *)&v105 + 1) = sub_140186EE0;
    v106.m128i_i64[0] = (__int64)&v74;
    v106.m128i_i64[1] = (__int64)sub_1416B95D0;
    v107.m512i_i64[0] = (__int64)&v79;
    v107.m512i_i64[1] = (__int64)sub_1416B9630;
    sub_1416ABFD0(&v75, &unk_141A56F8A, &v105);
    *(_QWORD *)&v110 = v76;
    sub_1416828D0((unsigned int)&v93, v50, v51, v76, v77);
    if ( v75 )
      sub_140001660(v110, v75, 1);
    v110 = *(_OWORD *)v93.m256i_i8;
    v55 = v93.m256i_i64[2];
    sub_141695A00(&v105, v93.m256i_i64[1], v93.m256i_i64[2]);
    if ( (_DWORD)v105 != 2 )
    {
      if ( (_QWORD)v110 )
        sub_140001660(*((_QWORD *)&v110 + 1), v110, 1);
LABEL_67:
      v44 = v54++ < 0x63u;
      if ( !v44 )
      {
        v93.m256i_i64[0] = (__int64)&v96;
        v93.m256i_i64[1] = (__int64)sub_140186EE0;
        sub_1416ABFD0((char *)&v105 + 8, &unk_141A56EBD, &v93);
        goto LABEL_84;
      }
      continue;
    }
    break;
  }
  if ( (BYTE8(v105) & 3u) - 2 >= 2 && (BYTE8(v105) & 3) != 0 )
  {
    --*((_QWORD *)&v105 + 1);
    LOBYTE(v105) = 3;
    sub_1416BCB00((char *)&v105 + 8);
  }
  if ( (_QWORD)v110 == -1 )
    goto LABEL_67;
  v31 = v103;
  v64 = sub_140222E10(*((_QWORD *)&v110 + 1), v55, v109, v103);
  v66 = v65;
  if ( (v64 & 1) != 0 || (v66 = sub_1401BD880(v65)) != 0 )
  {
    sub_140EBB980((__int64)&v105, (__int64)&v96, v66);
    goto LABEL_100;
  }
  sub_14169D480(&v93, *((_QWORD *)&v110 + 1), v55);
  v99 = v93.m256i_i64[0];
  if ( v93.m256i_i64[0] == -1 )
  {
    sub_140EBBA40((__int64)&v105, (__int64)&v96, v93.m256i_i64[1]);
LABEL_100:
    v34 = *((_QWORD *)&v105 + 1);
    v29 = v105;
    v30 = v106;
    v31 = (__m128i *)v107.m512i_i64[0];
    v88 = *(__m256i *)&v107.m512i_u64[1];
    v89 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
    *(_QWORD *)&v90 = v107.m512i_i64[7];
    goto LABEL_101;
  }
  v101 = (__m128i *)v93.m256i_i64[1];
  if ( (__m128i *)v93.m256i_i64[2] == v31 && !(unsigned int)sub_1418F4B70(v93.m256i_i64[1], v109) )
  {
    sub_14169D480(&v93, v102, v27);
    v104 = v93.m256i_i64[0];
    if ( v93.m256i_i64[0] == -1 )
    {
      sub_140EBBB00((__int64)&v105, (__int64)&v96, v93.m256i_i64[1]);
      v34 = *((_QWORD *)&v105 + 1);
      v29 = v105;
      v30 = v106;
      v31 = (__m128i *)v107.m512i_i64[0];
      v88 = *(__m256i *)&v107.m512i_u64[1];
      v89 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
      *(_QWORD *)&v90 = v107.m512i_i64[7];
      goto LABEL_114;
    }
    v98 = v93.m256i_i64[1];
    if ( (__m128i *)v93.m256i_i64[2] == v103 && !(unsigned int)sub_1418F4B70(v98, v109) )
    {
      v69 = sub_141695140(v102, v27);
      if ( !v69 )
      {
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v79 = v102;
          v80 = v27;
          v75 = *((_QWORD *)&v110 + 1);
          v76 = v55;
          v93.m256i_i64[0] = (__int64)&v79;
          v93.m256i_i64[1] = (__int64)sub_14169F630;
          v93.m256i_i64[2] = (__int64)&v75;
          v93.m256i_i64[3] = (__int64)sub_14169F630;
          *(_QWORD *)&v105 = aCodexmateLibCo_39;
          *((_QWORD *)&v105 + 1) = 43;
          v106.m128i_i64[0] = (__int64)aCodexmateLibCo_39;
          v106.m128i_i64[1] = 43;
          v107.m512i_i64[0] = (__int64)&off_141A56188;
          sub_140BAD520(&unk_141A5611C, &v93, 2, &v105);
        }
        sub_1416AB5A0(&v93, *((_QWORD *)&v110 + 1), v55);
        v27 = v93.m256i_u64[2];
        v100 = (const __m128i *)v93.m256i_i64[1];
        sub_14072C410((unsigned int)&v105, v93.m256i_i32[4], 0, 1, 1);
        v34 = *((_QWORD *)&v105 + 1);
        if ( (_BYTE)v105 )
          sub_141938D2B(*((_QWORD *)&v105 + 1), v106.m128i_i64[0]);
        v103 = (__m128i *)v106.m128i_i64[0];
        if ( v27 )
          sub_1418F44E0(v103, v100, v27);
        if ( v104 )
          sub_140001660(v98, v104, 1);
        if ( v99 )
          sub_140001660(v101, v99, 1);
        if ( (_QWORD)v110 )
          sub_140001660(*((_QWORD *)&v110 + 1), v110, 1);
        if ( v108 )
          sub_140001660(v109, v108, 1);
        if ( v93.m256i_i64[0] > 0 )
          sub_140001660(v100, v93.m256i_i64[0], 1);
        goto LABEL_90;
      }
      sub_140EBBBC0((__int64)&v105, (__int64)&v96, v69);
      v34 = *((_QWORD *)&v105 + 1);
      v29 = v105;
      v30 = v106;
      v31 = (__m128i *)v107.m512i_i64[0];
      v88 = *(__m256i *)&v107.m512i_u64[1];
      v89 = _mm_loadu_si128((const __m128i *)&v107.m512i_u64[5]);
      *(_QWORD *)&v90 = v107.m512i_i64[7];
      if ( !v104 )
        goto LABEL_114;
    }
    else
    {
      *(_QWORD *)&v105 = &v96;
      *((_QWORD *)&v105 + 1) = sub_140186EE0;
      sub_1416ABFD0(&v70, &unk_141A561CB, &v105);
      v34 = v70;
      v29 = 10;
      v30 = v71;
      if ( !v104 )
        goto LABEL_114;
    }
    sub_140001660(v98, v104, 1);
    goto LABEL_114;
  }
  *(_QWORD *)&v105 = &v96;
  *((_QWORD *)&v105 + 1) = sub_140186EE0;
  sub_1416ABFD0(&v72, &unk_141A561FF, &v105);
  v34 = v72;
  v29 = 10;
  v30 = v73;
LABEL_114:
  if ( v99 )
    sub_140001660(v101, v99, 1);
LABEL_101:
  if ( (_QWORD)v110 )
    sub_140001660(*((_QWORD *)&v110 + 1), v110, 1);
LABEL_85:
  if ( v108 )
    sub_140001660(v109, v108, 1);
  if ( v29 != -1 )
  {
    v28 = v34;
LABEL_35:
    *(_QWORD *)(a1 + 88) = v90;
    v32 = *(_OWORD *)v88.m256i_i8;
    v33 = *(_OWORD *)&v88.m256i_u64[2];
    *(__m128i *)(a1 + 72) = v89;
    *(_OWORD *)(a1 + 56) = v33;
    *(_OWORD *)(a1 + 40) = v32;
    *(_QWORD *)a1 = v29;
    *(_QWORD *)(a1 + 8) = v28;
    *(__m128i *)(a1 + 16) = v30;
    *(_QWORD *)(a1 + 32) = v31;
    v16 = v82.m128i_i64[0];
    if ( !v82.m128i_i64[0] )
    {
LABEL_7:
      v17 = v87;
      if ( v87 )
      {
        v18 = (_QWORD *)(*((_QWORD *)&v86 + 1) + 8LL);
        do
        {
          v19 = *(v18 - 1);
          if ( v19 )
            sub_140001660(*v18, v19, 1);
          v18 += 3;
          --v17;
        }
        while ( v17 );
      }
      result = v86;
      if ( (_QWORD)v86 )
        return sub_140001660(*((_QWORD *)&v86 + 1), 24 * v86, 8);
      return result;
    }
LABEL_6:
    sub_140001660(v102, v16, 1);
    goto LABEL_7;
  }
  v103 = (__m128i *)v30.m128i_i64[0];
  v27 = _mm_shuffle_epi32(v30, 238).m128i_u64[0];
LABEL_90:
  if ( v34 != -1 )
  {
    *(_QWORD *)&v110 = v34;
    v61 = v87;
    if ( v87 == (_QWORD)v86 )
      sub_14190FDC0(&v86);
    v62 = *((_QWORD *)&v86 + 1);
    v63 = 3 * v61;
    *(_QWORD *)(*((_QWORD *)&v86 + 1) + 8 * v63) = v110;
    *(_QWORD *)(v62 + 8 * v63 + 8) = v103;
    *(_QWORD *)(v62 + 8 * v63 + 16) = v27;
    v87 = v61 + 1;
  }
  if ( v82.m128i_i64[0] )
    sub_140001660(v102, v82.m128i_i64[0], 1);
  result = v87;
  *(_QWORD *)(a1 + 24) = v87;
  *(_OWORD *)(a1 + 8) = v86;
  *(_QWORD *)a1 = -1;
  return result;
}
