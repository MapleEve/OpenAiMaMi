// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1402c7ee0
// name: sub_1402C7EE0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402C7EE0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[4];
  if ( v3 != -1 )
  {
    if ( v3 )
      result = sub_140001660(a1[5], v3, 1);
    v4 = a1[7];
    if ( v4 )
      result = sub_140001660(a1[8], v4, 1);
  }
  v5 = a1[10];
  if ( v5 != -1 )
  {
    if ( v5 )
      result = sub_140001660(a1[11], v5, 1);
    v6 = a1[13];
    if ( v6 )
      return sub_140001660(a1[14], v6, 1);
  }
  return result;
}