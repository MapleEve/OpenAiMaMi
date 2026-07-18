// win 1.2.1 NEW migrate_session_worktree 0x1401fae10 d=1
__int64 __fastcall sub_1401FAE10(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r13
  const __m128i *v7; // rbx
  __m128i *v8; // rax
  unsigned __int64 v9; // r12
  const __m128i *v10; // rbx
  __m128i *v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // r14
  const __m128i *v14; // rbx
  __m128i *v15; // rax
  char v16; // r14
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  const __m128i *v19; // rbx
  __m128i *v20; // rax
  const __m128i *v21; // rdx
  __m128i *v22; // rbx
  unsigned __int64 v23; // r14
  const __m128i *v24; // rbx
  __m128i *v25; // rax
  unsigned __int64 v26; // r14
  const __m128i *v27; // rbx
  __m128i *v28; // rax
  unsigned __int64 v29; // rdx
  const __m128i *v30; // rbx
  unsigned __int64 v31; // r14
  __m128i *v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r15
  const __m128i *v35; // rbx
  __m128i *v36; // rax
  char v37; // r15
  unsigned __int64 v38; // r8
  const __m128i *v39; // rbx
  unsigned __int64 v40; // r13
  __m128i *v41; // rax
  unsigned __int64 v42; // r13
  const __m128i *v43; // rbx
  __m128i *v44; // rax
  unsigned __int64 v45; // r9
  const __m128i *v46; // rbx
  unsigned __int64 v47; // r12
  __m128i *v48; // rax
  char v49; // r12
  unsigned __int64 v50; // r13
  const __m128i *v51; // rbx
  __m128i *v52; // rax
  char v53; // r13
  unsigned __int64 v54; // r10
  const __m128i *v55; // rbx
  unsigned __int64 v56; // r14
  __m128i *v57; // rax
  unsigned __int64 v58; // r14
  const __m128i *v59; // rbx
  __m128i *v60; // rax
  char v61; // r14
  unsigned __int64 v62; // r11
  const __m128i *v63; // rbx
  unsigned __int64 v64; // r15
  __m128i *v65; // rax
  unsigned __int64 v66; // r15
  const __m128i *v67; // rbx
  __m128i *v68; // rax
  unsigned __int64 v69; // r15
  const __m128i *v70; // rbx
  __m128i *v71; // rax
  unsigned __int64 v72; // r13
  const __m128i *v73; // rbx
  __m128i *v74; // rax
  unsigned __int64 v75; // rbx
  char v76; // r15
  char v77; // r14
  unsigned __int64 v78; // r12
  const __m128i *v79; // r13
  __m128i *v80; // rax
  unsigned __int64 v81; // r12
  char v82; // r14
  unsigned __int64 v83; // r15
  const __m128i *v84; // rbx
  __m128i *v85; // rax
  unsigned __int64 v86; // r12
  const __m128i *v87; // rbx
  __m128i *v88; // rax
  char v89; // r12
  unsigned __int64 v90; // r14
  const __m128i *v91; // rbx
  __m128i *v92; // rax
  unsigned __int64 v93; // r14
  const __m128i *v94; // rbx
  __m128i *v95; // rax
  unsigned __int64 v96; // r13
  const __m128i *v97; // rbx
  __m128i *v98; // rax
  unsigned __int64 v99; // r13
  const __m128i *v100; // rbx
  __m128i *v101; // rax
  unsigned __int64 v102; // r12
  char v103; // r14
  unsigned __int64 v104; // r15
  const __m128i *v105; // rbx
  __m128i *v106; // rax
  unsigned __int64 v107; // r15
  unsigned __int64 v108; // r12
  const __m128i *v109; // rbx
  __m128i *v110; // rax
  unsigned __int64 v111; // r14
  const __m128i *v112; // rbx
  __m128i *v113; // rax
  unsigned __int64 v114; // r14
  const __m128i *v115; // rbx
  __m128i *v116; // rax
  unsigned __int64 v117; // r13
  const __m128i *v118; // rbx
  __m128i *v119; // rax
  char v120; // r12
  unsigned __int64 v121; // rbx
  const __m128i *v122; // r15
  __m128i *v123; // rax
  __int64 v124; // r14
  unsigned __int64 v125; // rcx
  __int64 result; // rax
  __int64 v127; // [rsp+20h] [rbp-60h]
  __int64 v128; // [rsp+28h] [rbp-58h]
  __int64 v129; // [rsp+30h] [rbp-50h]
  __int64 v130; // [rsp+38h] [rbp-48h]
  __int64 v131; // [rsp+40h] [rbp-40h]
  __int64 v132; // [rsp+48h] [rbp-38h]
  __int64 v133; // [rsp+50h] [rbp-30h]
  __int64 v134; // [rsp+58h] [rbp-28h]
  __int64 v135; // [rsp+60h] [rbp-20h]
  __int64 v136; // [rsp+68h] [rbp-18h]
  __int64 v137; // [rsp+70h] [rbp-10h]
  __int64 v138; // [rsp+78h] [rbp-8h]
  __int64 v139; // [rsp+80h] [rbp+0h]
  __int64 v140; // [rsp+88h] [rbp+8h]
  __int64 v141; // [rsp+90h] [rbp+10h]
  __int64 v142; // [rsp+98h] [rbp+18h]
  __int64 v143; // [rsp+A0h] [rbp+20h]
  __int64 v144; // [rsp+A8h] [rbp+28h]
  __int64 v145; // [rsp+B0h] [rbp+30h]
  __int64 v146; // [rsp+B8h] [rbp+38h]
  __int64 v147; // [rsp+C0h] [rbp+40h]
  __int64 v148; // [rsp+C8h] [rbp+48h]
  __int64 v149; // [rsp+D0h] [rbp+50h]
  __int64 v150; // [rsp+D8h] [rbp+58h]
  __int64 v151; // [rsp+E0h] [rbp+60h]
  __int64 v152; // [rsp+E8h] [rbp+68h]
  __int64 v153; // [rsp+F0h] [rbp+70h]
  __int64 v154; // [rsp+F8h] [rbp+78h]
  unsigned __int64 v155; // [rsp+100h] [rbp+80h]
  unsigned __int64 v156; // [rsp+108h] [rbp+88h]
  unsigned __int64 v157; // [rsp+110h] [rbp+90h]
  unsigned __int64 v158; // [rsp+118h] [rbp+98h]
  unsigned __int64 v159; // [rsp+120h] [rbp+A0h]
  unsigned __int64 v160; // [rsp+128h] [rbp+A8h]
  unsigned __int64 v161; // [rsp+130h] [rbp+B0h]
  unsigned __int64 v162; // [rsp+138h] [rbp+B8h]
  unsigned __int64 v163; // [rsp+140h] [rbp+C0h]
  __int64 v164; // [rsp+148h] [rbp+C8h]
  unsigned __int64 v165; // [rsp+150h] [rbp+D0h]
  unsigned __int64 v166; // [rsp+158h] [rbp+D8h]
  unsigned __int64 v167; // [rsp+160h] [rbp+E0h]
  unsigned __int64 v168; // [rsp+168h] [rbp+E8h]
  unsigned __int64 v169; // [rsp+170h] [rbp+F0h]
  unsigned __int64 v170; // [rsp+178h] [rbp+F8h]
  unsigned __int64 v171; // [rsp+180h] [rbp+100h]
  unsigned __int64 v172; // [rsp+188h] [rbp+108h]
  unsigned __int64 v173; // [rsp+190h] [rbp+110h]
  unsigned __int64 v174; // [rsp+198h] [rbp+118h]
  unsigned __int64 v175; // [rsp+1A0h] [rbp+120h]
  unsigned __int64 v176; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v177; // [rsp+1B0h] [rbp+130h]
  __int64 v178; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v179; // [rsp+1C8h] [rbp+148h]
  char v180; // [rsp+1D3h] [rbp+153h]
  char v181; // [rsp+1D4h] [rbp+154h]
  char v182; // [rsp+1D5h] [rbp+155h]
  char v183; // [rsp+1D6h] [rbp+156h]
  char v184; // [rsp+1D7h] [rbp+157h]
  char v185; // [rsp+1D8h] [rbp+158h]
  char v186; // [rsp+1D9h] [rbp+159h]
  char v187; // [rsp+1DAh] [rbp+15Ah]
  char v188; // [rsp+1DBh] [rbp+15Bh]
  char v189; // [rsp+1DCh] [rbp+15Ch]
  char v190; // [rsp+1DDh] [rbp+15Dh]
  char v191; // [rsp+1DEh] [rbp+15Eh]
  char v192; // [rsp+1DFh] [rbp+15Fh]
  char v193; // [rsp+1E0h] [rbp+160h]
  char v194; // [rsp+1E1h] [rbp+161h]
  char v195; // [rsp+1E2h] [rbp+162h]
  char v196; // [rsp+1E3h] [rbp+163h]
  char v197; // [rsp+1E4h] [rbp+164h]
  char v198; // [rsp+1E5h] [rbp+165h]
  char v199; // [rsp+1E6h] [rbp+166h]
  char v200; // [rsp+1E7h] [rbp+167h]
  char v201; // [rsp+1E8h] [rbp+168h]
  char v202; // [rsp+1E9h] [rbp+169h]
  char v203; // [rsp+1EAh] [rbp+16Ah]
  char v204; // [rsp+1EBh] [rbp+16Bh]
  char v205; // [rsp+1ECh] [rbp+16Ch]
  char v206; // [rsp+1EDh] [rbp+16Dh]
  char v207; // [rsp+1EEh] [rbp+16Eh]
  char v208; // [rsp+1EFh] [rbp+16Fh]
  unsigned __int64 v209; // [rsp+1F0h] [rbp+170h]
  unsigned __int64 v210; // [rsp+1F8h] [rbp+178h]
  unsigned __int64 v211; // [rsp+200h] [rbp+180h]
  unsigned __int64 v212; // [rsp+208h] [rbp+188h]
  unsigned __int64 v213; // [rsp+210h] [rbp+190h]
  unsigned __int64 v214; // [rsp+218h] [rbp+198h]

  v4 = *(_QWORD *)(a2 + 16); /*0x1401fae3c*/
  v5 = 1; /*0x1401fae40*/
  v6 = 1; /*0x1401fae46*/
  if ( v4 ) /*0x1401fae4f*/
  {
    v7 = *(const __m128i **)(a2 + 8); /*0x1401fae51*/
    nullsub_1(); /*0x1401fae55*/
    v8 = (__m128i *)sub_140001350(v4, 1); /*0x1401fae62*/
    if ( !v8 ) /*0x1401fae6a*/
      sub_1415F08AB(1, v4); /*0x1401fc168*/
    v6 = (__int64)v8; /*0x1401fae70*/
    sub_1415B2FE0(v8, v7, v4); /*0x1401fae7c*/
  }
  v180 = *(_BYTE *)(a2 + 24); /*0x1401fae85*/
  v9 = *(_QWORD *)(a2 + 48); /*0x1401fae8b*/
  v179 = v4; /*0x1401fae92*/
  v127 = v6; /*0x1401fae99*/
  if ( v9 ) /*0x1401fae9d*/
  {
    v10 = *(const __m128i **)(a2 + 40); /*0x1401fae9f*/
    nullsub_1(); /*0x1401faea3*/
    v11 = (__m128i *)sub_140001350(v9, 1); /*0x1401faeb0*/
    if ( !v11 ) /*0x1401faeb8*/
      sub_1415F08AB(1, v9); /*0x1401fc177*/
    v5 = (__int64)v11; /*0x1401faebe*/
    sub_1415B2FE0(v11, v10, v9); /*0x1401faeca*/
  }
  v155 = v9; /*0x1401faecf*/
  v128 = v5; /*0x1401faed6*/
  v181 = *(_BYTE *)(a2 + 56); /*0x1401faede*/
  v12 = *(_QWORD *)(a2 + 80); /*0x1401faee4*/
  v13 = 1; /*0x1401faee8*/
  if ( v12 ) /*0x1401faef1*/
  {
    v14 = *(const __m128i **)(a2 + 72); /*0x1401faef3*/
    nullsub_1(); /*0x1401faef7*/
    v15 = (__m128i *)sub_140001350(v12, 1); /*0x1401faf04*/
    if ( !v15 ) /*0x1401faf0c*/
      sub_1415F08AB(1, v12); /*0x1401fc18a*/
    v13 = (__int64)v15; /*0x1401faf12*/
    sub_1415B2FE0(v15, v14, v12); /*0x1401faf1e*/
  }
  v129 = v13; /*0x1401faf23*/
  v156 = v12; /*0x1401faf27*/
  v16 = *(_BYTE *)(a2 + 88); /*0x1401faf2e*/
  v17 = *(_QWORD *)(a2 + 112); /*0x1401faf33*/
  v18 = 1; /*0x1401faf3a*/
  if ( v17 ) /*0x1401faf3f*/
  {
    v19 = *(const __m128i **)(a2 + 104); /*0x1401faf41*/
    nullsub_1(); /*0x1401faf45*/
    v20 = (__m128i *)sub_140001350(v17, 1); /*0x1401faf52*/
    if ( !v20 ) /*0x1401faf5a*/
      sub_1415F08AB(1, v17); /*0x1401fc19d*/
    v21 = v19; /*0x1401faf63*/
    v22 = v20; /*0x1401faf69*/
    sub_1415B2FE0(v20, v21, v17); /*0x1401faf6c*/
    v18 = (__int64)v22; /*0x1401faf71*/
  }
  v130 = v18; /*0x1401faf74*/
  v182 = v16; /*0x1401faf78*/
  v183 = *(_BYTE *)(a2 + 120); /*0x1401faf83*/
  v23 = *(_QWORD *)(a2 + 144); /*0x1401faf89*/
  v157 = v17; /*0x1401faf93*/
  if ( v23 ) /*0x1401faf9a*/
  {
    v24 = *(const __m128i **)(a2 + 136); /*0x1401faf9c*/
    nullsub_1(); /*0x1401fafa3*/
    v25 = (__m128i *)sub_140001350(v23, 1); /*0x1401fafb0*/
    if ( !v25 ) /*0x1401fafb8*/
      sub_1415F08AB(1, v23); /*0x1401fc1b0*/
    v164 = (__int64)v25; /*0x1401fafbe*/
    sub_1415B2FE0(v25, v24, v23); /*0x1401fafce*/
  }
  else
  {
    v164 = 1; /*0x1401fafda*/
  }
  v158 = v23; /*0x1401faff0*/
  v184 = *(_BYTE *)(a2 + 152); /*0x1401faff7*/
  if ( *(_QWORD *)(a2 + 960) == -1 ) /*0x1401faffd*/
  {
    v26 = -1; /*0x1401fb044*/
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 976); /*0x1401fafff*/
    if ( v26 ) /*0x1401fb009*/
    {
      v27 = *(const __m128i **)(a2 + 968); /*0x1401fb00b*/
      nullsub_1(); /*0x1401fb012*/
      v28 = (__m128i *)sub_140001350(v26, 1); /*0x1401fb01f*/
      if ( !v28 ) /*0x1401fb027*/
        sub_1415F08AB(1, v26); /*0x1401fc3e7*/
      v178 = (__int64)v28; /*0x1401fb02d*/
      sub_1415B2FE0(v28, v27, v26); /*0x1401fb03d*/
    }
    else
    {
      v178 = 1; /*0x1401fb052*/
    }
    v208 = *(_BYTE *)(a2 + 984); /*0x1401fb060*/
  }
  v29 = *(_QWORD *)(a2 + 176); /*0x1401fb066*/
  v132 = 1; /*0x1401fb072*/
  v131 = 1; /*0x1401fb076*/
  v159 = v26; /*0x1401fb07d*/
  if ( v29 ) /*0x1401fb084*/
  {
    v30 = *(const __m128i **)(a2 + 168); /*0x1401fb086*/
    v31 = *(_QWORD *)(a2 + 176); /*0x1401fb08d*/
    nullsub_1(); /*0x1401fb090*/
    v32 = (__m128i *)sub_140001350(v31, 1); /*0x1401fb09d*/
    if ( !v32 ) /*0x1401fb0a5*/
      sub_1415F08AB(1, v31); /*0x1401fc1c3*/
    v131 = (__int64)v32; /*0x1401fb0ab*/
    sub_1415B2FE0(v32, v30, v31); /*0x1401fb0b8*/
    v29 = v31; /*0x1401fb0bd*/
  }
  v185 = *(_BYTE *)(a2 + 184); /*0x1401fb0c7*/
  v33 = *(_QWORD *)(a2 + 208); /*0x1401fb0cd*/
  v214 = v29; /*0x1401fb0d7*/
  if ( v33 ) /*0x1401fb0de*/
  {
    v34 = *(_QWORD *)(a2 + 208); /*0x1401fb0e0*/
    v35 = *(const __m128i **)(a2 + 200); /*0x1401fb0e3*/
    nullsub_1(); /*0x1401fb0ea*/
    v36 = (__m128i *)sub_140001350(v34, 1); /*0x1401fb0f7*/
    if ( !v36 ) /*0x1401fb0ff*/
      sub_1415F08AB(1, v34); /*0x1401fc1d6*/
    v132 = (__int64)v36; /*0x1401fb105*/
    sub_1415B2FE0(v36, v35, v34); /*0x1401fb112*/
    v29 = v214; /*0x1401fb117*/
    v33 = v34; /*0x1401fb11e*/
  }
  v37 = *(_BYTE *)(a2 + 216); /*0x1401fb121*/
  v38 = *(_QWORD *)(a2 + 240); /*0x1401fb129*/
  v134 = 1; /*0x1401fb135*/
  v133 = 1; /*0x1401fb139*/
  v160 = v33; /*0x1401fb140*/
  if ( v38 ) /*0x1401fb147*/
  {
    v39 = *(const __m128i **)(a2 + 232); /*0x1401fb149*/
    v40 = *(_QWORD *)(a2 + 240); /*0x1401fb150*/
    nullsub_1(); /*0x1401fb153*/
    v41 = (__m128i *)sub_140001350(v40, 1); /*0x1401fb160*/
    if ( !v41 ) /*0x1401fb168*/
      sub_1415F08AB(1, v40); /*0x1401fc1e9*/
    v133 = (__int64)v41; /*0x1401fb16e*/
    sub_1415B2FE0(v41, v39, v40); /*0x1401fb17b*/
    v29 = v214; /*0x1401fb180*/
    v38 = v40; /*0x1401fb187*/
  }
  v186 = *(_BYTE *)(a2 + 248); /*0x1401fb191*/
  v42 = *(_QWORD *)(a2 + 272); /*0x1401fb197*/
  v213 = v38; /*0x1401fb1a1*/
  if ( v42 ) /*0x1401fb1a8*/
  {
    v43 = *(const __m128i **)(a2 + 264); /*0x1401fb1aa*/
    nullsub_1(); /*0x1401fb1b1*/
    v44 = (__m128i *)sub_140001350(v42, 1); /*0x1401fb1be*/
    if ( !v44 ) /*0x1401fb1c6*/
      sub_1415F08AB(1, v42); /*0x1401fc1fc*/
    v134 = (__int64)v44; /*0x1401fb1cc*/
    sub_1415B2FE0(v44, v43, v42); /*0x1401fb1d9*/
    v29 = v214; /*0x1401fb1de*/
    v38 = v213; /*0x1401fb1e5*/
  }
  v161 = v42; /*0x1401fb1ec*/
  v187 = *(_BYTE *)(a2 + 280); /*0x1401fb1fa*/
  v45 = *(_QWORD *)(a2 + 304); /*0x1401fb200*/
  v136 = 1; /*0x1401fb20c*/
  v135 = 1; /*0x1401fb210*/
  if ( v45 ) /*0x1401fb217*/
  {
    v46 = *(const __m128i **)(a2 + 296); /*0x1401fb219*/
    v47 = *(_QWORD *)(a2 + 304); /*0x1401fb220*/
    nullsub_1(); /*0x1401fb223*/
    v48 = (__m128i *)sub_140001350(v47, 1); /*0x1401fb230*/
    if ( !v48 ) /*0x1401fb238*/
      sub_1415F08AB(1, v47); /*0x1401fc20f*/
    v135 = (__int64)v48; /*0x1401fb23e*/
    sub_1415B2FE0(v48, v46, v47); /*0x1401fb24b*/
    v29 = v214; /*0x1401fb250*/
    v38 = v213; /*0x1401fb257*/
    v45 = v47; /*0x1401fb25e*/
  }
  v49 = *(_BYTE *)(a2 + 312); /*0x1401fb261*/
  v50 = *(_QWORD *)(a2 + 336); /*0x1401fb269*/
  v212 = v45; /*0x1401fb273*/
  if ( v50 ) /*0x1401fb27a*/
  {
    v51 = *(const __m128i **)(a2 + 328); /*0x1401fb27c*/
    nullsub_1(); /*0x1401fb283*/
    v52 = (__m128i *)sub_140001350(v50, 1); /*0x1401fb290*/
    if ( !v52 ) /*0x1401fb298*/
      sub_1415F08AB(1, v50); /*0x1401fc222*/
    v136 = (__int64)v52; /*0x1401fb29e*/
    sub_1415B2FE0(v52, v51, v50); /*0x1401fb2ab*/
    v29 = v214; /*0x1401fb2b0*/
    v38 = v213; /*0x1401fb2b7*/
    v45 = v212; /*0x1401fb2be*/
  }
  v162 = v50; /*0x1401fb2c5*/
  v53 = *(_BYTE *)(a2 + 344); /*0x1401fb2cc*/
  v54 = *(_QWORD *)(a2 + 368); /*0x1401fb2d4*/
  v138 = 1; /*0x1401fb2e0*/
  v137 = 1; /*0x1401fb2e4*/
  if ( v54 ) /*0x1401fb2eb*/
  {
    v55 = *(const __m128i **)(a2 + 360); /*0x1401fb2ed*/
    v56 = *(_QWORD *)(a2 + 368); /*0x1401fb2f4*/
    nullsub_1(); /*0x1401fb2f7*/
    v57 = (__m128i *)sub_140001350(v56, 1); /*0x1401fb304*/
    if ( !v57 ) /*0x1401fb30c*/
      sub_1415F08AB(1, v56); /*0x1401fc235*/
    v137 = (__int64)v57; /*0x1401fb312*/
    sub_1415B2FE0(v57, v55, v56); /*0x1401fb31f*/
    v29 = v214; /*0x1401fb324*/
    v38 = v213; /*0x1401fb32b*/
    v45 = v212; /*0x1401fb332*/
    v54 = v56; /*0x1401fb339*/
  }
  v188 = *(_BYTE *)(a2 + 376); /*0x1401fb343*/
  v58 = *(_QWORD *)(a2 + 400); /*0x1401fb349*/
  v211 = v54; /*0x1401fb353*/
  if ( v58 ) /*0x1401fb35a*/
  {
    v59 = *(const __m128i **)(a2 + 392); /*0x1401fb35c*/
    nullsub_1(); /*0x1401fb363*/
    v60 = (__m128i *)sub_140001350(v58, 1); /*0x1401fb370*/
    if ( !v60 ) /*0x1401fb378*/
      sub_1415F08AB(1, v58); /*0x1401fc248*/
    v138 = (__int64)v60; /*0x1401fb37e*/
    sub_1415B2FE0(v60, v59, v58); /*0x1401fb38b*/
    v29 = v214; /*0x1401fb390*/
    v38 = v213; /*0x1401fb397*/
    v45 = v212; /*0x1401fb39e*/
    v54 = v211; /*0x1401fb3a5*/
  }
  v163 = v58; /*0x1401fb3ac*/
  v189 = v37; /*0x1401fb3b3*/
  v61 = *(_BYTE *)(a2 + 408); /*0x1401fb3ba*/
  v62 = *(_QWORD *)(a2 + 432); /*0x1401fb3c2*/
  v140 = 1; /*0x1401fb3ce*/
  v139 = 1; /*0x1401fb3d2*/
  if ( v62 ) /*0x1401fb3d9*/
  {
    v63 = *(const __m128i **)(a2 + 424); /*0x1401fb3db*/
    v64 = *(_QWORD *)(a2 + 432); /*0x1401fb3e2*/
    nullsub_1(); /*0x1401fb3e5*/
    v65 = (__m128i *)sub_140001350(v64, 1); /*0x1401fb3f2*/
    if ( !v65 ) /*0x1401fb3fa*/
      sub_1415F08AB(1, v64); /*0x1401fc25b*/
    v139 = (__int64)v65; /*0x1401fb400*/
    sub_1415B2FE0(v65, v63, v64); /*0x1401fb40d*/
    v29 = v214; /*0x1401fb412*/
    v38 = v213; /*0x1401fb419*/
    v45 = v212; /*0x1401fb420*/
    v54 = v211; /*0x1401fb427*/
    v62 = v64; /*0x1401fb42e*/
  }
  v190 = *(_BYTE *)(a2 + 440); /*0x1401fb438*/
  v66 = *(_QWORD *)(a2 + 464); /*0x1401fb43e*/
  v210 = v62; /*0x1401fb448*/
  if ( v66 ) /*0x1401fb44f*/
  {
    v67 = *(const __m128i **)(a2 + 456); /*0x1401fb451*/
    nullsub_1(); /*0x1401fb458*/
    v68 = (__m128i *)sub_140001350(v66, 1); /*0x1401fb465*/
    if ( !v68 ) /*0x1401fb46d*/
      sub_1415F08AB(1, v66); /*0x1401fc26e*/
    v140 = (__int64)v68; /*0x1401fb473*/
    sub_1415B2FE0(v68, v67, v66); /*0x1401fb480*/
    v29 = v214; /*0x1401fb485*/
    v38 = v213; /*0x1401fb48c*/
    v45 = v212; /*0x1401fb493*/
    v54 = v211; /*0x1401fb49a*/
    v62 = v210; /*0x1401fb4a1*/
  }
  v165 = v66; /*0x1401fb4a8*/
  v191 = *(_BYTE *)(a2 + 472); /*0x1401fb4b6*/
  v69 = *(_QWORD *)(a2 + 496); /*0x1401fb4bc*/
  v142 = 1; /*0x1401fb4c8*/
  v141 = 1; /*0x1401fb4cc*/
  if ( v69 ) /*0x1401fb4d3*/
  {
    v70 = *(const __m128i **)(a2 + 488); /*0x1401fb4d5*/
    nullsub_1(); /*0x1401fb4dc*/
    v71 = (__m128i *)sub_140001350(v69, 1); /*0x1401fb4e9*/
    if ( !v71 ) /*0x1401fb4f1*/
      sub_1415F08AB(1, v69); /*0x1401fc281*/
    v141 = (__int64)v71; /*0x1401fb4f7*/
    sub_1415B2FE0(v71, v70, v69); /*0x1401fb504*/
    v29 = v214; /*0x1401fb509*/
    v38 = v213; /*0x1401fb510*/
    v45 = v212; /*0x1401fb517*/
    v54 = v211; /*0x1401fb51e*/
    v62 = v210; /*0x1401fb525*/
  }
  v192 = v53; /*0x1401fb52c*/
  v193 = *(_BYTE *)(a2 + 504); /*0x1401fb53a*/
  v72 = *(_QWORD *)(a2 + 528); /*0x1401fb540*/
  if ( v72 ) /*0x1401fb54a*/
  {
    v73 = *(const __m128i **)(a2 + 520); /*0x1401fb54c*/
    nullsub_1(); /*0x1401fb553*/
    v74 = (__m128i *)sub_140001350(v72, 1); /*0x1401fb560*/
    if ( !v74 ) /*0x1401fb568*/
      sub_1415F08AB(1, v72); /*0x1401fc29b*/
    v142 = (__int64)v74; /*0x1401fb56e*/
    sub_1415B2FE0(v74, v73, v72); /*0x1401fb57b*/
    v29 = v214; /*0x1401fb580*/
    v38 = v213; /*0x1401fb587*/
    v45 = v212; /*0x1401fb58e*/
    v54 = v211; /*0x1401fb595*/
    v62 = v210; /*0x1401fb59c*/
  }
  v75 = v69; /*0x1401fb5a3*/
  v76 = v61; /*0x1401fb5a6*/
  v77 = v49; /*0x1401fb5a9*/
  v166 = v72; /*0x1401fb5ac*/
  v78 = *(_QWORD *)(a2 + 560); /*0x1401fb5bb*/
  v144 = 1; /*0x1401fb5c7*/
  v143 = 1; /*0x1401fb5cb*/
  v194 = *(_BYTE *)(a2 + 536); /*0x1401fb5d2*/
  if ( v78 ) /*0x1401fb5d9*/
  {
    v79 = *(const __m128i **)(a2 + 552); /*0x1401fb5db*/
    nullsub_1(); /*0x1401fb5e2*/
    v80 = (__m128i *)sub_140001350(v78, 1); /*0x1401fb5ef*/
    if ( !v80 ) /*0x1401fb5f7*/
      sub_1415F08AB(1, v78); /*0x1401fc2b5*/
    v143 = (__int64)v80; /*0x1401fb5fd*/
    sub_1415B2FE0(v80, v79, v78); /*0x1401fb60a*/
    v29 = v214; /*0x1401fb60f*/
    v38 = v213; /*0x1401fb616*/
    v45 = v212; /*0x1401fb61d*/
    v54 = v211; /*0x1401fb624*/
    v62 = v210; /*0x1401fb62b*/
  }
  v167 = v78; /*0x1401fb632*/
  v195 = v77; /*0x1401fb639*/
  v196 = *(_BYTE *)(a2 + 568); /*0x1401fb647*/
  v81 = *(_QWORD *)(a2 + 592); /*0x1401fb64d*/
  v82 = v76; /*0x1401fb657*/
  v83 = v75; /*0x1401fb65a*/
  if ( v81 ) /*0x1401fb65d*/
  {
    v84 = *(const __m128i **)(a2 + 584); /*0x1401fb65f*/
    nullsub_1(); /*0x1401fb666*/
    v85 = (__m128i *)sub_140001350(v81, 1); /*0x1401fb673*/
    if ( !v85 ) /*0x1401fb67b*/
      sub_1415F08AB(1, v81); /*0x1401fc2cf*/
    v144 = (__int64)v85; /*0x1401fb681*/
    sub_1415B2FE0(v85, v84, v81); /*0x1401fb68e*/
    v29 = v214; /*0x1401fb693*/
    v38 = v213; /*0x1401fb69a*/
    v45 = v212; /*0x1401fb6a1*/
    v54 = v211; /*0x1401fb6a8*/
    v62 = v210; /*0x1401fb6af*/
  }
  v168 = v81; /*0x1401fb6b6*/
  v197 = *(_BYTE *)(a2 + 600); /*0x1401fb6c4*/
  v86 = *(_QWORD *)(a2 + 624); /*0x1401fb6ca*/
  v146 = 1; /*0x1401fb6d6*/
  v145 = 1; /*0x1401fb6da*/
  if ( v86 ) /*0x1401fb6e1*/
  {
    v87 = *(const __m128i **)(a2 + 616); /*0x1401fb6e3*/
    nullsub_1(); /*0x1401fb6ea*/
    v88 = (__m128i *)sub_140001350(v86, 1); /*0x1401fb6f7*/
    if ( !v88 ) /*0x1401fb6ff*/
      sub_1415F08AB(1, v86); /*0x1401fc2e9*/
    v145 = (__int64)v88; /*0x1401fb705*/
    sub_1415B2FE0(v88, v87, v86); /*0x1401fb712*/
    v29 = v214; /*0x1401fb717*/
    v38 = v213; /*0x1401fb71e*/
    v45 = v212; /*0x1401fb725*/
    v54 = v211; /*0x1401fb72c*/
    v62 = v210; /*0x1401fb733*/
  }
  v169 = v86; /*0x1401fb73a*/
  v198 = v82; /*0x1401fb741*/
  v89 = *(_BYTE *)(a2 + 632); /*0x1401fb748*/
  v90 = *(_QWORD *)(a2 + 656); /*0x1401fb750*/
  if ( v90 ) /*0x1401fb75a*/
  {
    v91 = *(const __m128i **)(a2 + 648); /*0x1401fb75c*/
    nullsub_1(); /*0x1401fb763*/
    v92 = (__m128i *)sub_140001350(v90, 1); /*0x1401fb770*/
    if ( !v92 ) /*0x1401fb778*/
      sub_1415F08AB(1, v90); /*0x1401fc303*/
    v146 = (__int64)v92; /*0x1401fb77e*/
    sub_1415B2FE0(v92, v91, v90); /*0x1401fb78b*/
    v29 = v214; /*0x1401fb790*/
    v38 = v213; /*0x1401fb797*/
    v45 = v212; /*0x1401fb79e*/
    v54 = v211; /*0x1401fb7a5*/
    v62 = v210; /*0x1401fb7ac*/
  }
  v170 = v90; /*0x1401fb7b3*/
  v199 = *(_BYTE *)(a2 + 664); /*0x1401fb7c1*/
  v93 = *(_QWORD *)(a2 + 688); /*0x1401fb7c7*/
  v148 = 1; /*0x1401fb7d3*/
  v147 = 1; /*0x1401fb7d7*/
  if ( v93 ) /*0x1401fb7de*/
  {
    v94 = *(const __m128i **)(a2 + 680); /*0x1401fb7e0*/
    nullsub_1(); /*0x1401fb7e7*/
    v95 = (__m128i *)sub_140001350(v93, 1); /*0x1401fb7f4*/
    if ( !v95 ) /*0x1401fb7fc*/
      sub_1415F08AB(1, v93); /*0x1401fc31d*/
    v147 = (__int64)v95; /*0x1401fb802*/
    sub_1415B2FE0(v95, v94, v93); /*0x1401fb80f*/
    v29 = v214; /*0x1401fb814*/
    v38 = v213; /*0x1401fb81b*/
    v45 = v212; /*0x1401fb822*/
    v54 = v211; /*0x1401fb829*/
    v62 = v210; /*0x1401fb830*/
  }
  v200 = *(_BYTE *)(a2 + 696); /*0x1401fb83e*/
  v96 = *(_QWORD *)(a2 + 720); /*0x1401fb844*/
  v171 = v93; /*0x1401fb84e*/
  if ( v96 ) /*0x1401fb855*/
  {
    v97 = *(const __m128i **)(a2 + 712); /*0x1401fb857*/
    nullsub_1(); /*0x1401fb85e*/
    v98 = (__m128i *)sub_140001350(v96, 1); /*0x1401fb86b*/
    if ( !v98 ) /*0x1401fb873*/
      sub_1415F08AB(1, v96); /*0x1401fc337*/
    v148 = (__int64)v98; /*0x1401fb879*/
    sub_1415B2FE0(v98, v97, v96); /*0x1401fb886*/
    v29 = v214; /*0x1401fb88b*/
    v38 = v213; /*0x1401fb892*/
    v45 = v212; /*0x1401fb899*/
    v54 = v211; /*0x1401fb8a0*/
    v62 = v210; /*0x1401fb8a7*/
  }
  v172 = v96; /*0x1401fb8ae*/
  v201 = *(_BYTE *)(a2 + 728); /*0x1401fb8bc*/
  v99 = *(_QWORD *)(a2 + 752); /*0x1401fb8c2*/
  v150 = 1; /*0x1401fb8ce*/
  v149 = 1; /*0x1401fb8d2*/
  if ( v99 ) /*0x1401fb8d9*/
  {
    v100 = *(const __m128i **)(a2 + 744); /*0x1401fb8db*/
    nullsub_1(); /*0x1401fb8e2*/
    v101 = (__m128i *)sub_140001350(v99, 1); /*0x1401fb8ef*/
    if ( !v101 ) /*0x1401fb8f7*/
      sub_1415F08AB(1, v99); /*0x1401fc351*/
    v149 = (__int64)v101; /*0x1401fb8fd*/
    sub_1415B2FE0(v101, v100, v99); /*0x1401fb90a*/
    v29 = v214; /*0x1401fb90f*/
    v38 = v213; /*0x1401fb916*/
    v45 = v212; /*0x1401fb91d*/
    v54 = v211; /*0x1401fb924*/
    v62 = v210; /*0x1401fb92b*/
  }
  v202 = v89; /*0x1401fb932*/
  v102 = v83; /*0x1401fb939*/
  v103 = *(_BYTE *)(a2 + 760); /*0x1401fb93c*/
  v104 = *(_QWORD *)(a2 + 784); /*0x1401fb944*/
  v173 = v99; /*0x1401fb94e*/
  if ( v104 ) /*0x1401fb955*/
  {
    v105 = *(const __m128i **)(a2 + 776); /*0x1401fb957*/
    nullsub_1(); /*0x1401fb95e*/
    v106 = (__m128i *)sub_140001350(v104, 1); /*0x1401fb96b*/
    if ( !v106 ) /*0x1401fb973*/
      sub_1415F08AB(1, v104); /*0x1401fc36b*/
    v150 = (__int64)v106; /*0x1401fb979*/
    sub_1415B2FE0(v106, v105, v104); /*0x1401fb986*/
    v29 = v214; /*0x1401fb98b*/
    v38 = v213; /*0x1401fb992*/
    v45 = v212; /*0x1401fb999*/
    v54 = v211; /*0x1401fb9a0*/
    v62 = v210; /*0x1401fb9a7*/
  }
  v174 = v104; /*0x1401fb9ae*/
  v203 = *(_BYTE *)(a2 + 792); /*0x1401fb9bc*/
  v152 = 1; /*0x1401fb9ce*/
  v151 = 1; /*0x1401fb9d2*/
  v107 = v102; /*0x1401fb9d9*/
  v108 = *(_QWORD *)(a2 + 816); /*0x1401fb9dc*/
  if ( v108 ) /*0x1401fb9df*/
  {
    v109 = *(const __m128i **)(a2 + 808); /*0x1401fb9e1*/
    nullsub_1(); /*0x1401fb9e8*/
    v110 = (__m128i *)sub_140001350(v108, 1); /*0x1401fb9f5*/
    if ( !v110 ) /*0x1401fb9fd*/
      sub_1415F08AB(1, v108); /*0x1401fc382*/
    v151 = (__int64)v110; /*0x1401fba03*/
    sub_1415B2FE0(v110, v109, v108); /*0x1401fba10*/
    v29 = v214; /*0x1401fba15*/
    v38 = v213; /*0x1401fba1c*/
    v45 = v212; /*0x1401fba23*/
    v54 = v211; /*0x1401fba2a*/
    v62 = v210; /*0x1401fba31*/
  }
  v204 = v103; /*0x1401fba38*/
  v205 = *(_BYTE *)(a2 + 824); /*0x1401fba46*/
  v111 = *(_QWORD *)(a2 + 848); /*0x1401fba4c*/
  v175 = v108; /*0x1401fba56*/
  if ( v111 ) /*0x1401fba5d*/
  {
    v112 = *(const __m128i **)(a2 + 840); /*0x1401fba5f*/
    nullsub_1(); /*0x1401fba66*/
    v113 = (__m128i *)sub_140001350(v111, 1); /*0x1401fba73*/
    if ( !v113 ) /*0x1401fba7b*/
      sub_1415F08AB(1, v111); /*0x1401fc399*/
    v152 = (__int64)v113; /*0x1401fba81*/
    sub_1415B2FE0(v113, v112, v111); /*0x1401fba8e*/
    v29 = v214; /*0x1401fba93*/
    v38 = v213; /*0x1401fba9a*/
    v45 = v212; /*0x1401fbaa1*/
    v54 = v211; /*0x1401fbaa8*/
    v62 = v210; /*0x1401fbaaf*/
  }
  v176 = v111; /*0x1401fbab6*/
  v206 = *(_BYTE *)(a2 + 856); /*0x1401fbac4*/
  v114 = *(_QWORD *)(a2 + 880); /*0x1401fbaca*/
  v154 = 1; /*0x1401fbad6*/
  v153 = 1; /*0x1401fbada*/
  if ( v114 ) /*0x1401fbae1*/
  {
    v115 = *(const __m128i **)(a2 + 872); /*0x1401fbae3*/
    nullsub_1(); /*0x1401fbaea*/
    v116 = (__m128i *)sub_140001350(v114, 1); /*0x1401fbaf7*/
    if ( !v116 ) /*0x1401fbaff*/
      sub_1415F08AB(1, v114); /*0x1401fc3b0*/
    v153 = (__int64)v116; /*0x1401fbb05*/
    sub_1415B2FE0(v116, v115, v114); /*0x1401fbb12*/
    v29 = v214; /*0x1401fbb17*/
    v38 = v213; /*0x1401fbb1e*/
    v45 = v212; /*0x1401fbb25*/
    v54 = v211; /*0x1401fbb2c*/
    v62 = v210; /*0x1401fbb33*/
  }
  v207 = *(_BYTE *)(a2 + 888); /*0x1401fbb41*/
  v117 = *(_QWORD *)(a2 + 912); /*0x1401fbb47*/
  v177 = v114; /*0x1401fbb51*/
  if ( v117 ) /*0x1401fbb58*/
  {
    v118 = *(const __m128i **)(a2 + 904); /*0x1401fbb5a*/
    nullsub_1(); /*0x1401fbb61*/
    v119 = (__m128i *)sub_140001350(v117, 1); /*0x1401fbb6e*/
    if ( !v119 ) /*0x1401fbb76*/
      sub_1415F08AB(1, v117); /*0x1401fc3c7*/
    v154 = (__int64)v119; /*0x1401fbb7c*/
    sub_1415B2FE0(v119, v118, v117); /*0x1401fbb89*/
    v29 = v214; /*0x1401fbb8e*/
    v38 = v213; /*0x1401fbb95*/
    v45 = v212; /*0x1401fbb9c*/
    v54 = v211; /*0x1401fbba3*/
    v62 = v210; /*0x1401fbbaa*/
  }
  v120 = *(_BYTE *)(a2 + 920); /*0x1401fbbb8*/
  v121 = *(_QWORD *)(a2 + 944); /*0x1401fbbc0*/
  if ( v121 ) /*0x1401fbbca*/
  {
    v209 = v107; /*0x1401fbbcc*/
    v122 = *(const __m128i **)(a2 + 936); /*0x1401fbbd3*/
    nullsub_1(); /*0x1401fbbda*/
    v123 = (__m128i *)sub_140001350(v121, 1); /*0x1401fbbe7*/
    if ( !v123 ) /*0x1401fbbef*/
      sub_1415F08AB(1, v121); /*0x1401fc3d7*/
    v124 = (__int64)v123; /*0x1401fbbf5*/
    sub_1415B2FE0(v123, v122, v121); /*0x1401fbc01*/
    v125 = v179; /*0x1401fbc06*/
    v29 = v214; /*0x1401fbc0d*/
    v38 = v213; /*0x1401fbc14*/
    v45 = v212; /*0x1401fbc1b*/
    v54 = v211; /*0x1401fbc22*/
    v62 = v210; /*0x1401fbc29*/
    v107 = v209; /*0x1401fbc30*/
  }
  else
  {
    v124 = 1; /*0x1401fbc39*/
    v125 = v179; /*0x1401fbc3f*/
  }
  *(_QWORD *)(a1 + 928) = v121; /*0x1401fbc46*/
  *(_QWORD *)(a1 + 936) = v124; /*0x1401fbc4d*/
  *(_QWORD *)(a1 + 944) = v121; /*0x1401fbc54*/
  *(_QWORD *)a1 = v125; /*0x1401fbc5b*/
  *(_QWORD *)(a1 + 8) = v127; /*0x1401fbc62*/
  *(_QWORD *)(a1 + 16) = v125; /*0x1401fbc66*/
  *(_BYTE *)(a1 + 24) = v180; /*0x1401fbc71*/
  *(_QWORD *)(a1 + 32) = v155; /*0x1401fbc7b*/
  *(_QWORD *)(a1 + 40) = v128; /*0x1401fbc83*/
  *(_QWORD *)(a1 + 48) = v155; /*0x1401fbc87*/
  *(_BYTE *)(a1 + 56) = v181; /*0x1401fbc92*/
  *(_QWORD *)(a1 + 64) = v156; /*0x1401fbc9c*/
  *(_QWORD *)(a1 + 72) = v129; /*0x1401fbca4*/
  *(_QWORD *)(a1 + 80) = v156; /*0x1401fbca8*/
  *(_BYTE *)(a1 + 88) = v182; /*0x1401fbcb3*/
  *(_QWORD *)(a1 + 96) = v157; /*0x1401fbcbd*/
  *(_QWORD *)(a1 + 104) = v130; /*0x1401fbcc5*/
  *(_QWORD *)(a1 + 112) = v157; /*0x1401fbcc9*/
  *(_BYTE *)(a1 + 120) = v183; /*0x1401fbcd4*/
  *(_QWORD *)(a1 + 128) = v158; /*0x1401fbcde*/
  *(_QWORD *)(a1 + 136) = v164; /*0x1401fbcec*/
  *(_QWORD *)(a1 + 144) = v158; /*0x1401fbcf3*/
  *(_BYTE *)(a1 + 152) = v184; /*0x1401fbd01*/
  *(_QWORD *)(a1 + 960) = v159; /*0x1401fbd0e*/
  *(_QWORD *)(a1 + 968) = v178; /*0x1401fbd1c*/
  *(_QWORD *)(a1 + 976) = v159; /*0x1401fbd23*/
  *(_BYTE *)(a1 + 984) = v208; /*0x1401fbd31*/
  *(_QWORD *)(a1 + 160) = v29; /*0x1401fbd37*/
  *(_QWORD *)(a1 + 168) = v131; /*0x1401fbd42*/
  *(_QWORD *)(a1 + 176) = v29; /*0x1401fbd49*/
  *(_BYTE *)(a1 + 184) = v185; /*0x1401fbd57*/
  *(_QWORD *)(a1 + 192) = v160; /*0x1401fbd64*/
  *(_QWORD *)(a1 + 200) = v132; /*0x1401fbd6f*/
  *(_QWORD *)(a1 + 208) = v160; /*0x1401fbd76*/
  *(_BYTE *)(a1 + 216) = v189; /*0x1401fbd84*/
  *(_QWORD *)(a1 + 224) = v38; /*0x1401fbd8a*/
  *(_QWORD *)(a1 + 232) = v133; /*0x1401fbd95*/
  *(_QWORD *)(a1 + 240) = v38; /*0x1401fbd9c*/
  *(_BYTE *)(a1 + 248) = v186; /*0x1401fbdaa*/
  *(_QWORD *)(a1 + 256) = v161; /*0x1401fbdb7*/
  *(_QWORD *)(a1 + 264) = v134; /*0x1401fbdc2*/
  *(_QWORD *)(a1 + 272) = v161; /*0x1401fbdc9*/
  *(_BYTE *)(a1 + 280) = v187; /*0x1401fbdd7*/
  *(_QWORD *)(a1 + 288) = v45; /*0x1401fbddd*/
  *(_QWORD *)(a1 + 296) = v135; /*0x1401fbde8*/
  *(_QWORD *)(a1 + 304) = v45; /*0x1401fbdef*/
  *(_BYTE *)(a1 + 312) = v195; /*0x1401fbdfd*/
  *(_QWORD *)(a1 + 320) = v162; /*0x1401fbe0a*/
  *(_QWORD *)(a1 + 328) = v136; /*0x1401fbe15*/
  *(_QWORD *)(a1 + 336) = v162; /*0x1401fbe1c*/
  *(_BYTE *)(a1 + 344) = v192; /*0x1401fbe2a*/
  *(_QWORD *)(a1 + 352) = v54; /*0x1401fbe30*/
  *(_QWORD *)(a1 + 360) = v137; /*0x1401fbe3b*/
  *(_QWORD *)(a1 + 368) = v54; /*0x1401fbe42*/
  *(_BYTE *)(a1 + 376) = v188; /*0x1401fbe50*/
  *(_QWORD *)(a1 + 384) = v163; /*0x1401fbe5d*/
  *(_QWORD *)(a1 + 392) = v138; /*0x1401fbe68*/
  *(_QWORD *)(a1 + 400) = v163; /*0x1401fbe6f*/
  *(_BYTE *)(a1 + 408) = v198; /*0x1401fbe7d*/
  *(_QWORD *)(a1 + 416) = v62; /*0x1401fbe83*/
  *(_QWORD *)(a1 + 424) = v139; /*0x1401fbe8e*/
  *(_QWORD *)(a1 + 432) = v62; /*0x1401fbe95*/
  *(_BYTE *)(a1 + 440) = v190; /*0x1401fbea3*/
  *(_QWORD *)(a1 + 448) = v165; /*0x1401fbeb0*/
  *(_QWORD *)(a1 + 456) = v140; /*0x1401fbebb*/
  *(_QWORD *)(a1 + 464) = v165; /*0x1401fbec2*/
  *(_BYTE *)(a1 + 472) = v191; /*0x1401fbed0*/
  *(_QWORD *)(a1 + 480) = v107; /*0x1401fbed6*/
  *(_QWORD *)(a1 + 488) = v141; /*0x1401fbee1*/
  *(_QWORD *)(a1 + 496) = v107; /*0x1401fbee8*/
  *(_BYTE *)(a1 + 504) = v193; /*0x1401fbef6*/
  *(_QWORD *)(a1 + 512) = v166; /*0x1401fbf03*/
  *(_QWORD *)(a1 + 520) = v142; /*0x1401fbf0e*/
  *(_QWORD *)(a1 + 528) = v166; /*0x1401fbf15*/
  *(_BYTE *)(a1 + 536) = v194; /*0x1401fbf23*/
  *(_QWORD *)(a1 + 544) = v167; /*0x1401fbf30*/
  *(_QWORD *)(a1 + 552) = v143; /*0x1401fbf3b*/
  *(_QWORD *)(a1 + 560) = v167; /*0x1401fbf42*/
  *(_BYTE *)(a1 + 568) = v196; /*0x1401fbf50*/
  *(_QWORD *)(a1 + 576) = v168; /*0x1401fbf5d*/
  *(_QWORD *)(a1 + 584) = v144; /*0x1401fbf68*/
  *(_QWORD *)(a1 + 592) = v168; /*0x1401fbf6f*/
  *(_BYTE *)(a1 + 600) = v197; /*0x1401fbf7d*/
  *(_QWORD *)(a1 + 608) = v169; /*0x1401fbf8a*/
  *(_QWORD *)(a1 + 616) = v145; /*0x1401fbf95*/
  *(_QWORD *)(a1 + 624) = v169; /*0x1401fbf9c*/
  *(_BYTE *)(a1 + 632) = v202; /*0x1401fbfaa*/
  *(_QWORD *)(a1 + 640) = v170; /*0x1401fbfb7*/
  *(_QWORD *)(a1 + 648) = v146; /*0x1401fbfc2*/
  *(_QWORD *)(a1 + 656) = v170; /*0x1401fbfc9*/
  *(_BYTE *)(a1 + 664) = v199; /*0x1401fbfd7*/
  *(_QWORD *)(a1 + 672) = v171; /*0x1401fbfe4*/
  *(_QWORD *)(a1 + 680) = v147; /*0x1401fbfef*/
  *(_QWORD *)(a1 + 688) = v171; /*0x1401fbff6*/
  *(_BYTE *)(a1 + 696) = v200; /*0x1401fc004*/
  *(_QWORD *)(a1 + 704) = v172; /*0x1401fc011*/
  *(_QWORD *)(a1 + 712) = v148; /*0x1401fc01c*/
  *(_QWORD *)(a1 + 720) = v172; /*0x1401fc023*/
  *(_BYTE *)(a1 + 728) = v201; /*0x1401fc031*/
  *(_QWORD *)(a1 + 736) = v173; /*0x1401fc03e*/
  *(_QWORD *)(a1 + 744) = v149; /*0x1401fc049*/
  *(_QWORD *)(a1 + 752) = v173; /*0x1401fc050*/
  *(_BYTE *)(a1 + 760) = v204; /*0x1401fc05e*/
  *(_QWORD *)(a1 + 768) = v174; /*0x1401fc06b*/
  *(_QWORD *)(a1 + 776) = v150; /*0x1401fc076*/
  *(_QWORD *)(a1 + 784) = v174; /*0x1401fc07d*/
  *(_BYTE *)(a1 + 792) = v203; /*0x1401fc08b*/
  *(_QWORD *)(a1 + 800) = v175; /*0x1401fc098*/
  *(_QWORD *)(a1 + 808) = v151; /*0x1401fc0a3*/
  *(_QWORD *)(a1 + 816) = v175; /*0x1401fc0aa*/
  *(_BYTE *)(a1 + 824) = v205; /*0x1401fc0b8*/
  *(_QWORD *)(a1 + 832) = v176; /*0x1401fc0c5*/
  *(_QWORD *)(a1 + 840) = v152; /*0x1401fc0d0*/
  *(_QWORD *)(a1 + 848) = v176; /*0x1401fc0d7*/
  *(_BYTE *)(a1 + 856) = v206; /*0x1401fc0e5*/
  *(_QWORD *)(a1 + 864) = v177; /*0x1401fc0f2*/
  *(_QWORD *)(a1 + 872) = v153; /*0x1401fc0fd*/
  *(_QWORD *)(a1 + 880) = v177; /*0x1401fc104*/
  *(_BYTE *)(a1 + 888) = v207; /*0x1401fc112*/
  *(_QWORD *)(a1 + 896) = v117; /*0x1401fc11f*/
  *(_QWORD *)(a1 + 904) = v154; /*0x1401fc12a*/
  *(_QWORD *)(a1 + 912) = v117; /*0x1401fc131*/
  *(_BYTE *)(a1 + 920) = v120; /*0x1401fc138*/
  result = *(unsigned __int8 *)(a2 + 952); /*0x1401fc13f*/
  *(_BYTE *)(a1 + 952) = result; /*0x1401fc146*/
  return result; /*0x1401fc14c*/
}