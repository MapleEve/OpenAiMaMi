// module: codexmate_lib/platform/paths
// addr: 0x140710b70
// name: state_db_score
// win 1.2.1 | module src/platform/paths.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::platform::paths::CodexPaths::state_db_score | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall state_db_score(unsigned __int128 *a1, __int64 a2, __int64 a3, char a4)
{
  int v7; // edx
  int v8; // esi
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r15
  unsigned int v12; // r12d
  unsigned __int128 v13; // rax
  char v14; // bl
  __int64 v15; // rsi
  char v16; // bl
  __int64 v17; // r13
  __int32 v18; // edx
  unsigned __int8 v19; // r12
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  __int32 v22; // r13d
  unsigned __int64 v23; // rbx
  __int64 v24; // r15
  __int32 v25; // ecx
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  __m128i si128; // xmm6
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  int v37; // ecx
  unsigned __int128 v38; // xmm0
  unsigned __int128 v39; // xmm1
  unsigned __int128 *v40; // rcx
  unsigned __int128 v41; // xmm0
  unsigned __int128 v42; // xmm1
  __int64 result; // rax
  _QWORD *v44; // rsi
  __int64 v45; // rdx
  unsigned __int128 *v46; // rcx
  __int64 v47; // [rsp+20h] [rbp-60h]
  __int64 v48; // [rsp+28h] [rbp-58h]
  __m256i v49; // [rsp+30h] [rbp-50h] BYREF
  __int64 v50; // [rsp+50h] [rbp-30h]
  __int64 v51; // [rsp+58h] [rbp-28h]
  unsigned __int64 v52; // [rsp+60h] [rbp-20h]
  __int128 v53; // [rsp+68h] [rbp-18h] BYREF
  __int128 v54; // [rsp+78h] [rbp-8h]
  int v55; // [rsp+88h] [rbp+8h]
  unsigned __int8 v56; // [rsp+8Ch] [rbp+Ch]
  _BYTE v57[59]; // [rsp+8Dh] [rbp+Dh]
  __int64 v58; // [rsp+C8h] [rbp+48h]
  char v59; // [rsp+D0h] [rbp+50h]
  _BYTE v60[7]; // [rsp+D1h] [rbp+51h]
  __int64 v61; // [rsp+D8h] [rbp+58h]
  __int64 v62; // [rsp+E0h] [rbp+60h]
  unsigned __int128 *v63; // [rsp+E8h] [rbp+68h]
  unsigned __int128 v64; // [rsp+F0h] [rbp+70h]
  unsigned __int128 v65; // [rsp+100h] [rbp+80h]
  unsigned __int128 v66; // [rsp+110h] [rbp+90h] BYREF
  __m128i v67[2]; // [rsp+120h] [rbp+A0h]
  __int64 v68; // [rsp+148h] [rbp+C8h]
  _BYTE v69[80]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v70; // [rsp+1A0h] [rbp+120h]
  __int64 v71; // [rsp+1B0h] [rbp+130h]
  char v72; // [rsp+1B8h] [rbp+138h]
  _BYTE v73[7]; // [rsp+1B9h] [rbp+139h]
  __m256i v74; // [rsp+1C0h] [rbp+140h] BYREF
  __m256i v75; // [rsp+1E0h] [rbp+160h]
  __int64 v76; // [rsp+208h] [rbp+188h]
  char v77; // [rsp+217h] [rbp+197h] BYREF
  __int64 v78; // [rsp+218h] [rbp+198h]
  __m256i v79; // [rsp+220h] [rbp+1A0h] BYREF
  __m256i v80; // [rsp+240h] [rbp+1C0h]
  __int32 v81; // [rsp+264h] [rbp+1E4h]
  __int64 v82; // [rsp+268h] [rbp+1E8h]

  v82 = -2;
  v63 = a1;
  v8 = 0;
  if ( (sub_140712440(a2, a3) & 1) != 0 )
    v8 = v7;
  v62 = a2;
  v61 = a3;
  sub_141486710(v69, a2, a3);
  if ( *(_DWORD *)v69 == 2 )
  {
    sub_1401DD260(*(_QWORD *)&v69[8]);
    v9 = 27111902;
    v10 = -717324288;
  }
  else
  {
    v10 = *(_DWORD *)&v69[48];
    v9 = *(unsigned int *)&v69[52];
  }
  sub_141473C40((unsigned int)&v53, v62, v61, (unsigned int)aSqliteWal, 10);
  v68 = *((_QWORD *)&v53 + 1);
  sub_141486710(v69, *((_QWORD *)&v53 + 1), v54);
  if ( *(_DWORD *)v69 == 2 )
  {
    sub_1401DD260(*(_QWORD *)&v69[8]);
    v11 = 27111902;
    v12 = -717324288;
  }
  else
  {
    v12 = *(_DWORD *)&v69[48];
    v11 = *(unsigned int *)&v69[52];
  }
  if ( ((v11 << 32) | v12) < ((v9 << 32) | v10) )
  {
    v12 = v10;
    LODWORD(v11) = v9;
  }
  if ( (_QWORD)v53 )
    sub_140001660(v68, v53, 1);
  *(_QWORD *)&v53 = __PAIR64__(v11, v12);
  sub_141475530(v69, &v53, 3577643008LL, 27111902);
  v13 = 0u;
  if ( !v69[0] )
    v13 = *(unsigned int *)&v69[16] + *(unsigned __int64 *)&v69[8] * (unsigned __int128)0x3B9ACA00uLL;
  LODWORD(v66) = v8;
  WORD2(v66) = 256;
  v65 = 0;
  v64 = v13;
  BYTE6(v66) = a4;
  v14 = 1;
  while ( 1 )
  {
    LOBYTE(v68) = v14;
    sub_1406C1800((__int64)v69, v62, v61, 32769);
    v15 = *(_QWORD *)v69;
    v16 = v69[24];
    v17 = *(_QWORD *)&v69[16];
    v18 = *(_DWORD *)&v69[32];
    v19 = v69[36];
    *(_OWORD *)v79.m256i_i8 = *(_OWORD *)&v69[37];
    *(_OWORD *)((char *)&v79.m256i_u64[1] + 3) = *(_OWORD *)&v69[48];
    if ( v72 != -1 )
      break;
    v67[0] = *(__m128i *)v79.m256i_i8;
    *(__m128i *)((char *)v67 + 11) = _mm_loadu_si128((const __m128i *)((char *)&v79.m256i_u64[1] + 3));
    LOBYTE(v21) = v69[24];
    v20 = *(_QWORD *)&v69[8];
    if ( *(_QWORD *)v69 == -1 )
      goto LABEL_100;
    v23 = *(_QWORD *)&v69[24] & 0xFFFFFFFFFFFFFF00uLL;
    if ( !__OFSUB__(-*(_QWORD *)v69, 1) )
      goto LABEL_88;
LABEL_83:
    if ( v19 > 0xEu )
      goto LABEL_88;
    v37 = 28952;
    if ( !_bittest(&v37, v19) || (_BYTE)v68 == 3 )
      goto LABEL_88;
    *(_QWORD *)v69 = 0x8000000000000000uLL;
    *(_QWORD *)&v69[8] = v20;
    *(_QWORD *)&v69[16] = v17;
    *(_QWORD *)&v69[24] = (unsigned __int8)v21 | v23;
    *(_DWORD *)&v69[32] = v18;
    v69[36] = v19;
    *(__m128i *)&v69[48] = *(__m128i *)((char *)v67 + 11);
    *(__m128i *)&v69[37] = v67[0];
    sub_141487490(0, 25000000);
    v14 = v68 + 1;
    sub_1406CBAD0(v69);
    if ( (unsigned __int8)v14 > 3u )
    {
      v41 = v64;
      v42 = v65;
      result = (__int64)v63;
      v63[2] = v66;
      *(_OWORD *)(result + 16) = v42;
      *(_OWORD *)result = v41;
      return result;
    }
  }
  v58 = v71;
  *(_OWORD *)&v57[43] = v70;
  *(_OWORD *)&v57[27] = *(_OWORD *)&v69[64];
  *(_DWORD *)&v60[3] = *(_DWORD *)&v73[3];
  *(_DWORD *)v60 = *(_DWORD *)v73;
  v53 = *(_OWORD *)v69;
  v54 = *(_OWORD *)&v69[16];
  v55 = *(_DWORD *)&v69[32];
  v56 = v69[36];
  *(_OWORD *)&v57[11] = *(_OWORD *)((char *)&v79.m256i_u64[1] + 3);
  *(_OWORD *)v57 = *(_OWORD *)v79.m256i_i8;
  v59 = v72;
  sub_140FB95D0(v69, &v53, 0, 75000000);
  v15 = *(_QWORD *)v69;
  if ( *(_QWORD *)v69 == -1 )
  {
    ((void (__fastcall *)(_BYTE *, __int128 *, const char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64))sub_140716FD0)(
      v69,
      &v53,
      aPragmaTableInf_0,
      26,
      v47,
      v48,
      v49.m256i_i64[0],
      v49.m256i_i64[1],
      v49.m256i_i64[2],
      v49.m256i_i64[3],
      v50,
      v51,
      v52);
    v15 = *(_QWORD *)&v69[8];
    v24 = *(_QWORD *)&v69[24];
    v20 = *(_QWORD *)&v69[16];
    v21 = *(_QWORD *)&v69[32];
    v25 = *(_DWORD *)&v69[40];
    v19 = v69[44];
    *(_OWORD *)v74.m256i_i8 = *(_OWORD *)&v69[45];
    *(_OWORD *)((char *)&v74.m256i_u64[1] + 3) = *(_OWORD *)&v69[56];
    if ( v69[0] )
    {
      *(_OWORD *)((char *)&v49.m256i_u64[1] + 3) = *(_OWORD *)((char *)&v74.m256i_u64[1] + 3);
      *(_OWORD *)v49.m256i_i8 = *(_OWORD *)v74.m256i_i8;
      if ( *(_QWORD *)&v69[8] == -1 )
        goto LABEL_29;
    }
    else
    {
      v79 = *(__m256i *)&v69[8];
      v80.m256i_i32[0] = *(_DWORD *)&v69[40];
      v80.m256i_i8[4] = v69[44];
      *(_OWORD *)&v80.m256i_u64[2] = *(_OWORD *)((char *)&v74.m256i_u64[1] + 3);
      *(_OWORD *)&v80.m256i_u8[5] = *(_OWORD *)v74.m256i_i8;
      v26 = sub_1414B6B70(*(__int64 *)((char *)&v74.m256i_i64[2] + 3));
      v24 = v26;
      if ( !v26 )
      {
        sub_140310210(v69, (__int64)&v79, 0);
        v24 = *(_QWORD *)&v69[8];
        v20 = *(_QWORD *)v69;
        v21 = *(_QWORD *)&v69[16];
        sub_1406CBC60(&v79);
LABEL_29:
        v50 = v20;
        v51 = v24;
        v52 = v21;
        if ( v21 )
        {
          v78 = v20;
          v27 = 24 * v21;
          v28 = 0;
          do
          {
            if ( *(_QWORD *)(v24 + v28 + 16) == 13
              && !(**(_QWORD **)(v24 + v28 + 8) ^ 0x5F79636E65636572LL
                 | *(_QWORD *)(*(_QWORD *)(v24 + v28 + 8) + 5LL) ^ 0x736D5F74615F7963LL) )
            {
              v16 = 2;
              goto LABEL_41;
            }
            v28 += 24;
          }
          while ( v27 != v28 );
          v29 = 0;
          do
          {
            if ( *(_QWORD *)(v24 + v29 + 16) == 13
              && !(**(_QWORD **)(v24 + v29 + 8) ^ 0x5F64657461647075LL
                 | *(_QWORD *)(*(_QWORD *)(v24 + v29 + 8) + 5LL) ^ 0x736D5F74615F6465LL) )
            {
              v16 = 1;
              goto LABEL_41;
            }
            v29 += 24;
          }
          while ( v27 != v29 );
          v16 = 0;
LABEL_41:
          v30 = 0;
          do
          {
            if ( *(_QWORD *)(v24 + v30 + 16) == 13
              && !(**(_QWORD **)(v24 + v30 + 8) ^ 0x5F64657461647075LL
                 | *(_QWORD *)(*(_QWORD *)(v24 + v30 + 8) + 5LL) ^ 0x736D5F74615F6465LL) )
            {
              ((void (__fastcall *)(_BYTE *, __int128 *, const char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64))sub_140716FD0)(
                v69,
                &v53,
                aSelectCoalesce_2,
                51,
                v47,
                v48,
                v49.m256i_i64[0],
                v49.m256i_i64[1],
                v49.m256i_i64[2],
                v49.m256i_i64[3],
                v50,
                v51,
                v52);
              v79 = *(__m256i *)&v69[8];
              v80 = *(__m256i *)&v69[40];
              if ( *(_DWORD *)v69 == 1 )
              {
                v75 = v80;
                v74 = v79;
              }
              else
              {
                *(__m256i *)&v69[32] = v80;
                *(__m256i *)v69 = v79;
                sub_140425480((__int64)&v74, (__int64)v69);
                sub_1406CBC60(v69);
              }
              v32 = v74.m256i_u64[1];
              v15 = v74.m256i_i64[0];
              if ( v74.m256i_i64[0] != -1 )
              {
                v76 = v74.m256i_i64[1];
                goto LABEL_60;
              }
              goto LABEL_63;
            }
            v30 += 24;
          }
          while ( v27 != v30 );
          v31 = 0;
          while ( *(_QWORD *)(v24 + v31 + 16) != 10
               || **(_QWORD **)(v24 + v31 + 8) ^ 0x5F64657461647075LL
                | *(unsigned __int16 *)(*(_QWORD *)(v24 + v31 + 8) + 8LL) ^ 0x7461LL )
          {
            v31 += 24;
            if ( v27 == v31 )
            {
              v32 = 0;
              goto LABEL_63;
            }
          }
          ((void (__fastcall *)(_BYTE *, __int128 *, const char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64))sub_140716FD0)(
            v69,
            &v53,
            aSelectCoalesce_1,
            48,
            v47,
            v48,
            v49.m256i_i64[0],
            v49.m256i_i64[1],
            v49.m256i_i64[2],
            v49.m256i_i64[3],
            v50,
            v51,
            v52);
          v79 = *(__m256i *)&v69[8];
          v80 = *(__m256i *)&v69[40];
          if ( *(_DWORD *)v69 == 1 )
          {
            v75 = v80;
            v74 = v79;
          }
          else
          {
            *(__m256i *)&v69[32] = v80;
            *(__m256i *)v69 = v79;
            sub_140425480((__int64)&v74, (__int64)v69);
            sub_1406CBC60(v69);
          }
          v15 = v74.m256i_i64[0];
          if ( v74.m256i_i64[0] != -1 )
          {
            v76 = v74.m256i_i64[1];
LABEL_60:
            si128 = _mm_load_si128((const __m128i *)&v74.m256i_u64[2]);
            v81 = v75.m256i_i32[0];
            v19 = v75.m256i_u8[4];
            v67[0] = *(__m128i *)&v75.m256i_u8[5];
            *(__m128i *)((char *)v67 + 11) = *(__m128i *)&v75.m256i_u64[2];
            v20 = v78;
LABEL_74:
            v35 = (_QWORD *)(v24 + 8);
            do
            {
              v36 = *(v35 - 1);
              if ( v36 )
                sub_140001660(*v35, v36, 1);
              v35 += 3;
              --v21;
            }
            while ( v21 );
            v21 = _mm_shuffle_epi32(si128, 238).m128i_u64[0];
            v78 = si128.m128i_i64[0];
            if ( v20 )
              sub_140001660(v24, 24 * v20, 8);
            v20 = v76;
            v25 = v81;
            goto LABEL_81;
          }
          v32 = 1000 * v74.m256i_i64[1];
          if ( !is_mul_ok(0x3E8u, v74.m256i_u64[1]) )
            v32 = ((unsigned __int64)v74.m256i_i64[1] >> 63) + 0x7FFFFFFFFFFFFFFFLL;
LABEL_63:
          v34 = 0;
          while ( *(_QWORD *)(v24 + v34 + 16) != 8 || **(_QWORD **)(v24 + v34 + 8) != 0x6465766968637261LL )
          {
            v34 += 24;
            if ( v27 == v34 )
            {
              ((void (__fastcall *)(_BYTE *, __int128 *, const char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64))sub_140716FD0)(
                v69,
                &v53,
                aSelectCountFro_3,
                28,
                v47,
                v48,
                v49.m256i_i64[0],
                v49.m256i_i64[1],
                v49.m256i_i64[2],
                v49.m256i_i64[3],
                v50,
                v51,
                v52);
              v79 = *(__m256i *)&v69[8];
              v80 = *(__m256i *)&v69[40];
              if ( *(_DWORD *)v69 == 1 )
                goto LABEL_70;
              goto LABEL_71;
            }
          }
          ((void (__fastcall *)(_BYTE *, __int128 *, const char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64))sub_140716FD0)(
            v69,
            &v53,
            aSelectCountFro_4,
            60,
            v47,
            v48,
            v49.m256i_i64[0],
            v49.m256i_i64[1],
            v49.m256i_i64[2],
            v49.m256i_i64[3],
            v50,
            v51,
            v52);
          v79 = *(__m256i *)&v69[8];
          v80 = *(__m256i *)&v69[40];
          if ( *(_DWORD *)v69 == 1 )
          {
LABEL_70:
            v75 = v80;
            v74 = v79;
            goto LABEL_72;
          }
LABEL_71:
          *(__m256i *)&v69[32] = v80;
          *(__m256i *)v69 = v79;
          sub_140425480((__int64)&v74, (__int64)v69);
          sub_1406CBC60(v69);
LABEL_72:
          v76 = v74.m256i_i64[1];
          v15 = v74.m256i_i64[0];
          v20 = v78;
          if ( v74.m256i_i64[0] != -1 )
          {
            si128 = _mm_load_si128((const __m128i *)&v74.m256i_u64[2]);
            v81 = v75.m256i_i32[0];
            v19 = v75.m256i_u8[4];
            v67[0] = *(__m128i *)&v75.m256i_u8[5];
            *(__m128i *)((char *)v67 + 11) = *(__m128i *)&v75.m256i_u64[2];
            goto LABEL_74;
          }
          v44 = (_QWORD *)(v24 + 8);
          do
          {
            v45 = *(v44 - 1);
            if ( v45 )
              sub_140001660(*v44, v45, 1);
            v44 += 3;
            --v21;
          }
          while ( v21 );
          v17 = v76;
        }
        else
        {
          v17 = 0;
          v16 = 0;
          v32 = 0;
        }
        if ( v20 )
          sub_140001660(v24, 24 * v20, 8);
        sub_1406CB500(&v53);
        v20 = v32;
LABEL_100:
        BYTE5(v66) = 2;
        *(_QWORD *)&v65 = v20;
        BYTE4(v66) = v16;
        *((_QWORD *)&v65 + 1) = v17;
        v46 = v63;
        *v63 = v64;
        v46[1] = v65;
        *((_DWORD *)v46 + 8) = v66;
        *((_WORD *)v46 + 18) = WORD2(v66);
        *(_QWORD *)((char *)v46 + 38) = *(_QWORD *)((char *)&v66 + 6);
        result = HIWORD(v66);
        *((_WORD *)v46 + 23) = HIWORD(v66);
        return result;
      }
      sub_1406CBC60(&v79);
      v15 = 0x8000000000000013uLL;
      v20 = 0;
    }
    *(__m128i *)((char *)v67 + 11) = *(__m128i *)((char *)&v49.m256i_u64[1] + 3);
    v67[0] = _mm_load_si128((const __m128i *)&v49);
    v78 = v24;
LABEL_81:
    v22 = v25;
  }
  else
  {
    v20 = *(_QWORD *)&v69[8];
    v21 = *(_QWORD *)&v69[24];
    v78 = *(_QWORD *)&v69[16];
    v22 = *(_DWORD *)&v69[32];
    v19 = v69[36];
    v67[0] = _mm_loadu_si128((const __m128i *)&v69[37]);
    *(__m128i *)((char *)v67 + 11) = *(__m128i *)&v69[48];
  }
  sub_1406CB500(&v53);
  v18 = v22;
  v17 = v78;
  v23 = v21 & 0xFFFFFFFFFFFFFF00uLL;
  if ( __OFSUB__(-v15, 1) )
    goto LABEL_83;
LABEL_88:
  *(_QWORD *)&v53 = v15;
  *((_QWORD *)&v53 + 1) = v20;
  *(_QWORD *)&v54 = v17;
  *((_QWORD *)&v54 + 1) = (unsigned __int8)v21 | v23;
  v55 = v18;
  v56 = v19;
  *(__m128i *)v57 = v67[0];
  *(__m128i *)&v57[11] = *(__m128i *)((char *)v67 + 11);
  BYTE5(v66) = !__OFSUB__(-v15, 1) || v19 != 9 && v19 != 22;
  if ( *(_QWORD *)off_141EC8D80 > 1u )
  {
    v74.m256i_i64[0] = v62;
    v74.m256i_i64[1] = v61;
    v79.m256i_i64[0] = (__int64)&v74;
    v79.m256i_i64[1] = (__int64)sub_14148F3A0;
    v79.m256i_i64[2] = (__int64)&v66 + 5;
    v79.m256i_i64[3] = (__int64)sub_1407BAD20;
    v80.m256i_i64[0] = (__int64)&v53;
    v80.m256i_i64[1] = (__int64)sub_140FB8910;
    *(_QWORD *)v69 = 0;
    *(_QWORD *)&v69[8] = aCodexmateLibPl;
    *(_OWORD *)&v69[16] = 0x1Eu;
    *(_QWORD *)&v69[32] = aSrcPlatformPat;
    *(_QWORD *)&v69[40] = 21;
    *(_QWORD *)&v69[48] = 2;
    *(_QWORD *)&v69[56] = aCodexmateLibPl;
    *(_QWORD *)&v69[64] = 30;
    *(_QWORD *)&v69[72] = 0x10D00000001LL;
    *(_QWORD *)&v70 = &unk_141789244;
    *((_QWORD *)&v70 + 1) = &v79;
    sub_1412C36A0(&v77, v69);
  }
  v38 = v64;
  v39 = v65;
  v40 = v63;
  v63[2] = v66;
  v40[1] = v39;
  *v40 = v38;
  return sub_1406CBAD0(&v53);
}