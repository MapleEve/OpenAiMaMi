// win 1.2.7 | module src/core/relay/translator/anthropic_tools.rs | ea 0x1402b95d0 | name sub_1402B95D0
// win 1.2.7 | module src/core/relay/translator/anthropic_tools.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_1402B95D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // r12
  bool v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbx
  const __m128i *v21; // rdx
  __m128i si128; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm3
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __int64 v30; // r14
  __m128i *v31; // rax
  _OWORD v32[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+60h] [rbp-20h]
  unsigned __int64 v34; // [rsp+68h] [rbp-18h]
  __m128i v35; // [rsp+70h] [rbp-10h] BYREF
  __int64 v36; // [rsp+80h] [rbp+0h]
  __int64 v37; // [rsp+88h] [rbp+8h]
  __int128 v38; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v39[11]; // [rsp+A0h] [rbp+20h] BYREF
  char v40; // [rsp+F8h] [rbp+78h]
  int v41; // [rsp+F9h] [rbp+79h]
  __int16 v42; // [rsp+FDh] [rbp+7Dh]
  char v43; // [rsp+FFh] [rbp+7Fh]
  __int64 v44; // [rsp+108h] [rbp+88h]
  __m128i v45; // [rsp+110h] [rbp+90h] BYREF
  __m128i v46; // [rsp+120h] [rbp+A0h] BYREF
  _OWORD v47[4]; // [rsp+130h] [rbp+B0h] BYREF
  unsigned __int64 v48; // [rsp+170h] [rbp+F0h]
  char v49; // [rsp+178h] [rbp+F8h]
  int v50; // [rsp+179h] [rbp+F9h]
  __int16 v51; // [rsp+17Dh] [rbp+FDh]
  char v52; // [rsp+17Fh] [rbp+FFh]
  __int64 v53; // [rsp+180h] [rbp+100h]
  __m128i v54; // [rsp+188h] [rbp+108h]
  __int64 v55; // [rsp+1A0h] [rbp+120h]

  v55 = -2;
  if ( a2 && (v8 = a3, v9 = 0, a3) )
  {
    v10 = a2;
    if ( a3 != 9 )
    {
LABEL_20:
      v53 = a1;
      goto LABEL_21;
    }
    v11 = _byteswap_uint64(*(_QWORD *)a2);
    if ( v11 == 0x66756E6374696F6ELL )
      v12 = *(unsigned __int8 *)(a2 + 8) - 115;
    else
      v12 = 2 * (v11 >= 0x66756E6374696F6ELL) - 1;
    if ( !v12 )
      v10 = 0;
  }
  else
  {
    v10 = 0;
  }
  v9 = v10 == 0;
  v8 = 9;
  if ( a5 > 0x40 || v10 )
    goto LABEL_20;
  if ( !a5 )
  {
    v30 = 1;
LABEL_64:
    *(_QWORD *)a1 = a5;
    *(_QWORD *)(a1 + 8) = v30;
    *(_QWORD *)(a1 + 16) = a5;
    return;
  }
  v13 = 0;
  v53 = a1;
  do
  {
    v14 = *(unsigned __int8 *)(a4 + v13);
    if ( (unsigned __int8)(v14 - 48) >= 0xAu && (unsigned __int8)((v14 & 0xDF) - 65) >= 0x1Au && v14 != 95 && v14 != 45 )
      goto LABEL_59;
    ++v13;
  }
  while ( a5 != v13 );
  if ( a5 < 0xC || *(_QWORD *)a4 ^ 0x745F696D616D6961LL | *(unsigned int *)(a4 + 8) ^ 0x5F6C6F6FLL )
  {
    if ( a5 == 10 )
    {
      a1 = *(_QWORD *)a4 ^ 0x726165735F626577LL;
      if ( a1 | *(unsigned __int16 *)(a4 + 8) ^ 0x6863LL )
      {
LABEL_62:
        nullsub_1(a1);
        v31 = (__m128i *)sub_140001650(a5, 1);
        if ( !v31 )
          sub_141938D2B(1, a5);
        v30 = (__int64)v31;
        sub_1418F44E0(v31, (const __m128i *)a4, a5);
        a1 = v53;
        goto LABEL_64;
      }
      v9 = 1;
      if ( a7 != 10 )
        goto LABEL_60;
      v26 = *(_QWORD *)a6 ^ 0x726165735F626577LL;
      v27 = *(unsigned __int16 *)(a6 + 8) ^ 0x6863LL;
      goto LABEL_68;
    }
    if ( a5 != 11 )
      goto LABEL_62;
    a1 = 0x6863726165735F6CLL;
    if ( *(_QWORD *)a4 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)(a4 + 3) ^ 0x6863726165735F6CLL )
      goto LABEL_62;
    v9 = 1;
    if ( a7 == 11 )
    {
      v26 = *(_QWORD *)a6 ^ 0x6165735F6C6F6F74LL;
      v27 = *(_QWORD *)(a6 + 3) ^ 0x6863726165735F6CLL;
LABEL_68:
      a1 = v26 | v27;
      if ( !a1 )
        goto LABEL_62;
    }
  }
  else
  {
LABEL_59:
    v9 = 1;
  }
LABEL_60:
  v10 = 0;
LABEL_21:
  nullsub_1(a1);
  v15 = sub_140001650(128, 1);
  if ( !v15 )
    sub_141938D2B(1, 128);
  v45.m128i_i64[0] = 128;
  v45.m128i_i64[1] = v15;
  *(_QWORD *)&v38 = &v45;
  *(_BYTE *)v15 = 91;
  v46.m128i_i64[0] = 1;
  if ( v9 )
  {
    *(_DWORD *)(v15 + 1) = 1819047278;
    v16 = 5;
  }
  else
  {
    v17 = sub_140BAD6C0(&v38, (char *)&v38 + 8, v10, v8);
    if ( v17 )
    {
LABEL_70:
      v54.m128i_i64[1] = sub_141934C60(v17);
      if ( v45.m128i_i64[0] )
        sub_140001660(v45.m128i_i64[1], v45.m128i_i64[0], 1);
LABEL_72:
      v45.m128i_i64[0] = v54.m128i_i64[1];
      sub_141939040(
        (unsigned int)"string tuple serializes",
        23,
        (unsigned int)&v45,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E6ED8);
    }
    v16 = v46.m128i_i64[0];
    if ( v45.m128i_i64[0] == v46.m128i_i64[0] )
    {
      sub_14190D590((unsigned int)&v45, v45.m128i_i32[0], 1, 1, 1);
      v16 = v46.m128i_i64[0];
    }
  }
  *(_BYTE *)(v45.m128i_i64[1] + v16) = 44;
  v46.m128i_i64[0] = v16 + 1;
  v17 = sub_140BAD6C0(&v38, (char *)&v38 + 8, a4, a5);
  if ( v17 )
    goto LABEL_70;
  v18 = v46.m128i_i64[0];
  if ( v45.m128i_i64[0] == v46.m128i_i64[0] )
  {
    sub_14190D590((unsigned int)&v45, v46.m128i_i32[0], 1, 1, 1);
    v18 = v46.m128i_i64[0];
  }
  *(_BYTE *)(v45.m128i_i64[1] + v18) = 44;
  v46.m128i_i64[0] = v18 + 1;
  v17 = sub_140BAD6C0(&v38, (char *)&v38 + 8, a6, a7);
  if ( v17 )
    goto LABEL_70;
  v19 = v46.m128i_i64[0];
  if ( v45.m128i_i64[0] == v46.m128i_i64[0] )
  {
    sub_14190D590((unsigned int)&v45, v46.m128i_i32[0], 1, 1, 1);
    v19 = v46.m128i_i64[0];
  }
  *(_BYTE *)(v45.m128i_i64[1] + v19) = 93;
  v54 = v45;
  if ( v45.m128i_i64[0] == -1 )
    goto LABEL_72;
  *(_QWORD *)&v38 = 0;
  *((_QWORD *)&v38 + 1) = 1;
  v39[0] = 0;
  v45.m128i_i64[0] = a4;
  v45.m128i_i64[1] = a4 + a5;
  v46.m128i_i64[0] = 18;
  sub_1402A5F70(&v45, &v38);
  v20 = v19 + 1;
  v35 = (__m128i)v38;
  v36 = v39[0];
  v40 = 0;
  v38 = xmmword_1419EB5B0;
  *(__m128i *)v39 = _mm_loadu_si128((const __m128i *)&xmmword_1419EB5C0);
  memset(&v39[2], 0, 72);
  if ( v19 >= 0x3F )
  {
    v39[2] = v20 >> 6;
    sub_14140F460(&v38, v54.m128i_i64[1], v20 >> 6);
    v21 = (const __m128i *)(v54.m128i_i64[1] + (v20 & 0x7FFFFFFFFFFFFFC0LL));
    v20 &= 0x3Fu;
  }
  else
  {
    v21 = (const __m128i *)v54.m128i_i64[1];
  }
  sub_1418F44E0((__m128i *)&v39[3], v21, v20);
  v40 = v20;
  v48 = v39[10];
  v49 = v20;
  v50 = v41;
  v51 = v42;
  v52 = v43;
  si128 = _mm_load_si128((const __m128i *)&v38);
  v23 = _mm_load_si128((const __m128i *)v39);
  v24 = _mm_load_si128((const __m128i *)&v39[4]);
  v47[0] = *(_OWORD *)&v39[2];
  v47[3] = *(_OWORD *)&v39[8];
  v47[2] = _mm_load_si128((const __m128i *)&v39[6]);
  v47[1] = v24;
  v46 = v23;
  v45 = si128;
  v25 = _byteswap_uint64((v39[2] << 9) | (8 * (unsigned int)(unsigned __int8)v20));
  *((_BYTE *)v47 + (unsigned __int8)v20 + 8) = 0x80;
  if ( (unsigned __int8)v20 == 63
    || (sub_1418F4C70((char *)v47 + (unsigned __int8)v20 + 9, 0, (unsigned __int8)v20 ^ 0x3FLL),
        ((unsigned __int8)v20 ^ 0x38u) <= 7) )
  {
    sub_14140F460(&v45, (char *)v47 + 8, 1);
    memset(v32, 0, sizeof(v32));
    v33 = 0;
    v34 = v25;
    sub_14140F460(&v45, v32, 1);
  }
  else
  {
    v48 = v25;
    sub_14140F460(&v45, (char *)v47 + 8, 1);
  }
  v28 = _mm_load_si128(&v45);
  v29 = _mm_load_si128(&v46);
  v45 = _mm_packus_epi16(
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v28, (__m128i)0LL), 27), 27),
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v28, (__m128i)0LL), 27), 27));
  v46 = _mm_packus_epi16(
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v29, (__m128i)0LL), 27), 27),
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v29, (__m128i)0LL), 27), 27));
  if ( v54.m128i_i64[0] )
    sub_140001660(v54.m128i_i64[1], v54.m128i_i64[0], 1);
  *(_QWORD *)&v32[0] = &v45;
  *((_QWORD *)&v32[0] + 1) = sub_140364610;
  sub_1416ABFD0(&v38, &unk_1419E6EF0, v32);
  v37 = *((_QWORD *)&v38 + 1);
  v44 = v38;
  if ( v39[0] <= 0x20u )
  {
    if ( v39[0] != 32 )
LABEL_52:
      sub_141938F40(DWORD2(v38), v39[0], 0, 32, (__int64)&off_1419E6EF8);
  }
  else if ( *(char *)(*((_QWORD *)&v38 + 1) + 32LL) <= -65 )
  {
    goto LABEL_52;
  }
  *(_QWORD *)&v38 = *((_QWORD *)&v38 + 1);
  *((_QWORD *)&v38 + 1) = 32;
  v45.m128i_i64[0] = (__int64)&v35;
  v45.m128i_i64[1] = (__int64)sub_1400015F0;
  v46.m128i_i64[0] = (__int64)&v38;
  v46.m128i_i64[1] = (__int64)sub_140186EE0;
  sub_1416ABFD0(v53, &unk_1419E6F10, &v45);
  if ( v44 )
    sub_140001660(v37, v44, 1);
  if ( v35.m128i_i64[0] )
    sub_140001660(v35.m128i_i64[1], v35.m128i_i64[0], 1);
}
