// module: codexmate_lib/core/repository
// addr: 0x1402ddce0
// name: sub_1402DDCE0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402DDCE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  _QWORD v11[2]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int8 v12; // [rsp+38h] [rbp-48h]
  char v13; // [rsp+60h] [rbp-20h]
  char v14; // [rsp+61h] [rbp-1Fh]
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h]
  unsigned __int8 v17; // [rsp+78h] [rbp-8h]
  char v18; // [rsp+A0h] [rbp+20h]
  char v19; // [rsp+A1h] [rbp+21h]
  _QWORD v20[4]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+50h]
  __int64 v23; // [rsp+D8h] [rbp+58h]
  __int64 v24; // [rsp+E8h] [rbp+68h]
  __int64 v25; // [rsp+F0h] [rbp+70h]

  v25 = -2;
  sub_1403C8920(&v21, a1, a2);
  sub_1403C8920(v20, a3, a4);
  v7 = v22;
  v24 = v20[1];
  v8 = v20[2];
  sub_141473290(&v15, v22, v23);
  sub_141473290(v11, v24, v8);
  if ( v16 != v11[1]
    || v18 != v13
    || v19 != 2
    || v14 != 2
    || v17 < 3u != v12 < 3u
    || (unsigned int)sub_1416847B0(v15, v11[0], v16) )
  {
    v4 = sub_140467AB0(&v15, v11);
    v9 = v20[0];
    if ( !v20[0] )
      goto LABEL_9;
    goto LABEL_8;
  }
  LOBYTE(v4) = 1;
  v9 = v20[0];
  if ( v20[0] )
LABEL_8:
    sub_140001660(v24, v9, 1);
LABEL_9:
  if ( v21 )
    sub_140001660(v7, v21, 1);
  return v4;
}