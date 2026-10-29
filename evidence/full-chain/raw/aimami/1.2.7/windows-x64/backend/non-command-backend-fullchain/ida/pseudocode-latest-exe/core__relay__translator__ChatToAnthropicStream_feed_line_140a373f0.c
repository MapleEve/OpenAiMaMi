__m128i *__fastcall sub_140A373F0(__m128i *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  int v6; // r10d
  char v7; // r11
  char v8; // si
  char v9; // di
  __int64 v10; // r9
  int v11; // esi
  int v12; // r11d
  __m128i *v14; // rsi
  __int128 v16; // rax
  __int128 v17[3]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  _OWORD v19[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+98h] [rbp+18h]

  v20 = -2;
  do
  {
    while ( 1 )
    {
      if ( !a4 )
        goto LABEL_14;
      v4 = a4;
      v5 = a3 + a4;
      v6 = *(char *)(v5 - 1);
      if ( v6 < 0 )
        break;
      a4 = v5 - 1 - a3;
      if ( v6 != 13 )
        goto LABEL_12;
    }
    v7 = *(_BYTE *)(v5 - 2);
    if ( v7 >= -64 )
    {
      v10 = v5 - 2;
      v12 = v7 & 0x1F;
    }
    else
    {
      v8 = *(_BYTE *)(v5 - 3);
      if ( v8 >= -64 )
      {
        v10 = v5 - 3;
        v11 = v8 & 0xF;
      }
      else
      {
        v9 = *(_BYTE *)(v5 - 4);
        v10 = v5 - 4;
        v11 = ((v9 & 7) << 6) | v8 & 0x3F;
      }
      v12 = (v11 << 6) | v7 & 0x3F;
    }
    a4 = v10 - a3;
  }
  while ( ((v12 << 6) | v6 & 0x3F) == 0xD );
LABEL_12:
  if ( v4 < 5
    || *(_DWORD *)a3 ^ 0x61746164 | *(unsigned __int8 *)(a3 + 4) ^ 0x3A
    || (v14 = a1, *(_QWORD *)&v16 = sub_1408FF430(a3 + 5, v4 - 5), a1 = v14, !*((_QWORD *)&v16 + 1))
    || !(_QWORD)v16 )
  {
LABEL_14:
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = 1;
    a1[1].m128i_i64[0] = 0;
    return a1;
  }
  if ( *((_QWORD *)&v16 + 1) != 6 || *(_DWORD *)v16 ^ 0x4E4F445B | *(unsigned __int16 *)(v16 + 4) ^ 0x5D45 )
  {
    v17[0] = v16;
    v17[1] = 0;
    v17[2] = v16;
    sub_140D8B500(v18, v17);
    if ( LOBYTE(v18[0]) == 0xFF )
    {
      v14->m128i_i64[0] = 0;
      v14->m128i_i64[1] = 1;
      v14[1].m128i_i64[0] = 0;
      sub_140032F30((char *)v18 + 8);
    }
    else
    {
      v19[1] = v18[1];
      v19[0] = v18[0];
      sub_140A32260(v14, a2, (__int64)v19);
      sub_140A192F0(v19);
    }
    return v14;
  }
  sub_140A37180(v14, a2);
  return v14;
}
