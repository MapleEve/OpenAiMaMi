// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1409a3040
// name: sub_1409A3040
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_1409A3040(__m128i *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
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
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v18[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v19; // [rsp+30h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+48h] [rbp-38h]
  _OWORD v22[2]; // [rsp+50h] [rbp-30h] BYREF
  _OWORD v23[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v24; // [rsp+98h] [rbp+18h]

  v24 = -2;
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
    || (v14 = a1, v16 = sub_14033C560(a3 + 5, v4 - 5), a1 = v14, !v17)
    || !v16 )
  {
LABEL_14:
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = 1;
    a1[1].m128i_i64[0] = 0;
    return a1;
  }
  if ( v17 != 6 || *(_DWORD *)v16 ^ 0x4E4F445B | *(unsigned __int16 *)(v16 + 4) ^ 0x5D45 )
  {
    v18[0] = v16;
    v18[1] = v17;
    v19 = 0;
    v20 = v16;
    v21 = v17;
    sub_1408A6200(v22, v18);
    if ( LOBYTE(v22[0]) == 0xFF )
    {
      v14->m128i_i64[0] = 0;
      v14->m128i_i64[1] = 1;
      v14[1].m128i_i64[0] = 0;
      sub_140348CF0(v22);
    }
    else
    {
      v23[1] = v22[1];
      v23[0] = v22[0];
      sub_14099DEE0(v14, a2, (__int64)v23);
      sub_1400104F0(v23);
    }
    return v14;
  }
  sub_1409A2DD0(v14, a2);
  return v14;
}