// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | ea 0x14027d620 | name sub_14027D620
// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | attributed via panic-Location xref (win-native)
char *__fastcall sub_14027D620(
        char *a1,
        const __m128i *a2,
        signed __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 *a6)
{
  char *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  const __m128i *v12; // rax
  unsigned __int64 v13; // rbx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __m128i *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  char *v21; // r14
  __int64 v22; // rsi
  __m128i *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rcx
  char *v26; // rsi
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __m128i *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rax
  __int64 v36; // rcx
  __m128i *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int8 v42; // r15
  __int64 v43; // r12
  __m128i *v44; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdi
  _QWORD v50[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v51[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v52; // [rsp+60h] [rbp-20h] BYREF
  __int64 v53; // [rsp+70h] [rbp-10h]
  __int128 v54; // [rsp+78h] [rbp-8h] BYREF
  __int64 v55; // [rsp+88h] [rbp+8h]
  const __m128i *v56; // [rsp+90h] [rbp+10h]
  __int64 v57; // [rsp+98h] [rbp+18h]
  __m256i v58; // [rsp+A0h] [rbp+20h] BYREF
  const __m128i *v59; // [rsp+C0h] [rbp+40h]
  __m256i v60; // [rsp+C8h] [rbp+48h] BYREF
  __m128i *v61; // [rsp+E8h] [rbp+68h]
  __int64 v62; // [rsp+F0h] [rbp+70h] BYREF
  _DWORD *v63; // [rsp+F8h] [rbp+78h]
  __int64 v64; // [rsp+100h] [rbp+80h]
  char v65; // [rsp+10Ch] [rbp+8Ch]
  char v66; // [rsp+10Dh] [rbp+8Dh]
  char v67; // [rsp+10Eh] [rbp+8Eh]
  char v68; // [rsp+10Fh] [rbp+8Fh]
  __int64 v69; // [rsp+110h] [rbp+90h]

  v69 = -2;
  v9 = a1;
  v10 = *a6;
  if ( *a6 == -1 )
  {
    v11 = 8;
    v13 = 6;
    v59 = (const __m128i *)aFailed;
    v12 = nullptr;
    v10 = 0;
  }
  else
  {
    v11 = a6[1];
    v12 = (const __m128i *)a6[2];
    v13 = 9;
    a1 = (char *)&unk_1419DB2E9;
    v59 = (const __m128i *)&unk_1419DB2E9;
  }
  v50[0] = v10;
  v50[1] = v11;
  v56 = v12;
  v50[2] = v12;
  *(_QWORD *)&v54 = 0;
  v55 = 0;
  nullsub_1(a1);
  v14 = (_DWORD *)sub_140001650(4, 1);
  if ( !v14 )
    sub_141938D2B(1, 4);
  *v14 = 1701869940;
  v62 = 4;
  v63 = v14;
  v64 = 4;
  nullsub_1(v15);
  v61 = (__m128i *)sub_140001650(15, 1);
  if ( !v61 )
    sub_141938D2B(1, 15);
  v57 = v10;
  v16 = v61;
  *(__int64 *)((char *)v61->m128i_i64 + 7) = 0x6C6C61635F686372LL;
  v16->m128i_i64[0] = 0x726165735F626577LL;
  v60.m256i_i8[0] = 3;
  v60.m256i_i64[1] = 15;
  v60.m256i_i64[2] = (__int64)v16;
  v60.m256i_i64[3] = 15;
  sub_140E72AA0(&v58, &v54, &v62, &v60);
  if ( v58.m256i_i8[0] != -1 )
    sub_14002F9D0(&v58);
  nullsub_1(v17);
  v18 = (_WORD *)sub_140001650(2, 1);
  if ( !v18 )
    sub_141938D2B(1, 2);
  *v18 = 25705;
  v62 = 2;
  v63 = v18;
  v64 = 2;
  if ( a3 < 0 )
  {
    v20 = 0;
    goto LABEL_11;
  }
  v61 = (__m128i *)a4;
  v21 = v9;
  if ( a3 )
  {
    v22 = v11;
    nullsub_1(v19);
    v20 = 1;
    v23 = (__m128i *)sub_140001650(a3, 1);
    if ( !v23 )
    {
LABEL_11:
      v67 = 1;
      sub_141938D2B(v20, a3);
    }
    v24 = (__int64)v23;
    sub_1418F44E0(v23, a2, a3);
    v11 = v22;
  }
  else
  {
    v24 = 1;
  }
  v60.m256i_i8[0] = 3;
  v60.m256i_i64[1] = a3;
  v60.m256i_i64[2] = v24;
  v60.m256i_i64[3] = a3;
  v67 = 0;
  sub_140E72AA0(&v58, &v54, &v62, &v60);
  v26 = v21;
  v27 = (__int64)v61;
  if ( v58.m256i_i8[0] != -1 )
    sub_14002F9D0(&v58);
  nullsub_1(v25);
  v28 = sub_140001650(6, 1);
  if ( !v28 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v28 + 4) = 29557;
  *(_DWORD *)v28 = 1952543859;
  v62 = 6;
  v63 = (_DWORD *)v28;
  v64 = 6;
  nullsub_1(v29);
  v30 = (__m128i *)sub_140001650(v13, 1);
  v51[3] = v30;
  if ( !v30 )
    sub_141938D2B(1, v13);
  v31 = (__int64)v30;
  sub_1418F44E0(v30, v59, v13);
  v60.m256i_i8[0] = 3;
  v60.m256i_i64[1] = v13;
  v60.m256i_i64[2] = v31;
  v60.m256i_i64[3] = v13;
  sub_140E72AA0(&v58, &v54, &v62, &v60);
  if ( v58.m256i_i8[0] != -1 )
    sub_14002F9D0(&v58);
  nullsub_1(v32);
  v33 = sub_140001650(6, 1);
  if ( !v33 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v33 + 4) = 28271;
  *(_DWORD *)v33 = 1769235297;
  v51[0] = 6;
  v51[1] = v33;
  v51[2] = 6;
  *(_QWORD *)&v52 = 0;
  v53 = 0;
  nullsub_1(v34);
  v35 = (_DWORD *)sub_140001650(4, 1);
  if ( !v35 )
    sub_141938D2B(1, 4);
  *v35 = 1701869940;
  v62 = 4;
  v63 = v35;
  v64 = 4;
  nullsub_1(v36);
  v37 = (__m128i *)sub_140001650(6, 1);
  v59 = v37;
  if ( !v37 )
    sub_141938D2B(1, 6);
  v37->m128i_i16[2] = 26723;
  v37->m128i_i32[0] = 1918985587;
  v60.m256i_i8[0] = 3;
  v60.m256i_i64[1] = 6;
  v60.m256i_i64[2] = (__int64)v37;
  v60.m256i_i64[3] = 6;
  sub_140E72AA0(&v58, &v52, &v62, &v60);
  if ( v58.m256i_i8[0] != -1 )
    sub_14002F9D0(&v58);
  nullsub_1(v38);
  v39 = sub_140001650(5, 1);
  if ( !v39 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v39 + 4) = 121;
  *(_DWORD *)v39 = 1919251825;
  v62 = 5;
  v63 = (_DWORD *)v39;
  v64 = 5;
  if ( v27 )
  {
    v13 = a5;
    if ( a5 < 0 )
    {
      v41 = 0;
      goto LABEL_31;
    }
    v42 = 3;
    if ( a5 )
    {
      v43 = v11;
      nullsub_1(v40);
      v41 = 1;
      v44 = (__m128i *)sub_140001650(a5, 1);
      if ( !v44 )
      {
LABEL_31:
        v66 = 1;
        sub_141938D2B(v41, a5);
      }
      v27 = (__int64)v44;
      sub_1418F44E0(v44, v61, a5);
      v11 = v43;
    }
    else
    {
      v27 = 1;
      v13 = 0;
    }
  }
  else
  {
    v42 = 0;
  }
  v60.m256i_i8[0] = v42;
  v60.m256i_i64[1] = v13;
  v60.m256i_i64[2] = v27;
  v60.m256i_i64[3] = v13;
  v66 = 0;
  sub_140E72AA0(&v58, &v52, &v62, &v60);
  if ( v58.m256i_i8[0] != -1 )
    sub_14002F9D0(&v58);
  nullsub_1(v45);
  v46 = (_DWORD *)sub_140001650(7, 1);
  if ( !v46 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v46 + 3) = 1936024434;
  *v46 = 1920298867;
  v62 = 7;
  v63 = v46;
  v64 = 7;
  v68 = 1;
  sub_140C0FE40(&v60, v50);
  if ( v60.m256i_i8[0] == -1 )
  {
    v58.m256i_i64[0] = v60.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)&v58,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419E1830);
  }
  v58 = v60;
  v68 = 0;
  sub_140E72AA0(&v60, &v52, &v62, &v58);
  if ( v60.m256i_i8[0] != -1 )
    sub_14002F9D0(&v60);
  *(_OWORD *)&v60.m256i_u64[1] = v52;
  v60.m256i_i64[3] = v53;
  v60.m256i_i8[0] = 5;
  v65 = 0;
  sub_140E72AA0(&v58, &v54, v51, &v60);
  if ( v58.m256i_i8[0] != -1 )
    sub_14002F9D0(&v58);
  *((_QWORD *)v26 + 3) = v55;
  *(_OWORD *)(v26 + 8) = v54;
  *v26 = 5;
  v61 = nullptr;
  v59 = (const __m128i *)v11;
  v47 = v11;
  while ( v56 != v61 )
  {
    v61 = (__m128i *)((char *)v61 + 1);
    v48 = v47 + 32;
    sub_1403880E0(v47);
    v47 = v48;
  }
  if ( v57 )
    sub_140001660(v59, 32 * v57, 8);
  return v26;
}
