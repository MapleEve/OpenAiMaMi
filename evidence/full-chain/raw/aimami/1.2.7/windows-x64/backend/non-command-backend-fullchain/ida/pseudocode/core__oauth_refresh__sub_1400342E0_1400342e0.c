// win 1.2.7 | module src/core/oauth_refresh.rs | ea 0x1400342e0 | name sub_1400342E0
// win 1.2.7 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1400342E0(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = *a1;
  if ( *a1 != -1 && v2 )
    sub_140001660(a1[1], v2, 1);
  v3 = a1[3];
  if ( v3 != -1 && v3 )
    sub_140001660(a1[4], v3, 1);
  result = sub_140034190(a1 + 6);
  v5 = a1[18];
  if ( v5 != -1 )
  {
    if ( v5 )
      return sub_140001660(a1[19], v5, 1);
  }
  return result;
}
