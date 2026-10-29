// win 1.2.7 | module src/core/relay/native_catalog.rs | ea 0x140db7c10 | name sub_140DB7C10
// win 1.2.7 | module src/core/relay/native_catalog.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DB7C10(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  const __m128i *v9; // rdx
  unsigned __int64 v10; // rdi
  __m128i si128; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm3
  unsigned __int64 v14; // rbx
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v20; // rsi
  _OWORD v21[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h]
  unsigned __int64 v23; // [rsp+78h] [rbp-8h]
  __int128 v24; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v25[11]; // [rsp+90h] [rbp+10h] BYREF
  char v26; // [rsp+E8h] [rbp+68h]
  int v27; // [rsp+E9h] [rbp+69h]
  __int16 v28; // [rsp+EDh] [rbp+6Dh]
  char v29; // [rsp+EFh] [rbp+6Fh]
  __int64 v30; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v31; // [rsp+100h] [rbp+80h]
  unsigned __int64 v32; // [rsp+108h] [rbp+88h]
  __m128i v33; // [rsp+110h] [rbp+90h] BYREF
  __m128i v34; // [rsp+120h] [rbp+A0h] BYREF
  _OWORD v35[4]; // [rsp+130h] [rbp+B0h] BYREF
  unsigned __int64 v36; // [rsp+170h] [rbp+F0h]
  char v37; // [rsp+178h] [rbp+F8h]
  int v38; // [rsp+179h] [rbp+F9h]
  __int16 v39; // [rsp+17Dh] [rbp+FDh]
  char v40; // [rsp+17Fh] [rbp+FFh]
  __int64 v41; // [rsp+188h] [rbp+108h]
  __m128i v42; // [rsp+190h] [rbp+110h]
  __int64 v43; // [rsp+1A0h] [rbp+120h]

  v43 = -2;
  sub_1410125F0((unsigned int)&v30, a2, a3, a4, a5, 8, 0);
  nullsub_1(v6);
  v7 = sub_140001650(128, 1);
  if ( !v7 )
    sub_141938D2B(1, 128);
  v33.m128i_i64[0] = 128;
  v33.m128i_i64[1] = v7;
  v34.m128i_i64[0] = 0;
  *(_QWORD *)&v24 = &v33;
  v8 = sub_140C12CE0(&v24, &v30);
  if ( v8 )
  {
    v20 = v8;
    if ( v33.m128i_i64[0] )
      sub_140001660(v33.m128i_i64[1], v33.m128i_i64[0], 1);
LABEL_21:
    v33.m128i_i64[0] = v20;
    sub_141939040(
      (unsigned int)aJsonValuesSeri,
      21,
      (unsigned int)&v33,
      (unsigned int)&off_141A498A8,
      (__int64)&off_141A4E040);
  }
  v9 = (const __m128i *)v33.m128i_i64[1];
  if ( v33.m128i_i64[0] == -1 )
  {
    v20 = v33.m128i_i64[1];
    goto LABEL_21;
  }
  v42 = v33;
  v10 = v34.m128i_i64[0];
  v26 = 0;
  v24 = xmmword_141A4EB28;
  *(__m128i *)v25 = _mm_loadu_si128((const __m128i *)&xmmword_141A4EB38);
  memset(&v25[2], 0, 72);
  if ( v34.m128i_i64[0] >= 0x40uLL )
  {
    v25[2] = (unsigned __int64)v34.m128i_i64[0] >> 6;
    sub_14140F460(&v24, v33.m128i_i64[1], (unsigned __int64)v34.m128i_i64[0] >> 6);
    v9 = (const __m128i *)(v42.m128i_i64[1] + (v10 & 0x7FFFFFFFFFFFFFC0LL));
    v10 &= 0x3Fu;
  }
  sub_1418F44E0((__m128i *)&v25[3], v9, v10);
  v26 = v10;
  v36 = v25[10];
  v37 = v10;
  v38 = v27;
  v39 = v28;
  v40 = v29;
  si128 = _mm_load_si128((const __m128i *)&v24);
  v12 = _mm_load_si128((const __m128i *)v25);
  v13 = _mm_load_si128((const __m128i *)&v25[4]);
  v35[0] = *(_OWORD *)&v25[2];
  v35[3] = *(_OWORD *)&v25[8];
  v35[2] = _mm_load_si128((const __m128i *)&v25[6]);
  v35[1] = v13;
  v34 = v12;
  v33 = si128;
  v14 = _byteswap_uint64((v25[2] << 9) | (8 * (unsigned int)(unsigned __int8)v10));
  *((_BYTE *)v35 + (unsigned __int8)v10 + 8) = 0x80;
  if ( (unsigned __int8)v10 == 63
    || (sub_1418F4C70((char *)v35 + (unsigned __int8)v10 + 9, 0, (unsigned __int8)v10 ^ 0x3FLL),
        ((unsigned __int8)v10 ^ 0x38u) <= 7) )
  {
    sub_14140F460(&v33, (char *)v35 + 8, 1);
    memset(v21, 0, sizeof(v21));
    v22 = 0;
    v23 = v14;
    sub_14140F460(&v33, v21, 1);
  }
  else
  {
    v36 = v14;
    sub_14140F460(&v33, (char *)v35 + 8, 1);
  }
  v15 = _mm_load_si128(&v33);
  v16 = _mm_load_si128(&v34);
  v33 = _mm_packus_epi16(
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v15, (__m128i)0LL), 27), 27),
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v15, (__m128i)0LL), 27), 27));
  v34 = _mm_packus_epi16(
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v16, (__m128i)0LL), 27), 27),
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v16, (__m128i)0LL), 27), 27));
  if ( v42.m128i_i64[0] )
    sub_140001660(v42.m128i_i64[1], v42.m128i_i64[0], 1);
  *(_QWORD *)&v24 = &v33;
  *((_QWORD *)&v24 + 1) = sub_140364610;
  sub_1416ABFD0(a1, &unk_141A482C0, &v24);
  v17 = v31;
  v42 = (__m128i)v32;
  v41 = v31;
  while ( v42.m128i_i64[0] != v42.m128i_i64[1] )
  {
    ++v42.m128i_i64[1];
    v18 = v17 + 32;
    sub_1403880E0(v17);
    v17 = v18;
  }
  if ( v30 )
    sub_140001660(v41, 32 * v30, 8);
  return a1;
}
