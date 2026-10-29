// win 1.2.7 | module src/core/relay/upstream_url.rs (anchor: emits "<invalid relay URL>" literal; mac parity core__relay__upstream_url.c:1318 same literal) | ea 0x140ef5ff0 | name sub_140EF5FF0
_QWORD *__fastcall sub_140EF5FF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  void *v5; // rax
  _OWORD v7[5]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v8; // [rsp+78h] [rbp-8h]
  __int128 v9; // [rsp+80h] [rbp+0h] BYREF
  __int128 v10; // [rsp+90h] [rbp+10h]
  __int128 v11; // [rsp+A0h] [rbp+20h]
  __int128 v12; // [rsp+B0h] [rbp+30h]
  __int128 v13; // [rsp+C0h] [rbp+40h]
  __int64 v14; // [rsp+D0h] [rbp+50h]
  __int64 v15; // [rsp+E0h] [rbp+60h]

  v15 = -2;
  *(_QWORD *)&v11 = 0;
  *(_QWORD *)&v9 = 0;
  *(_QWORD *)&v10 = 0;
  sub_141655AC0(v7, &v9, a2, a3);
  if ( *(_QWORD *)&v7[0] == -1 )
  {
    nullsub_1(v4);
    v5 = (void *)sub_140001650(19, 1);
    if ( !v5 )
      sub_141938D2B(1, 19);
    qmemcpy(v5, "<invalid relay URL>", 19);
    *a1 = 19;
    a1[1] = v5;
    a1[2] = 19;
  }
  else
  {
    v14 = v8;
    v13 = v7[4];
    v12 = v7[3];
    v11 = v7[2];
    v10 = v7[1];
    v9 = v7[0];
    sub_141656600(&v9, 1, 0);
    sub_141656020(&v9, 0);
    sub_141659C10(&v9, 0);
    sub_141655E30(&v9, 0);
    a1[2] = v10;
    *(_OWORD *)a1 = v9;
  }
  return a1;
}
