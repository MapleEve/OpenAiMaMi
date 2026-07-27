// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409CB5A0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v6; // rbx
  __int64 v7; // r14
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r14
  _DWORD *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  _QWORD *v25; // r12
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r12
  _QWORD *v30; // r15
  __int64 v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _WORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // rcx
  _DWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // rcx
  __int128 v57; // rax
  _QWORD *v58; // r14
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  _DWORD *v62; // rax
  __int64 v63; // rcx
  void *v64; // rax
  __int64 v65; // rcx
  _DWORD *v66; // rax
  __int64 v67; // rcx
  __int128 v68; // kr00_16
  __int64 v69; // rdi
  __int64 v70; // rcx
  __int128 v71; // xmm0
  _OWORD *v72; // rax
  _DWORD *v73; // rax
  __int64 v74; // rcx
  void *v75; // rax
  __int64 v76; // rcx
  void *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r14
  _DWORD *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  _DWORD *v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // r14
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int128 v91; // xmm0
  __int64 v92; // r13
  __int64 v93; // r12
  __int64 v94; // r12
  __int64 v95; // rcx
  _DWORD *v96; // rax
  __int64 v97; // rcx
  _QWORD *v98; // rax
  __int64 v99; // rcx
  void *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r13
  _DWORD *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rcx
  void *v107; // rax
  __int64 v108; // rcx
  _DWORD *v109; // rax
  __int64 v110; // rcx
  _DWORD *v111; // rax
  __int64 v112; // rcx
  _QWORD *v113; // rax
  __int64 v114; // rcx
  _DWORD *v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rdi
  __int64 v118; // rax
  __int64 v119; // r15
  __int64 v120; // r13
  __int64 v121; // r15
  _QWORD *v122; // rdi
  __int64 v123; // rcx
  _DWORD *v124; // rax
  __int64 v125; // rcx
  _QWORD *v126; // rax
  __int64 v127; // rcx
  _QWORD *v128; // rax
  __int64 v129; // rcx
  __int128 v130; // kr40_16
  __int64 v131; // rdi
  __int64 v132; // rax
  __int64 v133; // r12
  _QWORD *v134; // r12
  __int64 v135; // rax
  __int64 v136; // r15
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rdi
  __int64 v140; // rax
  __int64 v141; // r15
  __int64 v142; // rcx
  _QWORD v143[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v144; // [rsp+68h] [rbp-18h] BYREF
  __int64 v145; // [rsp+78h] [rbp-8h]
  __int128 v146; // [rsp+80h] [rbp+0h] BYREF
  __int64 v147; // [rsp+90h] [rbp+10h]
  __int64 v148; // [rsp+98h] [rbp+18h]
  __int64 v149; // [rsp+A0h] [rbp+20h]
  __int64 v150; // [rsp+A8h] [rbp+28h]
  __int64 v151; // [rsp+B0h] [rbp+30h]
  __int64 v152; // [rsp+C0h] [rbp+40h]
  __int64 v153; // [rsp+C8h] [rbp+48h]
  __int128 v154; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v155; // [rsp+E0h] [rbp+60h]
  _BYTE v156[24]; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v157; // [rsp+108h] [rbp+88h]
  __int64 v158; // [rsp+110h] [rbp+90h]
  __int64 v159; // [rsp+118h] [rbp+98h]
  __int64 v160; // [rsp+120h] [rbp+A0h]
  __int128 v161; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v162; // [rsp+138h] [rbp+B8h]
  __int128 v163; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v164; // [rsp+150h] [rbp+D0h]
  _QWORD *v165; // [rsp+158h] [rbp+D8h]
  char v166; // [rsp+164h] [rbp+E4h]
  char v167; // [rsp+165h] [rbp+E5h]
  char v168; // [rsp+166h] [rbp+E6h]
  char v169; // [rsp+167h] [rbp+E7h]
  char v170; // [rsp+168h] [rbp+E8h]
  char v171; // [rsp+169h] [rbp+E9h]
  char v172; // [rsp+16Ah] [rbp+EAh]
  char v173; // [rsp+16Bh] [rbp+EBh]
  char v174; // [rsp+16Ch] [rbp+ECh]
  char v175; // [rsp+16Dh] [rbp+EDh]
  char v176; // [rsp+16Eh] [rbp+EEh]
  char v177; // [rsp+16Fh] [rbp+EFh]
  __m256i v178; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v179; // [rsp+190h] [rbp+110h]
  __m256i v180; // [rsp+1A0h] [rbp+120h] BYREF
  char v181; // [rsp+1CEh] [rbp+14Eh]
  char v182; // [rsp+1CFh] [rbp+14Fh]
  __m256i v183; // [rsp+1D0h] [rbp+150h] BYREF
  char v184; // [rsp+1FFh] [rbp+17Fh]
  __int64 v185; // [rsp+200h] [rbp+180h]

  v185 = -2; /*0x1409cb5bb*/
  result = *(_QWORD *)(a1 + 72); /*0x1409cb5c9*/
  v158 = *(unsigned int *)(a1 + 168); /*0x1409cb5d3*/
  v4 = *(unsigned __int8 *)(a1 + 172); /*0x1409cb5da*/
  *(_QWORD *)(a1 + 72) = -1; /*0x1409cb5e1*/
  if ( result == -1 ) /*0x1409cb5ed*/
    return result; /*0x1409cb5ed*/
  v148 = result; /*0x1409cb5f6*/
  v159 = *(_QWORD *)(a1 + 80); /*0x1409cb5fe*/
  v6 = *(_QWORD *)(a1 + 88); /*0x1409cb605*/
  v155 = *(_QWORD *)(a1 + 112); /*0x1409cb60d*/
  v154 = *(_OWORD *)(a1 + 96); /*0x1409cb615*/
  v149 = *(_QWORD *)(a1 + 120); /*0x1409cb61d*/
  v153 = *(_QWORD *)(a1 + 128); /*0x1409cb628*/
  v150 = *(_QWORD *)(a1 + 144); /*0x1409cb633*/
  v152 = *(_QWORD *)(a1 + 152); /*0x1409cb63e*/
  LOBYTE(v160) = v4; /*0x1409cb642*/
  if ( (v4 & 1) == 0 ) /*0x1409cb64b*/
  {
    v15 = *(_QWORD *)(a1 + 136); /*0x1409cb79f*/
    *(_QWORD *)v156 = 0; /*0x1409cb7a6*/
    *(_QWORD *)&v156[16] = 0; /*0x1409cb7ae*/
    nullsub_1(v4); /*0x1409cb7b9*/
    v16 = (_DWORD *)sub_140001650(4, 1); /*0x1409cb7c8*/
    if ( !v16 ) /*0x1409cb7d0*/
      sub_1416C2D4B(1, 4); /*0x1409cd436*/
    *v16 = 1701869940; /*0x1409cb7d6*/
    v180.m256i_i64[0] = 4; /*0x1409cb7dc*/
    v180.m256i_i64[1] = (__int64)v16; /*0x1409cb7e7*/
    v180.m256i_i64[2] = 4; /*0x1409cb7ee*/
    nullsub_1(v17); /*0x1409cb7f9*/
    v18 = (void *)sub_140001650(36, 1); /*0x1409cb808*/
    v179 = (__int64)v18; /*0x1409cb810*/
    if ( !v18 ) /*0x1409cb817*/
      sub_1416C2D4B(1, 36); /*0x1409cd460*/
    qmemcpy(v18, "response.reasoning_summary_text.done", 36); /*0x1409cb82f*/
    v183.m256i_i8[0] = 3; /*0x1409cb839*/
    v183.m256i_i64[1] = 36; /*0x1409cb840*/
    v183.m256i_i64[2] = (__int64)v18; /*0x1409cb84b*/
    v183.m256i_i64[3] = 36; /*0x1409cb852*/
    sub_140307860(&v178, v156, &v180, &v183); /*0x1409cb876*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cb883*/
      sub_1400104F0(&v178); /*0x1409cb88c*/
    nullsub_1(v19); /*0x1409cb892*/
    v20 = (void *)sub_140001650(12, 1); /*0x1409cb8a1*/
    if ( !v20 ) /*0x1409cb8a9*/
      sub_1416C2D4B(1, 12); /*0x1409cd48a*/
    qmemcpy(v20, "output_index", 12); /*0x1409cb8b9*/
    v180.m256i_i64[0] = 12; /*0x1409cb8c3*/
    v180.m256i_i64[1] = (__int64)v20; /*0x1409cb8ce*/
    v180.m256i_i64[2] = 12; /*0x1409cb8d5*/
    v183.m256i_i8[0] = 2; /*0x1409cb8e0*/
    v183.m256i_i64[1] = 0; /*0x1409cb8e7*/
    v183.m256i_i64[2] = v158; /*0x1409cb8f9*/
    sub_140307860(&v178, v156, &v180, &v183); /*0x1409cb919*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cb926*/
      sub_1400104F0(&v178); /*0x1409cb92f*/
    nullsub_1(v21); /*0x1409cb935*/
    v22 = (_DWORD *)sub_140001650(7, 1); /*0x1409cb944*/
    if ( !v22 ) /*0x1409cb94c*/
      sub_1416C2D4B(1, 7); /*0x1409cd49f*/
    *(_DWORD *)((char *)v22 + 3) = 1684627309; /*0x1409cb952*/
    *v22 = 1835365481; /*0x1409cb959*/
    v180.m256i_i64[0] = 7; /*0x1409cb95f*/
    v180.m256i_i64[1] = (__int64)v22; /*0x1409cb96a*/
    v180.m256i_i64[2] = 7; /*0x1409cb971*/
    if ( v6 < 0 ) /*0x1409cb97f*/
    {
      v24 = 0; /*0x1409cb981*/
      goto LABEL_21; /*0x1409cb981*/
    }
    v179 = v15; /*0x1409cb9d5*/
    if ( v6 ) /*0x1409cb9dc*/
    {
      nullsub_1(v23); /*0x1409cb9e2*/
      v24 = 1; /*0x1409cb9e7*/
      v28 = sub_140001650(v6, 1); /*0x1409cb9f5*/
      if ( !v28 ) /*0x1409cb9fd*/
      {
LABEL_21:
        v177 = 1; /*0x1409cb984*/
        sub_1416C2D4B(v24, v6); /*0x1409cb991*/
      }
      v29 = v28; /*0x1409cb9ff*/
      sub_141684120(v28, v159, v6); /*0x1409cba0f*/
      v15 = v179; /*0x1409cba14*/
    }
    else
    {
      v29 = 1; /*0x1409cbc26*/
    }
    v183.m256i_i8[0] = 3; /*0x1409cbc2c*/
    v183.m256i_i64[1] = v6; /*0x1409cbc33*/
    v183.m256i_i64[2] = v29; /*0x1409cbc3a*/
    v183.m256i_i64[3] = v6; /*0x1409cbc41*/
    v177 = 0; /*0x1409cbc48*/
    sub_140307860(&v178, v156, &v180, &v183); /*0x1409cbc68*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cbc75*/
      sub_1400104F0(&v178); /*0x1409cbc7e*/
    nullsub_1(v42); /*0x1409cbc84*/
    v43 = (void *)sub_140001650(13, 1); /*0x1409cbc93*/
    if ( !v43 ) /*0x1409cbc9b*/
      sub_1416C2D4B(1, 13); /*0x1409cd4f3*/
    qmemcpy(v43, "summary_index", 13); /*0x1409cbcb9*/
    v180.m256i_i64[0] = 13; /*0x1409cbcbc*/
    v180.m256i_i64[1] = (__int64)v43; /*0x1409cbcc7*/
    v180.m256i_i64[2] = 13; /*0x1409cbcce*/
    v183.m256i_i8[0] = 2; /*0x1409cbcd9*/
    *(_OWORD *)&v183.m256i_u64[1] = 0; /*0x1409cbce3*/
    sub_140307860(&v178, v156, &v180, &v183); /*0x1409cbd03*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cbd10*/
      sub_1400104F0(&v178); /*0x1409cbd19*/
    nullsub_1(v44); /*0x1409cbd1f*/
    v45 = (_DWORD *)sub_140001650(4, 1); /*0x1409cbd2e*/
    if ( !v45 ) /*0x1409cbd36*/
      sub_1416C2D4B(1, 4); /*0x1409cd508*/
    *v45 = 1954047348; /*0x1409cbd3c*/
    v180.m256i_i64[0] = 4; /*0x1409cbd42*/
    v180.m256i_i64[1] = (__int64)v45; /*0x1409cbd4d*/
    v180.m256i_i64[2] = 4; /*0x1409cbd54*/
    if ( v155 < 0 ) /*0x1409cbd66*/
    {
      v47 = 0; /*0x1409cbd68*/
      goto LABEL_52; /*0x1409cbd68*/
    }
    if ( v155 ) /*0x1409cbd83*/
    {
      nullsub_1(v46); /*0x1409cbd90*/
      v47 = 1; /*0x1409cbd95*/
      v48 = sub_140001650(v155, 1); /*0x1409cbda3*/
      if ( !v48 ) /*0x1409cbdab*/
      {
LABEL_52:
        v176 = 1; /*0x1409cbd6b*/
        sub_1416C2D4B(v47, v155); /*0x1409cbd78*/
      }
      v49 = v48; /*0x1409cbdad*/
      sub_141684120(v48, *((_QWORD *)&v154 + 1), v155); /*0x1409cbdb9*/
      v15 = v179; /*0x1409cbdc1*/
    }
    else
    {
      v49 = 1; /*0x1409cc70c*/
    }
    v183.m256i_i8[0] = 3; /*0x1409cc712*/
    v183.m256i_i64[1] = v155; /*0x1409cc719*/
    v183.m256i_i64[2] = v49; /*0x1409cc720*/
    v183.m256i_i64[3] = v155; /*0x1409cc727*/
    v176 = 0; /*0x1409cc72e*/
    sub_140307860(&v178, v156, &v180, &v183); /*0x1409cc751*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cc75e*/
      sub_1400104F0(&v178); /*0x1409cc767*/
    *(_OWORD *)&v183.m256i_u64[1] = *(_OWORD *)v156; /*0x1409cc771*/
    v183.m256i_i64[3] = *(_QWORD *)&v156[16]; /*0x1409cc77f*/
    v183.m256i_i8[0] = 5; /*0x1409cc786*/
    sub_1409C6750((unsigned int)&v178, a1 + 352, (unsigned int)&xmmword_1417A5E38, 36, (__int64)&v183); /*0x1409cc7ad*/
    v92 = v178.m256i_i64[2]; /*0x1409cc7c1*/
    v165 = (_QWORD *)v178.m256i_i64[1]; /*0x1409cc7c1*/
    v93 = a2[2]; /*0x1409cc7cb*/
    if ( v178.m256i_i64[2] > (unsigned __int64)(*a2 - v93) ) /*0x1409cc7d5*/
    {
      sub_141688D30((_DWORD)a2, v93, v178.m256i_i32[4], 1, 1); /*0x1409cd2ef*/
      v93 = a2[2]; /*0x1409cd2f8*/
      v15 = v179; /*0x1409cd2fc*/
    }
    else if ( !v178.m256i_i64[2] ) /*0x1409cc7de*/
    {
      goto LABEL_120; /*0x1409cc7de*/
    }
    sub_141684120(v93 + a2[1], v165, v92); /*0x1409cc7f1*/
LABEL_120:
    v94 = v92 + v93; /*0x1409cc7f6*/
    a2[2] = v94; /*0x1409cc7f9*/
    if ( v178.m256i_i64[0] ) /*0x1409cc807*/
      sub_140001660(v165, v178.m256i_i64[0], 1); /*0x1409cc816*/
    sub_1400104F0(&v183); /*0x1409cc823*/
    *(_QWORD *)&v161 = 0; /*0x1409cc833*/
    v162 = 0; /*0x1409cc83e*/
    nullsub_1(v95); /*0x1409cc849*/
    v96 = (_DWORD *)sub_140001650(4, 1); /*0x1409cc858*/
    if ( !v96 ) /*0x1409cc860*/
      sub_1416C2D4B(1, 4); /*0x1409cd55c*/
    *v96 = 1701869940; /*0x1409cc866*/
    v180.m256i_i64[0] = 4; /*0x1409cc86c*/
    v180.m256i_i64[1] = (__int64)v96; /*0x1409cc877*/
    v180.m256i_i64[2] = 4; /*0x1409cc87e*/
    nullsub_1(v97); /*0x1409cc889*/
    v98 = (_QWORD *)sub_140001650(36, 1); /*0x1409cc898*/
    v165 = v98; /*0x1409cc8a0*/
    if ( !v98 ) /*0x1409cc8a7*/
      sub_1416C2D4B(1, 36); /*0x1409cd571*/
    qmemcpy(v98, "response.reasoning_summary_part.done", 36); /*0x1409cc8bf*/
    v183.m256i_i8[0] = 3; /*0x1409cc8c9*/
    v183.m256i_i64[1] = 36; /*0x1409cc8d0*/
    v183.m256i_i64[2] = (__int64)v98; /*0x1409cc8db*/
    v183.m256i_i64[3] = 36; /*0x1409cc8e2*/
    sub_140307860(&v178, &v161, &v180, &v183); /*0x1409cc909*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cc916*/
      sub_1400104F0(&v178); /*0x1409cc91f*/
    nullsub_1(v99); /*0x1409cc925*/
    v100 = (void *)sub_140001650(12, 1); /*0x1409cc934*/
    if ( !v100 ) /*0x1409cc93c*/
      sub_1416C2D4B(1, 12); /*0x1409cd586*/
    qmemcpy(v100, "output_index", 12); /*0x1409cc942*/
    v180.m256i_i64[0] = 12; /*0x1409cc94c*/
    v180.m256i_i64[1] = (__int64)v100; /*0x1409cc957*/
    v180.m256i_i64[2] = 12; /*0x1409cc95e*/
    v183.m256i_i8[0] = 2; /*0x1409cc969*/
    v183.m256i_i64[1] = 0; /*0x1409cc970*/
    v183.m256i_i64[2] = v158; /*0x1409cc982*/
    sub_140307860(&v178, &v161, &v180, &v183); /*0x1409cc9a5*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cc9b2*/
      sub_1400104F0(&v178); /*0x1409cc9bb*/
    nullsub_1(v101); /*0x1409cc9c1*/
    v102 = 1; /*0x1409cc9c6*/
    v103 = (_DWORD *)sub_140001650(7, 1); /*0x1409cc9d6*/
    if ( !v103 ) /*0x1409cc9de*/
      sub_1416C2D4B(1, 7); /*0x1409cd59b*/
    *(_DWORD *)((char *)v103 + 3) = 1684627309; /*0x1409cc9e4*/
    *v103 = 1835365481; /*0x1409cc9eb*/
    v180.m256i_i64[0] = 7; /*0x1409cc9f1*/
    v180.m256i_i64[1] = (__int64)v103; /*0x1409cc9fc*/
    v180.m256i_i64[2] = 7; /*0x1409cca03*/
    if ( v6 ) /*0x1409cca11*/
    {
      nullsub_1(v104); /*0x1409cca13*/
      v105 = sub_140001650(v6, 1); /*0x1409cca20*/
      if ( !v105 ) /*0x1409cca28*/
      {
        v175 = 1; /*0x1409cd678*/
        sub_1416C2D4B(1, v6); /*0x1409cd687*/
      }
      v102 = v105; /*0x1409cca2e*/
      sub_141684120(v105, v159, v6); /*0x1409cca3e*/
    }
    v183.m256i_i8[0] = 3; /*0x1409cca43*/
    v183.m256i_i64[1] = v6; /*0x1409cca4a*/
    v183.m256i_i64[2] = v102; /*0x1409cca51*/
    v183.m256i_i64[3] = v6; /*0x1409cca58*/
    v175 = 0; /*0x1409cca5f*/
    sub_140307860(&v178, &v161, &v180, &v183); /*0x1409cca82*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cca8f*/
      sub_1400104F0(&v178); /*0x1409cca98*/
    nullsub_1(v106); /*0x1409cca9e*/
    v107 = (void *)sub_140001650(13, 1); /*0x1409ccaad*/
    if ( !v107 ) /*0x1409ccab5*/
      sub_1416C2D4B(1, 13); /*0x1409cd5b0*/
    qmemcpy(v107, "summary_index", 13); /*0x1409ccad3*/
    v180.m256i_i64[0] = 13; /*0x1409ccad6*/
    v180.m256i_i64[1] = (__int64)v107; /*0x1409ccae1*/
    v180.m256i_i64[2] = 13; /*0x1409ccae8*/
    v183.m256i_i8[0] = 2; /*0x1409ccaf3*/
    *(_OWORD *)&v183.m256i_u64[1] = 0; /*0x1409ccafd*/
    sub_140307860(&v178, &v161, &v180, &v183); /*0x1409ccb20*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409ccb2d*/
      sub_1400104F0(&v178); /*0x1409ccb36*/
    nullsub_1(v108); /*0x1409ccb3c*/
    v109 = (_DWORD *)sub_140001650(4, 1); /*0x1409ccb4b*/
    if ( !v109 ) /*0x1409ccb53*/
      sub_1416C2D4B(1, 4); /*0x1409cd5c5*/
    *v109 = 1953653104; /*0x1409ccb59*/
    *(_QWORD *)&v163 = 4; /*0x1409ccb5f*/
    *((_QWORD *)&v163 + 1) = v109; /*0x1409ccb6a*/
    v164 = 4; /*0x1409ccb71*/
    *(_QWORD *)v156 = 0; /*0x1409ccb7c*/
    *(_QWORD *)&v156[16] = 0; /*0x1409ccb84*/
    nullsub_1(v110); /*0x1409ccb8f*/
    v111 = (_DWORD *)sub_140001650(4, 1); /*0x1409ccb9e*/
    if ( !v111 ) /*0x1409ccba6*/
      sub_1416C2D4B(1, 4); /*0x1409cd5da*/
    *v111 = 1701869940; /*0x1409ccbac*/
    v180.m256i_i64[0] = 4; /*0x1409ccbb2*/
    v180.m256i_i64[1] = (__int64)v111; /*0x1409ccbbd*/
    v180.m256i_i64[2] = 4; /*0x1409ccbc4*/
    nullsub_1(v112); /*0x1409ccbcf*/
    v113 = (_QWORD *)sub_140001650(12, 1); /*0x1409ccbde*/
    v165 = v113; /*0x1409ccbe6*/
    if ( !v113 ) /*0x1409ccbed*/
      sub_1416C2D4B(1, 12); /*0x1409cd5ef*/
    qmemcpy(v113, "summary_text", 12); /*0x1409ccc00*/
    v183.m256i_i8[0] = 3; /*0x1409ccc0b*/
    v183.m256i_i64[1] = 12; /*0x1409ccc12*/
    v183.m256i_i64[2] = (__int64)v113; /*0x1409ccc1d*/
    v183.m256i_i64[3] = 12; /*0x1409ccc24*/
    sub_140307860(&v178, v156, &v180, &v183); /*0x1409ccc48*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409ccc55*/
      sub_1400104F0(&v178); /*0x1409ccc5e*/
    nullsub_1(v114); /*0x1409ccc64*/
    v115 = (_DWORD *)sub_140001650(4, 1); /*0x1409ccc73*/
    if ( !v115 ) /*0x1409ccc7b*/
      sub_1416C2D4B(1, 4); /*0x1409cd604*/
    *v115 = 1954047348; /*0x1409ccc81*/
    v180.m256i_i64[0] = 4; /*0x1409ccc87*/
    v180.m256i_i64[1] = (__int64)v115; /*0x1409ccc92*/
    v180.m256i_i64[2] = 4; /*0x1409ccc99*/
    if ( v155 < 0 ) /*0x1409cccab*/
    {
      v117 = 0; /*0x1409cccad*/
      goto LABEL_146; /*0x1409cccad*/
    }
    v165 = a2; /*0x1409cccc7*/
    if ( v155 ) /*0x1409cccce*/
    {
      nullsub_1(v116); /*0x1409cccd4*/
      v117 = 1; /*0x1409cccd9*/
      v118 = sub_140001650(v155, 1); /*0x1409ccce6*/
      if ( !v118 ) /*0x1409cccee*/
      {
LABEL_146:
        v174 = 1; /*0x1409cccaf*/
        sub_1416C2D4B(v117, v155); /*0x1409cccbc*/
      }
      v119 = v118; /*0x1409cccf0*/
      sub_141684120(v118, *((_QWORD *)&v154 + 1), v155); /*0x1409cccfc*/
      v15 = v179; /*0x1409ccd01*/
    }
    else
    {
      v119 = 1; /*0x1409ccd0a*/
    }
    v183.m256i_i8[0] = 3; /*0x1409ccd10*/
    v183.m256i_i64[1] = v155; /*0x1409ccd17*/
    v183.m256i_i64[2] = v119; /*0x1409ccd1e*/
    v183.m256i_i64[3] = v155; /*0x1409ccd25*/
    v174 = 0; /*0x1409ccd2c*/
    sub_140307860(&v178, v156, &v180, &v183); /*0x1409ccd4c*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409ccd59*/
      sub_1400104F0(&v178); /*0x1409ccd62*/
    *(_OWORD *)&v183.m256i_u64[1] = *(_OWORD *)v156; /*0x1409ccd6c*/
    v183.m256i_i64[3] = *(_QWORD *)&v156[16]; /*0x1409ccd7a*/
    v183.m256i_i8[0] = 5; /*0x1409ccd81*/
    v173 = 0; /*0x1409ccd88*/
    sub_140307860(&v178, &v161, &v163, &v183); /*0x1409ccdae*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409ccdbb*/
      sub_1400104F0(&v178); /*0x1409ccdc4*/
    *(_OWORD *)&v183.m256i_u64[1] = v161; /*0x1409ccdd1*/
    v183.m256i_i64[3] = v162; /*0x1409ccddf*/
    v183.m256i_i8[0] = 5; /*0x1409ccde6*/
    sub_1409C6750((unsigned int)&v178, a1 + 352, (unsigned int)&xmmword_1417A6450, 36, (__int64)&v183); /*0x1409cce0d*/
    v121 = v178.m256i_i64[2]; /*0x1409cce1a*/
    v120 = v178.m256i_i64[1]; /*0x1409cce1a*/
    if ( v178.m256i_i64[2] > (unsigned __int64)(*v165 - v94) ) /*0x1409cce31*/
    {
      v151 = v178.m256i_i64[1]; /*0x1409cd3d6*/
      sub_141688D30((_DWORD)v165, v94, v178.m256i_i32[4], 1, 1); /*0x1409cd3f6*/
      v122 = v165; /*0x1409cd3fc*/
      v94 = v165[2]; /*0x1409cd403*/
      v15 = v179; /*0x1409cd407*/
      v120 = v151; /*0x1409cd40e*/
    }
    else
    {
      v122 = v165; /*0x1409cce3a*/
      if ( !v178.m256i_i64[2] ) /*0x1409cce41*/
        goto LABEL_158; /*0x1409cce41*/
    }
    sub_141684120(v94 + v122[1], v120, v121); /*0x1409cce50*/
LABEL_158:
    v122[2] = v121 + v94; /*0x1409cce55*/
    if ( v178.m256i_i64[0] ) /*0x1409cce66*/
      sub_140001660(v120, v178.m256i_i64[0], 1); /*0x1409cce71*/
    sub_1400104F0(&v183); /*0x1409cce7e*/
    *(_QWORD *)&v161 = 0; /*0x1409cce84*/
    v162 = 0; /*0x1409cce8f*/
    nullsub_1(v123); /*0x1409cce9a*/
    v124 = (_DWORD *)sub_140001650(4, 1); /*0x1409ccea9*/
    if ( !v124 ) /*0x1409cceb1*/
      sub_1416C2D4B(1, 4); /*0x1409cd6b3*/
    *v124 = 1701869940; /*0x1409cceb7*/
    v180.m256i_i64[0] = 4; /*0x1409ccebd*/
    v180.m256i_i64[1] = (__int64)v124; /*0x1409ccec8*/
    v180.m256i_i64[2] = 4; /*0x1409ccecf*/
    nullsub_1(v125); /*0x1409cceda*/
    v126 = (_QWORD *)sub_140001650(8, 1); /*0x1409ccee9*/
    v179 = (__int64)v126; /*0x1409ccef1*/
    if ( !v126 ) /*0x1409ccef8*/
      sub_1416C2D4B(1, 8); /*0x1409cd6c5*/
    *v126 = 0x676E696B6E696874LL; /*0x1409ccf08*/
    v183.m256i_i8[0] = 3; /*0x1409ccf0b*/
    v183.m256i_i64[1] = 8; /*0x1409ccf12*/
    v183.m256i_i64[2] = (__int64)v126; /*0x1409ccf1d*/
    v183.m256i_i64[3] = 8; /*0x1409ccf24*/
    sub_140307860(&v178, &v161, &v180, &v183); /*0x1409ccf4b*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409ccf58*/
      sub_1400104F0(&v178); /*0x1409ccf61*/
    nullsub_1(v127); /*0x1409ccf67*/
    v128 = (_QWORD *)sub_140001650(8, 1); /*0x1409ccf76*/
    if ( !v128 ) /*0x1409ccf7e*/
      sub_1416C2D4B(1, 8); /*0x1409cd6d7*/
    *v128 = 0x676E696B6E696874LL; /*0x1409ccf84*/
    *(_QWORD *)&v163 = 8; /*0x1409ccf87*/
    v179 = (__int64)v128; /*0x1409ccf92*/
    *((_QWORD *)&v163 + 1) = v128; /*0x1409ccf99*/
    v164 = 8; /*0x1409ccfa0*/
    sub_14149C500(&v180, &v154); /*0x1409ccfb6*/
    v130 = *(_OWORD *)&v180.m256i_u64[1]; /*0x1409ccfc3*/
    v179 = v180.m256i_i64[1]; /*0x1409ccfcd*/
    if ( v180.m256i_i64[2] < 0 ) /*0x1409ccfd4*/
    {
      v131 = 0; /*0x1409ccfd6*/
      goto LABEL_167; /*0x1409ccfd6*/
    }
    if ( v180.m256i_i64[2] ) /*0x1409ccff0*/
    {
      nullsub_1(v129); /*0x1409ccff2*/
      v131 = 1; /*0x1409ccff7*/
      v132 = sub_140001650(*((_QWORD *)&v130 + 1), 1); /*0x1409cd004*/
      if ( !v132 ) /*0x1409cd00c*/
      {
LABEL_167:
        v172 = 1; /*0x1409ccfd8*/
        sub_1416C2D4B(v131, *((_QWORD *)&v130 + 1)); /*0x1409ccfe5*/
      }
      v133 = v132; /*0x1409cd00e*/
      sub_141684120(v132, v130, *((_QWORD *)&v130 + 1)); /*0x1409cd01a*/
    }
    else
    {
      v133 = 1; /*0x1409cd060*/
    }
    v183.m256i_i8[0] = 3; /*0x1409cd066*/
    v183.m256i_i64[1] = *((_QWORD *)&v130 + 1); /*0x1409cd06d*/
    v183.m256i_i64[2] = v133; /*0x1409cd074*/
    v183.m256i_i64[3] = *((_QWORD *)&v130 + 1); /*0x1409cd07b*/
    v172 = 0; /*0x1409cd082*/
    sub_140307860(&v178, &v161, &v163, &v183); /*0x1409cd0a5*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cd0b2*/
      sub_1400104F0(&v178); /*0x1409cd0bb*/
    if ( v180.m256i_i64[0] ) /*0x1409cd0cb*/
      sub_140001660(v179, v180.m256i_i64[0], 1); /*0x1409cd0da*/
    nullsub_1(v137); /*0x1409cd0df*/
    v138 = sub_140001650(9, 1); /*0x1409cd0ee*/
    if ( !v138 ) /*0x1409cd0f6*/
      sub_1416C2D4B(1, 9); /*0x1409cd71f*/
    *(_QWORD *)v138 = 0x727574616E676973LL; /*0x1409cd106*/
    *(_BYTE *)(v138 + 8) = 101; /*0x1409cd109*/
    v180.m256i_i64[0] = 9; /*0x1409cd10d*/
    v180.m256i_i64[1] = v138; /*0x1409cd118*/
    v180.m256i_i64[2] = 9; /*0x1409cd11f*/
    if ( v15 < 0 ) /*0x1409cd12d*/
    {
      v139 = 0; /*0x1409cd12f*/
      goto LABEL_182; /*0x1409cd12f*/
    }
    if ( v15 ) /*0x1409cd149*/
    {
      nullsub_1(0x727574616E676973LL); /*0x1409cd14f*/
      v139 = 1; /*0x1409cd154*/
      v140 = sub_140001650(v15, 1); /*0x1409cd161*/
      if ( !v140 ) /*0x1409cd169*/
      {
LABEL_182:
        v171 = 1; /*0x1409cd131*/
        sub_1416C2D4B(v139, v15); /*0x1409cd13e*/
      }
      v141 = v140; /*0x1409cd16b*/
      sub_141684120(v140, v153, v15); /*0x1409cd178*/
    }
    else
    {
      v141 = 1; /*0x1409cd255*/
    }
    v183.m256i_i8[0] = 3; /*0x1409cd25b*/
    v183.m256i_i64[1] = v15; /*0x1409cd262*/
    v183.m256i_i64[2] = v141; /*0x1409cd269*/
    v183.m256i_i64[3] = v15; /*0x1409cd270*/
    v171 = 0; /*0x1409cd277*/
    sub_140307860(&v178, &v161, &v180, &v183); /*0x1409cd29a*/
    v30 = v165; /*0x1409cd2a7*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cd2ae*/
      sub_1400104F0(&v178); /*0x1409cd2b7*/
    *(_OWORD *)&v156[8] = v161; /*0x1409cd2c4*/
    v31 = v162; /*0x1409cd2c8*/
    goto LABEL_32; /*0x1409cd2cf*/
  }
  v7 = *(_QWORD *)(a1 + 160); /*0x1409cb651*/
  *(_QWORD *)&v163 = 0; /*0x1409cb658*/
  v164 = 0; /*0x1409cb663*/
  nullsub_1(v4); /*0x1409cb66e*/
  v8 = (_DWORD *)sub_140001650(4, 1); /*0x1409cb67d*/
  if ( !v8 ) /*0x1409cb685*/
    sub_1416C2D4B(1, 4); /*0x1409cd421*/
  *v8 = 1701869940; /*0x1409cb68b*/
  v180.m256i_i64[0] = 4; /*0x1409cb691*/
  v180.m256i_i64[1] = (__int64)v8; /*0x1409cb69c*/
  v180.m256i_i64[2] = 4; /*0x1409cb6a3*/
  nullsub_1(v9); /*0x1409cb6ae*/
  v10 = sub_140001650(17, 1); /*0x1409cb6bd*/
  v179 = v10; /*0x1409cb6c5*/
  if ( !v10 ) /*0x1409cb6cc*/
    sub_1416C2D4B(1, 17); /*0x1409cd44b*/
  *(_OWORD *)v10 = *(_OWORD *)aRedactedThinki; /*0x1409cb6d9*/
  *(_BYTE *)(v10 + 16) = 103; /*0x1409cb6dc*/
  v183.m256i_i8[0] = 3; /*0x1409cb6e0*/
  v183.m256i_i64[1] = 17; /*0x1409cb6e7*/
  v183.m256i_i64[2] = v10; /*0x1409cb6f2*/
  v183.m256i_i64[3] = 17; /*0x1409cb6f9*/
  sub_140307860(&v178, &v163, &v180, &v183); /*0x1409cb720*/
  if ( v178.m256i_i8[0] != -1 ) /*0x1409cb72d*/
    sub_1400104F0(&v178); /*0x1409cb736*/
  nullsub_1(v11); /*0x1409cb73c*/
  v12 = (_DWORD *)sub_140001650(4, 1); /*0x1409cb74b*/
  if ( !v12 ) /*0x1409cb753*/
    sub_1416C2D4B(1, 4); /*0x1409cd475*/
  *v12 = 1635017060; /*0x1409cb759*/
  v180.m256i_i64[0] = 4; /*0x1409cb75f*/
  v180.m256i_i64[1] = (__int64)v12; /*0x1409cb76a*/
  v180.m256i_i64[2] = 4; /*0x1409cb771*/
  if ( v7 < 0 ) /*0x1409cb77f*/
  {
    v14 = 0; /*0x1409cb785*/
    goto LABEL_10; /*0x1409cb785*/
  }
  v25 = a2; /*0x1409cb99c*/
  if ( v7 ) /*0x1409cb99f*/
  {
    nullsub_1(v13); /*0x1409cb9a1*/
    v14 = 1; /*0x1409cb9a6*/
    v26 = sub_140001650(v7, 1); /*0x1409cb9b3*/
    if ( !v26 ) /*0x1409cb9bb*/
    {
LABEL_10:
      v170 = 1; /*0x1409cb787*/
      sub_1416C2D4B(v14, v7); /*0x1409cb794*/
    }
    v27 = v26; /*0x1409cb9c1*/
    sub_141684120(v26, v152, v7); /*0x1409cb9ce*/
  }
  else
  {
    v27 = 1; /*0x1409cba20*/
  }
  v183.m256i_i8[0] = 3; /*0x1409cba26*/
  v183.m256i_i64[1] = v7; /*0x1409cba2d*/
  v183.m256i_i64[2] = v27; /*0x1409cba34*/
  v183.m256i_i64[3] = v7; /*0x1409cba3b*/
  v170 = 0; /*0x1409cba42*/
  sub_140307860(&v178, &v163, &v180, &v183); /*0x1409cba65*/
  v30 = v25; /*0x1409cba72*/
  if ( v178.m256i_i8[0] != -1 ) /*0x1409cba75*/
    sub_1400104F0(&v178); /*0x1409cba7e*/
  *(_OWORD *)&v156[8] = v163; /*0x1409cba8b*/
  v31 = v164; /*0x1409cba8f*/
LABEL_32:
  v157 = v31; /*0x1409cba96*/
  v156[0] = 5; /*0x1409cba9d*/
  encode_anthropic_thinking_payload(&v144, v156); /*0x1409cbaa9*/
  *(_QWORD *)&v146 = 0; /*0x1409cbaaf*/
  v147 = 0; /*0x1409cbab7*/
  nullsub_1(v32); /*0x1409cbabf*/
  v33 = (_DWORD *)sub_140001650(4, 1); /*0x1409cbace*/
  if ( !v33 ) /*0x1409cbad6*/
    sub_1416C2D4B(1, 4); /*0x1409cd4b4*/
  *v33 = 1701869940; /*0x1409cbadc*/
  v180.m256i_i64[0] = 4; /*0x1409cbae2*/
  v180.m256i_i64[1] = (__int64)v33; /*0x1409cbaed*/
  v180.m256i_i64[2] = 4; /*0x1409cbaf4*/
  nullsub_1(v34); /*0x1409cbaff*/
  v35 = sub_140001650(9, 1); /*0x1409cbb0e*/
  v179 = v35; /*0x1409cbb16*/
  if ( !v35 ) /*0x1409cbb1d*/
    sub_1416C2D4B(1, 9); /*0x1409cd4c9*/
  *(_QWORD *)v35 = 0x6E696E6F73616572LL; /*0x1409cbb2d*/
  *(_BYTE *)(v35 + 8) = 103; /*0x1409cbb30*/
  v183.m256i_i8[0] = 3; /*0x1409cbb34*/
  v183.m256i_i64[1] = 9; /*0x1409cbb3b*/
  v183.m256i_i64[2] = v35; /*0x1409cbb46*/
  v183.m256i_i64[3] = 9; /*0x1409cbb4d*/
  sub_140307860(&v178, &v146, &v180, &v183); /*0x1409cbb70*/
  if ( v178.m256i_i8[0] != -1 ) /*0x1409cbb7d*/
    sub_1400104F0(&v178); /*0x1409cbb86*/
  nullsub_1(v36); /*0x1409cbb8c*/
  v37 = (_WORD *)sub_140001650(2, 1); /*0x1409cbb9b*/
  if ( !v37 ) /*0x1409cbba3*/
    sub_1416C2D4B(1, 2); /*0x1409cd4de*/
  *v37 = 25705; /*0x1409cbba9*/
  v180.m256i_i64[0] = 2; /*0x1409cbbae*/
  v180.m256i_i64[1] = (__int64)v37; /*0x1409cbbb9*/
  v180.m256i_i64[2] = 2; /*0x1409cbbc0*/
  if ( v6 < 0 ) /*0x1409cbbce*/
  {
    v39 = 0; /*0x1409cbbd0*/
    goto LABEL_39; /*0x1409cbbd0*/
  }
  if ( v6 ) /*0x1409cbbea*/
  {
    nullsub_1(v38); /*0x1409cbbf0*/
    v39 = 1; /*0x1409cbbf5*/
    v40 = sub_140001650(v6, 1); /*0x1409cbc02*/
    if ( !v40 ) /*0x1409cbc0a*/
    {
LABEL_39:
      v169 = 1; /*0x1409cbbd2*/
      sub_1416C2D4B(v39, v6); /*0x1409cbbdf*/
    }
    v41 = v40; /*0x1409cbc0c*/
    sub_141684120(v40, v159, v6); /*0x1409cbc1c*/
  }
  else
  {
    v41 = 1; /*0x1409cbdcd*/
  }
  v183.m256i_i8[0] = 3; /*0x1409cbdd3*/
  v183.m256i_i64[1] = v6; /*0x1409cbdda*/
  v183.m256i_i64[2] = v41; /*0x1409cbde1*/
  v183.m256i_i64[3] = v6; /*0x1409cbde8*/
  v169 = 0; /*0x1409cbdef*/
  sub_140307860(&v178, &v146, &v180, &v183); /*0x1409cbe0e*/
  if ( v178.m256i_i8[0] != -1 ) /*0x1409cbe1b*/
    sub_1400104F0(&v178); /*0x1409cbe24*/
  nullsub_1(v50); /*0x1409cbe2a*/
  v51 = sub_140001650(6, 1); /*0x1409cbe39*/
  if ( !v51 ) /*0x1409cbe41*/
    sub_1416C2D4B(1, 6); /*0x1409cd51d*/
  *(_WORD *)(v51 + 4) = 29557; /*0x1409cbe47*/
  *(_DWORD *)v51 = 1952543859; /*0x1409cbe4d*/
  v180.m256i_i64[0] = 6; /*0x1409cbe53*/
  v180.m256i_i64[1] = v51; /*0x1409cbe5e*/
  v180.m256i_i64[2] = 6; /*0x1409cbe65*/
  nullsub_1(v52); /*0x1409cbe70*/
  v53 = sub_140001650(9, 1); /*0x1409cbe7f*/
  v179 = v53; /*0x1409cbe87*/
  if ( !v53 ) /*0x1409cbe8e*/
    sub_1416C2D4B(1, 9); /*0x1409cd532*/
  *(_QWORD *)v53 = 0x6574656C706D6F63LL; /*0x1409cbe9e*/
  *(_BYTE *)(v53 + 8) = 100; /*0x1409cbea1*/
  v183.m256i_i8[0] = 3; /*0x1409cbea5*/
  v183.m256i_i64[1] = 9; /*0x1409cbeac*/
  v183.m256i_i64[2] = v53; /*0x1409cbeb7*/
  v183.m256i_i64[3] = 9; /*0x1409cbebe*/
  sub_140307860(&v178, &v146, &v180, &v183); /*0x1409cbee1*/
  if ( v178.m256i_i8[0] != -1 ) /*0x1409cbeee*/
    sub_1400104F0(&v178); /*0x1409cbef7*/
  nullsub_1(v54); /*0x1409cbefd*/
  v55 = (_DWORD *)sub_140001650(7, 1); /*0x1409cbf0c*/
  if ( !v55 ) /*0x1409cbf14*/
    sub_1416C2D4B(1, 7); /*0x1409cd547*/
  *(_DWORD *)((char *)v55 + 3) = 2037539181; /*0x1409cbf1a*/
  *v55 = 1835890035; /*0x1409cbf21*/
  v143[0] = 7; /*0x1409cbf27*/
  v143[1] = v55; /*0x1409cbf2f*/
  v143[2] = 7; /*0x1409cbf33*/
  *((_QWORD *)&v57 + 1) = 8; /*0x1409cbf3b*/
  if ( (v160 & 1) != 0 || !v155 ) /*0x1409cbf52*/
  {
    *(_QWORD *)&v57 = 0; /*0x1409cc103*/
  }
  else
  {
    v58 = v55; /*0x1409cbf58*/
    nullsub_1(v56); /*0x1409cbf5b*/
    v59 = sub_140001650(32, 8); /*0x1409cbf6a*/
    v165 = v58; /*0x1409cbf72*/
    if ( !v59 ) /*0x1409cbf79*/
      sub_1416C2D31(8, 32); /*0x1409cd3cb*/
    v61 = v59; /*0x1409cbf7f*/
    *(_QWORD *)&v161 = 0; /*0x1409cbf82*/
    v162 = 0; /*0x1409cbf8d*/
    nullsub_1(v60); /*0x1409cbf98*/
    v62 = (_DWORD *)sub_140001650(4, 1); /*0x1409cbfa7*/
    v160 = v61; /*0x1409cbfaf*/
    if ( !v62 ) /*0x1409cbfb6*/
      sub_1416C2D4B(1, 4); /*0x1409cd6e9*/
    *v62 = 1701869940; /*0x1409cbfbc*/
    v180.m256i_i64[0] = 4; /*0x1409cbfc2*/
    v180.m256i_i64[1] = (__int64)v62; /*0x1409cbfcd*/
    v180.m256i_i64[2] = 4; /*0x1409cbfd4*/
    nullsub_1(v63); /*0x1409cbfdf*/
    v64 = (void *)sub_140001650(12, 1); /*0x1409cbfee*/
    v179 = (__int64)v64; /*0x1409cbff6*/
    if ( !v64 ) /*0x1409cbffd*/
      sub_1416C2D4B(1, 12); /*0x1409cd6fb*/
    qmemcpy(v64, "summary_text", 12); /*0x1409cc00d*/
    v183.m256i_i8[0] = 3; /*0x1409cc017*/
    v183.m256i_i64[1] = 12; /*0x1409cc01e*/
    v183.m256i_i64[2] = (__int64)v64; /*0x1409cc029*/
    v183.m256i_i64[3] = 12; /*0x1409cc030*/
    sub_140307860(&v178, &v161, &v180, &v183); /*0x1409cc057*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cc064*/
      sub_1400104F0(&v178); /*0x1409cc06d*/
    nullsub_1(v65); /*0x1409cc073*/
    v66 = (_DWORD *)sub_140001650(4, 1); /*0x1409cc082*/
    if ( !v66 ) /*0x1409cc08a*/
      sub_1416C2D4B(1, 4); /*0x1409cd70d*/
    *v66 = 1954047348; /*0x1409cc090*/
    *(_QWORD *)&v163 = 4; /*0x1409cc096*/
    v179 = (__int64)v66; /*0x1409cc0a1*/
    *((_QWORD *)&v163 + 1) = v66; /*0x1409cc0a8*/
    v164 = 4; /*0x1409cc0af*/
    sub_14149C500(&v180, &v154); /*0x1409cc0c5*/
    v68 = *(_OWORD *)&v180.m256i_u64[1]; /*0x1409cc0d2*/
    v179 = v180.m256i_i64[1]; /*0x1409cc0dc*/
    if ( v180.m256i_i64[2] < 0 ) /*0x1409cc0e3*/
    {
      v69 = 0; /*0x1409cc0e9*/
      goto LABEL_74; /*0x1409cc0e9*/
    }
    v134 = v30; /*0x1409cd021*/
    if ( v180.m256i_i64[2] ) /*0x1409cd024*/
    {
      nullsub_1(v67); /*0x1409cd02a*/
      v69 = 1; /*0x1409cd02f*/
      v135 = sub_140001650(*((_QWORD *)&v68 + 1), 1); /*0x1409cd03c*/
      if ( !v135 ) /*0x1409cd044*/
      {
LABEL_74:
        v168 = 1; /*0x1409cc0eb*/
        sub_1416C2D4B(v69, *((_QWORD *)&v68 + 1)); /*0x1409cc0f8*/
      }
      v136 = v135; /*0x1409cd04a*/
      sub_141684120(v135, v68, *((_QWORD *)&v68 + 1)); /*0x1409cd056*/
    }
    else
    {
      v136 = 1; /*0x1409cd182*/
    }
    v183.m256i_i8[0] = 3; /*0x1409cd188*/
    v183.m256i_i64[1] = *((_QWORD *)&v68 + 1); /*0x1409cd18f*/
    v183.m256i_i64[2] = v136; /*0x1409cd196*/
    v183.m256i_i64[3] = *((_QWORD *)&v68 + 1); /*0x1409cd19d*/
    v168 = 0; /*0x1409cd1a4*/
    sub_140307860(&v178, &v161, &v163, &v183); /*0x1409cd1c7*/
    v30 = v134; /*0x1409cd1d4*/
    if ( v178.m256i_i8[0] != -1 ) /*0x1409cd1d7*/
      sub_1400104F0(&v178); /*0x1409cd1e0*/
    if ( v180.m256i_i64[0] ) /*0x1409cd1f0*/
      sub_140001660(v179, v180.m256i_i64[0], 1); /*0x1409cd1ff*/
    *(_OWORD *)((char *)&v183.m256i_u32[1] + 3) = v161; /*0x1409cd212*/
    *(__int64 *)((char *)&v183.m256i_i64[2] + 7) = v162; /*0x1409cd219*/
    *((_QWORD *)&v57 + 1) = v160; /*0x1409cd220*/
    *(_BYTE *)v160 = 5; /*0x1409cd227*/
    *(_QWORD *)&v57 = *(__int64 *)((char *)&v183.m256i_i64[1] + 7); /*0x1409cd231*/
    v142 = *(__int64 *)((char *)&v183.m256i_i64[2] + 7); /*0x1409cd238*/
    *(_OWORD *)(*((_QWORD *)&v57 + 1) + 1LL) = *(_OWORD *)v183.m256i_i8; /*0x1409cd23f*/
    *(_QWORD *)(*((_QWORD *)&v57 + 1) + 16LL) = v57; /*0x1409cd243*/
    *(_QWORD *)(*((_QWORD *)&v57 + 1) + 24LL) = v142; /*0x1409cd247*/
    *(_QWORD *)&v57 = 1; /*0x1409cd24b*/
  }
  *(_OWORD *)&v183.m256i_u64[1] = v57; /*0x1409cc105*/
  v183.m256i_i64[3] = v57; /*0x1409cc113*/
  v183.m256i_i8[0] = 4; /*0x1409cc11a*/
  v182 = 1; /*0x1409cc121*/
  sub_140B842D0(&v178, &v183); /*0x1409cc136*/
  if ( v178.m256i_i8[0] == -1 ) /*0x1409cc143*/
  {
    v180.m256i_i64[0] = v178.m256i_i64[1]; /*0x1409cd30f*/
    sub_1416C3060( /*0x1409cd33c*/
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v180,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A6488);
  }
  v180 = v178; /*0x1409cc157*/
  v182 = 0; /*0x1409cc165*/
  sub_140307860(&v178, &v146, v143, &v180); /*0x1409cc181*/
  if ( v178.m256i_i8[0] != -1 ) /*0x1409cc18e*/
    sub_1400104F0(&v178); /*0x1409cc197*/
  sub_1400104F0(&v183); /*0x1409cc1a4*/
  *(_OWORD *)&v180.m256i_u64[1] = v146; /*0x1409cc1ae*/
  v180.m256i_i64[3] = v147; /*0x1409cc1b9*/
  v180.m256i_i8[0] = 5; /*0x1409cc1c0*/
  v179 = v144; /*0x1409cc1cb*/
  LOBYTE(v165) = (_QWORD)v144 == -1; /*0x1409cc1d6*/
  if ( (_QWORD)v144 != -1 ) /*0x1409cc1dd*/
  {
    v183.m256i_i64[3] = v145; /*0x1409cc1e3*/
    *(_OWORD *)&v183.m256i_u64[1] = v144; /*0x1409cc1ee*/
    v183.m256i_i8[0] = 3; /*0x1409cc1f5*/
    v167 = 1; /*0x1409cc1fc*/
    v160 = sub_141433E50(aEncryptedConte_0, 17, &v180); /*0x1409cc21c*/
    sub_1400104F0(v160); /*0x1409cc226*/
    v71 = *(_OWORD *)v183.m256i_i8; /*0x1409cc22c*/
    v72 = (_OWORD *)v160; /*0x1409cc23a*/
    *(_OWORD *)(v160 + 16) = *(_OWORD *)&v183.m256i_u64[2]; /*0x1409cc241*/
    *v72 = v71; /*0x1409cc245*/
  }
  *(_QWORD *)&v161 = 0; /*0x1409cc248*/
  v162 = 0; /*0x1409cc253*/
  nullsub_1(v70); /*0x1409cc25e*/
  v73 = (_DWORD *)sub_140001650(4, 1); /*0x1409cc26d*/
  if ( !v73 ) /*0x1409cc275*/
    sub_1416C2D4B(1, 4); /*0x1409cd619*/
  *v73 = 1701869940; /*0x1409cc27b*/
  *(_QWORD *)&v163 = 4; /*0x1409cc281*/
  *((_QWORD *)&v163 + 1) = v73; /*0x1409cc28c*/
  v164 = 4; /*0x1409cc293*/
  nullsub_1(v74); /*0x1409cc29e*/
  v75 = (void *)sub_140001650(25, 1); /*0x1409cc2ad*/
  v160 = (__int64)v75; /*0x1409cc2b5*/
  if ( !v75 ) /*0x1409cc2bc*/
    sub_1416C2D4B(1, 25); /*0x1409cd62e*/
  qmemcpy(v75, "response.output_item.done", 25); /*0x1409cc2d4*/
  v183.m256i_i8[0] = 3; /*0x1409cc2d7*/
  v183.m256i_i64[1] = 25; /*0x1409cc2de*/
  v183.m256i_i64[2] = (__int64)v75; /*0x1409cc2e9*/
  v183.m256i_i64[3] = 25; /*0x1409cc2f0*/
  sub_140307860(&v178, &v161, &v163, &v183); /*0x1409cc317*/
  if ( v178.m256i_i8[0] != -1 ) /*0x1409cc324*/
    sub_1400104F0(&v178); /*0x1409cc32d*/
  nullsub_1(v76); /*0x1409cc333*/
  v77 = (void *)sub_140001650(12, 1); /*0x1409cc342*/
  if ( !v77 ) /*0x1409cc34a*/
    sub_1416C2D4B(1, 12); /*0x1409cd643*/
  qmemcpy(v77, "output_index", 12); /*0x1409cc35a*/
  *(_QWORD *)&v163 = 12; /*0x1409cc364*/
  *((_QWORD *)&v163 + 1) = v77; /*0x1409cc36f*/
  v164 = 12; /*0x1409cc376*/
  v183.m256i_i8[0] = 2; /*0x1409cc387*/
  v183.m256i_i64[1] = 0; /*0x1409cc38e*/
  v183.m256i_i64[2] = (unsigned int)v158; /*0x1409cc399*/
  sub_140307860(&v178, &v161, &v163, &v183); /*0x1409cc3bc*/
  if ( v178.m256i_i8[0] != -1 ) /*0x1409cc3c9*/
    sub_1400104F0(&v178); /*0x1409cc3d2*/
  nullsub_1(v78); /*0x1409cc3d8*/
  v79 = 1; /*0x1409cc3dd*/
  v80 = (_DWORD *)sub_140001650(7, 1); /*0x1409cc3ed*/
  if ( !v80 ) /*0x1409cc3f5*/
    sub_1416C2D4B(1, 7); /*0x1409cd658*/
  *(_DWORD *)((char *)v80 + 3) = 1684627309; /*0x1409cc3fb*/
  *v80 = 1835365481; /*0x1409cc402*/
  *(_QWORD *)&v163 = 7; /*0x1409cc408*/
  *((_QWORD *)&v163 + 1) = v80; /*0x1409cc413*/
  v164 = 7; /*0x1409cc41a*/
  if ( v6 ) /*0x1409cc428*/
  {
    nullsub_1(v81); /*0x1409cc42a*/
    v82 = sub_140001650(v6, 1); /*0x1409cc437*/
    if ( !v82 ) /*0x1409cc43f*/
    {
      v166 = 1; /*0x1409cd692*/
      sub_1416C2D4B(1, v6); /*0x1409cd6a1*/
    }
    v79 = v82; /*0x1409cc445*/
    sub_141684120(v82, v159, v6); /*0x1409cc455*/
  }
  v183.m256i_i8[0] = 3; /*0x1409cc45a*/
  v183.m256i_i64[1] = v6; /*0x1409cc461*/
  v183.m256i_i64[2] = v79; /*0x1409cc468*/
  v183.m256i_i64[3] = v6; /*0x1409cc46f*/
  v166 = 0; /*0x1409cc476*/
  sub_140307860(&v178, &v161, &v163, &v183); /*0x1409cc499*/
  if ( v178.m256i_i8[0] != -1 ) /*0x1409cc4a6*/
    sub_1400104F0(&v178); /*0x1409cc4af*/
  nullsub_1(v83); /*0x1409cc4b5*/
  v84 = (_DWORD *)sub_140001650(4, 1); /*0x1409cc4c4*/
  if ( !v84 ) /*0x1409cc4cc*/
    sub_1416C2D4B(1, 4); /*0x1409cd66d*/
  *v84 = 1835365481; /*0x1409cc4d2*/
  *(_QWORD *)&v163 = 4; /*0x1409cc4d8*/
  *((_QWORD *)&v163 + 1) = v84; /*0x1409cc4e3*/
  v164 = 4; /*0x1409cc4ea*/
  v181 = 1; /*0x1409cc4f5*/
  sub_140B842D0(&v183, &v180); /*0x1409cc50a*/
  if ( v183.m256i_i8[0] == -1 ) /*0x1409cc517*/
  {
    v178.m256i_i64[0] = v183.m256i_i64[1]; /*0x1409cd34e*/
    sub_1416C3060( /*0x1409cd37b*/
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v178,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A64A0);
  }
  v178 = v183; /*0x1409cc52b*/
  v181 = 0; /*0x1409cc539*/
  sub_140307860(&v183, &v161, &v163, &v178); /*0x1409cc55f*/
  if ( v183.m256i_i8[0] != -1 ) /*0x1409cc56c*/
    sub_1400104F0(&v183); /*0x1409cc575*/
  *(_OWORD *)&v183.m256i_u64[1] = v161; /*0x1409cc589*/
  v183.m256i_i64[3] = v162; /*0x1409cc597*/
  v183.m256i_i8[0] = 5; /*0x1409cc59e*/
  sub_1409C6750((unsigned int)&v178, a1 + 352, (unsigned int)&xmmword_1417A5C30, 25, (__int64)&v183); /*0x1409cc5be*/
  v85 = v178.m256i_i64[2]; /*0x1409cc5cb*/
  v86 = v178.m256i_i64[1]; /*0x1409cc5cb*/
  v87 = v30[2]; /*0x1409cc5d5*/
  if ( v178.m256i_i64[2] > (unsigned __int64)(*v30 - v87) ) /*0x1409cc5df*/
  {
    v158 = v178.m256i_i64[1]; /*0x1409cd386*/
    sub_141688D30((_DWORD)v30, v87, v178.m256i_i32[4], 1, 1); /*0x1409cd3a8*/
    v87 = v30[2]; /*0x1409cd3b1*/
    v86 = v158; /*0x1409cd3b5*/
    goto LABEL_100; /*0x1409cd3bc*/
  }
  if ( v178.m256i_i64[2] ) /*0x1409cc5e8*/
LABEL_100:
    sub_141684120(v87 + v30[1], v86, v85); /*0x1409cc5ea*/
  v30[2] = v85 + v87; /*0x1409cc5fc*/
  if ( v178.m256i_i64[0] ) /*0x1409cc60d*/
    sub_140001660(v86, v178.m256i_i64[0], 1); /*0x1409cc618*/
  v184 = 1; /*0x1409cc61d*/
  sub_1400104F0(&v183); /*0x1409cc62b*/
  v183 = v180; /*0x1409cc63f*/
  v88 = *(_QWORD *)(a1 + 64); /*0x1409cc64d*/
  if ( v88 == *(_QWORD *)(a1 + 48) ) /*0x1409cc655*/
    sub_1416890A0(a1 + 48); /*0x1409cc65b*/
  v89 = *(_QWORD *)(a1 + 56); /*0x1409cc661*/
  v90 = 32 * v88; /*0x1409cc668*/
  v91 = *(_OWORD *)v183.m256i_i8; /*0x1409cc66c*/
  *(_OWORD *)(v89 + v90 + 16) = *(_OWORD *)&v183.m256i_u64[2]; /*0x1409cc67a*/
  *(_OWORD *)(v89 + v90) = v91; /*0x1409cc67f*/
  *(_QWORD *)(a1 + 64) = v88 + 1; /*0x1409cc686*/
  result = sub_1400104F0(v156); /*0x1409cc68e*/
  if ( v150 ) /*0x1409cc69b*/
    result = sub_140001660(v152, v150, 1); /*0x1409cc6a7*/
  if ( v149 ) /*0x1409cc6b3*/
    result = sub_140001660(v153, v149, 1); /*0x1409cc6bf*/
  if ( (_QWORD)v154 ) /*0x1409cc6cb*/
    result = sub_140001660(*((_QWORD *)&v154 + 1), v154, 1); /*0x1409cc6d7*/
  if ( v148 ) /*0x1409cc6e3*/
    return sub_140001660(v159, v148, 1); /*0x1409cc6f2*/
  return result; /*0x1409cc6f8*/
}