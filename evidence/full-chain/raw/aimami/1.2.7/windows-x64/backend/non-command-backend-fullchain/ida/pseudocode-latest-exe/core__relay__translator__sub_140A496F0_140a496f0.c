// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x140a496f0 | successor of pre-update 0x140e322d0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_140A496F0(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r14
  unsigned __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // r15
  _DWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _DWORD *v47; // rbx
  _DWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _WORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  _DWORD *v62; // rax
  void *v63; // rbx
  unsigned __int64 v64; // r12
  __int64 v65; // r13
  __int64 v66; // rax
  _QWORD v67[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v68; // [rsp+48h] [rbp-38h] BYREF
  __int64 v69; // [rsp+58h] [rbp-28h]
  __int64 v70; // [rsp+60h] [rbp-20h]
  __int64 v71; // [rsp+68h] [rbp-18h]
  _WORD *v72; // [rsp+70h] [rbp-10h]
  __int64 v73; // [rsp+78h] [rbp-8h]
  void *v74; // [rsp+80h] [rbp+0h]
  char v75; // [rsp+8Fh] [rbp+Fh] BYREF
  __int128 v76; // [rsp+90h] [rbp+10h] BYREF
  __int64 v77; // [rsp+A0h] [rbp+20h]
  _DWORD *v78; // [rsp+A8h] [rbp+28h]
  __int128 *v79; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v80; // [rsp+B8h] [rbp+38h]
  __int64 v81; // [rsp+C8h] [rbp+48h]
  __int128 v82; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v83; // [rsp+E0h] [rbp+60h]
  _BYTE v84[24]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v85; // [rsp+100h] [rbp+80h]
  char v86; // [rsp+10Dh] [rbp+8Dh]
  char v87; // [rsp+10Eh] [rbp+8Eh]
  char v88; // [rsp+10Fh] [rbp+8Fh]
  __int64 v89; // [rsp+110h] [rbp+90h]

  v89 = -2;
  v70 = a2;
  if ( *(_QWORD *)(a1 + 184) != -1 )
  {
    v7 = *(_QWORD *)(a1 + 224);
    if ( a3 <= *(_QWORD *)(a1 + 208) - v7 )
      goto LABEL_3;
    goto LABEL_64;
  }
  v73 = *(unsigned int *)(a1 + 472);
  *(_DWORD *)(a1 + 472) = v73 + 1;
  sub_141597890(v84);
  v82 = *(_OWORD *)v84;
  v79 = nullptr;
  v80 = 1u;
  *(_QWORD *)&v84[16] = 1610612768;
  *(_QWORD *)v84 = &v79;
  *(_QWORD *)&v84[8] = &off_141A6D298;
  if ( (unsigned __int8)sub_141598A30(&v82, v84) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_6,
      55,
      (unsigned int)&v75,
      (unsigned int)&unk_141A69A18,
      (__int64)&off_141A6D350);
  v78 = v79;
  v71 = v80;
  if ( *((_QWORD *)&v80 + 1) <= 0xCu )
  {
    if ( *((_QWORD *)&v80 + 1) != 12 )
LABEL_26:
      sub_14196B4F0(v80, DWORD2(v80), 0, 12, (__int64)&off_141A6A7E0);
  }
  else if ( *(char *)(v80 + 12) <= -65 )
  {
    goto LABEL_26;
  }
  *(_QWORD *)&v76 = v80;
  *((_QWORD *)&v76 + 1) = 12;
  v79 = &v76;
  *(_QWORD *)&v80 = sub_140191200;
  sub_1416DAFA0(v84, &unk_141A6A7F8, &v79);
  v33 = v78;
  if ( v78 )
    sub_140001660(v71, v78, 1);
  v78 = *(_DWORD **)&v84[8];
  v71 = *(_QWORD *)v84;
  v34 = *(_QWORD *)&v84[16];
  *(_QWORD *)&v68 = 0;
  v69 = 0;
  nullsub_1(v32, v33);
  v35 = (_DWORD *)sub_140001650(4, 1);
  if ( !v35 )
    sub_14196B2DB(1, 4);
  *v35 = 1701869940;
  *(_QWORD *)&v82 = 4;
  v72 = v35;
  *((_QWORD *)&v82 + 1) = v35;
  v83 = 4;
  nullsub_1(v37, v36);
  v38 = (void *)sub_140001650(26, 1);
  v74 = v38;
  if ( !v38 )
    sub_14196B2DB(1, 26);
  qmemcpy(v38, "response.output_item.added", 26);
  v84[0] = 3;
  *(_QWORD *)&v84[8] = 26;
  *(_QWORD *)&v84[16] = v38;
  v85 = 26;
  sub_140A68320(&v79, &v68, &v82, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  nullsub_1(v40, v39);
  v41 = (void *)sub_140001650(12, 1);
  if ( !v41 )
    sub_14196B2DB(1, 12);
  qmemcpy(v41, "output_index", 12);
  *(_QWORD *)&v82 = 12;
  *((_QWORD *)&v82 + 1) = v41;
  v83 = 12;
  v84[0] = 2;
  *(_QWORD *)&v84[8] = 0;
  *(_QWORD *)&v84[16] = v73;
  sub_140A68320(&v79, &v68, &v82, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  nullsub_1(v43, v42);
  v44 = (_DWORD *)sub_140001650(4, 1);
  if ( !v44 )
    sub_14196B2DB(1, 4);
  v47 = v44;
  *v44 = 1835365481;
  v67[0] = 4;
  v67[1] = v44;
  v67[2] = 4;
  *(_QWORD *)&v76 = 0;
  v77 = 0;
  nullsub_1(v46, v45);
  v48 = (_DWORD *)sub_140001650(4, 1);
  v74 = v47;
  if ( !v48 )
    sub_14196B2DB(1, 4);
  *v48 = 1701869940;
  *(_QWORD *)&v82 = 4;
  *((_QWORD *)&v82 + 1) = v48;
  v83 = 4;
  nullsub_1(v50, v49);
  v51 = sub_140001650(9, 1);
  v72 = (_WORD *)v51;
  if ( !v51 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v51 = 0x6E696E6F73616572LL;
  *(_BYTE *)(v51 + 8) = 103;
  v84[0] = 3;
  *(_QWORD *)&v84[8] = 9;
  *(_QWORD *)&v84[16] = v51;
  v85 = 9;
  sub_140A68320(&v79, &v76, &v82, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  nullsub_1(v53, v52);
  v54 = (_WORD *)sub_140001650(2, 1);
  if ( !v54 )
    sub_14196B2DB(1, 2);
  *v54 = 25705;
  *(_QWORD *)&v82 = 2;
  *((_QWORD *)&v82 + 1) = v54;
  v83 = 2;
  v72 = v54;
  if ( v34 < 0 )
  {
    v57 = 0;
    goto LABEL_45;
  }
  if ( v34 )
  {
    nullsub_1(v56, v55);
    v57 = 1;
    v58 = sub_140001650(v34, 1);
    if ( !v58 )
    {
LABEL_45:
      v87 = 1;
      sub_14196B2DB(v57, v34);
    }
    v59 = v58;
    sub_1419234B0(v58, v78, v34);
  }
  else
  {
    v59 = 1;
  }
  v84[0] = 3;
  *(_QWORD *)&v84[8] = v34;
  *(_QWORD *)&v84[16] = v59;
  v85 = v34;
  v87 = 0;
  sub_140A68320(&v79, &v76, &v82, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  nullsub_1(v61, v60);
  v62 = (_DWORD *)sub_140001650(7, 1);
  if ( !v62 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v62 + 3) = 2037539181;
  *v62 = 1835890035;
  *(_QWORD *)&v82 = 7;
  *((_QWORD *)&v82 + 1) = v62;
  v83 = 7;
  *(_QWORD *)&v84[8] = 0;
  *(_QWORD *)&v84[16] = 8;
  v85 = 0;
  v84[0] = 4;
  sub_140A68320(&v79, &v76, &v82, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  *(_OWORD *)&v84[8] = v76;
  v85 = v77;
  v84[0] = 5;
  v86 = 0;
  sub_140A68320(&v79, &v68, v67, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  v80 = v68;
  v81 = v69;
  LOBYTE(v79) = 5;
  *(_QWORD *)&v76 = &xmmword_141A6A728;
  *((_QWORD *)&v76 + 1) = 26;
  v67[0] = &v79;
  *(_QWORD *)v84 = &v76;
  *(_QWORD *)&v84[8] = sub_140191200;
  *(_QWORD *)&v84[16] = v67;
  v85 = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v82, &unk_141A6C33A, v84);
  v63 = *((void **)&v82 + 1);
  v64 = v83;
  v65 = a4[2];
  if ( v83 > *a4 - v65 )
  {
    v74 = *((void **)&v82 + 1);
    sub_141939070((_DWORD)a4, v65, v83, 1, 1);
    v65 = a4[2];
    v63 = v74;
  }
  else if ( !v83 )
  {
    goto LABEL_60;
  }
  sub_1419234B0(v65 + a4[1], v63, v64);
LABEL_60:
  a4[2] = v64 + v65;
  if ( (_QWORD)v82 )
    sub_140001660(v63, v82, 1);
  v88 = 1;
  sub_140A192F0(&v79);
  v66 = v71;
  *(_QWORD *)(a1 + 184) = v71;
  *(_QWORD *)(a1 + 192) = v78;
  *(_QWORD *)(a1 + 200) = v34;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 1;
  *(_QWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 232) = v73;
  if ( v66 == -1 )
  {
    v88 = 0;
    sub_14196B590(aJustSet, 8, &off_141A6A800);
  }
  v7 = 0;
  if ( a3 )
  {
LABEL_64:
    sub_141939070(a1 + 208, v7, a3, 1, 1);
    v7 = *(_QWORD *)(a1 + 224);
  }
LABEL_3:
  sub_1419234B0(v7 + *(_QWORD *)(a1 + 216), v70, a3);
  *(_QWORD *)(a1 + 224) = a3 + v7;
  *(_QWORD *)&v76 = 0;
  v77 = 0;
  nullsub_1(v9, v8);
  v10 = (_DWORD *)sub_140001650(4, 1);
  if ( !v10 )
    sub_14196B2DB(1, 4);
  *v10 = 1701869940;
  *(_QWORD *)&v82 = 4;
  v78 = v10;
  *((_QWORD *)&v82 + 1) = v10;
  v83 = 4;
  nullsub_1(v12, v11);
  v13 = (void *)sub_140001650(37, 1);
  v73 = (__int64)v13;
  if ( !v13 )
    sub_14196B2DB(1, 37);
  qmemcpy(v13, "response.reasoning_summary_text.delta", 37);
  v84[0] = 3;
  *(_QWORD *)&v84[8] = 37;
  *(_QWORD *)&v84[16] = v13;
  v85 = 37;
  sub_140A68320(&v79, &v76, &v82, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  nullsub_1(v15, v14);
  v16 = (void *)sub_140001650(12, 1);
  if ( !v16 )
    sub_14196B2DB(1, 12);
  qmemcpy(v16, "output_index", 12);
  *(_QWORD *)&v82 = 12;
  *((_QWORD *)&v82 + 1) = v16;
  v83 = 12;
  v17 = *(unsigned int *)(a1 + 232);
  v84[0] = 2;
  *(_QWORD *)&v84[8] = 0;
  *(_QWORD *)&v84[16] = v17;
  sub_140A68320(&v79, &v76, &v82, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  nullsub_1(v19, v18);
  v20 = (void *)sub_140001650(13, 1);
  if ( !v20 )
    sub_14196B2DB(1, 13);
  qmemcpy(v20, "summary_index", 13);
  *(_QWORD *)&v82 = 13;
  *((_QWORD *)&v82 + 1) = v20;
  v83 = 13;
  v84[0] = 2;
  *(_OWORD *)&v84[8] = 0;
  sub_140A68320(&v79, &v76, &v82, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  nullsub_1(v22, v21);
  v23 = sub_140001650(5, 1);
  if ( !v23 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v23 + 4) = 97;
  *(_DWORD *)v23 = 1953260900;
  *(_QWORD *)&v82 = 5;
  v78 = (_DWORD *)v23;
  *((_QWORD *)&v82 + 1) = v23;
  v83 = 5;
  nullsub_1(v25, v24);
  v26 = sub_140001650(a3, 1);
  v73 = v26;
  if ( !v26 )
    sub_14196B2DB(1, a3);
  v27 = v26;
  sub_1419234B0(v26, v70, a3);
  v84[0] = 3;
  *(_QWORD *)&v84[8] = a3;
  *(_QWORD *)&v84[16] = v27;
  v85 = a3;
  sub_140A68320(&v79, &v76, &v82, v84);
  if ( (_BYTE)v79 != 0xFF )
    sub_140A192F0(&v79);
  v80 = v76;
  v81 = v77;
  LOBYTE(v79) = 5;
  *(_QWORD *)&v76 = &xmmword_141A6A818;
  *((_QWORD *)&v76 + 1) = 37;
  v67[0] = &v79;
  *(_QWORD *)v84 = &v76;
  *(_QWORD *)&v84[8] = sub_140191200;
  *(_QWORD *)&v84[16] = v67;
  v85 = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v82, &unk_141A6C33A, v84);
  v28 = *((_QWORD *)&v82 + 1);
  v29 = v83;
  v30 = a4[2];
  if ( v83 > *a4 - v30 )
  {
    v70 = *((_QWORD *)&v82 + 1);
    sub_141939070((_DWORD)a4, v30, v83, 1, 1);
    v30 = a4[2];
    v28 = v70;
  }
  else if ( !v83 )
  {
    goto LABEL_20;
  }
  sub_1419234B0(v30 + a4[1], v28, v29);
LABEL_20:
  a4[2] = v29 + v30;
  if ( (_QWORD)v82 )
    sub_140001660(v28, v82, 1);
  return sub_140A192F0(&v79);
}
