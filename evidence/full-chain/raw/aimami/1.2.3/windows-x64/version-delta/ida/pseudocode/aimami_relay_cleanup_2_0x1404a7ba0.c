// win 1.2.3 delta | aimami_relay_cleanup_2 @ 0x1404a7ba0 | changelog ②关闭路由修复
// [FULL hexrays 14605B]
__int64 __fastcall sub_1404A7BA0(__int64 a1)
{
  unsigned __int128 v2; // kr00_16
  unsigned __int64 v3; // r13
  _QWORD *v4; // r15
  __int64 *i; // rax
  __int64 (__fastcall *v6)(); // rdi
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128i v20; // xmm0
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rsi
  __m128i v32; // xmm6
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // r12
  __int64 v36; // rbx
  __m128i v37; // xmm7
  __int64 v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // r14
  unsigned __int128 v47; // kr10_16
  unsigned __int64 v48; // r13
  __int64 v49; // rdx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int64 v53; // [rsp+20h] [rbp-60h]
  _QWORD *v54; // [rsp+28h] [rbp-58h]
  __int64 v55; // [rsp+30h] [rbp-50h]
  __int64 v56; // [rsp+38h] [rbp-48h]
  __m128i v57; // [rsp+40h] [rbp-40h] BYREF
  __int128 v58; // [rsp+50h] [rbp-30h]
  __int128 v59; // [rsp+60h] [rbp-20h]
  __int128 v60; // [rsp+70h] [rbp-10h]
  __m128i v61; // [rsp+80h] [rbp+0h]
  __int128 v62; // [rsp+90h] [rbp+10h]
  __int128 v63; // [rsp+A0h] [rbp+20h]
  __m128i v64; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v65; // [rsp+C8h] [rbp+48h]
  __m128i v66; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v67; // [rsp+E0h] [rbp+60h]
  __m128i v68; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v69; // [rsp+F8h] [rbp+78h]
  __m128i v70; // [rsp+100h] [rbp+80h] BYREF
  __int64 v71; // [rsp+110h] [rbp+90h]
  __m128i v72; // [rsp+118h] [rbp+98h] BYREF
  __int64 v73; // [rsp+128h] [rbp+A8h]
  __m128i v74; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v75; // [rsp+140h] [rbp+C0h]
  __int64 v76; // [rsp+148h] [rbp+C8h]
  unsigned __int128 v77; // [rsp+150h] [rbp+D0h]
  __m128i v78; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v79; // [rsp+170h] [rbp+F0h]
  __int128 v80; // [rsp+180h] [rbp+100h]
  __int128 v81; // [rsp+190h] [rbp+110h]
  _QWORD *v82; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 (__fastcall *v83)(); // [rsp+1B0h] [rbp+130h]
  __int64 *v84; // [rsp+1B8h] [rbp+138h]
  __int64 v85; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v86; // [rsp+1C8h] [rbp+148h]
  __m128i v87; // [rsp+1D0h] [rbp+150h] BYREF
  unsigned __int128 v88; // [rsp+1E0h] [rbp+160h]
  __m256i v89; // [rsp+1F0h] [rbp+170h]
  __int128 v90; // [rsp+210h] [rbp+190h]
  __int128 v91; // [rsp+220h] [rbp+1A0h]
  __m128i *v92; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v93; // [rsp+240h] [rbp+1C0h] BYREF
  _QWORD *v94; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 (__fastcall *v95)(); // [rsp+250h] [rbp+1D0h]
  __m128i *v96; // [rsp+258h] [rbp+1D8h]
  __int64 (__fastcall *v97)(); // [rsp+260h] [rbp+1E0h]
  __int64 v98; // [rsp+268h] [rbp+1E8h]
  __int128 v99; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v100; // [rsp+280h] [rbp+200h] BYREF
  _BYTE v101[24]; // [rsp+290h] [rbp+210h]
  __int64 v102; // [rsp+2A8h] [rbp+228h]
  __m128i v103; // [rsp+2B0h] [rbp+230h] BYREF
  __m512i v104; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v105; // [rsp+300h] [rbp+280h]
  __int128 v106; // [rsp+310h] [rbp+290h]
  __int64 v107; // [rsp+328h] [rbp+2A8h]
  _QWORD *v108; // [rsp+330h] [rbp+2B0h]
  __int64 v109; // [rsp+338h] [rbp+2B8h]
  __int64 v110; // [rsp+340h] [rbp+2C0h]
  __int64 v111; // [rsp+348h] [rbp+2C8h]

  v111 = -2;
  *(_QWORD *)&v99 = 0;
  *((_QWORD *)&v99 + 1) = 8;
  v100 = 0;
  *(_QWORD *)v101 = 8;
  *(_OWORD *)&v101[8] = 0;
  sub_140712830(&v103);
  v2 = (unsigned __int128)v103;
  v53 = v103.m128i_i64[1];
  v55 = v103.m128i_i64[0];
  v85 = v103.m128i_i64[1] + 32 * v104.m512i_i64[0];
  v56 = v85;
  v3 = 32 * v104.m512i_i64[0] - 32;
  v4 = (_QWORD *)(v103.m128i_i64[1] + 40);
  for ( i = (__int64 *)v103.m128i_i64[1]; ; i = v84 )
  {
    if ( i == (__int64 *)v85 )
      goto LABEL_71;
    v84 = i + 4;
    v54 = i + 4;
    if ( *i == -1 )
      break;
    v98 = *i;
    v6 = (__int64 (__fastcall *)())i[2];
    v108 = (_QWORD *)i[1];
    sub_141486710(&v103, v108, v6);
    if ( v103.m128i_i32[0] == 2 )
    {
      v57.m128i_i64[1] = v103.m128i_i64[1];
      v57.m128i_i64[0] = 2;
LABEL_8:
      sub_140018650(&v57.m128i_u64[1]);
      goto LABEL_9;
    }
    v57 = v103;
    *(_QWORD *)&v62 = v105;
    v61 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[6]);
    v60 = *(_OWORD *)&v104.m512i_u64[4];
    v59 = *(_OWORD *)&v104.m512i_u64[2];
    v58 = *(_OWORD *)v104.m512i_i8;
    if ( v103.m128i_i64[0] == 2 )
      goto LABEL_8;
    sub_1404A4750(&v103, v108, v6);
    if ( BYTE8(v106) != 0xFF )
    {
      v63 = v106;
      v62 = v105;
      v61 = *(__m128i *)&v104.m512i_u64[6];
      v7 = _mm_loadu_si128(&v103);
      v60 = *(_OWORD *)&v104.m512i_u64[4];
      v59 = *(_OWORD *)&v104.m512i_u64[2];
      v58 = *(_OWORD *)v104.m512i_i8;
      v57 = v7;
      sub_1404A3CD0(&v87, &v57);
      if ( v87.m128i_i32[0] != -1 )
      {
        v105 = v91;
        *(_OWORD *)&v104.m512i_u64[6] = v90;
        v8 = _mm_loadu_si128(&v87);
        *(__m256i *)&v104.m512i_u64[2] = v89;
        *(_OWORD *)v104.m512i_i8 = v88;
        v103 = v8;
        v94 = v108;
        v95 = v6;
        v78.m128i_i64[0] = (__int64)&v94;
        v78.m128i_i64[1] = (__int64)sub_14148F3A0;
        *(_QWORD *)&v79 = &v103;
        *((_QWORD *)&v79 + 1) = sub_140B036A0;
        sub_14149C0F0(&v72, &unk_141757B59, &v78);
        v9 = v100;
        if ( (_QWORD)v100 == (_QWORD)v99 )
          sub_141689AB0(&v99);
        v10 = *((_QWORD *)&v99 + 1);
        v11 = 3 * v9;
        *(_QWORD *)(*((_QWORD *)&v99 + 1) + 8 * v11 + 16) = v73;
        *(__m128i *)(v10 + 8 * v11) = _mm_loadu_si128(&v72);
        *(_QWORD *)&v100 = v9 + 1;
        sub_14043E650(&v103);
        goto LABEL_28;
      }
      if ( !v87.m128i_i8[8] )
      {
LABEL_28:
        sub_14043C900(&v57);
        goto LABEL_9;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, const char *, __int64, __int64, _QWORD *, __int64, __int64))sub_14046F850)(
        &v103,
        &v57,
        aSelectIdModelC,
        127,
        v53,
        v54,
        v55,
        v56);
      if ( v103.m128i_i32[0] == 1 )
      {
        v16 = _mm_loadu_si128((const __m128i *)&v103.m128i_u64[1]);
        v89 = *(__m256i *)&v104.m512i_u64[3];
        v88 = *(_OWORD *)&v104.m512i_u64[1];
        v87 = v16;
        v82 = v108;
        v83 = v6;
        v94 = &v82;
        v95 = sub_14148F3A0;
        v96 = &v87;
        v97 = sub_140FB8910;
        sub_14149C0F0(&v70, &unk_141757B59, &v94);
        v17 = v100;
        if ( (_QWORD)v100 == (_QWORD)v99 )
          sub_141689AB0(&v99);
        v18 = *((_QWORD *)&v99 + 1);
        v19 = 3 * v17;
        *(_QWORD *)(*((_QWORD *)&v99 + 1) + 8 * v19 + 16) = v71;
        *(__m128i *)(v18 + 8 * v19) = _mm_loadu_si128(&v70);
        *(_QWORD *)&v100 = v17 + 1;
        sub_14043D020(&v87);
        goto LABEL_28;
      }
      v20 = _mm_loadu_si128((const __m128i *)&v103.m128i_u64[1]);
      v81 = *(_OWORD *)&v104.m512i_u64[5];
      v80 = *(_OWORD *)&v104.m512i_u64[3];
      v79 = *(_OWORD *)&v104.m512i_u64[1];
      v78 = v20;
      v21 = sub_1414B6B70(v104.m512i_i64[6]);
      if ( v21 )
      {
        v103 = (__m128i)0x8000000000000013uLL;
        v104.m512i_i64[0] = v21;
        v94 = v108;
        v95 = v6;
        v87.m128i_i64[0] = (__int64)&v94;
        v87.m128i_i64[1] = (__int64)sub_14148F3A0;
        *(_QWORD *)&v88 = &v103;
        *((_QWORD *)&v88 + 1) = sub_140FB8910;
        sub_14149C0F0(&v68, &unk_141757B59, &v87);
        v22 = v100;
        if ( (_QWORD)v100 == (_QWORD)v99 )
          sub_141689AB0(&v99);
        v23 = *((_QWORD *)&v99 + 1);
        v24 = 3 * v22;
        *(_QWORD *)(*((_QWORD *)&v99 + 1) + 8 * v24 + 16) = v69;
        *(__m128i *)(v23 + 8 * v24) = _mm_loadu_si128(&v68);
        *(_QWORD *)&v100 = v22 + 1;
        sub_14043D020(&v103);
        sub_14043D1B0(&v78);
        goto LABEL_28;
      }
      v77 = v2;
      v76 = a1;
      v92 = &v78;
      v93 = v21;
      v86 = v3;
      while ( 1 )
      {
LABEL_31:
        sub_1404DE8F0(&v103, &v92);
        v27 = v103.m128i_i64[0];
        if ( v103.m128i_i64[0] != -1 )
        {
          v110 = v103.m128i_i64[1];
          v29 = v104.m512i_i64[1];
          v28 = v104.m512i_i64[0];
          goto LABEL_36;
        }
        if ( !v93 )
          goto LABEL_65;
        sub_14042B0E0(&v103, &v93, 0);
        v110 = v103.m128i_i64[1];
        v27 = v103.m128i_i64[0];
        v30 = v104.m512i_i64[1];
        v28 = v104.m512i_i64[0];
        if ( v103.m128i_i64[0] != -1 )
          break;
        v109 = v104.m512i_i64[0];
        sub_14042B0E0(&v103, &v93, 1);
        v39 = v103.m128i_i64[1];
        v27 = v103.m128i_i64[0];
        v35 = v104.m512i_i64[1];
        v107 = v104.m512i_i64[0];
        if ( v103.m128i_i64[0] != -1 )
        {
          v31 = v104.m512i_i64[2];
          v32 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[3]);
          v33 = v104.m512i_i64[5];
          if ( v110 )
            sub_140001660(v109, v110, 1);
          v110 = v39;
          v28 = v107;
          v29 = v35;
          goto LABEL_37;
        }
        v102 = v103.m128i_i64[1];
        sub_14042B0E0(&v103, &v93, 2);
        v27 = v103.m128i_i64[0];
        v37 = _mm_loadu_si128((const __m128i *)&v103.m128i_u64[1]);
        v36 = v104.m512i_i64[1];
        if ( v103.m128i_i64[0] != -1 )
        {
          v31 = v104.m512i_i64[2];
          v32 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[3]);
          v33 = v104.m512i_i64[5];
          if ( v102 )
            sub_140001660(v107, v102, 1);
          v28 = _mm_shuffle_epi32(v37, 238).m128i_u64[0];
          if ( v110 )
          {
            v40 = v109;
            v109 = v28;
            sub_140001660(v40, v110, 1);
            v110 = v37.m128i_i64[0];
            v28 = v109;
          }
          else
          {
            v110 = v37.m128i_i64[0];
          }
          v29 = v36;
          goto LABEL_37;
        }
        v41 = v30;
        v3 = v86;
        if ( v110 == -2 )
        {
LABEL_65:
          sub_14043CE10(&v92);
          a1 = v76;
          v47 = v77;
          v45 = v47 >> 64;
          v46 = v47;
          sub_14043D1B0(&v78);
          sub_14043C900(&v57);
          v2 = __PAIR128__(v45, v46);
          goto LABEL_9;
        }
        if ( v110 == -1 )
        {
          v27 = v109;
          v110 = v41;
          v29 = v107;
          v34 = v102;
          goto LABEL_38;
        }
        v103.m128i_i64[0] = v110;
        v103.m128i_i64[1] = v109;
        v104.m512i_i64[0] = v41;
        v104.m512i_i64[1] = v102;
        v104.m512i_i64[2] = v107;
        v104.m512i_i64[3] = v35;
        *(__m128i *)&v104.m512i_u64[4] = v37;
        v104.m512i_i64[6] = v36;
        if ( !(unsigned __int8)sub_1404E1D70(aSubagent, 10, _mm_shuffle_epi32(v37, 238).m128i_u64[0], v36) )
        {
          ++*(_QWORD *)&v101[16];
          if ( *(_QWORD *)&v101[8] < 3u )
          {
            v87.m128i_i64[0] = (__int64)&v103;
            v87.m128i_i64[1] = (__int64)sub_1400015F0;
            *(_QWORD *)&v88 = &v104.m512i_i64[1];
            *((_QWORD *)&v88 + 1) = sub_1400015F0;
            sub_14149C0F0(&v64, &unk_14175B8AC, &v87);
            v42 = *(_QWORD *)&v101[8];
            if ( *(_QWORD *)&v101[8] == *((_QWORD *)&v100 + 1) )
              sub_141689AB0((char *)&v100 + 8);
            v43 = *(_QWORD *)v101;
            v44 = 3 * v42;
            *(_QWORD *)(*(_QWORD *)v101 + 8 * v44 + 16) = v65;
            *(__m128i *)(v43 + 8 * v44) = _mm_loadu_si128(&v64);
            *(_QWORD *)&v101[8] = v42 + 1;
          }
        }
        if ( v103.m128i_i64[0] )
          sub_140001660(v103.m128i_i64[1], v103.m128i_i64[0], 1);
        if ( v104.m512i_i64[1] )
          sub_140001660(v104.m512i_i64[2], v104.m512i_i64[1], 1);
        if ( v104.m512i_i64[4] )
          sub_140001660(v104.m512i_i64[5], v104.m512i_i64[4], 1);
      }
      v29 = v104.m512i_i64[1];
LABEL_36:
      v31 = v104.m512i_i64[2];
      v32 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[3]);
      v33 = v104.m512i_i64[5];
LABEL_37:
      v34 = v28;
      v35 = v31;
      v36 = v33;
      v37 = v32;
LABEL_38:
      v87.m128i_i64[0] = v27;
      v87.m128i_i64[1] = v110;
      v88 = __PAIR128__(v29, v34);
      v89.m256i_i64[0] = v35;
      *(__m128i *)&v89.m256i_u64[1] = v37;
      v89.m256i_i64[3] = v36;
      v82 = v108;
      v83 = v6;
      v94 = &v82;
      v95 = sub_14148F3A0;
      v96 = &v87;
      v97 = sub_140FB8910;
      sub_14149C0F0(&v66, &unk_14175B8B8, &v94);
      v38 = v100;
      v3 = v86;
      if ( (_QWORD)v100 == (_QWORD)v99 )
        sub_141689AB0(&v99);
      v25 = *((_QWORD *)&v99 + 1);
      v26 = 3 * v38;
      *(_QWORD *)(*((_QWORD *)&v99 + 1) + 8 * v26 + 16) = v67;
      *(__m128i *)(v25 + 8 * v26) = _mm_loadu_si128(&v66);
      *(_QWORD *)&v100 = v38 + 1;
      sub_14043D020(&v87);
      goto LABEL_31;
    }
    v91 = v105;
    v90 = *(_OWORD *)&v104.m512i_u64[6];
    v12 = _mm_loadu_si128(&v103);
    v89 = *(__m256i *)&v104.m512i_u64[2];
    v88 = *(_OWORD *)v104.m512i_i8;
    v87 = v12;
    v94 = v108;
    v95 = v6;
    v78.m128i_i64[0] = (__int64)&v94;
    v78.m128i_i64[1] = (__int64)sub_14148F3A0;
    *(_QWORD *)&v79 = &v87;
    *((_QWORD *)&v79 + 1) = sub_140B036A0;
    sub_14149C0F0(&v74, &unk_141757B59, &v78);
    v13 = v100;
    if ( (_QWORD)v100 == (_QWORD)v99 )
      sub_141689AB0(&v99);
    v14 = *((_QWORD *)&v99 + 1);
    v15 = 3 * v13;
    *(_QWORD *)(*((_QWORD *)&v99 + 1) + 8 * v15 + 16) = v75;
    *(__m128i *)(v14 + 8 * v15) = _mm_loadu_si128(&v74);
    *(_QWORD *)&v100 = v13 + 1;
    sub_14043E650(&v87);
LABEL_9:
    if ( v98 )
      sub_140001660(v108, v98, 1);
    v3 -= 32LL;
    v4 += 4;
  }
  if ( (__int64 *)v85 != v84 )
  {
    v48 = v3 >> 5;
    do
    {
      v49 = *(v4 - 1);
      if ( v49 )
        sub_140001660(*v4, v49, 1);
      v4 += 4;
      --v48;
    }
    while ( v48 );
  }
LABEL_71:
  if ( (_QWORD)v2 )
    sub_140001660(*((_QWORD *)&v2 + 1), 32 * v2, 8);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)&v101[16];
  v50 = v99;
  v51 = v100;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)v101;
  *(_OWORD *)(a1 + 16) = v51;
  *(_OWORD *)a1 = v50;
  return a1;
}
