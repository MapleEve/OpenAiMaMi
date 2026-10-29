// win 1.2.7 latest-exe | module src/core/relay/config_takeover.rs | ea 0x1408d2390 | successor of pre-update 0x140efe660 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
void __fastcall sub_1408D2390(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __m128i v5; // xmm1
  __int128 v6; // xmm2
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  __m128i v11; // xmm6
  __int64 v12; // r15
  __m128i v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r12
  __m128i si128; // xmm0
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rbx
  __m128i v29; // xmm6
  __int64 v30; // r14
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // r15
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r12
  __int32 v39; // edx
  unsigned __int128 v40; // kr40_16
  unsigned __int8 v41; // bl
  bool v42; // cf
  __int64 v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r12
  int v48; // r13d
  __int32 v49; // edx
  unsigned __int128 v50; // kr50_16
  unsigned __int8 v51; // r14
  __int64 v52; // r15
  __int64 v53; // rbx
  char v54; // al
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  char v61; // al
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // [rsp+30h] [rbp-50h] BYREF
  __m128i v68; // [rsp+38h] [rbp-48h]
  __int64 v69; // [rsp+48h] [rbp-38h] BYREF
  __m128i v70; // [rsp+50h] [rbp-30h]
  unsigned __int128 v71; // [rsp+60h] [rbp-20h] BYREF
  __int64 v72; // [rsp+70h] [rbp-10h] BYREF
  __int64 v73; // [rsp+78h] [rbp-8h]
  __int64 v74; // [rsp+80h] [rbp+0h]
  __int64 v75; // [rsp+90h] [rbp+10h]
  __int64 v76; // [rsp+98h] [rbp+18h] BYREF
  __int64 v77; // [rsp+A0h] [rbp+20h]
  __int64 v78; // [rsp+A8h] [rbp+28h]
  __m128i v79; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v80; // [rsp+C0h] [rbp+40h]
  __m128i v81; // [rsp+D0h] [rbp+50h]
  __int64 v82; // [rsp+E0h] [rbp+60h]
  __int128 v83; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v84; // [rsp+F8h] [rbp+78h]
  __m256i v85; // [rsp+100h] [rbp+80h] BYREF
  __m128i v86; // [rsp+120h] [rbp+A0h]
  __int128 v87; // [rsp+130h] [rbp+B0h]
  __m128i v88; // [rsp+140h] [rbp+C0h]
  __int64 v89; // [rsp+150h] [rbp+D0h]
  __m256i v90; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v91; // [rsp+180h] [rbp+100h]
  __int64 v92; // [rsp+190h] [rbp+110h]
  const char *v93; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v94; // [rsp+1A8h] [rbp+128h]
  __int64 v95; // [rsp+1B0h] [rbp+130h]
  __int64 v96; // [rsp+1B8h] [rbp+138h]
  __int64 v97; // [rsp+1C0h] [rbp+140h]
  __int64 v98; // [rsp+1C8h] [rbp+148h]
  __int64 v99; // [rsp+1D0h] [rbp+150h]
  __int64 v100; // [rsp+1D8h] [rbp+158h]
  __int64 v101; // [rsp+1E0h] [rbp+160h]
  __int128 v102; // [rsp+1E8h] [rbp+168h] BYREF
  __m128i v103; // [rsp+1F8h] [rbp+178h] BYREF
  __m512i v104; // [rsp+208h] [rbp+188h] BYREF
  __int64 v105; // [rsp+248h] [rbp+1C8h]
  __int64 v106; // [rsp+250h] [rbp+1D0h]
  __int64 v107; // [rsp+258h] [rbp+1D8h]
  __int64 v108; // [rsp+260h] [rbp+1E0h]
  __int64 v109; // [rsp+268h] [rbp+1E8h]

  v109 = -2;
  sub_1408D1F30(&v102, a2);
  if ( (_DWORD)v102 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v104.m512i_u64[6];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v104.m512i_u64[4];
    v4 = v102;
    v5 = v103;
    v6 = *(_OWORD *)v104.m512i_i8;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v104.m512i_u64[2];
    *(_OWORD *)(a1 + 32) = v6;
    *(__m128i *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    return;
  }
  *(_QWORD *)&v83 = 0;
  *((_QWORD *)&v83 + 1) = 8;
  v84 = 0;
  v7 = *(_QWORD *)(a2 + 776);
  v105 = *(_QWORD *)(a2 + 784);
  sub_1416B18A0((unsigned int)&v72, v7, v105, (unsigned int)aRouterTakeover, 27);
  v8 = v74;
  v93 = aRouterTakeover;
  v94 = 27;
  v99 = v73;
  sub_1408CCD30((__int64)&v102, v73, v74, (__int64)aRouterTakeover, 27);
  v9 = *((_QWORD *)&v102 + 1);
  v10 = v102;
  v11 = _mm_loadu_si128(&v103);
  if ( (_QWORD)v102 != -1 )
  {
    v12 = v104.m512i_i64[0];
    v79 = *(__m128i *)&v104.m512i_u64[1];
    v80 = *(_OWORD *)&v104.m512i_u64[3];
    v81 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
    v82 = v104.m512i_i64[7];
    goto LABEL_5;
  }
  if ( *((_QWORD *)&v102 + 1) == -1 )
    goto LABEL_31;
  v96 = v7;
  v106 = *((_QWORD *)&v102 + 1);
  v100 = v11.m128i_i64[0];
  v98 = _mm_shuffle_epi32(v11, 238).m128i_u64[0];
  sub_14084EAA0(&v102);
  v19 = *((_QWORD *)&v102 + 1);
  v10 = v102;
  v11 = _mm_loadu_si128(&v103);
  v12 = v104.m512i_i64[0];
  v90 = *(__m256i *)&v104.m512i_u64[1];
  v91 = *(__m128i *)&v104.m512i_u64[5];
  v92 = v104.m512i_i64[7];
  if ( (_QWORD)v102 != -1 )
  {
    v82 = v92;
    si128 = _mm_load_si128((const __m128i *)&v90);
    v81 = v91;
    v80 = *(_OWORD *)&v90.m256i_u64[2];
    v79 = si128;
LABEL_18:
    v21 = v106;
    goto LABEL_22;
  }
  v85.m256i_i64[0] = *((_QWORD *)&v102 + 1);
  *(__m128i *)&v85.m256i_u64[1] = v11;
  v85.m256i_i64[3] = v104.m512i_i64[0];
  v86 = _mm_load_si128((const __m128i *)&v90);
  v87 = *(_OWORD *)&v90.m256i_u64[2];
  v88 = v91;
  v89 = v92;
  v21 = v106;
  if ( *((_QWORD *)&v102 + 1) != -1 )
  {
    sub_14084CC50(&v85);
    v10 = -1;
    v19 = -1;
    goto LABEL_22;
  }
  v38 = sub_1416B19D0(v99, v8);
  if ( !v38 )
  {
    v85.m256i_i64[0] = (__int64)&v93;
    v85.m256i_i64[1] = (__int64)sub_140191200;
    sub_1416DAFA0((char *)&v102 + 8, &unk_141A51960, &v85);
    goto LABEL_61;
  }
  v12 = v35;
  v85.m256i_i32[0] = sub_1416B2E50(v36, v35, v37);
  v85.m256i_i32[1] = v39;
  sub_1416B2E00(&v102, &v85, 3577643008LL, 27111902);
  v40 = *((unsigned __int64 *)&v102 + 1) * (unsigned __int128)0x3E8uLL + v103.m128i_u32[0] / 0xF4240uLL;
  v41 = 0;
  if ( (_BYTE)v102 )
    v40 = 0u;
  v71 = v40;
  while ( 1 )
  {
    LOBYTE(v76) = v41;
    *(_QWORD *)&v102 = &v93;
    *((_QWORD *)&v102 + 1) = sub_140191200;
    v103.m128i_i64[0] = (__int64)&v71;
    v103.m128i_i64[1] = (__int64)sub_1416E85A0;
    v104.m512i_i64[0] = (__int64)&v76;
    v104.m512i_i64[1] = (__int64)sub_1416E8600;
    sub_1416DAFA0(&v90, &unk_141A51A48, &v102);
    v108 = v90.m256i_i64[1];
    sub_1416B18A0((unsigned int)&v85, v38, v12, v90.m256i_i32[2], v90.m256i_i64[2]);
    if ( v90.m256i_i64[0] )
      sub_140001660(v108, v90.m256i_i64[0], 1);
    v108 = v85.m256i_i64[0];
    v43 = v85.m256i_i64[2];
    v107 = v85.m256i_i64[1];
    sub_1416C49D0(&v102, v85.m256i_i64[1], v85.m256i_i64[2]);
    if ( (_DWORD)v102 != 2 )
    {
      if ( v108 )
        sub_140001660(v107, v108, 1);
      goto LABEL_45;
    }
    if ( (BYTE8(v102) & 3u) - 2 >= 2 && (BYTE8(v102) & 3) != 0 )
    {
      --*((_QWORD *)&v102 + 1);
      LOBYTE(v102) = 3;
      sub_1416EBAD0((char *)&v102 + 8);
    }
    if ( v108 != -1 )
      break;
LABEL_45:
    v42 = v41++ < 0x63u;
    if ( !v42 )
    {
      v85.m256i_i64[0] = (__int64)&v93;
      v85.m256i_i64[1] = (__int64)sub_140191200;
      sub_1416DAFA0((char *)&v102 + 8, &unk_141A5197B, &v85);
LABEL_61:
      v19 = *((_QWORD *)&v102 + 1);
      v11 = _mm_loadu_si128(&v103);
      v12 = v104.m512i_i64[0];
      v79 = *(__m128i *)&v104.m512i_u64[1];
      v80 = *(_OWORD *)&v104.m512i_u64[3];
      v81 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
      v82 = v104.m512i_i64[7];
      v10 = 10;
      goto LABEL_18;
    }
  }
  v53 = v98;
  v54 = sub_1407C8880(v107, v43, v100, v98);
  v56 = v55;
  if ( (v54 & 1) != 0 || (v56 = sub_1407B92D0(v55)) != 0 )
  {
    sub_140866540(&v102, &v93, v56);
    goto LABEL_79;
  }
  sub_1416CC450(&v85, v107, v43);
  v101 = v85.m256i_i64[0];
  if ( v85.m256i_i64[0] == -1 )
  {
    sub_140866600(&v102, &v93, v85.m256i_i64[1]);
LABEL_79:
    v19 = *((_QWORD *)&v102 + 1);
    v10 = v102;
    v11 = v103;
    v12 = v104.m512i_i64[0];
    v79 = *(__m128i *)&v104.m512i_u64[1];
    v80 = *(_OWORD *)&v104.m512i_u64[3];
    v81 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
    v82 = v104.m512i_i64[7];
    v21 = v106;
    v57 = v108;
    goto LABEL_80;
  }
  v95 = v85.m256i_i64[1];
  if ( v85.m256i_i64[2] == v53 && !(unsigned int)sub_141923B40(v85.m256i_i64[1], v100, v53) )
  {
    sub_1416CC450(&v85, v99, v8);
    v97 = v85.m256i_i64[0];
    if ( v85.m256i_i64[0] == -1 )
    {
      sub_1408666C0(&v102, &v93, v85.m256i_i64[1]);
      v19 = *((_QWORD *)&v102 + 1);
      v10 = v102;
      v11 = v103;
      v12 = v104.m512i_i64[0];
      v79 = *(__m128i *)&v104.m512i_u64[1];
      v80 = *(_OWORD *)&v104.m512i_u64[3];
      v81 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
      v82 = v104.m512i_i64[7];
      goto LABEL_107;
    }
    v78 = v85.m256i_i64[1];
    if ( v85.m256i_i64[2] == v98 && !(unsigned int)sub_141923B40(v78, v100, v98) )
    {
      v65 = sub_1416C4110(v99, v8);
      if ( !v65 )
      {
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v76 = v99;
          v77 = v8;
          v90.m256i_i64[0] = v107;
          v90.m256i_i64[1] = v43;
          v85.m256i_i64[0] = (__int64)&v76;
          v85.m256i_i64[1] = (__int64)sub_1416CE600;
          v85.m256i_i64[2] = (__int64)&v90;
          v85.m256i_i64[3] = (__int64)sub_1416CE600;
          *(_QWORD *)&v102 = aCodexmateLibCo_33;
          *((_QWORD *)&v102 + 1) = 43;
          v103.m128i_i64[0] = (__int64)aCodexmateLibCo_33;
          v103.m128i_i64[1] = 43;
          v104.m512i_i64[0] = (__int64)&off_141A51380;
          sub_140AF72B0(&unk_141A51314, &v85, 2, &v102);
        }
        sub_1416DA570(&v85);
        v22 = v85.m256i_i64[2];
        v75 = v85.m256i_i64[1];
        sub_1401E7560((unsigned int)&v102, v85.m256i_i32[4], 0, 1, 1);
        v19 = *((_QWORD *)&v102 + 1);
        if ( (_BYTE)v102 )
          sub_14196B2DB(*((_QWORD *)&v102 + 1), v103.m128i_i64[0]);
        v98 = v103.m128i_i64[0];
        if ( v22 )
          sub_1419234B0(v98, v75, v22);
        if ( v97 )
          sub_140001660(v78, v97, 1);
        if ( v101 )
          sub_140001660(v95, v101, 1);
        if ( v108 )
          sub_140001660(v107, v108, 1);
        if ( v106 )
          sub_140001660(v100, v106, 1);
        if ( v85.m256i_i64[0] > 0 )
          sub_140001660(v75, v85.m256i_i64[0], 1);
        goto LABEL_27;
      }
      sub_140866780(&v102, &v93, v65);
      v19 = *((_QWORD *)&v102 + 1);
      v10 = v102;
      v11 = v103;
      v12 = v104.m512i_i64[0];
      v79 = *(__m128i *)&v104.m512i_u64[1];
      v80 = *(_OWORD *)&v104.m512i_u64[3];
      v81 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
      v82 = v104.m512i_i64[7];
      if ( !v97 )
        goto LABEL_107;
    }
    else
    {
      *(_QWORD *)&v102 = &v93;
      *((_QWORD *)&v102 + 1) = sub_140191200;
      sub_1416DAFA0(&v67, &unk_141A513C3, &v102);
      v19 = v67;
      v10 = 10;
      v11 = v68;
      if ( !v97 )
        goto LABEL_107;
    }
    sub_140001660(v78, v97, 1);
    goto LABEL_107;
  }
  *(_QWORD *)&v102 = &v93;
  *((_QWORD *)&v102 + 1) = sub_140191200;
  sub_1416DAFA0(&v69, &unk_141A513F7, &v102);
  v19 = v69;
  v10 = 10;
  v11 = v70;
LABEL_107:
  v21 = v106;
  v57 = v108;
  if ( v101 )
  {
    v64 = v108;
    sub_140001660(v95, v101, 1);
    v57 = v64;
  }
LABEL_80:
  if ( v57 )
    sub_140001660(v107, v57, 1);
LABEL_22:
  if ( v21 )
    sub_140001660(v100, v21, 1);
  if ( v10 != -1 )
  {
    v9 = v19;
LABEL_5:
    *(_QWORD *)(a1 + 88) = v82;
    v13 = v79;
    v14 = v80;
    *(__m128i *)(a1 + 72) = v81;
    *(_OWORD *)(a1 + 56) = v14;
    *(__m128i *)(a1 + 40) = v13;
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v9;
    *(__m128i *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 32) = v12;
    v15 = v72;
    if ( !v72 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v98 = v11.m128i_i64[0];
  v22 = _mm_shuffle_epi32(v11, 238).m128i_u64[0];
LABEL_27:
  LODWORD(v7) = v96;
  if ( v19 != -1 )
  {
    v108 = v19;
    v23 = v84;
    if ( v84 == (_QWORD)v83 )
      sub_141939F90(&v83);
    v24 = *((_QWORD *)&v83 + 1);
    v25 = 3 * v23;
    *(_QWORD *)(*((_QWORD *)&v83 + 1) + 8 * v25) = v108;
    *(_QWORD *)(v24 + 8 * v25 + 8) = v98;
    *(_QWORD *)(v24 + 8 * v25 + 16) = v22;
    v84 = v23 + 1;
  }
LABEL_31:
  if ( v72 )
    sub_140001660(v99, v72, 1);
  sub_1416B18A0((unsigned int)&v79, v7, v105, (unsigned int)aCodexRouterTop, 34);
  v26 = v80;
  v93 = aCodexRouterTop;
  v94 = 34;
  v99 = v79.m128i_i64[1];
  sub_1408CCD30((__int64)&v102, v79.m128i_i64[1], v80, (__int64)aCodexRouterTop, 34);
  v27 = *((_QWORD *)&v102 + 1);
  v28 = v102;
  v29 = _mm_loadu_si128(&v103);
  if ( (_QWORD)v102 != -1 )
  {
    v30 = v104.m512i_i64[0];
    v85 = *(__m256i *)&v104.m512i_u64[1];
    v86 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
    *(_QWORD *)&v87 = v104.m512i_i64[7];
    goto LABEL_35;
  }
  if ( *((_QWORD *)&v102 + 1) == -1 )
  {
    v33 = -1;
    goto LABEL_90;
  }
  v107 = *((_QWORD *)&v102 + 1);
  v106 = v29.m128i_i64[0];
  v100 = _mm_shuffle_epi32(v29, 238).m128i_u64[0];
  sub_14084E950(&v102);
  v33 = *((_QWORD *)&v102 + 1);
  v28 = v102;
  v29 = _mm_loadu_si128(&v103);
  v30 = v104.m512i_i64[0];
  if ( (_QWORD)v102 != -1 )
  {
    *(_QWORD *)&v87 = v104.m512i_i64[7];
    v34 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[1]);
    v86 = *(__m128i *)&v104.m512i_u64[5];
    *(_OWORD *)&v85.m256i_u64[2] = *(_OWORD *)&v104.m512i_u64[3];
    *(__m128i *)v85.m256i_i8 = v34;
    goto LABEL_85;
  }
  v90.m256i_i64[0] = *((_QWORD *)&v102 + 1);
  *(__m128i *)&v90.m256i_u64[1] = v29;
  v90.m256i_i64[3] = v104.m512i_i64[0];
  if ( *((_QWORD *)&v102 + 1) != -1 )
  {
    sub_1402346F0(&v90);
    if ( v33 )
      sub_140001660(v29.m128i_i64[0], 24 * v33, 8);
    v28 = -1;
    v33 = -1;
    goto LABEL_85;
  }
  v47 = sub_1416B19D0(v99, v26);
  if ( !v47 )
  {
    v90.m256i_i64[0] = (__int64)&v93;
    v90.m256i_i64[1] = (__int64)sub_140191200;
    sub_1416DAFA0((char *)&v102 + 8, &unk_141A51960, &v90);
LABEL_84:
    v33 = *((_QWORD *)&v102 + 1);
    v29 = _mm_loadu_si128(&v103);
    v30 = v104.m512i_i64[0];
    v85 = *(__m256i *)&v104.m512i_u64[1];
    v86 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
    *(_QWORD *)&v87 = v104.m512i_i64[7];
    v28 = 10;
    goto LABEL_85;
  }
  v48 = v44;
  v90.m256i_i32[0] = sub_1416B2E50(v45, v44, v46);
  v90.m256i_i32[1] = v49;
  sub_1416B2E00(&v102, &v90, 3577643008LL, 27111902);
  v50 = *((unsigned __int64 *)&v102 + 1) * (unsigned __int128)0x3E8uLL + v103.m128i_u32[0] / 0xF4240uLL;
  v51 = 0;
  if ( (_BYTE)v102 )
    v50 = 0u;
  v71 = v50;
  while ( 2 )
  {
    LOBYTE(v76) = v51;
    *(_QWORD *)&v102 = &v93;
    *((_QWORD *)&v102 + 1) = sub_140191200;
    v103.m128i_i64[0] = (__int64)&v71;
    v103.m128i_i64[1] = (__int64)sub_1416E85A0;
    v104.m512i_i64[0] = (__int64)&v76;
    v104.m512i_i64[1] = (__int64)sub_1416E8600;
    sub_1416DAFA0(&v72, &unk_141A51A48, &v102);
    v105 = v73;
    sub_1416B18A0((unsigned int)&v90, v47, v48, v73, v74);
    if ( v72 )
      sub_140001660(v105, v72, 1);
    v105 = v90.m256i_i64[0];
    v52 = v90.m256i_i64[2];
    v108 = v90.m256i_i64[1];
    sub_1416C49D0(&v102, v90.m256i_i64[1], v90.m256i_i64[2]);
    if ( (_DWORD)v102 != 2 )
    {
      if ( v105 )
        sub_140001660(v108, v105, 1);
LABEL_67:
      v42 = v51++ < 0x63u;
      if ( !v42 )
      {
        v90.m256i_i64[0] = (__int64)&v93;
        v90.m256i_i64[1] = (__int64)sub_140191200;
        sub_1416DAFA0((char *)&v102 + 8, &unk_141A5197B, &v90);
        goto LABEL_84;
      }
      continue;
    }
    break;
  }
  if ( (BYTE8(v102) & 3u) - 2 >= 2 && (BYTE8(v102) & 3) != 0 )
  {
    --*((_QWORD *)&v102 + 1);
    LOBYTE(v102) = 3;
    sub_1416EBAD0((char *)&v102 + 8);
  }
  if ( v105 == -1 )
    goto LABEL_67;
  v30 = v100;
  v61 = sub_1407C8880(v108, v52, v106, v100);
  v63 = v62;
  if ( (v61 & 1) != 0 || (v63 = sub_1407B92D0(v62)) != 0 )
  {
    sub_140866540(&v102, &v93, v63);
    goto LABEL_100;
  }
  sub_1416CC450(&v90, v108, v52);
  v96 = v90.m256i_i64[0];
  if ( v90.m256i_i64[0] == -1 )
  {
    sub_140866600(&v102, &v93, v90.m256i_i64[1]);
LABEL_100:
    v33 = *((_QWORD *)&v102 + 1);
    v28 = v102;
    v29 = v103;
    v30 = v104.m512i_i64[0];
    v85 = *(__m256i *)&v104.m512i_u64[1];
    v86 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
    *(_QWORD *)&v87 = v104.m512i_i64[7];
    goto LABEL_101;
  }
  v98 = v90.m256i_i64[1];
  if ( v90.m256i_i64[2] == v30 && !(unsigned int)sub_141923B40(v90.m256i_i64[1], v106, v30) )
  {
    sub_1416CC450(&v90, v99, v26);
    v101 = v90.m256i_i64[0];
    if ( v90.m256i_i64[0] == -1 )
    {
      sub_1408666C0(&v102, &v93, v90.m256i_i64[1]);
      v33 = *((_QWORD *)&v102 + 1);
      v28 = v102;
      v29 = v103;
      v30 = v104.m512i_i64[0];
      v85 = *(__m256i *)&v104.m512i_u64[1];
      v86 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
      *(_QWORD *)&v87 = v104.m512i_i64[7];
      goto LABEL_114;
    }
    v95 = v90.m256i_i64[1];
    if ( v90.m256i_i64[2] == v100 && !(unsigned int)sub_141923B40(v95, v106, v100) )
    {
      v66 = sub_1416C4110(v99, v26);
      if ( !v66 )
      {
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v76 = v99;
          v77 = v26;
          v72 = v108;
          v73 = v52;
          v90.m256i_i64[0] = (__int64)&v76;
          v90.m256i_i64[1] = (__int64)sub_1416CE600;
          v90.m256i_i64[2] = (__int64)&v72;
          v90.m256i_i64[3] = (__int64)sub_1416CE600;
          *(_QWORD *)&v102 = aCodexmateLibCo_33;
          *((_QWORD *)&v102 + 1) = 43;
          v103.m128i_i64[0] = (__int64)aCodexmateLibCo_33;
          v103.m128i_i64[1] = 43;
          v104.m512i_i64[0] = (__int64)&off_141A51380;
          sub_140AF72B0(&unk_141A51314, &v90, 2, &v102);
        }
        sub_1416DA570(&v90);
        v26 = v90.m256i_i64[2];
        v97 = v90.m256i_i64[1];
        sub_1401E7560((unsigned int)&v102, v90.m256i_i32[4], 0, 1, 1);
        v33 = *((_QWORD *)&v102 + 1);
        if ( (_BYTE)v102 )
          sub_14196B2DB(*((_QWORD *)&v102 + 1), v103.m128i_i64[0]);
        v100 = v103.m128i_i64[0];
        if ( v26 )
          sub_1419234B0(v100, v97, v26);
        if ( v101 )
          sub_140001660(v95, v101, 1);
        if ( v96 )
          sub_140001660(v98, v96, 1);
        if ( v105 )
          sub_140001660(v108, v105, 1);
        if ( v107 )
          sub_140001660(v106, v107, 1);
        if ( v90.m256i_i64[0] > 0 )
          sub_140001660(v97, v90.m256i_i64[0], 1);
        goto LABEL_90;
      }
      sub_140866780(&v102, &v93, v66);
      v33 = *((_QWORD *)&v102 + 1);
      v28 = v102;
      v29 = v103;
      v30 = v104.m512i_i64[0];
      v85 = *(__m256i *)&v104.m512i_u64[1];
      v86 = _mm_loadu_si128((const __m128i *)&v104.m512i_u64[5]);
      *(_QWORD *)&v87 = v104.m512i_i64[7];
      if ( !v101 )
        goto LABEL_114;
    }
    else
    {
      *(_QWORD *)&v102 = &v93;
      *((_QWORD *)&v102 + 1) = sub_140191200;
      sub_1416DAFA0(&v67, &unk_141A513C3, &v102);
      v33 = v67;
      v28 = 10;
      v29 = v68;
      if ( !v101 )
        goto LABEL_114;
    }
    sub_140001660(v95, v101, 1);
    goto LABEL_114;
  }
  *(_QWORD *)&v102 = &v93;
  *((_QWORD *)&v102 + 1) = sub_140191200;
  sub_1416DAFA0(&v69, &unk_141A513F7, &v102);
  v33 = v69;
  v28 = 10;
  v29 = v70;
LABEL_114:
  if ( v96 )
    sub_140001660(v98, v96, 1);
LABEL_101:
  if ( v105 )
    sub_140001660(v108, v105, 1);
LABEL_85:
  if ( v107 )
    sub_140001660(v106, v107, 1);
  if ( v28 != -1 )
  {
    v27 = v33;
LABEL_35:
    *(_QWORD *)(a1 + 88) = v87;
    v31 = *(_OWORD *)v85.m256i_i8;
    v32 = *(_OWORD *)&v85.m256i_u64[2];
    *(__m128i *)(a1 + 72) = v86;
    *(_OWORD *)(a1 + 56) = v32;
    *(_OWORD *)(a1 + 40) = v31;
    *(_QWORD *)a1 = v28;
    *(_QWORD *)(a1 + 8) = v27;
    *(__m128i *)(a1 + 16) = v29;
    *(_QWORD *)(a1 + 32) = v30;
    v15 = v79.m128i_i64[0];
    if ( !v79.m128i_i64[0] )
    {
LABEL_7:
      v16 = v84;
      if ( v84 )
      {
        v17 = (_QWORD *)(*((_QWORD *)&v83 + 1) + 8LL);
        do
        {
          v18 = *(v17 - 1);
          if ( v18 )
            sub_140001660(*v17, v18, 1);
          v17 += 3;
          --v16;
        }
        while ( v16 );
      }
      if ( (_QWORD)v83 )
        sub_140001660(*((_QWORD *)&v83 + 1), 24 * v83, 8);
      return;
    }
LABEL_6:
    sub_140001660(v99, v15, 1);
    goto LABEL_7;
  }
  v100 = v29.m128i_i64[0];
  v26 = _mm_shuffle_epi32(v29, 238).m128i_u64[0];
LABEL_90:
  if ( v33 != -1 )
  {
    v105 = v33;
    v58 = v84;
    if ( v84 == (_QWORD)v83 )
      sub_141939F90(&v83);
    v59 = *((_QWORD *)&v83 + 1);
    v60 = 3 * v58;
    *(_QWORD *)(*((_QWORD *)&v83 + 1) + 8 * v60) = v105;
    *(_QWORD *)(v59 + 8 * v60 + 8) = v100;
    *(_QWORD *)(v59 + 8 * v60 + 16) = v26;
    v84 = v58 + 1;
  }
  if ( v79.m128i_i64[0] )
    sub_140001660(v99, v79.m128i_i64[0], 1);
  *(_QWORD *)(a1 + 24) = v84;
  *(_OWORD *)(a1 + 8) = v83;
  *(_QWORD *)a1 = -1;
}
