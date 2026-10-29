// win 1.2.7 | module src/core/relay/proxy_access.rs | ea 0x141502ce0 | name sub_141502CE0
// win 1.2.7 | module src/core/relay/proxy_access.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141502CE0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) )
    return sub_140001660(v1, 56, 8);
  return result;
}
