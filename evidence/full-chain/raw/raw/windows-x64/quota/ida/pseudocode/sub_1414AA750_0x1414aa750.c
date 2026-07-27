// module: codexmate_lib/core/relay/quota
// addr: 0x1414aa750
// name: sub_1414AA750
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_WORD *__fastcall sub_1414AA750(_WORD *a1, unsigned __int8 *a2, __int64 a3)
{
  __m128i v3; // xmm0
  _WORD *v4; // rsi
  __int64 v5; // r15
  unsigned __int8 *v6; // rbx
  __int64 v7; // r14
  unsigned __int8 v8; // di
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  int v11; // edx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  int v14; // edx
  bool v15; // zf
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  double v18; // xmm0_8
  int v19; // eax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rax
  int v22; // edx
  unsigned int v23; // eax
  int v24; // ebx
  __int64 v26; // r15
  unsigned int v27; // eax
  __int64 v28; // r12
  int v29; // ebx
  int v30; // r12d
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rdx
  __int64 v36; // r9
  unsigned __int8 v37; // dl
  unsigned __int64 v38; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+30h] [rbp-50h]
  unsigned __int8 v40; // [rsp+39h] [rbp-47h]
  int v41; // [rsp+330h] [rbp+2B0h]
  char v42; // [rsp+334h] [rbp+2B4h]
  _WORD *v43; // [rsp+338h] [rbp+2B8h]
  int v44; // [rsp+344h] [rbp+2C4h]

  v4 = a1;
  if ( !a3 )
  {
    *a1 = 1;
    return v4;
  }
  v5 = a3;
  v6 = a2;
  LODWORD(v7) = *a2;
  if ( (_DWORD)v7 == 45 || (_DWORD)v7 == 43 )
  {
    v5 = a3 - 1;
    if ( a3 == 1 )
    {
      *a1 = 257;
      return v4;
    }
    v6 = a2 + 1;
  }
  sub_1414A51C0(&v38, v6, v5);
  v8 = v40;
  if ( v40 == 2 )
  {
    if ( v5 == 3 )
    {
      v19 = (*v6 | (*(unsigned __int16 *)(v6 + 1) << 8)) & 0xDFDFDF;
      if ( v19 == 4607561 )
      {
LABEL_24:
        v20 = _mm_loadl_epi64((const __m128i *)&qword_141809530);
        goto LABEL_25;
      }
      if ( v19 == 5128526 )
      {
        v20 = _mm_loadl_epi64((const __m128i *)&qword_141809528);
LABEL_25:
        if ( (_BYTE)v7 == 45 )
          v20.m128i_i64[0] = _mm_xor_si128(v20, (__m128i)xmmword_141792120).m128i_u64[0];
        *((_QWORD *)v4 + 1) = v20.m128i_i64[0];
        *(_BYTE *)v4 = 0;
        return v4;
      }
    }
    else if ( v5 == 8 && (*(_QWORD *)v6 & 0xDFDFDFDFDFDFDFDFuLL) == 0x5954494E49464E49LL )
    {
      goto LABEL_24;
    }
    *((_BYTE *)v4 + 1) = 1;
    *(_BYTE *)v4 = 1;
    return v4;
  }
  v9 = v38;
  v10 = v39;
  if ( v40 & 1 | (v38 - 38 < 0xFFFFFFFFFFFFFFC4uLL || v39 > 0x20000000000000LL) )
  {
    v43 = v4;
    v44 = v7;
    v12 = sub_14149DCB0(v38, v39);
    v7 = (unsigned int)v11;
    if ( ((v11 >= 0) & v8) != 0 )
    {
      v13 = sub_14149DCB0(v9, v10 + 1);
      v15 = (_DWORD)v7 != v14 || v12 != v13;
      v16 = v7;
      LOBYTE(v7) = v44;
      v17 = v12;
      v4 = v43;
      if ( !v15 )
        goto LABEL_36;
LABEL_32:
      sub_1414A4DA0(&v38, v6, v5);
      v23 = v41;
      if ( v38 == 0 || v41 < -324 )
      {
LABEL_33:
        v16 = 0;
LABEL_35:
        v17 = 0;
        goto LABEL_36;
      }
      v16 = 2047;
      v24 = 0;
      if ( v41 > 309 )
        goto LABEL_35;
      if ( v41 <= 0 )
        goto LABEL_49;
      v24 = 0;
      do
      {
        v26 = 60;
        if ( v23 < 0x13 )
          v26 = byte_141A403B0[v23];
        sub_1414A0680(&v38, v26);
        v23 = v41;
        if ( v41 <= -2048 )
          goto LABEL_33;
        v24 += v26;
      }
      while ( v41 > 0 );
      do
      {
LABEL_49:
        if ( v23 )
        {
          v27 = -v23;
          v28 = 60;
          if ( v27 < 0x13 )
            v28 = byte_141A403B0[v27];
        }
        else
        {
          if ( (unsigned __int8)v39 > 4u )
            break;
          v28 = ((unsigned __int8)v39 < 2u) + 1LL;
        }
        sub_1414A0420(&v38, v28);
        v23 = v41;
        if ( v41 > 2047 )
          goto LABEL_35;
        v24 -= v28;
      }
      while ( v41 <= 0 );
      v29 = v24 - 1;
      if ( v29 <= -1023 )
      {
        do
        {
          v30 = v29;
          v31 = (unsigned int)(-1022 - v29);
          if ( (unsigned int)v31 >= 0x3C )
            v31 = 60;
          sub_1414A0680(&v38, v31);
          v29 = v30 + v31;
        }
        while ( (unsigned int)v29 < 0xFFFFFC02 );
      }
      if ( v29 + 1023 > 2046 )
      {
        v17 = 0;
        v16 = 2047;
        goto LABEL_36;
      }
      sub_1414A0420(&v38, 53);
      v16 = 2047;
      if ( !v38 || v41 < 0LL )
      {
        v17 = 0;
        v16 = (unsigned int)(v29 + 1022);
        goto LABEL_36;
      }
      if ( (unsigned int)v41 > 0x12 )
        goto LABEL_89;
      if ( !v41 )
      {
        v32 = 0;
        goto LABEL_80;
      }
      if ( v41 == 1 )
      {
        v32 = 0;
        v33 = 0;
      }
      else
      {
        v32 = 0;
        v34 = 0;
        do
        {
          v35 = v34;
          v36 = 10 * v32;
          if ( v35 < v38 )
            v36 += *((unsigned __int8 *)&v39 + v35);
          v32 = 10 * v36;
          if ( v35 + 1 < v38 )
            v32 += *((unsigned __int8 *)&v39 + v35 + 1);
          v34 = v35 + 2;
        }
        while ( v35 + 2 != (v41 & 0x1E) );
        if ( (v41 & 1) == 0 )
        {
LABEL_80:
          if ( v38 <= v41 )
            goto LABEL_88;
          v37 = *((_BYTE *)&v39 + v41);
          if ( v37 == 5 && v41 + 1LL == v38 )
          {
            if ( !v42 && (!v41 || (*((_BYTE *)&v38 + v41 + 7) & 1) == 0) )
            {
LABEL_88:
              if ( v32 <= 0x1FFFFFFFFFFFFFLL )
              {
LABEL_91:
                v16 = v29 + 1023 - (unsigned int)(v32 < 0x10000000000000LL);
                v17 = v32 & 0xFFFFFFFFFFFFFLL;
                goto LABEL_36;
              }
LABEL_89:
              sub_1414A0680(&v38, 1);
              v32 = sub_1414A0880(&v38);
              if ( v29 + 1024 > 2046 )
                goto LABEL_35;
              ++v29;
              goto LABEL_91;
            }
          }
          else if ( v37 <= 4u )
          {
            goto LABEL_88;
          }
          ++v32;
          goto LABEL_88;
        }
        v33 = v35 + 2;
      }
      v32 *= 10LL;
      if ( v33 < v38 )
        v32 += *((unsigned __int8 *)&v39 + v33);
      goto LABEL_80;
    }
    v16 = (unsigned int)v11;
    LOBYTE(v7) = v44;
    v17 = v12;
    v4 = v43;
    if ( v11 < 0 )
      goto LABEL_32;
  }
  else
  {
    if ( (__int64)v38 <= 22 )
    {
      v18 = (double)(int)v39;
      if ( (v38 & 0x8000000000000000uLL) != 0LL )
        *(double *)v3.m128i_i64 = v18 / dbl_141A46CF8[-v38];
      else
        *(double *)v3.m128i_i64 = v18 * dbl_141A46CF8[v38];
      goto LABEL_37;
    }
    v21 = qword_141A3FF88[v38 - 22] * v39;
    if ( ((v21 <= 0x20000000000000LL)
        & (unsigned __int8)~((qword_141A3FF88[v38 - 22] * (unsigned __int128)v39) >> 64 != 0)) != 0 )
    {
      *(double *)v3.m128i_i64 = (double)(int)v21 * 1.0e22;
      goto LABEL_37;
    }
    v17 = sub_14149DCB0(v38, v39);
    v16 = (unsigned int)v22;
    if ( v22 < 0 )
      goto LABEL_32;
  }
LABEL_36:
  v3 = (__m128i)(v17 | (v16 << 52));
LABEL_37:
  if ( (_BYTE)v7 == 45 )
    v3.m128i_i64[0] = _mm_xor_si128(v3, (__m128i)xmmword_141792120).m128i_u64[0];
  *((_QWORD *)v4 + 1) = v3.m128i_i64[0];
  *(_BYTE *)v4 = 0;
  return v4;
}