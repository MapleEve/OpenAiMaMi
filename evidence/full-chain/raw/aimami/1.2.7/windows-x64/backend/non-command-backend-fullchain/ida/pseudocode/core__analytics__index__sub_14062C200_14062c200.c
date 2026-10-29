// win 1.2.7 | module src/core/analytics/index.rs | ea 0x14062c200 | name sub_14062C200
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14062C200(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  v2 = a1[2];
  if ( v2 )
    result = sub_140001660(a1[3], v2, 1);
  v4 = a1[5];
  if ( v4 )
    result = sub_140001660(a1[6], v4, 1);
  v5 = a1[8];
  if ( v5 )
    return sub_140001660(a1[9], v5, 1);
  return result;
}
