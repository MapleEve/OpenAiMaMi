// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1409d50f0
// name: sub_1409D50F0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1409D50F0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h]
  unsigned __int64 v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+68h] [rbp-8h]

  v19 = -2;
  if ( *(_BYTE *)(a2 + 101) )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return a1;
  }
  *(_BYTE *)(a2 + 101) = 1;
  *(_QWORD *)&v17 = 0;
  *((_QWORD *)&v17 + 1) = 1;
  v18 = 0;
  if ( *(_BYTE *)(a2 + 100) )
  {
    v4 = 1;
    v5 = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 100) = 1;
    sub_1409CF120(&v13, a2);
    v6 = v14;
    v7 = v15;
    if ( v15 )
    {
      v16 = v14;
      sub_141688D30((unsigned int)&v17, 0, v15, 1, 1);
      v4 = *((_QWORD *)&v17 + 1);
      v8 = v18;
      v6 = v16;
      sub_141684120(*((_QWORD *)&v17 + 1) + v18, v16, v7);
    }
    else
    {
      v4 = 1;
      v8 = 0;
    }
    v5 = v7 + v8;
    v18 = v5;
    if ( v13 )
      sub_140001660(v6, v13, 1);
  }
  sub_1409CFCB0(&v13, a2, aStop, 4);
  v9 = v14;
  v10 = v15;
  if ( v15 > (__int64)v17 - v5 )
  {
    v16 = v14;
    sub_141688D30((unsigned int)&v17, v5, v15, 1, 1);
    v4 = *((_QWORD *)&v17 + 1);
    v5 = v18;
    v9 = v16;
    goto LABEL_11;
  }
  if ( v15 )
LABEL_11:
    sub_141684120(v4 + v5, v9, v10);
  v11 = v10 + v5;
  v18 = v11;
  if ( v13 )
    sub_140001660(v9, v13, 1);
  if ( (unsigned __int64)(v17 - v11) <= 0xD )
  {
    sub_141688D30((unsigned int)&v17, v11, 14, 1, 1);
    v4 = *((_QWORD *)&v17 + 1);
    v11 = v18;
  }
  qmemcpy((void *)(v4 + v11), "data: [DONE]\n\n", 14);
  v18 = v11 + 14;
  a1[2] = v11 + 14;
  *(_OWORD *)a1 = v17;
  return a1;
}