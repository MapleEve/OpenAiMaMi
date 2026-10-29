// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e2ec90 | name sub_140E2EC90
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E2EC90(__int64 a1, const __m128i *a2, signed __int64 a3, _QWORD *a4)
{
  __int64 v5; // r14
  __int64 v6; // r15
  char v7; // r12
  __m128i *v8; // rax
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  signed __int64 v17; // r15
  __int64 v18; // r14
  const __m128i *v19; // rbx
  __m128i *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  signed __int64 v23; // r15
  _DWORD *v24; // rax
  __int64 v25; // rcx
  __m128i *v26; // rax
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // rcx
  __m128i *v30; // rax
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rcx
  _WORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __m128i *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rsi
  __m128i *v48; // rax
  const __m128i *v49; // r14
  unsigned __int64 v50; // rdi
  _QWORD *v51; // rsi
  __int64 v52; // rbx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  _DWORD *v57; // rax
  __int64 v58; // rcx
  _DWORD *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  _DWORD *v63; // rax
  const __m128i *v64; // rbx
  unsigned __int64 v65; // r13
  _QWORD *v66; // rsi
  __int64 v67; // r12
  __int64 v68; // r12
  __int64 v69; // rcx
  _DWORD *v70; // rax
  __int64 v71; // rcx
  __m128i *v72; // rax
  __int64 v73; // rcx
  void *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r13
  _DWORD *v77; // rax
  __int64 v78; // rcx
  __m128i *v79; // rax
  __int64 v80; // rcx
  void *v81; // rax
  __int64 v82; // rcx
  __m128i *v83; // rax
  __int64 v84; // rcx
  const __m128i *v85; // rsi
  _DWORD *v86; // rax
  __int64 v87; // rcx
  _DWORD *v88; // rax
  __int64 v89; // rcx
  _DWORD *v90; // rax
  __int64 v91; // rcx
  void *v92; // rax
  const __m128i *v93; // rbx
  unsigned __int64 v94; // r13
  _QWORD *v95; // rsi
  __int64 v96; // rax
  __int64 v97; // [rsp+28h] [rbp-58h] BYREF
  __m128i *v98; // [rsp+30h] [rbp-50h]
  __int64 v99; // [rsp+38h] [rbp-48h]
  _QWORD *v100; // [rsp+40h] [rbp-40h]
  __int128 v101; // [rsp+48h] [rbp-38h] BYREF
  __int64 v102; // [rsp+58h] [rbp-28h]
  const __m128i *v103; // [rsp+60h] [rbp-20h]
  __int64 v104; // [rsp+68h] [rbp-18h]
  char v105; // [rsp+77h] [rbp-9h] BYREF
  _DWORD *v106; // [rsp+78h] [rbp-8h]
  __int64 v107; // [rsp+80h] [rbp+0h]
  const __m128i *v108; // [rsp+88h] [rbp+8h]
  __int128 v109; // [rsp+90h] [rbp+10h] BYREF
  __int64 v110; // [rsp+A0h] [rbp+20h]
  _DWORD *v111; // [rsp+A8h] [rbp+28h]
  const __m128i *v112; // [rsp+B0h] [rbp+30h]
  const __m128i *v113; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v114; // [rsp+C0h] [rbp+40h]
  __int64 v115; // [rsp+D0h] [rbp+50h]
  char v116; // [rsp+DAh] [rbp+5Ah]
  char v117; // [rsp+DBh] [rbp+5Bh]
  char v118; // [rsp+DCh] [rbp+5Ch]
  char v119; // [rsp+DDh] [rbp+5Dh]
  char v120; // [rsp+DEh] [rbp+5Eh]
  char v121; // [rsp+DFh] [rbp+5Fh]
  _BYTE v122[24]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v123; // [rsp+F8h] [rbp+78h]
  __int128 v124; // [rsp+100h] [rbp+80h] BYREF
  unsigned __int64 v125; // [rsp+110h] [rbp+90h]
  char v126; // [rsp+11Fh] [rbp+9Fh]
  __int64 v127; // [rsp+120h] [rbp+A0h]

  v127 = -2;
  v100 = a4;
  v103 = a2;
  v5 = a1;
  if ( *(_QWORD *)(a1 + 240) != -1 )
  {
    v6 = *(_QWORD *)(a1 + 280);
    if ( a3 <= (unsigned __int64)(*(_QWORD *)(a1 + 264) - v6) )
      goto LABEL_3;
LABEL_124:
    sub_14190D590(v5 + 264, v6, a3, 1, 1);
    v6 = *(_QWORD *)(v5 + 280);
    goto LABEL_4;
  }
  v107 = *(unsigned int *)(a1 + 472);
  *(_DWORD *)(a1 + 472) = v107 + 1;
  sub_141568C20(v122);
  v124 = *(_OWORD *)v122;
  v113 = nullptr;
  v114 = 1u;
  *(_QWORD *)&v122[16] = 1610612768;
  *(_QWORD *)v122 = &v113;
  *(_QWORD *)&v122[8] = &off_141A54A20;
  if ( (unsigned __int8)sub_141569DC0(&v124, v122) )
    sub_141939040(
      (unsigned int)aADisplayImplem_9,
      55,
      (unsigned int)&v105,
      (unsigned int)&unk_141A53038,
      (__int64)&off_141A54AD8);
  v108 = v113;
  v104 = v114;
  if ( *((_QWORD *)&v114 + 1) <= 0x10u )
  {
    if ( *((_QWORD *)&v114 + 1) != 16 )
LABEL_8:
      sub_141938F40(v114, DWORD2(v114), 0, 16, (__int64)&off_141A53698);
  }
  else if ( *(char *)(v114 + 16) < -64 )
  {
    goto LABEL_8;
  }
  *(_QWORD *)&v109 = v114;
  *((_QWORD *)&v109 + 1) = 16;
  v113 = (const __m128i *)&v109;
  *(_QWORD *)&v114 = sub_140186EE0;
  sub_1416ABFD0(v122, &unk_141A533D0, &v113);
  if ( v108 )
    sub_140001660(v104, v108, 1);
  v108 = *(const __m128i **)&v122[8];
  v104 = *(_QWORD *)v122;
  v23 = *(_QWORD *)&v122[16];
  *(_QWORD *)&v101 = 0;
  v102 = 0;
  nullsub_1(v22);
  v24 = (_DWORD *)sub_140001650(4, 1);
  if ( !v24 )
    sub_141938D2B(1, 4);
  *v24 = 1701869940;
  *(_QWORD *)&v124 = 4;
  v111 = v24;
  *((_QWORD *)&v124 + 1) = v24;
  v125 = 4;
  nullsub_1(v25);
  v26 = (__m128i *)sub_140001650(26, 1);
  v112 = v26;
  if ( !v26 )
    sub_141938D2B(1, 26);
  qmemcpy(v26, "response.output_item.added", 26);
  v122[0] = 3;
  *(_QWORD *)&v122[8] = 26;
  *(_QWORD *)&v122[16] = v26;
  v123 = 26;
  sub_140E72AA0(&v113, &v101, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v27);
  v28 = (void *)sub_140001650(12, 1);
  if ( !v28 )
    sub_141938D2B(1, 12);
  qmemcpy(v28, "output_index", 12);
  *(_QWORD *)&v124 = 12;
  *((_QWORD *)&v124 + 1) = v28;
  v125 = 12;
  v122[0] = 2;
  *(_QWORD *)&v122[8] = 0;
  *(_QWORD *)&v122[16] = v107;
  sub_140E72AA0(&v113, &v101, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v29);
  v30 = (__m128i *)sub_140001650(4, 1);
  if ( !v30 )
    sub_141938D2B(1, 4);
  v30->m128i_i32[0] = 1835365481;
  v97 = 4;
  v112 = v30;
  v98 = v30;
  v99 = 4;
  *(_QWORD *)&v109 = 0;
  v110 = 0;
  nullsub_1(v31);
  v32 = (_DWORD *)sub_140001650(4, 1);
  if ( !v32 )
    sub_141938D2B(1, 4);
  *v32 = 1701869940;
  *(_QWORD *)&v124 = 4;
  v106 = v32;
  *((_QWORD *)&v124 + 1) = v32;
  v125 = 4;
  nullsub_1(v33);
  v34 = (_DWORD *)sub_140001650(7, 1);
  v111 = v34;
  if ( !v34 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v34 + 3) = 1701273971;
  *v34 = 1936942445;
  v122[0] = 3;
  *(_QWORD *)&v122[8] = 7;
  *(_QWORD *)&v122[16] = v34;
  v123 = 7;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v35);
  v36 = (_WORD *)sub_140001650(2, 1);
  if ( !v36 )
    sub_141938D2B(1, 2);
  *v36 = 25705;
  *(_QWORD *)&v124 = 2;
  *((_QWORD *)&v124 + 1) = v36;
  v125 = 2;
  v111 = v36;
  if ( v23 < 0 )
  {
    v38 = 0;
    goto LABEL_42;
  }
  if ( v23 )
  {
    nullsub_1(v37);
    v38 = 1;
    v39 = (__m128i *)sub_140001650(v23, 1);
    if ( !v39 )
    {
LABEL_42:
      v121 = 1;
      sub_141938D2B(v38, v23);
    }
    v40 = (__int64)v39;
    sub_1418F44E0(v39, v108, v23);
  }
  else
  {
    v40 = 1;
  }
  v122[0] = 3;
  *(_QWORD *)&v122[8] = v23;
  *(_QWORD *)&v122[16] = v40;
  v123 = v23;
  v121 = 0;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v54);
  v55 = sub_140001650(6, 1);
  if ( !v55 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v55 + 4) = 29557;
  *(_DWORD *)v55 = 1952543859;
  *(_QWORD *)&v124 = 6;
  v106 = (_DWORD *)v55;
  *((_QWORD *)&v124 + 1) = v55;
  v125 = 6;
  nullsub_1(v56);
  v57 = (_DWORD *)sub_140001650(11, 1);
  v111 = v57;
  if ( !v57 )
    sub_141938D2B(1, 11);
  qmemcpy(v57, "in_progress", 11);
  v122[0] = 3;
  *(_QWORD *)&v122[8] = 11;
  *(_QWORD *)&v122[16] = v57;
  v123 = 11;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v58);
  v59 = (_DWORD *)sub_140001650(4, 1);
  if ( !v59 )
    sub_141938D2B(1, 4);
  *v59 = 1701605234;
  *(_QWORD *)&v124 = 4;
  v106 = v59;
  *((_QWORD *)&v124 + 1) = v59;
  v125 = 4;
  nullsub_1(v60);
  v61 = sub_140001650(9, 1);
  v111 = (_DWORD *)v61;
  if ( !v61 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v61 = 0x6E61747369737361LL;
  *(_BYTE *)(v61 + 8) = 116;
  v122[0] = 3;
  *(_QWORD *)&v122[8] = 9;
  *(_QWORD *)&v122[16] = v61;
  v123 = 9;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v62);
  v63 = (_DWORD *)sub_140001650(7, 1);
  if ( !v63 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v63 + 3) = 1953391988;
  *v63 = 1953394531;
  *(_QWORD *)&v124 = 7;
  *((_QWORD *)&v124 + 1) = v63;
  v125 = 7;
  *(_QWORD *)&v122[8] = 0;
  *(_QWORD *)&v122[16] = 8;
  v123 = 0;
  v122[0] = 4;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  *(_OWORD *)&v122[8] = v109;
  v123 = v110;
  v122[0] = 5;
  v120 = 0;
  sub_140E72AA0(&v113, &v101, &v97, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  v114 = v101;
  v115 = v102;
  LOBYTE(v113) = 5;
  *(_QWORD *)&v109 = &xmmword_141A536B0;
  *((_QWORD *)&v109 + 1) = 26;
  v97 = (__int64)&v113;
  *(_QWORD *)v122 = &v109;
  *(_QWORD *)&v122[8] = sub_140186EE0;
  *(_QWORD *)&v122[16] = &v97;
  v123 = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v124, &unk_141A548D8, v122);
  v64 = *((const __m128i **)&v124 + 1);
  v65 = v125;
  v66 = v100;
  v67 = v100[2];
  if ( v125 > *v100 - v67 )
  {
    v112 = *((const __m128i **)&v124 + 1);
    sub_14190D590((_DWORD)v100, v67, v125, 1, 1);
    v67 = v66[2];
    v64 = v112;
  }
  else if ( !v125 )
  {
    goto LABEL_86;
  }
  sub_1418F44E0((__m128i *)(v67 + v66[1]), v64, v65);
LABEL_86:
  v68 = v65 + v67;
  v66[2] = v68;
  if ( (_QWORD)v124 )
    sub_140001660(v64, v124, 1);
  v126 = 1;
  sub_140DF44E0(&v113);
  *(_QWORD *)&v101 = 0;
  v102 = 0;
  nullsub_1(v69);
  v70 = (_DWORD *)sub_140001650(4, 1);
  if ( !v70 )
    sub_141938D2B(1, 4);
  *v70 = 1701869940;
  *(_QWORD *)&v124 = 4;
  v111 = v70;
  *((_QWORD *)&v124 + 1) = v70;
  v125 = 4;
  nullsub_1(v71);
  v72 = (__m128i *)sub_140001650(27, 1);
  v112 = v72;
  if ( !v72 )
    sub_141938D2B(1, 27);
  qmemcpy(v72, "response.content_part.added", 27);
  v122[0] = 3;
  *(_QWORD *)&v122[8] = 27;
  *(_QWORD *)&v122[16] = v72;
  v123 = 27;
  sub_140E72AA0(&v113, &v101, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v73);
  v74 = (void *)sub_140001650(12, 1);
  if ( !v74 )
    sub_141938D2B(1, 12);
  qmemcpy(v74, "output_index", 12);
  *(_QWORD *)&v124 = 12;
  *((_QWORD *)&v124 + 1) = v74;
  v125 = 12;
  v122[0] = 2;
  *(_QWORD *)&v122[8] = 0;
  *(_QWORD *)&v122[16] = v107;
  sub_140E72AA0(&v113, &v101, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v75);
  v76 = 1;
  v77 = (_DWORD *)sub_140001650(7, 1);
  if ( !v77 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v77 + 3) = 1684627309;
  *v77 = 1835365481;
  *(_QWORD *)&v124 = 7;
  *((_QWORD *)&v124 + 1) = v77;
  v125 = 7;
  v112 = (const __m128i *)v77;
  if ( v23 )
  {
    nullsub_1(v78);
    v79 = (__m128i *)sub_140001650(v23, 1);
    if ( !v79 )
    {
      v119 = 1;
      sub_141938D2B(1, v23);
    }
    v76 = (__int64)v79;
    sub_1418F44E0(v79, v108, v23);
  }
  v122[0] = 3;
  *(_QWORD *)&v122[8] = v23;
  *(_QWORD *)&v122[16] = v76;
  v123 = v23;
  v119 = 0;
  sub_140E72AA0(&v113, &v101, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v80);
  v81 = (void *)sub_140001650(13, 1);
  if ( !v81 )
    sub_141938D2B(1, 13);
  qmemcpy(v81, "content_index", 13);
  *(_QWORD *)&v124 = 13;
  *((_QWORD *)&v124 + 1) = v81;
  v125 = 13;
  v122[0] = 2;
  *(_OWORD *)&v122[8] = 0;
  sub_140E72AA0(&v113, &v101, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v82);
  v83 = (__m128i *)sub_140001650(4, 1);
  if ( !v83 )
    sub_141938D2B(1, 4);
  v85 = v83;
  v83->m128i_i32[0] = 1953653104;
  v97 = 4;
  v98 = v83;
  v99 = 4;
  *(_QWORD *)&v109 = 0;
  v110 = 0;
  nullsub_1(v84);
  v86 = (_DWORD *)sub_140001650(4, 1);
  v112 = v85;
  if ( !v86 )
    sub_141938D2B(1, 4);
  *v86 = 1701869940;
  *(_QWORD *)&v124 = 4;
  v106 = v86;
  *((_QWORD *)&v124 + 1) = v86;
  v125 = 4;
  nullsub_1(v87);
  v88 = (_DWORD *)sub_140001650(11, 1);
  v111 = v88;
  if ( !v88 )
    sub_141938D2B(1, 11);
  qmemcpy(v88, "output_text", 11);
  v122[0] = 3;
  *(_QWORD *)&v122[8] = 11;
  *(_QWORD *)&v122[16] = v88;
  v123 = 11;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v89);
  v90 = (_DWORD *)sub_140001650(4, 1);
  if ( !v90 )
    sub_141938D2B(1, 4);
  *v90 = 1954047348;
  *(_QWORD *)&v124 = 4;
  *((_QWORD *)&v124 + 1) = v90;
  v125 = 4;
  v122[0] = 3;
  *(_QWORD *)&v122[8] = 0;
  *(_QWORD *)&v122[16] = 1;
  v123 = 0;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v91);
  v92 = (void *)sub_140001650(11, 1);
  if ( !v92 )
    sub_141938D2B(1, 11);
  qmemcpy(v92, "annotations", 11);
  *(_QWORD *)&v124 = 11;
  *((_QWORD *)&v124 + 1) = v92;
  v125 = 11;
  *(_QWORD *)&v122[8] = 0;
  *(_QWORD *)&v122[16] = 8;
  v123 = 0;
  v122[0] = 4;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  *(_OWORD *)&v122[8] = v109;
  v123 = v110;
  v122[0] = 5;
  v118 = 0;
  sub_140E72AA0(&v113, &v101, &v97, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  v114 = v101;
  v115 = v102;
  LOBYTE(v113) = 5;
  *(_QWORD *)&v109 = &xmmword_141A536E0;
  *((_QWORD *)&v109 + 1) = 27;
  v97 = (__int64)&v113;
  *(_QWORD *)v122 = &v109;
  *(_QWORD *)&v122[8] = sub_140186EE0;
  *(_QWORD *)&v122[16] = &v97;
  v123 = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v124, &unk_141A548D8, v122);
  v93 = *((const __m128i **)&v124 + 1);
  v94 = v125;
  v95 = v100;
  if ( v125 > *v100 - v68 )
  {
    v112 = *((const __m128i **)&v124 + 1);
    sub_14190D590((_DWORD)v100, v68, v125, 1, 1);
    v68 = v95[2];
    v93 = v112;
  }
  else if ( !v125 )
  {
    goto LABEL_120;
  }
  sub_1418F44E0((__m128i *)(v68 + v95[1]), v93, v94);
LABEL_120:
  v95[2] = v94 + v68;
  if ( (_QWORD)v124 )
    sub_140001660(v93, v124, 1);
  v126 = 1;
  sub_140DF44E0(&v113);
  v96 = v104;
  *(_QWORD *)(v5 + 240) = v104;
  *(_QWORD *)(v5 + 248) = v108;
  *(_QWORD *)(v5 + 256) = v23;
  *(_QWORD *)(v5 + 264) = 0;
  *(_QWORD *)(v5 + 272) = 1;
  *(_QWORD *)(v5 + 280) = 0;
  a1 = v107;
  *(_DWORD *)(v5 + 288) = v107;
  if ( v96 == -1 )
  {
    v126 = 0;
    sub_141938FE0(&unk_141A53710, 8, &off_141A53718);
  }
  v6 = 0;
  if ( a3 )
    goto LABEL_124;
LABEL_3:
  if ( a3 )
  {
LABEL_4:
    sub_1418F44E0((__m128i *)(v6 + *(_QWORD *)(v5 + 272)), v103, a3);
    v7 = 0;
    goto LABEL_10;
  }
  v7 = 1;
LABEL_10:
  *(_QWORD *)(v5 + 280) = a3 + v6;
  *(_QWORD *)&v109 = 0;
  v110 = 0;
  nullsub_1(a1);
  v8 = (__m128i *)sub_140001650(4, 1);
  if ( !v8 )
    sub_141938D2B(1, 4);
  v8->m128i_i32[0] = 1701869940;
  *(_QWORD *)&v124 = 4;
  v108 = v8;
  *((_QWORD *)&v124 + 1) = v8;
  v125 = 4;
  nullsub_1(v9);
  v10 = (void *)sub_140001650(26, 1);
  v107 = (__int64)v10;
  if ( !v10 )
    sub_141938D2B(1, 26);
  qmemcpy(v10, "response.output_text.delta", 26);
  v122[0] = 3;
  *(_QWORD *)&v122[8] = 26;
  *(_QWORD *)&v122[16] = v10;
  v123 = 26;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v11);
  v12 = (void *)sub_140001650(12, 1);
  if ( !v12 )
    sub_141938D2B(1, 12);
  qmemcpy(v12, "output_index", 12);
  *(_QWORD *)&v124 = 12;
  *((_QWORD *)&v124 + 1) = v12;
  v125 = 12;
  v13 = *(unsigned int *)(v5 + 288);
  v122[0] = 2;
  *(_QWORD *)&v122[8] = 0;
  *(_QWORD *)&v122[16] = v13;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v14);
  v15 = (_DWORD *)sub_140001650(7, 1);
  if ( !v15 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v15 + 3) = 1684627309;
  *v15 = 1835365481;
  *(_QWORD *)&v124 = 7;
  *((_QWORD *)&v124 + 1) = v15;
  v125 = 7;
  v17 = *(_QWORD *)(v5 + 256);
  v107 = (__int64)v15;
  if ( v17 < 0 )
  {
    v18 = 0;
    goto LABEL_20;
  }
  if ( v17 )
  {
    v19 = *(const __m128i **)(v5 + 248);
    nullsub_1(v16);
    v18 = 1;
    v20 = (__m128i *)sub_140001650(v17, 1);
    if ( !v20 )
    {
LABEL_20:
      v117 = 1;
      sub_141938D2B(v18, v17);
    }
    v21 = (__int64)v20;
    sub_1418F44E0(v20, v19, v17);
  }
  else
  {
    v21 = 1;
  }
  v122[0] = 3;
  *(_QWORD *)&v122[8] = v17;
  *(_QWORD *)&v122[16] = v21;
  v123 = v17;
  v117 = 0;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v41);
  v42 = (void *)sub_140001650(13, 1);
  if ( !v42 )
    sub_141938D2B(1, 13);
  qmemcpy(v42, "content_index", 13);
  *(_QWORD *)&v124 = 13;
  *((_QWORD *)&v124 + 1) = v42;
  v125 = 13;
  v122[0] = 2;
  *(_OWORD *)&v122[8] = 0;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  nullsub_1(v43);
  v44 = sub_140001650(5, 1);
  if ( !v44 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v44 + 4) = 97;
  *(_DWORD *)v44 = 1953260900;
  *(_QWORD *)&v124 = 5;
  *((_QWORD *)&v124 + 1) = v44;
  v125 = 5;
  v107 = v44;
  if ( a3 < 0 )
  {
    v46 = 0;
    goto LABEL_55;
  }
  v47 = 1;
  if ( !v7 )
  {
    nullsub_1(v45);
    v46 = 1;
    v48 = (__m128i *)sub_140001650(a3, 1);
    if ( !v48 )
    {
LABEL_55:
      v116 = 1;
      sub_141938D2B(v46, a3);
    }
    v47 = (__int64)v48;
    sub_1418F44E0(v48, v103, a3);
  }
  v122[0] = 3;
  *(_QWORD *)&v122[8] = a3;
  *(_QWORD *)&v122[16] = v47;
  v123 = a3;
  v116 = 0;
  sub_140E72AA0(&v113, &v109, &v124, v122);
  if ( (_BYTE)v113 != 0xFF )
    sub_140DF44E0(&v113);
  v114 = v109;
  v115 = v110;
  LOBYTE(v113) = 5;
  *(_QWORD *)&v109 = &xmmword_141A53730;
  *((_QWORD *)&v109 + 1) = 26;
  v97 = (__int64)&v113;
  *(_QWORD *)v122 = &v109;
  *(_QWORD *)&v122[8] = sub_140186EE0;
  *(_QWORD *)&v122[16] = &v97;
  v123 = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v124, &unk_141A548D8, v122);
  v49 = *((const __m128i **)&v124 + 1);
  v50 = v125;
  v51 = v100;
  v52 = v100[2];
  if ( v125 > *v100 - v52 )
  {
    v103 = *((const __m128i **)&v124 + 1);
    sub_14190D590((_DWORD)v100, v52, v125, 1, 1);
    v52 = v51[2];
    v49 = v103;
  }
  else if ( !v125 )
  {
    goto LABEL_64;
  }
  sub_1418F44E0((__m128i *)(v52 + v51[1]), v49, v50);
LABEL_64:
  v51[2] = v50 + v52;
  if ( (_QWORD)v124 )
    sub_140001660(v49, v124, 1);
  return sub_140DF44E0(&v113);
}
