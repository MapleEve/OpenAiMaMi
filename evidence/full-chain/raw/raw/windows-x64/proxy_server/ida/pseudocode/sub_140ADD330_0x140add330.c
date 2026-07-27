// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140add330
// name: sub_140ADD330
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140ADD330(_QWORD *a1, __int64 a2, __int64 a3)
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
  unsigned __int64 v28; // rdx
  bool v29; // di
  _QWORD v31[7]; // [rsp+20h] [rbp-60h] BYREF
  char v32; // [rsp+58h] [rbp-28h]
  __int16 v33; // [rsp+60h] [rbp-20h]
  unsigned __int64 v34; // [rsp+68h] [rbp-18h]
  __int64 v35; // [rsp+70h] [rbp-10h]
  __int64 v36; // [rsp+78h] [rbp-8h]

  v36 = -2;
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
    goto LABEL_44;
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
    goto LABEL_43;
  }
  do
  {
LABEL_44:
    *(_BYTE *)(v11 + v12) |= 32 * ((unsigned __int8)(*(_BYTE *)(v11 + v12) - 65) < 0x1Au);
    ++v12;
LABEL_43:
    ;
  }
  while ( v7 != v12 );
LABEL_18:
  v35 = v11;
  v31[0] = 0;
  v31[1] = v7;
  v31[2] = v11;
  v31[3] = v7;
  v31[4] = 0;
  v31[5] = v7;
  v31[6] = 0x2F0000002FLL;
  v32 = 1;
  v33 = 1;
  v34 = v7;
  v27 = sub_140AD0C80(v31);
  if ( !v27 )
  {
    v27 = v35;
    v28 = v34;
  }
  switch ( __ROR8__(v28 - 7, 1) )
  {
    case 0LL:
      if ( *(_DWORD *)v27 ^ 0x2D6D6C67 | *(_DWORD *)(v27 + 3) ^ 0x312E352D
        && *(_DWORD *)v27 ^ 0x2D6D6C67 | *(_DWORD *)(v27 + 3) ^ 0x322E352D )
      {
        goto LABEL_31;
      }
      goto LABEL_40;
    case 3LL:
      if ( !(*(_QWORD *)v27 ^ 0x6B65657370656564LL | *(_QWORD *)(v27 + 5) ^ 0x746168632D6B6565LL)
        || !(*(_QWORD *)v27 ^ 0x2E32762D6F6D696DLL | *(_QWORD *)(v27 + 5) ^ 0x6F72702D352E3276LL) )
      {
        goto LABEL_40;
      }
      goto LABEL_31;
    case 4LL:
      if ( !(*(_QWORD *)v27 ^ 0x6B65657370656564LL | *(_QWORD *)(v27 + 7) ^ 0x6F72702D34762D6BLL) )
        goto LABEL_40;
      goto LABEL_31;
    case 5LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v27 + 16)), (__m128i)xmmword_1416C6B80),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v27), (__m128i)xmmword_1417AB770))) != 0xFFFF
        && _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v27 + 16)), (__m128i)xmmword_1416C6490),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v27), (__m128i)xmmword_1417AB780))) != 0xFFFF )
      {
        goto LABEL_31;
      }
      goto LABEL_40;
    default:
LABEL_31:
      if ( v28 >= 0xC )
      {
        if ( !(*(_QWORD *)v27 ^ 0x2D78616D696E696DLL | *(unsigned int *)(v27 + 8) ^ 0x372E326DLL) )
        {
LABEL_40:
          if ( v34 )
            sub_140001660(v35, v34, 1);
          return replace_image_blocks_0(a1);
        }
      }
      else if ( v28 != 11 )
      {
        v29 = 0;
        if ( !v34 )
          goto LABEL_38;
        goto LABEL_37;
      }
      v29 = (*(_QWORD *)v27 ^ 0x6F632D336E657771LL | *(_QWORD *)(v27 + 3) ^ 0x7265646F632D336ELL) == 0;
      if ( !v34 )
        goto LABEL_38;
LABEL_37:
      sub_140001660(v35, v34, 1);
LABEL_38:
      if ( !v29 )
        return 0;
      return replace_image_blocks_0(a1);
  }
}