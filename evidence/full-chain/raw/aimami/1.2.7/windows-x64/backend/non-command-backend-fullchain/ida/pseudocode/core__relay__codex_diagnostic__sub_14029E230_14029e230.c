// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x14029e230 | name sub_14029E230
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14029E230(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[4];
  if ( v3 )
    result = sub_140001660(a1[5], v3, 1);
  v4 = a1[7];
  if ( v4 )
    result = sub_140001660(a1[8], v4, 1);
  v5 = a1[10];
  if ( v5 != -1 && v5 )
    result = sub_140001660(a1[11], v5, 1);
  v6 = a1[13];
  if ( v6 != -1 && v6 )
    result = sub_140001660(a1[14], v6, 1);
  v7 = a1[16];
  if ( v7 )
    result = sub_140001660(a1[17], v7, 1);
  v8 = a1[19];
  if ( v8 != -1 && v8 )
    result = sub_140001660(a1[20], v8, 1);
  v9 = a1[22];
  if ( v9 != -1 && v9 )
    result = sub_140001660(a1[23], v9, 1);
  v10 = a1[25];
  if ( v10 )
    result = sub_140001660(a1[26], v10, 1);
  v11 = a1[31];
  if ( v11 )
    result = sub_140001660(a1[32], v11, 1);
  v12 = a1[37];
  if ( v12 != -1 )
  {
    if ( v12 )
      return sub_140001660(a1[38], v12, 1);
  }
  return result;
}
