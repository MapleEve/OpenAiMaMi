// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | ea 0x14027c620 | name sub_14027C620
// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_14027C620(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _WORD *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // kr00_16
  __int64 v13; // r12
  __int64 v14; // r13
  void *v15; // rbx
  __m128i si128; // xmm6
  __m128i v17; // xmm7
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i *v24; // rax
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rcx
  _WORD *v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __int64 v40; // [rsp+28h] [rbp-58h]
  __m128i v41; // [rsp+30h] [rbp-50h] BYREF
  __int64 v42; // [rsp+40h] [rbp-40h]
  __int64 v43; // [rsp+50h] [rbp-30h]
  __int64 v44; // [rsp+58h] [rbp-28h]
  _OWORD v45[2]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v46; // [rsp+80h] [rbp+0h] BYREF
  __int64 v47; // [rsp+90h] [rbp+10h]
  __int64 v48; // [rsp+98h] [rbp+18h] BYREF
  __m128i v49; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v50; // [rsp+B0h] [rbp+30h]
  _WORD *v51; // [rsp+B8h] [rbp+38h]
  _WORD *v52; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v53[24]; // [rsp+C8h] [rbp+48h] BYREF
  char v54; // [rsp+E6h] [rbp+66h]
  char v55; // [rsp+E7h] [rbp+67h]
  __int64 v56; // [rsp+E8h] [rbp+68h]

  v56 = -2;
  v44 = a3;
  v43 = a2;
  if ( !a4 )
  {
    if ( !v44 )
      goto LABEL_27;
    v14 = 32 * v44;
    v15 = off_1421E7108;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1419D3570);
    v17 = _mm_load_si128((const __m128i *)&xmmword_1419D3580);
    v18 = v43;
    while ( 1 )
    {
      v19 = sub_1416419F0(aType_3, 4, v18);
      if ( !v19 )
        v19 = (__int64)v15;
      if ( *(_BYTE *)v19 == 3 )
      {
        v20 = *(_QWORD *)(v19 + 16);
        v21 = *(_QWORD *)(v19 + 24);
        if ( v21 == 22 )
        {
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v20 + 6)), si128),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v20), v17))) == 0xFFFF )
            break;
        }
        else if ( v21 == 15 && !(*(_QWORD *)v20 ^ 0x745F726576726573LL | *(_QWORD *)(v20 + 7) ^ 0x6573755F6C6F6F74LL) )
        {
          break;
        }
      }
      v22 = sub_1416419F0(aCitations_0, 9, v18);
      if ( !v22 )
        v22 = (__int64)v15;
      if ( *(_BYTE *)v22 == 4 && *(_QWORD *)(v22 + 24) )
        break;
      v18 += 32;
      v14 -= 32;
      if ( !v14 )
        goto LABEL_27;
    }
  }
  if ( !(unsigned __int8)sub_14027D270(v43, v44) )
  {
LABEL_27:
    a1->m128i_i8[0] = -1;
    return a1;
  }
  v46.m128i_i64[0] = 0;
  v47 = 0;
  nullsub_1(v5);
  v6 = (_DWORD *)sub_140001650(4, 1);
  if ( !v6 )
    sub_141938D2B(1, 4);
  *v6 = 1701869940;
  v48 = 4;
  v49.m128i_i64[0] = (__int64)v6;
  v49.m128i_i64[1] = 4;
  nullsub_1(v7);
  v8 = sub_140001650(9, 1);
  v51 = (_WORD *)v8;
  if ( !v8 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v8 = 0x6E696E6F73616572LL;
  *(_BYTE *)(v8 + 8) = 103;
  LOBYTE(v52) = 3;
  *(_QWORD *)v53 = 9;
  *(_QWORD *)&v53[8] = v8;
  *(_QWORD *)&v53[16] = 9;
  sub_140E72AA0(v45, &v46, &v48, &v52);
  if ( LOBYTE(v45[0]) != 0xFF )
    sub_14002F9D0(v45);
  nullsub_1(v9);
  v10 = (_WORD *)sub_140001650(2, 1);
  if ( !v10 )
    sub_141938D2B(1, 2);
  *v10 = 25705;
  v48 = 2;
  v51 = v10;
  v49.m128i_i64[0] = (__int64)v10;
  v49.m128i_i64[1] = 2;
  sub_141568C20(&v52);
  v41 = _mm_loadu_si128((const __m128i *)&v52);
  *(_QWORD *)&v45[0] = &v41;
  *((_QWORD *)&v45[0] + 1) = sub_14028A180;
  sub_1416ABFD0(&v52, &unk_1419E180F, v45);
  v12 = *(_OWORD *)v53;
  v40 = *(_QWORD *)v53;
  v51 = v52;
  if ( *(__int64 *)&v53[8] < 0 )
  {
    v13 = 0;
    goto LABEL_10;
  }
  if ( *(_QWORD *)&v53[8] )
  {
    nullsub_1(v11);
    v13 = 1;
    v24 = (__m128i *)sub_140001650(*((_QWORD *)&v12 + 1), 1);
    if ( !v24 )
    {
LABEL_10:
      v54 = 1;
      sub_141938D2B(v13, *((_QWORD *)&v12 + 1));
    }
    v25 = (__int64)v24;
    sub_1418F44E0(v24, (const __m128i *)v12, *((unsigned __int64 *)&v12 + 1));
  }
  else
  {
    v25 = 1;
  }
  LOBYTE(v52) = 3;
  *(_QWORD *)v53 = *((_QWORD *)&v12 + 1);
  *(_QWORD *)&v53[8] = v25;
  *(_QWORD *)&v53[16] = *((_QWORD *)&v12 + 1);
  v54 = 0;
  sub_140E72AA0(v45, &v46, &v48, &v52);
  if ( LOBYTE(v45[0]) != 0xFF )
    sub_14002F9D0(v45);
  if ( v51 )
    sub_140001660(v40, v51, 1);
  nullsub_1(v26);
  v27 = sub_140001650(6, 1);
  if ( !v27 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v27 + 4) = 29557;
  *(_DWORD *)v27 = 1952543859;
  v48 = 6;
  v49.m128i_i64[0] = v27;
  v49.m128i_i64[1] = 6;
  nullsub_1(v28);
  v29 = sub_140001650(9, 1);
  v51 = (_WORD *)v29;
  if ( !v29 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v29 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v29 + 8) = 100;
  LOBYTE(v52) = 3;
  *(_QWORD *)v53 = 9;
  *(_QWORD *)&v53[8] = v29;
  *(_QWORD *)&v53[16] = 9;
  sub_140E72AA0(v45, &v46, &v48, &v52);
  if ( LOBYTE(v45[0]) != 0xFF )
    sub_14002F9D0(v45);
  nullsub_1(v30);
  v31 = (_DWORD *)sub_140001650(7, 1);
  if ( !v31 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v31 + 3) = 2037539181;
  *v31 = 1835890035;
  v48 = 7;
  v49.m128i_i64[0] = (__int64)v31;
  v49.m128i_i64[1] = 7;
  *(_QWORD *)v53 = 0;
  *(_OWORD *)&v53[8] = 8u;
  LOBYTE(v52) = 4;
  sub_140E72AA0(v45, &v46, &v48, &v52);
  if ( LOBYTE(v45[0]) != 0xFF )
    sub_14002F9D0(v45);
  v49 = _mm_loadu_si128(&v46);
  v50 = v47;
  LOBYTE(v48) = 5;
  v41.m128i_i64[0] = 0;
  v42 = 0;
  nullsub_1(v32);
  v33 = (_DWORD *)sub_140001650(4, 1);
  if ( !v33 )
    sub_141938D2B(1, 4);
  *v33 = 1701869940;
  v46.m128i_i64[0] = 4;
  v46.m128i_i64[1] = (__int64)v33;
  v47 = 4;
  nullsub_1(v34);
  v35 = (_WORD *)sub_140001650(14, 1);
  v51 = v35;
  if ( !v35 )
    sub_141938D2B(1, 14);
  qmemcpy(v35, "server_message", 14);
  LOBYTE(v52) = 3;
  *(_QWORD *)v53 = 14;
  *(_QWORD *)&v53[8] = v35;
  *(_QWORD *)&v53[16] = 14;
  sub_140E72AA0(v45, &v41, &v46, &v52);
  if ( LOBYTE(v45[0]) != 0xFF )
    sub_14002F9D0(v45);
  nullsub_1(v36);
  v37 = (_DWORD *)sub_140001650(7, 1);
  if ( !v37 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v37 + 3) = 1953391988;
  *v37 = 1953394531;
  v46.m128i_i64[0] = 7;
  v46.m128i_i64[1] = (__int64)v37;
  v47 = 7;
  v55 = 1;
  sub_140C11BD0(&v52, v43, v44);
  if ( (_BYTE)v52 == 0xFF )
  {
    *(_QWORD *)&v45[0] = *(_QWORD *)v53;
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)v45,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419E1818);
  }
  v38 = _mm_loadu_si128((const __m128i *)&v52);
  v45[1] = _mm_loadu_si128((const __m128i *)&v53[8]);
  v45[0] = v38;
  v55 = 0;
  sub_140E72AA0(&v52, &v41, &v46, v45);
  if ( (_BYTE)v52 != 0xFF )
    sub_14002F9D0(&v52);
  *(__m128i *)v53 = _mm_loadu_si128(&v41);
  *(_QWORD *)&v53[16] = v42;
  LOBYTE(v52) = 5;
  sub_140302A40(&v48, &v52);
  sub_14002F9D0(&v52);
  v39 = _mm_loadu_si128((const __m128i *)&v48);
  a1[1] = _mm_loadu_si128((const __m128i *)&v49.m128i_u64[1]);
  *a1 = v39;
  return a1;
}
