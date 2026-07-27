// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409C8F60(const __m128i **a1, _QWORD *a2)
{
  char *v2; // rdi
  const __m128i **v3; // rax
  const __m128i *v4; // rcx
  __int64 v5; // rdx
  __int16 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 *v10; // rsi
  int v11; // r13d
  __int64 *v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r9
  void *v18; // r14
  __int64 v19; // r8
  __int64 v20; // rax
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rsi
  int v36; // r14d
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r14
  __int64 v44; // rcx
  _DWORD *v45; // rax
  __int64 v46; // rcx
  void *v47; // rax
  __int64 v48; // rcx
  _WORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  _DWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r12
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rcx
  _DWORD *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // r15
  __int64 v75; // r12
  __int64 v76; // rax
  __int64 v77; // rsi
  void *v78; // r14
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r14
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rsi
  __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // rcx
  _DWORD *v89; // rax
  __int64 v90; // rcx
  void *v91; // rax
  __int64 v92; // rcx
  void *v93; // rax
  __int64 v94; // rcx
  _DWORD *v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rsi
  __int64 v99; // rcx
  _DWORD *v100; // rax
  int v101; // r14d
  void *v102; // r15
  __int64 v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // rbx
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rcx
  __int128 v109; // xmm0
  __int64 *v110; // rbx
  _QWORD *v111; // rbx
  __int64 result; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // [rsp+28h] [rbp-58h] BYREF
  __int64 *v116; // [rsp+30h] [rbp-50h]
  unsigned __int64 v117; // [rsp+38h] [rbp-48h]
  char *v118; // [rsp+40h] [rbp-40h]
  __int64 *v119; // [rsp+48h] [rbp-38h]
  __int64 *v120; // [rsp+50h] [rbp-30h]
  __int64 v121; // [rsp+58h] [rbp-28h]
  __int64 v122; // [rsp+60h] [rbp-20h]
  __int64 v123; // [rsp+68h] [rbp-18h]
  __int64 v124; // [rsp+70h] [rbp-10h]
  __int64 v125; // [rsp+78h] [rbp-8h]
  __int64 v126; // [rsp+80h] [rbp+0h]
  __int64 v127; // [rsp+88h] [rbp+8h]
  __int128 v128; // [rsp+90h] [rbp+10h] BYREF
  __int64 v129; // [rsp+A0h] [rbp+20h]
  __int64 v130; // [rsp+A8h] [rbp+28h]
  __int64 v131; // [rsp+B0h] [rbp+30h]
  __int64 v132; // [rsp+B8h] [rbp+38h]
  __int64 v133; // [rsp+C0h] [rbp+40h]
  __int128 v134; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v135; // [rsp+D8h] [rbp+58h]
  __int64 v136; // [rsp+E0h] [rbp+60h]
  __int64 v137; // [rsp+E8h] [rbp+68h]
  __m256i v138; // [rsp+F0h] [rbp+70h] BYREF
  _OWORD v139[2]; // [rsp+110h] [rbp+90h] BYREF
  char v140; // [rsp+13Fh] [rbp+BFh] BYREF
  __int64 *v141; // [rsp+140h] [rbp+C0h]
  void *v142; // [rsp+148h] [rbp+C8h]
  __int128 v143; // [rsp+150h] [rbp+D0h] BYREF
  _BYTE v144[24]; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v145; // [rsp+178h] [rbp+F8h]
  __int128 v146; // [rsp+188h] [rbp+108h]
  const __m128i **v147; // [rsp+198h] [rbp+118h]
  _QWORD *v148; // [rsp+1A0h] [rbp+120h]
  __int64 v149; // [rsp+1A8h] [rbp+128h]
  __int64 v150; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v151; // [rsp+1B8h] [rbp+138h]
  __int64 v152; // [rsp+1C8h] [rbp+148h]
  __int128 v153; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v154; // [rsp+1E0h] [rbp+160h]
  __int64 v155; // [rsp+1E8h] [rbp+168h]
  char v156; // [rsp+1F5h] [rbp+175h]
  char v157; // [rsp+1F6h] [rbp+176h]
  char v158; // [rsp+1F7h] [rbp+177h]
  char v159; // [rsp+1F8h] [rbp+178h]
  char v160; // [rsp+1F9h] [rbp+179h]
  char v161; // [rsp+1FAh] [rbp+17Ah]
  char v162; // [rsp+1FBh] [rbp+17Bh]
  char v163; // [rsp+1FCh] [rbp+17Ch]
  char v164; // [rsp+1FDh] [rbp+17Dh]
  char v165; // [rsp+1FEh] [rbp+17Eh]
  char v166; // [rsp+1FFh] [rbp+17Fh]
  __int64 v167; // [rsp+200h] [rbp+180h]

  v167 = -2; /*0x1409c8f7b*/
  v148 = a2; /*0x1409c8f86*/
  v2 = (char *)a1; /*0x1409c8f8d*/
  v3 = a1 + 29; /*0x1409c8f90*/
  v4 = a1[29]; /*0x1409c8f97*/
  v5 = (__int64)v4->m128i_i64 + *((_QWORD *)v2 + 30) + 1; /*0x1409c8fa5*/
  v6 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128(v4)); /*0x1409c8fb3*/
  v7 = *((_QWORD *)v2 + 32); /*0x1409c8fb6*/
  v146 = *(_OWORD *)(v2 + 248); /*0x1409c8fc4*/
  v145 = *(_OWORD *)(v2 + 232); /*0x1409c8fd2*/
  *(_OWORD *)(v2 + 232) = *(_OWORD *)&off_141766490; /*0x1409c8fe0*/
  *(_OWORD *)(v2 + 248) = xmmword_1417664A0; /*0x1409c8fee*/
  *(_QWORD *)&v143 = v4; /*0x1409c8ff5*/
  *((_QWORD *)&v143 + 1) = v4 + 1; /*0x1409c9000*/
  *(_QWORD *)v144 = v5; /*0x1409c9007*/
  *(_WORD *)&v144[8] = v6; /*0x1409c900e*/
  *(_QWORD *)&v144[16] = v7; /*0x1409c9016*/
  v147 = v3; /*0x1409c901d*/
  sub_140319D60(&v115, &v143); /*0x1409c902f*/
  v8 = v116; /*0x1409c9034*/
  v9 = v117; /*0x1409c9038*/
  *(_QWORD *)&v143 = &v140; /*0x1409c9043*/
  v141 = v116; /*0x1409c904e*/
  if ( v117 >= 2 ) /*0x1409c9055*/
  {
    if ( v117 >= 0x15 ) /*0x1409ca226*/
    {
      v164 = 1; /*0x1409ca2fc*/
      sub_140B5A340(v141, v117, &v143); /*0x1409ca314*/
    }
    else
    {
      sub_140557F80(v141, v117, 1, &v143); /*0x1409ca243*/
    }
    v8 = v141; /*0x1409ca248*/
  }
  v133 = v115; /*0x1409c905f*/
  v10 = &v8[13 * v9]; /*0x1409c9067*/
  v11 = (_DWORD)v2 + 352; /*0x1409c906a*/
  v12 = v8; /*0x1409c9078*/
  while ( v12 != v10 ) /*0x1409c907e*/
  {
    v13 = v12 + 13; /*0x1409c9084*/
    if ( *v12 == -1 ) /*0x1409c908f*/
      goto LABEL_133; /*0x1409c908f*/
    v124 = *v12; /*0x1409c9095*/
    v120 = v12 + 13; /*0x1409c9099*/
    v119 = v10; /*0x1409c909d*/
    v136 = v12[1]; /*0x1409c90a5*/
    v14 = v12[2]; /*0x1409c90a9*/
    v123 = v12[3]; /*0x1409c90b1*/
    v130 = v12[4]; /*0x1409c90b9*/
    v15 = v12[5]; /*0x1409c90bd*/
    v122 = v12[6]; /*0x1409c90c5*/
    v16 = v12[7]; /*0x1409c90c9*/
    v121 = v12[9]; /*0x1409c90d1*/
    v17 = v12[10]; /*0x1409c90d5*/
    v18 = (void *)*((unsigned int *)v12 + 24); /*0x1409c90d9*/
    v19 = v12[8]; /*0x1409c90dd*/
    v20 = v12[11]; /*0x1409c90e1*/
    v127 = v16; /*0x1409c90ed*/
    v126 = v17; /*0x1409c90f1*/
    normalize_anthropic_tool_call_for_respon((unsigned int)&v143, v16, v19, v17, v20); /*0x1409c90f5*/
    v131 = *((_QWORD *)&v143 + 1); /*0x1409c910d*/
    v125 = v143; /*0x1409c910d*/
    v149 = *(_QWORD *)v144; /*0x1409c9118*/
    v129 = v145; /*0x1409c912a*/
    v128 = *(_OWORD *)&v144[8]; /*0x1409c9131*/
    *(_QWORD *)&v134 = 0; /*0x1409c9135*/
    v135 = 0; /*0x1409c913d*/
    nullsub_1(&v144[8]); /*0x1409c9145*/
    v21 = (_DWORD *)sub_140001650(4, 1); /*0x1409c9154*/
    if ( !v21 ) /*0x1409c9163*/
      sub_1416C2D4B(1, 4); /*0x1409ca2b2*/
    *v21 = 1701869940; /*0x1409c9169*/
    v138.m256i_i64[0] = 4; /*0x1409c916f*/
    v138.m256i_i64[1] = (__int64)v21; /*0x1409c9177*/
    v138.m256i_i64[2] = 4; /*0x1409c917b*/
    nullsub_1(v22); /*0x1409c9186*/
    v155 = sub_140001650(37, 1); /*0x1409c919a*/
    if ( !v155 ) /*0x1409c91a4*/
      sub_1416C2D4B(1, 37); /*0x1409ca2c7*/
    v23 = v155; /*0x1409c91b1*/
    *(_OWORD *)(v155 + 16) = xmmword_1417A5C88; /*0x1409c91b8*/
    *(_OWORD *)v23 = xmmword_1417A5C78; /*0x1409c91c3*/
    *(_QWORD *)(v23 + 29) = 0x656E6F642E73746ELL; /*0x1409c91d0*/
    LOBYTE(v143) = 3; /*0x1409c91d4*/
    *((_QWORD *)&v143 + 1) = 37; /*0x1409c91db*/
    *(_QWORD *)v144 = v23; /*0x1409c91e6*/
    *(_QWORD *)&v144[8] = 37; /*0x1409c91ed*/
    sub_140307860(v139, &v134, &v138, &v143); /*0x1409c9206*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c9213*/
      sub_1400104F0(v139); /*0x1409c9218*/
    nullsub_1(v24); /*0x1409c921e*/
    v25 = (void *)sub_140001650(12, 1); /*0x1409c922d*/
    if ( !v25 ) /*0x1409c9235*/
      sub_1416C2D4B(1, 12); /*0x1409ca29d*/
    qmemcpy(v25, "output_index", 12); /*0x1409c9245*/
    v138.m256i_i64[0] = 12; /*0x1409c924f*/
    v138.m256i_i64[1] = (__int64)v25; /*0x1409c9257*/
    v138.m256i_i64[2] = 12; /*0x1409c925b*/
    LOBYTE(v143) = 2; /*0x1409c9266*/
    *((_QWORD *)&v143 + 1) = 0; /*0x1409c926d*/
    *(_QWORD *)v144 = v18; /*0x1409c9278*/
    sub_140307860(v139, &v134, &v138, &v143); /*0x1409c928d*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c929a*/
      sub_1400104F0(v139); /*0x1409c929f*/
    nullsub_1(v26); /*0x1409c92a5*/
    v27 = (_DWORD *)sub_140001650(7, 1); /*0x1409c92b4*/
    if ( !v27 ) /*0x1409c92bc*/
      sub_1416C2D4B(1, 7); /*0x1409ca2dc*/
    *(_DWORD *)((char *)v27 + 3) = 1684627309; /*0x1409c92c2*/
    *v27 = 1835365481; /*0x1409c92c9*/
    v138.m256i_i64[0] = 7; /*0x1409c92cf*/
    v138.m256i_i64[1] = (__int64)v27; /*0x1409c92d7*/
    v138.m256i_i64[2] = 7; /*0x1409c92db*/
    if ( v14 < 0 ) /*0x1409c92e9*/
    {
      v29 = 0; /*0x1409ca137*/
LABEL_125:
      v162 = 1; /*0x1409ca13a*/
      sub_1416C2D4B(v29, v14); /*0x1409ca147*/
    }
    v142 = v18; /*0x1409c92ef*/
    if ( v14 ) /*0x1409c92f6*/
    {
      nullsub_1(v28); /*0x1409c92fb*/
      v29 = 1; /*0x1409c9300*/
      v30 = sub_140001650(v14, 1); /*0x1409c930e*/
      if ( !v30 ) /*0x1409c9316*/
        goto LABEL_125; /*0x1409c9316*/
      v31 = v30; /*0x1409c931c*/
      sub_141684120(v30, v136, v14); /*0x1409c9329*/
    }
    else
    {
      v31 = 1; /*0x1409c9333*/
    }
    LOBYTE(v143) = 3; /*0x1409c9338*/
    *((_QWORD *)&v143 + 1) = v14; /*0x1409c933f*/
    *(_QWORD *)v144 = v31; /*0x1409c9346*/
    *(_QWORD *)&v144[8] = v14; /*0x1409c934d*/
    v162 = 0; /*0x1409c9354*/
    sub_140307860(v139, &v134, &v138, &v143); /*0x1409c9370*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c937d*/
      sub_1400104F0(v139); /*0x1409c9382*/
    nullsub_1(v32); /*0x1409c9388*/
    v33 = sub_140001650(9, 1); /*0x1409c9397*/
    if ( !v33 ) /*0x1409c939f*/
      sub_1416C2D4B(1, 9); /*0x1409ca2f1*/
    *(_QWORD *)v33 = 0x746E656D75677261LL; /*0x1409c93b2*/
    *(_BYTE *)(v33 + 8) = 115; /*0x1409c93b5*/
    *(_QWORD *)&v153 = 9; /*0x1409c93b9*/
    v155 = v33; /*0x1409c93c4*/
    *((_QWORD *)&v153 + 1) = v33; /*0x1409c93cb*/
    v154 = 9; /*0x1409c93d2*/
    sub_14149C500(&v138, &v128); /*0x1409c93e5*/
    v35 = v138.m256i_i64[2]; /*0x1409c93f6*/
    v155 = v138.m256i_i64[1]; /*0x1409c93f6*/
    if ( v138.m256i_i64[2] < 0 ) /*0x1409c9400*/
    {
      v37 = 0; /*0x1409ca152*/
LABEL_127:
      v161 = 1; /*0x1409ca155*/
      sub_1416C2D4B(v37, v35); /*0x1409ca162*/
    }
    if ( v138.m256i_i64[2] ) /*0x1409c9406*/
    {
      v137 = (__int64)v2; /*0x1409c9408*/
      v36 = v11; /*0x1409c940f*/
      nullsub_1(v34); /*0x1409c9412*/
      v37 = 1; /*0x1409c9417*/
      v38 = sub_140001650(v35, 1); /*0x1409c9425*/
      if ( !v38 ) /*0x1409c942d*/
        goto LABEL_127; /*0x1409c942d*/
      v39 = v38; /*0x1409c9433*/
      sub_141684120(v38, v155, v35); /*0x1409c9443*/
      v11 = v36; /*0x1409c9448*/
      v2 = (char *)v137; /*0x1409c944e*/
    }
    else
    {
      v39 = 1; /*0x1409c9454*/
    }
    LOBYTE(v143) = 3; /*0x1409c945a*/
    *((_QWORD *)&v143 + 1) = v35; /*0x1409c9461*/
    *(_QWORD *)v144 = v39; /*0x1409c9468*/
    *(_QWORD *)&v144[8] = v35; /*0x1409c946f*/
    v161 = 0; /*0x1409c9476*/
    sub_140307860(v139, &v134, &v153, &v143); /*0x1409c949c*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c94a9*/
      sub_1400104F0(v139); /*0x1409c94ae*/
    if ( v138.m256i_i64[0] ) /*0x1409c94bb*/
      sub_140001660(v155, v138.m256i_i64[0], 1); /*0x1409c94ca*/
    v152 = v135; /*0x1409c94da*/
    v151 = v134; /*0x1409c94e2*/
    LOBYTE(v150) = 5; /*0x1409c94e5*/
    sub_1409C6750((unsigned int)&v143, v11, (unsigned int)&xmmword_1417A5C78, 37, (__int64)&v150); /*0x1409c950b*/
    v40 = *((_QWORD *)&v143 + 1); /*0x1409c9511*/
    v41 = *(_QWORD *)v144; /*0x1409c9518*/
    v42 = v148[2]; /*0x1409c9529*/
    if ( *(_QWORD *)v144 > (unsigned __int64)(*v148 - v42) ) /*0x1409c9533*/
    {
      v155 = *((_QWORD *)&v143 + 1); /*0x1409ca0a6*/
      sub_141688D30((_DWORD)v148, v42, *(_DWORD *)v144, 1, 1); /*0x1409ca0c6*/
      v42 = v148[2]; /*0x1409ca0d3*/
      v40 = v155; /*0x1409ca0d7*/
    }
    else if ( !*(_QWORD *)v144 ) /*0x1409c953c*/
    {
      goto LABEL_33; /*0x1409c953c*/
    }
    v43 = v42; /*0x1409c954c*/
    sub_141684120(v42 + v148[1], v40, v41); /*0x1409c9555*/
    v42 = v43; /*0x1409c955a*/
LABEL_33:
    v155 = v41 + v42; /*0x1409c955d*/
    v148[2] = v41 + v42; /*0x1409c956e*/
    if ( (_QWORD)v143 ) /*0x1409c957c*/
      sub_140001660(v40, v143, 1); /*0x1409c9587*/
    sub_1400104F0(&v150); /*0x1409c9594*/
    *(_QWORD *)&v153 = 0; /*0x1409c95a1*/
    v154 = 0; /*0x1409c95ac*/
    nullsub_1(v44); /*0x1409c95b7*/
    v45 = (_DWORD *)sub_140001650(4, 1); /*0x1409c95c6*/
    if ( !v45 ) /*0x1409c95ce*/
      sub_1416C2D4B(1, 4); /*0x1409ca398*/
    *v45 = 1701869940; /*0x1409c95d4*/
    v150 = 4; /*0x1409c95da*/
    *(_QWORD *)&v151 = v45; /*0x1409c95e5*/
    *((_QWORD *)&v151 + 1) = 4; /*0x1409c95ec*/
    nullsub_1(v46); /*0x1409c95f7*/
    v47 = (void *)sub_140001650(13, 1); /*0x1409c9606*/
    v137 = (__int64)v47; /*0x1409c960e*/
    if ( !v47 ) /*0x1409c9612*/
      sub_1416C2D4B(1, 13); /*0x1409ca383*/
    qmemcpy(v47, "function_call", 13); /*0x1409c9633*/
    LOBYTE(v143) = 3; /*0x1409c9636*/
    *((_QWORD *)&v143 + 1) = 13; /*0x1409c963d*/
    *(_QWORD *)v144 = v47; /*0x1409c9648*/
    *(_QWORD *)&v144[8] = 13; /*0x1409c964f*/
    sub_140307860(v139, &v153, &v150, &v143); /*0x1409c966e*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c967b*/
      sub_1400104F0(v139); /*0x1409c9680*/
    nullsub_1(v48); /*0x1409c9686*/
    v49 = (_WORD *)sub_140001650(2, 1); /*0x1409c9695*/
    if ( !v49 ) /*0x1409c969d*/
      sub_1416C2D4B(1, 2); /*0x1409ca36e*/
    *v49 = 25705; /*0x1409c96a3*/
    v150 = 2; /*0x1409c96a8*/
    *(_QWORD *)&v151 = v49; /*0x1409c96b3*/
    *((_QWORD *)&v151 + 1) = 2; /*0x1409c96ba*/
    if ( v14 ) /*0x1409c96c8*/
    {
      nullsub_1(v50); /*0x1409c96ca*/
      v51 = sub_140001650(v14, 1); /*0x1409c96d7*/
      if ( !v51 ) /*0x1409c96df*/
      {
        v160 = 1; /*0x1409ca3a3*/
        sub_1416C2D4B(1, v14); /*0x1409ca3b2*/
      }
      v52 = v51; /*0x1409c96e5*/
      sub_141684120(v51, v136, v14); /*0x1409c96f2*/
    }
    else
    {
      v52 = 1; /*0x1409c96f9*/
    }
    LOBYTE(v143) = 3; /*0x1409c96fe*/
    *((_QWORD *)&v143 + 1) = v14; /*0x1409c9705*/
    *(_QWORD *)v144 = v52; /*0x1409c970c*/
    *(_QWORD *)&v144[8] = v14; /*0x1409c9713*/
    v160 = 0; /*0x1409c971a*/
    sub_140307860(v139, &v153, &v150, &v143); /*0x1409c973c*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c9749*/
      sub_1400104F0(v139); /*0x1409c974e*/
    nullsub_1(v53); /*0x1409c9754*/
    v54 = sub_140001650(6, 1); /*0x1409c9763*/
    if ( !v54 ) /*0x1409c976b*/
      sub_1416C2D4B(1, 6); /*0x1409ca359*/
    *(_WORD *)(v54 + 4) = 29557; /*0x1409c9771*/
    *(_DWORD *)v54 = 1952543859; /*0x1409c9777*/
    v150 = 6; /*0x1409c977d*/
    *(_QWORD *)&v151 = v54; /*0x1409c9788*/
    *((_QWORD *)&v151 + 1) = 6; /*0x1409c978f*/
    nullsub_1(v55); /*0x1409c979a*/
    v56 = sub_140001650(9, 1); /*0x1409c97a9*/
    v137 = v56; /*0x1409c97b1*/
    if ( !v56 ) /*0x1409c97b5*/
      sub_1416C2D4B(1, 9); /*0x1409ca344*/
    *(_QWORD *)v56 = 0x6574656C706D6F63LL; /*0x1409c97c8*/
    *(_BYTE *)(v56 + 8) = 100; /*0x1409c97cb*/
    LOBYTE(v143) = 3; /*0x1409c97d0*/
    *((_QWORD *)&v143 + 1) = 9; /*0x1409c97d7*/
    *(_QWORD *)v144 = v56; /*0x1409c97e2*/
    *(_QWORD *)&v144[8] = 9; /*0x1409c97e9*/
    sub_140307860(v139, &v153, &v150, &v143); /*0x1409c9808*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c9815*/
      sub_1400104F0(v139); /*0x1409c981a*/
    nullsub_1(v57); /*0x1409c9820*/
    v58 = (_DWORD *)sub_140001650(7, 1); /*0x1409c982f*/
    if ( !v58 ) /*0x1409c9837*/
      sub_1416C2D4B(1, 7); /*0x1409ca32f*/
    *(_DWORD *)((char *)v58 + 3) = 1684627308; /*0x1409c983d*/
    *v58 = 1819042147; /*0x1409c9844*/
    v150 = 7; /*0x1409c984a*/
    *(_QWORD *)&v151 = v58; /*0x1409c9855*/
    *((_QWORD *)&v151 + 1) = 7; /*0x1409c985c*/
    v60 = v15; /*0x1409c9867*/
    if ( v15 < 0 ) /*0x1409c986d*/
    {
      v61 = 0; /*0x1409ca16d*/
LABEL_129:
      v159 = 1; /*0x1409ca170*/
      sub_1416C2D4B(v61, v60); /*0x1409ca17a*/
    }
    if ( v15 ) /*0x1409c9873*/
    {
      nullsub_1(v59); /*0x1409c9875*/
      v61 = 1; /*0x1409c987a*/
      v62 = sub_140001650(v15, 1); /*0x1409c9888*/
      v60 = v15; /*0x1409c988d*/
      if ( !v62 ) /*0x1409c9893*/
        goto LABEL_129; /*0x1409c9893*/
      v63 = v62; /*0x1409c9899*/
      sub_141684120(v62, v130, v15); /*0x1409c98a6*/
      v60 = v15; /*0x1409c98ab*/
    }
    else
    {
      v63 = 1; /*0x1409c98b7*/
    }
    LOBYTE(v143) = 3; /*0x1409c98bc*/
    *((_QWORD *)&v143 + 1) = v60; /*0x1409c98c3*/
    *(_QWORD *)v144 = v63; /*0x1409c98ca*/
    *(_QWORD *)&v144[8] = v60; /*0x1409c98d1*/
    v159 = 0; /*0x1409c98d8*/
    sub_140307860(v139, &v153, &v150, &v143); /*0x1409c98fa*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c9907*/
      sub_1400104F0(v139); /*0x1409c990c*/
    nullsub_1(v64); /*0x1409c9912*/
    v65 = (_DWORD *)sub_140001650(4, 1); /*0x1409c9921*/
    if ( !v65 ) /*0x1409c9929*/
      sub_1416C2D4B(1, 4); /*0x1409ca3c7*/
    *v65 = 1701667182; /*0x1409c992f*/
    v150 = 4; /*0x1409c9935*/
    *(_QWORD *)&v151 = v65; /*0x1409c9940*/
    *((_QWORD *)&v151 + 1) = 4; /*0x1409c9947*/
    v67 = v149; /*0x1409c9952*/
    if ( v149 < 0 ) /*0x1409c995c*/
    {
      v68 = 0; /*0x1409ca185*/
LABEL_131:
      v158 = 1; /*0x1409ca188*/
      sub_1416C2D4B(v68, v67); /*0x1409ca192*/
    }
    if ( v149 ) /*0x1409c9962*/
    {
      nullsub_1(v66); /*0x1409c9964*/
      v68 = 1; /*0x1409c9969*/
      v69 = sub_140001650(v149, 1); /*0x1409c997b*/
      v67 = v149; /*0x1409c9980*/
      if ( !v69 ) /*0x1409c998a*/
        goto LABEL_131; /*0x1409c998a*/
      v70 = v69; /*0x1409c9990*/
      sub_141684120(v69, v131, v149); /*0x1409c99a1*/
      v67 = v149; /*0x1409c99a6*/
    }
    else
    {
      v70 = 1; /*0x1409c99af*/
    }
    LOBYTE(v143) = 3; /*0x1409c99b4*/
    *((_QWORD *)&v143 + 1) = v67; /*0x1409c99bb*/
    *(_QWORD *)v144 = v70; /*0x1409c99c2*/
    *(_QWORD *)&v144[8] = v67; /*0x1409c99c9*/
    v158 = 0; /*0x1409c99d0*/
    sub_140307860(v139, &v153, &v150, &v143); /*0x1409c99f2*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c99ff*/
      sub_1400104F0(v139); /*0x1409c9a04*/
    nullsub_1(v71); /*0x1409c9a0a*/
    v72 = sub_140001650(9, 1); /*0x1409c9a19*/
    if ( !v72 ) /*0x1409c9a21*/
      sub_1416C2D4B(1, 9); /*0x1409ca3dc*/
    *(_QWORD *)v72 = 0x746E656D75677261LL; /*0x1409c9a31*/
    *(_BYTE *)(v72 + 8) = 115; /*0x1409c9a34*/
    v150 = 9; /*0x1409c9a38*/
    *(_QWORD *)&v151 = v72; /*0x1409c9a43*/
    *((_QWORD *)&v151 + 1) = 9; /*0x1409c9a4a*/
    v73 = v129; /*0x1409c9a55*/
    if ( v129 < 0 ) /*0x1409c9a5c*/
    {
      v75 = 0; /*0x1409ca1ef*/
LABEL_137:
      v157 = 1; /*0x1409ca1f2*/
      sub_1416C2D4B(v75, v73); /*0x1409ca1ff*/
    }
    if ( v129 ) /*0x1409c9a62*/
    {
      v74 = *((_QWORD *)&v128 + 1); /*0x1409c9a64*/
      nullsub_1(0x746E656D75677261LL); /*0x1409c9a68*/
      v75 = 1; /*0x1409c9a6d*/
      v76 = sub_140001650(v73, 1); /*0x1409c9a7b*/
      if ( !v76 ) /*0x1409c9a83*/
        goto LABEL_137; /*0x1409c9a83*/
      v77 = v76; /*0x1409c9a89*/
      sub_141684120(v76, v74, v73); /*0x1409c9a95*/
    }
    else
    {
      v77 = 1; /*0x1409c9aa3*/
    }
    LOBYTE(v143) = 3; /*0x1409c9aa8*/
    *((_QWORD *)&v143 + 1) = v73; /*0x1409c9aaf*/
    *(_QWORD *)v144 = v77; /*0x1409c9ab6*/
    *(_QWORD *)&v144[8] = v73; /*0x1409c9abd*/
    v157 = 0; /*0x1409c9ac4*/
    sub_140307860(v139, &v153, &v150, &v143); /*0x1409c9ae6*/
    v118 = v2 + 352; /*0x1409c9afa*/
    v78 = v142; /*0x1409c9afe*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c9b05*/
      sub_1400104F0(v139); /*0x1409c9b0a*/
    v138.m256i_i64[3] = v154; /*0x1409c9b1b*/
    *(_OWORD *)&v138.m256i_u64[1] = v153; /*0x1409c9b26*/
    v138.m256i_i8[0] = 5; /*0x1409c9b29*/
    v163 = 1; /*0x1409c9b2d*/
    v79 = sub_141433D50(aName_7, 4, &v138); /*0x1409c9b44*/
    if ( v79 && *(_BYTE *)v79 == 3 ) /*0x1409c9b52*/
    {
      v81 = *(_QWORD *)(v79 + 24); /*0x1409c9b54*/
      if ( v81 < 0 ) /*0x1409c9b5b*/
      {
        v113 = 0; /*0x1409ca20a*/
        v114 = v132; /*0x1409ca20c*/
        goto LABEL_139; /*0x1409ca20c*/
      }
      if ( v81 ) /*0x1409c9b61*/
      {
        v82 = *(_QWORD *)(v79 + 16); /*0x1409c9b67*/
        nullsub_1(v80); /*0x1409c9b6b*/
        v83 = sub_140001650(v81, 1); /*0x1409c9b78*/
        if ( !v83 ) /*0x1409c9b80*/
        {
          v114 = v81; /*0x1409ca455*/
          v113 = 1; /*0x1409ca458*/
LABEL_139:
          v163 = 1; /*0x1409ca210*/
          sub_1416C2D4B(v113, v114); /*0x1409ca217*/
        }
        v84 = v82; /*0x1409c9b89*/
        v85 = v83; /*0x1409c9b8c*/
        sub_141684120(v83, v84, v81); /*0x1409c9b92*/
        v86 = v81; /*0x1409c9b97*/
        v87 = v85; /*0x1409c9b9a*/
      }
      else
      {
        v87 = 1; /*0x1409ca123*/
        v86 = 0; /*0x1409ca128*/
      }
      v78 = v142; /*0x1409ca12b*/
    }
    else
    {
      v87 = 1; /*0x1409c9ba9*/
      v86 = 0; /*0x1409c9bae*/
    }
    v166 = 1; /*0x1409c9bb1*/
    v132 = v87; /*0x1409c9bbc*/
    v149 = v86; /*0x1409c9bc0*/
    sub_140A0E950(&v138, v87, v86, v2 + 280); /*0x1409c9bce*/
    *(_QWORD *)&v134 = 0; /*0x1409c9bd4*/
    v135 = 0; /*0x1409c9bdc*/
    nullsub_1(v88); /*0x1409c9be4*/
    v89 = (_DWORD *)sub_140001650(4, 1); /*0x1409c9bf3*/
    if ( !v89 ) /*0x1409c9bfb*/
      sub_1416C2D4B(1, 4); /*0x1409ca436*/
    *v89 = 1701869940; /*0x1409c9c01*/
    *(_QWORD *)&v153 = 4; /*0x1409c9c07*/
    *((_QWORD *)&v153 + 1) = v89; /*0x1409c9c12*/
    v154 = 4; /*0x1409c9c19*/
    nullsub_1(v90); /*0x1409c9c24*/
    v91 = (void *)sub_140001650(25, 1); /*0x1409c9c33*/
    v142 = v91; /*0x1409c9c3b*/
    if ( !v91 ) /*0x1409c9c42*/
      sub_1416C2D4B(1, 25); /*0x1409ca424*/
    qmemcpy(v91, "response.output_item.done", 25); /*0x1409c9c5a*/
    LOBYTE(v143) = 3; /*0x1409c9c5d*/
    *((_QWORD *)&v143 + 1) = 25; /*0x1409c9c64*/
    *(_QWORD *)v144 = v91; /*0x1409c9c6f*/
    *(_QWORD *)&v144[8] = 25; /*0x1409c9c76*/
    sub_140307860(v139, &v134, &v153, &v143); /*0x1409c9c92*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c9c9f*/
      sub_1400104F0(v139); /*0x1409c9ca4*/
    nullsub_1(v92); /*0x1409c9caa*/
    v93 = (void *)sub_140001650(12, 1); /*0x1409c9cb9*/
    if ( !v93 ) /*0x1409c9cc1*/
      sub_1416C2D4B(1, 12); /*0x1409ca412*/
    qmemcpy(v93, "output_index", 12); /*0x1409c9cd1*/
    *(_QWORD *)&v153 = 12; /*0x1409c9cdb*/
    *((_QWORD *)&v153 + 1) = v93; /*0x1409c9ce6*/
    v154 = 12; /*0x1409c9ced*/
    LOBYTE(v143) = 2; /*0x1409c9cf8*/
    *((_QWORD *)&v143 + 1) = 0; /*0x1409c9cff*/
    *(_QWORD *)v144 = v78; /*0x1409c9d0a*/
    sub_140307860(v139, &v134, &v153, &v143); /*0x1409c9d22*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c9d2f*/
      sub_1400104F0(v139); /*0x1409c9d34*/
    nullsub_1(v94); /*0x1409c9d3a*/
    v95 = (_DWORD *)sub_140001650(7, 1); /*0x1409c9d49*/
    if ( !v95 ) /*0x1409c9d51*/
      sub_1416C2D4B(1, 7); /*0x1409ca400*/
    *(_DWORD *)((char *)v95 + 3) = 1684627309; /*0x1409c9d57*/
    *v95 = 1835365481; /*0x1409c9d5e*/
    *(_QWORD *)&v153 = 7; /*0x1409c9d64*/
    *((_QWORD *)&v153 + 1) = v95; /*0x1409c9d6f*/
    v154 = 7; /*0x1409c9d76*/
    if ( v14 ) /*0x1409c9d84*/
    {
      nullsub_1(v96); /*0x1409c9d86*/
      v97 = sub_140001650(v14, 1); /*0x1409c9d93*/
      if ( !v97 ) /*0x1409c9d9b*/
      {
        v156 = 1; /*0x1409ca43e*/
        sub_1416C2D4B(1, v14); /*0x1409ca44d*/
      }
      v98 = v97; /*0x1409c9da1*/
      sub_141684120(v97, v136, v14); /*0x1409c9dae*/
    }
    else
    {
      v98 = 1; /*0x1409c9db5*/
    }
    LOBYTE(v143) = 3; /*0x1409c9dba*/
    *((_QWORD *)&v143 + 1) = v14; /*0x1409c9dc1*/
    *(_QWORD *)v144 = v98; /*0x1409c9dc8*/
    *(_QWORD *)&v144[8] = v14; /*0x1409c9dcf*/
    v156 = 0; /*0x1409c9dd6*/
    sub_140307860(v139, &v134, &v153, &v143); /*0x1409c9df5*/
    if ( LOBYTE(v139[0]) != 0xFF ) /*0x1409c9e02*/
      sub_1400104F0(v139); /*0x1409c9e07*/
    nullsub_1(v99); /*0x1409c9e0d*/
    v100 = (_DWORD *)sub_140001650(4, 1); /*0x1409c9e1c*/
    if ( !v100 ) /*0x1409c9e24*/
      sub_1416C2D4B(1, 4); /*0x1409ca3ee*/
    *v100 = 1835365481; /*0x1409c9e2a*/
    *(_QWORD *)&v153 = 4; /*0x1409c9e30*/
    *((_QWORD *)&v153 + 1) = v100; /*0x1409c9e3b*/
    v154 = 4; /*0x1409c9e42*/
    v165 = 1; /*0x1409c9e4d*/
    sub_140B842D0(&v143, &v138); /*0x1409c9e5b*/
    if ( (_BYTE)v143 == 0xFF ) /*0x1409c9e68*/
    {
      *(_QWORD *)&v139[0] = *((_QWORD *)&v143 + 1); /*0x1409ca25b*/
      sub_1416C3060( /*0x1409ca288*/
        (unsigned int)aCalledResultUn_15,
        43,
        (unsigned int)v139,
        (unsigned int)&off_1417A5560,
        (__int64)&off_1417A6420);
    }
    v139[1] = *(_OWORD *)v144; /*0x1409c9e7c*/
    v139[0] = v143; /*0x1409c9e83*/
    v165 = 0; /*0x1409c9e8a*/
    sub_140307860(&v143, &v134, &v153, v139); /*0x1409c9ea2*/
    if ( (_BYTE)v143 != 0xFF ) /*0x1409c9eaf*/
      sub_1400104F0(&v143); /*0x1409c9eb4*/
    v152 = v135; /*0x1409c9ec5*/
    v151 = v134; /*0x1409c9ecd*/
    LOBYTE(v150) = 5; /*0x1409c9ed0*/
    v101 = (int)v118; /*0x1409c9eec*/
    sub_1409C6750((unsigned int)&v143, (_DWORD)v118, (unsigned int)&xmmword_1417A5C30, 25, (__int64)&v150); /*0x1409c9efa*/
    v102 = *((void **)&v143 + 1); /*0x1409c9f00*/
    v103 = *(_QWORD *)v144; /*0x1409c9f07*/
    v104 = v155; /*0x1409c9f18*/
    if ( *(_QWORD *)v144 > (unsigned __int64)(*v148 - v155) ) /*0x1409c9f25*/
    {
      v142 = *((void **)&v143 + 1); /*0x1409ca0e3*/
      v111 = v148; /*0x1409ca100*/
      sub_141688D30((_DWORD)v148, v155, *(_DWORD *)v144, 1, 1); /*0x1409ca106*/
      v104 = v111[2]; /*0x1409ca10c*/
      v101 = (_DWORD)v2 + 352; /*0x1409ca110*/
      v102 = v142; /*0x1409ca117*/
    }
    else if ( !*(_QWORD *)v144 ) /*0x1409c9f2e*/
    {
      goto LABEL_102; /*0x1409c9f2e*/
    }
    v105 = v104; /*0x1409c9f3e*/
    sub_141684120(v104 + v148[1], v102, v103); /*0x1409c9f47*/
    v104 = v105; /*0x1409c9f4c*/
LABEL_102:
    v148[2] = v103 + v104; /*0x1409c9f4f*/
    if ( (_QWORD)v143 ) /*0x1409c9f67*/
      sub_140001660(v102, v143, 1); /*0x1409c9f72*/
    v166 = 1; /*0x1409c9f77*/
    sub_1400104F0(&v150); /*0x1409c9f85*/
    *(_OWORD *)v144 = *(_OWORD *)&v138.m256i_u64[2]; /*0x1409c9f96*/
    v143 = *(_OWORD *)v138.m256i_i8; /*0x1409c9f9d*/
    v106 = *((_QWORD *)v2 + 8); /*0x1409c9fa4*/
    if ( v106 == *((_QWORD *)v2 + 6) ) /*0x1409c9fac*/
      sub_1416890A0(v2 + 48); /*0x1409c9fb2*/
    v107 = *((_QWORD *)v2 + 7); /*0x1409c9fb8*/
    v108 = 32 * v106; /*0x1409c9fbf*/
    v109 = v143; /*0x1409c9fc3*/
    *(_OWORD *)(v107 + v108 + 16) = *(_OWORD *)v144; /*0x1409c9fd1*/
    *(_OWORD *)(v107 + v108) = v109; /*0x1409c9fd6*/
    *((_QWORD *)v2 + 8) = v106 + 1; /*0x1409c9fdd*/
    if ( v149 ) /*0x1409c9feb*/
      sub_140001660(v132, v149, 1); /*0x1409c9ff7*/
    v10 = v119; /*0x1409ca003*/
    v110 = v120; /*0x1409ca007*/
    v11 = v101; /*0x1409ca00b*/
    if ( (_QWORD)v128 ) /*0x1409ca00e*/
      sub_140001660(*((_QWORD *)&v128 + 1), v128, 1); /*0x1409ca01a*/
    if ( v125 ) /*0x1409ca026*/
      sub_140001660(v131, v125, 1); /*0x1409ca032*/
    if ( v124 ) /*0x1409ca03e*/
      sub_140001660(v136, v124, 1); /*0x1409ca04a*/
    if ( v123 ) /*0x1409ca056*/
      sub_140001660(v130, v123, 1); /*0x1409ca062*/
    if ( v122 ) /*0x1409ca06e*/
      sub_140001660(v127, v122, 1); /*0x1409ca07a*/
    v12 = v110; /*0x1409ca07f*/
    if ( v121 ) /*0x1409ca089*/
    {
      sub_140001660(v126, v121, 1); /*0x1409ca099*/
      v12 = v110; /*0x1409ca09e*/
    }
  }
  v13 = v10; /*0x1409ca19d*/
LABEL_133:
  sub_1402C9810(v13, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)((char *)v10 - (char *)v13) >> 3)); /*0x1409ca1a0*/
  result = v133; /*0x1409ca1bb*/
  if ( v133 ) /*0x1409ca1c2*/
    return sub_140001660(v141, 104 * v133, 8); /*0x1409ca1d5*/
  return result; /*0x1409ca1db*/
}