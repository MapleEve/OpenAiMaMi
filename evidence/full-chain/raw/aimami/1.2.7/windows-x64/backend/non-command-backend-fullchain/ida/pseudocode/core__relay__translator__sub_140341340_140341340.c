// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140341340 | name sub_140341340
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140341340(_QWORD *a1, __int64 a2, __int64 a3, char a4, char a5, char a6)
{
  __int64 v7; // r14
  __m128i si128; // xmm6
  __m128i v9; // xmm7
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // r14
  __m128i *v21; // rax
  __int64 v22; // r13
  __int128 v23; // xmm0
  _OWORD *v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __m128i v29; // xmm0
  _BYTE *v30; // rax
  __int128 v31; // xmm0
  _OWORD *v32; // rax
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 v37; // rax
  const __m128i *v38; // r14
  const __m128i *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r12
  __int64 v43; // rax
  const char *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int8 v48; // si
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  _OWORD *v51; // rax
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  _OWORD *v54; // rax
  __m128i v55; // xmm0
  _BYTE *v56; // rax
  _BYTE *v57; // rax
  __m128i v58; // xmm0
  __m128i *v59; // rax
  unsigned __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rcx
  __m128i v63; // xmm0
  void *v64; // rax
  _QWORD *v65; // rcx
  _QWORD *v66; // rax
  __m128i v67; // xmm0
  _QWORD *v68; // rcx
  __int64 result; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rsi
  _QWORD *v75; // rcx
  _QWORD *v76; // rcx
  _QWORD *v77; // rax
  __int128 v78; // [rsp+48h] [rbp-38h] BYREF
  __int64 v79; // [rsp+58h] [rbp-28h]
  __m128i v80; // [rsp+60h] [rbp-20h] BYREF
  __m128i v81; // [rsp+70h] [rbp-10h] BYREF
  _OWORD v82[2]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v83; // [rsp+A0h] [rbp+20h]
  __int128 v84; // [rsp+B0h] [rbp+30h]
  _BYTE v85[8]; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v86; // [rsp+C8h] [rbp+48h] BYREF
  const char *v87; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v88; // [rsp+E8h] [rbp+68h]
  __int64 v89; // [rsp+F0h] [rbp+70h]
  __int64 v90; // [rsp+F8h] [rbp+78h]
  __int64 v91; // [rsp+100h] [rbp+80h]
  _BYTE v92[7]; // [rsp+108h] [rbp+88h]
  _BYTE v93[7]; // [rsp+110h] [rbp+90h]
  __int64 v94; // [rsp+118h] [rbp+98h]
  __int64 v95; // [rsp+120h] [rbp+A0h]
  unsigned __int64 v96; // [rsp+128h] [rbp+A8h]
  _BYTE v97[40]; // [rsp+130h] [rbp+B0h] BYREF
  _BYTE v98[48]; // [rsp+158h] [rbp+D8h]
  _QWORD *v99; // [rsp+188h] [rbp+108h]
  __m128i v100; // [rsp+190h] [rbp+110h] BYREF
  unsigned __int64 v101; // [rsp+1A0h] [rbp+120h]
  __int64 v102; // [rsp+1A8h] [rbp+128h]
  __m128i v103; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v104; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v105; // [rsp+1D8h] [rbp+158h]
  __m128i *v106; // [rsp+1E0h] [rbp+160h]
  char v107; // [rsp+1EFh] [rbp+16Fh]
  char v108; // [rsp+1F0h] [rbp+170h]
  char v109; // [rsp+1F1h] [rbp+171h]
  char v110; // [rsp+1F2h] [rbp+172h]
  char v111; // [rsp+1F3h] [rbp+173h]
  char v112; // [rsp+1F4h] [rbp+174h]
  char v113; // [rsp+1F5h] [rbp+175h]
  char v114; // [rsp+1F6h] [rbp+176h]
  char v115; // [rsp+1F7h] [rbp+177h]
  __int64 v116; // [rsp+1F8h] [rbp+178h]

  v116 = -2;
  v7 = a2;
  v99 = a1;
  v100.m128i_i64[0] = 0;
  v100.m128i_i64[1] = 8;
  v101 = 0;
  *(_QWORD *)&v83 = 0;
  *(_QWORD *)&v84 = 0;
  BYTE8(v84) = 2;
  *(_QWORD *)&v82[0] = -1;
  BYTE10(v84) = a5;
  v94 = a2 + 32 * a3;
  v89 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419E4680);
  v9 = _mm_cvtsi32_si128(0x7765u);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_2:
        if ( v7 == v94 )
        {
          if ( a6 )
          {
            v115 = 1;
            v64 = sub_140362420((_BYTE *)v100.m128i_i64[1], v101);
            if ( v64 )
            {
              v65 = v99;
              v99[1] = v64;
              v65[2] = 72;
              *v65 = -1;
              goto LABEL_102;
            }
          }
          *(_QWORD *)&v97[16] = v101;
          *(__m128i *)v97 = _mm_loadu_si128(&v100);
          v115 = 0;
          sub_140301ED0(&v103, (__int64 *)v97);
          *(_OWORD *)&v98[32] = v84;
          *(_OWORD *)&v98[16] = v83;
          *(_OWORD *)v98 = v82[1];
          *(_OWORD *)&v97[24] = v82[0];
          *(_QWORD *)&v97[16] = v104.m128i_i64[0];
          v67 = _mm_loadu_si128(&v103);
          *(__m128i *)v97 = v67;
          v68 = v99;
          v99[10] = *((_QWORD *)&v84 + 1);
          *((_OWORD *)v68 + 4) = *(_OWORD *)&v98[24];
          *((_OWORD *)v68 + 3) = *(_OWORD *)&v98[8];
          *((__m128i *)v68 + 2) = _mm_load_si128((const __m128i *)&v97[32]);
          *((_OWORD *)v68 + 1) = *(_OWORD *)&v97[16];
          *(__m128i *)v68 = v67;
          result = v89;
          *((_BYTE *)v68 + 88) = v89;
          return result;
        }
        v10 = v7;
        v115 = 1;
        v11 = sub_1416419F0(aType_4, 4, v7);
        v12 = v7 + 32;
        v13 = 1;
        if ( !v11 || *(_BYTE *)v11 != 3 )
        {
          v14 = 0;
          goto LABEL_10;
        }
        v13 = *(_QWORD *)(v11 + 16);
        v14 = *(_QWORD *)(v11 + 24);
        if ( v14 != 18 )
          break;
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v13 + 16)), v9),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v13), si128))) != 0xFFFF )
        {
          v14 = 18;
          if ( *(_QWORD *)v13 ^ 0x726165735F626577LL | *(_QWORD *)(v13 + 3) ^ 0x5F6863726165735FLL )
            goto LABEL_10;
        }
LABEL_37:
        v115 = 1;
        sub_14027FCC0((__int64)v97, v7);
        if ( v97[0] == 0xFF )
        {
LABEL_99:
          v66 = v99;
          *(__m128i *)(v99 + 1) = _mm_loadu_si128((const __m128i *)&v97[8]);
          *v66 = -1;
          goto LABEL_102;
        }
        v80 = *(__m128i *)v97;
        v81 = *(__m128i *)&v97[16];
        v26 = v101;
        if ( v101 == v100.m128i_i64[0] )
          sub_14190F570(&v100);
        v27 = v100.m128i_i64[1];
        v28 = 32 * v26;
        v29 = _mm_loadu_si128(&v80);
        *(__m128i *)(v100.m128i_i64[1] + v28 + 16) = _mm_loadu_si128(&v81);
        *(__m128i *)(v27 + v28) = v29;
        v101 = v26 + 1;
        LOBYTE(v27) = 1;
        v89 = v27;
        v7 += 32;
      }
      if ( v14 == 10 )
      {
        v14 = 10;
        if ( !(*(_QWORD *)v13 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v13 + 8) ^ 0x6863LL) )
          goto LABEL_37;
        goto LABEL_10;
      }
      if ( v14 > 0xA )
      {
        if ( !(*(_QWORD *)v13 ^ 0x726165735F626577LL | *(_QWORD *)(v13 + 3) ^ 0x5F6863726165735FLL) )
          goto LABEL_37;
        goto LABEL_10;
      }
      if ( v14 == 9 )
      {
        v14 = 9;
        if ( !(*(_QWORD *)v13 ^ 0x63617073656D616ELL | *(unsigned __int8 *)(v13 + 8) ^ 0x65LL) )
          break;
      }
LABEL_10:
      v115 = 1;
      sub_14031B770((__int64)v97, v7, a5);
      if ( v97[0] == 0xFE )
        goto LABEL_99;
      *(_DWORD *)&v92[3] = *(_DWORD *)&v97[4];
      *(_DWORD *)v92 = *(_DWORD *)&v97[1];
      v7 += 32;
      if ( v97[0] != 0xFF )
      {
        v103.m128i_i8[0] = v97[0];
        v103.m128i_i32[1] = *(_DWORD *)&v92[3];
        *(__int32 *)((char *)v103.m128i_i32 + 1) = *(_DWORD *)v92;
        v103.m128i_i64[1] = *(_QWORD *)&v97[8];
        v104 = *(__m128i *)&v97[16];
        v112 = 1;
        v15 = sub_1416419F0(aName_2, 4, &v103);
        v17 = 1;
        if ( v15 && *(_BYTE *)v15 == 3 )
        {
          v17 = *(_QWORD *)(v15 + 16);
          v18 = *(_QWORD *)(v15 + 24);
        }
        else
        {
          v18 = 0;
        }
        v112 = 1;
        sub_1402B8A40((unsigned int)v97, (unsigned int)v82, 0, v16, v17, v18, v13, v14);
        v106 = *(__m128i **)&v97[8];
        v19 = *(_QWORD *)&v97[16];
        if ( *(_QWORD *)v97 == -1 )
        {
          v70 = v99;
          v99[1] = v106;
          v70[2] = v19;
          *v70 = -1;
          v115 = 1;
          sub_14002F9D0(&v103);
          goto LABEL_102;
        }
        v96 = *(_QWORD *)v97;
        if ( *(__int64 *)&v97[16] < 0 )
        {
          v20 = 0;
LABEL_95:
          v114 = 1;
          sub_141938D2B(v20, v19);
        }
        LOBYTE(v102) = a4;
        if ( *(_QWORD *)&v97[16] )
        {
          nullsub_1(*(_QWORD *)&v97[8]);
          v20 = 1;
          v21 = (__m128i *)sub_140001650(v19, 1);
          if ( !v21 )
            goto LABEL_95;
          v22 = (__int64)v21;
          sub_1418F44E0(v21, v106, v19);
          v7 = v12;
        }
        else
        {
          v22 = 1;
        }
        v97[0] = 3;
        *(_QWORD *)&v97[8] = v19;
        *(_QWORD *)&v97[16] = v22;
        *(_QWORD *)&v97[24] = v19;
        v111 = 1;
        v105 = sub_141641AF0(aName_2, 4, &v103);
        sub_14002F9D0(v105);
        a4 = v102;
        v23 = *(_OWORD *)v97;
        v24 = (_OWORD *)v105;
        *(_OWORD *)(v105 + 16) = *(_OWORD *)&v97[16];
        *v24 = v23;
        if ( a4 )
        {
          if ( v14 == 6 )
          {
            if ( *(_DWORD *)v13 ^ 0x74737563 | *(unsigned __int16 *)(v13 + 4) ^ 0x6D6F )
              goto LABEL_47;
          }
          else if ( v14 != 8 || *(_QWORD *)v13 != 0x6E6F6974636E7566LL )
          {
            goto LABEL_47;
          }
          v114 = 1;
          v30 = (_BYTE *)sub_1416419F0(aDeferLoading_1, 13, v10);
          if ( !v30 )
            v30 = off_1421E7108;
          if ( *v30 == 1 && v30[1] == 1 )
          {
            *(_WORD *)v97 = 257;
            v110 = 1;
            v105 = sub_141641AF0(aDeferLoading_1, 13, &v103);
            sub_14002F9D0(v105);
            v31 = *(_OWORD *)v97;
            v32 = (_OWORD *)v105;
            *(_OWORD *)(v105 + 16) = *(_OWORD *)&v97[16];
            *v32 = v31;
          }
        }
LABEL_47:
        *(__m128i *)&v97[16] = v104;
        *(__m128i *)v97 = v103;
        v33 = v101;
        if ( v101 == v100.m128i_i64[0] )
          sub_14190F570(&v100);
        v34 = v100.m128i_i64[1];
        v35 = 32 * v33;
        v36 = _mm_load_si128((const __m128i *)v97);
        *(__m128i *)(v100.m128i_i64[1] + v35 + 16) = _mm_load_si128((const __m128i *)&v97[16]);
        *(__m128i *)(v34 + v35) = v36;
        v101 = v33 + 1;
        if ( v96 )
          sub_140001660(v106, v96, 1);
      }
    }
    v115 = 1;
    v25 = sub_1416419F0(aName_2, 4, v7);
    v90 = 1;
    if ( v25 && *(_BYTE *)v25 == 3 )
    {
      v90 = *(_QWORD *)(v25 + 16);
      v91 = *(_QWORD *)(v25 + 24);
    }
    else
    {
      v91 = 0;
    }
    v115 = 1;
    v37 = sub_1416419F0(aTools_1, 5, v7);
    v7 += 32;
  }
  while ( !v37 || *(_BYTE *)v37 != 4 );
  v38 = *(const __m128i **)(v37 + 16);
  v96 = (unsigned __int64)&v38[2 * *(_QWORD *)(v37 + 24)];
  while ( 1 )
  {
    do
    {
      if ( v38 == (const __m128i *)v96 )
      {
        v7 = v10 + 32;
        goto LABEL_2;
      }
      v115 = 1;
      v39 = v38;
      v40 = sub_1416419F0(aName_2, 4, v38);
      v38 += 2;
    }
    while ( !v40 || *(_BYTE *)v40 != 3 );
    v41 = *(_QWORD *)(v40 + 16);
    v42 = *(_QWORD *)(v40 + 24);
    v115 = 1;
    v43 = sub_1416419F0(aType_4, 4, v39);
    v106 = (__m128i *)v39;
    if ( !v43 || *(_BYTE *)v43 != 3 )
    {
      v44 = aFunction_0;
      v87 = aFunction_0;
      v88 = 8;
      goto LABEL_64;
    }
    v44 = *(const char **)(v43 + 16);
    v45 = *(_QWORD *)(v43 + 24);
    v87 = v44;
    v88 = v45;
    if ( v45 != 6 )
    {
      if ( v45 != 8 )
        goto LABEL_114;
LABEL_64:
      v46 = 8;
      if ( *(_QWORD *)v44 != 0x6E6F6974636E7566LL )
        goto LABEL_114;
      goto LABEL_65;
    }
    v46 = 6;
    if ( *(_DWORD *)v44 ^ 0x74737563 | *((unsigned __int16 *)v44 + 2) ^ 0x6D6F )
    {
LABEL_114:
      v75 = v99;
      v99[1] = "Unsupported namespaced tool type";
      v75[2] = 32;
      *v75 = -1;
      goto LABEL_102;
    }
LABEL_65:
    v115 = 1;
    sub_1402B8A40((unsigned int)v97, (unsigned int)v82, v90, v91, v41, v42, (__int64)v44, v46);
    v47 = *(_QWORD *)&v97[16];
    if ( *(_QWORD *)v97 == -1 )
    {
      v76 = v99;
      v99[1] = *(_QWORD *)&v97[8];
      v76[2] = v47;
      *v76 = -1;
      goto LABEL_102;
    }
    v102 = *(_QWORD *)v97;
    v78 = *(_OWORD *)v97;
    v95 = *(_QWORD *)&v97[8];
    v79 = *(_QWORD *)&v97[16];
    v48 = v106->m128i_i8[0];
    switch ( v106->m128i_i8[0] )
    {
      case 0:
        break;
      case 1:
        v85[1] = v106->m128i_i8[1];
        break;
      case 2:
        v86 = _mm_loadu_si128((const __m128i *)&v106->m128i_u64[1]);
        break;
      case 3:
        sub_1416AC440(&v86, &v106->m128i_u64[1]);
        break;
      case 4:
        sub_1403918C0(&v86, v106[1].m128i_i64[0], v106[1].m128i_i64[1]);
        break;
      case 5:
        sub_140E8D7E0(&v86, &v106->m128i_u64[1]);
        break;
    }
    v85[0] = v48;
    sub_14040FB10(v97, &v87);
    if ( v97[0] == 0xFF )
    {
      v103.m128i_i64[0] = *(_QWORD *)&v97[8];
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)&v103,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E9820);
    }
    v49 = _mm_loadu_si128((const __m128i *)v97);
    v104 = _mm_loadu_si128((const __m128i *)&v97[16]);
    v103 = v49;
    v109 = 1;
    v105 = sub_141641AF0(aType_4, 4, v85);
    sub_14002F9D0(v105);
    v50 = _mm_load_si128(&v103);
    v51 = (_OWORD *)v105;
    *(__m128i *)(v105 + 16) = _mm_load_si128(&v104);
    *v51 = v50;
    sub_14040F9F0(v97, &v78);
    if ( v97[0] == 0xFF )
    {
      v103.m128i_i64[0] = *(_QWORD *)&v97[8];
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)&v103,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E9838);
    }
    v52 = _mm_loadu_si128((const __m128i *)v97);
    v104 = _mm_loadu_si128((const __m128i *)&v97[16]);
    v103 = v52;
    v108 = 1;
    v105 = sub_141641AF0(aName_2, 4, v85);
    sub_14002F9D0(v105);
    v53 = _mm_load_si128(&v103);
    v54 = (_OWORD *)v105;
    *(__m128i *)(v105 + 16) = _mm_load_si128(&v104);
    *v54 = v53;
    sub_14031B770((__int64)v97, (__int64)v85, a5);
    if ( v97[0] == 0xFE )
      break;
    *(_DWORD *)&v93[3] = *(_DWORD *)&v97[4];
    *(_DWORD *)v93 = *(_DWORD *)&v97[1];
    if ( v97[0] != 0xFF )
    {
      v55 = _mm_loadu_si128((const __m128i *)&v97[16]);
      v103.m128i_i8[0] = v97[0];
      v103.m128i_i32[1] = *(_DWORD *)&v93[3];
      *(__int32 *)((char *)v103.m128i_i32 + 1) = *(_DWORD *)v93;
      v103.m128i_i64[1] = *(_QWORD *)&v97[8];
      v104 = v55;
      if ( a4 )
      {
        v113 = 1;
        v56 = (_BYTE *)sub_1416419F0(aDeferLoading_1, 13, v106);
        if ( !v56 )
          v56 = off_1421E7108;
        if ( *v56 == 1 && v56[1] )
          goto LABEL_85;
        v113 = 1;
        v57 = (_BYTE *)sub_1416419F0(aDeferLoading_1, 13, v10);
        if ( !v57 )
          v57 = off_1421E7108;
        if ( *v57 == 1 && v57[1] )
        {
LABEL_85:
          *(_WORD *)v97 = 257;
          v107 = 1;
          v106 = (__m128i *)sub_141641AF0(aDeferLoading_1, 13, &v103);
          sub_14002F9D0(v106);
          v58 = _mm_loadu_si128((const __m128i *)v97);
          v59 = v106;
          v106[1] = _mm_loadu_si128((const __m128i *)&v97[16]);
          *v59 = v58;
        }
      }
      *(__m128i *)&v97[16] = _mm_loadu_si128(&v104);
      *(__m128i *)v97 = v103;
      v60 = v101;
      if ( v101 == v100.m128i_i64[0] )
        sub_14190F570(&v100);
      v61 = v100.m128i_i64[1];
      v62 = 32 * v60;
      v63 = _mm_load_si128((const __m128i *)v97);
      *(__m128i *)(v100.m128i_i64[1] + v62 + 16) = _mm_load_si128((const __m128i *)&v97[16]);
      *(__m128i *)(v61 + v62) = v63;
      v101 = v60 + 1;
    }
    sub_14002F9D0(v85);
    if ( v102 )
      sub_140001660(v95, v102, 1);
  }
  v77 = v99;
  *(_OWORD *)(v99 + 1) = *(_OWORD *)&v97[8];
  *v77 = -1;
  sub_14002F9D0(v85);
  if ( v102 )
    sub_140001660(v95, v102, 1);
LABEL_102:
  if ( (_QWORD)v83 )
  {
    v71 = v84;
    *(_QWORD *)&v97[8] = 0;
    *(_OWORD *)&v97[16] = v83;
    *(_QWORD *)v98 = 0;
    *(_OWORD *)&v98[8] = v83;
    v72 = 1;
  }
  else
  {
    v72 = 0;
    v71 = 0;
  }
  *(_QWORD *)v97 = v72;
  *(_QWORD *)&v97[32] = v72;
  *(_QWORD *)&v98[24] = v71;
  sub_140E90CA0(v97);
  if ( *(_QWORD *)&v82[0] != -1 && *(_QWORD *)&v82[0] )
    sub_140001660(*((_QWORD *)&v82[0] + 1), *(_QWORD *)&v82[0], 1);
  v73 = v100.m128i_i64[1];
  v96 = v101;
  v94 = 0;
  v106 = (__m128i *)v100.m128i_i64[1];
  while ( 1 )
  {
    result = v94;
    if ( v96 == v94 )
      break;
    ++v94;
    v74 = v73 + 32;
    sub_1403880E0(v73);
    v73 = v74;
  }
  if ( v100.m128i_i64[0] )
    return sub_140001660(v100.m128i_i64[1], 32 * v100.m128i_i64[0], 8);
  return result;
}
