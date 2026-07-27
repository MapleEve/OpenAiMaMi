// module: codexmate_lib/core/relay/codex_catalog
// addr: 0x140a4a810
// name: sub_140A4A810
// win 1.2.1 | module src/core/relay/codex_catalog.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140A4A810(__int64 *a1, __int64 a2, __int64 a3)
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
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdi
  bool v31; // zf
  __int64 v32; // r13
  unsigned __int64 v33; // r12
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rbx
  _QWORD v38[7]; // [rsp+20h] [rbp-60h] BYREF
  char v39; // [rsp+58h] [rbp-28h]
  __int16 v40; // [rsp+60h] [rbp-20h]
  unsigned __int64 v41; // [rsp+68h] [rbp-18h]
  __int64 v42; // [rsp+70h] [rbp-10h]
  __int64 v43; // [rsp+78h] [rbp-8h]

  v43 = -2;
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
    goto LABEL_18;
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
  if ( v7 < 8 )
  {
    v12 = 0;
    goto LABEL_33;
  }
  if ( v7 < 0x20 )
  {
    v12 = 0;
    goto LABEL_15;
  }
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
    *(__m128i *)(v11 + v13 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v15), v20), v16), v18);
    v13 += 32;
  }
  while ( v12 != v13 );
  if ( v7 == v12 )
    goto LABEL_18;
  if ( (v7 & 0x18) != 0 )
  {
LABEL_15:
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
    goto LABEL_32;
  }
  do
  {
LABEL_33:
    *(_BYTE *)(v11 + v12) |= 32 * ((unsigned __int8)(*(_BYTE *)(v11 + v12) - 65) < 0x1Au);
    ++v12;
LABEL_32:
    ;
  }
  while ( v7 != v12 );
LABEL_18:
  v38[0] = 0;
  v38[1] = v7;
  v42 = v11;
  v38[2] = v11;
  v38[3] = v7;
  v38[4] = 0;
  v38[5] = v7;
  v38[6] = 0x2F0000002FLL;
  v39 = 1;
  v40 = 1;
  v41 = v7;
  v27 = sub_1409D5E20(v38);
  v30 = v29;
  v31 = v27 == 0;
  v32 = v42;
  if ( !v27 )
    v27 = v42;
  v33 = v41;
  if ( v31 )
    v30 = v41;
  if ( v30 < 0 )
  {
    v34 = 0;
    goto LABEL_24;
  }
  if ( v30 )
  {
    v35 = v27;
    nullsub_1(v28);
    v34 = 1;
    v36 = sub_140001650(v30, 1);
    if ( !v36 )
LABEL_24:
      sub_1416C2D4B(v34, v30);
    v37 = v36;
    sub_141684120(v36, v35, v30);
  }
  else
  {
    v37 = 1;
  }
  *a1 = v30;
  a1[1] = v37;
  a1[2] = v30;
  if ( v33 )
    sub_140001660(v32, v33, 1);
}