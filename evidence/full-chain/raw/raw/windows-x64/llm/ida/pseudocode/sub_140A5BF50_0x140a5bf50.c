// module: codexmate_lib/core/voice/llm
// addr: 0x140a5bf50
// name: sub_140A5BF50
// win 1.2.1 | module src/core/voice/llm.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_140A5BF50(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __m128i si128; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  __m128i v20; // xmm6
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __int64 v27; // rcx
  __int64 v28; // r15
  unsigned __int64 v29; // r14
  __int64 v30; // rdi
  char *v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rbx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v42; // [rsp+38h] [rbp-48h] BYREF
  __int64 v43; // [rsp+40h] [rbp-40h]
  __int64 v44; // [rsp+48h] [rbp-38h]
  unsigned __int64 v45; // [rsp+50h] [rbp-30h]
  __int64 v46; // [rsp+58h] [rbp-28h]
  __int64 v47; // [rsp+60h] [rbp-20h]
  __int64 v48; // [rsp+68h] [rbp-18h]

  v48 = -2;
  v4 = sub_14033BC10(a2, a3);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  if ( !v5 )
  {
    v11 = 1;
    goto LABEL_20;
  }
  v9 = v4;
  nullsub_1(v6);
  v8 = 1;
  v10 = sub_140001650(v7, 1);
  if ( !v10 )
LABEL_3:
    sub_1416C2D4B(v8, v7);
  v11 = v10;
  sub_141684120(v10, v9, v7);
  if ( v7 >= 8 )
  {
    if ( v7 >= 0x20 )
    {
      v12 = v7 & 0x7FFFFFFFFFFFFFE0LL;
      v13 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
      v15 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
      v16 = _mm_load_si128((const __m128i *)&xmmword_141742470);
      do
      {
        v17 = _mm_loadu_si128((const __m128i *)(v11 + v13));
        v18 = _mm_loadu_si128((const __m128i *)(v11 + v13 + 16));
        v19 = _mm_add_epi8(v17, si128);
        v20 = _mm_add_epi8(v18, si128);
        *(__m128i *)(v11 + v13) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v15), v19), v16), v17);
        *(__m128i *)(v11 + v13 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v15), v20), v16),
                                         v18);
        v13 += 32;
      }
      while ( v12 != v13 );
      if ( v7 == v12 )
        goto LABEL_20;
      if ( (v7 & 0x18) == 0 )
        goto LABEL_18;
    }
    else
    {
      v12 = 0;
    }
    v21 = v12;
    v12 = v7 & 0x7FFFFFFFFFFFFFF8LL;
    v22 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v23 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v24 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    do
    {
      v25 = _mm_loadl_epi64((const __m128i *)(v11 + v21));
      v26 = _mm_add_epi8(v25, v22);
      *(_QWORD *)(v11 + v21) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v26, v23), v26), v24), v25).m128i_u64[0];
      v21 += 8;
    }
    while ( v12 != v21 );
    goto LABEL_19;
  }
  v12 = 0;
  do
  {
LABEL_18:
    *(_BYTE *)(v11 + v12) |= 32 * ((unsigned __int8)(*(_BYTE *)(v11 + v12) - 65) < 0x1Au);
    ++v12;
LABEL_19:
    ;
  }
  while ( v7 != v12 );
LABEL_20:
  v46 = v11;
  v45 = v7;
  sub_14097E7E0((unsigned int)&v42, v11, v7, 95, 1, 0);
  v28 = v43;
  v29 = v45;
  switch ( v44 )
  {
    case 4LL:
      if ( *(_DWORD *)v43 != 1768778091 )
        goto LABEL_48;
      nullsub_1(v27);
      v30 = 4;
      v31 = (char *)sub_140001650(4, 1);
      if ( !v31 )
      {
        v47 = v28;
        sub_1416C2D4B(1, 4);
      }
      *(_DWORD *)v31 = 1768778091;
      goto LABEL_50;
    case 5LL:
      v40 = *(_DWORD *)v43 ^ 0x7069687A;
      v27 = v40 | *(unsigned __int8 *)(v43 + 4) ^ 0x75u;
      if ( v40 | *(unsigned __int8 *)(v43 + 4) ^ 0x75 )
        goto LABEL_48;
      nullsub_1(v27);
      v30 = 5;
      v31 = (char *)sub_140001650(5, 1);
      if ( !v31 )
      {
        v47 = v28;
        sub_1416C2D4B(1, 5);
      }
      v31[4] = 117;
      *(_DWORD *)v31 = 1885956218;
      goto LABEL_50;
    case 6LL:
      v32 = *(_DWORD *)v43 ^ 0x62756F64;
      if ( v32 | *(unsigned __int16 *)(v43 + 4) ^ 0x6F61 )
      {
        v33 = *(_DWORD *)v43 ^ 0x6E65706F;
        v34 = v46;
        if ( v33 | *(unsigned __int16 *)(v43 + 4) ^ 0x6961 )
        {
          v35 = *(_DWORD *)v43 ^ 0x696D6567;
          if ( v35 | *(unsigned __int16 *)(v43 + 4) ^ 0x696E )
          {
            v36 = *(_DWORD *)v43 ^ 0x75616C63;
            if ( v36 | *(unsigned __int16 *)(v43 + 4) ^ 0x6564 )
            {
              v37 = *(_DWORD *)v43 ^ 0x616C6C6F;
              if ( v37 | *(unsigned __int16 *)(v43 + 4) ^ 0x616D )
              {
                v38 = *(_DWORD *)v43 ^ 0x74737563;
                v27 = v38 | *(unsigned __int16 *)(v43 + 4) ^ 0x6D6Fu;
                if ( v38 | *(unsigned __int16 *)(v43 + 4) ^ 0x6D6F )
                {
LABEL_48:
                  nullsub_1(v27);
                  v30 = 6;
                  v31 = (char *)sub_140001650(6, 1);
                  if ( !v31 )
                  {
                    v47 = v28;
                    sub_1416C2D4B(1, 6);
                  }
                  *((_WORD *)v31 + 2) = 28513;
                  *(_DWORD *)v31 = 1651863396;
                }
                else
                {
                  nullsub_1(v27);
                  v30 = 6;
                  v31 = (char *)sub_140001650(6, 1);
                  if ( !v31 )
                  {
                    v47 = v28;
                    sub_1416C2D4B(1, 6);
                  }
                  *((_WORD *)v31 + 2) = 28015;
                  *(_DWORD *)v31 = 1953723747;
                }
LABEL_50:
                v34 = v46;
              }
              else
              {
                nullsub_1(v37 | *(unsigned __int16 *)(v43 + 4) ^ 0x616Du);
                v30 = 6;
                v31 = (char *)sub_140001650(6, 1);
                if ( !v31 )
                {
                  v47 = v28;
                  sub_1416C2D4B(1, 6);
                }
                *((_WORD *)v31 + 2) = 24941;
                *(_DWORD *)v31 = 1634495599;
              }
            }
            else
            {
              nullsub_1(v36 | *(unsigned __int16 *)(v43 + 4) ^ 0x6564u);
              v30 = 6;
              v31 = (char *)sub_140001650(6, 1);
              if ( !v31 )
              {
                v47 = v28;
                sub_1416C2D4B(1, 6);
              }
              *((_WORD *)v31 + 2) = 25956;
              *(_DWORD *)v31 = 1969319011;
            }
          }
          else
          {
            nullsub_1(v35 | *(unsigned __int16 *)(v43 + 4) ^ 0x696Eu);
            v30 = 6;
            v31 = (char *)sub_140001650(6, 1);
            if ( !v31 )
            {
              v47 = v28;
              sub_1416C2D4B(1, 6);
            }
            *((_WORD *)v31 + 2) = 26990;
            *(_DWORD *)v31 = 1768777063;
          }
        }
        else
        {
          nullsub_1(v33 | *(unsigned __int16 *)(v43 + 4) ^ 0x6961u);
          v30 = 6;
          v31 = (char *)sub_140001650(6, 1);
          if ( !v31 )
          {
            v47 = v28;
            sub_1416C2D4B(1, 6);
          }
          *((_WORD *)v31 + 2) = 26977;
          *(_DWORD *)v31 = 1852141679;
        }
      }
      else
      {
        nullsub_1(v32 | *(unsigned __int16 *)(v43 + 4) ^ 0x6F61u);
        v30 = 6;
        v31 = (char *)sub_140001650(6, 1);
        v34 = v46;
        if ( !v31 )
        {
          v47 = v28;
          sub_1416C2D4B(1, 6);
        }
        *((_WORD *)v31 + 2) = 28513;
        *(_DWORD *)v31 = 1651863396;
      }
      *a1 = v30;
      a1[1] = (__int64)v31;
      a1[2] = v30;
      if ( v42 )
        sub_140001660(v28, v42, 1);
      if ( v29 )
        sub_140001660(v34, v29, 1);
      return a1;
    case 7LL:
      v39 = *(_DWORD *)v43 ^ 0x6C696162;
      v27 = v39 | *(_DWORD *)(v43 + 3) ^ 0x6E61696Cu;
      if ( v39 | *(_DWORD *)(v43 + 3) ^ 0x6E61696C )
        goto LABEL_48;
      nullsub_1(v27);
      v30 = 7;
      v31 = (char *)sub_140001650(7, 1);
      if ( !v31 )
      {
        v47 = v28;
        sub_1416C2D4B(1, 7);
      }
      *(_DWORD *)(v31 + 3) = 1851877740;
      *(_DWORD *)v31 = 1818845538;
      goto LABEL_50;
    case 8LL:
      if ( *(_QWORD *)v43 != 0x6B65657370656564LL )
        goto LABEL_48;
      nullsub_1(v27);
      v30 = 8;
      v31 = (char *)sub_140001650(8, 1);
      if ( !v31 )
      {
        v47 = v28;
        sub_1416C2D4B(1, 8);
      }
      *(_QWORD *)v31 = 0x6B65657370656564LL;
      goto LABEL_50;
    case 9LL:
      v27 = *(_QWORD *)v43 ^ 0x6378616D696E696DLL | *(unsigned __int8 *)(v43 + 8) ^ 0x6ELL;
      if ( v27 )
        goto LABEL_48;
      nullsub_1(0);
      v30 = 9;
      v31 = (char *)sub_140001650(9, 1);
      if ( !v31 )
      {
        v47 = v28;
        sub_1416C2D4B(1, 9);
      }
      *(_QWORD *)v31 = 0x6378616D696E696DLL;
      v31[8] = 110;
      goto LABEL_50;
    case 10LL:
      v27 = *(_QWORD *)v43 ^ 0x74756F726E65706FLL | *(unsigned __int16 *)(v43 + 8) ^ 0x7265LL;
      if ( v27 )
        goto LABEL_48;
      nullsub_1(0);
      v30 = 10;
      v31 = (char *)sub_140001650(10, 1);
      if ( !v31 )
      {
        v47 = v28;
        sub_1416C2D4B(1, 10);
      }
      qmemcpy(v31, "openrouter", 10);
      goto LABEL_50;
    case 11LL:
      v27 = *(_QWORD *)v43 ^ 0x6978616D696E696DLL | *(_QWORD *)(v43 + 3) ^ 0x6C746E6978616D69LL;
      if ( v27 )
        goto LABEL_48;
      nullsub_1(0);
      v30 = 11;
      v31 = (char *)sub_140001650(11, 1);
      if ( !v31 )
      {
        v47 = v28;
        sub_1416C2D4B(1, 11);
      }
      qmemcpy(v31, "minimaxintl", 11);
      goto LABEL_50;
    default:
      goto LABEL_48;
  }
}