// win 1.2.7 | module src/core/relay/quota.rs | ea 0x1407ac640 | name sub_1407AC640
// win 1.2.7 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407AC640(__int64 a1)
{
  _QWORD *v1; // rsi

  sub_140757C80(a1);
  v1 = *(_QWORD **)(a1 + 128);
  if ( *v1 )
    sub_140001660(v1[1], *v1, 1);
  return sub_140001660(v1, 88, 8);
}
