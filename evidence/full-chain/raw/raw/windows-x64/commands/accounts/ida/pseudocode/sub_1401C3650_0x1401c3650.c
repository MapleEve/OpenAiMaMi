// module: codexmate_lib/commands/accounts
// addr: 0x1401c3650
// name: sub_1401C3650
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401C3650(__int64 a1, __int64 a2)
{
  _BYTE v4[136]; // [rsp+28h] [rbp-58h] BYREF
  volatile signed __int64 *v5; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v6; // [rsp+C0h] [rbp+40h]
  __int64 v7; // [rsp+C8h] [rbp+48h]
  _BYTE v8[152]; // [rsp+D8h] [rbp+58h] BYREF
  volatile signed __int64 *v9; // [rsp+170h] [rbp+F0h] BYREF
  volatile signed __int64 *v10; // [rsp+178h] [rbp+F8h] BYREF
  volatile signed __int64 *v11[4]; // [rsp+180h] [rbp+100h] BYREF

  v11[2] = (volatile signed __int64 *)-2LL;
  sub_1404DE320(v4, *(_QWORD *)(a2 + 32));
  sub_141684120(a1, v8, 152);
  if ( !_InterlockedDecrement64(v9) )
    sub_141214E90(&v9);
  if ( v6 )
    sub_140001660(v7, v6, 1);
  if ( !_InterlockedDecrement64(v5) )
    sub_140573D40(&v5);
  sub_140007030(v4);
  if ( !_InterlockedDecrement64(v10) )
    sub_141215540(&v10);
  if ( !_InterlockedDecrement64(v11[0]) )
    sub_141215140(v11);
  return a1;
}