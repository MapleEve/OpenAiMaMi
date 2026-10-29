// win 1.2.7 | module src/core/relay/health_check.rs | ea 0x140da6960 | name sub_140DA6960
// win 1.2.7 | module src/core/relay/health_check.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DA6960(__int64 a1, const __m128i *a2, __int64 a3)
{
  signed __int64 v3; // r12
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r15
  const __m128i *v13; // r14
  unsigned __int64 v14; // r13
  __m128i *v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int64 v21; // r14
  const __m128i *v22; // rbx
  __m128i *v23; // rax
  __m128i *v24; // rsi
  bool v25; // zf
  __int64 v26; // rbx
  __m128i *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __m128i *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rcx
  _DWORD *v39; // rax
  __int64 v40; // rcx
  _DWORD *v41; // rax
  __int64 v42; // rcx
  _WORD *v43; // rax
  __int64 v44; // rcx
  __int128 v45; // xmm0
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  const __m128i *v52; // rbx
  __m128i *v53; // rax
  __int64 v54; // r14
  __int128 v55; // xmm0
  _OWORD *v56; // rax
  char v57; // al
  __int64 v58; // rcx
  int v59; // edx
  __int16 v60; // r8
  char v61; // r9
  __int128 v63; // [rsp+50h] [rbp-30h] BYREF
  __int64 v64; // [rsp+60h] [rbp-20h]
  signed __int64 v65; // [rsp+68h] [rbp-18h]
  __int128 v66; // [rsp+70h] [rbp-10h] BYREF
  __int64 v67; // [rsp+80h] [rbp+0h]
  _WORD *v68; // [rsp+88h] [rbp+8h]
  __int128 v69; // [rsp+90h] [rbp+10h] BYREF
  __int64 v70; // [rsp+A0h] [rbp+20h]
  const __m128i *v71; // [rsp+A8h] [rbp+28h]
  int v72; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v73; // [rsp+B8h] [rbp+38h]
  __int64 v74; // [rsp+D0h] [rbp+50h]
  _BYTE v75[24]; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v76; // [rsp+F0h] [rbp+70h]
  __m256i v77; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v78; // [rsp+118h] [rbp+98h]
  char v79; // [rsp+120h] [rbp+A0h]
  __int64 v80; // [rsp+128h] [rbp+A8h]
  unsigned __int64 v81; // [rsp+130h] [rbp+B0h]
  char v82; // [rsp+13Dh] [rbp+BDh]
  char v83; // [rsp+13Eh] [rbp+BEh]
  char v84; // [rsp+13Fh] [rbp+BFh]
  __int64 v85; // [rsp+140h] [rbp+C0h]

  v85 = -2;
  v3 = a3;
  v77.m256i_i64[0] = (__int64)a2;
  *(_OWORD *)&v77.m256i_u64[1] = (unsigned __int64)a3;
  v77.m256i_i64[3] = a3;
  v79 = 1;
  v78 = 0x4000000040LL;
  sub_140DD9390(&v72, &v77);
  if ( !(_BYTE)v72 )
  {
    v77.m256i_i64[0] = (__int64)a2;
    *(_OWORD *)&v77.m256i_u64[1] = (unsigned __int64)v3;
    v77.m256i_i64[3] = v3;
    v79 = 1;
    v78 = 0x2300000023LL;
    sub_140DD9390(&v72, &v77);
    if ( v72 != 1 )
      goto LABEL_29;
  }
  v7 = v73;
  if ( v73 )
  {
    if ( v73 >= v3 )
    {
      if ( v73 != v3 )
LABEL_6:
        sub_141938F40((_DWORD)a2, v3, 0, v73, (__int64)&off_141A4D6C8);
    }
    else if ( a2->m128i_i8[v73] <= -65 )
    {
      goto LABEL_6;
    }
  }
  v8 = sub_140E91160(a2, v73);
  v11 = v9;
  if ( v9 < 0 )
  {
    v12 = 0;
    goto LABEL_10;
  }
  v81 = v9;
  if ( !v9 )
  {
    v16 = 1;
    v17 = v7 + 1;
    if ( !v17 )
      goto LABEL_20;
LABEL_16:
    if ( v3 <= v17 )
    {
      if ( v3 == v17 )
        goto LABEL_20;
    }
    else if ( a2->m128i_i8[v17] > -65 )
    {
      goto LABEL_20;
    }
    v80 = v16;
    sub_141938F40((_DWORD)a2, v3, v17, v3, (__int64)&off_141A4D6E0);
  }
  v13 = (const __m128i *)v8;
  nullsub_1(v10);
  v12 = 1;
  v14 = v81;
  v15 = (__m128i *)sub_140001650(v81, 1);
  v11 = v14;
  if ( !v15 )
LABEL_10:
    sub_141938D2B(v12, v11);
  v16 = (__int64)v15;
  sub_1418F44E0(v15, v13, v11);
  v17 = v7 + 1;
  if ( v17 )
    goto LABEL_16;
LABEL_20:
  v18 = sub_140E91160(&a2->m128i_i8[v17], v3 - v17);
  v20 = v19;
  if ( v19 < 0 )
  {
    v21 = 0;
    goto LABEL_22;
  }
  if ( !v19 )
  {
    if ( v81 )
      sub_140001660(v16, v81, 1);
LABEL_29:
    v25 = v3 == 0;
    if ( v3 >= 0 )
      goto LABEL_33;
LABEL_30:
    v26 = 0;
    goto LABEL_31;
  }
  v80 = a1;
  v22 = (const __m128i *)v18;
  nullsub_1(v6);
  v21 = 1;
  v23 = (__m128i *)sub_140001650(v20, 1);
  if ( !v23 )
  {
LABEL_22:
    v80 = v16;
    sub_141938D2B(v21, v20);
  }
  v24 = v23;
  sub_1418F44E0(v23, v22, v20);
  if ( v81 )
  {
    v71 = v24;
    v3 = v81;
    a1 = v80;
    goto LABEL_37;
  }
  sub_140001660(v24, v20, 1);
  a1 = v80;
  v25 = v3 == 0;
  if ( v3 < 0 )
    goto LABEL_30;
LABEL_33:
  v20 = -1;
  if ( !v25 )
  {
    nullsub_1(v6);
    v26 = 1;
    v27 = (__m128i *)sub_140001650(v3, 1);
    if ( v27 )
    {
      v16 = (__int64)v27;
      sub_1418F44E0(v27, a2, v3);
      goto LABEL_37;
    }
LABEL_31:
    sub_141938D2B(v26, v3);
  }
  v16 = 1;
  v3 = 0;
LABEL_37:
  v81 = v20;
  *(_QWORD *)&v63 = 0;
  v64 = 0;
  nullsub_1(v6);
  v28 = 1;
  v29 = sub_140001650(5, 1);
  v65 = v3;
  v80 = v16;
  if ( !v29 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v29 + 4) = 108;
  *(_DWORD *)v29 = 1701080941;
  *(_QWORD *)v75 = 5;
  *(_QWORD *)&v75[8] = v29;
  *(_QWORD *)&v75[16] = 5;
  if ( v3 )
  {
    nullsub_1(v30);
    v31 = (__m128i *)sub_140001650(v3, 1);
    if ( !v31 )
    {
      v83 = 1;
      sub_141938D2B(1, v3);
    }
    v28 = (__int64)v31;
    sub_1418F44E0(v31, (const __m128i *)v16, v3);
  }
  v77.m256i_i8[0] = 3;
  v77.m256i_i64[1] = v3;
  v77.m256i_i64[2] = v28;
  v77.m256i_i64[3] = v3;
  v83 = 0;
  sub_140E72AA0(&v72, &v63, v75, &v77);
  if ( (_BYTE)v72 != 0xFF )
    sub_140409B40(&v72);
  nullsub_1(v32);
  v33 = sub_140001650(5, 1);
  if ( !v33 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v33 + 4) = 116;
  *(_DWORD *)v33 = 1970302569;
  *(_QWORD *)&v66 = 5;
  *((_QWORD *)&v66 + 1) = v33;
  v67 = 5;
  nullsub_1(v34);
  v35 = sub_140001650(32, 8);
  if ( !v35 )
  {
    v84 = 1;
    sub_141938D11(8, 32);
  }
  v74 = v35;
  *(_QWORD *)&v69 = 0;
  v70 = 0;
  nullsub_1(v36);
  v37 = (_DWORD *)sub_140001650(4, 1);
  if ( !v37 )
    sub_141938D2B(1, 4);
  *v37 = 1701605234;
  *(_QWORD *)v75 = 4;
  *(_QWORD *)&v75[8] = v37;
  *(_QWORD *)&v75[16] = 4;
  nullsub_1(v38);
  v39 = (_DWORD *)sub_140001650(4, 1);
  v68 = v39;
  if ( !v39 )
    sub_141938D2B(1, 4);
  *v39 = 1919251317;
  v77.m256i_i8[0] = 3;
  v77.m256i_i64[1] = 4;
  v77.m256i_i64[2] = (__int64)v39;
  v77.m256i_i64[3] = 4;
  sub_140E72AA0(&v72, &v69, v75, &v77);
  if ( (_BYTE)v72 != 0xFF )
    sub_140409B40(&v72);
  nullsub_1(v40);
  v41 = (_DWORD *)sub_140001650(7, 1);
  if ( !v41 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v41 + 3) = 1953391988;
  *v41 = 1953394531;
  *(_QWORD *)v75 = 7;
  *(_QWORD *)&v75[8] = v41;
  *(_QWORD *)&v75[16] = 7;
  nullsub_1(v42);
  v43 = (_WORD *)sub_140001650(2, 1);
  v68 = v43;
  if ( !v43 )
    sub_141938D2B(1, 2);
  *v43 = 26984;
  v77.m256i_i8[0] = 3;
  v77.m256i_i64[1] = 2;
  v77.m256i_i64[2] = (__int64)v43;
  v77.m256i_i64[3] = 2;
  sub_140E72AA0(&v72, &v69, v75, &v77);
  if ( (_BYTE)v72 != 0xFF )
    sub_140409B40(&v72);
  *(_OWORD *)((char *)&v77.m256i_u32[1] + 3) = v69;
  *(__int64 *)((char *)&v77.m256i_i64[2] + 7) = v70;
  v44 = v74;
  *(_BYTE *)v74 = 5;
  v45 = *(_OWORD *)v77.m256i_i8;
  *(_OWORD *)(v44 + 16) = *(_OWORD *)((char *)&v77.m256i_u64[1] + 7);
  *(_OWORD *)(v44 + 1) = v45;
  v77.m256i_i64[1] = 1;
  v77.m256i_i64[2] = v44;
  v77.m256i_i64[3] = 1;
  v77.m256i_i8[0] = 4;
  v84 = 0;
  sub_140E72AA0(&v72, &v63, &v66, &v77);
  if ( (_BYTE)v72 != 0xFF )
    sub_140409B40(&v72);
  nullsub_1(v46);
  v47 = sub_140001650(6, 1);
  if ( !v47 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v47 + 4) = 28001;
  *(_DWORD *)v47 = 1701999731;
  *(_QWORD *)v75 = 6;
  *(_QWORD *)&v75[8] = v47;
  *(_QWORD *)&v75[16] = 6;
  v77.m256i_i16[0] = 257;
  sub_140E72AA0(&v72, &v63, v75, &v77);
  if ( (_BYTE)v72 != 0xFF )
    sub_140409B40(&v72);
  *(_OWORD *)&v75[8] = v63;
  v76 = v64;
  v75[0] = 5;
  v49 = v81;
  if ( v81 != -1 )
  {
    *(_QWORD *)&v66 = 0;
    v67 = 0;
    nullsub_1(v48);
    v50 = sub_140001650(6, 1);
    v52 = v71;
    if ( !v50 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v50 + 4) = 29810;
    *(_DWORD *)v50 = 1868981861;
    *(_QWORD *)&v69 = 6;
    *((_QWORD *)&v69 + 1) = v50;
    v70 = 6;
    nullsub_1(v51);
    v53 = (__m128i *)sub_140001650(v49, 1);
    v74 = (__int64)v53;
    if ( !v53 )
      sub_141938D2B(1, v49);
    v54 = (__int64)v53;
    sub_1418F44E0(v53, v52, v49);
    v77.m256i_i8[0] = 3;
    v77.m256i_i64[1] = v49;
    v77.m256i_i64[2] = v54;
    v77.m256i_i64[3] = v49;
    sub_140E72AA0(&v72, &v66, &v69, &v77);
    if ( (_BYTE)v72 != 0xFF )
      sub_140409B40(&v72);
    *(_OWORD *)&v77.m256i_u64[1] = v66;
    v77.m256i_i64[3] = v67;
    v77.m256i_i8[0] = 5;
    v82 = 1;
    v74 = sub_141641AF0(aReasoning_3, 9, v75);
    sub_140409B40(v74);
    v55 = *(_OWORD *)v77.m256i_i8;
    v56 = (_OWORD *)v74;
    *(_OWORD *)(v74 + 16) = *(_OWORD *)&v77.m256i_u64[2];
    *v56 = v55;
    sub_140001660(v71, v81, 1);
  }
  v57 = v75[0];
  v58 = *(_QWORD *)&v75[1];
  v59 = *(_DWORD *)&v75[9];
  v60 = *(_WORD *)&v75[13];
  v61 = v75[15];
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v75[16];
  *(_QWORD *)(a1 + 24) = v76;
  *(_BYTE *)a1 = v57;
  *(_QWORD *)(a1 + 1) = v58;
  *(_DWORD *)(a1 + 9) = v59;
  *(_WORD *)(a1 + 13) = v60;
  *(_BYTE *)(a1 + 15) = v61;
  if ( v65 )
    sub_140001660(v80, v65, 1);
  return a1;
}
