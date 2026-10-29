// win 1.2.7 | module src/core/analytics/index.rs | ea 0x1402990b0 | name sub_1402990B0
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402990B0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-20h]
  __int64 *v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]
  __int64 v8; // [rsp+38h] [rbp-8h]

  v2 = a1[1];
  v6 = a1;
  v5 = a1[2];
  v7 = 0;
  v8 = v2;
  while ( v5 != v7 )
  {
    ++v7;
    v3 = v2 + 144;
    sub_14038D330();
    v2 = v3;
  }
  result = *v6;
  if ( *v6 )
    return sub_140001660(v8, 144 * result, 8);
  return result;
}
