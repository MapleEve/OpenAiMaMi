// module: codexmate_lib/core/repository
// addr: 0x14034ea30
// name: sub_14034EA30
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14034EA30(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v2 = a1[23];
  if ( v2 )
    result = sub_140001660(a1[24], v2, 1);
  v4 = a1[26];
  if ( v4 )
    result = sub_140001660(a1[27], v4, 1);
  v5 = a1[29];
  if ( v5 )
    result = sub_140001660(a1[30], v5, 1);
  v6 = a1[32];
  if ( v6 > 0 )
    result = sub_140001660(a1[33], v6, 1);
  v7 = a1[35];
  if ( v7 > 0 )
    result = sub_140001660(a1[36], v7, 1);
  v8 = a1[38];
  if ( v8 > 0 )
    return sub_140001660(a1[39], v8, 1);
  return result;
}