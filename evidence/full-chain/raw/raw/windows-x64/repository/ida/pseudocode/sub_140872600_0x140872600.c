// module: codexmate_lib/core/repository
// addr: 0x140872600
// name: sub_140872600
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140872600(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h]
  unsigned __int64 v10; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+48h] [rbp-8h]

  v13 = -2;
  sub_14148D3C0(&v8, a1, a2);
  result = v9;
  if ( v8 != -1 )
  {
    v12 = v8;
    v11 = v9;
    v7 = sub_1408726C0(a3, a4, v9, v10);
    if ( v12 )
      sub_140001660(v11, v12, 1);
    return v7;
  }
  return result;
}