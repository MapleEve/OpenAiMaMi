// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1401f5f00 | name sub_1401F5F00
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1401F5F00(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int128 v9; // rdi
  __int64 v11; // r14
  char *v12; // r13
  unsigned __int64 v13; // r12
  const char *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned int v18; // r14d
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned __int64 v21; // rcx
  __int64 v22; // rbx
  __m128i *v23; // rax
  __m128i *v24; // rax
  __m128i *v25; // rsi
  __int64 v26; // rcx
  __m128i *v27; // rax
  __int64 v28; // rdi
  __m128i *v29; // rsi
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm1
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __m128i v43; // xmm0
  char v44; // al
  int v45; // eax
  __int128 v46; // [rsp+28h] [rbp-58h]
  __int128 v47; // [rsp+38h] [rbp-48h]
  __int128 v48; // [rsp+48h] [rbp-38h]
  __int128 v49; // [rsp+58h] [rbp-28h]
  const __m128i *v50; // [rsp+68h] [rbp-18h]
  const __m128i *v51; // [rsp+70h] [rbp-10h]
  __int64 v52; // [rsp+78h] [rbp-8h]
  __m128i v53; // [rsp+80h] [rbp+0h] BYREF
  __int128 v54; // [rsp+90h] [rbp+10h]
  __m128i v55; // [rsp+A0h] [rbp+20h]
  __int128 v56; // [rsp+B0h] [rbp+30h]
  __int64 v57; // [rsp+C0h] [rbp+40h]
  int v58; // [rsp+C8h] [rbp+48h]
  char v59; // [rsp+CFh] [rbp+4Fh]
  __int64 v60; // [rsp+D0h] [rbp+50h]

  v60 = -2;
  *((_QWORD *)&v9 + 1) = a3;
  switch ( a6 )
  {
    case 7LL:
      if ( *(_DWORD *)a5 ^ 0x7373656D | *(_DWORD *)(a5 + 3) ^ 0x65676173 )
        goto LABEL_12;
      v11 = 7;
      v12 = "messagecontenttext";
      break;
    case 9LL:
      if ( *(_QWORD *)a5 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(a5 + 8) ^ 0x67LL )
        goto LABEL_12;
      v11 = 9;
      v12 = aReasoning;
      break;
    case 13LL:
      if ( *(_QWORD *)a5 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(a5 + 5) ^ 0x6C6C61635F6E6F69LL )
        goto LABEL_12;
      v11 = 8;
      v12 = &aAllUsageactive[58];
      break;
    case 15LL:
      if ( *(_QWORD *)a5 ^ 0x726165735F626577LL | *(_QWORD *)(a5 + 7) ^ 0x6C6C61635F686372LL )
        goto LABEL_12;
      v11 = 10;
      v12 = (char *)&unk_1419D7CCA;
      break;
    case 16LL:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a5), (__m128i)xmmword_14193C200)) == 0xFFFF )
      {
        v11 = 6;
        v12 = &aAllUsageactive[66];
      }
      else
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a5), (__m128i)xmmword_14193C210)) != 0xFFFF )
          goto LABEL_12;
        v11 = 11;
        v12 = (char *)&unk_1419DB330;
      }
      break;
    default:
LABEL_12:
      v11 = 7;
      v12 = (char *)&unk_1419D6665;
      break;
  }
  v13 = 4;
  v14 = aNone;
  if ( a7 )
  {
    if ( a8 == 12 )
    {
      v15 = *(_QWORD *)a7 ^ 0x6E615F6C616E6966LL;
      v14 = aNone;
      if ( !(v15 | *(unsigned int *)(a7 + 8) ^ 0x72657773LL) )
        v14 = (const char *)&unk_1419DB345;
      v13 = ((v15 | *(unsigned int *)(a7 + 8) ^ 0x72657773LL) == 0) | 4LL;
    }
    else if ( a8 == 10 )
    {
      v14 = aNone;
      if ( !(*(_QWORD *)a7 ^ 0x61746E656D6D6F63LL | *(unsigned __int16 *)(a7 + 8) ^ 0x7972LL) )
      {
        v14 = (const char *)&unk_1419DB33B;
        v13 = 10;
      }
    }
  }
  v50 = (const __m128i *)v14;
  *(_QWORD *)&v9 = *a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v9 + 56), 1, 0) )
    sub_141937480((volatile void *)(v9 + 56));
  if ( 2 * *off_1421E7210 )
  {
    v45 = sub_141938160(a1);
    LOBYTE(v45) = v45 ^ 1;
    v58 = v45;
  }
  else
  {
    v58 = 0;
  }
  nullsub_1(a1);
  v16 = sub_140001650(160, 8);
  v57 = v9;
  if ( !v16 )
    sub_141938D11(8, 160);
  v52 = v16;
  v51 = (const __m128i *)v12;
  v17 = v11;
  v18 = a4;
  v19 = sub_14167FD50(v9 + 40);
  v21 = 1000 * v19 + v20 / 0xF4240uLL;
  v22 = 0;
  LOBYTE(v46) = 2;
  *((_QWORD *)&v46 + 1) = 0;
  *(_QWORD *)&v47 = v21 | -(__int64)((0x3E8 * (unsigned __int128)(unsigned __int64)v19 + v20 / 0xF4240uLL) >> 64 != 0);
  if ( v9 < 0 )
LABEL_28:
    sub_141938D2B(v22, *((_QWORD *)&v9 + 1));
  if ( *((_QWORD *)&v9 + 1) )
  {
    nullsub_1(v21);
    v22 = 1;
    v23 = (__m128i *)sub_140001650(*((_QWORD *)&v9 + 1), 1);
    if ( !v23 )
      goto LABEL_28;
    *(_QWORD *)&v9 = v23;
    sub_1418F44E0(v23, a2, *((unsigned __int64 *)&v9 + 1));
  }
  else
  {
    *(_QWORD *)&v9 = 1;
  }
  LOBYTE(v48) = 3;
  *((_QWORD *)&v48 + 1) = *((_QWORD *)&v9 + 1);
  v49 = v9;
  v55.m128i_i8[0] = 2;
  v55.m128i_i64[1] = 0;
  *(_QWORD *)&v56 = v18;
  nullsub_1(v21);
  v24 = (__m128i *)sub_140001650(v17, 1);
  if ( !v24 )
    sub_141938D2B(1, v17);
  v25 = v24;
  sub_1418F44E0(v24, v51, v17);
  v53.m128i_i8[0] = 3;
  v53.m128i_i64[1] = v17;
  *(_QWORD *)&v54 = v25;
  *((_QWORD *)&v54 + 1) = v17;
  nullsub_1(v26);
  v27 = (__m128i *)sub_140001650(v13, 1);
  v28 = v57;
  if ( !v27 )
    sub_141938D2B(1, v13);
  v29 = v27;
  sub_1418F44E0(v27, v50, v13);
  *(_BYTE *)(v52 + 128) = 3;
  *(_QWORD *)(v52 + 136) = v13;
  *(_QWORD *)(v52 + 144) = v29;
  *(_QWORD *)(v52 + 152) = v13;
  *(_OWORD *)(v52 + 16) = v47;
  *(_OWORD *)v52 = v46;
  *(_OWORD *)(v52 + 48) = v49;
  *(_OWORD *)(v52 + 32) = v48;
  v30 = v55;
  *(_OWORD *)(v52 + 80) = v56;
  *(__m128i *)(v52 + 64) = v30;
  v31 = _mm_loadu_si128(&v53);
  *(_OWORD *)(v52 + 112) = v54;
  *(__m128i *)(v52 + 96) = v31;
  v55.m128i_i64[1] = 5;
  *(_QWORD *)&v56 = v52;
  *((_QWORD *)&v56 + 1) = 5;
  v55.m128i_i8[0] = 4;
  v32 = *(_QWORD *)(v28 + 168);
  if ( v32 == 12 )
  {
    v33 = *(_QWORD *)(v28 + 160);
    v34 = 0;
    if ( (unsigned __int64)(v33 + 1) >= *(_QWORD *)(v28 + 144) )
      v34 = *(_QWORD *)(v28 + 144);
    v35 = *(_QWORD *)(v28 + 152);
    *(_QWORD *)(v28 + 160) = v33 - v34 + 1;
    *(_QWORD *)(v28 + 168) = 11;
    v36 = 32 * v33;
    v37 = *(_OWORD *)(v35 + v36 + 16);
    v53 = _mm_loadu_si128((const __m128i *)(v35 + v36));
    v54 = v37;
    if ( v53.m128i_i8[0] == -1 )
    {
      v32 = 11;
    }
    else
    {
      v59 = 1;
      sub_14002F9D0(&v53);
      v28 = v57;
      v32 = *(_QWORD *)(v57 + 168);
    }
  }
  v54 = v56;
  v53 = v55;
  v38 = *(_QWORD *)(v28 + 144);
  if ( v32 == v38 )
  {
    sub_14016DCC0();
    v28 = v57;
    v38 = *(_QWORD *)(v57 + 144);
    v32 = *(_QWORD *)(v57 + 168);
  }
  *(_QWORD *)(v28 + 168) = v32 + 1;
  v39 = *(_QWORD *)(v28 + 160) + v32;
  v40 = 0;
  if ( v39 >= v38 )
    v40 = v38;
  v41 = v39 - v40;
  v42 = *(_QWORD *)(v28 + 152);
  v41 *= 32LL;
  v43 = v55;
  *(_OWORD *)(v42 + v41 + 16) = v56;
  *(__m128i *)(v42 + v41) = v43;
  if ( !(_BYTE)v58 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v42) )
    *(_BYTE *)(v28 + 57) = 1;
  v44 = *(_BYTE *)(v28 + 56);
  *(_BYTE *)(v28 + 56) = 0;
  if ( v44 == 2 )
    WakeByAddressSingle((PVOID)(v28 + 56));
}
