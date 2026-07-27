// module: codexmate_lib/commands/accounts
// addr: 0x14034ebb0
// name: sub_14034EBB0
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14034EBB0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-20h]
  __int64 v8; // [rsp+28h] [rbp-18h]
  _QWORD *v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+38h] [rbp-8h]

  sub_14034EB00();
  v2 = a1[85];
  v9 = a1;
  v7 = a1[86];
  v8 = 0;
  v10 = v2;
  while ( v7 != v8 )
  {
    ++v8;
    v3 = v2 + 352;
    sub_140015990();
    v2 = v3;
  }
  result = v9[84];
  if ( result )
    result = sub_140001660(v10, 352 * result, 8);
  v5 = v9[87];
  if ( v5 != -1 )
  {
    if ( v5 )
      result = sub_140001660(v9[88], v5, 1);
    v6 = v9[90];
    if ( v6 > 0 )
      return sub_140001660(v9[91], v6, 1);
  }
  return result;
}