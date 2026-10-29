// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x14038c9c0 | name sub_14038C9C0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14038C9C0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[4];
  if ( v3 )
    result = sub_140001660(a1[5], v3, 1);
  v4 = a1[10];
  if ( v4 != -1 && v4 )
    result = sub_140001660(a1[11], v4, 1);
  v5 = a1[7];
  if ( v5 )
    result = sub_140001660(a1[8], v5, 1);
  v6 = a1[14];
  if ( v6 != -1 && v6 )
    result = sub_140001660(a1[15], v6, 1);
  v7 = a1[17];
  if ( v7 != -1 && v7 )
    result = sub_140001660(a1[18], v7, 1);
  v8 = a1[20];
  if ( v8 != -1 )
  {
    if ( v8 )
      return sub_140001660(a1[21], v8, 1);
  }
  return result;
}
