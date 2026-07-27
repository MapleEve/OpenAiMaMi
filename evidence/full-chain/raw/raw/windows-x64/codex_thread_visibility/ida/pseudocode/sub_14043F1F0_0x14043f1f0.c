// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x14043f1f0
// name: sub_14043F1F0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14043F1F0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[6];
  if ( v3 )
    return sub_140001660(a1[7], v3, 1);
  return result;
}