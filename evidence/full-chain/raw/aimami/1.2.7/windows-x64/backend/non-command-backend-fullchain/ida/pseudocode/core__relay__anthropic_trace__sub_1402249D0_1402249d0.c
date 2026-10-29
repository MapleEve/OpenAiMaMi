// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x1402249d0 | name sub_1402249D0
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_1402249D0(__int64 a1, __int64 a2, const __m128i *a3, unsigned __int64 a4, _BYTE *a5)
{
  _BOOL8 v5; // rcx
  const __m128i *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int128 v13; // xmm0
  _OWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdi
  _BYTE *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int128 v21; // xmm0
  _OWORD *v22; // rax
  _DWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int128 v31; // xmm1
  __int64 v32; // rax
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  void *v37; // rax
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  __m128i *v42; // rax
  __int64 v43; // r14
  __int64 v44; // rcx
  void *v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rsi
  __m128i *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdi
  __int128 v58; // xmm0
  char v59[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v60; // [rsp+38h] [rbp-48h]
  __int64 v61; // [rsp+48h] [rbp-38h]
  __int64 v62; // [rsp+50h] [rbp-30h]
  unsigned __int64 v63; // [rsp+58h] [rbp-28h]
  const __m128i *v64; // [rsp+60h] [rbp-20h]
  __int64 v65; // [rsp+68h] [rbp-18h]
  const __m128i *v66; // [rsp+70h] [rbp-10h]
  __int128 v67; // [rsp+78h] [rbp-8h] BYREF
  __int64 v68; // [rsp+88h] [rbp+8h]
  __m256i v69; // [rsp+90h] [rbp+10h] BYREF
  const char *v70; // [rsp+B0h] [rbp+30h]
  __int64 v71; // [rsp+B8h] [rbp+38h]
  const char *v72; // [rsp+C0h] [rbp+40h]
  __int64 v73; // [rsp+C8h] [rbp+48h]
  const char *v74; // [rsp+D0h] [rbp+50h]
  __int64 v75; // [rsp+D8h] [rbp+58h]
  const char *v76; // [rsp+E0h] [rbp+60h]
  __int64 v77; // [rsp+E8h] [rbp+68h]
  __int64 v78; // [rsp+F8h] [rbp+78h]
  __m256i v79; // [rsp+100h] [rbp+80h] BYREF
  __int64 v80; // [rsp+128h] [rbp+A8h] BYREF
  _DWORD *v81; // [rsp+130h] [rbp+B0h]
  __int64 v82; // [rsp+138h] [rbp+B8h]
  __int64 v83; // [rsp+140h] [rbp+C0h]
  char v84; // [rsp+14Dh] [rbp+CDh]
  char v85; // [rsp+14Eh] [rbp+CEh]
  char v86; // [rsp+14Fh] [rbp+CFh]
  __int64 v87; // [rsp+150h] [rbp+D0h]

  v87 = -2;
  v78 = a1;
  if ( *(_BYTE *)(a1 + 284) )
    return;
  v62 = a2;
  v64 = a3;
  v63 = a4;
  if ( a5 )
  {
    v5 = *a5 == 5;
    v6 = (const __m128i *)&unk_1419DCFF1;
    if ( *a5 == 5 )
      v6 = (const __m128i *)&unk_1419DCFEB;
    v66 = v6;
    v65 = v5 ^ 7;
  }
  else
  {
    v66 = (const __m128i *)aMissing;
    v65 = 7;
  }
  v60 = 0;
  v61 = 0;
  v59[0] = 5;
  v69.m256i_i64[1] = 5;
  v69.m256i_i64[2] = (__int64)aInputTokens;
  v69.m256i_i64[3] = 12;
  v70 = aOutputTokens;
  v71 = 13;
  v72 = aCacheReadInput;
  v73 = 23;
  v74 = aCacheCreationI;
  v75 = 27;
  v76 = aCachedInputTok;
  v77 = 19;
  v7 = 0;
  do
  {
    v8 = v7 + 1;
    v9 = 2 * v7;
    v69.m256i_i64[0] = v8;
    v10 = v69.m256i_i64[v9 + 2];
    v11 = v69.m256i_i64[v9 + 3];
    if ( a5 )
      v12 = sub_1416419F0(v69.m256i_i64[v9 + 2], v69.m256i_i64[v9 + 3], a5);
    else
      v12 = 0;
    sub_140227BD0(&v79, v12);
    v84 = 1;
    v83 = sub_141641AF0(v10, v11, v59);
    sub_14002F9D0(v83);
    v13 = *(_OWORD *)v79.m256i_i8;
    v14 = (_OWORD *)v83;
    *(_OWORD *)(v83 + 16) = *(_OWORD *)&v79.m256i_u64[2];
    *v14 = v13;
    v7 = v8;
  }
  while ( v8 != 5 );
  v69.m256i_i64[0] = 0;
  v69.m256i_i64[1] = 2;
  v69.m256i_i64[2] = (__int64)aResponsesCache;
  v69.m256i_i64[3] = 23;
  v70 = aInputTokensDet;
  v71 = 20;
  v72 = aChatCachedToke;
  v73 = 18;
  v74 = aPromptTokensDe;
  v75 = 21;
  v15 = 0;
  do
  {
    v16 = v69.m256i_i64[4 * v15 + 2];
    if ( !v16 )
      break;
    v17 = v69.m256i_i64[4 * v15 + 3];
    if ( a5 && (v18 = (_BYTE *)sub_1416419F0(*((_QWORD *)&v69 + 4 * v15 + 4), *(&v71 + 4 * v15), a5)) != nullptr )
    {
      if ( *v18 != 5 )
      {
        nullsub_1(v19);
        v23 = (_DWORD *)sub_140001650(7, 1);
        if ( !v23 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v23 + 3) = 1684630625;
        *v23 = 1635151465;
        v79.m256i_i8[0] = 3;
        v79.m256i_i64[1] = 7;
        v79.m256i_i64[2] = (__int64)v23;
        v79.m256i_i64[3] = 7;
        goto LABEL_20;
      }
      v20 = sub_1416419F0(aCachedTokens, 13, v18);
    }
    else
    {
      v20 = 0;
    }
    sub_140227BD0(&v79, v20);
LABEL_20:
    v85 = 1;
    v83 = sub_141641AF0(v16, v17, v59);
    sub_14002F9D0(v83);
    ++v15;
    v21 = *(_OWORD *)v79.m256i_i8;
    v22 = (_OWORD *)v83;
    *(_OWORD *)(v83 + 16) = *(_OWORD *)&v79.m256i_u64[2];
    *v22 = v21;
  }
  while ( v15 != 2 );
  v24 = v78;
  v25 = *(_QWORD *)(v78 + 136);
  v26 = -1;
  if ( *(_QWORD *)(v78 + 272) != -1 )
    v26 = *(_QWORD *)(v78 + 272) + 1LL;
  *(_QWORD *)(v78 + 272) = v26;
  if ( v25 == 8 )
  {
    v27 = v78;
    v28 = *(_QWORD *)(v78 + 128);
    v29 = 0;
    if ( (unsigned __int64)(v28 + 1) >= *(_QWORD *)(v78 + 112) )
      v29 = *(_QWORD *)(v78 + 112);
    v24 = *(_QWORD *)(v78 + 120);
    *(_QWORD *)(v78 + 128) = v28 - v29 + 1;
    *(_QWORD *)(v27 + 136) = 7;
    v30 = 32 * v28;
    v31 = *(_OWORD *)(v24 + v30 + 16);
    *(_OWORD *)v69.m256i_i8 = *(_OWORD *)(v24 + v30);
    *(_OWORD *)&v69.m256i_u64[2] = v31;
    if ( v69.m256i_i8[0] != -1 )
      sub_14002F9D0(&v69);
    v25 = 7;
  }
  *(_QWORD *)&v67 = 0;
  v68 = 0;
  nullsub_1(v24);
  v32 = sub_140001650(6, 1);
  if ( !v32 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v32 + 4) = 25964;
  *(_DWORD *)v32 = 1886216563;
  v80 = 6;
  v81 = (_DWORD *)v32;
  v82 = 6;
  v69.m256i_i8[0] = 2;
  v69.m256i_i64[1] = 0;
  v69.m256i_i64[2] = v26;
  sub_140E72AA0(&v79, &v67, &v80, &v69);
  if ( v79.m256i_i8[0] != -1 )
    sub_14002F9D0(&v79);
  nullsub_1(v33);
  v34 = (_DWORD *)sub_140001650(7, 1);
  if ( !v34 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v34 + 3) = 1953525093;
  *v34 = 1702130785;
  v80 = 7;
  v81 = v34;
  v82 = 7;
  v35 = *(unsigned int *)(v78 + 280);
  v69.m256i_i8[0] = 2;
  v69.m256i_i64[1] = 0;
  v69.m256i_i64[2] = v35;
  sub_140E72AA0(&v79, &v67, &v80, &v69);
  if ( v79.m256i_i8[0] != -1 )
    sub_14002F9D0(&v79);
  nullsub_1(v36);
  v37 = (void *)sub_140001650(11, 1);
  if ( !v37 )
    sub_141938D2B(1, 11);
  qmemcpy(v37, "observed_ms", 11);
  v80 = 11;
  v81 = v37;
  v82 = 11;
  v69.m256i_i8[0] = 2;
  v69.m256i_i64[1] = 0;
  v69.m256i_i64[2] = v62;
  sub_140E72AA0(&v79, &v67, &v80, &v69);
  if ( v79.m256i_i8[0] != -1 )
    sub_14002F9D0(&v79);
  nullsub_1(v38);
  v39 = (void *)sub_140001650(11, 1);
  if ( !v39 )
    sub_141938D2B(1, 11);
  qmemcpy(v39, "usage_stage", 11);
  v80 = 11;
  v81 = v39;
  v82 = 11;
  nullsub_1(v40);
  v41 = v63;
  v42 = (__m128i *)sub_140001650(v63, 1);
  v83 = (__int64)v42;
  if ( !v42 )
    sub_141938D2B(1, v41);
  v43 = (__int64)v42;
  sub_1418F44E0(v42, v64, v41);
  v69.m256i_i8[0] = 3;
  v69.m256i_i64[1] = v41;
  v69.m256i_i64[2] = v43;
  v69.m256i_i64[3] = v41;
  sub_140E72AA0(&v79, &v67, &v80, &v69);
  if ( v79.m256i_i8[0] != -1 )
    sub_14002F9D0(&v79);
  nullsub_1(v44);
  v45 = (void *)sub_140001650(11, 1);
  if ( !v45 )
    sub_141938D2B(1, 11);
  qmemcpy(v45, "usage_state", 11);
  v80 = 11;
  v81 = v45;
  v82 = 11;
  nullsub_1(v46);
  v47 = v65;
  v48 = (__m128i *)sub_140001650(v65, 1);
  v83 = (__int64)v48;
  if ( !v48 )
    sub_141938D2B(1, v47);
  v49 = (__int64)v48;
  sub_1418F44E0(v48, v66, v47);
  v69.m256i_i8[0] = 3;
  v69.m256i_i64[1] = v47;
  v69.m256i_i64[2] = v49;
  v69.m256i_i64[3] = v47;
  sub_140E72AA0(&v79, &v67, &v80, &v69);
  if ( v79.m256i_i8[0] != -1 )
    sub_14002F9D0(&v79);
  nullsub_1(v50);
  v51 = sub_140001650(5, 1);
  if ( !v51 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v51 + 4) = 101;
  *(_DWORD *)v51 = 1734439797;
  v80 = 5;
  v81 = (_DWORD *)v51;
  v82 = 5;
  v86 = 1;
  sub_140412420(&v69, v59);
  if ( v69.m256i_i8[0] == -1 )
  {
    v79.m256i_i64[0] = v69.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)&v79,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419DD050);
  }
  v79 = v69;
  v86 = 0;
  sub_140E72AA0(&v69, &v67, &v80, &v79);
  if ( v69.m256i_i8[0] != -1 )
    sub_14002F9D0(&v69);
  v52 = (_QWORD *)v78;
  *(_OWORD *)&v69.m256i_u64[1] = v67;
  v69.m256i_i64[3] = v68;
  v69.m256i_i8[0] = 5;
  v53 = *(_QWORD *)(v78 + 112);
  if ( v25 == v53 )
  {
    sub_14016DCC0();
    v52 = (_QWORD *)v78;
    v53 = *(_QWORD *)(v78 + 112);
    v25 = *(_QWORD *)(v78 + 136);
  }
  v52[17] = v25 + 1;
  v54 = v52[16] + v25;
  v55 = 0;
  if ( v54 >= v53 )
    v55 = v53;
  v56 = v52[15];
  v57 = 32 * (v54 - v55);
  v58 = *(_OWORD *)v69.m256i_i8;
  *(_OWORD *)(v56 + v57 + 16) = *(_OWORD *)&v69.m256i_u64[2];
  *(_OWORD *)(v56 + v57) = v58;
  sub_14002F9D0(v59);
}
