// module: codexmate_lib/platform/proxy
// addr: 0x14075bad0
// name: sub_14075BAD0
// win 1.2.1 | module src/platform/proxy.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14075BAD0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // rax
  __int64 v4; // rcx
  __m128i v5; // rdi
  __m128i si128; // xmm6
  __m128i v7; // xmm7
  __m128i v8; // xmm8
  __m128i v9; // xmm9
  __m128i v10; // xmm10
  __m128i v11; // xmm11
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // r14
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __m128i v30; // xmm3
  __int64 v31; // rcx
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __int64 v34; // r13
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v42; // rcx
  char v43[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v44; // [rsp+30h] [rbp-50h]
  __int64 v45; // [rsp+38h] [rbp-48h]
  __int64 v46; // [rsp+40h] [rbp-40h]
  __int64 v47; // [rsp+48h] [rbp-38h]
  __m128i v48; // [rsp+50h] [rbp-30h] BYREF
  __int64 v49; // [rsp+60h] [rbp-20h]
  __int64 v50; // [rsp+68h] [rbp-18h]
  __int64 v51; // [rsp+70h] [rbp-10h]
  char v52; // [rsp+78h] [rbp-8h]
  __int64 v53; // [rsp+88h] [rbp+8h]
  unsigned __int64 v54; // [rsp+90h] [rbp+10h]
  __m128i v55; // [rsp+98h] [rbp+18h] BYREF
  __int64 v56; // [rsp+A8h] [rbp+28h]
  __int32 v57; // [rsp+B4h] [rbp+34h]
  __int64 v58; // [rsp+B8h] [rbp+38h]
  char v59; // [rsp+C7h] [rbp+47h]
  __int64 v60; // [rsp+C8h] [rbp+48h]

  v60 = -2;
  v53 = a1;
  v55.m128i_i64[0] = 0;
  v55.m128i_i64[1] = 8;
  v56 = 0;
  v59 = 1;
  v3.m128i_i64[0] = sub_14033BC10(a2, a3);
  v5 = v3;
  if ( v3.m128i_i64[1] <= 0xFuLL )
  {
    if ( v3.m128i_i64[1] )
    {
      v3.m128i_i64[0] = 0;
      while ( *(_BYTE *)(v5.m128i_i64[0] + v3.m128i_i64[0]) != 61 )
      {
        if ( v3.m128i_i64[1] == ++v3.m128i_i64[0] )
          goto LABEL_58;
      }
      goto LABEL_8;
    }
LABEL_58:
    v59 = 1;
    sub_14075F5D0((unsigned int)&v55, (unsigned int)aHttp_0, 4, v5.m128i_i32[0], v5.m128i_i64[1]);
    v49 = v56;
    v48 = _mm_loadu_si128(&v55);
    v59 = 0;
    return sub_14075F0E0(v53, &v48);
  }
  v59 = 1;
  LOBYTE(v4) = 61;
  v3.m128i_i64[0] = sub_1414A3EA0(v4, v3.m128i_i64[0], v3.m128i_i64[1]);
  if ( v3.m128i_i64[0] != 1 )
    goto LABEL_58;
LABEL_8:
  si128 = _mm_load_si128((const __m128i *)&xmmword_141742480);
  v7 = _mm_load_si128((const __m128i *)&xmmword_141742490);
  v8 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
  v9 = _mm_load_si128((const __m128i *)&xmmword_141742460);
  v10 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
  v11 = _mm_load_si128((const __m128i *)&xmmword_141742470);
  v12 = 0;
  v13 = 0;
  v57 = 0;
LABEL_9:
  v14 = v12;
  while ( (v57 & 1) == 0 )
  {
    v3.m128i_i8[0] = 1;
    v57 = v3.m128i_i32[0];
    if ( v5.m128i_i64[1] >= v13 )
    {
      do
      {
        v15 = v5.m128i_i64[1] - v13;
        if ( v5.m128i_i64[1] - v13 >= 0x10 )
        {
          v59 = 1;
          LOBYTE(v4) = 59;
          if ( sub_1414A3EA0(v4, v5.m128i_i64[0] + v13, v15) != 1 )
          {
LABEL_24:
            v12 = v14;
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
          v57 = 0;
          v12 = v17;
          v13 = v17;
          goto LABEL_27;
        }
        v13 = v17;
      }
      while ( v5.m128i_i64[1] >= v17 );
      v12 = v14;
      v13 = v17;
    }
    else
    {
      v12 = v14;
    }
LABEL_26:
    v18 = v5.m128i_u64[1];
LABEL_27:
    v59 = 1;
    v3.m128i_i64[0] = sub_14033BC10(v5.m128i_i64[0] + v14, v18 - v14);
    v19 = v3.m128i_i64[1];
    v14 = v12;
    if ( v3.m128i_i64[1] )
    {
      v20 = v3.m128i_i64[0];
      v14 = v12;
      if ( v3.m128i_i64[0] )
      {
        v48 = v3;
        v49 = 0;
        v50 = v3.m128i_i64[1];
        v52 = 1;
        v51 = 0x3D0000003DLL;
        v59 = 1;
        v3.m128i_i64[0] = sub_1407BC790(v43, &v48);
        if ( v43[0] )
        {
          v21 = v45;
          v59 = 1;
          v3.m128i_i64[0] = sub_14033BC10(v20, v44);
          if ( v3.m128i_i64[1] < 0 )
          {
            v42 = 0;
            goto LABEL_61;
          }
          v4 = 1;
          v58 = 1;
          if ( v3.m128i_i64[1] )
          {
            v47 = v21;
            v22 = v3.m128i_u64[1];
            v46 = v3.m128i_i64[0];
            nullsub_1(1);
            v23 = sub_140001650(v22, 1);
            if ( !v23 )
            {
              v58 = v22;
              v42 = 1;
LABEL_61:
              v59 = 1;
              sub_1416C2D4B(v42, v58);
            }
            v58 = v23;
            sub_141684120(v23, v46, v22);
            if ( v22 < 8 )
            {
              v24 = 0;
              v25 = v58;
              goto LABEL_44;
            }
            if ( v22 < 0x20 )
            {
              v24 = 0;
              v25 = v58;
              goto LABEL_41;
            }
            v24 = v22 & 0x7FFFFFFFFFFFFFE0LL;
            v26 = 0;
            v25 = v58;
            do
            {
              v27 = _mm_loadu_si128((const __m128i *)(v25 + v26));
              v28 = _mm_loadu_si128((const __m128i *)(v25 + v26 + 16));
              v29 = _mm_add_epi8(v27, v9);
              v30 = _mm_add_epi8(v28, v9);
              *(__m128i *)(v25 + v26) = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v29, v10), v29), v11),
                                          v27);
              *(__m128i *)(v25 + v26 + 16) = _mm_or_si128(
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v30, v10), v30), v11),
                                               v28);
              v26 += 32;
            }
            while ( v24 != v26 );
            if ( v22 != v24 )
            {
              if ( (v22 & 0x18) != 0 )
              {
LABEL_41:
                v31 = v24;
                v24 = v22 & 0x7FFFFFFFFFFFFFF8LL;
                do
                {
                  v32 = _mm_loadl_epi64((const __m128i *)(v25 + v31));
                  v33 = _mm_add_epi8(v32, si128);
                  *(_QWORD *)(v25 + v31) = _mm_or_si128(
                                             _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v33, v7), v33), v8),
                                             v32).m128i_u64[0];
                  v31 += 8;
                }
                while ( v24 != v31 );
                goto LABEL_45;
              }
              do
              {
LABEL_44:
                *(_BYTE *)(v25 + v24) |= 32 * ((unsigned __int8)(*(_BYTE *)(v25 + v24) - 65) < 0x1Au);
                ++v24;
LABEL_45:
                ;
              }
              while ( v22 != v24 );
            }
            v34 = v19 - v47;
            v54 = v22;
            if ( v22 == 6 )
            {
              v35 = *(_DWORD *)v58 ^ 0x6B636F73;
              v36 = *(unsigned __int16 *)(v58 + 4) ^ 0x3573;
LABEL_54:
              if ( !(v35 | v36) )
              {
                v37 = sub_14033BC10(v20 + v47, v34);
                sub_14075F5D0((unsigned int)&v55, (unsigned int)aSocks5_1, 6, v37, v38);
              }
              goto LABEL_57;
            }
            if ( v22 == 5 )
            {
              if ( !(*(_DWORD *)v58 ^ 0x70747468 | *(unsigned __int8 *)(v58 + 4) ^ 0x73) )
                goto LABEL_56;
              v35 = *(_DWORD *)v58 ^ 0x6B636F73;
              v36 = *(unsigned __int8 *)(v58 + 4) ^ 0x73;
              goto LABEL_54;
            }
            if ( v22 == 4 && *(_DWORD *)v58 == 1886680168 )
            {
LABEL_56:
              v39 = sub_14033BC10(v20 + v47, v34);
              sub_14075F5D0((unsigned int)&v55, (unsigned int)aHttp_0, 4, v39, v40);
            }
LABEL_57:
            v3.m128i_i64[0] = sub_140001660(v58, v54, 1);
          }
        }
        goto LABEL_9;
      }
    }
  }
  v49 = v56;
  v48 = _mm_loadu_si128(&v55);
  v59 = 0;
  return sub_14075F0E0(v53, &v48);
}