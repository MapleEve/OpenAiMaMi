// module: codexmate_lib/core/codex_config
// addr: 0x1405e5330
// name: sub_1405E5330
// win 1.2.1 | module src/core/codex_config.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_1405E5330(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx

  result = sub_1405E4C50(a1 + 3);
  v2 = a1[28];
  if ( v2 > 0 )
    result = sub_140001660(a1[29], v2, 1);
  v3 = a1[25];
  if ( v3 != -1 )
  {
    if ( v3 )
      return sub_140001660(a1[26], v3, 1);
  }
  return result;
}