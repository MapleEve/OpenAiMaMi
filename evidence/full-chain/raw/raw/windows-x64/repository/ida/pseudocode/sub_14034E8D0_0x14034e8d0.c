// module: codexmate_lib/core/repository
// addr: 0x14034e8d0
// name: sub_14034E8D0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14034E8D0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = a1[2];
  if ( v2 )
    result = sub_140001660(a1[3], v2, 1);
  v4 = a1[5];
  if ( v4 )
    result = sub_140001660(a1[6], v4, 1);
  v5 = a1[8];
  if ( v5 > 0 )
    result = sub_140001660(a1[9], v5, 1);
  v6 = a1[11];
  if ( v6 > 0 )
    result = sub_140001660(a1[12], v6, 1);
  v7 = a1[14];
  if ( v7 > 0 )
    return sub_140001660(a1[15], v7, 1);
  return result;
}