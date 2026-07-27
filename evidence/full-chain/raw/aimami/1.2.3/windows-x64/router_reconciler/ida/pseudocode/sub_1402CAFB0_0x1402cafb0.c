// module: codexmate_lib/core/relay/router_reconciler
// addr: 0x1402cafb0
// name: sub_1402CAFB0
// win 1.2.1 | module src/core/relay/router_reconciler.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 *__fastcall sub_1402CAFB0(unsigned __int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  char *v4; // rsi
  char *v5; // rbx
  __int64 v6; // r13
  __int128 v7; // xmm0
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  __int64 *v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 *result; // rax
  __int128 v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+30h] [rbp-50h]
  __int64 v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-40h]
  unsigned __int64 v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h]
  unsigned __int64 *v23; // [rsp+58h] [rbp-28h]
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  __int128 v25; // [rsp+70h] [rbp-10h]
  __int64 *v26; // [rsp+88h] [rbp+8h]
  __int64 v27; // [rsp+90h] [rbp+10h]

  v27 = -2;
  v23 = a1;
  v2 = *a2;
  v22 = a2[2];
  v3 = 32 * v22;
  v21 = (0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(32 * v22)) >> 64;
  v4 = (char *)a2[1];
  v26 = a2;
  v5 = (char *)a2[3];
  if ( v4 == v5 )
  {
    v6 = v2;
  }
  else
  {
    v6 = v2;
    do
    {
      v7 = *(_OWORD *)v4;
      v25 = *((_OWORD *)v4 + 1);
      v24 = v7;
      v4 += 32;
      v26[1] = (__int64)v4;
      v19 = v2;
      v20 = v6;
      sub_140380850(&v17, &v24);
      if ( (_QWORD)v24 )
        sub_140001660(*((_QWORD *)&v24 + 1), v24, 1);
      *(_QWORD *)(v6 + 16) = v18;
      *(_OWORD *)v6 = v17;
      v6 += 24;
    }
    while ( v4 != v5 );
  }
  v8 = v21 >> 4;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v6 - v2) >> 3);
  *(_QWORD *)&v24 = v2;
  *((_QWORD *)&v24 + 1) = v9;
  v10 = v22;
  *(_QWORD *)&v25 = v22;
  v11 = v26;
  v26[2] = 0;
  *v11 = 8;
  v11[1] = 8;
  v11[3] = 8;
  v12 = v5 - v4;
  if ( v12 )
  {
    v13 = v12 >> 5;
    v14 = v4 + 8;
    do
    {
      v15 = *(v14 - 1);
      if ( v15 )
        sub_140001660(*v14, v15, 1);
      v14 += 4;
      --v13;
    }
    while ( v13 );
  }
  if ( v3 != 24 * v8 && v10 != 0 )
  {
    if ( v3 )
    {
      v2 = sub_140001670(v2, v3, 8, 24 * v8);
      if ( !v2 )
        sub_1416C2D31(8, 24 * v8);
    }
    else
    {
      v2 = 8;
    }
  }
  result = v23;
  *v23 = v8;
  result[1] = v2;
  result[2] = v9;
  return result;
}