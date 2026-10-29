// win 1.2.7 | module src/core/relay/translator/chat_content.rs | ea 0x141041550 | name sub_141041550
// win 1.2.7 | module src/core/relay/translator/chat_content.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_141041550(__int64 a1, unsigned __int8 *a2, _DWORD *a3, __int64 a4)
{
  __m128i *v4; // rbx
  __int64 v5; // rsi
  int v6; // eax
  unsigned __int64 v7; // rdi
  const __m128i *v8; // r14
  __m128i *v9; // rax
  char v10; // al
  __int64 v11; // r14
  __int64 v12; // rdi
  char *v13; // r15
  const char *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  bool v19; // cl
  __int64 v20; // rax
  signed __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __m128i *v25; // rax
  __int64 v26; // rcx
  const __m128i *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  signed __int64 v31; // r12
  const __m128i *v32; // r14
  _DWORD *v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  const char *v40; // rdi
  char *v41; // rbx
  __int64 v42; // r15
  __m128i *v43; // rax
  __int64 v44; // r13
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  __int128 v48; // xmm0
  _BYTE *v49; // rax
  __int64 v50; // rcx
  __int128 v51; // xmm0
  _OWORD *v52; // rax
  _DWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // rcx
  __int128 v61; // xmm0
  __int64 v62; // rax
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int128 v68; // xmm0
  __int128 v71; // [rsp+40h] [rbp-40h] BYREF
  __int64 v72; // [rsp+50h] [rbp-30h]
  __int64 v73; // [rsp+58h] [rbp-28h]
  __int64 v74; // [rsp+60h] [rbp-20h] BYREF
  __int128 v75; // [rsp+68h] [rbp-18h]
  __int64 v76; // [rsp+78h] [rbp-8h]
  __int128 v77; // [rsp+80h] [rbp+0h] BYREF
  __int128 v78; // [rsp+90h] [rbp+10h]
  __m256i v79; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v80; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v81; // [rsp+D0h] [rbp+50h]
  __int128 v82; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v83; // [rsp+E8h] [rbp+68h]
  __m256i v84; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v85; // [rsp+118h] [rbp+98h]
  __int64 v86; // [rsp+120h] [rbp+A0h]
  char v87; // [rsp+12Ch] [rbp+ACh]
  char v88; // [rsp+12Dh] [rbp+ADh]
  char v89; // [rsp+12Eh] [rbp+AEh]
  char v90; // [rsp+12Fh] [rbp+AFh]
  __int64 v91; // [rsp+130h] [rbp+B0h]

  v91 = -2;
  v5 = a1;
  if ( !a2 )
    goto LABEL_5;
  v6 = *a2;
  if ( v6 != 4 )
  {
    if ( v6 == 3 )
    {
      v7 = *((_QWORD *)a2 + 3);
      if ( v7 )
      {
        v8 = *((const __m128i **)a2 + 2);
        nullsub_1(a1);
        v9 = (__m128i *)sub_140001650(v7, 1);
        if ( !v9 )
          sub_141938D2B(1, v7);
        v4 = v9;
        sub_1418F44E0(v9, v8, v7);
        v10 = 3;
      }
      else
      {
        v10 = 0;
      }
      *(_BYTE *)v5 = v10;
      *(_QWORD *)(v5 + 8) = v7;
      *(_QWORD *)(v5 + 16) = v4;
      *(_QWORD *)(v5 + 24) = v7;
      return v5;
    }
    if ( *a2 )
    {
      *(_QWORD *)(a1 + 8) = aUnsupportedCha;
      *(_QWORD *)(a1 + 16) = 38;
      *(_BYTE *)a1 = -1;
      return v5;
    }
LABEL_5:
    *(_BYTE *)a1 = 0;
    return v5;
  }
  *(_QWORD *)&v82 = 0;
  *((_QWORD *)&v82 + 1) = 8;
  v83 = 0;
  v11 = *((_QWORD *)a2 + 2);
  v12 = v11 + 32LL * *((_QWORD *)a2 + 3);
  v13 = (char *)&v77 + 8;
  v14 = aType_13;
  v73 = 0;
  while ( v11 != v12 )
  {
    v15 = sub_1416419F0(v14, 4, v11);
    if ( !v15 || *(_BYTE *)v15 != 3 )
    {
LABEL_69:
      *(_QWORD *)(v5 + 8) = aThisContentCan;
      *(_QWORD *)(v5 + 16) = 90;
      goto LABEL_71;
    }
    v85 = v11 + 32;
    v16 = *(_QWORD *)(v15 + 16);
    v17 = *(_QWORD *)(v15 + 24);
    if ( v17 == 4 )
    {
      if ( *(_DWORD *)v16 != 1954047348 )
        goto LABEL_69;
      goto LABEL_31;
    }
    if ( v17 == 11 )
    {
      if ( !(*(_QWORD *)v16 ^ 0x745F74757074756FLL | *(_QWORD *)(v16 + 3) ^ 0x747865745F747570LL) )
        goto LABEL_31;
      v18 = 0;
      v19 = (*(_QWORD *)v16 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v16 + 3) ^ 0x6567616D695F7475LL) != 0;
      if ( a4 != 4 )
        goto LABEL_69;
      LOBYTE(v18) = v19;
      if ( v18 || *a3 != 1919251317 )
        goto LABEL_69;
      v20 = sub_1416419F0(aImageUrl_1, 9, v11);
      if ( !v20 || *(_BYTE *)v20 != 3 )
      {
        *(_QWORD *)(v5 + 8) = aChatImagesRequ;
        *(_QWORD *)(v5 + 16) = 72;
        goto LABEL_71;
      }
      v21 = *(_QWORD *)(v20 + 24);
      v86 = *(_QWORD *)(v20 + 16);
      sub_140F8E2F0(&v84, v86, v21);
      if ( v84.m256i_i32[0] == 1 )
      {
        *(_OWORD *)(v5 + 8) = *(_OWORD *)&v84.m256i_u64[1];
LABEL_71:
        *(_BYTE *)v5 = -1;
LABEL_72:
        v64 = *((_QWORD *)&v82 + 1);
        v86 = v83;
        v85 = 0;
        v73 = *((_QWORD *)&v82 + 1);
        while ( v86 != v85 )
        {
          ++v85;
          v65 = v64 + 32;
          sub_1403880E0(v64);
          v64 = v65;
        }
        if ( (_QWORD)v82 )
          sub_140001660(*((_QWORD *)&v82 + 1), 32 * v82, 8);
        return v5;
      }
      *(_QWORD *)&v80 = 0;
      v81 = 0;
      nullsub_1(v22);
      v23 = sub_140001650(3, 1);
      if ( !v23 )
        sub_141938D2B(1, 3);
      *(_BYTE *)(v23 + 2) = 108;
      *(_WORD *)v23 = 29301;
      *(_QWORD *)&v77 = 3;
      *((_QWORD *)&v77 + 1) = v23;
      *(_QWORD *)&v78 = 3;
      if ( v21 < 0 )
      {
        v26 = 0;
LABEL_88:
        v89 = 1;
        sub_141938D2B(v26, v21);
      }
      if ( v21 )
      {
        nullsub_1(v24);
        v25 = (__m128i *)sub_140001650(v21, 1);
        v26 = 1;
        if ( !v25 )
          goto LABEL_88;
        v27 = (const __m128i *)v86;
        v86 = (__int64)v25;
        sub_1418F44E0(v25, v27, v21);
        v28 = v86;
      }
      else
      {
        v28 = 1;
      }
      v84.m256i_i8[0] = 3;
      v84.m256i_i64[1] = v21;
      v84.m256i_i64[2] = v28;
      v84.m256i_i64[3] = v21;
      v89 = 0;
      sub_140E72AA0(&v79, &v80, &v77, &v84);
      if ( v79.m256i_i8[0] != -1 )
        sub_14002F9D0(&v79);
      v76 = v81;
      v75 = v80;
      LOBYTE(v74) = 5;
      v49 = (_BYTE *)sub_1416419F0(aDetail_1, 6, v11);
      if ( v49 )
      {
        if ( *v49 != 3 )
        {
          *(_QWORD *)(v5 + 8) = aUnsupportedIma;
          *(_QWORD *)(v5 + 16) = 24;
          *(_BYTE *)v5 = -1;
          sub_14002F9D0(&v74);
          goto LABEL_72;
        }
        sub_1416AC440(&v84.m256i_u64[1], v49 + 8);
        v84.m256i_i8[0] = 3;
        v88 = 1;
        v86 = sub_141641AF0(aDetail_1, 6, &v74);
        sub_14002F9D0(v86);
        v51 = *(_OWORD *)v84.m256i_i8;
        v52 = (_OWORD *)v86;
        *(_OWORD *)(v86 + 16) = *(_OWORD *)&v84.m256i_u64[2];
        *v52 = v51;
      }
      *(_QWORD *)&v71 = 0;
      v72 = 0;
      nullsub_1(v50);
      v53 = (_DWORD *)sub_140001650(4, 1);
      if ( !v53 )
        sub_141938D2B(1, 4);
      *v53 = 1701869940;
      *(_QWORD *)&v80 = 4;
      *((_QWORD *)&v80 + 1) = v53;
      v81 = 4;
      nullsub_1(v54);
      v55 = sub_140001650(9, 1);
      v86 = v55;
      if ( !v55 )
        sub_141938D2B(1, 9);
      *(_QWORD *)v55 = 0x72755F6567616D69LL;
      *(_BYTE *)(v55 + 8) = 108;
      v84.m256i_i8[0] = 3;
      v84.m256i_i64[1] = 9;
      v84.m256i_i64[2] = v55;
      v84.m256i_i64[3] = 9;
      sub_140E72AA0(&v79, &v71, &v80, &v84);
      if ( v79.m256i_i8[0] != -1 )
        sub_14002F9D0(&v79);
      nullsub_1(v56);
      v57 = sub_140001650(9, 1);
      if ( !v57 )
        sub_141938D2B(1, 9);
      *(_QWORD *)v57 = 0x72755F6567616D69LL;
      *(_BYTE *)(v57 + 8) = 108;
      *(_QWORD *)&v80 = 9;
      *((_QWORD *)&v80 + 1) = v57;
      v81 = 9;
      v90 = 1;
      sub_140412420(&v84, &v74);
      if ( v84.m256i_i8[0] == -1 )
      {
        v79.m256i_i64[0] = v84.m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_19,
          43,
          (unsigned int)&v79,
          (unsigned int)&off_141A6D5F8,
          (__int64)&off_141A71BA8);
      }
      v79 = v84;
      v90 = 0;
      sub_140E72AA0(&v84, &v71, &v80, &v79);
      if ( v84.m256i_i8[0] != -1 )
        sub_14002F9D0(&v84);
      *((_QWORD *)v13 + 2) = v72;
      *(_OWORD *)v13 = v71;
      LOBYTE(v77) = 5;
      v58 = v83;
      if ( v83 == (_QWORD)v82 )
        sub_14190F570(&v82);
      v59 = *((_QWORD *)&v82 + 1);
      v60 = 32 * v58;
      v61 = v77;
      *(_OWORD *)(*((_QWORD *)&v82 + 1) + v60 + 16) = v78;
      *(_OWORD *)(v59 + v60) = v61;
      v83 = v58 + 1;
      v62 = sub_14002F9D0(&v74);
      LOBYTE(v62) = 1;
      v73 = v62;
      v11 = v85;
    }
    else
    {
      if ( v17 != 10 || *(_QWORD *)v16 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v16 + 8) ^ 0x7478LL )
        goto LABEL_69;
LABEL_31:
      v29 = sub_1416419F0(aTextupstreamRe, 4, v11);
      if ( !v29 || *(_BYTE *)v29 != 3 )
      {
        *(_QWORD *)(v5 + 8) = aChatMessageTex;
        *(_QWORD *)(v5 + 16) = 34;
        goto LABEL_71;
      }
      v31 = *(_QWORD *)(v29 + 24);
      v11 = v85;
      if ( v31 )
      {
        v32 = *(const __m128i **)(v29 + 16);
        *(_QWORD *)&v80 = 0;
        v81 = 0;
        nullsub_1(v30);
        v33 = (_DWORD *)sub_140001650(4, 1);
        if ( !v33 )
          sub_141938D2B(1, 4);
        *v33 = 1701869940;
        v74 = 4;
        *(_QWORD *)&v75 = v33;
        *((_QWORD *)&v75 + 1) = 4;
        nullsub_1(v34);
        v35 = (_DWORD *)sub_140001650(4, 1);
        v86 = (__int64)v35;
        if ( !v35 )
          sub_141938D2B(1, 4);
        *v35 = 1954047348;
        v84.m256i_i8[0] = 3;
        v84.m256i_i64[1] = 4;
        v84.m256i_i64[2] = (__int64)v35;
        v84.m256i_i64[3] = 4;
        sub_140E72AA0(&v79, &v80, &v74, &v84);
        if ( v79.m256i_i8[0] != -1 )
          sub_14002F9D0(&v79);
        nullsub_1(v36);
        v37 = (_DWORD *)sub_140001650(4, 1);
        if ( !v37 )
          sub_141938D2B(1, 4);
        *v37 = 1954047348;
        v74 = 4;
        *(_QWORD *)&v75 = v37;
        *((_QWORD *)&v75 + 1) = 4;
        if ( v31 < 0 )
        {
          v42 = 0;
LABEL_65:
          v87 = 1;
          sub_141938D2B(v42, v31);
        }
        v86 = v5;
        v39 = v12;
        v40 = v14;
        v41 = v13;
        nullsub_1(v38);
        v42 = 1;
        v43 = (__m128i *)sub_140001650(v31, 1);
        if ( !v43 )
          goto LABEL_65;
        v44 = (__int64)v43;
        sub_1418F44E0(v43, v32, v31);
        v84.m256i_i8[0] = 3;
        v84.m256i_i64[1] = v31;
        v84.m256i_i64[2] = v44;
        v84.m256i_i64[3] = v31;
        v87 = 0;
        sub_140E72AA0(&v79, &v80, &v74, &v84);
        v13 = v41;
        v14 = v40;
        v12 = v39;
        v5 = v86;
        if ( v79.m256i_i8[0] != -1 )
          sub_14002F9D0(&v79);
        *((_QWORD *)v13 + 2) = v81;
        *(_OWORD *)v13 = v80;
        LOBYTE(v77) = 5;
        v45 = v83;
        if ( v83 == (_QWORD)v82 )
          sub_14190F570(&v82);
        v46 = *((_QWORD *)&v82 + 1);
        v47 = 32 * v45;
        v48 = v77;
        *(_OWORD *)(*((_QWORD *)&v82 + 1) + v47 + 16) = v78;
        *(_OWORD *)(v46 + v47) = v48;
        v83 = v45 + 1;
        v11 = v85;
      }
    }
  }
  if ( (v73 & 1) != 0 )
  {
    *(__int64 *)((char *)&v84.m256i_i64[2] + 7) = v83;
    *(_OWORD *)((char *)&v84.m256i_u32[1] + 3) = v82;
    *(_BYTE *)v5 = 4;
    v66 = *(__int64 *)((char *)&v84.m256i_i64[1] + 7);
    v67 = *(__int64 *)((char *)&v84.m256i_i64[2] + 7);
    *(_OWORD *)(v5 + 1) = *(_OWORD *)v84.m256i_i8;
    *(_QWORD *)(v5 + 16) = v66;
    *(_QWORD *)(v5 + 24) = v67;
  }
  else
  {
    if ( v83 )
    {
      sub_1403E0290(&v79, *((_QWORD *)&v82 + 1), *((_QWORD *)&v82 + 1) + 32 * v83);
      v85 = v79.m256i_i64[1];
      sub_140D1F3D0((unsigned int)&v84, v79.m256i_i32[2], v79.m256i_i32[4], (unsigned int)&unk_141A6C878, 1);
      *(_QWORD *)&v78 = v84.m256i_i64[2];
      v77 = *(_OWORD *)v84.m256i_i8;
      sub_14040F9F0(&v84, &v77);
      if ( v84.m256i_i8[0] == -1 )
      {
        v74 = v84.m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_19,
          43,
          (unsigned int)&v74,
          (unsigned int)&off_141A6D5F8,
          (__int64)&off_141A71C88);
      }
      v68 = *(_OWORD *)v84.m256i_i8;
      *(_OWORD *)(v5 + 16) = *(_OWORD *)&v84.m256i_u64[2];
      *(_OWORD *)v5 = v68;
      if ( (_QWORD)v77 )
        sub_140001660(*((_QWORD *)&v77 + 1), v77, 1);
      if ( v79.m256i_i64[0] )
        sub_140001660(v85, 16 * v79.m256i_i64[0], 8);
    }
    else
    {
      *(_BYTE *)v5 = 0;
    }
    sub_1401901C0(&v82);
  }
  return v5;
}
