// win 1.2.7 | module src/core/repository.rs | ea 0x140020ed0 | name sub_140020ED0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140020ED0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v4; // rdx

  v1 = *a1;
  if ( *a1 != -1 )
  {
    if ( v1 )
      result = sub_140001660(a1[1], v1, 1);
    v4 = a1[3];
    if ( v4 != -1 )
    {
      if ( v4 )
        return sub_140001660(a1[4], v4, 1);
    }
  }
  return result;
}
