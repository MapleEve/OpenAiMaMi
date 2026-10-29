// win 1.2.7 | module src/core/analytics/threads.rs | ea 0x1409e50f0 | name sub_1409E50F0
// win 1.2.7 | module src/core/analytics/threads.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409E50F0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  result = *a1;
  v2 = *a1;
  if ( *(_DWORD *)(*a1 + 24) != 2 )
    result = sub_140E8B6E0(v2 + 72);
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) )
    return sub_140001660(v2, 96, 8);
  return result;
}
