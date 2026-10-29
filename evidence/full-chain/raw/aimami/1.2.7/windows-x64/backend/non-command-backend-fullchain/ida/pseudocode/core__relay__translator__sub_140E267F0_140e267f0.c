// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e267f0 | name sub_140E267F0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E267F0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __m128i *v5; // rax
  __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __m128i *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  __m128i *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __m128i *v22; // rax
  __int64 v23; // rsi
  const __m128i *v24; // rbx
  unsigned __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // r12
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __m128i *v31; // rax
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  _DWORD *v36; // rax
  __int64 v37; // rcx
  __m128i *v38; // rax
  __int64 v39; // rcx
  void *v40; // rax
  __int64 v41; // rcx
  __m128i *v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r14
  _DWORD *v49; // rax
  __int64 v50; // rcx
  __m128i *v51; // rax
  __int64 v52; // rcx
  void *v53; // rax
  const __m128i *v54; // rbx
  unsigned __int64 v55; // r14
  __int64 v56; // r12
  __int64 v57; // rcx
  _DWORD *v58; // rax
  __int64 v59; // rcx
  _DWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r14
  __m128i *v63; // rax
  __int64 v64; // rcx
  __m128i *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  _DWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  _DWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rcx
  _DWORD *v79; // rax
  __int64 v80; // rcx
  void *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r14
  _DWORD *v84; // rax
  __int64 v85; // rcx
  __m128i *v86; // rax
  __int64 v87; // rcx
  void *v88; // rax
  __int64 v89; // rcx
  __int128 v90; // xmm0
  __int64 v91; // rcx
  _DWORD *v92; // rax
  __int64 v93; // rcx
  __m128i *v94; // rax
  __int64 v95; // rcx
  void *v96; // rax
  __int64 v97; // rcx
  _DWORD *v98; // rax
  const __m128i *v99; // rbx
  unsigned __int64 v100; // r14
  __int64 v101; // rsi
  __int64 v102; // rcx
  __int128 v103; // xmm0
  __int128 v104; // [rsp+58h] [rbp-28h]
  __int128 v105; // [rsp+68h] [rbp-18h]
  __int128 v106; // [rsp+78h] [rbp-8h]
  __int64 v107; // [rsp+88h] [rbp+8h]
  _QWORD *v108; // [rsp+98h] [rbp+18h]
  __int128 v109; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v110; // [rsp+B8h] [rbp+38h]
  __int128 v111; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v112; // [rsp+D0h] [rbp+50h]
  const __m128i *v113; // [rsp+D8h] [rbp+58h]
  const __m128i *v114; // [rsp+E0h] [rbp+60h]
  __int64 v115; // [rsp+E8h] [rbp+68h]
  __int128 v116; // [rsp+F0h] [rbp+70h] BYREF
  unsigned __int64 v117; // [rsp+100h] [rbp+80h]
  _DWORD *v118; // [rsp+108h] [rbp+88h]
  __m256i v119; // [rsp+110h] [rbp+90h] BYREF
  __m256i v120; // [rsp+130h] [rbp+B0h] BYREF
  char v121; // [rsp+151h] [rbp+D1h]
  char v122; // [rsp+152h] [rbp+D2h]
  char v123; // [rsp+153h] [rbp+D3h]
  char v124; // [rsp+154h] [rbp+D4h]
  char v125; // [rsp+155h] [rbp+D5h]
  char v126; // [rsp+156h] [rbp+D6h]
  char v127; // [rsp+157h] [rbp+D7h]
  __m128i *v128; // [rsp+158h] [rbp+D8h]
  char v129; // [rsp+167h] [rbp+E7h]
  __m256i v130; // [rsp+168h] [rbp+E8h] BYREF
  char v131; // [rsp+18Eh] [rbp+10Eh]
  char v132; // [rsp+18Fh] [rbp+10Fh]
  __int64 v133; // [rsp+190h] [rbp+110h]

  v133 = -2;
  result = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 240) = -1;
  if ( result == -1 )
    return result;
  v107 = result;
  v104 = *(_OWORD *)(a1 + 248);
  v105 = *(_OWORD *)(a1 + 264);
  v106 = *(_OWORD *)(a1 + 280);
  *(_QWORD *)&v116 = 0;
  v117 = 0;
  nullsub_1(a1);
  v5 = (__m128i *)sub_140001650(4, 1);
  if ( !v5 )
    sub_141938D2B(1, 4);
  v5->m128i_i32[0] = 1701869940;
  v120.m256i_i64[0] = 4;
  v113 = v5;
  v120.m256i_i64[1] = (__int64)v5;
  v120.m256i_i64[2] = 4;
  nullsub_1(v6);
  v7 = (void *)sub_140001650(25, 1);
  v115 = (__int64)v7;
  if ( !v7 )
    sub_141938D2B(1, 25);
  v108 = a2;
  qmemcpy(v7, "response.output_text.done", 25);
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = 25;
  v130.m256i_i64[2] = (__int64)v7;
  v130.m256i_i64[3] = 25;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v8);
  v9 = (void *)sub_140001650(12, 1);
  if ( !v9 )
    sub_141938D2B(1, 12);
  qmemcpy(v9, "output_index", 12);
  v120.m256i_i64[0] = 12;
  v120.m256i_i64[1] = (__int64)v9;
  v120.m256i_i64[2] = 12;
  v130.m256i_i8[0] = 2;
  v130.m256i_i64[1] = 0;
  v115 = DWORD2(v106);
  v130.m256i_i64[2] = DWORD2(v106);
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v10);
  v11 = sub_140001650(7, 1);
  if ( !v11 )
    sub_141938D2B(1, 7);
  *(_DWORD *)(v11 + 3) = 1684627309;
  *(_DWORD *)v11 = 1835365481;
  v120.m256i_i64[0] = 7;
  v120.m256i_i64[1] = v11;
  v120.m256i_i64[2] = 7;
  v114 = (const __m128i *)v11;
  if ( v104 < 0 )
  {
    v13 = 0;
    goto LABEL_12;
  }
  v113 = (const __m128i *)v104;
  if ( *((_QWORD *)&v104 + 1) )
  {
    nullsub_1(v12);
    v13 = 1;
    v14 = (__m128i *)sub_140001650(*((_QWORD *)&v104 + 1), 1);
    if ( !v14 )
    {
LABEL_12:
      v127 = 1;
      sub_141938D2B(v13, *((_QWORD *)&v104 + 1));
    }
    v15 = (__int64)v14;
    sub_1418F44E0(v14, v113, *((unsigned __int64 *)&v104 + 1));
  }
  else
  {
    v15 = 1;
  }
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = *((_QWORD *)&v104 + 1);
  v130.m256i_i64[2] = v15;
  v130.m256i_i64[3] = *((_QWORD *)&v104 + 1);
  v127 = 0;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v16);
  v17 = (void *)sub_140001650(13, 1);
  if ( !v17 )
    sub_141938D2B(1, 13);
  qmemcpy(v17, "content_index", 13);
  v120.m256i_i64[0] = 13;
  v120.m256i_i64[1] = (__int64)v17;
  v120.m256i_i64[2] = 13;
  v130.m256i_i8[0] = 2;
  *(_OWORD *)&v130.m256i_u64[1] = 0;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v18);
  v19 = (__m128i *)sub_140001650(4, 1);
  if ( !v19 )
    sub_141938D2B(1, 4);
  v19->m128i_i32[0] = 1954047348;
  v120.m256i_i64[0] = 4;
  v120.m256i_i64[1] = (__int64)v19;
  v120.m256i_i64[2] = 4;
  v128 = v19;
  if ( (__int64)v106 < 0 )
  {
    v21 = 0;
    goto LABEL_25;
  }
  v114 = *((const __m128i **)&v105 + 1);
  if ( (_QWORD)v106 )
  {
    nullsub_1(v20);
    v21 = 1;
    v22 = (__m128i *)sub_140001650(v106, 1);
    if ( !v22 )
    {
LABEL_25:
      v126 = 1;
      sub_141938D2B(v21, v106);
    }
    v23 = (__int64)v22;
    sub_1418F44E0(v22, v114, v106);
  }
  else
  {
    v23 = 1;
  }
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = v106;
  v130.m256i_i64[2] = v23;
  v130.m256i_i64[3] = v106;
  v126 = 0;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  *(_OWORD *)&v119.m256i_u64[1] = v116;
  v119.m256i_i64[3] = v117;
  v119.m256i_i8[0] = 5;
  *(_QWORD *)&v116 = &xmmword_141A53515;
  *((_QWORD *)&v116 + 1) = 25;
  *(_QWORD *)&v109 = &v119;
  v130.m256i_i64[0] = (__int64)&v116;
  v130.m256i_i64[1] = (__int64)sub_140186EE0;
  v130.m256i_i64[2] = (__int64)&v109;
  v130.m256i_i64[3] = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v120, &unk_141A548D8, &v130);
  v25 = v120.m256i_u64[2];
  v24 = (const __m128i *)v120.m256i_i64[1];
  v26 = v108[2];
  if ( v120.m256i_i64[2] > (unsigned __int64)(*v108 - v26) )
  {
    v128 = (__m128i *)v120.m256i_i64[1];
    sub_14190D590((_DWORD)v108, v26, v120.m256i_i32[4], 1, 1);
    v26 = v108[2];
    v24 = v128;
  }
  else if ( !v120.m256i_i64[2] )
  {
    goto LABEL_35;
  }
  sub_1418F44E0((__m128i *)(v26 + v108[1]), v24, v25);
LABEL_35:
  v27 = v25 + v26;
  v108[2] = v27;
  if ( v120.m256i_i64[0] )
    sub_140001660(v24, v120.m256i_i64[0], 1);
  sub_140DF44E0(&v119);
  *(_QWORD *)&v111 = 0;
  v112 = 0;
  nullsub_1(v28);
  v29 = (_DWORD *)sub_140001650(4, 1);
  if ( !v29 )
    sub_141938D2B(1, 4);
  *v29 = 1701869940;
  v120.m256i_i64[0] = 4;
  v118 = v29;
  v120.m256i_i64[1] = (__int64)v29;
  v120.m256i_i64[2] = 4;
  nullsub_1(v30);
  v31 = (__m128i *)sub_140001650(26, 1);
  v128 = v31;
  if ( !v31 )
    sub_141938D2B(1, 26);
  qmemcpy(v31, "response.content_part.done", 26);
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = 26;
  v130.m256i_i64[2] = (__int64)v31;
  v130.m256i_i64[3] = 26;
  sub_140E72AA0(&v119, &v111, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v32);
  v33 = (void *)sub_140001650(12, 1);
  if ( !v33 )
    sub_141938D2B(1, 12);
  qmemcpy(v33, "output_index", 12);
  v120.m256i_i64[0] = 12;
  v120.m256i_i64[1] = (__int64)v33;
  v120.m256i_i64[2] = 12;
  v130.m256i_i8[0] = 2;
  v130.m256i_i64[1] = 0;
  v130.m256i_i64[2] = v115;
  sub_140E72AA0(&v119, &v111, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v34);
  v35 = 1;
  v36 = (_DWORD *)sub_140001650(7, 1);
  if ( !v36 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v36 + 3) = 1684627309;
  *v36 = 1835365481;
  v120.m256i_i64[0] = 7;
  v120.m256i_i64[1] = (__int64)v36;
  v120.m256i_i64[2] = 7;
  v128 = (__m128i *)v36;
  if ( *((_QWORD *)&v104 + 1) )
  {
    nullsub_1(v37);
    v38 = (__m128i *)sub_140001650(*((_QWORD *)&v104 + 1), 1);
    if ( !v38 )
    {
      v125 = 1;
      sub_141938D2B(1, *((_QWORD *)&v104 + 1));
    }
    v35 = (__int64)v38;
    sub_1418F44E0(v38, v113, *((unsigned __int64 *)&v104 + 1));
  }
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = *((_QWORD *)&v104 + 1);
  v130.m256i_i64[2] = v35;
  v130.m256i_i64[3] = *((_QWORD *)&v104 + 1);
  v125 = 0;
  sub_140E72AA0(&v119, &v111, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v39);
  v40 = (void *)sub_140001650(13, 1);
  if ( !v40 )
    sub_141938D2B(1, 13);
  qmemcpy(v40, "content_index", 13);
  v120.m256i_i64[0] = 13;
  v120.m256i_i64[1] = (__int64)v40;
  v120.m256i_i64[2] = 13;
  v130.m256i_i8[0] = 2;
  *(_OWORD *)&v130.m256i_u64[1] = 0;
  sub_140E72AA0(&v119, &v111, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v41);
  v42 = (__m128i *)sub_140001650(4, 1);
  if ( !v42 )
    sub_141938D2B(1, 4);
  v42->m128i_i32[0] = 1953653104;
  *(_QWORD *)&v109 = 4;
  v128 = v42;
  *((_QWORD *)&v109 + 1) = v42;
  v110 = 4;
  *(_QWORD *)&v116 = 0;
  v117 = 0;
  nullsub_1(v43);
  v44 = (_DWORD *)sub_140001650(4, 1);
  if ( !v44 )
    sub_141938D2B(1, 4);
  *v44 = 1701869940;
  v120.m256i_i64[0] = 4;
  v120.m256i_i64[1] = (__int64)v44;
  v120.m256i_i64[2] = 4;
  nullsub_1(v45);
  v46 = (_DWORD *)sub_140001650(11, 1);
  v118 = v46;
  if ( !v46 )
    sub_141938D2B(1, 11);
  qmemcpy(v46, "output_text", 11);
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = 11;
  v130.m256i_i64[2] = (__int64)v46;
  v130.m256i_i64[3] = 11;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v47);
  v48 = 1;
  v49 = (_DWORD *)sub_140001650(4, 1);
  if ( !v49 )
    sub_141938D2B(1, 4);
  *v49 = 1954047348;
  v120.m256i_i64[0] = 4;
  v120.m256i_i64[1] = (__int64)v49;
  v120.m256i_i64[2] = 4;
  v118 = v49;
  if ( (_QWORD)v106 )
  {
    nullsub_1(v50);
    v51 = (__m128i *)sub_140001650(v106, 1);
    if ( !v51 )
    {
      v124 = 1;
      sub_141938D2B(1, v106);
    }
    v48 = (__int64)v51;
    sub_1418F44E0(v51, v114, v106);
  }
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = v106;
  v130.m256i_i64[2] = v48;
  v130.m256i_i64[3] = v106;
  v124 = 0;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v52);
  v53 = (void *)sub_140001650(11, 1);
  if ( !v53 )
    sub_141938D2B(1, 11);
  qmemcpy(v53, "annotations", 11);
  v120.m256i_i64[0] = 11;
  v120.m256i_i64[1] = (__int64)v53;
  v120.m256i_i64[2] = 11;
  v130.m256i_i64[1] = 0;
  *(_OWORD *)&v130.m256i_u64[2] = 8u;
  v130.m256i_i8[0] = 4;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  *(_OWORD *)&v130.m256i_u64[1] = v116;
  v130.m256i_i64[3] = v117;
  v130.m256i_i8[0] = 5;
  v123 = 0;
  sub_140E72AA0(&v119, &v111, &v109, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  *(_OWORD *)&v119.m256i_u64[1] = v111;
  v119.m256i_i64[3] = v112;
  v119.m256i_i8[0] = 5;
  *(_QWORD *)&v116 = &xmmword_141A5352E;
  *((_QWORD *)&v116 + 1) = 26;
  *(_QWORD *)&v109 = &v119;
  v130.m256i_i64[0] = (__int64)&v116;
  v130.m256i_i64[1] = (__int64)sub_140186EE0;
  v130.m256i_i64[2] = (__int64)&v109;
  v130.m256i_i64[3] = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v120, &unk_141A548D8, &v130);
  v55 = v120.m256i_u64[2];
  v54 = (const __m128i *)v120.m256i_i64[1];
  if ( v120.m256i_i64[2] > (unsigned __int64)(*v108 - v27) )
  {
    v128 = (__m128i *)v120.m256i_i64[1];
    sub_14190D590((_DWORD)v108, v27, v120.m256i_i32[4], 1, 1);
    v27 = v108[2];
    v54 = v128;
  }
  else if ( !v120.m256i_i64[2] )
  {
    goto LABEL_72;
  }
  sub_1418F44E0((__m128i *)(v27 + v108[1]), v54, v55);
LABEL_72:
  v56 = v55 + v27;
  v108[2] = v56;
  if ( v120.m256i_i64[0] )
    sub_140001660(v54, v120.m256i_i64[0], 1);
  sub_140DF44E0(&v119);
  *(_QWORD *)&v111 = 0;
  v112 = 0;
  nullsub_1(v57);
  v58 = (_DWORD *)sub_140001650(4, 1);
  if ( !v58 )
    sub_141938D2B(1, 4);
  *v58 = 1701869940;
  v120.m256i_i64[0] = 4;
  v118 = v58;
  v120.m256i_i64[1] = (__int64)v58;
  v120.m256i_i64[2] = 4;
  nullsub_1(v59);
  v60 = (_DWORD *)sub_140001650(7, 1);
  v128 = (__m128i *)v60;
  if ( !v60 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v60 + 3) = 1701273971;
  *v60 = 1936942445;
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = 7;
  v130.m256i_i64[2] = (__int64)v60;
  v130.m256i_i64[3] = 7;
  sub_140E72AA0(&v119, &v111, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v61);
  v62 = 1;
  v63 = (__m128i *)sub_140001650(2, 1);
  if ( !v63 )
    sub_141938D2B(1, 2);
  v63->m128i_i16[0] = 25705;
  v120.m256i_i64[0] = 2;
  v120.m256i_i64[1] = (__int64)v63;
  v120.m256i_i64[2] = 2;
  v128 = v63;
  if ( *((_QWORD *)&v104 + 1) )
  {
    nullsub_1(v64);
    v65 = (__m128i *)sub_140001650(*((_QWORD *)&v104 + 1), 1);
    if ( !v65 )
    {
      v122 = 1;
      sub_141938D2B(1, *((_QWORD *)&v104 + 1));
    }
    v62 = (__int64)v65;
    sub_1418F44E0(v65, v113, *((unsigned __int64 *)&v104 + 1));
  }
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = *((_QWORD *)&v104 + 1);
  v130.m256i_i64[2] = v62;
  v130.m256i_i64[3] = *((_QWORD *)&v104 + 1);
  v122 = 0;
  sub_140E72AA0(&v119, &v111, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v66);
  v67 = sub_140001650(6, 1);
  if ( !v67 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v67 + 4) = 29557;
  *(_DWORD *)v67 = 1952543859;
  v120.m256i_i64[0] = 6;
  v118 = (_DWORD *)v67;
  v120.m256i_i64[1] = v67;
  v120.m256i_i64[2] = 6;
  nullsub_1(v68);
  v69 = sub_140001650(9, 1);
  v128 = (__m128i *)v69;
  if ( !v69 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v69 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v69 + 8) = 100;
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = 9;
  v130.m256i_i64[2] = v69;
  v130.m256i_i64[3] = 9;
  sub_140E72AA0(&v119, &v111, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v70);
  v71 = (_DWORD *)sub_140001650(4, 1);
  if ( !v71 )
    sub_141938D2B(1, 4);
  *v71 = 1701605234;
  v120.m256i_i64[0] = 4;
  v118 = v71;
  v120.m256i_i64[1] = (__int64)v71;
  v120.m256i_i64[2] = 4;
  nullsub_1(v72);
  v73 = sub_140001650(9, 1);
  v128 = (__m128i *)v73;
  if ( !v73 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v73 = 0x6E61747369737361LL;
  *(_BYTE *)(v73 + 8) = 116;
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = 9;
  v130.m256i_i64[2] = v73;
  v130.m256i_i64[3] = 9;
  sub_140E72AA0(&v119, &v111, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v74);
  v75 = (_DWORD *)sub_140001650(7, 1);
  if ( !v75 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v75 + 3) = 1953391988;
  *v75 = 1953394531;
  *(_QWORD *)&v109 = 7;
  v118 = v75;
  *((_QWORD *)&v109 + 1) = v75;
  v110 = 7;
  nullsub_1(v76);
  v77 = sub_140001650(32, 8);
  if ( !v77 )
  {
    v129 = 1;
    sub_141938D11(8, 32);
  }
  v128 = (__m128i *)v77;
  *(_QWORD *)&v116 = 0;
  v117 = 0;
  nullsub_1(v78);
  v79 = (_DWORD *)sub_140001650(4, 1);
  if ( !v79 )
    sub_141938D2B(1, 4);
  *v79 = 1701869940;
  v120.m256i_i64[0] = 4;
  v120.m256i_i64[1] = (__int64)v79;
  v120.m256i_i64[2] = 4;
  nullsub_1(v80);
  v81 = (void *)sub_140001650(11, 1);
  if ( !v81 )
    sub_141938D2B(1, 11);
  qmemcpy(v81, "output_text", 11);
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = 11;
  v130.m256i_i64[2] = (__int64)v81;
  v130.m256i_i64[3] = 11;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v82);
  v83 = 1;
  v84 = (_DWORD *)sub_140001650(4, 1);
  if ( !v84 )
    sub_141938D2B(1, 4);
  *v84 = 1954047348;
  v120.m256i_i64[0] = 4;
  v120.m256i_i64[1] = (__int64)v84;
  v120.m256i_i64[2] = 4;
  if ( (_QWORD)v106 )
  {
    nullsub_1(v85);
    v86 = (__m128i *)sub_140001650(v106, 1);
    if ( !v86 )
    {
      v121 = 1;
      sub_141938D2B(1, v106);
    }
    v83 = (__int64)v86;
    sub_1418F44E0(v86, v114, v106);
  }
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = v106;
  v130.m256i_i64[2] = v83;
  v130.m256i_i64[3] = v106;
  v121 = 0;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v87);
  v88 = (void *)sub_140001650(11, 1);
  if ( !v88 )
    sub_141938D2B(1, 11);
  qmemcpy(v88, "annotations", 11);
  v120.m256i_i64[0] = 11;
  v120.m256i_i64[1] = (__int64)v88;
  v120.m256i_i64[2] = 11;
  v130.m256i_i64[1] = 0;
  *(_OWORD *)&v130.m256i_u64[2] = 8u;
  v130.m256i_i8[0] = 4;
  sub_140E72AA0(&v119, &v116, &v120, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  *(_OWORD *)((char *)&v130.m256i_u32[1] + 3) = v116;
  *(__int64 *)((char *)&v130.m256i_i64[2] + 7) = v117;
  v89 = (__int64)v128;
  v128->m128i_i8[0] = 5;
  v90 = *(_OWORD *)v130.m256i_i8;
  *(_OWORD *)(v89 + 16) = *(_OWORD *)((char *)&v130.m256i_u64[1] + 7);
  *(_OWORD *)(v89 + 1) = v90;
  v130.m256i_i64[1] = 1;
  v130.m256i_i64[2] = v89;
  v130.m256i_i64[3] = 1;
  v130.m256i_i8[0] = 4;
  v129 = 0;
  sub_140E72AA0(&v119, &v111, &v109, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  *(_OWORD *)&v120.m256i_u64[1] = v111;
  v120.m256i_i64[3] = v112;
  v120.m256i_i8[0] = 5;
  *(_QWORD *)&v109 = 0;
  v110 = 0;
  nullsub_1(v91);
  v92 = (_DWORD *)sub_140001650(4, 1);
  if ( !v92 )
    sub_141938D2B(1, 4);
  *v92 = 1701869940;
  *(_QWORD *)&v116 = 4;
  v118 = v92;
  *((_QWORD *)&v116 + 1) = v92;
  v117 = 4;
  nullsub_1(v93);
  v94 = (__m128i *)sub_140001650(25, 1);
  v128 = v94;
  if ( !v94 )
    sub_141938D2B(1, 25);
  qmemcpy(v94, "response.output_item.done", 25);
  v130.m256i_i8[0] = 3;
  v130.m256i_i64[1] = 25;
  v130.m256i_i64[2] = (__int64)v94;
  v130.m256i_i64[3] = 25;
  sub_140E72AA0(&v119, &v109, &v116, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v95);
  v96 = (void *)sub_140001650(12, 1);
  if ( !v96 )
    sub_141938D2B(1, 12);
  qmemcpy(v96, "output_index", 12);
  *(_QWORD *)&v116 = 12;
  *((_QWORD *)&v116 + 1) = v96;
  v117 = 12;
  v130.m256i_i8[0] = 2;
  v130.m256i_i64[1] = 0;
  v130.m256i_i64[2] = v115;
  sub_140E72AA0(&v119, &v109, &v116, &v130);
  if ( v119.m256i_i8[0] != -1 )
    sub_140DF44E0(&v119);
  nullsub_1(v97);
  v98 = (_DWORD *)sub_140001650(4, 1);
  if ( !v98 )
    sub_141938D2B(1, 4);
  *v98 = 1835365481;
  *(_QWORD *)&v116 = 4;
  v115 = (__int64)v98;
  *((_QWORD *)&v116 + 1) = v98;
  v117 = 4;
  v131 = 1;
  sub_140412420(&v130, &v120);
  if ( v130.m256i_i8[0] == -1 )
  {
    v119.m256i_i64[0] = v130.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_16,
      43,
      (unsigned int)&v119,
      (unsigned int)&off_141A52FE8,
      (__int64)&off_141A53588);
  }
  v119 = v130;
  v131 = 0;
  sub_140E72AA0(&v130, &v109, &v116, &v119);
  if ( v130.m256i_i8[0] != -1 )
    sub_140DF44E0(&v130);
  *(_OWORD *)&v119.m256i_u64[1] = v109;
  v119.m256i_i64[3] = v110;
  v119.m256i_i8[0] = 5;
  *(_QWORD *)&v109 = &xmmword_141A53568;
  *((_QWORD *)&v109 + 1) = 25;
  *(_QWORD *)&v111 = &v119;
  v130.m256i_i64[0] = (__int64)&v109;
  v130.m256i_i64[1] = (__int64)sub_140186EE0;
  v130.m256i_i64[2] = (__int64)&v111;
  v130.m256i_i64[3] = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v116, &unk_141A548D8, &v130);
  v99 = *((const __m128i **)&v116 + 1);
  v100 = v117;
  if ( v117 > *v108 - v56 )
  {
    v115 = *((_QWORD *)&v116 + 1);
    sub_14190D590((_DWORD)v108, v56, v117, 1, 1);
    v56 = v108[2];
    v99 = (const __m128i *)v115;
    goto LABEL_122;
  }
  if ( v117 )
LABEL_122:
    sub_1418F44E0((__m128i *)(v56 + v108[1]), v99, v100);
  v108[2] = v100 + v56;
  if ( (_QWORD)v116 )
    sub_140001660(v99, v116, 1);
  v132 = 1;
  sub_140DF44E0(&v119);
  v101 = *(_QWORD *)(a1 + 144);
  if ( v101 == *(_QWORD *)(a1 + 128) )
    sub_14190F570(a1 + 128);
  result = *(_QWORD *)(a1 + 136);
  v102 = 32 * v101;
  v103 = *(_OWORD *)v120.m256i_i8;
  *(_OWORD *)(result + v102 + 16) = *(_OWORD *)&v120.m256i_u64[2];
  *(_OWORD *)(result + v102) = v103;
  *(_QWORD *)(a1 + 144) = v101 + 1;
  if ( v107 )
    result = sub_140001660(v113, v107, 1);
  if ( (_QWORD)v105 )
    return sub_140001660(v114, v105, 1);
  return result;
}
