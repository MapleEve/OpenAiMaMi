// win 1.2.7 | module src/core/repository.rs | ea 0x140222d40 | name sub_140222D40
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_140222D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  char v7; // al
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h]
  unsigned __int64 v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+48h] [rbp-8h]

  v15 = -2;
  sub_14169D480(&v10, a1, a2);
  result = v11;
  if ( v10 != -1 )
  {
    v14 = v10;
    v13 = v11;
    v7 = sub_140222E10(a3, a4, v11, v12);
    v9 = v8;
    if ( (v7 & 1) == 0 )
    {
      sub_1401BD710(v8, v8);
      v9 = 0;
    }
    if ( v14 )
      sub_140001660(v13, v14, 1);
    return v9;
  }
  return result;
}
