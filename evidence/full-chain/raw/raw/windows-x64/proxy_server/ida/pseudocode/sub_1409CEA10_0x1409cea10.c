// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1409cea10
// name: sub_1409CEA10
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1409CEA10(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]
  __int64 v17; // [rsp+60h] [rbp+0h]

  v17 = -2;
  if ( *(_BYTE *)(a2 + 365) )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return a1;
  }
  *(_BYTE *)(a2 + 365) = 1;
  *(_QWORD *)&v15 = 0;
  *((_QWORD *)&v15 + 1) = 1;
  v16 = 0;
  if ( !*(_BYTE *)(a2 + 364) )
  {
    sub_1409B6EC0((__int64)&v11, a2);
    v4 = v12;
    v5 = v13;
    if ( v13 )
    {
      v14 = v12;
      sub_141688D30((unsigned int)&v15, 0, v13, 1, 1);
      v6 = v16;
      v4 = v14;
      sub_141684120(v16 + *((_QWORD *)&v15 + 1), v14, v5);
    }
    else
    {
      v6 = 0;
    }
    v16 = v5 + v6;
    if ( v11 )
      sub_140001660(v4, v11, 1);
  }
  sub_1409CB5A0(a2, &v15);
  sub_1409C69B0(a2, &v15);
  sub_1409C8F60((const __m128i **)a2, &v15);
  sub_1409C5790((__int64)&v11, a2);
  v7 = v12;
  v8 = v13;
  v9 = v16;
  if ( v13 > (__int64)v15 - v16 )
  {
    v14 = v12;
    sub_141688D30((unsigned int)&v15, v16, v13, 1, 1);
    v9 = v16;
    v7 = v14;
    goto LABEL_10;
  }
  if ( v13 )
LABEL_10:
    sub_141684120(v9 + *((_QWORD *)&v15 + 1), v7, v8);
  v16 = v8 + v9;
  if ( v11 )
    sub_140001660(v7, v11, 1);
  a1[2] = v16;
  *(_OWORD *)a1 = v15;
  return a1;
}