// win 1.2.7 | module src/core/analytics/index.rs | ea 0x14038d330 | name sub_14038D330
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14038D330(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( *a1 )
    sub_140001660(a1[1], *a1, 1);
  v2 = a1[3];
  if ( v2 )
    sub_140001660(a1[4], v2, 1);
  v3 = a1[6];
  if ( v3 )
    sub_140001660(a1[7], v3, 1);
  v4 = a1[9];
  if ( v4 )
    sub_140001660(a1[10], v4, 1);
  return sub_1403880E0(a1 + 12);
}
