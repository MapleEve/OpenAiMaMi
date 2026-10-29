// win 1.2.7 | module src/core/oauth_refresh.rs | ea 0x140034190 | name sub_140034190
// win 1.2.7 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140034190(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = *a1;
  if ( *a1 != -1 && v2 )
    result = sub_140001660(a1[1], v2, 1);
  v4 = a1[3];
  if ( v4 != -1 && v4 )
    result = sub_140001660(a1[4], v4, 1);
  v5 = a1[6];
  if ( v5 != -1 && v5 )
    result = sub_140001660(a1[7], v5, 1);
  v6 = a1[9];
  if ( v6 != -1 )
  {
    if ( v6 )
      return sub_140001660(a1[10], v6, 1);
  }
  return result;
}
