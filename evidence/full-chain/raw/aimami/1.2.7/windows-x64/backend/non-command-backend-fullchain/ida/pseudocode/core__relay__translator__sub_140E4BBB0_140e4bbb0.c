// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e4bbb0 | name sub_140E4BBB0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140E4BBB0(__int64 a1, _QWORD *a2)
{
  _WORD *v4; // rax
  __int64 v5; // rcx
  signed __int64 v6; // rbx
  __int64 v7; // r12
  const __m128i *v8; // r15
  __m128i *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  void *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  signed __int64 v25; // rbx
  __int64 v26; // r12
  const __m128i *v27; // r15
  __m128i *v28; // rax
  __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __m128i *v33; // rax
  __int64 v34; // rcx
  _OWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  int v38; // edi
  __int64 v39; // rcx
  __m128i *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rbx
  const __m128i *v46; // r14
  __int64 v47; // rdi
  unsigned __int64 v48; // rdi
  __int64 v49; // r14
  const __m128i *v50; // r15
  __int64 v51; // rbx
  __int64 v52; // [rsp+28h] [rbp-58h] BYREF
  const __m128i *v53; // [rsp+30h] [rbp-50h]
  __int64 v54; // [rsp+38h] [rbp-48h]
  __int128 v55; // [rsp+40h] [rbp-40h] BYREF
  __int64 v56; // [rsp+50h] [rbp-30h]
  __int64 v57; // [rsp+58h] [rbp-28h] BYREF
  __int128 v58; // [rsp+60h] [rbp-20h]
  __int64 v59; // [rsp+70h] [rbp-10h]
  __int128 v60; // [rsp+78h] [rbp-8h] BYREF
  __int64 v61; // [rsp+88h] [rbp+8h]
  __m256i v62; // [rsp+90h] [rbp+10h] BYREF
  const __m128i *v63; // [rsp+B8h] [rbp+38h]
  __m256i v64; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v65; // [rsp+E0h] [rbp+60h]
  char v66; // [rsp+ECh] [rbp+6Ch]
  char v67; // [rsp+EDh] [rbp+6Dh]
  char v68; // [rsp+EEh] [rbp+6Eh]
  char v69; // [rsp+EFh] [rbp+6Fh]
  __int64 v70; // [rsp+F0h] [rbp+70h]

  v70 = -2;
  if ( !*(_BYTE *)(a1 + 780) )
  {
    *(_BYTE *)(a1 + 780) = 1;
    *(_QWORD *)&v60 = 0;
    v61 = 0;
    nullsub_1(a1);
    v4 = (_WORD *)sub_140001650(2, 1);
    if ( !v4 )
      sub_141938D2B(1, 2);
    *v4 = 25705;
    v57 = 2;
    *(_QWORD *)&v58 = v4;
    *((_QWORD *)&v58 + 1) = 2;
    v6 = *(_QWORD *)(a1 + 104);
    v65 = (__int64)v4;
    if ( v6 < 0 )
    {
      v7 = 0;
      goto LABEL_6;
    }
    if ( v6 )
    {
      v8 = *(const __m128i **)(a1 + 96);
      nullsub_1(v5);
      v7 = 1;
      v9 = (__m128i *)sub_140001650(v6, 1);
      if ( !v9 )
      {
LABEL_6:
        v67 = 1;
        sub_141938D2B(v7, v6);
      }
      v10 = (__int64)v9;
      sub_1418F44E0(v9, v8, v6);
    }
    else
    {
      v10 = 1;
    }
    v64.m256i_i8[0] = 3;
    v64.m256i_i64[1] = v6;
    v64.m256i_i64[2] = v10;
    v64.m256i_i64[3] = v6;
    v67 = 0;
    sub_140E72AA0(&v62, &v60, &v57, &v64);
    if ( v62.m256i_i8[0] != -1 )
      sub_140DF44E0(&v62);
    nullsub_1(v11);
    v12 = sub_140001650(6, 1);
    if ( !v12 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v12 + 4) = 29795;
    *(_DWORD *)v12 = 1701470831;
    v57 = 6;
    v63 = (const __m128i *)v12;
    *(_QWORD *)&v58 = v12;
    *((_QWORD *)&v58 + 1) = 6;
    nullsub_1(v13);
    v14 = (_QWORD *)sub_140001650(8, 1);
    v65 = (__int64)v14;
    if ( !v14 )
      sub_141938D2B(1, 8);
    *v14 = 0x65736E6F70736572LL;
    v64.m256i_i8[0] = 3;
    v64.m256i_i64[1] = 8;
    v64.m256i_i64[2] = (__int64)v14;
    v64.m256i_i64[3] = 8;
    sub_140E72AA0(&v62, &v60, &v57, &v64);
    if ( v62.m256i_i8[0] != -1 )
      sub_140DF44E0(&v62);
    nullsub_1(v15);
    v16 = (void *)sub_140001650(10, 1);
    if ( !v16 )
      sub_141938D2B(1, 10);
    qmemcpy(v16, "created_at", 10);
    v57 = 10;
    *(_QWORD *)&v58 = v16;
    *((_QWORD *)&v58 + 1) = 10;
    v17 = *(_QWORD *)(a1 + 640);
    v64.m256i_i8[0] = 2;
    v64.m256i_i64[1] = v17 >> 63;
    v64.m256i_i64[2] = v17;
    sub_140E72AA0(&v62, &v60, &v57, &v64);
    if ( v62.m256i_i8[0] != -1 )
      sub_140DF44E0(&v62);
    nullsub_1(v18);
    v19 = sub_140001650(6, 1);
    if ( !v19 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v19 + 4) = 29557;
    *(_DWORD *)v19 = 1952543859;
    v57 = 6;
    v63 = (const __m128i *)v19;
    *(_QWORD *)&v58 = v19;
    *((_QWORD *)&v58 + 1) = 6;
    nullsub_1(v20);
    v21 = (void *)sub_140001650(11, 1);
    v65 = (__int64)v21;
    if ( !v21 )
      sub_141938D2B(1, 11);
    qmemcpy(v21, "in_progress", 11);
    v64.m256i_i8[0] = 3;
    v64.m256i_i64[1] = 11;
    v64.m256i_i64[2] = (__int64)v21;
    v64.m256i_i64[3] = 11;
    sub_140E72AA0(&v62, &v60, &v57, &v64);
    if ( v62.m256i_i8[0] != -1 )
      sub_140DF44E0(&v62);
    nullsub_1(v22);
    v23 = sub_140001650(5, 1);
    if ( !v23 )
      sub_141938D2B(1, 5);
    *(_BYTE *)(v23 + 4) = 108;
    *(_DWORD *)v23 = 1701080941;
    v57 = 5;
    *(_QWORD *)&v58 = v23;
    *((_QWORD *)&v58 + 1) = 5;
    v25 = *(_QWORD *)(a1 + 80);
    v65 = v23;
    if ( v25 < 0 )
    {
      v26 = 0;
      goto LABEL_27;
    }
    if ( v25 )
    {
      v27 = *(const __m128i **)(a1 + 72);
      nullsub_1(v24);
      v26 = 1;
      v28 = (__m128i *)sub_140001650(v25, 1);
      if ( !v28 )
      {
LABEL_27:
        v66 = 1;
        sub_141938D2B(v26, v25);
      }
      v29 = (__int64)v28;
      sub_1418F44E0(v28, v27, v25);
    }
    else
    {
      v29 = 1;
    }
    v64.m256i_i8[0] = 3;
    v64.m256i_i64[1] = v25;
    v64.m256i_i64[2] = v29;
    v64.m256i_i64[3] = v25;
    v66 = 0;
    sub_140E72AA0(&v62, &v60, &v57, &v64);
    if ( v62.m256i_i8[0] != -1 )
      sub_140DF44E0(&v62);
    nullsub_1(v30);
    v31 = sub_140001650(6, 1);
    if ( !v31 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v31 + 4) = 29813;
    *(_DWORD *)v31 = 1886680431;
    v57 = 6;
    *(_QWORD *)&v58 = v31;
    *((_QWORD *)&v58 + 1) = 6;
    v64.m256i_i64[1] = 0;
    *(_OWORD *)&v64.m256i_u64[2] = 8u;
    v64.m256i_i8[0] = 4;
    sub_140E72AA0(&v62, &v60, &v57, &v64);
    if ( v62.m256i_i8[0] != -1 )
      sub_140DF44E0(&v62);
    v58 = v60;
    v59 = v61;
    LOBYTE(v57) = 5;
    *(_QWORD *)&v55 = 0;
    v56 = 0;
    nullsub_1(v32);
    v33 = (__m128i *)sub_140001650(4, 1);
    if ( !v33 )
      sub_141938D2B(1, 4);
    v33->m128i_i32[0] = 1701869940;
    *(_QWORD *)&v60 = 4;
    v63 = v33;
    *((_QWORD *)&v60 + 1) = v33;
    v61 = 4;
    nullsub_1(v34);
    v35 = (_OWORD *)sub_140001650(16, 1);
    v65 = (__int64)v35;
    if ( !v35 )
      sub_141938D2B(1, 16);
    *v35 = *(_OWORD *)aResponseCreate;
    v64.m256i_i8[0] = 3;
    v64.m256i_i64[1] = 16;
    v64.m256i_i64[2] = (__int64)v35;
    v64.m256i_i64[3] = 16;
    sub_140E72AA0(&v62, &v55, &v60, &v64);
    if ( v62.m256i_i8[0] != -1 )
      sub_140DF44E0(&v62);
    nullsub_1(v36);
    v37 = (_QWORD *)sub_140001650(8, 1);
    if ( !v37 )
      sub_141938D2B(1, 8);
    *v37 = 0x65736E6F70736572LL;
    *(_QWORD *)&v60 = 8;
    v65 = (__int64)v37;
    *((_QWORD *)&v60 + 1) = v37;
    v61 = 8;
    v69 = 1;
    sub_140412420(&v64, &v57);
    if ( v64.m256i_i8[0] == -1 )
    {
      v62.m256i_i64[0] = v64.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_16,
        43,
        (unsigned int)&v62,
        (unsigned int)&off_141A52FE8,
        (__int64)&off_141A53B28);
    }
    v62 = v64;
    v69 = 0;
    sub_140E72AA0(&v64, &v55, &v60, &v62);
    if ( v64.m256i_i8[0] != -1 )
      sub_140DF44E0(&v64);
    v38 = a1 + 768;
    *(_OWORD *)&v64.m256i_u64[1] = v55;
    v64.m256i_i64[3] = v56;
    v64.m256i_i8[0] = 5;
    sub_140E4D190((unsigned int)&v52, v38, (unsigned int)aResponseCreate, 16, (__int64)&v64);
    sub_140DF44E0(&v64);
    *(_QWORD *)&v55 = 0;
    v56 = 0;
    nullsub_1(v39);
    v40 = (__m128i *)sub_140001650(4, 1);
    if ( !v40 )
      sub_141938D2B(1, 4);
    v40->m128i_i32[0] = 1701869940;
    *(_QWORD *)&v60 = 4;
    v63 = v40;
    *((_QWORD *)&v60 + 1) = v40;
    v61 = 4;
    nullsub_1(v41);
    v42 = sub_140001650(20, 1);
    v65 = v42;
    if ( !v42 )
      sub_141938D2B(1, 20);
    *(_OWORD *)v42 = *(_OWORD *)aResponseInProg;
    *(_DWORD *)(v42 + 16) = 1936942450;
    v64.m256i_i8[0] = 3;
    v64.m256i_i64[1] = 20;
    v64.m256i_i64[2] = v42;
    v64.m256i_i64[3] = 20;
    sub_140E72AA0(&v62, &v55, &v60, &v64);
    if ( v62.m256i_i8[0] != -1 )
      sub_140DF44E0(&v62);
    nullsub_1(v43);
    v44 = (_QWORD *)sub_140001650(8, 1);
    if ( !v44 )
      sub_141938D2B(1, 8);
    *v44 = 0x65736E6F70736572LL;
    *(_QWORD *)&v60 = 8;
    v65 = (__int64)v44;
    *((_QWORD *)&v60 + 1) = v44;
    v61 = 8;
    v68 = 1;
    sub_140412420(&v64, &v57);
    if ( v64.m256i_i8[0] == -1 )
    {
      v62.m256i_i64[0] = v64.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_16,
        43,
        (unsigned int)&v62,
        (unsigned int)&off_141A52FE8,
        (__int64)&off_141A53B58);
    }
    v62 = v64;
    v68 = 0;
    sub_140E72AA0(&v64, &v55, &v60, &v62);
    if ( v64.m256i_i8[0] != -1 )
      sub_140DF44E0(&v64);
    *(_OWORD *)&v64.m256i_u64[1] = v55;
    v64.m256i_i64[3] = v56;
    v64.m256i_i8[0] = 5;
    sub_140E4D190((unsigned int)&v62, v38, (unsigned int)aResponseInProg, 20, (__int64)&v64);
    v45 = v62.m256i_u64[2];
    v46 = (const __m128i *)v62.m256i_i64[1];
    v47 = v54;
    if ( v62.m256i_i64[2] > (unsigned __int64)(v52 - v54) )
    {
      v65 = v62.m256i_i64[1];
      sub_14190D590((unsigned int)&v52, v54, v62.m256i_i32[4], 1, 1);
      v47 = v54;
      v46 = (const __m128i *)v65;
    }
    else if ( !v62.m256i_i64[2] )
    {
      goto LABEL_56;
    }
    sub_1418F44E0((__m128i *)((char *)v53 + v47), v46, v45);
LABEL_56:
    if ( v62.m256i_i64[0] )
      sub_140001660(v46, v62.m256i_i64[0], 1);
    sub_140DF44E0(&v64);
    v48 = v45 + v47;
    v49 = v52;
    v50 = v53;
    sub_140DF44E0(&v57);
    v51 = a2[2];
    if ( v48 > *a2 - v51 )
    {
      v63 = v50;
      v65 = v49;
      sub_14190D590((_DWORD)a2, v51, v48, 1, 1);
      v51 = a2[2];
      v49 = v65;
      v50 = v63;
    }
    else if ( !v48 )
    {
      goto LABEL_61;
    }
    sub_1418F44E0((__m128i *)(v51 + a2[1]), v50, v48);
LABEL_61:
    a2[2] = v48 + v51;
    if ( v49 )
      sub_140001660(v50, v49, 1);
  }
}
