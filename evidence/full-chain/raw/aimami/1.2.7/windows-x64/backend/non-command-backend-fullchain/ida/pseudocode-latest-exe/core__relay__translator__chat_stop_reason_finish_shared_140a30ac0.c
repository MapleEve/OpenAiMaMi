void __fastcall sub_140A30AC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  bool v6; // zf
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  const __m128i *v17; // rax
  __int64 v18; // rcx
  __int16 v19; // dx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int *v23; // r15
  unsigned __int64 v24; // rsi
  __int64 v25; // rdi
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rdx
  int v36; // eax
  char *v37; // rdi
  __int64 v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  void *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  void *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  void *v60; // rax
  __int64 v61; // r15
  unsigned __int64 v62; // rbx
  __int64 v63; // rsi
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned int *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  void *v70; // rax
  __int64 v71; // rbx
  unsigned __int64 v72; // rdi
  _OWORD *v73; // rcx
  unsigned int *v74; // rax
  unsigned int *v75; // r9
  unsigned int v76; // r10d
  unsigned int v77; // r8d
  __int64 v78; // r9
  __int64 v79; // [rsp+30h] [rbp-50h] BYREF
  unsigned int *v80; // [rsp+38h] [rbp-48h]
  unsigned __int64 v81; // [rsp+40h] [rbp-40h]
  __int64 v82; // [rsp+48h] [rbp-38h]
  _QWORD *v83; // [rsp+50h] [rbp-30h]
  __int64 v84; // [rsp+58h] [rbp-28h]
  unsigned int *v85; // [rsp+60h] [rbp-20h]
  _DWORD *v86; // [rsp+68h] [rbp-18h]
  __int64 v87; // [rsp+70h] [rbp-10h]
  __m128i v88; // [rsp+78h] [rbp-8h] BYREF
  __int64 v89; // [rsp+88h] [rbp+8h]
  __int64 v90; // [rsp+90h] [rbp+10h] BYREF
  _DWORD *v91; // [rsp+98h] [rbp+18h]
  __int64 v92; // [rsp+A0h] [rbp+20h]
  char v93; // [rsp+AFh] [rbp+2Fh] BYREF
  __int64 *v94; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v95; // [rsp+B8h] [rbp+38h]
  __int64 v96; // [rsp+C8h] [rbp+48h]
  __int64 v97; // [rsp+D0h] [rbp+50h]
  const char *v98; // [rsp+F8h] [rbp+78h] BYREF
  __m128i v99; // [rsp+100h] [rbp+80h]
  __int64 v100; // [rsp+110h] [rbp+90h]
  __int128 v101; // [rsp+118h] [rbp+98h] BYREF
  __int64 v102; // [rsp+128h] [rbp+A8h]
  unsigned int *v103; // [rsp+130h] [rbp+B0h]
  __int64 v104; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v105; // [rsp+140h] [rbp+C0h]
  unsigned __int64 v106; // [rsp+148h] [rbp+C8h]
  __int64 v107; // [rsp+158h] [rbp+D8h] BYREF
  __m128i v108; // [rsp+160h] [rbp+E0h]
  __int64 v109; // [rsp+170h] [rbp+F0h]
  char v110; // [rsp+17Eh] [rbp+FEh]
  char v111; // [rsp+17Fh] [rbp+FFh]
  __int64 v112; // [rsp+180h] [rbp+100h]
  char v113; // [rsp+18Fh] [rbp+10Fh]
  __int64 v114; // [rsp+190h] [rbp+110h]

  v114 = -2;
  if ( *(_BYTE *)(a2 + 109) )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return;
  }
  v82 = a4;
  v87 = a3;
  v83 = a1;
  *(_BYTE *)(a2 + 109) = 1;
  *(_QWORD *)&v101 = 0;
  *((_QWORD *)&v101 + 1) = 1;
  v102 = 0;
  v5 = *(unsigned int *)(a2 + 52);
  v6 = *(_BYTE *)(a2 + 48) == 0;
  *(_DWORD *)(a2 + 48) = 0;
  if ( !v6 )
  {
    v98 = nullptr;
    v99.m128i_i64[1] = 0;
    nullsub_1(a1, a2);
    v7 = (unsigned int *)sub_140001650(4, 1);
    if ( !v7 )
      sub_14196B2DB(1, 4);
    *v7 = 1701869940;
    v104 = 4;
    v103 = v7;
    v105 = (__int64)v7;
    v106 = 4;
    nullsub_1(v9, v8);
    v10 = (__m128i *)sub_140001650(18, 1);
    v112 = (__int64)v10;
    if ( !v10 )
      sub_14196B2DB(1, 18);
    *v10 = _mm_loadu_si128((const __m128i *)aContentBlockSt_0);
    v10[1].m128i_i16[0] = 28783;
    LOBYTE(v94) = 3;
    v95.m128i_i64[0] = 18;
    v95.m128i_i64[1] = (__int64)v10;
    v96 = 18;
    sub_140A68320(&v107, &v98, &v104, &v94);
    if ( (_BYTE)v107 != 0xFF )
      sub_140A192F0(&v107);
    nullsub_1(v12, v11);
    v13 = sub_140001650(5, 1);
    if ( !v13 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v13 + 4) = 120;
    *(_DWORD *)v13 = 1701080681;
    v104 = 5;
    v105 = v13;
    v106 = 5;
    LOBYTE(v94) = 2;
    v95.m128i_i64[0] = 0;
    v95.m128i_i64[1] = v5;
    sub_140A68320(&v107, &v98, &v104, &v94);
    if ( (_BYTE)v107 != 0xFF )
      sub_140A192F0(&v107);
    v108 = _mm_loadu_si128((const __m128i *)&v98);
    v109 = v99.m128i_i64[1];
    LOBYTE(v107) = 5;
    v98 = aContentBlockSt_0;
    v99.m128i_i64[0] = 18;
    v90 = (__int64)&v107;
    v94 = (__int64 *)&v98;
    v95.m128i_i64[0] = (__int64)sub_140191200;
    v95.m128i_i64[1] = (__int64)&v90;
    v96 = (__int64)sub_140BE6880;
    sub_1416DAFA0(&v104, &unk_141A6C33A, &v94);
    v14 = v105;
    v15 = v106;
    if ( v106 )
    {
      v112 = v105;
      sub_141939070((unsigned int)&v101, 0, v106, 1, 1);
      v16 = v102;
      v14 = v112;
      sub_1419234B0(v102 + *((_QWORD *)&v101 + 1), v112, v15);
    }
    else
    {
      v16 = 0;
    }
    v102 = v15 + v16;
    if ( v104 )
      sub_140001660(v14, v104, 1);
    sub_140A192F0(&v107);
  }
  v17 = *(const __m128i **)(a2 + 56);
  v18 = (__int64)v17->m128i_i64 + *(_QWORD *)(a2 + 64) + 1;
  v19 = _mm_movemask_epi8(_mm_load_si128(v17));
  v20 = *(_QWORD *)(a2 + 80);
  v94 = (__int64 *)v17;
  v95.m128i_i64[0] = (__int64)v17[1].m128i_i64;
  v95.m128i_i64[1] = v18;
  LOWORD(v96) = ~v19;
  v97 = v20;
  sub_140219AF0(&v79, &v94);
  v23 = v80;
  v24 = v81;
  if ( v81 >= 2 )
  {
    if ( v81 >= 0x15 )
    {
      v113 = 1;
      sub_1401B99D0(v80, v81, &v93);
    }
    else
    {
      v74 = &v80[v81];
      v22 = (__int64)(v80 + 1);
      v21 = 4;
      do
      {
        v76 = *(_DWORD *)(v22 - 4);
        v77 = *(_DWORD *)v22;
        if ( *(_DWORD *)v22 < v76 )
        {
          v78 = v21;
          do
          {
            *(unsigned int *)((char *)v23 + v78) = v76;
            if ( v78 == 4 )
            {
              v75 = v23;
              goto LABEL_84;
            }
            v76 = *(unsigned int *)((char *)v23 + v78 - 8);
            v78 -= 4;
          }
          while ( v77 < v76 );
          v75 = (unsigned int *)((char *)v23 + v78);
LABEL_84:
          *v75 = v77;
        }
        v22 += 4;
        v21 += 4;
      }
      while ( (unsigned int *)v22 != v74 );
    }
  }
  v84 = v79;
  v103 = &v23[v24];
  v85 = v23;
  if ( v23 != v103 )
  {
    while ( 1 )
    {
      v25 = *v23;
      v88.m128i_i64[0] = 0;
      v89 = 0;
      nullsub_1(v22, v21);
      v26 = (_DWORD *)sub_140001650(4, 1);
      if ( !v26 )
        sub_14196B2DB(1, 4);
      *v26 = 1701869940;
      v90 = 4;
      v86 = v26;
      v91 = v26;
      v92 = 4;
      nullsub_1(v28, v27);
      v29 = sub_140001650(18, 1);
      v112 = v29;
      if ( !v29 )
        sub_14196B2DB(1, 18);
      *(_OWORD *)v29 = *(_OWORD *)aContentBlockSt_0;
      *(_WORD *)(v29 + 16) = 28783;
      LOBYTE(v107) = 3;
      v108.m128i_i64[0] = 18;
      v108.m128i_i64[1] = v29;
      v109 = 18;
      sub_140A68320(&v104, &v88, &v90, &v107);
      if ( (_BYTE)v104 != 0xFF )
        sub_140A192F0(&v104);
      nullsub_1(v31, v30);
      v32 = sub_140001650(5, 1);
      if ( !v32 )
        sub_14196B2DB(1, 5);
      *(_BYTE *)(v32 + 4) = 120;
      *(_DWORD *)v32 = 1701080681;
      v90 = 5;
      v91 = (_DWORD *)v32;
      v92 = 5;
      LOBYTE(v107) = 2;
      v108.m128i_i64[0] = 0;
      v108.m128i_i64[1] = v25;
      sub_140A68320(&v104, &v88, &v90, &v107);
      if ( (_BYTE)v104 != 0xFF )
        sub_140A192F0(&v104);
      v100 = v89;
      v99 = _mm_loadu_si128(&v88);
      LOBYTE(v98) = 5;
      v104 = (__int64)aContentBlockSt_0;
      v105 = 18;
      v90 = (__int64)&v98;
      v94 = &v104;
      v95.m128i_i64[0] = (__int64)sub_140191200;
      v95.m128i_i64[1] = (__int64)&v90;
      v96 = (__int64)sub_140BE6880;
      sub_1416DAFA0(&v107, &unk_141A6C33A, &v94);
      v33 = v108.m128i_i64[1];
      v112 = v108.m128i_i64[0];
      v34 = v102;
      if ( v108.m128i_i64[1] > (unsigned __int64)(v101 - v102) )
        break;
      if ( v108.m128i_i64[1] )
        goto LABEL_27;
LABEL_28:
      v102 = v33 + v34;
      if ( v107 )
        sub_140001660(v112, v107, 1);
      sub_140A192F0(&v98);
      if ( ++v23 == v103 )
        goto LABEL_33;
    }
    sub_141939070((unsigned int)&v101, v102, v108.m128i_i32[2], 1, 1);
    v34 = v102;
LABEL_27:
    sub_1419234B0(v34 + *((_QWORD *)&v101 + 1), v112, v33);
    goto LABEL_28;
  }
LABEL_33:
  v35 = v84;
  if ( v84 )
    sub_140001660(v85, 4 * v84, 4);
  if ( v82 != 14 )
  {
    if ( v82 == 10 )
    {
      v22 = *(_QWORD *)v87 ^ 0x6C61635F6C6F6F74LL | *(unsigned __int16 *)(v87 + 8) ^ 0x736CLL;
      if ( !v22 )
      {
        v37 = aToolUseinputJs;
LABEL_44:
        v38 = 8;
        goto LABEL_45;
      }
    }
    else if ( v82 == 6 )
    {
      v36 = *(_DWORD *)v87 ^ 0x676E656C;
      v22 = v36 | *(unsigned __int16 *)(v87 + 4) ^ 0x6874u;
      if ( !(v36 | *(unsigned __int16 *)(v87 + 4) ^ 0x6874) )
      {
        v37 = &aContentFiltere[22];
        v38 = 10;
        goto LABEL_45;
      }
    }
LABEL_43:
    v37 = &aContentFiltere[14];
    goto LABEL_44;
  }
  v35 = v87;
  v22 = *(_QWORD *)v87 ^ 0x5F746E65746E6F63LL | *(_QWORD *)(v87 + 6) ^ 0x7265746C69665F74LL;
  if ( v22 )
    goto LABEL_43;
  v37 = (char *)&unk_141A6A397;
  v38 = 13;
LABEL_45:
  v88.m128i_i64[0] = 0;
  v89 = 0;
  nullsub_1(v22, v35);
  v39 = (unsigned int *)sub_140001650(4, 1);
  if ( !v39 )
    sub_14196B2DB(1, 4);
  *v39 = 1701869940;
  v104 = 4;
  v103 = v39;
  v105 = (__int64)v39;
  v106 = 4;
  nullsub_1(v41, v40);
  v42 = (void *)sub_140001650(13, 1);
  v112 = (__int64)v42;
  if ( !v42 )
    sub_14196B2DB(1, 13);
  qmemcpy(v42, "message_delta", 13);
  LOBYTE(v94) = 3;
  v95.m128i_i64[0] = 13;
  v95.m128i_i64[1] = (__int64)v42;
  v96 = 13;
  sub_140A68320(&v107, &v88, &v104, &v94);
  if ( (_BYTE)v107 != 0xFF )
    sub_140A192F0(&v107);
  nullsub_1(v44, v43);
  v45 = sub_140001650(5, 1);
  if ( !v45 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v45 + 4) = 97;
  *(_DWORD *)v45 = 1953260900;
  v90 = 5;
  v112 = v45;
  v91 = (_DWORD *)v45;
  v92 = 5;
  v98 = nullptr;
  v99.m128i_i64[1] = 0;
  nullsub_1(v47, v46);
  v48 = (void *)sub_140001650(11, 1);
  if ( !v48 )
    sub_14196B2DB(1, 11);
  qmemcpy(v48, "stop_reason", 11);
  v104 = 11;
  v86 = v48;
  v105 = (__int64)v48;
  v106 = 11;
  nullsub_1(0x6165725F706F7473LL, v49);
  v50 = sub_140001650(v38, 1);
  v103 = (unsigned int *)v50;
  if ( !v50 )
    sub_14196B2DB(1, v38);
  v51 = v50;
  sub_1419234B0(v50, v37, v38);
  LOBYTE(v94) = 3;
  v95.m128i_i64[0] = v38;
  v95.m128i_i64[1] = v51;
  v96 = v38;
  sub_140A68320(&v107, &v98, &v104, &v94);
  if ( (_BYTE)v107 != 0xFF )
    sub_140A192F0(&v107);
  nullsub_1(v53, v52);
  v54 = (void *)sub_140001650(13, 1);
  if ( !v54 )
    sub_14196B2DB(1, 13);
  qmemcpy(v54, "stop_sequence", 13);
  v104 = 13;
  v105 = (__int64)v54;
  v106 = 13;
  LOBYTE(v94) = 0;
  sub_140A68320(&v107, &v98, &v104, &v94);
  if ( (_BYTE)v107 != 0xFF )
    sub_140A192F0(&v107);
  v95 = _mm_loadu_si128((const __m128i *)&v98);
  v96 = v99.m128i_i64[1];
  LOBYTE(v94) = 5;
  v111 = 0;
  sub_140A68320(&v107, &v88, &v90, &v94);
  if ( (_BYTE)v107 != 0xFF )
    sub_140A192F0(&v107);
  nullsub_1(v56, v55);
  v57 = sub_140001650(5, 1);
  if ( !v57 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v57 + 4) = 101;
  *(_DWORD *)v57 = 1734439797;
  v90 = 5;
  v112 = v57;
  v91 = (_DWORD *)v57;
  v92 = 5;
  v98 = nullptr;
  v99.m128i_i64[1] = 0;
  nullsub_1(v59, v58);
  v60 = (void *)sub_140001650(13, 1);
  if ( !v60 )
    sub_14196B2DB(1, 13);
  qmemcpy(v60, "output_tokens", 13);
  v104 = 13;
  v105 = (__int64)v60;
  v106 = 13;
  LOBYTE(v94) = 2;
  v95 = 0;
  sub_140A68320(&v107, &v98, &v104, &v94);
  if ( (_BYTE)v107 != 0xFF )
    sub_140A192F0(&v107);
  v95 = _mm_loadu_si128((const __m128i *)&v98);
  v96 = v99.m128i_i64[1];
  LOBYTE(v94) = 5;
  v110 = 0;
  sub_140A68320(&v107, &v88, &v90, &v94);
  if ( (_BYTE)v107 != 0xFF )
    sub_140A192F0(&v107);
  v108 = _mm_loadu_si128(&v88);
  v109 = v89;
  LOBYTE(v107) = 5;
  v98 = aMessageDelta_0;
  v99.m128i_i64[0] = 13;
  v90 = (__int64)&v107;
  v94 = (__int64 *)&v98;
  v95.m128i_i64[0] = (__int64)sub_140191200;
  v95.m128i_i64[1] = (__int64)&v90;
  v96 = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v104, &unk_141A6C33A, &v94);
  v61 = v105;
  v62 = v106;
  v63 = v102;
  if ( v106 > (__int64)v101 - v102 )
  {
    v112 = v105;
    sub_141939070((unsigned int)&v101, v102, v106, 1, 1);
    v63 = v102;
    v61 = v112;
  }
  else if ( !v106 )
  {
    goto LABEL_68;
  }
  sub_1419234B0(v63 + *((_QWORD *)&v101 + 1), v61, v62);
LABEL_68:
  v64 = v62 + v63;
  v102 = v64;
  if ( v104 )
    sub_140001660(v61, v104, 1);
  v113 = 0;
  sub_140A192F0(&v107);
  v98 = nullptr;
  v99.m128i_i64[1] = 0;
  nullsub_1(v66, v65);
  v67 = (unsigned int *)sub_140001650(4, 1);
  if ( !v67 )
    sub_14196B2DB(1, 4);
  *v67 = 1701869940;
  v104 = 4;
  v103 = v67;
  v105 = (__int64)v67;
  v106 = 4;
  nullsub_1(v69, v68);
  v70 = (void *)sub_140001650(12, 1);
  v112 = (__int64)v70;
  if ( !v70 )
    sub_14196B2DB(1, 12);
  qmemcpy(v70, "message_stop", 12);
  LOBYTE(v94) = 3;
  v95.m128i_i64[0] = 12;
  v95.m128i_i64[1] = (__int64)v70;
  v96 = 12;
  sub_140A68320(&v107, &v98, &v104, &v94);
  if ( (_BYTE)v107 != 0xFF )
    sub_140A192F0(&v107);
  v108 = _mm_loadu_si128((const __m128i *)&v98);
  v109 = v99.m128i_i64[1];
  LOBYTE(v107) = 5;
  v98 = aMessageStop_0;
  v99.m128i_i64[0] = 12;
  v90 = (__int64)&v107;
  v94 = (__int64 *)&v98;
  v95.m128i_i64[0] = (__int64)sub_140191200;
  v95.m128i_i64[1] = (__int64)&v90;
  v96 = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v104, &unk_141A6C33A, &v94);
  v71 = v105;
  v72 = v106;
  if ( v106 > (__int64)v101 - v64 )
  {
    v112 = v105;
    sub_141939070((unsigned int)&v101, v64, v106, 1, 1);
    v64 = v102;
    v71 = v112;
    goto LABEL_76;
  }
  if ( v106 )
LABEL_76:
    sub_1419234B0(v64 + *((_QWORD *)&v101 + 1), v71, v72);
  v102 = v72 + v64;
  if ( v104 )
    sub_140001660(v71, v104, 1);
  v113 = 0;
  sub_140A192F0(&v107);
  v73 = v83;
  v83[2] = v102;
  *v73 = v101;
}
