// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1403266d0 | name sub_1403266D0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
const char *__fastcall sub_1403266D0(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  const char *result; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rcx
  _DWORD *v25; // rax
  __m128i v26; // xmm0
  _DWORD *v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  const __m128i *v43; // r12
  unsigned __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rcx
  _DWORD *v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // rcx
  _DWORD *v52; // rax
  __m128i v53; // xmm0
  _BYTE v54[6]; // [rsp+F2h] [rbp+72h] BYREF
  __int128 v55; // [rsp+F9h] [rbp+79h]
  __int64 v56; // [rsp+109h] [rbp+89h]
  _BYTE v57[7]; // [rsp+111h] [rbp+91h] BYREF
  __int128 v58; // [rsp+118h] [rbp+98h]
  __int64 v59; // [rsp+128h] [rbp+A8h]
  _QWORD v60[3]; // [rsp+130h] [rbp+B0h] BYREF
  _BYTE v61[7]; // [rsp+149h] [rbp+C9h] BYREF
  __int128 v62; // [rsp+150h] [rbp+D0h]
  __int64 v63; // [rsp+160h] [rbp+E0h]
  __int64 v64; // [rsp+168h] [rbp+E8h]
  __m128i v65; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v66; // [rsp+180h] [rbp+100h]
  _DWORD *v67; // [rsp+190h] [rbp+110h]
  __int128 v68; // [rsp+198h] [rbp+118h] BYREF
  __int64 v69; // [rsp+1A8h] [rbp+128h]
  __m128i v70; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v71; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v72; // [rsp+1D0h] [rbp+150h] BYREF
  _DWORD *v73; // [rsp+1D8h] [rbp+158h]
  __int64 v74; // [rsp+1E0h] [rbp+160h]
  char v75; // [rsp+1EBh] [rbp+16Bh]
  char v76; // [rsp+1ECh] [rbp+16Ch]
  char v77; // [rsp+1EDh] [rbp+16Dh]
  char v78; // [rsp+1EEh] [rbp+16Eh]
  char v79; // [rsp+1EFh] [rbp+16Fh]
  __int64 v80; // [rsp+1F0h] [rbp+170h]

  v80 = -2;
  result = (const char *)*a2;
  if ( (_DWORD)result != 5 )
  {
    if ( (_DWORD)result != 3 )
    {
      if ( !*a2 )
      {
        *(_BYTE *)a1 = -1;
        return result;
      }
      goto LABEL_61;
    }
    v6 = *((_DWORD **)a2 + 2);
    v7 = *((_QWORD *)a2 + 3);
    if ( v7 == 4 )
    {
      if ( *v6 == 1869903201 )
      {
        *(_QWORD *)&v68 = 0;
        v69 = 0;
        nullsub_1(4);
        v17 = (_DWORD *)sub_140001650(4, 1);
        if ( !v17 )
          sub_141938D2B(1, 4);
        *v17 = 1701869940;
        v72 = 4;
        v73 = v17;
        v74 = 4;
        nullsub_1(v18);
        v19 = (_DWORD *)sub_140001650(4, 1);
        v67 = v19;
        if ( !v19 )
          sub_141938D2B(1, 4);
        *v19 = 1869903201;
        v70.m128i_i8[0] = 3;
        v70.m128i_i64[1] = 4;
        v71.m128i_i64[0] = (__int64)v19;
        v71.m128i_i64[1] = 4;
        sub_140E72AA0(&v65, &v68, &v72, &v70);
        if ( v65.m128i_i8[0] == -1 )
          goto LABEL_28;
LABEL_27:
        sub_14002F9D0(&v65);
LABEL_28:
        v62 = v68;
        v63 = v69;
LABEL_29:
        *(_BYTE *)a1 = 5;
        v20 = _mm_loadu_si128((const __m128i *)v61);
        result = *((const char **)&v62 + 1);
        v21 = v63;
LABEL_57:
        *(__m128i *)(a1 + 1) = v20;
        *(_QWORD *)(a1 + 16) = result;
        *(_QWORD *)(a1 + 24) = v21;
        return result;
      }
      if ( *v6 == 1701736302 )
      {
        *(_QWORD *)&v68 = 0;
        v69 = 0;
        nullsub_1(4);
        v16 = (_DWORD *)sub_140001650(4, 1);
        if ( !v16 )
          sub_141938D2B(1, 4);
        *v16 = 1701869940;
        v72 = 4;
        v73 = v16;
        v74 = 4;
        v79 = 1;
        sub_14040FB10(&v70, &off_1419E4B60);
        if ( v70.m128i_i8[0] == -1 )
        {
          v65.m128i_i64[0] = v70.m128i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v65,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E9120);
        }
        v66 = _mm_loadu_si128(&v71);
        v65 = v70;
        v79 = 0;
        sub_140E72AA0(&v70, &v68, &v72, &v65);
        if ( v70.m128i_i8[0] != -1 )
          sub_14002F9D0(&v70);
        goto LABEL_28;
      }
    }
    else if ( v7 == 8 && *(_QWORD *)v6 == 0x6465726975716572LL )
    {
      *(_QWORD *)&v68 = 0;
      v69 = 0;
      nullsub_1(0x6465726975716572LL);
      v8 = (_DWORD *)sub_140001650(4, 1);
      if ( !v8 )
        sub_141938D2B(1, 4);
      *v8 = 1701869940;
      v72 = 4;
      v73 = v8;
      v74 = 4;
      nullsub_1(v9);
      v10 = sub_140001650(3, 1);
      v67 = (_DWORD *)v10;
      if ( !v10 )
        sub_141938D2B(1, 3);
      *(_BYTE *)(v10 + 2) = 121;
      *(_WORD *)v10 = 28257;
      v70.m128i_i8[0] = 3;
      v70.m128i_i64[1] = 3;
      v71.m128i_i64[0] = v10;
      v71.m128i_i64[1] = 3;
      sub_140E72AA0(&v65, &v68, &v72, &v70);
      if ( v65.m128i_i8[0] == -1 )
        goto LABEL_28;
      goto LABEL_27;
    }
    goto LABEL_61;
  }
  v12 = sub_1416419F0(aType_4, 4, a2);
  if ( !v12 || *(_BYTE *)v12 != 3 )
    goto LABEL_61;
  v14 = *(_QWORD *)(v12 + 16);
  v15 = *(_QWORD *)(v12 + 24);
  if ( v15 == 18 )
  {
    if ( _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v14 + 16)), (__m128i)xmmword_1419E4690),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v14), (__m128i)xmmword_1419E4680))) != 0xFFFF )
    {
      v13 = *(_QWORD *)v14 ^ 0x726165735F626577LL | *(_QWORD *)(v14 + 3) ^ 0x5F6863726165735FLL;
      if ( v13 )
        goto LABEL_61;
    }
    goto LABEL_48;
  }
  if ( v15 == 10 )
  {
    v13 = *(_QWORD *)v14 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v14 + 8) ^ 0x6863LL;
    if ( v13 )
      goto LABEL_61;
LABEL_48:
    *(_QWORD *)&v68 = 0;
    v69 = 0;
    nullsub_1(v13);
    v27 = (_DWORD *)sub_140001650(4, 1);
    if ( !v27 )
      sub_141938D2B(1, 4);
    *v27 = 1701869940;
    v72 = 4;
    v73 = v27;
    v74 = 4;
    nullsub_1(v28);
    v29 = (_DWORD *)sub_140001650(4, 1);
    v67 = v29;
    if ( !v29 )
      sub_141938D2B(1, 4);
    *v29 = 1819242356;
    v70.m128i_i8[0] = 3;
    v70.m128i_i64[1] = 4;
    v71.m128i_i64[0] = (__int64)v29;
    v71.m128i_i64[1] = 4;
    sub_140E72AA0(&v65, &v68, &v72, &v70);
    if ( v65.m128i_i8[0] != -1 )
      sub_14002F9D0(&v65);
    nullsub_1(v30);
    v31 = (_DWORD *)sub_140001650(4, 1);
    if ( !v31 )
      sub_141938D2B(1, 4);
    *v31 = 1701667182;
    v72 = 4;
    v73 = v31;
    v74 = 4;
    nullsub_1(v32);
    v33 = (_DWORD *)sub_140001650(10, 1);
    v67 = v33;
    if ( !v33 )
      sub_141938D2B(1, 10);
    qmemcpy(v33, "web_search", 10);
    v70.m128i_i8[0] = 3;
    v70.m128i_i64[1] = 10;
    v71.m128i_i64[0] = (__int64)v33;
    v71.m128i_i64[1] = 10;
    sub_140E72AA0(&v65, &v68, &v72, &v70);
    if ( v65.m128i_i8[0] != -1 )
      sub_14002F9D0(&v65);
    v58 = v68;
    v59 = v69;
    *(_BYTE *)a1 = 5;
    v20 = _mm_loadu_si128((const __m128i *)v57);
    result = *((const char **)&v58 + 1);
    v21 = v59;
    goto LABEL_57;
  }
  if ( v15 > 0xA )
  {
    v13 = *(_QWORD *)v14 ^ 0x726165735F626577LL | *(_QWORD *)(v14 + 3) ^ 0x5F6863726165735FLL;
    if ( !v13 )
      goto LABEL_48;
  }
  if ( v15 == 6 )
  {
    if ( *(_DWORD *)v14 ^ 0x74737563 | *(unsigned __int16 *)(v14 + 4) ^ 0x6D6F )
      goto LABEL_61;
  }
  else
  {
    if ( v15 != 8 )
    {
      if ( v15 == 11 && !(*(_QWORD *)v14 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)(v14 + 3) ^ 0x6863726165735F6CLL) )
      {
        *(_QWORD *)&v68 = 0;
        v69 = 0;
        nullsub_1(0);
        v22 = (_DWORD *)sub_140001650(4, 1);
        if ( !v22 )
          sub_141938D2B(1, 4);
        *v22 = 1701869940;
        v72 = 4;
        v73 = v22;
        v74 = 4;
        v76 = 1;
        sub_14040FB10(&v70, &off_1419E8528);
        if ( v70.m128i_i8[0] == -1 )
        {
          v65.m128i_i64[0] = v70.m128i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v65,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E91F8);
        }
        v23 = _mm_loadu_si128(&v70);
        v66 = _mm_loadu_si128(&v71);
        v65 = v23;
        v76 = 0;
        sub_140E72AA0(&v70, &v68, &v72, &v65);
        if ( v70.m128i_i8[0] != -1 )
          sub_14002F9D0(&v70);
        nullsub_1(v24);
        v25 = (_DWORD *)sub_140001650(4, 1);
        if ( !v25 )
          sub_141938D2B(1, 4);
        *v25 = 1701667182;
        v72 = 4;
        v73 = v25;
        v74 = 4;
        v75 = 1;
        sub_14040FB10(&v70, &off_1419E5508);
        if ( v70.m128i_i8[0] == -1 )
        {
          v65.m128i_i64[0] = v70.m128i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v65,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E91F8);
        }
        v26 = _mm_loadu_si128(&v70);
        v66 = _mm_loadu_si128(&v71);
        v65 = v26;
        v75 = 0;
        sub_140E72AA0(&v70, &v68, &v72, &v65);
        if ( v70.m128i_i8[0] != -1 )
          sub_14002F9D0(&v70);
        v55 = v68;
        v56 = v69;
        *(_BYTE *)a1 = 5;
        v20 = _mm_loadu_si128((const __m128i *)v54);
        result = *((const char **)&v55 + 1);
        v21 = v56;
        goto LABEL_57;
      }
      goto LABEL_61;
    }
    if ( *(_QWORD *)v14 != 0x6E6F6974636E7566LL )
      goto LABEL_61;
  }
  v34 = sub_1416419F0(aFunction_0, 8, a2);
  if ( !v34 || (v35 = sub_1416419F0(aName_2, 4, v34)) == 0 || *(_BYTE *)v35 != 3 )
  {
    v35 = sub_1416419F0(aName_2, 4, a2);
    if ( !v35 || *(_BYTE *)v35 != 3 )
    {
      result = aSelectedToolHa;
      *(_QWORD *)(a1 + 8) = aSelectedToolHa;
      *(_QWORD *)(a1 + 16) = 25;
      goto LABEL_62;
    }
  }
  v36 = *(_QWORD *)(v35 + 16);
  v37 = *(_QWORD *)(v35 + 24);
  v38 = sub_1416419F0(aNamespace, 9, a2);
  if ( v38 && *(_BYTE *)v38 == 3 || (v38 = sub_141642800(a2, aFunctionNamesp, 19)) != 0 && *(_BYTE *)v38 == 3 )
  {
    v40 = *(_QWORD *)(v38 + 16);
    v39 = *(_QWORD *)(v38 + 24);
  }
  else
  {
    LODWORD(v40) = 0;
  }
  v41 = sub_1402B7710(a3, v40, v39, v36, v37);
  if ( !v41
    || (v43 = (const __m128i *)v41, v44 = v42, (v45 = sub_140DEDB20(a3 + 32, v41, v42)) == 0)
    || *(_QWORD *)(v45 + 40) != v15
    || (unsigned int)sub_1418F4B70(*(_QWORD *)(v45 + 32), v14) )
  {
    result = aSelectedAnthro;
    *(_QWORD *)(a1 + 8) = aSelectedAnthro;
    *(_QWORD *)(a1 + 16) = 72;
    goto LABEL_62;
  }
  sub_14072C410((unsigned int)&v70, v44, 0, 1, 1);
  v46 = v70.m128i_i64[1];
  if ( v70.m128i_i8[0] )
    sub_141938D2B(v70.m128i_i64[1], v71.m128i_i64[0]);
  v47 = v71.m128i_i64[0];
  if ( v44 )
  {
    sub_1418F44E0((__m128i *)v71.m128i_i64[0], v43, v44);
    v67 = (_DWORD *)v46;
    v60[0] = v46;
    v64 = v47;
    v60[1] = v47;
    v60[2] = v44;
    *(_QWORD *)&v68 = 0;
    v69 = 0;
    nullsub_1(v48);
    v49 = (_DWORD *)sub_140001650(4, 1);
    if ( !v49 )
      sub_141938D2B(1, 4);
    *v49 = 1701869940;
    v72 = 4;
    v73 = v49;
    v74 = 4;
    v78 = 1;
    sub_14040FB10(&v70, &off_1419E8528);
    if ( v70.m128i_i8[0] == -1 )
    {
      v65.m128i_i64[0] = v70.m128i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)&v65,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E91E0);
    }
    v50 = _mm_loadu_si128(&v70);
    v66 = _mm_loadu_si128(&v71);
    v65 = v50;
    v78 = 0;
    sub_140E72AA0(&v70, &v68, &v72, &v65);
    if ( v70.m128i_i8[0] != -1 )
      sub_14002F9D0(&v70);
    nullsub_1(v51);
    v52 = (_DWORD *)sub_140001650(4, 1);
    if ( !v52 )
      sub_141938D2B(1, 4);
    *v52 = 1701667182;
    v72 = 4;
    v73 = v52;
    v74 = 4;
    v77 = 1;
    sub_14040F9F0(&v70, v60);
    if ( v70.m128i_i8[0] == -1 )
    {
      v65.m128i_i64[0] = v70.m128i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)&v65,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E91E0);
    }
    v53 = _mm_loadu_si128(&v70);
    v66 = _mm_loadu_si128(&v71);
    v65 = v53;
    v77 = 0;
    sub_140E72AA0(&v70, &v68, &v72, &v65);
    if ( v70.m128i_i8[0] != -1 )
      sub_14002F9D0(&v70);
    v62 = v68;
    v63 = v69;
    sub_140001660(v64, v67, 1);
    goto LABEL_29;
  }
  if ( v70.m128i_i64[1] )
    sub_140001660(v71.m128i_i64[0], v70.m128i_i64[1], 1);
LABEL_61:
  result = aUnsupportedAnt;
  *(_QWORD *)(a1 + 8) = aUnsupportedAnt;
  *(_QWORD *)(a1 + 16) = 66;
LABEL_62:
  *(_BYTE *)a1 = -2;
  return result;
}
