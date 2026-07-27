// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1406ce150
// name: sub_1406CE150
// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406CE150(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[3];
  if ( v3 )
    result = sub_140001660(a1[4], v3, 1);
  v4 = a1[6];
  if ( v4 )
    result = sub_140001660(a1[7], v4, 1);
  v5 = a1[9];
  if ( v5 != -1 )
  {
    if ( v5 )
      return sub_140001660(a1[10], v5, 1);
  }
  return result;
}