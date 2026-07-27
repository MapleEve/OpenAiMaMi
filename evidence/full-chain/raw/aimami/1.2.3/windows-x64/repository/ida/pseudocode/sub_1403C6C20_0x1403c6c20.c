// module: codexmate_lib/core/repository
// addr: 0x1403c6c20
// name: sub_1403C6C20
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_1403C6C20(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdx
  _QWORD *v12; // r15
  __int64 v13; // rdx
  char *v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+38h] [rbp-18h]
  _QWORD *v17; // [rsp+40h] [rbp-10h]
  char v18; // [rsp+4Fh] [rbp-1h] BYREF
  __int64 v19; // [rsp+50h] [rbp+0h]

  v19 = -2;
  v3 = a3;
  v5 = a1[1];
  v6 = a1[2];
  if ( v6 )
  {
    v15 = a3;
    v16 = a2[16];
    v17 = a2;
    v7 = a2[17];
    v8 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v5 + v8 + 136) == v7 )
      {
        v9 = *(_QWORD *)(v5 + v8 + 128);
        if ( !(unsigned int)sub_1416847B0(v9, v16, v7) )
          break;
      }
      v8 += 160;
      if ( 160 * v6 == v8 )
      {
        v3 = v15;
        a2 = v17;
        if ( v6 == *a1 )
          goto LABEL_13;
        goto LABEL_14;
      }
    }
    if ( (unsigned __int8)sub_140420FA0(v5 + v8, v17) )
    {
      v10 = v17[15];
      if ( v10 )
        sub_140001660(v16, v10, 1);
      return 0;
    }
    v13 = *(_QWORD *)(v5 + v8 + 120);
    if ( v13 )
      sub_140001660(v9, v13, 1);
    sub_141684120(v5 + v8, v17, 160);
    v3 = v15;
  }
  else
  {
    v16 = a2[16];
    if ( !*a1 )
    {
LABEL_13:
      v12 = a2;
      v17 = (_QWORD *)a2[15];
      sub_141689490(a1);
      v5 = a1[1];
      a2 = v12;
    }
LABEL_14:
    sub_141684120(v5 + 160 * v6++, a2, 160);
    a1[2] = v6;
  }
  a1[3] = v3;
  v14 = &v18;
  if ( v6 >= 2 )
  {
    if ( v6 >= 0x15 )
      sub_140B58FB0(v5, v6, &v14);
    else
      sub_140556540(v5, v6, 1, &v14);
  }
  return 1;
}