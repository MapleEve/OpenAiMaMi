// win 1.2.7 | module src/core/codex_config.rs | ea 0x140e96bd0 | name sub_140E96BD0
// win 1.2.7 | module src/core/codex_config.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E96BD0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = sub_140E96620(a1 + 3);
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
