// __ZN13codexmate_lib4core5relay19codex_project_state31collect_cwd_backfill_candidates @ 0x100ac9af0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_project_state::collect_cwd_backfill_candidates::hd04b9c2866391954(
        __m256i *a1,
        __int64 a2,
        unsigned __int16 *a3,
        size_t a4,
        __int64 a5,
        __int64 a6,
        __m128i si128)
{
  unsigned __int16 *v7; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int16 *v10; // r14
  size_t v11; // rdx
  size_t v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  char v15; // cl
  char *i; // rcx
  char *v17; // rax
  __int64 v18; // r15
  __int64 v19; // r12
  char *v20; // r14
  size_t v21; // rdx
  size_t v22; // rbx
  __int64 v23; // rbx
  int v24; // eax
  char v25; // cl
  char *j; // rcx
  char *v27; // rax
  __int64 v28; // r15
  __int64 v29; // r12
  char *v30; // r14
  size_t v31; // rdx
  size_t v32; // rbx
  __int64 v33; // rbx
  int v34; // eax
  char v35; // cl
  char *v36; // rcx
  char *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r12
  char *v40; // r15
  size_t v41; // rdx
  size_t v42; // r14
  __int64 v43; // r14
  int v44; // eax
  char v45; // cl
  __int64 v46; // rax
  void *v47; // rcx
  unsigned __int16 *v48; // rax
  unsigned __int16 *v49; // rcx
  char *v50; // rax
  __int64 v51; // rbx
  __int64 v52; // r15
  char *v53; // r12
  size_t v54; // rdx
  size_t v55; // r14
  __int64 v56; // r14
  int v57; // eax
  char v58; // cl
  bool v59; // cf
  __int64 v60; // rax
  void *v61; // rcx
  __m256i *v62; // rdx
  __int64 *v63; // rcx
  int v64; // eax
  __m256i *v65; // rdx
  __int64 v66; // rcx
  void *v67; // r13
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r13
  __int64 k; // rcx
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // r14
  __int64 v76; // r15
  size_t v77; // rdx
  __int64 v78; // r12
  int v79; // eax
  char v80; // cl
  void *v81; // r14
  __int64 v82; // rsi
  __int64 v83; // r12
  void *v84; // r13
  __int64 v85; // rdi
  __int64 v86; // rbx
  __int64 v87; // r15
  __int64 v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rax
  _BYTE *v92; // rax
  _BYTE *v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // rbx
  __int64 *v97; // rdx
  __int64 v98; // rax
  signed __int64 epi64; // r14
  size_t v100; // rcx
  unsigned __int128 v101; // kr60_16
  __m128i v102; // xmm0
  __m256i *v103; // rax
  __int64 v104; // rbx
  _QWORD *v105; // r14
  __int64 v106; // rsi
  __int64 v107; // rsi
  __m256i v109; // [rsp+0h] [rbp-250h] BYREF
  __m256i v110; // [rsp+20h] [rbp-230h] BYREF
  __m128i v111; // [rsp+40h] [rbp-210h]
  __int64 v112; // [rsp+50h] [rbp-200h]
  sqlite3_stmt *v113; // [rsp+58h] [rbp-1F8h]
  _QWORD v114[2]; // [rsp+60h] [rbp-1F0h] BYREF
  _QWORD v115[2]; // [rsp+70h] [rbp-1E0h] BYREF
  __int64 v116; // [rsp+80h] [rbp-1D0h]
  __int64 v117; // [rsp+88h] [rbp-1C8h]
  __int64 v118; // [rsp+90h] [rbp-1C0h] BYREF
  __int64 v119; // [rsp+98h] [rbp-1B8h]
  __int64 v120; // [rsp+A0h] [rbp-1B0h]
  __int64 v121; // [rsp+A8h] [rbp-1A8h]
  __int64 v122; // [rsp+B0h] [rbp-1A0h]
  __m256i v123; // [rsp+B8h] [rbp-198h] BYREF
  __m128i v124; // [rsp+D8h] [rbp-178h]
  __int64 v125; // [rsp+E8h] [rbp-168h]
  sqlite3_stmt *v126; // [rsp+F0h] [rbp-160h]
  _QWORD *v127; // [rsp+F8h] [rbp-158h] BYREF
  __m128i v128; // [rsp+100h] [rbp-150h] BYREF
  __int128 v129; // [rsp+110h] [rbp-140h]
  __m128i v130; // [rsp+120h] [rbp-130h] BYREF
  __int64 v131; // [rsp+130h] [rbp-120h]
  sqlite3_stmt *v132; // [rsp+138h] [rbp-118h]
  __int64 v133; // [rsp+190h] [rbp-C0h] BYREF
  __int64 v134; // [rsp+198h] [rbp-B8h]
  __int64 v135; // [rsp+1A0h] [rbp-B0h]
  __int64 v136; // [rsp+1A8h] [rbp-A8h]
  __m256i *v137; // [rsp+1B0h] [rbp-A0h] BYREF
  __int64 v138; // [rsp+1B8h] [rbp-98h] BYREF
  __int64 v139; // [rsp+1C0h] [rbp-90h]
  __m256i *v140; // [rsp+1C8h] [rbp-88h]
  size_t v141; // [rsp+1D0h] [rbp-80h]
  __int64 v142; // [rsp+1D8h] [rbp-78h]
  __m128i v143; // [rsp+1E0h] [rbp-70h] BYREF
  size_t __n[2]; // [rsp+1F0h] [rbp-60h] BYREF
  __int64 v145; // [rsp+200h] [rbp-50h]
  __int64 v146; // [rsp+208h] [rbp-48h]
  __int64 v147; // [rsp+210h] [rbp-40h]
  void *__s1; // [rsp+218h] [rbp-38h]
  __int64 v149; // [rsp+220h] [rbp-30h]

  v116 = a6; /*0x100ac9b04*/
  v121 = a5; /*0x100ac9b0b*/
  __n[0] = a4; /*0x100ac9b12*/
  v136 = a2; /*0x100ac9b16*/
  v140 = a1; /*0x100ac9b1d*/
  if ( !a3 ) /*0x100ac9b27*/
  {
LABEL_71:
    v63 = (__int64 *)v140; /*0x100aca078*/
    v140->i64[1] = 0; /*0x100aca07f*/
    v63[2] = 8; /*0x100aca087*/
    v63[3] = 0; /*0x100aca08f*/
    *v63 = 0x8000000000000016LL; /*0x100aca0a1*/
    return *(double *)si128.i64; /*0x100aca0a4*/
  }
  v149 = __n[0]; /*0x100ac9b38*/
  __s1 = a3; /*0x100ac9b3c*/
  while ( 1 ) /*0x100ac9b40*/
  {
    v7 = a3 + 4; /*0x100ac9b40*/
    v143.i64[0] = (__int64)a3; /*0x100ac9b44*/
    v147 = a3[137]; /*0x100ac9b4f*/
    v8 = 3LL * (unsigned int)(8 * v147); /*0x100ac9b5a*/
    v9 = -1; /*0x100ac9b5e*/
    do /*0x100ac9bbc*/
    {
      if ( !v8 ) /*0x100ac9b73*/
      {
        v9 = v147; /*0x100ac9bd0*/
        goto LABEL_13; /*0x100ac9bd0*/
      }
      v10 = v7 + 12; /*0x100ac9b75*/
      v11 = *((_QWORD *)v7 + 2); /*0x100ac9b7d*/
      v12 = v11 - 2; /*0x100ac9b84*/
      if ( v11 >= 2 ) /*0x100ac9b8d*/
        v11 = 2; /*0x100ac9b8d*/
      v13 = -(__int64)v12; /*0x100ac9b91*/
      v14 = memcmp("id", *((const void **)v7 + 1), v11); /*0x100ac9b97*/
      if ( v14 ) /*0x100ac9ba0*/
        v13 = v14; /*0x100ac9ba0*/
      v15 = (v13 > 0) - (v13 < 0); /*0x100ac9bad*/
      ++v9; /*0x100ac9baf*/
      v8 -= 24; /*0x100ac9bb2*/
      v7 = v10; /*0x100ac9bb6*/
    }
    while ( v15 == 1 ); /*0x100ac9bbc*/
    if ( !v15 ) /*0x100ac9bc3*/
      break; /*0x100ac9bc3*/
LABEL_13:
    if ( !v149 ) /*0x100ac9bdc*/
      goto LABEL_71; /*0x100ac9bdc*/
    --v149; /*0x100ac9be2*/
    a3 = *(unsigned __int16 **)(v143.i64[0] + 8 * v9 + 280); /*0x100ac9bea*/
  }
  v149 = __n[0]; /*0x100ac9c02*/
  for ( i = (char *)__s1; ; i = *(char **)(v143.i64[0] + 8 * v19 + 280) ) /*0x100ac9c06*/
  {
    v17 = i + 8; /*0x100ac9c0a*/
    v143.i64[0] = (__int64)i; /*0x100ac9c0e*/
    v147 = *((unsigned __int16 *)i + 137); /*0x100ac9c19*/
    v18 = 3LL * (unsigned int)(8 * v147); /*0x100ac9c24*/
    v19 = -1; /*0x100ac9c28*/
    do /*0x100ac9c7c*/
    {
      if ( !v18 ) /*0x100ac9c33*/
      {
        v19 = v147; /*0x100ac9c90*/
        goto LABEL_26; /*0x100ac9c90*/
      }
      v20 = v17 + 24; /*0x100ac9c35*/
      v21 = *((_QWORD *)v17 + 2); /*0x100ac9c3d*/
      v22 = v21 - 3; /*0x100ac9c44*/
      if ( v21 >= 3 ) /*0x100ac9c4d*/
        v21 = 3; /*0x100ac9c4d*/
      v23 = -(__int64)v22; /*0x100ac9c51*/
      v24 = memcmp(&unk_10167D2E0, *((const void **)v17 + 1), v21); /*0x100ac9c57*/
      if ( v24 ) /*0x100ac9c60*/
        v23 = v24; /*0x100ac9c60*/
      v25 = (v23 > 0) - (v23 < 0); /*0x100ac9c6d*/
      ++v19; /*0x100ac9c6f*/
      v18 -= 24; /*0x100ac9c72*/
      v17 = v20; /*0x100ac9c76*/
    }
    while ( v25 == 1 ); /*0x100ac9c7c*/
    if ( !v25 ) /*0x100ac9c83*/
      break; /*0x100ac9c83*/
LABEL_26:
    if ( !v149 ) /*0x100ac9c9c*/
      goto LABEL_71; /*0x100ac9c9c*/
    --v149; /*0x100ac9ca2*/
  }
  v149 = __n[0]; /*0x100ac9cc2*/
  for ( j = (char *)__s1; ; j = *(char **)(v143.i64[0] + 8 * v29 + 280) ) /*0x100ac9cc6*/
  {
    v27 = j + 8; /*0x100ac9cca*/
    v143.i64[0] = (__int64)j; /*0x100ac9cce*/
    v147 = *((unsigned __int16 *)j + 137); /*0x100ac9cd9*/
    v28 = 3LL * (unsigned int)(8 * v147); /*0x100ac9ce4*/
    v29 = -1; /*0x100ac9ce8*/
    do /*0x100ac9d3c*/
    {
      if ( !v28 ) /*0x100ac9cf3*/
      {
        v29 = v147; /*0x100ac9d50*/
        goto LABEL_39; /*0x100ac9d50*/
      }
      v30 = v27 + 24; /*0x100ac9cf5*/
      v31 = *((_QWORD *)v27 + 2); /*0x100ac9cfd*/
      v32 = v31 - 12; /*0x100ac9d04*/
      if ( v31 >= 0xC ) /*0x100ac9d0d*/
        v31 = 12; /*0x100ac9d0d*/
      v33 = -(__int64)v32; /*0x100ac9d11*/
      v34 = memcmp(&unk_10167D326, *((const void **)v27 + 1), v31); /*0x100ac9d17*/
      if ( v34 ) /*0x100ac9d20*/
        v33 = v34; /*0x100ac9d20*/
      v35 = (v33 > 0) - (v33 < 0); /*0x100ac9d2d*/
      ++v29; /*0x100ac9d2f*/
      v28 -= 24; /*0x100ac9d32*/
      v27 = v30; /*0x100ac9d36*/
    }
    while ( v35 == 1 ); /*0x100ac9d3c*/
    if ( !v35 ) /*0x100ac9d43*/
      break; /*0x100ac9d43*/
LABEL_39:
    if ( !v149 ) /*0x100ac9d5c*/
      goto LABEL_71; /*0x100ac9d5c*/
    --v149; /*0x100ac9d62*/
  }
  v149 = __n[0]; /*0x100ac9d82*/
  v36 = (char *)__s1; /*0x100ac9d86*/
  while ( 2 ) /*0x100ac9d8a*/
  {
    v37 = v36 + 8; /*0x100ac9d8a*/
    v143.i64[0] = (__int64)v36; /*0x100ac9d8e*/
    v147 = *((unsigned __int16 *)v36 + 137); /*0x100ac9d99*/
    v38 = 3LL * (unsigned int)(8 * v147); /*0x100ac9da4*/
    v39 = -1; /*0x100ac9da8*/
    do /*0x100ac9dfc*/
    {
      if ( !v38 ) /*0x100ac9db3*/
      {
        v39 = v147; /*0x100ac9e10*/
        goto LABEL_52; /*0x100ac9e10*/
      }
      v40 = v37 + 24; /*0x100ac9db5*/
      v41 = *((_QWORD *)v37 + 2); /*0x100ac9dbd*/
      v42 = v41 - 8; /*0x100ac9dc4*/
      if ( v41 >= 8 ) /*0x100ac9dcd*/
        v41 = 8; /*0x100ac9dcd*/
      v43 = -(__int64)v42; /*0x100ac9dd1*/
      v44 = memcmp("archivedAuthFile~/.codexsessionsccswitchorphaned", *((const void **)v37 + 1), v41); /*0x100ac9dd7*/
      if ( v44 ) /*0x100ac9de0*/
        v43 = v44; /*0x100ac9de0*/
      v45 = (v43 > 0) - (v43 < 0); /*0x100ac9ded*/
      ++v39; /*0x100ac9def*/
      v38 -= 24; /*0x100ac9df2*/
      v37 = v40; /*0x100ac9df6*/
    }
    while ( v45 == 1 ); /*0x100ac9dfc*/
    if ( !v45 ) /*0x100ac9e03*/
    {
      v46 = 25; /*0x100ac9e37*/
      v47 = &unk_10167D332; /*0x100ac9e3c*/
      goto LABEL_55; /*0x100ac9e3c*/
    }
LABEL_52:
    if ( v149 ) /*0x100ac9e1c*/
    {
      --v149; /*0x100ac9e22*/
      v36 = *(char **)(v143.i64[0] + 8 * v39 + 280); /*0x100ac9e2a*/
      continue; /*0x100ac9e32*/
    }
    break;
  }
  v46 = 5; /*0x100aca7f8*/
  v47 = &unk_10167D34B; /*0x100aca7fd*/
LABEL_55:
  v115[0] = v47; /*0x100ac9e43*/
  v115[1] = v46; /*0x100ac9e4a*/
  v48 = (unsigned __int16 *)__s1; /*0x100ac9e58*/
  while ( 2 ) /*0x100ac9e5c*/
  {
    v49 = v48; /*0x100ac9e5c*/
    v50 = (char *)(v48 + 4); /*0x100ac9e5f*/
    __s1 = v49; /*0x100ac9e63*/
    v149 = v49[137]; /*0x100ac9e6e*/
    v51 = 3LL * (unsigned int)(8 * v149); /*0x100ac9e79*/
    v52 = -1; /*0x100ac9e7d*/
    do /*0x100ac9edc*/
    {
      if ( !v51 ) /*0x100ac9e93*/
      {
        v52 = v149; /*0x100ac9ef0*/
        goto LABEL_66; /*0x100ac9ef0*/
      }
      v53 = v50 + 24; /*0x100ac9e95*/
      v54 = *((_QWORD *)v50 + 2); /*0x100ac9e9d*/
      v55 = v54 - 6; /*0x100ac9ea4*/
      if ( v54 >= 6 ) /*0x100ac9ead*/
        v54 = 6; /*0x100ac9ead*/
      v56 = -(__int64)v55; /*0x100ac9eb1*/
      v57 = memcmp(&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_681, *((const void **)v50 + 1), v54); /*0x100ac9eb7*/
      if ( v57 ) /*0x100ac9ec0*/
        v56 = v57; /*0x100ac9ec0*/
      v58 = (v56 > 0) - (v56 < 0); /*0x100ac9ecd*/
      ++v52; /*0x100ac9ecf*/
      v51 -= 24; /*0x100ac9ed2*/
      v50 = v53; /*0x100ac9ed6*/
    }
    while ( v58 == 1 ); /*0x100ac9edc*/
    if ( !v58 ) /*0x100ac9ee3*/
    {
      v60 = 20; /*0x100ac9f10*/
      v61 = &unk_10167D356; /*0x100ac9f15*/
      goto LABEL_69; /*0x100ac9f15*/
    }
LABEL_66:
    v59 = __n[0]-- == 0; /*0x100ac9ef4*/
    if ( !v59 ) /*0x100ac9efd*/
    {
      v48 = *((unsigned __int16 **)__s1 + v52 + 35); /*0x100ac9f03*/
      continue; /*0x100ac9f0b*/
    }
    break;
  }
  v60 = 2; /*0x100aca809*/
  v61 = &unk_10167D36A; /*0x100aca80e*/
LABEL_69:
  v114[0] = v61; /*0x100ac9f1c*/
  v114[1] = v60; /*0x100ac9f23*/
  v127 = v114; /*0x100ac9f31*/
  v128.i64[0] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ac9f3f*/
  v128.i64[1] = (__int64)v115; /*0x100ac9f4d*/
  *(_QWORD *)&v129 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ac9f54*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v118, &unk_1017CA17A, &v127); /*0x100ac9f70*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v127, v136, v119, v120); /*0x100ac9f91*/
  *(__m128i *)v123.i8 = v128; /*0x100ac9fa3*/
  v123.i128[1] = v129; /*0x100ac9fbf*/
  v124 = v130; /*0x100ac9fdb*/
  v125 = v131; /*0x100ac9ff7*/
  v126 = v132; /*0x100aca005*/
  if ( (_DWORD)v127 == 1 ) /*0x100aca00f*/
  {
    v62 = v140; /*0x100aca01c*/
    v140[1].i64[3] = (__int64)v126; /*0x100aca023*/
    v62[1].i64[2] = v125; /*0x100aca02e*/
    *(__m128i *)v62[1].i8 = v124; /*0x100aca044*/
    *v62 = v123; /*0x100aca05a*/
    goto LABEL_172; /*0x100aca073*/
  }
  v113 = v126; /*0x100aca0b0*/
  v112 = v125; /*0x100aca0be*/
  v111 = v124; /*0x100aca0da*/
  v110 = v123; /*0x100aca0f6*/
  v64 = sqlite3_bind_parameter_count(v126); /*0x100aca119*/
  if ( v64 ) /*0x100aca123*/
  {
    v65 = v140; /*0x100aca133*/
    v140->i64[0] = 0x8000000000000013LL; /*0x100aca13a*/
    v65->i64[1] = 0; /*0x100aca13d*/
    v65->i64[2] = v64; /*0x100aca145*/
    goto LABEL_171; /*0x100aca149*/
  }
  v133 = 0; /*0x100aca158*/
  v134 = 8; /*0x100aca163*/
  v135 = 0; /*0x100aca16e*/
  v137 = &v110; /*0x100aca180*/
  v138 = 0; /*0x100aca187*/
  while ( 1 ) /*0x100aca19e*/
  {
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x100aca19e*/
      &v127,
      &v137);
    v67 = v127; /*0x100aca1a3*/
    if ( v127 != (_QWORD *)0x8000000000000016LL ) /*0x100aca1ad*/
    {
      epi64 = v128.i64[1]; /*0x100aca869*/
      v70 = v128.i64[0]; /*0x100aca869*/
      v100 = v129; /*0x100aca877*/
      si128 = _mm_loadu_si128(&v130); /*0x100aca87e*/
      v101 = __PAIR128__(*((unsigned __int64 *)&v129 + 1), v131); /*0x100aca88d*/
      goto LABEL_162; /*0x100aca88d*/
    }
    if ( !v138 ) /*0x100aca1bb*/
      goto LABEL_150; /*0x100aca1bb*/
    rusqlite::row::Row::get::h97011a0484b66d6b(&v127, &v138, 0, v66); /*0x100aca1d1*/
    v67 = v127; /*0x100aca1d6*/
    __s1 = (void *)v128.i64[1]; /*0x100aca1ef*/
    v149 = v128.i64[0]; /*0x100aca1ef*/
    __n[0] = v129; /*0x100aca1fa*/
    if ( v127 != (_QWORD *)0x8000000000000016LL ) /*0x100aca201*/
    {
      si128 = _mm_loadu_si128(&v130); /*0x100aca899*/
      v70 = v149; /*0x100aca8a8*/
      epi64 = (signed __int64)__s1; /*0x100aca8ac*/
      v100 = __n[0]; /*0x100aca8b0*/
      v101 = __PAIR128__(*((unsigned __int64 *)&v129 + 1), v131); /*0x100aca8b4*/
      goto LABEL_162; /*0x100aca8b4*/
    }
    rusqlite::row::Row::get::h97011a0484b66d6b(&v127, &v138, 1, v68); /*0x100aca21a*/
    v67 = v127; /*0x100aca21f*/
    v145 = v128.i64[1]; /*0x100aca234*/
    v70 = v128.i64[0]; /*0x100aca234*/
    v141 = v129; /*0x100aca23f*/
    if ( v127 != (_QWORD *)0x8000000000000016LL ) /*0x100aca246*/
      break; /*0x100aca246*/
    rusqlite::row::Row::get::h97011a0484b66d6b(&v127, &v138, 2, v69); /*0x100aca25f*/
    v67 = v127; /*0x100aca264*/
    si128 = _mm_loadu_si128(&v128); /*0x100aca26b*/
    v143 = si128; /*0x100aca273*/
    if ( v127 != (_QWORD *)0x8000000000000016LL ) /*0x100aca282*/
    {
      v101 = v129; /*0x100aca900*/
      *(__m128i *)__n = v130; /*0x100aca90e*/
      v147 = v131; /*0x100aca919*/
      if ( v70 ) /*0x100aca920*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v70, 1); /*0x100aca92e*/
      v102 = _mm_load_si128(&v143); /*0x100aca933*/
      v70 = v102.i64[0]; /*0x100aca938*/
      epi64 = _mm_extract_epi64(v102, 1); /*0x100aca93d*/
      if ( v149 ) /*0x100aca94b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v149, 1); /*0x100aca956*/
      v100 = v101; /*0x100aca95b*/
      si128 = _mm_load_si128((const __m128i *)__n); /*0x100aca962*/
      goto LABEL_162; /*0x100aca967*/
    }
    if ( __OFSUB__(-v149, 1) ) /*0x100aca292*/
    {
      v67 = __s1; /*0x100aca969*/
      epi64 = v70; /*0x100aca96d*/
      v70 = __n[0]; /*0x100aca970*/
      v100 = v145; /*0x100aca97b*/
      si128 = _mm_load_si128(&v143); /*0x100aca97f*/
      v101 = __PAIR128__(v141, v129); /*0x100aca97f*/
      goto LABEL_162; /*0x100aca97f*/
    }
    if ( v149 == 0x8000000000000001LL ) /*0x100aca2a5*/
    {
LABEL_150:
      core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v137); /*0x100aca81a*/
      v97 = (__int64 *)v140; /*0x100aca82d*/
      v140->i64[3] = v135; /*0x100aca834*/
      v98 = v133; /*0x100aca838*/
      v97[2] = v134; /*0x100aca846*/
      v97[1] = v98; /*0x100aca84a*/
      *v97 = 0x8000000000000016LL; /*0x100aca84e*/
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v110); /*0x100aca858*/
      goto LABEL_172; /*0x100aca85d*/
    }
    v117 = v129; /*0x100aca2ab*/
    v146 = v70; /*0x100aca2b2*/
    si128.i64[0] = _mm_load_si128(&v143).u64[0]; /*0x100aca2b6*/
    v142 = si128.i64[0]; /*0x100aca2bb*/
    if ( v121 ) /*0x100aca2c8*/
    {
      v71 = v116; /*0x100aca2ce*/
      for ( k = v121; ; k = *(_QWORD *)(v147 + 8 * v75 + 280) ) /*0x100aca2d5*/
      {
        v73 = k + 8; /*0x100aca2dc*/
        v147 = k; /*0x100aca2e0*/
        v136 = *(unsigned __int16 *)(k + 274); /*0x100aca2eb*/
        v74 = 3LL * (unsigned int)(8 * v136); /*0x100aca2f9*/
        v75 = -1; /*0x100aca2fd*/
        do /*0x100aca358*/
        {
          if ( !v74 ) /*0x100aca313*/
          {
            v75 = v136; /*0x100aca370*/
            goto LABEL_94; /*0x100aca370*/
          }
          v76 = v73 + 24; /*0x100aca315*/
          v77 = *(_QWORD *)(v73 + 16); /*0x100aca31d*/
          v78 = __n[0] - v77; /*0x100aca328*/
          if ( __n[0] < v77 ) /*0x100aca32b*/
            v77 = __n[0]; /*0x100aca32b*/
          v79 = memcmp(__s1, *(const void **)(v73 + 8), v77); /*0x100aca333*/
          if ( v79 ) /*0x100aca33c*/
            v78 = v79; /*0x100aca33c*/
          v80 = (v78 > 0) - (v78 < 0); /*0x100aca349*/
          ++v75; /*0x100aca34b*/
          v74 -= 24; /*0x100aca34e*/
          v73 = v76; /*0x100aca352*/
        }
        while ( v80 == 1 ); /*0x100aca358*/
        if ( !v80 ) /*0x100aca369*/
          goto LABEL_97; /*0x100aca369*/
LABEL_94:
        v59 = v71-- == 0; /*0x100aca381*/
        if ( v59 ) /*0x100aca385*/
          break; /*0x100aca385*/
      }
    }
    si128 = _mm_load_si128(&v143); /*0x100aca398*/
    v81 = (void *)_mm_extract_epi64(si128, 1); /*0x100aca3b0*/
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100aca3ba*/
                            "\"subagent\"threadsupdated_at_msCOALESCE(updated_at_ms, 0)updated_atCOALESCE(updated_at, 0)0"
                            "codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMM"
                            "EDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 A"
                            "ND COALESCE(cwd, '') = ''",
                            0xAu,
                            v81) )
    {
LABEL_97:
      if ( v142 ) /*0x100aca3ca*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x100aca3dd*/
                                 _mm_extract_epi64(_mm_load_si128(&v143), 1),
                                 v142,
                                 1);
      v82 = v146; /*0x100aca3e2*/
      v83 = v149; /*0x100aca3e9*/
      v84 = __s1; /*0x100aca3ed*/
      if ( v146 ) /*0x100aca3f1*/
      {
        v85 = v145; /*0x100aca3fc*/
LABEL_119:
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v82, 1); /*0x100aca582*/
        goto LABEL_120; /*0x100aca582*/
      }
      goto LABEL_120; /*0x100aca3f1*/
    }
    v84 = __s1; /*0x100aca414*/
    v86 = v146; /*0x100aca418*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v127, v145, v141); /*0x100aca41c*/
    if ( (_BYTE)v127 ) /*0x100aca428*/
    {
      if ( (v128.i8[0] & 3) == 1 ) /*0x100aca439*/
      {
        __n[0] = v128.i64[0] - 1; /*0x100aca443*/
        v87 = *(_QWORD *)(v128.i64[0] - 1); /*0x100aca447*/
        v88 = *(_QWORD *)(v128.i64[0] + 7); /*0x100aca44b*/
        v83 = v149; /*0x100aca455*/
        if ( *(_QWORD *)v88 ) /*0x100aca44f*/
          (*(void (__fastcall **)(__int64))v88)(v87); /*0x100aca45e*/
        v89 = *(_QWORD *)(v88 + 8); /*0x100aca460*/
        if ( v89 ) /*0x100aca467*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v89, *(_QWORD *)(v88 + 16)); /*0x100aca470*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n[0], 24, 8); /*0x100aca483*/
        goto LABEL_108; /*0x100aca483*/
      }
      goto LABEL_114; /*0x100aca439*/
    }
    codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a( /*0x100aca4aa*/
      &v127,
      v145,
      v141);
    if ( (_DWORD)v127 != 11 ) /*0x100aca4b6*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v127); /*0x100aca552*/
LABEL_114:
      v83 = v149; /*0x100aca557*/
      goto LABEL_115; /*0x100aca557*/
    }
    if ( v128.i64[0] < (__int64)0x8000000000000002LL ) /*0x100aca4ca*/
      goto LABEL_114; /*0x100aca4ca*/
    v90 = v128.i64[1]; /*0x100aca4d4*/
    v143.i64[0] = v128.i64[0]; /*0x100aca4d4*/
    v91 = v129; /*0x100aca4db*/
    v127 = (_QWORD *)v128.i64[1]; /*0x100aca4e2*/
    v128 = (__m128i)(unsigned __int64)v129; /*0x100aca4e9*/
    *(_QWORD *)&v129 = 0; /*0x100aca4f7*/
    v147 = v90; /*0x100aca506*/
    *((_QWORD *)&v129 + 1) = v90; /*0x100aca50a*/
    v130.i64[0] = v91; /*0x100aca511*/
    v83 = v149; /*0x100aca526*/
    serde_json::de::from_trait::h51e180b4bb6af5e0(&v123, &v127); /*0x100aca52a*/
    if ( v123.i8[0] == 6 ) /*0x100aca538*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(&v123); /*0x100aca541*/
      goto LABEL_129; /*0x100aca546*/
    }
    v109 = v123; /*0x100aca5b7*/
    v92 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100aca5ea*/
                     "payload",
                     7,
                     &v109);
    if ( v92 /*0x100aca688*/
      && *v92 == 5
      && (v93 = v92 + 8,
          (v94 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf(v92 + 8, "id", 2)) != 0)
      && *(_BYTE *)v94 == 3
      && *(_QWORD *)(v94 + 24) == __n[0]
      && !memcmp(*(const void **)(v94 + 16), v84, __n[0])
      && (v95 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf(
                  v93,
                  &unk_10167D2E0,
                  3)) != 0
      && *(_BYTE *)v95 == 3 )
    {
      codexmate_lib::core::relay::codex_project_state::normalize_codex_path::h7ca6a8890dbadb8e( /*0x100aca699*/
        (signed __int64 *)&v127,
        *(_QWORD *)(v95 + 16),
        *(_QWORD *)(v95 + 24));
      if ( v128.i64[1] ) /*0x100aca6b6*/
      {
        v122 = v128.i64[1]; /*0x100aca6bf*/
        v139 = v128.i64[0]; /*0x100aca6bf*/
        v96 = (unsigned __int64)v127; /*0x100aca6c6*/
      }
      else
      {
        v96 = 0x8000000000000000LL; /*0x100aca6d5*/
        if ( v127 ) /*0x100aca6dc*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v128.i64[0], v127, 1); /*0x100aca6e3*/
      }
      *(double *)si128.i64 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100aca6ef*/
      if ( v143.i64[0] ) /*0x100aca6f9*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, v143.i64[0], 1); /*0x100aca708*/
      if ( v96 == 0x8000000000000000LL ) /*0x100aca71e*/
        goto LABEL_143; /*0x100aca71e*/
      if ( (unsigned __int8)codexmate_lib::core::relay::codex_project_state::is_codex_generated_projectless_dir::h356511d0c1e10a8c( /*0x100aca72e*/
                              v139,
                              v122,
                              *(double *)si128.i64) )
      {
        if ( v96 ) /*0x100aca73a*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v96, 1); /*0x100aca74b*/
LABEL_143:
        v83 = v149; /*0x100aca750*/
        v84 = __s1; /*0x100aca754*/
LABEL_108:
        v86 = v146; /*0x100aca488*/
        goto LABEL_115; /*0x100aca496*/
      }
      v127 = (_QWORD *)v149; /*0x100aca761*/
      v128.i64[0] = (__int64)__s1; /*0x100aca76c*/
      v128.i64[1] = __n[0]; /*0x100aca777*/
      *(_QWORD *)&v129 = v96; /*0x100aca77e*/
      *((_QWORD *)&v129 + 1) = v139; /*0x100aca78c*/
      v130.i64[0] = v122; /*0x100aca79a*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h3d48f57991b9072b(&v133, &v127); /*0x100aca7af*/
      if ( v146 ) /*0x100aca7b9*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v146, 1); /*0x100aca7c8*/
      if ( v142 ) /*0x100aca7dc*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v142, 1); /*0x100aca7ee*/
    }
    else
    {
      v86 = v146; /*0x100aca643*/
      *(double *)si128.i64 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100aca647*/
LABEL_129:
      if ( v143.i64[0] ) /*0x100aca653*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, v143.i64[0], 1); /*0x100aca662*/
LABEL_115:
      if ( v86 ) /*0x100aca55e*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v86, 1); /*0x100aca56c*/
      v82 = v142; /*0x100aca571*/
      if ( v142 ) /*0x100aca578*/
      {
        v85 = (__int64)v81; /*0x100aca57f*/
        goto LABEL_119; /*0x100aca57f*/
      }
LABEL_120:
      if ( v83 ) /*0x100aca58a*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v83, 1); /*0x100aca59b*/
    }
  }
  si128 = _mm_loadu_si128(&v130); /*0x100aca8c0*/
  v101 = __PAIR128__(*((unsigned __int64 *)&v129 + 1), v131); /*0x100aca8d6*/
  if ( v149 ) /*0x100aca8d6*/
  {
    *(__m128i *)__n = si128; /*0x100aca8e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v149, 1); /*0x100aca8e6*/
    si128 = _mm_load_si128((const __m128i *)__n); /*0x100aca8eb*/
  }
  v100 = v141; /*0x100aca8f0*/
  epi64 = v145; /*0x100aca8f4*/
LABEL_162:
  v103 = v140; /*0x100aca984*/
  v140->i64[0] = (__int64)v67; /*0x100aca98b*/
  v103->i64[1] = v70; /*0x100aca98e*/
  v103->i64[2] = epi64; /*0x100aca992*/
  v103->i64[3] = v100; /*0x100aca996*/
  v103[1].i64[0] = *((_QWORD *)&v101 + 1); /*0x100aca99a*/
  *(__m128i *)&v103[1].u32[2] = si128; /*0x100aca99e*/
  v103[1].i64[3] = v101; /*0x100aca9a3*/
  core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v137); /*0x100aca9ae*/
  v104 = v135; /*0x100aca9b3*/
  if ( v135 ) /*0x100aca9bd*/
  {
    v105 = (_QWORD *)(v134 + 32); /*0x100aca9c6*/
    do /*0x100aca9d7*/
    {
      v106 = *(v105 - 4); /*0x100aca9d9*/
      if ( v106 ) /*0x100aca9e0*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v105 - 3), v106, 1); /*0x100aca9eb*/
      v107 = *(v105 - 1); /*0x100aca9f0*/
      if ( v107 ) /*0x100aca9f7*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v105, v107, 1); /*0x100acaa01*/
      v105 += 6; /*0x100aca9d0*/
      --v104; /*0x100aca9d4*/
    }
    while ( v104 ); /*0x100aca9d7*/
  }
  if ( v133 ) /*0x100acaa12*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, 48 * v133, 8); /*0x100acaa28*/
LABEL_171:
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v110); /*0x100acaa2d*/
LABEL_172:
  if ( v118 ) /*0x100acaa43*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v118, 1); /*0x100acaa51*/
  return *(double *)si128.i64; /*0x100acaa56*/
}