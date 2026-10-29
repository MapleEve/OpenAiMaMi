// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e4d8e0 | name sub_140E4D8E0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140E4D8E0(
        _QWORD *a1,
        __int64 a2,
        const __m128i *a3,
        signed __int64 a4,
        const __m128i *a5,
        __int64 a6,
        __int16 a7,
        unsigned __int16 a8)
{
  signed __int64 v11; // rbx
  __int64 v12; // rcx
  _WORD *v13; // rax
  __int64 v14; // rcx
  signed __int64 v15; // r13
  __int64 v16; // rsi
  const __m128i *v17; // rbx
  __m128i *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  void *v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  signed __int64 v34; // r13
  __int64 v35; // rsi
  signed __int64 v36; // r12
  const __m128i *v37; // rbx
  __m128i *v38; // rax
  __int64 v39; // r14
  __int64 v40; // rcx
  const __m128i *v41; // r13
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rsi
  _DWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rsi
  __m128i *v55; // rax
  __int64 v56; // r14
  __int64 v57; // rcx
  __int64 v58; // r13
  _DWORD *v59; // rax
  __int64 v60; // rcx
  __m128i *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rsi
  __m128i *v66; // rax
  __int64 v67; // r14
  __int64 v68; // rcx
  __int64 v69; // rax
  __m128i v70; // xmm0
  __m128i *v71; // rax
  _DWORD *v72; // rax
  __int64 v73; // rcx
  __m128i *v74; // rax
  __int64 v75; // rcx
  __m128i *v76; // rax
  unsigned __int64 v77; // rdi
  const __m128i *v78; // rsi
  __int64 v79; // rbx
  __int128 v81; // [rsp+30h] [rbp-50h] BYREF
  __int64 v82; // [rsp+40h] [rbp-40h]
  __int128 v83; // [rsp+48h] [rbp-38h] BYREF
  __int64 v84; // [rsp+58h] [rbp-28h]
  __int128 v85; // [rsp+60h] [rbp-20h] BYREF
  __int64 v86; // [rsp+70h] [rbp-10h]
  __int128 v87; // [rsp+78h] [rbp-8h] BYREF
  __int64 v88; // [rsp+88h] [rbp+8h]
  _DWORD *v89; // [rsp+90h] [rbp+10h]
  __m256i v90; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v91; // [rsp+B8h] [rbp+38h]
  __int64 v92; // [rsp+C0h] [rbp+40h]
  __int64 v93; // [rsp+C8h] [rbp+48h]
  __int64 v94; // [rsp+D0h] [rbp+50h]
  __int64 v95; // [rsp+D8h] [rbp+58h]
  __int64 v96; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v97; // [rsp+E8h] [rbp+68h]
  __int64 v98; // [rsp+F8h] [rbp+78h]
  __m256i v99; // [rsp+100h] [rbp+80h] BYREF
  __m128i *v100; // [rsp+120h] [rbp+A0h]
  _WORD *v101; // [rsp+128h] [rbp+A8h]
  char v102; // [rsp+136h] [rbp+B6h]
  char v103; // [rsp+137h] [rbp+B7h]
  char v104; // [rsp+138h] [rbp+B8h]
  char v105; // [rsp+139h] [rbp+B9h]
  char v106; // [rsp+13Ah] [rbp+BAh]
  char v107; // [rsp+13Bh] [rbp+BBh]
  char v108; // [rsp+13Ch] [rbp+BCh]
  char v109; // [rsp+13Dh] [rbp+BDh]
  char v110; // [rsp+13Eh] [rbp+BEh]
  char v111; // [rsp+13Fh] [rbp+BFh]
  __int64 v112; // [rsp+140h] [rbp+C0h]

  v112 = -2;
  if ( *(_BYTE *)(a2 + 782) )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return;
  }
  v11 = a6;
  if ( *(_QWORD *)(a2 + 632) )
  {
    sub_1401F6AE0((__int64 *)(a2 + 632), nullptr);
    sub_1401F9050(a2 + 632, a3, a4, a5, a6);
  }
  sub_140E4F6F0(&v90, a2, a3, a4);
  sub_14019B500((unsigned int)aAnthropicStrea, 16, (unsigned int)aFailed_2, 6, (__int64)&v90);
  *(_QWORD *)&v85 = 0;
  *((_QWORD *)&v85 + 1) = 1;
  v86 = 0;
  v111 = 1;
  sub_140E4BBB0(a2, &v85);
  v111 = 1;
  sub_140E4D370(a2, (int)"stream_truncated", 16, (__int64)&v85);
  v111 = 1;
  sub_140E4FB90(a2, 0, &v85);
  v100 = (__m128i *)a3;
  *(_BYTE *)(a2 + 782) = 1;
  *(_QWORD *)&v83 = 0;
  v84 = 0;
  nullsub_1(v12);
  v13 = (_WORD *)sub_140001650(2, 1);
  if ( !v13 )
    sub_141938D2B(1, 2);
  *v13 = 25705;
  v96 = 2;
  *(_QWORD *)&v97 = v13;
  *((_QWORD *)&v97 + 1) = 2;
  v15 = *(_QWORD *)(a2 + 104);
  v101 = v13;
  if ( v15 < 0 )
  {
    v16 = 0;
    goto LABEL_8;
  }
  if ( v15 )
  {
    v17 = *(const __m128i **)(a2 + 96);
    nullsub_1(v14);
    v16 = 1;
    v18 = (__m128i *)sub_140001650(v15, 1);
    if ( !v18 )
    {
LABEL_8:
      v107 = 1;
      sub_141938D2B(v16, v15);
    }
    v19 = (__int64)v18;
    sub_1418F44E0(v18, v17, v15);
    v11 = a6;
  }
  else
  {
    v19 = 1;
  }
  v90.m256i_i8[0] = 3;
  v90.m256i_i64[1] = v15;
  v90.m256i_i64[2] = v19;
  v90.m256i_i64[3] = v15;
  v107 = 0;
  sub_140E72AA0(&v99, &v83, &v96, &v90);
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  nullsub_1(v20);
  v21 = sub_140001650(6, 1);
  if ( !v21 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v21 + 4) = 29795;
  *(_DWORD *)v21 = 1701470831;
  v96 = 6;
  v89 = (_DWORD *)v21;
  *(_QWORD *)&v97 = v21;
  *((_QWORD *)&v97 + 1) = 6;
  nullsub_1(v22);
  v23 = (_QWORD *)sub_140001650(8, 1);
  v101 = v23;
  if ( !v23 )
    sub_141938D2B(1, 8);
  *v23 = 0x65736E6F70736572LL;
  v90.m256i_i8[0] = 3;
  v90.m256i_i64[1] = 8;
  v90.m256i_i64[2] = (__int64)v23;
  v90.m256i_i64[3] = 8;
  sub_140E72AA0(&v99, &v83, &v96, &v90);
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  nullsub_1(v24);
  v25 = (void *)sub_140001650(10, 1);
  if ( !v25 )
    sub_141938D2B(1, 10);
  qmemcpy(v25, "created_at", 10);
  v96 = 10;
  *(_QWORD *)&v97 = v25;
  *((_QWORD *)&v97 + 1) = 10;
  v26 = *(_QWORD *)(a2 + 640);
  v90.m256i_i8[0] = 2;
  v90.m256i_i64[1] = v26 >> 63;
  v90.m256i_i64[2] = v26;
  sub_140E72AA0(&v99, &v83, &v96, &v90);
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  nullsub_1(v27);
  v28 = sub_140001650(6, 1);
  if ( !v28 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v28 + 4) = 29557;
  *(_DWORD *)v28 = 1952543859;
  v96 = 6;
  v89 = (_DWORD *)v28;
  *(_QWORD *)&v97 = v28;
  *((_QWORD *)&v97 + 1) = 6;
  nullsub_1(v29);
  v30 = sub_140001650(6, 1);
  v101 = (_WORD *)v30;
  if ( !v30 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v30 + 4) = 25701;
  *(_DWORD *)v30 = 1818845542;
  v90.m256i_i8[0] = 3;
  v90.m256i_i64[1] = 6;
  v90.m256i_i64[2] = v30;
  v90.m256i_i64[3] = 6;
  sub_140E72AA0(&v99, &v83, &v96, &v90);
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  nullsub_1(v31);
  v32 = sub_140001650(5, 1);
  if ( !v32 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v32 + 4) = 108;
  *(_DWORD *)v32 = 1701080941;
  v96 = 5;
  *(_QWORD *)&v97 = v32;
  *((_QWORD *)&v97 + 1) = 5;
  v34 = *(_QWORD *)(a2 + 80);
  v101 = (_WORD *)v32;
  if ( v34 < 0 )
  {
    v35 = 0;
    goto LABEL_29;
  }
  if ( v34 )
  {
    v36 = v11;
    v37 = *(const __m128i **)(a2 + 72);
    nullsub_1(v33);
    v35 = 1;
    v38 = (__m128i *)sub_140001650(v34, 1);
    if ( !v38 )
    {
LABEL_29:
      v106 = 1;
      sub_141938D2B(v35, v34);
    }
    v39 = (__int64)v38;
    sub_1418F44E0(v38, v37, v34);
    v11 = v36;
  }
  else
  {
    v39 = 1;
  }
  v90.m256i_i8[0] = 3;
  v90.m256i_i64[1] = v34;
  v90.m256i_i64[2] = v39;
  v90.m256i_i64[3] = v34;
  v106 = 0;
  sub_140E72AA0(&v99, &v83, &v96, &v90);
  v41 = v100;
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  nullsub_1(v40);
  v42 = sub_140001650(6, 1);
  if ( !v42 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v42 + 4) = 29813;
  *(_DWORD *)v42 = 1886680431;
  *(_QWORD *)&v87 = 6;
  v101 = (_WORD *)v42;
  *((_QWORD *)&v87 + 1) = v42;
  v88 = 6;
  v44 = *(_QWORD *)(a2 + 744);
  v45 = *(_QWORD *)(a2 + 752);
  v46 = 0;
  v47 = v44;
  if ( v44 )
    v47 = *(_QWORD *)(a2 + 760);
  LOBYTE(v46) = v44 != 0;
  *(_OWORD *)v90.m256i_i8 = v46;
  v90.m256i_i64[2] = v44;
  v90.m256i_i64[3] = v45;
  v91 = v46;
  v92 = 0;
  v93 = v44;
  v94 = v45;
  v95 = v47;
  LOBYTE(v43) = v44 != 0;
  sub_1403EF510(&v96, &v90, v47, v43);
  v110 = 1;
  sub_140C11330(&v90, &v96);
  if ( v90.m256i_i8[0] == -1 )
  {
    v99.m256i_i64[0] = v90.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_16,
      43,
      (unsigned int)&v99,
      (unsigned int)&off_141A52FE8,
      (__int64)&off_141A54158);
  }
  v99 = v90;
  v110 = 0;
  sub_140E72AA0(&v90, &v83, &v87, &v99);
  if ( v90.m256i_i8[0] != -1 )
    sub_140DF44E0(&v90);
  if ( v96 )
    sub_140001660(v97, 8 * v96, 8);
  nullsub_1(v48);
  v49 = sub_140001650(5, 1);
  if ( !v49 )
    sub_141938D2B(1, 5);
  v51 = v49;
  *(_BYTE *)(v49 + 4) = 114;
  *(_DWORD *)v49 = 1869771365;
  *(_QWORD *)&v81 = 5;
  *((_QWORD *)&v81 + 1) = v49;
  v82 = 5;
  *(_QWORD *)&v87 = 0;
  v88 = 0;
  nullsub_1(v50);
  v52 = (_DWORD *)sub_140001650(4, 1);
  v101 = (_WORD *)v51;
  if ( !v52 )
    sub_141938D2B(1, 4);
  *v52 = 1701869940;
  v96 = 4;
  *(_QWORD *)&v97 = v52;
  *((_QWORD *)&v97 + 1) = 4;
  v89 = v52;
  if ( a4 < 0 )
  {
    v54 = 0;
    goto LABEL_48;
  }
  if ( a4 )
  {
    nullsub_1(v53);
    v54 = 1;
    v55 = (__m128i *)sub_140001650(a4, 1);
    if ( !v55 )
    {
LABEL_48:
      v105 = 1;
      sub_141938D2B(v54, a4);
    }
    v56 = (__int64)v55;
    sub_1418F44E0(v55, v41, a4);
  }
  else
  {
    v56 = 1;
  }
  v90.m256i_i8[0] = 3;
  v90.m256i_i64[1] = a4;
  v90.m256i_i64[2] = v56;
  v90.m256i_i64[3] = a4;
  v105 = 0;
  sub_140E72AA0(&v99, &v87, &v96, &v90);
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  nullsub_1(v57);
  v58 = 1;
  v59 = (_DWORD *)sub_140001650(4, 1);
  if ( !v59 )
    sub_141938D2B(1, 4);
  *v59 = 1701080931;
  v96 = 4;
  *(_QWORD *)&v97 = v59;
  *((_QWORD *)&v97 + 1) = 4;
  v89 = v59;
  if ( a4 )
  {
    nullsub_1(v60);
    v61 = (__m128i *)sub_140001650(a4, 1);
    if ( !v61 )
    {
      v104 = 1;
      sub_141938D2B(1, a4);
    }
    v58 = (__int64)v61;
    sub_1418F44E0(v61, v100, a4);
  }
  v90.m256i_i8[0] = 3;
  v90.m256i_i64[1] = a4;
  v90.m256i_i64[2] = v58;
  v90.m256i_i64[3] = a4;
  v104 = 0;
  sub_140E72AA0(&v99, &v87, &v96, &v90);
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  nullsub_1(v62);
  v63 = sub_140001650(7, 1);
  if ( !v63 )
    sub_141938D2B(1, 7);
  *(_DWORD *)(v63 + 3) = 1701273971;
  *(_DWORD *)v63 = 1936942445;
  v96 = 7;
  *(_QWORD *)&v97 = v63;
  *((_QWORD *)&v97 + 1) = 7;
  v100 = (__m128i *)v63;
  if ( v11 < 0 )
  {
    v65 = 0;
    goto LABEL_64;
  }
  if ( v11 )
  {
    nullsub_1(v64);
    v65 = 1;
    v66 = (__m128i *)sub_140001650(v11, 1);
    if ( !v66 )
    {
LABEL_64:
      v103 = 1;
      sub_141938D2B(v65, v11);
    }
    v67 = (__int64)v66;
    sub_1418F44E0(v66, a5, v11);
  }
  else
  {
    v67 = 1;
  }
  v90.m256i_i8[0] = 3;
  v90.m256i_i64[1] = v11;
  v90.m256i_i64[2] = v67;
  v90.m256i_i64[3] = v11;
  v103 = 0;
  sub_140E72AA0(&v99, &v87, &v96, &v90);
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  *(_OWORD *)&v90.m256i_u64[1] = v87;
  v90.m256i_i64[3] = v88;
  v90.m256i_i8[0] = 5;
  v102 = 0;
  sub_140E72AA0(&v99, &v83, &v81, &v90);
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  v97 = v83;
  v68 = v84;
  v98 = v84;
  LOBYTE(v96) = 5;
  if ( (a7 & 1) != 0 )
  {
    v90.m256i_i8[0] = 2;
    v90.m256i_i64[1] = 0;
    v90.m256i_i64[2] = a8;
    v108 = 1;
    v69 = sub_141641AF0(aError_47, 5, &v96);
    v108 = 1;
    v100 = (__m128i *)sub_141641AF0(aHttpStatus, 11, v69);
    sub_140DF44E0(v100);
    v70 = *(__m128i *)v90.m256i_i8;
    v71 = v100;
    v100[1] = *(__m128i *)&v90.m256i_u64[2];
    *v71 = v70;
  }
  *(_QWORD *)&v81 = 0;
  v82 = 0;
  nullsub_1(v68);
  v72 = (_DWORD *)sub_140001650(4, 1);
  if ( !v72 )
    sub_141938D2B(1, 4);
  *v72 = 1701869940;
  *(_QWORD *)&v87 = 4;
  v101 = v72;
  *((_QWORD *)&v87 + 1) = v72;
  v88 = 4;
  nullsub_1(v73);
  v74 = (__m128i *)sub_140001650(15, 1);
  v100 = v74;
  if ( !v74 )
    sub_141938D2B(1, 15);
  qmemcpy(v74, "response.failed", 15);
  v90.m256i_i8[0] = 3;
  v90.m256i_i64[1] = 15;
  v90.m256i_i64[2] = (__int64)v74;
  v90.m256i_i64[3] = 15;
  sub_140E72AA0(&v99, &v81, &v87, &v90);
  if ( v99.m256i_i8[0] != -1 )
    sub_140DF44E0(&v99);
  nullsub_1(v75);
  v76 = (__m128i *)sub_140001650(8, 1);
  if ( !v76 )
    sub_141938D2B(1, 8);
  v76->m128i_i64[0] = 0x65736E6F70736572LL;
  *(_QWORD *)&v87 = 8;
  v100 = v76;
  *((_QWORD *)&v87 + 1) = v76;
  v88 = 8;
  v109 = 1;
  sub_140412420(&v90, &v96);
  if ( v90.m256i_i8[0] == -1 )
  {
    v99.m256i_i64[0] = v90.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_16,
      43,
      (unsigned int)&v99,
      (unsigned int)&off_141A52FE8,
      (__int64)&off_141A54190);
  }
  v99 = v90;
  v109 = 0;
  sub_140E72AA0(&v90, &v81, &v87, &v99);
  if ( v90.m256i_i8[0] != -1 )
    sub_140DF44E0(&v90);
  *(_OWORD *)&v90.m256i_u64[1] = v81;
  v90.m256i_i64[3] = v82;
  v90.m256i_i8[0] = 5;
  sub_140E4D190((unsigned int)&v99, a2 + 768, (unsigned int)aResponseFailed, 15, (__int64)&v90);
  v77 = v99.m256i_u64[2];
  v78 = (const __m128i *)v99.m256i_i64[1];
  v79 = v86;
  if ( v99.m256i_i64[2] > (unsigned __int64)(v85 - v86) )
  {
    v100 = (__m128i *)v99.m256i_i64[1];
    sub_14190D590((unsigned int)&v85, v86, v99.m256i_i32[4], 1, 1);
    v79 = v86;
    v78 = v100;
    goto LABEL_85;
  }
  if ( v99.m256i_i64[2] )
LABEL_85:
    sub_1418F44E0((__m128i *)(v79 + *((_QWORD *)&v85 + 1)), v78, v77);
  v86 = v77 + v79;
  if ( v99.m256i_i64[0] )
    sub_140001660(v78, v99.m256i_i64[0], 1);
  sub_140DF44E0(&v90);
  a1[2] = v86;
  *(_OWORD *)a1 = v85;
  v111 = 0;
  sub_140DF44E0(&v96);
}
