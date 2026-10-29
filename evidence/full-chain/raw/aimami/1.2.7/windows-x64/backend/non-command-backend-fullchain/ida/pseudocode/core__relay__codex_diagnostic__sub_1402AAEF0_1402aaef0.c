// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x1402aaef0 | name sub_1402AAEF0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402AAEF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 result; // rax
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int128 *v8; // rbx
  __int64 *v9; // r12
  __int128 *v10; // rdi
  __int64 v11; // r15
  const __m128i *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rcx
  signed __int64 v19; // r13
  __int64 *v20; // r15
  __int64 v21; // r12
  const __m128i *v22; // rdi
  __int64 v23; // rsi
  __m128i *v24; // rax
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // r13
  __int128 *v30; // r15
  __int64 *v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rsi
  __m128i *v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  void *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  signed __int64 v41; // r13
  __int128 *v42; // r15
  const __m128i *v43; // rdi
  __int64 v44; // rsi
  __m128i *v45; // rax
  __int64 v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51; // r14
  __int128 *v52; // r13
  const __m128i *v53; // rdi
  unsigned __int64 v54; // rbx
  __int64 v55; // rsi
  __m128i *v56; // rax
  __m128i *v57; // rsi
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  void *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  char v63; // r14
  __int128 *v64; // r13
  const __m128i *v65; // rdi
  unsigned __int64 v66; // rbx
  __int64 v67; // rsi
  __m128i *v68; // rax
  __m128i *v69; // rsi
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  _DWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  signed __int64 v75; // r13
  __int128 *v76; // r15
  const __m128i *v77; // rdi
  __int64 v78; // rsi
  __m128i *v79; // rax
  __int64 v80; // r14
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  char v85; // r14
  __int128 *v86; // r13
  const __m128i *v87; // rdi
  unsigned __int64 v88; // rbx
  __int64 v89; // rsi
  __m128i *v90; // rax
  __m128i *v91; // rsi
  unsigned __int64 v92; // rax
  __int64 v93; // rcx
  void *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r8
  char v97; // r14
  __int128 *v98; // r13
  const __m128i *v99; // rdi
  unsigned __int64 v100; // rbx
  __int64 v101; // rsi
  __m128i *v102; // rax
  __m128i *v103; // rsi
  unsigned __int64 v104; // rax
  __int64 v105; // rcx
  void *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rcx
  _QWORD *v110; // rax
  __m128i *v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rcx
  signed __int64 v115; // r13
  __int128 *v116; // r15
  const __m128i *v117; // rdi
  __int64 v118; // rsi
  __m128i *v119; // rax
  __int64 v120; // r14
  __int64 v121; // rcx
  void *v122; // rax
  signed __int64 v123; // r13
  __int128 *v124; // r15
  const __m128i *v125; // rdi
  __int64 v126; // rsi
  __m128i *v127; // rax
  __int64 v128; // r14
  __int64 v129; // rcx
  __int64 v130; // r13
  __int128 *v131; // r15
  __int64 *v132; // rdi
  __int64 v133; // r12
  __int64 v134; // rsi
  __int64 v135; // r9
  __int64 v136; // rax
  __int64 v137; // rcx
  _BYTE v138[31]; // [rsp+29h] [rbp-57h]
  _QWORD v139[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v140; // [rsp+60h] [rbp-20h]
  __int64 v141; // [rsp+68h] [rbp-18h]
  __int64 v142; // [rsp+70h] [rbp-10h]
  unsigned __int64 v143; // [rsp+78h] [rbp-8h]
  __int64 v144; // [rsp+80h] [rbp+0h]
  __int64 v145; // [rsp+88h] [rbp+8h]
  unsigned __int64 v146; // [rsp+90h] [rbp+10h]
  unsigned __int64 v147; // [rsp+98h] [rbp+18h]
  __int64 v148; // [rsp+A0h] [rbp+20h]
  __int64 v149; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v150; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v151; // [rsp+B8h] [rbp+38h]
  __int64 v152; // [rsp+C0h] [rbp+40h]
  __int128 v153; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v154; // [rsp+D8h] [rbp+58h]
  __int128 v155; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v156; // [rsp+F0h] [rbp+70h]
  __int64 v157; // [rsp+F8h] [rbp+78h]
  _QWORD *v158; // [rsp+100h] [rbp+80h]
  __int64 v159; // [rsp+108h] [rbp+88h]
  __int64 v160; // [rsp+110h] [rbp+90h] BYREF
  _DWORD *v161; // [rsp+118h] [rbp+98h]
  __int64 v162; // [rsp+120h] [rbp+A0h]
  __int64 v163; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v164; // [rsp+130h] [rbp+B0h]
  const __m128i *v165; // [rsp+138h] [rbp+B8h]
  __int64 v166; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v167; // [rsp+148h] [rbp+C8h]
  __int64 v168; // [rsp+158h] [rbp+D8h]
  _QWORD v169[9]; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v170; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v171; // [rsp+1B0h] [rbp+130h]
  __int64 v172; // [rsp+1C0h] [rbp+140h]
  __int128 v173; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v174; // [rsp+1D8h] [rbp+158h]
  _OWORD v175[2]; // [rsp+1E0h] [rbp+160h] BYREF
  const __m128i *v176; // [rsp+208h] [rbp+188h]
  __int128 v177; // [rsp+210h] [rbp+190h] BYREF
  __int128 v178; // [rsp+220h] [rbp+1A0h]
  const __m128i *v179; // [rsp+230h] [rbp+1B0h]
  __int128 v180; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v181; // [rsp+248h] [rbp+1C8h]
  char v182; // [rsp+251h] [rbp+1D1h]
  char v183; // [rsp+252h] [rbp+1D2h]
  char v184; // [rsp+253h] [rbp+1D3h]
  char v185; // [rsp+254h] [rbp+1D4h]
  char v186; // [rsp+255h] [rbp+1D5h]
  char v187; // [rsp+256h] [rbp+1D6h]
  char v188; // [rsp+257h] [rbp+1D7h]
  char v189; // [rsp+258h] [rbp+1D8h]
  char v190; // [rsp+259h] [rbp+1D9h]
  char v191; // [rsp+25Ah] [rbp+1DAh]
  char v192; // [rsp+25Bh] [rbp+1DBh]
  char v193; // [rsp+25Ch] [rbp+1DCh]
  char v194; // [rsp+25Dh] [rbp+1DDh]
  char v195; // [rsp+25Eh] [rbp+1DEh]
  char v196; // [rsp+25Fh] [rbp+1DFh]
  __int64 v197; // [rsp+260h] [rbp+1E0h]

  v197 = -2;
  v2 = *a1;
  result = a1[1];
  v4 = *(_QWORD **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  if ( *a1 != result )
  {
    v142 = *(_QWORD *)(a2 + 16);
    v6 = a1[2];
    v143 = 0x8F5C28F5C28F5C29uLL * ((unsigned __int64)(result - v2) >> 4);
    v7 = 0x6449646165726874LL;
    v8 = &v153;
    v9 = &v166;
    v10 = &v177;
    v11 = 0x5074756F6C6C6F72LL;
    result = 0;
    v158 = v4;
    v141 = v6;
    do
    {
      v157 = v5;
      v140 = result;
      v12 = (const __m128i *)(v2 + 400 * result);
      v13 = *(_QWORD *)(v6 + 32);
      v14 = 216LL * *(_QWORD *)(v6 + 40);
      v169[0] = v13;
      v169[1] = v13 + v14;
      v179 = v12;
      v169[2] = v12;
      sub_1403D7E40(&v163, v169);
      v15 = v2;
      *(_QWORD *)&v153 = 0;
      v154 = 0;
      nullsub_1(v16);
      v17 = (__int64 *)sub_140001650(8, 1);
      if ( !v17 )
        sub_141938D2B(1, 8);
      *v17 = v7;
      v166 = 8;
      *(_QWORD *)&v167 = v17;
      *((_QWORD *)&v167 + 1) = 8;
      v19 = v179[3].m128i_i64[0];
      if ( v19 < 0 )
      {
        v23 = 0;
LABEL_121:
        v195 = 1;
        sub_141938D2B(v23, v19);
      }
      v159 = v15;
      if ( v19 )
      {
        v20 = v9;
        v21 = v7;
        v22 = (const __m128i *)v179[2].m128i_i64[1];
        nullsub_1(v18);
        v23 = 1;
        v24 = (__m128i *)sub_140001650(v19, 1);
        if ( !v24 )
          goto LABEL_121;
        v25 = (__int64)v24;
        sub_1418F44E0(v24, v22, v19);
        v7 = v21;
        v9 = v20;
        v10 = &v177;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v25 = 1;
      }
      LOBYTE(v177) = 3;
      *((_QWORD *)&v177 + 1) = v19;
      *(_QWORD *)&v178 = v25;
      *((_QWORD *)&v178 + 1) = v19;
      v195 = 0;
      sub_140E72AA0(v175, v8, v9, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      nullsub_1(v26);
      v27 = sub_140001650(11, 1);
      if ( !v27 )
        sub_141938D2B(1, 11);
      *(_QWORD *)v27 = v11;
      *(_DWORD *)(v27 + 7) = 1752457552;
      v170 = 11;
      v176 = (const __m128i *)v27;
      *(_QWORD *)&v171 = v27;
      *((_QWORD *)&v171 + 1) = 11;
      sub_1416AB5A0(v9, v179->m128i_i64[1], v179[1].m128i_i64[0]);
      v29 = *((_QWORD *)&v167 + 1);
      v176 = (const __m128i *)v167;
      if ( v167 < 0 )
      {
        v33 = 0;
LABEL_123:
        v194 = 1;
        sub_141938D2B(v33, v29);
      }
      if ( *((_QWORD *)&v167 + 1) )
      {
        v30 = v10;
        v31 = v9;
        v32 = v7;
        nullsub_1(v28);
        v33 = 1;
        v34 = (__m128i *)sub_140001650(v29, 1);
        if ( !v34 )
          goto LABEL_123;
        v35 = (__int64)v34;
        sub_1418F44E0(v34, v176, v29);
        v7 = v32;
        v9 = v31;
        v10 = v30;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v35 = 1;
      }
      LOBYTE(v177) = 3;
      *((_QWORD *)&v177 + 1) = v29;
      *(_QWORD *)&v178 = v35;
      *((_QWORD *)&v178 + 1) = v29;
      v194 = 0;
      sub_140E72AA0(v175, v8, &v170, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      if ( v166 > 0 )
        sub_140001660(v176, v166, 1);
      nullsub_1(v36);
      v37 = (void *)sub_140001650(15, 1);
      if ( !v37 )
        sub_141938D2B(1, 15);
      qmemcpy(v37, "originalRollout", 15);
      v139[0] = 15;
      v139[1] = v37;
      v139[2] = 15;
      *(_QWORD *)&v155 = 0;
      v156 = 0;
      nullsub_1(0x6C616E696769726FLL);
      v38 = sub_140001650(5, 1);
      if ( !v38 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v38 + 4) = 116;
      *(_DWORD *)v38 = 1936877926;
      v160 = 5;
      v161 = (_DWORD *)v38;
      v162 = 5;
      *(_QWORD *)&v173 = 0;
      v174 = 0;
      nullsub_1(v39);
      v40 = (_QWORD *)sub_140001650(8, 1);
      if ( !v40 )
        sub_141938D2B(1, 8);
      *v40 = 0x72656469766F7270LL;
      *(_QWORD *)&v180 = 8;
      *((_QWORD *)&v180 + 1) = v40;
      v181 = 8;
      v41 = v179[4].m128i_i64[1];
      if ( v41 < 0 )
      {
        v44 = 0;
LABEL_125:
        v193 = 1;
        sub_141938D2B(v44, v41);
      }
      if ( v41 )
      {
        v42 = v10;
        v43 = (const __m128i *)v179[4].m128i_i64[0];
        nullsub_1(0x72656469766F7270LL);
        v44 = 1;
        v45 = (__m128i *)sub_140001650(v41, 1);
        if ( !v45 )
          goto LABEL_125;
        v46 = (__int64)v45;
        sub_1418F44E0(v45, v43, v41);
        v7 = 0x6449646165726874LL;
        v10 = v42;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v46 = 1;
      }
      LOBYTE(v177) = 3;
      *((_QWORD *)&v177 + 1) = v41;
      *(_QWORD *)&v178 = v46;
      *((_QWORD *)&v178 + 1) = v41;
      v193 = 0;
      sub_140E72AA0(v175, &v173, &v180, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      nullsub_1(v47);
      v48 = sub_140001650(5, 1);
      if ( !v48 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v48 + 4) = 108;
      *(_DWORD *)v48 = 1701080941;
      *(_QWORD *)&v180 = 5;
      *((_QWORD *)&v180 + 1) = v48;
      v181 = 5;
      v49 = v144;
      if ( v179[5].m128i_i64[0] == -1 )
      {
        v51 = 0;
        v58 = v146;
      }
      else
      {
        v50 = v179[6].m128i_i64[0];
        if ( v50 < 0 )
        {
          v55 = 0;
LABEL_127:
          v192 = 1;
          sub_141938D2B(v55, v50);
        }
        v51 = 3;
        if ( v50 )
        {
          v52 = v8;
          v53 = (const __m128i *)v179[5].m128i_i64[1];
          v54 = v179[6].m128i_u64[0];
          nullsub_1(v144);
          v55 = 1;
          v56 = (__m128i *)sub_140001650(v54, 1);
          v50 = v54;
          if ( !v56 )
            goto LABEL_127;
          v57 = v56;
          sub_1418F44E0(v56, v53, v54);
          v49 = (__int64)v57;
          v58 = v54;
          v7 = 0x6449646165726874LL;
          v8 = v52;
          v10 = &v177;
        }
        else
        {
          v49 = 1;
          v58 = 0;
        }
      }
      LOBYTE(v177) = v51;
      *((_QWORD *)&v177 + 1) = v58;
      v144 = v49;
      *(_QWORD *)&v178 = v49;
      v146 = v58;
      *((_QWORD *)&v178 + 1) = v58;
      v192 = 0;
      sub_140E72AA0(v175, &v173, &v180, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      nullsub_1(v59);
      v60 = (void *)sub_140001650(15, 1);
      if ( !v60 )
        sub_141938D2B(1, 15);
      qmemcpy(v60, "reasoningEffort", 15);
      *(_QWORD *)&v180 = 15;
      *((_QWORD *)&v180 + 1) = v60;
      v181 = 15;
      v61 = v145;
      if ( v179[6].m128i_i64[1] == -1 )
      {
        v63 = 0;
        v70 = v147;
      }
      else
      {
        v62 = v179[7].m128i_i64[1];
        if ( v62 < 0 )
        {
          v67 = 0;
LABEL_131:
          v191 = 1;
          sub_141938D2B(v67, v62);
        }
        v63 = 3;
        if ( v62 )
        {
          v64 = v8;
          v65 = (const __m128i *)v179[7].m128i_i64[0];
          v66 = v179[7].m128i_u64[1];
          nullsub_1(v145);
          v67 = 1;
          v68 = (__m128i *)sub_140001650(v66, 1);
          v62 = v66;
          if ( !v68 )
            goto LABEL_131;
          v69 = v68;
          sub_1418F44E0(v68, v65, v66);
          v61 = (__int64)v69;
          v70 = v66;
          v7 = 0x6449646165726874LL;
          v8 = v64;
          v10 = &v177;
        }
        else
        {
          v61 = 1;
          v70 = 0;
        }
      }
      LOBYTE(v177) = v63;
      *((_QWORD *)&v177 + 1) = v70;
      v145 = v61;
      *(_QWORD *)&v178 = v61;
      v147 = v70;
      *((_QWORD *)&v178 + 1) = v70;
      v191 = 0;
      sub_140E72AA0(v175, &v173, &v180, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      v168 = v174;
      v167 = v173;
      LOBYTE(v166) = 5;
      v190 = 0;
      sub_140E72AA0(v10, &v155, &v160, v9);
      if ( (_BYTE)v177 != 0xFF )
        sub_14002F9D0(v10);
      nullsub_1(v71);
      v72 = (_DWORD *)sub_140001650(4, 1);
      if ( !v72 )
        sub_141938D2B(1, 4);
      *v72 = 1953718636;
      v160 = 4;
      v161 = v72;
      v162 = 4;
      *(_QWORD *)&v173 = 0;
      v174 = 0;
      nullsub_1(v73);
      v74 = (_QWORD *)sub_140001650(8, 1);
      if ( !v74 )
        sub_141938D2B(1, 8);
      *v74 = 0x72656469766F7270LL;
      *(_QWORD *)&v180 = 8;
      *((_QWORD *)&v180 + 1) = v74;
      v181 = 8;
      v75 = v179[9].m128i_i64[0];
      if ( v75 < 0 )
      {
        v78 = 0;
LABEL_129:
        v189 = 1;
        sub_141938D2B(v78, v75);
      }
      if ( v75 )
      {
        v76 = v10;
        v77 = (const __m128i *)v179[8].m128i_i64[1];
        nullsub_1(0x72656469766F7270LL);
        v78 = 1;
        v79 = (__m128i *)sub_140001650(v75, 1);
        if ( !v79 )
          goto LABEL_129;
        v80 = (__int64)v79;
        sub_1418F44E0(v79, v77, v75);
        v7 = 0x6449646165726874LL;
        v10 = v76;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v80 = 1;
      }
      LOBYTE(v177) = 3;
      *((_QWORD *)&v177 + 1) = v75;
      *(_QWORD *)&v178 = v80;
      *((_QWORD *)&v178 + 1) = v75;
      v189 = 0;
      sub_140E72AA0(v175, &v173, &v180, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      nullsub_1(v81);
      v82 = sub_140001650(5, 1);
      if ( !v82 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v82 + 4) = 108;
      *(_DWORD *)v82 = 1701080941;
      *(_QWORD *)&v180 = 5;
      *((_QWORD *)&v180 + 1) = v82;
      v181 = 5;
      v83 = v148;
      if ( v179[9].m128i_i64[1] == -1 )
      {
        v85 = 0;
        v92 = v150;
      }
      else
      {
        v84 = v179[10].m128i_i64[1];
        if ( v84 < 0 )
        {
          v89 = 0;
LABEL_133:
          v188 = 1;
          sub_141938D2B(v89, v84);
        }
        v85 = 3;
        if ( v84 )
        {
          v86 = v8;
          v87 = (const __m128i *)v179[10].m128i_i64[0];
          v88 = v179[10].m128i_u64[1];
          nullsub_1(v148);
          v89 = 1;
          v90 = (__m128i *)sub_140001650(v88, 1);
          v84 = v88;
          if ( !v90 )
            goto LABEL_133;
          v91 = v90;
          sub_1418F44E0(v90, v87, v88);
          v83 = (__int64)v91;
          v92 = v88;
          v7 = 0x6449646165726874LL;
          v8 = v86;
          v10 = &v177;
        }
        else
        {
          v83 = 1;
          v92 = 0;
        }
      }
      LOBYTE(v177) = v85;
      *((_QWORD *)&v177 + 1) = v92;
      v148 = v83;
      *(_QWORD *)&v178 = v83;
      v150 = v92;
      *((_QWORD *)&v178 + 1) = v92;
      v188 = 0;
      sub_140E72AA0(v175, &v173, &v180, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      nullsub_1(v93);
      v94 = (void *)sub_140001650(15, 1);
      if ( !v94 )
        sub_141938D2B(1, 15);
      qmemcpy(v94, "reasoningEffort", 15);
      *(_QWORD *)&v180 = 15;
      *((_QWORD *)&v180 + 1) = v94;
      v181 = 15;
      v95 = v149;
      if ( v179[11].m128i_i64[0] == -1 )
      {
        v97 = 0;
        v104 = v151;
      }
      else
      {
        v96 = v179[12].m128i_i64[0];
        if ( v96 < 0 )
        {
          v101 = 0;
LABEL_137:
          v187 = 1;
          sub_141938D2B(v101, v96);
        }
        v97 = 3;
        if ( v96 )
        {
          v98 = v8;
          v99 = (const __m128i *)v179[11].m128i_i64[1];
          v100 = v179[12].m128i_u64[0];
          nullsub_1(v149);
          v101 = 1;
          v102 = (__m128i *)sub_140001650(v100, 1);
          v96 = v100;
          if ( !v102 )
            goto LABEL_137;
          v103 = v102;
          sub_1418F44E0(v102, v99, v100);
          v95 = (__int64)v103;
          v104 = v100;
          v7 = 0x6449646165726874LL;
          v8 = v98;
          v10 = &v177;
        }
        else
        {
          v95 = 1;
          v104 = 0;
        }
      }
      LOBYTE(v177) = v97;
      *((_QWORD *)&v177 + 1) = v104;
      v149 = v95;
      *(_QWORD *)&v178 = v95;
      v151 = v104;
      *((_QWORD *)&v178 + 1) = v104;
      v187 = 0;
      sub_140E72AA0(v175, &v173, &v180, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      v168 = v174;
      v167 = v173;
      LOBYTE(v166) = 5;
      v186 = 0;
      sub_140E72AA0(v10, &v155, &v160, v9);
      if ( (_BYTE)v177 != 0xFF )
        sub_14002F9D0(v10);
      v172 = v156;
      v171 = v155;
      LOBYTE(v170) = 5;
      v185 = 0;
      sub_140E72AA0(v10, v8, v139, &v170);
      if ( (_BYTE)v177 != 0xFF )
        sub_14002F9D0(v10);
      nullsub_1(v105);
      v106 = (void *)sub_140001650(14, 1);
      if ( !v106 )
        sub_141938D2B(1, 14);
      qmemcpy(v106, "originalDbRows", 14);
      v166 = 14;
      *(_QWORD *)&v167 = v106;
      *((_QWORD *)&v167 + 1) = 14;
      v196 = 1;
      sub_140C0FE40(v10, &v163);
      if ( (_BYTE)v177 == 0xFF )
      {
        *(_QWORD *)&v175[0] = *((_QWORD *)&v177 + 1);
        sub_141939040(
          (unsigned int)aCalledResultUn_2,
          43,
          (unsigned int)v175,
          (unsigned int)&off_1419E6A30,
          (__int64)&off_1419E6478);
      }
      v175[1] = v178;
      v175[0] = v177;
      v196 = 0;
      sub_140E72AA0(v10, v8, v9, v175);
      if ( (_BYTE)v177 != 0xFF )
        sub_14002F9D0(v10);
      nullsub_1(v107);
      v108 = sub_140001650(6, 1);
      if ( !v108 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v108 + 4) = 29797;
      *(_DWORD *)v108 = 1735549300;
      *(_QWORD *)&v173 = 6;
      *((_QWORD *)&v173 + 1) = v108;
      v174 = 6;
      *(_QWORD *)&v180 = 0;
      v181 = 0;
      nullsub_1(v109);
      v110 = (_QWORD *)sub_140001650(8, 1);
      if ( !v110 )
        sub_141938D2B(1, 8);
      *v110 = 0x72656469766F7270LL;
      v170 = 8;
      *(_QWORD *)&v171 = v110;
      *((_QWORD *)&v171 + 1) = 8;
      nullsub_1(0x72656469766F7270LL);
      v111 = (__m128i *)sub_140001650(6, 1);
      v176 = v111;
      if ( !v111 )
        sub_141938D2B(1, 6);
      v111->m128i_i16[2] = 26977;
      v111->m128i_i32[0] = 1852141679;
      LOBYTE(v177) = 3;
      *((_QWORD *)&v177 + 1) = 6;
      *(_QWORD *)&v178 = v111;
      *((_QWORD *)&v178 + 1) = 6;
      sub_140E72AA0(v175, &v180, &v170, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      nullsub_1(v112);
      v113 = sub_140001650(5, 1);
      if ( !v113 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v113 + 4) = 108;
      *(_DWORD *)v113 = 1701080941;
      v170 = 5;
      *(_QWORD *)&v171 = v113;
      *((_QWORD *)&v171 + 1) = 5;
      v115 = v179[22].m128i_i64[1];
      if ( v115 < 0 )
      {
        v118 = 0;
LABEL_135:
        v184 = 1;
        sub_141938D2B(v118, v115);
      }
      if ( v115 )
      {
        v116 = v10;
        v117 = (const __m128i *)v179[22].m128i_i64[0];
        nullsub_1(v114);
        v118 = 1;
        v119 = (__m128i *)sub_140001650(v115, 1);
        if ( !v119 )
          goto LABEL_135;
        v120 = (__int64)v119;
        sub_1418F44E0(v119, v117, v115);
        v7 = 0x6449646165726874LL;
        v10 = v116;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v120 = 1;
      }
      LOBYTE(v177) = 3;
      *((_QWORD *)&v177 + 1) = v115;
      *(_QWORD *)&v178 = v120;
      *((_QWORD *)&v178 + 1) = v115;
      v184 = 0;
      sub_140E72AA0(v175, &v180, &v170, v10);
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      nullsub_1(v121);
      v122 = (void *)sub_140001650(15, 1);
      if ( !v122 )
        sub_141938D2B(1, 15);
      qmemcpy(v122, "reasoningEffort", 15);
      v170 = 15;
      *(_QWORD *)&v171 = v122;
      *((_QWORD *)&v171 + 1) = 15;
      v123 = v179[24].m128i_i64[0];
      if ( v123 < 0 )
      {
        v126 = 0;
LABEL_139:
        v183 = 1;
        sub_141938D2B(v126, v123);
      }
      if ( v123 )
      {
        v124 = v10;
        v125 = (const __m128i *)v179[23].m128i_i64[1];
        nullsub_1(0x6E696E6F73616572LL);
        v126 = 1;
        v127 = (__m128i *)sub_140001650(v123, 1);
        if ( !v127 )
          goto LABEL_139;
        v128 = (__int64)v127;
        sub_1418F44E0(v127, v125, v123);
        v7 = 0x6449646165726874LL;
        v10 = v124;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v128 = 1;
      }
      LOBYTE(v177) = 3;
      *((_QWORD *)&v177 + 1) = v123;
      *(_QWORD *)&v178 = v128;
      *((_QWORD *)&v178 + 1) = v123;
      v183 = 0;
      sub_140E72AA0(v175, &v180, &v170, v10);
      v2 = v159;
      if ( LOBYTE(v175[0]) != 0xFF )
        sub_14002F9D0(v175);
      v168 = v181;
      v167 = v180;
      LOBYTE(v166) = 5;
      v182 = 0;
      sub_140E72AA0(v10, v8, &v173, v9);
      if ( (_BYTE)v177 != 0xFF )
        sub_14002F9D0(v10);
      *(_QWORD *)&v138[23] = v154;
      *(_OWORD *)&v138[7] = v153;
      v129 = v164;
      v176 = v165;
      v152 = v164;
      v179 = nullptr;
      while ( v176 != v179 )
      {
        v179 = (const __m128i *)((char *)v179 + 1);
        v130 = v11;
        v131 = v10;
        v132 = v9;
        v133 = v7;
        v134 = v129 + 32;
        sub_1403880E0(v129);
        v129 = v134;
        v7 = v133;
        v9 = v132;
        v10 = v131;
        v11 = v130;
        v2 = v159;
      }
      if ( v163 )
        sub_140001660(v164, 32 * v163, 8);
      v135 = v157;
      v136 = 32 * v157;
      v137 = v142;
      *(_BYTE *)(v142 + v136) = 5;
      *(_OWORD *)(v137 + v136 + 1) = *(_OWORD *)v138;
      *(_OWORD *)(v137 + v136 + 16) = *(_OWORD *)&v138[15];
      v5 = v135 + 1;
      result = v140 + 1;
      v4 = v158;
      v6 = v141;
    }
    while ( v140 + 1 != v143 );
  }
  *v4 = v5;
  return result;
}
