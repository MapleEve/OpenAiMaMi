// win 1.2.7 | module src/platform/debug_log.rs | ea 0x14021f090 | name sub_14021F090
// win 1.2.7 | module src/platform/debug_log.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14021F090(_QWORD *a1, const __m128i *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  const __m128i *v11; // rbx
  __m128i *v12; // rax
  __m128i *v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __m128i si128; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __int64 v29; // rax
  int v30; // eax
  _QWORD *v31; // r14
  _QWORD *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r13
  bool v37; // al
  __int64 v38; // rax
  __int64 v39; // rcx
  bool v40; // bl
  const __m128i *v41; // rdx
  __int64 v42; // rbx
  char v43[24]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v44[5]; // [rsp+48h] [rbp-38h] BYREF
  char v45; // [rsp+70h] [rbp-10h]
  unsigned __int64 v46; // [rsp+78h] [rbp-8h]
  __m128i *v47; // [rsp+80h] [rbp+0h]
  __int64 v48; // [rsp+88h] [rbp+8h]

  v48 = -2;
  if ( a3 )
  {
    v3 = a3;
    v6 = sub_140E90FC0(a2, a3);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    if ( !v7 )
      goto LABEL_40;
    v11 = (const __m128i *)v6;
    nullsub_1(v8);
    v10 = 1;
    v12 = (__m128i *)sub_140001650(v9, 1);
    if ( !v12 )
LABEL_4:
      sub_141938D2B(v10, v9);
    v13 = v12;
    sub_1418F44E0(v12, v11, v9);
    if ( v9 < 8 )
    {
      v14 = 0;
      goto LABEL_18;
    }
    if ( v9 >= 0x20 )
    {
      v14 = v9 & 0x7FFFFFFFFFFFFFE0LL;
      v15 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
      v17 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
      v18 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
      do
      {
        v19 = _mm_loadu_si128(&v13[v15 / 0x10]);
        v20 = _mm_loadu_si128(&v13[v15 / 0x10 + 1]);
        v21 = _mm_add_epi8(v19, si128);
        v22 = _mm_add_epi8(v20, si128);
        v13[v15 / 0x10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v17), v21), v18), v19);
        v13[v15 / 0x10 + 1] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v22, v17), v22), v18), v20);
        v15 += 32LL;
      }
      while ( v14 != v15 );
      if ( v9 == v14 )
        goto LABEL_20;
      if ( (v9 & 0x18) == 0 )
      {
        do
        {
LABEL_18:
          v13->m128i_i8[v14] |= 32 * ((unsigned __int8)(v13->m128i_i8[v14] - 65) < 0x1Au);
          ++v14;
LABEL_19:
          ;
        }
        while ( v9 != v14 );
LABEL_20:
        if ( v9 <= 2 )
          goto LABEL_21;
        v30 = 0;
        if ( v9 >= 0xA )
        {
          LOBYTE(v30) = (v13->m128i_i16[0] ^ 0x6B73 | v13->m128i_u8[2] ^ 0x2D) != 0;
          if ( !v30 )
            goto LABEL_27;
        }
        v34 = v11->m128i_u8[2] ^ 0x4Au;
        LOWORD(v34) = v11->m128i_i16[0] ^ 0x7965 | v11->m128i_u8[2] ^ 0x4A;
        if ( !(_WORD)v34 )
        {
          v47 = v13;
          v44[0] = v11;
          v44[1] = v9;
          v44[2] = 0;
          v46 = v9;
          v44[3] = v9;
          v44[4] = 0x2E0000002ELL;
          v45 = 1;
          v35 = 0;
          do
          {
            v36 = v35;
            sub_14028D830(v43, v44);
            v35 = v36 + 1;
          }
          while ( v43[0] );
          v37 = v36 >= 2;
          v9 = v46;
          v13 = v47;
          if ( v37 && v46 >= 0x28 )
          {
LABEL_27:
            sub_140001660(v13, v9, 1);
            v31 = a1 + 2;
            v32 = a1 + 1;
LABEL_48:
            v42 = a1[2];
            if ( (unsigned __int64)(*a1 - v42) <= 9 )
            {
              sub_14190D590((_DWORD)a1, v42, 10, 1, 1);
              v42 = a1[2];
            }
            qmemcpy((void *)(*v32 + v42), "[REDACTED]", 10);
            v3 = 10;
            goto LABEL_51;
          }
        }
        if ( v9 < 0x10 )
        {
LABEL_21:
          v29 = 0;
          while ( v11->m128i_i8[v29] != 64 )
          {
            if ( v9 == ++v29 )
              goto LABEL_39;
          }
          v33 = 0;
          while ( v11->m128i_i8[v33] != 46 )
          {
            if ( v9 == ++v33 )
              goto LABEL_39;
          }
          v40 = 1;
LABEL_46:
          sub_140001660(v13, v9, 1);
          v31 = a1 + 2;
          v32 = a1 + 1;
          if ( v9 >= 5 )
          {
            v41 = a2;
            if ( v40 )
              goto LABEL_48;
LABEL_42:
            v42 = a1[2];
            if ( v3 > *a1 - v42 )
            {
              sub_14190D590((_DWORD)a1, v42, v3, 1, 1);
              v41 = a2;
              v42 = a1[2];
            }
            sub_1418F44E0((__m128i *)(v42 + *v32), v41, v3);
LABEL_51:
            *v31 = v3 + v42;
            return;
          }
LABEL_41:
          v41 = a2;
          goto LABEL_42;
        }
        v47 = v13;
        LOBYTE(v34) = 64;
        v46 = v9;
        v38 = sub_1416B3CF0(v34, v11, v9);
        v9 = v46;
        v13 = v47;
        if ( v38 == 1 )
        {
          LOBYTE(v39) = 46;
          v40 = sub_1416B3CF0(v39, v11, v46) == 1;
          v9 = v46;
          v13 = v47;
          goto LABEL_46;
        }
LABEL_39:
        sub_140001660(v13, v9, 1);
LABEL_40:
        v31 = a1 + 2;
        v32 = a1 + 1;
        goto LABEL_41;
      }
    }
    else
    {
      v14 = 0;
    }
    v23 = v14;
    v14 = v9 & 0x7FFFFFFFFFFFFFF8LL;
    v24 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
    v25 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
    v26 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
    do
    {
      v27 = _mm_loadl_epi64((__m128i *)((char *)v13 + v23));
      v28 = _mm_add_epi8(v27, v24);
      *(__int64 *)((char *)v13->m128i_i64 + v23) = _mm_or_si128(
                                                     _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v28, v25), v28), v26),
                                                     v27).m128i_u64[0];
      v23 += 8;
    }
    while ( v14 != v23 );
    goto LABEL_19;
  }
}
