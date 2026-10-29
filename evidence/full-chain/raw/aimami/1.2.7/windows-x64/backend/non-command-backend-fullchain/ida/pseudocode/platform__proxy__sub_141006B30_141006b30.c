// win 1.2.7 | module src/platform/proxy.rs | ea 0x141006b30 | name sub_141006B30
// win 1.2.7 | module src/platform/proxy.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141006B30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  __m128i si128; // xmm6
  __m128i v10; // xmm7
  __m128i v11; // xmm8
  __m128i v12; // xmm9
  __m128i v13; // xmm10
  __m128i v14; // xmm11
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  char v17; // r14
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __m128i v23; // rax
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // r13
  const __m128i *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r12
  __m128i *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  __int64 v38; // rcx
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v48; // rcx
  char v49[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v50; // [rsp+38h] [rbp-48h]
  __int64 v51; // [rsp+40h] [rbp-40h]
  const __m128i *v52; // [rsp+48h] [rbp-38h]
  __m128i v53; // [rsp+50h] [rbp-30h] BYREF
  __int64 v54; // [rsp+60h] [rbp-20h]
  __int64 v55; // [rsp+68h] [rbp-18h]
  __int64 v56; // [rsp+70h] [rbp-10h]
  char v57; // [rsp+78h] [rbp-8h]
  __int64 v58; // [rsp+88h] [rbp+8h]
  __int64 v59; // [rsp+90h] [rbp+10h]
  unsigned __int64 v60; // [rsp+98h] [rbp+18h]
  __m128i v61; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v62; // [rsp+B0h] [rbp+30h]
  __int64 v63; // [rsp+B8h] [rbp+38h]
  char v64; // [rsp+C7h] [rbp+47h]
  __int64 v65; // [rsp+C8h] [rbp+48h]

  v65 = -2;
  v58 = a1;
  v61.m128i_i64[0] = 0;
  v61.m128i_i64[1] = 8;
  v62 = 0;
  v3 = sub_140E91160(a2, a3);
  v6 = v3;
  v7 = v4;
  if ( v4 < 0x10 )
  {
    if ( v4 )
    {
      v8 = 0;
      while ( *(_BYTE *)(v6 + v8) != 61 )
      {
        if ( v4 == ++v8 )
          goto LABEL_57;
      }
      goto LABEL_8;
    }
LABEL_57:
    v64 = 1;
    sub_14100A360((unsigned int)&v61, (unsigned int)aHttp_2, 4, v6, v7);
    v54 = v62;
    v53 = _mm_loadu_si128(&v61);
    v64 = 0;
    return sub_141009E70(v58, &v53);
  }
  v64 = 1;
  LOBYTE(v5) = 61;
  if ( sub_1416B3CF0(v5, v3, v4) != 1 )
    goto LABEL_57;
LABEL_8:
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
  v10 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
  v11 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
  v12 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v13 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v14 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  while ( (v17 & 1) == 0 )
  {
    v18 = v15;
    v17 = 1;
    if ( v7 >= v16 )
    {
      do
      {
        v19 = v7 - v16;
        if ( v7 - v16 >= 0x10 )
        {
          v64 = 1;
          LOBYTE(v5) = 59;
          if ( sub_1416B3CF0(v5, v6 + v16, v19) != 1 )
          {
LABEL_23:
            v16 = v7;
            goto LABEL_25;
          }
        }
        else
        {
          v20 = 0;
          if ( !v19 )
            goto LABEL_23;
          while ( *(_BYTE *)(v6 + v16 + v20) != 59 )
          {
            if ( v19 == ++v20 )
              goto LABEL_23;
          }
        }
        v21 = v20 + v16 + 1;
        v22 = v16 + v20;
        if ( v22 < v7 && *(_BYTE *)(v6 + v22) == 59 )
        {
          v17 = 0;
          v15 = v21;
          v16 = v21;
          goto LABEL_26;
        }
        v16 = v21;
      }
      while ( v7 >= v21 );
      v16 = v21;
    }
LABEL_25:
    v22 = v7;
LABEL_26:
    v23.m128i_i64[0] = sub_140E91160(v6 + v18, v22 - v18);
    if ( v23.m128i_i64[1] )
    {
      v24 = v23.m128i_i64[0];
      if ( v23.m128i_i64[0] )
      {
        v25 = v23.m128i_i64[1];
        v53 = v23;
        v54 = 0;
        v55 = v23.m128i_i64[1];
        v57 = 1;
        v56 = 0x3D0000003DLL;
        v64 = 1;
        sub_141056FA0(v49, &v53);
        if ( v49[0] )
        {
          v26 = v25 - v51;
          v59 = v51 + v24;
          v27 = (const __m128i *)sub_140E91160(v24, v50);
          if ( v28 < 0 )
          {
            v48 = 0;
            goto LABEL_60;
          }
          v5 = 1;
          v63 = 1;
          if ( v28 )
          {
            v29 = v28;
            v52 = v27;
            nullsub_1(1);
            v30 = (__m128i *)sub_140001650(v29, 1);
            if ( !v30 )
            {
              v63 = v29;
              v48 = 1;
LABEL_60:
              v64 = 1;
              sub_141938D2B(v48, v63);
            }
            v63 = (__int64)v30;
            sub_1418F44E0(v30, v52, v29);
            if ( v29 < 8 )
            {
              v31 = 0;
              v32 = v63;
              goto LABEL_43;
            }
            if ( v29 < 0x20 )
            {
              v31 = 0;
              v32 = v63;
LABEL_40:
              v38 = v31;
              v31 = v29 & 0x7FFFFFFFFFFFFFF8LL;
              do
              {
                v39 = _mm_loadl_epi64((const __m128i *)(v32 + v38));
                v40 = _mm_add_epi8(v39, si128);
                *(_QWORD *)(v32 + v38) = _mm_or_si128(
                                           _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v40, v10), v40), v11),
                                           v39).m128i_u64[0];
                v38 += 8;
              }
              while ( v31 != v38 );
              goto LABEL_44;
            }
            v31 = v29 & 0x7FFFFFFFFFFFFFE0LL;
            v33 = 0;
            v32 = v63;
            do
            {
              v34 = _mm_loadu_si128((const __m128i *)(v32 + v33));
              v35 = _mm_loadu_si128((const __m128i *)(v32 + v33 + 16));
              v36 = _mm_add_epi8(v34, v12);
              v37 = _mm_add_epi8(v35, v12);
              *(__m128i *)(v32 + v33) = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v36, v13), v36), v14),
                                          v34);
              *(__m128i *)(v32 + v33 + 16) = _mm_or_si128(
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v37, v13), v37), v14),
                                               v35);
              v33 += 32;
            }
            while ( v31 != v33 );
            if ( v29 != v31 )
            {
              if ( (v29 & 0x18) != 0 )
                goto LABEL_40;
              do
              {
LABEL_43:
                *(_BYTE *)(v32 + v31) |= 32 * ((unsigned __int8)(*(_BYTE *)(v32 + v31) - 65) < 0x1Au);
                ++v31;
LABEL_44:
                ;
              }
              while ( v29 != v31 );
            }
            v60 = v29;
            if ( v29 == 6 )
            {
              v41 = *(_DWORD *)v32 ^ 0x6B636F73;
              v42 = *(unsigned __int16 *)(v32 + 4) ^ 0x3573;
LABEL_53:
              if ( !(v41 | v42) )
              {
                v43 = sub_140E91160(v59, v26);
                sub_14100A360((unsigned int)&v61, (unsigned int)aSocks5_0, 6, v43, v44);
              }
              goto LABEL_56;
            }
            if ( v29 == 5 )
            {
              if ( !(*(_DWORD *)v32 ^ 0x70747468 | *(unsigned __int8 *)(v32 + 4) ^ 0x73) )
                goto LABEL_55;
              v41 = *(_DWORD *)v63 ^ 0x6B636F73;
              v42 = *(unsigned __int8 *)(v63 + 4) ^ 0x73;
              goto LABEL_53;
            }
            if ( v29 == 4 && *(_DWORD *)v63 == 1886680168 )
            {
LABEL_55:
              v45 = sub_140E91160(v59, v26);
              sub_14100A360((unsigned int)&v61, (unsigned int)aHttp_2, 4, v45, v46);
            }
LABEL_56:
            sub_140001660(v63, v60, 1);
          }
        }
      }
    }
  }
  v54 = v62;
  v53 = _mm_loadu_si128(&v61);
  v64 = 0;
  return sub_141009E70(v58, &v53);
}
