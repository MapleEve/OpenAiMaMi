// win 1.2.7 | module src/core/sessions.rs | ea 0x14190fab0 | name sub_14190FAB0
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14190FAB0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  v2 = 4;
  if ( (unsigned __int64)(2 * *a1) >= 5 )
    v2 = 2 * *a1;
  sub_1419103E0((unsigned int)&v4, *a1, a1[1], v2, 8, 536);
  if ( v4 == 1 )
    sub_141938D2B(v5, v6);
  result = v5;
  a1[1] = v5;
  *a1 = v2;
  return result;
}
