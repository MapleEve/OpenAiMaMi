// win 1.2.7 | module src/core/analytics/index.rs | ea 0x1403fc2d0 | name sub_1403FC2D0
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403FC2D0(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  _QWORD *v4; // rsi
  __int64 i; // [rsp+30h] [rbp-10h]

  v2 = *(_QWORD **)(a1 + 8);
  for ( i = *(_QWORD *)(a1 + 16); ; --i )
  {
    result = i;
    if ( !i )
      break;
    v4 = v2 + 18;
    sub_14038D330(v2);
    v2 = v4;
  }
  return result;
}
