// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_140A13A40(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 i; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  const __m128i *v14; // rax
  __int8 v15; // bl
  __m128i v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rcx
  void *v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i *v34; // rax
  const __m128i *v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rdx
  __m128i si128; // xmm0
  __m128i *v39; // rax
  const __m128i *v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // rdx
  __m128i v43; // xmm0
  __m128i *v44; // rax
  const __m128i *v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __m128i v48; // xmm0
  __m128i *v49; // rax
  const __m128i *v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rdx
  __m128i v53; // xmm0
  __m128i *v54; // rax
  __int64 v55; // rax
  __m128i v56; // xmm0
  __m128i *v57; // rax
  unsigned __int8 *v58; // rax
  int v59; // ecx
  _DWORD *v60; // rcx
  __int64 v61; // rax
  _DWORD *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 *v68; // rbx
  __int64 v69; // rdi
  _DWORD *v70; // rax
  __m128i v71; // xmm0
  _DWORD *v72; // rax
  __int64 v73; // rcx
  __m128i *v74; // rax
  unsigned __int64 v75; // rax
  int v76; // edx
  _DWORD *v77; // rax
  __int64 v78; // rcx
  __m128i *v79; // rax
  __int64 v80; // rcx
  _DWORD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r15
  __int64 v84; // rax
  __int64 v85; // r14
  __m128i v86; // xmm0
  __m128i *v87; // rax
  __m128i v88; // xmm0
  __m128i *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rdi
  __m128i v93; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v94; // [rsp+B8h] [rbp+38h]
  _BYTE v95[23]; // [rsp+C1h] [rbp+41h] BYREF
  __int64 v96; // [rsp+D8h] [rbp+58h]
  __m128i *v97; // [rsp+E0h] [rbp+60h]
  __int64 v98; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v99; // [rsp+F0h] [rbp+70h]
  __int64 v100; // [rsp+F8h] [rbp+78h]
  __m256i v101; // [rsp+100h] [rbp+80h] BYREF
  __int64 v102; // [rsp+128h] [rbp+A8h]
  __int64 v103; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v104; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v105; // [rsp+148h] [rbp+C8h]
  __int64 v106; // [rsp+150h] [rbp+D0h]
  __int64 v107; // [rsp+158h] [rbp+D8h]
  _BYTE v108[24]; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v109; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v110; // [rsp+188h] [rbp+108h]
  __m256i v111; // [rsp+190h] [rbp+110h] BYREF
  char v112; // [rsp+1B7h] [rbp+137h]
  char v113; // [rsp+1B8h] [rbp+138h]
  char v114; // [rsp+1B9h] [rbp+139h]
  char v115; // [rsp+1BAh] [rbp+13Ah]
  char v116; // [rsp+1BBh] [rbp+13Bh]
  char v117; // [rsp+1BCh] [rbp+13Ch]
  char v118; // [rsp+1BDh] [rbp+13Dh]
  char v119; // [rsp+1BEh] [rbp+13Eh]
  char v120; // [rsp+1BFh] [rbp+13Fh]
  __m128i *v121; // [rsp+1C0h] [rbp+140h]
  char v122; // [rsp+1CDh] [rbp+14Dh]
  char v123; // [rsp+1CEh] [rbp+14Eh]
  char v124; // [rsp+1CFh] [rbp+14Fh]
  __m256i v125; // [rsp+1D0h] [rbp+150h] BYREF
  char v126; // [rsp+1FEh] [rbp+17Eh]
  char v127; // [rsp+1FFh] [rbp+17Fh]
  __int64 v128; // [rsp+200h] [rbp+180h]

  v128 = -2; /*0x140a13a5b*/
  v97 = a1; /*0x140a13a6f*/
  v98 = 0; /*0x140a13a73*/
  v99 = 8; /*0x140a13a7b*/
  v100 = 0; /*0x140a13a83*/
  v93.m128i_i64[0] = -1; /*0x140a13a8b*/
  v126 = 1; /*0x140a13a93*/
  v7 = sub_141433D50(aMessages, 8, a2); /*0x140a13aa9*/
  if ( v7 ) /*0x140a13ab2*/
  {
    if ( *(_BYTE *)v7 == 4 ) /*0x140a13ab7*/
    {
      v8 = *(_QWORD *)(v7 + 16); /*0x140a13ab9*/
      for ( i = v8 + 32LL * *(_QWORD *)(v7 + 24); v8 != i; v8 += 32 ) /*0x140a13ad3*/
      {
        v126 = 1; /*0x140a13ae0*/
        sub_140A239B0(v8, &v98, &v93); /*0x140a13af0*/
      }
    }
  }
  v126 = 1; /*0x140a13aff*/
  v10 = sub_141433D50(aModel_6, 5, a2); /*0x140a13b15*/
  if ( v10 && *(_BYTE *)v10 == 3 ) /*0x140a13b23*/
  {
    a4 = *(_QWORD *)(v10 + 24); /*0x140a13b25*/
    a3 = *(_QWORD *)(v10 + 16); /*0x140a13b29*/
  }
  if ( a4 < 0 ) /*0x140a13b30*/
  {
    v12 = 0; /*0x140a13b32*/
    goto LABEL_10; /*0x140a13b32*/
  }
  v106 = a4; /*0x140a13b4d*/
  if ( a4 ) /*0x140a13b54*/
  {
    nullsub_1(v11); /*0x140a13b56*/
    v12 = 1; /*0x140a13b5b*/
    v13 = sub_140001650(a4, 1); /*0x140a13b69*/
    if ( !v13 ) /*0x140a13b71*/
    {
LABEL_10:
      v126 = 1; /*0x140a13b35*/
      sub_1416C2D4B(v12, a4); /*0x140a13b42*/
    }
    v107 = v13; /*0x140a13b73*/
    sub_141684120(v13, a3, a4); /*0x140a13b83*/
  }
  else
  {
    v107 = 1; /*0x140a13b8f*/
  }
  v127 = 1; /*0x140a13b96*/
  v14 = (const __m128i *)sub_141433D50("max_tokensstreamdoubaoreasoning_effortnone", 10, a2); /*0x140a13bac*/
  if ( v14 || (v127 = 1, (v14 = (const __m128i *)sub_141433D50(aMaxCompletionT, 21, a2)) != nullptr) ) /*0x140a13bd6*/
  {
    v15 = v14->m128i_i8[0]; /*0x140a13bdc*/
    switch ( v14->m128i_i8[0] ) /*0x140a13bf0*/
    {
      case 0: /*0x140a13bf0*/
        goto LABEL_28;
      case 1: /*0x140a13bf0*/
      case 2: /*0x140a13bf0*/
        v16 = _mm_loadu_si128(v14 + 1); /*0x140a13bf5*/
        *(__m128i *)v125.m256i_i8 = *v14; /*0x140a13bfa*/
        *(__m128i *)&v125.m256i_u64[2] = v16; /*0x140a13c01*/
        v15 = v125.m256i_i8[0]; /*0x140a13c09*/
        *(__m128i *)((char *)&v111.m256i_u64[1] + 7) = v16; /*0x140a13c10*/
        *(__m128i *)v111.m256i_i8 = _mm_loadu_si128((const __m128i *)&v125.m256i_i8[1]); /*0x140a13c20*/
        v125.m256i_i8[0] = 2; /*0x140a13c28*/
        v125.m256i_i64[1] = 0; /*0x140a13c2f*/
        v125.m256i_i64[2] = 1024; /*0x140a13c3a*/
        if ( v15 == -1 ) /*0x140a13c48*/
          goto LABEL_26; /*0x140a13c48*/
        goto LABEL_29; /*0x140a13c48*/
      case 3: /*0x140a13bf0*/
        v127 = 1; /*0x140a13c5e*/
        sub_14149C500(&v125.m256i_u64[1], &v14->m128i_u64[1]); /*0x140a13c68*/
        goto LABEL_28; /*0x140a13c6e*/
      case 4: /*0x140a13bf0*/
        v19 = v14[1].m128i_i64[0]; /*0x140a13caf*/
        v20 = v14[1].m128i_i64[1]; /*0x140a13cb3*/
        v127 = 1; /*0x140a13cb7*/
        sub_1402CE260(&v125.m256i_u64[1], v19, v20); /*0x140a13cbe*/
        goto LABEL_28; /*0x140a13cc4*/
      case 5: /*0x140a13bf0*/
        if ( v14[1].m128i_i64[1] ) /*0x140a13c73*/
        {
          v17 = v14->m128i_i64[1]; /*0x140a13c7e*/
          if ( !v17 ) /*0x140a13c85*/
          {
            v127 = 1; /*0x140a14f0b*/
            sub_1416C3040(&off_141747358); /*0x140a14f19*/
          }
          v18 = v14[1].m128i_i64[0]; /*0x140a13c92*/
          v127 = 1; /*0x140a13c96*/
          sub_1402CCD80(&v125.m256i_u64[1], v17, v18); /*0x140a13c9d*/
        }
        else
        {
          v125.m256i_i64[1] = 0; /*0x140a13d4b*/
          v125.m256i_i64[3] = 0; /*0x140a13d56*/
        }
LABEL_28:
        *(__int64 *)((char *)&v111.m256i_i64[2] + 7) = v125.m256i_i64[3]; /*0x140a13d61*/
        v111.m256i_i32[0] = *(__int32 *)((char *)v125.m256i_i32 + 1); /*0x140a13da0*/
        v111.m256i_i16[2] = *(__int16 *)((char *)&v125.m256i_i16[2] + 1); /*0x140a13da6*/
        v111.m256i_i8[6] = v125.m256i_i8[7]; /*0x140a13dad*/
        *(_OWORD *)((char *)&v111.m256i_u32[1] + 3) = *(_OWORD *)&v125.m256i_u64[1]; /*0x140a13db3*/
        v111.m256i_i8[15] = v125.m256i_i8[16]; /*0x140a13dba*/
        v125.m256i_i8[0] = 2; /*0x140a13dc1*/
        v125.m256i_i64[1] = 0; /*0x140a13dc8*/
        v125.m256i_i64[2] = 1024; /*0x140a13dd3*/
LABEL_29:
        v101.m256i_i8[0] = v15; /*0x140a13dde*/
        *(__int32 *)((char *)v101.m256i_i32 + 1) = v111.m256i_i32[0]; /*0x140a13dea*/
        *(__int16 *)((char *)&v101.m256i_i16[2] + 1) = v111.m256i_i16[2]; /*0x140a13df7*/
        v101.m256i_i8[7] = v111.m256i_i8[6]; /*0x140a13e05*/
        v101.m256i_i64[1] = *(__int64 *)((char *)v111.m256i_i64 + 7); /*0x140a13e12*/
        v101.m256i_i8[16] = v111.m256i_i8[15]; /*0x140a13e20*/
        *(__m128i *)&v101.m256i_u64[2] = _mm_loadu_si128((const __m128i *)((char *)&v111.m256i_u64[1] + 7)); /*0x140a13e2e*/
        v127 = 1; /*0x140a13e36*/
        sub_1400104F0(&v125); /*0x140a13e44*/
        break; /*0x140a13e44*/
    }
  }
  else
  {
    v125.m256i_i8[0] = 2; /*0x140a13cc9*/
    v125.m256i_i64[1] = 0; /*0x140a13cd0*/
    v125.m256i_i64[2] = 1024; /*0x140a13cdb*/
LABEL_26:
    v21 = *(unsigned int *)((char *)v125.m256i_u32 + 1); /*0x140a13ce6*/
    v101 = v125; /*0x140a13d17*/
  }
  v109.m128i_i64[0] = 0; /*0x140a13e4a*/
  v110 = 0; /*0x140a13e55*/
  nullsub_1(v21); /*0x140a13e60*/
  v22 = 1; /*0x140a13e65*/
  v23 = sub_140001650(5, 1); /*0x140a13e74*/
  if ( !v23 ) /*0x140a13e7c*/
    sub_1416C2D4B(1, 5); /*0x140a14fb5*/
  *(_BYTE *)(v23 + 4) = 108; /*0x140a13e82*/
  *(_DWORD *)v23 = 1701080941; /*0x140a13e86*/
  v103 = 5; /*0x140a13e8c*/
  v104.m128i_i64[0] = v23; /*0x140a13e97*/
  v104.m128i_i64[1] = 5; /*0x140a13e9e*/
  v25 = v106; /*0x140a13ea9*/
  if ( v106 ) /*0x140a13eb3*/
  {
    nullsub_1(v24); /*0x140a13eb5*/
    v26 = sub_140001650(v25, 1); /*0x140a13ec2*/
    if ( !v26 ) /*0x140a13eca*/
    {
      v120 = 1; /*0x140a14fea*/
      sub_1416C2D4B(1, v25); /*0x140a14ff9*/
    }
    v22 = v26; /*0x140a13ed0*/
    sub_141684120(v26, v107, v25); /*0x140a13ee0*/
  }
  v125.m256i_i8[0] = 3; /*0x140a13ee5*/
  v125.m256i_i64[1] = v25; /*0x140a13eec*/
  v125.m256i_i64[2] = v22; /*0x140a13ef3*/
  v125.m256i_i64[3] = v25; /*0x140a13efa*/
  v120 = 0; /*0x140a13f01*/
  sub_140307860(&v111, &v109, &v103, &v125); /*0x140a13f24*/
  if ( v111.m256i_i8[0] != -1 ) /*0x140a13f31*/
    sub_1400104F0(&v111); /*0x140a13f3a*/
  nullsub_1(v27); /*0x140a13f40*/
  v28 = (_QWORD *)sub_140001650(8, 1); /*0x140a13f4f*/
  if ( !v28 ) /*0x140a13f57*/
    sub_1416C2D4B(1, 8); /*0x140a14fca*/
  *v28 = 0x736567617373656DLL; /*0x140a13f67*/
  v103 = 8; /*0x140a13f6a*/
  v104.m128i_i64[0] = (__int64)v28; /*0x140a13f75*/
  v104.m128i_i64[1] = 8; /*0x140a13f7c*/
  v124 = 1; /*0x140a13f87*/
  sub_140467C90(&v125, &v98); /*0x140a13f99*/
  if ( v125.m256i_i8[0] == -1 ) /*0x140a13fa6*/
  {
    v111.m256i_i64[0] = v125.m256i_i64[1]; /*0x140a14e94*/
    sub_1416C3060( /*0x140a14ec1*/
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v111,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A8338);
  }
  v29 = _mm_loadu_si128((const __m128i *)&v125); /*0x140a13fac*/
  *(__m128i *)&v111.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a13fbc*/
  *(__m128i *)v111.m256i_i8 = v29; /*0x140a13fc4*/
  v124 = 0; /*0x140a13fcc*/
  sub_140307860(&v125, &v109, &v103, &v111); /*0x140a13fef*/
  if ( v125.m256i_i8[0] != -1 ) /*0x140a13ffc*/
    sub_1400104F0(&v125); /*0x140a14005*/
  nullsub_1(v30); /*0x140a1400b*/
  v31 = (void *)sub_140001650(10, 1); /*0x140a1401a*/
  if ( !v31 ) /*0x140a14022*/
    sub_1416C2D4B(1, 10); /*0x140a14fdf*/
  qmemcpy(v31, "max_tokens", 10); /*0x140a14032*/
  v103 = 10; /*0x140a1403b*/
  v104.m128i_i64[0] = (__int64)v31; /*0x140a14046*/
  v104.m128i_i64[1] = 10; /*0x140a1404d*/
  v123 = 1; /*0x140a14058*/
  sub_140B842D0(&v125, &v101); /*0x140a1406d*/
  if ( v125.m256i_i8[0] == -1 ) /*0x140a1407a*/
  {
    v111.m256i_i64[0] = v125.m256i_i64[1]; /*0x140a14ed3*/
    sub_1416C3060( /*0x140a14f00*/
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v111,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A8338);
  }
  v32 = _mm_loadu_si128((const __m128i *)&v125); /*0x140a14080*/
  *(__m128i *)&v111.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a14090*/
  *(__m128i *)v111.m256i_i8 = v32; /*0x140a14098*/
  v123 = 0; /*0x140a140a0*/
  sub_140307860(&v125, &v109, &v103, &v111); /*0x140a140c3*/
  if ( v125.m256i_i8[0] != -1 ) /*0x140a140d0*/
    sub_1400104F0(&v125); /*0x140a140d9*/
  v104 = _mm_loadu_si128(&v109); /*0x140a140e7*/
  v105 = v110; /*0x140a140f6*/
  LOBYTE(v103) = 5; /*0x140a140fd*/
  LOBYTE(v102) = v93.m128i_i64[0] == -1; /*0x140a14109*/
  if ( v93.m128i_i64[0] != -1 ) /*0x140a14110*/
  {
    v125.m256i_i64[3] = v94; /*0x140a14116*/
    *(__m128i *)&v125.m256i_u64[1] = _mm_loadu_si128(&v93); /*0x140a14122*/
    v125.m256i_i8[0] = 3; /*0x140a1412a*/
    v119 = 1; /*0x140a14131*/
    v121 = (__m128i *)sub_141433E50(aSystem_0, 6, &v103); /*0x140a14151*/
    sub_1400104F0(v121); /*0x140a1415b*/
    v33 = _mm_loadu_si128((const __m128i *)&v125); /*0x140a14161*/
    v34 = v121; /*0x140a14171*/
    v121[1] = _mm_loadu_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a14178*/
    *v34 = v33; /*0x140a1417d*/
  }
  v35 = (const __m128i *)sub_141433D50("streamdoubaoreasoning_effortnone", 6, a2); /*0x140a14190*/
  if ( v35 ) /*0x140a14199*/
  {
    switch ( v35->m128i_i8[0] ) /*0x140a141b0*/
    {
      case 0: /*0x140a141b0*/
        v125.m256i_i8[0] = 0; /*0x140a141ee*/
        break; /*0x140a141f5*/
      case 1: /*0x140a141b0*/
      case 2: /*0x140a141b0*/
        v36 = _mm_loadu_si128(v35); /*0x140a141b2*/
        *(__m128i *)&v125.m256i_u64[2] = _mm_loadu_si128(v35 + 1); /*0x140a141bb*/
        *(__m128i *)v125.m256i_i8 = v36; /*0x140a141c3*/
        break; /*0x140a141cb*/
      case 3: /*0x140a141b0*/
        sub_14149C500(&v125.m256i_u64[1], &v35->m128i_u64[1]); /*0x140a14205*/
        v125.m256i_i8[0] = 3; /*0x140a1420b*/
        break; /*0x140a14212*/
      case 4: /*0x140a141b0*/
        sub_1402CE260(&v125.m256i_u64[1], v35[1].m128i_i64[0], v35[1].m128i_i64[1]); /*0x140a141df*/
        v125.m256i_i8[0] = 4; /*0x140a141e5*/
        break; /*0x140a141ec*/
      case 5: /*0x140a141b0*/
        if ( v35[1].m128i_i64[1] ) /*0x140a14214*/
        {
          v37 = v35->m128i_i64[1]; /*0x140a1421b*/
          if ( !v37 ) /*0x140a14222*/
            sub_1416C3040(&off_141747358); /*0x140a14f2b*/
          sub_1402CCD80(&v125.m256i_u64[1], v37, v35[1].m128i_i64[0]); /*0x140a14233*/
        }
        else
        {
          v125.m256i_i64[1] = 0; /*0x140a1423b*/
          v125.m256i_i64[3] = 0; /*0x140a14246*/
        }
        v125.m256i_i8[0] = 5; /*0x140a14251*/
        break; /*0x140a14251*/
    }
    v118 = 1; /*0x140a14258*/
    v121 = (__m128i *)sub_141433E50("streamdoubaoreasoning_effortnone", 6, &v103); /*0x140a14278*/
    sub_1400104F0(v121); /*0x140a14282*/
    si128 = _mm_load_si128((const __m128i *)&v125); /*0x140a14288*/
    v39 = v121; /*0x140a14298*/
    v121[1] = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a1429f*/
    *v39 = si128; /*0x140a142a4*/
  }
  v40 = (const __m128i *)sub_141433D50("temperaturemax_tokensstreamdoubaoreasoning_effortnone", 11, a2); /*0x140a142b7*/
  if ( v40 ) /*0x140a142c0*/
  {
    switch ( v40->m128i_i8[0] ) /*0x140a142d7*/
    {
      case 0: /*0x140a142d7*/
        v125.m256i_i8[0] = 0; /*0x140a14315*/
        break; /*0x140a1431c*/
      case 1: /*0x140a142d7*/
      case 2: /*0x140a142d7*/
        v41 = _mm_loadu_si128(v40); /*0x140a142d9*/
        *(__m128i *)&v125.m256i_u64[2] = _mm_loadu_si128(v40 + 1); /*0x140a142e2*/
        *(__m128i *)v125.m256i_i8 = v41; /*0x140a142ea*/
        break; /*0x140a142f2*/
      case 3: /*0x140a142d7*/
        sub_14149C500(&v125.m256i_u64[1], &v40->m128i_u64[1]); /*0x140a1432c*/
        v125.m256i_i8[0] = 3; /*0x140a14332*/
        break; /*0x140a14339*/
      case 4: /*0x140a142d7*/
        sub_1402CE260(&v125.m256i_u64[1], v40[1].m128i_i64[0], v40[1].m128i_i64[1]); /*0x140a14306*/
        v125.m256i_i8[0] = 4; /*0x140a1430c*/
        break; /*0x140a14313*/
      case 5: /*0x140a142d7*/
        if ( v40[1].m128i_i64[1] ) /*0x140a1433b*/
        {
          v42 = v40->m128i_i64[1]; /*0x140a14342*/
          if ( !v42 ) /*0x140a14349*/
            sub_1416C3040(&off_141747358); /*0x140a14f3d*/
          sub_1402CCD80(&v125.m256i_u64[1], v42, v40[1].m128i_i64[0]); /*0x140a1435a*/
        }
        else
        {
          v125.m256i_i64[1] = 0; /*0x140a14362*/
          v125.m256i_i64[3] = 0; /*0x140a1436d*/
        }
        v125.m256i_i8[0] = 5; /*0x140a14378*/
        break; /*0x140a14378*/
    }
    v117 = 1; /*0x140a1437f*/
    v121 = (__m128i *)sub_141433E50("temperaturemax_tokensstreamdoubaoreasoning_effortnone", 11, &v103); /*0x140a1439f*/
    sub_1400104F0(v121); /*0x140a143a9*/
    v43 = _mm_load_si128((const __m128i *)&v125); /*0x140a143af*/
    v44 = v121; /*0x140a143bf*/
    v121[1] = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a143c6*/
    *v44 = v43; /*0x140a143cb*/
  }
  v45 = (const __m128i *)sub_141433D50(aTopP, 5, a2); /*0x140a143de*/
  if ( v45 ) /*0x140a143e7*/
  {
    switch ( v45->m128i_i8[0] ) /*0x140a143fe*/
    {
      case 0: /*0x140a143fe*/
        v125.m256i_i8[0] = 0; /*0x140a1443c*/
        break; /*0x140a14443*/
      case 1: /*0x140a143fe*/
      case 2: /*0x140a143fe*/
        v46 = _mm_loadu_si128(v45); /*0x140a14400*/
        *(__m128i *)&v125.m256i_u64[2] = _mm_loadu_si128(v45 + 1); /*0x140a14409*/
        *(__m128i *)v125.m256i_i8 = v46; /*0x140a14411*/
        break; /*0x140a14419*/
      case 3: /*0x140a143fe*/
        sub_14149C500(&v125.m256i_u64[1], &v45->m128i_u64[1]); /*0x140a14453*/
        v125.m256i_i8[0] = 3; /*0x140a14459*/
        break; /*0x140a14460*/
      case 4: /*0x140a143fe*/
        sub_1402CE260(&v125.m256i_u64[1], v45[1].m128i_i64[0], v45[1].m128i_i64[1]); /*0x140a1442d*/
        v125.m256i_i8[0] = 4; /*0x140a14433*/
        break; /*0x140a1443a*/
      case 5: /*0x140a143fe*/
        if ( v45[1].m128i_i64[1] ) /*0x140a14462*/
        {
          v47 = v45->m128i_i64[1]; /*0x140a14469*/
          if ( !v47 ) /*0x140a14470*/
            sub_1416C3040(&off_141747358); /*0x140a14f4f*/
          sub_1402CCD80(&v125.m256i_u64[1], v47, v45[1].m128i_i64[0]); /*0x140a14481*/
        }
        else
        {
          v125.m256i_i64[1] = 0; /*0x140a14489*/
          v125.m256i_i64[3] = 0; /*0x140a14494*/
        }
        v125.m256i_i8[0] = 5; /*0x140a1449f*/
        break; /*0x140a1449f*/
    }
    v116 = 1; /*0x140a144a6*/
    v121 = (__m128i *)sub_141433E50(aTopP, 5, &v103); /*0x140a144c6*/
    sub_1400104F0(v121); /*0x140a144d0*/
    v48 = _mm_load_si128((const __m128i *)&v125); /*0x140a144d6*/
    v49 = v121; /*0x140a144e6*/
    v121[1] = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a144ed*/
    *v49 = v48; /*0x140a144f2*/
  }
  v50 = (const __m128i *)sub_141433D50(aStop, 4, a2); /*0x140a14505*/
  if ( v50 ) /*0x140a1450e*/
  {
    switch ( v50->m128i_i8[0] ) /*0x140a14525*/
    {
      case 0: /*0x140a14525*/
        v125.m256i_i8[0] = 0; /*0x140a14563*/
        break; /*0x140a1456a*/
      case 1: /*0x140a14525*/
      case 2: /*0x140a14525*/
        v51 = _mm_loadu_si128(v50); /*0x140a14527*/
        *(__m128i *)&v125.m256i_u64[2] = _mm_loadu_si128(v50 + 1); /*0x140a14530*/
        *(__m128i *)v125.m256i_i8 = v51; /*0x140a14538*/
        break; /*0x140a14540*/
      case 3: /*0x140a14525*/
        sub_14149C500(&v125.m256i_u64[1], &v50->m128i_u64[1]); /*0x140a1457a*/
        v125.m256i_i8[0] = 3; /*0x140a14580*/
        break; /*0x140a14587*/
      case 4: /*0x140a14525*/
        sub_1402CE260(&v125.m256i_u64[1], v50[1].m128i_i64[0], v50[1].m128i_i64[1]); /*0x140a14554*/
        v125.m256i_i8[0] = 4; /*0x140a1455a*/
        break; /*0x140a14561*/
      case 5: /*0x140a14525*/
        if ( v50[1].m128i_i64[1] ) /*0x140a14589*/
        {
          v52 = v50->m128i_i64[1]; /*0x140a14590*/
          if ( !v52 ) /*0x140a14597*/
            sub_1416C3040(&off_141747358); /*0x140a14f61*/
          sub_1402CCD80(&v125.m256i_u64[1], v52, v50[1].m128i_i64[0]); /*0x140a145a8*/
        }
        else
        {
          v125.m256i_i64[1] = 0; /*0x140a145b0*/
          v125.m256i_i64[3] = 0; /*0x140a145bb*/
        }
        v125.m256i_i8[0] = 5; /*0x140a145c6*/
        break; /*0x140a145c6*/
    }
    v115 = 1; /*0x140a145cd*/
    v121 = (__m128i *)sub_141433E50(aStopSequences, 14, &v103); /*0x140a145ed*/
    sub_1400104F0(v121); /*0x140a145f7*/
    v53 = _mm_load_si128((const __m128i *)&v125); /*0x140a145fd*/
    v54 = v121; /*0x140a1460d*/
    v121[1] = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a14614*/
    *v54 = v53; /*0x140a14619*/
  }
  v55 = sub_141433D50(aTools_1, 5, a2); /*0x140a1462c*/
  if ( v55 && *(_BYTE *)v55 == 4 ) /*0x140a1463e*/
  {
    sub_140315DA0(&v111, *(_QWORD *)(v55 + 16), *(_QWORD *)(v55 + 16) + 32LL * *(_QWORD *)(v55 + 24)); /*0x140a1465a*/
    if ( v111.m256i_i64[2] ) /*0x140a14668*/
    {
      v125.m256i_i64[3] = v111.m256i_i64[2]; /*0x140a14671*/
      *(__m128i *)&v125.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v111); /*0x140a14680*/
      v125.m256i_i8[0] = 4; /*0x140a14688*/
      v114 = 1; /*0x140a1468f*/
      v121 = (__m128i *)sub_141433E50(aTools_1, 5, &v103); /*0x140a146af*/
      sub_1400104F0(v121); /*0x140a146b9*/
      v56 = _mm_loadu_si128((const __m128i *)&v125); /*0x140a146bf*/
      v57 = v121; /*0x140a146cf*/
      v121[1] = _mm_loadu_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a146d6*/
      *v57 = v56; /*0x140a146db*/
    }
    else if ( v111.m256i_i64[0] ) /*0x140a146eb*/
    {
      sub_140001660(v111.m256i_i64[1], 32 * v111.m256i_i64[0], 8); /*0x140a146fe*/
    }
  }
  v58 = (unsigned __int8 *)sub_141433D50(aToolChoice, 11, a2); /*0x140a14713*/
  if ( !v58 ) /*0x140a1471c*/
    goto LABEL_151; /*0x140a1471c*/
  v59 = *v58; /*0x140a14722*/
  if ( v59 == 5 ) /*0x140a14728*/
  {
    v65 = sub_141433D50(aFunction_0, 8, v58); /*0x140a1485d*/
    if ( !v65 ) /*0x140a14866*/
      goto LABEL_151; /*0x140a14866*/
    v66 = sub_141433D50(aName_7, 4, v65); /*0x140a1487b*/
    if ( !v66 || *(_BYTE *)v66 != 3 ) /*0x140a1488d*/
      goto LABEL_151; /*0x140a1488d*/
    v68 = *(__int64 **)(v66 + 16); /*0x140a14893*/
    v69 = *(_QWORD *)(v66 + 24); /*0x140a14897*/
    if ( v69 == 18 ) /*0x140a1489f*/
    {
      if ( _mm_movemask_epi8( /*0x140a14aeb*/
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*((unsigned __int16 *)v68 + 8)), (__m128i)xmmword_1417488D0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v68), (__m128i)xmmword_1417A2D70))) == 0xFFFF )
      {
        v68 = &qword_1417A61E9; /*0x140a14aed*/
        v69 = 10; /*0x140a14af4*/
        goto LABEL_136; /*0x140a14af9*/
      }
    }
    else
    {
      if ( v69 == 10 ) /*0x140a148a9*/
      {
        v67 = *v68 ^ 0x726165735F626577LL | *((unsigned __int16 *)v68 + 4) ^ 0x6863LL; /*0x140a148c7*/
        if ( !v67 ) /*0x140a148d1*/
          v68 = &qword_1417A61E9; /*0x140a148d1*/
        v69 = 10; /*0x140a148d5*/
        goto LABEL_136; /*0x140a148da*/
      }
      if ( (unsigned __int64)v69 <= 0xA ) /*0x140a14afb*/
        goto LABEL_136; /*0x140a14afb*/
    }
    v75 = _byteswap_uint64(*v68); /*0x140a14b00*/
    v67 = 0x7765625F73656172LL; /*0x140a14b03*/
    if ( v75 != 0x7765625F73656172LL /*0x140a14b28*/
      || (v75 = _byteswap_uint64(*(__int64 *)((char *)v68 + 3)),
          v67 = 0x5F7365617263685FLL,
          v76 = 0,
          v75 != 0x5F7365617263685FLL) )
    {
      v76 = 2 * (v67 >= v75) - 1; /*0x140a14b32*/
    }
    if ( !v76 ) /*0x140a14b40*/
    {
      v69 = 10; /*0x140a14b40*/
      v68 = &qword_1417A61E9; /*0x140a14b4b*/
    }
LABEL_136:
    *(_QWORD *)v108 = 0; /*0x140a14b4f*/
    *(_QWORD *)&v108[16] = 0; /*0x140a14b5a*/
    nullsub_1(v67); /*0x140a14b65*/
    v77 = (_DWORD *)sub_140001650(4, 1); /*0x140a14b74*/
    if ( !v77 ) /*0x140a14b7c*/
      sub_1416C2D4B(1, 4); /*0x140a1500e*/
    *v77 = 1701869940; /*0x140a14b82*/
    v109.m128i_i64[0] = 4; /*0x140a14b88*/
    v109.m128i_i64[1] = (__int64)v77; /*0x140a14b93*/
    v110 = 4; /*0x140a14b9a*/
    nullsub_1(v78); /*0x140a14ba5*/
    v79 = (__m128i *)sub_140001650(4, 1); /*0x140a14bb4*/
    v121 = v79; /*0x140a14bbc*/
    if ( !v79 ) /*0x140a14bc3*/
      sub_1416C2D4B(1, 4); /*0x140a15020*/
    v79->m128i_i32[0] = 1819242356; /*0x140a14bc9*/
    v125.m256i_i8[0] = 3; /*0x140a14bcf*/
    v125.m256i_i64[1] = 4; /*0x140a14bd6*/
    v125.m256i_i64[2] = (__int64)v79; /*0x140a14be1*/
    v125.m256i_i64[3] = 4; /*0x140a14be8*/
    sub_140307860(&v111, v108, &v109, &v125); /*0x140a14c0f*/
    if ( v111.m256i_i8[0] != -1 ) /*0x140a14c1c*/
      sub_1400104F0(&v111); /*0x140a14c25*/
    nullsub_1(v80); /*0x140a14c2b*/
    v81 = (_DWORD *)sub_140001650(4, 1); /*0x140a14c3a*/
    if ( !v81 ) /*0x140a14c42*/
      sub_1416C2D4B(1, 4); /*0x140a15032*/
    *v81 = 1701667182; /*0x140a14c48*/
    v109.m128i_i64[0] = 4; /*0x140a14c4e*/
    v109.m128i_i64[1] = (__int64)v81; /*0x140a14c59*/
    v110 = 4; /*0x140a14c60*/
    if ( v69 < 0 ) /*0x140a14c6e*/
    {
      v83 = 0; /*0x140a14c70*/
      goto LABEL_143; /*0x140a14c70*/
    }
    if ( v69 ) /*0x140a14c8b*/
    {
      nullsub_1(v82); /*0x140a14c8d*/
      v83 = 1; /*0x140a14c92*/
      v84 = sub_140001650(v69, 1); /*0x140a14ca0*/
      if ( !v84 ) /*0x140a14ca8*/
      {
LABEL_143:
        v113 = 1; /*0x140a14c73*/
        sub_1416C2D4B(v83, v69); /*0x140a14c80*/
      }
      v85 = v84; /*0x140a14caa*/
      sub_141684120(v84, v68, v69); /*0x140a14cb6*/
    }
    else
    {
      v85 = 1; /*0x140a14cbd*/
    }
    v125.m256i_i8[0] = 3; /*0x140a14cc3*/
    v125.m256i_i64[1] = v69; /*0x140a14cca*/
    v125.m256i_i64[2] = v85; /*0x140a14cd1*/
    v125.m256i_i64[3] = v69; /*0x140a14cd8*/
    v113 = 0; /*0x140a14cdf*/
    sub_140307860(&v111, v108, &v109, &v125); /*0x140a14d02*/
    if ( v111.m256i_i8[0] != -1 ) /*0x140a14d0f*/
LABEL_149:
      sub_1400104F0(&v111); /*0x140a14d11*/
LABEL_150:
    *(_OWORD *)&v95[7] = *(_OWORD *)v108; /*0x140a14d1e*/
    v96 = *(_QWORD *)&v108[16]; /*0x140a14d30*/
    v125.m256i_i8[0] = 5; /*0x140a14d34*/
    *(__m128i *)&v125.m256i_i8[1] = _mm_loadu_si128((const __m128i *)v95); /*0x140a14d48*/
    *(_OWORD *)&v125.m256i_u64[2] = *(_OWORD *)&v108[8]; /*0x140a14d50*/
    v112 = 1; /*0x140a14d5e*/
    v121 = (__m128i *)sub_141433E50(aToolChoice, 11, &v103); /*0x140a14d7e*/
    sub_1400104F0(v121); /*0x140a14d88*/
    v86 = _mm_loadu_si128((const __m128i *)&v125); /*0x140a14d8e*/
    v87 = v121; /*0x140a14d9e*/
    v121[1] = _mm_loadu_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a14da5*/
    *v87 = v86; /*0x140a14daa*/
    goto LABEL_151; /*0x140a14daa*/
  }
  if ( v59 != 3 ) /*0x140a14731*/
    goto LABEL_151; /*0x140a14731*/
  v60 = *((_DWORD **)v58 + 2); /*0x140a14737*/
  v61 = *((_QWORD *)v58 + 3); /*0x140a1473b*/
  if ( v61 == 4 ) /*0x140a14743*/
  {
    if ( *v60 != 1869903201 ) /*0x140a148e5*/
    {
      if ( *v60 != 1701736302 ) /*0x140a148f1*/
        goto LABEL_151; /*0x140a148f1*/
      *(_QWORD *)v108 = 0; /*0x140a148f7*/
      *(_QWORD *)&v108[16] = 0; /*0x140a14902*/
      nullsub_1(v60); /*0x140a1490d*/
      v70 = (_DWORD *)sub_140001650(4, 1); /*0x140a1491c*/
      if ( !v70 ) /*0x140a14924*/
        sub_1416C2D4B(1, 4); /*0x140a1508c*/
      *v70 = 1701869940; /*0x140a1492a*/
      v109.m128i_i64[0] = 4; /*0x140a14930*/
      v109.m128i_i64[1] = (__int64)v70; /*0x140a1493b*/
      v110 = 4; /*0x140a14942*/
      v122 = 1; /*0x140a1494d*/
      sub_140B56640(&v125, &off_1417A3F30); /*0x140a14962*/
      if ( v125.m256i_i8[0] == -1 ) /*0x140a1496f*/
      {
        v111.m256i_i64[0] = v125.m256i_i64[1]; /*0x140a14f73*/
        sub_1416C3060( /*0x140a14fa0*/
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v111,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A82F8);
      }
      v71 = _mm_loadu_si128((const __m128i *)&v125); /*0x140a14975*/
      *(__m128i *)&v111.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v125.m256i_u64[2]); /*0x140a14985*/
      *(__m128i *)v111.m256i_i8 = v71; /*0x140a1498d*/
      v122 = 0; /*0x140a14995*/
      sub_140307860(&v125, v108, &v109, &v111); /*0x140a149b8*/
      if ( v125.m256i_i8[0] != -1 ) /*0x140a149c5*/
        sub_1400104F0(&v125); /*0x140a149d2*/
      goto LABEL_150; /*0x140a149d8*/
    }
    *(_QWORD *)v108 = 0; /*0x140a149dd*/
    *(_QWORD *)&v108[16] = 0; /*0x140a149e8*/
    nullsub_1(v60); /*0x140a149f3*/
    v72 = (_DWORD *)sub_140001650(4, 1); /*0x140a14a02*/
    if ( !v72 ) /*0x140a14a0a*/
      sub_1416C2D4B(1, 4); /*0x140a15056*/
    *v72 = 1701869940; /*0x140a14a10*/
    v109.m128i_i64[0] = 4; /*0x140a14a16*/
    v109.m128i_i64[1] = (__int64)v72; /*0x140a14a21*/
    v110 = 4; /*0x140a14a28*/
    nullsub_1(v73); /*0x140a14a33*/
    v74 = (__m128i *)sub_140001650(4, 1); /*0x140a14a42*/
    v121 = v74; /*0x140a14a4a*/
    if ( !v74 ) /*0x140a14a51*/
      sub_1416C2D4B(1, 4); /*0x140a1507a*/
    v74->m128i_i32[0] = 1869903201; /*0x140a14a57*/
    v125.m256i_i8[0] = 3; /*0x140a14a5d*/
    v125.m256i_i64[1] = 4; /*0x140a14a64*/
    v125.m256i_i64[2] = (__int64)v74; /*0x140a14a6f*/
    v125.m256i_i64[3] = 4; /*0x140a14a76*/
    sub_140307860(&v111, v108, &v109, &v125); /*0x140a14a9d*/
    if ( v111.m256i_i8[0] != -1 ) /*0x140a14aaa*/
      goto LABEL_149; /*0x140a14aaa*/
    goto LABEL_150; /*0x140a14aaa*/
  }
  if ( v61 == 8 && *(_QWORD *)v60 == 0x6465726975716572LL ) /*0x140a14760*/
  {
    *(_QWORD *)v108 = 0; /*0x140a14766*/
    *(_QWORD *)&v108[16] = 0; /*0x140a14771*/
    nullsub_1(v60); /*0x140a1477c*/
    v62 = (_DWORD *)sub_140001650(4, 1); /*0x140a1478b*/
    if ( !v62 ) /*0x140a14793*/
      sub_1416C2D4B(1, 4); /*0x140a15044*/
    *v62 = 1701869940; /*0x140a14799*/
    v109.m128i_i64[0] = 4; /*0x140a1479f*/
    v109.m128i_i64[1] = (__int64)v62; /*0x140a147aa*/
    v110 = 4; /*0x140a147b1*/
    nullsub_1(v63); /*0x140a147bc*/
    v64 = sub_140001650(3, 1); /*0x140a147cb*/
    v121 = (__m128i *)v64; /*0x140a147d3*/
    if ( !v64 ) /*0x140a147da*/
      sub_1416C2D4B(1, 3); /*0x140a15068*/
    *(_BYTE *)(v64 + 2) = 121; /*0x140a147e0*/
    *(_WORD *)v64 = 28257; /*0x140a147e4*/
    v125.m256i_i8[0] = 3; /*0x140a147e9*/
    v125.m256i_i64[1] = 3; /*0x140a147f0*/
    v125.m256i_i64[2] = v64; /*0x140a147fb*/
    v125.m256i_i64[3] = 3; /*0x140a14802*/
    sub_140307860(&v111, v108, &v109, &v125); /*0x140a14829*/
    if ( v111.m256i_i8[0] == -1 ) /*0x140a14836*/
      goto LABEL_150; /*0x140a14836*/
    goto LABEL_149; /*0x140a14836*/
  }
LABEL_151:
  v88 = _mm_loadu_si128((const __m128i *)&v103); /*0x140a14dae*/
  v89 = v97; /*0x140a14dbe*/
  v97[1] = _mm_loadu_si128((const __m128i *)&v104.m128i_u64[1]); /*0x140a14dc2*/
  *v89 = v88; /*0x140a14dc7*/
  v127 = v102; /*0x140a14dd2*/
  sub_1400104F0(&v101); /*0x140a14ddf*/
  if ( v106 ) /*0x140a14def*/
    sub_140001660(v107, v106, 1); /*0x140a14dfe*/
  v90 = v99; /*0x140a14e03*/
  v107 = v100; /*0x140a14e0b*/
  v106 = 0; /*0x140a14e12*/
  v102 = v99; /*0x140a14e1d*/
  while ( v107 != v106 ) /*0x140a14e3e*/
  {
    ++v106; /*0x140a14e43*/
    v91 = v90 + 32; /*0x140a14e4a*/
    sub_1402C3260(); /*0x140a14e4e*/
    v90 = v91; /*0x140a14e54*/
  }
  if ( v98 ) /*0x140a14e60*/
    sub_140001660(v99, 32 * v98, 8); /*0x140a14e70*/
  return v97; /*0x140a14e79*/
}