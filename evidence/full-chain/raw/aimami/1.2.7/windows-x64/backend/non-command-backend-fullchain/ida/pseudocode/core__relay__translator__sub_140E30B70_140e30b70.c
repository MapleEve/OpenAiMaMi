// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e30b70 | name sub_140E30B70
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140E30B70(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __m128i *v7; // rax
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rcx
  __m128i *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __m128i *v16; // rax
  __int64 v17; // r14
  unsigned __int64 v18; // r12
  const __m128i *v19; // r14
  __int64 v20; // r15
  _DWORD *v21; // r15
  __int64 v22; // rcx
  __m128i *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __m128i *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r15
  _QWORD *v31; // rsi
  __m128i *v32; // rax
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  _DWORD *v39; // rax
  __int64 v40; // rcx
  _DWORD *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  __m128i *v44; // r12
  _DWORD *v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r12
  _DWORD *v50; // rax
  __int64 v51; // rcx
  __m128i *v52; // rax
  __int64 v53; // rcx
  __int128 v54; // xmm0
  __int64 v55; // rcx
  _DWORD *v56; // rax
  __int64 v57; // rcx
  __m128i *v58; // rax
  __int64 v59; // rcx
  void *v60; // rax
  __int64 v61; // rcx
  __m128i *v62; // rax
  const __m128i *v63; // r14
  unsigned __int64 v64; // r12
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int128 v68; // xmm0
  __int128 v69; // [rsp+58h] [rbp-28h]
  __int128 v70; // [rsp+68h] [rbp-18h]
  __int128 v71; // [rsp+78h] [rbp-8h]
  __int128 v72; // [rsp+98h] [rbp+18h] BYREF
  __int64 v73; // [rsp+A8h] [rbp+28h]
  __int64 v74; // [rsp+B0h] [rbp+30h]
  _DWORD *v75; // [rsp+B8h] [rbp+38h]
  const __m128i *v76; // [rsp+C0h] [rbp+40h]
  __int128 v77; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v78; // [rsp+D8h] [rbp+58h]
  _DWORD *v79; // [rsp+E0h] [rbp+60h]
  __int128 v80; // [rsp+E8h] [rbp+68h] BYREF
  unsigned __int64 v81; // [rsp+F8h] [rbp+78h]
  __m256i v82; // [rsp+100h] [rbp+80h] BYREF
  __m256i v83; // [rsp+120h] [rbp+A0h] BYREF
  __m256i v84; // [rsp+140h] [rbp+C0h] BYREF
  __m128i *v85; // [rsp+160h] [rbp+E0h]
  char v86; // [rsp+16Ah] [rbp+EAh]
  char v87; // [rsp+16Bh] [rbp+EBh]
  char v88; // [rsp+16Ch] [rbp+ECh]
  char v89; // [rsp+16Dh] [rbp+EDh]
  char v90; // [rsp+16Eh] [rbp+EEh]
  char v91; // [rsp+16Fh] [rbp+EFh]
  __int64 v92; // [rsp+170h] [rbp+F0h]

  v92 = -2;
  v2 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = -1;
  if ( v2 == -1 )
    return;
  v69 = *(_OWORD *)(a1 + 192);
  v70 = *(_OWORD *)(a1 + 208);
  v71 = *(_OWORD *)(a1 + 224);
  *(_QWORD *)&v80 = 0;
  v81 = 0;
  nullsub_1(a1);
  v5 = (_DWORD *)sub_140001650(4, 1);
  if ( !v5 )
    sub_141938D2B(1, 4);
  *v5 = 1701869940;
  v82.m256i_i64[0] = 4;
  v74 = (__int64)v5;
  v82.m256i_i64[1] = (__int64)v5;
  v82.m256i_i64[2] = 4;
  nullsub_1(v6);
  v7 = (__m128i *)sub_140001650(36, 1);
  v85 = v7;
  if ( !v7 )
    sub_141938D2B(1, 36);
  qmemcpy(v7, "response.reasoning_summary_text.done", 36);
  v84.m256i_i8[0] = 3;
  v84.m256i_i64[1] = 36;
  v84.m256i_i64[2] = (__int64)v7;
  v84.m256i_i64[3] = 36;
  sub_140E72AA0(&v83, &v80, &v82, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  nullsub_1(v8);
  v9 = (void *)sub_140001650(12, 1);
  if ( !v9 )
    sub_141938D2B(1, 12);
  qmemcpy(v9, "output_index", 12);
  v82.m256i_i64[0] = 12;
  v82.m256i_i64[1] = (__int64)v9;
  v82.m256i_i64[2] = 12;
  v84.m256i_i8[0] = 2;
  v84.m256i_i64[1] = 0;
  v74 = DWORD2(v71);
  v84.m256i_i64[2] = DWORD2(v71);
  sub_140E72AA0(&v83, &v80, &v82, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  nullsub_1(v10);
  v11 = (void *)sub_140001650(13, 1);
  if ( !v11 )
    sub_141938D2B(1, 13);
  qmemcpy(v11, "summary_index", 13);
  v82.m256i_i64[0] = 13;
  v82.m256i_i64[1] = (__int64)v11;
  v82.m256i_i64[2] = 13;
  v84.m256i_i8[0] = 2;
  *(_OWORD *)&v84.m256i_u64[1] = 0;
  sub_140E72AA0(&v83, &v80, &v82, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  nullsub_1(v12);
  v13 = (__m128i *)sub_140001650(4, 1);
  if ( !v13 )
    sub_141938D2B(1, 4);
  v13->m128i_i32[0] = 1954047348;
  v82.m256i_i64[0] = 4;
  v82.m256i_i64[1] = (__int64)v13;
  v82.m256i_i64[2] = 4;
  v85 = v13;
  if ( (__int64)v71 < 0 )
  {
    v15 = 0;
    goto LABEL_15;
  }
  if ( (_QWORD)v71 )
  {
    nullsub_1(v14);
    v15 = 1;
    v16 = (__m128i *)sub_140001650(v71, 1);
    if ( !v16 )
    {
LABEL_15:
      v88 = 1;
      sub_141938D2B(v15, v71);
    }
    v17 = (__int64)v16;
    sub_1418F44E0(v16, *((const __m128i **)&v70 + 1), v71);
  }
  else
  {
    v17 = 1;
  }
  v84.m256i_i8[0] = 3;
  v84.m256i_i64[1] = v71;
  v84.m256i_i64[2] = v17;
  v84.m256i_i64[3] = v71;
  v88 = 0;
  sub_140E72AA0(&v83, &v80, &v82, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  *(_OWORD *)&v83.m256i_u64[1] = v80;
  v83.m256i_i64[3] = v81;
  v83.m256i_i8[0] = 5;
  *(_QWORD *)&v80 = &xmmword_141A53760;
  *((_QWORD *)&v80 + 1) = 36;
  *(_QWORD *)&v77 = &v83;
  v84.m256i_i64[0] = (__int64)&v80;
  v84.m256i_i64[1] = (__int64)sub_140186EE0;
  v84.m256i_i64[2] = (__int64)&v77;
  v84.m256i_i64[3] = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v82, &unk_141A548D8, &v84);
  v18 = v82.m256i_u64[2];
  v19 = (const __m128i *)v82.m256i_i64[1];
  v20 = a2[2];
  if ( v82.m256i_i64[2] > (unsigned __int64)(*a2 - v20) )
  {
    v85 = (__m128i *)v82.m256i_i64[1];
    sub_14190D590((_DWORD)a2, v20, v82.m256i_i32[4], 1, 1);
    v20 = a2[2];
    v19 = v85;
  }
  else if ( !v82.m256i_i64[2] )
  {
    goto LABEL_25;
  }
  sub_1418F44E0((__m128i *)(v20 + a2[1]), v19, v18);
LABEL_25:
  v21 = (_DWORD *)(v18 + v20);
  a2[2] = v21;
  if ( v82.m256i_i64[0] )
    sub_140001660(v19, v82.m256i_i64[0], 1);
  sub_140DF44E0(&v83);
  *(_QWORD *)&v72 = 0;
  v73 = 0;
  nullsub_1(v22);
  v23 = (__m128i *)sub_140001650(4, 1);
  if ( !v23 )
    sub_141938D2B(1, 4);
  v23->m128i_i32[0] = 1701869940;
  v82.m256i_i64[0] = 4;
  v76 = v23;
  v82.m256i_i64[1] = (__int64)v23;
  v82.m256i_i64[2] = 4;
  nullsub_1(v24);
  v25 = sub_140001650(9, 1);
  v85 = (__m128i *)v25;
  if ( !v25 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v25 = 0x6E696E6F73616572LL;
  *(_BYTE *)(v25 + 8) = 103;
  v84.m256i_i8[0] = 3;
  v84.m256i_i64[1] = 9;
  v84.m256i_i64[2] = v25;
  v84.m256i_i64[3] = 9;
  sub_140E72AA0(&v83, &v72, &v82, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  nullsub_1(v26);
  v27 = (__m128i *)sub_140001650(2, 1);
  if ( !v27 )
    sub_141938D2B(1, 2);
  v27->m128i_i16[0] = 25705;
  v82.m256i_i64[0] = 2;
  v85 = v27;
  v82.m256i_i64[1] = (__int64)v27;
  v82.m256i_i64[2] = 2;
  if ( v69 < 0 )
  {
    v29 = 0;
    goto LABEL_34;
  }
  v76 = (const __m128i *)v69;
  if ( *((_QWORD *)&v69 + 1) )
  {
    v79 = v21;
    v30 = v2;
    v31 = a2;
    nullsub_1(v28);
    v29 = 1;
    v32 = (__m128i *)sub_140001650(*((_QWORD *)&v69 + 1), 1);
    if ( !v32 )
    {
LABEL_34:
      v87 = 1;
      sub_141938D2B(v29, *((_QWORD *)&v69 + 1));
    }
    v33 = (__int64)v32;
    sub_1418F44E0(v32, v76, *((unsigned __int64 *)&v69 + 1));
    a2 = v31;
    v2 = v30;
    v21 = v79;
  }
  else
  {
    v33 = 1;
  }
  v84.m256i_i8[0] = 3;
  v84.m256i_i64[1] = *((_QWORD *)&v69 + 1);
  v84.m256i_i64[2] = v33;
  v84.m256i_i64[3] = *((_QWORD *)&v69 + 1);
  v87 = 0;
  sub_140E72AA0(&v83, &v72, &v82, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  nullsub_1(v34);
  v35 = sub_140001650(6, 1);
  if ( !v35 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v35 + 4) = 29557;
  *(_DWORD *)v35 = 1952543859;
  v82.m256i_i64[0] = 6;
  v79 = (_DWORD *)v35;
  v82.m256i_i64[1] = v35;
  v82.m256i_i64[2] = 6;
  nullsub_1(v36);
  v37 = sub_140001650(9, 1);
  v85 = (__m128i *)v37;
  if ( !v37 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v37 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v37 + 8) = 100;
  v84.m256i_i8[0] = 3;
  v84.m256i_i64[1] = 9;
  v84.m256i_i64[2] = v37;
  v84.m256i_i64[3] = 9;
  sub_140E72AA0(&v83, &v72, &v82, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  nullsub_1(v38);
  v39 = (_DWORD *)sub_140001650(7, 1);
  if ( !v39 )
    sub_141938D2B(1, 7);
  v41 = v39;
  *(_DWORD *)((char *)v39 + 3) = 2037539181;
  *v39 = 1835890035;
  *(_QWORD *)&v77 = 7;
  *((_QWORD *)&v77 + 1) = v39;
  v78 = 7;
  nullsub_1(v40);
  v42 = sub_140001650(32, 8);
  v79 = v41;
  if ( !v42 )
  {
    v89 = 1;
    sub_141938D11(8, 32);
  }
  v44 = (__m128i *)v42;
  *(_QWORD *)&v80 = 0;
  v81 = 0;
  nullsub_1(v43);
  v45 = (_DWORD *)sub_140001650(4, 1);
  v85 = v44;
  if ( !v45 )
    sub_141938D2B(1, 4);
  *v45 = 1701869940;
  v82.m256i_i64[0] = 4;
  v82.m256i_i64[1] = (__int64)v45;
  v82.m256i_i64[2] = 4;
  nullsub_1(v46);
  v47 = (_DWORD *)sub_140001650(12, 1);
  v75 = v47;
  if ( !v47 )
    sub_141938D2B(1, 12);
  qmemcpy(v47, "summary_text", 12);
  v84.m256i_i8[0] = 3;
  v84.m256i_i64[1] = 12;
  v84.m256i_i64[2] = (__int64)v47;
  v84.m256i_i64[3] = 12;
  sub_140E72AA0(&v83, &v80, &v82, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  nullsub_1(v48);
  v49 = 1;
  v50 = (_DWORD *)sub_140001650(4, 1);
  if ( !v50 )
    sub_141938D2B(1, 4);
  *v50 = 1954047348;
  v82.m256i_i64[0] = 4;
  v82.m256i_i64[1] = (__int64)v50;
  v82.m256i_i64[2] = 4;
  v75 = v50;
  if ( (_QWORD)v71 )
  {
    nullsub_1(v51);
    v52 = (__m128i *)sub_140001650(v71, 1);
    if ( !v52 )
    {
      v86 = 1;
      sub_141938D2B(1, v71);
    }
    v49 = (__int64)v52;
    sub_1418F44E0(v52, *((const __m128i **)&v70 + 1), v71);
  }
  v84.m256i_i8[0] = 3;
  v84.m256i_i64[1] = v71;
  v84.m256i_i64[2] = v49;
  v84.m256i_i64[3] = v71;
  v86 = 0;
  sub_140E72AA0(&v83, &v80, &v82, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  *(_OWORD *)((char *)&v84.m256i_u32[1] + 3) = v80;
  *(__int64 *)((char *)&v84.m256i_i64[2] + 7) = v81;
  v53 = (__int64)v85;
  v85->m128i_i8[0] = 5;
  v54 = *(_OWORD *)v84.m256i_i8;
  *(_OWORD *)(v53 + 16) = *(_OWORD *)((char *)&v84.m256i_u64[1] + 7);
  *(_OWORD *)(v53 + 1) = v54;
  v84.m256i_i64[1] = 1;
  v84.m256i_i64[2] = v53;
  v84.m256i_i64[3] = 1;
  v84.m256i_i8[0] = 4;
  v89 = 0;
  sub_140E72AA0(&v83, &v72, &v77, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  *(_OWORD *)&v82.m256i_u64[1] = v72;
  v82.m256i_i64[3] = v73;
  v82.m256i_i8[0] = 5;
  *(_QWORD *)&v77 = 0;
  v78 = 0;
  nullsub_1(v55);
  v56 = (_DWORD *)sub_140001650(4, 1);
  if ( !v56 )
    sub_141938D2B(1, 4);
  *v56 = 1701869940;
  *(_QWORD *)&v80 = 4;
  v79 = v56;
  *((_QWORD *)&v80 + 1) = v56;
  v81 = 4;
  nullsub_1(v57);
  v58 = (__m128i *)sub_140001650(25, 1);
  v85 = v58;
  if ( !v58 )
    sub_141938D2B(1, 25);
  qmemcpy(v58, "response.output_item.done", 25);
  v84.m256i_i8[0] = 3;
  v84.m256i_i64[1] = 25;
  v84.m256i_i64[2] = (__int64)v58;
  v84.m256i_i64[3] = 25;
  sub_140E72AA0(&v83, &v77, &v80, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  nullsub_1(v59);
  v60 = (void *)sub_140001650(12, 1);
  if ( !v60 )
    sub_141938D2B(1, 12);
  qmemcpy(v60, "output_index", 12);
  *(_QWORD *)&v80 = 12;
  *((_QWORD *)&v80 + 1) = v60;
  v81 = 12;
  v84.m256i_i8[0] = 2;
  v84.m256i_i64[1] = 0;
  v84.m256i_i64[2] = v74;
  sub_140E72AA0(&v83, &v77, &v80, &v84);
  if ( v83.m256i_i8[0] != -1 )
    sub_140DF44E0(&v83);
  nullsub_1(v61);
  v62 = (__m128i *)sub_140001650(4, 1);
  if ( !v62 )
    sub_141938D2B(1, 4);
  v62->m128i_i32[0] = 1835365481;
  *(_QWORD *)&v80 = 4;
  v85 = v62;
  *((_QWORD *)&v80 + 1) = v62;
  v81 = 4;
  v90 = 1;
  sub_140412420(&v84, &v82);
  if ( v84.m256i_i8[0] == -1 )
  {
    v83.m256i_i64[0] = v84.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_16,
      43,
      (unsigned int)&v83,
      (unsigned int)&off_141A52FE8,
      (__int64)&off_141A537C0);
  }
  v83 = v84;
  v90 = 0;
  sub_140E72AA0(&v84, &v77, &v80, &v83);
  if ( v84.m256i_i8[0] != -1 )
    sub_140DF44E0(&v84);
  *(_OWORD *)&v83.m256i_u64[1] = v77;
  v83.m256i_i64[3] = v78;
  v83.m256i_i8[0] = 5;
  *(_QWORD *)&v77 = &xmmword_141A53568;
  *((_QWORD *)&v77 + 1) = 25;
  *(_QWORD *)&v72 = &v83;
  v84.m256i_i64[0] = (__int64)&v77;
  v84.m256i_i64[1] = (__int64)sub_140186EE0;
  v84.m256i_i64[2] = (__int64)&v72;
  v84.m256i_i64[3] = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v80, &unk_141A548D8, &v84);
  v63 = *((const __m128i **)&v80 + 1);
  v64 = v81;
  if ( v81 > *a2 - (_QWORD)v21 )
  {
    v85 = *((__m128i **)&v80 + 1);
    sub_14190D590((_DWORD)a2, (_DWORD)v21, v81, 1, 1);
    v21 = (_DWORD *)a2[2];
    v63 = v85;
    goto LABEL_72;
  }
  if ( v81 )
LABEL_72:
    sub_1418F44E0((__m128i *)((char *)v21 + a2[1]), v63, v64);
  a2[2] = (char *)v21 + v64;
  if ( (_QWORD)v80 )
    sub_140001660(v63, v80, 1);
  v91 = 1;
  sub_140DF44E0(&v83);
  v65 = *(_QWORD *)(a1 + 144);
  if ( v65 == *(_QWORD *)(a1 + 128) )
    sub_14190F570(a1 + 128);
  v66 = *(_QWORD *)(a1 + 136);
  v67 = 32 * v65;
  v68 = *(_OWORD *)v82.m256i_i8;
  *(_OWORD *)(v66 + v67 + 16) = *(_OWORD *)&v82.m256i_u64[2];
  *(_OWORD *)(v66 + v67) = v68;
  *(_QWORD *)(a1 + 144) = v65 + 1;
  if ( v2 )
    sub_140001660(v76, v2, 1);
  if ( (_QWORD)v70 )
    sub_140001660(*((_QWORD *)&v70 + 1), v70, 1);
}
