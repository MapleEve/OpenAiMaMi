// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x140a47f90 | successor of pre-update 0x140e30b70 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR_PARTIAL"}
double __fastcall sub_140A47F90(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r15
  _DWORD *v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _WORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // r15
  _QWORD *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  _DWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _DWORD *v54; // r14
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  _BYTE *v58; // r12
  _DWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  _DWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r12
  _DWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int128 v71; // xmm0
  __int64 v72; // rdx
  __int64 v73; // rcx
  _DWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  _BYTE *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  void *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  _DWORD *v83; // rax
  _BYTE *v84; // r14
  unsigned __int64 v85; // r12
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int128 v89; // xmm0
  double result; // xmm0_8
  __int128 v91; // [rsp+58h] [rbp-28h]
  __int128 v92; // [rsp+68h] [rbp-18h]
  __int128 v93; // [rsp+78h] [rbp-8h]
  __int128 v94; // [rsp+98h] [rbp+18h] BYREF
  __int64 v95; // [rsp+A8h] [rbp+28h]
  __int64 v96; // [rsp+B0h] [rbp+30h]
  _DWORD *v97; // [rsp+B8h] [rbp+38h]
  _DWORD *v98; // [rsp+C0h] [rbp+40h]
  __int128 v99; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v100; // [rsp+D8h] [rbp+58h]
  _DWORD *v101; // [rsp+E0h] [rbp+60h]
  __int128 v102; // [rsp+E8h] [rbp+68h] BYREF
  unsigned __int64 v103; // [rsp+F8h] [rbp+78h]
  __m256i v104; // [rsp+100h] [rbp+80h] BYREF
  __m256i v105; // [rsp+120h] [rbp+A0h] BYREF
  __m256i v106; // [rsp+140h] [rbp+C0h] BYREF
  _BYTE *v107; // [rsp+160h] [rbp+E0h]
  char v108; // [rsp+16Ah] [rbp+EAh]
  char v109; // [rsp+16Bh] [rbp+EBh]
  char v110; // [rsp+16Ch] [rbp+ECh]
  char v111; // [rsp+16Dh] [rbp+EDh]
  char v112; // [rsp+16Eh] [rbp+EEh]
  char v113; // [rsp+16Fh] [rbp+EFh]
  __int64 v114; // [rsp+170h] [rbp+F0h]

  v114 = -2;
  v2 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = -1;
  if ( v2 == -1 )
    goto LABEL_105;
  v3 = a2;
  v91 = *(_OWORD *)(a1 + 192);
  v92 = *(_OWORD *)(a1 + 208);
  v93 = *(_OWORD *)(a1 + 224);
  *(_QWORD *)&v102 = 0;
  v103 = 0;
  nullsub_1(a1, a2);
  v5 = (_DWORD *)sub_140001650(4, 1);
  if ( !v5 )
    sub_14196B2DB(1, 4);
  *v5 = 1701869940;
  v104.m256i_i64[0] = 4;
  v96 = (__int64)v5;
  v104.m256i_i64[1] = (__int64)v5;
  v104.m256i_i64[2] = 4;
  nullsub_1(v7, v6);
  v8 = (_BYTE *)sub_140001650(36, 1);
  v107 = v8;
  if ( !v8 )
    sub_14196B2DB(1, 36);
  qmemcpy(v8, "response.reasoning_summary_text.done", 36);
  v106.m256i_i8[0] = 3;
  v106.m256i_i64[1] = 36;
  v106.m256i_i64[2] = (__int64)v8;
  v106.m256i_i64[3] = 36;
  sub_140A68320(&v105, &v102, &v104, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  nullsub_1(v10, v9);
  v11 = (void *)sub_140001650(12, 1);
  if ( !v11 )
    sub_14196B2DB(1, 12);
  qmemcpy(v11, "output_index", 12);
  v104.m256i_i64[0] = 12;
  v104.m256i_i64[1] = (__int64)v11;
  v104.m256i_i64[2] = 12;
  v106.m256i_i8[0] = 2;
  v106.m256i_i64[1] = 0;
  v96 = DWORD2(v93);
  v106.m256i_i64[2] = DWORD2(v93);
  sub_140A68320(&v105, &v102, &v104, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  nullsub_1(v13, v12);
  v14 = (void *)sub_140001650(13, 1);
  if ( !v14 )
    sub_14196B2DB(1, 13);
  qmemcpy(v14, "summary_index", 13);
  v104.m256i_i64[0] = 13;
  v104.m256i_i64[1] = (__int64)v14;
  v104.m256i_i64[2] = 13;
  v106.m256i_i8[0] = 2;
  *(_OWORD *)&v106.m256i_u64[1] = 0;
  sub_140A68320(&v105, &v102, &v104, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  nullsub_1(v16, v15);
  v17 = (_DWORD *)sub_140001650(4, 1);
  if ( !v17 )
    sub_14196B2DB(1, 4);
  *v17 = 1954047348;
  v104.m256i_i64[0] = 4;
  v104.m256i_i64[1] = (__int64)v17;
  v104.m256i_i64[2] = 4;
  v107 = v17;
  if ( (__int64)v93 < 0 )
  {
    v20 = 0;
    goto LABEL_15;
  }
  if ( (_QWORD)v93 )
  {
    nullsub_1(v19, v18);
    v20 = 1;
    v21 = sub_140001650(v93, 1);
    if ( !v21 )
    {
LABEL_15:
      v110 = 1;
      sub_14196B2DB(v20, v93);
    }
    v22 = v21;
    sub_1419234B0(v21, *((_QWORD *)&v92 + 1), v93);
  }
  else
  {
    v22 = 1;
  }
  v106.m256i_i8[0] = 3;
  v106.m256i_i64[1] = v93;
  v106.m256i_i64[2] = v22;
  v106.m256i_i64[3] = v93;
  v110 = 0;
  sub_140A68320(&v105, &v102, &v104, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  *(_OWORD *)&v105.m256i_u64[1] = v102;
  v105.m256i_i64[3] = v103;
  v105.m256i_i8[0] = 5;
  *(_QWORD *)&v102 = &xmmword_141A6A79A;
  *((_QWORD *)&v102 + 1) = 36;
  *(_QWORD *)&v99 = &v105;
  v106.m256i_i64[0] = (__int64)&v102;
  v106.m256i_i64[1] = (__int64)sub_140191200;
  v106.m256i_i64[2] = (__int64)&v99;
  v106.m256i_i64[3] = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v104, &unk_141A6C33A, &v106);
  v23 = v104.m256i_i64[2];
  v24 = v104.m256i_i64[1];
  v25 = v3[2];
  if ( v104.m256i_i64[2] > (unsigned __int64)(*v3 - v25) )
  {
    v107 = (_BYTE *)v104.m256i_i64[1];
    sub_141939070((_DWORD)v3, v25, v104.m256i_i32[4], 1, 1);
    v25 = v3[2];
    v24 = (__int64)v107;
  }
  else if ( !v104.m256i_i64[2] )
  {
    goto LABEL_25;
  }
  sub_1419234B0(v25 + v3[1], v24, v23);
LABEL_25:
  v26 = (_DWORD *)(v23 + v25);
  v3[2] = v26;
  if ( v104.m256i_i64[0] )
    sub_140001660(v24, v104.m256i_i64[0], 1);
  sub_140A192F0(&v105);
  *(_QWORD *)&v94 = 0;
  v95 = 0;
  nullsub_1(v28, v27);
  v29 = (_DWORD *)sub_140001650(4, 1);
  if ( !v29 )
    sub_14196B2DB(1, 4);
  *v29 = 1701869940;
  v104.m256i_i64[0] = 4;
  v98 = v29;
  v104.m256i_i64[1] = (__int64)v29;
  v104.m256i_i64[2] = 4;
  nullsub_1(v31, v30);
  v32 = sub_140001650(9, 1);
  v107 = (_BYTE *)v32;
  if ( !v32 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v32 = 0x6E696E6F73616572LL;
  *(_BYTE *)(v32 + 8) = 103;
  v106.m256i_i8[0] = 3;
  v106.m256i_i64[1] = 9;
  v106.m256i_i64[2] = v32;
  v106.m256i_i64[3] = 9;
  sub_140A68320(&v105, &v94, &v104, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  nullsub_1(v34, v33);
  v35 = (_WORD *)sub_140001650(2, 1);
  if ( !v35 )
    sub_14196B2DB(1, 2);
  *v35 = 25705;
  v104.m256i_i64[0] = 2;
  v107 = v35;
  v104.m256i_i64[1] = (__int64)v35;
  v104.m256i_i64[2] = 2;
  if ( v91 < 0 )
  {
    v38 = 0;
    goto LABEL_34;
  }
  v98 = (_DWORD *)v91;
  if ( *((_QWORD *)&v91 + 1) )
  {
    v101 = v26;
    v39 = v2;
    v40 = v3;
    nullsub_1(v37, v36);
    v38 = 1;
    v41 = sub_140001650(*((_QWORD *)&v91 + 1), 1);
    if ( !v41 )
    {
LABEL_34:
      v109 = 1;
      sub_14196B2DB(v38, *((_QWORD *)&v91 + 1));
    }
    v42 = v41;
    sub_1419234B0(v41, v98, *((_QWORD *)&v91 + 1));
    v3 = v40;
    v2 = v39;
    v26 = v101;
  }
  else
  {
    v42 = 1;
  }
  v106.m256i_i8[0] = 3;
  v106.m256i_i64[1] = *((_QWORD *)&v91 + 1);
  v106.m256i_i64[2] = v42;
  v106.m256i_i64[3] = *((_QWORD *)&v91 + 1);
  v109 = 0;
  sub_140A68320(&v105, &v94, &v104, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  nullsub_1(v44, v43);
  v45 = sub_140001650(6, 1);
  if ( !v45 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v45 + 4) = 29557;
  *(_DWORD *)v45 = 1952543859;
  v104.m256i_i64[0] = 6;
  v101 = (_DWORD *)v45;
  v104.m256i_i64[1] = v45;
  v104.m256i_i64[2] = 6;
  nullsub_1(v47, v46);
  v48 = sub_140001650(9, 1);
  v107 = (_BYTE *)v48;
  if ( !v48 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v48 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v48 + 8) = 100;
  v106.m256i_i8[0] = 3;
  v106.m256i_i64[1] = 9;
  v106.m256i_i64[2] = v48;
  v106.m256i_i64[3] = 9;
  sub_140A68320(&v105, &v94, &v104, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  nullsub_1(v50, v49);
  v51 = (_DWORD *)sub_140001650(7, 1);
  if ( !v51 )
    sub_14196B2DB(1, 7);
  v54 = v51;
  *(_DWORD *)((char *)v51 + 3) = 2037539181;
  *v51 = 1835890035;
  *(_QWORD *)&v99 = 7;
  *((_QWORD *)&v99 + 1) = v51;
  v100 = 7;
  nullsub_1(v53, v52);
  v55 = sub_140001650(32, 8);
  v101 = v54;
  if ( !v55 )
  {
    v111 = 1;
    sub_14196B2C1(8, 32);
  }
  v58 = (_BYTE *)v55;
  *(_QWORD *)&v102 = 0;
  v103 = 0;
  nullsub_1(v57, v56);
  v59 = (_DWORD *)sub_140001650(4, 1);
  v107 = v58;
  if ( !v59 )
    sub_14196B2DB(1, 4);
  *v59 = 1701869940;
  v104.m256i_i64[0] = 4;
  v104.m256i_i64[1] = (__int64)v59;
  v104.m256i_i64[2] = 4;
  nullsub_1(v61, v60);
  v62 = (_DWORD *)sub_140001650(12, 1);
  v97 = v62;
  if ( !v62 )
    sub_14196B2DB(1, 12);
  qmemcpy(v62, "summary_text", 12);
  v106.m256i_i8[0] = 3;
  v106.m256i_i64[1] = 12;
  v106.m256i_i64[2] = (__int64)v62;
  v106.m256i_i64[3] = 12;
  sub_140A68320(&v105, &v102, &v104, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  nullsub_1(v64, v63);
  v65 = 1;
  v66 = (_DWORD *)sub_140001650(4, 1);
  if ( !v66 )
    sub_14196B2DB(1, 4);
  *v66 = 1954047348;
  v104.m256i_i64[0] = 4;
  v97 = v66;
  v104.m256i_i64[1] = (__int64)v66;
  v104.m256i_i64[2] = 4;
  if ( (_QWORD)v93 )
  {
    nullsub_1(v68, v67);
    v69 = sub_140001650(v93, 1);
    if ( !v69 )
    {
      v108 = 1;
      sub_14196B2DB(1, v93);
    }
    v65 = v69;
    sub_1419234B0(v69, *((_QWORD *)&v92 + 1), v93);
  }
  v106.m256i_i8[0] = 3;
  v106.m256i_i64[1] = v93;
  v106.m256i_i64[2] = v65;
  v106.m256i_i64[3] = v93;
  v108 = 0;
  sub_140A68320(&v105, &v102, &v104, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  *(_OWORD *)((char *)&v106.m256i_u32[1] + 3) = v102;
  *(__int64 *)((char *)&v106.m256i_i64[2] + 7) = v103;
  v70 = (__int64)v107;
  *v107 = 5;
  v71 = *(_OWORD *)v106.m256i_i8;
  *(_OWORD *)(v70 + 16) = *(_OWORD *)((char *)&v106.m256i_u64[1] + 7);
  *(_OWORD *)(v70 + 1) = v71;
  v106.m256i_i64[1] = 1;
  v106.m256i_i64[2] = v70;
  v106.m256i_i64[3] = 1;
  v106.m256i_i8[0] = 4;
  v111 = 0;
  sub_140A68320(&v105, &v94, &v99, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  *(_OWORD *)&v104.m256i_u64[1] = v94;
  v104.m256i_i64[3] = v95;
  v104.m256i_i8[0] = 5;
  *(_QWORD *)&v99 = 0;
  v100 = 0;
  nullsub_1(v73, v72);
  v74 = (_DWORD *)sub_140001650(4, 1);
  if ( !v74 )
    sub_14196B2DB(1, 4);
  *v74 = 1701869940;
  *(_QWORD *)&v102 = 4;
  v101 = v74;
  *((_QWORD *)&v102 + 1) = v74;
  v103 = 4;
  nullsub_1(v76, v75);
  v77 = (_BYTE *)sub_140001650(25, 1);
  v107 = v77;
  if ( !v77 )
    sub_14196B2DB(1, 25);
  qmemcpy(v77, "response.output_item.done", 25);
  v106.m256i_i8[0] = 3;
  v106.m256i_i64[1] = 25;
  v106.m256i_i64[2] = (__int64)v77;
  v106.m256i_i64[3] = 25;
  sub_140A68320(&v105, &v99, &v102, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  nullsub_1(v79, v78);
  v80 = (void *)sub_140001650(12, 1);
  if ( !v80 )
    sub_14196B2DB(1, 12);
  qmemcpy(v80, "output_index", 12);
  *(_QWORD *)&v102 = 12;
  *((_QWORD *)&v102 + 1) = v80;
  v103 = 12;
  v106.m256i_i8[0] = 2;
  v106.m256i_i64[1] = 0;
  v106.m256i_i64[2] = v96;
  sub_140A68320(&v105, &v99, &v102, &v106);
  if ( v105.m256i_i8[0] != -1 )
    sub_140A192F0(&v105);
  nullsub_1(v82, v81);
  v83 = (_DWORD *)sub_140001650(4, 1);
  if ( !v83 )
    sub_14196B2DB(1, 4);
  *v83 = 1835365481;
  *(_QWORD *)&v102 = 4;
  v107 = v83;
  *((_QWORD *)&v102 + 1) = v83;
  v103 = 4;
  v112 = 1;
  sub_140B73E90(&v106, &v104);
  if ( v106.m256i_i8[0] == -1 )
  {
    v105.m256i_i64[0] = v106.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v105,
      (unsigned int)&off_141A699C8,
      (__int64)&off_141A6A7C8);
  }
  v105 = v106;
  v112 = 0;
  sub_140A68320(&v106, &v99, &v102, &v105);
  if ( v106.m256i_i8[0] != -1 )
    sub_140A192F0(&v106);
  *(_OWORD *)&v105.m256i_u64[1] = v99;
  v105.m256i_i64[3] = v100;
  v105.m256i_i8[0] = 5;
  *(_QWORD *)&v99 = &xmmword_141A6A618;
  *((_QWORD *)&v99 + 1) = 25;
  *(_QWORD *)&v94 = &v105;
  v106.m256i_i64[0] = (__int64)&v99;
  v106.m256i_i64[1] = (__int64)sub_140191200;
  v106.m256i_i64[2] = (__int64)&v94;
  v106.m256i_i64[3] = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v102, &unk_141A6C33A, &v106);
  v84 = *((_BYTE **)&v102 + 1);
  v85 = v103;
  if ( v103 > *v3 - (_QWORD)v26 )
  {
    v107 = *((_BYTE **)&v102 + 1);
    sub_141939070((_DWORD)v3, (_DWORD)v26, v103, 1, 1);
    v26 = (_DWORD *)v3[2];
    v84 = v107;
    goto LABEL_72;
  }
  if ( v103 )
LABEL_72:
    sub_1419234B0((char *)v26 + v3[1], v84, v85);
  v3[2] = (char *)v26 + v85;
  if ( (_QWORD)v102 )
    sub_140001660(v84, v102, 1);
  v113 = 1;
  sub_140A192F0(&v105);
  v86 = *(_QWORD *)(a1 + 144);
  if ( v86 == *(_QWORD *)(a1 + 128) )
    sub_1419397B0(a1 + 128);
  v87 = *(_QWORD *)(a1 + 136);
  v88 = 32 * v86;
  v89 = *(_OWORD *)v104.m256i_i8;
  *(_OWORD *)(v87 + v88 + 16) = *(_OWORD *)&v104.m256i_u64[2];
  *(_OWORD *)(v87 + v88) = v89;
  *(_QWORD *)(a1 + 144) = v86 + 1;
  if ( v2 )
    *(double *)&v89 = sub_140001660(v98, v2, 1);
  if ( (_QWORD)v92 )
    *(double *)&v89 = sub_140001660(*((_QWORD *)&v92 + 1), v92, 1);
LABEL_105:
  *(_QWORD *)&result = v89;
  return result;
}
