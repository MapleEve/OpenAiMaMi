// win 1.2.7 | module src/core/relay/health_check.rs | ea 0x140fe5050 | name sub_140FE5050
// win 1.2.7 | module src/core/relay/health_check.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140FE5050(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  void *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  void *v8; // rax
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h]
  __int128 v12; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h]
  __int64 v14; // [rsp+50h] [rbp+0h]

  v14 = -2;
  *(_QWORD *)&v12 = 0;
  *((_QWORD *)&v12 + 1) = 8;
  v13 = 0;
  if ( *(_BYTE *)(a2 + 90) )
    goto LABEL_2;
  sub_140FE4940(&v10, a2, &v12);
  if ( (_QWORD)v10 == -1 )
  {
    sub_140FE52A0(&v10, a2, &v12);
    if ( (_QWORD)v10 == -1 )
    {
      if ( !*(_BYTE *)(a2 + 90) )
      {
        nullsub_1(a1);
        v8 = (void *)sub_140001650(57, 1);
        if ( !v8 )
          sub_141938D2B(1, 57);
        qmemcpy(v8, "upstream stream ended without a successful terminal event", 57);
        a1[1] = 57;
        a1[2] = v8;
        a1[3] = 57;
        *a1 = 1;
        v4 = v13;
        if ( !v13 )
          goto LABEL_17;
        goto LABEL_10;
      }
LABEL_2:
      if ( *(_QWORD *)(a2 + 80) )
      {
        a1[3] = v13;
        *(_OWORD *)(a1 + 1) = v12;
        *a1 = 0;
        return a1;
      }
      nullsub_1(a1);
      v5 = (void *)sub_140001650(48, 1);
      if ( !v5 )
        sub_141938D2B(1, 48);
      qmemcpy(v5, "upstream returned no model output for this probe", 48);
      a1[1] = 48;
      a1[2] = v5;
      a1[3] = 48;
      *a1 = 1;
      v4 = v13;
      if ( v13 )
        goto LABEL_10;
      goto LABEL_17;
    }
  }
  a1[3] = v11;
  *(_OWORD *)(a1 + 1) = v10;
  *a1 = 1;
  v4 = v13;
  if ( v13 )
  {
LABEL_10:
    v6 = (_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL);
    do
    {
      v7 = *(v6 - 1);
      if ( v7 )
        sub_140001660(*v6, v7, 1);
      v6 += 3;
      --v4;
    }
    while ( v4 );
  }
LABEL_17:
  if ( (_QWORD)v12 )
    sub_140001660(*((_QWORD *)&v12 + 1), 24 * v12, 8);
  return a1;
}
