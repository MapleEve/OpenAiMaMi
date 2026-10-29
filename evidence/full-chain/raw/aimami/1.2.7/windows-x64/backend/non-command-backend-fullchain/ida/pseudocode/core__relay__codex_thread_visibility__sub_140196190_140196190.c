// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140196190 | name sub_140196190
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140196190(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[6];
  if ( v3 )
    result = sub_140001660(a1[7], v3, 1);
  v4 = a1[12];
  if ( v4 != -1 )
  {
    if ( v4 )
      return sub_140001660(a1[13], v4, 1);
  }
  return result;
}
