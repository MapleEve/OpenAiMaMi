// win 1.2.7 latest-exe | module src/platform/proxy.rs | ea 0x1401eaa20 | successor of pre-update 0x141006b30 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.862, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1401EAA20(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // rax
  __int64 v4; // rcx
  __m128i v5; // kr00_16
  unsigned __int64 v6; // rsi
  __m128i si128; // xmm6
  __m128i v8; // xmm7
  __m128i v9; // xmm8
  __m128i v10; // xmm9
  __m128i v11; // xmm10
  __m128i v12; // xmm11
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r12
  unsigned __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rcx
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  unsigned __int64 v33; // rcx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __int64 v36; // r12
  __int64 v37; // r10
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  char v43[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v44; // [rsp+30h] [rbp-50h]
  __int64 v45; // [rsp+38h] [rbp-48h]
  __m128i v46; // [rsp+40h] [rbp-40h] BYREF
  __int64 v47; // [rsp+50h] [rbp-30h]
  __int64 v48; // [rsp+58h] [rbp-28h]
  __int64 v49; // [rsp+60h] [rbp-20h]
  char v50; // [rsp+68h] [rbp-18h]
  __int64 v51; // [rsp+70h] [rbp-10h]
  __int64 v52; // [rsp+78h] [rbp-8h]
  unsigned __int64 v53; // [rsp+80h] [rbp+0h]
  __int64 v54; // [rsp+88h] [rbp+8h]
  __m128i v55; // [rsp+90h] [rbp+10h] BYREF
  __int64 v56; // [rsp+A0h] [rbp+20h]
  unsigned __int64 v57; // [rsp+A8h] [rbp+28h]
  __int32 v58; // [rsp+B4h] [rbp+34h]
  __int64 v59; // [rsp+B8h] [rbp+38h]
  char v60; // [rsp+C7h] [rbp+47h]
  __int64 v61; // [rsp+C8h] [rbp+48h]

  v61 = -2;
  v54 = a1;
  v55.m128i_i64[0] = 0;
  v55.m128i_i64[1] = 8;
  v56 = 0;
  v3.m128i_i64[0] = sub_1408FEA60(a2, a3);
  v5 = v3;
  if ( v3.m128i_i64[1] < 0x10uLL )
  {
    if ( v3.m128i_i64[1] )
    {
      v3.m128i_i64[0] = 0;
      while ( *(_BYTE *)(v5.m128i_i64[0] + v3.m128i_i64[0]) != 61 )
      {
        if ( v3.m128i_i64[1] == ++v3.m128i_i64[0] )
          goto LABEL_57;
      }
      goto LABEL_8;
    }
LABEL_57:
    v60 = 1;
    sub_1401EE1B0((unsigned int)&v55, (unsigned int)"http", 4, v5.m128i_i32[0], v5.m128i_i64[1]);
    v47 = v56;
    v46 = _mm_loadu_si128(&v55);
    v60 = 0;
    return sub_1401EDCC0(v54, &v46);
  }
  v60 = 1;
  LOBYTE(v4) = 61;
  v3.m128i_i64[0] = sub_1416E2CC0(v4, v3.m128i_i64[0]);
  if ( v3.m128i_i64[0] != 1 )
    goto LABEL_57;
LABEL_8:
  v6 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A045D0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_141A045E0);
  v9 = _mm_load_si128((const __m128i *)&xmmword_141A045F0);
  v10 = _mm_load_si128((const __m128i *)&xmmword_141A045A0);
  v11 = _mm_load_si128((const __m128i *)&xmmword_141A045B0);
  v12 = _mm_load_si128((const __m128i *)&xmmword_141A045C0);
  v13 = 0;
  v58 = 0;
  while ( (v58 & 1) == 0 )
  {
    v3.m128i_i8[0] = 1;
    v58 = v3.m128i_i32[0];
    if ( v5.m128i_i64[1] >= v13 )
    {
      do
      {
        v15 = v5.m128i_i64[1] - v13;
        if ( v5.m128i_i64[1] - v13 >= 0x10 )
        {
          v60 = 1;
          LOBYTE(v4) = 59;
          if ( sub_1416E2CC0(v4, v5.m128i_i64[0] + v13) != 1 )
          {
LABEL_24:
            v14 = v6;
            v13 = v5.m128i_u64[1];
            goto LABEL_26;
          }
        }
        else
        {
          v16 = 0;
          if ( !v15 )
            goto LABEL_24;
          while ( *(_BYTE *)(v5.m128i_i64[0] + v13 + v16) != 59 )
          {
            if ( v15 == ++v16 )
              goto LABEL_24;
          }
        }
        v17 = v16 + v13 + 1;
        v18 = v13 + v16;
        if ( v18 < v5.m128i_i64[1] && *(_BYTE *)(v5.m128i_i64[0] + v18) == 59 )
        {
          v58 = 0;
          v14 = v17;
          v13 = v17;
          goto LABEL_27;
        }
        v13 = v17;
      }
      while ( v5.m128i_i64[1] >= v17 );
      v14 = v6;
      v13 = v17;
    }
    else
    {
      v14 = v6;
    }
LABEL_26:
    v18 = v5.m128i_u64[1];
LABEL_27:
    v3.m128i_i64[0] = sub_1408FEA60(v5.m128i_i64[0] + v6, v18 - v6);
    v6 = v14;
    if ( v3.m128i_i64[1] )
    {
      v19 = v3.m128i_i64[0];
      v6 = v14;
      if ( v3.m128i_i64[0] )
      {
        v20 = v3.m128i_i64[1];
        v57 = v14;
        v46 = v3;
        v47 = 0;
        v48 = v3.m128i_i64[1];
        v50 = 1;
        v49 = 0x3D0000003DLL;
        v60 = 1;
        v3.m128i_i64[0] = sub_140223420(v43, &v46);
        if ( v43[0] )
        {
          v51 = v45;
          v3.m128i_i64[0] = sub_1408FEA60(v19, v44);
          v6 = v57;
          if ( v3.m128i_i64[1] )
          {
            v21 = v3.m128i_u64[1];
            v52 = v19;
            v22 = v3.m128i_i64[0];
            nullsub_1(v4, v3.m128i_i64[1]);
            v23 = sub_140001650(v21, 1);
            if ( !v23 )
            {
              v60 = 1;
              sub_14196B2DB(1, v21);
            }
            v59 = v23;
            sub_1419234B0(v23, v22, v21);
            if ( v21 < 8 )
            {
              v24 = 0;
              v25 = v59;
              v26 = v51;
              v27 = v52;
              goto LABEL_43;
            }
            v26 = v51;
            v27 = v52;
            if ( v21 < 0x20 )
            {
              v24 = 0;
              v25 = v59;
LABEL_40:
              v33 = v24;
              v24 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
              do
              {
                v34 = _mm_loadl_epi64((const __m128i *)(v25 + v33));
                v35 = _mm_add_epi8(v34, si128);
                *(_QWORD *)(v25 + v33) = _mm_or_si128(
                                           _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v35, v8), v35), v9),
                                           v34).m128i_u64[0];
                v33 += 8LL;
              }
              while ( v24 != v33 );
              goto LABEL_44;
            }
            v24 = v21 & 0xFFFFFFFFFFFFFFE0uLL;
            v28 = 0;
            v25 = v59;
            do
            {
              v29 = _mm_loadu_si128((const __m128i *)(v25 + v28));
              v30 = _mm_loadu_si128((const __m128i *)(v25 + v28 + 16));
              v31 = _mm_add_epi8(v29, v10);
              v32 = _mm_add_epi8(v30, v10);
              *(__m128i *)(v25 + v28) = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v31, v11), v31), v12),
                                          v29);
              *(__m128i *)(v25 + v28 + 16) = _mm_or_si128(
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v32, v11), v32), v12),
                                               v30);
              v28 += 32;
            }
            while ( v24 != v28 );
            if ( v21 != v24 )
            {
              if ( (v21 & 0x18) != 0 )
                goto LABEL_40;
              do
              {
LABEL_43:
                *(_BYTE *)(v25 + v24) |= 32 * ((unsigned __int8)(*(_BYTE *)(v25 + v24) - 65) < 0x1Au);
                ++v24;
LABEL_44:
                ;
              }
              while ( v21 != v24 );
            }
            v36 = v20 - v26;
            v37 = v26 + v27;
            v53 = v21;
            if ( v21 == 6 )
            {
              if ( *(_DWORD *)v25 ^ 0x6B636F73 | *(unsigned __int16 *)(v25 + 4) ^ 0x3573 )
                goto LABEL_56;
              goto LABEL_54;
            }
            if ( v21 == 5 )
            {
              if ( *(_DWORD *)v25 ^ 0x70747468 | *(unsigned __int8 *)(v25 + 4) ^ 0x73 )
              {
                if ( *(_DWORD *)v59 ^ 0x6B636F73 | *(unsigned __int8 *)(v59 + 4) ^ 0x73 )
                  goto LABEL_56;
LABEL_54:
                v38 = sub_1408FEA60(v37, v36);
                sub_1401EE1B0((unsigned int)&v55, (unsigned int)aSocks5_1, 6, v38, v39);
                goto LABEL_56;
              }
LABEL_55:
              v40 = sub_1408FEA60(v37, v36);
              sub_1401EE1B0((unsigned int)&v55, (unsigned int)"http", 4, v40, v41);
              goto LABEL_56;
            }
            if ( v21 == 4 && *(_DWORD *)v59 == 1886680168 )
              goto LABEL_55;
LABEL_56:
            sub_140001660(v59, v53, 1);
            v6 = v57;
          }
        }
        else
        {
          v6 = v57;
        }
      }
    }
  }
  v47 = v56;
  v46 = _mm_loadu_si128(&v55);
  v60 = 0;
  return sub_1401EDCC0(v54, &v46);
}
