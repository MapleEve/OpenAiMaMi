// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140312cd0 | name sub_140312CD0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140312CD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  signed __int64 v7; // rbx
  __int64 v9; // r14
  unsigned __int8 v12; // r12
  bool v13; // si
  signed __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  _DWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rsi
  bool v22; // zf
  char v23; // di
  const __m128i *v24; // r12
  _DWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  void *v28; // rax
  __int128 v29; // xmm0
  _OWORD *v30; // rax
  _DWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rsi
  __int128 v35; // xmm0
  _OWORD *v36; // rax
  signed __int64 v37; // rbx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  _DWORD *v43; // rax
  __int64 v44; // rcx
  void *v45; // rax
  __int128 v46; // xmm0
  _OWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int128 v50; // xmm0
  _OWORD *v51; // rax
  _DWORD *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int128 v57; // xmm0
  _OWORD *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rcx
  __int128 v61; // xmm0
  _OWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  _DWORD *v67; // rax
  __int64 v68; // rax
  __m128i *v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int128 v72; // xmm0
  _OWORD *v73; // rax
  __int128 v74; // [rsp+28h] [rbp-58h] BYREF
  __int64 v75; // [rsp+38h] [rbp-48h]
  __int64 v76; // [rsp+40h] [rbp-40h]
  __int64 v77; // [rsp+48h] [rbp-38h]
  __m256i v78; // [rsp+50h] [rbp-30h] BYREF
  __m256i v79; // [rsp+78h] [rbp-8h] BYREF
  __int128 v80; // [rsp+98h] [rbp+18h] BYREF
  __int64 v81; // [rsp+A8h] [rbp+28h]
  char v82; // [rsp+B5h] [rbp+35h]
  char v83; // [rsp+B6h] [rbp+36h]
  char v84; // [rsp+B7h] [rbp+37h]
  char v85; // [rsp+B8h] [rbp+38h]
  char v86; // [rsp+B9h] [rbp+39h]
  char v87; // [rsp+BAh] [rbp+3Ah]
  char v88; // [rsp+BBh] [rbp+3Bh]
  char v89; // [rsp+BCh] [rbp+3Ch]
  char v90; // [rsp+BDh] [rbp+3Dh]
  char v91; // [rsp+BEh] [rbp+3Eh]
  char v92; // [rsp+BFh] [rbp+3Fh]
  __m256i v93; // [rsp+C0h] [rbp+40h] BYREF
  char v94; // [rsp+E0h] [rbp+60h]
  char v95; // [rsp+E1h] [rbp+61h]
  char v96; // [rsp+E2h] [rbp+62h]
  unsigned __int8 v97; // [rsp+E5h] [rbp+65h]
  __int64 v98; // [rsp+F0h] [rbp+70h]
  char v99; // [rsp+FBh] [rbp+7Bh]
  char v100; // [rsp+FCh] [rbp+7Ch]
  char v101; // [rsp+FDh] [rbp+7Dh]
  char v102; // [rsp+FEh] [rbp+7Eh]
  char v103; // [rsp+FFh] [rbp+7Fh]
  __int64 v104; // [rsp+100h] [rbp+80h]

  v104 = -2;
  v9 = a3;
  sub_14022DBF0(&v93, a2, a3);
  if ( v97 == 2 )
    goto LABEL_71;
  v76 = a1;
  sub_14022DBF0(&v93, a2, v9);
  LOBYTE(v7) = v95 | (v97 == 2);
  sub_14022DBF0(&v93, a2, v9);
  v12 = v96 & (v97 != 2);
  sub_14022DBF0(&v93, a2, v9);
  v13 = v97 != 2 && v94 == 1;
  LOBYTE(v98) = sub_14022F030(a4, a5);
  if ( a4 )
  {
    v16 = sub_14022E7E0(a2, v9, a4, a5);
    if ( (v7 & 1) != 0 )
    {
      v17 = v16;
      if ( !a7 )
        goto LABEL_71;
      goto LABEL_8;
    }
    v7 = v14;
    LOBYTE(v15) = v16 != 0;
    v22 = ((v16 != 0) | v12) == 0;
    v23 = 1;
    v24 = (const __m128i *)v16;
    if ( v22 )
    {
LABEL_27:
      v24 = nullptr;
      v23 = v13;
      if ( !a7 )
      {
LABEL_28:
        if ( v23 )
        {
          *(_QWORD *)&v80 = 0;
          v81 = 0;
          nullsub_1(v15);
          v31 = (_DWORD *)sub_140001650(4, 1);
          if ( !v31 )
            sub_141938D2B(1, 4);
          *v31 = 1701869940;
          v79.m256i_i64[0] = 4;
          v79.m256i_i64[1] = (__int64)v31;
          v79.m256i_i64[2] = 4;
          nullsub_1(v32);
          v33 = (_QWORD *)sub_140001650(8, 1);
          v34 = v76;
          v98 = (__int64)v33;
          if ( !v33 )
            sub_141938D2B(1, 8);
          *v33 = 0x64656C6261736964LL;
          v93.m256i_i8[0] = 3;
          v93.m256i_i64[1] = 8;
          v93.m256i_i64[2] = (__int64)v33;
          v93.m256i_i64[3] = 8;
          sub_140E72AA0(&v78, &v80, &v79, &v93);
          if ( v78.m256i_i8[0] != -1 )
            sub_14002F9D0(&v78);
          *(_OWORD *)&v93.m256i_u64[1] = v80;
          v93.m256i_i64[3] = v81;
          v93.m256i_i8[0] = 5;
          v89 = 1;
          v98 = sub_141641AF0(aThinking_0, 8, v34);
          sub_14002F9D0(v98);
          goto LABEL_34;
        }
LABEL_71:
        LODWORD(v9) = 0;
        return (unsigned int)v9;
      }
LABEL_19:
      if ( (_BYTE)v98 )
      {
        sub_14022DBF0(&v93, a2, v9);
        if ( v97 != 2 && v94 == 2 )
        {
          *(_QWORD *)&v80 = 0;
          v81 = 0;
          nullsub_1(v15);
          v25 = (_DWORD *)sub_140001650(4, 1);
          v27 = v76;
          if ( !v25 )
            sub_141938D2B(1, 4);
          *v25 = 1701869940;
          v79.m256i_i64[0] = 4;
          v79.m256i_i64[1] = (__int64)v25;
          v79.m256i_i64[2] = 4;
          nullsub_1(v26);
          v28 = (void *)sub_140001650(13, 1);
          v98 = (__int64)v28;
          if ( !v28 )
            sub_141938D2B(1, 13);
          qmemcpy(v28, "between_tools", 13);
          v93.m256i_i8[0] = 3;
          v93.m256i_i64[1] = 13;
          v93.m256i_i64[2] = (__int64)v28;
          v93.m256i_i64[3] = 13;
          sub_140E72AA0(&v78, &v80, &v79, &v93);
          if ( v78.m256i_i8[0] != -1 )
            sub_14002F9D0(&v78);
          *(_OWORD *)&v93.m256i_u64[1] = v80;
          v93.m256i_i64[3] = v81;
          v93.m256i_i8[0] = 5;
          v82 = 1;
          v98 = sub_141641AF0(aThinking_0, 8, v27);
          sub_14002F9D0(v98);
          v29 = *(_OWORD *)v93.m256i_i8;
          v30 = (_OWORD *)v98;
          *(_OWORD *)(v98 + 16) = *(_OWORD *)&v93.m256i_u64[2];
          *v30 = v29;
          LOBYTE(v9) = 1;
          return (unsigned int)v9;
        }
        if ( !v13 )
        {
          *(_QWORD *)&v80 = 0;
          v81 = 0;
          nullsub_1(v15);
          v67 = (_DWORD *)sub_140001650(4, 1);
          if ( !v67 )
            sub_141938D2B(1, 4);
          *v67 = 1701869940;
          v79.m256i_i64[0] = 4;
          v79.m256i_i64[1] = (__int64)v67;
          v79.m256i_i64[2] = 4;
          v100 = 1;
          sub_14040FB10(&v93, &off_1419E4BA0);
          if ( v93.m256i_i8[0] == -1 )
          {
            v78.m256i_i64[0] = v93.m256i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_2,
              43,
              (unsigned int)&v78,
              (unsigned int)&off_1419E6A30,
              (__int64)&off_1419E8E68);
          }
          v78 = v93;
          v100 = 0;
          sub_140E72AA0(&v93, &v80, &v79, &v78);
          if ( v93.m256i_i8[0] != -1 )
            sub_14002F9D0(&v93);
          *(_OWORD *)&v93.m256i_u64[1] = v80;
          v93.m256i_i64[3] = v81;
          v93.m256i_i8[0] = 5;
          v88 = 1;
          v98 = sub_141641AF0(aThinking_0, 8, v76);
          sub_14002F9D0(v98);
          goto LABEL_34;
        }
      }
      if ( !v23 )
        goto LABEL_71;
      *(_QWORD *)&v80 = 0;
      v81 = 0;
      nullsub_1(v15);
      v52 = (_DWORD *)sub_140001650(4, 1);
      if ( !v52 )
        sub_141938D2B(1, 4);
      *v52 = 1701869940;
      v79.m256i_i64[0] = 4;
      v79.m256i_i64[1] = (__int64)v52;
      v79.m256i_i64[2] = 4;
      nullsub_1(v53);
      v54 = (_QWORD *)sub_140001650(8, 1);
      v77 = (__int64)v54;
      if ( !v54 )
        sub_141938D2B(1, 8);
      *v54 = 0x6576697470616461LL;
      v93.m256i_i8[0] = 3;
      v93.m256i_i64[1] = 8;
      v93.m256i_i64[2] = (__int64)v54;
      v93.m256i_i64[3] = 8;
      sub_140E72AA0(&v78, &v80, &v79, &v93);
      if ( v78.m256i_i8[0] != -1 )
        sub_14002F9D0(&v78);
      *(_OWORD *)&v79.m256i_u64[1] = v80;
      v79.m256i_i64[3] = v81;
      v79.m256i_i8[0] = 5;
      if ( a6 )
      {
        nullsub_1(v55);
        v56 = sub_140001650(10, 1);
        if ( !v56 )
        {
          v103 = 1;
          sub_141938D2B(1, 10);
        }
        *(_WORD *)(v56 + 8) = *(_WORD *)(a6 + 8);
        *(_QWORD *)v56 = *(_QWORD *)a6;
        v93.m256i_i64[1] = 10;
        v93.m256i_i64[2] = v56;
        v93.m256i_i64[3] = 10;
        v93.m256i_i8[0] = 3;
        v87 = 1;
        v77 = sub_141641AF0("display", 7, &v79);
        sub_14002F9D0(v77);
        v57 = *(_OWORD *)v93.m256i_i8;
        v58 = (_OWORD *)v77;
        *(_OWORD *)(v77 + 16) = *(_OWORD *)&v93.m256i_u64[2];
        *v58 = v57;
      }
      v93 = v79;
      v86 = 1;
      v59 = v76;
      v77 = sub_141641AF0(aThinking_0, 8, v76);
      sub_14002F9D0(v77);
      v61 = *(_OWORD *)v93.m256i_i8;
      v62 = (_OWORD *)v77;
      *(_OWORD *)(v77 + 16) = *(_OWORD *)&v93.m256i_u64[2];
      *v62 = v61;
      if ( v24 )
      {
        *(_QWORD *)&v74 = 0;
        v75 = 0;
        nullsub_1(v60);
        v63 = sub_140001650(6, 1);
        if ( !v63 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v63 + 4) = 29810;
        *(_DWORD *)v63 = 1868981861;
        *(_QWORD *)&v80 = 6;
        *((_QWORD *)&v80 + 1) = v63;
        v81 = 6;
        v65 = v7;
        if ( v7 < 0 )
        {
          v9 = 0;
          goto LABEL_70;
        }
        if ( v7 )
        {
          nullsub_1(v64);
          v9 = 1;
          v69 = (__m128i *)sub_140001650(v7, 1);
          v65 = v7;
          if ( !v69 )
          {
LABEL_70:
            v85 = 1;
            sub_141938D2B(v9, v65);
          }
          v70 = (__int64)v69;
          sub_1418F44E0(v69, v24, v7);
          v65 = v7;
        }
        else
        {
          v70 = 1;
        }
        v93.m256i_i8[0] = 3;
        v93.m256i_i64[1] = v65;
        v93.m256i_i64[2] = v70;
        v93.m256i_i64[3] = v65;
        v85 = 0;
        sub_140E72AA0(&v78, &v74, &v80, &v93);
        v71 = v76;
        if ( v78.m256i_i8[0] != -1 )
          sub_14002F9D0(&v78);
        *(_OWORD *)&v93.m256i_u64[1] = v74;
        v93.m256i_i64[3] = v75;
        v93.m256i_i8[0] = 5;
        v84 = 1;
        v98 = sub_141641AF0(aOutputConfig, 13, v71);
        sub_14002F9D0(v98);
      }
      else
      {
        if ( (v13 & (unsigned __int8)v98) == 0 )
        {
LABEL_92:
          LOBYTE(v9) = 1;
          return (unsigned int)v9;
        }
        *(_QWORD *)&v74 = 0;
        v75 = 0;
        nullsub_1(v60);
        v68 = sub_140001650(6, 1);
        if ( !v68 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v68 + 4) = 29810;
        *(_DWORD *)v68 = 1868981861;
        *(_QWORD *)&v80 = 6;
        *((_QWORD *)&v80 + 1) = v68;
        v81 = 6;
        v99 = 1;
        sub_14040FB10(&v93, &off_1419E8E88);
        if ( v93.m256i_i8[0] == -1 )
        {
          v78.m256i_i64[0] = v93.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v78,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8E98);
        }
        v78 = v93;
        v99 = 0;
        sub_140E72AA0(&v93, &v74, &v80, &v78);
        if ( v93.m256i_i8[0] != -1 )
          sub_14002F9D0(&v93);
        *(_OWORD *)&v93.m256i_u64[1] = v74;
        v93.m256i_i64[3] = v75;
        v93.m256i_i8[0] = 5;
        v83 = 1;
        v98 = sub_141641AF0(aOutputConfig, 13, v59);
        sub_14002F9D0(v98);
      }
      v72 = *(_OWORD *)v93.m256i_i8;
      v73 = (_OWORD *)v98;
      *(_OWORD *)(v98 + 16) = *(_OWORD *)&v93.m256i_u64[2];
      *v73 = v72;
      goto LABEL_92;
    }
LABEL_18:
    if ( !a7 )
      goto LABEL_28;
    goto LABEL_19;
  }
  if ( (v7 & 1) == 0 )
  {
    if ( !v12 )
      goto LABEL_27;
    v23 = 1;
    v24 = nullptr;
    goto LABEL_18;
  }
  v17 = 0;
  if ( !a7 )
    goto LABEL_71;
LABEL_8:
  if ( (_BYTE)v98 )
  {
    *(_QWORD *)&v80 = 0;
    v81 = 0;
    nullsub_1(v15);
    v18 = (_DWORD *)sub_140001650(4, 1);
    if ( !v18 )
      sub_141938D2B(1, 4);
    *v18 = 1701869940;
    v79.m256i_i64[0] = 4;
    v79.m256i_i64[1] = (__int64)v18;
    v79.m256i_i64[2] = 4;
    nullsub_1(v19);
    v20 = (_QWORD *)sub_140001650(8, 1);
    v21 = v76;
    v98 = (__int64)v20;
    if ( !v20 )
      sub_141938D2B(1, 8);
    *v20 = 0x64656C6261736964LL;
    v93.m256i_i8[0] = 3;
    v93.m256i_i64[1] = 8;
    v93.m256i_i64[2] = (__int64)v20;
    v93.m256i_i64[3] = 8;
    sub_140E72AA0(&v78, &v80, &v79, &v93);
    if ( v78.m256i_i8[0] != -1 )
      sub_14002F9D0(&v78);
    *(_OWORD *)&v93.m256i_u64[1] = v80;
    v93.m256i_i64[3] = v81;
    v93.m256i_i8[0] = 5;
    v90 = 1;
    v98 = sub_141641AF0(aThinking_0, 8, v21);
    sub_14002F9D0(v98);
LABEL_34:
    v35 = *(_OWORD *)v93.m256i_i8;
    v36 = (_OWORD *)v98;
    *(_OWORD *)(v98 + 16) = *(_OWORD *)&v93.m256i_u64[2];
    *v36 = v35;
    goto LABEL_71;
  }
  if ( !a4 )
    goto LABEL_71;
  v37 = v14;
  if ( sub_14022EC80(a4, a5) != 1 )
    goto LABEL_71;
  v39 = v38;
  v40 = v76;
  v41 = sub_1416419F0("max_tokensstreamdoubaoreasoning_effortnone", 10, v76);
  v42 = 0x2000;
  if ( v41 && *(_BYTE *)v41 == 2 && !*(_QWORD *)(v41 + 8) )
    v42 = *(_QWORD *)(v41 + 16) >> 1;
  if ( v42 < v39 )
    v39 = v42;
  if ( v39 < 0x400 )
    goto LABEL_71;
  *(_QWORD *)&v80 = 0;
  v81 = 0;
  nullsub_1(v42);
  v43 = (_DWORD *)sub_140001650(4, 1);
  if ( !v43 )
    sub_141938D2B(1, 4);
  *v43 = 1701869940;
  v79.m256i_i64[0] = 4;
  v79.m256i_i64[1] = (__int64)v43;
  v79.m256i_i64[2] = 4;
  v102 = 1;
  sub_14040FB10(&v93, &off_1419E8E18);
  if ( v93.m256i_i8[0] == -1 )
  {
    v78.m256i_i64[0] = v93.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_2,
      43,
      (unsigned int)&v78,
      (unsigned int)&off_1419E6A30,
      (__int64)&off_1419E8E28);
  }
  v78 = v93;
  v102 = 0;
  sub_140E72AA0(&v93, &v80, &v79, &v78);
  if ( v93.m256i_i8[0] != -1 )
    sub_14002F9D0(&v93);
  nullsub_1(v44);
  v45 = (void *)sub_140001650(13, 1);
  if ( !v45 )
    sub_141938D2B(1, 13);
  qmemcpy(v45, "budget_tokens", 13);
  v79.m256i_i64[0] = 13;
  v79.m256i_i64[1] = (__int64)v45;
  v79.m256i_i64[2] = 13;
  v93.m256i_i8[0] = 2;
  v93.m256i_i64[1] = 0;
  v93.m256i_i64[2] = v39;
  sub_140E72AA0(&v78, &v80, &v79, &v93);
  if ( v78.m256i_i8[0] != -1 )
    sub_14002F9D0(&v78);
  *(_OWORD *)&v93.m256i_u64[1] = v80;
  v93.m256i_i64[3] = v81;
  v93.m256i_i8[0] = 5;
  v92 = 1;
  v98 = sub_141641AF0(aThinking_0, 8, v40);
  sub_14002F9D0(v98);
  v46 = *(_OWORD *)v93.m256i_i8;
  v47 = (_OWORD *)v98;
  *(_OWORD *)(v98 + 16) = *(_OWORD *)&v93.m256i_u64[2];
  *v47 = v46;
  sub_14022DBF0(&v93, a2, v9);
  LOBYTE(v9) = 1;
  if ( (v97 & (v17 != 0)) == 1 )
  {
    *(_QWORD *)&v74 = v17;
    *((_QWORD *)&v74 + 1) = v37;
    *(_QWORD *)&v80 = 0;
    v81 = 0;
    nullsub_1(v48);
    v49 = sub_140001650(6, 1);
    if ( !v49 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v49 + 4) = 29810;
    *(_DWORD *)v49 = 1868981861;
    v79.m256i_i64[0] = 6;
    v79.m256i_i64[1] = v49;
    v79.m256i_i64[2] = 6;
    v101 = 1;
    sub_14040FB10(&v93, &v74);
    if ( v93.m256i_i8[0] == -1 )
    {
      v78.m256i_i64[0] = v93.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)&v78,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E8E40);
    }
    v78 = v93;
    v101 = 0;
    sub_140E72AA0(&v93, &v80, &v79, &v78);
    if ( v93.m256i_i8[0] != -1 )
      sub_14002F9D0(&v93);
    *(_OWORD *)&v93.m256i_u64[1] = v80;
    v93.m256i_i64[3] = v81;
    v93.m256i_i8[0] = 5;
    v91 = 1;
    v98 = sub_141641AF0(aOutputConfig, 13, v40);
    sub_14002F9D0(v98);
    v50 = *(_OWORD *)v93.m256i_i8;
    v51 = (_OWORD *)v98;
    *(_OWORD *)(v98 + 16) = *(_OWORD *)&v93.m256i_u64[2];
    *v51 = v50;
  }
  return (unsigned int)v9;
}
