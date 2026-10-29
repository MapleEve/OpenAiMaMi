// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x1401f6f80 | name sub_1401F6F80
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_1401F6F80(
        int a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v14; // r15
  __int64 v15; // rax
  int v16; // edx
  __m128i *v17; // rax
  __m128i *v18; // r15
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rcx
  const __m128i *v22; // r12
  unsigned __int64 v23; // rbx
  __int64 v24; // r15
  __m128i *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r14
  const __m128i *v31; // rsi
  __m128i *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rcx
  _OWORD *v35; // rax
  __int64 v36; // rdi
  char v37; // r15
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rdi
  char v41; // r12
  __m128i *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rsi
  __int64 v49; // r14
  const __m128i *v50; // rbx
  __m128i *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rcx
  void *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v58; // [rsp+28h] [rbp-58h] BYREF
  __int128 v59; // [rsp+30h] [rbp-50h]
  unsigned __int64 v60; // [rsp+40h] [rbp-40h]
  __int64 v61; // [rsp+48h] [rbp-38h]
  __int64 v62; // [rsp+50h] [rbp-30h]
  int v63; // [rsp+58h] [rbp-28h]
  char v64; // [rsp+60h] [rbp-20h]
  char v65; // [rsp+61h] [rbp-1Fh]
  __int64 v66; // [rsp+68h] [rbp-18h]
  __int64 v67; // [rsp+78h] [rbp-8h]
  __int64 v68; // [rsp+88h] [rbp+8h]
  __int64 v69; // [rsp+A0h] [rbp+20h]
  __int64 v70; // [rsp+B8h] [rbp+38h]
  __int64 v71; // [rsp+C0h] [rbp+40h]
  __int128 v72; // [rsp+C8h] [rbp+48h]
  __int64 v73; // [rsp+D8h] [rbp+58h]
  __int64 v74; // [rsp+E0h] [rbp+60h]
  __int128 v75; // [rsp+E8h] [rbp+68h]
  const char *v76; // [rsp+F8h] [rbp+78h]
  __int64 v77; // [rsp+100h] [rbp+80h]
  const char *v78; // [rsp+108h] [rbp+88h]
  __int64 v79; // [rsp+110h] [rbp+90h]
  __int128 v80; // [rsp+118h] [rbp+98h]
  __int128 v81; // [rsp+128h] [rbp+A8h]
  __int128 v82; // [rsp+138h] [rbp+B8h]
  __int128 v83; // [rsp+148h] [rbp+C8h]
  __int128 v84; // [rsp+158h] [rbp+D8h]
  _BYTE v85[30]; // [rsp+168h] [rbp+E8h] BYREF
  __m128i *v86; // [rsp+188h] [rbp+108h]
  const __m128i *v87; // [rsp+190h] [rbp+110h]
  __int64 v88; // [rsp+198h] [rbp+118h]
  __int128 v89; // [rsp+1A0h] [rbp+120h] BYREF
  unsigned __int64 v90; // [rsp+1B0h] [rbp+130h]
  const __m128i *v91; // [rsp+1B8h] [rbp+138h]
  __int64 v92; // [rsp+1C0h] [rbp+140h]
  __int64 v93; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v94; // [rsp+1D0h] [rbp+150h]
  __int64 v95; // [rsp+1D8h] [rbp+158h]
  char v96; // [rsp+1E7h] [rbp+167h] BYREF
  __int128 v97; // [rsp+1E8h] [rbp+168h] BYREF
  __int128 v98; // [rsp+1F8h] [rbp+178h]
  __m128i *v99; // [rsp+208h] [rbp+188h]
  __int128 v100; // [rsp+210h] [rbp+190h] BYREF
  __int128 v101; // [rsp+220h] [rbp+1A0h]
  _OWORD *v102; // [rsp+230h] [rbp+1B0h]
  char v103; // [rsp+239h] [rbp+1B9h]
  char v104; // [rsp+23Ah] [rbp+1BAh]
  char v105; // [rsp+23Bh] [rbp+1BBh]
  char v106; // [rsp+23Ch] [rbp+1BCh]
  char v107; // [rsp+23Dh] [rbp+1BDh]
  char v108; // [rsp+23Eh] [rbp+1BEh]
  char v109; // [rsp+23Fh] [rbp+1BFh]
  __int64 v110; // [rsp+240h] [rbp+1C0h]

  v110 = -2;
  sub_141568C20(&v100);
  *(_QWORD *)&v97 = 0;
  *((_QWORD *)&v97 + 1) = 1;
  *(_QWORD *)&v98 = 0;
  *((_QWORD *)&v59 + 1) = 1610612768;
  v58 = (__int64)&v97;
  *(_QWORD *)&v59 = &off_1419E0B60;
  if ( (unsigned __int8)sub_141569DC0(&v100, &v58) )
    sub_141939040(
      (unsigned int)aADisplayImplem_53,
      55,
      (unsigned int)&v96,
      (unsigned int)&unk_1419D7FE8,
      (__int64)&off_1419E29A8);
  v102 = *((_OWORD **)&v97 + 1);
  v99 = (__m128i *)v97;
  v14 = v98;
  v15 = sub_14167FC00();
  v83 = 0;
  v82 = 0;
  v81 = 0;
  *((_QWORD *)&v59 + 1) = v99;
  v60 = (unsigned __int64)v102;
  v61 = v14;
  v58 = 1;
  *(_QWORD *)&v59 = 1;
  v62 = v15;
  v63 = v16;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 8;
  v72 = 0;
  v73 = 0;
  v74 = 8;
  v75 = 0;
  v76 = aMissing;
  v77 = 7;
  v78 = aNone;
  v79 = 4;
  v80 = 0;
  v84 = 0;
  memset(v85, 0, sizeof(v85));
  nullsub_1(v102);
  v17 = (__m128i *)sub_140001650(352, 8);
  if ( !v17 )
    sub_141938D11(8, 352);
  v18 = v17;
  sub_1418F44E0(v17, (const __m128i *)&v58, 0x160u);
  v99 = v18;
  v86 = v18;
  *(_QWORD *)&v89 = 0;
  v90 = 0;
  nullsub_1(v19);
  v20 = (void *)sub_140001650(12, 1);
  if ( !v20 )
    sub_141938D2B(1, 12);
  qmemcpy(v20, "provider_tag", 12);
  v93 = 12;
  v102 = v20;
  v94 = (__int64)v20;
  v95 = 12;
  sub_1402244C0((unsigned int)&v100, (unsigned int)aProvider, 8, a1, a2);
  v22 = *((const __m128i **)&v100 + 1);
  v23 = v101;
  v102 = *((_OWORD **)&v100 + 1);
  if ( (__int64)v101 < 0 )
  {
    v24 = 0;
    goto LABEL_6;
  }
  if ( (_QWORD)v101 )
  {
    nullsub_1(v21);
    v24 = 1;
    v25 = (__m128i *)sub_140001650(v23, 1);
    if ( !v25 )
    {
LABEL_6:
      v107 = 1;
      sub_141938D2B(v24, v23);
    }
    v26 = (__int64)v25;
    sub_1418F44E0(v25, v22, v23);
  }
  else
  {
    v26 = 1;
  }
  LOBYTE(v58) = 3;
  *(_QWORD *)&v59 = v23;
  *((_QWORD *)&v59 + 1) = v26;
  v60 = v23;
  v107 = 0;
  sub_140E72AA0(&v97, &v89, &v93, &v58);
  if ( (_BYTE)v97 != 0xFF )
    sub_14002F9D0(&v97);
  if ( (_QWORD)v100 )
    sub_140001660(v102, v100, 1);
  nullsub_1(v27);
  v28 = sub_140001650(9, 1);
  if ( !v28 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v28 = 0x61745F6C65646F6DLL;
  *(_BYTE *)(v28 + 8) = 103;
  v93 = 9;
  v102 = (_OWORD *)v28;
  v94 = v28;
  v95 = 9;
  sub_1402244C0((unsigned int)&v100, (unsigned int)aModel_0, 5, a3, a4);
  v30 = *((_QWORD *)&v100 + 1);
  v31 = (const __m128i *)v101;
  v102 = *((_OWORD **)&v100 + 1);
  if ( (__int64)v101 < 0 )
  {
    v23 = 0;
    goto LABEL_18;
  }
  if ( (_QWORD)v101 )
  {
    nullsub_1(v29);
    v23 = 1;
    v32 = (__m128i *)sub_140001650(v31, 1);
    if ( !v32 )
    {
LABEL_18:
      v106 = 1;
      sub_141938D2B(v23, v31);
    }
    v33 = (__int64)v32;
    sub_1418F44E0(v32, (const __m128i *)v30, (unsigned __int64)v31);
  }
  else
  {
    v33 = 1;
  }
  LOBYTE(v58) = 3;
  *(_QWORD *)&v59 = v31;
  *((_QWORD *)&v59 + 1) = v33;
  v60 = (unsigned __int64)v31;
  v106 = 0;
  sub_140E72AA0(&v97, &v89, &v93, &v58);
  if ( (_BYTE)v97 != 0xFF )
    sub_14002F9D0(&v97);
  if ( (_QWORD)v100 )
    sub_140001660(v102, v100, 1);
  nullsub_1(v34);
  v35 = (_OWORD *)sub_140001650(16, 1);
  if ( !v35 )
    sub_141938D2B(1, 16);
  *v35 = xmmword_1419DB390;
  *(_QWORD *)&v100 = 16;
  *((_QWORD *)&v100 + 1) = v35;
  *(_QWORD *)&v101 = 16;
  v36 = -1;
  v37 = 1;
  if ( a5 )
  {
    v102 = v35;
    sub_1402244C0((unsigned int)&v58, (unsigned int)aConversation_0, 12, a5, a6);
    v39 = v58;
    v31 = (const __m128i *)v59;
    if ( v58 == -1 )
    {
      v41 = 0;
    }
    else
    {
      v23 = *((_QWORD *)&v59 + 1);
      if ( v59 < 0 )
      {
        v40 = 0;
        goto LABEL_32;
      }
      v41 = 3;
      if ( *((_QWORD *)&v59 + 1) )
      {
        nullsub_1(v38);
        v40 = 1;
        v42 = (__m128i *)sub_140001650(v23, 1);
        if ( !v42 )
        {
LABEL_32:
          v105 = 0;
          v88 = v39;
          v87 = v31;
          v104 = 1;
          sub_141938D2B(v40, v23);
        }
        v30 = (__int64)v42;
        sub_1418F44E0(v42, v31, v23);
        v37 = 0;
        v36 = v39;
      }
      else
      {
        v30 = 1;
        v37 = 0;
        v36 = v58;
        v23 = 0;
      }
    }
  }
  else
  {
    v41 = 0;
  }
  LOBYTE(v58) = v41;
  *(_QWORD *)&v59 = v23;
  *((_QWORD *)&v59 + 1) = v30;
  v60 = v23;
  v105 = v37;
  v88 = v36;
  v87 = v31;
  v104 = 0;
  sub_140E72AA0(&v97, &v89, &v100, &v58);
  if ( (_BYTE)v97 != 0xFF )
  {
    v108 = v37;
    v92 = v36;
    v91 = v31;
    sub_14002F9D0(&v97);
  }
  if ( !((v36 == 0) | (unsigned __int8)v37) )
    sub_140001660(v31, v36, 1);
  nullsub_1(v43);
  v44 = sub_140001650(6, 1);
  if ( !v44 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v44 + 4) = 29810;
  *(_DWORD *)v44 = 1868981861;
  *(_QWORD *)&v100 = 6;
  *((_QWORD *)&v100 + 1) = v44;
  *(_QWORD *)&v101 = 6;
  v45 = sub_140223DC0(a8, a9);
  v48 = v46;
  if ( v46 < 0 )
  {
    v49 = 0;
    goto LABEL_46;
  }
  if ( v46 )
  {
    v50 = (const __m128i *)v45;
    nullsub_1(v47);
    v49 = 1;
    v51 = (__m128i *)sub_140001650(v48, 1);
    if ( !v51 )
    {
LABEL_46:
      v103 = 1;
      sub_141938D2B(v49, v48);
    }
    v52 = (__int64)v51;
    sub_1418F44E0(v51, v50, v48);
  }
  else
  {
    v52 = 1;
  }
  LOBYTE(v58) = 3;
  *(_QWORD *)&v59 = v48;
  *((_QWORD *)&v59 + 1) = v52;
  v60 = v48;
  v103 = 0;
  sub_140E72AA0(&v97, &v89, &v100, &v58);
  if ( (_BYTE)v97 != 0xFF )
    sub_14002F9D0(&v97);
  nullsub_1(v53);
  v54 = (void *)sub_140001650(15, 1);
  if ( !v54 )
    sub_141938D2B(1, 15);
  qmemcpy(v54, "search_disabled", 15);
  *(_QWORD *)&v100 = 15;
  *((_QWORD *)&v100 + 1) = v54;
  *(_QWORD *)&v101 = 15;
  LOBYTE(v58) = 1;
  BYTE1(v58) = a10;
  sub_140E72AA0(&v97, &v89, &v100, &v58);
  if ( (_BYTE)v97 != 0xFF )
    sub_14002F9D0(&v97);
  nullsub_1(v55);
  v56 = sub_140001650(5, 1);
  if ( !v56 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v56 + 4) = 101;
  *(_DWORD *)v56 = 1885431923;
  v93 = 5;
  v102 = (_OWORD *)v56;
  v94 = v56;
  v95 = 5;
  sub_1402256C0(&v58, a7, 0);
  v109 = 1;
  sub_140412420(&v97, &v58);
  if ( (_BYTE)v97 == 0xFF )
  {
    *(_QWORD *)&v100 = *((_QWORD *)&v97 + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)&v100,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419DB378);
  }
  v101 = v98;
  v100 = v97;
  v109 = 0;
  sub_140E72AA0(&v97, &v89, &v93, &v100);
  if ( (_BYTE)v97 != 0xFF )
    sub_14002F9D0(&v97);
  sub_14002F9D0(&v58);
  v59 = v89;
  v60 = v90;
  LOBYTE(v58) = 5;
  sub_1401C5C50((__int64)v99[1].m128i_i64, (int)aBegin_0, 5, (__int64)&v58);
  return v99;
}
