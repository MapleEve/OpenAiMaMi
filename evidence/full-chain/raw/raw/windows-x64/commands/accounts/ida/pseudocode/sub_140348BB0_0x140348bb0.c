// module: codexmate_lib/commands/accounts
// addr: 0x140348bb0
// name: sub_140348BB0
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140348BB0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == -1 )
    return sub_140018650(a1 + 1);
  if ( v1 )
    return sub_140001660(a1[1], v1, 1);
  return result;
}